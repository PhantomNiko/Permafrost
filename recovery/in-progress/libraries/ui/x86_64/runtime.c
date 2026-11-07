/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000d0f0
#define DAT_1000d0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004c0
 */

void recovered_100004c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000d0f0 = 0;
  recovered_100004e0();
  return;
}

#undef DAT_1000d0f0

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
#undef DAT_1000d0f0
#define DAT_1000d0f0 (*(char *)(((uintptr_t)pf_module_state + 0x9bfU)))
#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9c7U)))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9cfU)))
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
  if (DAT_1000d0f0 != '\0') {
    return;
  }
  DAT_1000d0f8 = 0;
  DAT_1000d100 = 0;
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
      if (DAT_1000d0f8 != 0) goto LAB_100008c5;
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
      if (DAT_1000d0f8 == 0) {
        puVar4 = &DAT_1000d0f8;
      }
      *puVar4 = 0x300000;
      if (DAT_1000d100 == 0) {
        DAT_1000d0f0 = 1;
        DAT_1000d100 = 0x300000;
        return;
      }
      DAT_1000d0f0 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_1000d0f8 == 0) {
      puVar4 = &DAT_1000d0f8;
    }
    *puVar4 = 0x300000;
    if (DAT_1000d100 == 0) {
      DAT_1000d100 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_1000d0f8 == 0) {
        puVar4 = &DAT_1000d0f8;
      }
      *puVar4 = 0x2000000;
      if (DAT_1000d100 == 0) {
        DAT_1000d0f0 = 1;
        DAT_1000d100 = 0x2000000;
        return;
      }
      DAT_1000d0f0 = 1;
      return;
    }
  }
LAB_100008c5:
  if (DAT_1000d100 == 0) {
    DAT_1000d100 = DAT_1000d0f8;
    DAT_1000d0f0 = 1;
    return;
  }
  DAT_1000d0f0 = 1;
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
#undef DAT_1000d0f0
#undef DAT_1000d0f8
#undef DAT_1000d100
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

#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9c7U)))
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
  for (plVar1 = DAT_1000d0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_1000d0f8

#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9c7U)))
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
  for (plVar2 = DAT_1000d0f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1000d0f8

#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9c7U)))
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
  for (plVar1 = DAT_1000d0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000d0f8

#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9c7U)))
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
  for (plVar1 = DAT_1000d0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1000d0f8

#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9c7U)))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9cfU)))
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
  puVar3 = DAT_1000d100;
  if (DAT_1000d100 == (ulong *)0x0) {
    puVar3 = DAT_1000d0f8;
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
        DAT_1000d100 = DAT_1000d0f8;
        if (puVar3 != (ulong *)0x0) {
          DAT_1000d100 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_1000d0f8;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000d0f8
#undef DAT_1000d100

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


#undef DAT_1000c920
#define DAT_1000c920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b0
 */

undefined * recovered_100030b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000c920;
}

#undef DAT_1000c920

#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8cfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

undefined ** recovered_100030c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000d000;
}

#undef PTR_DAT_1000d000

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
#define local_28 (*(undefined1 (*)[8])(frame + 24))
#define uStack_20 (*(undefined8 *)(frame + 32))
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
#undef local_28
#undef uStack_20
#undef uStack_18

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
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
          param_1 = param_1 * DAT_1000c740;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 *
                    DAT_1000c740 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740;
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

#undef DAT_1000c740

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8fU)))
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
  dVar2 = (double)(_DAT_1000c7c0 ^ (ulong)param_1);
  if ((double)(_DAT_1000c7c0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000c748 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000c740;
      iVar1 = iVar1 + 1;
    } while (DAT_1000c748 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000c740)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000c7c0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c7c0
#undef _DAT_1000c7c0

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


#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
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
      return DAT_1000c748;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000c748;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000c748 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000c748

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


#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
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
         (ulong)(DAT_1000c748 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000c748

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
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
    if (param_1 <= DAT_1000c748) {
      dVar1 = DAT_1000c748;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000c740;
  }
  return dVar1;
}

#undef DAT_1000c740
#undef DAT_1000c748

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c750
#define DAT_1000c750 (*(double *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000c758
#define DAT_1000c758 (*(double *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000c760
#define DAT_1000c760 (*(double *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000c768
#define DAT_1000c768 (*(double *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000c770
#define DAT_1000c770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000c778
#define DAT_1000c778 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000c7d0
#define DAT_1000c7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef DAT_1000c7e0
#define DAT_1000c7e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafU)))
#undef DAT_1000c7f0
#define DAT_1000c7f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbfU)))
#undef DAT_1000c800
#define DAT_1000c800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef _DAT_1000c770
#define _DAT_1000c770 (*(double *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef _DAT_1000c778
#define _DAT_1000c778 (*(double *)(((uintptr_t)pf_module_state + 0x47U)))
#undef _DAT_1000c7d0
#define _DAT_1000c7d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef _DAT_1000c7e0
#define _DAT_1000c7e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xafU)))
#undef _DAT_1000c7f0
#define _DAT_1000c7f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbfU)))
#undef _DAT_1000c800
#define _DAT_1000c800 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcfU)))
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
    if (DAT_1000c758 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000c740;
        iVar1 = iVar1 + 1;
      } while (DAT_1000c758 < param_1);
    }
    for (; param_1 < DAT_1000c760; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000c768 + param_1) / (param_1 + DAT_1000c748);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000c7d0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000c7e0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000c7f0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000c800);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000c770 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000c778;
  }
  return DAT_1000c750;
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c750
#undef DAT_1000c758
#undef DAT_1000c760
#undef DAT_1000c768
#undef DAT_1000c770
#undef DAT_1000c778
#undef DAT_1000c7d0
#undef DAT_1000c7e0
#undef DAT_1000c7f0
#undef DAT_1000c800
#undef _DAT_1000c770
#undef _DAT_1000c778
#undef _DAT_1000c7d0
#undef _DAT_1000c7e0
#undef _DAT_1000c7f0
#undef _DAT_1000c800

#undef DAT_1000c810
#define DAT_1000c810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037b0
 */

long recovered_100037b0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000c810 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000c810

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c780
#define DAT_1000c780 (*(double *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000c788
#define DAT_1000c788 (*(double *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000c790
#define DAT_1000c790 (*(double *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_1000c798
#define DAT_1000c798 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
#undef DAT_1000c7a0
#define DAT_1000c7a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef _DAT_1000c7a0
#define _DAT_1000c7a0 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef _DAT_1000c820
#define _DAT_1000c820 (*(uint128 *)(((uintptr_t)pf_module_state + 0xefU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100037e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000c780 < param_1; param_1 = param_1 + DAT_1000c788) {
  }
  for (; param_1 < DAT_1000c790; param_1 = param_1 + DAT_1000c798) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000c820);
  return ((dVar1 / _DAT_1000c7a0 + DAT_1000c748 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000c748
#undef DAT_1000c780
#undef DAT_1000c788
#undef DAT_1000c790
#undef DAT_1000c798
#undef DAT_1000c7a0
#undef DAT_1000c820
#undef _DAT_1000c7a0
#undef _DAT_1000c820

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c780
#define DAT_1000c780 (*(double *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000c788
#define DAT_1000c788 (*(double *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000c790
#define DAT_1000c790 (*(double *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_1000c798
#define DAT_1000c798 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
#undef DAT_1000c7a8
#define DAT_1000c7a8 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000c830
#define DAT_1000c830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xffU)))
#undef _DAT_1000c830
#define _DAT_1000c830 (*(uint128 *)(((uintptr_t)pf_module_state + 0xffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003890(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000c780 < param_1; param_1 = param_1 + DAT_1000c788) {
  }
  for (; param_1 < DAT_1000c790; param_1 = param_1 + DAT_1000c798) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000c830);
  return (DAT_1000c7a8 * dVar1 + DAT_1000c748 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000c748
#undef DAT_1000c780
#undef DAT_1000c788
#undef DAT_1000c790
#undef DAT_1000c798
#undef DAT_1000c7a8
#undef DAT_1000c830
#undef _DAT_1000c830

#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003930(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000c7c0 ^ (ulong)param_1);
  if ((double)(_DAT_1000c7c0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000c7c0
#undef _DAT_1000c7c0

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c7b0
#define DAT_1000c7b0 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_10003950(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if ((value == 0.0) && (!NAN(value))) {
    return 0;
  }
  dVar7 = (double)(_DAT_1000c7c0 ^ (ulong)value);
  if ((double)(_DAT_1000c7c0 ^ (ulong)value) <= value) {
    dVar7 = value;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1000c7b0;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1000c740;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1000c740;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= value) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1000c740
#undef DAT_1000c7b0
#undef DAT_1000c7c0
#undef _DAT_1000c7c0

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c7b0
#define DAT_1000c7b0 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a20
 */

ulonglong recovered_10003a20(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (value <= 0.0) {
    return 0;
  }
  lVar3 = 0x3f;
  uVar2 = 0;
  dVar6 = DAT_1000c7b0;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (value < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(value < dVar6) & (ulong)value |
                    ~-(ulong)(value < dVar6) & (ulong)(value - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1000c740;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    value = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1000c740;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1000c740
#undef DAT_1000c7b0

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad0
 */

double recovered_10003ad0(ulonglong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (value == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1000c748;
  do {
    if ((value & 1) != 0) {
      dVar2 = dVar2 + dVar3;
    }
    dVar3 = dVar3 + dVar3;
    bVar1 = 1 < value;
    value = value >> 1;
  } while (bVar1);
  return dVar2;
}

#undef DAT_1000c748

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003b20(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if (value < 0) {
    dVar4 = 0.0;
    uVar2 = -value;
    dVar3 = DAT_1000c748;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1000c7c0);
  }
  dVar3 = 0.0;
  if (value != 0) {
    dVar4 = DAT_1000c748;
    do {
      if ((value & 1U) != 0) {
        dVar3 = dVar3 + dVar4;
      }
      dVar4 = dVar4 + dVar4;
      bVar1 = 1 < (ulong)value;
      value = (ulong)value >> 1;
    } while (bVar1);
  }
  return dVar3;
}

#undef DAT_1000c748
#undef DAT_1000c7c0
#undef _DAT_1000c7c0

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


#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef UNK_1000c7c4
#define UNK_1000c7c4 (*(uint *)(((uintptr_t)pf_module_state + 0x93U)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef uRam000000001000c7c4
#define uRam000000001000c7c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x93U)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001000c7c4,
                             SUB84(dVar2,0) ^ _DAT_1000c7c0));
  }
  iVar1 = 0;
  if (DAT_1000c748 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000c740;
      iVar1 = iVar1 + 1;
    } while (DAT_1000c748 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000c740)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000c7c4,_DAT_1000c7c0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c7c0
#undef UNK_1000c7c4
#undef _DAT_1000c7c0
#undef uRam000000001000c7c4

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
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
          dVar3 = dVar3 * DAT_1000c740;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 *
                  DAT_1000c740 * DAT_1000c740 * DAT_1000c740;
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

#undef DAT_1000c740

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c850
#define DAT_1000c850 (*(float *)(((uintptr_t)pf_module_state + 0x11fU)))
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
    return DAT_1000c850;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000c748;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000c748 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000c748
#undef DAT_1000c850

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


#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000c748 + dVar2) & uVar1);
}

#undef DAT_1000c748

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
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
                    (ulong)(DAT_1000c748 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000c748

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000c748 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000c748

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


#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c758
#define DAT_1000c758 (*(double *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000c760
#define DAT_1000c760 (*(double *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000c768
#define DAT_1000c768 (*(double *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000c770
#define DAT_1000c770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000c778
#define DAT_1000c778 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000c7d0
#define DAT_1000c7d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef DAT_1000c7e0
#define DAT_1000c7e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafU)))
#undef DAT_1000c7f0
#define DAT_1000c7f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbfU)))
#undef DAT_1000c800
#define DAT_1000c800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef DAT_1000c854
#define DAT_1000c854 (*(float *)(((uintptr_t)pf_module_state + 0x123U)))
#undef DAT_1000c858
#define DAT_1000c858 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef _DAT_1000c770
#define _DAT_1000c770 (*(double *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef _DAT_1000c778
#define _DAT_1000c778 (*(double *)(((uintptr_t)pf_module_state + 0x47U)))
#undef _DAT_1000c7d0
#define _DAT_1000c7d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef _DAT_1000c7e0
#define _DAT_1000c7e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xafU)))
#undef _DAT_1000c7f0
#define _DAT_1000c7f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbfU)))
#undef _DAT_1000c800
#define _DAT_1000c800 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef _DAT_1000c858
#define _DAT_1000c858 (*(float *)(((uintptr_t)pf_module_state + 0x127U)))
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
    if (_DAT_1000c858 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000c740;
        iVar1 = iVar1 + 1;
      } while (DAT_1000c758 < dVar2);
    }
    for (; dVar2 < DAT_1000c760; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000c768 + dVar2) / (dVar2 + DAT_1000c748);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000c7d0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000c7e0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000c7f0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000c800);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000c770 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000c778);
  }
  return DAT_1000c854;
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c758
#undef DAT_1000c760
#undef DAT_1000c768
#undef DAT_1000c770
#undef DAT_1000c778
#undef DAT_1000c7d0
#undef DAT_1000c7e0
#undef DAT_1000c7f0
#undef DAT_1000c800
#undef DAT_1000c854
#undef DAT_1000c858
#undef _DAT_1000c770
#undef _DAT_1000c778
#undef _DAT_1000c7d0
#undef _DAT_1000c7e0
#undef _DAT_1000c7f0
#undef _DAT_1000c800
#undef _DAT_1000c858

#undef DAT_1000c810
#define DAT_1000c810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

long recovered_10004120(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000c810 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000c810

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c780
#define DAT_1000c780 (*(double *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000c788
#define DAT_1000c788 (*(double *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000c790
#define DAT_1000c790 (*(double *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_1000c798
#define DAT_1000c798 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
#undef DAT_1000c7a0
#define DAT_1000c7a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000c820
#define DAT_1000c820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef _DAT_1000c7a0
#define _DAT_1000c7a0 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef _DAT_1000c820
#define _DAT_1000c820 (*(uint128 *)(((uintptr_t)pf_module_state + 0xefU)))
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

  for (dVar1 = (double)param_1; DAT_1000c780 < dVar1; dVar1 = dVar1 + DAT_1000c788) {
  }
  for (; dVar1 < DAT_1000c790; dVar1 = dVar1 + DAT_1000c798) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000c820);
  return (float)(((dVar2 / _DAT_1000c7a0 + DAT_1000c748 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000c748
#undef DAT_1000c780
#undef DAT_1000c788
#undef DAT_1000c790
#undef DAT_1000c798
#undef DAT_1000c7a0
#undef DAT_1000c820
#undef _DAT_1000c7a0
#undef _DAT_1000c820

#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c780
#define DAT_1000c780 (*(double *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000c788
#define DAT_1000c788 (*(double *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000c790
#define DAT_1000c790 (*(double *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_1000c798
#define DAT_1000c798 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
#undef DAT_1000c7a8
#define DAT_1000c7a8 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000c830
#define DAT_1000c830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xffU)))
#undef _DAT_1000c830
#define _DAT_1000c830 (*(uint128 *)(((uintptr_t)pf_module_state + 0xffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004200(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000c780 < dVar1; dVar1 = dVar1 + DAT_1000c788) {
  }
  for (; dVar1 < DAT_1000c790; dVar1 = dVar1 + DAT_1000c798) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000c830);
  return (float)((DAT_1000c7a8 * dVar1 + DAT_1000c748 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000c748
#undef DAT_1000c780
#undef DAT_1000c788
#undef DAT_1000c790
#undef DAT_1000c798
#undef DAT_1000c7a8
#undef DAT_1000c830
#undef _DAT_1000c830

#undef DAT_1000c840
#define DAT_1000c840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef UNK_1000c844
#define UNK_1000c844 (*(uint *)(((uintptr_t)pf_module_state + 0x113U)))
#undef _DAT_1000c840
#define _DAT_1000c840 (*(uint *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef uRam000000001000c844
#define uRam000000001000c844 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x113U)))
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
  fVar2 = (float)(_DAT_1000c840 ^ (uint)fVar1);
  if ((float)(_DAT_1000c840 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000c844 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000c840
#undef UNK_1000c844
#undef _DAT_1000c840
#undef uRam000000001000c844

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


#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7b8
#define DAT_1000c7b8 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8fU)))
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
    dVar11 = dVar11 * DAT_1000c7b8 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000c748;
      do {
        dVar12 = dVar12 * DAT_1000c7b8 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000c7b8;
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
                dVar11 = dVar11 * DAT_1000c740;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740 *
                         DAT_1000c740 * DAT_1000c740 * DAT_1000c740 * DAT_1000c740;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000c7c0);
  }
  return dVar11;
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c7b8
#undef DAT_1000c7c0
#undef _DAT_1000c7c0

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


#undef DAT_1000c7b8
#define DAT_1000c7b8 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef DAT_1000c925
#define DAT_1000c925 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
#undef _DAT_1000c7c0
#define _DAT_1000c7c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef str_1000c92c
#define str_1000c92c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_1000c93d
#define str_1000c93d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20cU)))
#define abStack_7a (*(byte (*)[66])(frame + 22))
#define local_38 (*(uint * *)(frame + 88))
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
  uVar6 = _DAT_1000c7c0;
  dVar5 = DAT_1000c7b8;
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
      abStack_7a[uVar18 + 2] = str_1000c93d[uVar22 % 10];
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
    pcVar20 = str_1000c93d;
    if (*param_3 == 0x58) {
      pcVar20 = str_1000c92c;
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
        abStack_7a[uVar17 + 2] = str_1000c93d[uVar22 % 10];
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
      abStack_7a[uVar17 + 2] = str_1000c93d[(uint)uVar22 & 0xf];
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
      pbVar13 = &DAT_1000c925;
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
      abStack_7a[uVar18 + 2] = str_1000c93d[uVar12 % 10];
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

#undef DAT_1000c7b8
#undef DAT_1000c7c0
#undef DAT_1000c925
#undef _DAT_1000c7c0
#undef str_1000c92c
#undef str_1000c93d
#undef abStack_7a
#undef local_38

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
#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9c7U)))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x9cfU)))
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
        if (DAT_1000d0f8 == 0) {
          puVar4 = (ulong *)&DAT_1000d0f8;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000d100 == (long *)0x0) {
          DAT_1000d100 = plVar2;
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
      if (DAT_1000d0f8 == 0) {
        puVar1 = &DAT_1000d0f8;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_1000d100 == (long *)0x0) {
        DAT_1000d100 = (long *)&DAT_02000000;
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
      if (DAT_1000d0f8 == 0) {
        puVar4 = (ulong *)&DAT_1000d0f8;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000d100 == (long *)0x0) {
        DAT_1000d100 = plVar2;
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
#undef DAT_1000d0f8
#undef DAT_1000d100
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
#undef DAT_1000d110
#define DAT_1000d110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9dfU)))
#undef DAT_1000d120
#define DAT_1000d120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
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

void recovered_10005850(long param_1,long param_2)

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
        if (DAT_1000d110 != 0) {
          DAT_1000d110 = DAT_1000d110 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000d110 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10000f90(local_238,&DAT_1000d120,DAT_1000d110);
            uVar3 = DAT_1000d110;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_1000d110 = 0;
        }
        else {
          if (DAT_1000d110 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10000f90(local_238,&DAT_1000d120,DAT_1000d110);
            local_238[DAT_1000d110] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            DAT_1000d110 = 0;
          }
          pcVar1 = &DAT_1000d120 + DAT_1000d110;
          DAT_1000d110 = DAT_1000d110 + 1;
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
#undef DAT_1000d110
#undef DAT_1000d120
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
#undef DAT_1000d110
#define DAT_1000d110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9dfU)))
#undef DAT_1000d120
#define DAT_1000d120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
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

void recovered_10005a20(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000d110 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10000f90(local_208,&DAT_1000d120,DAT_1000d110);
    uVar1 = DAT_1000d110;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_1000d110 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000d110
#undef DAT_1000d120
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
#undef DAT_1000d110
#define DAT_1000d110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9dfU)))
#undef DAT_1000d120
#define DAT_1000d120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
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

void recovered_10005ac0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000d110 != 0) {
    recovered_10000f90(local_208,&DAT_1000d120,DAT_1000d110);
    local_208[DAT_1000d110] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1000d110 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000d110
#undef DAT_1000d120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1000c924
#define DAT_1000c924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef DAT_1000c94e
#define DAT_1000c94e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

void recovered_10005b60(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1000c94e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000c924;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10005610(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10005850((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000c924
#undef DAT_1000c94e
#undef local_148

#undef DAT_1000c96c
#define DAT_1000c96c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23bU)))
#undef str_1000c951
#define str_1000c951 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bc0
 */

void recovered_10005bc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002a00(str_1000c951);
  recovered_10005850(((uintptr_t)pf_module_state + 0x220U),uVar1);
  uVar1 = recovered_10002a00(&DAT_1000c96c);
  recovered_10005850(((uintptr_t)pf_module_state + 0x23bU),uVar1);
  return;
}

#undef DAT_1000c96c
#undef str_1000c951

#undef DAT_1000c96c
#define DAT_1000c96c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23bU)))
#undef str_1000c96f
#define str_1000c96f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c00
 */

void recovered_10005c00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002a00(str_1000c96f);
  recovered_10005850(((uintptr_t)pf_module_state + 0x23eU),uVar1);
  uVar1 = recovered_10002a00(&DAT_1000c96c);
  recovered_10005850(((uintptr_t)pf_module_state + 0x23bU),uVar1);
  return;
}

#undef DAT_1000c96c
#undef str_1000c96f

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
#undef DAT_1000d110
#define DAT_1000d110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9dfU)))
#undef DAT_1000d120
#define DAT_1000d120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
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
  if (DAT_1000d110 != 0) {
    recovered_10000f90(local_228,&DAT_1000d120,DAT_1000d110);
    local_228[DAT_1000d110] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_1000d110 = 0;
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
#undef DAT_1000d110
#undef DAT_1000d120
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
#undef DAT_1000c94e
#define DAT_1000c94e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_1000ca03
#define str_1000ca03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_1000ca10
#define str_1000ca10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_1000ca1e
#define str_1000ca1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2edU)))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d90
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005d90(char *param_1,long param_2)

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

  if (param_1 == (char *)0x0 || param_2 == 0) {
    DAT_1000d060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002a30(param_1,str_1000ca03);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_1000603e:
    puVar5 = recovered_10000ea0(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1000d060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001c90(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_10005610__8_((char *)(puVar5 + 1),0xf1,&DAT_1000c94e,(ulonglong)param_1);
    return puVar5;
  }
  iVar4 = recovered_10002a30(param_1,str_1000ca10);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_1000603e;
  }
  iVar4 = recovered_10002a30(param_1,str_1000ca1e);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_1000603e;
  }
  puVar5 = recovered_10000ea0(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1000d060 = 0xc;
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
  pf_varargs_10005610__8_((char *)(puVar5 + 1),0xf1,&DAT_1000c94e,(ulonglong)param_1);
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
            DAT_1000d060 = 0xc;
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
    DAT_1000d060 = 2;
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
#undef DAT_1000c94e
#undef DAT_1000d060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000ca03
#undef str_1000ca10
#undef str_1000ca1e
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
#undef DAT_1000c94e
#define DAT_1000c94e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
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
#undef str_1000ca03
#define str_1000ca03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_1000ca10
#define str_1000ca10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_1000ca1e
#define str_1000ca1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2edU)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006120
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006120(char *param_1,long param_2,int *param_3)

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
         ((code *)(ulong)_DAT_00006838 != (code *)0x0)) {
        uStack_30 = 0x100061aa;
        iVar4 = (*(code *)(ulong)_DAT_00006838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_100061d1;
        }
      }
      DAT_1000d060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_100061d1:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100061e8;
      recovered_10000ef0(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100061f0;
    recovered_10000ef0(param_3);
    puVar7 = recovered_10005d90(param_1,param_2);
    return puVar7;
  }
  if (param_1 == (char *)0x0 || param_2 == 0) {
    DAT_1000d060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002a30(param_1,str_1000ca03);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_1000603e:
    puVar7 = recovered_10000ea0(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_1000d060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001c90(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    pf_varargs_10005610__8_((char *)(puVar7 + 1),0xf1,&DAT_1000c94e,(ulonglong)param_1);
    return puVar7;
  }
  iVar3 = recovered_10002a30(param_1,str_1000ca10);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_1000603e;
  }
  iVar3 = recovered_10002a30(param_1,str_1000ca1e);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_1000603e;
  }
  puVar7 = recovered_10000ea0(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_1000d060 = 0xc;
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
  pf_varargs_10005610__8_((char *)(puVar7 + 1),0xf1,&DAT_1000c94e,(ulonglong)param_1);
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
            DAT_1000d060 = 0xc;
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
    DAT_1000d060 = 2;
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
#undef DAT_1000c94e
#undef DAT_1000d060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_1000ca03
#undef str_1000ca10
#undef str_1000ca1e
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
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
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
      DAT_1000d060 = 5;
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
#undef DAT_1000d060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e0
 */

ulong recovered_100062e0(void *param_1,ulong param_2,ulong param_3,int *param_4)

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
  if (param_1 == (void *)0x0) {
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
          uVar3 = recovered_10006420(param_4);
          if (uVar3 == 0xffffffff) {
            return uVar4;
          }
          *(char *)((long)param_1 + uVar6) = (char)uVar3;
          uVar6 = uVar6 + 1;
        } while (param_2 != uVar6);
        uVar4 = uVar4 + 1;
        param_1 = (void *)((long)param_1 + param_2);
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
      recovered_10000f90(param_1,(void *)(uVar4 + *(long *)(param_4 + 0x3e)),count);
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
#undef DAT_1000c924
#define DAT_1000c924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef DAT_1000d110
#define DAT_1000d110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9dfU)))
#undef DAT_1000d120
#define DAT_1000d120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
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

uint recovered_10006420(int *param_1)

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
    if (DAT_1000d110 != 0) {
      recovered_10000f90(local_218,&DAT_1000d120,DAT_1000d110);
      local_218[DAT_1000d110] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_1000d110 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000c924,0)
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
#undef DAT_1000c924
#undef DAT_1000d110
#undef DAT_1000d120
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006610
 */

long recovered_10006610(void *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((long)param_4 + 0x125) != '\x01')))) {
    return 0;
  }
  uVar5 = param_2 * param_3;
  if ((*param_4 & 0xfffffffe) == 2) {
    recovered_10005850((long)param_1,uVar5);
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
        DAT_1000d060 = 0xc;
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
    recovered_10000f90((void *)(uVar4 + *(long *)(param_4 + 0x40)),param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1000d060

#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a0
 */

undefined8 recovered_100067a0(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000d060 = 0x16;
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
  DAT_1000d060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000d060

#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006820
 */

undefined8 recovered_10006820(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000d060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000d060

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
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
  DAT_1000d060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1000d060
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
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
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
  DAT_1000d060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_1000d060
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
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92fU)))
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
    DAT_1000d060 = 0x16;
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
  DAT_1000d060 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef DAT_1000d060
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

ulong recovered_10006b80(long param_1,undefined8 *param_2,ulong *param_3)

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


#undef DAT_1000c992
#define DAT_1000c992 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef str_1000c995
#define str_1000c995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_1000c9a2
#define str_1000c9a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x271U)))
#undef str_1000c9ac
#define str_1000c9ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
#undef str_1000c9c0
#define str_1000c9c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_1000c9ce
#define str_1000c9ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#undef str_1000c9e0
#define str_1000c9e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_1000c9ec
#define str_1000c9ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bbU)))
#undef str_1000c9fd
#define str_1000c9fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d90
 */

char * recovered_10006d90(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000c992;
  default:
    return str_1000c9fd;
  case 2:
    return str_1000c995;
  case 5:
    return str_1000c9a2;
  case 9:
    return str_1000c9ac;
  case 0xc:
    return str_1000c9c0;
  case 0xd:
    return str_1000c9ce;
  case 0x11:
    return str_1000c9e0;
  case 0x16:
    return str_1000c9ec;
  }
}

#undef DAT_1000c992
#undef str_1000c995
#undef str_1000c9a2
#undef str_1000c9ac
#undef str_1000c9c0
#undef str_1000c9ce
#undef str_1000c9e0
#undef str_1000c9ec
#undef str_1000c9fd

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


#undef DAT_1000d320
#define DAT_1000d320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xbefU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

void recovered_10006e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000d320 = DAT_1000d320 + 1;
  return;
}

#undef DAT_1000d320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

void recovered_10006ea0(long param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10006eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb0
 */

undefined8 recovered_10006eb0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;

  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBP;
  param_1[2] = unaff_R12;
  param_1[3] = unaff_R13;
  param_1[4] = unaff_R14;
  param_1[5] = unaff_R15;
  param_1[6] = &uStack0000000000000008;
  param_1[7] = unaff_retaddr;
  return 0;
}

#undef uStack0000000000000008
#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ee0
 */

void recovered_10006ee0(long param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10006f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(code **)(param_1 + 0x38));
  return;
}


#undef DAT_10006f61
#define DAT_10006f61 (*(uint8_t *)(0x10006f61U))
#undef DAT_1000ca2c
#define DAT_1000ca2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fbU)))
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
  local_60 = &DAT_1000ca2c;
  local_50 = &DAT_10006f61;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000e70();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10006f61
#undef DAT_1000ca2c
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


#undef DAT_1000d328
#define DAT_1000d328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xbf7U)))
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
  *(long *)(param_1 + 0x10) = DAT_1000d328;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000d328 = param_1;
  lVar1 = recovered_100073d0(param_1);
  return lVar1;
}

#undef DAT_1000d328

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


#undef DAT_1000ca3c
#define DAT_1000ca3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30bU)))
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
  local_60 = &DAT_1000ca3c;
  local_50 = &LAB_100070ad;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000ca3c
#undef LAB_100070ad
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000ca4c
#define DAT_1000ca4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31bU)))
#undef LAB_1000714d
#define LAB_1000714d (*(uint8_t *)(0x1000714dU))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e0
 */

void recovered_100070e0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000ca4c;
  local_50 = &LAB_1000714d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000ca4c
#undef LAB_1000714d
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88
#undef local_80

#undef DAT_1000ca5c
#define DAT_1000ca5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32bU)))
#undef LAB_100071ed
#define LAB_100071ed (*(uint8_t *)(0x100071edU))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007180
 */

void recovered_10007180(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000ca5c;
  local_50 = &LAB_100071ed;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000ca5c
#undef LAB_100071ed
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef auStack_40
#undef local_60
#undef local_58

#undef DAT_1000ca6c
#define DAT_1000ca6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bU)))
#undef LAB_1000728d
#define LAB_1000728d (*(uint8_t *)(0x1000728dU))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

void recovered_10007220(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1000ca6c;
  local_50 = &LAB_1000728d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1000ca6c
#undef LAB_1000728d
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef auStack_40
#undef local_60
#undef local_58

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


#undef DAT_1000d328
#define DAT_1000d328 (*(void * *)(((uintptr_t)pf_module_state + 0xbf7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073e0
 */

void recovered_100073e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_1000d328;
  if (DAT_1000d328 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000d328 + 0x10);
    DAT_1000d328 = *(void **)((long)DAT_1000d328 + 0x10);
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

#undef DAT_1000d328

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


#undef DAT_1000d328
#define DAT_1000d328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xbf7U)))
#undef DAT_1000d330
#define DAT_1000d330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xbffU)))
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

  if (DAT_1000d330 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1000d330;
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
        puVar2 = DAT_1000d328;
        if (DAT_1000d328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006f10();
        }
        *(undefined1 *)(DAT_1000d328 + 5) = 1;
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

#undef DAT_1000d328
#undef DAT_1000d330
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1000d328
#define DAT_1000d328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xbf7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e0
 */

void recovered_100074e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000d328;
  if (DAT_1000d328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f10();
  }
  *(undefined1 *)(DAT_1000d328 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007460(puVar1);
}

#undef DAT_1000d328

#undef DAT_1000d330
#define DAT_1000d330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xbffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007510
 */

void recovered_10007510(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000d330;
  DAT_1000d330 = param_1;
  return;
}

#undef DAT_1000d330

#undef DAT_1000d330
#define DAT_1000d330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xbffU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007530
 */

void recovered_10007530(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000d330;
  if (DAT_1000d330 == param_1) {
    puVar2 = &DAT_1000d330;
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

#undef DAT_1000d330

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


#undef DAT_1000d330
#define DAT_1000d330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xbffU)))
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

  if (DAT_1000d330 != (undefined8 *)0x0) {
    DAT_1000d330 = (undefined8 *)*DAT_1000d330;
  }
  recovered_100075b0(param_1,in_RSI);
  if (DAT_1000d330 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1000d330;
      if (DAT_1000d330 == puVar1) {
        DAT_1000d330[2] = param_1;
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
      recovered_10007f00((long)DAT_1000d330,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_1000763c;
      }
      DAT_1000d330 = (undefined8 *)*puVar3;
    } while (DAT_1000d330 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1000d330
#undef uStack_40
#undef uStack_38

#undef DAT_1000d330
#define DAT_1000d330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xbffU)))
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

  if (DAT_1000d330 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_1000d330;
      if (DAT_1000d330 == plVar1) {
        DAT_1000d330[2] = (long)param_1;
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
      recovered_10007f00((long)DAT_1000d330,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_1000763c;
      }
      DAT_1000d330 = (long *)*plVar3;
    } while (DAT_1000d330 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1000d330
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


#undef DAT_1000d0c0
#define DAT_1000d0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98fU)))
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
      if ((undefined *)*puVar5 != &DAT_1000d0c0) goto LAB_1000774c;
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

#undef DAT_1000d0c0

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


#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7a8
#define DAT_1000c7a8 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000c860
#define DAT_1000c860 (*(double *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_1000c868
#define DAT_1000c868 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef DAT_1000c870
#define DAT_1000c870 (*(double *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef DAT_1000c878
#define DAT_1000c878 (*(double *)(((uintptr_t)pf_module_state + 0x147U)))
#undef _DAT_1000c868
#define _DAT_1000c868 (*(double *)(((uintptr_t)pf_module_state + 0x137U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100078b0(double value)

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

  if (NAN(value)) {
    return value;
  }
  if (_DAT_1000c868 < value) {
    return DAT_1000c860;
  }
  dVar4 = 0.0;
  if (DAT_1000c870 <= value) {
    uVar1 = 0;
    if (DAT_1000c740 < value) {
      uVar1 = 0;
      do {
        value = value * DAT_1000c740;
        uVar1 = uVar1 + 1;
      } while (DAT_1000c740 < value);
    }
    for (; value < DAT_1000c7a8; value = value * DAT_1000c740) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000c748;
    dVar5 = DAT_1000c748;
    dVar6 = DAT_1000c748;
    do {
      dVar7 = (value / dVar5) * dVar6;
      dVar9 = (value / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (value / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (value / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000c878;
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

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c7a8
#undef DAT_1000c860
#undef DAT_1000c868
#undef DAT_1000c870
#undef DAT_1000c878
#undef _DAT_1000c868

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7a8
#define DAT_1000c7a8 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000c860
#define DAT_1000c860 (*(double *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_1000c868
#define DAT_1000c868 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef DAT_1000c870
#define DAT_1000c870 (*(double *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef DAT_1000c878
#define DAT_1000c878 (*(double *)(((uintptr_t)pf_module_state + 0x147U)))
#undef DAT_1000c880
#define DAT_1000c880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef _DAT_1000c868
#define _DAT_1000c868 (*(double *)(((uintptr_t)pf_module_state + 0x137U)))
#undef _DAT_1000c880
#define _DAT_1000c880 (*(float *)(((uintptr_t)pf_module_state + 0x14fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10007a20(float value)

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

  dVar6 = (double)value;
  if (NAN(value)) {
    return value;
  }
  if (_DAT_1000c868 < dVar6) {
    return (float)DAT_1000c860;
  }
  dVar5 = 0.0;
  if (DAT_1000c870 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000c880 < value) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1000c740;
        uVar1 = uVar1 + 1;
      } while (DAT_1000c740 < dVar6);
    }
    for (; dVar6 < DAT_1000c7a8; dVar6 = dVar6 * DAT_1000c740) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000c748;
    dVar5 = DAT_1000c748;
    dVar7 = DAT_1000c748;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000c878;
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

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c7a8
#undef DAT_1000c860
#undef DAT_1000c868
#undef DAT_1000c870
#undef DAT_1000c878
#undef DAT_1000c880
#undef _DAT_1000c868
#undef _DAT_1000c880

#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c7a8
#define DAT_1000c7a8 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000c860
#define DAT_1000c860 (*(double *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_1000c868
#define DAT_1000c868 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
#undef DAT_1000c870
#define DAT_1000c870 (*(double *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef DAT_1000c878
#define DAT_1000c878 (*(double *)(((uintptr_t)pf_module_state + 0x147U)))
#undef _DAT_1000c868
#define _DAT_1000c868 (*(double *)(((uintptr_t)pf_module_state + 0x137U)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10007bb0(double value)

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

  dVar5 = (double)in_stack_00000008;
  if (NAN(dVar5)) {
    dVar4 = dVar5;
  }
  else if (dVar5 <= _DAT_1000c868) {
    dVar4 = 0.0;
    if (DAT_1000c870 <= dVar5) {
      uVar1 = 0;
      if (DAT_1000c740 < dVar5) {
        uVar1 = 0;
        do {
          dVar5 = dVar5 * DAT_1000c740;
          uVar1 = uVar1 + 1;
        } while (DAT_1000c740 < dVar5);
      }
      for (; dVar5 < DAT_1000c7a8; dVar5 = dVar5 * DAT_1000c740) {
        uVar1 = uVar1 + 1;
      }
      iVar2 = 4;
      dVar4 = DAT_1000c748;
      dVar6 = DAT_1000c748;
      dVar7 = DAT_1000c748;
      do {
        dVar8 = (dVar5 / dVar6) * dVar7;
        dVar10 = (dVar5 / (double)(iVar2 + -2)) * dVar8;
        dVar9 = (dVar5 / (double)(iVar2 + -1)) * dVar10;
        dVar7 = (dVar5 / (double)iVar2) * dVar9;
        dVar4 = dVar4 + dVar8 + dVar10 + dVar9 + dVar7;
        dVar6 = dVar6 + DAT_1000c878;
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
  }
  else {
    dVar4 = DAT_1000c860;
  }
  return dVar4;
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c7a8
#undef DAT_1000c860
#undef DAT_1000c868
#undef DAT_1000c870
#undef DAT_1000c878
#undef _DAT_1000c868
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

double recovered_10007d40(long end,long start)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


#undef DAT_1000c740
#define DAT_1000c740 (*(double *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000c748
#define DAT_1000c748 (*(double *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000c768
#define DAT_1000c768 (*(double *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000c7a8
#define DAT_1000c7a8 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d60
 */

double recovered_10007d60(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10003420(param_1);
  if (DAT_1000c740 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000c748;
  }
  else if (param_1 - dVar1 <= DAT_1000c7a8) {
    dVar1 = dVar1 + DAT_1000c768;
  }
  return dVar1;
}

#undef DAT_1000c740
#undef DAT_1000c748
#undef DAT_1000c768
#undef DAT_1000c7a8

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


#undef DAT_1000c890
#define DAT_1000c890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef DAT_1000d0c0
#define DAT_1000d0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98fU)))
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
                        *(long *)(&DAT_1000c890 + (ulong)(uVar10 & 0xf) * 8);
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
        if (*(undefined **)pbVar13 != &DAT_1000d0c0) goto LAB_10008258;
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

#undef DAT_1000c890
#undef DAT_1000d0c0
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


#undef DAT_1000c900
#define DAT_1000c900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef UNK_1000c908
#define UNK_1000c908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef _DAT_1000c900
#define _DAT_1000c900 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfU)))
#undef uRam000000001000c908
#define uRam000000001000c908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
recovered_10008430(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x48);
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  *(int *)(param_1 + 2) = param_3 << 2;
  uVar1 = uRam000000001000c908;
  *(undefined8 *)((long)param_1 + 0x14) = _DAT_1000c900;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return param_1;
}

#undef DAT_1000c900
#undef UNK_1000c908
#undef _DAT_1000c900
#undef uRam000000001000c908

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008490
 */

undefined8 *
recovered_10008490(undefined8 *param_1,uint param_2,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined4 in_stack_00000024,undefined8 in_stack_00000028,
                  undefined8 in_stack_00000030,undefined8 in_stack_00000038,
                  undefined8 in_stack_00000040,undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[8] = in_stack_00000048;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[2] = in_stack_00000018;
  *(uint *)(param_1 + 3) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = in_stack_00000024;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084e0
 */

undefined8 *
recovered_100084e0(undefined8 *param_1,uint param_2,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined4 in_stack_00000020,undefined8 in_stack_00000028,
                  undefined8 in_stack_00000030,undefined8 in_stack_00000038,
                  undefined8 in_stack_00000040,undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[8] = in_stack_00000048;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[2] = in_stack_00000018;
  *(undefined4 *)(param_1 + 3) = in_stack_00000020;
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008530
 */

undefined8 *
recovered_10008530(undefined8 *param_1,int param_2,uint param_3,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined8 in_stack_00000020,undefined8 in_stack_00000030,
                  undefined8 in_stack_00000038,undefined8 in_stack_00000040,
                  undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = -1;
  if (param_2 + 1U < 5) {
    iVar1 = param_2;
  }
  uVar2 = 100;
  if (param_3 < 100) {
    uVar2 = param_3;
  }
  param_1[8] = in_stack_00000048;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  *(int *)(param_1 + 4) = iVar1;
  *(uint *)((long)param_1 + 0x24) = uVar2;
  param_1[5] = in_stack_00000030;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008590
 */

undefined8 *
recovered_10008590(undefined8 *param_1,undefined8 in_stack_00000008,undefined8 in_stack_00000010,
                  undefined8 in_stack_00000018,undefined8 in_stack_00000020,
                  undefined8 in_stack_00000030,undefined8 in_stack_00000038,
                  undefined8 in_stack_00000040,undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  param_1[4] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085c0
 */

undefined8 *
recovered_100085c0(undefined8 *param_1,undefined8 in_stack_00000008,undefined8 in_stack_00000010,
                  undefined8 in_stack_00000018,undefined8 in_stack_00000020,
                  undefined8 in_stack_00000030,undefined8 in_stack_00000038,
                  undefined8 in_stack_00000040,undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  param_1[4] = 1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085f0
 */

undefined8 *
recovered_100085f0(undefined8 *param_1,uint param_2,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined8 in_stack_00000020,undefined8 in_stack_00000030,
                  undefined8 in_stack_00000038,undefined8 in_stack_00000040,
                  undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  *(undefined4 *)(param_1 + 4) = 2;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

undefined8 *
recovered_10008630(undefined8 *param_1,uint param_2,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined8 in_stack_00000020,undefined8 in_stack_00000030,
                  undefined8 in_stack_00000038,undefined8 in_stack_00000040,
                  undefined8 in_stack_00000048)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[5] = in_stack_00000030;
  param_1[6] = in_stack_00000038;
  uVar1 = 100;
  if (param_2 < 100) {
    uVar1 = param_2;
  }
  param_1[7] = in_stack_00000040;
  param_1[8] = in_stack_00000048;
  *(undefined4 *)(param_1 + 4) = 3;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_000068a0
#define DAT_000068a0 (*(uint8_t *)(0x68a0U))
#undef DAT_000068ec
#define DAT_000068ec (*(uint8_t *)(0x68ecU))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef DAT_1000c924
#define DAT_1000c924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
#undef _DAT_000068a0
#define _DAT_000068a0 (*(uint *)(0x68a0U))
#undef _DAT_000068ec
#define _DAT_000068ec (*(uint *)(0x68ecU))
#undef _DAT_00006960
#define _DAT_00006960 (*(uint *)(0x6960U))
#undef _DAT_00006964
#define _DAT_00006964 (*(uint *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10008670(int *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  uint uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;

  if (param_2 == (undefined8 *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  iVar8 = *(int *)(param_2 + 1);
  if (iVar8 == 0) {
    return 0;
  }
  uVar11 = *(uint *)((long)param_2 + 0xc);
  if (uVar11 == 0) {
    return 0;
  }
  uVar16 = iVar8 * 4;
  uVar15 = *(uint *)(param_2 + 2);
  if (*(uint *)(param_2 + 2) == 0) {
    uVar15 = uVar16;
  }
  uVar6 = uVar15;
  if (uVar15 == 0) {
    uVar6 = uVar16;
  }
  if (uVar6 < uVar16) {
    return 0;
  }
  uVar13 = (ulong)uVar6 * (ulong)uVar11;
  if ((int)(uVar13 >> 0x20) != 0) {
    return 0;
  }
  uVar5 = *param_2;
  iVar1 = *(int *)((long)param_2 + 0x14);
  uVar16 = *(uint *)(param_2 + 3);
  uVar6 = *(uint *)((long)param_2 + 0x1c);
  iVar2 = *(int *)(param_2 + 4);
  uVar3 = *(uint *)((long)param_2 + 0x24);
  puVar14 = (undefined *)param_2[5];
  puVar12 = (undefined *)param_2[6];
  puVar10 = (undefined *)param_2[7];
  uVar4 = *(uint *)(param_2 + 8);
  recovered_10001c90(param_1,0,0x350);
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0xa4) {
    return 0;
  }
  if ((code *)(ulong)_DAT_000068a0 == (code *)0x0) {
    return 0;
  }
  iVar7 = (*(code *)(ulong)_DAT_000068a0)(uVar5,iVar8,uVar11);
  if (iVar7 == 0) {
    return 0;
  }
  *param_1 = iVar7;
  param_1[1] = iVar8;
  param_1[2] = uVar11;
  param_1[3] = uVar15;
  param_1[4] = iVar1;
  uVar11 = 100;
  if (uVar16 < 100) {
    uVar11 = uVar16;
  }
  uVar15 = 0xf;
  if (uVar16 != 0xffffffff) {
    uVar15 = uVar11;
  }
  param_1[5] = uVar15;
  uVar11 = 100;
  if (uVar6 < 100) {
    uVar11 = uVar6;
  }
  uVar15 = 0;
  if (uVar6 != 0xffffffff) {
    uVar15 = uVar11;
  }
  iVar8 = -1;
  if (iVar2 + 1U < 5) {
    iVar8 = iVar2;
  }
  param_1[6] = uVar15;
  uVar11 = 100;
  if (uVar3 < 100) {
    uVar11 = uVar3;
  }
  param_1[7] = iVar8;
  param_1[8] = uVar11;
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  if ((uVar4 & 1) == 0) {
LAB_1000882c:
    if (((puVar14 != (undefined *)0x0 || puVar12 != (undefined *)0x0) || puVar10 != (undefined *)0x0
        ) && (*param_1 != 0)) {
      if (puVar14 == (undefined *)0x0) {
        puVar14 = &DAT_1000c924;
      }
      if (puVar12 == (undefined *)0x0) {
        puVar12 = &DAT_1000c924;
      }
      if (puVar10 == (undefined *)0x0) {
        puVar10 = &DAT_1000c924;
      }
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0xef < _DAT_00006808 && ((code *)(ulong)_DAT_000068ec != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_000068ec)(*param_1,puVar14,puVar12,puVar10);
      }
    }
    if (((uVar16 & uVar6) != 0xffffffff) && (*param_1 != 0)) {
      uVar11 = param_1[5];
      if (99 < uVar11) {
        uVar11 = 100;
      }
      uVar16 = 100;
      if ((uint)param_1[6] < 100) {
        uVar16 = param_1[6];
      }
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         (((0x163 < _DAT_00006808 && ((code *)(ulong)_DAT_00006960 != (code *)0x0)) &&
          (iVar8 = (*(code *)(ulong)_DAT_00006960)
                             (*param_1,(uVar11 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                              (uVar16 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13), iVar8 != 0)))) {
        param_1[5] = uVar11;
        param_1[6] = uVar16;
      }
    }
    uVar11 = param_1[7];
    if ((uVar11 != 0xffffffff) && (*param_1 != 0)) {
      uVar16 = 0xffffffff;
      if (uVar11 < 4) {
        uVar16 = uVar11;
      }
      uVar15 = 100;
      if ((uint)param_1[8] < 100) {
        uVar15 = param_1[8];
      }
      uVar13 = 0;
      if (uVar11 < 4) {
        uVar11 = param_1[2];
        if ((uint)param_1[1] < (uint)param_1[2]) {
          uVar11 = param_1[1];
        }
        uVar13 = (ulong)(uVar11 * uVar15 + 0x32) / 100;
      }
      if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) {
        if (((0x167 < _DAT_00006808) && ((code *)(ulong)_DAT_00006964 != (code *)0x0)) &&
           (iVar8 = (*(code *)(ulong)_DAT_00006964)(*param_1,uVar16,uVar13), iVar8 != 0)) {
          param_1[7] = uVar16;
          param_1[8] = uVar15;
        }
        return iVar7;
      }
    }
  }
  else {
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x4f < _DAT_00006808 && ((code *)(ulong)_DAT_0000684c != (code *)0x0)))) {
      lVar9 = (*(code *)(ulong)_DAT_0000684c)(uVar13 & 0xffffffff);
      *(long *)(param_1 + 0xc) = lVar9;
      if (lVar9 != 0) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
        param_1[10] = (int)uVar13;
        goto LAB_1000882c;
      }
    }
    else {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    recovered_10008ae0();
    iVar7 = 0;
    recovered_10001c90(param_1,0,0x350);
  }
  return iVar7;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_000068a0
#undef DAT_000068ec
#undef DAT_00006960
#undef DAT_00006964
#undef DAT_1000c924
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_000068a0
#undef _DAT_000068ec
#undef _DAT_00006960
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(uint *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008ae0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xab < _DAT_00006808 && ((code *)(ulong)_DAT_000068a8 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10008b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_000068a8)();
    return;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068ec
#define DAT_000068ec (*(uint8_t *)(0x68ecU))
#undef DAT_1000c924
#define DAT_1000c924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068ec
#define _DAT_000068ec (*(uint *)(0x68ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10008b30(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_1000c924;
    }
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_1000c924;
    }
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_1000c924;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0xef < _DAT_00006808 && ((code *)(ulong)_DAT_000068ec != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10008b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)_DAT_000068ec)(*param_1,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068ec
#undef DAT_1000c924
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068ec

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006960
#define _DAT_00006960 (*(uint *)(0x6960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ba0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10008ba0(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar3 = 100;
    if (param_3 < 100) {
      uVar3 = param_3;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x163 < _DAT_00006808 && ((code *)(ulong)_DAT_00006960 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00006960)
                        (*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                         (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006960
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006960

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(uint *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10008c70(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar4 = -1;
    if (param_2 + 1U < 5) {
      iVar4 = param_2;
    }
    uVar6 = 100;
    if (param_3 < 100) {
      uVar6 = param_3;
    }
    uVar2 = 0;
    uVar3 = 0;
    if (iVar4 != -1) {
      uVar5 = param_1[2];
      if ((uint)param_1[1] < (uint)param_1[2]) {
        uVar5 = param_1[1];
      }
      uVar3 = (ulong)(uVar5 * uVar6 + 0x32) / 100;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x167 < _DAT_00006808 && ((code *)(ulong)_DAT_00006964 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00006964)(*param_1,iVar4,uVar3);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[7] = iVar4;
        param_1[8] = uVar6;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a4
#define DAT_000068a4 (*(uint8_t *)(0x68a4U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a4
#define _DAT_000068a4 (*(uint *)(0x68a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10008d40(int *param_1,byte *param_2,long param_3,ulong param_4,uint param_5,uint param_6,
                  uint param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  param_1[0x12] = 0;
  if ((int)param_4 == 0) {
    param_4 = (ulong)(uint)param_1[1];
  }
  if (param_5 == 0) {
    param_5 = param_1[2];
  }
  uVar2 = (uint)param_4;
  uVar8 = uVar2 * 4;
  if (param_6 != 0) {
    uVar8 = param_6;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = *(byte **)(param_1 + 0xe);
  }
  uVar9 = ((param_7 >> 0x10 & 0xff ^
           (param_7 >> 8 & 0xff ^
           (param_7 & 0xff ^
           ((uVar8 >> 0x10 & 0xff ^
            (uVar8 >> 8 & 0xff ^
            (uVar8 & 0xff ^
            ((param_5 >> 0x10 & 0xff ^
             (param_5 >> 8 & 0xff ^
             (param_5 & 0xff ^
             (((uint)(param_4 >> 0x10) & 0xff ^
              ((uint)(byte)(param_4 >> 8) ^ (uVar2 & 0xff ^ 0x811c9dc5) * 0x1000193) * 0x1000193) *
              0x1000193 ^ (uint)(param_4 >> 0x18) & 0xff) * 0x1000193) * 0x1000193) * 0x1000193) *
             0x1000193 ^ param_5 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^
           uVar8 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ param_7 >> 0x18) *
          0x1000193;
  if ((param_2 != (byte *)0x0) && (bVar1 = *param_2, bVar1 != 0)) {
    pbVar4 = param_2;
    do {
      pbVar4 = pbVar4 + 1;
      uVar9 = (bVar1 ^ uVar9) * 0x1000193;
      bVar1 = *pbVar4;
    } while (bVar1 != 0);
  }
  if ((param_3 != 0) && (uVar7 = (ulong)uVar8 * (ulong)param_5, uVar7 != 0)) {
    uVar5 = (ulong)((uint)uVar7 & 3);
    if (uVar7 < 4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar9 = ((uint)*(byte *)(param_3 + 3 + uVar6) ^
                ((uint)*(byte *)(param_3 + 2 + uVar6) ^
                ((uint)*(byte *)(param_3 + 1 + uVar6) ^
                (*(byte *)(param_3 + uVar6) ^ uVar9) * 0x1000193) * 0x1000193) * 0x1000193) *
                0x1000193;
        uVar6 = uVar6 + 4;
      } while ((uVar7 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        uVar9 = (*(byte *)(uVar6 + param_3 + uVar7) ^ uVar9) * 0x1000193;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
  }
  if ((param_1[0x11] == 0) || (uVar9 != param_1[0x10])) {
    if (_DAT_00006800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00006804 == 0) {
      return 0;
    }
    if (_DAT_00006808 < 0xc) {
      return 0;
    }
    if (_DAT_00006808 < 0xa8) {
      return 0;
    }
    if ((code *)(ulong)_DAT_000068a4 == (code *)0x0) {
      return 0;
    }
    iVar3 = (*(code *)(ulong)_DAT_000068a4)(*param_1,param_2,param_3,param_4,param_5,uVar8,param_7);
    if (iVar3 == 0) {
      return 0;
    }
    param_1[0x10] = uVar9;
    param_1[0x11] = 1;
  }
  *(byte **)(param_1 + 0xe) = param_2;
  param_1[1] = uVar2;
  param_1[2] = param_5;
  param_1[3] = uVar8;
  param_1[4] = param_7;
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009080
 */

undefined8 recovered_10009080(long param_1,byte *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = 0xf6f6f6;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  uVar2 = recovered_10008d40((int *)param_1,param_2,*(long *)(param_3 + 4),(ulong)(uint)*param_3,
                             param_3[1],param_3[2],uVar1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090c0
 */

undefined8 recovered_100090c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    return 0;
  }
  uVar1 = recovered_10008d40((int *)param_1,*(byte **)(param_1 + 0x38),*(long *)(param_1 + 0x30),
                             (ulong)*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                             *(uint *)(param_1 + 0xc),*(uint *)(param_1 + 0x10));
  return uVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006854
#define DAT_00006854 (*(uint8_t *)(0x6854U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006854
#define _DAT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009100(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = (ulong)(uint)(param_2 * 4) * (ulong)param_3;
  if ((int)(uVar1 >> 0x20) != 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xc);
  if (param_1[10] == (int)uVar1) {
    if (lVar2 != 0) goto LAB_10009166;
    lVar2 = 0;
  }
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0x58) {
    return 0;
  }
  if ((code *)(ulong)_DAT_00006854 == (code *)0x0) {
    return 0;
  }
  lVar2 = (*(code *)(ulong)_DAT_00006854)(lVar2,uVar1 & 0xffffffff);
  if (lVar2 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0xc) = lVar2;
  param_1[10] = (int)uVar1;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
LAB_10009166:
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_2 * 4;
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006854
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006854

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006854
#define DAT_00006854 (*(uint8_t *)(0x6854U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006854
#define _DAT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100091f0(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar4 = 0;
LAB_10009261:
    iVar3 = param_1[1];
  }
  else {
    iVar3 = *(int *)(param_2 + 0x50);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + 0x18);
    }
    uVar4 = *(uint *)(param_2 + 0x54);
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_2 + 0x1c);
    }
    if (iVar3 == 0) goto LAB_10009261;
  }
  if (uVar4 == 0) {
    uVar4 = param_1[2];
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = (ulong)(uint)(iVar3 * 4) * (ulong)uVar4;
  if ((int)(uVar1 >> 0x20) != 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xc);
  if (param_1[10] == (int)uVar1) {
    if (lVar2 != 0) goto LAB_10009286;
    lVar2 = 0;
  }
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0x58) {
    return 0;
  }
  if ((code *)(ulong)_DAT_00006854 == (code *)0x0) {
    return 0;
  }
  lVar2 = (*(code *)(ulong)_DAT_00006854)(lVar2,uVar1 & 0xffffffff);
  if (lVar2 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0xc) = lVar2;
  param_1[10] = (int)uVar1;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
LAB_10009286:
  param_1[1] = iVar3;
  param_1[2] = uVar4;
  param_1[3] = iVar3 * 4;
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006854
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006854

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(uint *)(0x68b4U))
#define local_290 (*(undefined1 (*)[24])(frame + 16))
#define local_278 (*(uint *)(frame + 40))
#define local_250 (*(uint *)(frame + 80))
#define local_24c (*(uint *)(frame + 84))
#define local_248 (*(int *)(frame + 88))
#define local_244 (*(uint *)(frame + 92))
#define uStack_274 (*(uint *)(frame + 44))
#define iStack_270 (*(int *)(frame + 48))
#define iStack_26c (*(int *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009320(int *param_1,void *param_2)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[0x12] == 0) {
    recovered_10001c90(local_290,0,0x278);
    if (_DAT_00006800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00006804 == 0) {
      return 0;
    }
    if (_DAT_00006808 < 0xc) {
      return 0;
    }
    if (_DAT_00006808 < 0xb8) {
      return 0;
    }
    if ((code *)(ulong)_DAT_000068b4 == (code *)0x0) {
      return 0;
    }
    iVar1 = (*(code *)(ulong)_DAT_000068b4)(*param_1,local_290);
    if (iVar1 == 0) {
      return 0;
    }
    recovered_10000f90(param_1 + 0x13,local_290,0x278);
    param_1[0x12] = 1;
    param_1[1] = local_278;
    param_1[2] = uStack_274;
    param_1[3] = iStack_270;
    param_1[4] = iStack_26c;
    if (local_250 == 0xffffffff) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0xff;
      if (local_250 < 0xff) {
        uVar2 = local_250;
      }
      uVar2 = (uVar2 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[5] = uVar2;
    uVar2 = 0;
    if (local_24c != 0xffffffff) {
      uVar2 = 0xff;
      if (local_24c < 0xff) {
        uVar2 = local_24c;
      }
      uVar2 = (uVar2 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[6] = uVar2;
    iVar1 = -1;
    if (local_248 + 1U < 5) {
      iVar1 = local_248;
    }
    if (local_278 < uStack_274) {
      uStack_274 = local_278;
    }
    param_1[7] = iVar1;
    uVar3 = uStack_274 * 100 + 0x32;
    uVar2 = 0;
    if (99 < uVar3) {
      uVar5 = (ulong)uVar3 / 100;
      uVar4 = (ulong)uVar3 / 200 + (ulong)local_244 * 100;
      if ((char)(uVar4 >> 0x20) == '\0') {
        uVar3 = (uint)((uVar4 & 0xffffffff) / uVar5);
      }
      else {
        uVar3 = (uint)(uVar4 / uVar5);
      }
      uVar2 = 100;
      if (uVar3 < 100) {
        uVar2 = uVar3;
      }
    }
    param_1[8] = uVar2;
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10000f90(param_2,local_290,0x278);
  }
  else {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10000f90(param_2,param_1 + 0x13,0x278);
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b4
#undef local_290
#undef local_278
#undef local_250
#undef local_24c
#undef local_248
#undef local_244
#undef uStack_274
#undef iStack_270
#undef iStack_26c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009540
 */

bool recovered_10009540(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return true;
  }
  return (*(byte *)(param_1 + 0x28) & 0x11) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009560
 */

void recovered_10009560(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  recovered_10001c90(param_1,0,0x18);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(uint *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009580(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  recovered_10001c90(param_1,0,0x18);
  while ((((_DAT_00006800 == 0x50414d57 && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         (((0x2f < _DAT_00006808 && ((code *)(ulong)_DAT_0000682c != (code *)0x0)) &&
          (uVar1 = (*(code *)(ulong)_DAT_0000682c)(), uVar1 != 0))))) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((byte)((char)uVar1 - 0x20U) < 0x5f) {
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c

#define local_280 (*(undefined1 (*)[40])(frame + 16))
#define local_258 (*(uint *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009920
 */

bool recovered_10009920(int *param_1)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10009320(param_1,local_280);
  return (local_258 & 0x11) != 0 || (int)uVar1 == 0;
}

#undef local_280
#undef local_258

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(uint *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009960(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0xab < _DAT_00006808 && ((code *)(ulong)_DAT_000068a8 != (code *)0x0)))) {
        uVar1 = (*(code *)(ulong)_DAT_000068a8)(*param_1);
      }
    }
    if (((((*(byte *)(param_1 + 9) & 1) != 0) && (*(long *)(param_1 + 0xc) != 0)) &&
        ((_DAT_00006800 == 0x50414d57 &&
         (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x53 < _DAT_00006808)))))) &&
       ((code *)(ulong)_DAT_00006850 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00006850)(*(long *)(param_1 + 0xc));
    }
    recovered_10001c90(param_1,0,0x350);
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_000068a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850
#undef _DAT_000068a8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006960
#define _DAT_00006960 (*(uint *)(0x6960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009a40(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar3 = 100;
    if ((uint)param_1[6] < 100) {
      uVar3 = param_1[6];
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x163 < _DAT_00006808 && ((code *)(ulong)_DAT_00006960 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00006960)
                        (*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                         (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006960
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006960

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006960
#define _DAT_00006960 (*(uint *)(0x6960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009b10(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar3 = param_1[5];
    if (99 < uVar3) {
      uVar3 = 100;
    }
    uVar4 = 100;
    if (param_2 < 100) {
      uVar4 = param_2;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x163 < _DAT_00006808 && ((code *)(ulong)_DAT_00006960 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00006960)
                        (*param_1,(uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                         (uVar4 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[5] = uVar3;
        param_1[6] = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006960
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006960

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(uint *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009be0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00006800 == 0x50414d57)) &&
     (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) &&
      ((0x167 < _DAT_00006808 && ((code *)(ulong)_DAT_00006964 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00006964)(*param_1,0,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      param_1[7] = 0;
      param_1[8] = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(uint *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009c60(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00006800 == 0x50414d57)) &&
     (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) &&
      ((0x167 < _DAT_00006808 && ((code *)(ulong)_DAT_00006964 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00006964)(*param_1,1,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      param_1[7] = 1;
      param_1[8] = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(uint *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009ce0(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar4 = 100;
    if (param_2 < 100) {
      uVar4 = param_2;
    }
    uVar3 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar3 = param_1[1];
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x167 < _DAT_00006808 && ((code *)(ulong)_DAT_00006964 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00006964)(*param_1,2,(ulong)(uVar3 * uVar4 + 0x32) / 100);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[7] = 2;
        param_1[8] = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(uint *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009d90(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar4 = 100;
    if (param_2 < 100) {
      uVar4 = param_2;
    }
    uVar3 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar3 = param_1[1];
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x167 < _DAT_00006808 && ((code *)(ulong)_DAT_00006964 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_00006964)(*param_1,3,(ulong)(uVar3 * uVar4 + 0x32) / 100);
      uVar2 = 0;
      if (iVar1 != 0) {
        param_1[7] = 3;
        param_1[8] = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006900
#define DAT_00006900 (*(uint8_t *)(0x6900U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006900
#define _DAT_00006900 (*(uint *)(0x6900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009e40(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != (int *)0x0) {
    if ((((param_2 != 0 && *param_1 != 0) && (_DAT_00006800 == 0x50414d57)) && (_DAT_00006804 != 0))
       && (((0xb < _DAT_00006808 && (0x103 < _DAT_00006808)) &&
           ((code *)(ulong)_DAT_00006900 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)_DAT_00006900)();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006900
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006900

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(uint *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009ea0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xb3 < _DAT_00006808 && ((code *)(ulong)_DAT_000068b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_000068b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000697c
#define DAT_0000697c (*(uint8_t *)(0x697cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000697c
#define _DAT_0000697c (*(uint *)(0x697cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009ef0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x17f < _DAT_00006808 && ((code *)(ulong)_DAT_0000697c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009f33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_0000697c)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000697c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000697c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068ac
#define DAT_000068ac (*(uint8_t *)(0x68acU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068ac
#define _DAT_000068ac (*(uint *)(0x68acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009f40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xaf < _DAT_00006808 && ((code *)(ulong)_DAT_000068ac != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_000068ac)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068ac
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068ac

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068f0
#define DAT_000068f0 (*(uint8_t *)(0x68f0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068f0
#define _DAT_000068f0 (*(uint *)(0x68f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009f90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xf3 < _DAT_00006808 && ((code *)(ulong)_DAT_000068f0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10009fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_000068f0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068f0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068f0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068fc
#define DAT_000068fc (*(uint8_t *)(0x68fcU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068fc
#define _DAT_000068fc (*(uint *)(0x68fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009fe0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xff < _DAT_00006808 && ((code *)(ulong)_DAT_000068fc != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_000068fc)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068fc
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068fc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(uint *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000a030(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xb3 < _DAT_00006808 && ((code *)(ulong)_DAT_000068b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a07e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_000068b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(uint *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000a090(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xb3 < _DAT_00006808 && ((code *)(ulong)_DAT_000068b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000a0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)_DAT_000068b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(uint *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000a0f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  do {
    if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
       ((_DAT_00006808 < 0x30 || ((code *)(ulong)_DAT_0000682c == (code *)0x0)))) {
      return 0;
    }
    uVar2 = (*(code *)(ulong)_DAT_0000682c)();
    uVar1 = (uint)uVar2;
    if (uVar1 == 0) {
      return 0;
    }
  } while ((((uVar1 & 0xff00) != 0x100) && ((uVar1 & 0xdf) != 0x51)) && ((uVar1 & 0xff) != 0x1b));
  return CONCAT71((int7)((ulong)uVar2 >> 8),1);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a180(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    do {
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_0000689c)();
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1e0
 */

void recovered_1000a1e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a200
 */

uint128 recovered_1000a200(uint param_1,long param_2,uint param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 0) = (ulong)param_1 | param_2 << 0x20;
  PF_PART8(auVar1, 8) = (ulong)param_3 | param_4 << 0x20;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a220
 */

void recovered_1000a220(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1000a240(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  uVar1 = uRam000000001000c918;
  *(undefined8 *)((long)param_1 + 0x20) = _DAT_1000c910;
  *(undefined8 *)((long)param_1 + 0x28) = uVar1;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_1000a270(undefined4 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  uVar1 = uRam000000001000c918;
  *(undefined8 *)(param_1 + 8) = _DAT_1000c910;
  *(undefined8 *)(param_1 + 10) = uVar1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2b0
 */

undefined4 * recovered_1000a2b0(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c90(param_1,0,0x58);
  *(undefined8 *)(param_1 + 8) = 0x20202000000001;
  param_1[0xb] = 1;
  *param_1 = 2;
  param_1[10] = param_2;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  return param_1;
}


#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_1000a300(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  uVar1 = uRam000000001000c918;
  *(undefined8 *)(param_1 + 8) = _DAT_1000c910;
  *(undefined8 *)(param_1 + 10) = uVar1;
  *param_1 = 4;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_1000a330(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  uVar1 = uRam000000001000c918;
  *(undefined8 *)(param_1 + 8) = _DAT_1000c910;
  *(undefined8 *)(param_1 + 10) = uVar1;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 0x12) = param_3;
  *(undefined8 *)(param_1 + 0x14) = param_4;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_1000a390(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  uVar1 = uRam000000001000c918;
  *(undefined8 *)(param_1 + 8) = _DAT_1000c910;
  *(undefined8 *)(param_1 + 10) = uVar1;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_1000a3f0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  uVar1 = uRam000000001000c918;
  *(undefined8 *)(param_1 + 8) = _DAT_1000c910;
  *(undefined8 *)(param_1 + 10) = uVar1;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

#undef DAT_1000c910
#define DAT_1000c910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef UNK_1000c918
#define UNK_1000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef _DAT_1000c910
#define _DAT_1000c910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dfU)))
#undef uRam000000001000c918
#define uRam000000001000c918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_1000a450(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10001c90(param_1,0,0x58);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  uVar1 = uRam000000001000c918;
  *(undefined8 *)(param_1 + 8) = _DAT_1000c910;
  *(undefined8 *)(param_1 + 10) = uVar1;
  return param_1;
}

#undef DAT_1000c910
#undef UNK_1000c918
#undef _DAT_1000c910
#undef uRam000000001000c918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4a0
 */

undefined8 *
recovered_1000a4a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                  undefined8 in_stack_00000008,undefined8 in_stack_00000010,
                  undefined8 in_stack_00000018,undefined8 in_stack_00000020,
                  undefined8 in_stack_00000028,undefined8 in_stack_00000030,
                  undefined8 in_stack_00000038,undefined8 in_stack_00000050,
                  undefined8 in_stack_00000058)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[10] = in_stack_00000058;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[8] = param_3;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = param_2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4f0
 */

ulong * recovered_1000a4f0(ulong *param_1,undefined4 param_2,undefined4 in_stack_00000008,
                          undefined4 in_stack_0000000c,ulong in_stack_00000010,
                          ulong in_stack_00000018,ulong in_stack_00000020,
                          undefined4 in_stack_00000028,ulong in_stack_00000030,
                          ulong in_stack_00000038,ulong in_stack_00000040,ulong in_stack_00000048,
                          ulong in_stack_00000050,ulong in_stack_00000058)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[10] = in_stack_00000058;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *(undefined4 *)(param_1 + 4) = in_stack_00000028;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  param_1[5] = in_stack_00000030;
  *param_1 = CONCAT44(in_stack_0000000c,in_stack_00000008) | 0x100000000;
  param_1[1] = in_stack_00000010;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a540
 */

ulong * recovered_1000a540(ulong *param_1,undefined4 param_2,undefined4 in_stack_00000008,
                          undefined4 in_stack_0000000c,ulong in_stack_00000010,
                          ulong in_stack_00000018,ulong in_stack_00000020,ulong in_stack_00000028,
                          undefined4 in_stack_00000034,ulong in_stack_00000038,
                          ulong in_stack_00000040,ulong in_stack_00000048,ulong in_stack_00000050,
                          ulong in_stack_00000058)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[10] = in_stack_00000058;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  param_1[4] = in_stack_00000028;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = in_stack_00000034;
  *param_1 = CONCAT44(in_stack_0000000c,in_stack_00000008) | 0x200000000;
  param_1[1] = in_stack_00000010;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a590
 */

void recovered_1000a590(undefined8 *param_1,int param_2,int param_3,undefined4 in_stack_00000008,
                       uint in_stack_0000000c,undefined8 in_stack_00000010,
                       undefined8 in_stack_00000018,undefined8 in_stack_00000020,
                       undefined8 in_stack_00000028,undefined8 in_stack_00000030,
                       int in_stack_00000038,int in_stack_0000003c,undefined8 in_stack_00000040,
                       undefined8 in_stack_00000048,undefined8 in_stack_00000050,
                       undefined8 in_stack_00000058)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (-1 < param_2) {
    in_stack_0000000c = in_stack_0000000c | 4;
    in_stack_00000038 = param_2;
  }
  if (-1 < param_3) {
    in_stack_0000000c = in_stack_0000000c | 8;
    in_stack_0000003c = param_3;
  }
  param_1[10] = in_stack_00000058;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  *(int *)(param_1 + 6) = in_stack_00000038;
  *(int *)((long)param_1 + 0x34) = in_stack_0000003c;
  param_1[7] = in_stack_00000040;
  param_1[4] = in_stack_00000028;
  param_1[5] = in_stack_00000030;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = CONCAT44(in_stack_0000000c,in_stack_00000008);
  param_1[1] = in_stack_00000010;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5f0
 */

undefined8 *
recovered_1000a5f0(undefined8 *param_1,int param_2,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined8 in_stack_00000020,undefined8 in_stack_00000028,
                  undefined4 in_stack_00000030,undefined8 in_stack_00000038,
                  undefined8 in_stack_00000040,undefined8 in_stack_00000048,
                  undefined8 in_stack_00000050,undefined8 in_stack_00000058)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[10] = in_stack_00000058;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  param_1[4] = in_stack_00000028;
  *(undefined4 *)(param_1 + 5) = in_stack_00000030;
  *(uint *)((long)param_1 + 0x2c) = param_2 + (uint)(param_2 == 0);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a640
 */

undefined8 *
recovered_1000a640(undefined8 *param_1,uint param_2,undefined8 in_stack_00000008,
                  undefined8 in_stack_00000010,undefined8 in_stack_00000018,
                  undefined8 in_stack_00000020,undefined8 in_stack_0000002c,
                  undefined4 in_stack_00000034,undefined8 in_stack_00000038,
                  undefined8 in_stack_00000040,undefined8 in_stack_00000048,
                  undefined8 in_stack_00000050,undefined8 in_stack_00000058)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 1;
  if (param_2 < 4) {
    uVar1 = param_2;
  }
  param_1[10] = in_stack_00000058;
  param_1[8] = in_stack_00000048;
  param_1[9] = in_stack_00000050;
  param_1[6] = in_stack_00000038;
  param_1[7] = in_stack_00000040;
  param_1[2] = in_stack_00000018;
  param_1[3] = in_stack_00000020;
  *param_1 = in_stack_00000008;
  param_1[1] = in_stack_00000010;
  *(uint *)(param_1 + 4) = uVar1;
  *(undefined8 *)((long)param_1 + 0x24) = in_stack_0000002c;
  *(undefined4 *)((long)param_1 + 0x2c) = in_stack_00000034;
  return param_1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006978
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#undef DAT_1000c924
#define DAT_1000c924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006978
#define _DAT_00006978 (*(uint *)(0x6978U))
#define local_60 (*(undefined1 (*)[12])(frame + 16))
#define local_54 (*(uint *)(frame + 28))
#define local_50 (*(uint *)(frame + 32))
#define local_48 (*(ulong *)(frame + 40))
#define local_40 (*(ulong *)(frame + 48))
#define local_38 (*(int * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000a6a0(int *param_1,undefined8 param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined *puVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;

  uVar16 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = (int)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar8 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  uVar9 = (int)param_2 - (iVar8 + iVar3);
  uVar11 = (ulong)uVar9;
  if ((int)uVar9 < 1) {
    uVar11 = 0;
  }
  iVar8 = (int)*(undefined8 *)(param_1 + 0xe);
  iVar3 = 0;
  if (0 < iVar8) {
    iVar3 = iVar8;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  iVar8 = 0;
  if (0 < iVar2) {
    iVar8 = iVar2;
  }
  uVar9 = (int)((ulong)param_2 >> 0x20) - (iVar8 + iVar3);
  uVar15 = (ulong)uVar9;
  if ((int)uVar9 < 1) {
    uVar15 = 0;
  }
  if (*param_1 - 1U < 7) {
    local_38 = (int *)((uVar15 << 0x20) + uVar11);
    switch((uintptr_t)(*param_1)) {
    case 1:
      puVar1 = *(undefined **)(param_1 + 2);
      iVar3 = param_1[0xb];
      uVar16 = 0;
      recovered_10001c90(local_60,0,0x18);
      puVar12 = &DAT_1000c924;
      if (puVar1 != (undefined *)0x0) {
        puVar12 = puVar1;
      }
      if (_DAT_00006800 == 0x50414d57) {
        if (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) || (_DAT_00006808 < 0x17c)) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if (((code *)(ulong)_DAT_00006978 != (code *)0x0) &&
             (iVar3 = (*(code *)(ulong)_DAT_00006978)
                                (puVar12,0xffffffff,iVar3 + (uint)(iVar3 == 0),0,local_60),
             iVar3 != 0)) {
            uVar16 = (ulong)local_54;
            if ((int)local_54 < 1) {
              uVar16 = 0;
            }
            uVar11 = 0;
            if (0 < (int)local_50) {
              uVar11 = (ulong)local_50;
            }
            uVar16 = uVar11 << 0x20 | uVar16;
          }
        }
      }
      iVar3 = (int)(uVar16 >> 0x20);
      break;
    case 2:
      uVar16 = 0x10;
      iVar3 = 0x10;
      break;
    case 3:
      puVar1 = *(undefined **)(param_1 + 2);
      iVar3 = param_1[0xb];
      uVar11 = 0;
      local_38 = param_1;
      recovered_10001c90(local_60,0,0x18);
      puVar12 = &DAT_1000c924;
      if (puVar1 != (undefined *)0x0) {
        puVar12 = puVar1;
      }
      if (_DAT_00006800 == 0x50414d57) {
        if (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) || (_DAT_00006808 < 0x17c)) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if (((code *)(ulong)_DAT_00006978 != (code *)0x0) &&
             (iVar3 = (*(code *)(ulong)_DAT_00006978)
                                (puVar12,0xffffffff,iVar3 + (uint)(iVar3 == 0),0,local_60),
             iVar3 != 0)) {
            uVar11 = (ulong)local_54;
            if ((int)local_54 < 1) {
              uVar11 = 0;
            }
            uVar16 = 0;
            if (0 < (int)local_50) {
              uVar16 = (ulong)local_50;
            }
            uVar11 = uVar16 << 0x20 | uVar11;
          }
        }
      }
      uVar16 = (ulong)((int)uVar11 + 0x14);
      uVar14 = (uint)(uVar11 >> 0x20);
      uVar9 = 0xc;
      if (0xc < uVar14) {
        uVar9 = uVar14;
      }
      iVar3 = uVar9 + 0xc;
      param_1 = local_38;
      break;
    case 4:
      goto switchD_1000a73c_caseD_4;
    case 5:
      uVar9 = param_1[6];
      if (uVar9 < 2) {
        iVar3 = 0;
        uVar14 = 0;
        uVar15 = 0;
        if (uVar9 != 0) goto LAB_1000a9a6;
      }
      else {
        uVar14 = (uVar9 - 1) * param_1[7];
LAB_1000a9a6:
        uVar15 = (ulong)uVar14;
        lVar17 = 0;
        uVar16 = 0;
        local_48 = local_48 & 0xffffffff00000000;
        local_40 = uVar11;
        iVar8 = 0;
        do {
          piVar13 = (int *)(*(long *)(param_1 + 4) + lVar17);
          if (*(long *)(param_1 + 4) == 0) {
            piVar13 = (int *)0x0;
          }
          if ((piVar13 == (int *)0x0) || (*piVar13 != 4)) {
            uVar5 = recovered_1000a6a0(piVar13,local_38);
            uVar15 = (ulong)(uint)((int)uVar15 + (int)uVar5);
            iVar3 = (int)((ulong)uVar5 >> 0x20);
            if (iVar3 < iVar8) {
              iVar3 = iVar8;
            }
            uVar9 = param_1[6];
          }
          else {
            local_48 = CONCAT44(PF_PART4(local_48, 4),(int)local_48 + 1);
            iVar3 = iVar8;
          }
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 0x58;
          iVar8 = iVar3;
        } while (uVar16 < uVar9);
        uVar16 = local_40 & 0xffffffff;
        if ((int)local_40 < (int)uVar15) {
          uVar16 = uVar15;
        }
        if ((int)local_48 != 0) break;
      }
      uVar16 = uVar15;
      break;
    case 6:
      uVar9 = param_1[6];
      if (uVar9 < 2) {
        iVar8 = 0;
        uVar16 = 0;
        if (uVar9 != 0) goto LAB_1000aa46;
      }
      else {
        iVar8 = (uVar9 - 1) * param_1[7];
LAB_1000aa46:
        lVar17 = 0;
        uVar11 = 0;
        uVar16 = 0;
        local_40 = local_40 & 0xffffffff00000000;
        local_48 = uVar15;
        do {
          piVar13 = (int *)(*(long *)(param_1 + 4) + lVar17);
          if (*(long *)(param_1 + 4) == 0) {
            piVar13 = (int *)0x0;
          }
          if ((piVar13 == (int *)0x0) || (*piVar13 != 4)) {
            uVar15 = recovered_1000a6a0(piVar13,local_38);
            if ((int)uVar16 <= (int)uVar15) {
              uVar16 = uVar15 & 0xffffffff;
            }
            iVar8 = iVar8 + (int)(uVar15 >> 0x20);
            uVar9 = param_1[6];
            uVar15 = local_48;
          }
          else {
            local_40 = CONCAT44(PF_PART4(local_40, 4),(int)local_40 + 1);
          }
          uVar11 = uVar11 + 1;
          lVar17 = lVar17 + 0x58;
        } while (uVar11 < uVar9);
        iVar3 = (int)uVar15;
        if ((int)uVar15 < iVar8) {
          iVar3 = iVar8;
        }
        if ((int)local_40 != 0) break;
      }
      iVar3 = iVar8;
      break;
    case 7:
      iVar3 = 0;
      if (param_1[6] != 0) {
        lVar17 = 0;
        uVar11 = 0;
        iVar3 = 0;
        uVar16 = 0;
        do {
          piVar13 = (int *)(*(long *)(param_1 + 4) + lVar17);
          if (*(long *)(param_1 + 4) == 0) {
            piVar13 = (int *)0x0;
          }
          uVar15 = recovered_1000a6a0(piVar13,local_38);
          if ((int)uVar16 <= (int)uVar15) {
            uVar16 = uVar15 & 0xffffffff;
          }
          iVar8 = (int)(uVar15 >> 0x20);
          if (iVar8 < iVar3) {
            iVar8 = iVar3;
          }
          iVar3 = iVar8;
          uVar11 = uVar11 + 1;
          lVar17 = lVar17 + 0x58;
        } while (uVar11 < (uint)param_1[6]);
      }
    }
  }
  else {
switchD_1000a73c_caseD_4:
    iVar3 = 0;
  }
  iVar8 = (int)uVar16;
  if ((param_1[1] & 4U) != 0) {
    iVar8 = 0;
    if (0 < param_1[0xc]) {
      iVar8 = param_1[0xc];
    }
  }
  if ((param_1[1] & 8U) != 0) {
    iVar3 = 0;
    if (0 < param_1[0xd]) {
      iVar3 = param_1[0xd];
    }
  }
  iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar4 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  iVar6 = (int)*(undefined8 *)(param_1 + 0xe);
  iVar10 = 0;
  if (0 < iVar6) {
    iVar10 = iVar6;
  }
  iVar7 = (int)*(undefined8 *)(param_1 + 0x10);
  iVar6 = 0;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  return CONCAT44(iVar6 + iVar10 + iVar3,iVar4 + iVar2 + iVar8);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006978
#undef DAT_1000c924
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006978
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006900
#define DAT_00006900 (*(uint8_t *)(0x6900U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006900
#define _DAT_00006900 (*(uint *)(0x6900U))
#define local_3c (*(undefined1 (*)[4])(frame + 20))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_28 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000ab90(int *param_1,byte *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  iVar2 = 0;
  recovered_10001c90(param_2,0,0x2c);
  recovered_10001c90(local_3c,0,0x1c);
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00006800 == 0x50414d57)) &&
     (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) &&
      ((0x103 < _DAT_00006808 && ((code *)(ulong)_DAT_00006900 != (code *)0x0)))))) {
    iVar1 = (*(code *)(ulong)_DAT_00006900)(*param_1,local_3c);
    if (iVar1 != 0) {
      *param_2 = *param_2 | 1;
      *(undefined8 *)(param_2 + 4) = local_28;
      *(undefined8 *)(param_2 + 0xc) = local_38;
      iVar2 = 1;
    }
  }
  *param_2 = *param_2 | 2;
  iVar1 = recovered_10009580(param_2 + 0x14);
  return iVar1 + iVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006900
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006900
#undef local_3c
#undef local_38
#undef local_28

#define local_2c8 (*(undefined1 (*)[40])(frame + 24))
#define local_2a0 (*(byte *)(frame + 64))
#define local_50 (*(long *)(frame + 656))
#define local_48 (*(uint *)(frame + 664))
#define local_44 (*(ulong *)(frame + 668))
#define local_38 (*(undefined8 *)(frame + 680))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac60
 */

undefined4 recovered_1000ac60(int *param_1,int *param_2,undefined8 param_3)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long lVar10;

  uVar2 = 0;
  if ((param_2 != (int *)0x0 && param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar2 = 0;
    recovered_10001c90(local_2c8,0,0x278);
    uVar3 = recovered_10009320(param_1,local_2c8);
    if (((int)uVar3 != 0) &&
       ((((local_2a0 & 0x11) == 0 &&
         (uVar3 = recovered_100091f0(param_1,(long)local_2c8), (int)uVar3 != 0)) &&
        (*(long *)(param_1 + 0xc) != 0)))) {
      recovered_10001c90(&local_50,0,0x20);
      local_50 = *(long *)(param_1 + 0xc);
      local_48 = param_1[1];
      local_44 = *(ulong *)(param_1 + 2);
      if ((0 < (int)local_44 && 0 < (int)local_48) && local_50 != 0) {
        iVar1 = param_1[4];
        uVar7 = 0;
        do {
          puVar8 = (undefined1 *)((local_44 >> 0x20) * uVar7 + local_50);
          uVar5 = (undefined1)((uint)iVar1 >> 0x10);
          uVar6 = (undefined1)((uint)iVar1 >> 8);
          uVar4 = (undefined1)iVar1;
          uVar9 = local_48 & 0x7ffffffc;
          if (3 < local_48) {
            do {
              *puVar8 = uVar5;
              puVar8[1] = uVar6;
              puVar8[2] = uVar4;
              puVar8[3] = 0xff;
              puVar8[4] = uVar5;
              puVar8[5] = uVar6;
              puVar8[6] = uVar4;
              puVar8[7] = 0xff;
              puVar8[8] = uVar5;
              puVar8[9] = uVar6;
              puVar8[10] = uVar4;
              puVar8[0xb] = 0xff;
              puVar8[0xc] = uVar5;
              puVar8[0xd] = uVar6;
              puVar8[0xe] = uVar4;
              puVar8[0xf] = 0xff;
              puVar8 = puVar8 + 0x10;
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
          if ((local_48 & 3) != 0) {
            lVar10 = 0;
            do {
              puVar8[lVar10 * 4] = uVar5;
              puVar8[lVar10 * 4 + 1] = uVar6;
              puVar8[lVar10 * 4 + 2] = uVar4;
              puVar8[lVar10 * 4 + 3] = 0xff;
              lVar10 = lVar10 + 1;
            } while ((local_48 & 3) != (uint)lVar10);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != (local_44 & 0xffffffff));
      }
      local_38 = param_3;
      recovered_1000ae50(&local_50,param_2,0,*(ulong *)(param_1 + 1));
      uVar3 = recovered_10008d40(param_1,*(byte **)(param_1 + 0xe),*(long *)(param_1 + 0xc),
                                 (ulong)(uint)param_1[1],param_1[2],param_1[3],param_1[4]);
      uVar2 = (undefined4)uVar3;
    }
  }
  return uVar2;
}

#undef local_2c8
#undef local_2a0
#undef local_50
#undef local_48
#undef local_44
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006978
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#undef DAT_1000c924
#define DAT_1000c924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f3U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006978
#define _DAT_00006978 (*(uint *)(0x6978U))
#define local_ac (*(uint *)(frame + 36))
#define local_a8 (*(uint *)(frame + 40))
#define local_a0 (*(long *)(frame + 48))
#define local_98 (*(ulong *)(frame + 56))
#define local_90 (*(ulong *)(frame + 64))
#define local_84 (*(undefined4 *)(frame + 76))
#define local_80 (*(ulong *)(frame + 80))
#define local_74 (*(uint *)(frame + 92))
#define local_70 (*(ulong *)(frame + 96))
#define local_68 (*(ulong *)(frame + 104))
#define local_60 (*(int * *)(frame + 112))
#define local_58 (*(ulong *)(frame + 120))
#define local_50 (*(ulong *)(frame + 128))
#define local_48 (*(ulong *)(frame + 136))
#define local_3c (*(uint *)(frame + 148))
#define local_38 (*(long * *)(frame + 152))
#define local_b8 (*(undefined1 (*)[12])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ae50(long *param_1,int *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  char cVar25;
  uint uVar26;
  undefined1 uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 uVar30;
  uint uVar31;
  undefined1 *puVar32;
  undefined *puVar33;
  ulong uVar34;
  int iVar35;
  uint uVar36;
  unkbyte10 Var37;
  undefined1 auVar38 [12];

  iVar4 = (int)param_4;
  iVar23 = (int)(param_4 >> 0x20);
  if (iVar23 < 1 || (iVar4 < 1 || (param_2 == (int *)0x0 || param_1 == (long *)0x0))) {
    return;
  }
  iVar9 = *param_2;
  uVar8 = (uint)param_3;
  iVar12 = (int)(param_3 >> 0x20);
  if ((*(byte *)(param_2 + 1) & 2) == 0) {
LAB_1000aea9:
    iVar10 = iVar9;
  }
  else {
    iVar10 = 3;
    if (iVar9 != 3) {
      uVar16 = 0;
      if (0 < (int)uVar8) {
        uVar16 = uVar8;
      }
      uVar34 = 0;
      if (0xffffffff < (long)param_3) {
        uVar34 = param_3 >> 0x20;
      }
      iVar22 = (int)param_1[1];
      if ((int)(iVar4 + uVar8) < (int)param_1[1]) {
        iVar22 = iVar4 + uVar8;
      }
      uVar31 = iVar12 + iVar23;
      if ((int)*(uint *)((long)param_1 + 0xc) <= (int)uVar31) {
        uVar31 = *(uint *)((long)param_1 + 0xc);
      }
      if (((int)uVar31 <= (int)uVar34) || (iVar22 - uVar16 == 0 || iVar22 < (int)uVar16))
      goto LAB_1000aea9;
      iVar10 = iVar9;
      if (*param_1 != 0) {
        iVar9 = param_2[10];
        uVar28 = iVar22 - uVar16 & 3;
        do {
          puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar34 + *param_1 + (ulong)uVar16 * 4);
          uVar27 = (undefined1)((uint)iVar9 >> 0x10);
          uVar30 = (undefined1)((uint)iVar9 >> 8);
          uVar21 = (undefined1)iVar9;
          uVar36 = uVar16;
          if (uVar28 != 0) {
            iVar10 = 0;
            do {
              *puVar32 = uVar27;
              puVar32[1] = uVar30;
              puVar32[2] = uVar21;
              puVar32[3] = 0xff;
              puVar32 = puVar32 + 4;
              iVar10 = iVar10 + -1;
            } while (-uVar28 != iVar10);
            uVar36 = uVar16 - iVar10;
          }
          if (uVar16 - iVar22 < 0xfffffffd) {
            lVar17 = 0;
            do {
              puVar32[lVar17 * 4] = uVar27;
              puVar32[lVar17 * 4 + 1] = uVar30;
              puVar32[lVar17 * 4 + 2] = uVar21;
              puVar32[lVar17 * 4 + 3] = 0xff;
              puVar32[lVar17 * 4 + 4] = uVar27;
              puVar32[lVar17 * 4 + 5] = uVar30;
              puVar32[lVar17 * 4 + 6] = uVar21;
              puVar32[lVar17 * 4 + 7] = 0xff;
              puVar32[lVar17 * 4 + 8] = uVar27;
              puVar32[lVar17 * 4 + 9] = uVar30;
              puVar32[lVar17 * 4 + 10] = uVar21;
              puVar32[lVar17 * 4 + 0xb] = 0xff;
              puVar32[lVar17 * 4 + 0xc] = uVar27;
              puVar32[lVar17 * 4 + 0xd] = uVar30;
              puVar32[lVar17 * 4 + 0xe] = uVar21;
              puVar32[lVar17 * 4 + 0xf] = 0xff;
              lVar17 = lVar17 + 4;
            } while (iVar22 - uVar36 != (int)lVar17);
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar31);
        iVar10 = *param_2;
        local_90 = param_4 & 0xffffffff;
        local_80 = param_4 >> 0x20;
        local_48 = param_4;
      }
    }
  }
  iVar9 = (int)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  iVar22 = (int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  if (iVar22 < 1) {
    iVar22 = 0;
  }
  iVar3 = (int)*(undefined8 *)(param_2 + 0xe);
  iVar35 = 0;
  if (0 < iVar3) {
    iVar35 = iVar3;
  }
  iVar11 = (int)*(undefined8 *)(param_2 + 0x10);
  iVar3 = 0;
  if (0 < iVar11) {
    iVar3 = iVar11;
  }
  uVar31 = iVar4 - (iVar22 + iVar9);
  uVar34 = (ulong)uVar31;
  uVar16 = 0;
  if (0 < (int)uVar31) {
    uVar16 = uVar31;
  }
  uVar28 = iVar23 - (iVar3 + iVar35);
  uVar6 = (ulong)uVar28;
  local_50 = 0;
  if (0 < (int)uVar28) {
    local_50 = uVar6;
  }
  if (6 < iVar10 - 1U) {
    return;
  }
  uVar8 = iVar9 + uVar8;
  local_58 = (ulong)uVar8;
  uVar36 = iVar35 + iVar12;
  uVar20 = (ulong)uVar36;
  local_98 = local_50 << 0x20;
  iVar23 = (int)local_50;
  local_60 = param_2;
  local_38 = param_1;
  switch((uintptr_t)(iVar10)) {
  case 1:
    puVar33 = *(undefined **)(param_2 + 2);
    iVar23 = param_2[0xb];
    uVar34 = 0;
    recovered_10001c90(local_b8,0,0x18);
    if (puVar33 == (undefined *)0x0) {
      puVar33 = &DAT_1000c924;
    }
    if (_DAT_00006800 == 0x50414d57) {
      if (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
         ((_DAT_00006808 < 0x17c || ((code *)(ulong)_DAT_00006978 == (code *)0x0)))) {
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        iVar23 = (*(code *)(ulong)_DAT_00006978)
                           (puVar33,0xffffffff,iVar23 + (uint)(iVar23 == 0),0,local_b8);
        if (iVar23 != 0) {
          uVar34 = (ulong)local_ac;
          if ((int)local_ac < 1) {
            uVar34 = 0;
          }
          uVar6 = 0;
          if (0 < (int)local_a8) {
            uVar6 = (ulong)local_a8;
          }
          uVar34 = uVar6 << 0x20 | uVar34;
        }
      }
    }
    iVar4 = local_60[8];
    uVar6 = uVar34 & 0xffffffff;
    if ((int)uVar16 < (int)uVar34) {
      uVar6 = (ulong)uVar16;
    }
    uVar8 = (uint)local_50;
    uVar31 = (uint)(uVar34 >> 0x20);
    uVar7 = (ulong)uVar31;
    if (uVar8 < uVar31) {
      uVar7 = local_50 & 0xffffffff;
    }
    uVar34 = local_58;
    if (iVar4 == 3) {
      uVar6 = (ulong)uVar16;
      uVar7 = local_50;
    }
    else if (iVar4 == 2) {
      uVar20 = (ulong)((uVar8 + uVar36) - (int)uVar7);
      uVar34 = (ulong)((uVar16 + (int)local_58) - (int)uVar6);
    }
    else if (iVar4 == 1) {
      uVar20 = (ulong)((int)(uVar8 - (int)uVar7) / 2 + uVar36);
      uVar34 = (ulong)(uint)((int)(uVar16 - (int)uVar6) / 2 + (int)local_58);
    }
    uVar34 = uVar34 & 0xffffffff | uVar20 << 0x20;
    uVar6 = uVar6 | uVar7 << 0x20;
    puVar33 = &DAT_1000c924;
    if (*(undefined **)(local_60 + 2) != (undefined *)0x0) {
      puVar33 = *(undefined **)(local_60 + 2);
    }
    iVar23 = 0x202020;
    if ((*(byte *)(local_60 + 1) & 1) != 0) {
      iVar23 = local_60[9];
    }
    iVar9 = local_60[0xb] + (uint)(local_60[0xb] == 0);
    goto LAB_1000beef;
  case 2:
    iVar4 = 0xf4f4f4;
    if ((*(byte *)(param_2 + 1) & 2) != 0) {
      iVar4 = param_2[10];
    }
    uVar13 = 0;
    if (0 < (int)uVar8) {
      uVar13 = uVar8;
    }
    uVar26 = 0;
    if (0 < (int)uVar36) {
      uVar26 = uVar36;
    }
    iVar9 = uVar16 + uVar8;
    if ((int)param_1[1] <= (int)(uVar16 + uVar8)) {
      iVar9 = (int)param_1[1];
    }
    uVar8 = iVar23 + uVar36;
    if ((int)*(uint *)((long)param_1 + 0xc) <= (int)(iVar23 + uVar36)) {
      uVar8 = *(uint *)((long)param_1 + 0xc);
    }
    if (((((int)uVar26 < (int)uVar8) && (iVar9 - uVar13 != 0 && (int)uVar13 <= iVar9)) &&
        (0 < (int)uVar28)) && ((0 < (int)uVar31 && (*param_1 != 0)))) {
      uVar34 = (ulong)uVar26;
      uVar16 = iVar9 - uVar13 & 3;
      do {
        puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar34 + *param_1 + (ulong)uVar13 * 4);
        uVar27 = (undefined1)((uint)iVar4 >> 0x10);
        uVar30 = (undefined1)((uint)iVar4 >> 8);
        uVar21 = (undefined1)iVar4;
        uVar31 = uVar13;
        if (uVar16 != 0) {
          iVar23 = 0;
          do {
            *puVar32 = uVar27;
            puVar32[1] = uVar30;
            puVar32[2] = uVar21;
            puVar32[3] = 0xff;
            puVar32 = puVar32 + 4;
            iVar23 = iVar23 + -1;
          } while (-uVar16 != iVar23);
          uVar31 = uVar13 - iVar23;
        }
        if (uVar13 - iVar9 < 0xfffffffd) {
          lVar17 = 0;
          do {
            puVar32[lVar17 * 4] = uVar27;
            puVar32[lVar17 * 4 + 1] = uVar30;
            puVar32[lVar17 * 4 + 2] = uVar21;
            puVar32[lVar17 * 4 + 3] = 0xff;
            puVar32[lVar17 * 4 + 4] = uVar27;
            puVar32[lVar17 * 4 + 5] = uVar30;
            puVar32[lVar17 * 4 + 6] = uVar21;
            puVar32[lVar17 * 4 + 7] = 0xff;
            puVar32[lVar17 * 4 + 8] = uVar27;
            puVar32[lVar17 * 4 + 9] = uVar30;
            puVar32[lVar17 * 4 + 10] = uVar21;
            puVar32[lVar17 * 4 + 0xb] = 0xff;
            puVar32[lVar17 * 4 + 0xc] = uVar27;
            puVar32[lVar17 * 4 + 0xd] = uVar30;
            puVar32[lVar17 * 4 + 0xe] = uVar21;
            puVar32[lVar17 * 4 + 0xf] = 0xff;
            lVar17 = lVar17 + 4;
          } while (iVar9 - uVar31 != (int)lVar17);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 != uVar8);
    }
    break;
  case 3:
    pbVar1 = (byte *)param_1[3];
    Var37 = SUB1610((uint128)0x0,0);
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
      local_84 = 0;
    }
    else {
      local_84 = 0;
      if (((((int)uVar8 <= *(int *)(pbVar1 + 4)) && ((int)uVar36 <= *(int *)(pbVar1 + 8))) &&
          (*(int *)(pbVar1 + 4) < (int)(uVar8 + uVar16))) &&
         (*(int *)(pbVar1 + 8) < (int)(iVar23 + uVar36))) {
        PF_PART4(auVar38, 8) = (int)((ulong)*(undefined8 *)(pbVar1 + 0xc) >> 0x20);
        PF_PART8(auVar38, 0) = *(undefined8 *)(pbVar1 + 0xc);
        Var37 = PF_PART10(auVar38, 0);
        local_84 = 1;
      }
    }
    uVar13 = 0xf4f4f4;
    if ((*(byte *)(param_2 + 1) & 2) != 0) {
      uVar13 = param_2[10];
    }
    cVar25 = (char)local_84;
    if (((uint)Var37 & 1) == 0) {
      if (cVar25 != '\0') {
        iVar12 = (uVar13 >> 0x10 & 0xff) * 0x52 + 0x1220;
        iVar4 = (uVar13 >> 8 & 0xff) * 0x52 + 0x1220;
        iVar9 = (uVar13 & 0xff) * 0x52 + 0x1220;
        goto LAB_1000b58e;
      }
    }
    else {
      iVar12 = (uVar13 >> 0x10 & 0xff) * 0x58 + 0x32;
      iVar4 = (uVar13 >> 8 & 0xff) * 0x58 + 0x32;
      iVar9 = (uVar13 & 0xff) * 0x58 + 0x32;
LAB_1000b58e:
      uVar13 = (uint)(iVar9 * 0x147b) >> 0x13 | (uint)(iVar4 * 0x147b) >> 0xb & 0x1ff00 |
               (uint)(iVar12 * 0x147b) >> 3 & 0x1ff0000;
    }
    local_a0 = uVar20 << 0x20;
    local_70 = 0;
    if (0 < (int)uVar8) {
      local_70 = local_58;
    }
    uVar16 = uVar16 + uVar8;
    local_68 = (ulong)uVar16;
    local_74 = 0;
    if (0 < (int)uVar36) {
      local_74 = uVar36;
    }
    local_3c = *(uint *)(param_1 + 1);
    uVar26 = local_3c;
    if ((int)uVar16 < (int)local_3c) {
      uVar26 = uVar16;
    }
    uVar18 = iVar23 + uVar36;
    local_50 = (ulong)uVar18;
    uVar29 = *(uint *)((long)param_1 + 0xc);
    uVar5 = uVar29;
    if ((int)uVar18 < (int)uVar29) {
      uVar5 = uVar18;
    }
    lVar17 = *param_1;
    iVar23 = (int)local_70;
    local_48 = CONCAT44(PF_PART4(local_48, 4),iVar23);
    uVar20 = (ulong)local_74;
    if ((((int)local_74 < (int)uVar5) && (uVar26 - iVar23 != 0 && iVar23 <= (int)uVar26)) &&
       ((0 < (int)uVar28 && ((0 < (int)uVar31 && (lVar17 != 0)))))) {
      uVar31 = uVar26 - iVar23 & 3;
      uVar7 = uVar20;
      do {
        puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar7 + *param_1 + local_70 * 4);
        uVar27 = (undefined1)(uVar13 >> 0x10);
        uVar30 = (undefined1)(uVar13 >> 8);
        uVar21 = (undefined1)uVar13;
        iVar4 = iVar23;
        if (uVar31 != 0) {
          iVar4 = 0;
          do {
            *puVar32 = uVar27;
            puVar32[1] = uVar30;
            puVar32[2] = uVar21;
            puVar32[3] = 0xff;
            puVar32 = puVar32 + 4;
            iVar4 = iVar4 + -1;
          } while (-uVar31 != iVar4);
          iVar4 = iVar23 - iVar4;
        }
        if (iVar23 - uVar26 < 0xfffffffd) {
          lVar17 = 0;
          do {
            puVar32[lVar17 * 4] = uVar27;
            puVar32[lVar17 * 4 + 1] = uVar30;
            puVar32[lVar17 * 4 + 2] = uVar21;
            puVar32[lVar17 * 4 + 3] = 0xff;
            puVar32[lVar17 * 4 + 4] = uVar27;
            puVar32[lVar17 * 4 + 5] = uVar30;
            puVar32[lVar17 * 4 + 6] = uVar21;
            puVar32[lVar17 * 4 + 7] = 0xff;
            puVar32[lVar17 * 4 + 8] = uVar27;
            puVar32[lVar17 * 4 + 9] = uVar30;
            puVar32[lVar17 * 4 + 10] = uVar21;
            puVar32[lVar17 * 4 + 0xb] = 0xff;
            puVar32[lVar17 * 4 + 0xc] = uVar27;
            puVar32[lVar17 * 4 + 0xd] = uVar30;
            puVar32[lVar17 * 4 + 0xe] = uVar21;
            puVar32[lVar17 * 4 + 0xf] = 0xff;
            lVar17 = lVar17 + 4;
          } while (uVar26 - iVar4 != (int)lVar17);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar5);
      uVar15 = 0x9a9a9a;
      if (cVar25 != '\0') {
        uVar15 = 0x286dc4;
      }
      local_3c = *(uint *)(param_1 + 1);
      uVar29 = *(uint *)((long)param_1 + 0xc);
      lVar17 = *param_1;
      uVar26 = local_3c;
      if ((int)uVar16 < (int)local_3c) {
        uVar26 = uVar16;
      }
LAB_1000b7ad:
      uVar31 = uVar36 + 1;
      if ((int)uVar29 <= (int)(uVar36 + 1)) {
        uVar31 = uVar29;
      }
      uVar30 = (undefined1)uVar15;
      uVar27 = (undefined1)((ulong)uVar15 >> 8);
      uVar21 = (undefined1)((ulong)uVar15 >> 0x10);
      if (((!(uVar26 - iVar23 == 0 || (int)uVar26 < iVar23)) && (lVar17 != 0)) &&
         ((int)local_74 < (int)uVar31)) {
        uVar28 = uVar26 - iVar23 & 3;
        uVar7 = uVar20;
        do {
          puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar7 + *param_1 + local_70 * 4);
          iVar4 = iVar23;
          if (uVar28 != 0) {
            iVar4 = 0;
            do {
              *puVar32 = uVar21;
              puVar32[1] = uVar27;
              puVar32[2] = uVar30;
              puVar32[3] = 0xff;
              puVar32 = puVar32 + 4;
              iVar4 = iVar4 + -1;
            } while (-uVar28 != iVar4);
            iVar4 = iVar23 - iVar4;
          }
          if (iVar23 - uVar26 < 0xfffffffd) {
            lVar17 = 0;
            do {
              puVar32[lVar17 * 4] = uVar21;
              puVar32[lVar17 * 4 + 1] = uVar27;
              puVar32[lVar17 * 4 + 2] = uVar30;
              puVar32[lVar17 * 4 + 3] = 0xff;
              puVar32[lVar17 * 4 + 4] = uVar21;
              puVar32[lVar17 * 4 + 5] = uVar27;
              puVar32[lVar17 * 4 + 6] = uVar30;
              puVar32[lVar17 * 4 + 7] = 0xff;
              puVar32[lVar17 * 4 + 8] = uVar21;
              puVar32[lVar17 * 4 + 9] = uVar27;
              puVar32[lVar17 * 4 + 10] = uVar30;
              puVar32[lVar17 * 4 + 0xb] = 0xff;
              puVar32[lVar17 * 4 + 0xc] = uVar21;
              puVar32[lVar17 * 4 + 0xd] = uVar27;
              puVar32[lVar17 * 4 + 0xe] = uVar30;
              puVar32[lVar17 * 4 + 0xf] = 0xff;
              lVar17 = lVar17 + 4;
            } while (uVar26 - iVar4 != (int)lVar17);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar31);
        local_3c = *(uint *)(param_1 + 1);
        uVar29 = *(uint *)((long)param_1 + 0xc);
        lVar17 = *param_1;
        uVar26 = local_3c;
        if ((int)uVar16 < (int)local_3c) {
          uVar26 = uVar16;
        }
      }
      uVar31 = (uint)(local_98 + local_a0 + -0x100000000 >> 0x20);
      uVar7 = 0;
      if (0 < (int)uVar31) {
        uVar7 = (ulong)uVar31;
      }
      uVar28 = uVar31 + 1;
      if ((int)uVar29 <= (int)(uVar31 + 1)) {
        uVar28 = uVar29;
      }
      if (((uVar26 - iVar23 != 0 && iVar23 <= (int)uVar26) && (lVar17 != 0)) &&
         ((int)uVar7 < (int)uVar28)) {
        uVar31 = uVar26 - iVar23 & 3;
        do {
          puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar7 + *param_1 + local_70 * 4);
          iVar4 = iVar23;
          if (uVar31 != 0) {
            iVar4 = 0;
            do {
              *puVar32 = uVar21;
              puVar32[1] = uVar27;
              puVar32[2] = uVar30;
              puVar32[3] = 0xff;
              puVar32 = puVar32 + 4;
              iVar4 = iVar4 + -1;
            } while (-uVar31 != iVar4);
            iVar4 = iVar23 - iVar4;
          }
          if (iVar23 - uVar26 < 0xfffffffd) {
            lVar17 = 0;
            do {
              puVar32[lVar17 * 4] = uVar21;
              puVar32[lVar17 * 4 + 1] = uVar27;
              puVar32[lVar17 * 4 + 2] = uVar30;
              puVar32[lVar17 * 4 + 3] = 0xff;
              puVar32[lVar17 * 4 + 4] = uVar21;
              puVar32[lVar17 * 4 + 5] = uVar27;
              puVar32[lVar17 * 4 + 6] = uVar30;
              puVar32[lVar17 * 4 + 7] = 0xff;
              puVar32[lVar17 * 4 + 8] = uVar21;
              puVar32[lVar17 * 4 + 9] = uVar27;
              puVar32[lVar17 * 4 + 10] = uVar30;
              puVar32[lVar17 * 4 + 0xb] = 0xff;
              puVar32[lVar17 * 4 + 0xc] = uVar21;
              puVar32[lVar17 * 4 + 0xd] = uVar27;
              puVar32[lVar17 * 4 + 0xe] = uVar30;
              puVar32[lVar17 * 4 + 0xf] = 0xff;
              lVar17 = lVar17 + 4;
            } while (uVar26 - iVar4 != (int)lVar17);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar28);
        local_3c = *(uint *)(param_1 + 1);
        uVar29 = *(uint *)((long)param_1 + 0xc);
        lVar17 = *param_1;
      }
      uVar31 = uVar8 + 1;
      if ((int)local_3c <= (int)(uVar8 + 1)) {
        uVar31 = local_3c;
      }
      if ((int)uVar18 < (int)uVar29) {
        uVar29 = uVar18;
      }
      if ((((int)local_74 < (int)uVar29) && (lVar17 != 0)) &&
         (uVar31 - iVar23 != 0 && iVar23 <= (int)uVar31)) {
        local_70 = local_70 * 4;
        uVar8 = uVar31 - iVar23 & 3;
        uVar7 = uVar20;
        do {
          puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar7 + *param_1 + local_70);
          iVar4 = iVar23;
          if (uVar8 != 0) {
            iVar4 = 0;
            do {
              *puVar32 = uVar21;
              puVar32[1] = uVar27;
              puVar32[2] = uVar30;
              puVar32[3] = 0xff;
              puVar32 = puVar32 + 4;
              iVar4 = iVar4 + -1;
            } while (-uVar8 != iVar4);
            iVar4 = iVar23 - iVar4;
          }
          if (iVar23 - uVar31 < 0xfffffffd) {
            lVar17 = 0;
            do {
              puVar32[lVar17 * 4] = uVar21;
              puVar32[lVar17 * 4 + 1] = uVar27;
              puVar32[lVar17 * 4 + 2] = uVar30;
              puVar32[lVar17 * 4 + 3] = 0xff;
              puVar32[lVar17 * 4 + 4] = uVar21;
              puVar32[lVar17 * 4 + 5] = uVar27;
              puVar32[lVar17 * 4 + 6] = uVar30;
              puVar32[lVar17 * 4 + 7] = 0xff;
              puVar32[lVar17 * 4 + 8] = uVar21;
              puVar32[lVar17 * 4 + 9] = uVar27;
              puVar32[lVar17 * 4 + 10] = uVar30;
              puVar32[lVar17 * 4 + 0xb] = 0xff;
              puVar32[lVar17 * 4 + 0xc] = uVar21;
              puVar32[lVar17 * 4 + 0xd] = uVar27;
              puVar32[lVar17 * 4 + 0xe] = uVar30;
              puVar32[lVar17 * 4 + 0xf] = 0xff;
              lVar17 = lVar17 + 4;
            } while (uVar31 - iVar4 != (int)lVar17);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar29);
        uVar7 = 0;
        if (0 < (int)(uVar16 - 1)) {
          uVar7 = (ulong)(uVar16 - 1);
        }
        local_3c = *(uint *)(param_1 + 1);
        lVar17 = *param_1;
        uVar29 = *(uint *)((long)param_1 + 0xc);
        if ((int)uVar18 < (int)*(uint *)((long)param_1 + 0xc)) {
          uVar29 = uVar18;
        }
      }
      else {
        uVar7 = 0;
        if (0 < (int)(uVar16 - 1)) {
          uVar7 = (ulong)(uVar16 - 1);
        }
      }
      if ((int)uVar16 < (int)local_3c) {
        local_3c = uVar16;
      }
      if (((int)local_74 < (int)uVar29) && (lVar17 != 0)) {
        iVar23 = (int)uVar7;
        if (local_3c - iVar23 != 0 && iVar23 <= (int)local_3c) {
          uVar8 = local_3c - iVar23 & 3;
          do {
            puVar32 = (undefined1 *)(*(uint *)(param_1 + 2) * uVar20 + *param_1 + uVar7 * 4);
            uVar14 = uVar7;
            if (uVar8 != 0) {
              iVar4 = 0;
              do {
                *puVar32 = uVar21;
                puVar32[1] = uVar27;
                puVar32[2] = uVar30;
                puVar32[3] = 0xff;
                puVar32 = puVar32 + 4;
                iVar4 = iVar4 + -1;
              } while (-uVar8 != iVar4);
              uVar14 = (ulong)(uint)(iVar23 - iVar4);
            }
            if (iVar23 - local_3c < 0xfffffffd) {
              lVar17 = 0;
              do {
                puVar32[lVar17 * 4] = uVar21;
                puVar32[lVar17 * 4 + 1] = uVar27;
                puVar32[lVar17 * 4 + 2] = uVar30;
                puVar32[lVar17 * 4 + 3] = 0xff;
                puVar32[lVar17 * 4 + 4] = uVar21;
                puVar32[lVar17 * 4 + 5] = uVar27;
                puVar32[lVar17 * 4 + 6] = uVar30;
                puVar32[lVar17 * 4 + 7] = 0xff;
                puVar32[lVar17 * 4 + 8] = uVar21;
                puVar32[lVar17 * 4 + 9] = uVar27;
                puVar32[lVar17 * 4 + 10] = uVar30;
                puVar32[lVar17 * 4 + 0xb] = 0xff;
                puVar32[lVar17 * 4 + 0xc] = uVar21;
                puVar32[lVar17 * 4 + 0xd] = uVar27;
                puVar32[lVar17 * 4 + 0xe] = uVar30;
                puVar32[lVar17 * 4 + 0xf] = 0xff;
                lVar17 = lVar17 + 4;
              } while (local_3c - (int)uVar14 != (int)lVar17);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar29);
        }
      }
    }
    else {
      uVar15 = 0x9a9a9a;
      if (cVar25 != '\0') {
        uVar15 = 0x286dc4;
      }
      if ((0 < (int)uVar28) && (0 < (int)uVar31)) goto LAB_1000b7ad;
    }
    local_90 = uVar34;
    local_80 = uVar6;
    if ((((ushort)((unkuint10)Var37 >> 0x40) & 1) != 0) &&
       (*(code **)(param_2 + 0x12) != (code *)0x0)) {
      (**(code **)(param_2 + 0x12))(*(undefined8 *)(param_2 + 0x14));
    }
    iVar23 = 0x202020;
    if ((*(byte *)(local_60 + 1) & 1) != 0) {
      iVar23 = local_60[9];
    }
    puVar33 = &DAT_1000c924;
    if (*(undefined **)(local_60 + 2) != (undefined *)0x0) {
      puVar33 = *(undefined **)(local_60 + 2);
    }
    uVar34 = local_a0 + (ulong)((int)local_58 + 10) + 0x600000000;
    iVar4 = 0xc;
    if (0xc < (int)local_80) {
      iVar4 = (int)local_80;
    }
    iVar9 = 0x14;
    if (0x14 < (int)local_90) {
      iVar9 = (int)local_90;
    }
    uVar6 = CONCAT44(iVar4 + -0xc,iVar9 + -0x14);
    iVar9 = local_60[0xb] + (uint)(local_60[0xb] == 0);
    iVar4 = 1;
LAB_1000beef:
    recovered_1000c0e0(local_38,uVar34,uVar6,(long)puVar33,iVar23,iVar9,iVar4);
    break;
  case 5:
    iVar23 = 1;
    goto LAB_1000b530;
  case 6:
    iVar23 = 0;
LAB_1000b530:
    recovered_1000c450(param_1,(long)param_2,param_3,param_4,iVar23);
    return;
  case 7:
    if ((*(long *)(param_2 + 4) != 0) && (param_2[6] != 0)) {
      local_98 = local_98 | uVar16;
      local_48 = CONCAT44(PF_PART4(local_48, 4),uVar8 + uVar16);
      local_70 = CONCAT44(PF_PART4(local_70, 4),iVar23 + uVar36);
      lVar17 = 0;
      uVar34 = 0;
      do {
        lVar2 = *(long *)(local_60 + 4);
        uVar6 = recovered_1000a6a0((int *)(lVar2 + lVar17),local_98);
        uVar7 = (ulong)uVar16;
        if ((int)uVar6 <= (int)uVar16) {
          uVar7 = uVar6 & 0xffffffff;
        }
        iVar23 = local_60[8];
        uVar14 = local_50 & 0xffffffff;
        uVar8 = (uint)(uVar6 >> 0x20);
        if ((int)uVar8 <= (int)local_50) {
          uVar14 = (ulong)uVar8;
        }
        uVar8 = (uint)local_58;
        uVar6 = uVar20;
        uVar19 = (ulong)uVar16;
        uVar24 = local_50;
        if (iVar23 != 3) {
          if (iVar23 == 2) {
            uVar8 = (int)local_48 - (int)uVar7;
            uVar6 = (ulong)(uint)((int)local_70 - (int)uVar14);
          }
          else if (iVar23 == 1) {
            uVar8 = (int)(uVar16 - (int)uVar7) / 2 + uVar8;
            uVar6 = (ulong)(((int)local_50 - (int)uVar14) / 2 + uVar36);
          }
          uVar19 = uVar7;
          uVar24 = uVar14;
        }
        recovered_1000ae50(local_38,(int *)(lVar2 + lVar17),(ulong)uVar8 | uVar6 << 0x20,
                           uVar19 | uVar24 << 0x20);
        uVar34 = uVar34 + 1;
        lVar17 = lVar17 + 0x58;
      } while (uVar34 < (uint)local_60[6]);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006978
#undef DAT_1000c924
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006978
#undef local_ac
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_84
#undef local_80
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_b8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
#define local_5f8 (*(int (*)[212])(frame + 24))
#define local_2a8 (*(undefined1 (*)[40])(frame + 872))
#define local_280 (*(uint *)(frame + 912))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000bf30(undefined8 *param_1)

{
  unsigned char frame[1584] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;

  uVar2 = 0;
  if ((param_1 != (undefined8 *)0x0) && (param_1[10] != 0)) {
    recovered_10001c90(local_5f8,0,0x350);
    piVar4 = (int *)*param_1;
    if ((int *)*param_1 == (int *)0x0) {
      piVar4 = local_5f8;
    }
    if ((*piVar4 == 0) && (iVar1 = recovered_10008670(piVar4,param_1 + 1), iVar1 == 0)) {
      return 0;
    }
    uVar2 = recovered_10009320(piVar4,local_2a8);
    if (((int)uVar2 != 0) && ((local_280 & 0x11) == 0)) {
      uVar3 = 0;
      while( true ) {
        recovered_10001c90(local_2a8,0,0x278);
        recovered_10009320(piVar4,local_2a8);
        if (((((code *)param_1[0xb] != (code *)0x0) &&
             (iVar1 = (*(code *)param_1[0xb])(piVar4,local_2a8,param_1[0xc]), iVar1 == 0)) ||
            (iVar1 = (*(code *)param_1[10])(piVar4,param_1[0xc]), iVar1 == 0)) ||
           (uVar3 = uVar3 + 1, *(int *)(param_1 + 0xd) - 1U < uVar3)) break;
        iVar1 = *(int *)((long)param_1 + 0x6c) + (uint)(*(int *)((long)param_1 + 0x6c) == 0);
        do {
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_0000689c)();
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar2 = recovered_10009320(piVar4,local_2a8);
        if (((int)uVar2 == 0) || ((local_280 & 0x11) != 0)) break;
      }
    }
    recovered_10009960(piVar4);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c
#undef local_5f8
#undef local_2a8
#undef local_280

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_00006978
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
#undef _DAT_00006978
#define _DAT_00006978 (*(uint *)(0x6978U))
#define local_58 (*(long *)(frame + 24))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(ulong *)(frame + 48))
#define local_38 (*(ulong *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c0e0(long *param_1,ulong param_2,ulong param_3,long param_4,int param_5,
                       undefined4 param_6,int param_7)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;

  recovered_10001c90(&local_58,0,0x18);
  if (param_1 == (long *)0x0) {
    return;
  }
  local_38 = param_3 >> 0x20;
  iVar15 = (int)param_3;
  if (((int)(param_3 >> 0x20) < 1 || (iVar15 < 1 || param_4 == 0)) || *param_1 == 0) {
    return;
  }
  if (_DAT_00006800 != 0x50414d57) {
    return;
  }
  if (_DAT_00006804 == 0) {
    return;
  }
  if (_DAT_00006808 < 0xc) {
    return;
  }
  if (_DAT_00006808 < 0x17c) {
    return;
  }
  if ((code *)(ulong)_DAT_00006978 == (code *)0x0) {
    return;
  }
  iVar3 = (*(code *)(ulong)_DAT_00006978)(param_4,0xffffffff,param_6,param_5 << 8 | 0xff,&local_58);
  iVar2 = (int)local_38;
  if (iVar3 == 0) {
    return;
  }
  if (local_58 == 0) {
    return;
  }
  local_40 = param_2 >> 0x20;
  iVar3 = (int)param_2;
  if (param_7 == 2) {
    uVar6 = param_2 & 0xffffffff;
    if ((int)local_4c < iVar15) {
      uVar6 = (ulong)((iVar15 + iVar3) - local_4c);
    }
  }
  else {
    uVar6 = param_2 & 0xffffffff;
    if (param_7 == 1) {
      uVar6 = param_2 & 0xffffffff;
      if (iVar15 - local_4c != 0 && (int)local_4c <= iVar15) {
        uVar6 = (ulong)(uint)((int)(iVar15 - local_4c) / 2 + iVar3);
      }
    }
  }
  iVar4 = (int)(param_2 >> 0x20);
  if (iVar2 - local_48 != 0 && (int)local_48 <= iVar2) {
    if (local_48 == 0) goto LAB_1000c3f3;
    local_40 = (ulong)(uint)((int)(iVar2 - local_48) / 2 + iVar4);
  }
  local_38 = (ulong)(uint)(iVar2 + iVar4);
  uVar9 = 0;
  do {
    uVar10 = (int)local_40 + (int)uVar9;
    if (((iVar4 <= (int)uVar10) && (-1 < (int)uVar10 && (int)uVar10 < iVar2 + iVar4)) &&
       (local_4c != 0 && (int)uVar10 < *(int *)((long)param_1 + 0xc))) {
      uVar16 = 0;
      lVar5 = local_58 + 1;
      do {
        iVar11 = (int)(uVar6 + uVar16);
        if (((iVar3 <= iVar11) && (-1 < iVar11 && iVar11 < iVar15 + iVar3)) &&
           ((iVar11 < (int)param_1[1] &&
            ((*param_1 != 0 && ((int)uVar10 < *(int *)((long)param_1 + 0xc))))))) {
          lVar7 = local_44 * uVar9;
          bVar1 = *(byte *)(lVar5 + 2 + lVar7);
          if (bVar1 != 0) {
            lVar13 = *param_1 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar10;
            uVar14 = uVar6 + uVar16 & 0xffffffff;
            uVar8 = (uint)bVar1;
            if (uVar8 == 0xff) {
              *(undefined1 *)(lVar13 + uVar14 * 4) = *(undefined1 *)(lVar5 + -1 + lVar7);
              *(undefined1 *)(lVar13 + 1 + uVar14 * 4) = *(undefined1 *)(lVar5 + lVar7);
              *(undefined1 *)(lVar13 + 2 + uVar14 * 4) = *(undefined1 *)(lVar5 + 1 + lVar7);
            }
            else {
              uVar12 = uVar8 ^ 0xff;
              *(char *)(lVar13 + uVar14 * 4) =
                   (char)((*(byte *)(lVar5 + -1 + lVar7) * uVar8 +
                           *(byte *)(lVar13 + uVar14 * 4) * uVar12 + 0x7f) / 0xff);
              *(char *)(lVar13 + 1 + uVar14 * 4) =
                   (char)((*(byte *)(lVar5 + lVar7) * uVar8 +
                           *(byte *)(lVar13 + 1 + uVar14 * 4) * uVar12 + 0x7f) / 0xff);
              *(char *)(lVar13 + 2 + uVar14 * 4) =
                   (char)(((uint)*(byte *)(lVar5 + 1 + lVar7) * (uint)bVar1 +
                           *(byte *)(lVar13 + 2 + uVar14 * 4) * uVar12 + 0x7f) / 0xff);
            }
            *(undefined1 *)(lVar13 + 3 + uVar14 * 4) = 0xff;
          }
        }
        uVar16 = uVar16 + 1;
        lVar5 = lVar5 + 4;
      } while (uVar16 < local_4c);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < local_48);
LAB_1000c3f3:
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006850)(local_58);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_00006978
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850
#undef _DAT_00006978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38

#define local_48 (*(uint *)(frame + 24))
#define local_3c (*(char *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c450
 */

void recovered_1000c450(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       )

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;

  iVar14 = 0;
  iVar25 = (int)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  if (iVar25 < 1) {
    iVar25 = 0;
  }
  iVar20 = (int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  if (iVar20 < 1) {
    iVar20 = 0;
  }
  iVar3 = (int)*(undefined8 *)(param_2 + 0x38);
  iVar19 = 0;
  if (0 < iVar3) {
    iVar19 = iVar3;
  }
  iVar21 = (int)*(undefined8 *)(param_2 + 0x40);
  iVar3 = 0;
  if (0 < iVar21) {
    iVar3 = iVar21;
  }
  uVar11 = (int)param_3 + iVar25;
  uVar22 = (int)((ulong)param_3 >> 0x20) + iVar19;
  uVar16 = (int)param_4 - (iVar20 + iVar25);
  uVar18 = (ulong)uVar16;
  if ((int)uVar16 < 1) {
    uVar18 = 0;
  }
  uVar16 = (int)((ulong)param_4 >> 0x20) - (iVar3 + iVar19);
  if ((int)uVar16 < 1) {
    uVar16 = 0;
  }
  uVar9 = *(uint *)(param_2 + 0x18);
  uVar15 = uVar22;
  if (param_5 != 0) {
    uVar15 = uVar11;
  }
  if (1 < uVar9) {
    iVar14 = (uVar9 - 1) * *(int *)(param_2 + 0x1c);
  }
  if (uVar9 != 0 && *(long *)(param_2 + 0x10) != 0) {
    local_48 = (uint)uVar18;
    uVar13 = uVar18 | (ulong)uVar16 << 0x20;
    lVar23 = 0;
    uVar24 = 0;
    iVar25 = 0;
    do {
      local_3c = (char)param_5;
      if (*(int *)(*(long *)(param_2 + 0x10) + lVar23) == 4) {
        iVar25 = iVar25 + 1;
      }
      else {
        uVar6 = recovered_1000a6a0((int *)(*(long *)(param_2 + 0x10) + lVar23),uVar13);
        iVar20 = (int)((ulong)uVar6 >> 0x20);
        if (local_3c != '\0') {
          iVar20 = (int)uVar6;
        }
        iVar14 = iVar14 + iVar20;
        uVar9 = *(uint *)(param_2 + 0x18);
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0x58;
    } while (uVar24 < uVar9);
    if (iVar25 == 0) {
      local_38 = 0;
    }
    else {
      uVar12 = uVar16;
      if (local_3c != '\0') {
        uVar12 = local_48;
      }
      iVar20 = 0;
      if (0 < (int)(uVar12 - iVar14)) {
        iVar20 = uVar12 - iVar14;
      }
      local_38 = iVar20 / iVar25;
    }
    if (uVar9 != 0) {
      uVar12 = local_48;
      uVar9 = local_38;
      if (local_3c != '\0') {
        uVar12 = local_38;
        uVar9 = uVar16;
      }
      lVar23 = 0;
      uVar24 = 0;
      do {
        lVar2 = *(long *)(param_2 + 0x10);
        piVar1 = (int *)(lVar2 + lVar23);
        uVar8 = recovered_1000a6a0(piVar1,uVar13);
        iVar14 = *(int *)(lVar2 + lVar23);
        uVar4 = (uint)(uVar8 >> 0x20);
        uVar17 = (uint)uVar8;
        uVar5 = uVar4;
        if (iVar14 == 4) {
          uVar17 = uVar12;
          uVar5 = uVar9;
        }
        if (local_3c == '\0') {
          iVar25 = *(int *)(param_2 + 0x20);
          uVar7 = (ulong)uVar17;
          if (iVar25 == 3) {
            uVar7 = uVar18;
          }
          if (iVar14 == 4) {
            uVar4 = local_38;
          }
          uVar8 = (ulong)uVar4;
          uVar10 = uVar8 << 0x20 | uVar7;
          if ((iVar25 == 1) && ((int)uVar7 < (int)local_48)) {
            uVar4 = (int)(local_48 - uVar17) / 2 + uVar11;
          }
          else {
            uVar4 = (uVar11 + local_48) - uVar17;
            if ((int)local_48 <= (int)uVar7) {
              uVar4 = uVar11;
            }
            if (iVar25 != 2) {
              uVar4 = uVar11;
            }
          }
          uVar7 = (ulong)uVar15;
        }
        else {
          uVar8 = uVar8 & 0xffffffff;
          if (iVar14 == 4) {
            uVar8 = (ulong)local_38;
          }
          iVar14 = *(int *)(param_2 + 0x20);
          uVar4 = uVar5;
          if (iVar14 == 3) {
            uVar4 = uVar16;
          }
          uVar10 = (ulong)uVar4 << 0x20 | uVar8;
          if ((iVar14 == 1) && ((int)uVar4 < (int)uVar16)) {
            uVar7 = (ulong)((int)(uVar16 - uVar5) / 2 + uVar22);
          }
          else {
            uVar5 = (uVar16 + uVar22) - uVar5;
            if ((int)uVar16 <= (int)uVar4) {
              uVar5 = uVar22;
            }
            uVar7 = (ulong)uVar5;
            if (iVar14 != 2) {
              uVar7 = (ulong)uVar22;
            }
          }
          uVar4 = uVar15;
        }
        uVar15 = (int)uVar8 + *(int *)(param_2 + 0x1c) + uVar15;
        recovered_1000ae50(param_1,piVar1,(ulong)uVar4 | uVar7 << 0x20,uVar10);
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 0x58;
      } while (uVar24 < *(uint *)(param_2 + 0x18));
    }
  }
  return;
}

#undef local_48
#undef local_3c
#undef local_38
/* Native aggregate export adapters. */
PFUIViewABI pf_ui_abi_1000a4a0(PFUIViewABI value,unsigned long long a0,unsigned long long a1) { PFUIViewABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000050; __builtin_memcpy(&in_stack_00000050,(unsigned char *)&value+72,sizeof(in_stack_00000050));undefined8 in_stack_00000058; __builtin_memcpy(&in_stack_00000058,(unsigned char *)&value+80,sizeof(in_stack_00000058));recovered_1000a4a0((void *)&result,(undefined8)a0,(undefined8)a1,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038,in_stack_00000050,in_stack_00000058); return result; }
PFUIViewABI pf_ui_abi_1000a4f0(PFUIViewABI value,unsigned long long a0) { PFUIViewABI result; undefined4 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined4 in_stack_0000000c; __builtin_memcpy(&in_stack_0000000c,(unsigned char *)&value+4,sizeof(in_stack_0000000c));ulong in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));ulong in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));ulong in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined4 in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));ulong in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));ulong in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));ulong in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));ulong in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));ulong in_stack_00000050; __builtin_memcpy(&in_stack_00000050,(unsigned char *)&value+72,sizeof(in_stack_00000050));ulong in_stack_00000058; __builtin_memcpy(&in_stack_00000058,(unsigned char *)&value+80,sizeof(in_stack_00000058));recovered_1000a4f0((void *)&result,(undefined4)a0,in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048,in_stack_00000050,in_stack_00000058); return result; }
PFUIViewABI pf_ui_abi_1000a540(PFUIViewABI value,unsigned long long a0) { PFUIViewABI result; undefined4 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined4 in_stack_0000000c; __builtin_memcpy(&in_stack_0000000c,(unsigned char *)&value+4,sizeof(in_stack_0000000c));ulong in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));ulong in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));ulong in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));ulong in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));undefined4 in_stack_00000034; __builtin_memcpy(&in_stack_00000034,(unsigned char *)&value+44,sizeof(in_stack_00000034));ulong in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));ulong in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));ulong in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));ulong in_stack_00000050; __builtin_memcpy(&in_stack_00000050,(unsigned char *)&value+72,sizeof(in_stack_00000050));ulong in_stack_00000058; __builtin_memcpy(&in_stack_00000058,(unsigned char *)&value+80,sizeof(in_stack_00000058));recovered_1000a540((void *)&result,(undefined4)a0,in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000034,in_stack_00000038,in_stack_00000040,in_stack_00000048,in_stack_00000050,in_stack_00000058); return result; }
PFUIViewABI pf_ui_abi_1000a590(PFUIViewABI value,unsigned long long a0,unsigned long long a1) { PFUIViewABI result; undefined4 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));uint in_stack_0000000c; __builtin_memcpy(&in_stack_0000000c,(unsigned char *)&value+4,sizeof(in_stack_0000000c));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));int in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));int in_stack_0000003c; __builtin_memcpy(&in_stack_0000003c,(unsigned char *)&value+52,sizeof(in_stack_0000003c));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));undefined8 in_stack_00000050; __builtin_memcpy(&in_stack_00000050,(unsigned char *)&value+72,sizeof(in_stack_00000050));undefined8 in_stack_00000058; __builtin_memcpy(&in_stack_00000058,(unsigned char *)&value+80,sizeof(in_stack_00000058));recovered_1000a590((void *)&result,(int)a0,(int)a1,in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038,in_stack_0000003c,in_stack_00000040,in_stack_00000048,in_stack_00000050,in_stack_00000058); return result; }
PFUIViewABI pf_ui_abi_1000a5f0(PFUIViewABI value,unsigned long long a0) { PFUIViewABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));undefined4 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));undefined8 in_stack_00000050; __builtin_memcpy(&in_stack_00000050,(unsigned char *)&value+72,sizeof(in_stack_00000050));undefined8 in_stack_00000058; __builtin_memcpy(&in_stack_00000058,(unsigned char *)&value+80,sizeof(in_stack_00000058));recovered_1000a5f0((void *)&result,(int)a0,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048,in_stack_00000050,in_stack_00000058); return result; }
PFUIViewABI pf_ui_abi_1000a640(PFUIViewABI value,unsigned long long a0) { PFUIViewABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_0000002c; __builtin_memcpy(&in_stack_0000002c,(unsigned char *)&value+36,sizeof(in_stack_0000002c));undefined4 in_stack_00000034; __builtin_memcpy(&in_stack_00000034,(unsigned char *)&value+44,sizeof(in_stack_00000034));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));undefined8 in_stack_00000050; __builtin_memcpy(&in_stack_00000050,(unsigned char *)&value+72,sizeof(in_stack_00000050));undefined8 in_stack_00000058; __builtin_memcpy(&in_stack_00000058,(unsigned char *)&value+80,sizeof(in_stack_00000058));recovered_1000a640((void *)&result,(uint)a0,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_0000002c,in_stack_00000034,in_stack_00000038,in_stack_00000040,in_stack_00000048,in_stack_00000050,in_stack_00000058); return result; }
PFUIWindowABI pf_ui_abi_10008490(PFUIWindowABI value,unsigned long long a0) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined4 in_stack_00000024; __builtin_memcpy(&in_stack_00000024,(unsigned char *)&value+28,sizeof(in_stack_00000024));undefined8 in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_10008490((void *)&result,(uint)a0,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000024,in_stack_00000028,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
PFUIWindowABI pf_ui_abi_100084e0(PFUIWindowABI value,unsigned long long a0) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined4 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000028; __builtin_memcpy(&in_stack_00000028,(unsigned char *)&value+32,sizeof(in_stack_00000028));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_100084e0((void *)&result,(uint)a0,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
PFUIWindowABI pf_ui_abi_10008530(PFUIWindowABI value,unsigned long long a0,unsigned long long a1) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_10008530((void *)&result,(int)a0,(uint)a1,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
PFUIWindowABI pf_ui_abi_10008590(PFUIWindowABI value) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_10008590((void *)&result,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
PFUIWindowABI pf_ui_abi_100085c0(PFUIWindowABI value) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_100085c0((void *)&result,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
PFUIWindowABI pf_ui_abi_100085f0(PFUIWindowABI value,unsigned long long a0) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_100085f0((void *)&result,(uint)a0,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
PFUIWindowABI pf_ui_abi_10008630(PFUIWindowABI value,unsigned long long a0) { PFUIWindowABI result; undefined8 in_stack_00000008; __builtin_memcpy(&in_stack_00000008,(unsigned char *)&value+0,sizeof(in_stack_00000008));undefined8 in_stack_00000010; __builtin_memcpy(&in_stack_00000010,(unsigned char *)&value+8,sizeof(in_stack_00000010));undefined8 in_stack_00000018; __builtin_memcpy(&in_stack_00000018,(unsigned char *)&value+16,sizeof(in_stack_00000018));undefined8 in_stack_00000020; __builtin_memcpy(&in_stack_00000020,(unsigned char *)&value+24,sizeof(in_stack_00000020));undefined8 in_stack_00000030; __builtin_memcpy(&in_stack_00000030,(unsigned char *)&value+40,sizeof(in_stack_00000030));undefined8 in_stack_00000038; __builtin_memcpy(&in_stack_00000038,(unsigned char *)&value+48,sizeof(in_stack_00000038));undefined8 in_stack_00000040; __builtin_memcpy(&in_stack_00000040,(unsigned char *)&value+56,sizeof(in_stack_00000040));undefined8 in_stack_00000048; __builtin_memcpy(&in_stack_00000048,(unsigned char *)&value+64,sizeof(in_stack_00000048));recovered_10008630((void *)&result,(uint)a0,in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000030,in_stack_00000038,in_stack_00000040,in_stack_00000048); return result; }
