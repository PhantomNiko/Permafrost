/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f0f0
#define DAT_1000f0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

void recovered_10000560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f0f0 = 0;
  recovered_10000580();
  return;
}

#undef DAT_1000f0f0

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_00006238
#define DAT_00006238 (*(uint8_t *)(0x6238U))
#undef DAT_0000623c
#define DAT_0000623c (*(uint8_t *)(0x623cU))
#undef DAT_00006240
#define DAT_00006240 (*(uint8_t *)(0x6240U))
#undef DAT_00006248
#define DAT_00006248 (*(uint8_t *)(0x6248U))
#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_00300010
#define DAT_00300010 (*(uint8_t *)(0x300010U))
#undef DAT_00300018
#define DAT_00300018 (*(uint8_t *)(0x300018U))
#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef DAT_02000018
#define DAT_02000018 (*(uint8_t *)(0x2000018U))
#undef DAT_1000f0f0
#define DAT_1000f0f0 (*(char *)(((uintptr_t)pf_module_state + 0x238eU)))
#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2396U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x239eU)))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#undef _DAT_00006238
#define _DAT_00006238 (*(int *)(0x6238U))
#undef _DAT_0000623c
#define _DAT_0000623c (*(uint *)(0x623cU))
#undef _DAT_00300000
#define _DAT_00300000 (*(uint64_t *)(0x300000U))
#undef _DAT_00300008
#define _DAT_00300008 (*(uint64_t *)(0x300008U))
#undef _DAT_00300010
#define _DAT_00300010 (*(uint64_t *)(0x300010U))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
#define local_438 (*(ulong (*)[130])(frame + 24))
#define local_28 (*(ulong *)(frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000580(void)

{
  unsigned char frame[1136] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;

  local_28 = 0;
  if (DAT_1000f0f0 != '\0') {
    return;
  }
  DAT_1000f0f8 = 0;
  DAT_1000f100 = 0;
  uVar1 = 0x10;
  if (_DAT_0000608c < 0x10) {
    uVar1 = (ulong)_DAT_0000608c;
  }
  if ((_DAT_00006238 == 0x34364857) && (_DAT_0000623c != 0)) {
    uVar1 = 0x40;
    if (_DAT_0000623c < 0x40) {
      uVar1 = (ulong)_DAT_0000623c;
    }
    uVar9 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(&DAT_00006248 + uVar5 * 0x10) != 0) {
        uVar7 = *(ulong *)(&DAT_00006240 + uVar5 * 0x10);
        uVar6 = *(long *)(&DAT_00006248 + uVar5 * 0x10) + uVar7;
        if ((0x300000 < uVar6) && (uVar7 < uVar6)) {
          if (uVar7 < 0x300001) {
            uVar7 = 0x300000;
          }
          if (uVar9 < 0x40) {
            if (uVar9 != 0) {
              puVar2 = local_438 + uVar9 * 2;
              uVar8 = uVar9;
              do {
                if (*puVar2 <= uVar7) goto LAB_10000613;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar8 = 0;
LAB_10000613:
            local_438[uVar8 * 2 + 2] = uVar7;
            local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
            uVar9 = uVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
LAB_1000075e:
    if (uVar9 != 0) {
      lVar12 = 1;
      if (uVar9 != 1) {
        lVar10 = uVar9 - 1;
        puVar2 = local_438 + 4;
        lVar11 = 1;
        do {
          uVar1 = local_438[lVar11 * 2 + 1] + local_438[lVar11 * 2];
          if (uVar1 < *puVar2) {
            lVar12 = lVar11 + 1;
            uVar1 = puVar2[1];
            local_438[lVar11 * 2 + 2] = *puVar2;
            local_438[lVar11 * 2 + 3] = uVar1;
          }
          else {
            uVar5 = *puVar2 + puVar2[1];
            lVar12 = lVar11;
            if (uVar1 < uVar5) {
              local_438[lVar11 * 2 + 1] = uVar5 - local_438[lVar11 * 2];
            }
          }
          puVar2 = puVar2 + 2;
          lVar10 = lVar10 + -1;
          lVar11 = lVar12;
        } while (lVar10 != 0);
        if (lVar12 == 0) goto LAB_10000826;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000080f;
        recovered_10005730(puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (DAT_1000f0f8 != 0) goto LAB_10000965;
    }
  }
  else if (_DAT_0000608c != 0) {
    uVar9 = 0;
    uVar5 = 0;
    do {
      uVar7 = (ulong)*(uint *)(&DAT_00006090 + uVar5 * 8);
      uVar6 = *(uint *)(&DAT_00006094 + uVar5 * 8) + uVar7;
      if (0x300000 < uVar6 && (ulong)*(uint *)(&DAT_00006094 + uVar5 * 8) != 0) {
        if (uVar7 < 0x300001) {
          uVar7 = 0x300000;
        }
        if (uVar9 < 0x40) {
          if (uVar9 != 0) {
            puVar2 = local_438 + uVar9 * 2;
            uVar8 = uVar9;
            do {
              if (*puVar2 <= uVar7) goto LAB_100006d5;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar8 = 0;
LAB_100006d5:
          local_438[uVar8 * 2 + 2] = uVar7;
          local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
          uVar9 = uVar9 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    goto LAB_1000075e;
  }
LAB_10000826:
  uVar3 = _DAT_00006088 & 0xfffffff0;
  if (_DAT_00006088 < 0x300001) {
    uVar3 = 0x4000000;
  }
  uVar1 = (ulong)uVar3;
  if (uVar3 < 0x300031) {
    uVar1 = 0x4000000;
  }
  uVar5 = 0xffffffffffffffff;
  if (uVar1 - 0x300000 < 0xffffffffffd00000) {
    uVar5 = uVar1;
  }
  if (uVar5 < 0x1800001) {
    if (0x30 < uVar1 - 0x300000) {
      _DAT_00300000 = uVar1 - 0x300020;
      _DAT_00300008 = 0;
      _DAT_00300010 = local_28;
      DAT_00300018 = 1;
      puVar4 = (undefined8 *)(local_28 + 8);
      if (DAT_1000f0f8 == 0) {
        puVar4 = &DAT_1000f0f8;
      }
      *puVar4 = 0x300000;
      if (DAT_1000f100 == 0) {
        DAT_1000f0f0 = 1;
        DAT_1000f100 = 0x300000;
        return;
      }
      DAT_1000f0f0 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_1000f0f8 == 0) {
      puVar4 = &DAT_1000f0f8;
    }
    *puVar4 = 0x300000;
    if (DAT_1000f100 == 0) {
      DAT_1000f100 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_1000f0f8 == 0) {
        puVar4 = &DAT_1000f0f8;
      }
      *puVar4 = 0x2000000;
      if (DAT_1000f100 == 0) {
        DAT_1000f0f0 = 1;
        DAT_1000f100 = 0x2000000;
        return;
      }
      DAT_1000f0f0 = 1;
      return;
    }
  }
LAB_10000965:
  if (DAT_1000f100 == 0) {
    DAT_1000f100 = DAT_1000f0f8;
    DAT_1000f0f0 = 1;
    return;
  }
  DAT_1000f0f0 = 1;
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_00006238
#undef DAT_0000623c
#undef DAT_00006240
#undef DAT_00006248
#undef DAT_00300000
#undef DAT_00300008
#undef DAT_00300010
#undef DAT_00300018
#undef DAT_02000000
#undef DAT_02000008
#undef DAT_02000010
#undef DAT_02000018
#undef DAT_1000f0f0
#undef DAT_1000f0f8
#undef DAT_1000f100
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef _DAT_00300000
#undef _DAT_00300008
#undef _DAT_00300010
#undef _DAT_02000000
#undef _DAT_02000008
#undef _DAT_02000010
#undef local_438
#undef local_28

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2396U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009f0
 */

ulong recovered_100009f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000580();
  uVar3 = 0;
  for (plVar1 = DAT_1000f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if ((char)plVar1[3] == '\x01') {
      uVar3 = uVar3 + *plVar1;
    }
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000f0f8

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2396U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a40
 */

long recovered_10000a40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000580();
  lVar1 = 0;
  for (plVar2 = DAT_1000f0f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1000f0f8

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2396U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a80
 */

ulong recovered_10000a80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000580();
  uVar3 = 0;
  for (plVar1 = DAT_1000f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000f0f8

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2396U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac0
 */

long recovered_10000ac0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_10000580();
  lVar2 = 0;
  for (plVar1 = DAT_1000f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1000f0f8

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2396U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x239eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af0
 */

ulong * recovered_10000af0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  recovered_10000580();
  puVar3 = DAT_1000f100;
  if (DAT_1000f100 == (ulong *)0x0) {
    puVar3 = DAT_1000f0f8;
  }
  if (puVar3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar5 = param_1 + 0xfU & 0xfffffffffffffff0;
  puVar4 = puVar3;
  while( true ) {
    if ((char)puVar4[3] == '\x01') {
      uVar2 = *puVar4;
      if (uVar5 <= uVar2) {
        if (uVar2 < uVar5 + 0x30) {
          puVar3 = (ulong *)puVar4[1];
        }
        else {
          puVar3 = (ulong *)((long)puVar4 + uVar5 + 0x20);
          *(ulong *)((long)puVar4 + uVar5 + 0x20) = (uVar2 - uVar5) + -0x20;
          uVar2 = puVar4[1];
          *(ulong *)((long)puVar4 + uVar5 + 0x28) = uVar2;
          *(ulong **)((long)puVar4 + uVar5 + 0x30) = puVar4;
          *(undefined1 *)((long)puVar4 + uVar5 + 0x38) = 1;
          if (uVar2 != 0) {
            *(ulong **)(uVar2 + 0x10) = puVar3;
          }
          *puVar4 = uVar5;
          puVar4[1] = (ulong)puVar3;
        }
        DAT_1000f100 = DAT_1000f0f8;
        if (puVar3 != (ulong *)0x0) {
          DAT_1000f100 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_1000f0f8;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000f0f8
#undef DAT_1000f100

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd0
 */

ulong recovered_10000bd0(ulong param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return 0;
    }
    uVar1 = (uint)param_1;
    bVar2 = (byte)param_2;
    if (param_2 < 0x20) {
      uVar3 = (ulong)(uVar1 << (bVar2 & 0x1f));
      uVar1 = (int)(param_1 >> 0x20) << (bVar2 & 0x1f) | uVar1 >> 0x20 - (bVar2 & 0x1f);
    }
    else {
      uVar1 = uVar1 << (bVar2 & 0x1f);
      uVar3 = 0;
    }
    param_1 = (ulong)uVar1 << 0x20 | uVar3;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

ulong recovered_10000c10(ulong param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return 0;
    }
    bVar1 = (byte)param_2;
    uVar2 = (uint)(param_1 >> 0x20);
    if (param_2 < 0x20) {
      uVar3 = (uint)param_1 >> (bVar1 & 0x1f) | uVar2 << 0x20 - (bVar1 & 0x1f);
      uVar4 = (ulong)(uVar2 >> (bVar1 & 0x1f)) << 0x20;
    }
    else {
      uVar3 = uVar2 >> (bVar1 & 0x1f);
      uVar4 = 0;
    }
    param_1 = uVar3 | uVar4;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c50
 */

long recovered_10000c50(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return param_1 >> 0x3f;
    }
    bVar1 = (byte)param_2;
    iVar3 = (int)((ulong)param_1 >> 0x20);
    if (param_2 < 0x20) {
      uVar2 = (uint)param_1 >> (bVar1 & 0x1f) | iVar3 << 0x20 - (bVar1 & 0x1f);
      iVar3 = iVar3 >> (bVar1 & 0x1f);
    }
    else {
      uVar2 = iVar3 >> (bVar1 & 0x1f);
      iVar3 = iVar3 >> 0x1f;
    }
    param_1 = CONCAT44(iVar3,uVar2);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca0
 */

ulong recovered_10000ca0(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0x3f;
  lVar5 = 0;
  uVar2 = 0;
  do {
    uVar1 = (ulong)((param_1 >> (uVar3 & 0x3f) & 1) != 0) + lVar5 * 2;
    uVar6 = 0;
    uVar7 = 0;
    if (param_2 <= uVar1) {
      uVar6 = 1L << ((byte)uVar3 & 0x3f);
      uVar7 = param_2;
    }
    uVar4 = uVar3 - 1;
    uVar1 = (ulong)((param_1 >> (uVar4 & 0x3f) & 1) != 0) + (uVar1 - uVar7) * 2;
    uVar7 = 0;
    uVar8 = 0;
    if (param_2 <= uVar1) {
      uVar7 = 1L << ((byte)uVar4 & 0x3f);
      uVar8 = param_2;
    }
    uVar2 = uVar2 | uVar6 | uVar7;
    lVar5 = uVar1 - uVar8;
    uVar3 = uVar3 - 2;
  } while (uVar4 != 0);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

long recovered_10000d40(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0x3f;
  lVar2 = 0;
  do {
    uVar1 = (ulong)((param_1 >> (uVar3 & 0x3f) & 1) != 0) + lVar2 * 2;
    uVar5 = 0;
    if (param_2 <= uVar1) {
      uVar5 = param_2;
    }
    uVar4 = uVar3 - 1;
    uVar1 = (ulong)((param_1 >> (uVar4 & 0x3f) & 1) != 0) + (uVar1 - uVar5) * 2;
    uVar5 = 0;
    if (param_2 <= uVar1) {
      uVar5 = param_2;
    }
    lVar2 = uVar1 - uVar5;
    uVar3 = uVar3 - 2;
  } while (uVar4 != 0);
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db0
 */

ulong recovered_10000db0(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_2 == 0) {
    return 0;
  }
  uVar2 = -param_1;
  if ((long)-param_1 < 0) {
    uVar2 = param_1;
  }
  uVar5 = -param_2;
  if ((long)-param_2 < 0) {
    uVar5 = param_2;
  }
  uVar3 = 0x3f;
  lVar8 = 0;
  uVar7 = 0;
  do {
    uVar1 = (ulong)((uVar2 >> (uVar3 & 0x3f) & 1) != 0) + lVar8 * 2;
    uVar6 = 0;
    uVar9 = 0;
    if (uVar5 <= uVar1) {
      uVar6 = uVar5;
      uVar9 = 1L << ((byte)uVar3 & 0x3f);
    }
    uVar4 = uVar3 - 1;
    uVar1 = (ulong)((uVar2 >> (uVar4 & 0x3f) & 1) != 0) + (uVar1 - uVar6) * 2;
    uVar6 = 0;
    uVar10 = 0;
    if (uVar5 <= uVar1) {
      uVar6 = uVar5;
      uVar10 = 1L << ((byte)uVar4 & 0x3f);
    }
    uVar7 = uVar7 | uVar9 | uVar10;
    lVar8 = uVar1 - uVar6;
    uVar3 = uVar3 - 2;
  } while (uVar4 != 0);
  uVar2 = -uVar7;
  if (-1 < (long)(param_2 ^ param_1)) {
    uVar2 = uVar7;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e80
 */

long recovered_10000e80(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  if (param_2 == 0) {
    return 0;
  }
  uVar2 = -param_1;
  if ((long)-param_1 < 0) {
    uVar2 = param_1;
  }
  uVar4 = -param_2;
  if ((long)-param_2 < 0) {
    uVar4 = param_2;
  }
  uVar5 = 0x3f;
  lVar7 = 0;
  do {
    uVar1 = (ulong)((uVar2 >> (uVar5 & 0x3f) & 1) != 0) + lVar7 * 2;
    uVar8 = 0;
    if (uVar4 <= uVar1) {
      uVar8 = uVar4;
    }
    uVar6 = uVar5 - 1;
    uVar1 = (ulong)((uVar2 >> (uVar6 & 0x3f) & 1) != 0) + (uVar1 - uVar8) * 2;
    uVar8 = 0;
    if (uVar4 <= uVar1) {
      uVar8 = uVar4;
    }
    lVar7 = uVar1 - uVar8;
    uVar5 = uVar5 - 2;
  } while (uVar6 != 0);
  lVar3 = -lVar7;
  if (-1 < (long)param_1) {
    lVar3 = lVar7;
  }
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f10
 */

void recovered_10000f10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

int recovered_10000f30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000f40(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000f90(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000fe0(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001030
 */

void recovered_10001030(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined7 uVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_3 < 0x10) {
LAB_1000104f:
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_1000123e:
      puVar6 = param_1;
    }
    else {
      puVar6 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      uVar5 = param_3 - 1;
      uVar7 = (undefined7)((ulong)param_5 >> 8);
      param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
      if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
        param_2 = (undefined8 *)((long)param_2 + 1);
        param_3 = uVar5;
      }
      else {
        puVar6 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
        uVar5 = param_3 - 2;
        param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
        if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
          param_2 = (undefined8 *)((long)param_2 + 2);
          param_3 = uVar5;
        }
        else {
          puVar6 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
          uVar5 = param_3 - 3;
          param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
          if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
            param_2 = (undefined8 *)((long)param_2 + 3);
            param_3 = uVar5;
          }
          else {
            puVar6 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
            uVar5 = param_3 - 4;
            param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
            if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
              param_2 = (undefined8 *)((long)param_2 + 4);
              param_3 = uVar5;
            }
            else {
              puVar6 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
              uVar5 = param_3 - 5;
              param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
              if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
                param_2 = (undefined8 *)((long)param_2 + 5);
                param_3 = uVar5;
              }
              else {
                puVar6 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                uVar5 = param_3 - 6;
                param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
                if (((ulong)puVar6 & 7) == 0 || uVar5 == 0) {
                  param_2 = (undefined8 *)((long)param_2 + 6);
                  param_3 = uVar5;
                }
                else {
                  puVar6 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                  uVar5 = param_3 - 7;
                  param_5 = (undefined8 *)CONCAT71(uVar7,uVar5 != 0);
                  if (((ulong)puVar6 & 7) != 0 && uVar5 != 0) {
                    puVar1 = (undefined1 *)((long)param_2 + 7);
                    param_2 = param_2 + 1;
                    *(undefined1 *)((long)param_1 + 7) = *puVar1;
                    param_3 = param_3 - 8;
                    param_1 = param_1 + 1;
                    goto LAB_1000123e;
                  }
                  param_2 = (undefined8 *)((long)param_2 + 7);
                  param_3 = uVar5;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      param_5 = param_2;
    }
    else {
      uVar5 = param_3 - 0x20;
      uVar8 = param_3;
      if ((uVar5 & 0x20) == 0) {
        *puVar6 = *param_2;
        puVar6[1] = param_2[1];
        puVar6[2] = param_2[2];
        puVar6[3] = param_2[3];
        puVar6 = puVar6 + 4;
        param_2 = param_2 + 4;
        uVar8 = uVar5;
        param_5 = param_2;
      }
      param_3 = uVar5;
      if (0x1f < uVar5) {
        do {
          *puVar6 = *param_2;
          puVar6[1] = param_2[1];
          puVar6[2] = param_2[2];
          puVar6[3] = param_2[3];
          puVar6[4] = param_2[4];
          puVar6[5] = param_2[5];
          puVar6[6] = param_2[6];
          puVar6[7] = param_2[7];
          puVar6 = puVar6 + 8;
          param_2 = param_2 + 8;
          uVar8 = uVar8 - 0x40;
          param_3 = uVar8;
          param_5 = param_2;
        } while (0x1f < uVar8);
      }
    }
    if (param_3 < 8) {
      param_2 = param_5;
      param_1 = puVar6;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar6 - (long)param_5))) {
        uVar5 = (param_3 - 8 >> 3) + 1;
        uVar8 = uVar5 & 0xfffffffffffffffc;
        param_2 = param_5 + uVar8;
        param_1 = puVar6 + uVar8;
        param_3 = param_3 + uVar8 * -8;
        uVar9 = 0;
        do {
          uVar2 = (param_5 + uVar9)[1];
          uVar3 = param_5[uVar9 + 2];
          uVar4 = (param_5 + uVar9 + 2)[1];
          puVar6[uVar9] = param_5[uVar9];
          (puVar6 + uVar9)[1] = uVar2;
          puVar6[uVar9 + 2] = uVar3;
          (puVar6 + uVar9 + 2)[1] = uVar4;
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
        param_5 = param_2;
        puVar6 = param_1;
        if (uVar5 == uVar8) goto LAB_1000104f;
      }
      do {
        param_2 = param_5 + 1;
        *puVar6 = *param_5;
        param_1 = puVar6 + 1;
        param_3 = param_3 - 8;
        param_5 = param_2;
        puVar6 = param_1;
      } while (7 < param_3);
    }
    goto LAB_1000104f;
  }
  uVar5 = param_3;
  if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
    if (param_3 < 0x20) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_3 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar2 = ((undefined8 *)((long)param_2 + uVar5))[1];
        puVar6 = (undefined8 *)((long)param_2 + uVar5 + 0x10);
        uVar3 = *puVar6;
        uVar4 = puVar6[1];
        *(undefined8 *)((long)param_1 + uVar5) = *(undefined8 *)((long)param_2 + uVar5);
        ((undefined8 *)((long)param_1 + uVar5))[1] = uVar2;
        puVar6 = (undefined8 *)((long)param_1 + uVar5 + 0x10);
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
        uVar5 = uVar5 + 0x20;
      } while (uVar8 != uVar5);
      if (param_3 == uVar8) {
        return;
      }
      if ((param_3 & 0x1c) == 0) {
        param_2 = (undefined8 *)((long)param_2 + uVar8);
        param_1 = (undefined8 *)((long)param_1 + uVar8);
        uVar5 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10001260;
      }
    }
    uVar9 = param_3 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)param_3 & 3);
    do {
      *(undefined4 *)((long)param_1 + uVar8) = *(undefined4 *)((long)param_2 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar9 != uVar8);
    param_1 = (undefined8 *)((long)param_1 + uVar9);
    param_2 = (undefined8 *)((long)param_2 + uVar9);
    if (param_3 == uVar9) {
      return;
    }
  }
LAB_10001260:
  uVar8 = uVar5 - 1;
  if ((uVar5 & 7) != 0) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar9) = *(undefined1 *)((long)param_2 + uVar9);
      uVar9 = uVar9 + 1;
    } while ((uVar5 & 7) != uVar9);
    uVar5 = uVar5 - uVar9;
    param_1 = (undefined8 *)((long)param_1 + uVar9);
    param_2 = (undefined8 *)((long)param_2 + uVar9);
  }
  if (6 < uVar8) {
    uVar8 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar8) = *(undefined1 *)((long)param_2 + uVar8);
      *(undefined1 *)((long)param_1 + uVar8 + 1) = *(undefined1 *)((long)param_2 + uVar8 + 1);
      *(undefined1 *)((long)param_1 + uVar8 + 2) = *(undefined1 *)((long)param_2 + uVar8 + 2);
      *(undefined1 *)((long)param_1 + uVar8 + 3) = *(undefined1 *)((long)param_2 + uVar8 + 3);
      *(undefined1 *)((long)param_1 + uVar8 + 4) = *(undefined1 *)((long)param_2 + uVar8 + 4);
      *(undefined1 *)((long)param_1 + uVar8 + 5) = *(undefined1 *)((long)param_2 + uVar8 + 5);
      *(undefined1 *)((long)param_1 + uVar8 + 6) = *(undefined1 *)((long)param_2 + uVar8 + 6);
      *(undefined1 *)((long)param_1 + uVar8 + 7) = *(undefined1 *)((long)param_2 + uVar8 + 7);
      uVar8 = uVar8 + 8;
    } while (uVar5 != uVar8);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001470
 */

void recovered_10001470(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                       undefined8 *param_5,undefined1 *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined7 uVar11;
  ulong uVar10;
  bool bVar12;
  undefined8 *in_R10;
  undefined7 uVar13;
  ulong uVar14;
  bool bVar15;

  if (param_3 == 0 || param_1 == param_2) {
    return;
  }
  if ((param_1 < param_2) || (puVar8 = (undefined8 *)((long)param_2 + param_3), puVar8 <= param_1))
  {
    if ((0xf < param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
      if (((ulong)param_1 & 7) == 0) {
LAB_1000180a:
        puVar8 = param_1;
      }
      else {
        puVar8 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar9 = param_3 - 1;
        uVar11 = (undefined7)((ulong)param_5 >> 8);
        param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
          param_2 = (undefined8 *)((long)param_2 + 1);
          param_3 = uVar9;
        }
        else {
          puVar8 = (undefined8 *)((long)param_1 + 2);
          *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
          uVar9 = param_3 - 2;
          param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
            param_2 = (undefined8 *)((long)param_2 + 2);
            param_3 = uVar9;
          }
          else {
            puVar8 = (undefined8 *)((long)param_1 + 3);
            *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
            uVar9 = param_3 - 3;
            param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
              param_2 = (undefined8 *)((long)param_2 + 3);
              param_3 = uVar9;
            }
            else {
              puVar8 = (undefined8 *)((long)param_1 + 4);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
              uVar9 = param_3 - 4;
              param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
                param_2 = (undefined8 *)((long)param_2 + 4);
                param_3 = uVar9;
              }
              else {
                puVar8 = (undefined8 *)((long)param_1 + 5);
                *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
                uVar9 = param_3 - 5;
                param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
                  param_2 = (undefined8 *)((long)param_2 + 5);
                  param_3 = uVar9;
                }
                else {
                  puVar8 = (undefined8 *)((long)param_1 + 6);
                  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                  uVar9 = param_3 - 6;
                  param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar9 == 0) {
                    param_2 = (undefined8 *)((long)param_2 + 6);
                    param_3 = uVar9;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)param_1 + 7);
                    *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                    uVar9 = param_3 - 7;
                    param_5 = (undefined8 *)CONCAT71(uVar11,uVar9 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar9 != 0) {
                      puVar6 = (undefined1 *)((long)param_2 + 7);
                      param_2 = param_2 + 1;
                      *(undefined1 *)((long)param_1 + 7) = *puVar6;
                      param_3 = param_3 - 8;
                      param_1 = param_1 + 1;
                      goto LAB_1000180a;
                    }
                    param_2 = (undefined8 *)((long)param_2 + 7);
                    param_3 = uVar9;
                  }
                }
              }
            }
          }
        }
      }
      if (param_3 < 0x20) {
        param_5 = param_2;
      }
      else {
        uVar9 = param_3 - 0x20;
        uVar10 = param_3;
        if ((uVar9 & 0x20) == 0) {
          *puVar8 = *param_2;
          puVar8[1] = param_2[1];
          puVar8[2] = param_2[2];
          puVar8[3] = param_2[3];
          puVar8 = puVar8 + 4;
          param_2 = param_2 + 4;
          uVar10 = uVar9;
          param_5 = param_2;
        }
        param_3 = uVar9;
        if (0x1f < uVar9) {
          param_3 = uVar10;
          do {
            *puVar8 = *param_2;
            puVar8[1] = param_2[1];
            puVar8[2] = param_2[2];
            puVar8[3] = param_2[3];
            puVar8[4] = param_2[4];
            puVar8[5] = param_2[5];
            puVar8[6] = param_2[6];
            puVar8[7] = param_2[7];
            puVar8 = puVar8 + 8;
            param_2 = param_2 + 8;
            param_3 = param_3 - 0x40;
            param_5 = param_2;
          } while (0x1f < param_3);
        }
      }
      if (param_3 < 8) {
        param_2 = param_5;
        param_1 = puVar8;
      }
      else {
        if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar8 - (long)param_5))) {
          uVar9 = (param_3 - 8 >> 3) + 1;
          uVar10 = uVar9 & 0xfffffffffffffffc;
          param_2 = param_5 + uVar10;
          param_1 = puVar8 + uVar10;
          param_3 = param_3 + uVar10 * -8;
          uVar14 = 0;
          do {
            uVar1 = (param_5 + uVar14)[1];
            uVar2 = param_5[uVar14 + 2];
            uVar3 = (param_5 + uVar14 + 2)[1];
            puVar8[uVar14] = param_5[uVar14];
            (puVar8 + uVar14)[1] = uVar1;
            puVar8[uVar14 + 2] = uVar2;
            (puVar8 + uVar14 + 2)[1] = uVar3;
            uVar14 = uVar14 + 4;
          } while (uVar10 != uVar14);
          param_5 = param_2;
          puVar8 = param_1;
          if (uVar9 == uVar10) goto LAB_10001a68;
        }
        do {
          uVar1 = *param_5;
          param_5 = param_5 + 1;
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
          param_3 = param_3 - 8;
          param_2 = param_5;
          param_1 = puVar8;
        } while (7 < param_3);
      }
LAB_10001a68:
      if (param_3 == 0) {
        return;
      }
    }
    uVar9 = param_3;
    if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
      if (param_3 < 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = param_3 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar1 = ((undefined8 *)((long)param_2 + uVar9))[1];
          puVar8 = (undefined8 *)((long)param_2 + uVar9 + 0x10);
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          *(undefined8 *)((long)param_1 + uVar9) = *(undefined8 *)((long)param_2 + uVar9);
          ((undefined8 *)((long)param_1 + uVar9))[1] = uVar1;
          puVar8 = (undefined8 *)((long)param_1 + uVar9 + 0x10);
          *puVar8 = uVar2;
          puVar8[1] = uVar3;
          uVar9 = uVar9 + 0x20;
        } while (uVar10 != uVar9);
        if (param_3 == uVar10) {
          return;
        }
        if ((param_3 & 0x1c) == 0) {
          param_2 = (undefined8 *)((long)param_2 + uVar10);
          param_1 = (undefined8 *)((long)param_1 + uVar10);
          uVar9 = (ulong)((uint)param_3 & 0x1f);
          goto LAB_1000182c;
        }
      }
      uVar14 = param_3 & 0xfffffffffffffffc;
      uVar9 = (ulong)((uint)param_3 & 3);
      do {
        *(undefined4 *)((long)param_1 + uVar10) = *(undefined4 *)((long)param_2 + uVar10);
        uVar10 = uVar10 + 4;
      } while (uVar14 != uVar10);
      param_1 = (undefined8 *)((long)param_1 + uVar14);
      param_2 = (undefined8 *)((long)param_2 + uVar14);
      if (param_3 == uVar14) {
        return;
      }
    }
LAB_1000182c:
    uVar10 = uVar9 - 1;
    if ((uVar9 & 7) != 0) {
      uVar14 = 0;
      do {
        *(undefined1 *)((long)param_1 + uVar14) = *(undefined1 *)((long)param_2 + uVar14);
        uVar14 = uVar14 + 1;
      } while ((uVar9 & 7) != uVar14);
      uVar9 = uVar9 - uVar14;
      param_1 = (undefined8 *)((long)param_1 + uVar14);
      param_2 = (undefined8 *)((long)param_2 + uVar14);
    }
    if (uVar10 < 7) {
      return;
    }
    uVar10 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar10) = *(undefined1 *)((long)param_2 + uVar10);
      *(undefined1 *)((long)param_1 + uVar10 + 1) = *(undefined1 *)((long)param_2 + uVar10 + 1);
      *(undefined1 *)((long)param_1 + uVar10 + 2) = *(undefined1 *)((long)param_2 + uVar10 + 2);
      *(undefined1 *)((long)param_1 + uVar10 + 3) = *(undefined1 *)((long)param_2 + uVar10 + 3);
      *(undefined1 *)((long)param_1 + uVar10 + 4) = *(undefined1 *)((long)param_2 + uVar10 + 4);
      *(undefined1 *)((long)param_1 + uVar10 + 5) = *(undefined1 *)((long)param_2 + uVar10 + 5);
      *(undefined1 *)((long)param_1 + uVar10 + 6) = *(undefined1 *)((long)param_2 + uVar10 + 6);
      *(undefined1 *)((long)param_1 + uVar10 + 7) = *(undefined1 *)((long)param_2 + uVar10 + 7);
      uVar10 = uVar10 + 8;
    } while (uVar9 != uVar10);
    return;
  }
  puVar6 = (undefined1 *)((long)param_1 + param_3);
  if ((0xf < param_3) && ((((uint)puVar8 ^ (uint)puVar6) & 7) == 0)) {
    if (((ulong)puVar6 & 7) == 0) {
LAB_100015fe:
      puVar7 = puVar6;
    }
    else {
      puVar7 = puVar6 + -1;
      puVar6[-1] = *(undefined1 *)((long)puVar8 - 1);
      uVar9 = param_3 - 1;
      uVar11 = (undefined7)((ulong)param_6 >> 8);
      param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
      uVar13 = (undefined7)((ulong)in_R10 >> 8);
      bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
      in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
      if (bVar12) {
        puVar8 = (undefined8 *)((long)puVar8 - 1);
        param_3 = uVar9;
      }
      else {
        puVar7 = puVar6 + -2;
        puVar6[-2] = *(undefined1 *)((long)puVar8 - 2);
        uVar9 = param_3 - 2;
        param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
        bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
        in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
        if (bVar12) {
          puVar8 = (undefined8 *)((long)puVar8 - 2);
          param_3 = uVar9;
        }
        else {
          puVar7 = puVar6 + -3;
          puVar6[-3] = *(undefined1 *)((long)puVar8 - 3);
          uVar9 = param_3 - 3;
          param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
          bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
          in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
          if (bVar12) {
            puVar8 = (undefined8 *)((long)puVar8 - 3);
            param_3 = uVar9;
          }
          else {
            puVar7 = puVar6 + -4;
            puVar6[-4] = *(undefined1 *)((long)puVar8 - 4);
            uVar9 = param_3 - 4;
            param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
            bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
            in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
            if (bVar12) {
              puVar8 = (undefined8 *)((long)puVar8 - 4);
              param_3 = uVar9;
            }
            else {
              puVar7 = puVar6 + -5;
              puVar6[-5] = *(undefined1 *)((long)puVar8 - 5);
              uVar9 = param_3 - 5;
              param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
              bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
              in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
              if (bVar12) {
                puVar8 = (undefined8 *)((long)puVar8 - 5);
                param_3 = uVar9;
              }
              else {
                puVar7 = puVar6 + -6;
                puVar6[-6] = *(undefined1 *)((long)puVar8 - 6);
                uVar9 = param_3 - 6;
                param_6 = (undefined1 *)CONCAT71(uVar11,uVar9 == 0);
                bVar12 = ((ulong)puVar7 & 7) == 0 || uVar9 == 0;
                in_R10 = (undefined8 *)CONCAT71(uVar13,bVar12);
                if (bVar12) {
                  puVar8 = (undefined8 *)((long)puVar8 - 6);
                  param_3 = uVar9;
                }
                else {
                  puVar7 = puVar6 + -7;
                  puVar6[-7] = *(undefined1 *)((long)puVar8 - 7);
                  bVar12 = param_3 - 7 == 0;
                  param_6 = (undefined1 *)CONCAT71(uVar11,bVar12);
                  bVar15 = ((ulong)puVar7 & 7) == 0;
                  in_R10 = (undefined8 *)CONCAT71(uVar13,bVar15 || bVar12);
                  if (!bVar15 && !bVar12) {
                    puVar4 = puVar8 + -1;
                    puVar8 = puVar8 + -1;
                    puVar6[-8] = *(undefined1 *)puVar4;
                    puVar6 = puVar6 + -8;
                    param_3 = param_3 - 8;
                    goto LAB_100015fe;
                  }
                  puVar8 = (undefined8 *)((long)puVar8 - 7);
                  param_3 = param_3 - 7;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      in_R10 = puVar8;
    }
    else {
      uVar9 = param_3 - 0x20;
      puVar4 = puVar8;
      puVar6 = puVar7;
      uVar10 = param_3;
      if ((uVar9 & 0x20) == 0) {
        puVar6 = puVar7 + -0x20;
        puVar4 = puVar8 + -4;
        *(undefined8 *)(puVar7 + -8) = puVar8[-1];
        *(undefined8 *)(puVar7 + -0x10) = puVar8[-2];
        *(undefined8 *)(puVar7 + -0x18) = puVar8[-3];
        *(undefined8 *)(puVar7 + -0x20) = puVar8[-4];
        uVar10 = uVar9;
        param_6 = puVar6;
        in_R10 = puVar4;
      }
      puVar7 = param_6;
      param_3 = uVar9;
      if (0x1f < uVar9) {
        param_3 = uVar10;
        do {
          *(undefined8 *)(puVar6 + -8) = puVar4[-1];
          *(undefined8 *)(puVar6 + -0x10) = puVar4[-2];
          *(undefined8 *)(puVar6 + -0x18) = puVar4[-3];
          *(undefined8 *)(puVar6 + -0x20) = puVar4[-4];
          puVar7 = puVar6 + -0x40;
          in_R10 = puVar4 + -8;
          *(undefined8 *)(puVar6 + -0x28) = puVar4[-5];
          *(undefined8 *)(puVar6 + -0x30) = puVar4[-6];
          *(undefined8 *)(puVar6 + -0x38) = puVar4[-7];
          *(undefined8 *)(puVar6 + -0x40) = puVar4[-8];
          param_3 = param_3 - 0x40;
          puVar4 = in_R10;
          puVar6 = puVar7;
        } while (0x1f < param_3);
      }
    }
    if (param_3 < 8) {
      puVar8 = in_R10;
      puVar6 = puVar7;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)in_R10 - (long)puVar7))) {
        uVar9 = (param_3 - 8 >> 3) + 1;
        uVar10 = uVar9 & 0xfffffffffffffffc;
        puVar8 = in_R10 + -uVar10;
        puVar6 = puVar7 + uVar10 * -8;
        param_3 = param_3 + uVar10 * -8;
        lVar5 = 0;
        do {
          uVar1 = in_R10[lVar5 + -4];
          uVar2 = (in_R10 + lVar5 + -4)[1];
          uVar3 = (in_R10 + lVar5 + -2)[1];
          *(undefined8 *)(puVar7 + lVar5 * 8 + -0x10) = in_R10[lVar5 + -2];
          *(undefined8 *)((long)(puVar7 + lVar5 * 8 + -0x10) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar5 * 8 + -0x20) = uVar1;
          *(undefined8 *)((long)(puVar7 + lVar5 * 8 + -0x20) + 8) = uVar2;
          lVar5 = lVar5 + -4;
        } while (-lVar5 != uVar10);
        in_R10 = puVar8;
        puVar7 = puVar6;
        if (uVar9 == uVar10) goto LAB_10001bca;
      }
      do {
        puVar8 = in_R10 + -1;
        in_R10 = in_R10 + -1;
        *(undefined8 *)(puVar7 + -8) = *puVar8;
        puVar7 = puVar7 + -8;
        param_3 = param_3 - 8;
        puVar8 = in_R10;
        puVar6 = puVar7;
      } while (7 < param_3);
    }
LAB_10001bca:
    if (param_3 == 0) {
      return;
    }
  }
  if ((3 < param_3) && (0xf < (ulong)((long)puVar8 - (long)puVar6))) {
    if (param_3 < 0x10) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0xfffffffffffffff0;
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)((long)puVar8 + lVar5 + -0x10);
        uVar1 = puVar4[1];
        *(undefined8 *)(puVar6 + lVar5 + -0x10) = *puVar4;
        *(undefined8 *)((long)(puVar6 + lVar5 + -0x10) + 8) = uVar1;
        lVar5 = lVar5 + -0x10;
      } while (-lVar5 != uVar9);
      if (param_3 == uVar9) {
        return;
      }
      if ((param_3 & 0xc) == 0) {
        param_3 = (ulong)((uint)param_3 & 0xf);
        puVar6 = puVar6 + -uVar9;
        puVar8 = (undefined8 *)((long)puVar8 - uVar9);
        goto LAB_10001c8f;
      }
    }
    uVar10 = param_3 & 0xfffffffffffffffc;
    lVar5 = -uVar9;
    do {
      *(undefined4 *)(puVar6 + lVar5 + -4) = *(undefined4 *)((long)puVar8 + lVar5 + -4);
      lVar5 = lVar5 + -4;
    } while (-lVar5 != uVar10);
    bVar12 = param_3 == uVar10;
    puVar8 = (undefined8 *)((long)puVar8 - uVar10);
    puVar6 = puVar6 + -uVar10;
    param_3 = (ulong)((uint)param_3 & 3);
    if (bVar12) {
      return;
    }
  }
LAB_10001c8f:
  uVar9 = param_3 - 1;
  if ((param_3 & 7) != 0) {
    uVar10 = 0;
    do {
      puVar7 = (undefined1 *)((long)puVar8 - 1);
      puVar8 = (undefined8 *)((long)puVar8 - 1);
      puVar6[-1] = *puVar7;
      puVar6 = puVar6 + -1;
      uVar10 = uVar10 + 1;
    } while ((param_3 & 7) != uVar10);
    param_3 = param_3 - uVar10;
  }
  if (6 < uVar9) {
    lVar5 = 0;
    do {
      puVar6[lVar5 + -1] = *(undefined1 *)((long)puVar8 + lVar5 + -1);
      puVar6[lVar5 + -2] = *(undefined1 *)((long)puVar8 + lVar5 + -2);
      puVar6[lVar5 + -3] = *(undefined1 *)((long)puVar8 + lVar5 + -3);
      puVar6[lVar5 + -4] = *(undefined1 *)((long)puVar8 + lVar5 + -4);
      puVar6[lVar5 + -5] = *(undefined1 *)((long)puVar8 + lVar5 + -5);
      puVar6[lVar5 + -6] = *(undefined1 *)((long)puVar8 + lVar5 + -6);
      puVar6[lVar5 + -7] = *(undefined1 *)((long)puVar8 + lVar5 + -7);
      puVar6[lVar5 + -8] = *(undefined1 *)((long)puVar8 + lVar5 + -8);
      lVar5 = lVar5 + -8;
    } while (-lVar5 != param_3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d30
 */

void recovered_10001d30(byte *param_1,byte param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint128 auVar10;

  if (0xf < param_3) {
    iVar2 = (uint)param_2 * 0x1010101;
    if (((ulong)param_1 & 7) == 0) {
LAB_10001e7d:
      pbVar6 = param_1;
      uVar4 = param_3;
    }
    else {
      *param_1 = param_2;
      pbVar6 = param_1 + 1;
      uVar4 = param_3 - 1;
      if (((ulong)(param_1 + 1) & 7) != 0 && param_3 - 1 != 0) {
        param_1[1] = param_2;
        pbVar6 = param_1 + 2;
        uVar4 = param_3 - 2;
        if (((ulong)(param_1 + 2) & 7) != 0 && param_3 - 2 != 0) {
          param_1[2] = param_2;
          pbVar6 = param_1 + 3;
          uVar4 = param_3 - 3;
          if (((ulong)(param_1 + 3) & 7) != 0 && param_3 - 3 != 0) {
            param_1[3] = param_2;
            pbVar6 = param_1 + 4;
            uVar4 = param_3 - 4;
            if (((ulong)(param_1 + 4) & 7) != 0 && param_3 - 4 != 0) {
              param_1[4] = param_2;
              pbVar6 = param_1 + 5;
              uVar4 = param_3 - 5;
              if (((ulong)(param_1 + 5) & 7) != 0 && param_3 - 5 != 0) {
                param_1[5] = param_2;
                pbVar6 = param_1 + 6;
                uVar4 = param_3 - 6;
                if (((ulong)(param_1 + 6) & 7) != 0 && param_3 - 6 != 0) {
                  param_1[6] = param_2;
                  pbVar6 = param_1 + 7;
                  uVar4 = param_3 - 7;
                  if (((ulong)(param_1 + 7) & 7) != 0 && param_3 - 7 != 0) {
                    param_1[7] = param_2;
                    param_3 = param_3 - 8;
                    param_1 = param_1 + 8;
                    goto LAB_10001e7d;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3 = uVar4;
    uVar3 = CONCAT44(iVar2,iVar2);
    if (0x1f < param_3) {
      uVar4 = param_3 - 0x20;
      uVar5 = ((uint)(uVar4 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar5 == 0) {
        uVar7 = param_3;
        param_3 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined8 *)(pbVar6 + uVar7) = uVar3;
          *(undefined8 *)(pbVar6 + uVar7 + 8) = uVar3;
          *(undefined8 *)(pbVar6 + uVar7 + 0x10) = uVar3;
          *(undefined8 *)(pbVar6 + uVar7 + 0x18) = uVar3;
          uVar7 = uVar7 + 0x20;
        } while (uVar5 << 5 != uVar7);
        pbVar6 = pbVar6 + uVar7;
        uVar7 = param_3 - uVar7;
        param_3 = uVar7;
      }
      if (0x5f < uVar4) {
        param_3 = uVar7;
        do {
          *(undefined8 *)pbVar6 = uVar3;
          *(undefined8 *)(pbVar6 + 8) = uVar3;
          *(undefined8 *)(pbVar6 + 0x10) = uVar3;
          *(undefined8 *)(pbVar6 + 0x18) = uVar3;
          *(undefined8 *)(pbVar6 + 0x20) = uVar3;
          *(undefined8 *)(pbVar6 + 0x28) = uVar3;
          *(undefined8 *)(pbVar6 + 0x30) = uVar3;
          *(undefined8 *)(pbVar6 + 0x38) = uVar3;
          *(undefined8 *)(pbVar6 + 0x40) = uVar3;
          *(undefined8 *)(pbVar6 + 0x48) = uVar3;
          *(undefined8 *)(pbVar6 + 0x50) = uVar3;
          *(undefined8 *)(pbVar6 + 0x58) = uVar3;
          *(undefined8 *)(pbVar6 + 0x60) = uVar3;
          *(undefined8 *)(pbVar6 + 0x68) = uVar3;
          *(undefined8 *)(pbVar6 + 0x70) = uVar3;
          *(undefined8 *)(pbVar6 + 0x78) = uVar3;
          pbVar6 = pbVar6 + 0x80;
          param_3 = param_3 - 0x80;
        } while (0x1f < param_3);
      }
    }
    param_1 = pbVar6;
    if (7 < param_3) {
      if (0x17 < param_3 - 8) {
        uVar4 = (param_3 - 8 >> 3) + 1;
        uVar7 = uVar4 & 0xfffffffffffffffc;
        param_1 = pbVar6 + uVar7 * 8;
        param_3 = param_3 + uVar7 * -8;
        uVar8 = 0;
        do {
          pbVar1 = pbVar6 + uVar8 * 8;
          *(int *)pbVar1 = iVar2;
          *(int *)(pbVar1 + 4) = iVar2;
          *(int *)(pbVar1 + 8) = iVar2;
          *(int *)(pbVar1 + 0xc) = iVar2;
          pbVar1 = pbVar6 + uVar8 * 8 + 0x10;
          *(int *)pbVar1 = iVar2;
          *(int *)(pbVar1 + 4) = iVar2;
          *(int *)(pbVar1 + 8) = iVar2;
          *(int *)(pbVar1 + 0xc) = iVar2;
          uVar8 = uVar8 + 4;
        } while (uVar7 != uVar8);
        if (uVar4 == uVar7) goto LAB_10001fb1;
      }
      do {
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 8;
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10001fb1:
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 4) {
LAB_10001fc0:
    uVar7 = param_3;
    pbVar6 = param_1;
  }
  else {
    if (param_3 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_3 & 0xffffffffffffffe0;
      auVar10 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
      uVar9 = PF_PART4(auVar10, 0);
      uVar7 = 0;
      do {
        pbVar6 = param_1 + uVar7;
        *(undefined4 *)pbVar6 = uVar9;
        *(undefined4 *)(pbVar6 + 4) = uVar9;
        *(undefined4 *)(pbVar6 + 8) = uVar9;
        *(undefined4 *)(pbVar6 + 0xc) = uVar9;
        pbVar6 = param_1 + uVar7 + 0x10;
        *(undefined4 *)pbVar6 = uVar9;
        *(undefined4 *)(pbVar6 + 4) = uVar9;
        *(undefined4 *)(pbVar6 + 8) = uVar9;
        *(undefined4 *)(pbVar6 + 0xc) = uVar9;
        uVar7 = uVar7 + 0x20;
      } while (uVar4 != uVar7);
      if (param_3 == uVar4) {
        return;
      }
      if ((param_3 & 0x1c) == 0) {
        param_1 = param_1 + uVar4;
        param_3 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10001fc0;
      }
    }
    uVar8 = param_3 & 0xfffffffffffffffc;
    uVar7 = (ulong)((uint)param_3 & 3);
    pbVar6 = param_1 + uVar8;
    auVar10 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
    do {
      *(int *)(param_1 + uVar4) = PF_PART4(auVar10, 0);
      uVar4 = uVar4 + 4;
    } while (uVar8 != uVar4);
    if (param_3 == uVar8) {
      return;
    }
  }
  uVar4 = 0;
  do {
    pbVar6[uVar4] = param_2;
    uVar4 = uVar4 + 1;
  } while (uVar7 != uVar4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002080
 */

void recovered_10002080(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar2 = param_2;
  puVar1 = param_1;
  if (0xf < param_2) {
    if (((ulong)param_1 & 7) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar2 = param_2 - 1;
      if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
        puVar1 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = 0;
        uVar2 = param_2 - 2;
        if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
          puVar1 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = 0;
          uVar2 = param_2 - 3;
          if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
            puVar1 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = 0;
            uVar2 = param_2 - 4;
            if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
              puVar1 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = 0;
              uVar2 = param_2 - 5;
              if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                puVar1 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = 0;
                uVar2 = param_2 - 6;
                if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                  puVar1 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = 0;
                  uVar2 = param_2 - 7;
                  if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                    *(undefined1 *)((long)param_1 + 7) = 0;
                    puVar1 = param_1 + 1;
                    uVar2 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar2) {
      uVar3 = uVar2 - 0x20;
      uVar4 = ((uint)(uVar3 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar4 == 0) {
        uVar5 = uVar2;
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar1 + uVar5) = 0;
          ((undefined8 *)((long)puVar1 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar1 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar4 << 5 != uVar5);
        puVar1 = (undefined8 *)((long)puVar1 + uVar5);
        uVar5 = uVar2 - uVar5;
        uVar2 = uVar5;
      }
      if (0x5f < uVar3) {
        uVar2 = uVar5;
        do {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0xf] = 0;
          puVar1 = puVar1 + 0x10;
          uVar2 = uVar2 - 0x80;
        } while (0x1f < uVar2);
      }
    }
    if (7 < uVar2) {
      if (uVar2 - 8 < 0x18) {
        puVar6 = puVar1;
      }
      else {
        uVar3 = (uVar2 - 8 >> 3) + 1;
        uVar5 = uVar3 & 0xfffffffffffffffc;
        puVar6 = puVar1 + uVar5;
        uVar2 = uVar2 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar1[uVar7] = 0;
          (puVar1 + uVar7)[1] = 0;
          puVar1[uVar7 + 2] = 0;
          (puVar1 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar1 = puVar6;
        if (uVar3 == uVar5) goto LAB_100022a5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100022a5:
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  puVar6 = puVar1;
  if (7 < uVar2) {
    if (uVar2 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        *(undefined8 *)((long)puVar1 + uVar3) = 0;
        ((undefined8 *)((long)puVar1 + uVar3))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar1 + uVar3 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = uVar3 + 0x20;
      } while (uVar5 != uVar3);
      if (uVar2 == uVar5) {
        return;
      }
      if ((uVar2 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar1 + uVar5);
        uVar3 = (ulong)((uint)uVar2 & 0x1f);
        goto LAB_10002326;
      }
    }
    uVar7 = uVar2 & 0xfffffffffffffff8;
    uVar3 = (ulong)((uint)uVar2 & 7);
    puVar6 = (undefined8 *)((long)puVar1 + uVar7);
    do {
      *(undefined8 *)((long)puVar1 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar2 == uVar7) {
      return;
    }
  }
LAB_10002326:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002350
 */

void recovered_10002350(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar2 = param_2;
  puVar1 = param_1;
  if (0xf < param_2) {
    if (((ulong)param_1 & 7) != 0) {
      puVar1 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar2 = param_2 - 1;
      if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
        puVar1 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = 0;
        uVar2 = param_2 - 2;
        if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
          puVar1 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = 0;
          uVar2 = param_2 - 3;
          if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
            puVar1 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = 0;
            uVar2 = param_2 - 4;
            if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
              puVar1 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = 0;
              uVar2 = param_2 - 5;
              if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                puVar1 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = 0;
                uVar2 = param_2 - 6;
                if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                  puVar1 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = 0;
                  uVar2 = param_2 - 7;
                  if (((ulong)puVar1 & 7) != 0 && uVar2 != 0) {
                    *(undefined1 *)((long)param_1 + 7) = 0;
                    puVar1 = param_1 + 1;
                    uVar2 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar2) {
      uVar3 = uVar2 - 0x20;
      uVar4 = ((uint)(uVar3 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar4 == 0) {
        uVar5 = uVar2;
        uVar2 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar1 + uVar5) = 0;
          ((undefined8 *)((long)puVar1 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar1 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar4 << 5 != uVar5);
        puVar1 = (undefined8 *)((long)puVar1 + uVar5);
        uVar5 = uVar2 - uVar5;
        uVar2 = uVar5;
      }
      if (0x5f < uVar3) {
        uVar2 = uVar5;
        do {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0xf] = 0;
          puVar1 = puVar1 + 0x10;
          uVar2 = uVar2 - 0x80;
        } while (0x1f < uVar2);
      }
    }
    if (7 < uVar2) {
      if (uVar2 - 8 < 0x18) {
        puVar6 = puVar1;
      }
      else {
        uVar3 = (uVar2 - 8 >> 3) + 1;
        uVar5 = uVar3 & 0xfffffffffffffffc;
        puVar6 = puVar1 + uVar5;
        uVar2 = uVar2 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar1[uVar7] = 0;
          (puVar1 + uVar7)[1] = 0;
          puVar1[uVar7 + 2] = 0;
          (puVar1 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar1 = puVar6;
        if (uVar3 == uVar5) goto LAB_10002575;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002575:
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  puVar6 = puVar1;
  if (7 < uVar2) {
    if (uVar2 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        *(undefined8 *)((long)puVar1 + uVar3) = 0;
        ((undefined8 *)((long)puVar1 + uVar3))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar1 + uVar3 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = uVar3 + 0x20;
      } while (uVar5 != uVar3);
      if (uVar2 == uVar5) {
        return;
      }
      if ((uVar2 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar1 + uVar5);
        uVar3 = (ulong)((uint)uVar2 & 0x1f);
        goto LAB_100025f6;
      }
    }
    uVar7 = uVar2 & 0xfffffffffffffff8;
    uVar3 = (ulong)((uint)uVar2 & 7);
    puVar6 = (undefined8 *)((long)puVar1 + uVar7);
    do {
      *(undefined8 *)((long)puVar1 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar2 == uVar7) {
      return;
    }
  }
LAB_100025f6:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002620
 */

int recovered_10002620(ulong *param_1,ulong *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;

  if (0xf < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10002853;
    uVar11 = param_3;
    puVar8 = param_2;
    puVar10 = param_1;
    if (((ulong)param_1 & 7) != 0) {
      bVar1 = (byte)*param_1;
      bVar5 = (byte)*param_2;
      if (bVar1 != bVar5) {
LAB_100027b3:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002908:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)param_1 + 1);
      puVar8 = (ulong *)((long)param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_100027b3;
        puVar10 = (ulong *)((long)param_1 + 2);
        puVar8 = (ulong *)((long)param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_100027b3;
          puVar10 = (ulong *)((long)param_1 + 3);
          puVar8 = (ulong *)((long)param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_100027b3;
            puVar10 = (ulong *)((long)param_1 + 4);
            puVar8 = (ulong *)((long)param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_100027b3;
              puVar10 = (ulong *)((long)param_1 + 5);
              puVar8 = (ulong *)((long)param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_100027b3;
                puVar10 = (ulong *)((long)param_1 + 6);
                puVar8 = (ulong *)((long)param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_100027b3;
                  puVar10 = (ulong *)((long)param_1 + 7);
                  puVar8 = (ulong *)((long)param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_100027b3;
                    puVar10 = param_1 + 1;
                    puVar8 = param_2 + 1;
                    uVar11 = param_3 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    while( true ) {
      param_3 = uVar11;
      param_2 = puVar8;
      param_1 = puVar10;
      if (uVar11 < 0x20) break;
      uVar4 = *puVar10;
      uVar7 = *puVar8;
      if (uVar4 != uVar7) {
LAB_1000287f:
        uVar2 = (uint)uVar4;
        uVar6 = (uint)uVar7;
        if ((char)uVar4 == (char)uVar7) {
          uVar9 = uVar7 >> 8 & 0xffffff;
          uVar6 = (uint)uVar9;
          uVar11 = uVar4 >> 8 & 0xffffff;
          uVar2 = (uint)uVar11;
          if ((char)uVar11 == (char)uVar9) {
            uVar11 = uVar4 >> 0x10 & 0xffff;
            uVar2 = (uint)uVar11;
            uVar9 = uVar7 >> 0x10 & 0xffff;
            uVar6 = (uint)uVar9;
            if ((char)uVar11 == (char)uVar9) {
              uVar2 = (uint)(uVar4 >> 0x18) & 0xff;
              uVar6 = (uint)(uVar7 >> 0x18) & 0xff;
              if ((char)(uVar4 >> 0x18) == (char)(uVar7 >> 0x18)) {
                uVar2 = (uint)(uVar4 >> 0x20);
                uVar6 = (uint)(uVar7 >> 0x20);
                if ((char)(uVar4 >> 0x20) == (char)(uVar7 >> 0x20)) {
                  uVar2 = uVar2 >> 8;
                  uVar6 = uVar6 >> 8;
                  if ((char)(uVar4 >> 0x28) == (char)(uVar7 >> 0x28)) {
                    uVar2 = (uint)(ushort)(uVar4 >> 0x30);
                    uVar6 = (uint)(ushort)(uVar7 >> 0x30);
                    if ((char)(uVar4 >> 0x30) == (char)(uVar7 >> 0x30)) {
                      uVar2 = (uint)(byte)(uVar4 >> 0x38);
                      uVar6 = (uint)(byte)(uVar7 >> 0x38);
                      if (uVar2 == uVar6) {
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar6 = uVar6 & 0xff;
        uVar2 = uVar2 & 0xff;
        goto LAB_10002908;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_1000287f;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_1000287f;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_1000287f;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002920((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10002853:
  uVar11 = 0;
  do {
    if (*(byte *)((long)param_1 + uVar11) != *(byte *)((long)param_2 + uVar11)) {
      return (uint)*(byte *)((long)param_1 + uVar11) - (uint)*(byte *)((long)param_2 + uVar11);
    }
    uVar11 = uVar11 + 1;
  } while (param_3 != uVar11);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002920
 */

int recovered_10002920(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;

  bVar1 = *param_1;
  bVar2 = *param_2;
  if (bVar1 == bVar2) {
    bVar1 = param_1[1];
    bVar2 = param_2[1];
    if (bVar1 == bVar2) {
      bVar1 = param_1[2];
      bVar2 = param_2[2];
      if (bVar1 == bVar2) {
        bVar1 = param_1[3];
        bVar2 = param_2[3];
        if (bVar1 == bVar2) {
          bVar1 = param_1[4];
          bVar2 = param_2[4];
          if (bVar1 == bVar2) {
            bVar1 = param_1[5];
            bVar2 = param_2[5];
            if (bVar1 == bVar2) {
              bVar1 = param_1[6];
              bVar2 = param_2[6];
              if (bVar1 == bVar2) {
                bVar1 = param_1[7];
                bVar2 = param_2[7];
                if (bVar1 == bVar2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002990
 */

bool recovered_10002990(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b0
 */

bool recovered_100029b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d0
 */

bool recovered_100029d0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f0
 */

bool recovered_100029f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a20
 */

bool recovered_10002a20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

bool recovered_10002a40(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

int recovered_10002a60(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a80
 */

int recovered_10002a80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa0
 */

long recovered_10002aa0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *pcVar2;
  long lVar3;

  if (param_1 == 0) {
    return 0;
  }
  lVar3 = -1;
  do {
    lVar1 = lVar3 + 1;
    pcVar2 = (char *)(param_1 + 1 + lVar3);
    lVar3 = lVar1;
  } while (*pcVar2 != '\0');
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

int recovered_10002ad0(byte *param_1,byte *param_2)

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
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_10002af3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002af3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b10
 */

int recovered_10002b10(byte *param_1,byte *param_2)

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
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_10002b33;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002b33:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b50
 */

void recovered_10002b50(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar2);
    *(char *)(param_1 + lVar2) = cVar1;
    lVar2 = lVar2 + 1;
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
#define _DAT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10002b70(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar5 = 0xfffffffffffffff8;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (*(char *)((long)param_1 + uVar10 + 8) != '\0');
  if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
     ((_DAT_00006808 < 0x50 || ((code *)(ulong)_DAT_0000684c == (code *)0x0)))) {
    return (undefined8 *)0x0;
  }
  uVar9 = uVar10 + 9;
  puVar4 = (undefined8 *)(*(code *)(ulong)_DAT_0000684c)(uVar9);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar8 = puVar4;
  if (uVar9 < 0x10) {
LAB_10002c19:
    if (uVar9 == 0) {
      return puVar4;
    }
  }
  else if ((((uint)puVar4 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar4 & 7) == 0) {
      puVar7 = param_1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)((long)puVar4 + 1);
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      puVar7 = (undefined8 *)((long)param_1 + 1);
      uVar9 = uVar10 + 8;
      if ((uVar5 != 0xfffffffffffffff9) && (((ulong)puVar6 & 7) != 0)) {
        puVar6 = (undefined8 *)((long)puVar4 + 2);
        *(undefined1 *)((long)puVar4 + 1) = *(undefined1 *)((long)param_1 + 1);
        puVar7 = (undefined8 *)((long)param_1 + 2);
        uVar9 = uVar10 + 7;
        if ((uVar5 != 0xfffffffffffffffa) && (((ulong)puVar6 & 7) != 0)) {
          puVar6 = (undefined8 *)((long)puVar4 + 3);
          *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)((long)param_1 + 2);
          puVar7 = (undefined8 *)((long)param_1 + 3);
          uVar9 = uVar10 + 6;
          if ((uVar5 != 0xfffffffffffffffb) && (((ulong)puVar6 & 7) != 0)) {
            puVar6 = (undefined8 *)((long)puVar4 + 4);
            *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)((long)param_1 + 3);
            puVar7 = (undefined8 *)((long)param_1 + 4);
            uVar9 = uVar10 + 5;
            if ((uVar5 != 0xfffffffffffffffc) && (((ulong)puVar6 & 7) != 0)) {
              puVar6 = (undefined8 *)((long)puVar4 + 5);
              *(undefined1 *)((long)puVar4 + 4) = *(undefined1 *)((long)param_1 + 4);
              puVar7 = (undefined8 *)((long)param_1 + 5);
              uVar9 = uVar10 + 4;
              if ((uVar5 != 0xfffffffffffffffd) && (((ulong)puVar6 & 7) != 0)) {
                puVar6 = (undefined8 *)((long)puVar4 + 6);
                *(undefined1 *)((long)puVar4 + 5) = *(undefined1 *)((long)param_1 + 5);
                puVar7 = (undefined8 *)((long)param_1 + 6);
                uVar9 = uVar10 + 3;
                if ((uVar5 != 0xfffffffffffffffe) && (((ulong)puVar6 & 7) != 0)) {
                  puVar6 = (undefined8 *)((long)puVar4 + 7);
                  *(undefined1 *)((long)puVar4 + 6) = *(undefined1 *)((long)param_1 + 6);
                  puVar7 = (undefined8 *)((long)param_1 + 7);
                  uVar9 = uVar10 + 2;
                  if ((uVar5 != 0xffffffffffffffff) && (((ulong)puVar6 & 7) != 0)) {
                    *(undefined1 *)((long)puVar4 + 7) = *(undefined1 *)((long)param_1 + 7);
                    puVar7 = param_1 + 1;
                    uVar9 = uVar5;
                    puVar6 = puVar4 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar9 < 0x20) {
    }
    else {
      uVar5 = uVar9 - 0x20;
      uVar10 = uVar9;
      if ((uVar5 & 0x20) == 0) {
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
        puVar6[3] = puVar7[3];
        puVar6 = puVar6 + 4;
        puVar7 = puVar7 + 4;
        uVar10 = uVar5;
      }
      uVar9 = uVar5;
      if (0x1f < uVar5) {
        do {
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
          puVar6[3] = puVar7[3];
          puVar6[4] = puVar7[4];
          puVar6[5] = puVar7[5];
          puVar6[6] = puVar7[6];
          puVar6[7] = puVar7[7];
          puVar6 = puVar6 + 8;
          puVar7 = puVar7 + 8;
          uVar10 = uVar10 - 0x40;
          uVar9 = uVar10;
        } while (0x1f < uVar10);
      }
    }
    if (uVar9 < 8) {
      param_1 = puVar7;
      puVar8 = puVar6;
    }
    else {
      if ((0x27 < uVar9 - 8) && (0x1f < (ulong)((long)puVar6 - (long)puVar7))) {
        uVar5 = (uVar9 - 8 >> 3) + 1;
        uVar10 = uVar5 & 0xfffffffffffffffc;
        param_1 = puVar7 + uVar10;
        puVar8 = puVar6 + uVar10;
        uVar9 = uVar9 + uVar10 * -8;
        uVar11 = 0;
        do {
          uVar1 = (puVar7 + uVar11)[1];
          uVar2 = puVar7[uVar11 + 2];
          uVar3 = (puVar7 + uVar11 + 2)[1];
          puVar6[uVar11] = puVar7[uVar11];
          (puVar6 + uVar11)[1] = uVar1;
          puVar6[uVar11 + 2] = uVar2;
          (puVar6 + uVar11 + 2)[1] = uVar3;
          uVar11 = uVar11 + 4;
        } while (uVar10 != uVar11);
        puVar7 = param_1;
        puVar6 = puVar8;
        if (uVar5 == uVar10) goto LAB_10002c19;
      }
      do {
        param_1 = puVar7 + 1;
        *puVar6 = *puVar7;
        puVar8 = puVar6 + 1;
        uVar9 = uVar9 - 8;
        puVar7 = param_1;
        puVar6 = puVar8;
      } while (7 < uVar9);
    }
    goto LAB_10002c19;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10002f38:
    puVar7 = param_1;
  }
  else {
    if (uVar9 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar1 = ((undefined8 *)((long)param_1 + uVar5))[1];
        puVar6 = (undefined8 *)((long)param_1 + uVar5 + 0x10);
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *(undefined8 *)((long)puVar8 + uVar5) = *(undefined8 *)((long)param_1 + uVar5);
        ((undefined8 *)((long)puVar8 + uVar5))[1] = uVar1;
        puVar6 = (undefined8 *)((long)puVar8 + uVar5 + 0x10);
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        uVar5 = uVar5 + 0x20;
      } while (uVar10 != uVar5);
      if (uVar9 == uVar10) {
        return puVar4;
      }
      if ((uVar9 & 0x1c) == 0) {
        param_1 = (undefined8 *)((long)param_1 + uVar10);
        puVar6 = (undefined8 *)((long)puVar8 + uVar10);
        uVar5 = (ulong)((uint)uVar9 & 0x1f);
        goto LAB_10002f38;
      }
    }
    uVar11 = uVar9 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)uVar9 & 3);
    puVar6 = (undefined8 *)((long)puVar8 + uVar11);
    puVar7 = (undefined8 *)((long)param_1 + uVar11);
    do {
      *(undefined4 *)((long)puVar8 + uVar10) = *(undefined4 *)((long)param_1 + uVar10);
      uVar10 = uVar10 + 4;
    } while (uVar11 != uVar10);
    if (uVar9 == uVar11) {
      return puVar4;
    }
  }
  uVar10 = uVar5 - 1;
  if ((uVar5 & 7) != 0) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)puVar6 + uVar9) = *(undefined1 *)((long)puVar7 + uVar9);
      uVar9 = uVar9 + 1;
    } while ((uVar5 & 7) != uVar9);
    uVar5 = uVar5 - uVar9;
    puVar6 = (undefined8 *)((long)puVar6 + uVar9);
    puVar7 = (undefined8 *)((long)puVar7 + uVar9);
  }
  if (uVar10 < 7) {
    return puVar4;
  }
  uVar10 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar10) = *(undefined1 *)((long)puVar7 + uVar10);
    *(undefined1 *)((long)puVar6 + uVar10 + 1) = *(undefined1 *)((long)puVar7 + uVar10 + 1);
    *(undefined1 *)((long)puVar6 + uVar10 + 2) = *(undefined1 *)((long)puVar7 + uVar10 + 2);
    *(undefined1 *)((long)puVar6 + uVar10 + 3) = *(undefined1 *)((long)puVar7 + uVar10 + 3);
    *(undefined1 *)((long)puVar6 + uVar10 + 4) = *(undefined1 *)((long)puVar7 + uVar10 + 4);
    *(undefined1 *)((long)puVar6 + uVar10 + 5) = *(undefined1 *)((long)puVar7 + uVar10 + 5);
    *(undefined1 *)((long)puVar6 + uVar10 + 6) = *(undefined1 *)((long)puVar7 + uVar10 + 6);
    *(undefined1 *)((long)puVar6 + uVar10 + 7) = *(undefined1 *)((long)puVar7 + uVar10 + 7);
    uVar10 = uVar10 + 8;
  } while (uVar5 != uVar10);
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
 * Address: 0x10002ff0
 */

char * recovered_10002ff0(char *param_1,char param_2)

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
 * Address: 0x10003030
 */

long recovered_10003030(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;

  cVar2 = *param_1;
  if (cVar2 == '\0') {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*param_2 == '\0') {
      return 0;
    }
    cVar4 = *param_2;
    pcVar3 = param_2;
    while (pcVar3 = pcVar3 + 1, cVar2 != cVar4) {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        return lVar1;
      }
    }
    cVar2 = param_1[lVar1 + 1];
    lVar1 = lVar1 + 1;
  } while (cVar2 != '\0');
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

char * recovered_10003090(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char cVar3;

  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return (char *)0x0;
  }
  do {
    if (*param_2 != '\0') {
      cVar3 = *param_2;
      pcVar2 = param_2;
      do {
        pcVar2 = pcVar2 + 1;
        if (cVar1 == cVar3) {
          return param_1;
        }
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030f0
 */

char * recovered_100030f0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  char cVar3;

  if (*param_2 == '\0') {
    return param_1;
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  do {
    lVar2 = 0;
    cVar3 = *param_2;
    while (param_1[lVar2] == cVar3) {
      cVar3 = param_2[lVar2 + 1];
      lVar2 = lVar2 + 1;
      if (cVar3 == '\0') {
        return param_1;
      }
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {
      return (char *)0x0;
    }
  } while( true );
}


#undef DAT_1000cf30
#define DAT_1000cf30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003150
 */

undefined * recovered_10003150(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000cf30;
}

#undef DAT_1000cf30

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x229eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

undefined ** recovered_10003160(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000f000;
}

#undef PTR_DAT_1000f000

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
#define _DAT_00006968 (*(uint *)(0x6968U))
#define uStack_20 (*(undefined8 *)(frame + 32))
#define uStack_18 (*(undefined8 *)(frame + 40))
#define local_28 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003170
 */

/* WARNING: Removing unreachable block (ram,0x10003186) */
/* WARNING: Removing unreachable block (ram,0x100031d3) */
/* WARNING: Removing unreachable block (ram,0x100031de) */
/* WARNING: Removing unreachable block (ram,0x100031e7) */
/* WARNING: Removing unreachable block (ram,0x100031f0) */
/* WARNING: Removing unreachable block (ram,0x100031dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003170(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  uStack_18 = 0;
  uStack_20 = 0;
  if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
     (((_DAT_00006808 < 0x16c || ((code *)(ulong)_DAT_00006968 == (code *)0x0)) ||
      (iVar1 = (*(code *)(ulong)_DAT_00006968)(local_28), iVar1 == 0)))) {
    uStack_20 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = uStack_20;
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
#undef uStack_20
#undef uStack_18
#undef local_28

#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

double recovered_10003270(double param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  double dVar3;

  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar1 = param_2;
      if ((-param_2 & 7) != 0) {
        iVar2 = 0;
        do {
          param_1 = param_1 * DAT_1000cd70;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 *
                    DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70;
          uVar1 = uVar1 + 8;
        } while (uVar1 != 0);
      }
    }
  }
  else {
    uVar1 = param_2;
    if ((param_2 & 7) != 0) {
      uVar1 = 0;
      do {
        param_1 = param_1 + param_1;
        uVar1 = uVar1 + 1;
      } while ((param_2 & 7) != uVar1);
      uVar1 = param_2 - uVar1;
    }
    if (7 < param_2) {
      uVar1 = uVar1 - 1;
      do {
        dVar3 = param_1 + param_1 + param_1 + param_1;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        param_1 = dVar3 + dVar3;
        uVar1 = uVar1 - 8;
      } while (uVar1 < 0xfffffffe);
    }
  }
  return param_1;
}

#undef DAT_1000cd70

#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cdf0
#define DAT_1000cdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_1000cdf0
#define _DAT_1000cdf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003340(double param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar2 = (double)(_DAT_1000cdf0 ^ (ulong)param_1);
  if ((double)(_DAT_1000cdf0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000cd78 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000cd70;
      iVar1 = iVar1 + 1;
    } while (DAT_1000cd78 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000cd70)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000cdf0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000cd70
#undef DAT_1000cd78
#undef DAT_1000cdf0
#undef _DAT_1000cdf0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003410
 */

double recovered_10003410(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003440
 */

double recovered_10003440(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;

  dVar4 = 0.0;
  if (((double)(int)param_2 == param_2) && (!NAN((double)(int)param_2) && !NAN(param_2))) {
    uVar2 = (uint)param_2;
    if (uVar2 == 0) {
      return DAT_1000cd78;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000cd78;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000cd78 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000cd78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034c0
 */

ulong recovered_100034c0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034f0
 */

ulong recovered_100034f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_1000cd78 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000cd78

#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003550
 */

double recovered_10003550(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000cd78) {
      dVar1 = DAT_1000cd78;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cd70;
  }
  return dVar1;
}

#undef DAT_1000cd70
#undef DAT_1000cd78

#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cd80
#define DAT_1000cd80 (*(double *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_1000cd88
#define DAT_1000cd88 (*(double *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_1000cd90
#define DAT_1000cd90 (*(double *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_1000cd98
#define DAT_1000cd98 (*(double *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_1000cda0
#define DAT_1000cda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_1000cda8
#define DAT_1000cda8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_1000ce00
#define DAT_1000ce00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef DAT_1000ce10
#define DAT_1000ce10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaeU)))
#undef DAT_1000ce20
#define DAT_1000ce20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeU)))
#undef DAT_1000ce30
#define DAT_1000ce30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef _DAT_1000cda0
#define _DAT_1000cda0 (*(double *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef _DAT_1000cda8
#define _DAT_1000cda8 (*(double *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_1000ce00
#define _DAT_1000ce00 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef _DAT_1000ce10
#define _DAT_1000ce10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xaeU)))
#undef _DAT_1000ce20
#define _DAT_1000ce20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbeU)))
#undef _DAT_1000ce30
#define _DAT_1000ce30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003700(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  double dVar3;
  uint128 auVar4;
  uint128 auVar5;
  double dVar6;
  uint128 auVar7;
  uint128 auVar8;

  if (0.0 < param_1) {
    iVar1 = 0;
    if (DAT_1000cd88 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000cd70;
        iVar1 = iVar1 + 1;
      } while (DAT_1000cd88 < param_1);
    }
    for (; param_1 < DAT_1000cd90; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000cd98 + param_1) / (param_1 + DAT_1000cd78);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000ce00);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000ce10);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000ce20);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000ce30);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000cda0 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000cda8;
  }
  return DAT_1000cd80;
}

#undef DAT_1000cd70
#undef DAT_1000cd78
#undef DAT_1000cd80
#undef DAT_1000cd88
#undef DAT_1000cd90
#undef DAT_1000cd98
#undef DAT_1000cda0
#undef DAT_1000cda8
#undef DAT_1000ce00
#undef DAT_1000ce10
#undef DAT_1000ce20
#undef DAT_1000ce30
#undef _DAT_1000cda0
#undef _DAT_1000cda8
#undef _DAT_1000ce00
#undef _DAT_1000ce10
#undef _DAT_1000ce20
#undef _DAT_1000ce30

#undef DAT_1000ce40
#define DAT_1000ce40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003850
 */

long recovered_10003850(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000ce40 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000ce40

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cdb0
#define DAT_1000cdb0 (*(double *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_1000cdb8
#define DAT_1000cdb8 (*(double *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_1000cdc0
#define DAT_1000cdc0 (*(double *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_1000cdc8
#define DAT_1000cdc8 (*(double *)(((uintptr_t)pf_module_state + 0x66U)))
#undef DAT_1000cdd0
#define DAT_1000cdd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef _DAT_1000cdd0
#define _DAT_1000cdd0 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003880(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000cdb0 < param_1; param_1 = param_1 + DAT_1000cdb8) {
  }
  for (; param_1 < DAT_1000cdc0; param_1 = param_1 + DAT_1000cdc8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ce50);
  return ((dVar1 / _DAT_1000cdd0 + DAT_1000cd78 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000cd78
#undef DAT_1000cdb0
#undef DAT_1000cdb8
#undef DAT_1000cdc0
#undef DAT_1000cdc8
#undef DAT_1000cdd0
#undef DAT_1000ce50
#undef _DAT_1000cdd0
#undef _DAT_1000ce50

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cdb0
#define DAT_1000cdb0 (*(double *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_1000cdb8
#define DAT_1000cdb8 (*(double *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_1000cdc0
#define DAT_1000cdc0 (*(double *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_1000cdc8
#define DAT_1000cdc8 (*(double *)(((uintptr_t)pf_module_state + 0x66U)))
#undef DAT_1000cdd8
#define DAT_1000cdd8 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_1000ce60
#define DAT_1000ce60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef _DAT_1000ce60
#define _DAT_1000ce60 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003930(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000cdb0 < param_1; param_1 = param_1 + DAT_1000cdb8) {
  }
  for (; param_1 < DAT_1000cdc0; param_1 = param_1 + DAT_1000cdc8) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ce60);
  return (DAT_1000cdd8 * dVar1 + DAT_1000cd78 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000cd78
#undef DAT_1000cdb0
#undef DAT_1000cdb8
#undef DAT_1000cdc0
#undef DAT_1000cdc8
#undef DAT_1000cdd8
#undef DAT_1000ce60
#undef _DAT_1000ce60

#undef DAT_1000cdf0
#define DAT_1000cdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_1000cdf0
#define _DAT_1000cdf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100039d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000cdf0 ^ (ulong)param_1);
  if ((double)(_DAT_1000cdf0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000cdf0
#undef _DAT_1000cdf0

/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_100039f0(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003ac0(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10003b70(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10003bc0(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c50
 */

float recovered_10003c50(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cdf0
#define DAT_1000cdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef UNK_1000cdf4
#define UNK_1000cdf4 (*(uint *)(((uintptr_t)pf_module_state + 0x92U)))
#undef _DAT_1000cdf0
#define _DAT_1000cdf0 (*(uint *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef uRam000000001000cdf4
#define uRam000000001000cdf4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003ca0(float param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar2 = (double)param_1;
  if (param_1 < 0.0) {
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001000cdf4,
                             SUB84(dVar2,0) ^ _DAT_1000cdf0));
  }
  iVar1 = 0;
  if (DAT_1000cd78 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000cd70;
      iVar1 = iVar1 + 1;
    } while (DAT_1000cd78 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000cd70)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000cdf4,_DAT_1000cdf0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1000cd70
#undef DAT_1000cd78
#undef DAT_1000cdf0
#undef UNK_1000cdf4
#undef _DAT_1000cdf0
#undef uRam000000001000cdf4

#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d60
 */

undefined8 recovered_10003d60(float param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  double dVar3;

  dVar3 = (double)param_1;
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar1 = param_2;
      if ((-param_2 & 7) != 0) {
        iVar2 = 0;
        do {
          dVar3 = dVar3 * DAT_1000cd70;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 *
                  DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70;
          uVar1 = uVar1 + 8;
        } while (uVar1 != 0);
      }
    }
  }
  else {
    uVar1 = param_2;
    if ((param_2 & 7) != 0) {
      uVar1 = 0;
      do {
        dVar3 = dVar3 + dVar3;
        uVar1 = uVar1 + 1;
      } while ((param_2 & 7) != uVar1);
      uVar1 = param_2 - uVar1;
    }
    if (7 < param_2) {
      uVar1 = uVar1 - 1;
      do {
        dVar3 = dVar3 + dVar3 + dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        dVar3 = dVar3 + dVar3;
        uVar1 = uVar1 - 8;
      } while (uVar1 < 0xfffffffe);
    }
  }
  return CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3);
}

#undef DAT_1000cd70

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000ce80
#define DAT_1000ce80 (*(float *)(((uintptr_t)pf_module_state + 0x11eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e50
 */

float recovered_10003e50(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;

  if (((float)(int)param_2 != param_2) || (NAN((float)(int)param_2) || NAN(param_2))) {
    return 0.0;
  }
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    return DAT_1000ce80;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000cd78;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000cd78 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000cd78
#undef DAT_1000ce80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ee0
 */

undefined8 recovered_10003ee0(undefined1 in_XMM0 [16],ulong in_XMM2_Qb)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  ulong uVar2;
  float fVar3;
  uint128 auVar4;
  uint128 auVar5;

  fVar3 = (*(float *)((uint8_t *)&(in_XMM0)+0));
  uVar2 = -(ulong)((double)fVar3 < (double)(int)fVar3);
  PF_PART8(auVar4, 0) = ~uVar2 & (ulong)(double)(int)fVar3;
  PF_PART8(auVar4, 8) = ~PF_PART8(in_XMM0, 8) & (ulong)(double)(int)(*(float *)((uint8_t *)&(in_XMM0)+4));
  PF_PART8(auVar1, 8) = in_XMM2_Qb & PF_PART8(in_XMM0, 8);
  PF_PART8(auVar1, 0) = (ulong)(double)((int)fVar3 + -1) & uVar2;
  PF_PART12(auVar5, 4) = SUB1612(auVar4 | auVar1,4);
  (*(float *)((uint8_t *)&(auVar5)+0)) = (float)SUB168(auVar4 | auVar1,0);
  return PF_PART8(auVar5, 0);
}


#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f20
 */

float recovered_10003f20(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000cd78 + dVar2) & uVar1);
}

#undef DAT_1000cd78

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f80
 */

double recovered_10003f80(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000cd78 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000cd78

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fe0
 */

undefined8 recovered_10003fe0(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  float fVar2;
  uint128 auVar4;
  double dVar3;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;

  fVar2 = (float)param_1;
  uVar1 = -(ulong)((double)fVar2 < (double)(int)fVar2);
  PF_PART8(auVar7, 0) = (ulong)(double)((int)fVar2 + -1) & uVar1;
  PF_PART8(auVar7, 8) = 0;
  PF_PART8(auVar4, 0) = ~uVar1 & (ulong)(double)(int)fVar2;
  (*(double *)((uint8_t *)&(auVar4)+8)) = (double)(int)(float)((ulong)param_1 >> 0x20);
  auVar5 = auVar4 | auVar7;
  if (fVar2 < 0.0) {
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    uVar1 = -(ulong)(dVar3 < (double)fVar2);
    PF_PART8(auVar5, 8) = 0;
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000cd78 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000cd78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004050
 */

float recovered_10004050(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003550((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cd88
#define DAT_1000cd88 (*(double *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_1000cd90
#define DAT_1000cd90 (*(double *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_1000cd98
#define DAT_1000cd98 (*(double *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_1000cda0
#define DAT_1000cda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_1000cda8
#define DAT_1000cda8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_1000ce00
#define DAT_1000ce00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef DAT_1000ce10
#define DAT_1000ce10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaeU)))
#undef DAT_1000ce20
#define DAT_1000ce20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeU)))
#undef DAT_1000ce30
#define DAT_1000ce30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_1000ce84
#define DAT_1000ce84 (*(float *)(((uintptr_t)pf_module_state + 0x122U)))
#undef DAT_1000ce88
#define DAT_1000ce88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x126U)))
#undef _DAT_1000cda0
#define _DAT_1000cda0 (*(double *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef _DAT_1000cda8
#define _DAT_1000cda8 (*(double *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_1000ce00
#define _DAT_1000ce00 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9eU)))
#undef _DAT_1000ce10
#define _DAT_1000ce10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xaeU)))
#undef _DAT_1000ce20
#define _DAT_1000ce20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbeU)))
#undef _DAT_1000ce30
#define _DAT_1000ce30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xceU)))
#undef _DAT_1000ce88
#define _DAT_1000ce88 (*(float *)(((uintptr_t)pf_module_state + 0x126U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004070(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  uint128 auVar3;
  double dVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;

  if (0.0 < param_1) {
    dVar2 = (double)param_1;
    iVar1 = 0;
    if (_DAT_1000ce88 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000cd70;
        iVar1 = iVar1 + 1;
      } while (DAT_1000cd88 < dVar2);
    }
    for (; dVar2 < DAT_1000cd90; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000cd98 + dVar2) / (dVar2 + DAT_1000cd78);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000ce00);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000ce10);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000ce20);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000ce30);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000cda0 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000cda8);
  }
  return DAT_1000ce84;
}

#undef DAT_1000cd70
#undef DAT_1000cd78
#undef DAT_1000cd88
#undef DAT_1000cd90
#undef DAT_1000cd98
#undef DAT_1000cda0
#undef DAT_1000cda8
#undef DAT_1000ce00
#undef DAT_1000ce10
#undef DAT_1000ce20
#undef DAT_1000ce30
#undef DAT_1000ce84
#undef DAT_1000ce88
#undef _DAT_1000cda0
#undef _DAT_1000cda8
#undef _DAT_1000ce00
#undef _DAT_1000ce10
#undef _DAT_1000ce20
#undef _DAT_1000ce30
#undef _DAT_1000ce88

#undef DAT_1000ce40
#define DAT_1000ce40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c0
 */

long recovered_100041c0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000ce40 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000ce40

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cdb0
#define DAT_1000cdb0 (*(double *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_1000cdb8
#define DAT_1000cdb8 (*(double *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_1000cdc0
#define DAT_1000cdc0 (*(double *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_1000cdc8
#define DAT_1000cdc8 (*(double *)(((uintptr_t)pf_module_state + 0x66U)))
#undef DAT_1000cdd0
#define DAT_1000cdd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef _DAT_1000cdd0
#define _DAT_1000cdd0 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(uint128 *)(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100041f0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000cdb0 < dVar1; dVar1 = dVar1 + DAT_1000cdb8) {
  }
  for (; dVar1 < DAT_1000cdc0; dVar1 = dVar1 + DAT_1000cdc8) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000ce50);
  return (float)(((dVar2 / _DAT_1000cdd0 + DAT_1000cd78 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000cd78
#undef DAT_1000cdb0
#undef DAT_1000cdb8
#undef DAT_1000cdc0
#undef DAT_1000cdc8
#undef DAT_1000cdd0
#undef DAT_1000ce50
#undef _DAT_1000cdd0
#undef _DAT_1000ce50

#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cdb0
#define DAT_1000cdb0 (*(double *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_1000cdb8
#define DAT_1000cdb8 (*(double *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_1000cdc0
#define DAT_1000cdc0 (*(double *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_1000cdc8
#define DAT_1000cdc8 (*(double *)(((uintptr_t)pf_module_state + 0x66U)))
#undef DAT_1000cdd8
#define DAT_1000cdd8 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_1000ce60
#define DAT_1000ce60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef _DAT_1000ce60
#define _DAT_1000ce60 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100042a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000cdb0 < dVar1; dVar1 = dVar1 + DAT_1000cdb8) {
  }
  for (; dVar1 < DAT_1000cdc0; dVar1 = dVar1 + DAT_1000cdc8) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ce60);
  return (float)((DAT_1000cdd8 * dVar1 + DAT_1000cd78 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000cd78
#undef DAT_1000cdb0
#undef DAT_1000cdb8
#undef DAT_1000cdc0
#undef DAT_1000cdc8
#undef DAT_1000cdd8
#undef DAT_1000ce60
#undef _DAT_1000ce60

#undef DAT_1000ce70
#define DAT_1000ce70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10eU)))
#undef UNK_1000ce74
#define UNK_1000ce74 (*(uint *)(((uintptr_t)pf_module_state + 0x112U)))
#undef _DAT_1000ce70
#define _DAT_1000ce70 (*(uint *)(((uintptr_t)pf_module_state + 0x10eU)))
#undef uRam000000001000ce74
#define uRam000000001000ce74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x112U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004340(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000ce70 ^ (uint)fVar1);
  if ((float)(_DAT_1000ce70 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000ce74 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000ce70
#undef UNK_1000ce74
#undef _DAT_1000ce70
#undef uRam000000001000ce74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004360
 */

long recovered_10004360(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;

  for (pbVar8 = param_1; (bVar1 = *pbVar8, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  uVar9 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar8 + uVar9;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar8[uVar9 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar8 + uVar9 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar8[uVar9 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar8 + uVar9 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    bVar2 = *pbVar5;
    iVar3 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar4 = iVar3 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar4 = iVar3 - 0x57;
    }
    else {
      uVar4 = iVar3 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar4 = 0xffffffff;
      }
    }
    if (param_3 <= uVar4) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar4;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar6 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar6 = lVar7;
  }
  return lVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

long recovered_10004490(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;

  for (pbVar8 = param_1; (bVar1 = *pbVar8, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar8 = pbVar8 + 1) {
  }
  uVar9 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar8 + uVar9;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar8[uVar9 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar8 + uVar9 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar8[uVar9 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar8 + uVar9 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    bVar2 = *pbVar5;
    iVar3 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar4 = iVar3 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar4 = iVar3 - 0x57;
    }
    else {
      uVar4 = iVar3 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar4 = 0xffffffff;
      }
    }
    if (param_3 <= uVar4) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar4;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar6 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar6 = lVar7;
  }
  return lVar6;
}


#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cde8
#define DAT_1000cde8 (*(double *)(((uintptr_t)pf_module_state + 0x86U)))
#undef DAT_1000cdf0
#define DAT_1000cdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_1000cdf0
#define _DAT_1000cdf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100045c0(byte *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;

  for (pbVar3 = param_1; (bVar1 = *pbVar3, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar3 = pbVar3 + 1) {
  }
  pbVar3 = pbVar3 + ((bVar1 - 0x2b & 0xfd) == 0);
  bVar2 = *pbVar3;
  dVar11 = 0.0;
  bVar6 = bVar2 - 0x30U;
  bVar9 = bVar6;
  while (uVar4 = (uint)bVar2, bVar9 < 10) {
    dVar11 = dVar11 * DAT_1000cde8 + (double)(int)(uVar4 - 0x30);
    bVar2 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
    bVar9 = bVar2 - 0x30U;
  }
  if (bVar2 == 0x2e) {
    pbVar5 = pbVar3 + 1;
    uVar4 = (uint)*pbVar5;
    pbVar3 = pbVar3 + 1;
    if ((byte)(*pbVar5 - 0x30U) < 10) {
      dVar12 = 0.0;
      dVar13 = DAT_1000cd78;
      do {
        dVar12 = dVar12 * DAT_1000cde8 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000cde8;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10004699;
    }
  }
  dVar12 = 0.0;
  if (9 < bVar6) {
    if (param_2 == (undefined8 *)0x0) {
      return 0.0;
    }
    *param_2 = param_1;
    return 0.0;
  }
LAB_10004699:
  dVar11 = dVar11 + dVar12;
  if ((uVar4 | 0x20) == 0x65) {
    iVar10 = 1;
    if (pbVar3[1] == 0x2b) {
      pbVar5 = pbVar3 + 2;
    }
    else if (pbVar3[1] == 0x2d) {
      pbVar5 = pbVar3 + 2;
      iVar10 = -1;
    }
    else {
      pbVar5 = pbVar3 + 1;
    }
    bVar2 = *pbVar5;
    bVar9 = bVar2 - 0x30U;
    if (bVar9 < 10) {
      iVar7 = 0;
      do {
        iVar7 = (uint)bVar2 + iVar7 * 10 + -0x30;
        bVar2 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while ((byte)(bVar2 - 0x30U) < 10);
      if (bVar9 < 10) {
        uVar4 = iVar7 * iVar10;
        if ((int)uVar4 < 1) {
          if ((int)uVar4 < 0) {
            uVar8 = -(iVar7 * iVar10) & 7;
            if (uVar8 == 0) {
              uVar8 = uVar4;
            }
            else {
              iVar10 = 0;
              do {
                dVar11 = dVar11 * DAT_1000cd70;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 *
                         DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70 * DAT_1000cd70;
                uVar8 = uVar8 + 8;
              } while (uVar8 != 0);
            }
          }
        }
        else {
          uVar8 = uVar4;
          if ((uVar4 & 7) != 0) {
            uVar8 = 0;
            do {
              dVar11 = dVar11 + dVar11;
              uVar8 = uVar8 + 1;
            } while ((uVar4 & 7) != uVar8);
            uVar8 = uVar4 - uVar8;
          }
          if (7 < uVar4) {
            uVar8 = uVar8 - 1;
            do {
              dVar11 = dVar11 + dVar11 + dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              dVar11 = dVar11 + dVar11;
              uVar8 = uVar8 - 8;
            } while (uVar8 < 0xfffffffe);
          }
        }
        pbVar3 = pbVar5;
      }
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar3;
  }
  if (bVar1 == 0x2d) {
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000cdf0);
  }
  return dVar11;
}

#undef DAT_1000cd70
#undef DAT_1000cd78
#undef DAT_1000cde8
#undef DAT_1000cdf0
#undef _DAT_1000cdf0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004820
 */

float recovered_10004820(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100045c0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000cde8
#define DAT_1000cde8 (*(double *)(((uintptr_t)pf_module_state + 0x86U)))
#undef DAT_1000cdf0
#define DAT_1000cdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef DAT_1000cf34
#define DAT_1000cf34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef _DAT_1000cdf0
#define _DAT_1000cdf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef str_1000cf3b
#define str_1000cf3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d9U)))
#undef str_1000cf4c
#define str_1000cf4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaU)))
#define abStack_7a (*(byte (*)[66])(frame + 22))
#define local_38 (*(uint * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004830(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  ushort *puVar3;
  bool bVar4;
  double dVar5;
  ulong uVar6;
  byte bVar7;
  char cVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  double *pdVar11;
  ulong uVar12;
  byte *pbVar13;
  short *psVar14;
  int *piVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;

  if (param_2 != 0) {
    *param_1 = 0;
  }
  uVar6 = _DAT_1000cdf0;
  dVar5 = DAT_1000cde8;
  uVar12 = 0;
  uVar23 = param_2;
LAB_10004899:
  bVar7 = *param_3;
  uVar19 = (uint)uVar12;
  if (bVar7 != 0x25) {
    if (bVar7 == 0) {
      if (param_2 != 0) {
        *param_1 = 0;
      }
      return uVar12 & 0xffffffff;
    }
    if (1 < uVar23) {
      *param_1 = bVar7;
      goto LAB_100048b2;
    }
    goto LAB_10004893;
  }
  bVar7 = param_3[1];
  if (bVar7 == 0x25) {
    if (1 < uVar23) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_10004893;
  }
  uVar22 = uVar12 & 0xffffffff;
  pbVar13 = param_3 + 2;
  while (bVar7 < 0x31) {
    if ((0x1280900000000U >> ((ulong)bVar7 & 0x3f) & 1) == 0) {
      if ((ulong)bVar7 == 0x2a) {
        if (*param_4 < 0x29) {
          *param_4 = *param_4 + 8;
        }
        else {
          *(long *)(param_4 + 2) = *(long *)(param_4 + 2) + 8;
        }
        bVar7 = *pbVar13;
        param_3 = pbVar13;
        goto joined_r0x10004943;
      }
      break;
    }
    param_3 = param_3 + 1;
    bVar7 = *pbVar13;
    pbVar13 = pbVar13 + 1;
  }
  do {
    bVar7 = param_3[1];
    param_3 = param_3 + 1;
  } while ((byte)(bVar7 - 0x30U) < 10);
joined_r0x10004943:
  if (bVar7 == 0x2e) {
    if (param_3[1] == 0x2a) {
      if (*param_4 < 0x29) {
        *param_4 = *param_4 + 8;
      }
      else {
        *(long *)(param_4 + 2) = *(long *)(param_4 + 2) + 8;
      }
      bVar7 = param_3[2];
      param_3 = param_3 + 2;
    }
    else {
      do {
        bVar7 = param_3[1];
        param_3 = param_3 + 1;
      } while ((byte)(bVar7 - 0x30U) < 10);
    }
  }
  bVar4 = false;
  switch((uintptr_t)(bVar7)) {
  case 0x4c:
    param_3 = param_3 + 1;
    cVar8 = '\b';
    bVar4 = true;
    break;
  default:
    cVar8 = '\0';
    break;
  case 0x68:
    pbVar13 = param_3 + 1;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 1;
    if (*pbVar13 == 0x68) {
      param_3 = pbVar1;
    }
    cVar8 = (*pbVar13 != 0x68) + '\x01';
    bVar4 = false;
    break;
  case 0x6a:
    param_3 = param_3 + 1;
    cVar8 = '\a';
    bVar4 = false;
    break;
  case 0x6c:
    pbVar13 = param_3 + 1;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 1;
    if (*pbVar13 == 0x6c) {
      param_3 = pbVar1;
    }
    cVar8 = (*pbVar13 == 0x6c) + '\x03';
    bVar4 = false;
    break;
  case 0x74:
    param_3 = param_3 + 1;
    cVar8 = '\x06';
    bVar4 = false;
    break;
  case 0x7a:
    param_3 = param_3 + 1;
    cVar8 = '\x05';
    bVar4 = false;
  }
  switch((uintptr_t)(*param_3)) {
  case 0x49:
  case 100:
  case 0x69:
    uVar2 = *param_4;
    uVar12 = (ulong)uVar2;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar2 < 0x29) {
        pcVar20 = (char *)(*(long *)(param_4 + 4) + uVar12);
        *param_4 = uVar2 + 8;
      }
      else {
        pcVar20 = *(char **)(param_4 + 2);
        *(char **)(param_4 + 2) = pcVar20 + 8;
      }
      uVar22 = (ulong)*pcVar20;
      break;
    case '\x02':
      if (uVar2 < 0x29) {
        psVar14 = (short *)(*(long *)(param_4 + 4) + uVar12);
        *param_4 = uVar2 + 8;
      }
      else {
        psVar14 = *(short **)(param_4 + 2);
        *(short **)(param_4 + 2) = psVar14 + 4;
      }
      uVar22 = (ulong)*psVar14;
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar2 < 0x29) {
        puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar12);
        *param_4 = uVar2 + 8;
      }
      else {
LAB_10004d42:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
      }
      goto LAB_10004d4e;
    case '\a':
      if (0x28 < uVar2) goto LAB_10004d42;
      puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar12);
      *param_4 = uVar2 + 8;
LAB_10004d4e:
      uVar22 = *puVar9;
      break;
    default:
      if (uVar2 < 0x29) {
        piVar15 = (int *)(uVar12 + *(long *)(param_4 + 4));
        *param_4 = uVar2 + 8;
      }
      else {
        piVar15 = *(int **)(param_4 + 2);
        *(int **)(param_4 + 2) = piVar15 + 2;
      }
      uVar22 = (ulong)*piVar15;
    }
    if ((long)uVar22 < 0) {
      if (1 < uVar23) {
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        uVar23 = uVar23 - 1;
      }
      uVar19 = uVar19 + 1;
      uVar22 = -uVar22;
    }
    uVar12 = (ulong)uVar19;
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = str_1000cf4c[uVar22 % 10];
      uVar17 = uVar18 + 1;
      bVar4 = 9 < uVar22;
      uVar22 = uVar22 / 10;
    } while (bVar4);
    if (uVar17 != 0) {
      if ((uVar18 & 1) == 0) {
        if (1 < uVar23) {
          *param_1 = abStack_7a[uVar18 + 2];
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
      }
      else {
        uVar18 = uVar17;
      }
      uVar12 = uVar12 + uVar17;
      if (uVar17 != 1) {
        do {
          if (1 < uVar23) {
            *param_1 = abStack_7a[uVar18 + 1];
            param_1 = param_1 + 1;
            uVar23 = uVar23 - 1;
          }
          if (1 < uVar23) {
            *param_1 = abStack_7a[uVar18];
            param_1 = param_1 + 1;
            uVar23 = uVar23 - 1;
          }
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
    }
    goto LAB_10004896;
  default:
    if (1 < uVar23) {
      *param_1 = 0x3f;
LAB_100048b2:
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    break;
  case 0x58:
  case 0x78:
    uVar19 = *param_4;
    uVar12 = (ulong)uVar19;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar12 = (ulong)*(byte *)(*(long *)(param_4 + 4) + uVar12);
      }
      else {
        pbVar13 = *(byte **)(param_4 + 2);
        *(byte **)(param_4 + 2) = pbVar13 + 8;
        uVar12 = (ulong)*pbVar13;
      }
      break;
    case '\x02':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar12 = (ulong)*(ushort *)(*(long *)(param_4 + 4) + uVar12);
      }
      else {
        puVar3 = *(ushort **)(param_4 + 2);
        *(ushort **)(param_4 + 2) = puVar3 + 4;
        uVar12 = (ulong)*puVar3;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar12 = *(ulong *)(*(long *)(param_4 + 4) + uVar12);
      }
      else {
LAB_10004f63:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10004f63;
      *param_4 = uVar19 + 8;
      uVar12 = *(ulong *)(*(long *)(param_4 + 4) + uVar12);
      break;
    default:
      if (uVar19 < 0x29) {
        puVar16 = (uint *)(uVar12 + *(long *)(param_4 + 4));
        *param_4 = uVar19 + 8;
      }
      else {
        puVar16 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar16 + 2;
      }
      uVar12 = (ulong)*puVar16;
    }
    pcVar20 = str_1000cf4c;
    if (*param_3 == 0x58) {
      pcVar20 = str_1000cf3b;
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = pcVar20[(uint)uVar12 & 0xf];
      uVar17 = uVar18 + 1;
      bVar4 = 0xf < uVar12;
      uVar12 = uVar12 >> 4;
    } while (bVar4);
    if ((uVar18 & 1) == 0) {
      if (1 < uVar23) {
        *param_1 = abStack_7a[uVar18 + 2];
        param_1 = param_1 + 1;
        uVar23 = uVar23 - 1;
      }
    }
    else {
      uVar18 = uVar17;
    }
    if (uVar17 != 1) {
      do {
        if (1 < uVar23) {
          *param_1 = abStack_7a[uVar18 + 1];
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
        if (1 < uVar23) {
          *param_1 = abStack_7a[uVar18];
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
        uVar18 = uVar18 - 2;
      } while (uVar18 != 0);
    }
    param_3 = param_3 + 1;
    uVar12 = uVar22 + uVar17 & 0xffffffff;
    goto LAB_10004899;
  case 99:
    uVar2 = *param_4;
    if ((ulong)uVar2 < 0x29) {
      pbVar13 = (byte *)((ulong)uVar2 + *(long *)(param_4 + 4));
      *param_4 = uVar2 + 8;
    }
    else {
      pbVar13 = *(byte **)(param_4 + 2);
      *(byte **)(param_4 + 2) = pbVar13 + 8;
    }
    if (1 < uVar23) {
      *param_1 = *pbVar13;
      goto LAB_100048b2;
    }
    break;
  case 0x66:
    if (bVar4) {
      *(ulong *)(param_4 + 2) = (*(long *)(param_4 + 2) + 0xfU & 0xfffffffffffffff0) + 0x10;
      uVar22 = uVar23;
      if (1 < uVar23) {
        *param_1 = 0x30;
        uVar22 = 1;
        if (uVar23 - 3 < 0xfffffffffffffffe) {
          param_1[1] = 0x2e;
          uVar12 = uVar23 & 0xfffffffffffffffe;
          if (uVar12 == 2) {
            param_1 = param_1 + 2;
          }
          else {
            param_1[2] = 0x30;
            if (uVar23 - 5 < 0xfffffffffffffffe) {
              param_1[3] = 0x30;
              if (uVar12 == 4) {
                param_1 = param_1 + 4;
              }
              else {
                param_1[4] = 0x30;
                if (uVar23 - 7 < 0xfffffffffffffffe) {
                  param_1[5] = 0x30;
                  if (uVar12 == 6) {
                    param_1 = param_1 + 6;
                  }
                  else {
                    param_1[6] = 0x30;
                    if (uVar23 - 9 < 0xfffffffffffffffe) {
                      param_1[7] = 0x30;
                      param_1 = param_1 + 8;
                      uVar22 = uVar23 - 8;
                    }
                    else {
                      param_1 = param_1 + 7;
                    }
                  }
                }
                else {
                  param_1 = param_1 + 5;
                }
              }
            }
            else {
              param_1 = param_1 + 3;
            }
          }
        }
        else {
          param_1 = param_1 + 1;
        }
      }
      uVar12 = (ulong)(uVar19 + 8);
      param_3 = param_3 + 1;
      uVar23 = uVar22;
    }
    else {
      uVar2 = param_4[1];
      if ((ulong)uVar2 < 0xa1) {
        pdVar11 = (double *)((ulong)uVar2 + *(long *)(param_4 + 4));
        param_4[1] = uVar2 + 0x10;
      }
      else {
        pdVar11 = *(double **)(param_4 + 2);
        *(double **)(param_4 + 2) = pdVar11 + 1;
      }
      dVar24 = *pdVar11;
      local_38 = param_4;
      if (0.0 <= dVar24) {
        uVar12 = uVar23;
      }
      else {
        if (1 < uVar23) {
          *param_1 = 0x2d;
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
        uVar19 = uVar19 + 1;
        dVar24 = (double)((ulong)dVar24 ^ uVar6);
        uVar12 = uVar23;
      }
      uVar23 = 0;
      uVar22 = (ulong)(uint)(int)dVar24;
      do {
        uVar17 = uVar23;
        abStack_7a[uVar17 + 2] = str_1000cf4c[uVar22 % 10];
        uVar23 = uVar17 + 1;
        bVar4 = 9 < uVar22;
        uVar22 = uVar22 / 10;
      } while (bVar4);
      if (uVar23 != 0) {
        if ((uVar17 & 1) == 0) {
          if (1 < uVar12) {
            *param_1 = abStack_7a[uVar17 + 2];
            param_1 = param_1 + 1;
            uVar12 = uVar12 - 1;
          }
        }
        else {
          uVar17 = uVar23;
        }
        uVar19 = uVar19 + (int)uVar23;
        if (uVar23 != 1) {
          do {
            if (1 < uVar12) {
              *param_1 = abStack_7a[uVar17 + 1];
              param_1 = param_1 + 1;
              uVar12 = uVar12 - 1;
            }
            if (1 < uVar12) {
              *param_1 = abStack_7a[uVar17];
              param_1 = param_1 + 1;
              uVar12 = uVar12 - 1;
            }
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
      }
      uVar23 = uVar12;
      if (1 < uVar12) {
        *param_1 = 0x2e;
        uVar23 = uVar12 - 1;
        if (uVar23 < 2) {
          param_1 = param_1 + 1;
        }
        else {
          dVar24 = (dVar24 - (double)(int)dVar24) * dVar5;
          iVar21 = (int)dVar24;
          param_1[1] = (char)iVar21 + 0x30;
          uVar22 = uVar12 & 0xfffffffffffffffe;
          uVar23 = 1;
          if (uVar22 == 2) {
            param_1 = param_1 + 2;
          }
          else {
            dVar24 = (dVar24 - (double)iVar21) * dVar5;
            iVar21 = (int)dVar24;
            param_1[2] = (char)iVar21 + 0x30;
            if (uVar12 - 5 < 0xfffffffffffffffe) {
              dVar24 = (dVar24 - (double)iVar21) * dVar5;
              iVar21 = (int)dVar24;
              param_1[3] = (char)iVar21 + 0x30;
              if (uVar22 == 4) {
                param_1 = param_1 + 4;
              }
              else {
                dVar24 = (dVar24 - (double)iVar21) * dVar5;
                param_1[4] = (char)(int)dVar24 + 0x30;
                if (uVar12 - 7 < 0xfffffffffffffffe) {
                  dVar24 = (dVar24 - (double)(int)dVar24) * dVar5;
                  iVar21 = (int)dVar24;
                  param_1[5] = (char)iVar21 + 0x30;
                  if (uVar22 == 6) {
                    param_1 = param_1 + 6;
                  }
                  else {
                    param_1[6] = (char)(int)((dVar24 - (double)iVar21) * dVar5) + 0x30;
                    param_1 = param_1 + 7;
                    uVar23 = uVar12 - 7;
                  }
                }
                else {
                  param_1 = param_1 + 5;
                }
              }
            }
            else {
              param_1 = param_1 + 3;
            }
          }
        }
      }
      uVar12 = (ulong)(uVar19 + 7);
      param_3 = param_3 + 1;
      param_4 = local_38;
    }
    goto LAB_10004899;
  case 0x70:
    uVar2 = *param_4;
    if ((ulong)uVar2 < 0x29) {
      puVar9 = (ulong *)((ulong)uVar2 + *(long *)(param_4 + 4));
      *param_4 = uVar2 + 8;
    }
    else {
      puVar9 = *(ulong **)(param_4 + 2);
      *(ulong **)(param_4 + 2) = puVar9 + 1;
    }
    uVar22 = *puVar9;
    if (1 < uVar23) {
      *param_1 = 0x30;
      if (uVar23 - 3 < 0xfffffffffffffffe) {
        param_1[1] = 0x78;
        param_1 = param_1 + 2;
        uVar23 = uVar23 - 2;
      }
      else {
        param_1 = param_1 + 1;
        uVar23 = 1;
      }
    }
    uVar12 = 0;
    do {
      uVar17 = uVar12;
      abStack_7a[uVar17 + 2] = str_1000cf4c[(uint)uVar22 & 0xf];
      uVar12 = uVar17 + 1;
      bVar4 = 0xf < uVar22;
      uVar22 = uVar22 >> 4;
    } while (bVar4);
    if ((uVar17 & 1) == 0) {
      if (1 < uVar23) {
        *param_1 = abStack_7a[uVar17 + 2];
        param_1 = param_1 + 1;
        uVar23 = uVar23 - 1;
      }
    }
    else {
      uVar17 = uVar12;
    }
    if (uVar12 != 1) {
      do {
        if (1 < uVar23) {
          *param_1 = abStack_7a[uVar17 + 1];
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
        if (1 < uVar23) {
          *param_1 = abStack_7a[uVar17];
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
        uVar17 = uVar17 - 2;
      } while (uVar17 != 0);
    }
    uVar12 = (uVar19 + 2) + uVar12;
    param_3 = param_3 + 1;
    goto LAB_10004899;
  case 0x73:
    uVar19 = *param_4;
    if ((ulong)uVar19 < 0x29) {
      puVar10 = (undefined8 *)((ulong)uVar19 + *(long *)(param_4 + 4));
      *param_4 = uVar19 + 8;
    }
    else {
      puVar10 = *(undefined8 **)(param_4 + 2);
      *(undefined8 **)(param_4 + 2) = puVar10 + 1;
    }
    pbVar13 = (byte *)*puVar10;
    if (pbVar13 == (byte *)0x0) {
      pbVar13 = &DAT_1000cf34;
    }
    bVar7 = *pbVar13;
    while (bVar7 != 0) {
      pbVar13 = pbVar13 + 1;
      if (1 < uVar23) {
        *param_1 = bVar7;
        param_1 = param_1 + 1;
        uVar23 = uVar23 - 1;
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      bVar7 = *pbVar13;
    }
    goto LAB_10004896;
  case 0x75:
    uVar19 = *param_4;
    uVar12 = (ulong)uVar19;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar12 = (ulong)*(byte *)(*(long *)(param_4 + 4) + uVar12);
      }
      else {
        pbVar13 = *(byte **)(param_4 + 2);
        *(byte **)(param_4 + 2) = pbVar13 + 8;
        uVar12 = (ulong)*pbVar13;
      }
      break;
    case '\x02':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar12 = (ulong)*(ushort *)(*(long *)(param_4 + 4) + uVar12);
      }
      else {
        puVar3 = *(ushort **)(param_4 + 2);
        *(ushort **)(param_4 + 2) = puVar3 + 4;
        uVar12 = (ulong)*puVar3;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar12 = *(ulong *)(*(long *)(param_4 + 4) + uVar12);
      }
      else {
LAB_100051e3:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_100051e3;
      *param_4 = uVar19 + 8;
      uVar12 = *(ulong *)(*(long *)(param_4 + 4) + uVar12);
      break;
    default:
      if (uVar19 < 0x29) {
        puVar16 = (uint *)(uVar12 + *(long *)(param_4 + 4));
        *param_4 = uVar19 + 8;
      }
      else {
        puVar16 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar16 + 2;
      }
      uVar12 = (ulong)*puVar16;
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = str_1000cf4c[uVar12 % 10];
      uVar17 = uVar18 + 1;
      bVar4 = 9 < uVar12;
      uVar12 = uVar12 / 10;
    } while (bVar4);
    if (uVar17 == 0) {
      param_3 = param_3 + 1;
      uVar12 = uVar22;
    }
    else {
      if ((uVar18 & 1) == 0) {
        if (1 < uVar23) {
          *param_1 = abStack_7a[uVar18 + 2];
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
      }
      else {
        uVar18 = uVar17;
      }
      if (uVar17 == 1) {
        uVar12 = uVar22 + uVar17 & 0xffffffff;
        param_3 = param_3 + 1;
      }
      else {
        do {
          if (1 < uVar23) {
            *param_1 = abStack_7a[uVar18 + 1];
            param_1 = param_1 + 1;
            uVar23 = uVar23 - 1;
          }
          if (1 < uVar23) {
            *param_1 = abStack_7a[uVar18];
            param_1 = param_1 + 1;
            uVar23 = uVar23 - 1;
          }
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
        uVar12 = uVar22 + uVar17 & 0xffffffff;
        param_3 = param_3 + 1;
      }
    }
    goto LAB_10004899;
  }
LAB_10004893:
  uVar12 = (ulong)(uVar19 + 1);
LAB_10004896:
  param_3 = param_3 + 1;
  goto LAB_10004899;
}

#undef DAT_1000cde8
#undef DAT_1000cdf0
#undef DAT_1000cf34
#undef _DAT_1000cdf0
#undef str_1000cf3b
#undef str_1000cf4c
#undef abStack_7a
#undef local_38

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_100056b0(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004830(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef DAT_02000018
#define DAT_02000018 (*(uint8_t *)(0x2000018U))
#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2396U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x239eU)))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005730(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  uVar5 = 0xffffffffffffffff;
  if (!CARRY8(param_1,param_2)) {
    uVar5 = param_1 + param_2;
  }
  if (((param_1 < 0x2000000) && (param_1 < uVar5)) && (0x1800000 < uVar5)) {
    if (param_1 < 0x1800000) {
      plVar2 = (long *)(ulong)((int)param_1 + 0xfU & 0x3fffff0);
      uVar3 = (0x1800000 - param_1) - ((long)plVar2 - param_1);
      if ((((long)plVar2 - param_1 <= 0x1800000 - param_1 && uVar3 != 0) && param_3 != (ulong *)0x0)
         && (uVar3 = uVar3 & 0xfffffffffffffff0, 0x30 < uVar3)) {
        *plVar2 = uVar3 - 0x20;
        plVar2[1] = 0;
        uVar3 = *param_3;
        plVar2[2] = uVar3;
        *(undefined1 *)(plVar2 + 3) = 1;
        puVar4 = (ulong *)(uVar3 + 8);
        if (DAT_1000f0f8 == 0) {
          puVar4 = (ulong *)&DAT_1000f0f8;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000f100 == (long *)0x0) {
          DAT_1000f100 = plVar2;
        }
      }
    }
    if ((param_3 != (ulong *)0x0 && 0x2000000 < uVar5) &&
       (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = *param_3;
      DAT_02000018 = 1;
      puVar1 = (undefined8 *)(_DAT_02000010 + 8);
      if (DAT_1000f0f8 == 0) {
        puVar1 = &DAT_1000f0f8;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_1000f100 == (long *)0x0) {
        DAT_1000f100 = (long *)&DAT_02000000;
        return;
      }
    }
  }
  else {
    plVar2 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar5 = param_2 - ((long)plVar2 - param_1);
    if ((((long)plVar2 - param_1 <= param_2 && uVar5 != 0) && param_3 != (ulong *)0x0) &&
       (uVar5 = uVar5 & 0xfffffffffffffff0, 0x30 < uVar5)) {
      *plVar2 = uVar5 - 0x20;
      plVar2[1] = 0;
      uVar5 = *param_3;
      plVar2[2] = uVar5;
      *(undefined1 *)(plVar2 + 3) = 1;
      puVar4 = (ulong *)(uVar5 + 8);
      if (DAT_1000f0f8 == 0) {
        puVar4 = (ulong *)&DAT_1000f0f8;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000f100 == (long *)0x0) {
        DAT_1000f100 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_02000000
#undef DAT_02000008
#undef DAT_02000010
#undef DAT_02000018
#undef DAT_1000f0f8
#undef DAT_1000f100
#undef _DAT_02000000
#undef _DAT_02000008
#undef _DAT_02000010

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23aeU)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23beU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_238 (*(undefined8 (*)[65])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100058f0(long param_1,long param_2,undefined8 *in_R8)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined7 in_register_00000009 = 0;
  long lVar5;

  uVar4 = param_2 == 0 || param_1 == 0;
  if (param_2 != 0 && param_1 != 0) {
    lVar5 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar5);
      if (cVar2 == '\b') {
        if (DAT_1000f110 != 0) {
          DAT_1000f110 = DAT_1000f110 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000f110 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001030(local_238,(undefined8 *)&DAT_1000f120,DAT_1000f110,
                               CONCAT71(in_register_00000009,uVar4),in_R8);
            uVar3 = DAT_1000f110;
          }
          *(undefined1 *)((long)local_238 + uVar3) = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_1000f110 = 0;
        }
        else {
          if (DAT_1000f110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001030(local_238,(undefined8 *)&DAT_1000f120,DAT_1000f110,
                               CONCAT71(in_register_00000009,uVar4),in_R8);
            *(undefined1 *)((long)local_238 + DAT_1000f110) = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            DAT_1000f110 = 0;
          }
          pcVar1 = &DAT_1000f120 + DAT_1000f110;
          DAT_1000f110 = DAT_1000f110 + 1;
          *pcVar1 = cVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while (param_2 != lVar5);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f110
#undef DAT_1000f120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_238

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23aeU)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23beU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined8 (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005ac0(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000f110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001030(local_208,(undefined8 *)&DAT_1000f120,DAT_1000f110,in_RCX,in_R8);
    uVar1 = DAT_1000f110;
  }
  *(undefined1 *)((long)local_208 + uVar1) = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_1000f110 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f110
#undef DAT_1000f120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23aeU)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23beU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined8 (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005b60(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000f110 != 0) {
    recovered_10001030(local_208,(undefined8 *)&DAT_1000f120,DAT_1000f110,in_RCX,in_R8);
    *(undefined1 *)((long)local_208 + DAT_1000f110) = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1000f110 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f110
#undef DAT_1000f120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1000cf5d
#define DAT_1000cf5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fbU)))
#undef DAT_1000d25c
#define DAT_1000d25c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c00
 */

void recovered_10005c00(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1000cf5d;
  if (param_1 != 0) {
    format = (char *)param_1;
  }
  puVar2 = &DAT_1000d25c;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_100056b0(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_100058f0((long)local_148,(ulong)uVar1,param_5);
  }
  return;
}

#undef DAT_1000cf5d
#undef DAT_1000d25c
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

void recovered_10005c60(undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x1feU));
  recovered_100058f0(((uintptr_t)pf_module_state + 0x1feU),lVar1,in_R8);
  lVar1 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x219U));
  recovered_100058f0(((uintptr_t)pf_module_state + 0x219U),lVar1,in_R8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ca0
 */

void recovered_10005ca0(undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x21cU));
  recovered_100058f0(((uintptr_t)pf_module_state + 0x21cU),lVar1,in_R8);
  lVar1 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x219U));
  recovered_100058f0(((uintptr_t)pf_module_state + 0x219U),lVar1,in_R8);
  return;
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
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23aeU)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23beU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#undef _DAT_00006844
#define _DAT_00006844 (*(uint *)(0x6844U))
#define local_228 (*(undefined8 (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005ce0(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined7 in_register_00000009 = 0;
  ulong uVar2;
  ulong uVar3;
  undefined7 in_register_00000081 = 0;
  bool bVar4;

  uVar2 = CONCAT71(in_register_00000009,param_4);
  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  uVar3 = uVar2;
  if (DAT_1000f110 != 0) {
    uVar3 = uVar2 & 0xffffffff;
    recovered_10001030(local_228,(undefined8 *)&DAT_1000f120,DAT_1000f110,uVar2,
                       (undefined8 *)CONCAT71(in_register_00000081,param_2 == 0 || param_1 == 0));
    *(undefined1 *)((long)local_228 + DAT_1000f110) = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_1000f110 = 0;
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00006844)(param_1,param_2,param_3,uVar3 & 0xff);
    bVar4 = iVar1 != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_1000f110
#undef DAT_1000f120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e00
 */

undefined8 recovered_10005e00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

void recovered_10005e10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e20
 */

undefined1 recovered_10005e20(void)

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
#undef DAT_1000cf5d
#define DAT_1000cf5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fbU)))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_1000d012
#define str_1000d012 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b0U)))
#undef str_1000d01f
#define str_1000d01f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_1000d02d
#define str_1000d02d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cbU)))
#define local_30 (*(uint *)(frame + 32))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e30
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_10005e30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  ulong size;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002ad0((byte *)param_1,(byte *)str_1000d012);
  if (iVar3 == 0) {
    uVar10 = 1;
LAB_100060de:
    pbVar5 = recovered_10000f40(0x340);
    if (pbVar5 == (byte *)0x0) {
      DAT_1000f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d30(pbVar5,0,0x340);
    *(undefined4 *)pbVar5 = uVar10;
    pbVar5[0x124] = iVar3 == 0;
    pbVar5[0x125] = iVar3 != 0;
    pbVar5[0x120] = 0xff;
    pbVar5[0x121] = 0xff;
    pbVar5[0x122] = 0xff;
    pbVar5[0x123] = 0xff;
    pf_varargs_100056b0__8_((char *)(pbVar5 + 4),0xf1,&DAT_1000cf5d,param_1);
    return (undefined4 *)pbVar5;
  }
  iVar4 = recovered_10002ad0((byte *)param_1,(byte *)str_1000d01f);
  if (iVar4 == 0) {
    uVar10 = 2;
    goto LAB_100060de;
  }
  iVar4 = recovered_10002ad0((byte *)param_1,(byte *)str_1000d02d);
  if (iVar4 == 0) {
    uVar10 = 3;
    goto LAB_100060de;
  }
  pbVar5 = recovered_10000f40(0x340);
  if (pbVar5 == (byte *)0x0) {
    DAT_1000f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d30(pbVar5,0,0x340);
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pcVar6 = recovered_10002ff0((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar11 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10002ff0((char *)param_2,'a');
      bVar11 = pcVar6 != (char *)0x0;
    }
  }
  pbVar5[0x124] = bVar11;
  pcVar6 = recovered_10002ff0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10002ff0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar12 = pcVar6 != (char *)0x0;
  }
  pbVar5[0x125] = bVar12;
  pcVar6 = recovered_10002ff0((char *)param_2,'a');
  pbVar5[0x126] = pcVar6 != (char *)0x0;
  pbVar5[0x120] = 0xff;
  pbVar5[0x121] = 0xff;
  pbVar5[0x122] = 0xff;
  pbVar5[0x123] = 0xff;
  pf_varargs_100056b0__8_((char *)(pbVar5 + 4),0xf1,&DAT_1000cf5d,param_1);
  recovered_10001d30((byte *)&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10002ff0((char *)param_2,'w');
    if (local_30 != 0 && pcVar6 == (char *)0x0) {
      if (pbVar5[0x125] == 1) {
        uVar9 = (ulong)local_30;
        uVar8 = *(ulong *)(pbVar5 + 0x110);
        if (uVar8 < uVar9) {
          uVar2 = 0x100;
          if (uVar8 != 0) {
            uVar2 = uVar8;
          }
          do {
            size = uVar2;
            uVar2 = size * 2;
          } while (size < uVar9);
          puVar7 = recovered_10000fe0(*(void **)(pbVar5 + 0x100),size);
          if (puVar7 == (undefined8 *)0x0) {
            DAT_1000f060 = 0xc;
            pbVar5[0x129] = 1;
            goto LAB_10006168;
          }
          *(undefined8 **)(pbVar5 + 0x100) = puVar7;
          *(ulong *)(pbVar5 + 0x110) = size;
          *(undefined8 **)(pbVar5 + 0xf8) = puVar7;
          uVar9 = (ulong)local_30;
        }
        else {
          puVar7 = *(undefined8 **)(pbVar5 + 0x100);
        }
        recovered_10001030(puVar7,(undefined8 *)(ulong)local_34,uVar9,uVar8,param_5);
      }
      else {
        *(ulong *)(pbVar5 + 0xf8) = (ulong)local_34;
      }
      *(ulong *)(pbVar5 + 0x108) = (ulong)local_30;
      bVar1 = pbVar5[0x126];
      goto joined_r0x100060c2;
    }
  }
  else if (pbVar5[0x125] == 0) {
    DAT_1000f060 = 2;
LAB_10006168:
    recovered_10000f90(pbVar5);
    return (undefined4 *)0x0;
  }
  bVar1 = pbVar5[0x126];
joined_r0x100060c2:
  if (bVar1 == 1) {
    *(undefined8 *)(pbVar5 + 0x118) = *(undefined8 *)(pbVar5 + 0x108);
    return (undefined4 *)pbVar5;
  }
  return (undefined4 *)pbVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_1000cf5d
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000d012
#undef str_1000d01f
#undef str_1000d02d
#undef local_30
#undef local_34

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
#undef DAT_1000cf5d
#define DAT_1000cf5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fbU)))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(uint *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
#undef str_1000d012
#define str_1000d012 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b0U)))
#undef str_1000d01f
#define str_1000d01f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_1000d02d
#define str_1000d02d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cbU)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_100061c0(long param_1,long param_2,int *param_3,int *param_4,undefined *param_5,
                  undefined8 param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  ulong size;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_RDX = 0;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      param_4 = (int *)(ulong)_DAT_00006800;
      if (((_DAT_00006800 == 0x50414d57) &&
          (((_DAT_00006804 != 0 && (param_4 = (int *)(ulong)_DAT_00006808, 0xb < _DAT_00006808)) &&
           (param_4 = (int *)(ulong)_DAT_00006808, 0x3b < _DAT_00006808)))) &&
         (param_5 = (undefined *)(ulong)_DAT_00006838, (code *)param_5 != (code *)0x0)) {
        param_4 = param_3 + 1;
        uStack_30 = 0x1000624a;
        iVar4 = (*(code *)param_5)(param_4,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_10006271;
        }
      }
      DAT_1000f060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_10006271:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x10006288;
      recovered_10000f90(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10006290;
    recovered_10000f90(param_3);
    puVar8 = recovered_10005e30(param_1,param_2,extraout_RDX,param_4,(undefined8 *)param_5,param_6);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002ad0((byte *)param_1,(byte *)str_1000d012);
  if (iVar4 == 0) {
    uVar11 = 1;
LAB_100060de:
    pbVar5 = recovered_10000f40(0x340);
    if (pbVar5 == (byte *)0x0) {
      DAT_1000f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d30(pbVar5,0,0x340);
    *(undefined4 *)pbVar5 = uVar11;
    pbVar5[0x124] = iVar4 == 0;
    pbVar5[0x125] = iVar4 != 0;
    pbVar5[0x120] = 0xff;
    pbVar5[0x121] = 0xff;
    pbVar5[0x122] = 0xff;
    pbVar5[0x123] = 0xff;
    pf_varargs_100056b0__8_((char *)(pbVar5 + 4),0xf1,&DAT_1000cf5d,param_1);
    return (undefined4 *)pbVar5;
  }
  iVar3 = recovered_10002ad0((byte *)param_1,(byte *)str_1000d01f);
  if (iVar3 == 0) {
    uVar11 = 2;
    goto LAB_100060de;
  }
  iVar3 = recovered_10002ad0((byte *)param_1,(byte *)str_1000d02d);
  if (iVar3 == 0) {
    uVar11 = 3;
    goto LAB_100060de;
  }
  pbVar5 = recovered_10000f40(0x340);
  if (pbVar5 == (byte *)0x0) {
    DAT_1000f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d30(pbVar5,0,0x340);
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pcVar6 = recovered_10002ff0((char *)param_2,'r');
  bVar13 = true;
  bVar12 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar12 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10002ff0((char *)param_2,'a');
      bVar12 = pcVar6 != (char *)0x0;
    }
  }
  pbVar5[0x124] = bVar12;
  pcVar6 = recovered_10002ff0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10002ff0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar13 = pcVar6 != (char *)0x0;
  }
  pbVar5[0x125] = bVar13;
  pcVar6 = recovered_10002ff0((char *)param_2,'a');
  pbVar5[0x126] = pcVar6 != (char *)0x0;
  pbVar5[0x120] = 0xff;
  pbVar5[0x121] = 0xff;
  pbVar5[0x122] = 0xff;
  pbVar5[0x123] = 0xff;
  pf_varargs_100056b0__8_((char *)(pbVar5 + 4),0xf1,&DAT_1000cf5d,param_1);
  recovered_10001d30((byte *)&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar6 = recovered_10002ff0((char *)param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar6 == (char *)0x0) {
      if (pbVar5[0x125] == 1) {
        uVar10 = uStack_30 & 0xffffffff;
        uVar9 = *(ulong *)(pbVar5 + 0x110);
        if (uVar9 < uVar10) {
          uVar2 = 0x100;
          if (uVar9 != 0) {
            uVar2 = uVar9;
          }
          do {
            size = uVar2;
            uVar2 = size * 2;
          } while (size < uVar10);
          puVar7 = recovered_10000fe0(*(void **)(pbVar5 + 0x100),size);
          if (puVar7 == (undefined8 *)0x0) {
            DAT_1000f060 = 0xc;
            pbVar5[0x129] = 1;
            goto LAB_10006168;
          }
          *(undefined8 **)(pbVar5 + 0x100) = puVar7;
          *(ulong *)(pbVar5 + 0x110) = size;
          *(undefined8 **)(pbVar5 + 0xf8) = puVar7;
          uVar10 = uStack_30 & 0xffffffff;
        }
        else {
          puVar7 = *(undefined8 **)(pbVar5 + 0x100);
        }
        recovered_10001030(puVar7,(undefined8 *)(ulong)uStack_34,uVar10,uVar9,(undefined8 *)param_5)
        ;
      }
      else {
        *(ulong *)(pbVar5 + 0xf8) = (ulong)uStack_34;
      }
      *(ulong *)(pbVar5 + 0x108) = (ulong)(uint)uStack_30;
      bVar1 = pbVar5[0x126];
      goto joined_r0x100060c2;
    }
  }
  else if (pbVar5[0x125] == 0) {
    DAT_1000f060 = 2;
LAB_10006168:
    recovered_10000f90(pbVar5);
    return (undefined4 *)0x0;
  }
  bVar1 = pbVar5[0x126];
joined_r0x100060c2:
  if (bVar1 == 1) {
    *(undefined8 *)(pbVar5 + 0x118) = *(undefined8 *)(pbVar5 + 0x108);
    return (undefined4 *)pbVar5;
  }
  return (undefined4 *)pbVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_1000cf5d
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_1000d012
#undef str_1000d01f
#undef str_1000d02d
#undef uStack_34
#undef uStack_30

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100062b0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (((code *)(ulong)_DAT_00006838 != (code *)0x0 &&
        (iVar1 = (*(code *)(ulong)_DAT_00006838)
                           (param_1 + 1,*(undefined8 *)(param_1 + 0x3e),param_1[0x42]), iVar1 != 0))
       )) {
      *(undefined1 *)((long)param_1 + 0x127) = 0;
    }
    else {
      DAT_1000f060 = 5;
      *(undefined1 *)((long)param_1 + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10000f90(*(void **)(param_1 + 0x40));
  }
  recovered_10000f90(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006380
 */

ulong recovered_10006380(long param_1,ulong param_2,ulong param_3,int *param_4,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  if ((char)param_4[0x49] == '\x01') {
    if ((*param_4 != 0) || (param_4[0x48] != -1)) {
      uVar5 = 0;
      do {
        uVar7 = 0;
        do {
          uVar3 = recovered_100064c0(param_4,in_R8);
          if (uVar3 == 0xffffffff) {
            return uVar5;
          }
          *(char *)(param_1 + uVar7) = (char)uVar3;
          uVar7 = uVar7 + 1;
        } while (param_2 != uVar7);
        uVar5 = uVar5 + 1;
        param_1 = param_1 + param_2;
      } while (uVar5 != param_3);
      return param_3;
    }
    uVar5 = *(ulong *)(param_4 + 0x46);
    uVar7 = *(ulong *)(param_4 + 0x42) - uVar5;
    if (uVar5 <= *(ulong *)(param_4 + 0x42) && uVar7 != 0) {
      PF_PART8(auVar1, 8) = 0;
      PF_PART8(auVar1, 0) = param_2;
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_3;
      uVar6 = 0xffffffffffffffff;
      if (SUB168(auVar1 * auVar2,8) == 0) {
        uVar6 = param_3 * param_2;
      }
      uVar4 = uVar6;
      if (uVar7 < uVar6) {
        uVar4 = uVar7;
      }
      recovered_10001030((undefined8 *)param_1,(undefined8 *)(uVar5 + *(long *)(param_4 + 0x3e)),
                         uVar4,param_3 * param_2,in_R8);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar4;
      if (uVar7 < uVar6) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((uVar4 | param_2) >> 0x20 == 0) {
        return (uVar4 & 0xffffffff) / (param_2 & 0xffffffff);
      }
      return uVar4 / param_2;
    }
    *(undefined1 *)(param_4 + 0x4a) = 1;
  }
  return 0;
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
#undef DAT_1000d25c
#define DAT_1000d25c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x23aeU)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23beU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#undef _DAT_00006844
#define _DAT_00006844 (*(uint *)(0x6844U))
#define local_218 (*(undefined8 (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100064c0(int *param_1,undefined8 *in_R8)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] != '\x01') {
    return 0xffffffff;
  }
  uVar1 = param_1[0x48];
  if (uVar1 != 0xffffffff) {
    param_1[0x48] = -1;
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar4 = *(ulong *)(param_1 + 0xce);
    if (uVar4 < *(ulong *)(param_1 + 0xcc)) {
LAB_1000651a:
      *(ulong *)(param_1 + 0xce) = uVar4 + 1;
      return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
    }
    if (DAT_1000f110 != 0) {
      recovered_10001030(local_218,(undefined8 *)&DAT_1000f120,DAT_1000f110,uVar4,in_R8);
      *(undefined1 *)((long)local_218 + DAT_1000f110) = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_1000f110 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((long)param_1 + 0x12a,0x1fe,&DAT_1000d25c,0);
      if (iVar2 != 0) {
        lVar3 = recovered_10002aa0((long)param_1 + 0x12a);
        *(long *)(param_1 + 0xcc) = lVar3 + 1;
        *(undefined1 *)((long)param_1 + lVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar4 = 0;
        goto LAB_1000651a;
      }
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x46);
    if (uVar4 < *(ulong *)(param_1 + 0x42)) {
      *(ulong *)(param_1 + 0x46) = uVar4 + 1;
      return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_1000d25c
#undef DAT_1000f110
#undef DAT_1000f120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066b0
 */

long recovered_100066b0(long param_1,long param_2,long param_3,uint *param_4,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar6 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_100058f0(param_1,uVar6,in_R8);
    *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar6;
  }
  else {
    if (*(char *)((long)param_4 + 0x126) == '\0') {
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    else {
      uVar5 = *(ulong *)(param_4 + 0x42);
      *(ulong *)(param_4 + 0x46) = uVar5;
    }
    puVar7 = (undefined8 *)(uVar5 + uVar6);
    puVar3 = *(undefined8 **)(param_4 + 0x44);
    if (puVar3 < puVar7) {
      puVar2 = (undefined8 *)0x100;
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = puVar3;
      }
      do {
        puVar3 = puVar2;
        puVar2 = (undefined8 *)((long)puVar3 * 2);
      } while (puVar3 < puVar7);
      pvVar4 = recovered_10000fe0(*(void **)(param_4 + 0x40),(ulong)puVar3);
      if (pvVar4 == (void *)0x0) {
        DAT_1000f060 = 0xc;
        *(undefined1 *)((long)param_4 + 0x129) = 1;
        return 0;
      }
      *(void **)(param_4 + 0x40) = pvVar4;
      *(undefined8 **)(param_4 + 0x44) = puVar3;
      *(void **)(param_4 + 0x3e) = pvVar4;
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    uVar1 = *(ulong *)(param_4 + 0x42);
    if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
      recovered_10001d30((byte *)(uVar1 + *(long *)(param_4 + 0x40)),0,uVar5 - uVar1);
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001030((undefined8 *)(uVar5 + *(long *)(param_4 + 0x40)),(undefined8 *)param_1,uVar6
                       ,param_4,puVar7);
    uVar6 = uVar6 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar6;
    if (*(ulong *)(param_4 + 0x42) < uVar6) {
      *(ulong *)(param_4 + 0x42) = uVar6;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1000f060

#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006840
 */

undefined8 recovered_10006840(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000f060 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000684e;
        lVar1 = 0x108;
      }
      param_2 = param_2 + *(long *)((long)param_1 + lVar1);
    }
    if (-1 < (long)param_2) {
      *(ulong *)(param_1 + 0x46) = param_2;
      *(bool *)(param_1 + 0x4a) = *(ulong *)(param_1 + 0x42) <= param_2;
      param_1[0x48] = -1;
      return 0;
    }
  }
LAB_1000684e:
  DAT_1000f060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000f060

#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

undefined8 recovered_100068c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000f060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000f060

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100068f0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (*(char *)((long)param_1 + 0x127) != '\x01'))
  {
    return 0;
  }
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
      ((0xb < _DAT_00006808 &&
       ((0x3b < _DAT_00006808 && ((code *)(ulong)_DAT_00006838 != (code *)0x0)))))) &&
     (iVar1 = (*(code *)(ulong)_DAT_00006838)
                        (param_1 + 1,*(undefined8 *)(param_1 + 0x3e),param_1[0x42]), iVar1 != 0)) {
    *(undefined1 *)((long)param_1 + 0x127) = 0;
    return 0;
  }
  DAT_1000f060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069a0
 */

undefined1 recovered_100069a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c0
 */

undefined1 recovered_100069c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069e0
 */

void recovered_100069e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a00
 */

uint recovered_10006a00(uint param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x120) = uVar1;
    *(undefined1 *)(param_2 + 0x128) = 0;
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
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006a30(long param_1)

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
       (((0x3f < _DAT_00006808 && ((code *)(ulong)_DAT_0000683c != (code *)0x0)) &&
        (iVar1 = (*(code *)(ulong)_DAT_0000683c)(), iVar1 != 0)))) {
      return 0;
    }
  }
  DAT_1000f060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_1000f060
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
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22feU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006ab0(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f060 = 0x16;
    return 0xffffffff;
  }
  recovered_10001d30((byte *)&local_2c,0,0xc);
  uVar2 = 2;
  if (((((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
        ((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)))) &&
       ((iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_2c), iVar1 != 0 &&
        ((uVar2 = 5, _DAT_00006800 == 0x50414d57 && (_DAT_00006804 != 0)))))) &&
      (0xb < _DAT_00006808)) &&
     (((((0x3b < _DAT_00006808 && ((code *)(ulong)_DAT_00006838 != (code *)0x0)) &&
        (iVar1 = (*(code *)(ulong)_DAT_00006838)(param_2,local_2c,local_28), iVar1 != 0)) &&
       (((_DAT_00006800 == 0x50414d57 && (_DAT_00006804 != 0)) &&
        ((0xb < _DAT_00006808 &&
         ((0x3f < _DAT_00006808 && ((code *)(ulong)_DAT_0000683c != (code *)0x0)))))))) &&
      (iVar1 = (*(code *)(ulong)_DAT_0000683c)(param_1), iVar1 != 0)))) {
    return 0;
  }
  DAT_1000f060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef _DAT_0000683c
#undef local_2c
#undef local_28

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
#define _DAT_00006834 (*(uint *)(0x6834U))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10006c20(long param_1,long *param_2,ulong *param_3,undefined8 *in_R8)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined7 in_register_00000009 = 0;

  uVar4 = param_2 == (long *)0x0 || param_1 == 0;
  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10001d30((byte *)&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10006cdf;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        puVar2 = recovered_10000f40((ulong)(local_30 + (local_30 == 0)));
        if (puVar2 != (undefined8 *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001030(puVar2,(undefined8 *)(ulong)local_34,(ulong)local_30,
                               CONCAT71(in_register_00000009,uVar4),in_R8);
            uVar3 = (ulong)local_30;
          }
          *param_2 = (long)puVar2;
          *param_3 = uVar3;
          uVar3 = CONCAT71((int7)((ulong)puVar2 >> 8),1);
          goto LAB_10006cdf;
        }
      }
    }
  }
  uVar3 = 0;
LAB_10006cdf:
  return uVar3 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef local_34
#undef local_30

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
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006d00(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) || (_DAT_00006800 != 0x50414d57)) ||
     (((_DAT_00006804 == 0 || (_DAT_00006808 < 0xc)) ||
      ((_DAT_00006808 < 0x3c || ((code *)(ulong)_DAT_00006838 == (code *)0x0)))))) {
    return false;
  }
  iVar1 = (*(code *)(ulong)_DAT_00006838)();
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
 * Address: 0x10006d70
 */

undefined8 recovered_10006d70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d80
 */

void recovered_10006d80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d90
 */

undefined8 recovered_10006d90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da0
 */

undefined8 recovered_10006da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db0
 */

undefined8 recovered_10006db0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dc0
 */

char * recovered_10006dc0(char *param_1,char param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 == 0) {
    return (char *)0x0;
  }
  do {
    if (*param_1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

int recovered_10006df0(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  bool bVar3;

  if (param_3 == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar2);
    if (bVar1 != *(byte *)(param_2 + lVar2)) {
      return (uint)bVar1 - (uint)*(byte *)(param_2 + lVar2);
    }
  } while ((bVar1 != 0) && (bVar3 = param_3 + -1 != lVar2, lVar2 = lVar2 + 1, bVar3));
  return 0;
}


#undef DAT_1000cfa1
#define DAT_1000cfa1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_1000cfa4
#define str_1000cfa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x242U)))
#undef str_1000cfb1
#define str_1000cfb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24fU)))
#undef str_1000cfbb
#define str_1000cfbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000cfcf
#define str_1000cfcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_1000cfdd
#define str_1000cfdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
#undef str_1000cfef
#define str_1000cfef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28dU)))
#undef str_1000cffb
#define str_1000cffb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_1000d00c
#define str_1000d00c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e30
 */

char * recovered_10006e30(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000cfa1;
  default:
    return str_1000d00c;
  case 2:
    return str_1000cfa4;
  case 5:
    return str_1000cfb1;
  case 9:
    return str_1000cfbb;
  case 0xc:
    return str_1000cfcf;
  case 0xd:
    return str_1000cfdd;
  case 0x11:
    return str_1000cfef;
  case 0x16:
    return str_1000cffb;
  }
}

#undef DAT_1000cfa1
#undef str_1000cfa4
#undef str_1000cfb1
#undef str_1000cfbb
#undef str_1000cfcf
#undef str_1000cfdd
#undef str_1000cfef
#undef str_1000cffb
#undef str_1000d00c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f00
 */

undefined8 recovered_10006f00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

undefined8 recovered_10006f10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000f320
#define DAT_1000f320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x25beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f20
 */

void recovered_10006f20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f320 = DAT_1000f320 + 1;
  return;
}

#undef DAT_1000f320

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006f40(void *context,uintptr_t unused){__asm__ volatile("movq 80(%rdi),%rsp\nmovq 64(%rdi),%rbp\nmovq 72(%rdi),%rdx\njmpq *%rdx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006f50(void *context) { __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006f80(void *context,int value) { __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx"); }


#undef DAT_10007001
#define DAT_10007001 (*(uint8_t *)(0x10007001U))
#undef DAT_1000d2f8
#define DAT_1000d2f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x596U)))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fb0
 */

void recovered_10006fb0(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000d2f8;
  local_50 = &DAT_10007001;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10007001
#undef DAT_1000d2f8
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007030
 */

undefined8 recovered_10007030(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

void recovered_10007040(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007050(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}


#undef DAT_1000f328
#define DAT_1000f328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x25c6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007050
 */

long recovered_10007050(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000f328;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000f328 = param_1;
  lVar1 = recovered_10007470(param_1);
  return lVar1;
}

#undef DAT_1000f328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007080
 */

long recovered_10007080(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return (long)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

long recovered_100070b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return (long)pvVar1;
}


#undef DAT_1000d308
#define DAT_1000d308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6U)))
#undef LAB_1000714d
#define LAB_1000714d (*(uint8_t *)(0x1000714dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e0
 */

void recovered_100070e0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000d308;
  local_50 = &LAB_1000714d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000d308
#undef LAB_1000714d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000d318
#define DAT_1000d318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b6U)))
#undef LAB_100071ed
#define LAB_100071ed (*(uint8_t *)(0x100071edU))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007180
 */

void recovered_10007180(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000d318;
  local_50 = &LAB_100071ed;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000d318
#undef LAB_100071ed
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef auStack_40
#undef local_80
#undef local_68

#undef DAT_1000d328
#define DAT_1000d328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c6U)))
#undef LAB_1000728d
#define LAB_1000728d (*(uint8_t *)(0x1000728dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

void recovered_10007220(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000d328;
  local_50 = &LAB_1000728d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000d328
#undef LAB_1000728d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_1000d338
#define DAT_1000d338 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d6U)))
#undef LAB_1000732d
#define LAB_1000732d (*(uint8_t *)(0x1000732dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c0
 */

void recovered_100072c0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000d338;
  local_50 = &LAB_1000732d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000d338
#undef LAB_1000732d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007360
 */

undefined8 recovered_10007360(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

uint recovered_10007370(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007380
 */

void recovered_10007380(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007390
 */

void recovered_10007390(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073a0
 */

long recovered_100073a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10000f40(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006fb0();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_1000740c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_1000743f;
        } while( true );
      }
      uVar3 = size & 0xffffffffffffffe0;
      uVar4 = 0;
      do {
        *(undefined8 *)((long)pvVar2 + uVar4) = 0;
        ((undefined8 *)((long)pvVar2 + uVar4))[1] = 0;
        puVar1 = (undefined8 *)((long)pvVar2 + uVar4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar4 = uVar4 + 0x20;
      } while (uVar3 != uVar4);
      if (size == uVar3) goto LAB_10007444;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000740c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_1000743f:
    } while (size != uVar3);
  }
LAB_10007444:
  return (long)pvVar2 + 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007450
 */

void recovered_10007450(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000f90((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007470
 */

long recovered_10007470(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000f328
#define DAT_1000f328 (*(void * *)(((uintptr_t)pf_module_state + 0x25c6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

void recovered_10007480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_1000f328;
  if (DAT_1000f328 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000f328 + 0x10);
    DAT_1000f328 = *(void **)((long)DAT_1000f328 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)pointer + 0x28) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x30);
      }
      recovered_10000f90(pointer);
      return;
    }
  }
  return;
}

#undef DAT_1000f328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

void recovered_100074d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007500((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000f328
#define DAT_1000f328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x25c6U)))
#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x25ceU)))
#define cStack_36 (*(char *)(frame + 26))
#define uStack_35 (*(undefined1 *)(frame + 27))
#define uStack_34 (*(undefined4 *)(frame + 28))
#define local_38 (*(undefined2 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007500
 */

void recovered_10007500(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *in_RSI;
  long *plVar4;

  if (DAT_1000f330 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1000f330;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      in_RSI = pbVar1;
      uVar3 = recovered_10007fa0((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_10007650(param_1,in_RSI);
        puVar2 = DAT_1000f328;
        if (DAT_1000f328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006fb0();
        }
        *(undefined1 *)(DAT_1000f328 + 5) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007500(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000f328
#undef DAT_1000f330
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1000f328
#define DAT_1000f328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x25c6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007580
 */

void recovered_10007580(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000f328;
  if (DAT_1000f328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006fb0();
  }
  *(undefined1 *)(DAT_1000f328 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007500(puVar1);
}

#undef DAT_1000f328

#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x25ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b0
 */

void recovered_100075b0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000f330;
  DAT_1000f330 = param_1;
  return;
}

#undef DAT_1000f330

#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x25ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d0
 */

void recovered_100075d0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000f330;
  if (DAT_1000f330 == param_1) {
    puVar2 = &DAT_1000f330;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      puVar1 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_1000f330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

void recovered_10007610(undefined8 *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007500(in_RDI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007620
 */

void recovered_10007620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}


#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x25ceU)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007630
 */

undefined8 recovered_10007630(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_1000f330 != (undefined8 *)0x0) {
    DAT_1000f330 = (undefined8 *)*DAT_1000f330;
  }
  recovered_10007650(param_1,in_RSI);
  if (DAT_1000f330 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1000f330;
      if (DAT_1000f330 == puVar1) {
        DAT_1000f330[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100076dc:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10006f40((long)puVar3,in_RSI);
        recovered_10007630(puVar3,in_RSI);
        return 0;
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007fa0((long)DAT_1000f330,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_100076dc;
      }
      DAT_1000f330 = (undefined8 *)*puVar3;
    } while (DAT_1000f330 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000f330
#undef uStack_40
#undef uStack_38

#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x25ceU)))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007650
 */

undefined8 recovered_10007650(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1000f330 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_1000f330;
      if (DAT_1000f330 == plVar1) {
        DAT_1000f330[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100076dc:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10006f40((long)plVar3,in_RSI);
        recovered_10007630(plVar3,in_RSI);
        return 0;
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007fa0((long)DAT_1000f330,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100076dc;
      }
      DAT_1000f330 = (long *)*plVar3;
    } while (DAT_1000f330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000f330
#undef local_30
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f0
 */

undefined8 recovered_100076f0(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007630(in_RDI,in_RSI);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007700
 */

undefined8 recovered_10007700(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

void recovered_10007710(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}


#undef DAT_1000f0c0
#define DAT_1000f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007720
 */

long recovered_10007720(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;

  if (param_3 == (undefined8 *)0x0 || param_1 == (long *)0x0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(*param_1 + -8);
  bVar7 = puVar5 != (undefined8 *)0x0;
  if (puVar5 != param_3 && bVar7) {
    lVar4 = param_3[1];
    do {
      lVar3 = puVar5[1];
      if ((lVar4 == 0) || (lVar3 == 0)) {
        if (lVar3 == lVar4) goto LAB_100077e4;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100077e4;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1000f0c0) goto LAB_100077ec;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_100077e4:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_100077ec:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000f0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007800
 */

void recovered_10007800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000f10();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

undefined8 recovered_10007810(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007820
 */

bool recovered_10007820(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007840
 */

bool recovered_10007840(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007870
 */

bool recovered_10007870(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007890
 */

bool recovered_10007890(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078c0
 */

bool recovered_100078c0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078e0
 */

byte recovered_100078e0(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007920
 */

bool recovered_10007920(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10007950(double value) {
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
float recovered_10007ac0(float value){return (float)recovered_10007950((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007c50(long double value){return (long double)recovered_10007950((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10007de0(long end,long start){return (double)end-(double)start;}


#undef DAT_1000cd70
#define DAT_1000cd70 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_1000cd78
#define DAT_1000cd78 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_1000cd98
#define DAT_1000cd98 (*(double *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_1000cdd8
#define DAT_1000cdd8 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

double recovered_10007e00(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_100034c0(param_1);
  if (DAT_1000cd70 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000cd78;
  }
  else if (param_1 - dVar1 <= DAT_1000cdd8) {
    dVar1 = dVar1 + DAT_1000cd98;
  }
  return dVar1;
}

#undef DAT_1000cd70
#undef DAT_1000cd78
#undef DAT_1000cd98
#undef DAT_1000cdd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e50
 */

long recovered_10007e50(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;

  if (param_1 == (byte *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    for (pbVar2 = param_1; (bVar1 = *pbVar2, bVar1 - 9 < 5 || (bVar1 == 0x20)); pbVar2 = pbVar2 + 1)
    {
    }
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
      bVar7 = bVar1 == 0x2d;
      pbVar2 = pbVar2 + 1;
      goto joined_r0x10007ead;
    }
  }
  bVar7 = false;
joined_r0x10007ead:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar2[1] | 0x20) == 0x78)) {
      pbVar2 = pbVar2 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar2 == 0x30)) {
    if ((pbVar2[1] | 0x20) == 0x78) {
      pbVar2 = pbVar2 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar2 = pbVar2 + -1;
  lVar5 = 1;
  lVar3 = 0;
  do {
    lVar6 = lVar3;
    bVar1 = pbVar2[1];
    uVar4 = bVar1 - 0x30U;
    if (9 < uVar4) {
      if (bVar1 - 0x61U < 0x1a) {
        uVar4 = bVar1 - 0x57;
      }
      else {
        uVar4 = bVar1 - 0x37;
        if (0x19 < bVar1 - 0x41U) {
          uVar4 = 0xffffffff;
        }
      }
    }
    pbVar2 = pbVar2 + 1;
    lVar5 = lVar5 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar3 = (ulong)uVar4 + lVar6 * (ulong)param_3, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar5 == 0) {
      pbVar2 = param_1;
    }
    *param_2 = pbVar2;
  }
  lVar3 = -lVar6;
  if (!bVar7) {
    lVar3 = lVar6;
  }
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f90
 */

void recovered_10007f90(byte *in_RDI,undefined8 *in_RSI,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007e50(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1000cec0
#define DAT_1000cec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15eU)))
#undef DAT_1000f0c0
#define DAT_1000f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235eU)))
#define local_40 (*(byte * *)(frame + 16))
#define local_31 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fa0
 */

undefined8 recovered_10007fa0(long param_1,byte *param_2,undefined2 *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  char cVar23;

  pbVar8 = *(byte **)(param_1 + 0x38);
  if (pbVar8 != (byte *)0x0) {
    local_40 = pbVar8 + 1;
    if (*pbVar8 != 0xff) {
      recovered_10008340((uint)*pbVar8,(long *)&local_40);
    }
    uVar10 = (ushort)*local_40;
    pbVar8 = (byte *)0x0;
    if (uVar10 != 0xff) {
      uVar7 = 0;
      pbVar18 = local_40 + 1;
      do {
        local_40 = pbVar18;
        uVar7 = uVar7 | (ulong)(*local_40 & 0x7f) << ((byte)pbVar8 & 0x3f);
        pbVar8 = (byte *)(ulong)((int)pbVar8 + 7);
        pbVar18 = local_40 + 1;
      } while ((char)*local_40 < '\0');
      pbVar8 = local_40 + 1 + uVar7;
    }
    local_40 = local_40 + 2;
    bVar9 = 0;
    uVar7 = 0;
    do {
      bVar1 = *local_40;
      local_40 = local_40 + 1;
      uVar7 = uVar7 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
      bVar9 = bVar9 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(param_1 + 8)) && (0 < (long)uVar7)) {
      iVar16 = 0;
      pbVar18 = local_40;
      do {
        bVar9 = 0;
        uVar19 = 0;
        do {
          bVar1 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar19 = uVar19 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          bVar9 = bVar9 + 7;
        } while ((char)bVar1 < '\0');
        bVar9 = 0;
        uVar20 = 0;
        do {
          bVar1 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar20 = uVar20 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          bVar9 = bVar9 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar16 == *(int *)(param_1 + 8) + -1) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(int *)(param_3 + 2) = (int)uVar19;
          *(undefined4 *)(param_3 + 4) = 0;
          if ((uVar20 & 0xffffffff) == 0) {
            *(undefined1 *)((long)param_3 + 1) = 1;
            return 0;
          }
          local_31 = param_2 != (byte *)0x0;
          bVar9 = (byte)(uVar10 & 0xf);
          pbVar18 = local_40 + uVar7 + (uVar20 & 0xffffffff) + -1;
          uVar11 = 0;
          goto LAB_10008170;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_10008170:
  uVar7 = 0;
  uVar19 = 0;
  uVar6 = 0;
  do {
    bVar1 = *pbVar18;
    pbVar18 = pbVar18 + 1;
    uVar19 = uVar19 | (ulong)(bVar1 & 0x7f) << ((byte)uVar6 & 0x3f);
    uVar6 = uVar6 + 7;
  } while ((char)bVar1 < '\0');
  uVar20 = 0;
  uVar12 = 0;
  pbVar17 = pbVar18;
  do {
    bVar2 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    uVar20 = uVar20 | (ulong)(bVar2 & 0x7f) << ((byte)uVar12 & 0x3f);
    uVar12 = uVar12 + 7;
  } while ((char)bVar2 < '\0');
  uVar14 = -1L << ((byte)uVar6 & 0x3f);
  if (bVar1 < 0x40) {
    uVar14 = uVar7;
  }
  if (0x3f < uVar6) {
    uVar14 = uVar7;
  }
  uVar21 = -1L << ((byte)uVar12 & 0x3f);
  if (bVar2 < 0x40) {
    uVar21 = uVar7;
  }
  if (0x3f < uVar12) {
    uVar21 = uVar7;
  }
  uVar19 = uVar19 | uVar14;
  if (uVar19 == 0) {
    *(undefined1 *)((long)param_3 + 1) = 1;
  }
  else if (0 < (long)uVar19) {
    uVar6 = (uint)uVar19;
    if ((((0xc < bVar9) || ((int)uVar6 < 1)) || (pbVar8 == (byte *)0x0)) ||
       (((0x1c1dU >> bVar9 ^ 1) & 1) != 0)) {
LAB_1000831b:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000cec0 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_10008340((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_1000831b;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_1000831b;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_1000831b;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1000f0c0) goto LAB_100082f8;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_1000831b;
  }
LAB_100082f8:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_10008170;
}

#undef DAT_1000cec0
#undef DAT_1000f0c0
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008340
 */

byte * recovered_10008340(uint param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;

  if (param_1 == 0xff) {
    return (byte *)0x0;
  }
  pbVar3 = (byte *)0x0;
  if (0xc < (param_1 & 0xf)) {
    return (byte *)0x0;
  }
  puVar1 = (uint *)*param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    pbVar3 = *(byte **)puVar1;
    puVar6 = puVar1 + 2;
    goto LAB_10008469;
  case 1:
    bVar4 = 0;
    pbVar3 = (byte *)0x0;
    puVar6 = puVar1;
    do {
      *param_2 = (long)puVar6 + 1;
      uVar5 = *puVar6;
      pbVar3 = (byte *)((ulong)pbVar3 | (ulong)((byte)uVar5 & 0x7f) << (bVar4 & 0x3f));
      bVar4 = bVar4 + 7;
      puVar6 = (uint *)((long)puVar6 + 1);
    } while ((char)(byte)uVar5 < '\0');
    break;
  case 2:
    pbVar3 = (byte *)(ulong)(ushort)*puVar1;
    goto LAB_10008465;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_100083b9;
  default:
    goto switchD_10008371_caseD_5;
  case 9:
    uVar2 = 0;
    uVar5 = 0;
    puVar6 = puVar1;
    do {
      *param_2 = (long)puVar6 + 1;
      bVar4 = (byte)*puVar6;
      uVar2 = uVar2 | (ulong)(bVar4 & 0x7f) << ((byte)uVar5 & 0x3f);
      uVar5 = uVar5 + 7;
      puVar6 = (uint *)((long)puVar6 + 1);
    } while ((char)bVar4 < '\0');
    uVar7 = -1L << ((byte)uVar5 & 0x3f);
    if (bVar4 < 0x40) {
      uVar7 = 0;
    }
    if (0x3f < uVar5) {
      uVar7 = 0;
    }
    pbVar3 = (byte *)(uVar2 | uVar7);
    break;
  case 10:
    pbVar3 = (byte *)((ulong)CONCAT12(-1 < (char)*(byte *)((long)puVar1 + 1),(ushort)*puVar1) -
                     0x10000);
LAB_10008465:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_10008469:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_100083b9:
    puVar6 = puVar1 + 1;
    goto LAB_10008469;
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar3 = pbVar3 + (long)puVar1;
  }
  if (((char)param_1 < '\0') && (pbVar3 != (byte *)0x0)) {
    pbVar3 = *(byte **)pbVar3;
  }
switchD_10008371_caseD_5:
  return pbVar3;
}


#undef DAT_1000d040
#define DAT_1000d040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

undefined * recovered_100084d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000d040;
}

#undef DAT_1000d040

#undef PTR_str_1000d171_1000e000
#define PTR_str_1000d171_1000e000 (*(char * *)(((uintptr_t)pf_module_state + 0x129eU)))
#undef str_1000d044
#define str_1000d044 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_1000d054
#define str_1000d054 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_1000d075
#define str_1000d075 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_1000d12c
#define str_1000d12c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3caU)))
#undef str_1000d135
#define str_1000d135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d3U)))
#undef str_1000d14a
#define str_1000d14a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e8U)))
#undef str_1000d158
#define str_1000d158 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_1000d168
#define str_1000d168 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x406U)))
#define local_10d8 (*(char (*)[4096])(frame + 24))
#define local_d8 (*(byte (*)[96])(frame + 4120))
#define local_78 (*(byte * *)(frame + 4216))
#define local_70 (*(char * *)(frame + 4224))
#define local_68 (*(ulong *)(frame + 4232))
#define local_60 (*(char * *)(frame + 4240))
#define local_58 (*(byte * *)(frame + 4248))
#define local_4c (*(uint *)(frame + 4260))
#define local_48 (*(byte * *)(frame + 4264))
#define local_40 (*(byte * *)(frame + 4272))
#define local_31 (*(byte *)(frame + 4287))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084e0
 */

uint recovered_100084e0(char *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5,
                       uint param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10,
                       uint param_11)

{
  unsigned char frame[4368] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  char *pcVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  byte bVar17;
  byte *pbVar18;
  uint uVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  bool bVar24;

  pcVar20 = param_5;
  local_78 = param_4;
  local_70 = param_3;
  local_4c = param_6;
  if (param_2 == (byte *)0x0) {
    pbVar23 = (byte *)0x0;
  }
  else {
    lVar8 = recovered_10002aa0((long)param_2);
    pbVar23 = param_2 + lVar8;
  }
  if (local_4c != 0 && param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  local_31 = param_10 == 0 || param_9 == (char *)0x0;
  if (param_10 != 0 && param_9 != (char *)0x0) {
    *param_9 = '\0';
  }
  if (param_8 != 0 && param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  local_d8[0] = 0;
  pbVar21 = param_2;
  do {
    pbVar9 = pbVar21 + 1;
    uVar13 = (ulong)*pbVar21;
    if (0x20 < uVar13) break;
    pbVar21 = pbVar9;
  } while ((0x100002600U >> (uVar13 & 0x3f) & 1) != 0);
  uVar10 = 0;
  while( true ) {
    bVar12 = (byte)uVar13;
    if ((((9 < (byte)(bVar12 - 0x30U)) && (0x19 < (byte)((bVar12 & 0xdf) + 0xbf))) &&
        (bVar12 != 0x5f)) && ((int)uVar13 != 0x24)) break;
    uVar19 = (int)uVar10 + 1;
    if (uVar19 < 0x60) {
      local_d8[uVar10] = bVar12;
      uVar10 = (ulong)uVar19;
    }
    else {
    }
    uVar13 = (ulong)*pbVar9;
    pbVar9 = pbVar9 + 1;
  }
  local_d8[uVar10] = 0;
  while ((bVar12 < 0x21 && (bVar12 = (byte)uVar13, (0x100002600U >> (uVar13 & 0x3f) & 1) != 0))) {
    bVar12 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar13 = (ulong)bVar12;
  }
  local_60 = param_5;
  if (((int)uVar10 == 0) || (bVar12 != 0x28)) goto LAB_100088f7;
  local_58 = (byte *)0x0;
  if (param_1 == (char *)0x0) {
LAB_100088d1:
    local_40 = (byte *)0x0;
  }
  else {
    local_40 = (byte *)0x0;
    if (local_d8[0] != 0) {
      lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3caU));
      if (lVar8 != 0) {
        local_58 = (byte *)0x0;
        local_48 = param_2;
LAB_100086d9:
        if (*param_1 != '\0') {
          do {
            lVar14 = 0;
            while (bVar12 = param_1[lVar14], bVar12 != 0) {
              bVar17 = bVar12 | 0x20;
              if (0x19 < (byte)(bVar12 + 0xbf)) {
                bVar17 = bVar12;
              }
              bVar12 = str_1000d12c[lVar14];
              pcVar20 = (char *)((ulong)bVar12 | 0x20);
              pcVar11 = pcVar20;
              if (0x19 < (byte)(bVar12 + 0xbf)) {
                pcVar11 = (char *)(ulong)bVar12;
              }
              if (bVar17 != (byte)pcVar11) break;
              lVar14 = lVar14 + 1;
              if (lVar8 == lVar14) goto LAB_10008760;
            }
            if (lVar8 == lVar14) goto LAB_10008760;
            pcVar11 = param_1 + 1;
            param_1 = param_1 + 1;
            if (*pcVar11 == '\0') break;
          } while( true );
        }
        goto LAB_100088d1;
      }
      local_58 = (byte *)0x0;
      goto LAB_100088d1;
    }
  }
LAB_100088d9:
  if (local_40 != (byte *)0x0 && local_58 != (byte *)0x0) {
    param_2 = local_40;
    pbVar23 = local_58;
  }
LAB_100088f7:
  uVar19 = 0;
  pbVar21 = (byte *)0x0;
  if ((param_11 & 2) != 0) {
    pbVar21 = (byte *)0x0;
    if (pbVar23 != (byte *)0x0) {
      lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x2e2U));
      pbVar21 = (byte *)0x0;
      if (param_2 <= pbVar23) {
        pbVar21 = (byte *)0x0;
        if (param_2 != (byte *)0x0) {
          pbVar21 = (byte *)0x0;
          if (lVar8 != 0) {
            pbVar21 = (byte *)0x0;
            if (param_2 + lVar8 <= pbVar23) {
              pbVar21 = param_2;
              do {
                if (*pbVar21 == 0) break;
                lVar14 = 0;
                while ((pbVar21 + lVar14 < pbVar23 && (bVar12 = pbVar21[lVar14], bVar12 != 0))) {
                  bVar17 = bVar12 | 0x20;
                  if (0x19 < (byte)(bVar12 + 0xbf)) {
                    bVar17 = bVar12;
                  }
                  bVar12 = str_1000d044[lVar14];
                  bVar2 = bVar12 | 0x20;
                  if (0x19 < (byte)(bVar12 + 0xbf)) {
                    bVar2 = bVar12;
                  }
                  pcVar20 = (char *)(ulong)bVar2;
                  if (bVar17 != bVar2) break;
                  lVar14 = lVar14 + 1;
                  if (lVar8 == lVar14) goto LAB_100089ec;
                }
                if (lVar8 == lVar14) {
LAB_100089ec:
                  pbVar21 = (byte *)0x4;
                  if (local_31 == 0) {
                    pbVar21 = (byte *)0x4;
                    if (*param_9 == '\0') {
                      uVar10 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x2f2U));
                      uVar15 = (ulong)param_10;
                      uVar13 = uVar15 - 1;
                      if (uVar10 < uVar15) {
                        uVar13 = uVar10;
                      }
                      if (uVar13 != 0) {
                        recovered_10001030((undefined8 *)param_9,(undefined8 *)str_1000d054,uVar13,
                                           uVar15,(undefined8 *)pcVar20);
                      }
                      param_9[uVar13] = '\0';
                      pbVar21 = (byte *)0x4;
                      param_5 = local_60;
                    }
                  }
                  goto LAB_10008a48;
                }
                pbVar9 = pbVar21 + lVar8 + 1;
                pbVar21 = pbVar21 + 1;
              } while (pbVar9 <= pbVar23);
              pbVar21 = (byte *)0x0;
            }
          }
        }
      }
    }
  }
LAB_10008a48:
  if (((param_5 != (char *)0x0) && (local_4c != 0)) && (pbVar23 != (byte *)0x0)) {
    local_58 = pbVar21;
    local_48 = param_2;
    if (param_2 < pbVar23) {
      local_40 = pbVar23 + -1;
      pbVar21 = param_2;
      do {
        lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3d3U));
        if ((pbVar21 == (byte *)0x0) || (lVar8 == 0)) {
LAB_10008b50:
          pbVar9 = (byte *)0x0;
        }
        else {
          pbVar9 = (byte *)0x0;
          if (pbVar21 + lVar8 <= pbVar23) {
            pbVar9 = pbVar21;
            do {
              if (*pbVar9 == 0) break;
              lVar14 = 0;
              while ((pbVar9 + lVar14 < pbVar23 && (bVar12 = pbVar9[lVar14], bVar12 != 0))) {
                bVar17 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar17 = bVar12;
                }
                bVar12 = str_1000d135[lVar14];
                pcVar20 = (char *)((ulong)bVar12 | 0x20);
                pcVar11 = pcVar20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  pcVar11 = (char *)(ulong)bVar12;
                }
                if (bVar17 != (byte)pcVar11) break;
                lVar14 = lVar14 + 1;
                if (lVar8 == lVar14) goto LAB_10008b53;
              }
              if (lVar8 == lVar14) goto LAB_10008b53;
              pbVar22 = pbVar9 + lVar8 + 1;
              pbVar9 = pbVar9 + 1;
            } while (pbVar22 <= pbVar23);
            goto LAB_10008b50;
          }
        }
LAB_10008b53:
        lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3e8U));
        if (pbVar21 == (byte *)0x0) {
          pbVar22 = (byte *)0x0;
        }
        else {
          if (lVar8 != 0) {
            pbVar22 = (byte *)0x0;
            if (pbVar23 < pbVar21 + lVar8) goto LAB_10008c20;
            pbVar22 = pbVar21;
            do {
              if (*pbVar22 == 0) break;
              lVar14 = 0;
              while ((pbVar22 + lVar14 < pbVar23 && (bVar12 = pbVar22[lVar14], bVar12 != 0))) {
                bVar17 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar17 = bVar12;
                }
                bVar12 = str_1000d14a[lVar14];
                bVar2 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar2 = bVar12;
                }
                pcVar20 = (char *)(ulong)bVar2;
                if (bVar17 != bVar2) break;
                lVar14 = lVar14 + 1;
                if (lVar8 == lVar14) goto LAB_10008c20;
              }
              if (lVar8 == lVar14) goto LAB_10008c20;
              pbVar18 = pbVar22 + lVar8 + 1;
              pbVar22 = pbVar22 + 1;
            } while (pbVar18 <= pbVar23);
          }
          pbVar22 = (byte *)0x0;
        }
LAB_10008c20:
        lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3f6U));
        if (pbVar21 == (byte *)0x0) {
          pbVar18 = (byte *)0x0;
        }
        else {
          if (lVar8 != 0) {
            pbVar18 = (byte *)0x0;
            if (pbVar23 < pbVar21 + lVar8) goto LAB_10008cf0;
            pbVar18 = pbVar21;
            do {
              if (*pbVar18 == 0) break;
              lVar14 = 0;
              while ((pbVar18 + lVar14 < pbVar23 && (bVar12 = pbVar18[lVar14], bVar12 != 0))) {
                bVar17 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar17 = bVar12;
                }
                bVar12 = str_1000d158[lVar14];
                bVar2 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar2 = bVar12;
                }
                pcVar20 = (char *)(ulong)bVar2;
                if (bVar17 != bVar2) break;
                lVar14 = lVar14 + 1;
                if (lVar8 == lVar14) goto LAB_10008cf0;
              }
              if (lVar8 == lVar14) goto LAB_10008cf0;
              pbVar16 = pbVar18 + lVar8 + 1;
              pbVar18 = pbVar18 + 1;
            } while (pbVar16 <= pbVar23);
          }
          pbVar18 = (byte *)0x0;
        }
LAB_10008cf0:
        lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x406U));
        param_2 = local_48;
        if ((pbVar21 == (byte *)0x0) || (lVar8 == 0)) {
LAB_10008da0:
          pbVar16 = (byte *)0x0;
joined_r0x10008ee0:
          if (pbVar9 != (byte *)0x0) goto LAB_10008dd8;
LAB_10008da7:
          if (pbVar22 != (byte *)0x0) goto LAB_10008dec;
          pbVar21 = pbVar18;
          if (pbVar18 != (byte *)0x0) goto joined_r0x10008dc3;
LAB_10008e0e:
          pbVar21 = pbVar16;
        }
        else {
          pbVar16 = (byte *)0x0;
          if (pbVar21 + lVar8 <= pbVar23) {
            do {
              pbVar16 = pbVar21;
              if (*pbVar16 == 0) break;
              lVar14 = 0;
              while ((pbVar16 + lVar14 < pbVar23 && (bVar12 = pbVar16[lVar14], bVar12 != 0))) {
                bVar17 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar17 = bVar12;
                }
                bVar12 = str_1000d168[lVar14];
                pcVar20 = (char *)((ulong)bVar12 | 0x20);
                pcVar11 = pcVar20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  pcVar11 = (char *)(ulong)bVar12;
                }
                if (bVar17 != (byte)pcVar11) break;
                lVar14 = lVar14 + 1;
                if (lVar8 == lVar14) goto LAB_10008dd3;
              }
              if (lVar8 == lVar14) goto joined_r0x10008ee0;
              pbVar21 = pbVar16 + 1;
            } while (pbVar16 + lVar8 + 1 <= pbVar23);
            goto LAB_10008da0;
          }
LAB_10008dd3:
          if (pbVar9 == (byte *)0x0) goto LAB_10008da7;
LAB_10008dd8:
          pbVar21 = pbVar9;
          if (pbVar22 < pbVar9) {
            pbVar21 = pbVar22;
          }
          bVar24 = pbVar22 == (byte *)0x0;
          pbVar22 = pbVar21;
          if (bVar24) {
            pbVar22 = pbVar9;
          }
LAB_10008dec:
          pbVar21 = pbVar22;
          if (pbVar18 < pbVar22) {
            pbVar21 = pbVar18;
          }
          if (pbVar18 == (byte *)0x0) {
            pbVar21 = pbVar22;
          }
joined_r0x10008dc3:
          if ((pbVar16 != (byte *)0x0) && (pbVar16 < pbVar21)) goto LAB_10008e0e;
        }
        if ((pbVar21 == (byte *)0x0) || (pbVar23 <= pbVar21)) break;
        if ((local_48 < pbVar21) &&
           (((bVar12 = pbVar21[-1], (byte)(bVar12 - 0x30U) < 10 ||
             ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a)) ||
            ((bVar12 - 0x24 < 0x3c &&
             ((0x800000000000401U >> ((ulong)(bVar12 - 0x24) & 0x3f) & 1) != 0)))))) {
LAB_10008a90:
          pbVar21 = pbVar21 + 1;
        }
        else {
          pbVar9 = (byte *)recovered_10002ff0((char *)pbVar21,'=');
          pcVar11 = local_60;
          if ((pbVar9 == (byte *)0x0) || (pbVar23 <= pbVar9)) goto LAB_10008a90;
          pbVar22 = pbVar9 + 1;
          pbVar21 = pbVar22;
          if (pbVar22 < pbVar23) {
            lVar8 = (long)local_40 - (long)pbVar9;
            do {
              if (((ulong)*pbVar21 < 0x3c) &&
                 ((0x800000000002400U >> ((ulong)*pbVar21 & 0x3f) & 1) != 0)) goto LAB_10008ef0;
              pbVar21 = pbVar21 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            pbVar21 = pbVar23;
          }
LAB_10008ef0:
          *local_60 = '\0';
          pcVar20 = local_70;
          uVar19 = recovered_1000a790(local_60,local_4c,(char *)pbVar22,(char *)pbVar21,local_70,
                                      (char *)local_78);
          if (((uVar19 & 0x10) != 0) && (*pcVar11 != '\0')) goto LAB_100090a3;
        }
      } while (pbVar21 < pbVar23);
    }
    local_40 = (byte *)0x0;
    do {
      if (param_2 < pbVar23) {
        puVar1 = (&PTR_str_1000d171_1000e000)[(long)local_40];
        pbVar21 = param_2;
LAB_10008f8c:
        lVar8 = recovered_10002aa0((long)puVar1);
        if (((pbVar21 != (byte *)0x0) && (lVar8 != 0)) && (pbVar21 + lVar8 <= pbVar23)) {
          do {
            if (*pbVar21 == 0) break;
            lVar14 = 0;
            while ((pbVar21 + lVar14 < pbVar23 && (bVar12 = pbVar21[lVar14], bVar12 != 0))) {
              bVar17 = bVar12 | 0x20;
              if (0x19 < (byte)(bVar12 + 0xbf)) {
                bVar17 = bVar12;
              }
              bVar12 = puVar1[lVar14];
              pcVar20 = (char *)((ulong)bVar12 | 0x20);
              pcVar11 = pcVar20;
              if (0x19 < (byte)(bVar12 + 0xbf)) {
                pcVar11 = (char *)(ulong)bVar12;
              }
              if (bVar17 != (byte)pcVar11) break;
              lVar14 = lVar14 + 1;
              if (lVar8 == lVar14) goto LAB_10009020;
            }
            if (lVar8 == lVar14) goto LAB_10009020;
            pbVar9 = pbVar21 + lVar8 + 1;
            pbVar21 = pbVar21 + 1;
            if (pbVar23 < pbVar9) break;
          } while( true );
        }
      }
LAB_10008f40:
      local_40 = local_40 + 1;
    } while (local_40 != (byte *)0x5);
    uVar19 = 0;
LAB_100090a3:
    pbVar21 = local_58;
  }
  uVar19 = uVar19 | (uint)pbVar21;
  if (((param_11 & 1) != 0) && (pbVar23 != (byte *)0x0)) {
    uVar13 = 0xfff;
    if ((ulong)((long)pbVar23 - (long)param_2) < 0xfff) {
      uVar13 = (long)pbVar23 - (long)param_2;
    }
    recovered_10001030((undefined8 *)local_10d8,(undefined8 *)param_2,uVar13,pbVar21,
                       (undefined8 *)pcVar20);
    local_10d8[uVar13] = '\0';
    uVar5 = recovered_10009220(local_10d8,param_7,param_8);
    local_40 = (byte *)CONCAT44(PF_PART4(local_40, 4),uVar5);
    uVar5 = recovered_100094a0(local_10d8,param_7,param_8);
    uVar6 = recovered_10009c30(local_10d8,param_7,param_8);
    uVar7 = recovered_10009de0(local_10d8,param_7,param_8);
    uVar19 = uVar19 | uVar7 | uVar6 | uVar5 | (uint)local_40;
  }
  bVar24 = uVar19 != 0;
  if (!bVar24) {
    uVar19 = 8;
  }
  local_31 = local_31 | bVar24;
  if (local_31 == 0) {
    if (*param_9 == '\0') {
      uVar10 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x313U));
      uVar15 = (ulong)param_10;
      uVar13 = uVar15 - 1;
      if (uVar10 < uVar15) {
        uVar13 = uVar10;
      }
      if (uVar13 != 0) {
        recovered_10001030((undefined8 *)param_9,(undefined8 *)str_1000d075,uVar13,uVar15,
                           (undefined8 *)pcVar20);
      }
      param_9[uVar13] = '\0';
    }
    uVar19 = 8;
  }
  return uVar19;
LAB_10008760:
  pbVar21 = (byte *)(param_1 + 8);
  while (((ulong)*pbVar21 < 0x21 && ((0x100002600U >> ((ulong)*pbVar21 & 0x3f) & 1) != 0))) {
    pbVar21 = pbVar21 + 1;
  }
  lVar8 = recovered_10002aa0((long)local_d8);
  iVar4 = recovered_10006df0((long)pbVar21,(long)local_d8,lVar8);
  if (iVar4 == 0) {
    uVar13 = (ulong)pbVar21[lVar8];
    if ((uVar13 < 0x29) && ((0x10100002600U >> (uVar13 & 0x3f) & 1) != 0)) {
      local_68 = uVar13;
      pcVar11 = recovered_10002ff0((char *)(pbVar21 + lVar8),'{');
      if (pcVar11 == (char *)0x0) {
        local_40 = (byte *)0x0;
      }
      else {
        local_40 = (byte *)(pcVar11 + 1);
        iVar4 = 1;
        pbVar21 = local_40;
LAB_10008800:
        bVar12 = *pbVar21;
        if (bVar12 < 0x27) {
          if (bVar12 == 0x22) goto LAB_10008835;
          if (bVar12 == 0) {
            local_40 = (byte *)0x0;
            goto LAB_10008885;
          }
LAB_100087f9:
          pbVar21 = pbVar21 + 1;
          goto LAB_10008800;
        }
        if (bVar12 == 0x27) {
LAB_10008835:
          pbVar21 = pbVar21 + 1;
LAB_1000884a:
          do {
            bVar17 = *pbVar21;
            if (bVar17 == 0x5c) {
              if (pbVar21[1] != 0) {
                pbVar21 = pbVar21 + 2;
                goto LAB_1000884a;
              }
            }
            else if (bVar17 == 0) break;
            pbVar21 = pbVar21 + 1;
          } while (bVar17 != bVar12);
          goto LAB_10008800;
        }
        if (bVar12 == 0x7b) {
          iVar4 = iVar4 + 1;
          goto LAB_100087f9;
        }
        if ((bVar12 != 0x7d) || (iVar4 = iVar4 + -1, iVar4 != 0)) goto LAB_100087f9;
        local_58 = pbVar21;
      }
LAB_10008885:
      uVar13 = local_68;
      if (0x28 < (uint)local_68) goto LAB_100086c8;
    }
    else if (0x28 < pbVar21[lVar8]) goto LAB_100086c8;
    param_2 = local_48;
    param_5 = local_60;
    if ((0x10100002600U >> (uVar13 & 0x3f) & 1) != 0) goto LAB_100088d9;
  }
LAB_100086c8:
  param_2 = local_48;
  param_5 = local_60;
  param_1 = param_1 + 1;
  lVar8 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3caU));
  if (lVar8 == 0) goto LAB_100088d1;
  goto LAB_100086d9;
LAB_10009020:
  if (pbVar23 <= pbVar21) goto LAB_10008f40;
  pcVar11 = recovered_10002ff0((char *)pbVar21,'(');
  if (pcVar11 != (char *)0x0) {
    pbVar9 = (byte *)recovered_1000b790(pcVar11);
    pcVar3 = local_60;
    if ((pbVar9 != (byte *)0x0) && (pbVar9 <= pbVar23)) {
      *local_60 = '\0';
      pcVar20 = local_70;
      uVar19 = recovered_1000a790(local_60,local_4c,pcVar11 + 1,(char *)pbVar9,local_70,
                                  (char *)local_78);
      pbVar21 = pbVar9;
      if (((uVar19 & 0x10) != 0) && (*pcVar3 != '\0')) {
        param_2 = local_48;
        goto LAB_100090a3;
      }
    }
  }
  pbVar21 = pbVar21 + 1;
  param_2 = local_48;
  if (pbVar23 <= pbVar21) goto LAB_10008f40;
  goto LAB_10008f8c;
}

#undef PTR_str_1000d171_1000e000
#undef str_1000d044
#undef str_1000d054
#undef str_1000d075
#undef str_1000d12c
#undef str_1000d135
#undef str_1000d14a
#undef str_1000d158
#undef str_1000d168
#undef local_10d8
#undef local_d8
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_4c
#undef local_48
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091b0
 */

void recovered_100091b0(char *buffer,uint capacity,char *text,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((text == (char *)0x0 || (capacity == 0 || buffer == (char *)0x0)) || (*buffer != '\0')) {
    return;
  }
  uVar1 = recovered_10002aa0((long)text);
  uVar2 = (ulong)capacity;
  uVar3 = uVar2 - 1;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    recovered_10001030((undefined8 *)buffer,(undefined8 *)text,uVar3,uVar2,in_R8);
  }
  buffer[uVar3] = '\0';
  return;
}


#undef str_1000d0d1
#define str_1000d0d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36fU)))
#undef str_1000d28f
#define str_1000d28f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009220
 */

uint recovered_10009220(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  long lVar3;
  char *last;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *first;

  lVar3 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x36fU));
  if (lVar3 == 0 || script == (char *)0x0) {
    return 0;
  }
  uVar8 = 0;
LAB_100092a2:
  if (*script == 0) {
    return uVar8;
  }
  first = (byte *)script;
  do {
    first = first + 1;
    lVar4 = 0;
    while (bVar1 = script[lVar4], bVar1 != 0) {
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      bVar1 = str_1000d0d1[lVar4];
      bVar7 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar7 = bVar1;
      }
      if (bVar5 != bVar7) break;
      lVar4 = lVar4 + 1;
      if (lVar3 == lVar4) goto LAB_10009320;
    }
    if (lVar3 == lVar4) break;
    pbVar9 = (byte *)(script + 1);
    script = script + 1;
    if (*pbVar9 == 0) {
      return uVar8;
    }
  } while( true );
LAB_10009320:
  lVar3 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x52dU));
  if (lVar3 == 0) {
    pbVar9 = (byte *)0x0;
  }
  else {
    if (*script != 0) {
      pbVar9 = (byte *)script;
      do {
        lVar4 = 0;
        while (bVar1 = pbVar9[lVar4], bVar1 != 0) {
          bVar5 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar5 = bVar1;
          }
          bVar1 = str_1000d28f[lVar4];
          bVar7 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          if (bVar5 != bVar7) break;
          lVar4 = lVar4 + 1;
          if (lVar3 == lVar4) goto LAB_100093d7;
        }
        if (lVar3 == lVar4) goto LAB_100093d7;
        pbVar6 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
      } while (*pbVar6 != 0);
    }
    pbVar9 = (byte *)0x0;
  }
LAB_100093d7:
  pbVar6 = (byte *)script;
  while( true ) {
    if (*pbVar6 == 0) {
      return uVar8;
    }
    if (*pbVar6 == 0x28) break;
    pbVar6 = pbVar6 + 1;
    first = first + 1;
  }
  while (((ulong)*first < 0x21 && ((0x100002600U >> ((ulong)*first & 0x3f) & 1) != 0))) {
    first = first + 1;
  }
  last = recovered_1000b790((char *)pbVar6);
  if (last != (char *)0x0) {
    uVar2 = recovered_1000c4f0(output,capacity,(char *)first,last);
    if (uVar2 != 0) {
      uVar8 = 1;
    }
    if (pbVar9 == (byte *)script) {
      uVar8 = 1;
    }
    if (pbVar9 == (byte *)script && (capacity != 0 && output != (char *)0x0)) {
      lVar3 = recovered_10002aa0((long)output);
      uVar8 = 1;
      if (lVar3 + 1U < (ulong)capacity) {
        (output + lVar3)[0] = '\n';
        (output + lVar3)[1] = '\0';
      }
    }
    first = (byte *)(last + 1);
  }
  script = (char *)first;
  lVar3 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x36fU));
  if (lVar3 == 0) {
    return uVar8;
  }
  goto LAB_100092a2;
}

#undef str_1000d0d1
#undef str_1000d28f

#undef PTR_str_1000d2bb_1000e030
#define PTR_str_1000d2bb_1000e030 (*(char * *)(((uintptr_t)pf_module_state + 0x12ceU)))
#undef str_1000d2a5
#define str_1000d2a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x543U)))
#undef str_1000d2b0
#define str_1000d2b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54eU)))
#undef str_1000d2d3
#define str_1000d2d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x571U)))
#define local_40 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094a0
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_100094a0(char *script,char *output,uint capacity)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  byte bVar15;

  local_40 = 0;
  if (capacity != 0 && (output != (char *)0x0 && script != (char *)0x0)) {
    lVar7 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x543U));
    if (lVar7 != 0) {
      local_40 = 0;
      pcVar8 = script;
LAB_10009521:
      if (*pcVar8 != '\0') {
        do {
          lVar12 = 0;
          while (bVar2 = pcVar8[lVar12], bVar2 != 0) {
            bVar13 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar13 = bVar2;
            }
            bVar2 = str_1000d2a5[lVar12];
            bVar15 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar15 = bVar2;
            }
            if (bVar13 != bVar15) break;
            lVar12 = lVar12 + 1;
            if (lVar7 == lVar12) goto LAB_100095a0;
          }
          if (lVar7 == lVar12) goto LAB_100095a0;
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          if (*pcVar9 == '\0') break;
        } while( true );
      }
      goto LAB_10009606;
    }
    local_40 = 0;
LAB_10009606:
    lVar7 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x54eU));
    if (lVar7 != 0) {
      pcVar8 = script;
LAB_10009641:
      if (*pcVar8 != '\0') {
        do {
          lVar12 = 0;
          while (bVar2 = pcVar8[lVar12], bVar2 != 0) {
            bVar13 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar13 = bVar2;
            }
            bVar2 = str_1000d2b0[lVar12];
            bVar15 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar15 = bVar2;
            }
            if (bVar13 != bVar15) break;
            lVar12 = lVar12 + 1;
            if (lVar7 == lVar12) goto LAB_100096c0;
          }
          if (lVar7 == lVar12) goto LAB_100096c0;
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          if (*pcVar9 == '\0') break;
        } while( true );
      }
    }
LAB_1000971e:
    uVar14 = (ulong)capacity;
    lVar7 = 0;
    bVar5 = true;
    do {
      bVar11 = bVar5;
      puVar3 = (&PTR_str_1000d2bb_1000e030)[lVar7];
      lVar7 = recovered_10002aa0((long)puVar3);
      pcVar8 = script;
LAB_10009780:
      if ((lVar7 != 0) && (*pcVar8 != '\0')) {
        do {
          lVar12 = 0;
          while (bVar2 = pcVar8[lVar12], bVar2 != 0) {
            bVar13 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar13 = bVar2;
            }
            bVar2 = puVar3[lVar12];
            bVar15 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar15 = bVar2;
            }
            if (bVar13 != bVar15) break;
            lVar12 = lVar12 + 1;
            if (lVar7 == lVar12) goto LAB_10009800;
          }
          if (lVar7 == lVar12) goto LAB_10009800;
          pcVar9 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          if (*pcVar9 == '\0') break;
        } while( true );
      }
LAB_10009730:
      lVar7 = 1;
      bVar5 = false;
    } while (bVar11);
    lVar7 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x571U));
    if (lVar7 != 0) {
LAB_10009985:
      if (*script != '\0') {
        do {
          lVar12 = 0;
          while (bVar2 = script[lVar12], bVar2 != 0) {
            bVar13 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar13 = bVar2;
            }
            bVar2 = str_1000d2d3[lVar12];
            bVar15 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar15 = bVar2;
            }
            if (bVar13 != bVar15) break;
            lVar12 = lVar12 + 1;
            if (lVar7 == lVar12) goto LAB_10009a00;
          }
          if (lVar7 == lVar12) goto LAB_10009a00;
          pcVar8 = script + 1;
          script = script + 1;
          if (*pcVar8 == '\0') {
            return local_40;
          }
        } while( true );
      }
    }
  }
  return local_40;
LAB_100095a0:
  pcVar8 = recovered_10002ff0(pcVar8,'=');
  if (pcVar8 == (char *)0x0) goto LAB_10009606;
  pcVar8 = pcVar8 + 1;
  pcVar9 = recovered_1000c9e0(pcVar8);
  if (pcVar9 != (char *)0x0) {
    uVar6 = recovered_1000c4f0(output,capacity,pcVar8,pcVar9);
    if (uVar6 != 0) {
      local_40 = 1;
    }
    if (*pcVar9 != '\0') {
      pcVar8 = pcVar9 + 1;
    }
  }
  lVar7 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x543U));
  if (lVar7 == 0) goto LAB_10009606;
  goto LAB_10009521;
LAB_100096c0:
  pcVar8 = recovered_10002ff0(pcVar8,'=');
  if (pcVar8 == (char *)0x0) goto LAB_1000971e;
  pcVar8 = pcVar8 + 1;
  pcVar9 = recovered_1000c9e0(pcVar8);
  if (pcVar9 != (char *)0x0) {
    uVar6 = recovered_1000c4f0(output,capacity,pcVar8,pcVar9);
    if (uVar6 != 0) {
      local_40 = 1;
    }
    if (*pcVar9 != '\0') {
      pcVar8 = pcVar9 + 1;
    }
  }
  lVar7 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x54eU));
  if (lVar7 == 0) goto LAB_1000971e;
  goto LAB_10009641;
LAB_10009800:
  pcVar8 = recovered_10002ff0(pcVar8,'=');
  if (pcVar8 == (char *)0x0) goto LAB_10009730;
  pcVar8 = pcVar8 + 1;
  pcVar9 = recovered_1000c9e0(pcVar8);
  if (pcVar9 != (char *)0x0) {
    uVar10 = recovered_10002aa0((long)output);
    uVar1 = uVar10 + 1;
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      (output + uVar10)[0] = '<';
      (output + uVar10)[1] = '\0';
      uVar4 = uVar10 + 2;
      uVar10 = uVar1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = 'p';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    if (uVar1 < uVar14) {
      output[uVar10] = '>';
      output[uVar1] = '\0';
    }
    recovered_1000cb10(output,capacity,pcVar8,pcVar9);
    uVar10 = recovered_10002aa0((long)output);
    uVar1 = uVar10 + 1;
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      (output + uVar10)[0] = '<';
      (output + uVar10)[1] = '\0';
      uVar4 = uVar10 + 2;
      uVar10 = uVar1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = '/';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      output[uVar10] = 'p';
      output[uVar1] = '\0';
      uVar4 = uVar1 + 1;
      uVar10 = uVar1;
    }
    if (uVar4 < uVar14) {
      output[uVar10] = '>';
      output[uVar4] = '\0';
    }
    if (*pcVar9 != '\0') {
      pcVar8 = pcVar9 + 1;
    }
    local_40 = 1;
  }
  lVar7 = recovered_10002aa0((long)puVar3);
  goto LAB_10009780;
LAB_10009a00:
  pcVar8 = recovered_10002ff0(script,'=');
  if (pcVar8 == (char *)0x0) {
    return local_40;
  }
  script = pcVar8 + 1;
  pcVar8 = recovered_1000c9e0(script);
  if (pcVar8 != (char *)0x0) {
    uVar10 = recovered_10002aa0((long)output);
    uVar1 = uVar10 + 1;
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      (output + uVar10)[0] = '<';
      (output + uVar10)[1] = '\0';
      uVar4 = uVar10 + 2;
      uVar10 = uVar1;
    }
    if (uVar4 < uVar14) {
      output[uVar10] = 't';
      output[uVar4] = '\0';
      uVar10 = uVar4;
      uVar4 = uVar4 + 1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = 'i';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      output[uVar10] = 't';
      output[uVar1] = '\0';
      uVar4 = uVar1 + 1;
      uVar10 = uVar1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = 'l';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      output[uVar10] = 'e';
      output[uVar1] = '\0';
      uVar4 = uVar1 + 1;
      uVar10 = uVar1;
    }
    if (uVar4 < uVar14) {
      output[uVar10] = '>';
      output[uVar4] = '\0';
    }
    recovered_1000cb10(output,capacity,script,pcVar8);
    uVar10 = recovered_10002aa0((long)output);
    uVar1 = uVar10 + 1;
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      (output + uVar10)[0] = '<';
      (output + uVar10)[1] = '\0';
      uVar4 = uVar10 + 2;
      uVar10 = uVar1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = '/';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      output[uVar10] = 't';
      output[uVar1] = '\0';
      uVar4 = uVar1 + 1;
      uVar10 = uVar1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = 'i';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      output[uVar10] = 't';
      output[uVar1] = '\0';
      uVar4 = uVar1 + 1;
      uVar10 = uVar1;
    }
    uVar1 = uVar4;
    if (uVar4 < uVar14) {
      output[uVar10] = 'l';
      output[uVar4] = '\0';
      uVar1 = uVar4 + 1;
      uVar10 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 < uVar14) {
      output[uVar10] = 'e';
      output[uVar1] = '\0';
      uVar4 = uVar1 + 1;
      uVar10 = uVar1;
    }
    if (uVar4 < uVar14) {
      output[uVar10] = '>';
      output[uVar4] = '\0';
    }
    if (*pcVar8 != '\0') {
      script = pcVar8 + 1;
    }
    local_40 = 1;
  }
  lVar7 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x571U));
  if (lVar7 == 0) {
    return local_40;
  }
  goto LAB_10009985;
}

#undef PTR_str_1000d2bb_1000e030
#undef str_1000d2a5
#undef str_1000d2b0
#undef str_1000d2d3
#undef local_40

#undef str_1000d2e2
#define str_1000d2e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x580U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c30
 */

uint recovered_10009c30(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *last;
  long lVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;

  lVar3 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x580U));
  if (lVar3 == 0 || script == (char *)0x0) {
    return 0;
  }
  uVar9 = 0;
  uVar8 = 0;
LAB_10009c93:
  if (*script == 0) {
    return uVar8;
  }
  do {
    lVar5 = 0;
    while (bVar1 = script[lVar5], bVar1 != 0) {
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      bVar1 = str_1000d2e2[lVar5];
      bVar7 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar7 = bVar1;
      }
      if (bVar6 != bVar7) break;
      lVar5 = lVar5 + 1;
      if (lVar3 == lVar5) goto LAB_10009d10;
    }
    if (lVar3 == lVar5) break;
    pbVar4 = (byte *)(script + 1);
    script = script + 1;
    if (*pbVar4 == 0) {
      return uVar8;
    }
  } while( true );
LAB_10009d10:
  pbVar4 = (byte *)recovered_10002ff0(script,'(');
  if (pbVar4 == (byte *)0x0) {
    return uVar8;
  }
  last = (byte *)recovered_1000b790((char *)pbVar4);
  if (last == (byte *)0x0) {
    last = pbVar4;
  }
  else {
    pbVar4 = pbVar4 + 1;
joined_r0x10009d43:
    if (pbVar4 < last) {
      bVar1 = *pbVar4;
      if (bVar1 < 0x2c) {
        if ((bVar1 != 0x22) && (bVar1 != 0x27)) goto LAB_10009d52;
LAB_10009d85:
        pbVar10 = pbVar4 + 1;
        if (last <= pbVar4 + 1) goto LAB_10009d52;
        do {
          pbVar4 = pbVar10 + 1;
          if ((*pbVar10 == 0x5c) && (pbVar4 < last)) {
            pbVar4 = pbVar10 + 2;
          }
          else if (*pbVar10 == bVar1) break;
          pbVar10 = pbVar4;
        } while (pbVar4 < last);
      }
      else {
        if (bVar1 == 0x60) goto LAB_10009d85;
        if (bVar1 == 0x2c) {
          uVar2 = recovered_1000c4f0(output,capacity,(char *)(pbVar4 + 1),(char *)last);
          uVar8 = uVar9;
          if (uVar2 != 0) {
            uVar8 = 1;
            uVar9 = uVar8;
          }
          goto LAB_10009c83;
        }
LAB_10009d52:
        pbVar4 = pbVar4 + 1;
      }
      goto joined_r0x10009d43;
    }
  }
LAB_10009c83:
  script = (char *)(last + 1);
  lVar3 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x580U));
  if (lVar3 == 0) {
    return uVar8;
  }
  goto LAB_10009c93;
}

#undef str_1000d2e2

#undef str_1000d113
#define str_1000d113 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_1000d11f
#define str_1000d11f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009de0
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_10009de0(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *first;
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  byte bVar9;
  char *pcVar10;
  byte bVar11;
  uint uVar12;
  bool bVar13;

  uVar12 = 0;
  if (script != (char *)0x0) {
    if (*script != '\0') {
      uVar12 = 0;
      do {
        lVar5 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3b1U));
        if (lVar5 == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          if (*script != '\0') {
            pcVar6 = script;
            do {
              lVar8 = 0;
              while (bVar1 = pcVar6[lVar8], bVar1 != 0) {
                bVar9 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar9 = bVar1;
                }
                bVar1 = str_1000d113[lVar8];
                bVar11 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar11 = bVar1;
                }
                if (bVar9 != bVar11) break;
                lVar8 = lVar8 + 1;
                if (lVar5 == lVar8) goto LAB_10009efa;
              }
              if (lVar5 == lVar8) goto LAB_10009efa;
              pcVar7 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
            } while (*pcVar7 != '\0');
          }
          pcVar6 = (char *)0x0;
        }
LAB_10009efa:
        lVar5 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x3bdU));
        if (lVar5 != 0) {
          cVar2 = *script;
          while (cVar2 != '\0') {
            lVar8 = 0;
            while (bVar1 = script[lVar8], bVar1 != 0) {
              bVar9 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar9 = bVar1;
              }
              bVar1 = str_1000d11f[lVar8];
              bVar11 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar11 = bVar1;
              }
              if (bVar9 != bVar11) break;
              lVar8 = lVar8 + 1;
              if (lVar5 == lVar8) goto LAB_10009f82;
            }
            if (lVar5 == lVar8) goto LAB_10009f82;
            pcVar7 = script + 1;
            script = script + 1;
            cVar2 = *pcVar7;
          }
        }
        script = (char *)0x0;
LAB_10009f82:
        if (pcVar6 == (char *)0x0) {
          if (script == (char *)0x0) {
            return uVar12;
          }
        }
        else {
          pcVar7 = pcVar6;
          if (script < pcVar6) {
            pcVar7 = script;
          }
          bVar13 = script == (char *)0x0;
          script = pcVar7;
          if (bVar13) {
            script = pcVar6;
          }
        }
        pcVar6 = recovered_10002ff0(script,'(');
        if (pcVar6 == (char *)0x0) {
          return uVar12;
        }
        pcVar7 = recovered_1000b790(pcVar6);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = pcVar6;
        }
        else {
          bVar13 = false;
LAB_10009fe0:
          do {
            first = pcVar6 + 1;
            if (pcVar7 <= first) break;
            lVar5 = 1;
            pcVar10 = first;
            do {
              cVar2 = *pcVar10;
              if ((cVar2 == '\"') || (cVar2 == '\'')) {
                lVar5 = lVar5 + 1;
                do {
                  while( true ) {
                    if (pcVar7 <= pcVar6 + lVar5) goto LAB_1000a008;
                    pcVar10 = pcVar6 + lVar5;
                    if ((*pcVar10 != '\\') || (pcVar7 <= pcVar6 + lVar5 + 1)) break;
                    lVar5 = lVar5 + 2;
                  }
                  lVar5 = lVar5 + 1;
                } while (*pcVar10 != cVar2);
              }
              else {
                if (cVar2 == ',') {
                  bVar3 = true;
                  goto LAB_1000a073;
                }
                lVar5 = lVar5 + 1;
              }
LAB_1000a008:
              pcVar10 = pcVar6 + lVar5;
            } while (pcVar10 < pcVar7);
            bVar3 = false;
LAB_1000a073:
            pcVar6 = pcVar10;
            if (1 < lVar5) {
              if ((bVar13 && (output != (char *)0x0 && capacity != 0)) &&
                 (lVar5 = recovered_10002aa0((long)output), lVar5 + 1U < (ulong)capacity)) {
                (output + lVar5)[0] = ' ';
                (output + lVar5)[1] = '\0';
              }
              uVar4 = recovered_1000c4f0(output,capacity,first,pcVar10);
              if (uVar4 != 0) {
                bVar13 = true;
              }
              if (!bVar3) break;
              goto LAB_10009fe0;
            }
          } while (bVar3);
          if (bVar13) {
            uVar12 = 1;
          }
          if (bVar13 && (output != (char *)0x0 && capacity != 0)) {
            lVar5 = recovered_10002aa0((long)output);
            uVar12 = 1;
            if (lVar5 + 1U < (ulong)capacity) {
              (output + lVar5)[0] = '\n';
              (output + lVar5)[1] = '\0';
            }
          }
        }
        script = pcVar7 + 1;
      } while (pcVar7[1] != '\0');
    }
  }
  return uVar12;
}

#undef str_1000d113
#undef str_1000d11f

#undef DAT_1000d091
#define DAT_1000d091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
#undef str_1000d044
#define str_1000d044 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_1000d054
#define str_1000d054 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_1000d075
#define str_1000d075 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x313U)))
#undef str_1000d098
#define str_1000d098 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#undef str_1000d0c7
#define str_1000d0c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x365U)))
#undef str_1000d0d1
#define str_1000d0d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36fU)))
#undef str_1000d0e0
#define str_1000d0e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_1000d0ea
#define str_1000d0ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_1000d0f6
#define str_1000d0f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x394U)))
#undef str_1000d100
#define str_1000d100 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39eU)))
#undef str_1000d113
#define str_1000d113 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_1000d11f
#define str_1000d11f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a150
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000a150(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  undefined4 in_register_00000084 = 0;
  undefined8 *in_R8;
  ulong uVar15;
  bool bVar16;
  bool bVar17;

  in_R8 = (undefined8 *)CONCAT44(in_register_00000084,status_capacity);
  bVar16 = status != (char *)0x0;
  bVar17 = status_capacity != 0;
  if (bVar17 && bVar16) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if ((flags & 1) != 0) {
      uVar5 = recovered_10009220(script,output,capacity);
      uVar6 = recovered_100094a0(script,output,capacity);
      uVar7 = recovered_10009c30(script,output,capacity);
      uVar8 = recovered_10009de0(script,output,capacity);
      uVar5 = uVar8 | uVar7 | uVar6 | uVar5;
    }
    lVar9 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x32fU));
    if (lVar9 != 0) {
      cVar2 = *script;
      pcVar11 = script;
      while (cVar2 != '\0') {
        lVar13 = 0;
        while (bVar3 = pcVar11[lVar13], bVar3 != 0) {
          bVar14 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar14 = bVar3;
          }
          bVar3 = (&DAT_1000d091)[lVar13];
          bVar4 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar4 = bVar3;
          }
          in_R8 = (undefined8 *)(ulong)bVar4;
          if (bVar14 != bVar4) break;
          lVar13 = lVar13 + 1;
          if (lVar9 == lVar13) goto LAB_1000a2a4;
        }
        if (lVar9 == lVar13) {
LAB_1000a2a4:
          uVar5 = uVar5 | 2;
          if ((bVar17 && bVar16) && (*status == '\0')) {
            uVar10 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x336U));
            uVar12 = (ulong)status_capacity;
            uVar15 = uVar12 - 1;
            if (uVar10 < uVar12) {
              uVar15 = uVar10;
            }
            if (uVar15 != 0) {
              recovered_10001030((undefined8 *)status,(undefined8 *)str_1000d098,uVar15,uVar12,in_R8
                                );
            }
            status[uVar15] = '\0';
          }
          break;
        }
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar2 = *pcVar1;
      }
    }
    if (((flags & 2) != 0) && (lVar9 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x2e2U)), lVar9 != 0)) {
      cVar2 = *script;
      pcVar11 = script;
      while (cVar2 != '\0') {
        lVar13 = 0;
        while (bVar3 = pcVar11[lVar13], bVar3 != 0) {
          bVar14 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar14 = bVar3;
          }
          bVar3 = str_1000d044[lVar13];
          bVar4 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar4 = bVar3;
          }
          in_R8 = (undefined8 *)(ulong)bVar4;
          if (bVar14 != bVar4) break;
          lVar13 = lVar13 + 1;
          if (lVar9 == lVar13) goto LAB_1000a3a0;
        }
        if (lVar9 == lVar13) {
LAB_1000a3a0:
          uVar5 = uVar5 | 4;
          if ((bVar17 && bVar16) && (*status == '\0')) {
            uVar10 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x2f2U));
            uVar12 = (ulong)status_capacity;
            uVar15 = uVar12 - 1;
            if (uVar10 < uVar12) {
              uVar15 = uVar10;
            }
            if (uVar15 != 0) {
              recovered_10001030((undefined8 *)status,(undefined8 *)str_1000d054,uVar15,uVar12,in_R8
                                );
            }
            status[uVar15] = '\0';
          }
          break;
        }
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar2 = *pcVar1;
      }
    }
    lVar9 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x365U));
    if ((lVar9 != 0) && (*script != '\0')) {
      pcVar11 = script;
      do {
        lVar13 = 0;
        while (bVar3 = pcVar11[lVar13], bVar3 != 0) {
          bVar14 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar14 = bVar3;
          }
          bVar3 = str_1000d0c7[lVar13];
          bVar4 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar4 = bVar3;
          }
          in_R8 = (undefined8 *)(ulong)bVar4;
          if (bVar14 != bVar4) break;
          lVar13 = lVar13 + 1;
          if (lVar9 == lVar13) {
            return uVar5;
          }
        }
        if (lVar9 == lVar13) {
          return uVar5;
        }
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar1 != '\0');
    }
    lVar9 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x36fU));
    if ((lVar9 != 0) && (*script != '\0')) {
      pcVar11 = script;
      do {
        lVar13 = 0;
        while (bVar3 = pcVar11[lVar13], bVar3 != 0) {
          bVar14 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar14 = bVar3;
          }
          bVar3 = str_1000d0d1[lVar13];
          bVar4 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar4 = bVar3;
          }
          in_R8 = (undefined8 *)(ulong)bVar4;
          if (bVar14 != bVar4) break;
          lVar13 = lVar13 + 1;
          if (lVar9 == lVar13) {
            return uVar5;
          }
        }
        if (lVar9 == lVar13) {
          return uVar5;
        }
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar1 != '\0');
    }
    lVar9 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x37eU));
    if ((lVar9 != 0) && (*script != '\0')) {
      pcVar11 = script;
      do {
        lVar13 = 0;
        while (bVar3 = pcVar11[lVar13], bVar3 != 0) {
          bVar14 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar14 = bVar3;
          }
          bVar3 = str_1000d0e0[lVar13];
          bVar4 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar4 = bVar3;
          }
          in_R8 = (undefined8 *)(ulong)bVar4;
          if (bVar14 != bVar4) break;
          lVar13 = lVar13 + 1;
          if (lVar9 == lVar13) {
            return uVar5;
          }
        }
        if (lVar9 == lVar13) {
          return uVar5;
        }
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar1 != '\0');
    }
    lVar9 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x388U));
    if ((lVar9 != 0) && (*script != '\0')) {
      pcVar11 = script;
      do {
        lVar13 = 0;
        while (bVar3 = pcVar11[lVar13], bVar3 != 0) {
          bVar14 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar14 = bVar3;
          }
          bVar3 = str_1000d0ea[lVar13];
          bVar4 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar4 = bVar3;
          }
          in_R8 = (undefined8 *)(ulong)bVar4;
          if (bVar14 != bVar4) break;
          lVar13 = lVar13 + 1;
          if (lVar9 == lVar13) {
            return uVar5;
          }
        }
        if (lVar9 == lVar13) {
          return uVar5;
        }
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar11 = recovered_1000a6e0(script,str_1000d0f6);
    if ((((pcVar11 == (char *)0x0) &&
         (pcVar11 = recovered_1000a6e0(script,str_1000d100), pcVar11 == (char *)0x0)) &&
        (pcVar11 = recovered_1000a6e0(script,str_1000d113), pcVar11 == (char *)0x0)) &&
       (((pcVar11 = recovered_1000a6e0(script,str_1000d11f), pcVar11 == (char *)0x0 &&
         (pcVar11 = recovered_1000a6e0(script,&DAT_1000d091), pcVar11 == (char *)0x0)) &&
        ((pcVar11 = recovered_1000a6e0(script,str_1000d044), pcVar11 == (char *)0x0 &&
         (*script != '\0')))))) {
      uVar5 = uVar5 | 8;
      recovered_100091b0(status,status_capacity,str_1000d075,in_R8);
    }
  }
  return uVar5;
}

#undef DAT_1000d091
#undef str_1000d044
#undef str_1000d054
#undef str_1000d075
#undef str_1000d098
#undef str_1000d0c7
#undef str_1000d0d1
#undef str_1000d0e0
#undef str_1000d0ea
#undef str_1000d0f6
#undef str_1000d100
#undef str_1000d113
#undef str_1000d11f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6e0
 */

char * recovered_1000a6e0(char *text,char *pattern)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;

  if (pattern == (char *)0x0) {
    return (char *)0x0;
  }
  lVar4 = recovered_10002aa0((long)pattern);
  if (lVar4 != 0 && text != (char *)0x0) {
    cVar2 = *text;
    while (cVar2 != '\0') {
      lVar5 = 0;
      while (bVar3 = text[lVar5], bVar3 != 0) {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        bVar3 = pattern[lVar5];
        bVar7 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar7 = bVar3;
        }
        if (bVar6 != bVar7) break;
        lVar5 = lVar5 + 1;
        if (lVar4 == lVar5) {
          return text;
        }
      }
      if (lVar4 == lVar5) {
        return text;
      }
      pcVar1 = text + 1;
      text = text + 1;
      cVar2 = *pcVar1;
    }
  }
  return (char *)0x0;
}


#undef DAT_1000d25c
#define DAT_1000d25c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#undef str_1000d1cd
#define str_1000d1cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46bU)))
#undef str_1000d1e0
#define str_1000d1e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47eU)))
#undef str_1000d1ea
#define str_1000d1ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x488U)))
#undef str_1000d202
#define str_1000d202 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a0U)))
#undef str_1000d218
#define str_1000d218 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b6U)))
#undef str_1000d21f
#define str_1000d21f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#undef str_1000d236
#define str_1000d236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000d241
#define str_1000d241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
#define local_268 (*(char (*)[512])(frame + 24))
#define local_68 (*(char * *)(frame + 536))
#define local_60 (*(char * *)(frame + 544))
#define local_58 (*(char * *)(frame + 552))
#define local_50 (*(char * *)(frame + 560))
#define local_48 (*(byte * *)(frame + 568))
#define local_40 (*(char * *)(frame + 576))
#define local_34 (*(uint *)(frame + 588))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a790
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000a790(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char frame[672] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;

  if (first < last && first != (char *)0x0) {
    local_68 = &DAT_1000d25c;
    if (html != (char *)0x0) {
      local_68 = html;
    }
    local_60 = local_68 + 1;
    local_58 = html;
    local_50 = url;
    do {
      bVar1 = *first;
      uVar6 = (ulong)bVar1;
      local_40 = output;
      local_34 = capacity;
      if (uVar6 < 0x2c) {
        if ((0x80100002600U >> (uVar6 & 0x3f) & 1) == 0) {
          if ((0x8400000000U >> (uVar6 & 0x3f) & 1) == 0) goto LAB_1000a873;
          pbVar16 = (byte *)(first + 1);
          pbVar5 = pbVar16;
          if (pbVar16 < last) {
            do {
              if (pbVar5 + 1 < last && *pbVar5 == 0x5c) {
                pbVar14 = pbVar5 + 2;
              }
              else {
                pbVar14 = pbVar5 + 1;
                if (*pbVar5 == bVar1) {
                  lVar15 = 1;
                  goto LAB_1000a9fe;
                }
              }
              pbVar5 = pbVar14;
            } while (pbVar5 < last);
          }
          lVar15 = 0;
LAB_1000a9fe:
          recovered_1000b240(output,capacity,(char *)pbVar16,(char *)pbVar5);
          first = (char *)(pbVar5 + lVar15);
          goto LAB_1000ace5;
        }
        first = first + 1;
      }
      else {
LAB_1000a873:
        if (bVar1 == 0x60) {
LAB_1000a883:
          uVar3 = local_34;
          pcVar4 = local_40;
          pbVar16 = (byte *)(first + 1);
          pbVar5 = pbVar16;
          if (pbVar16 < last) {
            do {
              bVar1 = *pbVar5;
              pbVar14 = pbVar5 + 1;
              if (pbVar14 < last && bVar1 == 0x5c) {
                pbVar14 = pbVar5 + 2;
              }
              else if (bVar1 == 0x24) {
                if ((pbVar14 < last) && (*pbVar14 == 0x7b)) goto code_r0x1000a8fc;
              }
              else if (bVar1 == 0x60) {
                lVar15 = 1;
                goto LAB_1000acda;
              }
              pbVar5 = pbVar14;
              if (last <= pbVar14) {
                lVar15 = 0;
                goto LAB_1000acda;
              }
            } while( true );
          }
          lVar15 = 0;
LAB_1000acda:
          recovered_1000b240(local_40,local_34,(char *)pbVar16,(char *)pbVar5);
          first = (char *)(pbVar5 + lVar15);
          goto LAB_1000ace5;
        }
        lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x46bU));
        if ((lVar15 != 0) && (*first != 0)) {
          pbVar5 = (byte *)first;
          do {
            lVar9 = 0;
            while (bVar1 = pbVar5[lVar9], bVar1 != 0) {
              bVar10 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar10 = bVar1;
              }
              bVar1 = str_1000d1cd[lVar9];
              bVar11 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar11 = bVar1;
              }
              if (bVar10 != bVar11) break;
              lVar9 = lVar9 + 1;
              if (lVar15 == lVar9) goto LAB_1000aa9c;
            }
            if (lVar15 == lVar9) goto LAB_1000aa9c;
            pbVar16 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar16 != 0);
        }
        pbVar5 = (byte *)0x0;
LAB_1000aa9c:
        if ((byte *)first != pbVar5) {
          lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x47eU));
          if ((lVar15 != 0) && (*first != 0)) {
            pbVar5 = (byte *)first;
            do {
              lVar9 = 0;
              while (bVar1 = pbVar5[lVar9], bVar1 != 0) {
                bVar10 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar10 = bVar1;
                }
                bVar1 = str_1000d1e0[lVar9];
                bVar11 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar11 = bVar1;
                }
                if (bVar10 != bVar11) break;
                lVar9 = lVar9 + 1;
                if (lVar15 == lVar9) goto LAB_1000ab2c;
              }
              if (lVar15 == lVar9) goto LAB_1000ab2c;
              pbVar16 = pbVar5 + 1;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar16 != 0);
          }
          pbVar5 = (byte *)0x0;
LAB_1000ab2c:
          if ((byte *)first != pbVar5) {
            lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x488U));
            if ((lVar15 != 0) && (*first != 0)) {
              pbVar5 = (byte *)first;
              do {
                lVar9 = 0;
                while (bVar1 = pbVar5[lVar9], bVar1 != 0) {
                  bVar10 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar10 = bVar1;
                  }
                  bVar1 = str_1000d1ea[lVar9];
                  bVar11 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar11 = bVar1;
                  }
                  if (bVar10 != bVar11) break;
                  lVar9 = lVar9 + 1;
                  if (lVar15 == lVar9) goto LAB_1000abbc;
                }
                if (lVar15 == lVar9) goto LAB_1000abbc;
                pbVar16 = pbVar5 + 1;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar16 != 0);
            }
            pbVar5 = (byte *)0x0;
LAB_1000abbc:
            if ((byte *)first == pbVar5) {
              pcVar4 = recovered_10002ff0(first,'(');
              if (pcVar4 == (char *)0x0) {
                return 8;
              }
              pbVar5 = (byte *)recovered_1000b790(pcVar4);
              if (pbVar5 == (byte *)0x0) {
                return 8;
              }
              if (last < pbVar5) {
                return 8;
              }
              lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4a0U));
              if (lVar15 == 0) {
                pbVar16 = (byte *)0x0;
              }
              else {
                if (*first != 0) {
                  pbVar16 = (byte *)first;
                  do {
                    lVar9 = 0;
                    while (bVar1 = pbVar16[lVar9], bVar1 != 0) {
                      bVar10 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar10 = bVar1;
                      }
                      bVar1 = str_1000d202[lVar9];
                      bVar11 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar11 = bVar1;
                      }
                      if (bVar10 != bVar11) break;
                      lVar9 = lVar9 + 1;
                      if (lVar15 == lVar9) goto LAB_1000af16;
                    }
                    if (lVar15 == lVar9) goto LAB_1000af16;
                    pbVar14 = pbVar16 + 1;
                    pbVar16 = pbVar16 + 1;
                  } while (*pbVar14 != 0);
                }
                pbVar16 = (byte *)0x0;
              }
LAB_1000af16:
              pbVar14 = pbVar5 + 1;
              local_48 = pbVar5;
              if ((((byte *)first != pbVar16) &&
                  (lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4a0U)), lVar15 != 0)) && (*pbVar14 != 0)) {
                lVar9 = 1;
                pbVar5 = local_48;
LAB_1000af51:
                pbVar5 = pbVar5 + 1;
                lVar13 = 0;
                while (bVar1 = pbVar5[lVar13], bVar1 != 0) {
                  bVar10 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar10 = bVar1;
                  }
                  bVar1 = str_1000d202[lVar13];
                  bVar11 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar11 = bVar1;
                  }
                  if (bVar10 != bVar11) break;
                  lVar13 = lVar13 + 1;
                  if (lVar15 == lVar13) goto LAB_1000b087;
                }
                if (lVar15 != lVar13) goto code_r0x1000afad;
LAB_1000b087:
                if (lVar9 == 1) {
                  local_268[0] = '\0';
                  uVar6 = recovered_10002aa0((long)local_268);
                  uVar3 = local_34;
                  pcVar4 = local_40;
                  cVar8 = *local_68;
                  if (cVar8 != '\0') {
                    pcVar7 = local_60;
                    do {
                      if (uVar6 + 1 < 0x200) {
                        cVar12 = cVar8 + -0x20;
                        if (0x19 < (byte)(cVar8 + 0x9fU)) {
                          cVar12 = cVar8;
                        }
                        local_268[uVar6] = cVar12;
                        local_268[uVar6 + 1] = '\0';
                        uVar6 = uVar6 + 1;
                      }
                      cVar8 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar8 != '\0');
                  }
                  uVar3 = recovered_1000b8c0(pcVar4,uVar3,first,last,local_50,local_268,0);
                  pcVar4 = str_1000d202;
                  goto LAB_1000b203;
                }
              }
LAB_1000b103:
              uVar3 = recovered_1000b8c0(local_40,local_34,first,last,local_50,local_58,0);
              lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4b6U));
              if ((lVar15 != 0) && (*pbVar14 != 0)) {
                lVar9 = 1;
                pbVar5 = local_48;
                do {
                  pbVar5 = pbVar5 + 1;
                  lVar13 = 0;
                  while (bVar1 = pbVar5[lVar13], bVar1 != 0) {
                    bVar10 = bVar1 | 0x20;
                    if (0x19 < (byte)(bVar1 + 0xbf)) {
                      bVar10 = bVar1;
                    }
                    bVar1 = str_1000d218[lVar13];
                    bVar11 = bVar1 | 0x20;
                    if (0x19 < (byte)(bVar1 + 0xbf)) {
                      bVar11 = bVar1;
                    }
                    if (bVar10 != bVar11) break;
                    lVar13 = lVar13 + 1;
                    if (lVar15 == lVar13) goto LAB_1000b1ba;
                  }
                  if (lVar15 == lVar13) {
LAB_1000b1ba:
                    if (lVar9 == 1) {
                      pcVar4 = str_1000d218;
LAB_1000b203:
                      lVar15 = recovered_10002aa0((long)pcVar4);
                      pbVar14 = pbVar14 + lVar15;
                    }
                    break;
                  }
                  lVar13 = lVar9 + 1;
                  lVar9 = lVar9 + 1;
                } while (local_48[lVar13] != 0);
              }
              first = (char *)pbVar14;
              if ((uVar3 & 8) != 0) {
                return uVar3;
              }
              goto LAB_1000ace5;
            }
            lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4bdU));
            if (lVar15 == 0) {
              pbVar5 = (byte *)0x0;
            }
            else {
              if (*first != 0) {
                pbVar5 = (byte *)first;
                do {
                  lVar9 = 0;
                  while (bVar1 = pbVar5[lVar9], bVar1 != 0) {
                    bVar10 = bVar1 | 0x20;
                    if (0x19 < (byte)(bVar1 + 0xbf)) {
                      bVar10 = bVar1;
                    }
                    bVar1 = str_1000d21f[lVar9];
                    bVar11 = bVar1 | 0x20;
                    if (0x19 < (byte)(bVar1 + 0xbf)) {
                      bVar11 = bVar1;
                    }
                    if (bVar10 != bVar11) break;
                    lVar9 = lVar9 + 1;
                    if (lVar15 == lVar9) goto LAB_1000addc;
                  }
                  if (lVar15 == lVar9) goto LAB_1000addc;
                  pbVar16 = pbVar5 + 1;
                  pbVar5 = pbVar5 + 1;
                } while (*pbVar16 != 0);
              }
              pbVar5 = (byte *)0x0;
            }
LAB_1000addc:
            if ((byte *)first == pbVar5) {
LAB_1000b02a:
              uVar3 = recovered_1000b8c0(local_40,local_34,first,last,local_50,local_58,0);
              if ((uVar3 & 8) != 0) {
                return uVar3;
              }
              if (last <= first) goto LAB_1000ace5;
              do {
                if (((ulong)(byte)*first < 0x3c) &&
                   ((0x800180000000000U >> ((ulong)(byte)*first & 0x3f) & 1) != 0))
                goto LAB_1000ace5;
                first = first + 1;
              } while (first < last);
            }
            else {
              lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4d4U));
              if (lVar15 == 0) {
                pbVar5 = (byte *)0x0;
              }
              else {
                if (*first != 0) {
                  pbVar5 = (byte *)first;
                  do {
                    lVar9 = 0;
                    while (bVar1 = pbVar5[lVar9], bVar1 != 0) {
                      bVar10 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar10 = bVar1;
                      }
                      bVar1 = str_1000d236[lVar9];
                      bVar11 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar11 = bVar1;
                      }
                      if (bVar10 != bVar11) break;
                      lVar9 = lVar9 + 1;
                      if (lVar15 == lVar9) goto LAB_1000ae74;
                    }
                    if (lVar15 == lVar9) goto LAB_1000ae74;
                    pbVar16 = pbVar5 + 1;
                    pbVar5 = pbVar5 + 1;
                  } while (*pbVar16 != 0);
                }
                pbVar5 = (byte *)0x0;
              }
LAB_1000ae74:
              if ((byte *)first == pbVar5) goto LAB_1000b02a;
              lVar15 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4dfU));
              if (lVar15 == 0) {
                pbVar5 = (byte *)0x0;
              }
              else {
                if (*first != 0) {
                  pbVar5 = (byte *)first;
                  do {
                    lVar9 = 0;
                    while (bVar1 = pbVar5[lVar9], bVar1 != 0) {
                      bVar10 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar10 = bVar1;
                      }
                      bVar1 = str_1000d241[lVar9];
                      bVar11 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar11 = bVar1;
                      }
                      if (bVar10 != bVar11) break;
                      lVar9 = lVar9 + 1;
                      if (lVar15 == lVar9) goto LAB_1000afcd;
                    }
                    if (lVar15 == lVar9) goto LAB_1000afcd;
                    pbVar16 = pbVar5 + 1;
                    pbVar5 = pbVar5 + 1;
                  } while (*pbVar16 != 0);
                }
                pbVar5 = (byte *)0x0;
              }
LAB_1000afcd:
              if ((byte *)first == pbVar5) goto LAB_1000b02a;
              uVar3 = recovered_1000bfb0(local_40,local_34,first,last,local_50,local_58,0);
              if ((uVar3 & 8) != 0) {
                return 8;
              }
              if (last <= first) goto LAB_1000ace5;
              do {
                if (((ulong)(byte)*first < 0x3c) &&
                   ((0x800180000000000U >> ((ulong)(byte)*first & 0x3f) & 1) != 0))
                goto LAB_1000ace5;
                first = first + 1;
              } while (first < last);
            }
            first = last;
            goto LAB_1000ace5;
          }
        }
        pcVar4 = recovered_10002ff0(first,'(');
        if (pcVar4 == (char *)0x0) {
          return 8;
        }
        pcVar7 = recovered_1000b790(pcVar4);
        if (pcVar7 == (char *)0x0) {
          return 8;
        }
        if (last < pcVar7) {
          return 8;
        }
        uVar3 = recovered_1000b8c0(local_40,local_34,pcVar4 + 1,pcVar7,local_50,local_58,1);
        if ((uVar3 & 8) != 0) {
          return uVar3;
        }
        first = pcVar7 + 1;
LAB_1000ace5:
        output = local_40;
        capacity = local_34;
        if ((byte *)first == (byte *)0x0) {
          return 0x10;
        }
      }
    } while (first < last);
  }
  return 0x10;
code_r0x1000a8fc:
  local_48 = pbVar5 + 2;
  if (last <= local_48) {
    return 8;
  }
  iVar2 = 1;
  first = (char *)local_48;
  do {
    bVar1 = *first;
    if ((bVar1 - 0x22 < 0x3f) && ((0x4000000000000021U >> ((ulong)(bVar1 - 0x22) & 0x3f) & 1) != 0))
    {
      pbVar14 = (byte *)(first + 1);
      do {
        while( true ) {
          first = (char *)pbVar14;
          if (last <= pbVar14) goto joined_r0x1000a9b2;
          bVar10 = *pbVar14;
          first = (char *)(pbVar14 + 1);
          if (last <= first || bVar10 != 0x5c) break;
          pbVar14 = pbVar14 + 2;
        }
        pbVar14 = (byte *)first;
      } while (bVar10 != bVar1);
    }
    else {
      if (bVar1 == 0x7b) {
        iVar2 = iVar2 + 1;
      }
      else if ((bVar1 == 0x7d) && (iVar2 = iVar2 + -1, iVar2 == 0)) break;
      first = first + 1;
    }
joined_r0x1000a9b2:
    if (last <= first) {
      return 8;
    }
  } while( true );
  recovered_1000b240(local_40,local_34,(char *)pbVar16,(char *)pbVar5);
  uVar3 = recovered_1000a790(pcVar4,uVar3,(char *)local_48,first,local_50,local_58);
  if ((uVar3 & 8) != 0) {
    return uVar3;
  }
  goto LAB_1000a883;
code_r0x1000afad:
  lVar13 = lVar9 + 1;
  lVar9 = lVar9 + 1;
  if (local_48[lVar13] == 0) goto LAB_1000b103;
  goto LAB_1000af51;
}

#undef DAT_1000d25c
#undef str_1000d1cd
#undef str_1000d1e0
#undef str_1000d1ea
#undef str_1000d202
#undef str_1000d218
#undef str_1000d21f
#undef str_1000d236
#undef str_1000d241
#undef local_268
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b240
 */

uint recovered_1000b240(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;

  uVar12 = 0;
  if (((((output != (char *)0x0) && (capacity != 0)) && (first <= last)) &&
      ((first != (char *)0x0 && (last != (char *)0x0)))) &&
     (uVar3 = recovered_10002aa0((long)output), first < last)) {
    uVar4 = (ulong)capacity;
    uVar12 = 0;
    do {
      if ((*first == '\\') && (pcVar8 = first + 1, pcVar8 < last)) {
        switch((uintptr_t)(*pcVar8)) {
        case '\"':
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = '\"';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        default:
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          output[uVar3] = *pcVar8;
          output[uVar3 + 1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        case '\'':
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = '\'';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        case '\\':
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = '\\';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        case 'b':
        case 'f':
        case 'v':
          uVar12 = 1;
          break;
        case 'n':
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = '\n';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        case 'r':
switchD_1000b2fd_caseD_72:
          break;
        case 't':
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = ' ';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        case 'u':
          pcVar1 = first + 5;
          if (pcVar1 < last) {
            cVar2 = first[2];
            iVar10 = (int)cVar2;
            if ((byte)(cVar2 - 0x30U) < 10) {
              iVar10 = iVar10 + -0x30;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              iVar10 = iVar10 + -0x57;
            }
            else {
              if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000b5f4;
              iVar10 = iVar10 + -0x37;
            }
            if (-1 < iVar10) {
              cVar2 = first[3];
              iVar6 = (int)cVar2;
              if ((byte)(cVar2 - 0x30U) < 10) {
                iVar6 = iVar6 + -0x30;
              }
              else if ((byte)(cVar2 + 0x9fU) < 6) {
                iVar6 = iVar6 + -0x57;
              }
              else {
                if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000b5f4;
                iVar6 = iVar6 + -0x37;
              }
              if (-1 < iVar6) {
                cVar2 = first[4];
                iVar11 = (int)cVar2;
                if ((byte)(cVar2 - 0x30U) < 10) {
                  uVar12 = iVar11 - 0x30;
                }
                else if ((byte)(cVar2 + 0x9fU) < 6) {
                  uVar12 = iVar11 - 0x57;
                }
                else {
                  if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000b5f4;
                  uVar12 = iVar11 - 0x37;
                }
                if (-1 < (int)uVar12) {
                  cVar2 = *pcVar1;
                  iVar11 = (int)cVar2;
                  if ((byte)(cVar2 - 0x30U) < 10) {
                    uVar7 = iVar11 - 0x30;
                  }
                  else if ((byte)(cVar2 + 0x9fU) < 6) {
                    uVar7 = iVar11 - 0x57;
                  }
                  else {
                    if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000b5f4;
                    uVar7 = iVar11 - 0x37;
                  }
                  if (-1 < (int)uVar7) {
                    pcVar8 = pcVar1;
                    if (uVar4 <= uVar3 + 1) goto LAB_1000b617;
                    uVar7 = uVar7 | (uVar12 | iVar6 << 4 | iVar10 << 8) << 4;
                    if (0x5e < uVar7 - 0x20) {
                      uVar7 = 0x20;
                    }
                    bVar5 = (byte)uVar7;
                    goto LAB_1000b4bd;
                  }
                }
              }
            }
          }
LAB_1000b5f4:
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = 'u';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
          break;
        case 'x':
          pcVar1 = first + 3;
          if (pcVar1 < last) {
            cVar2 = first[2];
            iVar10 = (int)cVar2;
            if ((byte)(cVar2 - 0x30U) < 10) {
              iVar10 = iVar10 + -0x30;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              iVar10 = iVar10 + -0x57;
            }
            else {
              iVar10 = iVar10 + -0x37;
              if (5 < (byte)(cVar2 + 0xbfU)) {
                iVar10 = -1;
              }
            }
            cVar2 = *pcVar1;
            iVar6 = (int)cVar2;
            if ((byte)(cVar2 - 0x30U) < 10) {
              iVar6 = iVar6 + -0x30;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              iVar6 = iVar6 + -0x57;
            }
            else {
              iVar6 = iVar6 + -0x37;
              if (5 < (byte)(cVar2 + 0xbfU)) {
                iVar6 = -1;
              }
            }
            if ((-1 < iVar10) && (-1 < iVar6)) {
              pcVar8 = pcVar1;
              if (uVar3 + 1 < uVar4) {
                bVar5 = (byte)iVar6 | (byte)(iVar10 << 4);
LAB_1000b4bd:
                uVar12 = 1;
                output[uVar3] = bVar5;
                output[uVar3 + 1] = '\0';
                uVar3 = uVar3 + 1;
              }
              else {
LAB_1000b617:
                uVar12 = 1;
              }
              break;
            }
          }
          uVar12 = 1;
          if (uVar4 <= uVar3 + 1) goto switchD_1000b2fd_caseD_72;
          (output + uVar3)[0] = 'x';
          (output + uVar3)[1] = '\0';
          uVar3 = uVar3 + 1;
        }
      }
      else {
        uVar9 = uVar3 + 1;
        uVar12 = 1;
        if (uVar9 < uVar4) {
          output[uVar3] = *first;
          output[uVar3 + 1] = '\0';
        }
        else {
          uVar9 = uVar3;
        }
        pcVar8 = first;
        uVar3 = uVar9;
      }
      first = pcVar8 + 1;
    } while (first < last);
  }
  return uVar12;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b790
 */

char * recovered_1000b790(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
    return (char *)0x0;
  }
  iVar3 = 1;
  do {
    first = first + 1;
LAB_1000b7b0:
    cVar1 = *first;
    switch((uintptr_t)(cVar1)) {
    case '\0':
      return (char *)0x0;
    case '\"':
    case '\'':
      first = first + 1;
LAB_1000b7da:
      do {
        cVar2 = *first;
        if (cVar2 == '\\') {
          if (first[1] != '\0') {
            first = first + 2;
            goto LAB_1000b7da;
          }
        }
        else if (cVar2 == '\0') break;
        first = first + 1;
      } while (cVar2 != cVar1);
      goto LAB_1000b7b0;
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


#undef DAT_1000d25c
#define DAT_1000d25c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#undef str_1000d1ea
#define str_1000d1ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x488U)))
#undef str_1000d21f
#define str_1000d21f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#undef str_1000d236
#define str_1000d236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_1000d241
#define str_1000d241 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
#undef str_1000d254
#define str_1000d254 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f2U)))
#define local_108 (*(byte (*)[96])(frame + 24))
#define local_a8 (*(byte (*)[6])(frame + 120))
#define local_a2 (*(byte (*)[90])(frame + 126))
#define local_48 (*(char * *)(frame + 216))
#define local_40 (*(char * *)(frame + 224))
#define local_34 (*(uint *)(frame + 236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8c0
 */

uint recovered_1000b8c0(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  char cVar15;
  byte *pbVar16;
  ulong uVar17;
  byte bVar18;

  if (last <= first || first == (char *)0x0) {
    return 8;
  }
  pcVar10 = url;
  local_48 = html;
  local_40 = output;
  local_34 = capacity;
  lVar6 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x488U));
  if ((lVar6 != 0) && (*first != '\0')) {
    pcVar7 = first;
    do {
      lVar11 = 0;
      while (bVar2 = pcVar7[lVar11], bVar2 != 0) {
        bVar14 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar14 = bVar2;
        }
        bVar2 = str_1000d1ea[lVar11];
        bVar18 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar18 = bVar2;
        }
        pcVar10 = (char *)(ulong)bVar18;
        if (bVar14 != bVar18) break;
        lVar11 = lVar11 + 1;
        if (lVar6 == lVar11) goto LAB_1000b991;
      }
      if (lVar6 == lVar11) goto LAB_1000b991;
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
  }
  pcVar7 = (char *)0x0;
LAB_1000b991:
  if (pcVar7 != first) {
    lVar6 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4bdU));
    if ((lVar6 != 0) && (*first != '\0')) {
      pcVar7 = first;
      do {
        lVar11 = 0;
        while (bVar2 = pcVar7[lVar11], bVar2 != 0) {
          bVar14 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar14 = bVar2;
          }
          bVar2 = str_1000d21f[lVar11];
          bVar18 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar18 = bVar2;
          }
          pcVar10 = (char *)(ulong)bVar18;
          if (bVar14 != bVar18) break;
          lVar11 = lVar11 + 1;
          if (lVar6 == lVar11) goto LAB_1000ba21;
        }
        if (lVar6 == lVar11) goto LAB_1000ba21;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar7 = (char *)0x0;
LAB_1000ba21:
    if (pcVar7 != first) {
      uVar3 = recovered_1000bfb0(local_40,local_34,first,last,url,local_48,depth);
      if ((uVar3 & 8) == 0) {
        return uVar3;
      }
      lVar6 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4d4U));
      if ((lVar6 != 0) && (*first != '\0')) {
        pcVar10 = first;
        do {
          lVar11 = 0;
          while (bVar2 = pcVar10[lVar11], bVar2 != 0) {
            bVar14 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar14 = bVar2;
            }
            bVar2 = str_1000d236[lVar11];
            bVar18 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar18 = bVar2;
            }
            if (bVar14 != bVar18) break;
            lVar11 = lVar11 + 1;
            if (lVar6 == lVar11) goto LAB_1000badb;
          }
          if (lVar6 == lVar11) goto LAB_1000badb;
          pcVar7 = pcVar10 + 1;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar7 != '\0');
      }
      pcVar10 = (char *)0x0;
LAB_1000badb:
      if (pcVar10 != first) {
        lVar6 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4dfU));
        if ((lVar6 != 0) && (*first != '\0')) {
          pcVar10 = first;
          do {
            lVar11 = 0;
            while (bVar2 = pcVar10[lVar11], bVar2 != 0) {
              bVar14 = bVar2 | 0x20;
              if (0x19 < (byte)(bVar2 + 0xbf)) {
                bVar14 = bVar2;
              }
              bVar2 = str_1000d241[lVar11];
              bVar18 = bVar2 | 0x20;
              if (0x19 < (byte)(bVar2 + 0xbf)) {
                bVar18 = bVar2;
              }
              if (bVar14 != bVar18) break;
              lVar11 = lVar11 + 1;
              if (lVar6 == lVar11) goto LAB_1000bb6b;
            }
            if (lVar6 == lVar11) goto LAB_1000bb6b;
            pcVar7 = pcVar10 + 1;
            pcVar10 = pcVar10 + 1;
          } while (*pcVar7 != '\0');
        }
        pcVar10 = (char *)0x0;
LAB_1000bb6b:
        if (pcVar10 != first) {
          return 8;
        }
      }
      uVar3 = local_34;
      pcVar10 = &DAT_1000d25c;
      if (local_48 != (char *)0x0) {
        pcVar10 = local_48;
      }
      if (depth == 0) {
        if (local_40 == (char *)0x0) {
          return 0x10;
        }
        uVar8 = recovered_10002aa0((long)local_40);
        cVar15 = *pcVar10;
        if (cVar15 == '\0') {
          return 0x10;
        }
        do {
          pcVar10 = pcVar10 + 1;
          if ((uVar3 != 0) && (uVar8 + 1 < (ulong)uVar3)) {
            local_40[uVar8] = cVar15;
            local_40[uVar8 + 1] = '\0';
            uVar8 = uVar8 + 1;
          }
          cVar15 = *pcVar10;
        } while (cVar15 != '\0');
        return 0x10;
      }
      goto LAB_1000bb96;
    }
  }
  pcVar7 = recovered_10002ff0(first,'(');
  if ((last <= pcVar7 || pcVar7 == (char *)0x0) || last <= pcVar7 + 1) {
    return 8;
  }
  pbVar9 = (byte *)0x0;
  while( true ) {
    uVar8 = (ulong)(byte)pcVar7[(long)(pbVar9 + 1)];
    if (0x27 < uVar8) {
      return 8;
    }
    if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
    pbVar12 = pbVar9 + 2;
    pbVar9 = pbVar9 + 1;
    if (pcVar7 + (long)pbVar12 == last) {
      return 8;
    }
  }
  if ((0x8400000000U >> (uVar8 & 0x3f) & 1) == 0) {
    return 8;
  }
  pbVar16 = (byte *)(pcVar7 + (long)(pbVar9 + 2));
  pbVar12 = pbVar16;
  if (pbVar16 < last) {
    do {
      if (*pbVar12 == pcVar7[(long)(pbVar9 + 1)]) goto LAB_1000bc60;
      pbVar12 = pbVar12 + 1;
    } while (pbVar12 < last);
    pbVar12 = (byte *)last;
  }
LAB_1000bc60:
  if (pbVar12 + (-2 - (long)pcVar7) == pbVar9) {
    pbVar12 = (byte *)0x0;
  }
  else if (*pbVar16 == 0x23) {
    pbVar16 = (byte *)(pcVar7 + (long)(pbVar9 + 3));
    pbVar12 = pbVar12 + (-(long)pbVar9 - (long)pcVar7) + -3;
  }
  else {
    pbVar12 = pbVar12 + (-(long)pbVar9 - (long)pcVar7) + -2;
  }
  pbVar13 = (byte *)0x5f;
  if (pbVar12 < (byte *)0x5f) {
    pbVar13 = pbVar12;
  }
  recovered_10001030((undefined8 *)local_a8,(undefined8 *)pbVar16,(ulong)pbVar13,pbVar9,
                     (undefined8 *)pcVar10);
  local_a8[(long)pbVar13] = 0;
  if (url == (char *)0x0) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  pbVar9 = local_a8;
  iVar4 = recovered_10002ad0(pbVar9,(byte *)url);
  if (iVar4 != 0) {
    lVar6 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4f2U));
    if (lVar6 == 0) {
      return 8;
    }
    if (local_a8[0] == 0) {
      return 8;
    }
    pbVar12 = local_a2;
    do {
      lVar11 = 0;
      while (bVar2 = pbVar9[lVar11], bVar2 != 0) {
        bVar14 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar14 = bVar2;
        }
        bVar2 = str_1000d254[lVar11];
        bVar18 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar18 = bVar2;
        }
        if (bVar14 != bVar18) break;
        lVar11 = lVar11 + 1;
        if (lVar6 == lVar11) goto LAB_1000bde0;
      }
      if (lVar6 == lVar11) goto LAB_1000bde0;
      pbVar12 = pbVar12 + 1;
      pbVar16 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      if (*pbVar16 == 0) {
        return 8;
      }
    } while( true );
  }
  goto LAB_1000be7c;
LAB_1000bde0:
  do {
    bVar2 = pbVar12[-1];
    uVar3 = (uint)bVar2;
    switch((uintptr_t)(bVar2)) {
    case 9:
    case 0x20:
      pbVar12 = pbVar12 + 1;
      break;
    default:
      goto switchD_1000bdf6_caseD_a;
    case 0x22:
    case 0x27:
      bVar2 = *pbVar12;
      goto LAB_1000be07;
    }
  } while( true );
switchD_1000bdf6_caseD_a:
  pbVar12 = pbVar12 + -1;
  uVar3 = 0;
LAB_1000be07:
  uVar5 = (uint)bVar2;
  if (uVar3 == (int)(char)bVar2 || bVar2 == 0) {
    uVar17 = 0;
  }
  else {
    uVar8 = 0;
    while ((uVar3 != 0 ||
           ((((byte)uVar5 != 9 && ((uVar5 & 0xff) != 0x20)) && ((uVar5 & 0xff) != 0x5d))))) {
      uVar17 = uVar8 + 1;
      local_108[uVar8] = (byte)uVar5;
      uVar5 = (uint)(char)pbVar12[uVar8 + 1];
      if (((uVar5 == 0) || (0x5e < uVar17)) || (uVar8 = uVar17, uVar3 == uVar5)) goto LAB_1000be5d;
    }
    uVar17 = uVar8;
  }
LAB_1000be5d:
  local_108[uVar17] = 0;
  iVar4 = recovered_10002ad0(local_108,(byte *)url);
  if (iVar4 != 0) {
    return 8;
  }
LAB_1000be7c:
  pcVar10 = &DAT_1000d25c;
  if (local_48 != (char *)0x0) {
    pcVar10 = local_48;
  }
  if (depth == 0) {
    recovered_1000c3f0(local_40,local_34,pcVar10);
    return 0x10;
  }
LAB_1000bb96:
  recovered_1000c280(local_40,local_34,pcVar10);
  return 0x10;
}

#undef DAT_1000d25c
#undef str_1000d1ea
#undef str_1000d21f
#undef str_1000d236
#undef str_1000d241
#undef str_1000d254
#undef local_108
#undef local_a8
#undef local_a2
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf30
 */

uint recovered_1000bf30(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint in_EAX = 0;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  undefined4 in_register_00000034 = 0;

  pcVar4 = (char *)CONCAT44(in_register_00000034,capacity);
  if (pcVar4 != (char *)0x0) {
    if (output == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = recovered_10002aa0((long)output);
    }
    cVar1 = *pcVar4;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = cVar1;
      }
      if ((output != (char *)0x0) && (uVar2 + 1 < 0x200)) {
        output[uVar2] = cVar3;
        output[uVar2 + 1] = '\0';
        uVar2 = uVar2 + 1;
      }
      cVar1 = *pcVar4;
    }
    in_EAX = (uint)uVar2;
  }
  return in_EAX;
}


#undef DAT_1000d25c
#define DAT_1000d25c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#undef str_1000d218
#define str_1000d218 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b6U)))
#undef str_1000d280
#define str_1000d280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51eU)))
#define local_298 (*(char (*)[512])(frame + 24))
#define local_98 (*(byte (*)[104])(frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfb0
 */

uint recovered_1000bfb0(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  char *extraout_RDX = 0;
  char *text;
  char *text_00;
  char *text_01;
  long lVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;

  if (last == (char *)0x0 || first == (char *)0x0) {
    return 8;
  }
  if (url == (char *)0x0 || last <= first) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  bVar2 = *first;
  if (((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (bVar2 != 0x5f)) && (bVar2 != 0x24)) {
    return 8;
  }
  uVar4 = 0;
  do {
    bVar2 = *first;
    if (((9 < (byte)(bVar2 - 0x30U)) && (0x19 < (byte)((bVar2 & 0xdf) + 0xbf))) &&
       ((bVar2 != 0x5f && (bVar2 != 0x24)))) {
      last = first;
      break;
    }
    if (uVar4 + 1 < 0x60) {
      local_98[uVar4] = bVar2;
      uVar4 = uVar4 + 1;
    }
    first = first + 1;
  } while (first != last);
  local_98[uVar4] = 0;
  iVar3 = recovered_10002ad0(local_98,(byte *)url);
  if (iVar3 != 0) {
    return 8;
  }
  lVar5 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4b6U));
  if (lVar5 == 0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    if (*last != 0) {
      pbVar11 = (byte *)last;
      do {
        lVar8 = 0;
        while (bVar2 = pbVar11[lVar8], bVar2 != 0) {
          bVar9 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar9 = bVar2;
          }
          bVar2 = str_1000d218[lVar8];
          bVar10 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar10 = bVar2;
          }
          if (bVar9 != bVar10) break;
          lVar8 = lVar8 + 1;
          if (lVar5 == lVar8) goto LAB_1000c157;
        }
        if (lVar5 == lVar8) goto LAB_1000c157;
        pbVar7 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
      } while (*pbVar7 != 0);
    }
    pbVar11 = (byte *)0x0;
  }
LAB_1000c157:
  if (pbVar11 != (byte *)last) {
    return 8;
  }
  lVar5 = recovered_10002aa0(((uintptr_t)pf_module_state + 0x4b6U));
  pbVar11 = (byte *)(last + lVar5);
  text_01 = &DAT_1000d25c;
  if (html != (char *)0x0) {
    text_01 = html;
  }
  pcVar6 = (char *)recovered_10002aa0(((uintptr_t)pf_module_state + 0x50fU));
  text = extraout_RDX;
  if ((pcVar6 != (char *)0x0) && (*pbVar11 != 0)) {
    pbVar7 = pbVar11;
    do {
      text = (char *)0x0;
      while (bVar2 = pbVar7[(long)text], bVar2 != 0) {
        bVar9 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar9 = bVar2;
        }
        bVar2 = text[((uintptr_t)pf_module_state + 0x50fU)];
        bVar10 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar10 = bVar2;
        }
        if (bVar9 != bVar10) break;
        text = text + 1;
        if (pcVar6 == text) goto LAB_1000c1fd;
      }
      if (pcVar6 == text) goto LAB_1000c1fd;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
    } while (*pbVar1 != 0);
  }
  pbVar7 = (byte *)0x0;
LAB_1000c1fd:
  if (pbVar7 == pbVar11) {
    local_298[0] = '\0';
    recovered_1000bf30(local_298,(uint)text_01,text);
  }
  else {
    pbVar7 = (byte *)recovered_1000a6e0((char *)pbVar11,str_1000d280);
    if (pbVar7 != pbVar11) goto LAB_1000c24d;
    local_298[0] = '\0';
    recovered_1000c470(local_298,(uint)text_01,text_00);
  }
  text_01 = local_298;
LAB_1000c24d:
  if (depth == 0) {
    recovered_1000c3f0(output,capacity,text_01);
  }
  else {
    recovered_1000c280(output,capacity,text_01);
  }
  return 0x10;
}

#undef DAT_1000d25c
#undef str_1000d218
#undef str_1000d280
#undef local_298
#undef local_98

#undef str_1000d260
#define str_1000d260 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c280
 */

uint recovered_1000c280(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;

  if (text != (char *)0x0) {
    if (output == (char *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = recovered_10002aa0((long)output);
    }
    bVar5 = *text;
    if (bVar5 != 0) {
      uVar4 = (ulong)capacity;
      do {
        if (((byte)(bVar5 - 0x30U) < 10) || ((byte)((bVar5 & 0xdf) + 0xbf) < 0x1a)) {
LAB_1000c36b:
          uVar2 = uVar1;
          uVar3 = uVar1 + 1;
          if ((capacity != 0 && output != (char *)0x0) && uVar1 + 1 < uVar4) {
LAB_1000c2e0:
            uVar1 = uVar3;
            output[uVar2] = bVar5;
            output[uVar1] = '\0';
          }
        }
        else {
          if (bVar5 < 0x5f) {
            if (1 < bVar5 - 0x2d) {
              if (bVar5 != 0x20) goto LAB_1000c379;
              bVar5 = 0x2b;
            }
            goto LAB_1000c36b;
          }
          if ((bVar5 == 0x7e) || (bVar5 == 0x5f)) goto LAB_1000c36b;
LAB_1000c379:
          if (capacity != 0 && output != (char *)0x0) {
            uVar2 = uVar1 + 1;
            if (uVar2 < uVar4) {
              (output + uVar1)[0] = '%';
              (output + uVar1)[1] = '\0';
              uVar3 = uVar1 + 2;
              uVar1 = uVar2;
              uVar2 = uVar3;
            }
            uVar3 = uVar2;
            if (uVar2 < uVar4) {
              output[uVar1] = str_1000d260[(byte)*text >> 4];
              output[uVar2] = '\0';
              uVar3 = uVar2 + 1;
              uVar1 = uVar2;
            }
            if (uVar4 <= uVar3) goto LAB_1000c2ec;
            bVar5 = str_1000d260[(byte)*text & 0xf];
            uVar2 = uVar1;
            goto LAB_1000c2e0;
          }
        }
LAB_1000c2ec:
        bVar5 = text[1];
        text = text + 1;
      } while (bVar5 != 0);
    }
    in_EAX = (uint)uVar1;
  }
  return in_EAX;
}

#undef str_1000d260

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c3f0
 */

uint recovered_1000c3f0(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 in_RAX;
  ulong uVar2;
  char cVar3;

  uVar1 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),output == (char *)0x0);
  if (text != (char *)0x0 && output != (char *)0x0) {
    uVar2 = recovered_10002aa0((long)output);
    cVar3 = *text;
    if (cVar3 != '\0') {
      do {
        text = text + 1;
        if ((capacity != 0) && (uVar2 + 1 < (ulong)capacity)) {
          output[uVar2] = cVar3;
          output[uVar2 + 1] = '\0';
          uVar2 = uVar2 + 1;
        }
        cVar3 = *text;
      } while (cVar3 != '\0');
    }
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c470
 */

uint recovered_1000c470(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint in_EAX = 0;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 in_register_00000034 = 0;

  pbVar4 = (byte *)CONCAT44(in_register_00000034,capacity);
  if (pbVar4 != (byte *)0x0) {
    if (output == (char *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = recovered_10002aa0((long)output);
    }
    bVar1 = *pbVar4;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      if ((output != (char *)0x0) && (uVar2 + 1 < 0x200)) {
        output[uVar2] = bVar3;
        output[uVar2 + 1] = '\0';
        uVar2 = uVar2 + 1;
      }
      bVar1 = *pbVar4;
    }
    in_EAX = (uint)uVar2;
  }
  return in_EAX;
}


#define local_40 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4f0
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000c4f0(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;

  if ((((first == (char *)0x0) || (last <= first)) || (output == (char *)0x0)) || (capacity == 0)) {
    return 0;
  }
  uVar3 = 0;
LAB_1000c544:
  pbVar7 = (byte *)first;
  while( true ) {
    bVar1 = *pbVar7;
    uVar6 = (ulong)bVar1;
    if (0x2b < uVar6) break;
    if ((0x80100002600U >> (uVar6 & 0x3f) & 1) == 0) {
      if ((0x8400000000U >> (uVar6 & 0x3f) & 1) != 0) {
        pbVar7 = pbVar7 + 1;
        pbVar10 = pbVar7;
        if (pbVar7 < last) goto LAB_1000c5c3;
        goto LAB_1000c79c;
      }
      break;
    }
    pbVar7 = pbVar7 + 1;
    first = first + 1;
    if (last <= pbVar7) {
      return uVar3;
    }
  }
  if (bVar1 == 0x60) {
    pbVar7 = pbVar7 + 1;
    if (pbVar7 < last) {
LAB_1000c615:
      pbVar10 = pbVar7;
      do {
        bVar1 = *pbVar10;
        pbVar9 = pbVar10 + 1;
        if (pbVar9 < last && bVar1 == 0x5c) {
          pbVar9 = pbVar10 + 2;
        }
        else if (bVar1 == 0x24) {
          if ((pbVar9 < last) && (*pbVar9 == 0x7b)) goto code_r0x1000c67b;
        }
        else if (bVar1 == 0x60) {
          local_40 = 1;
          goto LAB_1000c896;
        }
        pbVar10 = pbVar9;
        if (last <= pbVar9) {
          goto LAB_1000c88e;
        }
      } while( true );
    }
    pbVar9 = pbVar7;
LAB_1000c88e:
    local_40 = 0;
    pbVar10 = pbVar9;
LAB_1000c896:
    uVar3 = recovered_1000b240(output,capacity,(char *)pbVar7,(char *)pbVar10);
    if ((uVar3 == 0) && (pbVar7 != pbVar10)) {
      return 0;
    }
    goto LAB_1000c7bd;
  }
  pbVar10 = pbVar7;
  if (pbVar7 < last) {
    do {
      if ((byte)(*pbVar10 - 0x2b) < 2) goto LAB_1000c817;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < last);
    pbVar10 = (byte *)last;
  }
LAB_1000c817:
  if (pbVar7 < pbVar10) {
    pbVar9 = pbVar7 + ((long)pbVar10 - (long)first);
    do {
      if ((0x20 < (ulong)*pbVar7) || ((0x100002600U >> ((ulong)*pbVar7 & 0x3f) & 1) == 0))
      goto LAB_1000c84b;
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != pbVar10);
    pbVar7 = pbVar9;
  }
LAB_1000c84b:
  if (pbVar10 <= pbVar7) {
    return 0;
  }
  pbVar9 = (byte *)0x0;
  while (((ulong)pbVar10[(long)(pbVar9 + -1)] < 0x21 &&
         ((0x100002600U >> ((ulong)pbVar10[(long)(pbVar9 + -1)] & 0x3f) & 1) != 0))) {
    pbVar5 = pbVar9 + -1;
    pbVar9 = pbVar9 + -1;
    if (pbVar10 + (long)pbVar5 <= pbVar7) {
      return 0;
    }
  }
  if ((pbVar7 + (4 - (long)pbVar10) != pbVar9) ||
     (iVar4 = recovered_10006df0((long)pbVar7,((uintptr_t)pf_module_state + 0x53eU),4), iVar4 != 0)) {
    pbVar9 = pbVar10 + (long)pbVar9;
    pbVar5 = pbVar7;
    if (pbVar7 < pbVar9) {
      do {
        bVar1 = *pbVar5;
        if (((((byte)((bVar1 & 0xdf) + 0xa5) < 0xe6) && (bVar1 != 0x2b)) &&
            ((byte)(bVar1 - 0x3a) < 0xf6)) && ((byte)(bVar1 - 0x2f) < 0xfe)) {
          return 0;
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 < pbVar9);
      uVar6 = recovered_10002aa0((long)output);
      do {
        if (uVar6 + 1 < (ulong)capacity) {
          output[uVar6] = *pbVar7;
          output[uVar6 + 1] = '\0';
          uVar6 = uVar6 + 1;
        }
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 < pbVar9);
    }
    else {
      recovered_10002aa0((long)output);
    }
  }
  goto LAB_1000c7d9;
LAB_1000c5c3:
  do {
    if (pbVar10 + 1 < last && *pbVar10 == 0x5c) {
      pbVar9 = pbVar10 + 2;
    }
    else {
      pbVar9 = pbVar10 + 1;
      if (*pbVar10 == bVar1) {
        local_40 = 1;
        goto LAB_1000c7a4;
      }
    }
    pbVar10 = pbVar9;
  } while (pbVar10 < last);
LAB_1000c79c:
  local_40 = 0;
LAB_1000c7a4:
  uVar3 = recovered_1000b240(output,capacity,(char *)pbVar7,(char *)pbVar10);
  if (uVar3 == 0) {
    return 0;
  }
LAB_1000c7bd:
  pbVar10 = pbVar10 + local_40;
LAB_1000c7d9:
  uVar3 = 1;
  first = (char *)pbVar10;
  if (last <= pbVar10) {
    return 1;
  }
  goto LAB_1000c544;
code_r0x1000c67b:
  pbVar9 = pbVar10 + 2;
  if (last <= pbVar9) {
    return 0;
  }
  PF_PART4(local_40, 0) = 1;
  pbVar5 = pbVar9;
  do {
    bVar1 = *pbVar5;
    if ((bVar1 - 0x22 < 0x3f) && ((0x4000000000000021U >> ((ulong)(bVar1 - 0x22) & 0x3f) & 1) != 0))
    {
      pbVar8 = pbVar5 + 1;
      do {
        while( true ) {
          pbVar5 = pbVar8;
          if (last <= pbVar8) goto joined_r0x1000c731;
          bVar2 = *pbVar8;
          pbVar5 = pbVar8 + 1;
          if (last <= pbVar5 || bVar2 != 0x5c) break;
          pbVar8 = pbVar8 + 2;
        }
        pbVar8 = pbVar5;
      } while (bVar2 != bVar1);
    }
    else {
      if (bVar1 == 0x7b) {
        PF_PART4(local_40, 0) = (int)local_40 + 1;
      }
      else if ((bVar1 == 0x7d) && (PF_PART4(local_40, 0) = (int)local_40 + -1, (int)local_40 == 0)) break;
      pbVar5 = pbVar5 + 1;
    }
joined_r0x1000c731:
    if (last <= pbVar5) {
      return 0;
    }
  } while( true );
  recovered_1000b240(output,capacity,(char *)pbVar7,(char *)pbVar10);
  uVar3 = recovered_1000c4f0(output,capacity,(char *)pbVar9,(char *)pbVar5);
  if (uVar3 == 0) {
    return 0;
  }
  pbVar7 = pbVar5 + 1;
  local_40 = 0;
  pbVar10 = pbVar7;
  if (last <= pbVar7) goto LAB_1000c896;
  goto LAB_1000c615;
}

#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9e0
 */

char * recovered_1000c9e0(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = 0;
  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar4 = 0;
  iVar5 = 0;
LAB_1000ca00:
  do {
    bVar1 = *first;
    if (0x26 < bVar1) {
      if ((bVar1 == 0x27) || (bVar1 == 0x60)) {
LAB_1000ca25:
        first = first + 1;
LAB_1000ca3a:
        do {
          bVar2 = *first;
          if (bVar2 == 0x5c) {
            if (first[1] != 0) {
              first = first + 2;
              goto LAB_1000ca3a;
            }
          }
          else if (bVar2 == 0) break;
          first = first + 1;
        } while (bVar2 != bVar1);
      }
      else {
        if (bVar1 != 0x28) goto LAB_1000ca5b;
        iVar3 = iVar3 + 1;
        first = first + 1;
      }
      goto LAB_1000ca00;
    }
    if (bVar1 == 0x22) goto LAB_1000ca25;
    if (bVar1 == 0) {
      return first;
    }
LAB_1000ca5b:
    if (iVar3 < 1 || bVar1 != 0x29) {
      if (bVar1 == 0x5b) {
        iVar4 = iVar4 + 1;
        first = first + 1;
      }
      else if (iVar4 < 1 || bVar1 != 0x5d) {
        if (bVar1 == 0x7b) {
          iVar5 = iVar5 + 1;
          first = first + 1;
        }
        else if (iVar5 < 1 || bVar1 != 0x7d) {
          if ((bVar1 == 10) || (bVar1 == 0x3b)) {
            if (iVar3 == 0) goto LAB_1000caed;
          }
          else if (bVar1 == 0xd && iVar3 == 0) {
LAB_1000caed:
            iVar3 = 0;
            if (iVar4 == 0 && iVar5 == 0) {
              return first;
            }
          }
          first = first + 1;
        }
        else {
          iVar5 = iVar5 + -1;
          first = first + 1;
        }
      }
      else {
        iVar4 = iVar4 + -1;
        first = first + 1;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      first = first + 1;
    }
  } while( true );
}


#define local_438 (*(byte (*)[1032])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb10
 */

uint recovered_1000cb10(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[1136] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *output_00;

  uVar2 = (ulong)capacity;
  local_438[0] = 0;
  output_00 = local_438;
  uVar3 = recovered_1000c4f0((char *)output_00,0x400,first,last);
  uVar4 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (output == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = recovered_10002aa0((long)output);
    }
LAB_1000cb8b:
    while (bVar1 = *output_00, 0x3b < bVar1) {
      if (bVar1 == 0x3c) {
        if (output != (char *)0x0) {
          uVar4 = recovered_10002aa0((long)output);
          if (capacity != 0) {
            if (uVar4 + 1 < uVar2) {
              (output + uVar4)[0] = '&';
              (output + uVar4)[1] = '\0';
              uVar4 = uVar4 + 1;
            }
            uVar5 = uVar4 + 1;
            if (uVar5 < uVar2) {
              (output + uVar4)[0] = 'l';
              (output + uVar4)[1] = '\0';
            }
            else {
LAB_1000cd1f:
              uVar5 = uVar4;
            }
LAB_1000cd22:
            if (uVar5 + 1 < uVar2) {
              (output + uVar5)[0] = 't';
              (output + uVar5)[1] = '\0';
              uVar5 = uVar5 + 1;
            }
            if (uVar5 + 1 < uVar2) {
              (output + uVar5)[0] = ';';
              (output + uVar5)[1] = '\0';
            }
          }
          goto LAB_1000cb80;
        }
        uVar4 = 0;
        output_00 = output_00 + 1;
      }
      else {
        if (bVar1 != 0x3e) goto LAB_1000cc51;
        if (output != (char *)0x0) {
          uVar4 = recovered_10002aa0((long)output);
          if (capacity != 0) {
            if (uVar4 + 1 < uVar2) {
              (output + uVar4)[0] = '&';
              (output + uVar4)[1] = '\0';
              uVar4 = uVar4 + 1;
            }
            uVar5 = uVar4 + 1;
            if (uVar2 <= uVar5) goto LAB_1000cd1f;
            (output + uVar4)[0] = 'g';
            (output + uVar4)[1] = '\0';
            goto LAB_1000cd22;
          }
LAB_1000cb80:
          uVar4 = recovered_10002aa0((long)output);
          goto LAB_1000cb88;
        }
        output_00 = output_00 + 1;
        uVar4 = 0;
      }
    }
    if (bVar1 == 0x26) {
      if (output != (char *)0x0) {
        uVar4 = recovered_10002aa0((long)output);
        if (capacity != 0) {
          if (uVar4 + 1 < uVar2) {
            (output + uVar4)[0] = '&';
            (output + uVar4)[1] = '\0';
            uVar4 = uVar4 + 1;
          }
          if (uVar4 + 1 < uVar2) {
            (output + uVar4)[0] = 'a';
            (output + uVar4)[1] = '\0';
            uVar4 = uVar4 + 1;
          }
          if (uVar4 + 1 < uVar2) {
            (output + uVar4)[0] = 'm';
            (output + uVar4)[1] = '\0';
            uVar4 = uVar4 + 1;
          }
          if (uVar4 + 1 < uVar2) {
            (output + uVar4)[0] = 'p';
            (output + uVar4)[1] = '\0';
            uVar4 = uVar4 + 1;
          }
          if (uVar4 + 1 < uVar2) {
            (output + uVar4)[0] = ';';
            (output + uVar4)[1] = '\0';
          }
        }
        goto LAB_1000cb80;
      }
      uVar4 = 0;
      output_00 = output_00 + 1;
      goto LAB_1000cb8b;
    }
    if (bVar1 != 0) {
LAB_1000cc51:
      if ((capacity == 0 || output == (char *)0x0) || (uVar2 <= uVar4 + 1)) {
LAB_1000cb88:
        output_00 = output_00 + 1;
      }
      else {
        output[uVar4] = bVar1;
        output[uVar4 + 1] = '\0';
        output_00 = output_00 + 1;
        uVar4 = uVar4 + 1;
      }
      goto LAB_1000cb8b;
    }
  }
  return (uint)uVar4;
}

#undef local_438
