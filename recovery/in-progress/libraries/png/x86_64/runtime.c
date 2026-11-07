/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb14U)))
void recovered_100004c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001f0f0 = 0;
  recovered_100004e0();
  return;
}

#undef DAT_1001f0f0

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
#undef DAT_1001a0f0
#define DAT_1001a0f0 (*(char *)(((uintptr_t)pf_module_state + 0xb14U)))
#undef DAT_1001a0f8
#define DAT_1001a0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1cU)))
#undef DAT_1001a100
#define DAT_1001a100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb24U)))
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
  if (DAT_1001a0f0 != '\0') {
    return;
  }
  DAT_1001a0f8 = 0;
  DAT_1001a100 = 0;
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
      if (DAT_1001a0f8 != 0) goto LAB_100008c5;
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
      if (DAT_1001a0f8 == 0) {
        puVar4 = &DAT_1001a0f8;
      }
      *puVar4 = 0x300000;
      if (DAT_1001a100 == 0) {
        DAT_1001a0f0 = 1;
        DAT_1001a100 = 0x300000;
        return;
      }
      DAT_1001a0f0 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_1001a0f8 == 0) {
      puVar4 = &DAT_1001a0f8;
    }
    *puVar4 = 0x300000;
    if (DAT_1001a100 == 0) {
      DAT_1001a100 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_1001a0f8 == 0) {
        puVar4 = &DAT_1001a0f8;
      }
      *puVar4 = 0x2000000;
      if (DAT_1001a100 == 0) {
        DAT_1001a0f0 = 1;
        DAT_1001a100 = 0x2000000;
        return;
      }
      DAT_1001a0f0 = 1;
      return;
    }
  }
LAB_100008c5:
  if (DAT_1001a100 == 0) {
    DAT_1001a100 = DAT_1001a0f8;
    DAT_1001a0f0 = 1;
    return;
  }
  DAT_1001a0f0 = 1;
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
#undef DAT_1001a0f0
#undef DAT_1001a0f8
#undef DAT_1001a100
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

#undef DAT_1001a0f8
#define DAT_1001a0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb1cU)))
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
  for (plVar1 = DAT_1001a0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_1001a0f8

#undef DAT_1001a0f8
#define DAT_1001a0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb1cU)))
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
  for (plVar2 = DAT_1001a0f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1001a0f8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb1cU)))
ulong recovered_100009e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004e0();
  uVar3 = 0;
  for (plVar1 = DAT_1001f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1001f0f8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb1cU)))
long recovered_10000a20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_100004e0();
  lVar2 = 0;
  for (plVar1 = DAT_1001f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1001f0f8

#undef DAT_1001a0f8
#define DAT_1001a0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb1cU)))
#undef DAT_1001a100
#define DAT_1001a100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb24U)))
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
  puVar3 = DAT_1001a100;
  if (DAT_1001a100 == (ulong *)0x0) {
    puVar3 = DAT_1001a0f8;
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
        DAT_1001a100 = DAT_1001a0f8;
        if (puVar3 != (ulong *)0x0) {
          DAT_1001a100 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_1001a0f8;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1001a0f8
#undef DAT_1001a100

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10000ea0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000ef0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10000f40(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f90
 */

void * recovered_10000f90(void *param_1,void *param_2,ulong param_3)

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

  pvVar5 = param_1;
  if (param_3 < 0x10) {
LAB_10000faf:
    if (param_3 == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_1000119e:
      puVar7 = param_1;
    }
    else {
      puVar7 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      uVar6 = param_3 - 1;
      uVar8 = (undefined7)((ulong)in_R8 >> 8);
      in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
      if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
        param_2 = (void *)((long)param_2 + 1);
        param_3 = uVar6;
      }
      else {
        puVar7 = (undefined8 *)((long)param_1 + 2);
        *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
        uVar6 = param_3 - 2;
        in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
        if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
          param_2 = (void *)((long)param_2 + 2);
          param_3 = uVar6;
        }
        else {
          puVar7 = (undefined8 *)((long)param_1 + 3);
          *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
          uVar6 = param_3 - 3;
          in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
          if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
            param_2 = (void *)((long)param_2 + 3);
            param_3 = uVar6;
          }
          else {
            puVar7 = (undefined8 *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
            uVar6 = param_3 - 4;
            in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
            if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
              param_2 = (void *)((long)param_2 + 4);
              param_3 = uVar6;
            }
            else {
              puVar7 = (undefined8 *)((long)param_1 + 5);
              *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
              uVar6 = param_3 - 5;
              in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
              if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                param_2 = (void *)((long)param_2 + 5);
                param_3 = uVar6;
              }
              else {
                puVar7 = (undefined8 *)((long)param_1 + 6);
                *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                uVar6 = param_3 - 6;
                in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                  param_2 = (void *)((long)param_2 + 6);
                  param_3 = uVar6;
                }
                else {
                  puVar7 = (undefined8 *)((long)param_1 + 7);
                  *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                  uVar6 = param_3 - 7;
                  in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                  if (((ulong)puVar7 & 7) != 0 && uVar6 != 0) {
                    puVar1 = (undefined1 *)((long)param_2 + 7);
                    param_2 = (void *)((long)param_2 + 8);
                    *(undefined1 *)((long)param_1 + 7) = *puVar1;
                    param_3 = param_3 - 8;
                    param_1 = (undefined8 *)((long)param_1 + 8);
                    goto LAB_1000119e;
                  }
                  param_2 = (void *)((long)param_2 + 7);
                  param_3 = uVar6;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      in_R8 = param_2;
    }
    else {
      uVar6 = param_3 - 0x20;
      uVar9 = param_3;
      if ((uVar6 & 0x20) == 0) {
        *puVar7 = *(undefined8 *)param_2;
        puVar7[1] = *(undefined8 *)((long)param_2 + 8);
        puVar7[2] = *(undefined8 *)((long)param_2 + 0x10);
        puVar7[3] = *(undefined8 *)((long)param_2 + 0x18);
        puVar7 = puVar7 + 4;
        param_2 = (void *)((long)param_2 + 0x20);
        uVar9 = uVar6;
        in_R8 = param_2;
      }
      param_3 = uVar6;
      if (0x1f < uVar6) {
        do {
          *puVar7 = *(undefined8 *)param_2;
          puVar7[1] = *(undefined8 *)((long)param_2 + 8);
          puVar7[2] = *(undefined8 *)((long)param_2 + 0x10);
          puVar7[3] = *(undefined8 *)((long)param_2 + 0x18);
          puVar7[4] = *(undefined8 *)((long)param_2 + 0x20);
          puVar7[5] = *(undefined8 *)((long)param_2 + 0x28);
          puVar7[6] = *(undefined8 *)((long)param_2 + 0x30);
          puVar7[7] = *(undefined8 *)((long)param_2 + 0x38);
          puVar7 = puVar7 + 8;
          param_2 = (void *)((long)param_2 + 0x40);
          uVar9 = uVar9 - 0x40;
          param_3 = uVar9;
          in_R8 = param_2;
        } while (0x1f < uVar9);
      }
    }
    if (param_3 < 8) {
      param_2 = in_R8;
      param_1 = puVar7;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar7 - (long)in_R8))) {
        uVar6 = (param_3 - 8 >> 3) + 1;
        uVar9 = uVar6 & 0xfffffffffffffffc;
        param_2 = in_R8 + uVar9;
        param_1 = puVar7 + uVar9;
        param_3 = param_3 + uVar9 * -8;
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
        in_R8 = param_2;
        puVar7 = param_1;
        if (uVar6 == uVar9) goto LAB_10000faf;
      }
      do {
        param_2 = in_R8 + 1;
        *puVar7 = *in_R8;
        param_1 = puVar7 + 1;
        param_3 = param_3 - 8;
        in_R8 = param_2;
        puVar7 = param_1;
      } while (7 < param_3);
    }
    goto LAB_10000faf;
  }
  uVar6 = param_3;
  if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
    if (param_3 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)param_2 + uVar6))[1];
        puVar7 = (undefined8 *)((long)param_2 + uVar6 + 0x10);
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        *(undefined8 *)((long)param_1 + uVar6) = *(undefined8 *)((long)param_2 + uVar6);
        ((undefined8 *)((long)param_1 + uVar6))[1] = uVar2;
        puVar7 = (undefined8 *)((long)param_1 + uVar6 + 0x10);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar9 != uVar6);
      if (param_3 == uVar9) {
        return pvVar5;
      }
      if ((param_3 & 0x1c) == 0) {
        param_2 = (void *)((long)param_2 + uVar9);
        param_1 = (void *)((long)param_1 + uVar9);
        uVar6 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_100011c0;
      }
    }
    uVar10 = param_3 & 0xfffffffffffffffc;
    uVar6 = (ulong)((uint)param_3 & 3);
    do {
      *(undefined4 *)((long)param_1 + uVar9) = *(undefined4 *)((long)param_2 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    param_1 = (undefined8 *)((long)param_1 + uVar10);
    param_2 = (undefined8 *)((long)param_2 + uVar10);
    if (param_3 == uVar10) {
      return pvVar5;
    }
  }
LAB_100011c0:
  uVar9 = uVar6 - 1;
  if ((uVar6 & 7) != 0) {
    uVar10 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar10) = *(undefined1 *)((long)param_2 + uVar10);
      uVar10 = uVar10 + 1;
    } while ((uVar6 & 7) != uVar10);
    uVar6 = uVar6 - uVar10;
    param_1 = (void *)((long)param_1 + uVar10);
    param_2 = (void *)((long)param_2 + uVar10);
  }
  if (6 < uVar9) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar9) = *(undefined1 *)((long)param_2 + uVar9);
      *(undefined1 *)((long)param_1 + uVar9 + 1) = *(undefined1 *)((long)param_2 + uVar9 + 1);
      *(undefined1 *)((long)param_1 + uVar9 + 2) = *(undefined1 *)((long)param_2 + uVar9 + 2);
      *(undefined1 *)((long)param_1 + uVar9 + 3) = *(undefined1 *)((long)param_2 + uVar9 + 3);
      *(undefined1 *)((long)param_1 + uVar9 + 4) = *(undefined1 *)((long)param_2 + uVar9 + 4);
      *(undefined1 *)((long)param_1 + uVar9 + 5) = *(undefined1 *)((long)param_2 + uVar9 + 5);
      *(undefined1 *)((long)param_1 + uVar9 + 6) = *(undefined1 *)((long)param_2 + uVar9 + 6);
      *(undefined1 *)((long)param_1 + uVar9 + 7) = *(undefined1 *)((long)param_2 + uVar9 + 7);
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
  }
  return pvVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d0
 */

void * recovered_100013d0(void *param_1,void *param_2,ulong param_3)

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

  pvVar6 = param_1;
  if (param_3 == 0 || param_1 == param_2) {
    return pvVar6;
  }
  if ((param_1 < param_2) || (pvVar7 = (void *)((long)param_2 + param_3), pvVar7 <= param_1)) {
    if ((0xf < param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
      if (((ulong)param_1 & 7) == 0) {
LAB_1000176a:
        puVar8 = param_1;
      }
      else {
        puVar8 = (undefined8 *)((long)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar11 = param_3 - 1;
        uVar14 = (undefined7)((ulong)in_R8 >> 8);
        in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
          param_2 = (void *)((long)param_2 + 1);
          param_3 = uVar11;
        }
        else {
          puVar8 = (undefined8 *)((long)param_1 + 2);
          *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
          uVar11 = param_3 - 2;
          in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
            param_2 = (void *)((long)param_2 + 2);
            param_3 = uVar11;
          }
          else {
            puVar8 = (undefined8 *)((long)param_1 + 3);
            *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
            uVar11 = param_3 - 3;
            in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
              param_2 = (void *)((long)param_2 + 3);
              param_3 = uVar11;
            }
            else {
              puVar8 = (undefined8 *)((long)param_1 + 4);
              *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
              uVar11 = param_3 - 4;
              in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                param_2 = (void *)((long)param_2 + 4);
                param_3 = uVar11;
              }
              else {
                puVar8 = (undefined8 *)((long)param_1 + 5);
                *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
                uVar11 = param_3 - 5;
                in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                  param_2 = (void *)((long)param_2 + 5);
                  param_3 = uVar11;
                }
                else {
                  puVar8 = (undefined8 *)((long)param_1 + 6);
                  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
                  uVar11 = param_3 - 6;
                  in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                    param_2 = (void *)((long)param_2 + 6);
                    param_3 = uVar11;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)param_1 + 7);
                    *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
                    uVar11 = param_3 - 7;
                    in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar11 != 0) {
                      puVar1 = (undefined1 *)((long)param_2 + 7);
                      param_2 = (void *)((long)param_2 + 8);
                      *(undefined1 *)((long)param_1 + 7) = *puVar1;
                      param_3 = param_3 - 8;
                      param_1 = (undefined8 *)((long)param_1 + 8);
                      goto LAB_1000176a;
                    }
                    param_2 = (void *)((long)param_2 + 7);
                    param_3 = uVar11;
                  }
                }
              }
            }
          }
        }
      }
      if (param_3 < 0x20) {
        in_R8 = param_2;
      }
      else {
        uVar11 = param_3 - 0x20;
        uVar16 = param_3;
        if ((uVar11 & 0x20) == 0) {
          *puVar8 = *(undefined8 *)param_2;
          puVar8[1] = *(undefined8 *)((long)param_2 + 8);
          puVar8[2] = *(undefined8 *)((long)param_2 + 0x10);
          puVar8[3] = *(undefined8 *)((long)param_2 + 0x18);
          puVar8 = puVar8 + 4;
          param_2 = (void *)((long)param_2 + 0x20);
          uVar16 = uVar11;
          in_R8 = param_2;
        }
        param_3 = uVar11;
        if (0x1f < uVar11) {
          param_3 = uVar16;
          do {
            *puVar8 = *(undefined8 *)param_2;
            puVar8[1] = *(undefined8 *)((long)param_2 + 8);
            puVar8[2] = *(undefined8 *)((long)param_2 + 0x10);
            puVar8[3] = *(undefined8 *)((long)param_2 + 0x18);
            puVar8[4] = *(undefined8 *)((long)param_2 + 0x20);
            puVar8[5] = *(undefined8 *)((long)param_2 + 0x28);
            puVar8[6] = *(undefined8 *)((long)param_2 + 0x30);
            puVar8[7] = *(undefined8 *)((long)param_2 + 0x38);
            puVar8 = puVar8 + 8;
            param_2 = (void *)((long)param_2 + 0x40);
            param_3 = param_3 - 0x40;
            in_R8 = param_2;
          } while (0x1f < param_3);
        }
      }
      if (param_3 < 8) {
        param_2 = in_R8;
        param_1 = puVar8;
      }
      else {
        if ((0x27 < param_3 - 8) && (0x1f < (ulong)((long)puVar8 - (long)in_R8))) {
          uVar11 = (param_3 - 8 >> 3) + 1;
          uVar16 = uVar11 & 0xfffffffffffffffc;
          param_2 = in_R8 + uVar16;
          param_1 = puVar8 + uVar16;
          param_3 = param_3 + uVar16 * -8;
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
          in_R8 = param_2;
          puVar8 = param_1;
          if (uVar11 == uVar16) goto LAB_100019c8;
        }
        do {
          uVar3 = *in_R8;
          in_R8 = in_R8 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          param_3 = param_3 - 8;
          param_2 = in_R8;
          param_1 = puVar8;
        } while (7 < param_3);
      }
LAB_100019c8:
      if (param_3 == 0) {
        return pvVar6;
      }
    }
    uVar11 = param_3;
    if ((3 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
      if (param_3 < 0x20) {
        uVar16 = 0;
      }
      else {
        uVar16 = param_3 & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          uVar3 = ((undefined8 *)((long)param_2 + uVar11))[1];
          puVar8 = (undefined8 *)((long)param_2 + uVar11 + 0x10);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          *(undefined8 *)((long)param_1 + uVar11) = *(undefined8 *)((long)param_2 + uVar11);
          ((undefined8 *)((long)param_1 + uVar11))[1] = uVar3;
          puVar8 = (undefined8 *)((long)param_1 + uVar11 + 0x10);
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
          uVar11 = uVar11 + 0x20;
        } while (uVar16 != uVar11);
        if (param_3 == uVar16) {
          return pvVar6;
        }
        if ((param_3 & 0x1c) == 0) {
          param_2 = (void *)((long)param_2 + uVar16);
          param_1 = (void *)((long)param_1 + uVar16);
          uVar11 = (ulong)((uint)param_3 & 0x1f);
          goto LAB_1000178c;
        }
      }
      uVar12 = param_3 & 0xfffffffffffffffc;
      uVar11 = (ulong)((uint)param_3 & 3);
      do {
        *(undefined4 *)((long)param_1 + uVar16) = *(undefined4 *)((long)param_2 + uVar16);
        uVar16 = uVar16 + 4;
      } while (uVar12 != uVar16);
      param_1 = (undefined8 *)((long)param_1 + uVar12);
      param_2 = (undefined8 *)((long)param_2 + uVar12);
      if (param_3 == uVar12) {
        return pvVar6;
      }
    }
LAB_1000178c:
    uVar16 = uVar11 - 1;
    if ((uVar11 & 7) != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((long)param_1 + uVar12) = *(undefined1 *)((long)param_2 + uVar12);
        uVar12 = uVar12 + 1;
      } while ((uVar11 & 7) != uVar12);
      uVar11 = uVar11 - uVar12;
      param_1 = (void *)((long)param_1 + uVar12);
      param_2 = (void *)((long)param_2 + uVar12);
    }
    if (uVar16 < 7) {
      return pvVar6;
    }
    uVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + uVar16) = *(undefined1 *)((long)param_2 + uVar16);
      *(undefined1 *)((long)param_1 + uVar16 + 1) = *(undefined1 *)((long)param_2 + uVar16 + 1);
      *(undefined1 *)((long)param_1 + uVar16 + 2) = *(undefined1 *)((long)param_2 + uVar16 + 2);
      *(undefined1 *)((long)param_1 + uVar16 + 3) = *(undefined1 *)((long)param_2 + uVar16 + 3);
      *(undefined1 *)((long)param_1 + uVar16 + 4) = *(undefined1 *)((long)param_2 + uVar16 + 4);
      *(undefined1 *)((long)param_1 + uVar16 + 5) = *(undefined1 *)((long)param_2 + uVar16 + 5);
      *(undefined1 *)((long)param_1 + uVar16 + 6) = *(undefined1 *)((long)param_2 + uVar16 + 6);
      *(undefined1 *)((long)param_1 + uVar16 + 7) = *(undefined1 *)((long)param_2 + uVar16 + 7);
      uVar16 = uVar16 + 8;
    } while (uVar11 != uVar16);
    return pvVar6;
  }
  uVar11 = (long)param_1 + param_3;
  if ((0xf < param_3) && ((((uint)pvVar7 ^ (uint)uVar11) & 7) == 0)) {
    if ((uVar11 & 7) == 0) {
LAB_1000155e:
      uVar16 = uVar11;
    }
    else {
      uVar16 = uVar11 - 1;
      *(undefined1 *)(uVar11 - 1) = *(undefined1 *)((long)pvVar7 - 1);
      uVar12 = param_3 - 1;
      uVar14 = (undefined7)(in_R9 >> 8);
      in_R9 = CONCAT71(uVar14,uVar12 == 0);
      uVar17 = (undefined7)((ulong)in_R10 >> 8);
      bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
      in_R10 = (void *)CONCAT71(uVar17,bVar15);
      if (bVar15) {
        pvVar7 = (void *)((long)pvVar7 - 1);
        param_3 = uVar12;
      }
      else {
        uVar16 = uVar11 - 2;
        *(undefined1 *)(uVar11 - 2) = *(undefined1 *)((long)pvVar7 - 2);
        uVar12 = param_3 - 2;
        in_R9 = CONCAT71(uVar14,uVar12 == 0);
        bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
        in_R10 = (void *)CONCAT71(uVar17,bVar15);
        if (bVar15) {
          pvVar7 = (void *)((long)pvVar7 - 2);
          param_3 = uVar12;
        }
        else {
          uVar16 = uVar11 - 3;
          *(undefined1 *)(uVar11 - 3) = *(undefined1 *)((long)pvVar7 - 3);
          uVar12 = param_3 - 3;
          in_R9 = CONCAT71(uVar14,uVar12 == 0);
          bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
          in_R10 = (void *)CONCAT71(uVar17,bVar15);
          if (bVar15) {
            pvVar7 = (void *)((long)pvVar7 - 3);
            param_3 = uVar12;
          }
          else {
            uVar16 = uVar11 - 4;
            *(undefined1 *)(uVar11 - 4) = *(undefined1 *)((long)pvVar7 - 4);
            uVar12 = param_3 - 4;
            in_R9 = CONCAT71(uVar14,uVar12 == 0);
            bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
            in_R10 = (void *)CONCAT71(uVar17,bVar15);
            if (bVar15) {
              pvVar7 = (void *)((long)pvVar7 - 4);
              param_3 = uVar12;
            }
            else {
              uVar16 = uVar11 - 5;
              *(undefined1 *)(uVar11 - 5) = *(undefined1 *)((long)pvVar7 - 5);
              uVar12 = param_3 - 5;
              in_R9 = CONCAT71(uVar14,uVar12 == 0);
              bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
              in_R10 = (void *)CONCAT71(uVar17,bVar15);
              if (bVar15) {
                pvVar7 = (void *)((long)pvVar7 - 5);
                param_3 = uVar12;
              }
              else {
                uVar16 = uVar11 - 6;
                *(undefined1 *)(uVar11 - 6) = *(undefined1 *)((long)pvVar7 - 6);
                uVar12 = param_3 - 6;
                in_R9 = CONCAT71(uVar14,uVar12 == 0);
                bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
                in_R10 = (void *)CONCAT71(uVar17,bVar15);
                if (bVar15) {
                  pvVar7 = (void *)((long)pvVar7 - 6);
                  param_3 = uVar12;
                }
                else {
                  uVar16 = uVar11 - 7;
                  *(undefined1 *)(uVar11 - 7) = *(undefined1 *)((long)pvVar7 - 7);
                  bVar15 = param_3 - 7 == 0;
                  in_R9 = CONCAT71(uVar14,bVar15);
                  bVar18 = (uVar16 & 7) == 0;
                  in_R10 = (void *)CONCAT71(uVar17,bVar18 || bVar15);
                  if (!bVar18 && !bVar15) {
                    puVar1 = (undefined1 *)((long)pvVar7 - 8);
                    pvVar7 = (void *)((long)pvVar7 - 8);
                    *(undefined1 *)(uVar11 - 8) = *puVar1;
                    uVar11 = uVar11 - 8;
                    param_3 = param_3 - 8;
                    goto LAB_1000155e;
                  }
                  pvVar7 = (void *)((long)pvVar7 - 7);
                  param_3 = param_3 - 7;
                }
              }
            }
          }
        }
      }
    }
    if (param_3 < 0x20) {
      in_R10 = pvVar7;
    }
    else {
      uVar11 = param_3 - 0x20;
      pvVar9 = pvVar7;
      uVar12 = uVar16;
      uVar13 = param_3;
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
      param_3 = uVar11;
      if (0x1f < uVar11) {
        param_3 = uVar13;
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
          param_3 = param_3 - 0x40;
          pvVar9 = in_R10;
          uVar12 = uVar16;
        } while (0x1f < param_3);
      }
    }
    if (param_3 < 8) {
      pvVar7 = in_R10;
      uVar11 = uVar16;
    }
    else {
      if ((0x27 < param_3 - 8) && (0x1f < (long)in_R10 - uVar16)) {
        uVar12 = (param_3 - 8 >> 3) + 1;
        uVar13 = uVar12 & 0xfffffffffffffffc;
        pvVar7 = (void *)((long)in_R10 + uVar13 * -8);
        uVar11 = uVar16 + uVar13 * -8;
        param_3 = param_3 + uVar13 * -8;
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
        param_3 = param_3 - 8;
        pvVar7 = in_R10;
        uVar11 = uVar16;
      } while (7 < param_3);
    }
LAB_10001b2a:
    if (param_3 == 0) {
      return pvVar6;
    }
  }
  if ((3 < param_3) && (0xf < (long)pvVar7 - uVar11)) {
    if (param_3 < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = param_3 & 0xfffffffffffffff0;
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)pvVar7 + lVar10 + -0x10);
        uVar3 = puVar8[1];
        puVar2 = (undefined8 *)((uVar11 - 0x10) + lVar10);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        lVar10 = lVar10 + -0x10;
      } while (-lVar10 != uVar16);
      if (param_3 == uVar16) {
        return pvVar6;
      }
      if ((param_3 & 0xc) == 0) {
        param_3 = (ulong)((uint)param_3 & 0xf);
        uVar11 = uVar11 - uVar16;
        pvVar7 = (void *)((long)pvVar7 - uVar16);
        goto LAB_10001bef;
      }
    }
    uVar12 = param_3 & 0xfffffffffffffffc;
    lVar10 = -uVar16;
    do {
      *(undefined4 *)((uVar11 - 4) + lVar10) = *(undefined4 *)((long)pvVar7 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while (-lVar10 != uVar12);
    bVar15 = param_3 == uVar12;
    pvVar7 = (void *)((long)pvVar7 - uVar12);
    uVar11 = uVar11 - uVar12;
    param_3 = (ulong)((uint)param_3 & 3);
    if (bVar15) {
      return pvVar6;
    }
  }
LAB_10001bef:
  uVar16 = param_3 - 1;
  if ((param_3 & 7) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)((long)pvVar7 - 1);
      pvVar7 = (void *)((long)pvVar7 - 1);
      *(undefined1 *)(uVar11 - 1) = *puVar1;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
    } while ((param_3 & 7) != uVar12);
    param_3 = param_3 - uVar12;
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
    } while (-lVar10 != param_3);
  }
  return pvVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c90
 */

void * recovered_10001c90(void *param_1,int param_2,ulong param_3)

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

  pvVar3 = param_1;
  uVar8 = (undefined1)param_2;
  if (0xf < param_3) {
    iVar4 = (param_2 & 0xffU) * 0x1010101;
    if (((ulong)param_1 & 7) == 0) {
LAB_10001ddd:
      puVar9 = param_1;
      uVar6 = param_3;
    }
    else {
      *(undefined1 *)param_1 = uVar8;
      puVar9 = (undefined8 *)((long)param_1 + 1U);
      uVar6 = param_3 - 1;
      if (((long)param_1 + 1U & 7) != 0 && param_3 - 1 != 0) {
        *(undefined1 *)((long)param_1 + 1) = uVar8;
        puVar9 = (undefined8 *)((long)param_1 + 2U);
        uVar6 = param_3 - 2;
        if (((long)param_1 + 2U & 7) != 0 && param_3 - 2 != 0) {
          *(undefined1 *)((long)param_1 + 2) = uVar8;
          puVar9 = (undefined8 *)((long)param_1 + 3U);
          uVar6 = param_3 - 3;
          if (((long)param_1 + 3U & 7) != 0 && param_3 - 3 != 0) {
            *(undefined1 *)((long)param_1 + 3) = uVar8;
            puVar9 = (undefined8 *)((long)param_1 + 4U);
            uVar6 = param_3 - 4;
            if (((long)param_1 + 4U & 7) != 0 && param_3 - 4 != 0) {
              *(undefined1 *)((long)param_1 + 4) = uVar8;
              puVar9 = (undefined8 *)((long)param_1 + 5U);
              uVar6 = param_3 - 5;
              if (((long)param_1 + 5U & 7) != 0 && param_3 - 5 != 0) {
                *(undefined1 *)((long)param_1 + 5) = uVar8;
                puVar9 = (undefined8 *)((long)param_1 + 6U);
                uVar6 = param_3 - 6;
                if (((long)param_1 + 6U & 7) != 0 && param_3 - 6 != 0) {
                  *(undefined1 *)((long)param_1 + 6) = uVar8;
                  puVar9 = (undefined8 *)((long)param_1 + 7U);
                  uVar6 = param_3 - 7;
                  if (((long)param_1 + 7U & 7) != 0 && param_3 - 7 != 0) {
                    *(undefined1 *)((long)param_1 + 7) = uVar8;
                    param_3 = param_3 - 8;
                    param_1 = (undefined8 *)((long)param_1 + 8);
                    goto LAB_10001ddd;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3 = uVar6;
    uVar5 = CONCAT44(iVar4,iVar4);
    if (0x1f < param_3) {
      uVar6 = param_3 - 0x20;
      uVar7 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar7 == 0) {
        uVar10 = param_3;
        param_3 = 0;
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
        uVar10 = param_3 - uVar10;
        param_3 = uVar10;
      }
      if (0x5f < uVar6) {
        param_3 = uVar10;
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
          param_3 = param_3 - 0x80;
        } while (0x1f < param_3);
      }
    }
    param_1 = puVar9;
    if (7 < param_3) {
      if (0x17 < param_3 - 8) {
        uVar6 = (param_3 - 8 >> 3) + 1;
        uVar10 = uVar6 & 0xfffffffffffffffc;
        param_1 = puVar9 + uVar10;
        param_3 = param_3 + uVar10 * -8;
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
        *(undefined8 *)param_1 = uVar5;
        param_1 = (void *)((long)param_1 + 8);
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10001f11:
  if (param_3 == 0) {
    return pvVar3;
  }
  if (param_3 < 4) {
LAB_10001f20:
    uVar10 = param_3;
    puVar9 = param_1;
  }
  else {
    if (param_3 < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_3 & 0xffffffffffffffe0;
      auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
      uVar12 = PF_PART4(auVar13, 0);
      uVar10 = 0;
      do {
        puVar2 = (undefined4 *)((long)param_1 + uVar10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((long)param_1 + uVar10 + 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        uVar10 = uVar10 + 0x20;
      } while (uVar6 != uVar10);
      if (param_3 == uVar6) {
        return pvVar3;
      }
      if ((param_3 & 0x1c) == 0) {
        param_1 = (void *)((long)param_1 + uVar6);
        param_3 = (ulong)((uint)param_3 & 0x1f);
        goto LAB_10001f20;
      }
    }
    uVar11 = param_3 & 0xfffffffffffffffc;
    uVar10 = (ulong)((uint)param_3 & 3);
    puVar9 = (undefined8 *)((long)param_1 + uVar11);
    auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
    do {
      *(int *)((long)param_1 + uVar6) = PF_PART4(auVar13, 0);
      uVar6 = uVar6 + 4;
    } while (uVar11 != uVar6);
    if (param_3 == uVar11) {
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

void recovered_10001fe0(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar1 = param_2;
  puVar4 = (undefined8 *)param_1;
  if (0xf < param_2) {
    if ((param_1 & 7U) != 0) {
      puVar4 = (undefined8 *)(param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar1 = param_2 - 1;
      if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
        puVar4 = (undefined8 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 1) = 0;
        uVar1 = param_2 - 2;
        if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
          puVar4 = (undefined8 *)(param_1 + 3);
          *(undefined1 *)(param_1 + 2) = 0;
          uVar1 = param_2 - 3;
          if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
            puVar4 = (undefined8 *)(param_1 + 4);
            *(undefined1 *)(param_1 + 3) = 0;
            uVar1 = param_2 - 4;
            if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
              puVar4 = (undefined8 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 4) = 0;
              uVar1 = param_2 - 5;
              if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                puVar4 = (undefined8 *)(param_1 + 6);
                *(undefined1 *)(param_1 + 5) = 0;
                uVar1 = param_2 - 6;
                if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                  puVar4 = (undefined8 *)(param_1 + 7);
                  *(undefined1 *)(param_1 + 6) = 0;
                  uVar1 = param_2 - 7;
                  if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                    *(undefined1 *)(param_1 + 7) = 0;
                    puVar4 = (undefined8 *)(param_1 + 8);
                    uVar1 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar1) {
      uVar2 = uVar1 - 0x20;
      uVar3 = ((uint)(uVar2 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar3 == 0) {
        uVar5 = uVar1;
        uVar1 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar4 + uVar5) = 0;
          ((undefined8 *)((long)puVar4 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar4 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar3 << 5 != uVar5);
        puVar4 = (undefined8 *)((long)puVar4 + uVar5);
        uVar5 = uVar1 - uVar5;
        uVar1 = uVar5;
      }
      if (0x5f < uVar2) {
        uVar1 = uVar5;
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4 = puVar4 + 0x10;
          uVar1 = uVar1 - 0x80;
        } while (0x1f < uVar1);
      }
    }
    if (7 < uVar1) {
      if (uVar1 - 8 < 0x18) {
        puVar6 = puVar4;
      }
      else {
        uVar2 = (uVar1 - 8 >> 3) + 1;
        uVar5 = uVar2 & 0xfffffffffffffffc;
        puVar6 = puVar4 + uVar5;
        uVar1 = uVar1 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar4[uVar7] = 0;
          (puVar4 + uVar7)[1] = 0;
          puVar4[uVar7 + 2] = 0;
          (puVar4 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar4 = puVar6;
        if (uVar2 == uVar5) goto LAB_10002205;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_10002205:
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  puVar6 = puVar4;
  if (7 < uVar1) {
    if (uVar1 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar1 & 0xffffffffffffffe0;
      uVar2 = 0;
      do {
        *(undefined8 *)((long)puVar4 + uVar2) = 0;
        ((undefined8 *)((long)puVar4 + uVar2))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar4 + uVar2 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar2 = uVar2 + 0x20;
      } while (uVar5 != uVar2);
      if (uVar1 == uVar5) {
        return;
      }
      if ((uVar1 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar4 + uVar5);
        uVar2 = (ulong)((uint)uVar1 & 0x1f);
        goto LAB_10002286;
      }
    }
    uVar7 = uVar1 & 0xfffffffffffffff8;
    uVar2 = (ulong)((uint)uVar1 & 7);
    puVar6 = (undefined8 *)((long)puVar4 + uVar7);
    do {
      *(undefined8 *)((long)puVar4 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar1 == uVar7) {
      return;
    }
  }
LAB_10002286:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022b0
 */

void recovered_100022b0(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;

  uVar1 = param_2;
  puVar4 = (undefined8 *)param_1;
  if (0xf < param_2) {
    if ((param_1 & 7U) != 0) {
      puVar4 = (undefined8 *)(param_1 + 1);
      *(undefined1 *)param_1 = 0;
      uVar1 = param_2 - 1;
      if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
        puVar4 = (undefined8 *)(param_1 + 2);
        *(undefined1 *)(param_1 + 1) = 0;
        uVar1 = param_2 - 2;
        if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
          puVar4 = (undefined8 *)(param_1 + 3);
          *(undefined1 *)(param_1 + 2) = 0;
          uVar1 = param_2 - 3;
          if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
            puVar4 = (undefined8 *)(param_1 + 4);
            *(undefined1 *)(param_1 + 3) = 0;
            uVar1 = param_2 - 4;
            if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
              puVar4 = (undefined8 *)(param_1 + 5);
              *(undefined1 *)(param_1 + 4) = 0;
              uVar1 = param_2 - 5;
              if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                puVar4 = (undefined8 *)(param_1 + 6);
                *(undefined1 *)(param_1 + 5) = 0;
                uVar1 = param_2 - 6;
                if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                  puVar4 = (undefined8 *)(param_1 + 7);
                  *(undefined1 *)(param_1 + 6) = 0;
                  uVar1 = param_2 - 7;
                  if (((ulong)puVar4 & 7) != 0 && uVar1 != 0) {
                    *(undefined1 *)(param_1 + 7) = 0;
                    puVar4 = (undefined8 *)(param_1 + 8);
                    uVar1 = param_2 - 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < uVar1) {
      uVar2 = uVar1 - 0x20;
      uVar3 = ((uint)(uVar2 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar3 == 0) {
        uVar5 = uVar1;
        uVar1 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)((long)puVar4 + uVar5) = 0;
          ((undefined8 *)((long)puVar4 + uVar5))[1] = 0;
          puVar6 = (undefined8 *)((long)puVar4 + uVar5 + 0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar5 = uVar5 + 0x20;
        } while (uVar3 << 5 != uVar5);
        puVar4 = (undefined8 *)((long)puVar4 + uVar5);
        uVar5 = uVar1 - uVar5;
        uVar1 = uVar5;
      }
      if (0x5f < uVar2) {
        uVar1 = uVar5;
        do {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4 = puVar4 + 0x10;
          uVar1 = uVar1 - 0x80;
        } while (0x1f < uVar1);
      }
    }
    if (7 < uVar1) {
      if (uVar1 - 8 < 0x18) {
        puVar6 = puVar4;
      }
      else {
        uVar2 = (uVar1 - 8 >> 3) + 1;
        uVar5 = uVar2 & 0xfffffffffffffffc;
        puVar6 = puVar4 + uVar5;
        uVar1 = uVar1 + uVar5 * -8;
        uVar7 = 0;
        do {
          puVar4[uVar7] = 0;
          (puVar4 + uVar7)[1] = 0;
          puVar4[uVar7 + 2] = 0;
          (puVar4 + uVar7 + 2)[1] = 0;
          uVar7 = uVar7 + 4;
        } while (uVar5 != uVar7);
        puVar4 = puVar6;
        if (uVar2 == uVar5) goto LAB_100024d5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_100024d5:
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  puVar6 = puVar4;
  if (7 < uVar1) {
    if (uVar1 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar1 & 0xffffffffffffffe0;
      uVar2 = 0;
      do {
        *(undefined8 *)((long)puVar4 + uVar2) = 0;
        ((undefined8 *)((long)puVar4 + uVar2))[1] = 0;
        puVar6 = (undefined8 *)((long)puVar4 + uVar2 + 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar2 = uVar2 + 0x20;
      } while (uVar5 != uVar2);
      if (uVar1 == uVar5) {
        return;
      }
      if ((uVar1 & 0x18) == 0) {
        puVar6 = (undefined8 *)((long)puVar4 + uVar5);
        uVar2 = (ulong)((uint)uVar1 & 0x1f);
        goto LAB_10002556;
      }
    }
    uVar7 = uVar1 & 0xfffffffffffffff8;
    uVar2 = (ulong)((uint)uVar1 & 7);
    puVar6 = (undefined8 *)((long)puVar4 + uVar7);
    do {
      *(undefined8 *)((long)puVar4 + uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    if (uVar1 == uVar7) {
      return;
    }
  }
LAB_10002556:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002580
 */

int recovered_10002580(long param_1,long param_2,long param_3)

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

  if (0xf < (ulong)param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_100027b3;
    uVar11 = param_3;
    puVar8 = (ulong *)param_2;
    puVar10 = (ulong *)param_1;
    if ((param_1 & 7U) != 0) {
      bVar1 = *(byte *)param_1;
      bVar5 = *(byte *)param_2;
      if (bVar1 != bVar5) {
LAB_10002713:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002868:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)(param_1 + 1);
      puVar8 = (ulong *)(param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10002713;
        puVar10 = (ulong *)(param_1 + 2);
        puVar8 = (ulong *)(param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10002713;
          puVar10 = (ulong *)(param_1 + 3);
          puVar8 = (ulong *)(param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10002713;
            puVar10 = (ulong *)(param_1 + 4);
            puVar8 = (ulong *)(param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10002713;
              puVar10 = (ulong *)(param_1 + 5);
              puVar8 = (ulong *)(param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10002713;
                puVar10 = (ulong *)(param_1 + 6);
                puVar8 = (ulong *)(param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10002713;
                  puVar10 = (ulong *)(param_1 + 7);
                  puVar8 = (ulong *)(param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10002713;
                    puVar10 = (ulong *)(param_1 + 8);
                    puVar8 = (ulong *)(param_2 + 8);
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
      param_2 = (long)puVar8;
      param_1 = (long)puVar10;
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
    for (; 7 < (ulong)param_3; param_3 = param_3 - 8) {
      if (*(ulong *)param_1 != *(ulong *)param_2) {
        iVar3 = recovered_10002880((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = (long)(param_2 + 8);
      param_1 = (long)(param_1 + 8);
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_100027b3:
  uVar11 = 0;
  do {
    if (*(byte *)(param_1 + uVar11) != *(byte *)(param_2 + uVar11)) {
      return (uint)*(byte *)(param_1 + uVar11) - (uint)*(byte *)(param_2 + uVar11);
    }
    uVar11 = uVar11 + 1;
  } while (param_3 != uVar11);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100028f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002910(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002930(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002950(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002980(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100029a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10002a00(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    lVar2 = uVar3 + 1;
    uVar3 = uVar1;
  } while (param_1[lVar2] != '\0');
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002a30(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001513;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10001513:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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
      if (bVar1 != *param_2) goto LAB_10001553;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10001553:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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

long recovered_10002ad0(long param_1)

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

  if (param_1 == 0) {
    return 0;
  }
  uVar5 = 0xfffffffffffffff8;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (*(char *)(param_1 + 8 + uVar10) != '\0');
  if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
     ((_DAT_00006808 < 0x50 || ((code *)(ulong)_DAT_0000684c == (code *)0x0)))) {
    return 0;
  }
  uVar9 = uVar10 + 9;
  puVar4 = (undefined8 *)(*(code *)(ulong)_DAT_0000684c)(uVar9);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar8 = puVar4;
  if (uVar9 < 0x10) {
LAB_10002b79:
    if (uVar9 == 0) {
      return (long)puVar4;
    }
  }
  else if ((((uint)puVar4 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar4 & 7) == 0) {
      puVar7 = (undefined8 *)param_1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)((long)puVar4 + 1);
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      puVar7 = (undefined8 *)(param_1 + 1);
      uVar9 = uVar10 + 8;
      if ((uVar5 != 0xfffffffffffffff9) && (((ulong)puVar6 & 7) != 0)) {
        puVar6 = (undefined8 *)((long)puVar4 + 2);
        *(undefined1 *)((long)puVar4 + 1) = *(undefined1 *)(param_1 + 1);
        puVar7 = (undefined8 *)(param_1 + 2);
        uVar9 = uVar10 + 7;
        if ((uVar5 != 0xfffffffffffffffa) && (((ulong)puVar6 & 7) != 0)) {
          puVar6 = (undefined8 *)((long)puVar4 + 3);
          *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)(param_1 + 2);
          puVar7 = (undefined8 *)(param_1 + 3);
          uVar9 = uVar10 + 6;
          if ((uVar5 != 0xfffffffffffffffb) && (((ulong)puVar6 & 7) != 0)) {
            puVar6 = (undefined8 *)((long)puVar4 + 4);
            *(undefined1 *)((long)puVar4 + 3) = *(undefined1 *)(param_1 + 3);
            puVar7 = (undefined8 *)(param_1 + 4);
            uVar9 = uVar10 + 5;
            if ((uVar5 != 0xfffffffffffffffc) && (((ulong)puVar6 & 7) != 0)) {
              puVar6 = (undefined8 *)((long)puVar4 + 5);
              *(undefined1 *)((long)puVar4 + 4) = *(undefined1 *)(param_1 + 4);
              puVar7 = (undefined8 *)(param_1 + 5);
              uVar9 = uVar10 + 4;
              if ((uVar5 != 0xfffffffffffffffd) && (((ulong)puVar6 & 7) != 0)) {
                puVar6 = (undefined8 *)((long)puVar4 + 6);
                *(undefined1 *)((long)puVar4 + 5) = *(undefined1 *)(param_1 + 5);
                puVar7 = (undefined8 *)(param_1 + 6);
                uVar9 = uVar10 + 3;
                if ((uVar5 != 0xfffffffffffffffe) && (((ulong)puVar6 & 7) != 0)) {
                  puVar6 = (undefined8 *)((long)puVar4 + 7);
                  *(undefined1 *)((long)puVar4 + 6) = *(undefined1 *)(param_1 + 6);
                  puVar7 = (undefined8 *)(param_1 + 7);
                  uVar9 = uVar10 + 2;
                  if ((uVar5 != 0xffffffffffffffff) && (((ulong)puVar6 & 7) != 0)) {
                    *(undefined1 *)((long)puVar4 + 7) = *(undefined1 *)(param_1 + 7);
                    puVar7 = (undefined8 *)(param_1 + 8);
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
      param_1 = (long)puVar7;
      puVar8 = puVar6;
    }
    else {
      if ((0x27 < uVar9 - 8) && (0x1f < (ulong)((long)puVar6 - (long)puVar7))) {
        uVar5 = (uVar9 - 8 >> 3) + 1;
        uVar10 = uVar5 & 0xfffffffffffffffc;
        param_1 = (long)(puVar7 + uVar10);
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
        puVar7 = (undefined8 *)param_1;
        puVar6 = puVar8;
        if (uVar5 == uVar10) goto LAB_10002b79;
      }
      do {
        param_1 = (long)(puVar7 + 1);
        *puVar6 = *puVar7;
        puVar8 = puVar6 + 1;
        uVar9 = uVar9 - 8;
        puVar7 = (undefined8 *)param_1;
        puVar6 = puVar8;
      } while (7 < uVar9);
    }
    goto LAB_10002b79;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - param_1) < 0x20)) {
LAB_10002e98:
    puVar7 = (undefined8 *)param_1;
  }
  else {
    if (uVar9 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar1 = ((undefined8 *)(param_1 + uVar5))[1];
        puVar6 = (undefined8 *)(param_1 + uVar5 + 0x10);
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        *(undefined8 *)((long)puVar8 + uVar5) = *(undefined8 *)(param_1 + uVar5);
        ((undefined8 *)((long)puVar8 + uVar5))[1] = uVar1;
        puVar6 = (undefined8 *)((long)puVar8 + uVar5 + 0x10);
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        uVar5 = uVar5 + 0x20;
      } while (uVar10 != uVar5);
      if (uVar9 == uVar10) {
        return (long)puVar4;
      }
      if ((uVar9 & 0x1c) == 0) {
        param_1 = param_1 + uVar10;
        puVar6 = (undefined8 *)((long)puVar8 + uVar10);
        uVar5 = (ulong)((uint)uVar9 & 0x1f);
        goto LAB_10002e98;
      }
    }
    uVar11 = uVar9 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)uVar9 & 3);
    puVar6 = (undefined8 *)((long)puVar8 + uVar11);
    puVar7 = (undefined8 *)(param_1 + uVar11);
    do {
      *(undefined4 *)((long)puVar8 + uVar10) = *(undefined4 *)(param_1 + uVar10);
      uVar10 = uVar10 + 4;
    } while (uVar11 != uVar10);
    if (uVar9 == uVar11) {
      return (long)puVar4;
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
    return (long)puVar4;
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
  return (long)puVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dbd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x574U)))
undefined * recovered_100030b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1001dbd0;
}

#undef DAT_1001dbd0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_1001f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa24U)))
undefined ** recovered_100030c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001f000;
}

#undef PTR_DAT_1001f000

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
 * Address: 0x100030d0
 */

/* WARNING: Removing unreachable block (ram,0x100030e6) */
/* WARNING: Removing unreachable block (ram,0x10003133) */
/* WARNING: Removing unreachable block (ram,0x1000313e) */
/* WARNING: Removing unreachable block (ram,0x10003147) */
/* WARNING: Removing unreachable block (ram,0x10003150) */
/* WARNING: Removing unreachable block (ram,0x1000313c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100030d0(undefined8 *param_1)

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
  return uStack_20;
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
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
          param_1 = param_1 * DAT_1001d410;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 *
                    DAT_1001d410 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410;
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

#undef DAT_1001d410

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
  dVar2 = (double)(_DAT_1001d490 ^ (ulong)param_1);
  if ((double)(_DAT_1001d490 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1001d418 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1001d410;
      iVar1 = iVar1 + 1;
    } while (DAT_1001d418 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1001d410)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1001d490 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1001d410
#undef DAT_1001d418
#undef _DAT_1001d490

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10003370(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
      return DAT_1001d418;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1001d418;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1001d418 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10003420(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
ulong recovered_10003450(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_1001d418 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
double recovered_100034b0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1001d418) {
      dVar1 = DAT_1001d418;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1001d410;
  }
  return dVar1;
}

#undef DAT_1001d410
#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d420 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#define DAT_1001d428 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#define DAT_1001d430 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#define DAT_1001d438 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#define _DAT_1001d440 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#define _DAT_1001d448 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#define _DAT_1001d4a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#define _DAT_1001d4b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#define _DAT_1001d4c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#define _DAT_1001d4d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
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
    if (DAT_1001d428 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1001d410;
        iVar1 = iVar1 + 1;
      } while (DAT_1001d428 < param_1);
    }
    for (; param_1 < DAT_1001d430; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1001d438 + param_1) / (param_1 + DAT_1001d418);
    dVar3 = dVar6 * dVar6;
    PF_PART8(auVar7, 0) = dVar3 * dVar6 * dVar3;
    PF_PART8(auVar7, 8) = dVar3 * PF_PART8(auVar7, 0);
    auVar8 = divpd(auVar7,_DAT_1001d4a0);
    PF_PART8(auVar5, 0) = dVar3 * PF_PART8(auVar7, 0) * dVar3;
    PF_PART8(auVar5, 8) = dVar3 * PF_PART8(auVar5, 0);
    auVar7 = divpd(auVar5,_DAT_1001d4b0);
    PF_PART8(auVar4, 0) = dVar3 * PF_PART8(auVar5, 0) * dVar3;
    PF_PART8(auVar4, 8) = dVar3 * PF_PART8(auVar4, 0);
    auVar5 = divpd(auVar4,_DAT_1001d4c0);
    PF_PART8(auVar2, 0) = dVar3 * PF_PART8(auVar4, 0) * dVar3;
    PF_PART8(auVar2, 8) = dVar3 * PF_PART8(auVar2, 0);
    auVar2 = divpd(auVar2,_DAT_1001d4d0);
    dVar3 = PF_PART8(auVar2, 8) +
            PF_PART8(auVar5, 8) +
            PF_PART8(auVar7, 8) +
            PF_PART8(auVar8, 8) + (dVar6 * dVar3) / _DAT_1001d440 + dVar6 + 0.0 + PF_PART8(auVar8, 0) +
            PF_PART8(auVar7, 0) + PF_PART8(auVar5, 0) + PF_PART8(auVar2, 0);
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1001d448;
  }
  return DAT_1001d420;
}

#undef DAT_1001d410
#undef DAT_1001d418
#undef DAT_1001d420
#undef DAT_1001d428
#undef DAT_1001d430
#undef DAT_1001d438
#undef _DAT_1001d440
#undef _DAT_1001d448
#undef _DAT_1001d4a0
#undef _DAT_1001d4b0
#undef _DAT_1001d4c0
#undef _DAT_1001d4d0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
long recovered_100037b0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001d4e0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001d4e0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#define DAT_1001d458 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#define DAT_1001d460 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#define DAT_1001d468 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#define _DAT_1001d470 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#define _DAT_1001d4f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
double recovered_100037e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1001d450 < param_1; param_1 = param_1 + DAT_1001d458) {
  }
  for (; param_1 < DAT_1001d460; param_1 = param_1 + DAT_1001d468) {
  }
  dVar1 = param_1 * param_1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_1001d4f0);
  return ((dVar1 / _DAT_1001d470 + DAT_1001d418 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8)) * param_1;
}

#undef DAT_1001d418
#undef DAT_1001d450
#undef DAT_1001d458
#undef DAT_1001d460
#undef DAT_1001d468
#undef _DAT_1001d470
#undef _DAT_1001d4f0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10003890(double value){return pf_cosine_polynomial(value);}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
double recovered_10003930(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1001d490 ^ (ulong)param_1);
  if ((double)(_DAT_1001d490 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef _DAT_1001d490

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d480 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
ulong recovered_10003950(double param_1)

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
  dVar7 = (double)(_DAT_1001d490 ^ (ulong)param_1);
  if ((double)(_DAT_1001d490 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_1001d480;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_1001d410;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_1001d410;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_1001d410
#undef DAT_1001d480
#undef _DAT_1001d490

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d480 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
ulong recovered_10003a20(double param_1)

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
  dVar6 = DAT_1001d480;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_1001d410;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_1001d410;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_1001d410
#undef DAT_1001d480

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
double recovered_10003ad0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_1001d418;
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

#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
double recovered_10003b20(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_1001d418;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_1001d490);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_1001d418;
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

#undef DAT_1001d418
#undef _DAT_1001d490

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10003bb0(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define _DAT_1001d490 (*(uint *)(((uintptr_t)pf_module_state + 0x84U)))
#define uRam000000001001d494 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x88U)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001001d494,
                             SUB84(dVar2,0) ^ _DAT_1001d490));
  }
  iVar1 = 0;
  if (DAT_1001d418 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1001d410;
      iVar1 = iVar1 + 1;
    } while (DAT_1001d418 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1001d410)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001001d494,_DAT_1001d490));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1001d410
#undef DAT_1001d418
#undef _DAT_1001d490
#undef uRam000000001001d494

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
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
          dVar3 = dVar3 * DAT_1001d410;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 *
                  DAT_1001d410 * DAT_1001d410 * DAT_1001d410;
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

#undef DAT_1001d410

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d520 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
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
    return DAT_1001d520;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1001d418;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1001d418 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1001d418
#undef DAT_1001d520

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003e40(undefined1 in_XMM0 [16])

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  ulong uVar2;
  float fVar3;
  uint128 auVar4;
  uint128 auVar5;
  ulong in_XMM2_Qb;

  fVar3 = PF_PART4(in_XMM0, 0);
  uVar2 = -(ulong)((double)fVar3 < (double)(int)fVar3);
  PF_PART8(auVar4, 0) = ~uVar2 & (ulong)(double)(int)fVar3;
  PF_PART8(auVar4, 8) = ~PF_PART8(in_XMM0, 8) & (ulong)(double)(int)PF_PART4(in_XMM0, 4);
  PF_PART8(auVar1, 8) = in_XMM2_Qb & PF_PART8(in_XMM0, 8);
  PF_PART8(auVar1, 0) = (ulong)(double)((int)fVar3 + -1) & uVar2;
  PF_PART12(auVar5, 4) = SUB1612(auVar4 | auVar1,4);
  PF_PART4(auVar5, 0) = (float)SUB168(auVar4 | auVar1,0);
  return PF_PART8(auVar5, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
float recovered_10003e80(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1001d418 + dVar2) & uVar1);
}

#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
                    (ulong)(DAT_1001d418 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
  PF_PART8(auVar4, 8) = (double)(int)(float)((ulong)param_1 >> 0x20);
  auVar5 = auVar4 | auVar7;
  if (fVar2 < 0.0) {
    dVar3 = PF_PART8(auVar5, 0);
    uVar1 = -(ulong)(dVar3 < (double)fVar2);
    PF_PART8(auVar5, 8) = 0;
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1001d418 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  PF_PART4(auVar6, 0) = (float)PF_PART8(auVar5, 0);
  return PF_PART8(auVar6, 0);
}

#undef DAT_1001d418

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10003fb0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100034b0((double)param_1);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d428 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#define DAT_1001d430 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#define DAT_1001d438 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#define DAT_1001d524 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
#define _DAT_1001d440 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#define _DAT_1001d448 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#define _DAT_1001d4a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#define _DAT_1001d4b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#define _DAT_1001d4c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#define _DAT_1001d4d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
#define _DAT_1001d528 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
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
    if (_DAT_1001d528 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1001d410;
        iVar1 = iVar1 + 1;
      } while (DAT_1001d428 < dVar2);
    }
    for (; dVar2 < DAT_1001d430; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1001d438 + dVar2) / (dVar2 + DAT_1001d418);
    dVar2 = dVar4 * dVar4;
    PF_PART8(auVar3, 0) = dVar2 * dVar4 * dVar2;
    PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
    auVar6 = divpd(auVar3,_DAT_1001d4a0);
    PF_PART8(auVar5, 0) = dVar2 * PF_PART8(auVar3, 0) * dVar2;
    PF_PART8(auVar5, 8) = dVar2 * PF_PART8(auVar5, 0);
    auVar3 = divpd(auVar5,_DAT_1001d4b0);
    PF_PART8(auVar8, 0) = dVar2 * PF_PART8(auVar5, 0) * dVar2;
    PF_PART8(auVar8, 8) = dVar2 * PF_PART8(auVar8, 0);
    auVar5 = divpd(auVar8,_DAT_1001d4c0);
    PF_PART8(auVar7, 0) = dVar2 * PF_PART8(auVar8, 0) * dVar2;
    PF_PART8(auVar7, 8) = dVar2 * PF_PART8(auVar7, 0);
    auVar8 = divpd(auVar7,_DAT_1001d4d0);
    dVar2 = PF_PART8(auVar8, 8) +
            PF_PART8(auVar5, 8) +
            PF_PART8(auVar3, 8) +
            PF_PART8(auVar6, 8) + (dVar4 * dVar2) / _DAT_1001d440 + dVar4 + 0.0 + PF_PART8(auVar6, 0) +
            PF_PART8(auVar3, 0) + PF_PART8(auVar5, 0) + PF_PART8(auVar8, 0);
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1001d448);
  }
  return DAT_1001d524;
}

#undef DAT_1001d410
#undef DAT_1001d418
#undef DAT_1001d428
#undef DAT_1001d430
#undef DAT_1001d438
#undef DAT_1001d524
#undef _DAT_1001d440
#undef _DAT_1001d448
#undef _DAT_1001d4a0
#undef _DAT_1001d4b0
#undef _DAT_1001d4c0
#undef _DAT_1001d4d0
#undef _DAT_1001d528

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
long recovered_10004120(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001d4e0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001d4e0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#define DAT_1001d458 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#define DAT_1001d460 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#define DAT_1001d468 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#define _DAT_1001d470 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#define _DAT_1001d4f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
float recovered_10004150(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1001d450 < dVar1; dVar1 = dVar1 + DAT_1001d458) {
  }
  for (; dVar1 < DAT_1001d460; dVar1 = dVar1 + DAT_1001d468) {
  }
  dVar2 = dVar1 * dVar1;
  PF_PART8(auVar3, 0) = dVar2 * dVar2;
  PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
  auVar3 = divpd(auVar3,_DAT_1001d4f0);
  return (float)(((dVar2 / _DAT_1001d470 + DAT_1001d418 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8)) * dVar1);
}

#undef DAT_1001d418
#undef DAT_1001d450
#undef DAT_1001d458
#undef DAT_1001d460
#undef DAT_1001d468
#undef _DAT_1001d470
#undef _DAT_1001d4f0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#define DAT_1001d458 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#define DAT_1001d460 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#define DAT_1001d468 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#define DAT_1001d478 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#define _DAT_1001d500 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
float recovered_10004200(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1001d450 < dVar1; dVar1 = dVar1 + DAT_1001d458) {
  }
  for (; dVar1 < DAT_1001d460; dVar1 = dVar1 + DAT_1001d468) {
  }
  dVar1 = dVar1 * dVar1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_1001d500);
  return (float)((DAT_1001d478 * dVar1 + DAT_1001d418 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8));
}

#undef DAT_1001d418
#undef DAT_1001d450
#undef DAT_1001d458
#undef DAT_1001d460
#undef DAT_1001d468
#undef DAT_1001d478
#undef _DAT_1001d500

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_1001d510 (*(uint *)(((uintptr_t)pf_module_state + 0x104U)))
#define uRam000000001001d514 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x108U)))
undefined8 recovered_100042a0(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1001d510 ^ (uint)fVar1);
  if ((float)(_DAT_1001d510 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001001d514 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef _DAT_1001d510
#undef uRam000000001001d514

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d488 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
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
    dVar11 = dVar11 * DAT_1001d488 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1001d418;
      do {
        dVar12 = dVar12 * DAT_1001d488 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1001d488;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10002cc9;
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
LAB_10002cc9:
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
                dVar11 = dVar11 * DAT_1001d410;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410 *
                         DAT_1001d410 * DAT_1001d410 * DAT_1001d410 * DAT_1001d410;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1001d490);
  }
  return dVar11;
}

#undef DAT_1001d410
#undef DAT_1001d418
#undef DAT_1001d488
#undef _DAT_1001d490

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004780(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004520(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_10019658
#define DAT_10019658 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10019660
#define DAT_10019660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_10019b55
#define DAT_10019b55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x579U)))
#undef _DAT_10019660
#define _DAT_10019660 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef str_10019b5c
#define str_10019b5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x580U)))
#undef str_10019b6d
#define str_10019b6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x591U)))
#define local_38 (*(uint * *)(frame + 88))
#define abStack_7a (*(byte (*)[66])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10004790(char *param_1,ulong param_2,char *param_3,void *param_4)

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
    *param_1 = '\0';
  }
  uVar6 = _DAT_10019660;
  dVar5 = DAT_10019658;
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
      return uVar19;
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
  pbVar13 = (byte *)(param_3 + 2);
  while (bVar7 < 0x31) {
    if ((0x1280900000000U >> ((ulong)bVar7 & 0x3f) & 1) == 0) {
      if ((ulong)bVar7 == 0x2a) {
        if (*(uint *)param_4 < 0x29) {
          *(uint *)param_4 = *(uint *)param_4 + 8;
        }
        else {
          *(long *)((long)param_4 + 8) = *(long *)((long)param_4 + 8) + 8;
        }
        bVar7 = *pbVar13;
        param_3 = (char *)pbVar13;
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
      if (*(uint *)param_4 < 0x29) {
        *(uint *)param_4 = *(uint *)param_4 + 8;
      }
      else {
        *(long *)((long)param_4 + 8) = *(long *)((long)param_4 + 8) + 8;
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
    pbVar13 = (byte *)(param_3 + 1);
    pbVar1 = (byte *)(param_3 + 2);
    param_3 = param_3 + 1;
    if (*pbVar13 == 0x68) {
      param_3 = (char *)pbVar1;
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
    pbVar13 = (byte *)(param_3 + 1);
    pbVar1 = (byte *)(param_3 + 2);
    param_3 = param_3 + 1;
    if (*pbVar13 == 0x6c) {
      param_3 = (char *)pbVar1;
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
  case 'I':
  case 'd':
  case 'i':
    uVar2 = *(uint *)param_4;
    uVar12 = (ulong)uVar2;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar2 < 0x29) {
        pcVar20 = (char *)(*(long *)((long)param_4 + 0x10) + uVar12);
        *(uint *)param_4 = uVar2 + 8;
      }
      else {
        pcVar20 = *(char **)((long)param_4 + 8);
        *(char **)((long)param_4 + 8) = pcVar20 + 8;
      }
      uVar22 = (ulong)*pcVar20;
      break;
    case '\x02':
      if (uVar2 < 0x29) {
        psVar14 = (short *)(*(long *)((long)param_4 + 0x10) + uVar12);
        *(uint *)param_4 = uVar2 + 8;
      }
      else {
        psVar14 = *(short **)((long)param_4 + 8);
        *(short **)((long)param_4 + 8) = psVar14 + 4;
      }
      uVar22 = (ulong)*psVar14;
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar2 < 0x29) {
        puVar9 = (ulong *)(*(long *)((long)param_4 + 0x10) + uVar12);
        *(uint *)param_4 = uVar2 + 8;
      }
      else {
LAB_10004ca2:
        puVar9 = *(ulong **)((long)param_4 + 8);
        *(ulong **)((long)param_4 + 8) = puVar9 + 1;
      }
      goto LAB_10004cae;
    case '\a':
      if (0x28 < uVar2) goto LAB_10004ca2;
      puVar9 = (ulong *)(*(long *)((long)param_4 + 0x10) + uVar12);
      *(uint *)param_4 = uVar2 + 8;
LAB_10004cae:
      uVar22 = *puVar9;
      break;
    default:
      if (uVar2 < 0x29) {
        piVar15 = (int *)(uVar12 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar2 + 8;
      }
      else {
        piVar15 = *(int **)((long)param_4 + 8);
        *(int **)((long)param_4 + 8) = piVar15 + 2;
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
      abStack_7a[uVar18 + 2] = str_10019b6d[uVar22 % 10];
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
  case 'X':
  case 'x':
    uVar19 = *(uint *)param_4;
    uVar12 = (ulong)uVar19;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar19 < 0x29) {
        *(uint *)param_4 = uVar19 + 8;
        uVar12 = (ulong)*(byte *)(*(long *)((long)param_4 + 0x10) + uVar12);
      }
      else {
        pbVar13 = *(byte **)((long)param_4 + 8);
        *(byte **)((long)param_4 + 8) = pbVar13 + 8;
        uVar12 = (ulong)*pbVar13;
      }
      break;
    case '\x02':
      if (uVar19 < 0x29) {
        *(uint *)param_4 = uVar19 + 8;
        uVar12 = (ulong)*(ushort *)(*(long *)((long)param_4 + 0x10) + uVar12);
      }
      else {
        puVar3 = *(ushort **)((long)param_4 + 8);
        *(ushort **)((long)param_4 + 8) = puVar3 + 4;
        uVar12 = (ulong)*puVar3;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar19 < 0x29) {
        *(uint *)param_4 = uVar19 + 8;
        uVar12 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar12);
      }
      else {
LAB_10004ec3:
        puVar9 = *(ulong **)((long)param_4 + 8);
        *(ulong **)((long)param_4 + 8) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10004ec3;
      *(uint *)param_4 = uVar19 + 8;
      uVar12 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar12);
      break;
    default:
      if (uVar19 < 0x29) {
        puVar16 = (uint *)(uVar12 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar19 + 8;
      }
      else {
        puVar16 = *(uint **)((long)param_4 + 8);
        *(uint **)((long)param_4 + 8) = puVar16 + 2;
      }
      uVar12 = (ulong)*puVar16;
    }
    pcVar20 = str_10019b6d;
    if (*param_3 == 0x58) {
      pcVar20 = str_10019b5c;
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
  case 'c':
    uVar2 = *(uint *)param_4;
    if ((ulong)uVar2 < 0x29) {
      pbVar13 = (byte *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar2 + 8;
    }
    else {
      pbVar13 = *(byte **)((long)param_4 + 8);
      *(byte **)((long)param_4 + 8) = pbVar13 + 8;
    }
    if (1 < uVar23) {
      *param_1 = *pbVar13;
      goto LAB_10004812;
    }
    break;
  case 'f':
    if (bVar4) {
      *(ulong *)((long)param_4 + 8) =
           (*(long *)((long)param_4 + 8) + 0xfU & 0xfffffffffffffff0) + 0x10;
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
      uVar2 = *(uint *)((long)param_4 + 4);
      if ((ulong)uVar2 < 0xa1) {
        pdVar11 = (double *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
        *(uint *)((long)param_4 + 4) = uVar2 + 0x10;
      }
      else {
        pdVar11 = *(double **)((long)param_4 + 8);
        *(double **)((long)param_4 + 8) = pdVar11 + 1;
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
        abStack_7a[uVar17 + 2] = str_10019b6d[uVar22 % 10];
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
  case 'p':
    uVar2 = *(uint *)param_4;
    if ((ulong)uVar2 < 0x29) {
      puVar9 = (ulong *)((ulong)uVar2 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar2 + 8;
    }
    else {
      puVar9 = *(ulong **)((long)param_4 + 8);
      *(ulong **)((long)param_4 + 8) = puVar9 + 1;
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
      abStack_7a[uVar17 + 2] = str_10019b6d[(uint)uVar22 & 0xf];
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
  case 's':
    uVar19 = *(uint *)param_4;
    if ((ulong)uVar19 < 0x29) {
      puVar10 = (undefined8 *)((ulong)uVar19 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar19 + 8;
    }
    else {
      puVar10 = *(undefined8 **)((long)param_4 + 8);
      *(undefined8 **)((long)param_4 + 8) = puVar10 + 1;
    }
    pbVar13 = (byte *)*puVar10;
    if (pbVar13 == (byte *)0x0) {
      pbVar13 = &DAT_10019b55;
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
  case 'u':
    uVar19 = *(uint *)param_4;
    uVar12 = (ulong)uVar19;
    switch((uintptr_t)(cVar8)) {
    case '\x01':
      if (uVar19 < 0x29) {
        *(uint *)param_4 = uVar19 + 8;
        uVar12 = (ulong)*(byte *)(*(long *)((long)param_4 + 0x10) + uVar12);
      }
      else {
        pbVar13 = *(byte **)((long)param_4 + 8);
        *(byte **)((long)param_4 + 8) = pbVar13 + 8;
        uVar12 = (ulong)*pbVar13;
      }
      break;
    case '\x02':
      if (uVar19 < 0x29) {
        *(uint *)param_4 = uVar19 + 8;
        uVar12 = (ulong)*(ushort *)(*(long *)((long)param_4 + 0x10) + uVar12);
      }
      else {
        puVar3 = *(ushort **)((long)param_4 + 8);
        *(ushort **)((long)param_4 + 8) = puVar3 + 4;
        uVar12 = (ulong)*puVar3;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      if (uVar19 < 0x29) {
        *(uint *)param_4 = uVar19 + 8;
        uVar12 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar12);
      }
      else {
LAB_10005143:
        puVar9 = *(ulong **)((long)param_4 + 8);
        *(ulong **)((long)param_4 + 8) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10005143;
      *(uint *)param_4 = uVar19 + 8;
      uVar12 = *(ulong *)(*(long *)((long)param_4 + 0x10) + uVar12);
      break;
    default:
      if (uVar19 < 0x29) {
        puVar16 = (uint *)(uVar12 + *(long *)((long)param_4 + 0x10));
        *(uint *)param_4 = uVar19 + 8;
      }
      else {
        puVar16 = *(uint **)((long)param_4 + 8);
        *(uint **)((long)param_4 + 8) = puVar16 + 2;
      }
      uVar12 = (ulong)*puVar16;
    }
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      abStack_7a[uVar18 + 2] = str_10019b6d[uVar12 % 10];
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

#undef DAT_10019658
#undef DAT_10019660
#undef DAT_10019b55
#undef _DAT_10019660
#undef str_10019b5c
#undef str_10019b6d
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
#undef DAT_1001a0f8
#define DAT_1001a0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb1cU)))
#undef DAT_1001a100
#define DAT_1001a100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xb24U)))
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
        if (DAT_1001a0f8 == 0) {
          puVar4 = (ulong *)&DAT_1001a0f8;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1001a100 == (long *)0x0) {
          DAT_1001a100 = plVar2;
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
      if (DAT_1001a0f8 == 0) {
        puVar1 = &DAT_1001a0f8;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_1001a100 == (long *)0x0) {
        DAT_1001a100 = (long *)&DAT_02000000;
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
      if (DAT_1001a0f8 == 0) {
        puVar4 = (ulong *)&DAT_1001a0f8;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1001a100 == (long *)0x0) {
        DAT_1001a100 = plVar2;
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
#undef DAT_1001a0f8
#undef DAT_1001a100
#undef _DAT_02000000
#undef _DAT_02000008
#undef _DAT_02000010

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_238 (*(undefined1 (*)[520])(frame + 24))
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
        if (DAT_1001f100 != 0) {
          DAT_1001f100 = DAT_1001f100 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1001f100 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10000f90(local_238,&DAT_1001f110,DAT_1001f100);
            uVar3 = DAT_1001f100;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_1001f100 = 0;
        }
        else {
          if (DAT_1001f100 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10000f90(local_238,&DAT_1001f110,DAT_1001f100);
            local_238[DAT_1001f100] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            DAT_1001f100 = 0;
          }
          pcVar1 = &DAT_1001f110 + DAT_1001f100;
          DAT_1001f100 = DAT_1001f100 + 1;
          *pcVar1 = cVar2;
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
  }
  return;
}

#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_238

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
void recovered_10005a20(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1001f100 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10000f90(local_208,&DAT_1001f110,DAT_1001f100);
    uVar1 = DAT_1001f100;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_1001f100 = 0;
  return;
}

#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
void recovered_10005ac0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1001f100 != 0) {
    recovered_10000f90(local_208,&DAT_1001f110,DAT_1001f100);
    local_208[DAT_1001f100] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1001f100 = 0;
  }
  return;
}

#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dbd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x578U)))
#define DAT_1001dbfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#define local_148 (*(char (*)[320])(frame + 24))
void recovered_10005b60(undefined *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined *puVar2;
  char *pcVar3;

  pcVar3 = &DAT_1001dbfe;
  if (param_1 != (undefined *)0x0) {
    pcVar3 = param_1;
  }
  puVar2 = &DAT_1001dbd4;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10005610(local_148,0x140,pcVar3,puVar2);
  if (0 < (int)uVar1) {
    recovered_10005850((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1001dbd4
#undef DAT_1001dbfe
#undef local_148

#undef DAT_10019b9c
#define DAT_10019b9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0U)))
#undef str_10019b81
#define str_10019b81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bc0
 */

void recovered_10005bc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002a00(str_10019b81);
  recovered_10005850(((uintptr_t)pf_module_state + 0x5a5U),uVar1);
  uVar1 = recovered_10002a00(&DAT_10019b9c);
  recovered_10005850(((uintptr_t)pf_module_state + 0x5c0U),uVar1);
  return;
}

#undef DAT_10019b9c
#undef str_10019b81

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dce8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0U)))
#define str_1001dceb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c3U)))
void recovered_10005c00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002a00(str_1001dceb);
  recovered_10005850(((uintptr_t)pf_module_state + 0x5c3U),uVar1);
  uVar1 = recovered_10002a00(&DAT_1001dce8);
  recovered_10005850(((uintptr_t)pf_module_state + 0x5c0U),uVar1);
  return;
}

#undef DAT_1001dce8
#undef str_1001dceb

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define _DAT_00006844 (*(uint *)(0x6844U))
#define local_228 (*(undefined1 (*)[512])(frame + 24))
bool recovered_10005c40(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1001f100 != 0) {
    recovered_10000f90(local_228,&DAT_1001f110,DAT_1001f100);
    local_228[DAT_1001f100] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_1001f100 = 0;
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

#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_228

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10005d60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005d70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10005d80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dbfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 32))
#define local_34 (*(uint *)(frame + 28))
#define str_1001dd7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x657U)))
#define str_1001dd8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
#define str_1001dd9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x672U)))
undefined4 * recovered_10005d90(long param_1,long param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1001f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002a30((byte *)param_1,(byte *)str_1001dd7f);
  if (iVar3 == 0) {
    uVar10 = 1;
LAB_1000416e:
    puVar5 = recovered_10000ea0(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1001f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001c90(puVar5,0,0x340);
    *puVar5 = uVar10;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_10003890__8_((char *)(puVar5 + 1),0xf1,&DAT_1001dbfe,param_1);
    return puVar5;
  }
  iVar4 = recovered_10002a30((byte *)param_1,(byte *)str_1001dd8c);
  if (iVar4 == 0) {
    uVar10 = 2;
    goto LAB_1000416e;
  }
  iVar4 = recovered_10002a30((byte *)param_1,(byte *)str_1001dd9a);
  if (iVar4 == 0) {
    uVar10 = 3;
    goto LAB_1000416e;
  }
  puVar5 = recovered_10000ea0(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1001f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001c90(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10002f50((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10002f50((char *)param_2,'+');
    bVar11 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10002f50((char *)param_2,'a');
      bVar11 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar11;
  pcVar6 = recovered_10002f50((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10002f50((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10002f50((char *)param_2,'+');
    bVar12 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar12;
  pcVar6 = recovered_10002f50((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  pf_varargs_10003890__8_((char *)(puVar5 + 1),0xf1,&DAT_1001dbfe,param_1);
  recovered_10001c90(&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10002f50((char *)param_2,'w');
    if (local_30 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar5 + 0x125) == '\x01') {
        uVar9 = (ulong)local_30;
        uVar7 = *(ulong *)(puVar5 + 0x44);
        if (uVar7 < uVar9) {
          uVar2 = 0x100;
          if (uVar7 != 0) {
            uVar2 = uVar7;
          }
          do {
            uVar7 = uVar2;
            uVar2 = uVar7 * 2;
          } while (uVar7 < uVar9);
          pvVar8 = recovered_10000f40(*(void **)(puVar5 + 0x40),uVar7);
          if (pvVar8 == (void *)0x0) {
            DAT_1001f060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_100041f8;
          }
          *(void **)(puVar5 + 0x40) = pvVar8;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = pvVar8;
          uVar9 = (ulong)local_30;
        }
        else {
          pvVar8 = *(void **)(puVar5 + 0x40);
        }
        recovered_10000f90(pvVar8,(void *)(ulong)local_34,uVar9);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x10004152;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_1001f060 = 2;
LAB_100041f8:
    recovered_10000ef0(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x10004152:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar5 + 0x46) = *(undefined8 *)(puVar5 + 0x42);
    return puVar5;
  }
  return puVar5;
}

#undef DAT_1001dbfe
#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef local_30
#undef local_34
#undef str_1001dd7f
#undef str_1001dd8c
#undef str_1001dd9a

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dbfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2U)))
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(uint *)(0x6834U))
#define _DAT_00006838 (*(uint *)(0x6838U))
#define str_1001dd7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x657U)))
#define str_1001dd8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
#define str_1001dd9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x672U)))
#define uStack_30 (*(ulong *)(frame + 32))
#define uStack_34 (*(uint *)(frame + 28))
undefined4 * recovered_10006120(long param_1,long param_2,int *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      if (((_DAT_00006800 == 0x50414d57) &&
          (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
         ((code *)(ulong)_DAT_00006838 != (code *)0x0)) {
        uStack_30 = 0x100042da;
        iVar4 = (*(code *)(ulong)_DAT_00006838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_10004301;
        }
      }
      DAT_1001f060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_10004301:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x10004318;
      recovered_10000ef0(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10004320;
    recovered_10000ef0(param_3);
    puVar8 = recovered_10005d90(param_1,param_2);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1001f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002a30((byte *)param_1,(byte *)str_1001dd7f);
  if (iVar4 == 0) {
    uVar10 = 1;
LAB_1000416e:
    puVar8 = recovered_10000ea0(0x340);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_1001f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001c90(puVar8,0,0x340);
    *puVar8 = uVar10;
    *(bool *)(puVar8 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar8 + 0x125) = iVar4 != 0;
    puVar8[0x48] = 0xffffffff;
    pf_varargs_10003890__8_((char *)(puVar8 + 1),0xf1,&DAT_1001dbfe,param_1);
    return puVar8;
  }
  iVar3 = recovered_10002a30((byte *)param_1,(byte *)str_1001dd8c);
  if (iVar3 == 0) {
    uVar10 = 2;
    goto LAB_1000416e;
  }
  iVar3 = recovered_10002a30((byte *)param_1,(byte *)str_1001dd9a);
  if (iVar3 == 0) {
    uVar10 = 3;
    goto LAB_1000416e;
  }
  puVar8 = recovered_10000ea0(0x340);
  if (puVar8 == (undefined4 *)0x0) {
    DAT_1001f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001c90(puVar8,0,0x340);
  *puVar8 = 0;
  pcVar5 = recovered_10002f50((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10002f50((char *)param_2,'+');
    bVar11 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10002f50((char *)param_2,'a');
      bVar11 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar8 + 0x49) = bVar11;
  pcVar5 = recovered_10002f50((char *)param_2,'w');
  if ((pcVar5 == (char *)0x0) &&
     (pcVar5 = recovered_10002f50((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
    pcVar5 = recovered_10002f50((char *)param_2,'+');
    bVar12 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar8 + 0x125) = bVar12;
  pcVar5 = recovered_10002f50((char *)param_2,'a');
  *(bool *)((long)puVar8 + 0x126) = pcVar5 != (char *)0x0;
  puVar8[0x48] = 0xffffffff;
  pf_varargs_10003890__8_((char *)(puVar8 + 1),0xf1,&DAT_1001dbfe,param_1);
  recovered_10001c90(&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10002f50((char *)param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar5 == (char *)0x0) {
      if (*(char *)((long)puVar8 + 0x125) == '\x01') {
        uVar9 = uStack_30 & 0xffffffff;
        uVar6 = *(ulong *)(puVar8 + 0x44);
        if (uVar6 < uVar9) {
          uVar2 = 0x100;
          if (uVar6 != 0) {
            uVar2 = uVar6;
          }
          do {
            uVar6 = uVar2;
            uVar2 = uVar6 * 2;
          } while (uVar6 < uVar9);
          pvVar7 = recovered_10000f40(*(void **)(puVar8 + 0x40),uVar6);
          if (pvVar7 == (void *)0x0) {
            DAT_1001f060 = 0xc;
            *(undefined1 *)((long)puVar8 + 0x129) = 1;
            goto LAB_100041f8;
          }
          *(void **)(puVar8 + 0x40) = pvVar7;
          *(ulong *)(puVar8 + 0x44) = uVar6;
          *(void **)(puVar8 + 0x3e) = pvVar7;
          uVar9 = uStack_30 & 0xffffffff;
        }
        else {
          pvVar7 = *(void **)(puVar8 + 0x40);
        }
        recovered_10000f90(pvVar7,(void *)(ulong)uStack_34,uVar9);
      }
      else {
        *(ulong *)(puVar8 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar8 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar8 + 0x126);
      goto joined_r0x10004152;
    }
  }
  else if (*(char *)((long)puVar8 + 0x125) == '\0') {
    DAT_1001f060 = 2;
LAB_100041f8:
    recovered_10000ef0(puVar8);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar8 + 0x126);
joined_r0x10004152:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar8 + 0x46) = *(undefined8 *)(puVar8 + 0x42);
    return puVar8;
  }
  return puVar8;
}

#undef DAT_1001dbfe
#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_1001dd7f
#undef str_1001dd8c
#undef str_1001dd9a
#undef uStack_30
#undef uStack_34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(uint *)(0x6838U))
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
      DAT_1001f060 = 5;
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

#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e0
 */

long recovered_100062e0(long param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

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
      lVar6 = 0;
      do {
        lVar8 = 0;
        do {
          uVar4 = recovered_10006420(param_4);
          if (uVar4 == 0xffffffff) {
            return lVar6;
          }
          *(char *)(param_1 + lVar8) = (char)uVar4;
          lVar8 = lVar8 + 1;
        } while (param_2 != lVar8);
        lVar6 = lVar6 + 1;
        param_1 = param_1 + param_2;
      } while (lVar6 != param_3);
      return param_3;
    }
    uVar1 = *(ulong *)(param_4 + 0x46);
    uVar9 = *(ulong *)(param_4 + 0x42) - uVar1;
    if (uVar1 <= *(ulong *)(param_4 + 0x42) && uVar9 != 0) {
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_2;
      PF_PART8(auVar3, 8) = 0;
      PF_PART8(auVar3, 0) = param_3;
      uVar7 = 0xffffffffffffffff;
      if (SUB168(auVar2 * auVar3,8) == 0) {
        uVar7 = param_3 * param_2;
      }
      uVar5 = uVar7;
      if (uVar9 < uVar7) {
        uVar5 = uVar9;
      }
      recovered_10000f90((void *)param_1,(void *)(uVar1 + *(long *)(param_4 + 0x3e)),uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      if (uVar9 < uVar7) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((uVar5 | param_2) >> 0x20 == 0) {
        return (uVar5 & 0xffffffff) / (param_2 & 0xffffffffU);
      }
      return uVar5 / (ulong)param_2;
    }
    *(undefined1 *)(param_4 + 0x4a) = 1;
  }
  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dbd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x578U)))
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb34U)))
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb44U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(uint *)(0x6840U))
#define _DAT_00006844 (*(uint *)(0x6844U))
#define local_218 (*(undefined1 (*)[512])(frame + 24))
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
LAB_100044fa:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_1001f100 != 0) {
      recovered_10000f90(local_218,&DAT_1001f110,DAT_1001f100);
      local_218[DAT_1001f100] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_1001f100 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1001dbd4,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10002a00((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_100044fa;
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

#undef DAT_1001dbd4
#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
long recovered_10006610(long param_1,long param_2,long param_3,uint *param_4)

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
    recovered_10005850(param_1,uVar5);
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
        DAT_1001f060 = 0xc;
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

#undef DAT_1001f060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
undefined8 recovered_100067a0(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1001f060 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000482e;
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
LAB_1000482e:
  DAT_1001f060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1001f060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
undefined8 recovered_10006820(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1001f060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1001f060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(uint *)(0x6838U))
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
  DAT_1001f060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10006900(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10006920(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006940(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_0000683c (*(uint *)(0x683cU))
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
  DAT_1001f060 = uVar2;
  return 0xffffffff;
}

#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000683c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa84U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(uint *)(0x6834U))
#define _DAT_00006838 (*(uint *)(0x6838U))
#define _DAT_0000683c (*(uint *)(0x683cU))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_2c (*(undefined4 *)(frame + 20))
undefined8 recovered_10006a10(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1001f060 = 0x16;
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
  DAT_1001f060 = uVar2;
  return 0xffffffff;
}

#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef _DAT_0000683c
#undef local_28
#undef local_2c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 32))
#define local_34 (*(uint *)(frame + 28))
ulong recovered_10006b80(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10001c90(&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10004cbf;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        pvVar2 = recovered_10000ea0((ulong)(local_30 + (local_30 == 0)));
        if (pvVar2 != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10000f90(pvVar2,(void *)(ulong)local_34,(ulong)local_30);
            uVar3 = (ulong)local_30;
          }
          *param_2 = (long)pvVar2;
          *param_3 = uVar3;
          uVar3 = CONCAT71((int7)((ulong)pvVar2 >> 8),1);
          goto LAB_10004cbf;
        }
      }
    }
  }
  uVar3 = 0;
LAB_10004cbf:
  return uVar3 & 0xffffffff;
}

#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef local_30
#undef local_34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(uint *)(0x6838U))
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

#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006cd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006ce0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006cf0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006d00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006d10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10006d50(long param_1,long param_2,long param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dd0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e6U)))
#define str_1001dd11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e9U)))
#define str_1001dd1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f6U)))
#define str_1001dd28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x600U)))
#define str_1001dd3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x614U)))
#define str_1001dd4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x622U)))
#define str_1001dd5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x634U)))
#define str_1001dd68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x640U)))
#define str_1001dd79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x651U)))
char * recovered_10006d90(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1001dd0e;
  default:
    return str_1001dd79;
  case 2:
    return str_1001dd11;
  case 5:
    return str_1001dd1e;
  case 9:
    return str_1001dd28;
  case 0xc:
    return str_1001dd3c;
  case 0xd:
    return str_1001dd4a;
  case 0x11:
    return str_1001dd5c;
  case 0x16:
    return str_1001dd68;
  }
}

#undef DAT_1001dd0e
#undef str_1001dd11
#undef str_1001dd1e
#undef str_1001dd28
#undef str_1001dd3c
#undef str_1001dd4a
#undef str_1001dd5c
#undef str_1001dd68
#undef str_1001dd79

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006e60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd44U)))
void recovered_10006e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001f310 = DAT_1001f310 + 1;
  return;
}

#undef DAT_1001f310

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006ea0(long param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10004f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

__attribute__((naked,returns_twice)) int recovered_10006eb0(void *context){
 __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nret");
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

__attribute__((naked,noreturn)) void recovered_10006ee0(void *context,int value){
 __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nmovl $1,%eax\n1: movq 56(%rdi),%rdx\nmovq 48(%rdi),%rsp\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\njmp *%rdx");
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10004fe1 (*(uint8_t *)(0x10004fe1U))
#define DAT_1001de0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d8U)))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_60 (*(undefined * *)(frame + 64))
#define local_68 (*(code * *)(frame + 56))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 24))
void recovered_10006f10(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1001de0c;
  local_50 = &DAT_10004fe1;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000e70();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10004fe1
#undef DAT_1001de0c
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006f90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006fa0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006fb0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd4cU)))
long recovered_10006fb0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1001f318;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1001f318 = param_1;
  lVar1 = recovered_100073d0(param_1);
  return lVar1;
}

#undef DAT_1001f318

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10006fe0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ea0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e70();
  }
  return (long)pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10007010(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ea0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e70();
  }
  return (long)pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001de1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e8U)))
#define LAB_1000512d (*(uint8_t *)(0x1000512dU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_60 (*(undefined * *)(frame + 64))
#define local_68 (*(code * *)(frame + 56))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 24))
void recovered_10007040(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1001de1c;
  local_50 = &LAB_1000512d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1001de1c
#undef LAB_1000512d
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001de2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f8U)))
#define LAB_100051cd (*(uint8_t *)(0x100051cdU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_60 (*(undefined * *)(frame + 64))
#define local_68 (*(code * *)(frame + 56))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 24))
void recovered_100070e0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1001de2c;
  local_50 = &LAB_100051cd;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1001de2c
#undef LAB_100051cd
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001de3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x708U)))
#define LAB_1000526d (*(uint8_t *)(0x1000526dU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_60 (*(undefined * *)(frame + 64))
#define local_68 (*(code * *)(frame + 56))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 24))
void recovered_10007180(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1001de3c;
  local_50 = &LAB_1000526d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1001de3c
#undef LAB_1000526d
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001de4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x718U)))
#define LAB_1000530d (*(uint8_t *)(0x1000530dU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_60 (*(undefined * *)(frame + 64))
#define local_68 (*(code * *)(frame + 56))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 24))
void recovered_10007220(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10006f90;
  local_60 = &DAT_1001de4c;
  local_50 = &LAB_1000530d;
  local_80 = 1;
  recovered_10007510(&local_88);
  recovered_10000ef0(param_1);
  recovered_10007530(&local_88);
  return;
}

#undef DAT_1001de4c
#undef LAB_1000530d
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100072c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_100072d0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100072e0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100072f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10007300(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  uVar5 = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10000ea0(uVar5);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f10();
  }
  if (uVar5 != 0) {
    if (uVar5 < 8) {
      uVar3 = 0;
    }
    else {
      if (uVar5 < 0x20) {
        uVar4 = 0;
LAB_100053ec:
        uVar3 = uVar5 & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_1000541f;
        } while( true );
      }
      uVar3 = uVar5 & 0xffffffffffffffe0;
      uVar4 = 0;
      do {
        *(undefined8 *)((long)pvVar2 + uVar4) = 0;
        ((undefined8 *)((long)pvVar2 + uVar4))[1] = 0;
        puVar1 = (undefined8 *)((long)pvVar2 + uVar4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar4 = uVar4 + 0x20;
      } while (uVar3 != uVar4);
      if (uVar5 == uVar3) goto LAB_10005424;
      uVar4 = uVar3;
      if ((uVar5 & 0x18) != 0) goto LAB_100053ec;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_1000541f:
    } while (uVar5 != uVar3);
  }
LAB_10005424:
  return (long)pvVar2 + 0x30;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100073b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000ef0((void *)(param_1 + -0x30));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100073d0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f318 (*(void * *)(((uintptr_t)pf_module_state + 0xd4cU)))
void recovered_100073e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;

  pvVar2 = DAT_1001f318;
  if (DAT_1001f318 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1001f318 + 0x10);
    DAT_1001f318 = *(void **)((long)DAT_1001f318 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)pvVar2 + 0x28) == '\0') {
      if (*(code **)((long)pvVar2 + 8) != (code *)0x0) {
        (**(code **)((long)pvVar2 + 8))((long)pvVar2 + 0x30);
      }
      recovered_10000ef0(pvVar2);
      return;
    }
  }
  return;
}

#undef DAT_1001f318

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f318 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd4cU)))
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd54U)))
#define cStack_36 (*(char *)(frame + 26))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_38 (*(undefined2 *)(frame + 24))
#define uStack_34 (*(undefined4 *)(frame + 28))
#define uStack_35 (*(undefined1 *)(frame + 27))
void recovered_10007460(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *in_RSI;
  long *plVar4;

  if (DAT_1001f320 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1001f320;
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
        puVar2 = DAT_1001f318;
        if (DAT_1001f318 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006f10();
        }
        *(undefined1 *)(DAT_1001f318 + 5) = 1;
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

#undef DAT_1001f318
#undef DAT_1001f320
#undef cStack_36
#undef local_30
#undef local_38
#undef uStack_34
#undef uStack_35

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f318 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd4cU)))
void recovered_100074e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1001f318;
  if (DAT_1001f318 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006f10();
  }
  *(undefined1 *)(DAT_1001f318 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007460(puVar1);
}

#undef DAT_1001f318

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd54U)))
void recovered_10007510(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1001f320;
  DAT_1001f320 = param_1;
  return;
}

#undef DAT_1001f320

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd54U)))
void recovered_10007530(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1001f320;
  if (DAT_1001f320 == param_1) {
    puVar2 = &DAT_1001f320;
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

#undef DAT_1001f320

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007570(undefined8 *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007460(in_RDI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007580(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd54U)))
#define uStack_38 (*(undefined4 *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 16))
void recovered_10007590(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_1001f320 != (undefined8 *)0x0) {
    DAT_1001f320 = (undefined8 *)*DAT_1001f320;
  }
  recovered_100075b0(param_1,in_RSI);
  if (DAT_1001f320 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1001f320;
      if (DAT_1001f320 == puVar1) {
        DAT_1001f320[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100056bc:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10006ea0((long)puVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007590(puVar3,in_RSI);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007f00((long)DAT_1001f320,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_100056bc;
      }
      DAT_1001f320 = (undefined8 *)*puVar3;
    } while (DAT_1001f320 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1001f320
#undef uStack_38
#undef uStack_40

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd54U)))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_38 (*(undefined8 *)(frame + 24))
void recovered_100075b0(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1001f320 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_1001f320;
      if (DAT_1001f320 == plVar1) {
        DAT_1001f320[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100056bc:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10006ea0((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007590(plVar3,in_RSI);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007f00((long)DAT_1001f320,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100056bc;
      }
      DAT_1001f320 = (long *)*plVar3;
    } while (DAT_1001f320 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}

#undef DAT_1001f320
#undef local_30
#undef local_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007650(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007590(in_RDI,in_RSI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007660(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007670(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006f10();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae4U)))
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
        if (lVar3 == lVar4) goto LAB_100057c4;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100057c4;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1001f0c0) goto LAB_100057cc;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_100057c4:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_100057cc:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1001f0c0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007760(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e70();
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007770(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007780(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100077a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100077d0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100077f0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007820(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte recovered_10007840(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007880(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_100195e0
#define DAT_100195e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100195e8
#define DAT_100195e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10019648
#define DAT_10019648 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10019700
#define DAT_10019700 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10019708
#define DAT_10019708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10019710
#define DAT_10019710 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10019718
#define DAT_10019718 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10019708
#define _DAT_10019708 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100078b0(double param_1)

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
  if (_DAT_10019708 < param_1) {
    return DAT_10019700;
  }
  dVar4 = 0.0;
  if (DAT_10019710 <= param_1) {
    uVar1 = 0;
    if (DAT_100195e0 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_100195e0;
        uVar1 = uVar1 + 1;
      } while (DAT_100195e0 < param_1);
    }
    for (; param_1 < DAT_10019648; param_1 = param_1 * DAT_100195e0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_100195e8;
    dVar5 = DAT_100195e8;
    dVar6 = DAT_100195e8;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_10019718;
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

#undef DAT_100195e0
#undef DAT_100195e8
#undef DAT_10019648
#undef DAT_10019700
#undef DAT_10019708
#undef DAT_10019710
#undef DAT_10019718
#undef _DAT_10019708

#undef DAT_100195e0
#define DAT_100195e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100195e8
#define DAT_100195e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10019648
#define DAT_10019648 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10019700
#define DAT_10019700 (*(double *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10019708
#define DAT_10019708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10019710
#define DAT_10019710 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10019718
#define DAT_10019718 (*(double *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_10019720
#define DAT_10019720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_10019708
#define _DAT_10019708 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef _DAT_10019720
#define _DAT_10019720 (*(float *)(((uintptr_t)pf_module_state + 0x144U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10007a20(float param_1)

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
  if (_DAT_10019708 < dVar6) {
    return (float)DAT_10019700;
  }
  dVar5 = 0.0;
  if (DAT_10019710 <= dVar6) {
    uVar1 = 0;
    if (_DAT_10019720 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_100195e0;
        uVar1 = uVar1 + 1;
      } while (DAT_100195e0 < dVar6);
    }
    for (; dVar6 < DAT_10019648; dVar6 = dVar6 * DAT_100195e0) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_100195e8;
    dVar5 = DAT_100195e8;
    dVar7 = DAT_100195e8;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_10019718;
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

#undef DAT_100195e0
#undef DAT_100195e8
#undef DAT_10019648
#undef DAT_10019700
#undef DAT_10019708
#undef DAT_10019710
#undef DAT_10019718
#undef DAT_10019720
#undef _DAT_10019708
#undef _DAT_10019720

#undef DAT_100195e0
#define DAT_100195e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100195e8
#define DAT_100195e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10019648
#define DAT_10019648 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10019700
#define DAT_10019700 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10019708
#define DAT_10019708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10019710
#define DAT_10019710 (*(double *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_10019718
#define DAT_10019718 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10019708
#define _DAT_10019708 (*(double *)(((uintptr_t)pf_module_state + 0x12cU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007bb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_10019708) && (DAT_10019710 <= dVar4)) {
    uVar1 = 0;
    if (DAT_100195e0 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_100195e0;
        uVar1 = uVar1 + 1;
      } while (DAT_100195e0 < dVar4);
    }
    for (; dVar4 < DAT_10019648; dVar4 = dVar4 * DAT_100195e0) {
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

#undef DAT_100195e0
#undef DAT_100195e8
#undef DAT_10019648
#undef DAT_10019700
#undef DAT_10019708
#undef DAT_10019710
#undef DAT_10019718
#undef _DAT_10019708
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

double recovered_10007d40(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#define DAT_1001d438 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#define DAT_1001d478 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
double recovered_10007d60(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10003420(param_1);
  if (DAT_1001d410 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1001d418;
  }
  else if (param_1 - dVar1 <= DAT_1001d478) {
    dVar1 = dVar1 + DAT_1001d438;
  }
  return dVar1;
}

#undef DAT_1001d410
#undef DAT_1001d418
#undef DAT_1001d438
#undef DAT_1001d478

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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
      goto joined_r0x100059dd;
    }
  }
  bVar7 = false;
joined_r0x100059dd:
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007ef0(byte *in_RDI,undefined8 *in_RSI,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007db0(in_RDI,in_RSI,in_EDX);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#define DAT_1001f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae4U)))
#define local_31 (*(char *)(frame + 31))
#define local_40 (*(byte * *)(frame + 16))
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
          goto LAB_10005ca0;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_10005ca0:
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
LAB_10005e4b:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1001d538 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_100082a0((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_10005e4b;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_10005e4b;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_10005e4b;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1001f0c0) goto LAB_10005e28;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_10005e4b;
  }
LAB_10005e28:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_10005ca0;
}

#undef DAT_1001d538
#undef DAT_1001f0c0
#undef local_31
#undef local_40

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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
    goto LAB_10005f99;
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
    goto LAB_10005f95;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10005ee9;
  default:
    goto switchD_10005ea1_caseD_5;
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
LAB_10005f95:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_10005f99:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10005ee9:
    puVar6 = puVar1 + 1;
    goto LAB_10005f99;
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
switchD_10005ea1_caseD_5:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008430
 */

int recovered_10008430(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  if (param_2 == 0 || param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_100084b9;
  }
  else {
    iVar1 = recovered_10002580((long)param_1,((uintptr_t)pf_module_state + 0x284U),8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 0x42) && (param_1[1] == 0x4d)) {
    return 2;
  }
  if ((0xd < param_2) && (iVar1 = recovered_10002580((long)param_1,((uintptr_t)pf_module_state + 0x680U),9), iVar1 == 0)) {
    return 4;
  }
LAB_100084b9:
  uVar2 = recovered_100084e0(param_1,param_2);
  return ((uint)uVar2 & 0xff) * 3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100084e0(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;

  if (0x11 < param_2) {
    if (((0x19 < param_2) &&
        (iVar6 = recovered_10002580((long)(param_1 + (param_2 - 0x12)),((uintptr_t)pf_module_state + 0x697U),0x11), iVar6 == 0)
        ) && ((param_1 + param_2)[-1] == 0)) {
      return CONCAT71((int7)((ulong)(param_1 + param_2) >> 8),1);
    }
    bVar1 = param_1[1];
    if (bVar1 < 2) {
      bVar2 = param_1[2];
      if ((((0xfd < (byte)(bVar2 - 0xb) || 0xfc < (byte)(bVar2 - 4)) || bVar2 == 0xb) &&
          (*(short *)(param_1 + 0xc) != 0)) &&
         ((*(short *)(param_1 + 0xe) != 0 &&
          (uVar5 = *(ushort *)(param_1 + 5), bVar1 != 0 || uVar5 == 0)))) {
        bVar3 = param_1[7];
        bVar4 = param_1[0x10];
        if ((bVar1 != 1) ||
           ((((ulong)uVar5 != 0 && (bVar3 < 0x21)) &&
            ((0x101018000U >> ((ulong)bVar3 & 0x3f) & 1) != 0)))) {
          uVar7 = (ulong)(bVar2 - 8);
          if (bVar2 < 8) {
            uVar7 = (ulong)bVar2;
          }
          iVar6 = (int)uVar7;
          if (iVar6 == 3) {
            if ((bVar4 == 0x10) || (bVar4 == 8)) goto LAB_1000624b;
          }
          else if (iVar6 == 2) {
            uVar7 = 0;
            if ((bVar4 < 0x21) && ((0x101018000U >> ((ulong)bVar4 & 0x3f) & 1) != 0))
            goto LAB_1000624b;
          }
          else if ((iVar6 != 1) || ((bVar4 == 8 || (bVar4 == 0x10)))) {
LAB_1000624b:
            uVar8 = (ulong)*param_1 + 0x12;
            if (bVar1 == 1) {
              uVar8 = uVar8 + (ulong)(bVar3 + 7 >> 3) * (ulong)uVar5;
            }
            return CONCAT71((int7)(uVar7 >> 8),uVar8 < param_2);
          }
        }
      }
    }
  }
  return 0;
}


#undef DAT_1000ad7c
#define DAT_1000ad7c (*(uint8_t *)(0x1000ad7cU))
#undef DAT_10019d04
#define DAT_10019d04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x728U)))
#undef LAB_1000ab82
#define LAB_1000ab82 (*(uint8_t *)(0x1000ab82U))
#define local_148 (*(undefined * *)(frame + 360))
#define local_140 (*(undefined1 * *)(frame + 368))
#define local_138 (*(undefined1 * *)(frame + 376))
#define local_130 (*(undefined1 * *)(frame + 384))
#define local_114 (*(uint *)(frame + 412))
#define local_110 (*(uint *)(frame + 416))
#define local_10c (*(uint *)(frame + 420))
#define local_108 (*(uint *)(frame + 424))
#define local_104 (*(uint *)(frame + 428))
#define local_100 (*(uint * *)(frame + 432))
#define local_f8 (*(uint * *)(frame + 440))
#define local_f0 (*(ulong *)(frame + 448))
#define local_e8 (*(undefined8 *)(frame + 456))
#define local_e0 (*(uint * *)(frame + 464))
#define local_d4 (*(uint *)(frame + 476))
#define local_d0 (*(undefined1 (*)[8])(frame + 480))
#define local_c0 (*(undefined8 *)(frame + 496))
#define local_b8 (*(uint *)(frame + 504))
#define local_a8 (*(undefined1 *)(frame + 520))
#define local_a0 (*(undefined8 *)(frame + 528))
#define local_98 (*(undefined1 (*)[8])(frame + 536))
#define local_88 (*(uint * *)(frame + 552))
#define local_80 (*(uint * *)(frame + 560))
#define local_74 (*(uint *)(frame + 572))
#define local_70 (*(uint * *)(frame + 576))
#define local_68 (*(uint ** *)(frame + 584))
#define local_60 (*(uint * *)(frame + 592))
#define local_58 (*(uint * *)(frame + 600))
#define local_50 (*(uint * *)(frame + 608))
#define local_48 (*(uint * *)(frame + 616))
#define local_40 (*(uint * *)(frame + 624))
#define local_38 (*(uint * *)(frame + 632))
#define uStack_230 (*(undefined8 *)(frame + 128))
#define uStack_1fc (*(uint *)(frame + 180))
#define puStack_1d0 (*(uint * *)(frame + 224))
#define puStack_1b8 (*(uint * *)(frame + 248))
#define uStack_c8 (*(undefined8 *)(frame + 488))
#define uStack_b4 (*(uint *)(frame + 508))
#define uStack_b0 (*(uint *)(frame + 512))
#define uStack_ac (*(uint *)(frame + 516))
#define uStack_a7 (*(undefined1 *)(frame + 521))
#define uStack_a6 (*(undefined6 *)(frame + 522))
#define local_298 (*(ulong *)(frame + 24))
#define local_290 (*(ulong *)(frame + 32))
#define local_288 (*(ulong *)(frame + 40))
#define puStack_90 (*(uint * *)(frame + 544))
#define local_280 (*(long *)(frame + 48))
#define local_278 (*(void * *)(frame + 56))
#define local_270 (*(uint *)(frame + 64))
#define local_26c (*(uint *)(frame + 68))
#define local_268 (*(uint * *)(frame + 72))
#define local_260 (*(undefined8 *)(frame + 80))
#define local_258 (*(undefined1 (*)[16])(frame + 88))
#define local_248 (*(undefined8 *)(frame + 104))
#define local_240 (*(uint * *)(frame + 112))
#define local_238 (*(undefined8 *)(frame + 120))
#define local_224 (*(uint *)(frame + 140))
#define local_220 (*(uint * *)(frame + 144))
#define local_218 (*(uint * *)(frame + 152))
#define local_210 (*(ulong *)(frame + 160))
#define local_208 (*(undefined1 (*)[12])(frame + 168))
#define local_1f8 (*(uint * *)(frame + 184))
#define local_1f0 (*(undefined1 (*)[16])(frame + 192))
#define local_1e0 (*(uint * *)(frame + 208))
#define local_1d8 (*(undefined1 (*)[8])(frame + 216))
#define local_1c8 (*(uint * *)(frame + 232))
#define local_1c0 (*(undefined1 (*)[8])(frame + 240))
#define local_1b0 (*(undefined8 *)(frame + 256))
#define local_1a8 (*(undefined1 (*)[16])(frame + 264))
#define local_198 (*(undefined8 *)(frame + 280))
#define local_190 (*(undefined1 (*)[16])(frame + 288))
#define local_180 (*(undefined8 *)(frame + 304))
#define local_170 (*(undefined8 *)(frame + 320))
#define local_168 (*(undefined4 *)(frame + 328))
#define local_150 (*(code * *)(frame + 352))
#define stack0xfffffffffffffdfc (*(uint64_t *)(frame + 172))
#define stack0xfffffffffffffe00 (*(uint64_t *)(frame + 176))
#define stack0xffffffffffffff31 (*(uint64_t *)(frame + 481))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008640
 */

uchar recovered_10008640(void *param_1,ulong param_2,void *param_3)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint128 auVar4;
  uint128 auVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint128 auVar12;
  uint128 auVar13;
  undefined1 auVar14 [12];
  uchar uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint *puVar20;
  void *pvVar21;
  undefined4 extraout_var = 0;
  uint *puVar22;
  ushort *puVar23;
  undefined1 *puVar24;
  undefined7 uVar25;
  ushort uVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  ulong uVar31;
  uint **ppuVar32;
  long lVar33;
  byte bVar34;
  uint uVar35;
  ulong uVar36;
  short sVar37;
  uint uVar38;
  uint *puVar39;
  long *plVar40;
  undefined1 auVar41 [8];
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  uint uVar46;
  long lVar47;
  uint *puVar48;
  bool bVar49;

  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((long)param_3 + 0x10) = 0;
  recovered_10007040(*(void **)((long)param_3 + 8));
  *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
  *(undefined8 *)((long)param_3 + 0x18) = 0;
  bVar34 = 0;
  recovered_10007040((void *)0x0);
  local_130 = (undefined1 *)&local_298;
  local_150 = recovered_10006f90;
  local_148 = &DAT_10019d04;
  local_138 = &LAB_1000ab82;
  local_140 = (undefined1 *)((long)(uintptr_t)(frame + 688) + -8);
  recovered_10007510(&local_170);
  if (param_2 == 0 || param_1 == (void *)0x0) goto LAB_10009dab;
  ppuVar32 = (uint **)((long)param_3 + 8);
  if (param_2 < 8) {
    if (1 < param_2) goto LAB_10008729;
    goto LAB_10008895;
  }
  local_168 = 0xffffffff;
  iVar29 = recovered_10002580((long)param_1,((uintptr_t)pf_module_state + 0x284U),8);
  if (iVar29 == 0) {
    uVar31 = 4;
    do {
      uVar42 = uVar31;
      uVar31 = uVar42 * 2;
    } while (uVar42 < param_2);
    local_168 = 0xffffffff;
    local_e0 = (uint *)recovered_10006fe0(uVar42);
    uVar31 = 0;
    recovered_10007040((void *)0x0);
    auVar13 = local_1f0;
    if (param_2 < 0x20) {
LAB_10008ae8:
      do {
        *(undefined4 *)((long)local_e0 + uVar31) = *(undefined4 *)((long)param_1 + uVar31);
        uVar31 = uVar31 + 4;
        uVar42 = param_2 & 0xfffffffffffffffc;
        if ((param_2 & 0xfffffffffffffffc) == uVar31) goto joined_r0x10008b1a;
      } while( true );
    }
    uVar31 = param_2 & 0xffffffffffffffe0;
    uVar42 = 0;
    do {
      uVar19 = ((undefined8 *)((long)param_1 + uVar42))[1];
      puVar1 = (undefined8 *)((long)param_1 + uVar42 + 0x10);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      *(undefined8 *)((long)local_e0 + uVar42) = *(undefined8 *)((long)param_1 + uVar42);
      ((undefined8 *)((long)local_e0 + uVar42))[1] = uVar19;
      puVar1 = (undefined8 *)((long)local_e0 + uVar42 + 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      uVar42 = uVar42 + 0x20;
    } while (uVar31 != uVar42);
    if (uVar31 != param_2) {
      if ((param_2 & 0x1c) != 0) goto LAB_10008ae8;
      do {
        *(undefined1 *)((long)local_e0 + uVar31) = *(undefined1 *)((long)param_1 + uVar31);
        uVar42 = uVar31 + 1;
joined_r0x10008b1a:
        uVar31 = uVar42;
      } while (uVar31 != param_2);
    }
    (*(uint128 *)(void *)&local_208) = (uint128)0x0;
    local_1f8 = (uint *)0x0;
    PF_PART8(local_1f0, 0) = PF_PART8(local_1f0, 7) << 0x38;
    PF_PART4(local_1f0, 12) = PF_PART4(auVar13, 12);
    PF_PART4(local_1f0, 8) = 0;
    local_1e0 = (uint *)0x0;
    local_70 = param_3;
    recovered_10007040((void *)0x0);
    (*(uint128 *)(void *)&local_1d8) = (uint128)0x0;
    local_1c8 = (uint *)0x0;
    recovered_10007040((void *)0x0);
    (*(uint128 *)(void *)&local_1c0) = (uint128)0x0;
    local_1b0 = 0;
    recovered_10007040((void *)0x0);
    (*(uint128 *)(void *)local_1a8) = (uint128)0x0;
    local_198 = 0;
    recovered_10007040((void *)0x0);
    (*(uint128 *)(void *)local_190) = (uint128)0x0;
    local_180 = 0;
    recovered_10007040((void *)0x0);
    recovered_10007040((void *)0x0);
    recovered_10007040((void *)0x0);
    recovered_10007040((void *)0x0);
    local_168 = 0x10;
    local_40 = (uint *)param_2;
    iVar29 = recovered_10002580((long)local_e0,((uintptr_t)pf_module_state + 0x284U),8);
    if (iVar29 == 0) {
      if ((uint *)0x13 < local_40) {
        pbVar27 = (byte *)0x8;
        local_68 = (uint **)0x0;
        puVar48 = local_40;
LAB_1000911b:
        uVar18 = *(uint *)((long)local_e0 + (long)pbVar27);
        puVar45 = (uint *)(ulong)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8
                                 | uVar18 << 0x18);
        puVar22 = (uint *)(pbVar27 + 8);
        if ((uint *)((long)puVar48 - (long)puVar22) < puVar45 + 1) goto LAB_10008c47;
        local_48 = (uint *)((byte *)((long)local_e0 + (long)pbVar27) + 4);
        puVar30 = (uint *)((long)local_e0 + (long)puVar22);
        puVar48 = (uint *)((long)puVar22 + (long)puVar45);
        uVar18 = *(uint *)((long)local_e0 + (long)puVar48);
        uVar17 = recovered_100182e0(0,(long)local_48,4);
        if (puVar45 != (uint *)0x0) {
          uVar17 = recovered_100182e0(uVar17,(long)puVar30,(ulong)puVar45);
        }
        if (uVar17 != (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                      uVar18 << 0x18)) goto LAB_10008c47;
        local_60 = puVar48;
        local_58 = puVar22;
        local_50 = puVar30;
        local_38 = puVar45;
        if (local_1f0[4] == '\0') {
          local_168 = 0x11;
          iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x68dU),4);
          auVar13 = local_1f0;
          bVar34 = 0;
          if (((int)local_38 != 0xd) || (iVar29 != 0)) goto LAB_10008c4a;
          uVar18 = *local_50;
          PF_PART4(local_208, 0) =
               uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
          uVar18 = local_50[1];
          PF_PART4(local_208, 4) =
               uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
          local_208[8] = (byte)local_50[2];
          PF_PART3(local_208, 9) = 0;
          PF_PART1(uStack_1fc, 0) = *(byte *)((long)local_50 + 9);
          PF_PART3(uStack_1fc, 1) = 0;
          local_1f8 = (uint *)(ulong)CONCAT14(*(byte *)((long)local_50 + 0xb),
                                              (uint)*(byte *)((long)local_50 + 10));
          PF_PART3(local_1f0, 1) = 0;
          local_1f0[0] = (byte)local_50[3];
          PF_PART11(local_1f0, 5) = PF_PART11(auVar13, 5);
          local_1f0[4] = 1;
          bVar34 = 0;
          if ((PF_PART4(local_208, 0) == 0) ||
             ((PF_PART4(local_208, 4) == 0 || (bVar34 = 0, 6 < (byte)uStack_1fc)))) goto LAB_10008c4a;
          if ((0x55U >> ((byte)uStack_1fc & 0x1f) & 1) == 0) {
            if ((byte)uStack_1fc != 3) goto LAB_10008c4a;
            bVar6 = local_208[8] - 8;
          }
          else {
            bVar6 = local_208[8] - 8 & 0xf7;
          }
          bVar34 = 0;
          if (((bVar6 != 0) || (*(byte *)((long)local_50 + 10) != 0)) ||
             (*(byte *)((long)local_50 + 0xb) != 0)) goto LAB_10008c4a;
          puVar48 = local_40;
          puVar22 = local_38;
          if (1 < (byte)local_50[3]) goto LAB_10008c4a;
        }
        else {
          local_168 = 0x12;
          iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x6aeU),4);
          auVar13 = local_1f0;
          if (iVar29 == 0) {
            if ((((int)local_38 != 8) || (((ulong)local_68 & 1) != 0)) || (local_1f0[6] != '\0'))
            goto LAB_10008c47;
            local_1f0[6] = 1;
            auVar12 = local_1f0;
            uVar18 = *local_50;
            PF_PART4(local_1f0, 12) = PF_PART4(auVar13, 12);
            PF_PART8(local_1f0, 0) = PF_PART8(auVar12, 0);
            PF_PART4(local_1f0, 8) =
                 uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18
            ;
            puVar48 = local_40;
            puVar22 = local_38;
          }
          else {
            local_168 = 0x13;
            iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x6b3U),4);
            if (iVar29 == 0) {
              if (((int)local_38 != 0x1a) || (local_1f0[6] != '\x01')) goto LAB_10008c47;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_a8 = 0;
              uStack_a7 = 0;
              uStack_a6 = 0;
              local_a0 = 0;
              uVar18 = local_50[1];
              PF_PART4(local_d0, 0) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              uVar18 = local_50[2];
              PF_PART4(local_d0, 4) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              uVar18 = local_50[3];
              PF_PART4(uStack_c8, 0) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              uVar18 = local_50[4];
              PF_PART4(uStack_c8, 4) =
                   uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
              local_c0 = (uint *)(ulong)CONCAT14(*(byte *)((long)local_50 + 0x19),
                                                 (uint)(byte)local_50[6]);
              local_b8 = CONCAT31(PF_PART3(local_b8, 1),~(byte)local_68 & PF_PART8(local_190, 8) == 0);
              if ((PF_PART4(local_d0, 0) != 0) && (PF_PART4(local_d0, 4) != 0)) {
                if (((uint)uStack_c8 <= (uint)PF_PART4(local_208, 0)) &&
                   ((uint)PF_PART4(local_d0, 0) <= PF_PART4(local_208, 0) - (uint)uStack_c8)) {
                  if ((PF_PART4(uStack_c8, 4) <= (uint)PF_PART4(local_208, 4)) &&
                     ((((uint)PF_PART4(local_d0, 4) <= PF_PART4(local_208, 4) - PF_PART4(uStack_c8, 4) &&
                       ((byte)local_50[6] < 3)) && (*(byte *)((long)local_50 + 0x19) < 2)))) {
                    local_168 = 0x14;
                    recovered_100184f0((long *)local_190,(undefined8 *)local_d0);
                    puVar22 = local_38;
                    puVar48 = local_40;
                    recovered_10007040((void *)0x0);
                    goto LAB_100090ff;
                  }
                }
              }
              bVar34 = 0;
              pvVar21 = (void *)0x0;
              goto LAB_1000a4f0;
            }
            local_168 = 0x15;
            iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x6b8U),4);
            if (iVar29 == 0) {
              bVar34 = 0;
              uVar18 = (uint)local_38;
              if ((uVar18 == 0) || (0x300 < uVar18)) goto LAB_10008c4a;
              ppuVar32 = &puStack_1d0;
              plVar40 = (long *)local_1d8;
              if (uVar18 + (uint)((ulong)((long)local_38 * 0xaaaaaaab) >> 0x21) * -3 != 0)
              goto LAB_10008c4a;
            }
            else {
              local_168 = 0x17;
              iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x6bdU),4);
              if (iVar29 != 0) {
                local_168 = 0x18;
                iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x6c2U),4);
                if (iVar29 == 0) {
                  local_68 = (uint **)CONCAT71((int7)(CONCAT44(extraout_var,iVar29) >> 8),1);
                  puVar48 = local_40;
                  puVar22 = local_38;
                  if ((int)local_38 != 0) {
                    uStack_c8 = local_38;
                    (*(uint64_t *)(void *)local_d0) = (uint64_t)local_50;
                    local_168 = 0x19;
                    recovered_100186c0((long *)local_1a8,(undefined8 *)local_d0);
                    if (PF_PART8(local_190, 8) != 0) {
                      if (*(char *)(PF_PART8(local_190, 0) + -0x20 + PF_PART8(local_190, 8) * 0x38) == '\x01') {
                        local_168 = 0x1a;
                        recovered_100186c0((long *)(PF_PART8(local_190, 0) + PF_PART8(local_190, 8) * 0x38 + -0x18
                                                   ),(undefined8 *)local_d0);
                      }
                    }
                    local_1e0 = (uint *)((long)local_1e0 + (long)local_38);
                    puVar48 = local_40;
                    puVar22 = local_38;
                  }
                }
                else {
                  local_168 = 0x1b;
                  iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x6c7U),4);
                  if (iVar29 == 0) {
                    if (local_1f0[6] == '\x01') {
                      bVar34 = 0;
                      if ((4 < (uint)local_38) && (PF_PART8(local_190, 8) != 0)) {
                        PF_PART4(uStack_c8, 0) = (uint)local_38 - 4;
                        (*(uint64_t *)(void *)local_d0) = (uint64_t)(local_50 + 1);
                        PF_PART4(uStack_c8, 4) = 0;
                        local_168 = 0x1c;
                        recovered_10018790((long *)(PF_PART8(local_190, 0) + PF_PART8(local_190, 8) * 0x38 + -0x18
                                                   ),(undefined8 *)local_d0);
                        puVar48 = local_40;
                        puVar22 = local_38;
                        goto LAB_100090ff;
                      }
                      goto LAB_10008c51;
                    }
                    goto LAB_10008c47;
                  }
                  local_168 = 0x1d;
                  iVar29 = recovered_10002580((long)local_48,((uintptr_t)pf_module_state + 0x692U),4);
                  if (iVar29 == 0) {
                    if ((int)local_38 != 0) goto LAB_10008c47;
                    local_1f0[5] = 1;
                    goto LAB_10008d68;
                  }
                  puVar48 = local_40;
                  puVar22 = local_38;
                  if ((*local_48 & 0x20) == 0) goto LAB_10008c47;
                }
                goto LAB_100090ff;
              }
              if (((int)local_38 != 2 && uStack_1fc == 0) || ((int)local_38 != 6 && uStack_1fc == 2)
                 ) goto LAB_10008c47;
              if (uStack_1fc == 3) {
                ppuVar32 = &puStack_1b8;
                plVar40 = (long *)local_1c0;
                if ((uint *)((ulong)puStack_1d0 / 3) < local_38) goto LAB_10008c47;
              }
              else {
                bVar34 = 0;
                if (uStack_1fc == 4) goto LAB_10008c4a;
                ppuVar32 = &puStack_1b8;
                plVar40 = (long *)local_1c0;
                if (uStack_1fc == 6) goto LAB_10008c4a;
              }
            }
            *ppuVar32 = (uint *)0x0;
            local_168 = 0x16;
            recovered_100152b0(plVar40,*plVar40,(undefined1 *)local_50,
                               (byte *)((long)local_50 + (long)local_38));
            puVar48 = local_40;
            puVar22 = local_38;
          }
        }
LAB_100090ff:
        pbVar27 = (byte *)((long)local_58 + (long)puVar22) + 4;
        if (puVar48 < local_60 + 4) goto LAB_10008d68;
        goto LAB_1000911b;
      }
LAB_10008d68:
      if (local_1f0[4] != '\x01') goto LAB_10008c47;
      bVar34 = 0;
      if ((local_1f0[5] != '\x01') || (local_1e0 == (uint *)0x0)) goto LAB_10008c4a;
      if ((uStack_1fc == 3) && (puStack_1d0 == (uint *)0x0)) goto LAB_10008c47;
      if (local_1f0[6] != '\x01') {
LAB_10008df8:
        recovered_10007040((void *)0x0);
        (*(uint128 *)(void *)&local_d0) = (uint128)0x0;
        local_c0 = (uint *)0x0;
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = 0;
        uStack_a7 = 0;
        recovered_10007040((void *)0x0);
        if (uStack_1fc == 0) {
          pvVar21 = (void *)0x0;
          if (puStack_1b8 != (uint *)0x0) {
            bVar34 = 0;
            if (puStack_1b8 != (uint *)0x2) goto LAB_1000a4e5;
            local_b8 = (uint)(ushort)(*(ushort *)local_1c0 << 8 | *(ushort *)local_1c0 >> 8);
            local_a8 = 1;
            pvVar21 = (void *)0x0;
          }
LAB_1000a411:
          (*(uint128 *)(void *)&local_98) = (uint128)0x0;
          local_88 = (uint *)0x0;
          local_278 = pvVar21;
          if ((local_1f0[6] == '\x01') && (PF_PART8(local_190, 8) != 0)) {
            local_168 = 0x1f;
            uVar31 = recovered_1000ae60((uint *)local_208,local_d0,(long *)local_98);
            bVar34 = (byte)uVar31;
          }
          else {
            local_168 = 0x20;
            uVar31 = recovered_1000b3d0((uint *)local_208,(long *)local_1a8,local_d0,
                                        (long *)local_98);
            bVar34 = (byte)uVar31;
          }
          puVar48 = local_70;
          if (bVar34 == 0) {
            (*(uint64_t *)(void *)auVar41) = (*(uint64_t *)(void *)local_98);
          }
          else {
            *(undefined8 *)local_70 = PF_PART8(local_208, 0);
            local_70[4] = 0;
            local_70[5] = 0;
            recovered_10007040(*(void **)(local_70 + 2));
            __builtin_memcpy((void *)(puVar48 + 2),&local_98,8);
            *(uint **)(puVar48 + 4) = puStack_90;
            *(uint **)(puVar48 + 6) = local_88;
            (*(uint64_t *)(void *)auVar41) = (uint64_t)(uint *)0x0;
          }
          recovered_10007040((void *)(uintptr_t)(*(uint64_t *)(void *)auVar41));
          pvVar21 = local_278;
        }
        else {
          if (uStack_1fc == 2) {
            pvVar21 = (void *)0x0;
            if (puStack_1b8 != (uint *)0x0) {
              bVar34 = 0;
              if (puStack_1b8 != (uint *)0x6) goto LAB_1000a4e5;
              uStack_b4 = (uint)(ushort)(*(ushort *)local_1c0 << 8 | *(ushort *)local_1c0 >> 8);
              uStack_b0 = (uint)(ushort)(*(ushort *)((*(uint64_t *)(void *)local_1c0) + 2) << 8 |
                                        *(ushort *)((*(uint64_t *)(void *)local_1c0) + 2) >> 8);
              uStack_ac = (uint)(ushort)(*(ushort *)((*(uint64_t *)(void *)local_1c0) + 4) << 8 |
                                        *(ushort *)((*(uint64_t *)(void *)local_1c0) + 4) >> 8);
              uStack_a7 = 1;
              pvVar21 = (void *)0x0;
            }
            goto LAB_1000a411;
          }
          if (uStack_1fc == 3) {
            bVar34 = 0;
            pvVar21 = (void *)0x0;
            if ((puStack_1d0 != (uint *)0x0) &&
               (puVar48 = (uint *)((ulong)puStack_1d0 / 3), (ulong)puStack_1d0 % 3 == 0)) {
              puVar22 = (uint *)((long)puVar48 * 4);
              uStack_c8 = (uint *)0x0;
              if (puVar22 == (uint *)0x0) {
                pvVar21 = (void *)0x0;
                puVar22 = puStack_1d0;
              }
              else {
                local_48 = puStack_1d0;
                local_168 = 0x1e;
                local_40 = puVar22;
                local_38 = puVar48;
                pvVar21 = (void *)recovered_10006fe0((long)puVar22);
                puVar48 = (uint *)0x0;
                recovered_10007040((void *)0x0);
                local_c0 = local_40;
                if (local_40 < (uint *)0x20) {
LAB_10008f12:
                  do {
                    *(byte *)((long)pvVar21 + (long)puVar48) = 0xff;
                    puVar48 = (uint *)((long)puVar48 + 1);
                  } while (puVar48 < local_40);
                }
                else {
                  puVar48 = (uint *)((ulong)local_40 & 0xffffffffffffffe0);
                  puVar22 = (uint *)0x0;
                  do {
                    pbVar27 = (byte *)((long)pvVar21 + (long)puVar22);
                    pbVar27[0] = 0xff;
                    pbVar27[1] = 0xff;
                    pbVar27[2] = 0xff;
                    pbVar27[3] = 0xff;
                    pbVar27[4] = 0xff;
                    pbVar27[5] = 0xff;
                    pbVar27[6] = 0xff;
                    pbVar27[7] = 0xff;
                    pbVar27[8] = 0xff;
                    pbVar27[9] = 0xff;
                    pbVar27[10] = 0xff;
                    pbVar27[0xb] = 0xff;
                    pbVar27[0xc] = 0xff;
                    pbVar27[0xd] = 0xff;
                    pbVar27[0xe] = 0xff;
                    pbVar27[0xf] = 0xff;
                    pbVar27 = (byte *)((long)pvVar21 + 0x10 + (long)puVar22);
                    pbVar27[0] = 0xff;
                    pbVar27[1] = 0xff;
                    pbVar27[2] = 0xff;
                    pbVar27[3] = 0xff;
                    pbVar27[4] = 0xff;
                    pbVar27[5] = 0xff;
                    pbVar27[6] = 0xff;
                    pbVar27[7] = 0xff;
                    pbVar27[8] = 0xff;
                    pbVar27[9] = 0xff;
                    pbVar27[10] = 0xff;
                    pbVar27[0xb] = 0xff;
                    pbVar27[0xc] = 0xff;
                    pbVar27[0xd] = 0xff;
                    pbVar27[0xe] = 0xff;
                    pbVar27[0xf] = 0xff;
                    puVar22 = puVar22 + 8;
                  } while (puVar48 != puVar22);
                  if (local_40 != puVar48) goto LAB_10008f12;
                }
                uStack_c8 = puVar48;
                (*(uint64_t *)(void *)local_d0) = (uint64_t)pvVar21;
                puVar48 = local_38;
                puVar22 = local_48;
              }
              if ((uint *)0x2 < puVar22) {
                puVar24 = (undefined1 *)((*(uint64_t *)(void *)local_1d8) + 2);
                puVar22 = (uint *)0x0;
                do {
                  *(undefined1 *)((long)pvVar21 + (long)puVar22 * 4) = puVar24[-2];
                  *(undefined1 *)((long)pvVar21 + (long)puVar22 * 4 + 1) = puVar24[-1];
                  *(undefined1 *)((long)pvVar21 + (long)puVar22 * 4 + 2) = *puVar24;
                  puVar22 = (uint *)((long)puVar22 + 1);
                  puVar24 = puVar24 + 3;
                } while (puVar48 != puVar22);
              }
              if (puStack_1b8 != (uint *)0x0) {
                uVar31 = (ulong)(PF_PART4(local_1c0, 8) & 3);
                if (puStack_1b8 < (uint *)0x4) {
                  uVar42 = 0;
                }
                else {
                  uVar42 = 0;
                  do {
                    *(undefined1 *)((long)pvVar21 + uVar42 * 4 + 3) =
                         *(undefined1 *)((*(uint64_t *)(void *)local_1c0) + uVar42);
                    *(undefined1 *)((long)pvVar21 + uVar42 * 4 + 7) =
                         *(undefined1 *)((*(uint64_t *)(void *)local_1c0) + 1 + uVar42);
                    *(undefined1 *)((long)pvVar21 + uVar42 * 4 + 0xb) =
                         *(undefined1 *)((*(uint64_t *)(void *)local_1c0) + 2 + uVar42);
                    *(undefined1 *)((long)pvVar21 + uVar42 * 4 + 0xf) =
                         *(undefined1 *)((*(uint64_t *)(void *)local_1c0) + 3 + uVar42);
                    uVar42 = uVar42 + 4;
                  } while (((ulong)puStack_1b8 & 0xfffffffffffffffc) != uVar42);
                }
                if (uVar31 != 0) {
                  uVar36 = 0;
                  do {
                    *(undefined1 *)((long)pvVar21 + uVar36 * 4 + uVar42 * 4 + 3) =
                         *(undefined1 *)((*(uint64_t *)(void *)local_1c0) + uVar42 + uVar36);
                    uVar36 = uVar36 + 1;
                  } while (uVar31 != uVar36);
                }
              }
              goto LAB_1000a411;
            }
          }
          else {
            pvVar21 = (void *)0x0;
            bVar34 = 0;
            if (puStack_1b8 == (uint *)0x0) goto LAB_1000a411;
          }
        }
LAB_1000a4e5:
        uStack_c8 = (uint *)0x0;
LAB_1000a4f0:
        recovered_10007040(pvVar21);
        goto LAB_10008c4a;
      }
      if ((ulong)(uint)PF_PART4(local_1f0, 8) == 0) goto LAB_10008c47;
      if (PF_PART8(local_190, 8) - 1 < (ulong)(uint)PF_PART4(local_1f0, 8)) {
        lVar33 = 0;
        do {
          if (*(long *)(PF_PART8(local_190, 0) + 0x28 + lVar33) == 0) goto LAB_10008c47;
          lVar33 = lVar33 + 0x38;
        } while (PF_PART8(local_190, 8) * 0x38 != lVar33);
        goto LAB_10008df8;
      }
      bVar34 = 0;
    }
    else {
LAB_10008c47:
      bVar34 = 0;
LAB_10008c4a:
    }
LAB_10008c51:
    if (PF_PART8(local_190, 8) != 0) {
      lVar47 = PF_PART8(local_190, 8) * 0x38 + -0x10;
      lVar33 = PF_PART8(local_190, 8);
      do {
        *(undefined8 *)(PF_PART8(local_190, 0) + lVar47) = 0;
        recovered_10007040(*(void **)(PF_PART8(local_190, 0) + -8 + lVar47));
        lVar47 = lVar47 + -0x38;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
    }
    PF_PART8(local_190, 8) = 0;
    recovered_10007040((void *)PF_PART8(local_190, 0));
    PF_PART8(local_1a8, 8) = 0;
    recovered_10007040((void *)PF_PART8(local_1a8, 0));
    puStack_1b8 = (uint *)0x0;
    recovered_10007040(*(void **)(void *)local_1c0);
    puStack_1d0 = (uint *)0x0;
    recovered_10007040(*(void **)(void *)local_1d8);
    (*(uint64_t *)(void *)auVar41) = (uint64_t)local_e0;
    goto LAB_10009da6;
  }
LAB_10008729:
  if ((*(char *)param_1 == 'B') && (*(char *)((long)param_1 + 1) == 'M')) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_10007040(*(void **)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    bVar34 = 0;
    recovered_10007040((void *)0x0);
    if (param_2 < 0x1a) goto LAB_10009dab;
    if ((*(char *)param_1 == 'B') && (*(char *)((long)param_1 + 1) == 'M')) {
      uVar18 = *(uint *)((long)param_1 + 0xe);
      uVar31 = (ulong)uVar18;
      if (uVar31 == 0xc || 0x27 < uVar31) {
        puVar22 = (uint *)(ulong)*(uint *)((long)param_1 + 10);
        puVar48 = (uint *)(uVar31 + 0xe);
        if (uVar31 == 0xc) {
          uVar17 = (uint)*(ushort *)((long)param_1 + 0x12);
          uVar46 = (uint)*(ushort *)((long)param_1 + 0x14);
          sVar37 = *(short *)((long)param_1 + 0x16);
          uVar26 = *(ushort *)((long)param_1 + 0x18);
          uVar28 = 0;
          iVar29 = 0;
          local_e8 = (uint *)((ulong)PF_PART4(local_e8, 4) << 0x20);
          local_38 = puVar48;
LAB_100087ed:
          if (((uVar46 != 0 && uVar17 != 0) && sVar37 == 1) &&
             (puVar48 = (uint *)(param_2 - (long)puVar22),
             puVar22 <= param_2 && puVar48 != (uint *)0x0)) {
            if (iVar29 == 0) {
              uVar35 = 0;
              uVar38 = 0;
              uVar43 = 0;
              uVar44 = 0;
            }
            else {
              if ((iVar29 != 6) && (iVar29 != 3)) goto LAB_10008d56;
              local_50 = (uint *)CONCAT44(PF_PART4(local_50, 4),uVar17);
              if (uVar18 < 0x34) {
                uVar44 = 0;
                bVar34 = 0;
                local_58 = puVar48;
                if (param_2 < (ulong)(iVar29 == 6) * 4 + 0x42) goto LAB_10009dab;
                uVar38 = *(uint *)((long)param_1 + 0x36);
                uVar43 = *(uint *)((long)param_1 + 0x3a);
                uVar35 = *(uint *)((long)param_1 + 0x3e);
                if (iVar29 == 6) goto LAB_1000a07f;
              }
              else {
                uVar38 = *(uint *)((long)param_1 + 0x36);
                uVar43 = *(uint *)((long)param_1 + 0x3a);
                uVar35 = *(uint *)((long)param_1 + 0x3e);
                uVar44 = 0;
                if (0x37 < uVar18) {
LAB_1000a07f:
                  uVar44 = *(uint *)((long)param_1 + 0x42);
                }
              }
            }
            local_50 = (uint *)CONCAT44(PF_PART4(local_50, 4),uVar17);
            local_f0 = (ulong)uVar26;
            bVar8 = uVar38 != 0;
            bVar9 = uVar43 != 0;
            bVar7 = uVar26 != 0x10;
            bVar49 = uVar35 != 0;
            uVar17 = 0x1f;
            if (((bVar8 || bVar9) || bVar7) || bVar49) {
              uVar17 = uVar35;
            }
            uVar35 = 0x3e0;
            if (((bVar8 || bVar9) || bVar7) || bVar49) {
              uVar35 = uVar43;
            }
            local_d4 = 0x7c00;
            if (((bVar8 || bVar9) || bVar7) || bVar49) {
              local_d4 = uVar38;
            }
            (*(uint128 *)(void *)&local_208) = (uint128)0x0;
            PF_PART8(local_208, 0) = (uint *)0x0;
            local_1f8 = (uint *)0x0;
            puVar45 = (uint *)(ulong)uVar26;
            local_60 = (uint *)CONCAT44(PF_PART4(local_60, 4),uVar46);
            local_100 = puVar22;
            local_74 = uVar44;
            if ((((uVar26 == 0x20) && (local_d4 == 0)) && (uVar35 == 0)) && (uVar17 == 0)) {
              local_d4 = 0xff0000;
              uVar35 = 0xff00;
              uVar17 = 0xff;
              uVar18 = 0xff000000;
              local_58 = puVar48;
LAB_1000a272:
              local_80 = (uint *)((ulong)local_50 & 0xffffffff);
              uVar31 = (long)puVar45 * (long)local_80 + 0x1fU >> 3 & 0xffffffffffc;
              if (uVar31 != 0) {
                uVar42 = CONCAT44(0,uVar46);
                PF_PART8(auVar3, 8) = 0;
                PF_PART8(auVar3, 0) = uVar31;
                PF_PART8(auVar5, 8) = 0;
                PF_PART8(auVar5, 0) = uVar42;
                if (SUB168(auVar3 * auVar5,8) == 0) {
                  local_298 = uVar31;
                  local_108 = uVar17;
                  local_104 = uVar35;
                  local_74 = uVar18;
                  local_70 = param_3;
                  local_68 = ppuVar32;
                  local_48 = param_1;
                  if ((uint *)(uVar31 * uVar42) <= local_58) {
                    local_168 = 2;
                    local_288 = uVar42;
                    recovered_100132c0((long *)local_d0,uVar42 * (long)local_80 * 4);
                    local_48 = (uint *)((long)local_48 + (long)local_100);
                    local_268 = (uint *)(local_f0 >> 3 & 0x1fffffff);
                    local_280 = (long)local_80 * 4;
                    puVar48 = (uint *)0x0;
                    local_218 = (uint *)(ulong)((int)local_f0 - 1);
                    uVar31 = 0;
                    bVar49 = false;
                    local_210 = 0;
                    do {
                      uVar42 = (ulong)(~(uint)uVar31 + (uint)local_60);
                      if ((char)local_e8 != '\0') {
                        uVar42 = uVar31 & 0xffffffff;
                      }
                      puVar45 = (uint *)(uVar42 * local_298 + (long)local_48);
                      puVar22 = (uint *)0x2;
                      puVar30 = (uint *)0x0;
                      local_290 = uVar31;
                      local_100 = puVar48;
                      local_f8 = puVar45;
                      PF_PART1(local_260, 0) = bVar49;
                      PF_PART7(local_260, 1) = 0;
                      do {
                        puVar39 = local_100;
                        (*(uint64_t *)(void *)auVar41) = (*(uint64_t *)(void *)local_d0);
                        local_58 = puVar30;
                        local_50 = puVar45;
                        local_40 = puVar22;
                        local_38 = puVar48;
                        if ((uint)local_218 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x1000a67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar15 = (*(code *)(&DAT_1000ad7c +
                                             *(int *)(&DAT_1000ad7c + (long)local_218 * 4)))();
                          return uVar15;
                        }
                        if ((uint)local_f0 == 0x10) {
                          uVar18 = (uint)(ushort)*puVar45;
                        }
                        else {
                          uVar18 = *puVar45;
                        }
                        uVar17 = recovered_10013450(uVar18,local_d4);
                        *(byte *)((long)puVar39 + (long)((*(uint64_t *)(void *)auVar41) + (uintptr_t)puVar30 * 4)) =
                             (byte)uVar17;
                        uVar17 = recovered_10013450(uVar18,local_104);
                        *(byte *)((long)puVar39 + (*(uint64_t *)(void *)auVar41) + (long)(uintptr_t)puVar30 * 4 + 1) =
                             (byte)uVar17;
                        uVar17 = recovered_10013450(uVar18,local_108);
                        *(byte *)((long)puVar39 + (*(uint64_t *)(void *)auVar41) + (long)(uintptr_t)puVar30 * 4 + 2) =
                             (byte)uVar17;
                        if (local_74 == 0) {
                          bVar34 = 0xff;
                        }
                        else {
                          uVar18 = recovered_10013450(uVar18,local_74);
                          bVar34 = (byte)uVar18;
                        }
                        puVar20 = local_70;
                        *(byte *)((long)puVar39 + (*(uint64_t *)(void *)auVar41) + (long)(uintptr_t)puVar30 * 4 + 3) = bVar34;
                        local_210 = CONCAT71((int7)(local_210 >> 8),(byte)local_210 | bVar34 != 0) &
                                    0xffffffffffffff01;
                        puVar30 = (uint *)((long)local_58 + 1);
                        puVar45 = (uint *)((long)local_50 + (long)local_268);
                        puVar22 = (uint *)((long)local_40 + 3);
                        puVar48 = local_38 + 1;
                      } while (local_80 != puVar30);
                      uVar31 = local_290 + 1;
                      puVar48 = (uint *)((long)local_100 + local_280);
                      bVar49 = local_288 <= uVar31;
                    } while (uVar31 != local_288);
                    if ((((uint)local_f0 == 0x20) && (local_74 != 0)) &&
                       (((char)local_210 == '\0' && (3 < uStack_c8)))) {
                      uVar31 = 3;
                      do {
                        *(undefined1 *)((*(uint64_t *)(void *)local_d0) + uVar31) = 0xff;
                        uVar31 = uVar31 + 4;
                      } while (uVar31 < uStack_c8);
                    }
                    *local_70 = (uint)local_80;
                    local_70[1] = (uint)local_60;
                    if (local_68 == (uint **)local_d0) {
                      uVar25 = (undefined7)((*(uint64_t *)(void *)local_d0) >> 8);
                    }
                    else {
                      local_70[4] = 0;
                      local_70[5] = 0;
                      recovered_10007040(*(void **)(local_70 + 2));
                      auVar13 = (*(uint128 *)(void *)&local_d0);
                      __builtin_memcpy((void *)(puVar20 + 2),&local_d0,8);
                      *(uint **)(puVar20 + 4) = uStack_c8;
                      *(uint **)(puVar20 + 6) = local_c0;
                      (*(uint64_t *)(void *)local_d0) = (uint64_t)0x0;
                      local_c0 = (uint *)0x0;
                      uVar25 = PF_PART7(auVar13, 1);
                    }
                    local_260 = CONCAT71(uVar25,1);
                    uStack_c8 = (uint *)0x0;
                    recovered_10007040(*(void **)(void *)local_d0);
                    bVar34 = (byte)local_260;
                    goto LAB_1000a2d4;
                  }
                }
              }
              bVar34 = 0;
            }
            else {
              local_58 = puVar48;
              if (uVar26 < 9) {
                uVar46 = 1 << ((byte)uVar26 & 0x1f);
                if (uVar28 != 0) {
                  uVar46 = uVar28;
                }
                puVar22 = (uint *)(ulong)uVar46;
                bVar34 = 0;
                if (local_38 <= param_2) {
                  local_40 = (uint *)((ulong)(uVar18 != 0xc) + 3);
                  if ((ulong)((long)local_40 * (long)puVar22) <= param_2 - (long)local_38) {
                    local_d0[0] = 0xff;
                    local_168 = 1;
                    local_218 = puVar22;
                    local_108 = uVar17;
                    local_104 = uVar35;
                    local_80 = puVar45;
                    local_70 = param_3;
                    local_68 = ppuVar32;
                    local_48 = param_1;
                    recovered_10013130((long *)local_208,(long)puVar22 * 4,local_d0);
                    uVar31 = 1;
                    if (1 < (uint)local_218) {
                      uVar31 = (ulong)local_218 & 0xffffffff;
                    }
                    pbVar27 = (byte *)((long)local_38 + (long)local_48) + 2;
                    uVar42 = 0;
                    do {
                      *(byte *)(PF_PART8(local_208, 0) + uVar42 * 4) = *pbVar27;
                      *(byte *)(PF_PART8(local_208, 0) + 1 + uVar42 * 4) = pbVar27[-1];
                      *(byte *)(PF_PART8(local_208, 0) + 2 + uVar42 * 4) = pbVar27[-2];
                      uVar42 = uVar42 + 1;
                      pbVar27 = pbVar27 + (long)local_40;
                      ppuVar32 = local_68;
                      puVar45 = local_80;
                      param_1 = local_48;
                      param_3 = local_70;
                      uVar46 = (uint)local_60;
                      uVar17 = local_108;
                      uVar35 = local_104;
                    } while (uVar31 != uVar42);
                    goto LAB_1000a253;
                  }
                }
              }
              else {
LAB_1000a253:
                bVar34 = 0;
                if (((uint)local_f0 < 0x21) &&
                   (uVar18 = local_74, (0x101010112U >> ((ulong)puVar45 & 0x3f) & 1) != 0))
                goto LAB_1000a272;
              }
            }
LAB_1000a2d4:
            stack0xfffffffffffffe00 = 0;
            (*(uint64_t *)(void *)auVar41) = (uint64_t)PF_PART8(local_208, 0);
            goto LAB_10009da6;
          }
        }
        else if (uVar18 + 0xe <= param_2) {
          uVar17 = *(uint *)((long)param_1 + 0x12);
          uVar28 = *(uint *)((long)param_1 + 0x16);
          if (uVar28 != 0 && 0 < (int)uVar17) {
            local_e8 = (uint *)CONCAT44(PF_PART4(local_e8, 4),uVar28 >> 0x1f);
            uVar46 = -uVar28;
            if ((int)-uVar28 < 0) {
              uVar46 = uVar28;
            }
            sVar37 = *(short *)((long)param_1 + 0x1a);
            uVar26 = *(ushort *)((long)param_1 + 0x1c);
            iVar29 = *(int *)((long)param_1 + 0x1e);
            uVar28 = *(uint *)((long)param_1 + 0x2e);
            if ((uVar18 == 0x28) && ((iVar29 == 6 || (iVar29 == 3)))) {
              puVar48 = (uint *)((ulong)(iVar29 == 6) * 4 + 0x42);
            }
            local_38 = puVar48;
            goto LAB_100087ed;
          }
        }
      }
    }
  }
  else {
    if (0xd < param_2) {
      local_168 = 0xffffffff;
      iVar29 = recovered_10002580((long)param_1,((uintptr_t)pf_module_state + 0x680U),9);
      if (iVar29 == 0) {
        *(undefined8 *)param_3 = 0;
        *(undefined8 *)((long)param_3 + 0x10) = 0;
        recovered_10007040(*(void **)((long)param_3 + 8));
        *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
        *(undefined8 *)((long)param_3 + 0x18) = 0;
        bVar34 = 0;
        recovered_10007040((void *)0x0);
        if (param_2 < 0x1e) goto LAB_10009dab;
        local_168 = 0xffffffff;
        iVar29 = recovered_10002580((long)param_1,((uintptr_t)pf_module_state + 0x680U),9);
        if ((iVar29 != 0) || (*(char *)((long)param_1 + 0xd) != '\0')) goto LAB_10008d56;
        local_1f8 = (uint *)((ulong)local_1f8 & 0xffffffff);
        (*(uint128 *)(void *)local_1f0) = (uint128)0x0;
        local_1e0 = (uint *)0x0;
        local_38 = (uint *)((long)param_1 + 9);
        local_168 = 9;
        local_70 = param_3;
        local_68 = ppuVar32;
        local_48 = param_1;
        local_40 = (uint *)param_2;
        iVar29 = recovered_10002580((long)local_38,((uintptr_t)pf_module_state + 0x6a9U),4);
        if (iVar29 == 0) {
          uStack_1fc = 0;
          iVar29 = 4;
          bVar49 = false;
        }
        else {
          if (((((byte)*local_38 != 0x76) || (9 < (byte)(*(byte *)((long)local_48 + 10) - 0x30U))) ||
              (9 < (byte)(*(byte *)((long)local_48 + 0xb) - 0x30U))) ||
             (9 < (byte)((byte)local_48[3] - 0x30U))) {
            (*(uint64_t *)(void *)auVar41) = (uint64_t)0x0;
            bVar34 = 0;
            goto LAB_10009da6;
          }
          uVar18 = ((uint)*(byte *)((long)local_48 + 10) * 100 +
                    (uint)*(byte *)((long)local_48 + 0xb) * 10 + (uint)(byte)local_48[3]) - 0x14d0;
          uStack_1fc = uVar18;
          iVar29 = (uint)(10 < uVar18) * 4 + 4;
          bVar49 = 3 < uVar18;
        }
        __builtin_memcpy(&auVar14,&stack0xfffffffffffffdfc,12);
        local_1f8 = (uint *)CONCAT44(PF_PART4(local_1f8, 4),iVar29);
        uVar18 = *(uint *)((long)local_48 + 0xe);
        PF_PART4(local_208, 0) =
             uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        uVar18 = *(uint *)((long)local_48 + 0x12);
        PF_PART4(local_208, 4) =
             uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        uVar18 = *(uint *)((long)local_48 + 0x16);
        PF_PART4(local_208, 8) =
             uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        uStack_1fc = PF_PART4(auVar14, 8);
        local_220 = (uint *)0x1a;
        bVar34 = 0;
        if (((PF_PART4(local_208, 0) == 0) || (PF_PART4(local_208, 4) == 0)) || (2 < (uint)PF_PART4(local_208, 8)))
        goto LAB_1000a34c;
        if (bVar49) {
          uVar18 = *(uint *)((long)local_48 + 0x1a);
          uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
          local_220 = (uint *)0x1e;
          if (((uVar18 == 0) || (uVar18 == 0x96)) || (uVar18 == 100)) goto LAB_10009e75;
        }
        else {
LAB_10009e75:
          local_168 = 10;
          uVar16 = recovered_10013720((long)local_48,(ulong)local_40,(ulong *)&local_220,
                                      (long)local_208);
          if ((char)uVar16 != '\0') {
            (*(uint128 *)(void *)&local_98) = (uint128)0x0;
            local_88 = (uint *)0x0;
            local_58 = (uint *)((ulong)local_1f8 & 0xffffffff);
            puVar22 = (uint *)((long)local_40 - (long)local_220);
            puVar48 = local_220;
            while( true ) {
              if ((int)local_58 == 4) {
                if ((local_40 < puVar48) || (puVar22 < (uint *)0x4)) goto LAB_1000a332;
                uVar18 = *(uint *)((long)local_48 + (long)puVar48);
                puVar45 = (uint *)(ulong)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 |
                                          (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
              }
              else {
                if ((local_40 < puVar48) || (puVar22 < (uint *)0x8)) goto LAB_1000a332;
                uVar31 = *(ulong *)((long)local_48 + (long)puVar48);
                puVar45 = (uint *)(uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                                   (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8
                                   | (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                                   (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38);
              }
              (*(uint64_t *)(void *)local_d0) = (uint64_t)puVar45;
              if (puVar45 == (uint *)0x0) break;
              if (local_40 <= puVar45) goto LAB_1000a332;
              local_168 = 0xb;
              local_50 = puVar22;
              local_38 = puVar48;
              recovered_10013a30((long *)local_98,(undefined8 *)local_d0);
              puVar48 = (uint *)((long)local_38 + (long)local_58);
              puVar22 = (uint *)((long)local_50 - (long)local_58);
            }
            if (puStack_90 != (uint *)0x0) {
              local_50 = (uint *)(ulong)(uint)PF_PART4(local_208, 0);
              local_f8 = (uint *)(ulong)(uint)PF_PART4(local_208, 4);
              if ((ulong)((long)local_f8 * (long)local_50) >> 0x3e == 0) {
                ((uint8_t *)(void *)&auVar13)[0xf] = 0;
                PF_PART15(auVar13, 0) = stack0xffffffffffffff31;
                (*(uint128 *)(void *)&local_d0) = auVar13 << 8;
                local_168 = 0xc;
                recovered_10013b70((long *)&local_240,(long)local_f8 * (long)local_50 * 4,local_d0);
                puVar45 = puStack_90;
                uVar31 = local_210;
                auVar13 = (*(uint128 *)(void *)&local_d0);
                puVar48 = local_70;
                puVar22 = local_40;
                goto joined_r0x1000a7bf;
              }
            }
LAB_1000a332:
            bVar34 = 0;
            goto LAB_1000a335;
          }
        }
        bVar34 = 0;
        (*(uint64_t *)(void *)auVar41) = (uint64_t)PF_PART8(local_1f0, 0);
        goto LAB_10009da6;
      }
    }
LAB_10008895:
    local_168 = 0xffffffff;
    uVar19 = recovered_100084e0(param_1,param_2);
    if ((char)uVar19 != '\0') {
      *(undefined8 *)param_3 = 0;
      *(undefined8 *)((long)param_3 + 0x10) = 0;
      recovered_10007040(*(void **)((long)param_3 + 8));
      *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
      *(undefined8 *)((long)param_3 + 0x18) = 0;
      bVar34 = 0;
      recovered_10007040((void *)0x0);
      local_168 = 0xffffffff;
      uVar19 = recovered_100084e0(param_1,param_2);
      if ((char)uVar19 == '\0') goto LAB_10009dab;
      bVar34 = *(byte *)((long)param_1 + 2);
      puVar22 = (uint *)(ulong)bVar34;
      local_220 = (uint *)CONCAT44(PF_PART4(local_220, 4),(uint)*(ushort *)((long)param_1 + 3));
      uVar26 = *(ushort *)((long)param_1 + 5);
      local_114 = (uint)uVar26;
      puVar48 = (uint *)(ulong)*(byte *)((long)param_1 + 7);
      local_110 = (uint)*(ushort *)((long)param_1 + 0xc);
      local_10c = (uint)*(ushort *)((long)param_1 + 0xe);
      local_224 = (uint)*(byte *)((long)param_1 + 0x10);
      local_270 = (uint)*(byte *)((long)param_1 + 0x11);
      local_26c = bVar34 - 8;
      if (bVar34 < 8) {
        local_26c = (uint)bVar34;
      }
      puVar45 = (uint *)((ulong)*(byte *)param_1 + 0x12);
      (*(uint64_t *)(void *)local_d0) = (uint64_t)0x0;
      uStack_c8 = (uint *)0x0;
      local_c0 = (uint *)0x0;
      if (*(char *)((long)param_1 + 1) == '\x01') {
        bVar34 = 0;
        local_50 = puVar48;
        local_38 = puVar22;
        if (puVar45 <= param_2) {
          puVar22 = (uint *)(ulong)(*(byte *)((long)param_1 + 7) + 7 >> 3);
          puVar30 = (uint *)((long)puVar22 * (ulong)uVar26);
          if (puVar30 <= (uint *)(param_2 - (long)puVar45)) {
            puVar39 = (uint *)(ulong)((uint)uVar26 * 4);
            local_60 = puVar30;
            if ((ulong)uVar26 == 0) {
              puVar30 = (uint *)0x0;
              local_70 = param_3;
            }
            else {
              local_168 = 4;
              local_e8 = puVar39;
              local_80 = puVar22;
              local_70 = param_3;
              local_68 = ppuVar32;
              local_58 = puVar45;
              local_48 = param_1;
              local_40 = (uint *)param_2;
              puVar20 = (uint *)recovered_10006fe0((long)puVar39);
              param_2 = (ulong)local_40;
              param_1 = local_48;
              puVar48 = local_50;
              puVar30 = uStack_c8;
              if (uStack_c8 != (uint *)0x0) {
                puVar22 = (uint *)0x0;
                if (((uint *)0x3 < uStack_c8) && (0x1f < (ulong)((long)puVar20 - (*(uint64_t *)(void *)local_d0)))) {
                  if (uStack_c8 < (uint *)0x20) {
                    puVar45 = (uint *)0x0;
                  }
                  else {
                    puVar22 = (uint *)((ulong)uStack_c8 & 0xffffffffffffffe0);
                    puVar45 = (uint *)0x0;
                    do {
                      uVar19 = *(undefined8 *)((byte *)((*(uint64_t *)(void *)local_d0) + (long)puVar45) + 8);
                      uVar10 = *(undefined8 *)((long)((*(uint64_t *)(void *)local_d0) + 0x10) + (long)puVar45);
                      uVar11 = *(undefined8 *)
                                ((byte *)((long)((*(uint64_t *)(void *)local_d0) + 0x10) + (long)puVar45) + 8);
                      *(undefined8 *)((long)puVar20 + (long)puVar45) =
                           *(undefined8 *)((*(uint64_t *)(void *)local_d0) + (long)puVar45);
                      *(undefined8 *)((byte *)((long)puVar20 + (long)puVar45) + 8) = uVar19;
                      *(undefined8 *)((long)(puVar20 + 4) + (long)puVar45) = uVar10;
                      *(undefined8 *)((byte *)((long)(puVar20 + 4) + (long)puVar45) + 8) = uVar11;
                      puVar45 = puVar45 + 8;
                    } while (puVar22 != puVar45);
                    if (uStack_c8 == puVar22) goto LAB_100097a9;
                    puVar45 = puVar22;
                    if (((ulong)uStack_c8 & 0x1c) == 0) goto LAB_10009756;
                  }
                  puVar22 = (uint *)((ulong)uStack_c8 & 0xfffffffffffffffc);
                  do {
                    *(undefined4 *)((long)puVar20 + (long)puVar45) =
                         *(undefined4 *)((*(uint64_t *)(void *)local_d0) + (long)puVar45);
                    puVar45 = puVar45 + 1;
                  } while (puVar22 != puVar45);
                  if (uStack_c8 == puVar22) goto LAB_100097a9;
                }
LAB_10009756:
                uVar31 = (ulong)uStack_c8 & 3;
                puVar45 = puVar22;
                if (uVar31 != 0) {
                  do {
                    *(byte *)((long)puVar20 + (long)puVar45) =
                         *(byte *)((*(uint64_t *)(void *)local_d0) + (long)puVar45);
                    puVar45 = (uint *)((long)puVar45 + 1);
                    uVar31 = uVar31 - 1;
                  } while (uVar31 != 0);
                }
                if ((ulong)((long)puVar22 - (long)uStack_c8) < 0xfffffffffffffffd) {
                  do {
                    *(byte *)((long)puVar20 + (long)puVar45) =
                         *(byte *)((*(uint64_t *)(void *)local_d0) + (long)puVar45);
                    *(byte *)((long)puVar20 + 1 + (long)puVar45) =
                         *(byte *)((*(uint64_t *)(void *)local_d0) + 1 + (long)puVar45);
                    *(byte *)((long)puVar20 + 2 + (long)puVar45) =
                         *(byte *)((*(uint64_t *)(void *)local_d0) + 2 + (long)puVar45);
                    *(byte *)((long)puVar20 + 3 + (long)puVar45) =
                         *(byte *)((*(uint64_t *)(void *)local_d0) + 3 + (long)puVar45);
                    puVar45 = puVar45 + 1;
                  } while (uStack_c8 != puVar45);
                }
              }
LAB_100097a9:
              recovered_10007040(*(void **)(void *)local_d0);
              local_c0 = local_e8;
              ppuVar32 = local_68;
              puVar39 = local_e8;
              puVar22 = local_80;
              puVar45 = local_58;
              (*(uint64_t *)(void *)local_d0) = (uint64_t)puVar20;
            }
            while (puVar30 < puVar39) {
              *(byte *)((*(uint64_t *)(void *)local_d0) + (long)puVar30) = 0xff;
              puVar30 = (uint *)((long)uStack_c8 + 1);
              uStack_c8 = puVar30;
            }
            if (local_114 != 0) {
              puVar23 = (ushort *)((long)param_1 + (long)puVar45);
              iVar29 = (int)puVar48;
              uVar31 = 0;
              do {
                if ((char)puVar48 == '\b') {
                  bVar34 = (byte)*puVar23;
                  *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4) = bVar34;
LAB_100098ce:
                  *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 1) = bVar34;
                  *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 2) = (byte)*puVar23;
LAB_100098a1:
                  bVar34 = 0xff;
                }
                else {
                  if (iVar29 - 0xfU < 2) {
                    uVar26 = *puVar23;
                    *(char *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4) =
                         (char)((uVar26 >> 10 & 0x1f) * 0x20e7f7 >> 0x12);
                    *(char *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 1) =
                         (char)((uVar26 >> 5 & 0x1f) * 0x20e7f7 >> 0x12);
                    *(char *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 2) =
                         (char)((uVar26 & 0x1f) * 0x20e7f7 >> 0x12);
                    goto LAB_100098a1;
                  }
                  if (iVar29 != 0x20) {
                    if (iVar29 == 0x18) {
                      *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4) = (byte)puVar23[1];
                      bVar34 = *(byte *)((long)puVar23 + 1);
                      goto LAB_100098ce;
                    }
                    bVar34 = 0;
                    goto LAB_10009d9b;
                  }
                  *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4) = (byte)puVar23[1];
                  *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 1) = *(byte *)((long)puVar23 + 1);
                  *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 2) = (byte)*puVar23;
                  bVar34 = *(byte *)((long)puVar23 + 3);
                }
                *(byte *)((*(uint64_t *)(void *)local_d0) + uVar31 * 4 + 3) = bVar34;
                uVar31 = uVar31 + 1;
                puVar23 = (ushort *)((long)puVar23 + (long)puVar22);
              } while (uVar31 < local_114);
            }
            puVar45 = (uint *)((long)puVar45 + (long)local_60);
            puVar22 = local_38;
            param_3 = local_70;
            goto LAB_10009937;
          }
        }
      }
      else {
LAB_10009937:
        local_240 = (uint *)((ulong)local_10c * (ulong)local_110);
        if ((ulong)local_240 >> 0x3e == 0) {
          (*(uint64_t *)(void *)local_98) = (uint64_t)0x0;
          puStack_90 = (uint *)0x0;
          local_88 = (uint *)0x0;
          local_70 = param_3;
          local_68 = ppuVar32;
          local_48 = param_1;
          local_40 = (uint *)param_2;
          if (local_240 != (uint *)0x0) {
            local_50 = (uint *)((long)local_240 * 4);
            local_168 = 5;
            local_58 = puVar45;
            local_38 = puVar22;
            puVar30 = (uint *)recovered_10006fe0((long)local_50);
            param_2 = (ulong)local_40;
            param_1 = local_48;
            puVar48 = puStack_90;
            if (puStack_90 != (uint *)0x0) {
              puVar22 = (uint *)0x0;
              if (((uint *)0x3 < puStack_90) && (0x1f < (ulong)((long)puVar30 - (*(uint64_t *)(void *)local_98)))) {
                if (puStack_90 < (uint *)0x20) {
                  puVar45 = (uint *)0x0;
                }
                else {
                  puVar22 = (uint *)((ulong)puStack_90 & 0xffffffffffffffe0);
                  puVar45 = (uint *)0x0;
                  do {
                    uVar19 = *(undefined8 *)((byte *)((*(uint64_t *)(void *)local_98) + (long)puVar45) + 8);
                    uVar10 = *(undefined8 *)((long)((*(uint64_t *)(void *)local_98) + 0x10) + (long)puVar45);
                    uVar11 = *(undefined8 *)
                              ((byte *)((long)((*(uint64_t *)(void *)local_98) + 0x10) + (long)puVar45) + 8);
                    *(undefined8 *)((long)puVar30 + (long)puVar45) =
                         *(undefined8 *)((*(uint64_t *)(void *)local_98) + (long)puVar45);
                    *(undefined8 *)((byte *)((long)puVar30 + (long)puVar45) + 8) = uVar19;
                    *(undefined8 *)((long)(puVar30 + 4) + (long)puVar45) = uVar10;
                    *(undefined8 *)((byte *)((long)(puVar30 + 4) + (long)puVar45) + 8) = uVar11;
                    puVar45 = puVar45 + 8;
                  } while (puVar22 != puVar45);
                  if (puStack_90 == puVar22) goto LAB_10009a88;
                  puVar45 = puVar22;
                  if (((ulong)puStack_90 & 0x1c) == 0) goto LAB_10009a35;
                }
                puVar22 = (uint *)((ulong)puStack_90 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)((long)puVar30 + (long)puVar45) =
                       *(undefined4 *)((*(uint64_t *)(void *)local_98) + (long)puVar45);
                  puVar45 = puVar45 + 1;
                } while (puVar22 != puVar45);
                if (puStack_90 == puVar22) goto LAB_10009a88;
              }
LAB_10009a35:
              uVar31 = (ulong)puStack_90 & 3;
              puVar45 = puVar22;
              if (uVar31 != 0) {
                do {
                  *(byte *)((long)puVar30 + (long)puVar45) =
                       *(byte *)((*(uint64_t *)(void *)local_98) + (long)puVar45);
                  puVar45 = (uint *)((long)puVar45 + 1);
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              if ((ulong)((long)puVar22 - (long)puStack_90) < 0xfffffffffffffffd) {
                do {
                  *(byte *)((long)puVar30 + (long)puVar45) =
                       *(byte *)((*(uint64_t *)(void *)local_98) + (long)puVar45);
                  *(byte *)((long)puVar30 + 1 + (long)puVar45) =
                       *(byte *)((*(uint64_t *)(void *)local_98) + 1 + (long)puVar45);
                  *(byte *)((long)puVar30 + 2 + (long)puVar45) =
                       *(byte *)((*(uint64_t *)(void *)local_98) + 2 + (long)puVar45);
                  *(byte *)((long)puVar30 + 3 + (long)puVar45) =
                       *(byte *)((*(uint64_t *)(void *)local_98) + 3 + (long)puVar45);
                  puVar45 = puVar45 + 1;
                } while (puStack_90 != puVar45);
              }
            }
LAB_10009a88:
            recovered_10007040(*(void **)(void *)local_98);
            local_88 = local_50;
            while( true ) {
              puVar45 = local_58;
              puVar22 = local_38;
              (*(uint64_t *)(void *)local_98) = (uint64_t)puVar30;
              if (local_50 <= puVar48) break;
              *(byte *)((long)puVar30 + (long)puVar48) = 0;
              puVar48 = (uint *)((long)puStack_90 + 1);
              puStack_90 = puVar48;
            }
          }
          local_60 = (uint *)((ulong)local_224 + 7 >> 3);
          PF_PART8(auVar12, 8) = 0;
          PF_PART8(auVar12, 0) = PF_PART8(local_258, 8);
          (*(uint128 *)(void *)local_258) = auVar12 << 0x40;
          stack0xfffffffffffffe00 = &local_240;
          PF_PART8(local_208, 0) = local_258;
          local_1f8 = &local_26c;
          PF_PART8(local_1f0, 8) = &local_220;
          PF_PART8(local_1f0, 0) = &local_224;
          local_1e0 = &local_114;
          puStack_1d0 = &local_270;
          (*(uint64_t *)(void *)local_1d8) = (uint64_t)local_d0;
          local_1c8 = &local_110;
          puStack_1b8 = (uint *)local_98;
          (*(uint64_t *)(void *)local_1c0) = (uint64_t)&local_10c;
          if ((byte)puVar22 < 8) {
            if (local_240 == (uint *)0x0) {
              if (puVar45 <= param_2) goto LAB_10009d1c;
LAB_10009d17:
              bVar34 = 0;
            }
            else {
              bVar34 = 0;
              PF_PART8(auVar2, 8) = 0;
              PF_PART8(auVar2, 0) = local_240;
              PF_PART8(auVar4, 8) = 0;
              PF_PART8(auVar4, 0) = local_60;
              if (((SUB168(auVar2 * auVar4,8) == 0) && (puVar45 <= param_2)) &&
                 ((ulong)((long)local_240 * (long)local_60) <= param_2 - (long)puVar45)) {
                puVar45 = (uint *)((long)param_1 + (long)puVar45);
                puVar48 = (uint *)0x0;
                do {
                  local_168 = 6;
                  local_48 = puVar45;
                  local_40 = puVar48;
                  uVar19 = recovered_100134e0((undefined8 *)local_208,(ushort *)puVar45);
                  if ((char)uVar19 == '\0') goto LAB_10009d17;
                  puVar48 = (uint *)((long)local_40 + 1);
                  puVar45 = (uint *)((long)local_48 + (long)local_60);
                } while (puVar48 < local_240);
                goto LAB_10009d1c;
              }
            }
          }
          else {
            if (local_240 != (uint *)0x0) {
              local_80 = (uint *)(param_2 + -1);
              do {
                if (param_2 <= puVar45) goto LAB_10009d17;
                puVar48 = (uint *)((long)puVar45 + 1);
                iVar29 = (*(byte *)((long)param_1 + (long)puVar45) & 0x7f) + 1;
                if ((char)*(byte *)((long)param_1 + (long)puVar45) < '\0') {
                  if ((uint *)(param_2 - (long)puVar48) < local_60) goto LAB_10009d17;
                  local_58 = (uint *)((long)param_1 + (long)puVar48);
                  local_50 = (uint *)((long)puVar48 + (long)local_60);
                  do {
                    local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),iVar29);
                    local_168 = 7;
                    uVar19 = recovered_100134e0((undefined8 *)local_208,(ushort *)local_58);
                    if ((char)uVar19 == '\0') goto LAB_10009d17;
                    iVar29 = (int)local_38 + -1;
                  } while (iVar29 != 0);
                  puVar48 = local_50;
                }
                else {
                  puVar22 = (uint *)((long)local_80 - (long)puVar45);
                  do {
                    bVar34 = 0;
                    if ((param_2 < puVar48) || (puVar22 < local_60)) goto LAB_10009d7d;
                    local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),iVar29);
                    local_168 = 8;
                    local_58 = (uint *)((long)puVar22 - (long)local_60);
                    local_50 = puVar48;
                    uVar19 = recovered_100134e0((undefined8 *)local_208,
                                                (ushort *)((long)param_1 + (long)puVar48));
                    if ((char)uVar19 == '\0') goto LAB_10009d17;
                    puVar48 = (uint *)((long)local_50 + (long)local_60);
                    iVar29 = (int)local_38 + -1;
                    puVar22 = local_58;
                    param_1 = local_48;
                    param_2 = (ulong)local_40;
                  } while (iVar29 != 0);
                }
                puVar45 = puVar48;
                param_1 = local_48;
                param_2 = (ulong)local_40;
              } while ((ulong)PF_PART8(local_258, 0) < local_240);
            }
LAB_10009d1c:
            puVar48 = local_70;
            *local_70 = local_110;
            local_70[1] = local_10c;
            bVar34 = 1;
            if (local_68 != (uint **)local_98) {
              local_70[4] = 0;
              local_70[5] = 0;
              recovered_10007040(*(void **)(local_70 + 2));
              __builtin_memcpy((void *)(puVar48 + 2),&local_98,8);
              *(uint **)(puVar48 + 4) = puStack_90;
              *(uint **)(puVar48 + 6) = local_88;
              (*(uint64_t *)(void *)local_98) = (uint64_t)0x0;
              local_88 = (uint *)0x0;
            }
          }
LAB_10009d7d:
          puStack_90 = (uint *)0x0;
          recovered_10007040(*(void **)(void *)local_98);
        }
        else {
          bVar34 = 0;
        }
      }
LAB_10009d9b:
      uStack_c8 = (uint *)0x0;
      (*(uint64_t *)(void *)auVar41) = (*(uint64_t *)(void *)local_d0);
      goto LAB_10009da6;
    }
  }
LAB_10008d56:
  bVar34 = 0;
  goto LAB_10009dab;
joined_r0x1000a7bf:
  local_210 = (ulong)puVar45;
  local_70 = puVar48;
  if (local_210 == 0) goto LAB_1000a7c5;
  (*(uint128 *)(void *)&local_d0) = ZEXT812(0);
  PF_PART3(uStack_c8, 5) = PF_PART3(auVar13, 13);
  PF_PART1(uStack_c8, 4) = 1;
  local_c0 = (uint *)0xff;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_168 = 0xd;
  uVar15 = recovered_10013d00((long)local_48,(ulong)puVar22,(long)local_208,
                              *(ulong *)((*(uint64_t *)(void *)local_98) + (local_210 * 2 + -2) * 4),(uint *)local_d0
                             );
  if (uVar15 == '\0') {
LAB_1000aa8b:
    bVar34 = 0;
    goto LAB_1000aa8e;
  }
  puVar22 = local_40;
  if ((PF_PART1(uStack_c8, 4) == '\x01') && ((int)local_c0 != 0)) {
    (*(uint128 *)(void *)local_258) = (uint128)0x0;
    local_248 = 0;
    local_168 = 0xe;
    uVar31 = recovered_10014010((long)local_48,(ulong)local_40,(long)local_208,(uint *)local_d0,
                                (long *)local_258);
    if ((char)uVar31 == '\0') {
      PF_PART8(local_258, 8) = 0;
      recovered_10007040((void *)PF_PART8(local_258, 0));
      goto LAB_1000aa8b;
    }
    local_268 = (uint *)(ulong)(uint)PF_PART4(local_d0, 4);
    puVar22 = local_40;
    if (local_268 != (uint *)0x0) {
      local_d4 = local_b8;
      local_218 = (uint *)(ulong)(uint)PF_PART4(local_d0, 0);
      local_74 = PF_PART4(local_c0, 4);
      local_f0 = (long)local_218 * 4;
      local_e8 = (uint *)0x0;
      puVar48 = (uint *)0x0;
      do {
        uVar18 = local_d4 + (int)puVar48;
        local_100 = puVar48;
        if ((-1 < (int)uVar18 && (int)local_218 != 0) && (int)uVar18 < (int)local_f8) {
          local_80 = (uint *)((ulong)uVar18 * (long)local_50);
          puVar48 = local_218;
          puVar45 = local_e8;
          uVar18 = local_74;
          do {
            local_38 = puVar48;
            if ((int)uVar18 < (int)local_50 && -1 < (int)uVar18) {
              local_168 = 0xf;
              local_58 = (uint *)CONCAT44(PF_PART4(local_58, 4),uVar18);
              local_60 = puVar45;
              recovered_100148a0((byte *)(local_240 + (long)((ulong)uVar18 + (long)local_80)),
                                 (byte *)(PF_PART8(local_258, 0) + (long)puVar45));
              puVar22 = local_40;
              puVar45 = local_60;
              uVar18 = (uint)local_58;
            }
            puVar45 = puVar45 + 1;
            uVar18 = uVar18 + 1;
            puVar48 = (uint *)((long)local_38 + -1);
          } while (puVar48 != (uint *)0x0);
        }
        puVar48 = (uint *)((long)local_100 + 1);
        local_e8 = (uint *)((long)local_e8 + local_f0);
      } while (puVar48 != local_268);
    }
    PF_PART8(local_258, 8) = 0;
    recovered_10007040((void *)PF_PART8(local_258, 0));
  }
  puVar45 = (uint *)(local_210 - 1);
  uVar31 = local_210;
  auVar13 = (*(uint128 *)(void *)&local_d0);
  puVar48 = local_70;
  goto joined_r0x1000a7bf;
LAB_1000a7c5:
  *puVar48 = (uint)local_50;
  puVar48[1] = (uint)local_f8;
  bVar34 = 1;
  local_210 = uVar31;
  (*(uint128 *)(void *)&local_d0) = auVar13;
  if (local_68 != &local_240) {
    puVar48[4] = 0;
    puVar48[5] = 0;
    recovered_10007040(*(void **)(puVar48 + 2));
    *(uint **)(puVar48 + 2) = local_240;
    *(undefined8 *)(puVar48 + 4) = local_238;
    *(undefined8 *)(puVar48 + 6) = uStack_230;
    local_240 = (uint *)0x0;
    uStack_230 = 0;
  }
LAB_1000aa8e:
  local_238 = 0;
  recovered_10007040(local_240);
LAB_1000a335:
  puStack_90 = (uint *)0x0;
  recovered_10007040(*(void **)(void *)local_98);
LAB_1000a34c:
  (*(uint64_t *)(void *)auVar41) = (uint64_t)PF_PART8(local_1f0, 0);
LAB_10009da6:
  recovered_10007040((void *)(uintptr_t)(*(uint64_t *)(void *)auVar41));
LAB_10009dab:
  recovered_10007530(&local_170);
  return bVar34 & 1;
}

#undef DAT_1000ad7c
#undef DAT_10019d04
#undef LAB_1000ab82
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d4
#undef local_d0
#undef local_c0
#undef local_b8
#undef local_a8
#undef local_a0
#undef local_98
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
#undef uStack_230
#undef uStack_1fc
#undef puStack_1d0
#undef puStack_1b8
#undef uStack_c8
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a7
#undef uStack_a6
#undef local_298
#undef local_290
#undef local_288
#undef puStack_90
#undef local_280
#undef local_278
#undef local_270
#undef local_26c
#undef local_268
#undef local_260
#undef local_258
#undef local_248
#undef local_240
#undef local_238
#undef local_224
#undef local_220
#undef local_218
#undef local_210
#undef local_208
#undef local_1f8
#undef local_1f0
#undef local_1e0
#undef local_1d8
#undef local_1c8
#undef local_1c0
#undef local_1b0
#undef local_1a8
#undef local_198
#undef local_190
#undef local_180
#undef local_170
#undef local_168
#undef local_150
#undef stack0xfffffffffffffdfc
#undef stack0xfffffffffffffe00
#undef stack0xffffffffffffff31

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001ded0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x76cU)))
#define LAB_1000b7f8 (*(uint8_t *)(0x1000b7f8U))
#define local_100 (*(undefined1 * *)(frame + 80))
#define local_108 (*(undefined1 * *)(frame + 72))
#define local_110 (*(undefined * *)(frame + 64))
#define local_118 (*(code * *)(frame + 56))
#define local_130 (*(undefined4 *)(frame + 32))
#define local_138 (*(undefined8 *)(frame + 24))
#define local_38 (*(uint * *)(frame + 280))
#define local_40 (*(ulong *)(frame + 272))
#define local_48 (*(ulong *)(frame + 264))
#define local_50 (*(byte * *)(frame + 256))
#define local_58 (*(byte * *)(frame + 248))
#define local_78 (*(byte * *)(frame + 216))
#define local_80 (*(byte * *)(frame + 208))
#define local_88 (*(long * *)(frame + 200))
#define local_90 (*(ulong *)(frame + 192))
#define local_98 (*(ulong *)(frame + 184))
#define local_a0 (*(uint * *)(frame + 176))
#define local_a8 (*(uint * *)(frame + 168))
#define local_b0 (*(long *)(frame + 160))
#define local_b8 (*(byte * *)(frame + 152))
#define local_c0 (*(byte * *)(frame + 144))
#define local_c8 (*(ulong *)(frame + 136))
#define local_d0 (*(undefined8 *)(frame + 128))
#define local_e0 (*(byte * *)(frame + 112))
#define local_f8 (*(undefined1 * *)(frame + 88))
#define uStack_60 (*(undefined4 *)(frame + 240))
#define uStack_64 (*(undefined4 *)(frame + 236))
#define uStack_68 (*(undefined4 *)(frame + 232))
#define uStack_6c (*(undefined4 *)(frame + 228))
#define uStack_70 (*(undefined4 *)(frame + 224))
#define uStack_d8 (*(undefined8 *)(frame + 120))
ulong recovered_1000ae60(uint *param_1,byte *param_2,long *param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  byte bVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined7 uVar20;

  local_108 = (undefined1 *)((long)(uintptr_t)(frame + 336) + -8);
  local_f8 = (undefined1 *)&local_138;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_118 = recovered_10006f90;
  local_110 = &DAT_1001ded0;
  local_100 = &LAB_1000b7f8;
  local_80 = param_2;
  local_38 = param_1;
  recovered_10007510(&local_138);
  if ((ulong)uVar3 * (ulong)uVar2 >> 0x3e == 0) {
    uVar14 = (ulong)uVar3 * (ulong)uVar2 * 4;
    param_3[1] = 0;
    if ((ulong)param_3[2] < uVar14) {
      local_130 = 0xffffffff;
      lVar8 = recovered_10006fe0(uVar14);
      lVar10 = *param_3;
      uVar9 = param_3[1];
      if (uVar9 != 0) {
        uVar11 = 0;
        if ((3 < uVar9) && (0x1f < (ulong)(lVar8 - lVar10))) {
          if (uVar9 < 0x20) {
            uVar12 = 0;
          }
          else {
            uVar11 = uVar9 & 0xffffffffffffffe0;
            uVar12 = 0;
            do {
              uVar4 = ((undefined8 *)(lVar10 + uVar12))[1];
              puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar12);
              uVar5 = *puVar1;
              uVar6 = puVar1[1];
              *(undefined8 *)(lVar8 + uVar12) = *(undefined8 *)(lVar10 + uVar12);
              ((undefined8 *)(lVar8 + uVar12))[1] = uVar4;
              puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar12);
              *puVar1 = uVar5;
              puVar1[1] = uVar6;
              uVar12 = uVar12 + 0x20;
            } while (uVar11 != uVar12);
            if (uVar9 == uVar11) goto LAB_1000b4bf;
            uVar12 = uVar11;
            if ((uVar9 & 0x1c) == 0) goto LAB_1000b455;
          }
          uVar11 = uVar9 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar8 + uVar12) = *(undefined4 *)(lVar10 + uVar12);
            uVar12 = uVar12 + 4;
          } while (uVar11 != uVar12);
          if (uVar9 == uVar11) goto LAB_1000b4bf;
        }
LAB_1000b455:
        uVar17 = uVar9 & 3;
        uVar12 = uVar11;
        if (uVar17 != 0) {
          do {
            *(undefined1 *)(lVar8 + uVar12) = *(undefined1 *)(lVar10 + uVar12);
            uVar12 = uVar12 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (uVar11 - uVar9 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)(lVar8 + uVar12) = *(undefined1 *)(lVar10 + uVar12);
            *(undefined1 *)(lVar8 + 1 + uVar12) = *(undefined1 *)(lVar10 + 1 + uVar12);
            *(undefined1 *)(lVar8 + 2 + uVar12) = *(undefined1 *)(lVar10 + 2 + uVar12);
            *(undefined1 *)(lVar8 + 3 + uVar12) = *(undefined1 *)(lVar10 + 3 + uVar12);
            uVar12 = uVar12 + 4;
          } while (uVar9 != uVar12);
        }
      }
LAB_1000b4bf:
      recovered_10007040(lVar10);
      *param_3 = lVar8;
      param_3[2] = uVar14;
      uVar9 = param_3[1];
    }
    else {
      uVar9 = 0;
      lVar8 = 0;
    }
    while (uVar9 < uVar14) {
      *(undefined1 *)(*param_3 + uVar9) = 0;
      uVar9 = param_3[1] + 1;
      param_3[1] = uVar9;
    }
    lVar10 = *(long *)(local_38 + 0x20);
    local_88 = param_3;
    if (lVar10 == 0) {
LAB_1000b55d:
      local_78 = (byte *)0x0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_130 = 1;
      uVar14 = recovered_1000b3d0(local_38,(long *)(local_38 + 0x18),local_80,(long *)&local_78);
      plVar7 = local_88;
      if (((char)uVar14 == '\0') || (lVar10 = CONCAT44(uStack_6c,uStack_70), lVar10 != local_88[1]))
      {
        pbVar18 = local_78;
LAB_1000b7ca:
        recovered_10007040(pbVar18);
        goto LAB_1000b7cf;
      }
      local_88[1] = 0;
      recovered_10007040(*local_88);
      *plVar7 = (long)local_78;
      plVar7[1] = lVar10;
      plVar7[2] = CONCAT44(uStack_64,uStack_68);
      recovered_10007040(0);
      puVar15 = *(uint **)(local_38 + 0x1e);
      lVar10 = *(long *)(local_38 + 0x20);
    }
    else {
      puVar15 = *(uint **)(local_38 + 0x1e);
      bVar16 = 0;
      puVar13 = puVar15;
      do {
        while ((bVar16 & 1) != 0) {
          puVar13 = puVar13 + 0xe;
          bVar16 = 1;
          if (puVar13 == puVar15 + lVar10 * 0xe) goto LAB_1000b5e1;
        }
        bVar16 = (byte)puVar13[6];
        puVar13 = puVar13 + 0xe;
      } while (puVar13 != puVar15 + lVar10 * 0xe);
      if (bVar16 == 0) goto LAB_1000b55d;
    }
LAB_1000b5e1:
    uVar20 = (undefined7)((ulong)lVar8 >> 8);
    uVar14 = CONCAT71(uVar20,1);
    if (lVar10 != 0) {
      local_a8 = puVar15 + lVar10 * 0xe;
      do {
        uStack_68 = (undefined4)((ulong)*(undefined8 *)(local_38 + 3) >> 0x20);
        uStack_64 = (undefined4)*(undefined8 *)(local_38 + 5);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)(local_38 + 5) >> 0x20);
        uStack_70 = (undefined4)*(undefined8 *)(local_38 + 2);
        uStack_6c = (undefined4)((ulong)*(undefined8 *)(local_38 + 2) >> 0x20);
        local_40 = (ulong)*puVar15;
        local_78 = *(byte **)puVar15;
        local_98 = (ulong)puVar15[1];
        local_e0 = (byte *)0x0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_130 = 2;
        local_a0 = puVar15;
        uVar14 = recovered_1000b3d0((uint *)&local_78,(long *)(puVar15 + 8),local_80,
                                    (long *)&local_e0);
        if ((char)uVar14 == '\0') {
          pbVar18 = local_e0;
          goto LAB_1000b7ca;
        }
        local_90 = (ulong)*local_38;
        local_58 = local_e0;
        puVar15 = local_a0;
        if (local_98 != 0) {
          local_b0 = local_40 * 4;
          local_90 = local_90 << 2;
          local_50 = local_e0;
          local_48 = 0;
          do {
            if ((int)local_40 != 0) {
              pbVar19 = (byte *)((ulong)puVar15[2] * 4 + *local_88 +
                                (puVar15[3] + (int)local_48) * local_90);
              uVar14 = local_40;
              pbVar18 = local_50;
              do {
                local_c8 = uVar14;
                local_c0 = pbVar19;
                local_b8 = pbVar18;
                if (puVar15[5] == 0) {
                  local_130 = 3;
                  recovered_10000f90(pbVar19,pbVar18,4);
                }
                else {
                  local_130 = 4;
                  recovered_100148a0(pbVar19,pbVar18);
                }
                pbVar19 = local_c0 + 4;
                pbVar18 = local_b8 + 4;
                uVar14 = local_c8 - 1;
                puVar15 = local_a0;
              } while (uVar14 != 0);
            }
            local_48 = local_48 + 1;
            local_50 = local_50 + local_b0;
          } while (local_48 != local_98);
        }
        recovered_10007040(local_58);
        puVar15 = puVar15 + 0xe;
      } while (puVar15 != local_a8);
      uVar14 = CONCAT71(uVar20,1);
    }
  }
  else {
LAB_1000b7cf:
    uVar14 = 0;
  }
  recovered_10007530(&local_138);
  return uVar14 & 0xffffffff;
}

#undef DAT_1001ded0
#undef LAB_1000b7f8
#undef local_100
#undef local_108
#undef local_110
#undef local_118
#undef local_130
#undef local_138
#undef local_38
#undef local_40
#undef local_48
#undef local_50
#undef local_58
#undef local_78
#undef local_80
#undef local_88
#undef local_90
#undef local_98
#undef local_a0
#undef local_a8
#undef local_b0
#undef local_b8
#undef local_c0
#undef local_c8
#undef local_d0
#undef local_e0
#undef local_f8
#undef uStack_60
#undef uStack_64
#undef uStack_68
#undef uStack_6c
#undef uStack_70
#undef uStack_d8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001da84 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b0U)))
#define DAT_1001daa0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ccU)))
#define DAT_1001dabc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e8U)))
#define DAT_1001dad8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x504U)))
#define DAT_1001db9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x540U)))
#define DAT_1001dedc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
#define LAB_1000d592 (*(uint8_t *)(0x1000d592U))
#define local_100 (*(long (*)[4])(frame + 208))
#define local_108 (*(byte * *)(frame + 200))
#define local_110 (*(byte * *)(frame + 192))
#define local_118 (*(ulong *)(frame + 184))
#define local_11c (*(uint *)(frame + 180))
#define local_120 (*(uint *)(frame + 176))
#define local_138 (*(undefined1 * *)(frame + 152))
#define local_140 (*(undefined1 * *)(frame + 144))
#define local_148 (*(undefined1 * *)(frame + 136))
#define local_150 (*(undefined * *)(frame + 128))
#define local_158 (*(code * *)(frame + 120))
#define local_170 (*(undefined4 *)(frame + 96))
#define local_178 (*(undefined8 *)(frame + 88))
#define local_180 (*(byte * *)(frame + 80))
#define local_188 (*(ulong *)(frame + 72))
#define local_190 (*(byte * *)(frame + 64))
#define local_198 (*(long *)(frame + 56))
#define local_1a0 (*(ulong *)(frame + 48))
#define local_1a8 (*(byte * *)(frame + 40))
#define local_1b0 (*(byte * *)(frame + 32))
#define local_1b8 (*(byte * *)(frame + 24))
#define local_38 (*(byte * *)(frame + 408))
#define local_40 (*(byte * *)(frame + 400))
#define local_48 (*(byte * *)(frame + 392))
#define local_4c (*(uint *)(frame + 388))
#define local_58 (*(byte * *)(frame + 376))
#define local_60 (*(byte * *)(frame + 368))
#define local_68 (*(byte * *)(frame + 360))
#define local_70 (*(uint * *)(frame + 352))
#define local_78 (*(byte * *)(frame + 344))
#define local_80 (*(long *)(frame + 336))
#define local_88 (*(byte * *)(frame + 328))
#define local_90 (*(byte * *)(frame + 320))
#define local_98 (*(byte * *)(frame + 312))
#define local_a0 (*(long * *)(frame + 304))
#define local_a8 (*(ulong *)(frame + 296))
#define local_b0 (*(byte * *)(frame + 288))
#define local_b8 (*(byte * *)(frame + 280))
#define local_c0 (*(byte * *)(frame + 272))
#define local_c8 (*(byte * *)(frame + 264))
#define local_d0 (*(byte * *)(frame + 256))
#define local_e0 (*(byte * *)(frame + 240))
#define uStack_d8 (*(undefined8 *)(frame + 248))
ulong recovered_1000b3d0(uint *param_1,long *param_2,byte *param_3,long *param_4)

{
  unsigned char frame[496] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  byte bVar26;
  char cVar27;
  ushort uVar28;
  ushort uVar29;
  ulong uVar30;
  long lVar31;
  ushort uVar32;
  uint *puVar33;
  byte *pbVar34;
  ulong uVar35;

  local_148 = (undefined1 *)((long)(uintptr_t)(frame + 464) + -8);
  local_138 = (undefined1 *)&local_1b8;
  uVar16 = param_1[6];
  pbVar15 = (byte *)(ulong)*param_1;
  local_158 = recovered_10006f90;
  local_150 = &DAT_1001dedc;
  local_140 = &LAB_1000d592;
  local_c8 = param_3;
  local_a0 = param_4;
  recovered_10007510(&local_178);
  plVar25 = local_a0;
  local_70 = param_1;
  if (uVar16 == 0) {
    uVar16 = param_1[3];
    if ((ulong)uVar16 < 7) {
      if ((0x5dU >> (uVar16 & 0x1f) & 1) == 0) {
        pbVar18 = (byte *)0x0;
      }
      else {
        pbVar18 = (byte *)(ulong)(param_1[2] * *(int *)(&DAT_1001db9c + (ulong)uVar16 * 4));
      }
    }
    else {
      pbVar18 = (byte *)0x0;
    }
    if (0x3fffffffffffffff < (ulong)param_1[1] * (long)pbVar15) goto LAB_1000b9e7;
    uVar14 = (ulong)param_1[1] * (long)pbVar15 * 4;
    uVar35 = local_a0[1];
    local_60 = pbVar15;
    if (uVar14 < uVar35) {
      local_a0[1] = uVar14;
    }
    else if (uVar35 < uVar14) {
      if ((ulong)local_a0[2] < uVar14) {
        local_170 = 0xffffffff;
        lVar13 = recovered_10006fe0(uVar14);
        lVar31 = *plVar25;
        uVar35 = plVar25[1];
        if (uVar35 != 0) {
          uVar17 = 0;
          if ((3 < uVar35) && (0x1f < (ulong)(lVar13 - lVar31))) {
            if (uVar35 < 0x20) {
              uVar24 = 0;
            }
            else {
              uVar17 = uVar35 & 0xffffffffffffffe0;
              uVar24 = 0;
              do {
                uVar9 = ((undefined8 *)(lVar31 + uVar24))[1];
                puVar2 = (undefined8 *)(lVar31 + 0x10 + uVar24);
                uVar10 = *puVar2;
                uVar11 = puVar2[1];
                *(undefined8 *)(lVar13 + uVar24) = *(undefined8 *)(lVar31 + uVar24);
                ((undefined8 *)(lVar13 + uVar24))[1] = uVar9;
                puVar2 = (undefined8 *)(lVar13 + 0x10 + uVar24);
                *puVar2 = uVar10;
                puVar2[1] = uVar11;
                uVar24 = uVar24 + 0x20;
              } while (uVar17 != uVar24);
              if (uVar35 == uVar17) goto LAB_1000c889;
              uVar24 = uVar17;
              if ((uVar35 & 0x1c) == 0) goto LAB_1000c828;
            }
            uVar17 = uVar35 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)(lVar13 + uVar24) = *(undefined4 *)(lVar31 + uVar24);
              uVar24 = uVar24 + 4;
            } while (uVar17 != uVar24);
            if (uVar35 == uVar17) goto LAB_1000c889;
          }
LAB_1000c828:
          uVar30 = uVar35 & 3;
          uVar24 = uVar17;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)(lVar13 + uVar24) = *(undefined1 *)(lVar31 + uVar24);
              uVar24 = uVar24 + 1;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          if (uVar17 - uVar35 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)(lVar13 + uVar24) = *(undefined1 *)(lVar31 + uVar24);
              *(undefined1 *)(lVar13 + 1 + uVar24) = *(undefined1 *)(lVar31 + 1 + uVar24);
              *(undefined1 *)(lVar13 + 2 + uVar24) = *(undefined1 *)(lVar31 + 2 + uVar24);
              *(undefined1 *)(lVar13 + 3 + uVar24) = *(undefined1 *)(lVar31 + 3 + uVar24);
              uVar24 = uVar24 + 4;
            } while (uVar35 != uVar24);
          }
        }
LAB_1000c889:
        recovered_10007040(lVar31);
        *local_a0 = lVar13;
        local_a0[2] = uVar14;
        uVar35 = local_a0[1];
        plVar25 = local_a0;
      }
      while (uVar35 < uVar14) {
        *(undefined1 *)(*plVar25 + uVar35) = 0;
        uVar35 = plVar25[1] + 1;
        plVar25[1] = uVar35;
      }
    }
    local_100[0] = 0;
    local_100[1] = 0;
    local_100[2] = 0;
    local_100[3] = 0;
    local_e0 = (byte *)0x0;
    uStack_d8 = 0;
    local_d0 = (byte *)0x0;
    local_170 = 1;
    local_48 = pbVar18;
    uVar35 = recovered_10018860(local_100,param_2);
    if ((char)uVar35 == '\0') goto LAB_1000c978;
    local_48 = (byte *)((long)local_48 * (long)local_60);
    local_58 = (byte *)((ulong)(local_48 + 7) >> 3);
    uVar16 = local_70[3];
    uVar35 = (ulong)uVar16;
    local_118 = 1;
    if (((uVar35 < 7) && ((0x5dU >> (uVar16 & 0x1f) & 1) != 0)) &&
       (7 < *(int *)(&DAT_1001db9c + uVar35 * 4) * local_70[2])) {
      if ((0x5dU >> (uVar16 & 0x1f) & 1) == 0) {
        local_118 = 0;
      }
      else {
        local_118 = (ulong)(local_70[2] * *(int *)(&DAT_1001db9c + uVar35 * 4) + 7 >> 3);
      }
    }
    local_68 = local_58 + 1;
    local_170 = 2;
    local_78 = (byte *)recovered_10006fe0((long)local_68);
    pbVar15 = (byte *)0x0;
    recovered_10007040(0);
    if (local_48 < (byte *)0x31) goto LAB_1000ca58;
    if (local_48 < (byte *)0xf1) {
      pbVar18 = (byte *)0x0;
LAB_1000ca14:
      pbVar15 = (byte *)((ulong)local_68 & 0x3ffffffffffffff8);
      do {
        pbVar19 = local_78 + (long)pbVar18;
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        pbVar18 = pbVar18 + 8;
      } while (pbVar15 != pbVar18);
      for (; local_68 != pbVar15; pbVar15 = pbVar15 + 1) {
LAB_1000ca58:
        local_78[(long)pbVar15] = 0;
      }
    }
    else {
      pbVar15 = (byte *)((ulong)local_68 & 0x3fffffffffffffe0);
      pbVar18 = (byte *)0x0;
      do {
        pbVar19 = local_78 + (long)pbVar18;
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        pbVar19[8] = 0;
        pbVar19[9] = 0;
        pbVar19[10] = 0;
        pbVar19[0xb] = 0;
        pbVar19[0xc] = 0;
        pbVar19[0xd] = 0;
        pbVar19[0xe] = 0;
        pbVar19[0xf] = 0;
        pbVar19 = local_78 + 0x10 + (long)pbVar18;
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        pbVar19[8] = 0;
        pbVar19[9] = 0;
        pbVar19[10] = 0;
        pbVar19[0xb] = 0;
        pbVar19[0xc] = 0;
        pbVar19[0xd] = 0;
        pbVar19[0xe] = 0;
        pbVar19[0xf] = 0;
        pbVar18 = pbVar18 + 0x20;
      } while (pbVar15 != pbVar18);
      if (local_68 != pbVar15) {
        pbVar18 = pbVar15;
        if (((ulong)local_68 & 0x18) == 0) goto LAB_1000ca58;
        goto LAB_1000ca14;
      }
    }
    if ((local_70[3] == 6) && (local_70[2] == 8)) {
      if (local_70[1] == 0) {
LAB_1000cc08:
        uVar35 = CONCAT71((int7)((ulong)pbVar15 >> 8),local_d0 == local_e0);
      }
      else {
        if ((local_d0 <= (byte *)(-2 - (long)local_58)) && (local_d0 + (long)local_68 <= local_e0))
        {
          local_60 = local_78;
          local_170 = 3;
          local_c8 = (byte *)(-2 - (long)local_58);
          local_48 = local_d0 + (long)local_68;
          recovered_10000f90(local_78,local_d0 + local_100[3],(ulong)local_68);
          local_60 = local_60 + 1;
          local_d0 = local_48;
          local_170 = 4;
          uVar35 = recovered_10018a50((uint)*local_78,*local_a0,(long)local_60,0,(ulong)local_58,4);
          if ((char)uVar35 != '\0') {
            if (1 < local_70[1]) {
              uVar35 = 1;
              local_48 = (byte *)0x0;
              do {
                if ((local_c8 < local_d0) || (local_e0 < local_d0 + (long)local_68))
                goto LAB_1000cc7a;
                local_170 = 5;
                local_a8 = uVar35;
                local_88 = local_d0 + (long)local_68;
                recovered_10000f90(local_78,local_d0 + local_100[3],(ulong)local_68);
                local_d0 = local_88;
                local_170 = 6;
                uVar35 = recovered_10018a50((uint)*local_78,
                                            (long)(local_48 + *local_a0 + (long)local_58),
                                            (long)local_60,(long)(local_48 + *local_a0),
                                            (ulong)local_58,4);
                if ((char)uVar35 == '\0') goto LAB_1000cc7a;
                uVar35 = local_a8 + 1;
                local_48 = local_48 + (long)local_58;
              } while (uVar35 < local_70[1]);
            }
            goto LAB_1000cc08;
          }
        }
LAB_1000cc7a:
        uVar35 = 0;
      }
    }
    else {
      if (local_48 == (byte *)0x0) {
        pbVar15 = (byte *)0x0;
        pbVar18 = (byte *)0x0;
      }
      else {
        local_170 = 7;
        local_b0 = (byte *)recovered_10006fe0((long)local_58);
        pbVar15 = (byte *)0x0;
        recovered_10007040(0);
        local_60 = local_58 + (local_58 == (byte *)0x0);
        if (local_48 < (byte *)0x39) {
LAB_1000cd00:
          do {
            local_b0[(long)pbVar15] = 0;
            pbVar15 = pbVar15 + 1;
          } while (local_60 != pbVar15);
        }
        else if (local_48 < (byte *)0xf9) {
          pbVar18 = (byte *)0x0;
LAB_1000cccc:
          pbVar15 = (byte *)((ulong)local_60 & 0x1ffffffffffffff8);
          do {
            pbVar19 = local_b0 + (long)pbVar18;
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pbVar19[4] = 0;
            pbVar19[5] = 0;
            pbVar19[6] = 0;
            pbVar19[7] = 0;
            pbVar18 = pbVar18 + 8;
          } while (pbVar15 != pbVar18);
          if (local_58 != pbVar15) goto LAB_1000cd00;
        }
        else {
          pbVar15 = (byte *)((ulong)local_60 & 0x1fffffffffffffe0);
          pbVar18 = (byte *)0x0;
          do {
            pbVar19 = local_b0 + (long)pbVar18;
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pbVar19[4] = 0;
            pbVar19[5] = 0;
            pbVar19[6] = 0;
            pbVar19[7] = 0;
            pbVar19[8] = 0;
            pbVar19[9] = 0;
            pbVar19[10] = 0;
            pbVar19[0xb] = 0;
            pbVar19[0xc] = 0;
            pbVar19[0xd] = 0;
            pbVar19[0xe] = 0;
            pbVar19[0xf] = 0;
            pbVar19 = local_b0 + 0x10 + (long)pbVar18;
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
            pbVar19[4] = 0;
            pbVar19[5] = 0;
            pbVar19[6] = 0;
            pbVar19[7] = 0;
            pbVar19[8] = 0;
            pbVar19[9] = 0;
            pbVar19[10] = 0;
            pbVar19[0xb] = 0;
            pbVar19[0xc] = 0;
            pbVar19[0xd] = 0;
            pbVar19[0xe] = 0;
            pbVar19[0xf] = 0;
            pbVar18 = pbVar18 + 0x20;
          } while (pbVar15 != pbVar18);
          if (local_58 != pbVar15) {
            pbVar18 = pbVar15;
            if (((ulong)local_60 & 0x18) == 0) goto LAB_1000cd00;
            goto LAB_1000cccc;
          }
        }
        local_170 = 8;
        pbVar18 = (byte *)recovered_10006fe0((long)local_58);
        pbVar15 = (byte *)0x0;
        recovered_10007040(0);
        if (local_48 < (byte *)0x39) {
LAB_1000cdd0:
          do {
            pbVar18[(long)pbVar15] = 0;
            pbVar15 = pbVar15 + 1;
          } while (local_60 != pbVar15);
        }
        else if (local_48 < (byte *)0xf9) {
          pbVar19 = (byte *)0x0;
LAB_1000cd95:
          pbVar15 = (byte *)((ulong)local_60 & 0x1ffffffffffffff8);
          do {
            pbVar34 = pbVar18 + (long)pbVar19;
            pbVar34[0] = 0;
            pbVar34[1] = 0;
            pbVar34[2] = 0;
            pbVar34[3] = 0;
            pbVar34[4] = 0;
            pbVar34[5] = 0;
            pbVar34[6] = 0;
            pbVar34[7] = 0;
            pbVar19 = pbVar19 + 8;
          } while (pbVar15 != pbVar19);
          if (local_58 != pbVar15) goto LAB_1000cdd0;
        }
        else {
          pbVar15 = (byte *)((ulong)local_60 & 0x1fffffffffffffe0);
          pbVar19 = (byte *)0x0;
          do {
            pbVar34 = pbVar18 + (long)pbVar19;
            pbVar34[0] = 0;
            pbVar34[1] = 0;
            pbVar34[2] = 0;
            pbVar34[3] = 0;
            pbVar34[4] = 0;
            pbVar34[5] = 0;
            pbVar34[6] = 0;
            pbVar34[7] = 0;
            pbVar34[8] = 0;
            pbVar34[9] = 0;
            pbVar34[10] = 0;
            pbVar34[0xb] = 0;
            pbVar34[0xc] = 0;
            pbVar34[0xd] = 0;
            pbVar34[0xe] = 0;
            pbVar34[0xf] = 0;
            pbVar34 = pbVar18 + 0x10 + (long)pbVar19;
            pbVar34[0] = 0;
            pbVar34[1] = 0;
            pbVar34[2] = 0;
            pbVar34[3] = 0;
            pbVar34[4] = 0;
            pbVar34[5] = 0;
            pbVar34[6] = 0;
            pbVar34[7] = 0;
            pbVar34[8] = 0;
            pbVar34[9] = 0;
            pbVar34[10] = 0;
            pbVar34[0xb] = 0;
            pbVar34[0xc] = 0;
            pbVar34[0xd] = 0;
            pbVar34[0xe] = 0;
            pbVar34[0xf] = 0;
            pbVar19 = pbVar19 + 0x20;
          } while (pbVar15 != pbVar19);
          if (local_58 != pbVar15) {
            pbVar19 = pbVar15;
            if (((ulong)local_60 & 0x18) == 0) goto LAB_1000cdd0;
            goto LAB_1000cd95;
          }
        }
        pbVar15 = local_b0;
      }
      if (local_70[1] == 0) {
      }
      else {
        local_110 = (byte *)(-2 - (long)local_58);
        local_108 = local_78 + 1;
        local_80 = 0;
        local_a8 = 0;
        local_40 = pbVar15;
        local_b8 = pbVar18;
        pbVar15 = (byte *)0x0;
        do {
          pbVar18 = local_40;
          pbVar19 = local_b8;
          if (local_110 < local_d0) {
LAB_1000d52c:
            local_40 = pbVar19;
            local_b8 = pbVar18;
            uVar35 = 0;
            pbVar18 = local_40;
            pbVar15 = local_b8;
            goto switchD_1000cfac_caseD_1;
          }
          pbVar18 = local_40;
          pbVar19 = local_b8;
          if (local_e0 < local_d0 + (long)local_68) goto LAB_1000d52c;
          local_170 = 9;
          pbVar18 = local_b8;
          local_b8 = local_40;
          local_60 = local_d0 + (long)local_68;
          local_48 = pbVar15;
          local_40 = pbVar18;
          recovered_10000f90(local_78,local_d0 + local_100[3],(ulong)local_68);
          local_d0 = local_60;
          local_170 = 10;
          uVar35 = recovered_10018a50((uint)*local_78,(long)local_40,(long)local_108,(long)local_48,
                                      (ulong)local_58,local_118);
          pbVar18 = local_b8;
          pbVar19 = local_40;
          if ((char)uVar35 == '\0') goto LAB_1000d52c;
          uVar16 = *local_70;
          pbVar19 = (byte *)(ulong)uVar16;
          lVar31 = *local_a0;
          local_88 = *(byte **)(local_c8 + 8);
          uVar35 = 0;
          pbVar18 = local_40;
          pbVar15 = local_b8;
          if (6 < local_70[3]) goto switchD_1000cfac_caseD_1;
          pvVar1 = (void *)(lVar31 + local_a8 * (long)pbVar19 * 4);
          switch((uintptr_t)(local_70[3])) {
          case 0:
            if (local_70[2] == 8) {
              if (pbVar19 != (byte *)0x0) {
                lVar31 = local_80 * (long)pbVar19 + lVar31;
                pbVar15 = (byte *)0x0;
                do {
                  bVar20 = local_40[(long)pbVar15];
                  uVar16 = *(uint *)(local_c8 + 0x18);
                  bVar8 = local_c8[0x28];
                  *(byte *)(lVar31 + (long)pbVar15 * 4) = bVar20;
                  *(byte *)(lVar31 + 1 + (long)pbVar15 * 4) = bVar20;
                  *(byte *)(lVar31 + 2 + (long)pbVar15 * 4) = bVar20;
                  *(byte *)(lVar31 + 3 + (long)pbVar15 * 4) = -(~bVar8 & 1 | uVar16 != bVar20);
                  pbVar15 = pbVar15 + 1;
                } while (pbVar19 != pbVar15);
              }
            }
            else if (pbVar19 != (byte *)0x0) {
              lVar31 = local_80 * (long)pbVar19 + lVar31;
              pbVar15 = (byte *)0x0;
              do {
                bVar20 = local_40[(long)pbVar15 * 2];
                bVar8 = local_40[(long)pbVar15 * 2 + 1];
                bVar21 = local_c8[0x28];
                uVar16 = *(uint *)(local_c8 + 0x18);
                uVar22 = (undefined1)
                         ((ulong)((uint)CONCAT11(bVar20,bVar8) * 0xff + 0x7fff) / 0xffff);
                *(undefined1 *)(lVar31 + (long)pbVar15 * 4) = uVar22;
                *(undefined1 *)(lVar31 + 1 + (long)pbVar15 * 4) = uVar22;
                *(undefined1 *)(lVar31 + 2 + (long)pbVar15 * 4) = uVar22;
                *(byte *)(lVar31 + 3 + (long)pbVar15 * 4) =
                     -(~bVar21 & 1 | CONCAT11(bVar20,bVar8) != uVar16);
                pbVar15 = pbVar15 + 1;
              } while (pbVar19 != pbVar15);
            }
            break;
          default:
            goto switchD_1000cfac_caseD_1;
          case 2:
            if (local_70[2] == 8) {
              if (pbVar19 != (byte *)0x0) {
                lVar31 = local_80 * (long)pbVar19 + lVar31;
                pbVar15 = local_40 + 2;
                pbVar18 = (byte *)0x0;
                do {
                  cVar27 = -1;
                  if (((local_c8[0x29] == 1) && (*(uint *)(local_c8 + 0x1c) == (uint)pbVar15[-2]))
                     && (*(uint *)(local_c8 + 0x20) == (uint)pbVar15[-1])) {
                    cVar27 = -(*(uint *)(local_c8 + 0x24) != (uint)*pbVar15);
                  }
                  *(byte *)(lVar31 + (long)pbVar18 * 4) = pbVar15[-2];
                  *(byte *)(lVar31 + 1 + (long)pbVar18 * 4) = pbVar15[-1];
                  *(byte *)(lVar31 + 2 + (long)pbVar18 * 4) = *pbVar15;
                  *(char *)(lVar31 + 3 + (long)pbVar18 * 4) = cVar27;
                  pbVar18 = pbVar18 + 1;
                  pbVar15 = pbVar15 + 3;
                } while (pbVar19 != pbVar18);
              }
            }
            else if (pbVar19 != (byte *)0x0) {
              lVar31 = local_80 * (long)pbVar19 + lVar31;
              pbVar15 = local_40 + 5;
              pbVar18 = (byte *)0x0;
              do {
                uVar28 = *(ushort *)(pbVar15 + -5) << 8 | *(ushort *)(pbVar15 + -5) >> 8;
                uVar32 = *(ushort *)(pbVar15 + -3) << 8 | *(ushort *)(pbVar15 + -3) >> 8;
                uVar29 = *(ushort *)(pbVar15 + -1) << 8 | *(ushort *)(pbVar15 + -1) >> 8;
                bVar20 = local_c8[0x29];
                uVar16 = *(uint *)(local_c8 + 0x1c);
                uVar23 = *(uint *)(local_c8 + 0x20);
                uVar3 = *(uint *)(local_c8 + 0x24);
                *(char *)(lVar31 + (long)pbVar18 * 4) =
                     (char)((ulong)(((uint)uVar28 * 0x100 - (uint)uVar28) + 0x7fff) * 0x2000201 >>
                           0x29);
                *(char *)(lVar31 + 1 + (long)pbVar18 * 4) =
                     (char)((ulong)(((uint)uVar32 * 0x100 - (uint)uVar32) + 0x7fff) * 0x2000201 >>
                           0x29);
                *(char *)(lVar31 + 2 + (long)pbVar18 * 4) =
                     (char)((ulong)(((uint)uVar29 * 0x100 - (uint)uVar29) + 0x7fff) * 0x2000201 >>
                           0x29);
                *(byte *)(lVar31 + 3 + (long)pbVar18 * 4) =
                     -((uVar29 != uVar3 || uVar32 != uVar23) | ~bVar20 & 1 | uVar28 != uVar16);
                pbVar18 = pbVar18 + 1;
                pbVar15 = pbVar15 + 6;
              } while (pbVar19 != pbVar18);
            }
            break;
          case 3:
            if (pbVar19 != (byte *)0x0) {
              local_88 = (byte *)((ulong)local_88 >> 2);
              pbVar34 = (byte *)(lVar31 + local_80 * (long)pbVar19);
              pbVar15 = (byte *)0x0;
              local_190 = pbVar19;
              do {
                pbVar18 = local_b8;
                pbVar19 = local_40;
                if (local_88 <= (byte *)(ulong)local_40[(long)pbVar15]) goto LAB_1000d52c;
                local_170 = 0xb;
                local_60 = pbVar15;
                local_48 = pbVar34;
                recovered_10000f90(pbVar34,(void *)((ulong)local_40[(long)pbVar15] * 4 +
                                                   *(long *)local_c8),4);
                pbVar15 = local_60 + 1;
                pbVar34 = local_48 + 4;
              } while (local_190 != pbVar15);
            }
            break;
          case 4:
            if (local_70[2] == 8) {
              if (pbVar19 != (byte *)0x0) {
                if (uVar16 == 1) {
                  uVar35 = 0;
                }
                else {
                  lVar31 = lVar31 + local_80 * (long)pbVar19;
                  uVar35 = 0;
                  do {
                    bVar20 = local_40[uVar35 * 2];
                    *(byte *)(lVar31 + uVar35 * 4) = bVar20;
                    *(byte *)(lVar31 + 1 + uVar35 * 4) = bVar20;
                    *(byte *)(lVar31 + 2 + uVar35 * 4) = local_40[uVar35 * 2];
                    *(byte *)(lVar31 + 3 + uVar35 * 4) = local_40[uVar35 * 2 + 1];
                    bVar20 = local_40[uVar35 * 2 + 2];
                    *(byte *)(lVar31 + 4 + uVar35 * 4) = bVar20;
                    *(byte *)(lVar31 + 5 + uVar35 * 4) = bVar20;
                    *(byte *)(lVar31 + 6 + uVar35 * 4) = local_40[uVar35 * 2 + 2];
                    *(byte *)(lVar31 + 7 + uVar35 * 4) = local_40[uVar35 * 2 + 3];
                    uVar35 = uVar35 + 2;
                  } while ((uVar16 & 0xfffffffe) != uVar35);
                }
                if ((uVar16 & 1) != 0) {
                  bVar20 = local_40[uVar35 * 2];
                  *(byte *)((long)pvVar1 + uVar35 * 4) = bVar20;
                  *(byte *)((long)pvVar1 + uVar35 * 4 + 1) = bVar20;
                  *(byte *)((long)pvVar1 + uVar35 * 4 + 2) = local_40[uVar35 * 2];
                  *(byte *)((long)pvVar1 + uVar35 * 4 + 3) = local_40[uVar35 * 2 + 1];
                }
              }
            }
            else if (pbVar19 != (byte *)0x0) {
              lVar31 = local_80 * (long)pbVar19 + lVar31;
              pbVar15 = (byte *)0x0;
              do {
                bVar20 = local_40[(long)pbVar15 * 4 + 2];
                bVar8 = local_40[(long)pbVar15 * 4 + 3];
                uVar22 = (undefined1)
                         ((ulong)((uint)CONCAT11(local_40[(long)pbVar15 * 4],
                                                 local_40[(long)pbVar15 * 4 + 1]) * 0xff + 0x7fff) /
                         0xffff);
                *(undefined1 *)(lVar31 + (long)pbVar15 * 4) = uVar22;
                *(undefined1 *)(lVar31 + 1 + (long)pbVar15 * 4) = uVar22;
                *(undefined1 *)(lVar31 + 2 + (long)pbVar15 * 4) = uVar22;
                *(char *)(lVar31 + 3 + (long)pbVar15 * 4) =
                     (char)((ulong)((uint)CONCAT11(bVar20,bVar8) * 0xff + 0x7fff) / 0xffff);
                pbVar15 = pbVar15 + 1;
              } while (pbVar19 != pbVar15);
            }
            break;
          case 6:
            if (local_70[2] == 8) {
              local_170 = 0xc;
              recovered_10000f90(pvVar1,local_40,(long)pbVar19 << 2);
            }
            else if (pbVar19 != (byte *)0x0) {
              lVar31 = local_80 * (long)pbVar19 + lVar31;
              pbVar15 = (byte *)0x0;
              do {
                *(char *)(lVar31 + (long)pbVar15 * 4) =
                     (char)((ulong)((uint)CONCAT11(local_40[(long)pbVar15 * 8],
                                                   local_40[(long)pbVar15 * 8 + 1]) * 0xff + 0x7fff)
                           / 0xffff);
                *(char *)(lVar31 + 1 + (long)pbVar15 * 4) =
                     (char)((ulong)((uint)CONCAT11(local_40[(long)pbVar15 * 8 + 2],
                                                   local_40[(long)pbVar15 * 8 + 3]) * 0xff + 0x7fff)
                           / 0xffff);
                *(char *)(lVar31 + 2 + (long)pbVar15 * 4) =
                     (char)((ulong)((uint)CONCAT11(local_40[(long)pbVar15 * 8 + 4],
                                                   local_40[(long)pbVar15 * 8 + 5]) * 0xff + 0x7fff)
                           / 0xffff);
                *(char *)(lVar31 + 3 + (long)pbVar15 * 4) =
                     (char)((ulong)((uint)CONCAT11(local_40[(long)pbVar15 * 8 + 6],
                                                   local_40[(long)pbVar15 * 8 + 7]) * 0xff + 0x7fff)
                           / 0xffff);
                pbVar15 = pbVar15 + 1;
              } while (pbVar19 != pbVar15);
            }
          }
          local_a8 = local_a8 + 1;
          local_80 = local_80 + 4;
          pbVar18 = local_b8;
          pbVar15 = local_40;
        } while (local_a8 < local_70[1]);
      }
      uVar35 = CONCAT71((int7)((ulong)pbVar18 >> 8),local_d0 == local_e0);
switchD_1000cfac_caseD_1:
      recovered_10007040(pbVar18);
      recovered_10007040(pbVar15);
    }
    recovered_10007040(local_78);
  }
  else {
    if (0x3fffffffffffffff < (ulong)param_1[1] * (long)pbVar15) {
LAB_1000b9e7:
      uVar35 = 0;
      goto LAB_1000d572;
    }
    uVar35 = (ulong)param_1[1] * (long)pbVar15 * 4;
    local_a0[1] = 0;
    if ((ulong)local_a0[2] < uVar35) {
      local_170 = 0xffffffff;
      lVar13 = recovered_10006fe0(uVar35);
      lVar31 = *plVar25;
      uVar14 = plVar25[1];
      if (uVar14 != 0) {
        uVar17 = 0;
        if ((3 < uVar14) && (0x1f < (ulong)(lVar13 - lVar31))) {
          if (uVar14 < 0x20) {
            uVar24 = 0;
          }
          else {
            uVar17 = uVar14 & 0xffffffffffffffe0;
            uVar24 = 0;
            do {
              uVar9 = ((undefined8 *)(lVar31 + uVar24))[1];
              puVar2 = (undefined8 *)(lVar31 + 0x10 + uVar24);
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              *(undefined8 *)(lVar13 + uVar24) = *(undefined8 *)(lVar31 + uVar24);
              ((undefined8 *)(lVar13 + uVar24))[1] = uVar9;
              puVar2 = (undefined8 *)(lVar13 + 0x10 + uVar24);
              *puVar2 = uVar10;
              puVar2[1] = uVar11;
              uVar24 = uVar24 + 0x20;
            } while (uVar17 != uVar24);
            if (uVar14 == uVar17) goto LAB_1000bb3f;
            uVar24 = uVar17;
            if ((uVar14 & 0x1c) == 0) goto LAB_1000bad5;
          }
          uVar17 = uVar14 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar13 + uVar24) = *(undefined4 *)(lVar31 + uVar24);
            uVar24 = uVar24 + 4;
          } while (uVar17 != uVar24);
          if (uVar14 == uVar17) goto LAB_1000bb3f;
        }
LAB_1000bad5:
        uVar30 = uVar14 & 3;
        uVar24 = uVar17;
        if (uVar30 != 0) {
          do {
            *(undefined1 *)(lVar13 + uVar24) = *(undefined1 *)(lVar31 + uVar24);
            uVar24 = uVar24 + 1;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        if (uVar17 - uVar14 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)(lVar13 + uVar24) = *(undefined1 *)(lVar31 + uVar24);
            *(undefined1 *)(lVar13 + 1 + uVar24) = *(undefined1 *)(lVar31 + 1 + uVar24);
            *(undefined1 *)(lVar13 + 2 + uVar24) = *(undefined1 *)(lVar31 + 2 + uVar24);
            *(undefined1 *)(lVar13 + 3 + uVar24) = *(undefined1 *)(lVar31 + 3 + uVar24);
            uVar24 = uVar24 + 4;
          } while (uVar14 != uVar24);
        }
      }
LAB_1000bb3f:
      recovered_10007040(lVar31);
      *local_a0 = lVar13;
      local_a0[2] = uVar35;
      uVar14 = local_a0[1];
      plVar25 = local_a0;
    }
    else {
      uVar14 = 0;
    }
    while (uVar14 < uVar35) {
      *(undefined1 *)(*plVar25 + uVar14) = 0;
      uVar14 = plVar25[1] + 1;
      plVar25[1] = uVar14;
    }
    local_100[0] = 0;
    local_100[1] = 0;
    local_100[2] = 0;
    local_100[3] = 0;
    local_e0 = (byte *)0x0;
    uStack_d8 = 0;
    local_d0 = (byte *)0x0;
    local_170 = 0xd;
    uVar35 = recovered_10018860(local_100,param_2);
    if ((char)uVar35 == '\0') {
LAB_1000c978:
      uVar35 = 0;
    }
    else {
      uVar16 = local_70[3];
      uVar35 = (ulong)uVar16;
      local_188 = 1;
      if (((uVar35 < 7) && ((0x5dU >> (uVar16 & 0x1f) & 1) != 0)) &&
         (7 < *(int *)(&DAT_1001db9c + uVar35 * 4) * local_70[2])) {
        if ((0x5dU >> (uVar16 & 0x1f) & 1) == 0) {
          local_188 = 0;
        }
        else {
          local_188 = (ulong)(local_70[2] * *(int *)(&DAT_1001db9c + uVar35 * 4) + 7 >> 3);
        }
      }
      lVar31 = 0;
      puVar33 = local_70;
      do {
        local_4c = (&DAT_1001da84)[lVar31];
        uVar16 = (&DAT_1001daa0)[lVar31];
        local_80 = CONCAT44(PF_PART4(local_80, 4),uVar16);
        local_120 = (&DAT_1001dad8)[lVar31];
        uVar23 = 0;
        if (local_4c < *puVar33) {
          uVar23 = (*puVar33 + ~local_4c) / (uint)(&DAT_1001dabc)[lVar31] + 1;
        }
        if (uVar16 < puVar33[1]) {
          iVar12 = (puVar33[1] + ~uVar16) / local_120 + 1;
          local_11c = uVar23;
          if (uVar23 != 0) {
            if (iVar12 != 0) {
              uVar16 = puVar33[3];
              local_60 = (byte *)CONCAT44(PF_PART4(local_60, 4),(&DAT_1001dabc)[lVar31]);
              local_58 = (byte *)CONCAT44(PF_PART4(local_58, 4),iVar12);
              if (((ulong)uVar16 < 7) && ((0x5dU >> (uVar16 & 0x1f) & 1) != 0)) {
                uVar35 = (ulong)(puVar33[2] * *(int *)(&DAT_1001db9c + (ulong)uVar16 * 4));
              }
              else {
                uVar35 = 0;
              }
              local_68 = (byte *)(ulong)uVar23;
              local_48 = (byte *)(uVar35 * (long)local_68);
              local_98 = (byte *)((ulong)(local_48 + 7) >> 3);
              local_108 = local_98 + 1;
              local_170 = 0xe;
              local_198 = lVar31;
              local_90 = (byte *)recovered_10006fe0((long)local_108);
              recovered_10007040(0);
              pbVar15 = (byte *)0x0;
              if (local_48 < (byte *)0x31) goto LAB_1000be20;
              if (local_48 < (byte *)0xf1) {
                pbVar18 = (byte *)0x0;
LAB_1000bdeb:
                pbVar15 = (byte *)((ulong)local_108 & 0x3ffffffffffffff8);
                do {
                  pbVar19 = local_90 + (long)pbVar18;
                  pbVar19[0] = 0;
                  pbVar19[1] = 0;
                  pbVar19[2] = 0;
                  pbVar19[3] = 0;
                  pbVar19[4] = 0;
                  pbVar19[5] = 0;
                  pbVar19[6] = 0;
                  pbVar19[7] = 0;
                  pbVar18 = pbVar18 + 8;
                } while (pbVar15 != pbVar18);
                for (; local_108 != pbVar15; pbVar15 = pbVar15 + 1) {
LAB_1000be20:
                  local_90[(long)pbVar15] = 0;
                }
              }
              else {
                pbVar15 = (byte *)((ulong)local_108 & 0x3fffffffffffffe0);
                pbVar18 = (byte *)0x0;
                do {
                  pbVar19 = local_90 + (long)pbVar18;
                  pbVar19[0] = 0;
                  pbVar19[1] = 0;
                  pbVar19[2] = 0;
                  pbVar19[3] = 0;
                  pbVar19[4] = 0;
                  pbVar19[5] = 0;
                  pbVar19[6] = 0;
                  pbVar19[7] = 0;
                  pbVar19[8] = 0;
                  pbVar19[9] = 0;
                  pbVar19[10] = 0;
                  pbVar19[0xb] = 0;
                  pbVar19[0xc] = 0;
                  pbVar19[0xd] = 0;
                  pbVar19[0xe] = 0;
                  pbVar19[0xf] = 0;
                  pbVar19 = local_90 + 0x10 + (long)pbVar18;
                  pbVar19[0] = 0;
                  pbVar19[1] = 0;
                  pbVar19[2] = 0;
                  pbVar19[3] = 0;
                  pbVar19[4] = 0;
                  pbVar19[5] = 0;
                  pbVar19[6] = 0;
                  pbVar19[7] = 0;
                  pbVar19[8] = 0;
                  pbVar19[9] = 0;
                  pbVar19[10] = 0;
                  pbVar19[0xb] = 0;
                  pbVar19[0xc] = 0;
                  pbVar19[0xd] = 0;
                  pbVar19[0xe] = 0;
                  pbVar19[0xf] = 0;
                  pbVar18 = pbVar18 + 0x20;
                } while (pbVar15 != pbVar18);
                if (local_108 != pbVar15) {
                  pbVar18 = pbVar15;
                  if (((ulong)local_108 & 0x18) == 0) goto LAB_1000be20;
                  goto LAB_1000bdeb;
                }
              }
              if (local_48 == (byte *)0x0) {
                local_38 = (byte *)0x0;
                local_180 = (byte *)0x0;
              }
              else {
                local_170 = 0xf;
                local_c0 = (byte *)recovered_10006fe0((long)local_98);
                recovered_10007040(0);
                local_88 = local_98 + (local_98 == (byte *)0x0);
                pbVar15 = (byte *)0x0;
                if (local_48 < (byte *)0x39) {
LAB_1000bf30:
                  do {
                    local_c0[(long)pbVar15] = 0;
                    pbVar15 = pbVar15 + 1;
                  } while (local_88 != pbVar15);
                }
                else if (local_48 < (byte *)0xf9) {
                  pbVar18 = (byte *)0x0;
LAB_1000bedf:
                  pbVar15 = (byte *)((ulong)local_88 & 0x1ffffffffffffff8);
                  do {
                    pbVar19 = local_c0 + (long)pbVar18;
                    pbVar19[0] = 0;
                    pbVar19[1] = 0;
                    pbVar19[2] = 0;
                    pbVar19[3] = 0;
                    pbVar19[4] = 0;
                    pbVar19[5] = 0;
                    pbVar19[6] = 0;
                    pbVar19[7] = 0;
                    pbVar18 = pbVar18 + 8;
                  } while (pbVar15 != pbVar18);
                  if (local_98 != pbVar15) goto LAB_1000bf30;
                }
                else {
                  pbVar15 = (byte *)((ulong)local_88 & 0x1fffffffffffffe0);
                  pbVar18 = (byte *)0x0;
                  do {
                    pbVar19 = local_c0 + (long)pbVar18;
                    pbVar19[0] = 0;
                    pbVar19[1] = 0;
                    pbVar19[2] = 0;
                    pbVar19[3] = 0;
                    pbVar19[4] = 0;
                    pbVar19[5] = 0;
                    pbVar19[6] = 0;
                    pbVar19[7] = 0;
                    pbVar19[8] = 0;
                    pbVar19[9] = 0;
                    pbVar19[10] = 0;
                    pbVar19[0xb] = 0;
                    pbVar19[0xc] = 0;
                    pbVar19[0xd] = 0;
                    pbVar19[0xe] = 0;
                    pbVar19[0xf] = 0;
                    pbVar19 = local_c0 + 0x10 + (long)pbVar18;
                    pbVar19[0] = 0;
                    pbVar19[1] = 0;
                    pbVar19[2] = 0;
                    pbVar19[3] = 0;
                    pbVar19[4] = 0;
                    pbVar19[5] = 0;
                    pbVar19[6] = 0;
                    pbVar19[7] = 0;
                    pbVar19[8] = 0;
                    pbVar19[9] = 0;
                    pbVar19[10] = 0;
                    pbVar19[0xb] = 0;
                    pbVar19[0xc] = 0;
                    pbVar19[0xd] = 0;
                    pbVar19[0xe] = 0;
                    pbVar19[0xf] = 0;
                    pbVar18 = pbVar18 + 0x20;
                  } while (pbVar15 != pbVar18);
                  if (local_98 != pbVar15) {
                    pbVar18 = pbVar15;
                    if (((ulong)local_88 & 0x18) == 0) goto LAB_1000bf30;
                    goto LAB_1000bedf;
                  }
                }
                local_170 = 0x10;
                pbVar15 = (byte *)recovered_10006fe0((long)local_98);
                recovered_10007040(0);
                pbVar18 = (byte *)0x0;
                local_38 = local_c0;
                local_180 = pbVar15;
                if ((byte *)0x38 < local_48) {
                  if (local_48 < (byte *)0xf9) {
                    pbVar19 = (byte *)0x0;
                  }
                  else {
                    pbVar18 = (byte *)((ulong)local_88 & 0x1fffffffffffffe0);
                    pbVar19 = (byte *)0x0;
                    do {
                      pbVar34 = pbVar15 + (long)pbVar19;
                      pbVar34[0] = 0;
                      pbVar34[1] = 0;
                      pbVar34[2] = 0;
                      pbVar34[3] = 0;
                      pbVar34[4] = 0;
                      pbVar34[5] = 0;
                      pbVar34[6] = 0;
                      pbVar34[7] = 0;
                      pbVar34[8] = 0;
                      pbVar34[9] = 0;
                      pbVar34[10] = 0;
                      pbVar34[0xb] = 0;
                      pbVar34[0xc] = 0;
                      pbVar34[0xd] = 0;
                      pbVar34[0xe] = 0;
                      pbVar34[0xf] = 0;
                      pbVar34 = pbVar15 + 0x10 + (long)pbVar19;
                      pbVar34[0] = 0;
                      pbVar34[1] = 0;
                      pbVar34[2] = 0;
                      pbVar34[3] = 0;
                      pbVar34[4] = 0;
                      pbVar34[5] = 0;
                      pbVar34[6] = 0;
                      pbVar34[7] = 0;
                      pbVar34[8] = 0;
                      pbVar34[9] = 0;
                      pbVar34[10] = 0;
                      pbVar34[0xb] = 0;
                      pbVar34[0xc] = 0;
                      pbVar34[0xd] = 0;
                      pbVar34[0xe] = 0;
                      pbVar34[0xf] = 0;
                      pbVar19 = pbVar19 + 0x20;
                    } while (pbVar18 != pbVar19);
                    if (local_98 == pbVar18) goto LAB_1000c023;
                    pbVar19 = pbVar18;
                    if (((ulong)local_88 & 0x18) == 0) goto LAB_1000c010;
                  }
                  pbVar18 = (byte *)((ulong)local_88 & 0x1ffffffffffffff8);
                  do {
                    pbVar34 = pbVar15 + (long)pbVar19;
                    pbVar34[0] = 0;
                    pbVar34[1] = 0;
                    pbVar34[2] = 0;
                    pbVar34[3] = 0;
                    pbVar34[4] = 0;
                    pbVar34[5] = 0;
                    pbVar34[6] = 0;
                    pbVar34[7] = 0;
                    pbVar19 = pbVar19 + 8;
                  } while (pbVar18 != pbVar19);
                  if (local_98 == pbVar18) goto LAB_1000c023;
                }
LAB_1000c010:
                do {
                  pbVar15[(long)pbVar18] = 0;
                  pbVar18 = pbVar18 + 1;
                } while (local_88 != pbVar18);
              }
LAB_1000c023:
              local_1b8 = (byte *)(-2 - (long)local_98);
              local_1b0 = local_90 + 1;
              local_1a8 = (byte *)((ulong)local_58 & 0xffffffff);
              local_190 = (byte *)((long)local_68 * 6);
              local_1a0 = (long)local_68 * 2 & 0xfffffffffffffffc;
              local_118 = (long)local_68 * 3;
              local_110 = (byte *)0x0;
              pbVar15 = (byte *)0x0;
              do {
                pbVar18 = local_38;
                pbVar19 = local_180;
                if (local_1b8 < local_d0) {
switchD_1000c1bf_caseD_1:
                  local_38 = pbVar19;
                  local_180 = pbVar18;
                  recovered_10007040(local_38);
                  recovered_10007040(local_180);
                  recovered_10007040(local_90);
                  uVar35 = 0;
                  goto LAB_1000d544;
                }
                pbVar18 = local_38;
                pbVar19 = local_180;
                if (local_e0 < local_108 + (long)local_d0) goto switchD_1000c1bf_caseD_1;
                local_170 = 0x11;
                pbVar18 = local_180;
                local_180 = local_38;
                local_58 = local_108 + (long)local_d0;
                local_48 = pbVar15;
                local_38 = pbVar18;
                recovered_10000f90(local_90,local_d0 + local_100[3],(ulong)local_108);
                local_d0 = local_58;
                local_170 = 0x12;
                uVar35 = recovered_10018a50((uint)*local_90,(long)local_38,(long)local_1b0,
                                            (long)local_48,(ulong)local_98,local_188);
                pbVar18 = local_180;
                pbVar19 = local_38;
                if (((char)uVar35 == '\0') || (6 < local_70[3])) goto switchD_1000c1bf_caseD_1;
                local_48 = (byte *)((ulong)(local_120 * (int)local_110 + (int)local_80) *
                                    (ulong)*local_70 * 4 + *local_a0);
                switch((uintptr_t)(local_70[3])) {
                case 0:
                  if (local_70[2] == 8) {
                    pbVar15 = (byte *)0x0;
                    uVar16 = local_4c;
                    do {
                      bVar20 = local_38[(long)pbVar15];
                      bVar8 = local_c8[0x28];
                      uVar23 = *(uint *)(local_c8 + 0x18);
                      uVar35 = (ulong)uVar16;
                      local_48[uVar35 * 4] = bVar20;
                      local_48[uVar35 * 4 + 1] = bVar20;
                      local_48[uVar35 * 4 + 2] = bVar20;
                      local_48[uVar35 * 4 + 3] = -(~bVar8 & 1 | uVar23 != bVar20);
                      pbVar15 = pbVar15 + 1;
                      uVar16 = uVar16 + (int)local_60;
                    } while (local_68 != pbVar15);
                  }
                  else {
                    pbVar15 = (byte *)0x0;
                    uVar16 = local_4c;
                    do {
                      bVar20 = local_38[(long)pbVar15 * 2];
                      bVar8 = local_38[(long)pbVar15 * 2 + 1];
                      uVar23 = *(uint *)(local_c8 + 0x18);
                      bVar21 = local_c8[0x28];
                      uVar35 = (ulong)uVar16;
                      bVar26 = (byte)((ulong)((uint)CONCAT11(bVar20,bVar8) * 0xff + 0x7fff) / 0xffff
                                     );
                      local_48[uVar35 * 4] = bVar26;
                      local_48[uVar35 * 4 + 1] = bVar26;
                      local_48[uVar35 * 4 + 2] = bVar26;
                      local_48[uVar35 * 4 + 3] = -(~bVar21 & 1 | CONCAT11(bVar20,bVar8) != uVar23);
                      pbVar15 = pbVar15 + 1;
                      uVar16 = uVar16 + (int)local_60;
                    } while (local_68 != pbVar15);
                  }
                  break;
                default:
                  goto switchD_1000c1bf_caseD_1;
                case 2:
                  if (local_70[2] == 8) {
                    uVar35 = 0;
                    uVar16 = local_4c;
                    do {
                      bVar20 = 0xff;
                      if (((local_c8[0x29] == 1) &&
                          (*(uint *)(local_c8 + 0x1c) == (uint)local_38[uVar35])) &&
                         (*(uint *)(local_c8 + 0x20) == (uint)local_38[uVar35 + 1])) {
                        bVar20 = -(*(uint *)(local_c8 + 0x24) != (uint)local_38[uVar35 + 2]);
                      }
                      uVar14 = (ulong)uVar16;
                      local_48[uVar14 * 4] = local_38[uVar35];
                      local_48[uVar14 * 4 + 1] = local_38[uVar35 + 1];
                      local_48[uVar14 * 4 + 2] = local_38[uVar35 + 2];
                      local_48[uVar14 * 4 + 3] = bVar20;
                      uVar16 = uVar16 + (int)local_60;
                      uVar35 = uVar35 + 3;
                    } while (local_118 != uVar35);
                  }
                  else {
                    pbVar15 = (byte *)0x0;
                    uVar16 = local_4c;
                    do {
                      bVar20 = local_38[(long)pbVar15];
                      bVar8 = (local_38 + 1)[(long)pbVar15];
                      bVar21 = (local_38 + 2)[(long)pbVar15];
                      bVar26 = (local_38 + 3)[(long)pbVar15];
                      bVar5 = (local_38 + 4)[(long)pbVar15];
                      bVar6 = (local_38 + 5)[(long)pbVar15];
                      bVar7 = local_c8[0x29];
                      uVar23 = *(uint *)(local_c8 + 0x1c);
                      uVar3 = *(uint *)(local_c8 + 0x20);
                      uVar4 = *(uint *)(local_c8 + 0x24);
                      uVar35 = (ulong)uVar16;
                      local_48[uVar35 * 4] =
                           (byte)((ulong)((uint)CONCAT11(bVar20,bVar8) * 0xff + 0x7fff) / 0xffff);
                      local_48[uVar35 * 4 + 1] =
                           (byte)((ulong)((uint)CONCAT11(bVar21,bVar26) * 0xff + 0x7fff) / 0xffff);
                      local_48[uVar35 * 4 + 2] =
                           (byte)((ulong)((uint)CONCAT11(bVar5,bVar6) * 0xff + 0x7fff) / 0xffff);
                      local_48[uVar35 * 4 + 3] =
                           -((CONCAT11(bVar5,bVar6) != uVar4 || CONCAT11(bVar21,bVar26) != uVar3) |
                            ~bVar7 & 1 | CONCAT11(bVar20,bVar8) != uVar23);
                      uVar16 = uVar16 + (int)local_60;
                      pbVar15 = pbVar15 + 6;
                    } while (local_190 != pbVar15);
                  }
                  break;
                case 3:
                  local_a8 = *(ulong *)(local_c8 + 8) >> 2;
                  pbVar15 = (byte *)0x0;
                  uVar16 = local_4c;
                  do {
                    pbVar18 = local_180;
                    pbVar19 = local_38;
                    if (local_a8 <= local_38[(long)pbVar15]) goto switchD_1000c1bf_caseD_1;
                    local_170 = 0x13;
                    local_88 = (byte *)CONCAT44(PF_PART4(local_88, 4),uVar16);
                    local_58 = pbVar15;
                    recovered_10000f90(local_48 + (ulong)uVar16 * 4,
                                       (void *)((ulong)local_38[(long)pbVar15] * 4 +
                                               *(long *)local_c8),4);
                    pbVar15 = local_58 + 1;
                    uVar16 = (int)local_88 + (int)local_60;
                  } while (local_68 != pbVar15);
                  break;
                case 4:
                  if (local_70[2] == 8) {
                    uVar16 = local_4c;
                    if (local_11c == 1) {
                      uVar35 = 0;
                    }
                    else {
                      uVar35 = 0;
                      do {
                        uVar14 = (ulong)uVar16;
                        bVar20 = local_38[uVar35];
                        local_48[uVar14 * 4] = bVar20;
                        local_48[uVar14 * 4 + 1] = bVar20;
                        local_48[uVar14 * 4 + 2] = local_38[uVar35];
                        local_48[uVar14 * 4 + 3] = local_38[uVar35 + 1];
                        uVar14 = (ulong)(uVar16 + (int)local_60);
                        bVar20 = local_38[uVar35 + 2];
                        local_48[uVar14 * 4] = bVar20;
                        local_48[uVar14 * 4 + 1] = bVar20;
                        local_48[uVar14 * 4 + 2] = local_38[uVar35 + 2];
                        local_48[uVar14 * 4 + 3] = local_38[uVar35 + 3];
                        uVar16 = uVar16 + (int)local_60 + (int)local_60;
                        uVar35 = uVar35 + 4;
                      } while (local_1a0 != uVar35);
                    }
                    if (((ulong)local_68 & 1) != 0) {
                      uVar14 = (ulong)uVar16;
                      bVar20 = local_38[uVar35];
                      local_48[uVar14 * 4] = bVar20;
                      local_48[uVar14 * 4 + 1] = bVar20;
                      local_48[uVar14 * 4 + 2] = local_38[uVar35];
                      local_48[uVar14 * 4 + 3] = local_38[uVar35 + 1];
                    }
                  }
                  else {
                    pbVar15 = (byte *)0x0;
                    uVar16 = local_4c;
                    do {
                      bVar20 = local_38[(long)pbVar15 * 4 + 2];
                      bVar8 = local_38[(long)pbVar15 * 4 + 3];
                      uVar35 = (ulong)uVar16;
                      bVar21 = (byte)((ulong)((uint)CONCAT11(local_38[(long)pbVar15 * 4],
                                                             local_38[(long)pbVar15 * 4 + 1]) * 0xff
                                             + 0x7fff) / 0xffff);
                      local_48[uVar35 * 4] = bVar21;
                      local_48[uVar35 * 4 + 1] = bVar21;
                      local_48[uVar35 * 4 + 2] = bVar21;
                      local_48[uVar35 * 4 + 3] =
                           (byte)((ulong)((uint)CONCAT11(bVar20,bVar8) * 0xff + 0x7fff) / 0xffff);
                      pbVar15 = pbVar15 + 1;
                      uVar16 = uVar16 + (int)local_60;
                    } while (local_68 != pbVar15);
                  }
                  break;
                case 6:
                  if (local_70[2] == 8) {
                    pbVar15 = local_68;
                    pbVar18 = local_38;
                    uVar16 = local_4c;
                    do {
                      local_a8 = CONCAT44(PF_PART4(local_a8, 4),uVar16);
                      local_170 = 0x14;
                      local_88 = pbVar15;
                      local_58 = pbVar18;
                      recovered_10000f90(local_48 + (ulong)uVar16 * 4,pbVar18,4);
                      uVar16 = (int)local_a8 + (int)local_60;
                      pbVar18 = local_58 + 4;
                      pbVar15 = local_88 + -1;
                    } while (pbVar15 != (byte *)0x0);
                  }
                  else {
                    pbVar15 = (byte *)0x0;
                    uVar16 = local_4c;
                    do {
                      uVar35 = (ulong)uVar16;
                      local_48[uVar35 * 4] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)pbVar15 * 8],
                                                         local_38[(long)pbVar15 * 8 + 1]) * 0xff +
                                         0x7fff) / 0xffff);
                      local_48[uVar35 * 4 + 1] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)pbVar15 * 8 + 2],
                                                         local_38[(long)pbVar15 * 8 + 3]) * 0xff +
                                         0x7fff) / 0xffff);
                      local_48[uVar35 * 4 + 2] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)pbVar15 * 8 + 4],
                                                         local_38[(long)pbVar15 * 8 + 5]) * 0xff +
                                         0x7fff) / 0xffff);
                      local_48[uVar35 * 4 + 3] =
                           (byte)((ulong)((uint)CONCAT11(local_38[(long)pbVar15 * 8 + 6],
                                                         local_38[(long)pbVar15 * 8 + 7]) * 0xff +
                                         0x7fff) / 0xffff);
                      pbVar15 = pbVar15 + 1;
                      uVar16 = uVar16 + (int)local_60;
                    } while (local_68 != pbVar15);
                  }
                }
                local_110 = local_110 + 1;
                pbVar15 = local_38;
              } while (local_110 < local_1a8);
              recovered_10007040(local_180);
              recovered_10007040(local_38);
              recovered_10007040(local_90);
              lVar31 = local_198;
              puVar33 = local_70;
            }
          }
        }
        lVar31 = lVar31 + 1;
      } while (lVar31 != 7);
      uVar35 = (ulong)(local_d0 == local_e0);
    }
  }
LAB_1000d544:
  local_e0 = (byte *)0x0;
  recovered_10007040(local_100[3]);
  local_100[1] = 0;
  recovered_10007040(local_100[0]);
LAB_1000d572:
  recovered_10007530(&local_178);
  return uVar35 & 0xffffffff;
}

#undef DAT_1001da84
#undef DAT_1001daa0
#undef DAT_1001dabc
#undef DAT_1001dad8
#undef DAT_1001db9c
#undef DAT_1001dedc
#undef LAB_1000d592
#undef local_100
#undef local_108
#undef local_110
#undef local_118
#undef local_11c
#undef local_120
#undef local_138
#undef local_140
#undef local_148
#undef local_150
#undef local_158
#undef local_170
#undef local_178
#undef local_180
#undef local_188
#undef local_190
#undef local_198
#undef local_1a0
#undef local_1a8
#undef local_1b0
#undef local_1b8
#undef local_38
#undef local_40
#undef local_48
#undef local_4c
#undef local_58
#undef local_60
#undef local_68
#undef local_70
#undef local_78
#undef local_80
#undef local_88
#undef local_90
#undef local_98
#undef local_a0
#undef local_a8
#undef local_b0
#undef local_b8
#undef local_c0
#undef local_c8
#undef local_d0
#undef local_e0
#undef uStack_d8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d280(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x38 + -0x10;
    do {
      lVar1 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_10007040(*(undefined8 *)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  recovered_10007040(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x68) = 0;
  recovered_10007040(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x50) = 0;
  recovered_10007040(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x38) = 0;
  recovered_10007040(*(undefined8 *)(param_1 + 0x30));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001df08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a4U)))
#define LAB_1000da8a (*(uint8_t *)(0x1000da8aU))
#define local_31 (*(bool *)(frame + 159))
#define local_40 (*(void * *)(frame + 144))
#define local_48 (*(int * *)(frame + 136))
#define local_50 (*(void * *)(frame + 128))
#define local_58 (*(ulong *)(frame + 120))
#define local_60 (*(void * *)(frame + 112))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_90 (*(undefined * *)(frame + 64))
#define local_98 (*(code * *)(frame + 56))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_b8 (*(undefined8 *)(frame + 24))
uchar recovered_1000d320(char *param_1,void *param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uchar uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;

  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((long)param_2 + 0x10) = 0;
  recovered_10007040(*(undefined8 *)((long)param_2 + 8));
  *(undefined8 *)((long)param_2 + 8) = 0;
  *(undefined8 *)((long)param_2 + 0x10) = 0;
  *(undefined8 *)((long)param_2 + 0x18) = 0;
  recovered_10007040(0);
  local_78 = (undefined1 *)&local_b8;
  local_98 = recovered_10006f90;
  local_90 = &DAT_1001df08;
  local_80 = &LAB_1000da8a;
  local_88 = (undefined1 *)((long)(uintptr_t)(frame + 208) + -8);
  recovered_10007510(&local_b8);
  pvVar6 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_40 = (void *)0x0;
    local_b0 = 1;
    local_60 = param_2;
    piVar3 = recovered_10005d90((long)param_1,((uintptr_t)pf_module_state + 0x6ccU));
    if (piVar3 != (int *)0x0) {
      local_40 = (void *)0x0;
      local_b0 = 2;
      local_48 = piVar3;
      uVar4 = recovered_100067a0(piVar3,0,2);
      if ((int)uVar4 == 0) {
        local_40 = (void *)0x0;
        local_b0 = 3;
        uVar5 = recovered_10006820((long)local_48);
        if (-1 < (long)uVar5) {
          local_40 = (void *)0x0;
          local_b0 = 4;
          local_58 = uVar5;
          uVar4 = recovered_100067a0(local_48,0,0);
          if ((int)uVar4 == 0) {
            if (local_58 == 0) {
              local_31 = true;
              local_50 = (void *)0x0;
            }
            else {
              local_40 = (void *)0x0;
              local_b0 = 5;
              pvVar6 = (void *)recovered_10006fe0(local_58);
              piVar3 = local_48;
              uVar5 = local_58;
              uVar8 = 0;
              recovered_10007040(0);
              if (uVar5 < 8) goto LAB_1000d9f3;
              if (uVar5 < 0x20) {
                uVar7 = 0;
LAB_1000d9c8:
                uVar8 = uVar5 & 0x7ffffffffffffff8;
                do {
                  *(undefined8 *)((long)pvVar6 + uVar7) = 0;
                  uVar7 = uVar7 + 8;
                } while (uVar8 != uVar7);
                for (; uVar5 != uVar8; uVar8 = uVar8 + 1) {
LAB_1000d9f3:
                  *(undefined1 *)((long)pvVar6 + uVar8) = 0;
                }
              }
              else {
                uVar8 = uVar5 & 0x7fffffffffffffe0;
                uVar7 = 0;
                do {
                  *(undefined8 *)((long)pvVar6 + uVar7) = 0;
                  ((undefined8 *)((long)pvVar6 + uVar7))[1] = 0;
                  puVar1 = (undefined8 *)((long)pvVar6 + uVar7 + 0x10);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  uVar7 = uVar7 + 0x20;
                } while (uVar8 != uVar7);
                if (uVar5 != uVar8) {
                  uVar7 = uVar8;
                  if ((uVar5 & 0x18) == 0) goto LAB_1000d9f3;
                  goto LAB_1000d9c8;
                }
              }
              local_b0 = 6;
              local_50 = pvVar6;
              local_40 = pvVar6;
              uVar5 = recovered_100062e0((long)pvVar6,1,uVar5,piVar3);
              local_31 = uVar5 == local_58;
            }
            local_b0 = 8;
            local_40 = local_50;
            uVar4 = recovered_10006210(local_48);
            pvVar6 = local_50;
            if ((local_31 & (int)uVar4 == 0) != 0) {
              local_40 = local_50;
              local_b0 = 9;
              uVar2 = recovered_10008640(local_50,local_58,local_60);
              pvVar6 = local_50;
              goto LAB_1000d8cf;
            }
            goto LAB_1000d8cd;
          }
        }
      }
      local_40 = (void *)0x0;
      local_b0 = 7;
      recovered_10006210(local_48);
    }
    pvVar6 = (void *)0x0;
  }
LAB_1000d8cd:
  uVar2 = '\0';
LAB_1000d8cf:
  recovered_10007040(pvVar6);
  recovered_10007530(&local_b8);
  return uVar2;
}

#undef DAT_1001df08
#undef LAB_1000da8a
#undef local_31
#undef local_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_78
#undef local_80
#undef local_88
#undef local_90
#undef local_98
#undef local_b0
#undef local_b8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000d640(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_2c (*(uint *)(frame + 20))
#define local_30 (*(uint *)(frame + 16))
bool recovered_1000ecf0(uint *param_1,long param_2,long param_3,ulong param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;

  if (param_4 >> 0x20 != 0) {
    return false;
  }
  if (param_3 == 0 && param_4 != 0) {
    return false;
  }
  uVar1 = (uint)param_4;
  local_30 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = recovered_100182e0(0,param_2,4);
  if (param_4 != 0) {
    uVar1 = recovered_100182e0(uVar1,param_3,param_4);
  }
  local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = recovered_10006610((long)&local_30,1,4,param_1);
  if (((lVar2 == 4) && (lVar2 = recovered_10006610(param_2,1,4,param_1), lVar2 == 4)) &&
     ((param_4 == 0 || (uVar3 = recovered_10006610(param_3,1,param_4,param_1), uVar3 == param_4))))
  {
    lVar2 = recovered_10006610((long)&local_2c,1,4,param_1);
    return lVar2 == 4;
  }
  return false;
}

#undef local_2c
#undef local_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uchar recovered_1000ede0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_1000d640(param_1,param_2,param_3,param_4);
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001df3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8U)))
#define LAB_1000f73c (*(uint8_t *)(0x1000f73cU))
#define auStack_168 (*(undefined1 (*)[8])(frame + 24))
#define auStack_88 (*(undefined1 (*)[12])(frame + 248))
#define auStack_98 (*(undefined1 (*)[12])(frame + 232))
#define local_100 (*(ulong *)(frame + 128))
#define local_108 (*(ulong *)(frame + 120))
#define local_120 (*(undefined1 * *)(frame + 96))
#define local_128 (*(undefined1 * *)(frame + 88))
#define local_130 (*(undefined1 * *)(frame + 80))
#define local_138 (*(undefined * *)(frame + 72))
#define local_140 (*(code * *)(frame + 64))
#define local_158 (*(undefined4 *)(frame + 40))
#define local_160 (*(undefined8 *)(frame + 32))
#define local_38 (*(undefined8 *)(frame + 328))
#define local_3c (*(uint *)(frame + 324))
#define local_48 (*(ulong *)(frame + 312))
#define local_50 (*(long *)(frame + 304))
#define local_58 (*(undefined8 *)(frame + 296))
#define local_59 (*(undefined1 *)(frame + 295))
#define local_5a (*(undefined1 *)(frame + 294))
#define local_5b (*(undefined1 *)(frame + 293))
#define local_5c (*(undefined1 *)(frame + 292))
#define local_5e (*(undefined2 *)(frame + 290))
#define local_68 (*(void * *)(frame + 280))
#define local_70 (*(uint * *)(frame + 272))
#define local_8c (*(undefined4 *)(frame + 244))
#define local_a8 (*(undefined1 (*)[16])(frame + 216))
#define local_b8 (*(undefined1 (*)[7])(frame + 200))
#define local_c8 (*(undefined1 (*)[16])(frame + 184))
#define local_d0 (*(undefined8 *)(frame + 176))
#define local_d1 (*(undefined1 *)(frame + 175))
#define local_d2 (*(undefined1 *)(frame + 174))
#define local_d3 (*(undefined1 *)(frame + 173))
#define local_d4 (*(undefined1 *)(frame + 172))
#define local_dc (*(undefined8 *)(frame + 164))
#define local_dd (*(undefined1 *)(frame + 163))
#define local_de (*(undefined1 *)(frame + 162))
#define local_df (*(undefined1 *)(frame + 161))
#define local_e0 (*(undefined1 *)(frame + 160))
#define local_e1 (*(undefined1 *)(frame + 159))
#define local_e2 (*(undefined1 *)(frame + 158))
#define local_e3 (*(undefined1 *)(frame + 157))
#define local_e4 (*(undefined1 *)(frame + 156))
#define local_e8 (*(undefined4 *)(frame + 152))
#define local_f0 (*(ulong *)(frame + 144))
#define local_f8 (*(long *)(frame + 136))
#define stack0xffffffffffffff49 (*(uint8_t *)(frame + 201))
#define stack0xffffffffffffff4d (*(uint8_t *)(frame + 205))
#define uStack_ac (*(undefined4 *)(frame + 212))
#define uStack_ad (*(undefined1 *)(frame + 211))
#define uStack_b1 (*(undefined4 *)(frame + 207))
uchar recovered_1000edf0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  bool bVar15;
  uint128 auVar16;
  uint128 auVar17;
  uint128 auVar18;

  local_130 = auStack_88 + 0x80;
  local_120 = auStack_168;
  local_140 = recovered_10006f90;
  local_138 = &DAT_1001df3c;
  local_128 = &LAB_1000f73c;
  local_68 = param_2;
  recovered_10007510(&local_160);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_48 = (ulong)(uint)param_3;
    uVar10 = local_48 * 4;
    local_100 = (ulong)(uint)param_4;
    uVar14 = uVar10 * local_100;
    if (uVar14 >> 1 < 0x7fffffc3) {
      local_158 = 0xffffffff;
      local_3c = param_3;
      puVar7 = recovered_10005d90((long)param_1,((uintptr_t)pf_module_state + 0x68aU));
      if (puVar7 != (uint *)0x0) {
        local_58 = 0x7a00000000;
        local_5e = 0x4d42;
        iVar5 = (int)uVar14 + 0x7a;
        local_5c = (undefined1)iVar5;
        local_5b = (undefined1)((uint)iVar5 >> 8);
        local_5a = (undefined1)((uint)iVar5 >> 0x10);
        local_59 = (undefined1)((uint)iVar5 >> 0x18);
        PF_PART12(auStack_88,0) = SUB1612((uint128)0x0,4);
        PF_PART12(auStack_98,0) = SUB1612((uint128)0x0,0);
        local_8c = 0;
        (*(uint128 *)(void *)local_a8) = (uint128)0x0;
        local_e8 = 0x6c;
        local_e4 = (undefined1)local_3c;
        local_e3 = (undefined1)(local_3c >> 8);
        local_e2 = (undefined1)(local_3c >> 0x10);
        local_e1 = (undefined1)(local_3c >> 0x18);
        iVar5 = -param_4;
        local_e0 = (undefined1)iVar5;
        local_df = (undefined1)((uint)iVar5 >> 8);
        local_de = (undefined1)((uint)iVar5 >> 0x10);
        local_dd = (undefined1)((uint)iVar5 >> 0x18);
        local_dc = 0x300200001;
        local_d4 = (undefined1)uVar14;
        local_d3 = (undefined1)(uVar14 >> 8);
        local_d2 = (undefined1)(uVar14 >> 0x10);
        local_d1 = (undefined1)(uVar14 >> 0x18);
        local_d0 = 0xb1300000b13;
        PF_PART10(local_c8, 0) = SUB1610((uint128)0x0,0);
        local_c8[10] = 0xff;
        PF_PART2(local_c8, 11) = 0;
        local_c8[0xd] = 0xff;
        PF_PART2(local_c8, 14) = 0;
        stack0xffffffffffffff49 = SUB1615((uint128)0x0,1);
        local_b8[0] = 0xff;
        auVar16 = (*(uint128 *)(void *)&local_b8);
        stack0xffffffffffffff4d = SUB1611((uint128)0x0,5);
        PF_PART4(local_b8, 0) = PF_PART4(auVar16, 0);
        local_b8[4] = 0;
        uStack_b1 = 0x524742ff;
        uStack_ac = SUB164((uint128)0x0,0xc);
        uStack_ad = 0x73;
        local_158 = 0xffffffff;
        lVar8 = recovered_10006610((long)&local_5e,1,0xe,puVar7);
        if (lVar8 == 0xe) {
          local_158 = 0xffffffff;
          lVar8 = recovered_10006610((long)&local_e8,1,0x6c,puVar7);
          bVar15 = lVar8 == 0x6c;
        }
        else {
          bVar15 = false;
        }
        local_158 = 0xffffffff;
        local_38 = recovered_10006fe0(uVar10);
        uVar14 = 0;
        recovered_10007040(0);
        if (local_3c < 2) goto LAB_1000f5c7;
        if (local_3c < 8) {
          uVar12 = 0;
LAB_1000f59a:
          uVar14 = uVar10 & 0x1fffffff8;
          do {
            *(undefined8 *)(local_38 + uVar12) = 0;
            uVar12 = uVar12 + 8;
          } while (uVar14 != uVar12);
          for (; uVar10 != uVar14; uVar14 = uVar14 + 1) {
LAB_1000f5c7:
            *(undefined1 *)(local_38 + uVar14) = 0;
          }
        }
        else {
          uVar14 = uVar10 & 0x1ffffffe0;
          uVar12 = 0;
          do {
            *(uint128 *)(local_38 + uVar12) = (uint128)0x0;
            *(uint128 *)(local_38 + 0x10 + uVar12) = (uint128)0x0;
            uVar12 = uVar12 + 0x20;
          } while (uVar14 != uVar12);
          if (uVar10 != uVar14) {
            uVar12 = uVar14;
            if ((local_48 & 6) == 0) goto LAB_1000f5c7;
            goto LAB_1000f59a;
          }
        }
        if (bVar15) {
          lVar8 = (long)local_68 + 4;
          local_f8 = (ulong)((uint)(local_48 >> 1) & 0x3fffffff) << 3;
          uVar14 = 0;
          local_f0 = uVar10;
          local_70 = puVar7;
          do {
            lVar9 = 0;
            if (local_3c != 1) {
              do {
                uVar6 = *(undefined4 *)(lVar8 + -4 + lVar9);
                PF_PART8(auVar16, 8) = 0;
                PF_PART8(auVar16, 0) =
                     (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                                  CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6))
                                           >> 0x10),(short)uVar6) & 0xffffffff00ff00ff;
                auVar16 = pshuflw(auVar16,auVar16,0xc6);
                sVar1 = PF_PART2(auVar16, 0);
                sVar2 = PF_PART2(auVar16, 2);
                sVar3 = PF_PART2(auVar16, 4);
                sVar4 = PF_PART2(auVar16, 6);
                *(uint *)(local_38 + lVar9) =
                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) * PF_PART1(auVar16,6) - (0xff < sVar4),
                              CONCAT12((0 < sVar3) * (sVar3 < 0x100) * PF_PART1(auVar16,4) - (0xff < sVar3),
                                       CONCAT11((0 < sVar2) * (sVar2 < 0x100) * PF_PART1(auVar16,2) -
                                                (0xff < sVar2),
                                                (0 < sVar1) * (sVar1 < 0x100) * PF_PART1(auVar16,0) -
                                                (0xff < sVar1))));
                uVar6 = *(undefined4 *)(lVar8 + lVar9);
                PF_PART8(auVar17, 8) = 0;
                PF_PART8(auVar17, 0) =
                     (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                                  CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6))
                                           >> 0x10),(short)uVar6) & 0xffffffff00ff00ff;
                auVar16 = pshuflw(auVar17,auVar17,0xc6);
                sVar1 = PF_PART2(auVar16, 0);
                sVar2 = PF_PART2(auVar16, 2);
                sVar3 = PF_PART2(auVar16, 4);
                sVar4 = PF_PART2(auVar16, 6);
                *(uint *)(local_38 + 4 + lVar9) =
                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) * PF_PART1(auVar16,6) - (0xff < sVar4),
                              CONCAT12((0 < sVar3) * (sVar3 < 0x100) * PF_PART1(auVar16,4) - (0xff < sVar3),
                                       CONCAT11((0 < sVar2) * (sVar2 < 0x100) * PF_PART1(auVar16,2) -
                                                (0xff < sVar2),
                                                (0 < sVar1) * (sVar1 < 0x100) * PF_PART1(auVar16,0) -
                                                (0xff < sVar1))));
                lVar9 = lVar9 + 8;
              } while (local_f8 != lVar9);
            }
            if ((local_48 & 1) != 0) {
              uVar6 = *(undefined4 *)((long)local_68 + lVar9 + uVar14 * local_f0);
              PF_PART8(auVar18, 8) = 0;
              PF_PART8(auVar18, 0) =
                   (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar6 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >>
                                                  0x20),uVar6) >> 0x18),
                                                  CONCAT12((char)((uint)uVar6 >> 8),(short)uVar6))
                                         >> 0x10),(short)uVar6) & 0xffffffff00ff00ff;
              auVar16 = pshuflw(auVar18,auVar18,0xc6);
              sVar1 = PF_PART2(auVar16, 0);
              sVar2 = PF_PART2(auVar16, 2);
              sVar3 = PF_PART2(auVar16, 4);
              sVar4 = PF_PART2(auVar16, 6);
              *(uint *)(local_38 + lVar9) =
                   CONCAT13((0 < sVar4) * (sVar4 < 0x100) * PF_PART1(auVar16,6) - (0xff < sVar4),
                            CONCAT12((0 < sVar3) * (sVar3 < 0x100) * PF_PART1(auVar16,4) - (0xff < sVar3),
                                     CONCAT11((0 < sVar2) * (sVar2 < 0x100) * PF_PART1(auVar16,2) -
                                              (0xff < sVar2),
                                              (0 < sVar1) * (sVar1 < 0x100) * PF_PART1(auVar16,0) -
                                              (0xff < sVar1))));
            }
            local_158 = 2;
            local_108 = uVar14;
            local_50 = lVar8;
            uVar10 = recovered_10006610(local_38,1,local_f0,local_70);
            uVar6 = (undefined4)CONCAT71((int7)(uVar10 >> 8),uVar10 == local_f0);
            puVar7 = local_70;
            if (uVar10 != local_f0) break;
            uVar14 = local_108 + 1;
            lVar8 = local_50 + local_f0;
          } while (uVar14 < local_100);
        }
        else {
          uVar6 = 0;
        }
        local_50 = CONCAT44(PF_PART4(local_50, 4),uVar6);
        local_158 = 1;
        uVar11 = recovered_10006210((int *)puVar7);
        bVar13 = (byte)local_50 & (int)uVar11 == 0;
        recovered_10007040(local_38);
        goto LAB_1000f4f3;
      }
    }
  }
  bVar13 = 0;
LAB_1000f4f3:
  recovered_10007530(&local_160);
  return bVar13;
}

#undef DAT_1001df3c
#undef LAB_1000f73c
#undef auStack_168
#undef auStack_88
#undef auStack_98
#undef local_100
#undef local_108
#undef local_120
#undef local_128
#undef local_130
#undef local_138
#undef local_140
#undef local_158
#undef local_160
#undef local_38
#undef local_3c
#undef local_48
#undef local_50
#undef local_58
#undef local_59
#undef local_5a
#undef local_5b
#undef local_5c
#undef local_5e
#undef local_68
#undef local_70
#undef local_8c
#undef local_a8
#undef local_b8
#undef local_c8
#undef local_d0
#undef local_d1
#undef local_d2
#undef local_d3
#undef local_d4
#undef local_dc
#undef local_dd
#undef local_de
#undef local_df
#undef local_e0
#undef local_e1
#undef local_e2
#undef local_e3
#undef local_e4
#undef local_e8
#undef local_f0
#undef local_f8
#undef stack0xffffffffffffff49
#undef stack0xffffffffffffff4d
#undef uStack_ac
#undef uStack_ad
#undef uStack_b1

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001df44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7e0U)))
#define LAB_1000fb0d (*(uint8_t *)(0x1000fb0dU))
#define auStack_65 (*(undefined1 (*)[13])(frame + 171))
#define auStack_f8 (*(undefined1 (*)[8])(frame + 24))
#define local_38 (*(undefined8 *)(frame + 216))
#define local_40 (*(ulong *)(frame + 208))
#define local_44 (*(uint *)(frame + 204))
#define local_50 (*(ulong *)(frame + 192))
#define local_58 (*(undefined2 *)(frame + 184))
#define local_68 (*(undefined3 *)(frame + 168))
#define local_70 (*(void * *)(frame + 160))
#define local_78 (*(uint * *)(frame + 152))
#define local_80 (*(ulong *)(frame + 144))
#define local_88 (*(ulong *)(frame + 136))
#define local_90 (*(long *)(frame + 128))
#define local_98 (*(ulong *)(frame + 120))
#define local_b0 (*(undefined1 * *)(frame + 96))
#define local_b8 (*(undefined1 * *)(frame + 88))
#define local_c0 (*(undefined1 * *)(frame + 80))
#define local_c8 (*(undefined * *)(frame + 72))
#define local_d0 (*(code * *)(frame + 64))
#define local_e8 (*(undefined4 *)(frame + 40))
#define local_f0 (*(undefined8 *)(frame + 32))
uchar recovered_1000f2e0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  uint128 auVar14;
  uint128 auVar15;
  uint128 auVar16;

  local_c0 = auStack_65 + 0x5d;
  local_b0 = auStack_f8;
  local_d0 = recovered_10006f90;
  local_c8 = &DAT_1001df44;
  local_b8 = &LAB_1000fb0d;
  local_70 = param_2;
  local_44 = param_3;
  recovered_10007510(&local_f0);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_e8 = 0xffffffff;
    puVar7 = recovered_10005d90((long)param_1,((uintptr_t)pf_module_state + 0x68aU));
    uVar6 = local_44;
    if (puVar7 != (uint *)0x0) {
      PF_PART13(auStack_65,0) = SUB1613((uint128)0x0,3);
      local_68 = 0x20000;
      auStack_65[9] = (char)local_44;
      auStack_65[10] = (char)(local_44 >> 8);
      auStack_65[0xb] = (char)param_4;
      local_40 = CONCAT44(PF_PART4(local_40, 4),param_4);
      auStack_65[0xc] = (char)((uint)param_4 >> 8);
      local_58 = 0x2820;
      local_e8 = 0xffffffff;
      lVar8 = recovered_10006610((long)&local_68,1,0x12,puVar7);
      local_50 = (ulong)uVar6;
      uVar9 = local_50 * 4;
      local_e8 = 0xffffffff;
      local_38 = recovered_10006fe0(uVar9);
      uVar13 = 0;
      recovered_10007040(0);
      if (uVar6 < 2) goto LAB_1000f947;
      if (local_44 < 8) {
        uVar11 = 0;
LAB_1000f917:
        uVar13 = uVar9 & 0x1fffffff8;
        do {
          *(undefined8 *)(local_38 + uVar11) = 0;
          uVar11 = uVar11 + 8;
        } while (uVar13 != uVar11);
        for (; uVar9 != uVar13; uVar13 = uVar13 + 1) {
LAB_1000f947:
          *(undefined1 *)(local_38 + uVar13) = 0;
        }
      }
      else {
        uVar13 = uVar9 & 0x1ffffffe0;
        uVar11 = 0;
        do {
          *(uint128 *)(local_38 + uVar11) = (uint128)0x0;
          *(uint128 *)(local_38 + 0x10 + uVar11) = (uint128)0x0;
          uVar11 = uVar11 + 0x20;
        } while (uVar13 != uVar11);
        if (uVar9 != uVar13) {
          uVar11 = uVar13;
          if ((local_50 & 6) == 0) goto LAB_1000f947;
          goto LAB_1000f917;
        }
      }
      if (lVar8 == 0x12) {
        local_80 = local_40 & 0xffffffff;
        uVar13 = (long)local_70 + 4;
        local_90 = (ulong)((uint)(local_50 >> 1) & 0x3fffffff) << 3;
        uVar11 = 0;
        local_88 = uVar9;
        local_78 = puVar7;
        do {
          if (local_44 == 1) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            do {
              uVar1 = *(undefined4 *)((uVar13 - 4) + lVar8);
              PF_PART8(auVar16, 8) = 0;
              PF_PART8(auVar16, 0) =
                   (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                         >> 0x10),(short)uVar1) & 0xffffffff00ff00ff;
              auVar16 = pshuflw(auVar16,auVar16,0xc6);
              sVar2 = PF_PART2(auVar16, 0);
              sVar3 = PF_PART2(auVar16, 2);
              sVar4 = PF_PART2(auVar16, 4);
              sVar5 = PF_PART2(auVar16, 6);
              *(uint *)(local_38 + lVar8) =
                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) * PF_PART1(auVar16,6) - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * PF_PART1(auVar16,4) - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * PF_PART1(auVar16,2) -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * PF_PART1(auVar16,0) -
                                              (0xff < sVar2))));
              uVar1 = *(undefined4 *)(uVar13 + lVar8);
              PF_PART8(auVar14, 8) = 0;
              PF_PART8(auVar14, 0) =
                   (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                         >> 0x10),(short)uVar1) & 0xffffffff00ff00ff;
              auVar16 = pshuflw(auVar14,auVar14,0xc6);
              sVar2 = PF_PART2(auVar16, 0);
              sVar3 = PF_PART2(auVar16, 2);
              sVar4 = PF_PART2(auVar16, 4);
              sVar5 = PF_PART2(auVar16, 6);
              *(uint *)(local_38 + 4 + lVar8) =
                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) * PF_PART1(auVar16,6) - (0xff < sVar5),
                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) * PF_PART1(auVar16,4) - (0xff < sVar4),
                                     CONCAT11((0 < sVar3) * (sVar3 < 0x100) * PF_PART1(auVar16,2) -
                                              (0xff < sVar3),
                                              (0 < sVar2) * (sVar2 < 0x100) * PF_PART1(auVar16,0) -
                                              (0xff < sVar2))));
              lVar8 = lVar8 + 8;
            } while (local_90 != lVar8);
          }
          if ((local_50 & 1) != 0) {
            uVar1 = *(undefined4 *)((long)local_70 + lVar8 + uVar11 * local_88);
            PF_PART8(auVar15, 8) = 0;
            PF_PART8(auVar15, 0) =
                 (ulong)CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                 CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                       0x10),(short)uVar1) & 0xffffffff00ff00ff;
            auVar16 = pshuflw(auVar15,auVar15,0xc6);
            sVar2 = PF_PART2(auVar16, 0);
            sVar3 = PF_PART2(auVar16, 2);
            sVar4 = PF_PART2(auVar16, 4);
            sVar5 = PF_PART2(auVar16, 6);
            *(uint *)(local_38 + lVar8) =
                 CONCAT13((0 < sVar5) * (sVar5 < 0x100) * PF_PART1(auVar16,6) - (0xff < sVar5),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * PF_PART1(auVar16,4) - (0xff < sVar4),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) * PF_PART1(auVar16,2) -
                                            (0xff < sVar3),
                                            (0 < sVar2) * (sVar2 < 0x100) * PF_PART1(auVar16,0) -
                                            (0xff < sVar2))));
          }
          local_e8 = 1;
          local_98 = uVar11;
          local_40 = uVar13;
          uVar9 = recovered_10006610(local_38,1,local_88,local_78);
          if (uVar9 != local_88) break;
          uVar11 = local_98 + 1;
          uVar13 = local_40 + local_88;
        } while (uVar11 < local_80);
        puVar7 = local_78;
        if (uVar9 != local_88) goto LAB_1000fac1;
        local_e8 = 2;
        lVar8 = recovered_10006610(((uintptr_t)pf_module_state + 0x524U),1,0x1a,local_78);
        local_40 = CONCAT44(PF_PART4(local_40, 4),(int)CONCAT71((int7)((ulong)lVar8 >> 8),lVar8 == 0x1a));
        puVar7 = local_78;
      }
      else {
LAB_1000fac1:
        local_40 = local_40 & 0xffffffff00000000;
      }
      local_e8 = 3;
      uVar10 = recovered_10006210((int *)puVar7);
      bVar12 = (byte)local_40 & (int)uVar10 == 0;
      recovered_10007040(local_38);
      goto LAB_1000faed;
    }
  }
  bVar12 = 0;
LAB_1000faed:
  recovered_10007530(&local_f0);
  return bVar12;
}

#undef DAT_1001df44
#undef LAB_1000fb0d
#undef auStack_65
#undef auStack_f8
#undef local_38
#undef local_40
#undef local_44
#undef local_50
#undef local_58
#undef local_68
#undef local_70
#undef local_78
#undef local_80
#undef local_88
#undef local_90
#undef local_98
#undef local_b0
#undef local_b8
#undef local_c0
#undef local_c8
#undef local_d0
#undef local_e8
#undef local_f0

#undef DAT_100197c0
#define DAT_100197c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef DAT_10019dc8
#define DAT_10019dc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ecU)))
#undef LAB_10012f2c
#define LAB_10012f2c (*(uint8_t *)(0x10012f2cU))
#undef UNK_100197c8
#define UNK_100197c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#undef _DAT_100197c0
#define _DAT_100197c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef str_10019cab
#define str_10019cab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cfU)))
#undef uRam00000000100197c8
#define uRam00000000100197c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#define local_120 (*(code * *)(frame + 304))
#define local_118 (*(undefined * *)(frame + 312))
#define local_110 (*(undefined1 * *)(frame + 320))
#define local_108 (*(undefined1 * *)(frame + 328))
#define local_100 (*(undefined1 * *)(frame + 336))
#define local_e8 (*(void * *)(frame + 360))
#define local_e0 (*(uint * *)(frame + 368))
#define local_d8 (*(void * *)(frame + 376))
#define local_d0 (*(uint * *)(frame + 384))
#define local_c8 (*(undefined8 *)(frame + 392))
#define local_c0 (*(uint * *)(frame + 400))
#define local_b8 (*(uint * *)(frame + 408))
#define local_b0 (*(uint * *)(frame + 416))
#define local_a8 (*(uint * *)(frame + 424))
#define local_a0 (*(uint * *)(frame + 432))
#define local_98 (*(uint * *)(frame + 440))
#define local_90 (*(uint * *)(frame + 448))
#define local_88 (*(uint * *)(frame + 456))
#define local_80 (*(uint * *)(frame + 464))
#define local_78 (*(ulong *)(frame + 472))
#define local_70 (*(undefined8 *)(frame + 480))
#define local_68 (*(uint * *)(frame + 488))
#define local_60 (*(ulong *)(frame + 496))
#define local_58 (*(uint * *)(frame + 504))
#define local_50 (*(uint * *)(frame + 512))
#define local_48 (*(uint * *)(frame + 520))
#define local_40 (*(uint * *)(frame + 528))
#define local_38 (*(undefined8 *)(frame + 536))
#define local_238 (*(long *)(frame + 24))
#define local_230 (*(long *)(frame + 32))
#define local_228 (*(long *)(frame + 40))
#define local_220 (*(long *)(frame + 48))
#define local_218 (*(ulong *)(frame + 56))
#define local_210 (*(long *)(frame + 64))
#define local_208 (*(ulong *)(frame + 72))
#define local_200 (*(uint * *)(frame + 80))
#define local_1f8 (*(long *)(frame + 88))
#define local_1f0 (*(uint * *)(frame + 96))
#define local_1e8 (*(ulong *)(frame + 104))
#define local_1e0 (*(long *)(frame + 112))
#define local_1d8 (*(long *)(frame + 120))
#define local_1d0 (*(char * *)(frame + 128))
#define local_1c8 (*(uint * *)(frame + 136))
#define local_1c0 (*(uint * *)(frame + 144))
#define local_1b8 (*(uint * *)(frame + 152))
#define local_1b0 (*(undefined8 * *)(frame + 160))
#define local_1a8 (*(uint * *)(frame + 168))
#define local_1a0 (*(ulong *)(frame + 176))
#define local_198 (*(ulong *)(frame + 184))
#define local_190 (*(uint * *)(frame + 192))
#define local_188 (*(uint * *)(frame + 200))
#define local_180 (*(ulong *)(frame + 208))
#define local_178 (*(uint *)(frame + 216))
#define local_174 (*(int *)(frame + 220))
#define local_170 (*(uint * *)(frame + 224))
#define local_168 (*(uint * *)(frame + 232))
#define local_160 (*(uint * *)(frame + 240))
#define local_158 (*(uint * *)(frame + 248))
#define local_150 (*(ulong *)(frame + 256))
#define local_148 (*(uint * *)(frame + 264))
#define local_140 (*(undefined8 *)(frame + 272))
#define local_138 (*(undefined4 *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_1000f6c0(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;

  local_110 = (undefined1 *)((long)(uintptr_t)(frame + 592) + -8);
  local_100 = (undefined1 *)&local_238;
  local_120 = recovered_10006f90;
  local_118 = &DAT_10019dc8;
  local_108 = &LAB_10012f2c;
  local_1d0 = param_1;
  local_158 = param_2;
  recovered_10007510(&local_140);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_180 = (ulong)(param_3 + 0x3fU >> 6);
    local_150 = (ulong)(param_4 + 0x3fU >> 6);
    if ((uint *)(local_150 * local_180) < (uint *)0x40000000) {
      local_138 = 1;
      local_88 = (uint *)(local_150 * local_180);
      local_78 = (ulong)(uint)param_3;
      local_60 = (ulong)(uint)param_4;
      local_70 = (uint *)recovered_10006fe0(0x10);
      recovered_10007040((void *)0x0);
      *(undefined8 *)local_70 = 0x66637820706d6967;
      *(undefined4 *)((long)local_70 + 8) = 0x30307620;
      *(undefined2 *)((long)local_70 + 0xc) = 0x33;
      local_1b0 = (undefined8 *)local_70;
      local_138 = 2;
      puVar7 = (undefined8 *)recovered_10006fe0(0x20);
      uVar31 = local_78;
      uVar18 = local_78 >> 0x18;
      uVar20 = local_78 >> 0x10 & 0xffff;
      uVar19 = local_78 >> 8 & 0xffffff;
      *puVar7 = *(undefined8 *)local_70;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)local_70 + 8);
      *(undefined1 *)((long)puVar7 + 0xc) = *(undefined1 *)((long)local_70 + 0xc);
      *(undefined1 *)((long)puVar7 + 0xd) = *(undefined1 *)((long)local_70 + 0xd);
      recovered_10007040(local_70);
      local_70 = (uint *)(CONCAT44(PF_PART4(local_70, 4),(int)uVar18) & 0xffffffff000000ff);
      *(char *)((long)puVar7 + 0xe) = (char)(uVar31 >> 0x18);
      local_b0 = (uint *)CONCAT44(PF_PART4(local_b0, 4),(int)uVar20);
      *(char *)((long)puVar7 + 0xf) = (char)uVar20;
      local_90 = (uint *)CONCAT44(PF_PART4(local_90, 4),(int)uVar19);
      *(char *)(puVar7 + 2) = (char)uVar19;
      *(char *)((long)puVar7 + 0x11) = (char)uVar31;
      uVar18 = local_60 >> 0x10 & 0xffff;
      uVar31 = local_60 >> 8 & 0xffffff;
      local_c8 = (uint *)(CONCAT44(PF_PART4(local_c8, 4),(int)(local_60 >> 0x18)) & 0xffffffff000000ff);
      *(char *)((long)puVar7 + 0x12) = (char)(local_60 >> 0x18);
      local_c0 = (uint *)CONCAT44(PF_PART4(local_c0, 4),(int)uVar18);
      *(char *)((long)puVar7 + 0x13) = (char)uVar18;
      local_d0 = (uint *)CONCAT44(PF_PART4(local_d0, 4),(int)uVar31);
      *(char *)((long)puVar7 + 0x14) = (char)uVar31;
      *(char *)((long)puVar7 + 0x15) = (char)local_60;
      *(undefined8 *)((long)puVar7 + 0x16) = 0x1100000000000000;
      local_138 = 3;
      local_1b0 = puVar7;
      local_40 = (uint *)puVar7;
      puVar7 = (undefined8 *)recovered_10006fe0(0x40);
      local_a8 = local_158;
      uVar13 = *(undefined8 *)((long)local_40 + 8);
      *puVar7 = *(undefined8 *)local_40;
      puVar7[1] = uVar13;
      puVar7[2] = *(undefined8 *)((long)local_40 + 0x10);
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((long)local_40 + 0x18);
      *(undefined1 *)((long)puVar7 + 0x1c) = *(undefined1 *)((long)local_40 + 0x1c);
      *(undefined1 *)((long)puVar7 + 0x1d) = *(undefined1 *)((long)local_40 + 0x1d);
      recovered_10007040(local_40);
      *(undefined4 *)((long)puVar7 + 0x1e) = 0x1000000;
      *(undefined1 *)((long)puVar7 + 0x22) = 0;
      uVar13 = uRam00000000100197c8;
      *(undefined8 *)((long)puVar7 + 0x23) = _DAT_100197c0;
      *(undefined8 *)((long)puVar7 + 0x2b) = uVar13;
      *(undefined8 *)((long)puVar7 + 0x33) = 0;
      *(char *)((long)puVar7 + 0x3b) = (char)local_70;
      *(char *)((long)puVar7 + 0x3c) = (char)local_b0;
      *(char *)((long)puVar7 + 0x3d) = (char)local_90;
      *(char *)((long)puVar7 + 0x3e) = (char)local_78;
      puVar10 = (uint *)0x40;
      do {
        local_38 = puVar10;
        puVar10 = (uint *)((long)local_38 * 2);
      } while (local_38 < (uint *)0x43);
      local_138 = 4;
      local_68 = (uint *)puVar7;
      local_40 = (uint *)puVar7;
      puVar8 = (uint *)recovered_10006fe0((long)local_38);
      puVar10 = local_38;
      uVar18 = local_60;
      if ((ulong)((long)puVar8 - (long)local_40) < 0x10) {
        lVar9 = 0;
      }
      else {
        uVar13 = *(undefined8 *)((long)local_40 + 8);
        *(undefined8 *)puVar8 = *(undefined8 *)local_40;
        *(undefined8 *)(puVar8 + 2) = uVar13;
        uVar13 = *(undefined8 *)((long)local_40 + 0x18);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)((long)local_40 + 0x10);
        *(undefined8 *)(puVar8 + 6) = uVar13;
        uVar13 = *(undefined8 *)((long)local_40 + 0x28);
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)((long)local_40 + 0x20);
        *(undefined8 *)(puVar8 + 10) = uVar13;
        puVar8[0xc] = *(uint *)((long)local_40 + 0x30);
        puVar8[0xd] = *(uint *)((long)local_40 + 0x34);
        puVar8[0xe] = *(uint *)((long)local_40 + 0x38);
        lVar9 = 0x3c;
      }
      lVar17 = 3;
      do {
        *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
        lVar9 = lVar9 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      if ((ulong)((long)puVar8 - (long)local_40) < 0x10) {
        do {
          *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
          *(undefined1 *)((long)puVar8 + lVar9 + 1) = *(undefined1 *)((long)local_40 + lVar9 + 1);
          *(undefined1 *)((long)puVar8 + lVar9 + 2) = *(undefined1 *)((long)local_40 + lVar9 + 2);
          *(undefined1 *)((long)puVar8 + lVar9 + 3) = *(undefined1 *)((long)local_40 + lVar9 + 3);
          lVar9 = lVar9 + 4;
        } while (lVar9 != 0x3f);
      }
      recovered_10007040(local_40);
      *(char *)((long)puVar8 + 0x3f) = (char)local_c8;
      *(char *)(puVar8 + 0x10) = (char)local_c0;
      *(char *)((long)puVar8 + 0x41) = (char)local_d0;
      *(char *)((long)puVar8 + 0x42) = (char)uVar18;
      if (puVar10 < (uint *)0x47) {
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < (uint *)0x47);
        local_138 = 5;
        local_68 = puVar8;
        local_40 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          lVar9 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(local_40 + 2);
          uVar1 = *(undefined8 *)(local_40 + 4);
          uVar2 = *(undefined8 *)(local_40 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)local_40;
          *(undefined8 *)(puVar8 + 2) = uVar13;
          *(undefined8 *)(puVar8 + 4) = uVar1;
          *(undefined8 *)(puVar8 + 6) = uVar2;
          uVar13 = *(undefined8 *)(local_40 + 10);
          uVar1 = *(undefined8 *)(local_40 + 0xc);
          uVar2 = *(undefined8 *)(local_40 + 0xe);
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(local_40 + 8);
          *(undefined8 *)(puVar8 + 10) = uVar13;
          *(undefined8 *)(puVar8 + 0xc) = uVar1;
          *(undefined8 *)(puVar8 + 0xe) = uVar2;
          *(short *)(puVar8 + 0x10) = (short)local_40[0x10];
          lVar9 = 0x42;
        }
        uVar18 = (ulong)(3U - (int)lVar9 & 3);
        do {
          *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
          lVar9 = lVar9 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          do {
            *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
            *(undefined1 *)((long)puVar8 + lVar9 + 1) = *(undefined1 *)((long)local_40 + lVar9 + 1);
            *(undefined1 *)((long)puVar8 + lVar9 + 2) = *(undefined1 *)((long)local_40 + lVar9 + 2);
            *(undefined1 *)((long)puVar8 + lVar9 + 3) = *(undefined1 *)((long)local_40 + lVar9 + 3);
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x43);
        }
        recovered_10007040(local_40);
      }
      else {
        local_38 = puVar10;
      }
      *(undefined4 *)((long)puVar8 + 0x43) = 0x1000000;
      local_138 = 6;
      local_68 = puVar8;
      local_40 = puVar8;
      puVar10 = (uint *)recovered_10002a00(str_10019cab);
      puVar8 = local_38;
      if (local_38 < (uint *)0x4b) {
        do {
          local_50 = puVar8;
          puVar8 = (uint *)((long)local_50 * 2);
        } while (local_50 < (uint *)0x4b);
        local_68 = local_40;
        local_138 = 7;
        local_58 = puVar10;
        puVar8 = (uint *)recovered_10006fe0((long)local_50);
        puVar10 = local_58;
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          lVar9 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(local_40 + 2);
          uVar1 = *(undefined8 *)(local_40 + 4);
          uVar2 = *(undefined8 *)(local_40 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)local_40;
          *(undefined8 *)(puVar8 + 2) = uVar13;
          *(undefined8 *)(puVar8 + 4) = uVar1;
          *(undefined8 *)(puVar8 + 6) = uVar2;
          uVar13 = *(undefined8 *)(local_40 + 10);
          uVar1 = *(undefined8 *)(local_40 + 0xc);
          uVar2 = *(undefined8 *)(local_40 + 0xe);
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(local_40 + 8);
          *(undefined8 *)(puVar8 + 10) = uVar13;
          *(undefined8 *)(puVar8 + 0xc) = uVar1;
          *(undefined8 *)(puVar8 + 0xe) = uVar2;
          puVar8[0x10] = local_40[0x10];
          lVar9 = 0x44;
        }
        uVar24 = (undefined1)local_60;
        lVar17 = 3;
        do {
          *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
          lVar9 = lVar9 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if ((ulong)((long)puVar8 - (long)local_40) < 0x20) {
          do {
            *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_40 + lVar9);
            *(undefined1 *)((long)puVar8 + lVar9 + 1) = *(undefined1 *)((long)local_40 + lVar9 + 1);
            *(undefined1 *)((long)puVar8 + lVar9 + 2) = *(undefined1 *)((long)local_40 + lVar9 + 2);
            *(undefined1 *)((long)puVar8 + lVar9 + 3) = *(undefined1 *)((long)local_40 + lVar9 + 3);
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x47);
        }
        recovered_10007040(local_40);
      }
      else {
        uVar24 = (undefined1)local_60;
        local_50 = local_38;
        puVar8 = local_40;
      }
      iVar5 = (int)puVar10 + 1;
      *(char *)((long)puVar8 + 0x47) = (char)((uint)iVar5 >> 0x18);
      *(char *)(puVar8 + 0x12) = (char)((uint)iVar5 >> 0x10);
      *(char *)((long)puVar8 + 0x49) = (char)((uint)iVar5 >> 8);
      *(char *)((long)puVar8 + 0x4a) = (char)iVar5;
      if (puVar10 == (uint *)0x0) {
        puVar32 = (uint *)0x4b;
      }
      else {
        puVar32 = (uint *)((long)puVar10 + 0x4b);
        if (local_50 < puVar32) {
          do {
            local_38 = local_50;
            local_50 = (uint *)((long)local_38 * 2);
          } while (local_38 < puVar32);
          local_138 = 8;
          local_68 = puVar8;
          local_58 = puVar10;
          local_50 = puVar10;
          local_48 = puVar8;
          local_40 = puVar32;
          puVar8 = (uint *)recovered_10006fe0((long)local_38);
          puVar27 = local_38;
          puVar32 = local_40;
          puVar16 = local_58;
          if ((ulong)((long)puVar8 - (long)local_48) < 0x10) {
            lVar9 = 0;
          }
          else {
            uVar13 = *(undefined8 *)(local_48 + 2);
            *(undefined8 *)puVar8 = *(undefined8 *)local_48;
            *(undefined8 *)(puVar8 + 2) = uVar13;
            uVar13 = *(undefined8 *)(local_48 + 6);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(local_48 + 4);
            *(undefined8 *)(puVar8 + 6) = uVar13;
            uVar13 = *(undefined8 *)(local_48 + 10);
            *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(local_48 + 8);
            *(undefined8 *)(puVar8 + 10) = uVar13;
            uVar13 = *(undefined8 *)(local_48 + 0xe);
            *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(local_48 + 0xc);
            *(undefined8 *)(puVar8 + 0xe) = uVar13;
            *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(local_48 + 0x10);
            lVar9 = 0x48;
          }
          lVar17 = 3;
          do {
            *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_48 + lVar9);
            lVar9 = lVar9 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          if ((ulong)((long)puVar8 - (long)local_48) < 0x10) {
            do {
              *(undefined1 *)((long)puVar8 + lVar9) = *(undefined1 *)((long)local_48 + lVar9);
              *(undefined1 *)((long)puVar8 + lVar9 + 1) =
                   *(undefined1 *)((long)local_48 + lVar9 + 1);
              *(undefined1 *)((long)puVar8 + lVar9 + 2) =
                   *(undefined1 *)((long)local_48 + lVar9 + 2);
              *(undefined1 *)((long)puVar8 + lVar9 + 3) =
                   *(undefined1 *)((long)local_48 + lVar9 + 3);
              lVar9 = lVar9 + 4;
            } while (lVar9 != 0x4b);
          }
          recovered_10007040(local_48);
          puVar10 = local_50;
          local_50 = puVar27;
        }
        else {
          puVar16 = puVar10;
        }
        lVar9 = 0x4b;
        if (puVar16 < (uint *)0x4) {
          pcVar11 = str_10019cab;
LAB_1000fe26:
          uVar18 = ~(ulong)pcVar11;
          uVar30 = ((int)puVar10 + ((uintptr_t)pf_module_state + 0x6cfU)) - (int)pcVar11 & 3;
          uVar31 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(char *)((long)puVar8 + lVar9) = *pcVar11;
              pcVar11 = pcVar11 + 1;
              lVar9 = lVar9 + 1;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
          if ((char *)0x2 < (char *)((long)puVar16 + ((uintptr_t)pf_module_state + 0x6cfU)) + uVar18) {
            lVar17 = 0;
            do {
              *(char *)((long)puVar8 + lVar17 + lVar9) = pcVar11[lVar17];
              *(char *)((long)puVar8 + lVar17 + lVar9 + 1) = pcVar11[lVar17 + 1];
              *(char *)((long)puVar8 + lVar17 + lVar9 + 2) = pcVar11[lVar17 + 2];
              *(char *)((long)puVar8 + lVar17 + lVar9 + 3) = pcVar11[lVar17 + 3];
              lVar3 = lVar17 + 4;
              lVar17 = lVar17 + 4;
            } while (pcVar11 + lVar3 != (char *)((long)puVar16 + ((uintptr_t)pf_module_state + 0x6cfU)));
          }
        }
        else {
          pcVar11 = str_10019cab;
          if (puVar8 + -0x4006718 < (uint *)0x20) goto LAB_1000fe26;
          if (puVar16 < (uint *)0x20) {
            puVar14 = (uint *)0x0;
LAB_1000fddb:
            puVar27 = (uint *)((ulong)puVar16 & 0xfffffffffffffffc);
            pcVar11 = (char *)((long)puVar27 + ((uintptr_t)pf_module_state + 0x6cfU));
            lVar9 = (long)puVar27 + 0x4b;
            do {
              *(undefined4 *)((long)puVar8 + 0x4b + (long)puVar14) =
                   *(undefined4 *)((long)puVar14 + ((uintptr_t)pf_module_state + 0x6cfU));
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (puVar16 != puVar27) goto LAB_1000fe26;
          }
          else {
            puVar14 = (uint *)((ulong)puVar16 & 0xffffffffffffffe0);
            puVar27 = (uint *)0x0;
            do {
              uVar13 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state + 0x6d7U));
              uVar1 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state + 0x6dfU));
              uVar2 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state + 0x6e7U));
              puVar7 = (undefined8 *)((long)puVar8 + 0x4b + (long)puVar27);
              *puVar7 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state + 0x6cfU));
              puVar7[1] = uVar13;
              puVar7 = (undefined8 *)((long)puVar8 + 0x5b + (long)puVar27);
              *puVar7 = uVar1;
              puVar7[1] = uVar2;
              puVar27 = puVar27 + 8;
            } while (puVar14 != puVar27);
            if (puVar16 != puVar14) {
              if (((ulong)puVar10 & 0x1c) == 0) {
                pcVar11 = (char *)((long)puVar14 + ((uintptr_t)pf_module_state + 0x6cfU));
                lVar9 = (long)puVar14 + 0x4b;
                goto LAB_1000fe26;
              }
              goto LAB_1000fddb;
            }
          }
        }
        uVar24 = (undefined1)local_60;
      }
      local_40 = puVar32;
      if (puVar32 == local_50) {
        local_38 = (uint *)0x4;
        if (local_50 != (uint *)0x0) {
          local_38 = (uint *)((long)local_50 * 2);
        }
        if (local_38 <= local_50) goto LAB_1000ff2c;
        local_138 = 9;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_1000ffff;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_1000ff95;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1000ffff;
          }
LAB_1000ff95:
          uVar18 = (ulong)local_50 & 3;
          puVar16 = puVar10;
          if (uVar18 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              puVar16 = (uint *)((long)puVar16 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if ((ulong)((long)puVar10 - (long)local_50) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_1000ffff:
        recovered_10007040(local_48);
      }
      else {
LAB_1000ff2c:
        local_38 = local_50;
      }
      *(undefined1 *)((long)puVar8 + (long)puVar32) = 0;
      local_58 = (uint *)((long)puVar32 + 5);
      if (local_38 < local_58) {
        local_48 = (uint *)((long)puVar32 + 1);
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 10;
        local_68 = puVar8;
        local_50 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_48 != (uint *)0x0) {
          uVar18 = 0;
          if ((3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_50))) {
            if (local_48 < 0x20) {
              uVar31 = 0;
            }
            else {
              uVar18 = (ulong)local_48 & 0xffffffffffffffe0;
              uVar31 = 0;
              do {
                uVar13 = ((undefined8 *)((long)local_50 + uVar31))[1];
                puVar7 = (undefined8 *)((long)local_50 + uVar31 + 0x10);
                uVar1 = *puVar7;
                uVar2 = puVar7[1];
                *(undefined8 *)((long)puVar8 + uVar31) = *(undefined8 *)((long)local_50 + uVar31);
                ((undefined8 *)((long)puVar8 + uVar31))[1] = uVar13;
                puVar7 = (undefined8 *)((long)puVar8 + uVar31 + 0x10);
                *puVar7 = uVar1;
                puVar7[1] = uVar2;
                uVar31 = uVar31 + 0x20;
              } while (uVar18 != uVar31);
              if (local_48 == (uint *)uVar18) goto LAB_1001016f;
              uVar31 = uVar18;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10010105;
            }
            uVar18 = (ulong)local_48 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)((long)puVar8 + uVar31) = *(undefined4 *)((long)local_50 + uVar31);
              uVar31 = uVar31 + 4;
            } while (uVar18 != uVar31);
            if (local_48 == (uint *)uVar18) goto LAB_1001016f;
          }
LAB_10010105:
          uVar31 = (long)local_40 - uVar18;
          uVar30 = (int)local_40 + 1U & 3;
          uVar19 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + uVar18) = *(undefined1 *)((long)local_50 + uVar18);
              uVar18 = uVar18 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if (2 < uVar31) {
            do {
              *(undefined1 *)((long)puVar8 + uVar18) = *(undefined1 *)((long)local_50 + uVar18);
              *(undefined1 *)((long)puVar8 + uVar18 + 1) =
                   *(undefined1 *)((long)local_50 + uVar18 + 1);
              *(undefined1 *)((long)puVar8 + uVar18 + 2) =
                   *(undefined1 *)((long)local_50 + uVar18 + 2);
              *(undefined1 *)((long)puVar8 + uVar18 + 3) =
                   *(undefined1 *)((long)local_50 + uVar18 + 3);
              uVar18 = uVar18 + 4;
            } while (local_48 != (uint *)uVar18);
          }
        }
LAB_1001016f:
        recovered_10007040(local_50);
      }
      *(undefined4 *)((long)puVar8 + 1 + (long)puVar32) = 0x6000000;
      local_50 = (uint *)((long)puVar32 + 9);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0xb;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_100102cf;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10010265;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_100102cf;
          }
LAB_10010265:
          lVar9 = 4 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_100102cf:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 5 + (long)puVar32) = 0x4000000;
      local_58 = (uint *)((long)puVar32 + 0xd);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0xc;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_1001042f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100103c5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001042f;
          }
LAB_100103c5:
          lVar9 = 8 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001042f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 9 + (long)puVar32) = 0xff000000;
      local_50 = (uint *)((long)puVar32 + 0x11);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0xd;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001058f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10010525;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001058f;
          }
LAB_10010525:
          lVar9 = 0xc - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001058f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0xd + (long)puVar32) = 0x7000000;
      local_58 = (uint *)((long)puVar32 + 0x15);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0xe;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_100106ef;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10010685;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_100106ef;
          }
LAB_10010685:
          lVar9 = 0x10 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100106ef:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x11 + (long)puVar32) = 0x4000000;
      local_50 = (uint *)((long)puVar32 + 0x19);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0xf;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001084f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100107e5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001084f;
          }
LAB_100107e5:
          lVar9 = 0x14 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001084f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x15 + (long)puVar32) = 0;
      local_58 = (uint *)((long)puVar32 + 0x1d);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x10;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_100109af;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10010945;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_100109af;
          }
LAB_10010945:
          lVar9 = 0x18 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100109af:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x19 + (long)puVar32) = 0x8000000;
      local_50 = (uint *)((long)puVar32 + 0x21);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x11;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10010b0f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10010aa5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10010b0f;
          }
LAB_10010aa5:
          lVar9 = 0x1c - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10010b0f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x1d + (long)puVar32) = 0x4000000;
      local_58 = (uint *)((long)puVar32 + 0x25);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x12;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_10010c6f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10010c05;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_10010c6f;
          }
LAB_10010c05:
          lVar9 = 0x20 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_10010c6f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x21 + (long)puVar32) = 0x1000000;
      local_50 = (uint *)((long)puVar32 + 0x29);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x13;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10010dcf;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10010d65;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10010dcf;
          }
LAB_10010d65:
          lVar9 = 0x24 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10010dcf:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x25 + (long)puVar32) = 0xf000000;
      local_58 = (uint *)((long)puVar32 + 0x2d);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x14;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_10010f2f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10010ec5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_10010f2f;
          }
LAB_10010ec5:
          lVar9 = 0x28 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_10010f2f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x29 + (long)puVar32) = 0x8000000;
      local_50 = (uint *)((long)puVar32 + 0x31);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x15;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001108f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10011025;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001108f;
          }
LAB_10011025:
          lVar9 = 0x2c - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001108f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x2d + (long)puVar32) = 0;
      local_58 = (uint *)((long)puVar32 + 0x35);
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x16;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_50 == puVar10) goto LAB_100111ef;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011185;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_100111ef;
          }
LAB_10011185:
          lVar9 = 0x30 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100111ef:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x31 + (long)puVar32) = 0;
      local_50 = (uint *)((long)puVar32 + 0x39);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x17;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_48 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_1001134f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100112e5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001134f;
          }
LAB_100112e5:
          lVar9 = 0x34 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001134f:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x35 + (long)puVar32) = 0;
      puVar10 = (uint *)((long)puVar32 + 0x3d);
      local_58 = puVar10;
      if (local_38 < puVar10) {
        puVar32 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar32 = local_38;
        }
        do {
          local_38 = puVar32;
          puVar32 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar10);
        local_138 = 0x18;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_58;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar16 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_50 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar16 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_48 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar16 != puVar27);
              if (local_50 == puVar16) goto LAB_100114c0;
              puVar27 = puVar16;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011456;
            }
            puVar16 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_48 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_50 == puVar16) goto LAB_100114c0;
          }
LAB_10011456:
          lVar9 = 0x38 - (long)puVar16;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              puVar16 = (uint *)((long)puVar16 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_100114c0:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x39 + (long)puVar32) = 0;
      puVar16 = (uint *)((long)puVar32 + 0x41);
      local_50 = puVar16;
      if (local_38 < puVar16) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar16);
        local_138 = 0x19;
        local_1b8 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar16 = local_50;
        puVar10 = local_58;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_48 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_58 == puVar27) goto LAB_10011623;
              puVar14 = puVar27;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100115b4;
            }
            puVar27 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_48 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_58 == puVar27) goto LAB_10011623;
          }
LAB_100115b4:
          lVar9 = 0x3c - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_58 != puVar27);
          }
        }
LAB_10011623:
        recovered_10007040(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x3d + (long)puVar32) = 0;
      local_48 = (uint *)((long)puVar32 + 0x45);
      if (local_38 < local_48) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_48);
        local_138 = 0x1a;
        local_1b8 = puVar8;
        local_b8 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar16 = local_50;
        uVar24 = (undefined1)local_60;
        if (local_50 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_b8))) {
            if (local_50 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_b8 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_b8 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_b8 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_b8 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar10 != puVar27);
              if (local_50 == puVar10) goto LAB_100117a0;
              puVar27 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011736;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_b8 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar10 != puVar27);
            if (local_50 == puVar10) goto LAB_100117a0;
          }
LAB_10011736:
          lVar9 = 0x40 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100117a0:
        recovered_10007040(local_b8);
        puVar10 = local_58;
      }
      *(undefined4 *)((long)puVar8 + (long)puVar16) = 0;
      if (puVar16 <= local_48) {
        uVar30 = (uint)local_48;
        *(uint *)((long)puVar8 + (long)puVar10) =
             uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      }
      local_58 = (uint *)((long)puVar32 + 0x49);
      uVar4 = (undefined1)local_78;
      if (local_38 < local_58) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_58);
        local_138 = 0x1b;
        local_170 = puVar8;
        local_50 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_48 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_50))) {
            if (local_48 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_48 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_50 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_50 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_50 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_50 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_48 == puVar10) goto LAB_10011920;
              puVar16 = puVar10;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_100118b6;
            }
            puVar10 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_50 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_48 == puVar10) goto LAB_10011920;
          }
LAB_100118b6:
          lVar9 = 0x44 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_48 != puVar10);
          }
        }
LAB_10011920:
        recovered_10007040(local_50);
        uVar4 = (undefined1)local_78;
      }
      *(char *)((long)puVar8 + 0x45 + (long)puVar32) = (char)local_70;
      *(char *)((long)puVar8 + 0x46 + (long)puVar32) = (char)local_b0;
      *(char *)((long)puVar8 + 0x47 + (long)puVar32) = (char)local_90;
      *(undefined1 *)((long)(puVar8 + 0x12) + (long)puVar32) = uVar4;
      local_48 = (uint *)((long)puVar32 + 0x4d);
      if (local_38 < local_48) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_48);
        local_138 = 0x1c;
        local_170 = puVar8;
        local_50 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        uVar24 = (undefined1)local_60;
        if (local_58 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_50))) {
            if (local_58 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_50 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_50 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_50 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_50 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_58 == puVar10) goto LAB_10011aa0;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10011a36;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_50 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10011aa0;
          }
LAB_10011a36:
          lVar9 = 0x48 - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10011aa0:
        recovered_10007040(local_50);
      }
      *(char *)((long)puVar8 + 0x49 + (long)puVar32) = (char)local_c8;
      *(char *)((long)puVar8 + 0x4a + (long)puVar32) = (char)local_c0;
      *(char *)((long)puVar8 + 0x4b + (long)puVar32) = (char)local_d0;
      *(undefined1 *)((long)(puVar8 + 0x13) + (long)puVar32) = uVar24;
      local_50 = (uint *)((long)puVar32 + 0x51);
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x1d;
        local_170 = puVar8;
        local_58 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        if (local_48 != (uint *)0x0) {
          puVar10 = (uint *)0x0;
          if (((uint *)0x3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_58))) {
            if (local_48 < (uint *)0x20) {
              puVar16 = (uint *)0x0;
            }
            else {
              puVar10 = (uint *)((ulong)local_48 & 0xffffffffffffffe0);
              puVar16 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_58 + (long)puVar16))[1];
                uVar1 = *(undefined8 *)((long)(local_58 + 4) + (long)puVar16);
                uVar2 = ((undefined8 *)((long)(local_58 + 4) + (long)puVar16))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar16) =
                     *(undefined8 *)((long)local_58 + (long)puVar16);
                ((undefined8 *)((long)puVar8 + (long)puVar16))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar16) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar16))[1] = uVar2;
                puVar16 = puVar16 + 8;
              } while (puVar10 != puVar16);
              if (local_48 == puVar10) goto LAB_10011c20;
              puVar16 = puVar10;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10011bb6;
            }
            puVar10 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_58 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_48 == puVar10) goto LAB_10011c20;
          }
LAB_10011bb6:
          lVar9 = 0x4c - (long)puVar10;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + (long)puVar10);
              puVar10 = (uint *)((long)puVar10 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 1 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 2 + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 3 + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_48 != puVar10);
          }
        }
LAB_10011c20:
        recovered_10007040(local_58);
      }
      *(undefined4 *)((long)puVar8 + 0x4d + (long)puVar32) = 0x4000000;
      puVar10 = (uint *)((long)puVar32 + 0x55);
      local_48 = puVar10;
      if (local_38 < puVar10) {
        puVar32 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar32 = local_38;
        }
        do {
          local_38 = puVar32;
          puVar32 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar10);
        local_138 = 0x1e;
        local_1c0 = puVar8;
        local_58 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_48;
        if (local_50 != (uint *)0x0) {
          puVar16 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_58))) {
            if (local_50 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar16 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_58 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_58 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_58 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_58 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar16 != puVar27);
              if (local_50 == puVar16) goto LAB_10011d84;
              puVar27 = puVar16;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10011d17;
            }
            puVar16 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_58 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_50 == puVar16) goto LAB_10011d84;
          }
LAB_10011d17:
          lVar9 = 0x50 - (long)puVar16;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + (long)puVar16);
              puVar16 = (uint *)((long)puVar16 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 1 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 2 + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 3 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_10011d84:
        recovered_10007040(local_58);
      }
      *(undefined4 *)((long)puVar8 + 0x51 + (long)puVar32) = 0;
      puVar16 = (uint *)((long)puVar32 + 0x59);
      local_58 = puVar16;
      if (local_38 < puVar16) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar16);
        local_138 = 0x1f;
        local_1c0 = puVar8;
        local_b8 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_48;
        puVar16 = local_58;
        if (local_48 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_48) && (0x1f < (ulong)((long)puVar8 - (long)local_b8))) {
            if (local_48 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_48 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_b8 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_b8 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_b8 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_b8 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_48 == puVar27) goto LAB_10011f03;
              puVar14 = puVar27;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10011e94;
            }
            puVar27 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_b8 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_48 == puVar27) goto LAB_10011f03;
          }
LAB_10011e94:
          lVar9 = 0x54 - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_48 != puVar27);
          }
        }
LAB_10011f03:
        recovered_10007040(local_b8);
      }
      *(undefined4 *)((long)puVar8 + (long)puVar10) = 0;
      if (puVar10 <= puVar16) {
        uVar30 = (uint)puVar16;
        *(uint *)((long)puVar8 + (long)local_50) =
             uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
      }
      puVar10 = (uint *)((long)puVar32 + 0x5d);
      local_50 = puVar10;
      if (local_38 < puVar10) {
        puVar32 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar32 = local_38;
        }
        do {
          local_38 = puVar32;
          puVar32 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar10);
        local_138 = 0x20;
        local_1c8 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_50;
        puVar16 = local_58;
        if (local_58 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_58) && (0x1f < (ulong)((long)puVar8 - (long)local_48))) {
            if (local_58 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_58 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_48 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_48 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_48 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_48 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_58 == puVar27) goto LAB_10012093;
              puVar14 = puVar27;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012024;
            }
            puVar27 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_48 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_58 == puVar27) goto LAB_10012093;
          }
LAB_10012024:
          lVar9 = 0x58 - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_58 != puVar27);
          }
        }
LAB_10012093:
        recovered_10007040(local_48);
      }
      *(char *)((long)puVar8 + 0x59 + (long)puVar32) = (char)local_70;
      *(char *)((long)puVar8 + 0x5a + (long)puVar32) = (char)local_b0;
      *(char *)((long)puVar8 + 0x5b + (long)puVar32) = (char)local_90;
      *(char *)((long)(puVar8 + 0x17) + (long)puVar32) = (char)local_78;
      puVar32 = (uint *)((long)puVar32 + 0x61);
      local_70 = puVar32;
      if (local_38 < puVar32) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < puVar32);
        local_138 = 0x21;
        local_1c8 = puVar8;
        local_b0 = puVar8;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar10 = local_50;
        puVar16 = local_58;
        puVar32 = local_70;
        if (local_50 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          if (((uint *)0x3 < local_50) && (0x1f < (ulong)((long)puVar8 - (long)local_b0))) {
            if (local_50 < (uint *)0x20) {
              puVar14 = (uint *)0x0;
            }
            else {
              puVar27 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
              puVar14 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_b0 + (long)puVar14))[1];
                uVar1 = *(undefined8 *)((long)(local_b0 + 4) + (long)puVar14);
                uVar2 = ((undefined8 *)((long)(local_b0 + 4) + (long)puVar14))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar14) =
                     *(undefined8 *)((long)local_b0 + (long)puVar14);
                ((undefined8 *)((long)puVar8 + (long)puVar14))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar14) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar14))[1] = uVar2;
                puVar14 = puVar14 + 8;
              } while (puVar27 != puVar14);
              if (local_50 == puVar27) goto LAB_1001222b;
              puVar14 = puVar27;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100121c4;
            }
            puVar27 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_b0 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_50 == puVar27) goto LAB_1001222b;
          }
LAB_100121c4:
          lVar9 = 0x5c - (long)puVar27;
          uVar30 = (int)local_40 + 1U & 3;
          uVar18 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (2 < (ulong)((long)local_40 + lVar9)) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_50 != puVar27);
          }
        }
LAB_1001222b:
        recovered_10007040(local_b0);
      }
      *(char *)((long)puVar8 + (long)puVar10) = (char)local_c8;
      *(char *)((long)puVar8 + 5 + (long)puVar16) = (char)local_c0;
      *(char *)((long)puVar8 + 6 + (long)puVar16) = (char)local_d0;
      *(char *)((long)puVar8 + 7 + (long)puVar16) = (char)local_60;
      local_148 = puVar8;
      if (local_88 == (uint *)0x0) {
        local_d8 = (void *)0x0;
        uVar18 = local_78;
        puVar10 = local_a8;
      }
      else {
        local_138 = 0x22;
        local_e8 = (void *)recovered_10006fe0((long)local_88 * 8);
        puVar10 = (uint *)0x0;
        recovered_10007040((void *)0x0);
        if (local_88 < (uint *)0x4) goto LAB_10012cc0;
        puVar10 = (uint *)(ulong)((uint)local_88 & 0x3ffffffc);
        puVar8 = (uint *)0x0;
        do {
          puVar7 = (undefined8 *)((long)local_e8 + (long)puVar8 * 8);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)((long)local_e8 + (long)puVar8 * 8 + 0x10);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar8 = puVar8 + 1;
        } while (puVar10 != puVar8);
        for (; local_88 != puVar10; puVar10 = (uint *)((long)puVar10 + 1)) {
LAB_10012cc0:
          *(undefined8 *)((long)local_e8 + (long)puVar10 * 8) = 0;
        }
        local_d0 = local_40 + 0x18;
        local_58 = (uint *)(ulong)((byte)((char)local_40 + 1) & 3);
        puVar14 = (uint *)0x0;
        puVar27 = local_88;
        puVar8 = local_148;
        uVar18 = local_78;
        puVar10 = local_a8;
        puVar16 = local_70;
        do {
          *(uint **)((long)local_e8 + (long)puVar14 * 8) = puVar16;
          puVar32 = puVar16 + 1;
          local_a0 = puVar8;
          if (local_38 < puVar32) {
            local_c0 = (uint *)((ulong)puVar16 & 0xfffffffffffffffc);
            local_90 = (uint *)((ulong)puVar16 & 0xffffffffffffffe0);
            local_c8 = local_d0 + (long)puVar14;
            puVar10 = local_38;
            if (local_38 == (uint *)0x0) {
              puVar10 = (uint *)0x4;
            }
            do {
              local_38 = puVar10;
              puVar10 = (uint *)((long)local_38 * 2);
            } while (local_38 < puVar32);
            local_138 = 0x24;
            local_b0 = puVar14;
            local_70 = puVar16;
            local_40 = puVar32;
            puVar8 = (uint *)recovered_10006fe0((long)local_38);
            puVar32 = local_40;
            puVar16 = local_70;
            puVar10 = local_a8;
            if (local_70 != (uint *)0x0) {
              if (local_70 < (uint *)0x4) {
                puVar27 = (uint *)0x0;
              }
              else {
                puVar27 = (uint *)0x0;
                if (0x1f < (ulong)((long)puVar8 - (long)local_a0)) {
                  if (local_70 < (uint *)0x20) {
                    puVar27 = (uint *)0x0;
                  }
                  else {
                    puVar27 = (uint *)0x0;
                    do {
                      uVar13 = ((undefined8 *)((long)local_a0 + (long)puVar27))[1];
                      uVar1 = *(undefined8 *)((long)(local_a0 + 4) + (long)puVar27);
                      uVar2 = ((undefined8 *)((long)(local_a0 + 4) + (long)puVar27))[1];
                      *(undefined8 *)((long)puVar8 + (long)puVar27) =
                           *(undefined8 *)((long)local_a0 + (long)puVar27);
                      ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                      *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                      ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                      puVar27 = puVar27 + 8;
                    } while (local_90 != puVar27);
                    if (local_70 == local_90) goto LAB_10012d00;
                    puVar27 = local_90;
                    if (((ulong)local_70 & 0x1c) == 0) goto LAB_10012e9f;
                  }
                  do {
                    *(undefined4 *)((long)puVar8 + (long)puVar27) =
                         *(undefined4 *)((long)local_a0 + (long)puVar27);
                    puVar27 = puVar27 + 1;
                  } while (local_c0 != puVar27);
                  puVar27 = local_c0;
                  if (local_70 == local_c0) goto LAB_10012d00;
                }
              }
LAB_10012e9f:
              puVar14 = puVar27;
              if (((ulong)local_70 & 3) != 0) {
                puVar23 = local_58;
                do {
                  *(undefined1 *)((long)puVar8 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + (long)puVar14);
                  puVar14 = (uint *)((long)puVar14 + 1);
                  puVar23 = (uint *)((long)puVar23 - 1);
                } while (puVar23 != (uint *)0x0);
              }
              if (2 < (ulong)((long)local_c8 - (long)puVar27)) {
                do {
                  *(undefined1 *)((long)puVar8 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 1 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 1 + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 2 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 2 + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 3 + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 3 + (long)puVar14);
                  puVar14 = puVar14 + 1;
                } while (local_70 != puVar14);
              }
            }
LAB_10012d00:
            recovered_10007040(local_a0);
            puVar27 = local_88;
            puVar14 = local_b0;
            uVar18 = local_78;
          }
          *(undefined4 *)((long)puVar8 + (long)puVar16) = 0;
          puVar14 = (uint *)((long)puVar14 + 1);
          local_d8 = local_e8;
          puVar16 = puVar32;
        } while (puVar14 != puVar27);
      }
      local_50 = puVar32 + 1;
      puVar16 = local_50;
      local_98 = puVar8;
      if (local_38 < local_50) {
        puVar10 = (uint *)0x4;
        if (local_38 != (uint *)0x0) {
          puVar10 = local_38;
        }
        do {
          local_38 = puVar10;
          puVar10 = (uint *)((long)local_38 * 2);
        } while (local_38 < local_50);
        local_138 = 0x23;
        local_40 = puVar32;
        puVar8 = (uint *)recovered_10006fe0((long)local_38);
        puVar32 = local_40;
        puVar10 = local_a8;
        if (local_40 != (uint *)0x0) {
          puVar16 = (uint *)0x0;
          if (((uint *)0x3 < local_40) && (0x1f < (ulong)((long)puVar8 - (long)local_98))) {
            if (local_40 < (uint *)0x20) {
              puVar27 = (uint *)0x0;
            }
            else {
              puVar16 = (uint *)((ulong)local_40 & 0xffffffffffffffe0);
              puVar27 = (uint *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_98 + (long)puVar27))[1];
                uVar1 = *(undefined8 *)((long)(local_98 + 4) + (long)puVar27);
                uVar2 = ((undefined8 *)((long)(local_98 + 4) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_98 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 4) + (long)puVar27) = uVar1;
                ((undefined8 *)((long)(puVar8 + 4) + (long)puVar27))[1] = uVar2;
                puVar27 = puVar27 + 8;
              } while (puVar16 != puVar27);
              if (local_40 == puVar16) goto LAB_10012497;
              puVar27 = puVar16;
              if (((ulong)local_40 & 0x1c) == 0) goto LAB_1001241b;
            }
            puVar16 = (uint *)((ulong)local_40 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_98 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_40 == puVar16) goto LAB_10012497;
          }
LAB_1001241b:
          uVar18 = (ulong)local_40 & 3;
          puVar27 = puVar16;
          if (uVar18 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + (long)puVar27);
              puVar27 = (uint *)((long)puVar27 + 1);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if ((ulong)((long)puVar16 - (long)local_40) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 1 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 1 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 2 + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3 + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 3 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_40 != puVar27);
          }
        }
LAB_10012497:
        recovered_10007040(local_98);
        uVar18 = local_78;
        puVar16 = local_50;
      }
      *(undefined4 *)((long)puVar8 + (long)puVar32) = 0;
      puVar32 = (uint *)(uVar18 & 0xffffffff);
      local_200 = (uint *)0x1;
      if (1 < (uint)local_180) {
        local_200 = (uint *)(local_180 & 0xffffffff);
      }
      lVar9 = (long)puVar32 * 4;
      local_150 = (ulong)((int)local_150 + (uint)((int)local_150 == 0));
      local_208 = local_60 & 0xffffffff;
      local_1d8 = (long)puVar32 * 0x100;
      local_1e0 = (long)puVar32 * -0x100;
      local_230 = (long)puVar32 * -4;
      puVar27 = local_158 + 4;
      uVar19 = 0;
      uVar31 = local_60;
      local_228 = lVar9;
      local_1a8 = puVar32;
      do {
        local_1f8 = local_1e0 * uVar19;
        uVar30 = 0x40;
        if ((uint)uVar31 < 0x40) {
          uVar30 = (uint)uVar31;
        }
        puVar23 = (uint *)(ulong)(uVar30 + (uVar30 == 0));
        local_210 = uVar19 * local_180;
        local_c0 = (uint *)(uVar19 << 6);
        uVar20 = uVar18 & 0xffffffff;
        puVar14 = (uint *)0x0;
        local_1f0 = puVar27;
        local_1e8 = uVar19;
        local_190 = puVar10;
        local_188 = puVar27;
        local_168 = puVar23;
        local_a8 = puVar10;
        local_60 = uVar31;
        do {
          local_174 = (int)uVar20;
          if (0x3f < uVar20) {
            uVar20 = 0x40;
          }
          local_d0 = (uint *)CONCAT44(PF_PART4(local_d0, 4),(int)puVar14 * 0x40);
          local_178 = (int)uVar18 + (int)puVar14 * -0x40;
          uVar30 = 0x40;
          if (local_178 < 0x40) {
            uVar30 = local_178;
          }
          lVar17 = *(long *)((long)local_d8 + (local_210 + (long)puVar14) * 8);
          if ((uint *)(lVar17 + 4U) <= puVar16) {
            uVar15 = (uint)puVar16;
            *(uint *)((long)puVar8 + lVar17) =
                 uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
            ;
          }
          puVar10 = local_a8;
          if (local_c0 != (uint *)local_208) {
            uVar15 = (int)uVar20 * 4;
            local_70 = (uint *)(ulong)uVar15;
            local_218 = (ulong)(uVar15 & 0x1e0);
            local_1a0 = (ulong)(uVar30 << 2);
            local_58 = local_158 + (long)puVar14 * 0x40;
            local_238 = local_1f8 - (long)local_58;
            puVar27 = (uint *)((long)puVar14 << 6);
            uVar15 = (int)uVar18 - (int)puVar27;
            if (0x3f < uVar15) {
              uVar15 = 0x40;
            }
            local_220 = (long)local_70 + -1;
            local_b0 = (uint *)(ulong)(uVar15 << 2);
            local_160 = (uint *)(ulong)(uVar30 << 2 & 0x1e0);
            puVar12 = (uint *)0x0;
            puVar22 = local_188;
            puVar28 = local_190;
            local_198 = uVar20;
            local_b8 = puVar27;
            local_48 = puVar14;
            local_40 = puVar16;
            do {
              local_80 = puVar8;
              if (puVar27 != puVar32) {
                local_c8 = puVar22;
                local_90 = puVar12;
                if (local_38 < (uint *)((long)local_b0 + (long)local_40)) {
                  if (local_38 == (uint *)0x0) {
                    local_38 = (uint *)0x4;
                  }
                  puVar10 = local_38;
                  do {
                    local_38 = puVar10;
                    puVar10 = (uint *)((long)local_38 * 2);
                  } while (local_38 < (uint *)((long)local_b0 + (long)local_40));
                  local_138 = 0x26;
                  local_88 = puVar28;
                  local_50 = puVar16;
                  puVar8 = (uint *)recovered_10006fe0((long)local_38);
                  puVar16 = local_50;
                  lVar9 = local_228;
                  if (local_50 != (uint *)0x0) {
                    if (local_50 < (uint *)0x4) {
                      puVar10 = (uint *)0x0;
                    }
                    else {
                      puVar10 = (uint *)0x0;
                      if (0x1f < (ulong)((long)puVar8 - (long)local_80)) {
                        if (local_50 < (uint *)0x20) {
                          puVar32 = (uint *)0x0;
                        }
                        else {
                          puVar10 = (uint *)((ulong)local_50 & 0xffffffffffffffe0);
                          puVar32 = (uint *)0x0;
                          do {
                            uVar13 = ((undefined8 *)((long)local_80 + (long)puVar32))[1];
                            uVar1 = *(undefined8 *)((long)(local_80 + 4) + (long)puVar32);
                            uVar2 = ((undefined8 *)((long)(local_80 + 4) + (long)puVar32))[1];
                            *(undefined8 *)((long)puVar8 + (long)puVar32) =
                                 *(undefined8 *)((long)local_80 + (long)puVar32);
                            ((undefined8 *)((long)puVar8 + (long)puVar32))[1] = uVar13;
                            *(undefined8 *)((long)(puVar8 + 4) + (long)puVar32) = uVar1;
                            ((undefined8 *)((long)(puVar8 + 4) + (long)puVar32))[1] = uVar2;
                            puVar32 = puVar32 + 8;
                          } while (puVar10 != puVar32);
                          if (local_50 == puVar10) goto LAB_1001292b;
                          puVar32 = puVar10;
                          if (((ulong)local_50 & 0x1c) == 0) goto LAB_100128b8;
                        }
                        puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)puVar8 + (long)puVar32) =
                               *(undefined4 *)((long)local_80 + (long)puVar32);
                          puVar32 = puVar32 + 1;
                        } while (puVar10 != puVar32);
                        if (local_50 == puVar10) goto LAB_1001292b;
                      }
                    }
LAB_100128b8:
                    uVar18 = (ulong)local_50 & 3;
                    puVar32 = puVar10;
                    if (uVar18 != 0) {
                      do {
                        *(undefined1 *)((long)puVar8 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + (long)puVar32);
                        puVar32 = (uint *)((long)puVar32 + 1);
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    if ((ulong)((long)puVar10 - (long)local_50) < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)((long)puVar8 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 1 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 1 + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 2 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 2 + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 3 + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 3 + (long)puVar32);
                        puVar32 = puVar32 + 1;
                      } while (local_50 != puVar32);
                    }
                  }
LAB_1001292b:
                  recovered_10007040(local_80);
                  uVar31 = (long)puVar16 - (long)local_40;
                  puVar14 = local_48;
                  puVar23 = local_168;
                  puVar27 = local_b8;
                  puVar28 = local_88;
                  puVar32 = local_1a8;
                  uVar18 = local_78;
                  puVar10 = local_a8;
                  if (!(puVar16 < local_40 || uVar31 == 0)) {
                    puVar22 = puVar16;
                    if (3 < uVar31) {
                      if (uVar31 < 0x10) {
                        uVar20 = 0;
                      }
                      else {
                        uVar20 = uVar31 & 0xfffffffffffffff0;
                        uVar19 = uVar20;
                        puVar7 = (undefined8 *)((long)puVar8 + (long)puVar16);
                        do {
                          puVar21 = puVar7 + -2;
                          uVar13 = puVar7[-1];
                          puVar7 = (undefined8 *)((long)puVar21 + local_198 * 4);
                          *puVar7 = *puVar21;
                          puVar7[1] = uVar13;
                          uVar19 = uVar19 - 0x10;
                          puVar7 = puVar21;
                        } while (uVar19 != 0);
                        if (uVar31 == uVar20) goto LAB_10012ad0;
                        if ((uVar31 & 0xc) == 0) {
                          puVar22 = (uint *)((long)puVar16 - uVar20);
                          goto LAB_10012a99;
                        }
                      }
                      uVar19 = uVar31 & 0xfffffffffffffffc;
                      puVar22 = (uint *)((long)puVar16 - uVar19);
                      lVar17 = uVar20 - uVar19;
                      puVar26 = (undefined4 *)(((long)puVar16 - uVar20) + (long)puVar8);
                      do {
                        puVar26 = puVar26 + -1;
                        puVar26[local_198] = *puVar26;
                        lVar17 = lVar17 + 4;
                      } while (lVar17 != 0);
                      if (uVar31 == uVar19) goto LAB_10012ad0;
                    }
LAB_10012a99:
                    do {
                      *(undefined1 *)((long)puVar8 + local_220 + (long)puVar22) =
                           *(undefined1 *)((long)puVar8 + -1 + (long)puVar22);
                      puVar22 = (uint *)((long)puVar22 + -1);
                    } while (local_40 < puVar22);
                  }
                }
LAB_10012ad0:
                puVar12 = (uint *)(((long)local_c0 + (long)local_90) * lVar9 + (long)local_58);
                puVar22 = puVar12;
                if ((int)uVar18 == (int)local_d0) {
LAB_10012b16:
                  puVar29 = (undefined1 *)((long)local_40 + (long)puVar8);
                  do {
                    *puVar29 = (char)*puVar22;
                    puVar22 = (uint *)((long)puVar22 + 1);
                    puVar29 = puVar29 + 1;
                  } while (puVar22 != (uint *)((long)puVar12 + (long)local_b0));
                }
                else {
                  if ((ulong)(local_230 * (long)local_90 + local_238 + (long)local_40 + (long)puVar8
                             ) < 0x20) {
                    goto LAB_10012b16;
                  }
                  if (local_178 < 8) {
                    puVar22 = (uint *)0x0;
LAB_10012bd0:
                    do {
                      *(undefined4 *)((long)local_40 + (long)puVar8 + (long)puVar22) =
                           *(undefined4 *)((long)puVar28 + (long)puVar22);
                      puVar22 = puVar22 + 1;
                    } while (local_70 != puVar22);
                  }
                  else {
                    uVar31 = 0;
                    do {
                      puVar7 = (undefined8 *)((long)local_c8 + (uVar31 - 0x10));
                      uVar13 = puVar7[1];
                      uVar1 = *(undefined8 *)((long)local_c8 + uVar31);
                      uVar2 = ((undefined8 *)((long)local_c8 + uVar31))[1];
                      puVar21 = (undefined8 *)((long)local_40 + (long)puVar8 + uVar31);
                      *puVar21 = *puVar7;
                      puVar21[1] = uVar13;
                      puVar7 = (undefined8 *)((long)local_40 + (long)puVar8 + 0x10 + uVar31);
                      *puVar7 = uVar1;
                      puVar7[1] = uVar2;
                      uVar31 = uVar31 + 0x20;
                    } while (local_218 != uVar31);
                    puVar14 = local_48;
                    puVar27 = local_b8;
                    local_88 = puVar28;
                    if ((int)local_160 != (int)local_1a0) {
                      puVar22 = local_160;
                      if ((local_1a0 & 0x1c) == 0) {
                        local_40 = (uint *)((long)local_40 + (long)local_160);
                        puVar22 = (uint *)((long)local_160 + (long)puVar12);
                        goto LAB_10012b16;
                      }
                      goto LAB_10012bd0;
                    }
                  }
                }
                puVar16 = (uint *)((long)puVar16 + (long)local_b0);
                puVar22 = local_c8;
                puVar12 = local_90;
                local_40 = puVar16;
              }
              puVar12 = (uint *)((long)puVar12 + 1);
              puVar22 = (uint *)((long)puVar22 + lVar9);
              puVar28 = (uint *)((long)puVar28 + lVar9);
            } while (puVar12 != puVar23);
          }
          puVar14 = (uint *)((long)puVar14 + 1);
          uVar20 = (ulong)(local_174 - 0x40);
          local_188 = local_188 + 0x40;
          local_190 = local_190 + 0x40;
          local_e0 = puVar8;
        } while (puVar14 != local_200);
        uVar19 = local_1e8 + 1;
        uVar31 = (ulong)((int)local_60 - 0x40);
        puVar27 = (uint *)((long)local_1f0 + local_1d8);
        puVar10 = (uint *)((long)puVar10 + local_1d8);
      } while (uVar19 != local_150);
      local_138 = 0x25;
      local_50 = puVar16;
      puVar10 = recovered_10005d90((long)local_1d0,((uintptr_t)pf_module_state + 0x68aU));
      if (puVar10 == (uint *)0x0) {
        bVar25 = 0;
      }
      else {
        if (local_50 == (uint *)0x0) {
          uVar6 = (undefined4)CONCAT71((int7)((ulong)puVar10 >> 8),1);
        }
        else {
          local_138 = 0x27;
          local_40 = puVar10;
          puVar10 = (uint *)recovered_10006610((long)local_e0,1,(long)local_50,puVar10);
          uVar6 = (undefined4)CONCAT71((int7)((ulong)puVar10 >> 8),puVar10 == local_50);
          puVar10 = local_40;
        }
        local_70 = (uint *)CONCAT44(PF_PART4(local_70, 4),uVar6);
        local_138 = 0x28;
        uVar13 = recovered_10006210((int *)puVar10);
        bVar25 = (byte)local_70 & (int)uVar13 == 0;
      }
      recovered_10007040(local_d8);
      recovered_10007040(local_e0);
      goto LAB_10012c9b;
    }
  }
  bVar25 = 0;
LAB_10012c9b:
  recovered_10007530(&local_140);
  return bVar25;
}

#undef DAT_100197c0
#undef DAT_10019dc8
#undef LAB_10012f2c
#undef UNK_100197c8
#undef _DAT_100197c0
#undef str_10019cab
#undef uRam00000000100197c8
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_238
#undef local_230
#undef local_228
#undef local_220
#undef local_218
#undef local_210
#undef local_208
#undef local_200
#undef local_1f8
#undef local_1f0
#undef local_1e8
#undef local_1e0
#undef local_1d8
#undef local_1d0
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_174
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10013130(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  param_1[1] = 0;
  if (param_2 <= (ulong)param_1[2]) {
    uVar7 = 0;
    goto LAB_10015774;
  }
  lVar6 = recovered_10006fe0(param_2);
  lVar2 = *param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if ((ulong)(lVar6 - lVar2) < 0x20 || uVar7 < 4) {
      uVar8 = 0;
    }
    else {
      if (uVar7 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar2 + uVar9))[1];
          puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar9);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)(lVar6 + uVar9) = *(undefined8 *)(lVar2 + uVar9);
          ((undefined8 *)(lVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1001573f;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_100156d5;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1001573f;
    }
LAB_100156d5:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)(lVar2 + uVar9);
        *(undefined1 *)(lVar6 + 1 + uVar9) = *(undefined1 *)(lVar2 + 1 + uVar9);
        *(undefined1 *)(lVar6 + 2 + uVar9) = *(undefined1 *)(lVar2 + 2 + uVar9);
        *(undefined1 *)(lVar6 + 3 + uVar9) = *(undefined1 *)(lVar2 + 3 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1001573f:
  recovered_10007040(lVar2);
  *param_1 = lVar6;
  param_1[2] = param_2;
  uVar7 = param_1[1];
LAB_10015774:
  while (uVar7 < param_2) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100132c0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  lVar6 = recovered_10006fe0(param_2);
  lVar2 = *param_1;
  uVar7 = param_1[1];
  if (uVar7 == 0) goto LAB_100158cf;
  if ((ulong)(lVar6 - lVar2) < 0x20 || uVar7 < 4) {
    uVar8 = 0;
  }
  else {
    if (uVar7 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffffe0;
      uVar9 = 0;
      do {
        uVar3 = ((undefined8 *)(lVar2 + uVar9))[1];
        puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar9);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)(lVar6 + uVar9) = *(undefined8 *)(lVar2 + uVar9);
        ((undefined8 *)(lVar6 + uVar9))[1] = uVar3;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar9 = uVar9 + 0x20;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_100158cf;
      uVar9 = uVar8;
      if ((uVar7 & 0x1c) == 0) goto LAB_10015865;
    }
    uVar8 = uVar7 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar8 != uVar9);
    if (uVar7 == uVar8) goto LAB_100158cf;
  }
LAB_10015865:
  uVar10 = uVar7 & 3;
  uVar9 = uVar8;
  if (uVar10 != 0) {
    do {
      *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)(lVar2 + uVar9);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar8 - uVar7 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)(lVar2 + uVar9);
      *(undefined1 *)(lVar6 + 1 + uVar9) = *(undefined1 *)(lVar2 + 1 + uVar9);
      *(undefined1 *)(lVar6 + 2 + uVar9) = *(undefined1 *)(lVar2 + 2 + uVar9);
      *(undefined1 *)(lVar6 + 3 + uVar9) = *(undefined1 *)(lVar2 + 3 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar7 != uVar9);
  }
LAB_100158cf:
  recovered_10007040(lVar2);
  *param_1 = lVar6;
  param_1[2] = param_2;
  uVar7 = param_1[1];
  while (uVar7 < param_2) {
    *(undefined1 *)(*param_1 + uVar7) = 0;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
  }
  return;
}


/* Recovered mask normalization; Pooka's Free Software License. */
uint recovered_10013450(uint pixel,uint mask) {
 if(!mask)return 0;
 unsigned shift=0,bits=0;while(!(mask&(1u<<shift)))shift++;
 for(unsigned value=mask;value;value>>=1)bits+=value&1;
 uint maximum=bits>=31?0xffffffffu:((1u<<bits)-1);
 return (uint)((maximum>>1)+((pixel&mask)>>shift)*255u)/maximum;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack_18 (*(undefined8 *)(frame + 24))
undefined8 recovered_100134e0(undefined8 *param_1,ushort *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;

  uVar6 = *(ulong *)*param_1;
  if (*(ulong *)param_1[1] <= uVar6) {
    return 0;
  }
  PF_PART4(uStack_18, 0) = (undefined4)uVar6;
  uStack_18 = CONCAT44(0xff000000,(undefined4)uStack_18);
  iVar2 = *(int *)param_1[2];
  if (iVar2 == 3) {
    uVar7 = (undefined1)*param_2;
    PF_PART5(uStack_18, 0) = CONCAT14(uVar7,(undefined4)uStack_18);
    PF_PART6(uStack_18, 0) = CONCAT15(uVar7,(undefined5)uStack_18);
    PF_PART7(uStack_18, 0) = CONCAT16(uVar7,(undefined6)uStack_18);
    uStack_18 = (ulong)(uint7)uStack_18;
    uVar7 = 0xff;
    if (*(int *)param_1[3] == 0x10) {
      uVar7 = *(undefined1 *)((long)param_2 + 1);
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        return 0;
      }
      if (*(int *)param_1[3] == 8) {
        uVar4 = (uint)(byte)*param_2;
      }
      else {
        uVar4 = (uint)*param_2;
      }
      uVar5 = uVar4 - *(uint *)param_1[4];
      if (uVar4 < *(uint *)param_1[4]) {
        return 0;
      }
      if (*(uint *)param_1[5] <= uVar5) {
        return 0;
      }
      recovered_10000f90((void *)((long)&uStack_18 + 4),
                         (void *)((ulong)uVar5 * 4 + *(long *)param_1[6]),4);
      uVar6 = *(ulong *)*param_1;
      goto LAB_10015a3a;
    }
    iVar2 = *(int *)param_1[3];
    if (iVar2 == 8) {
      uVar7 = (undefined1)*param_2;
      PF_PART5(uStack_18, 0) = CONCAT14(uVar7,(undefined4)uStack_18);
      PF_PART6(uStack_18, 0) = CONCAT15(uVar7,(undefined5)uStack_18);
    }
    else {
      if (iVar2 - 0xfU < 2) {
        uVar1 = *param_2;
        PF_PART5(uStack_18, 0) =
             CONCAT14((char)((uVar1 >> 10 & 0x1f) * 0x20e7f7 >> 0x12),(undefined4)uStack_18);
        PF_PART6(uStack_18, 0) =
             CONCAT15((char)((uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12),(undefined5)uStack_18);
        PF_PART7(uStack_18, 0) = CONCAT16((char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12),(undefined6)uStack_18);
        bVar9 = 0xff;
        if (iVar2 == 0x10) {
          bVar9 = -((*(uint *)param_1[7] & 0xf) == 0) | (byte)((uint)(int)(short)uVar1 >> 0xf);
        }
        uStack_18 = CONCAT17(bVar9,(uint7)uStack_18);
        goto LAB_10015a3a;
      }
      if (iVar2 == 0x20) {
        PF_PART5(uStack_18, 0) = CONCAT14((char)param_2[1],(undefined4)uStack_18);
        PF_PART6(uStack_18, 0) = CONCAT15(*(undefined1 *)((long)param_2 + 1),(undefined5)uStack_18);
        PF_PART7(uStack_18, 0) = CONCAT16((char)*param_2,(undefined6)uStack_18);
        uStack_18 = (ulong)(uint7)uStack_18;
        uVar7 = *(undefined1 *)((long)param_2 + 3);
        goto LAB_10015a37;
      }
      if (iVar2 != 0x18) {
        return 0;
      }
      PF_PART5(uStack_18, 0) = CONCAT14((char)param_2[1],(undefined4)uStack_18);
      PF_PART6(uStack_18, 0) = CONCAT15(*(undefined1 *)((long)param_2 + 1),(undefined5)uStack_18);
      uVar7 = (undefined1)*param_2;
    }
    PF_PART7(uStack_18, 0) = CONCAT16(uVar7,(undefined6)uStack_18);
    uStack_18 = (ulong)(uint7)uStack_18;
    uVar7 = 0xff;
  }
LAB_10015a37:
  uStack_18 = CONCAT17(uVar7,(uint7)uStack_18);
LAB_10015a3a:
  uVar8 = (ulong)*(uint *)param_1[8];
  if (uVar6 >> 0x20 == 0) {
    uVar4 = (uint)((uVar6 & 0xffffffff) / uVar8);
    uVar5 = (uint)((uVar6 & 0xffffffff) % uVar8);
  }
  else {
    uVar4 = (uint)(uVar6 / uVar8);
    uVar5 = (uint)(uVar6 % uVar8);
  }
  uVar10 = ~uVar5 + *(uint *)param_1[8];
  if ((*(uint *)param_1[7] & 0x10) == 0) {
    uVar10 = uVar5;
  }
  if ((*(uint *)param_1[7] & 0x20) == 0) {
    uVar4 = ~uVar4 + *(int *)param_1[9];
  }
  recovered_10000f90((void *)(((ulong)uVar10 + uVar4 * uVar8) * 4 + *(long *)param_1[10]),
                     (void *)((long)&uStack_18 + 4),4);
  plVar3 = (long *)*param_1;
  *plVar3 = *plVar3 + 1;
  return CONCAT71((int7)((ulong)plVar3 >> 8),1);
}

#undef uStack_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10013720(long param_1,ulong param_2,ulong *param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;

  uVar10 = *param_3;
  if (param_2 - uVar10 < 4 || param_2 < uVar10) {
LAB_1001657c:
    uVar8 = 0;
  }
  else {
    while( true ) {
      uVar7 = *(uint *)(param_1 + uVar10);
      uVar14 = uVar10 + 4;
      *param_3 = uVar14;
      if (param_2 < uVar14) {
        return 0;
      }
      if (param_2 - uVar14 < 4) {
        return 0;
      }
      uVar12 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = *(uint *)(param_1 + 4 + uVar10);
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar10 = uVar10 + 8;
      *param_3 = uVar10;
      if (uVar12 == 0) break;
      if ((param_2 < uVar10) || (param_2 - uVar10 < (ulong)uVar7)) goto LAB_1001657c;
      puVar1 = (uint *)(param_1 + uVar10);
      if ((uVar12 == 1) && (3 < uVar7)) {
        uVar12 = *puVar1;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
        ;
        if ((uVar12 < 0x101) && (uVar12 * 3 + 4 <= uVar7)) {
          uVar10 = (ulong)(uVar12 * 3);
          *(undefined8 *)(param_4 + 0x20) = 0;
          if (*(ulong *)(param_4 + 0x28) < uVar10) {
            lVar9 = recovered_10006fe0(uVar10);
            lVar3 = *(long *)(param_4 + 0x18);
            uVar14 = *(ulong *)(param_4 + 0x20);
            if (uVar14 != 0) {
              if (uVar14 < 4) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                if (0x1f < (ulong)(lVar9 - lVar3)) {
                  if (uVar14 < 0x20) {
                    uVar13 = 0;
                  }
                  else {
                    uVar11 = uVar14 & 0xffffffffffffffe0;
                    uVar13 = 0;
                    do {
                      uVar4 = ((undefined8 *)(lVar3 + uVar13))[1];
                      puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar13);
                      uVar5 = *puVar2;
                      uVar6 = puVar2[1];
                      *(undefined8 *)(lVar9 + uVar13) = *(undefined8 *)(lVar3 + uVar13);
                      ((undefined8 *)(lVar9 + uVar13))[1] = uVar4;
                      puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar13);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      uVar13 = uVar13 + 0x20;
                    } while (uVar11 != uVar13);
                    if (uVar14 == uVar11) goto LAB_1001650f;
                    uVar13 = uVar11;
                    if ((uVar14 & 0x1c) == 0) goto LAB_100164a5;
                  }
                  uVar11 = uVar14 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)(lVar9 + uVar13) = *(undefined4 *)(lVar3 + uVar13);
                    uVar13 = uVar13 + 4;
                  } while (uVar11 != uVar13);
                  if (uVar14 == uVar11) goto LAB_1001650f;
                }
              }
LAB_100164a5:
              uVar15 = uVar14 & 3;
              uVar13 = uVar11;
              if (uVar15 != 0) {
                do {
                  *(undefined1 *)(lVar9 + uVar13) = *(undefined1 *)(lVar3 + uVar13);
                  uVar13 = uVar13 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if (uVar11 - uVar14 < 0xfffffffffffffffd) {
                do {
                  *(undefined1 *)(lVar9 + uVar13) = *(undefined1 *)(lVar3 + uVar13);
                  *(undefined1 *)(lVar9 + 1 + uVar13) = *(undefined1 *)(lVar3 + 1 + uVar13);
                  *(undefined1 *)(lVar9 + 2 + uVar13) = *(undefined1 *)(lVar3 + 2 + uVar13);
                  *(undefined1 *)(lVar9 + 3 + uVar13) = *(undefined1 *)(lVar3 + 3 + uVar13);
                  uVar13 = uVar13 + 4;
                } while (uVar14 != uVar13);
              }
            }
LAB_1001650f:
            recovered_10007040(lVar3);
            *(long *)(param_4 + 0x18) = lVar9;
            *(ulong *)(param_4 + 0x28) = uVar10;
            uVar14 = *(ulong *)(param_4 + 0x20);
          }
          else {
            uVar14 = 0;
          }
          while (uVar14 < uVar10) {
            *(undefined1 *)(*(long *)(param_4 + 0x18) + uVar14) = 0;
            uVar14 = *(long *)(param_4 + 0x20) + 1;
            *(ulong *)(param_4 + 0x20) = uVar14;
          }
          recovered_10000f90(*(void **)(param_4 + 0x18),puVar1 + 1,uVar14);
          uVar10 = *param_3;
        }
      }
      else if ((uVar12 == 0x11) && (uVar7 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar1;
      }
      uVar10 = uVar10 + uVar7;
      *param_3 = uVar10;
      if (param_2 < uVar10) {
        return 0;
      }
      if (param_2 - uVar10 < 4) {
        return 0;
      }
    }
    uVar8 = CONCAT31((int3)(uVar7 >> 8),uVar7 == 0);
  }
  return uVar8;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100139d0(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = *param_3;
  if (param_4 == 4) {
    if (param_2 - uVar2 < 4 || param_2 < uVar2) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + uVar2);
    uVar2 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
    ;
  }
  else {
    if (param_2 - uVar2 < 8 || param_2 < uVar2) {
      return 0;
    }
    uVar2 = *(ulong *)(param_1 + uVar2);
    uVar2 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
            (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  }
  *param_5 = uVar2;
  *param_3 = *param_3 + (ulong)param_4;
  return CONCAT71((uint7)(uint3)(param_4 >> 8),1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10013a30(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  uVar8 = param_1[1];
  if (uVar8 != param_1[2]) goto LAB_10016722;
  uVar12 = 4;
  if (uVar8 != 0) {
    uVar12 = uVar8 * 2;
  }
  if (uVar12 <= uVar8) goto LAB_10016722;
  lVar7 = recovered_10006fe0(uVar12 * 8);
  lVar3 = *param_1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = 0;
    if ((5 < uVar8) && (0x1f < (ulong)(lVar7 - lVar3))) {
      uVar9 = uVar8 & 0xfffffffffffffffc;
      uVar10 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + uVar10 * 8);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 8);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar7 + uVar10 * 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar10 * 8);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        uVar10 = uVar10 + 4;
      } while (uVar9 != uVar10);
      if (uVar8 == uVar9) goto LAB_1001670f;
    }
    uVar11 = uVar8 & 3;
    uVar10 = uVar9;
    if (uVar11 != 0) {
      do {
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar3 + uVar10 * 8);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar9 - uVar8 < 0xfffffffffffffffd) {
      do {
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar3 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 8 + uVar10 * 8) = *(undefined8 *)(lVar3 + 8 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 0x10 + uVar10 * 8) = *(undefined8 *)(lVar3 + 0x10 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 0x18 + uVar10 * 8) = *(undefined8 *)(lVar3 + 0x18 + uVar10 * 8);
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_1001670f:
  recovered_10007040(lVar3);
  *param_1 = lVar7;
  param_1[2] = uVar12;
  uVar8 = param_1[1];
LAB_10016722:
  *(undefined8 *)(*param_1 + uVar8 * 8) = *param_2;
  param_1[1] = uVar8 + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10013b70(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    uVar7 = 0;
    goto LAB_100168b4;
  }
  lVar6 = recovered_10006fe0(param_2);
  lVar2 = *param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if ((ulong)(lVar6 - lVar2) < 0x20 || uVar7 < 4) {
      uVar8 = 0;
    }
    else {
      if (uVar7 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar2 + uVar9))[1];
          puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar9);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)(lVar6 + uVar9) = *(undefined8 *)(lVar2 + uVar9);
          ((undefined8 *)(lVar6 + uVar9))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar9);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar8 != uVar9);
        if (uVar7 == uVar8) goto LAB_1001687f;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_10016815;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1001687f;
    }
LAB_10016815:
    uVar10 = uVar7 & 3;
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar8 - uVar7 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar6 + uVar9) = *(undefined1 *)(lVar2 + uVar9);
        *(undefined1 *)(lVar6 + 1 + uVar9) = *(undefined1 *)(lVar2 + 1 + uVar9);
        *(undefined1 *)(lVar6 + 2 + uVar9) = *(undefined1 *)(lVar2 + 2 + uVar9);
        *(undefined1 *)(lVar6 + 3 + uVar9) = *(undefined1 *)(lVar2 + 3 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar7 != uVar9);
    }
  }
LAB_1001687f:
  recovered_10007040(lVar2);
  *param_1 = lVar6;
  param_1[2] = param_2;
  uVar7 = param_1[1];
LAB_100168b4:
  while (uVar7 < param_2) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
#define DAT_1001d520 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
#define DAT_1001d740 (*(float *)(((uintptr_t)pf_module_state + 0x274U)))
#define local_38 (*(ulong *)(frame + 40))
#define local_40 (*(long *)(frame + 32))
#define local_48 (*(float (*)[2])(frame + 24))
#define local_50 (*(ulong *)(frame + 16))
bool recovered_10013d00(long param_1,ulong param_2,long param_3,ulong param_4,uint *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;

  if (param_2 - param_4 < 4 || param_2 < param_4) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + param_4);
  *param_5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (param_2 - (param_4 + 4) < 4 || param_2 < param_4 + 4) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 4 + param_4);
  param_5[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (param_2 - (param_4 + 8) < 4 || param_2 < param_4 + 8) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 8 + param_4);
  param_5[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (param_2 - (param_4 + 0xc) < 4 || param_2 < param_4 + 0xc) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0xc + param_4);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar3 = param_4 + 0x10;
  if (uVar1 != 0) {
    if (param_2 < uVar3) {
      return false;
    }
    if (param_2 - uVar3 < (ulong)uVar1) {
      return false;
    }
    uVar3 = uVar3 + uVar1;
  }
  if (param_2 - uVar3 < 4 || param_2 < uVar3) {
    return false;
  }
  while( true ) {
    if (param_2 < uVar3 + 4) {
      return false;
    }
    if (param_2 - (uVar3 + 4) < 4) {
      return false;
    }
    uVar1 = *(uint *)(param_1 + uVar3);
    uVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)(param_1 + 4 + uVar3);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar3 = uVar3 + 8;
    if (uVar5 == 0) break;
    if (param_2 < uVar3) {
      return false;
    }
    if (param_2 - uVar3 < (ulong)uVar1) {
      return false;
    }
    if ((uVar5 == 6) && (3 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      if (0xfe < uVar5) {
        uVar5 = 0xff;
      }
      param_5[4] = uVar5;
    }
    else if ((uVar5 == 8) && (3 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      *(bool *)(param_5 + 3) =
           ((uVar5 >> 0x18 != 0 || (uVar5 & 0xff0000) != 0) || (uVar5 & 0xff00) != 0) ||
           (uVar5 & 0xff) != 0;
    }
    else if ((uVar5 == 0xf) && (7 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      param_5[5] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = *(uint *)(param_1 + 4 + uVar3);
      param_5[6] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    else if ((uVar5 == 0x21) && (3 < uVar1)) {
      uVar5 = *(uint *)(param_1 + uVar3);
      local_50 = CONCAT44(PF_PART4(local_50, 4),
                          uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
      local_48[0] = 0.0;
      local_40 = param_3;
      local_38 = uVar3;
      recovered_10000f90(local_48,&local_50,4);
      if (local_48[0] <= 0.0) {
        param_5[4] = 0;
      }
      else if (DAT_1001d520 <= local_48[0]) {
        param_5[4] = 0xff;
      }
      else {
        param_5[4] = (uint)(long)((double)(local_48[0] * DAT_1001d740) +
                                 *(double *)
                                  (&DAT_1001d4e0 + (ulong)(0.0 <= local_48[0] * DAT_1001d740) * 8));
      }
      uVar3 = local_38;
      param_3 = local_40;
    }
    uVar3 = uVar3 + uVar1;
    if (param_2 < uVar3) {
      return false;
    }
    if (param_2 - uVar3 < 4) {
      return false;
    }
  }
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    if ((ulong)uVar1 == 4) {
      if (param_2 - uVar3 < 4 || param_2 < uVar3) {
        return false;
      }
      uVar5 = *(uint *)(param_1 + uVar3);
      uVar4 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                     uVar5 << 0x18);
    }
    else {
      if (param_2 - uVar3 < 8 || param_2 < uVar3) {
        return false;
      }
      uVar4 = *(ulong *)(param_1 + uVar3);
      uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
              | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
              | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    }
    *(ulong *)(param_5 + 8) = uVar4;
    local_50 = uVar3 + uVar1;
    uVar2 = recovered_100139d0(param_1,param_2,&local_50,uVar1,(ulong *)local_48);
    if ((char)uVar2 != '\0') {
      return uVar4 != 0 && (param_5[1] != 0 && *param_5 != 0);
    }
  }
  return false;
}

#undef DAT_1001d4e0
#undef DAT_1001d520
#undef DAT_1001d740
#undef local_38
#undef local_40
#undef local_48
#undef local_50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001dbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55cU)))
#define DAT_1001e008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x840U)))
#define LAB_100173d4 (*(uint8_t *)(0x100173d4U))
#define auStack_1b8 (*(undefined1 (*)[8])(frame + 24))
#define local_108 (*(ulong *)(frame + 200))
#define local_110 (*(long *)(frame + 192))
#define local_118 (*(ulong *)(frame + 184))
#define local_120 (*(ulong *)(frame + 176))
#define local_128 (*(long *)(frame + 168))
#define local_130 (*(ulong *)(frame + 160))
#define local_138 (*(ulong *)(frame + 152))
#define local_140 (*(long *)(frame + 144))
#define local_148 (*(ulong *)(frame + 136))
#define local_150 (*(ulong *)(frame + 128))
#define local_158 (*(ulong *)(frame + 120))
#define local_170 (*(undefined1 * *)(frame + 96))
#define local_178 (*(undefined1 * *)(frame + 88))
#define local_180 (*(undefined1 * *)(frame + 80))
#define local_188 (*(undefined * *)(frame + 72))
#define local_190 (*(code * *)(frame + 64))
#define local_1a8 (*(undefined4 *)(frame + 40))
#define local_1b0 (*(undefined8 *)(frame + 32))
#define local_34 (*(undefined1 (*)[2])(frame + 412))
#define local_40 (*(ulong *)(frame + 400))
#define local_48 (*(long *)(frame + 392))
#define local_50 (*(long *)(frame + 384))
#define local_58 (*(ulong *)(frame + 376))
#define local_60 (*(ulong *)(frame + 368))
#define local_64 (*(uint *)(frame + 364))
#define local_70 (*(ulong *)(frame + 352))
#define local_78 (*(ulong *)(frame + 344))
#define local_80 (*(ulong *)(frame + 336))
#define local_88 (*(undefined8 *)(frame + 328))
#define local_98 (*(ulong *)(frame + 312))
#define local_a0 (*(ulong *)(frame + 304))
#define local_a8 (*(ulong *)(frame + 296))
#define local_b0 (*(ulong *)(frame + 288))
#define local_b8 (*(uint * *)(frame + 280))
#define local_c0 (*(long * *)(frame + 272))
#define local_c4 (*(uint *)(frame + 268))
#define local_d0 (*(ulong *)(frame + 256))
#define local_d8 (*(ulong *)(frame + 248))
#define local_e0 (*(ulong *)(frame + 240))
#define local_e8 (*(ulong *)(frame + 232))
#define local_f0 (*(long *)(frame + 224))
#define local_f8 (*(ulong *)(frame + 216))
#define uStack_90 (*(ulong *)(frame + 320))
ulong recovered_10014010(long param_1,ulong param_2,long param_3,uint *param_4,long *param_5)

{
  unsigned char frame[496] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;

  local_180 = local_34 + 0x2c;
  local_170 = auStack_1b8;
  uVar8 = *(ulong *)(param_4 + 8);
  local_190 = recovered_10006f90;
  local_188 = &DAT_1001e008;
  local_178 = &LAB_100173d4;
  local_c0 = param_5;
  local_50 = param_3;
  local_48 = param_1;
  recovered_10007510(&local_1b0);
  if (((3 < param_2 - uVar8 && uVar8 <= param_2) &&
      (3 < param_2 - (uVar8 + 4) && uVar8 + 4 <= param_2)) &&
     (3 < param_2 - (uVar8 + 8) && uVar8 + 8 <= param_2)) {
    uVar10 = *(uint *)(local_48 + uVar8);
    uVar17 = *(uint *)(local_48 + 4 + uVar8);
    uVar7 = uVar8 + 0xc;
    if (*(int *)(local_50 + 0x10) == 4) {
      if (3 < param_2 - uVar7 && uVar7 <= param_2) {
        uVar12 = *(uint *)(local_48 + uVar7);
        uVar7 = (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                       uVar12 << 0x18);
LAB_10016d14:
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        if (uVar10 == *param_4) {
          uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
          puVar9 = (uint *)0x0;
          if ((uVar17 != param_4[1]) || (uVar7 == 0)) goto LAB_10016f18;
          if ((ulong)param_4[2] < 6) {
            uVar11 = (ulong)*(byte *)(local_48 + 8 + uVar8) * 0x1000000;
            uVar6 = (ulong)*(byte *)(local_48 + 9 + uVar8) * 0x10000;
            uVar15 = (uint)*(byte *)(local_48 + 10 + uVar8) << 8;
            uVar13 = (uint)*(byte *)(local_48 + 0xb + uVar8);
            uVar12 = (int)uVar6 + (int)uVar11 | uVar15 | uVar13;
            if (((uVar12 == *(uint *)(&DAT_1001dbb8 + (ulong)param_4[2] * 4)) &&
                (3 < param_2 - uVar7 && uVar7 <= param_2)) &&
               (3 < param_2 - (uVar7 + 4) && uVar7 + 4 <= param_2)) {
              uVar1 = *(uint *)(local_48 + uVar7);
              uVar2 = *(uint *)(local_48 + 4 + uVar7);
              local_118 = uVar7 + 8;
              puVar9 = (uint *)0x0;
              if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   == uVar10) &&
                 ((uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                  == uVar17)) {
                local_40 = CONCAT44(PF_PART4(local_40, 4),uVar15);
                local_58 = CONCAT44(PF_PART4(local_58, 4),uVar13);
                local_c4 = uVar10 + 0x3f;
                local_e0 = (ulong)(local_c4 >> 6);
                local_60 = CONCAT44(PF_PART4(local_60, 4),uVar17 + 0x3f);
                local_130 = (ulong)(uVar17 + 0x3f >> 6);
                uVar8 = local_130 * local_e0;
                local_1a8 = 0xffffffff;
                local_80 = uVar6;
                local_78 = uVar11;
                local_70 = param_2;
                local_64 = uVar12;
                recovered_10014990(&local_110,uVar8);
                if (uVar8 != 0) {
                  lVar18 = 0;
                  do {
                    uVar5 = recovered_100139d0(local_48,local_70,&local_118,
                                               *(uint *)(local_50 + 0x10),
                                               (ulong *)(local_110 + lVar18));
                    if (((char)uVar5 == '\0') || (*(long *)(local_110 + lVar18) == 0))
                    goto LAB_100173b6;
                    lVar18 = lVar18 + 8;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                local_f8 = 0;
                uVar5 = recovered_100139d0(local_48,local_70,&local_118,*(uint *)(local_50 + 0x10),
                                           &local_f8);
                puVar9 = (uint *)0x0;
                if (((char)uVar5 != '\0') && (local_f8 == 0)) {
                  local_b8 = param_4;
                  if ((ulong)param_4[1] * (ulong)*param_4 >> 0x3e == 0) {
                    local_98 = local_98 & 0xffffffffffffff00;
                    local_1a8 = 1;
                    recovered_10013130(local_c0,(ulong)param_4[1] * (ulong)*param_4 * 4,
                                       (undefined1 *)&local_98);
                    if (0x3f < (uint)local_60) {
                      local_120 = (ulong)local_64;
                      local_78 = (ulong)(uint)((int)local_78 + (int)local_80 + (int)local_40 +
                                              (int)local_58);
                      local_d0 = 0;
                      local_a0 = 0;
                      uVar8 = local_70;
                      puVar9 = local_b8;
                      do {
                        if (0x3f < local_c4) {
                          local_128 = local_a0 * local_e0;
                          local_d8 = local_a0 << 6;
                          local_a8 = 0;
                          local_f0 = 0;
                          uVar7 = 0;
                          do {
                            lVar18 = local_128 + uVar7;
                            uVar11 = *(ulong *)(local_110 + lVar18 * 8);
                            uVar6 = uVar8 - uVar11;
                            if (uVar8 < uVar11 || uVar6 == 0) goto LAB_100173b6;
                            local_e8 = (ulong)*puVar9;
                            local_60 = (ulong)puVar9[1];
                            local_150 = uVar7 << 6;
                            uVar10 = *puVar9 - (int)local_150;
                            local_80 = (ulong)uVar10;
                            if (0x3f < uVar10) {
                              local_80 = 0x40;
                            }
                            uVar10 = puVar9[1] - (int)local_d8;
                            if (0x3f < uVar10) {
                              uVar10 = 0x40;
                            }
                            uVar8 = uVar6;
                            if ((lVar18 + 1U < local_108) &&
                               (uVar16 = *(ulong *)(local_110 + 8 + lVar18 * 8),
                               uVar8 = uVar16 - uVar11, uVar16 < uVar11 || uVar8 == 0)) {
                              uVar8 = uVar6;
                            }
                            uVar16 = (uVar10 * (int)local_80) * local_120;
                            local_98 = 0;
                            uStack_90 = 0;
                            local_88 = 0;
                            iVar3 = *(int *)(local_50 + 0x14);
                            local_58 = CONCAT44(PF_PART4(local_58, 4),uVar10);
                            local_138 = uVar7;
                            if (iVar3 == 2) {
                              if (lVar18 + 1U < local_108) {
                                local_1a8 = 4;
                                local_40 = uVar16;
                                uVar8 = recovered_100150c0((undefined1 *)(uVar11 + local_48),uVar8,
                                                           (long *)&local_98);
                                if (((byte)uVar8 & uStack_90 == local_40) == 1) goto LAB_1001718b;
                              }
LAB_1001739f:
                              uStack_90 = 0;
                              recovered_10007040(local_98);
                              goto LAB_100173b6;
                            }
                            if (iVar3 == 1) {
                              local_1a8 = 3;
                              uVar8 = recovered_10014b10(uVar11 + local_48,uVar8,
                                                         uVar10 * (int)local_80,local_64,
                                                         (long *)&local_98);
                              if ((char)uVar8 == '\0') goto LAB_1001739f;
                            }
                            else {
                              if ((iVar3 != 0) || (uVar6 < uVar16)) goto LAB_1001739f;
                              local_1a8 = 2;
                              recovered_100152b0((long *)&local_98,0,
                                                 (undefined1 *)(uVar11 + local_48),
                                                 (undefined1 *)(uVar11 + local_48) + uVar16);
                            }
LAB_1001718b:
                            puVar9 = local_b8;
                            if (local_d8 != local_60) {
                              local_148 = local_58 & 0xffffffff;
                              uVar8 = (ulong)(uint)((int)local_e8 + (int)local_a8);
                              if (0x3f < uVar8) {
                                uVar8 = 0x40;
                              }
                              local_140 = uVar8 * local_78;
                              local_b0 = 0;
                              local_40 = local_d0;
                              uVar8 = 0;
                              plVar14 = local_c0;
                              do {
                                local_158 = uVar8;
                                if (local_150 != local_e8) {
                                  uVar7 = 0;
                                  uVar8 = local_b0;
                                  do {
                                    uVar10 = puVar9[2];
                                    (*(uint32_t *)(void *)local_34) = 0;
                                    uVar17 = 0xff;
                                    if (uVar10 < 6) {
                                      if ((3U >> (uVar10 & 0x1f) & 1) == 0) {
                                        if ((0xcU >> (uVar10 & 0x1f) & 1) == 0) {
                                          if ((ulong)*(byte *)(local_98 + uVar8) * 3 + 2 <
                                              *(ulong *)(local_50 + 0x20)) {
                                            lVar4 = (ulong)*(byte *)(local_98 + uVar8) * 3;
                                            lVar18 = *(long *)(local_50 + 0x18);
                                            PF_PART2(local_34,0) = (uint16_t)
                                                       CONCAT11(*(undefined1 *)(lVar18 + 1 + lVar4),
                                                                *(undefined1 *)(lVar18 + lVar4));
                                            (*(uint32_t *)(void *)local_34) = CONCAT12(*(undefined1 *)(lVar18 + 2 + lVar4)
                                                                 ,PF_PART2(local_34,0));
                                          }
                                          lVar18 = 1;
                                          if (uVar10 == 5) goto LAB_100172c7;
                                        }
                                        else {
                                          PF_PART2(local_34,0) = (uint16_t)
                                                     CONCAT11(*(undefined1 *)(local_98 + uVar8),
                                                              *(undefined1 *)(local_98 + uVar8));
                                          (*(uint32_t *)(void *)local_34) = CONCAT12(*(undefined1 *)(local_98 + uVar8),PF_PART2(local_34,0));
                                          lVar18 = 1;
                                          if (uVar10 == 3) {
LAB_100172c7:
                                            uVar17 = (uint)*(byte *)(uVar8 + local_98 + lVar18);
                                          }
                                        }
                                      }
                                      else {
                                        PF_PART2(local_34,0) = (uint16_t)
                                                   CONCAT11(*(undefined1 *)(local_98 + 1 + uVar8),
                                                            *(undefined1 *)(local_98 + uVar8));
                                        (*(uint32_t *)(void *)local_34) = CONCAT12(*(undefined1 *)(local_98 + 2 + uVar8),PF_PART2(local_34,0));
                                        lVar18 = 3;
                                        if (uVar10 == 1) goto LAB_100172c7;
                                      }
                                    }
                                    (*(uint32_t *)(void *)local_34) = CONCAT13((char)((uVar17 * puVar9[4] + 0x7f) / 0xff),
                                                         (*(uint32_t *)(void *)local_34));
                                    local_1a8 = 5;
                                    local_60 = uVar8;
                                    local_58 = uVar7;
                                    recovered_10000f90((void *)((*puVar9 * local_40 +
                                                                local_f0 + uVar7) * 4 + *plVar14),
                                                       local_34,4);
                                    uVar7 = local_58 + 1;
                                    uVar8 = local_60 + local_78;
                                    puVar9 = local_b8;
                                    plVar14 = local_c0;
                                  } while (uVar7 < local_80);
                                }
                                uVar8 = local_158 + 1;
                                local_40 = local_40 + 1;
                                local_b0 = local_b0 + local_140;
                              } while (uVar8 < local_148);
                            }
                            uStack_90 = 0;
                            recovered_10007040(local_98);
                            uVar7 = local_138 + 1;
                            local_f0 = local_f0 + 0x40;
                            local_a8 = (ulong)((int)local_a8 - 0x40);
                            uVar8 = local_70;
                          } while (uVar7 != local_e0);
                        }
                        local_a0 = local_a0 + 1;
                        local_d0 = local_d0 + 0x40;
                      } while (local_a0 != local_130);
                    }
                    puVar9 = (uint *)CONCAT71((int7)((ulong)puVar9 >> 8),1);
                  }
                  else {
LAB_100173b6:
                    puVar9 = (uint *)0x0;
                  }
                }
                local_108 = 0;
                recovered_10007040(local_110);
              }
              goto LAB_10016f18;
            }
          }
        }
      }
    }
    else if (7 < param_2 - uVar7 && uVar7 <= param_2) {
      uVar7 = *(ulong *)(local_48 + uVar7);
      uVar7 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18
              | (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18
              | (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
      goto LAB_10016d14;
    }
  }
  puVar9 = (uint *)0x0;
LAB_10016f18:
  recovered_10007530(&local_1b0);
  return (ulong)puVar9 & 0xffffffff;
}

#undef DAT_1001dbb8
#undef DAT_1001e008
#undef LAB_100173d4
#undef auStack_1b8
#undef local_108
#undef local_110
#undef local_118
#undef local_120
#undef local_128
#undef local_130
#undef local_138
#undef local_140
#undef local_148
#undef local_150
#undef local_158
#undef local_170
#undef local_178
#undef local_180
#undef local_188
#undef local_190
#undef local_1a8
#undef local_1b0
#undef local_34
#undef local_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_64
#undef local_70
#undef local_78
#undef local_80
#undef local_88
#undef local_98
#undef local_a0
#undef local_a8
#undef local_b0
#undef local_b8
#undef local_c0
#undef local_c4
#undef local_d0
#undef local_d8
#undef local_e0
#undef local_e8
#undef local_f0
#undef local_f8
#undef uStack_90

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100148a0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  bVar1 = param_2[3];
  if (bVar1 != 0xff) {
    uVar3 = (uint)bVar1;
    if (bVar1 == 0) {
      if (param_1[3] != 0) {
        return;
      }
    }
    else if (param_1[3] != 0) {
      iVar4 = (uVar3 ^ 0xff) * (uint)param_1[3];
      uVar2 = (iVar4 + 0x7fU & 0xffff) / 0xff + uVar3;
      uVar5 = uVar2 >> 1;
      *param_1 = (byte)((*param_2 * uVar3 + uVar5 + ((uint)*param_1 * iVar4 + 0x7f) / 0xff) / uVar2)
      ;
      param_1[1] = (byte)(((uint)param_2[1] * (uint)bVar1 + uVar5 +
                          ((uint)param_1[1] * iVar4 + 0x7f) / 0xff) / uVar2);
      param_1[2] = (byte)(((uint)param_2[2] * (uint)bVar1 + uVar5 +
                          ((uint)param_1[2] * iVar4 + 0x7f) / 0xff) / uVar2);
      param_1[3] = (byte)uVar2;
      return;
    }
  }
  recovered_10000f90(param_1,param_2,4);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10014990(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  lVar7 = recovered_10006fe0(param_2 * 8);
  lVar3 = *param_1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    if ((ulong)(lVar7 - lVar3) < 0x20 || uVar8 < 6) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar8 & 0xfffffffffffffffc;
      uVar10 = 0;
      do {
        puVar2 = (undefined8 *)(lVar3 + uVar10 * 8);
        uVar4 = puVar2[1];
        puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 8);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = (undefined8 *)(lVar7 + uVar10 * 8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        puVar2 = (undefined8 *)(lVar7 + 0x10 + uVar10 * 8);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar10 = uVar10 + 4;
      } while (uVar9 != uVar10);
      if (uVar8 == uVar9) goto LAB_1001765f;
    }
    uVar11 = uVar8 & 3;
    uVar10 = uVar9;
    if (uVar11 != 0) {
      do {
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar3 + uVar10 * 8);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar9 - uVar8 < 0xfffffffffffffffd) {
      do {
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(lVar3 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 8 + uVar10 * 8) = *(undefined8 *)(lVar3 + 8 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 0x10 + uVar10 * 8) = *(undefined8 *)(lVar3 + 0x10 + uVar10 * 8);
        *(undefined8 *)(lVar7 + 0x18 + uVar10 * 8) = *(undefined8 *)(lVar3 + 0x18 + uVar10 * 8);
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_1001765f:
  recovered_10007040(lVar3);
  *param_1 = lVar7;
  param_1[2] = param_2;
  uVar8 = param_1[1];
  uVar9 = param_2 - uVar8;
  if (param_2 < uVar8 || uVar9 == 0) {
    return;
  }
  if (3 < uVar9) {
    uVar10 = uVar9 & 0xfffffffffffffffc;
    lVar3 = lVar7 + uVar8 * 8;
    uVar8 = uVar8 + uVar10;
    uVar11 = 0;
    do {
      puVar2 = (undefined8 *)(lVar3 + uVar11 * 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar11 * 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar11 = uVar11 + 4;
    } while (uVar10 != uVar11);
    if (uVar9 == uVar10) goto LAB_100176d0;
  }
  do {
    *(undefined8 *)(lVar7 + uVar8 * 8) = 0;
    uVar8 = uVar8 + 1;
  } while (param_2 != uVar8);
LAB_100176d0:
  param_1[1] = param_2;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_50 (*(ulong *)(frame + 16))
ulong recovered_10014b10(long param_1,ulong param_2,uint param_3,uint param_4,long *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  bool bVar21;

  uVar18 = (ulong)param_4;
  uVar19 = param_3 * uVar18;
  param_5[1] = 0;
  if (uVar19 <= (ulong)param_5[2]) {
    uVar16 = 0;
    goto LAB_10017862;
  }
  lVar8 = recovered_10006fe0(uVar19);
  lVar17 = *param_5;
  uVar16 = param_5[1];
  if (uVar16 != 0) {
    uVar10 = 0;
    if ((3 < uVar16) && (0x1f < (ulong)(lVar8 - lVar17))) {
      if (uVar16 < 0x20) {
        uVar13 = 0;
      }
      else {
        uVar10 = uVar16 & 0xffffffffffffffe0;
        uVar13 = 0;
        do {
          uVar5 = ((undefined8 *)(lVar17 + uVar13))[1];
          puVar1 = (undefined8 *)(lVar17 + 0x10 + uVar13);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)(lVar8 + uVar13) = *(undefined8 *)(lVar17 + uVar13);
          ((undefined8 *)(lVar8 + uVar13))[1] = uVar5;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar13);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          uVar13 = uVar13 + 0x20;
        } while (uVar10 != uVar13);
        if (uVar16 == uVar10) goto LAB_1001782f;
        uVar13 = uVar10;
        if ((uVar16 & 0x1c) == 0) goto LAB_100177c5;
      }
      uVar10 = uVar16 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar8 + uVar13) = *(undefined4 *)(lVar17 + uVar13);
        uVar13 = uVar13 + 4;
      } while (uVar10 != uVar13);
      if (uVar16 == uVar10) goto LAB_1001782f;
    }
LAB_100177c5:
    uVar14 = uVar16 & 3;
    uVar13 = uVar10;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)(lVar8 + uVar13) = *(undefined1 *)(lVar17 + uVar13);
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar10 - uVar16 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar8 + uVar13) = *(undefined1 *)(lVar17 + uVar13);
        *(undefined1 *)(lVar8 + 1 + uVar13) = *(undefined1 *)(lVar17 + 1 + uVar13);
        *(undefined1 *)(lVar8 + 2 + uVar13) = *(undefined1 *)(lVar17 + 2 + uVar13);
        *(undefined1 *)(lVar8 + 3 + uVar13) = *(undefined1 *)(lVar17 + 3 + uVar13);
        uVar13 = uVar13 + 4;
      } while (uVar16 != uVar13);
    }
  }
LAB_1001782f:
  recovered_10007040(lVar17);
  *param_5 = lVar8;
  param_5[2] = uVar19;
  uVar16 = param_5[1];
LAB_10017862:
  while (uVar16 < uVar19) {
    *(undefined1 *)(*param_5 + uVar16) = 0;
    uVar16 = param_5[1] + 1;
    param_5[1] = uVar16;
  }
  if (param_4 == 0) {
    local_50 = CONCAT71((int7)(uVar16 >> 8),1);
  }
  else {
    uVar10 = 0;
    local_50 = 0;
    uVar16 = 0;
    uVar19 = param_1 + 2U;
    do {
      bVar21 = param_3 != 0;
      if ((param_3 != 0) && (uVar16 < param_2)) {
        uVar13 = 0;
        do {
          uVar14 = uVar16 + 1;
          bVar2 = *(byte *)(param_1 + uVar16);
          uVar15 = (ulong)bVar2;
          iVar9 = (int)uVar13;
          if (bVar2 < 0x7f) {
            if (param_2 <= uVar14) {
              return local_50;
            }
            uVar19 = (ulong)(param_3 - iVar9);
            if (param_3 - iVar9 <= (uint)bVar2) {
              return local_50;
            }
            uVar15 = uVar15 + 1;
            uVar3 = *(undefined1 *)(param_1 + 1 + uVar16);
            if (bVar2 < 3) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              do {
                iVar12 = (int)uVar13;
                *(undefined1 *)(uVar10 + uVar13 * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar10 + (iVar12 + 1) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar10 + (iVar12 + 2) * uVar18 + *param_5) = uVar3;
                uVar19 = (iVar12 + 3) * uVar18 + *param_5;
                *(undefined1 *)(uVar10 + uVar19) = uVar3;
                uVar14 = uVar14 + 4;
                uVar13 = (ulong)(iVar12 + 4);
              } while (((uint)uVar15 & 0xfc) != uVar14);
            }
            uVar16 = uVar16 + 2;
            uVar13 = (ulong)((uint)uVar15 & 3);
            if ((uVar15 & 3) != 0) {
              uVar20 = (int)uVar14 + iVar9;
              do {
                uVar19 = uVar20 * uVar18 + *param_5;
                *(undefined1 *)(uVar10 + uVar19) = uVar3;
                uVar20 = uVar20 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          else if (uVar15 == 0x80) {
            if (param_2 - uVar14 < 2) {
              return local_50;
            }
            uVar11 = *(ushort *)(param_1 + 1 + uVar16);
            uVar4 = uVar11 >> 8;
            uVar11 = uVar11 << 8 | uVar4;
            uVar19 = (ulong)uVar11;
            if (param_3 - iVar9 <= uVar11 - 1) {
              return local_50;
            }
            lVar17 = uVar16 + 3;
            if (param_2 - lVar17 < uVar19) {
              return local_50;
            }
            if (uVar11 == 1) {
              uVar16 = 0;
            }
            else {
              lVar8 = uVar16 + param_1 + 4;
              uVar16 = 0;
              do {
                *(undefined1 *)(uVar10 + (uint)(iVar9 + (int)uVar16) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar8 + -1 + uVar16);
                *(undefined1 *)(uVar10 + (uint)(iVar9 + 1 + (int)uVar16) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar8 + uVar16);
                uVar16 = uVar16 + 2;
              } while ((uVar11 & 0xfffffffe) != uVar16);
            }
            if ((uVar4 & 1) != 0) {
              *(undefined1 *)(uVar10 + (uint)((int)uVar16 + iVar9) * uVar18 + *param_5) =
                   *(undefined1 *)(param_1 + lVar17 + uVar16);
            }
            uVar16 = lVar17 + uVar19;
            uVar15 = uVar19;
          }
          else if (bVar2 == 0x7f) {
            if (param_2 - uVar14 < 3) {
              return local_50;
            }
            uVar11 = *(ushort *)(param_1 + 1 + uVar16);
            uVar4 = uVar11 >> 8;
            uVar11 = uVar11 << 8 | uVar4;
            uVar15 = (ulong)uVar11;
            if (param_3 - iVar9 <= uVar11 - 1) {
              return local_50;
            }
            uVar3 = *(undefined1 *)(param_1 + 3 + uVar16);
            if ((ulong)uVar11 - 1 < 3) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              do {
                iVar12 = (int)uVar13;
                *(undefined1 *)(uVar10 + uVar13 * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar10 + (iVar12 + 1) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar10 + (iVar12 + 2) * uVar18 + *param_5) = uVar3;
                *(undefined1 *)(uVar10 + (iVar12 + 3) * uVar18 + *param_5) = uVar3;
                uVar19 = uVar19 + 4;
                uVar13 = (ulong)(iVar12 + 4);
              } while ((uVar11 & 0xfffffffc) != uVar19);
            }
            uVar16 = uVar16 + 4;
            uVar13 = (ulong)(uVar11 & 3);
            if ((uVar4 & 3) == 0) {
              uVar19 = uVar15;
            }
            else {
              uVar20 = (int)uVar19 + iVar9;
              do {
                uVar19 = uVar20 * uVar18 + *param_5;
                *(undefined1 *)(uVar10 + uVar19) = uVar3;
                uVar20 = uVar20 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          else {
            uVar15 = 0x100 - uVar15;
            if (param_3 - iVar9 < (uint)uVar15) {
              return local_50;
            }
            uVar19 = param_2 - uVar14;
            if (uVar19 < uVar15) {
              return local_50;
            }
            if (bVar2 == 0xff) {
              uVar16 = 0;
            }
            else {
              lVar17 = uVar16 + param_1 + 2U;
              uVar16 = 0;
              do {
                *(undefined1 *)(uVar10 + (uint)(iVar9 + (int)uVar16) * uVar18 + *param_5) =
                     *(undefined1 *)(lVar17 + -1 + uVar16);
                uVar19 = (uint)(iVar9 + 1 + (int)uVar16) * uVar18 + *param_5;
                *(undefined1 *)(uVar10 + uVar19) = *(undefined1 *)(lVar17 + uVar16);
                uVar16 = uVar16 + 2;
              } while (((uint)uVar15 & 0xfffffffe) != uVar16);
            }
            if ((uVar15 & 1) != 0) {
              uVar19 = 0;
              *(undefined1 *)(uVar10 + (uint)((int)uVar16 + iVar9) * uVar18 + *param_5) =
                   *(undefined1 *)(param_1 + uVar14 + uVar16);
            }
            uVar16 = uVar14 + uVar15;
          }
          uVar20 = iVar9 + (int)uVar15;
          uVar13 = (ulong)uVar20;
          bVar21 = uVar20 < param_3;
        } while ((bVar21) && (uVar16 < param_2));
      }
      if (bVar21) {
        return local_50;
      }
      uVar10 = uVar10 + 1;
      uVar19 = CONCAT71((int7)(uVar19 >> 8),uVar18 <= uVar10);
      local_50 = uVar19;
    } while (uVar10 != uVar18);
  }
  return local_50;
}

#undef local_50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001e018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x850U)))
#define LAB_10017e34 (*(uint8_t *)(0x10017e34U))
#define local_38 (*(undefined8 *)(frame + 136))
#define local_40 (*(ulong *)(frame + 128))
#define local_48 (*(ulong *)(frame + 120))
#define local_50 (*(long *)(frame + 112))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined * *)(frame + 64))
#define local_88 (*(code * *)(frame + 56))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_a8 (*(undefined8 *)(frame + 24))
ulong recovered_100150c0(undefined1 *param_1,ulong param_2,long *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;

  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  param_3[1] = 0;
  local_88 = recovered_10006f90;
  local_80 = &DAT_1001e018;
  local_70 = &LAB_10017e34;
  recovered_10007510(&local_a8);
  if (param_2 == 0 || param_1 == (undefined1 *)0x0) {
    uVar7 = 0;
    goto LAB_10017e17;
  }
  uVar7 = 4;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 * 2;
  } while (uVar5 < param_2);
  local_a0 = 0xffffffff;
  local_38 = recovered_10006fe0(uVar5);
  uVar7 = 0;
  recovered_10007040(0);
  local_50 = local_38;
  if (param_2 < 4) {
    puVar6 = param_1;
LAB_10017dcf:
    puVar9 = (undefined1 *)(uVar7 + local_38);
    do {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar6 != param_1 + param_2);
  }
  else if (param_2 < 0x20) {
    uVar8 = 0;
LAB_10017da0:
    uVar7 = param_2 & 0xfffffffffffffffc;
    puVar6 = param_1 + uVar7;
    do {
      *(undefined4 *)(local_38 + uVar8) = *(undefined4 *)(param_1 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar7 != uVar8);
    if (uVar7 != param_2) goto LAB_10017dcf;
  }
  else {
    uVar7 = param_2 & 0xffffffffffffffe0;
    uVar8 = 0;
    do {
      uVar2 = *(undefined8 *)((long)(param_1 + uVar8) + 8);
      uVar3 = *(undefined8 *)(param_1 + uVar8 + 0x10);
      uVar4 = *(undefined8 *)((long)(param_1 + uVar8 + 0x10) + 8);
      *(undefined8 *)(local_38 + uVar8) = *(undefined8 *)(param_1 + uVar8);
      ((undefined8 *)(local_38 + uVar8))[1] = uVar2;
      puVar1 = (undefined8 *)(local_38 + 0x10 + uVar8);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      uVar8 = uVar8 + 0x20;
    } while (uVar7 != uVar8);
    if (uVar7 != param_2) {
      uVar8 = uVar7;
      if ((param_2 & 0x1c) == 0) {
        puVar6 = param_1 + uVar7;
        goto LAB_10017dcf;
      }
      goto LAB_10017da0;
    }
  }
  local_a0 = 1;
  local_48 = param_2;
  local_40 = uVar5;
  uVar7 = recovered_10015590(&local_50,param_3);
  uVar7 = uVar7 & 0xffffffff;
  recovered_10007040(local_38);
LAB_10017e17:
  recovered_10007530(&local_a8);
  return uVar7;
}

#undef DAT_1001e018
#undef LAB_10017e34
#undef local_38
#undef local_40
#undef local_48
#undef local_50
#undef local_68
#undef local_70
#undef local_78
#undef local_80
#undef local_88
#undef local_a0
#undef local_a8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100152b0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;

  lVar12 = *param_1;
  bVar16 = lVar12 == 0;
  if (bVar16) {
    uVar9 = param_1[1];
  }
  else {
    uVar9 = param_2 - lVar12;
  }
  uVar15 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_1001813d;
  uVar14 = (long)param_4 - (long)param_3;
  uVar11 = param_1[1];
  uVar6 = param_1[2];
  if (uVar6 < uVar11 + uVar14) {
    uVar7 = 4;
    if (uVar6 != 0) {
      uVar7 = uVar6;
    }
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 * 2;
    } while (uVar6 < uVar11 + uVar14);
    lVar5 = recovered_10006fe0(uVar6);
    lVar12 = *param_1;
    uVar11 = param_1[1];
    if (uVar11 != 0) {
      uVar7 = 0;
      if ((3 < uVar11) && (0x1f < (ulong)(lVar5 - lVar12))) {
        if (uVar11 < 0x20) {
          uVar8 = 0;
        }
        else {
          uVar7 = uVar11 & 0xffffffffffffffe0;
          uVar8 = 0;
          do {
            uVar2 = ((undefined8 *)(lVar12 + uVar8))[1];
            puVar1 = (undefined8 *)(lVar12 + 0x10 + uVar8);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            *(undefined8 *)(lVar5 + uVar8) = *(undefined8 *)(lVar12 + uVar8);
            ((undefined8 *)(lVar5 + uVar8))[1] = uVar2;
            puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar8);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            uVar8 = uVar8 + 0x20;
          } while (uVar7 != uVar8);
          if (uVar11 == uVar7) goto LAB_10017fff;
          uVar8 = uVar7;
          if ((uVar11 & 0x1c) == 0) goto LAB_10017f95;
        }
        uVar7 = uVar11 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar5 + uVar8) = *(undefined4 *)(lVar12 + uVar8);
          uVar8 = uVar8 + 4;
        } while (uVar7 != uVar8);
        if (uVar11 == uVar7) goto LAB_10017fff;
      }
LAB_10017f95:
      uVar10 = uVar11 & 3;
      uVar8 = uVar7;
      if (uVar10 != 0) {
        do {
          *(undefined1 *)(lVar5 + uVar8) = *(undefined1 *)(lVar12 + uVar8);
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar7 - uVar11 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(lVar5 + uVar8) = *(undefined1 *)(lVar12 + uVar8);
          *(undefined1 *)(lVar5 + 1 + uVar8) = *(undefined1 *)(lVar12 + 1 + uVar8);
          *(undefined1 *)(lVar5 + 2 + uVar8) = *(undefined1 *)(lVar12 + 2 + uVar8);
          *(undefined1 *)(lVar5 + 3 + uVar8) = *(undefined1 *)(lVar12 + 3 + uVar8);
          uVar8 = uVar8 + 4;
        } while (uVar11 != uVar8);
      }
    }
LAB_10017fff:
    recovered_10007040(lVar12);
    *param_1 = lVar5;
    param_1[2] = uVar6;
    uVar11 = param_1[1];
  }
  if (uVar9 < uVar11) {
    uVar13 = (int)uVar11 - (int)uVar9 & 3;
    uVar7 = (ulong)uVar13;
    uVar6 = uVar11;
    if (uVar13 != 0) {
      do {
        *(undefined1 *)(uVar14 + uVar6 + *param_1 + -1) = *(undefined1 *)((uVar6 - 1) + *param_1);
        uVar6 = uVar6 - 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (uVar9 - uVar11 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar14 - 1) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -1 + uVar6);
        *(undefined1 *)((uVar14 - 2) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -2 + uVar6);
        *(undefined1 *)((uVar14 - 3) + *param_1 + uVar6) = *(undefined1 *)(*param_1 + -3 + uVar6);
        *(undefined1 *)(uVar14 + uVar6 + *param_1 + -4) = *(undefined1 *)((uVar6 - 4) + *param_1);
        uVar6 = uVar6 - 4;
      } while (uVar9 < uVar6);
    }
  }
  uVar6 = uVar9;
  for (uVar11 = uVar14 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)(*param_1 + uVar6) = *param_3;
    param_3 = param_3 + 1;
    uVar6 = uVar6 + 1;
  }
  if (uVar15 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar6) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar6) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar6) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar6) = param_3[3];
      param_3 = param_3 + 4;
      uVar6 = uVar6 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar14;
  lVar12 = *param_1;
  bVar16 = lVar12 == 0;
LAB_1001813d:
  lVar5 = 0;
  if (!bVar16) {
    lVar5 = lVar12 + uVar9;
  }
  return lVar5;
}


#undef DAT_10019a40
#define DAT_10019a40 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x464U)))
#undef DAT_10019e34
#define DAT_10019e34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x858U)))
#undef DAT_1001a398
#define DAT_1001a398 (*(char *)(((uintptr_t)pf_module_state + 0xdbcU)))
#undef DAT_1001a400
#define DAT_1001a400 (*(char *)(((uintptr_t)pf_module_state + 0xe24U)))
#undef LAB_10016b74
#define LAB_10016b74 (*(uint8_t *)(0x10016b74U))
#define uStack_1ab (*(undefined3 *)(frame + 293))
#define uStack_1a8 (*(undefined5 *)(frame + 296))
#define uStack_1a3 (*(undefined3 *)(frame + 301))
#define uStack_1a0 (*(undefined4 *)(frame + 304))
#define uStack_19c (*(undefined1 *)(frame + 308))
#define uStack_168 (*(undefined8 *)(frame + 360))
#define lStack_140 (*(long *)(frame + 400))
#define uStack_48 (*(ulong *)(frame + 648))
#define local_2b8 (*(undefined8 *)(frame + 24))
#define local_2a8 (*(undefined8 *)(frame + 40))
#define local_298 (*(undefined8 *)(frame + 56))
#define local_288 (*(undefined8 *)(frame + 72))
#define local_278 (*(void * *)(frame + 88))
#define local_270 (*(undefined5 *)(frame + 96))
#define local_258 (*(undefined8 *)(frame + 120))
#define local_248 (*(undefined8 *)(frame + 136))
#define local_238 (*(undefined8 *)(frame + 152))
#define local_228 (*(undefined8 *)(frame + 168))
#define local_218 (*(void * *)(frame + 184))
#define local_210 (*(undefined5 *)(frame + 192))
#define local_1f8 (*(undefined8 *)(frame + 216))
#define local_1e8 (*(undefined8 *)(frame + 232))
#define local_1d8 (*(undefined8 *)(frame + 248))
#define local_1c8 (*(undefined8 *)(frame + 264))
#define local_1b8 (*(void * *)(frame + 280))
#define local_198 (*(ulong *)(frame + 312))
#define local_190 (*(void * *)(frame + 320))
#define local_188 (*(undefined8 * *)(frame + 328))
#define local_180 (*(undefined8 *)(frame + 336))
#define local_178 (*(undefined8 *)(frame + 344))
#define local_170 (*(void * *)(frame + 352))
#define local_160 (*(undefined8 *)(frame + 368))
#define local_158 (*(ulong *)(frame + 376))
#define local_150 (*(long * *)(frame + 384))
#define local_148 (*(void * *)(frame + 392))
#define local_138 (*(undefined8 *)(frame + 408))
#define local_12c (*(uint *)(frame + 420))
#define local_128 (*(undefined4 * *)(frame + 424))
#define local_120 (*(undefined8 *)(frame + 432))
#define local_118 (*(undefined4 *)(frame + 440))
#define local_100 (*(code * *)(frame + 464))
#define local_f8 (*(undefined * *)(frame + 472))
#define local_f0 (*(undefined1 * *)(frame + 480))
#define local_e8 (*(undefined1 * *)(frame + 488))
#define local_e0 (*(undefined1 * *)(frame + 496))
#define local_c8 (*(ulong *)(frame + 520))
#define local_c0 (*(long *)(frame + 528))
#define local_b8 (*(undefined4 * *)(frame + 536))
#define local_b0 (*(long * *)(frame + 544))
#define local_a8 (*(ulong *)(frame + 552))
#define local_9c (*(uint *)(frame + 564))
#define local_98 (*(undefined4 * *)(frame + 568))
#define local_90 (*(undefined4 * *)(frame + 576))
#define local_88 (*(undefined4 * *)(frame + 584))
#define local_80 (*(undefined8 * *)(frame + 592))
#define local_78 (*(ulong *)(frame + 600))
#define local_70 (*(undefined8 *)(frame + 608))
#define local_68 (*(ulong *)(frame + 616))
#define local_60 (*(byte * *)(frame + 624))
#define local_58 (*(ulong *)(frame + 632))
#define local_50 (*(ulong *)(frame + 640))
#define local_40 (*(uint *)(frame + 656))
#define local_38 (*(undefined4 * *)(frame + 664))
#define uStack_2b0 (*(undefined8 *)(frame + 32))
#define uStack_2a0 (*(undefined8 *)(frame + 48))
#define uStack_290 (*(undefined8 *)(frame + 64))
#define uStack_280 (*(undefined8 *)(frame + 80))
#define uStack_26b (*(undefined3 *)(frame + 101))
#define uStack_268 (*(undefined5 *)(frame + 104))
#define uStack_263 (*(undefined8 *)(frame + 109))
#define uStack_250 (*(undefined8 *)(frame + 128))
#define uStack_240 (*(undefined8 *)(frame + 144))
#define uStack_230 (*(undefined8 *)(frame + 160))
#define uStack_220 (*(undefined8 *)(frame + 176))
#define uStack_20b (*(undefined3 *)(frame + 197))
#define uStack_208 (*(undefined5 *)(frame + 200))
#define uStack_203 (*(undefined8 *)(frame + 205))
#define uStack_1f0 (*(undefined8 *)(frame + 224))
#define uStack_1e0 (*(undefined8 *)(frame + 240))
#define uStack_1d0 (*(undefined8 *)(frame + 256))
#define uStack_1c0 (*(undefined8 *)(frame + 272))
#define uStack_1b0 (*(undefined5 *)(frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015590
 */

ulong recovered_10015590(long *param_1,long *param_2)

{
  unsigned char frame[752] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte *pbVar2;
  void *pvVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  byte bVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  char cVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  long *plVar27;
  bool bVar28;

  local_f0 = (undefined1 *)((long)(uintptr_t)(frame + 720) + -8);
  local_e0 = (undefined1 *)&local_2b8;
  param_2[1] = 0;
  uVar24 = param_1[1];
  local_100 = recovered_10006f90;
  local_f8 = &DAT_10019e34;
  local_e8 = &LAB_10016b74;
  local_b0 = param_2;
  recovered_10007510(&local_120);
  uVar16 = local_40;
  if (5 < uVar24) {
    pbVar2 = (byte *)*param_1;
    if ((*pbVar2 & 0xf) == 8) {
      uVar19 = 0;
      if (((pbVar2[1] & 0x20) != 0) ||
         (uVar1 = CONCAT11(*pbVar2,pbVar2[1]), uVar16 = (uint)uVar1 * 0x843 >> 0x10,
         (ushort)((short)(((uVar1 - uVar16 & 0xffff) >> 1) + uVar16 >> 4) * -0x1f + uVar1) != 0))
      goto switchD_1001575c_caseD_3;
      local_58 = uVar24 - 6;
      local_60 = pbVar2 + 2;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_12c = 5;
      plVar27 = local_b0;
      local_150 = param_1;
      do {
        if (local_40 == 0) {
          uVar16 = local_40;
          if (local_58 <= local_50) goto LAB_10016b35;
          uVar24 = local_50 + 1;
          local_158 = local_60[local_50] | uStack_48;
          uStack_48 = local_158 >> 3;
          local_40 = local_12c;
          uVar19 = 0;
          local_50 = uVar24;
          switch((uintptr_t)((uint)(local_158 >> 1) & 3)) {
          case 1:
            goto switchD_1001575c_caseD_1;
          case 2:
            goto switchD_1001575c_caseD_2;
          case 3:
            goto switchD_1001575c_caseD_3;
          }
switchD_1001575c_caseD_0:
          uVar24 = uStack_48 >> ((byte)local_40 & 7);
          uVar16 = local_40 & 0xfffffff8;
          bVar14 = (byte)(uVar24 >> 0x10);
          uVar20 = (uint)(uVar24 >> 8);
          if (local_40 < 8) {
            uStack_48 = uVar24;
            if (local_58 <= local_50) goto LAB_10016b35;
            uVar7 = (uint)uVar24 & 0xff | (uint)local_60[local_50];
            local_40 = 0;
            local_50 = local_50 + 1;
LAB_10016568:
            uStack_48 = uVar24 >> 8;
            uVar19 = 0;
            if (local_58 <= local_50) goto switchD_1001575c_caseD_3;
            uVar20 = local_60[local_50] | uVar20;
            local_40 = 0;
            local_50 = local_50 + 1;
LAB_1001659e:
            uStack_48 = uVar24 >> 0x10;
            uVar16 = local_40;
            if (local_58 <= local_50) goto LAB_10016b35;
            uVar21 = (uint)(bVar14 | local_60[local_50]);
            local_40 = (uint)uVar19;
            local_50 = local_50 + 1;
LAB_100165cf:
            uStack_48 = uVar24 >> 0x18;
            uVar16 = local_40;
            if (local_58 <= local_50) goto LAB_10016b35;
            uVar25 = uStack_48 | (ulong)local_60[local_50] << ((byte)uVar19 & 0x3f);
            local_50 = local_50 + 1;
          }
          else {
            uVar7 = (uint)(byte)uVar24;
            local_40 = uVar16 - 8;
            if (local_40 == 0) goto LAB_10016568;
            local_40 = uVar16 - 0x10;
            uVar19 = (ulong)local_40;
            if (local_40 == 0) goto LAB_1001659e;
            uVar25 = uVar24 >> 0x18;
            uVar21 = (uint)bVar14;
            local_40 = uVar16 - 0x18;
            uVar19 = (ulong)local_40;
            if (local_40 == 0) goto LAB_100165cf;
            uVar19 = (ulong)(uVar16 - 0x20);
          }
          uStack_48 = uVar25 >> 8;
          local_40 = (uint)uVar19;
          uVar7 = (uVar20 & 0xff) << 8 | uVar7;
          uVar16 = local_40;
          if (((((uint)uVar25 & 0xff) << 8 | uVar21) ^ uVar7) != 0xffff) goto LAB_10016b35;
          if (uVar7 != 0) {
            uVar20 = 0;
            do {
              if (local_40 < 8) {
                uVar16 = local_40;
                if (local_58 <= local_50) goto LAB_10016b35;
                bVar14 = (byte)local_40;
                local_40 = local_40 | 8;
                uVar24 = (ulong)local_60[local_50] << (bVar14 & 0x3f) | uStack_48;
                local_50 = local_50 + 1;
              }
              else {
                uVar24 = uStack_48;
              }
              uStack_48 = uVar24 >> 8;
              local_40 = local_40 - 8;
              uVar25 = plVar27[1];
              if (uVar25 == plVar27[2]) {
                uVar19 = uVar25 * 2;
                if (uVar25 == 0) {
                  uVar19 = 4;
                }
                if (uVar25 < uVar19) {
                  local_118 = 0xffffffff;
                  lVar13 = recovered_10006fe0(uVar19);
                  pvVar3 = (void *)*plVar27;
                  uVar25 = plVar27[1];
                  if (uVar25 != 0) {
                    if (uVar25 < 4) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = 0;
                      if (0x1f < (ulong)(lVar13 - (long)pvVar3)) {
                        if (uVar25 < 0x20) {
                          uVar17 = 0;
                        }
                        else {
                          uVar15 = uVar25 & 0xffffffffffffffe0;
                          uVar17 = 0;
                          do {
                            uVar11 = ((undefined8 *)((long)pvVar3 + uVar17))[1];
                            puVar23 = (undefined8 *)((long)pvVar3 + uVar17 + 0x10);
                            uVar5 = *puVar23;
                            uVar6 = puVar23[1];
                            *(undefined8 *)(lVar13 + uVar17) =
                                 *(undefined8 *)((long)pvVar3 + uVar17);
                            ((undefined8 *)(lVar13 + uVar17))[1] = uVar11;
                            puVar23 = (undefined8 *)(lVar13 + 0x10 + uVar17);
                            *puVar23 = uVar5;
                            puVar23[1] = uVar6;
                            uVar17 = uVar17 + 0x20;
                          } while (uVar15 != uVar17);
                          if (uVar25 == uVar15) goto LAB_10016640;
                          uVar17 = uVar15;
                          if ((uVar25 & 0x1c) == 0) goto LAB_10016799;
                        }
                        uVar15 = uVar25 & 0xfffffffffffffffc;
                        do {
                          *(undefined4 *)(lVar13 + uVar17) = *(undefined4 *)((long)pvVar3 + uVar17);
                          uVar17 = uVar17 + 4;
                        } while (uVar15 != uVar17);
                        if (uVar25 == uVar15) goto LAB_10016640;
                      }
                    }
LAB_10016799:
                    uVar22 = uVar25 & 3;
                    uVar17 = uVar15;
                    if (uVar22 != 0) {
                      do {
                        *(undefined1 *)(lVar13 + uVar17) = *(undefined1 *)((long)pvVar3 + uVar17);
                        uVar17 = uVar17 + 1;
                        uVar22 = uVar22 - 1;
                      } while (uVar22 != 0);
                    }
                    if (uVar15 - uVar25 < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)(lVar13 + uVar17) = *(undefined1 *)((long)pvVar3 + uVar17);
                        *(undefined1 *)(lVar13 + 1 + uVar17) =
                             *(undefined1 *)((long)pvVar3 + uVar17 + 1);
                        *(undefined1 *)(lVar13 + 2 + uVar17) =
                             *(undefined1 *)((long)pvVar3 + uVar17 + 2);
                        *(undefined1 *)(lVar13 + 3 + uVar17) =
                             *(undefined1 *)((long)pvVar3 + uVar17 + 3);
                        uVar17 = uVar17 + 4;
                      } while (uVar25 != uVar17);
                    }
                  }
LAB_10016640:
                  recovered_10007040(pvVar3);
                  *local_b0 = lVar13;
                  local_b0[2] = uVar19;
                  uVar25 = local_b0[1];
                  plVar27 = local_b0;
                }
              }
              *(char *)(*plVar27 + uVar25) = (char)uVar24;
              plVar27[1] = plVar27[1] + 1;
              uVar20 = uVar20 + 1;
            } while (uVar20 != uVar7);
            param_1 = local_150;
          }
        }
        else {
          local_158 = uStack_48;
          uVar24 = uStack_48 >> 1;
          uVar16 = local_40 - 1;
          if (local_40 < 3) {
            uStack_48 = uVar24;
            if (local_58 <= local_50) goto LAB_10016b35;
            uVar24 = uVar24 | (ulong)local_60[local_50] << ((byte)uVar16 & 0x3f);
            uVar16 = local_40 + 7;
            local_50 = local_50 + 1;
          }
          uStack_48 = uVar24 >> 2;
          local_40 = uVar16 - 2;
          uVar19 = 0;
          switch((uintptr_t)((uint)uVar24 & 3)) {
          case 0:
            goto switchD_1001575c_caseD_0;
          case 1:
switchD_1001575c_caseD_1:
            uVar19 = 0;
            if (DAT_1001a398 == '\0') {
              local_118 = 0xffffffff;
              recovered_10019580();
            }
            if (DAT_1001a400 == '\0') {
              local_118 = 0xffffffff;
              recovered_100195b0();
            }
            local_118 = 0xffffffff;
            uVar11 = recovered_10016d10((long *)&local_60,((uintptr_t)pf_module_state + 0xd5cU),((uintptr_t)pf_module_state + 0xdc4U),plVar27);
            uVar16 = local_40;
            if ((char)uVar11 == '\0') goto LAB_10016b35;
            break;
          case 2:
switchD_1001575c_caseD_2:
            uStack_268 = 0;
            uStack_263 = 0;
            local_278 = (void *)0x0;
            local_270 = 0;
            uStack_26b = 0;
            local_288 = 0;
            uStack_280 = 0;
            local_298 = 0;
            uStack_290 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            uStack_1a8 = 0;
            uStack_1a3 = 0;
            uStack_1a0 = 0;
            uStack_19c = 0;
            local_1b8 = (void *)0x0;
            uStack_1b0 = 0;
            uStack_1ab = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1f8 = 0;
            uStack_1f0 = 0;
            if (local_40 < 5) {
              uVar24 = uStack_48;
              uVar16 = local_40;
              if (local_50 < local_58) {
                uStack_48 = uStack_48 | (ulong)local_60[local_50] << ((byte)local_40 & 0x3f);
                local_40 = local_40 | 8;
                local_50 = local_50 + 1;
                goto LAB_10015886;
              }
            }
            else {
LAB_10015886:
              uVar19 = uStack_48 >> 5;
              uVar20 = local_40 - 5;
              if (uVar20 < 5) {
                uVar24 = uVar19;
                uVar16 = uVar20;
                if (local_58 <= local_50) goto LAB_10016b1d;
                uVar19 = uVar19 | (ulong)local_60[local_50] << ((byte)uVar20 & 0x3f);
                uVar20 = local_40 + 3;
                local_50 = local_50 + 1;
              }
              uVar24 = uVar19 >> 5;
              uVar16 = uVar20 - 5;
              local_78 = uVar19;
              local_68 = uStack_48;
              if (uVar16 < 4) {
                if (local_58 <= local_50) goto LAB_10016b1d;
                uVar24 = uVar24 | (ulong)local_60[local_50] << ((byte)uVar16 & 0x3f);
                uVar16 = uVar20 + 3;
                local_50 = local_50 + 1;
              }
              local_40 = uVar16 - 4;
              local_118 = 1;
              local_70 = uVar24;
              uStack_48 = uVar24 >> 4;
              local_80 = (undefined8 *)recovered_10006fe0(0x4c);
              uVar19 = (ulong)((uint)local_68 & 0x1f);
              uVar16 = (uint)local_78;
              recovered_10007040((void *)0x0);
              local_188 = local_80;
              local_178 = 0x13;
              *local_80 = 0;
              local_80[1] = 0;
              local_80[2] = 0;
              local_80[3] = 0;
              local_80[4] = 0;
              local_80[5] = 0;
              local_80[6] = 0;
              local_80[7] = 0;
              *(undefined4 *)(local_80 + 8) = 0;
              *(undefined4 *)((long)local_80 + 0x44) = 0;
              *(undefined4 *)(local_80 + 9) = 0;
              local_128 = (undefined4 *)(uVar19 + 0x101);
              local_180 = 0x13;
              lVar13 = 0;
              uVar24 = local_50;
              do {
                uVar25 = uVar24;
                if (local_40 < 3) {
                  if (local_58 <= uVar24) goto LAB_10016b14;
                  uVar25 = uVar24 + 1;
                  uStack_48 = uStack_48 | (ulong)local_60[uVar24] << ((byte)local_40 & 0x3f);
                  local_40 = local_40 | 8;
                  local_50 = uVar25;
                }
                uVar20 = (uint)uStack_48;
                uStack_48 = uStack_48 >> 3;
                local_40 = local_40 - 3;
                *(uint *)((long)local_80 + (ulong)*(uint *)((long)&DAT_10019a40 + lVar13) * 4) =
                     uVar20 & 7;
                lVar13 = lVar13 + 4;
                uVar24 = uVar25;
              } while ((ulong)((uint)local_70 & 0xf) * 4 + 0x10 != lVar13);
              uStack_208 = 0;
              uStack_203 = 0;
              local_218 = (void *)0x0;
              local_210 = 0;
              uStack_20b = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_238 = 0;
              uStack_230 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_258 = 0;
              uStack_250 = 0;
              local_118 = 2;
              local_78 = (ulong)(uVar16 & 0x1f);
              local_68 = uVar19;
              uVar24 = recovered_10017980((long *)&local_188,(uint *)&local_258,0);
              if ((char)uVar24 == '\0') {
                recovered_10007040(local_218);
LAB_10016b14:
                puVar23 = local_80;
              }
              else {
                local_78 = local_68 + local_78 + 0x102;
                local_118 = 3;
                puVar12 = (undefined4 *)recovered_10006fe0((ulong)(uint)((int)local_78 * 4));
                recovered_10007040((void *)0x0);
                if (PF_PART1(uStack_203, 7) == '\x01') {
                  local_190 = local_218;
                  local_198 = CONCAT35(uStack_20b,local_210);
                  local_68 = 0;
                  uVar24 = local_78;
                  do {
                    local_70 = uVar24;
                    local_38 = puVar12;
                    if (PF_PART4(uStack_203, 3) == 0) goto LAB_10016997;
                    uVar25 = 1;
                    uVar16 = 0;
                    lVar13 = 0;
                    iVar9 = 0;
                    uVar19 = local_50;
                    while( true ) {
                      if (local_40 == 0) {
                        if (local_58 <= uVar19) goto LAB_10016997;
                        uVar15 = uVar19 + 1;
                        local_50 = uVar15;
                        uStack_48 = uStack_48 | local_60[uVar19];
                        uVar20 = 8;
                      }
                      else {
                        uVar15 = uVar19;
                        uVar20 = local_40;
                      }
                      uVar16 = (uint)uStack_48 & 1 | uVar16;
                      uVar19 = uStack_48 >> 1;
                      uStack_48 = uVar19;
                      local_40 = uVar20 - 1;
                      uVar7 = *(uint *)((long)&local_258 + uVar25 * 4);
                      uVar21 = uVar7 + iVar9;
                      if (uVar16 < uVar21) break;
                      lVar13 = lVar13 + (ulong)uVar7;
                      iVar9 = uVar21 * 2;
                      uVar16 = uVar16 * 2;
                      uVar20 = (int)uVar25 + 1;
                      uVar25 = (ulong)uVar20;
                      uVar19 = uVar15;
                      if (PF_PART4(uStack_203, 3) < uVar20) goto LAB_10016997;
                    }
                    uVar25 = lVar13 + (ulong)(uVar16 - iVar9);
                    if (local_198 <= uVar25) goto LAB_10016997;
                    uVar1 = *(ushort *)((long)local_190 + uVar25 * 2);
                    uVar16 = (uint)uVar1;
                    if (uVar1 < 0x10) {
                      uVar25 = uVar24;
                      uVar19 = local_68;
                      if (local_68 == uVar24) {
                        uVar15 = local_68 * 2;
                        if (local_68 == 0) {
                          uVar15 = 4;
                        }
                        uVar25 = local_68;
                        if (local_68 < uVar15) {
                          local_70 = CONCAT44((int)(uVar24 >> 0x20),uVar16);
                          local_118 = 4;
                          local_a8 = uVar15;
                          puVar12 = (undefined4 *)recovered_10006fe0(uVar15 * 4);
                          uVar19 = local_68;
                          if (local_68 != 0) {
                            if (local_68 < 8) {
                              uVar24 = 0;
                            }
                            else {
                              uVar24 = 0;
                              if (0x1f < (ulong)((long)puVar12 - (long)local_38)) {
                                uVar24 = local_68 & 0xfffffffffffffff8;
                                uVar25 = 0;
                                do {
                                  uVar11 = *(undefined8 *)((long)(local_38 + uVar25) + 8);
                                  uVar5 = *(undefined8 *)(local_38 + uVar25 + 4);
                                  uVar6 = *(undefined8 *)((long)(local_38 + uVar25 + 4) + 8);
                                  *(undefined8 *)(puVar12 + uVar25) =
                                       *(undefined8 *)(local_38 + uVar25);
                                  *(undefined8 *)((long)(puVar12 + uVar25) + 8) = uVar11;
                                  *(undefined8 *)(puVar12 + uVar25 + 4) = uVar5;
                                  *(undefined8 *)((long)(puVar12 + uVar25 + 4) + 8) = uVar6;
                                  uVar25 = uVar25 + 8;
                                } while (uVar24 != uVar25);
                                if (local_68 == uVar24) goto LAB_100163c6;
                              }
                            }
                            uVar15 = local_68 & 3;
                            uVar25 = uVar24;
                            if (uVar15 != 0) {
                              do {
                                puVar12[uVar25] = local_38[uVar25];
                                uVar25 = uVar25 + 1;
                                uVar15 = uVar15 - 1;
                              } while (uVar15 != 0);
                            }
                            if (uVar24 - local_68 < 0xfffffffffffffffd) {
                              do {
                                puVar12[uVar25] = local_38[uVar25];
                                puVar12[uVar25 + 1] = local_38[uVar25 + 1];
                                puVar12[uVar25 + 2] = local_38[uVar25 + 2];
                                puVar12[uVar25 + 3] = local_38[uVar25 + 3];
                                uVar25 = uVar25 + 4;
                              } while (local_68 != uVar25);
                            }
                          }
LAB_100163c6:
                          recovered_10007040(local_38);
                          uVar25 = local_a8;
                          uVar16 = (uint)local_70;
                        }
                      }
                      uVar24 = uVar25;
                      puVar12[uVar19] = uVar16;
                      local_68 = uVar19 + 1;
                      uVar25 = local_78;
                    }
                    else {
                      bVar14 = (byte)local_40;
                      uVar25 = local_78;
                      if (uVar1 == 0x12) {
                        if (uVar20 < 8) {
                          if (local_58 <= uVar15) goto LAB_10016997;
                          local_50 = uVar15 + 1;
                          uVar19 = uVar19 | (ulong)local_60[uVar15] << (bVar14 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar19 >> 7;
                        local_40 = local_40 - 7;
                        if (local_68 < local_78) {
                          uVar19 = (ulong)(((uint)uVar19 & 0x7f) + 0xb);
                          local_c0 = local_68 - 1;
                          uVar15 = 0;
                          uVar16 = 0;
                          local_a8 = uVar19;
                          uVar17 = local_68;
                          do {
                            local_98 = puVar12;
                            if (uVar17 == uVar24) {
                              uVar22 = uVar17 * 2;
                              if (uVar17 == 0) {
                                uVar22 = 4;
                              }
                              uVar24 = uVar17;
                              if (uVar17 < uVar22) {
                                local_118 = 7;
                                local_c8 = uVar22;
                                local_9c = uVar16;
                                local_70 = uVar15;
                                local_68 = uVar17;
                                puVar12 = (undefined4 *)recovered_10006fe0(uVar22 * 4);
                                uVar17 = local_68;
                                uVar15 = local_70;
                                uVar19 = local_a8;
                                if (local_68 != 0) {
                                  if (local_68 < 8) {
                                    uVar24 = 0;
                                  }
                                  else {
                                    uVar24 = 0;
                                    if (0x1f < (ulong)((long)puVar12 - (long)local_98)) {
                                      uVar24 = local_68 & 0xfffffffffffffff8;
                                      uVar25 = 0;
                                      do {
                                        uVar11 = *(undefined8 *)((long)(local_98 + uVar25) + 8);
                                        uVar5 = *(undefined8 *)(local_98 + uVar25 + 4);
                                        uVar6 = *(undefined8 *)((long)(local_98 + uVar25 + 4) + 8);
                                        *(undefined8 *)(puVar12 + uVar25) =
                                             *(undefined8 *)(local_98 + uVar25);
                                        *(undefined8 *)((long)(puVar12 + uVar25) + 8) = uVar11;
                                        *(undefined8 *)(puVar12 + uVar25 + 4) = uVar5;
                                        *(undefined8 *)((long)(puVar12 + uVar25 + 4) + 8) = uVar6;
                                        uVar25 = uVar25 + 8;
                                      } while (uVar24 != uVar25);
                                      if (local_68 == uVar24) goto LAB_1001631f;
                                    }
                                  }
                                  uVar25 = uVar24;
                                  if ((local_68 & 3) != 0) {
                                    uVar22 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar12[uVar25] = local_98[uVar25];
                                      uVar25 = uVar25 + 1;
                                      uVar22 = uVar22 - 1;
                                    } while (uVar22 != 0);
                                  }
                                  if (2 < (local_c0 + local_70) - uVar24) {
                                    do {
                                      puVar12[uVar25] = local_98[uVar25];
                                      puVar12[uVar25 + 1] = local_98[uVar25 + 1];
                                      puVar12[uVar25 + 2] = local_98[uVar25 + 2];
                                      puVar12[uVar25 + 3] = local_98[uVar25 + 3];
                                      uVar25 = uVar25 + 4;
                                    } while (local_68 != uVar25);
                                  }
                                }
LAB_1001631f:
                                recovered_10007040(local_98);
                                uVar25 = local_78;
                                uVar24 = local_c8;
                                uVar16 = local_9c;
                              }
                            }
                            puVar12[uVar17] = 0;
                            local_68 = uVar17 + 1;
                            uVar16 = uVar16 + 1;
                            if ((uint)uVar19 <= uVar16) break;
                            uVar15 = uVar15 + 1;
                            uVar17 = local_68;
                          } while (local_68 < uVar25);
                        }
                      }
                      else if (uVar16 == 0x11) {
                        if (uVar20 < 4) {
                          if (local_58 <= uVar15) goto LAB_10016997;
                          local_50 = uVar15 + 1;
                          uVar19 = uVar19 | (ulong)local_60[uVar15] << (bVar14 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar19 >> 3;
                        local_40 = local_40 - 3;
                        if (local_68 < local_78) {
                          uVar19 = (ulong)(((uint)uVar19 & 7) + 3);
                          local_c0 = local_68 - 1;
                          uVar15 = 0;
                          uVar16 = 0;
                          local_a8 = uVar19;
                          uVar17 = local_68;
                          do {
                            local_90 = puVar12;
                            if (uVar17 == uVar24) {
                              uVar22 = uVar17 * 2;
                              if (uVar17 == 0) {
                                uVar22 = 4;
                              }
                              uVar24 = uVar17;
                              if (uVar17 < uVar22) {
                                local_118 = 6;
                                local_c8 = uVar22;
                                local_9c = uVar16;
                                local_70 = uVar15;
                                local_68 = uVar17;
                                puVar12 = (undefined4 *)recovered_10006fe0(uVar22 * 4);
                                uVar17 = local_68;
                                uVar15 = local_70;
                                uVar19 = local_a8;
                                if (local_68 != 0) {
                                  if (local_68 < 8) {
                                    uVar24 = 0;
                                  }
                                  else {
                                    uVar24 = 0;
                                    if (0x1f < (ulong)((long)puVar12 - (long)local_90)) {
                                      uVar24 = local_68 & 0xfffffffffffffff8;
                                      uVar25 = 0;
                                      do {
                                        uVar11 = *(undefined8 *)((long)(local_90 + uVar25) + 8);
                                        uVar5 = *(undefined8 *)(local_90 + uVar25 + 4);
                                        uVar6 = *(undefined8 *)((long)(local_90 + uVar25 + 4) + 8);
                                        *(undefined8 *)(puVar12 + uVar25) =
                                             *(undefined8 *)(local_90 + uVar25);
                                        *(undefined8 *)((long)(puVar12 + uVar25) + 8) = uVar11;
                                        *(undefined8 *)(puVar12 + uVar25 + 4) = uVar5;
                                        *(undefined8 *)((long)(puVar12 + uVar25 + 4) + 8) = uVar6;
                                        uVar25 = uVar25 + 8;
                                      } while (uVar24 != uVar25);
                                      if (local_68 == uVar24) goto LAB_1001612f;
                                    }
                                  }
                                  uVar25 = uVar24;
                                  if ((local_68 & 3) != 0) {
                                    uVar22 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar12[uVar25] = local_90[uVar25];
                                      uVar25 = uVar25 + 1;
                                      uVar22 = uVar22 - 1;
                                    } while (uVar22 != 0);
                                  }
                                  if (2 < (local_c0 + local_70) - uVar24) {
                                    do {
                                      puVar12[uVar25] = local_90[uVar25];
                                      puVar12[uVar25 + 1] = local_90[uVar25 + 1];
                                      puVar12[uVar25 + 2] = local_90[uVar25 + 2];
                                      puVar12[uVar25 + 3] = local_90[uVar25 + 3];
                                      uVar25 = uVar25 + 4;
                                    } while (local_68 != uVar25);
                                  }
                                }
LAB_1001612f:
                                recovered_10007040(local_90);
                                uVar25 = local_78;
                                uVar24 = local_c8;
                                uVar16 = local_9c;
                              }
                            }
                            puVar12[uVar17] = 0;
                            local_68 = uVar17 + 1;
                            uVar16 = uVar16 + 1;
                            if ((uint)uVar19 <= uVar16) break;
                            uVar15 = uVar15 + 1;
                            uVar17 = local_68;
                          } while (local_68 < uVar25);
                        }
                      }
                      else {
                        if ((uVar16 != 0x10) || (local_68 == 0)) goto LAB_10016997;
                        if (uVar20 < 3) {
                          if (local_58 <= uVar15) goto LAB_10016997;
                          local_50 = uVar15 + 1;
                          uVar19 = uVar19 | (ulong)local_60[uVar15] << (bVar14 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar19 >> 2;
                        local_40 = local_40 - 2;
                        uVar8 = puVar12[local_68 - 1];
                        if (local_68 < local_78) {
                          uVar19 = (ulong)(((uint)uVar19 & 3) + 3);
                          local_c0 = local_68 - 1;
                          uVar15 = 0;
                          uVar16 = 0;
                          local_a8 = uVar19;
                          local_c8 = CONCAT44(PF_PART4(local_c8, 4),uVar8);
                          uVar17 = local_68;
                          do {
                            local_88 = puVar12;
                            if (uVar17 == uVar24) {
                              uVar24 = uVar17;
                              if (0 < (long)uVar17) {
                                local_118 = 5;
                                local_9c = uVar16;
                                local_70 = uVar15;
                                local_68 = uVar17;
                                puVar12 = (undefined4 *)recovered_10006fe0(uVar17 * 8);
                                uVar17 = local_68;
                                uVar15 = local_70;
                                uVar19 = local_a8;
                                if (local_68 < 8) {
                                  uVar24 = 0;
LAB_10015e56:
                                  uVar25 = uVar24;
                                  if ((local_68 & 3) != 0) {
                                    uVar22 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar12[uVar25] = local_88[uVar25];
                                      uVar25 = uVar25 + 1;
                                      uVar22 = uVar22 - 1;
                                    } while (uVar22 != 0);
                                  }
                                  if (2 < (local_c0 + local_70) - uVar24) {
                                    do {
                                      puVar12[uVar25] = local_88[uVar25];
                                      puVar12[uVar25 + 1] = local_88[uVar25 + 1];
                                      puVar12[uVar25 + 2] = local_88[uVar25 + 2];
                                      puVar12[uVar25 + 3] = local_88[uVar25 + 3];
                                      uVar25 = uVar25 + 4;
                                    } while (local_68 != uVar25);
                                  }
                                }
                                else {
                                  uVar24 = 0;
                                  if ((ulong)((long)puVar12 - (long)local_88) < 0x20)
                                  goto LAB_10015e56;
                                  uVar24 = local_68 & 0x7ffffffffffffff8;
                                  uVar25 = 0;
                                  do {
                                    uVar11 = *(undefined8 *)((long)(local_88 + uVar25) + 8);
                                    uVar5 = *(undefined8 *)(local_88 + uVar25 + 4);
                                    uVar6 = *(undefined8 *)((long)(local_88 + uVar25 + 4) + 8);
                                    *(undefined8 *)(puVar12 + uVar25) =
                                         *(undefined8 *)(local_88 + uVar25);
                                    *(undefined8 *)((long)(puVar12 + uVar25) + 8) = uVar11;
                                    *(undefined8 *)(puVar12 + uVar25 + 4) = uVar5;
                                    *(undefined8 *)((long)(puVar12 + uVar25 + 4) + 8) = uVar6;
                                    uVar25 = uVar25 + 8;
                                  } while (uVar24 != uVar25);
                                  if (local_68 != uVar24) goto LAB_10015e56;
                                }
                                uVar24 = local_68 * 2;
                                recovered_10007040(local_88);
                                uVar25 = local_78;
                                uVar8 = (undefined4)local_c8;
                                uVar16 = local_9c;
                              }
                            }
                            puVar12[uVar17] = uVar8;
                            local_68 = uVar17 + 1;
                            uVar16 = uVar16 + 1;
                            if ((uint)uVar19 <= uVar16) break;
                            uVar15 = uVar15 + 1;
                            uVar17 = local_68;
                          } while (local_68 < uVar25);
                        }
                      }
                    }
                    local_b8 = puVar12;
                  } while (local_68 < uVar25);
                  local_128 = (undefined4 *)((ulong)(uint)((int)local_128 << 2) + (long)puVar12);
                  local_170 = (void *)0x0;
                  uStack_168 = 0;
                  local_160 = 0;
                  local_118 = 8;
                  recovered_10017fb0((long *)&local_170,0,puVar12,local_128);
                  local_148 = (void *)0x0;
                  lStack_140 = 0;
                  local_138 = 0;
                  local_118 = 9;
                  recovered_10017fb0((long *)&local_148,0,local_128,local_b8 + local_68);
                  local_118 = 10;
                  uVar24 = recovered_10017980((long *)&local_170,(uint *)&local_2b8,0);
                  if ((char)uVar24 == '\0') {
                    cVar18 = '\0';
                  }
                  else {
                    if (lStack_140 != 0) {
                      lVar13 = 0;
                      bVar14 = 0;
                      do {
                        bVar4 = bVar14;
                        bVar28 = *(int *)((long)local_148 + lVar13) != 0;
                        lVar13 = lVar13 + 4;
                        bVar14 = bVar4 | bVar28;
                      } while (lStack_140 * 4 != lVar13);
                      if ((bool)(bVar4 | bVar28)) {
                        local_118 = 0xb;
                        uVar24 = recovered_10017980((long *)&local_148,(uint *)&local_1f8,1);
                        cVar18 = (char)uVar24;
                        goto LAB_10016885;
                      }
                    }
                    local_1c8 = 0;
                    uStack_1c0 = 0;
                    local_1d8 = 0;
                    uStack_1d0 = 0;
                    local_1e8 = 0;
                    uStack_1e0 = 0;
                    local_1f8 = 0;
                    uStack_1f0 = 0;
                    recovered_10007040(local_1b8);
                    local_1b8 = (void *)0x0;
                    uStack_1b0 = 0;
                    uStack_1ab = 0;
                    uStack_1a8 = 0;
                    uStack_1a3 = 0;
                    uStack_1a0 = 0;
                    recovered_10007040((void *)0x0);
                    uStack_19c = 1;
                    cVar18 = '\x01';
                  }
LAB_10016885:
                  lStack_140 = 0;
                  recovered_10007040(local_148);
                  uStack_168 = 0;
                  recovered_10007040(local_170);
                  recovered_10007040(local_b8);
                  puVar23 = local_188;
                  local_210 = 0;
                  uStack_20b = 0;
                  recovered_10007040(local_218);
                  recovered_10007040(puVar23);
                  uVar24 = uStack_48;
                  uVar16 = local_40;
                  if (cVar18 == '\0') goto LAB_10016b1d;
                  local_118 = 0xc;
                  uVar19 = recovered_10016d10((long *)&local_60,(long)&local_2b8,(long)&local_1f8,
                                              local_b0);
                  uVar19 = uVar19 & 0xffffffff;
                  uStack_1b0 = 0;
                  uStack_1ab = 0;
                  recovered_10007040(local_1b8);
                  local_270 = 0;
                  uStack_26b = 0;
                  recovered_10007040(local_278);
                  param_1 = local_150;
                  plVar27 = local_b0;
                  uVar16 = local_40;
                  if ((char)uVar19 != '\0') break;
                  goto LAB_10016b35;
                }
LAB_10016997:
                recovered_10007040(puVar12);
                puVar23 = local_188;
                recovered_10007040(local_218);
              }
              recovered_10007040(puVar23);
              uVar24 = uStack_48;
              uVar16 = local_40;
            }
LAB_10016b1d:
            local_40 = uVar16;
            uStack_48 = uVar24;
            recovered_10007040(local_1b8);
            recovered_10007040(local_278);
            uVar16 = local_40;
            goto LAB_10016b35;
          case 3:
            goto switchD_1001575c_caseD_3;
          }
        }
      } while ((local_158 & 1) == 0);
      uStack_48 = uStack_48 >> ((byte)local_40 & 7);
      local_40 = local_40 & 0xfffffff8;
      uVar16 = local_40;
      if (local_40 == 0 && local_50 == local_58) {
        uVar16 = *(uint *)(*param_1 + -4 + param_1[1]);
        uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18
        ;
        uVar24 = plVar27[1];
        if (uVar24 == 0) {
          uVar20 = 1;
        }
        else {
          local_b0 = (long *)CONCAT44(PF_PART4(local_b0, 4),uVar16);
          uVar25 = 0;
          uVar20 = 1;
          uVar7 = 0;
          do {
            uVar19 = uVar24 - uVar25;
            if (0x15af < uVar19) {
              uVar19 = 0x15b0;
            }
            if (uVar24 != uVar25) {
              uVar15 = uVar19 + (uVar19 == 0);
              uVar21 = (uint)uVar15;
              if (uVar24 - uVar25 < 4) {
                uVar17 = 0;
              }
              else {
                lVar13 = *plVar27 + 3 + uVar25;
                uVar17 = 0;
                do {
                  iVar9 = *(byte *)(lVar13 + -3 + uVar17) + uVar20;
                  iVar26 = (uint)*(byte *)(lVar13 + -2 + uVar17) + iVar9;
                  iVar10 = (uint)*(byte *)(lVar13 + -1 + uVar17) + iVar26;
                  uVar20 = (uint)*(byte *)(lVar13 + uVar17) + iVar10;
                  uVar7 = uVar7 + iVar9 + iVar26 + iVar10 + uVar20;
                  uVar17 = uVar17 + 4;
                } while ((uVar21 & 0x1ffc) != uVar17);
              }
              if ((uVar15 & 3) != 0) {
                uVar15 = 0;
                do {
                  uVar20 = uVar20 + *(byte *)(uVar17 + uVar25 + *plVar27 + uVar15);
                  uVar7 = uVar7 + uVar20;
                  uVar15 = uVar15 + 1;
                } while ((uVar21 & 3) != uVar15);
              }
              uVar20 = uVar20 % 0xfff1;
              uVar7 = uVar7 % 0xfff1;
            }
            uVar25 = uVar25 + uVar19;
          } while (uVar25 < uVar24);
          uVar20 = uVar20 + uVar7 * 0x10000;
        }
        uVar19 = CONCAT71((int7)(uVar19 >> 8),uVar20 == uVar16);
        goto switchD_1001575c_caseD_3;
      }
    }
  }
LAB_10016b35:
  local_40 = uVar16;
  uVar19 = 0;
switchD_1001575c_caseD_3:
  recovered_10007530(&local_120);
  return uVar19 & 0xffffffff;
}

#undef DAT_10019a40
#undef DAT_10019e34
#undef DAT_1001a398
#undef DAT_1001a400
#undef LAB_10016b74
#undef uStack_1ab
#undef uStack_1a8
#undef uStack_1a3
#undef uStack_1a0
#undef uStack_19c
#undef uStack_168
#undef lStack_140
#undef uStack_48
#undef local_2b8
#undef local_2a8
#undef local_298
#undef local_288
#undef local_278
#undef local_270
#undef local_258
#undef local_248
#undef local_238
#undef local_228
#undef local_218
#undef local_210
#undef local_1f8
#undef local_1e8
#undef local_1d8
#undef local_1c8
#undef local_1b8
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_160
#undef local_158
#undef local_150
#undef local_148
#undef local_138
#undef local_12c
#undef local_128
#undef local_120
#undef local_118
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_40
#undef local_38
#undef uStack_2b0
#undef uStack_2a0
#undef uStack_290
#undef uStack_280
#undef uStack_26b
#undef uStack_268
#undef uStack_263
#undef uStack_250
#undef uStack_240
#undef uStack_230
#undef uStack_220
#undef uStack_20b
#undef uStack_208
#undef uStack_203
#undef uStack_1f0
#undef uStack_1e0
#undef uStack_1d0
#undef uStack_1c0
#undef uStack_1b0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001d860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#define DAT_1001d8d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x300U)))
#define DAT_1001d948 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x374U)))
#define DAT_1001d9c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ecU)))
undefined8 recovered_10016d10(long *param_1,long param_2,long param_3,long *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;

  if (*(char *)(param_2 + 0x5c) != '\x01') {
    return 0;
  }
  do {
    uVar9 = *(uint *)(param_2 + 0x58);
    uVar17 = 0;
    if (uVar9 == 0) {
      return 0;
    }
    lVar4 = *param_1;
    uVar18 = param_1[1];
    uVar12 = *(uint *)(param_1 + 4);
    uVar13 = param_1[3];
    uVar22 = 1;
    lVar19 = 0;
    iVar15 = 0;
    uVar20 = param_1[2];
    while( true ) {
      uVar11 = uVar20;
      if (uVar12 == 0) {
        if (uVar18 <= uVar20) {
          return 0;
        }
        uVar11 = uVar20 + 1;
        param_1[2] = uVar11;
        uVar13 = uVar13 | *(byte *)(lVar4 + uVar20);
        uVar12 = 8;
      }
      uVar17 = (uint)uVar13 & 1 | uVar17;
      uVar13 = uVar13 >> 1;
      param_1[3] = uVar13;
      uVar12 = uVar12 - 1;
      *(uint *)(param_1 + 4) = uVar12;
      uVar21 = *(uint *)(param_2 + uVar22 * 4);
      uVar14 = uVar21 + iVar15;
      if (uVar17 < uVar14) break;
      lVar19 = lVar19 + (ulong)uVar21;
      iVar15 = uVar14 * 2;
      uVar17 = uVar17 * 2;
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulong)uVar21;
      uVar20 = uVar11;
      if (uVar9 < uVar21) {
        return 0;
      }
    }
    uVar20 = lVar19 + (ulong)(uVar17 - iVar15);
    if (*(ulong *)(param_2 + 0x48) <= uVar20) {
      return 0;
    }
    uVar3 = *(ushort *)(*(long *)(param_2 + 0x40) + uVar20 * 2);
    if (uVar3 < 0x100) {
      uVar18 = param_4[1];
      if (uVar18 == param_4[2]) {
        uVar13 = uVar18 * 2;
        if (uVar18 == 0) {
          uVar13 = 4;
        }
        if (uVar18 < uVar13) {
          lVar19 = recovered_10006fe0(uVar13);
          lVar4 = *param_4;
          uVar18 = param_4[1];
          if (uVar18 != 0) {
            if (uVar18 < 4) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              if (0x1f < (ulong)(lVar19 - lVar4)) {
                if (uVar18 < 0x20) {
                  uVar22 = 0;
                }
                else {
                  uVar20 = uVar18 & 0xffffffffffffffe0;
                  uVar22 = 0;
                  do {
                    uVar6 = ((undefined8 *)(lVar4 + uVar22))[1];
                    puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar22);
                    uVar7 = *puVar1;
                    uVar8 = puVar1[1];
                    *(undefined8 *)(lVar19 + uVar22) = *(undefined8 *)(lVar4 + uVar22);
                    ((undefined8 *)(lVar19 + uVar22))[1] = uVar6;
                    puVar1 = (undefined8 *)(lVar19 + 0x10 + uVar22);
                    *puVar1 = uVar7;
                    puVar1[1] = uVar8;
                    uVar22 = uVar22 + 0x20;
                  } while (uVar20 != uVar22);
                  if (uVar18 == uVar20) goto LAB_10019fcf;
                  uVar22 = uVar20;
                  if ((uVar18 & 0x1c) == 0) goto LAB_10019f65;
                }
                uVar20 = uVar18 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(lVar19 + uVar22) = *(undefined4 *)(lVar4 + uVar22);
                  uVar22 = uVar22 + 4;
                } while (uVar20 != uVar22);
                if (uVar18 == uVar20) goto LAB_10019fcf;
              }
            }
LAB_10019f65:
            uVar11 = uVar18 & 3;
            uVar22 = uVar20;
            if (uVar11 != 0) {
              do {
                *(undefined1 *)(lVar19 + uVar22) = *(undefined1 *)(lVar4 + uVar22);
                uVar22 = uVar22 + 1;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (uVar20 - uVar18 < 0xfffffffffffffffd) {
              do {
                *(undefined1 *)(lVar19 + uVar22) = *(undefined1 *)(lVar4 + uVar22);
                *(undefined1 *)(lVar19 + 1 + uVar22) = *(undefined1 *)(lVar4 + 1 + uVar22);
                *(undefined1 *)(lVar19 + 2 + uVar22) = *(undefined1 *)(lVar4 + 2 + uVar22);
                *(undefined1 *)(lVar19 + 3 + uVar22) = *(undefined1 *)(lVar4 + 3 + uVar22);
                uVar22 = uVar22 + 4;
              } while (uVar18 != uVar22);
            }
          }
LAB_10019fcf:
          recovered_10007040(lVar4);
          *param_4 = lVar19;
          param_4[2] = uVar13;
          uVar18 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar18) = (char)uVar3;
      param_4[1] = param_4[1] + 1;
    }
    else {
      if (uVar3 == 0x100) {
        return CONCAT71((int7)((ulong)*(long *)(param_2 + 0x40) >> 8),1);
      }
      if (0x11d < uVar3) {
        return 0;
      }
      iVar15 = *(int *)(&DAT_1001d860 + (ulong)(uVar3 - 0x101) * 4);
      uVar9 = *(uint *)(&DAT_1001d8d4 + (ulong)(uVar3 - 0x101) * 4);
      if (uVar9 == 0) {
        cVar2 = *(char *)(param_3 + 0x5c);
        uVar20 = uVar11;
      }
      else {
        if (0x18 < uVar9) {
          return 0;
        }
        if (uVar12 < uVar9) {
          do {
            if (uVar18 <= uVar11) goto LAB_10019ba1;
            uVar20 = uVar11 + 1;
            param_1[2] = uVar20;
            uVar13 = uVar13 | (ulong)*(byte *)(lVar4 + uVar11) << ((byte)uVar12 & 0x3f);
            param_1[3] = uVar13;
            uVar12 = uVar12 + 8;
            *(uint *)(param_1 + 4) = uVar12;
            uVar11 = uVar20;
          } while (uVar12 < uVar9);
        }
        else {
LAB_10019ba1:
          uVar20 = uVar11;
        }
        if (uVar12 < uVar9) {
          return 0;
        }
        uVar17 = (uint)uVar13;
        uVar13 = uVar13 >> ((byte)uVar9 & 0x3f);
        param_1[3] = uVar13;
        uVar12 = uVar12 - uVar9;
        *(uint *)(param_1 + 4) = uVar12;
        iVar15 = iVar15 + (~(uint)(-1L << ((byte)uVar9 & 0x3f)) & uVar17);
        cVar2 = *(char *)(param_3 + 0x5c);
      }
      if (cVar2 != '\x01') {
        return 0;
      }
      uVar9 = *(uint *)(param_3 + 0x58);
      uVar17 = 0;
      if (uVar9 == 0) {
        return 0;
      }
      uVar22 = 1;
      lVar19 = 0;
      iVar16 = 0;
      while( true ) {
        uVar11 = uVar20;
        if (uVar12 == 0) {
          if (uVar18 <= uVar20) {
            return 0;
          }
          uVar11 = uVar20 + 1;
          param_1[2] = uVar11;
          uVar13 = uVar13 | *(byte *)(lVar4 + uVar20);
          uVar12 = 8;
        }
        uVar17 = (uint)uVar13 & 1 | uVar17;
        uVar13 = uVar13 >> 1;
        param_1[3] = uVar13;
        uVar12 = uVar12 - 1;
        *(uint *)(param_1 + 4) = uVar12;
        uVar21 = *(uint *)(param_3 + uVar22 * 4);
        uVar14 = uVar21 + iVar16;
        if (uVar17 < uVar14) break;
        lVar19 = lVar19 + (ulong)uVar21;
        iVar16 = uVar14 * 2;
        uVar17 = uVar17 * 2;
        uVar21 = (int)uVar22 + 1;
        uVar22 = (ulong)uVar21;
        uVar20 = uVar11;
        if (uVar9 < uVar21) {
          return 0;
        }
      }
      uVar20 = lVar19 + (ulong)(uVar17 - iVar16);
      if (*(ulong *)(param_3 + 0x48) <= uVar20) {
        return 0;
      }
      uVar3 = *(ushort *)(*(long *)(param_3 + 0x40) + uVar20 * 2);
      if (0x1d < uVar3) {
        return 0;
      }
      lVar19 = (ulong)uVar3 * 4;
      uVar9 = *(uint *)(&DAT_1001d948 + lVar19);
      uVar17 = *(uint *)(&DAT_1001d9c0 + lVar19);
      if (uVar17 != 0) {
        if (0x18 < uVar17) {
          return 0;
        }
        for (; (uVar12 < uVar17 && (uVar11 < uVar18)); uVar11 = uVar11 + 1) {
          param_1[2] = uVar11 + 1;
          uVar13 = uVar13 | (ulong)*(byte *)(lVar4 + uVar11) << ((byte)uVar12 & 0x3f);
          param_1[3] = uVar13;
          uVar12 = uVar12 + 8;
          *(uint *)(param_1 + 4) = uVar12;
        }
        if (uVar12 < uVar17) {
          return 0;
        }
        param_1[3] = uVar13 >> ((byte)uVar17 & 0x3f);
        *(uint *)(param_1 + 4) = uVar12 - uVar17;
        uVar9 = uVar9 + (~(uint)(-1L << ((byte)uVar17 & 0x3f)) & (uint)uVar13);
      }
      if (uVar9 == 0) {
        return 0;
      }
      uVar18 = param_4[1];
      if (uVar18 < uVar9) {
        return 0;
      }
      if (iVar15 != 0) {
        iVar16 = 0;
        do {
          lVar4 = *param_4;
          uVar13 = uVar18;
          lVar19 = lVar4;
          if (uVar18 == param_4[2]) {
            uVar20 = uVar18 * 2;
            if (uVar18 == 0) {
              uVar20 = 4;
            }
            if (uVar18 < uVar20) {
              lVar19 = recovered_10006fe0(uVar20);
              lVar5 = *param_4;
              uVar13 = param_4[1];
              if (uVar13 != 0) {
                if (uVar13 < 4) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  if (0x1f < (ulong)(lVar19 - lVar5)) {
                    if (uVar13 < 0x20) {
                      uVar11 = 0;
                    }
                    else {
                      uVar22 = uVar13 & 0xffffffffffffffe0;
                      uVar11 = 0;
                      do {
                        uVar6 = ((undefined8 *)(lVar5 + uVar11))[1];
                        puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar11);
                        uVar7 = *puVar1;
                        uVar8 = puVar1[1];
                        *(undefined8 *)(lVar19 + uVar11) = *(undefined8 *)(lVar5 + uVar11);
                        ((undefined8 *)(lVar19 + uVar11))[1] = uVar6;
                        puVar1 = (undefined8 *)(lVar19 + 0x10 + uVar11);
                        *puVar1 = uVar7;
                        puVar1[1] = uVar8;
                        uVar11 = uVar11 + 0x20;
                      } while (uVar22 != uVar11);
                      if (uVar13 == uVar22) goto LAB_10019d70;
                      uVar11 = uVar22;
                      if ((uVar13 & 0x1c) == 0) goto LAB_10019e99;
                    }
                    uVar22 = uVar13 & 0xfffffffffffffffc;
                    do {
                      *(undefined4 *)(lVar19 + uVar11) = *(undefined4 *)(lVar5 + uVar11);
                      uVar11 = uVar11 + 4;
                    } while (uVar22 != uVar11);
                    if (uVar13 == uVar22) goto LAB_10019d70;
                  }
                }
LAB_10019e99:
                uVar10 = uVar13 & 3;
                uVar11 = uVar22;
                if (uVar10 != 0) {
                  do {
                    *(undefined1 *)(lVar19 + uVar11) = *(undefined1 *)(lVar5 + uVar11);
                    uVar11 = uVar11 + 1;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                if (uVar22 - uVar13 < 0xfffffffffffffffd) {
                  do {
                    *(undefined1 *)(lVar19 + uVar11) = *(undefined1 *)(lVar5 + uVar11);
                    *(undefined1 *)(lVar19 + 1 + uVar11) = *(undefined1 *)(lVar5 + 1 + uVar11);
                    *(undefined1 *)(lVar19 + 2 + uVar11) = *(undefined1 *)(lVar5 + 2 + uVar11);
                    *(undefined1 *)(lVar19 + 3 + uVar11) = *(undefined1 *)(lVar5 + 3 + uVar11);
                    uVar11 = uVar11 + 4;
                  } while (uVar13 != uVar11);
                }
              }
LAB_10019d70:
              recovered_10007040(lVar5);
              *param_4 = lVar19;
              param_4[2] = uVar20;
              uVar13 = param_4[1];
            }
          }
          *(undefined1 *)(lVar19 + uVar13) = *(undefined1 *)(lVar4 + (uVar18 - uVar9));
          uVar18 = param_4[1] + 1;
          param_4[1] = uVar18;
          iVar16 = iVar16 + 1;
        } while (iVar16 != iVar15);
      }
    }
    if (*(char *)(param_2 + 0x5c) == '\0') {
      return 0;
    }
  } while( true );
}

#undef DAT_1001d860
#undef DAT_1001d8d4
#undef DAT_1001d948
#undef DAT_1001d9c0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10017380(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x48) = 0;
  recovered_10007040(*(undefined8 *)(param_1 + 0x40));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001e040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x874U)))
#define DAT_1001f540 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd5cU)))
#define LAB_1001a5c3 (*(uint8_t *)(0x1001a5c3U))
#define _DAT_1001d5f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
#define _DAT_1001d600 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x204U)))
#define _DAT_1001d610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x214U)))
#define _DAT_1001f540 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd5cU)))
#define _DAT_1001f550 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#define _DAT_1001f560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#define _DAT_1001f570 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd8cU)))
#define _DAT_1001f580 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#define _DAT_1001f58d (*(uint32_t *)(((uintptr_t)pf_module_state + 0xda9U)))
#define local_38 (*(undefined8 * *)(frame + 136))
#define local_40 (*(undefined8 *)(frame + 128))
#define local_48 (*(undefined8 *)(frame + 120))
#define local_50 (*(undefined8 * *)(frame + 112))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined * *)(frame + 64))
#define local_88 (*(code * *)(frame + 56))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_a8 (*(undefined8 *)(frame + 24))
#define uRam000000001001d5f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#define uRam000000001001d608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#define uRam000000001001d618 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21cU)))
#define uRam000000001001f548 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd64U)))
#define uRam000000001001f558 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#define uRam000000001001f568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd84U)))
#define uRam000000001001f578 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd94U)))
#define uRam000000001001f588 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0xda4U)))->pf_payload_bits
#define uRam000000001001f590 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0xdacU)))->pf_payload_bits
#define uRam000000001001f595 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdb1U)))
void recovered_100173a0(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  local_38 = (undefined8 *)recovered_10006fe0(0x480);
  recovered_10007040(0);
  uVar2 = uRam000000001001d5f8;
  uVar1 = _DAT_1001d5f0;
  local_68 = (undefined1 *)&local_a8;
  local_50 = local_38;
  local_40 = 0x120;
  *local_38 = _DAT_1001d5f0;
  local_38[1] = uVar2;
  local_38[2] = uVar1;
  local_38[3] = uVar2;
  local_38[4] = uVar1;
  local_38[5] = uVar2;
  local_38[6] = uVar1;
  local_38[7] = uVar2;
  local_38[8] = uVar1;
  local_38[9] = uVar2;
  local_38[10] = uVar1;
  local_38[0xb] = uVar2;
  local_38[0xc] = uVar1;
  local_38[0xd] = uVar2;
  local_38[0xe] = uVar1;
  local_38[0xf] = uVar2;
  local_38[0x10] = uVar1;
  local_38[0x11] = uVar2;
  local_38[0x12] = uVar1;
  local_38[0x13] = uVar2;
  local_38[0x14] = uVar1;
  local_38[0x15] = uVar2;
  local_38[0x16] = uVar1;
  local_38[0x17] = uVar2;
  local_38[0x18] = uVar1;
  local_38[0x19] = uVar2;
  local_38[0x1a] = uVar1;
  local_38[0x1b] = uVar2;
  local_38[0x1c] = uVar1;
  local_38[0x1d] = uVar2;
  local_38[0x1e] = uVar1;
  local_38[0x1f] = uVar2;
  local_38[0x20] = uVar1;
  local_38[0x21] = uVar2;
  local_38[0x22] = uVar1;
  local_38[0x23] = uVar2;
  local_38[0x24] = uVar1;
  local_38[0x25] = uVar2;
  local_38[0x26] = uVar1;
  local_38[0x27] = uVar2;
  local_38[0x28] = uVar1;
  local_38[0x29] = uVar2;
  local_38[0x2a] = uVar1;
  local_38[0x2b] = uVar2;
  local_38[0x2c] = uVar1;
  local_38[0x2d] = uVar2;
  local_38[0x2e] = uVar1;
  local_38[0x2f] = uVar2;
  local_38[0x30] = uVar1;
  local_38[0x31] = uVar2;
  local_38[0x32] = uVar1;
  local_38[0x33] = uVar2;
  local_38[0x34] = uVar1;
  local_38[0x35] = uVar2;
  local_38[0x36] = uVar1;
  local_38[0x37] = uVar2;
  local_38[0x38] = uVar1;
  local_38[0x39] = uVar2;
  local_38[0x3a] = uVar1;
  local_38[0x3b] = uVar2;
  local_38[0x3c] = uVar1;
  local_38[0x3d] = uVar2;
  local_38[0x3e] = uVar1;
  local_38[0x3f] = uVar2;
  local_38[0x40] = uVar1;
  local_38[0x41] = uVar2;
  local_38[0x42] = uVar1;
  local_38[0x43] = uVar2;
  local_38[0x44] = uVar1;
  local_38[0x45] = uVar2;
  local_38[0x46] = uVar1;
  local_38[0x47] = uVar2;
  local_38[0x48] = uVar1;
  local_38[0x49] = uVar2;
  local_38[0x4a] = uVar1;
  local_38[0x4b] = uVar2;
  local_38[0x4c] = uVar1;
  local_38[0x4d] = uVar2;
  local_38[0x4e] = uVar1;
  local_38[0x4f] = uVar2;
  local_38[0x50] = uVar1;
  local_38[0x51] = uVar2;
  local_38[0x52] = uVar1;
  local_38[0x53] = uVar2;
  local_38[0x54] = uVar1;
  local_38[0x55] = uVar2;
  local_38[0x56] = uVar1;
  local_38[0x57] = uVar2;
  local_38[0x58] = uVar1;
  local_38[0x59] = uVar2;
  local_38[0x5a] = uVar1;
  local_38[0x5b] = uVar2;
  local_38[0x5c] = uVar1;
  local_38[0x5d] = uVar2;
  local_38[0x5e] = uVar1;
  local_38[0x5f] = uVar2;
  local_38[0x60] = uVar1;
  local_38[0x61] = uVar2;
  local_38[0x62] = uVar1;
  local_38[99] = uVar2;
  local_38[100] = uVar1;
  local_38[0x65] = uVar2;
  local_38[0x66] = uVar1;
  local_38[0x67] = uVar2;
  local_38[0x68] = uVar1;
  local_38[0x69] = uVar2;
  local_38[0x6a] = uVar1;
  local_38[0x6b] = uVar2;
  local_38[0x6c] = uVar1;
  local_38[0x6d] = uVar2;
  local_38[0x6e] = uVar1;
  local_38[0x6f] = uVar2;
  local_38[0x70] = uVar1;
  local_38[0x71] = uVar2;
  local_38[0x72] = uVar1;
  local_38[0x73] = uVar2;
  local_38[0x74] = uVar1;
  local_38[0x75] = uVar2;
  local_38[0x76] = uVar1;
  local_38[0x77] = uVar2;
  local_38[0x78] = uVar1;
  local_38[0x79] = uVar2;
  local_38[0x7a] = uVar1;
  local_38[0x7b] = uVar2;
  local_38[0x7c] = uVar1;
  local_38[0x7d] = uVar2;
  local_38[0x7e] = uVar1;
  local_38[0x7f] = uVar2;
  local_38[0x80] = uVar1;
  local_38[0x81] = uVar2;
  local_38[0x82] = uVar1;
  local_38[0x83] = uVar2;
  local_38[0x84] = uVar1;
  local_38[0x85] = uVar2;
  local_38[0x86] = uVar1;
  local_38[0x87] = uVar2;
  local_38[0x88] = uVar1;
  local_38[0x89] = uVar2;
  local_38[0x8a] = uVar1;
  local_38[0x8b] = uVar2;
  local_38[0x8c] = uVar1;
  local_38[0x8d] = uVar2;
  local_38[0x8e] = uVar1;
  local_38[0x8f] = uVar2;
  uVar4 = uRam000000001001d608;
  uVar3 = _DAT_1001d600;
  local_48 = 0x120;
  local_38[0x48] = _DAT_1001d600;
  local_38[0x49] = uVar4;
  local_38[0x4a] = uVar3;
  local_38[0x4b] = uVar4;
  local_38[0x4c] = uVar3;
  local_38[0x4d] = uVar4;
  local_38[0x4e] = uVar3;
  local_38[0x4f] = uVar4;
  local_38[0x50] = uVar3;
  local_38[0x51] = uVar4;
  local_38[0x52] = uVar3;
  local_38[0x53] = uVar4;
  local_38[0x54] = uVar3;
  local_38[0x55] = uVar4;
  local_38[0x56] = uVar3;
  local_38[0x57] = uVar4;
  local_38[0x58] = uVar3;
  local_38[0x59] = uVar4;
  local_38[0x5a] = uVar3;
  local_38[0x5b] = uVar4;
  local_38[0x5c] = uVar3;
  local_38[0x5d] = uVar4;
  local_38[0x5e] = uVar3;
  local_38[0x5f] = uVar4;
  local_38[0x60] = uVar3;
  local_38[0x61] = uVar4;
  local_38[0x62] = uVar3;
  local_38[99] = uVar4;
  local_38[100] = uVar3;
  local_38[0x65] = uVar4;
  local_38[0x66] = uVar3;
  local_38[0x67] = uVar4;
  local_38[0x68] = uVar3;
  local_38[0x69] = uVar4;
  local_38[0x6a] = uVar3;
  local_38[0x6b] = uVar4;
  local_38[0x6c] = uVar3;
  local_38[0x6d] = uVar4;
  local_38[0x6e] = uVar3;
  local_38[0x6f] = uVar4;
  local_38[0x70] = uVar3;
  local_38[0x71] = uVar4;
  local_38[0x72] = uVar3;
  local_38[0x73] = uVar4;
  local_38[0x74] = uVar3;
  local_38[0x75] = uVar4;
  local_38[0x76] = uVar3;
  local_38[0x77] = uVar4;
  local_38[0x78] = uVar3;
  local_38[0x79] = uVar4;
  local_38[0x7a] = uVar3;
  local_38[0x7b] = uVar4;
  local_38[0x7c] = uVar3;
  local_38[0x7d] = uVar4;
  local_38[0x7e] = uVar3;
  local_38[0x7f] = uVar4;
  uVar4 = uRam000000001001d618;
  uVar3 = _DAT_1001d610;
  local_38[0x80] = _DAT_1001d610;
  local_38[0x81] = uVar4;
  local_38[0x82] = uVar3;
  local_38[0x83] = uVar4;
  local_38[0x84] = uVar3;
  local_38[0x85] = uVar4;
  local_38[0x86] = uVar3;
  local_38[0x87] = uVar4;
  local_38[0x88] = uVar3;
  local_38[0x89] = uVar4;
  local_38[0x8a] = uVar3;
  local_38[0x8b] = uVar4;
  local_38[0x8c] = uVar1;
  local_38[0x8d] = uVar2;
  local_38[0x8e] = uVar1;
  local_38[0x8f] = uVar2;
  uRam000000001001f590 = 0;
  uRam000000001001f595 = 0;
  _DAT_1001f580 = 0;
  uRam000000001001f588 = 0;
  _DAT_1001f58d = 0;
  _DAT_1001f570 = 0;
  uRam000000001001f578 = 0;
  _DAT_1001f560 = 0;
  uRam000000001001f568 = 0;
  _DAT_1001f550 = 0;
  uRam000000001001f558 = 0;
  _DAT_1001f540 = 0;
  uRam000000001001f548 = 0;
  local_88 = recovered_10006f90;
  local_80 = &DAT_1001e040;
  local_70 = &LAB_1001a5c3;
  local_a0 = 1;
  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  recovered_10007510(&local_a8);
  recovered_10017980((long *)&local_50,(uint *)&DAT_1001f540,0);
  recovered_10007040(local_38);
  recovered_10007530(&local_a8);
  return;
}

#undef DAT_1001e040
#undef DAT_1001f540
#undef LAB_1001a5c3
#undef _DAT_1001d5f0
#undef _DAT_1001d600
#undef _DAT_1001d610
#undef _DAT_1001f540
#undef _DAT_1001f550
#undef _DAT_1001f560
#undef _DAT_1001f570
#undef _DAT_1001f580
#undef _DAT_1001f58d
#undef local_38
#undef local_40
#undef local_48
#undef local_50
#undef local_68
#undef local_70
#undef local_78
#undef local_80
#undef local_88
#undef local_a0
#undef local_a8
#undef uRam000000001001d5f8
#undef uRam000000001001d608
#undef uRam000000001001d618
#undef uRam000000001001f548
#undef uRam000000001001f558
#undef uRam000000001001f568
#undef uRam000000001001f578
#undef uRam000000001001f588
#undef uRam000000001001f590
#undef uRam000000001001f595

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define auStack_a8 (*(uint (*)[4])(frame + 24))
#define local_34 (*(int *)(frame + 140))
#define local_40 (*(ulong *)(frame + 128))
#define local_44 (*(int *)(frame + 124))
#define local_48 (*(int *)(frame + 120))
#define local_4c (*(int *)(frame + 116))
#define local_50 (*(int *)(frame + 112))
#define local_54 (*(int *)(frame + 108))
#define local_58 (*(int *)(frame + 104))
#define local_5c (*(int *)(frame + 100))
#define local_60 (*(int *)(frame + 96))
#define local_64 (*(int *)(frame + 92))
#define local_68 (*(int *)(frame + 88))
#define local_6c (*(int *)(frame + 84))
#define local_70 (*(int *)(frame + 80))
#define local_74 (*(int *)(frame + 76))
#define local_78 (*(int *)(frame + 72))
#define local_7c (*(int *)(frame + 68))
#define local_80 (*(int *)(frame + 64))
#define local_84 (*(int *)(frame + 60))
#define local_88 (*(int *)(frame + 56))
#define local_8c (*(int *)(frame + 52))
#define local_90 (*(int *)(frame + 48))
#define local_94 (*(int *)(frame + 44))
#define local_98 (*(int *)(frame + 40))
ulong recovered_10017980(long *param_1,uint *param_2,ulong param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;

  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  recovered_10007040(*(undefined8 *)(param_2 + 0x10));
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  recovered_10007040(0);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    lVar4 = *param_1;
    lVar12 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar12);
      if (0xf < (ulong)uVar3) {
        return 0;
      }
      param_2[uVar3] = param_2[uVar3] + 1;
      uVar14 = param_2[0x16];
      if (param_2[0x16] <= uVar3) {
        uVar14 = uVar3;
      }
      param_2[0x16] = uVar14;
      lVar12 = lVar12 + 4;
    } while (uVar9 * 4 != lVar12);
  }
  if (uVar9 == *param_2) {
    *(char *)(param_2 + 0x17) = (char)(param_3 & 0xffffffff);
    return param_3 & 0xffffffff;
  }
  uVar3 = param_2[1];
  if (2 < (int)uVar3) {
    return 0;
  }
  iVar8 = 4 - (param_2[2] + uVar3 * 2);
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[3];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[4];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[5];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[6];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[7];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[8];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[9];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[10];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xb];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xc];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xd];
  if (iVar8 < 0) {
    return 0;
  }
  iVar8 = iVar8 * 2 - param_2[0xe];
  if (iVar8 < 0) {
    return 0;
  }
  if (iVar8 * 2 < (int)param_2[0xf]) {
    return 0;
  }
  iVar8 = param_2[2] + uVar3;
  iVar15 = param_2[3] + iVar8;
  local_64 = param_2[4] + iVar15;
  local_68 = param_2[5] + local_64;
  local_60 = param_2[6] + local_68;
  local_5c = param_2[7] + local_60;
  local_58 = param_2[8] + local_5c;
  local_54 = param_2[9] + local_58;
  local_50 = param_2[10] + local_54;
  local_34 = param_2[0xb] + local_50;
  local_4c = param_2[0xc] + local_34;
  local_48 = param_2[0xd] + local_4c;
  local_44 = param_2[0xe] + local_48;
  local_40 = (ulong)(param_2[0xf] + local_44);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  if (*(ulong *)(param_2 + 0x14) < local_40) {
    lVar12 = recovered_10006fe0(local_40 * 2);
    lVar4 = *(long *)(param_2 + 0x10);
    uVar9 = *(ulong *)(param_2 + 0x12);
    if (uVar9 != 0) {
      uVar10 = 0;
      if ((3 < uVar9) && (0x1f < (ulong)(lVar12 - lVar4))) {
        if (uVar9 < 0x10) {
          uVar11 = 0;
        }
        else {
          uVar10 = uVar9 & 0xfffffffffffffff0;
          uVar11 = 0;
          do {
            puVar2 = (undefined8 *)(lVar4 + uVar11 * 2);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar11 * 2);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)(lVar12 + uVar11 * 2);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar2 = (undefined8 *)(lVar12 + 0x10 + uVar11 * 2);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            uVar11 = uVar11 + 0x10;
          } while (uVar10 != uVar11);
          if (uVar9 == uVar10) goto LAB_1001a915;
          uVar11 = uVar10;
          if ((uVar9 & 0xc) == 0) goto LAB_1001a8bc;
        }
        uVar10 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined8 *)(lVar12 + uVar11 * 2) = *(undefined8 *)(lVar4 + uVar11 * 2);
          uVar11 = uVar11 + 4;
        } while (uVar10 != uVar11);
        if (uVar9 == uVar10) goto LAB_1001a915;
      }
LAB_1001a8bc:
      uVar13 = uVar9 & 3;
      uVar11 = uVar10;
      if (uVar13 != 0) {
        do {
          *(undefined2 *)(lVar12 + uVar11 * 2) = *(undefined2 *)(lVar4 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (uVar10 - uVar9 < 0xfffffffffffffffd) {
        do {
          *(undefined2 *)(lVar12 + uVar11 * 2) = *(undefined2 *)(lVar4 + uVar11 * 2);
          *(undefined2 *)(lVar12 + 2 + uVar11 * 2) = *(undefined2 *)(lVar4 + 2 + uVar11 * 2);
          *(undefined2 *)(lVar12 + 4 + uVar11 * 2) = *(undefined2 *)(lVar4 + 4 + uVar11 * 2);
          *(undefined2 *)(lVar12 + 6 + uVar11 * 2) = *(undefined2 *)(lVar4 + 6 + uVar11 * 2);
          uVar11 = uVar11 + 4;
        } while (uVar9 != uVar11);
      }
    }
LAB_1001a915:
    recovered_10007040(lVar4);
    *(long *)(param_2 + 0x10) = lVar12;
    *(ulong *)(param_2 + 0x14) = local_40;
    uVar9 = *(ulong *)(param_2 + 0x12);
  }
  else {
    uVar9 = 0;
  }
  uVar10 = local_40 - uVar9;
  if (local_40 < uVar9 || uVar10 == 0) goto LAB_1001aa0f;
  lVar4 = *(long *)(param_2 + 0x10);
  if (uVar10 < 4) {
LAB_1001a9e4:
    do {
      *(undefined2 *)(lVar4 + uVar9 * 2) = 0;
      uVar9 = uVar9 + 1;
    } while (local_40 != uVar9);
  }
  else if (uVar10 < 0x10) {
    uVar11 = 0;
LAB_1001a9bc:
    uVar13 = uVar10 & 0xfffffffffffffffc;
    lVar12 = uVar9 * 2;
    uVar9 = uVar9 + uVar13;
    do {
      *(undefined8 *)(lVar4 + lVar12 + uVar11 * 2) = 0;
      uVar11 = uVar11 + 4;
    } while (uVar13 != uVar11);
    if (uVar10 != uVar13) goto LAB_1001a9e4;
  }
  else {
    uVar11 = uVar10 & 0xfffffffffffffff0;
    lVar12 = lVar4 + uVar9 * 2;
    uVar13 = 0;
    do {
      puVar2 = (undefined8 *)(lVar12 + uVar13 * 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar12 + 0x10 + uVar13 * 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar13 = uVar13 + 0x10;
    } while (uVar11 != uVar13);
    if (uVar10 != uVar11) {
      if ((uVar10 & 0xc) == 0) {
        uVar9 = uVar9 + uVar11;
        goto LAB_1001a9e4;
      }
      goto LAB_1001a9bc;
    }
  }
  *(ulong *)(param_2 + 0x12) = local_40;
LAB_1001aa0f:
  auStack_a8[1] = 0;
  auStack_a8[2] = uVar3;
  auStack_a8[3] = iVar8;
  local_98 = iVar15;
  local_94 = local_64;
  local_90 = local_68;
  local_8c = local_60;
  local_88 = local_5c;
  local_84 = local_58;
  local_80 = local_54;
  local_7c = local_50;
  local_78 = local_34;
  local_74 = local_4c;
  local_70 = local_48;
  local_6c = local_44;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    lVar4 = *param_1;
    lVar12 = *(long *)(param_2 + 0x10);
    uVar10 = 0;
    do {
      uVar11 = (ulong)*(uint *)(lVar4 + uVar10 * 4);
      if (uVar11 != 0) {
        uVar3 = auStack_a8[uVar11];
        auStack_a8[uVar11] = uVar3 + 1;
        *(short *)(lVar12 + (ulong)uVar3 * 2) = (short)uVar10;
      }
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xffffffff) < uVar9);
  }
  *(undefined1 *)(param_2 + 0x17) = 1;
  return CONCAT71((uint7)(uint3)((uint)iVar15 >> 8),1);
}

#undef auStack_a8
#undef local_34
#undef local_40
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_58
#undef local_5c
#undef local_60
#undef local_64
#undef local_68
#undef local_6c
#undef local_70
#undef local_74
#undef local_78
#undef local_7c
#undef local_80
#undef local_84
#undef local_88
#undef local_8c
#undef local_90
#undef local_94
#undef local_98

#undef DAT_10019800
#define DAT_10019800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef DAT_10019e58
#define DAT_10019e58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87cU)))
#undef DAT_1001a3a0
#define DAT_1001a3a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdc4U)))
#undef DAT_1001a3b0
#define DAT_1001a3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdd4U)))
#undef DAT_1001a3c0
#define DAT_1001a3c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde4U)))
#undef DAT_1001a3d0
#define DAT_1001a3d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdf4U)))
#undef DAT_1001a3e0
#define DAT_1001a3e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe04U)))
#undef DAT_1001a3ed
#define DAT_1001a3ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe11U)))
#undef LAB_10017f49
#define LAB_10017f49 (*(uint8_t *)(0x10017f49U))
#undef UNK_10019808
#define UNK_10019808 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef UNK_1001a3a8
#define UNK_1001a3a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdccU)))
#undef UNK_1001a3b8
#define UNK_1001a3b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xddcU)))
#undef UNK_1001a3c8
#define UNK_1001a3c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdecU)))
#undef UNK_1001a3d8
#define UNK_1001a3d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdfcU)))
#undef UNK_1001a3e8
#define UNK_1001a3e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe0cU)))
#undef UNK_1001a3f0
#define UNK_1001a3f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe14U)))
#undef UNK_1001a3f5
#define UNK_1001a3f5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe19U)))
#undef _DAT_10019800
#define _DAT_10019800 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef _DAT_1001a3a0
#define _DAT_1001a3a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdc4U)))
#undef _DAT_1001a3b0
#define _DAT_1001a3b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdd4U)))
#undef _DAT_1001a3c0
#define _DAT_1001a3c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xde4U)))
#undef _DAT_1001a3d0
#define _DAT_1001a3d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdf4U)))
#undef _DAT_1001a3e0
#define _DAT_1001a3e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe04U)))
#undef _DAT_1001a3ed
#define _DAT_1001a3ed (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe11U)))
#undef uRam0000000010019808
#define uRam0000000010019808 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef uRam000000001001a3a8
#define uRam000000001001a3a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdccU)))
#undef uRam000000001001a3b8
#define uRam000000001001a3b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xddcU)))
#undef uRam000000001001a3c8
#define uRam000000001001a3c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdecU)))
#undef uRam000000001001a3d8
#define uRam000000001001a3d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdfcU)))
#undef uRam000000001001a3e8
#define uRam000000001001a3e8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0xe0cU)))->pf_payload_bits
#undef uRam000000001001a3f0
#define uRam000000001001a3f0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0xe14U)))->pf_payload_bits
#undef uRam000000001001a3f5
#define uRam000000001001a3f5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe19U)))
#define local_a8 (*(undefined8 *)(frame + 24))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_88 (*(code * *)(frame + 56))
#define local_80 (*(undefined * *)(frame + 64))
#define local_78 (*(undefined1 * *)(frame + 72))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined8 * *)(frame + 112))
#define local_48 (*(undefined8 *)(frame + 120))
#define local_40 (*(undefined8 *)(frame + 128))
#define local_38 (*(undefined8 * *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017e20(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_38 = (undefined8 *)recovered_10006fe0(0x80);
  recovered_10007040((void *)0x0);
  uVar2 = uRam0000000010019808;
  uVar1 = _DAT_10019800;
  local_68 = (undefined1 *)&local_a8;
  local_50 = local_38;
  local_40 = 0x20;
  *local_38 = _DAT_10019800;
  local_38[1] = uVar2;
  local_38[2] = uVar1;
  local_38[3] = uVar2;
  local_38[4] = uVar1;
  local_38[5] = uVar2;
  local_38[6] = uVar1;
  local_38[7] = uVar2;
  local_38[8] = uVar1;
  local_38[9] = uVar2;
  local_38[10] = uVar1;
  local_38[0xb] = uVar2;
  local_38[0xc] = uVar1;
  local_38[0xd] = uVar2;
  local_38[0xe] = uVar1;
  local_38[0xf] = uVar2;
  local_48 = 0x20;
  _DAT_1001a3a0 = 0;
  uRam000000001001a3a8 = 0;
  _DAT_1001a3b0 = 0;
  uRam000000001001a3b8 = 0;
  _DAT_1001a3c0 = 0;
  uRam000000001001a3c8 = 0;
  _DAT_1001a3d0 = 0;
  uRam000000001001a3d8 = 0;
  _DAT_1001a3e0 = 0;
  uRam000000001001a3e8 = 0;
  _DAT_1001a3ed = 0;
  uRam000000001001a3f0 = 0;
  uRam000000001001a3f5 = 0;
  local_88 = recovered_10006f90;
  local_80 = &DAT_10019e58;
  local_70 = &LAB_10017f49;
  local_a0 = 1;
  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  recovered_10007510(&local_a8);
  recovered_10017980((long *)&local_50,(uint *)&DAT_1001a3a0,0);
  recovered_10007040(local_38);
  recovered_10007530(&local_a8);
  return;
}

#undef DAT_10019800
#undef DAT_10019e58
#undef DAT_1001a3a0
#undef DAT_1001a3b0
#undef DAT_1001a3c0
#undef DAT_1001a3d0
#undef DAT_1001a3e0
#undef DAT_1001a3ed
#undef LAB_10017f49
#undef UNK_10019808
#undef UNK_1001a3a8
#undef UNK_1001a3b8
#undef UNK_1001a3c8
#undef UNK_1001a3d8
#undef UNK_1001a3e8
#undef UNK_1001a3f0
#undef UNK_1001a3f5
#undef _DAT_10019800
#undef _DAT_1001a3a0
#undef _DAT_1001a3b0
#undef _DAT_1001a3c0
#undef _DAT_1001a3d0
#undef _DAT_1001a3e0
#undef _DAT_1001a3ed
#undef uRam0000000010019808
#undef uRam000000001001a3a8
#undef uRam000000001001a3b8
#undef uRam000000001001a3c8
#undef uRam000000001001a3d8
#undef uRam000000001001a3e8
#undef uRam000000001001a3f0
#undef uRam000000001001a3f5
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_40
#undef local_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10017fb0(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;

  lVar6 = *param_1;
  bVar21 = lVar6 == 0;
  if (bVar21) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - lVar6 >> 2;
  }
  if (param_3 == param_4) goto LAB_1001af11;
  uVar19 = (long)param_4 + (-4 - (long)param_3);
  uVar20 = uVar19 >> 2;
  uVar7 = param_1[1];
  uVar13 = param_1[2];
  uVar12 = uVar7 + uVar20 + 1;
  if (uVar13 < uVar12) {
    uVar7 = 4;
    if (uVar13 != 0) {
      uVar7 = uVar13;
    }
    do {
      uVar13 = uVar7;
      uVar7 = uVar13 * 2;
    } while (uVar13 < uVar12);
    lVar6 = recovered_10006fe0(uVar13 * 4);
    lVar18 = *param_1;
    uVar7 = param_1[1];
    if (uVar7 != 0) {
      uVar12 = 0;
      if ((7 < uVar7) && (0x1f < (ulong)(lVar6 - lVar18))) {
        uVar12 = uVar7 & 0xfffffffffffffff8;
        uVar8 = 0;
        do {
          puVar1 = (undefined8 *)(lVar18 + uVar8 * 4);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar18 + 0x10 + uVar8 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar6 + uVar8 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar8 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar8 = uVar8 + 8;
        } while (uVar12 != uVar8);
        if (uVar7 == uVar12) goto LAB_1001adab;
      }
      uVar11 = uVar7 & 3;
      uVar8 = uVar12;
      if (uVar11 != 0) {
        do {
          *(undefined4 *)(lVar6 + uVar8 * 4) = *(undefined4 *)(lVar18 + uVar8 * 4);
          uVar8 = uVar8 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar12 - uVar7 < 0xfffffffffffffffd) {
        do {
          *(undefined4 *)(lVar6 + uVar8 * 4) = *(undefined4 *)(lVar18 + uVar8 * 4);
          *(undefined4 *)(lVar6 + 4 + uVar8 * 4) = *(undefined4 *)(lVar18 + 4 + uVar8 * 4);
          *(undefined4 *)(lVar6 + 8 + uVar8 * 4) = *(undefined4 *)(lVar18 + 8 + uVar8 * 4);
          *(undefined4 *)(lVar6 + 0xc + uVar8 * 4) = *(undefined4 *)(lVar18 + 0xc + uVar8 * 4);
          uVar8 = uVar8 + 4;
        } while (uVar7 != uVar8);
      }
    }
LAB_1001adab:
    recovered_10007040(lVar18);
    *param_1 = lVar6;
    param_1[2] = uVar13;
    uVar7 = param_1[1];
  }
  uVar13 = uVar7 - uVar10;
  if (uVar10 <= uVar7 && uVar13 != 0) {
    uVar12 = uVar7;
    if (0x33 < uVar13) {
      uVar8 = ~uVar10 + uVar7;
      uVar16 = lVar6 + uVar7 * 4 + (uVar19 & 0xfffffffffffffffc);
      uVar11 = (lVar6 + uVar7 * 4) - 4;
      if ((uVar19 < 0xffffffffffffffe0 && uVar8 >> 0x3e == 0) &&
          (uVar11 + uVar8 * -4 <= uVar11 && uVar16 + uVar8 * -4 <= uVar16)) {
        uVar8 = uVar13 & 0xfffffffffffffff8;
        uVar12 = uVar7 - uVar8;
        lVar18 = uVar7 * 4 + lVar6;
        lVar15 = uVar7 * 4 + lVar6 + (uVar19 & 0xfffffffffffffffc);
        lVar17 = 0;
        do {
          puVar1 = (undefined8 *)(lVar18 + -0x20 + lVar17 * 4);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar18 + -0x10 + lVar17 * 4);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)(lVar15 + -0xc + lVar17 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(lVar15 + -0x1c + lVar17 * 4);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          lVar17 = lVar17 + -8;
        } while (-lVar17 != uVar8);
        if (uVar13 == uVar8) goto LAB_1001aec1;
      }
    }
    do {
      *(undefined4 *)(lVar6 + uVar20 * 4 + uVar12 * 4) = *(undefined4 *)(lVar6 + -4 + uVar12 * 4);
      uVar12 = uVar12 - 1;
    } while (uVar10 < uVar12);
  }
LAB_1001aec1:
  uVar20 = uVar20 + 1;
  if ((uVar19 < 0x2c) || ((lVar6 + uVar10 * 4) - (long)param_3 < 0x20)) {
    puVar14 = param_3;
    uVar13 = uVar10;
LAB_1001aedd:
    puVar9 = (undefined4 *)(lVar6 + uVar13 * 4);
    do {
      *puVar9 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar14 != param_4);
  }
  else {
    uVar12 = uVar20 & 0xfffffffffffffff8;
    puVar14 = param_3 + uVar12;
    uVar13 = uVar10 + uVar12;
    lVar18 = uVar10 * 4 + lVar6;
    uVar19 = 0;
    do {
      uVar3 = *(undefined8 *)((long)(param_3 + uVar19) + 8);
      uVar4 = *(undefined8 *)(param_3 + uVar19 + 4);
      uVar5 = *(undefined8 *)((long)(param_3 + uVar19 + 4) + 8);
      puVar1 = (undefined8 *)(lVar18 + uVar19 * 4);
      *puVar1 = *(undefined8 *)(param_3 + uVar19);
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)(lVar18 + 0x10 + uVar19 * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      uVar19 = uVar19 + 8;
    } while (uVar12 != uVar19);
    if (uVar20 != uVar12) goto LAB_1001aedd;
  }
  param_1[1] = uVar7 + uVar20;
  bVar21 = lVar6 == 0;
LAB_1001af11:
  lVar18 = 0;
  if (!bVar21) {
    lVar18 = lVar6 + uVar10 * 4;
  }
  return lVar18;
}


#undef DAT_10019810
#define DAT_10019810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_10019820
#define DAT_10019820 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10019830
#define DAT_10019830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x254U)))
#undef DAT_1001a401
#define DAT_1001a401 (*(char *)(((uintptr_t)pf_module_state + 0xe25U)))
#undef DAT_1001a404
#define DAT_1001a404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe28U)))
#undef UNK_10019814
#define UNK_10019814 (*(uint *)(((uintptr_t)pf_module_state + 0x238U)))
#undef UNK_10019818
#define UNK_10019818 (*(uint *)(((uintptr_t)pf_module_state + 0x23cU)))
#undef UNK_1001981c
#define UNK_1001981c (*(uint *)(((uintptr_t)pf_module_state + 0x240U)))
#undef UNK_10019824
#define UNK_10019824 (*(uint *)(((uintptr_t)pf_module_state + 0x248U)))
#undef UNK_10019828
#define UNK_10019828 (*(uint *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef UNK_1001982c
#define UNK_1001982c (*(uint *)(((uintptr_t)pf_module_state + 0x250U)))
#undef UNK_10019834
#define UNK_10019834 (*(int *)(((uintptr_t)pf_module_state + 0x258U)))
#undef UNK_10019838
#define UNK_10019838 (*(int *)(((uintptr_t)pf_module_state + 0x25cU)))
#undef UNK_1001983c
#define UNK_1001983c (*(int *)(((uintptr_t)pf_module_state + 0x260U)))
#undef _DAT_10019810
#define _DAT_10019810 (*(uint *)(((uintptr_t)pf_module_state + 0x234U)))
#undef _DAT_10019820
#define _DAT_10019820 (*(uint *)(((uintptr_t)pf_module_state + 0x244U)))
#undef _DAT_10019830
#define _DAT_10019830 (*(int *)(((uintptr_t)pf_module_state + 0x254U)))
#undef iRam0000000010019834
#define iRam0000000010019834 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x258U)))
#undef iRam0000000010019838
#define iRam0000000010019838 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x25cU)))
#undef iRam000000001001983c
#define iRam000000001001983c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef uRam0000000010019814
#define uRam0000000010019814 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x238U)))
#undef uRam0000000010019818
#define uRam0000000010019818 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23cU)))
#undef uRam000000001001981c
#define uRam000000001001981c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x240U)))
#undef uRam0000000010019824
#define uRam0000000010019824 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x248U)))
#undef uRam0000000010019828
#define uRam0000000010019828 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef uRam000000001001982c
#define uRam000000001001982c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x250U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100182e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100182e0(uint param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;

  iVar7 = iRam000000001001983c;
  iVar6 = iRam0000000010019838;
  iVar5 = iRam0000000010019834;
  iVar4 = _DAT_10019830;
  uVar3 = uRam000000001001982c;
  uVar2 = uRam0000000010019828;
  uVar1 = uRam0000000010019824;
  uVar8 = _DAT_10019820;
  if (DAT_1001a401 == '\0') {
    lVar9 = 0;
    uVar11 = _DAT_10019810;
    uVar12 = uRam0000000010019814;
    uVar13 = uRam0000000010019818;
    uVar14 = uRam000000001001981c;
    do {
      uVar15 = (int)(uVar11 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar12 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar13 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar14 << 0x1f) >> 0x1f;
      uVar15 = (uVar11 >> 1 ^ uVar8) & uVar15 | ~uVar15 & uVar11 >> 1;
      uVar17 = (uVar12 >> 1 ^ uVar1) & uVar17 | ~uVar17 & uVar12 >> 1;
      uVar19 = (uVar13 >> 1 ^ uVar2) & uVar19 | ~uVar19 & uVar13 >> 1;
      uVar21 = (uVar14 >> 1 ^ uVar3) & uVar21 | ~uVar21 & uVar14 >> 1;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar16 = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      uVar18 = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      uVar20 = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      uVar22 = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar15 = uVar16 >> 1;
      uVar17 = uVar18 >> 1;
      uVar19 = uVar20 >> 1;
      uVar21 = uVar22 >> 1;
      uVar16 = (int)(uVar16 << 0x1f) >> 0x1f;
      uVar18 = (int)(uVar18 << 0x1f) >> 0x1f;
      uVar20 = (int)(uVar20 << 0x1f) >> 0x1f;
      uVar22 = (int)(uVar22 << 0x1f) >> 0x1f;
      uVar15 = (uVar15 ^ uVar8) & uVar16 | ~uVar16 & uVar15;
      uVar17 = (uVar17 ^ uVar1) & uVar18 | ~uVar18 & uVar17;
      uVar19 = (uVar19 ^ uVar2) & uVar20 | ~uVar20 & uVar19;
      uVar21 = (uVar21 ^ uVar3) & uVar22 | ~uVar22 & uVar21;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar15 = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      uVar17 = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      uVar19 = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      uVar21 = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar16 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar18 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar20 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar22 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar15 = uVar15 >> 1;
      uVar17 = uVar17 >> 1;
      uVar19 = uVar19 >> 1;
      uVar21 = uVar21 >> 1;
      uVar15 = (uVar15 ^ uVar8) & uVar16 | ~uVar16 & uVar15;
      uVar17 = (uVar17 ^ uVar1) & uVar18 | ~uVar18 & uVar17;
      uVar19 = (uVar19 ^ uVar2) & uVar20 | ~uVar20 & uVar19;
      uVar21 = (uVar21 ^ uVar3) & uVar22 | ~uVar22 & uVar21;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      uVar16 = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      uVar18 = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      uVar20 = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      uVar22 = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar15 = uVar16 >> 1;
      uVar17 = uVar18 >> 1;
      uVar19 = uVar20 >> 1;
      uVar21 = uVar22 >> 1;
      uVar16 = (int)(uVar16 << 0x1f) >> 0x1f;
      uVar18 = (int)(uVar18 << 0x1f) >> 0x1f;
      uVar20 = (int)(uVar20 << 0x1f) >> 0x1f;
      uVar22 = (int)(uVar22 << 0x1f) >> 0x1f;
      uVar15 = (uVar15 ^ uVar8) & uVar16 | ~uVar16 & uVar15;
      uVar17 = (uVar17 ^ uVar1) & uVar18 | ~uVar18 & uVar17;
      uVar19 = (uVar19 ^ uVar2) & uVar20 | ~uVar20 & uVar19;
      uVar21 = (uVar21 ^ uVar3) & uVar22 | ~uVar22 & uVar21;
      uVar16 = uVar15 >> 1;
      uVar18 = uVar17 >> 1;
      uVar20 = uVar19 >> 1;
      uVar22 = uVar21 >> 1;
      uVar15 = (int)(uVar15 << 0x1f) >> 0x1f;
      uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
      uVar19 = (int)(uVar19 << 0x1f) >> 0x1f;
      uVar21 = (int)(uVar21 << 0x1f) >> 0x1f;
      *(uint *)(&DAT_1001a404 + lVar9) = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state + 0xe2cU)) = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state + 0xe30U)) = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state + 0xe34U)) = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar11 = uVar11 + iVar4;
      uVar12 = uVar12 + iVar5;
      uVar13 = uVar13 + iVar6;
      uVar14 = uVar14 + iVar7;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x400);
    DAT_1001a401 = '\x01';
  }
  if (param_3 != 0) {
    uVar8 = ~param_1;
    if (param_3 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_1001a404 +
                         (ulong)(byte)(*(byte *)(param_2 + uVar10) ^ (byte)uVar8) * 4);
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_1001a404 +
                         (ulong)(byte)(*(byte *)(param_2 + 1 + uVar10) ^ (byte)uVar8) * 4);
        uVar10 = uVar10 + 2;
      } while ((param_3 & 0xfffffffffffffffe) != uVar10);
    }
    if ((param_3 & 1) != 0) {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_1001a404 + (ulong)(byte)(*(byte *)(param_2 + uVar10) ^ (byte)uVar8) * 4
                       );
    }
    param_1 = ~uVar8;
  }
  return param_1;
}

#undef DAT_10019810
#undef DAT_10019820
#undef DAT_10019830
#undef DAT_1001a401
#undef DAT_1001a404
#undef UNK_10019814
#undef UNK_10019818
#undef UNK_1001981c
#undef UNK_10019824
#undef UNK_10019828
#undef UNK_1001982c
#undef UNK_10019834
#undef UNK_10019838
#undef UNK_1001983c
#undef _DAT_10019810
#undef _DAT_10019820
#undef _DAT_10019830
#undef iRam0000000010019834
#undef iRam0000000010019838
#undef iRam000000001001983c
#undef uRam0000000010019814
#undef uRam0000000010019818
#undef uRam000000001001981c
#undef uRam0000000010019824
#undef uRam0000000010019828
#undef uRam000000001001982c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100184f0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;

  uVar11 = param_1[1];
  if (uVar11 == param_1[2]) {
    uVar9 = 4;
    if (uVar11 != 0) {
      uVar9 = uVar11 * 2;
    }
    if (uVar11 < uVar9) {
      lVar6 = recovered_10006fe0(uVar9 * 0x38);
      if (param_1[1] != 0) {
        lVar12 = 0x28;
        uVar11 = 0;
        do {
          lVar7 = *param_1;
          puVar1 = (undefined8 *)(lVar7 + -0x28 + lVar12);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          puVar1 = (undefined8 *)(lVar7 + -0x1f + lVar12);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + -0x1f + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar6 + -0x28 + lVar12);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          *(undefined8 *)(lVar6 + -8 + lVar12) = *(undefined8 *)(lVar7 + -8 + lVar12);
          uVar3 = ((undefined8 *)(lVar7 + lVar12))[1];
          *(undefined8 *)(lVar6 + lVar12) = *(undefined8 *)(lVar7 + lVar12);
          ((undefined8 *)(lVar6 + lVar12))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar7 + -8 + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar7 + 8 + lVar12) = 0;
          recovered_10007040(0);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x38;
        } while (uVar11 < (ulong)param_1[1]);
      }
      recovered_10007040(*param_1);
      *param_1 = lVar6;
      param_1[2] = uVar9;
      uVar11 = param_1[1];
    }
  }
  lVar12 = *param_1;
  lVar7 = uVar11 * 0x38;
  lVar6 = lVar12 + lVar7;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = *(undefined8 *)((long)param_2 + 0x11);
  puVar1 = (undefined8 *)(lVar12 + 9 + lVar7);
  *puVar1 = *(undefined8 *)((long)param_2 + 9);
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar12 + lVar7) = uVar3;
  ((undefined8 *)(lVar12 + lVar7))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar12 + 0x30 + lVar7) = 0;
  lVar12 = param_2[5];
  if (lVar12 != 0) {
    lVar8 = recovered_10006fe0(lVar12 << 4);
    lVar7 = *(long *)(lVar6 + 0x20);
    uVar11 = *(ulong *)(lVar6 + 0x28);
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        uVar9 = 0;
      }
      else {
        lVar10 = 0x10;
        uVar9 = 0;
        do {
          puVar1 = (undefined8 *)(lVar7 + -0x10 + lVar10);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + -0x10 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          uVar3 = ((undefined8 *)(lVar7 + lVar10))[1];
          *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)(lVar7 + lVar10);
          ((undefined8 *)(lVar8 + lVar10))[1] = uVar3;
          uVar9 = uVar9 + 2;
          lVar10 = lVar10 + 0x20;
        } while ((uVar11 & 0xfffffffffffffffe) != uVar9);
      }
      if ((uVar11 & 1) != 0) {
        puVar1 = (undefined8 *)(lVar7 + uVar9 * 0x10);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + uVar9 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
      }
    }
    recovered_10007040(lVar7);
    *(long *)(lVar6 + 0x20) = lVar8;
    *(long *)(lVar6 + 0x30) = lVar12;
    if (param_2[5] != 0) {
      lVar12 = 0;
      uVar11 = 0;
      do {
        uVar3 = ((undefined8 *)(param_2[4] + lVar12))[1];
        puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x20) + lVar12);
        *puVar1 = *(undefined8 *)(param_2[4] + lVar12);
        puVar1[1] = uVar3;
        uVar11 = uVar11 + 1;
        uVar9 = param_2[5];
        lVar12 = lVar12 + 0x10;
      } while (uVar11 < uVar9);
      goto LAB_1001b345;
    }
  }
  uVar9 = 0;
LAB_1001b345:
  *(ulong *)(lVar6 + 0x28) = uVar9;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100186c0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar9 = 4;
    if (uVar6 != 0) {
      uVar9 = uVar6 * 2;
    }
    if (uVar6 < uVar9) {
      lVar5 = recovered_10006fe0(uVar9 << 4);
      lVar3 = *param_1;
      uVar6 = param_1[1];
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar7 = 0;
        }
        else {
          lVar8 = 0x10;
          uVar7 = 0;
          do {
            puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar8);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar5 + -0x10 + lVar8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            uVar4 = ((undefined8 *)(lVar3 + lVar8))[1];
            *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
            ((undefined8 *)(lVar5 + lVar8))[1] = uVar4;
            uVar7 = uVar7 + 2;
            lVar8 = lVar8 + 0x20;
          } while ((uVar6 & 0xfffffffffffffffe) != uVar7);
        }
        if ((uVar6 & 1) != 0) {
          puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
      }
      recovered_10007040(lVar3);
      *param_1 = lVar5;
      param_1[2] = uVar9;
      uVar6 = param_1[1];
    }
  }
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10018790(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar9 = 4;
    if (uVar6 != 0) {
      uVar9 = uVar6 * 2;
    }
    if (uVar6 < uVar9) {
      lVar5 = recovered_10006fe0(uVar9 << 4);
      lVar3 = *param_1;
      uVar6 = param_1[1];
      if (uVar6 != 0) {
        if (uVar6 == 1) {
          uVar7 = 0;
        }
        else {
          lVar8 = 0x10;
          uVar7 = 0;
          do {
            puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar8);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar5 + -0x10 + lVar8);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            uVar4 = ((undefined8 *)(lVar3 + lVar8))[1];
            *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
            ((undefined8 *)(lVar5 + lVar8))[1] = uVar4;
            uVar7 = uVar7 + 2;
            lVar8 = lVar8 + 0x20;
          } while ((uVar6 & 0xfffffffffffffffe) != uVar7);
        }
        if ((uVar6 & 1) != 0) {
          puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x10);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
      }
      recovered_10007040(lVar3);
      *param_1 = lVar5;
      param_1[2] = uVar9;
      uVar6 = param_1[1];
    }
  }
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10018860(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  bool bVar14;

  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar12 = param_2[1];
  if (lVar12 == 0) goto LAB_1001b6d4;
  puVar10 = (undefined8 *)*param_2;
  lVar6 = 0;
  uVar11 = 0;
  do {
    puVar1 = (ulong *)((long)puVar10 + lVar6 + 8);
    bVar14 = CARRY8(uVar11,*puVar1);
    uVar11 = uVar11 + *puVar1;
    if (bVar14) {
      return 0;
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar12 * 0x10 != lVar6);
  if ((ulong)param_1[2] < uVar11) {
    lVar6 = recovered_10006fe0(uVar11);
    lVar12 = *param_1;
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      uVar7 = 0;
      if ((3 < uVar2) && (0x1f < (ulong)(lVar6 - lVar12))) {
        if (uVar2 < 0x20) {
          uVar8 = 0;
        }
        else {
          uVar7 = uVar2 & 0xffffffffffffffe0;
          uVar8 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar12 + uVar8))[1];
            puVar10 = (undefined8 *)(lVar12 + 0x10 + uVar8);
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            *(undefined8 *)(lVar6 + uVar8) = *(undefined8 *)(lVar12 + uVar8);
            ((undefined8 *)(lVar6 + uVar8))[1] = uVar3;
            puVar10 = (undefined8 *)(lVar6 + 0x10 + uVar8);
            *puVar10 = uVar4;
            puVar10[1] = uVar5;
            uVar8 = uVar8 + 0x20;
          } while (uVar7 != uVar8);
          if (uVar2 == uVar7) goto LAB_1001b67f;
          uVar8 = uVar7;
          if ((uVar2 & 0x1c) == 0) goto LAB_1001b615;
        }
        uVar7 = uVar2 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar6 + uVar8) = *(undefined4 *)(lVar12 + uVar8);
          uVar8 = uVar8 + 4;
        } while (uVar7 != uVar8);
        if (uVar2 == uVar7) goto LAB_1001b67f;
      }
LAB_1001b615:
      uVar9 = uVar2 & 3;
      uVar8 = uVar7;
      if (uVar9 != 0) {
        do {
          *(undefined1 *)(lVar6 + uVar8) = *(undefined1 *)(lVar12 + uVar8);
          uVar8 = uVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar7 - uVar2 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(lVar6 + uVar8) = *(undefined1 *)(lVar12 + uVar8);
          *(undefined1 *)(lVar6 + 1 + uVar8) = *(undefined1 *)(lVar12 + 1 + uVar8);
          *(undefined1 *)(lVar6 + 2 + uVar8) = *(undefined1 *)(lVar12 + 2 + uVar8);
          *(undefined1 *)(lVar6 + 3 + uVar8) = *(undefined1 *)(lVar12 + 3 + uVar8);
          uVar8 = uVar8 + 4;
        } while (uVar2 != uVar8);
      }
    }
LAB_1001b67f:
    recovered_10007040(lVar12);
    *param_1 = lVar6;
    param_1[2] = uVar11;
    puVar10 = (undefined8 *)*param_2;
    lVar12 = param_2[1];
  }
  if (lVar12 != 0) {
    puVar13 = puVar10 + lVar12 * 2;
    do {
      recovered_100152b0(param_1,*param_1 + param_1[1],(undefined1 *)*puVar10,
                         (undefined1 *)*puVar10 + puVar10[1]);
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar13);
  }
LAB_1001b6d4:
  uVar11 = recovered_10015590(param_1,param_1 + 3);
  return uVar11;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_1001d660 (*(uint128 *)(((uintptr_t)pf_module_state + 0x264U)))
ulong recovered_10018a50(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5,
                        ulong param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  uint128 auVar73;
  ushort uVar74;
  uint uVar75;
  ulong uVar76;
  char cVar77;
  uint uVar78;
  ulong uVar79;
  uint uVar80;
  ulong uVar81;
  long lVar82;
  int iVar83;
  ulong uVar84;
  ulong uVar85;
  uint uVar86;
  undefined8 unaff_R12;
  undefined7 uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  ulong uVar91;
  uint128 auVar92;
  uint128 auVar93;

  iVar83 = (int)param_5;
  uVar87 = (undefined7)((ulong)unaff_R12 >> 8);
  switch((uintptr_t)(param_1)) {
  case 1:
    uVar76 = param_5;
    if (param_6 < param_5) {
      uVar76 = param_6;
    }
    if (uVar76 != 0) {
      if ((ulong)(param_2 - param_3) < 0x20 || uVar76 < 4) {
        uVar85 = 0;
      }
      else {
        if (uVar76 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar85 = uVar76 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar81))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar81);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar81) = *(undefined8 *)(param_3 + uVar81);
            ((undefined8 *)(param_2 + uVar81))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar81);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar81 = uVar81 + 0x20;
          } while (uVar85 != uVar81);
          if (uVar76 == uVar85) goto LAB_1001bafb;
          uVar81 = uVar85;
          if ((uVar76 & 0x1c) == 0) goto LAB_1001ba96;
        }
        uVar85 = uVar76 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar81) = *(undefined4 *)(param_3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar85 != uVar81);
        if (uVar76 == uVar85) goto LAB_1001bafb;
      }
LAB_1001ba96:
      uVar84 = uVar76 & 3;
      uVar81 = uVar85;
      if (uVar84 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar85 - uVar76 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          *(undefined1 *)(param_2 + 1 + uVar81) = *(undefined1 *)(param_3 + 1 + uVar81);
          *(undefined1 *)(param_2 + 2 + uVar81) = *(undefined1 *)(param_3 + 2 + uVar81);
          *(undefined1 *)(param_2 + 3 + uVar81) = *(undefined1 *)(param_3 + 3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar76 != uVar81);
      }
    }
LAB_1001bafb:
    uVar85 = CONCAT71(uVar87,1);
    if (param_5 <= param_6) break;
    uVar81 = param_5 - uVar76;
    if ((uVar81 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_1001bb2d:
      uVar91 = uVar76;
    }
    else {
      if (uVar81 < 0x20) {
        uVar84 = 0;
      }
      else {
        uVar84 = uVar81 & 0xffffffffffffffe0;
        lVar82 = ((uVar76 + 0x10) - param_6) + param_2;
        uVar91 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar76 + uVar91);
          cVar77 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar76 + 0x10 + uVar91);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          pcVar5 = (char *)(lVar82 + -0x10 + uVar91);
          cVar39 = pcVar5[1];
          cVar40 = pcVar5[2];
          cVar41 = pcVar5[3];
          cVar42 = pcVar5[4];
          cVar43 = pcVar5[5];
          cVar44 = pcVar5[6];
          cVar45 = pcVar5[7];
          cVar46 = pcVar5[8];
          cVar47 = pcVar5[9];
          cVar48 = pcVar5[10];
          cVar49 = pcVar5[0xb];
          cVar50 = pcVar5[0xc];
          cVar51 = pcVar5[0xd];
          cVar52 = pcVar5[0xe];
          cVar53 = pcVar5[0xf];
          pcVar1 = (char *)(lVar82 + uVar91);
          cVar54 = *pcVar1;
          cVar55 = pcVar1[1];
          cVar56 = pcVar1[2];
          cVar57 = pcVar1[3];
          cVar58 = pcVar1[4];
          cVar59 = pcVar1[5];
          cVar60 = pcVar1[6];
          cVar61 = pcVar1[7];
          cVar62 = pcVar1[8];
          cVar63 = pcVar1[9];
          cVar64 = pcVar1[10];
          cVar65 = pcVar1[0xb];
          cVar66 = pcVar1[0xc];
          cVar67 = pcVar1[0xd];
          cVar68 = pcVar1[0xe];
          cVar69 = pcVar1[0xf];
          pcVar1 = (char *)(param_2 + uVar76 + uVar91);
          *pcVar1 = *pcVar5 + *pcVar4;
          pcVar1[1] = cVar39 + cVar77;
          pcVar1[2] = cVar40 + cVar9;
          pcVar1[3] = cVar41 + cVar10;
          pcVar1[4] = cVar42 + cVar11;
          pcVar1[5] = cVar43 + cVar12;
          pcVar1[6] = cVar44 + cVar13;
          pcVar1[7] = cVar45 + cVar14;
          pcVar1[8] = cVar46 + cVar15;
          pcVar1[9] = cVar47 + cVar16;
          pcVar1[10] = cVar48 + cVar17;
          pcVar1[0xb] = cVar49 + cVar18;
          pcVar1[0xc] = cVar50 + cVar19;
          pcVar1[0xd] = cVar51 + cVar20;
          pcVar1[0xe] = cVar52 + cVar21;
          pcVar1[0xf] = cVar53 + cVar22;
          pcVar1 = (char *)(param_2 + uVar76 + 0x10 + uVar91);
          *pcVar1 = cVar54 + cVar23;
          pcVar1[1] = cVar55 + cVar24;
          pcVar1[2] = cVar56 + cVar25;
          pcVar1[3] = cVar57 + cVar26;
          pcVar1[4] = cVar58 + cVar27;
          pcVar1[5] = cVar59 + cVar28;
          pcVar1[6] = cVar60 + cVar29;
          pcVar1[7] = cVar61 + cVar30;
          pcVar1[8] = cVar62 + cVar31;
          pcVar1[9] = cVar63 + cVar32;
          pcVar1[10] = cVar64 + cVar33;
          pcVar1[0xb] = cVar65 + cVar34;
          pcVar1[0xc] = cVar66 + cVar35;
          pcVar1[0xd] = cVar67 + cVar36;
          pcVar1[0xe] = cVar68 + cVar37;
          pcVar1[0xf] = cVar69 + cVar38;
          uVar91 = uVar91 + 0x20;
        } while (uVar84 != uVar91);
        if (uVar81 == uVar84) break;
        if ((uVar81 & 0x1c) == 0) {
          uVar76 = uVar76 + uVar84;
          goto LAB_1001bb2d;
        }
      }
      uVar79 = uVar81 & 0xfffffffffffffffc;
      uVar91 = uVar76 + uVar79;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar76 + uVar84);
        uVar8 = *(undefined4 *)((uVar76 - param_6) + param_2 + uVar84);
        *(uint *)(param_2 + uVar76 + uVar84) =
             CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                        (char)uVar8 + (char)uVar7)));
        uVar84 = uVar84 + 4;
      } while (uVar79 != uVar84);
      if (uVar81 == uVar79) break;
    }
    uVar76 = uVar91;
    if ((iVar83 - (int)uVar91 & 1U) != 0) {
      *(char *)(param_2 + uVar91) =
           *(char *)(param_2 + (uVar91 - param_6)) + *(char *)(param_3 + uVar91);
      uVar76 = uVar91 + 1;
    }
    if (uVar91 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(char *)(param_2 + uVar76) = *(char *)(lVar82 + -1 + uVar76) + *(char *)(param_3 + uVar76);
        *(char *)(param_2 + 1 + uVar76) =
             *(char *)(lVar82 + uVar76) + *(char *)(param_3 + 1 + uVar76);
        uVar76 = uVar76 + 2;
      } while (param_5 != uVar76);
    }
    break;
  case 2:
    if (param_4 != 0) {
      uVar85 = CONCAT71(uVar87,1);
      if (param_5 == 0) break;
      if ((param_5 < 4) || ((ulong)(param_2 - param_4) < 0x20 || (ulong)(param_2 - param_3) < 0x20))
      {
        uVar76 = 0;
      }
      else {
        if (param_5 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar76 = param_5 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            pcVar1 = (char *)(param_3 + uVar81);
            cVar77 = pcVar1[1];
            cVar9 = pcVar1[2];
            cVar10 = pcVar1[3];
            cVar11 = pcVar1[4];
            cVar12 = pcVar1[5];
            cVar13 = pcVar1[6];
            cVar14 = pcVar1[7];
            cVar15 = pcVar1[8];
            cVar16 = pcVar1[9];
            cVar17 = pcVar1[10];
            cVar18 = pcVar1[0xb];
            cVar19 = pcVar1[0xc];
            cVar20 = pcVar1[0xd];
            cVar21 = pcVar1[0xe];
            cVar22 = pcVar1[0xf];
            pcVar4 = (char *)(param_3 + 0x10 + uVar81);
            cVar23 = *pcVar4;
            cVar24 = pcVar4[1];
            cVar25 = pcVar4[2];
            cVar26 = pcVar4[3];
            cVar27 = pcVar4[4];
            cVar28 = pcVar4[5];
            cVar29 = pcVar4[6];
            cVar30 = pcVar4[7];
            cVar31 = pcVar4[8];
            cVar32 = pcVar4[9];
            cVar33 = pcVar4[10];
            cVar34 = pcVar4[0xb];
            cVar35 = pcVar4[0xc];
            cVar36 = pcVar4[0xd];
            cVar37 = pcVar4[0xe];
            cVar38 = pcVar4[0xf];
            pcVar4 = (char *)(param_4 + uVar81);
            cVar39 = pcVar4[1];
            cVar40 = pcVar4[2];
            cVar41 = pcVar4[3];
            cVar42 = pcVar4[4];
            cVar43 = pcVar4[5];
            cVar44 = pcVar4[6];
            cVar45 = pcVar4[7];
            cVar46 = pcVar4[8];
            cVar47 = pcVar4[9];
            cVar48 = pcVar4[10];
            cVar49 = pcVar4[0xb];
            cVar50 = pcVar4[0xc];
            cVar51 = pcVar4[0xd];
            cVar52 = pcVar4[0xe];
            cVar53 = pcVar4[0xf];
            pcVar5 = (char *)(param_4 + 0x10 + uVar81);
            cVar54 = *pcVar5;
            cVar55 = pcVar5[1];
            cVar56 = pcVar5[2];
            cVar57 = pcVar5[3];
            cVar58 = pcVar5[4];
            cVar59 = pcVar5[5];
            cVar60 = pcVar5[6];
            cVar61 = pcVar5[7];
            cVar62 = pcVar5[8];
            cVar63 = pcVar5[9];
            cVar64 = pcVar5[10];
            cVar65 = pcVar5[0xb];
            cVar66 = pcVar5[0xc];
            cVar67 = pcVar5[0xd];
            cVar68 = pcVar5[0xe];
            cVar69 = pcVar5[0xf];
            pcVar5 = (char *)(param_2 + uVar81);
            *pcVar5 = *pcVar4 + *pcVar1;
            pcVar5[1] = cVar39 + cVar77;
            pcVar5[2] = cVar40 + cVar9;
            pcVar5[3] = cVar41 + cVar10;
            pcVar5[4] = cVar42 + cVar11;
            pcVar5[5] = cVar43 + cVar12;
            pcVar5[6] = cVar44 + cVar13;
            pcVar5[7] = cVar45 + cVar14;
            pcVar5[8] = cVar46 + cVar15;
            pcVar5[9] = cVar47 + cVar16;
            pcVar5[10] = cVar48 + cVar17;
            pcVar5[0xb] = cVar49 + cVar18;
            pcVar5[0xc] = cVar50 + cVar19;
            pcVar5[0xd] = cVar51 + cVar20;
            pcVar5[0xe] = cVar52 + cVar21;
            pcVar5[0xf] = cVar53 + cVar22;
            pcVar1 = (char *)(param_2 + 0x10 + uVar81);
            *pcVar1 = cVar54 + cVar23;
            pcVar1[1] = cVar55 + cVar24;
            pcVar1[2] = cVar56 + cVar25;
            pcVar1[3] = cVar57 + cVar26;
            pcVar1[4] = cVar58 + cVar27;
            pcVar1[5] = cVar59 + cVar28;
            pcVar1[6] = cVar60 + cVar29;
            pcVar1[7] = cVar61 + cVar30;
            pcVar1[8] = cVar62 + cVar31;
            pcVar1[9] = cVar63 + cVar32;
            pcVar1[10] = cVar64 + cVar33;
            pcVar1[0xb] = cVar65 + cVar34;
            pcVar1[0xc] = cVar66 + cVar35;
            pcVar1[0xd] = cVar67 + cVar36;
            pcVar1[0xe] = cVar68 + cVar37;
            pcVar1[0xf] = cVar69 + cVar38;
            uVar81 = uVar81 + 0x20;
          } while (uVar76 != uVar81);
          if (uVar76 == param_5) break;
          uVar81 = uVar76;
          if ((param_5 & 0x1c) == 0) goto LAB_1001b83d;
        }
        uVar76 = param_5 & 0xfffffffffffffffc;
        do {
          uVar7 = *(undefined4 *)(param_3 + uVar81);
          uVar8 = *(undefined4 *)(param_4 + uVar81);
          *(uint *)(param_2 + uVar81) =
               CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                        CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                                 CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                          (char)uVar8 + (char)uVar7)));
          uVar81 = uVar81 + 4;
        } while (uVar76 != uVar81);
        if (uVar76 == param_5) break;
      }
LAB_1001b83d:
      uVar84 = param_5 & 3;
      uVar81 = uVar76;
      if (uVar84 != 0) {
        do {
          *(char *)(param_2 + uVar81) = *(char *)(param_4 + uVar81) + *(char *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar76 - param_5 < 0xfffffffffffffffd) {
        do {
          *(char *)(param_2 + uVar81) = *(char *)(param_4 + uVar81) + *(char *)(param_3 + uVar81);
          *(char *)(param_2 + 1 + uVar81) =
               *(char *)(param_4 + 1 + uVar81) + *(char *)(param_3 + 1 + uVar81);
          *(char *)(param_2 + 2 + uVar81) =
               *(char *)(param_4 + 2 + uVar81) + *(char *)(param_3 + 2 + uVar81);
          *(char *)(param_2 + 3 + uVar81) =
               *(char *)(param_4 + 3 + uVar81) + *(char *)(param_3 + 3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (param_5 != uVar81);
      }
      break;
    }
  case 0:
    recovered_10000f90((void *)param_2,(void *)param_3,param_5);
    uVar85 = CONCAT71(uVar87,1);
    break;
  case 3:
    uVar85 = CONCAT71(uVar87,1);
    if (param_4 != 0) {
      if (param_5 != 0) {
        if (param_5 == 1) {
          uVar81 = 0;
        }
        else {
          uVar76 = 0;
          do {
            uVar81 = uVar76;
            if (uVar81 < param_6) {
              uVar74 = 0;
            }
            else {
              uVar74 = (ushort)*(byte *)((param_2 - param_6) + uVar81);
            }
            *(char *)(param_2 + uVar81) =
                 (char)((uint)uVar74 + (uint)*(byte *)(param_4 + uVar81) >> 1) +
                 *(char *)(param_3 + uVar81);
            if (uVar81 + 1 < param_6) {
              uVar74 = 0;
            }
            else {
              uVar74 = (ushort)*(byte *)((param_2 - param_6) + 1 + uVar81);
            }
            *(char *)(param_2 + 1 + uVar81) =
                 (char)((uint)uVar74 + (uint)*(byte *)(param_4 + 1 + uVar81) >> 1) +
                 *(char *)(param_3 + 1 + uVar81);
            uVar76 = uVar81 + 2;
          } while (uVar81 + 2 != (param_5 & 0xfffffffffffffffe));
          uVar81 = uVar81 + 2;
        }
        if ((param_5 & 1) != 0) {
          if (uVar81 < param_6) {
            uVar74 = 0;
          }
          else {
            uVar74 = (ushort)*(byte *)(param_2 + (uVar81 - param_6));
          }
          *(char *)(param_2 + uVar81) =
               (char)((uint)uVar74 + (uint)*(byte *)(param_4 + uVar81) >> 1) +
               *(char *)(param_3 + uVar81);
        }
      }
      break;
    }
    if (param_5 == 0) break;
    uVar76 = param_5;
    if (param_6 < param_5) {
      uVar76 = param_6;
    }
    if (param_6 == 0) {
      uVar81 = 0;
    }
    else {
      uVar81 = uVar76;
      if ((ulong)(param_2 - param_3) < 0x20 || uVar76 < 4) {
        uVar91 = 0;
      }
      else {
        if (uVar76 < 0x20) {
          uVar84 = 0;
        }
        else {
          uVar91 = uVar76 & 0xffffffffffffffe0;
          uVar84 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar84))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar84);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar84) = *(undefined8 *)(param_3 + uVar84);
            ((undefined8 *)(param_2 + uVar84))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar84);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar84 = uVar84 + 0x20;
          } while (uVar91 != uVar84);
          if (uVar76 == uVar91) goto LAB_1001bfa6;
          uVar84 = uVar91;
          if ((uVar76 & 0x1c) == 0) goto LAB_1001bf37;
        }
        uVar91 = uVar76 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar84) = *(undefined4 *)(param_3 + uVar84);
          uVar84 = uVar84 + 4;
        } while (uVar91 != uVar84);
        if (uVar76 == uVar91) goto LAB_1001bfa6;
      }
LAB_1001bf37:
      uVar79 = uVar76 & 3;
      uVar84 = uVar91;
      if (uVar79 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar84) = *(undefined1 *)(param_3 + uVar84);
          uVar84 = uVar84 + 1;
          uVar79 = uVar79 - 1;
        } while (uVar79 != 0);
      }
      if (uVar91 - uVar76 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar84) = *(undefined1 *)(param_3 + uVar84);
          *(undefined1 *)(param_2 + 1 + uVar84) = *(undefined1 *)(param_3 + 1 + uVar84);
          *(undefined1 *)(param_2 + 2 + uVar84) = *(undefined1 *)(param_3 + 2 + uVar84);
          *(undefined1 *)(param_2 + 3 + uVar84) = *(undefined1 *)(param_3 + 3 + uVar84);
          uVar84 = uVar84 + 4;
        } while (uVar76 != uVar84);
      }
    }
LAB_1001bfa6:
    auVar73 = _DAT_1001d660;
    if (param_5 <= uVar81) break;
    uVar76 = param_5 - uVar76;
    if ((uVar76 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_1001bfd3:
      uVar91 = uVar81;
    }
    else {
      if (uVar76 < 0x20) {
        uVar84 = 0;
      }
      else {
        uVar84 = uVar76 & 0xffffffffffffffe0;
        lVar82 = ((uVar81 + 0x10) - param_6) + param_2;
        uVar91 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar81 + uVar91);
          cVar77 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar81 + 0x10 + uVar91);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          puVar6 = (ushort *)(lVar82 + -0x10 + uVar91);
          puVar2 = (ushort *)(lVar82 + uVar91);
          PF_PART2(auVar92, 0) = *puVar6 >> 1;
          PF_PART2(auVar92, 2) = puVar6[1] >> 1;
          PF_PART2(auVar92, 4) = puVar6[2] >> 1;
          PF_PART2(auVar92, 6) = puVar6[3] >> 1;
          PF_PART2(auVar92, 8) = puVar6[4] >> 1;
          PF_PART2(auVar92, 10) = puVar6[5] >> 1;
          PF_PART2(auVar92, 12) = puVar6[6] >> 1;
          PF_PART2(auVar92, 14) = puVar6[7] >> 1;
          auVar92 = auVar92 & auVar73;
          PF_PART2(auVar93, 0) = *puVar2 >> 1;
          PF_PART2(auVar93, 2) = puVar2[1] >> 1;
          PF_PART2(auVar93, 4) = puVar2[2] >> 1;
          PF_PART2(auVar93, 6) = puVar2[3] >> 1;
          PF_PART2(auVar93, 8) = puVar2[4] >> 1;
          PF_PART2(auVar93, 10) = puVar2[5] >> 1;
          PF_PART2(auVar93, 12) = puVar2[6] >> 1;
          PF_PART2(auVar93, 14) = puVar2[7] >> 1;
          auVar93 = auVar93 & auVar73;
          pcVar1 = (char *)(param_2 + uVar81 + uVar91);
          *pcVar1 = PF_PART1(auVar92,0) + *pcVar4;
          pcVar1[1] = PF_PART1(auVar92,1) + cVar77;
          pcVar1[2] = PF_PART1(auVar92,2) + cVar9;
          pcVar1[3] = PF_PART1(auVar92,3) + cVar10;
          pcVar1[4] = PF_PART1(auVar92,4) + cVar11;
          pcVar1[5] = PF_PART1(auVar92,5) + cVar12;
          pcVar1[6] = PF_PART1(auVar92,6) + cVar13;
          pcVar1[7] = PF_PART1(auVar92,7) + cVar14;
          pcVar1[8] = PF_PART1(auVar92,8) + cVar15;
          pcVar1[9] = PF_PART1(auVar92,9) + cVar16;
          pcVar1[10] = PF_PART1(auVar92,10) + cVar17;
          pcVar1[0xb] = PF_PART1(auVar92,0xb) + cVar18;
          pcVar1[0xc] = PF_PART1(auVar92,0xc) + cVar19;
          pcVar1[0xd] = PF_PART1(auVar92,0xd) + cVar20;
          pcVar1[0xe] = PF_PART1(auVar92,0xe) + cVar21;
          pcVar1[0xf] = PF_PART1(auVar92,0xf) + cVar22;
          pcVar1 = (char *)(param_2 + uVar81 + 0x10 + uVar91);
          *pcVar1 = PF_PART1(auVar93,0) + cVar23;
          pcVar1[1] = PF_PART1(auVar93,1) + cVar24;
          pcVar1[2] = PF_PART1(auVar93,2) + cVar25;
          pcVar1[3] = PF_PART1(auVar93,3) + cVar26;
          pcVar1[4] = PF_PART1(auVar93,4) + cVar27;
          pcVar1[5] = PF_PART1(auVar93,5) + cVar28;
          pcVar1[6] = PF_PART1(auVar93,6) + cVar29;
          pcVar1[7] = PF_PART1(auVar93,7) + cVar30;
          pcVar1[8] = PF_PART1(auVar93,8) + cVar31;
          pcVar1[9] = PF_PART1(auVar93,9) + cVar32;
          pcVar1[10] = PF_PART1(auVar93,10) + cVar33;
          pcVar1[0xb] = PF_PART1(auVar93,0xb) + cVar34;
          pcVar1[0xc] = PF_PART1(auVar93,0xc) + cVar35;
          pcVar1[0xd] = PF_PART1(auVar93,0xd) + cVar36;
          pcVar1[0xe] = PF_PART1(auVar93,0xe) + cVar37;
          pcVar1[0xf] = PF_PART1(auVar93,0xf) + cVar38;
          uVar91 = uVar91 + 0x20;
        } while (uVar84 != uVar91);
        if (uVar76 == uVar84) break;
        if ((uVar76 & 0x1c) == 0) {
          uVar81 = uVar81 + uVar84;
          goto LAB_1001bfd3;
        }
      }
      auVar73 = _DAT_1001d660;
      uVar79 = uVar76 & 0xfffffffffffffffc;
      uVar91 = uVar81 + uVar79;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar81 + uVar84);
        uVar8 = *(undefined4 *)((uVar81 - param_6) + param_2 + uVar84);
        auVar92 = ZEXT416(CONCAT22((ushort)((uint)uVar8 >> 0x11),(ushort)uVar8 >> 1)) & auVar73;
        *(uint *)(param_2 + uVar81 + uVar84) =
             CONCAT13(PF_PART1(auVar92,3) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12(PF_PART1(auVar92,2) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11(PF_PART1(auVar92,1) + (char)((uint)uVar7 >> 8),
                                        PF_PART1(auVar92,0) + (char)uVar7)));
        uVar84 = uVar84 + 4;
      } while (uVar79 != uVar84);
      if (uVar76 == uVar79) break;
    }
    uVar76 = uVar91;
    if ((iVar83 - (int)uVar91 & 1U) != 0) {
      *(byte *)(param_2 + uVar91) =
           (*(byte *)(param_2 + (uVar91 - param_6)) >> 1) + *(char *)(param_3 + uVar91);
      uVar76 = uVar91 + 1;
    }
    if (uVar91 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(byte *)(param_2 + uVar76) =
             (*(byte *)(lVar82 + -1 + uVar76) >> 1) + *(char *)(param_3 + uVar76);
        *(byte *)(param_2 + 1 + uVar76) =
             (*(byte *)(lVar82 + uVar76) >> 1) + *(char *)(param_3 + 1 + uVar76);
        uVar76 = uVar76 + 2;
      } while (param_5 != uVar76);
    }
    break;
  case 4:
    if (param_4 != 0) {
      uVar85 = CONCAT71(uVar87,1);
      if (param_5 != 0) {
        uVar85 = 0;
        do {
          uVar78 = 0;
          uVar89 = 0;
          if (param_6 <= uVar85) {
            uVar78 = (uint)*(byte *)((param_2 - param_6) + uVar85);
            uVar89 = (uint)*(byte *)((param_4 - param_6) + uVar85);
          }
          uVar90 = (uint)*(byte *)(param_4 + uVar85);
          uVar80 = uVar78 - uVar89;
          uVar86 = -(uVar90 - uVar89);
          if ((int)uVar86 < 0) {
            uVar86 = uVar90 - uVar89;
          }
          uVar88 = -uVar80;
          if ((int)-uVar80 < 0) {
            uVar88 = uVar80;
          }
          uVar75 = (uVar80 + uVar90) - uVar89;
          uVar80 = -uVar75;
          if ((int)uVar80 < 0) {
            uVar80 = uVar75;
          }
          if (uVar88 <= uVar80) {
            uVar89 = uVar90;
          }
          if (uVar80 < uVar86) {
            uVar78 = uVar89;
          }
          cVar77 = (char)uVar78;
          if (uVar88 < uVar86) {
            cVar77 = (char)uVar89;
          }
          *(char *)(param_2 + uVar85) = cVar77 + *(char *)(param_3 + uVar85);
          uVar85 = uVar85 + 1;
        } while (param_5 != uVar85);
        uVar85 = CONCAT71((uint7)(uint3)(uVar86 >> 8),1);
      }
      break;
    }
    uVar76 = param_5;
    if (param_6 < param_5) {
      uVar76 = param_6;
    }
    if (uVar76 != 0) {
      if ((ulong)(param_2 - param_3) < 0x20 || uVar76 < 4) {
        uVar85 = 0;
      }
      else {
        if (uVar76 < 0x20) {
          uVar81 = 0;
        }
        else {
          uVar85 = uVar76 & 0xffffffffffffffe0;
          uVar81 = 0;
          do {
            uVar70 = ((undefined8 *)(param_3 + uVar81))[1];
            puVar3 = (undefined8 *)(param_3 + 0x10 + uVar81);
            uVar71 = *puVar3;
            uVar72 = puVar3[1];
            *(undefined8 *)(param_2 + uVar81) = *(undefined8 *)(param_3 + uVar81);
            ((undefined8 *)(param_2 + uVar81))[1] = uVar70;
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar81);
            *puVar3 = uVar71;
            puVar3[1] = uVar72;
            uVar81 = uVar81 + 0x20;
          } while (uVar85 != uVar81);
          if (uVar76 == uVar85) goto LAB_1001bd8b;
          uVar81 = uVar85;
          if ((uVar76 & 0x1c) == 0) goto LAB_1001bd26;
        }
        uVar85 = uVar76 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(param_2 + uVar81) = *(undefined4 *)(param_3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar85 != uVar81);
        if (uVar76 == uVar85) goto LAB_1001bd8b;
      }
LAB_1001bd26:
      uVar84 = uVar76 & 3;
      uVar81 = uVar85;
      if (uVar84 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          uVar81 = uVar81 + 1;
          uVar84 = uVar84 - 1;
        } while (uVar84 != 0);
      }
      if (uVar85 - uVar76 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(param_2 + uVar81) = *(undefined1 *)(param_3 + uVar81);
          *(undefined1 *)(param_2 + 1 + uVar81) = *(undefined1 *)(param_3 + 1 + uVar81);
          *(undefined1 *)(param_2 + 2 + uVar81) = *(undefined1 *)(param_3 + 2 + uVar81);
          *(undefined1 *)(param_2 + 3 + uVar81) = *(undefined1 *)(param_3 + 3 + uVar81);
          uVar81 = uVar81 + 4;
        } while (uVar76 != uVar81);
      }
    }
LAB_1001bd8b:
    uVar85 = CONCAT71(uVar87,1);
    if (param_5 <= param_6) break;
    uVar81 = param_5 - uVar76;
    if ((uVar81 < 4) || (param_6 < 0x20 || (ulong)(param_2 - param_3) < 0x20)) {
LAB_1001bdc1:
      uVar91 = uVar76;
    }
    else {
      if (uVar81 < 0x20) {
        uVar84 = 0;
      }
      else {
        uVar84 = uVar81 & 0xffffffffffffffe0;
        lVar82 = ((uVar76 + 0x10) - param_6) + param_2;
        uVar91 = 0;
        do {
          pcVar4 = (char *)(param_3 + uVar76 + uVar91);
          cVar77 = pcVar4[1];
          cVar9 = pcVar4[2];
          cVar10 = pcVar4[3];
          cVar11 = pcVar4[4];
          cVar12 = pcVar4[5];
          cVar13 = pcVar4[6];
          cVar14 = pcVar4[7];
          cVar15 = pcVar4[8];
          cVar16 = pcVar4[9];
          cVar17 = pcVar4[10];
          cVar18 = pcVar4[0xb];
          cVar19 = pcVar4[0xc];
          cVar20 = pcVar4[0xd];
          cVar21 = pcVar4[0xe];
          cVar22 = pcVar4[0xf];
          pcVar1 = (char *)(param_3 + uVar76 + 0x10 + uVar91);
          cVar23 = *pcVar1;
          cVar24 = pcVar1[1];
          cVar25 = pcVar1[2];
          cVar26 = pcVar1[3];
          cVar27 = pcVar1[4];
          cVar28 = pcVar1[5];
          cVar29 = pcVar1[6];
          cVar30 = pcVar1[7];
          cVar31 = pcVar1[8];
          cVar32 = pcVar1[9];
          cVar33 = pcVar1[10];
          cVar34 = pcVar1[0xb];
          cVar35 = pcVar1[0xc];
          cVar36 = pcVar1[0xd];
          cVar37 = pcVar1[0xe];
          cVar38 = pcVar1[0xf];
          pcVar5 = (char *)(lVar82 + -0x10 + uVar91);
          cVar39 = pcVar5[1];
          cVar40 = pcVar5[2];
          cVar41 = pcVar5[3];
          cVar42 = pcVar5[4];
          cVar43 = pcVar5[5];
          cVar44 = pcVar5[6];
          cVar45 = pcVar5[7];
          cVar46 = pcVar5[8];
          cVar47 = pcVar5[9];
          cVar48 = pcVar5[10];
          cVar49 = pcVar5[0xb];
          cVar50 = pcVar5[0xc];
          cVar51 = pcVar5[0xd];
          cVar52 = pcVar5[0xe];
          cVar53 = pcVar5[0xf];
          pcVar1 = (char *)(lVar82 + uVar91);
          cVar54 = *pcVar1;
          cVar55 = pcVar1[1];
          cVar56 = pcVar1[2];
          cVar57 = pcVar1[3];
          cVar58 = pcVar1[4];
          cVar59 = pcVar1[5];
          cVar60 = pcVar1[6];
          cVar61 = pcVar1[7];
          cVar62 = pcVar1[8];
          cVar63 = pcVar1[9];
          cVar64 = pcVar1[10];
          cVar65 = pcVar1[0xb];
          cVar66 = pcVar1[0xc];
          cVar67 = pcVar1[0xd];
          cVar68 = pcVar1[0xe];
          cVar69 = pcVar1[0xf];
          pcVar1 = (char *)(param_2 + uVar76 + uVar91);
          *pcVar1 = *pcVar5 + *pcVar4;
          pcVar1[1] = cVar39 + cVar77;
          pcVar1[2] = cVar40 + cVar9;
          pcVar1[3] = cVar41 + cVar10;
          pcVar1[4] = cVar42 + cVar11;
          pcVar1[5] = cVar43 + cVar12;
          pcVar1[6] = cVar44 + cVar13;
          pcVar1[7] = cVar45 + cVar14;
          pcVar1[8] = cVar46 + cVar15;
          pcVar1[9] = cVar47 + cVar16;
          pcVar1[10] = cVar48 + cVar17;
          pcVar1[0xb] = cVar49 + cVar18;
          pcVar1[0xc] = cVar50 + cVar19;
          pcVar1[0xd] = cVar51 + cVar20;
          pcVar1[0xe] = cVar52 + cVar21;
          pcVar1[0xf] = cVar53 + cVar22;
          pcVar1 = (char *)(param_2 + uVar76 + 0x10 + uVar91);
          *pcVar1 = cVar54 + cVar23;
          pcVar1[1] = cVar55 + cVar24;
          pcVar1[2] = cVar56 + cVar25;
          pcVar1[3] = cVar57 + cVar26;
          pcVar1[4] = cVar58 + cVar27;
          pcVar1[5] = cVar59 + cVar28;
          pcVar1[6] = cVar60 + cVar29;
          pcVar1[7] = cVar61 + cVar30;
          pcVar1[8] = cVar62 + cVar31;
          pcVar1[9] = cVar63 + cVar32;
          pcVar1[10] = cVar64 + cVar33;
          pcVar1[0xb] = cVar65 + cVar34;
          pcVar1[0xc] = cVar66 + cVar35;
          pcVar1[0xd] = cVar67 + cVar36;
          pcVar1[0xe] = cVar68 + cVar37;
          pcVar1[0xf] = cVar69 + cVar38;
          uVar91 = uVar91 + 0x20;
        } while (uVar84 != uVar91);
        if (uVar81 == uVar84) break;
        if ((uVar81 & 0x1c) == 0) {
          uVar76 = uVar76 + uVar84;
          goto LAB_1001bdc1;
        }
      }
      uVar79 = uVar81 & 0xfffffffffffffffc;
      uVar91 = uVar76 + uVar79;
      do {
        uVar7 = *(undefined4 *)(param_3 + uVar76 + uVar84);
        uVar8 = *(undefined4 *)((uVar76 - param_6) + param_2 + uVar84);
        *(uint *)(param_2 + uVar76 + uVar84) =
             CONCAT13((char)((uint)uVar8 >> 0x18) + (char)((uint)uVar7 >> 0x18),
                      CONCAT12((char)((uint)uVar8 >> 0x10) + (char)((uint)uVar7 >> 0x10),
                               CONCAT11((char)((uint)uVar8 >> 8) + (char)((uint)uVar7 >> 8),
                                        (char)uVar8 + (char)uVar7)));
        uVar84 = uVar84 + 4;
      } while (uVar79 != uVar84);
      if (uVar81 == uVar79) break;
    }
    uVar76 = uVar91;
    if ((iVar83 - (int)uVar91 & 1U) != 0) {
      *(char *)(param_2 + uVar91) =
           *(char *)(param_2 + (uVar91 - param_6)) + *(char *)(param_3 + uVar91);
      uVar76 = uVar91 + 1;
    }
    if (uVar91 != param_5 - 1) {
      lVar82 = (param_2 + 1) - param_6;
      do {
        *(char *)(param_2 + uVar76) = *(char *)(lVar82 + -1 + uVar76) + *(char *)(param_3 + uVar76);
        *(char *)(param_2 + 1 + uVar76) =
             *(char *)(lVar82 + uVar76) + *(char *)(param_3 + 1 + uVar76);
        uVar76 = uVar76 + 2;
      } while (param_5 != uVar76);
    }
    break;
  default:
    uVar85 = 0;
  }
  return uVar85 & 0xffffffff;
}

#undef _DAT_1001d660

#undef DAT_1001a398
#define DAT_1001a398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019580
 */

void recovered_10019580(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100173a0();
  recovered_100072c0();
  DAT_1001a398 = 1;
  return;
}

#undef DAT_1001a398

#undef DAT_1001a400
#define DAT_1001a400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100195b0
 */

void recovered_100195b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10017e20();
  recovered_100072c0();
  DAT_1001a400 = 1;
  return;
}

#undef DAT_1001a400
