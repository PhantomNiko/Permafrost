/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f100
#define DAT_1000f100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2451U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000650
 */

void recovered_10000650(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f100 = 0;
  recovered_10000670();
  return;
}

#undef DAT_1000f100

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
#undef DAT_1000f100
#define DAT_1000f100 (*(char *)(((uintptr_t)pf_module_state + 0x2451U)))
#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2459U)))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2461U)))
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
 * Address: 0x10000670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000670(void)

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
  if (DAT_1000f100 != '\0') {
    return;
  }
  DAT_1000f108 = 0;
  DAT_1000f110 = 0;
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
                if (*puVar2 <= uVar7) goto LAB_10000703;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar8 = 0;
LAB_10000703:
            local_438[uVar8 * 2 + 2] = uVar7;
            local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
            uVar9 = uVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
LAB_1000084e:
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
        if (lVar12 == 0) goto LAB_10000916;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x100008ff;
        recovered_10005820(puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (DAT_1000f108 != 0) goto LAB_10000a55;
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
              if (*puVar2 <= uVar7) goto LAB_100007c5;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar8 = 0;
LAB_100007c5:
          local_438[uVar8 * 2 + 2] = uVar7;
          local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
          uVar9 = uVar9 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    goto LAB_1000084e;
  }
LAB_10000916:
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
      if (DAT_1000f108 == 0) {
        puVar4 = &DAT_1000f108;
      }
      *puVar4 = 0x300000;
      if (DAT_1000f110 == 0) {
        DAT_1000f100 = 1;
        DAT_1000f110 = 0x300000;
        return;
      }
      DAT_1000f100 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_1000f108 == 0) {
      puVar4 = &DAT_1000f108;
    }
    *puVar4 = 0x300000;
    if (DAT_1000f110 == 0) {
      DAT_1000f110 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_1000f108 == 0) {
        puVar4 = &DAT_1000f108;
      }
      *puVar4 = 0x2000000;
      if (DAT_1000f110 == 0) {
        DAT_1000f100 = 1;
        DAT_1000f110 = 0x2000000;
        return;
      }
      DAT_1000f100 = 1;
      return;
    }
  }
LAB_10000a55:
  if (DAT_1000f110 == 0) {
    DAT_1000f110 = DAT_1000f108;
    DAT_1000f100 = 1;
    return;
  }
  DAT_1000f100 = 1;
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
#undef DAT_1000f100
#undef DAT_1000f108
#undef DAT_1000f110
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

#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2459U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae0
 */

ulong recovered_10000ae0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000670();
  uVar3 = 0;
  for (plVar1 = DAT_1000f108; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_1000f108

#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2459U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b30
 */

long recovered_10000b30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000670();
  lVar1 = 0;
  for (plVar2 = DAT_1000f108; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1000f108

#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2459U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b70
 */

ulong recovered_10000b70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000670();
  uVar3 = 0;
  for (plVar1 = DAT_1000f108; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000f108

#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2459U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb0
 */

long recovered_10000bb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_10000670();
  lVar2 = 0;
  for (plVar1 = DAT_1000f108; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1000f108

#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2459U)))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2461U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be0
 */

ulong * recovered_10000be0(long param_1)

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
  recovered_10000670();
  puVar3 = DAT_1000f110;
  if (DAT_1000f110 == (ulong *)0x0) {
    puVar3 = DAT_1000f108;
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
        DAT_1000f110 = DAT_1000f108;
        if (puVar3 != (ulong *)0x0) {
          DAT_1000f110 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_1000f108;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000f108
#undef DAT_1000f110

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cc0
 */

ulong recovered_10000cc0(ulong param_1,uint param_2)

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
 * Address: 0x10000d00
 */

ulong recovered_10000d00(ulong param_1,uint param_2)

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
 * Address: 0x10000d40
 */

long recovered_10000d40(long param_1,uint param_2)

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
 * Address: 0x10000d90
 */

ulong recovered_10000d90(ulong param_1,ulong param_2)

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
 * Address: 0x10000e30
 */

long recovered_10000e30(ulong param_1,ulong param_2)

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
 * Address: 0x10000ea0
 */

ulong recovered_10000ea0(ulong param_1,ulong param_2)

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
 * Address: 0x10000f70
 */

long recovered_10000f70(ulong param_1,ulong param_2)

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
 * Address: 0x10001000
 */

void recovered_10001000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

int recovered_10001020(int param_1)

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
void * recovered_10001030(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001080(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100010d0(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001120
 */

void recovered_10001120(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_1000113f:
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_1000132e:
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
                    goto LAB_1000132e;
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
        if (uVar5 == uVar8) goto LAB_1000113f;
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
    goto LAB_1000113f;
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
        goto LAB_10001350;
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
LAB_10001350:
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
 * Address: 0x10001560
 */

void recovered_10001560(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_100018fa:
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
                      goto LAB_100018fa;
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
          if (uVar9 == uVar10) goto LAB_10001b58;
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
LAB_10001b58:
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
          goto LAB_1000191c;
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
LAB_1000191c:
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
LAB_100016ee:
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
                    goto LAB_100016ee;
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
        if (uVar9 == uVar10) goto LAB_10001cba;
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
LAB_10001cba:
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
        goto LAB_10001d7f;
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
LAB_10001d7f:
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
 * Address: 0x10001e20
 */

void recovered_10001e20(byte *param_1,byte param_2,ulong param_3)

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
LAB_10001f6d:
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
                    goto LAB_10001f6d;
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
        if (uVar4 == uVar7) goto LAB_100020a1;
      }
      do {
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 8;
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_100020a1:
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 4) {
LAB_100020b0:
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
        goto LAB_100020b0;
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
 * Address: 0x10002170
 */

void recovered_10002170(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10002395;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002395:
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
        goto LAB_10002416;
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
LAB_10002416:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002440
 */

void recovered_10002440(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10002665;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002665:
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
        goto LAB_100026e6;
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
LAB_100026e6:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002710
 */

int recovered_10002710(ulong *param_1,ulong *param_2,ulong param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10002943;
    uVar11 = param_3;
    puVar8 = param_2;
    puVar10 = param_1;
    if (((ulong)param_1 & 7) != 0) {
      bVar1 = (byte)*param_1;
      bVar5 = (byte)*param_2;
      if (bVar1 != bVar5) {
LAB_100028a3:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_100029f8:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)param_1 + 1);
      puVar8 = (ulong *)((long)param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_100028a3;
        puVar10 = (ulong *)((long)param_1 + 2);
        puVar8 = (ulong *)((long)param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_100028a3;
          puVar10 = (ulong *)((long)param_1 + 3);
          puVar8 = (ulong *)((long)param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_100028a3;
            puVar10 = (ulong *)((long)param_1 + 4);
            puVar8 = (ulong *)((long)param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_100028a3;
              puVar10 = (ulong *)((long)param_1 + 5);
              puVar8 = (ulong *)((long)param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_100028a3;
                puVar10 = (ulong *)((long)param_1 + 6);
                puVar8 = (ulong *)((long)param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_100028a3;
                  puVar10 = (ulong *)((long)param_1 + 7);
                  puVar8 = (ulong *)((long)param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_100028a3;
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
LAB_1000296f:
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
        goto LAB_100029f8;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_1000296f;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_1000296f;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_1000296f;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002a10((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10002943:
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
 * Address: 0x10002a10
 */

int recovered_10002a10(byte *param_1,byte *param_2)

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
 * Address: 0x10002a80
 */

bool recovered_10002a80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa0
 */

bool recovered_10002aa0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac0
 */

bool recovered_10002ac0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ae0
 */

bool recovered_10002ae0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b10
 */

bool recovered_10002b10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b30
 */

bool recovered_10002b30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b50
 */

int recovered_10002b50(int param_1)

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
 * Address: 0x10002b70
 */

int recovered_10002b70(int param_1)

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
 * Address: 0x10002b90
 */

long recovered_10002b90(long param_1)

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
 * Address: 0x10002bc0
 */

int recovered_10002bc0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002be3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002be3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c00
 */

int recovered_10002c00(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002c23;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002c23:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c40
 */

void recovered_10002c40(long param_1,long param_2)

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
 * Address: 0x10002c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10002c60(undefined8 *param_1)

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
LAB_10002d09:
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
        if (uVar5 == uVar10) goto LAB_10002d09;
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
    goto LAB_10002d09;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10003028:
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
        goto LAB_10003028;
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
 * Address: 0x100030e0
 */

char * recovered_100030e0(char *param_1,char param_2)

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
 * Address: 0x10003120
 */

long recovered_10003120(char *param_1,char *param_2)

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
 * Address: 0x10003180
 */

char * recovered_10003180(char *param_1,char *param_2)

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
 * Address: 0x100031e0
 */

char * recovered_100031e0(char *param_1,char *param_2)

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


#undef DAT_1000cf50
#define DAT_1000cf50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003240
 */

undefined * recovered_10003240(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000cf50;
}

#undef DAT_1000cf50

#undef PTR_DAT_1000f008
#define PTR_DAT_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2359U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003250
 */

undefined ** recovered_10003250(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000f008;
}

#undef PTR_DAT_1000f008

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
 * Address: 0x10003260
 */

/* WARNING: Removing unreachable block (ram,0x10003276) */
/* WARNING: Removing unreachable block (ram,0x100032c3) */
/* WARNING: Removing unreachable block (ram,0x100032ce) */
/* WARNING: Removing unreachable block (ram,0x100032d7) */
/* WARNING: Removing unreachable block (ram,0x100032e0) */
/* WARNING: Removing unreachable block (ram,0x100032cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003260(undefined8 *param_1)

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

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003360
 */

double recovered_10003360(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_1000cce0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 *
                    DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0;
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

#undef DAT_1000cce0

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003430(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_1000cd60 ^ (ulong)param_1);
  if ((double)(_DAT_1000cd60 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000cce8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000cce0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000cce8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000cce0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000cd60 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd60
#undef _DAT_1000cd60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003500
 */

double recovered_10003500(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003530
 */

double recovered_10003530(double param_1,double param_2)

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
      return DAT_1000cce8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000cce8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000cce8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000cce8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035b0
 */

double recovered_100035b0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e0
 */

double recovered_100035e0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  return (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                 (ulong)(DAT_1000cce8 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_1000cce8

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003640
 */

double recovered_10003640(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000cce8) {
      dVar1 = DAT_1000cce8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000cce0;
  }
  return dVar1;
}

#undef DAT_1000cce0
#undef DAT_1000cce8

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000ccf0
#define DAT_1000ccf0 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ccf8
#define DAT_1000ccf8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000cd00
#define DAT_1000cd00 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000cd08
#define DAT_1000cd08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000cd10
#define DAT_1000cd10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000cd18
#define DAT_1000cd18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000cd70
#define DAT_1000cd70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef DAT_1000cd80
#define DAT_1000cd80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
#undef DAT_1000cd90
#define DAT_1000cd90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef DAT_1000cda0
#define DAT_1000cda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000cd10
#define _DAT_1000cd10 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000cd18
#define _DAT_1000cd18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef _DAT_1000cd70
#define _DAT_1000cd70 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000cd80
#define _DAT_1000cd80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xd1U)))
#undef _DAT_1000cd90
#define _DAT_1000cd90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000cda0
#define _DAT_1000cda0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100037f0(double param_1)

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
    if (DAT_1000ccf8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000cce0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000ccf8 < param_1);
    }
    for (; param_1 < DAT_1000cd00; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000cd08 + param_1) / (param_1 + DAT_1000cce8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000cd70);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000cd80);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000cd90);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000cda0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000cd10 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000cd18;
  }
  return DAT_1000ccf0;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000ccf0
#undef DAT_1000ccf8
#undef DAT_1000cd00
#undef DAT_1000cd08
#undef DAT_1000cd10
#undef DAT_1000cd18
#undef DAT_1000cd70
#undef DAT_1000cd80
#undef DAT_1000cd90
#undef DAT_1000cda0
#undef _DAT_1000cd10
#undef _DAT_1000cd18
#undef _DAT_1000cd70
#undef _DAT_1000cd80
#undef _DAT_1000cd90
#undef _DAT_1000cda0

#undef DAT_1000cdb0
#define DAT_1000cdb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003940
 */

longlong recovered_10003940(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(value + *(double *)(&DAT_1000cdb0 + (ulong)(0.0 <= value) * 8));
}

#undef DAT_1000cdb0

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd20
#define DAT_1000cd20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000cd28
#define DAT_1000cd28 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000cd30
#define DAT_1000cd30 (*(double *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000cd38
#define DAT_1000cd38 (*(double *)(((uintptr_t)pf_module_state + 0x89U)))
#undef DAT_1000cd40
#define DAT_1000cd40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000cdc0
#define DAT_1000cdc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#undef _DAT_1000cd40
#define _DAT_1000cd40 (*(double *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000cdc0
#define _DAT_1000cdc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x111U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003970(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000cd20 < param_1; param_1 = param_1 + DAT_1000cd28) {
  }
  for (; param_1 < DAT_1000cd30; param_1 = param_1 + DAT_1000cd38) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000cdc0);
  return ((dVar1 / _DAT_1000cd40 + DAT_1000cce8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000cce8
#undef DAT_1000cd20
#undef DAT_1000cd28
#undef DAT_1000cd30
#undef DAT_1000cd38
#undef DAT_1000cd40
#undef DAT_1000cdc0
#undef _DAT_1000cd40
#undef _DAT_1000cdc0

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd20
#define DAT_1000cd20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000cd28
#define DAT_1000cd28 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000cd30
#define DAT_1000cd30 (*(double *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000cd38
#define DAT_1000cd38 (*(double *)(((uintptr_t)pf_module_state + 0x89U)))
#undef DAT_1000cd48
#define DAT_1000cd48 (*(double *)(((uintptr_t)pf_module_state + 0x99U)))
#undef DAT_1000cdd0
#define DAT_1000cdd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x121U)))
#undef _DAT_1000cdd0
#define _DAT_1000cdd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x121U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003a20(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000cd20 < param_1; param_1 = param_1 + DAT_1000cd28) {
  }
  for (; param_1 < DAT_1000cd30; param_1 = param_1 + DAT_1000cd38) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000cdd0);
  return (DAT_1000cd48 * dVar1 + DAT_1000cce8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000cce8
#undef DAT_1000cd20
#undef DAT_1000cd28
#undef DAT_1000cd30
#undef DAT_1000cd38
#undef DAT_1000cd48
#undef DAT_1000cdd0
#undef _DAT_1000cdd0

#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003ac0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000cd60 ^ (ulong)param_1);
  if ((double)(_DAT_1000cd60 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000cd60
#undef _DAT_1000cd60

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cd50
#define DAT_1000cd50 (*(double *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003ae0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar7 = (double)(_DAT_1000cd60 ^ (ulong)param_1);
  if ((double)(_DAT_1000cd60 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1000cd50;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1000cce0;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1000cce0;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1000cce0
#undef DAT_1000cd50
#undef DAT_1000cd60
#undef _DAT_1000cd60

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cd50
#define DAT_1000cd50 (*(double *)(((uintptr_t)pf_module_state + 0xa1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bb0
 */

ulong recovered_10003bb0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (param_1 <= 0.0) {
    return 0;
  }
  lVar3 = 0x3f;
  uVar2 = 0;
  dVar6 = DAT_1000cd50;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1000cce0;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1000cce0;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1000cce0
#undef DAT_1000cd50

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c60
 */

double recovered_10003c60(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1000cce8;
  do {
    if ((param_1 & 1) != 0) {
      dVar2 = dVar2 + dVar3;
    }
    dVar3 = dVar3 + dVar3;
    bVar1 = 1 < param_1;
    param_1 = param_1 >> 1;
  } while (bVar1);
  return dVar2;
}

#undef DAT_1000cce8

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003cb0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_1000cce8;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1000cd60);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1000cce8;
    do {
      if ((param_1 & 1) != 0) {
        dVar3 = dVar3 + dVar4;
      }
      dVar4 = dVar4 + dVar4;
      bVar1 = 1 < param_1;
      param_1 = param_1 >> 1;
    } while (bVar1);
  }
  return dVar3;
}

#undef DAT_1000cce8
#undef DAT_1000cd60
#undef _DAT_1000cd60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d40
 */

float recovered_10003d40(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef UNK_1000cd64
#define UNK_1000cd64 (*(uint *)(((uintptr_t)pf_module_state + 0xb5U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef uRam000000001000cd64
#define uRam000000001000cd64 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003d90(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001000cd64,
                             SUB84(dVar2,0) ^ _DAT_1000cd60));
  }
  iVar1 = 0;
  if (DAT_1000cce8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000cce0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000cce8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000cce0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000cd64,_DAT_1000cd60));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd60
#undef UNK_1000cd64
#undef _DAT_1000cd60
#undef uRam000000001000cd64

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e50
 */

undefined8 recovered_10003e50(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_1000cce0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 *
                  DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0;
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

#undef DAT_1000cce0

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cdf0
#define DAT_1000cdf0 (*(float *)(((uintptr_t)pf_module_state + 0x141U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

float recovered_10003f40(float param_1,float param_2)

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
    return DAT_1000cdf0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000cce8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000cce8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000cce8
#undef DAT_1000cdf0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd0
 */

undefined8 recovered_10003fd0(undefined1 in_XMM0 [16],ulong in_XMM2_Qb)

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


#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004010
 */

float recovered_10004010(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000cce8 + dVar2) & uVar1);
}

#undef DAT_1000cce8

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004070
 */

double recovered_10004070(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000cce8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000cce8

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040d0
 */

undefined8 recovered_100040d0(undefined8 param_1)

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000cce8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000cce8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004140
 */

float recovered_10004140(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003640((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000ccf8
#define DAT_1000ccf8 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000cd00
#define DAT_1000cd00 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000cd08
#define DAT_1000cd08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000cd10
#define DAT_1000cd10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000cd18
#define DAT_1000cd18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000cd70
#define DAT_1000cd70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef DAT_1000cd80
#define DAT_1000cd80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
#undef DAT_1000cd90
#define DAT_1000cd90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef DAT_1000cda0
#define DAT_1000cda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef DAT_1000cdf4
#define DAT_1000cdf4 (*(float *)(((uintptr_t)pf_module_state + 0x145U)))
#undef DAT_1000cdf8
#define DAT_1000cdf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x149U)))
#undef _DAT_1000cd10
#define _DAT_1000cd10 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000cd18
#define _DAT_1000cd18 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef _DAT_1000cd70
#define _DAT_1000cd70 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000cd80
#define _DAT_1000cd80 (*(uint128 *)(((uintptr_t)pf_module_state + 0xd1U)))
#undef _DAT_1000cd90
#define _DAT_1000cd90 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000cda0
#define _DAT_1000cda0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000cdf8
#define _DAT_1000cdf8 (*(float *)(((uintptr_t)pf_module_state + 0x149U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004160(float param_1)

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
    if (_DAT_1000cdf8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000cce0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000ccf8 < dVar2);
    }
    for (; dVar2 < DAT_1000cd00; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000cd08 + dVar2) / (dVar2 + DAT_1000cce8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000cd70);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000cd80);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000cd90);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000cda0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000cd10 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000cd18);
  }
  return DAT_1000cdf4;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000ccf8
#undef DAT_1000cd00
#undef DAT_1000cd08
#undef DAT_1000cd10
#undef DAT_1000cd18
#undef DAT_1000cd70
#undef DAT_1000cd80
#undef DAT_1000cd90
#undef DAT_1000cda0
#undef DAT_1000cdf4
#undef DAT_1000cdf8
#undef _DAT_1000cd10
#undef _DAT_1000cd18
#undef _DAT_1000cd70
#undef _DAT_1000cd80
#undef _DAT_1000cd90
#undef _DAT_1000cda0
#undef _DAT_1000cdf8

#undef DAT_1000cdb0
#define DAT_1000cdb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042b0
 */

long recovered_100042b0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(value + *(double *)(&DAT_1000cdb0 + (ulong)(0.0 <= value) * 8));
}

#undef DAT_1000cdb0

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd20
#define DAT_1000cd20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000cd28
#define DAT_1000cd28 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000cd30
#define DAT_1000cd30 (*(double *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000cd38
#define DAT_1000cd38 (*(double *)(((uintptr_t)pf_module_state + 0x89U)))
#undef DAT_1000cd40
#define DAT_1000cd40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000cdc0
#define DAT_1000cdc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111U)))
#undef _DAT_1000cd40
#define _DAT_1000cd40 (*(double *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000cdc0
#define _DAT_1000cdc0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x111U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100042e0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000cd20 < dVar1; dVar1 = dVar1 + DAT_1000cd28) {
  }
  for (; dVar1 < DAT_1000cd30; dVar1 = dVar1 + DAT_1000cd38) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000cdc0);
  return (float)(((dVar2 / _DAT_1000cd40 + DAT_1000cce8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000cce8
#undef DAT_1000cd20
#undef DAT_1000cd28
#undef DAT_1000cd30
#undef DAT_1000cd38
#undef DAT_1000cd40
#undef DAT_1000cdc0
#undef _DAT_1000cd40
#undef _DAT_1000cdc0

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd20
#define DAT_1000cd20 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000cd28
#define DAT_1000cd28 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000cd30
#define DAT_1000cd30 (*(double *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000cd38
#define DAT_1000cd38 (*(double *)(((uintptr_t)pf_module_state + 0x89U)))
#undef DAT_1000cd48
#define DAT_1000cd48 (*(double *)(((uintptr_t)pf_module_state + 0x99U)))
#undef DAT_1000cdd0
#define DAT_1000cdd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x121U)))
#undef _DAT_1000cdd0
#define _DAT_1000cdd0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x121U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004390(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000cd20 < dVar1; dVar1 = dVar1 + DAT_1000cd28) {
  }
  for (; dVar1 < DAT_1000cd30; dVar1 = dVar1 + DAT_1000cd38) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000cdd0);
  return (float)((DAT_1000cd48 * dVar1 + DAT_1000cce8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000cce8
#undef DAT_1000cd20
#undef DAT_1000cd28
#undef DAT_1000cd30
#undef DAT_1000cd38
#undef DAT_1000cd48
#undef DAT_1000cdd0
#undef _DAT_1000cdd0

#undef DAT_1000cde0
#define DAT_1000cde0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x131U)))
#undef UNK_1000cde4
#define UNK_1000cde4 (*(uint *)(((uintptr_t)pf_module_state + 0x135U)))
#undef _DAT_1000cde0
#define _DAT_1000cde0 (*(uint *)(((uintptr_t)pf_module_state + 0x131U)))
#undef uRam000000001000cde4
#define uRam000000001000cde4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x135U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004430(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000cde0 ^ (uint)fVar1);
  if ((float)(_DAT_1000cde0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000cde4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000cde0
#undef UNK_1000cde4
#undef _DAT_1000cde0
#undef uRam000000001000cde4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004450
 */

long recovered_10004450(byte *param_1,undefined8 *param_2,uint param_3)

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
 * Address: 0x10004580
 */

long recovered_10004580(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd58
#define DAT_1000cd58 (*(double *)(((uintptr_t)pf_module_state + 0xa9U)))
#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100046b0(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_1000cd58 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000cce8;
      do {
        dVar12 = dVar12 * DAT_1000cd58 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000cd58;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10004789;
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
LAB_10004789:
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
                dVar11 = dVar11 * DAT_1000cce0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 *
                         DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0 * DAT_1000cce0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000cd60);
  }
  return dVar11;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd58
#undef DAT_1000cd60
#undef _DAT_1000cd60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004910
 */

float recovered_10004910(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100046b0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000cd58
#define DAT_1000cd58 (*(double *)(((uintptr_t)pf_module_state + 0xa9U)))
#undef DAT_1000cd60
#define DAT_1000cd60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000cd60
#define _DAT_1000cd60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000cf55
#define str_1000cf55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_1000cf5c
#define str_1000cf5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_1000cf6d
#define str_1000cf6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2beU)))
#define abStack_7a (*(byte (*)[66])(frame + 22))
#define puStack_38 (*(uint * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004920(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
  byte *pbVar11;
  double *pdVar12;
  ulong uVar13;
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
  uVar6 = _DAT_1000cd60;
  dVar5 = DAT_1000cd58;
  uVar13 = 0;
  uVar23 = param_2;
LAB_10004989:
  bVar7 = *param_3;
  uVar19 = (uint)uVar13;
  if (bVar7 != 0x25) {
    if (bVar7 == 0) {
      if (param_2 != 0) {
        *param_1 = 0;
      }
      return uVar13 & 0xffffffff;
    }
    if (1 < uVar23) {
      *param_1 = bVar7;
      goto LAB_100049a2;
    }
    goto LAB_10004983;
  }
  bVar7 = param_3[1];
  if (bVar7 == 0x25) {
    if (1 < uVar23) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_10004983;
  }
  uVar22 = uVar13 & 0xffffffff;
  pbVar11 = param_3 + 2;
  while (bVar7 < 0x31) {
    if ((0x1280900000000U >> ((ulong)bVar7 & 0x3f) & 1) == 0) {
      if ((ulong)bVar7 == 0x2a) {
        if (*param_4 < 0x29) {
          *param_4 = *param_4 + 8;
        }
        else {
          *(long *)(param_4 + 2) = *(long *)(param_4 + 2) + 8;
        }
        bVar7 = *pbVar11;
        param_3 = pbVar11;
        goto joined_r0x10004a33;
      }
      break;
    }
    param_3 = param_3 + 1;
    bVar7 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  }
  do {
    bVar7 = param_3[1];
    param_3 = param_3 + 1;
  } while ((byte)(bVar7 - 0x30U) < 10);
joined_r0x10004a33:
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
    pbVar11 = param_3 + 1;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 1;
    if (*pbVar11 == 0x68) {
      param_3 = pbVar1;
    }
    cVar8 = (*pbVar11 != 0x68) + '\x01';
    bVar4 = false;
    break;
  case 0x6a:
    param_3 = param_3 + 1;
    cVar8 = '\a';
    bVar4 = false;
    break;
  case 0x6c:
    pbVar11 = param_3 + 1;
    pbVar1 = param_3 + 2;
    param_3 = param_3 + 1;
    if (*pbVar11 == 0x6c) {
      param_3 = pbVar1;
    }
    cVar8 = (*pbVar11 == 0x6c) + '\x03';
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
    uVar13 = (ulong)uVar2;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar2 < 0x29) {
        pcVar20 = (char *)(*(long *)(param_4 + 4) + uVar13);
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
        psVar14 = (short *)(*(long *)(param_4 + 4) + uVar13);
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
        puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar13);
        *param_4 = uVar2 + 8;
      }
      else {
code_r0x10004e32:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
      }
      goto code_r0x10004e3e;
    case '\a':
      if (0x28 < uVar2) goto code_r0x10004e32;
      puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar13);
      *param_4 = uVar2 + 8;
code_r0x10004e3e:
      uVar22 = *puVar9;
      break;
    default:
      if (uVar2 < 0x29) {
        piVar15 = (int *)(uVar13 + *(long *)(param_4 + 4));
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
    uVar13 = (ulong)uVar19;
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = str_1000cf6d[uVar22 % 10];
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
      uVar13 = uVar13 + uVar17;
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
    goto code_r0x10004986;
  default:
    if (1 < uVar23) {
      *param_1 = 0x3f;
LAB_100049a2:
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    break;
  case 0x58:
  case 0x78:
    uVar19 = *param_4;
    uVar13 = (ulong)uVar19;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        pbVar11 = *(byte **)(param_4 + 2);
        *(byte **)(param_4 + 2) = pbVar11 + 8;
        uVar13 = (ulong)*pbVar11;
      }
      break;
    case '\x02':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        puVar3 = *(ushort **)(param_4 + 2);
        *(ushort **)(param_4 + 2) = puVar3 + 4;
        uVar13 = (ulong)*puVar3;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
code_r0x10005053:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar13 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto code_r0x10005053;
      *param_4 = uVar19 + 8;
      uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      break;
    default:
      if (uVar19 < 0x29) {
        puVar16 = (uint *)(uVar13 + *(long *)(param_4 + 4));
        *param_4 = uVar19 + 8;
      }
      else {
        puVar16 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar16 + 2;
      }
      uVar13 = (ulong)*puVar16;
    }
    pcVar20 = str_1000cf6d;
    if (*param_3 == 0x58) {
      pcVar20 = str_1000cf5c;
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = pcVar20[(uint)uVar13 & 0xf];
      uVar17 = uVar18 + 1;
      bVar4 = 0xf < uVar13;
      uVar13 = uVar13 >> 4;
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
    uVar13 = uVar22 + uVar17 & 0xffffffff;
    goto LAB_10004989;
  case 99:
    uVar2 = *param_4;
    if ((ulong)uVar2 < 0x29) {
      pbVar11 = (byte *)((ulong)uVar2 + *(long *)(param_4 + 4));
      *param_4 = uVar2 + 8;
    }
    else {
      pbVar11 = *(byte **)(param_4 + 2);
      *(byte **)(param_4 + 2) = pbVar11 + 8;
    }
    if (1 < uVar23) {
      *param_1 = *pbVar11;
      goto LAB_100049a2;
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
          uVar13 = uVar23 & 0xfffffffffffffffe;
          if (uVar13 == 2) {
            param_1 = param_1 + 2;
          }
          else {
            param_1[2] = 0x30;
            if (uVar23 - 5 < 0xfffffffffffffffe) {
              param_1[3] = 0x30;
              if (uVar13 == 4) {
                param_1 = param_1 + 4;
              }
              else {
                param_1[4] = 0x30;
                if (uVar23 - 7 < 0xfffffffffffffffe) {
                  param_1[5] = 0x30;
                  if (uVar13 == 6) {
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
      uVar13 = (ulong)(uVar19 + 8);
      param_3 = param_3 + 1;
      uVar23 = uVar22;
    }
    else {
      uVar2 = param_4[1];
      if ((ulong)uVar2 < 0xa1) {
        pdVar12 = (double *)((ulong)uVar2 + *(long *)(param_4 + 4));
        param_4[1] = uVar2 + 0x10;
      }
      else {
        pdVar12 = *(double **)(param_4 + 2);
        *(double **)(param_4 + 2) = pdVar12 + 1;
      }
      dVar24 = *pdVar12;
      puStack_38 = param_4;
      if (0.0 <= dVar24) {
        uVar13 = uVar23;
      }
      else {
        if (1 < uVar23) {
          *param_1 = 0x2d;
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        }
        uVar19 = uVar19 + 1;
        dVar24 = (double)((ulong)dVar24 ^ uVar6);
        uVar13 = uVar23;
      }
      uVar23 = 0;
      uVar22 = (ulong)(uint)(int)dVar24;
      do {
        uVar17 = uVar23;
        abStack_7a[uVar17 + 2] = str_1000cf6d[uVar22 % 10];
        uVar23 = uVar17 + 1;
        bVar4 = 9 < uVar22;
        uVar22 = uVar22 / 10;
      } while (bVar4);
      if (uVar23 != 0) {
        if ((uVar17 & 1) == 0) {
          if (1 < uVar13) {
            *param_1 = abStack_7a[uVar17 + 2];
            param_1 = param_1 + 1;
            uVar13 = uVar13 - 1;
          }
        }
        else {
          uVar17 = uVar23;
        }
        uVar19 = uVar19 + (int)uVar23;
        if (uVar23 != 1) {
          do {
            if (1 < uVar13) {
              *param_1 = abStack_7a[uVar17 + 1];
              param_1 = param_1 + 1;
              uVar13 = uVar13 - 1;
            }
            if (1 < uVar13) {
              *param_1 = abStack_7a[uVar17];
              param_1 = param_1 + 1;
              uVar13 = uVar13 - 1;
            }
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
      }
      uVar23 = uVar13;
      if (1 < uVar13) {
        *param_1 = 0x2e;
        uVar23 = uVar13 - 1;
        if (uVar23 < 2) {
          param_1 = param_1 + 1;
        }
        else {
          dVar24 = (dVar24 - (double)(int)dVar24) * dVar5;
          iVar21 = (int)dVar24;
          param_1[1] = (char)iVar21 + 0x30;
          uVar22 = uVar13 & 0xfffffffffffffffe;
          uVar23 = 1;
          if (uVar22 == 2) {
            param_1 = param_1 + 2;
          }
          else {
            dVar24 = (dVar24 - (double)iVar21) * dVar5;
            iVar21 = (int)dVar24;
            param_1[2] = (char)iVar21 + 0x30;
            if (uVar13 - 5 < 0xfffffffffffffffe) {
              dVar24 = (dVar24 - (double)iVar21) * dVar5;
              iVar21 = (int)dVar24;
              param_1[3] = (char)iVar21 + 0x30;
              if (uVar22 == 4) {
                param_1 = param_1 + 4;
              }
              else {
                dVar24 = (dVar24 - (double)iVar21) * dVar5;
                param_1[4] = (char)(int)dVar24 + 0x30;
                if (uVar13 - 7 < 0xfffffffffffffffe) {
                  dVar24 = (dVar24 - (double)(int)dVar24) * dVar5;
                  iVar21 = (int)dVar24;
                  param_1[5] = (char)iVar21 + 0x30;
                  if (uVar22 == 6) {
                    param_1 = param_1 + 6;
                  }
                  else {
                    param_1[6] = (char)(int)((dVar24 - (double)iVar21) * dVar5) + 0x30;
                    param_1 = param_1 + 7;
                    uVar23 = uVar13 - 7;
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
      uVar13 = (ulong)(uVar19 + 7);
      param_3 = param_3 + 1;
      param_4 = puStack_38;
    }
    goto LAB_10004989;
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
    uVar13 = 0;
    do {
      uVar17 = uVar13;
      abStack_7a[uVar17 + 2] = str_1000cf6d[(uint)uVar22 & 0xf];
      uVar13 = uVar17 + 1;
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
      uVar17 = uVar13;
    }
    if (uVar13 != 1) {
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
    uVar13 = (uVar19 + 2) + uVar13;
    param_3 = param_3 + 1;
    goto LAB_10004989;
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
    pcVar20 = (char *)*puVar10;
    if ((byte *)pcVar20 == (byte *)0x0) {
      pcVar20 = str_1000cf55;
    }
    bVar7 = *pcVar20;
    while (bVar7 != 0) {
      pcVar20 = pcVar20 + 1;
      if (1 < uVar23) {
        *param_1 = bVar7;
        param_1 = param_1 + 1;
        uVar23 = uVar23 - 1;
      }
      uVar13 = (ulong)((int)uVar13 + 1);
      bVar7 = *pcVar20;
    }
    goto code_r0x10004986;
  case 0x75:
    uVar19 = *param_4;
    uVar13 = (ulong)uVar19;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar13 = (ulong)*(byte *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        pbVar11 = *(byte **)(param_4 + 2);
        *(byte **)(param_4 + 2) = pbVar11 + 8;
        uVar13 = (ulong)*pbVar11;
      }
      break;
    case '\x02':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar13 = (ulong)*(ushort *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
        puVar3 = *(ushort **)(param_4 + 2);
        *(ushort **)(param_4 + 2) = puVar3 + 4;
        uVar13 = (ulong)*puVar3;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar19 < 0x29) {
        *param_4 = uVar19 + 8;
        uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      }
      else {
code_r0x100052d3:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar13 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto code_r0x100052d3;
      *param_4 = uVar19 + 8;
      uVar13 = *(ulong *)(*(long *)(param_4 + 4) + uVar13);
      break;
    default:
      if (uVar19 < 0x29) {
        puVar16 = (uint *)(uVar13 + *(long *)(param_4 + 4));
        *param_4 = uVar19 + 8;
      }
      else {
        puVar16 = *(uint **)(param_4 + 2);
        *(uint **)(param_4 + 2) = puVar16 + 2;
      }
      uVar13 = (ulong)*puVar16;
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = str_1000cf6d[uVar13 % 10];
      uVar17 = uVar18 + 1;
      bVar4 = 9 < uVar13;
      uVar13 = uVar13 / 10;
    } while (bVar4);
    if (uVar17 == 0) {
      param_3 = param_3 + 1;
      uVar13 = uVar22;
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
        uVar13 = uVar22 + uVar17 & 0xffffffff;
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
        uVar13 = uVar22 + uVar17 & 0xffffffff;
        param_3 = param_3 + 1;
      }
    }
    goto LAB_10004989;
  }
LAB_10004983:
  uVar13 = (ulong)(uVar19 + 1);
code_r0x10004986:
  param_3 = param_3 + 1;
  goto LAB_10004989;
}

#undef DAT_1000cd58
#undef DAT_1000cd60
#undef _DAT_1000cd60
#undef str_1000cf55
#undef str_1000cf5c
#undef str_1000cf6d
#undef abStack_7a
#undef puStack_38

/* Native variadic interface; Pooka's Free Software License. */
int recovered_100057a0(char *buffer,unsigned long capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_10004920(buffer,capacity,format,(void *)args);__builtin_va_end(args);return result;}


#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef DAT_02000018
#define DAT_02000018 (*(uint8_t *)(0x2000018U))
#undef DAT_1000f108
#define DAT_1000f108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2459U)))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2461U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005820(ulong param_1,ulong param_2,ulong *param_3)

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
        if (DAT_1000f108 == 0) {
          puVar4 = (ulong *)&DAT_1000f108;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000f110 == (long *)0x0) {
          DAT_1000f110 = plVar2;
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
      if (DAT_1000f108 == 0) {
        puVar1 = &DAT_1000f108;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_1000f110 == (long *)0x0) {
        DAT_1000f110 = (long *)&DAT_02000000;
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
      if (DAT_1000f108 == 0) {
        puVar4 = (ulong *)&DAT_1000f108;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000f110 == (long *)0x0) {
        DAT_1000f110 = plVar2;
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
#undef DAT_1000f108
#undef DAT_1000f110
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
#undef DAT_1000f120
#define DAT_1000f120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2471U)))
#undef DAT_1000f130
#define DAT_1000f130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2481U)))
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
 * Address: 0x100059e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100059e0(long param_1,long param_2,undefined8 *in_R8)

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
        if (DAT_1000f120 != 0) {
          DAT_1000f120 = DAT_1000f120 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000f120 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001120(local_238,(undefined8 *)&DAT_1000f130,DAT_1000f120,
                               CONCAT71(in_register_00000009,uVar4),in_R8);
            uVar3 = DAT_1000f120;
          }
          *(undefined1 *)((long)local_238 + uVar3) = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_1000f120 = 0;
        }
        else {
          if (DAT_1000f120 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001120(local_238,(undefined8 *)&DAT_1000f130,DAT_1000f120,
                               CONCAT71(in_register_00000009,uVar4),in_R8);
            *(undefined1 *)((long)local_238 + DAT_1000f120) = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            DAT_1000f120 = 0;
          }
          pcVar1 = &DAT_1000f130 + DAT_1000f120;
          DAT_1000f120 = DAT_1000f120 + 1;
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
#undef DAT_1000f120
#undef DAT_1000f130
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
#undef DAT_1000f120
#define DAT_1000f120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2471U)))
#undef DAT_1000f130
#define DAT_1000f130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2481U)))
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
 * Address: 0x10005bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005bb0(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000f120 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001120(local_208,(undefined8 *)&DAT_1000f130,DAT_1000f120,in_RCX,in_R8);
    uVar1 = DAT_1000f120;
  }
  *(undefined1 *)((long)local_208 + uVar1) = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_1000f120 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f120
#undef DAT_1000f130
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
#undef DAT_1000f120
#define DAT_1000f120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2471U)))
#undef DAT_1000f130
#define DAT_1000f130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2481U)))
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
 * Address: 0x10005c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005c50(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000f120 != 0) {
    recovered_10001120(local_208,(undefined8 *)&DAT_1000f130,DAT_1000f120,in_RCX,in_R8);
    *(undefined1 *)((long)local_208 + DAT_1000f120) = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1000f120 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f120
#undef DAT_1000f130
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1000cf7e
#define DAT_1000cf7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cfU)))
#define local_148 (*(byte (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cf0
 */

void recovered_10005cf0(undefined *param_1,undefined1 *param_2,undefined8 *in_R8,
                       undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint extraout_EAX = 0;
  byte *in_RDX;

  in_RDX = &DAT_1000cf7e;
  if (param_1 != (undefined *)0x0) {
    in_RDX = param_1;
  }
  recovered_100057a0(local_148,0x140,in_RDX,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  if (0 < (int)extraout_EAX) {
    recovered_100059e0((long)local_148,(ulong)extraout_EAX,in_R8);
  }
  return;
}

#undef DAT_1000cf7e
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d50
 */

void recovered_10005d50(undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002b90(((uintptr_t)pf_module_state + 0x2d2U));
  recovered_100059e0(((uintptr_t)pf_module_state + 0x2d2U),lVar1,in_R8);
  lVar1 = recovered_10002b90(((uintptr_t)pf_module_state + 0x2edU));
  recovered_100059e0(((uintptr_t)pf_module_state + 0x2edU),lVar1,in_R8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d90
 */

void recovered_10005d90(undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002b90(((uintptr_t)pf_module_state + 0x2f0U));
  recovered_100059e0(((uintptr_t)pf_module_state + 0x2f0U),lVar1,in_R8);
  lVar1 = recovered_10002b90(((uintptr_t)pf_module_state + 0x2edU));
  recovered_100059e0(((uintptr_t)pf_module_state + 0x2edU),lVar1,in_R8);
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
#undef DAT_1000f120
#define DAT_1000f120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2471U)))
#undef DAT_1000f130
#define DAT_1000f130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2481U)))
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
 * Address: 0x10005dd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005dd0(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

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
  if (DAT_1000f120 != 0) {
    uVar3 = uVar2 & 0xffffffff;
    recovered_10001120(local_228,(undefined8 *)&DAT_1000f130,DAT_1000f120,uVar2,
                       (undefined8 *)CONCAT71(in_register_00000081,param_2 == 0 || param_1 == 0));
    *(undefined1 *)((long)local_228 + DAT_1000f120) = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_1000f120 = 0;
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
#undef DAT_1000f120
#undef DAT_1000f130
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ef0
 */

undefined8 recovered_10005ef0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f00
 */

void recovered_10005f00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f10
 */

undefined1 recovered_10005f10(void)

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
#undef DAT_1000cf7e
#define DAT_1000cf7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cfU)))
#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_1000d033
#define str_1000d033 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x384U)))
#undef str_1000d040
#define str_1000d040 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000d04e
#define str_1000d04e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39fU)))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f20
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_10005f20(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

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
    DAT_1000f070 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002bc0((byte *)param_1,(byte *)str_1000d033);
  if (iVar3 == 0) {
    uVar10 = 1;
LAB_100061ce:
    pbVar5 = recovered_10001030(0x340);
    if (pbVar5 == (byte *)0x0) {
      DAT_1000f070 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001e20(pbVar5,0,0x340);
    *(undefined4 *)pbVar5 = uVar10;
    pbVar5[0x124] = iVar3 == 0;
    pbVar5[0x125] = iVar3 != 0;
    pbVar5[0x120] = 0xff;
    pbVar5[0x121] = 0xff;
    pbVar5[0x122] = 0xff;
    pbVar5[0x123] = 0xff;
    pf_varargs_100057a0__8_(pbVar5 + 4,0xf1,&DAT_1000cf7e,param_1);
    return (undefined4 *)pbVar5;
  }
  iVar4 = recovered_10002bc0((byte *)param_1,(byte *)str_1000d040);
  if (iVar4 == 0) {
    uVar10 = 2;
    goto LAB_100061ce;
  }
  iVar4 = recovered_10002bc0((byte *)param_1,(byte *)str_1000d04e);
  if (iVar4 == 0) {
    uVar10 = 3;
    goto LAB_100061ce;
  }
  pbVar5 = recovered_10001030(0x340);
  if (pbVar5 == (byte *)0x0) {
    DAT_1000f070 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001e20(pbVar5,0,0x340);
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pcVar6 = recovered_100030e0((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_100030e0((char *)param_2,'+');
    bVar11 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_100030e0((char *)param_2,'a');
      bVar11 = pcVar6 != (char *)0x0;
    }
  }
  pbVar5[0x124] = bVar11;
  pcVar6 = recovered_100030e0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_100030e0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_100030e0((char *)param_2,'+');
    bVar12 = pcVar6 != (char *)0x0;
  }
  pbVar5[0x125] = bVar12;
  pcVar6 = recovered_100030e0((char *)param_2,'a');
  pbVar5[0x126] = pcVar6 != (char *)0x0;
  pbVar5[0x120] = 0xff;
  pbVar5[0x121] = 0xff;
  pbVar5[0x122] = 0xff;
  pbVar5[0x123] = 0xff;
  pf_varargs_100057a0__8_(pbVar5 + 4,0xf1,&DAT_1000cf7e,param_1);
  recovered_10001e20((byte *)&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_100030e0((char *)param_2,'w');
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
          puVar7 = recovered_100010d0(*(void **)(pbVar5 + 0x100),size);
          if (puVar7 == (undefined8 *)0x0) {
            DAT_1000f070 = 0xc;
            pbVar5[0x129] = 1;
            goto LAB_10006258;
          }
          *(undefined8 **)(pbVar5 + 0x100) = puVar7;
          *(ulong *)(pbVar5 + 0x110) = size;
          *(undefined8 **)(pbVar5 + 0xf8) = puVar7;
          uVar9 = (ulong)local_30;
        }
        else {
          puVar7 = *(undefined8 **)(pbVar5 + 0x100);
        }
        recovered_10001120(puVar7,(undefined8 *)(ulong)local_34,uVar9,uVar8,in_R8);
      }
      else {
        *(ulong *)(pbVar5 + 0xf8) = (ulong)local_34;
      }
      *(ulong *)(pbVar5 + 0x108) = (ulong)local_30;
      bVar1 = pbVar5[0x126];
      goto joined_r0x100061b2;
    }
  }
  else if (pbVar5[0x125] == 0) {
    DAT_1000f070 = 2;
LAB_10006258:
    recovered_10001080(pbVar5);
    return (undefined4 *)0x0;
  }
  bVar1 = pbVar5[0x126];
joined_r0x100061b2:
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
#undef DAT_1000cf7e
#undef DAT_1000f070
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000d033
#undef str_1000d040
#undef str_1000d04e
#undef local_34
#undef local_30

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
#undef DAT_1000cf7e
#define DAT_1000cf7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cfU)))
#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
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
#undef str_1000d033
#define str_1000d033 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x384U)))
#undef str_1000d040
#define str_1000d040 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000d04e
#define str_1000d04e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39fU)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_100062b0(long param_1,long param_2,int *param_3,undefined *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

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
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      if (((_DAT_00006800 == 0x50414d57) &&
          (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
         (in_R8 = (undefined *)(ulong)_DAT_00006838, (code *)in_R8 != (code *)0x0)) {
        uStack_30 = 0x1000633a;
        iVar4 = (*(code *)in_R8)(param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_10006361;
        }
      }
      DAT_1000f070 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_10006361:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x10006378;
      recovered_10001080(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10006380;
    recovered_10001080(param_3);
    puVar8 = recovered_10005f20(param_1,param_2,(undefined8 *)in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa
                                ,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f070 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002bc0((byte *)param_1,(byte *)str_1000d033);
  if (iVar4 == 0) {
    uVar11 = 1;
LAB_100061ce:
    pbVar5 = recovered_10001030(0x340);
    if (pbVar5 == (byte *)0x0) {
      DAT_1000f070 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001e20(pbVar5,0,0x340);
    *(undefined4 *)pbVar5 = uVar11;
    pbVar5[0x124] = iVar4 == 0;
    pbVar5[0x125] = iVar4 != 0;
    pbVar5[0x120] = 0xff;
    pbVar5[0x121] = 0xff;
    pbVar5[0x122] = 0xff;
    pbVar5[0x123] = 0xff;
    pf_varargs_100057a0__8_(pbVar5 + 4,0xf1,&DAT_1000cf7e,param_1);
    return (undefined4 *)pbVar5;
  }
  iVar3 = recovered_10002bc0((byte *)param_1,(byte *)str_1000d040);
  if (iVar3 == 0) {
    uVar11 = 2;
    goto LAB_100061ce;
  }
  iVar3 = recovered_10002bc0((byte *)param_1,(byte *)str_1000d04e);
  if (iVar3 == 0) {
    uVar11 = 3;
    goto LAB_100061ce;
  }
  pbVar5 = recovered_10001030(0x340);
  if (pbVar5 == (byte *)0x0) {
    DAT_1000f070 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001e20(pbVar5,0,0x340);
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pcVar6 = recovered_100030e0((char *)param_2,'r');
  bVar13 = true;
  bVar12 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_100030e0((char *)param_2,'+');
    bVar12 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_100030e0((char *)param_2,'a');
      bVar12 = pcVar6 != (char *)0x0;
    }
  }
  pbVar5[0x124] = bVar12;
  pcVar6 = recovered_100030e0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_100030e0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_100030e0((char *)param_2,'+');
    bVar13 = pcVar6 != (char *)0x0;
  }
  pbVar5[0x125] = bVar13;
  pcVar6 = recovered_100030e0((char *)param_2,'a');
  pbVar5[0x126] = pcVar6 != (char *)0x0;
  pbVar5[0x120] = 0xff;
  pbVar5[0x121] = 0xff;
  pbVar5[0x122] = 0xff;
  pbVar5[0x123] = 0xff;
  pf_varargs_100057a0__8_(pbVar5 + 4,0xf1,&DAT_1000cf7e,param_1);
  recovered_10001e20((byte *)&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar6 = recovered_100030e0((char *)param_2,'w');
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
          puVar7 = recovered_100010d0(*(void **)(pbVar5 + 0x100),size);
          if (puVar7 == (undefined8 *)0x0) {
            DAT_1000f070 = 0xc;
            pbVar5[0x129] = 1;
            goto LAB_10006258;
          }
          *(undefined8 **)(pbVar5 + 0x100) = puVar7;
          *(ulong *)(pbVar5 + 0x110) = size;
          *(undefined8 **)(pbVar5 + 0xf8) = puVar7;
          uVar10 = uStack_30 & 0xffffffff;
        }
        else {
          puVar7 = *(undefined8 **)(pbVar5 + 0x100);
        }
        recovered_10001120(puVar7,(undefined8 *)(ulong)uStack_34,uVar10,uVar9,(undefined8 *)in_R8);
      }
      else {
        *(ulong *)(pbVar5 + 0xf8) = (ulong)uStack_34;
      }
      *(ulong *)(pbVar5 + 0x108) = (ulong)(uint)uStack_30;
      bVar1 = pbVar5[0x126];
      goto joined_r0x100061b2;
    }
  }
  else if (pbVar5[0x125] == 0) {
    DAT_1000f070 = 2;
LAB_10006258:
    recovered_10001080(pbVar5);
    return (undefined4 *)0x0;
  }
  bVar1 = pbVar5[0x126];
joined_r0x100061b2:
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
#undef DAT_1000cf7e
#undef DAT_1000f070
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_1000d033
#undef str_1000d040
#undef str_1000d04e
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
#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100063a0(int *param_1)

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
      DAT_1000f070 = 5;
      *(undefined1 *)((long)param_1 + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10001080(*(void **)(param_1 + 0x40));
  }
  recovered_10001080(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1000f070
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006470
 */

ulong recovered_10006470(long param_1,ulong param_2,ulong param_3,int *param_4,undefined8 *in_R8)

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
          uVar3 = recovered_100065b0(param_4,in_R8);
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
      recovered_10001120((undefined8 *)param_1,(undefined8 *)(uVar5 + *(long *)(param_4 + 0x3e)),
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
#undef DAT_1000cf54
#define DAT_1000cf54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2471U)))
#undef DAT_1000f130
#define DAT_1000f130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2481U)))
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
 * Address: 0x100065b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100065b0(int *param_1,undefined8 *in_R8)

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
LAB_1000660a:
      *(ulong *)(param_1 + 0xce) = uVar4 + 1;
      return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
    }
    if (DAT_1000f120 != 0) {
      recovered_10001120(local_218,(undefined8 *)&DAT_1000f130,DAT_1000f120,uVar4,in_R8);
      *(undefined1 *)((long)local_218 + DAT_1000f120) = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_1000f120 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((long)param_1 + 0x12a,0x1fe,&DAT_1000cf54,0);
      if (iVar2 != 0) {
        lVar3 = recovered_10002b90((long)param_1 + 0x12a);
        *(long *)(param_1 + 0xcc) = lVar3 + 1;
        *(undefined1 *)((long)param_1 + lVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar4 = 0;
        goto LAB_1000660a;
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
#undef DAT_1000cf54
#undef DAT_1000f120
#undef DAT_1000f130
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a0
 */

long recovered_100067a0(long param_1,long param_2,long param_3,uint *param_4,undefined8 *in_R8)

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
    recovered_100059e0(param_1,uVar6,in_R8);
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
      pvVar4 = recovered_100010d0(*(void **)(param_4 + 0x40),(ulong)puVar3);
      if (pvVar4 == (void *)0x0) {
        DAT_1000f070 = 0xc;
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
      recovered_10001e20((byte *)(uVar1 + *(long *)(param_4 + 0x40)),0,uVar5 - uVar1);
      uVar5 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001120((undefined8 *)(uVar5 + *(long *)(param_4 + 0x40)),(undefined8 *)param_1,uVar6
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

#undef DAT_1000f070

#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006930
 */

undefined8 recovered_10006930(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000f070 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000693e;
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
LAB_1000693e:
  DAT_1000f070 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000f070

#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b0
 */

undefined8 recovered_100069b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000f070 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000f070

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100069e0(int *param_1)

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
  DAT_1000f070 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1000f070
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a90
 */

undefined1 recovered_10006a90(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

undefined1 recovered_10006ab0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ad0
 */

void recovered_10006ad0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

uint recovered_10006af0(uint param_1,long param_2)

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
#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006b20(long param_1)

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
  DAT_1000f070 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_1000f070
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
#undef DAT_1000f070
#define DAT_1000f070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23c1U)))
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
 * Address: 0x10006ba0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006ba0(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f070 = 0x16;
    return 0xffffffff;
  }
  recovered_10001e20((byte *)&local_2c,0,0xc);
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
  DAT_1000f070 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef DAT_1000f070
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
 * Address: 0x10006d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10006d10(long param_1,undefined8 *param_2,ulong *param_3,undefined8 *in_R8)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined7 in_register_00000009 = 0;

  uVar4 = param_2 == (undefined8 *)0x0 || param_1 == 0;
  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10001e20((byte *)&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10006dcf;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        puVar2 = recovered_10001030((ulong)(local_30 + (local_30 == 0)));
        if (puVar2 != (undefined8 *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001120(puVar2,(undefined8 *)(ulong)local_34,(ulong)local_30,
                               CONCAT71(in_register_00000009,uVar4),in_R8);
            uVar3 = (ulong)local_30;
          }
          *param_2 = puVar2;
          *param_3 = uVar3;
          uVar3 = CONCAT71((int7)((ulong)puVar2 >> 8),1);
          goto LAB_10006dcf;
        }
      }
    }
  }
  uVar3 = 0;
LAB_10006dcf:
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

/* Preserve the native file-service arguments; Pooka's Free Software License. */
bool recovered_10006df0(long filename,long bytes,long count) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(!filename||(!bytes&&count)||api[0]!=0x50414d57||!api[1]||api[2]<0x3c||!api[0x38/4])return false;
 return ((int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4])((const char *)filename,(const void *)bytes,(uint32_t)count)!=0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e60
 */

undefined8 recovered_10006e60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e70
 */

void recovered_10006e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

undefined8 recovered_10006e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e90
 */

undefined8 recovered_10006e90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

undefined8 recovered_10006ea0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb0
 */

char * recovered_10006eb0(char *param_1,char param_2,long param_3)

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
 * Address: 0x10006ee0
 */

int recovered_10006ee0(long param_1,long param_2,long param_3)

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


#undef str_1000cfc5
#define str_1000cfc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x316U)))
#undef str_1000cfd2
#define str_1000cfd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#undef str_1000cfdc
#define str_1000cfdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32dU)))
#undef str_1000cff0
#define str_1000cff0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x341U)))
#undef str_1000cffe
#define str_1000cffe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34fU)))
#undef str_1000d010
#define str_1000d010 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
#undef str_1000d01c
#define str_1000d01c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36dU)))
#undef str_1000d02d
#define str_1000d02d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f20
 */

char * recovered_10006f20(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return (char *)0x1000cfc2;
  default:
    return str_1000d02d;
  case 2:
    return str_1000cfc5;
  case 5:
    return str_1000cfd2;
  case 9:
    return str_1000cfdc;
  case 0xc:
    return str_1000cff0;
  case 0xd:
    return str_1000cffe;
  case 0x11:
    return str_1000d010;
  case 0x16:
    return str_1000d01c;
  }
}

#undef str_1000cfc5
#undef str_1000cfd2
#undef str_1000cfdc
#undef str_1000cff0
#undef str_1000cffe
#undef str_1000d010
#undef str_1000d01c
#undef str_1000d02d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

undefined8 recovered_10006ff0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007000
 */

undefined8 recovered_10007000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2681U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

void recovered_10007010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f330 = DAT_1000f330 + 1;
  return;
}

#undef DAT_1000f330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007030
 */

void recovered_10007030(long param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x1000703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007040(void *context) { __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007070(void *context,int value) { __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx"); }


#undef DAT_100070f1
#define DAT_100070f1 (*(uint8_t *)(0x100070f1U))
#undef DAT_1000d098
#define DAT_1000d098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e9U)))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070a0
 */

void recovered_100070a0(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007120;
  local_60 = &DAT_1000d098;
  local_50 = &DAT_100070f1;
  local_80 = 1;
  recovered_100076a0(&local_88);
  recovered_10001000();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_100070f1
#undef DAT_1000d098
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007120
 */

undefined8 recovered_10007120(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

void recovered_10007130(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007140(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100070a0();
}


#undef DAT_1000f338
#define DAT_1000f338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2689U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007140
 */

long recovered_10007140(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000f338;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000f338 = param_1;
  lVar1 = recovered_10007560(param_1);
  return lVar1;
}

#undef DAT_1000f338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007170
 */

void * recovered_10007170(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001030(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001000();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071a0
 */

void * recovered_100071a0(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001030(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001000();
  }
  return pvVar1;
}


#undef DAT_1000d0a8
#define DAT_1000d0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f9U)))
#undef LAB_1000723d
#define LAB_1000723d (*(uint8_t *)(0x1000723dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d0
 */

void recovered_100071d0(void *pointer)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007120;
  local_60 = &DAT_1000d0a8;
  local_50 = &LAB_1000723d;
  local_80 = 1;
  recovered_100076a0(&local_88);
  recovered_10001080(pointer);
  recovered_100076c0(&local_88);
  return;
}

#undef DAT_1000d0a8
#undef LAB_1000723d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000d0b8
#define DAT_1000d0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x409U)))
#undef LAB_100072dd
#define LAB_100072dd (*(uint8_t *)(0x100072ddU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007270
 */

void recovered_10007270(void *pointer)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007120;
  local_60 = &DAT_1000d0b8;
  local_50 = &LAB_100072dd;
  local_80 = 1;
  recovered_100076a0(&local_88);
  recovered_10001080(pointer);
  recovered_100076c0(&local_88);
  return;
}

#undef DAT_1000d0b8
#undef LAB_100072dd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000d0c8
#define DAT_1000d0c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x419U)))
#undef LAB_1000737d
#define LAB_1000737d (*(uint8_t *)(0x1000737dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

void recovered_10007310(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007120;
  local_60 = &DAT_1000d0c8;
  local_50 = &LAB_1000737d;
  local_80 = 1;
  recovered_100076a0(&local_88);
  recovered_10001080(param_1);
  recovered_100076c0(&local_88);
  return;
}

#undef DAT_1000d0c8
#undef LAB_1000737d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000d0d8
#define DAT_1000d0d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x429U)))
#undef LAB_1000741d
#define LAB_1000741d (*(uint8_t *)(0x1000741dU))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_88 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073b0
 */

void recovered_100073b0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007120;
  local_60 = &DAT_1000d0d8;
  local_50 = &LAB_1000741d;
  local_80 = 1;
  recovered_100076a0(&local_88);
  recovered_10001080(param_1);
  recovered_100076c0(&local_88);
  return;
}

#undef DAT_1000d0d8
#undef LAB_1000741d
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007450
 */

undefined8 recovered_10007450(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007460
 */

uint recovered_10007460(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007470
 */

void recovered_10007470(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

void recovered_10007480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

long recovered_10007490(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10001030(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100070a0();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_100074fc:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_1000752f;
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
      if (size == uVar3) goto LAB_10007534;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_100074fc;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_1000752f:
    } while (size != uVar3);
  }
LAB_10007534:
  return (long)pvVar2 + 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007540
 */

void recovered_10007540(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001080((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007560
 */

long recovered_10007560(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000f338
#define DAT_1000f338 (*(void * *)(((uintptr_t)pf_module_state + 0x2689U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007570
 */

void recovered_10007570(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_1000f338;
  if (DAT_1000f338 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000f338 + 0x10);
    DAT_1000f338 = *(void **)((long)DAT_1000f338 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)pointer + 0x28) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x30);
      }
      recovered_10001080(pointer);
      return;
    }
  }
  return;
}

#undef DAT_1000f338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c0
 */

void recovered_100075c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100075f0((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000f338
#define DAT_1000f338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2689U)))
#undef DAT_1000f340
#define DAT_1000f340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2691U)))
#define cStack_36 (*(char *)(frame + 26))
#define local_38 (*(undefined2 *)(frame + 24))
#define uStack_35 (*(undefined1 *)(frame + 27))
#define local_30 (*(undefined4 *)(frame + 32))
#define uStack_34 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

ulonglong recovered_100075f0(undefined8 *in_RDI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *in_RDI_00;
  undefined8 uVar2;
  byte *in_RSI;
  long *plVar3;

  if (DAT_1000f340 != (long *)0x0) {
    pbVar1 = (byte *)*in_RDI;
    plVar3 = DAT_1000f340;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      in_RSI = pbVar1;
      uVar2 = recovered_10008090((long)plVar3,pbVar1,&local_38);
      if (((char)uVar2 != '\0') && (cStack_36 == '\x01')) {
        in_RDI[3] = plVar3;
        in_RDI[4] = CONCAT44(local_30,uStack_34);
        recovered_10007740(in_RDI,in_RSI);
        in_RDI_00 = DAT_1000f338;
        if (DAT_1000f338 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_100070a0();
        }
        *(undefined1 *)(DAT_1000f338 + 5) = 1;
        in_RDI_00[3] = 0;
        in_RDI_00[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_100075f0(in_RDI_00);
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100070a0();
}

#undef DAT_1000f338
#undef DAT_1000f340
#undef cStack_36
#undef local_38
#undef uStack_35
#undef local_30
#undef uStack_34

#undef DAT_1000f338
#define DAT_1000f338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2689U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007670
 */

void recovered_10007670(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *in_RDI;

  in_RDI = DAT_1000f338;
  if (DAT_1000f338 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100070a0();
  }
  *(undefined1 *)(DAT_1000f338 + 5) = 1;
  in_RDI[3] = 0;
  in_RDI[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100075f0(in_RDI);
}

#undef DAT_1000f338

#undef DAT_1000f340
#define DAT_1000f340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2691U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076a0
 */

void recovered_100076a0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000f340;
  DAT_1000f340 = param_1;
  return;
}

#undef DAT_1000f340

#undef DAT_1000f340
#define DAT_1000f340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2691U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076c0
 */

void recovered_100076c0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000f340;
  if (DAT_1000f340 == param_1) {
    puVar2 = &DAT_1000f340;
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

#undef DAT_1000f340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007700
 */

void recovered_10007700(undefined8 *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100075f0(in_RDI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uchar recovered_10007710(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int in_ESI;
  int in_EDI;

  if (in_EDI == 3) {
    uVar1 = in_ESI - 0x20U & 0xffdf;
  }
  else {
    if (in_EDI != 1) {
      return '\0';
    }
    uVar1 = in_ESI - 8U & 0xffe7;
  }
  return uVar1 == 0;
}


#undef DAT_1000f340
#define DAT_1000f340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2691U)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007720
 */

undefined8 recovered_10007720(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_1000f340 != (undefined8 *)0x0) {
    DAT_1000f340 = (undefined8 *)*DAT_1000f340;
  }
  recovered_10007740(param_1,in_RSI);
  if (DAT_1000f340 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1000f340;
      if (DAT_1000f340 == puVar1) {
        DAT_1000f340[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100077cc:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10007030((long)puVar3,in_RSI);
        recovered_10007720(puVar3,in_RSI);
        return 0;
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10008090((long)DAT_1000f340,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_100077cc;
      }
      DAT_1000f340 = (undefined8 *)*puVar3;
    } while (DAT_1000f340 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100070a0();
}

#undef DAT_1000f340
#undef uStack_40
#undef uStack_38

#undef DAT_1000f340
#define DAT_1000f340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2691U)))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

undefined8 recovered_10007740(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1000f340 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_1000f340;
      if (DAT_1000f340 == plVar1) {
        DAT_1000f340[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100077cc:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10007030((long)plVar3,in_RSI);
        recovered_10007720(plVar3,in_RSI);
        return 0;
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10008090((long)DAT_1000f340,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100077cc;
      }
      DAT_1000f340 = (long *)*plVar3;
    } while (DAT_1000f340 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100070a0();
}

#undef DAT_1000f340
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e0
 */

undefined8 recovered_100077e0(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007720(in_RDI,in_RSI);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

undefined8 recovered_100077f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007800
 */

void recovered_10007800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100070a0();
}


#undef DAT_1000f0d0
#define DAT_1000f0d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2421U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

long recovered_10007810(long *param_1,undefined8 param_2,undefined8 *param_3)

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
        if (lVar3 == lVar4) goto LAB_100078d4;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100078d4;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1000f0d0) goto LAB_100078dc;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_100078d4:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_100078dc:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000f0d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078f0
 */

void recovered_100078f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001000();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007900
 */

undefined8 recovered_10007900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

bool recovered_10007910(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007930
 */

bool recovered_10007930(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

bool recovered_10007960(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007980
 */

bool recovered_10007980(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079b0
 */

bool recovered_100079b0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079d0
 */

byte recovered_100079d0(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Native finite-value predicate; Pooka's Free Software License. */
int recovered_10007a10(double value){return __builtin_isfinite(value);}


#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd48
#define DAT_1000cd48 (*(double *)(((uintptr_t)pf_module_state + 0x99U)))
#undef DAT_1000ce00
#define DAT_1000ce00 (*(double *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000ce08
#define DAT_1000ce08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_1000ce10
#define DAT_1000ce10 (*(double *)(((uintptr_t)pf_module_state + 0x161U)))
#undef DAT_1000ce18
#define DAT_1000ce18 (*(double *)(((uintptr_t)pf_module_state + 0x169U)))
#undef _DAT_1000ce08
#define _DAT_1000ce08 (*(double *)(((uintptr_t)pf_module_state + 0x159U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10007a40(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;

  if (NAN(param_1)) {
    return param_1;
  }
  if (_DAT_1000ce08 < param_1) {
    return DAT_1000ce00;
  }
  dVar4 = 0.0;
  if (DAT_1000ce10 <= param_1) {
    uVar1 = 0;
    if (DAT_1000cce0 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000cce0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000cce0 < param_1);
    }
    for (; param_1 < DAT_1000cd48; param_1 = param_1 * DAT_1000cce0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000cce8;
    dVar5 = DAT_1000cce8;
    dVar6 = DAT_1000cce8;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000ce18;
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x24);
    if (uVar1 != 0) {
      uVar3 = uVar1 & 7;
      if (7 < uVar1) {
        uVar1 = uVar1 & 0xfffffff8;
        do {
          dVar4 = dVar4 * dVar4 * dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          dVar4 = dVar4 * dVar4;
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  return dVar4;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd48
#undef DAT_1000ce00
#undef DAT_1000ce08
#undef DAT_1000ce10
#undef DAT_1000ce18
#undef _DAT_1000ce08

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd48
#define DAT_1000cd48 (*(double *)(((uintptr_t)pf_module_state + 0x99U)))
#undef DAT_1000ce00
#define DAT_1000ce00 (*(double *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000ce08
#define DAT_1000ce08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_1000ce10
#define DAT_1000ce10 (*(double *)(((uintptr_t)pf_module_state + 0x161U)))
#undef DAT_1000ce18
#define DAT_1000ce18 (*(double *)(((uintptr_t)pf_module_state + 0x169U)))
#undef DAT_1000ce20
#define DAT_1000ce20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171U)))
#undef _DAT_1000ce08
#define _DAT_1000ce08 (*(double *)(((uintptr_t)pf_module_state + 0x159U)))
#undef _DAT_1000ce20
#define _DAT_1000ce20 (*(float *)(((uintptr_t)pf_module_state + 0x171U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10007bb0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;

  dVar6 = (double)param_1;
  if (NAN(param_1)) {
    return param_1;
  }
  if (_DAT_1000ce08 < dVar6) {
    return (float)DAT_1000ce00;
  }
  dVar5 = 0.0;
  if (DAT_1000ce10 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000ce20 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1000cce0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000cce0 < dVar6);
    }
    for (; dVar6 < DAT_1000cd48; dVar6 = dVar6 * DAT_1000cce0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000cce8;
    dVar5 = DAT_1000cce8;
    dVar7 = DAT_1000cce8;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000ce18;
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x24);
    if (uVar1 != 0) {
      uVar3 = uVar1 & 7;
      if (7 < uVar1) {
        uVar1 = uVar1 & 0xfffffff8;
        do {
          dVar5 = dVar5 * dVar5 * dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          dVar5 = dVar5 * dVar5;
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        dVar5 = dVar5 * dVar5;
      }
    }
  }
  return (float)dVar5;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd48
#undef DAT_1000ce00
#undef DAT_1000ce08
#undef DAT_1000ce10
#undef DAT_1000ce18
#undef DAT_1000ce20
#undef _DAT_1000ce08
#undef _DAT_1000ce20

#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd48
#define DAT_1000cd48 (*(double *)(((uintptr_t)pf_module_state + 0x99U)))
#undef DAT_1000ce00
#define DAT_1000ce00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000ce08
#define DAT_1000ce08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x159U)))
#undef DAT_1000ce10
#define DAT_1000ce10 (*(double *)(((uintptr_t)pf_module_state + 0x161U)))
#undef DAT_1000ce18
#define DAT_1000ce18 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x169U)))
#undef _DAT_1000ce08
#define _DAT_1000ce08 (*(double *)(((uintptr_t)pf_module_state + 0x159U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007d40(longdouble in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_1000ce08) && (DAT_1000ce10 <= dVar4)) {
    uVar1 = 0;
    if (DAT_1000cce0 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_1000cce0;
        uVar1 = uVar1 + 1;
      } while (DAT_1000cce0 < dVar4);
    }
    for (; dVar4 < DAT_1000cd48; dVar4 = dVar4 * DAT_1000cce0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    do {
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x24);
    if (uVar1 != 0) {
      uVar3 = uVar1 & 7;
      if (7 < uVar1) {
        uVar1 = uVar1 & 0xfffffff8;
        do {
          uVar1 = uVar1 - 8;
        } while (uVar1 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      }
    }
  }
  return;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd48
#undef DAT_1000ce00
#undef DAT_1000ce08
#undef DAT_1000ce10
#undef DAT_1000ce18
#undef _DAT_1000ce08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ed0
 */

double recovered_10007ed0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


#undef DAT_1000cce0
#define DAT_1000cce0 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd08
#define DAT_1000cd08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000cd48
#define DAT_1000cd48 (*(double *)(((uintptr_t)pf_module_state + 0x99U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ef0
 */

double recovered_10007ef0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100035b0(param_1);
  if (DAT_1000cce0 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000cce8;
  }
  else if (param_1 - dVar1 <= DAT_1000cd48) {
    dVar1 = dVar1 + DAT_1000cd08;
  }
  return dVar1;
}

#undef DAT_1000cce0
#undef DAT_1000cce8
#undef DAT_1000cd08
#undef DAT_1000cd48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f40
 */

long recovered_10007f40(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto joined_r0x10007f9d;
    }
  }
  bVar7 = false;
joined_r0x10007f9d:
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
 * Address: 0x10008080
 */

void recovered_10008080(byte *in_RDI,undefined8 *in_RSI,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007f40(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1000ce30
#define DAT_1000ce30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181U)))
#undef DAT_1000f0d0
#define DAT_1000f0d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2421U)))
#define local_40 (*(byte * *)(frame + 16))
#define local_31 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

undefined8 recovered_10008090(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_10008430((uint)*pbVar8,(long *)&local_40);
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
          goto LAB_10008260;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_10008260:
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
LAB_1000840b:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000ce30 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_10008430((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_1000840b;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_1000840b;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_1000840b;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1000f0d0) goto LAB_100083e8;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_1000840b;
  }
LAB_100083e8:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_10008260;
}

#undef DAT_1000ce30
#undef DAT_1000f0d0
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008430
 */

byte * recovered_10008430(uint param_1,long *param_2)

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
    goto code_r0x10008559;
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
    goto code_r0x10008555;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto code_r0x100084a9;
  default:
    goto LAB_10008578;
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
code_r0x10008555:
    puVar6 = (uint *)((long)puVar1 + 2);
code_r0x10008559:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
code_r0x100084a9:
    puVar6 = puVar1 + 1;
    goto code_r0x10008559;
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
LAB_10008578:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085c0
 */

void recovered_100085c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085e0
 */

void recovered_100085e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


#undef DAT_1000d0e8
#define DAT_1000d0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x439U)))
#undef LAB_10008789
#define LAB_10008789 (*(uint8_t *)(0x10008789U))
#define local_c8 (*(undefined8 *)(frame + 24))
#define local_c0 (*(undefined4 *)(frame + 32))
#define local_a8 (*(code * *)(frame + 56))
#define local_a0 (*(undefined * *)(frame + 64))
#define local_98 (*(undefined1 * *)(frame + 72))
#define local_90 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 * *)(frame + 88))
#define local_70 (*(void * *)(frame + 112))
#define local_60 (*(undefined8 *)(frame + 128))
#define local_58 (*(void * *)(frame + 136))
#define local_48 (*(undefined8 *)(frame + 152))
#define local_40 (*(int *)(frame + 160))
#define local_3c (*(short *)(frame + 164))
#define local_32 (*(undefined2 *)(frame + 174))
#define uStack_68 (*(ulong *)(frame + 120))
#define uStack_50 (*(undefined8 *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008600
 */

undefined8 *
recovered_10008600(void *param_1,undefined8 *in_R8,undefined4 in_XMM1_Da,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa,undefined4 in_XMM1_Db)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 224) + -8);
  local_88 = (undefined1 *)&local_c8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_a8 = recovered_10007120;
  local_a0 = &DAT_1000d0e8;
  local_90 = &LAB_10008789;
  recovered_100076a0(&local_c8);
  if (param_1 != (void *)0x0) {
    local_32 = 2;
    local_70 = (void *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_c0 = 1;
    uVar1 = recovered_1000a110(param_1,(long *)&local_70,in_R8,in_XMM1_Da,in_XMM2_Qa,in_XMM3_Qa,
                               in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,in_XMM1_Db);
    if ((char)uVar1 == '\0') {
      cVar4 = '\0';
    }
    else {
      local_c0 = 2;
      uVar2 = recovered_1000a4d0((long)local_70,uStack_68,&local_58,(uint3 *)&local_32);
      cVar4 = (char)uVar2;
    }
    uStack_68 = 0;
    recovered_100071d0(local_70);
    if (((cVar4 != '\0') && (local_3c == 2)) && (local_40 != 0)) {
      local_c0 = 3;
      puVar3 = recovered_10007170(0x28);
      puVar3[3] = 0;
      recovered_100071d0((void *)0x0);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      puVar3[2] = local_48;
      local_58 = (void *)0x0;
      local_48 = 0;
      *(short *)((long)puVar3 + 0x1c) = local_3c;
      *(int *)(puVar3 + 3) = local_40;
      puVar3[4] = 0;
      goto LAB_10008757;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_10008757:
  uStack_50 = 0;
  recovered_100071d0(local_58);
  recovered_100076c0(&local_c8);
  return puVar3;
}

#undef DAT_1000d0e8
#undef LAB_10008789
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_32
#undef uStack_68
#undef uStack_50

/* Recovered track generator; Pooka's Free Software License. */
long * recovered_10008810(uint frequency,uint duration,long waveform,undefined8 side) {
 struct track { short *samples; unsigned long count,capacity; uint rate; ushort channels; unsigned long mixer; };
 const char *wave=(const char *)waveform,*channel=(const char *)(uintptr_t)side;
 if((int)(frequency|duration)<0||!wave||!channel)return 0;
 const char *waves[3]={"square","sine","saw"},*channels[3]={"left","right","both"};
 int kind=-1,mode=-1;
 for(int k=0;k<3;++k){unsigned i=0;while(wave[i]&&wave[i]==waves[k][i])++i;if(wave[i]==waves[k][i])kind=k;}
 for(int k=0;k<3;++k){unsigned i=0;while(channel[i]&&channel[i]==channels[k][i])++i;if(channel[i]==channels[k][i])mode=k;}
 if(kind<0||mode<0)return 0;
 struct track *out=(struct track *)recovered_10007170(sizeof(struct track));
 if(!out)return 0;
 out->samples=0;out->count=out->capacity=0;out->rate=44100;out->channels=2;out->mixer=0;
 unsigned long frames=(unsigned long)((long double)duration*44100.0L/1000.0L+0.5L);
 if(!frames)return (long *)out;
 out->samples=(short *)recovered_10007170(frames*4);
 if(!out->samples){recovered_100071d0(out);return 0;}
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
 * Address: 0x10008ff0
 */

undefined8 recovered_10008ff0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  long lVar3;

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined2 *)((long)param_2 + 0x14) = 0;
    if ((((param_1 != (undefined8 *)0x0) && (lVar3 = param_1[1], lVar3 != 0)) &&
        (iVar2 = *(int *)(param_1 + 3), iVar2 != 0)) &&
       (sVar1 = *(short *)((long)param_1 + 0x1c), sVar1 != 0)) {
      *param_2 = *param_1;
      param_2[1] = lVar3;
      *(int *)(param_2 + 2) = iVar2;
      *(short *)((long)param_2 + 0x14) = sVar1;
      return CONCAT71((int7)((ulong)lVar3 >> 8),1);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009050
 */

undefined4
recovered_10009050(undefined8 *param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 == 0 || param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = recovered_10009080(param_2,param_1,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                             in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return uVar1;
}


#undef DAT_1000d104
#define DAT_1000d104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x455U)))
#undef LAB_10009233
#define LAB_10009233 (*(uint8_t *)(0x10009233U))
#define lStack_48 (*(long *)(frame + 184))
#define local_e8 (*(undefined8 *)(frame + 24))
#define local_e0 (*(undefined4 *)(frame + 32))
#define local_c8 (*(code * *)(frame + 56))
#define local_c0 (*(undefined * *)(frame + 64))
#define local_b8 (*(undefined1 * *)(frame + 72))
#define local_b0 (*(undefined1 * *)(frame + 80))
#define local_a8 (*(undefined1 * *)(frame + 88))
#define local_90 (*(uint * *)(frame + 112))
#define local_88 (*(bool *)(frame + 120))
#define local_80 (*(undefined8 *)(frame + 128))
#define local_70 (*(undefined8 *)(frame + 144))
#define local_68 (*(undefined1 *)(frame + 152))
#define local_64 (*(undefined4 *)(frame + 156))
#define local_60 (*(undefined1 *)(frame + 160))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined1 *)(frame + 168))
#define local_50 (*(void * *)(frame + 176))
#define local_40 (*(undefined8 *)(frame + 192))
#define local_38 (*(undefined8 *)(frame + 200))
#define puStack_78 (*(uint * *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009080
 */

undefined4
recovered_10009080(long param_1,undefined8 *param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *puVar2;
  long lVar3;
  undefined4 uVar4;

  local_b8 = (undefined1 *)((long)(uintptr_t)(frame + 256) + -8);
  local_a8 = (undefined1 *)&local_e8;
  local_c8 = recovered_10007120;
  local_c0 = &DAT_1000d104;
  local_b0 = &LAB_10009233;
  recovered_100076a0(&local_e8);
  if (param_1 == 0) {
    uVar4 = 0;
    goto LAB_10009213;
  }
  local_50 = (void *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_e0 = 1;
  local_38 = param_1;
  uVar1 = recovered_1000b630(param_2,&local_50);
  if ((char)uVar1 == '\0') {
LAB_100091dc:
    uVar4 = 0;
  }
  else {
    local_90 = (uint *)0x0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 10;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0x20;
    local_88 = false;
    local_80 = 0;
    puStack_78 = (uint *)0x0;
    local_e0 = 2;
    puVar2 = recovered_10005f20(local_38,((uintptr_t)pf_module_state + 0x3adU),in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    local_88 = puVar2 != (uint *)0x0;
    local_80 = 0;
    local_70 = 0;
    local_90 = puVar2;
    puStack_78 = puVar2;
    if (puVar2 == (uint *)0x0) goto LAB_100091dc;
    if ((lStack_48 < 0) || (local_50 == (void *)0x0 && lStack_48 != 0)) {
      local_88 = false;
      uVar4 = 0;
    }
    else {
      local_e0 = 3;
      local_38 = lStack_48;
      lVar3 = recovered_100067a0((long)local_50,1,lStack_48,puVar2,in_R8);
      local_88 = lVar3 == local_38;
      uVar4 = (undefined4)CONCAT71((int7)((ulong)puVar2 >> 8),local_88);
      if (local_90 == (uint *)0x0) goto LAB_100091dc;
    }
    local_38 = CONCAT44(PF_PART4(local_38, 4),uVar4);
    local_e0 = 4;
    recovered_100063a0((int *)local_90);
    uVar4 = (undefined4)local_38;
  }
  lStack_48 = 0;
  recovered_100071d0(local_50);
LAB_10009213:
  recovered_100076c0(&local_e8);
  return uVar4;
}

#undef DAT_1000d104
#undef LAB_10009233
#undef lStack_48
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_80
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_40
#undef local_38
#undef puStack_78

/* Recovered stereo mixing, interpolation and saturation; Pooka's Free Software License. */
uint recovered_100092e0(void *destination,void *source,long offset) {
 struct track {short *samples;unsigned long count,capacity;uint rate;ushort channels;unsigned long mixer;};
 struct track *out=(struct track *)destination,*in=(struct track *)source;

 if(!out||!in||offset<0||out->channels!=2||in->channels!=2||!out->rate||!in->rate)return 0;
 unsigned long frames=out->count/2,input_frames=in->count/2;
 if(!frames||!input_frames)return 1;
 long double position=(long double)out->rate*(long double)offset/1000.0L;
 if(position>=9223372036854775807.0L)return 1;
 unsigned long first=(unsigned long)(position+0.5L);
 if(first>=frames)return 1;
 double ratio=(double)in->rate/(double)out->rate;
 double extent=(double)input_frames/ratio;
 unsigned long count=(unsigned long)extent;
 if((double)count<extent)++count;
 if(count>frames-first)count=frames-first;
 for(unsigned long i=0;i<count;++i){
  double pos=(double)i*ratio;
  for(unsigned channel=0;channel<2;++channel){
   double added=0.0;
   if(pos>=0.0&&pos<(double)input_frames){
    unsigned long a=(unsigned long)pos,b=a+1<input_frames?a+1:input_frames-1;
    double left=in->samples[a*2+channel];
    added=((double)in->samples[b*2+channel]-left)*(pos-(double)a)+left;
   }
   double value=(double)out->samples[(first+i)*2+channel]+added;
   out->samples[(first+i)*2+channel]=value<=-32768.0?-32768:value>=32767.0?32767:(short)(long)(value+(value>=0.0?0.5:-0.5));
  }
 }
 out->mixer=0;
 return 1;
}


/* Native millisecond slice semantics; Pooka's Free Software License. */
ulong recovered_100097a0(long *opaque,ulong start,ulong end) {
 struct track { short *samples; unsigned long count,capacity; uint rate; ushort channels; unsigned long mixer; };
 struct track *track=(struct track *)opaque;
 if(!track||(long)start<0||(long)end<0||start>end||!track->rate||!track->channels)return 0;
 unsigned long frames=track->count/track->channels;
 long double first=(long double)track->rate*(long double)start/1000.0L;
 long double last=(long double)track->rate*(long double)end/1000.0L;
 unsigned long a=first>=9223372036854775807.0L?0x7fffffffffffffffUL:(unsigned long)(first+0.5L);
 unsigned long b=last>=9223372036854775807.0L?0x7fffffffffffffffUL:(unsigned long)(last+0.5L);
 if(a>frames)a=frames;
 if(b>frames)b=frames;
 if(b<a)b=a;
 unsigned long count=(b-a)*track->channels;
 short *samples=count?(short *)recovered_10007170(count*2):0;
 if(count&&!samples)return 0;
 for(unsigned long i=0;i<count;++i)samples[i]=track->samples[a*track->channels+i];
 recovered_100071d0(track->samples);
 track->samples=samples;track->count=track->capacity=count;track->mixer=0;
 return 1;
}


#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#define lStack_30 (*(long *)(frame + 32))
#define local_40 (*(long *)(frame + 16))
#define local_38 (*(long *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 40))
#define local_24 (*(undefined2 *)(frame + 44))
#define local_20 (*(double *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a30
 */

undefined8 recovered_10009a30(double param_1,long *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  undefined7 extraout_var = 0;
  ulong uVar3;
  undefined8 uVar4;

  if (param_2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = param_1;
    bVar2 = recovered_10007a10(param_1);
    uVar4 = 0;
    if ((0.0 < local_20) && ((int)CONCAT71(extraout_var,bVar2) != 0)) {
      uVar4 = 1;
      if (((local_20 != DAT_1000cce8) || (NAN(local_20) || NAN(DAT_1000cce8))) &&
         ((uVar3 = (ulong)*(ushort *)((long)param_2 + 0x1c), uVar3 != 0 &&
          (uVar1 = param_2[1], uVar3 <= uVar1)))) {
        if (uVar1 >> 0x20 == 0) {
          uVar1 = uVar1 & 0xffffffff;
        }
        recovered_10009b00(local_20,&local_40,param_2,uVar1 / uVar3);
        param_2[1] = 0;
        recovered_100071d0((void *)*param_2);
        *param_2 = local_40;
        param_2[1] = local_38;
        param_2[2] = lStack_30;
        *(undefined4 *)(param_2 + 3) = local_28;
        *(undefined2 *)((long)param_2 + 0x1c) = local_24;
        recovered_100071d0((void *)0x0);
        param_2[4] = 0;
      }
    }
  }
  return uVar4;
}

#undef DAT_1000cce8
#undef lStack_30
#undef local_40
#undef local_38
#undef local_28
#undef local_24
#undef local_20

/* Native linear resampling semantics; Pooka's Free Software License. */
undefined8 * recovered_10009b00(double ratio,undefined8 *opaque,long *source,long requested) {
 struct decoded {short *samples;unsigned long count,capacity;uint rate;ushort channels;};
 struct decoded *out=(struct decoded *)opaque,*in=(struct decoded *)source;
 unsigned long frames=(unsigned long)requested,count=frames*in->channels;
 out->samples=0;out->count=out->capacity=0;out->rate=in->rate;out->channels=in->channels;
 if(count){out->samples=(short *)recovered_10007170(count*2);if(!out->samples)return opaque;}
 out->count=out->capacity=count;
 unsigned long old_frames=in->channels?in->count/in->channels:0;
 for(unsigned long frame=0;frame<frames;++frame){
  double position=(double)frame*ratio;
  for(unsigned channel=0;channel<in->channels;++channel){
   double value=0.0;
   if(ratio>0.0&&in->rate&&position>=0.0&&position<(double)old_frames){
    unsigned long a=(unsigned long)position,b=a+1<old_frames?a+1:old_frames-1;
    double first=in->samples[a*in->channels+channel];
    value=((double)in->samples[b*in->channels+channel]-first)*(position-(double)a)+first;
   }
   out->samples[frame*in->channels+channel]=value<= -32768.0?-32768:value>=32767.0?32767:(short)(long)(value+(value>=0.0?0.5:-0.5));
  }
 }
 return opaque;
}


#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cec0
#define DAT_1000cec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_1000ced0
#define DAT_1000ced0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef UNK_1000ced8
#define UNK_1000ced8 (*(double *)(((uintptr_t)pf_module_state + 0x229U)))
#undef dRam000000001000ced8
#define dRam000000001000ced8 (*(double *)(((uintptr_t)pf_module_state + 0x229U)))
#define uStack_30 (*(undefined8 *)(frame + 32))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 40))
#define local_24 (*(undefined2 *)(frame + 44))
#define local_20 (*(double *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009f80(double param_1,undefined8 *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  ulong uVar2;
  longlong lVar3;
  ulong uVar4;
  undefined8 uVar5;
  double value;
  uint128 auVar6;

  if (param_2 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    local_20 = param_1;
    bVar1 = recovered_10007a10(param_1);
    uVar5 = 0;
    if ((0.0 < local_20) && ((int)CONCAT71(extraout_var,bVar1) != 0)) {
      uVar5 = 1;
      if (((local_20 != DAT_1000cce8) || (NAN(local_20) || NAN(DAT_1000cce8))) &&
         ((uVar4 = (ulong)*(ushort *)((long)param_2 + 0x1c), uVar4 != 0 &&
          (uVar2 = param_2[1], uVar4 <= uVar2)))) {
        if (uVar2 >> 0x20 == 0) {
          uVar2 = uVar2 & 0xffffffff;
        }
        uVar2 = uVar2 / uVar4;
        PF_PART4(auVar6, 8) = (int)(uVar2 >> 0x20);
        PF_PART8(auVar6, 0) = uVar2;
        PF_PART4(auVar6, 12) = PF_PART4(DAT_1000cec0, 4);
        value = (double)uVar2 / local_20;
        if (value <= 0.0) {
          lVar3 = 0;
        }
        else {
          lVar3 = recovered_10003940(value);
        }
        recovered_10009b00(local_20,&local_40,param_2,lVar3);
        param_2[1] = 0;
        recovered_100071d0((void *)*param_2);
        *param_2 = local_40;
        param_2[1] = local_38;
        param_2[2] = uStack_30;
        *(undefined4 *)(param_2 + 3) = local_28;
        *(undefined2 *)((long)param_2 + 0x1c) = local_24;
        recovered_100071d0((void *)0x0);
        param_2[4] = 0;
      }
    }
  }
  return uVar5;
}

#undef DAT_1000cce8
#undef DAT_1000cec0
#undef DAT_1000ced0
#undef UNK_1000ced8
#undef dRam000000001000ced8
#undef uStack_30
#undef local_40
#undef local_38
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a090
 */

undefined8 recovered_1000a090(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0a0
 */

undefined8 recovered_1000a0a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0b0
 */

undefined8 recovered_1000a0b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0c0
 */

void recovered_1000a0c0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  recovered_100071d0((void *)*param_1);
  recovered_100071d0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a100
 */

void recovered_1000a100(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000d12c
#define DAT_1000d12c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47dU)))
#undef LAB_1000a443
#define LAB_1000a443 (*(uint8_t *)(0x1000a443U))
#define piStack_68 (*(int * *)(frame + 136))
#define uStack_58 (*(undefined8 *)(frame + 152))
#define uStack_48 (*(undefined8 *)(frame + 168))
#define local_d8 (*(undefined8 *)(frame + 24))
#define local_d0 (*(undefined4 *)(frame + 32))
#define local_b8 (*(code * *)(frame + 56))
#define local_b0 (*(undefined * *)(frame + 64))
#define local_a8 (*(undefined1 * *)(frame + 72))
#define local_a0 (*(undefined1 * *)(frame + 80))
#define local_98 (*(undefined1 * *)(frame + 88))
#define local_80 (*(int * *)(frame + 112))
#define local_78 (*(undefined1 *)(frame + 120))
#define local_70 (*(ulong *)(frame + 128))
#define local_60 (*(undefined8 *)(frame + 144))
#define local_50 (*(undefined8 *)(frame + 160))
#define local_40 (*(ulong *)(frame + 176))
#define local_38 (*(long * *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a110
 */

ulong recovered_1000a110(void *param_1,long *param_2,undefined8 *in_R8,undefined4 in_XMM1_Da,
                        undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                        undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa,
                        undefined4 in_XMM1_Db)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;

  local_a8 = (undefined1 *)((long)(uintptr_t)(frame + 240) + -8);
  local_98 = (undefined1 *)&local_d8;
  local_b8 = recovered_10007120;
  local_b0 = &DAT_1000d12c;
  local_a0 = &LAB_1000a443;
  recovered_100076a0(&local_d8);
  if (param_2 != (long *)0x0 && param_1 != (void *)0x0) {
    local_80 = (int *)0x0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_78 = 0;
    local_70 = 0;
    piStack_68 = (int *)0x0;
    local_d0 = 1;
    local_38 = param_2;
    local_80 = recovered_10005f20((long)param_1,((uintptr_t)pf_module_state + 0x3b0U),in_R8,CONCAT44(in_XMM1_Db,in_XMM1_Da),
                                  in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa)
    ;
    local_78 = local_80 != (int *)0x0;
    local_70 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    piStack_68 = local_80;
    if ((bool)local_78) {
      local_d0 = 2;
      uVar4 = recovered_10006930(local_80,0,2);
      local_78 = (int)uVar4 == 0;
      if (local_80 != (int *)0x0) {
        local_d0 = 3;
        uVar5 = recovered_100069b0((long)local_80);
        if ((long)uVar5 < 0) {
          local_78 = 0;
LAB_1000a264:
          plVar8 = (long *)0x0;
          if (local_80 == (int *)0x0) goto LAB_1000a423;
        }
        else {
          local_78 = 1;
          if (uVar5 == 0) goto LAB_1000a264;
          local_40 = uVar5;
          if (local_80 == (int *)0x0) {
            local_78 = false;
          }
          else {
            local_d0 = 4;
            uVar4 = recovered_10006930(local_80,0,0);
            local_78 = (int)uVar4 == 0;
          }
          uVar5 = local_38[1];
          uVar10 = local_40;
          plVar8 = local_38;
          if (local_40 < uVar5) {
            local_38[1] = local_40;
          }
          else if (uVar5 < local_40) {
            if ((ulong)local_38[2] < local_40) {
              local_d0 = 5;
              param_1 = recovered_10007170(local_40);
              plVar8 = local_38;
              uVar10 = local_40;
              pointer = (void *)*local_38;
              uVar5 = local_38[1];
              if (uVar5 != 0) {
                uVar6 = 0;
                if ((3 < uVar5) && (0x1f < (ulong)((long)param_1 - (long)pointer))) {
                  if (uVar5 < 0x20) {
                    uVar7 = 0;
                  }
                  else {
                    uVar6 = uVar5 & 0xffffffffffffffe0;
                    uVar7 = 0;
                    do {
                      uVar4 = ((undefined8 *)((long)pointer + uVar7))[1];
                      puVar1 = (undefined8 *)((long)pointer + uVar7 + 0x10);
                      uVar2 = *puVar1;
                      uVar3 = puVar1[1];
                      *(undefined8 *)((long)param_1 + uVar7) =
                           *(undefined8 *)((long)pointer + uVar7);
                      ((undefined8 *)((long)param_1 + uVar7))[1] = uVar4;
                      puVar1 = (undefined8 *)((long)param_1 + uVar7 + 0x10);
                      *puVar1 = uVar2;
                      puVar1[1] = uVar3;
                      uVar7 = uVar7 + 0x20;
                    } while (uVar6 != uVar7);
                    if (uVar5 == uVar6) goto LAB_1000a389;
                    uVar7 = uVar6;
                    if ((uVar5 & 0x1c) == 0) goto LAB_1000a335;
                  }
                  uVar6 = uVar5 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)((long)param_1 + uVar7) = *(undefined4 *)((long)pointer + uVar7);
                    uVar7 = uVar7 + 4;
                  } while (uVar6 != uVar7);
                  if (uVar5 == uVar6) goto LAB_1000a389;
                }
LAB_1000a335:
                uVar9 = uVar5 & 3;
                uVar7 = uVar6;
                if (uVar9 != 0) {
                  do {
                    in_R8 = (undefined8 *)(ulong)*(byte *)((long)pointer + uVar7);
                    *(byte *)((long)param_1 + uVar7) = *(byte *)((long)pointer + uVar7);
                    uVar7 = uVar7 + 1;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                if (uVar6 - uVar5 < 0xfffffffffffffffd) {
                  do {
                    *(undefined1 *)((long)param_1 + uVar7) = *(undefined1 *)((long)pointer + uVar7);
                    *(undefined1 *)((long)param_1 + uVar7 + 1) =
                         *(undefined1 *)((long)pointer + uVar7 + 1);
                    *(undefined1 *)((long)param_1 + uVar7 + 2) =
                         *(undefined1 *)((long)pointer + uVar7 + 2);
                    *(undefined1 *)((long)param_1 + uVar7 + 3) =
                         *(undefined1 *)((long)pointer + uVar7 + 3);
                    uVar7 = uVar7 + 4;
                  } while (uVar5 != uVar7);
                }
              }
LAB_1000a389:
              recovered_100071d0(pointer);
              *plVar8 = (long)param_1;
              plVar8[2] = uVar10;
              uVar5 = plVar8[1];
            }
            while (uVar5 < uVar10) {
              *(undefined1 *)(*plVar8 + uVar5) = 0;
              uVar5 = plVar8[1] + 1;
              plVar8[1] = uVar5;
            }
          }
          if (*plVar8 == 0 || local_80 == (int *)0x0) {
            plVar8 = (long *)0x0;
            local_70 = 0;
          }
          else {
            local_d0 = 6;
            local_70 = recovered_10006470(*plVar8,1,uVar10,local_80,in_R8);
            plVar8 = (long *)CONCAT71((int7)((ulong)param_1 >> 8),local_70 == local_40);
          }
          local_78 = SUB81(plVar8,0);
          if (local_80 == (int *)0x0) goto LAB_1000a421;
        }
        local_d0 = 7;
        local_38 = plVar8;
        recovered_100063a0(local_80);
        plVar8 = local_38;
        goto LAB_1000a423;
      }
    }
  }
LAB_1000a421:
  plVar8 = (long *)0x0;
LAB_1000a423:
  recovered_100076c0(&local_d8);
  return (ulong)plVar8 & 0xffffffff;
}

#undef DAT_1000d12c
#undef LAB_1000a443
#undef piStack_68
#undef uStack_58
#undef uStack_48
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_60
#undef local_50
#undef local_40
#undef local_38

#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd08
#define DAT_1000cd08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000cef0
#define DAT_1000cef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000d062
#define DAT_1000d062 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b3U)))
#undef DAT_1000d067
#define DAT_1000d067 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b8U)))
#undef DAT_1000d06c
#define DAT_1000d06c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bdU)))
#undef DAT_1000d071
#define DAT_1000d071 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_1000d148
#define DAT_1000d148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x499U)))
#undef LAB_1000ac8c
#define LAB_1000ac8c (*(uint8_t *)(0x1000ac8cU))
#define local_148 (*(uint3 * *)(frame + 24))
#define local_140 (*(ulong *)(frame + 32))
#define local_138 (*(ulong *)(frame + 40))
#define local_130 (*(ulong *)(frame + 48))
#define local_128 (*(double *)(frame + 56))
#define local_120 (*(ulong *)(frame + 64))
#define local_118 (*(undefined8 *)(frame + 72))
#define local_110 (*(undefined4 *)(frame + 80))
#define local_f8 (*(code * *)(frame + 104))
#define local_f0 (*(undefined * *)(frame + 112))
#define local_e8 (*(undefined1 * *)(frame + 120))
#define local_e0 (*(undefined1 * *)(frame + 128))
#define local_d8 (*(undefined1 * *)(frame + 136))
#define local_bc (*(uint *)(frame + 164))
#define local_b8 (*(uint3 * *)(frame + 168))
#define local_b0 (*(void ** *)(frame + 176))
#define local_a8 (*(void * *)(frame + 184))
#define local_98 (*(void * *)(frame + 200))
#define local_90 (*(int *)(frame + 208))
#define local_8c (*(short *)(frame + 212))
#define local_88 (*(uint3 * *)(frame + 216))
#define local_80 (*(ulong *)(frame + 224))
#define local_74 (*(uint *)(frame + 236))
#define local_70 (*(uint3 * *)(frame + 240))
#define local_68 (*(ulong *)(frame + 248))
#define local_60 (*(long *)(frame + 256))
#define local_58 (*(uint3 * *)(frame + 264))
#define local_50 (*(undefined8 *)(frame + 272))
#define local_48 (*(undefined8 *)(frame + 280))
#define local_40 (*(uint3 * *)(frame + 288))
#define local_38 (*(undefined8 *)(frame + 296))
#define pvStack_a0 (*(void * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4d0
 */

undefined8 recovered_1000a4d0(long param_1,ulong param_2,void **param_3,uint3 *param_4)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  void **ppvVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint3 *puVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  undefined2 uVar13;
  uint3 *puVar14;
  uint3 *in_R8;
  undefined8 uVar15;
  ulong uVar16;
  uint3 *puVar17;
  double dVar18;

  local_e8 = (undefined1 *)((long)(uintptr_t)(frame + 352) + -8);
  local_d8 = (undefined1 *)&local_148;
  local_f8 = recovered_10007120;
  local_f0 = &DAT_1000d148;
  local_e0 = &LAB_1000ac8c;
  recovered_100076a0(&local_118);
  uVar15 = 0;
  if (((param_2 < 0xc) || (param_1 == 0)) || (param_3 == (void **)0x0)) goto LAB_1000a59a;
  local_110 = 0xffffffff;
  iVar5 = recovered_10002710((ulong *)param_1,(ulong *)&DAT_1000d062,4);
  if (iVar5 == 0) {
    local_110 = 0xffffffff;
    iVar6 = recovered_10002710((ulong *)(param_1 + 8),(ulong *)&DAT_1000d067,4);
    iVar5 = 0;
    uVar15 = 0;
    if (iVar6 != 0) goto LAB_1000a59a;
    if (param_2 < 0x14) {
      bVar11 = 1;
      local_58 = (uint3 *)0x0;
      local_50 = (ulong)PF_PART4(local_50, 4) << 0x20;
      uVar16 = 0;
      puVar14 = (uint3 *)0x0;
      in_R8 = (uint3 *)0x0;
    }
    else {
      lVar10 = 0xc;
      local_38 = (uint3 *)0x0;
      uVar16 = 0x14;
      local_88 = (uint3 *)0x0;
      local_50 = (ulong)PF_PART4(local_50, 4) << 0x20;
      local_58 = (uint3 *)0x0;
      local_48 = 0;
      local_60 = 0;
      local_40 = (uint3 *)0x0;
      local_b0 = param_3;
      local_70 = param_4;
      local_68 = param_2;
      do {
        uVar8 = *(uint *)(param_1 + 4 + lVar10);
        uVar12 = uVar16 + uVar8;
        if (local_68 < uVar12) goto LAB_1000a569;
        local_110 = 0xffffffff;
        iVar5 = recovered_10002710((ulong *)(lVar10 + param_1),(ulong *)&DAT_1000d06c,4);
        if (iVar5 == 0) {
          if (uVar8 < 0x10) goto LAB_1000a569;
          uVar3 = *(ushort *)(param_1 + uVar16);
          local_38 = (uint3 *)(ulong)*(ushort *)(param_1 + 2 + uVar16);
          local_88 = (uint3 *)(ulong)*(uint *)(param_1 + 4 + uVar16);
          uVar1 = *(ushort *)(param_1 + 0xe + uVar16);
          if ((uVar3 == 0xfffe) &&
             (((uVar8 < 0x28 || (*(ushort *)(param_1 + 0x10 + uVar16) < 0x16)) ||
              (uVar3 = *(ushort *)(param_1 + 0x18 + uVar16), (uVar3 & 0xfffd) != 1))))
          goto LAB_1000a569;
          local_50 = CONCAT44(PF_PART4(local_50, 4),(uint)uVar1);
          if (uVar3 == 1) {
            uVar7 = uVar1 - 8;
            if ((uVar7 & 0xffe7) != 0) goto LAB_1000a569;
            local_60 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
            local_40 = (uint3 *)CONCAT62((uint6)(ushort)(uVar7 >> 0x10),1);
          }
          else {
            if (uVar3 != 3) goto LAB_1000a569;
            local_60 = 1;
            local_40 = (uint3 *)0x3;
            if ((uVar1 != 0x20) && (uVar1 != 0x40)) goto LAB_1000a569;
          }
        }
        else {
          local_110 = 0xffffffff;
          iVar5 = recovered_10002710((ulong *)(lVar10 + param_1),(ulong *)&DAT_1000d071,4);
          if (iVar5 == 0 && local_58 == (uint3 *)0x0) {
            local_58 = (uint3 *)(uVar16 + param_1);
            local_48 = (ulong)uVar8;
          }
        }
        lVar10 = uVar12 + (uVar8 & 1);
        uVar16 = uVar12 + (uVar8 & 1) + 8;
      } while (uVar16 <= local_68);
      bVar11 = (byte)local_60 ^ 1;
      iVar5 = (int)local_88;
      uVar16 = local_48;
      param_3 = local_b0;
      puVar14 = local_38;
      in_R8 = local_40;
      param_4 = local_70;
    }
    uVar15 = 0;
    if (((((bVar11 & 1) != 0) || (local_58 == (uint3 *)0x0)) || (uVar16 == 0)) ||
       (((short)puVar14 == 0 || (iVar5 == 0)))) goto LAB_1000a59a;
    uVar15 = 0;
    if ((ushort)local_50 < 8) goto LAB_1000a59a;
    local_48 = CONCAT44(PF_PART4(local_48, 4),(uint)local_50) & 0xffffffff0000ffff;
    local_50 = (ulong)(((uint)local_50 & 0xffff) >> 3);
    local_b8 = (uint3 *)((ulong)puVar14 & 0xffff);
    uVar12 = (long)local_b8 * local_50;
    if ((uVar12 == 0) || (uVar16 < uVar12)) goto LAB_1000a59a;
    local_74 = (uint)puVar14;
    if ((ushort)*param_4 != 0) {
      local_74 = (uint)(ushort)*param_4;
    }
    if ((short)local_74 != 0) {
      if (uVar16 >> 0x20 == 0) {
        uVar16 = uVar16 & 0xffffffff;
      }
      local_140 = uVar16 / uVar12;
      local_a8 = (void *)0x0;
      pvStack_a0 = (void *)0x0;
      local_98 = (void *)0x0;
      local_70 = (uint3 *)(ulong)(local_74 & 0xffff);
      local_110 = 1;
      local_120 = uVar12;
      local_b0 = param_3;
      local_90 = iVar5;
      local_8c = (short)local_74;
      local_40 = in_R8;
      local_38 = puVar14;
      recovered_1000b000((long *)&local_a8,local_140 * (long)local_70);
      local_60 = 0;
      local_130 = 0;
      if (1 < (ushort)local_38) {
        local_130 = local_50;
      }
      local_128 = (double)(int)local_b8;
      local_bc = (int)local_38 - 1;
      local_138 = (ulong)(uint)((int)local_70 * 2);
      local_68 = CONCAT44(PF_PART4(local_68, 4),(uint)(ushort)local_40);
      uVar12 = 0;
      uVar16 = local_130;
      puVar14 = local_58;
      do {
        local_40 = (uint3 *)(uVar12 * local_120 + (long)local_58);
        local_148 = puVar14;
        local_80 = uVar12;
        if ((short)local_74 == 2) {
          local_110 = 4;
          local_38 = (uint3 *)(uintptr_t)pf_double_bits((double)recovered_1000b210(local_40,(int)local_68,(ushort)local_48,uVar16,
                                                 (undefined8 *)in_R8));
          local_110 = 5;
          puVar14 = (uint3 *)(uintptr_t)pf_double_bits((double)recovered_1000b210((uint3 *)((long)local_40 + local_130),(int)local_68,
                                                (ushort)local_48,uVar16,(undefined8 *)in_R8));
          uVar4 = 0x8000;
          if (DAT_1000cd08 < pf_bits_double((uintptr_t)local_38)) {
            uVar4 = 0x7fff;
            if (pf_bits_double((uintptr_t)local_38) < DAT_1000cce8) {
              dVar18 = pf_bits_double((uintptr_t)local_38) *
                       *(double *)(&DAT_1000cef0 + (ulong)(pf_bits_double((uintptr_t)local_38) < 0.0) * 8);
              local_110 = 6;
              local_38 = puVar14;
              lVar10 = recovered_100042b0(dVar18);
              uVar4 = (undefined2)lVar10;
              puVar14 = local_38;
            }
          }
          uVar13 = 0x8000;
          *(undefined2 *)((long)local_a8 + local_80 * 4) = uVar4;
          if ((DAT_1000cd08 < pf_bits_double((uintptr_t)puVar14)) && (uVar13 = 0x7fff, pf_bits_double((uintptr_t)puVar14) < DAT_1000cce8))
          {
            local_110 = 7;
            lVar10 = recovered_100042b0(pf_bits_double((uintptr_t)puVar14) *
                                        *(double *)
                                         (&DAT_1000cef0 + (ulong)(pf_bits_double((uintptr_t)puVar14) < 0.0) * 8));
            uVar13 = (undefined2)lVar10;
          }
          *(undefined2 *)((long)local_a8 + local_80 * 4 + 2) = uVar13;
        }
        else if ((int)local_70 == 1) {
          puVar17 = (uint3 *)0x0;
          puVar9 = local_b8;
          do {
            local_110 = 3;
            local_88 = puVar14;
            local_40 = puVar9;
            local_38 = puVar17;
            dVar18 = recovered_1000b210(puVar14,(int)local_68,(ushort)local_48,uVar16,
                                        (undefined8 *)in_R8);
            puVar17 = (uint3 *)(uintptr_t)pf_double_bits((pf_bits_double((uintptr_t)local_38) + dVar18));
            puVar14 = (uint3 *)((long)local_88 + local_50);
            puVar9 = (uint3 *)((long)local_40 + -1);
          } while (puVar9 != (uint3 *)0x0);
          dVar18 = pf_bits_double((uintptr_t)puVar17) / local_128;
          uVar4 = 0x8000;
          if ((DAT_1000cd08 < dVar18) && (uVar4 = 0x7fff, dVar18 < DAT_1000cce8)) {
            local_110 = 2;
            lVar10 = recovered_100042b0(dVar18 * *(double *)
                                                  (&DAT_1000cef0 + (ulong)(dVar18 < 0.0) * 8));
            uVar4 = (undefined2)lVar10;
          }
          *(undefined2 *)((long)local_a8 + local_80 * 2) = uVar4;
        }
        else {
          puVar14 = (uint3 *)0x0;
          do {
            uVar8 = local_bc;
            if (puVar14 < local_b8) {
              uVar8 = (uint)puVar14;
            }
            local_110 = 8;
            local_38 = puVar14;
            dVar18 = recovered_1000b210((uint3 *)((uVar8 & 0xffff) * local_50 + (long)local_40),
                                        (int)local_68,(ushort)local_48,puVar14,(undefined8 *)in_R8);
            uVar4 = 0x8000;
            if ((DAT_1000cd08 < dVar18) && (uVar4 = 0x7fff, dVar18 < DAT_1000cce8)) {
              local_110 = 9;
              lVar10 = recovered_100042b0(dVar18 * *(double *)
                                                    (&DAT_1000cef0 + (ulong)(dVar18 < 0.0) * 8));
              uVar4 = (undefined2)lVar10;
            }
            *(undefined2 *)((long)local_a8 + (long)local_38 * 2 + local_60) = uVar4;
            puVar14 = (uint3 *)((long)local_38 + 1);
          } while (local_70 != puVar14);
        }
        ppvVar2 = local_b0;
        uVar12 = local_80 + 1;
        puVar14 = (uint3 *)((long)local_148 + local_120);
        local_60 = local_60 + local_138;
        uVar16 = local_138;
      } while (uVar12 < local_140);
      if (&local_a8 != local_b0) {
        local_b0[1] = (void *)0x0;
        recovered_100071d0(*local_b0);
        *ppvVar2 = local_a8;
        ppvVar2[1] = pvStack_a0;
        ppvVar2[2] = local_98;
        local_a8 = (void *)0x0;
        local_98 = (void *)0x0;
      }
      *(short *)((long)ppvVar2 + 0x1c) = local_8c;
      *(int *)(ppvVar2 + 3) = local_90;
      pvStack_a0 = (void *)0x0;
      recovered_100071d0(local_a8);
      uVar15 = 1;
      goto LAB_1000a59a;
    }
  }
LAB_1000a569:
  uVar15 = 0;
LAB_1000a59a:
  recovered_100076c0(&local_118);
  return uVar15;
}

#undef DAT_1000cce8
#undef DAT_1000cd08
#undef DAT_1000cef0
#undef DAT_1000d062
#undef DAT_1000d067
#undef DAT_1000d06c
#undef DAT_1000d071
#undef DAT_1000d148
#undef LAB_1000ac8c
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef pvStack_a0

#undef DAT_1000d160
#define DAT_1000d160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b1U)))
#undef LAB_1000ada7
#define LAB_1000ada7 (*(uint8_t *)(0x1000ada7U))
#define local_70 (*(code * *)(frame + 64))
#define local_68 (*(undefined * *)(frame + 72))
#define local_60 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 96))
#define auStack_98 (*(undefined1 (*)[8])(frame + 24))
#define local_38 (*(long * *)(frame + 120))
#define local_90 (*(undefined8 *)(frame + 32))
#define local_88 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad10
 */

void recovered_1000ad10(long *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = (int *)*param_1;
  local_70 = recovered_10007120;
  local_68 = &DAT_1000d160;
  local_58 = &LAB_1000ada7;
  recovered_100076a0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100063a0(piVar1);
    *local_38 = 0;
    param_1 = local_38;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  recovered_100076c0(&local_90);
  return;
}

#undef DAT_1000d160
#undef LAB_1000ada7
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_98
#undef local_38
#undef local_90
#undef local_88

#undef DAT_1000d170
#define DAT_1000d170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c1U)))
#undef LAB_1000ae77
#define LAB_1000ae77 (*(uint8_t *)(0x1000ae77U))
#define local_90 (*(undefined8 *)(frame + 32))
#define auStack_98 (*(undefined1 (*)[8])(frame + 24))
#define local_88 (*(undefined4 *)(frame + 40))
#define local_70 (*(code * *)(frame + 64))
#define local_68 (*(undefined * *)(frame + 72))
#define local_60 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 96))
#define local_38 (*(long * *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ade0
 */

void recovered_1000ade0(long *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = (int *)*param_1;
  local_70 = recovered_10007120;
  local_68 = &DAT_1000d170;
  local_58 = &LAB_1000ae77;
  recovered_100076a0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100063a0(piVar1);
    *local_38 = 0;
    param_1 = local_38;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  recovered_100076c0(&local_90);
  return;
}

#undef DAT_1000d170
#undef LAB_1000ae77
#undef local_90
#undef auStack_98
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aeb0
 */

void recovered_1000aeb0(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_2 <= (ulong)param_1[2]) {
    return;
  }
  pvVar6 = recovered_10007170(param_2);
  pointer = (void *)*param_1;
  uVar2 = param_1[1];
  if (uVar2 == 0) goto LAB_1000afdf;
  if ((ulong)((long)pvVar6 - (long)pointer) < 0x20 || uVar2 < 4) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 0x20) {
      uVar8 = 0;
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      uVar8 = 0;
      do {
        uVar3 = ((undefined8 *)((long)pointer + uVar8))[1];
        puVar1 = (undefined8 *)((long)pointer + uVar8 + 0x10);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)((long)pvVar6 + uVar8) = *(undefined8 *)((long)pointer + uVar8);
        ((undefined8 *)((long)pvVar6 + uVar8))[1] = uVar3;
        puVar1 = (undefined8 *)((long)pvVar6 + uVar8 + 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar8 = uVar8 + 0x20;
      } while (uVar7 != uVar8);
      if (uVar2 == uVar7) goto LAB_1000afdf;
      uVar8 = uVar7;
      if ((uVar2 & 0x1c) == 0) goto LAB_1000af75;
    }
    uVar7 = uVar2 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar6 + uVar8) = *(undefined4 *)((long)pointer + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar7 != uVar8);
    if (uVar2 == uVar7) goto LAB_1000afdf;
  }
LAB_1000af75:
  uVar9 = uVar2 & 3;
  uVar8 = uVar7;
  if (uVar9 != 0) {
    do {
      *(undefined1 *)((long)pvVar6 + uVar8) = *(undefined1 *)((long)pointer + uVar8);
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (uVar7 - uVar2 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)pvVar6 + uVar8) = *(undefined1 *)((long)pointer + uVar8);
      *(undefined1 *)((long)pvVar6 + uVar8 + 1) = *(undefined1 *)((long)pointer + uVar8 + 1);
      *(undefined1 *)((long)pvVar6 + uVar8 + 2) = *(undefined1 *)((long)pointer + uVar8 + 2);
      *(undefined1 *)((long)pvVar6 + uVar8 + 3) = *(undefined1 *)((long)pointer + uVar8 + 3);
      uVar8 = uVar8 + 4;
    } while (uVar2 != uVar8);
  }
LAB_1000afdf:
  recovered_100071d0(pointer);
  *param_1 = pvVar6;
  param_1[2] = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b000
 */

void recovered_1000b000(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pointer;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  uVar9 = param_1[1];
  if (param_2 < uVar9) goto LAB_1000b014;
  if (param_2 <= uVar9) {
    return;
  }
  if ((ulong)param_1[2] < param_2) {
    pvVar8 = recovered_10007170(param_2 * 2);
    pointer = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 != 0) {
      if ((ulong)((long)pvVar8 - (long)pointer) < 0x20 || uVar9 < 4) {
        uVar11 = 0;
      }
      else {
        if (uVar9 < 0x10) {
          uVar10 = 0;
        }
        else {
          uVar11 = uVar9 & 0xfffffffffffffff0;
          uVar10 = 0;
          do {
            puVar3 = (undefined8 *)((long)pointer + uVar10 * 2);
            uVar5 = puVar3[1];
            puVar2 = (undefined8 *)((long)pointer + uVar10 * 2 + 0x10);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar8 + uVar10 * 2);
            *puVar2 = *puVar3;
            puVar2[1] = uVar5;
            puVar3 = (undefined8 *)((long)pvVar8 + uVar10 * 2 + 0x10);
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            uVar10 = uVar10 + 0x10;
          } while (uVar11 != uVar10);
          if (uVar9 == uVar11) goto LAB_1000b14f;
          uVar10 = uVar11;
          if ((uVar9 & 0xc) == 0) goto LAB_1000b0e6;
        }
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)((long)pvVar8 + uVar10 * 2) = *(undefined8 *)((long)pointer + uVar10 * 2);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000b14f;
      }
LAB_1000b0e6:
      uVar12 = uVar9 & 3;
      uVar10 = uVar11;
      if (uVar12 != 0) {
        do {
          *(undefined2 *)((long)pvVar8 + uVar10 * 2) = *(undefined2 *)((long)pointer + uVar10 * 2);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar11 - uVar9 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)((long)pvVar8 + uVar10 * 2) = *(undefined2 *)((long)pointer + uVar10 * 2);
          *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 2) =
               *(undefined2 *)((long)pointer + uVar10 * 2 + 2);
          *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 4) =
               *(undefined2 *)((long)pointer + uVar10 * 2 + 4);
          *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 6) =
               *(undefined2 *)((long)pointer + uVar10 * 2 + 6);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
      }
    }
LAB_1000b14f:
    recovered_100071d0(pointer);
    *param_1 = (long)pvVar8;
    param_1[2] = param_2;
    uVar9 = param_1[1];
  }
  uVar11 = param_2 - uVar9;
  if (param_2 < uVar9 || uVar11 == 0) {
    return;
  }
  lVar4 = *param_1;
  if (3 < uVar11) {
    if (uVar11 < 0x10) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar11 & 0xfffffffffffffff0;
      lVar1 = lVar4 + uVar9 * 2;
      uVar12 = 0;
      do {
        puVar3 = (undefined8 *)(lVar1 + uVar12 * 2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar1 + 0x10 + uVar12 * 2);
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar12 = uVar12 + 0x10;
      } while (uVar10 != uVar12);
      if (uVar11 == uVar10) goto LAB_1000b014;
      if ((uVar11 & 0xc) == 0) {
        uVar9 = uVar9 + uVar10;
        goto LAB_1000b1f0;
      }
    }
    uVar12 = uVar11 & 0xfffffffffffffffc;
    lVar1 = uVar9 * 2;
    uVar9 = uVar9 + uVar12;
    do {
      *(undefined8 *)(lVar4 + lVar1 + uVar10 * 2) = 0;
      uVar10 = uVar10 + 4;
    } while (uVar12 != uVar10);
    if (uVar11 == uVar12) goto LAB_1000b014;
  }
LAB_1000b1f0:
  do {
    *(undefined2 *)(lVar4 + uVar9 * 2) = 0;
    uVar9 = uVar9 + 1;
  } while (param_2 != uVar9);
LAB_1000b014:
  param_1[1] = param_2;
  return;
}


#undef DAT_1000cce8
#define DAT_1000cce8 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000cd08
#define DAT_1000cd08 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000cf08
#define DAT_1000cf08 (*(float *)(((uintptr_t)pf_module_state + 0x259U)))
#undef UNK_1000cf30
#define UNK_1000cf30 (*(double *)(((uintptr_t)pf_module_state + 0x281U)))
#undef UNK_1000cf38
#define UNK_1000cf38 (*(double *)(((uintptr_t)pf_module_state + 0x289U)))
#undef UNK_1000cf40
#define UNK_1000cf40 (*(double *)(((uintptr_t)pf_module_state + 0x291U)))
#undef UNK_1000cf48
#define UNK_1000cf48 (*(double *)(((uintptr_t)pf_module_state + 0x299U)))
#undef dRam000000001000cf30
#define dRam000000001000cf30 (*(double *)(((uintptr_t)pf_module_state + 0x281U)))
#undef dRam000000001000cf38
#define dRam000000001000cf38 (*(double *)(((uintptr_t)pf_module_state + 0x289U)))
#undef dRam000000001000cf40
#define dRam000000001000cf40 (*(double *)(((uintptr_t)pf_module_state + 0x291U)))
#undef dRam000000001000cf48
#define dRam000000001000cf48 (*(double *)(((uintptr_t)pf_module_state + 0x299U)))
#define local_18 (*(double *)(frame + 24))
#define local_c (*(float *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b210
 */

double recovered_1000b210(uint3 *param_1,int param_2,ushort param_3,undefined8 in_RCX,
                         undefined8 *in_R8)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;

  dVar2 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_18 = 0.0;
      recovered_10001120(&local_18,(undefined8 *)param_1,8,in_RCX,in_R8);
      dVar2 = DAT_1000cce8;
      if (local_18 <= DAT_1000cce8) {
        dVar2 = local_18;
      }
      dVar2 = (double)(-(ulong)(local_18 < DAT_1000cd08) & (ulong)DAT_1000cd08 |
                      ~-(ulong)(local_18 < DAT_1000cd08) & (ulong)dVar2);
    }
    else if (param_3 == 0x20) {
      local_c = 0.0;
      recovered_10001120((undefined8 *)&local_c,(undefined8 *)param_1,4,in_RCX,in_R8);
      if (local_c < DAT_1000cf08) {
        dVar2 = DAT_1000cd08;
      }
      else {
        dVar2 = DAT_1000cce8;
        if ((double)local_c <= DAT_1000cce8) {
          dVar2 = (double)local_c;
        }
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      dVar2 = (double)(int)((byte)*param_1 - 0x80) * dRam000000001000cf48;
      break;
    case 1:
      dVar2 = (double)(int)(short)*param_1 * dRam000000001000cf40;
      break;
    case 2:
      uVar1 = *param_1 - 0x1000000;
      if (-1 < *(char *)((long)param_1 + 2)) {
        uVar1 = (uint)*param_1;
      }
      dVar2 = (double)(int)uVar1 * dRam000000001000cf38;
      break;
    case 3:
      dVar2 = (double)*(int *)param_1 * dRam000000001000cf30;
    }
  }
  return dVar2;
}

#undef DAT_1000cce8
#undef DAT_1000cd08
#undef DAT_1000cf08
#undef UNK_1000cf30
#undef UNK_1000cf38
#undef UNK_1000cf40
#undef UNK_1000cf48
#undef dRam000000001000cf30
#undef dRam000000001000cf38
#undef dRam000000001000cf40
#undef dRam000000001000cf48
#undef local_18
#undef local_c

#define lStack_40 (*(long *)(frame + 32))
#define local_48 (*(void * *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b380
 */

void recovered_1000b380(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  uVar13 = param_3;
  if (param_2 == 0) {
    uVar13 = 0;
  }
  puVar8 = (undefined1 *)*param_1;
  if (puVar8 != (undefined1 *)0x0 && param_2 != 0) {
    uVar11 = param_2 - (long)puVar8;
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
        uVar12 = param_1[1] - uVar11;
        if (uVar13 < uVar12) {
          uVar12 = uVar13;
        }
        local_48 = (void *)0x0;
        lStack_40 = 0;
        local_38 = 0;
        recovered_1000b380((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = pvVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_100071d0(pvVar2);
        return;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 <= (ulong)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  if (uVar13 == 0) {
    if (*param_1 == 0) {
      puVar8 = recovered_10007170(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_1000b5a6;
  puVar8 = recovered_10007170(uVar13 + 1);
  *puVar8 = 0;
  pvVar2 = (void *)*param_1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar12 = 0;
    if ((3 < uVar11) && (0x1f < (ulong)((long)puVar8 - (long)pvVar2))) {
      if (uVar11 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar5 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)(puVar8 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          *(undefined8 *)((long)(puVar8 + uVar9) + 8) = uVar5;
          *(undefined8 *)(puVar8 + uVar9 + 0x10) = uVar6;
          *(undefined8 *)((long)(puVar8 + uVar9 + 0x10) + 8) = uVar7;
          uVar9 = uVar9 + 0x20;
        } while (uVar12 != uVar9);
        if (uVar11 == uVar12) goto LAB_1000b58f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_1000b525;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000b58f;
    }
LAB_1000b525:
    uVar10 = uVar11 & 3;
    uVar9 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar11 < 0xfffffffffffffffd) {
      do {
        puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        puVar8[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        puVar8[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        puVar8[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar11 != uVar9);
    }
  }
LAB_1000b58f:
  puVar8[uVar11] = 0;
  recovered_100071d0(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_1000b5a6:
  uVar11 = (ulong)((uint)uVar13 & 3);
  if (uVar13 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
      *(undefined1 *)(*param_1 + 1 + uVar12) = *(undefined1 *)(param_2 + 1 + uVar12);
      *(undefined1 *)(*param_1 + 2 + uVar12) = *(undefined1 *)(param_2 + 2 + uVar12);
      *(undefined1 *)(*param_1 + 3 + uVar12) = *(undefined1 *)(param_2 + 3 + uVar12);
      uVar12 = uVar12 + 4;
    } while ((uVar13 & 0xfffffffffffffffc) != uVar12);
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
    uVar12 = uVar12 + 1;
  }
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef lStack_40
#undef local_48
#undef local_38

#undef DAT_1000d062
#define DAT_1000d062 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b3U)))
#undef DAT_1000d066
#define DAT_1000d066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef DAT_1000d067
#define DAT_1000d067 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b8U)))
#undef DAT_1000d06b
#define DAT_1000d06b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bcU)))
#undef DAT_1000d06c
#define DAT_1000d06c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bdU)))
#undef DAT_1000d070
#define DAT_1000d070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c1U)))
#undef DAT_1000d071
#define DAT_1000d071 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_1000d075
#define DAT_1000d075 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_1000d180
#define DAT_1000d180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d1U)))
#undef LAB_1000bc45
#define LAB_1000bc45 (*(uint8_t *)(0x1000bc45U))
#define local_60 (*(void * *)(frame + 128))
#define local_58 (*(undefined8 * *)(frame + 136))
#define local_50 (*(ushort * *)(frame + 144))
#define local_48 (*(void * *)(frame + 152))
#define local_38 (*(undefined8 *)(frame + 168))
#define pvStack_40 (*(void * *)(frame + 160))
#define local_c8 (*(undefined8 *)(frame + 24))
#define local_c0 (*(undefined4 *)(frame + 32))
#define local_a8 (*(code * *)(frame + 56))
#define local_a0 (*(undefined * *)(frame + 64))
#define local_98 (*(undefined1 * *)(frame + 72))
#define local_90 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 * *)(frame + 88))
#define local_70 (*(void ** *)(frame + 112))
#define local_68 (*(ushort * *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b630
 */

ulong recovered_1000b630(undefined8 *param_1,void **param_2)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  ushort *puVar9;
  void *pvVar10;
  ushort *puVar11;
  ulong uVar12;
  void *pvVar13;
  void **ppvVar14;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 224) + -8);
  local_88 = (undefined1 *)&local_c8;
  local_a8 = recovered_10007120;
  local_a0 = &DAT_1000d180;
  local_90 = &LAB_1000bc45;
  recovered_100076a0(&local_c8);
  if ((param_2 != (void **)0x0) && (*(uint *)(param_1 + 3) != 0)) {
    uVar2 = *(ushort *)((long)param_1 + 0x1c);
    if ((ulong)uVar2 != 0) {
      uVar12 = param_1[1];
      uVar7 = uVar12;
      if (uVar12 >> 0x20 == 0) {
        uVar7 = uVar12 & 0xffffffff;
      }
      if ((uVar7 % (ulong)uVar2 == 0) && ((uVar12 & 0x7fffffffffffffff) >> 1 < 0x3ffffff7)) {
        lVar3 = (ulong)*(uint *)(param_1 + 3) * (ulong)((uint)uVar2 * 2);
        if (-1 < (short)uVar2 && (int)((ulong)lVar3 >> 0x20) == 0) {
          local_68 = (ushort *)CONCAT44(PF_PART4(local_68, 4),(int)lVar3);
          local_60 = (void *)CONCAT44(PF_PART4(local_60, 4),(uint)uVar2 * 2);
          local_48 = (void *)0x0;
          pvStack_40 = (void *)0x0;
          local_38 = (void *)0x0;
          local_c0 = 1;
          local_70 = param_2;
          local_58 = param_1;
          local_50 = (ushort *)(uVar12 * 2);
          recovered_1000aeb0(&local_48,(ulong)((ushort *)(uVar12 * 2) + 0x16));
          local_c0 = 2;
          recovered_1000c5d0((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000d062,
                             &DAT_1000d066);
          local_c0 = 3;
          recovered_1000bdb0((long *)&local_48,(int)local_50 + 0x24);
          local_c0 = 4;
          recovered_1000c5d0((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000d067,
                             &DAT_1000d06b);
          local_c0 = 5;
          recovered_1000c5d0((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000d06c,
                             &DAT_1000d070);
          local_c0 = 6;
          recovered_1000bdb0((long *)&local_48,0x10);
          local_c0 = 7;
          recovered_1000c310((long *)&local_48,1);
          local_c0 = 8;
          recovered_1000c310((long *)&local_48,(uint)*(ushort *)((long)local_58 + 0x1c));
          local_c0 = 9;
          recovered_1000bdb0((long *)&local_48,*(undefined4 *)(local_58 + 3));
          local_c0 = 10;
          recovered_1000bdb0((long *)&local_48,PF_PART4(local_68, 0));
          local_c0 = 0xb;
          recovered_1000c310((long *)&local_48,(uint)(ushort)local_60);
          local_c0 = 0xc;
          recovered_1000c310((long *)&local_48,0x10);
          local_c0 = 0xd;
          recovered_1000c5d0((long *)&local_48,(long)local_48 + (long)pvStack_40,&DAT_1000d071,
                             &DAT_1000d075);
          local_c0 = 0xe;
          recovered_1000bdb0((long *)&local_48,(int)local_50);
          ppvVar14 = local_70;
          if (local_58[1] != 0) {
            puVar9 = (ushort *)*local_58;
            puVar11 = puVar9 + local_58[1];
            local_68 = puVar11;
            do {
              local_58 = (undefined8 *)CONCAT44(PF_PART4(local_58, 4),(uint)*puVar9);
              if (pvStack_40 == local_38) {
                pvVar13 = (void *)((long)pvStack_40 * 2);
                if (pvStack_40 == (void *)0x0) {
                  pvVar13 = (void *)0x4;
                }
                if (pvStack_40 < pvVar13) {
                  local_c0 = 0xf;
                  local_60 = pvVar13;
                  local_50 = puVar9;
                  pvVar13 = recovered_10007170((ulong)pvVar13);
                  if (pvStack_40 != (void *)0x0) {
                    if (pvStack_40 < (void *)0x4) {
                      pvVar8 = (void *)0x0;
                    }
                    else {
                      pvVar8 = (void *)0x0;
                      if (0x1f < (ulong)((long)pvVar13 - (long)local_48)) {
                        if (pvStack_40 < (void *)0x20) {
                          pvVar10 = (void *)0x0;
                        }
                        else {
                          pvVar8 = (void *)((ulong)pvStack_40 & 0xffffffffffffffe0);
                          pvVar10 = (void *)0x0;
                          do {
                            uVar4 = ((undefined8 *)((long)local_48 + (long)pvVar10))[1];
                            puVar1 = (undefined8 *)((long)local_48 + 0x10 + (long)pvVar10);
                            uVar5 = *puVar1;
                            uVar6 = puVar1[1];
                            *(undefined8 *)((long)pvVar13 + (long)pvVar10) =
                                 *(undefined8 *)((long)local_48 + (long)pvVar10);
                            ((undefined8 *)((long)pvVar13 + (long)pvVar10))[1] = uVar4;
                            puVar1 = (undefined8 *)((long)pvVar13 + 0x10 + (long)pvVar10);
                            *puVar1 = uVar5;
                            puVar1[1] = uVar6;
                            pvVar10 = (void *)((long)pvVar10 + 0x20);
                          } while (pvVar8 != pvVar10);
                          if (pvStack_40 == pvVar8) goto LAB_1000ba7b;
                          pvVar10 = pvVar8;
                          if (((ulong)pvStack_40 & 0x1c) == 0) goto LAB_1000ba14;
                        }
                        pvVar8 = (void *)((ulong)pvStack_40 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)pvVar13 + (long)pvVar10) =
                               *(undefined4 *)((long)local_48 + (long)pvVar10);
                          pvVar10 = (void *)((long)pvVar10 + 4);
                        } while (pvVar8 != pvVar10);
                        if (pvStack_40 == pvVar8) goto LAB_1000ba7b;
                      }
                    }
LAB_1000ba14:
                    uVar12 = (ulong)pvStack_40 & 3;
                    pvVar10 = pvVar8;
                    if (uVar12 != 0) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 1);
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    if ((ulong)((long)pvVar8 - (long)pvStack_40) < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 1 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 1 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 2 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 2 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 3 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 3 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 4);
                      } while (pvStack_40 != pvVar10);
                    }
                  }
LAB_1000ba7b:
                  recovered_100071d0(local_48);
                  local_38 = local_60;
                  puVar9 = local_50;
                  puVar11 = local_68;
                  ppvVar14 = local_70;
                  local_48 = pvVar13;
                }
              }
              *(char *)((long)local_48 + (long)pvStack_40) = (char)local_58;
              pvStack_40 = (void *)((long)pvStack_40 + 1);
              if (pvStack_40 == local_38) {
                pvVar13 = (void *)((long)pvStack_40 * 2);
                if (pvStack_40 == (void *)0x0) {
                  pvVar13 = (void *)0x4;
                }
                if (pvStack_40 < pvVar13) {
                  local_c0 = 0x10;
                  local_60 = pvVar13;
                  local_50 = puVar9;
                  pvVar13 = recovered_10007170((ulong)pvVar13);
                  if (pvStack_40 != (void *)0x0) {
                    if (pvStack_40 < (void *)0x4) {
                      pvVar8 = (void *)0x0;
                    }
                    else {
                      pvVar8 = (void *)0x0;
                      if (0x1f < (ulong)((long)pvVar13 - (long)local_48)) {
                        if (pvStack_40 < (void *)0x20) {
                          pvVar10 = (void *)0x0;
                        }
                        else {
                          pvVar8 = (void *)((ulong)pvStack_40 & 0xffffffffffffffe0);
                          pvVar10 = (void *)0x0;
                          do {
                            uVar4 = ((undefined8 *)((long)local_48 + (long)pvVar10))[1];
                            puVar1 = (undefined8 *)((long)local_48 + 0x10 + (long)pvVar10);
                            uVar5 = *puVar1;
                            uVar6 = puVar1[1];
                            *(undefined8 *)((long)pvVar13 + (long)pvVar10) =
                                 *(undefined8 *)((long)local_48 + (long)pvVar10);
                            ((undefined8 *)((long)pvVar13 + (long)pvVar10))[1] = uVar4;
                            puVar1 = (undefined8 *)((long)pvVar13 + 0x10 + (long)pvVar10);
                            *puVar1 = uVar5;
                            puVar1[1] = uVar6;
                            pvVar10 = (void *)((long)pvVar10 + 0x20);
                          } while (pvVar8 != pvVar10);
                          if (pvStack_40 == pvVar8) goto LAB_1000b8fa;
                          pvVar10 = pvVar8;
                          if (((ulong)pvStack_40 & 0x1c) == 0) goto LAB_1000bb88;
                        }
                        pvVar8 = (void *)((ulong)pvStack_40 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)pvVar13 + (long)pvVar10) =
                               *(undefined4 *)((long)local_48 + (long)pvVar10);
                          pvVar10 = (void *)((long)pvVar10 + 4);
                        } while (pvVar8 != pvVar10);
                        if (pvStack_40 == pvVar8) goto LAB_1000b8fa;
                      }
                    }
LAB_1000bb88:
                    uVar12 = (ulong)pvStack_40 & 3;
                    pvVar10 = pvVar8;
                    if (uVar12 != 0) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 1);
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    if ((ulong)((long)pvVar8 - (long)pvStack_40) < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)((long)pvVar13 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 1 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 1 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 2 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 2 + (long)pvVar10);
                        *(undefined1 *)((long)pvVar13 + 3 + (long)pvVar10) =
                             *(undefined1 *)((long)local_48 + 3 + (long)pvVar10);
                        pvVar10 = (void *)((long)pvVar10 + 4);
                      } while (pvStack_40 != pvVar10);
                    }
                  }
LAB_1000b8fa:
                  recovered_100071d0(local_48);
                  local_38 = local_60;
                  puVar9 = local_50;
                  puVar11 = local_68;
                  ppvVar14 = local_70;
                  local_48 = pvVar13;
                }
              }
              param_2 = (void **)((ulong)local_58 & 0xffffffff);
              *(char *)((long)local_48 + (long)pvStack_40) = (char)((ulong)local_58 >> 8);
              pvStack_40 = (void *)((long)pvStack_40 + 1);
              puVar9 = puVar9 + 1;
            } while (puVar9 != puVar11);
          }
          if (&local_48 != ppvVar14) {
            ppvVar14[1] = (void *)0x0;
            recovered_100071d0(*ppvVar14);
            *ppvVar14 = local_48;
            ppvVar14[1] = pvStack_40;
            ppvVar14[2] = local_38;
            local_48 = (void *)0x0;
            local_38 = (void *)0x0;
          }
          pvStack_40 = (void *)0x0;
          recovered_100071d0(local_48);
          uVar12 = CONCAT71((int7)((ulong)param_2 >> 8),1);
          goto LAB_1000b6f6;
        }
      }
    }
  }
  uVar12 = 0;
LAB_1000b6f6:
  recovered_100076c0(&local_c8);
  return uVar12 & 0xffffffff;
}

#undef DAT_1000d062
#undef DAT_1000d066
#undef DAT_1000d067
#undef DAT_1000d06b
#undef DAT_1000d06c
#undef DAT_1000d070
#undef DAT_1000d071
#undef DAT_1000d075
#undef DAT_1000d180
#undef LAB_1000bc45
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_38
#undef pvStack_40
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68

#undef DAT_1000d1a4
#define DAT_1000d1a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f5U)))
#undef LAB_1000bd77
#define LAB_1000bd77 (*(uint8_t *)(0x1000bd77U))
#define local_70 (*(code * *)(frame + 64))
#define local_68 (*(undefined * *)(frame + 72))
#define local_60 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 96))
#define auStack_98 (*(undefined1 (*)[8])(frame + 24))
#define local_38 (*(long * *)(frame + 120))
#define local_90 (*(undefined8 *)(frame + 32))
#define local_88 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bce0
 */

void recovered_1000bce0(long *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_60 = (undefined1 *)((long)(uintptr_t)(frame + 176) + -8);
  local_50 = auStack_98;
  piVar1 = (int *)*param_1;
  local_70 = recovered_10007120;
  local_68 = &DAT_1000d1a4;
  local_58 = &LAB_1000bd77;
  recovered_100076a0(&local_90);
  if (piVar1 != (int *)0x0) {
    local_88 = 1;
    local_38 = param_1;
    recovered_100063a0(piVar1);
    *local_38 = 0;
    param_1 = local_38;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  recovered_100076c0(&local_90);
  return;
}

#undef DAT_1000d1a4
#undef LAB_1000bd77
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_98
#undef local_38
#undef local_90
#undef local_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdb0
 */

void recovered_1000bdb0(long *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10007170(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000beef;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000be85;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000beef;
        }
LAB_1000be85:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000beef:
      recovered_100071d0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)param_2;
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10007170(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000c03f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000bfd5;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000c03f;
        }
LAB_1000bfd5:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000c03f:
      recovered_100071d0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 8);
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10007170(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000c18f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000c125;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000c18f;
        }
LAB_1000c125:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000c18f:
      recovered_100071d0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 0x10);
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 != param_1[2]) goto LAB_1000c2ef;
  uVar11 = 4;
  if (uVar7 != 0) {
    uVar11 = uVar7 * 2;
  }
  if (uVar11 <= uVar7) goto LAB_1000c2ef;
  pvVar6 = recovered_10007170(uVar11);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = 0;
    if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
      if (uVar7 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1000c2df;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_1000c275;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1000c2df;
    }
LAB_1000c275:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1000c2df:
  recovered_100071d0(pvVar2);
  *param_1 = (long)pvVar6;
  param_1[2] = uVar11;
  uVar7 = param_1[1];
LAB_1000c2ef:
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c310
 */

void recovered_1000c310(long *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      pvVar6 = recovered_10007170(uVar11);
      pvVar2 = (void *)*param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
          if (uVar7 < 0x20) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar7 & 0xffffffffffffffe0;
            uVar9 = 0;
            do {
              uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
              puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
              ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
              puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              uVar9 = uVar9 + 0x20;
            } while (uVar8 != uVar9);
            if (uVar7 == uVar8) goto LAB_1000c44f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1000c3e5;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1000c44f;
        }
LAB_1000c3e5:
        uVar10 = uVar7 & 3;
        uVar9 = uVar8;
        if (uVar10 != 0) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (uVar8 - uVar7 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
            *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
            *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
            *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
            uVar9 = uVar9 + 4;
          } while (uVar7 != uVar9);
        }
      }
LAB_1000c44f:
      recovered_100071d0(pvVar2);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = (char)param_2;
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (uVar7 != param_1[2]) goto LAB_1000c5b2;
  uVar11 = 4;
  if (uVar7 != 0) {
    uVar11 = uVar7 * 2;
  }
  if (uVar11 <= uVar7) goto LAB_1000c5b2;
  pvVar6 = recovered_10007170(uVar11);
  pvVar2 = (void *)*param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = 0;
    if ((3 < uVar7) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
      if (uVar7 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)((long)pvVar6 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          ((undefined8 *)((long)pvVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)((long)pvVar6 + uVar9 + 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1000c59f;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_1000c535;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)pvVar6 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1000c59f;
    }
LAB_1000c535:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar6 + uVar9) = *(undefined1 *)((long)pvVar2 + uVar9);
        *(undefined1 *)((long)pvVar6 + uVar9 + 1) = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        *(undefined1 *)((long)pvVar6 + uVar9 + 2) = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        *(undefined1 *)((long)pvVar6 + uVar9 + 3) = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1000c59f:
  recovered_100071d0(pvVar2);
  *param_1 = (long)pvVar6;
  param_1[2] = uVar11;
  uVar7 = param_1[1];
LAB_1000c5b2:
  *(char *)(*param_1 + uVar7) = (char)((uint)param_2 >> 8);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5d0
 */

long recovered_1000c5d0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;

  lVar13 = *param_1;
  bVar17 = lVar13 == 0;
  if (bVar17) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - lVar13;
  }
  uVar16 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_1000c88d;
  uVar15 = (long)param_4 - (long)param_3;
  uVar12 = param_1[1];
  uVar6 = param_1[2];
  if (uVar6 < uVar12 + uVar15) {
    uVar8 = 4;
    if (uVar6 != 0) {
      uVar8 = uVar6;
    }
    do {
      uVar6 = uVar8;
      uVar8 = uVar6 * 2;
    } while (uVar6 < uVar12 + uVar15);
    pvVar5 = recovered_10007170(uVar6);
    pointer = (void *)*param_1;
    uVar12 = param_1[1];
    if (uVar12 != 0) {
      uVar8 = 0;
      if ((3 < uVar12) && (0x1f < (ulong)((long)pvVar5 - (long)pointer))) {
        if (uVar12 < 0x20) {
          uVar9 = 0;
        }
        else {
          uVar8 = uVar12 & 0xffffffffffffffe0;
          uVar9 = 0;
          do {
            uVar2 = ((undefined8 *)((long)pointer + uVar9))[1];
            puVar1 = (undefined8 *)((long)pointer + uVar9 + 0x10);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            *(undefined8 *)((long)pvVar5 + uVar9) = *(undefined8 *)((long)pointer + uVar9);
            ((undefined8 *)((long)pvVar5 + uVar9))[1] = uVar2;
            puVar1 = (undefined8 *)((long)pvVar5 + uVar9 + 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            uVar9 = uVar9 + 0x20;
          } while (uVar8 != uVar9);
          if (uVar12 == uVar8) goto LAB_1000c74f;
          uVar9 = uVar8;
          if ((uVar12 & 0x1c) == 0) goto LAB_1000c6e5;
        }
        uVar8 = uVar12 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar5 + uVar9) = *(undefined4 *)((long)pointer + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
        if (uVar12 == uVar8) goto LAB_1000c74f;
      }
LAB_1000c6e5:
      uVar11 = uVar12 & 3;
      uVar9 = uVar8;
      if (uVar11 != 0) {
        do {
          *(undefined1 *)((long)pvVar5 + uVar9) = *(undefined1 *)((long)pointer + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar8 - uVar12 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)((long)pvVar5 + uVar9) = *(undefined1 *)((long)pointer + uVar9);
          *(undefined1 *)((long)pvVar5 + uVar9 + 1) = *(undefined1 *)((long)pointer + uVar9 + 1);
          *(undefined1 *)((long)pvVar5 + uVar9 + 2) = *(undefined1 *)((long)pointer + uVar9 + 2);
          *(undefined1 *)((long)pvVar5 + uVar9 + 3) = *(undefined1 *)((long)pointer + uVar9 + 3);
          uVar9 = uVar9 + 4;
        } while (uVar12 != uVar9);
      }
    }
LAB_1000c74f:
    recovered_100071d0(pointer);
    *param_1 = (long)pvVar5;
    param_1[2] = uVar6;
    uVar12 = param_1[1];
  }
  if (uVar10 < uVar12) {
    uVar14 = (int)uVar12 - (int)uVar10 & 3;
    uVar8 = (ulong)uVar14;
    uVar6 = uVar12;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)(uVar15 + uVar6 + *param_1 + -1) = *(undefined1 *)((uVar6 - 1) + *param_1);
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar10 - uVar12 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar15 - 1) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -1 + uVar6);
        *(undefined1 *)((uVar15 - 2) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -2 + uVar6);
        *(undefined1 *)((uVar15 - 3) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -3 + uVar6);
        *(undefined1 *)(uVar15 + uVar6 + *param_1 + -4) = *(undefined1 *)((uVar6 - 4) + *param_1);
        uVar6 = uVar6 - 4;
      } while (uVar10 < uVar6);
    }
  }
  uVar6 = uVar10;
  for (uVar12 = uVar15 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)(*param_1 + uVar6) = *param_3;
    param_3 = param_3 + 1;
    uVar6 = uVar6 + 1;
  }
  if (uVar16 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar6) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar6) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar6) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar6) = param_3[3];
      param_3 = param_3 + 4;
      uVar6 = uVar6 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar15;
  lVar13 = *param_1;
  bVar17 = lVar13 == 0;
LAB_1000c88d:
  lVar7 = 0;
  if (!bVar17) {
    lVar7 = lVar13 + uVar10;
  }
  return lVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8b0
 */

void * recovered_1000c8b0(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;

  pvVar7 = (void *)*param_1;
  bVar21 = pvVar7 == (void *)0x0;
  if (bVar21) {
    uVar12 = param_1[1];
  }
  else {
    uVar12 = param_2 - (long)pvVar7 >> 1;
  }
  if (param_3 == param_4) goto LAB_1000cc02;
  uVar19 = (long)param_4 + (-2 - (long)param_3);
  uVar20 = uVar19 >> 1;
  uVar8 = param_1[1];
  uVar14 = param_1[2];
  uVar15 = uVar8 + uVar20 + 1;
  if (uVar14 < uVar15) {
    uVar8 = 4;
    if (uVar14 != 0) {
      uVar8 = uVar14;
    }
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 * 2;
    } while (uVar14 < uVar15);
    pvVar7 = recovered_10007170(uVar14 * 2);
    pvVar9 = (void *)*param_1;
    uVar8 = param_1[1];
    if (uVar8 != 0) {
      uVar15 = 0;
      if ((3 < uVar8) && (0x1f < (ulong)((long)pvVar7 - (long)pvVar9))) {
        if (uVar8 < 0x10) {
          uVar10 = 0;
        }
        else {
          uVar15 = uVar8 & 0xfffffffffffffff0;
          uVar10 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar9 + uVar10 * 2);
            uVar3 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar9 + uVar10 * 2 + 0x10);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar7 + uVar10 * 2);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            puVar1 = (undefined8 *)((long)pvVar7 + uVar10 * 2 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar10 = uVar10 + 0x10;
          } while (uVar15 != uVar10);
          if (uVar8 == uVar15) goto LAB_1000ca43;
          uVar10 = uVar15;
          if ((uVar8 & 0xc) == 0) goto LAB_1000c9d6;
        }
        uVar15 = uVar8 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)((long)pvVar7 + uVar10 * 2) = *(undefined8 *)((long)pvVar9 + uVar10 * 2);
          uVar10 = uVar10 + 4;
        } while (uVar15 != uVar10);
        if (uVar8 == uVar15) goto LAB_1000ca43;
      }
LAB_1000c9d6:
      uVar13 = uVar8 & 3;
      uVar10 = uVar15;
      if (uVar13 != 0) {
        do {
          *(undefined2 *)((long)pvVar7 + uVar10 * 2) = *(undefined2 *)((long)pvVar9 + uVar10 * 2);
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (uVar15 - uVar8 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)((long)pvVar7 + uVar10 * 2) = *(undefined2 *)((long)pvVar9 + uVar10 * 2);
          *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 2) =
               *(undefined2 *)((long)pvVar9 + uVar10 * 2 + 2);
          *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 4) =
               *(undefined2 *)((long)pvVar9 + uVar10 * 2 + 4);
          *(undefined2 *)((long)pvVar7 + uVar10 * 2 + 6) =
               *(undefined2 *)((long)pvVar9 + uVar10 * 2 + 6);
          uVar10 = uVar10 + 4;
        } while (uVar8 != uVar10);
      }
    }
LAB_1000ca43:
    recovered_100071d0(pvVar9);
    *param_1 = (long)pvVar7;
    param_1[2] = uVar14;
    uVar8 = param_1[1];
  }
  uVar14 = uVar8 - uVar12;
  if (uVar12 <= uVar8 && uVar14 != 0) {
    uVar15 = uVar8;
    if (3 < uVar14) {
      lVar16 = ~uVar12 + uVar8;
      uVar10 = (long)pvVar7 + (uVar19 & 0xfffffffffffffffe) + uVar8 * 2;
      uVar13 = (long)pvVar7 + uVar8 * 2 + -2;
      if ((uVar19 < 0xffffffffffffffe0 && -1 < lVar16) &&
          (uVar13 + lVar16 * -2 <= uVar13 && uVar10 + lVar16 * -2 <= uVar10)) {
        if (uVar14 < 0x10) {
          uVar10 = 0;
        }
        else {
          lVar16 = uVar8 * 2;
          uVar10 = uVar14 & 0xfffffffffffffff0;
          lVar6 = (uVar19 & 0xfffffffffffffffe) + lVar16;
          lVar17 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar16 + -0x20);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar16 + -0x10);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar6 + -0xe);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar1 = (undefined8 *)((long)pvVar7 + lVar17 * 2 + lVar6 + -0x1e);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            lVar17 = lVar17 + -0x10;
          } while (-lVar17 != uVar10);
          if (uVar14 == uVar10) goto LAB_1000cbb3;
          if ((uVar14 & 0xc) == 0) {
            uVar15 = uVar8 - uVar10;
            goto LAB_1000cb93;
          }
        }
        uVar13 = uVar14 & 0xfffffffffffffffc;
        uVar15 = uVar8 - uVar13;
        lVar16 = -uVar10;
        do {
          *(undefined8 *)((long)pvVar7 + lVar16 * 2 + uVar20 * 2 + uVar8 * 2 + -6) =
               *(undefined8 *)((long)pvVar7 + lVar16 * 2 + uVar8 * 2 + -8);
          lVar16 = lVar16 + -4;
        } while (-lVar16 != uVar13);
        if (uVar14 == uVar13) goto LAB_1000cbb3;
      }
    }
LAB_1000cb93:
    do {
      *(undefined2 *)((long)pvVar7 + uVar15 * 2 + uVar20 * 2) =
           *(undefined2 *)((long)pvVar7 + uVar15 * 2 + -2);
      uVar15 = uVar15 - 1;
    } while (uVar12 < uVar15);
  }
LAB_1000cbb3:
  uVar20 = uVar20 + 1;
  if ((uVar19 < 6) || ((long)pvVar7 + (uVar12 * 2 - (long)param_3) < 0x20)) {
    puVar18 = param_3;
    uVar14 = uVar12;
LAB_1000cbd2:
    puVar11 = (undefined2 *)((long)pvVar7 + uVar14 * 2);
    do {
      *puVar11 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar11 = puVar11 + 1;
    } while (puVar18 != param_4);
  }
  else if (uVar19 < 0x1e) {
    uVar15 = 0;
LAB_1000cc6a:
    uVar19 = uVar20 & 0xfffffffffffffffc;
    puVar18 = param_3 + uVar19;
    uVar14 = uVar12 + uVar19;
    do {
      *(undefined8 *)((long)pvVar7 + uVar15 * 2 + uVar12 * 2) = *(undefined8 *)(param_3 + uVar15);
      uVar15 = uVar15 + 4;
    } while (uVar19 != uVar15);
    if (uVar20 != uVar19) goto LAB_1000cbd2;
  }
  else {
    uVar15 = uVar20 & 0xfffffffffffffff0;
    uVar14 = 0;
    do {
      uVar3 = *(undefined8 *)((long)(param_3 + uVar14) + 8);
      uVar4 = *(undefined8 *)(param_3 + uVar14 + 8);
      uVar5 = *(undefined8 *)((long)(param_3 + uVar14 + 8) + 8);
      puVar1 = (undefined8 *)((long)pvVar7 + uVar14 * 2 + uVar12 * 2);
      *puVar1 = *(undefined8 *)(param_3 + uVar14);
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)pvVar7 + uVar14 * 2 + uVar12 * 2 + 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      uVar14 = uVar14 + 0x10;
    } while (uVar15 != uVar14);
    if (uVar20 != uVar15) {
      if ((uVar20 & 0xc) == 0) {
        uVar14 = uVar12 + uVar15;
        puVar18 = param_3 + uVar15;
        goto LAB_1000cbd2;
      }
      goto LAB_1000cc6a;
    }
  }
  param_1[1] = uVar8 + uVar20;
  bVar21 = pvVar7 == (void *)0x0;
LAB_1000cc02:
  pvVar9 = (void *)0x0;
  if (!bVar21) {
    pvVar9 = (void *)((long)pvVar7 + uVar12 * 2);
  }
  return pvVar9;
}


/* Duration rounding import, replaced by C; Pooka's Free Software License. */
long long recovered_1000ccaf(long double value) {
 if(!(value<9223372036854775808.0L)||value< -9223372036854775808.0L)return (long long)0x8000000000000000ULL;
 return (long long)(value<0.0L?value-0.5L:value+0.5L);
}

