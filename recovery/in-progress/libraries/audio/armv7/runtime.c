/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001078
 */

uint recovered_10001078(uint param_1,uint param_2)

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
 * Address: 0x100010c8
 */

uint recovered_100010c8(uint param_1,uint param_2)

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
 * Address: 0x10001100
 */

uint recovered_10001100(uint param_1,uint param_2)

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
 * Address: 0x10001170
 */

uint recovered_10001170(uint param_1,uint param_2)

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
 * Address: 0x100011dc
 */

undefined8 recovered_100011dc(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003a70(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011ec
 */

undefined8 recovered_100011ec(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_100039b0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011fc
 */

float recovered_100011fc(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003af8(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001218
 */

float recovered_10001218(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003b40(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000c080
#define DAT_1000c080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001238
 */

void recovered_10001238(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c080 = 0;
  recovered_10001250();
  return;
}

#undef DAT_1000c080

#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_1000c080
#define DAT_1000c080 (*(char *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x360U)))
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
 * Address: 0x10001250
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001250(void)

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
  if (DAT_1000c080 != '\0') {
    return;
  }
  DAT_1000c088 = (undefined1 *)0x0;
  DAT_1000c084 = 0;
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
        if (iVar12 == 0) goto LAB_10001460;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_1000537c((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_1000c084 != 0) goto LAB_10001598;
    }
  }
LAB_10001460:
  iVar12 = (int)DAT_1000c088;
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
      puVar9 = &DAT_1000c084;
      if (DAT_1000c084 != 0) {
        puVar9 = (undefined4 *)(local_24 + 4);
      }
      *puVar9 = 0x300000;
joined_r0x10001640:
      if (iVar12 == 0) {
        DAT_1000c080 = 1;
        DAT_1000c088 = puVar3;
        return;
      }
      DAT_1000c080 = 1;
      return;
    }
  }
  else {
    _DAT_00300004 = 0;
    _DAT_00300000 = 0x5fcffff0;
    _DAT_00300008 = local_24;
    DAT_0030000c = 1;
    puVar9 = &DAT_1000c084;
    if (DAT_1000c084 != 0) {
      puVar9 = (undefined4 *)(local_24 + 4);
    }
    bVar13 = DAT_1000c088 == (undefined1 *)0x0;
    *puVar9 = 0x300000;
    iVar12 = (int)DAT_1000c088;
    if (bVar13) {
      DAT_1000c088 = (undefined1 *)0x300000;
      iVar12 = (int)DAT_1000c088;
    }
    DAT_1000c088 = (undefined1 *)iVar12;
    if ((&DAT_68000000 < puVar3) && (0x20 < ((uint)puVar3 & 0xfffffff0) + 0x98000000)) {
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)puVar3 & 0xfffffff0) + 0x97fffff0;
      puVar3 = &DAT_68000000;
      _DAT_68000008 = 0x300000;
      DAT_6800000c = 1;
      puVar9 = &DAT_1000c084;
      if (DAT_1000c084 != 0) {
        puVar9 = (undefined4 *)&DAT_00300004;
      }
      *puVar9 = &DAT_68000000;
      goto joined_r0x10001640;
    }
  }
LAB_10001598:
  if (DAT_1000c088 == (undefined1 *)0x0) {
    DAT_1000c088 = (undefined1 *)DAT_1000c084;
    DAT_1000c080 = 1;
    return;
  }
  DAT_1000c080 = 1;
  return;
}

#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_1000c080
#undef DAT_1000c084
#undef DAT_1000c088
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

#undef DAT_1000c084
#define DAT_1000c084 (*(uint * *)(((uintptr_t)pf_module_state + 0x35cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001648
 */

int recovered_10001648(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_10001250();
  iVar1 = 0;
  puVar2 = DAT_1000c084;
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

#undef DAT_1000c084

#undef DAT_1000c084
#define DAT_1000c084 (*(int *)(((uintptr_t)pf_module_state + 0x35cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000168c
 */

void recovered_1000168c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001250();
  for (iVar1 = DAT_1000c084; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c084

#undef DAT_1000c084
#define DAT_1000c084 (*(int * *)(((uintptr_t)pf_module_state + 0x35cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016dc
 */

int recovered_100016dc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10001250();
  iVar1 = 0;
  for (piVar2 = DAT_1000c084; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_1000c084

#undef DAT_1000c084
#define DAT_1000c084 (*(int *)(((uintptr_t)pf_module_state + 0x35cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001718
 */

void recovered_10001718(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001250();
  for (iVar1 = DAT_1000c084; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c084

#undef DAT_1000c084
#define DAT_1000c084 (*(uint * *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint * *)(((uintptr_t)pf_module_state + 0x360U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000175c
 */

uint * recovered_1000175c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_10001250();
    puVar5 = DAT_1000c088;
    if (DAT_1000c088 == (uint *)0x0) {
      puVar5 = DAT_1000c084;
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
          DAT_1000c088 = DAT_1000c084;
          if (puVar5 != (uint *)0x0) {
            DAT_1000c088 = puVar5;
          }
          *(undefined1 *)(puVar2 + 3) = 0;
          return puVar2 + 4;
        }
        puVar1 = puVar2 + 1;
        puVar2 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) {
          puVar2 = DAT_1000c084;
        }
      } while ((puVar2 != (uint *)0x0) && (puVar2 != puVar5));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000c084
#undef DAT_1000c088

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001868
 */

longlong recovered_10001868(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100018bc
 */

ulonglong recovered_100018bc(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001910
 */

undefined8 recovered_10001910(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000195c
 */

undefined8 recovered_1000195c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001a40
 */

undefined8 recovered_10001a40(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001ac0
 */

undefined8 recovered_10001ac0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001bd8
 */

undefined8 recovered_10001bd8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001c94
 */

void recovered_10001c94(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c9c
 */

int recovered_10001c9c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001ca8(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001cfc(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001d4c(void *pointer,uintptr_t size) {
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
 * Address: 0x10001da0
 */

void recovered_10001da0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001ddc;
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
          if (uVar9 == uVar7) goto LAB_10001f70;
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
LAB_10001f70:
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
        if (uVar7 == uVar9) goto LAB_10001dd4;
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
LAB_10001dd4:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_10001ddc:
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
 * Address: 0x10002024
 */

void recovered_10002024(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    goto LAB_1000206c;
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
          if (puVar7 == param_3) goto LAB_100022f8;
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
LAB_100022f8:
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
        if (param_3 == puVar7) goto LAB_10002374;
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
LAB_10002374:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_1000206c:
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
    goto LAB_100020e8;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_10002384:
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
          goto LAB_10002384;
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
        if (uVar8 == uVar10) goto LAB_10002460;
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
LAB_10002460:
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
      if (uVar10 == uVar8) goto LAB_1000251c;
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
LAB_1000251c:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_100020e8:
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
 * Address: 0x10002530
 */

void recovered_10002530(byte *param_1,byte param_2,uint param_3)

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
  if (param_3 < 8) goto joined_r0x100026b8;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100025d0:
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
        if (uVar5 == uVar6) goto joined_r0x1000265c;
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
      goto joined_r0x100025d0;
    }
  }
joined_r0x1000265c:
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
      if (uVar6 == uVar5) goto joined_r0x100026b8;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x100026b8:
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
 * Address: 0x10002730
 */

void recovered_10002730(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100028b0;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100027cc:
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
        if (uVar7 == uVar8) goto joined_r0x10002850;
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
      goto joined_r0x100027cc;
    }
  }
joined_r0x10002850:
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
      if (uVar7 == uVar8) goto joined_r0x100028b0;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100028b0:
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
 * Address: 0x1000292c
 */

void recovered_1000292c(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10002aac;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100029c8:
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
        if (uVar7 == uVar8) goto joined_r0x10002a4c;
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
      goto joined_r0x100029c8;
    }
  }
joined_r0x10002a4c:
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
      if (uVar7 == uVar8) goto joined_r0x10002aac;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10002aac:
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
 * Address: 0x10002b28
 */

int recovered_10002b28(uint *param_1,uint *param_2,uint param_3)

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
LAB_10002c20:
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
      if (uVar5 != uVar6) goto LAB_10002d18;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10002d18;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10002d18;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10002d18;
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
LAB_10002c50:
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
      if (uVar5 != uVar6) goto LAB_10002c50;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_10002d20((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_10002c20;
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
LAB_10002d18:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d20
 */

int recovered_10002d20(byte *param_1,byte *param_2)

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
 * Address: 0x10002d70
 */

bool recovered_10002d70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d84
 */

bool recovered_10002d84(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d98
 */

bool recovered_10002d98(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

bool recovered_10002db0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ddc
 */

bool recovered_10002ddc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dfc
 */

bool recovered_10002dfc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e10
 */

int recovered_10002e10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10002e20(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e30
 */

int recovered_10002e30(int param_1)

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
 * Address: 0x10002e58
 */

int recovered_10002e58(byte *param_1,byte *param_2)

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
LAB_10002e90:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10002e90;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e9c
 */

int recovered_10002e9c(byte *param_1,byte *param_2)

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
LAB_10002ed4:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10002ed4;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10002ee0(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((int)out + uVar1) = (char)value;
  }
  return out;
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
 * Address: 0x10002efc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10002efc(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10002fc4;
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
          if (uVar8 == uVar11) goto LAB_10003158;
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
LAB_10003158:
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
        if (uVar11 == uVar8) goto LAB_10002fbc;
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
LAB_10002fbc:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10002fc4:
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
 * Address: 0x10003210
 */

char * recovered_10003210(char *param_1,char param_2)

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
 * Address: 0x10003244
 */

int recovered_10003244(char *param_1,char *param_2)

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
 * Address: 0x100032a8
 */

char * recovered_100032a8(char *param_1,char *param_2)

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
 * Address: 0x10003308
 */

char * recovered_10003308(char *param_1,char *param_2)

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


#undef DAT_1000bd58
#define DAT_1000bd58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000336c
 */

undefined * recovered_1000336c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000bd58;
}

#undef DAT_1000bd58

#undef PTR_DAT_1000c010
#define PTR_DAT_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000337c
 */

undefined ** recovered_1000337c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c010;
}

#undef PTR_DAT_1000c010

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
 * Address: 0x1000338c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000338c(undefined4 *param_1)

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
 * Address: 0x1000343c
 */

int recovered_1000343c(char *left,char *right,uint in_r2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(right,left));
  if ((int)in_r2 < 1) {
    if (0x7fffffff < in_r2) {
      do {
        dVar3 = dVar3 * 0.5;
        bVar2 = in_r2 != 0xffffffff;
        in_r2 = in_r2 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = in_r2 + 1;
    do {
      dVar3 = dVar3 + dVar3;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return SUB84(dVar3,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003480
 */

double recovered_10003480(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10003538
 */

char * recovered_10003538(char *param_1,char *param_2,undefined4 in_r2,undefined4 in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(in_r3,in_r2));
  if (dVar2 == 0.0) {
    return (char *)0x0;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(param_2,param_1)) / dVar2,3);
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return SUB84(pf_bits_double(CONCAT44(param_2,param_1)) - dVar3 * dVar2,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003570
 */

double recovered_10003570(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100035f0
 */

double recovered_100035f0(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003620
 */

double recovered_10003620(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003664
 */

double recovered_10003664(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100037e0
#define DAT_100037e0 (*(double *)(0x100037e0U))
#undef DAT_100037e8
#define DAT_100037e8 (*(double *)(0x100037e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036b0
 */

double recovered_100036b0(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100037e0
#undef DAT_100037e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037f0
 */

undefined8 recovered_100037f0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_100039b0(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_100038b0
#define DAT_100038b0 (*(double *)(0x100038b0U))
#undef DAT_100038b8
#define DAT_100038b8 (*(double *)(0x100038b8U))
#undef DAT_100038c0
#define DAT_100038c0 (*(double *)(0x100038c0U))
#undef DAT_100038c8
#define DAT_100038c8 (*(double *)(0x100038c8U))
#undef DAT_100038d0
#define DAT_100038d0 (*(double *)(0x100038d0U))
#undef DAT_100038d8
#define DAT_100038d8 (*(double *)(0x100038d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003820
 */

double recovered_10003820(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100038b0
#undef DAT_100038b8
#undef DAT_100038c0
#undef DAT_100038c8
#undef DAT_100038d0
#undef DAT_100038d8

#undef DAT_10003968
#define DAT_10003968 (*(double *)(0x10003968U))
#undef DAT_10003970
#define DAT_10003970 (*(double *)(0x10003970U))
#undef DAT_10003978
#define DAT_10003978 (*(double *)(0x10003978U))
#undef DAT_10003980
#define DAT_10003980 (*(double *)(0x10003980U))
#undef DAT_10003988
#define DAT_10003988 (*(double *)(0x10003988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e0
 */

double recovered_100038e0(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003968
#undef DAT_10003970
#undef DAT_10003978
#undef DAT_10003980
#undef DAT_10003988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003990
 */

double recovered_10003990(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10003a68
#define DAT_10003a68 (*(double *)(0x10003a68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

undefined8 recovered_100039b0(undefined4 param_1,undefined4 param_2)

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

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
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

#undef DAT_10003a68

#undef DAT_10003af0
#define DAT_10003af0 (*(double *)(0x10003af0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a70
 */

undefined8 recovered_10003a70(undefined4 param_1,undefined4 param_2)

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

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
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

#undef DAT_10003af0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af8
 */

double recovered_10003af8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b40
 */

double recovered_10003b40(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if ((int)param_2 < 0) {
    dVar5 = 1.0;
    uVar2 = -param_1;
    uVar3 = -(param_2 + (param_1 != 0));
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
  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar4 = 1.0;
  dVar5 = 0.0;
  do {
    dVar6 = dVar4 + dVar5;
    dVar4 = dVar4 + dVar4;
    if ((param_1 & 1) == 0) {
      dVar6 = dVar5;
    }
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
    dVar5 = dVar6;
  } while (param_1 != 0 || param_2 != 0);
  return dVar6;
}


#undef DAT_10003c10
#define DAT_10003c10 (*(float *)(0x10003c10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bd0
 */

float recovered_10003bd0(float param_1,float param_2)

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

#undef DAT_10003c10

#undef DAT_10003ccc
#define DAT_10003ccc (*(float *)(0x10003cccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c14
 */

float recovered_10003c14(float param_1,float *param_2)

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

#undef DAT_10003ccc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cd0
 */

float recovered_10003cd0(float param_1,uint param_2)

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


#undef DAT_10003da0
#define DAT_10003da0 (*(float *)(0x10003da0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d1c
 */

float recovered_10003d1c(float param_1,float param_2)

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

#undef DAT_10003da0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003da4
 */

float recovered_10003da4(float param_1)

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
 * Address: 0x10003ddc
 */

float recovered_10003ddc(float param_1)

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
 * Address: 0x10003e28
 */

double recovered_10003e28(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003e7c
 */

float recovered_10003e7c(float param_1)

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


#undef DAT_10003f2c
#define DAT_10003f2c (*(float *)(0x10003f2cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ed8
 */

float recovered_10003ed8(float param_1)

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

#undef DAT_10003f2c

#undef DAT_10004068
#define DAT_10004068 (*(double *)(0x10004068U))
#undef DAT_10004070
#define DAT_10004070 (*(float *)(0x10004070U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f30
 */

float recovered_10003f30(float param_1)

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

#undef DAT_10004068
#undef DAT_10004070

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004074
 */

float recovered_10004074(undefined4 in_r0,undefined4 in_r1,float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float extraout_s0 = 0;
  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(in_r1,in_r0));
  recovered_100039b0(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return extraout_s0;
}


#undef DAT_10004140
#define DAT_10004140 (*(double *)(0x10004140U))
#undef DAT_10004148
#define DAT_10004148 (*(double *)(0x10004148U))
#undef DAT_10004150
#define DAT_10004150 (*(double *)(0x10004150U))
#undef DAT_10004158
#define DAT_10004158 (*(double *)(0x10004158U))
#undef DAT_10004160
#define DAT_10004160 (*(double *)(0x10004160U))
#undef DAT_10004168
#define DAT_10004168 (*(double *)(0x10004168U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a8
 */

float recovered_100040a8(float param_1)

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

#undef DAT_10004140
#undef DAT_10004148
#undef DAT_10004150
#undef DAT_10004158
#undef DAT_10004160
#undef DAT_10004168

#undef DAT_10004200
#define DAT_10004200 (*(double *)(0x10004200U))
#undef DAT_10004208
#define DAT_10004208 (*(double *)(0x10004208U))
#undef DAT_10004210
#define DAT_10004210 (*(double *)(0x10004210U))
#undef DAT_10004218
#define DAT_10004218 (*(double *)(0x10004218U))
#undef DAT_10004220
#define DAT_10004220 (*(double *)(0x10004220U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004170
 */

float recovered_10004170(float param_1)

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

#undef DAT_10004200
#undef DAT_10004208
#undef DAT_10004210
#undef DAT_10004218
#undef DAT_10004220

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004228
 */

float recovered_10004228(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004244
 */

int recovered_10004244(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10004398
 */

int recovered_10004398(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10004414;
  }
  bVar2 = false;
joined_r0x10004414:
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
 * Address: 0x100044f8
 */

double recovered_100044f8(byte *param_1,undefined4 *param_2)

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
      goto LAB_100045e4;
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
LAB_100045e4:
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
 * Address: 0x100046cc
 */

float recovered_100046cc(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100044f8(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000bd5d
#define DAT_1000bd5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35U)))
#undef str_1000bd64
#define str_1000bd64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cU)))
#undef str_1000bd75
#define str_1000bd75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dU)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(double * *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(byte * *)(frame + 28))
#define local_60 (*(byte (*)[64])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046e8
 */

int recovered_100046e8(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_1000475c:
  do {
    while( true ) {
      pcVar5 = str_1000bd75;
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
LAB_10004750:
        param_1 = param_1 + 1;
        local_68 = local_68 - 1;
      }
LAB_10004754:
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
          goto LAB_100047f8;
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
LAB_100047f8:
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
switchD_10004990_caseD_4a:
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
      }
      local_70 = local_70 + 1;
      param_4 = pdVar2;
      goto LAB_1000516c;
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
        goto LAB_10004c18;
      }
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10004c18:
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
        local_60[-iVar16] = str_1000bd75[uVar10 + uVar11 * -10];
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
        goto LAB_1000516c;
      }
      goto LAB_10005178;
    default:
      goto switchD_10004990_caseD_4a;
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
        goto LAB_10004f60;
      case 6:
        uVar14 = *(uint *)pdVar2;
        uVar10 = (int)uVar14 >> 0x1f;
        goto LAB_10004f60;
      }
      uVar10 = 0;
LAB_10004f60:
      iVar6 = 0;
      if (uVar9 == 0x58) {
        pcVar5 = str_1000bd64;
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
LAB_1000516c:
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_68) {
        *param_1 = (byte)*(undefined4 *)pdVar2;
        goto LAB_10004750;
      }
      goto LAB_10004754;
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
                        goto LAB_10004b10;
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
LAB_10004b10:
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
          local_60[-iVar16] = str_1000bd75[uVar10 + uVar11 * -10];
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
LAB_10005078:
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
                      goto LAB_10005078;
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
        local_60[iVar16] = str_1000bd75[uVar9 & 0xf];
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
        pbVar12 = &DAT_1000bd5d;
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
        goto LAB_1000516c;
      }
      goto LAB_1000518c;
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
        goto LAB_100050a0;
      case 6:
        uVar10 = *(uint *)pdVar2;
        uVar9 = (int)uVar10 >> 0x1f;
        goto LAB_100050a0;
      }
      uVar9 = 0;
LAB_100050a0:
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
        local_60[-iVar16] = str_1000bd75[uVar10 + uVar11 * -10];
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
        goto LAB_1000516c;
      }
LAB_10005178:
      param_4 = local_6c;
LAB_1000518c:
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
  goto LAB_1000475c;
}

#undef DAT_1000bd5d
#undef str_1000bd64
#undef str_1000bd75
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

#define local_4 (*(undefined1 (*)[4])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000534c
 */

void recovered_1000534c(byte *in_r0,uint in_r1,byte *in_r2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_100046e8(in_r0,in_r1,in_r2,(double *)local_4);
  return;
}

#undef local_4

#undef DAT_1000c084
#define DAT_1000c084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(int * *)(((uintptr_t)pf_module_state + 0x360U)))
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
 * Address: 0x1000537c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000537c(int *param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_r9;
  int iVar5;
  bool bVar6;
  bool bVar7;

  piVar4 = (int *)((int)param_1 + (int)param_2);
  if (CARRY4((uint)param_1,(uint)param_2)) {
    piVar4 = (int *)0xffffffff;
  }
  if (param_1 < &DAT_68000000) {
    bVar7 = param_1 <= piVar4;
    bVar6 = piVar4 == param_1;
    if (bVar7 && !bVar6) {
      bVar7 = (int *)0x5fffffff < piVar4;
      bVar6 = piVar4 == (int *)0x60000000;
    }
    if (bVar7 && !bVar6) {
      if (param_1 < (int *)0x60000000) {
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
          bVar6 = DAT_1000c084 != 0;
          piVar3 = &DAT_1000c084;
          unaff_r9[2] = iVar5;
          if (bVar6) {
            piVar3 = (int *)(iVar5 + 4);
          }
          *piVar3 = (int)unaff_r9;
          *param_3 = (int)unaff_r9;
          *unaff_r9 = uVar1 - 0x10;
          piVar3 = DAT_1000c088;
          *(undefined1 *)(unaff_r9 + 3) = 1;
          if (piVar3 == (int *)0x0) {
            DAT_1000c088 = unaff_r9;
          }
        }
      }
      if (piVar4 < (int *)0x68000001) {
        return;
      }
      if (param_3 == (int *)0x0) {
        return;
      }
      if (((uint)piVar4 & 0xfffffff0) + 0x98000000 < 0x21) {
        return;
      }
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)piVar4 & 0xfffffff0) + 0x97fffff0;
      _DAT_68000008 = *param_3;
      puVar2 = &DAT_1000c084;
      if (DAT_1000c084 != 0) {
        puVar2 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar4 = (int *)&DAT_68000000;
      *puVar2 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar3 = DAT_1000c088;
      goto LAB_100054cc;
    }
  }
  if (param_3 != (int *)0x0) {
    piVar4 = (int *)((int)param_1 + 0xfU & 0xfffffff0);
    param_1 = (int *)((int)piVar4 - (int)param_1);
  }
  if ((param_3 == (int *)0x0 || param_2 <= param_1) ||
     (uVar1 = (int)param_2 - (int)param_1 & 0xfffffff0, uVar1 < 0x21)) {
    return;
  }
  piVar4[1] = 0;
  iVar5 = *param_3;
  bVar6 = DAT_1000c084 != 0;
  puVar2 = &DAT_1000c084;
  piVar4[2] = iVar5;
  if (bVar6) {
    puVar2 = (undefined4 *)(iVar5 + 4);
  }
  *puVar2 = piVar4;
  *param_3 = (int)piVar4;
  *piVar4 = uVar1 - 0x10;
  piVar3 = DAT_1000c088;
  *(undefined1 *)(piVar4 + 3) = 1;
LAB_100054cc:
  if (piVar3 == (int *)0x0) {
    DAT_1000c088 = piVar4;
    return;
  }
  return;
}

#undef DAT_1000c084
#undef DAT_1000c088
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

#undef DAT_1000c08c
#define DAT_1000c08c (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
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
 * Address: 0x10005568
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005568(char *param_1,int param_2)

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
        if (DAT_1000c08c != (undefined8 *)0x0) {
          DAT_1000c08c = (undefined8 *)((int)DAT_1000c08c + -1);
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1000c08c == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          else {
            recovered_10001da0(local_224,(undefined8 *)&DAT_1000c090,DAT_1000c08c);
            puVar2 = DAT_1000c08c;
          }
          *(undefined1 *)((int)local_224 + (int)puVar2) = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_1000c08c = (undefined8 *)0x0;
        }
        else {
          if ((int)DAT_1000c08c - 0x1ffU < 0xfffffe00) {
            recovered_10001da0(local_224,(undefined8 *)&DAT_1000c090,DAT_1000c08c);
            *(undefined1 *)((int)local_224 + (int)DAT_1000c08c) = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_1000c08c = (undefined8 *)0x0;
          }
          *(char *)(DAT_1000c08c + 0x2001812) = cVar1;
          DAT_1000c08c = (undefined8 *)((int)DAT_1000c08c + 1);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1000c08c
#undef DAT_1000c090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_1000c08c
#define DAT_1000c08c (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
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
 * Address: 0x1000574c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000574c(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)0x0;
  if (DAT_1000c08c != (undefined8 *)0x0) {
    recovered_10001da0(local_210,(undefined8 *)&DAT_1000c090,DAT_1000c08c);
    puVar1 = DAT_1000c08c;
  }
  *(undefined1 *)((int)local_210 + (int)puVar1) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_1000c08c = (undefined8 *)0x0;
  return;
}

#undef DAT_1000c08c
#undef DAT_1000c090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_1000c08c
#define DAT_1000c08c (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
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
 * Address: 0x1000580c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000580c(void)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_1000c08c == (undefined8 *)0x0) {
    return;
  }
  recovered_10001da0(auStack_214,(undefined8 *)&DAT_1000c090,DAT_1000c08c);
  *(undefined1 *)((int)auStack_214 + (int)DAT_1000c08c) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_1000c08c = (undefined8 *)0x0;
  return;
}

#undef DAT_1000c08c
#undef DAT_1000c090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000bd86
#define DAT_1000bd86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#define abStack_14c (*(byte (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c8
 */

void recovered_100058c8(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  byte *in_r2;

  in_r2 = &DAT_1000bd86;
  if (param_1 != (undefined *)0x0) {
    in_r2 = param_1;
  }
  recovered_1000534c(abStack_14c,0x140,in_r2);
  if (0 < extraout_r0) {
    recovered_10005568((char *)abStack_14c,extraout_r0);
  }
  return;
}

#undef DAT_1000bd86
#undef abStack_14c

#undef DAT_1000bda4
#define DAT_1000bda4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000bd89
#define str_1000bd89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005920
 */

void recovered_10005920(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002e30(((uintptr_t)pf_module_state + 0x61U));
  recovered_10005568(str_1000bd89,iVar1);
  iVar1 = recovered_10002e30(((uintptr_t)pf_module_state + 0x7cU));
  recovered_10005568(&DAT_1000bda4,iVar1);
  return;
}

#undef DAT_1000bda4
#undef str_1000bd89

#undef DAT_1000bda4
#define DAT_1000bda4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000bda7
#define str_1000bda7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000596c
 */

void recovered_1000596c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002e30(((uintptr_t)pf_module_state + 0x7fU));
  recovered_10005568(str_1000bda7,iVar1);
  iVar1 = recovered_10002e30(((uintptr_t)pf_module_state + 0x7cU));
  recovered_10005568(&DAT_1000bda4,iVar1);
  return;
}

#undef DAT_1000bda4
#undef str_1000bda7

#undef DAT_1000c08c
#define DAT_1000c08c (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
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
 * Address: 0x100059b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100059b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1000c08c != (undefined8 *)0x0) {
    recovered_10001da0(auStack_224,(undefined8 *)&DAT_1000c090,DAT_1000c08c);
    *(undefined1 *)((int)auStack_224 + (int)DAT_1000c08c) = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_1000c08c = (undefined8 *)0x0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_1000c08c
#undef DAT_1000c090
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
 * Address: 0x10005b0c
 */

undefined4 recovered_10005b0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b14
 */

void recovered_10005b14(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b18
 */

undefined4 recovered_10005b18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000bd86
#define DAT_1000bd86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
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
#undef str_1000be3b
#define str_1000be3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113U)))
#undef str_1000be48
#define str_1000be48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_1000be56
#define str_1000be56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12eU)))
#define local_24 (*(undefined8 * *)(frame + 28))
#define local_20 (*(undefined8 * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005b20(int param_1,int param_2)

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
    goto LAB_10005d94;
  }
  iVar2 = recovered_10002e58((byte *)param_1,(byte *)str_1000be3b);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10005d20:
    pbVar4 = recovered_10001ca8(800);
    if (pbVar4 != (byte *)0x0) {
      recovered_10002530(pbVar4,0,800);
      pbVar4[0x10c] = 0xff;
      pbVar4[0x10d] = 0xff;
      pbVar4[0x10e] = 0xff;
      pbVar4[0x10f] = 0xff;
      pbVar4[0x110] = iVar2 == 0;
      *(undefined4 *)pbVar4 = uVar7;
      pbVar4[0x111] = iVar2 != 0;
      recovered_1000534c(pbVar4 + 4,0xf1,&DAT_1000bd86);
      return (undefined4 *)pbVar4;
    }
  }
  else {
    iVar3 = recovered_10002e58((byte *)param_1,(byte *)str_1000be48);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10005d20;
    }
    iVar3 = recovered_10002e58((byte *)param_1,(byte *)str_1000be56);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10005d20;
    }
    pbVar4 = recovered_10001ca8(800);
    if (pbVar4 != (byte *)0x0) {
      recovered_10002530(pbVar4,0,800);
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pcVar5 = recovered_10003210(unaff_r8,'r');
      bVar8 = 1;
      bVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10003210(unaff_r8,'+');
        bVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10003210(unaff_r8,'a');
          bVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            bVar1 = 1;
          }
        }
      }
      pbVar4[0x110] = bVar1;
      pcVar5 = recovered_10003210(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10003210(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10003210(unaff_r8,'+');
        bVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          bVar8 = 1;
        }
      }
      pbVar4[0x111] = bVar8;
      pcVar5 = recovered_10003210(unaff_r8,'a');
      pbVar4[0x112] = pcVar5 != (char *)0x0;
      pbVar4[0x10c] = 0xff;
      pbVar4[0x10d] = 0xff;
      pbVar4[0x10e] = 0xff;
      pbVar4[0x10f] = 0xff;
      recovered_1000534c(pbVar4 + 4,0xf1,&DAT_1000bd86);
      recovered_10002530((byte *)&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10003210(unaff_r8,'w');
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
              puVar6 = recovered_10001d4c(*(void **)(pbVar4 + 0xfc),(ulong)size);
              if (puVar6 == (undefined8 *)0x0) {
                pbVar4[0x115] = 1;
                uVar7 = 0xc;
                goto LAB_10005dbc;
              }
              *(undefined8 **)(pbVar4 + 0x104) = size;
              *(undefined8 **)(pbVar4 + 0xfc) = puVar6;
              *(undefined8 **)(pbVar4 + 0xf8) = puVar6;
            }
            else {
              puVar6 = *(undefined8 **)(pbVar4 + 0xfc);
            }
            recovered_10001da0(puVar6,local_24,local_20);
          }
          else {
            *(undefined8 **)(pbVar4 + 0xf8) = local_24;
          }
          *(undefined8 **)(pbVar4 + 0x100) = local_20;
        }
      }
      else if (pbVar4[0x111] == 0) {
        uVar7 = 2;
LAB_10005dbc:
        *DAT_10010004 = uVar7;
        recovered_10001cfc(pbVar4);
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
LAB_10005d94:
  *DAT_10010004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000bd86
#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000be3b
#undef str_1000be48
#undef str_1000be56
#undef local_24
#undef local_20

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
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
 * Address: 0x10005ea4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005ea4(int param_1,int param_2,uint *param_3)

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
      recovered_10001cfc((void *)param_3[0x3f]);
    }
    recovered_10001cfc(param_3);
  }
  recovered_10005b20(param_1,param_2);
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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
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
 * Address: 0x10005fa4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005fa4(uint *param_1)

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
    recovered_10001cfc((void *)param_1[0x3f]);
  }
  recovered_10001cfc(param_1);
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
 * Address: 0x1000609c
 */

uint recovered_1000609c(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;
  uint uVar3;
  undefined8 *numerator;
  undefined1 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;

  uVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      unaff_r4 = param_4;
    }
    if ((param_1 != (undefined1 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r4[0x44] == '\x01'))
    {
      iVar2 = *unaff_r4;
      bVar8 = iVar2 == 0;
      if (bVar8) {
        iVar2 = unaff_r4[0x43];
      }
      if (bVar8 && iVar2 == -1) {
        uVar6 = unaff_r4[0x42];
        if (uVar6 < (uint)unaff_r4[0x40]) {
          puVar5 = (undefined8 *)((ulonglong)param_3 * (ulonglong)param_2);
          puVar7 = (undefined8 *)(unaff_r4[0x40] - uVar6);
          if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) != 0) {
            puVar5 = (undefined8 *)0xffffffff;
          }
          numerator = puVar5;
          if (puVar7 < puVar5) {
            numerator = puVar7;
          }
          recovered_10001da0((undefined8 *)param_1,(undefined8 *)(unaff_r4[0x3e] + uVar6),numerator)
          ;
          unaff_r4[0x42] = unaff_r4[0x42] + (int)numerator;
          if (puVar7 < puVar5) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_1000bff4((uint)numerator,param_2);
        }
        else {
          *(undefined1 *)(unaff_r4 + 0x45) = 1;
        }
      }
      else {
        do {
          puVar4 = param_1;
          uVar6 = param_2;
          do {
            uVar1 = recovered_100061c8(unaff_r4);
            if (uVar1 == 0xffffffff) {
              return uVar3;
            }
            *puVar4 = (char)uVar1;
            uVar6 = uVar6 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
          uVar3 = uVar3 + 1;
          param_1 = param_1 + param_2;
        } while (uVar3 != param_3);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


#undef DAT_1000bd5c
#define DAT_1000bd5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x364U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
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
 * Address: 0x100061c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100061c8(int *param_1)

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
LAB_10006224:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1000c08c != (undefined8 *)0x0) {
      recovered_10001da0(auStack_220,(undefined8 *)&DAT_1000c090,DAT_1000c08c);
      *(undefined1 *)((int)auStack_220 + (int)DAT_1000c08c) = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_1000c08c = (undefined8 *)0x0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      iVar3 = (int)param_1 + 0x116;
      uVar2 = 0;
      iVar1 = (*_DAT_40010844)(iVar3,0x1fe,&DAT_1000bd5c,0);
      if (iVar1 != 0) {
        iVar1 = recovered_10002e30(iVar3);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)(iVar3 + iVar1) = 10;
        *(undefined1 *)(iVar3 + param_1[0xc6]) = 0;
        goto LAB_10006224;
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

#undef DAT_1000bd5c
#undef DAT_1000c08c
#undef DAT_1000c090
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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c8
 */

int recovered_100063c8(int param_1,int param_2,int param_3,uint *param_4)

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
      recovered_10005568((char *)param_1,(int)puVar4);
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
        pvVar1 = recovered_10001d4c((void *)param_4[0x3f],size);
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
        recovered_10002530((byte *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10001da0((undefined8 *)(param_4[0x3f] + uVar2),(undefined8 *)param_1,puVar4);
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

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006540
 */

undefined4 recovered_10006540(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10006554;
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
LAB_10006554:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10010004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065f0
 */

undefined4 recovered_100065f0(int param_1)

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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
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
 * Address: 0x10006618
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006618(uint *param_1)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100066f0(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006700(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

void recovered_10006710(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000672c
 */

void recovered_1000672c(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
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
 * Address: 0x10006750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006750(int param_1)

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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
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
 * Address: 0x100067e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100067e0(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  recovered_10002530((byte *)&local_28,0,0xc);
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
#define local_20 (*(undefined8 * *)(frame + 32))
#define local_24 (*(undefined8 * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006954
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006954(int param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (uint *)0x0)) &&
      (recovered_10002530((byte *)&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    puVar2 = local_20;
    if (local_20 < (undefined8 *)0x2) {
      puVar2 = (undefined8 *)0x1;
    }
    puVar2 = recovered_10001ca8((ulong)puVar2);
    if (puVar2 != (undefined8 *)0x0) {
      if (local_20 == (undefined8 *)0x0) {
        local_20 = (undefined8 *)0x0;
      }
      else {
        recovered_10001da0(puVar2,local_24,local_20);
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
#undef local_20
#undef local_24

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
 * Address: 0x10006a54
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006a54(int param_1,int param_2,int param_3)

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
 * Address: 0x10006adc
 */

undefined4 recovered_10006adc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ae4
 */

void recovered_10006ae4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006ae8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006af0(int param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = (char *)(param_1 + -1);
  do {
    if (param_3 == 0) {
      return;
    }
    pcVar1 = pcVar1 + 1;
    param_3 = param_3 + -1;
  } while (*pcVar1 != param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af8
 */

undefined4 recovered_10006af8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b00
 */

char * recovered_10006b00(char *param_1,char param_2,int param_3)

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
 * Address: 0x10006b34
 */

int recovered_10006b34(byte *param_1,byte *param_2,int param_3)

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


#undef DAT_1000bdca
#define DAT_1000bdca (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2U)))
#undef str_1000bdcd
#define str_1000bdcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5U)))
#undef str_1000bdda
#define str_1000bdda (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2U)))
#undef str_1000bde4
#define str_1000bde4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcU)))
#undef str_1000bdf8
#define str_1000bdf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0U)))
#undef str_1000be06
#define str_1000be06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_1000be18
#define str_1000be18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1000be24
#define str_1000be24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcU)))
#undef str_1000be35
#define str_1000be35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b78
 */

char * recovered_10006b78(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000bdca;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10006b98_caseD_0;
  default:
    pcVar1 = str_1000be35;
switchD_10006b98_caseD_0:
    return pcVar1;
  case 2:
    return str_1000bdcd;
  case 5:
    return str_1000bdda;
  case 9:
    return str_1000bde4;
  case 0xc:
    return str_1000bdf8;
  case 0xd:
    return str_1000be06;
  case 0x11:
    return str_1000be18;
  case 0x16:
    return str_1000be24;
  }
}

#undef DAT_1000bdca
#undef str_1000bdcd
#undef str_1000bdda
#undef str_1000bde4
#undef str_1000bdf8
#undef str_1000be06
#undef str_1000be18
#undef str_1000be24
#undef str_1000be35

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c78
 */

void recovered_10006c78(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

undefined4 recovered_10006c80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c290
#define DAT_1000c290 (*(int *)(((uintptr_t)pf_module_state + 0x568U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c88
 */

void recovered_10006c88(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c290 = DAT_1000c290 + 1;
  return;
}

#undef DAT_1000c290

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006cb0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;

  *param_1 = unaff_r4;
  param_1[1] = unaff_r5;
  param_1[2] = unaff_r6;
  param_1[3] = unaff_r7;
  param_1[4] = unaff_r8;
  param_1[5] = unaff_r9;
  param_1[6] = unaff_r10;
  param_1[7] = unaff_r11;
  param_1[8] = (uintptr_t)(frame + 32);
  param_1[9] = unaff_lr;
  return 0;
}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006cc0(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006cd8(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


#undef DAT_10006d7c
#define DAT_10006d7c (*(int *)(0x10006d7cU))
#undef DAT_10006d80
#define DAT_10006d80 (*(int *)(0x10006d80U))
#define local_1c (*(undefined1 * *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined1 * *)(frame + 60))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_24 (*(code * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf8
 */

void recovered_10006cf8(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10006d84;
  local_20 = ((uintptr_t)pf_module_state + 0x178U);
  local_18 = (0x1cU) + 0x10006d30;
  local_38 = 1;
  recovered_10007364(&uStack_3c);
  recovered_10001c94();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10006d58);
  (*pcVar1)();
}

#undef DAT_10006d7c
#undef DAT_10006d80
#undef local_1c
#undef local_18
#undef uStack_3c
#undef local_14
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d84
 */

undefined4 recovered_10006d84(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_1000c294
#define DAT_1000c294 (*(int *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d8c
 */

void recovered_10006d8c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1000c294;
  DAT_1000c294 = param_1;
  recovered_10007200(param_1);
  return;
}

#undef DAT_1000c294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dc4
 */

void * recovered_10006dc4(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10001ca8(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001c94();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

void * recovered_10006df0(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10001ca8(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001c94();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10006edc
#define DAT_10006edc (*(int *)(0x10006edcU))
#undef DAT_10006ee0
#define DAT_10006ee0 (*(int *)(0x10006ee0U))
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
 * Address: 0x10006e1c
 */

void recovered_10006e1c(void *pointer)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006d84;
  local_78 = ((uintptr_t)pf_module_state + 0x188U);
  local_70 = (0x3cU) + 0x10006e70;
  local_90 = 1;
  recovered_10007364(&uStack_94);
  recovered_10001cfc(pointer);
  recovered_10007388(&uStack_94);
  return;
}

#undef DAT_10006edc
#undef DAT_10006ee0
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10006fa4
#define DAT_10006fa4 (*(int *)(0x10006fa4U))
#undef DAT_10006fa8
#define DAT_10006fa8 (*(int *)(0x10006fa8U))
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
 * Address: 0x10006ee4
 */

void recovered_10006ee4(void *pointer)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006d84;
  local_78 = ((uintptr_t)pf_module_state + 0x198U);
  local_70 = (0x3cU) + 0x10006f38;
  local_90 = 1;
  recovered_10007364(&uStack_94);
  recovered_10001cfc(pointer);
  recovered_10007388(&uStack_94);
  return;
}

#undef DAT_10006fa4
#undef DAT_10006fa8
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

#undef DAT_1000706c
#define DAT_1000706c (*(int *)(0x1000706cU))
#undef DAT_10007070
#define DAT_10007070 (*(int *)(0x10007070U))
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
 * Address: 0x10006fac
 */

void recovered_10006fac(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006d84;
  local_78 = ((uintptr_t)pf_module_state + 0x1a8U);
  local_70 = (0x3cU) + 0x10007000;
  local_90 = 1;
  recovered_10007364(&uStack_94);
  recovered_10001cfc(param_1);
  recovered_10007388(&uStack_94);
  return;
}

#undef DAT_1000706c
#undef DAT_10007070
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10007134
#define DAT_10007134 (*(int *)(0x10007134U))
#undef DAT_10007138
#define DAT_10007138 (*(int *)(0x10007138U))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007074
 */

void recovered_10007074(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006d84;
  local_78 = ((uintptr_t)pf_module_state + 0x1b8U);
  local_70 = (0x3cU) + 0x100070c8;
  local_90 = 1;
  recovered_10007364(&uStack_94);
  recovered_10001cfc(param_1);
  recovered_10007388(&uStack_94);
  return;
}

#undef DAT_10007134
#undef DAT_10007138
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000713c
 */

undefined4 recovered_1000713c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007144(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007154
 */

void recovered_10007154(uint *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *in_r0 = *in_r0 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007164
 */

void recovered_10007164(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007168
 */

undefined4 * recovered_10007168(uint param_1)

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
  puVar1 = recovered_10001ca8(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006cf8();
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
      if (size == uVar6) goto LAB_100071e4;
    }
    iVar3 = (param_1 - uVar6) + 0x1c;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_100071e4:
  return puVar1 + 7;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100071f0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007200
 */

int recovered_10007200(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}


#undef DAT_1000c294
#define DAT_1000c294 (*(void * *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007208
 */

void recovered_10007208(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  undefined4 uVar2;

  pointer = DAT_1000c294;
  if (DAT_1000c294 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_1000c294 + 0x18);
  uVar2 = *(undefined4 *)((int)DAT_1000c294 + 8);
  *(undefined4 *)((int)DAT_1000c294 + 8) = 0;
  DAT_1000c294 = (void *)uVar2;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_10001cfc(pointer);
  return;
}

#undef DAT_1000c294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007270
 */

void recovered_10007270(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  recovered_10007298((undefined4 *)(param_1 + -0x1c));
  return;
}


#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_1000c298
#define DAT_1000c298 (*(int * *)(((uintptr_t)pf_module_state + 0x570U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007298
 */

void recovered_10007298(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_1000c298 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_1000c298;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_10007bb0((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[4] = local_24;
        param_1[3] = piVar2;
        param_1[5] = local_20;
        recovered_1000741c(param_1);
        puVar3 = DAT_1000c294;
                    /* WARNING: Subroutine does not return */
        if (DAT_1000c294 == (undefined4 *)0x0) {
          recovered_10006cf8();
        }
        DAT_1000c294[5] = 0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 6) = 1;
        recovered_10007298(puVar3);
        *extraout_r0 = (int)DAT_1000c298;
        DAT_1000c298 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006cf8();
}

#undef DAT_1000c294
#undef DAT_1000c298
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_1000c298
#define DAT_1000c298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000732c
 */

void recovered_1000732c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_1000c294;
                    /* WARNING: Subroutine does not return */
  if (DAT_1000c294 == (undefined4 *)0x0) {
    recovered_10006cf8();
  }
  DAT_1000c294[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  recovered_10007298(puVar1);
  *extraout_r0 = DAT_1000c298;
  DAT_1000c298 = extraout_r0;
  return;
}

#undef DAT_1000c294
#undef DAT_1000c298

#undef DAT_1000c298
#define DAT_1000c298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007364
 */

void recovered_10007364(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c298;
  DAT_1000c298 = param_1;
  return;
}

#undef DAT_1000c298

#undef DAT_1000c298
#define DAT_1000c298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007388
 */

void recovered_10007388(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000c298;
  if (DAT_1000c298 == param_1) {
    puVar2 = &DAT_1000c298;
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

#undef DAT_1000c298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

void recovered_100073d0(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007298(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_10006cf8();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073dc
 */

void recovered_100073dc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006cf8();
}


#undef DAT_1000c298
#define DAT_1000c298 (*(int * *)(((uintptr_t)pf_module_state + 0x570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073e8
 */

void recovered_100073e8(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1000c298 != (int *)0x0) {
    DAT_1000c298 = (int *)*DAT_1000c298;
  }
  recovered_1000741c(param_1);
  return;
}

#undef DAT_1000c298

#undef DAT_1000c298
#define DAT_1000c298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x570U)))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000741c
 */

void recovered_1000741c(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;

  if (DAT_1000c298 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)param_1[3];
    do {
      puVar1 = DAT_1000c298;
      if (DAT_1000c298 == puVar5) {
        uVar4 = param_1[5];
        uVar3 = param_1[4];
        DAT_1000c298[2] = param_1;
        puVar1[3] = uVar4;
LAB_100074d0:
        puVar1[1] = uVar3;
        puVar5 = (undefined4 *)recovered_10006cb0(puVar1);
                    /* WARNING: Subroutine does not return */
        recovered_100073e8(puVar5);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_10007bb0((int)DAT_1000c298,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        puVar1[3] = 0;
        puVar1[2] = param_1;
        uVar3 = local_2c;
        goto LAB_100074d0;
      }
      DAT_1000c298 = (undefined4 *)*puVar1;
    } while (DAT_1000c298 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006cf8();
}

#undef DAT_1000c298
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074dc
 */

void recovered_100074dc(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100073e8(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e8
 */

undefined4 recovered_100074e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074f0
 */

void recovered_100074f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006cf8();
}


#undef DAT_1000c068
#define DAT_1000c068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x340U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074fc
 */

int recovered_100074fc(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_100075e8:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_100075e8;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_1000c068) {
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

#undef DAT_1000c068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

void recovered_100075f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f4
 */

undefined4 recovered_100075f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075fc
 */

bool recovered_100075fc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

bool recovered_10007610(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007650
 */

bool recovered_10007650(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000767c
 */

bool recovered_1000767c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007698
 */

bool recovered_10007698(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076b4
 */

bool recovered_100076b4(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076d0
 */

bool recovered_100076d0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_100077c0
#define DAT_100077c0 (*(double *)(0x100077c0U))
#undef DAT_100077c8
#define DAT_100077c8 (*(double *)(0x100077c8U))
#undef DAT_100077d0
#define DAT_100077d0 (*(double *)(0x100077d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f0
 */

double recovered_100076f0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar3)) {
    return pf_bits_double(CONCAT44(param_2,param_1));
  }
  if (dVar3 <= pf_bits_double(0x40862e42fefa39efULL)) {
    dVar4 = 0.0;
    if (pf_bits_double(0xc0874910d52d3051ULL) <= dVar3) {
      iVar1 = 0;
      for (; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
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
    }
    return dVar4;
  }
  return pf_bits_double(0x7ff0000000000000ULL);
}

#undef DAT_100077c0
#undef DAT_100077c8
#undef DAT_100077d0

#undef DAT_100078c0
#define DAT_100078c0 (*(double *)(0x100078c0U))
#undef DAT_100078c8
#define DAT_100078c8 (*(double *)(0x100078c8U))
#undef DAT_100078d0
#define DAT_100078d0 (*(double *)(0x100078d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d8
 */

float recovered_100077d8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = (double)param_1;
  if (NAN(param_1)) {
    dVar4 = dVar3;
  }
  else if (dVar3 <= pf_bits_double(0x40862e42fefa39efULL)) {
    dVar4 = 0.0;
    if (pf_bits_double(0xc0874910d52d3051ULL) <= dVar3) {
      iVar1 = 0;
      if (0.5 < param_1) {
        do {
          dVar3 = dVar3 * 0.5;
          iVar1 = iVar1 + 1;
        } while (0.5 < dVar3);
      }
      for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
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
    }
  }
  else {
    dVar4 = pf_bits_double(0x7ff0000000000000ULL);
  }
  return (float)dVar4;
}

#undef DAT_100078c0
#undef DAT_100078c8
#undef DAT_100078d0

#undef DAT_100079a8
#define DAT_100079a8 (*(double *)(0x100079a8U))
#undef DAT_100079b0
#define DAT_100079b0 (*(double *)(0x100079b0U))
#undef DAT_100079b8
#define DAT_100079b8 (*(double *)(0x100079b8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078d8
 */

double recovered_100078d8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar3)) {
    return pf_bits_double(CONCAT44(param_2,param_1));
  }
  if (dVar3 <= pf_bits_double(0x40862e42fefa39efULL)) {
    dVar4 = 0.0;
    if (pf_bits_double(0xc0874910d52d3051ULL) <= dVar3) {
      iVar1 = 0;
      for (; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
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
    }
    return dVar4;
  }
  return pf_bits_double(0x7ff0000000000000ULL);
}

#undef DAT_100079a8
#undef DAT_100079b0
#undef DAT_100079b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079c0
 */

double recovered_100079c0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  double dVar1;
  double dVar2;

  dVar1 = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return dVar2 - dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079dc
 */

double recovered_100079dc(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100035f0(param_1,param_2);
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
 * Address: 0x10007a34
 */

ulonglong recovered_10007a34(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10007aa0;
    }
  }
  bVar1 = false;
joined_r0x10007aa0:
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
 * Address: 0x10007bac
 */

ulonglong recovered_10007bac(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10007aa0;
    }
  }
  bVar1 = false;
joined_r0x10007aa0:
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


#undef DAT_1000bfc0
#define DAT_1000bfc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x340U)))
#define local_28 (*(byte * *)(frame + 24))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bb0
 */

undefined4 recovered_10007bb0(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_10007f64((uint)*pbVar10,&local_28);
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
          goto LAB_10007d88;
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
LAB_10007d88:
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
LAB_10007f44:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000bfc0 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10007f64(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_10007f44;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10007f44;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10007f44;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_1000c068) goto LAB_10007f18;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_10007f44;
  }
LAB_10007f18:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10007d88;
}

#undef DAT_1000bfc0
#undef DAT_1000c068
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f64
 */

undefined4 * recovered_10007f64(uint param_1,undefined4 *param_2)

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
      goto switchD_10007f94_caseD_5;
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
switchD_10007f94_caseD_5:
  return puVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100080f8(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008108
 */

undefined4 * recovered_10008108(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return (undefined4 *)param_1;
}


#undef DAT_10008328
#define DAT_10008328 (*(int *)(0x10008328U))
#undef DAT_1000832c
#define DAT_1000832c (*(int *)(0x1000832cU))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define local_a8 (*(int *)(frame + 40))
#define local_a4 (*(short *)(frame + 44))
#define local_a0 (*(void * *)(frame + 48))
#define auStack_c0 (*(undefined1 (*)[10])(frame + 16))
#define local_9c (*(undefined1 * *)(frame + 52))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b6 (*(undefined2 *)(frame + 26))
#define local_b4 (*(void * *)(frame + 28))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_ac (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008118
 */

undefined4 * recovered_10008118(int param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  undefined4 *puVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  puVar3 = (undefined4 *)0x0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = (void *)0x0;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x1c8U);
  local_70 = (0x134U) + 0x10008184;
  recovered_10007364(&uStack_94);
  if (param_1 != 0) {
    local_b6 = 2;
    local_90 = 1;
    local_98 = 0;
    local_9c = (undefined1 *)0x0;
    local_a0 = (void *)0x0;
    piVar1 = recovered_10009b48(param_1,(int *)&local_a0);
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      local_90 = 2;
      iVar2 = recovered_10009f18((int)local_a0,local_9c,&local_b4,(uint *)&local_b6);
    }
    puVar3 = (undefined4 *)0x0;
    local_9c = (undefined1 *)0x0;
    recovered_10006e1c(local_a0);
    if (((iVar2 != 0) && (local_a4 == 2)) && (local_a8 != 0)) {
      local_90 = 3;
      puVar3 = recovered_10006dc4(0x18);
      puVar3[4] = 0;
      recovered_10006e1c((void *)0x0);
      puVar3[5] = 0;
      *puVar3 = local_b4;
      puVar3[1] = local_b0;
      puVar3[2] = local_ac;
      puVar3[3] = local_a8;
      *(short *)(puVar3 + 4) = local_a4;
      local_ac = 0;
      local_b4 = (void *)0x0;
    }
  }
  local_b0 = 0;
  recovered_10006e1c(local_b4);
  recovered_10007388(&uStack_94);
  return puVar3;
}

#undef DAT_10008328
#undef DAT_1000832c
#undef DAT_10010008
#undef local_a8
#undef local_a4
#undef local_a0
#undef auStack_c0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68
#undef local_b6
#undef local_b4
#undef local_b0
#undef local_ac

/* Recovered track generator; Pooka's Free Software License. */
long * recovered_10008330(uint frequency,uint duration,long waveform,uintptr_t side) {
 struct track { short *samples; unsigned long count,capacity; uint rate; ushort channels; unsigned long mixer; };
 const char *wave=(const char *)waveform,*channel=(const char *)(uintptr_t)side;
 if((int)(frequency|duration)<0||!wave||!channel)return 0;
 const char *waves[3]={"square","sine","saw"},*channels[3]={"left","right","both"};
 int kind=-1,mode=-1;
 for(int k=0;k<3;++k){unsigned i=0;while(wave[i]&&wave[i]==waves[k][i])++i;if(wave[i]==waves[k][i])kind=k;}
 for(int k=0;k<3;++k){unsigned i=0;while(channel[i]&&channel[i]==channels[k][i])++i;if(channel[i]==channels[k][i])mode=k;}
 if(kind<0||mode<0)return 0;
 struct track *out=(struct track *)recovered_10006dc4(sizeof(struct track));
 if(!out)return 0;
 out->samples=0;out->count=out->capacity=0;out->rate=44100;out->channels=2;out->mixer=0;
 unsigned long frames=(unsigned long)((long double)duration*44100.0L/1000.0L+0.5L);
 if(!frames)return (long *)out;
 out->samples=(short *)recovered_10006dc4(frames*4);
 if(!out->samples){recovered_10006e1c(out);return 0;}
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
 * Address: 0x10008af8
 */

int recovered_10008af8(void *track,void *view)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  int in_r12;

  if (view == (void *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)view + 8) = 0;
  *(undefined2 *)((int)view + 0x10) = 0;
  *(undefined4 *)((int)view + 0xc) = 0;
  *(undefined4 *)view = 0;
  *(int *)((int)view + 4) = 0;
  if (track == (void *)0x0) {
    return 0;
  }
  iVar2 = *(int *)((int)track + 4);
  if (iVar2 != 0) {
    in_r12 = *(int *)((int)track + 0xc);
  }
  if (iVar2 != 0 && in_r12 != 0) {
    sVar1 = *(short *)((int)track + 0x10);
    if (sVar1 == 0) {
      return 0;
    }
    *(int *)((int)view + 4) = iVar2;
    *(undefined4 *)((int)view + 8) = 0;
    *(undefined4 *)view = *(undefined4 *)track;
    *(short *)((int)view + 0x10) = sVar1;
    *(int *)((int)view + 0xc) = in_r12;
    return 1;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b80
 */

void recovered_10008b80(ushort *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0 || param_2 == 0) {
    return;
  }
  recovered_10008ba0(param_2,param_1);
  return;
}


#undef DAT_10008e18
#define DAT_10008e18 (*(int *)(0x10008e18U))
#undef DAT_10008e1c
#define DAT_10008e1c (*(int *)(0x10008e1cU))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define local_d4 (*(int *)(frame + 28))
#define local_d0 (*(uint *)(frame + 32))
#define local_cc (*(uint * *)(frame + 36))
#define local_c8 (*(bool *)(frame + 40))
#define local_c4 (*(undefined4 *)(frame + 44))
#define local_c0 (*(undefined4 *)(frame + 48))
#define local_bc (*(uint * *)(frame + 52))
#define local_b8 (*(undefined4 *)(frame + 56))
#define local_b4 (*(undefined1 *)(frame + 60))
#define local_b0 (*(undefined4 *)(frame + 64))
#define local_ac (*(undefined1 *)(frame + 68))
#define local_a8 (*(undefined4 *)(frame + 72))
#define local_a4 (*(undefined1 *)(frame + 76))
#define local_a0 (*(undefined8 * *)(frame + 80))
#define local_9c (*(int *)(frame + 84))
#define local_98 (*(undefined4 *)(frame + 88))
#define local_90 (*(undefined4 *)(frame + 96))
#define auStack_e0 (*(undefined1 (*)[12])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(int *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ba0
 */

uint recovered_10008ba0(int param_1,ushort *param_2)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x1e4U);
  local_70 = (0x194U) + 0x10008bf8;
  recovered_10007364(&uStack_94);
  if (param_1 == 0) {
    uVar2 = 0;
    goto LAB_10008d68;
  }
  local_d0 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (undefined8 *)0x0;
  local_90 = 1;
  local_d4 = param_1;
  iVar1 = recovered_1000ae14(param_2,&local_a0);
  if (iVar1 != 0) {
    local_a4 = 0x20;
    local_c0 = 0;
    local_c4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_bc = (uint *)0x0;
    local_cc = (uint *)0x0;
    local_c8 = false;
    local_b0 = 10;
    local_90 = 2;
    local_cc = recovered_10005b20(local_d4,((uintptr_t)pf_module_state + 0x13cU));
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = local_cc != (uint *)0x0;
    local_b8 = 0;
    local_bc = local_cc;
    if (local_cc == (uint *)0x0) {
      local_d0 = 0;
      local_c8 = false;
    }
    else {
      if ((local_a0 == (undefined8 *)0x0) && (local_9c != 0)) {
        uVar2 = 0;
        local_c8 = false;
      }
      else {
        local_d0 = 0;
        local_90 = 3;
        local_d4 = local_9c;
        iVar1 = recovered_100063c8((int)local_a0,1,local_9c,local_cc);
        local_c8 = iVar1 == local_d4;
        uVar2 = (uint)local_c8;
        if (local_cc == (uint *)0x0) goto LAB_10008d54;
      }
      local_90 = 4;
      local_d0 = uVar2;
      recovered_10005fa4(local_cc);
    }
  }
LAB_10008d54:
  local_9c = 0;
  recovered_10006e1c(local_a0);
  uVar2 = local_d0;
LAB_10008d68:
  recovered_10007388(&uStack_94);
  return uVar2;
}

#undef DAT_10008e18
#undef DAT_10008e1c
#undef DAT_10010008
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
#undef local_90
#undef auStack_e0
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10009260
#define DAT_10009260 (*(double *)(0x10009260U))
#undef DAT_10009268
#define DAT_10009268 (*(double *)(0x10009268U))
#undef DAT_10009270
#define DAT_10009270 (*(double *)(0x10009270U))
#undef DAT_10009278
#define DAT_10009278 (*(double *)(0x10009278U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e20
 */

undefined4 recovered_10008e20(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  undefined2 extraout_r0 = 0;
  undefined2 extraout_r0_00 = 0;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint unaff_r8;
  uint uVar11;
  float value;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  undefined4 extraout_s1 = 0;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong lVar22;
  double dVar23;

  uVar2 = 0;
  if (param_1 == (int *)0x0 || param_2 == (int *)0x0) {
    return 0;
  }
  if (param_4 < 0) {
    return 0;
  }
  uVar8 = (uint)*(ushort *)(param_1 + 4);
  bVar12 = uVar8 == 2;
  if (bVar12) {
    uVar8 = (uint)*(ushort *)(param_2 + 4);
  }
  if (bVar12 && uVar8 == 2) {
    iVar6 = param_1[3];
    if (iVar6 != 0) {
      uVar8 = param_2[3];
    }
    if (iVar6 != 0 && uVar8 != 0) {
      uVar8 = param_1[1];
      uVar2 = 1;
      if (1 < uVar8) {
        unaff_r8 = param_2[1];
      }
      if (1 < uVar8 && 1 < unaff_r8) {
        if (param_3 == 0 && param_4 == 0) {
          uVar11 = 0;
        }
        else {
          dVar21 = recovered_10003af8(param_3,param_4);
          dVar15 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          dVar15 = (pf_bits_double(((pf_double_bits(dVar21) & 0xffffffff00000000) +
                            (pf_double_bits(dVar21) & 0xffffffff))) * dVar15) / pf_bits_double(0x408f400000000000ULL);
          uVar11 = in_fpscr & 0xfffffff | (uint)(dVar15 < pf_bits_double(0x41dfffffffc00000ULL)) << 0x1f;
          in_fpscr = uVar11 | (uint)(NAN(dVar15) || NAN(pf_bits_double(0x41dfffffffc00000ULL))) << 0x1c;
          if ((byte)(uVar11 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            return 1;
          }
          lVar22 = recovered_1000bffc(pf_bits_double(CONCAT44(extraout_s1,iVar6)));
          uVar11 = (uint)lVar22;
        }
        uVar2 = 1;
        if (uVar11 < uVar8 >> 1) {
          dVar16 = (double)VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
          dVar18 = (double)VectorUnsignedToFloat(param_2[3],(byte)(in_fpscr >> 0x16) & 3);
          dVar15 = (double)VectorUnsignedToFloat(unaff_r8 >> 1,(byte)(in_fpscr >> 0x16) & 3);
          dVar15 = dVar15 / (dVar18 / dVar16);
          dVar23 = recovered_10003620(SUB84(dVar15,0),(int)(pf_double_bits(dVar15) >> 0x20));
          dVar21 = pf_bits_double(0x40dfffc000000000ULL);
          dVar15 = pf_bits_double(0xc0e0000000000000ULL);
          uVar8 = (uVar8 >> 1) - uVar11;
          uVar13 = VectorFloatToUnsigned
                             ((pf_double_bits(dVar23) & 0xffffffff00000000) +
                              (pf_double_bits(dVar23) & 0xffffffff),3);
          if (uVar13 < uVar8) {
            uVar8 = uVar13;
          }
          if (uVar8 != 0) {
            iVar9 = *param_1;
            iVar6 = uVar11 << 2;
            uVar11 = 0;
            dVar23 = 0.0;
            do {
              dVar14 = (dVar18 / dVar16) * dVar23;
              uVar13 = (uint)*(ushort *)(param_2 + 4);
              sVar1 = *(short *)(iVar9 + iVar6);
              dVar17 = 0.0;
              uVar2 = (undefined4)(pf_double_bits(dVar14) >> 0x20);
              if (((uVar13 != 0) && (in_fpscr = in_fpscr & 0xfffffff, 0.0 <= dVar14)) &&
                 (uVar10 = param_2[1], uVar10 != 0)) {
                uVar3 = recovered_1000bff4(uVar10,uVar13);
                dVar17 = 0.0;
                if (uVar13 <= uVar10) {
                  dVar17 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
                  uVar13 = in_fpscr & 0xfffffff | (uint)(dVar14 < dVar17) << 0x1f;
                  in_fpscr = uVar13 | (uint)(NAN(dVar14) || NAN(dVar17)) << 0x1c;
                  dVar17 = 0.0;
                  if ((byte)(uVar13 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                    dVar17 = recovered_100035f0(SUB84(dVar14,0),uVar2);
                    iVar9 = VectorFloatToUnsigned
                                      ((pf_double_bits(dVar17) & 0xffffffff00000000) +
                                       (pf_double_bits(dVar17) & 0xffffffff),3);
                    dVar19 = (double)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
                    uVar13 = iVar9 + 1U;
                    if (uVar3 - 1 < iVar9 + 1U) {
                      uVar13 = uVar3 - 1;
                    }
                    dVar17 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                        (uint)*(ushort *)
                                                                               (param_2 + 4) * iVar9
                                                                        * 2),
                                                         (byte)(in_fpscr >> 0x16) & 3);
                    dVar20 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                        uVar13 * *(ushort *)
                                                                                  (param_2 + 4) * 2)
                                                         ,(byte)(in_fpscr >> 0x16) & 3);
                    dVar17 = dVar17 + (dVar20 - dVar17) * (dVar14 - dVar19);
                  }
                }
              }
              uVar5 = 0x8000;
              dVar19 = (double)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
              dVar17 = dVar17 + dVar19;
              uVar10 = in_fpscr & 0xfffffff | (uint)(dVar17 == dVar15) << 0x1e;
              uVar13 = uVar10 | (uint)(dVar15 <= dVar17) << 0x1d;
              if ((bool)((byte)(uVar13 >> 0x1d) & 1) && !SUB41(uVar10 >> 0x1e,0)) {
                uVar10 = in_fpscr & 0xfffffff | (uint)(dVar17 < dVar21) << 0x1f;
                uVar13 = uVar10 | (uint)(NAN(dVar17) || NAN(dVar21)) << 0x1c;
                uVar5 = 0x7fff;
                if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar13 >> 0x1c) & 1)) {
                  recovered_10004074(SUB84(dVar17,0),(int)(pf_double_bits(dVar17) >> 0x20),
                                     (float)(int)sVar1);
                  uVar5 = extraout_r0;
                }
              }
              iVar9 = *param_1;
              dVar17 = 0.0;
              *(undefined2 *)(iVar9 + iVar6) = uVar5;
              uVar10 = (uint)*(ushort *)(param_2 + 4);
              value = (float)(int)(short)((undefined2 *)(iVar9 + iVar6))[1];
              if (((uVar10 != 0) && (uVar3 = param_2[1], uVar3 != 0 && uVar10 != 1)) &&
                 ((uVar13 = uVar13 & 0xfffffff, 0.0 <= dVar14 &&
                  (uVar4 = recovered_1000bff4(uVar3,uVar10), uVar10 <= uVar3)))) {
                dVar19 = (double)VectorUnsignedToFloat(uVar4,(byte)(uVar13 >> 0x16) & 3);
                uVar10 = uVar13 & 0xfffffff | (uint)(dVar14 < dVar19) << 0x1f;
                uVar13 = uVar10 | (uint)(NAN(dVar14) || NAN(dVar19)) << 0x1c;
                if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar13 >> 0x1c) & 1)) {
                  dVar17 = recovered_100035f0(SUB84(dVar14,0),uVar2);
                  iVar9 = VectorFloatToUnsigned
                                    ((pf_double_bits(dVar17) & 0xffffffff00000000) +
                                     (pf_double_bits(dVar17) & 0xffffffff),3);
                  dVar19 = (double)VectorUnsignedToFloat(iVar9,(byte)(uVar13 >> 0x16) & 3);
                  uVar10 = iVar9 + 1U;
                  if (uVar4 - 1 < iVar9 + 1U) {
                    uVar10 = uVar4 - 1;
                  }
                  dVar17 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                       (uint)*(ushort *)
                                                                              (param_2 + 4) * iVar9
                                                                       * 2 + 2),
                                                       (byte)(uVar13 >> 0x16) & 3);
                  dVar20 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                       uVar10 * *(ushort *)
                                                                                 (param_2 + 4) * 2 +
                                                                      2),(byte)(uVar13 >> 0x16) & 3)
                  ;
                  dVar17 = dVar17 + (dVar20 - dVar17) * (dVar14 - dVar19);
                }
              }
              uVar5 = 0x8000;
              dVar14 = (double)VectorSignedToFloat(value,(byte)(uVar13 >> 0x16) & 3);
              dVar17 = dVar17 + dVar14;
              uVar10 = uVar13 & 0xfffffff | (uint)(dVar17 == dVar15) << 0x1e;
              in_fpscr = uVar10 | (uint)(dVar15 <= dVar17) << 0x1d;
              if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar10 >> 0x1e,0)) {
                uVar13 = uVar13 & 0xfffffff | (uint)(dVar17 < dVar21) << 0x1f;
                in_fpscr = uVar13 | (uint)(NAN(dVar17) || NAN(dVar21)) << 0x1c;
                uVar5 = 0x7fff;
                if ((byte)(uVar13 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                  recovered_10004074(SUB84(dVar17,0),(int)(pf_double_bits(dVar17) >> 0x20),value);
                  uVar5 = extraout_r0_00;
                }
              }
              dVar23 = dVar23 + 1.0;
              iVar9 = *param_1;
              uVar11 = uVar11 + 1;
              iVar7 = iVar9 + iVar6;
              iVar6 = iVar6 + 4;
              *(undefined2 *)(iVar7 + 2) = uVar5;
            } while (uVar11 < uVar8);
          }
          uVar2 = 1;
          param_1[5] = 0;
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_10009260
#undef DAT_10009268
#undef DAT_10009270
#undef DAT_10009278

#undef DAT_10009530
#define DAT_10009530 (*(double *)(0x10009530U))
#undef DAT_10009538
#define DAT_10009538 (*(double *)(0x10009538U))
#undef DAT_10009540
#define DAT_10009540 (*(int *)(0x10009540U))
#undef DAT_10009544
#define DAT_10009544 (*(int *)(0x10009544U))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define auStack_b0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(void ** *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(void * *)(frame + 36))
#define local_98 (*(void * *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009280
 */

undefined4 recovered_10009280(void **param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void **ppvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 extraout_s1 = 0;
  undefined4 extraout_s1_00 = 0;
  double dVar8;
  double dVar9;
  longlong lVar10;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x1f8U);
  local_70 = (0x204U) + 0x100092e0;
  recovered_10007364(&uStack_94);
  uVar6 = 0;
  if ((((int)(param_5 - (param_3 + (param_4 < param_2))) < 0 ==
        (SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2)))) &&
      (param_1 != (void **)0x0)) && (pvVar3 = (void *)(param_5 | param_3), -1 < (int)pvVar3)) {
    uVar5 = (uint)*(ushort *)(param_1 + 4);
    if (uVar5 != 0) {
      pvVar3 = param_1[3];
      local_a8 = pvVar3;
    }
    if (uVar5 != 0 && pvVar3 != (void *)0x0) {
      local_a4 = param_1;
      uVar4 = recovered_1000bff4((uint)param_1[1],uVar5);
      uVar5 = 0;
      if ((int)param_3 < (int)(uint)(param_2 == 0)) {
        uVar7 = 0;
        pvVar3 = local_a8;
      }
      else {
        dVar9 = recovered_10003af8(param_2,param_3);
        uVar7 = 0x7fffffff;
        dVar8 = (double)VectorUnsignedToFloat(local_a8,(byte)(in_fpscr >> 0x16) & 3);
        dVar8 = (pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)))
                * dVar8) / pf_bits_double(0x408f400000000000ULL);
        uVar1 = in_fpscr & 0xfffffff | (uint)(dVar8 < pf_bits_double(0x41dfffffffc00000ULL)) << 0x1f;
        in_fpscr = uVar1 | (uint)(NAN(dVar8) || NAN(pf_bits_double(0x41dfffffffc00000ULL))) << 0x1c;
        pvVar3 = local_a8;
        if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
          local_90 = 0xffffffff;
          lVar10 = recovered_1000bffc(pf_bits_double(CONCAT44(extraout_s1,local_a8)));
          uVar7 = (uint)lVar10;
          pvVar3 = local_a4[3];
        }
      }
      if (((int)(uint)(param_4 == 0) <= (int)param_5) && (pvVar3 != (void *)0x0)) {
        dVar9 = recovered_10003af8(param_4,param_5);
        uVar5 = 0x7fffffff;
        dVar8 = (double)VectorUnsignedToFloat(pvVar3,(byte)(in_fpscr >> 0x16) & 3);
        if ((pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff))) *
            dVar8) / pf_bits_double(0x408f400000000000ULL) < pf_bits_double(0x41dfffffffc00000ULL)) {
          local_90 = 0xffffffff;
          lVar10 = recovered_1000bffc(pf_bits_double(CONCAT44(extraout_s1_00,pvVar3)));
          uVar5 = (uint)lVar10;
        }
      }
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      local_90 = 1;
      local_98 = (void *)0x0;
      local_a0 = (void *)0x0;
      local_9c = (void *)0x0;
      recovered_1000ba98(&local_a0,0,
                         (undefined8 *)((int)*local_a4 + uVar7 * *(ushort *)(local_a4 + 4) * 2),
                         (undefined8 *)((int)*local_a4 + uVar5 * *(ushort *)(local_a4 + 4) * 2));
      ppvVar2 = local_a4;
      if (&local_a0 != local_a4) {
        local_a4[1] = (void *)0x0;
        recovered_10006e1c(*local_a4);
        *ppvVar2 = local_a0;
        ppvVar2[1] = local_9c;
        ppvVar2[2] = local_98;
        local_98 = (void *)0x0;
        local_a0 = (void *)0x0;
      }
      ppvVar2[5] = (void *)0x0;
      local_9c = (void *)0x0;
      recovered_10006e1c(local_a0);
      uVar6 = 1;
    }
  }
  recovered_10007388(&uStack_94);
  return uVar6;
}

#undef DAT_10009530
#undef DAT_10009538
#undef DAT_10009540
#undef DAT_10009544
#undef DAT_10010008
#undef auStack_b0
#undef uStack_94
#undef auStack_68
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

#define iStack_30 (*(int *)(frame + 32))
#define iStack_2c (*(int *)(frame + 36))
#define iStack_28 (*(int *)(frame + 40))
#define local_34 (*(int *)(frame + 28))
#define local_24 (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009548
 */

undefined4 recovered_10009548(int *param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  float fVar2;
  uint extraout_r1 = 0;
  uint denominator;
  undefined4 uVar3;
  double dVar4;

  uVar3 = 0;
  if (param_1 != (int *)0x0) {
    dVar4 = pf_bits_double(CONCAT44(param_3,param_2));
    bVar1 = recovered_100076d0(param_2,param_3);
    if ((0.0 < dVar4) && (bVar1)) {
      uVar3 = 1;
      denominator = extraout_r1;
      if (dVar4 != 1.0) {
        denominator = (uint)*(ushort *)(param_1 + 4);
      }
      if ((dVar4 != 1.0 && denominator != 0) && (denominator <= (uint)param_1[1])) {
        fVar2 = (float)recovered_1000bff4(param_1[1],denominator);
        recovered_10009620(param_2,param_3,&local_34,param_1,fVar2);
        param_1[1] = 0;
        recovered_10006e1c((void *)*param_1);
        *param_1 = local_34;
        param_1[1] = iStack_30;
        param_1[2] = iStack_2c;
        param_1[3] = iStack_28;
        *(undefined2 *)(param_1 + 4) = local_24;
        recovered_10006e1c((void *)0x0);
        param_1[5] = 0;
      }
    }
  }
  return uVar3;
}

#undef iStack_30
#undef iStack_2c
#undef iStack_28
#undef local_34
#undef local_24

#undef DAT_100099d8
#define DAT_100099d8 (*(double *)(0x100099d8U))
#undef DAT_100099e0
#define DAT_100099e0 (*(double *)(0x100099e0U))
#undef DAT_100099e8
#define DAT_100099e8 (*(int *)(0x100099e8U))
#undef DAT_100099ec
#define DAT_100099ec (*(int *)(0x100099ecU))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define local_b4 (*(undefined4 *)(frame + 28))
#define local_b0 (*(float *)(frame + 32))
#define local_ac (*(int *)(frame + 36))
#define local_a8 (*(uint *)(frame + 40))
#define local_a4 (*(int * *)(frame + 44))
#define local_a0 (*(uint *)(frame + 48))
#define local_9c (*(undefined4 * *)(frame + 52))
#define local_98 (*(undefined8 * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_c0 (*(float *)(frame + 16))
#define local_bc (*(float *)(frame + 20))
#define local_b8 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009620
 */

void recovered_10009620(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4,
                       float param_5)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined2 uVar5;
  undefined2 extraout_r0 = 0;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint in_fpscr;
  float extraout_s0 = 0;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  puVar11 = (undefined8 *)0x0;
  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  *param_3 = 0;
  param_3[1] = 0;
  local_7c = DAT_10010008;
  iVar14 = param_4[3];
  uVar1 = *(ushort *)(param_4 + 4);
  uVar13 = (uint)uVar1;
  local_78 = ((uintptr_t)pf_module_state + 0x200U);
  param_3[2] = 0;
  param_3[3] = iVar14;
  *(ushort *)(param_3 + 4) = uVar1;
  local_70 = (0x2b8U) + 0x100096b4;
  local_a4 = param_4;
  local_9c = param_3;
  recovered_10007364(&uStack_94);
  uVar8 = uVar13 * (int)param_5;
  local_c0 = param_5;
  local_a8 = uVar13;
  if (uVar8 == 0) goto LAB_10009768;
  local_90 = 1;
  local_a0 = uVar8;
  puVar11 = recovered_10006dc4(uVar8 * 2);
  recovered_10006e1c((void *)0x0);
  *local_9c = puVar11;
  local_9c[2] = local_a0;
  uVar13 = 0;
  if (local_a0 < 8) {
LAB_10009740:
    iVar14 = local_a0 - uVar13;
    puVar9 = (undefined2 *)((int)puVar11 + uVar13 * 2);
    do {
      *puVar9 = 0;
      iVar14 = iVar14 + -1;
      puVar9 = puVar9 + 1;
    } while (iVar14 != 0);
  }
  else {
    uVar13 = local_a0 & 0xfffffff8;
    uVar8 = uVar13;
    puVar10 = puVar11;
    do {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = puVar10 + 2;
      uVar8 = uVar8 - 8;
    } while (uVar8 != 0);
    if (local_a0 != uVar13) goto LAB_10009740;
  }
  local_9c[1] = local_a0;
  iVar14 = local_a4[3];
  uVar13 = (uint)*(ushort *)(local_a4 + 4);
LAB_10009768:
  dVar4 = pf_bits_double(0x40dfffc000000000ULL);
  dVar3 = pf_bits_double(0xc0e0000000000000ULL);
  uVar12 = in_fpscr & 0xfffffff | (uint)(dVar2 == 0.0) << 0x1e;
  uVar8 = uVar12 | (uint)(0.0 <= dVar2) << 0x1d;
  local_98 = puVar11;
  if (((bool)((byte)(uVar8 >> 0x1d) & 1) && !SUB41(uVar12 >> 0x1e,0)) &&
     (uVar13 != 0 && iVar14 != 0)) {
    fVar7 = 0.0;
    if (local_a4[1] != 0) {
      fVar7 = local_c0;
    }
    if (local_a4[1] != 0 && fVar7 != 0.0) {
      local_bc = 0.0;
      do {
        if (local_a8 != 0) {
          uVar13 = 0;
          dVar16 = (double)VectorUnsignedToFloat(local_bc,(byte)(uVar8 >> 0x16) & 3);
          local_ac = (int)local_98 + (int)local_bc * local_a8 * 2;
          dVar16 = dVar16 * dVar2;
          fVar7 = local_bc;
          dVar17 = dVar16;
          do {
            local_b8 = (undefined4)(pf_double_bits(dVar17) >> 0x20);
            local_b4 = SUB84(dVar17,0);
            dVar15 = 0.0;
            uVar12 = (uint)*(ushort *)(local_a4 + 4);
            local_a0 = uVar13;
            if ((((uVar12 == 0) || (uVar12 <= uVar13)) || (uVar8 = uVar8 & 0xfffffff, dVar16 < 0.0))
               || (uVar13 = local_a4[1], uVar13 == 0)) {
LAB_10009954:
              local_b8 = (undefined4)(pf_double_bits(dVar17) >> 0x20);
              local_b4 = SUB84(dVar17,0);
              local_90 = 3;
              fVar7 = recovered_10004074(SUB84(dVar15,0),(int)(pf_double_bits(dVar15) >> 0x20),fVar7);
              uVar5 = extraout_r0;
            }
            else {
              fVar6 = (float)recovered_1000bff4(uVar13,uVar12);
              fVar7 = extraout_s0;
              dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
              if (uVar13 < uVar12) goto LAB_10009954;
              dVar17 = (double)VectorUnsignedToFloat(fVar6,(byte)(uVar8 >> 0x16) & 3);
              uVar13 = uVar8 & 0xfffffff | (uint)(dVar16 < dVar17) << 0x1f;
              uVar8 = uVar13 | (uint)(NAN(dVar16) || NAN(dVar17)) << 0x1c;
              fVar7 = fVar6;
              dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
              if ((byte)(uVar13 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) goto LAB_10009954;
              local_90 = 2;
              local_b0 = fVar6;
              dVar15 = recovered_100035f0(local_b4,local_b8);
              dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
              iVar14 = VectorFloatToUnsigned
                                 ((pf_double_bits(dVar15) & 0xffffffff00000000) +
                                  (pf_double_bits(dVar15) & 0xffffffff),3);
              dVar18 = (double)VectorUnsignedToFloat(iVar14,(byte)(uVar8 >> 0x16) & 3);
              uVar13 = iVar14 + 1U;
              if ((int)local_b0 - 1U < iVar14 + 1U) {
                uVar13 = (int)local_b0 - 1U;
              }
              fVar7 = (float)(int)*(short *)(*local_a4 + uVar13 * *(ushort *)(local_a4 + 4) * 2 +
                                            local_a0 * 2);
              dVar15 = (double)VectorSignedToFloat((int)*(short *)(*local_a4 +
                                                                   (uint)*(ushort *)(local_a4 + 4) *
                                                                   iVar14 * 2 + local_a0 * 2),
                                                   (byte)(uVar8 >> 0x16) & 3);
              uVar5 = 0x8000;
              dVar19 = (double)VectorSignedToFloat(fVar7,(byte)(uVar8 >> 0x16) & 3);
              dVar15 = dVar15 + (dVar19 - dVar15) * (dVar16 - dVar18);
              uVar13 = uVar8 & 0xfffffff;
              uVar12 = uVar13 | (uint)(dVar15 == dVar3) << 0x1e;
              uVar8 = uVar12 | (uint)(dVar3 <= dVar15) << 0x1d;
              if ((bool)((byte)(uVar8 >> 0x1d) & 1) && !SUB41(uVar12 >> 0x1e,0)) {
                uVar13 = uVar13 | (uint)(dVar15 < dVar4) << 0x1f;
                uVar8 = uVar13 | (uint)(NAN(dVar15) || NAN(dVar4)) << 0x1c;
                uVar5 = 0x7fff;
                if ((byte)(uVar13 >> 0x1f) != ((byte)(uVar8 >> 0x1c) & 1)) goto LAB_10009954;
              }
            }
            dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
            uVar13 = local_a0 + 1;
            *(undefined2 *)(local_ac + local_a0 * 2) = uVar5;
          } while (uVar13 != local_a8);
        }
        local_bc = (float)((int)local_bc + 1);
      } while (local_bc != local_c0);
    }
  }
  recovered_10007388(&uStack_94);
  return;
}

#undef DAT_100099d8
#undef DAT_100099e0
#undef DAT_100099e8
#undef DAT_100099ec
#undef DAT_10010008
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
#undef uStack_94
#undef auStack_68
#undef local_c0
#undef local_bc
#undef local_b8

#define uStack_30 (*(undefined4 *)(frame + 32))
#define uStack_2c (*(undefined4 *)(frame + 36))
#define uStack_28 (*(undefined4 *)(frame + 40))
#define local_34 (*(undefined4 *)(frame + 28))
#define local_24 (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099f0
 */

undefined4 recovered_100099f0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  undefined8 uVar7;

  uVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    dVar5 = pf_bits_double(CONCAT44(param_3,param_2));
    bVar1 = recovered_100076d0(param_2,param_3);
    in_fpscr = in_fpscr & 0xfffffff;
    if ((0.0 <= dVar5) && (bVar1)) {
      uVar4 = 1;
      uVar2 = extraout_r1;
      if (dVar5 != 1.0) {
        uVar2 = (uint)*(ushort *)(param_1 + 4);
      }
      if ((dVar5 != 1.0 && uVar2 != 0) && (uVar2 <= (uint)param_1[1])) {
        uVar2 = recovered_1000bff4(param_1[1],uVar2);
        fVar3 = 0.0;
        dVar6 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        dVar6 = dVar6 / dVar5;
        if (0.0 < dVar6) {
          uVar7 = recovered_100037f0(SUB84(dVar6,0),(int)(pf_double_bits(dVar6) >> 0x20));
          fVar3 = (float)uVar7;
        }
        recovered_10009620(param_2,param_3,&local_34,param_1,fVar3);
        param_1[1] = 0;
        recovered_10006e1c((void *)*param_1);
        *param_1 = local_34;
        param_1[1] = uStack_30;
        param_1[2] = uStack_2c;
        param_1[3] = uStack_28;
        *(undefined2 *)(param_1 + 4) = local_24;
        recovered_10006e1c((void *)0x0);
        param_1[5] = 0;
      }
    }
  }
  return uVar4;
}

#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef local_34
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009aec
 */

undefined4 recovered_10009aec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009af4
 */

undefined8 recovered_10009af4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b00
 */

undefined8 recovered_10009b00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b0c
 */

void recovered_10009b0c(void *track)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (track == (void *)0x0) {
    return;
  }
  *(undefined4 *)((int)track + 4) = 0;
  *(undefined4 *)((int)track + 0x14) = 0;
  recovered_10006e1c(*(void **)track);
  recovered_10006e1c(track);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b44
 */

void recovered_10009b44(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009f10
#define DAT_10009f10 (*(int *)(0x10009f10U))
#undef DAT_10009f14
#define DAT_10009f14 (*(int *)(0x10009f14U))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define auStack_d0 (*(undefined1 (*)[12])(frame + 16))
#define local_c4 (*(uint *)(frame + 28))
#define local_c0 (*(uint * *)(frame + 32))
#define local_bc (*(int * *)(frame + 36))
#define local_b8 (*(uint * *)(frame + 40))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define local_b4 (*(undefined1 *)(frame + 44))
#define local_b0 (*(uint (*)[2])(frame + 48))
#define local_a8 (*(uint * *)(frame + 56))
#define local_a4 (*(undefined4 *)(frame + 60))
#define local_a0 (*(undefined4 *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define local_9c (*(undefined4 *)(frame + 68))
#define local_98 (*(undefined4 *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(int *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b48
 */

int * recovered_10009b48(int param_1,int *param_2)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *pointer;
  int *piVar4;
  uint uVar5;
  uint extraout_r3 = 0;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x20cU);
  local_70 = (0x2f0U) + 0x10009ba0;
  recovered_10007364(&uStack_94);
  piVar8 = (int *)0x0;
  if (param_1 == 0 || param_2 == (int *)0x0) goto LAB_10009bc0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  local_b4 = 0;
  local_90 = 1;
  local_bc = param_2;
  local_b8 = recovered_10005b20(param_1,((uintptr_t)pf_module_state + 0x13fU));
  local_c0 = local_b0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  local_b4 = local_b8 != (uint *)0x0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  piVar8 = (int *)0x0;
  local_a8 = local_b8;
  if (local_b8 == (uint *)0x0) goto LAB_10009bc0;
  local_90 = 2;
  iVar1 = recovered_10006540((int *)local_b8,0,2);
  local_b4 = iVar1 == 0;
  piVar8 = (int *)0x0;
  if (local_b8 == (uint *)0x0) goto LAB_10009bc0;
  local_90 = 3;
  uVar2 = recovered_100065f0((int)local_b8);
  if ((int)uVar2 < 0) {
    local_b4 = 0;
LAB_10009d0c:
    piVar4 = (int *)0x0;
    piVar8 = piVar4;
    if (local_b8 == (uint *)0x0) goto LAB_10009bc0;
  }
  else {
    local_b4 = 1;
    if (uVar2 == 0) goto LAB_10009d0c;
    local_c4 = uVar2;
    if (local_b8 == (uint *)0x0) {
      local_b4 = false;
    }
    else {
      local_90 = 4;
      iVar1 = recovered_10006540((int *)local_b8,0,0);
      local_b4 = iVar1 == 0;
    }
    uVar2 = local_bc[1];
    uVar12 = local_c4;
    piVar8 = local_bc;
    if (local_c4 < uVar2) {
      local_bc[1] = local_c4;
    }
    else if (uVar2 < local_c4) {
      if ((uint)local_bc[2] < local_c4) {
        local_90 = 5;
        puVar3 = recovered_10006dc4(local_c4);
        piVar8 = local_bc;
        uVar12 = local_c4;
        uVar2 = local_bc[1];
        pointer = (undefined8 *)*local_bc;
        if (uVar2 != 0) {
          bVar13 = uVar2 == 0x10;
          uVar5 = 0;
          uVar6 = extraout_r3;
          if (0xf < uVar2) {
            uVar6 = (int)puVar3 - (int)pointer;
            bVar13 = uVar6 == 0xf;
          }
          if ((0xf < uVar2 && 0xe < uVar6) && !bVar13) {
            uVar5 = uVar2 & 0xfffffff0;
            uVar6 = uVar5;
            puVar9 = pointer;
            puVar11 = puVar3;
            do {
              uVar14 = *puVar9;
              uVar15 = puVar9[1];
              puVar9 = puVar9 + 2;
              uVar6 = uVar6 - 0x10;
              *puVar11 = uVar14;
              puVar11[1] = uVar15;
              puVar11 = puVar11 + 2;
            } while (uVar6 != 0);
            if (uVar2 == uVar5) goto LAB_10009dd0;
          }
          iVar1 = uVar2 - uVar5;
          puVar7 = (undefined1 *)((int)puVar3 + uVar5);
          puVar10 = (undefined1 *)((int)pointer + uVar5);
          do {
            iVar1 = iVar1 + -1;
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar1 != 0);
        }
LAB_10009dd0:
        recovered_10006e1c(pointer);
        uVar2 = piVar8[1];
        piVar8[2] = uVar12;
        *piVar8 = (int)puVar3;
      }
      while (uVar2 < uVar12) {
        *(undefined1 *)(*piVar8 + uVar2) = 0;
        uVar2 = piVar8[1] + 1;
        piVar8[1] = uVar2;
      }
    }
    if ((undefined1 *)*piVar8 == (undefined1 *)0x0 || local_b8 == (uint *)0x0) {
      piVar4 = (int *)0x0;
      uVar2 = 0;
    }
    else {
      local_90 = 6;
      uVar2 = recovered_1000609c((undefined1 *)*piVar8,1,uVar12,(int *)local_b8);
      piVar4 = (int *)(uint)(uVar2 == local_c4);
    }
    local_b4 = SUB41(piVar4,0);
    *local_c0 = uVar2;
    local_c0[1] = 0;
    piVar8 = (int *)0x0;
    if (local_b8 == (uint *)0x0) goto LAB_10009bc0;
  }
  local_90 = 7;
  local_bc = piVar4;
  recovered_10005fa4(local_b8);
  piVar8 = local_bc;
LAB_10009bc0:
  recovered_10007388(&uStack_94);
  return piVar8;
}

#undef DAT_10009f10
#undef DAT_10009f14
#undef DAT_10010008
#undef auStack_d0
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef uStack_94
#undef local_b4
#undef local_b0
#undef local_a8
#undef local_a4
#undef local_a0
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1000a6e8
#define DAT_1000a6e8 (*(uint64_t *)(0x1000a6e8U))
#undef DAT_1000a6f0
#define DAT_1000a6f0 (*(uint64_t *)(0x1000a6f0U))
#undef DAT_1000a6f8
#define DAT_1000a6f8 (*(int *)(0x1000a6f8U))
#undef DAT_1000a6fc
#define DAT_1000a6fc (*(int *)(0x1000a6fcU))
#undef DAT_1000be6a
#define DAT_1000be6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef DAT_1000be6f
#define DAT_1000be6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x147U)))
#undef DAT_1000be74
#define DAT_1000be74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_1000be79
#define DAT_1000be79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
#define local_f8 (*(uint * *)(frame + 24))
#define local_f4 (*(void ** *)(frame + 28))
#define local_f0 (*(uint *)(frame + 32))
#define local_ec (*(int *)(frame + 36))
#define local_e8 (*(uint *)(frame + 40))
#define auStack_100 (*(undefined1 (*)[8])(frame + 16))
#define local_e4 (*(uint * *)(frame + 44))
#define local_e0 (*(uint *)(frame + 48))
#define local_dc (*(uint * *)(frame + 52))
#define local_d8 (*(uint * *)(frame + 56))
#define local_d4 (*(uint *)(frame + 60))
#define local_d0 (*(uint * *)(frame + 64))
#define local_cc (*(uint * *)(frame + 68))
#define local_c8 (*(uint * *)(frame + 72))
#define local_c4 (*(uint *)(frame + 76))
#define local_c0 (*(uint * *)(frame + 80))
#define local_bc (*(uint * *)(frame + 84))
#define local_b8 (*(uint *)(frame + 88))
#define local_b4 (*(uint *)(frame + 92))
#define local_b0 (*(uint *)(frame + 96))
#define local_ac (*(uint * *)(frame + 100))
#define local_a8 (*(void * *)(frame + 104))
#define local_a4 (*(void * *)(frame + 108))
#define local_a0 (*(void * *)(frame + 112))
#define local_9c (*(uint *)(frame + 116))
#define local_98 (*(undefined2 *)(frame + 120))
#define local_90 (*(undefined4 *)(frame + 128))
#define local_7c (*(undefined4 *)(frame + 148))
#define local_78 (*(int *)(frame + 152))
#define local_74 (*(undefined1 * *)(frame + 156))
#define local_70 (*(int *)(frame + 160))
#define local_6c (*(undefined1 * *)(frame + 164))
#define uStack_94 (*(undefined4 *)(frame + 124))
#define auStack_68 (*(undefined1 (*)[8])(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f18
 */

undefined4 recovered_10009f18(int param_1,undefined1 *param_2,void **param_3,uint *param_4)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  void **ppvVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 extraout_r0 = 0;
  undefined2 extraout_r0_00 = 0;
  undefined2 extraout_r0_01 = 0;
  undefined2 extraout_r0_02 = 0;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  double *pdVar7;
  ushort *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  uint in_fpscr;
  float value;
  float value_00;
  float value_01;
  float value_02;
  double dVar17;
  double dVar18;
  double dVar19;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x228U);
  local_70 = (0x6ecU) + 0x10009f78;
  recovered_10007364(&uStack_94);
  uVar16 = 0;
  if (((undefined1 *)0xb < param_2) && (param_1 != 0 && param_3 != (void **)0x0)) {
    local_90 = 0xffffffff;
    iVar4 = recovered_10002b28((uint *)param_1,(uint *)&DAT_1000be6a,4);
    if (iVar4 == 0) {
      local_90 = 0xffffffff;
      iVar4 = recovered_10002b28((uint *)(param_1 + 8),(uint *)&DAT_1000be6f,4);
      if (iVar4 == 0) {
        if (param_2 < (undefined1 *)0x14) {
          uVar5 = 1;
          local_e0 = 0;
          local_d0 = (uint *)0x0;
          local_c4 = 0;
          uVar9 = 0;
          puVar12 = (uint *)0x0;
          uVar14 = 0;
        }
        else {
          puVar6 = &PrefetchAbort;
          puVar13 = &NotUsed;
          local_c4 = 0;
          local_b0 = 0;
          local_b4 = 0;
          local_d0 = (uint *)0x0;
          local_ac = (uint *)0x0;
          local_b8 = 0;
          local_e0 = 0;
          local_f4 = param_3;
          local_bc = param_4;
          do {
            puVar11 = (uint *)(puVar6 + param_1);
            puVar12 = (uint *)puVar11[1];
            if (param_2 < (undefined1 *)((int)puVar12 + (int)puVar13)) goto LAB_1000a1b4;
            local_90 = 0xffffffff;
            iVar4 = recovered_10002b28(puVar11,(uint *)&DAT_1000be74,4);
            if (iVar4 != 0) {
              local_90 = 0xffffffff;
              iVar4 = recovered_10002b28(puVar11,(uint *)&DAT_1000be79,4);
              if (iVar4 == 0 && local_d0 == (uint *)0x0) {
                local_d0 = (uint *)(puVar13 + param_1);
                local_ac = puVar12;
              }
              goto LAB_1000a094;
            }
            if (puVar12 < &DataAbort) {
LAB_1000a1b4:
              uVar16 = 0;
              goto LAB_10009f9c;
            }
            puVar8 = (ushort *)(puVar13 + param_1);
            uVar2 = *puVar8;
            uVar14 = (uint)puVar8[7];
            uVar9 = *(uint *)(puVar8 + 2);
            local_c4 = (uint)puVar8[1];
            if ((uVar2 == 0xfffe) &&
               (((puVar12 < (uint *)0x28 || (puVar8[8] < 0x16)) ||
                (uVar2 = puVar8[0xc], (uVar2 & 0xfffd) != 1)))) goto LAB_1000a1b4;
            local_b4 = uVar14;
            local_b0 = uVar9;
            if (uVar2 != 1) {
              if (uVar2 == 3) {
                local_b8 = 1;
                local_e0 = 3;
                if ((uVar14 == 0x20) || (uVar14 == 0x40)) goto LAB_1000a094;
              }
              goto LAB_1000a1b4;
            }
            local_e0 = 1;
            local_b8 = 1;
            if ((uVar14 - 8 & 0xffe7) != 0) goto LAB_1000a1b4;
LAB_1000a094:
            puVar6 = (undefined1 *)((int)puVar12 + (int)puVar13) + ((uint)puVar12 & 1);
            puVar13 = puVar6 + 8;
          } while (puVar13 <= param_2);
          uVar5 = local_b8 ^ 1;
          uVar9 = local_b4;
          puVar12 = local_ac;
          uVar14 = local_b0;
          param_3 = local_f4;
          param_4 = local_bc;
        }
        uVar16 = 0;
        if ((((uVar5 & 1) == 0) && (local_d0 != (uint *)0x0 && puVar12 != (uint *)0x0)) &&
           (((local_c4 & 0xffff) != 0 && uVar14 != 0 && (uVar9 = uVar9 & 0xffff, 7 < uVar9)))) {
          local_b8 = uVar9 >> 3;
          local_cc = (uint *)(local_c4 & 0xffff);
          puVar11 = (uint *)((int)local_cc * local_b8);
          if ((puVar11 != (uint *)0x0) && (puVar11 <= puVar12)) {
            uVar5 = (uint)(ushort)*param_4;
            if ((ushort)*param_4 == 0) {
              uVar5 = local_c4;
            }
            puVar10 = (uint *)(uVar5 & 0xffff);
            local_b4 = uVar9;
            if (puVar10 != (uint *)0x0) {
              local_98 = (undefined2)uVar5;
              local_a0 = (void *)0x0;
              local_a4 = (void *)0x0;
              local_a8 = (void *)0x0;
              local_90 = 1;
              local_f4 = param_3;
              local_e4 = puVar11;
              local_9c = uVar14;
              local_e8 = recovered_1000bff4((uint)puVar12,(uint)puVar11);
              local_c8 = puVar10;
              recovered_1000a9a8((int *)&local_a8,local_e8 * (int)puVar10);
              local_f8 = &local_9c;
              uVar9 = 0;
              puVar12 = (uint *)0x0;
              local_f0 = 0;
              if ((uint *)0x1 < local_cc) {
                local_f0 = local_b8;
              }
              dVar17 = (double)VectorUnsignedToFloat(local_cc,(byte)(in_fpscr >> 0x16) & 3);
              local_ec = (int)local_c8 << 1;
              puVar11 = local_d0;
              do {
                local_c0 = (uint *)(uVar9 * (int)local_e4 + (int)local_d0);
                local_b0 = local_e0 & 0xffff;
                local_dc = puVar11;
                local_d8 = puVar12;
                local_d4 = uVar9;
                if (local_c8 == (uint *)0x2) {
                  local_90 = 4;
                  dVar18 = recovered_1000aad8(local_c0,local_b0,local_b4);
                  local_bc = (uint *)(pf_double_bits(dVar18) >> 0x20);
                  local_ac = SUB84(dVar18,0);
                  local_90 = 5;
                  dVar18 = recovered_1000aad8((uint *)((int)local_c0 + local_f0),local_b0,local_b4);
                  dVar19 = pf_bits_double(CONCAT44(local_bc,local_ac));
                  uVar3 = 0x8000;
                  value_01 = value_00;
                  if ((-1.0 < dVar19) && (uVar3 = 0x7fff, dVar19 < 1.0)) {
                    pdVar7 = (double *)&DAT_1000a6e8;
                    local_90 = 6;
                    if (dVar19 < 0.0) {
                      pdVar7 = (double *)&DAT_1000a6f0;
                    }
                    local_b0 = (uint)(pf_double_bits(dVar18) >> 0x20);
                    local_ac = SUB84(dVar18,0);
                    value_01 = recovered_10004074(SUB84(dVar19 * *pdVar7,0),
                                                  (int)((ulonglong)(dVar19 * *pdVar7) >> 0x20),
                                                  value_00);
                    dVar18 = pf_bits_double(CONCAT44(local_b0,local_ac));
                    uVar3 = extraout_r0_00;
                  }
                  uVar15 = 0x8000;
                  *(undefined2 *)((int)local_a8 + local_d4 * 4) = uVar3;
                  if ((-1.0 < dVar18) && (uVar15 = 0x7fff, dVar18 < 1.0)) {
                    pdVar7 = (double *)&DAT_1000a6e8;
                    local_90 = 7;
                    if (dVar18 < 0.0) {
                      pdVar7 = (double *)&DAT_1000a6f0;
                    }
                    recovered_10004074(SUB84(dVar18 * *pdVar7,0),
                                       (int)((ulonglong)(dVar18 * *pdVar7) >> 0x20),value_01);
                    uVar15 = extraout_r0_01;
                  }
                  *(undefined2 *)((int)local_a8 + local_d4 * 4 + 2) = uVar15;
                }
                else if (local_c8 == (uint *)0x1) {
                  dVar18 = 0.0;
                  puVar12 = local_cc;
                  do {
                    local_90 = 3;
                    local_bc = puVar11;
                    local_ac = puVar12;
                    dVar19 = recovered_1000aad8(puVar11,local_b0,local_b4);
                    dVar18 = dVar18 + pf_bits_double(((pf_double_bits(dVar19) & 0xffffffff00000000) +
                                              (pf_double_bits(dVar19) & 0xffffffff)));
                    puVar11 = (uint *)((int)local_bc + local_b8);
                    puVar12 = (uint *)((int)local_ac + -1);
                  } while (puVar12 != (uint *)0x0);
                  dVar18 = dVar18 / dVar17;
                  uVar3 = 0x8000;
                  if ((-1.0 < dVar18) && (uVar3 = 0x7fff, dVar18 < 1.0)) {
                    pdVar7 = (double *)&DAT_1000a6e8;
                    local_90 = 2;
                    if (dVar18 < 0.0) {
                      pdVar7 = (double *)&DAT_1000a6f0;
                    }
                    recovered_10004074(SUB84(dVar18 * *pdVar7,0),
                                       (int)((ulonglong)(dVar18 * *pdVar7) >> 0x20),value);
                    uVar3 = extraout_r0;
                  }
                  *(undefined2 *)((int)local_a8 + local_d4 * 2) = uVar3;
                }
                else {
                  puVar11 = (uint *)0x0;
                  do {
                    local_90 = 8;
                    puVar10 = puVar11;
                    if (local_cc <= puVar11) {
                      puVar10 = (uint *)(local_c4 - 1);
                    }
                    local_bc = puVar11;
                    local_ac = puVar12;
                    dVar18 = recovered_1000aad8((uint *)(((uint)puVar10 & 0xffff) * local_b8 +
                                                        (int)local_c0),local_b0,local_b4);
                    dVar18 = pf_bits_double(((pf_double_bits(dVar18) & 0xffffffff00000000) +
                                     (pf_double_bits(dVar18) & 0xffffffff)));
                    uVar3 = 0x8000;
                    if ((-1.0 < dVar18) && (uVar3 = 0x7fff, dVar18 < 1.0)) {
                      pdVar7 = (double *)&DAT_1000a6e8;
                      local_90 = 9;
                      if (dVar18 < 0.0) {
                        pdVar7 = (double *)&DAT_1000a6f0;
                      }
                      recovered_10004074(SUB84(dVar18 * *pdVar7,0),
                                         (int)((ulonglong)(dVar18 * *pdVar7) >> 0x20),value_02);
                      uVar3 = extraout_r0_02;
                    }
                    puVar12 = (uint *)((int)local_ac + 2);
                    *(undefined2 *)((int)local_a8 + (int)local_ac) = uVar3;
                    puVar11 = (uint *)((int)local_bc + 1);
                  } while (local_c8 != puVar11);
                }
                ppvVar1 = local_f4;
                puVar12 = (uint *)((int)local_d8 + local_ec);
                uVar9 = local_d4 + 1;
                puVar11 = (uint *)((int)local_dc + (int)local_e4);
              } while (uVar9 < local_e8);
              if (&local_a8 != local_f4) {
                local_f4[1] = (void *)0x0;
                recovered_10006e1c(*local_f4);
                *ppvVar1 = local_a8;
                ppvVar1[1] = local_a4;
                ppvVar1[2] = local_a0;
                local_a0 = (void *)0x0;
                local_a8 = (void *)0x0;
              }
              uVar9 = local_f8[1];
              ppvVar1[3] = (void *)*local_f8;
              *(short *)(ppvVar1 + 4) = (short)uVar9;
              local_a4 = (void *)0x0;
              recovered_10006e1c(local_a8);
              uVar16 = 1;
            }
          }
        }
      }
    }
  }
LAB_10009f9c:
  recovered_10007388(&uStack_94);
  return uVar16;
}

#undef DAT_1000a6e8
#undef DAT_1000a6f0
#undef DAT_1000a6f8
#undef DAT_1000a6fc
#undef DAT_1000be6a
#undef DAT_1000be6f
#undef DAT_1000be74
#undef DAT_1000be79
#undef DAT_10010008
#undef EXT_0000000c
#undef EXT_00000010
#undef EXT_00000014
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef auStack_100
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
#undef auStack_68

#undef DAT_1000a7f0
#define DAT_1000a7f0 (*(int *)(0x1000a7f0U))
#undef DAT_1000a7f4
#define DAT_1000a7f4 (*(int *)(0x1000a7f4U))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a700
 */

int * recovered_1000a700(int *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  puVar1 = (uint *)*param_1;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x240U);
  local_70 = (0x68U) + 0x1000a758;
  recovered_10007364(&uStack_94);
  if (puVar1 != (uint *)0x0) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10005fa4(puVar1);
    *local_98 = 0;
    param_1 = local_98;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  recovered_10007388(&uStack_94);
  return param_1;
}

#undef DAT_1000a7f0
#undef DAT_1000a7f4
#undef DAT_10010008
#undef auStack_68
#undef local_98
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c

#undef DAT_1000a8e8
#define DAT_1000a8e8 (*(int *)(0x1000a8e8U))
#undef DAT_1000a8ec
#define DAT_1000a8ec (*(int *)(0x1000a8ecU))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7f8
 */

int * recovered_1000a7f8(int *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  puVar1 = (uint *)*param_1;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x250U);
  local_70 = (0x68U) + 0x1000a850;
  recovered_10007364(&uStack_94);
  if (puVar1 != (uint *)0x0) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10005fa4(puVar1);
    *local_98 = 0;
    param_1 = local_98;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  recovered_10007388(&uStack_94);
  return param_1;
}

#undef DAT_1000a8e8
#undef DAT_1000a8ec
#undef DAT_10010008
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8f0
 */

void recovered_1000a8f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10006d8c(param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1000a8fc);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a900
 */

void recovered_1000a900(undefined4 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *pointer;
  uint uVar2;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;

  if (param_2 <= (uint)param_1[2]) {
    return;
  }
  puVar1 = recovered_10006dc4(param_2);
  uVar2 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar2 != 0) {
    bVar10 = uVar2 == 0x10;
    uVar9 = 0;
    uVar4 = extraout_r2;
    if (0xf < uVar2) {
      uVar4 = (int)puVar1 - (int)pointer;
      bVar10 = uVar4 == 0xf;
    }
    if ((0xf < uVar2 && 0xe < uVar4) && !bVar10) {
      uVar9 = uVar2 & 0xfffffff0;
      puVar5 = puVar1;
      uVar4 = uVar9;
      puVar7 = pointer;
      do {
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar4 = uVar4 - 0x10;
        *puVar5 = uVar11;
        puVar5[1] = uVar12;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (uVar2 == uVar9) goto LAB_1000a994;
    }
    iVar3 = uVar2 - uVar9;
    puVar6 = (undefined1 *)((int)puVar1 + uVar9);
    puVar8 = (undefined1 *)((int)pointer + uVar9);
    do {
      iVar3 = iVar3 + -1;
      *puVar6 = *puVar8;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar3 != 0);
  }
LAB_1000a994:
  recovered_10006e1c(pointer);
  param_1[2] = param_2;
  *param_1 = puVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9a8
 */

void recovered_1000a9a8(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *pointer;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint extraout_r3 = 0;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  bool bVar16;

  uVar7 = param_1[1];
  if (param_2 < uVar7) goto LAB_1000a9c0;
  if (param_2 <= uVar7) {
    return;
  }
  if ((uint)param_1[2] < param_2) {
    puVar5 = recovered_10006dc4(param_2 << 1);
    uVar7 = param_1[1];
    pointer = (undefined4 *)*param_1;
    if (uVar7 != 0) {
      bVar16 = uVar7 == 8;
      uVar8 = 0;
      uVar10 = extraout_r3;
      if (7 < uVar7) {
        uVar10 = (int)puVar5 - (int)pointer;
        bVar16 = uVar10 == 0xf;
      }
      if ((7 < uVar7 && 0xe < uVar10) && !bVar16) {
        uVar8 = uVar7 & 0xfffffff8;
        uVar10 = uVar8;
        puVar13 = puVar5;
        puVar14 = pointer;
        do {
          uVar1 = *puVar14;
          uVar2 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          puVar14 = puVar14 + 4;
          uVar10 = uVar10 - 8;
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
          puVar13[2] = uVar3;
          puVar13[3] = uVar4;
          puVar13 = puVar13 + 4;
        } while (uVar10 != 0);
        if (uVar7 == uVar8) goto LAB_1000aa5c;
      }
      iVar6 = uVar7 - uVar8;
      puVar11 = (undefined2 *)((int)puVar5 + uVar8 * 2);
      puVar15 = (undefined2 *)((int)pointer + uVar8 * 2);
      do {
        iVar6 = iVar6 + -1;
        *puVar11 = *puVar15;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar6 != 0);
    }
LAB_1000aa5c:
    recovered_10006e1c(pointer);
    uVar7 = param_1[1];
    param_1[2] = param_2;
    *param_1 = (int)puVar5;
  }
  if (param_2 <= uVar7) {
    return;
  }
  iVar6 = *param_1;
  uVar10 = param_2 - uVar7;
  if (7 < uVar10) {
    uVar12 = uVar10 & 0xfffffff8;
    puVar5 = (undefined4 *)(iVar6 + uVar7 * 2);
    uVar7 = uVar7 + uVar12;
    uVar8 = uVar12;
    do {
      *puVar5 = 0;
      puVar5[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      puVar5[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      puVar5[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 8;
    } while (uVar8 != 0);
    if (uVar10 == uVar12) goto LAB_1000a9c0;
  }
  iVar9 = param_2 - uVar7;
  puVar11 = (undefined2 *)(iVar6 + uVar7 * 2);
  do {
    *puVar11 = 0;
    iVar9 = iVar9 + -1;
    puVar11 = puVar11 + 1;
  } while (iVar9 != 0);
LAB_1000a9c0:
  param_1[1] = param_2;
  return;
}


#undef DAT_1000ac30
#define DAT_1000ac30 (*(double *)(0x1000ac30U))
#undef DAT_1000ac38
#define DAT_1000ac38 (*(double *)(0x1000ac38U))
#undef DAT_1000ac40
#define DAT_1000ac40 (*(double *)(0x1000ac40U))
#undef DAT_1000ac48
#define DAT_1000ac48 (*(double *)(0x1000ac48U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define local_18 (*(undefined4 *)(frame + 24))
#define uStack_14 (*(undefined4 *)(frame + 28))
#define local_c (*(float *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aad8
 */

double recovered_1000aad8(uint *param_1,int param_2,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;

  dVar3 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      uStack_14 = 0;
      local_18 = 0;
      recovered_10001da0((undefined8 *)&local_18,(undefined8 *)param_1,(undefined8 *)&SupervisorCall
                        );
      dVar3 = pf_bits_double(CONCAT44(uStack_14,local_18));
      bVar1 = dVar3 < -1.0;
      if (1.0 < dVar3) {
        dVar3 = 1.0;
      }
      if (bVar1) {
        dVar3 = -1.0;
      }
    }
    else if (param_3 == 0x20) {
      local_c = 0.0;
      recovered_10001da0((undefined8 *)&local_c,(undefined8 *)param_1,
                         (undefined8 *)&UndefinedInstruction);
      dVar3 = (double)local_c;
      if (1.0 < dVar3) {
        dVar3 = 1.0;
      }
      if (local_c < -1.0) {
        dVar3 = -1.0;
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)(param_3 - 8U >> 3 | param_3 << 0x1d)) {
    case 0:
      uVar2 = (byte)*param_1 - 0x80;
      dVar4 = pf_bits_double(0x3f80000000000000ULL);
      break;
    case 1:
      uVar2 = (uint)(short)*param_1;
      dVar4 = pf_bits_double(0x3f00000000000000ULL);
      break;
    case 2:
      uVar2 = (uint)(uint3)*param_1;
      dVar4 = pf_bits_double(0x3e80000000000000ULL);
      if (*(char *)((int)param_1 + 2) < '\0') {
        uVar2 = uVar2 | 0xff000000;
      }
      break;
    case 3:
      uVar2 = *param_1;
      dVar4 = pf_bits_double(0x3e00000000000000ULL);
      break;
    default:
      goto switchD_1000ab14_default;
    }
    dVar3 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = dVar3 * dVar4;
  }
switchD_1000ab14_default:
  return dVar3;
}

#undef DAT_1000ac30
#undef DAT_1000ac38
#undef DAT_1000ac40
#undef DAT_1000ac48
#undef EXT_00000004
#undef EXT_00000008
#undef local_18
#undef uStack_14
#undef local_c

#define local_2c (*(void * *)(frame + 20))
#define local_28 (*(int *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac50
 */

void recovered_1000ac50(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  void *pointer_00;
  uint extraout_r1 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  puVar10 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar10 != (undefined1 *)0x0) {
    uVar11 = param_2 - (int)puVar10;
    uVar4 = 0;
    do {
      if (uVar11 == uVar4) {
        uVar4 = param_1[1] - uVar11;
        local_24 = 0;
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_1000ac50((int *)&local_2c,(int)(puVar10 + uVar11),uVar4);
        pointer_00 = (void *)*param_1;
        iVar5 = param_1[1];
        iVar6 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pointer_00;
        local_28 = iVar5;
        local_24 = iVar6;
        recovered_10006e1c(pointer_00);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar10 = recovered_10006dc4(1);
      *param_1 = (int)puVar10;
      *puVar10 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000ad3c;
  puVar2 = recovered_10006dc4(uVar1 + 1);
  uVar11 = param_1[1];
  pointer = (undefined8 *)*param_1;
  uVar4 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar11 != 0) {
    bVar12 = uVar11 == 0x10;
    uVar3 = extraout_r1;
    if (0xf < uVar11) {
      uVar3 = (int)puVar2 - (int)pointer;
      bVar12 = uVar3 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar3) && !bVar12) {
      uVar4 = uVar11 & 0xfffffff0;
      uVar3 = uVar4;
      puVar7 = puVar2;
      puVar9 = pointer;
      do {
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar7 = uVar13;
        puVar7[1] = uVar14;
        puVar7 = puVar7 + 2;
      } while (uVar3 != 0);
      if (uVar11 == uVar4) goto LAB_1000ad20;
    }
    iVar5 = uVar11 - uVar4;
    puVar10 = (undefined1 *)((int)puVar2 + uVar4);
    puVar8 = (undefined1 *)((int)pointer + uVar4);
    do {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar8;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_1000ad20:
  *(undefined1 *)((int)puVar2 + uVar11) = 0;
  recovered_10006e1c(pointer);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000ad3c:
  uVar4 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

#undef DAT_1000b394
#define DAT_1000b394 (*(int *)(0x1000b394U))
#undef DAT_1000b398
#define DAT_1000b398 (*(int *)(0x1000b398U))
#undef DAT_1000be6a
#define DAT_1000be6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef DAT_1000be6e
#define DAT_1000be6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_1000be6f
#define DAT_1000be6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x147U)))
#undef DAT_1000be73
#define DAT_1000be73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef DAT_1000be74
#define DAT_1000be74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_1000be78
#define DAT_1000be78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef DAT_1000be79
#define DAT_1000be79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000be7d
#define DAT_1000be7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155U)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b8 (*(uint *)(frame + 24))
#define local_b4 (*(undefined8 * *)(frame + 28))
#define local_b0 (*(ushort * *)(frame + 32))
#define local_ac (*(undefined8 ** *)(frame + 36))
#define local_a8 (*(uint *)(frame + 40))
#define local_a4 (*(ushort * *)(frame + 44))
#define local_a0 (*(undefined8 * *)(frame + 48))
#define local_9c (*(undefined8 * *)(frame + 52))
#define local_98 (*(undefined8 * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae14
 */

undefined4 recovered_1000ae14(ushort *param_1,undefined8 **param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  uint unaff_r5;
  uint uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  uint numerator;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x260U);
  local_70 = (0x49cU) + 0x1000ae6c;
  recovered_10007364(&uStack_94);
  uVar15 = 0;
  if (param_2 != (undefined8 **)0x0) {
    uVar11 = *(uint *)(param_1 + 6);
    if (uVar11 != 0) {
      unaff_r5 = (uint)param_1[8];
    }
    if (uVar11 != 0 && unaff_r5 != 0) {
      numerator = *(uint *)(param_1 + 2);
      uVar2 = recovered_1000bff8(numerator,unaff_r5);
      if (uVar2 == 0) {
        lVar1 = ZEXT48((ushort *)(unaff_r5 << 1)) * (ulonglong)uVar11;
        if ((-1 < (short)unaff_r5) && ((int)((ulonglong)lVar1 >> 0x20) == 0)) {
          local_98 = (undefined8 *)0x0;
          local_a8 = numerator * 2;
          local_9c = (undefined8 *)0x0;
          local_a0 = (undefined8 *)0x0;
          local_90 = 1;
          local_b8 = numerator;
          local_b4 = (undefined8 *)lVar1;
          local_b0 = (ushort *)(unaff_r5 << 1);
          local_ac = param_2;
          local_a4 = param_1;
          recovered_1000a900(&local_a0,local_a8 + 0x2c);
          local_90 = 2;
          recovered_1000b934((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000be6a,
                             &DAT_1000be6e);
          local_90 = 3;
          recovered_1000b494((int *)&local_a0,local_b8 * 2 + 0x24);
          local_90 = 4;
          recovered_1000b934((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000be6f,
                             &DAT_1000be73);
          local_90 = 5;
          recovered_1000b934((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000be74,
                             &DAT_1000be78);
          local_90 = 6;
          recovered_1000b494((int *)&local_a0,0x10);
          local_90 = 7;
          recovered_1000b7a0((int *)&local_a0,1);
          local_90 = 8;
          recovered_1000b7a0((int *)&local_a0,(uint)local_a4[8]);
          local_90 = 9;
          recovered_1000b494((int *)&local_a0,*(undefined4 *)(local_a4 + 6));
          local_90 = 10;
          recovered_1000b494((int *)&local_a0,local_b4);
          local_90 = 0xb;
          recovered_1000b7a0((int *)&local_a0,(uint)local_b0 & 0xffff);
          local_90 = 0xc;
          recovered_1000b7a0((int *)&local_a0,0x10);
          local_90 = 0xd;
          recovered_1000b934((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000be79,
                             &DAT_1000be7d);
          local_90 = 0xe;
          recovered_1000b494((int *)&local_a0,local_a8);
          ppuVar9 = local_ac;
          if (*(int *)(local_a4 + 2) != 0) {
            puVar6 = *(ushort **)local_a4;
            puVar12 = puVar6 + *(int *)(local_a4 + 2);
            local_b0 = puVar12;
            do {
              uVar11 = (uint)*puVar6;
              if (local_9c == local_98) {
                puVar3 = (undefined8 *)((int)local_9c << 1);
                if (local_9c == (undefined8 *)0x0) {
                  puVar3 = (undefined8 *)&UndefinedInstruction;
                }
                if (local_9c < puVar3) {
                  local_90 = 0xf;
                  local_b4 = puVar3;
                  local_a8 = uVar11;
                  local_a4 = puVar6;
                  puVar3 = recovered_10006dc4((ulong)puVar3);
                  if (local_9c != (undefined8 *)0x0) {
                    bVar16 = local_9c == (undefined8 *)&DataAbort;
                    puVar5 = (undefined8 *)0x0;
                    uVar11 = extraout_r3;
                    if ((undefined8 *)0xf < local_9c) {
                      uVar11 = (int)puVar3 - (int)local_a0;
                      bVar16 = uVar11 == 0xf;
                    }
                    if (((undefined8 *)0xf < local_9c && 0xe < uVar11) && !bVar16) {
                      puVar5 = (undefined8 *)((uint)local_9c & 0xfffffff0);
                      puVar7 = puVar5;
                      puVar10 = puVar3;
                      puVar13 = local_a0;
                      do {
                        uVar17 = *puVar13;
                        uVar18 = puVar13[1];
                        puVar13 = puVar13 + 2;
                        puVar7 = puVar7 + -2;
                        *puVar10 = uVar17;
                        puVar10[1] = uVar18;
                        puVar10 = puVar10 + 2;
                      } while (puVar7 != (undefined8 *)0x0);
                      if (local_9c == puVar5) goto LAB_1000b1cc;
                    }
                    iVar4 = (int)local_9c - (int)puVar5;
                    puVar8 = (undefined1 *)((int)puVar3 + (int)puVar5);
                    puVar14 = (undefined1 *)((int)local_a0 + (int)puVar5);
                    do {
                      iVar4 = iVar4 + -1;
                      *puVar8 = *puVar14;
                      puVar8 = puVar8 + 1;
                      puVar14 = puVar14 + 1;
                    } while (iVar4 != 0);
                  }
LAB_1000b1cc:
                  recovered_10006e1c(local_a0);
                  local_98 = local_b4;
                  uVar11 = local_a8;
                  puVar6 = local_a4;
                  ppuVar9 = local_ac;
                  puVar12 = local_b0;
                  local_a0 = puVar3;
                }
              }
              *(char *)((int)local_a0 + (int)local_9c) = (char)uVar11;
              local_9c = (undefined8 *)((int)local_9c + 1);
              if (local_9c == local_98) {
                puVar3 = (undefined8 *)((int)local_9c * 2);
                if (local_9c == (undefined8 *)0x0) {
                  puVar3 = (undefined8 *)&UndefinedInstruction;
                }
                if (local_9c < puVar3) {
                  local_90 = 0x10;
                  local_b4 = puVar3;
                  local_a8 = uVar11;
                  local_a4 = puVar6;
                  puVar3 = recovered_10006dc4((ulong)puVar3);
                  if (local_9c != (undefined8 *)0x0) {
                    bVar16 = local_9c == (undefined8 *)&DataAbort;
                    puVar5 = (undefined8 *)0x0;
                    uVar11 = extraout_r3_00;
                    if ((undefined8 *)0xf < local_9c) {
                      uVar11 = (int)puVar3 - (int)local_a0;
                      bVar16 = uVar11 == 0xf;
                    }
                    if (((undefined8 *)0xf < local_9c && 0xe < uVar11) && !bVar16) {
                      puVar5 = (undefined8 *)((uint)local_9c & 0xfffffff0);
                      puVar7 = puVar5;
                      puVar10 = puVar3;
                      puVar13 = local_a0;
                      do {
                        uVar17 = *puVar13;
                        uVar18 = puVar13[1];
                        puVar13 = puVar13 + 2;
                        puVar7 = puVar7 + -2;
                        *puVar10 = uVar17;
                        puVar10[1] = uVar18;
                        puVar10 = puVar10 + 2;
                      } while (puVar7 != (undefined8 *)0x0);
                      if (local_9c == puVar5) goto LAB_1000b0d8;
                    }
                    iVar4 = (int)local_9c - (int)puVar5;
                    puVar8 = (undefined1 *)((int)puVar3 + (int)puVar5);
                    puVar14 = (undefined1 *)((int)local_a0 + (int)puVar5);
                    do {
                      iVar4 = iVar4 + -1;
                      *puVar8 = *puVar14;
                      puVar8 = puVar8 + 1;
                      puVar14 = puVar14 + 1;
                    } while (iVar4 != 0);
                  }
LAB_1000b0d8:
                  recovered_10006e1c(local_a0);
                  local_98 = local_b4;
                  uVar11 = local_a8;
                  puVar6 = local_a4;
                  ppuVar9 = local_ac;
                  puVar12 = local_b0;
                  local_a0 = puVar3;
                }
              }
              puVar6 = puVar6 + 1;
              *(char *)((int)local_a0 + (int)local_9c) = (char)(uVar11 >> 8);
              local_9c = (undefined8 *)((int)local_9c + 1);
            } while (puVar6 != puVar12);
          }
          if (&local_a0 != ppuVar9) {
            ppuVar9[1] = (undefined8 *)0x0;
            recovered_10006e1c(*ppuVar9);
            *ppuVar9 = local_a0;
            ppuVar9[1] = local_9c;
            ppuVar9[2] = local_98;
            local_98 = (undefined8 *)0x0;
            local_a0 = (undefined8 *)0x0;
          }
          local_9c = (undefined8 *)0x0;
          recovered_10006e1c(local_a0);
          uVar15 = 1;
        }
      }
    }
  }
  recovered_10007388(&uStack_94);
  return uVar15;
}

#undef DAT_1000b394
#undef DAT_1000b398
#undef DAT_1000be6a
#undef DAT_1000be6e
#undef DAT_1000be6f
#undef DAT_1000be73
#undef DAT_1000be74
#undef DAT_1000be78
#undef DAT_1000be79
#undef DAT_1000be7d
#undef DAT_10010008
#undef EXT_00000004
#undef EXT_00000010
#undef auStack_68
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
#undef auStack_c0
#undef uStack_94

#undef DAT_1000b48c
#define DAT_1000b48c (*(int *)(0x1000b48cU))
#undef DAT_1000b490
#define DAT_1000b490 (*(int *)(0x1000b490U))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42e0U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b39c
 */

int * recovered_1000b39c(int *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  puVar1 = (uint *)*param_1;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x284U);
  local_70 = (0x68U) + 0x1000b3f4;
  recovered_10007364(&uStack_94);
  if (puVar1 != (uint *)0x0) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10005fa4(puVar1);
    *local_98 = 0;
    param_1 = local_98;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  recovered_10007388(&uStack_94);
  return param_1;
}

#undef DAT_1000b48c
#undef DAT_1000b490
#undef DAT_10010008
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b494
 */

void recovered_1000b494(int *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  undefined8 *puVar5;
  uint extraout_r2 = 0;
  uint uVar6;
  undefined1 *puVar7;
  uint extraout_r2_00 = 0;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_10006dc4(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar6 = extraout_r2;
        if (0xf < uVar1) {
          uVar6 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar6 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          puVar5 = puVar2;
          uVar6 = uVar11;
          puVar8 = puVar3;
          do {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar6 = uVar6 - 0x10;
            *puVar5 = uVar13;
            puVar5[1] = uVar14;
            puVar5 = puVar5 + 2;
          } while (uVar6 != 0);
          if (uVar1 == uVar11) goto LAB_1000b540;
        }
        iVar4 = uVar1 - uVar11;
        puVar7 = (undefined1 *)((int)puVar2 + uVar11);
        puVar9 = (undefined1 *)((int)puVar3 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar9;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 != 0);
      }
LAB_1000b540:
      recovered_10006e1c(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)param_2;
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 * 2;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_10006dc4(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar6 = extraout_r1;
        if (0xf < uVar1) {
          uVar6 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar6 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          puVar5 = puVar2;
          uVar6 = uVar11;
          puVar8 = puVar3;
          do {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar6 = uVar6 - 0x10;
            *puVar5 = uVar13;
            puVar5[1] = uVar14;
            puVar5 = puVar5 + 2;
          } while (uVar6 != 0);
          if (uVar1 == uVar11) goto LAB_1000b5fc;
        }
        iVar4 = uVar1 - uVar11;
        puVar7 = (undefined1 *)((int)puVar3 + uVar11);
        puVar9 = (undefined1 *)((int)puVar2 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 != 0);
      }
LAB_1000b5fc:
      recovered_10006e1c(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 8);
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 * 2;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_10006dc4(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar6 = extraout_r1_00;
        if (0xf < uVar1) {
          uVar6 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar6 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          puVar5 = puVar2;
          uVar6 = uVar11;
          puVar8 = puVar3;
          do {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar6 = uVar6 - 0x10;
            *puVar5 = uVar13;
            puVar5[1] = uVar14;
            puVar5 = puVar5 + 2;
          } while (uVar6 != 0);
          if (uVar1 == uVar11) goto LAB_1000b6b8;
        }
        iVar4 = uVar1 - uVar11;
        puVar7 = (undefined1 *)((int)puVar3 + uVar11);
        puVar9 = (undefined1 *)((int)puVar2 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 != 0);
      }
LAB_1000b6b8:
      recovered_10006e1c(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 0x10);
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 != param_1[2]) goto LAB_1000b780;
  uVar10 = uVar1 * 2;
  if (uVar1 == 0) {
    uVar10 = 4;
  }
  if (uVar10 <= uVar1) goto LAB_1000b780;
  puVar2 = recovered_10006dc4(uVar10);
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar12 = uVar1 == 0x10;
    uVar11 = 0;
    uVar6 = extraout_r2_00;
    if (0xf < uVar1) {
      uVar6 = (int)puVar2 - (int)puVar3;
      bVar12 = uVar6 == 0xf;
    }
    if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
      uVar11 = uVar1 & 0xfffffff0;
      puVar5 = puVar2;
      uVar6 = uVar11;
      puVar8 = puVar3;
      do {
        uVar13 = *puVar8;
        uVar14 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar6 = uVar6 - 0x10;
        *puVar5 = uVar13;
        puVar5[1] = uVar14;
        puVar5 = puVar5 + 2;
      } while (uVar6 != 0);
      if (uVar1 == uVar11) goto LAB_1000b770;
    }
    iVar4 = uVar1 - uVar11;
    puVar7 = (undefined1 *)((int)puVar2 + uVar11);
    puVar9 = (undefined1 *)((int)puVar3 + uVar11);
    do {
      iVar4 = iVar4 + -1;
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_1000b770:
  recovered_10006e1c(puVar3);
  uVar1 = param_1[1];
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_1000b780:
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7a0
 */

void recovered_1000b7a0(int *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint extraout_r2 = 0;
  uint uVar5;
  uint extraout_r2_00 = 0;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_10006dc4(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar5 = extraout_r2;
        if (0xf < uVar1) {
          uVar5 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar5 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar5) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          uVar5 = uVar11;
          puVar7 = puVar3;
          puVar9 = puVar2;
          do {
            uVar13 = *puVar7;
            uVar14 = puVar7[1];
            puVar7 = puVar7 + 2;
            uVar5 = uVar5 - 0x10;
            *puVar9 = uVar13;
            puVar9[1] = uVar14;
            puVar9 = puVar9 + 2;
          } while (uVar5 != 0);
          if (uVar1 == uVar11) goto LAB_1000b84c;
        }
        iVar4 = uVar1 - uVar11;
        puVar6 = (undefined1 *)((int)puVar3 + uVar11);
        puVar8 = (undefined1 *)((int)puVar2 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar4 != 0);
      }
LAB_1000b84c:
      recovered_10006e1c(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)param_2;
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 != param_1[2]) goto LAB_1000b914;
  uVar10 = uVar1 * 2;
  if (uVar1 == 0) {
    uVar10 = 4;
  }
  if (uVar10 <= uVar1) goto LAB_1000b914;
  puVar2 = recovered_10006dc4(uVar10);
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar12 = uVar1 == 0x10;
    uVar11 = 0;
    uVar5 = extraout_r2_00;
    if (0xf < uVar1) {
      uVar5 = (int)puVar2 - (int)puVar3;
      bVar12 = uVar5 == 0xf;
    }
    if ((0xf < uVar1 && 0xe < uVar5) && !bVar12) {
      uVar11 = uVar1 & 0xfffffff0;
      uVar5 = uVar11;
      puVar7 = puVar3;
      puVar9 = puVar2;
      do {
        uVar13 = *puVar7;
        uVar14 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar9 = uVar13;
        puVar9[1] = uVar14;
        puVar9 = puVar9 + 2;
      } while (uVar5 != 0);
      if (uVar1 == uVar11) goto LAB_1000b904;
    }
    iVar4 = uVar1 - uVar11;
    puVar6 = (undefined1 *)((int)puVar3 + uVar11);
    puVar8 = (undefined1 *)((int)puVar2 + uVar11);
    do {
      iVar4 = iVar4 + -1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 != 0);
  }
LAB_1000b904:
  recovered_10006e1c(puVar3);
  uVar1 = param_1[1];
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_1000b914:
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 8);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b934
 */

int recovered_1000b934(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint size;
  undefined8 *puVar3;
  undefined8 *pointer;
  uint extraout_r1 = 0;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - iVar1;
  }
  if (param_3 == param_4) goto LAB_1000ba78;
  uVar8 = param_1[1];
  iVar11 = (int)param_4 - (int)param_3;
  uVar2 = param_1[2];
  if (uVar2 < uVar8 + iVar11) {
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    do {
      size = uVar2;
      uVar2 = size << 1;
    } while (size < uVar8 + iVar11);
    puVar3 = recovered_10006dc4(size);
    uVar8 = param_1[1];
    pointer = (undefined8 *)*param_1;
    if (uVar8 != 0) {
      bVar12 = uVar8 == 0x10;
      uVar9 = 0;
      uVar2 = extraout_r1;
      if (0xf < uVar8) {
        uVar2 = (int)puVar3 - (int)pointer;
        bVar12 = uVar2 == 0xf;
      }
      if ((0xf < uVar8 && 0xe < uVar2) && !bVar12) {
        uVar9 = uVar8 & 0xfffffff0;
        puVar4 = puVar3;
        uVar2 = uVar9;
        puVar6 = pointer;
        do {
          uVar13 = *puVar6;
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar2 = uVar2 - 0x10;
          *puVar4 = uVar13;
          puVar4[1] = uVar14;
          puVar4 = puVar4 + 2;
        } while (uVar2 != 0);
        if (uVar8 == uVar9) goto LAB_1000ba0c;
      }
      iVar1 = uVar8 - uVar9;
      puVar5 = (undefined1 *)((int)pointer + uVar9);
      puVar7 = (undefined1 *)((int)puVar3 + uVar9);
      do {
        iVar1 = iVar1 + -1;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar1 != 0);
    }
LAB_1000ba0c:
    recovered_10006e1c(pointer);
    param_1[2] = size;
    uVar8 = param_1[1];
    *param_1 = (int)puVar3;
  }
  while (uVar10 < uVar8) {
    uVar8 = uVar8 - 1;
    ((undefined1 *)(*param_1 + uVar8))[iVar11] = *(undefined1 *)(*param_1 + uVar8);
  }
  uVar8 = uVar10;
  do {
    puVar5 = param_3 + 1;
    *(undefined1 *)(*param_1 + uVar8) = *param_3;
    uVar8 = uVar8 + 1;
    param_3 = puVar5;
  } while (puVar5 != param_4);
  iVar1 = *param_1;
  param_1[1] = param_1[1] + iVar11;
LAB_1000ba78:
  iVar11 = iVar1 + uVar10;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  return iVar11;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba98
 */

void * recovered_1000ba98(undefined4 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint extraout_r3 = 0;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;

  puVar15 = (undefined8 *)*param_1;
  if (puVar15 == (undefined8 *)0x0) {
    uVar14 = param_1[1];
  }
  else {
    uVar14 = param_2 - (int)puVar15 >> 1;
  }
  if (param_3 == param_4) goto LAB_1000bd08;
  uVar18 = param_1[1];
  uVar11 = (int)param_4 + (-2 - (int)param_3);
  uVar1 = param_1[2];
  uVar6 = (uVar11 >> 1) + 1;
  if (uVar1 < uVar18 + uVar6) {
    if (uVar1 == 0) {
      uVar1 = 4;
    }
    do {
      uVar3 = uVar1;
      uVar1 = uVar3 << 1;
    } while (uVar3 < uVar18 + uVar6);
    puVar15 = recovered_10006dc4(uVar3 << 1);
    uVar18 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (uVar18 != 0) {
      bVar19 = uVar18 == 8;
      uVar8 = 0;
      uVar9 = extraout_r3;
      if (7 < uVar18) {
        uVar9 = (int)puVar15 - (int)puVar2;
        bVar19 = uVar9 == 0xf;
      }
      if ((7 < uVar18 && 0xe < uVar9) && !bVar19) {
        uVar8 = uVar18 & 0xfffffff8;
        uVar9 = uVar8;
        puVar4 = puVar2;
        puVar12 = puVar15;
        do {
          uVar20 = *puVar4;
          uVar21 = puVar4[1];
          puVar4 = puVar4 + 2;
          uVar9 = uVar9 - 8;
          *puVar12 = uVar20;
          puVar12[1] = uVar21;
          puVar12 = puVar12 + 2;
        } while (uVar9 != 0);
        if (uVar18 == uVar8) goto LAB_1000bb84;
      }
      iVar7 = uVar18 - uVar8;
      puVar10 = (undefined2 *)((int)puVar15 + uVar8 * 2);
      puVar13 = (undefined2 *)((int)puVar2 + uVar8 * 2);
      do {
        iVar7 = iVar7 + -1;
        *puVar10 = *puVar13;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar7 != 0);
    }
LAB_1000bb84:
    recovered_10006e1c(puVar2);
    uVar18 = param_1[1];
    param_1[2] = uVar3;
    *param_1 = puVar15;
  }
  if (uVar14 < uVar18) {
    uVar9 = uVar18 - uVar14;
    uVar3 = uVar18;
    if (0x37 < uVar9) {
      iVar7 = uVar18 + ~uVar14;
      uVar16 = uVar11 & 0xfffffffe;
      uVar8 = (int)puVar15 + uVar16 + uVar18 * 2;
      if ((((uVar8 + iVar7 * -2 <= uVar8) &&
           (uVar8 = (int)puVar15 + uVar18 * 2 + -2, uVar8 + iVar7 * -2 <= uVar8)) && (-1 < iVar7))
         && (uVar11 < 0xfffffff0)) {
        uVar17 = uVar9 & 0xfffffff8;
        uVar3 = uVar18 - uVar17;
        uVar8 = uVar17;
        puVar2 = (undefined8 *)(uVar18 * 2 + (int)puVar15);
        do {
          puVar4 = puVar2 + -2;
          uVar20 = puVar2[-1];
          uVar8 = uVar8 - 8;
          *(undefined8 *)((int)puVar4 + uVar16 + 2) = *puVar4;
          *(undefined8 *)((int)puVar4 + uVar16 + 10) = uVar20;
          puVar2 = puVar4;
        } while (uVar8 != 0);
        if (uVar9 == uVar17) goto LAB_1000bbe0;
      }
    }
    puVar10 = (undefined2 *)((int)puVar15 + uVar3 * 2);
    do {
      puVar13 = (undefined2 *)((int)puVar10 + (uVar11 & 0xfffffffe));
      puVar10 = puVar10 + -1;
      uVar3 = uVar3 - 1;
      *puVar13 = *puVar10;
    } while (uVar14 < uVar3);
  }
LAB_1000bbe0:
  puVar2 = param_3;
  uVar3 = uVar14;
  if ((uVar11 < 0xe) || ((int)puVar15 + (uVar14 * 2 - (int)param_3) < 0x10)) {
LAB_1000bcec:
    puVar10 = (undefined2 *)((int)puVar15 + uVar3 * 2);
    do {
      puVar4 = (undefined8 *)((int)puVar2 + 2);
      *puVar10 = *(undefined2 *)puVar2;
      puVar2 = puVar4;
      puVar10 = puVar10 + 1;
    } while (puVar4 != param_4);
  }
  else {
    uVar9 = uVar6 & 0xfffffff8;
    puVar4 = (undefined8 *)((int)puVar15 + uVar14 * 2);
    uVar3 = uVar14 + uVar9;
    puVar2 = (undefined8 *)((int)param_3 + uVar9 * 2);
    uVar11 = uVar9;
    do {
      uVar20 = *param_3;
      uVar21 = param_3[1];
      param_3 = param_3 + 2;
      uVar11 = uVar11 - 8;
      *puVar4 = uVar20;
      puVar4[1] = uVar21;
      puVar4 = puVar4 + 2;
    } while (uVar11 != 0);
    if (uVar6 != uVar9) goto LAB_1000bcec;
  }
  param_1[1] = uVar18 + uVar6;
LAB_1000bd08:
  pvVar5 = (void *)((int)puVar15 + uVar14 * 2);
  if (puVar15 == (undefined8 *)0x0) {
    pvVar5 = (void *)0x0;
  }
  return pvVar5;
}


/* Compiler word arithmetic ABI; Pooka's Free Software License. */
uint recovered_1000bff4(uint numerator,uint denominator){uint q=0,r=0;if(!denominator)return 0;for(int bit=31;bit>=0;--bit){uint carry=r>>31;r=(r<<1)|((numerator>>bit)&1U);if(carry||r>=denominator){r-=denominator;q|=1U<<bit;}}return q;}


/* Compiler word arithmetic ABI; Pooka's Free Software License. */
uint recovered_1000bff8(uint numerator,uint denominator){uint q=0,r=0;if(!denominator)return 0;for(int bit=31;bit>=0;--bit){uint carry=r>>31;r=(r<<1)|((numerator>>bit)&1U);if(carry||r>=denominator){r-=denominator;q|=1U<<bit;}}return r;}


/* Runtime rounding import; Pooka's Free Software License. */
long long recovered_1000bffc(double value){if(!(value<9223372036854775808.0)||value< -9223372036854775808.0)return (long long)0x8000000000000000ULL;return (long long)(value<0.0?value-0.5:value+0.5);}

