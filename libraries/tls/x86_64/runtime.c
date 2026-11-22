/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f0f0
#define DAT_1000f0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004c0
 */

void recovered_100004c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f0f0 = 0;
  recovered_100004e0();
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
#define DAT_1000f0f0 (*(char *)(((uintptr_t)pf_module_state + 0x17d1U)))
#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17d9U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17e1U)))
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
#define local_28 (*(ulong *)(frame + 1064))
#define local_438 (*(ulong (*)[130])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100004e0(void)

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
                if (*puVar2 <= uVar7) goto LAB_10000573;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar8 = 0;
LAB_10000573:
            local_438[uVar8 * 2 + 2] = uVar7;
            local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
            uVar9 = uVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
LAB_100006be:
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
        if (lVar12 == 0) goto LAB_10000786;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000076f;
        recovered_10005690(puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (DAT_1000f0f8 != 0) goto LAB_100008c5;
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
              if (*puVar2 <= uVar7) goto LAB_10000635;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar8 = 0;
LAB_10000635:
          local_438[uVar8 * 2 + 2] = uVar7;
          local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
          uVar9 = uVar9 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    goto LAB_100006be;
  }
LAB_10000786:
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
LAB_100008c5:
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
#undef local_28
#undef local_438

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17d9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000950
 */

ulong recovered_10000950(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004e0();
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
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17d9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009a0
 */

long recovered_100009a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100004e0();
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
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17d9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e0
 */

ulong recovered_100009e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004e0();
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
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17d9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a20
 */

long recovered_10000a20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_100004e0();
  lVar2 = 0;
  for (plVar1 = DAT_1000f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1000f0f8

#undef DAT_1000f0f8
#define DAT_1000f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17d9U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17e1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a50
 */

ulong * recovered_10000a50(long param_1)

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
  recovered_100004e0();
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
 * Address: 0x10000b30
 */

ulong recovered_10000b30(ulong param_1,uint param_2)

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
 * Address: 0x10000b70
 */

ulong recovered_10000b70(ulong param_1,uint param_2)

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
 * Address: 0x10000bb0
 */

long recovered_10000bb0(long param_1,uint param_2)

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
 * Address: 0x10000c00
 */

ulong recovered_10000c00(ulong param_1,ulong param_2)

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
 * Address: 0x10000ca0
 */

long recovered_10000ca0(ulong param_1,ulong param_2)

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
 * Address: 0x10000d10
 */

ulong recovered_10000d10(ulong param_1,ulong param_2)

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
 * Address: 0x10000de0
 */

long recovered_10000de0(ulong param_1,ulong param_2)

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
 * Address: 0x10000e70
 */

void recovered_10000e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e90
 */

int recovered_10000e90(int param_1)

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
void * recovered_10000ea0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000ef0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000f40(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f90
 */

void * recovered_10000f90(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *in_R8;
  undefined7 uVar8;
  ulong uVar9;
  ulong uVar10;

  pvVar5 = destination;
  if (count < 0x10) {
LAB_10000faf:
    if (count == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)source ^ (uint)destination) & 7) == 0) {
    if (((ulong)destination & 7) == 0) {
LAB_1000119e:
      puVar7 = destination;
    }
    else {
      puVar7 = (undefined8 *)((long)destination + 1);
      *(undefined1 *)destination = *(undefined1 *)source;
      uVar6 = count - 1;
      uVar8 = (undefined7)((ulong)in_R8 >> 8);
      in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
      if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
        source = (void *)((long)source + 1);
        count = uVar6;
      }
      else {
        puVar7 = (undefined8 *)((long)destination + 2);
        *(undefined1 *)((long)destination + 1) = *(undefined1 *)((long)source + 1);
        uVar6 = count - 2;
        in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
        if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
          source = (void *)((long)source + 2);
          count = uVar6;
        }
        else {
          puVar7 = (undefined8 *)((long)destination + 3);
          *(undefined1 *)((long)destination + 2) = *(undefined1 *)((long)source + 2);
          uVar6 = count - 3;
          in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
          if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
            source = (void *)((long)source + 3);
            count = uVar6;
          }
          else {
            puVar7 = (undefined8 *)((long)destination + 4);
            *(undefined1 *)((long)destination + 3) = *(undefined1 *)((long)source + 3);
            uVar6 = count - 4;
            in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
            if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
              source = (void *)((long)source + 4);
              count = uVar6;
            }
            else {
              puVar7 = (undefined8 *)((long)destination + 5);
              *(undefined1 *)((long)destination + 4) = *(undefined1 *)((long)source + 4);
              uVar6 = count - 5;
              in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
              if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                source = (void *)((long)source + 5);
                count = uVar6;
              }
              else {
                puVar7 = (undefined8 *)((long)destination + 6);
                *(undefined1 *)((long)destination + 5) = *(undefined1 *)((long)source + 5);
                uVar6 = count - 6;
                in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                  source = (void *)((long)source + 6);
                  count = uVar6;
                }
                else {
                  puVar7 = (undefined8 *)((long)destination + 7);
                  *(undefined1 *)((long)destination + 6) = *(undefined1 *)((long)source + 6);
                  uVar6 = count - 7;
                  in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                  if (((ulong)puVar7 & 7) != 0 && uVar6 != 0) {
                    puVar1 = (undefined1 *)((long)source + 7);
                    source = (void *)((long)source + 8);
                    *(undefined1 *)((long)destination + 7) = *puVar1;
                    count = count - 8;
                    destination = (undefined8 *)((long)destination + 8);
                    goto LAB_1000119e;
                  }
                  source = (void *)((long)source + 7);
                  count = uVar6;
                }
              }
            }
          }
        }
      }
    }
    if (count < 0x20) {
      in_R8 = source;
    }
    else {
      uVar6 = count - 0x20;
      uVar9 = count;
      if ((uVar6 & 0x20) == 0) {
        *puVar7 = *(undefined8 *)source;
        puVar7[1] = *(undefined8 *)((long)source + 8);
        puVar7[2] = *(undefined8 *)((long)source + 0x10);
        puVar7[3] = *(undefined8 *)((long)source + 0x18);
        puVar7 = puVar7 + 4;
        source = (void *)((long)source + 0x20);
        uVar9 = uVar6;
        in_R8 = source;
      }
      count = uVar6;
      if (0x1f < uVar6) {
        do {
          *puVar7 = *(undefined8 *)source;
          puVar7[1] = *(undefined8 *)((long)source + 8);
          puVar7[2] = *(undefined8 *)((long)source + 0x10);
          puVar7[3] = *(undefined8 *)((long)source + 0x18);
          puVar7[4] = *(undefined8 *)((long)source + 0x20);
          puVar7[5] = *(undefined8 *)((long)source + 0x28);
          puVar7[6] = *(undefined8 *)((long)source + 0x30);
          puVar7[7] = *(undefined8 *)((long)source + 0x38);
          puVar7 = puVar7 + 8;
          source = (void *)((long)source + 0x40);
          uVar9 = uVar9 - 0x40;
          count = uVar9;
          in_R8 = source;
        } while (0x1f < uVar9);
      }
    }
    if (count < 8) {
      source = in_R8;
      destination = puVar7;
    }
    else {
      if ((0x27 < count - 8) && (0x1f < (ulong)((long)puVar7 - (long)in_R8))) {
        uVar6 = (count - 8 >> 3) + 1;
        uVar9 = uVar6 & 0xfffffffffffffffc;
        source = in_R8 + uVar9;
        destination = puVar7 + uVar9;
        count = count + uVar9 * -8;
        uVar10 = 0;
        do {
          uVar2 = (in_R8 + uVar10)[1];
          uVar3 = in_R8[uVar10 + 2];
          uVar4 = (in_R8 + uVar10 + 2)[1];
          puVar7[uVar10] = in_R8[uVar10];
          (puVar7 + uVar10)[1] = uVar2;
          puVar7[uVar10 + 2] = uVar3;
          (puVar7 + uVar10 + 2)[1] = uVar4;
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        in_R8 = source;
        puVar7 = destination;
        if (uVar6 == uVar9) goto LAB_10000faf;
      }
      do {
        source = in_R8 + 1;
        *puVar7 = *in_R8;
        destination = puVar7 + 1;
        count = count - 8;
        in_R8 = source;
        puVar7 = destination;
      } while (7 < count);
    }
    goto LAB_10000faf;
  }
  uVar6 = count;
  if ((3 < count) && (0x1f < (ulong)((long)destination - (long)source))) {
    if (count < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = count & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)source + uVar6))[1];
        puVar7 = (undefined8 *)((long)source + uVar6 + 0x10);
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        *(undefined8 *)((long)destination + uVar6) = *(undefined8 *)((long)source + uVar6);
        ((undefined8 *)((long)destination + uVar6))[1] = uVar2;
        puVar7 = (undefined8 *)((long)destination + uVar6 + 0x10);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar9 != uVar6);
      if (count == uVar9) {
        return pvVar5;
      }
      if ((count & 0x1c) == 0) {
        source = (void *)((long)source + uVar9);
        destination = (void *)((long)destination + uVar9);
        uVar6 = (ulong)((uint)count & 0x1f);
        goto LAB_100011c0;
      }
    }
    uVar10 = count & 0xfffffffffffffffc;
    uVar6 = (ulong)((uint)count & 3);
    do {
      *(undefined4 *)((long)destination + uVar9) = *(undefined4 *)((long)source + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    destination = (undefined8 *)((long)destination + uVar10);
    source = (undefined8 *)((long)source + uVar10);
    if (count == uVar10) {
      return pvVar5;
    }
  }
LAB_100011c0:
  uVar9 = uVar6 - 1;
  if ((uVar6 & 7) != 0) {
    uVar10 = 0;
    do {
      *(undefined1 *)((long)destination + uVar10) = *(undefined1 *)((long)source + uVar10);
      uVar10 = uVar10 + 1;
    } while ((uVar6 & 7) != uVar10);
    uVar6 = uVar6 - uVar10;
    destination = (void *)((long)destination + uVar10);
    source = (void *)((long)source + uVar10);
  }
  if (6 < uVar9) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)destination + uVar9) = *(undefined1 *)((long)source + uVar9);
      *(undefined1 *)((long)destination + uVar9 + 1) = *(undefined1 *)((long)source + uVar9 + 1);
      *(undefined1 *)((long)destination + uVar9 + 2) = *(undefined1 *)((long)source + uVar9 + 2);
      *(undefined1 *)((long)destination + uVar9 + 3) = *(undefined1 *)((long)source + uVar9 + 3);
      *(undefined1 *)((long)destination + uVar9 + 4) = *(undefined1 *)((long)source + uVar9 + 4);
      *(undefined1 *)((long)destination + uVar9 + 5) = *(undefined1 *)((long)source + uVar9 + 5);
      *(undefined1 *)((long)destination + uVar9 + 6) = *(undefined1 *)((long)source + uVar9 + 6);
      *(undefined1 *)((long)destination + uVar9 + 7) = *(undefined1 *)((long)source + uVar9 + 7);
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
  }
  return pvVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d0
 */

void * recovered_100013d0(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *in_R8;
  ulong uVar12;
  undefined7 uVar14;
  ulong uVar13;
  ulong in_R9;
  bool bVar15;
  void *in_R10;
  undefined7 uVar17;
  ulong uVar16;
  bool bVar18;

  pvVar6 = destination;
  if (count == 0 || destination == source) {
    return pvVar6;
  }
  if ((destination < source) || (pvVar7 = (void *)((long)source + count), pvVar7 <= destination)) {
    if ((0xf < count) && ((((uint)source ^ (uint)destination) & 7) == 0)) {
      if (((ulong)destination & 7) == 0) {
LAB_1000176a:
        puVar8 = destination;
      }
      else {
        puVar8 = (undefined8 *)((long)destination + 1);
        *(undefined1 *)destination = *(undefined1 *)source;
        uVar11 = count - 1;
        uVar14 = (undefined7)((ulong)in_R8 >> 8);
        in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
          source = (void *)((long)source + 1);
          count = uVar11;
        }
        else {
          puVar8 = (undefined8 *)((long)destination + 2);
          *(undefined1 *)((long)destination + 1) = *(undefined1 *)((long)source + 1);
          uVar11 = count - 2;
          in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
            source = (void *)((long)source + 2);
            count = uVar11;
          }
          else {
            puVar8 = (undefined8 *)((long)destination + 3);
            *(undefined1 *)((long)destination + 2) = *(undefined1 *)((long)source + 2);
            uVar11 = count - 3;
            in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
              source = (void *)((long)source + 3);
              count = uVar11;
            }
            else {
              puVar8 = (undefined8 *)((long)destination + 4);
              *(undefined1 *)((long)destination + 3) = *(undefined1 *)((long)source + 3);
              uVar11 = count - 4;
              in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                source = (void *)((long)source + 4);
                count = uVar11;
              }
              else {
                puVar8 = (undefined8 *)((long)destination + 5);
                *(undefined1 *)((long)destination + 4) = *(undefined1 *)((long)source + 4);
                uVar11 = count - 5;
                in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                  source = (void *)((long)source + 5);
                  count = uVar11;
                }
                else {
                  puVar8 = (undefined8 *)((long)destination + 6);
                  *(undefined1 *)((long)destination + 5) = *(undefined1 *)((long)source + 5);
                  uVar11 = count - 6;
                  in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                    source = (void *)((long)source + 6);
                    count = uVar11;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)destination + 7);
                    *(undefined1 *)((long)destination + 6) = *(undefined1 *)((long)source + 6);
                    uVar11 = count - 7;
                    in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar11 != 0) {
                      puVar1 = (undefined1 *)((long)source + 7);
                      source = (void *)((long)source + 8);
                      *(undefined1 *)((long)destination + 7) = *puVar1;
                      count = count - 8;
                      destination = (undefined8 *)((long)destination + 8);
                      goto LAB_1000176a;
                    }
                    source = (void *)((long)source + 7);
                    count = uVar11;
                  }
                }
              }
            }
          }
        }
      }
      if (count < 0x20) {
        in_R8 = source;
      }
      else {
        uVar11 = count - 0x20;
        uVar16 = count;
        if ((uVar11 & 0x20) == 0) {
          *puVar8 = *(undefined8 *)source;
          puVar8[1] = *(undefined8 *)((long)source + 8);
          puVar8[2] = *(undefined8 *)((long)source + 0x10);
          puVar8[3] = *(undefined8 *)((long)source + 0x18);
          puVar8 = puVar8 + 4;
          source = (void *)((long)source + 0x20);
          uVar16 = uVar11;
          in_R8 = source;
        }
        count = uVar11;
        if (0x1f < uVar11) {
          count = uVar16;
          do {
            *puVar8 = *(undefined8 *)source;
            puVar8[1] = *(undefined8 *)((long)source + 8);
            puVar8[2] = *(undefined8 *)((long)source + 0x10);
            puVar8[3] = *(undefined8 *)((long)source + 0x18);
            puVar8[4] = *(undefined8 *)((long)source + 0x20);
            puVar8[5] = *(undefined8 *)((long)source + 0x28);
            puVar8[6] = *(undefined8 *)((long)source + 0x30);
            puVar8[7] = *(undefined8 *)((long)source + 0x38);
            puVar8 = puVar8 + 8;
            source = (void *)((long)source + 0x40);
            count = count - 0x40;
            in_R8 = source;
          } while (0x1f < count);
        }
      }
      if (count < 8) {
        source = in_R8;
        destination = puVar8;
      }
      else {
        if ((0x27 < count - 8) && (0x1f < (ulong)((long)puVar8 - (long)in_R8))) {
          uVar11 = (count - 8 >> 3) + 1;
          uVar16 = uVar11 & 0xfffffffffffffffc;
          source = in_R8 + uVar16;
          destination = puVar8 + uVar16;
          count = count + uVar16 * -8;
          uVar12 = 0;
          do {
            uVar3 = (in_R8 + uVar12)[1];
            uVar4 = in_R8[uVar12 + 2];
            uVar5 = (in_R8 + uVar12 + 2)[1];
            puVar8[uVar12] = in_R8[uVar12];
            (puVar8 + uVar12)[1] = uVar3;
            puVar8[uVar12 + 2] = uVar4;
            (puVar8 + uVar12 + 2)[1] = uVar5;
            uVar12 = uVar12 + 4;
          } while (uVar16 != uVar12);
          in_R8 = source;
          puVar8 = destination;
          if (uVar11 == uVar16) goto LAB_100019c8;
        }
        do {
          uVar3 = *in_R8;
          in_R8 = in_R8 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          count = count - 8;
          source = in_R8;
          destination = puVar8;
        } while (7 < count);
      }
LAB_100019c8:
      if (count == 0) {
        return pvVar6;
      }
    }
    uVar11 = count;
    if ((3 < count) && (0x1f < (ulong)((long)destination - (long)source))) {
      if (count < 0x20) {
        uVar16 = 0;
      }
      else {
        uVar16 = count & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          uVar3 = ((undefined8 *)((long)source + uVar11))[1];
          puVar8 = (undefined8 *)((long)source + uVar11 + 0x10);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          *(undefined8 *)((long)destination + uVar11) = *(undefined8 *)((long)source + uVar11);
          ((undefined8 *)((long)destination + uVar11))[1] = uVar3;
          puVar8 = (undefined8 *)((long)destination + uVar11 + 0x10);
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
          uVar11 = uVar11 + 0x20;
        } while (uVar16 != uVar11);
        if (count == uVar16) {
          return pvVar6;
        }
        if ((count & 0x1c) == 0) {
          source = (void *)((long)source + uVar16);
          destination = (void *)((long)destination + uVar16);
          uVar11 = (ulong)((uint)count & 0x1f);
          goto LAB_1000178c;
        }
      }
      uVar12 = count & 0xfffffffffffffffc;
      uVar11 = (ulong)((uint)count & 3);
      do {
        *(undefined4 *)((long)destination + uVar16) = *(undefined4 *)((long)source + uVar16);
        uVar16 = uVar16 + 4;
      } while (uVar12 != uVar16);
      destination = (undefined8 *)((long)destination + uVar12);
      source = (undefined8 *)((long)source + uVar12);
      if (count == uVar12) {
        return pvVar6;
      }
    }
LAB_1000178c:
    uVar16 = uVar11 - 1;
    if ((uVar11 & 7) != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((long)destination + uVar12) = *(undefined1 *)((long)source + uVar12);
        uVar12 = uVar12 + 1;
      } while ((uVar11 & 7) != uVar12);
      uVar11 = uVar11 - uVar12;
      destination = (void *)((long)destination + uVar12);
      source = (void *)((long)source + uVar12);
    }
    if (uVar16 < 7) {
      return pvVar6;
    }
    uVar16 = 0;
    do {
      *(undefined1 *)((long)destination + uVar16) = *(undefined1 *)((long)source + uVar16);
      *(undefined1 *)((long)destination + uVar16 + 1) = *(undefined1 *)((long)source + uVar16 + 1);
      *(undefined1 *)((long)destination + uVar16 + 2) = *(undefined1 *)((long)source + uVar16 + 2);
      *(undefined1 *)((long)destination + uVar16 + 3) = *(undefined1 *)((long)source + uVar16 + 3);
      *(undefined1 *)((long)destination + uVar16 + 4) = *(undefined1 *)((long)source + uVar16 + 4);
      *(undefined1 *)((long)destination + uVar16 + 5) = *(undefined1 *)((long)source + uVar16 + 5);
      *(undefined1 *)((long)destination + uVar16 + 6) = *(undefined1 *)((long)source + uVar16 + 6);
      *(undefined1 *)((long)destination + uVar16 + 7) = *(undefined1 *)((long)source + uVar16 + 7);
      uVar16 = uVar16 + 8;
    } while (uVar11 != uVar16);
    return pvVar6;
  }
  uVar11 = (long)destination + count;
  if ((0xf < count) && ((((uint)pvVar7 ^ (uint)uVar11) & 7) == 0)) {
    if ((uVar11 & 7) == 0) {
LAB_1000155e:
      uVar16 = uVar11;
    }
    else {
      uVar16 = uVar11 - 1;
      *(undefined1 *)(uVar11 - 1) = *(undefined1 *)((long)pvVar7 - 1);
      uVar12 = count - 1;
      uVar14 = (undefined7)(in_R9 >> 8);
      in_R9 = CONCAT71(uVar14,uVar12 == 0);
      uVar17 = (undefined7)((ulong)in_R10 >> 8);
      bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
      in_R10 = (void *)CONCAT71(uVar17,bVar15);
      if (bVar15) {
        pvVar7 = (void *)((long)pvVar7 - 1);
        count = uVar12;
      }
      else {
        uVar16 = uVar11 - 2;
        *(undefined1 *)(uVar11 - 2) = *(undefined1 *)((long)pvVar7 - 2);
        uVar12 = count - 2;
        in_R9 = CONCAT71(uVar14,uVar12 == 0);
        bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
        in_R10 = (void *)CONCAT71(uVar17,bVar15);
        if (bVar15) {
          pvVar7 = (void *)((long)pvVar7 - 2);
          count = uVar12;
        }
        else {
          uVar16 = uVar11 - 3;
          *(undefined1 *)(uVar11 - 3) = *(undefined1 *)((long)pvVar7 - 3);
          uVar12 = count - 3;
          in_R9 = CONCAT71(uVar14,uVar12 == 0);
          bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
          in_R10 = (void *)CONCAT71(uVar17,bVar15);
          if (bVar15) {
            pvVar7 = (void *)((long)pvVar7 - 3);
            count = uVar12;
          }
          else {
            uVar16 = uVar11 - 4;
            *(undefined1 *)(uVar11 - 4) = *(undefined1 *)((long)pvVar7 - 4);
            uVar12 = count - 4;
            in_R9 = CONCAT71(uVar14,uVar12 == 0);
            bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
            in_R10 = (void *)CONCAT71(uVar17,bVar15);
            if (bVar15) {
              pvVar7 = (void *)((long)pvVar7 - 4);
              count = uVar12;
            }
            else {
              uVar16 = uVar11 - 5;
              *(undefined1 *)(uVar11 - 5) = *(undefined1 *)((long)pvVar7 - 5);
              uVar12 = count - 5;
              in_R9 = CONCAT71(uVar14,uVar12 == 0);
              bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
              in_R10 = (void *)CONCAT71(uVar17,bVar15);
              if (bVar15) {
                pvVar7 = (void *)((long)pvVar7 - 5);
                count = uVar12;
              }
              else {
                uVar16 = uVar11 - 6;
                *(undefined1 *)(uVar11 - 6) = *(undefined1 *)((long)pvVar7 - 6);
                uVar12 = count - 6;
                in_R9 = CONCAT71(uVar14,uVar12 == 0);
                bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
                in_R10 = (void *)CONCAT71(uVar17,bVar15);
                if (bVar15) {
                  pvVar7 = (void *)((long)pvVar7 - 6);
                  count = uVar12;
                }
                else {
                  uVar16 = uVar11 - 7;
                  *(undefined1 *)(uVar11 - 7) = *(undefined1 *)((long)pvVar7 - 7);
                  bVar15 = count - 7 == 0;
                  in_R9 = CONCAT71(uVar14,bVar15);
                  bVar18 = (uVar16 & 7) == 0;
                  in_R10 = (void *)CONCAT71(uVar17,bVar18 || bVar15);
                  if (!bVar18 && !bVar15) {
                    puVar1 = (undefined1 *)((long)pvVar7 - 8);
                    pvVar7 = (void *)((long)pvVar7 - 8);
                    *(undefined1 *)(uVar11 - 8) = *puVar1;
                    uVar11 = uVar11 - 8;
                    count = count - 8;
                    goto LAB_1000155e;
                  }
                  pvVar7 = (void *)((long)pvVar7 - 7);
                  count = count - 7;
                }
              }
            }
          }
        }
      }
    }
    if (count < 0x20) {
      in_R10 = pvVar7;
    }
    else {
      uVar11 = count - 0x20;
      pvVar9 = pvVar7;
      uVar12 = uVar16;
      uVar13 = count;
      if ((uVar11 & 0x20) == 0) {
        uVar12 = uVar16 - 0x20;
        pvVar9 = (void *)((long)pvVar7 - 0x20);
        *(undefined8 *)(uVar16 - 8) = *(undefined8 *)((long)pvVar7 - 8);
        *(undefined8 *)(uVar16 - 0x10) = *(undefined8 *)((long)pvVar7 - 0x10);
        *(undefined8 *)(uVar16 - 0x18) = *(undefined8 *)((long)pvVar7 - 0x18);
        *(undefined8 *)(uVar16 - 0x20) = *(undefined8 *)((long)pvVar7 - 0x20);
        uVar13 = uVar11;
        in_R9 = uVar12;
        in_R10 = pvVar9;
      }
      uVar16 = in_R9;
      count = uVar11;
      if (0x1f < uVar11) {
        count = uVar13;
        do {
          *(undefined8 *)(uVar12 - 8) = *(undefined8 *)((long)pvVar9 - 8);
          *(undefined8 *)(uVar12 - 0x10) = *(undefined8 *)((long)pvVar9 - 0x10);
          *(undefined8 *)(uVar12 - 0x18) = *(undefined8 *)((long)pvVar9 - 0x18);
          *(undefined8 *)(uVar12 - 0x20) = *(undefined8 *)((long)pvVar9 - 0x20);
          uVar16 = uVar12 - 0x40;
          in_R10 = (void *)((long)pvVar9 - 0x40);
          *(undefined8 *)(uVar12 - 0x28) = *(undefined8 *)((long)pvVar9 - 0x28);
          *(undefined8 *)(uVar12 - 0x30) = *(undefined8 *)((long)pvVar9 - 0x30);
          *(undefined8 *)(uVar12 - 0x38) = *(undefined8 *)((long)pvVar9 - 0x38);
          *(undefined8 *)(uVar12 - 0x40) = *(undefined8 *)((long)pvVar9 - 0x40);
          count = count - 0x40;
          pvVar9 = in_R10;
          uVar12 = uVar16;
        } while (0x1f < count);
      }
    }
    if (count < 8) {
      pvVar7 = in_R10;
      uVar11 = uVar16;
    }
    else {
      if ((0x27 < count - 8) && (0x1f < (long)in_R10 - uVar16)) {
        uVar12 = (count - 8 >> 3) + 1;
        uVar13 = uVar12 & 0xfffffffffffffffc;
        pvVar7 = (void *)((long)in_R10 + uVar13 * -8);
        uVar11 = uVar16 + uVar13 * -8;
        count = count + uVar13 * -8;
        lVar10 = 0;
        do {
          puVar8 = (undefined8 *)((long)in_R10 + lVar10 * 8 + -0x20);
          uVar3 = *puVar8;
          uVar4 = puVar8[1];
          puVar8 = (undefined8 *)((long)in_R10 + lVar10 * 8 + -0x10);
          uVar5 = puVar8[1];
          puVar2 = (undefined8 *)((uVar16 - 0x10) + lVar10 * 8);
          *puVar2 = *puVar8;
          puVar2[1] = uVar5;
          puVar8 = (undefined8 *)((uVar16 - 0x20) + lVar10 * 8);
          *puVar8 = uVar3;
          puVar8[1] = uVar4;
          lVar10 = lVar10 + -4;
        } while (-lVar10 != uVar13);
        in_R10 = pvVar7;
        uVar16 = uVar11;
        if (uVar12 == uVar13) goto LAB_10001b2a;
      }
      do {
        puVar8 = (undefined8 *)((long)in_R10 - 8);
        in_R10 = (void *)((long)in_R10 - 8);
        *(undefined8 *)(uVar16 - 8) = *puVar8;
        uVar16 = uVar16 - 8;
        count = count - 8;
        pvVar7 = in_R10;
        uVar11 = uVar16;
      } while (7 < count);
    }
LAB_10001b2a:
    if (count == 0) {
      return pvVar6;
    }
  }
  if ((3 < count) && (0xf < (long)pvVar7 - uVar11)) {
    if (count < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = count & 0xfffffffffffffff0;
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)pvVar7 + lVar10 + -0x10);
        uVar3 = puVar8[1];
        puVar2 = (undefined8 *)((uVar11 - 0x10) + lVar10);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        lVar10 = lVar10 + -0x10;
      } while (-lVar10 != uVar16);
      if (count == uVar16) {
        return pvVar6;
      }
      if ((count & 0xc) == 0) {
        count = (ulong)((uint)count & 0xf);
        uVar11 = uVar11 - uVar16;
        pvVar7 = (void *)((long)pvVar7 - uVar16);
        goto LAB_10001bef;
      }
    }
    uVar12 = count & 0xfffffffffffffffc;
    lVar10 = -uVar16;
    do {
      *(undefined4 *)((uVar11 - 4) + lVar10) = *(undefined4 *)((long)pvVar7 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while (-lVar10 != uVar12);
    bVar15 = count == uVar12;
    pvVar7 = (void *)((long)pvVar7 - uVar12);
    uVar11 = uVar11 - uVar12;
    count = (ulong)((uint)count & 3);
    if (bVar15) {
      return pvVar6;
    }
  }
LAB_10001bef:
  uVar16 = count - 1;
  if ((count & 7) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)((long)pvVar7 - 1);
      pvVar7 = (void *)((long)pvVar7 - 1);
      *(undefined1 *)(uVar11 - 1) = *puVar1;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
    } while ((count & 7) != uVar12);
    count = count - uVar12;
  }
  if (6 < uVar16) {
    lVar10 = 0;
    do {
      *(undefined1 *)((uVar11 - 1) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -1);
      *(undefined1 *)((uVar11 - 2) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -2);
      *(undefined1 *)((uVar11 - 3) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -3);
      *(undefined1 *)((uVar11 - 4) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -4);
      *(undefined1 *)((uVar11 - 5) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -5);
      *(undefined1 *)((uVar11 - 6) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -6);
      *(undefined1 *)((uVar11 - 7) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -7);
      *(undefined1 *)((uVar11 - 8) + lVar10) = *(undefined1 *)((long)pvVar7 + lVar10 + -8);
      lVar10 = lVar10 + -8;
    } while (-lVar10 != count);
  }
  return pvVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c90
 */

void * recovered_10001c90(void *destination,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  uint128 auVar13;

  pvVar3 = destination;
  uVar8 = (undefined1)value;
  if (0xf < count) {
    iVar4 = (value & 0xffU) * 0x1010101;
    if (((ulong)destination & 7) == 0) {
LAB_10001ddd:
      puVar9 = destination;
      uVar6 = count;
    }
    else {
      *(undefined1 *)destination = uVar8;
      puVar9 = (undefined8 *)((long)destination + 1U);
      uVar6 = count - 1;
      if (((long)destination + 1U & 7) != 0 && count - 1 != 0) {
        *(undefined1 *)((long)destination + 1) = uVar8;
        puVar9 = (undefined8 *)((long)destination + 2U);
        uVar6 = count - 2;
        if (((long)destination + 2U & 7) != 0 && count - 2 != 0) {
          *(undefined1 *)((long)destination + 2) = uVar8;
          puVar9 = (undefined8 *)((long)destination + 3U);
          uVar6 = count - 3;
          if (((long)destination + 3U & 7) != 0 && count - 3 != 0) {
            *(undefined1 *)((long)destination + 3) = uVar8;
            puVar9 = (undefined8 *)((long)destination + 4U);
            uVar6 = count - 4;
            if (((long)destination + 4U & 7) != 0 && count - 4 != 0) {
              *(undefined1 *)((long)destination + 4) = uVar8;
              puVar9 = (undefined8 *)((long)destination + 5U);
              uVar6 = count - 5;
              if (((long)destination + 5U & 7) != 0 && count - 5 != 0) {
                *(undefined1 *)((long)destination + 5) = uVar8;
                puVar9 = (undefined8 *)((long)destination + 6U);
                uVar6 = count - 6;
                if (((long)destination + 6U & 7) != 0 && count - 6 != 0) {
                  *(undefined1 *)((long)destination + 6) = uVar8;
                  puVar9 = (undefined8 *)((long)destination + 7U);
                  uVar6 = count - 7;
                  if (((long)destination + 7U & 7) != 0 && count - 7 != 0) {
                    *(undefined1 *)((long)destination + 7) = uVar8;
                    count = count - 8;
                    destination = (undefined8 *)((long)destination + 8);
                    goto LAB_10001ddd;
                  }
                }
              }
            }
          }
        }
      }
    }
    count = uVar6;
    uVar5 = CONCAT44(iVar4,iVar4);
    if (0x1f < count) {
      uVar6 = count - 0x20;
      uVar7 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar7 == 0) {
        uVar10 = count;
        count = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(undefined8 *)((long)puVar9 + uVar10) = uVar5;
          *(undefined8 *)((long)puVar9 + uVar10 + 8) = uVar5;
          *(undefined8 *)((long)puVar9 + uVar10 + 0x10) = uVar5;
          *(undefined8 *)((long)puVar9 + uVar10 + 0x18) = uVar5;
          uVar10 = uVar10 + 0x20;
        } while (uVar7 << 5 != uVar10);
        puVar9 = (undefined8 *)((long)puVar9 + uVar10);
        uVar10 = count - uVar10;
        count = uVar10;
      }
      if (0x5f < uVar6) {
        count = uVar10;
        do {
          *puVar9 = uVar5;
          puVar9[1] = uVar5;
          puVar9[2] = uVar5;
          puVar9[3] = uVar5;
          puVar9[4] = uVar5;
          puVar9[5] = uVar5;
          puVar9[6] = uVar5;
          puVar9[7] = uVar5;
          puVar9[8] = uVar5;
          puVar9[9] = uVar5;
          puVar9[10] = uVar5;
          puVar9[0xb] = uVar5;
          puVar9[0xc] = uVar5;
          puVar9[0xd] = uVar5;
          puVar9[0xe] = uVar5;
          puVar9[0xf] = uVar5;
          puVar9 = puVar9 + 0x10;
          count = count - 0x80;
        } while (0x1f < count);
      }
    }
    destination = puVar9;
    if (7 < count) {
      if (0x17 < count - 8) {
        uVar6 = (count - 8 >> 3) + 1;
        uVar10 = uVar6 & 0xfffffffffffffffc;
        destination = puVar9 + uVar10;
        count = count + uVar10 * -8;
        uVar11 = 0;
        do {
          piVar1 = (int *)(puVar9 + uVar11);
          *piVar1 = iVar4;
          piVar1[1] = iVar4;
          piVar1[2] = iVar4;
          piVar1[3] = iVar4;
          piVar1 = (int *)(puVar9 + uVar11 + 2);
          *piVar1 = iVar4;
          piVar1[1] = iVar4;
          piVar1[2] = iVar4;
          piVar1[3] = iVar4;
          uVar11 = uVar11 + 4;
        } while (uVar10 != uVar11);
        if (uVar6 == uVar10) goto LAB_10001f11;
      }
      do {
        *(undefined8 *)destination = uVar5;
        destination = (void *)((long)destination + 8);
        count = count - 8;
      } while (7 < count);
    }
  }
LAB_10001f11:
  if (count == 0) {
    return pvVar3;
  }
  if (count < 4) {
LAB_10001f20:
    uVar10 = count;
    puVar9 = destination;
  }
  else {
    if (count < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = count & 0xffffffffffffffe0;
      auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
      uVar12 = PF_PART4(auVar13, 0);
      uVar10 = 0;
      do {
        puVar2 = (undefined4 *)((long)destination + uVar10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((long)destination + uVar10 + 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        uVar10 = uVar10 + 0x20;
      } while (uVar6 != uVar10);
      if (count == uVar6) {
        return pvVar3;
      }
      if ((count & 0x1c) == 0) {
        destination = (void *)((long)destination + uVar6);
        count = (ulong)((uint)count & 0x1f);
        goto LAB_10001f20;
      }
    }
    uVar11 = count & 0xfffffffffffffffc;
    uVar10 = (ulong)((uint)count & 3);
    puVar9 = (undefined8 *)((long)destination + uVar11);
    auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
    do {
      *(int *)((long)destination + uVar6) = PF_PART4(auVar13, 0);
      uVar6 = uVar6 + 4;
    } while (uVar11 != uVar6);
    if (count == uVar11) {
      return pvVar3;
    }
  }
  uVar6 = 0;
  do {
    *(undefined1 *)((long)puVar9 + uVar6) = uVar8;
    uVar6 = uVar6 + 1;
  } while (uVar10 != uVar6);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fe0
 */

void recovered_10001fe0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10002205;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002205:
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
        goto LAB_10002286;
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
LAB_10002286:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022b0
 */

void recovered_100022b0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_100024d5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100024d5:
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
        goto LAB_10002556;
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
LAB_10002556:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002580
 */

int recovered_10002580(void *left,void *right,ulong count)

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

  if (0xf < count) {
    if ((((uint)right ^ (uint)left) & 7) != 0) goto LAB_100027b3;
    uVar11 = count;
    puVar8 = right;
    puVar10 = left;
    if (((ulong)left & 7) != 0) {
      bVar1 = *(byte *)left;
      bVar5 = *(byte *)right;
      if (bVar1 != bVar5) {
LAB_10002713:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002868:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)left + 1);
      puVar8 = (ulong *)((long)right + 1);
      uVar11 = count - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10002713;
        puVar10 = (ulong *)((long)left + 2);
        puVar8 = (ulong *)((long)right + 2);
        uVar11 = count - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10002713;
          puVar10 = (ulong *)((long)left + 3);
          puVar8 = (ulong *)((long)right + 3);
          uVar11 = count - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10002713;
            puVar10 = (ulong *)((long)left + 4);
            puVar8 = (ulong *)((long)right + 4);
            uVar11 = count - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10002713;
              puVar10 = (ulong *)((long)left + 5);
              puVar8 = (ulong *)((long)right + 5);
              uVar11 = count - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10002713;
                puVar10 = (ulong *)((long)left + 6);
                puVar8 = (ulong *)((long)right + 6);
                uVar11 = count - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10002713;
                  puVar10 = (ulong *)((long)left + 7);
                  puVar8 = (ulong *)((long)right + 7);
                  uVar11 = count - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10002713;
                    puVar10 = (ulong *)((long)left + 8);
                    puVar8 = (ulong *)((long)right + 8);
                    uVar11 = count - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    while( true ) {
      count = uVar11;
      right = puVar8;
      left = puVar10;
      if (uVar11 < 0x20) break;
      uVar4 = *puVar10;
      uVar7 = *puVar8;
      if (uVar4 != uVar7) {
LAB_100027df:
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
        goto LAB_10002868;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_100027df;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_100027df;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_100027df;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < count; count = count - 8) {
      if (*(ulong *)left != *(ulong *)right) {
        iVar3 = recovered_10002880(left,right);
        return iVar3;
      }
      right = (ulong *)((long)right + 8);
      left = (ulong *)((long)left + 8);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_100027b3:
  uVar11 = 0;
  do {
    if (*(byte *)((long)left + uVar11) != *(byte *)((long)right + uVar11)) {
      return (uint)*(byte *)((long)left + uVar11) - (uint)*(byte *)((long)right + uVar11);
    }
    uVar11 = uVar11 + 1;
  } while (count != uVar11);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

int recovered_10002880(byte *param_1,byte *param_2)

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
 * Address: 0x100028f0
 */

bool recovered_100028f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002910
 */

bool recovered_10002910(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

bool recovered_10002930(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002950
 */

bool recovered_10002950(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

bool recovered_10002980(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a0
 */

bool recovered_100029a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

int recovered_100029c0(int param_1)

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
 * Address: 0x100029e0
 */

int recovered_100029e0(int param_1)

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
 * Address: 0x10002a00
 */

ulong recovered_10002a00(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if (text == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    lVar2 = uVar3 + 1;
    uVar3 = uVar1;
  } while (text[lVar2] != '\0');
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a30
 */

int recovered_10002a30(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *left;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      left = left + 1;
      if (bVar1 != *right) goto LAB_10002a53;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002a53:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

int recovered_10002a70(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002a93;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002a93:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab0
 */

void recovered_10002ab0(long param_1,long param_2)

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
 * Address: 0x10002ad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10002ad0(undefined8 *param_1)

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
LAB_10002b79:
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
        if (uVar5 == uVar10) goto LAB_10002b79;
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
    goto LAB_10002b79;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10002e98:
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
        goto LAB_10002e98;
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
 * Address: 0x10002f50
 */

char * recovered_10002f50(char *param_1,char param_2)

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
 * Address: 0x10002f90
 */

long recovered_10002f90(char *param_1,char *param_2)

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
 * Address: 0x10002ff0
 */

char * recovered_10002ff0(char *param_1,char *param_2)

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
 * Address: 0x10003050
 */

char * recovered_10003050(char *param_1,char *param_2)

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


#undef DAT_1000dd66
#define DAT_1000dd66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b0
 */

undefined * recovered_100030b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000dd66;
}

#undef DAT_1000dd66

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x16e1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

undefined ** recovered_100030c0(void)

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
#define local_28 (*(undefined1 (*)[8])(frame + 24))
#define uStack_18 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

/* WARNING: Removing unreachable block (ram,0x100030e6) */
/* WARNING: Removing unreachable block (ram,0x10003133) */
/* WARNING: Removing unreachable block (ram,0x1000313e) */
/* WARNING: Removing unreachable block (ram,0x10003147) */
/* WARNING: Removing unreachable block (ram,0x10003150) */
/* WARNING: Removing unreachable block (ram,0x1000313c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100030d0(undefined8 *param_1)

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
#undef local_28
#undef uStack_18

#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d0
 */

double recovered_100031d0(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_1000d920;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 *
                    DAT_1000d920 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920;
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

#undef DAT_1000d920

#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d9a0
#define DAT_1000d9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000d9a0
#define _DAT_1000d9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100032a0(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_1000d9a0 ^ (ulong)param_1);
  if ((double)(_DAT_1000d9a0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000d928 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000d920;
      iVar1 = iVar1 + 1;
    } while (DAT_1000d928 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000d920)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000d9a0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000d920
#undef DAT_1000d928
#undef DAT_1000d9a0
#undef _DAT_1000d9a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

double recovered_10003370(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a0
 */

double recovered_100033a0(double param_1,double param_2)

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
      return DAT_1000d928;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000d928;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000d928 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000d928

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003420
 */

ulong recovered_10003420(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003450
 */

ulong recovered_10003450(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_1000d928 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000d928

#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034b0
 */

double recovered_100034b0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000d928) {
      dVar1 = DAT_1000d928;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000d920;
  }
  return dVar1;
}

#undef DAT_1000d920
#undef DAT_1000d928

#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d930
#define DAT_1000d930 (*(double *)(((uintptr_t)pf_module_state + 0x11U)))
#undef DAT_1000d938
#define DAT_1000d938 (*(double *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000d940
#define DAT_1000d940 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000d948
#define DAT_1000d948 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000d950
#define DAT_1000d950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000d958
#define DAT_1000d958 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000d9b0
#define DAT_1000d9b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000d9c0
#define DAT_1000d9c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000d9d0
#define DAT_1000d9d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_1000d9e0
#define DAT_1000d9e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000d950
#define _DAT_1000d950 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000d958
#define _DAT_1000d958 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000d9b0
#define _DAT_1000d9b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000d9c0
#define _DAT_1000d9c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef _DAT_1000d9d0
#define _DAT_1000d9d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000d9e0
#define _DAT_1000d9e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003660(double param_1)

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
    if (DAT_1000d938 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000d920;
        iVar1 = iVar1 + 1;
      } while (DAT_1000d938 < param_1);
    }
    for (; param_1 < DAT_1000d940; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000d948 + param_1) / (param_1 + DAT_1000d928);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000d9b0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000d9c0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000d9d0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000d9e0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000d950 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000d958;
  }
  return DAT_1000d930;
}

#undef DAT_1000d920
#undef DAT_1000d928
#undef DAT_1000d930
#undef DAT_1000d938
#undef DAT_1000d940
#undef DAT_1000d948
#undef DAT_1000d950
#undef DAT_1000d958
#undef DAT_1000d9b0
#undef DAT_1000d9c0
#undef DAT_1000d9d0
#undef DAT_1000d9e0
#undef _DAT_1000d950
#undef _DAT_1000d958
#undef _DAT_1000d9b0
#undef _DAT_1000d9c0
#undef _DAT_1000d9d0
#undef _DAT_1000d9e0

#undef DAT_1000d9f0
#define DAT_1000d9f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037b0
 */

long recovered_100037b0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000d9f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000d9f0

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d960
#define DAT_1000d960 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000d968
#define DAT_1000d968 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000d970
#define DAT_1000d970 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000d978
#define DAT_1000d978 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000d980
#define DAT_1000d980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000da00
#define DAT_1000da00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000d980
#define _DAT_1000d980 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000da00
#define _DAT_1000da00 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100037e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000d960 < param_1; param_1 = param_1 + DAT_1000d968) {
  }
  for (; param_1 < DAT_1000d970; param_1 = param_1 + DAT_1000d978) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000da00);
  return ((dVar1 / _DAT_1000d980 + DAT_1000d928 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000d928
#undef DAT_1000d960
#undef DAT_1000d968
#undef DAT_1000d970
#undef DAT_1000d978
#undef DAT_1000d980
#undef DAT_1000da00
#undef _DAT_1000d980
#undef _DAT_1000da00

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d960
#define DAT_1000d960 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000d968
#define DAT_1000d968 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000d970
#define DAT_1000d970 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000d978
#define DAT_1000d978 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000d988
#define DAT_1000d988 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000da10
#define DAT_1000da10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000da10
#define _DAT_1000da10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003890(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000d960 < param_1; param_1 = param_1 + DAT_1000d968) {
  }
  for (; param_1 < DAT_1000d970; param_1 = param_1 + DAT_1000d978) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000da10);
  return (DAT_1000d988 * dVar1 + DAT_1000d928 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000d928
#undef DAT_1000d960
#undef DAT_1000d968
#undef DAT_1000d970
#undef DAT_1000d978
#undef DAT_1000d988
#undef DAT_1000da10
#undef _DAT_1000da10

#undef DAT_1000d9a0
#define DAT_1000d9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000d9a0
#define _DAT_1000d9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003930(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000d9a0 ^ (ulong)param_1);
  if ((double)(_DAT_1000d9a0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000d9a0
#undef _DAT_1000d9a0

/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10003950(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003a20(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10003ad0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10003b20(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bb0
 */

float recovered_10003bb0(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d9a0
#define DAT_1000d9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef UNK_1000d9a4
#define UNK_1000d9a4 (*(uint *)(((uintptr_t)pf_module_state + 0x85U)))
#undef _DAT_1000d9a0
#define _DAT_1000d9a0 (*(uint *)(((uintptr_t)pf_module_state + 0x81U)))
#undef uRam000000001000d9a4
#define uRam000000001000d9a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x85U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003c00(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001000d9a4,
                             SUB84(dVar2,0) ^ _DAT_1000d9a0));
  }
  iVar1 = 0;
  if (DAT_1000d928 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000d920;
      iVar1 = iVar1 + 1;
    } while (DAT_1000d928 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000d920)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000d9a4,_DAT_1000d9a0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1000d920
#undef DAT_1000d928
#undef DAT_1000d9a0
#undef UNK_1000d9a4
#undef _DAT_1000d9a0
#undef uRam000000001000d9a4

#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cc0
 */

undefined8 recovered_10003cc0(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_1000d920;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 *
                  DAT_1000d920 * DAT_1000d920 * DAT_1000d920;
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

#undef DAT_1000d920

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000da30
#define DAT_1000da30 (*(float *)(((uintptr_t)pf_module_state + 0x111U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003db0
 */

float recovered_10003db0(float param_1,float param_2)

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
    return DAT_1000da30;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000d928;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000d928 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000d928
#undef DAT_1000da30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

undefined8 recovered_10003e40(undefined1 in_XMM0 [16],ulong in_XMM2_Qb)

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


#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

float recovered_10003e80(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000d928 + dVar2) & uVar1);
}

#undef DAT_1000d928

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ee0
 */

double recovered_10003ee0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000d928 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000d928

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

undefined8 recovered_10003f40(undefined8 param_1)

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000d928 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000d928

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb0
 */

float recovered_10003fb0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100034b0((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d938
#define DAT_1000d938 (*(double *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000d940
#define DAT_1000d940 (*(double *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000d948
#define DAT_1000d948 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000d950
#define DAT_1000d950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000d958
#define DAT_1000d958 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000d9b0
#define DAT_1000d9b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91U)))
#undef DAT_1000d9c0
#define DAT_1000d9c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef DAT_1000d9d0
#define DAT_1000d9d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_1000d9e0
#define DAT_1000d9e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef DAT_1000da34
#define DAT_1000da34 (*(float *)(((uintptr_t)pf_module_state + 0x115U)))
#undef DAT_1000da38
#define DAT_1000da38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef _DAT_1000d950
#define _DAT_1000d950 (*(double *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000d958
#define _DAT_1000d958 (*(double *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000d9b0
#define _DAT_1000d9b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1000d9c0
#define _DAT_1000d9c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa1U)))
#undef _DAT_1000d9d0
#define _DAT_1000d9d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef _DAT_1000d9e0
#define _DAT_1000d9e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef _DAT_1000da38
#define _DAT_1000da38 (*(float *)(((uintptr_t)pf_module_state + 0x119U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10003fd0(float param_1)

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
    if (_DAT_1000da38 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000d920;
        iVar1 = iVar1 + 1;
      } while (DAT_1000d938 < dVar2);
    }
    for (; dVar2 < DAT_1000d940; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000d948 + dVar2) / (dVar2 + DAT_1000d928);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000d9b0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000d9c0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000d9d0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000d9e0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000d950 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000d958);
  }
  return DAT_1000da34;
}

#undef DAT_1000d920
#undef DAT_1000d928
#undef DAT_1000d938
#undef DAT_1000d940
#undef DAT_1000d948
#undef DAT_1000d950
#undef DAT_1000d958
#undef DAT_1000d9b0
#undef DAT_1000d9c0
#undef DAT_1000d9d0
#undef DAT_1000d9e0
#undef DAT_1000da34
#undef DAT_1000da38
#undef _DAT_1000d950
#undef _DAT_1000d958
#undef _DAT_1000d9b0
#undef _DAT_1000d9c0
#undef _DAT_1000d9d0
#undef _DAT_1000d9e0
#undef _DAT_1000da38

#undef DAT_1000d9f0
#define DAT_1000d9f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

long recovered_10004120(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000d9f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000d9f0

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d960
#define DAT_1000d960 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000d968
#define DAT_1000d968 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000d970
#define DAT_1000d970 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000d978
#define DAT_1000d978 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000d980
#define DAT_1000d980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000da00
#define DAT_1000da00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef _DAT_1000d980
#define _DAT_1000d980 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000da00
#define _DAT_1000da00 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004150(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000d960 < dVar1; dVar1 = dVar1 + DAT_1000d968) {
  }
  for (; dVar1 < DAT_1000d970; dVar1 = dVar1 + DAT_1000d978) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000da00);
  return (float)(((dVar2 / _DAT_1000d980 + DAT_1000d928 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000d928
#undef DAT_1000d960
#undef DAT_1000d968
#undef DAT_1000d970
#undef DAT_1000d978
#undef DAT_1000d980
#undef DAT_1000da00
#undef _DAT_1000d980
#undef _DAT_1000da00

#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d960
#define DAT_1000d960 (*(double *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000d968
#define DAT_1000d968 (*(double *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000d970
#define DAT_1000d970 (*(double *)(((uintptr_t)pf_module_state + 0x51U)))
#undef DAT_1000d978
#define DAT_1000d978 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
#undef DAT_1000d988
#define DAT_1000d988 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000da10
#define DAT_1000da10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef _DAT_1000da10
#define _DAT_1000da10 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004200(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000d960 < dVar1; dVar1 = dVar1 + DAT_1000d968) {
  }
  for (; dVar1 < DAT_1000d970; dVar1 = dVar1 + DAT_1000d978) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000da10);
  return (float)((DAT_1000d988 * dVar1 + DAT_1000d928 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000d928
#undef DAT_1000d960
#undef DAT_1000d968
#undef DAT_1000d970
#undef DAT_1000d978
#undef DAT_1000d988
#undef DAT_1000da10
#undef _DAT_1000da10

#undef DAT_1000da20
#define DAT_1000da20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x101U)))
#undef UNK_1000da24
#define UNK_1000da24 (*(uint *)(((uintptr_t)pf_module_state + 0x105U)))
#undef _DAT_1000da20
#define _DAT_1000da20 (*(uint *)(((uintptr_t)pf_module_state + 0x101U)))
#undef uRam000000001000da24
#define uRam000000001000da24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x105U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100042a0(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000da20 ^ (uint)fVar1);
  if ((float)(_DAT_1000da20 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000da24 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000da20
#undef UNK_1000da24
#undef _DAT_1000da20
#undef uRam000000001000da24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

long recovered_100042c0(byte *param_1,undefined8 *param_2,uint param_3)

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
 * Address: 0x100043f0
 */

long recovered_100043f0(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d998
#define DAT_1000d998 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000d9a0
#define DAT_1000d9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef _DAT_1000d9a0
#define _DAT_1000d9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004520(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_1000d998 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000d928;
      do {
        dVar12 = dVar12 * DAT_1000d998 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000d998;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_100045f9;
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
LAB_100045f9:
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
                dVar11 = dVar11 * DAT_1000d920;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920 *
                         DAT_1000d920 * DAT_1000d920 * DAT_1000d920 * DAT_1000d920;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000d9a0);
  }
  return dVar11;
}

#undef DAT_1000d920
#undef DAT_1000d928
#undef DAT_1000d998
#undef DAT_1000d9a0
#undef _DAT_1000d9a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004780
 */

float recovered_10004780(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004520(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000d998
#define DAT_1000d998 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
#undef DAT_1000d9a0
#define DAT_1000d9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef DAT_1000dd6b
#define DAT_1000dd6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44cU)))
#undef _DAT_1000d9a0
#define _DAT_1000d9a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x81U)))
#undef str_1000dd72
#define str_1000dd72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_1000dd83
#define str_1000dd83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x464U)))
#define local_38 (*(uint * *)(frame + 88))
#define abStack_7a (*(byte (*)[66])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004790(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
  uVar6 = _DAT_1000d9a0;
  dVar5 = DAT_1000d998;
  uVar12 = 0;
  uVar23 = param_2;
LAB_100047f9:
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
      goto LAB_10004812;
    }
    goto LAB_100047f3;
  }
  bVar7 = param_3[1];
  if (bVar7 == 0x25) {
    if (1 < uVar23) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_100047f3;
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
        goto joined_r0x100048a3;
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
joined_r0x100048a3:
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
LAB_10004ca2:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
      }
      goto LAB_10004cae;
    case '\a':
      if (0x28 < uVar2) goto LAB_10004ca2;
      puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar12);
      *param_4 = uVar2 + 8;
LAB_10004cae:
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
      abStack_7a[uVar18 + 2] = str_1000dd83[uVar22 % 10];
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
    goto LAB_100047f6;
  default:
    if (1 < uVar23) {
      *param_1 = 0x3f;
LAB_10004812:
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
LAB_10004ec3:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10004ec3;
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
    pcVar20 = str_1000dd83;
    if (*param_3 == 0x58) {
      pcVar20 = str_1000dd72;
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
    goto LAB_100047f9;
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
      goto LAB_10004812;
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
        abStack_7a[uVar17 + 2] = str_1000dd83[uVar22 % 10];
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
    goto LAB_100047f9;
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
      abStack_7a[uVar17 + 2] = str_1000dd83[(uint)uVar22 & 0xf];
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
    goto LAB_100047f9;
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
      pbVar13 = &DAT_1000dd6b;
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
    goto LAB_100047f6;
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
LAB_10005143:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10005143;
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
      abStack_7a[uVar18 + 2] = str_1000dd83[uVar12 % 10];
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
    goto LAB_100047f9;
  }
LAB_100047f3:
  uVar12 = (ulong)(uVar19 + 1);
LAB_100047f6:
  param_3 = param_3 + 1;
  goto LAB_100047f9;
}

#undef DAT_1000d998
#undef DAT_1000d9a0
#undef DAT_1000dd6b
#undef _DAT_1000d9a0
#undef str_1000dd72
#undef str_1000dd83
#undef local_38
#undef abStack_7a

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10005610(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004790(buffer,capacity,format,(void *)args);
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
#define DAT_1000f0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17d9U)))
#undef DAT_1000f100
#define DAT_1000f100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x17e1U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005690(ulong param_1,ulong param_2,ulong *param_3)

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
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_238 (*(undefined1 (*)[520])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005850(long param_1,long param_2,undefined8 *in_R8)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;

  if (param_2 != 0 && param_1 != 0) {
    lVar4 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar4);
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
            recovered_10000f90(local_238,&DAT_1000f120,DAT_1000f110);
            uVar3 = DAT_1000f110;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_1000f110 = 0;
        }
        else {
          if (DAT_1000f110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10000f90(local_238,&DAT_1000f120,DAT_1000f110);
            local_238[DAT_1000f110] = 0;
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
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
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
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005a20(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000f110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10000f90(local_208,&DAT_1000f120,DAT_1000f110);
    uVar1 = DAT_1000f110;
  }
  local_208[uVar1] = 0;
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
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005ac0(undefined8 in_RCX,undefined8 *in_R8)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000f110 != 0) {
    recovered_10000f90(local_208,&DAT_1000f120,DAT_1000f110);
    local_208[DAT_1000f110] = 0;
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

#undef DAT_1000dd6a
#define DAT_1000dd6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44bU)))
#undef DAT_1000dd94
#define DAT_1000dd94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

void recovered_10005b60(char *param_1,undefined *param_2,undefined8 *in_R8)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1000dd94;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000dd6a;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10005610(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10005850((long)local_148,(ulong)uVar1,in_R8);
  }
  return;
}

#undef DAT_1000dd6a
#undef DAT_1000dd94
#undef local_148

#undef DAT_1000ddb2
#define DAT_1000ddb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x493U)))
#undef str_1000dd97
#define str_1000dd97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bc0
 */

void recovered_10005bc0(undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002a00(str_1000dd97);
  recovered_10005850(((uintptr_t)pf_module_state + 0x478U),uVar1,in_R8);
  uVar1 = recovered_10002a00(&DAT_1000ddb2);
  recovered_10005850(((uintptr_t)pf_module_state + 0x493U),uVar1,in_R8);
  return;
}

#undef DAT_1000ddb2
#undef str_1000dd97

#undef DAT_1000ddb2
#define DAT_1000ddb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x493U)))
#undef str_1000ddb5
#define str_1000ddb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c00
 */

void recovered_10005c00(undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002a00(str_1000ddb5);
  recovered_10005850(((uintptr_t)pf_module_state + 0x496U),uVar1,in_R8);
  uVar1 = recovered_10002a00(&DAT_1000ddb2);
  recovered_10005850(((uintptr_t)pf_module_state + 0x493U),uVar1,in_R8);
  return;
}

#undef DAT_1000ddb2
#undef str_1000ddb5

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
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
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
#define local_228 (*(undefined1 (*)[512])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005c40(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1000f110 != 0) {
    recovered_10000f90(local_228,&DAT_1000f120,DAT_1000f110);
    local_228[DAT_1000f110] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_1000f110 = 0;
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00006844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
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
 * Address: 0x10005d60
 */

undefined8 recovered_10005d60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d70
 */

void recovered_10005d70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d80
 */

undefined1 recovered_10005d80(void)

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
#undef DAT_1000dd94
#define DAT_1000dd94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_1000de49
#define str_1000de49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52aU)))
#undef str_1000de56
#define str_1000de56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x537U)))
#undef str_1000de64
#define str_1000de64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x545U)))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d90
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005d90(long param_1,long param_2,undefined8 *in_R8)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  void *destination;
  ulong count;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002a30((char *)param_1,str_1000de49);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_1000603e:
    puVar5 = recovered_10000ea0(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1000f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001c90(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_10005610__8_((char *)(puVar5 + 1),0xf1,&DAT_1000dd94,param_1);
    return puVar5;
  }
  iVar4 = recovered_10002a30((char *)param_1,str_1000de56);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_1000603e;
  }
  iVar4 = recovered_10002a30((char *)param_1,str_1000de64);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_1000603e;
  }
  puVar5 = recovered_10000ea0(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1000f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001c90(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10002f50((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10002f50((char *)param_2,'+');
    bVar9 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10002f50((char *)param_2,'a');
      bVar9 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar9;
  pcVar6 = recovered_10002f50((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10002f50((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10002f50((char *)param_2,'+');
    bVar10 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar10;
  pcVar6 = recovered_10002f50((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  pf_varargs_10005610__8_((char *)(puVar5 + 1),0xf1,&DAT_1000dd94,param_1);
  recovered_10001c90(&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10002f50((char *)param_2,'w');
    if (local_30 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar5 + 0x125) == '\x01') {
        count = (ulong)local_30;
        uVar7 = *(ulong *)(puVar5 + 0x44);
        if (uVar7 < count) {
          uVar2 = 0x100;
          if (uVar7 != 0) {
            uVar2 = uVar7;
          }
          do {
            uVar7 = uVar2;
            uVar2 = uVar7 * 2;
          } while (uVar7 < count);
          destination = recovered_10000f40(*(void **)(puVar5 + 0x40),uVar7);
          if (destination == (void *)0x0) {
            DAT_1000f060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_100060c8;
          }
          *(void **)(puVar5 + 0x40) = destination;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = destination;
          count = (ulong)local_30;
        }
        else {
          destination = *(void **)(puVar5 + 0x40);
        }
        recovered_10000f90(destination,(void *)(ulong)local_34,count);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x10006022;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_1000f060 = 2;
LAB_100060c8:
    recovered_10000ef0(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x10006022:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar5 + 0x46) = *(undefined8 *)(puVar5 + 0x42);
    return puVar5;
  }
  return puVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_1000dd94
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000de49
#undef str_1000de56
#undef str_1000de64
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
#undef DAT_1000dd94
#define DAT_1000dd94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475U)))
#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
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
#undef str_1000de49
#define str_1000de49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52aU)))
#undef str_1000de56
#define str_1000de56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x537U)))
#undef str_1000de64
#define str_1000de64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x545U)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006120
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006120(long param_1,long param_2,int *param_3,undefined *in_R8)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *destination;
  undefined4 *puVar7;
  ulong count;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      if (((_DAT_00006800 == 0x50414d57) &&
          (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
         (in_R8 = (undefined *)(ulong)_DAT_00006838, (code *)in_R8 != (code *)0x0)) {
        uStack_30 = 0x100061aa;
        iVar4 = (*(code *)in_R8)(param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_100061d1;
        }
      }
      DAT_1000f060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_100061d1:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100061e8;
      recovered_10000ef0(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100061f0;
    recovered_10000ef0(param_3);
    puVar7 = recovered_10005d90(param_1,param_2,(undefined8 *)in_R8);
    return puVar7;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002a30((char *)param_1,str_1000de49);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_1000603e:
    puVar7 = recovered_10000ea0(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_1000f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001c90(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    pf_varargs_10005610__8_((char *)(puVar7 + 1),0xf1,&DAT_1000dd94,param_1);
    return puVar7;
  }
  iVar3 = recovered_10002a30((char *)param_1,str_1000de56);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_1000603e;
  }
  iVar3 = recovered_10002a30((char *)param_1,str_1000de64);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_1000603e;
  }
  puVar7 = recovered_10000ea0(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_1000f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001c90(puVar7,0,0x340);
  *puVar7 = 0;
  pcVar5 = recovered_10002f50((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10002f50((char *)param_2,'+');
    bVar9 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10002f50((char *)param_2,'a');
      bVar9 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar7 + 0x49) = bVar9;
  pcVar5 = recovered_10002f50((char *)param_2,'w');
  if ((pcVar5 == (char *)0x0) &&
     (pcVar5 = recovered_10002f50((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
    pcVar5 = recovered_10002f50((char *)param_2,'+');
    bVar10 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar7 + 0x125) = bVar10;
  pcVar5 = recovered_10002f50((char *)param_2,'a');
  *(bool *)((long)puVar7 + 0x126) = pcVar5 != (char *)0x0;
  puVar7[0x48] = 0xffffffff;
  pf_varargs_10005610__8_((char *)(puVar7 + 1),0xf1,&DAT_1000dd94,param_1);
  recovered_10001c90(&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10002f50((char *)param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar5 == (char *)0x0) {
      if (*(char *)((long)puVar7 + 0x125) == '\x01') {
        count = uStack_30 & 0xffffffff;
        uVar6 = *(ulong *)(puVar7 + 0x44);
        if (uVar6 < count) {
          uVar2 = 0x100;
          if (uVar6 != 0) {
            uVar2 = uVar6;
          }
          do {
            uVar6 = uVar2;
            uVar2 = uVar6 * 2;
          } while (uVar6 < count);
          destination = recovered_10000f40(*(void **)(puVar7 + 0x40),uVar6);
          if (destination == (void *)0x0) {
            DAT_1000f060 = 0xc;
            *(undefined1 *)((long)puVar7 + 0x129) = 1;
            goto LAB_100060c8;
          }
          *(void **)(puVar7 + 0x40) = destination;
          *(ulong *)(puVar7 + 0x44) = uVar6;
          *(void **)(puVar7 + 0x3e) = destination;
          count = uStack_30 & 0xffffffff;
        }
        else {
          destination = *(void **)(puVar7 + 0x40);
        }
        recovered_10000f90(destination,(void *)(ulong)uStack_34,count);
      }
      else {
        *(ulong *)(puVar7 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar7 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar7 + 0x126);
      goto joined_r0x10006022;
    }
  }
  else if (*(char *)((long)puVar7 + 0x125) == '\0') {
    DAT_1000f060 = 2;
LAB_100060c8:
    recovered_10000ef0(puVar7);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar7 + 0x126);
joined_r0x10006022:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar7 + 0x46) = *(undefined8 *)(puVar7 + 0x42);
    return puVar7;
  }
  return puVar7;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_1000dd94
#undef DAT_1000f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_1000de49
#undef str_1000de56
#undef str_1000de64
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
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006210(int *param_1)

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
    recovered_10000ef0(*(void **)(param_1 + 0x40));
  }
  recovered_10000ef0(param_1);
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
 * Address: 0x100062e0
 */

ulong recovered_100062e0(long param_1,ulong param_2,ulong param_3,int *param_4,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  ulong count;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

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
      uVar4 = 0;
      do {
        uVar6 = 0;
        do {
          uVar3 = recovered_10006420(param_4,in_R8);
          if (uVar3 == 0xffffffff) {
            return uVar4;
          }
          *(char *)(param_1 + uVar6) = (char)uVar3;
          uVar6 = uVar6 + 1;
        } while (param_2 != uVar6);
        uVar4 = uVar4 + 1;
        param_1 = param_1 + param_2;
      } while (uVar4 != param_3);
      return param_3;
    }
    uVar4 = *(ulong *)(param_4 + 0x46);
    uVar6 = *(ulong *)(param_4 + 0x42) - uVar4;
    if (uVar4 <= *(ulong *)(param_4 + 0x42) && uVar6 != 0) {
      PF_PART8(auVar1, 8) = 0;
      PF_PART8(auVar1, 0) = param_2;
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_3;
      uVar5 = 0xffffffffffffffff;
      if (SUB168(auVar1 * auVar2,8) == 0) {
        uVar5 = param_3 * param_2;
      }
      count = uVar5;
      if (uVar6 < uVar5) {
        count = uVar6;
      }
      recovered_10000f90((void *)param_1,(void *)(uVar4 + *(long *)(param_4 + 0x3e)),count);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + count;
      if (uVar6 < uVar5) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((count | param_2) >> 0x20 == 0) {
        return (count & 0xffffffff) / (param_2 & 0xffffffff);
      }
      return count / param_2;
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
#undef DAT_1000dd6a
#define DAT_1000dd6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44bU)))
#undef DAT_1000f110
#define DAT_1000f110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_1000f120
#define DAT_1000f120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
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
#define local_218 (*(undefined1 (*)[512])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006420(int *param_1,undefined8 *in_R8)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;

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
    uVar3 = *(ulong *)(param_1 + 0xce);
    if (uVar3 < *(ulong *)(param_1 + 0xcc)) {
LAB_1000647a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_1000f110 != 0) {
      recovered_10000f90(local_218,&DAT_1000f120,DAT_1000f110);
      local_218[DAT_1000f110] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_1000f110 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000dd6a,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10002a00((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_1000647a;
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x46);
    if (uVar3 < *(ulong *)(param_1 + 0x42)) {
      *(ulong *)(param_1 + 0x46) = uVar3 + 1;
      return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar3);
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
#undef DAT_1000dd6a
#undef DAT_1000f110
#undef DAT_1000f120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006610
 */

long recovered_10006610(long param_1,long param_2,long param_3,uint *param_4,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar5 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_10005850(param_1,uVar5,in_R8);
    *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
  }
  else {
    if (*(char *)((long)param_4 + 0x126) == '\0') {
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    else {
      uVar4 = *(ulong *)(param_4 + 0x42);
      *(ulong *)(param_4 + 0x46) = uVar4;
    }
    uVar2 = *(ulong *)(param_4 + 0x44);
    if (uVar2 < uVar4 + uVar5) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + uVar5);
      pvVar3 = recovered_10000f40(*(void **)(param_4 + 0x40),uVar2);
      if (pvVar3 == (void *)0x0) {
        DAT_1000f060 = 0xc;
        *(undefined1 *)((long)param_4 + 0x129) = 1;
        return 0;
      }
      *(void **)(param_4 + 0x40) = pvVar3;
      *(ulong *)(param_4 + 0x44) = uVar2;
      *(void **)(param_4 + 0x3e) = pvVar3;
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    uVar2 = *(ulong *)(param_4 + 0x42);
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10001c90((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10000f90((void *)(uVar4 + *(long *)(param_4 + 0x40)),(void *)param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1000f060

#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a0
 */

undefined8 recovered_100067a0(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_100067ae;
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
LAB_100067ae:
  DAT_1000f060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000f060

#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006820
 */

undefined8 recovered_10006820(long param_1)

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
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006850(int *param_1)

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
 * Address: 0x10006900
 */

undefined1 recovered_10006900(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006920
 */

undefined1 recovered_10006920(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006940
 */

void recovered_10006940(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006960
 */

uint recovered_10006960(uint param_1,long param_2)

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
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006990(long param_1)

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
#define DAT_1000f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1741U)))
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
 * Address: 0x10006a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006a10(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000f060 = 0x16;
    return 0xffffffff;
  }
  recovered_10001c90(&local_2c,0,0xc);
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
 * Address: 0x10006b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10006b80(long param_1,undefined8 *param_2,ulong *param_3,undefined8 *in_R8)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10001c90(&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10006c3f;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        destination = recovered_10000ea0((ulong)(local_30 + (local_30 == 0)));
        if (destination != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10000f90(destination,(void *)(ulong)local_34,(ulong)local_30);
            uVar2 = (ulong)local_30;
          }
          *param_2 = destination;
          *param_3 = uVar2;
          uVar2 = CONCAT71((int7)((ulong)destination >> 8),1);
          goto LAB_10006c3f;
        }
      }
    }
  }
  uVar2 = 0;
LAB_10006c3f:
  return uVar2 & 0xffffffff;
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
 * Address: 0x10006c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006c60(long param_1,long param_2,long param_3)

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
 * Address: 0x10006cd0
 */

undefined8 recovered_10006cd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce0
 */

void recovered_10006ce0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf0
 */

undefined8 recovered_10006cf0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d00
 */

undefined8 recovered_10006d00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d10
 */

undefined8 recovered_10006d10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d20
 */

char * recovered_10006d20(char *param_1,char param_2,long param_3)

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
 * Address: 0x10006d50
 */

int recovered_10006d50(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  bool bVar3;

  if (count == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    bVar1 = left[lVar2];
    if (bVar1 != right[lVar2]) {
      return (uint)bVar1 - (uint)(byte)right[lVar2];
    }
  } while ((bVar1 != 0) && (bVar3 = count - 1 != lVar2, lVar2 = lVar2 + 1, bVar3));
  return 0;
}


#undef DAT_1000ddd8
#define DAT_1000ddd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b9U)))
#undef str_1000dddb
#define str_1000dddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bcU)))
#undef str_1000dde8
#define str_1000dde8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c9U)))
#undef str_1000ddf2
#define str_1000ddf2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_1000de06
#define str_1000de06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e7U)))
#undef str_1000de14
#define str_1000de14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_1000de26
#define str_1000de26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x507U)))
#undef str_1000de32
#define str_1000de32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x513U)))
#undef str_1000de43
#define str_1000de43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x524U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d90
 */

char * recovered_10006d90(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000ddd8;
  default:
    return str_1000de43;
  case 2:
    return str_1000dddb;
  case 5:
    return str_1000dde8;
  case 9:
    return str_1000ddf2;
  case 0xc:
    return str_1000de06;
  case 0xd:
    return str_1000de14;
  case 0x11:
    return str_1000de26;
  case 0x16:
    return str_1000de32;
  }
}

#undef DAT_1000ddd8
#undef str_1000dddb
#undef str_1000dde8
#undef str_1000ddf2
#undef str_1000de06
#undef str_1000de14
#undef str_1000de26
#undef str_1000de32
#undef str_1000de43

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

undefined8 recovered_10006e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000f320
#define DAT_1000f320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a01U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

void recovered_10006e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f320 = DAT_1000f320 + 1;
  return;
}

#undef DAT_1000f320

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006ea0(void *context,uintptr_t unused){__asm__ volatile("movq 80(%rdi),%rsp\nmovq 64(%rdi),%rbp\nmovq 72(%rdi),%rdx\njmpq *%rdx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006eb0(void *context) { __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006ee0(void *context,int value) { __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx"); }


#undef DAT_10006f61
#define DAT_10006f61 (*(uint8_t *)(0x10006f61U))
#undef DAT_1000e230
#define DAT_1000e230 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x911U)))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

void recovered_10006f10(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000e230;
  local_50 = &DAT_10006f61;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000e70();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10006f61
#undef DAT_1000e230
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f90
 */

undefined8 recovered_10006f90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fa0
 */

void recovered_10006fa0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006fb0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}


#undef DAT_1000f328
#define DAT_1000f328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a09U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fb0
 */

long recovered_10006fb0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000f328;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000f328 = param_1;
  lVar1 = recovered_100073d0(param_1);
  return lVar1;
}

#undef DAT_1000f328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe0
 */

void * recovered_10006fe0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ea0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e70();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

void * recovered_10007010(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ea0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e70();
  }
  return pvVar1;
}


#undef DAT_1000e240
#define DAT_1000e240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x921U)))
#undef LAB_100070ad
#define LAB_100070ad (*(uint8_t *)(0x100070adU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

void recovered_10007040(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000e240;
  local_50 = &LAB_100070ad;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000e240
#undef LAB_100070ad
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000e250
#define DAT_1000e250 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x931U)))
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
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000e250;
  local_50 = &LAB_1000714d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000e250
#undef LAB_1000714d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000e260
#define DAT_1000e260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x941U)))
#undef LAB_100071ed
#define LAB_100071ed (*(uint8_t *)(0x100071edU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007180
 */

void recovered_10007180(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000e260;
  local_50 = &LAB_100071ed;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000e260
#undef LAB_100071ed
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000e270
#define DAT_1000e270 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x951U)))
#undef LAB_1000728d
#define LAB_1000728d (*(uint8_t *)(0x1000728dU))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

void recovered_10007220(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000e270;
  local_50 = &LAB_1000728d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000e270
#undef LAB_1000728d
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef auStack_40
#undef local_80
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c0
 */

undefined8 recovered_100072c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072d0
 */

uint recovered_100072d0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072e0
 */

void recovered_100072e0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f0
 */

void recovered_100072f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007300
 */

long recovered_10007300(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10000ea0(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f10();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_1000736c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_1000739f;
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
      if (size == uVar3) goto LAB_100073a4;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000736c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_1000739f:
    } while (size != uVar3);
  }
LAB_100073a4:
  return (long)pvVar2 + 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073b0
 */

void recovered_100073b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000ef0((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

long recovered_100073d0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000f328
#define DAT_1000f328 (*(void * *)(((uintptr_t)pf_module_state + 0x1a09U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073e0
 */

void recovered_100073e0(void)

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
      recovered_10000ef0(pointer);
      return;
    }
  }
  return;
}

#undef DAT_1000f328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007430
 */

void recovered_10007430(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007460((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000f328
#define DAT_1000f328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a09U)))
#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a11U)))
#define cStack_36 (*(char *)(frame + 26))
#define uStack_35 (*(undefined1 *)(frame + 27))
#define uStack_34 (*(undefined4 *)(frame + 28))
#define local_38 (*(undefined2 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007460
 */

void recovered_10007460(undefined8 *param_1)

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
      uVar3 = recovered_10007f00((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_100075b0(param_1,in_RSI);
        puVar2 = DAT_1000f328;
        if (DAT_1000f328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006f10();
        }
        *(undefined1 *)(DAT_1000f328 + 5) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007460(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1000f328
#undef DAT_1000f330
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1000f328
#define DAT_1000f328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a09U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e0
 */

void recovered_100074e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000f328;
  if (DAT_1000f328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f10();
  }
  *(undefined1 *)(DAT_1000f328 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007460(puVar1);
}

#undef DAT_1000f328

#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a11U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007510
 */

void recovered_10007510(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000f330;
  DAT_1000f330 = param_1;
  return;
}

#undef DAT_1000f330

#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a11U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007530
 */

void recovered_10007530(undefined8 *param_1)

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
 * Address: 0x10007570
 */

void recovered_10007570(undefined8 *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007460(in_RDI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007580
 */

void recovered_10007580(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}


#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a11U)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007590
 */

undefined8 recovered_10007590(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_1000f330 != (undefined8 *)0x0) {
    DAT_1000f330 = (undefined8 *)*DAT_1000f330;
  }
  recovered_100075b0(param_1,in_RSI);
  if (DAT_1000f330 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1000f330;
      if (DAT_1000f330 == puVar1) {
        DAT_1000f330[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_1000763c:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10006ea0((long)puVar3,in_RSI);
        recovered_10007590(puVar3,in_RSI);
        return 0;
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007f00((long)DAT_1000f330,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_1000763c;
      }
      DAT_1000f330 = (undefined8 *)*puVar3;
    } while (DAT_1000f330 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1000f330
#undef uStack_40
#undef uStack_38

#undef DAT_1000f330
#define DAT_1000f330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1a11U)))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b0
 */

undefined8 recovered_100075b0(undefined8 *param_1,byte *in_RSI)

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
LAB_1000763c:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10006ea0((long)plVar3,in_RSI);
        recovered_10007590(plVar3,in_RSI);
        return 0;
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007f00((long)DAT_1000f330,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_1000763c;
      }
      DAT_1000f330 = (long *)*plVar3;
    } while (DAT_1000f330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1000f330
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007650
 */

undefined8 recovered_10007650(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007590(in_RDI,in_RSI);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007660
 */

undefined8 recovered_10007660(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007670
 */

void recovered_10007670(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}


#undef DAT_1000f0c0
#define DAT_1000f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007680
 */

long recovered_10007680(long *param_1,undefined8 param_2,undefined8 *param_3)

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
        if (lVar3 == lVar4) goto LAB_10007744;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10007744;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1000f0c0) goto LAB_1000774c;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_10007744:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_1000774c:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000f0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007760
 */

void recovered_10007760(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e70();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007770
 */

undefined8 recovered_10007770(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007780
 */

bool recovered_10007780(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a0
 */

bool recovered_100077a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d0
 */

bool recovered_100077d0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

bool recovered_100077f0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007820
 */

bool recovered_10007820(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007840
 */

byte recovered_10007840(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007880
 */

bool recovered_10007880(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_100078b0(double value) {
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
float recovered_10007a20(float value){return (float)recovered_100078b0((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007bb0(long double value){return (long double)recovered_100078b0((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10007d40(long end,long start){return (double)end-(double)start;}


#undef DAT_1000d920
#define DAT_1000d920 (*(double *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000d928
#define DAT_1000d928 (*(double *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000d948
#define DAT_1000d948 (*(double *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000d988
#define DAT_1000d988 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d60
 */

double recovered_10007d60(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10003420(param_1);
  if (DAT_1000d920 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000d928;
  }
  else if (param_1 - dVar1 <= DAT_1000d988) {
    dVar1 = dVar1 + DAT_1000d948;
  }
  return dVar1;
}

#undef DAT_1000d920
#undef DAT_1000d928
#undef DAT_1000d948
#undef DAT_1000d988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007db0
 */

long recovered_10007db0(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto joined_r0x10007e0d;
    }
  }
  bVar7 = false;
joined_r0x10007e0d:
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
 * Address: 0x10007ef0
 */

void recovered_10007ef0(byte *in_RDI,undefined8 *in_RSI,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007db0(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1000da70
#define DAT_1000da70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000f0c0
#define DAT_1000f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a1U)))
#define local_40 (*(byte * *)(frame + 16))
#define local_31 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f00
 */

undefined8 recovered_10007f00(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_100082a0((uint)*pbVar8,(long *)&local_40);
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
          goto LAB_100080d0;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_100080d0:
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
LAB_1000827b:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000da70 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_100082a0((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_1000827b;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_1000827b;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_1000827b;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1000f0c0) goto LAB_10008258;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_1000827b;
  }
LAB_10008258:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_100080d0;
}

#undef DAT_1000da70
#undef DAT_1000f0c0
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082a0
 */

byte * recovered_100082a0(uint param_1,long *param_2)

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
    goto LAB_100083c9;
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
    goto LAB_100083c5;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10008319;
  default:
    goto switchD_100082d1_caseD_5;
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
LAB_100083c5:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_100083c9:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10008319:
    puVar6 = puVar1 + 1;
    goto LAB_100083c9;
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
switchD_100082d1_caseD_5:
  return pbVar3;
}


#undef str_1000de72
#define str_1000de72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x553U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008430
 */

char * recovered_10008430(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return str_1000de72;
}

#undef str_1000de72

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006968
#define DAT_00006968 (*(uint8_t *)(0x6968U))
#undef DAT_1000dd6a
#define DAT_1000dd6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44bU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006968
#define _DAT_00006968 (*(uint *)(0x6968U))
#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
#define local_40 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008440(void *context,void *io,char *hostname)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  char *text;
  uint uVar6;
  ulong count;

  if (context != (void *)0x0) {
    recovered_10001c90(context,0,0x220);
    if (io != (void *)0x0) {
      *(undefined8 *)((long)context + 0x20) = *(undefined8 *)((long)io + 0x20);
      uVar1 = *(undefined8 *)io;
      uVar2 = *(undefined8 *)((long)io + 8);
      uVar3 = *(undefined8 *)((long)io + 0x18);
      *(undefined8 *)((long)context + 0x10) = *(undefined8 *)((long)io + 0x10);
      *(undefined8 *)((long)context + 0x18) = uVar3;
      *(undefined8 *)context = uVar1;
      *(undefined8 *)((long)context + 8) = uVar2;
    }
    text = &DAT_1000dd6a;
    if (hostname != (char *)0x0) {
      text = hostname;
    }
    uVar5 = recovered_10002a00(text);
    count = 0x7f;
    if (uVar5 < 0x7f) {
      count = uVar5;
    }
    recovered_10000f90((void *)((long)context + 0x28),text,count);
    *(undefined1 *)((long)context + count + 0x28) = 0;
    recovered_10001c90(local_40,0,0x18);
    uVar6 = 0x574d544c;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x16b < _DAT_00006808 && ((code *)(ulong)_DAT_00006968 != (code *)0x0)))) {
      iVar4 = (*(code *)(ulong)_DAT_00006968)(local_40);
      if (iVar4 != 0) {
        uVar6 = local_34 * 0x3c6ef35f ^ local_38 ^ local_30 * 0x19660d ^ 0x574d544c;
      }
    }
    *(uint *)((long)context + 0x218) = (uint)context ^ uVar6 ^ *(uint *)((long)context + 0x218);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006968
#undef DAT_1000dd6a
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006968
#undef local_38
#undef local_34
#undef local_30
#undef local_40

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_1000dae0
#define DAT_1000dae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000daf0
#define DAT_1000daf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef UNK_1000dae8
#define UNK_1000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000daf8
#define UNK_1000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
#undef _DAT_1000dae0
#define _DAT_1000dae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000daf0
#define _DAT_1000daf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_1000dbd0
#define str_1000dbd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_1000de06
#define str_1000de06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e7U)))
#undef str_1000dea0
#define str_1000dea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x581U)))
#undef str_1000debb
#define str_1000debb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59cU)))
#undef str_1000df2e
#define str_1000df2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60fU)))
#undef str_1000df50
#define str_1000df50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x631U)))
#undef uRam000000001000dae8
#define uRam000000001000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000daf8
#define uRam000000001000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define local_698 (*(undefined1 *)(frame + 24))
#define local_697 (*(undefined1 *)(frame + 25))
#define local_696 (*(undefined1 *)(frame + 26))
#define local_695 (*(undefined1 *)(frame + 27))
#define local_694 (*(undefined2 *)(frame + 28))
#define local_692 (*(undefined1 (*)[32])(frame + 30))
#define local_672 (*(undefined4 *)(frame + 62))
#define local_66e (*(undefined2 *)(frame + 66))
#define uStack_3b0 (*(undefined8 *)(frame + 768))
#define local_66c (*(undefined1 *)(frame + 68))
#define local_66b (*(undefined1 *)(frame + 69))
#define uStack_3a0 (*(undefined8 *)(frame + 784))
#define local_66a (*(undefined1 *)(frame + 70))
#define local_669 (*(undefined1 (*)[465])(frame + 71))
#define uStack_394 (*(undefined4 *)(frame + 796))
#define auStack_390 (*(undefined1 (*)[4])(frame + 800))
#define local_498 (*(undefined1 (*)[32])(frame + 536))
#define local_478 (*(undefined1 (*)[32])(frame + 568))
#define uStack_38c (*(undefined4 *)(frame + 804))
#define local_458 (*(undefined1 (*)[32])(frame + 600))
#define local_438 (*(undefined1 (*)[32])(frame + 632))
#define uStack_380 (*(undefined8 *)(frame + 816))
#define local_418 (*(undefined1 (*)[32])(frame + 664))
#define local_3f8 (*(undefined8 (*)[4])(frame + 696))
#define uStack_370 (*(undefined8 *)(frame + 832))
#define local_3d8 (*(undefined1 (*)[32])(frame + 728))
#define local_3b8 (*(undefined8 *)(frame + 760))
#define uStack_360 (*(undefined8 *)(frame + 848))
#define local_3a8 (*(undefined8 *)(frame + 776))
#define local_398 (*(undefined4 *)(frame + 792))
#define uStack_350 (*(undefined8 *)(frame + 864))
#define local_388 (*(undefined8 *)(frame + 808))
#define local_378 (*(undefined8 *)(frame + 824))
#define local_368 (*(undefined8 *)(frame + 840))
#define local_358 (*(undefined8 *)(frame + 856))
#define local_1a8 (*(uint (*)[8])(frame + 1288))
#define local_188 (*(undefined4 *)(frame + 1320))
#define local_184 (*(undefined2 *)(frame + 1324))
#define local_182 (*(undefined8 (*)[31])(frame + 1326))
#define local_88 (*(uint (*)[10])(frame + 1576))
#define local_60 (*(ulong *)(frame + 1616))
#define local_58 (*(char * *)(frame + 1624))
#define local_50 (*(ulong *)(frame + 1632))
#define local_48 (*(undefined8 * *)(frame + 1640))
#define local_40 (*(ulong *)(frame + 1648))
#define local_38 (*(char * *)(frame + 1656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10008560(void *context,char *error,ulong capacity)

{
  unsigned char frame[1744] __attribute__((aligned(16))) = {0};

  ulong count;
  undefined8 *context_00;
  undefined1 in_XMM2 [16];
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte *data;
  char *pcVar8;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db_00;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM2_Dc_00;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd_00;
  undefined4 in_XMM2_Dd;

  local_50 = 0;
  if ((((context == (void *)0x0) || (*(long *)((long)context + 8) == 0)) ||
      (*(long *)((long)context + 0x10) == 0)) || (*(char *)((long)context + 0x28) == '\0')) {
    pcVar8 = str_1000dea0;
  }
  else {
    pcVar8 = (char *)((long)context + 0x28);
    local_48 = context;
    local_40 = capacity;
    local_38 = error;
    uVar7 = recovered_10002a00(pcVar8);
    puVar3 = local_48;
    if (uVar7 - 0xb5 < 0xffffffffffffff4c) {
      pcVar8 = str_1000debb;
    }
    else {
      recovered_1000c090(local_48,local_88);
      recovered_1000c090(puVar3,local_1a8);
      recovered_100090b0(local_498,local_1a8,str_1000dbd0 + 0x30);
      recovered_10001c90(&local_3b8,0,0x200);
      recovered_10001c90(&local_188,0,0x100);
      iVar5 = (int)uVar7 + 3;
      local_188 = (uint)CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8));
      local_184 = CONCAT11(PF_PART1(local_184, 1),(char)uVar7);
      local_58 = pcVar8;
      recovered_10000f90((void *)((long)&local_184 + 1),pcVar8,uVar7);
      uVar7 = uVar7 & 0xffff;
      local_60 = uVar7 + 5;
      local_3b8 = (ulong)CONCAT42(PF_PART4(local_3b8, 4),CONCAT11((char)local_60,(char)(local_60 >> 8))) <<
                  0x10;
      recovered_10000f90((void *)((long)&local_3b8 + 4),&local_188,local_60);
      local_188 = CONCAT13(PF_PART1(local_188, 3),0x40302);
      *(undefined4 *)(auStack_390 + (uVar7 - 0x1f)) = 0x3002b00;
      recovered_10000f90(auStack_390 + (uVar7 - 0x1b),&local_188,3);
      local_188 = 0x1d000200;
      *(undefined4 *)(auStack_390 + (uVar7 - 0x18)) = 0x4000a00;
      recovered_10000f90(auStack_390 + (uVar7 - 0x14),&local_188,4);
      local_188 = 0x3040c00;
      local_184 = 0x408;
      local_182[0] = 0x608050801050104;
      *(undefined4 *)(auStack_390 + (uVar7 - 0x10)) = 0xe000d00;
      recovered_10000f90(auStack_390 + (uVar7 - 0xc),&local_188,0xe);
      local_188 = 0x1d002400;
      local_184 = 0x2000;
      recovered_10000f90(local_182,local_498,0x20);
      *(undefined4 *)(auStack_390 + uVar7 + 2) = 0x26003300;
      recovered_10000f90(auStack_390 + uVar7 + 6,&local_188,0x26);
      count = uVar7 + 0x54;
      local_698 = 1;
      local_694 = 0x303;
      recovered_10000f90(local_692,local_88,0x20);
      local_672 = 0x13020000;
      local_66e = 0x103;
      local_66c = 0;
      local_66b = (undefined1)(count >> 8);
      local_66a = (undefined1)count;
      recovered_10000f90(local_669,&local_3b8,count);
      uVar1 = uRam000000001000dae8;
      iVar5 = (int)uVar7 + 0x7f;
      local_697 = 0;
      local_696 = (undefined1)((uint)iVar5 >> 8);
      local_695 = (undefined1)iVar5;
      uVar7 = uVar7 + 0x83;
      context_00 = puVar3 + 0x15;
      puVar3[0x15] = _DAT_1000dae0;
      puVar3[0x16] = uVar1;
      uVar1 = uRam000000001000daf8;
      puVar3[0x17] = _DAT_1000daf0;
      puVar3[0x18] = uVar1;
      puVar3[0x19] = 0;
      *(undefined4 *)(puVar3 + 0x22) = 0;
      recovered_10008bd0(context_00,&local_698,uVar7);
      lVar2 = local_3b8;
      PF_PART3(local_3b8, 5) = SUB83(lVar2,5);
      PF_PART5(local_3b8, 0) = CONCAT14((char)uVar7,CONCAT13((char)(uVar7 >> 8),0x10316));
      recovered_10000f90((void *)((long)&local_3b8 + 5),&local_698,uVar7);
      if ((code *)puVar3[2] == (code *)0x0) {
        pcVar8 = str_1000df2e;
      }
      else {
        cVar4 = (*(code *)puVar3[2])(*puVar3,&local_3b8,local_60 + 0x83,local_38,local_40);
        if (cVar4 == '\0') {
          return 0;
        }
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
            ((0xb < _DAT_00006808 &&
             ((0x4f < _DAT_00006808 && ((code *)(ulong)_DAT_0000684c != (code *)0x0)))))) &&
           (data = (byte *)(*(code *)(ulong)_DAT_0000684c)(0x4100), data != (byte *)0x0)) {
          local_3b8 = local_3b8 & 0xffffffffffffff00;
          PF_PART4(in_XMM2, 4) = in_XMM2_Db_00;
          PF_PART4(in_XMM2, 0) = in_XMM2_Da;
          PF_PART4(in_XMM2, 8) = in_XMM2_Dc_00;
          PF_PART4(in_XMM2, 12) = in_XMM2_Dd_00;
          uVar7 = recovered_1000b760(local_48,(undefined8 *)0x0,(byte *)&local_3b8,data,0x4100,
                                     &local_50,in_XMM2,local_38,local_40);
          if ((char)uVar7 != '\0') {
            if ((byte)local_3b8 == 0x16) {
              uVar7 = recovered_10008ea0((char *)data,local_50,(undefined8 *)&local_188,local_38,
                                         local_40);
              if ((char)uVar7 != '\0') {
                recovered_10008bd0(context_00,data,local_50);
                recovered_10008e50();
                recovered_100090b0(local_88,local_1a8,&local_188);
                recovered_10001c90(local_478,0,0x20);
                recovered_1000a460(local_478,local_478,local_458);
                recovered_1000a500((long)local_458,((uintptr_t)pf_module_state + 0x5b9U),(uint *)0x0,(long)local_438);
                recovered_1000a460(local_438,local_88,local_418);
                local_358 = puVar3[0x21];
                uStack_350 = puVar3[0x22];
                local_368 = puVar3[0x1f];
                uStack_360 = puVar3[0x20];
                local_378 = puVar3[0x1d];
                uStack_370 = puVar3[0x1e];
                local_3b8 = *context_00;
                uStack_3b0 = puVar3[0x16];
                local_3a8 = puVar3[0x17];
                uStack_3a0 = puVar3[0x18];
                uVar6 = *(undefined4 *)(puVar3 + 0x19);
                in_XMM2_Db = *(undefined4 *)((long)puVar3 + 0xcc);
                in_XMM2_Dc = *(undefined4 *)(puVar3 + 0x1a);
                in_XMM2_Dd = *(undefined4 *)((long)puVar3 + 0xd4);
                local_388 = puVar3[0x1b];
                uStack_380 = puVar3[0x1c];
                local_398 = uVar6;
                uStack_394 = in_XMM2_Db;
                PF_PART4(auStack_390,0) = PF_RAW32(in_XMM2_Dc);
                uStack_38c = in_XMM2_Dd;
                recovered_1000cc10(&local_3b8,local_3f8);
                recovered_1000ccf0((long)local_418,((uintptr_t)pf_module_state + 0x5c1U),local_3f8,0x20,(long)&local_3b8,0x20);
                recovered_1000ccf0((long)local_418,((uintptr_t)pf_module_state + 0x5ceU),local_3f8,0x20,(long)local_3d8,0x20);
                puVar3 = local_48;
                recovered_1000a590((long)(local_48 + 0x23),(long)&local_3b8);
                recovered_1000a590((long)(puVar3 + 0x2a),(long)local_3d8);
                *(undefined1 *)((long)puVar3 + 0x21c) = 1;
                uVar6 = recovered_1000a600(puVar3,(long)local_3d8,(long)local_418,(long)&local_3b8,
                                           local_38,local_40,uVar6,in_XMM2_Db,in_XMM2_Dc,in_XMM2_Dd)
                ;
                if ((char)uVar6 == '\0') {
                  return 0;
                }
                if (((code *)local_48[4] == (code *)0x0) ||
                   (cVar4 = (*(code *)local_48[4])
                                      (*local_48,local_58,local_48 + 0x3f,
                                       *(undefined1 *)((long)local_48 + 0x21e),local_38,local_40),
                   cVar4 != '\0')) {
                  return 1;
                }
                return 0;
              }
            }
            else {
              pf_varargs_10005610___(local_38,local_40,str_1000df50);
            }
          }
          recovered_10008e50();
          return 0;
        }
        pcVar8 = str_1000de06;
      }
    }
    capacity = local_40;
    error = local_38;
  }
  pf_varargs_10005610___(error,capacity,pcVar8);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_1000dae0
#undef DAT_1000daf0
#undef UNK_1000dae8
#undef UNK_1000daf8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_1000dae0
#undef _DAT_1000daf0
#undef str_1000dbd0
#undef str_1000de06
#undef str_1000dea0
#undef str_1000debb
#undef str_1000df2e
#undef str_1000df50
#undef uRam000000001000dae8
#undef uRam000000001000daf8
#undef local_698
#undef local_697
#undef local_696
#undef local_695
#undef local_694
#undef local_692
#undef local_672
#undef local_66e
#undef uStack_3b0
#undef local_66c
#undef local_66b
#undef uStack_3a0
#undef local_66a
#undef local_669
#undef uStack_394
#undef auStack_390
#undef local_498
#undef local_478
#undef uStack_38c
#undef local_458
#undef local_438
#undef uStack_380
#undef local_418
#undef local_3f8
#undef uStack_370
#undef local_3d8
#undef local_3b8
#undef uStack_360
#undef local_3a8
#undef local_398
#undef uStack_350
#undef local_388
#undef local_378
#undef local_368
#undef local_358
#undef local_1a8
#undef local_188
#undef local_184
#undef local_182
#undef local_88
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1000dc20
#define DAT_1000dc20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x301U)))
#define local_70 (*(ulong *)(frame + 352))
#define local_68 (*(void * *)(frame + 360))
#define local_60 (*(ulong *)(frame + 368))
#define local_58 (*(long *)(frame + 376))
#define local_50 (*(uint *)(frame + 384))
#define local_4c (*(uint *)(frame + 388))
#define local_48 (*(uint *)(frame + 392))
#define local_44 (*(uint *)(frame + 396))
#define local_40 (*(uint *)(frame + 400))
#define local_3c (*(uint *)(frame + 404))
#define local_38 (*(uint *)(frame + 408))
#define local_34 (*(uint *)(frame + 412))
#define auStack_1b4 (*(uint (*)[5])(frame + 28))
#define auStack_1a0 (*(uint (*)[8])(frame + 48))
#define auStack_180 (*(uint (*)[68])(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bd0
 */

void recovered_10008bd0(void *context,void *data,ulong size)

{
  unsigned char frame[496] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong count;
  uint uVar11;
  uint uVar12;

  if (((context != (void *)0x0) && (data != (void *)0x0 || size == 0)) &&
     (*(long *)((long)context + 0x20) = *(long *)((long)context + 0x20) + size, size != 0)) {
    lVar3 = (long)context + 0x28;
    uVar1 = *(uint *)((long)context + 0x68);
    local_58 = lVar3;
    do {
      count = (ulong)(0x40 - uVar1);
      if (size < 0x40 - uVar1) {
        count = size;
      }
      auStack_180[0] = 0x10008c5c;
      auStack_180[1] = 0;
      recovered_10000f90((void *)((ulong)uVar1 + lVar3),data,count);
      uVar1 = *(int *)((long)context + 0x68) + (int)count;
      *(uint *)((long)context + 0x68) = uVar1;
      if (uVar1 == 0x40) {
        lVar3 = 10;
        do {
          uVar1 = *(uint *)((long)context + lVar3 * 4);
          auStack_1a0[lVar3] =
               uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x1a);
        lVar3 = 0x10;
        uVar1 = auStack_180[2];
        do {
          uVar6 = auStack_1b4[lVar3];
          uVar8 = auStack_180[lVar3];
          auStack_180[lVar3 + 2] =
               uVar1 + auStack_1a0[lVar3 + 3] +
               (uVar6 >> 3 ^ (uVar6 << 0xe | uVar6 >> 0x12) ^ (uVar6 << 0x19 | uVar6 >> 7)) +
               (uVar8 >> 10 ^ (uVar8 << 0xd | uVar8 >> 0x13) ^ (uVar8 << 0xf | uVar8 >> 0x11));
          lVar3 = lVar3 + 1;
          uVar1 = uVar6;
        } while (lVar3 != 0x40);
        local_34 = *(uint *)context;
        local_38 = *(uint *)((long)context + 4);
        local_3c = *(uint *)((long)context + 8);
        local_40 = *(uint *)((long)context + 0xc);
        local_44 = *(uint *)((long)context + 0x10);
        local_48 = *(uint *)((long)context + 0x14);
        local_4c = *(uint *)((long)context + 0x18);
        local_50 = *(uint *)((long)context + 0x1c);
        lVar3 = 0;
        uVar1 = local_34;
        uVar6 = local_38;
        uVar8 = local_3c;
        uVar5 = local_40;
        uVar10 = local_44;
        uVar9 = local_48;
        uVar12 = local_4c;
        uVar7 = local_50;
        do {
          uVar11 = uVar12;
          uVar12 = uVar9;
          uVar9 = uVar10;
          uVar2 = uVar8;
          uVar8 = uVar6;
          uVar6 = uVar1;
          iVar4 = ((uVar12 ^ uVar11) & uVar9 ^ uVar11) + uVar7 +
                  ((uVar9 << 7 | uVar9 >> 0x19) ^
                  (uVar9 << 0x15 | uVar9 >> 0xb) ^ (uVar9 << 0x1a | uVar9 >> 6)) +
                  *(int *)((long)&DAT_1000dc20 + lVar3) + *(int *)((long)auStack_180 + lVar3 + 8);
          uVar10 = uVar5 + iVar4;
          uVar1 = (uVar2 & uVar8 ^ (uVar2 ^ uVar8) & uVar6) +
                  ((uVar6 << 10 | uVar6 >> 0x16) ^
                  (uVar6 << 0x13 | uVar6 >> 0xd) ^ (uVar6 << 0x1e | uVar6 >> 2)) + iVar4;
          lVar3 = lVar3 + 4;
          uVar5 = uVar2;
          uVar7 = uVar11;
        } while (lVar3 != 0x100);
        *(uint *)context = uVar1 + local_34;
        *(uint *)((long)context + 4) = uVar6 + local_38;
        *(uint *)((long)context + 8) = uVar8 + local_3c;
        *(uint *)((long)context + 0xc) = uVar2 + local_40;
        *(uint *)((long)context + 0x10) = uVar10 + local_44;
        *(uint *)((long)context + 0x14) = uVar9 + local_48;
        *(uint *)((long)context + 0x18) = uVar12 + local_4c;
        *(uint *)((long)context + 0x1c) = uVar11 + local_50;
        *(undefined4 *)((long)context + 0x68) = 0;
        uVar1 = 0;
        lVar3 = local_58;
        local_70 = size;
        local_68 = data;
        local_60 = count;
      }
      data = (void *)((long)data + count);
      size = size - count;
    } while (size != 0);
  }
  return;
}

#undef DAT_1000dc20
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef auStack_1b4
#undef auStack_1a0
#undef auStack_180

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10008e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_00006850)();
    return;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850

#undef str_1000df6e
#define str_1000df6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64fU)))
#undef str_1000df87
#define str_1000df87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x668U)))
#undef str_1000dfa1
#define str_1000dfa1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x682U)))
#undef str_1000dfbd
#define str_1000dfbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69eU)))
#undef str_1000dfd7
#define str_1000dfd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b8U)))
#undef str_1000e003
#define str_1000e003 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e4U)))
#undef str_1000e01c
#define str_1000e01c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fdU)))
#undef str_1000e035
#define str_1000e035 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x716U)))
#undef str_1000e04b
#define str_1000e04b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ea0
 */

ulong recovered_10008ea0(char *param_1,ulong param_2,undefined8 *param_3,char *param_4,ulong param_5
                        )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *format;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 *unaff_R14;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;

  format = str_1000df6e;
  if ((3 < param_2) && (*param_1 == '\x02')) {
    uVar4 = (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[1] << 0x10;
    if ((byte)param_1[3] + uVar4 < 0x26 || param_2 < (byte)param_1[3] + uVar4 + 4) {
      format = str_1000df87;
    }
    else {
      format = str_1000dfa1;
      if ((param_1[4] == '\x03') && (param_1[5] == '\x03')) {
        uVar2 = (ulong)(byte)param_1[0x26];
        if (param_2 < uVar2 + 0x2b) {
          format = str_1000dfbd;
        }
        else if ((ushort)(*(ushort *)(param_1 + uVar2 + 0x27) << 8 |
                         *(ushort *)(param_1 + uVar2 + 0x27) >> 8) == 0x1303) {
          format = str_1000e003;
          if ((param_1[uVar2 + 0x29] == '\0') && (uVar7 = uVar2 + 0x2c, uVar7 <= param_2)) {
            uVar6 = (ushort)(*(ushort *)(param_1 + uVar2 + 0x2a) << 8 |
                            *(ushort *)(param_1 + uVar2 + 0x2a) >> 8) + uVar7;
            if (param_2 < uVar6) {
              format = str_1000e01c;
            }
            else {
              uVar2 = uVar2 + 0x30;
              format = str_1000e04b;
              if (uVar2 <= uVar6) {
                bVar1 = 0;
                bVar9 = false;
                do {
                  uVar3 = *(ushort *)(param_1 + uVar7 + 2) << 8 |
                          *(ushort *)(param_1 + uVar7 + 2) >> 8;
                  uVar8 = uVar3 + uVar2;
                  if (uVar6 < uVar8) {
                    format = str_1000e035;
                    goto LAB_10008f8b;
                  }
                  uVar5 = *(ushort *)(param_1 + uVar7) << 8 | *(ushort *)(param_1 + uVar7) >> 8;
                  if ((uVar5 == 0x2b) && (1 < uVar3)) {
                    bVar9 = (ushort)(*(ushort *)(param_1 + uVar2) << 8 |
                                    *(ushort *)(param_1 + uVar2) >> 8) == 0x304;
                  }
                  else if ((uVar5 == 0x33) &&
                          (((0x23 < uVar3 &&
                            ((ushort)(*(ushort *)(param_1 + uVar2) << 8 |
                                     *(ushort *)(param_1 + uVar2) >> 8) == 0x1d)) &&
                           ((ushort)(*(ushort *)(param_1 + uVar2 + 2) << 8 |
                                    *(ushort *)(param_1 + uVar2 + 2) >> 8) == 0x20)))) {
                    recovered_10000f90(param_3,param_1 + uVar2 + 4,0x20);
                    bVar1 = 1;
                    unaff_R14 = param_3;
                  }
                  uVar2 = uVar8 + 4;
                  uVar7 = uVar8;
                } while (uVar2 <= uVar6);
                uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
                if ((bool)(bVar9 & bVar1)) goto LAB_10008f9e;
              }
            }
          }
        }
        else {
          format = str_1000dfd7;
        }
      }
    }
  }
LAB_10008f8b:
  uVar2 = 0;
  pf_varargs_10005610___(param_4,param_5,format);
LAB_10008f9e:
  return uVar2 & 0xffffffff;
}

#undef str_1000df6e
#undef str_1000df87
#undef str_1000dfa1
#undef str_1000dfbd
#undef str_1000dfd7
#undef str_1000e003
#undef str_1000e01c
#undef str_1000e035
#undef str_1000e04b

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
void recovered_100090b0(void *output,void *scalar,void *point){
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


#define local_158 (*(undefined1 (*)[112])(frame + 24))
#define local_e8 (*(undefined1 (*)[112])(frame + 136))
#define local_78 (*(undefined1 (*)[32])(frame + 248))
#define local_58 (*(undefined1 (*)[40])(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a460
 */

void recovered_1000a460(void *salt,void *input,void *output)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    salt = local_58;
    recovered_10001c90(salt,0,0x20);
  }
  recovered_1000cad0(local_158,local_e8,salt);
  recovered_10008bd0(local_158,input,0x20);
  recovered_1000cc10(local_158,local_78);
  recovered_10008bd0(local_e8,local_78,0x20);
  recovered_1000cc10(local_e8,output);
  return;
}

#undef local_158
#undef local_e8
#undef local_78
#undef local_58

#undef DAT_1000dae0
#define DAT_1000dae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000daf0
#define DAT_1000daf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef UNK_1000dae8
#define UNK_1000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000daf8
#define UNK_1000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef _DAT_1000dae0
#define _DAT_1000dae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000daf0
#define _DAT_1000daf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef uRam000000001000dae8
#define uRam000000001000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000daf8
#define uRam000000001000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define local_b8 (*(uint (*)[8])(frame + 24))
#define local_98 (*(undefined8 *)(frame + 56))
#define uStack_90 (*(undefined8 *)(frame + 64))
#define local_88 (*(undefined8 *)(frame + 72))
#define local_78 (*(undefined8 *)(frame + 88))
#define uStack_80 (*(undefined8 *)(frame + 80))
#define local_30 (*(undefined4 *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a500
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a500(long param_1,long param_2,uint *param_3,long param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  if (param_3 == (uint *)0x0) {
    local_98 = _DAT_1000dae0;
    uStack_90 = uRam000000001000dae8;
    local_88 = _DAT_1000daf0;
    uStack_80 = uRam000000001000daf8;
    local_30 = 0;
    local_78 = 0;
    param_3 = local_b8;
    recovered_1000cc10(&local_98,param_3);
  }
  recovered_1000ccf0(param_1,param_2,(undefined8 *)param_3,0x20,param_4,0x20);
  return;
}

#undef DAT_1000dae0
#undef DAT_1000daf0
#undef UNK_1000dae8
#undef UNK_1000daf8
#undef _DAT_1000dae0
#undef _DAT_1000daf0
#undef uRam000000001000dae8
#undef uRam000000001000daf8
#undef local_b8
#undef local_98
#undef uStack_90
#undef local_88
#undef local_78
#undef uStack_80
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a590
 */

void recovered_1000a590(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != 0 && param_1 != 0) {
    recovered_10001c90((void *)param_1,0,0x38);
    recovered_1000ccf0(param_2,((uintptr_t)pf_module_state + 0x75fU),(undefined8 *)0x0,0,param_1,0x20);
    recovered_1000ccf0(param_2,((uintptr_t)pf_module_state + 0x763U),(undefined8 *)0x0,0,param_1 + 0x20,0xc);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
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
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_1000dae0
#define DAT_1000dae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000daf0
#define DAT_1000daf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef DAT_1000db20
#define DAT_1000db20 (*(byte *)(((uintptr_t)pf_module_state + 0x201U)))
#undef UNK_1000dae8
#define UNK_1000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000daf8
#define UNK_1000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef UNK_1000db21
#define UNK_1000db21 (*(byte *)(((uintptr_t)pf_module_state + 0x202U)))
#undef UNK_1000db22
#define UNK_1000db22 (*(byte *)(((uintptr_t)pf_module_state + 0x203U)))
#undef UNK_1000db23
#define UNK_1000db23 (*(byte *)(((uintptr_t)pf_module_state + 0x204U)))
#undef UNK_1000db24
#define UNK_1000db24 (*(byte *)(((uintptr_t)pf_module_state + 0x205U)))
#undef UNK_1000db25
#define UNK_1000db25 (*(byte *)(((uintptr_t)pf_module_state + 0x206U)))
#undef UNK_1000db26
#define UNK_1000db26 (*(byte *)(((uintptr_t)pf_module_state + 0x207U)))
#undef UNK_1000db27
#define UNK_1000db27 (*(byte *)(((uintptr_t)pf_module_state + 0x208U)))
#undef UNK_1000db28
#define UNK_1000db28 (*(byte *)(((uintptr_t)pf_module_state + 0x209U)))
#undef UNK_1000db29
#define UNK_1000db29 (*(byte *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef UNK_1000db2a
#define UNK_1000db2a (*(byte *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef UNK_1000db2b
#define UNK_1000db2b (*(byte *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef UNK_1000db2c
#define UNK_1000db2c (*(byte *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef UNK_1000db2d
#define UNK_1000db2d (*(byte *)(((uintptr_t)pf_module_state + 0x20eU)))
#undef UNK_1000db2e
#define UNK_1000db2e (*(byte *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef UNK_1000db2f
#define UNK_1000db2f (*(byte *)(((uintptr_t)pf_module_state + 0x210U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
#undef _DAT_1000dae0
#define _DAT_1000dae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000daf0
#define _DAT_1000daf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef bRam000000001000db21
#define bRam000000001000db21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202U)))
#undef bRam000000001000db22
#define bRam000000001000db22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef bRam000000001000db23
#define bRam000000001000db23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef bRam000000001000db24
#define bRam000000001000db24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x205U)))
#undef bRam000000001000db25
#define bRam000000001000db25 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x206U)))
#undef bRam000000001000db26
#define bRam000000001000db26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207U)))
#undef bRam000000001000db27
#define bRam000000001000db27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x208U)))
#undef bRam000000001000db28
#define bRam000000001000db28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef bRam000000001000db29
#define bRam000000001000db29 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef bRam000000001000db2a
#define bRam000000001000db2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef bRam000000001000db2b
#define bRam000000001000db2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef bRam000000001000db2c
#define bRam000000001000db2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef bRam000000001000db2d
#define bRam000000001000db2d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20eU)))
#undef bRam000000001000db2e
#define bRam000000001000db2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef bRam000000001000db2f
#define bRam000000001000db2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x210U)))
#undef str_1000de06
#define str_1000de06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e7U)))
#undef str_1000e085
#define str_1000e085 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x766U)))
#undef str_1000e09b
#define str_1000e09b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77cU)))
#undef str_1000e0b3
#define str_1000e0b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x794U)))
#undef str_1000e0d8
#define str_1000e0d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b9U)))
#undef uRam000000001000dae8
#define uRam000000001000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000daf8
#define uRam000000001000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define local_318 (*(undefined1 (*)[32])(frame + 24))
#define local_2f8 (*(undefined1 (*)[32])(frame + 56))
#define local_2d8 (*(undefined1 (*)[32])(frame + 88))
#define local_2b8 (*(undefined1 (*)[32])(frame + 120))
#define local_298 (*(undefined8 (*)[14])(frame + 152))
#define local_228 (*(undefined1 (*)[32])(frame + 264))
#define local_208 (*(undefined1 (*)[32])(frame + 296))
#define local_1e8 (*(undefined1 (*)[32])(frame + 328))
#define local_1c8 (*(undefined1 (*)[32])(frame + 360))
#define local_1a8 (*(undefined1 (*)[32])(frame + 392))
#define local_188 (*(byte *)(frame + 424))
#define local_178 (*(byte *)(frame + 440))
#define local_168 (*(undefined4 *)(frame + 456))
#define local_164 (*(undefined1 (*)[44])(frame + 460))
#define local_138 (*(ulong (*)[4])(frame + 504))
#define local_118 (*(byte (*)[32])(frame + 536))
#define local_f8 (*(undefined8 * *)(frame + 568))
#define local_f0 (*(long *)(frame + 576))
#define local_e8 (*(long *)(frame + 584))
#define local_e0 (*(undefined8 * *)(frame + 592))
#define local_d8 (*(undefined8 *)(frame + 600))
#define local_c8 (*(undefined8 *)(frame + 616))
#define local_b8 (*(undefined8 *)(frame + 632))
#define local_a8 (*(undefined8 *)(frame + 648))
#define local_98 (*(undefined8 *)(frame + 664))
#define local_88 (*(undefined8 *)(frame + 680))
#define local_78 (*(undefined8 *)(frame + 696))
#define local_60 (*(long *)(frame + 720))
#define local_58 (*(undefined8 * *)(frame + 728))
#define local_50 (*(undefined8 * *)(frame + 736))
#define local_48 (*(void * *)(frame + 744))
#define local_40 (*(ulong *)(frame + 752))
#define local_38 (*(char * *)(frame + 760))
#define bStack_187 (*(byte *)(frame + 425))
#define bStack_186 (*(byte *)(frame + 426))
#define bStack_185 (*(byte *)(frame + 427))
#define bStack_184 (*(byte *)(frame + 428))
#define bStack_183 (*(byte *)(frame + 429))
#define bStack_182 (*(byte *)(frame + 430))
#define bStack_181 (*(byte *)(frame + 431))
#define bStack_180 (*(byte *)(frame + 432))
#define bStack_17f (*(byte *)(frame + 433))
#define bStack_17e (*(byte *)(frame + 434))
#define bStack_17d (*(byte *)(frame + 435))
#define bStack_17c (*(byte *)(frame + 436))
#define bStack_17b (*(byte *)(frame + 437))
#define bStack_17a (*(byte *)(frame + 438))
#define bStack_179 (*(byte *)(frame + 439))
#define bStack_177 (*(byte *)(frame + 441))
#define bStack_176 (*(byte *)(frame + 442))
#define bStack_175 (*(byte *)(frame + 443))
#define bStack_174 (*(byte *)(frame + 444))
#define bStack_173 (*(byte *)(frame + 445))
#define bStack_172 (*(byte *)(frame + 446))
#define bStack_171 (*(byte *)(frame + 447))
#define bStack_170 (*(byte *)(frame + 448))
#define bStack_16f (*(byte *)(frame + 449))
#define bStack_16e (*(byte *)(frame + 450))
#define bStack_16d (*(byte *)(frame + 451))
#define bStack_16c (*(byte *)(frame + 452))
#define bStack_16b (*(byte *)(frame + 453))
#define bStack_16a (*(byte *)(frame + 454))
#define bStack_169 (*(byte *)(frame + 455))
#define uStack_d0 (*(undefined8 *)(frame + 608))
#define uStack_c0 (*(undefined8 *)(frame + 624))
#define uStack_b0 (*(undefined8 *)(frame + 640))
#define uStack_a0 (*(undefined8 *)(frame + 656))
#define uStack_90 (*(undefined8 *)(frame + 672))
#define uStack_80 (*(undefined8 *)(frame + 688))
#define uStack_70 (*(ulong *)(frame + 704))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a600
 */

/* WARNING: Removing unreachable block (ram,0x1000a87a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000a600(undefined8 *param_1,long param_2,long param_3,long param_4,char *param_5,
                  ulong param_6,undefined4 in_XMM2_Da,undefined4 in_XMM2_Db,undefined4 in_XMM2_Dc,
                  undefined4 in_XMM2_Dd)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 in_XMM2 [16];
  undefined1 in_XMM2_00 [16];
  undefined8 *puVar2;
  undefined4 uVar3;
  byte *source;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  char *format;
  uint uVar11;
  bool bVar12;
  uint128 auVar13;
  undefined4 uVar14;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x4f < _DAT_00006808 && ((code *)(ulong)_DAT_0000684c != (code *)0x0)))) {
    local_60 = param_2;
    source = (byte *)(*(code *)(ulong)_DAT_0000684c)(0x4100);
    param_2 = local_60;
  }
  else {
    source = (byte *)0x0;
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x4f < _DAT_00006808 && ((code *)(ulong)_DAT_0000684c != (code *)0x0)))))) {
    local_f0 = param_4;
    local_50 = param_1;
    local_40 = param_6;
    local_38 = param_5;
    pvVar4 = (void *)(*(code *)(ulong)_DAT_0000684c)(0x8000);
    bVar12 = pvVar4 != (void *)0x0;
    if (source != (byte *)0x0 && bVar12) {
      local_f8 = local_50 + 0x2a;
      local_118[0] = 0;
      local_138[0] = 0;
      PF_PART4(in_XMM2, 4) = in_XMM2_Db;
      PF_PART4(in_XMM2, 0) = in_XMM2_Da;
      PF_PART4(in_XMM2, 8) = in_XMM2_Dc;
      PF_PART4(in_XMM2, 12) = in_XMM2_Dd;
      local_e8 = param_3;
      local_60 = param_2;
      local_48 = pvVar4;
      uVar5 = recovered_1000b760(local_50,local_f8,local_118,source,0x4100,local_138,in_XMM2,
                                 local_38,local_40);
      if ((char)uVar5 != '\0') {
        local_e0 = local_50 + 0x3f;
        local_58 = local_50 + 0x15;
        uVar5 = 0;
        do {
          if (local_118[0] == 0x16) {
            if (0x8000 - uVar5 < local_138[0]) {
              format = str_1000e09b;
              goto LAB_1000b02a;
            }
            recovered_10000f90((void *)((long)local_48 + uVar5),source,local_138[0]);
            uVar5 = uVar5 + local_138[0];
            if (3 < uVar5) {
              lVar8 = 0;
              do {
                puVar2 = local_58;
                uVar11 = (uint)*(byte *)((long)local_48 + lVar8 + 3) |
                         (uint)*(byte *)((long)local_48 + lVar8 + 2) << 8 |
                         (uint)*(byte *)((long)local_48 + lVar8 + 1) << 0x10;
                uVar6 = (ulong)uVar11;
                if (uVar5 < lVar8 + uVar6 + 4) {
                  bVar12 = false;
                  lVar7 = lVar8;
                  goto LAB_1000ab60;
                }
                pvVar4 = (void *)((long)local_48 + lVar8);
                if (*(char *)((long)local_48 + lVar8) == '\x14') {
                  if (uVar11 != 0x20) {
                    format = str_1000e0b3;
                    goto LAB_1000b02a;
                  }
                  local_78 = local_58[0xc];
                  uStack_70 = local_58[0xd];
                  local_88 = local_58[10];
                  uStack_80 = local_58[0xb];
                  local_98 = local_58[8];
                  uStack_90 = local_58[9];
                  local_d8 = *local_58;
                  uStack_d0 = local_58[1];
                  local_c8 = local_58[2];
                  uStack_c0 = local_58[3];
                  in_XMM2_Da = *(undefined4 *)(local_58 + 4);
                  in_XMM2_Db = *(undefined4 *)((long)local_58 + 0x24);
                  local_b8 = local_58[4];
                  in_XMM2_Dc = *(undefined4 *)(local_58 + 5);
                  in_XMM2_Dd = *(undefined4 *)((long)local_58 + 0x2c);
                  uStack_b0 = local_58[5];
                  local_a8 = local_58[6];
                  uStack_a0 = local_58[7];
                  recovered_1000cc10(&local_d8,local_228);
                  recovered_1000ccf0(local_60,((uintptr_t)pf_module_state + 0x7b0U),(undefined8 *)0x0,0,(long)local_208,0x20);
                  recovered_1000cad0(&local_d8,local_298,local_208);
                  recovered_10008bd0(&local_d8,local_228,0x20);
                  recovered_1000cc10(&local_d8,&local_168);
                  recovered_10008bd0(local_298,&local_168,0x20);
                  recovered_1000cc10(local_298,&local_188);
                  ((uint8_t *)(void *)&auVar13)[0] = -((byte)(*(byte *)((long)pvVar4 + 4) ^ local_188 |
                                       *(byte *)((long)pvVar4 + 0x14) ^ local_178) == DAT_1000db20);
                  ((uint8_t *)(void *)&auVar13)[1] = -((byte)(*(byte *)((long)pvVar4 + 5) ^ bStack_187 |
                                       *(byte *)((long)pvVar4 + 0x15) ^ bStack_177) ==
                                bRam000000001000db21);
                  ((uint8_t *)(void *)&auVar13)[2] = -((byte)(*(byte *)((long)pvVar4 + 6) ^ bStack_186 |
                                       *(byte *)((long)pvVar4 + 0x16) ^ bStack_176) ==
                                bRam000000001000db22);
                  ((uint8_t *)(void *)&auVar13)[3] = -((byte)(*(byte *)((long)pvVar4 + 7) ^ bStack_185 |
                                       *(byte *)((long)pvVar4 + 0x17) ^ bStack_175) ==
                                bRam000000001000db23);
                  ((uint8_t *)(void *)&auVar13)[4] = -((byte)(*(byte *)((long)pvVar4 + 8) ^ bStack_184 |
                                       *(byte *)((long)pvVar4 + 0x18) ^ bStack_174) ==
                                bRam000000001000db24);
                  ((uint8_t *)(void *)&auVar13)[5] = -((byte)(*(byte *)((long)pvVar4 + 9) ^ bStack_183 |
                                       *(byte *)((long)pvVar4 + 0x19) ^ bStack_173) ==
                                bRam000000001000db25);
                  ((uint8_t *)(void *)&auVar13)[6] = -((byte)(*(byte *)((long)pvVar4 + 10) ^ bStack_182 |
                                       *(byte *)((long)pvVar4 + 0x1a) ^ bStack_172) ==
                                bRam000000001000db26);
                  ((uint8_t *)(void *)&auVar13)[7] = -((byte)(*(byte *)((long)pvVar4 + 0xb) ^ bStack_181 |
                                       *(byte *)((long)pvVar4 + 0x1b) ^ bStack_171) ==
                                bRam000000001000db27);
                  ((uint8_t *)(void *)&auVar13)[8] = -((byte)(*(byte *)((long)pvVar4 + 0xc) ^ bStack_180 |
                                       *(byte *)((long)pvVar4 + 0x1c) ^ bStack_170) ==
                                bRam000000001000db28);
                  ((uint8_t *)(void *)&auVar13)[9] = -((byte)(*(byte *)((long)pvVar4 + 0xd) ^ bStack_17f |
                                       *(byte *)((long)pvVar4 + 0x1d) ^ bStack_16f) ==
                                bRam000000001000db29);
                  ((uint8_t *)(void *)&auVar13)[10] = -((byte)(*(byte *)((long)pvVar4 + 0xe) ^ bStack_17e |
                                        *(byte *)((long)pvVar4 + 0x1e) ^ bStack_16e) ==
                                 bRam000000001000db2a);
                  ((uint8_t *)(void *)&auVar13)[0xb] = -((byte)(*(byte *)((long)pvVar4 + 0xf) ^ bStack_17d |
                                         *(byte *)((long)pvVar4 + 0x1f) ^ bStack_16d) ==
                                  bRam000000001000db2b);
                  ((uint8_t *)(void *)&auVar13)[0xc] = -((byte)(*(byte *)((long)pvVar4 + 0x10) ^ bStack_17c |
                                         *(byte *)((long)pvVar4 + 0x20) ^ bStack_16c) ==
                                  bRam000000001000db2c);
                  ((uint8_t *)(void *)&auVar13)[0xd] = -((byte)(*(byte *)((long)pvVar4 + 0x11) ^ bStack_17b |
                                         *(byte *)((long)pvVar4 + 0x21) ^ bStack_16b) ==
                                  bRam000000001000db2d);
                  ((uint8_t *)(void *)&auVar13)[0xe] = -((byte)(*(byte *)((long)pvVar4 + 0x12) ^ bStack_17a |
                                         *(byte *)((long)pvVar4 + 0x22) ^ bStack_16a) ==
                                  bRam000000001000db2e);
                  ((uint8_t *)(void *)&auVar13)[0xf] = -((byte)(*(byte *)((long)pvVar4 + 0x13) ^ bStack_179 |
                                         *(byte *)((long)pvVar4 + 0x23) ^ bStack_169) ==
                                  bRam000000001000db2f);
                  if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                              (ushort)(((uint8_t *)(void *)&auVar13)[0xf] >> 7) << 0xf) != 0xffff) {
                    format = str_1000e0d8;
                    goto LAB_1000b02a;
                  }
                  recovered_10008bd0(puVar2,pvVar4,0x24);
                  lVar7 = lVar8 + 0x24;
                  bVar12 = true;
                  goto LAB_1000ab60;
                }
                if ((((*(char *)((long)local_48 + lVar8) == '\v') && (6 < uVar11)) &&
                    (uVar9 = (ulong)*(byte *)((long)pvVar4 + 4), uVar9 + 4 <= uVar6)) &&
                   ((*(char *)((long)pvVar4 + uVar9 + 7) != '\0' ||
                     (*(char *)((long)pvVar4 + uVar9 + 6) != '\0' ||
                     *(char *)((long)pvVar4 + uVar9 + 5) != '\0') && (uVar9 + 7 <= uVar6)))) {
                  uVar10 = (uint)*(byte *)((long)pvVar4 + uVar9 + 10) |
                           (uint)*(byte *)((long)pvVar4 + uVar9 + 9) << 8 |
                           (uint)*(byte *)((long)pvVar4 + uVar9 + 8) << 0x10;
                  if ((uVar10 != 0) && ((int)(uVar9 + 7) + uVar10 <= uVar11)) {
                    local_d8 = _DAT_1000dae0;
                    uStack_d0 = uRam000000001000dae8;
                    local_c8 = _DAT_1000daf0;
                    uStack_c0 = uRam000000001000daf8;
                    local_b8 = 0;
                    uStack_70 = uStack_70 & 0xffffffff00000000;
                    recovered_10008bd0(&local_d8,(void *)((long)pvVar4 + uVar9 + 0xb),(ulong)uVar10)
                    ;
                    recovered_1000cc10(&local_d8,local_e0);
                    *(undefined1 *)((long)local_50 + 0x21e) = 1;
                  }
                }
                recovered_10008bd0(local_58,pvVar4,uVar6 + 4);
                lVar7 = uVar6 + lVar8 + 4;
                lVar1 = uVar6 + lVar8;
                lVar8 = lVar7;
              } while (lVar1 + 8U <= uVar5);
              bVar12 = false;
LAB_1000ab60:
              puVar2 = local_50;
              if (lVar7 != 0) {
                uVar5 = uVar5 - lVar7;
                if (uVar5 == 0) {
                  uVar5 = 0;
                }
                else {
                  recovered_100013d0(local_48,(void *)(lVar7 + (long)local_48),uVar5);
                  puVar2 = local_50;
                }
              }
              local_50 = puVar2;
              if (bVar12) {
                local_78 = local_58[0xc];
                uStack_70 = local_58[0xd];
                local_88 = local_58[10];
                uStack_80 = local_58[0xb];
                local_98 = local_58[8];
                uStack_90 = local_58[9];
                local_d8 = *local_58;
                uStack_d0 = local_58[1];
                local_c8 = local_58[2];
                uStack_c0 = local_58[3];
                local_b8 = local_58[4];
                uStack_b0 = local_58[5];
                local_a8 = local_58[6];
                uStack_a0 = local_58[7];
                recovered_1000cc10(&local_d8,local_118);
                local_d8 = _DAT_1000dae0;
                uStack_d0 = uRam000000001000dae8;
                local_c8 = _DAT_1000daf0;
                uStack_c0 = uRam000000001000daf8;
                uStack_70 = uStack_70 & 0xffffffff00000000;
                local_b8 = 0;
                recovered_1000cc10(&local_d8,local_298);
                recovered_1000ccf0(local_e8,((uintptr_t)pf_module_state + 0x5b9U),local_298,0x20,(long)local_318,0x20);
                recovered_10001c90(local_1c8,0,0x20);
                recovered_1000cad0(&local_d8,local_298,local_318);
                recovered_10008bd0(&local_d8,local_1c8,0x20);
                recovered_1000cc10(&local_d8,&local_168);
                recovered_10008bd0(local_298,&local_168,0x20);
                recovered_1000cc10(local_298,local_2f8);
                recovered_1000ccf0((long)local_2f8,((uintptr_t)pf_module_state + 0x7daU),(undefined8 *)local_118,0x20,
                                   (long)local_2d8,0x20);
                recovered_1000ccf0((long)local_2f8,((uintptr_t)pf_module_state + 0x7e7U),(undefined8 *)local_118,0x20,
                                   (long)local_1e8,0x20);
                recovered_10001c90(puVar2 + 0x31,0,0x38);
                recovered_1000ccf0((long)local_2d8,((uintptr_t)pf_module_state + 0x75fU),(undefined8 *)0x0,0,
                                   (long)(puVar2 + 0x31),0x20);
                recovered_1000ccf0((long)local_2d8,((uintptr_t)pf_module_state + 0x763U),(undefined8 *)0x0,0,
                                   (long)(puVar2 + 0x35),0xc);
                puVar2[0x37] = 0;
                recovered_10001c90(puVar2 + 0x38,0,0x38);
                recovered_1000ccf0((long)local_1e8,((uintptr_t)pf_module_state + 0x75fU),(undefined8 *)0x0,0,
                                   (long)(puVar2 + 0x38),0x20);
                recovered_1000ccf0((long)local_1e8,((uintptr_t)pf_module_state + 0x763U),(undefined8 *)0x0,0,
                                   (long)(puVar2 + 0x3c),0xc);
                puVar2[0x3e] = 0;
                *(undefined1 *)((long)puVar2 + 0x21d) = 1;
                local_168 = 0x20000014;
                local_78 = local_58[0xc];
                uStack_70 = local_58[0xd];
                local_88 = local_58[10];
                uStack_80 = local_58[0xb];
                local_98 = local_58[8];
                uStack_90 = local_58[9];
                local_d8 = *local_58;
                uStack_d0 = local_58[1];
                local_c8 = local_58[2];
                uStack_c0 = local_58[3];
                local_b8 = local_58[4];
                uVar3 = *(undefined4 *)(local_58 + 5);
                uVar14 = *(undefined4 *)((long)local_58 + 0x2c);
                uStack_b0 = local_58[5];
                local_a8 = local_58[6];
                uStack_a0 = local_58[7];
                recovered_1000cc10(&local_d8,local_1a8);
                recovered_1000ccf0(local_f0,((uintptr_t)pf_module_state + 0x7b0U),(undefined8 *)0x0,0,(long)local_2b8,0x20);
                recovered_1000cad0(&local_d8,local_298,local_2b8);
                recovered_10008bd0(&local_d8,local_1a8,0x20);
                recovered_1000cc10(&local_d8,local_138);
                recovered_10008bd0(local_298,local_138,0x20);
                recovered_1000cc10(local_298,local_164);
                uVar3 = recovered_1000b1f0(puVar2,puVar2 + 0x23,0x16,(long)&local_168,0x24,local_38,
                                           local_40,CONCAT44(uVar14,uVar3));
                if ((char)uVar3 == '\0') {
                  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
                     ((0xb < _DAT_00006808 &&
                      ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))))) {
                    (*(code *)(ulong)_DAT_00006850)(source);
                  }
                }
                else {
                  recovered_10008bd0(local_58,&local_168,0x24);
                  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
                      (0xb < _DAT_00006808)) &&
                     ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))) {
                    (*(code *)(ulong)_DAT_00006850)(source);
                  }
                }
                if (_DAT_00006800 != 0x50414d57) {
                  return uVar3;
                }
                if (_DAT_00006804 == 0) {
                  return uVar3;
                }
                if (_DAT_00006808 < 0xc) {
                  return uVar3;
                }
                if (_DAT_00006808 < 0x54) {
                  return uVar3;
                }
                if (_DAT_00006850 == 0) {
                  return uVar3;
                }
                (*(code *)(ulong)_DAT_00006850)(local_48);
                return uVar3;
              }
            }
          }
          else if (local_118[0] == 0x15) {
            format = str_1000e085;
LAB_1000b02a:
            pf_varargs_10005610___(local_38,local_40,format);
            break;
          }
          local_118[0] = 0;
          local_138[0] = 0;
          PF_PART4(in_XMM2_00, 4) = in_XMM2_Db;
          PF_PART4(in_XMM2_00, 0) = in_XMM2_Da;
          PF_PART4(in_XMM2_00, 8) = in_XMM2_Dc;
          PF_PART4(in_XMM2_00, 12) = in_XMM2_Dd;
          uVar6 = recovered_1000b760(local_50,local_f8,local_118,source,0x4100,local_138,in_XMM2_00,
                                     local_38,local_40);
        } while ((char)uVar6 != '\0');
      }
      if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
         ((0xb < _DAT_00006808 &&
          ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))))) {
        (*(code *)(ulong)_DAT_00006850)(source);
      }
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x53 < _DAT_00006808 && (_DAT_00006850 != 0)))) {
        (*(code *)(ulong)_DAT_00006850)(local_48);
      }
      return 0;
    }
    param_5 = local_38;
    param_6 = local_40;
    if (source != (byte *)0x0) goto LAB_1000a7a1;
  }
  else {
    if (source == (byte *)0x0) goto LAB_1000afee;
    pvVar4 = (void *)0x0;
    bVar12 = false;
LAB_1000a7a1:
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))))) {
      (*(code *)(ulong)_DAT_00006850)(source);
    }
  }
  if (((((bVar12) && (_DAT_00006800 == 0x50414d57)) && (_DAT_00006804 != 0)) &&
      ((0xb < _DAT_00006808 && (0x53 < _DAT_00006808)))) &&
     ((code *)(ulong)_DAT_00006850 != (code *)0x0)) {
    (*(code *)(ulong)_DAT_00006850)(pvVar4);
  }
LAB_1000afee:
  pf_varargs_10005610___(param_5,param_6,str_1000de06);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_00006850
#undef DAT_1000dae0
#undef DAT_1000daf0
#undef DAT_1000db20
#undef UNK_1000dae8
#undef UNK_1000daf8
#undef UNK_1000db21
#undef UNK_1000db22
#undef UNK_1000db23
#undef UNK_1000db24
#undef UNK_1000db25
#undef UNK_1000db26
#undef UNK_1000db27
#undef UNK_1000db28
#undef UNK_1000db29
#undef UNK_1000db2a
#undef UNK_1000db2b
#undef UNK_1000db2c
#undef UNK_1000db2d
#undef UNK_1000db2e
#undef UNK_1000db2f
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_00006850
#undef _DAT_1000dae0
#undef _DAT_1000daf0
#undef bRam000000001000db21
#undef bRam000000001000db22
#undef bRam000000001000db23
#undef bRam000000001000db24
#undef bRam000000001000db25
#undef bRam000000001000db26
#undef bRam000000001000db27
#undef bRam000000001000db28
#undef bRam000000001000db29
#undef bRam000000001000db2a
#undef bRam000000001000db2b
#undef bRam000000001000db2c
#undef bRam000000001000db2d
#undef bRam000000001000db2e
#undef bRam000000001000db2f
#undef str_1000de06
#undef str_1000e085
#undef str_1000e09b
#undef str_1000e0b3
#undef str_1000e0d8
#undef uRam000000001000dae8
#undef uRam000000001000daf8
#undef local_318
#undef local_2f8
#undef local_2d8
#undef local_2b8
#undef local_298
#undef local_228
#undef local_208
#undef local_1e8
#undef local_1c8
#undef local_1a8
#undef local_188
#undef local_178
#undef local_168
#undef local_164
#undef local_138
#undef local_118
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef bStack_187
#undef bStack_186
#undef bStack_185
#undef bStack_184
#undef bStack_183
#undef bStack_182
#undef bStack_181
#undef bStack_180
#undef bStack_17f
#undef bStack_17e
#undef bStack_17d
#undef bStack_17c
#undef bStack_17b
#undef bStack_17a
#undef bStack_179
#undef bStack_177
#undef bStack_176
#undef bStack_175
#undef bStack_174
#undef bStack_173
#undef bStack_172
#undef bStack_171
#undef bStack_170
#undef bStack_16f
#undef bStack_16e
#undef bStack_16d
#undef bStack_16c
#undef bStack_16b
#undef bStack_16a
#undef bStack_169
#undef uStack_d0
#undef uStack_c0
#undef uStack_b0
#undef uStack_a0
#undef uStack_90
#undef uStack_80
#undef uStack_70

#undef str_1000defa
#define str_1000defa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b180
 */

int recovered_1000b180(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 in_XMM2_Qb;

  if (((context == (void *)0x0) || (*(char *)((long)context + 0x21d) != '\x01')) ||
     (data == (void *)0x0 && size != 0)) {
    pf_varargs_10005610___(error,capacity,str_1000defa);
    iVar1 = 0;
  }
  else {
    iVar1 = recovered_1000b1f0(context,(undefined8 *)((long)context + 0x188),0x17,(long)data,size,
                               error,capacity,in_XMM2_Qb);
  }
  return iVar1;
}

#undef str_1000defa

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_1000db30
#define DAT_1000db30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_1000db40
#define DAT_1000db40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_1000db50
#define DAT_1000db50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef DAT_1000db60
#define DAT_1000db60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000db70
#define DAT_1000db70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_1000db80
#define DAT_1000db80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000db90
#define DAT_1000db90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef UNK_1000db38
#define UNK_1000db38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
#undef _DAT_1000db30
#define _DAT_1000db30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef _DAT_1000db40
#define _DAT_1000db40 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef _DAT_1000db50
#define _DAT_1000db50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef _DAT_1000db60
#define _DAT_1000db60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef _DAT_1000db70
#define _DAT_1000db70 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef _DAT_1000db80
#define _DAT_1000db80 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef str_1000de06
#define str_1000de06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e7U)))
#undef str_1000df2e
#define str_1000df2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60fU)))
#undef uRam000000001000db38
#define uRam000000001000db38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
#define local_b8 (*(ulong (*)[9])(frame + 24))
#define local_70 (*(long *)(frame + 96))
#define local_68 (*(undefined8 * *)(frame + 104))
#define local_60 (*(long *)(frame + 112))
#define local_58 (*(undefined8 * *)(frame + 120))
#define local_4c (*(undefined1 (*)[12])(frame + 132))
#define local_40 (*(char * *)(frame + 144))
#define local_38 (*(undefined8 * *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000b1f0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,long param_4,
                  long param_5,char *param_6,ulong param_7,undefined8 in_XMM2_Qb)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  ulong *puVar5;
  ulong *puVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar15;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  byte bVar19;
  byte bVar18;
  byte bVar17;
  byte bVar16;
  char cVar20;
  char cVar21;
  undefined1 auVar22 [12];
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  uint128 auVar38;
  ulong uVar39;

  if ((param_2 != (undefined8 *)0x0) && (param_4 != 0 || param_5 == 0)) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x4f < _DAT_00006808)))) &&
       ((code *)(ulong)_DAT_0000684c != (code *)0x0)) {
      lVar33 = param_5 + 0x16;
      local_68 = param_1;
      local_40 = param_6;
      local_38 = (undefined8 *)(*(code *)(ulong)_DAT_0000684c)(lVar33);
      param_6 = local_40;
      if (local_38 != (undefined8 *)0x0) {
        uVar1 = param_5 + 1;
        iVar31 = (int)param_5 + 0x11;
        puVar2 = (undefined8 *)((long)local_38 + 5);
        *(undefined2 *)local_38 = 0x317;
        *(undefined1 *)((long)local_38 + 2) = 3;
        *(char *)((long)local_38 + 3) = (char)((uint)iVar31 >> 8);
        *(char *)((long)local_38 + 4) = (char)iVar31;
        local_60 = lVar33;
        if (param_5 != 0) {
          recovered_10000f90(puVar2,(void *)param_4,param_5);
        }
        *(undefined1 *)((long)puVar2 + param_5) = param_3;
        local_58 = puVar2;
        recovered_10000f90(local_4c,param_2 + 4,0xc);
        uVar36 = param_2[6];
        uVar30 = (undefined4)(uVar36 >> 0x18);
        uVar35 = (uint)(uVar36 >> 0x20);
        PF_PART8(auVar22, 4) = in_XMM2_Qb;
        PF_PART4(auVar22, 0) = uVar35;
        PF_PART8(auVar38, 0) = PF_PART8(auVar22, 0) << 0x20;
        PF_PART4(auVar38, 8) = (uint)uVar36;
        PF_PART4(auVar38, 12) = uVar35;
        uVar37 = uVar36 >> 0x38 & _DAT_1000db30;
        uVar39 = PF_PART8(auVar38, 8) >> 0x30 & uRam000000001000db38;
        uVar7 = (ushort)uVar37;
        cVar20 = (char)uVar37;
        bVar12 = (uVar7 != 0) * (uVar7 < 0x100) * cVar20 - (0xff < uVar7);
        sVar9 = (short)uVar39;
        cVar21 = (char)uVar39;
        bVar13 = (0 < sVar9) * (sVar9 < 0x100) * cVar21 - (0xff < sVar9);
        bVar14 = (uVar7 != 0) * (uVar7 < 0x100) * cVar20 - (0xff < uVar7);
        bVar15 = (0 < sVar9) * (sVar9 < 0x100) * cVar21 - (0xff < sVar9);
        uVar7 = (ushort)bVar12;
        bVar16 = (bVar12 != 0) * (uVar7 < 0x100) * bVar12 - (0xff < uVar7);
        uVar8 = (ushort)bVar13;
        bVar17 = (bVar13 != 0) * (uVar8 < 0x100) * bVar13 - (0xff < uVar8);
        uVar10 = (ushort)bVar14;
        bVar18 = (bVar14 != 0) * (uVar10 < 0x100) * bVar14 - (0xff < uVar10);
        uVar11 = (ushort)bVar15;
        bVar19 = (bVar15 != 0) * (uVar11 < 0x100) * bVar15 - (0xff < uVar11);
        bVar12 = (bVar12 != 0) * (uVar7 < 0x100) * bVar12 - (0xff < uVar7);
        bVar13 = (bVar13 != 0) * (uVar8 < 0x100) * bVar13 - (0xff < uVar8);
        bVar14 = (bVar14 != 0) * (uVar10 < 0x100) * bVar14 - (0xff < uVar10);
        bVar15 = (bVar15 != 0) * (uVar11 < 0x100) * bVar15 - (0xff < uVar11);
        PF_PART8(local_4c, 4) =
             PF_PART8(local_4c, 4) ^
             (uVar36 << 0x38 |
             (~_DAT_1000db80 & (ulong)((uint)uVar36 >> 8) << 0x30 |
             (~_DAT_1000db70 & (uVar36 >> 0x10 & 0xffff) << 0x28 |
             (~_DAT_1000db60 & CONCAT44(uVar30,uVar30) & 0xff000000ff |
             (~_DAT_1000db50 & (ulong)(uVar35 << 0x18) |
             (~_DAT_1000db40 & (ulong)((uVar35 >> 8) << 0x10) |
             CONCAT17((bVar15 != 0) * (bVar15 < 0x100) * bVar15 - (0xff < bVar15),
                      CONCAT16((bVar14 != 0) * (bVar14 < 0x100) * bVar14 - (0xff < bVar14),
                               CONCAT15((bVar13 != 0) * (bVar13 < 0x100) * bVar13 - (0xff < bVar13),
                                        CONCAT14((bVar12 != 0) * (bVar12 < 0x100) * bVar12 -
                                                 (0xff < bVar12),
                                                 CONCAT13((bVar19 != 0) * (bVar19 < 0x100) * bVar19
                                                          - (0xff < bVar19),
                                                          CONCAT12((bVar18 != 0) * (bVar18 < 0x100)
                                                                   * bVar18 - (0xff < bVar18),
                                                                   CONCAT11((bVar17 != 0) *
                                                                            (bVar17 < 0x100) *
                                                                            bVar17 - (0xff < bVar17)
                                                                            ,(bVar16 != 0) *
                                                                             (bVar16 < 0x100) *
                                                                             bVar16 - (0xff < bVar16
                                                                                      )))))))) &
             _DAT_1000db40) & _DAT_1000db50) & _DAT_1000db60) & _DAT_1000db70) & _DAT_1000db80) &
             (ulong)DAT_1000db90);
        if (uVar1 != 0) {
          local_70 = (long)local_38 + 0x15;
          uVar35 = 1;
          uVar36 = 0;
          do {
            uVar37 = uVar1 - uVar36;
            if (0x3f < uVar37) {
              uVar37 = 0x40;
            }
            recovered_1000d620(param_2,uVar35,local_4c,local_b8);
            if (uVar1 != uVar36) {
              uVar39 = uVar37 + (uVar37 == 0);
              if (uVar1 - uVar36 < 4) {
                uVar32 = 0;
              }
              else {
                if (uVar1 - uVar36 < 0x20) {
                  uVar34 = 0;
                }
                else {
                  uVar32 = (ulong)((uint)uVar39 & 0x60);
                  lVar33 = local_70 + uVar36;
                  uVar34 = 0;
                  do {
                    puVar5 = (ulong *)(lVar33 + -0x10 + uVar34);
                    uVar23 = puVar5[1];
                    uVar25 = *(ulong *)(lVar33 + uVar34);
                    uVar26 = ((ulong *)(lVar33 + uVar34))[1];
                    uVar24 = *(ulong *)((long)local_b8 + uVar34 + 8);
                    uVar27 = *(ulong *)((long)local_b8 + uVar34 + 0x10);
                    uVar28 = *(ulong *)((long)local_b8 + uVar34 + 0x18);
                    puVar6 = (ulong *)(lVar33 + -0x10 + uVar34);
                    *puVar6 = *puVar5 ^ *(ulong *)((long)local_b8 + uVar34);
                    puVar6[1] = uVar23 ^ uVar24;
                    *(ulong *)(lVar33 + uVar34) = uVar25 ^ uVar27;
                    ((ulong *)(lVar33 + uVar34))[1] = uVar26 ^ uVar28;
                    uVar34 = uVar34 + 0x20;
                  } while (uVar32 != uVar34);
                  if (uVar37 == uVar32) goto LAB_1000b459;
                  uVar34 = uVar32;
                  if ((uVar39 & 0x1c) == 0) goto LAB_1000b540;
                }
                uVar32 = (ulong)((uint)uVar39 & 0x7c);
                do {
                  puVar3 = (uint *)((long)local_58 + uVar34 + uVar36);
                  *puVar3 = *puVar3 ^ *(uint *)((long)local_b8 + uVar34);
                  uVar34 = uVar34 + 4;
                } while (uVar32 != uVar34);
                if (uVar37 == uVar32) goto LAB_1000b459;
              }
LAB_1000b540:
              do {
                pbVar4 = (byte *)((long)local_58 + uVar32 + uVar36);
                *pbVar4 = *pbVar4 ^ *(byte *)((long)local_b8 + uVar32);
                uVar32 = uVar32 + 1;
              } while (uVar39 != uVar32);
            }
LAB_1000b459:
            uVar35 = uVar35 + 1;
            uVar36 = uVar36 + uVar37;
          } while (uVar36 < uVar1);
        }
        puVar29 = local_38;
        puVar2 = local_58;
        recovered_1000cfd0(param_2,(undefined8 *)local_4c,local_38,local_58,uVar1,
                           (undefined1 *)local_b8);
        recovered_10000f90((void *)((long)puVar2 + uVar1),local_b8,0x10);
        param_2[6] = param_2[6] + 1;
        if ((code *)local_68[2] == (code *)0x0) {
          uVar30 = 0;
          pf_varargs_10005610___(local_40,param_7,str_1000df2e);
        }
        else {
          uVar30 = (*(code *)local_68[2])(*local_68,puVar29,local_60,local_40,param_7);
        }
        if (_DAT_00006800 != 0x50414d57) {
          return uVar30;
        }
        if (_DAT_00006804 == 0) {
          return uVar30;
        }
        if (_DAT_00006808 < 0xc) {
          return uVar30;
        }
        if (_DAT_00006808 < 0x54) {
          return uVar30;
        }
        if ((code *)(ulong)_DAT_00006850 == (code *)0x0) {
          return uVar30;
        }
        (*(code *)(ulong)_DAT_00006850)(local_38);
        return uVar30;
      }
    }
    pf_varargs_10005610___(param_6,param_7,str_1000de06);
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_00006850
#undef DAT_1000db30
#undef DAT_1000db40
#undef DAT_1000db50
#undef DAT_1000db60
#undef DAT_1000db70
#undef DAT_1000db80
#undef DAT_1000db90
#undef UNK_1000db38
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_00006850
#undef _DAT_1000db30
#undef _DAT_1000db40
#undef _DAT_1000db50
#undef _DAT_1000db60
#undef _DAT_1000db70
#undef _DAT_1000db80
#undef str_1000de06
#undef str_1000df2e
#undef uRam000000001000db38
#undef local_b8
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_4c
#undef local_40
#undef local_38

#undef str_1000defa
#define str_1000defa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dbU)))
#undef str_1000df1d
#define str_1000df1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5feU)))
#define local_40 (*(ulong *)(frame + 16))
#define local_31 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b630
 */

int recovered_1000b630(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  char *format;
  int iVar3;
  undefined1 in_XMM2 [16];

  if (read != (ulong *)0x0) {
    *read = 0;
  }
  if ((((context == (void *)0x0) || (size == 0)) || (data == (void *)0x0)) ||
     (*(char *)((long)context + 0x21d) == '\0')) {
    format = str_1000defa;
LAB_1000b71b:
    pf_varargs_10005610___(error,capacity,format);
  }
  else {
    local_31 = 0;
    local_40 = 0;
    uVar2 = recovered_1000b760(context,(undefined8 *)((long)context + 0x1c0),&local_31,data,size,
                               &local_40,in_XMM2,error,capacity);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      if (local_31 == 0x17) {
        iVar3 = (int)CONCAT71((int7)(size >> 8),1);
        if (read == (ulong *)0x0) {
          return iVar3;
        }
        *read = local_40;
        return iVar3;
      }
      if (local_31 == 0x15) {
        format = str_1000df1d;
        local_31 = 0x15;
        goto LAB_1000b71b;
      }
      local_31 = 0;
      local_40 = 0;
      uVar2 = recovered_1000b760(context,(undefined8 *)((long)context + 0x1c0),&local_31,data,size,
                                 &local_40,in_XMM2,error,capacity);
      cVar1 = (char)uVar2;
    }
  }
  return 0;
}

#undef str_1000defa
#undef str_1000df1d
#undef local_40
#undef local_31

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_1000db30
#define DAT_1000db30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_1000db40
#define DAT_1000db40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221U)))
#undef DAT_1000db50
#define DAT_1000db50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef DAT_1000db60
#define DAT_1000db60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef DAT_1000db70
#define DAT_1000db70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef DAT_1000db80
#define DAT_1000db80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000db90
#define DAT_1000db90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef UNK_1000db38
#define UNK_1000db38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
#undef _DAT_1000db30
#define _DAT_1000db30 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef _DAT_1000db40
#define _DAT_1000db40 (*(uint128 *)(((uintptr_t)pf_module_state + 0x221U)))
#undef _DAT_1000db50
#define _DAT_1000db50 (*(uint128 *)(((uintptr_t)pf_module_state + 0x231U)))
#undef _DAT_1000db60
#define _DAT_1000db60 (*(uint128 *)(((uintptr_t)pf_module_state + 0x241U)))
#undef _DAT_1000db70
#define _DAT_1000db70 (*(uint128 *)(((uintptr_t)pf_module_state + 0x251U)))
#undef _DAT_1000db80
#define _DAT_1000db80 (*(uint128 *)(((uintptr_t)pf_module_state + 0x261U)))
#undef _DAT_1000db90
#define _DAT_1000db90 (*(uint128 *)(((uintptr_t)pf_module_state + 0x271U)))
#undef str_1000de06
#define str_1000de06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e7U)))
#undef str_1000e113
#define str_1000e113 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f4U)))
#undef str_1000e12d
#define str_1000e12d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80eU)))
#undef str_1000e14c
#define str_1000e14c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
#undef str_1000e179
#define str_1000e179 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85aU)))
#undef str_1000e1b6
#define str_1000e1b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x897U)))
#undef str_1000e1d7
#define str_1000e1d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b8U)))
#undef str_1000e1ec
#define str_1000e1ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cdU)))
#undef str_1000e20d
#define str_1000e20d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eeU)))
#undef uRam000000001000db38
#define uRam000000001000db38 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x219U)))
#define auStack_100 (*(ulong (*)[7])(frame + 32))
#define bStack_c7 (*(byte *)(frame + 89))
#define bStack_c6 (*(byte *)(frame + 90))
#define bStack_c5 (*(byte *)(frame + 91))
#define bStack_c4 (*(byte *)(frame + 92))
#define bStack_c3 (*(byte *)(frame + 93))
#define bStack_c2 (*(byte *)(frame + 94))
#define bStack_c1 (*(byte *)(frame + 95))
#define bStack_c0 (*(byte *)(frame + 96))
#define bStack_bf (*(byte *)(frame + 97))
#define bStack_be (*(byte *)(frame + 98))
#define bStack_bd (*(byte *)(frame + 99))
#define bStack_bc (*(byte *)(frame + 100))
#define bStack_bb (*(byte *)(frame + 101))
#define bStack_ba (*(byte *)(frame + 102))
#define bStack_b9 (*(byte *)(frame + 103))
#define local_108 (*(undefined8 *)(frame + 24))
#define local_c8 (*(byte *)(frame + 88))
#define local_b0 (*(byte * *)(frame + 112))
#define local_a8 (*(undefined8 * *)(frame + 120))
#define local_a0 (*(byte * *)(frame + 128))
#define local_98 (*(ulong *)(frame + 136))
#define local_90 (*(byte * *)(frame + 144))
#define local_88 (*(byte * *)(frame + 152))
#define local_7c (*(undefined1 (*)[12])(frame + 164))
#define local_70 (*(ulong *)(frame + 176))
#define local_68 (*(ulong *)(frame + 184))
#define local_60 (*(undefined8 * *)(frame + 192))
#define local_58 (*(byte * *)(frame + 200))
#define local_50 (*(byte * *)(frame + 208))
#define local_48 (*(byte * *)(frame + 216))
#define local_40 (*(ulong * *)(frame + 224))
#define local_35 (*(byte *)(frame + 235))
#define local_34 (*(byte *)(frame + 236))
#define local_33 (*(byte *)(frame + 237))
#define local_32 (*(ushort *)(frame + 238))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000b760(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,
                        ulong param_5,ulong *param_6,undefined1 in_XMM2 [16],char *param_8,
                        ulong param_9)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar11;
  byte bVar10;
  byte bVar9;
  byte bVar8;
  byte bVar15;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  char cVar16;
  undefined1 auVar17 [12];
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  char cVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  code *pcVar30;
  char *pcVar31;
  ulong uVar32;
  ushort uVar33;
  uint uVar34;
  undefined7 uVar36;
  ulong uVar35;
  bool bVar37;
  uint128 auVar38;
  uint128 auVar39;
  uint128 auVar40;
  uint128 auVar41;
  ushort uVar42;
  ulong uVar43;
  uint128 auVar44;
  ulong uVar46;
  uint128 auVar45;

  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 == (byte *)0x0) {
LAB_1000c023:
    uVar35 = 0;
  }
  else {
    pcVar30 = (code *)param_1[1];
    local_70 = param_5;
    local_60 = param_2;
    local_50 = param_3;
    local_40 = param_6;
    if (pcVar30 != (code *)0x0) {
      local_a8 = param_2 + 4;
      local_a0 = param_4 + 0x10;
      local_b0 = param_4 + 1;
      local_58 = param_4;
      do {
        pbVar27 = local_58;
        cVar26 = (*pcVar30)(*param_1,&local_35,5,param_8,param_9);
        if (cVar26 == '\0') goto LAB_1000c023;
        uVar33 = local_32 << 8 | local_32 >> 8;
        if ((ushort)(uVar33 + 0xb7ff) < 0xb800) {
          pcVar31 = str_1000e113;
          goto LAB_1000bf84;
        }
        uVar29 = (ulong)uVar33;
        if (local_60 != (undefined8 *)0x0) {
          if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
             (((_DAT_00006808 < 0x50 || ((code *)(ulong)_DAT_0000684c == (code *)0x0)) ||
              (pbVar27 = (byte *)(*(code *)(ulong)_DAT_0000684c)(uVar29), pbVar27 == (byte *)0x0))))
          {
            pcVar31 = str_1000de06;
            goto LAB_1000bf84;
          }
          if ((code *)param_1[1] == (code *)0x0) {
            pf_varargs_10005610___(param_8,param_9,str_1000e1b6);
LAB_1000bed0:
            if (((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) ||
               ((_DAT_00006808 < 0xc ||
                ((_DAT_00006808 < 0x54 ||
                 (pcVar30 = (code *)(ulong)_DAT_00006850, pcVar30 == (code *)0x0))))))
            goto LAB_1000c023;
          }
          else {
            cVar26 = (*(code *)param_1[1])(*param_1,pbVar27,uVar29,param_8);
            if (cVar26 == '\0') goto LAB_1000bed0;
            local_48 = pbVar27;
            if (local_35 == 0x14) {
              if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
                 && ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))) {
                (*(code *)(ulong)_DAT_00006850)(pbVar27);
              }
              goto LAB_1000b7f0;
            }
            if (local_35 == 0x17) {
              if (local_40 != (ulong *)0x0) {
                *local_40 = 0;
              }
              if (local_50 != (byte *)0x0) {
                *local_50 = 0;
              }
              uVar36 = (undefined7)((ulong)pbVar27 >> 8);
              uVar35 = CONCAT71(uVar36,1);
              if (uVar33 < 0x10) {
LAB_1000bb72:
                pbVar27 = local_50;
              }
              else {
                if (local_70 < uVar29 - 0x10) {
                  pcVar31 = str_1000e1d7;
LAB_1000bb64:
                  pf_varargs_10005610___(param_8,param_9,pcVar31);
                  uVar35 = CONCAT71(uVar36,1);
                  goto LAB_1000bb72;
                }
                local_68 = uVar29 - 0x10;
                recovered_10000f90(local_7c,local_a8,0xc);
                pbVar25 = local_48;
                uVar35 = local_60[6];
                uVar18 = (undefined4)(uVar35 >> 0x18);
                uVar34 = (uint)(uVar35 >> 0x20);
                PF_PART8(auVar17, 4) = PF_PART8(in_XMM2, 8);
                PF_PART4(auVar17, 0) = uVar34;
                PF_PART8(auVar44, 0) = PF_PART8(auVar17, 0) << 0x20;
                PF_PART4(auVar44, 8) = (uint)uVar35;
                PF_PART4(auVar44, 12) = uVar34;
                uVar43 = uVar35 >> 0x38 & _DAT_1000db30;
                uVar46 = PF_PART8(auVar44, 8) >> 0x30 & uRam000000001000db38;
                uVar33 = (ushort)uVar43;
                cVar26 = (char)uVar43;
                bVar8 = (uVar33 != 0) * (uVar33 < 0x100) * cVar26 - (0xff < uVar33);
                sVar3 = (short)uVar46;
                cVar16 = (char)uVar46;
                bVar9 = (0 < sVar3) * (sVar3 < 0x100) * cVar16 - (0xff < sVar3);
                bVar10 = (uVar33 != 0) * (uVar33 < 0x100) * cVar26 - (0xff < uVar33);
                bVar11 = (0 < sVar3) * (sVar3 < 0x100) * cVar16 - (0xff < sVar3);
                uVar33 = (ushort)bVar8;
                bVar12 = (bVar8 != 0) * (uVar33 < 0x100) * bVar8 - (0xff < uVar33);
                uVar42 = (ushort)bVar12;
                uVar1 = (ushort)bVar9;
                bVar13 = (bVar9 != 0) * (uVar1 < 0x100) * bVar9 - (0xff < uVar1);
                uVar2 = (ushort)bVar10;
                bVar14 = (bVar10 != 0) * (uVar2 < 0x100) * bVar10 - (0xff < uVar2);
                uVar4 = (ushort)bVar11;
                bVar15 = (bVar11 != 0) * (uVar4 < 0x100) * bVar11 - (0xff < uVar4);
                bVar8 = (bVar8 != 0) * (uVar33 < 0x100) * bVar8 - (0xff < uVar33);
                bVar9 = (bVar9 != 0) * (uVar1 < 0x100) * bVar9 - (0xff < uVar1);
                bVar10 = (bVar10 != 0) * (uVar2 < 0x100) * bVar10 - (0xff < uVar2);
                bVar11 = (bVar11 != 0) * (uVar4 < 0x100) * bVar11 - (0xff < uVar4);
                uVar33 = (ushort)bVar13;
                ((uint8_t *)(void *)&auVar45)[1] = (bVar13 != 0) * (uVar33 < 0x100) * bVar13 - (0xff < uVar33);
                ((uint8_t *)(void *)&auVar45)[0] = (bVar12 != 0) * (uVar42 < 0x100) * bVar12 - (0xff < uVar42);
                uVar1 = (ushort)bVar14;
                ((uint8_t *)(void *)&auVar45)[2] = (bVar14 != 0) * (uVar1 < 0x100) * bVar14 - (0xff < uVar1);
                uVar2 = (ushort)bVar15;
                ((uint8_t *)(void *)&auVar45)[3] = (bVar15 != 0) * (uVar2 < 0x100) * bVar15 - (0xff < uVar2);
                uVar4 = (ushort)bVar8;
                ((uint8_t *)(void *)&auVar45)[4] = (bVar8 != 0) * (uVar4 < 0x100) * bVar8 - (0xff < uVar4);
                uVar5 = (ushort)bVar9;
                ((uint8_t *)(void *)&auVar45)[5] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
                uVar6 = (ushort)bVar10;
                ((uint8_t *)(void *)&auVar45)[6] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
                uVar7 = (ushort)bVar11;
                ((uint8_t *)(void *)&auVar45)[7] = (bVar11 != 0) * (uVar7 < 0x100) * bVar11 - (0xff < uVar7);
                ((uint8_t *)(void *)&auVar45)[8] = (bVar12 != 0) * (uVar42 < 0x100) * bVar12 - (0xff < uVar42);
                ((uint8_t *)(void *)&auVar45)[9] = (bVar13 != 0) * (uVar33 < 0x100) * bVar13 - (0xff < uVar33);
                ((uint8_t *)(void *)&auVar45)[10] = (bVar14 != 0) * (uVar1 < 0x100) * bVar14 - (0xff < uVar1);
                ((uint8_t *)(void *)&auVar45)[0xb] = (bVar15 != 0) * (uVar2 < 0x100) * bVar15 - (0xff < uVar2);
                ((uint8_t *)(void *)&auVar45)[0xc] = (bVar8 != 0) * (uVar4 < 0x100) * bVar8 - (0xff < uVar4);
                ((uint8_t *)(void *)&auVar45)[0xd] = (bVar9 != 0) * (uVar5 < 0x100) * bVar9 - (0xff < uVar5);
                ((uint8_t *)(void *)&auVar45)[0xe] = (bVar10 != 0) * (uVar6 < 0x100) * bVar10 - (0xff < uVar6);
                ((uint8_t *)(void *)&auVar45)[0xf] = (bVar11 != 0) * (uVar7 < 0x100) * bVar11 - (0xff < uVar7);
                PF_PART8(auVar38, 0) = CONCAT44(uVar18,uVar18) & 0xff000000ff;
                PF_PART8(auVar38, 8) = 0;
                PF_PART8(auVar39, 0) = (uVar35 >> 0x10 & 0xffff) << 0x28;
                PF_PART8(auVar39, 8) = 0;
                PF_PART8(auVar40, 0) = (ulong)((uint)uVar35 >> 8) << 0x30;
                PF_PART8(auVar40, 8) = 0;
                in_XMM2 = (~_DAT_1000db80 & auVar40 |
                          (~_DAT_1000db70 & auVar39 |
                          (~_DAT_1000db60 & auVar38 |
                          (~_DAT_1000db50 & ZEXT416(uVar34 << 0x18) |
                          (auVar45 & _DAT_1000db40 | ~_DAT_1000db40 & ZEXT416((uVar34 >> 8) << 0x10)
                          ) & _DAT_1000db50) & _DAT_1000db60) & _DAT_1000db70) & _DAT_1000db80) &
                          _DAT_1000db90;
                PF_PART8(local_7c, 4) = PF_PART8(local_7c, 4) ^ (uVar35 << 0x38 | PF_PART8(in_XMM2, 0));
                recovered_1000cfd0(local_60,(undefined8 *)local_7c,(undefined8 *)&local_35,
                                   (undefined8 *)local_48,local_68,&local_c8);
                pbVar27 = pbVar25 + local_68;
                ((uint8_t *)(void *)&auVar41)[0] = -(*pbVar27 == local_c8);
                ((uint8_t *)(void *)&auVar41)[1] = -(pbVar27[1] == bStack_c7);
                ((uint8_t *)(void *)&auVar41)[2] = -(pbVar27[2] == bStack_c6);
                ((uint8_t *)(void *)&auVar41)[3] = -(pbVar27[3] == bStack_c5);
                ((uint8_t *)(void *)&auVar41)[4] = -(pbVar27[4] == bStack_c4);
                ((uint8_t *)(void *)&auVar41)[5] = -(pbVar27[5] == bStack_c3);
                ((uint8_t *)(void *)&auVar41)[6] = -(pbVar27[6] == bStack_c2);
                ((uint8_t *)(void *)&auVar41)[7] = -(pbVar27[7] == bStack_c1);
                ((uint8_t *)(void *)&auVar41)[8] = -(pbVar27[8] == bStack_c0);
                ((uint8_t *)(void *)&auVar41)[9] = -(pbVar27[9] == bStack_bf);
                ((uint8_t *)(void *)&auVar41)[10] = -(pbVar27[10] == bStack_be);
                ((uint8_t *)(void *)&auVar41)[0xb] = -(pbVar27[0xb] == bStack_bd);
                ((uint8_t *)(void *)&auVar41)[0xc] = -(pbVar27[0xc] == bStack_bc);
                ((uint8_t *)(void *)&auVar41)[0xd] = -(pbVar27[0xd] == bStack_bb);
                ((uint8_t *)(void *)&auVar41)[0xe] = -(pbVar27[0xe] == bStack_ba);
                ((uint8_t *)(void *)&auVar41)[0xf] = -(pbVar27[0xf] == bStack_b9);
                if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                            (ushort)(((uint8_t *)(void *)&auVar41)[0xf] >> 7) << 0xf) != 0xffff) {
                  pcVar31 = str_1000e1ec;
                  goto LAB_1000bb64;
                }
                if (local_68 == 0) {
                  local_60[6] = local_60[6] + 1;
                  uVar35 = 0;
                  goto LAB_1000bb72;
                }
                local_98 = (long)local_58 - (long)pbVar25;
                local_88 = pbVar25 + 0x10;
                local_90 = pbVar25 + 1;
                uVar34 = 1;
                uVar43 = 0;
                do {
                  uVar35 = local_68 - uVar43;
                  if (0x3f < uVar35) {
                    uVar35 = 0x40;
                  }
                  recovered_1000d620(local_60,uVar34,local_7c,&local_108);
                  pbVar27 = local_50;
                  if (local_68 != uVar43) {
                    uVar46 = uVar35 + (uVar35 == 0);
                    if (local_68 - uVar43 < 4) {
                      uVar28 = 0;
                    }
                    else {
                      uVar28 = 0;
                      if (0x1f < local_98) {
                        if (local_68 - uVar43 < 0x20) {
                          uVar32 = 0;
                        }
                        else {
                          uVar28 = (ulong)((uint)uVar46 & 0x60);
                          uVar32 = 0;
                          do {
                            uVar19 = *(ulong *)((long)(local_88 + uVar32 + (uVar43 - 0x10)) + 8);
                            uVar21 = *(ulong *)(local_88 + uVar32 + uVar43);
                            uVar22 = *(ulong *)((long)(local_88 + uVar32 + uVar43) + 8);
                            uVar20 = *(ulong *)((long)auStack_100 + uVar32);
                            uVar23 = *(ulong *)((long)auStack_100 + uVar32 + 8);
                            uVar24 = *(ulong *)((long)auStack_100 + uVar32 + 0x10);
                            *(ulong *)(local_a0 + uVar32 + (uVar43 - 0x10)) =
                                 *(ulong *)(local_88 + uVar32 + (uVar43 - 0x10)) ^
                                 *(ulong *)((long)auStack_100 + (uVar32 - 8));
                            *(ulong *)((long)(local_a0 + uVar32 + (uVar43 - 0x10)) + 8) =
                                 uVar19 ^ uVar20;
                            *(ulong *)(local_a0 + uVar32 + uVar43) = uVar21 ^ uVar23;
                            *(ulong *)((long)(local_a0 + uVar32 + uVar43) + 8) = uVar22 ^ uVar24;
                            uVar32 = uVar32 + 0x20;
                          } while (uVar28 != uVar32);
                          if (uVar35 == uVar28) goto LAB_1000bc30;
                          uVar32 = uVar28;
                          if ((uVar46 & 0x1c) == 0) goto LAB_1000bd52;
                        }
                        uVar28 = (ulong)((uint)uVar46 & 0x7c);
                        do {
                          *(uint *)(local_58 + uVar32 + uVar43) =
                               *(uint *)((long)auStack_100 + (uVar32 - 8)) ^
                               *(uint *)(local_48 + uVar32 + uVar43);
                          uVar32 = uVar32 + 4;
                        } while (uVar28 != uVar32);
                        if (uVar35 == uVar28) goto LAB_1000bc30;
                      }
                    }
LAB_1000bd52:
                    uVar32 = uVar28;
                    if ((uVar46 & 1) != 0) {
                      local_58[uVar28 + uVar43] =
                           *(byte *)((long)auStack_100 + (uVar28 - 8)) ^ local_48[uVar28 + uVar43];
                      uVar32 = uVar28 | 1;
                    }
                    if (uVar46 != (uVar28 | 1)) {
                      do {
                        local_b0[uVar32 + (uVar43 - 1)] =
                             *(byte *)((long)auStack_100 + (uVar32 - 8)) ^
                             local_90[uVar32 + (uVar43 - 1)];
                        local_b0[uVar32 + uVar43] =
                             *(byte *)((long)auStack_100 + (uVar32 - 7)) ^ local_90[uVar32 + uVar43]
                        ;
                        uVar32 = uVar32 + 2;
                      } while (uVar35 != uVar32);
                    }
                  }
LAB_1000bc30:
                  uVar34 = uVar34 + 1;
                  uVar43 = uVar43 + uVar35;
                } while (uVar43 < local_68);
                local_60[6] = local_60[6] + 1;
                uVar29 = uVar29 - 0x11;
                do {
                  bVar11 = local_58[uVar29];
                  if (bVar11 != 0) {
                    if ((bVar11 & 0xfc) == 0x14) {
                      if (local_50 != (byte *)0x0) {
                        *local_50 = bVar11;
                      }
                      if (local_40 != (ulong *)0x0) {
                        *local_40 = uVar29;
                      }
                      uVar35 = 0;
                    }
                    else {
                      pf_varargs_10005610__4_(param_8,param_9,str_1000e20d,(uint)bVar11);
                      uVar35 = CONCAT71((int7)(uVar35 >> 8),1);
                    }
                    break;
                  }
                  uVar35 = 0;
                  bVar37 = uVar29 != 0;
                  uVar29 = uVar29 - 1;
                } while (bVar37);
              }
              if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
                 ((0xb < _DAT_00006808 &&
                  ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))))) {
                (*(code *)(ulong)_DAT_00006850)(local_48);
              }
              if (pbVar27 == (byte *)0x0 || (char)uVar35 != '\0') {
                uVar35 = uVar35 ^ 1;
              }
              else {
                uVar35 = CONCAT71((int7)(uVar35 >> 8),1);
                if (((local_40 != (ulong *)0x0) && (*pbVar27 == 0)) && (*local_40 == 0))
                goto LAB_1000b7f0;
              }
              goto LAB_1000c026;
            }
            if (local_35 == 0x15) {
              uVar34 = 0;
              if (1 < uVar33) {
                uVar34 = (uint)pbVar27[1];
              }
              pf_varargs_10005610__4__4_(param_8,param_9,str_1000e14c,(uint)*pbVar27,uVar34);
              pbVar27 = local_48;
            }
            else {
              pf_varargs_10005610__4__4__4__4_
                        (param_8,param_9,str_1000e179,(uint)local_35,(uint)local_34,(uint)local_33,
                         (uint)uVar33);
              pbVar27 = local_48;
            }
            uVar35 = 0;
            if (_DAT_00006800 != 0x50414d57) goto LAB_1000c026;
            if (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) || (_DAT_00006808 < 0x54))
            goto LAB_1000c023;
            pcVar30 = (code *)(ulong)_DAT_00006850;
            local_48 = pbVar27;
            if (pcVar30 == (code *)0x0) goto LAB_1000c023;
          }
          (*pcVar30)(pbVar27);
          uVar35 = 0;
          goto LAB_1000c026;
        }
        if (local_70 < uVar29) {
          pcVar31 = str_1000e12d;
          goto LAB_1000bf84;
        }
        if ((code *)param_1[1] == (code *)0x0) break;
        cVar26 = (*(code *)param_1[1])(*param_1,pbVar27,uVar29,param_8);
        if (cVar26 == '\0') goto LAB_1000c023;
        if (local_35 != 0x14) {
          if (local_35 == 0x15) {
            uVar34 = 0;
            if (1 < uVar33) {
              uVar34 = (uint)local_58[1];
            }
            uVar35 = 0;
            pf_varargs_10005610__4__4_(param_8,param_9,str_1000e14c,(uint)*local_58,uVar34);
          }
          else {
            if (local_50 != (byte *)0x0) {
              *local_50 = local_35;
            }
            uVar35 = CONCAT71((int7)((ulong)pbVar27 >> 8),1);
            if (local_40 != (ulong *)0x0) {
              *local_40 = uVar29;
            }
          }
          goto LAB_1000c026;
        }
LAB_1000b7f0:
        pcVar30 = (code *)param_1[1];
      } while (pcVar30 != (code *)0x0);
    }
    pcVar31 = str_1000e1b6;
LAB_1000bf84:
    uVar35 = 0;
    pf_varargs_10005610___(param_8,param_9,pcVar31);
  }
LAB_1000c026:
  return uVar35 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_00006850
#undef DAT_1000db30
#undef DAT_1000db40
#undef DAT_1000db50
#undef DAT_1000db60
#undef DAT_1000db70
#undef DAT_1000db80
#undef DAT_1000db90
#undef UNK_1000db38
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_00006850
#undef _DAT_1000db30
#undef _DAT_1000db40
#undef _DAT_1000db50
#undef _DAT_1000db60
#undef _DAT_1000db70
#undef _DAT_1000db80
#undef _DAT_1000db90
#undef str_1000de06
#undef str_1000e113
#undef str_1000e12d
#undef str_1000e14c
#undef str_1000e179
#undef str_1000e1b6
#undef str_1000e1d7
#undef str_1000e1ec
#undef str_1000e20d
#undef uRam000000001000db38
#undef auStack_100
#undef bStack_c7
#undef bStack_c6
#undef bStack_c5
#undef bStack_c4
#undef bStack_c3
#undef bStack_c2
#undef bStack_c1
#undef bStack_c0
#undef bStack_bf
#undef bStack_be
#undef bStack_bd
#undef bStack_bc
#undef bStack_bb
#undef bStack_ba
#undef bStack_b9
#undef local_108
#undef local_c8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_7c
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_35
#undef local_34
#undef local_33
#undef local_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c050
 */

int recovered_1000c050(void *context,void *output)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((output == (void *)0x0 || context == (void *)0x0) ||
     (*(char *)((long)context + 0x21e) != '\x01')) {
    return 0;
  }
  pvVar1 = recovered_10000f90(output,(void *)((long)context + 0x1f8),0x20);
  return (int)CONCAT71((int7)((ulong)pvVar1 >> 8),1);
}


/* Native entropy callback and fallback state evolution; Pooka's Free Software License. */
void recovered_1000c090(void *opaque,void *output){
 uintptr_t *context=(uintptr_t *)opaque;
 uint32_t date[6]={0},seed=0x574d544cU;
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]==0x50414d57U&&api[1]&&api[2]>=364&&api[90]&&((int (*)(void *))(uintptr_t)api[90])(date))
  seed^=date[3]*0x3c6ef35fU^date[2]^date[4]*0x19660dU;
 if(!output)return;
 uint32_t *stored=(uint32_t *)((uint8_t *)opaque+0x218);
 seed^=(uint32_t)(uintptr_t)opaque^*stored;
 if(!context[3]||!((unsigned char (*)(void *,void *,unsigned long))context[3])((void *)context[0],output,32)){
  for(unsigned i=0;i<32;++i){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;((uint8_t *)output)[i]=(uint8_t)(seed>>((i*8)&24));}
 }else{
  uint32_t folded=0;for(unsigned i=0;i<8;++i)folded^=((uint32_t *)output)[i];
  seed^=folded;
 }
 *stored=seed;
}


#undef DAT_1000dae0
#define DAT_1000dae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef DAT_1000daf0
#define DAT_1000daf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef UNK_1000dae8
#define UNK_1000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef UNK_1000daf8
#define UNK_1000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef _DAT_1000dae0
#define _DAT_1000dae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c1U)))
#undef _DAT_1000daf0
#define _DAT_1000daf0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_1000dbd0
#define str_1000dbd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef uRam000000001000dae8
#define uRam000000001000dae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef uRam000000001000daf8
#define uRam000000001000daf8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define uStack_30 (*(uint *)(frame + 208))
#define uStack_2c (*(uint *)(frame + 212))
#define local_e8 (*(uint *)(frame + 24))
#define local_d8 (*(uint *)(frame + 40))
#define local_c8 (*(uint *)(frame + 56))
#define local_b8 (*(uint *)(frame + 72))
#define local_a8 (*(uint *)(frame + 88))
#define local_98 (*(uint *)(frame + 104))
#define local_88 (*(uint *)(frame + 120))
#define local_78 (*(uint *)(frame + 136))
#define local_68 (*(uint *)(frame + 152))
#define local_58 (*(uint *)(frame + 168))
#define local_48 (*(uint *)(frame + 184))
#define local_38 (*(uint *)(frame + 200))
#define uStack_e4 (*(uint *)(frame + 28))
#define uStack_e0 (*(uint *)(frame + 32))
#define uStack_dc (*(uint *)(frame + 36))
#define uStack_d4 (*(uint *)(frame + 44))
#define uStack_d0 (*(uint *)(frame + 48))
#define uStack_cc (*(uint *)(frame + 52))
#define uStack_c4 (*(uint *)(frame + 60))
#define uStack_c0 (*(uint *)(frame + 64))
#define uStack_bc (*(uint *)(frame + 68))
#define uStack_b4 (*(uint *)(frame + 76))
#define uStack_b0 (*(uint *)(frame + 80))
#define uStack_ac (*(uint *)(frame + 84))
#define uStack_a4 (*(uint *)(frame + 92))
#define uStack_a0 (*(uint *)(frame + 96))
#define uStack_9c (*(uint *)(frame + 100))
#define uStack_94 (*(uint *)(frame + 108))
#define uStack_90 (*(uint *)(frame + 112))
#define uStack_8c (*(uint *)(frame + 116))
#define uStack_84 (*(uint *)(frame + 124))
#define uStack_80 (*(uint *)(frame + 128))
#define uStack_7c (*(uint *)(frame + 132))
#define uStack_74 (*(uint *)(frame + 140))
#define uStack_70 (*(uint *)(frame + 144))
#define uStack_6c (*(uint *)(frame + 148))
#define uStack_64 (*(uint *)(frame + 156))
#define uStack_60 (*(uint *)(frame + 160))
#define uStack_5c (*(uint *)(frame + 164))
#define uStack_54 (*(uint *)(frame + 172))
#define uStack_50 (*(uint *)(frame + 176))
#define uStack_4c (*(uint *)(frame + 180))
#define uStack_44 (*(uint *)(frame + 188))
#define uStack_40 (*(uint *)(frame + 192))
#define uStack_3c (*(uint *)(frame + 196))
#define uStack_34 (*(uint *)(frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000cad0(void *inner,void *outer,void *key)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(&local_68,0,0x40);
  if (key != (void *)0x0) {
    recovered_10000f90(&local_68,key,0x20);
  }
  uVar1 = uRam000000001000dae8;
  local_e8 = local_68 ^ PF_PART4(str_1000dbd0, 0);
  uStack_e4 = uStack_64 ^ PF_PART4(str_1000dbd0, 4);
  uStack_e0 = uStack_60 ^ PF_PART4(str_1000dbd0, 8);
  uStack_dc = uStack_5c ^ PF_PART4(str_1000dbd0, 12);
  local_d8 = local_58 ^ PF_PART4(str_1000dbd0, 0);
  uStack_d4 = uStack_54 ^ PF_PART4(str_1000dbd0, 4);
  uStack_d0 = uStack_50 ^ PF_PART4(str_1000dbd0, 8);
  uStack_cc = uStack_4c ^ PF_PART4(str_1000dbd0, 12);
  local_a8 = local_68 ^ PF_PART4(str_1000dbd0, 16);
  uStack_a4 = uStack_64 ^ PF_PART4(str_1000dbd0, 20);
  uStack_a0 = uStack_60 ^ PF_PART4(str_1000dbd0, 24);
  uStack_9c = uStack_5c ^ PF_PART4(str_1000dbd0, 28);
  local_98 = local_58 ^ PF_PART4(str_1000dbd0, 16);
  uStack_94 = uStack_54 ^ PF_PART4(str_1000dbd0, 20);
  uStack_90 = uStack_50 ^ PF_PART4(str_1000dbd0, 24);
  uStack_8c = uStack_4c ^ PF_PART4(str_1000dbd0, 28);
  local_c8 = local_48 ^ PF_PART4(str_1000dbd0, 0);
  uStack_c4 = uStack_44 ^ PF_PART4(str_1000dbd0, 4);
  uStack_c0 = uStack_40 ^ PF_PART4(str_1000dbd0, 8);
  uStack_bc = uStack_3c ^ PF_PART4(str_1000dbd0, 12);
  local_b8 = PF_PART4(str_1000dbd0, 0) ^ local_38;
  uStack_b4 = PF_PART4(str_1000dbd0, 4) ^ uStack_34;
  uStack_b0 = PF_PART4(str_1000dbd0, 8) ^ uStack_30;
  uStack_ac = PF_PART4(str_1000dbd0, 12) ^ uStack_2c;
  local_88 = local_48 ^ PF_PART4(str_1000dbd0, 16);
  uStack_84 = uStack_44 ^ PF_PART4(str_1000dbd0, 20);
  uStack_80 = uStack_40 ^ PF_PART4(str_1000dbd0, 24);
  uStack_7c = uStack_3c ^ PF_PART4(str_1000dbd0, 28);
  local_78 = local_38 ^ PF_PART4(str_1000dbd0, 16);
  uStack_74 = uStack_34 ^ PF_PART4(str_1000dbd0, 20);
  uStack_70 = uStack_30 ^ PF_PART4(str_1000dbd0, 24);
  uStack_6c = uStack_2c ^ PF_PART4(str_1000dbd0, 28);
  if (inner != (void *)0x0) {
    *(undefined8 *)inner = _DAT_1000dae0;
    *(undefined8 *)((long)inner + 8) = uVar1;
    uVar1 = uRam000000001000daf8;
    *(undefined8 *)((long)inner + 0x10) = _DAT_1000daf0;
    *(undefined8 *)((long)inner + 0x18) = uVar1;
    *(undefined8 *)((long)inner + 0x20) = 0;
    *(undefined4 *)((long)inner + 0x68) = 0;
  }
  recovered_10008bd0(inner,&local_e8,0x40);
  uVar1 = uRam000000001000dae8;
  if (outer != (void *)0x0) {
    *(undefined8 *)outer = _DAT_1000dae0;
    *(undefined8 *)((long)outer + 8) = uVar1;
    uVar1 = uRam000000001000daf8;
    *(undefined8 *)((long)outer + 0x10) = _DAT_1000daf0;
    *(undefined8 *)((long)outer + 0x18) = uVar1;
    *(undefined8 *)((long)outer + 0x20) = 0;
    *(undefined4 *)((long)outer + 0x68) = 0;
  }
  recovered_10008bd0(outer,&local_a8,0x40);
  return;
}

#undef DAT_1000dae0
#undef DAT_1000daf0
#undef UNK_1000dae8
#undef UNK_1000daf8
#undef _DAT_1000dae0
#undef _DAT_1000daf0
#undef str_1000dbd0
#undef uRam000000001000dae8
#undef uRam000000001000daf8
#undef uStack_30
#undef uStack_2c
#undef local_e8
#undef local_d8
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_38
#undef uStack_e4
#undef uStack_e0
#undef uStack_dc
#undef uStack_d4
#undef uStack_d0
#undef uStack_cc
#undef uStack_c4
#undef uStack_c0
#undef uStack_bc
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_94
#undef uStack_90
#undef uStack_8c
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef uStack_74
#undef uStack_70
#undef uStack_6c
#undef uStack_64
#undef uStack_60
#undef uStack_5c
#undef uStack_54
#undef uStack_50
#undef uStack_4c
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef uStack_34

#undef DAT_1000dd64
#define DAT_1000dd64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x445U)))
#undef DAT_1000e075
#define DAT_1000e075 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x756U)))
#define local_28 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc10
 */

void recovered_1000cc10(void *context,void *output)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;

  if (output != (void *)0x0 && context != (void *)0x0) {
    uVar3 = *(ulong *)((long)context + 0x20);
    uVar4 = uVar3 << 3;
    local_28 = (uVar3 & 0x1fffffffffffffff) >> 0x35 | (uVar4 & 0xff000000000000) >> 0x28 |
               (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
               (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
               uVar3 << 0x3b;
    recovered_10008bd0(context,&DAT_1000e075,1);
    iVar1 = *(int *)((long)context + 0x68);
    while (iVar1 != 0x38) {
      recovered_10008bd0(context,&DAT_1000dd64,1);
      iVar1 = *(int *)((long)context + 0x68);
    }
    recovered_10008bd0(context,&local_28,8);
    uVar2 = *(uint *)context;
    *(uint *)output =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 4);
    *(uint *)((long)output + 4) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 8);
    *(uint *)((long)output + 8) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0xc);
    *(uint *)((long)output + 0xc) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x10);
    *(uint *)((long)output + 0x10) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x14);
    *(uint *)((long)output + 0x14) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x18);
    *(uint *)((long)output + 0x18) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)((long)context + 0x1c);
    *(uint *)((long)output + 0x1c) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  return;
}

#undef DAT_1000dd64
#undef DAT_1000e075
#undef local_28

#undef str_1000e077
#define str_1000e077 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x758U)))
#define local_218 (*(undefined1 (*)[112])(frame + 24))
#define local_1a8 (*(undefined1 (*)[112])(frame + 136))
#define local_138 (*(undefined1 (*)[32])(frame + 248))
#define local_118 (*(undefined1 (*)[32])(frame + 280))
#define local_f8 (*(undefined1 (*)[136])(frame + 312))
#define local_70 (*(undefined8 * *)(frame + 448))
#define local_68 (*(ulong *)(frame + 456))
#define local_60 (*(void * *)(frame + 464))
#define local_58 (*(ulong *)(frame + 472))
#define local_50 (*(ulong *)(frame + 480))
#define local_48 (*(void * *)(frame + 488))
#define local_40 (*(ulong *)(frame + 496))
#define local_31 (*(char *)(frame + 511))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ccf0
 */

void recovered_1000ccf0(long param_1,long param_2,undefined8 *param_3,long param_4,long param_5,
                       ulong param_6)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  ulong count;
  ulong uVar1;
  ulong uVar2;

  local_70 = param_3;
  local_68 = param_4;
  local_40 = param_6;
  uVar1 = recovered_10002a00(str_1000e077);
  if (param_2 != 0) {
    uVar2 = recovered_10002a00((char *)param_2);
    if ((param_5 != 0 && param_1 != 0) && (uVar2 + uVar1 < 0x100)) {
      local_50 = local_68 + uVar2 + uVar1 + 4;
      if (local_50 < 0x81) {
        local_58 = uVar2 + uVar1 + 4;
        local_f8[0] = (undefined1)(local_40 >> 8);
        local_f8[1] = (undefined1)local_40;
        local_f8[2] = (undefined1)(uVar2 + uVar1);
        local_60 = (void *)param_5;
        local_48 = (void *)param_1;
        recovered_10000f90(local_f8 + 3,str_1000e077,uVar1);
        recovered_10000f90(local_f8 + uVar1 + 3,(void *)param_2,uVar2);
        count = local_68;
        local_f8[uVar2 + uVar1 + 3] = (char)local_68;
        if (count == 0) {
          local_50 = local_58;
        }
        else {
          recovered_10000f90(local_f8 + local_58,local_70,count);
        }
        local_31 = '\x01';
        if (local_40 != 0) {
          recovered_1000cad0(local_218,local_1a8,local_48);
          recovered_10008bd0(local_218,local_f8,local_50);
          recovered_10008bd0(local_218,&local_31,1);
          recovered_1000cc10(local_218,local_118);
          recovered_10008bd0(local_1a8,local_118,0x20);
          recovered_1000cc10(local_1a8,local_138);
          uVar1 = 0x20;
          if (local_40 < 0x20) {
            uVar1 = local_40;
          }
          recovered_10000f90(local_60,local_138,uVar1);
          local_31 = local_31 + '\x01';
          if ((local_40 < 0x21 || local_31 != '\0') && (0x20 < local_40)) {
            do {
              recovered_1000cad0(local_218,local_1a8,local_48);
              recovered_10008bd0(local_218,local_138,0x20);
              recovered_10008bd0(local_218,local_f8,local_50);
              recovered_10008bd0(local_218,&local_31,1);
              recovered_1000cc10(local_218,local_118);
              recovered_10008bd0(local_1a8,local_118,0x20);
              recovered_1000cc10(local_1a8,local_138);
              uVar2 = local_40 - uVar1;
              if (0x1f < uVar2) {
                uVar2 = 0x20;
              }
              recovered_10000f90((void *)((long)local_60 + uVar1),local_138,uVar2);
              uVar1 = uVar2 + uVar1;
              local_31 = local_31 + '\x01';
            } while (((local_31 != '\0') || (local_40 <= uVar1)) && (uVar1 < local_40));
          }
        }
      }
    }
  }
  return;
}

#undef str_1000e077
#undef local_218
#undef local_1a8
#undef local_138
#undef local_118
#undef local_f8
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_31

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_1000cfd0(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_1000d620(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_10000ea0(total);
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
 recovered_10000ef0(message);
}


/* Recovered twenty-round ChaCha block transform; Pooka's Free Software License. */
static uint32_t pf_tls_chacha_load(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static uint32_t pf_tls_chacha_rotate(uint32_t word,unsigned bits){return word<<bits|word>>(32-bits);}
static void pf_tls_chacha_quarter(uint32_t *x,unsigned a,unsigned b,unsigned c,unsigned d){
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],16);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],12);
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],8);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],7);
}
void recovered_1000d620(void *key,uint counter,void *nonce,void *output){
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
