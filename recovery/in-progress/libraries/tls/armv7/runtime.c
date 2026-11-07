/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

uint recovered_10002cf0(uint param_1,uint param_2)

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
 * Address: 0x10002d40
 */

uint recovered_10002d40(uint param_1,uint param_2)

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
 * Address: 0x10002d78
 */

uint recovered_10002d78(uint param_1,uint param_2)

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
 * Address: 0x10002de8
 */

uint recovered_10002de8(uint param_1,uint param_2)

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
 * Address: 0x10002e54
 */

ulonglong recovered_10002e54(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_100056e8((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e64
 */

longlong recovered_10002e64(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10005628((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e74
 */

float recovered_10002e74(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10005770(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

float recovered_10002e90(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100057b8(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eb0
 */

void recovered_10002eb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010078 = 0;
  recovered_10002ec8();
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
#define DAT_10010078 (*(char *)(((uintptr_t)pf_module_state + 0x768U)))
#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76cU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x770U)))
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
 * Address: 0x10002ec8
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002ec8(void)

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
        if (iVar12 == 0) goto LAB_100030d8;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_10006ff4((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_1001007c != 0) goto LAB_10003210;
    }
  }
LAB_100030d8:
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
joined_r0x100032b8:
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
      goto joined_r0x100032b8;
    }
  }
LAB_10003210:
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
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x76cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c0
 */

int recovered_100032c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_10002ec8();
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
#define DAT_1001007c (*(int *)(((uintptr_t)pf_module_state + 0x76cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003304
 */

void recovered_10003304(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10002ec8();
  for (iVar1 = DAT_1001007c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(int * *)(((uintptr_t)pf_module_state + 0x76cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003354
 */

int recovered_10003354(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10002ec8();
  iVar1 = 0;
  for (piVar2 = DAT_1001007c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(int *)(((uintptr_t)pf_module_state + 0x76cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003390
 */

void recovered_10003390(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10002ec8();
  for (iVar1 = DAT_1001007c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x76cU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint * *)(((uintptr_t)pf_module_state + 0x770U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d4
 */

uint * recovered_100033d4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_10002ec8();
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
 * Address: 0x100034e0
 */

longlong recovered_100034e0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10003534
 */

ulonglong recovered_10003534(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10003588
 */

undefined8 recovered_10003588(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100035d4
 */

undefined8 recovered_100035d4(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100036b8
 */

undefined8 recovered_100036b8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003738
 */

undefined8 recovered_10003738(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003850
 */

undefined8 recovered_10003850(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000390c
 */

void recovered_1000390c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003914
 */

int recovered_10003914(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10003920(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10003974(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100039c4(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a18
 */

void * recovered_10003a18(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10003a54;
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
          if (uVar6 == uVar9) goto LAB_10003be8;
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
LAB_10003be8:
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
        if (uVar9 == uVar6) goto LAB_10003a4c;
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
LAB_10003a4c:
  if (uVar8 == 0) {
    return destination;
  }
LAB_10003a54:
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
 * Address: 0x10003c9c
 */

void * recovered_10003c9c(void *destination,void *source,ulong count)

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
      goto LAB_10003ce4;
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
          if (puVar8 == (undefined8 *)count) goto LAB_10003f70;
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
LAB_10003f70:
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
        if ((undefined8 *)count == puVar8) goto LAB_10003fec;
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
LAB_10003fec:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10003ce4:
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
    goto LAB_10003d60;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10003ffc:
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
          goto LAB_10003ffc;
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
        if (uVar5 == uVar7) goto LAB_100040d8;
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
LAB_100040d8:
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
      if (uVar7 == uVar5) goto LAB_10004194;
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
LAB_10004194:
  if (uVar9 == 0) {
    return destination;
  }
LAB_10003d60:
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
 * Address: 0x100041a8
 */

void * recovered_100041a8(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x10004330;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x10004248:
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
        if (uVar6 == uVar7) goto joined_r0x100042d4;
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
      goto joined_r0x10004248;
    }
  }
joined_r0x100042d4:
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
      if (uVar7 == uVar6) goto joined_r0x10004330;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x10004330:
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
 * Address: 0x100043a8
 */

void recovered_100043a8(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10004528;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10004444:
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
        if (uVar7 == uVar8) goto joined_r0x100044c8;
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
      goto joined_r0x10004444;
    }
  }
joined_r0x100044c8:
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
      if (uVar7 == uVar8) goto joined_r0x10004528;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10004528:
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
 * Address: 0x100045a4
 */

void recovered_100045a4(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10004724;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10004640:
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
        if (uVar7 == uVar8) goto joined_r0x100046c4;
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
      goto joined_r0x10004640;
    }
  }
joined_r0x100046c4:
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
      if (uVar7 == uVar8) goto joined_r0x10004724;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10004724:
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
 * Address: 0x100047a0
 */

int recovered_100047a0(void *left,void *right,ulong count)

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
LAB_10004898:
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
      if (uVar5 != uVar6) goto LAB_10004990;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10004990;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10004990;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10004990;
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
LAB_100048c8:
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
      if (uVar5 != uVar6) goto LAB_100048c8;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10004998(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10004898;
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
LAB_10004990:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004998
 */

int recovered_10004998(byte *param_1,byte *param_2)

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
 * Address: 0x100049e8
 */

bool recovered_100049e8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049fc
 */

bool recovered_100049fc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a10
 */

bool recovered_10004a10(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a28
 */

bool recovered_10004a28(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a54
 */

bool recovered_10004a54(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a74
 */

bool recovered_10004a74(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a88
 */

int recovered_10004a88(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a98
 */

int recovered_10004a98(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa8
 */

ulong recovered_10004aa8(char *text)

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
 * Address: 0x10004ad0
 */

int recovered_10004ad0(char *left,char *right)

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
LAB_10004b08:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_10004b08;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b14
 */

int recovered_10004b14(byte *param_1,byte *param_2)

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
LAB_10004b4c:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10004b4c;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b58
 */

void recovered_10004b58(int param_1,int param_2)

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
 * Address: 0x10004b74
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10004b74(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10004c3c;
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
          if (uVar8 == uVar11) goto LAB_10004dd0;
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
LAB_10004dd0:
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
        if (uVar11 == uVar8) goto LAB_10004c34;
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
LAB_10004c34:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10004c3c:
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
 * Address: 0x10004e88
 */

char * recovered_10004e88(char *param_1,char param_2)

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
 * Address: 0x10004ebc
 */

int recovered_10004ebc(char *param_1,char *param_2)

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
 * Address: 0x10004f20
 */

char * recovered_10004f20(char *param_1,char *param_2)

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
 * Address: 0x10004f80
 */

char * recovered_10004f80(char *param_1,char *param_2)

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


#undef DAT_1000f934
#define DAT_1000f934 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe4
 */

undefined * recovered_10004fe4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000f934;
}

#undef DAT_1000f934

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ff4
 */

undefined ** recovered_10004ff4(void)

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
 * Address: 0x10005004
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005004(undefined4 *param_1)

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
 * Address: 0x100050b4
 */

double recovered_100050b4(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x100050f8
 */

double recovered_100050f8(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x100051b0
 */

double recovered_100051b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100051e8
 */

double recovered_100051e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10005268
 */

double recovered_10005268(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10005298
 */

double recovered_10005298(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x100052dc
 */

double recovered_100052dc(undefined4 param_1,undefined4 param_2)

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


#undef DAT_10005458
#define DAT_10005458 (*(double *)(0x10005458U))
#undef DAT_10005460
#define DAT_10005460 (*(double *)(0x10005460U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005328
 */

double recovered_10005328(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10005458
#undef DAT_10005460

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005468
 */

longlong recovered_10005468(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10005628(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10005528
#define DAT_10005528 (*(double *)(0x10005528U))
#undef DAT_10005530
#define DAT_10005530 (*(double *)(0x10005530U))
#undef DAT_10005538
#define DAT_10005538 (*(double *)(0x10005538U))
#undef DAT_10005540
#define DAT_10005540 (*(double *)(0x10005540U))
#undef DAT_10005548
#define DAT_10005548 (*(double *)(0x10005548U))
#undef DAT_10005550
#define DAT_10005550 (*(double *)(0x10005550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005498
 */

double recovered_10005498(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10005528
#undef DAT_10005530
#undef DAT_10005538
#undef DAT_10005540
#undef DAT_10005548
#undef DAT_10005550

#undef DAT_100055e0
#define DAT_100055e0 (*(double *)(0x100055e0U))
#undef DAT_100055e8
#define DAT_100055e8 (*(double *)(0x100055e8U))
#undef DAT_100055f0
#define DAT_100055f0 (*(double *)(0x100055f0U))
#undef DAT_100055f8
#define DAT_100055f8 (*(double *)(0x100055f8U))
#undef DAT_10005600
#define DAT_10005600 (*(double *)(0x10005600U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005558
 */

double recovered_10005558(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100055e0
#undef DAT_100055e8
#undef DAT_100055f0
#undef DAT_100055f8
#undef DAT_10005600

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005608
 */

double recovered_10005608(undefined4 param_1,undefined4 param_2)

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
long long recovered_10005628(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_100056e8(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10005770(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_100057b8(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_10005888
#define DAT_10005888 (*(float *)(0x10005888U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005848
 */

float recovered_10005848(float param_1,float param_2)

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

#undef DAT_10005888

#undef DAT_10005944
#define DAT_10005944 (*(float *)(0x10005944U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000588c
 */

float recovered_1000588c(float param_1,float *param_2)

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

#undef DAT_10005944

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005948
 */

float recovered_10005948(float param_1,uint param_2)

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


#undef DAT_10005a18
#define DAT_10005a18 (*(float *)(0x10005a18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005994
 */

float recovered_10005994(float param_1,float param_2)

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

#undef DAT_10005a18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a1c
 */

float recovered_10005a1c(float param_1)

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
 * Address: 0x10005a54
 */

float recovered_10005a54(float param_1)

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
 * Address: 0x10005aa0
 */

double recovered_10005aa0(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10005af4
 */

float recovered_10005af4(float param_1)

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


#undef DAT_10005ba4
#define DAT_10005ba4 (*(float *)(0x10005ba4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b50
 */

float recovered_10005b50(float param_1)

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

#undef DAT_10005ba4

#undef DAT_10005ce0
#define DAT_10005ce0 (*(double *)(0x10005ce0U))
#undef DAT_10005ce8
#define DAT_10005ce8 (*(float *)(0x10005ce8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ba8
 */

float recovered_10005ba8(float param_1)

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

#undef DAT_10005ce0
#undef DAT_10005ce8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cec
 */

void recovered_10005cec(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  recovered_10005628(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return;
}


#undef DAT_10005db8
#define DAT_10005db8 (*(double *)(0x10005db8U))
#undef DAT_10005dc0
#define DAT_10005dc0 (*(double *)(0x10005dc0U))
#undef DAT_10005dc8
#define DAT_10005dc8 (*(double *)(0x10005dc8U))
#undef DAT_10005dd0
#define DAT_10005dd0 (*(double *)(0x10005dd0U))
#undef DAT_10005dd8
#define DAT_10005dd8 (*(double *)(0x10005dd8U))
#undef DAT_10005de0
#define DAT_10005de0 (*(double *)(0x10005de0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d20
 */

float recovered_10005d20(float param_1)

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

#undef DAT_10005db8
#undef DAT_10005dc0
#undef DAT_10005dc8
#undef DAT_10005dd0
#undef DAT_10005dd8
#undef DAT_10005de0

#undef DAT_10005e78
#define DAT_10005e78 (*(double *)(0x10005e78U))
#undef DAT_10005e80
#define DAT_10005e80 (*(double *)(0x10005e80U))
#undef DAT_10005e88
#define DAT_10005e88 (*(double *)(0x10005e88U))
#undef DAT_10005e90
#define DAT_10005e90 (*(double *)(0x10005e90U))
#undef DAT_10005e98
#define DAT_10005e98 (*(double *)(0x10005e98U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de8
 */

float recovered_10005de8(float param_1)

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

#undef DAT_10005e78
#undef DAT_10005e80
#undef DAT_10005e88
#undef DAT_10005e90
#undef DAT_10005e98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ea0
 */

float recovered_10005ea0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ebc
 */

int recovered_10005ebc(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10006010
 */

int recovered_10006010(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x1000608c;
  }
  bVar2 = false;
joined_r0x1000608c:
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
 * Address: 0x10006170
 */

double recovered_10006170(byte *param_1,undefined4 *param_2)

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
      goto LAB_1000625c;
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
LAB_1000625c:
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
 * Address: 0x10006344
 */

float recovered_10006344(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006170(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000f939
#define DAT_1000f939 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef str_1000f940
#define str_1000f940 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000f951
#define str_1000f951 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(double * *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(byte * *)(frame + 28))
#define local_60 (*(byte (*)[64])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006360
 */

int recovered_10006360(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_100063d4:
  do {
    while( true ) {
      pcVar5 = str_1000f951;
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
LAB_100063c8:
        param_1 = param_1 + 1;
        local_68 = local_68 - 1;
      }
LAB_100063cc:
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
          goto LAB_10006470;
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
LAB_10006470:
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
switchD_10006608_caseD_4a:
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
      }
      local_70 = local_70 + 1;
      param_4 = pdVar2;
      goto LAB_10006de4;
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
        goto LAB_10006890;
      }
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10006890:
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
        local_60[-iVar16] = str_1000f951[uVar10 + uVar11 * -10];
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
        goto LAB_10006de4;
      }
      goto LAB_10006df0;
    default:
      goto switchD_10006608_caseD_4a;
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
        goto LAB_10006bd8;
      case 6:
        uVar14 = *(uint *)pdVar2;
        uVar10 = (int)uVar14 >> 0x1f;
        goto LAB_10006bd8;
      }
      uVar10 = 0;
LAB_10006bd8:
      iVar6 = 0;
      if (uVar9 == 0x58) {
        pcVar5 = str_1000f940;
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
LAB_10006de4:
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_68) {
        *param_1 = (byte)*(undefined4 *)pdVar2;
        goto LAB_100063c8;
      }
      goto LAB_100063cc;
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
                        goto LAB_10006788;
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
LAB_10006788:
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
          local_60[-iVar16] = str_1000f951[uVar10 + uVar11 * -10];
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
LAB_10006cf0:
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
                      goto LAB_10006cf0;
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
        local_60[iVar16] = str_1000f951[uVar9 & 0xf];
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
        pbVar12 = &DAT_1000f939;
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
        goto LAB_10006de4;
      }
      goto LAB_10006e04;
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
        goto LAB_10006d18;
      case 6:
        uVar10 = *(uint *)pdVar2;
        uVar9 = (int)uVar10 >> 0x1f;
        goto LAB_10006d18;
      }
      uVar9 = 0;
LAB_10006d18:
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
        local_60[-iVar16] = str_1000f951[uVar10 + uVar11 * -10];
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
        goto LAB_10006de4;
      }
LAB_10006df0:
      param_4 = local_6c;
LAB_10006e04:
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
  goto LAB_100063d4;
}

#undef DAT_1000f939
#undef str_1000f940
#undef str_1000f951
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10006fc4(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10006360(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76cU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x770U)))
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
 * Address: 0x10006ff4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006ff4(int *param_1,int *param_2,int *param_3)

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
      bVar6 = pcVar4 == pf_varargs_10006fc4__4_;
    }
    if (bVar7 && !bVar6) {
      if (param_1 < pf_varargs_10006fc4__4_) {
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
      goto LAB_10007144;
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
LAB_10007144:
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
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x774U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
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
 * Address: 0x100071e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100071e0(char *param_1,int param_2)

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
        if (DAT_10010084 != 0) {
          DAT_10010084 = DAT_10010084 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_10010084 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10003a18(local_224,&DAT_10010088,DAT_10010084);
            uVar2 = DAT_10010084;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_10010084 = 0;
        }
        else {
          if (DAT_10010084 - 0x1ff < 0xfffffe00) {
            recovered_10003a18(local_224,&DAT_10010088,DAT_10010084);
            local_224[DAT_10010084] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_10010084 = 0;
          }
          (&DAT_10010088)[DAT_10010084] = cVar1;
          DAT_10010084 = DAT_10010084 + 1;
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
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x774U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
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
 * Address: 0x100073c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100073c4(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_10010084 != 0) {
    recovered_10003a18(local_210,&DAT_10010088,DAT_10010084);
    uVar1 = DAT_10010084;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_10010084 = 0;
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
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x774U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
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
 * Address: 0x10007484
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007484(void)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_10010084 == 0) {
    return;
  }
  recovered_10003a18(auStack_214,&DAT_10010088,DAT_10010084);
  auStack_214[DAT_10010084] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_10010084 = 0;
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

#undef DAT_1000f938
#define DAT_1000f938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000f962
#define DAT_1000f962 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007540
 */

void recovered_10007540(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_1000f962;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000f938;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10006fc4(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_100071e0(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000f938
#undef DAT_1000f962
#undef acStack_14c

#undef DAT_1000f980
#define DAT_1000f980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000f965
#define str_1000f965 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007598
 */

void recovered_10007598(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10004aa8(str_1000f965);
  recovered_100071e0(str_1000f965,uVar1);
  uVar1 = recovered_10004aa8(&DAT_1000f980);
  recovered_100071e0(&DAT_1000f980,uVar1);
  return;
}

#undef DAT_1000f980
#undef str_1000f965

#undef DAT_1000f980
#define DAT_1000f980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000f983
#define str_1000f983 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075e4
 */

void recovered_100075e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10004aa8(str_1000f983);
  recovered_100071e0(str_1000f983,uVar1);
  uVar1 = recovered_10004aa8(&DAT_1000f980);
  recovered_100071e0(&DAT_1000f980,uVar1);
  return;
}

#undef DAT_1000f980
#undef str_1000f983

#undef DAT_10010084
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x774U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
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
 * Address: 0x10007630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10007630(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_10010084 != 0) {
    recovered_10003a18(auStack_224,&DAT_10010088,DAT_10010084);
    auStack_224[DAT_10010084] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_10010084 = 0;
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
 * Address: 0x10007784
 */

undefined4 recovered_10007784(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000778c
 */

void recovered_1000778c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007790
 */

undefined4 recovered_10007790(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000f962
#define DAT_1000f962 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
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
#undef str_1000fa17
#define str_1000fa17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_1000fa24
#define str_1000fa24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_1000fa32
#define str_1000fa32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122U)))
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007798
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007798(char *param_1,int param_2)

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
    goto LAB_10007a0c;
  }
  iVar2 = recovered_10004ad0(param_1,str_1000fa17);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10007998:
    puVar4 = recovered_10003920(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100041a8(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      pf_varargs_10006fc4__4_((char *)(puVar4 + 1),0xf1,&DAT_1000f962,(uint)param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10004ad0(param_1,str_1000fa24);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10007998;
    }
    iVar3 = recovered_10004ad0(param_1,str_1000fa32);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10007998;
    }
    puVar4 = recovered_10003920(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100041a8(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10004e88(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10004e88(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10004e88(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10004e88(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10004e88(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10004e88(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10004e88(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      pf_varargs_10006fc4__4_((char *)(puVar4 + 1),0xf1,&DAT_1000f962,(uint)param_1);
      recovered_100041a8(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10004e88(unaff_r8,'w');
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
              destination = recovered_100039c4((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_10007a34;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_10003a18(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_10007a34:
        *DAT_10014004 = uVar7;
        recovered_10003974(puVar4);
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
LAB_10007a0c:
  *DAT_10014004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000f962
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000fa17
#undef str_1000fa24
#undef str_1000fa32
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
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
 * Address: 0x10007b1c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007b1c(char *param_1,int param_2,uint *param_3)

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
      recovered_10003974((void *)param_3[0x3f]);
    }
    recovered_10003974(param_3);
  }
  recovered_10007798(param_1,param_2);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
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
 * Address: 0x10007c1c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007c1c(uint *param_1)

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
    recovered_10003974((void *)param_1[0x3f]);
  }
  recovered_10003974(param_1);
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
 * Address: 0x10007d14
 */

uint recovered_10007d14(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_10003a18(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10002cf0(count,param_2);
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
            uVar1 = recovered_10007e40(unaff_r4);
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


#undef DAT_1000f938
#define DAT_1000f938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x774U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
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
 * Address: 0x10007e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10007e40(int *param_1)

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
LAB_10007e9c:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_10010084 != 0) {
      recovered_10003a18(auStack_220,&DAT_10010088,DAT_10010084);
      auStack_220[DAT_10010084] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_10010084 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000f938,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10004aa8(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10007e9c;
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

#undef DAT_1000f938
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008040
 */

int recovered_10008040(void *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_100071e0(param_1,count);
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
        pvVar1 = recovered_100039c4((void *)param_4[0x3f],size);
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
        recovered_100041a8((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10003a18((void *)(param_4[0x3f] + uVar2),param_1,count);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081b8
 */

undefined4 recovered_100081b8(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_100081cc;
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
LAB_100081cc:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008268
 */

undefined4 recovered_10008268(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
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
 * Address: 0x10008290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008290(uint *param_1)

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
 * Address: 0x10008368
 */

undefined1 recovered_10008368(int param_1)

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
 * Address: 0x10008378
 */

undefined1 recovered_10008378(int param_1)

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
 * Address: 0x10008388
 */

void recovered_10008388(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083a4
 */

void recovered_100083a4(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
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
 * Address: 0x100083c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100083c8(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46f4U)))
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
 * Address: 0x10008458
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008458(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_100041a8(&local_28,0,0xc);
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
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100085cc(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_100041a8(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_10003920(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_10003a18(destination,local_24,local_20);
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
 * Address: 0x100086cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100086cc(int param_1,int param_2,int param_3)

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
 * Address: 0x10008754
 */

undefined4 recovered_10008754(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000875c
 */

void recovered_1000875c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

undefined4 recovered_10008760(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008768
 */

undefined4 recovered_10008768(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008770
 */

undefined4 recovered_10008770(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008778
 */

char * recovered_10008778(char *param_1,char param_2,int param_3)

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
 * Address: 0x100087ac
 */

int recovered_100087ac(char *left,char *right,ulong count)

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


#undef DAT_1000f9a6
#define DAT_1000f9a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000f9a9
#define str_1000f9a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_1000f9b6
#define str_1000f9b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6U)))
#undef str_1000f9c0
#define str_1000f9c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_1000f9d4
#define str_1000f9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000f9e2
#define str_1000f9e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2U)))
#undef str_1000f9f4
#define str_1000f9f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000fa00
#define str_1000fa00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1000fa11
#define str_1000fa11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087f0
 */

char * recovered_100087f0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000f9a6;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10008810_caseD_0;
  default:
    pcVar1 = str_1000fa11;
switchD_10008810_caseD_0:
    return pcVar1;
  case 2:
    return str_1000f9a9;
  case 5:
    return str_1000f9b6;
  case 9:
    return str_1000f9c0;
  case 0xc:
    return str_1000f9d4;
  case 0xd:
    return str_1000f9e2;
  case 0x11:
    return str_1000f9f4;
  case 0x16:
    return str_1000fa00;
  }
}

#undef DAT_1000f9a6
#undef str_1000f9a9
#undef str_1000f9b6
#undef str_1000f9c0
#undef str_1000f9d4
#undef str_1000f9e2
#undef str_1000f9f4
#undef str_1000fa00
#undef str_1000fa11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088f0
 */

undefined4 recovered_100088f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088f8
 */

undefined4 recovered_100088f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10010288
#define DAT_10010288 (*(int *)(((uintptr_t)pf_module_state + 0x978U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008900
 */

void recovered_10008900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010288 = DAT_10010288 + 1;
  return;
}

#undef DAT_10010288

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10008928(void *context){__asm__ volatile("ldr sp,[r0,#40]\nldr r7,[r0,#32]\nldr ip,[r0,#36]\nbx ip");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10008938(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10008950(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


#undef DAT_100089f4
#define DAT_100089f4 (*(int *)(0x100089f4U))
#undef DAT_100089f8
#define DAT_100089f8 (*(int *)(0x100089f8U))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_24 (*(code * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(undefined1 * *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008970
 */

void recovered_10008970(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_100089fc;
  local_20 = ((uintptr_t)pf_module_state + 0x4f0U);
  local_18 = (0x1cU) + 0x100089a8;
  local_38 = 1;
  recovered_10008fec(&uStack_3c);
  recovered_1000390c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x100089d0);
  (*pcVar1)();
}

#undef DAT_100089f4
#undef DAT_100089f8
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089fc
 */

undefined4 recovered_100089fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a04
 */

void recovered_10008a04(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008a14(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10008970();
}


#undef DAT_1001028c
#define DAT_1001028c (*(int *)(((uintptr_t)pf_module_state + 0x97cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a14
 */

void recovered_10008a14(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1001028c;
  DAT_1001028c = param_1;
  recovered_10008e88(param_1);
  return;
}

#undef DAT_1001028c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a4c
 */

void * recovered_10008a4c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10003920(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_1000390c();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a78
 */

void * recovered_10008a78(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10003920(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_1000390c();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10008b64
#define DAT_10008b64 (*(int *)(0x10008b64U))
#undef DAT_10008b68
#define DAT_10008b68 (*(int *)(0x10008b68U))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008aa4
 */

void recovered_10008aa4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100089fc;
  local_78 = ((uintptr_t)pf_module_state + 0x500U);
  local_70 = (0x3cU) + 0x10008af8;
  local_90 = 1;
  recovered_10008fec(&uStack_94);
  recovered_10003974(param_1);
  recovered_10009010(&uStack_94);
  return;
}

#undef DAT_10008b64
#undef DAT_10008b68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_a0
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10008c2c
#define DAT_10008c2c (*(int *)(0x10008c2cU))
#undef DAT_10008c30
#define DAT_10008c30 (*(int *)(0x10008c30U))
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
 * Address: 0x10008b6c
 */

void recovered_10008b6c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100089fc;
  local_78 = ((uintptr_t)pf_module_state + 0x510U);
  local_70 = (0x3cU) + 0x10008bc0;
  local_90 = 1;
  recovered_10008fec(&uStack_94);
  recovered_10003974(param_1);
  recovered_10009010(&uStack_94);
  return;
}

#undef DAT_10008c2c
#undef DAT_10008c30
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10008cf4
#define DAT_10008cf4 (*(int *)(0x10008cf4U))
#undef DAT_10008cf8
#define DAT_10008cf8 (*(int *)(0x10008cf8U))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c34
 */

void recovered_10008c34(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100089fc;
  local_78 = ((uintptr_t)pf_module_state + 0x520U);
  local_70 = (0x3cU) + 0x10008c88;
  local_90 = 1;
  recovered_10008fec(&uStack_94);
  recovered_10003974(param_1);
  recovered_10009010(&uStack_94);
  return;
}

#undef DAT_10008cf4
#undef DAT_10008cf8
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70

#undef DAT_10008dbc
#define DAT_10008dbc (*(int *)(0x10008dbcU))
#undef DAT_10008dc0
#define DAT_10008dc0 (*(int *)(0x10008dc0U))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cfc
 */

void recovered_10008cfc(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100089fc;
  local_78 = ((uintptr_t)pf_module_state + 0x530U);
  local_70 = (0x3cU) + 0x10008d50;
  local_90 = 1;
  recovered_10008fec(&uStack_94);
  recovered_10003974(param_1);
  recovered_10009010(&uStack_94);
  return;
}

#undef DAT_10008dbc
#undef DAT_10008dc0
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dc4
 */

undefined4 recovered_10008dc4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dcc
 */

uint recovered_10008dcc(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ddc
 */

void recovered_10008ddc(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dec
 */

void recovered_10008dec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008df0
 */

undefined4 * recovered_10008df0(uint param_1)

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
  puVar1 = recovered_10003920(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008970();
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
      if (size == uVar6) goto LAB_10008e6c;
    }
    iVar3 = (param_1 - uVar6) + 0x1c;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10008e6c:
  return puVar1 + 7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e78
 */

void recovered_10008e78(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10003974((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e88
 */

int recovered_10008e88(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}


#undef DAT_1001028c
#define DAT_1001028c (*(void * *)(((uintptr_t)pf_module_state + 0x97cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e90
 */

void recovered_10008e90(void)

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
  recovered_10003974(pointer);
  return;
}

#undef DAT_1001028c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ef8
 */

void recovered_10008ef8(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  recovered_10008f20((undefined4 *)(param_1 + -0x1c));
  return;
}


#undef DAT_1001028c
#define DAT_1001028c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x97cU)))
#undef DAT_10010290
#define DAT_10010290 (*(int * *)(((uintptr_t)pf_module_state + 0x980U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f20
 */

void recovered_10008f20(undefined4 *param_1)

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
      iVar1 = recovered_10009838((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[4] = local_24;
        param_1[3] = piVar2;
        param_1[5] = local_20;
        recovered_100090a4(param_1);
        puVar3 = DAT_1001028c;
                    /* WARNING: Subroutine does not return */
        if (DAT_1001028c == (undefined4 *)0x0) {
          recovered_10008970();
        }
        DAT_1001028c[5] = 0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 6) = 1;
        recovered_10008f20(puVar3);
        *extraout_r0 = (int)DAT_10010290;
        DAT_10010290 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10008970();
}

#undef DAT_1001028c
#undef DAT_10010290
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1001028c
#define DAT_1001028c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x97cU)))
#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fb4
 */

void recovered_10008fb4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_1001028c;
                    /* WARNING: Subroutine does not return */
  if (DAT_1001028c == (undefined4 *)0x0) {
    recovered_10008970();
  }
  DAT_1001028c[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  recovered_10008f20(puVar1);
  *extraout_r0 = DAT_10010290;
  DAT_10010290 = extraout_r0;
  return;
}

#undef DAT_1001028c
#undef DAT_10010290

#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fec
 */

void recovered_10008fec(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010290;
  DAT_10010290 = param_1;
  return;
}

#undef DAT_10010290

#undef DAT_10010290
#define DAT_10010290 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009010
 */

void recovered_10009010(undefined4 *param_1)

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
 * Address: 0x10009058
 */

void recovered_10009058(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008f20(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_10008970();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009064
 */

void recovered_10009064(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008970();
}


#undef DAT_10010290
#define DAT_10010290 (*(int * *)(((uintptr_t)pf_module_state + 0x980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009070
 */

void recovered_10009070(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10010290 != (int *)0x0) {
    DAT_10010290 = (int *)*DAT_10010290;
  }
  recovered_100090a4(param_1);
  return;
}

#undef DAT_10010290

#undef DAT_10010290
#define DAT_10010290 (*(int * *)(((uintptr_t)pf_module_state + 0x980U)))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090a4
 */

undefined4 recovered_100090a4(undefined4 *param_1)

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
LAB_10009158:
        piVar1[1] = iVar3;
        recovered_10008928((int)piVar1);
        recovered_10009070(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_10009838((int)DAT_10010290,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_10009158;
      }
      DAT_10010290 = (int *)*piVar1;
    } while (DAT_10010290 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10008970();
}

#undef DAT_10010290
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009164
 */

undefined4 recovered_10009164(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009070(in_r0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009170
 */

undefined4 recovered_10009170(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009178
 */

void recovered_10009178(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008970();
}


#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009184
 */

int recovered_10009184(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_10009270:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_10009270;
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
 * Address: 0x10009278
 */

void recovered_10009278(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000927c
 */

undefined4 recovered_1000927c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009284
 */

bool recovered_10009284(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009298
 */

bool recovered_10009298(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092d8
 */

bool recovered_100092d8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009304
 */

bool recovered_10009304(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009320
 */

bool recovered_10009320(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000933c
 */

bool recovered_1000933c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009358
 */

bool recovered_10009358(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10009378(double value) {
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
float recovered_10009460(float value){return (float)recovered_10009378((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10009560(long double value){return (long double)recovered_10009378((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10009648(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009664
 */

double recovered_10009664(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10005268(param_1,param_2);
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
 * Address: 0x100096bc
 */

ulonglong recovered_100096bc(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10009728;
    }
  }
  bVar1 = false;
joined_r0x10009728:
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
 * Address: 0x10009834
 */

ulonglong recovered_10009834(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10009728;
    }
  }
  bVar1 = false;
joined_r0x10009728:
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


#undef DAT_1000fe54
#define DAT_1000fe54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x544U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x750U)))
#define local_28 (*(byte * *)(frame + 24))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009838
 */

undefined4 recovered_10009838(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_10009bec((uint)*pbVar10,&local_28);
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
          goto LAB_10009a10;
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
LAB_10009a10:
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
LAB_10009bcc:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000fe54 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10009bec(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_10009bcc;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10009bcc;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10009bcc;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010060) goto LAB_10009ba0;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_10009bcc;
  }
LAB_10009ba0:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10009a10;
}

#undef DAT_1000fe54
#undef DAT_10010060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bec
 */

undefined4 * recovered_10009bec(uint param_1,undefined4 *param_2)

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
      goto switchD_10009c1c_caseD_5;
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
switchD_10009c1c_caseD_5:
  return puVar5;
}


#undef str_1000fa40
#define str_1000fa40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d80
 */

char * recovered_10009d80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return str_1000fa40;
}

#undef str_1000fa40

#undef DAT_1000f938
#define DAT_1000f938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
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
#define auStack_34 (*(undefined1 (*)[8])(frame + 28))
#define iStack_28 (*(int *)(frame + 40))
#define iStack_24 (*(int *)(frame + 44))
#define local_2c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009d90(void *context,void *io,char *hostname)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong count;
  int iVar2;
  uint uVar3;
  char *text;
  undefined8 uVar4;

  if (context == (void *)0x0) {
    return;
  }
  recovered_100041a8(context,0,0x1f8);
  if (io != (void *)0x0) {
    uVar4 = *(undefined8 *)((int)io + 8);
    uVar1 = *(undefined4 *)((int)io + 0x10);
    *(undefined8 *)context = *(undefined8 *)io;
    *(undefined8 *)((int)context + 8) = uVar4;
    *(undefined4 *)((int)context + 0x10) = uVar1;
  }
  text = &DAT_1000f938;
  if (hostname != (char *)0x0) {
    text = hostname;
  }
  count = recovered_10004aa8(text);
  if (0x7e < count) {
    count = 0x7f;
  }
  recovered_10003a18((void *)((int)context + 0x14),text,count);
  *(undefined1 *)((int)context + 0x14 + count) = 0;
  recovered_100041a8(auStack_34,0,0x18);
  uVar3 = 0x574d544c;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
     ((_DAT_40010968 != (code *)0x0 && (iVar2 = (*_DAT_40010968)(auStack_34), iVar2 != 0)))) {
    uVar3 = local_2c ^ iStack_28 * 0x3c6ef35f ^ iStack_24 * 0x19660d ^ 0x574d544c;
  }
  *(uint *)((int)context + 0x1f0) = uVar3 ^ (uint)context ^ *(uint *)((int)context + 0x1f0);
  return;
}

#undef DAT_1000f938
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef auStack_34
#undef iStack_28
#undef iStack_24
#undef local_2c

#undef DAT_1000a510
#define DAT_1000a510 (*(uint64_t *)(0x1000a510U))
#undef DAT_1000a518
#define DAT_1000a518 (*(uint64_t *)(0x1000a518U))
#undef DAT_1000a520
#define DAT_1000a520 (*(uint64_t *)(0x1000a520U))
#undef DAT_1000a528
#define DAT_1000a528 (*(uint64_t *)(0x1000a528U))
#undef DAT_1000fe88
#define DAT_1000fe88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x578U)))
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
#undef str_1000f9d4
#define str_1000f9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000fa6e
#define str_1000fa6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_1000fa89
#define str_1000fa89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x179U)))
#undef str_1000faa6
#define str_1000faa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_1000faae
#define str_1000faae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_1000fabb
#define str_1000fabb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abU)))
#undef str_1000fafc
#define str_1000fafc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#undef str_1000fb1e
#define str_1000fb1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
#define auStack_64c (*(undefined1 (*)[32])(frame + 20))
#define auStack_62c (*(undefined1 (*)[32])(frame + 52))
#define auStack_60c (*(undefined1 (*)[32])(frame + 84))
#define auStack_5ec (*(undefined1 (*)[32])(frame + 116))
#define auStack_5cc (*(undefined1 (*)[32])(frame + 148))
#define auStack_5ac (*(undefined1 (*)[32])(frame + 180))
#define auStack_582 (*(undefined1 (*)[32])(frame + 222))
#define auStack_559 (*(undefined1 (*)[465])(frame + 263))
#define auStack_388 (*(undefined1 (*)[32])(frame + 728))
#define auStack_368 (*(undefined1 (*)[32])(frame + 760))
#define auStack_248 (*(undefined1 (*)[32])(frame + 1048))
#define auStack_220 (*(undefined1 (*)[3])(frame + 1088))
#define uStack_21d (*(undefined4 *)(frame + 1091))
#define auStack_219 (*(undefined1 (*)[4])(frame + 1095))
#define uStack_215 (*(undefined4 *)(frame + 1099))
#define auStack_211 (*(undefined1 (*)[14])(frame + 1103))
#define uStack_203 (*(undefined4 *)(frame + 1117))
#define auStack_1ff (*(undefined1 (*)[479])(frame + 1121))
#define local_58c (*(uint *)(frame + 212))
#define local_588 (*(undefined1 *)(frame + 216))
#define local_587 (*(undefined1 *)(frame + 217))
#define local_586 (*(undefined1 *)(frame + 218))
#define local_585 (*(undefined1 *)(frame + 219))
#define local_584 (*(undefined2 *)(frame + 220))
#define local_562 (*(undefined4 *)(frame + 254))
#define local_55e (*(undefined2 *)(frame + 258))
#define local_55c (*(undefined1 *)(frame + 260))
#define local_55b (*(undefined1 *)(frame + 261))
#define local_55a (*(undefined1 *)(frame + 262))
#define local_348 (*(uint *)(frame + 792))
#define local_344 (*(undefined4 *)(frame + 796))
#define local_340 (*(undefined4 *)(frame + 800))
#define local_33c (*(undefined2 *)(frame + 804))
#define local_228 (*(ushort *)(frame + 1080))
#define local_226 (*(undefined1 *)(frame + 1082))
#define local_225 (*(undefined1 *)(frame + 1083))
#define local_224 (*(undefined4 *)(frame + 1084))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10009ee0(void *context,char *error,ulong capacity)

{
  unsigned char frame[1664] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *context_00;
  byte *pointer;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;

  local_58c = 0;
  if (context != (void *)0x0) {
    bVar9 = *(int *)((int)context + 4) != 0;
    iVar7 = 0;
    if (bVar9) {
      iVar7 = *(int *)((int)context + 8);
    }
    if ((bVar9 && iVar7 != 0) && (pcVar6 = (char *)((int)context + 0x14), *pcVar6 != '\0')) {
      uVar4 = recovered_10004aa8(pcVar6);
      if (uVar4 - 0xb5 < 0xffffff4b || uVar4 == 0) {
        pcVar6 = str_1000fa89;
      }
      else {
        context_00 = (undefined8 *)((int)context + 0x94);
        recovered_1000db40(context,auStack_248);
        recovered_1000db40(context,auStack_368);
        recovered_1000aa90(auStack_388,auStack_368,&DAT_1000fe88);
        recovered_100041a8(&local_228,0,0x200);
        recovered_100041a8(&local_348,0,0x100);
        local_344 = CONCAT31(PF_PART3(local_344, 1),(char)uVar4);
        local_348 = CONCAT31((int3)(uVar4 + 3),(char)(uVar4 + 3 >> 8)) & 0xffff;
        recovered_10003a18((void *)((int)&local_344 + 1),pcVar6,uVar4);
        uVar8 = uVar4 + 5;
        local_225 = (undefined1)uVar8;
        local_226 = (undefined1)(uVar8 >> 8);
        local_228 = 0;
        recovered_10003a18(&local_224,&local_348,uVar8 & 0xffff);
        uVar5 = uVar8 & 0xffff;
        *(undefined4 *)(auStack_220 + (uVar5 - 4)) = 0x3002b00;
        local_348 = CONCAT13(PF_PART1(local_348, 3),0x40302);
        recovered_10003a18(auStack_220 + uVar5,&local_348,3);
        *(undefined4 *)(auStack_220 + uVar5 + 3) = 0x4000a00;
        local_348 = 0x1d000200;
        recovered_10003a18(auStack_219 + uVar5,&local_348,4);
        *(undefined4 *)(auStack_219 + uVar5 + 4) = 0xe000d00;
        local_33c = 0x608;
        local_340 = 0x5080105;
        local_344 = 0x1040408;
        local_348 = 0x3040c00;
        recovered_10003a18(auStack_211 + uVar5,&local_348,0xe);
        local_344 = CONCAT22(PF_PART2(local_344, 2),0x2000);
        local_348 = 0x1d002400;
        recovered_10003a18((void *)((int)&local_344 + 2),auStack_388,0x20);
        *(undefined4 *)(auStack_211 + uVar5 + 0xe) = 0x26003300;
        recovered_10003a18(auStack_1ff + uVar5,&local_348,0x26);
        local_584 = 0x303;
        local_588 = 1;
        recovered_10003a18(auStack_582,auStack_248,0x20);
        uVar4 = (uVar8 & 0xffff) + 0x4f;
        local_55a = (undefined1)uVar4;
        local_55c = 0;
        local_55b = (undefined1)(uVar4 >> 8);
        local_55e = 0x103;
        local_562 = 0x13020000;
        recovered_10003a18(auStack_559,&local_228,uVar4);
        uVar3 = (0xa54ff53a3c6ef372U);
        uVar2 = (0x5be0cd191f83d9abU);
        uVar1 = (0x9b05688c510e527fU);
        iVar7 = (uVar8 & 0xffff) + 0x7a;
        local_585 = (undefined1)iVar7;
        local_586 = (undefined1)((uint)iVar7 >> 8);
        local_587 = 0;
        *context_00 = (0xbb67ae856a09e667U);
        *(undefined8 *)((int)context + 0x9c) = uVar3;
        *(undefined8 *)((int)context + 0xa4) = uVar1;
        *(undefined8 *)((int)context + 0xac) = uVar2;
        *(undefined4 *)((int)context + 0xb8) = 0;
        *(undefined4 *)((int)context + 0xb4) = 0;
        uVar4 = (uVar8 & 0xffff) + 0x7e;
        *(undefined4 *)((int)context + 0xfc) = 0;
        recovered_1000a530(context_00,&local_588,uVar4);
        local_225 = (undefined1)(uVar4 >> 8);
        local_228 = 0x316;
        PF_PART1(local_224, 0) = (undefined1)uVar4;
        local_226 = 1;
        recovered_10003a18((void *)((int)&local_224 + 1),&local_588,uVar4);
        if (*(code **)((int)context + 8) == (code *)0x0) {
          pcVar6 = str_1000fafc;
        }
        else {
          iVar7 = (**(code **)((int)context + 8))
                            (*(undefined4 *)context,&local_228,(uVar8 & 0xffff) + 0x83,error,
                             capacity);
          if (iVar7 == 0) {
            return 0;
          }
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
             ((_DAT_4001084c != (code *)0x0 &&
              (pointer = (byte *)(*_DAT_4001084c)(0x4100), pointer != (byte *)0x0)))) {
            local_228 = local_228 & 0xff00;
            uVar5 = recovered_1000d294(context,(void *)0x0,(byte *)&local_228,pointer,0x4100,
                                       &local_58c,error,capacity);
            if (uVar5 != 0) {
              if ((char)local_228 == '\x16') {
                iVar7 = recovered_1000a820((char *)pointer,local_58c,&local_348,error,capacity);
                if (iVar7 != 0) {
                  recovered_1000a530(context_00,pointer,local_58c);
                  recovered_1000a7d0(pointer);
                  recovered_1000aa90(auStack_248,auStack_368,&local_348);
                  recovered_100041a8(auStack_5ac,0,0x20);
                  recovered_1000c010(auStack_5ac,auStack_5ac,auStack_5cc);
                  recovered_1000c0b0(auStack_5cc,str_1000faa6,(void *)0x0,auStack_5ec);
                  recovered_1000c010(auStack_5ec,auStack_248,auStack_60c);
                  recovered_10003a18(&local_228,context_00,0x6c);
                  recovered_1000e9b0(&local_228,auStack_62c);
                  recovered_1000eae8(auStack_60c,str_1000faae,auStack_62c,0x20,&local_228,0x20);
                  recovered_1000eae8(auStack_60c,str_1000fabb,auStack_62c,0x20,auStack_64c,0x20);
                  recovered_1000c170((void *)((int)context + 0x100),&local_228);
                  recovered_1000c170((void *)((int)context + 0x134),auStack_64c);
                  *(undefined1 *)((int)context + 500) = 1;
                  iVar7 = recovered_1000c210(context,auStack_64c,auStack_60c,&local_228,error,
                                             capacity);
                  if (iVar7 == 0) {
                    return 0;
                  }
                  if (*(code **)((int)context + 0x10) == (code *)0x0) {
                    return 1;
                  }
                  iVar7 = (**(code **)((int)context + 0x10))
                                    (*(undefined4 *)context,pcVar6,(int)context + 0x1d0,
                                     *(undefined1 *)((int)context + 0x1f6),error,capacity);
                  return (uint)(iVar7 != 0);
                }
              }
              else {
                pf_varargs_10006fc4___(error,capacity,str_1000fb1e);
              }
            }
            recovered_1000a7d0(pointer);
            return 0;
          }
          pcVar6 = str_1000f9d4;
        }
      }
      goto LAB_10009f34;
    }
  }
  pcVar6 = str_1000fa6e;
LAB_10009f34:
  pf_varargs_10006fc4___(error,capacity,pcVar6);
  return 0;
}

#undef DAT_1000a510
#undef DAT_1000a518
#undef DAT_1000a520
#undef DAT_1000a528
#undef DAT_1000fe88
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef str_1000f9d4
#undef str_1000fa6e
#undef str_1000fa89
#undef str_1000faa6
#undef str_1000faae
#undef str_1000fabb
#undef str_1000fafc
#undef str_1000fb1e
#undef auStack_64c
#undef auStack_62c
#undef auStack_60c
#undef auStack_5ec
#undef auStack_5cc
#undef auStack_5ac
#undef auStack_582
#undef auStack_559
#undef auStack_388
#undef auStack_368
#undef auStack_248
#undef auStack_220
#undef uStack_21d
#undef auStack_219
#undef uStack_215
#undef auStack_211
#undef uStack_203
#undef auStack_1ff
#undef local_58c
#undef local_588
#undef local_587
#undef local_586
#undef local_585
#undef local_584
#undef local_562
#undef local_55e
#undef local_55c
#undef local_55b
#undef local_55a
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_228
#undef local_226
#undef local_225
#undef local_224

#undef DAT_1000fea8
#define DAT_1000fea8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x598U)))
#define local_124 (*(uint (*)[65])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a530
 */

void recovered_1000a530(void *context,void *data,ulong size)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;

  if (context == (void *)0x0) {
    return;
  }
  if ((data != (void *)0x0) || (size == 0)) {
    uVar3 = *(uint *)((int)context + 0x20);
    *(uint *)((int)context + 0x20) = uVar3 + size;
    *(uint *)((int)context + 0x24) = *(int *)((int)context + 0x24) + (uint)CARRY4(uVar3,size);
    if (size != 0) {
      iVar4 = *(int *)((int)context + 0x68);
      do {
        uVar3 = 0x40U - iVar4;
        if (size <= 0x40U - iVar4) {
          uVar3 = size;
        }
        recovered_10003a18((void *)((int)context + iVar4 + 0x28),data,uVar3);
        iVar4 = *(int *)((int)context + 0x68) + uVar3;
        *(int *)((int)context + 0x68) = iVar4;
        if (iVar4 == 0x40) {
          iVar4 = 0;
          do {
            uVar5 = *(uint *)((int)context + iVar4 + 0x28);
            *(uint *)((int)local_124 + iVar4) =
                 uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0x40);
          iVar4 = 0;
          uVar5 = local_124[0];
          do {
            bVar17 = iVar4 != -0x2f;
            uVar9 = local_124[0xe - iVar4];
            uVar8 = local_124[1 - iVar4];
            local_124[0x10 - iVar4] =
                 local_124[9 - iVar4] + uVar5 +
                 ((uVar8 >> 7 | uVar8 << 0x19) ^ (uVar8 >> 0x12 | uVar8 << 0xe) ^ uVar8 >> 3) +
                 ((uVar9 >> 0x11 | uVar9 << 0xf) ^ (uVar9 >> 0x13 | uVar9 << 0xd) ^ uVar9 >> 10);
            iVar4 = iVar4 + -1;
            uVar5 = uVar8;
          } while (bVar17);
          iVar4 = 0;
          uVar5 = *(uint *)context;
          uVar8 = *(uint *)((int)context + 4);
          uVar9 = *(uint *)((int)context + 0x14);
          uVar10 = *(uint *)((int)context + 0x1c);
          uVar12 = *(uint *)((int)context + 0xc);
          uVar6 = *(uint *)((int)context + 8);
          uVar15 = *(uint *)((int)context + 0x10);
          uVar7 = *(uint *)((int)context + 0x18);
          do {
            uVar16 = uVar7;
            uVar14 = uVar15;
            uVar13 = uVar6;
            uVar7 = uVar9;
            uVar6 = uVar8;
            uVar8 = uVar5;
            puVar1 = local_124 + iVar4;
            piVar2 = &DAT_1000fea8 + iVar4;
            iVar4 = iVar4 + 1;
            iVar11 = uVar10 + ((uVar14 >> 6 | uVar14 << 0x1a) ^ (uVar14 >> 0xb | uVar14 << 0x15) ^
                              (uVar14 >> 0x19 | uVar14 << 7)) + (uVar16 & ~uVar14 | uVar7 & uVar14)
                     + *piVar2 + *puVar1;
            uVar15 = iVar11 + uVar12;
            uVar5 = ((uVar13 ^ uVar6) & uVar8 ^ uVar13 & uVar6) +
                    ((uVar8 >> 2 | uVar8 << 0x1e) ^ (uVar8 >> 0xd | uVar8 << 0x13) ^
                    (uVar8 >> 0x16 | uVar8 << 10)) + iVar11;
            uVar9 = uVar14;
            uVar10 = uVar16;
            uVar12 = uVar13;
          } while (iVar4 != 0x40);
          *(uint *)((int)context + 0x1c) = uVar16 + *(uint *)((int)context + 0x1c);
          *(uint *)((int)context + 0x18) = uVar7 + *(uint *)((int)context + 0x18);
          *(uint *)((int)context + 0x14) = uVar14 + *(uint *)((int)context + 0x14);
          *(uint *)((int)context + 0x10) = uVar15 + *(uint *)((int)context + 0x10);
          *(uint *)((int)context + 0xc) = uVar13 + *(uint *)((int)context + 0xc);
          *(uint *)((int)context + 8) = uVar6 + *(uint *)((int)context + 8);
          *(uint *)((int)context + 4) = uVar8 + *(uint *)((int)context + 4);
          iVar4 = 0;
          *(uint *)context = uVar5 + *(uint *)context;
          *(undefined4 *)((int)context + 0x68) = 0;
        }
        size = size - uVar3;
        data = (void *)((int)data + uVar3);
      } while (size != 0);
    }
  }
  return;
}

#undef DAT_1000fea8
#undef local_124

/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_1000a7d0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


#undef str_1000fb3c
#define str_1000fb3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_1000fb55
#define str_1000fb55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#undef str_1000fb6f
#define str_1000fb6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
#undef str_1000fb8b
#define str_1000fb8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
#undef str_1000fba5
#define str_1000fba5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x295U)))
#undef str_1000fbd1
#define str_1000fbd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_1000fbea
#define str_1000fbea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_1000fc03
#define str_1000fc03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_1000fc19
#define str_1000fc19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x309U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a820
 */

undefined4 recovered_1000a820(char *param_1,uint param_2,void *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  byte bVar3;
  char *format;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  format = str_1000fb3c;
  if ((3 < param_2) && (*param_1 == '\x02')) {
    format = str_1000fb55;
    uVar6 = (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[1] << 0x10 | (uint)(byte)param_1[3];
    if ((0x25 < uVar6) && (uVar6 + 4 <= param_2)) {
      cVar1 = param_1[4];
      format = str_1000fb6f;
      bVar10 = cVar1 == '\x03';
      if (bVar10) {
        cVar1 = param_1[5];
      }
      if (bVar10 && cVar1 == '\x03') {
        uVar6 = (uint)(byte)param_1[0x26];
        if (param_2 < uVar6 + 0x2b) {
          format = str_1000fb8b;
        }
        else if (((uint)*(ushort *)(param_1 + uVar6 + 0x27) << 0x18 |
                 (uint)(*(ushort *)(param_1 + uVar6 + 0x27) >> 8) << 0x10) == 0x13030000) {
          format = str_1000fbd1;
          if ((param_1[uVar6 + 0x29] == '\0') && (uVar8 = uVar6 + 0x2c, uVar8 <= param_2)) {
            uVar9 = uVar8 + (((uint)*(ushort *)(param_1 + uVar6 + 0x2a) << 0x18 |
                             (uint)(*(ushort *)(param_1 + uVar6 + 0x2a) >> 8) << 0x10) >> 0x10);
            if (param_2 < uVar9) {
              format = str_1000fbea;
            }
            else {
              uVar6 = uVar6 + 0x30;
              format = str_1000fc19;
              if (uVar6 <= uVar9) {
                bVar3 = 0;
                bVar10 = false;
                do {
                  uVar5 = *(ushort *)(param_1 + uVar8);
                  uVar2 = *(ushort *)((int)(param_1 + uVar8) + 2);
                  uVar8 = uVar6 + (((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10);
                  if (uVar9 < uVar8) {
                    format = str_1000fc03;
                    goto LAB_1000a8ac;
                  }
                  uVar5 = uVar5 << 8 | uVar5 >> 8;
                  uVar4 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                  if ((uVar5 == 0x2b) && (1 < uVar4)) {
                    bVar10 = ((uint)*(ushort *)(param_1 + uVar6) << 0x18 |
                             (uint)(*(ushort *)(param_1 + uVar6) >> 8) << 0x10) == 0x3040000;
                  }
                  else if ((uVar5 == 0x33) &&
                          (((0x23 < uVar4 &&
                            (puVar7 = (ushort *)(param_1 + uVar6),
                            ((uint)*puVar7 << 0x18 | (uint)(*puVar7 >> 8) << 0x10) == 0x1d0000)) &&
                           (((uint)puVar7[1] << 0x18 | (uint)(puVar7[1] >> 8) << 0x10) == 0x200000))
                          )) {
                    recovered_10003a18(param_3,puVar7 + 2,0x20);
                    bVar3 = 1;
                  }
                  uVar6 = uVar8 + 4;
                } while (uVar6 <= uVar9);
                if ((bool)(bVar10 & bVar3)) {
                  return 1;
                }
              }
            }
          }
        }
        else {
          format = str_1000fba5;
        }
      }
    }
  }
LAB_1000a8ac:
  pf_varargs_10006fc4___(param_4,param_5,format);
  return 0;
}

#undef str_1000fb3c
#undef str_1000fb55
#undef str_1000fb6f
#undef str_1000fb8b
#undef str_1000fba5
#undef str_1000fbd1
#undef str_1000fbea
#undef str_1000fc03
#undef str_1000fc19

/* Recovered X25519 over the reference's seventeen radix-2^15 limbs.
 * Pooka's Free Software License. */
typedef struct {uint32_t limb[17];} pf_tls_field;
static pf_tls_field pf_tls_reduce(uint64_t value[17]){
 for(unsigned pass=0;pass<4;++pass){
  uint64_t carry=0;
  for(unsigned i=0;i<17;++i){uint64_t word=value[i]+carry;value[i]=word&32767;carry=word>>15;}
  value[0]+=19*carry;
 }
 pf_tls_field out;
 for(unsigned i=0;i<17;++i)out.limb[i]=(uint32_t)value[i];
 unsigned top=1;for(unsigned i=1;i<17;++i)top&=out.limb[i]==32767;
 if(top&&out.limb[0]>=32749){out.limb[0]-=32749;for(unsigned i=1;i<17;++i)out.limb[i]=0;}
 return out;
}
static pf_tls_field pf_tls_add(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_sub(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+2*(i?32767:32749)-b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_mul(pf_tls_field a,pf_tls_field b){
 uint64_t words[34]={0};
 for(unsigned i=0;i<17;++i)for(unsigned j=0;j<17;++j)words[i+j]+=(uint64_t)a.limb[i]*b.limb[j];
 for(unsigned i=33;i>16;--i)words[i-17]+=19*words[i];
 return pf_tls_reduce(words);
}
static void pf_tls_swap(pf_tls_field *a,pf_tls_field *b,unsigned bit){
 uint32_t mask=0U-bit;for(unsigned i=0;i<17;++i){uint32_t change=mask&(a->limb[i]^b->limb[i]);a->limb[i]^=change;b->limb[i]^=change;}
}
void recovered_1000aa90(void *output,void *scalar,void *point){
 if(!output||!scalar||!point)return;
 uint8_t key[32];for(unsigned i=0;i<32;++i)key[i]=((uint8_t *)scalar)[i];key[0]&=248;key[31]=(key[31]&127)|64;
 pf_tls_field x1={{0}},x2={{1}},z2={{0}},x3,z3={{1}},a24={{121665&32767,121665>>15}};
 for(unsigned i=0;i<255;++i)x1.limb[i/15]|=(uint32_t)((((uint8_t *)point)[i/8]>>(i&7))&1)<<(i%15);
 x3=x1;unsigned previous=0;
 for(int i=254;i>=0;--i){
  unsigned bit=(key[i/8]>>(i&7))&1;pf_tls_swap(&x2,&x3,previous^bit);pf_tls_swap(&z2,&z3,previous^bit);previous=bit;
  pf_tls_field a=pf_tls_add(x2,z2),b=pf_tls_sub(x2,z2),aa=pf_tls_mul(a,a),bb=pf_tls_mul(b,b),e=pf_tls_sub(aa,bb);
  pf_tls_field c=pf_tls_add(x3,z3),d=pf_tls_sub(x3,z3),da=pf_tls_mul(d,a),cb=pf_tls_mul(c,b);
  pf_tls_field sum=pf_tls_add(da,cb),difference=pf_tls_sub(da,cb);
  x3=pf_tls_mul(sum,sum);z3=pf_tls_mul(x1,pf_tls_mul(difference,difference));x2=pf_tls_mul(aa,bb);z2=pf_tls_mul(e,pf_tls_add(aa,pf_tls_mul(a24,e)));
 }
 pf_tls_swap(&x2,&x3,previous);pf_tls_swap(&z2,&z3,previous);
 pf_tls_field inverse={{1}};
 for(int bit=254;bit>=0;--bit){inverse=pf_tls_mul(inverse,inverse);if(bit!=4&&bit!=2)inverse=pf_tls_mul(inverse,z2);}
 pf_tls_field result=pf_tls_mul(x2,inverse);
 for(unsigned i=0;i<32;++i)((uint8_t *)output)[i]=0;
 for(unsigned i=0;i<255;++i)((uint8_t *)output)[i/8]|=(uint8_t)(((result.limb[i/15]>>(i%15))&1)<<(i&7));
}


#define auStack_138 (*(undefined1 (*)[32])(frame + 24))
#define auStack_118 (*(undefined1 (*)[32])(frame + 56))
#define auStack_f8 (*(undefined1 (*)[108])(frame + 88))
#define auStack_8c (*(undefined1 (*)[108])(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c010
 */

void recovered_1000c010(void *salt,void *input,void *output)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    recovered_100041a8(auStack_138,0,0x20);
    salt = auStack_138;
  }
  recovered_1000e830(auStack_8c,auStack_f8,salt);
  recovered_1000a530(auStack_8c,input,0x20);
  recovered_1000e9b0(auStack_8c,auStack_118);
  recovered_1000a530(auStack_f8,auStack_118,0x20);
  recovered_1000e9b0(auStack_f8,output);
  return;
}

#undef auStack_138
#undef auStack_118
#undef auStack_f8
#undef auStack_8c

#undef DAT_1000c150
#define DAT_1000c150 (*(uint64_t *)(0x1000c150U))
#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(0x1000c158U))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint64_t *)(0x1000c160U))
#undef DAT_1000c168
#define DAT_1000c168 (*(uint64_t *)(0x1000c168U))
#define uStack_7c (*(undefined8 *)(frame + 68))
#define uStack_6c (*(undefined8 *)(frame + 84))
#define local_84 (*(undefined8 *)(frame + 60))
#define local_74 (*(undefined8 *)(frame + 76))
#define local_64 (*(undefined4 *)(frame + 92))
#define local_60 (*(undefined4 *)(frame + 96))
#define auStack_a4 (*(undefined1 (*)[32])(frame + 28))
#define local_1c (*(undefined4 *)(frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0b0
 */

void recovered_1000c0b0(void *secret,char *label,void *hash,void *output)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};


  if (hash == (void *)0x0) {
    local_74 = (0x9b05688c510e527fU);
    uStack_6c = (0x5be0cd191f83d9abU);
    hash = auStack_a4;
    local_60 = 0;
    local_64 = 0;
    local_84 = (0xbb67ae856a09e667U);
    uStack_7c = (0xa54ff53a3c6ef372U);
    local_1c = 0;
    recovered_1000e9b0(&local_84,hash);
  }
  recovered_1000eae8(secret,label,hash,0x20,output,0x20);
  return;
}

#undef DAT_1000c150
#undef DAT_1000c158
#undef DAT_1000c160
#undef DAT_1000c168
#undef uStack_7c
#undef uStack_6c
#undef local_84
#undef local_74
#undef local_64
#undef local_60
#undef auStack_a4
#undef local_1c

#undef DAT_1000fc4c
#define DAT_1000fc4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33cU)))
#undef DAT_1000fc50
#define DAT_1000fc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x340U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c170
 */

void recovered_1000c170(void *output,void *secret)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (output == (void *)0x0) {
    return;
  }
  if (secret != (void *)0x0) {
    recovered_100041a8(output,0,0x34);
    recovered_1000eae8(secret,&DAT_1000fc4c,(void *)0x0,0,output,0x20);
    recovered_1000eae8(secret,&DAT_1000fc50,(void *)0x0,0,(void *)((int)output + 0x20),0xc);
    *(undefined4 *)((int)output + 0x30) = 0;
    *(undefined4 *)((int)output + 0x2c) = 0;
  }
  return;
}

#undef DAT_1000fc4c
#undef DAT_1000fc50

#undef DAT_1000c810
#define DAT_1000c810 (*(uint64_t *)(0x1000c810U))
#undef DAT_1000c818
#define DAT_1000c818 (*(uint64_t *)(0x1000c818U))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint64_t *)(0x1000c820U))
#undef DAT_1000c828
#define DAT_1000c828 (*(uint64_t *)(0x1000c828U))
#undef DAT_1000fc4c
#define DAT_1000fc4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33cU)))
#undef DAT_1000fc50
#define DAT_1000fc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x340U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef str_1000f9d4
#define str_1000f9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000faa6
#define str_1000faa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_1000fc53
#define str_1000fc53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x343U)))
#undef str_1000fc69
#define str_1000fc69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x359U)))
#undef str_1000fc81
#define str_1000fc81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000fc9d
#define str_1000fc9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38dU)))
#undef str_1000fca6
#define str_1000fca6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x396U)))
#undef str_1000fcc7
#define str_1000fcc7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_1000fcd4
#define str_1000fcd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c4U)))
#define auStack_2a0 (*(undefined1 (*)[32])(frame + 16))
#define local_70 (*(undefined4 *)(frame + 576))
#define auStack_280 (*(undefined1 (*)[32])(frame + 48))
#define local_6c (*(undefined4 *)(frame + 580))
#define local_28 (*(undefined4 *)(frame + 648))
#define auStack_25c (*(undefined1 (*)[32])(frame + 84))
#define auStack_23c (*(undefined1 (*)[32])(frame + 116))
#define auStack_21c (*(undefined1 (*)[32])(frame + 148))
#define auStack_1fc (*(undefined1 (*)[32])(frame + 180))
#define auStack_1dc (*(undefined1 (*)[32])(frame + 212))
#define auStack_1bc (*(undefined1 (*)[32])(frame + 244))
#define auStack_15c (*(undefined1 (*)[32])(frame + 340))
#define auStack_13c (*(undefined1 (*)[32])(frame + 372))
#define auStack_fc (*(undefined1 (*)[108])(frame + 436))
#define uStack_88 (*(undefined8 *)(frame + 552))
#define uStack_78 (*(undefined8 *)(frame + 568))
#define local_260 (*(undefined4 *)(frame + 80))
#define local_19c (*(byte (*)[32])(frame + 276))
#define local_17c (*(undefined1 (*)[16])(frame + 308))
#define local_16c (*(undefined1 (*)[16])(frame + 324))
#define local_11c (*(uint (*)[8])(frame + 404))
#define local_90 (*(undefined8 *)(frame + 544))
#define local_80 (*(undefined8 *)(frame + 560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c210
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000c210(undefined4 *param_1,void *param_2,void *param_3,void *param_4,char *param_5,
                      ulong param_6)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *source;
  byte *source_00;
  void *destination;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  uint128 auVar11;

  source_00 = (byte *)0x0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
    source_00 = (byte *)(*_DAT_4001084c)(0x4100);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x4f < _DAT_40010808 && (_DAT_4001084c != (code *)0x0)))) {
    destination = (void *)(*_DAT_4001084c)(0x8000);
    bVar9 = destination != (void *)0x0;
    if (source_00 != (byte *)0x0 && destination != (void *)0x0) {
      local_19c[0] = 0;
      local_11c[0] = 0;
      uVar1 = recovered_1000d294(param_1,param_1 + 0x4d,local_19c,source_00,0x4100,local_11c,param_5
                                 ,param_6);
      if (uVar1 != 0) {
        uVar1 = 0;
        source = param_1 + 0x25;
        do {
          if (local_19c[0] == 0x16) {
            if (0x8000 - uVar1 < local_11c[0]) {
              pcVar6 = str_1000fc69;
              goto LAB_1000cbf8;
            }
            recovered_10003a18((void *)((int)destination + uVar1),source_00,local_11c[0]);
            uVar1 = local_11c[0] + uVar1;
            if (3 < uVar1) {
              iVar4 = 0;
              do {
                pcVar6 = (char *)((int)destination + iVar4);
                uVar2 = (uint)(byte)pcVar6[2] << 8 | (uint)(byte)pcVar6[1] << 0x10 |
                        (uint)(byte)pcVar6[3];
                if (uVar1 < iVar4 + uVar2 + 4) break;
                if (*pcVar6 == '\x14') {
                  if (uVar2 != 0x20) {
                    pcVar6 = str_1000fc81;
                    goto LAB_1000cbf8;
                  }
                  recovered_10003a18(&local_90,source,0x6c);
                  recovered_1000e9b0(&local_90,auStack_13c);
                  recovered_1000eae8(param_2,str_1000fc9d,(void *)0x0,0,auStack_15c,0x20);
                  recovered_1000e830(&local_90,auStack_fc,auStack_15c);
                  recovered_1000a530(&local_90,auStack_13c,0x20);
                  recovered_1000e9b0(&local_90,&local_260);
                  recovered_1000a530(auStack_fc,&local_260,0x20);
                  recovered_1000e9b0(auStack_fc,local_17c);
                  auVar11 = *(uint128 *)(pcVar6 + 0x14) ^ PF_PART16(local_16c,0) |
                            *(uint128 *)(pcVar6 + 4) ^ PF_PART16(local_17c,0);
                  uVar10 = PF_PART8(auVar11, 0) | PF_PART8(auVar11, 8);
                  if ((((((((char)uVar10 != '\0' || (char)(uVar10 >> 8) != '\0') ||
                          (char)(uVar10 >> 0x10) != '\0') || (char)(uVar10 >> 0x18) != '\0') ||
                        (char)(uVar10 >> 0x20) != '\0') || (char)(uVar10 >> 0x28) != '\0') ||
                      (char)(uVar10 >> 0x30) != '\0') || (char)(uVar10 >> 0x38) != '\0') {
                    pcVar6 = str_1000fca6;
                    goto LAB_1000cbf8;
                  }
                  recovered_1000a530(source,pcVar6,0x24);
                  iVar4 = iVar4 + 0x24;
                  bVar9 = true;
                  goto LAB_1000c7c4;
                }
                if ((*pcVar6 == '\v') && (6 < uVar2)) {
                  pbVar3 = (byte *)(pcVar6 + 4);
                  uVar5 = (uint)*pbVar3;
                  uVar8 = uVar5 + 7;
                  if ((uVar5 + 4 <= uVar2) &&
                      ((pbVar3[uVar5+1] | pbVar3[uVar5+2] | pbVar3[uVar5+3]) != 0) &&
                      (uVar8 <= uVar2)) {
                    pbVar7 = pbVar3 + uVar5 + 4;
                    uVar5 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
                    if ((uVar5 != 0) && (uVar5 + uVar8 <= uVar2)) {
                      local_6c = 0;
                      local_70 = 0;
                      local_80 = (0x9b05688c510e527fU);
                      uStack_78 = (0x5be0cd191f83d9abU);
                      local_90 = (0xbb67ae856a09e667U);
                      uStack_88 = (0xa54ff53a3c6ef372U);
                      local_28 = 0;
                      recovered_1000a530(&local_90,pbVar3 + uVar8,uVar5);
                      recovered_1000e9b0(&local_90,param_1 + 0x74);
                      *(undefined1 *)((int)param_1 + 0x1f6) = 1;
                    }
                  }
                }
                recovered_1000a530(source,pcVar6,uVar2 + 4);
                iVar4 = uVar2 + 4 + iVar4;
              } while (iVar4 + 4U <= uVar1);
              bVar9 = false;
LAB_1000c7c4:
              if (iVar4 != 0) {
                uVar1 = uVar1 - iVar4;
                if (uVar1 == 0) {
                  uVar1 = 0;
                }
                else {
                  recovered_10003c9c(destination,(void *)((int)destination + iVar4),uVar1);
                }
              }
              goto LAB_1000c83c;
            }
          }
          else {
            bVar9 = false;
            if (local_19c[0] == 0x15) {
              pcVar6 = str_1000fc53;
LAB_1000cbf8:
              pf_varargs_10006fc4___(param_5,param_6,pcVar6);
              break;
            }
LAB_1000c83c:
            if (bVar9) {
              recovered_10003a18(&local_90,source,0x6c);
              recovered_1000e9b0(&local_90,local_19c);
              local_80 = (0x9b05688c510e527fU);
              uStack_78 = (0x5be0cd191f83d9abU);
              local_6c = 0;
              local_70 = 0;
              local_90 = (0xbb67ae856a09e667U);
              uStack_88 = (0xa54ff53a3c6ef372U);
              local_28 = 0;
              recovered_1000e9b0(&local_90,auStack_fc);
              recovered_1000eae8(param_3,str_1000faa6,auStack_fc,0x20,auStack_1bc,0x20);
              recovered_100041a8(auStack_23c,0,0x20);
              recovered_1000e830(&local_90,auStack_fc,auStack_1bc);
              recovered_1000a530(&local_90,auStack_23c,0x20);
              recovered_1000e9b0(&local_90,&local_260);
              recovered_1000a530(auStack_fc,&local_260,0x20);
              recovered_1000e9b0(auStack_fc,auStack_1dc);
              recovered_1000eae8(auStack_1dc,str_1000fcc7,local_19c,0x20,auStack_1fc,0x20);
              recovered_1000eae8(auStack_1dc,str_1000fcd4,local_19c,0x20,auStack_21c,0x20);
              recovered_100041a8(param_1 + 0x5a,0,0x34);
              recovered_1000eae8(auStack_1fc,&DAT_1000fc4c,(void *)0x0,0,param_1 + 0x5a,0x20);
              recovered_1000eae8(auStack_1fc,&DAT_1000fc50,(void *)0x0,0,param_1 + 0x62,0xc);
              param_1[0x66] = 0;
              param_1[0x65] = 0;
              recovered_100041a8(param_1 + 0x67,0,0x34);
              recovered_1000eae8(auStack_21c,&DAT_1000fc4c,(void *)0x0,0,param_1 + 0x67,0x20);
              recovered_1000eae8(auStack_21c,&DAT_1000fc50,(void *)0x0,0,param_1 + 0x6f,0xc);
              param_1[0x73] = 0;
              param_1[0x72] = 0;
              *(undefined1 *)((int)param_1 + 0x1f5) = 1;
              local_260 = 0x20000014;
              recovered_10003a18(&local_90,source,0x6c);
              recovered_1000e9b0(&local_90,auStack_280);
              recovered_1000eae8(param_4,str_1000fc9d,(void *)0x0,0,auStack_2a0,0x20);
              recovered_1000e830(&local_90,auStack_fc,auStack_2a0);
              recovered_1000a530(&local_90,auStack_280,0x20);
              recovered_1000e9b0(&local_90,local_11c);
              recovered_1000a530(auStack_fc,local_11c,0x20);
              recovered_1000e9b0(auStack_fc,auStack_25c);
              iVar4 = recovered_1000cde8(param_1,param_1 + 0x40,0x16,&local_260,0x24,param_5,param_6
                                        );
              if (iVar4 == 0) {
                if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                    (0x53 < _DAT_40010808)) && (_DAT_40010850 != (code *)0x0)) {
                  (*_DAT_40010850)(source_00);
                }
              }
              else {
                recovered_1000a530(source,&local_260,0x24);
                if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                   ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
                  (*_DAT_40010850)(source_00);
                }
              }
              if (_DAT_40010800 != 0x50414d57) {
                return iVar4;
              }
              if (_DAT_40010804 == 0) {
                return iVar4;
              }
              if (_DAT_40010808 < 0x54) {
                return iVar4;
              }
              if (_DAT_40010850 == (code *)0x0) {
                return iVar4;
              }
              (*_DAT_40010850)(destination);
              return iVar4;
            }
          }
          local_19c[0] = 0;
          local_11c[0] = 0;
          uVar2 = recovered_1000d294(param_1,param_1 + 0x4d,local_19c,source_00,0x4100,local_11c,
                                     param_5,param_6);
        } while (uVar2 != 0);
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
        (*_DAT_40010850)(source_00);
      }
      if (_DAT_40010800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_40010804 == 0) {
        return 0;
      }
      if (_DAT_40010808 < 0x54) {
        return 0;
      }
      if (_DAT_40010850 == (code *)0x0) {
        return 0;
      }
      (*_DAT_40010850)(destination);
      return 0;
    }
    if (source_00 != (byte *)0x0) goto LAB_1000c2b0;
  }
  else {
    destination = (void *)0x0;
    bVar9 = false;
    if (source_00 == (byte *)0x0) goto LAB_1000c310;
LAB_1000c2b0:
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
       (_DAT_40010850 != (code *)0x0)) {
      (*_DAT_40010850)(source_00);
    }
  }
  if (((bVar9) && (_DAT_40010800 == 0x50414d57)) &&
     ((_DAT_40010804 != 0 && ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))))) {
    (*_DAT_40010850)(destination);
  }
LAB_1000c310:
  pf_varargs_10006fc4___(param_5,param_6,str_1000f9d4);
  return 0;
}

#undef DAT_1000c810
#undef DAT_1000c818
#undef DAT_1000c820
#undef DAT_1000c828
#undef DAT_1000fc4c
#undef DAT_1000fc50
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850
#undef str_1000f9d4
#undef str_1000faa6
#undef str_1000fc53
#undef str_1000fc69
#undef str_1000fc81
#undef str_1000fc9d
#undef str_1000fca6
#undef str_1000fcc7
#undef str_1000fcd4
#undef auStack_2a0
#undef local_70
#undef auStack_280
#undef local_6c
#undef local_28
#undef auStack_25c
#undef auStack_23c
#undef auStack_21c
#undef auStack_1fc
#undef auStack_1dc
#undef auStack_1bc
#undef auStack_15c
#undef auStack_13c
#undef auStack_fc
#undef uStack_88
#undef uStack_78
#undef local_260
#undef local_19c
#undef local_17c
#undef local_16c
#undef local_11c
#undef local_90
#undef local_80

#undef str_1000fac8
#define str_1000fac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd70
 */

int recovered_1000cd70(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((context == (void *)0x0) || (*(char *)((int)context + 0x1f5) != '\x01')) ||
     ((data == (void *)0x0 && (size != 0)))) {
    pf_varargs_10006fc4___(error,capacity,str_1000fac8);
    return 0;
  }
  iVar1 = recovered_1000cde8(context,(void *)((int)context + 0x168),0x17,data,size,error,capacity);
  return iVar1;
}

#undef str_1000fac8

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef str_1000f9d4
#define str_1000f9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000fafc
#define str_1000fafc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#define local_68 (*(byte *)(frame + 24))
#define local_67 (*(byte *)(frame + 25))
#define local_66 (*(byte *)(frame + 26))
#define local_65 (*(byte *)(frame + 27))
#define local_64 (*(byte *)(frame + 28))
#define local_63 (*(byte *)(frame + 29))
#define local_62 (*(byte *)(frame + 30))
#define local_61 (*(byte *)(frame + 31))
#define local_60 (*(uint (*)[16])(frame + 32))
#define auStack_6c (*(undefined1 (*)[4])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cde8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000cde8(undefined4 *param_1,void *param_2,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *associated;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  byte *pbVar13;
  void *destination;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;

  if ((param_2 != (void *)0x0) && ((param_4 != (void *)0x0 || (param_5 == 0)))) {
    if ((_DAT_40010800 == 0x50414d57) &&
       (((_DAT_40010804 != 0 && (0x4f < _DAT_40010808)) && (_DAT_4001084c != (code *)0x0)))) {
      associated = (undefined2 *)(*_DAT_4001084c)(param_5 + 0x16);
      if (associated != (undefined2 *)0x0) {
        destination = (void *)((int)associated + 5);
        uVar18 = param_5 + 1;
        *(char *)(associated + 2) = (char)(param_5 + 0x11);
        *(undefined1 *)(associated + 1) = 3;
        *associated = 0x317;
        *(char *)((int)associated + 3) = (char)(param_5 + 0x11 >> 8);
        if (param_5 != 0) {
          recovered_10003a18(destination,param_4,param_5);
        }
        *(undefined1 *)((int)destination + param_5) = param_3;
        recovered_10003a18(auStack_6c,(void *)((int)param_2 + 0x20),0xc);
        puVar16 = (uint *)((int)param_2 + 0x2c);
        uVar6 = *puVar16;
        local_61 = local_61 ^ (byte)uVar6;
        local_62 = local_62 ^ (byte)(uVar6 >> 8);
        local_63 = local_63 ^ (byte)(uVar6 >> 0x10);
        local_64 = local_64 ^ (byte)(uVar6 >> 0x18);
        uVar9 = *(undefined4 *)((int)param_2 + 0x30);
        local_65 = local_65 ^ (byte)uVar9;
        local_66 = local_66 ^ (byte)((uint)uVar9 >> 8);
        local_67 = local_67 ^ (byte)((uint)uVar9 >> 0x10);
        local_68 = local_68 ^ (byte)((uint)uVar9 >> 0x18);
        if (uVar18 != 0) {
          uVar6 = 1;
          uVar17 = 0;
          do {
            recovered_1000f600(param_2,uVar6,auStack_6c,local_60);
            uVar10 = uVar18 - uVar17;
            uVar5 = uVar10;
            if (0x3f < uVar10) {
              uVar5 = 0x40;
            }
            if (uVar18 != uVar17) {
              uVar7 = 1;
              if (1 < uVar5) {
                uVar7 = uVar5;
              }
              uVar15 = 0;
              if (0xf < uVar10) {
                uVar15 = uVar7 & 0x70;
                puVar14 = local_60;
                puVar12 = (uint *)((int)destination + uVar17);
                uVar10 = uVar15;
                do {
                  uVar10 = uVar10 - 0x10;
                  uVar1 = *puVar14;
                  uVar2 = puVar14[1];
                  uVar3 = puVar14[2];
                  uVar4 = puVar14[3];
                  puVar14 = puVar14 + 4;
                  *puVar12 = uVar1 ^ *puVar12;
                  puVar12[1] = uVar2 ^ puVar12[1];
                  puVar12[2] = uVar3 ^ puVar12[2];
                  puVar12[3] = uVar4 ^ puVar12[3];
                  puVar12 = puVar12 + 4;
                } while (uVar10 != 0);
                if (uVar5 == uVar15) goto LAB_1000cfb8;
              }
              iVar8 = uVar7 - uVar15;
              pbVar11 = (byte *)((int)destination + uVar17 + uVar15);
              pbVar13 = (byte *)((int)local_60 + uVar15);
              do {
                iVar8 = iVar8 + -1;
                *pbVar11 = *pbVar13 ^ *pbVar11;
                pbVar11 = pbVar11 + 1;
                pbVar13 = pbVar13 + 1;
              } while (iVar8 != 0);
            }
LAB_1000cfb8:
            uVar17 = uVar5 + uVar17;
            uVar6 = uVar6 + 1;
          } while (uVar17 < uVar18);
        }
        recovered_1000ed98(param_2,auStack_6c,associated,destination,uVar18,local_60);
        recovered_10003a18((void *)((int)destination + uVar18),local_60,0x10);
        uVar18 = *puVar16;
        *puVar16 = uVar18 + 1;
        *(uint *)((int)param_2 + 0x30) = *(int *)((int)param_2 + 0x30) + (uint)(0xfffffffe < uVar18)
        ;
        if ((code *)param_1[2] == (code *)0x0) {
          pf_varargs_10006fc4___(param_6,param_7,str_1000fafc);
          uVar9 = 0;
        }
        else {
          uVar9 = (*(code *)param_1[2])(*param_1,associated,param_5 + 0x16,param_6,param_7);
        }
        if (_DAT_40010800 != 0x50414d57) {
          return uVar9;
        }
        if (_DAT_40010804 == 0) {
          return uVar9;
        }
        if (_DAT_40010808 < 0x54) {
          return uVar9;
        }
        if (_DAT_40010850 == (code *)0x0) {
          return uVar9;
        }
        (*_DAT_40010850)(associated);
        return uVar9;
      }
    }
    pf_varargs_10006fc4___(param_6,param_7,str_1000f9d4);
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850
#undef str_1000f9d4
#undef str_1000fafc
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef auStack_6c

#undef str_1000fac8
#define str_1000fac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b8U)))
#undef str_1000faeb
#define str_1000faeb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dbU)))
#define local_28 (*(uint *)(frame + 24))
#define local_21 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d168
 */

int recovered_1000d168(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  char *format;

  pvVar1 = context;
  if (read != (ulong *)0x0) {
    pvVar1 = (void *)0x0;
    *read = 0;
  }
  if (context != (void *)0x0 && size != 0) {
    if (data != (void *)0x0) {
      pvVar1 = (void *)(uint)*(byte *)((int)context + 0x1f5);
    }
    if (data != (void *)0x0 && ((uint)pvVar1 & 1) != 0) {
      do {
        local_21 = 0;
        local_28 = 0;
        uVar2 = recovered_1000d294(context,(void *)((int)context + 0x19c),&local_21,data,size,
                                   &local_28,error,capacity);
        if (uVar2 == 0) {
          return 0;
        }
        if (local_21 == 0x17) {
          if (read == (ulong *)0x0) {
            return 1;
          }
          *read = local_28;
          return 1;
        }
      } while (local_21 != 0x15);
      format = str_1000faeb;
      goto LAB_1000d1c4;
    }
  }
  format = str_1000fac8;
LAB_1000d1c4:
  pf_varargs_10006fc4___(error,capacity,format);
  return 0;
}

#undef str_1000fac8
#undef str_1000faeb
#undef local_28
#undef local_21

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef str_1000f9d4
#define str_1000f9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000fce1
#define str_1000fce1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d1U)))
#undef str_1000fcfb
#define str_1000fcfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ebU)))
#undef str_1000fd1a
#define str_1000fd1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#undef str_1000fd47
#define str_1000fd47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x437U)))
#undef str_1000fd84
#define str_1000fd84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x474U)))
#undef str_1000fda5
#define str_1000fda5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x495U)))
#undef str_1000fdba
#define str_1000fdba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aaU)))
#undef str_1000fddb
#define str_1000fddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cbU)))
#define auStack_6c (*(undefined1 (*)[4])(frame + 52))
#define local_81 (*(byte *)(frame + 31))
#define local_80 (*(byte *)(frame + 32))
#define local_7f (*(byte *)(frame + 33))
#define local_7e (*(ushort *)(frame + 34))
#define local_7c (*(undefined1 (*)[16])(frame + 36))
#define local_68 (*(byte *)(frame + 56))
#define local_67 (*(byte *)(frame + 57))
#define local_66 (*(byte *)(frame + 58))
#define local_65 (*(byte *)(frame + 59))
#define local_64 (*(byte *)(frame + 60))
#define local_63 (*(byte *)(frame + 61))
#define local_62 (*(byte *)(frame + 62))
#define local_61 (*(byte *)(frame + 63))
#define local_60 (*(byte (*)[64])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d294
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000d294(undefined4 *param_1,void *param_2,byte *param_3,byte *param_4,uint param_5,
                       uint *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint128 auVar3;
  int iVar4;
  byte *ciphertext;
  uint uVar5;
  uint extraout_r0 = 0;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint128 *pauVar9;
  uint uVar10;
  char *format;
  uint uVar11;
  uint128 *pauVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  code *pcVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint128 auVar23;

  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    pcVar16 = (code *)param_1[1];
    if (pcVar16 != (code *)0x0) {
      puVar6 = (uint *)((int)param_2 + 0x2c);
      do {
        iVar4 = (*pcVar16)(*param_1,&local_81,5,param_7,param_8);
        if (iVar4 == 0) {
          return 0;
        }
        if ((((uint)local_7e << 0x18 | (uint)(local_7e >> 8) << 0x10) >> 0x10) - 0x4801 < 0xffffb800
           ) {
          format = str_1000fce1;
          goto LAB_1000d91c;
        }
        uVar10 = (local_7e & 0xff) << 8 | (uint)(local_7e >> 8);
        if (param_2 == (void *)0x0) {
          if (param_5 < uVar10) {
            format = str_1000fcfb;
            goto LAB_1000d91c;
          }
          if ((code *)param_1[1] == (code *)0x0) break;
          iVar4 = (*(code *)param_1[1])(*param_1,param_4,uVar10,param_7,param_8);
          if (iVar4 == 0) {
            return 0;
          }
          if (local_81 != 0x14) {
            if (local_81 == 0x15) {
              uVar11 = 0;
              if (1 < uVar10) {
                uVar11 = (uint)param_4[1];
              }
              pf_varargs_10006fc4__4__4_(param_7,param_8,str_1000fd1a,(uint)*param_4,uVar11);
              return 0;
            }
            if (param_3 != (byte *)0x0) {
              *param_3 = local_81;
            }
            if (param_6 == (uint *)0x0) {
              return 1;
            }
            *param_6 = uVar10;
            return 1;
          }
        }
        else {
          if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x50)) ||
             ((_DAT_4001084c == (code *)0x0 ||
              (ciphertext = (byte *)(*_DAT_4001084c)(uVar10), ciphertext == (byte *)0x0)))) {
            format = str_1000f9d4;
            goto LAB_1000d91c;
          }
          if ((code *)param_1[1] == (code *)0x0) {
            pf_varargs_10006fc4___(param_7,param_8,str_1000fd84);
LAB_1000da90:
            if (_DAT_40010800 != 0x50414d57) {
              return 0;
            }
            if (_DAT_40010804 == 0) {
              return 0;
            }
            if (_DAT_40010808 < 0xc) {
              return 0;
            }
            if (_DAT_40010808 < 0x54) {
              return 0;
            }
            if (_DAT_40010850 == (code *)0x0) {
              return 0;
            }
            (*_DAT_40010850)(ciphertext);
            return 0;
          }
          iVar4 = (*(code *)param_1[1])(*param_1,ciphertext,uVar10,param_7,param_8);
          if (iVar4 == 0) goto LAB_1000da90;
          uVar11 = (uint)local_81;
          if (uVar11 == 0x14) {
            if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
               ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
              (*_DAT_40010850)(ciphertext);
            }
            goto LAB_1000d6f8;
          }
          if (uVar11 != 0x17) {
            if (uVar11 == 0x15) {
              uVar11 = 0;
              if (1 < uVar10) {
                uVar11 = (uint)ciphertext[1];
              }
              pf_varargs_10006fc4__4__4_(param_7,param_8,str_1000fd1a,(uint)*ciphertext,uVar11);
              if (_DAT_40010800 != 0x50414d57) {
                return 0;
              }
              if (_DAT_40010804 == 0) {
                return 0;
              }
              if (_DAT_40010808 < 0x54) {
                return 0;
              }
              if (_DAT_40010850 == (code *)0x0) {
                return 0;
              }
              (*_DAT_40010850)(ciphertext);
              return 0;
            }
            pf_varargs_10006fc4__4__4__4__4_
                      (param_7,param_8,str_1000fd47,uVar11,(uint)local_80,(uint)local_7f,uVar10);
            goto LAB_1000da90;
          }
          uVar11 = 1;
          if (param_6 != (uint *)0x0) {
            *param_6 = 0;
          }
          if (param_3 != (byte *)0x0) {
            *param_3 = 0;
          }
          if (0xf < uVar10) {
            uVar11 = uVar10 - 0x10;
            if (param_5 < uVar11) {
              pf_varargs_10006fc4___(param_7,param_8,str_1000fda5);
            }
            else {
              recovered_10003a18(auStack_6c,(void *)((int)param_2 + 0x20),0xc);
              uVar5 = *puVar6;
              uVar7 = *(undefined4 *)((int)param_2 + 0x30);
              local_61 = local_61 ^ (byte)uVar5;
              local_65 = local_65 ^ (byte)uVar7;
              local_62 = local_62 ^ (byte)(uVar5 >> 8);
              local_63 = local_63 ^ (byte)(uVar5 >> 0x10);
              local_64 = local_64 ^ (byte)(uVar5 >> 0x18);
              local_66 = local_66 ^ (byte)((uint)uVar7 >> 8);
              local_67 = local_67 ^ (byte)((uint)uVar7 >> 0x10);
              local_68 = local_68 ^ (byte)((uint)uVar7 >> 0x18);
              recovered_1000ed98(param_2,auStack_6c,&local_81,ciphertext,uVar11,local_7c);
              auVar23 = VectorCompareEqual(*(uint128 *)(ciphertext + uVar11),PF_PART16(local_7c,0),1);
              uVar1 = ~PF_PART8(auVar23, 0);
              uVar2 = ~PF_PART8(auVar23, 8);
              if ((((((((((((((((uVar1 & 1) == 0 && (uVar1 & 0x100) == 0) && (uVar1 & 0x10000) == 0)
                             && (uVar1 & 0x1000000) == 0) && (uVar1 & 0x100000000) == 0) &&
                           (uVar1 & 0x10000000000) == 0) && (uVar1 & 0x1000000000000) == 0) &&
                         (uVar1 & 0x100000000000000) == 0) && (uVar2 & 1) == 0) &&
                       (uVar2 & 0x100) == 0) && (uVar2 & 0x10000) == 0) && (uVar2 & 0x1000000) == 0)
                    && (uVar2 & 0x100000000) == 0) && (uVar2 & 0x10000000000) == 0) &&
                  (uVar2 & 0x1000000000000) == 0) && (uVar2 & 0x100000000000000) == 0) {
                if (uVar11 == 0) {
                  uVar11 = 0;
                  uVar10 = *puVar6;
                  *puVar6 = uVar10 + 1;
                  *(uint *)((int)param_2 + 0x30) =
                       *(int *)((int)param_2 + 0x30) + (uint)(0xfffffffe < uVar10);
                }
                else {
                  uVar19 = 0;
                  uVar5 = 1;
                  do {
                    recovered_1000f600(param_2,uVar5,auStack_6c,local_60);
                    uVar8 = uVar11 - uVar19;
                    uVar20 = uVar8;
                    if (0x3f < uVar8) {
                      uVar20 = 0x40;
                    }
                    if (uVar11 != uVar19) {
                      uVar18 = uVar20;
                      if (uVar20 < 2) {
                        uVar18 = 1;
                      }
                      bVar22 = 0xf < uVar8;
                      bVar21 = uVar8 == 0x10;
                      uVar8 = extraout_r0;
                      if (bVar22) {
                        uVar8 = (int)param_4 - (int)ciphertext;
                      }
                      uVar17 = 0;
                      if (bVar22) {
                        bVar21 = uVar8 == 0xf;
                      }
                      if ((bVar22 && 0xe < uVar8) && !bVar21) {
                        uVar17 = uVar18 & 0x70;
                        pbVar14 = param_4 + uVar19;
                        pauVar9 = (uint128 *)local_60;
                        pauVar12 = (uint128 *)(ciphertext + uVar19);
                        uVar8 = uVar17;
                        do {
                          auVar23 = *pauVar12;
                          pauVar12 = pauVar12 + 1;
                          uVar8 = uVar8 - 0x10;
                          auVar3 = *pauVar9;
                          pauVar9 = pauVar9 + 1;
                          *(longlong *)pbVar14 = SUB168(auVar3 ^ auVar23,0);
                          *(longlong *)(pbVar14 + 8) = SUB168(auVar3 ^ auVar23,8);
                          pbVar14 = pbVar14 + 0x10;
                        } while (uVar8 != 0);
                        if (uVar20 == uVar17) goto LAB_1000d734;
                      }
                      iVar4 = uVar18 - uVar17;
                      pbVar14 = ciphertext + uVar19 + uVar17;
                      pbVar13 = local_60 + uVar17;
                      pbVar15 = param_4 + uVar19 + uVar17;
                      do {
                        iVar4 = iVar4 + -1;
                        *pbVar15 = *pbVar13 ^ *pbVar14;
                        pbVar14 = pbVar14 + 1;
                        pbVar13 = pbVar13 + 1;
                        pbVar15 = pbVar15 + 1;
                      } while (iVar4 != 0);
                    }
LAB_1000d734:
                    uVar19 = uVar20 + uVar19;
                    uVar5 = uVar5 + 1;
                  } while (uVar19 < uVar11);
                  uVar11 = *puVar6;
                  *puVar6 = uVar11 + 1;
                  *(uint *)((int)param_2 + 0x30) =
                       *(int *)((int)param_2 + 0x30) + (uint)(0xfffffffe < uVar11);
                  iVar4 = 0x11 - uVar10;
                  do {
                    uVar10 = (uint)param_4[-iVar4];
                    if (uVar10 != 0) {
                      if ((uVar10 & 0xfc) != 0x14) {
                        pf_varargs_10006fc4__4_(param_7,param_8,str_1000fddb,uVar10);
                        goto LAB_1000d68c;
                      }
                      if (param_3 != (byte *)0x0) {
                        *param_3 = param_4[-iVar4];
                      }
                      uVar11 = 0;
                      if (param_6 != (uint *)0x0) {
                        *param_6 = -iVar4;
                      }
                      break;
                    }
                    iVar4 = iVar4 + 1;
                    uVar11 = 0;
                  } while (iVar4 != 1);
                }
                goto LAB_1000d690;
              }
              pf_varargs_10006fc4___(param_7,param_8,str_1000fdba);
            }
LAB_1000d68c:
            uVar11 = 1;
          }
LAB_1000d690:
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
             (_DAT_40010850 != (code *)0x0)) {
            (*_DAT_40010850)(ciphertext);
          }
          if (param_3 == (byte *)0x0 || uVar11 != 0) {
            return uVar11 ^ 1;
          }
          if (param_6 == (uint *)0x0) {
            return 1;
          }
          if (*param_3 != 0) {
            return 1;
          }
          if (*param_6 != 0) {
            return 1;
          }
        }
LAB_1000d6f8:
        pcVar16 = (code *)param_1[1];
      } while (pcVar16 != (code *)0x0);
    }
    format = str_1000fd84;
LAB_1000d91c:
    pf_varargs_10006fc4___(param_7,param_8,format);
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850
#undef str_1000f9d4
#undef str_1000fce1
#undef str_1000fcfb
#undef str_1000fd1a
#undef str_1000fd47
#undef str_1000fd84
#undef str_1000fda5
#undef str_1000fdba
#undef str_1000fddb
#undef auStack_6c
#undef local_81
#undef local_80
#undef local_7f
#undef local_7e
#undef local_7c
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dae8
 */

int recovered_1000dae8(void *context,void *output)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (context == (void *)0x0 || output == (void *)0x0) {
    return 0;
  }
  if (*(char *)((int)context + 0x1f6) == '\x01') {
    recovered_10003a18(output,(void *)((int)context + 0x1d0),0x20);
    return 1;
  }
  return 0;
}


/* Native entropy callback and fallback state evolution; Pooka's Free Software License. */
void recovered_1000db40(void *opaque,void *output){
 uintptr_t *context=(uintptr_t *)opaque;
 uint32_t date[6]={0},seed=0x574d544cU;
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]==0x50414d57U&&api[1]&&api[2]>=364&&api[90]&&((int (*)(void *))(uintptr_t)api[90])(date))
  seed^=date[3]*0x3c6ef35fU^date[2]^date[4]*0x19660dU;
 if(!output)return;
 uint32_t *stored=(uint32_t *)((uint8_t *)opaque+0x1f0);
 seed^=(uint32_t)(uintptr_t)opaque^*stored;
 if(!context[3]||!((unsigned char (*)(void *,void *,unsigned long))context[3])((void *)context[0],output,32)){
  for(unsigned i=0;i<32;++i){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;((uint8_t *)output)[i]=(uint8_t)(seed>>((i*8)&24));}
 }else{
  uint32_t folded=0;for(unsigned i=0;i<8;++i)folded^=((uint32_t *)output)[i];
  seed^=folded;
 }
 *stored=seed;
}


#undef DAT_1000e990
#define DAT_1000e990 (*(uint64_t *)(0x1000e990U))
#undef DAT_1000e998
#define DAT_1000e998 (*(uint64_t *)(0x1000e998U))
#undef DAT_1000e9a0
#define DAT_1000e9a0 (*(uint64_t *)(0x1000e9a0U))
#undef DAT_1000e9a8
#define DAT_1000e9a8 (*(uint64_t *)(0x1000e9a8U))
#define uStack_2c (*(uint *)(frame + 196))
#define uStack_28 (*(uint *)(frame + 200))
#define uStack_24 (*(uint *)(frame + 204))
#define local_e0 (*(uint *)(frame + 16))
#define local_d0 (*(uint *)(frame + 32))
#define local_c0 (*(uint *)(frame + 48))
#define local_b0 (*(uint *)(frame + 64))
#define local_a0 (*(uint *)(frame + 80))
#define local_90 (*(uint *)(frame + 96))
#define local_80 (*(uint *)(frame + 112))
#define local_70 (*(uint *)(frame + 128))
#define local_60 (*(uint *)(frame + 144))
#define local_50 (*(uint *)(frame + 160))
#define local_40 (*(uint *)(frame + 176))
#define local_30 (*(uint *)(frame + 192))
#define uStack_dc (*(uint *)(frame + 20))
#define uStack_d8 (*(uint *)(frame + 24))
#define uStack_d4 (*(uint *)(frame + 28))
#define uStack_cc (*(uint *)(frame + 36))
#define uStack_c8 (*(uint *)(frame + 40))
#define uStack_c4 (*(uint *)(frame + 44))
#define uStack_bc (*(uint *)(frame + 52))
#define uStack_b8 (*(uint *)(frame + 56))
#define uStack_b4 (*(uint *)(frame + 60))
#define uStack_ac (*(uint *)(frame + 68))
#define uStack_a8 (*(uint *)(frame + 72))
#define uStack_a4 (*(uint *)(frame + 76))
#define uStack_9c (*(uint *)(frame + 84))
#define uStack_98 (*(uint *)(frame + 88))
#define uStack_94 (*(uint *)(frame + 92))
#define uStack_8c (*(uint *)(frame + 100))
#define uStack_88 (*(uint *)(frame + 104))
#define uStack_84 (*(uint *)(frame + 108))
#define uStack_7c (*(uint *)(frame + 116))
#define uStack_78 (*(uint *)(frame + 120))
#define uStack_74 (*(uint *)(frame + 124))
#define uStack_6c (*(uint *)(frame + 132))
#define uStack_68 (*(uint *)(frame + 136))
#define uStack_64 (*(uint *)(frame + 140))
#define uStack_5c (*(uint *)(frame + 148))
#define uStack_58 (*(uint *)(frame + 152))
#define uStack_54 (*(uint *)(frame + 156))
#define uStack_4c (*(uint *)(frame + 164))
#define uStack_48 (*(uint *)(frame + 168))
#define uStack_44 (*(uint *)(frame + 172))
#define uStack_3c (*(uint *)(frame + 180))
#define uStack_38 (*(uint *)(frame + 184))
#define uStack_34 (*(uint *)(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e830
 */

void recovered_1000e830(void *inner,void *outer,void *key)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  recovered_100041a8(&local_60,0,0x40);
  if (key != (void *)0x0) {
    recovered_10003a18(&local_60,key,0x20);
  }
  uVar3 = (0x5be0cd191f83d9abU);
  PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar1, 0) = 0x5c5c5c5c5c5c5c5c;
  auVar1 = auVar1 << 0x40 | auVar1;
  local_b0 = PF_PART4(auVar1, 0);
  uStack_ac = PF_PART4(auVar1, 4);
  uStack_a8 = PF_PART4(auVar1, 8);
  uStack_a4 = PF_PART4(auVar1, 12);
  PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar2, 0) = 0x3636363636363636;
  auVar2 = auVar2 << 0x40 | auVar2;
  local_70 = PF_PART4(auVar2, 0);
  uStack_6c = PF_PART4(auVar2, 4);
  uStack_68 = PF_PART4(auVar2, 8);
  uStack_64 = PF_PART4(auVar2, 12);
  local_90 = local_50 ^ local_70;
  uStack_8c = uStack_4c ^ uStack_6c;
  uStack_88 = uStack_48 ^ uStack_68;
  uStack_84 = uStack_44 ^ uStack_64;
  local_d0 = local_50 ^ local_b0;
  uStack_cc = uStack_4c ^ uStack_ac;
  uStack_c8 = uStack_48 ^ uStack_a8;
  uStack_c4 = uStack_44 ^ uStack_a4;
  local_c0 = local_40 ^ local_b0;
  uStack_bc = uStack_3c ^ uStack_ac;
  uStack_b8 = uStack_38 ^ uStack_a8;
  uStack_b4 = uStack_34 ^ uStack_a4;
  local_80 = local_40 ^ local_70;
  uStack_7c = uStack_3c ^ uStack_6c;
  uStack_78 = uStack_38 ^ uStack_68;
  uStack_74 = uStack_34 ^ uStack_64;
  local_e0 = local_60 ^ local_b0;
  uStack_dc = uStack_5c ^ uStack_ac;
  uStack_d8 = uStack_58 ^ uStack_a8;
  uStack_d4 = uStack_54 ^ uStack_a4;
  local_a0 = local_60 ^ local_70;
  uStack_9c = uStack_5c ^ uStack_6c;
  uStack_98 = uStack_58 ^ uStack_68;
  uStack_94 = uStack_54 ^ uStack_64;
  local_b0 = local_30 ^ local_b0;
  uStack_ac = uStack_2c ^ uStack_ac;
  uStack_a8 = uStack_28 ^ uStack_a8;
  uStack_a4 = uStack_24 ^ uStack_a4;
  local_70 = local_30 ^ local_70;
  uStack_6c = uStack_2c ^ uStack_6c;
  uStack_68 = uStack_28 ^ uStack_68;
  uStack_64 = uStack_24 ^ uStack_64;
  if (inner != (void *)0x0) {
    *(undefined8 *)((int)inner + 0x10) = (0x9b05688c510e527fU);
    *(undefined8 *)((int)inner + 0x18) = uVar3;
    uVar4 = (0xa54ff53a3c6ef372U);
    uVar3 = (0xbb67ae856a09e667U);
    *(undefined4 *)((int)inner + 0x24) = 0;
    *(undefined4 *)((int)inner + 0x20) = 0;
    *(undefined8 *)inner = uVar3;
    *(undefined8 *)((int)inner + 8) = uVar4;
    *(undefined4 *)((int)inner + 0x68) = 0;
  }
  recovered_1000a530(inner,&local_a0,0x40);
  uVar3 = (0x5be0cd191f83d9abU);
  if (outer != (void *)0x0) {
    *(undefined8 *)((int)outer + 0x10) = (0x9b05688c510e527fU);
    *(undefined8 *)((int)outer + 0x18) = uVar3;
    uVar4 = (0xa54ff53a3c6ef372U);
    uVar3 = (0xbb67ae856a09e667U);
    *(undefined4 *)((int)outer + 0x24) = 0;
    *(undefined4 *)((int)outer + 0x20) = 0;
    *(undefined8 *)outer = uVar3;
    *(undefined8 *)((int)outer + 8) = uVar4;
    *(undefined4 *)((int)outer + 0x68) = 0;
  }
  recovered_1000a530(outer,&local_e0,0x40);
  return;
}

#undef DAT_1000e990
#undef DAT_1000e998
#undef DAT_1000e9a0
#undef DAT_1000e9a8
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef local_e0
#undef local_d0
#undef local_c0
#undef local_b0
#undef local_a0
#undef local_90
#undef local_80
#undef local_70
#undef local_60
#undef local_50
#undef local_40
#undef local_30
#undef uStack_dc
#undef uStack_d8
#undef uStack_d4
#undef uStack_cc
#undef uStack_c8
#undef uStack_c4
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_9c
#undef uStack_98
#undef uStack_94
#undef uStack_8c
#undef uStack_88
#undef uStack_84
#undef uStack_7c
#undef uStack_78
#undef uStack_74
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_5c
#undef uStack_58
#undef uStack_54
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_3c
#undef uStack_38
#undef uStack_34

#undef DAT_1000fc43
#define DAT_1000fc43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef DAT_1000ffec
#define DAT_1000ffec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dcU)))
#define local_1c (*(undefined1 *)(frame + 20))
#define local_1b (*(undefined1 *)(frame + 21))
#define local_1a (*(undefined1 *)(frame + 22))
#define local_19 (*(byte *)(frame + 23))
#define local_18 (*(undefined1 *)(frame + 24))
#define local_17 (*(undefined1 *)(frame + 25))
#define local_16 (*(undefined1 *)(frame + 26))
#define local_15 (*(undefined1 *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9b0
 */

void recovered_1000e9b0(void *context,void *output)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if (context == (void *)0x0) {
    return;
  }
  if (output != (void *)0x0) {
    uVar1 = *(uint *)((int)context + 0x20);
    uVar3 = *(uint *)((int)context + 0x24);
    local_19 = (byte)(uVar1 >> 0x1d) | (byte)(uVar3 << 3);
    local_15 = (undefined1)(uVar1 << 3);
    local_16 = (undefined1)(uVar1 >> 5);
    local_17 = (undefined1)(uVar1 >> 0xd);
    local_18 = (undefined1)(uVar1 >> 0x15);
    local_1a = (undefined1)(uVar3 >> 5);
    local_1b = (undefined1)(uVar3 >> 0xd);
    local_1c = (undefined1)(uVar3 >> 0x15);
    recovered_1000a530(context,&DAT_1000fc43,1);
    iVar2 = *(int *)((int)context + 0x68);
    while (iVar2 != 0x38) {
      recovered_1000a530(context,&DAT_1000ffec,1);
      iVar2 = *(int *)((int)context + 0x68);
    }
    recovered_1000a530(context,&local_1c,8);
    uVar1 = *(uint *)context;
    *(uint *)output =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 4);
    *(uint *)((int)output + 4) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 8);
    *(uint *)((int)output + 8) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0xc);
    *(uint *)((int)output + 0xc) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x10);
    *(uint *)((int)output + 0x10) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x14);
    *(uint *)((int)output + 0x14) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x18);
    *(uint *)((int)output + 0x18) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x1c);
    *(uint *)((int)output + 0x1c) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  }
  return;
}

#undef DAT_1000fc43
#undef DAT_1000ffec
#undef local_1c
#undef local_1b
#undef local_1a
#undef local_19
#undef local_18
#undef local_17
#undef local_16
#undef local_15

#undef str_1000fc45
#define str_1000fc45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x335U)))
#define local_1c4 (*(ulong *)(frame + 28))
#define local_1c0 (*(undefined1 *)(frame + 32))
#define local_1bf (*(undefined1 *)(frame + 33))
#define local_1be (*(undefined1 *)(frame + 34))
#define local_45 (*(byte *)(frame + 411))
#define auStack_1bd (*(undefined1 (*)[125])(frame + 35))
#define auStack_140 (*(undefined1 (*)[32])(frame + 160))
#define auStack_120 (*(undefined1 (*)[108])(frame + 192))
#define auStack_b4 (*(undefined1 (*)[111])(frame + 300))
#define auStack_44 (*(undefined1 (*)[36])(frame + 412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eae8
 */

void recovered_1000eae8(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length)

{
  unsigned char frame[512] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  void *extraout_r1;
  int iVar5;

  uVar2 = recovered_10004aa8(str_1000fc45);
  if (label != (char *)0x0) {
    uVar3 = recovered_10004aa8(label);
    pvVar1 = extraout_r1;
    if (secret != (void *)0x0) {
      pvVar1 = output;
    }
    if ((secret != (void *)0x0 && pvVar1 != (void *)0x0) && (uVar3 + uVar2 < 0x100)) {
      iVar5 = uVar3 + uVar2 + 3;
      local_1c4 = iVar5 + 1;
      if (local_1c4 + context_length < 0x81) {
        local_1be = (undefined1)(uVar3 + uVar2);
        local_1bf = (undefined1)output_length;
        local_1c0 = (undefined1)(output_length >> 8);
        recovered_10003a18(auStack_1bd,str_1000fc45,uVar2);
        recovered_10003a18(auStack_1bd + uVar2,label,uVar3);
        auStack_1bd[iVar5 + -3] = (char)context_length;
        if (context_length != 0) {
          recovered_10003a18(auStack_1bd + iVar5 + -2,context,context_length);
          local_1c4 = local_1c4 + context_length;
        }
        local_45 = 1;
        if (output_length != 0) {
          recovered_1000e830(auStack_b4,auStack_120,secret);
          recovered_1000a530(auStack_b4,&local_1c0,local_1c4);
          recovered_1000a530(auStack_b4,&local_45,1);
          recovered_1000e9b0(auStack_b4,auStack_140);
          recovered_1000a530(auStack_120,auStack_140,0x20);
          recovered_1000e9b0(auStack_120,auStack_44);
          uVar2 = 0x20;
          if (output_length < 0x20) {
            uVar2 = output_length;
          }
          recovered_10003a18(output,auStack_44,uVar2);
          uVar4 = local_45 + 1;
          local_45 = (byte)uVar4;
          if (((output_length < 0x21) || ((uVar4 & 0xff) == uVar4)) && (0x20 < output_length)) {
            do {
              recovered_1000e830(auStack_b4,auStack_120,secret);
              recovered_1000a530(auStack_b4,auStack_44,0x20);
              recovered_1000a530(auStack_b4,&local_1c0,local_1c4);
              recovered_1000a530(auStack_b4,&local_45,1);
              recovered_1000e9b0(auStack_b4,auStack_140);
              recovered_1000a530(auStack_120,auStack_140,0x20);
              recovered_1000e9b0(auStack_120,auStack_44);
              uVar3 = output_length - uVar2;
              if (0x1f < uVar3) {
                uVar3 = 0x20;
              }
              recovered_10003a18((void *)((int)output + uVar2),auStack_44,uVar3);
              uVar2 = uVar3 + uVar2;
              uVar4 = local_45 + 1;
              local_45 = (byte)uVar4;
            } while ((((uVar4 & 0xff) == uVar4) || (output_length <= uVar2)) &&
                    (uVar2 < output_length));
          }
        }
      }
    }
  }
  return;
}

#undef str_1000fc45
#undef local_1c4
#undef local_1c0
#undef local_1bf
#undef local_1be
#undef local_45
#undef auStack_1bd
#undef auStack_140
#undef auStack_120
#undef auStack_b4
#undef auStack_44

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_1000ed98(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_1000f600(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_10003920(total);
 if(!message){for(unsigned i=0;i<16;++i)((uint8_t *)output)[i]=0;return;}
 for(unsigned long i=0;i<total;++i)message[i]=0;
 for(unsigned i=0;i<5;++i)message[i]=((uint8_t *)associated)[i];
 for(unsigned long i=0;i<size;++i)message[16+i]=((uint8_t *)ciphertext)[i];
 message[16+padded]=5;
 for(unsigned i=0;i<8;++i)message[24+padded+i]=(uint8_t)((uint64_t)size>>(8*i));
 uint8_t clamp[16];for(unsigned i=0;i<16;++i)clamp[i]=one_time[i];
 clamp[3]&=15;clamp[7]&=15;clamp[11]&=15;clamp[15]&=15;clamp[4]&=252;clamp[8]&=252;clamp[12]&=252;
 const uint32_t mask=0x3ffffffU;
 uint32_t r[5]={pf_tls_load32(clamp)&mask,(pf_tls_load32(clamp+3)>>2)&mask,(pf_tls_load32(clamp+6)>>4)&mask,(pf_tls_load32(clamp+9)>>6)&mask,pf_tls_load32(clamp+12)>>8};
 uint32_t h[5]={0};
 for(unsigned long offset=0;offset<total;offset+=16){
  uint8_t *p=message+offset;
  h[0]+=pf_tls_load32(p)&mask;h[1]+=(pf_tls_load32(p+3)>>2)&mask;h[2]+=(pf_tls_load32(p+6)>>4)&mask;h[3]+=(pf_tls_load32(p+9)>>6)&mask;h[4]+=(pf_tls_load32(p+12)>>8)|(1U<<24);
  uint64_t d[5]={0};
  for(unsigned i=0;i<5;++i)for(unsigned j=0;j<5;++j){unsigned index=(i+5-j)%5;uint64_t coefficient=r[index];if(j>i)coefficient*=5;d[i]+=(uint64_t)h[j]*coefficient;}
  for(unsigned i=0;i<4;++i){h[i]=(uint32_t)d[i]&mask;d[i+1]+=d[i]>>26;}
  h[4]=(uint32_t)d[4]&mask;h[0]+=(uint32_t)(d[4]>>26)*5;h[1]+=h[0]>>26;h[0]&=mask;
 }
 for(unsigned pass=0;pass<3;++pass){uint32_t carry=0;for(unsigned i=0;i<5;++i){uint32_t value=h[i]+carry;h[i]=value&mask;carry=value>>26;}h[0]+=carry*5;}
 uint32_t g[5],carry=5;
 for(unsigned i=0;i<4;++i){uint32_t value=h[i]+carry;g[i]=value&mask;carry=value>>26;}
 g[4]=h[4]+carry-(1U<<26);uint32_t select=(g[4]>>31)-1;g[4]&=mask;
 for(unsigned i=0;i<5;++i)h[i]=(h[i]&~select)|(g[i]&select);
 uint32_t words[4]={h[0]|h[1]<<26,h[1]>>6|h[2]<<20,h[2]>>12|h[3]<<14,h[3]>>18|h[4]<<8};
 uint64_t high=0;
 for(unsigned i=0;i<4;++i){uint64_t value=(uint64_t)words[i]+pf_tls_load32(one_time+16+4*i)+high;pf_tls_store32((uint8_t *)output+4*i,(uint32_t)value);high=value>>32;}
 recovered_10003974(message);
}


/* Recovered twenty-round ChaCha block transform; Pooka's Free Software License. */
static uint32_t pf_tls_chacha_load(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static uint32_t pf_tls_chacha_rotate(uint32_t word,unsigned bits){return word<<bits|word>>(32-bits);}
static void pf_tls_chacha_quarter(uint32_t *x,unsigned a,unsigned b,unsigned c,unsigned d){
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],16);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],12);
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],8);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],7);
}
void recovered_1000f600(void *key,uint counter,void *nonce,void *output){
 uint32_t initial[16]={0x61707865U,0x3320646eU,0x79622d32U,0x6b206574U};
 for(unsigned i=0;i<8;++i)initial[4+i]=pf_tls_chacha_load((uint8_t *)key+4*i);
 initial[12]=counter;for(unsigned i=0;i<3;++i)initial[13+i]=pf_tls_chacha_load((uint8_t *)nonce+4*i);
 uint32_t x[16];for(unsigned i=0;i<16;++i)x[i]=initial[i];
 for(unsigned round=0;round<10;++round){
  pf_tls_chacha_quarter(x,0,4,8,12);pf_tls_chacha_quarter(x,1,5,9,13);pf_tls_chacha_quarter(x,2,6,10,14);pf_tls_chacha_quarter(x,3,7,11,15);
  pf_tls_chacha_quarter(x,0,5,10,15);pf_tls_chacha_quarter(x,1,6,11,12);pf_tls_chacha_quarter(x,2,7,8,13);pf_tls_chacha_quarter(x,3,4,9,14);
 }
 for(unsigned i=0;i<16;++i){uint32_t value=x[i]+initial[i];for(unsigned j=0;j<4;++j)((uint8_t *)output)[4*i+j]=(uint8_t)(value>>(8*j));}
}
