/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a90
 */

uint recovered_10000a90(uint param_1,uint param_2)

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
 * Address: 0x10000ae0
 */

uint recovered_10000ae0(uint param_1,uint param_2)

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
 * Address: 0x10000b18
 */

uint recovered_10000b18(uint param_1,uint param_2)

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
 * Address: 0x10000b88
 */

uint recovered_10000b88(uint param_1,uint param_2)

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
 * Address: 0x10000bf4
 */

ulonglong recovered_10000bf4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10003488(pf_bits_double(CONCAT44(param_2,param_3)));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c04
 */

longlong recovered_10000c04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100033c8(pf_bits_double(CONCAT44(param_2,param_3)));
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c14
 */

float recovered_10000c14(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003510(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c30
 */

float recovered_10000c30(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003558(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_1000c07c
#define DAT_1000c07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c50
 */

void recovered_10000c50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c07c = 0;
  recovered_10000c68();
  return;
}

#undef DAT_1000c07c

#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_1000c07c
#define DAT_1000c07c (*(char *)(((uintptr_t)pf_module_state + 0x248U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x250U)))
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
 * Address: 0x10000c68
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000c68(void)

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
  if (DAT_1000c07c != '\0') {
    return;
  }
  DAT_1000c084 = (undefined1 *)0x0;
  DAT_1000c080 = 0;
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
        if (iVar12 == 0) goto LAB_10000e78;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_10004d94((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_1000c080 != 0) goto LAB_10000fb0;
    }
  }
LAB_10000e78:
  iVar12 = (int)DAT_1000c084;
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
      puVar9 = &DAT_1000c080;
      if (DAT_1000c080 != 0) {
        puVar9 = (undefined4 *)(local_24 + 4);
      }
      *puVar9 = 0x300000;
joined_r0x10001058:
      if (iVar12 == 0) {
        DAT_1000c07c = 1;
        DAT_1000c084 = puVar3;
        return;
      }
      DAT_1000c07c = 1;
      return;
    }
  }
  else {
    _DAT_00300004 = 0;
    _DAT_00300000 = 0x5fcffff0;
    _DAT_00300008 = local_24;
    DAT_0030000c = 1;
    puVar9 = &DAT_1000c080;
    if (DAT_1000c080 != 0) {
      puVar9 = (undefined4 *)(local_24 + 4);
    }
    bVar13 = DAT_1000c084 == (undefined1 *)0x0;
    *puVar9 = 0x300000;
    iVar12 = (int)DAT_1000c084;
    if (bVar13) {
      DAT_1000c084 = (undefined1 *)0x300000;
      iVar12 = (int)DAT_1000c084;
    }
    DAT_1000c084 = (undefined1 *)iVar12;
    if ((&DAT_68000000 < puVar3) && (0x20 < ((uint)puVar3 & 0xfffffff0) + 0x98000000)) {
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)puVar3 & 0xfffffff0) + 0x97fffff0;
      puVar3 = &DAT_68000000;
      _DAT_68000008 = 0x300000;
      DAT_6800000c = 1;
      puVar9 = &DAT_1000c080;
      if (DAT_1000c080 != 0) {
        puVar9 = (undefined4 *)&DAT_00300004;
      }
      *puVar9 = &DAT_68000000;
      goto joined_r0x10001058;
    }
  }
LAB_10000fb0:
  if (DAT_1000c084 == (undefined1 *)0x0) {
    DAT_1000c084 = (undefined1 *)DAT_1000c080;
    DAT_1000c07c = 1;
    return;
  }
  DAT_1000c07c = 1;
  return;
}

#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_1000c07c
#undef DAT_1000c080
#undef DAT_1000c084
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

#undef DAT_1000c080
#define DAT_1000c080 (*(uint * *)(((uintptr_t)pf_module_state + 0x24cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001060
 */

int recovered_10001060(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_10000c68();
  iVar1 = 0;
  puVar2 = DAT_1000c080;
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

#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x24cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a4
 */

void recovered_100010a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000c68();
  for (iVar1 = DAT_1000c080; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(int * *)(((uintptr_t)pf_module_state + 0x24cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f4
 */

int recovered_100010f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000c68();
  iVar1 = 0;
  for (piVar2 = DAT_1000c080; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x24cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001130
 */

void recovered_10001130(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000c68();
  for (iVar1 = DAT_1000c080; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(uint * *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint * *)(((uintptr_t)pf_module_state + 0x250U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001174
 */

uint * recovered_10001174(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_10000c68();
    puVar5 = DAT_1000c084;
    if (DAT_1000c084 == (uint *)0x0) {
      puVar5 = DAT_1000c080;
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
          DAT_1000c084 = DAT_1000c080;
          if (puVar5 != (uint *)0x0) {
            DAT_1000c084 = puVar5;
          }
          *(undefined1 *)(puVar2 + 3) = 0;
          return puVar2 + 4;
        }
        puVar1 = puVar2 + 1;
        puVar2 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) {
          puVar2 = DAT_1000c080;
        }
      } while ((puVar2 != (uint *)0x0) && (puVar2 != puVar5));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000c080
#undef DAT_1000c084

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

longlong recovered_10001280(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100012d4
 */

ulonglong recovered_100012d4(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001328
 */

undefined8 recovered_10001328(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10001374
 */

undefined8 recovered_10001374(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001458
 */

undefined8 recovered_10001458(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100014d8
 */

undefined8 recovered_100014d8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100015f0
 */

undefined8 recovered_100015f0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100016ac
 */

void recovered_100016ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016b4
 */

int recovered_100016b4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100016c0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001714(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001764(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017b8
 */

void * recovered_100017b8(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_100017f4;
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
          if (uVar6 == uVar9) goto LAB_10001988;
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
LAB_10001988:
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
        if (uVar9 == uVar6) goto LAB_100017ec;
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
LAB_100017ec:
  if (uVar8 == 0) {
    return destination;
  }
LAB_100017f4:
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
 * Address: 0x10001a3c
 */

void * recovered_10001a3c(void *destination,void *source,ulong count)

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
      goto LAB_10001a84;
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
          if (puVar8 == (undefined8 *)count) goto LAB_10001d10;
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
LAB_10001d10:
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
        if ((undefined8 *)count == puVar8) goto LAB_10001d8c;
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
LAB_10001d8c:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10001a84:
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
    goto LAB_10001b00;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10001d9c:
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
          goto LAB_10001d9c;
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
        if (uVar5 == uVar7) goto LAB_10001e78;
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
LAB_10001e78:
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
      if (uVar7 == uVar5) goto LAB_10001f34;
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
LAB_10001f34:
  if (uVar9 == 0) {
    return destination;
  }
LAB_10001b00:
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
 * Address: 0x10001f48
 */

void * recovered_10001f48(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x100020d0;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x10001fe8:
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
        if (uVar6 == uVar7) goto joined_r0x10002074;
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
      goto joined_r0x10001fe8;
    }
  }
joined_r0x10002074:
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
      if (uVar7 == uVar6) goto joined_r0x100020d0;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x100020d0:
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
 * Address: 0x10002148
 */

void recovered_10002148(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100022c8;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100021e4:
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
        if (uVar7 == uVar8) goto joined_r0x10002268;
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
      goto joined_r0x100021e4;
    }
  }
joined_r0x10002268:
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
      if (uVar7 == uVar8) goto joined_r0x100022c8;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100022c8:
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
 * Address: 0x10002344
 */

void recovered_10002344(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100024c4;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100023e0:
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
        if (uVar7 == uVar8) goto joined_r0x10002464;
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
      goto joined_r0x100023e0;
    }
  }
joined_r0x10002464:
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
      if (uVar7 == uVar8) goto joined_r0x100024c4;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100024c4:
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
 * Address: 0x10002540
 */

int recovered_10002540(void *left,void *right,ulong count)

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
LAB_10002638:
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
      if (uVar5 != uVar6) goto LAB_10002730;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10002730;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10002730;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10002730;
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
LAB_10002668:
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
      if (uVar5 != uVar6) goto LAB_10002668;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10002738(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10002638;
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
LAB_10002730:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002738
 */

int recovered_10002738(byte *param_1,byte *param_2)

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
 * Address: 0x10002788
 */

bool recovered_10002788(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000279c
 */

bool recovered_1000279c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b0
 */

bool recovered_100027b0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c8
 */

bool recovered_100027c8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f4
 */

bool recovered_100027f4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002814
 */

bool recovered_10002814(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002828
 */

int recovered_10002828(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002838
 */

int recovered_10002838(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002848
 */

ulong recovered_10002848(char *text)

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
 * Address: 0x10002870
 */

int recovered_10002870(char *left,char *right)

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
LAB_100028a8:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_100028a8;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b4
 */

int recovered_100028b4(byte *param_1,byte *param_2)

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
LAB_100028ec:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_100028ec;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f8
 */

void recovered_100028f8(int param_1,int param_2)

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
 * Address: 0x10002914
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10002914(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_100029dc;
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
          if (uVar8 == uVar11) goto LAB_10002b70;
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
LAB_10002b70:
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
        if (uVar11 == uVar8) goto LAB_100029d4;
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
LAB_100029d4:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_100029dc:
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
 * Address: 0x10002c28
 */

char * recovered_10002c28(char *param_1,char param_2)

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
 * Address: 0x10002c5c
 */

int recovered_10002c5c(char *param_1,char *param_2)

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
 * Address: 0x10002cc0
 */

char * recovered_10002cc0(char *param_1,char *param_2)

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
 * Address: 0x10002d20
 */

char * recovered_10002d20(char *param_1,char *param_2)

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


#undef DAT_1000be58
#define DAT_1000be58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d84
 */

undefined * recovered_10002d84(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000be58;
}

#undef DAT_1000be58

#undef PTR_DAT_1000c00c
#define PTR_DAT_1000c00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d94
 */

undefined ** recovered_10002d94(void)

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
 * Address: 0x10002da4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002da4(undefined4 *param_1)

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
 * Address: 0x10002e54
 */

double recovered_10002e54(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10002e98
 */

double recovered_10002e98(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10002f50
 */

double recovered_10002f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10002f88
 */

double recovered_10002f88(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10003008
 */

double recovered_10003008(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003038
 */

double recovered_10003038(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000307c
 */

double recovered_1000307c(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100031f8
#define DAT_100031f8 (*(double *)(0x100031f8U))
#undef DAT_10003200
#define DAT_10003200 (*(double *)(0x10003200U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c8
 */

double recovered_100030c8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100031f8
#undef DAT_10003200

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003208
 */

longlong recovered_10003208(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100033c8(in_d0);
  return lVar1;
}


#undef DAT_100032c8
#define DAT_100032c8 (*(double *)(0x100032c8U))
#undef DAT_100032d0
#define DAT_100032d0 (*(double *)(0x100032d0U))
#undef DAT_100032d8
#define DAT_100032d8 (*(double *)(0x100032d8U))
#undef DAT_100032e0
#define DAT_100032e0 (*(double *)(0x100032e0U))
#undef DAT_100032e8
#define DAT_100032e8 (*(double *)(0x100032e8U))
#undef DAT_100032f0
#define DAT_100032f0 (*(double *)(0x100032f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003238
 */

double recovered_10003238(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100032c8
#undef DAT_100032d0
#undef DAT_100032d8
#undef DAT_100032e0
#undef DAT_100032e8
#undef DAT_100032f0

#undef DAT_10003380
#define DAT_10003380 (*(double *)(0x10003380U))
#undef DAT_10003388
#define DAT_10003388 (*(double *)(0x10003388U))
#undef DAT_10003390
#define DAT_10003390 (*(double *)(0x10003390U))
#undef DAT_10003398
#define DAT_10003398 (*(double *)(0x10003398U))
#undef DAT_100033a0
#define DAT_100033a0 (*(double *)(0x100033a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f8
 */

double recovered_100032f8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003380
#undef DAT_10003388
#undef DAT_10003390
#undef DAT_10003398
#undef DAT_100033a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a8
 */

double recovered_100033a8(undefined4 param_1,undefined4 param_2)

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
long long recovered_100033c8(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003488(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10003510(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10003558(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_10003628
#define DAT_10003628 (*(float *)(0x10003628U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e8
 */

float recovered_100035e8(float param_1,float param_2)

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

#undef DAT_10003628

#undef DAT_100036e4
#define DAT_100036e4 (*(float *)(0x100036e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000362c
 */

float recovered_1000362c(float param_1,float *param_2)

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

#undef DAT_100036e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e8
 */

float recovered_100036e8(float param_1,uint param_2)

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


#undef DAT_100037b8
#define DAT_100037b8 (*(float *)(0x100037b8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003734
 */

float recovered_10003734(float param_1,float param_2)

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

#undef DAT_100037b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037bc
 */

float recovered_100037bc(float param_1)

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
 * Address: 0x100037f4
 */

float recovered_100037f4(float param_1)

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
 * Address: 0x10003840
 */

double recovered_10003840(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003894
 */

float recovered_10003894(float param_1)

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


#undef DAT_10003944
#define DAT_10003944 (*(float *)(0x10003944U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f0
 */

float recovered_100038f0(float param_1)

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

#undef DAT_10003944

#undef DAT_10003a80
#define DAT_10003a80 (*(double *)(0x10003a80U))
#undef DAT_10003a88
#define DAT_10003a88 (*(float *)(0x10003a88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003948
 */

float recovered_10003948(float param_1)

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

#undef DAT_10003a80
#undef DAT_10003a88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a8c
 */

longlong recovered_10003a8c(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100033c8(in_d0);
  return lVar1;
}


#undef DAT_10003b58
#define DAT_10003b58 (*(double *)(0x10003b58U))
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
 * Address: 0x10003ac0
 */

float recovered_10003ac0(float param_1)

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

#undef DAT_10003b58
#undef DAT_10003b60
#undef DAT_10003b68
#undef DAT_10003b70
#undef DAT_10003b78
#undef DAT_10003b80

#undef DAT_10003c18
#define DAT_10003c18 (*(double *)(0x10003c18U))
#undef DAT_10003c20
#define DAT_10003c20 (*(double *)(0x10003c20U))
#undef DAT_10003c28
#define DAT_10003c28 (*(double *)(0x10003c28U))
#undef DAT_10003c30
#define DAT_10003c30 (*(double *)(0x10003c30U))
#undef DAT_10003c38
#define DAT_10003c38 (*(double *)(0x10003c38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b88
 */

float recovered_10003b88(float param_1)

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

#undef DAT_10003c18
#undef DAT_10003c20
#undef DAT_10003c28
#undef DAT_10003c30
#undef DAT_10003c38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c40
 */

float recovered_10003c40(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c5c
 */

int recovered_10003c5c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10003db0
 */

int recovered_10003db0(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10003e2c;
  }
  bVar2 = false;
joined_r0x10003e2c:
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
 * Address: 0x10003f10
 */

double recovered_10003f10(byte *param_1,undefined4 *param_2)

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
      goto LAB_10003ffc;
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
LAB_10003ffc:
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
 * Address: 0x100040e4
 */

float recovered_100040e4(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003f10(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000be5d
#define DAT_1000be5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef str_1000be64
#define str_1000be64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000be75
#define str_1000be75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(double * *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(byte * *)(frame + 28))
#define local_60 (*(byte (*)[64])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004100
 */

int recovered_10004100(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10004174:
  do {
    while( true ) {
      pcVar5 = str_1000be75;
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
LAB_10004168:
        param_1 = param_1 + 1;
        local_68 = local_68 - 1;
      }
LAB_1000416c:
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
          goto LAB_10004210;
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
LAB_10004210:
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
switchD_100043a8_caseD_4a:
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
      }
      local_70 = local_70 + 1;
      param_4 = pdVar2;
      goto LAB_10004b84;
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
        goto LAB_10004630;
      }
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10004630:
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
        local_60[-iVar16] = str_1000be75[uVar10 + uVar11 * -10];
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
        goto LAB_10004b84;
      }
      goto LAB_10004b90;
    default:
      goto switchD_100043a8_caseD_4a;
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
        goto LAB_10004978;
      case 6:
        uVar14 = *(uint *)pdVar2;
        uVar10 = (int)uVar14 >> 0x1f;
        goto LAB_10004978;
      }
      uVar10 = 0;
LAB_10004978:
      iVar6 = 0;
      if (uVar9 == 0x58) {
        pcVar5 = str_1000be64;
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
LAB_10004b84:
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_68) {
        *param_1 = (byte)*(undefined4 *)pdVar2;
        goto LAB_10004168;
      }
      goto LAB_1000416c;
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
                        goto LAB_10004528;
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
LAB_10004528:
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
          local_60[-iVar16] = str_1000be75[uVar10 + uVar11 * -10];
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
LAB_10004a90:
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
                      goto LAB_10004a90;
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
        local_60[iVar16] = str_1000be75[uVar9 & 0xf];
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
        pbVar12 = &DAT_1000be5d;
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
        goto LAB_10004b84;
      }
      goto LAB_10004ba4;
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
        goto LAB_10004ab8;
      case 6:
        uVar10 = *(uint *)pdVar2;
        uVar9 = (int)uVar10 >> 0x1f;
        goto LAB_10004ab8;
      }
      uVar9 = 0;
LAB_10004ab8:
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
        local_60[-iVar16] = str_1000be75[uVar10 + uVar11 * -10];
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
        goto LAB_10004b84;
      }
LAB_10004b90:
      param_4 = local_6c;
LAB_10004ba4:
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
  goto LAB_10004174;
}

#undef DAT_1000be5d
#undef str_1000be64
#undef str_1000be75
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10004d64(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004100(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x250U)))
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
 * Address: 0x10004d94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004d94(int *param_1,int *param_2,int *param_3)

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
      bVar6 = pcVar4 == pf_varargs_10004d64__4_;
    }
    if (bVar7 && !bVar6) {
      if (param_1 < pf_varargs_10004d64__4_) {
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
          bVar6 = DAT_1000c080 != 0;
          piVar3 = &DAT_1000c080;
          unaff_r9[2] = iVar5;
          if (bVar6) {
            piVar3 = (int *)(iVar5 + 4);
          }
          *piVar3 = (int)unaff_r9;
          *param_3 = (int)unaff_r9;
          *unaff_r9 = uVar1 - 0x10;
          piVar3 = (int *)DAT_1000c084;
          *(undefined1 *)(unaff_r9 + 3) = 1;
          if (piVar3 == (int *)0x0) {
            DAT_1000c084 = (code *)unaff_r9;
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
      puVar2 = &DAT_1000c080;
      if (DAT_1000c080 != 0) {
        puVar2 = (undefined4 *)(_DAT_68000008 + 4);
      }
      pcVar4 = (code *)&DAT_68000000;
      *puVar2 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar3 = (int *)DAT_1000c084;
      goto LAB_10004ee4;
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
  bVar6 = DAT_1000c080 != 0;
  puVar2 = &DAT_1000c080;
  *(int *)(pcVar4 + 8) = iVar5;
  if (bVar6) {
    puVar2 = (undefined4 *)(iVar5 + 4);
  }
  *puVar2 = pcVar4;
  *param_3 = (int)pcVar4;
  *(uint *)pcVar4 = uVar1 - 0x10;
  piVar3 = (int *)DAT_1000c084;
  *(uint8_t *)((uintptr_t)pcVar4+0xc) = 0x1;
LAB_10004ee4:
  if (piVar3 == (int *)0x0) {
    DAT_1000c084 = pcVar4;
    return;
  }
  return;
}

#undef DAT_1000c080
#undef DAT_1000c084
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
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
 * Address: 0x10004f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004f80(char *param_1,int param_2)

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
        if (DAT_1000c088 != 0) {
          DAT_1000c088 = DAT_1000c088 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1000c088 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_100017b8(local_224,&DAT_1000c08c,DAT_1000c088);
            uVar2 = DAT_1000c088;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_1000c088 = 0;
        }
        else {
          if (DAT_1000c088 - 0x1ff < 0xfffffe00) {
            recovered_100017b8(local_224,&DAT_1000c08c,DAT_1000c088);
            local_224[DAT_1000c088] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_1000c088 = 0;
          }
          (&DAT_1000c08c)[DAT_1000c088] = cVar1;
          DAT_1000c088 = DAT_1000c088 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
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
 * Address: 0x10005164
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005164(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_1000c088 != 0) {
    recovered_100017b8(local_210,&DAT_1000c08c,DAT_1000c088);
    uVar1 = DAT_1000c088;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_1000c088 = 0;
  return;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
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
 * Address: 0x10005224
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005224(void)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_1000c088 == 0) {
    return;
  }
  recovered_100017b8(auStack_214,&DAT_1000c08c,DAT_1000c088);
  auStack_214[DAT_1000c088] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_1000c088 = 0;
  return;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000be5c
#define DAT_1000be5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000be86
#define DAT_1000be86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

void recovered_100052e0(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_1000be86;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000be5c;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10004d64(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10004f80(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000be5c
#undef DAT_1000be86
#undef acStack_14c

#undef DAT_1000bea4
#define DAT_1000bea4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000be89
#define str_1000be89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005338
 */

void recovered_10005338(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002848(str_1000be89);
  recovered_10004f80(str_1000be89,uVar1);
  uVar1 = recovered_10002848(&DAT_1000bea4);
  recovered_10004f80(&DAT_1000bea4,uVar1);
  return;
}

#undef DAT_1000bea4
#undef str_1000be89

#undef DAT_1000bea4
#define DAT_1000bea4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000bea7
#define str_1000bea7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005384
 */

void recovered_10005384(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002848(str_1000bea7);
  recovered_10004f80(str_1000bea7,uVar1);
  uVar1 = recovered_10002848(&DAT_1000bea4);
  recovered_10004f80(&DAT_1000bea4,uVar1);
  return;
}

#undef DAT_1000bea4
#undef str_1000bea7

#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
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
 * Address: 0x100053d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100053d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1000c088 != 0) {
    recovered_100017b8(auStack_224,&DAT_1000c08c,DAT_1000c088);
    auStack_224[DAT_1000c088] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_1000c088 = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_1000c088
#undef DAT_1000c08c
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
 * Address: 0x10005524
 */

undefined4 recovered_10005524(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000552c
 */

void recovered_1000552c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

undefined4 recovered_10005530(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000be86
#define DAT_1000be86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
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
#undef str_1000bf3b
#define str_1000bf3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_1000bf48
#define str_1000bf48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_1000bf56
#define str_1000bf56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122U)))
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005538
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005538(char *param_1,int param_2)

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
    goto LAB_100057ac;
  }
  iVar2 = recovered_10002870(param_1,str_1000bf3b);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10005738:
    puVar4 = recovered_100016c0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10001f48(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      pf_varargs_10004d64__4_((char *)(puVar4 + 1),0xf1,&DAT_1000be86,(uint)param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10002870(param_1,str_1000bf48);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10005738;
    }
    iVar3 = recovered_10002870(param_1,str_1000bf56);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10005738;
    }
    puVar4 = recovered_100016c0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10001f48(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10002c28(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10002c28(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10002c28(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10002c28(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10002c28(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10002c28(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10002c28(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      pf_varargs_10004d64__4_((char *)(puVar4 + 1),0xf1,&DAT_1000be86,(uint)param_1);
      recovered_10001f48(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10002c28(unaff_r8,'w');
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
              destination = recovered_10001764((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_100057d4;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_100017b8(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_100057d4:
        *DAT_10010004 = uVar7;
        recovered_10001714(puVar4);
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
LAB_100057ac:
  *DAT_10010004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000be86
#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000bf3b
#undef str_1000bf48
#undef str_1000bf56
#undef local_24
#undef local_20

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
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
 * Address: 0x100058bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100058bc(char *param_1,int param_2,uint *param_3)

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
      recovered_10001714((void *)param_3[0x3f]);
    }
    recovered_10001714(param_3);
  }
  recovered_10005538(param_1,param_2);
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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
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
 * Address: 0x100059bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100059bc(uint *param_1)

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
    recovered_10001714((void *)param_1[0x3f]);
  }
  recovered_10001714(param_1);
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
 * Address: 0x10005ab4
 */

uint recovered_10005ab4(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_100017b8(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10000a90(count,param_2);
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
            uVar1 = recovered_10005be0(unaff_r4);
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


#undef DAT_1000be5c
#define DAT_1000be5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
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
 * Address: 0x10005be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10005be0(int *param_1)

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
LAB_10005c3c:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000c088 != 0) {
      recovered_100017b8(auStack_220,&DAT_1000c08c,DAT_1000c088);
      auStack_220[DAT_1000c088] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_1000c088 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000be5c,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002848(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10005c3c;
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

#undef DAT_1000be5c
#undef DAT_1000c088
#undef DAT_1000c08c
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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de0
 */

int recovered_10005de0(void *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_10004f80(param_1,count);
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
        pvVar1 = recovered_10001764((void *)param_4[0x3f],size);
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
        recovered_10001f48((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_100017b8((void *)(param_4[0x3f] + uVar2),param_1,count);
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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f58
 */

undefined4 recovered_10005f58(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10005f6c;
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
LAB_10005f6c:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10010004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006008
 */

undefined4 recovered_10006008(int param_1)

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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
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
 * Address: 0x10006030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006030(uint *param_1)

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
 * Address: 0x10006108
 */

undefined1 recovered_10006108(int param_1)

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
 * Address: 0x10006118
 */

undefined1 recovered_10006118(int param_1)

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
 * Address: 0x10006128
 */

void recovered_10006128(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006144
 */

void recovered_10006144(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
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
 * Address: 0x10006168
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006168(int param_1)

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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41d0U)))
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
 * Address: 0x100061f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100061f8(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  recovered_10001f48(&local_28,0,0xc);
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
 * Address: 0x1000636c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000636c(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10001f48(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_100016c0(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_100017b8(destination,local_24,local_20);
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
 * Address: 0x1000646c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000646c(int param_1,int param_2,int param_3)

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
 * Address: 0x100064f4
 */

undefined4 recovered_100064f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064fc
 */

void recovered_100064fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006500
 */

undefined4 recovered_10006500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006508
 */

undefined4 recovered_10006508(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006510
 */

undefined4 recovered_10006510(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006518
 */

char * recovered_10006518(char *param_1,char param_2,int param_3)

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
 * Address: 0x1000654c
 */

int recovered_1000654c(char *left,char *right,ulong count)

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


#undef DAT_1000beca
#define DAT_1000beca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000becd
#define str_1000becd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_1000beda
#define str_1000beda (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6U)))
#undef str_1000bee4
#define str_1000bee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_1000bef8
#define str_1000bef8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000bf06
#define str_1000bf06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2U)))
#undef str_1000bf18
#define str_1000bf18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000bf24
#define str_1000bf24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1000bf35
#define str_1000bf35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006590
 */

char * recovered_10006590(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000beca;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_100065b0_caseD_0;
  default:
    pcVar1 = str_1000bf35;
switchD_100065b0_caseD_0:
    return pcVar1;
  case 2:
    return str_1000becd;
  case 5:
    return str_1000beda;
  case 9:
    return str_1000bee4;
  case 0xc:
    return str_1000bef8;
  case 0xd:
    return str_1000bf06;
  case 0x11:
    return str_1000bf18;
  case 0x16:
    return str_1000bf24;
  }
}

#undef DAT_1000beca
#undef str_1000becd
#undef str_1000beda
#undef str_1000bee4
#undef str_1000bef8
#undef str_1000bf06
#undef str_1000bf18
#undef str_1000bf24
#undef str_1000bf35

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006690
 */

undefined4 recovered_10006690(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006698
 */

undefined4 recovered_10006698(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c28c
#define DAT_1000c28c (*(int *)(((uintptr_t)pf_module_state + 0x458U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066a0
 */

void recovered_100066a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c28c = DAT_1000c28c + 1;
  return;
}

#undef DAT_1000c28c

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100066c8(void *context){__asm__ volatile("ldr sp,[r0,#40]\nldr r7,[r0,#32]\nldr ip,[r0,#36]\nbx ip");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100066d8(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100066f0(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


#undef DAT_10006794
#define DAT_10006794 (*(int *)(0x10006794U))
#undef DAT_10006798
#define DAT_10006798 (*(int *)(0x10006798U))
#define local_24 (*(code * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define local_1c (*(undefined1 * *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(undefined1 * *)(frame + 60))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

void recovered_10006710(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_1000679c;
  local_20 = ((uintptr_t)pf_module_state + 0x130U);
  local_18 = (0x1cU) + 0x10006748;
  local_38 = 1;
  recovered_10006d8c(&uStack_3c);
  recovered_100016ac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10006770);
  (*pcVar1)();
}

#undef DAT_10006794
#undef DAT_10006798
#undef local_24
#undef local_20
#undef uStack_3c
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_10
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000679c
 */

undefined4 recovered_1000679c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a4
 */

void recovered_100067a4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100067b4(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006710();
}


#undef DAT_1000c290
#define DAT_1000c290 (*(int *)(((uintptr_t)pf_module_state + 0x45cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b4
 */

void recovered_100067b4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1000c290;
  DAT_1000c290 = param_1;
  recovered_10006c28(param_1);
  return;
}

#undef DAT_1000c290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067ec
 */

void * recovered_100067ec(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100016c0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100016ac();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006818
 */

void * recovered_10006818(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100016c0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100016ac();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10006904
#define DAT_10006904 (*(int *)(0x10006904U))
#undef DAT_10006908
#define DAT_10006908 (*(int *)(0x10006908U))
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
 * Address: 0x10006844
 */

void recovered_10006844(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000679c;
  local_78 = ((uintptr_t)pf_module_state + 0x140U);
  local_70 = (0x3cU) + 0x10006898;
  local_90 = 1;
  recovered_10006d8c(&uStack_94);
  recovered_10001714(param_1);
  recovered_10006db0(&uStack_94);
  return;
}

#undef DAT_10006904
#undef DAT_10006908
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_100069cc
#define DAT_100069cc (*(int *)(0x100069ccU))
#undef DAT_100069d0
#define DAT_100069d0 (*(int *)(0x100069d0U))
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
 * Address: 0x1000690c
 */

void recovered_1000690c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000679c;
  local_78 = ((uintptr_t)pf_module_state + 0x150U);
  local_70 = (0x3cU) + 0x10006960;
  local_90 = 1;
  recovered_10006d8c(&uStack_94);
  recovered_10001714(param_1);
  recovered_10006db0(&uStack_94);
  return;
}

#undef DAT_100069cc
#undef DAT_100069d0
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10006a94
#define DAT_10006a94 (*(int *)(0x10006a94U))
#undef DAT_10006a98
#define DAT_10006a98 (*(int *)(0x10006a98U))
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
 * Address: 0x100069d4
 */

void recovered_100069d4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000679c;
  local_78 = ((uintptr_t)pf_module_state + 0x160U);
  local_70 = (0x3cU) + 0x10006a28;
  local_90 = 1;
  recovered_10006d8c(&uStack_94);
  recovered_10001714(param_1);
  recovered_10006db0(&uStack_94);
  return;
}

#undef DAT_10006a94
#undef DAT_10006a98
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

#undef DAT_10006b5c
#define DAT_10006b5c (*(int *)(0x10006b5cU))
#undef DAT_10006b60
#define DAT_10006b60 (*(int *)(0x10006b60U))
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
 * Address: 0x10006a9c
 */

void recovered_10006a9c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000679c;
  local_78 = ((uintptr_t)pf_module_state + 0x170U);
  local_70 = (0x3cU) + 0x10006af0;
  local_90 = 1;
  recovered_10006d8c(&uStack_94);
  recovered_10001714(param_1);
  recovered_10006db0(&uStack_94);
  return;
}

#undef DAT_10006b5c
#undef DAT_10006b60
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
 * Address: 0x10006b64
 */

undefined4 recovered_10006b64(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b6c
 */

uint recovered_10006b6c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b7c
 */

void recovered_10006b7c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b8c
 */

void recovered_10006b8c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

undefined4 * recovered_10006b90(uint param_1)

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
  puVar1 = recovered_100016c0(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006710();
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
      if (size == uVar6) goto LAB_10006c0c;
    }
    iVar3 = (param_1 - uVar6) + 0x1c;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10006c0c:
  return puVar1 + 7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c18
 */

void recovered_10006c18(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001714((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c28
 */

int recovered_10006c28(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}


#undef DAT_1000c290
#define DAT_1000c290 (*(void * *)(((uintptr_t)pf_module_state + 0x45cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c30
 */

void recovered_10006c30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  undefined4 uVar2;

  pointer = DAT_1000c290;
  if (DAT_1000c290 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_1000c290 + 0x18);
  uVar2 = *(undefined4 *)((int)DAT_1000c290 + 8);
  *(undefined4 *)((int)DAT_1000c290 + 8) = 0;
  DAT_1000c290 = (void *)uVar2;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_10001714(pointer);
  return;
}

#undef DAT_1000c290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c98
 */

void recovered_10006c98(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  recovered_10006cc0((undefined4 *)(param_1 + -0x1c));
  return;
}


#undef DAT_1000c290
#define DAT_1000c290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x45cU)))
#undef DAT_1000c294
#define DAT_1000c294 (*(int * *)(((uintptr_t)pf_module_state + 0x460U)))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cc0
 */

void recovered_10006cc0(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_1000c294 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_1000c294;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_100075d8((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[4] = local_24;
        param_1[3] = piVar2;
        param_1[5] = local_20;
        recovered_10006e44(param_1);
        puVar3 = DAT_1000c290;
                    /* WARNING: Subroutine does not return */
        if (DAT_1000c290 == (undefined4 *)0x0) {
          recovered_10006710();
        }
        DAT_1000c290[5] = 0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 6) = 1;
        recovered_10006cc0(puVar3);
        *extraout_r0 = (int)DAT_1000c294;
        DAT_1000c294 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006710();
}

#undef DAT_1000c290
#undef DAT_1000c294
#undef local_20
#undef local_28
#undef local_24

#undef DAT_1000c290
#define DAT_1000c290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x45cU)))
#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x460U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d54
 */

void recovered_10006d54(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_1000c290;
                    /* WARNING: Subroutine does not return */
  if (DAT_1000c290 == (undefined4 *)0x0) {
    recovered_10006710();
  }
  DAT_1000c290[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  recovered_10006cc0(puVar1);
  *extraout_r0 = DAT_1000c294;
  DAT_1000c294 = extraout_r0;
  return;
}

#undef DAT_1000c290
#undef DAT_1000c294

#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x460U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d8c
 */

void recovered_10006d8c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c294;
  DAT_1000c294 = param_1;
  return;
}

#undef DAT_1000c294

#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x460U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db0
 */

void recovered_10006db0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000c294;
  if (DAT_1000c294 == param_1) {
    puVar2 = &DAT_1000c294;
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

#undef DAT_1000c294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df8
 */

void recovered_10006df8(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006cc0(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_10006710();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e04
 */

void recovered_10006e04(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006710();
}


#undef DAT_1000c294
#define DAT_1000c294 (*(int * *)(((uintptr_t)pf_module_state + 0x460U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e10
 */

void recovered_10006e10(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1000c294 != (int *)0x0) {
    DAT_1000c294 = (int *)*DAT_1000c294;
  }
  recovered_10006e44(param_1);
  return;
}

#undef DAT_1000c294

#undef DAT_1000c294
#define DAT_1000c294 (*(int * *)(((uintptr_t)pf_module_state + 0x460U)))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e44
 */

undefined4 recovered_10006e44(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_1000c294 != (int *)0x0) {
    piVar5 = (int *)param_1[3];
    do {
      piVar1 = DAT_1000c294;
      if (DAT_1000c294 == piVar5) {
        iVar4 = param_1[5];
        iVar3 = param_1[4];
        DAT_1000c294[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_10006ef8:
        piVar1[1] = iVar3;
        recovered_100066c8((int)piVar1);
        recovered_10006e10(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_100075d8((int)DAT_1000c294,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_10006ef8;
      }
      DAT_1000c294 = (int *)*piVar1;
    } while (DAT_1000c294 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006710();
}

#undef DAT_1000c294
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f04
 */

undefined4 recovered_10006f04(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006e10(in_r0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

undefined4 recovered_10006f10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f18
 */

void recovered_10006f18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006710();
}


#undef DAT_1000c064
#define DAT_1000c064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f24
 */

int recovered_10006f24(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_10007010:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_10007010;
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
 * Address: 0x10007018
 */

void recovered_10007018(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000701c
 */

undefined4 recovered_1000701c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007024
 */

bool recovered_10007024(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007038
 */

bool recovered_10007038(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007078
 */

bool recovered_10007078(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070a4
 */

bool recovered_100070a4(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070c0
 */

bool recovered_100070c0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070dc
 */

bool recovered_100070dc(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f8
 */

bool recovered_100070f8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10007118(double value) {
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
float recovered_10007200(float value){return (float)recovered_10007118((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007300(long double value){return (long double)recovered_10007118((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_100073e8(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007404
 */

double recovered_10007404(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10003008(param_1,param_2);
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
 * Address: 0x1000745c
 */

ulonglong recovered_1000745c(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x100074c8;
    }
  }
  bVar1 = false;
joined_r0x100074c8:
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
 * Address: 0x100075d4
 */

ulonglong recovered_100075d4(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x100074c8;
    }
  }
  bVar1 = false;
joined_r0x100074c8:
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


#undef DAT_1000bfb8
#define DAT_1000bfb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_1000c064
#define DAT_1000c064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x230U)))
#define local_28 (*(byte * *)(frame + 24))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d8
 */

undefined4 recovered_100075d8(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_1000798c((uint)*pbVar10,&local_28);
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
          goto LAB_100077b0;
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
LAB_100077b0:
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
LAB_1000796c:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000bfb8 + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000798c(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000796c;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000796c;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000796c;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_1000c064) goto LAB_10007940;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000796c;
  }
LAB_10007940:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_100077b0;
}

#undef DAT_1000bfb8
#undef DAT_1000c064
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000798c
 */

undefined4 * recovered_1000798c(uint param_1,undefined4 *param_2)

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
      goto switchD_100079bc_caseD_5;
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
switchD_100079bc_caseD_5:
  return puVar5;
}


#undef DAT_10007b80
#define DAT_10007b80 (*(uint64_t *)(0x10007b80U))
#undef DAT_10007b88
#define DAT_10007b88 (*(uint64_t *)(0x10007b88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b20
 */

void recovered_10007b20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x34);
  param_1[2] = param_4;
  uVar2 = (0xffffffffffffffffU);
  uVar1 = (0xffffffff00f6f6f6U);
  param_1[3] = param_3 << 2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[8] = 0;
  return;
}

#undef DAT_10007b80
#undef DAT_10007b88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b90
 */

void recovered_10007b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[7] = param_9;
  param_1[6] = param_8;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[5] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c08
 */

void recovered_10007c08(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[7] = param_9;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[6] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c80
 */

void recovered_10007c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,int param_15,
                       uint param_16)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_2;
  if (99 < param_16) {
    param_16 = 100;
  }
  if (4 < param_15 + 1U) {
    param_15 = -1;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  param_1[8] = param_16;
  param_1[7] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d04
 */

void recovered_10007d04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d70
 */

void recovered_10007d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[0xc] = param_14;
  param_1[8] = 0;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[7] = 1;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

void recovered_10007de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[7] = 2;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[8] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e58
 */

void recovered_10007e58(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[7] = 3;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[8] = param_15;
  return;
}


#undef DAT_1000be5c
#define DAT_1000be5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_400108a0
#define DAT_400108a0 (*(uint8_t *)(0x400108a0U))
#undef DAT_400108ec
#define DAT_400108ec (*(uint8_t *)(0x400108ecU))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_400108a0
#define _DAT_400108a0 (*(code * *)(0x400108a0U))
#undef _DAT_400108ec
#define _DAT_400108ec (*(code * *)(0x400108ecU))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10007ed0(uint *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint unaff_r10;
  uint uVar15;
  bool bVar16;

  if (param_1 == (uint *)0x0 || param_2 == (uint *)0x0) {
    return 0;
  }
  uVar14 = param_2[1];
  if (uVar14 != 0) {
    unaff_r10 = param_2[2];
  }
  if (uVar14 == 0 || unaff_r10 == 0) {
    return 0;
  }
  uVar12 = param_2[3];
  if (uVar12 == 0) {
    uVar12 = uVar14 << 2;
  }
  uVar3 = uVar12;
  if (uVar12 == 0) {
    uVar3 = uVar14 << 2;
  }
  if (uVar3 < uVar14 << 2) {
    return 0;
  }
  uVar11 = (uint)((ulonglong)unaff_r10 * (ulonglong)uVar3);
  if ((int)((ulonglong)unaff_r10 * (ulonglong)uVar3 >> 0x20) != 0) {
    return 0;
  }
  uVar4 = param_2[0xc];
  puVar5 = (undefined *)param_2[0xb];
  puVar6 = (undefined *)param_2[10];
  puVar7 = (undefined *)param_2[9];
  uVar8 = param_2[7];
  uVar9 = param_2[6];
  uVar10 = param_2[4];
  uVar13 = param_2[8];
  uVar15 = *param_2;
  uVar3 = param_2[5];
  recovered_10001f48(param_1,0,0x340);
  if (_DAT_40010800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_40010804 == 0) {
    return 0;
  }
  if (_DAT_40010808 < 0xa4) {
    return 0;
  }
  if (_DAT_400108a0 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*_DAT_400108a0)(uVar15,uVar14,unaff_r10);
  if (uVar1 == 0) {
    return 0;
  }
  if (99 < uVar13) {
    uVar13 = 100;
  }
  param_1[8] = uVar13;
  param_1[4] = uVar10;
  param_1[0xc] = uVar15;
  if (4 < uVar8 + 1) {
    uVar8 = 0xffffffff;
  }
  param_1[3] = uVar12;
  param_1[7] = uVar8;
  param_1[2] = unaff_r10;
  param_1[1] = uVar14;
  uVar14 = 100;
  if (uVar9 < 100) {
    uVar14 = uVar9;
  }
  uVar12 = 0;
  if (uVar9 != 0xffffffff) {
    uVar12 = uVar14;
  }
  *param_1 = uVar1;
  param_1[6] = uVar12;
  uVar14 = 100;
  if (uVar3 < 100) {
    uVar14 = uVar3;
  }
  if (uVar3 == 0xffffffff) {
    uVar14 = 0xf;
  }
  param_1[5] = uVar14;
  if ((uVar4 & 1) == 0) {
LAB_10008088:
    if (((puVar7 != (undefined *)0x0 || puVar6 != (undefined *)0x0) || (puVar5 != (undefined *)0x0))
       && (*param_1 != 0)) {
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_1000be5c;
      }
      if (puVar6 == (undefined *)0x0) {
        puVar6 = &DAT_1000be5c;
      }
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &DAT_1000be5c;
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0xef < _DAT_40010808 && (_DAT_400108ec != (code *)0x0)))) {
        (*_DAT_400108ec)(*param_1,puVar7,puVar6,puVar5);
      }
    }
    bVar16 = uVar3 == 0xffffffff && uVar9 == 0xffffffff;
    if (uVar3 != 0xffffffff || uVar9 != 0xffffffff) {
      uVar3 = *param_1;
      bVar16 = uVar3 == 0;
    }
    if (!bVar16) {
      uVar14 = param_1[6];
      if (99 < uVar14) {
        uVar14 = 100;
      }
      uVar12 = 100;
      if (param_1[5] < 100) {
        uVar12 = param_1[5];
      }
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
         ((_DAT_40010960 != (code *)0x0 &&
          (iVar2 = (*_DAT_40010960)(uVar3,(uVar12 * 0xff + 0x32) * 0x147b >> 0x13,
                                    (uVar14 * 0xff + 0x32) * 0x147b >> 0x13), iVar2 != 0)))) {
        param_1[6] = uVar14;
        param_1[5] = uVar12;
      }
    }
    uVar14 = param_1[7];
    if ((uVar14 != 0xffffffff) && (*param_1 != 0)) {
      uVar3 = param_1[8];
      uVar12 = 0;
      if (99 < uVar3) {
        uVar3 = 100;
      }
      if (uVar14 < 4) {
        uVar12 = param_1[2];
        if (param_1[1] < param_1[2]) {
          uVar12 = param_1[1];
        }
        uVar12 = (uVar12 * uVar3 + 0x32) / 100;
      }
      else {
        uVar14 = 0xffffffff;
      }
      if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
        uVar11 = uVar1;
        if (0xb < _DAT_40010808) {
          uVar11 = _DAT_40010808;
        }
        if (0xb >= _DAT_40010808 || uVar11 < 0x168) {
          return uVar1;
        }
        if (_DAT_40010964 == (code *)0x0) {
          return uVar1;
        }
        iVar2 = (*_DAT_40010964)(*param_1,uVar14,uVar12);
        if (iVar2 == 0) {
          return uVar1;
        }
        param_1[8] = uVar3;
        param_1[7] = uVar14;
        return uVar1;
      }
    }
  }
  else {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
       (_DAT_4001084c != (code *)0x0)) {
      uVar14 = (*_DAT_4001084c)(uVar11);
      param_1[0xb] = uVar14;
      if (uVar14 != 0) {
        param_1[10] = uVar11;
        param_1[9] = param_1[9] | 1;
        goto LAB_10008088;
      }
    }
    else {
      param_1[0xb] = 0;
    }
    recovered_10008384();
    uVar1 = 0;
    recovered_10001f48(param_1,0,0x340);
  }
  return uVar1;
}

#undef DAT_1000be5c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_400108a0
#undef DAT_400108ec
#undef DAT_40010960
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_400108a0
#undef _DAT_400108ec
#undef _DAT_40010960
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108a8
#define DAT_400108a8 (*(uint8_t *)(0x400108a8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108a8
#define _DAT_400108a8 (*(code * *)(0x400108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008384
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008384(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0xac)) || (_DAT_400108a8 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100083d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_400108a8)();
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108a8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108a8

#undef DAT_1000be5c
#define DAT_1000be5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108ec
#define DAT_400108ec (*(uint8_t *)(0x400108ecU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108ec
#define _DAT_400108ec (*(code * *)(0x400108ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100083d4(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_1000be5c;
    }
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_1000be5c;
    }
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_1000be5c;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xef < _DAT_40010808)) &&
       (_DAT_400108ec != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10008464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*_DAT_400108ec)(iVar1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_1000be5c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108ec
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108ec

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008468
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10008468(int *param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_3) {
      param_3 = 100;
    }
    uVar2 = 100;
    if (param_2 < 100) {
      uVar2 = param_2;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
       (_DAT_40010960 != (code *)0x0)) {
      iVar1 = (*_DAT_40010960)(param_4,(uVar2 * 0xff + 0x32) * 0x147b >> 0x13,
                               (param_3 * 0xff + 0x32) * 0x147b >> 0x13);
      if (iVar1 != 0) {
        param_1[6] = param_3;
        param_1[5] = uVar2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010960
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010960

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10008540(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    uVar2 = 0;
    if (4 < param_2 + 1U) {
      param_2 = -1;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    if (param_2 != -1) {
      uVar2 = param_1[2];
      if ((uint)param_1[1] < (uint)param_1[2]) {
        uVar2 = param_1[1];
      }
      uVar2 = (uVar2 * param_3 + 0x32) / 100;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_4,param_2,uVar2);
      if (iVar1 != 0) {
        param_1[8] = param_3;
        param_1[7] = param_2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108a4
#define DAT_400108a4 (*(uint8_t *)(0x400108a4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108a4
#define _DAT_400108a4 (*(code * *)(0x400108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008634
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_10008634(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int unaff_r9;

  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    unaff_r9 = *param_1;
  }
  if (param_1 != (int *)0x0 && unaff_r9 != 0) {
    if (param_4 == 0) {
      param_4 = param_1[1];
    }
    param_1[0xf] = 0;
    if (param_5 == 0) {
      param_5 = param_1[2];
    }
    if (param_6 == 0) {
      param_6 = param_4 << 2;
    }
    if (param_2 == (byte *)0x0) {
      param_2 = (byte *)param_1[0xc];
    }
    uVar3 = (param_7 & 0xffffff) >> 0x10;
    uVar4 = ((((((((((param_5 & 0xff ^
                     ((((param_4 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ (param_4 & 0xffff) >> 8) *
                       0x1000193 ^ (param_4 & 0xffffff) >> 0x10) * 0x1000193 ^ param_4 >> 0x18) *
                     0x1000193) * 0x1000193 ^ (param_5 & 0xffff) >> 8) * 0x1000193 ^
                   (param_5 & 0xffffff) >> 0x10) * 0x1000193 ^ param_5 >> 0x18) * 0x1000193 ^
                 param_6 & 0xff) * 0x1000193 ^ (param_6 & 0xffff) >> 8) * 0x1000193 ^
               (param_6 & 0xffffff) >> 0x10) * 0x1000193 ^ param_6 >> 0x18) * 0x1000193 ^
             param_7 & 0xff) * 0x1000193 ^ (param_7 & 0xffff) >> 8) * 0x1000193 ^ uVar3;
    if (param_2 != (byte *)0x0) {
      uVar3 = (uint)*param_2;
    }
    uVar6 = (uVar4 * 0x1000193 ^ param_7 >> 0x18) * 0x1000193;
    uVar4 = uVar3;
    pbVar5 = param_2;
    if (param_2 != (byte *)0x0 && uVar3 != 0) {
      do {
        uVar6 = (uVar6 ^ uVar4) * 0x1000193;
        uVar4 = (uint)pbVar5[1];
        uVar3 = 0;
        pbVar5 = pbVar5 + 1;
      } while (uVar4 != 0);
    }
    if (param_3 != (byte *)0x0) {
      uVar3 = param_5 * param_6;
    }
    if (param_3 != (byte *)0x0 && uVar3 != 0) {
      pbVar5 = param_3;
      do {
        uVar3 = uVar3 - 1;
        uVar6 = (uVar6 ^ *pbVar5) * 0x1000193;
        pbVar5 = pbVar5 + 1;
      } while (uVar3 != 0);
    }
    if ((param_1[0xe] == 0) || (uVar6 != param_1[0xd])) {
      if (_DAT_40010800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_40010804 == 0) {
        return 0;
      }
      if (_DAT_40010808 < 0xa8) {
        return 0;
      }
      if (_DAT_400108a4 == (code *)0x0) {
        return 0;
      }
      iVar1 = (*_DAT_400108a4)(unaff_r9,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar1 == 0) {
        return 0;
      }
      param_1[0xd] = uVar6;
      param_1[0xe] = 1;
    }
    uVar2 = 1;
    param_1[4] = param_7;
    param_1[3] = param_6;
    param_1[2] = param_5;
    param_1[1] = param_4;
    param_1[0xc] = (int)param_2;
  }
  return uVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108a4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008874
 */

void recovered_10008874(int param_1,byte *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  if (param_1 == 0) {
    uVar1 = 0xf6f6f6;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  recovered_10008634((int *)param_1,param_2,(byte *)param_3[3],*param_3,param_3[1],param_3[2],uVar1)
  ;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088bc
 */

void recovered_100088bc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10008634((int *)param_1,*(byte **)(param_1 + 0x30),*(byte **)(param_1 + 0x2c),
                     *(uint *)(param_1 + 4),*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                     *(uint *)(param_1 + 0x10));
  return;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010854
#define DAT_40010854 (*(uint8_t *)(0x40010854U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010854
#define _DAT_40010854 (*(code * *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100088fc(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  int iVar3;

  if (param_1 != (int *)0x0 && param_3 != 0) {
    if (param_2 != 0) {
      param_4 = *param_1;
    }
    if (param_2 == 0 || param_4 == 0) {
      return 0;
    }
    lVar1 = (ulonglong)param_3 * (ulonglong)(uint)(param_2 << 2);
    iVar2 = (int)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      return 0;
    }
    iVar3 = param_1[0xb];
    if (param_1[10] == iVar2) {
      if (iVar3 != 0) goto LAB_1000895c;
      iVar3 = 0;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x57 < _DAT_40010808)) &&
       ((_DAT_40010854 != (code *)0x0 && (iVar3 = (*_DAT_40010854)(iVar3,iVar2), iVar3 != 0)))) {
      param_1[0xb] = iVar3;
      param_1[10] = iVar2;
      param_1[9] = param_1[9] | 1;
LAB_1000895c:
      param_1[3] = param_2 << 2;
      param_1[2] = param_3;
      param_1[1] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010854
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010854

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010854
#define DAT_40010854 (*(uint8_t *)(0x40010854U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010854
#define _DAT_40010854 (*(code * *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008a04(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar3 = 0;
    iVar4 = param_1[1];
  }
  else {
    iVar4 = *(int *)(param_2 + 0x50);
    uVar3 = *(uint *)(param_2 + 0x54);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_2 + 0x18);
    }
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_2 + 0x1c);
    }
    if (iVar4 == 0) {
      iVar4 = param_1[1];
    }
  }
  if (uVar3 == 0) {
    uVar3 = param_1[2];
  }
  if (uVar3 == 0) {
    return 0;
  }
  if (iVar4 != 0) {
    param_2 = *param_1;
  }
  if (iVar4 == 0 || param_2 == 0) {
    return 0;
  }
  lVar1 = (ulonglong)uVar3 * (ulonglong)(uint)(iVar4 << 2);
  iVar5 = (int)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    return 0;
  }
  iVar2 = param_1[0xb];
  if (param_1[10] == iVar5) {
    if (iVar2 != 0) goto LAB_10008aac;
    iVar2 = 0;
  }
  if (_DAT_40010800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_40010804 == 0) {
    return 0;
  }
  if (_DAT_40010808 < 0x58) {
    return 0;
  }
  if (_DAT_40010854 == (code *)0x0) {
    return 0;
  }
  iVar2 = (*_DAT_40010854)(iVar2,iVar5);
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0xb] = iVar2;
  param_1[10] = iVar5;
  param_1[9] = param_1[9] | 1;
LAB_10008aac:
  param_1[3] = iVar4 << 2;
  param_1[2] = uVar3;
  param_1[1] = iVar4;
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010854
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010854

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
#define auStack_290 (*(undefined1 (*)[24])(frame + 16))
#define local_278 (*(uint *)(frame + 40))
#define iStack_270 (*(int *)(frame + 48))
#define local_274 (*(uint *)(frame + 44))
#define iStack_26c (*(int *)(frame + 52))
#define local_250 (*(uint *)(frame + 80))
#define local_24c (*(uint *)(frame + 84))
#define local_248 (*(int *)(frame + 88))
#define local_244 (*(uint *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b44
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008b44(int *param_1,void *param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 == (int *)0x0 || param_4 == 0) {
    return 0;
  }
  if (param_1[0xf] == 0) {
    recovered_10001f48(auStack_290,0,0x278);
    if (_DAT_40010800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_40010804 == 0) {
      return 0;
    }
    if (_DAT_40010808 < 0xb8) {
      return 0;
    }
    if (_DAT_400108b4 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_400108b4)(*param_1,auStack_290);
    if (iVar2 == 0) {
      return 0;
    }
    recovered_100017b8(param_1 + 0x10,auStack_290,0x278);
    param_1[0xf] = 1;
    param_1[1] = local_278;
    param_1[2] = local_274;
    param_1[3] = iStack_270;
    param_1[4] = iStack_26c;
    if (local_250 == 0xffffffff) {
      uVar3 = 0xf;
    }
    else {
      if (0xfe < local_250) {
        local_250 = 0xff;
      }
      uVar3 = (local_250 * 100 + 0x7f) * 0x8081 >> 0x17;
    }
    uVar4 = 0;
    param_1[5] = uVar3;
    uVar3 = 0;
    if (local_24c != 0xffffffff) {
      if (0xfe < local_24c) {
        local_24c = 0xff;
      }
      uVar3 = (local_24c * 100 + 0x7f) * 0x8081 >> 0x17;
    }
    if (local_278 < local_274) {
      local_274 = local_278;
    }
    param_1[6] = uVar3;
    if (4 < local_248 + 1U) {
      local_248 = -1;
    }
    param_1[7] = local_248;
    uVar3 = local_274 * 100 + 0x32;
    if (99 < uVar3) {
      lVar1 = (ulonglong)local_244 * 100 + (ulonglong)(uVar3 / 200);
      uVar5 = recovered_10001374((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),uVar3 / 100,0);
      uVar4 = 100;
      if ((uint)uVar5 < 100) {
        uVar4 = (uint)uVar5;
      }
    }
    param_1[8] = uVar4;
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_100017b8(param_2,auStack_290,0x278);
  }
  else {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_100017b8(param_2,param_1 + 0x10,0x278);
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b4
#undef auStack_290
#undef local_278
#undef iStack_270
#undef local_274
#undef iStack_26c
#undef local_250
#undef local_24c
#undef local_248
#undef local_244

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d78
 */

byte recovered_10008d78(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0) {
    return 1;
  }
  bVar1 = *(byte *)(param_1 + 0x28) & 0x11;
  if ((*(byte *)(param_1 + 0x28) & 0x11) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d94
 */

void recovered_10008d94(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  recovered_10001f48(param_1,0,0x18);
  return;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008da8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008da8(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  recovered_10001f48(param_1,0,0x18);
  while ((((_DAT_40010800 == 0x50414d57 && (_DAT_40010804 != 0)) && (0x2f < _DAT_40010808)) &&
         ((_DAT_4001082c != (code *)0x0 && (uVar1 = (*_DAT_4001082c)(), uVar1 != 0))))) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((uVar1 & 0xff) - 0x20 < 0x5f) {
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
  return *(undefined4 *)(param_1 + 0x14);
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c

#define local_25c (*(uint *)(frame + 68))
#define auStack_284 (*(undefined1 (*)[40])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009130
 */

bool recovered_10009130(int *param_1,undefined4 in_r2,int in_r3)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;

  iVar1 = recovered_10008b44(param_1,auStack_284,in_r2,in_r3);
  bVar2 = (byte)(local_25c & 0x11);
  if ((local_25c & 0x11) != 0) {
    bVar2 = 1;
  }
  return (bool)(iVar1 == 0 | bVar2);
}

#undef local_25c
#undef auStack_284

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_400108a8
#define DAT_400108a8 (*(uint8_t *)(0x400108a8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_400108a8
#define _DAT_400108a8 (*(code * *)(0x400108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009164
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009164(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  bool bVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xab < _DAT_40010808)) &&
       (_DAT_400108a8 != (code *)0x0)) {
      uVar2 = (*_DAT_400108a8)(*param_1);
    }
  }
  uVar1 = (uint)*(byte *)(param_1 + 9);
  bVar3 = (*(byte *)(param_1 + 9) & 1) != 0;
  if (bVar3) {
    uVar1 = param_1[0xb];
  }
  if (((bVar3 && uVar1 != 0) && (_DAT_40010800 == 0x50414d57)) &&
     ((_DAT_40010804 != 0 && ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))))) {
    (*_DAT_40010850)(uVar1);
  }
  recovered_10001f48(param_1,0,0x340);
  return uVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_400108a8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_400108a8

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009274
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009274(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = 100;
    if ((uint)param_1[6] < 100) {
      uVar2 = param_1[6];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
       (_DAT_40010960 != (code *)0x0)) {
      iVar1 = (*_DAT_40010960)(param_4,(param_2 * 0xff + 0x32) * 0x147b >> 0x13,
                               (uVar2 * 0xff + 0x32) * 0x147b >> 0x13);
      if (iVar1 != 0) {
        param_1[6] = uVar2;
        param_1[5] = param_2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010960
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010960

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009350(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = 100;
    if ((uint)param_1[5] < 100) {
      uVar2 = param_1[5];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
       (_DAT_40010960 != (code *)0x0)) {
      iVar1 = (*_DAT_40010960)(param_4,(uVar2 * 0xff + 0x32) * 0x147b >> 0x13,
                               (param_2 * 0xff + 0x32) * 0x147b >> 0x13);
      if (iVar1 != 0) {
        param_1[6] = param_2;
        param_1[5] = uVar2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010960
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010960

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000942c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000942c(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != (int *)0x0) {
    param_2 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_2 != 0) {
    if (_DAT_40010800 != 0x50414d57) {
      return false;
    }
    if (((_DAT_40010804 != 0) && (0x167 < _DAT_40010808)) && (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_2,0,0);
      if (iVar1 != 0) {
        param_1[8] = 0;
        param_1[7] = 0;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100094c4(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != (int *)0x0) {
    param_2 = *param_1;
  }
  if ((((param_1 != (int *)0x0 && param_2 != 0) && (_DAT_40010800 == 0x50414d57)) &&
      (_DAT_40010804 != 0)) && ((0x167 < _DAT_40010808 && (_DAT_40010964 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010964)(param_2,1,0);
    if (iVar1 != 0) {
      param_1[7] = 1;
      param_1[8] = 0;
    }
    return iVar1 != 0;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009560(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar2 = param_1[1];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_4,2,(uVar2 * param_2 + 0x32) / 100);
      if (iVar1 != 0) {
        param_1[8] = param_2;
        param_1[7] = 2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009638
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009638(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar2 = param_1[1];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_4,3,(uVar2 * param_2 + 0x32) / 100);
      if (iVar1 != 0) {
        param_1[8] = param_2;
        param_1[7] = 3;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010900
#define DAT_40010900 (*(uint8_t *)(0x40010900U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010900
#define _DAT_40010900 (*(code * *)(0x40010900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009710(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 != (int *)0x0) {
    if (param_2 != 0) {
      param_1 = (int *)*param_1;
    }
    if ((((param_2 != 0 && param_1 != (int *)0x0) && (_DAT_40010800 == 0x50414d57)) &&
        (_DAT_40010804 != 0)) && ((0x103 < _DAT_40010808 && (_DAT_40010900 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*_DAT_40010900)();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010900
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010900

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000977c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000977c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) &&
     (_DAT_400108b0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100097e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001097c
#define DAT_4001097c (*(uint8_t *)(0x4001097cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001097c
#define _DAT_4001097c (*(code * *)(0x4001097cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100097e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17f < _DAT_40010808)) &&
     (_DAT_4001097c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10009834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_4001097c)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001097c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001097c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108ac
#define DAT_400108ac (*(uint8_t *)(0x400108acU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108ac
#define _DAT_400108ac (*(code * *)(0x400108acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009838
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009838(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xaf < _DAT_40010808)) &&
     (_DAT_400108ac != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10009888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108ac)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108ac
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108ac

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108f0
#define DAT_400108f0 (*(uint8_t *)(0x400108f0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108f0
#define _DAT_400108f0 (*(code * *)(0x400108f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000988c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000988c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xf3 < _DAT_40010808)) &&
     (_DAT_400108f0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100098dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108f0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108f0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108f0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108fc
#define DAT_400108fc (*(uint8_t *)(0x400108fcU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108fc
#define _DAT_400108fc (*(code * *)(0x400108fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100098e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xff < _DAT_40010808)) &&
     (_DAT_400108fc != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10009944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108fc)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108fc
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108fc

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009948
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009948(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) &&
     (_DAT_400108b0 != (code *)0x0)) {
    uVar1 = (*_DAT_400108b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100099bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) &&
     (_DAT_400108b0 != (code *)0x0)) {
    uVar1 = (*_DAT_400108b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009a2c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;

  while( true ) {
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x30)) ||
       ((_DAT_4001082c == (code *)0x0 || (uVar1 = (*_DAT_4001082c)(), uVar1 == 0)))) {
      return 0;
    }
    uVar2 = uVar1 & 0xff00;
    bVar3 = uVar2 == 0x100;
    if (!bVar3) {
      uVar2 = uVar1 & 0xdf;
    }
    if (bVar3 || uVar2 == 0x51) break;
    if ((uVar1 & 0xff) == 0x1b) {
      return 1;
    }
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c

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
 * Address: 0x10009ab8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009ab8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  do {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
       (_DAT_4001089c != (code *)0x0)) {
      (*_DAT_4001089c)();
    }
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
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
 * Address: 0x10009b30
 */

void recovered_10009b30(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[1] = param_2;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b44
 */

void recovered_10009b44(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b5c
 */

void recovered_10009b5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[3] = param_2;
  param_1[2] = param_3;
  param_1[1] = param_2;
  *param_1 = param_3;
  return;
}


#undef DAT_10009ba0
#define DAT_10009ba0 (*(uint64_t *)(0x10009ba0U))
#undef DAT_10009ba8
#define DAT_10009ba8 (*(uint64_t *)(0x10009ba8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b70
 */

void recovered_10009b70(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001f48(param_1,0,0x48);
  uVar1 = (0x100f6f6f6U);
  *(undefined8 *)((int)param_1 + 0x18) = (0x20202000000001U);
  *(undefined8 *)((int)param_1 + 0x20) = uVar1;
  return;
}

#undef DAT_10009ba0
#undef DAT_10009ba8

#undef DAT_10009bf0
#define DAT_10009bf0 (*(uint64_t *)(0x10009bf0U))
#undef DAT_10009bf8
#define DAT_10009bf8 (*(uint64_t *)(0x10009bf8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bb0
 */

void recovered_10009bb0(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x48);
  param_1[2] = param_2;
  uVar2 = (0x100f6f6f6U);
  uVar1 = (0x20202000000001U);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}

#undef DAT_10009bf0
#undef DAT_10009bf8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c00
 */

void recovered_10009c00(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001f48(param_1,0,0x48);
  param_1[9] = 1;
  param_1[6] = 1;
  param_1[7] = 0x202020;
  param_1[8] = param_2;
  *param_1 = 2;
  param_1[1] = param_1[1] | 2;
  return;
}


#undef DAT_10009c80
#define DAT_10009c80 (*(uint64_t *)(0x10009c80U))
#undef DAT_10009c88
#define DAT_10009c88 (*(uint64_t *)(0x10009c88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c50
 */

void recovered_10009c50(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x48);
  uVar2 = (0x100f6f6f6U);
  uVar1 = (0x20202000000001U);
  *param_1 = 4;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}

#undef DAT_10009c80
#undef DAT_10009c88

#undef DAT_10009cf0
#define DAT_10009cf0 (*(uint64_t *)(0x10009cf0U))
#undef DAT_10009cf8
#define DAT_10009cf8 (*(uint64_t *)(0x10009cf8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c90
 */

void recovered_10009c90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x48);
  uVar2 = (0x100f6f6f6U);
  uVar1 = (0x20202000000001U);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x11] = param_4;
  param_1[2] = param_2;
  param_1[0x10] = param_3;
  return;
}

#undef DAT_10009cf0
#undef DAT_10009cf8

#undef DAT_10009d60
#define DAT_10009d60 (*(uint64_t *)(0x10009d60U))
#undef DAT_10009d68
#define DAT_10009d68 (*(uint64_t *)(0x10009d68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d00
 */

void recovered_10009d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x48);
  param_1[5] = param_4;
  uVar2 = (0x100f6f6f6U);
  uVar1 = (0x20202000000001U);
  *param_1 = 5;
  param_1[4] = param_3;
  param_1[3] = param_2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}

#undef DAT_10009d60
#undef DAT_10009d68

#undef DAT_10009dd0
#define DAT_10009dd0 (*(uint64_t *)(0x10009dd0U))
#undef DAT_10009dd8
#define DAT_10009dd8 (*(uint64_t *)(0x10009dd8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d70
 */

void recovered_10009d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x48);
  param_1[5] = param_4;
  uVar2 = (0x100f6f6f6U);
  uVar1 = (0x20202000000001U);
  *param_1 = 6;
  param_1[4] = param_3;
  param_1[3] = param_2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}

#undef DAT_10009dd0
#undef DAT_10009dd8

#undef DAT_10009e30
#define DAT_10009e30 (*(uint64_t *)(0x10009e30U))
#undef DAT_10009e38
#define DAT_10009e38 (*(uint64_t *)(0x10009e38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009de0
 */

void recovered_10009de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  recovered_10001f48(param_1,0,0x48);
  param_1[4] = param_3;
  uVar2 = (0x100f6f6f6U);
  uVar1 = (0x20202000000001U);
  *param_1 = 7;
  param_1[3] = param_2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}

#undef DAT_10009e30
#undef DAT_10009e38

#define local_8 (*(undefined4 *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
#define local_c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e40
 */

void recovered_10009e40(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  recovered_100017b8(param_1,&local_c,0x48);
  return;
}

#undef local_8
#undef local_4
#undef local_c

#define local_c (*(undefined4 *)(frame + 20))
#define local_8 (*(uint *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e90
 */

void recovered_10009e90(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  local_8 = param_3 | 1;
  local_c = param_2;
  local_4 = param_4;
  recovered_100017b8(param_1,&local_c,0x48);
  return;
}

#undef local_c
#undef local_8
#undef local_4

#define local_c (*(undefined4 *)(frame + 20))
#define local_8 (*(uint *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ecc
 */

void recovered_10009ecc(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  local_8 = param_3 | 2;
  local_c = param_2;
  local_4 = param_4;
  recovered_100017b8(param_1,&local_c,0x48);
  return;
}

#undef local_c
#undef local_8
#undef local_4

#define local_8 (*(uint *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
#define in_stack_00000020 (*(int *)(frame + 64))
#define local_c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f08
 */

void recovered_10009f08(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                       int in_stack_0000003c,int in_stack_00000040)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  local_8 = param_3;
  if (-1 < in_stack_0000003c) {
    local_8 = param_3 | 4;
  }
  if (-1 < in_stack_00000040) {
    in_stack_00000020 = in_stack_00000040;
    local_8 = local_8 | 8;
  }
  local_c = param_2;
  local_4 = param_4;
  recovered_100017b8(param_1,&local_c,0x48);
  return;
}

#undef local_8
#undef local_4
#undef in_stack_00000020
#undef local_c

#define local_c (*(undefined4 *)(frame + 20))
#define local_8 (*(undefined4 *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
#define uStack00000018 (*(uint *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f68
 */

void recovered_10009f68(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       uint in_stack_0000003c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  if (in_stack_0000003c < 2) {
    in_stack_0000003c = 1;
  }
  uStack00000018 = in_stack_0000003c;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  recovered_100017b8(param_1,&local_c,0x48);
  return;
}

#undef local_c
#undef local_8
#undef local_4
#undef uStack00000018

#define local_c (*(undefined4 *)(frame + 20))
#define local_8 (*(undefined4 *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
#define uStack0000000c (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fa8
 */

void recovered_10009fa8(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       uint in_stack_0000003c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  if (3 < in_stack_0000003c) {
    in_stack_0000003c = 1;
  }
  uStack0000000c = in_stack_0000003c;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  recovered_100017b8(param_1,&local_c,0x48);
  return;
}

#undef local_c
#undef local_8
#undef local_4
#undef uStack0000000c

#undef DAT_1000a068
#define DAT_1000a068 (*(uint *)(0x1000a068U))
#undef DAT_1000be5c
#define DAT_1000be5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010978
#define DAT_40010978 (*(uint8_t *)(0x40010978U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
#undef EXT_00000018
#define EXT_00000018 (*(uint8_t *)(0x18U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010978
#define _DAT_40010978 (*(code * *)(0x40010978U))
#undef switchdataD_1000a068
#define switchdataD_1000a068 (*(uint *)(0x1000a068U))
#define local_40 (*(uint * *)(frame + 16))
#define local_38 (*(uint * *)(frame + 24))
#define local_34 (*(uint * *)(frame + 28))
#define local_2c (*(uint *)(frame + 36))
#define local_28 (*(uint * *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fe8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009fe8(undefined4 *param_1,uint *param_2,int param_3,int param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined *puVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  undefined8 uVar15;

  if (param_2 == (uint *)0x0) {
    puVar4 = (undefined1 *)0x0;
    puVar10 = (undefined1 *)0x0;
    goto LAB_1000a420;
  }
  puVar6 = (uint *)0x0;
  if (*param_2 - 1 < 7) {
    puVar13 = (uint *)0x0;
    uVar2 = param_4 - ((param_2[0xc] & ~((int)param_2[0xc] >> 0x1f)) +
                      (param_2[0xe] & ~((int)param_2[0xe] >> 0x1f)));
    puVar11 = (uint *)(uVar2 & ~((int)uVar2 >> 0x1f));
    uVar2 = param_3 - ((param_2[0xd] & ~((int)param_2[0xd] >> 0x1f)) +
                      (param_2[0xf] & ~((int)param_2[0xf] >> 0x1f)));
    puVar5 = (uint *)(uVar2 & ~((int)uVar2 >> 0x1f));
    puVar3 = &DAT_1000a068;
    switch((uintptr_t)(*param_2)) {
    case 1:
      puVar7 = (undefined *)param_2[2];
      uVar2 = param_2[9];
      recovered_10001f48(&local_38,0,0x18);
      puVar3 = (uint *)&DAT_40010808;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      puVar1 = &DAT_1000be5c;
      if (puVar7 != (undefined *)0x0) {
        puVar1 = puVar7;
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x17b < _DAT_40010808 && (_DAT_40010978 != (code *)0x0)))) {
        uVar15 = (*_DAT_40010978)(puVar1,0xffffffff,uVar2,0,&local_38);
        puVar3 = (uint *)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 != 0) {
          puVar6 = (uint *)(local_2c & ~((int)local_2c >> 0x1f));
          puVar13 = (uint *)((uint)local_28 & ~((int)local_28 >> 0x1f));
          puVar3 = local_28;
        }
      }
      break;
    case 2:
      puVar6 = (uint *)&DataAbort;
      puVar13 = (uint *)&DataAbort;
      break;
    case 3:
      puVar7 = (undefined *)param_2[2];
      uVar2 = param_2[9];
      recovered_10001f48(&local_38,0,0x18);
      puVar3 = (uint *)&DAT_40010808;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      puVar1 = &DAT_1000be5c;
      if (puVar7 != (undefined *)0x0) {
        puVar1 = puVar7;
      }
      puVar11 = (uint *)&PrefetchAbort;
      puVar6 = (uint *)&NotUsed;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17b < _DAT_40010808)) &&
         (_DAT_40010978 != (code *)0x0)) {
        uVar15 = (*_DAT_40010978)(puVar1,0xffffffff,uVar2,0,&local_38);
        puVar3 = (uint *)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 != 0) {
          puVar3 = (uint *)((uint)local_28 & ~((int)local_28 >> 0x1f));
          puVar6 = (uint *)((local_2c & ~((int)local_2c >> 0x1f)) + 0x14);
          puVar11 = puVar3 + 3;
        }
      }
      puVar13 = (uint *)&IRQ;
      if (&IRQ < puVar11) {
        puVar13 = puVar11;
      }
      break;
    case 5:
      uVar2 = param_2[4];
      if (uVar2 < 2) {
        puVar3 = (uint *)0x0;
        puVar8 = (uint *)0x0;
        if (uVar2 != 0) goto LAB_1000a284;
      }
      else {
        puVar3 = (uint *)(param_2[5] * (uVar2 - 1));
LAB_1000a284:
        uVar12 = 0;
        local_40 = (uint *)0x0;
        puVar8 = puVar3;
        puVar3 = puVar13;
        do {
          puVar13 = (uint *)param_2[3];
          if (puVar13 != (uint *)0x0) {
            puVar13 = (uint *)((int)puVar13 + (int)puVar6);
          }
          if ((puVar13 == (uint *)0x0) || (*puVar13 != 4)) {
            recovered_10009fe8(&local_38,puVar13,(int)puVar5,(int)puVar11);
            puVar8 = (uint *)((int)local_38 + (int)puVar8);
            uVar2 = param_2[4];
            if ((int)puVar3 <= (int)local_34) {
              puVar3 = local_34;
            }
          }
          else {
            local_40 = (uint *)((int)local_40 + 1);
          }
          uVar12 = uVar12 + 1;
          puVar6 = puVar6 + 0x12;
        } while (uVar12 < uVar2);
        puVar6 = puVar5;
        if ((int)puVar5 <= (int)puVar8) {
          puVar6 = puVar8;
        }
        puVar13 = puVar3;
        if (local_40 != (uint *)0x0) break;
      }
      puVar6 = puVar8;
      puVar13 = puVar3;
      break;
    case 6:
      uVar2 = param_2[4];
      if (uVar2 < 2) {
        puVar8 = (uint *)0x0;
        if (uVar2 == 0) {
          puVar13 = (uint *)0x0;
          break;
        }
      }
      else {
        puVar8 = (uint *)(param_2[5] * (uVar2 - 1));
      }
      uVar12 = 0;
      local_40 = (uint *)0x0;
      do {
        puVar3 = (uint *)param_2[3];
        if (puVar3 != (uint *)0x0) {
          puVar3 = (uint *)((int)puVar3 + (int)puVar13);
        }
        if ((puVar3 == (uint *)0x0) || (*puVar3 != 4)) {
          recovered_10009fe8(&local_38,puVar3,(int)puVar5,(int)puVar11);
          puVar8 = (uint *)((int)local_34 + (int)puVar8);
          uVar2 = param_2[4];
          puVar3 = local_38;
          if ((int)puVar6 <= (int)local_38) {
            puVar6 = local_38;
          }
        }
        else {
          local_40 = (uint *)((int)local_40 + 1);
          puVar3 = local_40;
        }
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 0x12;
      } while (uVar12 < uVar2);
      if ((int)puVar11 <= (int)puVar8) {
        puVar11 = puVar8;
      }
      puVar13 = puVar11;
      if (local_40 == (uint *)0x0) {
        puVar13 = puVar8;
      }
      break;
    case 7:
      if (param_2[4] != 0) {
        iVar9 = 0;
        uVar2 = 0;
        do {
          puVar3 = (uint *)param_2[3];
          if (puVar3 != (uint *)0x0) {
            puVar3 = (uint *)((int)puVar3 + iVar9);
          }
          recovered_10009fe8(&local_38,puVar3,(int)puVar5,(int)puVar11);
          iVar9 = iVar9 + 0x48;
          uVar2 = uVar2 + 1;
          if ((int)puVar13 <= (int)local_34) {
            puVar13 = local_34;
          }
          if ((int)puVar6 <= (int)local_38) {
            puVar6 = local_38;
          }
          puVar3 = local_34;
        } while (uVar2 < param_2[4]);
      }
    }
  }
  else {
    puVar3 = param_2;
    puVar13 = (uint *)0x0;
  }
  bVar14 = (param_2[1] & 4) != 0;
  if (bVar14) {
    puVar3 = (uint *)param_2[10];
  }
  if (bVar14) {
    puVar6 = (uint *)((uint)puVar3 & ~((int)puVar3 >> 0x1f));
  }
  if ((param_2[1] & 8) != 0) {
    puVar13 = (uint *)(param_2[0xb] & ~((int)param_2[0xb] >> 0x1f));
  }
  puVar10 = (undefined1 *)
            ((int)puVar13 +
            (param_2[0xe] & ~((int)param_2[0xe] >> 0x1f)) +
            (param_2[0xc] & ~((int)param_2[0xc] >> 0x1f)));
  puVar4 = (undefined1 *)
           ((int)puVar6 +
           (param_2[0xf] & ~((int)param_2[0xf] >> 0x1f)) +
           (param_2[0xd] & ~((int)param_2[0xd] >> 0x1f)));
LAB_1000a420:
  param_1[1] = puVar10;
  *param_1 = puVar4;
  return;
}

#undef DAT_1000a068
#undef DAT_1000be5c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010978
#undef EXT_0000000c
#undef EXT_00000010
#undef EXT_00000014
#undef EXT_00000018
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010978
#undef switchdataD_1000a068
#undef local_40
#undef local_38
#undef local_34
#undef local_2c
#undef local_28

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010900
#define DAT_40010900 (*(uint8_t *)(0x40010900U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010900
#define _DAT_40010900 (*(code * *)(0x40010900U))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define auStack_30 (*(undefined1 (*)[4])(frame + 16))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a474
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000a474(int *param_1,uint *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  int iVar3;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  iVar3 = 0;
  recovered_10001f48(param_2,0,0x2c);
  pvVar1 = recovered_10001f48(auStack_30,0,0x1c);
  if (param_1 != (int *)0x0) {
    pvVar1 = (void *)*param_1;
  }
  if ((((param_1 != (int *)0x0 && pvVar1 != (void *)0x0) && (_DAT_40010800 == 0x50414d57)) &&
      (_DAT_40010804 != 0)) &&
     (((0x103 < _DAT_40010808 && (_DAT_40010900 != (code *)0x0)) &&
      (iVar2 = (*_DAT_40010900)(pvVar1,auStack_30), iVar2 != 0)))) {
    param_2[3] = uStack_2c;
    iVar3 = 1;
    param_2[1] = local_1c;
    param_2[2] = local_18;
    param_2[4] = uStack_28;
    *param_2 = *param_2 | 1;
  }
  *param_2 = *param_2 | 2;
  iVar2 = recovered_10008da8((undefined1 *)(param_2 + 5));
  return iVar2 + iVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010900
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010900
#undef local_1c
#undef local_18
#undef auStack_30
#undef uStack_28
#undef uStack_2c

#define local_2b0 (*(int *)(frame + 16))
#define local_2a4 (*(int *)(frame + 28))
#define local_2a0 (*(undefined4 *)(frame + 32))
#define uStack_2a8 (*(uint *)(frame + 24))
#define local_274 (*(byte *)(frame + 76))
#define uStack_2ac (*(uint *)(frame + 20))
#define auStack_29c (*(undefined1 (*)[40])(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a570
 */

undefined4 recovered_1000a570(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r2 = 0;
  int extraout_r3 = 0;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int *unaff_r11;
  uint uVar13;
  undefined1 *puVar14;
  longlong lVar15;

  uVar9 = 0;
  if (param_1 != (int *)0x0) {
    piVar5 = param_1;
    if (param_2 != (int *)0x0) {
      piVar5 = (int *)*param_1;
      unaff_r11 = param_1;
    }
    if (param_2 != (int *)0x0 && piVar5 != (int *)0x0) {
      recovered_10001f48(auStack_29c,0,0x278);
      iVar6 = recovered_10008b44(unaff_r11,auStack_29c,extraout_r2,extraout_r3);
      if ((iVar6 != 0) && ((local_274 & 0x11) == 0)) {
        iVar7 = recovered_10008a04(unaff_r11,(int)auStack_29c);
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = unaff_r11[0xb];
        }
        if (iVar7 != 0 && iVar6 != 0) {
          recovered_10001f48(&local_2b0,0,0x14);
          local_2b0 = unaff_r11[0xb];
          uStack_2ac = unaff_r11[1];
          uStack_2a8 = unaff_r11[2];
          local_2a4 = unaff_r11[3];
          uVar10 = uStack_2ac;
          uVar11 = uStack_2a8;
          if (local_2b0 != 0) {
            uVar13 = uStack_2ac;
            if (0 < (int)uStack_2ac) {
              uVar13 = uStack_2a8;
            }
            if (0 < (int)uVar13) {
              iVar6 = unaff_r11[4];
              uVar11 = uStack_2ac & 0x7ffffff0;
              uVar10 = 0;
              do {
                puVar8 = (undefined1 *)(local_2a4 * uVar10 + local_2b0);
                uVar13 = 0;
                puVar12 = puVar8;
                if (uStack_2ac < 0x10) {
LAB_1000a6d8:
                  iVar7 = uStack_2ac - uVar13;
                  do {
                    puVar12[3] = 0xff;
                    iVar7 = iVar7 + -1;
                    puVar12[2] = (char)iVar6;
                    puVar12[1] = (char)((uint)iVar6 >> 8);
                    *puVar12 = (char)((uint)iVar6 >> 0x10);
                    puVar12 = puVar12 + 4;
                  } while (iVar7 != 0);
                }
                else {
                  puVar12 = puVar8 + uVar11 * 4;
                  uVar13 = uVar11;
                  do {
                    uint8_t pf_rgba_lanes_0[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_0[pf_lane]=(uint32_t)iVar6>>16;pf_rgba_lanes_0[16+pf_lane]=(uint32_t)iVar6>>8;pf_rgba_lanes_0[32+pf_lane]=(uint32_t)iVar6;pf_rgba_lanes_0[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_0+0);
                    puVar2 = (pf_rgba_lanes_0+16);
                    puVar3 = (pf_rgba_lanes_0+32);
                    puVar4 = (pf_rgba_lanes_0+48);
                    lVar15 = 8;
                    puVar14 = puVar8;
                    while( true ) {
                      *puVar14 = *puVar1;
                      puVar14[1] = *puVar2;
                      puVar14[2] = *puVar3;
                      puVar14[3] = *puVar4;
                      puVar14 = puVar14 + 4;
                      lVar15 = lVar15 + -1;
                      if (lVar15 == 0) break;
                      puVar1 = puVar1 + 1;
                      puVar2 = puVar2 + 1;
                      puVar3 = puVar3 + 1;
                      puVar4 = puVar4 + 1;
                    }
                    puVar14 = puVar8 + 0x20;
                    uVar13 = uVar13 - 0x10;
                    puVar1 = (pf_rgba_lanes_0+8);
                    puVar2 = (pf_rgba_lanes_0+24);
                    puVar3 = (pf_rgba_lanes_0+40);
                    puVar4 = (pf_rgba_lanes_0+56);
                    lVar15 = 8;
                    while( true ) {
                      *puVar14 = *puVar1;
                      puVar14[1] = *puVar2;
                      puVar14[2] = *puVar3;
                      puVar14[3] = *puVar4;
                      puVar14 = puVar14 + 4;
                      lVar15 = lVar15 + -1;
                      if (lVar15 == 0) break;
                      puVar1 = puVar1 + 1;
                      puVar2 = puVar2 + 1;
                      puVar3 = puVar3 + 1;
                      puVar4 = puVar4 + 1;
                    }
                    puVar8 = puVar8 + 0x40;
                  } while (uVar13 != 0);
                  uVar13 = uVar11;
                  if (uStack_2ac != uVar11) goto LAB_1000a6d8;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 != uStack_2a8);
              uVar10 = unaff_r11[1];
              uVar11 = unaff_r11[2];
            }
          }
          local_2a0 = param_3;
          recovered_1000a754(&local_2b0,param_2,0,0,uVar10,uVar11);
          uVar9 = recovered_10008634(unaff_r11,(byte *)unaff_r11[0xc],(byte *)unaff_r11[0xb],
                                     unaff_r11[1],unaff_r11[2],unaff_r11[3],unaff_r11[4]);
        }
      }
    }
  }
  return uVar9;
}

#undef local_2b0
#undef local_2a4
#undef local_2a0
#undef uStack_2a8
#undef local_274
#undef uStack_2ac
#undef auStack_29c

#undef DAT_1000be5c
#define DAT_1000be5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010978
#define DAT_40010978 (*(uint8_t *)(0x40010978U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010978
#define _DAT_40010978 (*(code * *)(0x40010978U))
#define local_4c (*(uint *)(frame + 20))
#define local_48 (*(uint *)(frame + 24))
#define local_44 (*(uint *)(frame + 28))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_2c (*(uint *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a754
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a754(int *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar7;
  undefined1 uVar6;
  undefined1 uVar5;
  uint uVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  byte *pbVar13;
  code *pcVar14;
  code *pcVar15;
  undefined *puVar16;
  byte bVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  uint uVar21;
  code *pcVar22;
  int *unaff_r5 = param_2;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  code *pcVar27;
  int unaff_r10;
  undefined1 *puVar28;
  uint uVar29;
  code *pcVar30;
  uint uVar31;
  code *pcVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined1 *puVar36;
  longlong lVar37;

  if (param_1 != (int *)0x0) {
    unaff_r5 = param_2;
  }
  if (param_1 == (int *)0x0 || param_2 == (int *)0x0) {
    return;
  }
  iVar23 = param_5;
  if (0 < param_5) {
    iVar23 = param_6;
    unaff_r10 = param_6;
  }
  if (iVar23 < 1) {
    return;
  }
  iVar23 = *unaff_r5;
  if ((*(byte *)(unaff_r5 + 1) & 2) == 0) {
LAB_1000a7ac:
    iVar25 = iVar23;
  }
  else {
    iVar25 = 3;
    if (iVar23 != 3) {
      uVar12 = param_1[2];
      if ((int)(param_4 + unaff_r10) < param_1[2]) {
        uVar12 = param_4 + unaff_r10;
      }
      iVar18 = param_1[1];
      if ((int)(param_3 + param_5) < param_1[1]) {
        iVar18 = param_3 + param_5;
      }
      uVar8 = param_4 & ~((int)param_4 >> 0x1f);
      if (((int)uVar12 <= (int)uVar8) ||
         (uVar21 = param_3 & ~((int)param_3 >> 0x1f), iVar18 <= (int)uVar21)) goto LAB_1000a7ac;
      iVar25 = iVar23;
      if (*param_1 != 0) {
        iVar23 = unaff_r5[8];
        uVar26 = iVar18 - uVar21;
        uVar31 = uVar26 & 0xfffffff0;
        do {
          puVar19 = (undefined1 *)(param_1[3] * uVar8 + *param_1 + uVar21 * 4);
          if (uVar26 < 0x10) {
            uVar24 = uVar21;
LAB_1000a8d4:
            iVar25 = iVar18 - uVar24;
            do {
              puVar19[3] = 0xff;
              iVar25 = iVar25 + -1;
              puVar19[2] = (char)iVar23;
              puVar19[1] = (char)((uint)iVar23 >> 8);
              *puVar19 = (char)((uint)iVar23 >> 0x10);
              puVar19 = puVar19 + 4;
            } while (iVar25 != 0);
          }
          else {
            puVar28 = (undefined1 *)(param_1[3] * uVar8 + *param_1 + uVar21 * 4);
            puVar19 = puVar19 + uVar31 * 4;
            uVar24 = uVar31;
            do {
              uint8_t pf_rgba_lanes_1[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_1[pf_lane]=(uint32_t)iVar23>>16;pf_rgba_lanes_1[16+pf_lane]=(uint32_t)iVar23>>8;pf_rgba_lanes_1[32+pf_lane]=(uint32_t)iVar23;pf_rgba_lanes_1[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_1+0);
              puVar2 = (pf_rgba_lanes_1+16);
              puVar3 = (pf_rgba_lanes_1+32);
              puVar4 = (pf_rgba_lanes_1+48);
              lVar37 = 8;
              puVar36 = puVar28;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar36 = puVar28 + 0x20;
              uVar24 = uVar24 - 0x10;
              puVar1 = (pf_rgba_lanes_1+8);
              puVar2 = (pf_rgba_lanes_1+24);
              puVar3 = (pf_rgba_lanes_1+40);
              puVar4 = (pf_rgba_lanes_1+56);
              lVar37 = 8;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar28 = puVar28 + 0x40;
            } while (uVar24 != 0);
            uVar24 = uVar21 + uVar31;
            if (uVar26 != uVar31) goto LAB_1000a8d4;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar12);
        iVar25 = *unaff_r5;
        unaff_r10 = param_6;
      }
    }
  }
  if (6 < iVar25 - 1U) {
    return;
  }
  uVar12 = unaff_r5[0xc] & ~(unaff_r5[0xc] >> 0x1f);
  local_4c = uVar12 + param_4;
  uVar8 = unaff_r5[0xd] & ~(unaff_r5[0xd] >> 0x1f);
  uVar21 = uVar8 + param_3;
  uVar12 = unaff_r10 - (uVar12 + (unaff_r5[0xe] & ~(unaff_r5[0xe] >> 0x1f)));
  local_48 = uVar12 & ~((int)uVar12 >> 0x1f);
  uVar8 = param_5 - (uVar8 + (unaff_r5[0xf] & ~(unaff_r5[0xf] >> 0x1f)));
  local_44 = uVar8 & ~((int)uVar8 >> 0x1f);
  switch((uintptr_t)(iVar25)) {
  case 1:
    puVar16 = (undefined *)unaff_r5[2];
    uVar8 = unaff_r5[9];
    uVar12 = 0;
    recovered_10001f48(&local_38,0,0x18);
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    if (puVar16 == (undefined *)0x0) {
      puVar16 = &DAT_1000be5c;
    }
    if (_DAT_40010800 == 0x50414d57) {
      if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0xc)) || (_DAT_40010808 < 0x17c)) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        if ((_DAT_40010978 != (code *)0x0) &&
           (iVar23 = (*_DAT_40010978)(puVar16,0xffffffff,uVar8,0,&local_38), iVar23 != 0)) {
          uVar12 = local_2c & ~((int)local_2c >> 0x1f);
          uVar26 = local_28 & ~((int)local_28 >> 0x1f);
        }
      }
    }
    else {
      uVar26 = 0;
    }
    iVar23 = unaff_r5[6];
    if (local_48 < uVar26) {
      uVar26 = local_48;
    }
    if (local_44 < uVar12) {
      uVar12 = local_44;
    }
    if (iVar23 == 1) {
      local_4c = local_4c + (int)(local_48 - uVar26) / 2;
      uVar21 = uVar21 + (int)(local_44 - uVar12) / 2;
      local_48 = uVar26;
      local_44 = uVar12;
    }
    else {
      if (iVar23 == 2) {
        local_4c = (local_48 + local_4c) - uVar26;
        uVar21 = (local_44 + uVar21) - uVar12;
      }
      else if (iVar23 == 3) goto LAB_1000af54;
      local_48 = uVar26;
      local_44 = uVar12;
    }
LAB_1000af54:
    puVar16 = (undefined *)unaff_r5[2];
    puVar20 = &DAT_1000be5c;
    if (puVar16 != (undefined *)0x0) {
      puVar20 = puVar16;
    }
    bVar33 = (*(byte *)(unaff_r5 + 1) & 1) != 0;
    if (bVar33) {
      puVar16 = (undefined *)unaff_r5[7];
    }
    uVar26 = unaff_r5[9];
    if (!bVar33) {
      puVar16 = (undefined *)0x202020;
    }
    if (uVar26 < 2) {
      uVar26 = 1;
    }
    goto LAB_1000b55c;
  case 2:
    uVar26 = (uint)*(byte *)(unaff_r5 + 1);
    bVar33 = (*(byte *)(unaff_r5 + 1) & 2) != 0;
    if (bVar33) {
      uVar26 = unaff_r5[8];
    }
    if (!bVar33) {
      uVar26 = 0xf4f4f4;
    }
    uVar24 = local_4c & ~((int)local_4c >> 0x1f);
    uVar31 = param_1[2];
    if ((int)(local_48 + local_4c) < param_1[2]) {
      uVar31 = local_48 + local_4c;
    }
    uVar29 = param_1[1];
    if ((int)(local_44 + uVar21) < param_1[1]) {
      uVar29 = local_44 + uVar21;
    }
    bVar34 = SBORROW4(uVar31,uVar24);
    iVar23 = uVar31 - uVar24;
    bVar33 = uVar31 == uVar24;
    if ((int)uVar24 < (int)uVar31) {
      local_48 = uVar21 & ~((int)uVar21 >> 0x1f);
      bVar34 = SBORROW4(uVar29,local_48);
      iVar23 = uVar29 - local_48;
      bVar33 = uVar29 == local_48;
    }
    if (!bVar33 && iVar23 < 0 == bVar34) {
      if (0 < (int)uVar12) {
        uVar12 = uVar8;
      }
      if ((0 < (int)uVar12) && (*param_1 != 0)) {
        uVar8 = uVar29 - local_48;
        uVar12 = uVar8 & 0xfffffff0;
        do {
          puVar19 = (undefined1 *)(param_1[3] * uVar24 + *param_1 + local_48 * 4);
          if (uVar8 < 0x10) {
            uVar21 = local_48;
LAB_1000ad60:
            iVar23 = uVar21 - uVar29;
            do {
              puVar19[3] = 0xff;
              bVar33 = iVar23 != -1;
              iVar23 = iVar23 + 1;
              puVar19[2] = (char)uVar26;
              puVar19[1] = (char)(uVar26 >> 8);
              *puVar19 = (char)(uVar26 >> 0x10);
              puVar19 = puVar19 + 4;
            } while (bVar33);
          }
          else {
            puVar28 = (undefined1 *)(param_1[3] * uVar24 + *param_1 + local_48 * 4);
            puVar19 = puVar19 + uVar12 * 4;
            uVar21 = uVar12;
            do {
              uint8_t pf_rgba_lanes_2[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_2[pf_lane]=(uint32_t)uVar26>>16;pf_rgba_lanes_2[16+pf_lane]=(uint32_t)uVar26>>8;pf_rgba_lanes_2[32+pf_lane]=(uint32_t)uVar26;pf_rgba_lanes_2[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_2+0);
              puVar2 = (pf_rgba_lanes_2+16);
              puVar3 = (pf_rgba_lanes_2+32);
              puVar4 = (pf_rgba_lanes_2+48);
              lVar37 = 8;
              puVar36 = puVar28;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar36 = puVar28 + 0x20;
              uVar21 = uVar21 - 0x10;
              puVar1 = (pf_rgba_lanes_2+8);
              puVar2 = (pf_rgba_lanes_2+24);
              puVar3 = (pf_rgba_lanes_2+40);
              puVar4 = (pf_rgba_lanes_2+56);
              lVar37 = 8;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar28 = puVar28 + 0x40;
            } while (uVar21 != 0);
            uVar21 = local_48 + uVar12;
            if (uVar8 != uVar12) goto LAB_1000ad60;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar31);
      }
    }
    break;
  case 3:
    uVar26 = 0;
    pbVar13 = (byte *)param_1[4];
    if (pbVar13 != (byte *)0x0) {
      param_3 = (uint)*pbVar13;
    }
    if (pbVar13 == (byte *)0x0 || (param_3 & 1) == 0) {
LAB_1000aaa0:
      bVar33 = false;
      bVar17 = 0;
    }
    else {
      uVar31 = *(uint *)(pbVar13 + 4);
      bVar34 = SBORROW4(uVar21,uVar31);
      iVar23 = uVar21 - uVar31;
      bVar33 = uVar21 == uVar31;
      if ((int)uVar21 <= (int)uVar31) {
        param_3 = *(uint *)(pbVar13 + 8);
        bVar34 = SBORROW4(local_4c,param_3);
        iVar23 = local_4c - param_3;
        bVar33 = local_4c == param_3;
      }
      if ((!bVar33 && iVar23 < 0 == bVar34) || ((int)(local_44 + uVar21) <= (int)uVar31))
      goto LAB_1000aaa0;
      iVar23 = local_48 + local_4c;
      bVar17 = 0;
      uVar31 = local_4c;
      if ((int)param_3 < iVar23) {
        uVar31 = (uint)pbVar13[0xc];
      }
      bVar33 = (int)param_3 < iVar23;
      if ((int)param_3 < iVar23) {
        uVar26 = uVar31 & 1;
        bVar17 = pbVar13[0x10] & 1;
      }
    }
    if ((*(byte *)(unaff_r5 + 1) & 2) == 0) {
      uVar31 = 0xf4f4f4;
    }
    else {
      uVar31 = unaff_r5[8];
    }
    if (uVar26 == 0) {
      if (bVar33) {
        uVar26 = ((uVar31 & 0xffffff) >> 0x10) * 0x68f66 + 0x1733560;
        uVar31 = ((uVar31 & 0xffff) >> 8) * 0x68f66 + 0x1733560 >> 0xb & 0xffffff00 |
                 (uVar31 & 0xff) * 0x68f66 + 0x1733560 >> 0x13;
        goto LAB_1000adf0;
      }
    }
    else {
      uVar26 = ((short)((ushort)(uVar31 >> 0x10) & 0xff) * 0x58 + 0x32) * 0x147b;
      uVar31 = (uint)(((short)((ushort)(uVar31 >> 8) & 0xff) * 0x58 + 0x32) * 0x147b) >> 0xb &
               0x1ff00 | (uint)(((short)((ushort)uVar31 & 0xff) * 0x58 + 0x32) * 0x147b) >> 0x13;
LAB_1000adf0:
      uVar31 = uVar31 | uVar26 >> 3 & 0x1ff0000;
    }
    pcVar32 = (code *)param_1[2];
    pcVar27 = (code *)(uVar21 & ~((int)uVar21 >> 0x1f));
    pcVar22 = (code *)param_1[1];
    pcVar14 = (code *)(local_48 + local_4c);
    iVar23 = *param_1;
    pcVar11 = pcVar32;
    if ((int)pcVar14 < (int)pcVar32) {
      pcVar11 = pcVar14;
    }
    pcVar30 = (code *)(local_4c & ~((int)local_4c >> 0x1f));
    pcVar15 = (code *)(local_44 + uVar21);
    pcVar10 = pcVar22;
    if ((int)pcVar15 < (int)pcVar22) {
      pcVar10 = pcVar15;
    }
    bVar35 = SBORROW4((int)pcVar11,(int)pcVar30);
    iVar25 = (int)pcVar11 - (int)pcVar30;
    bVar34 = pcVar11 == pcVar30;
    if ((int)pcVar30 < (int)pcVar11) {
      bVar35 = SBORROW4((int)pcVar10,(int)pcVar27);
      iVar25 = (int)pcVar10 - (int)pcVar27;
      bVar34 = pcVar10 == pcVar27;
    }
    if (bVar34 || iVar25 < 0 != bVar35) {
LAB_1000ae70:
      uVar26 = uVar12;
      if (0 < (int)uVar12) {
        uVar26 = uVar8;
      }
      if (0 < (int)uVar26) {
        uVar26 = 0x9a9a9a;
        if (bVar33) {
          uVar26 = 0x286dc4;
        }
        goto LAB_1000b0c8;
      }
    }
    else {
      uVar26 = uVar12;
      if (0 < (int)uVar12) {
        uVar26 = uVar8;
      }
      if (((int)uVar26 < 1) || (iVar23 == 0)) goto LAB_1000ae70;
      uVar24 = (int)pcVar10 - (int)pcVar27;
      uVar26 = uVar24 & 0xfffffff0;
      pcVar22 = pcVar30;
      do {
        puVar19 = (undefined1 *)(param_1[3] * (int)pcVar22 + *param_1 + (int)pcVar27 * 4);
        if (uVar24 < 0x10) {
          pcVar32 = pcVar27;
LAB_1000b068:
          iVar23 = (int)pcVar32 - (int)pcVar10;
          do {
            puVar19[3] = 0xff;
            bVar34 = iVar23 != -1;
            iVar23 = iVar23 + 1;
            puVar19[2] = (char)uVar31;
            puVar19[1] = (char)(uVar31 >> 8);
            *puVar19 = (char)(uVar31 >> 0x10);
            puVar19 = puVar19 + 4;
          } while (bVar34);
        }
        else {
          puVar28 = (undefined1 *)(param_1[3] * (int)pcVar22 + *param_1 + (int)pcVar27 * 4);
          puVar19 = puVar19 + uVar26 * 4;
          uVar29 = uVar26;
          do {
            uint8_t pf_rgba_lanes_3[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_3[pf_lane]=(uint32_t)uVar31>>16;pf_rgba_lanes_3[16+pf_lane]=(uint32_t)uVar31>>8;pf_rgba_lanes_3[32+pf_lane]=(uint32_t)uVar31;pf_rgba_lanes_3[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_3+0);
            puVar2 = (pf_rgba_lanes_3+16);
            puVar3 = (pf_rgba_lanes_3+32);
            puVar4 = (pf_rgba_lanes_3+48);
            lVar37 = 8;
            puVar36 = puVar28;
            while( true ) {
              *puVar36 = *puVar1;
              puVar36[1] = *puVar2;
              puVar36[2] = *puVar3;
              puVar36[3] = *puVar4;
              puVar36 = puVar36 + 4;
              lVar37 = lVar37 + -1;
              if (lVar37 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar36 = puVar28 + 0x20;
            uVar29 = uVar29 - 0x10;
            puVar1 = (pf_rgba_lanes_3+8);
            puVar2 = (pf_rgba_lanes_3+24);
            puVar3 = (pf_rgba_lanes_3+40);
            puVar4 = (pf_rgba_lanes_3+56);
            lVar37 = 8;
            while( true ) {
              *puVar36 = *puVar1;
              puVar36[1] = *puVar2;
              puVar36[2] = *puVar3;
              puVar36[3] = *puVar4;
              puVar36 = puVar36 + 4;
              lVar37 = lVar37 + -1;
              if (lVar37 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar28 = puVar28 + 0x40;
          } while (uVar29 != 0);
          pcVar32 = pcVar27 + uVar26;
          if (uVar24 != uVar26) goto LAB_1000b068;
        }
        pcVar22 = pcVar22 + 1;
      } while (pcVar22 != pcVar11);
      uVar26 = 0x9a9a9a;
      pcVar22 = (code *)param_1[1];
      iVar23 = *param_1;
      pcVar32 = (code *)param_1[2];
      if (bVar33) {
        uVar26 = 0x286dc4;
      }
      pcVar10 = pcVar22;
      if ((int)pcVar15 < (int)pcVar22) {
        pcVar10 = pcVar15;
      }
LAB_1000b0c8:
      pcVar11 = (code *)(local_4c + 1);
      if ((int)pcVar32 <= (int)(local_4c + 1)) {
        pcVar11 = pcVar32;
      }
      uVar5 = (undefined1)uVar26;
      uVar6 = (undefined1)(uVar26 >> 8);
      uVar7 = (undefined1)(uVar26 >> 0x10);
      if ((((int)pcVar27 < (int)pcVar10) && (iVar23 != 0)) && ((int)pcVar30 < (int)pcVar11)) {
        uVar24 = (int)pcVar10 - (int)pcVar27;
        uVar31 = uVar24 & 0xfffffff0;
        pcVar22 = pcVar30;
        do {
          puVar19 = (undefined1 *)(param_1[3] * (int)pcVar22 + *param_1 + (int)pcVar27 * 4);
          if (uVar24 < 0x10) {
            pcVar32 = pcVar27;
LAB_1000b19c:
            iVar23 = (int)pcVar10 - (int)pcVar32;
            do {
              puVar19[3] = 0xff;
              iVar23 = iVar23 + -1;
              puVar19[2] = uVar5;
              puVar19[1] = uVar6;
              *puVar19 = uVar7;
              puVar19 = puVar19 + 4;
            } while (iVar23 != 0);
          }
          else {
            puVar28 = (undefined1 *)(param_1[3] * (int)pcVar22 + *param_1 + (int)pcVar27 * 4);
            puVar19 = puVar19 + uVar31 * 4;
            uVar29 = uVar31;
            do {
              uint8_t pf_rgba_lanes_4[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_4[pf_lane]=uVar7;pf_rgba_lanes_4[16+pf_lane]=uVar6;pf_rgba_lanes_4[32+pf_lane]=uVar5;pf_rgba_lanes_4[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_4+0);
              puVar2 = (pf_rgba_lanes_4+16);
              puVar3 = (pf_rgba_lanes_4+32);
              puVar4 = (pf_rgba_lanes_4+48);
              lVar37 = 8;
              puVar36 = puVar28;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar36 = puVar28 + 0x20;
              uVar29 = uVar29 - 0x10;
              puVar1 = (pf_rgba_lanes_4+8);
              puVar2 = (pf_rgba_lanes_4+24);
              puVar3 = (pf_rgba_lanes_4+40);
              puVar4 = (pf_rgba_lanes_4+56);
              lVar37 = 8;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar28 = puVar28 + 0x40;
            } while (uVar29 != 0);
            pcVar32 = pcVar27 + uVar31;
            if (uVar24 != uVar31) goto LAB_1000b19c;
          }
          pcVar22 = pcVar22 + 1;
        } while (pcVar22 != pcVar11);
        pcVar22 = (code *)param_1[1];
        iVar23 = *param_1;
        pcVar32 = (code *)param_1[2];
        pcVar10 = pcVar22;
        if ((int)pcVar15 < (int)pcVar22) {
          pcVar10 = pcVar15;
        }
      }
      pcVar11 = pcVar32;
      if ((int)pcVar14 < (int)pcVar32) {
        pcVar11 = pcVar14;
      }
      pcVar9 = pcVar14;
      if ((int)pcVar14 < 2) {
        pcVar9 = (code *)0x1;
      }
      if ((((int)pcVar27 < (int)pcVar10) && (iVar23 != 0)) && ((int)pcVar9 <= (int)pcVar11)) {
        uVar31 = (int)pcVar10 - (int)pcVar27;
        puVar19 = (undefined1 *)(param_1[3] * (int)(pcVar9 + -1) + iVar23 + (int)pcVar27 * 4);
        if (uVar31 < 0x10) {
          puVar28 = puVar19;
          pcVar11 = pcVar27;
LAB_1000b2d4:
          iVar23 = (int)pcVar10 - (int)pcVar11;
          do {
            puVar28[3] = 0xff;
            iVar23 = iVar23 + -1;
            puVar28[2] = uVar5;
            puVar28[1] = uVar6;
            *puVar28 = uVar7;
            puVar28 = puVar28 + 4;
          } while (iVar23 != 0);
        }
        else {
          uVar29 = uVar31 & 0xfffffff0;
          pcVar11 = pcVar27 + uVar29;
          puVar28 = puVar19 + uVar29 * 4;
          uVar24 = uVar29;
          do {
            uint8_t pf_rgba_lanes_5[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_5[pf_lane]=uVar7;pf_rgba_lanes_5[16+pf_lane]=uVar6;pf_rgba_lanes_5[32+pf_lane]=uVar5;pf_rgba_lanes_5[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_5+0);
            puVar2 = (pf_rgba_lanes_5+16);
            puVar3 = (pf_rgba_lanes_5+32);
            puVar4 = (pf_rgba_lanes_5+48);
            lVar37 = 8;
            puVar36 = puVar19;
            while( true ) {
              *puVar36 = *puVar1;
              puVar36[1] = *puVar2;
              puVar36[2] = *puVar3;
              puVar36[3] = *puVar4;
              puVar36 = puVar36 + 4;
              lVar37 = lVar37 + -1;
              if (lVar37 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar36 = puVar19 + 0x20;
            uVar24 = uVar24 - 0x10;
            puVar1 = (pf_rgba_lanes_5+8);
            puVar2 = (pf_rgba_lanes_5+24);
            puVar3 = (pf_rgba_lanes_5+40);
            puVar4 = (pf_rgba_lanes_5+56);
            lVar37 = 8;
            while( true ) {
              *puVar36 = *puVar1;
              puVar36[1] = *puVar2;
              puVar36[2] = *puVar3;
              puVar36[3] = *puVar4;
              puVar36 = puVar36 + 4;
              lVar37 = lVar37 + -1;
              if (lVar37 == 0) break;
              puVar1 = puVar1 + 1;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar19 = puVar19 + 0x40;
          } while (uVar24 != 0);
          if (uVar31 != uVar29) goto LAB_1000b2d4;
        }
        pcVar32 = (code *)param_1[2];
        iVar23 = *param_1;
        pcVar22 = (code *)param_1[1];
        pcVar11 = pcVar32;
        if ((int)pcVar14 < (int)pcVar32) {
          pcVar11 = pcVar14;
        }
      }
      pcVar10 = (code *)(uVar21 + 1);
      if ((int)pcVar22 <= (int)(uVar21 + 1)) {
        pcVar10 = pcVar22;
      }
      if ((((int)pcVar30 < (int)pcVar11) && (iVar23 != 0)) && ((int)pcVar27 < (int)pcVar10)) {
        uVar24 = (int)pcVar10 - (int)pcVar27;
        uVar31 = uVar24 & 0xfffffff0;
        pcVar22 = pcVar30;
        do {
          puVar19 = (undefined1 *)(param_1[3] * (int)pcVar22 + *param_1 + (int)pcVar27 * 4);
          if (uVar24 < 0x10) {
            pcVar32 = pcVar27;
LAB_1000b404:
            iVar23 = (int)pcVar10 - (int)pcVar32;
            do {
              puVar19[3] = 0xff;
              iVar23 = iVar23 + -1;
              puVar19[2] = uVar5;
              puVar19[1] = uVar6;
              *puVar19 = uVar7;
              puVar19 = puVar19 + 4;
            } while (iVar23 != 0);
          }
          else {
            puVar28 = (undefined1 *)(param_1[3] * (int)pcVar22 + *param_1 + (int)pcVar27 * 4);
            puVar19 = puVar19 + uVar31 * 4;
            uVar29 = uVar31;
            do {
              uint8_t pf_rgba_lanes_6[64]; for(unsigned pf_lane=0;pf_lane<16;pf_lane++){pf_rgba_lanes_6[pf_lane]=uVar7;pf_rgba_lanes_6[16+pf_lane]=uVar6;pf_rgba_lanes_6[32+pf_lane]=uVar5;pf_rgba_lanes_6[48+pf_lane]=255;}
puVar1 = (pf_rgba_lanes_6+0);
              puVar2 = (pf_rgba_lanes_6+16);
              puVar3 = (pf_rgba_lanes_6+32);
              puVar4 = (pf_rgba_lanes_6+48);
              lVar37 = 8;
              puVar36 = puVar28;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar36 = puVar28 + 0x20;
              uVar29 = uVar29 - 0x10;
              puVar1 = (pf_rgba_lanes_6+8);
              puVar2 = (pf_rgba_lanes_6+24);
              puVar3 = (pf_rgba_lanes_6+40);
              puVar4 = (pf_rgba_lanes_6+56);
              lVar37 = 8;
              while( true ) {
                *puVar36 = *puVar1;
                puVar36[1] = *puVar2;
                puVar36[2] = *puVar3;
                puVar36[3] = *puVar4;
                puVar36 = puVar36 + 4;
                lVar37 = lVar37 + -1;
                if (lVar37 == 0) break;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              puVar28 = puVar28 + 0x40;
            } while (uVar29 != 0);
            pcVar32 = pcVar27 + uVar31;
            if (uVar24 != uVar31) goto LAB_1000b404;
          }
          pcVar22 = pcVar22 + 1;
        } while (pcVar22 != pcVar11);
        iVar23 = *param_1;
        pcVar22 = (code *)param_1[1];
        pcVar32 = (code *)param_1[2];
      }
      pcVar11 = pcVar15;
      if ((int)pcVar15 < 2) {
        pcVar11 = (code *)0x1;
      }
      if ((int)pcVar15 < (int)pcVar22) {
        pcVar22 = pcVar15;
      }
      if ((int)pcVar14 < (int)pcVar32) {
        pcVar32 = pcVar14;
      }
      pcVar15 = pcVar14;
      if ((((int)pcVar30 < (int)pcVar32) && (iVar23 != 0)) && ((int)pcVar11 <= (int)pcVar22)) {
        pcVar15 = (code *)(uVar26 >> 8);
        do {
          iVar23 = param_1[3] * (int)pcVar30;
          pcVar30 = pcVar30 + 1;
          iVar23 = iVar23 + *param_1 + (int)pcVar11 * 4;
          *(undefined1 *)(iVar23 + -1) = 0xff;
          *(undefined1 *)(iVar23 + -2) = uVar5;
          *(undefined1 *)(iVar23 + -3) = uVar6;
          *(undefined1 *)(iVar23 + -4) = uVar7;
        } while (pcVar32 != pcVar30);
      }
    }
    if (bVar17 != 0) {
      pcVar15 = (code *)unaff_r5[0x10];
    }
    if (bVar17 != 0 && pcVar15 != (code *)0x0) {
      (*pcVar15)(unaff_r5[0x11]);
    }
    puVar16 = (undefined *)(uint)*(byte *)(unaff_r5 + 1);
    bVar33 = (*(byte *)(unaff_r5 + 1) & 1) != 0;
    if (bVar33) {
      puVar16 = (undefined *)unaff_r5[7];
    }
    if (!bVar33) {
      puVar16 = (undefined *)0x202020;
    }
    iVar23 = 1;
    uVar26 = 1;
    if (1 < (uint)unaff_r5[9]) {
      uVar26 = unaff_r5[9];
    }
    puVar20 = &DAT_1000be5c;
    if ((undefined *)unaff_r5[2] != (undefined *)0x0) {
      puVar20 = (undefined *)unaff_r5[2];
    }
    if ((int)uVar12 < 0xd) {
      uVar12 = 0xc;
    }
    local_48 = uVar12 - 0xc;
    if ((int)uVar8 < 0x15) {
      uVar8 = 0x14;
    }
    uVar21 = uVar21 + 10;
    local_4c = local_4c + 6;
    local_44 = uVar8 - 0x14;
LAB_1000b55c:
    recovered_1000b724(param_1,uVar21,local_4c,local_44,local_48,(int)puVar20,(int)puVar16,uVar26,
                       iVar23);
    break;
  case 5:
    iVar23 = 1;
    goto LAB_1000ad94;
  case 6:
    iVar23 = 0;
LAB_1000ad94:
    recovered_1000bb28(param_1,(int)unaff_r5,param_3,param_4,param_5,unaff_r10,iVar23);
    break;
  case 7:
    iVar23 = 0;
    if (unaff_r5[3] != 0) {
      iVar23 = unaff_r5[4];
    }
    if (unaff_r5[3] != 0 && iVar23 != 0) {
      iVar23 = 0;
      uVar12 = 0;
      do {
        iVar25 = unaff_r5[3];
        recovered_10009fe8(&local_38,(uint *)(iVar25 + iVar23),local_44,local_48);
        iVar18 = unaff_r5[6];
        uVar8 = local_34;
        if ((int)local_48 < (int)local_34) {
          uVar8 = local_48;
        }
        uVar26 = local_38;
        if ((int)local_44 < (int)local_38) {
          uVar26 = local_44;
        }
        if (iVar18 == 1) {
          uVar24 = local_4c + (int)(local_48 - uVar8) / 2;
          uVar31 = uVar21 + (int)(local_44 - uVar26) / 2;
        }
        else if (iVar18 == 2) {
          uVar24 = (local_48 + local_4c) - uVar8;
          uVar31 = (local_44 + uVar21) - uVar26;
        }
        else {
          uVar31 = uVar21;
          uVar24 = local_4c;
          if (iVar18 == 3) {
            uVar26 = local_44;
            uVar8 = local_48;
          }
        }
        recovered_1000a754(param_1,(int *)(iVar25 + iVar23),uVar31,uVar24,uVar26,uVar8);
        iVar23 = iVar23 + 0x48;
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)unaff_r5[4]);
    }
  }
  return;
}

#undef DAT_1000be5c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010978
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010978
#undef local_4c
#undef local_48
#undef local_44
#undef local_38
#undef local_34
#undef local_2c
#undef local_28

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
#define local_5dc (*(uint (*)[208])(frame + 20))
#define local_274 (*(uint *)(frame + 892))
#define auStack_29c (*(undefined1 (*)[40])(frame + 852))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b574
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000b574(int *param_1)

{
  unsigned char frame[1552] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 uVar4;
  undefined4 extraout_r2_01 = 0;
  undefined4 extraout_r2_02 = 0;
  undefined4 extraout_r2_03 = 0;
  int extraout_r3 = 0;
  int extraout_r3_00 = 0;
  int extraout_r3_01 = 0;
  int extraout_r3_02 = 0;
  int extraout_r3_03 = 0;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_r11;

  uVar5 = 0;
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0xe];
    unaff_r11 = param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    recovered_10001f48(local_5dc,0,0x340);
    puVar2 = (uint *)*unaff_r11;
    if ((uint *)*unaff_r11 == (uint *)0x0) {
      puVar2 = local_5dc;
    }
    uVar4 = extraout_r2;
    iVar1 = extraout_r3;
    if ((*puVar2 != 0) ||
       (uVar3 = recovered_10007ed0(puVar2,(uint *)(unaff_r11 + 1)), uVar4 = extraout_r2_00,
       iVar1 = extraout_r3_00, uVar3 != 0)) {
      iVar1 = recovered_10008b44((int *)puVar2,auStack_29c,uVar4,iVar1);
      if ((iVar1 != 0) && ((local_274 & 0x11) == 0)) {
        uVar3 = 0;
        while( true ) {
          recovered_10001f48(auStack_29c,0,0x278);
          recovered_10008b44((int *)puVar2,auStack_29c,extraout_r2_01,extraout_r3_01);
          if (((((code *)unaff_r11[0xf] != (code *)0x0) &&
               (iVar1 = (*(code *)unaff_r11[0xf])(puVar2,auStack_29c,unaff_r11[0x10]), iVar1 == 0))
              || (iVar1 = (*(code *)unaff_r11[0xe])(puVar2,unaff_r11[0x10]), iVar1 == 0)) ||
             (uVar3 = uVar3 + 1, unaff_r11[0x11] - 1U < uVar3)) break;
          uVar6 = unaff_r11[0x12];
          uVar5 = extraout_r2_02;
          iVar1 = extraout_r3_02;
          if (uVar6 < 2) {
            uVar6 = 1;
          }
          do {
            if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
               ((0x9f < _DAT_40010808 && (_DAT_4001089c != (code *)0x0)))) {
              (*_DAT_4001089c)();
              uVar5 = extraout_r2_03;
              iVar1 = extraout_r3_03;
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          iVar1 = recovered_10008b44((int *)puVar2,auStack_29c,uVar5,iVar1);
          if ((iVar1 == 0) || ((local_274 & 0x11) != 0)) break;
        }
      }
      recovered_10009164((int *)puVar2);
      uVar5 = 1;
    }
  }
  return uVar5;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c
#undef local_5dc
#undef local_274
#undef auStack_29c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010978
#define DAT_40010978 (*(uint8_t *)(0x40010978U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010978
#define _DAT_40010978 (*(code * *)(0x40010978U))
#define local_38 (*(int (*)[3])(frame + 24))
#define local_2c (*(uint *)(frame + 36))
#define local_28 (*(uint *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b724
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b724(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,undefined4 param_8,int param_9)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte bVar2;
  int iVar3;
  int extraout_r1 = 0;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r11;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;

  recovered_10001f48(local_38,0,0x18);
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = extraout_r1;
  if (param_6 != 0) {
    iVar4 = *param_1;
  }
  if (param_6 == 0 || iVar4 == 0) {
    return;
  }
  iVar4 = param_4;
  if (0 < param_4) {
    iVar4 = param_5;
    unaff_r11 = param_5;
  }
  if (iVar4 < 1) {
    return;
  }
  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (_DAT_40010804 == 0) {
    return;
  }
  if (_DAT_40010808 < 0x17c) {
    return;
  }
  if (_DAT_40010978 == (code *)0x0) {
    return;
  }
  uVar16 = (*_DAT_40010978)(param_6,0xffffffff,param_8,param_7 << 8 | 0xff,local_38);
  bVar15 = (int)uVar16 == 0;
  iVar4 = (int)((ulonglong)uVar16 >> 0x20);
  if (!bVar15) {
    iVar4 = local_38[0];
  }
  if (bVar15 || iVar4 == 0) {
    return;
  }
  iVar5 = param_2;
  if (param_9 == 2) {
    if ((int)local_2c < param_4) {
      iVar5 = (param_2 + param_4) - local_2c;
    }
  }
  else if ((param_9 == 1) && ((int)local_2c < param_4)) {
    iVar5 = param_2 + (int)(param_4 - local_2c) / 2;
  }
  iVar7 = param_3;
  if ((int)local_28 < unaff_r11) {
    if (local_28 == 0) goto LAB_1000bad4;
    iVar7 = param_3 + (int)(unaff_r11 - local_28) / 2;
  }
  uVar10 = 0;
  iVar14 = iVar7;
  do {
    iVar6 = uVar10 + iVar7;
    if ((((param_3 <= iVar6) && (iVar6 < param_3 + unaff_r11)) && (-1 < iVar6)) &&
       ((iVar6 < param_1[2] && (local_2c != 0)))) {
      uVar12 = 0;
      iVar11 = 3;
      do {
        iVar9 = iVar5 + uVar12;
        if (((param_2 <= iVar9) && (iVar9 < param_2 + param_4)) &&
           ((-1 < iVar9 && (((iVar9 < param_1[1] && (*param_1 != 0)) && (iVar6 < param_1[2])))))) {
          iVar9 = uVar10 * local_24 + iVar11;
          bVar2 = *(byte *)(iVar4 + iVar9);
          if (bVar2 != 0) {
            iVar9 = iVar4 + iVar9;
            iVar13 = iVar14 * param_1[3] + *param_1 + iVar5 * 4;
            iVar3 = iVar13 + iVar11;
            if (bVar2 == 0xff) {
              *(undefined1 *)(iVar3 + -3) = *(undefined1 *)(iVar9 + -3);
              iVar3 = iVar13 + uVar12 * 4;
              iVar9 = uVar10 * local_24 + iVar4 + uVar12 * 4;
              *(undefined1 *)(iVar3 + 1) = *(undefined1 *)(iVar9 + 1);
              *(undefined1 *)(iVar3 + 2) = *(undefined1 *)(iVar9 + 2);
            }
            else {
              uVar1 = bVar2 ^ 0xff;
              iVar8 = iVar13 + uVar12 * 4;
              *(char *)(iVar3 + -3) =
                   (char)((ulonglong)
                          ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar3 + -3) +
                           (int)(short)(ushort)*(byte *)(iVar9 + -3) * (int)(short)(ushort)bVar2 +
                          0x7f) * 0x1010102 >> 0x20);
              iVar9 = uVar10 * local_24 + iVar4 + uVar12 * 4;
              *(char *)(iVar8 + 1) =
                   (char)((ulonglong)
                          ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar8 + 1) +
                           (int)(short)(ushort)*(byte *)(iVar9 + 1) * (int)(short)(ushort)bVar2 +
                          0x7f) * 0x1010102 >> 0x20);
              *(char *)(iVar8 + 2) =
                   (char)((ulonglong)
                          ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar8 + 2) +
                           (int)(short)(ushort)*(byte *)(iVar9 + 2) * (int)(short)(ushort)bVar2 +
                          0x7f) * 0x1010102 >> 0x20);
            }
            *(undefined1 *)(iVar13 + iVar11) = 0xff;
          }
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar12 < local_2c);
    }
    uVar10 = uVar10 + 1;
    iVar14 = iVar14 + 1;
  } while (uVar10 < local_28);
LAB_1000bad4:
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
    (*_DAT_40010850)(iVar4);
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010978
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_40010978
#undef local_38
#undef local_2c
#undef local_28
#undef local_24

#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb28
 */

void recovered_1000bb28(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;

  iVar13 = 0;
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar1 = *(uint *)(param_2 + 0x30) & ~((int)*(uint *)(param_2 + 0x30) >> 0x1f);
  uVar10 = *(uint *)(param_2 + 0x34) & ~((int)*(uint *)(param_2 + 0x34) >> 0x1f);
  uVar6 = uVar1 + param_4;
  uVar4 = uVar10 + param_3;
  uVar16 = uVar6;
  if (param_7 != 0) {
    uVar16 = uVar4;
  }
  if (1 < uVar8) {
    iVar13 = *(int *)(param_2 + 0x14) * (uVar8 - 1);
  }
  if (*(int *)(param_2 + 0xc) != 0 && uVar8 != 0) {
    iVar15 = 0;
    uVar12 = 0;
    uVar2 = param_6 - (uVar1 + (*(uint *)(param_2 + 0x38) &
                               ~((int)*(uint *)(param_2 + 0x38) >> 0x1f)));
    uVar11 = 0;
    uVar1 = param_5 - (uVar10 + (*(uint *)(param_2 + 0x3c) &
                                ~((int)*(uint *)(param_2 + 0x3c) >> 0x1f)));
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
    uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
    do {
      puVar3 = (uint *)(*(int *)(param_2 + 0xc) + iVar15);
      if (*puVar3 == 4) {
        uVar11 = uVar11 + 1;
      }
      else {
        puVar9 = &local_28;
        recovered_10009fe8(puVar9,puVar3,uVar1,uVar2);
        if (param_7 == 0) {
          puVar9 = &local_24;
        }
        uVar8 = *(uint *)(param_2 + 0x10);
        iVar13 = *puVar9 + iVar13;
      }
      uVar12 = uVar12 + 1;
      iVar15 = iVar15 + 0x48;
    } while (uVar12 < uVar8);
    if (uVar11 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar2;
      if (param_7 != 0) {
        uVar10 = uVar1;
      }
      uVar10 = recovered_10000b18(uVar10 - iVar13 & ~((int)(uVar10 - iVar13) >> 0x1f),uVar11);
    }
    if (uVar8 != 0) {
      iVar13 = 0;
      uVar8 = 0;
      do {
        iVar15 = *(int *)(param_2 + 0xc);
        puVar3 = (uint *)(iVar15 + iVar13);
        recovered_10009fe8(&local_28,puVar3,uVar1,uVar2);
        if (*(int *)(iVar15 + iVar13) == 4) {
          uVar11 = uVar10;
          uVar5 = uVar2;
          uVar7 = uVar1;
          uVar12 = uVar10;
          if (param_7 == 0) goto LAB_1000bd7c;
LAB_1000bdd4:
          iVar15 = *(int *)(param_2 + 0x18);
          uVar11 = uVar5;
          if (iVar15 == 3) {
            uVar11 = uVar2;
          }
          if ((iVar15 == 1) && ((int)uVar11 < (int)uVar2)) {
            uVar7 = uVar6 + (int)(uVar2 - uVar5) / 2;
          }
          else {
            uVar7 = uVar6;
            if ((int)uVar11 < (int)uVar2) {
              uVar7 = (uVar2 + uVar6) - uVar5;
            }
            if (iVar15 != 2) {
              uVar7 = uVar6;
            }
          }
          uVar5 = uVar16;
          uVar14 = uVar12;
        }
        else {
          uVar11 = local_24;
          uVar5 = local_24;
          uVar7 = local_28;
          uVar12 = local_28;
          if (param_7 != 0) goto LAB_1000bdd4;
LAB_1000bd7c:
          iVar15 = *(int *)(param_2 + 0x18);
          uVar12 = uVar7;
          if (iVar15 == 3) {
            uVar12 = uVar1;
          }
          if ((iVar15 == 1) && ((int)uVar12 < (int)uVar1)) {
            uVar5 = uVar4 + (int)(uVar1 - uVar7) / 2;
          }
          else {
            uVar5 = uVar4;
            if ((int)uVar12 < (int)uVar1) {
              uVar5 = (uVar1 + uVar4) - uVar7;
            }
            if (iVar15 != 2) {
              uVar5 = uVar4;
            }
          }
          uVar7 = uVar16;
          uVar14 = uVar11;
        }
        iVar15 = *(int *)(param_2 + 0x14);
        recovered_1000a754(param_1,(int *)puVar3,uVar5,uVar7,uVar12,uVar11);
        uVar16 = iVar15 + uVar14 + uVar16;
        uVar8 = uVar8 + 1;
        iVar13 = iVar13 + 0x48;
      } while (uVar8 < *(uint *)(param_2 + 0x10));
    }
  }
  return;
}

#undef local_28
#undef local_24
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
