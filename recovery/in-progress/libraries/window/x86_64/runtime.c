/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c05U)))
void recovered_10000560(void)

{
  unsigned char frame[64] = {0};

  DAT_1000b120 = 0;
  recovered_10000580();
  return;
}

#undef DAT_1000b120

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
#undef DAT_1000d120
#define DAT_1000d120 (*(char *)(((uintptr_t)pf_module_state + 0x1c05U)))
#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c0dU)))
#undef DAT_1000d130
#define DAT_1000d130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c15U)))
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
  if (DAT_1000d120 != '\0') {
    return;
  }
  DAT_1000d128 = 0;
  DAT_1000d130 = 0;
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
      if (DAT_1000d128 != 0) goto LAB_10000965;
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
      if (DAT_1000d128 == 0) {
        puVar4 = &DAT_1000d128;
      }
      *puVar4 = 0x300000;
      if (DAT_1000d130 == 0) {
        DAT_1000d120 = 1;
        DAT_1000d130 = 0x300000;
        return;
      }
      DAT_1000d120 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_1000d128 == 0) {
      puVar4 = &DAT_1000d128;
    }
    *puVar4 = 0x300000;
    if (DAT_1000d130 == 0) {
      DAT_1000d130 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_1000d128 == 0) {
        puVar4 = &DAT_1000d128;
      }
      *puVar4 = 0x2000000;
      if (DAT_1000d130 == 0) {
        DAT_1000d120 = 1;
        DAT_1000d130 = 0x2000000;
        return;
      }
      DAT_1000d120 = 1;
      return;
    }
  }
LAB_10000965:
  if (DAT_1000d130 == 0) {
    DAT_1000d130 = DAT_1000d128;
    DAT_1000d120 = 1;
    return;
  }
  DAT_1000d120 = 1;
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
#undef DAT_1000d120
#undef DAT_1000d128
#undef DAT_1000d130
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

#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c0dU)))
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
  for (plVar1 = DAT_1000d128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_1000d128

#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c0dU)))
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
  for (plVar2 = DAT_1000d128; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1000d128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c0dU)))
ulong recovered_10000a80(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000580();
  uVar3 = 0;
  for (plVar1 = DAT_1000b128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000b128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c0dU)))
long recovered_10000ac0(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  recovered_10000580();
  lVar2 = 0;
  for (plVar1 = DAT_1000b128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1000b128

#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c0dU)))
#undef DAT_1000d130
#define DAT_1000d130 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c15U)))
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
  puVar3 = DAT_1000d130;
  if (DAT_1000d130 == (ulong *)0x0) {
    puVar3 = DAT_1000d128;
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
        DAT_1000d130 = DAT_1000d128;
        if (puVar3 != (ulong *)0x0) {
          DAT_1000d130 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_1000d128;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000d128
#undef DAT_1000d130

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10000bd0(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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

ulong recovered_10000c10(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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

long recovered_10000c50(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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

ulong recovered_10000ca0(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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

long recovered_10000d40(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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

ulong recovered_10000db0(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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

long recovered_10000e80(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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

void recovered_10000f10(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10000f30(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10000f40(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000f90(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10000fe0(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001030
 */

void * recovered_10001030(void *dst,void *src,ulong bytes)

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

  pvVar5 = dst;
  if (bytes < 0x10) {
LAB_1000104f:
    if (bytes == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)src ^ (uint)dst) & 7) == 0) {
    if (((ulong)dst & 7) == 0) {
LAB_1000123e:
      puVar7 = dst;
    }
    else {
      puVar7 = (undefined8 *)((long)dst + 1);
      *(undefined1 *)dst = *(undefined1 *)src;
      uVar6 = bytes - 1;
      uVar8 = (undefined7)((ulong)in_R8 >> 8);
      in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
      if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
        src = (void *)((long)src + 1);
        bytes = uVar6;
      }
      else {
        puVar7 = (undefined8 *)((long)dst + 2);
        *(undefined1 *)((long)dst + 1) = *(undefined1 *)((long)src + 1);
        uVar6 = bytes - 2;
        in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
        if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
          src = (void *)((long)src + 2);
          bytes = uVar6;
        }
        else {
          puVar7 = (undefined8 *)((long)dst + 3);
          *(undefined1 *)((long)dst + 2) = *(undefined1 *)((long)src + 2);
          uVar6 = bytes - 3;
          in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
          if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
            src = (void *)((long)src + 3);
            bytes = uVar6;
          }
          else {
            puVar7 = (undefined8 *)((long)dst + 4);
            *(undefined1 *)((long)dst + 3) = *(undefined1 *)((long)src + 3);
            uVar6 = bytes - 4;
            in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
            if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
              src = (void *)((long)src + 4);
              bytes = uVar6;
            }
            else {
              puVar7 = (undefined8 *)((long)dst + 5);
              *(undefined1 *)((long)dst + 4) = *(undefined1 *)((long)src + 4);
              uVar6 = bytes - 5;
              in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
              if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                src = (void *)((long)src + 5);
                bytes = uVar6;
              }
              else {
                puVar7 = (undefined8 *)((long)dst + 6);
                *(undefined1 *)((long)dst + 5) = *(undefined1 *)((long)src + 5);
                uVar6 = bytes - 6;
                in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                if (((ulong)puVar7 & 7) == 0 || uVar6 == 0) {
                  src = (void *)((long)src + 6);
                  bytes = uVar6;
                }
                else {
                  puVar7 = (undefined8 *)((long)dst + 7);
                  *(undefined1 *)((long)dst + 6) = *(undefined1 *)((long)src + 6);
                  uVar6 = bytes - 7;
                  in_R8 = (undefined8 *)CONCAT71(uVar8,uVar6 != 0);
                  if (((ulong)puVar7 & 7) != 0 && uVar6 != 0) {
                    puVar1 = (undefined1 *)((long)src + 7);
                    src = (void *)((long)src + 8);
                    *(undefined1 *)((long)dst + 7) = *puVar1;
                    bytes = bytes - 8;
                    dst = (undefined8 *)((long)dst + 8);
                    goto LAB_1000123e;
                  }
                  src = (void *)((long)src + 7);
                  bytes = uVar6;
                }
              }
            }
          }
        }
      }
    }
    if (bytes < 0x20) {
      in_R8 = src;
    }
    else {
      uVar6 = bytes - 0x20;
      uVar9 = bytes;
      if ((uVar6 & 0x20) == 0) {
        *puVar7 = *(undefined8 *)src;
        puVar7[1] = *(undefined8 *)((long)src + 8);
        puVar7[2] = *(undefined8 *)((long)src + 0x10);
        puVar7[3] = *(undefined8 *)((long)src + 0x18);
        puVar7 = puVar7 + 4;
        src = (void *)((long)src + 0x20);
        uVar9 = uVar6;
        in_R8 = src;
      }
      bytes = uVar6;
      if (0x1f < uVar6) {
        do {
          *puVar7 = *(undefined8 *)src;
          puVar7[1] = *(undefined8 *)((long)src + 8);
          puVar7[2] = *(undefined8 *)((long)src + 0x10);
          puVar7[3] = *(undefined8 *)((long)src + 0x18);
          puVar7[4] = *(undefined8 *)((long)src + 0x20);
          puVar7[5] = *(undefined8 *)((long)src + 0x28);
          puVar7[6] = *(undefined8 *)((long)src + 0x30);
          puVar7[7] = *(undefined8 *)((long)src + 0x38);
          puVar7 = puVar7 + 8;
          src = (void *)((long)src + 0x40);
          uVar9 = uVar9 - 0x40;
          bytes = uVar9;
          in_R8 = src;
        } while (0x1f < uVar9);
      }
    }
    if (bytes < 8) {
      src = in_R8;
      dst = puVar7;
    }
    else {
      if ((0x27 < bytes - 8) && (0x1f < (ulong)((long)puVar7 - (long)in_R8))) {
        uVar6 = (bytes - 8 >> 3) + 1;
        uVar9 = uVar6 & 0xfffffffffffffffc;
        src = in_R8 + uVar9;
        dst = puVar7 + uVar9;
        bytes = bytes + uVar9 * -8;
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
        in_R8 = src;
        puVar7 = dst;
        if (uVar6 == uVar9) goto LAB_1000104f;
      }
      do {
        src = in_R8 + 1;
        *puVar7 = *in_R8;
        dst = puVar7 + 1;
        bytes = bytes - 8;
        in_R8 = src;
        puVar7 = dst;
      } while (7 < bytes);
    }
    goto LAB_1000104f;
  }
  uVar6 = bytes;
  if ((3 < bytes) && (0x1f < (ulong)((long)dst - (long)src))) {
    if (bytes < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = bytes & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)src + uVar6))[1];
        puVar7 = (undefined8 *)((long)src + uVar6 + 0x10);
        uVar3 = *puVar7;
        uVar4 = puVar7[1];
        *(undefined8 *)((long)dst + uVar6) = *(undefined8 *)((long)src + uVar6);
        ((undefined8 *)((long)dst + uVar6))[1] = uVar2;
        puVar7 = (undefined8 *)((long)dst + uVar6 + 0x10);
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar9 != uVar6);
      if (bytes == uVar9) {
        return pvVar5;
      }
      if ((bytes & 0x1c) == 0) {
        src = (void *)((long)src + uVar9);
        dst = (void *)((long)dst + uVar9);
        uVar6 = (ulong)((uint)bytes & 0x1f);
        goto LAB_10001260;
      }
    }
    uVar10 = bytes & 0xfffffffffffffffc;
    uVar6 = (ulong)((uint)bytes & 3);
    do {
      *(undefined4 *)((long)dst + uVar9) = *(undefined4 *)((long)src + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    dst = (undefined8 *)((long)dst + uVar10);
    src = (undefined8 *)((long)src + uVar10);
    if (bytes == uVar10) {
      return pvVar5;
    }
  }
LAB_10001260:
  uVar9 = uVar6 - 1;
  if ((uVar6 & 7) != 0) {
    uVar10 = 0;
    do {
      *(undefined1 *)((long)dst + uVar10) = *(undefined1 *)((long)src + uVar10);
      uVar10 = uVar10 + 1;
    } while ((uVar6 & 7) != uVar10);
    uVar6 = uVar6 - uVar10;
    dst = (void *)((long)dst + uVar10);
    src = (void *)((long)src + uVar10);
  }
  if (6 < uVar9) {
    uVar9 = 0;
    do {
      *(undefined1 *)((long)dst + uVar9) = *(undefined1 *)((long)src + uVar9);
      *(undefined1 *)((long)dst + uVar9 + 1) = *(undefined1 *)((long)src + uVar9 + 1);
      *(undefined1 *)((long)dst + uVar9 + 2) = *(undefined1 *)((long)src + uVar9 + 2);
      *(undefined1 *)((long)dst + uVar9 + 3) = *(undefined1 *)((long)src + uVar9 + 3);
      *(undefined1 *)((long)dst + uVar9 + 4) = *(undefined1 *)((long)src + uVar9 + 4);
      *(undefined1 *)((long)dst + uVar9 + 5) = *(undefined1 *)((long)src + uVar9 + 5);
      *(undefined1 *)((long)dst + uVar9 + 6) = *(undefined1 *)((long)src + uVar9 + 6);
      *(undefined1 *)((long)dst + uVar9 + 7) = *(undefined1 *)((long)src + uVar9 + 7);
      uVar9 = uVar9 + 8;
    } while (uVar6 != uVar9);
  }
  return pvVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001470
 */

void * recovered_10001470(void *dst,void *src,ulong bytes)

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

  pvVar6 = dst;
  if (bytes == 0 || dst == src) {
    return pvVar6;
  }
  if ((dst < src) || (pvVar7 = (void *)((long)src + bytes), pvVar7 <= dst)) {
    if ((0xf < bytes) && ((((uint)src ^ (uint)dst) & 7) == 0)) {
      if (((ulong)dst & 7) == 0) {
LAB_1000180a:
        puVar8 = dst;
      }
      else {
        puVar8 = (undefined8 *)((long)dst + 1);
        *(undefined1 *)dst = *(undefined1 *)src;
        uVar11 = bytes - 1;
        uVar14 = (undefined7)((ulong)in_R8 >> 8);
        in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
        if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
          src = (void *)((long)src + 1);
          bytes = uVar11;
        }
        else {
          puVar8 = (undefined8 *)((long)dst + 2);
          *(undefined1 *)((long)dst + 1) = *(undefined1 *)((long)src + 1);
          uVar11 = bytes - 2;
          in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
          if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
            src = (void *)((long)src + 2);
            bytes = uVar11;
          }
          else {
            puVar8 = (undefined8 *)((long)dst + 3);
            *(undefined1 *)((long)dst + 2) = *(undefined1 *)((long)src + 2);
            uVar11 = bytes - 3;
            in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
            if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
              src = (void *)((long)src + 3);
              bytes = uVar11;
            }
            else {
              puVar8 = (undefined8 *)((long)dst + 4);
              *(undefined1 *)((long)dst + 3) = *(undefined1 *)((long)src + 3);
              uVar11 = bytes - 4;
              in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
              if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                src = (void *)((long)src + 4);
                bytes = uVar11;
              }
              else {
                puVar8 = (undefined8 *)((long)dst + 5);
                *(undefined1 *)((long)dst + 4) = *(undefined1 *)((long)src + 4);
                uVar11 = bytes - 5;
                in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                  src = (void *)((long)src + 5);
                  bytes = uVar11;
                }
                else {
                  puVar8 = (undefined8 *)((long)dst + 6);
                  *(undefined1 *)((long)dst + 5) = *(undefined1 *)((long)src + 5);
                  uVar11 = bytes - 6;
                  in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                  if (((ulong)puVar8 & 7) == 0 || uVar11 == 0) {
                    src = (void *)((long)src + 6);
                    bytes = uVar11;
                  }
                  else {
                    puVar8 = (undefined8 *)((long)dst + 7);
                    *(undefined1 *)((long)dst + 6) = *(undefined1 *)((long)src + 6);
                    uVar11 = bytes - 7;
                    in_R8 = (undefined8 *)CONCAT71(uVar14,uVar11 != 0);
                    if (((ulong)puVar8 & 7) != 0 && uVar11 != 0) {
                      puVar1 = (undefined1 *)((long)src + 7);
                      src = (void *)((long)src + 8);
                      *(undefined1 *)((long)dst + 7) = *puVar1;
                      bytes = bytes - 8;
                      dst = (undefined8 *)((long)dst + 8);
                      goto LAB_1000180a;
                    }
                    src = (void *)((long)src + 7);
                    bytes = uVar11;
                  }
                }
              }
            }
          }
        }
      }
      if (bytes < 0x20) {
        in_R8 = src;
      }
      else {
        uVar11 = bytes - 0x20;
        uVar16 = bytes;
        if ((uVar11 & 0x20) == 0) {
          *puVar8 = *(undefined8 *)src;
          puVar8[1] = *(undefined8 *)((long)src + 8);
          puVar8[2] = *(undefined8 *)((long)src + 0x10);
          puVar8[3] = *(undefined8 *)((long)src + 0x18);
          puVar8 = puVar8 + 4;
          src = (void *)((long)src + 0x20);
          uVar16 = uVar11;
          in_R8 = src;
        }
        bytes = uVar11;
        if (0x1f < uVar11) {
          bytes = uVar16;
          do {
            *puVar8 = *(undefined8 *)src;
            puVar8[1] = *(undefined8 *)((long)src + 8);
            puVar8[2] = *(undefined8 *)((long)src + 0x10);
            puVar8[3] = *(undefined8 *)((long)src + 0x18);
            puVar8[4] = *(undefined8 *)((long)src + 0x20);
            puVar8[5] = *(undefined8 *)((long)src + 0x28);
            puVar8[6] = *(undefined8 *)((long)src + 0x30);
            puVar8[7] = *(undefined8 *)((long)src + 0x38);
            puVar8 = puVar8 + 8;
            src = (void *)((long)src + 0x40);
            bytes = bytes - 0x40;
            in_R8 = src;
          } while (0x1f < bytes);
        }
      }
      if (bytes < 8) {
        src = in_R8;
        dst = puVar8;
      }
      else {
        if ((0x27 < bytes - 8) && (0x1f < (ulong)((long)puVar8 - (long)in_R8))) {
          uVar11 = (bytes - 8 >> 3) + 1;
          uVar16 = uVar11 & 0xfffffffffffffffc;
          src = in_R8 + uVar16;
          dst = puVar8 + uVar16;
          bytes = bytes + uVar16 * -8;
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
          in_R8 = src;
          puVar8 = dst;
          if (uVar11 == uVar16) goto LAB_10001a68;
        }
        do {
          uVar3 = *in_R8;
          in_R8 = in_R8 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          bytes = bytes - 8;
          src = in_R8;
          dst = puVar8;
        } while (7 < bytes);
      }
LAB_10001a68:
      if (bytes == 0) {
        return pvVar6;
      }
    }
    uVar11 = bytes;
    if ((3 < bytes) && (0x1f < (ulong)((long)dst - (long)src))) {
      if (bytes < 0x20) {
        uVar16 = 0;
      }
      else {
        uVar16 = bytes & 0xffffffffffffffe0;
        uVar11 = 0;
        do {
          uVar3 = ((undefined8 *)((long)src + uVar11))[1];
          puVar8 = (undefined8 *)((long)src + uVar11 + 0x10);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          *(undefined8 *)((long)dst + uVar11) = *(undefined8 *)((long)src + uVar11);
          ((undefined8 *)((long)dst + uVar11))[1] = uVar3;
          puVar8 = (undefined8 *)((long)dst + uVar11 + 0x10);
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
          uVar11 = uVar11 + 0x20;
        } while (uVar16 != uVar11);
        if (bytes == uVar16) {
          return pvVar6;
        }
        if ((bytes & 0x1c) == 0) {
          src = (void *)((long)src + uVar16);
          dst = (void *)((long)dst + uVar16);
          uVar11 = (ulong)((uint)bytes & 0x1f);
          goto LAB_1000182c;
        }
      }
      uVar12 = bytes & 0xfffffffffffffffc;
      uVar11 = (ulong)((uint)bytes & 3);
      do {
        *(undefined4 *)((long)dst + uVar16) = *(undefined4 *)((long)src + uVar16);
        uVar16 = uVar16 + 4;
      } while (uVar12 != uVar16);
      dst = (undefined8 *)((long)dst + uVar12);
      src = (undefined8 *)((long)src + uVar12);
      if (bytes == uVar12) {
        return pvVar6;
      }
    }
LAB_1000182c:
    uVar16 = uVar11 - 1;
    if ((uVar11 & 7) != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)((long)dst + uVar12) = *(undefined1 *)((long)src + uVar12);
        uVar12 = uVar12 + 1;
      } while ((uVar11 & 7) != uVar12);
      uVar11 = uVar11 - uVar12;
      dst = (void *)((long)dst + uVar12);
      src = (void *)((long)src + uVar12);
    }
    if (uVar16 < 7) {
      return pvVar6;
    }
    uVar16 = 0;
    do {
      *(undefined1 *)((long)dst + uVar16) = *(undefined1 *)((long)src + uVar16);
      *(undefined1 *)((long)dst + uVar16 + 1) = *(undefined1 *)((long)src + uVar16 + 1);
      *(undefined1 *)((long)dst + uVar16 + 2) = *(undefined1 *)((long)src + uVar16 + 2);
      *(undefined1 *)((long)dst + uVar16 + 3) = *(undefined1 *)((long)src + uVar16 + 3);
      *(undefined1 *)((long)dst + uVar16 + 4) = *(undefined1 *)((long)src + uVar16 + 4);
      *(undefined1 *)((long)dst + uVar16 + 5) = *(undefined1 *)((long)src + uVar16 + 5);
      *(undefined1 *)((long)dst + uVar16 + 6) = *(undefined1 *)((long)src + uVar16 + 6);
      *(undefined1 *)((long)dst + uVar16 + 7) = *(undefined1 *)((long)src + uVar16 + 7);
      uVar16 = uVar16 + 8;
    } while (uVar11 != uVar16);
    return pvVar6;
  }
  uVar11 = (long)dst + bytes;
  if ((0xf < bytes) && ((((uint)pvVar7 ^ (uint)uVar11) & 7) == 0)) {
    if ((uVar11 & 7) == 0) {
LAB_100015fe:
      uVar16 = uVar11;
    }
    else {
      uVar16 = uVar11 - 1;
      *(undefined1 *)(uVar11 - 1) = *(undefined1 *)((long)pvVar7 - 1);
      uVar12 = bytes - 1;
      uVar14 = (undefined7)(in_R9 >> 8);
      in_R9 = CONCAT71(uVar14,uVar12 == 0);
      uVar17 = (undefined7)((ulong)in_R10 >> 8);
      bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
      in_R10 = (void *)CONCAT71(uVar17,bVar15);
      if (bVar15) {
        pvVar7 = (void *)((long)pvVar7 - 1);
        bytes = uVar12;
      }
      else {
        uVar16 = uVar11 - 2;
        *(undefined1 *)(uVar11 - 2) = *(undefined1 *)((long)pvVar7 - 2);
        uVar12 = bytes - 2;
        in_R9 = CONCAT71(uVar14,uVar12 == 0);
        bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
        in_R10 = (void *)CONCAT71(uVar17,bVar15);
        if (bVar15) {
          pvVar7 = (void *)((long)pvVar7 - 2);
          bytes = uVar12;
        }
        else {
          uVar16 = uVar11 - 3;
          *(undefined1 *)(uVar11 - 3) = *(undefined1 *)((long)pvVar7 - 3);
          uVar12 = bytes - 3;
          in_R9 = CONCAT71(uVar14,uVar12 == 0);
          bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
          in_R10 = (void *)CONCAT71(uVar17,bVar15);
          if (bVar15) {
            pvVar7 = (void *)((long)pvVar7 - 3);
            bytes = uVar12;
          }
          else {
            uVar16 = uVar11 - 4;
            *(undefined1 *)(uVar11 - 4) = *(undefined1 *)((long)pvVar7 - 4);
            uVar12 = bytes - 4;
            in_R9 = CONCAT71(uVar14,uVar12 == 0);
            bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
            in_R10 = (void *)CONCAT71(uVar17,bVar15);
            if (bVar15) {
              pvVar7 = (void *)((long)pvVar7 - 4);
              bytes = uVar12;
            }
            else {
              uVar16 = uVar11 - 5;
              *(undefined1 *)(uVar11 - 5) = *(undefined1 *)((long)pvVar7 - 5);
              uVar12 = bytes - 5;
              in_R9 = CONCAT71(uVar14,uVar12 == 0);
              bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
              in_R10 = (void *)CONCAT71(uVar17,bVar15);
              if (bVar15) {
                pvVar7 = (void *)((long)pvVar7 - 5);
                bytes = uVar12;
              }
              else {
                uVar16 = uVar11 - 6;
                *(undefined1 *)(uVar11 - 6) = *(undefined1 *)((long)pvVar7 - 6);
                uVar12 = bytes - 6;
                in_R9 = CONCAT71(uVar14,uVar12 == 0);
                bVar15 = (uVar16 & 7) == 0 || uVar12 == 0;
                in_R10 = (void *)CONCAT71(uVar17,bVar15);
                if (bVar15) {
                  pvVar7 = (void *)((long)pvVar7 - 6);
                  bytes = uVar12;
                }
                else {
                  uVar16 = uVar11 - 7;
                  *(undefined1 *)(uVar11 - 7) = *(undefined1 *)((long)pvVar7 - 7);
                  bVar15 = bytes - 7 == 0;
                  in_R9 = CONCAT71(uVar14,bVar15);
                  bVar18 = (uVar16 & 7) == 0;
                  in_R10 = (void *)CONCAT71(uVar17,bVar18 || bVar15);
                  if (!bVar18 && !bVar15) {
                    puVar1 = (undefined1 *)((long)pvVar7 - 8);
                    pvVar7 = (void *)((long)pvVar7 - 8);
                    *(undefined1 *)(uVar11 - 8) = *puVar1;
                    uVar11 = uVar11 - 8;
                    bytes = bytes - 8;
                    goto LAB_100015fe;
                  }
                  pvVar7 = (void *)((long)pvVar7 - 7);
                  bytes = bytes - 7;
                }
              }
            }
          }
        }
      }
    }
    if (bytes < 0x20) {
      in_R10 = pvVar7;
    }
    else {
      uVar11 = bytes - 0x20;
      pvVar9 = pvVar7;
      uVar12 = uVar16;
      uVar13 = bytes;
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
      bytes = uVar11;
      if (0x1f < uVar11) {
        bytes = uVar13;
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
          bytes = bytes - 0x40;
          pvVar9 = in_R10;
          uVar12 = uVar16;
        } while (0x1f < bytes);
      }
    }
    if (bytes < 8) {
      pvVar7 = in_R10;
      uVar11 = uVar16;
    }
    else {
      if ((0x27 < bytes - 8) && (0x1f < (long)in_R10 - uVar16)) {
        uVar12 = (bytes - 8 >> 3) + 1;
        uVar13 = uVar12 & 0xfffffffffffffffc;
        pvVar7 = (void *)((long)in_R10 + uVar13 * -8);
        uVar11 = uVar16 + uVar13 * -8;
        bytes = bytes + uVar13 * -8;
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
        if (uVar12 == uVar13) goto LAB_10001bca;
      }
      do {
        puVar8 = (undefined8 *)((long)in_R10 - 8);
        in_R10 = (void *)((long)in_R10 - 8);
        *(undefined8 *)(uVar16 - 8) = *puVar8;
        uVar16 = uVar16 - 8;
        bytes = bytes - 8;
        pvVar7 = in_R10;
        uVar11 = uVar16;
      } while (7 < bytes);
    }
LAB_10001bca:
    if (bytes == 0) {
      return pvVar6;
    }
  }
  if ((3 < bytes) && (0xf < (long)pvVar7 - uVar11)) {
    if (bytes < 0x10) {
      uVar16 = 0;
    }
    else {
      uVar16 = bytes & 0xfffffffffffffff0;
      lVar10 = 0;
      do {
        puVar8 = (undefined8 *)((long)pvVar7 + lVar10 + -0x10);
        uVar3 = puVar8[1];
        puVar2 = (undefined8 *)((uVar11 - 0x10) + lVar10);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        lVar10 = lVar10 + -0x10;
      } while (-lVar10 != uVar16);
      if (bytes == uVar16) {
        return pvVar6;
      }
      if ((bytes & 0xc) == 0) {
        bytes = (ulong)((uint)bytes & 0xf);
        uVar11 = uVar11 - uVar16;
        pvVar7 = (void *)((long)pvVar7 - uVar16);
        goto LAB_10001c8f;
      }
    }
    uVar12 = bytes & 0xfffffffffffffffc;
    lVar10 = -uVar16;
    do {
      *(undefined4 *)((uVar11 - 4) + lVar10) = *(undefined4 *)((long)pvVar7 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while (-lVar10 != uVar12);
    bVar15 = bytes == uVar12;
    pvVar7 = (void *)((long)pvVar7 - uVar12);
    uVar11 = uVar11 - uVar12;
    bytes = (ulong)((uint)bytes & 3);
    if (bVar15) {
      return pvVar6;
    }
  }
LAB_10001c8f:
  uVar16 = bytes - 1;
  if ((bytes & 7) != 0) {
    uVar12 = 0;
    do {
      puVar1 = (undefined1 *)((long)pvVar7 - 1);
      pvVar7 = (void *)((long)pvVar7 - 1);
      *(undefined1 *)(uVar11 - 1) = *puVar1;
      uVar11 = uVar11 - 1;
      uVar12 = uVar12 + 1;
    } while ((bytes & 7) != uVar12);
    bytes = bytes - uVar12;
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
    } while (-lVar10 != bytes);
  }
  return pvVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d30
 */

void * recovered_10001d30(void *dst,int byte,ulong bytes)

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

  pvVar3 = dst;
  uVar8 = (undefined1)byte;
  if (0xf < bytes) {
    iVar4 = (byte & 0xffU) * 0x1010101;
    if (((ulong)dst & 7) == 0) {
LAB_10001e7d:
      puVar9 = dst;
      uVar6 = bytes;
    }
    else {
      *(undefined1 *)dst = uVar8;
      puVar9 = (undefined8 *)((long)dst + 1U);
      uVar6 = bytes - 1;
      if (((long)dst + 1U & 7) != 0 && bytes - 1 != 0) {
        *(undefined1 *)((long)dst + 1) = uVar8;
        puVar9 = (undefined8 *)((long)dst + 2U);
        uVar6 = bytes - 2;
        if (((long)dst + 2U & 7) != 0 && bytes - 2 != 0) {
          *(undefined1 *)((long)dst + 2) = uVar8;
          puVar9 = (undefined8 *)((long)dst + 3U);
          uVar6 = bytes - 3;
          if (((long)dst + 3U & 7) != 0 && bytes - 3 != 0) {
            *(undefined1 *)((long)dst + 3) = uVar8;
            puVar9 = (undefined8 *)((long)dst + 4U);
            uVar6 = bytes - 4;
            if (((long)dst + 4U & 7) != 0 && bytes - 4 != 0) {
              *(undefined1 *)((long)dst + 4) = uVar8;
              puVar9 = (undefined8 *)((long)dst + 5U);
              uVar6 = bytes - 5;
              if (((long)dst + 5U & 7) != 0 && bytes - 5 != 0) {
                *(undefined1 *)((long)dst + 5) = uVar8;
                puVar9 = (undefined8 *)((long)dst + 6U);
                uVar6 = bytes - 6;
                if (((long)dst + 6U & 7) != 0 && bytes - 6 != 0) {
                  *(undefined1 *)((long)dst + 6) = uVar8;
                  puVar9 = (undefined8 *)((long)dst + 7U);
                  uVar6 = bytes - 7;
                  if (((long)dst + 7U & 7) != 0 && bytes - 7 != 0) {
                    *(undefined1 *)((long)dst + 7) = uVar8;
                    bytes = bytes - 8;
                    dst = (undefined8 *)((long)dst + 8);
                    goto LAB_10001e7d;
                  }
                }
              }
            }
          }
        }
      }
    }
    bytes = uVar6;
    uVar5 = CONCAT44(iVar4,iVar4);
    if (0x1f < bytes) {
      uVar6 = bytes - 0x20;
      uVar7 = ((uint)(uVar6 >> 5) & 0x7ffffff) + 1 & 3;
      if (uVar7 == 0) {
        uVar10 = bytes;
        bytes = 0;
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
        uVar10 = bytes - uVar10;
        bytes = uVar10;
      }
      if (0x5f < uVar6) {
        bytes = uVar10;
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
          bytes = bytes - 0x80;
        } while (0x1f < bytes);
      }
    }
    dst = puVar9;
    if (7 < bytes) {
      if (0x17 < bytes - 8) {
        uVar6 = (bytes - 8 >> 3) + 1;
        uVar10 = uVar6 & 0xfffffffffffffffc;
        dst = puVar9 + uVar10;
        bytes = bytes + uVar10 * -8;
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
        if (uVar6 == uVar10) goto LAB_10001fb1;
      }
      do {
        *(undefined8 *)dst = uVar5;
        dst = (void *)((long)dst + 8);
        bytes = bytes - 8;
      } while (7 < bytes);
    }
  }
LAB_10001fb1:
  if (bytes == 0) {
    return pvVar3;
  }
  if (bytes < 4) {
LAB_10001fc0:
    uVar10 = bytes;
    puVar9 = dst;
  }
  else {
    if (bytes < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = bytes & 0xffffffffffffffe0;
      auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
      uVar12 = PF_PART4(auVar13, 0);
      uVar10 = 0;
      do {
        puVar2 = (undefined4 *)((long)dst + uVar10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((long)dst + uVar10 + 0x10);
        *puVar2 = uVar12;
        puVar2[1] = uVar12;
        puVar2[2] = uVar12;
        puVar2[3] = uVar12;
        uVar10 = uVar10 + 0x20;
      } while (uVar6 != uVar10);
      if (bytes == uVar6) {
        return pvVar3;
      }
      if ((bytes & 0x1c) == 0) {
        dst = (void *)((long)dst + uVar6);
        bytes = (ulong)((uint)bytes & 0x1f);
        goto LAB_10001fc0;
      }
    }
    uVar11 = bytes & 0xfffffffffffffffc;
    uVar10 = (ulong)((uint)bytes & 3);
    puVar9 = (undefined8 *)((long)dst + uVar11);
    auVar13 = pshuflw(ZEXT216(CONCAT11(uVar8,uVar8)),ZEXT216(CONCAT11(uVar8,uVar8)),0);
    do {
      *(int *)((long)dst + uVar6) = PF_PART4(auVar13, 0);
      uVar6 = uVar6 + 4;
    } while (uVar11 != uVar6);
    if (bytes == uVar11) {
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
 * Address: 0x10002080
 */

void recovered_10002080(long param_1,ulong param_2)

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
        if (uVar2 == uVar5) goto LAB_100022a5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_100022a5:
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
        goto LAB_10002326;
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
LAB_10002326:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002350
 */

void recovered_10002350(long param_1,ulong param_2)

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
        if (uVar2 == uVar5) goto LAB_10002575;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar1 = uVar1 - 8;
        puVar4 = puVar6;
      } while (7 < uVar1);
    }
  }
LAB_10002575:
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
        goto LAB_100025f6;
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
LAB_100025f6:
  uVar1 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar2 != uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002620
 */

int recovered_10002620(long param_1,long param_2,long param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10002853;
    uVar11 = param_3;
    puVar8 = (ulong *)param_2;
    puVar10 = (ulong *)param_1;
    if ((param_1 & 7U) != 0) {
      bVar1 = *(byte *)param_1;
      bVar5 = *(byte *)param_2;
      if (bVar1 != bVar5) {
LAB_100027b3:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002908:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)(param_1 + 1);
      puVar8 = (ulong *)(param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_100027b3;
        puVar10 = (ulong *)(param_1 + 2);
        puVar8 = (ulong *)(param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_100027b3;
          puVar10 = (ulong *)(param_1 + 3);
          puVar8 = (ulong *)(param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_100027b3;
            puVar10 = (ulong *)(param_1 + 4);
            puVar8 = (ulong *)(param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_100027b3;
              puVar10 = (ulong *)(param_1 + 5);
              puVar8 = (ulong *)(param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_100027b3;
                puVar10 = (ulong *)(param_1 + 6);
                puVar8 = (ulong *)(param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_100027b3;
                  puVar10 = (ulong *)(param_1 + 7);
                  puVar8 = (ulong *)(param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_100027b3;
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
    for (; 7 < (ulong)param_3; param_3 = param_3 - 8) {
      if (*(ulong *)param_1 != *(ulong *)param_2) {
        iVar3 = recovered_10002920((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = (long)(param_2 + 8);
      param_1 = (long)(param_1 + 8);
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10002853:
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002990(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100029b0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100029d0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100029f0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002a20(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002a40(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002a60(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002a80(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10002aa0(char *text)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002ad0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100015b3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100015b3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002b10(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100015f3;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_100015f3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10002b50(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

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

long recovered_10002b70(long param_1)

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
LAB_10002c19:
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
        if (uVar5 == uVar10) goto LAB_10002c19;
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
    goto LAB_10002c19;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - param_1) < 0x20)) {
LAB_10002f38:
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
        goto LAB_10002f38;
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

char * recovered_10002ff0(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

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

long recovered_10003030(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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

char * recovered_10003090(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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

char * recovered_100030f0(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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
#define DAT_100092c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1edU)))
undefined * recovered_10003150(void)

{
  unsigned char frame[64] = {0};

  return &DAT_100092c8;
}

#undef DAT_100092c8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1ae5U)))
undefined ** recovered_10003160(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000b000;
}

#undef PTR_DAT_1000b000

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
 * Address: 0x10003170
 */

/* WARNING: Removing unreachable block (ram,0x10003186) */
/* WARNING: Removing unreachable block (ram,0x100031d3) */
/* WARNING: Removing unreachable block (ram,0x100031de) */
/* WARNING: Removing unreachable block (ram,0x100031e7) */
/* WARNING: Removing unreachable block (ram,0x100031f0) */
/* WARNING: Removing unreachable block (ram,0x100031dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003170(undefined8 *param_1)

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
#undef local_28
#undef uStack_20
#undef uStack_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
double recovered_10003270(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  double dVar3;

  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar1 = param_2;
      if ((-param_2 & 7) != 0) {
        iVar2 = 0;
        do {
          param_1 = param_1 * DAT_10009120;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_10009120 * DAT_10009120 * DAT_10009120 * DAT_10009120 *
                    DAT_10009120 * DAT_10009120 * DAT_10009120 * DAT_10009120;
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

#undef DAT_10009120

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x85U)))
ulong recovered_10003340(double param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  double dVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    return 0;
  }
  dVar2 = (double)(_DAT_100091a0 ^ (ulong)param_1);
  if ((double)(_DAT_100091a0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_10009128 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10009120;
      iVar1 = iVar1 + 1;
    } while (DAT_10009128 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10009120)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_100091a0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_10009120
#undef DAT_10009128
#undef _DAT_100091a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10003410(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
double recovered_10003440(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;

  dVar4 = 0.0;
  if (((double)(int)param_2 == param_2) && (!NAN((double)(int)param_2) && !NAN(param_2))) {
    uVar2 = (uint)param_2;
    if (uVar2 == 0) {
      return DAT_10009128;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_10009128;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_10009128 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_100034c0(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
ulong recovered_100034f0(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_10009128 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
double recovered_10003550(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_10009128) {
      dVar1 = DAT_10009128;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10009120;
  }
  return dVar1;
}

#undef DAT_10009120
#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009130 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#define DAT_10009138 (*(double *)(((uintptr_t)pf_module_state + 0x1dU)))
#define DAT_10009140 (*(double *)(((uintptr_t)pf_module_state + 0x25U)))
#define DAT_10009148 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#define _DAT_10009150 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#define _DAT_10009158 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#define _DAT_100091b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x95U)))
#define _DAT_100091c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa5U)))
#define _DAT_100091d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb5U)))
#define _DAT_100091e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc5U)))
double recovered_10003700(double param_1)

{
  unsigned char frame[64] = {0};

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
    if (DAT_10009138 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_10009120;
        iVar1 = iVar1 + 1;
      } while (DAT_10009138 < param_1);
    }
    for (; param_1 < DAT_10009140; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10009148 + param_1) / (param_1 + DAT_10009128);
    dVar3 = dVar6 * dVar6;
    PF_PART8(auVar7, 0) = dVar3 * dVar6 * dVar3;
    PF_PART8(auVar7, 8) = dVar3 * PF_PART8(auVar7, 0);
    auVar8 = divpd(auVar7,_DAT_100091b0);
    PF_PART8(auVar5, 0) = dVar3 * PF_PART8(auVar7, 0) * dVar3;
    PF_PART8(auVar5, 8) = dVar3 * PF_PART8(auVar5, 0);
    auVar7 = divpd(auVar5,_DAT_100091c0);
    PF_PART8(auVar4, 0) = dVar3 * PF_PART8(auVar5, 0) * dVar3;
    PF_PART8(auVar4, 8) = dVar3 * PF_PART8(auVar4, 0);
    auVar5 = divpd(auVar4,_DAT_100091d0);
    PF_PART8(auVar2, 0) = dVar3 * PF_PART8(auVar4, 0) * dVar3;
    PF_PART8(auVar2, 8) = dVar3 * PF_PART8(auVar2, 0);
    auVar2 = divpd(auVar2,_DAT_100091e0);
    dVar3 = PF_PART8(auVar2, 8) +
            PF_PART8(auVar5, 8) +
            PF_PART8(auVar7, 8) +
            PF_PART8(auVar8, 8) + (dVar6 * dVar3) / _DAT_10009150 + dVar6 + 0.0 + PF_PART8(auVar8, 0) +
            PF_PART8(auVar7, 0) + PF_PART8(auVar5, 0) + PF_PART8(auVar2, 0);
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10009158;
  }
  return DAT_10009130;
}

#undef DAT_10009120
#undef DAT_10009128
#undef DAT_10009130
#undef DAT_10009138
#undef DAT_10009140
#undef DAT_10009148
#undef _DAT_10009150
#undef _DAT_10009158
#undef _DAT_100091b0
#undef _DAT_100091c0
#undef _DAT_100091d0
#undef _DAT_100091e0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100091f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd5U)))
long recovered_10003850(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_100091f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100091f0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#define _DAT_10009180 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#define _DAT_10009200 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe5U)))
double recovered_10003880(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10009160 < param_1; param_1 = param_1 + DAT_10009168) {
  }
  for (; param_1 < DAT_10009170; param_1 = param_1 + DAT_10009178) {
  }
  dVar1 = param_1 * param_1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_10009200);
  return ((dVar1 / _DAT_10009180 + DAT_10009128 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8)) * param_1;
}

#undef DAT_10009128
#undef DAT_10009160
#undef DAT_10009168
#undef DAT_10009170
#undef DAT_10009178
#undef _DAT_10009180
#undef _DAT_10009200

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#define DAT_10009188 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#define _DAT_10009210 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf5U)))
double recovered_10003930(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10009160 < param_1; param_1 = param_1 + DAT_10009168) {
  }
  for (; param_1 < DAT_10009170; param_1 = param_1 + DAT_10009178) {
  }
  dVar1 = param_1 * param_1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_10009210);
  return (DAT_10009188 * dVar1 + DAT_10009128 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8);
}

#undef DAT_10009128
#undef DAT_10009160
#undef DAT_10009168
#undef DAT_10009170
#undef DAT_10009178
#undef DAT_10009188
#undef _DAT_10009210

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x85U)))
double recovered_100039d0(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)(_DAT_100091a0 ^ (ulong)param_1);
  if ((double)(_DAT_100091a0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef _DAT_100091a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009190 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x85U)))
ulong recovered_100039f0(double param_1)

{
  unsigned char frame[64] = {0};

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
  dVar7 = (double)(_DAT_100091a0 ^ (ulong)param_1);
  if ((double)(_DAT_100091a0 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_10009190;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_10009120;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_10009120;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_10009120
#undef DAT_10009190
#undef _DAT_100091a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009190 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
ulong recovered_10003ac0(double param_1)

{
  unsigned char frame[64] = {0};

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
  dVar6 = DAT_10009190;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_10009120;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_10009120;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_10009120
#undef DAT_10009190

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
double recovered_10003b70(ulong param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_10009128;
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

#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x85U)))
double recovered_10003bc0(ulong param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_10009128;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_100091a0);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_10009128;
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

#undef DAT_10009128
#undef _DAT_100091a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10003c50(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define _DAT_100091a0 (*(uint *)(((uintptr_t)pf_module_state + 0x85U)))
#define uRam00000000100091a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89U)))
undefined8 recovered_10003ca0(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam00000000100091a4,
                             SUB84(dVar2,0) ^ _DAT_100091a0));
  }
  iVar1 = 0;
  if (DAT_10009128 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10009120;
      iVar1 = iVar1 + 1;
    } while (DAT_10009128 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10009120)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam00000000100091a4,_DAT_100091a0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_10009120
#undef DAT_10009128
#undef _DAT_100091a0
#undef uRam00000000100091a4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
undefined8 recovered_10003d60(float param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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
          dVar3 = dVar3 * DAT_10009120;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_10009120 * DAT_10009120 * DAT_10009120 * DAT_10009120 * DAT_10009120 *
                  DAT_10009120 * DAT_10009120 * DAT_10009120;
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

#undef DAT_10009120

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009230 (*(float *)(((uintptr_t)pf_module_state + 0x115U)))
float recovered_10003e50(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

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
    return DAT_10009230;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_10009128;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_10009128 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_10009128
#undef DAT_10009230

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003ee0(void)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  ulong uVar2;
  float fVar3;
  undefined1 in_XMM0 [16];
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
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
float recovered_10003f20(float param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10009128 + dVar2) & uVar1);
}

#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
double recovered_10003f80(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_10009128 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
undefined8 recovered_10003fe0(undefined8 param_1)

{
  unsigned char frame[64] = {0};

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_10009128 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  PF_PART4(auVar6, 0) = (float)PF_PART8(auVar5, 0);
  return PF_PART8(auVar6, 0);
}

#undef DAT_10009128

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004050(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10003550((double)param_1);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009138 (*(double *)(((uintptr_t)pf_module_state + 0x1dU)))
#define DAT_10009140 (*(double *)(((uintptr_t)pf_module_state + 0x25U)))
#define DAT_10009148 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#define DAT_10009234 (*(float *)(((uintptr_t)pf_module_state + 0x119U)))
#define _DAT_10009150 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#define _DAT_10009158 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#define _DAT_100091b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x95U)))
#define _DAT_100091c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa5U)))
#define _DAT_100091d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb5U)))
#define _DAT_100091e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc5U)))
#define _DAT_10009238 (*(float *)(((uintptr_t)pf_module_state + 0x11dU)))
float recovered_10004070(float param_1)

{
  unsigned char frame[64] = {0};

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
    if (_DAT_10009238 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_10009120;
        iVar1 = iVar1 + 1;
      } while (DAT_10009138 < dVar2);
    }
    for (; dVar2 < DAT_10009140; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10009148 + dVar2) / (dVar2 + DAT_10009128);
    dVar2 = dVar4 * dVar4;
    PF_PART8(auVar3, 0) = dVar2 * dVar4 * dVar2;
    PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
    auVar6 = divpd(auVar3,_DAT_100091b0);
    PF_PART8(auVar5, 0) = dVar2 * PF_PART8(auVar3, 0) * dVar2;
    PF_PART8(auVar5, 8) = dVar2 * PF_PART8(auVar5, 0);
    auVar3 = divpd(auVar5,_DAT_100091c0);
    PF_PART8(auVar8, 0) = dVar2 * PF_PART8(auVar5, 0) * dVar2;
    PF_PART8(auVar8, 8) = dVar2 * PF_PART8(auVar8, 0);
    auVar5 = divpd(auVar8,_DAT_100091d0);
    PF_PART8(auVar7, 0) = dVar2 * PF_PART8(auVar8, 0) * dVar2;
    PF_PART8(auVar7, 8) = dVar2 * PF_PART8(auVar7, 0);
    auVar8 = divpd(auVar7,_DAT_100091e0);
    dVar2 = PF_PART8(auVar8, 8) +
            PF_PART8(auVar5, 8) +
            PF_PART8(auVar3, 8) +
            PF_PART8(auVar6, 8) + (dVar4 * dVar2) / _DAT_10009150 + dVar4 + 0.0 + PF_PART8(auVar6, 0) +
            PF_PART8(auVar3, 0) + PF_PART8(auVar5, 0) + PF_PART8(auVar8, 0);
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10009158);
  }
  return DAT_10009234;
}

#undef DAT_10009120
#undef DAT_10009128
#undef DAT_10009138
#undef DAT_10009140
#undef DAT_10009148
#undef DAT_10009234
#undef _DAT_10009150
#undef _DAT_10009158
#undef _DAT_100091b0
#undef _DAT_100091c0
#undef _DAT_100091d0
#undef _DAT_100091e0
#undef _DAT_10009238

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100091f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd5U)))
long recovered_100041c0(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_100091f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100091f0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#define _DAT_10009180 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#define _DAT_10009200 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe5U)))
float recovered_100041f0(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_10009160 < dVar1; dVar1 = dVar1 + DAT_10009168) {
  }
  for (; dVar1 < DAT_10009170; dVar1 = dVar1 + DAT_10009178) {
  }
  dVar2 = dVar1 * dVar1;
  PF_PART8(auVar3, 0) = dVar2 * dVar2;
  PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
  auVar3 = divpd(auVar3,_DAT_10009200);
  return (float)(((dVar2 / _DAT_10009180 + DAT_10009128 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8)) * dVar1);
}

#undef DAT_10009128
#undef DAT_10009160
#undef DAT_10009168
#undef DAT_10009170
#undef DAT_10009178
#undef _DAT_10009180
#undef _DAT_10009200

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#define DAT_10009188 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#define _DAT_10009210 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf5U)))
float recovered_100042a0(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_10009160 < dVar1; dVar1 = dVar1 + DAT_10009168) {
  }
  for (; dVar1 < DAT_10009170; dVar1 = dVar1 + DAT_10009178) {
  }
  dVar1 = dVar1 * dVar1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_10009210);
  return (float)((DAT_10009188 * dVar1 + DAT_10009128 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8));
}

#undef DAT_10009128
#undef DAT_10009160
#undef DAT_10009168
#undef DAT_10009170
#undef DAT_10009178
#undef DAT_10009188
#undef _DAT_10009210

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10009220 (*(uint *)(((uintptr_t)pf_module_state + 0x105U)))
#define uRam0000000010009224 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x109U)))
undefined8 recovered_10004340(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_10009220 ^ (uint)fVar1);
  if ((float)(_DAT_10009220 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam0000000010009224 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef _DAT_10009220
#undef uRam0000000010009224

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10004360(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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

long recovered_10004490(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009198 (*(double *)(((uintptr_t)pf_module_state + 0x7dU)))
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x85U)))
double recovered_100045c0(byte *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

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
    dVar11 = dVar11 * DAT_10009198 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_10009128;
      do {
        dVar12 = dVar12 * DAT_10009198 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_10009198;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10002d69;
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
LAB_10002d69:
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
                dVar11 = dVar11 * DAT_10009120;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_10009120 * DAT_10009120 * DAT_10009120 * DAT_10009120 *
                         DAT_10009120 * DAT_10009120 * DAT_10009120 * DAT_10009120;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_100091a0);
  }
  return dVar11;
}

#undef DAT_10009120
#undef DAT_10009128
#undef DAT_10009198
#undef _DAT_100091a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004820(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RSI;
  byte *in_RDI;
  double dVar1;

  dVar1 = recovered_100045c0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000b598
#define DAT_1000b598 (*(double *)(((uintptr_t)pf_module_state + 0x7dU)))
#undef DAT_1000b5a0
#define DAT_1000b5a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85U)))
#undef DAT_1000b70d
#define DAT_1000b70d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f2U)))
#undef _DAT_1000b5a0
#define _DAT_1000b5a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x85U)))
#undef str_1000b714
#define str_1000b714 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_1000b725
#define str_1000b725 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20aU)))
#define local_38 (*(uint * *)(frame + 88))
#define abStack_7a (*(byte (*)[66])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004830(char *param_1,ulong param_2,char *param_3,uint *param_4)

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
  uVar6 = _DAT_1000b5a0;
  dVar5 = DAT_1000b598;
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
  pbVar13 = (byte *)(param_3 + 2);
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
        param_3 = (char *)pbVar13;
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
      abStack_7a[uVar18 + 2] = str_1000b725[uVar22 % 10];
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
  case 'X':
  case 'x':
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
    pcVar20 = str_1000b725;
    if (*param_3 == 0x58) {
      pcVar20 = str_1000b714;
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
  case 'c':
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
  case 'f':
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
        abStack_7a[uVar17 + 2] = str_1000b725[uVar22 % 10];
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
  case 'p':
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
      abStack_7a[uVar17 + 2] = str_1000b725[(uint)uVar22 & 0xf];
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
  case 's':
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
      pbVar13 = &DAT_1000b70d;
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
  case 'u':
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
      abStack_7a[uVar18 + 2] = str_1000b725[uVar12 % 10];
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

#undef DAT_1000b598
#undef DAT_1000b5a0
#undef DAT_1000b70d
#undef _DAT_1000b5a0
#undef str_1000b714
#undef str_1000b725
#undef local_38
#undef abStack_7a

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
#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c0dU)))
#undef DAT_1000d130
#define DAT_1000d130 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1c15U)))
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
        if (DAT_1000d128 == 0) {
          puVar4 = (ulong *)&DAT_1000d128;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1000d130 == (long *)0x0) {
          DAT_1000d130 = plVar2;
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
      if (DAT_1000d128 == 0) {
        puVar1 = &DAT_1000d128;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_1000d130 == (long *)0x0) {
        DAT_1000d130 = (long *)&DAT_02000000;
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
      if (DAT_1000d128 == 0) {
        puVar4 = (ulong *)&DAT_1000d128;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000d130 == (long *)0x0) {
        DAT_1000d130 = plVar2;
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
#undef DAT_1000d128
#undef DAT_1000d130
#undef _DAT_02000000
#undef _DAT_02000008
#undef _DAT_02000010

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c25U)))
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c35U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_238 (*(char (*)[520])(frame + 16))
void recovered_100058f0(long param_1,long param_2)

{
  unsigned char frame[616] = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;

  if (param_2 != 0 && param_1 != 0) {
    lVar6 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar6);
      if (cVar2 == '\b') {
        if (DAT_1000b130 != 0) {
          DAT_1000b130 = DAT_1000b130 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000b130 == 0) {
            uVar5 = 0;
          }
          else {
            recovered_10001030(local_238,&DAT_1000b140,DAT_1000b130);
            uVar5 = DAT_1000b130;
          }
          local_238[uVar5] = '\0';
          iVar3 = Ram0000000000006800;
          if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
             ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
              (uVar4 = Ram0000000000006808, 0x43 < uVar4)))) {
            uVar4 = UINT_00006840;
            if ((code *)(ulong)uVar4 != (code *)0x0) {
              (*(code *)(ulong)uVar4)(local_238);
            }
          }
          DAT_1000b130 = 0;
        }
        else {
          if (DAT_1000b130 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001030(local_238,&DAT_1000b140,DAT_1000b130);
            local_238[DAT_1000b130] = '\0';
            iVar3 = Ram0000000000006800;
            if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
                (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
               (uVar4 = Ram0000000000006808, 0x43 < uVar4)) {
              uVar4 = UINT_00006840;
              if ((code *)(ulong)uVar4 != (code *)0x0) {
                (*(code *)(ulong)uVar4)(local_238);
              }
            }
            DAT_1000b130 = 0;
          }
          pcVar1 = &DAT_1000b140 + DAT_1000b130;
          DAT_1000b130 = DAT_1000b130 + 1;
          *pcVar1 = cVar2;
        }
      }
      lVar6 = lVar6 + 1;
    } while (param_2 != lVar6);
  }
  return;
}

#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef local_238

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c25U)))
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c35U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(char (*)[512])(frame + 16))
void recovered_10005ac0(void)

{
  unsigned char frame[568] = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;

  if (DAT_1000b130 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10001030(local_208,&DAT_1000b140,DAT_1000b130);
    uVar3 = DAT_1000b130;
  }
  local_208[uVar3] = '\0';
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x43 < uVar2)) {
    uVar2 = UINT_00006840;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(local_208);
    }
  }
  DAT_1000b130 = 0;
  return;
}

#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c25U)))
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c35U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(char (*)[512])(frame + 16))
void recovered_10005b60(void)

{
  unsigned char frame[568] = {0};

  int iVar1;
  uint uVar2;

  if (DAT_1000b130 != 0) {
    recovered_10001030(local_208,&DAT_1000b140,DAT_1000b130);
    local_208[DAT_1000b130] = '\0';
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x43 < uVar2))
    {
      uVar2 = UINT_00006840;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(local_208);
      }
    }
    DAT_1000b130 = 0;
  }
  return;
}

#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_148 (*(undefined1 (*)[320])(frame + 16))
void recovered_10005c00(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  uint extraout_EAX = 0;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  recovered_100056b0(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  if (0 < (int)extraout_EAX) {
    recovered_100058f0((long)local_148,(ulong)extraout_EAX);
  }
  return;
}

#undef local_148

#undef DAT_1000b754
#define DAT_1000b754 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef str_1000b739
#define str_1000b739 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

void recovered_10005c60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002aa0(str_1000b739);
  recovered_100058f0(0x1000b739,uVar1);
  uVar1 = recovered_10002aa0(&DAT_1000b754);
  recovered_100058f0(0x1000b754,uVar1);
  return;
}

#undef DAT_1000b754
#undef str_1000b739

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100093e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#define str_100093e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
void recovered_10005ca0(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10002aa0(str_100093e3);
  recovered_100058f0(((uintptr_t)pf_module_state + 0x23cU),uVar1);
  uVar1 = recovered_10002aa0(&DAT_100093e0);
  recovered_100058f0(((uintptr_t)pf_module_state + 0x239U),uVar1);
  return;
}

#undef DAT_100093e0
#undef str_100093e3

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c25U)))
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c35U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006840 (*(uint *)(0x6840U))
#define UINT_00006844 (*(uint *)(0x6844U))
#define local_228 (*(char (*)[512])(frame + 16))
bool recovered_10005ce0(long param_1,long param_2,char *param_3,byte param_4)

{
  unsigned char frame[600] = {0};

  uint uVar1;
  int iVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1000b130 != 0) {
    recovered_10001030(local_228,&DAT_1000b140,DAT_1000b130);
    local_228[DAT_1000b130] = '\0';
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x43 < uVar1))
    {
      uVar1 = UINT_00006840;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        (*(code *)(ulong)uVar1)(local_228);
      }
    }
    DAT_1000b130 = 0;
  }
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x47 < uVar1)))) {
    uVar1 = UINT_00006844;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,(uint)param_2,param_3,(uint)param_4);
      return iVar2 != 0;
    }
  }
  return false;
}

#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef UINT_00006844
#undef local_228

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10005e00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005e10(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10005e20(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 16))
#define str_10009477 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d0U)))
#define str_10009484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#define str_10009492 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
undefined4 * recovered_10005e30(long param_1,long param_2)

{
  unsigned char frame[100] = {0};

  char cVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  ulong uVar8;
  void *dst;
  ulong bytes;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002ad0((byte *)param_1,(byte *)str_10009477);
  if (iVar4 == 0) {
    uVar9 = 1;
LAB_1000420e:
    puVar6 = recovered_10000f40(0x340);
    if (puVar6 == (undefined4 *)0x0) {
      DAT_1000b060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d30(puVar6,0,0x340);
    *puVar6 = uVar9;
    *(bool *)(puVar6 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar6 + 0x125) = iVar4 != 0;
    puVar6[0x48] = 0xffffffff;
    recovered_100056b0(extraout_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                       in_XMM6_Qa,in_XMM7_Qa);
    return puVar6;
  }
  iVar5 = recovered_10002ad0((byte *)param_1,(byte *)str_10009484);
  if (iVar5 == 0) {
    uVar9 = 2;
    goto LAB_1000420e;
  }
  iVar5 = recovered_10002ad0((byte *)param_1,(byte *)str_10009492);
  if (iVar5 == 0) {
    uVar9 = 3;
    goto LAB_1000420e;
  }
  puVar6 = recovered_10000f40(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_1000b060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d30(puVar6,0,0x340);
  *puVar6 = 0;
  pcVar7 = recovered_10002ff0((char *)param_2,'r');
  bVar11 = true;
  bVar10 = true;
  if (pcVar7 == (char *)0x0) {
    pcVar7 = recovered_10002ff0((char *)param_2,'+');
    bVar10 = true;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = recovered_10002ff0((char *)param_2,'a');
      bVar10 = pcVar7 != (char *)0x0;
    }
  }
  *(bool *)(puVar6 + 0x49) = bVar10;
  pcVar7 = recovered_10002ff0((char *)param_2,'w');
  if ((pcVar7 == (char *)0x0) &&
     (pcVar7 = recovered_10002ff0((char *)param_2,'a'), pcVar7 == (char *)0x0)) {
    pcVar7 = recovered_10002ff0((char *)param_2,'+');
    bVar11 = pcVar7 != (char *)0x0;
  }
  *(bool *)((long)puVar6 + 0x125) = bVar11;
  pcVar7 = recovered_10002ff0((char *)param_2,'a');
  *(bool *)((long)puVar6 + 0x126) = pcVar7 != (char *)0x0;
  puVar6[0x48] = 0xffffffff;
  recovered_100056b0(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                     in_XMM6_Qa,in_XMM7_Qa);
  recovered_10001d30(&local_34,0,0xc);
  iVar4 = Ram0000000000006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x37 < uVar2)) {
    uVar2 = UINT_00006834;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar4 = (*(code *)(ulong)uVar2)(param_1,&local_34), iVar4 == 0)) goto LAB_100041de;
    pcVar7 = recovered_10002ff0((char *)param_2,'w');
    if (local_30 != 0 && pcVar7 == (char *)0x0) {
      if (*(char *)((long)puVar6 + 0x125) == '\x01') {
        bytes = (ulong)local_30;
        uVar8 = *(ulong *)(puVar6 + 0x44);
        if (uVar8 < bytes) {
          uVar3 = 0x100;
          if (uVar8 != 0) {
            uVar3 = uVar8;
          }
          do {
            uVar8 = uVar3;
            uVar3 = uVar8 * 2;
          } while (uVar8 < bytes);
          dst = recovered_10000fe0(*(void **)(puVar6 + 0x40),uVar8);
          if (dst == (void *)0x0) {
            DAT_1000b060 = 0xc;
            *(undefined1 *)((long)puVar6 + 0x129) = 1;
            goto LAB_10004298;
          }
          *(void **)(puVar6 + 0x40) = dst;
          *(ulong *)(puVar6 + 0x44) = uVar8;
          *(void **)(puVar6 + 0x3e) = dst;
          bytes = (ulong)local_30;
        }
        else {
          dst = *(void **)(puVar6 + 0x40);
        }
        recovered_10001030(dst,(void *)(ulong)local_34,bytes);
      }
      else {
        *(ulong *)(puVar6 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar6 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar6 + 0x126);
      goto joined_r0x100041f2;
    }
  }
  else {
LAB_100041de:
    if (*(char *)((long)puVar6 + 0x125) == '\0') {
      DAT_1000b060 = 2;
LAB_10004298:
      recovered_10000f90(puVar6);
      return (undefined4 *)0x0;
    }
  }
  cVar1 = *(char *)((long)puVar6 + 0x126);
joined_r0x100041f2:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar6 + 0x46) = *(undefined8 *)(puVar6 + 0x42);
    return puVar6;
  }
  return puVar6;
}

#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef local_30
#undef local_34
#undef str_10009477
#undef str_10009484
#undef str_10009492

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006834 (*(uint *)(0x6834U))
#define UINT_00006838 (*(uint *)(0x6838U))
#define str_10009477 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d0U)))
#define str_10009484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#define str_10009492 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#define uStack_30 (*(ulong *)(frame + 20))
#define uStack_34 (*(uint *)(frame + 16))
undefined4 * recovered_100061c0(long param_1,long param_2,int *param_3)

{
  unsigned char frame[100] = {0};

  char cVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  void *dst;
  undefined4 *puVar8;
  ulong bytes;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (param_3 != (int *)0x0) {
    if ((*param_3 == 0) && (*(char *)((long)param_3 + 0x127) == '\x01')) {
      iVar5 = Ram0000000000006800;
      if ((iVar5 == 0x50414d57) &&
         (((iVar5 = Ram0000000000006804, iVar5 != 0 && (uVar2 = Ram0000000000006808, 0xb < uVar2))
          && (uVar2 = Ram0000000000006808, 0x3b < uVar2)))) {
        uVar2 = UINT_00006838;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
          uStack_30 = 0x1000437a;
          iVar5 = (*(code *)(ulong)uVar2)
                            ((char *)(param_3 + 1),*(void **)(param_3 + 0x3e),param_3[0x42]);
          if (iVar5 != 0) {
            *(undefined1 *)((long)param_3 + 0x127) = 0;
            goto LAB_100043a1;
          }
        }
      }
      DAT_1000b060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_100043a1:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100043b8;
      recovered_10000f90(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100043c0;
    recovered_10000f90(param_3);
    puVar8 = recovered_10005e30(param_1,param_2);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar5 = recovered_10002ad0((byte *)param_1,(byte *)str_10009477);
  if (iVar5 == 0) {
    uVar9 = 1;
LAB_1000420e:
    puVar8 = recovered_10000f40(0x340);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_1000b060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d30(puVar8,0,0x340);
    *puVar8 = uVar9;
    *(bool *)(puVar8 + 0x49) = iVar5 == 0;
    *(bool *)((long)puVar8 + 0x125) = iVar5 != 0;
    puVar8[0x48] = 0xffffffff;
    recovered_100056b0(extraout_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                       in_XMM6_Qa,in_XMM7_Qa);
    return puVar8;
  }
  iVar4 = recovered_10002ad0((byte *)param_1,(byte *)str_10009484);
  if (iVar4 == 0) {
    uVar9 = 2;
    goto LAB_1000420e;
  }
  iVar4 = recovered_10002ad0((byte *)param_1,(byte *)str_10009492);
  if (iVar4 == 0) {
    uVar9 = 3;
    goto LAB_1000420e;
  }
  puVar8 = recovered_10000f40(0x340);
  if (puVar8 == (undefined4 *)0x0) {
    DAT_1000b060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d30(puVar8,0,0x340);
  *puVar8 = 0;
  pcVar6 = recovered_10002ff0((char *)param_2,'r');
  bVar11 = true;
  bVar10 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar10 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10002ff0((char *)param_2,'a');
      bVar10 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar8 + 0x49) = bVar10;
  pcVar6 = recovered_10002ff0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10002ff0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar11 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar8 + 0x125) = bVar11;
  pcVar6 = recovered_10002ff0((char *)param_2,'a');
  *(bool *)((long)puVar8 + 0x126) = pcVar6 != (char *)0x0;
  puVar8[0x48] = 0xffffffff;
  recovered_100056b0(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                     in_XMM6_Qa,in_XMM7_Qa);
  recovered_10001d30(&uStack_34,0,0xc);
  iVar5 = Ram0000000000006800;
  if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x37 < uVar2)))) {
    uVar2 = UINT_00006834;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar5 = (*(code *)(ulong)uVar2)((char *)param_1,&uStack_34), iVar5 == 0)) goto LAB_100041de;
    pcVar6 = recovered_10002ff0((char *)param_2,'w');
    if ((uint)uStack_30 != 0 && pcVar6 == (char *)0x0) {
      if (*(char *)((long)puVar8 + 0x125) == '\x01') {
        bytes = uStack_30 & 0xffffffff;
        uVar7 = *(ulong *)(puVar8 + 0x44);
        if (uVar7 < bytes) {
          uVar3 = 0x100;
          if (uVar7 != 0) {
            uVar3 = uVar7;
          }
          do {
            uVar7 = uVar3;
            uVar3 = uVar7 * 2;
          } while (uVar7 < bytes);
          dst = recovered_10000fe0(*(void **)(puVar8 + 0x40),uVar7);
          if (dst == (void *)0x0) {
            DAT_1000b060 = 0xc;
            *(undefined1 *)((long)puVar8 + 0x129) = 1;
            goto LAB_10004298;
          }
          *(void **)(puVar8 + 0x40) = dst;
          *(ulong *)(puVar8 + 0x44) = uVar7;
          *(void **)(puVar8 + 0x3e) = dst;
          bytes = uStack_30 & 0xffffffff;
        }
        else {
          dst = *(void **)(puVar8 + 0x40);
        }
        recovered_10001030(dst,(void *)(ulong)uStack_34,bytes);
      }
      else {
        *(ulong *)(puVar8 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar8 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar8 + 0x126);
      goto joined_r0x100041f2;
    }
  }
  else {
LAB_100041de:
    if (*(char *)((long)puVar8 + 0x125) == '\0') {
      DAT_1000b060 = 2;
LAB_10004298:
      recovered_10000f90(puVar8);
      return (undefined4 *)0x0;
    }
  }
  cVar1 = *(char *)((long)puVar8 + 0x126);
joined_r0x100041f2:
  if (cVar1 == '\x01') {
    *(undefined8 *)(puVar8 + 0x46) = *(undefined8 *)(puVar8 + 0x42);
    return puVar8;
  }
  return puVar8;
}

#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef str_10009477
#undef str_10009484
#undef str_10009492
#undef uStack_30
#undef uStack_34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006838 (*(uint *)(0x6838U))
undefined8 recovered_100062b0(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
    iVar2 = Ram0000000000006800;
    if ((iVar2 == 0x50414d57) &&
       (((iVar2 = Ram0000000000006804, iVar2 != 0 && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
        (uVar1 = Ram0000000000006808, 0x3b < uVar1)))) {
      uVar1 = UINT_00006838;
      if (((code *)(ulong)uVar1 != (code *)0x0) &&
         (iVar2 = (*(code *)(ulong)uVar1)
                            ((char *)(param_1 + 1),*(void **)(param_1 + 0x3e),param_1[0x42]),
         iVar2 != 0)) {
        *(undefined1 *)((long)param_1 + 0x127) = 0;
        goto LAB_10004482;
      }
    }
    DAT_1000b060 = 5;
    *(undefined1 *)((long)param_1 + 0x129) = 1;
    uVar3 = 0xffffffff;
  }
LAB_10004482:
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10000f90(*(void **)(param_1 + 0x40));
  }
  recovered_10000f90(param_1);
  return uVar3;
}

#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006380
 */

long recovered_10006380(long param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint uVar4;
  ulong bytes;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

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
      lVar5 = 0;
      do {
        lVar7 = 0;
        do {
          uVar4 = recovered_100064c0(param_4);
          if (uVar4 == 0xffffffff) {
            return lVar5;
          }
          *(char *)(param_1 + lVar7) = (char)uVar4;
          lVar7 = lVar7 + 1;
        } while (param_2 != lVar7);
        lVar5 = lVar5 + 1;
        param_1 = param_1 + param_2;
      } while (lVar5 != param_3);
      return param_3;
    }
    uVar1 = *(ulong *)(param_4 + 0x46);
    uVar8 = *(ulong *)(param_4 + 0x42) - uVar1;
    if (uVar1 <= *(ulong *)(param_4 + 0x42) && uVar8 != 0) {
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = param_2;
      PF_PART8(auVar3, 8) = 0;
      PF_PART8(auVar3, 0) = param_3;
      uVar6 = 0xffffffffffffffff;
      if (SUB168(auVar2 * auVar3,8) == 0) {
        uVar6 = param_3 * param_2;
      }
      bytes = uVar6;
      if (uVar8 < uVar6) {
        bytes = uVar8;
      }
      recovered_10001030((void *)param_1,(void *)(uVar1 + *(long *)(param_4 + 0x3e)),bytes);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + bytes;
      if (uVar8 < uVar6) {
        *(undefined1 *)(param_4 + 0x4a) = 1;
      }
      if ((bytes | param_2) >> 0x20 == 0) {
        return (bytes & 0xffffffff) / (param_2 & 0xffffffffU);
      }
      return bytes / (ulong)param_2;
    }
    *(undefined1 *)(param_4 + 0x4a) = 1;
  }
  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c25U)))
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c35U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006840 (*(uint *)(0x6840U))
#define UINT_00006844 (*(uint *)(0x6844U))
#define local_218 (*(char (*)[512])(frame + 16))
uint recovered_100064c0(int *param_1)

{
  unsigned char frame[584] = {0};

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
LAB_1000459a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_1000b130 != 0) {
      recovered_10001030(local_218,&DAT_1000b140,DAT_1000b130);
      local_218[DAT_1000b130] = '\0';
      iVar2 = Ram0000000000006800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
          (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x43 < uVar1)
         ) {
        uVar1 = UINT_00006840;
        if ((code *)(ulong)uVar1 != (code *)0x0) {
          (*(code *)(ulong)uVar1)(local_218);
        }
      }
      DAT_1000b130 = 0;
    }
    iVar2 = Ram0000000000006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
       ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x47 < uVar1))))
    {
      uVar1 = UINT_00006844;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_100092cc,0);
        if (iVar2 != 0) {
          uVar3 = recovered_10002aa0((char *)((long)param_1 + 0x12a));
          *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
          *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
          *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
          uVar3 = 0;
          goto LAB_1000459a;
        }
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

#undef DAT_100092cc
#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef UINT_00006844
#undef local_218

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
long recovered_100066b0(long param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

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
    recovered_100058f0(param_1,uVar5);
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
      pvVar3 = recovered_10000fe0(*(void **)(param_4 + 0x40),uVar2);
      if (pvVar3 == (void *)0x0) {
        DAT_1000b060 = 0xc;
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
      recovered_10001d30((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001030((void *)(uVar4 + *(long *)(param_4 + 0x40)),(void *)param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_1000b060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
undefined8 recovered_10006840(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000b060 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_100048ce;
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
LAB_100048ce:
  DAT_1000b060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000b060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
undefined8 recovered_100068c0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_1000b060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000b060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006838 (*(uint *)(0x6838U))
undefined8 recovered_100068f0(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (*(char *)((long)param_1 + 0x127) != '\x01'))
  {
    return 0;
  }
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x3b < uVar1)))) {
    uVar1 = UINT_00006838;
    if (((code *)(ulong)uVar1 != (code *)0x0) &&
       (iVar2 = (*(code *)(ulong)uVar1)
                          ((char *)(param_1 + 1),*(void **)(param_1 + 0x3e),param_1[0x42]),
       iVar2 != 0)) {
      *(undefined1 *)((long)param_1 + 0x127) = 0;
      return 0;
    }
  }
  DAT_1000b060 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100069a0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100069c0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100069e0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10006a00(uint param_1,long param_2)

{
  unsigned char frame[64] = {0};

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
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_0000683c (*(uint *)(0x683cU))
undefined8 recovered_10006a30(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0) {
    uVar3 = 0x16;
  }
  else {
    iVar2 = Ram0000000000006800;
    uVar3 = 5;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x3f < uVar1))
    {
      uVar1 = UINT_0000683c;
      if (((code *)(ulong)uVar1 != (code *)0x0) &&
         (iVar2 = (*(code *)(ulong)uVar1)((char *)param_1), iVar2 != 0)) {
        return 0;
      }
    }
  }
  DAT_1000b060 = uVar3;
  return 0xffffffff;
}

#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000683c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b45U)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006834 (*(uint *)(0x6834U))
#define UINT_00006838 (*(uint *)(0x6838U))
#define UINT_0000683c (*(uint *)(0x683cU))
#define local_28 (*(uint *)(frame + 20))
#define local_2c (*(uint *)(frame + 16))
undefined8 recovered_10006ab0(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b060 = 0x16;
    return 0xffffffff;
  }
  recovered_10001d30(&local_2c,0,0xc);
  iVar2 = Ram0000000000006800;
  uVar3 = 2;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x37 < uVar1)) {
    uVar1 = UINT_00006834;
    if (((code *)(ulong)uVar1 != (code *)0x0) &&
       (iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,&local_2c), iVar2 != 0)) {
      iVar2 = Ram0000000000006800;
      uVar3 = 5;
      if (((iVar2 == 0x50414d57) &&
          ((iVar2 = Ram0000000000006804, iVar2 != 0 && (uVar1 = Ram0000000000006808, 0xb < uVar1))))
         && (uVar1 = Ram0000000000006808, 0x3b < uVar1)) {
        uVar1 = UINT_00006838;
        if (((((code *)(ulong)uVar1 != (code *)0x0) &&
             (iVar2 = (*(code *)(ulong)uVar1)((char *)param_2,(void *)(ulong)local_2c,local_28),
             iVar2 != 0)) && (iVar2 = Ram0000000000006800, iVar2 == 0x50414d57)) &&
           (((iVar2 = Ram0000000000006804, iVar2 != 0 && (uVar1 = Ram0000000000006808, 0xb < uVar1))
            && (uVar1 = Ram0000000000006808, 0x3f < uVar1)))) {
          uVar1 = UINT_0000683c;
          if (((code *)(ulong)uVar1 != (code *)0x0) &&
             (iVar2 = (*(code *)(ulong)uVar1)((char *)param_1), iVar2 != 0)) {
            return 0;
          }
        }
      }
    }
  }
  DAT_1000b060 = uVar3;
  return 0xffffffff;
}

#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_0000683c
#undef local_28
#undef local_2c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 16))
ulong recovered_10006c20(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[100] = {0};

  uint uVar1;
  int iVar2;
  void *dst;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10001d30(&local_34,0,0xc);
    iVar2 = Ram0000000000006800;
    if (iVar2 != 0x50414d57) goto LAB_10004d5f;
    iVar2 = Ram0000000000006804;
    if (((iVar2 != 0) && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
       (uVar1 = Ram0000000000006808, 0x37 < uVar1)) {
      uVar1 = UINT_00006834;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,&local_34);
        if (iVar2 != 0) {
          dst = recovered_10000f40((ulong)(local_30 + (local_30 == 0)));
          if (dst != (void *)0x0) {
            if ((ulong)local_30 == 0) {
              uVar3 = 0;
            }
            else {
              recovered_10001030(dst,(void *)(ulong)local_34,(ulong)local_30);
              uVar3 = (ulong)local_30;
            }
            *param_2 = (long)dst;
            *param_3 = uVar3;
            uVar3 = CONCAT71((int7)((ulong)dst >> 8),1);
            goto LAB_10004d5f;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_10004d5f:
  return uVar3 & 0xffffffff;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef local_30
#undef local_34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006838 (*(uint *)(0x6838U))
bool recovered_10006d00(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  if ((((param_1 != 0) && (param_2 != 0 || param_3 == 0)) &&
      (iVar2 = Ram0000000000006800, iVar2 == 0x50414d57)) &&
     (((iVar2 = Ram0000000000006804, iVar2 != 0 && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
      (uVar1 = Ram0000000000006808, 0x3b < uVar1)))) {
    uVar1 = UINT_00006838;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,(void *)param_2,(uint)param_3);
      return iVar2 != 0;
    }
  }
  return false;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006d70(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006d80(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006d90(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006da0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006db0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10006dc0(char *param_1,char param_2,long param_3)

{
  unsigned char frame[64] = {0};

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

int recovered_10006df0(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

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
#define DAT_10009406 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25fU)))
#define str_10009409 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#define str_10009416 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#define str_10009420 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x279U)))
#define str_10009434 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28dU)))
#define str_10009442 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#define str_10009454 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#define str_10009460 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b9U)))
#define str_10009471 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2caU)))
char * recovered_10006e30(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10009406;
  default:
    return str_10009471;
  case 2:
    return str_10009409;
  case 5:
    return str_10009416;
  case 9:
    return str_10009420;
  case 0xc:
    return str_10009434;
  case 0xd:
    return str_10009442;
  case 0x11:
    return str_10009454;
  case 0x16:
    return str_10009460;
  }
}

#undef DAT_10009406
#undef str_10009409
#undef str_10009416
#undef str_10009420
#undef str_10009434
#undef str_10009442
#undef str_10009454
#undef str_10009460
#undef str_10009471

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006f00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006f10(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e35U)))
void recovered_10006f20(void)

{
  unsigned char frame[64] = {0};

  DAT_1000b340 = DAT_1000b340 + 1;
  return;
}

#undef DAT_1000b340

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006f40(long param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10004fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
undefined8 recovered_10006f50(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006f80(long param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x1000502a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(code **)(param_1 + 0x38));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10005081 (*(uint8_t *)(0x10005081U))
#define DAT_100094b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x309U)))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_50 (*(undefined * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined * *)(frame + 56))
#define local_68 (*(code * *)(frame + 48))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_88 (*(undefined8 *)(frame + 16))
void recovered_10006fb0(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_100094b0;
  local_50 = &DAT_10005081;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10005081
#undef DAT_100094b0
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007030(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007040(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007050(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e3dU)))
long recovered_10007050(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000b348;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000b348 = param_1;
  lVar1 = recovered_10007470(param_1);
  return lVar1;
}

#undef DAT_1000b348

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10007080(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return (long)pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100070b0(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return (long)pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100094c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x319U)))
#define LAB_100051cd (*(uint8_t *)(0x100051cdU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined * *)(frame + 56))
#define local_68 (*(code * *)(frame + 48))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_88 (*(undefined8 *)(frame + 16))
void recovered_100070e0(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_100094c0;
  local_50 = &LAB_100051cd;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_100094c0
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
#define DAT_100094d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329U)))
#define LAB_1000526d (*(uint8_t *)(0x1000526dU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined * *)(frame + 56))
#define local_68 (*(code * *)(frame + 48))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_88 (*(undefined8 *)(frame + 16))
void recovered_10007180(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_100094d0;
  local_50 = &LAB_1000526d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_100094d0
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
#define DAT_100094e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x339U)))
#define LAB_1000530d (*(uint8_t *)(0x1000530dU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined * *)(frame + 56))
#define local_68 (*(code * *)(frame + 48))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_88 (*(undefined8 *)(frame + 16))
void recovered_10007220(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_100094e0;
  local_50 = &LAB_1000530d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_100094e0
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
#define DAT_100094f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x349U)))
#define LAB_100053ad (*(uint8_t *)(0x100053adU))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined * *)(frame + 56))
#define local_68 (*(code * *)(frame + 48))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_88 (*(undefined8 *)(frame + 16))
void recovered_100072c0(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_100094f0;
  local_50 = &LAB_100053ad;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_100094f0
#undef LAB_100053ad
#undef auStack_40
#undef local_48
#undef local_50
#undef local_58
#undef local_60
#undef local_68
#undef local_80
#undef local_88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007360(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10007370(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007380(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007390(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100073a0(long param_1)

{
  unsigned char frame[64] = {0};

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
LAB_1000548c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_100054bf;
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
      if (size == uVar3) goto LAB_100054c4;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000548c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_100054bf:
    } while (size != uVar3);
  }
LAB_100054c4:
  return (long)pvVar2 + 0x30;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007450(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000f90((void *)(param_1 + -0x30));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10007470(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b348 (*(void * *)(((uintptr_t)pf_module_state + 0x1e3dU)))
void recovered_10007480(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_1000b348;
  if (DAT_1000b348 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000b348 + 0x10);
    DAT_1000b348 = *(void **)((long)DAT_1000b348 + 0x10);
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

#undef DAT_1000b348

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100074d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007500((undefined8 *)(param_1 + -0x30));
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e3dU)))
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e45U)))
#define cStack_36 (*(char *)(frame + 18))
#define local_30 (*(undefined4 *)(frame + 24))
#define local_38 (*(undefined2 *)(frame + 16))
#define uStack_34 (*(undefined4 *)(frame + 20))
#define uStack_35 (*(undefined1 *)(frame + 19))
void recovered_10007500(undefined8 *param_1)

{
  unsigned char frame[104] = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;

  if (DAT_1000b350 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1000b350;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      uVar3 = recovered_10007fa0((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_10007650(param_1);
        puVar2 = DAT_1000b348;
        if (DAT_1000b348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006fb0();
        }
        *(undefined1 *)(DAT_1000b348 + 5) = 1;
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

#undef DAT_1000b348
#undef DAT_1000b350
#undef cStack_36
#undef local_30
#undef local_38
#undef uStack_34
#undef uStack_35

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e3dU)))
void recovered_10007580(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000b348;
  if (DAT_1000b348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006fb0();
  }
  *(undefined1 *)(DAT_1000b348 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007500(puVar1);
}

#undef DAT_1000b348

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e45U)))
void recovered_100075b0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000b350;
  DAT_1000b350 = param_1;
  return;
}

#undef DAT_1000b350

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e45U)))
void recovered_100075d0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000b350;
  if (DAT_1000b350 == param_1) {
    puVar2 = &DAT_1000b350;
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

#undef DAT_1000b350

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007610(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;

                    /* WARNING: Subroutine does not return */
  recovered_10007500(in_RDI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007620(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e45U)))
#define uStack_38 (*(undefined4 *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 16))
void recovered_10007630(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  byte *in_RSI;
  undefined8 *puVar3;

  if (DAT_1000b350 != (undefined8 *)0x0) {
    DAT_1000b350 = (undefined8 *)*DAT_1000b350;
  }
  recovered_10007650(param_1);
  if (DAT_1000b350 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1000b350;
      if (DAT_1000b350 == puVar1) {
        DAT_1000b350[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_1000575c:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10006f40((long)puVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007630(puVar3);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007fa0((long)DAT_1000b350,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_1000575c;
      }
      DAT_1000b350 = (undefined8 *)*puVar3;
    } while (DAT_1000b350 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000b350
#undef uStack_38
#undef uStack_40

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e45U)))
#define local_30 (*(undefined4 *)(frame + 24))
#define local_38 (*(undefined8 *)(frame + 16))
void recovered_10007650(undefined8 *param_1)

{
  unsigned char frame[104] = {0};

  long *plVar1;
  undefined4 uVar2;
  byte *in_RSI;
  long *plVar3;

  if (DAT_1000b350 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_1000b350;
      if (DAT_1000b350 == plVar1) {
        DAT_1000b350[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_1000575c:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10006f40((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007630(plVar3);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007fa0((long)DAT_1000b350,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_1000575c;
      }
      DAT_1000b350 = (long *)*plVar3;
    } while (DAT_1000b350 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000b350
#undef local_30
#undef local_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100076f0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;

                    /* WARNING: Subroutine does not return */
  recovered_10007630(in_RDI);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007700(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007710(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ba5U)))
long recovered_10007720(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

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
        if (lVar3 == lVar4) goto LAB_10005864;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10005864;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_1000b0c0) goto LAB_1000586c;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_10005864:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_1000586c:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000b0c0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007800(void)

{
  unsigned char frame[64] = {0};

  recovered_10000f10();
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007810(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007820(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007840(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007870(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007890(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100078c0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
byte recovered_100078e0(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007920(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1000b520
#define DAT_1000b520 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#undef DAT_1000b528
#define DAT_1000b528 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000b588
#define DAT_1000b588 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_1000b640
#define DAT_1000b640 (*(double *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef DAT_1000b650
#define DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x135U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(double *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x12dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10007950(double param_1)

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
  if (_DAT_1000b648 < param_1) {
    return DAT_1000b640;
  }
  dVar4 = 0.0;
  if (DAT_1000b650 <= param_1) {
    uVar1 = 0;
    if (DAT_1000b520 < param_1) {
      uVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000b520;
        uVar1 = uVar1 + 1;
      } while (DAT_1000b520 < param_1);
    }
    for (; param_1 < DAT_1000b588; param_1 = param_1 * DAT_1000b520) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000b528;
    dVar5 = DAT_1000b528;
    dVar6 = DAT_1000b528;
    do {
      dVar7 = (param_1 / dVar5) * dVar6;
      dVar9 = (param_1 / (double)(iVar2 + -2)) * dVar7;
      dVar8 = (param_1 / (double)(iVar2 + -1)) * dVar9;
      dVar6 = (param_1 / (double)iVar2) * dVar8;
      dVar4 = dVar4 + dVar7 + dVar9 + dVar8 + dVar6;
      dVar5 = dVar5 + DAT_1000b658;
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

#undef DAT_1000b520
#undef DAT_1000b528
#undef DAT_1000b588
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef _DAT_1000b648

#undef DAT_1000b520
#define DAT_1000b520 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#undef DAT_1000b528
#define DAT_1000b528 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000b588
#define DAT_1000b588 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_1000b640
#define DAT_1000b640 (*(double *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef DAT_1000b650
#define DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x135U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(double *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef DAT_1000b660
#define DAT_1000b660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x145U)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef _DAT_1000b660
#define _DAT_1000b660 (*(float *)(((uintptr_t)pf_module_state + 0x145U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10007ac0(float param_1)

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
  if (_DAT_1000b648 < dVar6) {
    return (float)DAT_1000b640;
  }
  dVar5 = 0.0;
  if (DAT_1000b650 <= dVar6) {
    uVar1 = 0;
    if (_DAT_1000b660 < param_1) {
      uVar1 = 0;
      do {
        dVar6 = dVar6 * DAT_1000b520;
        uVar1 = uVar1 + 1;
      } while (DAT_1000b520 < dVar6);
    }
    for (; dVar6 < DAT_1000b588; dVar6 = dVar6 * DAT_1000b520) {
      uVar1 = uVar1 + 1;
    }
    iVar2 = 4;
    dVar4 = DAT_1000b528;
    dVar5 = DAT_1000b528;
    dVar7 = DAT_1000b528;
    do {
      dVar8 = (dVar6 / dVar4) * dVar7;
      dVar10 = (dVar6 / (double)(iVar2 + -2)) * dVar8;
      dVar9 = (dVar6 / (double)(iVar2 + -1)) * dVar10;
      dVar7 = (dVar6 / (double)iVar2) * dVar9;
      dVar5 = dVar5 + dVar8 + dVar10 + dVar9 + dVar7;
      dVar4 = dVar4 + DAT_1000b658;
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

#undef DAT_1000b520
#undef DAT_1000b528
#undef DAT_1000b588
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef DAT_1000b660
#undef _DAT_1000b648
#undef _DAT_1000b660

#undef DAT_1000b520
#define DAT_1000b520 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#undef DAT_1000b528
#define DAT_1000b528 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000b588
#define DAT_1000b588 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_1000b640
#define DAT_1000b640 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef DAT_1000b650
#define DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x135U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x12dU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007c50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;

  dVar4 = (double)in_stack_00000008;
  if ((dVar4 <= _DAT_1000b648) && (DAT_1000b650 <= dVar4)) {
    uVar1 = 0;
    if (DAT_1000b520 < dVar4) {
      uVar1 = 0;
      do {
        dVar4 = dVar4 * DAT_1000b520;
        uVar1 = uVar1 + 1;
      } while (DAT_1000b520 < dVar4);
    }
    for (; dVar4 < DAT_1000b588; dVar4 = dVar4 * DAT_1000b520) {
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

#undef DAT_1000b520
#undef DAT_1000b528
#undef DAT_1000b588
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef _DAT_1000b648
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

double recovered_10007de0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)param_1 - (double)param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x5U)))
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define DAT_10009148 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#define DAT_10009188 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
double recovered_10007e00(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)recovered_100034c0(param_1);
  if (DAT_10009120 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_10009128;
  }
  else if (param_1 - dVar1 <= DAT_10009188) {
    dVar1 = dVar1 + DAT_10009148;
  }
  return dVar1;
}

#undef DAT_10009120
#undef DAT_10009128
#undef DAT_10009148
#undef DAT_10009188

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10007e50(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
      goto joined_r0x10005a7d;
    }
  }
  bVar7 = false;
joined_r0x10005a7d:
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

void recovered_10007f90(void)

{
  unsigned char frame[64] = {0};

  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  recovered_10007e50(in_RDI,in_RSI,in_EDX);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009248 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155U)))
#define DAT_1000b0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ba5U)))
#define local_31 (*(char *)(frame + 31))
#define local_40 (*(byte * *)(frame + 16))
undefined8 recovered_10007fa0(long param_1,byte *param_2,undefined2 *param_3)

{
  unsigned char frame[112] = {0};

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
          goto LAB_10005d40;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_10005d40:
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
LAB_10005eeb:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_10009248 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_10008340((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_10005eeb;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_10005eeb;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_10005eeb;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_1000b0c0) goto LAB_10005ec8;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_10005eeb;
  }
LAB_10005ec8:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_10005d40;
}

#undef DAT_10009248
#undef DAT_1000b0c0
#undef local_31
#undef local_40

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte * recovered_10008340(uint param_1,long *param_2)

{
  unsigned char frame[64] = {0};

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
    goto LAB_10006039;
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
    goto LAB_10006035;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10005f89;
  default:
    goto switchD_10005f41_caseD_5;
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
LAB_10006035:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_10006039:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10005f89:
    puVar6 = puVar1 + 1;
    goto LAB_10006039;
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
switchD_10005f41_caseD_5:
  return pbVar3;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a0
#define DAT_000068a0 (*(uint8_t *)(0x68a0U))
#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef DAT_1000b70c
#define DAT_1000b70c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_1000d368
#define DAT_1000d368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a0
#define _DAT_000068a0 (*(uint *)(0x68a0U))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(uint *)(0x68b4U))
#undef str_1000b814
#define str_1000b814 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100084d0(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined1 *puVar7;
  char *pcVar8;

  plVar3 = (long *)recovered_10007080(0x2e0);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = -0x90a000000000000;
  *(undefined1 *)(plVar3 + 6) = 0xf6;
  *(undefined8 *)((long)plVar3 + 0x34) = 0;
  *(undefined4 *)((long)plVar3 + 0x3c) = 0;
  *(undefined2 *)(plVar3 + 8) = 0;
  *(undefined1 *)((long)plVar3 + 0x42) = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  pcVar8 = str_1000b814;
  if (param_1 != (char *)0x0) {
    pcVar8 = param_1;
  }
  recovered_10002350((long)(plVar3 + 0x18),0x220);
  uVar5 = 0xffffffffffffffff;
  do {
    lVar1 = uVar5 + 1;
    uVar5 = uVar5 + 1;
  } while (pcVar8[lVar1] != '\0');
  recovered_1000ac20(plVar3,(long)pcVar8,uVar5);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)((long)plVar3 + 0x1c) = param_2;
  uVar4 = 1;
  if (1 < (int)param_3) {
    uVar4 = param_3;
  }
  *(uint *)(plVar3 + 4) = uVar4;
  *(uint *)(plVar3 + 7) = param_2 >> 1;
  *(uint *)((long)plVar3 + 0x3c) = uVar4 >> 1;
  puVar7 = &DAT_1000b70c;
  if ((undefined1 *)*plVar3 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)*plVar3;
  }
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xa3 < _DAT_00006808 && ((code *)(ulong)_DAT_000068a0 != (code *)0x0)))) {
    iVar2 = (*(code *)(ulong)_DAT_000068a0)(puVar7,*(uint *)((char *)plVar3+0x1c),*(uint *)((char *)plVar3+0x20));
    *(int *)(plVar3 + 3) = iVar2;
    if (iVar2 != 0) {
      if (plVar3[10] == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)plVar3[9];
      }
      DAT_1000d368 = plVar3;
      recovered_10008b70(plVar3,pvVar6,*(uint *)(plVar3 + 0xc),*(uint *)((long)plVar3 + 100));
      if ((int)plVar3[3] == 0) {
        return plVar3;
      }
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
          ((0xb < _DAT_00006808 &&
           (((0xb7 < _DAT_00006808 && ((code *)(ulong)_DAT_000068b4 != (code *)0x0)) &&
            (iVar2 = (*(code *)(ulong)_DAT_000068b4)((int)plVar3[3],plVar3 + 0xd), iVar2 != 0))))))
         && (*(undefined8 *)((long)plVar3 + 0x24) = *(undefined8 *)((long)plVar3 + 0x94),
            (*(byte *)(plVar3 + 0x12) & 1) == 0)) {
        return plVar3;
      }
      *(undefined1 *)((long)plVar3 + 0x2c) = 1;
      return plVar3;
    }
  }
  else {
    *(undefined4 *)(plVar3 + 3) = 0;
  }
  plVar3[10] = 0;
  recovered_100070e0((void *)plVar3[9]);
  recovered_100070e0((void *)*plVar3);
  recovered_100070e0(plVar3);
  return (long *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a0
#undef DAT_000068b4
#undef DAT_1000b70c
#undef DAT_1000d368
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a0
#undef _DAT_000068b4
#undef str_1000b814

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_000068b0 (*(uint *)(0x68b0U))
void recovered_10008700(long param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    if (*(uint *)(param_1 + 0x18) != 0) {
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xb3 < uVar2)
         ) {
        uVar2 = UINT_000068b0;
        if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100067c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(ulong)uVar2)
                    (*(uint *)(param_1 + 0x18),*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x28),1,1
                    );
          return;
        }
      }
    }
  }
  return;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef DAT_1000d368
#define DAT_1000d368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(uint *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008770(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (DAT_1000d368 == param_1) {
    DAT_1000d368 = (undefined8 *)0x0;
  }
  if ((((*(int *)(param_1 + 3) != 0) && (_DAT_00006800 == 0x50414d57)) && (_DAT_00006804 != 0)) &&
     (((0xb < _DAT_00006808 && (0xab < _DAT_00006808)) &&
      ((code *)(ulong)_DAT_000068a8 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_000068a8)(*(int *)(param_1 + 3));
  }
  param_1[10] = 0;
  recovered_100070e0((void *)param_1[9]);
  recovered_100070e0((void *)*param_1);
  recovered_100070e0(param_1);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a8
#undef DAT_1000d368
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#define DAT_10009508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359U)))
#define LAB_1000697c (*(uint8_t *)(0x1000697cU))
#define lStack_40 (*(long *)(frame + 120))
#define local_38 (*(undefined8 *)(frame + 128))
#define local_48 (*(undefined1 * *)(frame + 112))
#define local_50 (*(void * *)(frame + 104))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 64))
#define local_80 (*(undefined * *)(frame + 56))
#define local_88 (*(code * *)(frame + 48))
#define local_a0 (*(undefined4 *)(frame + 24))
#define local_a8 (*(undefined8 *)(frame + 16))
long recovered_10008820(undefined8 *param_1)

{
  unsigned char frame[216] = {0};

  void *pvVar1;
  undefined1 *puVar2;
  long lVar3;

  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 184) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_48 = (undefined1 *)0x0;
  lStack_40 = 0;
  local_38 = 0;
  local_88 = recovered_10007030;
  local_80 = &DAT_10009508;
  local_70 = &LAB_1000697c;
  recovered_100075b0(&local_a8);
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = 1;
  }
  else {
    puVar2 = &DAT_100092cc;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_a0 = 0xffffffff;
    recovered_1000ac20((long *)&local_48,(long)puVar2,param_1[1]);
    lVar3 = lStack_40 + 1;
  }
  local_a0 = 1;
  local_50 = (void *)recovered_100070b0(lVar3);
  puVar2 = &DAT_100092cc;
  if (local_48 != (undefined1 *)0x0) {
    puVar2 = local_48;
  }
  local_a0 = 2;
  recovered_10001030(local_50,puVar2,lStack_40 + 1);
  pvVar1 = local_50;
  recovered_100070e0(local_48);
  recovered_100075d0(&local_a8);
  return (long)pvVar1;
}

#undef DAT_100092cc
#undef DAT_10009508
#undef LAB_1000697c
#undef lStack_40
#undef local_38
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

void recovered_10008970(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089a0
 */

void recovered_100089a0(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar3 = 1;
  if (1 < param_3) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = iVar3;
  iVar4 = *(int *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar5 = param_2 + -1;
  if (iVar4 <= param_2 + -1) {
    iVar5 = iVar4;
  }
  pvVar2 = (void *)0x0;
  if (iVar4 < 0) {
    iVar5 = 0;
  }
  iVar4 = iVar3 + -1;
  if (iVar1 <= iVar3 + -1) {
    iVar4 = iVar1;
  }
  if (iVar1 < 0) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar5;
  *(int *)(param_1 + 0x3c) = iVar4;
  if (*(long *)(param_1 + 0x50) != 0) {
    pvVar2 = *(void **)(param_1 + 0x48);
  }
  recovered_10008b70((undefined8 *)param_1,pvVar2,*(uint *)(param_1 + 0x60),*(uint *)(param_1 + 100)
                    );
  return;
}


#undef DAT_1000b70c
#define DAT_1000b70c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a10
 */

void recovered_10008a10(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  void *pvVar4;

  if (param_1 == (long *)0x0) {
    return;
  }
  puVar3 = &DAT_1000b70c;
  if (param_2 != (undefined1 *)0x0) {
    puVar3 = param_2;
  }
  uVar2 = 0xffffffffffffffff;
  do {
    lVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (puVar3[lVar1] != '\0');
  recovered_1000ac20(param_1,(long)puVar3,uVar2);
  if (param_1[10] == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)param_1[9];
  }
  recovered_10008b70(param_1,pvVar4,*(uint *)(param_1 + 0xc),*(uint *)((long)param_1 + 100));
  return;
}

#undef DAT_1000b70c

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008a80(long param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if ((((param_2 != (int *)0x0 && param_1 != 0) && (*(long *)(param_2 + 2) != 0)) && (0 < *param_2))
     && ((0 < param_2[1] && (*(int *)(param_1 + 0x18) != 0)))) {
    if (((_DAT_00006800 == 0x50414d57) && ((_DAT_00006804 != 0 && (0xb < _DAT_00006808)))) &&
       ((0xb7 < _DAT_00006808 &&
        ((((code *)(ulong)_DAT_000068b4 != (code *)0x0 &&
          (iVar3 = (*(code *)(ulong)_DAT_000068b4)(*(int *)(param_1 + 0x18),param_1 + 0x68),
          iVar3 != 0)) &&
         (*(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x94),
         (*(byte *)(param_1 + 0x90) & 1) == 0)))))) {
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
        uVar1 = *param_2;
        *(uint *)(param_1 + 0x60) = uVar1;
        uVar2 = param_2[1];
        *(uint *)(param_1 + 100) = uVar2;
        recovered_10008b70((undefined8 *)param_1,*(void **)(param_2 + 2),uVar1,uVar2);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b4

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a4
#define DAT_000068a4 (*(uint8_t *)(0x68a4U))
#undef DAT_1000b70c
#define DAT_1000b70c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_1000b87c
#define DAT_1000b87c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x361U)))
#undef LAB_10008f56
#define LAB_10008f56 (*(uint8_t *)(0x10008f56U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a4
#define _DAT_000068a4 (*(uint *)(0x68a4U))
#define local_d8 (*(uint (*)[4])(frame + 24))
#define local_c8 (*(undefined8 *)(frame + 40))
#define local_c0 (*(undefined4 *)(frame + 48))
#define local_a8 (*(code * *)(frame + 72))
#define local_a0 (*(undefined * *)(frame + 80))
#define local_98 (*(undefined1 * *)(frame + 88))
#define local_90 (*(undefined1 * *)(frame + 96))
#define local_88 (*(undefined1 * *)(frame + 104))
#define local_70 (*(ulong *)(frame + 128))
#define local_68 (*(ulong *)(frame + 136))
#define local_60 (*(ulong *)(frame + 144))
#define local_58 (*(void * *)(frame + 152))
#define local_50 (*(ulong *)(frame + 160))
#define local_48 (*(undefined8 * *)(frame + 168))
#define local_3c (*(uint *)(frame + 180))
#define local_38 (*(undefined8 *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008b70(undefined8 *param_1,void *param_2,uint param_3,uint param_4)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 240) + -8);
  local_88 = (undefined1 *)local_d8;
  local_a8 = recovered_10007030;
  local_a0 = &DAT_1000b87c;
  local_90 = &LAB_10008f56;
  local_38 = param_2;
  recovered_100075b0(&local_c8);
  if ((param_1 == (undefined8 *)0x0) || (*(int *)(param_1 + 3) == 0)) goto LAB_10008f2f;
  uVar5 = *(uint *)((long)param_1 + 0x1c);
  uVar13 = 1;
  if (1 < (int)uVar5) {
    uVar13 = (ulong)uVar5;
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar20 = 1;
  if (1 < (int)uVar6) {
    uVar20 = uVar6;
  }
  if (*(char *)((long)param_1 + 0x2c) == '\0') {
    if (((int)param_4 < 1 || (int)param_3 < 1) || local_38 == (void *)0x0) {
      pvVar11 = (void *)0x0;
      local_38 = (void *)0x0;
    }
    else if (uVar6 == param_4 && uVar5 == param_3) {
      pvVar11 = (void *)0x0;
      uVar13 = (ulong)param_3;
      uVar20 = param_4;
    }
    else {
      uVar18 = (long)(int)uVar5 * (long)(int)uVar6 * 4;
      local_68 = (ulong)param_4;
      local_60 = uVar13;
      local_48 = param_1;
      local_3c = uVar20;
      if (uVar18 == 0) {
        pvVar11 = (void *)0x0;
        uVar18 = (ulong)param_3;
      }
      else {
        local_c0 = 1;
        local_70 = uVar18;
        local_50 = (ulong)param_3;
        pvVar11 = (void *)recovered_10007080(uVar18);
        uVar13 = 0;
        recovered_100070e0((void *)0x0);
        if (local_70 < 8) goto LAB_10008fab;
        if (local_70 < 0x20) {
          uVar18 = 0;
LAB_10008d05:
          uVar13 = local_70 & 0xfffffffffffffff8;
          do {
            *(undefined8 *)((long)pvVar11 + uVar18) = 0;
            uVar18 = uVar18 + 8;
          } while (uVar13 != uVar18);
          for (; local_70 != uVar13; uVar13 = uVar13 + 1) {
LAB_10008fab:
            *(undefined1 *)((long)pvVar11 + uVar13) = 0;
          }
        }
        else {
          uVar13 = local_70 & 0xffffffffffffffe0;
          uVar18 = 0;
          do {
            *(undefined8 *)((long)pvVar11 + uVar18) = 0;
            ((undefined8 *)((long)pvVar11 + uVar18))[1] = 0;
            puVar1 = (undefined8 *)((long)pvVar11 + uVar18 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar18 = uVar18 + 0x20;
          } while (uVar13 != uVar18);
          if (local_70 != uVar13) {
            uVar18 = uVar13;
            if ((local_70 & 0x18) == 0) goto LAB_10008fab;
            goto LAB_10008d05;
          }
        }
        uVar2 = *(undefined1 *)((long)local_48 + 0x2e);
        uVar3 = *(undefined1 *)((long)local_48 + 0x2f);
        uVar4 = *(undefined1 *)(local_48 + 6);
        uVar13 = 0;
        do {
          *(undefined1 *)((long)pvVar11 + uVar13) = uVar2;
          *(undefined1 *)((long)pvVar11 + uVar13 + 1) = uVar3;
          *(undefined1 *)((long)pvVar11 + uVar13 + 2) = uVar4;
          *(undefined1 *)((long)pvVar11 + uVar13 + 3) = 0xff;
          uVar13 = uVar13 + 4;
          uVar18 = local_50;
        } while (uVar13 < local_70);
      }
      uVar5 = *(uint *)((long)local_48 + 0x1c);
      lVar12 = (long)(int)uVar5;
      uVar25 = local_68 & 0xffffffff;
      uVar13 = lVar12 * uVar25;
      uVar19 = uVar18 & 0xffffffff;
      if (uVar13 >> 0x20 == 0) {
        uVar6 = (uint)((uVar13 & 0xffffffff) / uVar19);
      }
      else {
        uVar6 = (uint)((long)uVar13 / (long)uVar19);
      }
      uVar16 = 1;
      if (1 < (int)uVar6) {
        uVar16 = (ulong)uVar6;
      }
      uVar6 = *(uint *)(local_48 + 4);
      uVar22 = uVar5;
      uVar13 = local_60;
      param_1 = local_48;
      uVar20 = local_3c;
      if ((int)uVar6 < (int)uVar16) {
        uVar16 = (long)(int)uVar6 * uVar19;
        if (uVar16 >> 0x20 == 0) {
          uVar7 = (uint)((uVar16 & 0xffffffff) / uVar25);
        }
        else {
          uVar7 = (uint)((long)uVar16 / (long)uVar25);
        }
        uVar22 = 1;
        if (1 < (int)uVar7) {
          uVar22 = uVar7;
        }
        uVar16 = (ulong)uVar6;
        if ((int)uVar6 < 1) {
          local_38 = pvVar11;
          goto LAB_10008e6e;
        }
      }
      iVar10 = (int)local_68 + -1;
      iVar21 = (int)uVar18 + -1;
      lVar24 = (long)((int)(uVar5 - uVar22) / 2) * 4 + ((int)(uVar6 - (int)uVar16) / 2) * lVar12 * 4
               + (long)pvVar11;
      uVar25 = 0;
      do {
        if (0 < (int)uVar22) {
          uVar14 = 0;
          iVar8 = (int)((uint)((int)uVar25 * (int)local_68) / uVar16);
          if (iVar10 < iVar8) {
            iVar8 = iVar10;
          }
          uVar23 = 0;
          do {
            iVar9 = (int)(uVar14 / uVar22);
            iVar15 = iVar21;
            if (iVar9 <= iVar21) {
              iVar15 = iVar9;
            }
            *(undefined4 *)(lVar24 + uVar23 * 4) =
                 *(undefined4 *)((long)local_38 + ((long)iVar15 + (long)iVar8 * uVar19) * 4);
            uVar23 = uVar23 + 1;
            uVar14 = (ulong)(uint)((int)uVar14 + (int)uVar18);
          } while (uVar22 != uVar23);
        }
        uVar25 = uVar25 + 1;
        lVar24 = lVar24 + lVar12 * 4;
      } while (uVar25 != uVar16);
      local_50 = uVar19;
      local_38 = pvVar11;
    }
LAB_10008e6e:
    puVar17 = &DAT_1000b70c;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar17 = (undefined1 *)*param_1;
    }
    local_58 = pvVar11;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0xa7 < _DAT_00006808 && ((code *)(ulong)_DAT_000068a4 != (code *)0x0)))) {
      local_d8[0] = (uint)*(byte *)((long)param_1 + 0x2f) << 8 |
                    (uint)*(byte *)((long)param_1 + 0x2e) << 0x10 | (uint)*(byte *)(param_1 + 6);
      local_c0 = 2;
      local_48 = param_1;
      iVar10 = (*(code *)(ulong)_DAT_000068a4)
                         (*(undefined4 *)(param_1 + 3),puVar17,local_38,uVar13,uVar20,
                          (int)uVar13 * 4);
      *(bool *)((long)local_48 + 0x2d) = iVar10 != 0;
      pvVar11 = local_58;
      param_1 = local_48;
      if (iVar10 != 0) goto LAB_10008f2a;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x2d) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    pvVar11 = local_58;
  }
  else {
    pvVar11 = (void *)0x0;
  }
LAB_10008f2a:
  recovered_100070e0(pvVar11);
LAB_10008f2f:
  recovered_100075d0(&local_c8);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a4
#undef DAT_1000b70c
#undef DAT_1000b87c
#undef LAB_10008f56
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a4
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000687c
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#undef DAT_00006880
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef DAT_00006900
#define DAT_00006900 (*(uint8_t *)(0x6900U))
#undef DAT_1000b6e0
#define DAT_1000b6e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef UNK_1000b6e4
#define UNK_1000b6e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1c9U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000687c
#define _DAT_0000687c (*(uint *)(0x687cU))
#undef _DAT_00006880
#define _DAT_00006880 (*(uint *)(0x6880U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(uint *)(0x68b4U))
#undef _DAT_00006900
#define _DAT_00006900 (*(uint *)(0x6900U))
#undef _DAT_1000b6e0
#define _DAT_1000b6e0 (*(uint *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef uRam000000001000b6e4
#define uRam000000001000b6e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c9U)))
#define local_4c (*(undefined4 *)(frame + 100))
#define local_38 (*(undefined1 (*)[16])(frame + 120))
#define local_28 (*(undefined1 (*)[16])(frame + 136))
#define iStack_48 (*(int *)(frame + 104))
#define uStack_44 (*(ulong *)(frame + 108))
#define local_98 (*(undefined1 (*)[16])(frame + 24))
#define local_88 (*(undefined1 (*)[16])(frame + 40))
#define local_78 (*(undefined1 (*)[16])(frame + 56))
#define local_68 (*(undefined4 *)(frame + 72))
#define local_58 (*(uint *)(frame + 88))
#define local_54 (*(uint *)(frame + 92))
#define local_50 (*(uint *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009000(long param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  uint128 auVar14;
  uint uVar15;
  uint uVar16;

  if (param_1 == 0) {
    return;
  }
  (*(uint128 *)(void *)local_28) = (uint128)0x0;
  (*(uint128 *)(void *)local_38) = (uint128)0x0;
  iStack_48 = 0;
  uStack_44 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_1000918f;
  if (((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
      ((_DAT_00006808 < 0xb8 || ((code *)(ulong)_DAT_000068b4 == (code *)0x0)))) ||
     ((iVar2 = (*(code *)(ulong)_DAT_000068b4)(), iVar2 == 0 ||
      (*(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x94),
      (*(byte *)(param_1 + 0x90) & 1) != 0)))) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    goto LAB_1000918f;
  }
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) goto LAB_1000918f;
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x103 < _DAT_00006808 && ((code *)(ulong)_DAT_00006900 != (code *)0x0)) &&
       (iVar2 = (*(code *)(ulong)_DAT_00006900)(*(undefined4 *)(param_1 + 0x18)), iVar2 != 0)))))) {
    if ((local_58 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x42) = 0;
      uVar15 = -(uint)((int)_DAT_1000b6e0 < (int)*(uint *)(param_1 + 0x1c));
      uVar16 = -(uint)((int)uRam000000001000b6e4 < (int)*(uint *)(param_1 + 0x20));
      iVar2 = (~uVar15 & _DAT_1000b6e0 | *(uint *)(param_1 + 0x1c) & uVar15) - 1;
      iVar13 = (~uVar16 & uRam000000001000b6e4 | *(uint *)(param_1 + 0x20) & uVar16) - 1;
      uVar7 = *(ulong *)(param_1 + 0x38);
      uVar5 = CONCAT44(-(uint)(iVar13 < (int)(uVar7 >> 0x20)),-(uint)(iVar2 < (int)uVar7));
      *(ulong *)(param_1 + 0x38) =
           ~CONCAT44(-(uint)((long)uVar7 < 0),-(uint)((int)uVar7 < 0)) &
           (~uVar5 & uVar7 | CONCAT44(iVar13,iVar2) & uVar5);
    }
    else {
      uVar15 = local_54;
      if (iStack_48 != *(int *)(param_1 + 0x34)) {
        uVar15 = local_54 | local_50;
        *(int *)(param_1 + 0x34) = iStack_48;
      }
      bVar9 = (byte)uVar15;
      bVar12 = (~local_58 & 6) != 0;
      bVar1 = (*(uint *)(param_1 + 0x90) & 6) != 2;
      bVar6 = bVar9 & 1;
      if (bVar12 || bVar1) {
        bVar6 = 0;
      }
      bVar8 = bVar9 >> 1 & 1;
      if (bVar12 || bVar1) {
        bVar8 = 0;
      }
      *(byte *)(param_1 + 0x40) = bVar6;
      bVar6 = bVar9 >> 2 & 1;
      if (bVar12 || bVar1) {
        bVar6 = 0;
      }
      *(byte *)(param_1 + 0x41) = bVar8;
      *(byte *)(param_1 + 0x42) = bVar6;
      uVar15 = -(uint)((int)_DAT_1000b6e0 < (int)*(uint *)(param_1 + 0x1c));
      uVar16 = -(uint)((int)uRam000000001000b6e4 < (int)*(uint *)(param_1 + 0x20));
      iVar2 = (~uVar15 & _DAT_1000b6e0 | *(uint *)(param_1 + 0x1c) & uVar15) - 1;
      iVar13 = (~uVar16 & uRam000000001000b6e4 | *(uint *)(param_1 + 0x20) & uVar16) - 1;
      uVar7 = CONCAT44(-(uint)(iVar13 < (int)(uStack_44 >> 0x20)),-(uint)(iVar2 < (int)uStack_44));
      *(ulong *)(param_1 + 0x38) =
           ~CONCAT44(-(uint)((long)uStack_44 < 0),-(uint)((int)uStack_44 < 0)) &
           (~uVar7 & uStack_44 | CONCAT44(iVar13,iVar2) & uVar7);
    }
    goto LAB_1000918f;
  }
  if (((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) ||
     (((_DAT_00006808 < 0xc ||
       ((_DAT_00006808 < 0x84 || ((code *)(ulong)_DAT_00006880 == (code *)0x0)))) ||
      (iVar2 = (*(code *)(ulong)_DAT_00006880)(local_38), iVar2 == 0)))) goto LAB_1000918f;
  (*(uint128 *)(void *)local_78) = (uint128)0x0;
  (*(uint128 *)(void *)local_88) = (uint128)0x0;
  (*(uint128 *)(void *)local_98) = (uint128)0x0;
  local_68 = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x7f < _DAT_00006808 && ((code *)(ulong)_DAT_0000687c != (code *)0x0)) &&
      (iVar2 = (*(code *)(ulong)_DAT_0000687c)(local_98), iVar2 != 0)))) {
    PF_PART4(auVar14, 0) = -(uint)(PF_PART4(local_98, 8) == 0);
    PF_PART4(auVar14, 4) = -(uint)(PF_PART4(local_98, 12) == 0);
    PF_PART4(auVar14, 8) = -(uint)(PF_PART4(local_88, 0) == 0);
    PF_PART4(auVar14, 12) = -(uint)(SUB164((uint128)0x0,0xc) == PF_PART4(local_88, 4));
    iVar2 = movmskps(iVar2,auVar14);
    if (((iVar2 != 0) || (PF_PART4(local_88, 8) != 0x20)) ||
       ((PF_PART4(local_88, 12) == 0 ||
        ((((PF_PART4(local_78, 4) == 0 || (PF_PART8(local_98, 0) == 0)) || (PF_PART4(local_78, 12) == 0)) ||
         ((uint)PF_PART4(local_98, 12) >> 2 < (uint)PF_PART4(local_88, 0))))))) goto LAB_100093b4;
    if (((byte)local_38[0] & 1) == 0) goto LAB_100093bf;
    uVar15 = 0;
    uVar16 = 0;
    if (1 < (uint)PF_PART4(local_88, 0)) {
      uVar7 = (ulong)(uint)PF_PART4(local_28, 8);
      if (uVar7 == 0) {
        uVar4 = PF_PART4(local_88, 0) - 1;
        if ((uint)PF_PART4(local_38, 8) <= PF_PART4(local_88, 0) - 1) {
          uVar4 = PF_PART4(local_38, 8);
        }
        uVar16 = 0;
        if (-1 < (int)PF_PART4(local_38, 8)) {
          uVar16 = uVar4;
        }
      }
      else {
        uVar16 = 0;
        if (0 < (int)PF_PART4(local_38, 8)) {
          uVar16 = PF_PART4(local_38, 8);
        }
        if ((uint)PF_PART4(local_28, 8) <= uVar16) {
          uVar16 = PF_PART4(local_28, 8);
        }
        uVar5 = (ulong)(PF_PART4(local_88, 0) - 1) * (ulong)uVar16;
        if ((uVar5 & 0x7fffffff00000000) == 0) {
          uVar16 = (uint)((uVar5 & 0xffffffff) / uVar7);
        }
        else {
          uVar16 = (uint)(uVar5 / uVar7);
        }
      }
    }
    if (1 < (int)PF_PART4(local_88, 4)) {
      uVar7 = (ulong)(uint)PF_PART4(local_28, 12);
      if (uVar7 == 0) {
        uVar4 = PF_PART4(local_88, 4) - 1;
        if ((uint)PF_PART4(local_38, 12) <= PF_PART4(local_88, 4) - 1) {
          uVar4 = PF_PART4(local_38, 12);
        }
        uVar15 = 0;
        if (-1 < (int)PF_PART4(local_38, 12)) {
          uVar15 = uVar4;
        }
      }
      else {
        uVar15 = 0;
        if (0 < (int)PF_PART4(local_38, 12)) {
          uVar15 = PF_PART4(local_38, 12);
        }
        if ((uint)PF_PART4(local_28, 12) <= uVar15) {
          uVar15 = PF_PART4(local_28, 12);
        }
        uVar5 = (ulong)(PF_PART4(local_88, 4) - 1) * (ulong)uVar15;
        if ((uVar5 & 0x7fffffff00000000) == 0) {
          uVar15 = (uint)((uVar5 & 0xffffffff) / uVar7);
        }
        else {
          uVar15 = (uint)(uVar5 / uVar7);
        }
      }
    }
    *(uint *)(param_1 + 0x38) = (uVar16 - *(int *)(param_1 + 0x24)) + -0xe;
    iVar2 = (uVar15 - *(int *)(param_1 + 0x28)) + -0x26;
LAB_10009495:
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  else {
LAB_100093b4:
LAB_100093bf:
    if ((PF_PART4(local_38, 0) & 2) == 0) {
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (PF_PART4(local_28, 0) != 0 || PF_PART4(local_28, 4) != 0) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + PF_PART4(local_28, 0);
        iVar2 = iVar2 + PF_PART4(local_28, 4);
        goto LAB_10009495;
      }
    }
  }
  bVar12 = (*(uint *)(param_1 + 0x90) & 6) == 2;
  *(byte *)(param_1 + 0x40) = local_38[4] & bVar12;
  *(byte *)(param_1 + 0x41) = (byte)(((byte)local_38[4] & 2) >> 1) & bVar12;
  *(byte *)(param_1 + 0x42) = (byte)(((byte)local_38[4] & 4) >> 2) & bVar12;
  iVar13 = *(int *)(param_1 + 0x1c);
  if (iVar13 < 2) {
    iVar13 = 1;
  }
  iVar10 = *(int *)(param_1 + 0x38);
  iVar3 = iVar13 + -1;
  if (iVar10 <= iVar13 + -1) {
    iVar3 = iVar10;
  }
  if (iVar10 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar3;
  iVar13 = 1;
  if (1 < *(int *)(param_1 + 0x20)) {
    iVar13 = *(int *)(param_1 + 0x20);
  }
  iVar10 = iVar13 + -1;
  if (iVar2 <= iVar13 + -1) {
    iVar10 = iVar2;
  }
  if (iVar2 < 0) {
    iVar10 = 0;
  }
  *(int *)(param_1 + 0x3c) = iVar10;
LAB_1000918f:
  recovered_100095a0();
  if (*(char *)(param_1 + 0x2d) == '\0') {
    if (*(long *)(param_1 + 0x50) == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      pvVar11 = *(void **)(param_1 + 0x48);
    }
    recovered_10008b70((undefined8 *)param_1,pvVar11,*(uint *)(param_1 + 0x60),
                       *(uint *)(param_1 + 100));
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000687c
#undef DAT_00006880
#undef DAT_0000689c
#undef DAT_000068b4
#undef DAT_00006900
#undef DAT_1000b6e0
#undef UNK_1000b6e4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000687c
#undef _DAT_00006880
#undef _DAT_0000689c
#undef _DAT_000068b4
#undef _DAT_00006900
#undef _DAT_1000b6e0
#undef uRam000000001000b6e4
#undef local_4c
#undef local_38
#undef local_28
#undef iStack_48
#undef uStack_44
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_54
#undef local_50

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef DAT_1000bcf8
#define DAT_1000bcf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ddU)))
#undef DAT_1000d0f0
#define DAT_1000d0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd5U)))
#undef DAT_1000d0f1
#define DAT_1000d0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd6U)))
#undef DAT_1000d0f2
#define DAT_1000d0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd7U)))
#undef DAT_1000d0f3
#define DAT_1000d0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd8U)))
#undef DAT_1000d0f4
#define DAT_1000d0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd9U)))
#undef DAT_1000d0f5
#define DAT_1000d0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdaU)))
#undef DAT_1000d0f6
#define DAT_1000d0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdbU)))
#undef DAT_1000d0f7
#define DAT_1000d0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdcU)))
#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bddU)))
#undef DAT_1000d0f9
#define DAT_1000d0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdeU)))
#undef DAT_1000d0fa
#define DAT_1000d0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdfU)))
#undef DAT_1000d0fb
#define DAT_1000d0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be0U)))
#undef DAT_1000d0fc
#define DAT_1000d0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be1U)))
#undef DAT_1000d0fd
#define DAT_1000d0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be2U)))
#undef DAT_1000d0fe
#define DAT_1000d0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be3U)))
#undef DAT_1000d0ff
#define DAT_1000d0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be4U)))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be5U)))
#undef DAT_1000d101
#define DAT_1000d101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be6U)))
#undef DAT_1000d102
#define DAT_1000d102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be7U)))
#undef DAT_1000d103
#define DAT_1000d103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be8U)))
#undef DAT_1000d104
#define DAT_1000d104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be9U)))
#undef DAT_1000d105
#define DAT_1000d105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beaU)))
#undef DAT_1000d106
#define DAT_1000d106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bebU)))
#undef DAT_1000d107
#define DAT_1000d107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1becU)))
#undef DAT_1000d108
#define DAT_1000d108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bedU)))
#undef DAT_1000d109
#define DAT_1000d109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beeU)))
#undef DAT_1000d10a
#define DAT_1000d10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1befU)))
#undef DAT_1000d10b
#define DAT_1000d10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf0U)))
#undef DAT_1000d10c
#define DAT_1000d10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf1U)))
#undef DAT_1000d10d
#define DAT_1000d10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf2U)))
#undef DAT_1000d10e
#define DAT_1000d10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf3U)))
#undef DAT_1000d10f
#define DAT_1000d10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf4U)))
#undef DAT_1000d110
#define DAT_1000d110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf5U)))
#undef DAT_1000d111
#define DAT_1000d111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf6U)))
#undef DAT_1000d112
#define DAT_1000d112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf7U)))
#undef DAT_1000d113
#define DAT_1000d113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf8U)))
#undef DAT_1000d114
#define DAT_1000d114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf9U)))
#undef DAT_1000d115
#define DAT_1000d115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfaU)))
#undef DAT_1000d116
#define DAT_1000d116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfbU)))
#undef DAT_1000d117
#define DAT_1000d117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfcU)))
#undef DAT_1000d118
#define DAT_1000d118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfdU)))
#undef DAT_1000d119
#define DAT_1000d119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfeU)))
#undef DAT_1000d11a
#define DAT_1000d11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bffU)))
#undef DAT_1000d11b
#define DAT_1000d11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c00U)))
#undef DAT_1000d11c
#define DAT_1000d11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c01U)))
#undef DAT_1000d11d
#define DAT_1000d11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c02U)))
#undef DAT_1000d11e
#define DAT_1000d11e (*(char *)(((uintptr_t)pf_module_state + 0x1c03U)))
#undef DAT_1000d368
#define DAT_1000d368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e4dU)))
#undef DAT_1000d370
#define DAT_1000d370 (*(int *)(((uintptr_t)pf_module_state + 0x1e55U)))
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xae5U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(uint *)(0x682cU))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(uint *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100095a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;

  lVar6 = DAT_1000d368;
  DAT_1000d0f0 = 0;
  DAT_1000d0f1 = 0;
  DAT_1000d0f2 = 0;
  DAT_1000d0f3 = 0;
  DAT_1000d0f4 = 0;
  DAT_1000d0f5 = 0;
  DAT_1000d0f6 = 0;
  DAT_1000d0f7 = 0;
  DAT_1000d0f8 = 0;
  DAT_1000d0f9 = 0;
  DAT_1000d0fa = 0;
  DAT_1000d0fb = 0;
  DAT_1000d0fc = 0;
  DAT_1000d0fd = 0;
  DAT_1000d0fe = 0;
  DAT_1000d0ff = 0;
  DAT_1000d100 = 0;
  DAT_1000d101 = 0;
  DAT_1000d102 = 0;
  DAT_1000d103 = 0;
  DAT_1000d104 = 0;
  DAT_1000d105 = 0;
  DAT_1000d106 = 0;
  DAT_1000d107 = 0;
  DAT_1000d108 = 0;
  DAT_1000d109 = 0;
  DAT_1000d10a = 0;
  DAT_1000d10b = 0;
  DAT_1000d10c = 0;
  DAT_1000d10d = 0;
  DAT_1000d10e = 0;
  DAT_1000d10f = 0;
  DAT_1000d110 = 0;
  DAT_1000d111 = 0;
  DAT_1000d112 = 0;
  DAT_1000d113 = 0;
  DAT_1000d114 = 0;
  DAT_1000d115 = 0;
  DAT_1000d116 = 0;
  DAT_1000d117 = 0;
  DAT_1000d118 = 0;
  DAT_1000d119 = 0;
  DAT_1000d11a = 0;
  DAT_1000d11b = 0;
  DAT_1000d11c = 0;
  DAT_1000d11d = 0;
  DAT_1000d11e = '\0';
  if ((DAT_1000d368 != 0) && (*(int *)(DAT_1000d368 + 0x18) != 0)) {
    if ((_DAT_00006800 == 0x50414d57) &&
       ((((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0xb7 < _DAT_00006808)) &&
        (((code *)(ulong)_DAT_000068b4 != (code *)0x0 &&
         (iVar3 = (*(code *)(ulong)_DAT_000068b4)(*(int *)(DAT_1000d368 + 0x18),DAT_1000d368 + 0x68)
         , iVar3 != 0)))))) {
      *(undefined8 *)(lVar6 + 0x24) = *(undefined8 *)(lVar6 + 0x94);
      if ((*(uint *)(lVar6 + 0x90) & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x2c) = 1;
      }
      if ((*(uint *)(lVar6 + 0x90) & 6) == 2) {
        while (((_DAT_00006800 == 0x50414d57 && (_DAT_00006804 != 0)) &&
               ((0xb < _DAT_00006808 &&
                ((0x2f < _DAT_00006808 && ((code *)(ulong)_DAT_0000682c != (code *)0x0))))))) {
          uVar5 = (*(code *)(ulong)_DAT_0000682c)();
          lVar6 = DAT_1000d368;
          uVar4 = (uint)uVar5;
          if (uVar4 == 0) {
            return;
          }
          cVar2 = (char)uVar5;
          uVar1 = (uint)((ulong)uVar5 >> 8);
          if (cVar2 == '\0') {
            if (DAT_1000d368 != 0) {
              switch((uintptr_t)(uVar1 & 0xff)) {
              case 1:
                goto switchD_10009999_caseD_48;
              case 2:
                goto switchD_10009999_caseD_50;
              case 3:
                goto switchD_10009999_caseD_4d;
              case 4:
                goto switchD_10009999_caseD_4b;
              default:
                goto switchD_1000994e_caseD_5;
              case 0x17:
                goto switchD_10009861_caseD_17;
              }
            }
          }
          else {
            if (DAT_1000d368 == 0) goto switchD_10009999_caseD_f;
            if (DAT_1000d370 == 2) {
              DAT_1000d370 = 0;
              switch((uintptr_t)(uVar4 & 0xff)) {
              case 0x41:
                DAT_1000d0f1 = 1;
                break;
              case 0x42:
                DAT_1000d0f2 = 1;
                break;
              case 0x43:
                DAT_1000d0f4 = 1;
                break;
              case 0x44:
                DAT_1000d0f3 = 1;
              }
            }
            else if (DAT_1000d370 == 1) {
              DAT_1000d370 = (uint)(cVar2 == '[') * 2;
            }
            else if (cVar2 == '\x1b') {
              DAT_1000d370 = 1;
            }
            else if ((byte)(cVar2 - 0x20U) < 0x5f) {
              DAT_1000d11e = cVar2;
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                **(undefined1 **)(&DAT_1000bcf8 + (long)cVar2 * 8) = 1;
              }
              else {
                bVar7 = (byte)(uVar4 - 0x41);
                if (bVar7 < 0x1a) {
                  if (bVar7 < 0x1a) {
                    *(&PTR_DAT_1000c000)[uVar4 - 0x41 & 0xff] = 1;
                  }
                }
                else {
                  if (9 < (byte)(cVar2 - 0x30U)) goto LAB_1000993b;
                  recovered_1000aed0(cVar2);
                  lVar6 = DAT_1000d368;
                  if (DAT_1000d368 == 0) goto switchD_10009999_caseD_f;
                }
              }
            }
            else {
LAB_1000993b:
              switch((uintptr_t)(uVar4 & 0xff)) {
              case 3:
              case 4:
                *(undefined1 *)(DAT_1000d368 + 0x2c) = 1;
                break;
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
                break;
              case 8:
switchD_1000994e_caseD_8:
                DAT_1000d11b = 1;
                break;
              case 10:
              case 0xd:
                DAT_1000d0f0 = 1;
                break;
              case 0x20:
                DAT_1000d11d = 1;
                break;
              case 0x2d:
                DAT_1000d119 = 1;
                break;
              case 0x2e:
                DAT_1000d11a = 1;
                break;
              default:
                if ((uVar4 & 0xff) == 0x7f) goto switchD_1000994e_caseD_8;
              }
            }
switchD_1000994e_caseD_5:
            uVar1 = uVar1 & 0xff;
            switch((uintptr_t)(uVar1)) {
            case 0xe:
              DAT_1000d11b = 1;
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
              break;
            case 0x1c:
              DAT_1000d0f0 = 1;
              break;
            case 0x48:
switchD_10009999_caseD_48:
              DAT_1000d0f1 = 1;
              break;
            case 0x4b:
switchD_10009999_caseD_4b:
              DAT_1000d0f3 = 1;
              break;
            case 0x4d:
switchD_10009999_caseD_4d:
              DAT_1000d0f4 = 1;
              break;
            case 0x50:
switchD_10009999_caseD_50:
              DAT_1000d0f2 = 1;
              break;
            case 0x53:
              DAT_1000d11c = 1;
              break;
            default:
              if (uVar1 == 1) {
switchD_10009861_caseD_17:
                *(undefined1 *)(lVar6 + 0x2c) = 1;
              }
            }
          }
switchD_10009999_caseD_f:
        }
      }
    }
    else {
      *(undefined1 *)(lVar6 + 0x2c) = 1;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef DAT_000068b4
#undef DAT_1000bcf8
#undef DAT_1000d0f0
#undef DAT_1000d0f1
#undef DAT_1000d0f2
#undef DAT_1000d0f3
#undef DAT_1000d0f4
#undef DAT_1000d0f5
#undef DAT_1000d0f6
#undef DAT_1000d0f7
#undef DAT_1000d0f8
#undef DAT_1000d0f9
#undef DAT_1000d0fa
#undef DAT_1000d0fb
#undef DAT_1000d0fc
#undef DAT_1000d0fd
#undef DAT_1000d0fe
#undef DAT_1000d0ff
#undef DAT_1000d100
#undef DAT_1000d101
#undef DAT_1000d102
#undef DAT_1000d103
#undef DAT_1000d104
#undef DAT_1000d105
#undef DAT_1000d106
#undef DAT_1000d107
#undef DAT_1000d108
#undef DAT_1000d109
#undef DAT_1000d10a
#undef DAT_1000d10b
#undef DAT_1000d10c
#undef DAT_1000d10d
#undef DAT_1000d10e
#undef DAT_1000d10f
#undef DAT_1000d110
#undef DAT_1000d111
#undef DAT_1000d112
#undef DAT_1000d113
#undef DAT_1000d114
#undef DAT_1000d115
#undef DAT_1000d116
#undef DAT_1000d117
#undef DAT_1000d118
#undef DAT_1000d119
#undef DAT_1000d11a
#undef DAT_1000d11b
#undef DAT_1000d11c
#undef DAT_1000d11d
#undef DAT_1000d11e
#undef DAT_1000d368
#undef DAT_1000d370
#undef PTR_DAT_1000c000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c
#undef _DAT_000068b4

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_10009c30(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0xb7 < _DAT_00006808 && ((code *)(ulong)_DAT_000068b4 != (code *)0x0)))) {
      iVar1 = (*(code *)(ulong)_DAT_000068b4)(*(int *)(param_1 + 0x18),param_1 + 0x68);
      if ((iVar1 != 0) &&
         (*(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x94),
         (*(byte *)(param_1 + 0x90) & 1) == 0)) goto LAB_10009cb7;
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
LAB_10009cb7:
  return *(undefined1 *)(param_1 + 0x2c);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cc0
 */

void recovered_10009cc0(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2e) = param_2;
  *(undefined1 *)(param_1 + 0x2f) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  if (*(long *)(param_1 + 0x50) == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x48);
  }
  recovered_10008b70((undefined8 *)param_1,pvVar1,*(uint *)(param_1 + 0x60),*(uint *)(param_1 + 100)
                    );
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cf0
 */

int * recovered_10009cf0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  void *dst;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;

  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)recovered_10007080(0x20);
    iVar7 = *(int *)(param_1 + 0x60);
    if (iVar7 < 1) {
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    *piVar4 = iVar7;
    iVar8 = *(int *)(param_1 + 100);
    if (iVar8 < 1) {
      iVar8 = *(int *)(param_1 + 0x20);
    }
    piVar4[1] = iVar8;
    uVar9 = (long)iVar8 * (long)iVar7 * 4;
    dst = (void *)recovered_100070b0(uVar9);
    *(void **)(piVar4 + 2) = dst;
    if (((*(long *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x60) != iVar7)) ||
       (*(int *)(param_1 + 100) != iVar8)) {
      if (uVar9 != 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x2e);
        uVar2 = *(undefined1 *)(param_1 + 0x2f);
        uVar3 = *(undefined1 *)(param_1 + 0x30);
        uVar9 = uVar9 - 1;
        if (uVar9 == 3) {
          lVar5 = 0;
        }
        else {
          uVar6 = (uVar9 >> 2) + 1 & 0xfffffffffffffffe;
          lVar5 = 0;
          do {
            *(undefined1 *)((long)dst + lVar5) = uVar1;
            *(undefined1 *)((long)dst + lVar5 + 1) = uVar2;
            *(undefined1 *)((long)dst + lVar5 + 2) = uVar3;
            *(undefined1 *)((long)dst + lVar5 + 3) = 0xff;
            *(undefined1 *)((long)dst + lVar5 + 4) = uVar1;
            *(undefined1 *)((long)dst + lVar5 + 5) = uVar2;
            *(undefined1 *)((long)dst + lVar5 + 6) = uVar3;
            *(undefined1 *)((long)dst + lVar5 + 7) = 0xff;
            lVar5 = lVar5 + 8;
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        if ((uVar9 & 4) == 0) {
          *(undefined1 *)((long)dst + lVar5) = uVar1;
          *(undefined1 *)((long)dst + lVar5 + 1) = uVar2;
          *(undefined1 *)((long)dst + lVar5 + 2) = uVar3;
          *(undefined1 *)((long)dst + lVar5 + 3) = 0xff;
        }
      }
    }
    else {
      recovered_10001030(dst,*(void **)(param_1 + 0x48),uVar9);
    }
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
  }
  return piVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e10
 */

void recovered_10009e10(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e50
 */

undefined1 recovered_10009e50(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 3 && param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x40 + (ulong)param_2);
  }
  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000b0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd5U)))
#define DAT_1000b0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd6U)))
#define DAT_1000b0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd7U)))
#define DAT_1000b0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd8U)))
#define DAT_1000b0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd9U)))
#define DAT_1000b0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdaU)))
#define DAT_1000b0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdbU)))
#define DAT_1000b0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdcU)))
#define DAT_1000b0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bddU)))
#define DAT_1000b0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdeU)))
#define DAT_1000b0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdfU)))
#define DAT_1000b0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be0U)))
#define DAT_1000b0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be1U)))
#define DAT_1000b0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be2U)))
#define DAT_1000b0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be3U)))
#define DAT_1000b0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be4U)))
#define DAT_1000b100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be5U)))
#define DAT_1000b101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be6U)))
#define DAT_1000b102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be7U)))
#define DAT_1000b103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be8U)))
#define DAT_1000b104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1be9U)))
#define DAT_1000b105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beaU)))
#define DAT_1000b106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bebU)))
#define DAT_1000b107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1becU)))
#define DAT_1000b108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bedU)))
#define DAT_1000b109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beeU)))
#define DAT_1000b10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1befU)))
#define DAT_1000b10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf0U)))
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf1U)))
#define DAT_1000b10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf2U)))
#define DAT_1000b10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf3U)))
#define DAT_1000b10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf4U)))
#define DAT_1000b110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf5U)))
#define DAT_1000b111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf6U)))
#define DAT_1000b112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf7U)))
#define DAT_1000b113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf8U)))
#define DAT_1000b114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf9U)))
#define DAT_1000b115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfaU)))
#define DAT_1000b116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfbU)))
#define DAT_1000b117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfcU)))
#define DAT_1000b118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfdU)))
#define DAT_1000b119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfeU)))
#define DAT_1000b11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bffU)))
#define DAT_1000b11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c00U)))
#define DAT_1000b11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c01U)))
#define DAT_1000b11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c02U)))
#define DAT_1000b11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c03U)))
void recovered_10009e80(void)

{
  unsigned char frame[64] = {0};

  DAT_1000b0f0 = 0;
  DAT_1000b0f1 = 0;
  DAT_1000b0f2 = 0;
  DAT_1000b0f3 = 0;
  DAT_1000b0f4 = 0;
  DAT_1000b0f5 = 0;
  DAT_1000b0f6 = 0;
  DAT_1000b0f7 = 0;
  DAT_1000b0f8 = 0;
  DAT_1000b0f9 = 0;
  DAT_1000b0fa = 0;
  DAT_1000b0fb = 0;
  DAT_1000b0fc = 0;
  DAT_1000b0fd = 0;
  DAT_1000b0fe = 0;
  DAT_1000b0ff = 0;
  DAT_1000b100 = 0;
  DAT_1000b101 = 0;
  DAT_1000b102 = 0;
  DAT_1000b103 = 0;
  DAT_1000b104 = 0;
  DAT_1000b105 = 0;
  DAT_1000b106 = 0;
  DAT_1000b107 = 0;
  DAT_1000b108 = 0;
  DAT_1000b109 = 0;
  DAT_1000b10a = 0;
  DAT_1000b10b = 0;
  DAT_1000b10c = 0;
  DAT_1000b10d = 0;
  DAT_1000b10e = 0;
  DAT_1000b10f = 0;
  DAT_1000b110 = 0;
  DAT_1000b111 = 0;
  DAT_1000b112 = 0;
  DAT_1000b113 = 0;
  DAT_1000b114 = 0;
  DAT_1000b115 = 0;
  DAT_1000b116 = 0;
  DAT_1000b117 = 0;
  DAT_1000b118 = 0;
  DAT_1000b119 = 0;
  DAT_1000b11a = 0;
  DAT_1000b11b = 0;
  DAT_1000b11c = 0;
  DAT_1000b11d = 0;
  DAT_1000b11e = 0;
  return;
}

#undef DAT_1000b0f0
#undef DAT_1000b0f1
#undef DAT_1000b0f2
#undef DAT_1000b0f3
#undef DAT_1000b0f4
#undef DAT_1000b0f5
#undef DAT_1000b0f6
#undef DAT_1000b0f7
#undef DAT_1000b0f8
#undef DAT_1000b0f9
#undef DAT_1000b0fa
#undef DAT_1000b0fb
#undef DAT_1000b0fc
#undef DAT_1000b0fd
#undef DAT_1000b0fe
#undef DAT_1000b0ff
#undef DAT_1000b100
#undef DAT_1000b101
#undef DAT_1000b102
#undef DAT_1000b103
#undef DAT_1000b104
#undef DAT_1000b105
#undef DAT_1000b106
#undef DAT_1000b107
#undef DAT_1000b108
#undef DAT_1000b109
#undef DAT_1000b10a
#undef DAT_1000b10b
#undef DAT_1000b10c
#undef DAT_1000b10d
#undef DAT_1000b10e
#undef DAT_1000b10f
#undef DAT_1000b110
#undef DAT_1000b111
#undef DAT_1000b112
#undef DAT_1000b113
#undef DAT_1000b114
#undef DAT_1000b115
#undef DAT_1000b116
#undef DAT_1000b117
#undef DAT_1000b118
#undef DAT_1000b119
#undef DAT_1000b11a
#undef DAT_1000b11b
#undef DAT_1000b11c
#undef DAT_1000b11d
#undef DAT_1000b11e

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009fd0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009fe0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10009ff0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000a000(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000a010(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100092ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1efU)))
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#define DAT_100094ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x306U)))
#define DAT_10009510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x369U)))
#define LAB_100081b3 (*(uint8_t *)(0x100081b3U))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006850 (*(uint *)(0x6850U))
#define UINT_00006858 (*(uint *)(0x6858U))
#define auStack_148 (*(undefined1 (*)[8])(frame + 16))
#define lStack_b8 (*(long *)(frame + 160))
#define local_110 (*(undefined4 *)(frame + 72))
#define local_118 (*(undefined8 *)(frame + 64))
#define local_120 (*(undefined8 *)(frame + 56))
#define local_130 (*(char * *)(frame + 40))
#define local_138 (*(undefined4 * *)(frame + 32))
#define local_140 (*(undefined4 * *)(frame + 24))
#define local_34 (*(undefined4 *)(frame + 292))
#define local_40 (*(void * *)(frame + 280))
#define local_48 (*(void * *)(frame + 272))
#define local_58 (*(char * *)(frame + 256))
#define local_60 (*(undefined8 *)(frame + 248))
#define local_68 (*(char * *)(frame + 240))
#define local_70 (*(undefined8 *)(frame + 232))
#define local_80 (*(long *)(frame + 216))
#define local_88 (*(char * *)(frame + 208))
#define local_98 (*(undefined8 *)(frame + 192))
#define local_a8 (*(void * *)(frame + 176))
#define local_b0 (*(undefined8 *)(frame + 168))
#define local_c0 (*(char * *)(frame + 152))
#define local_d8 (*(undefined1 * *)(frame + 128))
#define local_e0 (*(undefined1 * *)(frame + 120))
#define local_e8 (*(undefined1 * *)(frame + 112))
#define local_f0 (*(undefined * *)(frame + 104))
#define local_f8 (*(code * *)(frame + 96))
#define pvStack_128 (*(void * *)(frame + 48))
#define pvStack_50 (*(void * *)(frame + 264))
#define pvStack_78 (*(void * *)(frame + 224))
#define uStack_a0 (*(undefined8 *)(frame + 184))
ulong recovered_1000a020(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[376] = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  char *pcVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;

  local_e8 = (undefined1 *)((long)(uintptr_t)(frame + 344) + -8);
  local_d8 = auStack_148;
  local_f8 = recovered_10007030;
  local_f0 = &DAT_10009510;
  local_e0 = &LAB_100081b3;
  local_68 = (char *)param_1;
  recovered_100075b0(&local_118);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (local_68 == (char *)0x0) {
    pvVar12 = (void *)0x0;
    goto LAB_10008192;
  }
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_130 = (char *)0x0;
  pvStack_128 = (void *)0x0;
  local_120 = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    lVar16 = uVar8 + 1;
    uVar8 = uVar8 + 1;
  } while (local_68[lVar16] != '\0');
  local_110 = 0xffffffff;
  local_138 = param_2;
  recovered_1000ac20((long *)&local_130,(long)local_68,uVar8);
  local_80 = 0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  if (pvStack_128 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    pcVar13 = &DAT_100092cc;
    if (local_130 != (char *)0x0) {
      pcVar13 = local_130;
    }
    local_34 = (uint)CONCAT71((int7)((ulong)local_130 >> 8),*pcVar13 == '/');
  }
  pvVar12 = (void *)0x0;
  local_88 = &DAT_100092cc;
  local_140 = param_3;
  do {
    uVar8 = (long)pvStack_128 - (long)pvVar12;
    if (pvStack_128 < pvVar12 || uVar8 == 0) break;
    pcVar13 = local_130;
    if (local_130 == (char *)0x0) {
      pcVar13 = &DAT_100092cc;
    }
    pvVar9 = pvVar12;
    do {
      if (pcVar13[(long)pvVar9] == '/') {
        if (pvVar9 != (void *)0xffffffffffffffff) {
          local_60 = (void *)((ulong)PF_PART4(local_60, 4) << 0x20);
          local_40 = pvVar9;
          goto LAB_10007b1d;
        }
        break;
      }
      pvVar9 = (void *)((long)pvVar9 + 1);
    } while (pvStack_128 != pvVar9);
    local_40 = (void *)0xffffffffffffffff;
    local_60 = (void *)CONCAT44(PF_PART4(local_60, 4),(int)CONCAT71((int7)((ulong)pvVar9 >> 8),1));
    pvVar9 = pvStack_128;
LAB_10007b1d:
    uVar15 = (long)pvVar9 - (long)pvVar12;
    uVar10 = uVar15;
    if (uVar8 < uVar15) {
      uVar10 = uVar8;
    }
    if (uVar15 == 0xffffffffffffffff) {
      uVar10 = uVar8;
    }
    local_58 = (char *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_110 = 1;
    recovered_1000ac20((long *)&local_58,(long)(pcVar13 + (long)pvVar12),uVar10);
    pvVar12 = local_40;
    if (pvStack_50 != (void *)0x0) {
      pcVar13 = local_58;
      if (local_58 == (char *)0x0) {
        pcVar13 = &DAT_100092cc;
      }
      if (pvStack_50 == (void *)0x1) {
        if (*pcVar13 == '.') goto LAB_10007a9b;
      }
      else if (((pvStack_50 == (void *)0x2) && (*pcVar13 == '.')) && (pcVar13[1] == '.')) {
        if (pvStack_78 != (void *)0x0) {
          pcVar13 = *(char **)(local_80 + -0x18 + (long)pvStack_78 * 0x18);
          pcVar7 = pcVar13;
          if (pcVar13 == (char *)0x0) {
            pcVar7 = &DAT_100092cc;
          }
          if (((*(long *)(local_80 + -0x10 + (long)pvStack_78 * 0x18) != 2) || (*pcVar7 != '.')) ||
             (pcVar7[1] != '.')) {
            recovered_100070e0(pcVar13);
            pvStack_78 = (void *)((long)pvStack_78 - 1);
            goto LAB_10007a9b;
          }
        }
        if ((char)local_34 != '\0') goto LAB_10007a9b;
      }
      local_110 = 2;
      recovered_1000af60(&local_80,&local_58);
      pvVar12 = local_40;
    }
LAB_10007a9b:
    pvVar12 = (void *)((long)pvVar12 + 1);
    recovered_100070e0(local_58);
  } while ((char)local_60 == '\0');
  puVar14 = &DAT_100092cc;
  if ((char)local_34 != '\0') {
    puVar14 = &DAT_100094ad;
  }
  local_58 = (char *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = (void *)0x0;
  uVar8 = 0xffffffffffffffff;
  do {
    lVar16 = uVar8 + 1;
    uVar8 = uVar8 + 1;
  } while (puVar14[lVar16] != '\0');
  local_110 = 3;
  recovered_1000ac20((long *)&local_58,(long)puVar14,uVar8);
  if (pvStack_78 != (void *)0x0) {
    pvVar12 = (void *)0x0;
    do {
      local_40 = pvVar12;
      if (pvVar12 != (void *)0x0 || (local_34 & 1) != 0) {
        if (pvStack_50 == local_48) {
          pvVar9 = (void *)((long)pvStack_50 * 2);
          if (pvStack_50 == (void *)0x0) {
            pvVar9 = (void *)0x10;
          }
          if (pvVar9 <= pvStack_50) goto LAB_10007d00;
          local_110 = 4;
          local_60 = pvVar9;
          pcVar13 = (char *)recovered_10007080((ulong)pvVar9 | 1);
          pvVar12 = local_40;
          *pcVar13 = '\0';
          if (pvStack_50 != (void *)0x0) {
            if (pvStack_50 < (void *)0x4) {
              pvVar9 = (void *)0x0;
            }
            else {
              pvVar9 = (void *)0x0;
              if (0x1f < (ulong)((long)pcVar13 - (long)local_58)) {
                if (pvStack_50 < (void *)0x20) {
                  pvVar11 = (void *)0x0;
                }
                else {
                  pvVar9 = (void *)((ulong)pvStack_50 & 0xffffffffffffffe0);
                  pvVar11 = (void *)0x0;
                  do {
                    uVar2 = *(undefined8 *)(local_58 + (long)pvVar11 + 8);
                    uVar3 = *(undefined8 *)(local_58 + 0x10 + (long)pvVar11);
                    uVar4 = *(undefined8 *)(local_58 + 0x10 + (long)pvVar11 + 8);
                    *(undefined8 *)(pcVar13 + (long)pvVar11) =
                         *(undefined8 *)(local_58 + (long)pvVar11);
                    *(undefined8 *)(pcVar13 + (long)pvVar11 + 8) = uVar2;
                    *(undefined8 *)(pcVar13 + 0x10 + (long)pvVar11) = uVar3;
                    *(undefined8 *)(pcVar13 + 0x10 + (long)pvVar11 + 8) = uVar4;
                    pvVar11 = (void *)((long)pvVar11 + 0x20);
                  } while (pvVar9 != pvVar11);
                  if (pvStack_50 == pvVar9) goto LAB_10007dfb;
                  pvVar11 = pvVar9;
                  if (((ulong)pvStack_50 & 0x1c) == 0) goto LAB_10007d94;
                }
                pvVar9 = (void *)((ulong)pvStack_50 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)(pcVar13 + (long)pvVar11) =
                       *(undefined4 *)(local_58 + (long)pvVar11);
                  pvVar11 = (void *)((long)pvVar11 + 4);
                } while (pvVar9 != pvVar11);
                if (pvStack_50 == pvVar9) goto LAB_10007dfb;
              }
            }
LAB_10007d94:
            uVar8 = (ulong)pvStack_50 & 3;
            pvVar11 = pvVar9;
            if (uVar8 != 0) {
              do {
                pcVar13[(long)pvVar11] = local_58[(long)pvVar11];
                pvVar11 = (void *)((long)pvVar11 + 1);
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            if ((ulong)((long)pvVar9 - (long)pvStack_50) < 0xfffffffffffffffd) {
              do {
                pcVar13[(long)pvVar11] = local_58[(long)pvVar11];
                (pcVar13 + 1)[(long)pvVar11] = (local_58 + 1)[(long)pvVar11];
                (pcVar13 + 2)[(long)pvVar11] = (local_58 + 2)[(long)pvVar11];
                (pcVar13 + 3)[(long)pvVar11] = (local_58 + 3)[(long)pvVar11];
                pvVar11 = (void *)((long)pvVar11 + 4);
              } while (pvStack_50 != pvVar11);
            }
          }
LAB_10007dfb:
          pcVar13[(long)pvStack_50] = '\0';
          recovered_100070e0(local_58);
          local_48 = local_60;
LAB_10007e08:
          local_58 = pcVar13;
        }
        else {
LAB_10007d00:
          if (local_58 == (char *)0x0) {
            local_110 = 5;
            pcVar13 = (char *)recovered_10007080(1);
            *pcVar13 = '\0';
            local_48 = (void *)0x0;
            pvVar12 = local_40;
            goto LAB_10007e08;
          }
        }
        local_58[(long)pvStack_50] = '/';
        local_58[(long)pvStack_50 + 1] = '\0';
        pvStack_50 = (void *)((long)pvStack_50 + 1);
      }
      puVar14 = *(undefined1 **)(local_80 + (long)pvVar12 * 0x18);
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &DAT_100092cc;
      }
      local_110 = 6;
      recovered_1000b080((long *)&local_58,(long)puVar14,
                         *(ulong *)(local_80 + 8 + (long)pvVar12 * 0x18));
      pvVar12 = (void *)((long)local_40 + 1);
    } while (pvVar12 < pvStack_78);
  }
  if (pvStack_50 == (void *)0x0) {
    pcVar13 = &DAT_100092ca;
    if ((char)local_34 != '\0') {
      pcVar13 = &DAT_100094ad;
    }
    pvVar12 = (void *)0xffffffffffffffff;
    do {
      pcVar7 = pcVar13 + 1 + (long)pvVar12;
      pvVar12 = (void *)((long)pvVar12 + 1);
    } while (*pcVar7 != '\0');
  }
  else {
    pvVar12 = pvStack_50;
    pcVar13 = local_58;
    if (local_58 == (char *)0x0) {
      pcVar13 = &DAT_100092cc;
    }
  }
  local_b0 = 0;
  lStack_b8 = 0;
  local_c0 = (char *)0x0;
  local_110 = 7;
  recovered_1000ac20((long *)&local_c0,(long)pcVar13,(ulong)pvVar12);
  recovered_100070e0(local_58);
  if (pvStack_78 != (void *)0x0) {
    lVar16 = (long)pvStack_78 * 0x18;
    pvVar12 = pvStack_78;
    do {
      lVar16 = lVar16 + -0x18;
      recovered_100070e0(*(undefined8 *)(local_80 + lVar16));
      pvVar12 = (void *)((long)pvVar12 - 1);
    } while (pvVar12 != (void *)0x0);
  }
  pvStack_78 = (void *)0x0;
  recovered_100070e0(local_80);
  recovered_100070e0(local_130);
  pcVar13 = local_c0;
  if (local_c0 == (char *)0x0) {
    pcVar13 = &DAT_100092cc;
  }
  iVar6 = Ram0000000000006800;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x5b < uVar1)))) {
    uVar1 = UINT_00006858;
    if ((code *)(ulong)uVar1 == (code *)0x0) goto LAB_10007fd2;
    local_110 = 8;
    iVar6 = (*(code *)(ulong)uVar1)(pcVar13,&local_a8);
    if (iVar6 == 0) goto LAB_10007fd2;
LAB_10008099:
    pvVar12 = (void *)0x0;
    if (local_a8 != (void *)0x0) {
      if ((int)uStack_a0 != 0) {
        if (PF_PART4(uStack_a0, 4) != 0) {
          if ((int)local_98 != 0) {
            local_40 = local_a8;
            local_110 = 10;
            local_60 = (void *)recovered_100070b0(uStack_a0 & 0xffffffff);
            local_110 = 0xb;
            recovered_10001030(local_60,local_40,uStack_a0 & 0xffffffff);
            iVar6 = Ram0000000000006800;
            if (((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
               ((uVar1 = Ram0000000000006808, 0xb < uVar1 &&
                (uVar1 = Ram0000000000006808, 0x53 < uVar1)))) {
              uVar1 = UINT_00006850;
              if ((code *)(ulong)uVar1 != (code *)0x0) {
                local_110 = 0xc;
                (*(code *)(ulong)uVar1)(local_40);
              }
            }
            if (local_138 != (undefined4 *)0x0) {
              *local_138 = PF_PART4(uStack_a0, 4);
            }
            pvVar12 = local_60;
            if (local_140 != (undefined4 *)0x0) {
              *local_140 = (int)local_98;
            }
          }
        }
      }
    }
  }
  else {
LAB_10007fd2:
    lVar16 = -1;
    do {
      lVar5 = lVar16 + 1;
      lVar16 = lVar16 + 1;
    } while (local_68[lVar5] != '\0');
    if (local_c0 != (char *)0x0) {
      local_88 = local_c0;
    }
    if (lStack_b8 == lVar16) {
      pvVar12 = (void *)0x0;
      if (lStack_b8 != 0) {
        lVar16 = 0;
        do {
          if (local_88[lVar16] != local_68[lVar16]) goto LAB_1000802b;
          lVar16 = lVar16 + 1;
        } while (lStack_b8 != lVar16);
      }
    }
    else {
LAB_1000802b:
      iVar6 = Ram0000000000006800;
      if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
          (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x5b < uVar1)
         ) {
        uVar1 = UINT_00006858;
        if ((code *)(ulong)uVar1 != (code *)0x0) {
          local_110 = 9;
          iVar6 = (*(code *)(ulong)uVar1)(local_68,&local_a8);
          if (iVar6 != 0) goto LAB_10008099;
        }
      }
      pvVar12 = (void *)0x0;
    }
  }
  recovered_100070e0(local_c0);
LAB_10008192:
  recovered_100075d0(&local_118);
  return (ulong)pvVar12;
}

#undef DAT_100092ca
#undef DAT_100092cc
#undef DAT_100094ad
#undef DAT_10009510
#undef LAB_100081b3
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006858
#undef auStack_148
#undef lStack_b8
#undef local_110
#undef local_118
#undef local_120
#undef local_130
#undef local_138
#undef local_140
#undef local_34
#undef local_40
#undef local_48
#undef local_58
#undef local_60
#undef local_68
#undef local_70
#undef local_80
#undef local_88
#undef local_98
#undef local_a8
#undef local_b0
#undef local_c0
#undef local_d8
#undef local_e0
#undef local_e8
#undef local_f0
#undef local_f8
#undef pvStack_128
#undef pvStack_50
#undef pvStack_78
#undef uStack_a0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006868 (*(uint *)(0x6868U))
undefined8 recovered_1000a950(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;
  char *in_RDI;
  float in_XMM0_Da;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x6b < uVar2)) {
    uVar2 = UINT_00006868;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100082b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(in_RDI,in_XMM0_Da);
      return pvVar3;
    }
  }
  return 0;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006868

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006870 (*(uint *)(0x6870U))
void recovered_1000a9a0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  void *in_RDI;
  float in_XMM0_Da;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x73 < uVar2)) {
    uVar2 = UINT_00006870;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10008301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(in_RDI,in_XMM0_Da);
      return;
    }
  }
  return;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006870

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006850 (*(uint *)(0x6850U))
#define UINT_00006874 (*(uint *)(0x6874U))
#define _DAT_100092c0 (*(double *)(((uintptr_t)pf_module_state + 0x1e5U)))
#define local_38 (*(void * *)(frame + 16))
#define uStack_24 (*(undefined4 *)(frame + 36))
#define uStack_28 (*(uint *)(frame + 32))
#define uStack_2c (*(uint *)(frame + 28))
#define uStack_30 (*(uint *)(frame + 24))
undefined8 recovered_1000a9f0(long param_1,long param_2)

{
  unsigned char frame[104] = {0};

  uint uVar1;
  void *src;
  int iVar2;
  undefined8 *puVar3;
  void *dst;
  uint in_ECX;
  uint in_EDX;
  uint in_R8D;
  ulong bytes;
  double in_XMM0_Qa;
  double dVar4;

  local_38 = (void *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if ((((param_2 != 0 && param_1 != 0) && (iVar2 = Ram0000000000006800, iVar2 == 0x50414d57)) &&
      (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x77 < uVar1)))) {
    uVar1 = UINT_00006874;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      dVar4 = DAT_10009128;
      if (in_XMM0_Qa <= DAT_10009128) {
        dVar4 = in_XMM0_Qa;
      }
      iVar2 = (*(code *)(ulong)uVar1)
                        ((void *)param_1,(char *)param_2,in_EDX,in_ECX,in_R8D,
                         (uint)(long)(double)(~-(ulong)(in_XMM0_Qa < 0.0) &
                                             (ulong)(dVar4 * _DAT_100092c0)),&local_38);
      src = local_38;
      if (iVar2 != 0) {
        if (uStack_28 != 0 && (uStack_2c != 0 && local_38 != (void *)0x0)) {
          bytes = (ulong)uStack_28 * (ulong)uStack_2c * 4;
          if ((ulong)uStack_30 != 0) {
            bytes = (ulong)uStack_30;
          }
          puVar3 = (undefined8 *)recovered_10007080(0x20);
          *puVar3 = CONCAT44(uStack_28,uStack_2c);
          dst = (void *)recovered_100070b0(bytes);
          puVar3[1] = dst;
          recovered_10001030(dst,src,bytes);
          puVar3[2] = 0;
          puVar3[3] = 0;
          iVar2 = Ram0000000000006800;
          if (iVar2 != 0x50414d57) {
            return puVar3;
          }
          iVar2 = Ram0000000000006804;
          if (iVar2 == 0) {
            return puVar3;
          }
          uVar1 = Ram0000000000006808;
          if (uVar1 < 0xc) {
            return puVar3;
          }
          uVar1 = Ram0000000000006808;
          if (uVar1 < 0x54) {
            return puVar3;
          }
          uVar1 = UINT_00006850;
          if ((code *)(ulong)uVar1 == (code *)0x0) {
            return puVar3;
          }
          (*(code *)(ulong)uVar1)(src);
          return puVar3;
        }
        if (((local_38 != (void *)0x0) && (iVar2 = Ram0000000000006800, iVar2 == 0x50414d57)) &&
           ((iVar2 = Ram0000000000006804, iVar2 != 0 &&
            ((uVar1 = Ram0000000000006808, 0xb < uVar1 &&
             (uVar1 = Ram0000000000006808, 0x53 < uVar1)))))) {
          uVar1 = UINT_00006850;
          if ((code *)(ulong)uVar1 != (code *)0x0) {
            (*(code *)(ulong)uVar1)(local_38);
          }
        }
      }
    }
  }
  return 0;
}

#undef DAT_10009128
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006874
#undef _DAT_100092c0
#undef local_38
#undef uStack_24
#undef uStack_28
#undef uStack_2c
#undef uStack_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#define UINT_00006878 (*(uint *)(0x6878U))
void recovered_1000abd0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  void *in_RDI;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x7b < uVar2)) {
    uVar2 = UINT_00006878;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10008531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(in_RDI);
      return;
    }
  }
  return;
}

#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006878

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_40 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 32))
#define local_48 (*(long *)(frame + 16))
void recovered_1000ac20(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[120] = {0};

  undefined8 *puVar1;
  long lVar2;
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
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
        recovered_1000ac20(&local_48,(long)(puVar8 + uVar11),uVar12);
        lVar2 = *param_1;
        *param_1 = local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = lVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_100070e0(lVar2);
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
      puVar8 = (undefined1 *)recovered_10007080(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10008766;
  puVar8 = (undefined1 *)recovered_10007080(uVar13 + 1);
  *puVar8 = 0;
  lVar2 = *param_1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar12 = 0;
    if ((3 < uVar11) && (0x1f < (ulong)((long)puVar8 - lVar2))) {
      if (uVar11 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar5 = ((undefined8 *)(lVar2 + uVar9))[1];
          puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar9);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)(puVar8 + uVar9) = *(undefined8 *)(lVar2 + uVar9);
          *(undefined8 *)((long)(puVar8 + uVar9) + 8) = uVar5;
          *(undefined8 *)(puVar8 + uVar9 + 0x10) = uVar6;
          *(undefined8 *)((long)(puVar8 + uVar9 + 0x10) + 8) = uVar7;
          uVar9 = uVar9 + 0x20;
        } while (uVar12 != uVar9);
        if (uVar11 == uVar12) goto LAB_1000874f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_100086e5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000874f;
    }
LAB_100086e5:
    uVar10 = uVar11 & 3;
    uVar9 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar8[uVar9] = *(undefined1 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar11 < 0xfffffffffffffffd) {
      do {
        puVar8[uVar9] = *(undefined1 *)(lVar2 + uVar9);
        puVar8[uVar9 + 1] = *(undefined1 *)(lVar2 + 1 + uVar9);
        puVar8[uVar9 + 2] = *(undefined1 *)(lVar2 + 2 + uVar9);
        puVar8[uVar9 + 3] = *(undefined1 *)(lVar2 + 3 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar11 != uVar9);
    }
  }
LAB_1000874f:
  puVar8[uVar11] = 0;
  recovered_100070e0(lVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_10008766:
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
#undef local_38
#undef local_48

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_1000a0d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xbb5U)))
void recovered_1000aed0(char param_1)

{
  unsigned char frame[64] = {0};

  if ((byte)(param_1 - 0x30U) < 10) {
    *(&PTR_DAT_1000a0d0)[(byte)(param_1 - 0x30U)] = 1;
  }
  return;
}

#undef PTR_DAT_1000a0d0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000af00(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x18;
    do {
      lVar2 = lVar2 + -0x18;
      recovered_100070e0(*(undefined8 *)(*param_1 + lVar2));
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_100070e0(*param_1);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
long recovered_1000af60(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar8 = 4;
    if (uVar6 != 0) {
      uVar8 = uVar6 * 2;
    }
    if (uVar6 < uVar8) {
      lVar4 = recovered_10007080(uVar8 * 0x18);
      if (param_1[1] != 0) {
        lVar7 = 8;
        uVar6 = 0;
        do {
          lVar2 = *param_1;
          *(undefined8 *)(lVar4 + -8 + lVar7) = *(undefined8 *)(lVar2 + -8 + lVar7);
          uVar3 = ((undefined8 *)(lVar2 + lVar7))[1];
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          ((undefined8 *)(lVar4 + lVar7))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar2 + -8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar2 + 8 + lVar7) = 0;
          recovered_100070e0(0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_100070e0(*param_1);
      *param_1 = lVar4;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18) = 0;
  puVar5 = &DAT_100092cc;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*param_2;
  }
  recovered_1000ac20((long *)(lVar4 + uVar6 * 0x18),(long)puVar5,param_2[1]);
  lVar4 = param_1[1];
  param_1[1] = lVar4 + 1;
  return lVar4 * 0x18 + *param_1;
}

#undef DAT_100092cc

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_1000b080(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;

  if (param_3 == 0 || param_2 == 0) {
    return param_1;
  }
  puVar6 = (undefined1 *)*param_1;
  if (puVar6 != (undefined1 *)0x0) {
    uVar14 = param_1[1];
    uVar12 = param_2 - (long)puVar6;
    uVar5 = 0;
LAB_100089e0:
    if (uVar12 != uVar5) goto code_r0x100089e5;
    uVar5 = uVar14 - uVar12;
    if (param_3 <= uVar14 - uVar12) {
      uVar5 = param_3;
    }
    param_3 = uVar5;
    uVar5 = uVar14 + param_3;
    puVar7 = puVar6;
    if (uVar5 <= (ulong)param_1[2]) goto LAB_10008d70;
    puVar7 = (undefined1 *)recovered_10007080(uVar5 + 1);
    *puVar7 = 0;
    lVar13 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 == 0) goto LAB_10008d4f;
    uVar10 = 0;
    if ((uVar8 < 4) || ((ulong)((long)puVar7 - lVar13) < 0x20)) goto LAB_10008ce5;
    if (uVar8 < 0x20) {
      uVar9 = 0;
      goto LAB_10008cba;
    }
    uVar10 = uVar8 & 0xffffffffffffffe0;
    uVar9 = 0;
    do {
      uVar2 = ((undefined8 *)(lVar13 + uVar9))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar9);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      *(undefined8 *)(puVar7 + uVar9) = *(undefined8 *)(lVar13 + uVar9);
      *(undefined8 *)((long)(puVar7 + uVar9) + 8) = uVar2;
      *(undefined8 *)(puVar7 + uVar9 + 0x10) = uVar3;
      *(undefined8 *)((long)(puVar7 + uVar9 + 0x10) + 8) = uVar4;
      uVar9 = uVar9 + 0x20;
    } while (uVar10 != uVar9);
    if (uVar8 != uVar10) {
      uVar9 = uVar10;
      if ((uVar8 & 0x1c) != 0) {
LAB_10008cba:
        uVar10 = uVar8 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)(lVar13 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar10 != uVar9);
        if (uVar8 == uVar10) goto LAB_10008d4f;
      }
LAB_10008ce5:
      uVar11 = uVar8 & 3;
      uVar9 = uVar10;
      if (uVar11 != 0) {
        do {
          puVar7[uVar9] = *(undefined1 *)(lVar13 + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar10 - uVar8 < 0xfffffffffffffffd) {
        do {
          puVar7[uVar9] = *(undefined1 *)(lVar13 + uVar9);
          puVar7[uVar9 + 1] = *(undefined1 *)(lVar13 + 1 + uVar9);
          puVar7[uVar9 + 2] = *(undefined1 *)(lVar13 + 2 + uVar9);
          puVar7[uVar9 + 3] = *(undefined1 *)(lVar13 + 3 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
      }
    }
LAB_10008d4f:
    puVar7[uVar8] = 0;
    recovered_100070e0(lVar13);
    *param_1 = (long)puVar7;
    param_1[2] = uVar5;
LAB_10008d70:
    if (param_3 == 0) goto LAB_10008c5e;
    uVar5 = (ulong)((uint)param_3 & 3);
    if (param_3 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined1 *)(uVar8 + *param_1 + uVar14) = *(undefined1 *)(uVar8 + *param_1 + uVar12);
        *(undefined1 *)(uVar8 + *param_1 + 1 + uVar14) =
             *(undefined1 *)(uVar8 + *param_1 + uVar12 + 1);
        *(undefined1 *)(uVar8 + *param_1 + 2 + uVar14) =
             *(undefined1 *)(uVar8 + *param_1 + 2 + uVar12);
        *(undefined1 *)(uVar8 + *param_1 + uVar14 + 3) =
             *(undefined1 *)(uVar8 + *param_1 + 3 + uVar12);
        uVar8 = uVar8 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar8);
    }
    if (uVar5 != 0) {
      lVar15 = uVar14 + uVar8;
      lVar13 = (param_2 + uVar8) - (long)puVar6;
      do {
        *(undefined1 *)(*param_1 + lVar15) = *(undefined1 *)(*param_1 + lVar13);
        lVar15 = lVar15 + 1;
        lVar13 = lVar13 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    goto LAB_10008c5b;
  }
  uVar14 = param_1[1];
LAB_100089f3:
  uVar14 = uVar14 + param_3;
  if (uVar14 <= (ulong)param_1[2]) goto LAB_10008bb6;
  puVar6 = (undefined1 *)recovered_10007080(uVar14 + 1);
  *puVar6 = 0;
  lVar13 = *param_1;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar12 = 0;
    if ((3 < uVar5) && (0x1f < (ulong)((long)puVar6 - lVar13))) {
      if (uVar5 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar12 = uVar5 & 0xffffffffffffffe0;
        uVar8 = 0;
        do {
          uVar2 = ((undefined8 *)(lVar13 + uVar8))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + uVar8);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          *(undefined8 *)(puVar6 + uVar8) = *(undefined8 *)(lVar13 + uVar8);
          *(undefined8 *)((long)(puVar6 + uVar8) + 8) = uVar2;
          *(undefined8 *)(puVar6 + uVar8 + 0x10) = uVar3;
          *(undefined8 *)((long)(puVar6 + uVar8 + 0x10) + 8) = uVar4;
          uVar8 = uVar8 + 0x20;
        } while (uVar12 != uVar8);
        if (uVar5 == uVar12) goto LAB_10008b9f;
        uVar8 = uVar12;
        if ((uVar5 & 0x1c) == 0) goto LAB_10008b35;
      }
      uVar12 = uVar5 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar6 + uVar8) = *(undefined4 *)(lVar13 + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar12 != uVar8);
      if (uVar5 == uVar12) goto LAB_10008b9f;
    }
LAB_10008b35:
    uVar10 = uVar5 & 3;
    uVar8 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar6[uVar8] = *(undefined1 *)(lVar13 + uVar8);
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar5 < 0xfffffffffffffffd) {
      do {
        puVar6[uVar8] = *(undefined1 *)(lVar13 + uVar8);
        puVar6[uVar8 + 1] = *(undefined1 *)(lVar13 + 1 + uVar8);
        puVar6[uVar8 + 2] = *(undefined1 *)(lVar13 + 2 + uVar8);
        puVar6[uVar8 + 3] = *(undefined1 *)(lVar13 + 3 + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar5 != uVar8);
    }
  }
LAB_10008b9f:
  puVar6[uVar5] = 0;
  recovered_100070e0(lVar13);
  *param_1 = (long)puVar6;
  param_1[2] = uVar14;
LAB_10008bb6:
  uVar14 = (ulong)((uint)param_3 & 3);
  if (param_3 - 1 < 3) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      *(undefined1 *)(uVar5 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar5);
      *(undefined1 *)(uVar5 + 1 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 1 + uVar5);
      *(undefined1 *)(uVar5 + 2 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 2 + uVar5);
      *(undefined1 *)(uVar5 + 3 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 3 + uVar5);
      uVar5 = uVar5 + 4;
    } while ((param_3 & 0xfffffffffffffffc) != uVar5);
  }
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)(uVar5 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar5);
    uVar5 = uVar5 + 1;
  }
LAB_10008c5b:
  puVar7 = (undefined1 *)*param_1;
LAB_10008c5e:
  lVar13 = param_3 + param_1[1];
  param_1[1] = lVar13;
  puVar7[lVar13] = 0;
  return param_1;
code_r0x100089e5:
  uVar5 = uVar5 + 1;
  if (uVar14 < uVar5) goto LAB_100089f3;
  goto LAB_100089e0;
}

