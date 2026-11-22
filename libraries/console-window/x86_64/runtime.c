/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000d120
#define DAT_1000d120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1978U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

void recovered_10000560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000d120 = 0;
  recovered_10000580();
  return;
}

#undef DAT_1000d120

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
#define DAT_1000d120 (*(char *)(((uintptr_t)pf_module_state + 0x1978U)))
#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1980U)))
#undef DAT_1000d130
#define DAT_1000d130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1988U)))
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
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1980U)))
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
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1980U)))
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

#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1980U)))
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
  for (plVar1 = DAT_1000d128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000d128

#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1980U)))
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
  for (plVar1 = DAT_1000d128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1000d128

#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1980U)))
#undef DAT_1000d130
#define DAT_1000d130 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1988U)))
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

void * recovered_10001030(void *destination,void *source,ulong count)

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
LAB_1000104f:
    if (count == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)source ^ (uint)destination) & 7) == 0) {
    if (((ulong)destination & 7) == 0) {
LAB_1000123e:
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
                    goto LAB_1000123e;
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
        if (uVar6 == uVar9) goto LAB_1000104f;
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
    goto LAB_1000104f;
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
        goto LAB_10001260;
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
LAB_10001260:
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
 * Address: 0x10001470
 */

void * recovered_10001470(void *destination,void *source,ulong count)

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
LAB_1000180a:
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
                      goto LAB_1000180a;
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
          if (uVar11 == uVar16) goto LAB_10001a68;
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
LAB_10001a68:
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
          goto LAB_1000182c;
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
LAB_1000182c:
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
LAB_100015fe:
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
                    goto LAB_100015fe;
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
        if (uVar12 == uVar13) goto LAB_10001bca;
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
LAB_10001bca:
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
        goto LAB_10001c8f;
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
LAB_10001c8f:
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
 * Address: 0x10001d30
 */

void * recovered_10001d30(void *destination,int value,ulong count)

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
LAB_10001e7d:
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
                    goto LAB_10001e7d;
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
        if (uVar6 == uVar10) goto LAB_10001fb1;
      }
      do {
        *(undefined8 *)destination = uVar5;
        destination = (void *)((long)destination + 8);
        count = count - 8;
      } while (7 < count);
    }
  }
LAB_10001fb1:
  if (count == 0) {
    return pvVar3;
  }
  if (count < 4) {
LAB_10001fc0:
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
        goto LAB_10001fc0;
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

int recovered_10002620(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 7) != 0) goto LAB_10002853;
    uVar11 = count;
    puVar8 = right;
    puVar10 = left;
    if (((ulong)left & 7) != 0) {
      bVar1 = *(byte *)left;
      bVar5 = *(byte *)right;
      if (bVar1 != bVar5) {
LAB_100027b3:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002908:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)left + 1);
      puVar8 = (ulong *)((long)right + 1);
      uVar11 = count - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_100027b3;
        puVar10 = (ulong *)((long)left + 2);
        puVar8 = (ulong *)((long)right + 2);
        uVar11 = count - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_100027b3;
          puVar10 = (ulong *)((long)left + 3);
          puVar8 = (ulong *)((long)right + 3);
          uVar11 = count - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_100027b3;
            puVar10 = (ulong *)((long)left + 4);
            puVar8 = (ulong *)((long)right + 4);
            uVar11 = count - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_100027b3;
              puVar10 = (ulong *)((long)left + 5);
              puVar8 = (ulong *)((long)right + 5);
              uVar11 = count - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_100027b3;
                puVar10 = (ulong *)((long)left + 6);
                puVar8 = (ulong *)((long)right + 6);
                uVar11 = count - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_100027b3;
                  puVar10 = (ulong *)((long)left + 7);
                  puVar8 = (ulong *)((long)right + 7);
                  uVar11 = count - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_100027b3;
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
    for (; 7 < count; count = count - 8) {
      if (*(ulong *)left != *(ulong *)right) {
        iVar3 = recovered_10002920(left,right);
        return iVar3;
      }
      right = (ulong *)((long)right + 8);
      left = (ulong *)((long)left + 8);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_10002853:
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

ulong recovered_10002aa0(char *text)

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
 * Address: 0x10002ad0
 */

int recovered_10002ad0(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10002af3;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002af3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
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


#undef DAT_1000b9a0
#define DAT_1000b9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003150
 */

undefined * recovered_10003150(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b9a0;
}

#undef DAT_1000b9a0

#undef PTR_DAT_1000d000
#define PTR_DAT_1000d000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1858U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

undefined ** recovered_10003160(void)

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
#undef local_28
#undef uStack_20
#undef uStack_18

#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
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
          param_1 = param_1 * DAT_1000b7b0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 *
                    DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0;
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

#undef DAT_1000b7b0

#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b830
#define DAT_1000b830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000b830
#define _DAT_1000b830 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
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
  dVar2 = (double)(_DAT_1000b830 ^ (ulong)param_1);
  if ((double)(_DAT_1000b830 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000b7b8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000b7b0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000b7b8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000b7b0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000b830 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b830
#undef _DAT_1000b830

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


#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
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
      return DAT_1000b7b8;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000b7b8;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000b7b8 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000b7b8

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


#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
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
         (ulong)(DAT_1000b7b8 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000b7b8

#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
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
    if (param_1 <= DAT_1000b7b8) {
      dVar1 = DAT_1000b7b8;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000b7b0;
  }
  return dVar1;
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8

#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7c0
#define DAT_1000b7c0 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000b7c8
#define DAT_1000b7c8 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000b7d8
#define DAT_1000b7d8 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000b7e0
#define DAT_1000b7e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000b7e8
#define DAT_1000b7e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000b840
#define DAT_1000b840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_1000b850
#define DAT_1000b850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_1000b860
#define DAT_1000b860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_1000b870
#define DAT_1000b870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef _DAT_1000b7e0
#define _DAT_1000b7e0 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_1000b7e8
#define _DAT_1000b7e8 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_1000b840
#define _DAT_1000b840 (*(uint128 *)(((uintptr_t)pf_module_state + 0x98U)))
#undef _DAT_1000b850
#define _DAT_1000b850 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef _DAT_1000b860
#define _DAT_1000b860 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef _DAT_1000b870
#define _DAT_1000b870 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc8U)))
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
    if (DAT_1000b7c8 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000b7b0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000b7c8 < param_1);
    }
    for (; param_1 < DAT_1000b7d0; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000b7d8 + param_1) / (param_1 + DAT_1000b7b8);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000b840);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000b850);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000b860);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000b870);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000b7e0 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000b7e8;
  }
  return DAT_1000b7c0;
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b7c0
#undef DAT_1000b7c8
#undef DAT_1000b7d0
#undef DAT_1000b7d8
#undef DAT_1000b7e0
#undef DAT_1000b7e8
#undef DAT_1000b840
#undef DAT_1000b850
#undef DAT_1000b860
#undef DAT_1000b870
#undef _DAT_1000b7e0
#undef _DAT_1000b7e8
#undef _DAT_1000b840
#undef _DAT_1000b850
#undef _DAT_1000b860
#undef _DAT_1000b870

#undef DAT_1000b880
#define DAT_1000b880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003850
 */

long recovered_10003850(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000b880 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000b880

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7f0
#define DAT_1000b7f0 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000b7f8
#define DAT_1000b7f8 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000b800
#define DAT_1000b800 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000b808
#define DAT_1000b808 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000b810
#define DAT_1000b810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_1000b890
#define DAT_1000b890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
#undef _DAT_1000b810
#define _DAT_1000b810 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_1000b890
#define _DAT_1000b890 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003880(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000b7f0 < param_1; param_1 = param_1 + DAT_1000b7f8) {
  }
  for (; param_1 < DAT_1000b800; param_1 = param_1 + DAT_1000b808) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000b890);
  return ((dVar1 / _DAT_1000b810 + DAT_1000b7b8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000b7b8
#undef DAT_1000b7f0
#undef DAT_1000b7f8
#undef DAT_1000b800
#undef DAT_1000b808
#undef DAT_1000b810
#undef DAT_1000b890
#undef _DAT_1000b810
#undef _DAT_1000b890

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7f0
#define DAT_1000b7f0 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000b7f8
#define DAT_1000b7f8 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000b800
#define DAT_1000b800 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000b808
#define DAT_1000b808 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000b818
#define DAT_1000b818 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_1000b8a0
#define DAT_1000b8a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef _DAT_1000b8a0
#define _DAT_1000b8a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003930(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000b7f0 < param_1; param_1 = param_1 + DAT_1000b7f8) {
  }
  for (; param_1 < DAT_1000b800; param_1 = param_1 + DAT_1000b808) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000b8a0);
  return (DAT_1000b818 * dVar1 + DAT_1000b7b8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000b7b8
#undef DAT_1000b7f0
#undef DAT_1000b7f8
#undef DAT_1000b800
#undef DAT_1000b808
#undef DAT_1000b818
#undef DAT_1000b8a0
#undef _DAT_1000b8a0

#undef DAT_1000b830
#define DAT_1000b830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000b830
#define _DAT_1000b830 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100039d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000b830 ^ (ulong)param_1);
  if ((double)(_DAT_1000b830 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000b830
#undef _DAT_1000b830

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


#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b830
#define DAT_1000b830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef UNK_1000b834
#define UNK_1000b834 (*(uint *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000b830
#define _DAT_1000b830 (*(uint *)(((uintptr_t)pf_module_state + 0x88U)))
#undef uRam000000001000b834
#define uRam000000001000b834 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cU)))
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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001000b834,
                             SUB84(dVar2,0) ^ _DAT_1000b830));
  }
  iVar1 = 0;
  if (DAT_1000b7b8 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000b7b0;
      iVar1 = iVar1 + 1;
    } while (DAT_1000b7b8 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000b7b0)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000b834,_DAT_1000b830));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b830
#undef UNK_1000b834
#undef _DAT_1000b830
#undef uRam000000001000b834

#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
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
          dVar3 = dVar3 * DAT_1000b7b0;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 *
                  DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0;
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

#undef DAT_1000b7b0

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b8c0
#define DAT_1000b8c0 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
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
    return DAT_1000b8c0;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000b7b8;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000b7b8 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000b7b8
#undef DAT_1000b8c0

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


#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
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
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000b7b8 + dVar2) & uVar1);
}

#undef DAT_1000b7b8

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
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
                    (ulong)(DAT_1000b7b8 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000b7b8

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000b7b8 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000b7b8

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


#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7c8
#define DAT_1000b7c8 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000b7d8
#define DAT_1000b7d8 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000b7e0
#define DAT_1000b7e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000b7e8
#define DAT_1000b7e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000b840
#define DAT_1000b840 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_1000b850
#define DAT_1000b850 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_1000b860
#define DAT_1000b860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_1000b870
#define DAT_1000b870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_1000b8c4
#define DAT_1000b8c4 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000b8c8
#define DAT_1000b8c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef _DAT_1000b7e0
#define _DAT_1000b7e0 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_1000b7e8
#define _DAT_1000b7e8 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_1000b840
#define _DAT_1000b840 (*(uint128 *)(((uintptr_t)pf_module_state + 0x98U)))
#undef _DAT_1000b850
#define _DAT_1000b850 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef _DAT_1000b860
#define _DAT_1000b860 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef _DAT_1000b870
#define _DAT_1000b870 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef _DAT_1000b8c8
#define _DAT_1000b8c8 (*(float *)(((uintptr_t)pf_module_state + 0x120U)))
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
    if (_DAT_1000b8c8 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000b7b0;
        iVar1 = iVar1 + 1;
      } while (DAT_1000b7c8 < dVar2);
    }
    for (; dVar2 < DAT_1000b7d0; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000b7d8 + dVar2) / (dVar2 + DAT_1000b7b8);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000b840);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000b850);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000b860);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000b870);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000b7e0 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000b7e8);
  }
  return DAT_1000b8c4;
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b7c8
#undef DAT_1000b7d0
#undef DAT_1000b7d8
#undef DAT_1000b7e0
#undef DAT_1000b7e8
#undef DAT_1000b840
#undef DAT_1000b850
#undef DAT_1000b860
#undef DAT_1000b870
#undef DAT_1000b8c4
#undef DAT_1000b8c8
#undef _DAT_1000b7e0
#undef _DAT_1000b7e8
#undef _DAT_1000b840
#undef _DAT_1000b850
#undef _DAT_1000b860
#undef _DAT_1000b870
#undef _DAT_1000b8c8

#undef DAT_1000b880
#define DAT_1000b880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c0
 */

long recovered_100041c0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000b880 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000b880

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7f0
#define DAT_1000b7f0 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000b7f8
#define DAT_1000b7f8 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000b800
#define DAT_1000b800 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000b808
#define DAT_1000b808 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000b810
#define DAT_1000b810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_1000b890
#define DAT_1000b890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
#undef _DAT_1000b810
#define _DAT_1000b810 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_1000b890
#define _DAT_1000b890 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe8U)))
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

  for (dVar1 = (double)param_1; DAT_1000b7f0 < dVar1; dVar1 = dVar1 + DAT_1000b7f8) {
  }
  for (; dVar1 < DAT_1000b800; dVar1 = dVar1 + DAT_1000b808) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000b890);
  return (float)(((dVar2 / _DAT_1000b810 + DAT_1000b7b8 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000b7b8
#undef DAT_1000b7f0
#undef DAT_1000b7f8
#undef DAT_1000b800
#undef DAT_1000b808
#undef DAT_1000b810
#undef DAT_1000b890
#undef _DAT_1000b810
#undef _DAT_1000b890

#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7f0
#define DAT_1000b7f0 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000b7f8
#define DAT_1000b7f8 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1000b800
#define DAT_1000b800 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_1000b808
#define DAT_1000b808 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_1000b818
#define DAT_1000b818 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_1000b8a0
#define DAT_1000b8a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef _DAT_1000b8a0
#define _DAT_1000b8a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100042a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000b7f0 < dVar1; dVar1 = dVar1 + DAT_1000b7f8) {
  }
  for (; dVar1 < DAT_1000b800; dVar1 = dVar1 + DAT_1000b808) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000b8a0);
  return (float)((DAT_1000b818 * dVar1 + DAT_1000b7b8 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000b7b8
#undef DAT_1000b7f0
#undef DAT_1000b7f8
#undef DAT_1000b800
#undef DAT_1000b808
#undef DAT_1000b818
#undef DAT_1000b8a0
#undef _DAT_1000b8a0

#undef DAT_1000b8b0
#define DAT_1000b8b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_1000b8b4
#define UNK_1000b8b4 (*(uint *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_1000b8b0
#define _DAT_1000b8b0 (*(uint *)(((uintptr_t)pf_module_state + 0x108U)))
#undef uRam000000001000b8b4
#define uRam000000001000b8b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10cU)))
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
  fVar2 = (float)(_DAT_1000b8b0 ^ (uint)fVar1);
  if ((float)(_DAT_1000b8b0 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000b8b4 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000b8b0
#undef UNK_1000b8b4
#undef _DAT_1000b8b0
#undef uRam000000001000b8b4

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


#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b828
#define DAT_1000b828 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_1000b830
#define DAT_1000b830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000b830
#define _DAT_1000b830 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
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
    dVar11 = dVar11 * DAT_1000b828 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000b7b8;
      do {
        dVar12 = dVar12 * DAT_1000b828 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000b828;
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
                dVar11 = dVar11 * DAT_1000b7b0;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 *
                         DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0 * DAT_1000b7b0;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000b830);
  }
  return dVar11;
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b828
#undef DAT_1000b830
#undef _DAT_1000b830

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


#undef DAT_1000b828
#define DAT_1000b828 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_1000b830
#define DAT_1000b830 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef DAT_1000b9a5
#define DAT_1000b9a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdU)))
#undef _DAT_1000b830
#define _DAT_1000b830 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef str_1000b9ac
#define str_1000b9ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204U)))
#undef str_1000b9bd
#define str_1000b9bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
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
  uVar6 = _DAT_1000b830;
  dVar5 = DAT_1000b828;
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
      abStack_7a[uVar18 + 2] = str_1000b9bd[uVar22 % 10];
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
    pcVar20 = str_1000b9bd;
    if (*param_3 == 0x58) {
      pcVar20 = str_1000b9ac;
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
        abStack_7a[uVar17 + 2] = str_1000b9bd[uVar22 % 10];
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
      abStack_7a[uVar17 + 2] = str_1000b9bd[(uint)uVar22 & 0xf];
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
      pbVar13 = &DAT_1000b9a5;
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
      abStack_7a[uVar18 + 2] = str_1000b9bd[uVar12 % 10];
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

#undef DAT_1000b828
#undef DAT_1000b830
#undef DAT_1000b9a5
#undef _DAT_1000b830
#undef str_1000b9ac
#undef str_1000b9bd
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
#undef DAT_1000d128
#define DAT_1000d128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1980U)))
#undef DAT_1000d130
#define DAT_1000d130 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1988U)))
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

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000d140
#define DAT_1000d140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1998U)))
#undef DAT_1000d150
#define DAT_1000d150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19a8U)))
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
 * Address: 0x100058f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100058f0(long param_1,long param_2)

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
        if (DAT_1000d140 != 0) {
          DAT_1000d140 = DAT_1000d140 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000d140 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001030(local_238,&DAT_1000d150,DAT_1000d140);
            uVar3 = DAT_1000d140;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_1000d140 = 0;
        }
        else {
          if (DAT_1000d140 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001030(local_238,&DAT_1000d150,DAT_1000d140);
            local_238[DAT_1000d140] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            DAT_1000d140 = 0;
          }
          pcVar1 = &DAT_1000d150 + DAT_1000d140;
          DAT_1000d140 = DAT_1000d140 + 1;
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
#undef DAT_1000d140
#undef DAT_1000d150
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
#undef DAT_1000d140
#define DAT_1000d140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1998U)))
#undef DAT_1000d150
#define DAT_1000d150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19a8U)))
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

  ulong uVar1;

  if (DAT_1000d140 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001030(local_208,&DAT_1000d150,DAT_1000d140);
    uVar1 = DAT_1000d140;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_1000d140 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000d140
#undef DAT_1000d150
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
#undef DAT_1000d140
#define DAT_1000d140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1998U)))
#undef DAT_1000d150
#define DAT_1000d150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19a8U)))
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
 * Address: 0x10005b60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005b60(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000d140 != 0) {
    recovered_10001030(local_208,&DAT_1000d150,DAT_1000d140);
    local_208[DAT_1000d140] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1000d140 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000d140
#undef DAT_1000d150
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1000b9a4
#define DAT_1000b9a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef DAT_1000b9ce
#define DAT_1000b9ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c00
 */

void recovered_10005c00(char *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_1000b9ce;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000b9a4;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_100056b0(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_100058f0((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000b9a4
#undef DAT_1000b9ce
#undef local_148

#undef DAT_1000b9ec
#define DAT_1000b9ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef str_1000b9d1
#define str_1000b9d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x229U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

void recovered_10005c60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002aa0(str_1000b9d1);
  recovered_100058f0(((uintptr_t)pf_module_state + 0x229U),uVar1);
  uVar1 = recovered_10002aa0(&DAT_1000b9ec);
  recovered_100058f0(((uintptr_t)pf_module_state + 0x244U),uVar1);
  return;
}

#undef DAT_1000b9ec
#undef str_1000b9d1

#undef DAT_1000b9ec
#define DAT_1000b9ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef str_1000b9ef
#define str_1000b9ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ca0
 */

void recovered_10005ca0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002aa0(str_1000b9ef);
  recovered_100058f0(((uintptr_t)pf_module_state + 0x247U),uVar1);
  uVar1 = recovered_10002aa0(&DAT_1000b9ec);
  recovered_100058f0(((uintptr_t)pf_module_state + 0x244U),uVar1);
  return;
}

#undef DAT_1000b9ec
#undef str_1000b9ef

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
#undef DAT_1000d140
#define DAT_1000d140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1998U)))
#undef DAT_1000d150
#define DAT_1000d150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19a8U)))
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
 * Address: 0x10005ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005ce0(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1000d140 != 0) {
    recovered_10001030(local_228,&DAT_1000d150,DAT_1000d140);
    local_228[DAT_1000d140] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_1000d140 = 0;
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
#undef DAT_1000d140
#undef DAT_1000d150
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
#undef DAT_1000b9ce
#define DAT_1000b9ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226U)))
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_1000ba83
#define str_1000ba83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
#undef str_1000ba90
#define str_1000ba90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_1000ba9e
#define str_1000ba9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e30
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005e30(char *param_1,long param_2)

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
  iVar3 = recovered_10002ad0(param_1,str_1000ba83);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_100060de:
    puVar5 = recovered_10000f40(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1000d060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d30(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_100056b0__8_((char *)(puVar5 + 1),0xf1,&DAT_1000b9ce,(ulonglong)param_1);
    return puVar5;
  }
  iVar4 = recovered_10002ad0(param_1,str_1000ba90);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_100060de;
  }
  iVar4 = recovered_10002ad0(param_1,str_1000ba9e);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_100060de;
  }
  puVar5 = recovered_10000f40(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1000d060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d30(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10002ff0((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar9 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10002ff0((char *)param_2,'a');
      bVar9 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar9;
  pcVar6 = recovered_10002ff0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10002ff0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10002ff0((char *)param_2,'+');
    bVar10 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar10;
  pcVar6 = recovered_10002ff0((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  pf_varargs_100056b0__8_((char *)(puVar5 + 1),0xf1,&DAT_1000b9ce,(ulonglong)param_1);
  recovered_10001d30(&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10002ff0((char *)param_2,'w');
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
          destination = recovered_10000fe0(*(void **)(puVar5 + 0x40),uVar7);
          if (destination == (void *)0x0) {
            DAT_1000d060 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_10006168;
          }
          *(void **)(puVar5 + 0x40) = destination;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = destination;
          count = (ulong)local_30;
        }
        else {
          destination = *(void **)(puVar5 + 0x40);
        }
        recovered_10001030(destination,(void *)(ulong)local_34,count);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x100060c2;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_1000d060 = 2;
LAB_10006168:
    recovered_10000f90(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x100060c2:
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
#undef DAT_1000b9ce
#undef DAT_1000d060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000ba83
#undef str_1000ba90
#undef str_1000ba9e
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
#undef DAT_1000b9ce
#define DAT_1000b9ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226U)))
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
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
#undef str_1000ba83
#define str_1000ba83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
#undef str_1000ba90
#define str_1000ba90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_1000ba9e
#define str_1000ba9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100061c0(char *param_1,long param_2,int *param_3)

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
        uStack_30 = 0x1000624a;
        iVar4 = (*(code *)(ulong)_DAT_00006838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_10006271;
        }
      }
      DAT_1000d060 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_10006271:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x10006288;
      recovered_10000f90(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10006290;
    recovered_10000f90(param_3);
    puVar7 = recovered_10005e30(param_1,param_2);
    return puVar7;
  }
  if (param_1 == (char *)0x0 || param_2 == 0) {
    DAT_1000d060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002ad0(param_1,str_1000ba83);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_100060de:
    puVar7 = recovered_10000f40(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_1000d060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d30(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    pf_varargs_100056b0__8_((char *)(puVar7 + 1),0xf1,&DAT_1000b9ce,(ulonglong)param_1);
    return puVar7;
  }
  iVar3 = recovered_10002ad0(param_1,str_1000ba90);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_100060de;
  }
  iVar3 = recovered_10002ad0(param_1,str_1000ba9e);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_100060de;
  }
  puVar7 = recovered_10000f40(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_1000d060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d30(puVar7,0,0x340);
  *puVar7 = 0;
  pcVar5 = recovered_10002ff0((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10002ff0((char *)param_2,'+');
    bVar9 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10002ff0((char *)param_2,'a');
      bVar9 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar7 + 0x49) = bVar9;
  pcVar5 = recovered_10002ff0((char *)param_2,'w');
  if ((pcVar5 == (char *)0x0) &&
     (pcVar5 = recovered_10002ff0((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
    pcVar5 = recovered_10002ff0((char *)param_2,'+');
    bVar10 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar7 + 0x125) = bVar10;
  pcVar5 = recovered_10002ff0((char *)param_2,'a');
  *(bool *)((long)puVar7 + 0x126) = pcVar5 != (char *)0x0;
  puVar7[0x48] = 0xffffffff;
  pf_varargs_100056b0__8_((char *)(puVar7 + 1),0xf1,&DAT_1000b9ce,(ulonglong)param_1);
  recovered_10001d30(&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10002ff0((char *)param_2,'w');
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
          destination = recovered_10000fe0(*(void **)(puVar7 + 0x40),uVar6);
          if (destination == (void *)0x0) {
            DAT_1000d060 = 0xc;
            *(undefined1 *)((long)puVar7 + 0x129) = 1;
            goto LAB_10006168;
          }
          *(void **)(puVar7 + 0x40) = destination;
          *(ulong *)(puVar7 + 0x44) = uVar6;
          *(void **)(puVar7 + 0x3e) = destination;
          count = uStack_30 & 0xffffffff;
        }
        else {
          destination = *(void **)(puVar7 + 0x40);
        }
        recovered_10001030(destination,(void *)(ulong)uStack_34,count);
      }
      else {
        *(ulong *)(puVar7 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar7 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar7 + 0x126);
      goto joined_r0x100060c2;
    }
  }
  else if (*(char *)((long)puVar7 + 0x125) == '\0') {
    DAT_1000d060 = 2;
LAB_10006168:
    recovered_10000f90(puVar7);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar7 + 0x126);
joined_r0x100060c2:
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
#undef DAT_1000b9ce
#undef DAT_1000d060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_1000ba83
#undef str_1000ba90
#undef str_1000ba9e
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
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
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
      DAT_1000d060 = 5;
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
#undef DAT_1000d060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006380
 */

ulong recovered_10006380(void *param_1,ulong param_2,ulong param_3,int *param_4)

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
          uVar3 = recovered_100064c0(param_4);
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
      recovered_10001030(param_1,(void *)(uVar4 + *(long *)(param_4 + 0x3e)),count);
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
#undef DAT_1000b9a4
#define DAT_1000b9a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef DAT_1000d140
#define DAT_1000d140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1998U)))
#undef DAT_1000d150
#define DAT_1000d150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19a8U)))
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
 * Address: 0x100064c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100064c0(int *param_1)

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
LAB_1000651a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_1000d140 != 0) {
      recovered_10001030(local_218,&DAT_1000d150,DAT_1000d140);
      local_218[DAT_1000d140] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_1000d140 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_1000b9a4,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10002aa0((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_1000651a;
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
#undef DAT_1000b9a4
#undef DAT_1000d140
#undef DAT_1000d150
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066b0
 */

long recovered_100066b0(void *param_1,long param_2,long param_3,uint *param_4)

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
    recovered_100058f0((long)param_1,uVar5);
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
      recovered_10001d30((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001030((void *)(uVar4 + *(long *)(param_4 + 0x40)),param_1,uVar5);
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
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006840
 */

undefined8 recovered_10006840(int *param_1,ulong param_2,int param_3)

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
  DAT_1000d060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000d060

#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

undefined8 recovered_100068c0(long param_1)

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
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
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
#undef DAT_1000d060
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
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
#define DAT_1000d060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b8U)))
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
    DAT_1000d060 = 0x16;
    return 0xffffffff;
  }
  recovered_10001d30(&local_2c,0,0xc);
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
 * Address: 0x10006c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10006c20(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10001d30(&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10006cdf;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        destination = recovered_10000f40((ulong)(local_30 + (local_30 == 0)));
        if (destination != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10001030(destination,(void *)(ulong)local_34,(ulong)local_30);
            uVar2 = (ulong)local_30;
          }
          *param_2 = destination;
          *param_3 = uVar2;
          uVar2 = CONCAT71((int7)((ulong)destination >> 8),1);
          goto LAB_10006cdf;
        }
      }
    }
  }
  uVar2 = 0;
LAB_10006cdf:
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

int recovered_10006df0(char *left,char *right,ulong count)

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


#undef DAT_1000ba12
#define DAT_1000ba12 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef str_1000ba15
#define str_1000ba15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_1000ba22
#define str_1000ba22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27aU)))
#undef str_1000ba2c
#define str_1000ba2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x284U)))
#undef str_1000ba40
#define str_1000ba40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x298U)))
#undef str_1000ba4e
#define str_1000ba4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_1000ba60
#define str_1000ba60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_1000ba6c
#define str_1000ba6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c4U)))
#undef str_1000ba7d
#define str_1000ba7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e30
 */

char * recovered_10006e30(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000ba12;
  default:
    return str_1000ba7d;
  case 2:
    return str_1000ba15;
  case 5:
    return str_1000ba22;
  case 9:
    return str_1000ba2c;
  case 0xc:
    return str_1000ba40;
  case 0xd:
    return str_1000ba4e;
  case 0x11:
    return str_1000ba60;
  case 0x16:
    return str_1000ba6c;
  }
}

#undef DAT_1000ba12
#undef str_1000ba15
#undef str_1000ba22
#undef str_1000ba2c
#undef str_1000ba40
#undef str_1000ba4e
#undef str_1000ba60
#undef str_1000ba6c
#undef str_1000ba7d

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


#undef DAT_1000d350
#define DAT_1000d350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ba8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f20
 */

void recovered_10006f20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000d350 = DAT_1000d350 + 1;
  return;
}

#undef DAT_1000d350

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006f40(void *context,uintptr_t unused){__asm__ volatile("movq 80(%rdi),%rsp\nmovq 64(%rdi),%rbp\nmovq 72(%rdi),%rdx\njmpq *%rdx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006f50(void *context) { __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006f80(void *context,int value) { __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx"); }


#undef DAT_10007001
#define DAT_10007001 (*(uint8_t *)(0x10007001U))
#undef DAT_1000babc
#define DAT_1000babc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x314U)))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_88 (*(undefined8 *)(frame + 24))
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
  local_60 = &DAT_1000babc;
  local_50 = &DAT_10007001;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10007001
#undef DAT_1000babc
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88

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


#undef DAT_1000d358
#define DAT_1000d358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bb0U)))
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
  *(long *)(param_1 + 0x10) = DAT_1000d358;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000d358 = param_1;
  lVar1 = recovered_10007470(param_1);
  return lVar1;
}

#undef DAT_1000d358

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007080
 */

void * recovered_10007080(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

void * recovered_100070b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return pvVar1;
}


#undef DAT_1000bacc
#define DAT_1000bacc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x324U)))
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
  local_60 = &DAT_1000bacc;
  local_50 = &LAB_1000714d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000bacc
#undef LAB_1000714d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000badc
#define DAT_1000badc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef LAB_100071ed
#define LAB_100071ed (*(uint8_t *)(0x100071edU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_48 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007180
 */

void recovered_10007180(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000badc;
  local_50 = &LAB_100071ed;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000badc
#undef LAB_100071ed
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_1000baec
#define DAT_1000baec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x344U)))
#undef LAB_1000728d
#define LAB_1000728d (*(uint8_t *)(0x1000728dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007220
 */

void recovered_10007220(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000baec;
  local_50 = &LAB_1000728d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000baec
#undef LAB_1000728d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000bafc
#define DAT_1000bafc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef LAB_1000732d
#define LAB_1000732d (*(uint8_t *)(0x1000732dU))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c0
 */

void recovered_100072c0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007030;
  local_60 = &DAT_1000bafc;
  local_50 = &LAB_1000732d;
  local_80 = 1;
  recovered_100075b0(&local_88);
  recovered_10000f90(param_1);
  recovered_100075d0(&local_88);
  return;
}

#undef DAT_1000bafc
#undef LAB_1000732d
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

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


#undef DAT_1000d358
#define DAT_1000d358 (*(void * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

void recovered_10007480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_1000d358;
  if (DAT_1000d358 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000d358 + 0x10);
    DAT_1000d358 = *(void **)((long)DAT_1000d358 + 0x10);
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

#undef DAT_1000d358

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


#undef DAT_1000d358
#define DAT_1000d358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
#undef DAT_1000d360
#define DAT_1000d360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bb8U)))
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

  if (DAT_1000d360 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_1000d360;
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
        puVar2 = DAT_1000d358;
        if (DAT_1000d358 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006fb0();
        }
        *(undefined1 *)(DAT_1000d358 + 5) = 1;
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

#undef DAT_1000d358
#undef DAT_1000d360
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1000d358
#define DAT_1000d358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007580
 */

void recovered_10007580(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000d358;
  if (DAT_1000d358 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006fb0();
  }
  *(undefined1 *)(DAT_1000d358 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007500(puVar1);
}

#undef DAT_1000d358

#undef DAT_1000d360
#define DAT_1000d360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b0
 */

void recovered_100075b0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000d360;
  DAT_1000d360 = param_1;
  return;
}

#undef DAT_1000d360

#undef DAT_1000d360
#define DAT_1000d360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d0
 */

void recovered_100075d0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000d360;
  if (DAT_1000d360 == param_1) {
    puVar2 = &DAT_1000d360;
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

#undef DAT_1000d360

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


#undef DAT_1000d360
#define DAT_1000d360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bb8U)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007630
 */

void recovered_10007630(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_1000d360 != (undefined8 *)0x0) {
    DAT_1000d360 = (undefined8 *)*DAT_1000d360;
  }
  recovered_10007650(param_1,in_RSI);
  if (DAT_1000d360 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_1000d360;
      if (DAT_1000d360 == puVar1) {
        DAT_1000d360[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100076dc:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10006f40((long)puVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007630(puVar3,in_RSI);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007fa0((long)DAT_1000d360,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_100076dc;
      }
      DAT_1000d360 = (undefined8 *)*puVar3;
    } while (DAT_1000d360 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000d360
#undef uStack_40
#undef uStack_38

#undef DAT_1000d360
#define DAT_1000d360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bb8U)))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007650
 */

void recovered_10007650(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_1000d360 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_1000d360;
      if (DAT_1000d360 == plVar1) {
        DAT_1000d360[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_100076dc:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10006f40((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007630(plVar3,in_RSI);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007fa0((long)DAT_1000d360,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_100076dc;
      }
      DAT_1000d360 = (long *)*plVar3;
    } while (DAT_1000d360 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006fb0();
}

#undef DAT_1000d360
#undef local_30
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f0
 */

void recovered_100076f0(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007630(in_RDI,in_RSI);
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


#undef DAT_1000d0c0
#define DAT_1000d0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1918U)))
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
      if ((undefined *)*puVar5 != &DAT_1000d0c0) goto LAB_100077ec;
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

#undef DAT_1000d0c0

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


#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b7d8
#define DAT_1000b7d8 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000b818
#define DAT_1000b818 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

double recovered_10007e00(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_100034c0(param_1);
  if (DAT_1000b7b0 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000b7b8;
  }
  else if (param_1 - dVar1 <= DAT_1000b818) {
    dVar1 = dVar1 + DAT_1000b7d8;
  }
  return dVar1;
}

#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b7d8
#undef DAT_1000b818

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


#undef DAT_1000b900
#define DAT_1000b900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x158U)))
#undef DAT_1000d0c0
#define DAT_1000d0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1918U)))
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
                        *(long *)(&DAT_1000b900 + (ulong)(uVar10 & 0xf) * 8);
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
        if (*(undefined **)pbVar13 != &DAT_1000d0c0) goto LAB_100082f8;
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

#undef DAT_1000b900
#undef DAT_1000d0c0
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


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006814
#define DAT_00006814 (*(uint8_t *)(0x6814U))
#undef DAT_1000d368
#define DAT_1000d368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bc0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006814
#define _DAT_00006814 (*(uint *)(0x6814U))
#undef str_1000baac
#define str_1000baac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100084d0(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x17 < _DAT_00006808 && ((code *)(ulong)_DAT_00006814 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006814)();
  }
  plVar7 = recovered_10007080(0x70);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  *(undefined2 *)((long)plVar7 + 0x34) = 0;
  *(undefined1 *)((long)plVar7 + 0x36) = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  pcVar12 = str_1000baac;
  if (param_1 != (char *)0x0) {
    pcVar12 = param_1;
  }
  uVar10 = 0xffffffffffffffff;
  do {
    lVar6 = uVar10 + 1;
    uVar10 = uVar10 + 1;
  } while (pcVar12[lVar6] != '\0');
  recovered_1000ac00(plVar7,(long)pcVar12,uVar10);
  uVar10 = (ulong)param_2;
  if ((int)param_2 < 2) {
    uVar10 = 1;
  }
  uVar16 = (uint)uVar10;
  *(uint *)(plVar7 + 3) = uVar16;
  uVar15 = 1;
  if (1 < (int)param_3) {
    uVar15 = (ulong)param_3;
  }
  uVar14 = (uint)uVar15;
  *(uint *)((long)plVar7 + 0x1c) = uVar14;
  *(uint *)(plVar7 + 4) = uVar16;
  *(uint *)((long)plVar7 + 0x24) = uVar14;
  *(uint *)((long)plVar7 + 0x2c) = uVar16 >> 1;
  *(uint *)(plVar7 + 6) = uVar14 >> 1;
  uVar10 = uVar15 * uVar10 * 4;
  plVar7[0xc] = 0;
  if (uVar10 <= (ulong)plVar7[0xd]) {
    uVar15 = 0;
    goto LAB_10008712;
  }
  pvVar8 = recovered_10007080(uVar10);
  pvVar2 = (void *)plVar7[0xb];
  uVar15 = plVar7[0xc];
  if (uVar15 == 0) goto LAB_100086ff;
  uVar9 = 0;
  if ((3 < uVar15) && (0x1f < (ulong)((long)pvVar8 - (long)pvVar2))) {
    if (uVar15 < 0x20) {
      uVar11 = 0;
    }
    else {
      uVar9 = uVar15 & 0xffffffffffffffe0;
      uVar11 = 0;
      do {
        uVar3 = ((undefined8 *)((long)pvVar2 + uVar11))[1];
        puVar1 = (undefined8 *)((long)pvVar2 + uVar11 + 0x10);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)((long)pvVar8 + uVar11) = *(undefined8 *)((long)pvVar2 + uVar11);
        ((undefined8 *)((long)pvVar8 + uVar11))[1] = uVar3;
        puVar1 = (undefined8 *)((long)pvVar8 + uVar11 + 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar11 = uVar11 + 0x20;
      } while (uVar9 != uVar11);
      if (uVar15 == uVar9) goto LAB_100086ff;
      uVar11 = uVar9;
      if ((uVar15 & 0x1c) == 0) goto LAB_10008695;
    }
    uVar9 = uVar15 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar8 + uVar11) = *(undefined4 *)((long)pvVar2 + uVar11);
      uVar11 = uVar11 + 4;
    } while (uVar9 != uVar11);
    if (uVar15 == uVar9) goto LAB_100086ff;
  }
LAB_10008695:
  uVar13 = uVar15 & 3;
  uVar11 = uVar9;
  if (uVar13 != 0) {
    do {
      *(undefined1 *)((long)pvVar8 + uVar11) = *(undefined1 *)((long)pvVar2 + uVar11);
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (uVar9 - uVar15 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)pvVar8 + uVar11) = *(undefined1 *)((long)pvVar2 + uVar11);
      *(undefined1 *)((long)pvVar8 + uVar11 + 1) = *(undefined1 *)((long)pvVar2 + uVar11 + 1);
      *(undefined1 *)((long)pvVar8 + uVar11 + 2) = *(undefined1 *)((long)pvVar2 + uVar11 + 2);
      *(undefined1 *)((long)pvVar8 + uVar11 + 3) = *(undefined1 *)((long)pvVar2 + uVar11 + 3);
      uVar11 = uVar11 + 4;
    } while (uVar15 != uVar11);
  }
LAB_100086ff:
  recovered_100070e0(pvVar2);
  plVar7[0xb] = (long)pvVar8;
  plVar7[0xd] = uVar10;
  uVar15 = plVar7[0xc];
  while (uVar15 < uVar10) {
LAB_10008712:
    *(undefined1 *)(plVar7[0xb] + uVar15) = 0;
    uVar15 = plVar7[0xc] + 1;
    plVar7[0xc] = uVar15;
  }
  DAT_1000d368 = plVar7;
  recovered_10008750((long)plVar7);
  recovered_10008b30((long)plVar7);
  return plVar7;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006814
#undef DAT_1000d368
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006814
#undef str_1000baac

#undef DAT_1000b970
#define DAT_1000b970 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8U)))
#undef _DAT_1000b970
#define _DAT_1000b970 (*(uint128 *)(((uintptr_t)pf_module_state + 0x1c8U)))
#define local_34 (*(undefined1 *)(frame + 28))
#define local_33 (*(undefined1 *)(frame + 29))
#define local_32 (*(undefined1 *)(frame + 30))
#define local_31 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008750(long param_1)

{pf_console_compose((void *)param_1);}



#undef DAT_1000b970
#undef _DAT_1000b970
#undef local_34
#undef local_33
#undef local_32
#undef local_31

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000687c
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#undef DAT_1000d370
#define DAT_1000d370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
#undef DAT_1000d378
#define DAT_1000d378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bd0U)))
#undef DAT_1000d388
#define DAT_1000d388 (*(int *)(((uintptr_t)pf_module_state + 0x1be0U)))
#undef DAT_1000d38c
#define DAT_1000d38c (*(uint *)(((uintptr_t)pf_module_state + 0x1be4U)))
#undef DAT_1000d390
#define DAT_1000d390 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1be8U)))
#undef DAT_1000d394
#define DAT_1000d394 (*(uint *)(((uintptr_t)pf_module_state + 0x1becU)))
#undef DAT_1000d398
#define DAT_1000d398 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bf0U)))
#undef DAT_1000d39c
#define DAT_1000d39c (*(uint *)(((uintptr_t)pf_module_state + 0x1bf4U)))
#undef DAT_1000d3a0
#define DAT_1000d3a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bf8U)))
#undef UNK_1000d37c
#define UNK_1000d37c (*(uint *)(((uintptr_t)pf_module_state + 0x1bd4U)))
#undef UNK_1000d380
#define UNK_1000d380 (*(uint *)(((uintptr_t)pf_module_state + 0x1bd8U)))
#undef UNK_1000d384
#define UNK_1000d384 (*(uint *)(((uintptr_t)pf_module_state + 0x1bdcU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000687c
#define _DAT_0000687c (*(uint *)(0x687cU))
#undef _DAT_1000d378
#define _DAT_1000d378 (*(int *)(((uintptr_t)pf_module_state + 0x1bd0U)))
#undef uRam000000001000d37c
#define uRam000000001000d37c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bd4U)))
#undef uRam000000001000d380
#define uRam000000001000d380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bd8U)))
#undef uRam000000001000d384
#define uRam000000001000d384 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bdcU)))
#define local_40 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008b30(long param_1)

{pf_console_present((void *)param_1);}


#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000687c
#undef DAT_1000d370
#undef DAT_1000d378
#undef DAT_1000d388
#undef DAT_1000d38c
#undef DAT_1000d390
#undef DAT_1000d394
#undef DAT_1000d398
#undef DAT_1000d39c
#undef DAT_1000d3a0
#undef UNK_1000d37c
#undef UNK_1000d380
#undef UNK_1000d384
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000687c
#undef _DAT_1000d378
#undef uRam000000001000d37c
#undef uRam000000001000d380
#undef uRam000000001000d384
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009300
 */

void recovered_10009300(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006818
#define DAT_00006818 (*(uint8_t *)(0x6818U))
#undef DAT_1000d368
#define DAT_1000d368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1bc0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006818
#define _DAT_00006818 (*(uint *)(0x6818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009310(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    if (DAT_1000d368 == param_1) {
      DAT_1000d368 = (undefined8 *)0x0;
    }
    param_1[0xc] = 0;
    recovered_100070e0((void *)param_1[0xb]);
    param_1[8] = 0;
    recovered_100070e0((void *)param_1[7]);
    recovered_100070e0((void *)*param_1);
    recovered_100070e0(param_1);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x1b < _DAT_00006808 && ((code *)(ulong)_DAT_00006818 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x100093ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_00006818)();
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006818
#undef DAT_1000d368
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006818

#undef DAT_1000b9a4
#define DAT_1000b9a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef DAT_1000bb0c
#define DAT_1000bb0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x364U)))
#undef LAB_100094bc
#define LAB_100094bc (*(uint8_t *)(0x100094bcU))
#define local_a8 (*(undefined8 *)(frame + 24))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_88 (*(code * *)(frame + 56))
#define local_80 (*(undefined * *)(frame + 64))
#define local_78 (*(undefined1 * *)(frame + 72))
#define lStack_40 (*(long *)(frame + 128))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_50 (*(void * *)(frame + 112))
#define local_48 (*(undefined1 * *)(frame + 120))
#define local_38 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100093c0
 */

void * recovered_100093c0(undefined8 *param_1)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined1 *puVar2;
  long lVar3;

  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_48 = (undefined1 *)0x0;
  lStack_40 = 0;
  local_38 = 0;
  local_88 = recovered_10007030;
  local_80 = &DAT_1000bb0c;
  local_70 = &LAB_100094bc;
  recovered_100075b0(&local_a8);
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = 1;
  }
  else {
    puVar2 = &DAT_1000b9a4;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_a0 = 0xffffffff;
    recovered_1000ac00((long *)&local_48,(long)puVar2,param_1[1]);
    lVar3 = lStack_40 + 1;
  }
  local_a0 = 1;
  local_50 = recovered_100070b0(lVar3);
  puVar2 = &DAT_1000b9a4;
  if (local_48 != (undefined1 *)0x0) {
    puVar2 = local_48;
  }
  local_a0 = 2;
  recovered_10001030(local_50,puVar2,lStack_40 + 1);
  pvVar1 = local_50;
  recovered_100070e0(local_48);
  recovered_100075d0(&local_a8);
  return pvVar1;
}

#undef DAT_1000b9a4
#undef DAT_1000bb0c
#undef LAB_100094bc
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef lStack_40
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009510
 */

void recovered_10009510(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009540
 */

void recovered_10009540(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar2 = 1;
  if (1 < param_3) {
    iVar2 = param_3;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = iVar2;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = iVar2;
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar4 = param_2 + -1;
  if (iVar3 <= param_2 + -1) {
    iVar4 = iVar3;
  }
  if (iVar3 < 0) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x2c) = iVar4;
  iVar3 = iVar2 + -1;
  if (iVar1 <= iVar2 + -1) {
    iVar3 = iVar1;
  }
  if (iVar1 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  recovered_10008750(param_1);
  return;
}


#undef DAT_1000b9a4
#define DAT_1000b9a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a0
 */

void recovered_100095a0(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (param_1 == (long *)0x0) {
    return;
  }
  puVar3 = &DAT_1000b9a4;
  if (param_2 != (undefined1 *)0x0) {
    puVar3 = param_2;
  }
  uVar2 = 0xffffffffffffffff;
  do {
    lVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (puVar3[lVar1] != '\0');
  recovered_1000ac00(param_1,(long)puVar3,uVar2);
  return;
}

#undef DAT_1000b9a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095f0
 */

void recovered_100095f0(long param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar3 = *(undefined1 **)(param_2 + 2), puVar3 == (undefined1 *)0x0)) ||
      (iVar1 = *param_2, (long)iVar1 < 1)) || (iVar2 = param_2[1], (long)iVar2 < 1)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  recovered_1000b4d0((long *)(param_1 + 0x38),*(long *)(param_1 + 0x38),puVar3,
                     puVar3 + (long)iVar1 * (long)iVar2 * 4);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
  recovered_10008750(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009660
 */

void recovered_10009660(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10009690();
  recovered_10008750(param_1);
  recovered_10008b30(param_1);
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
#undef DAT_00006880
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#undef DAT_1000b980
#define DAT_1000b980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef DAT_1000bcf8
#define DAT_1000bcf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x550U)))
#undef DAT_1000d0f0
#define DAT_1000d0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1948U)))
#undef DAT_1000d0f1
#define DAT_1000d0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1949U)))
#undef DAT_1000d0f2
#define DAT_1000d0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef DAT_1000d0f3
#define DAT_1000d0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194bU)))
#undef DAT_1000d0f4
#define DAT_1000d0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194cU)))
#undef DAT_1000d0f5
#define DAT_1000d0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194dU)))
#undef DAT_1000d0f6
#define DAT_1000d0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194eU)))
#undef DAT_1000d0f7
#define DAT_1000d0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194fU)))
#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1950U)))
#undef DAT_1000d0f9
#define DAT_1000d0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1951U)))
#undef DAT_1000d0fa
#define DAT_1000d0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1952U)))
#undef DAT_1000d0fb
#define DAT_1000d0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1953U)))
#undef DAT_1000d0fc
#define DAT_1000d0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1954U)))
#undef DAT_1000d0fd
#define DAT_1000d0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1955U)))
#undef DAT_1000d0fe
#define DAT_1000d0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1956U)))
#undef DAT_1000d0ff
#define DAT_1000d0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1957U)))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1958U)))
#undef DAT_1000d101
#define DAT_1000d101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1959U)))
#undef DAT_1000d102
#define DAT_1000d102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195aU)))
#undef DAT_1000d103
#define DAT_1000d103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195bU)))
#undef DAT_1000d104
#define DAT_1000d104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195cU)))
#undef DAT_1000d105
#define DAT_1000d105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195dU)))
#undef DAT_1000d106
#define DAT_1000d106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195eU)))
#undef DAT_1000d107
#define DAT_1000d107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195fU)))
#undef DAT_1000d108
#define DAT_1000d108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1960U)))
#undef DAT_1000d109
#define DAT_1000d109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1961U)))
#undef DAT_1000d10a
#define DAT_1000d10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1962U)))
#undef DAT_1000d10b
#define DAT_1000d10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1963U)))
#undef DAT_1000d10c
#define DAT_1000d10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1964U)))
#undef DAT_1000d10d
#define DAT_1000d10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1965U)))
#undef DAT_1000d10e
#define DAT_1000d10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1966U)))
#undef DAT_1000d10f
#define DAT_1000d10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1967U)))
#undef DAT_1000d110
#define DAT_1000d110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1968U)))
#undef DAT_1000d111
#define DAT_1000d111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1969U)))
#undef DAT_1000d112
#define DAT_1000d112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196aU)))
#undef DAT_1000d113
#define DAT_1000d113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196bU)))
#undef DAT_1000d114
#define DAT_1000d114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196cU)))
#undef DAT_1000d115
#define DAT_1000d115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196dU)))
#undef DAT_1000d116
#define DAT_1000d116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196eU)))
#undef DAT_1000d117
#define DAT_1000d117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196fU)))
#undef DAT_1000d118
#define DAT_1000d118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1970U)))
#undef DAT_1000d119
#define DAT_1000d119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1971U)))
#undef DAT_1000d11a
#define DAT_1000d11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1972U)))
#undef DAT_1000d11b
#define DAT_1000d11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1973U)))
#undef DAT_1000d11c
#define DAT_1000d11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1974U)))
#undef DAT_1000d11d
#define DAT_1000d11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1975U)))
#undef DAT_1000d11e
#define DAT_1000d11e (*(char *)(((uintptr_t)pf_module_state + 0x1976U)))
#undef DAT_1000d368
#define DAT_1000d368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bc0U)))
#undef DAT_1000d3a4
#define DAT_1000d3a4 (*(int *)(((uintptr_t)pf_module_state + 0x1bfcU)))
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x858U)))
#undef PTR_DAT_1000c0d0
#define PTR_DAT_1000c0d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x928U)))
#undef UNK_1000b984
#define UNK_1000b984 (*(uint *)(((uintptr_t)pf_module_state + 0x1dcU)))
#undef UNK_1000b988
#define UNK_1000b988 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e0U)))
#undef UNK_1000b98c
#define UNK_1000b98c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e4U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(uint *)(0x682cU))
#undef _DAT_00006880
#define _DAT_00006880 (*(uint *)(0x6880U))
#undef _DAT_1000b980
#define _DAT_1000b980 (*(uint *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef uRam000000001000b984
#define uRam000000001000b984 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009690
 */

/* WARNING: Removing unreachable block (ram,0x10009c07) */
/* WARNING: Removing unreachable block (ram,0x10009c03) */
/* WARNING: Removing unreachable block (ram,0x10009c0a) */
/* WARNING: Removing unreachable block (ram,0x10009c0c) */
/* WARNING: Removing unreachable block (ram,0x10009c0f) */
/* WARNING: Removing unreachable block (ram,0x10009c3e) */
/* WARNING: Removing unreachable block (ram,0x10009b9d) */
/* WARNING: Removing unreachable block (ram,0x10009b99) */
/* WARNING: Removing unreachable block (ram,0x10009ba0) */
/* WARNING: Removing unreachable block (ram,0x10009ba2) */
/* WARNING: Removing unreachable block (ram,0x10009ba5) */
/* WARNING: Removing unreachable block (ram,0x10009bea) */
/* WARNING: Removing unreachable block (ram,0x10009b7f) */
/* WARNING: Removing unreachable block (ram,0x10009b8e) */
/* WARNING: Removing unreachable block (ram,0x10009bda) */
/* WARNING: Removing unreachable block (ram,0x10009bde) */
/* WARNING: Removing unreachable block (ram,0x10009be1) */
/* WARNING: Removing unreachable block (ram,0x10009be5) */
/* WARNING: Removing unreachable block (ram,0x10009be8) */
/* WARNING: Removing unreachable block (ram,0x10009bc4) */
/* WARNING: Removing unreachable block (ram,0x10009bd3) */
/* WARNING: Removing unreachable block (ram,0x10009bba) */
/* WARNING: Removing unreachable block (ram,0x10009bf0) */
/* WARNING: Removing unreachable block (ram,0x10009bf8) */
/* WARNING: Removing unreachable block (ram,0x10009c2e) */
/* WARNING: Removing unreachable block (ram,0x10009c32) */
/* WARNING: Removing unreachable block (ram,0x10009c35) */
/* WARNING: Removing unreachable block (ram,0x10009c39) */
/* WARNING: Removing unreachable block (ram,0x10009c3c) */
/* WARNING: Removing unreachable block (ram,0x10009c24) */
/* WARNING: Removing unreachable block (ram,0x10009c44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009690(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;

  if (DAT_1000d368 == 0) {
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
  }
  else {
    lVar3 = DAT_1000d368;
    if (_DAT_00006800 == 0x50414d57) {
      if (_DAT_00006804 != 0) {
        while ((0xb < _DAT_00006808 && (0x2f < _DAT_00006808))) {
          if ((code *)(ulong)_DAT_0000682c == (code *)0x0) break;
          uVar2 = (*(code *)(ulong)_DAT_0000682c)();
          lVar3 = DAT_1000d368;
          uVar9 = (uint)uVar2;
          if (uVar9 == 0) break;
          cVar1 = (char)uVar2;
          uVar11 = (uint)((ulong)uVar2 >> 8);
          if (cVar1 == '\0') {
            if (DAT_1000d368 == 0) goto LAB_10009790;
            switch((uintptr_t)(uVar11 & 0xff)) {
            case 1:
            case 0x48:
switchD_100098cc_caseD_48:
              DAT_1000d0f1 = 1;
              break;
            case 2:
            case 0x50:
switchD_100098cc_caseD_50:
              DAT_1000d0f2 = 1;
              break;
            case 3:
            case 0x4d:
switchD_100098cc_caseD_4d:
              DAT_1000d0f4 = 1;
              break;
            case 4:
            case 0x4b:
switchD_100098cc_caseD_4b:
              DAT_1000d0f3 = 1;
              break;
            default:
              break;
            case 0xe:
switchD_100098cc_caseD_e:
              DAT_1000d11b = 1;
              break;
            case 0x17:
switchD_1000978a_caseD_17:
              *(undefined1 *)(lVar3 + 0x28) = 1;
              break;
            case 0x1c:
switchD_100098cc_caseD_1c:
              DAT_1000d0f0 = 1;
              break;
            case 0x53:
switchD_100098cc_caseD_53:
              DAT_1000d11c = 1;
            }
          }
          else if (DAT_1000d368 == 0) {
LAB_10009790:
            lVar3 = 0;
          }
          else {
            if (DAT_1000d3a4 == 2) {
              DAT_1000d3a4 = 0;
              switch((uintptr_t)(uVar9 & 0xff)) {
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
            else if (DAT_1000d3a4 == 1) {
              DAT_1000d3a4 = (uint)(cVar1 == '[') * 2;
            }
            else if (cVar1 == '\x1b') {
              DAT_1000d3a4 = 1;
            }
            else if ((byte)(cVar1 - 0x20U) < 0x5f) {
              DAT_1000d11e = cVar1;
              if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                **(undefined1 **)(&DAT_1000bcf8 + (long)cVar1 * 8) = 1;
              }
              else {
                uVar10 = uVar9 - 0x41;
                if ((byte)uVar10 < 0x1a) {
                  if (0x19 < (byte)uVar10) goto switchD_10009871_caseD_5;
                  ppuVar4 = &PTR_DAT_1000c000;
                }
                else {
                  uVar10 = uVar9 - 0x30;
                  if (9 < (byte)uVar10) goto LAB_1000985e;
                  ppuVar4 = &PTR_DAT_1000c0d0;
                }
                *ppuVar4[uVar10 & 0xff] = 1;
              }
            }
            else {
LAB_1000985e:
              switch((uintptr_t)(uVar9 & 0xff)) {
              case 3:
              case 4:
                *(undefined1 *)(DAT_1000d368 + 0x28) = 1;
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
switchD_10009871_caseD_8:
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
                if ((uVar9 & 0xff) == 0x7f) goto switchD_10009871_caseD_8;
              }
            }
switchD_10009871_caseD_5:
            if ((uVar9 & 0xffff) != 0x11b) {
              uVar11 = uVar11 & 0xff;
              switch((uintptr_t)(uVar11)) {
              case 0xe:
                goto switchD_100098cc_caseD_e;
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
                goto switchD_100098cc_caseD_1c;
              case 0x48:
                goto switchD_100098cc_caseD_48;
              case 0x4b:
                goto switchD_100098cc_caseD_4b;
              case 0x4d:
                goto switchD_100098cc_caseD_4d;
              case 0x50:
                goto switchD_100098cc_caseD_50;
              case 0x53:
                goto switchD_100098cc_caseD_53;
              default:
                if (uVar11 == 1) goto switchD_1000978a_caseD_17;
              }
            }
          }
          if ((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) break;
        }
      }
      if (lVar3 == 0) {
        return;
      }
    }
    uVar9 = -(uint)((int)_DAT_1000b980 < (int)*(uint *)(lVar3 + 0x20));
    uVar11 = -(uint)((int)uRam000000001000b984 < (int)*(uint *)(lVar3 + 0x24));
    iVar5 = (~uVar9 & _DAT_1000b980 | *(uint *)(lVar3 + 0x20) & uVar9) - 1;
    iVar7 = (~uVar11 & uRam000000001000b984 | *(uint *)(lVar3 + 0x24) & uVar11) - 1;
    uVar14 = *(ulong *)(lVar3 + 0x2c);
    uVar13 = CONCAT44(-(uint)(iVar7 < (int)(uVar14 >> 0x20)),-(uint)(iVar5 < (int)uVar14));
    *(ulong *)(lVar3 + 0x2c) =
         ~CONCAT44(-(uint)((long)uVar14 < 0),-(uint)((int)uVar14 < 0)) &
         (~uVar13 & uVar14 | CONCAT44(iVar7,iVar5) & uVar13);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x83 < _DAT_00006808 && ((code *)(ulong)_DAT_00006880 != (code *)0x0)))) {
      iVar5 = (*(code *)(ulong)_DAT_00006880)();
      uVar11 = uRam000000001000b984;
      uVar9 = _DAT_1000b980;
      if (iVar5 != 0) {
        iVar5 = *(int *)(lVar3 + 0x2c);
        *(undefined1 *)(lVar3 + 0x34) = 0;
        *(undefined1 *)(lVar3 + 0x35) = 0;
        *(undefined1 *)(lVar3 + 0x36) = 0;
        uVar10 = -(uint)((int)uVar9 < (int)*(uint *)(lVar3 + 0x20));
        uVar12 = -(uint)((int)uVar11 < (int)*(uint *)(lVar3 + 0x24));
        iVar6 = (~uVar10 & uVar9 | *(uint *)(lVar3 + 0x20) & uVar10) - 1;
        iVar8 = (~uVar12 & uVar11 | *(uint *)(lVar3 + 0x24) & uVar12) - 1;
        iVar7 = *(int *)(lVar3 + 0x30);
        uVar14 = CONCAT44(-(uint)(iVar8 < iVar7),-(uint)(iVar6 < iVar5));
        *(ulong *)(lVar3 + 0x2c) =
             ~CONCAT44(-(uint)(iVar7 < 0),-(uint)(iVar5 < 0)) &
             (~uVar14 & CONCAT44(iVar7,iVar5) | CONCAT44(iVar8,iVar6) & uVar14);
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef DAT_00006880
#undef DAT_1000b980
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
#undef DAT_1000d3a4
#undef PTR_DAT_1000c000
#undef PTR_DAT_1000c0d0
#undef UNK_1000b984
#undef UNK_1000b988
#undef UNK_1000b98c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c
#undef _DAT_00006880
#undef _DAT_1000b980
#undef uRam000000001000b984

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ff0
 */

undefined1 recovered_10009ff0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 1;
  }
  return *(undefined1 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a010
 */

void recovered_1000a010(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x29) = param_2;
    *(undefined1 *)(param_1 + 0x2a) = param_3;
    *(undefined1 *)(param_1 + 0x2b) = param_4;
    if (*(long *)(param_1 + 0x40) == 0) {
      recovered_10008750(param_1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a040
 */

int * recovered_1000a040(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  void *destination;
  ulong count;

  if (param_1 == 0) {
    return (int *)0x0;
  }
  recovered_10008750(param_1);
  if (*(long *)(param_1 + 0x60) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = recovered_10007080(0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    *piVar3 = iVar1;
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3[1] = iVar2;
    count = (long)iVar1 * (long)iVar2 * 4;
    destination = recovered_100070b0(count);
    *(void **)(piVar3 + 2) = destination;
    recovered_10001030(destination,*(void **)(param_1 + 0x58),count);
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0c0
 */

void recovered_1000a0c0(long param_1,undefined4 *param_2,undefined4 *param_3)

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
      *param_2 = *(undefined4 *)(param_1 + 0x2c);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a100
 */

undefined1 recovered_1000a100(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 3 && param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x34 + (ulong)param_2);
  }
  return 0;
}


#undef DAT_1000d0f0
#define DAT_1000d0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1948U)))
#undef DAT_1000d0f1
#define DAT_1000d0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1949U)))
#undef DAT_1000d0f2
#define DAT_1000d0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef DAT_1000d0f3
#define DAT_1000d0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194bU)))
#undef DAT_1000d0f4
#define DAT_1000d0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194cU)))
#undef DAT_1000d0f5
#define DAT_1000d0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194dU)))
#undef DAT_1000d0f6
#define DAT_1000d0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194eU)))
#undef DAT_1000d0f7
#define DAT_1000d0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194fU)))
#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1950U)))
#undef DAT_1000d0f9
#define DAT_1000d0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1951U)))
#undef DAT_1000d0fa
#define DAT_1000d0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1952U)))
#undef DAT_1000d0fb
#define DAT_1000d0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1953U)))
#undef DAT_1000d0fc
#define DAT_1000d0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1954U)))
#undef DAT_1000d0fd
#define DAT_1000d0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1955U)))
#undef DAT_1000d0fe
#define DAT_1000d0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1956U)))
#undef DAT_1000d0ff
#define DAT_1000d0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1957U)))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1958U)))
#undef DAT_1000d101
#define DAT_1000d101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1959U)))
#undef DAT_1000d102
#define DAT_1000d102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195aU)))
#undef DAT_1000d103
#define DAT_1000d103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195bU)))
#undef DAT_1000d104
#define DAT_1000d104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195cU)))
#undef DAT_1000d105
#define DAT_1000d105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195dU)))
#undef DAT_1000d106
#define DAT_1000d106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195eU)))
#undef DAT_1000d107
#define DAT_1000d107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195fU)))
#undef DAT_1000d108
#define DAT_1000d108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1960U)))
#undef DAT_1000d109
#define DAT_1000d109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1961U)))
#undef DAT_1000d10a
#define DAT_1000d10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1962U)))
#undef DAT_1000d10b
#define DAT_1000d10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1963U)))
#undef DAT_1000d10c
#define DAT_1000d10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1964U)))
#undef DAT_1000d10d
#define DAT_1000d10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1965U)))
#undef DAT_1000d10e
#define DAT_1000d10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1966U)))
#undef DAT_1000d10f
#define DAT_1000d10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1967U)))
#undef DAT_1000d110
#define DAT_1000d110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1968U)))
#undef DAT_1000d111
#define DAT_1000d111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1969U)))
#undef DAT_1000d112
#define DAT_1000d112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196aU)))
#undef DAT_1000d113
#define DAT_1000d113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196bU)))
#undef DAT_1000d114
#define DAT_1000d114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196cU)))
#undef DAT_1000d115
#define DAT_1000d115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196dU)))
#undef DAT_1000d116
#define DAT_1000d116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196eU)))
#undef DAT_1000d117
#define DAT_1000d117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x196fU)))
#undef DAT_1000d118
#define DAT_1000d118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1970U)))
#undef DAT_1000d119
#define DAT_1000d119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1971U)))
#undef DAT_1000d11a
#define DAT_1000d11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1972U)))
#undef DAT_1000d11b
#define DAT_1000d11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1973U)))
#undef DAT_1000d11c
#define DAT_1000d11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1974U)))
#undef DAT_1000d11d
#define DAT_1000d11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1975U)))
#undef DAT_1000d11e
#define DAT_1000d11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1976U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a130
 */

void recovered_1000a130(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
  DAT_1000d11e = 0;
  return;
}

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a280
 */

void recovered_1000a280(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a290
 */

void recovered_1000a290(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2a0
 */

undefined8 recovered_1000a2a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2b0
 */

void recovered_1000a2b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2c0
 */

undefined8 recovered_1000a2c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_00006858
#define DAT_00006858 (*(uint8_t *)(0x6858U))
#undef DAT_1000b9a2
#define DAT_1000b9a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1faU)))
#undef DAT_1000b9a4
#define DAT_1000b9a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
#undef DAT_1000bab7
#define DAT_1000bab7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30fU)))
#undef DAT_1000bb14
#define DAT_1000bb14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36cU)))
#undef LAB_1000ab43
#define LAB_1000ab43 (*(uint8_t *)(0x1000ab43U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
#undef _DAT_00006858
#define _DAT_00006858 (*(uint *)(0x6858U))
#define local_48 (*(void * *)(frame + 280))
#define local_40 (*(void * *)(frame + 288))
#define pvStack_128 (*(void * *)(frame + 56))
#define local_34 (*(undefined4 *)(frame + 300))
#define pvStack_b8 (*(void * *)(frame + 168))
#define uStack_a0 (*(undefined8 *)(frame + 192))
#define pvStack_78 (*(void * *)(frame + 232))
#define pvStack_50 (*(void * *)(frame + 272))
#define local_140 (*(undefined4 * *)(frame + 32))
#define local_138 (*(undefined4 * *)(frame + 40))
#define local_130 (*(char * *)(frame + 48))
#define local_120 (*(undefined8 *)(frame + 64))
#define local_118 (*(undefined8 *)(frame + 72))
#define local_110 (*(undefined4 *)(frame + 80))
#define local_f8 (*(code * *)(frame + 104))
#define local_f0 (*(undefined * *)(frame + 112))
#define local_e8 (*(undefined1 * *)(frame + 120))
#define local_e0 (*(undefined1 * *)(frame + 128))
#define local_d8 (*(undefined1 * *)(frame + 136))
#define local_c0 (*(char * *)(frame + 160))
#define local_b0 (*(void * *)(frame + 176))
#define local_a8 (*(void * *)(frame + 184))
#define local_98 (*(undefined8 *)(frame + 200))
#define local_88 (*(char * *)(frame + 216))
#define local_80 (*(void * *)(frame + 224))
#define local_70 (*(undefined8 *)(frame + 240))
#define auStack_148 (*(undefined1 (*)[8])(frame + 24))
#define local_68 (*(long *)(frame + 248))
#define local_60 (*(undefined8 *)(frame + 256))
#define local_58 (*(char * *)(frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1000a2d0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  char *pcVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;

  local_e8 = (undefined1 *)((long)(uintptr_t)(frame + 352) + -8);
  local_d8 = auStack_148;
  local_f8 = recovered_10007030;
  local_f0 = &DAT_1000bb14;
  local_e0 = &LAB_1000ab43;
  local_68 = param_1;
  recovered_100075b0(&local_118);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (local_68 == 0) {
    pvVar10 = (void *)0x0;
    goto LAB_1000ab22;
  }
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_130 = (char *)0x0;
  pvStack_128 = (void *)0x0;
  local_120 = 0;
  uVar6 = 0xffffffffffffffff;
  do {
    pcVar11 = (char *)(local_68 + 1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (*pcVar11 != '\0');
  local_110 = 0xffffffff;
  local_138 = param_2;
  recovered_1000ac00((long *)&local_130,local_68,uVar6);
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  if (pvStack_128 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    pcVar11 = &DAT_1000b9a4;
    if (local_130 != (char *)0x0) {
      pcVar11 = local_130;
    }
    local_34 = (uint)CONCAT71((int7)((ulong)local_130 >> 8),*pcVar11 == '/');
  }
  pvVar10 = (void *)0x0;
  local_88 = &DAT_1000b9a4;
  local_140 = param_3;
  do {
    uVar6 = (long)pvStack_128 - (long)pvVar10;
    if (pvStack_128 < pvVar10 || uVar6 == 0) break;
    pcVar11 = local_130;
    if (local_130 == (char *)0x0) {
      pcVar11 = &DAT_1000b9a4;
    }
    pvVar7 = pvVar10;
    do {
      if (pcVar11[(long)pvVar7] == '/') {
        if (pvVar7 != (void *)0xffffffffffffffff) {
          local_60 = (void *)((ulong)PF_PART4(local_60, 4) << 0x20);
          local_40 = pvVar7;
          goto LAB_1000a4ad;
        }
        break;
      }
      pvVar7 = (void *)((long)pvVar7 + 1);
    } while (pvStack_128 != pvVar7);
    local_40 = (void *)0xffffffffffffffff;
    local_60 = (void *)CONCAT44(PF_PART4(local_60, 4),(int)CONCAT71((int7)((ulong)pvVar7 >> 8),1));
    pvVar7 = pvStack_128;
LAB_1000a4ad:
    uVar13 = (long)pvVar7 - (long)pvVar10;
    uVar8 = uVar13;
    if (uVar6 < uVar13) {
      uVar8 = uVar6;
    }
    if (uVar13 == 0xffffffffffffffff) {
      uVar8 = uVar6;
    }
    local_58 = (char *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_110 = 1;
    recovered_1000ac00((long *)&local_58,(long)(pcVar11 + (long)pvVar10),uVar8);
    pvVar10 = local_40;
    if (pvStack_50 != (void *)0x0) {
      pcVar11 = local_58;
      if (local_58 == (char *)0x0) {
        pcVar11 = &DAT_1000b9a4;
      }
      if (pvStack_50 == (void *)0x1) {
        if (*pcVar11 == '.') goto LAB_1000a42b;
      }
      else if (((pvStack_50 == (void *)0x2) && (*pcVar11 == '.')) && (pcVar11[1] == '.')) {
        if (pvStack_78 != (void *)0x0) {
          pcVar11 = *(char **)((long)local_80 + (long)pvStack_78 * 0x18 + -0x18);
          pcVar5 = pcVar11;
          if (pcVar11 == (char *)0x0) {
            pcVar5 = &DAT_1000b9a4;
          }
          if (((*(long *)((long)local_80 + (long)pvStack_78 * 0x18 + -0x10) != 2) ||
              (*pcVar5 != '.')) || (pcVar5[1] != '.')) {
            recovered_100070e0(pcVar11);
            pvStack_78 = (void *)((long)pvStack_78 - 1);
            goto LAB_1000a42b;
          }
        }
        if ((char)local_34 != '\0') goto LAB_1000a42b;
      }
      local_110 = 2;
      recovered_1000af10((long *)&local_80,&local_58);
      pvVar10 = local_40;
    }
LAB_1000a42b:
    pvVar10 = (void *)((long)pvVar10 + 1);
    recovered_100070e0(local_58);
  } while ((char)local_60 == '\0');
  puVar12 = &DAT_1000b9a4;
  if ((char)local_34 != '\0') {
    puVar12 = &DAT_1000bab7;
  }
  local_58 = (char *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = (void *)0x0;
  uVar6 = 0xffffffffffffffff;
  do {
    lVar14 = uVar6 + 1;
    uVar6 = uVar6 + 1;
  } while (puVar12[lVar14] != '\0');
  local_110 = 3;
  recovered_1000ac00((long *)&local_58,(long)puVar12,uVar6);
  if (pvStack_78 != (void *)0x0) {
    pvVar10 = (void *)0x0;
    do {
      local_40 = pvVar10;
      if (pvVar10 != (void *)0x0 || (local_34 & 1) != 0) {
        if (pvStack_50 == local_48) {
          pvVar7 = (void *)((long)pvStack_50 * 2);
          if (pvStack_50 == (void *)0x0) {
            pvVar7 = (void *)0x10;
          }
          if (pvVar7 <= pvStack_50) goto LAB_1000a690;
          local_110 = 4;
          local_60 = pvVar7;
          pcVar11 = recovered_10007080((ulong)pvVar7 | 1);
          pvVar10 = local_40;
          *pcVar11 = '\0';
          if (pvStack_50 != (void *)0x0) {
            if (pvStack_50 < (void *)0x4) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = (void *)0x0;
              if (0x1f < (ulong)((long)pcVar11 - (long)local_58)) {
                if (pvStack_50 < (void *)0x20) {
                  pvVar9 = (void *)0x0;
                }
                else {
                  pvVar7 = (void *)((ulong)pvStack_50 & 0xffffffffffffffe0);
                  pvVar9 = (void *)0x0;
                  do {
                    uVar1 = *(undefined8 *)(local_58 + (long)pvVar9 + 8);
                    uVar2 = *(undefined8 *)(local_58 + 0x10 + (long)pvVar9);
                    uVar3 = *(undefined8 *)(local_58 + 0x10 + (long)pvVar9 + 8);
                    *(undefined8 *)(pcVar11 + (long)pvVar9) =
                         *(undefined8 *)(local_58 + (long)pvVar9);
                    *(undefined8 *)(pcVar11 + (long)pvVar9 + 8) = uVar1;
                    *(undefined8 *)(pcVar11 + 0x10 + (long)pvVar9) = uVar2;
                    *(undefined8 *)(pcVar11 + 0x10 + (long)pvVar9 + 8) = uVar3;
                    pvVar9 = (void *)((long)pvVar9 + 0x20);
                  } while (pvVar7 != pvVar9);
                  if (pvStack_50 == pvVar7) goto LAB_1000a78b;
                  pvVar9 = pvVar7;
                  if (((ulong)pvStack_50 & 0x1c) == 0) goto LAB_1000a724;
                }
                pvVar7 = (void *)((ulong)pvStack_50 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)(pcVar11 + (long)pvVar9) = *(undefined4 *)(local_58 + (long)pvVar9)
                  ;
                  pvVar9 = (void *)((long)pvVar9 + 4);
                } while (pvVar7 != pvVar9);
                if (pvStack_50 == pvVar7) goto LAB_1000a78b;
              }
            }
LAB_1000a724:
            uVar6 = (ulong)pvStack_50 & 3;
            pvVar9 = pvVar7;
            if (uVar6 != 0) {
              do {
                pcVar11[(long)pvVar9] = local_58[(long)pvVar9];
                pvVar9 = (void *)((long)pvVar9 + 1);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            if ((ulong)((long)pvVar7 - (long)pvStack_50) < 0xfffffffffffffffd) {
              do {
                pcVar11[(long)pvVar9] = local_58[(long)pvVar9];
                (pcVar11 + 1)[(long)pvVar9] = (local_58 + 1)[(long)pvVar9];
                (pcVar11 + 2)[(long)pvVar9] = (local_58 + 2)[(long)pvVar9];
                (pcVar11 + 3)[(long)pvVar9] = (local_58 + 3)[(long)pvVar9];
                pvVar9 = (void *)((long)pvVar9 + 4);
              } while (pvStack_50 != pvVar9);
            }
          }
LAB_1000a78b:
          pcVar11[(long)pvStack_50] = '\0';
          recovered_100070e0(local_58);
          local_48 = local_60;
LAB_1000a798:
          local_58 = pcVar11;
        }
        else {
LAB_1000a690:
          if (local_58 == (char *)0x0) {
            local_110 = 5;
            pcVar11 = recovered_10007080(1);
            *pcVar11 = '\0';
            local_48 = (void *)0x0;
            pvVar10 = local_40;
            goto LAB_1000a798;
          }
        }
        local_58[(long)pvStack_50] = '/';
        local_58[(long)pvStack_50 + 1] = '\0';
        pvStack_50 = (void *)((long)pvStack_50 + 1);
      }
      puVar12 = *(undefined1 **)((long)local_80 + (long)pvVar10 * 0x18);
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &DAT_1000b9a4;
      }
      local_110 = 6;
      recovered_1000b030((long *)&local_58,(long)puVar12,
                         *(ulong *)((long)local_80 + (long)pvVar10 * 0x18 + 8));
      pvVar10 = (void *)((long)local_40 + 1);
    } while (pvVar10 < pvStack_78);
  }
  if (pvStack_50 == (void *)0x0) {
    puVar12 = &DAT_1000b9a2;
    if ((char)local_34 != '\0') {
      puVar12 = &DAT_1000bab7;
    }
    local_c0 = (char *)0x0;
    pvStack_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    uVar6 = 0xffffffffffffffff;
    do {
      lVar14 = uVar6 + 1;
      uVar6 = uVar6 + 1;
    } while (puVar12[lVar14] != '\0');
    local_110 = 7;
    recovered_1000ac00((long *)&local_c0,(long)puVar12,uVar6);
  }
  else {
    local_c0 = local_58;
    pvStack_b8 = pvStack_50;
    local_b0 = local_48;
    local_58 = (char *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = (void *)0x0;
  }
  recovered_100070e0(local_58);
  if (pvStack_78 != (void *)0x0) {
    lVar14 = (long)pvStack_78 * 0x18;
    pvVar10 = pvStack_78;
    do {
      lVar14 = lVar14 + -0x18;
      recovered_100070e0(*(void **)((long)local_80 + lVar14));
      pvVar10 = (void *)((long)pvVar10 - 1);
    } while (pvVar10 != (void *)0x0);
  }
  pvStack_78 = (void *)0x0;
  recovered_100070e0(local_80);
  recovered_100070e0(local_130);
  pcVar11 = local_c0;
  if (local_c0 == (char *)0x0) {
    pcVar11 = &DAT_1000b9a4;
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x5b < _DAT_00006808 && ((code *)(ulong)_DAT_00006858 != (code *)0x0)))))) {
    local_110 = 8;
    iVar4 = (*(code *)(ulong)_DAT_00006858)(pcVar11,&local_a8);
    if (iVar4 == 0) goto LAB_1000a962;
LAB_1000aa29:
    pvVar10 = (void *)0x0;
    if (local_a8 != (void *)0x0) {
      if ((int)uStack_a0 != 0) {
        if (PF_PART4(uStack_a0, 4) != 0) {
          if ((int)local_98 != 0) {
            local_40 = local_a8;
            local_110 = 10;
            local_60 = recovered_100070b0(uStack_a0 & 0xffffffff);
            local_110 = 0xb;
            recovered_10001030(local_60,local_40,uStack_a0 & 0xffffffff);
            if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
               ((0xb < _DAT_00006808 &&
                ((0x53 < _DAT_00006808 && ((code *)(ulong)_DAT_00006850 != (code *)0x0)))))) {
              local_110 = 0xc;
              (*(code *)(ulong)_DAT_00006850)(local_40);
            }
            if (local_138 != (undefined4 *)0x0) {
              *local_138 = PF_PART4(uStack_a0, 4);
            }
            pvVar10 = local_60;
            if (local_140 != (undefined4 *)0x0) {
              *local_140 = (int)local_98;
            }
          }
        }
      }
    }
  }
  else {
LAB_1000a962:
    pvVar10 = (void *)0xffffffffffffffff;
    do {
      pcVar11 = (char *)(local_68 + 1 + (long)pvVar10);
      pvVar10 = (void *)((long)pvVar10 + 1);
    } while (*pcVar11 != '\0');
    if (local_c0 != (char *)0x0) {
      local_88 = local_c0;
    }
    if (pvStack_b8 == pvVar10) {
      pvVar10 = (void *)0x0;
      if (pvStack_b8 != (void *)0x0) {
        pvVar7 = (void *)0x0;
        do {
          if (local_88[(long)pvVar7] != *(char *)(local_68 + (long)pvVar7)) goto LAB_1000a9bb;
          pvVar7 = (void *)((long)pvVar7 + 1);
        } while (pvStack_b8 != pvVar7);
      }
    }
    else {
LAB_1000a9bb:
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x5b < _DAT_00006808 && ((code *)(ulong)_DAT_00006858 != (code *)0x0)))) {
        local_110 = 9;
        iVar4 = (*(code *)(ulong)_DAT_00006858)(local_68,&local_a8);
        if (iVar4 != 0) goto LAB_1000aa29;
      }
      pvVar10 = (void *)0x0;
    }
  }
  recovered_100070e0(local_c0);
LAB_1000ab22:
  recovered_100075d0(&local_118);
  return pvVar10;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_00006858
#undef DAT_1000b9a2
#undef DAT_1000b9a4
#undef DAT_1000bab7
#undef DAT_1000bb14
#undef LAB_1000ab43
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850
#undef _DAT_00006858
#undef local_48
#undef local_40
#undef pvStack_128
#undef local_34
#undef pvStack_b8
#undef uStack_a0
#undef pvStack_78
#undef pvStack_50
#undef local_140
#undef local_138
#undef local_130
#undef local_120
#undef local_118
#undef local_110
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_98
#undef local_88
#undef local_80
#undef local_70
#undef auStack_148
#undef local_68
#undef local_60
#undef local_58

#define lStack_40 (*(long *)(frame + 32))
#define local_48 (*(void * *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac00
 */

void recovered_1000ac00(long *param_1,long param_2,ulong param_3)

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
        recovered_1000ac00((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = pvVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_100070e0(pvVar2);
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
      puVar8 = recovered_10007080(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_1000ae26;
  puVar8 = recovered_10007080(uVar13 + 1);
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
        if (uVar11 == uVar12) goto LAB_1000ae0f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_1000ada5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000ae0f;
    }
LAB_1000ada5:
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
LAB_1000ae0f:
  puVar8[uVar11] = 0;
  recovered_100070e0(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_1000ae26:
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aeb0
 */

void recovered_1000aeb0(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x18;
    do {
      lVar2 = lVar2 + -0x18;
      recovered_100070e0(*(void **)(*param_1 + lVar2));
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_100070e0((void *)*param_1);
  return;
}


#undef DAT_1000b9a4
#define DAT_1000b9a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af10
 */

long recovered_1000af10(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
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
      pvVar4 = recovered_10007080(uVar8 * 0x18);
      if (param_1[1] != 0) {
        lVar7 = 8;
        uVar6 = 0;
        do {
          lVar2 = *param_1;
          *(undefined8 *)((long)pvVar4 + lVar7 + -8) = *(undefined8 *)(lVar2 + -8 + lVar7);
          uVar3 = ((undefined8 *)(lVar2 + lVar7))[1];
          *(undefined8 *)((long)pvVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          ((undefined8 *)((long)pvVar4 + lVar7))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar2 + -8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar2 + 8 + lVar7) = 0;
          recovered_100070e0((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_100070e0((void *)*param_1);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar7 = *param_1;
  puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + 0x10 + uVar6 * 0x18) = 0;
  puVar5 = &DAT_1000b9a4;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*param_2;
  }
  recovered_1000ac00((long *)(lVar7 + uVar6 * 0x18),(long)puVar5,param_2[1]);
  lVar7 = param_1[1];
  param_1[1] = lVar7 + 1;
  return lVar7 * 0x18 + *param_1;
}

#undef DAT_1000b9a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b030
 */

long * recovered_1000b030(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;

  if (param_3 == 0 || param_2 == 0) {
    return param_1;
  }
  puVar7 = (undefined1 *)*param_1;
  if (puVar7 != (undefined1 *)0x0) {
    uVar15 = param_1[1];
    uVar13 = param_2 - (long)puVar7;
    uVar6 = 0;
LAB_1000b070:
    if (uVar13 != uVar6) goto code_r0x1000b075;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_1000b400;
    puVar8 = recovered_10007080(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_1000b3df;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_1000b375;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_1000b34a;
    }
    uVar11 = uVar9 & 0xffffffffffffffe0;
    uVar10 = 0;
    do {
      uVar3 = ((undefined8 *)((long)pvVar2 + uVar10))[1];
      puVar1 = (undefined8 *)((long)pvVar2 + uVar10 + 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar8 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
      *(undefined8 *)((long)(puVar8 + uVar10) + 8) = uVar3;
      *(undefined8 *)(puVar8 + uVar10 + 0x10) = uVar4;
      *(undefined8 *)((long)(puVar8 + uVar10 + 0x10) + 8) = uVar5;
      uVar10 = uVar10 + 0x20;
    } while (uVar11 != uVar10);
    if (uVar9 != uVar11) {
      uVar10 = uVar11;
      if ((uVar9 & 0x1c) != 0) {
LAB_1000b34a:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000b3df;
      }
LAB_1000b375:
      uVar12 = uVar9 & 3;
      uVar10 = uVar11;
      if (uVar12 != 0) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar11 - uVar9 < 0xfffffffffffffffd) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar2 + uVar10);
          puVar8[uVar10 + 1] = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
          puVar8[uVar10 + 2] = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
          puVar8[uVar10 + 3] = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
      }
    }
LAB_1000b3df:
    puVar8[uVar9] = 0;
    recovered_100070e0(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_1000b400:
    if (param_3 == 0) goto LAB_1000b2ee;
    uVar6 = (ulong)((uint)param_3 & 3);
    if (param_3 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(uVar9 + *param_1 + uVar15) = *(undefined1 *)(uVar9 + *param_1 + uVar13);
        *(undefined1 *)(uVar9 + *param_1 + 1 + uVar15) =
             *(undefined1 *)(uVar9 + *param_1 + uVar13 + 1);
        *(undefined1 *)(uVar9 + *param_1 + 2 + uVar15) =
             *(undefined1 *)(uVar9 + *param_1 + 2 + uVar13);
        *(undefined1 *)(uVar9 + *param_1 + uVar15 + 3) =
             *(undefined1 *)(uVar9 + *param_1 + 3 + uVar13);
        uVar9 = uVar9 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar9);
    }
    if (uVar6 != 0) {
      lVar16 = uVar15 + uVar9;
      lVar14 = (param_2 + uVar9) - (long)puVar7;
      do {
        *(undefined1 *)(*param_1 + lVar16) = *(undefined1 *)(*param_1 + lVar14);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    goto LAB_1000b2eb;
  }
  uVar15 = param_1[1];
LAB_1000b083:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_1000b246;
  puVar7 = recovered_10007080(uVar15 + 1);
  *puVar7 = 0;
  pvVar2 = (void *)*param_1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar13 = 0;
    if ((3 < uVar6) && (0x1f < (ulong)((long)puVar7 - (long)pvVar2))) {
      if (uVar6 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar13 = uVar6 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)(puVar7 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          *(undefined8 *)((long)(puVar7 + uVar9) + 8) = uVar3;
          *(undefined8 *)(puVar7 + uVar9 + 0x10) = uVar4;
          *(undefined8 *)((long)(puVar7 + uVar9 + 0x10) + 8) = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar13 != uVar9);
        if (uVar6 == uVar13) goto LAB_1000b22f;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_1000b1c5;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_1000b22f;
    }
LAB_1000b1c5:
    uVar11 = uVar6 & 3;
    uVar9 = uVar13;
    if (uVar11 != 0) {
      do {
        puVar7[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar13 - uVar6 < 0xfffffffffffffffd) {
      do {
        puVar7[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        puVar7[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        puVar7[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        puVar7[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar6 != uVar9);
    }
  }
LAB_1000b22f:
  puVar7[uVar6] = 0;
  recovered_100070e0(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_1000b246:
  uVar15 = (ulong)((uint)param_3 & 3);
  if (param_3 - 1 < 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      *(undefined1 *)(uVar6 + 1 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 1 + uVar6);
      *(undefined1 *)(uVar6 + 2 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 2 + uVar6);
      *(undefined1 *)(uVar6 + 3 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 3 + uVar6);
      uVar6 = uVar6 + 4;
    } while ((param_3 & 0xfffffffffffffffc) != uVar6);
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  }
LAB_1000b2eb:
  puVar8 = (undefined1 *)*param_1;
LAB_1000b2ee:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x1000b075:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_1000b083;
  goto LAB_1000b070;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4d0
 */

long recovered_1000b4d0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;

  lVar14 = *param_1;
  bVar18 = lVar14 == 0;
  if (bVar18) {
    uVar11 = param_1[1];
  }
  else {
    uVar11 = param_2 - lVar14;
  }
  uVar17 = (long)param_3 - (long)param_4;
  if (param_3 == param_4) goto LAB_1000b78d;
  uVar16 = (long)param_4 - (long)param_3;
  uVar13 = param_1[1];
  uVar7 = param_1[2];
  if (uVar7 < uVar13 + uVar16) {
    uVar9 = 4;
    if (uVar7 != 0) {
      uVar9 = uVar7;
    }
    do {
      uVar7 = uVar9;
      uVar9 = uVar7 * 2;
    } while (uVar7 < uVar13 + uVar16);
    pvVar6 = recovered_10007080(uVar7);
    pvVar2 = (void *)*param_1;
    uVar13 = param_1[1];
    if (uVar13 != 0) {
      uVar9 = 0;
      if ((3 < uVar13) && (0x1f < (ulong)((long)pvVar6 - (long)pvVar2))) {
        if (uVar13 < 0x20) {
          uVar10 = 0;
        }
        else {
          uVar9 = uVar13 & 0xffffffffffffffe0;
          uVar10 = 0;
          do {
            uVar3 = ((undefined8 *)((long)pvVar2 + uVar10))[1];
            puVar1 = (undefined8 *)((long)pvVar2 + uVar10 + 0x10);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            *(undefined8 *)((long)pvVar6 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
            ((undefined8 *)((long)pvVar6 + uVar10))[1] = uVar3;
            puVar1 = (undefined8 *)((long)pvVar6 + uVar10 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar10 = uVar10 + 0x20;
          } while (uVar9 != uVar10);
          if (uVar13 == uVar9) goto LAB_1000b64f;
          uVar10 = uVar9;
          if ((uVar13 & 0x1c) == 0) goto LAB_1000b5e5;
        }
        uVar9 = uVar13 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar6 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar13 == uVar9) goto LAB_1000b64f;
      }
LAB_1000b5e5:
      uVar12 = uVar13 & 3;
      uVar10 = uVar9;
      if (uVar12 != 0) {
        do {
          *(undefined1 *)((long)pvVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar9 - uVar13 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)((long)pvVar6 + uVar10) = *(undefined1 *)((long)pvVar2 + uVar10);
          *(undefined1 *)((long)pvVar6 + uVar10 + 1) = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
          *(undefined1 *)((long)pvVar6 + uVar10 + 2) = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
          *(undefined1 *)((long)pvVar6 + uVar10 + 3) = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar13 != uVar10);
      }
    }
LAB_1000b64f:
    recovered_100070e0(pvVar2);
    *param_1 = (long)pvVar6;
    param_1[2] = uVar7;
    uVar13 = param_1[1];
  }
  if (uVar11 < uVar13) {
    uVar15 = (int)uVar13 - (int)uVar11 & 3;
    uVar9 = (ulong)uVar15;
    uVar7 = uVar13;
    if (uVar15 != 0) {
      do {
        *(undefined1 *)(uVar16 + uVar7 + *param_1 + -1) = *(undefined1 *)((uVar7 - 1) + *param_1);
        uVar7 = uVar7 - 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar11 - uVar13 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((uVar16 - 1) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -1 + uVar7);
        *(undefined1 *)((uVar16 - 2) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -2 + uVar7);
        *(undefined1 *)((uVar16 - 3) + *param_1 + uVar7) = *(undefined1 *)(*param_1 + -3 + uVar7);
        *(undefined1 *)(uVar16 + uVar7 + *param_1 + -4) = *(undefined1 *)((uVar7 - 4) + *param_1);
        uVar7 = uVar7 - 4;
      } while (uVar11 < uVar7);
    }
  }
  uVar7 = uVar11;
  for (uVar13 = uVar16 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)(*param_1 + uVar7) = *param_3;
    param_3 = param_3 + 1;
    uVar7 = uVar7 + 1;
  }
  if (uVar17 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(*param_1 + uVar7) = *param_3;
      *(undefined1 *)(*param_1 + 1 + uVar7) = param_3[1];
      *(undefined1 *)(*param_1 + 2 + uVar7) = param_3[2];
      *(undefined1 *)(*param_1 + 3 + uVar7) = param_3[3];
      param_3 = param_3 + 4;
      uVar7 = uVar7 + 4;
    } while (param_3 != param_4);
  }
  param_1[1] = param_1[1] + uVar16;
  lVar14 = *param_1;
  bVar18 = lVar14 == 0;
LAB_1000b78d:
  lVar8 = 0;
  if (!bVar18) {
    lVar8 = lVar14 + uVar11;
  }
  return lVar8;
}



/* Console-window raster composition recovered from r232. Pooka's Free Software License. */
typedef struct {
 uintptr_t text,length,text_capacity;
 int32_t width,height,buffer_width,buffer_height;
 uint8_t closed,background[3];
 int32_t mouse_x,mouse_y;
 uint8_t buttons[3];
 uintptr_t image,image_length,image_capacity;
 int32_t image_width,image_height;
 uintptr_t output,output_length,output_capacity;
} PFConsoleWindow;
static volatile uint32_t *pf_console_api(void){return (volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x6800U;
#endif
}
static void *pf_console_allocate(uintptr_t size){volatile uint32_t *a=pf_console_api();if(a[0]!=0x50414d57||!a[1]||a[2]<0x50||!a[19])return 0;return ((void *(*)(uintptr_t))(uintptr_t)a[19])(size);}
static void pf_console_release(uintptr_t p){volatile uint32_t *a=pf_console_api();if(p&&a[0]==0x50414d57&&a[1]&&a[2]>=0x54&&a[20])((void(*)(void*))(uintptr_t)a[20])((void *)p);}
static void pf_console_compose(void *opaque){
 PFConsoleWindow *w=opaque;
 if(!w||w->width<1||w->height<1)return;
 uintptr_t size=(uintptr_t)w->width*w->height*4;
 w->output_length=0;
 if(w->output_capacity<size){uintptr_t p=(uintptr_t)pf_console_allocate(size);pf_console_release(w->output);w->output=p;w->output_capacity=size;}
 uint8_t *output=(uint8_t *)w->output;
 for(uintptr_t i=0;i<size;i++)output[i]=0;
 w->output_length=size;
 int32_t width=0,height=0,left=0,top=0;
 int has_image=w->image_length&&w->image_width>0&&w->image_height>0;
 if(has_image){
  float x=(float)w->width/(float)w->image_width;
  float y=(float)w->height/(float)w->image_height;
  float scale=x<=y?x:y;
  width=(int32_t)(scale*(float)w->image_width);if(width<2)width=1;
  height=(int32_t)((float)w->image_height*scale);if(height<2)height=1;
  left=(w->width-width)/2;top=(w->height-height)/2;
 }
 for(int32_t y=0;y<w->height;y++)for(int32_t x=0;x<w->width;x++){
  uint8_t *pixel=output+((uintptr_t)y*w->width+x)*4;
  const uint8_t *source=w->background;
  if(has_image&&left<=x&&x<left+width&&top<=y&&y<top+height){
   int32_t sx=(x-left)*w->image_width/width;
   int32_t sy=(y-top)*w->image_height/height;
   if(sx>=w->image_width)sx=w->image_width-1;if(sx<0)sx=0;
   if(sy>=w->image_height)sy=w->image_height-1;if(sy<0)sy=0;
   source=(uint8_t *)w->image+((uintptr_t)sy*w->image_width+sx)*4;
  }
  pixel[0]=source[0];pixel[1]=source[1];pixel[2]=source[2];pixel[3]=255;
 }
}
static uint32_t pf_console_channel(uint32_t c,uint32_t bits,uint32_t shift){
 uint32_t mask=bits>=32?0xffffffffU:((1U<<bits)-1);return ((c*mask+127)/255)<<(shift&31);
}
static void pf_console_present(void *opaque){
 PFConsoleWindow *w=opaque;if(!w||!w->output_length||w->width<1||w->height<1)return;
 struct __attribute__((packed,aligned(4))) {uint64_t address;uint32_t size,stride,width,height,bpp,rb,rs,gb,gs,bb,bs;} f={0};
 volatile uint32_t *api=pf_console_api();if(api[0]!=0x50414d57||!api[1]||api[2]<0x80||!api[31])return;
 if(!((uint32_t(*)(void*))(uintptr_t)api[31])(&f)||!f.address||!f.size||!f.stride||!f.width||!f.height||f.bpp!=32||!f.rb||!f.gb||!f.bb||f.stride/4<f.width)return;
 uint8_t *screen=(uint8_t *)(uintptr_t)f.address;
 uint32_t background=pf_console_channel(w->background[0],f.rb,f.rs)|pf_console_channel(w->background[1],f.gb,f.gs)|pf_console_channel(w->background[2],f.bb,f.bs);
 for(uint32_t y=0;y<f.height;y++)for(uint32_t x=0;x<f.width;x++)*(uint32_t *)(screen+(uintptr_t)y*f.stride+x*4)=background;
 uint32_t width=f.width,height=(uint64_t)f.width*(uint32_t)w->height/(uint32_t)w->width;if(height<2)height=1;
 uint32_t left=0,top=0;
 if(height>f.height){height=f.height;width=(uint64_t)f.height*(uint32_t)w->width/(uint32_t)w->height;if(width<2)width=1;left=(f.width-width)/2;}else top=(f.height-height)/2;
 for(uint32_t y=0;y<height;y++)for(uint32_t x=0;x<width;x++){
  uintptr_t sy=(uint64_t)y*(uint32_t)w->height/height,sx=(uint64_t)x*(uint32_t)w->width/width;
  const uint8_t *pixel=(const uint8_t *)w->output+(sy*(uint32_t)w->width+sx)*4;
  *(uint32_t *)(screen+(uintptr_t)(top+y)*f.stride+(left+x)*4)=pf_console_channel(pixel[0],f.rb,f.rs)|pf_console_channel(pixel[1],f.gb,f.gs)|pf_console_channel(pixel[2],f.bb,f.bs);
 }
 if(w->buffer_width>0&&w->buffer_height>0&&width&&height){
  int32_t mx=w->mouse_x;if(mx>=w->buffer_width)mx=w->buffer_width-1;if(mx<0)mx=0;
  int32_t my=w->mouse_y;if(my>=w->buffer_height)my=w->buffer_height-1;if(my<0)my=0;
  int32_t cx=left+(uint64_t)width*(uint32_t)mx/(uint32_t)w->buffer_width;
  int32_t cy=top+(uint64_t)height*(uint32_t)my/(uint32_t)w->buffer_height;
  uint32_t r=255,g=255,b=255;
  if(w->buttons[0]==1){g=b=60;}else if(w->buttons[1]==1){r=b=60;}else if(w->buttons[2]==1){r=80;g=130;}
  uint32_t color=pf_console_channel(r,f.rb,f.rs)|pf_console_channel(g,f.gb,f.gs)|pf_console_channel(b,f.bb,f.bs);
  for(int dy=-7;dy<=7;dy++)for(int dx=-7;dx<=7;dx++){
   int distance=(dx<0?-dx:dx)+(dy<0?-dy:dy);int32_t x=cx+dx,y=cy+dy;
   if(distance<8&&x>=0&&y>=0&&(uint32_t)x<f.width&&(uint32_t)y<f.height)*(uint32_t *)(screen+(uintptr_t)y*f.stride+(uint32_t)x*4)=distance<6?color:0;
  }
 }
#if defined(__aarch64__)
 uint64_t ctr;__asm__ volatile("mrs %0,ctr_el0":"=r"(ctr));uintptr_t line=4UL<<((ctr>>16)&15);uintptr_t end=(uintptr_t)screen+f.size;if(end<(uintptr_t)screen)end=~(uintptr_t)0;
 for(uintptr_t p=(uintptr_t)screen&-line;p<end;p+=line){__asm__ volatile("dc cvac,%0"::"r"(p):"memory");if(p+line<p)break;}
 __asm__ volatile("dsb sy\nisb":::"memory");
#endif
}
