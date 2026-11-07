/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10012110
#define DAT_10012110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005b0
 */

void recovered_100005b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10012110 = 0;
  recovered_100005d0();
  return;
}

#undef DAT_10012110

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
#undef DAT_10012110
#define DAT_10012110 (*(char *)(((uintptr_t)pf_module_state + 0x22d4U)))
#undef DAT_10012118
#define DAT_10012118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22dcU)))
#undef DAT_10012120
#define DAT_10012120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22e4U)))
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
 * Address: 0x100005d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005d0(void)

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
  if (DAT_10012110 != '\0') {
    return;
  }
  DAT_10012118 = 0;
  DAT_10012120 = 0;
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
                if (*puVar2 <= uVar7) goto LAB_10000663;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar8 = 0;
LAB_10000663:
            local_438[uVar8 * 2 + 2] = uVar7;
            local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
            uVar9 = uVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
LAB_100007ae:
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
        if (lVar12 == 0) goto LAB_10000876;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000085f;
        recovered_10005780(puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (DAT_10012118 != 0) goto LAB_100009b5;
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
              if (*puVar2 <= uVar7) goto LAB_10000725;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar8 = 0;
LAB_10000725:
          local_438[uVar8 * 2 + 2] = uVar7;
          local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
          uVar9 = uVar9 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    goto LAB_100007ae;
  }
LAB_10000876:
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
      if (DAT_10012118 == 0) {
        puVar4 = &DAT_10012118;
      }
      *puVar4 = 0x300000;
      if (DAT_10012120 == 0) {
        DAT_10012110 = 1;
        DAT_10012120 = 0x300000;
        return;
      }
      DAT_10012110 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_10012118 == 0) {
      puVar4 = &DAT_10012118;
    }
    *puVar4 = 0x300000;
    if (DAT_10012120 == 0) {
      DAT_10012120 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_10012118 == 0) {
        puVar4 = &DAT_10012118;
      }
      *puVar4 = 0x2000000;
      if (DAT_10012120 == 0) {
        DAT_10012110 = 1;
        DAT_10012120 = 0x2000000;
        return;
      }
      DAT_10012110 = 1;
      return;
    }
  }
LAB_100009b5:
  if (DAT_10012120 == 0) {
    DAT_10012120 = DAT_10012118;
    DAT_10012110 = 1;
    return;
  }
  DAT_10012110 = 1;
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
#undef DAT_10012110
#undef DAT_10012118
#undef DAT_10012120
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

#undef DAT_10012118
#define DAT_10012118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a40
 */

ulong recovered_10000a40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100005d0();
  uVar3 = 0;
  for (plVar1 = DAT_10012118; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_10012118

#undef DAT_10012118
#define DAT_10012118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a90
 */

long recovered_10000a90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005d0();
  lVar1 = 0;
  for (plVar2 = DAT_10012118; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_10012118

#undef DAT_10012118
#define DAT_10012118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad0
 */

ulong recovered_10000ad0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100005d0();
  uVar3 = 0;
  for (plVar1 = DAT_10012118; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_10012118

#undef DAT_10012118
#define DAT_10012118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b10
 */

long recovered_10000b10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_100005d0();
  lVar2 = 0;
  for (plVar1 = DAT_10012118; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_10012118

#undef DAT_10012118
#define DAT_10012118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22dcU)))
#undef DAT_10012120
#define DAT_10012120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b40
 */

ulong * recovered_10000b40(long param_1)

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
  recovered_100005d0();
  puVar3 = DAT_10012120;
  if (DAT_10012120 == (ulong *)0x0) {
    puVar3 = DAT_10012118;
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
        DAT_10012120 = DAT_10012118;
        if (puVar3 != (ulong *)0x0) {
          DAT_10012120 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_10012118;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_10012118
#undef DAT_10012120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c20
 */

ulong recovered_10000c20(ulong param_1,uint param_2)

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
 * Address: 0x10000c60
 */

ulong recovered_10000c60(ulong param_1,uint param_2)

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
 * Address: 0x10000ca0
 */

long recovered_10000ca0(long param_1,uint param_2)

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
 * Address: 0x10000cf0
 */

ulong recovered_10000cf0(ulong param_1,ulong param_2)

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
 * Address: 0x10000d90
 */

long recovered_10000d90(ulong param_1,ulong param_2)

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
 * Address: 0x10000e00
 */

ulong recovered_10000e00(ulong param_1,ulong param_2)

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
 * Address: 0x10000ed0
 */

long recovered_10000ed0(ulong param_1,ulong param_2)

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
 * Address: 0x10000f60
 */

void recovered_10000f60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

int recovered_10000f80(int param_1)

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
void * recovered_10000f90(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000fe0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001030(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

void * recovered_10001080(void *destination,void *source,ulong count)

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
LAB_1000109f:
    if (count == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)source ^ (uint)destination) & 7) == 0) {
    if (((ulong)destination & 7) == 0) {
LAB_1000128e:
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
                    goto LAB_1000128e;
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
        if (uVar6 == uVar9) goto LAB_1000109f;
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
    goto LAB_1000109f;
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
        goto LAB_100012b0;
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
LAB_100012b0:
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
 * Address: 0x100014c0
 */

void * recovered_100014c0(void *destination,void *source,ulong count)

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
LAB_1000185a:
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
                      goto LAB_1000185a;
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
          if (uVar11 == uVar16) goto LAB_10001ab8;
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
LAB_10001ab8:
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
          goto LAB_1000187c;
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
LAB_1000187c:
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
LAB_1000164e:
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
                    goto LAB_1000164e;
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
        if (uVar12 == uVar13) goto LAB_10001c1a;
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
LAB_10001c1a:
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
        goto LAB_10001cdf;
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
LAB_10001cdf:
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
 * Address: 0x10001d80
 */

void * recovered_10001d80(void *destination,int value,ulong count)

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
LAB_10001ecd:
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
                    goto LAB_10001ecd;
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
        if (uVar6 == uVar10) goto LAB_10002001;
      }
      do {
        *(undefined8 *)destination = uVar5;
        destination = (void *)((long)destination + 8);
        count = count - 8;
      } while (7 < count);
    }
  }
LAB_10002001:
  if (count == 0) {
    return pvVar3;
  }
  if (count < 4) {
LAB_10002010:
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
        goto LAB_10002010;
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
 * Address: 0x100020d0
 */

void recovered_100020d0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_100022f5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100022f5:
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
        goto LAB_10002376;
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
LAB_10002376:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023a0
 */

void recovered_100023a0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_100025c5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100025c5:
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
        goto LAB_10002646;
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
LAB_10002646:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002670
 */

int recovered_10002670(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 7) != 0) goto LAB_100028a3;
    uVar11 = count;
    puVar8 = right;
    puVar10 = left;
    if (((ulong)left & 7) != 0) {
      bVar1 = *(byte *)left;
      bVar5 = *(byte *)right;
      if (bVar1 != bVar5) {
LAB_10002803:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002958:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)left + 1);
      puVar8 = (ulong *)((long)right + 1);
      uVar11 = count - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10002803;
        puVar10 = (ulong *)((long)left + 2);
        puVar8 = (ulong *)((long)right + 2);
        uVar11 = count - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10002803;
          puVar10 = (ulong *)((long)left + 3);
          puVar8 = (ulong *)((long)right + 3);
          uVar11 = count - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10002803;
            puVar10 = (ulong *)((long)left + 4);
            puVar8 = (ulong *)((long)right + 4);
            uVar11 = count - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10002803;
              puVar10 = (ulong *)((long)left + 5);
              puVar8 = (ulong *)((long)right + 5);
              uVar11 = count - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10002803;
                puVar10 = (ulong *)((long)left + 6);
                puVar8 = (ulong *)((long)right + 6);
                uVar11 = count - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10002803;
                  puVar10 = (ulong *)((long)left + 7);
                  puVar8 = (ulong *)((long)right + 7);
                  uVar11 = count - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10002803;
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
LAB_100028cf:
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
        goto LAB_10002958;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_100028cf;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_100028cf;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_100028cf;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < count; count = count - 8) {
      if (*(ulong *)left != *(ulong *)right) {
        iVar3 = recovered_10002970(left,right);
        return iVar3;
      }
      right = (ulong *)((long)right + 8);
      left = (ulong *)((long)left + 8);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_100028a3:
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
 * Address: 0x10002970
 */

int recovered_10002970(byte *param_1,byte *param_2)

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
 * Address: 0x100029e0
 */

bool recovered_100029e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a00
 */

bool recovered_10002a00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a20
 */

bool recovered_10002a20(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

bool recovered_10002a40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

bool recovered_10002a70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

bool recovered_10002a90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab0
 */

int recovered_10002ab0(int param_1)

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
 * Address: 0x10002ad0
 */

int recovered_10002ad0(int param_1)

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
 * Address: 0x10002af0
 */

ulong recovered_10002af0(char *text)

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
 * Address: 0x10002b20
 */

int recovered_10002b20(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10002b43;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002b43:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b60
 */

int recovered_10002b60(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002b83;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002b83:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba0
 */

void recovered_10002ba0(long param_1,long param_2)

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
 * Address: 0x10002bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10002bc0(undefined8 *param_1)

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
LAB_10002c69:
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
        if (uVar5 == uVar10) goto LAB_10002c69;
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
    goto LAB_10002c69;
  }
  uVar5 = uVar9;
  puVar6 = puVar8;
  if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)param_1) < 0x20)) {
LAB_10002f88:
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
        goto LAB_10002f88;
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
 * Address: 0x10003040
 */

char * recovered_10003040(char *param_1,char param_2)

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
 * Address: 0x10003080
 */

long recovered_10003080(char *param_1,char *param_2)

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
 * Address: 0x100030e0
 */

char * recovered_100030e0(char *param_1,char *param_2)

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
 * Address: 0x10003140
 */

char * recovered_10003140(char *param_1,char *param_2)

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


#undef DAT_10010a22
#define DAT_10010a22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbe6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a0
 */

undefined * recovered_100031a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10010a22;
}

#undef DAT_10010a22

#undef PTR_DAT_10012000
#define PTR_DAT_10012000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

undefined ** recovered_100031b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10012000;
}

#undef PTR_DAT_10012000

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
 * Address: 0x100031c0
 */

/* WARNING: Removing unreachable block (ram,0x100031d6) */
/* WARNING: Removing unreachable block (ram,0x10003223) */
/* WARNING: Removing unreachable block (ram,0x1000322e) */
/* WARNING: Removing unreachable block (ram,0x10003237) */
/* WARNING: Removing unreachable block (ram,0x10003240) */
/* WARNING: Removing unreachable block (ram,0x1000322c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100031c0(undefined8 *param_1)

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

#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c0
 */

double recovered_100032c0(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_1000fe40;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 *
                    DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40;
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

#undef DAT_1000fe40

#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fec0
#define DAT_1000fec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1000fec0
#define _DAT_1000fec0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003390(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_1000fec0 ^ (ulong)param_1);
  if ((double)(_DAT_1000fec0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_1000fe48 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000fe40;
      iVar1 = iVar1 + 1;
    } while (DAT_1000fe48 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000fe40)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_1000fec0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_1000fe40
#undef DAT_1000fe48
#undef DAT_1000fec0
#undef _DAT_1000fec0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003460
 */

double recovered_10003460(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003490
 */

double recovered_10003490(double param_1,double param_2)

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
      return DAT_1000fe48;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_1000fe48;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_1000fe48 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_1000fe48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003510
 */

ulong recovered_10003510(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003540
 */

ulong recovered_10003540(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_1000fe48 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_1000fe48

#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035a0
 */

double recovered_100035a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_1000fe48) {
      dVar1 = DAT_1000fe48;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_1000fe40;
  }
  return dVar1;
}

#undef DAT_1000fe40
#undef DAT_1000fe48

#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe50
#define DAT_1000fe50 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000fe58
#define DAT_1000fe58 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000fe60
#define DAT_1000fe60 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000fe68
#define DAT_1000fe68 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000fe70
#define DAT_1000fe70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000fe78
#define DAT_1000fe78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000fed0
#define DAT_1000fed0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000fee0
#define DAT_1000fee0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_1000fef0
#define DAT_1000fef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_1000ff00
#define DAT_1000ff00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef _DAT_1000fe70
#define _DAT_1000fe70 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_1000fe78
#define _DAT_1000fe78 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1000fed0
#define _DAT_1000fed0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_1000fee0
#define _DAT_1000fee0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef _DAT_1000fef0
#define _DAT_1000fef0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef _DAT_1000ff00
#define _DAT_1000ff00 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003750(double param_1)

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
    if (DAT_1000fe58 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000fe40;
        iVar1 = iVar1 + 1;
      } while (DAT_1000fe58 < param_1);
    }
    for (; param_1 < DAT_1000fe60; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_1000fe68 + param_1) / (param_1 + DAT_1000fe48);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000fed0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_1000fee0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_1000fef0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_1000ff00);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_1000fe70 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_1000fe78;
  }
  return DAT_1000fe50;
}

#undef DAT_1000fe40
#undef DAT_1000fe48
#undef DAT_1000fe50
#undef DAT_1000fe58
#undef DAT_1000fe60
#undef DAT_1000fe68
#undef DAT_1000fe70
#undef DAT_1000fe78
#undef DAT_1000fed0
#undef DAT_1000fee0
#undef DAT_1000fef0
#undef DAT_1000ff00
#undef _DAT_1000fe70
#undef _DAT_1000fe78
#undef _DAT_1000fed0
#undef _DAT_1000fee0
#undef _DAT_1000fef0
#undef _DAT_1000ff00

#undef DAT_1000ff10
#define DAT_1000ff10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038a0
 */

long recovered_100038a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000ff10 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000ff10

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe80
#define DAT_1000fe80 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000fe88
#define DAT_1000fe88 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fe90
#define DAT_1000fe90 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fe98
#define DAT_1000fe98 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fea0
#define DAT_1000fea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000ff20
#define DAT_1000ff20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_1000fea0
#define _DAT_1000fea0 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1000ff20
#define _DAT_1000ff20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100038d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000fe80 < param_1; param_1 = param_1 + DAT_1000fe88) {
  }
  for (; param_1 < DAT_1000fe90; param_1 = param_1 + DAT_1000fe98) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ff20);
  return ((dVar1 / _DAT_1000fea0 + DAT_1000fe48 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_1000fe48
#undef DAT_1000fe80
#undef DAT_1000fe88
#undef DAT_1000fe90
#undef DAT_1000fe98
#undef DAT_1000fea0
#undef DAT_1000ff20
#undef _DAT_1000fea0
#undef _DAT_1000ff20

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe80
#define DAT_1000fe80 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000fe88
#define DAT_1000fe88 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fe90
#define DAT_1000fe90 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fe98
#define DAT_1000fe98 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fea8
#define DAT_1000fea8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000ff30
#define DAT_1000ff30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_1000ff30
#define _DAT_1000ff30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003980(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_1000fe80 < param_1; param_1 = param_1 + DAT_1000fe88) {
  }
  for (; param_1 < DAT_1000fe90; param_1 = param_1 + DAT_1000fe98) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ff30);
  return (DAT_1000fea8 * dVar1 + DAT_1000fe48 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_1000fe48
#undef DAT_1000fe80
#undef DAT_1000fe88
#undef DAT_1000fe90
#undef DAT_1000fe98
#undef DAT_1000fea8
#undef DAT_1000ff30
#undef _DAT_1000ff30

#undef DAT_1000fec0
#define DAT_1000fec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1000fec0
#define _DAT_1000fec0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003a20(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1000fec0 ^ (ulong)param_1);
  if ((double)(_DAT_1000fec0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1000fec0
#undef _DAT_1000fec0

/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10003a40(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003b10(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10003bc0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10003c10(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

float recovered_10003ca0(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fec0
#define DAT_1000fec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef UNK_1000fec4
#define UNK_1000fec4 (*(uint *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_1000fec0
#define _DAT_1000fec0 (*(uint *)(((uintptr_t)pf_module_state + 0x84U)))
#undef uRam000000001000fec4
#define uRam000000001000fec4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003cf0(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam000000001000fec4,
                             SUB84(dVar2,0) ^ _DAT_1000fec0));
  }
  iVar1 = 0;
  if (DAT_1000fe48 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_1000fe40;
      iVar1 = iVar1 + 1;
    } while (DAT_1000fe48 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_1000fe40)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam000000001000fec4,_DAT_1000fec0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_1000fe40
#undef DAT_1000fe48
#undef DAT_1000fec0
#undef UNK_1000fec4
#undef _DAT_1000fec0
#undef uRam000000001000fec4

#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003db0
 */

undefined8 recovered_10003db0(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_1000fe40;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 *
                  DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40;
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

#undef DAT_1000fe40

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000ff50
#define DAT_1000ff50 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

float recovered_10003ea0(float param_1,float param_2)

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
    return DAT_1000ff50;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_1000fe48;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_1000fe48 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1000fe48
#undef DAT_1000ff50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f30
 */

undefined8 recovered_10003f30(undefined1 in_XMM0 [16],ulong in_XMM2_Qb)

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


#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

float recovered_10003f70(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_1000fe48 + dVar2) & uVar1);
}

#undef DAT_1000fe48

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd0
 */

double recovered_10003fd0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_1000fe48 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_1000fe48

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004030
 */

undefined8 recovered_10004030(undefined8 param_1)

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_1000fe48 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_1000fe48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a0
 */

float recovered_100040a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100035a0((double)param_1);
  return (float)dVar1;
}


#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe58
#define DAT_1000fe58 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000fe60
#define DAT_1000fe60 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000fe68
#define DAT_1000fe68 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000fe70
#define DAT_1000fe70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000fe78
#define DAT_1000fe78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000fed0
#define DAT_1000fed0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000fee0
#define DAT_1000fee0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_1000fef0
#define DAT_1000fef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_1000ff00
#define DAT_1000ff00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_1000ff54
#define DAT_1000ff54 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
#undef DAT_1000ff58
#define DAT_1000ff58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_1000fe70
#define _DAT_1000fe70 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_1000fe78
#define _DAT_1000fe78 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1000fed0
#define _DAT_1000fed0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_1000fee0
#define _DAT_1000fee0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef _DAT_1000fef0
#define _DAT_1000fef0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef _DAT_1000ff00
#define _DAT_1000ff00 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef _DAT_1000ff58
#define _DAT_1000ff58 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100040c0(float param_1)

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
    if (_DAT_1000ff58 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_1000fe40;
        iVar1 = iVar1 + 1;
      } while (DAT_1000fe58 < dVar2);
    }
    for (; dVar2 < DAT_1000fe60; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_1000fe68 + dVar2) / (dVar2 + DAT_1000fe48);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_1000fed0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_1000fee0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_1000fef0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_1000ff00);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_1000fe70 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_1000fe78);
  }
  return DAT_1000ff54;
}

#undef DAT_1000fe40
#undef DAT_1000fe48
#undef DAT_1000fe58
#undef DAT_1000fe60
#undef DAT_1000fe68
#undef DAT_1000fe70
#undef DAT_1000fe78
#undef DAT_1000fed0
#undef DAT_1000fee0
#undef DAT_1000fef0
#undef DAT_1000ff00
#undef DAT_1000ff54
#undef DAT_1000ff58
#undef _DAT_1000fe70
#undef _DAT_1000fe78
#undef _DAT_1000fed0
#undef _DAT_1000fee0
#undef _DAT_1000fef0
#undef _DAT_1000ff00
#undef _DAT_1000ff58

#undef DAT_1000ff10
#define DAT_1000ff10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004210
 */

long recovered_10004210(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1000ff10 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1000ff10

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe80
#define DAT_1000fe80 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000fe88
#define DAT_1000fe88 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fe90
#define DAT_1000fe90 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fe98
#define DAT_1000fe98 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fea0
#define DAT_1000fea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000ff20
#define DAT_1000ff20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_1000fea0
#define _DAT_1000fea0 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1000ff20
#define _DAT_1000ff20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004240(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_1000fe80 < dVar1; dVar1 = dVar1 + DAT_1000fe88) {
  }
  for (; dVar1 < DAT_1000fe90; dVar1 = dVar1 + DAT_1000fe98) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_1000ff20);
  return (float)(((dVar2 / _DAT_1000fea0 + DAT_1000fe48 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_1000fe48
#undef DAT_1000fe80
#undef DAT_1000fe88
#undef DAT_1000fe90
#undef DAT_1000fe98
#undef DAT_1000fea0
#undef DAT_1000ff20
#undef _DAT_1000fea0
#undef _DAT_1000ff20

#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe80
#define DAT_1000fe80 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000fe88
#define DAT_1000fe88 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000fe90
#define DAT_1000fe90 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1000fe98
#define DAT_1000fe98 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_1000fea8
#define DAT_1000fea8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000ff30
#define DAT_1000ff30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_1000ff30
#define _DAT_1000ff30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100042f0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_1000fe80 < dVar1; dVar1 = dVar1 + DAT_1000fe88) {
  }
  for (; dVar1 < DAT_1000fe90; dVar1 = dVar1 + DAT_1000fe98) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_1000ff30);
  return (float)((DAT_1000fea8 * dVar1 + DAT_1000fe48 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_1000fe48
#undef DAT_1000fe80
#undef DAT_1000fe88
#undef DAT_1000fe90
#undef DAT_1000fe98
#undef DAT_1000fea8
#undef DAT_1000ff30
#undef _DAT_1000ff30

#undef DAT_1000ff40
#define DAT_1000ff40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef UNK_1000ff44
#define UNK_1000ff44 (*(uint *)(((uintptr_t)pf_module_state + 0x108U)))
#undef _DAT_1000ff40
#define _DAT_1000ff40 (*(uint *)(((uintptr_t)pf_module_state + 0x104U)))
#undef uRam000000001000ff44
#define uRam000000001000ff44 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x108U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004390(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_1000ff40 ^ (uint)fVar1);
  if ((float)(_DAT_1000ff40 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam000000001000ff44 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_1000ff40
#undef UNK_1000ff44
#undef _DAT_1000ff40
#undef uRam000000001000ff44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b0
 */

long recovered_100043b0(byte *param_1,undefined8 *param_2,uint param_3)

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
 * Address: 0x100044e0
 */

long recovered_100044e0(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000feb8
#define DAT_1000feb8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1000fec0
#define DAT_1000fec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_1000fec0
#define _DAT_1000fec0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10004610(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_1000feb8 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_1000fe48;
      do {
        dVar12 = dVar12 * DAT_1000feb8 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_1000feb8;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_100046e9;
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
LAB_100046e9:
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
                dVar11 = dVar11 * DAT_1000fe40;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 *
                         DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40 * DAT_1000fe40;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_1000fec0);
  }
  return dVar11;
}

#undef DAT_1000fe40
#undef DAT_1000fe48
#undef DAT_1000feb8
#undef DAT_1000fec0
#undef _DAT_1000fec0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

float recovered_10004870(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004610(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1000feb8
#define DAT_1000feb8 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1000fec0
#define DAT_1000fec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_10010a27
#define DAT_10010a27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbebU)))
#undef _DAT_1000fec0
#define _DAT_1000fec0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef str_10010a2e
#define str_10010a2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_10010a3f
#define str_10010a3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc03U)))
#define abStack_7a (*(byte (*)[66])(frame + 22))
#define local_38 (*(uint * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004880(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
  uVar6 = _DAT_1000fec0;
  dVar5 = DAT_1000feb8;
  uVar12 = 0;
  uVar23 = param_2;
LAB_100048e9:
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
      goto LAB_10004902;
    }
    goto LAB_100048e3;
  }
  bVar7 = param_3[1];
  if (bVar7 == 0x25) {
    if (1 < uVar23) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_100048e3;
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
        goto joined_r0x10004993;
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
joined_r0x10004993:
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
LAB_10004d92:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
      }
      goto LAB_10004d9e;
    case '\a':
      if (0x28 < uVar2) goto LAB_10004d92;
      puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar12);
      *param_4 = uVar2 + 8;
LAB_10004d9e:
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
      abStack_7a[uVar18 + 2] = str_10010a3f[uVar22 % 10];
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
    goto LAB_100048e6;
  default:
    if (1 < uVar23) {
      *param_1 = 0x3f;
LAB_10004902:
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
LAB_10004fb3:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10004fb3;
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
    pcVar20 = str_10010a3f;
    if (*param_3 == 0x58) {
      pcVar20 = str_10010a2e;
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
    goto LAB_100048e9;
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
      goto LAB_10004902;
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
        abStack_7a[uVar17 + 2] = str_10010a3f[uVar22 % 10];
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
    goto LAB_100048e9;
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
      abStack_7a[uVar17 + 2] = str_10010a3f[(uint)uVar22 & 0xf];
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
    goto LAB_100048e9;
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
      pbVar13 = &DAT_10010a27;
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
    goto LAB_100048e6;
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
LAB_10005233:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10005233;
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
      abStack_7a[uVar18 + 2] = str_10010a3f[uVar12 % 10];
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
    goto LAB_100048e9;
  }
LAB_100048e3:
  uVar12 = (ulong)(uVar19 + 1);
LAB_100048e6:
  param_3 = param_3 + 1;
  goto LAB_100048e9;
}

#undef DAT_1000feb8
#undef DAT_1000fec0
#undef DAT_10010a27
#undef _DAT_1000fec0
#undef str_10010a2e
#undef str_10010a3f
#undef abStack_7a
#undef local_38

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10005700(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004880(buffer,capacity,format,(void *)args);
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
#undef DAT_10012118
#define DAT_10012118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22dcU)))
#undef DAT_10012120
#define DAT_10012120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x22e4U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005780(ulong param_1,ulong param_2,ulong *param_3)

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
        if (DAT_10012118 == 0) {
          puVar4 = (ulong *)&DAT_10012118;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_10012120 == (long *)0x0) {
          DAT_10012120 = plVar2;
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
      if (DAT_10012118 == 0) {
        puVar1 = &DAT_10012118;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_10012120 == (long *)0x0) {
        DAT_10012120 = (long *)&DAT_02000000;
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
      if (DAT_10012118 == 0) {
        puVar4 = (ulong *)&DAT_10012118;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10012120 == (long *)0x0) {
        DAT_10012120 = plVar2;
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
#undef DAT_10012118
#undef DAT_10012120
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
#undef DAT_10012130
#define DAT_10012130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22f4U)))
#undef DAT_10012140
#define DAT_10012140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2304U)))
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
 * Address: 0x10005940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005940(long param_1,long param_2)

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
        if (DAT_10012130 != 0) {
          DAT_10012130 = DAT_10012130 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10012130 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001080(local_238,&DAT_10012140,DAT_10012130);
            uVar3 = DAT_10012130;
          }
          local_238[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 &&
              ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))))) {
            (*(code *)(ulong)_DAT_00006840)(local_238);
          }
          DAT_10012130 = 0;
        }
        else {
          if (DAT_10012130 - 0x1ff < 0xfffffffffffffe00) {
            recovered_10001080(local_238,&DAT_10012140,DAT_10012130);
            local_238[DAT_10012130] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
              (*(code *)(ulong)_DAT_00006840)(local_238);
            }
            DAT_10012130 = 0;
          }
          pcVar1 = &DAT_10012140 + DAT_10012130;
          DAT_10012130 = DAT_10012130 + 1;
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
#undef DAT_10012130
#undef DAT_10012140
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
#undef DAT_10012130
#define DAT_10012130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22f4U)))
#undef DAT_10012140
#define DAT_10012140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2304U)))
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
 * Address: 0x10005b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005b10(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_10012130 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001080(local_208,&DAT_10012140,DAT_10012130);
    uVar1 = DAT_10012130;
  }
  local_208[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_00006840)(local_208);
  }
  DAT_10012130 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_10012130
#undef DAT_10012140
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
#undef DAT_10012130
#define DAT_10012130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22f4U)))
#undef DAT_10012140
#define DAT_10012140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2304U)))
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
 * Address: 0x10005bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005bb0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_10012130 != 0) {
    recovered_10001080(local_208,&DAT_10012140,DAT_10012130);
    local_208[DAT_10012130] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_10012130 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_10012130
#undef DAT_10012140
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010a50
#define DAT_10010a50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc14U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c50
 */

void recovered_10005c50(char *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_10010a50;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10010a26;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10005700(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10005940((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_10010a26
#undef DAT_10010a50
#undef local_148

#undef DAT_10010a6e
#define DAT_10010a6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc32U)))
#undef str_10010a53
#define str_10010a53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc17U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb0
 */

void recovered_10005cb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002af0(str_10010a53);
  recovered_10005940(((uintptr_t)pf_module_state + 0xc17U),uVar1);
  uVar1 = recovered_10002af0(&DAT_10010a6e);
  recovered_10005940(((uintptr_t)pf_module_state + 0xc32U),uVar1);
  return;
}

#undef DAT_10010a6e
#undef str_10010a53

#undef DAT_10010a6e
#define DAT_10010a6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc32U)))
#undef str_10010a71
#define str_10010a71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc35U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cf0
 */

void recovered_10005cf0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002af0(str_10010a71);
  recovered_10005940(((uintptr_t)pf_module_state + 0xc35U),uVar1);
  uVar1 = recovered_10002af0(&DAT_10010a6e);
  recovered_10005940(((uintptr_t)pf_module_state + 0xc32U),uVar1);
  return;
}

#undef DAT_10010a6e
#undef str_10010a71

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
#undef DAT_10012130
#define DAT_10012130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22f4U)))
#undef DAT_10012140
#define DAT_10012140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2304U)))
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
 * Address: 0x10005d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005d30(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_10012130 != 0) {
    recovered_10001080(local_228,&DAT_10012140,DAT_10012130);
    local_228[DAT_10012130] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_228);
    }
    DAT_10012130 = 0;
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
#undef DAT_10012130
#undef DAT_10012140
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e50
 */

undefined8 recovered_10005e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e60
 */

void recovered_10005e60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e70
 */

undefined1 recovered_10005e70(void)

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
#undef DAT_10010a50
#define DAT_10010a50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc14U)))
#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_10010b05
#define str_10010b05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc9U)))
#undef str_10010b12
#define str_10010b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd6U)))
#undef str_10010b20
#define str_10010b20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce4U)))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e80
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005e80(char *param_1,long param_2)

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
    DAT_10012080 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002b20(param_1,str_10010b05);
  if (iVar3 == 0) {
    uVar8 = 1;
LAB_1000612e:
    puVar5 = recovered_10000f90(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_10012080 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d80(puVar5,0,0x340);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_10005700__8_((char *)(puVar5 + 1),0xf1,&DAT_10010a50,(ulonglong)param_1);
    return puVar5;
  }
  iVar4 = recovered_10002b20(param_1,str_10010b12);
  if (iVar4 == 0) {
    uVar8 = 2;
    goto LAB_1000612e;
  }
  iVar4 = recovered_10002b20(param_1,str_10010b20);
  if (iVar4 == 0) {
    uVar8 = 3;
    goto LAB_1000612e;
  }
  puVar5 = recovered_10000f90(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_10012080 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d80(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10003040((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10003040((char *)param_2,'+');
    bVar9 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10003040((char *)param_2,'a');
      bVar9 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar9;
  pcVar6 = recovered_10003040((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10003040((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10003040((char *)param_2,'+');
    bVar10 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar10;
  pcVar6 = recovered_10003040((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  pf_varargs_10005700__8_((char *)(puVar5 + 1),0xf1,&DAT_10010a50,(ulonglong)param_1);
  recovered_10001d80(&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10003040((char *)param_2,'w');
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
          destination = recovered_10001030(*(void **)(puVar5 + 0x40),uVar7);
          if (destination == (void *)0x0) {
            DAT_10012080 = 0xc;
            *(undefined1 *)((long)puVar5 + 0x129) = 1;
            goto LAB_100061b8;
          }
          *(void **)(puVar5 + 0x40) = destination;
          *(ulong *)(puVar5 + 0x44) = uVar7;
          *(void **)(puVar5 + 0x3e) = destination;
          count = (ulong)local_30;
        }
        else {
          destination = *(void **)(puVar5 + 0x40);
        }
        recovered_10001080(destination,(void *)(ulong)local_34,count);
      }
      else {
        *(ulong *)(puVar5 + 0x3e) = (ulong)local_34;
      }
      *(ulong *)(puVar5 + 0x42) = (ulong)local_30;
      cVar1 = *(char *)((long)puVar5 + 0x126);
      goto joined_r0x10006112;
    }
  }
  else if (*(char *)((long)puVar5 + 0x125) == '\0') {
    DAT_10012080 = 2;
LAB_100061b8:
    recovered_10000fe0(puVar5);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar5 + 0x126);
joined_r0x10006112:
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
#undef DAT_10010a50
#undef DAT_10012080
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_10010b05
#undef str_10010b12
#undef str_10010b20
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
#undef DAT_10010a50
#define DAT_10010a50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc14U)))
#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
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
#undef str_10010b05
#define str_10010b05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc9U)))
#undef str_10010b12
#define str_10010b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd6U)))
#undef str_10010b20
#define str_10010b20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce4U)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006210
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006210(char *param_1,long param_2,int *param_3)

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
        uStack_30 = 0x1000629a;
        iVar4 = (*(code *)(ulong)_DAT_00006838)
                          (param_3 + 1,*(undefined8 *)(param_3 + 0x3e),param_3[0x42]);
        if (iVar4 != 0) {
          *(undefined1 *)((long)param_3 + 0x127) = 0;
          goto LAB_100062c1;
        }
      }
      DAT_10012080 = 5;
      *(undefined1 *)((long)param_3 + 0x129) = 1;
    }
LAB_100062c1:
    if (*(void **)(param_3 + 0x40) != (void *)0x0) {
      uStack_30 = 0x100062d8;
      recovered_10000fe0(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100062e0;
    recovered_10000fe0(param_3);
    puVar7 = recovered_10005e80(param_1,param_2);
    return puVar7;
  }
  if (param_1 == (char *)0x0 || param_2 == 0) {
    DAT_10012080 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10002b20(param_1,str_10010b05);
  if (iVar4 == 0) {
    uVar8 = 1;
LAB_1000612e:
    puVar7 = recovered_10000f90(0x340);
    if (puVar7 == (undefined4 *)0x0) {
      DAT_10012080 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001d80(puVar7,0,0x340);
    *puVar7 = uVar8;
    *(bool *)(puVar7 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar7 + 0x125) = iVar4 != 0;
    puVar7[0x48] = 0xffffffff;
    pf_varargs_10005700__8_((char *)(puVar7 + 1),0xf1,&DAT_10010a50,(ulonglong)param_1);
    return puVar7;
  }
  iVar3 = recovered_10002b20(param_1,str_10010b12);
  if (iVar3 == 0) {
    uVar8 = 2;
    goto LAB_1000612e;
  }
  iVar3 = recovered_10002b20(param_1,str_10010b20);
  if (iVar3 == 0) {
    uVar8 = 3;
    goto LAB_1000612e;
  }
  puVar7 = recovered_10000f90(0x340);
  if (puVar7 == (undefined4 *)0x0) {
    DAT_10012080 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001d80(puVar7,0,0x340);
  *puVar7 = 0;
  pcVar5 = recovered_10003040((char *)param_2,'r');
  bVar10 = true;
  bVar9 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10003040((char *)param_2,'+');
    bVar9 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10003040((char *)param_2,'a');
      bVar9 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar7 + 0x49) = bVar9;
  pcVar5 = recovered_10003040((char *)param_2,'w');
  if ((pcVar5 == (char *)0x0) &&
     (pcVar5 = recovered_10003040((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
    pcVar5 = recovered_10003040((char *)param_2,'+');
    bVar10 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar7 + 0x125) = bVar10;
  pcVar5 = recovered_10003040((char *)param_2,'a');
  *(bool *)((long)puVar7 + 0x126) = pcVar5 != (char *)0x0;
  puVar7[0x48] = 0xffffffff;
  pf_varargs_10005700__8_((char *)(puVar7 + 1),0xf1,&DAT_10010a50,(ulonglong)param_1);
  recovered_10001d80(&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10003040((char *)param_2,'w');
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
          destination = recovered_10001030(*(void **)(puVar7 + 0x40),uVar6);
          if (destination == (void *)0x0) {
            DAT_10012080 = 0xc;
            *(undefined1 *)((long)puVar7 + 0x129) = 1;
            goto LAB_100061b8;
          }
          *(void **)(puVar7 + 0x40) = destination;
          *(ulong *)(puVar7 + 0x44) = uVar6;
          *(void **)(puVar7 + 0x3e) = destination;
          count = uStack_30 & 0xffffffff;
        }
        else {
          destination = *(void **)(puVar7 + 0x40);
        }
        recovered_10001080(destination,(void *)(ulong)uStack_34,count);
      }
      else {
        *(ulong *)(puVar7 + 0x3e) = (ulong)uStack_34;
      }
      *(ulong *)(puVar7 + 0x42) = (ulong)(uint)uStack_30;
      cVar1 = *(char *)((long)puVar7 + 0x126);
      goto joined_r0x10006112;
    }
  }
  else if (*(char *)((long)puVar7 + 0x125) == '\0') {
    DAT_10012080 = 2;
LAB_100061b8:
    recovered_10000fe0(puVar7);
    return (undefined4 *)0x0;
  }
  cVar1 = *(char *)((long)puVar7 + 0x126);
joined_r0x10006112:
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
#undef DAT_10010a50
#undef DAT_10012080
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef str_10010b05
#undef str_10010b12
#undef str_10010b20
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
#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006300(int *param_1)

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
      DAT_10012080 = 5;
      *(undefined1 *)((long)param_1 + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    recovered_10000fe0(*(void **)(param_1 + 0x40));
  }
  recovered_10000fe0(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_10012080
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063d0
 */

ulong recovered_100063d0(void *param_1,ulong param_2,ulong param_3,int *param_4)

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
          uVar3 = recovered_10006510(param_4);
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
      recovered_10001080(param_1,(void *)(uVar4 + *(long *)(param_4 + 0x3e)),count);
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
#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10012130
#define DAT_10012130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22f4U)))
#undef DAT_10012140
#define DAT_10012140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2304U)))
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
 * Address: 0x10006510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006510(int *param_1)

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
LAB_1000656a:
      *(ulong *)(param_1 + 0xce) = uVar3 + 1;
      return (uint)*(byte *)((long)param_1 + uVar3 + 0x12a);
    }
    if (DAT_10012130 != 0) {
      recovered_10001080(local_218,&DAT_10012140,DAT_10012130);
      local_218[DAT_10012130] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
        (*(code *)(ulong)_DAT_00006840)(local_218);
      }
      DAT_10012130 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x47 < _DAT_00006808 && ((code *)(ulong)_DAT_00006844 != (code *)0x0)))))) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)((char *)((long)param_1 + 0x12a),0x1fe,&DAT_10010a26,0)
      ;
      if (iVar2 != 0) {
        uVar3 = recovered_10002af0((char *)((long)param_1 + 0x12a));
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)param_1 + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)param_1 + *(long *)(param_1 + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_1000656a;
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
#undef DAT_10010a26
#undef DAT_10012130
#undef DAT_10012140
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

long recovered_10006700(void *param_1,long param_2,long param_3,uint *param_4)

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
    recovered_10005940((long)param_1,uVar5);
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
      pvVar3 = recovered_10001030(*(void **)(param_4 + 0x40),uVar2);
      if (pvVar3 == (void *)0x0) {
        DAT_10012080 = 0xc;
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
      recovered_10001d80((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10001080((void *)(uVar4 + *(long *)(param_4 + 0x40)),param_1,uVar5);
    uVar5 = uVar5 + *(long *)(param_4 + 0x46);
    *(ulong *)(param_4 + 0x46) = uVar5;
    if (*(ulong *)(param_4 + 0x42) < uVar5) {
      *(ulong *)(param_4 + 0x42) = uVar5;
    }
    *(undefined2 *)((long)param_4 + 0x127) = 1;
  }
  return param_3;
}

#undef DAT_10012080

#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006890
 */

undefined8 recovered_10006890(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10012080 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000689e;
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
LAB_1000689e:
  DAT_10012080 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10012080

#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

undefined8 recovered_10006910(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10012080 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10012080

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006940(int *param_1)

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
  DAT_10012080 = 5;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_10012080
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069f0
 */

undefined1 recovered_100069f0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a10
 */

undefined1 recovered_10006a10(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a30
 */

void recovered_10006a30(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

uint recovered_10006a50(uint param_1,long param_2)

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
#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006a80(long param_1)

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
  DAT_10012080 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_10012080
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
#undef DAT_10012080
#define DAT_10012080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2244U)))
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
 * Address: 0x10006b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006b00(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_10012080 = 0x16;
    return 0xffffffff;
  }
  recovered_10001d80(&local_2c,0,0xc);
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
  DAT_10012080 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef DAT_10012080
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
 * Address: 0x10006c70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10006c70(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10001d80(&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10006d2f;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        destination = recovered_10000f90((ulong)(local_30 + (local_30 == 0)));
        if (destination != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10001080(destination,(void *)(ulong)local_34,(ulong)local_30);
            uVar2 = (ulong)local_30;
          }
          *param_2 = destination;
          *param_3 = uVar2;
          uVar2 = CONCAT71((int7)((ulong)destination >> 8),1);
          goto LAB_10006d2f;
        }
      }
    }
  }
  uVar2 = 0;
LAB_10006d2f:
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
 * Address: 0x10006d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006d50(long param_1,long param_2,long param_3)

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
 * Address: 0x10006dc0
 */

undefined8 recovered_10006dc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dd0
 */

void recovered_10006dd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de0
 */

undefined8 recovered_10006de0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

undefined8 recovered_10006df0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

undefined8 recovered_10006e00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e10
 */

char * recovered_10006e10(char *param_1,char param_2,long param_3)

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
 * Address: 0x10006e40
 */

int recovered_10006e40(char *left,char *right,ulong count)

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


#undef DAT_10010a94
#define DAT_10010a94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc58U)))
#undef str_10010a97
#define str_10010a97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5bU)))
#undef str_10010aa4
#define str_10010aa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc68U)))
#undef str_10010aae
#define str_10010aae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc72U)))
#undef str_10010ac2
#define str_10010ac2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc86U)))
#undef str_10010ad0
#define str_10010ad0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc94U)))
#undef str_10010ae2
#define str_10010ae2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca6U)))
#undef str_10010aee
#define str_10010aee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb2U)))
#undef str_10010aff
#define str_10010aff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

char * recovered_10006e80(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10010a94;
  default:
    return str_10010aff;
  case 2:
    return str_10010a97;
  case 5:
    return str_10010aa4;
  case 9:
    return str_10010aae;
  case 0xc:
    return str_10010ac2;
  case 0xd:
    return str_10010ad0;
  case 0x11:
    return str_10010ae2;
  case 0x16:
    return str_10010aee;
  }
}

#undef DAT_10010a94
#undef str_10010a97
#undef str_10010aa4
#undef str_10010aae
#undef str_10010ac2
#undef str_10010ad0
#undef str_10010ae2
#undef str_10010aee
#undef str_10010aff

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f50
 */

undefined8 recovered_10006f50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f60
 */

undefined8 recovered_10006f60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10012340
#define DAT_10012340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f70
 */

void recovered_10006f70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10012340 = DAT_10012340 + 1;
  return;
}

#undef DAT_10012340

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006f90(void *context,uintptr_t unused){__asm__ volatile("movq 80(%rdi),%rsp\nmovq 64(%rdi),%rbp\nmovq 72(%rdi),%rdx\njmpq *%rdx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006fa0(void *context) { __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006fd0(void *context,int value) { __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx"); }


#undef DAT_10007051
#define DAT_10007051 (*(uint8_t *)(0x10007051U))
#undef DAT_10010b30
#define DAT_10010b30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcf4U)))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_50 (*(undefined * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007000
 */

void recovered_10007000(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007080;
  local_60 = &DAT_10010b30;
  local_50 = &DAT_10007051;
  local_80 = 1;
  recovered_10007600(&local_88);
  recovered_10000f60();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10007051
#undef DAT_10010b30
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007080
 */

undefined8 recovered_10007080(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007090
 */

void recovered_10007090(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100070a0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007000();
}


#undef DAT_10012348
#define DAT_10012348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x250cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070a0
 */

long recovered_100070a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_10012348;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10012348 = param_1;
  lVar1 = recovered_100074c0(param_1);
  return lVar1;
}

#undef DAT_10012348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d0
 */

void * recovered_100070d0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f90(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f60();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

void * recovered_10007100(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f90(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f60();
  }
  return pvVar1;
}


#undef DAT_10010b40
#define DAT_10010b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef LAB_1000719d
#define LAB_1000719d (*(uint8_t *)(0x1000719dU))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_88 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

void recovered_10007130(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007080;
  local_60 = &DAT_10010b40;
  local_50 = &LAB_1000719d;
  local_80 = 1;
  recovered_10007600(&local_88);
  recovered_10000fe0(param_1);
  recovered_10007620(&local_88);
  return;
}

#undef DAT_10010b40
#undef LAB_1000719d
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88

#undef DAT_10010b50
#define DAT_10010b50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd14U)))
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

void recovered_100071d0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007080;
  local_60 = &DAT_10010b50;
  local_50 = &LAB_1000723d;
  local_80 = 1;
  recovered_10007600(&local_88);
  recovered_10000fe0(param_1);
  recovered_10007620(&local_88);
  return;
}

#undef DAT_10010b50
#undef LAB_1000723d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10010b60
#define DAT_10010b60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd24U)))
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

void recovered_10007270(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10007080;
  local_60 = &DAT_10010b60;
  local_50 = &LAB_100072dd;
  local_80 = 1;
  recovered_10007600(&local_88);
  recovered_10000fe0(param_1);
  recovered_10007620(&local_88);
  return;
}

#undef DAT_10010b60
#undef LAB_100072dd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10010b70
#define DAT_10010b70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd34U)))
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
  local_68 = recovered_10007080;
  local_60 = &DAT_10010b70;
  local_50 = &LAB_1000737d;
  local_80 = 1;
  recovered_10007600(&local_88);
  recovered_10000fe0(param_1);
  recovered_10007620(&local_88);
  return;
}

#undef DAT_10010b70
#undef LAB_1000737d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073b0
 */

undefined8 recovered_100073b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073c0
 */

uint recovered_100073c0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

void recovered_100073d0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073e0
 */

void recovered_100073e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

long recovered_100073f0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10000f90(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007000();
  }
  if (size != 0) {
    if (size < 8) {
      uVar3 = 0;
    }
    else {
      if (size < 0x20) {
        uVar4 = 0;
LAB_1000745c:
        uVar3 = size & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar2 + uVar4) = 0;
          uVar4 = uVar4 + 8;
          if (uVar3 == uVar4) goto LAB_1000748f;
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
      if (size == uVar3) goto LAB_10007494;
      uVar4 = uVar3;
      if ((size & 0x18) != 0) goto LAB_1000745c;
    }
    do {
      *(undefined1 *)((long)pvVar2 + uVar3) = 0;
      uVar3 = uVar3 + 1;
LAB_1000748f:
    } while (size != uVar3);
  }
LAB_10007494:
  return (long)pvVar2 + 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a0
 */

void recovered_100074a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000fe0((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074c0
 */

long recovered_100074c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_10012348
#define DAT_10012348 (*(void * *)(((uintptr_t)pf_module_state + 0x250cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

void recovered_100074d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_10012348;
  if (DAT_10012348 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_10012348 + 0x10);
    DAT_10012348 = *(void **)((long)DAT_10012348 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)pointer + 0x28) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x30);
      }
      recovered_10000fe0(pointer);
      return;
    }
  }
  return;
}

#undef DAT_10012348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007520
 */

void recovered_10007520(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007550((undefined8 *)(param_1 + -0x30));
}


#undef DAT_10012348
#define DAT_10012348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x250cU)))
#undef DAT_10012350
#define DAT_10012350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2514U)))
#define cStack_36 (*(char *)(frame + 26))
#define uStack_35 (*(undefined1 *)(frame + 27))
#define uStack_34 (*(undefined4 *)(frame + 28))
#define local_38 (*(undefined2 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007550
 */

void recovered_10007550(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *in_RSI;
  long *plVar4;

  if (DAT_10012350 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    plVar4 = DAT_10012350;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      in_RSI = pbVar1;
      uVar3 = recovered_10007ff0((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_100076a0(param_1,in_RSI);
        puVar2 = DAT_10012348;
        if (DAT_10012348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10007000();
        }
        *(undefined1 *)(DAT_10012348 + 5) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007550(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007000();
}

#undef DAT_10012348
#undef DAT_10012350
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_10012348
#define DAT_10012348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x250cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d0
 */

void recovered_100075d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10012348;
  if (DAT_10012348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007000();
  }
  *(undefined1 *)(DAT_10012348 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007550(puVar1);
}

#undef DAT_10012348

#undef DAT_10012350
#define DAT_10012350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2514U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007600
 */

void recovered_10007600(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10012350;
  DAT_10012350 = param_1;
  return;
}

#undef DAT_10012350

#undef DAT_10012350
#define DAT_10012350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2514U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007620
 */

void recovered_10007620(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_10012350;
  if (DAT_10012350 == param_1) {
    puVar2 = &DAT_10012350;
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

#undef DAT_10012350

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007660
 */

void recovered_10007660(undefined8 *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007550(in_RDI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007670
 */

void recovered_10007670(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007000();
}


#undef DAT_10012350
#define DAT_10012350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2514U)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007680
 */

void recovered_10007680(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_10012350 != (undefined8 *)0x0) {
    DAT_10012350 = (undefined8 *)*DAT_10012350;
  }
  recovered_100076a0(param_1,in_RSI);
  if (DAT_10012350 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    do {
      puVar3 = DAT_10012350;
      if (DAT_10012350 == puVar1) {
        DAT_10012350[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_1000772c:
        *(undefined4 *)(puVar3 + 1) = uVar2;
        recovered_10006f90((long)puVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007680(puVar3,in_RSI);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007ff0((long)DAT_10012350,in_RSI,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar3[2] = param_1;
        *(undefined4 *)(puVar3 + 3) = 0;
        uVar2 = PF_PART4(uStack_40, 4);
        goto LAB_1000772c;
      }
      DAT_10012350 = (undefined8 *)*puVar3;
    } while (DAT_10012350 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007000();
}

#undef DAT_10012350
#undef uStack_40
#undef uStack_38

#undef DAT_10012350
#define DAT_10012350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2514U)))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076a0
 */

void recovered_100076a0(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined4 uVar2;
  long *plVar3;

  if (DAT_10012350 != (long *)0x0) {
    plVar1 = (long *)param_1[3];
    do {
      plVar3 = DAT_10012350;
      if (DAT_10012350 == plVar1) {
        DAT_10012350[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 4);
LAB_1000772c:
        *(undefined4 *)(plVar3 + 1) = uVar2;
        recovered_10006f90((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10007680(plVar3,in_RSI);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10007ff0((long)DAT_10012350,in_RSI,(undefined2 *)&local_38);
      if (((char)local_38 == '\x01') && (PF_PART1(local_38, 1) == '\x01')) {
        plVar3[2] = (long)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        uVar2 = PF_PART4(local_38, 4);
        goto LAB_1000772c;
      }
      DAT_10012350 = (long *)*plVar3;
    } while (DAT_10012350 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007000();
}

#undef DAT_10012350
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

void recovered_10007740(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007680(in_RDI,in_RSI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007750
 */

undefined8 recovered_10007750(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007760
 */

void recovered_10007760(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007000();
}


#undef DAT_100120e0
#define DAT_100120e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007770
 */

long recovered_10007770(long *param_1,undefined8 param_2,undefined8 *param_3)

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
        if (lVar3 == lVar4) goto LAB_10007834;
      }
      else {
        lVar6 = 0;
        do {
          cVar1 = *(char *)(lVar3 + lVar6);
          cVar2 = *(char *)(lVar4 + lVar6);
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10007834;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar5 != &DAT_100120e0) goto LAB_1000783c;
      puVar5 = (undefined8 *)puVar5[2];
      bVar7 = puVar5 != (undefined8 *)0x0;
    } while ((puVar5 != param_3) && (puVar5 != (undefined8 *)0x0));
  }
  if (bVar7) {
LAB_10007834:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x10);
  }
  else {
LAB_1000783c:
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_100120e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007850
 */

void recovered_10007850(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000f60();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007860
 */

undefined8 recovered_10007860(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007870
 */

bool recovered_10007870(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007890
 */

bool recovered_10007890(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078c0
 */

bool recovered_100078c0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078e0
 */

bool recovered_100078e0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

bool recovered_10007910(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007930
 */

byte recovered_10007930(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007970
 */

bool recovered_10007970(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_100079a0(double value) {
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
float recovered_10007b10(float value){return (float)recovered_100079a0((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007ca0(long double value){return (long double)recovered_100079a0((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10007e30(long end,long start){return (double)end-(double)start;}


#undef DAT_1000fe40
#define DAT_1000fe40 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000fe48
#define DAT_1000fe48 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000fe68
#define DAT_1000fe68 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000fea8
#define DAT_1000fea8 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e50
 */

double recovered_10007e50(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10003510(param_1);
  if (DAT_1000fe40 <= param_1 - dVar1) {
    dVar1 = dVar1 + DAT_1000fe48;
  }
  else if (param_1 - dVar1 <= DAT_1000fea8) {
    dVar1 = dVar1 + DAT_1000fe68;
  }
  return dVar1;
}

#undef DAT_1000fe40
#undef DAT_1000fe48
#undef DAT_1000fe68
#undef DAT_1000fea8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ea0
 */

long recovered_10007ea0(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto joined_r0x10007efd;
    }
  }
  bVar7 = false;
joined_r0x10007efd:
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
 * Address: 0x10007fe0
 */

longlong recovered_10007fe0(char *text,char **end,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10007ea0((byte *)text,end,base);
  return lVar1;
}


#undef DAT_1000ff90
#define DAT_1000ff90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_100120e0
#define DAT_100120e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22a4U)))
#define local_40 (*(byte * *)(frame + 16))
#define local_31 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff0
 */

undefined8 recovered_10007ff0(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_10008390((uint)*pbVar8,(long *)&local_40);
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
          goto LAB_100081c0;
        }
        iVar16 = iVar16 + 1;
      } while (pbVar18 < local_40 + uVar7);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  return 0;
LAB_100081c0:
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
LAB_1000836b:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar6;
      return CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
    local_40 = pbVar8 + (ulong)(uVar6 & 0x7fffffff) *
                        *(long *)(&DAT_1000ff90 + (ulong)(uVar10 & 0xf) * 8);
    pbVar17 = recovered_10008390((uint)uVar10,(long *)&local_40);
    if (pbVar17 == (byte *)0x0) goto LAB_1000836b;
    cVar23 = local_31;
    if ((param_2 != (byte *)0x0) && (pbVar17 != param_2)) {
      lVar4 = *(long *)(pbVar17 + 8);
      pbVar13 = param_2;
      do {
        lVar5 = *(long *)(pbVar13 + 8);
        if ((lVar4 == 0) || (lVar5 == 0)) {
          if (lVar5 == lVar4) goto LAB_1000836b;
        }
        else {
          lVar15 = 0;
          do {
            cVar23 = *(char *)(lVar5 + lVar15);
            cVar3 = *(char *)(lVar4 + lVar15);
            if ((cVar23 == '\0') || (cVar3 == '\0')) {
              if (cVar23 == cVar3) goto LAB_1000836b;
              break;
            }
            lVar15 = lVar15 + 1;
          } while (cVar23 == cVar3);
        }
        if (*(undefined **)pbVar13 != &DAT_100120e0) goto LAB_10008348;
        pbVar13 = *(byte **)(pbVar13 + 0x10);
        cVar23 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar17) && (pbVar13 != (byte *)0x0));
    }
    if (cVar23 != '\0') goto LAB_1000836b;
  }
LAB_10008348:
  if ((uVar20 | uVar21) == 0) {
    return 0;
  }
  pbVar18 = pbVar18 + (uVar20 | uVar21);
  bVar22 = 0x3e < uVar11;
  uVar11 = uVar11 + 1;
  if (bVar22) {
    return 0;
  }
  goto LAB_100081c0;
}

#undef DAT_1000ff90
#undef DAT_100120e0
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008390
 */

byte * recovered_10008390(uint param_1,long *param_2)

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
    goto LAB_100084b9;
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
    goto LAB_100084b5;
  case 3:
    pbVar3 = (byte *)(ulong)*puVar1;
    goto LAB_10008409;
  default:
    goto switchD_100083c1_caseD_5;
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
LAB_100084b5:
    puVar6 = (uint *)((long)puVar1 + 2);
LAB_100084b9:
    *param_2 = (long)puVar6;
    break;
  case 0xb:
    pbVar3 = (byte *)((ulong)CONCAT14(-1 < (char)*(byte *)((long)puVar1 + 3),*puVar1) - 0x100000000)
    ;
LAB_10008409:
    puVar6 = puVar1 + 1;
    goto LAB_100084b9;
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
switchD_100083c1_caseD_5:
  return pbVar3;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010b80
#define DAT_10010b80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef LAB_100085e5
#define LAB_100085e5 (*(uint8_t *)(0x100085e5U))
#define local_98 (*(undefined8 *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_78 (*(code * *)(frame + 56))
#define local_70 (*(undefined * *)(frame + 64))
#define local_68 (*(undefined1 * *)(frame + 72))
#define local_60 (*(undefined1 * *)(frame + 80))
#define local_58 (*(undefined1 * *)(frame + 88))
#define local_40 (*(undefined1 * *)(frame + 112))
#define local_38 (*(undefined8 *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008520
 */

undefined1 * recovered_10008520(undefined1 *param_1,long *param_2)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined1 *puVar2;

  local_68 = (undefined1 *)((long)(uintptr_t)(frame + 176) + -8);
  local_58 = (undefined1 *)&local_98;
  plVar1 = (long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_78 = recovered_10007080;
  local_70 = &DAT_10010b80;
  local_60 = &LAB_100085e5;
  local_38 = plVar1;
  recovered_10007600(&local_98);
  if (plVar1 != param_2) {
    puVar2 = &DAT_10010a26;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_2;
    }
    local_90 = 1;
    local_40 = param_1;
    recovered_1000c230(local_38,(long)puVar2,param_2[1]);
    param_1 = local_40;
  }
  param_1[0x30] = 0;
  recovered_10007620(&local_98);
  return param_1;
}

#undef DAT_10010a26
#undef DAT_10010b80
#undef LAB_100085e5
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

undefined1 * recovered_10008630(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if ((undefined8 *)(param_1 + 8) != param_2) {
    recovered_10007130((void *)0x0);
    *(undefined8 *)(param_1 + 8) = *param_2;
    uVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008690
 */

undefined1 * recovered_10008690(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086c0
 */

undefined1 * recovered_100086c0(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(ulong *)(param_1 + 0x28) = param_2 + (ulong)(param_2 == 0);
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086f0
 */

void recovered_100086f0(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008720
 */

void recovered_10008720(undefined1 *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  *param_1 = 1;
  if ((long *)(param_1 + 8) != param_2) {
    puVar1 = &DAT_10010a26;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000c230((long *)(param_1 + 8),(long)puVar1,param_2[1]);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef DAT_10010a26

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008760
 */

void recovered_10008760(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *param_1 = 1;
  if ((undefined8 *)(param_1 + 8) != param_2) {
    recovered_10007130(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = *param_2;
    uVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087b0
 */

void recovered_100087b0(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#define local_78 (*(char (*)[4])(frame + 24))
#define local_68 (*(char (*)[4])(frame + 40))
#define local_48 (*(long *)(frame + 72))
#define cStack_74 (*(char *)(frame + 28))
#define cStack_73 (*(char *)(frame + 29))
#define cStack_72 (*(char *)(frame + 30))
#define cStack_71 (*(char *)(frame + 31))
#define cStack_70 (*(char *)(frame + 32))
#define cStack_6f (*(char *)(frame + 33))
#define cStack_6e (*(char *)(frame + 34))
#define cStack_6d (*(char *)(frame + 35))
#define cStack_6c (*(char *)(frame + 36))
#define cStack_6b (*(char *)(frame + 37))
#define cStack_6a (*(char *)(frame + 38))
#define cStack_69 (*(char *)(frame + 39))
#define cStack_64 (*(char *)(frame + 44))
#define cStack_63 (*(char *)(frame + 45))
#define cStack_62 (*(char *)(frame + 46))
#define cStack_61 (*(char *)(frame + 47))
#define cStack_60 (*(char *)(frame + 48))
#define cStack_5f (*(char *)(frame + 49))
#define cStack_5e (*(char *)(frame + 50))
#define cStack_5d (*(char *)(frame + 51))
#define cStack_5c (*(char *)(frame + 52))
#define cStack_5b (*(char *)(frame + 53))
#define cStack_5a (*(char *)(frame + 54))
#define cStack_59 (*(char *)(frame + 55))
#define auStack_58 (*(undefined1 (*)[16])(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087e0
 */

long * recovered_100087e0(long *param_1,char *param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  pf_u120 auVar19;
  pf_u120 auVar20;
  pf_u120 auVar21;
  pf_u120 auVar22;
  pf_u120 auVar23;
  pf_u120 auVar24;
  pf_u120 auVar25;
  pf_u120 auVar26;
  pf_u120 auVar27;
  pf_u120 auVar28;
  pf_u120 auVar29;
  pf_u120 auVar30;
  pf_u120 auVar31;
  pf_u120 auVar32;
  pf_u120 auVar33;
  pf_u120 auVar34;
  pf_u120 auVar35;
  pf_u120 auVar36;
  undefined1 auVar37 [11];
  pf_u120 auVar38;
  pf_u120 auVar39;
  pf_u120 auVar40;
  undefined1 auVar41 [11];
  pf_u120 auVar42;
  ulong uVar43;
  char *pcVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  undefined1 *puVar49;
  undefined4 *puVar50;
  uint128 auVar51;
  undefined1 auVar52 [11];
  pf_u120 auVar53;
  pf_u120 auVar54;
  uint128 auVar55;
  uint128 auVar56;
  uint128 auVar57;
  uint128 auVar58;

  if (*param_2 != '\x02') {
    if (*param_2 != '\x01') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar49 = &DAT_10010a26;
    if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
      puVar49 = *(undefined1 **)(param_2 + 8);
    }
    recovered_1000c230(param_1,(long)puVar49,*(ulong *)(param_2 + 0x10));
    return param_1;
  }
  uVar43 = *(ulong *)(param_2 + 0x20);
  uVar47 = -uVar43;
  if ((long)-uVar43 < 0) {
    uVar47 = uVar43;
  }
  uVar46 = 0;
  do {
    uVar45 = uVar46;
    auStack_58[uVar45] = (char)uVar47 + (char)(uVar47 / 10) * -10 | 0x30;
    uVar46 = uVar45 + 1;
    bVar2 = 9 < uVar47;
    uVar47 = uVar47 / 10;
  } while (bVar2);
  if ((long)uVar43 < 0) {
    auStack_58[uVar45 + 1] = 0x2d;
    uVar46 = uVar45 + 2;
  }
  if (0x20 < uVar46) {
    PF_PART8(auStack_58, 8) = 0;
    local_48 = 0;
    PF_PART8(auStack_58, 0) = 0;
    goto LAB_100089f9;
  }
  if (uVar46 != 0) {
    if (uVar46 < 4) {
      uVar43 = 0;
    }
    else {
      if (uVar46 < 0x10) {
        uVar47 = 0;
      }
      else {
        uVar43 = (ulong)((uint)uVar46 & 0x30);
        auVar55 = *(uint128 *)(local_68 + uVar46);
        PF_PART1(auVar19,0xd) = 0;
        PF_PART13(auVar19, 0) = PF_PART13(auVar55, 0);
        PF_PART1(auVar19,0xe) = ((uint8_t *)(void *)&auVar55)[7];
        PF_PART1(auVar21,0xc) = ((uint8_t *)(void *)&auVar55)[6];
        PF_PART12(auVar21, 0) = PF_PART12(auVar55, 0);
        PF_PART2(auVar21, 13) = PF_PART2(auVar19, 13);
        PF_PART1(auVar23,0xb) = 0;
        PF_PART11(auVar23, 0) = PF_PART11(auVar55, 0);
        PF_PART3(auVar23, 12) = PF_PART3(auVar21, 12);
        PF_PART1(auVar25,10) = ((uint8_t *)(void *)&auVar55)[5];
        PF_PART10(auVar25, 0) = PF_PART10(auVar55, 0);
        PF_PART4(auVar25, 11) = PF_PART4(auVar23, 11);
        PF_PART1(auVar27,9) = 0;
        PF_PART9(auVar27, 0) = PF_PART9(auVar55, 0);
        PF_PART5(auVar27, 10) = PF_PART5(auVar25, 10);
        PF_PART1(auVar29,8) = ((uint8_t *)(void *)&auVar55)[4];
        PF_PART8(auVar29, 0) = PF_PART8(auVar55, 0);
        PF_PART6(auVar29, 9) = PF_PART6(auVar27, 9);
        ((uint8_t *)(void *)&auVar57)[7] = 0;
        PF_PART7(auVar57, 0) = PF_PART7(auVar29, 8);
        PF_PART8(auVar35, 7) = 0;
        PF_PART7(auVar35, 0) = PF_PART7(auVar29, 8);
        PF_PART8(auVar36, 1) = SUB158(auVar35 << 0x40,7);
        PF_PART1(auVar36,0) = ((uint8_t *)(void *)&auVar55)[3];
        PF_PART6(auVar36, 9) = 0;
        PF_PART10(auVar37, 1) = SUB1510(auVar36 << 0x30,5);
        auVar37[0] = ((uint8_t *)(void *)&auVar55)[2];
        PF_PART4(auVar38, 11) = 0;
        PF_PART11(auVar38, 0) = auVar37;
        PF_PART1(auVar31,2) = ((uint8_t *)(void *)&auVar55)[1];
        PF_PART2(auVar31, 0) = PF_PART2(auVar55, 0);
        PF_PART12(auVar31, 3) = SUB1512(auVar38 << 0x20,3);
        PF_PART13(auVar33, 2) = PF_PART13(auVar31, 2);
        PF_PART2(auVar33, 0) = PF_PART2(auVar55, 0) & 0xff;
        PF_PART4(auVar57, 8) = PF_PART4(auVar33, 0);
        PF_PART4(auVar57, 12) = PF_PART4(auVar37, 0);
        auVar56 = pshuflw(auVar57,auVar57,0x1b);
        auVar57 = pshufhw(auVar56,auVar56,0x1b);
        ((uint8_t *)(void *)&auVar56)[8] = ((uint8_t *)(void *)&auVar55)[8];
        ((uint8_t *)(void *)&auVar56)[9] = 0;
        ((uint8_t *)(void *)&auVar56)[10] = ((uint8_t *)(void *)&auVar55)[9];
        PF_PART10(auVar52, 0) = (unkuint10)((uint8_t *)(void *)&auVar55)[0xc] << 0x40;
        auVar52[10] = ((uint8_t *)(void *)&auVar55)[0xd];
        PF_PART1(auVar53,0xb) = 0;
        PF_PART11(auVar53, 0) = auVar52;
        PF_PART1(auVar53,0xc) = ((uint8_t *)(void *)&auVar55)[0xe];
        PF_PART1(auVar53,0xd) = 0;
        PF_PART1(auVar53,0xe) = ((uint8_t *)(void *)&auVar55)[0xf];
        ((uint8_t *)(void *)&auVar56)[3] = 0;
        PF_PART3(auVar56, 0) = PF_PART3(auVar52, 8);
        PF_PART3(auVar56, 4) = PF_PART3(auVar53, 12);
        ((uint8_t *)(void *)&auVar56)[7] = 0;
        ((uint8_t *)(void *)&auVar56)[0xb] = 0;
        PF_PART3(auVar56, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar55)[0xb],(uint6)((uint8_t *)(void *)&auVar55)[10] << 0x20) >> 0x20);
        ((uint8_t *)(void *)&auVar56)[0xf] = 0;
        auVar55 = pshuflw(auVar56,auVar56,0x1b);
        auVar55 = pshufhw(auVar55,auVar55,0x1b);
        sVar3 = PF_PART2(auVar55, 0);
        local_78[0] = (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar55)[0] - (0xff < sVar3);
        sVar3 = PF_PART2(auVar55, 2);
        sVar4 = PF_PART2(auVar55, 4);
        sVar5 = PF_PART2(auVar55, 6);
        sVar6 = PF_PART2(auVar55, 8);
        sVar7 = PF_PART2(auVar55, 10);
        sVar8 = PF_PART2(auVar55, 12);
        sVar9 = PF_PART2(auVar55, 14);
        sVar10 = PF_PART2(auVar57, 0);
        sVar11 = PF_PART2(auVar57, 2);
        sVar12 = PF_PART2(auVar57, 4);
        sVar13 = PF_PART2(auVar57, 6);
        sVar14 = PF_PART2(auVar57, 8);
        sVar15 = PF_PART2(auVar57, 10);
        sVar16 = PF_PART2(auVar57, 12);
        sVar17 = PF_PART2(auVar57, 14);
        local_78[1] = (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar55)[2] - (0xff < sVar3);
        local_78[2] = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar55)[4] - (0xff < sVar4);
        local_78[3] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar55)[6] - (0xff < sVar5);
        cStack_74 = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar55)[8] - (0xff < sVar6);
        cStack_73 = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar55)[10] - (0xff < sVar7);
        cStack_72 = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar55)[0xc] - (0xff < sVar8);
        cStack_71 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar55)[0xe] - (0xff < sVar9);
        cStack_70 = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar57)[0] - (0xff < sVar10);
        cStack_6f = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar57)[2] - (0xff < sVar11);
        cStack_6e = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar57)[4] - (0xff < sVar12);
        cStack_6d = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar57)[6] - (0xff < sVar13);
        cStack_6c = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar57)[8] - (0xff < sVar14);
        cStack_6b = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar57)[10] - (0xff < sVar15);
        cStack_6a = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar57)[0xc] - (0xff < sVar16);
        cStack_69 = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar57)[0xe] - (0xff < sVar17);
        if (uVar43 != 0x10) {
          auVar55 = *(uint128 *)(local_78 + uVar46);
          PF_PART1(auVar20,0xd) = 0;
          PF_PART13(auVar20, 0) = PF_PART13(auVar55, 0);
          PF_PART1(auVar20,0xe) = ((uint8_t *)(void *)&auVar55)[7];
          PF_PART1(auVar22,0xc) = ((uint8_t *)(void *)&auVar55)[6];
          PF_PART12(auVar22, 0) = PF_PART12(auVar55, 0);
          PF_PART2(auVar22, 13) = PF_PART2(auVar20, 13);
          PF_PART1(auVar24,0xb) = 0;
          PF_PART11(auVar24, 0) = PF_PART11(auVar55, 0);
          PF_PART3(auVar24, 12) = PF_PART3(auVar22, 12);
          PF_PART1(auVar26,10) = ((uint8_t *)(void *)&auVar55)[5];
          PF_PART10(auVar26, 0) = PF_PART10(auVar55, 0);
          PF_PART4(auVar26, 11) = PF_PART4(auVar24, 11);
          PF_PART1(auVar28,9) = 0;
          PF_PART9(auVar28, 0) = PF_PART9(auVar55, 0);
          PF_PART5(auVar28, 10) = PF_PART5(auVar26, 10);
          PF_PART1(auVar30,8) = ((uint8_t *)(void *)&auVar55)[4];
          PF_PART8(auVar30, 0) = PF_PART8(auVar55, 0);
          PF_PART6(auVar30, 9) = PF_PART6(auVar28, 9);
          ((uint8_t *)(void *)&auVar58)[7] = 0;
          PF_PART7(auVar58, 0) = PF_PART7(auVar30, 8);
          PF_PART8(auVar39, 7) = 0;
          PF_PART7(auVar39, 0) = PF_PART7(auVar30, 8);
          PF_PART8(auVar40, 1) = SUB158(auVar39 << 0x40,7);
          PF_PART1(auVar40,0) = ((uint8_t *)(void *)&auVar55)[3];
          PF_PART6(auVar40, 9) = 0;
          PF_PART10(auVar41, 1) = SUB1510(auVar40 << 0x30,5);
          auVar41[0] = ((uint8_t *)(void *)&auVar55)[2];
          PF_PART4(auVar42, 11) = 0;
          PF_PART11(auVar42, 0) = auVar41;
          PF_PART1(auVar32,2) = ((uint8_t *)(void *)&auVar55)[1];
          PF_PART2(auVar32, 0) = PF_PART2(auVar55, 0);
          PF_PART12(auVar32, 3) = SUB1512(auVar42 << 0x20,3);
          PF_PART13(auVar34, 2) = PF_PART13(auVar32, 2);
          PF_PART2(auVar34, 0) = PF_PART2(auVar55, 0) & 0xff;
          PF_PART4(auVar58, 8) = PF_PART4(auVar34, 0);
          PF_PART4(auVar58, 12) = PF_PART4(auVar41, 0);
          auVar56 = pshuflw(auVar58,auVar58,0x1b);
          auVar56 = pshufhw(auVar56,auVar56,0x1b);
          ((uint8_t *)(void *)&auVar51)[9] = 0;
          ((uint8_t *)(void *)&auVar51)[8] = ((uint8_t *)(void *)&auVar55)[8];
          ((uint8_t *)(void *)&auVar51)[10] = ((uint8_t *)(void *)&auVar55)[9];
          PF_PART10(auVar54, 0) = (unkuint10)((uint8_t *)(void *)&auVar55)[0xc] << 0x40;
          PF_PART1(auVar54,10) = ((uint8_t *)(void *)&auVar55)[0xd];
          PF_PART1(auVar54,0xb) = 0;
          PF_PART1(auVar54,0xc) = ((uint8_t *)(void *)&auVar55)[0xe];
          PF_PART1(auVar54,0xd) = 0;
          PF_PART1(auVar54,0xe) = ((uint8_t *)(void *)&auVar55)[0xf];
          ((uint8_t *)(void *)&auVar51)[7] = 0;
          PF_PART7(auVar51, 0) = PF_PART7(auVar54, 8);
          ((uint8_t *)(void *)&auVar51)[0xb] = 0;
          PF_PART3(auVar51, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar55)[0xb],(uint6)((uint8_t *)(void *)&auVar55)[10] << 0x20) >> 0x20);
          ((uint8_t *)(void *)&auVar51)[0xf] = 0;
          auVar55 = pshuflw(auVar51,auVar51,0x1b);
          auVar55 = pshufhw(auVar55,auVar55,0x1b);
          sVar3 = PF_PART2(auVar55, 0);
          sVar4 = PF_PART2(auVar55, 2);
          sVar5 = PF_PART2(auVar55, 4);
          sVar6 = PF_PART2(auVar55, 6);
          sVar7 = PF_PART2(auVar55, 8);
          sVar8 = PF_PART2(auVar55, 10);
          sVar9 = PF_PART2(auVar55, 12);
          sVar10 = PF_PART2(auVar55, 14);
          sVar11 = PF_PART2(auVar56, 0);
          sVar12 = PF_PART2(auVar56, 2);
          sVar13 = PF_PART2(auVar56, 4);
          sVar14 = PF_PART2(auVar56, 6);
          sVar15 = PF_PART2(auVar56, 8);
          sVar16 = PF_PART2(auVar56, 10);
          sVar17 = PF_PART2(auVar56, 12);
          sVar18 = PF_PART2(auVar56, 14);
          local_68[0] = (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar55)[0] - (0xff < sVar3);
          local_68[1] = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar55)[2] - (0xff < sVar4);
          local_68[2] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar55)[4] - (0xff < sVar5);
          local_68[3] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar55)[6] - (0xff < sVar6);
          cStack_64 = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar55)[8] - (0xff < sVar7);
          cStack_63 = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar55)[10] - (0xff < sVar8);
          cStack_62 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar55)[0xc] - (0xff < sVar9);
          cStack_61 = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar55)[0xe] - (0xff < sVar10);
          cStack_60 = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar56)[0] - (0xff < sVar11);
          cStack_5f = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar56)[2] - (0xff < sVar12);
          cStack_5e = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar56)[4] - (0xff < sVar13);
          cStack_5d = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar56)[6] - (0xff < sVar14);
          cStack_5c = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar56)[8] - (0xff < sVar15);
          cStack_5b = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar56)[10] - (0xff < sVar16);
          cStack_5a = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar56)[0xc] - (0xff < sVar17);
          cStack_59 = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar56)[0xe] - (0xff < sVar18);
        }
        if (uVar46 == uVar43) goto LAB_100089d0;
        uVar47 = uVar43;
        if ((uVar46 & 0xc) == 0) goto LAB_100089a9;
      }
      uVar43 = (ulong)((uint)uVar46 & 0x3c);
      puVar50 = (undefined4 *)(auStack_58 + (uVar46 - uVar47) + -4);
      do {
        uVar1 = *puVar50;
        auVar55 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                         >> 0x10),(short)uVar1) & 0xffffff00ff00ff);
        auVar55 = pshuflw(auVar55,auVar55,0x1b);
        sVar3 = PF_PART2(auVar55, 0);
        sVar4 = PF_PART2(auVar55, 2);
        sVar5 = PF_PART2(auVar55, 4);
        sVar6 = PF_PART2(auVar55, 6);
        *(uint *)(local_78 + uVar47) =
             CONCAT13((0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar55)[6] - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar55)[4] - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar55)[2] - (0xff < sVar4),
                                        (0 < sVar3) * (sVar3 < 0x100) * ((uint8_t *)(void *)&auVar55)[0] - (0xff < sVar3))
                              ));
        uVar47 = uVar47 + 4;
        puVar50 = puVar50 + -1;
      } while (uVar43 != uVar47);
      if (uVar46 == uVar43) goto LAB_100089d0;
    }
LAB_100089a9:
    lVar48 = uVar46 - uVar43;
    pcVar44 = local_78 + uVar43;
    do {
      *pcVar44 = auStack_58[lVar48 + -1];
      pcVar44 = pcVar44 + 1;
      lVar48 = lVar48 + -1;
    } while (lVar48 != 0);
  }
LAB_100089d0:
  (*(uint128 *)(void *)auStack_58) = (uint128)0x0;
  local_48 = 0;
  recovered_1000c230((long *)auStack_58,(long)local_78,uVar46);
LAB_100089f9:
  *param_1 = PF_PART8(auStack_58, 0);
  param_1[1] = PF_PART8(auStack_58, 8);
  param_1[2] = local_48;
  (*(uint128 *)(void *)auStack_58) = ZEXT816(0);
  local_48 = 0;
  recovered_10007130((void *)0x0);
  return param_1;
}

#undef DAT_10010a26
#undef local_78
#undef local_68
#undef local_48
#undef cStack_74
#undef cStack_73
#undef cStack_72
#undef cStack_71
#undef cStack_70
#undef cStack_6f
#undef cStack_6e
#undef cStack_6d
#undef cStack_6c
#undef cStack_6b
#undef cStack_6a
#undef cStack_69
#undef cStack_64
#undef cStack_63
#undef cStack_62
#undef cStack_61
#undef cStack_60
#undef cStack_5f
#undef cStack_5e
#undef cStack_5d
#undef cStack_5c
#undef cStack_5b
#undef cStack_5a
#undef cStack_59
#undef auStack_58

#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10012080
#define DAT_10012080 (*(int *)(((uintptr_t)pf_module_state + 0x2244U)))
#define local_28 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a20
 */

longlong recovered_10008a20(void *variable)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;

  if (*(char *)variable == '\x01') {
    if (*(long *)((long)variable + 0x10) != 0) {
      local_28 = (char *)0x0;
      DAT_10012080 = 0;
      pcVar1 = *(char **)((long)variable + 8);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = &DAT_10010a26;
      }
      lVar2 = recovered_10007fe0(pcVar1,&local_28,10);
      pcVar1 = *(char **)((long)variable + 8);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = &DAT_10010a26;
      }
      if (((local_28 == (char *)0x0 || local_28 == pcVar1) || (*local_28 != '\0')) ||
         (DAT_10012080 == 0x22)) {
        if (((2 < *(ulong *)((long)variable + 0x10)) && (*pcVar1 == '0')) &&
           ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
          local_28 = (char *)0x0;
          DAT_10012080 = 0;
          lVar2 = recovered_10007fe0(pcVar1 + 2,&local_28,0x10);
          puVar3 = &DAT_10010a26;
          if (*(undefined1 **)((long)variable + 8) != (undefined1 *)0x0) {
            puVar3 = *(undefined1 **)((long)variable + 8);
          }
          if (((local_28 != (char *)0x0) && (local_28 != puVar3 + 2)) &&
             ((*local_28 == '\0' && (DAT_10012080 != 0x22)))) {
            return lVar2;
          }
        }
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  else if (*(char *)variable == '\x02') {
    return *(longlong *)((long)variable + 0x20);
  }
  return 0;
}

#undef DAT_10010a26
#undef DAT_10012080
#undef local_28

#undef DAT_10010b88
#define DAT_10010b88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4cU)))
#undef LAB_10008c46
#define LAB_10008c46 (*(uint8_t *)(0x10008c46U))
#define local_a0 (*(undefined8 *)(frame + 32))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_80 (*(code * *)(frame + 64))
#define local_78 (*(undefined * *)(frame + 72))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 * *)(frame + 96))
#define local_48 (*(undefined8 * *)(frame + 120))
#define local_40 (*(undefined8 * *)(frame + 128))
#define auStack_a8 (*(undefined1 (*)[8])(frame + 24))
#define local_38 (*(uintptr_t * *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b30
 */

void recovered_10008b30(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  local_70 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  local_60 = auStack_a8;
  *param_1 = param_2;
  local_38 = param_1 + 1;
  *local_38 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_40 = param_1 + 4;
  *local_40 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[10] = 0;
  local_80 = recovered_10007080;
  local_78 = &DAT_10010b88;
  local_68 = &LAB_10008c46;
  local_98 = 1;
  recovered_10007600(&local_a0);
  local_48 = param_1;
  recovered_10008ca0((long)param_1);
  local_48[7] = 0x100000001;
  *(undefined1 *)(local_48 + 8) = 0;
  *(undefined4 *)((long)local_48 + 0x44) = 0xfff;
  piVar1 = (int *)*local_48;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (*(long *)(piVar1 + 2) != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(local_48 + 9) = bVar2;
  *(undefined1 *)((long)local_48 + 0x49) = 1;
  recovered_10007620(&local_a0);
  return;
}

#undef DAT_10010b88
#undef LAB_10008c46
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_48
#undef local_40
#undef auStack_a8
#undef local_38

#undef DAT_10010b90
#define DAT_10010b90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
#undef LAB_10009a8b
#define LAB_10009a8b (*(uint8_t *)(0x10009a8bU))
#undef PTR_recovered_1000c900_10011018
#define PTR_recovered_1000c900_10011018 (*(void * *)(((uintptr_t)pf_module_state + 0x11dcU)))
#undef PTR_recovered_1000cc00_10011070
#define PTR_recovered_1000cc00_10011070 (*(void * *)(((uintptr_t)pf_module_state + 0x1234U)))
#undef PTR_recovered_1000d7b0_100110b8
#define PTR_recovered_1000d7b0_100110b8 (*(void * *)(((uintptr_t)pf_module_state + 0x127cU)))
#undef PTR_recovered_1000d8e0_10011100
#define PTR_recovered_1000d8e0_10011100 (*(void * *)(((uintptr_t)pf_module_state + 0x12c4U)))
#undef PTR_recovered_1000d9c0_10011148
#define PTR_recovered_1000d9c0_10011148 (*(void * *)(((uintptr_t)pf_module_state + 0x130cU)))
#undef PTR_recovered_1000dba0_10011190
#define PTR_recovered_1000dba0_10011190 (*(void * *)(((uintptr_t)pf_module_state + 0x1354U)))
#undef PTR_recovered_1000dd30_100111d8
#define PTR_recovered_1000dd30_100111d8 (*(void * *)(((uintptr_t)pf_module_state + 0x139cU)))
#undef PTR_recovered_1000df50_10011220
#define PTR_recovered_1000df50_10011220 (*(void * *)(((uintptr_t)pf_module_state + 0x13e4U)))
#undef PTR_recovered_1000e0a0_10011268
#define PTR_recovered_1000e0a0_10011268 (*(void * *)(((uintptr_t)pf_module_state + 0x142cU)))
#undef PTR_recovered_1000e6c0_100112b0
#define PTR_recovered_1000e6c0_100112b0 (*(void * *)(((uintptr_t)pf_module_state + 0x1474U)))
#undef PTR_recovered_1000e750_100112f8
#define PTR_recovered_1000e750_100112f8 (*(void * *)(((uintptr_t)pf_module_state + 0x14bcU)))
#undef PTR_recovered_1000e820_10011340
#define PTR_recovered_1000e820_10011340 (*(void * *)(((uintptr_t)pf_module_state + 0x1504U)))
#undef PTR_recovered_1000efa0_10011388
#define PTR_recovered_1000efa0_10011388 (*(void * *)(((uintptr_t)pf_module_state + 0x154cU)))
#undef PTR_recovered_1000f1e0_100113d0
#define PTR_recovered_1000f1e0_100113d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1594U)))
#undef PTR_recovered_1000f2d0_10011418
#define PTR_recovered_1000f2d0_10011418 (*(void * *)(((uintptr_t)pf_module_state + 0x15dcU)))
#undef PTR_recovered_1000f3f0_10011460
#define PTR_recovered_1000f3f0_10011460 (*(void * *)(((uintptr_t)pf_module_state + 0x1624U)))
#undef PTR_recovered_1000f4e0_100114a8
#define PTR_recovered_1000f4e0_100114a8 (*(void * *)(((uintptr_t)pf_module_state + 0x166cU)))
#undef PTR_recovered_1000f600_100114f0
#define PTR_recovered_1000f600_100114f0 (*(void * *)(((uintptr_t)pf_module_state + 0x16b4U)))
#undef PTR_recovered_1000f6f0_10011538
#define PTR_recovered_1000f6f0_10011538 (*(void * *)(((uintptr_t)pf_module_state + 0x16fcU)))
#undef PTR_recovered_1000f820_10011580
#define PTR_recovered_1000f820_10011580 (*(void * *)(((uintptr_t)pf_module_state + 0x1744U)))
#undef PTR_recovered_1000f930_100115c8
#define PTR_recovered_1000f930_100115c8 (*(void * *)(((uintptr_t)pf_module_state + 0x178cU)))
#undef PTR_recovered_1000fa80_10011610
#define PTR_recovered_1000fa80_10011610 (*(void * *)(((uintptr_t)pf_module_state + 0x17d4U)))
#define local_2b0 (*(void * *)(frame + 192))
#define local_2a8 (*(undefined8 *)(frame + 200))
#define local_298 (*(void * *)(frame + 216))
#define local_290 (*(undefined8 *)(frame + 224))
#define local_280 (*(void * *)(frame + 240))
#define local_278 (*(undefined8 *)(frame + 248))
#define local_268 (*(void * *)(frame + 264))
#define local_260 (*(undefined8 *)(frame + 272))
#define local_250 (*(void * *)(frame + 288))
#define local_248 (*(undefined8 *)(frame + 296))
#define local_238 (*(void * *)(frame + 312))
#define local_230 (*(undefined8 *)(frame + 320))
#define local_220 (*(void * *)(frame + 336))
#define local_218 (*(undefined8 *)(frame + 344))
#define local_208 (*(void * *)(frame + 360))
#define local_200 (*(undefined8 *)(frame + 368))
#define local_1f0 (*(void * *)(frame + 384))
#define local_1e8 (*(undefined8 *)(frame + 392))
#define local_1d8 (*(void * *)(frame + 408))
#define local_1d0 (*(undefined8 *)(frame + 416))
#define local_1c0 (*(void * *)(frame + 432))
#define local_1b8 (*(undefined8 *)(frame + 440))
#define local_1a8 (*(void * *)(frame + 456))
#define local_1a0 (*(undefined8 *)(frame + 464))
#define local_190 (*(void * *)(frame + 480))
#define local_188 (*(undefined8 *)(frame + 488))
#define local_178 (*(void * *)(frame + 504))
#define local_170 (*(undefined8 *)(frame + 512))
#define local_160 (*(void * *)(frame + 528))
#define local_158 (*(undefined8 *)(frame + 536))
#define local_148 (*(long * *)(frame + 552))
#define local_140 (*(long * *)(frame + 560))
#define local_138 (*(long * *)(frame + 568))
#define local_130 (*(long * *)(frame + 576))
#define local_128 (*(long * *)(frame + 584))
#define local_120 (*(long * *)(frame + 592))
#define local_118 (*(long * *)(frame + 600))
#define local_110 (*(long * *)(frame + 608))
#define local_108 (*(long * *)(frame + 616))
#define local_100 (*(long * *)(frame + 624))
#define local_f8 (*(long * *)(frame + 632))
#define local_f0 (*(long * *)(frame + 640))
#define local_e8 (*(long * *)(frame + 648))
#define local_e0 (*(long * *)(frame + 656))
#define local_d8 (*(long * *)(frame + 664))
#define local_d0 (*(long * *)(frame + 672))
#define local_c8 (*(long * *)(frame + 680))
#define local_c0 (*(long * *)(frame + 688))
#define local_b8 (*(long * *)(frame + 696))
#define local_b0 (*(long * *)(frame + 704))
#define local_a8 (*(long * *)(frame + 712))
#define local_a0 (*(long * *)(frame + 720))
#define local_98 (*(undefined8 *)(frame + 728))
#define local_90 (*(undefined4 *)(frame + 736))
#define local_78 (*(code * *)(frame + 760))
#define local_70 (*(undefined * *)(frame + 768))
#define local_68 (*(undefined1 * *)(frame + 776))
#define local_60 (*(undefined1 * *)(frame + 784))
#define local_58 (*(undefined1 * *)(frame + 792))
#define local_40 (*(long *)(frame + 816))
#define local_33 (*(undefined2 *)(frame + 829))
#define local_31 (*(undefined1 *)(frame + 831))
#define local_358 (*(void * *)(frame + 24))
#define local_350 (*(undefined8 *)(frame + 32))
#define local_340 (*(void * *)(frame + 48))
#define local_338 (*(undefined8 *)(frame + 56))
#define local_328 (*(void * *)(frame + 72))
#define local_320 (*(undefined8 *)(frame + 80))
#define local_310 (*(void * *)(frame + 96))
#define local_308 (*(undefined8 *)(frame + 104))
#define local_2f8 (*(void * *)(frame + 120))
#define local_2f0 (*(undefined8 *)(frame + 128))
#define local_2e0 (*(void * *)(frame + 144))
#define local_2d8 (*(undefined8 *)(frame + 152))
#define local_2c8 (*(void * *)(frame + 168))
#define local_2c0 (*(undefined8 *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ca0
 */

void recovered_10008ca0(long param_1)

{
  unsigned char frame[912] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  local_68 = (undefined1 *)((long)(uintptr_t)(frame + 880) + -8);
  local_58 = (undefined1 *)&local_358;
  lVar2 = *(long *)(param_1 + 0x28);
  local_78 = recovered_10007080;
  local_70 = &DAT_10010b90;
  local_60 = &LAB_10009a8b;
  recovered_10007600(&local_98);
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x20 + -8;
    do {
      lVar1 = *(long *)(param_1 + 0x20);
      if (*(long **)(lVar1 + lVar3) != (long *)0x0) {
        (*(void (**)(void *))(**(long **)(lVar1 + lVar3) + 8))((void *)(*(long **)(lVar1 + lVar3)));
      }
      *(undefined8 *)(lVar1 + -0x10 + lVar3) = 0;
      recovered_10007130(*(void **)(lVar1 + -0x18 + lVar3));
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_33 = (ushort)PF_PART1(local_33, 1) << 8;
  local_90 = 0xffffffff;
  local_40 = param_1;
  recovered_1000c620((long *)&local_358,(undefined1 *)&local_33,1);
  local_90 = 1;
  local_148 = recovered_100070d0(0x10);
  *local_148 = (long)&PTR_recovered_1000c900_10011018;
  local_90 = 2;
  recovered_1000b7a0(local_40,1,&local_358,&local_148);
  if (local_148 != (long *)0x0) {
    (*(void (**)(void *))(*local_148 + 8))((void *)(local_148));
  }
  local_350 = 0;
  recovered_10007130(local_358);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_340,(undefined1 *)&local_33,1);
  local_90 = 3;
  local_140 = recovered_100070d0(0x10);
  *local_140 = (long)&PTR_recovered_1000cc00_10011070;
  local_90 = 4;
  recovered_1000b7a0(local_40,2,&local_340,&local_140);
  if (local_140 != (long *)0x0) {
    (*(void (**)(void *))(*local_140 + 8))((void *)(local_140));
  }
  local_338 = 0;
  recovered_10007130(local_340);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_328,(undefined1 *)&local_33,1);
  local_90 = 5;
  local_138 = recovered_100070d0(0x10);
  *local_138 = (long)&PTR_recovered_1000d7b0_100110b8;
  local_90 = 6;
  recovered_1000b7a0(local_40,3,&local_328,&local_138);
  if (local_138 != (long *)0x0) {
    (*(void (**)(void *))(*local_138 + 8))((void *)(local_138));
  }
  local_320 = 0;
  recovered_10007130(local_328);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_310,(undefined1 *)&local_33,1);
  local_90 = 7;
  local_130 = recovered_100070d0(0x10);
  *local_130 = (long)&PTR_recovered_1000d8e0_10011100;
  local_90 = 8;
  recovered_1000b7a0(local_40,4,&local_310,&local_130);
  if (local_130 != (long *)0x0) {
    (*(void (**)(void *))(*local_130 + 8))((void *)(local_130));
  }
  local_308 = 0;
  recovered_10007130(local_310);
  local_33 = local_33 & 0xff00;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_2f8,(undefined1 *)&local_33,1);
  local_90 = 9;
  local_128 = recovered_100070d0(0x10);
  *local_128 = (long)&PTR_recovered_1000d9c0_10011148;
  local_90 = 10;
  recovered_1000b7a0(local_40,5,&local_2f8,&local_128);
  if (local_128 != (long *)0x0) {
    (*(void (**)(void *))(*local_128 + 8))((void *)(local_128));
  }
  local_2f0 = 0;
  recovered_10007130(local_2f8);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_2e0,(undefined1 *)&local_33,1);
  local_90 = 0xb;
  local_120 = recovered_100070d0(0x10);
  *local_120 = (long)&PTR_recovered_1000dba0_10011190;
  local_90 = 0xc;
  recovered_1000b7a0(local_40,6,&local_2e0,&local_120);
  if (local_120 != (long *)0x0) {
    (*(void (**)(void *))(*local_120 + 8))((void *)(local_120));
  }
  local_2d8 = 0;
  recovered_10007130(local_2e0);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_2c8,(undefined1 *)&local_33,1);
  local_90 = 0xd;
  local_118 = recovered_100070d0(0x10);
  *local_118 = (long)&PTR_recovered_1000dd30_100111d8;
  local_90 = 0xe;
  recovered_1000b7a0(local_40,7,&local_2c8,&local_118);
  if (local_118 != (long *)0x0) {
    (*(void (**)(void *))(*local_118 + 8))((void *)(local_118));
  }
  local_2c0 = 0;
  recovered_10007130(local_2c8);
  local_33 = 0x101;
  local_31 = 1;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_2b0,(undefined1 *)&local_33,3);
  local_90 = 0xf;
  local_110 = recovered_100070d0(0x10);
  *local_110 = (long)&PTR_recovered_1000df50_10011220;
  local_90 = 0x10;
  recovered_1000b7a0(local_40,8,&local_2b0,&local_110);
  if (local_110 != (long *)0x0) {
    (*(void (**)(void *))(*local_110 + 8))((void *)(local_110));
  }
  local_2a8 = 0;
  recovered_10007130(local_2b0);
  local_33 = 0x101;
  local_31 = 0;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_298,(undefined1 *)&local_33,3);
  local_90 = 0x11;
  local_108 = recovered_100070d0(0x10);
  *local_108 = (long)&PTR_recovered_1000e0a0_10011268;
  local_90 = 0x12;
  recovered_1000b7a0(local_40,9,&local_298,&local_108);
  if (local_108 != (long *)0x0) {
    (*(void (**)(void *))(*local_108 + 8))((void *)(local_108));
  }
  local_290 = 0;
  recovered_10007130(local_298);
  local_33 = 0x101;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_280,(undefined1 *)&local_33,2);
  local_90 = 0x13;
  local_100 = recovered_100070d0(0x10);
  *local_100 = (long)&PTR_recovered_1000e6c0_100112b0;
  local_90 = 0x14;
  recovered_1000b7a0(local_40,10,&local_280,&local_100);
  if (local_100 != (long *)0x0) {
    (*(void (**)(void *))(*local_100 + 8))((void *)(local_100));
  }
  local_278 = 0;
  recovered_10007130(local_280);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_268,(undefined1 *)&local_33,1);
  local_90 = 0x15;
  local_f8 = recovered_100070d0(0x10);
  *local_f8 = (long)&PTR_recovered_1000e750_100112f8;
  local_90 = 0x16;
  recovered_1000b7a0(local_40,0xb,&local_268,&local_f8);
  if (local_f8 != (long *)0x0) {
    (*(void (**)(void *))(*local_f8 + 8))((void *)(local_f8));
  }
  local_260 = 0;
  recovered_10007130(local_268);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_250,(undefined1 *)&local_33,2);
  local_90 = 0x17;
  local_f0 = recovered_100070d0(0x10);
  *local_f0 = (long)&PTR_recovered_1000e820_10011340;
  local_90 = 0x18;
  recovered_1000b7a0(local_40,0xc,&local_250,&local_f0);
  if (local_f0 != (long *)0x0) {
    (*(void (**)(void *))(*local_f0 + 8))((void *)(local_f0));
  }
  local_248 = 0;
  recovered_10007130(local_250);
  local_33 = 2;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_238,(undefined1 *)&local_33,2);
  local_90 = 0x19;
  local_e8 = recovered_100070d0(0x10);
  *local_e8 = (long)&PTR_recovered_1000efa0_10011388;
  local_90 = 0x1a;
  recovered_1000b7a0(local_40,0xd,&local_238,&local_e8);
  if (local_e8 != (long *)0x0) {
    (*(void (**)(void *))(*local_e8 + 8))((void *)(local_e8));
  }
  local_230 = 0;
  recovered_10007130(local_238);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_220,(undefined1 *)&local_33,2);
  local_90 = 0x1b;
  local_e0 = recovered_100070d0(0x10);
  *local_e0 = (long)&PTR_recovered_1000f1e0_100113d0;
  local_90 = 0x1c;
  recovered_1000b7a0(local_40,0xe,&local_220,&local_e0);
  if (local_e0 != (long *)0x0) {
    (*(void (**)(void *))(*local_e0 + 8))((void *)(local_e0));
  }
  local_218 = 0;
  recovered_10007130(local_220);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_208,(undefined1 *)&local_33,2);
  local_90 = 0x1d;
  local_d8 = recovered_100070d0(0x10);
  *local_d8 = (long)&PTR_recovered_1000f2d0_10011418;
  local_90 = 0x1e;
  recovered_1000b7a0(local_40,0xf,&local_208,&local_d8);
  if (local_d8 != (long *)0x0) {
    (*(void (**)(void *))(*local_d8 + 8))((void *)(local_d8));
  }
  local_200 = 0;
  recovered_10007130(local_208);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_1f0,(undefined1 *)&local_33,2);
  local_90 = 0x1f;
  local_d0 = recovered_100070d0(0x10);
  *local_d0 = (long)&PTR_recovered_1000f3f0_10011460;
  local_90 = 0x20;
  recovered_1000b7a0(local_40,0x10,&local_1f0,&local_d0);
  if (local_d0 != (long *)0x0) {
    (*(void (**)(void *))(*local_d0 + 8))((void *)(local_d0));
  }
  local_1e8 = 0;
  recovered_10007130(local_1f0);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_1d8,(undefined1 *)&local_33,2);
  local_90 = 0x21;
  local_c8 = recovered_100070d0(0x10);
  *local_c8 = (long)&PTR_recovered_1000f4e0_100114a8;
  local_90 = 0x22;
  recovered_1000b7a0(local_40,0x11,&local_1d8,&local_c8);
  if (local_c8 != (long *)0x0) {
    (*(void (**)(void *))(*local_c8 + 8))((void *)(local_c8));
  }
  local_1d0 = 0;
  recovered_10007130(local_1d8);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_1c0,(undefined1 *)&local_33,2);
  local_90 = 0x23;
  local_c0 = recovered_100070d0(0x10);
  *local_c0 = (long)&PTR_recovered_1000f600_100114f0;
  local_90 = 0x24;
  recovered_1000b7a0(local_40,0x12,&local_1c0,&local_c0);
  if (local_c0 != (long *)0x0) {
    (*(void (**)(void *))(*local_c0 + 8))((void *)(local_c0));
  }
  local_1b8 = 0;
  recovered_10007130(local_1c0);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_1a8,(undefined1 *)&local_33,2);
  local_90 = 0x25;
  local_b8 = recovered_100070d0(0x10);
  *local_b8 = (long)&PTR_recovered_1000f6f0_10011538;
  local_90 = 0x26;
  recovered_1000b7a0(local_40,0x13,&local_1a8,&local_b8);
  if (local_b8 != (long *)0x0) {
    (*(void (**)(void *))(*local_b8 + 8))((void *)(local_b8));
  }
  local_1a0 = 0;
  recovered_10007130(local_1a8);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_190,(undefined1 *)&local_33,2);
  local_90 = 0x27;
  local_b0 = recovered_100070d0(0x10);
  *local_b0 = (long)&PTR_recovered_1000f820_10011580;
  local_90 = 0x28;
  recovered_1000b7a0(local_40,0x14,&local_190,&local_b0);
  if (local_b0 != (long *)0x0) {
    (*(void (**)(void *))(*local_b0 + 8))((void *)(local_b0));
  }
  local_188 = 0;
  recovered_10007130(local_190);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_178,(undefined1 *)&local_33,2);
  local_90 = 0x29;
  local_a8 = recovered_100070d0(0x10);
  *local_a8 = (long)&PTR_recovered_1000f930_100115c8;
  local_90 = 0x2a;
  recovered_1000b7a0(local_40,0x15,&local_178,&local_a8);
  if (local_a8 != (long *)0x0) {
    (*(void (**)(void *))(*local_a8 + 8))((void *)(local_a8));
  }
  local_170 = 0;
  recovered_10007130(local_178);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_1000c620((long *)&local_160,(undefined1 *)&local_33,2);
  local_90 = 0x2b;
  local_a0 = recovered_100070d0(0x10);
  *local_a0 = (long)&PTR_recovered_1000fa80_10011610;
  local_90 = 0x2c;
  recovered_1000b7a0(local_40,0x16,&local_160,&local_a0);
  if (local_a0 != (long *)0x0) {
    (*(void (**)(void *))(*local_a0 + 8))((void *)(local_a0));
  }
  local_158 = 0;
  recovered_10007130(local_160);
  recovered_10007620(&local_98);
  return;
}

#undef DAT_10010b90
#undef LAB_10009a8b
#undef PTR_recovered_1000c900_10011018
#undef PTR_recovered_1000cc00_10011070
#undef PTR_recovered_1000d7b0_100110b8
#undef PTR_recovered_1000d8e0_10011100
#undef PTR_recovered_1000d9c0_10011148
#undef PTR_recovered_1000dba0_10011190
#undef PTR_recovered_1000dd30_100111d8
#undef PTR_recovered_1000df50_10011220
#undef PTR_recovered_1000e0a0_10011268
#undef PTR_recovered_1000e6c0_100112b0
#undef PTR_recovered_1000e750_100112f8
#undef PTR_recovered_1000e820_10011340
#undef PTR_recovered_1000efa0_10011388
#undef PTR_recovered_1000f1e0_100113d0
#undef PTR_recovered_1000f2d0_10011418
#undef PTR_recovered_1000f3f0_10011460
#undef PTR_recovered_1000f4e0_100114a8
#undef PTR_recovered_1000f600_100114f0
#undef PTR_recovered_1000f6f0_10011538
#undef PTR_recovered_1000f820_10011580
#undef PTR_recovered_1000f930_100115c8
#undef PTR_recovered_1000fa80_10011610
#undef local_2b0
#undef local_2a8
#undef local_298
#undef local_290
#undef local_280
#undef local_278
#undef local_268
#undef local_260
#undef local_250
#undef local_248
#undef local_238
#undef local_230
#undef local_220
#undef local_218
#undef local_208
#undef local_200
#undef local_1f0
#undef local_1e8
#undef local_1d8
#undef local_1d0
#undef local_1c0
#undef local_1b8
#undef local_1a8
#undef local_1a0
#undef local_190
#undef local_188
#undef local_178
#undef local_170
#undef local_160
#undef local_158
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
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
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_33
#undef local_31
#undef local_358
#undef local_350
#undef local_340
#undef local_338
#undef local_328
#undef local_320
#undef local_310
#undef local_308
#undef local_2f8
#undef local_2f0
#undef local_2e0
#undef local_2d8
#undef local_2c8
#undef local_2c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0e0
 */

void recovered_1000a0e0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  piVar1 = (int *)*param_1;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (*(long *)(piVar1 + 2) != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(param_1 + 9) = bVar2;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a130
 */

void recovered_1000a130(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x20 + -8;
    do {
      lVar1 = *param_1;
      if (*(long **)(lVar1 + lVar3) != (long *)0x0) {
        (*(void (**)(void *))(**(long **)(lVar1 + lVar3) + 8))((void *)(*(long **)(lVar1 + lVar3)));
      }
      *(undefined8 *)(lVar1 + -0x10 + lVar3) = 0;
      recovered_10007130(*(void **)(lVar1 + -0x18 + lVar3));
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10007130((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1b0
 */

void recovered_1000a1b0(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x28 + -0x20;
    do {
      recovered_10007130(*(void **)(*param_1 + lVar2));
      lVar2 = lVar2 + -0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10007130((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a210
 */

void recovered_1000a210(undefined8 *in_RDI,undefined8 in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008b30(in_RDI,in_RSI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a220
 */

void recovered_1000a220(undefined8 *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = true;
  if (((param_2 != (int *)0x0) && (*(long *)(param_2 + 2) != 0)) && (0 < *param_2)) {
    bVar1 = param_2[1] < 1;
  }
  *(bool *)(param_1 + 9) = bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a270
 */

undefined8 recovered_1000a270(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


#undef DAT_10010bec
#define DAT_10010bec (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdb0U)))
#undef LAB_1000b185
#define LAB_1000b185 (*(uint8_t *)(0x1000b185U))
#define puStack_d8 (*(undefined1 * *)(frame + 184))
#define uStack_c8 (*(undefined1 *)(frame + 200))
#define uStack_c7 (*(undefined7 *)(frame + 201))
#define uStack_c0 (*(undefined1 *)(frame + 208))
#define uStack_bf (*(undefined7 *)(frame + 209))
#define uStack_b8 (*(undefined1 *)(frame + 216))
#define lStack_90 (*(long *)(frame + 256))
#define local_178 (*(byte * *)(frame + 24))
#define local_170 (*(byte * *)(frame + 32))
#define local_168 (*(long * *)(frame + 40))
#define local_160 (*(undefined8 * *)(frame + 48))
#define local_158 (*(undefined8 *)(frame + 56))
#define local_150 (*(undefined4 *)(frame + 64))
#define local_138 (*(code * *)(frame + 88))
#define local_130 (*(undefined * *)(frame + 96))
#define local_128 (*(undefined1 * *)(frame + 104))
#define local_120 (*(undefined1 * *)(frame + 112))
#define local_118 (*(undefined1 * *)(frame + 120))
#define local_fc (*(uint *)(frame + 148))
#define local_f8 (*(undefined1 * *)(frame + 152))
#define local_f0 (*(undefined1 * *)(frame + 160))
#define local_e8 (*(uint (*)[2])(frame + 168))
#define local_e0 (*(undefined1 * *)(frame + 176))
#define local_d0 (*(undefined1 * *)(frame + 192))
#define local_b0 (*(undefined1 * *)(frame + 224))
#define local_a8 (*(undefined1 * *)(frame + 232))
#define local_a0 (*(undefined1 * *)(frame + 240))
#define local_98 (*(void * *)(frame + 248))
#define local_88 (*(undefined8 *)(frame + 264))
#define local_80 (*(undefined1 * *)(frame + 272))
#define local_78 (*(undefined8 * *)(frame + 280))
#define local_70 (*(uint * *)(frame + 288))
#define local_68 (*(ulong *)(frame + 296))
#define local_5c (*(uint *)(frame + 308))
#define local_58 (*(undefined1 * *)(frame + 312))
#define local_50 (*(uint *)(frame + 320))
#define local_4c (*(uint *)(frame + 324))
#define local_48 (*(undefined1 * *)(frame + 328))
#define local_40 (*(undefined1 * *)(frame + 336))
#define local_34 (*(undefined4 *)(frame + 348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a280
 */

byte recovered_1000a280(undefined8 *param_1)

{
  unsigned char frame[432] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  void **ppvVar16;
  uint *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  byte bVar24;
  uint uVar25;
  undefined1 uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  undefined1 *puVar31;
  long lVar32;
  uint uVar33;
  long lVar34;

  local_128 = (undefined1 *)((long)(uintptr_t)(frame + 400) + -8);
  local_118 = (undefined1 *)&local_178;
  cVar1 = *(char *)(param_1 + 9);
  local_138 = recovered_10007080;
  local_130 = &DAT_10010bec;
  local_120 = &LAB_1000b185;
  recovered_10007600(&local_158);
  if (cVar1 == '\0') {
    puVar18 = (uint *)*param_1;
    if (((puVar18 == (uint *)0x0) || (lVar32 = *(long *)(puVar18 + 2), lVar32 == 0)) ||
       (uVar25 = *puVar18, (int)uVar25 < 1)) {
LAB_1000a3d0:
      *(undefined1 *)(param_1 + 9) = 1;
      goto LAB_1000a3d5;
    }
    uVar15 = *(uint *)(param_1 + 7);
    uVar33 = *(uint *)((long)param_1 + 0x3c);
    uVar4 = puVar18[1];
    if ((uVar25 < uVar15 || (((int)uVar33 < 1 || (int)uVar15 < 1) || (int)uVar4 < 1)) ||
        uVar4 < uVar33) goto LAB_1000a3d0;
    uVar20 = (ulong)(((uVar33 - 1) * uVar25 + uVar15) - 1);
    uVar12 = (uint)*(byte *)(lVar32 + 2 + uVar20 * 4) |
             (uint)*(byte *)(lVar32 + 1 + uVar20 * 4) << 8 |
             (uint)*(byte *)(lVar32 + uVar20 * 4) << 0x10;
    if (uVar12 == 0) {
      bVar24 = *(byte *)(param_1 + 8);
      if (bVar24 < 4) {
        bVar24 = (byte)(0x30201 >> ((bVar24 & 3) << 3));
        *(byte *)(param_1 + 8) = bVar24;
      }
      local_e8[0] = uVar15;
      local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar33);
      if (bVar24 < 4) {
        iVar13 = 1;
        ppvVar16 = (void **)local_e8;
        iVar14 = 1;
        switch((uintptr_t)(bVar24)) {
        case 2:
          iVar13 = -1;
          break;
        case 3:
          iVar14 = -1;
        case 1:
          iVar13 = iVar14;
          ppvVar16 = &local_98;
        }
        *(int *)ppvVar16 = *(int *)ppvVar16 + iVar13;
LAB_1000a520:
        uVar33 = (uint)local_98;
      }
    }
    else {
      if (uVar12 != 0xffffff) {
        uVar5 = *(uint *)((long)param_1 + 0x44);
        if (*(char *)((long)param_1 + 0x49) == '\x01') {
          uVar30 = uVar12 - uVar5;
          if (uVar12 < uVar5) {
            uVar30 = -(uVar12 - uVar5);
          }
          *(uint *)((long)param_1 + 0x44) = uVar12;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
        }
        else {
          *(uint *)((long)param_1 + 0x44) = uVar12;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
          uVar30 = uVar12 - uVar5;
          if (uVar12 < uVar5) {
            uVar30 = -(uVar12 - uVar5);
          }
          if (uVar12 - uVar5 == 0) {
            local_e8[0] = uVar15;
            local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar33);
            if (*(byte *)(param_1 + 8) < 4) {
              iVar13 = 1;
              ppvVar16 = (void **)local_e8;
              iVar14 = 1;
              switch((uintptr_t)(*(byte *)(param_1 + 8))) {
              case 1:
                goto switchD_1000a3c1_caseD_1;
              case 2:
                goto switchD_1000a3c1_caseD_2;
              case 3:
                goto switchD_1000a3c1_caseD_3;
              }
              goto switchD_1000a3c1_caseD_0;
            }
            goto LAB_1000a52c;
          }
        }
        local_5c = uVar15;
        local_4c = uVar33;
        if (*(byte *)(param_1 + 8) < 4) {
          iVar13 = 1;
          puVar18 = &local_5c;
          iVar14 = 1;
          switch((uintptr_t)(*(byte *)(param_1 + 8))) {
          case 2:
            iVar13 = -1;
            break;
          case 3:
            iVar14 = -1;
          case 1:
            iVar13 = iVar14;
            puVar18 = &local_4c;
          }
          *puVar18 = *puVar18 + iVar13;
        }
        local_98 = (void *)0x0;
        lStack_90 = 0;
        local_88 = 0;
        if (((ulong)uVar30 < (ulong)param_1[5]) && (param_1[4] != 0)) {
          local_160 = (undefined8 *)(param_1[4] + (ulong)uVar30 * 0x20);
          local_150 = 1;
          local_78 = param_1;
          recovered_1000b2f0((long *)&local_98,local_160[1]);
          param_1 = local_78;
          if (local_160[1] != 0) {
            pbVar23 = (byte *)*local_160;
            local_170 = pbVar23 + local_160[1];
            local_168 = local_78 + 1;
            do {
              local_fc = (uint)*pbVar23;
              puVar18 = (uint *)*param_1;
              puVar17 = (uint *)(ulong)local_5c;
              uVar20 = (ulong)local_4c;
              uVar21 = (ulong)*(byte *)(param_1 + 8);
              local_e8[0] = local_5c;
              local_50 = local_4c;
              if ((puVar18 == (uint *)0x0) || (lVar32 = *(long *)(puVar18 + 2), lVar32 == 0)) {
                puVar11 = (undefined1 *)0x0;
LAB_1000b124:
                *(int *)(param_1 + 7) = (int)puVar17;
                *(int *)((long)param_1 + 0x3c) = (int)uVar20;
                *(undefined1 *)(param_1 + 9) = 1;
                recovered_10007130(puVar11);
                goto LAB_1000b136;
              }
              bVar10 = false;
              puVar31 = (undefined1 *)0x0;
              local_40 = (undefined1 *)0x0;
              puVar29 = (undefined1 *)0x0;
              puVar11 = (undefined1 *)0x0;
              local_b0 = (undefined1 *)CONCAT44(PF_PART4(local_b0, 4),(uint)*(byte *)(param_1 + 8));
              local_70 = puVar18;
              local_178 = pbVar23;
              while( true ) {
                local_80 = puVar11;
                uVar25 = *puVar18;
                if ((int)uVar25 < 1) goto LAB_1000b124;
                uVar15 = (uint)puVar17;
                if ((((uVar25 < uVar15) || (uVar33 = (uint)uVar20, (int)uVar33 < 1)) ||
                    ((int)uVar15 < 1)) || (((int)puVar18[1] < 1 || (puVar18[1] < uVar33))))
                goto LAB_1000b124;
                uVar19 = (ulong)((uVar25 * (uVar33 - 1) + uVar15) - 1);
                bVar24 = *(byte *)(lVar32 + uVar19 * 4);
                local_58 = (undefined1 *)CONCAT44(PF_PART4(local_58, 4),(uint)bVar24);
                bVar2 = *(byte *)(lVar32 + 1 + uVar19 * 4);
                uVar25 = (uint)bVar2;
                bVar3 = *(byte *)(lVar32 + 2 + uVar19 * 4);
                uVar15 = (uint)bVar3;
                if (((uint)bVar2 << 8 | (uint)bVar24 << 0x10 | (uint)bVar3) == 0xffffff) break;
                if (bVar10) {
                  bVar10 = true;
                }
                else {
                  puVar11 = puVar29;
                  if (bVar24 != 0xff) {
                    if (puVar31 == local_40) {
                      puVar27 = (undefined1 *)((long)puVar31 * 2);
                      if (puVar31 == (undefined1 *)0x0) {
                        puVar27 = (undefined1 *)0x4;
                      }
                      if (puVar27 <= puVar31) goto LAB_1000a7b2;
                      local_68 = CONCAT44(PF_PART4(local_68, 4),(uint)bVar2);
                      local_150 = 2;
                      local_f8 = puVar29;
                      local_f0 = puVar29;
                      local_a8 = puVar31;
                      local_a0 = puVar27;
                      local_34 = (uint)bVar3;
                      puVar11 = recovered_100070d0((long)puVar27);
                      puVar29 = local_a0;
                      uVar25 = (uint)local_68;
                      if (local_a8 != (undefined1 *)0x0) {
                        if (local_a8 < (undefined1 *)0x4) {
                          puVar31 = (undefined1 *)0x0;
                        }
                        else {
                          puVar31 = (undefined1 *)0x0;
                          if (0x1f < (ulong)((long)puVar11 - (long)local_f0)) {
                            if (local_a8 < (undefined1 *)0x20) {
                              puVar27 = (undefined1 *)0x0;
                            }
                            else {
                              puVar31 = (undefined1 *)((ulong)local_a8 & 0xffffffffffffffe0);
                              puVar27 = (undefined1 *)0x0;
                              do {
                                uVar7 = *(undefined8 *)((long)(local_f0 + (long)puVar27) + 8);
                                uVar8 = *(undefined8 *)(local_f0 + 0x10 + (long)puVar27);
                                uVar9 = *(undefined8 *)((long)(local_f0 + 0x10 + (long)puVar27) + 8)
                                ;
                                *(undefined8 *)(puVar11 + (long)puVar27) =
                                     *(undefined8 *)(local_f0 + (long)puVar27);
                                *(undefined8 *)((long)(puVar11 + (long)puVar27) + 8) = uVar7;
                                *(undefined8 *)(puVar11 + 0x10 + (long)puVar27) = uVar8;
                                *(undefined8 *)((long)(puVar11 + 0x10 + (long)puVar27) + 8) = uVar9;
                                puVar27 = puVar27 + 0x20;
                              } while (puVar31 != puVar27);
                              if (local_a8 == puVar31) goto LAB_1000a865;
                              puVar27 = puVar31;
                              if (((ulong)local_a8 & 0x1c) == 0) goto LAB_1000a80f;
                            }
                            puVar31 = (undefined1 *)((ulong)local_a8 & 0xfffffffffffffffc);
                            do {
                              *(undefined4 *)(puVar11 + (long)puVar27) =
                                   *(undefined4 *)(local_f0 + (long)puVar27);
                              puVar27 = puVar27 + 4;
                            } while (puVar31 != puVar27);
                            if (local_a8 == puVar31) goto LAB_1000a865;
                          }
                        }
LAB_1000a80f:
                        uVar20 = (ulong)local_a8 & 3;
                        puVar27 = puVar31;
                        if (uVar20 != 0) {
                          do {
                            puVar11[(long)puVar27] = local_f0[(long)puVar27];
                            puVar27 = puVar27 + 1;
                            uVar20 = uVar20 - 1;
                          } while (uVar20 != 0);
                        }
                        if ((ulong)((long)puVar31 - (long)local_a8) < 0xfffffffffffffffd) {
                          do {
                            puVar11[(long)puVar27] = local_f0[(long)puVar27];
                            (puVar11 + 1)[(long)puVar27] = (local_f0 + 1)[(long)puVar27];
                            (puVar11 + 2)[(long)puVar27] = (local_f0 + 2)[(long)puVar27];
                            (puVar11 + 3)[(long)puVar27] = (local_f0 + 3)[(long)puVar27];
                            puVar27 = puVar27 + 4;
                          } while (local_a8 != puVar27);
                        }
                      }
LAB_1000a865:
                      recovered_10007130(local_f0);
                      uVar21 = (ulong)local_b0 & 0xffffffff;
                      bVar24 = (byte)local_58;
                      puVar27 = local_a8;
                      puVar18 = local_70;
                      param_1 = local_78;
                      uVar15 = local_34;
                    }
                    else {
LAB_1000a7b2:
                      puVar27 = puVar31;
                      puVar29 = local_40;
                    }
                    puVar11[(long)puVar27] = bVar24;
                    puVar31 = puVar27 + 1;
                    if ((char)uVar25 == -1) {
                      local_40 = puVar29;
                      bVar10 = true;
                      puVar29 = puVar11;
                      goto LAB_1000abb5;
                    }
                    if (puVar31 == puVar29) {
                      local_40 = (undefined1 *)((long)puVar29 * 2);
                      if (puVar29 == (undefined1 *)0x0) {
                        local_40 = (undefined1 *)0x4;
                      }
                      if (local_40 <= puVar29) goto LAB_1000a92b;
                      local_68 = CONCAT44(PF_PART4(local_68, 4),uVar25);
                      local_150 = 3;
                      local_f8 = puVar11;
                      local_a0 = puVar29;
                      local_58 = puVar11;
                      local_34 = uVar15;
                      puVar11 = recovered_100070d0((long)local_40);
                      uVar20 = local_68;
                      puVar31 = local_a0;
                      if (local_a0 != (undefined1 *)0x0) {
                        if (local_a0 < (undefined1 *)0x4) {
                          puVar29 = (undefined1 *)0x0;
                        }
                        else {
                          puVar29 = (undefined1 *)0x0;
                          if (0x1f < (ulong)((long)puVar11 - (long)local_58)) {
                            if (local_a0 < (undefined1 *)0x20) {
                              puVar27 = (undefined1 *)0x0;
                            }
                            else {
                              puVar29 = (undefined1 *)((ulong)local_a0 & 0xffffffffffffffe0);
                              puVar27 = (undefined1 *)0x0;
                              do {
                                uVar7 = *(undefined8 *)((long)(local_58 + (long)puVar27) + 8);
                                uVar8 = *(undefined8 *)(local_58 + 0x10 + (long)puVar27);
                                uVar9 = *(undefined8 *)((long)(local_58 + 0x10 + (long)puVar27) + 8)
                                ;
                                *(undefined8 *)(puVar11 + (long)puVar27) =
                                     *(undefined8 *)(local_58 + (long)puVar27);
                                *(undefined8 *)((long)(puVar11 + (long)puVar27) + 8) = uVar7;
                                *(undefined8 *)(puVar11 + 0x10 + (long)puVar27) = uVar8;
                                *(undefined8 *)((long)(puVar11 + 0x10 + (long)puVar27) + 8) = uVar9;
                                puVar27 = puVar27 + 0x20;
                              } while (puVar29 != puVar27);
                              if (local_a0 == puVar29) goto LAB_1000a9fd;
                              puVar27 = puVar29;
                              if (((ulong)local_a0 & 0x1c) == 0) goto LAB_1000a9a2;
                            }
                            puVar29 = (undefined1 *)((ulong)local_a0 & 0xfffffffffffffffc);
                            do {
                              *(undefined4 *)(puVar11 + (long)puVar27) =
                                   *(undefined4 *)(local_58 + (long)puVar27);
                              puVar27 = puVar27 + 4;
                            } while (puVar29 != puVar27);
                            if (local_a0 == puVar29) goto LAB_1000a9fd;
                          }
                        }
LAB_1000a9a2:
                        uVar21 = (ulong)local_a0 & 3;
                        puVar27 = puVar29;
                        if (uVar21 != 0) {
                          do {
                            puVar11[(long)puVar27] = local_58[(long)puVar27];
                            puVar27 = puVar27 + 1;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        if ((ulong)((long)puVar29 - (long)local_a0) < 0xfffffffffffffffd) {
                          do {
                            puVar11[(long)puVar27] = local_58[(long)puVar27];
                            (puVar11 + 1)[(long)puVar27] = (local_58 + 1)[(long)puVar27];
                            (puVar11 + 2)[(long)puVar27] = (local_58 + 2)[(long)puVar27];
                            (puVar11 + 3)[(long)puVar27] = (local_58 + 3)[(long)puVar27];
                            puVar27 = puVar27 + 4;
                          } while (local_a0 != puVar27);
                        }
                      }
LAB_1000a9fd:
                      recovered_10007130(local_58);
                      puVar11[(long)puVar31] = (char)uVar20;
                      puVar31 = puVar31 + 1;
                      uVar21 = (ulong)local_b0 & 0xffffffff;
                      puVar29 = local_40;
                      puVar18 = local_70;
                      param_1 = local_78;
                      uVar15 = local_34;
                    }
                    else {
LAB_1000a92b:
                      (puVar11 + 1)[(long)puVar27] = (char)uVar25;
                      puVar31 = puVar27 + 2;
                    }
                    local_40 = puVar29;
                    if ((char)uVar15 != -1) {
                      if (puVar31 == puVar29) {
                        puVar27 = (undefined1 *)((long)puVar29 * 2);
                        if (puVar29 == (undefined1 *)0x0) {
                          puVar27 = (undefined1 *)0x4;
                        }
                        if (puVar27 <= puVar29) goto LAB_1000aac6;
                        local_150 = 4;
                        local_f8 = puVar11;
                        local_f0 = puVar11;
                        local_58 = puVar27;
                        local_34 = uVar15;
                        puVar11 = recovered_100070d0((long)puVar27);
                        param_1 = local_78;
                        if (local_40 != (undefined1 *)0x0) {
                          if (local_40 < (undefined1 *)0x4) {
                            puVar31 = (undefined1 *)0x0;
                          }
                          else {
                            puVar31 = (undefined1 *)0x0;
                            if (0x1f < (ulong)((long)puVar11 - (long)local_f0)) {
                              if (local_40 < (undefined1 *)0x20) {
                                puVar29 = (undefined1 *)0x0;
                              }
                              else {
                                puVar31 = (undefined1 *)((ulong)local_40 & 0xffffffffffffffe0);
                                puVar29 = (undefined1 *)0x0;
                                do {
                                  uVar7 = *(undefined8 *)((long)(local_f0 + (long)puVar29) + 8);
                                  uVar8 = *(undefined8 *)(local_f0 + 0x10 + (long)puVar29);
                                  uVar9 = *(undefined8 *)
                                           ((long)(local_f0 + 0x10 + (long)puVar29) + 8);
                                  *(undefined8 *)(puVar11 + (long)puVar29) =
                                       *(undefined8 *)(local_f0 + (long)puVar29);
                                  *(undefined8 *)((long)(puVar11 + (long)puVar29) + 8) = uVar7;
                                  *(undefined8 *)(puVar11 + 0x10 + (long)puVar29) = uVar8;
                                  *(undefined8 *)((long)(puVar11 + 0x10 + (long)puVar29) + 8) =
                                       uVar9;
                                  puVar29 = puVar29 + 0x20;
                                } while (puVar31 != puVar29);
                                if (local_40 == puVar31) goto LAB_1000ab7c;
                                puVar29 = puVar31;
                                if (((ulong)local_40 & 0x1c) == 0) goto LAB_1000ab27;
                              }
                              puVar31 = (undefined1 *)((ulong)local_40 & 0xfffffffffffffffc);
                              do {
                                *(undefined4 *)(puVar11 + (long)puVar29) =
                                     *(undefined4 *)(local_f0 + (long)puVar29);
                                puVar29 = puVar29 + 4;
                              } while (puVar31 != puVar29);
                              if (local_40 == puVar31) goto LAB_1000ab7c;
                            }
                          }
LAB_1000ab27:
                          uVar20 = (ulong)local_40 & 3;
                          puVar29 = puVar31;
                          if (uVar20 != 0) {
                            do {
                              puVar11[(long)puVar29] = local_f0[(long)puVar29];
                              puVar29 = puVar29 + 1;
                              uVar20 = uVar20 - 1;
                            } while (uVar20 != 0);
                          }
                          if ((ulong)((long)puVar31 - (long)local_40) < 0xfffffffffffffffd) {
                            do {
                              puVar11[(long)puVar29] = local_f0[(long)puVar29];
                              (puVar11 + 1)[(long)puVar29] = (local_f0 + 1)[(long)puVar29];
                              (puVar11 + 2)[(long)puVar29] = (local_f0 + 2)[(long)puVar29];
                              (puVar11 + 3)[(long)puVar29] = (local_f0 + 3)[(long)puVar29];
                              puVar29 = puVar29 + 4;
                            } while (local_40 != puVar29);
                          }
                        }
LAB_1000ab7c:
                        recovered_10007130(local_f0);
                        puVar27 = puVar11 + (long)local_40;
                        uVar21 = (ulong)local_b0 & 0xffffffff;
                        puVar29 = local_58;
                        puVar31 = local_40;
                        puVar18 = local_70;
                        uVar15 = local_34;
                      }
                      else {
LAB_1000aac6:
                        puVar27 = puVar11 + (long)puVar31;
                      }
                      *puVar27 = (char)uVar15;
                      puVar31 = puVar31 + 1;
                      bVar10 = false;
                      local_40 = puVar29;
                      puVar29 = puVar11;
                      goto LAB_1000abb5;
                    }
                  }
                  bVar10 = true;
                  puVar29 = puVar11;
                }
LAB_1000abb5:
                iVar14 = 1;
                switch((uintptr_t)(uVar21)) {
                case 2:
                  iVar14 = -1;
                case 0:
                  ppvVar16 = (void **)local_e8;
                  break;
                case 3:
                  iVar14 = -1;
                case 1:
                  ppvVar16 = (void **)&local_50;
                  break;
                default:
                  goto switchD_1000abce_default;
                }
                *(uint *)ppvVar16 = *(uint *)ppvVar16 + iVar14;
switchD_1000abce_default:
                puVar17 = (uint *)(ulong)local_e8[0];
                uVar20 = (ulong)local_50;
                lVar32 = *(long *)(puVar18 + 2);
                if (lVar32 == 0) goto LAB_1000b124;
              }
              iVar13 = 1;
              iVar14 = 1;
              switch((uintptr_t)(uVar21)) {
              case 0:
                ppvVar16 = (void **)local_e8;
                break;
              case 2:
                iVar13 = -1;
                ppvVar16 = (void **)local_e8;
                break;
              case 3:
                iVar14 = -1;
              case 1:
                iVar13 = iVar14;
                ppvVar16 = (void **)&local_50;
                break;
              default:
                goto switchD_1000ac00_default;
              }
              *(int *)ppvVar16 = *(int *)ppvVar16 + iVar13;
              puVar17 = (uint *)(ulong)local_e8[0];
              uVar20 = (ulong)local_50;
switchD_1000ac00_default:
              if (local_fc == 2) {
                if (puVar31 == (undefined1 *)0x0) {
                  uVar21 = 0;
LAB_1000aecc:
                  local_58 = (undefined1 *)(uVar21 + 1);
                }
                else {
                  puVar11 = (undefined1 *)0x0;
                  uVar21 = 0;
                  do {
                    local_58 = (undefined1 *)0xffffffffffffffff;
                    if (0xffffffffffffff < uVar21) goto LAB_1000aed2;
                    uVar21 = uVar21 << 8 | (ulong)(byte)local_80[(long)puVar11];
                    puVar11 = puVar11 + 1;
                  } while (puVar31 != puVar11);
                  if (uVar21 < 0xfffffffffffffffe) goto LAB_1000aecc;
                }
LAB_1000aed2:
                uStack_b8 = puVar31 == (undefined1 *)0x0;
                local_d0 = (undefined1 *)0x0;
                uStack_c8 = 0;
                uStack_c7 = 0;
                local_e0 = (undefined1 *)0x0;
                puStack_d8 = (undefined1 *)0x0;
                local_e8[0] = CONCAT31(PF_PART3(local_e8[0], 1),2);
                uStack_c0 = SUB81(local_58,0);
                uStack_bf = (undefined7)((ulong)local_58 >> 8);
                local_150 = 9;
                local_70 = puVar17;
                local_68 = uVar20;
                recovered_1000c4e0((long *)&local_98,(undefined1 *)local_e8);
                if ((undefined1 *)local_78[2] < local_58) {
                  local_150 = 10;
                  recovered_1000b9a0(local_168,(ulong)local_58);
                }
LAB_1000b02a:
                puVar11 = local_e0;
LAB_1000b031:
                recovered_10007130(puVar11);
                puVar17 = local_70;
                param_1 = local_78;
                uVar20 = local_68;
              }
              else {
                if (local_fc == 1) {
                  if (puVar31 == (undefined1 *)0x0) {
                    uVar21 = 0;
                  }
                  else {
                    puVar11 = (undefined1 *)0x0;
                    uVar21 = 0;
                    do {
                      if (0xffffffffffffff < uVar21) {
                        uVar21 = 0xffffffffffffffff;
                        break;
                      }
                      uVar21 = uVar21 << 8 | (ulong)(byte)local_80[(long)puVar11];
                      puVar11 = puVar11 + 1;
                    } while (puVar31 != puVar11);
                  }
                  if (0x7ffffffffffffffe < uVar21) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  uStack_b8 = puVar31 == (undefined1 *)0x0;
                  local_d0 = (undefined1 *)0x0;
                  local_e0 = (undefined1 *)0x0;
                  puStack_d8 = (undefined1 *)0x0;
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  local_e8[0] = CONCAT31(PF_PART3(local_e8[0], 1),1);
                  uStack_c8 = (undefined1)uVar21;
                  uStack_c7 = (undefined7)(uVar21 >> 8);
                  local_150 = 8;
                  local_70 = puVar17;
                  local_68 = uVar20;
                  recovered_1000c4e0((long *)&local_98,(undefined1 *)local_e8);
                  goto LAB_1000b02a;
                }
                if (local_fc == 0) {
                  if (puVar31 == (undefined1 *)0x0) {
                    puVar11 = (undefined1 *)0x0;
                    puVar29 = (undefined1 *)0x0;
                    local_a8 = puVar31;
                    local_70 = puVar17;
                    local_68 = uVar20;
                  }
                  else {
                    local_150 = 5;
                    local_a8 = puVar31;
                    local_70 = puVar17;
                    local_68 = uVar20;
                    puVar29 = recovered_100070d0((long)(puVar31 + 1));
                    *puVar29 = 0;
                    recovered_10007130((void *)0x0);
                    puVar27 = local_80 + (long)local_a8;
                    puVar31 = (undefined1 *)0x0;
                    puVar22 = local_80;
                    puVar11 = local_a8;
                    local_a0 = puVar27;
                    do {
                      uVar26 = *puVar22;
                      local_48 = puVar29;
                      if (puVar31 == puVar11) {
                        puVar28 = (undefined1 *)((long)puVar31 * 2);
                        if (puVar31 == (undefined1 *)0x0) {
                          puVar28 = (undefined1 *)0x10;
                        }
                        if (puVar31 < puVar28) {
                          local_34 = CONCAT31(PF_PART3(local_34, 1),uVar26);
                          local_150 = 7;
                          local_b0 = puVar28;
                          local_58 = puVar22;
                          local_40 = puVar31;
                          puVar29 = recovered_100070d0((ulong)puVar28 | 1);
                          puVar31 = local_40;
                          *puVar29 = 0;
                          if (local_40 != (undefined1 *)0x0) {
                            if (local_40 < (undefined1 *)0x4) {
                              puVar11 = (undefined1 *)0x0;
                            }
                            else {
                              puVar11 = (undefined1 *)0x0;
                              if (0x1f < (ulong)((long)puVar29 - (long)local_48)) {
                                if (local_40 < (undefined1 *)0x20) {
                                  puVar27 = (undefined1 *)0x0;
                                }
                                else {
                                  puVar11 = (undefined1 *)((ulong)local_40 & 0xffffffffffffffe0);
                                  puVar27 = (undefined1 *)0x0;
                                  do {
                                    uVar7 = *(undefined8 *)((long)(local_48 + (long)puVar27) + 8);
                                    uVar8 = *(undefined8 *)(local_48 + 0x10 + (long)puVar27);
                                    uVar9 = *(undefined8 *)
                                             ((long)(local_48 + 0x10 + (long)puVar27) + 8);
                                    *(undefined8 *)(puVar29 + (long)puVar27) =
                                         *(undefined8 *)(local_48 + (long)puVar27);
                                    *(undefined8 *)((long)(puVar29 + (long)puVar27) + 8) = uVar7;
                                    *(undefined8 *)(puVar29 + 0x10 + (long)puVar27) = uVar8;
                                    *(undefined8 *)((long)(puVar29 + 0x10 + (long)puVar27) + 8) =
                                         uVar9;
                                    puVar27 = puVar27 + 0x20;
                                  } while (puVar11 != puVar27);
                                  if (local_40 == puVar11) goto LAB_1000aca4;
                                  puVar27 = puVar11;
                                  if (((ulong)local_40 & 0x1c) == 0) goto LAB_1000adca;
                                }
                                puVar11 = (undefined1 *)((ulong)local_40 & 0xfffffffffffffffc);
                                do {
                                  *(undefined4 *)(puVar29 + (long)puVar27) =
                                       *(undefined4 *)(local_48 + (long)puVar27);
                                  puVar27 = puVar27 + 4;
                                } while (puVar11 != puVar27);
                                if (local_40 == puVar11) goto LAB_1000aca4;
                              }
                            }
LAB_1000adca:
                            puVar27 = puVar11;
                            if (((ulong)local_40 & 3) != 0) {
                              uVar20 = (ulong)((uint)local_40 & 3);
                              do {
                                puVar29[(long)puVar27] = local_48[(long)puVar27];
                                puVar27 = puVar27 + 1;
                                uVar20 = uVar20 - 1;
                              } while (uVar20 != 0);
                            }
                            if ((ulong)((long)puVar11 - (long)local_40) < 0xfffffffffffffffd) {
                              do {
                                puVar29[(long)puVar27] = local_48[(long)puVar27];
                                (puVar29 + 1)[(long)puVar27] = (local_48 + 1)[(long)puVar27];
                                (puVar29 + 2)[(long)puVar27] = (local_48 + 2)[(long)puVar27];
                                (puVar29 + 3)[(long)puVar27] = (local_48 + 3)[(long)puVar27];
                                puVar27 = puVar27 + 4;
                              } while (local_40 != puVar27);
                            }
                          }
LAB_1000aca4:
                          puVar29[(long)local_40] = 0;
                          recovered_10007130(local_48);
                          puVar27 = local_a0;
                          puVar22 = local_58;
                          puVar11 = local_b0;
                          uVar26 = (undefined1)local_34;
                        }
                      }
                      puVar29[(long)puVar31] = uVar26;
                      (puVar29 + 1)[(long)puVar31] = 0;
                      puVar31 = puVar31 + 1;
                      puVar22 = puVar22 + 1;
                    } while (puVar22 != puVar27);
                  }
                  uStack_c0 = 0;
                  uStack_bf = 0;
                  uStack_b8 = 0;
                  local_d0 = (undefined1 *)0x0;
                  uStack_c8 = 0;
                  uStack_c7 = 0;
                  local_e0 = (undefined1 *)0x0;
                  puStack_d8 = (undefined1 *)0x0;
                  local_e8[0] = local_e8[0] & 0xffffff00;
                  recovered_10007130((void *)0x0);
                  uStack_b8 = local_a8 == (undefined1 *)0x0;
                  puStack_d8 = local_a8;
                  local_150 = 6;
                  local_e0 = puVar29;
                  local_d0 = puVar11;
                  recovered_1000c4e0((long *)&local_98,(undefined1 *)local_e8);
                  recovered_10007130(local_e0);
                  puVar11 = (undefined1 *)0x0;
                  goto LAB_1000b031;
                }
              }
              local_5c = (uint)puVar17;
              local_4c = (uint)uVar20;
              recovered_10007130(local_80);
              pbVar23 = local_178 + 1;
            } while (pbVar23 != local_170);
          }
          *(uint *)(param_1 + 7) = local_5c;
          *(uint *)((long)param_1 + 0x3c) = local_4c;
          plVar6 = (long *)local_160[3];
          uVar25 = local_5c;
          uVar15 = local_4c;
          if (plVar6 != (long *)0x0) {
            local_150 = 0xb;
            (**(code **)(*plVar6 + 0x10))(plVar6,param_1,&local_98);
            param_1 = local_78;
            uVar25 = *(uint *)(local_78 + 7);
            uVar15 = *(uint *)((long)local_78 + 0x3c);
          }
        }
        else {
          *(uint *)(param_1 + 7) = local_5c;
          *(uint *)((long)param_1 + 0x3c) = local_4c;
          uVar25 = local_5c;
          uVar15 = local_4c;
        }
        puVar18 = (uint *)*param_1;
        if (((puVar18 == (uint *)0x0) || (*(long *)(puVar18 + 2) == 0)) ||
           (((int)*puVar18 < 1 ||
            ((puVar18[1] < uVar15 || *puVar18 < uVar25) ||
             (((int)uVar15 < 1 || (int)uVar25 < 1) || (int)puVar18[1] < 1))))) {
          *(undefined1 *)(param_1 + 9) = 1;
LAB_1000b136:
          bVar24 = 0;
        }
        else {
          bVar24 = *(byte *)(param_1 + 9) ^ 1;
        }
        if (lStack_90 != 0) {
          lVar34 = lStack_90 * 0x38 + -0x30;
          lVar32 = lStack_90;
          do {
            recovered_10007130(*(void **)((long)local_98 + lVar34));
            lVar34 = lVar34 + -0x38;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
        lStack_90 = 0;
        recovered_10007130(local_98);
        goto LAB_1000a3d7;
      }
      *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
      local_e8[0] = uVar15;
      local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar33);
      if (*(byte *)(param_1 + 8) < 4) {
        iVar13 = 1;
        ppvVar16 = (void **)local_e8;
        iVar14 = 1;
        switch((uintptr_t)(*(byte *)(param_1 + 8))) {
        case 2:
switchD_1000a3c1_caseD_2:
          local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar33);
          local_e8[0] = uVar15 - 1;
          break;
        case 3:
switchD_1000a3c1_caseD_3:
          iVar14 = -1;
          local_e8[0] = uVar15;
        case 1:
switchD_1000a3c1_caseD_1:
          iVar13 = iVar14;
          ppvVar16 = &local_98;
        case 0:
switchD_1000a3c1_caseD_0:
          local_98 = (void *)CONCAT44(PF_PART4(local_98, 4),uVar33);
          *(int *)ppvVar16 = *(int *)ppvVar16 + iVar13;
        }
        goto LAB_1000a520;
      }
    }
LAB_1000a52c:
    *(uint *)(param_1 + 7) = local_e8[0];
    *(uint *)((long)param_1 + 0x3c) = uVar33;
    if ((uVar25 < local_e8[0] || ((int)uVar33 < 1 || (int)local_e8[0] < 1)) || uVar4 < uVar33) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    bVar24 = (uVar25 >= local_e8[0] && ((int)uVar33 >= 1 && (int)local_e8[0] >= 1)) &&
             uVar4 >= uVar33;
  }
  else {
LAB_1000a3d5:
    bVar24 = 0;
  }
LAB_1000a3d7:
  recovered_10007620(&local_158);
  return bVar24 & 1;
}

#undef DAT_10010bec
#undef LAB_1000b185
#undef puStack_d8
#undef uStack_c8
#undef uStack_c7
#undef uStack_c0
#undef uStack_bf
#undef uStack_b8
#undef lStack_90
#undef local_178
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_fc
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d0
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2d0
 */

void recovered_1000b2d0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x40) < 4) {
    *(char *)(param_1 + 0x40) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x40) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2f0
 */

void recovered_1000b2f0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;

  if ((ulong)param_1[2] < param_2) {
    pvVar5 = recovered_100070d0(param_2 * 0x38);
    if (param_1[1] != 0) {
      lVar6 = 0x20;
      uVar7 = 0;
      do {
        lVar3 = *param_1;
        *(undefined1 *)((long)pvVar5 + lVar6 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar6);
        *(undefined8 *)((long)pvVar5 + lVar6 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar6);
        puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar3 + -8 + lVar6) = 0;
        *(undefined1 *)((long)pvVar5 + lVar6 + 0x10) = *(undefined1 *)(lVar3 + 0x10 + lVar6);
        uVar4 = ((undefined8 *)(lVar3 + lVar6))[1];
        *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        ((undefined8 *)((long)pvVar5 + lVar6))[1] = uVar4;
        recovered_10007130((void *)0x0);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x38;
      } while (uVar7 < (ulong)param_1[1]);
    }
    recovered_10007130((void *)*param_1);
    *param_1 = (long)pvVar5;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3b0
 */

long recovered_1000b3b0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_1000b9a0((long *)(param_1 + 8),uVar1);
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3f0
 */

void recovered_1000b3f0(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x38 + -0x30;
    do {
      recovered_10007130(*(void **)(*param_1 + lVar2));
      lVar2 = lVar2 + -0x38;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10007130((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b440
 */

void recovered_1000b440(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_1000a280(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b470
 */

undefined1 recovered_1000b470(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x48);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b480
 */

void recovered_1000b480(long param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    recovered_1000b640((long *)(param_1 + 0x20),param_2 + 1);
  }
  plVar12 = (long *)(param_2 * 0x20 + *(long *)(param_1 + 0x20));
  if (plVar12 == param_3) {
    return;
  }
  lVar10 = param_3[1];
  if (lVar10 == 0) {
    pvVar9 = (void *)0x0;
    uVar11 = 0;
    goto LAB_1000b5e2;
  }
  pvVar9 = recovered_100070d0(lVar10);
  recovered_10007130((void *)0x0);
  uVar2 = param_3[1];
  uVar11 = 0;
  if (uVar2 == 0) goto LAB_1000b5e2;
  lVar3 = *param_3;
  uVar11 = 0;
  if ((uVar2 < 4) || ((ulong)((long)pvVar9 - lVar3) < 0x20)) {
LAB_1000b575:
    uVar14 = uVar2 & 3;
    uVar13 = uVar11;
    if (uVar14 != 0) {
      do {
        *(undefined1 *)((long)pvVar9 + uVar13) = *(undefined1 *)(lVar3 + uVar13);
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar11 - uVar2 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)pvVar9 + uVar13) = *(undefined1 *)(lVar3 + uVar13);
        *(undefined1 *)((long)pvVar9 + uVar13 + 1) = *(undefined1 *)(lVar3 + 1 + uVar13);
        *(undefined1 *)((long)pvVar9 + uVar13 + 2) = *(undefined1 *)(lVar3 + 2 + uVar13);
        *(undefined1 *)((long)pvVar9 + uVar13 + 3) = *(undefined1 *)(lVar3 + 3 + uVar13);
        uVar13 = uVar13 + 4;
      } while (uVar2 != uVar13);
    }
  }
  else if (uVar2 < 0x20) {
    uVar13 = 0;
LAB_1000b54a:
    uVar11 = uVar2 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar9 + uVar13) = *(undefined4 *)(lVar3 + uVar13);
      uVar13 = uVar13 + 4;
    } while (uVar11 != uVar13);
    if (uVar2 != uVar11) goto LAB_1000b575;
  }
  else {
    uVar11 = uVar2 & 0xffffffffffffffe0;
    uVar13 = 0;
    do {
      uVar6 = ((undefined8 *)(lVar3 + uVar13))[1];
      puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar13);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)((long)pvVar9 + uVar13) = *(undefined8 *)(lVar3 + uVar13);
      ((undefined8 *)((long)pvVar9 + uVar13))[1] = uVar6;
      puVar1 = (undefined8 *)((long)pvVar9 + uVar13 + 0x10);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      uVar13 = uVar13 + 0x20;
    } while (uVar11 != uVar13);
    if (uVar2 != uVar11) {
      uVar13 = uVar11;
      if ((uVar2 & 0x1c) == 0) goto LAB_1000b575;
      goto LAB_1000b54a;
    }
  }
  uVar11 = uVar2;
LAB_1000b5e2:
  pvVar4 = (void *)*plVar12;
  *plVar12 = (long)pvVar9;
  plVar12[1] = uVar11;
  plVar12[2] = lVar10;
  recovered_10007130(pvVar4);
  if ((long *)param_3[3] == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (*(uintptr_t (**)(void *))(*(long *)param_3[3] + 0x18))((void *)((long *)param_3[3]));
  }
  plVar5 = (long *)plVar12[3];
  plVar12[3] = lVar10;
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000b626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(void (**)(void *))(*plVar5 + 8))((void *)(plVar5));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b640
 */

void recovered_1000b640(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;

  uVar7 = param_1[1];
  if (param_2 < uVar7) {
    lVar6 = uVar7 * 0x20 + -8;
    do {
      lVar3 = *param_1;
      if (*(long **)(lVar3 + lVar6) != (long *)0x0) {
        (*(void (**)(void *))(**(long **)(lVar3 + lVar6) + 8))((void *)(*(long **)(lVar3 + lVar6)));
      }
      *(undefined8 *)(lVar3 + -0x10 + lVar6) = 0;
      recovered_10007130(*(void **)(lVar3 + -0x18 + lVar6));
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + -0x20;
    } while (param_2 < uVar7);
    param_1[1] = param_2;
  }
  else if (uVar7 < param_2) {
    if ((ulong)param_1[2] < param_2) {
      pvVar5 = recovered_100070d0(param_2 << 5);
      if (param_1[1] != 0) {
        lVar6 = 0x18;
        uVar7 = 0;
        do {
          lVar3 = *param_1;
          *(undefined8 *)((long)pvVar5 + lVar6 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar6);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          *(undefined8 *)(lVar3 + -0x18 + lVar6) = 0;
          *(undefined8 *)(lVar3 + -8 + lVar6) = 0;
          *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar3 + lVar6) = 0;
          *(undefined8 *)(lVar3 + -0x10 + lVar6) = 0;
          recovered_10007130((void *)0x0);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (uVar7 < (ulong)param_1[1]);
      }
      recovered_10007130((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = param_2;
      uVar7 = param_1[1];
    }
    while (uVar7 < param_2) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar7 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar7 = param_1[1] + 1;
      param_1[1] = uVar7;
    }
  }
  return;
}


#undef DAT_10010c08
#define DAT_10010c08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdccU)))
#undef LAB_1000b8aa
#define LAB_1000b8aa (*(uint8_t *)(0x1000b8aaU))
#define uStack_48 (*(undefined8 *)(frame + 120))
#define uStack_38 (*(undefined8 *)(frame + 136))
#define local_a8 (*(undefined8 *)(frame + 24))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_88 (*(code * *)(frame + 56))
#define local_80 (*(undefined * *)(frame + 64))
#define local_78 (*(undefined1 * *)(frame + 72))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_50 (*(void * *)(frame + 112))
#define local_40 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7a0
 */

void recovered_1000b7a0(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};


  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = (long *)0x0;
  local_88 = recovered_10007080;
  local_80 = &DAT_10010c08;
  local_70 = &LAB_1000b8aa;
  recovered_10007600(&local_a8);
  if (&local_50 != (void **)param_3) {
    recovered_10007130((void *)0x0);
    local_50 = (void *)*param_3;
    uStack_48 = param_3[1];
    local_40 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  if (&uStack_38 != param_4) {
    if (uStack_38 != (long *)0x0) {
      (*(void (**)(void *))(*(uintptr_t *)(uintptr_t)uStack_38 + 8))((void *)((uintptr_t *)(uintptr_t)uStack_38));
    }
    uStack_38 = (long *)*param_4;
    *param_4 = 0;
  }
  local_a0 = 1;
  recovered_1000b480(param_1,param_2,(long *)&local_50);
  if (uStack_38 != (long *)0x0) {
    (*(void (**)(void *))(*(uintptr_t *)(uintptr_t)uStack_38 + 8))((void *)((uintptr_t *)(uintptr_t)uStack_38));
  }
  uStack_48 = 0;
  recovered_10007130(local_50);
  recovered_10007620(&local_a8);
  return;
}

#undef DAT_10010c08
#undef LAB_1000b8aa
#undef uStack_48
#undef uStack_38
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b910
 */

void recovered_1000b910(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;
  long lVar3;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = param_2 * 0x20;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0;
  recovered_10007130(*(void **)(lVar1 + lVar3));
  *(undefined8 *)(lVar1 + lVar3) = 0;
  ((undefined8 *)(lVar1 + lVar3))[1] = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  plVar2 = *(long **)(lVar1 + 0x18 + lVar3);
  if (plVar2 != (long *)0x0) {
    (*(void (**)(void *))(*plVar2 + 8))((void *)(plVar2));
  }
  *(undefined8 *)(lVar1 + lVar3 + 0x18) = 0;
  recovered_10007130((void *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b980
 */

long recovered_1000b980(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b990
 */

long recovered_1000b990(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9a0
 */

void recovered_1000b9a0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;

  uVar7 = param_1[1];
  if (param_2 < uVar7) {
    lVar6 = uVar7 * 0x28 + -0x20;
    do {
      recovered_10007130(*(void **)(*param_1 + lVar6));
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + -0x28;
    } while (param_2 < uVar7);
    param_1[1] = param_2;
  }
  else if (uVar7 < param_2) {
    if ((ulong)param_1[2] < param_2) {
      pvVar5 = recovered_100070d0(param_2 * 0x28);
      if (param_1[1] != 0) {
        lVar6 = 0x20;
        uVar7 = 0;
        do {
          lVar3 = *param_1;
          *(undefined1 *)((long)pvVar5 + lVar6 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar6);
          *(undefined8 *)((long)pvVar5 + lVar6 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar6);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar6);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar3 + -8 + lVar6) = 0;
          *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          recovered_10007130((void *)0x0);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (uVar7 < (ulong)param_1[1]);
      }
      recovered_10007130((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = param_2;
      uVar7 = param_1[1];
    }
    while (uVar7 < param_2) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar7 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar6 + 0x20 + uVar7 * 0x28) = 0;
      uVar7 = param_1[1] + 1;
      param_1[1] = uVar7;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bae0
 */

long recovered_1000bae0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb10
 */

void recovered_1000bb10(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000fbc0((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb40
 */

void recovered_1000bb40(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000fd10((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c10
#define DAT_10010c10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdd4U)))
#undef LAB_1000bc61
#define LAB_1000bc61 (*(uint8_t *)(0x1000bc61U))
#define uStack_40 (*(undefined8 *)(frame + 144))
#define local_b8 (*(undefined8 *)(frame + 24))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 (*)[8])(frame + 112))
#define local_58 (*(void * *)(frame + 120))
#define local_48 (*(undefined8 *)(frame + 136))
#define local_38 (*(undefined8 *)(frame + 152))
#define uStack_50 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb70
 */

undefined8 recovered_1000bb70(long param_1,long *param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined1 *puVar2;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_60[0] = 1;
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c10;
  local_80 = &LAB_1000bc61;
  recovered_10007600(&local_b8);
  local_38 = param_1;
  if (&local_58 != (void **)param_2) {
    puVar2 = &DAT_10010a26;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_2;
    }
    local_b0 = 1;
    recovered_1000c230((long *)&local_58,(long)puVar2,param_2[1]);
  }
  uStack_40 = 0;
  local_b0 = 2;
  recovered_1000fd10((long *)(local_38 + 8),local_60);
  uVar1 = *(undefined8 *)(local_38 + 0x10);
  *(undefined8 *)(local_38 + 0x50) = uVar1;
  recovered_10007130(local_58);
  recovered_10007620(&local_b8);
  return uVar1;
}

#undef DAT_10010a26
#undef DAT_10010c10
#undef LAB_1000bc61
#undef uStack_40
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_38
#undef uStack_50

#undef DAT_10010c18
#define DAT_10010c18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddcU)))
#undef LAB_1000bd9a
#define LAB_1000bd9a (*(uint8_t *)(0x1000bd9aU))
#define local_b8 (*(undefined8 *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 144))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 (*)[8])(frame + 112))
#define local_58 (*(void * *)(frame + 120))
#define local_48 (*(undefined8 *)(frame + 136))
#define local_38 (*(undefined8 *)(frame + 152))
#define uStack_50 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcb0
 */

undefined8 recovered_1000bcb0(long param_1,undefined8 *param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_60[0] = 1;
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c18;
  local_80 = &LAB_1000bd9a;
  recovered_10007600(&local_b8);
  if (&local_58 != (void **)param_2) {
    recovered_10007130((void *)0x0);
    local_58 = (void *)*param_2;
    uStack_50 = param_2[1];
    local_48 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  uStack_40 = 0;
  local_b0 = 1;
  local_38 = param_1;
  recovered_1000fd10((long *)(param_1 + 8),local_60);
  uVar1 = *(undefined8 *)(local_38 + 0x10);
  *(undefined8 *)(local_38 + 0x50) = uVar1;
  recovered_10007130(local_58);
  recovered_10007620(&local_b8);
  return uVar1;
}

#undef DAT_10010c18
#undef LAB_1000bd9a
#undef local_b8
#undef uStack_40
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_38
#undef uStack_50

#undef DAT_10010c20
#define DAT_10010c20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde4U)))
#undef LAB_1000be9a
#define LAB_1000be9a (*(uint8_t *)(0x1000be9aU))
#define local_b8 (*(undefined8 *)(frame + 24))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 (*)[8])(frame + 112))
#define local_58 (*(void * *)(frame + 120))
#define local_48 (*(undefined8 *)(frame + 136))
#define local_40 (*(undefined8 *)(frame + 144))
#define local_38 (*(undefined8 *)(frame + 152))
#define uStack_50 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bde0
 */

undefined8 recovered_1000bde0(long param_1,undefined8 param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_60[0] = 2;
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c20;
  local_80 = &LAB_1000be9a;
  local_b0 = 1;
  local_40 = param_2;
  local_38 = param_1;
  recovered_10007600(&local_b8);
  recovered_1000fd10((long *)(param_1 + 8),local_60);
  uVar1 = *(undefined8 *)(local_38 + 0x10);
  *(undefined8 *)(local_38 + 0x50) = uVar1;
  recovered_10007130(local_58);
  recovered_10007620(&local_b8);
  return uVar1;
}

#undef DAT_10010c20
#undef LAB_1000be9a
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bee0
 */

void recovered_1000bee0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_1000b9a0((long *)(param_1 + 8),uVar1);
  }
  recovered_1000fbc0((long *)(param_1 + 8),
                     (undefined1 *)(*(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28));
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf40
 */

void recovered_1000bf40(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = param_2 + (ulong)(param_2 == 0);
  *(ulong *)(param_1 + 0x50) = uVar4;
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 < uVar4) {
    recovered_1000b9a0((long *)(param_1 + 8),uVar4);
    uVar3 = *(ulong *)(param_1 + 0x10);
  }
  if (uVar3 < uVar4) {
    recovered_1000b9a0((long *)(param_1 + 8),uVar4);
  }
  lVar1 = *(long *)(param_1 + 8);
  *(undefined1 *)(lVar1 + -0x28 + uVar4 * 0x28) = 0;
  *(undefined8 *)(lVar1 + -0x18 + uVar4 * 0x28) = 0;
  puVar2 = *(undefined1 **)(lVar1 + -0x20 + uVar4 * 0x28);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined8 *)(lVar1 + uVar4 * 0x28 + -8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfc0
 */

void recovered_1000bfc0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  *(ulong *)(param_1 + 0x50) = uVar1;
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_1000b9a0((long *)(param_1 + 8),uVar1);
    return;
  }
  return;
}


#undef DAT_10010c28
#define DAT_10010c28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdecU)))
#undef LAB_1000c129
#define LAB_1000c129 (*(uint8_t *)(0x1000c129U))
#define auStack_c8 (*(undefined1 (*)[8])(frame + 24))
#define local_c0 (*(undefined8 *)(frame + 32))
#define uStack_58 (*(undefined8 *)(frame + 136))
#define local_b8 (*(undefined4 *)(frame + 40))
#define local_a0 (*(code * *)(frame + 64))
#define uStack_48 (*(undefined8 *)(frame + 152))
#define local_98 (*(undefined * *)(frame + 72))
#define local_90 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 * *)(frame + 88))
#define local_80 (*(undefined1 * *)(frame + 96))
#define local_68 (*(undefined1 (*)[8])(frame + 120))
#define local_60 (*(void * *)(frame + 128))
#define local_50 (*(undefined8 *)(frame + 144))
#define local_40 (*(long * *)(frame + 160))
#define local_38 (*(undefined8 *)(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bff0
 */

long recovered_1000bff0(long param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  local_90 = local_68 + 0x60;
  local_80 = auStack_c8;
  uVar1 = *(ulong *)(param_1 + 0x50);
  local_a0 = recovered_10007080;
  local_98 = &DAT_10010c28;
  local_88 = &LAB_1000c129;
  recovered_10007600(&local_c0);
  if (uVar1 == 0) {
    local_68[0] = 0;
    local_40 = (long *)(param_1 + 8);
    local_60 = (void *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_b8 = 1;
    local_38 = param_1;
    recovered_1000fd10(local_40,local_68);
    lVar2 = *(long *)(local_38 + 0x10);
    *(long *)(local_38 + 0x50) = lVar2;
    uVar1 = lVar2 + (ulong)(lVar2 == 0);
    if (lVar2 == 0) {
      local_b8 = 2;
      local_38 = uVar1;
      recovered_1000b9a0(local_40,uVar1);
      uVar1 = local_38;
    }
    lVar2 = uVar1 * 0x28 + *local_40;
    recovered_10007130(local_60);
  }
  else {
    if (*(ulong *)(param_1 + 0x10) < uVar1) {
      local_b8 = 0xffffffff;
      recovered_1000b9a0((long *)(param_1 + 8),uVar1);
    }
    lVar2 = uVar1 * 0x28 + *(long *)(param_1 + 8);
  }
  recovered_10007620(&local_c0);
  return lVar2 + -0x28;
}

#undef DAT_10010c28
#undef LAB_1000c129
#undef auStack_c8
#undef local_c0
#undef uStack_58
#undef local_b8
#undef local_a0
#undef uStack_48
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_50
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c170
 */

long recovered_1000c170(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = *(ulong *)(param_1 + 0x50);
  if ((uVar1 == 0) || (*(ulong *)(param_1 + 0x10) < uVar1)) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1a0
 */

long recovered_1000c1a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1b0
 */

long recovered_1000c1b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1c0
 */

undefined8 recovered_1000c1c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined8 *)(param_1 + 0x50);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1d0
 */

undefined4 recovered_1000c1d0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1e0
 */

undefined4 recovered_1000c1e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x3c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1f0
 */

undefined1 recovered_1000c1f0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x40);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c200
 */

void recovered_1000c200(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c210
 */

undefined4 recovered_1000c210(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x44);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c220
 */

void recovered_1000c220(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x44) = param_2 & 0xffffff;
  return;
}


#define local_48 (*(void * *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c230
 */

void recovered_1000c230(long *param_1,long param_2,ulong param_3)

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
        recovered_1000c230((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = pvVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_10007130(pvVar2);
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
      puVar8 = recovered_100070d0(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_1000c456;
  puVar8 = recovered_100070d0(uVar13 + 1);
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
        if (uVar11 == uVar12) goto LAB_1000c43f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_1000c3d5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_1000c43f;
    }
LAB_1000c3d5:
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
LAB_1000c43f:
  puVar8[uVar11] = 0;
  recovered_10007130(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_1000c456:
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

#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4e0
 */

long recovered_1000c4e0(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
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
      pvVar4 = recovered_100070d0(uVar8 * 0x38);
      if (param_1[1] != 0) {
        lVar7 = 0x20;
        uVar6 = 0;
        do {
          lVar5 = *param_1;
          *(undefined1 *)((long)pvVar4 + lVar7 + -0x20) = *(undefined1 *)(lVar5 + -0x20 + lVar7);
          *(undefined8 *)((long)pvVar4 + lVar7 + -0x18) = *(undefined8 *)(lVar5 + -0x18 + lVar7);
          puVar1 = (undefined8 *)(lVar5 + -0x10 + lVar7);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar4 + lVar7 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(lVar5 + -0x18 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + -8 + lVar7) = 0;
          *(undefined1 *)((long)pvVar4 + lVar7 + 0x10) = *(undefined1 *)(lVar5 + 0x10 + lVar7);
          uVar3 = ((undefined8 *)(lVar5 + lVar7))[1];
          *(undefined8 *)((long)pvVar4 + lVar7) = *(undefined8 *)(lVar5 + lVar7);
          ((undefined8 *)((long)pvVar4 + lVar7))[1] = uVar3;
          recovered_10007130((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x38;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_10007130((void *)*param_1);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar7 = *param_1;
  lVar5 = uVar6 * 0x38;
  *(undefined1 *)(lVar7 + lVar5) = *param_2;
  *(undefined8 *)(lVar7 + 8 + lVar5) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar5);
  *puVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x30 + lVar5) = param_2[0x30];
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
  *puVar1 = *(undefined8 *)(param_2 + 0x20);
  puVar1[1] = uVar3;
  lVar7 = param_1[1];
  param_1[1] = lVar7 + 1;
  return lVar7 * 0x38 + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c620
 */

void recovered_1000c620(long *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    return;
  }
  pvVar7 = recovered_100070d0(param_3);
  pvVar3 = (void *)*param_1;
  uVar8 = param_1[1];
  if (uVar8 == 0) goto LAB_1000c75f;
  if ((ulong)((long)pvVar7 - (long)pvVar3) < 0x20 || uVar8 < 4) {
    uVar12 = 0;
  }
  else {
    if (uVar8 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar12 = uVar8 & 0xffffffffffffffe0;
      uVar9 = 0;
      do {
        uVar4 = ((undefined8 *)((long)pvVar3 + uVar9))[1];
        puVar2 = (undefined8 *)((long)pvVar3 + uVar9 + 0x10);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        *(undefined8 *)((long)pvVar7 + uVar9) = *(undefined8 *)((long)pvVar3 + uVar9);
        ((undefined8 *)((long)pvVar7 + uVar9))[1] = uVar4;
        puVar2 = (undefined8 *)((long)pvVar7 + uVar9 + 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar9 = uVar9 + 0x20;
      } while (uVar12 != uVar9);
      if (uVar8 == uVar12) goto LAB_1000c75f;
      uVar9 = uVar12;
      if ((uVar8 & 0x1c) == 0) goto LAB_1000c6f5;
    }
    uVar12 = uVar8 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)pvVar7 + uVar9) = *(undefined4 *)((long)pvVar3 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar12 != uVar9);
    if (uVar8 == uVar12) goto LAB_1000c75f;
  }
LAB_1000c6f5:
  uVar10 = uVar8 & 3;
  uVar9 = uVar12;
  if (uVar10 != 0) {
    do {
      *(undefined1 *)((long)pvVar7 + uVar9) = *(undefined1 *)((long)pvVar3 + uVar9);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar12 - uVar8 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)pvVar7 + uVar9) = *(undefined1 *)((long)pvVar3 + uVar9);
      *(undefined1 *)((long)pvVar7 + uVar9 + 1) = *(undefined1 *)((long)pvVar3 + uVar9 + 1);
      *(undefined1 *)((long)pvVar7 + uVar9 + 2) = *(undefined1 *)((long)pvVar3 + uVar9 + 2);
      *(undefined1 *)((long)pvVar7 + uVar9 + 3) = *(undefined1 *)((long)pvVar3 + uVar9 + 3);
      uVar9 = uVar9 + 4;
    } while (uVar8 != uVar9);
  }
LAB_1000c75f:
  recovered_10007130(pvVar3);
  *param_1 = (long)pvVar7;
  param_1[2] = param_3;
  puVar1 = param_2 + param_3;
  uVar8 = param_1[1];
  do {
    if (uVar8 == param_3) {
      uVar12 = param_3 * 2;
      if (param_3 == 0) {
        uVar12 = 4;
      }
      uVar8 = param_3;
      if (param_3 < uVar12) {
        pvVar7 = recovered_100070d0(uVar12);
        pvVar3 = (void *)*param_1;
        uVar8 = param_1[1];
        if (uVar8 != 0) {
          if (uVar8 < 4) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if (0x1f < (ulong)((long)pvVar7 - (long)pvVar3)) {
              if (uVar8 < 0x20) {
                uVar10 = 0;
              }
              else {
                uVar9 = uVar8 & 0xffffffffffffffe0;
                uVar10 = 0;
                do {
                  uVar4 = ((undefined8 *)((long)pvVar3 + uVar10))[1];
                  puVar2 = (undefined8 *)((long)pvVar3 + uVar10 + 0x10);
                  uVar5 = *puVar2;
                  uVar6 = puVar2[1];
                  *(undefined8 *)((long)pvVar7 + uVar10) = *(undefined8 *)((long)pvVar3 + uVar10);
                  ((undefined8 *)((long)pvVar7 + uVar10))[1] = uVar4;
                  puVar2 = (undefined8 *)((long)pvVar7 + uVar10 + 0x10);
                  *puVar2 = uVar5;
                  puVar2[1] = uVar6;
                  uVar10 = uVar10 + 0x20;
                } while (uVar9 != uVar10);
                if (uVar8 == uVar9) goto LAB_1000c780;
                uVar10 = uVar9;
                if ((uVar8 & 0x1c) == 0) goto LAB_1000c879;
              }
              uVar9 = uVar8 & 0xfffffffffffffffc;
              do {
                *(undefined4 *)((long)pvVar7 + uVar10) = *(undefined4 *)((long)pvVar3 + uVar10);
                uVar10 = uVar10 + 4;
              } while (uVar9 != uVar10);
              if (uVar8 == uVar9) goto LAB_1000c780;
            }
          }
LAB_1000c879:
          uVar11 = uVar8 & 3;
          uVar10 = uVar9;
          if (uVar11 != 0) {
            do {
              *(undefined1 *)((long)pvVar7 + uVar10) = *(undefined1 *)((long)pvVar3 + uVar10);
              uVar10 = uVar10 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (uVar9 - uVar8 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)pvVar7 + uVar10) = *(undefined1 *)((long)pvVar3 + uVar10);
              *(undefined1 *)((long)pvVar7 + uVar10 + 1) =
                   *(undefined1 *)((long)pvVar3 + uVar10 + 1);
              *(undefined1 *)((long)pvVar7 + uVar10 + 2) =
                   *(undefined1 *)((long)pvVar3 + uVar10 + 2);
              *(undefined1 *)((long)pvVar7 + uVar10 + 3) =
                   *(undefined1 *)((long)pvVar3 + uVar10 + 3);
              uVar10 = uVar10 + 4;
            } while (uVar8 != uVar10);
          }
        }
LAB_1000c780:
        recovered_10007130(pvVar3);
        *param_1 = (long)pvVar7;
        param_1[2] = uVar12;
        uVar8 = param_1[1];
        param_3 = uVar12;
      }
    }
    *(undefined1 *)((long)pvVar7 + uVar8) = *param_2;
    uVar8 = uVar8 + 1;
    param_1[1] = uVar8;
    param_2 = param_2 + 1;
    if (param_2 == puVar1) {
      return;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c900
 */

void recovered_1000c900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c910
 */

void recovered_1000c910(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c30
#define DAT_10010c30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdf4U)))
#undef LAB_1000cb8e
#define LAB_1000cb8e (*(uint8_t *)(0x1000cb8eU))
#undef PTR_DAT_10011000
#define PTR_DAT_10011000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x11c4U)))
#define local_80 (*(undefined1 * *)(frame + 96))
#define local_68 (*(long *)(frame + 120))
#define local_60 (*(undefined1 * *)(frame + 128))
#define local_58 (*(long *)(frame + 136))
#define local_50 (*(ulong *)(frame + 144))
#define local_40 (*(ulong *)(frame + 160))
#define local_31 (*(undefined1 *)(frame + 175))
#define auStack_c8 (*(undefined1 (*)[8])(frame + 24))
#define local_c0 (*(undefined8 *)(frame + 32))
#define local_b8 (*(undefined4 *)(frame + 40))
#define local_a0 (*(code * *)(frame + 64))
#define local_98 (*(undefined * *)(frame + 72))
#define local_90 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c920
 */

void recovered_1000c920(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  local_90 = (undefined1 *)((long)(uintptr_t)(frame + 224) + -8);
  local_80 = auStack_c8;
  lVar7 = param_3[1];
  local_a0 = recovered_10007080;
  local_98 = &DAT_10010c30;
  local_88 = &LAB_1000cb8e;
  recovered_10007600(&local_c0);
  puVar1 = PTR_DAT_10011000;
  if (lVar7 != 0) {
    lVar7 = *param_3;
    if (*(char *)(lVar7 + 0x30) == '\x01') {
      if ((*(long *)(param_2 + 0x50) - 1U < *(ulong *)(param_2 + 0x10)) &&
         (pcVar5 = (char *)(*(long *)(param_2 + 0x50) * 0x28 + *(long *)(param_2 + 8) + -0x28),
         pcVar5 != (char *)0x0)) {
        local_b8 = 0xffffffff;
        recovered_100087e0(&local_58,pcVar5);
        local_60 = &DAT_10010a26;
        if ((undefined1 *)CONCAT71(PF_PART7(local_58, 1),(undefined1)local_58) != (undefined1 *)0x0) {
          local_60 = (undefined1 *)CONCAT71(PF_PART7(local_58, 1),(undefined1)local_58);
        }
        local_40 = local_50;
        uVar6 = (ulong)*(int *)(PTR_DAT_10011000 + 0x1c);
        puVar3 = (undefined8 *)PTR_DAT_10011000;
        if ((0 < (long)uVar6) && (lVar7 = uVar6 - local_50, local_50 <= uVar6 && lVar7 != 0)) {
          do {
            puVar2 = (undefined8 *)puVar3[1];
            if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
              puVar2 = puVar3;
            }
            if ((uint *)*puVar2 != (uint *)0x0) {
              local_31 = *(undefined1 *)(puVar3 + 4);
              local_b8 = 1;
              local_68 = lVar7;
              recovered_10006700(&local_31,1,1,(uint *)*puVar2);
              puVar3 = (undefined8 *)PTR_DAT_10011000;
              lVar7 = local_68;
            }
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        *(undefined4 *)((long)puVar3 + 0x1c) = 0;
        puVar2 = (undefined8 *)puVar3[1];
        if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
          puVar2 = puVar3;
        }
        if (local_40 != 0 && (uint *)*puVar2 != (uint *)0x0) {
          local_b8 = 2;
          recovered_10006700(local_60,1,local_40,(uint *)*puVar2);
        }
        recovered_10007130((void *)CONCAT71(PF_PART7(local_58, 1),(undefined1)local_58));
      }
    }
    else {
      puVar4 = &DAT_10010a26;
      if (*(undefined1 **)(lVar7 + 8) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(lVar7 + 8);
      }
      uVar6 = *(ulong *)(lVar7 + 0x10);
      uVar8 = (ulong)*(int *)(PTR_DAT_10011000 + 0x1c);
      if ((long)uVar8 < 1) {
        puVar3 = *(undefined8 **)(PTR_DAT_10011000 + 8);
      }
      else {
        puVar3 = *(undefined8 **)(PTR_DAT_10011000 + 8);
        lVar7 = uVar8 - uVar6;
        if (uVar6 <= uVar8 && lVar7 != 0) {
          do {
            puVar2 = puVar3;
            if (puVar3 == (undefined8 *)0x0) {
              puVar2 = (undefined8 *)puVar1;
            }
            if ((uint *)*puVar2 != (uint *)0x0) {
              PF_PART1(local_58, 0) = puVar1[0x20];
              local_b8 = 0xffffffff;
              recovered_10006700(&local_58,1,1,(uint *)*puVar2);
              puVar3 = *(undefined8 **)(puVar1 + 8);
            }
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      *(undefined4 *)(puVar1 + 0x1c) = 0;
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar1;
      }
      if ((uVar6 != 0) && ((uint *)*puVar3 != (uint *)0x0)) {
        local_b8 = 0xffffffff;
        recovered_10006700(puVar4,1,uVar6,(uint *)*puVar3);
      }
    }
  }
  recovered_10007620(&local_c0);
  return;
}

#undef DAT_10010a26
#undef DAT_10010c30
#undef LAB_1000cb8e
#undef PTR_DAT_10011000
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_40
#undef local_31
#undef auStack_c8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88

#undef PTR_recovered_1000c900_10011018
#define PTR_recovered_1000c900_10011018 (*(void * *)(((uintptr_t)pf_module_state + 0x11dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbe0
 */

void recovered_1000cbe0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000c900_10011018;
  return;
}

#undef PTR_recovered_1000c900_10011018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc00
 */

void recovered_1000cc00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc10
 */

void recovered_1000cc10(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef PTR_DAT_10011000
#define PTR_DAT_10011000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x11c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc20
 */

void recovered_1000cc20(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *variable;

  if (param_3[1] == 0) {
    return;
  }
  if (*(char *)(*param_3 + 0x30) == '\x01') {
    if (*(ulong *)(param_2 + 0x10) <= *(long *)(param_2 + 0x50) - 1U) {
      return;
    }
    variable = (void *)(*(long *)(param_2 + 0x50) * 0x28 + *(long *)(param_2 + 8) + -0x28);
    if (variable == (void *)0x0) {
      return;
    }
    uVar1 = recovered_10008a20(variable);
  }
  else {
    uVar1 = *(ulong *)(*param_3 + 0x20);
  }
  recovered_1000cca0((long *)PTR_DAT_10011000,uVar1);
  return;
}

#undef PTR_DAT_10011000

#undef PTR_recovered_1000cc00_10011070
#define PTR_recovered_1000cc00_10011070 (*(void * *)(((uintptr_t)pf_module_state + 0x1234U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc80
 */

void recovered_1000cc80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000cc00_10011070;
  return;
}

#undef PTR_recovered_1000cc00_10011070

#undef DAT_10010c38
#define DAT_10010c38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdfcU)))
#undef LAB_1000d059
#define LAB_1000d059 (*(uint8_t *)(0x1000d059U))
#define local_128 (*(char (*)[4])(frame + 24))
#define local_118 (*(char (*)[4])(frame + 40))
#define local_f8 (*(undefined8 *)(frame + 72))
#define local_b8 (*(undefined8 *)(frame + 136))
#define local_b0 (*(undefined4 *)(frame + 144))
#define local_98 (*(code * *)(frame + 168))
#define local_90 (*(undefined * *)(frame + 176))
#define local_88 (*(undefined1 * *)(frame + 184))
#define local_80 (*(undefined1 * *)(frame + 192))
#define local_78 (*(undefined1 * *)(frame + 200))
#define local_60 (*(long *)(frame + 224))
#define local_58 (*(undefined1 * *)(frame + 232))
#define local_50 (*(long * *)(frame + 240))
#define local_48 (*(long * *)(frame + 248))
#define local_40 (*(undefined1 * *)(frame + 256))
#define local_38 (*(undefined8 *)(frame + 264))
#define cStack_124 (*(char *)(frame + 28))
#define cStack_123 (*(char *)(frame + 29))
#define cStack_122 (*(char *)(frame + 30))
#define cStack_121 (*(char *)(frame + 31))
#define cStack_120 (*(char *)(frame + 32))
#define cStack_11f (*(char *)(frame + 33))
#define cStack_11e (*(char *)(frame + 34))
#define cStack_11d (*(char *)(frame + 35))
#define cStack_11c (*(char *)(frame + 36))
#define cStack_11b (*(char *)(frame + 37))
#define cStack_11a (*(char *)(frame + 38))
#define cStack_119 (*(char *)(frame + 39))
#define cStack_114 (*(char *)(frame + 44))
#define cStack_113 (*(char *)(frame + 45))
#define cStack_112 (*(char *)(frame + 46))
#define cStack_111 (*(char *)(frame + 47))
#define cStack_110 (*(char *)(frame + 48))
#define cStack_10f (*(char *)(frame + 49))
#define cStack_10e (*(char *)(frame + 50))
#define cStack_10d (*(char *)(frame + 51))
#define cStack_10c (*(char *)(frame + 52))
#define cStack_10b (*(char *)(frame + 53))
#define cStack_10a (*(char *)(frame + 54))
#define cStack_109 (*(char *)(frame + 55))
#define auStack_108 (*(undefined1 (*)[16])(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cca0
 */

long * recovered_1000cca0(long *param_1,ulong param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  pf_u120 auVar20;
  pf_u120 auVar21;
  pf_u120 auVar22;
  pf_u120 auVar23;
  pf_u120 auVar24;
  pf_u120 auVar25;
  pf_u120 auVar26;
  pf_u120 auVar27;
  pf_u120 auVar28;
  pf_u120 auVar29;
  pf_u120 auVar30;
  pf_u120 auVar31;
  pf_u120 auVar32;
  pf_u120 auVar33;
  pf_u120 auVar34;
  pf_u120 auVar35;
  pf_u120 auVar36;
  pf_u120 auVar37;
  undefined1 auVar38 [11];
  pf_u120 auVar39;
  pf_u120 auVar40;
  pf_u120 auVar41;
  undefined1 auVar42 [11];
  pf_u120 auVar43;
  long *plVar44;
  char *pcVar45;
  long *plVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  undefined4 *puVar51;
  long *plVar52;
  uint128 auVar53;
  undefined1 auVar54 [11];
  pf_u120 auVar55;
  pf_u120 auVar56;
  uint128 auVar57;
  uint128 auVar58;
  uint128 auVar59;
  uint128 auVar60;

  local_88 = (undefined1 *)((long)(uintptr_t)(frame + 320) + -8);
  local_78 = local_128;
  iVar1 = *(int *)((long)param_1 + 0x14);
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c38;
  local_80 = &LAB_1000d059;
  recovered_10007600(&local_b8);
  if (iVar1 != 10) {
    local_b0 = 0xffffffff;
    plVar44 = recovered_1000d0c0(param_1,param_2);
    recovered_10007620(&local_b8);
    return plVar44;
  }
  uVar49 = -param_2;
  if ((long)-param_2 < 0) {
    uVar49 = param_2;
  }
  uVar47 = 0;
  do {
    uVar48 = uVar47;
    auStack_108[uVar48] = (char)uVar49 + (char)(uVar49 / 10) * -10 | 0x30;
    uVar47 = uVar48 + 1;
    bVar3 = 9 < uVar49;
    uVar49 = uVar49 / 10;
  } while (bVar3);
  if ((long)param_2 < 0) {
    auStack_108[uVar48 + 1] = 0x2d;
    uVar47 = uVar48 + 2;
  }
  if (0x20 < uVar47) {
    local_38 = 0;
    local_40 = (undefined1 *)0x0;
    goto LAB_1000cf1c;
  }
  if (uVar47 != 0) {
    if (uVar47 < 4) {
      uVar49 = 0;
    }
    else {
      if (uVar47 < 0x10) {
        uVar48 = 0;
      }
      else {
        uVar49 = (ulong)((uint)uVar47 & 0x30);
        auVar57 = *(uint128 *)(local_118 + uVar47);
        PF_PART1(auVar20,0xd) = 0;
        PF_PART13(auVar20, 0) = PF_PART13(auVar57, 0);
        PF_PART1(auVar20,0xe) = ((uint8_t *)(void *)&auVar57)[7];
        PF_PART1(auVar22,0xc) = ((uint8_t *)(void *)&auVar57)[6];
        PF_PART12(auVar22, 0) = PF_PART12(auVar57, 0);
        PF_PART2(auVar22, 13) = PF_PART2(auVar20, 13);
        PF_PART1(auVar24,0xb) = 0;
        PF_PART11(auVar24, 0) = PF_PART11(auVar57, 0);
        PF_PART3(auVar24, 12) = PF_PART3(auVar22, 12);
        PF_PART1(auVar26,10) = ((uint8_t *)(void *)&auVar57)[5];
        PF_PART10(auVar26, 0) = PF_PART10(auVar57, 0);
        PF_PART4(auVar26, 11) = PF_PART4(auVar24, 11);
        PF_PART1(auVar28,9) = 0;
        PF_PART9(auVar28, 0) = PF_PART9(auVar57, 0);
        PF_PART5(auVar28, 10) = PF_PART5(auVar26, 10);
        PF_PART1(auVar30,8) = ((uint8_t *)(void *)&auVar57)[4];
        PF_PART8(auVar30, 0) = PF_PART8(auVar57, 0);
        PF_PART6(auVar30, 9) = PF_PART6(auVar28, 9);
        ((uint8_t *)(void *)&auVar59)[7] = 0;
        PF_PART7(auVar59, 0) = PF_PART7(auVar30, 8);
        PF_PART8(auVar36, 7) = 0;
        PF_PART7(auVar36, 0) = PF_PART7(auVar30, 8);
        PF_PART8(auVar37, 1) = SUB158(auVar36 << 0x40,7);
        PF_PART1(auVar37,0) = ((uint8_t *)(void *)&auVar57)[3];
        PF_PART6(auVar37, 9) = 0;
        PF_PART10(auVar38, 1) = SUB1510(auVar37 << 0x30,5);
        auVar38[0] = ((uint8_t *)(void *)&auVar57)[2];
        PF_PART4(auVar39, 11) = 0;
        PF_PART11(auVar39, 0) = auVar38;
        PF_PART1(auVar32,2) = ((uint8_t *)(void *)&auVar57)[1];
        PF_PART2(auVar32, 0) = PF_PART2(auVar57, 0);
        PF_PART12(auVar32, 3) = SUB1512(auVar39 << 0x20,3);
        PF_PART13(auVar34, 2) = PF_PART13(auVar32, 2);
        PF_PART2(auVar34, 0) = PF_PART2(auVar57, 0) & 0xff;
        PF_PART4(auVar59, 8) = PF_PART4(auVar34, 0);
        PF_PART4(auVar59, 12) = PF_PART4(auVar38, 0);
        auVar58 = pshuflw(auVar59,auVar59,0x1b);
        auVar59 = pshufhw(auVar58,auVar58,0x1b);
        ((uint8_t *)(void *)&auVar58)[8] = ((uint8_t *)(void *)&auVar57)[8];
        ((uint8_t *)(void *)&auVar58)[9] = 0;
        ((uint8_t *)(void *)&auVar58)[10] = ((uint8_t *)(void *)&auVar57)[9];
        PF_PART10(auVar54, 0) = (unkuint10)((uint8_t *)(void *)&auVar57)[0xc] << 0x40;
        auVar54[10] = ((uint8_t *)(void *)&auVar57)[0xd];
        PF_PART1(auVar55,0xb) = 0;
        PF_PART11(auVar55, 0) = auVar54;
        PF_PART1(auVar55,0xc) = ((uint8_t *)(void *)&auVar57)[0xe];
        PF_PART1(auVar55,0xd) = 0;
        PF_PART1(auVar55,0xe) = ((uint8_t *)(void *)&auVar57)[0xf];
        ((uint8_t *)(void *)&auVar58)[3] = 0;
        PF_PART3(auVar58, 0) = PF_PART3(auVar54, 8);
        PF_PART3(auVar58, 4) = PF_PART3(auVar55, 12);
        ((uint8_t *)(void *)&auVar58)[7] = 0;
        ((uint8_t *)(void *)&auVar58)[0xb] = 0;
        PF_PART3(auVar58, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar57)[0xb],(uint6)((uint8_t *)(void *)&auVar57)[10] << 0x20) >> 0x20);
        ((uint8_t *)(void *)&auVar58)[0xf] = 0;
        auVar57 = pshuflw(auVar58,auVar58,0x1b);
        auVar57 = pshufhw(auVar57,auVar57,0x1b);
        sVar4 = PF_PART2(auVar57, 0);
        local_128[0] = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar57)[0] - (0xff < sVar4);
        sVar4 = PF_PART2(auVar57, 2);
        sVar5 = PF_PART2(auVar57, 4);
        sVar6 = PF_PART2(auVar57, 6);
        sVar7 = PF_PART2(auVar57, 8);
        sVar8 = PF_PART2(auVar57, 10);
        sVar9 = PF_PART2(auVar57, 12);
        sVar10 = PF_PART2(auVar57, 14);
        sVar11 = PF_PART2(auVar59, 0);
        sVar12 = PF_PART2(auVar59, 2);
        sVar13 = PF_PART2(auVar59, 4);
        sVar14 = PF_PART2(auVar59, 6);
        sVar15 = PF_PART2(auVar59, 8);
        sVar16 = PF_PART2(auVar59, 10);
        sVar17 = PF_PART2(auVar59, 12);
        sVar18 = PF_PART2(auVar59, 14);
        local_128[1] = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar57)[2] - (0xff < sVar4);
        local_128[2] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar57)[4] - (0xff < sVar5);
        local_128[3] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar57)[6] - (0xff < sVar6);
        cStack_124 = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar57)[8] - (0xff < sVar7);
        cStack_123 = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar57)[10] - (0xff < sVar8);
        cStack_122 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar57)[0xc] - (0xff < sVar9);
        cStack_121 = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar57)[0xe] - (0xff < sVar10);
        cStack_120 = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar59)[0] - (0xff < sVar11);
        cStack_11f = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar59)[2] - (0xff < sVar12);
        cStack_11e = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar59)[4] - (0xff < sVar13);
        cStack_11d = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar59)[6] - (0xff < sVar14);
        cStack_11c = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar59)[8] - (0xff < sVar15);
        cStack_11b = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar59)[10] - (0xff < sVar16);
        cStack_11a = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar59)[0xc] - (0xff < sVar17);
        cStack_119 = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar59)[0xe] - (0xff < sVar18);
        if (uVar49 != 0x10) {
          auVar57 = *(uint128 *)(local_128 + uVar47);
          PF_PART1(auVar21,0xd) = 0;
          PF_PART13(auVar21, 0) = PF_PART13(auVar57, 0);
          PF_PART1(auVar21,0xe) = ((uint8_t *)(void *)&auVar57)[7];
          PF_PART1(auVar23,0xc) = ((uint8_t *)(void *)&auVar57)[6];
          PF_PART12(auVar23, 0) = PF_PART12(auVar57, 0);
          PF_PART2(auVar23, 13) = PF_PART2(auVar21, 13);
          PF_PART1(auVar25,0xb) = 0;
          PF_PART11(auVar25, 0) = PF_PART11(auVar57, 0);
          PF_PART3(auVar25, 12) = PF_PART3(auVar23, 12);
          PF_PART1(auVar27,10) = ((uint8_t *)(void *)&auVar57)[5];
          PF_PART10(auVar27, 0) = PF_PART10(auVar57, 0);
          PF_PART4(auVar27, 11) = PF_PART4(auVar25, 11);
          PF_PART1(auVar29,9) = 0;
          PF_PART9(auVar29, 0) = PF_PART9(auVar57, 0);
          PF_PART5(auVar29, 10) = PF_PART5(auVar27, 10);
          PF_PART1(auVar31,8) = ((uint8_t *)(void *)&auVar57)[4];
          PF_PART8(auVar31, 0) = PF_PART8(auVar57, 0);
          PF_PART6(auVar31, 9) = PF_PART6(auVar29, 9);
          ((uint8_t *)(void *)&auVar60)[7] = 0;
          PF_PART7(auVar60, 0) = PF_PART7(auVar31, 8);
          PF_PART8(auVar40, 7) = 0;
          PF_PART7(auVar40, 0) = PF_PART7(auVar31, 8);
          PF_PART8(auVar41, 1) = SUB158(auVar40 << 0x40,7);
          PF_PART1(auVar41,0) = ((uint8_t *)(void *)&auVar57)[3];
          PF_PART6(auVar41, 9) = 0;
          PF_PART10(auVar42, 1) = SUB1510(auVar41 << 0x30,5);
          auVar42[0] = ((uint8_t *)(void *)&auVar57)[2];
          PF_PART4(auVar43, 11) = 0;
          PF_PART11(auVar43, 0) = auVar42;
          PF_PART1(auVar33,2) = ((uint8_t *)(void *)&auVar57)[1];
          PF_PART2(auVar33, 0) = PF_PART2(auVar57, 0);
          PF_PART12(auVar33, 3) = SUB1512(auVar43 << 0x20,3);
          PF_PART13(auVar35, 2) = PF_PART13(auVar33, 2);
          PF_PART2(auVar35, 0) = PF_PART2(auVar57, 0) & 0xff;
          PF_PART4(auVar60, 8) = PF_PART4(auVar35, 0);
          PF_PART4(auVar60, 12) = PF_PART4(auVar42, 0);
          auVar58 = pshuflw(auVar60,auVar60,0x1b);
          auVar58 = pshufhw(auVar58,auVar58,0x1b);
          ((uint8_t *)(void *)&auVar53)[9] = 0;
          ((uint8_t *)(void *)&auVar53)[8] = ((uint8_t *)(void *)&auVar57)[8];
          ((uint8_t *)(void *)&auVar53)[10] = ((uint8_t *)(void *)&auVar57)[9];
          PF_PART10(auVar56, 0) = (unkuint10)((uint8_t *)(void *)&auVar57)[0xc] << 0x40;
          PF_PART1(auVar56,10) = ((uint8_t *)(void *)&auVar57)[0xd];
          PF_PART1(auVar56,0xb) = 0;
          PF_PART1(auVar56,0xc) = ((uint8_t *)(void *)&auVar57)[0xe];
          PF_PART1(auVar56,0xd) = 0;
          PF_PART1(auVar56,0xe) = ((uint8_t *)(void *)&auVar57)[0xf];
          ((uint8_t *)(void *)&auVar53)[7] = 0;
          PF_PART7(auVar53, 0) = PF_PART7(auVar56, 8);
          ((uint8_t *)(void *)&auVar53)[0xb] = 0;
          PF_PART3(auVar53, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar57)[0xb],(uint6)((uint8_t *)(void *)&auVar57)[10] << 0x20) >> 0x20);
          ((uint8_t *)(void *)&auVar53)[0xf] = 0;
          auVar57 = pshuflw(auVar53,auVar53,0x1b);
          auVar57 = pshufhw(auVar57,auVar57,0x1b);
          sVar4 = PF_PART2(auVar57, 0);
          sVar5 = PF_PART2(auVar57, 2);
          sVar6 = PF_PART2(auVar57, 4);
          sVar7 = PF_PART2(auVar57, 6);
          sVar8 = PF_PART2(auVar57, 8);
          sVar9 = PF_PART2(auVar57, 10);
          sVar10 = PF_PART2(auVar57, 12);
          sVar11 = PF_PART2(auVar57, 14);
          sVar12 = PF_PART2(auVar58, 0);
          sVar13 = PF_PART2(auVar58, 2);
          sVar14 = PF_PART2(auVar58, 4);
          sVar15 = PF_PART2(auVar58, 6);
          sVar16 = PF_PART2(auVar58, 8);
          sVar17 = PF_PART2(auVar58, 10);
          sVar18 = PF_PART2(auVar58, 12);
          sVar19 = PF_PART2(auVar58, 14);
          local_118[0] = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar57)[0] - (0xff < sVar4);
          local_118[1] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar57)[2] - (0xff < sVar5);
          local_118[2] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar57)[4] - (0xff < sVar6);
          local_118[3] = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar57)[6] - (0xff < sVar7);
          cStack_114 = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar57)[8] - (0xff < sVar8);
          cStack_113 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar57)[10] - (0xff < sVar9);
          cStack_112 = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar57)[0xc] - (0xff < sVar10);
          cStack_111 = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar57)[0xe] - (0xff < sVar11);
          cStack_110 = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar58)[0] - (0xff < sVar12);
          cStack_10f = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar58)[2] - (0xff < sVar13);
          cStack_10e = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar58)[4] - (0xff < sVar14);
          cStack_10d = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar58)[6] - (0xff < sVar15);
          cStack_10c = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar58)[8] - (0xff < sVar16);
          cStack_10b = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar58)[10] - (0xff < sVar17);
          cStack_10a = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar58)[0xc] - (0xff < sVar18);
          cStack_109 = (0 < sVar19) * (sVar19 < 0x100) * ((uint8_t *)(void *)&auVar58)[0xe] - (0xff < sVar19);
        }
        if (uVar47 == uVar49) goto LAB_1000ced3;
        uVar48 = uVar49;
        if ((uVar47 & 0xc) == 0) goto LAB_1000ceac;
      }
      uVar49 = (ulong)((uint)uVar47 & 0x3c);
      puVar51 = (undefined4 *)(auStack_108 + (uVar47 - uVar48) + -4);
      do {
        uVar2 = *puVar51;
        auVar57 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                                  CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2))
                                         >> 0x10),(short)uVar2) & 0xffffff00ff00ff);
        auVar57 = pshuflw(auVar57,auVar57,0x1b);
        sVar4 = PF_PART2(auVar57, 0);
        sVar5 = PF_PART2(auVar57, 2);
        sVar6 = PF_PART2(auVar57, 4);
        sVar7 = PF_PART2(auVar57, 6);
        *(uint *)(local_128 + uVar48) =
             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar57)[6] - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar57)[4] - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar57)[2] - (0xff < sVar5),
                                        (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar57)[0] - (0xff < sVar4))
                              ));
        uVar48 = uVar48 + 4;
        puVar51 = puVar51 + -1;
      } while (uVar49 != uVar48);
      if (uVar47 == uVar49) goto LAB_1000ced3;
    }
LAB_1000ceac:
    lVar50 = uVar47 - uVar49;
    pcVar45 = local_128 + uVar49;
    do {
      *pcVar45 = auStack_108[lVar50 + -1];
      pcVar45 = pcVar45 + 1;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
  }
LAB_1000ced3:
  (*(uint128 *)(void *)auStack_108) = (uint128)0x0;
  local_f8 = 0;
  local_b0 = 0xffffffff;
  recovered_1000c230((long *)auStack_108,(long)local_128,uVar47);
  local_38 = PF_PART8(auStack_108, 8);
  local_40 = (undefined1 *)PF_PART8(auStack_108, 0);
LAB_1000cf1c:
  (*(uint128 *)(void *)auStack_108) = (uint128)0x0;
  local_f8 = 0;
  recovered_10007130((void *)0x0);
  local_50 = param_1;
  local_48 = param_1;
  if (local_40 == (undefined1 *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_b0 = 1;
    local_40 = recovered_100070d0(1);
    *local_40 = 0;
  }
  uVar49 = (ulong)*(int *)((long)local_48 + 0x1c);
  plVar44 = local_50;
  plVar52 = local_48;
  if ((0 < (long)uVar49) && (lVar50 = uVar49 - local_38, local_38 <= uVar49 && lVar50 != 0)) {
    do {
      plVar46 = (long *)plVar52[1];
      if ((long *)plVar52[1] == (long *)0x0) {
        plVar46 = plVar44;
      }
      if ((uint *)*plVar46 != (uint *)0x0) {
        auStack_108[0] = (char)plVar52[4];
        local_b0 = 2;
        local_60 = lVar50;
        recovered_10006700(auStack_108,1,1,(uint *)*plVar46);
        lVar50 = local_60;
        plVar44 = local_50;
        plVar52 = local_48;
      }
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
  }
  *(undefined4 *)((long)plVar52 + 0x1c) = 0;
  if ((long *)plVar52[1] != (long *)0x0) {
    plVar44 = (long *)plVar52[1];
  }
  if ((local_38 != 0) && ((uint *)*plVar44 != (uint *)0x0)) {
    local_58 = local_40;
    local_b0 = 3;
    recovered_10006700(local_40,1,local_38,(uint *)*plVar44);
    plVar52 = local_48;
  }
  recovered_10007130(local_40);
  recovered_10007620(&local_b8);
  return plVar52;
}

#undef DAT_10010c38
#undef LAB_1000d059
#undef local_128
#undef local_118
#undef local_f8
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef cStack_124
#undef cStack_123
#undef cStack_122
#undef cStack_121
#undef cStack_120
#undef cStack_11f
#undef cStack_11e
#undef cStack_11d
#undef cStack_11c
#undef cStack_11b
#undef cStack_11a
#undef cStack_119
#undef cStack_114
#undef cStack_113
#undef cStack_112
#undef cStack_111
#undef cStack_110
#undef cStack_10f
#undef cStack_10e
#undef cStack_10d
#undef cStack_10c
#undef cStack_10b
#undef cStack_10a
#undef cStack_109
#undef auStack_108

#undef DAT_10010c44
#define DAT_10010c44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe08U)))
#undef LAB_1000d715
#define LAB_1000d715 (*(uint8_t *)(0x1000d715U))
#undef str_10010a2e
#define str_10010a2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_10010a3f
#define str_10010a3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc03U)))
#define local_138 (*(char (*)[29])(frame + 24))
#define local_118 (*(undefined1 (*)[16])(frame + 56))
#define local_108 (*(undefined8 *)(frame + 72))
#define local_d0 (*(ulong *)(frame + 128))
#define local_c8 (*(undefined8 *)(frame + 136))
#define local_c0 (*(undefined4 *)(frame + 144))
#define local_a8 (*(code * *)(frame + 168))
#define local_a0 (*(undefined * *)(frame + 176))
#define local_98 (*(undefined1 * *)(frame + 184))
#define local_90 (*(undefined1 * *)(frame + 192))
#define local_88 (*(undefined1 * *)(frame + 200))
#define local_70 (*(undefined1 * *)(frame + 224))
#define local_68 (*(long * *)(frame + 232))
#define local_60 (*(undefined1 * *)(frame + 240))
#define local_58 (*(long * *)(frame + 248))
#define local_50 (*(long *)(frame + 256))
#define local_48 (*(ulong *)(frame + 264))
#define local_40 (*(undefined1 * *)(frame + 272))
#define local_31 (*(undefined1 *)(frame + 287))
#define auStack_11b (*(undefined1 (*)[3])(frame + 53))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d0c0
 */

long * recovered_1000d0c0(long *param_1,ulong param_2)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  pf_u120 auVar36;
  pf_u120 auVar37;
  pf_u120 auVar38;
  pf_u120 auVar39;
  pf_u120 auVar40;
  pf_u120 auVar41;
  pf_u120 auVar42;
  pf_u120 auVar43;
  pf_u120 auVar44;
  pf_u120 auVar45;
  pf_u120 auVar46;
  pf_u120 auVar47;
  pf_u120 auVar48;
  pf_u120 auVar49;
  pf_u120 auVar50;
  pf_u120 auVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  pf_u120 auVar55;
  pf_u120 auVar56;
  undefined1 auVar57 [11];
  pf_u120 auVar58;
  pf_u120 auVar59;
  pf_u120 auVar60;
  undefined1 auVar61 [11];
  pf_u120 auVar62;
  undefined1 *puVar63;
  ulong uVar64;
  long *plVar65;
  ulong uVar66;
  undefined1 uVar67;
  ulong uVar68;
  char *pcVar69;
  long *plVar70;
  ulong uVar71;
  long lVar72;
  undefined1 auVar73 [11];
  pf_u120 auVar74;
  uint128 auVar75;
  undefined1 auVar76 [11];
  pf_u120 auVar77;
  uint128 auVar78;
  uint128 auVar79;
  uint128 auVar80;
  uint128 auVar81;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 336) + -8);
  local_88 = local_138;
  iVar1 = *(int *)((long)param_1 + 0x14);
  local_a8 = recovered_10007080;
  local_a0 = &DAT_10010c44;
  local_90 = &LAB_1000d715;
  local_58 = param_1;
  recovered_10007600(&local_c8);
  local_68 = param_1;
  if (iVar1 != 10) {
    pcVar69 = str_10010a3f;
    if ((char)param_1[3] != '\0') {
      pcVar69 = str_10010a2e;
    }
    lVar72 = 0;
    do {
      local_118[lVar72] = pcVar69[(uint)param_2 & (uint)(iVar1 != 8) * 8 + 7];
      lVar72 = lVar72 + 1;
      param_2 = param_2 >> (iVar1 != 8) + 3;
    } while (param_2 != 0);
    if (lVar72 == 0) {
      local_48 = 0;
      local_60 = (undefined1 *)0x0;
    }
    else {
      puVar63 = (undefined1 *)0x0;
      uVar66 = 0;
      local_48 = 0;
      do {
        local_40 = puVar63;
        uVar67 = auStack_11b[lVar72 + 2];
        if (local_48 == uVar66) {
          uVar71 = local_48 * 2;
          if (local_48 == 0) {
            uVar71 = 0x10;
          }
          if (uVar71 <= local_48) goto LAB_1000d2c0;
          local_c0 = 2;
          local_d0 = uVar71;
          local_50 = lVar72;
          local_31 = uVar67;
          puVar63 = recovered_100070d0(uVar71 | 1);
          uVar71 = local_48;
          *puVar63 = 0;
          if (local_48 != 0) {
            if (local_48 < 4) {
              uVar66 = 0;
            }
            else {
              uVar66 = 0;
              if (0x1f < (ulong)((long)puVar63 - (long)local_40)) {
                if (local_48 < 0x20) {
                  uVar64 = 0;
                }
                else {
                  uVar66 = local_48 & 0xffffffffffffffe0;
                  uVar64 = 0;
                  do {
                    uVar52 = *(undefined8 *)((long)(local_40 + uVar64) + 8);
                    uVar53 = *(undefined8 *)(local_40 + uVar64 + 0x10);
                    uVar54 = *(undefined8 *)((long)(local_40 + uVar64 + 0x10) + 8);
                    *(undefined8 *)(puVar63 + uVar64) = *(undefined8 *)(local_40 + uVar64);
                    *(undefined8 *)((long)(puVar63 + uVar64) + 8) = uVar52;
                    *(undefined8 *)(puVar63 + uVar64 + 0x10) = uVar53;
                    *(undefined8 *)((long)(puVar63 + uVar64 + 0x10) + 8) = uVar54;
                    uVar64 = uVar64 + 0x20;
                  } while (uVar66 != uVar64);
                  if (local_48 == uVar66) goto LAB_1000d1f0;
                  uVar64 = uVar66;
                  if ((local_48 & 0x1c) == 0) goto LAB_1000d37c;
                }
                uVar66 = local_48 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(puVar63 + uVar64) = *(undefined4 *)(local_40 + uVar64);
                  uVar64 = uVar64 + 4;
                } while (uVar66 != uVar64);
                if (local_48 == uVar66) goto LAB_1000d1f0;
              }
            }
LAB_1000d37c:
            uVar64 = uVar66;
            if ((local_48 & 3) != 0) {
              uVar68 = (ulong)((uint)local_48 & 3);
              do {
                puVar63[uVar64] = local_40[uVar64];
                uVar64 = uVar64 + 1;
                uVar68 = uVar68 - 1;
              } while (uVar68 != 0);
            }
            if (uVar66 - local_48 < 0xfffffffffffffffd) {
              do {
                puVar63[uVar64] = local_40[uVar64];
                puVar63[uVar64 + 1] = local_40[uVar64 + 1];
                puVar63[uVar64 + 2] = local_40[uVar64 + 2];
                puVar63[uVar64 + 3] = local_40[uVar64 + 3];
                uVar64 = uVar64 + 4;
              } while (local_48 != uVar64);
            }
          }
LAB_1000d1f0:
          puVar63[local_48] = 0;
          recovered_10007130(local_40);
          uVar66 = local_d0;
          lVar72 = local_50;
          local_48 = uVar71;
          uVar67 = local_31;
        }
        else {
LAB_1000d2c0:
          if (puVar63 == (undefined1 *)0x0) {
            local_c0 = 3;
            local_50 = lVar72;
            local_31 = uVar67;
            puVar63 = recovered_100070d0(1);
            *puVar63 = 0;
            uVar66 = 0;
            lVar72 = local_50;
            uVar67 = local_31;
          }
        }
        lVar72 = lVar72 + -1;
        uVar71 = local_48 + 1;
        puVar63[local_48] = uVar67;
        puVar63[local_48 + 1] = 0;
        local_48 = uVar71;
        local_60 = puVar63;
      } while (lVar72 != 0);
    }
    goto joined_r0x1000d421;
  }
  uVar66 = 0;
  do {
    uVar71 = uVar66;
    local_118[uVar71] = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
    uVar66 = uVar71 + 1;
    bVar3 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar3);
  if (uVar66 < 0x21) {
    if (uVar66 != 0) {
      if (uVar66 < 4) {
        uVar64 = 0;
      }
      else {
        if (uVar66 < 0x20) {
          uVar68 = 0;
        }
        else {
          uVar64 = uVar66 & 0xffffffffffffffe0;
          pcVar69 = local_138 + 0x10;
          lVar72 = 0;
          do {
            auVar75 = *(uint128 *)(local_138 + uVar71 + lVar72 + 1);
            auVar78 = *(uint128 *)(local_138 + uVar71 + lVar72 + 0x11);
            PF_PART1(auVar36,0xd) = 0;
            PF_PART13(auVar36, 0) = PF_PART13(auVar78, 0);
            PF_PART1(auVar36,0xe) = ((uint8_t *)(void *)&auVar78)[7];
            PF_PART1(auVar38,0xc) = ((uint8_t *)(void *)&auVar78)[6];
            PF_PART12(auVar38, 0) = PF_PART12(auVar78, 0);
            PF_PART2(auVar38, 13) = PF_PART2(auVar36, 13);
            PF_PART1(auVar40,0xb) = 0;
            PF_PART11(auVar40, 0) = PF_PART11(auVar78, 0);
            PF_PART3(auVar40, 12) = PF_PART3(auVar38, 12);
            PF_PART1(auVar42,10) = ((uint8_t *)(void *)&auVar78)[5];
            PF_PART10(auVar42, 0) = PF_PART10(auVar78, 0);
            PF_PART4(auVar42, 11) = PF_PART4(auVar40, 11);
            PF_PART1(auVar44,9) = 0;
            PF_PART9(auVar44, 0) = PF_PART9(auVar78, 0);
            PF_PART5(auVar44, 10) = PF_PART5(auVar42, 10);
            PF_PART1(auVar46,8) = ((uint8_t *)(void *)&auVar78)[4];
            PF_PART8(auVar46, 0) = PF_PART8(auVar78, 0);
            PF_PART6(auVar46, 9) = PF_PART6(auVar44, 9);
            ((uint8_t *)(void *)&auVar80)[7] = 0;
            PF_PART7(auVar80, 0) = PF_PART7(auVar46, 8);
            PF_PART8(auVar55, 7) = 0;
            PF_PART7(auVar55, 0) = PF_PART7(auVar46, 8);
            PF_PART8(auVar56, 1) = SUB158(auVar55 << 0x40,7);
            PF_PART1(auVar56,0) = ((uint8_t *)(void *)&auVar78)[3];
            PF_PART6(auVar56, 9) = 0;
            PF_PART10(auVar57, 1) = SUB1510(auVar56 << 0x30,5);
            auVar57[0] = ((uint8_t *)(void *)&auVar78)[2];
            PF_PART4(auVar58, 11) = 0;
            PF_PART11(auVar58, 0) = auVar57;
            PF_PART1(auVar48,2) = ((uint8_t *)(void *)&auVar78)[1];
            PF_PART2(auVar48, 0) = PF_PART2(auVar78, 0);
            PF_PART12(auVar48, 3) = SUB1512(auVar58 << 0x20,3);
            PF_PART13(auVar50, 2) = PF_PART13(auVar48, 2);
            PF_PART2(auVar50, 0) = PF_PART2(auVar78, 0) & 0xff;
            PF_PART4(auVar80, 8) = PF_PART4(auVar50, 0);
            PF_PART4(auVar80, 12) = PF_PART4(auVar57, 0);
            auVar79 = pshuflw(auVar80,auVar80,0x1b);
            auVar80 = pshufhw(auVar79,auVar79,0x1b);
            ((uint8_t *)(void *)&auVar79)[8] = ((uint8_t *)(void *)&auVar78)[8];
            ((uint8_t *)(void *)&auVar79)[9] = 0;
            ((uint8_t *)(void *)&auVar79)[10] = ((uint8_t *)(void *)&auVar78)[9];
            PF_PART10(auVar76, 0) = (unkuint10)((uint8_t *)(void *)&auVar78)[0xc] << 0x40;
            auVar76[10] = ((uint8_t *)(void *)&auVar78)[0xd];
            PF_PART1(auVar77,0xb) = 0;
            PF_PART11(auVar77, 0) = auVar76;
            PF_PART1(auVar77,0xc) = ((uint8_t *)(void *)&auVar78)[0xe];
            PF_PART1(auVar77,0xd) = 0;
            PF_PART1(auVar77,0xe) = ((uint8_t *)(void *)&auVar78)[0xf];
            ((uint8_t *)(void *)&auVar79)[3] = 0;
            PF_PART3(auVar79, 0) = PF_PART3(auVar76, 8);
            PF_PART3(auVar79, 4) = PF_PART3(auVar77, 12);
            ((uint8_t *)(void *)&auVar79)[7] = 0;
            ((uint8_t *)(void *)&auVar79)[0xb] = 0;
            PF_PART3(auVar79, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar78)[0xb],(uint6)((uint8_t *)(void *)&auVar78)[10] << 0x20) >> 0x20);
            ((uint8_t *)(void *)&auVar79)[0xf] = 0;
            auVar78 = pshuflw(auVar79,auVar79,0x1b);
            auVar79 = pshufhw(auVar78,auVar78,0x1b);
            sVar5 = PF_PART2(auVar79, 0);
            sVar6 = PF_PART2(auVar79, 2);
            sVar8 = PF_PART2(auVar79, 4);
            sVar10 = PF_PART2(auVar79, 6);
            sVar12 = PF_PART2(auVar79, 8);
            sVar14 = PF_PART2(auVar79, 10);
            sVar16 = PF_PART2(auVar79, 12);
            sVar18 = PF_PART2(auVar79, 14);
            sVar20 = PF_PART2(auVar80, 0);
            sVar22 = PF_PART2(auVar80, 2);
            sVar24 = PF_PART2(auVar80, 4);
            sVar26 = PF_PART2(auVar80, 6);
            sVar28 = PF_PART2(auVar80, 8);
            sVar30 = PF_PART2(auVar80, 10);
            sVar32 = PF_PART2(auVar80, 12);
            sVar34 = PF_PART2(auVar80, 14);
            PF_PART1(auVar37,0xd) = 0;
            PF_PART13(auVar37, 0) = PF_PART13(auVar75, 0);
            PF_PART1(auVar37,0xe) = ((uint8_t *)(void *)&auVar75)[7];
            PF_PART1(auVar39,0xc) = ((uint8_t *)(void *)&auVar75)[6];
            PF_PART12(auVar39, 0) = PF_PART12(auVar75, 0);
            PF_PART2(auVar39, 13) = PF_PART2(auVar37, 13);
            PF_PART1(auVar41,0xb) = 0;
            PF_PART11(auVar41, 0) = PF_PART11(auVar75, 0);
            PF_PART3(auVar41, 12) = PF_PART3(auVar39, 12);
            PF_PART1(auVar43,10) = ((uint8_t *)(void *)&auVar75)[5];
            PF_PART10(auVar43, 0) = PF_PART10(auVar75, 0);
            PF_PART4(auVar43, 11) = PF_PART4(auVar41, 11);
            PF_PART1(auVar45,9) = 0;
            PF_PART9(auVar45, 0) = PF_PART9(auVar75, 0);
            PF_PART5(auVar45, 10) = PF_PART5(auVar43, 10);
            PF_PART1(auVar47,8) = ((uint8_t *)(void *)&auVar75)[4];
            PF_PART8(auVar47, 0) = PF_PART8(auVar75, 0);
            PF_PART6(auVar47, 9) = PF_PART6(auVar45, 9);
            ((uint8_t *)(void *)&auVar81)[7] = 0;
            PF_PART7(auVar81, 0) = PF_PART7(auVar47, 8);
            PF_PART8(auVar59, 7) = 0;
            PF_PART7(auVar59, 0) = PF_PART7(auVar47, 8);
            PF_PART8(auVar60, 1) = SUB158(auVar59 << 0x40,7);
            PF_PART1(auVar60,0) = ((uint8_t *)(void *)&auVar75)[3];
            PF_PART6(auVar60, 9) = 0;
            PF_PART10(auVar61, 1) = SUB1510(auVar60 << 0x30,5);
            auVar61[0] = ((uint8_t *)(void *)&auVar75)[2];
            PF_PART4(auVar62, 11) = 0;
            PF_PART11(auVar62, 0) = auVar61;
            PF_PART1(auVar49,2) = ((uint8_t *)(void *)&auVar75)[1];
            PF_PART2(auVar49, 0) = PF_PART2(auVar75, 0);
            PF_PART12(auVar49, 3) = SUB1512(auVar62 << 0x20,3);
            PF_PART13(auVar51, 2) = PF_PART13(auVar49, 2);
            PF_PART2(auVar51, 0) = PF_PART2(auVar75, 0) & 0xff;
            PF_PART4(auVar81, 8) = PF_PART4(auVar51, 0);
            PF_PART4(auVar81, 12) = PF_PART4(auVar61, 0);
            auVar78 = pshuflw(auVar81,auVar81,0x1b);
            auVar81 = pshufhw(auVar78,auVar78,0x1b);
            ((uint8_t *)(void *)&auVar78)[8] = ((uint8_t *)(void *)&auVar75)[8];
            ((uint8_t *)(void *)&auVar78)[9] = 0;
            ((uint8_t *)(void *)&auVar78)[10] = ((uint8_t *)(void *)&auVar75)[9];
            PF_PART10(auVar73, 0) = (unkuint10)((uint8_t *)(void *)&auVar75)[0xc] << 0x40;
            auVar73[10] = ((uint8_t *)(void *)&auVar75)[0xd];
            PF_PART1(auVar74,0xb) = 0;
            PF_PART11(auVar74, 0) = auVar73;
            PF_PART1(auVar74,0xc) = ((uint8_t *)(void *)&auVar75)[0xe];
            PF_PART1(auVar74,0xd) = 0;
            PF_PART1(auVar74,0xe) = ((uint8_t *)(void *)&auVar75)[0xf];
            ((uint8_t *)(void *)&auVar78)[3] = 0;
            PF_PART3(auVar78, 0) = PF_PART3(auVar73, 8);
            PF_PART3(auVar78, 4) = PF_PART3(auVar74, 12);
            ((uint8_t *)(void *)&auVar78)[7] = 0;
            ((uint8_t *)(void *)&auVar78)[0xb] = 0;
            PF_PART3(auVar78, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar75)[0xb],(uint6)((uint8_t *)(void *)&auVar75)[10] << 0x20) >> 0x20);
            ((uint8_t *)(void *)&auVar78)[0xf] = 0;
            auVar75 = pshuflw(auVar78,auVar78,0x1b);
            auVar75 = pshufhw(auVar75,auVar75,0x1b);
            sVar4 = PF_PART2(auVar75, 0);
            sVar7 = PF_PART2(auVar75, 2);
            sVar9 = PF_PART2(auVar75, 4);
            sVar11 = PF_PART2(auVar75, 6);
            sVar13 = PF_PART2(auVar75, 8);
            sVar15 = PF_PART2(auVar75, 10);
            sVar17 = PF_PART2(auVar75, 12);
            sVar19 = PF_PART2(auVar75, 14);
            sVar21 = PF_PART2(auVar81, 0);
            sVar23 = PF_PART2(auVar81, 2);
            sVar25 = PF_PART2(auVar81, 4);
            sVar27 = PF_PART2(auVar81, 6);
            sVar29 = PF_PART2(auVar81, 8);
            sVar31 = PF_PART2(auVar81, 10);
            sVar33 = PF_PART2(auVar81, 12);
            sVar35 = PF_PART2(auVar81, 14);
            pcVar69[-0x10] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar79)[0] - (0xff < sVar5);
            pcVar69[-0xf] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar79)[2] - (0xff < sVar6);
            pcVar69[-0xe] = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar79)[4] - (0xff < sVar8);
            pcVar69[-0xd] = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar79)[6] - (0xff < sVar10);
            pcVar69[-0xc] = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar79)[8] - (0xff < sVar12);
            pcVar69[-0xb] = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar79)[10] - (0xff < sVar14);
            pcVar69[-10] = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar79)[0xc] - (0xff < sVar16);
            pcVar69[-9] = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar79)[0xe] - (0xff < sVar18);
            pcVar69[-8] = (0 < sVar20) * (sVar20 < 0x100) * ((uint8_t *)(void *)&auVar80)[0] - (0xff < sVar20);
            pcVar69[-7] = (0 < sVar22) * (sVar22 < 0x100) * ((uint8_t *)(void *)&auVar80)[2] - (0xff < sVar22);
            pcVar69[-6] = (0 < sVar24) * (sVar24 < 0x100) * ((uint8_t *)(void *)&auVar80)[4] - (0xff < sVar24);
            pcVar69[-5] = (0 < sVar26) * (sVar26 < 0x100) * ((uint8_t *)(void *)&auVar80)[6] - (0xff < sVar26);
            pcVar69[-4] = (0 < sVar28) * (sVar28 < 0x100) * ((uint8_t *)(void *)&auVar80)[8] - (0xff < sVar28);
            pcVar69[-3] = (0 < sVar30) * (sVar30 < 0x100) * ((uint8_t *)(void *)&auVar80)[10] - (0xff < sVar30);
            pcVar69[-2] = (0 < sVar32) * (sVar32 < 0x100) * ((uint8_t *)(void *)&auVar80)[0xc] - (0xff < sVar32);
            pcVar69[-1] = (0 < sVar34) * (sVar34 < 0x100) * ((uint8_t *)(void *)&auVar80)[0xe] - (0xff < sVar34);
            *pcVar69 = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar75)[0] - (0xff < sVar4);
            pcVar69[1] = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar75)[2] - (0xff < sVar7);
            pcVar69[2] = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar75)[4] - (0xff < sVar9);
            pcVar69[3] = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar75)[6] - (0xff < sVar11);
            pcVar69[4] = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar75)[8] - (0xff < sVar13);
            pcVar69[5] = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar75)[10] - (0xff < sVar15);
            pcVar69[6] = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar75)[0xc] - (0xff < sVar17);
            pcVar69[7] = (0 < sVar19) * (sVar19 < 0x100) * ((uint8_t *)(void *)&auVar75)[0xe] - (0xff < sVar19);
            pcVar69[8] = (0 < sVar21) * (sVar21 < 0x100) * ((uint8_t *)(void *)&auVar81)[0] - (0xff < sVar21);
            pcVar69[9] = (0 < sVar23) * (sVar23 < 0x100) * ((uint8_t *)(void *)&auVar81)[2] - (0xff < sVar23);
            pcVar69[10] = (0 < sVar25) * (sVar25 < 0x100) * ((uint8_t *)(void *)&auVar81)[4] - (0xff < sVar25);
            pcVar69[0xb] = (0 < sVar27) * (sVar27 < 0x100) * ((uint8_t *)(void *)&auVar81)[6] - (0xff < sVar27);
            pcVar69[0xc] = (0 < sVar29) * (sVar29 < 0x100) * ((uint8_t *)(void *)&auVar81)[8] - (0xff < sVar29);
            pcVar69[0xd] = (0 < sVar31) * (sVar31 < 0x100) * ((uint8_t *)(void *)&auVar81)[10] - (0xff < sVar31);
            pcVar69[0xe] = (0 < sVar33) * (sVar33 < 0x100) * ((uint8_t *)(void *)&auVar81)[0xc] - (0xff < sVar33);
            pcVar69[0xf] = (0 < sVar35) * (sVar35 < 0x100) * ((uint8_t *)(void *)&auVar81)[0xe] - (0xff < sVar35);
            lVar72 = lVar72 + -0x20;
            pcVar69 = pcVar69 + 0x20;
          } while (-lVar72 != uVar64);
          if (uVar66 == uVar64) goto LAB_1000d586;
          uVar68 = uVar64;
          if ((uVar66 & 0x1c) == 0) goto LAB_1000d555;
        }
        uVar64 = uVar66 & 0xfffffffffffffffc;
        pcVar69 = local_138 + uVar68;
        lVar72 = -uVar68;
        do {
          uVar2 = *(undefined4 *)(auStack_11b + uVar71 + lVar72);
          auVar75 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                                  CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2))
                                           >> 0x10),(short)uVar2) & 0xffffff00ff00ff);
          auVar75 = pshuflw(auVar75,auVar75,0x1b);
          sVar5 = PF_PART2(auVar75, 0);
          sVar4 = PF_PART2(auVar75, 2);
          sVar6 = PF_PART2(auVar75, 4);
          sVar7 = PF_PART2(auVar75, 6);
          *(uint *)pcVar69 =
               CONCAT13((0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar75)[6] - (0xff < sVar7),
                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar75)[4] - (0xff < sVar6),
                                 CONCAT11((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar75)[2] -
                                          (0xff < sVar4),
                                          (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar75)[0] -
                                          (0xff < sVar5))));
          lVar72 = lVar72 + -4;
          pcVar69 = pcVar69 + 4;
        } while (-lVar72 != uVar64);
        if (uVar66 == uVar64) goto LAB_1000d586;
      }
LAB_1000d555:
      pcVar69 = local_118 + (uVar66 - uVar64) + -1;
      do {
        local_138[uVar64] = *pcVar69;
        uVar64 = uVar64 + 1;
        pcVar69 = pcVar69 + -1;
      } while (uVar66 != uVar64);
    }
LAB_1000d586:
    (*(uint128 *)(void *)local_118) = (uint128)0x0;
    local_108 = 0;
    local_c0 = 1;
    recovered_1000c230((long *)local_118,(long)local_138,uVar66);
    local_48 = PF_PART8(local_118, 8);
    local_60 = (undefined1 *)PF_PART8(local_118, 0);
  }
  else {
    local_48 = 0;
    local_60 = (undefined1 *)0x0;
  }
  (*(uint128 *)(void *)local_118) = (uint128)0x0;
  local_108 = 0;
  recovered_10007130((void *)0x0);
  recovered_10007130((void *)0x0);
  recovered_10007130((void *)0x0);
joined_r0x1000d421:
  if (local_60 == (undefined1 *)0x0) {
    local_70 = (undefined1 *)0x0;
    local_c0 = 4;
    local_60 = recovered_100070d0(1);
    *local_60 = 0;
  }
  uVar66 = (ulong)*(int *)((long)local_68 + 0x1c);
  plVar70 = local_68;
  if ((0 < (long)uVar66) && (lVar72 = uVar66 - local_48, local_48 <= uVar66 && lVar72 != 0)) {
    do {
      plVar65 = (long *)plVar70[1];
      if ((long *)plVar70[1] == (long *)0x0) {
        plVar65 = local_58;
      }
      if ((uint *)*plVar65 != (uint *)0x0) {
        local_118[0] = (char)plVar70[4];
        local_c0 = 5;
        local_50 = lVar72;
        recovered_10006700(local_118,1,1,(uint *)*plVar65);
        plVar70 = local_68;
        lVar72 = local_50;
      }
      lVar72 = lVar72 + -1;
    } while (lVar72 != 0);
  }
  *(undefined4 *)((long)plVar70 + 0x1c) = 0;
  if ((long *)plVar70[1] != (long *)0x0) {
    local_58 = (long *)plVar70[1];
  }
  if ((local_48 != 0) && ((uint *)*local_58 != (uint *)0x0)) {
    local_70 = local_60;
    local_c0 = 6;
    recovered_10006700(local_60,1,local_48,(uint *)*local_58);
  }
  recovered_10007130(local_60);
  recovered_10007620(&local_c8);
  return local_68;
}

#undef DAT_10010c44
#undef LAB_1000d715
#undef str_10010a2e
#undef str_10010a3f
#undef local_138
#undef local_118
#undef local_108
#undef local_d0
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
#undef local_40
#undef local_31
#undef auStack_11b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7b0
 */

void recovered_1000d7b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7c0
 */

void recovered_1000d7c0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#define local_40 (*(void * *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 24))
#define uStack_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7d0
 */

void recovered_1000d7d0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar4;
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 < uVar4) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar4);
    uVar3 = *(ulong *)(param_2 + 0x10);
    uVar4 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar3 < uVar4) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar4);
  }
  lVar2 = *(long *)(param_2 + 8);
  lVar1 = lVar2 + uVar4 * 0x28;
  recovered_100087e0((long *)&local_40,(char *)(lVar2 + uVar4 * 0x28 + -0x28));
  *(undefined1 *)(lVar2 + -0x28 + uVar4 * 0x28) = 1;
  if ((void **)(lVar2 + uVar4 * 0x28 + -0x20) != &local_40) {
    recovered_10007130(*(void **)(lVar1 + -0x20));
    *(void **)(lVar1 + -0x20) = local_40;
    *(undefined8 *)(lVar1 + -0x18) = uStack_38;
    *(undefined8 *)(lVar1 + -0x10) = uStack_30;
    local_40 = (void *)0x0;
    uStack_38 = 0;
    uStack_30 = 0;
  }
  *(undefined8 *)(lVar1 + -8) = 0;
  recovered_10007130(local_40);
  return;
}

#undef local_40
#undef uStack_38
#undef uStack_30

#undef PTR_recovered_1000d7b0_100110b8
#define PTR_recovered_1000d7b0_100110b8 (*(void * *)(((uintptr_t)pf_module_state + 0x127cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8c0
 */

void recovered_1000d8c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000d7b0_100110b8;
  return;
}

#undef PTR_recovered_1000d7b0_100110b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8e0
 */

void recovered_1000d8e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8f0
 */

void recovered_1000d8f0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d900
 */

void recovered_1000d900(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  longlong lVar4;
  ulong uVar5;

  uVar5 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar5;
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 < uVar5) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
    uVar3 = *(ulong *)(param_2 + 0x10);
    uVar5 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar3 < uVar5) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
  }
  lVar1 = *(long *)(param_2 + 8);
  lVar4 = recovered_10008a20((void *)(lVar1 + uVar5 * 0x28 + -0x28));
  *(undefined1 *)(lVar1 + -0x28 + uVar5 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar5 * 0x28) = lVar4;
  *(undefined8 *)(lVar1 + -0x18 + uVar5 * 0x28) = 0;
  puVar2 = *(undefined1 **)(lVar1 + -0x20 + uVar5 * 0x28);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return;
}


#undef PTR_recovered_1000d8e0_10011100
#define PTR_recovered_1000d8e0_10011100 (*(void * *)(((uintptr_t)pf_module_state + 0x12c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9a0
 */

void recovered_1000d9a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000d8e0_10011100;
  return;
}

#undef PTR_recovered_1000d8e0_10011100

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9c0
 */

void recovered_1000d9c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9d0
 */

void recovered_1000d9d0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c54
#define DAT_10010c54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe18U)))
#undef LAB_1000db39
#define LAB_1000db39 (*(uint8_t *)(0x1000db39U))
#define local_38 (*(undefined8 *)(frame + 152))
#define uStack_40 (*(undefined8 *)(frame + 144))
#define local_b8 (*(undefined8 *)(frame + 24))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 (*)[8])(frame + 112))
#define local_58 (*(void * *)(frame + 120))
#define uStack_50 (*(undefined8 *)(frame + 128))
#define local_48 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9e0
 */

void recovered_1000d9e0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  lVar1 = *(long *)(param_2 + 0x50);
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c54;
  local_80 = &LAB_1000db39;
  recovered_10007600(&local_b8);
  if (lVar1 == 0) {
    puVar2 = (undefined1 *)*param_3;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_60[0] = 1;
    local_38 = param_2;
    if (local_60 != puVar2) {
      puVar3 = &DAT_10010a26;
      if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(puVar2 + 8);
      }
      local_b0 = 1;
      recovered_1000c230((long *)&local_58,(long)puVar3,*(ulong *)(puVar2 + 0x10));
    }
    uStack_40 = 0;
    local_b0 = 2;
    recovered_1000fd10((long *)(local_38 + 8),local_60);
    *(undefined8 *)(local_38 + 0x50) = *(undefined8 *)(local_38 + 0x10);
    recovered_10007130(local_58);
  }
  else {
    local_b0 = 0xffffffff;
    puVar3 = (undefined1 *)recovered_1000bff0(param_2);
    puVar2 = (undefined1 *)*param_3;
    *puVar3 = 1;
    if (puVar3 != puVar2) {
      puVar4 = &DAT_10010a26;
      if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(puVar2 + 8);
      }
      local_b0 = 0xffffffff;
      recovered_1000c230((long *)(puVar3 + 8),(long)puVar4,*(ulong *)(puVar2 + 0x10));
    }
    *(undefined8 *)(puVar3 + 0x20) = 0;
  }
  recovered_10007620(&local_b8);
  return;
}

#undef DAT_10010a26
#undef DAT_10010c54
#undef LAB_1000db39
#undef local_38
#undef uStack_40
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef uStack_50
#undef local_48

#undef PTR_recovered_1000d9c0_10011148
#define PTR_recovered_1000d9c0_10011148 (*(void * *)(((uintptr_t)pf_module_state + 0x130cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db80
 */

void recovered_1000db80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000d9c0_10011148;
  return;
}

#undef PTR_recovered_1000d9c0_10011148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dba0
 */

void recovered_1000dba0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbb0
 */

void recovered_1000dbb0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010c5c
#define DAT_10010c5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe20U)))
#undef LAB_1000dcc3
#define LAB_1000dcc3 (*(uint8_t *)(0x1000dcc3U))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 (*)[8])(frame + 112))
#define local_58 (*(void * *)(frame + 120))
#define local_48 (*(undefined8 *)(frame + 136))
#define local_40 (*(undefined8 *)(frame + 144))
#define local_38 (*(undefined8 *)(frame + 152))
#define local_b8 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 128))
#define local_b0 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbc0
 */

void recovered_1000dbc0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  lVar1 = *(long *)(param_2 + 0x50);
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c5c;
  local_80 = &LAB_1000dcc3;
  recovered_10007600(&local_b8);
  if (lVar1 == 0) {
    local_40 = *(undefined8 *)(*param_3 + 0x20);
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_60[0] = 2;
    local_b0 = 1;
    local_38 = param_2;
    recovered_1000fd10((long *)(param_2 + 8),local_60);
    *(undefined8 *)(local_38 + 0x50) = *(undefined8 *)(local_38 + 0x10);
    recovered_10007130(local_58);
  }
  else {
    local_b0 = 0xffffffff;
    puVar3 = (undefined1 *)recovered_1000bff0(param_2);
    uVar2 = *(undefined8 *)(*param_3 + 0x20);
    *puVar3 = 2;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    if (*(undefined1 **)(puVar3 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar3 + 8) = 0;
    }
  }
  recovered_10007620(&local_b8);
  return;
}

#undef DAT_10010c5c
#undef LAB_1000dcc3
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef local_b8
#undef uStack_50
#undef local_b0

#undef PTR_recovered_1000dba0_10011190
#define PTR_recovered_1000dba0_10011190 (*(void * *)(((uintptr_t)pf_module_state + 0x1354U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd10
 */

void recovered_1000dd10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000dba0_10011190;
  return;
}

#undef PTR_recovered_1000dba0_10011190

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd30
 */

void recovered_1000dd30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd40
 */

void recovered_1000dd40(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c64
#define DAT_10010c64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe28U)))
#undef LAB_1000dedd
#define LAB_1000dedd (*(uint8_t *)(0x1000deddU))
#define local_38 (*(undefined8 *)(frame + 152))
#define local_b8 (*(undefined8 *)(frame + 24))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(undefined1 (*)[8])(frame + 112))
#define local_58 (*(undefined1 * *)(frame + 120))
#define local_48 (*(undefined8 *)(frame + 136))
#define uStack_50 (*(ulong *)(frame + 128))
#define local_40 (*(undefined8 *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd50
 */

void recovered_1000dd50(undefined8 param_1,undefined1 *param_2,long *param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  uVar5 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  uVar1 = *(ulong *)(param_2 + 0x10);
  local_98 = recovered_10007080;
  local_90 = &DAT_10010c64;
  local_80 = &LAB_1000dedd;
  recovered_10007600(&local_b8);
  if (uVar1 < uVar5) {
    local_b0 = 0xffffffff;
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
  }
  lVar2 = *(long *)(param_2 + 8);
  local_60[0] = *(undefined1 *)(lVar2 + -0x28 + uVar5 * 0x28);
  local_58 = (undefined1 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  puVar3 = *(undefined1 **)(lVar2 + -0x20 + uVar5 * 0x28);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_10010a26;
  }
  local_b0 = 0xffffffff;
  recovered_1000c230((long *)&local_58,(long)puVar3,*(ulong *)(lVar2 + -0x18 + uVar5 * 0x28));
  local_40 = *(undefined8 *)(lVar2 + -8 + uVar5 * 0x28);
  if (*(long *)(param_2 + 0x50) == 0) {
    local_b0 = 1;
    local_38 = param_2;
    recovered_1000fbc0((long *)(param_2 + 8),local_60);
    *(undefined8 *)(local_38 + 0x50) = *(undefined8 *)(local_38 + 0x10);
  }
  else {
    local_b0 = 2;
    puVar3 = (undefined1 *)recovered_1000bff0((long)param_2);
    *puVar3 = local_60[0];
    if (puVar3 != local_60) {
      puVar4 = &DAT_10010a26;
      if (local_58 != (undefined1 *)0x0) {
        puVar4 = local_58;
      }
      local_b0 = 3;
      local_38 = puVar3;
      recovered_1000c230((long *)(puVar3 + 8),(long)puVar4,uStack_50);
      puVar3 = local_38;
    }
    *(undefined8 *)(puVar3 + 0x20) = local_40;
  }
  recovered_10007130(local_58);
  recovered_10007620(&local_b8);
  return;
}

#undef DAT_10010a26
#undef DAT_10010c64
#undef LAB_1000dedd
#undef local_38
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef uStack_50
#undef local_40

#undef PTR_recovered_1000dd30_100111d8
#define PTR_recovered_1000dd30_100111d8 (*(void * *)(((uintptr_t)pf_module_state + 0x139cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df30
 */

void recovered_1000df30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000dd30_100111d8;
  return;
}

#undef PTR_recovered_1000dd30_100111d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df50
 */

void recovered_1000df50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df60
 */

void recovered_1000df60(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df70
 */

void recovered_1000df70(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 uVar10;
  undefined8 uVar9;
  ulong uVar11;
  char cVar12;
  long lVar13;

  puVar2 = (uint *)*param_2;
  lVar3 = *param_3;
  lVar4 = *(long *)(lVar3 + 0x20);
  lVar5 = *(long *)(lVar3 + 0x58);
  lVar8 = -0x80000000;
  if (-0x80000000 < lVar4) {
    lVar8 = lVar4;
  }
  if (0x7ffffffe < lVar8) {
    lVar8 = 0x7fffffff;
  }
  lVar13 = -0x80000000;
  if (-0x80000000 < lVar5) {
    lVar13 = lVar5;
  }
  if (0x7ffffffe < lVar13) {
    lVar13 = 0x7fffffff;
  }
  if (((puVar2 != (uint *)0x0) && (lVar6 = *(long *)(puVar2 + 2), lVar6 != 0)) &&
     (uVar1 = *puVar2, 0 < (int)uVar1)) {
    if ((((uint)lVar13 <= puVar2[1]) && ((uint)lVar8 <= uVar1)) &&
       ((0 < lVar5 && ((0 < lVar4 && (0 < (int)puVar2[1])))))) {
      uVar9 = *(undefined8 *)(lVar3 + 0x90);
      uVar11 = (ulong)(((uint)lVar8 + uVar1 * ((uint)lVar13 - 1)) - 1);
      lVar4 = uVar11 * 4;
      lVar3 = uVar11 * 4 + 1;
      cVar12 = (char)((ulong)uVar9 >> 0x18);
      uVar10 = (undefined1)((ulong)uVar9 >> 8);
      uVar7 = (undefined1)((ulong)uVar9 >> 0x10);
      if (cVar12 == '\0') {
        *(undefined1 *)(lVar6 + lVar4) = uVar7;
        *(undefined1 *)(*(long *)(puVar2 + 2) + lVar3) = uVar10;
        *(char *)(*(long *)(puVar2 + 2) + 2 + lVar4) = (char)uVar9;
        uVar9 = 0xff;
      }
      else {
        *(char *)(lVar6 + lVar4) = cVar12;
        *(undefined1 *)(*(long *)(puVar2 + 2) + lVar3) = uVar7;
        *(undefined1 *)(*(long *)(puVar2 + 2) + 2 + lVar4) = uVar10;
      }
      *(char *)(*(long *)(puVar2 + 2) + 3 + lVar4) = (char)uVar9;
    }
  }
  return;
}


#undef PTR_recovered_1000df50_10011220
#define PTR_recovered_1000df50_10011220 (*(void * *)(((uintptr_t)pf_module_state + 0x13e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e080
 */

void recovered_1000e080(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000df50_10011220;
  return;
}

#undef PTR_recovered_1000df50_10011220

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0a0
 */

void recovered_1000e0a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0b0
 */

void recovered_1000e0b0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c70
#define DAT_10010c70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe34U)))
#undef LAB_1000e63b
#define LAB_1000e63b (*(uint8_t *)(0x1000e63bU))
#define auStack_d8 (*(undefined1 (*)[8])(frame + 24))
#define local_d0 (*(undefined8 *)(frame + 32))
#define local_c8 (*(undefined4 *)(frame + 40))
#define local_b0 (*(code * *)(frame + 64))
#define local_a8 (*(undefined * *)(frame + 72))
#define local_a0 (*(undefined1 * *)(frame + 80))
#define local_98 (*(undefined1 * *)(frame + 88))
#define local_90 (*(undefined1 * *)(frame + 96))
#define local_78 (*(char * *)(frame + 120))
#define local_70 (*(byte * *)(frame + 128))
#define local_68 (*(long * *)(frame + 136))
#define local_60 (*(undefined8 * *)(frame + 144))
#define local_58 (*(char * *)(frame + 152))
#define local_50 (*(byte * *)(frame + 160))
#define local_48 (*(ulong *)(frame + 168))
#define local_40 (*(byte * *)(frame + 176))
#define local_38 (*(undefined8 *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0c0
 */

void recovered_1000e0c0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined1 uVar18;
  uint uVar17;
  long lVar19;
  undefined1 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;

  local_a0 = (undefined1 *)((long)(uintptr_t)(frame + 240) + -8);
  local_90 = auStack_d8;
  pbVar11 = (byte *)*param_3;
  pbVar22 = *(byte **)(pbVar11 + 0x80);
  local_b0 = recovered_10007080;
  local_a8 = &DAT_10010c70;
  local_98 = &LAB_1000e63b;
  recovered_10007600(&local_d0);
  if (pbVar22 == (byte *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    local_c8 = 1;
    local_68 = param_3;
    local_60 = param_2;
    local_40 = pbVar11;
    local_38 = pbVar22;
    pcVar10 = recovered_100070d0((long)(pbVar22 + 1));
    *pcVar10 = '\0';
    recovered_10007130((void *)0x0);
    pbVar11 = &DAT_10010a26;
    if (*(byte **)(local_40 + 0x78) != (byte *)0x0) {
      pbVar11 = *(byte **)(local_40 + 0x78);
    }
    if (*(long *)(local_40 + 0x80) != 0) {
      pbVar13 = pbVar11 + *(long *)(local_40 + 0x80);
      pbVar22 = (byte *)0x0;
      pbVar16 = local_38;
      local_50 = pbVar13;
      do {
        bVar12 = *pbVar11;
        uVar15 = (ulong)bVar12;
        if ((0x23 < uVar15) || ((0x900002600U >> (uVar15 & 0x3f) & 1) == 0)) {
          if (pbVar22 == pbVar16) {
            pbVar21 = (byte *)((long)pbVar22 * 2);
            if (pbVar22 == (byte *)0x0) {
              pbVar21 = (byte *)0x10;
            }
            if (pbVar21 <= pbVar22) goto LAB_1000e28a;
            local_c8 = 2;
            local_78 = pcVar10;
            local_70 = pbVar21;
            local_58 = pcVar10;
            local_48 = uVar15;
            local_40 = pbVar22;
            local_38 = pbVar11;
            pcVar10 = recovered_100070d0((ulong)pbVar21 | 1);
            pbVar22 = local_40;
            *pcVar10 = '\0';
            if (local_40 != (byte *)0x0) {
              if (local_40 < (byte *)0x4) {
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar11 = (byte *)0x0;
                if (0x1f < (ulong)((long)pcVar10 - (long)local_78)) {
                  if (local_40 < (byte *)0x20) {
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    pbVar11 = (byte *)((ulong)local_40 & 0xffffffffffffffe0);
                    pbVar13 = (byte *)0x0;
                    do {
                      uVar7 = *(undefined8 *)(local_78 + (long)pbVar13 + 8);
                      uVar8 = *(undefined8 *)(local_78 + 0x10 + (long)pbVar13);
                      uVar9 = *(undefined8 *)(local_78 + 0x10 + (long)pbVar13 + 8);
                      *(undefined8 *)(pcVar10 + (long)pbVar13) =
                           *(undefined8 *)(local_78 + (long)pbVar13);
                      *(undefined8 *)(pcVar10 + (long)pbVar13 + 8) = uVar7;
                      *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar13) = uVar8;
                      *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar13 + 8) = uVar9;
                      pbVar13 = pbVar13 + 0x20;
                    } while (pbVar11 != pbVar13);
                    if (local_40 == pbVar11) goto LAB_1000e1a2;
                    pbVar13 = pbVar11;
                    if (((ulong)local_40 & 0x1c) == 0) goto LAB_1000e358;
                  }
                  pbVar11 = (byte *)((ulong)local_40 & 0xfffffffffffffffc);
                  do {
                    *(undefined4 *)(pcVar10 + (long)pbVar13) =
                         *(undefined4 *)(local_78 + (long)pbVar13);
                    pbVar13 = pbVar13 + 4;
                  } while (pbVar11 != pbVar13);
                  if (local_40 == pbVar11) goto LAB_1000e1a2;
                }
              }
LAB_1000e358:
              uVar15 = (ulong)local_40 & 3;
              pbVar13 = pbVar11;
              if (uVar15 != 0) {
                do {
                  pcVar10[(long)pbVar13] = local_78[(long)pbVar13];
                  pbVar13 = pbVar13 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if ((ulong)((long)pbVar11 - (long)local_40) < 0xfffffffffffffffd) {
                do {
                  pcVar10[(long)pbVar13] = local_78[(long)pbVar13];
                  (pcVar10 + 1)[(long)pbVar13] = (local_78 + 1)[(long)pbVar13];
                  (pcVar10 + 2)[(long)pbVar13] = (local_78 + 2)[(long)pbVar13];
                  (pcVar10 + 3)[(long)pbVar13] = (local_78 + 3)[(long)pbVar13];
                  pbVar13 = pbVar13 + 4;
                } while (local_40 != pbVar13);
              }
            }
LAB_1000e1a2:
            pcVar10[(long)local_40] = '\0';
            recovered_10007130(local_78);
            bVar12 = (byte)local_48;
            pbVar13 = local_50;
            pbVar11 = local_38;
            pbVar16 = local_70;
          }
          else {
LAB_1000e28a:
            if (pcVar10 == (char *)0x0) {
              local_58 = (char *)0x0;
              local_c8 = 3;
              local_48 = uVar15;
              local_40 = pbVar22;
              local_38 = pbVar11;
              pcVar10 = recovered_100070d0(1);
              *pcVar10 = '\0';
              pbVar16 = (byte *)0x0;
              bVar12 = (byte)local_48;
              pbVar13 = local_50;
              pbVar11 = local_38;
              pbVar22 = local_40;
            }
          }
          pcVar10[(long)pbVar22] = bVar12;
          (pcVar10 + 1)[(long)pbVar22] = '\0';
          pbVar22 = pbVar22 + 1;
        }
        pbVar11 = pbVar11 + 1;
      } while (pbVar11 != pbVar13);
      if ((byte *)0x1 < pbVar22) {
        if ((*pcVar10 == '0') && ((byte)(pcVar10[1] | 0x20U) == 0x78)) {
          if (pbVar22 != (byte *)0x2) {
            pbVar11 = pbVar22 + -2;
            if (pbVar11 < (byte *)0x4) {
              pbVar13 = (byte *)0x0;
            }
            else {
              if (pbVar11 < (byte *)0x20) {
                pbVar16 = (byte *)0x0;
              }
              else {
                pbVar13 = (byte *)((ulong)pbVar11 & 0xffffffffffffffe0);
                pbVar16 = (byte *)0x0;
                do {
                  uVar7 = *(undefined8 *)(pcVar10 + 2 + (long)pbVar16 + 8);
                  uVar8 = *(undefined8 *)(pcVar10 + 0x12 + (long)pbVar16);
                  uVar9 = *(undefined8 *)(pcVar10 + 0x12 + (long)pbVar16 + 8);
                  *(undefined8 *)(pcVar10 + (long)pbVar16) =
                       *(undefined8 *)(pcVar10 + 2 + (long)pbVar16);
                  *(undefined8 *)(pcVar10 + (long)pbVar16 + 8) = uVar7;
                  *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar16) = uVar8;
                  *(undefined8 *)(pcVar10 + 0x10 + (long)pbVar16 + 8) = uVar9;
                  pbVar16 = pbVar16 + 0x20;
                } while (pbVar13 != pbVar16);
                if (pbVar11 == pbVar13) goto LAB_1000e4b2;
                pbVar16 = pbVar13;
                if (((ulong)pbVar11 & 0x1c) == 0) goto LAB_1000e497;
              }
              pbVar13 = (byte *)((ulong)pbVar11 & 0xfffffffffffffffc);
              do {
                *(undefined4 *)(pcVar10 + (long)pbVar16) =
                     *(undefined4 *)(pcVar10 + 2 + (long)pbVar16);
                pbVar16 = pbVar16 + 4;
              } while (pbVar13 != pbVar16);
              if (pbVar11 == pbVar13) goto LAB_1000e4b2;
            }
LAB_1000e497:
            pbVar13 = pbVar13 + 2;
            do {
              (pcVar10 + -2)[(long)pbVar13] = pcVar10[(long)pbVar13];
              pbVar13 = pbVar13 + 1;
            } while (pbVar22 != pbVar13);
          }
LAB_1000e4b2:
          (pcVar10 + -2)[(long)pbVar22] = '\0';
          pbVar22 = pbVar22 + -2;
        }
        if ((pbVar22 == (byte *)0x6) || (pbVar22 == (byte *)0x8)) {
          pbVar11 = (byte *)0x0;
          uVar23 = 0;
          do {
            cVar1 = pcVar10[(long)pbVar11];
            bVar12 = cVar1 - 0x30;
            if (9 < bVar12) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                bVar12 = cVar1 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000e400;
                bVar12 = cVar1 - 0x37;
              }
            }
            uVar17 = uVar23 << 4;
            uVar23 = bVar12 | uVar17;
            pbVar11 = pbVar11 + 1;
          } while (pbVar22 != pbVar11);
          recovered_10007130(pcVar10);
          puVar3 = (uint *)*local_60;
          lVar4 = *(long *)(*local_68 + 0x20);
          lVar5 = *(long *)(*local_68 + 0x58);
          lVar14 = -0x80000000;
          if (-0x80000000 < lVar4) {
            lVar14 = lVar4;
          }
          if (0x7ffffffe < lVar14) {
            lVar14 = 0x7fffffff;
          }
          lVar19 = -0x80000000;
          if (-0x80000000 < lVar5) {
            lVar19 = lVar5;
          }
          if (0x7ffffffe < lVar19) {
            lVar19 = 0x7fffffff;
          }
          if (((puVar3 != (uint *)0x0) && (lVar6 = *(long *)(puVar3 + 2), lVar6 != 0)) &&
             (uVar2 = *puVar3, 0 < (int)uVar2)) {
            if ((((uint)lVar19 <= puVar3[1]) && ((uint)lVar14 <= uVar2)) &&
               ((0 < lVar5 && ((0 < lVar4 && (0 < (int)puVar3[1])))))) {
              uVar15 = (ulong)(((uint)lVar14 + uVar2 * ((uint)lVar19 - 1)) - 1);
              lVar5 = uVar15 * 4;
              lVar4 = uVar15 * 4 + 1;
              uVar18 = (undefined1)(uVar17 >> 8);
              uVar20 = (undefined1)(uVar17 >> 0x10);
              if (uVar17 < 0x1000000) {
                *(undefined1 *)(lVar6 + lVar5) = uVar20;
                *(undefined1 *)(*(long *)(puVar3 + 2) + lVar4) = uVar18;
                *(char *)(*(long *)(puVar3 + 2) + 2 + lVar5) = (char)uVar23;
                uVar23 = 0xff;
              }
              else {
                *(char *)(lVar6 + lVar5) = (char)(uVar17 >> 0x18);
                *(undefined1 *)(*(long *)(puVar3 + 2) + lVar4) = uVar20;
                *(undefined1 *)(*(long *)(puVar3 + 2) + 2 + lVar5) = uVar18;
              }
              *(char *)(*(long *)(puVar3 + 2) + 3 + lVar5) = (char)uVar23;
            }
          }
          goto LAB_1000e408;
        }
      }
    }
  }
LAB_1000e400:
  recovered_10007130(pcVar10);
LAB_1000e408:
  recovered_10007620(&local_d0);
  return;
}

#undef DAT_10010a26
#undef DAT_10010c70
#undef LAB_1000e63b
#undef auStack_d8
#undef local_d0
#undef local_c8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef PTR_recovered_1000e0a0_10011268
#define PTR_recovered_1000e0a0_10011268 (*(void * *)(((uintptr_t)pf_module_state + 0x142cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6a0
 */

void recovered_1000e6a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000e0a0_10011268;
  return;
}

#undef PTR_recovered_1000e0a0_10011268

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6c0
 */

void recovered_1000e6c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6d0
 */

void recovered_1000e6d0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6e0
 */

void recovered_1000e6e0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = *(long *)(*param_3 + 0x20);
  lVar1 = *(long *)(*param_3 + 0x58);
  if (lVar2 < -0x7fffffff) {
    lVar2 = (-2147483647L-1L);
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  lVar3 = (-2147483647L-1L);
  if ((-2147483647L-1L) < lVar1) {
    lVar3 = lVar1;
  }
  if (0x7ffffffe < lVar3) {
    lVar3 = 0x7fffffff;
  }
  *(int *)(param_2 + 0x38) = (int)lVar2;
  *(int *)(param_2 + 0x3c) = (int)lVar3;
  return;
}


#undef PTR_recovered_1000e6c0_100112b0
#define PTR_recovered_1000e6c0_100112b0 (*(void * *)(((uintptr_t)pf_module_state + 0x1474U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e730
 */

void recovered_1000e730(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000e6c0_100112b0;
  return;
}

#undef PTR_recovered_1000e6c0_100112b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e750
 */

void recovered_1000e750(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e760
 */

void recovered_1000e760(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e770
 */

void recovered_1000e770(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = 1;
  if (1 < (long)*(ulong *)(*param_3 + 0x20)) {
    uVar4 = *(ulong *)(*param_3 + 0x20);
  }
  *(ulong *)(param_2 + 0x50) = uVar4;
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 < uVar4) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar4);
    uVar3 = *(ulong *)(param_2 + 0x10);
  }
  if (uVar3 < uVar4) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar4);
  }
  lVar1 = *(long *)(param_2 + 8);
  *(undefined1 *)(lVar1 + -0x28 + uVar4 * 0x28) = 0;
  *(undefined8 *)(lVar1 + -0x18 + uVar4 * 0x28) = 0;
  puVar2 = *(undefined1 **)(lVar1 + -0x20 + uVar4 * 0x28);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  *(undefined8 *)(lVar1 + uVar4 * 0x28 + -8) = 0;
  return;
}


#undef PTR_recovered_1000e750_100112f8
#define PTR_recovered_1000e750_100112f8 (*(void * *)(((uintptr_t)pf_module_state + 0x14bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e800
 */

void recovered_1000e800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000e750_100112f8;
  return;
}

#undef PTR_recovered_1000e750_100112f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e820
 */

void recovered_1000e820(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e830
 */

void recovered_1000e830(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c7c
#define DAT_10010c7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe40U)))
#undef LAB_1000ea70
#define LAB_1000ea70 (*(uint8_t *)(0x1000ea70U))
#define uStack_58 (*(undefined8 *)(frame + 168))
#define uStack_40 (*(undefined8 *)(frame + 192))
#define uStack_48 (*(undefined8 *)(frame + 184))
#define local_e0 (*(undefined1 * *)(frame + 32))
#define local_d8 (*(ulong *)(frame + 40))
#define local_c8 (*(undefined8 *)(frame + 56))
#define local_c0 (*(undefined4 *)(frame + 64))
#define local_a8 (*(code * *)(frame + 88))
#define local_a0 (*(undefined * *)(frame + 96))
#define local_98 (*(undefined1 * *)(frame + 104))
#define local_90 (*(undefined1 * *)(frame + 112))
#define local_88 (*(undefined1 * *)(frame + 120))
#define local_70 (*(long *)(frame + 144))
#define auStack_e8 (*(undefined1 (*)[8])(frame + 24))
#define local_68 (*(void * *)(frame + 152))
#define local_60 (*(undefined8 *)(frame + 160))
#define local_50 (*(void * *)(frame + 176))
#define local_38 (*(undefined8 *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e840
 */

void recovered_1000e840(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 256) + -8);
  local_88 = auStack_e8;
  lVar6 = *param_3;
  uVar7 = *(long *)(lVar6 + 0x28) + (ulong)(*(long *)(lVar6 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar7;
  uVar5 = *(ulong *)(param_2 + 0x10);
  local_a8 = recovered_10007080;
  local_a0 = &DAT_10010c7c;
  local_90 = &LAB_1000ea70;
  local_38 = param_2;
  recovered_10007600(&local_c8);
  if (uVar5 < uVar7) {
    local_c0 = 0xffffffff;
    recovered_1000b9a0((long *)(param_2 + 8),uVar7);
    lVar6 = *param_3;
    uVar5 = *(ulong *)(local_38 + 0x10);
    uVar7 = *(long *)(lVar6 + 0x28) + (ulong)(*(long *)(lVar6 + 0x28) == 0);
  }
  lVar1 = local_38;
  plVar3 = (long *)(param_2 + 8);
  if (uVar5 < uVar7) {
    local_c0 = 0xffffffff;
    recovered_1000b9a0(plVar3,uVar7);
    lVar6 = *param_3;
    uVar5 = *(ulong *)(lVar1 + 0x10);
  }
  lVar2 = *plVar3;
  local_70 = uVar7 * 5;
  lVar1 = lVar2 + uVar7 * 0x28;
  uVar7 = *(long *)(lVar6 + 0x60) + (ulong)(*(long *)(lVar6 + 0x60) == 0);
  local_38 = lVar2;
  if (uVar5 < uVar7) {
    local_c0 = 0xffffffff;
    recovered_1000b9a0(plVar3,uVar7);
    lVar2 = *plVar3;
  }
  local_c0 = 0xffffffff;
  recovered_100087e0((long *)&local_e0,(char *)(lVar2 + uVar7 * 0x28 + -0x28));
  local_c0 = 1;
  recovered_100087e0((long *)&local_68,(char *)(lVar1 + -0x28));
  local_50 = local_68;
  uStack_48 = local_60;
  uStack_40 = uStack_58;
  local_68 = (void *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  puVar4 = &DAT_10010a26;
  if (local_e0 != (undefined1 *)0x0) {
    puVar4 = local_e0;
  }
  local_c0 = 2;
  recovered_1000eb00((long *)&local_50,(long)puVar4,local_d8);
  lVar6 = local_38 + local_70 * 8;
  *(undefined1 *)(lVar6 + -0x28) = 1;
  if ((void **)(lVar6 + -0x20) != &local_50) {
    recovered_10007130(*(void **)(lVar6 + -0x20));
    *(void **)(lVar6 + -0x20) = local_50;
    *(undefined8 *)(lVar6 + -0x18) = uStack_48;
    *(undefined8 *)(lVar6 + -0x10) = uStack_40;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  *(undefined8 *)(lVar6 + -8) = 0;
  recovered_10007130(local_50);
  recovered_10007130(local_68);
  recovered_10007130(local_e0);
  recovered_10007620(&local_c8);
  return;
}

#undef DAT_10010a26
#undef DAT_10010c7c
#undef LAB_1000ea70
#undef uStack_58
#undef uStack_40
#undef uStack_48
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef auStack_e8
#undef local_68
#undef local_60
#undef local_50
#undef local_38

#undef PTR_recovered_1000e820_10011340
#define PTR_recovered_1000e820_10011340 (*(void * *)(((uintptr_t)pf_module_state + 0x1504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eae0
 */

void recovered_1000eae0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000e820_10011340;
  return;
}

#undef PTR_recovered_1000e820_10011340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb00
 */

long * recovered_1000eb00(long *param_1,long param_2,ulong param_3)

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
LAB_1000eb40:
    if (uVar13 != uVar6) goto code_r0x1000eb45;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_1000eed0;
    puVar8 = recovered_100070d0(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_1000eeaf;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_1000ee45;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_1000ee1a;
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
LAB_1000ee1a:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000eeaf;
      }
LAB_1000ee45:
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
LAB_1000eeaf:
    puVar8[uVar9] = 0;
    recovered_10007130(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_1000eed0:
    if (param_3 == 0) goto LAB_1000edbe;
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
    goto LAB_1000edbb;
  }
  uVar15 = param_1[1];
LAB_1000eb53:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_1000ed16;
  puVar7 = recovered_100070d0(uVar15 + 1);
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
        if (uVar6 == uVar13) goto LAB_1000ecff;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_1000ec95;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_1000ecff;
    }
LAB_1000ec95:
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
LAB_1000ecff:
  puVar7[uVar6] = 0;
  recovered_10007130(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_1000ed16:
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
LAB_1000edbb:
  puVar8 = (undefined1 *)*param_1;
LAB_1000edbe:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x1000eb45:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_1000eb53;
  goto LAB_1000eb40;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efa0
 */

void recovered_1000efa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efb0
 */

void recovered_1000efb0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_10010c84
#define DAT_10010c84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe48U)))
#undef LAB_1000f174
#define LAB_1000f174 (*(uint8_t *)(0x1000f174U))
#define uStack_50 (*(undefined8 *)(frame + 144))
#define uStack_38 (*(undefined8 *)(frame + 168))
#define uStack_40 (*(undefined8 *)(frame + 160))
#define local_c8 (*(undefined8 *)(frame + 24))
#define local_c0 (*(undefined4 *)(frame + 32))
#define local_a8 (*(code * *)(frame + 56))
#define local_a0 (*(undefined * *)(frame + 64))
#define local_98 (*(undefined1 * *)(frame + 72))
#define local_90 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 * *)(frame + 88))
#define local_70 (*(long *)(frame + 112))
#define local_68 (*(long *)(frame + 120))
#define local_60 (*(void * *)(frame + 128))
#define local_58 (*(undefined8 *)(frame + 136))
#define local_48 (*(void * *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efc0
 */

void recovered_1000efc0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 224) + -8);
  local_88 = (undefined1 *)&local_c8;
  uVar5 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar5;
  uVar4 = *(ulong *)(param_2 + 0x10);
  local_a8 = recovered_10007080;
  local_a0 = &DAT_10010c84;
  local_90 = &LAB_1000f174;
  recovered_10007600(&local_c8);
  if (uVar4 < uVar5) {
    local_c0 = 0xffffffff;
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
    uVar4 = *(ulong *)(param_2 + 0x10);
    uVar5 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar4 < uVar5) {
    local_c0 = 0xffffffff;
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
  }
  local_70 = *(long *)(param_2 + 8);
  local_68 = uVar5 * 5;
  local_c0 = 0xffffffff;
  recovered_100087e0((long *)&local_60,(char *)(local_70 + uVar5 * 0x28 + -0x28));
  local_48 = local_60;
  uStack_40 = local_58;
  uStack_38 = uStack_50;
  local_60 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  puVar2 = *(undefined1 **)(*param_3 + 0x40);
  puVar3 = &DAT_10010a26;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  local_c0 = 1;
  recovered_1000eb00((long *)&local_48,(long)puVar3,*(ulong *)(*param_3 + 0x48));
  lVar1 = local_70 + local_68 * 8;
  *(undefined1 *)(lVar1 + -0x28) = 1;
  if ((void **)(lVar1 + -0x20) != &local_48) {
    recovered_10007130(*(void **)(lVar1 + -0x20));
    *(void **)(lVar1 + -0x20) = local_48;
    *(undefined8 *)(lVar1 + -0x18) = uStack_40;
    *(undefined8 *)(lVar1 + -0x10) = uStack_38;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  *(undefined8 *)(lVar1 + -8) = 0;
  recovered_10007130(local_48);
  recovered_10007130(local_60);
  recovered_10007620(&local_c8);
  return;
}

#undef DAT_10010a26
#undef DAT_10010c84
#undef LAB_1000f174
#undef uStack_50
#undef uStack_38
#undef uStack_40
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
#undef local_48

#undef PTR_recovered_1000efa0_10011388
#define PTR_recovered_1000efa0_10011388 (*(void * *)(((uintptr_t)pf_module_state + 0x154cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1c0
 */

void recovered_1000f1c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000efa0_10011388;
  return;
}

#undef PTR_recovered_1000efa0_10011388

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1e0
 */

void recovered_1000f1e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1f0
 */

void recovered_1000f1f0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f200
 */

void recovered_1000f200(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;

  uVar6 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar6;
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
    uVar4 = *(ulong *)(param_2 + 0x10);
    uVar6 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar4 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
  }
  lVar1 = *(long *)(param_2 + 8);
  lVar5 = recovered_10008a20((void *)(lVar1 + uVar6 * 0x28 + -0x28));
  lVar2 = *(long *)(*param_3 + 0x58);
  *(undefined1 *)(lVar1 + -0x28 + uVar6 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar6 * 0x28) = lVar5 + lVar2;
  *(undefined8 *)(lVar1 + -0x18 + uVar6 * 0x28) = 0;
  puVar3 = *(undefined1 **)(lVar1 + -0x20 + uVar6 * 0x28);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000f1e0_100113d0
#define PTR_recovered_1000f1e0_100113d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1594U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2b0
 */

void recovered_1000f2b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f1e0_100113d0;
  return;
}

#undef PTR_recovered_1000f1e0_100113d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2d0
 */

void recovered_1000f2d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2e0
 */

void recovered_1000f2e0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2f0
 */

void recovered_1000f2f0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  lVar4 = *param_3;
  uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar9;
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (uVar7 < uVar9) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar9);
    lVar4 = *param_3;
    uVar7 = *(ulong *)(param_2 + 0x10);
    uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)(param_2 + 8);
  if (uVar7 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar4 = *param_3;
    uVar7 = *(ulong *)(param_2 + 0x10);
  }
  lVar8 = *plVar1;
  lVar2 = lVar8 + uVar9 * 0x28;
  lVar3 = lVar8 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  if (uVar7 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar8 = *plVar1;
  }
  lVar5 = recovered_10008a20((void *)(lVar8 + uVar9 * 0x28 + -0x28));
  lVar6 = recovered_10008a20((void *)(lVar3 + -0x28));
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(longlong *)(lVar2 + -8) = lVar6 + lVar5;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000f2d0_10011418
#define PTR_recovered_1000f2d0_10011418 (*(void * *)(((uintptr_t)pf_module_state + 0x15dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f3d0
 */

void recovered_1000f3d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f2d0_10011418;
  return;
}

#undef PTR_recovered_1000f2d0_10011418

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f3f0
 */

void recovered_1000f3f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f400
 */

void recovered_1000f400(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f410
 */

void recovered_1000f410(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;

  uVar6 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar6;
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
    uVar4 = *(ulong *)(param_2 + 0x10);
    uVar6 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar4 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
  }
  lVar1 = *(long *)(param_2 + 8);
  lVar5 = recovered_10008a20((void *)(lVar1 + uVar6 * 0x28 + -0x28));
  lVar2 = *(long *)(*param_3 + 0x58);
  *(undefined1 *)(lVar1 + -0x28 + uVar6 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar6 * 0x28) = lVar5 - lVar2;
  *(undefined8 *)(lVar1 + -0x18 + uVar6 * 0x28) = 0;
  puVar3 = *(undefined1 **)(lVar1 + -0x20 + uVar6 * 0x28);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000f3f0_10011460
#define PTR_recovered_1000f3f0_10011460 (*(void * *)(((uintptr_t)pf_module_state + 0x1624U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f4c0
 */

void recovered_1000f4c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f3f0_10011460;
  return;
}

#undef PTR_recovered_1000f3f0_10011460

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f4e0
 */

void recovered_1000f4e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f4f0
 */

void recovered_1000f4f0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f500
 */

void recovered_1000f500(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  lVar4 = *param_3;
  uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar9;
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (uVar7 < uVar9) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar9);
    lVar4 = *param_3;
    uVar7 = *(ulong *)(param_2 + 0x10);
    uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)(param_2 + 8);
  if (uVar7 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar4 = *param_3;
    uVar7 = *(ulong *)(param_2 + 0x10);
  }
  lVar8 = *plVar1;
  lVar2 = lVar8 + uVar9 * 0x28;
  lVar3 = lVar8 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  if (uVar7 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar8 = *plVar1;
  }
  lVar5 = recovered_10008a20((void *)(lVar8 + uVar9 * 0x28 + -0x28));
  lVar6 = recovered_10008a20((void *)(lVar3 + -0x28));
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(longlong *)(lVar2 + -8) = lVar6 - lVar5;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000f4e0_100114a8
#define PTR_recovered_1000f4e0_100114a8 (*(void * *)(((uintptr_t)pf_module_state + 0x166cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f5e0
 */

void recovered_1000f5e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f4e0_100114a8;
  return;
}

#undef PTR_recovered_1000f4e0_100114a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f600
 */

void recovered_1000f600(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f610
 */

void recovered_1000f610(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f620
 */

void recovered_1000f620(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  longlong lVar5;
  ulong uVar6;

  uVar6 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar6;
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
    uVar4 = *(ulong *)(param_2 + 0x10);
    uVar6 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar4 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
  }
  lVar1 = *(long *)(param_2 + 8);
  lVar5 = recovered_10008a20((void *)(lVar1 + uVar6 * 0x28 + -0x28));
  lVar2 = *(long *)(*param_3 + 0x58);
  *(undefined1 *)(lVar1 + -0x28 + uVar6 * 0x28) = 2;
  *(longlong *)(lVar1 + -8 + uVar6 * 0x28) = lVar5 * lVar2;
  *(undefined8 *)(lVar1 + -0x18 + uVar6 * 0x28) = 0;
  puVar3 = *(undefined1 **)(lVar1 + -0x20 + uVar6 * 0x28);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000f600_100114f0
#define PTR_recovered_1000f600_100114f0 (*(void * *)(((uintptr_t)pf_module_state + 0x16b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6d0
 */

void recovered_1000f6d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f600_100114f0;
  return;
}

#undef PTR_recovered_1000f600_100114f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f6f0
 */

void recovered_1000f6f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f700
 */

void recovered_1000f700(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f710
 */

void recovered_1000f710(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  longlong lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  lVar4 = *param_3;
  uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar9;
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (uVar7 < uVar9) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar9);
    lVar4 = *param_3;
    uVar7 = *(ulong *)(param_2 + 0x10);
    uVar9 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)(param_2 + 8);
  if (uVar7 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar4 = *param_3;
    uVar7 = *(ulong *)(param_2 + 0x10);
  }
  lVar8 = *plVar1;
  lVar2 = lVar8 + uVar9 * 0x28;
  lVar3 = lVar8 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  if (uVar7 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar8 = *plVar1;
  }
  lVar5 = recovered_10008a20((void *)(lVar8 + uVar9 * 0x28 + -0x28));
  lVar6 = recovered_10008a20((void *)(lVar3 + -0x28));
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(longlong *)(lVar2 + -8) = lVar6 * lVar5;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000f6f0_10011538
#define PTR_recovered_1000f6f0_10011538 (*(void * *)(((uintptr_t)pf_module_state + 0x16fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f800
 */

void recovered_1000f800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f6f0_10011538;
  return;
}

#undef PTR_recovered_1000f6f0_10011538

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f820
 */

void recovered_1000f820(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f830
 */

void recovered_1000f830(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f840
 */

void recovered_1000f840(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  lVar1 = *(long *)(*param_3 + 0x28);
  uVar5 = lVar1 + (ulong)(lVar1 == 0);
  uVar2 = *(ulong *)(*param_3 + 0x58);
  *(ulong *)(param_2 + 0x50) = uVar5;
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 < uVar5) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
    uVar4 = *(ulong *)(param_2 + 0x10);
    uVar5 = *(long *)(*param_3 + 0x28) + (ulong)(*(long *)(*param_3 + 0x28) == 0);
  }
  if (uVar4 < uVar5) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar5);
  }
  lVar3 = *(long *)(param_2 + 8);
  lVar1 = lVar3 + uVar5 * 0x28;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = recovered_10008a20((void *)(lVar3 + uVar5 * 0x28 + -0x28));
    if ((uVar4 | uVar2) >> 0x20 == 0) {
      uVar4 = (uVar4 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar4 = (long)uVar4 / (long)uVar2;
    }
  }
  *(undefined1 *)(lVar1 + -0x28) = 2;
  *(ulong *)(lVar1 + -8) = uVar4;
  *(undefined8 *)(lVar1 + -0x18) = 0;
  if (*(undefined1 **)(lVar1 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar1 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000f820_10011580
#define PTR_recovered_1000f820_10011580 (*(void * *)(((uintptr_t)pf_module_state + 0x1744U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f910
 */

void recovered_1000f910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f820_10011580;
  return;
}

#undef PTR_recovered_1000f820_10011580

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f930
 */

void recovered_1000f930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f940
 */

void recovered_1000f940(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f950
 */

void recovered_1000f950(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar4 = *param_3;
  uVar6 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  *(ulong *)(param_2 + 0x50) = uVar6;
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (uVar5 < uVar6) {
    recovered_1000b9a0((long *)(param_2 + 8),uVar6);
    lVar4 = *param_3;
    uVar5 = *(ulong *)(param_2 + 0x10);
    uVar6 = *(long *)(lVar4 + 0x28) + (ulong)(*(long *)(lVar4 + 0x28) == 0);
  }
  plVar1 = (long *)(param_2 + 8);
  if (uVar5 < uVar6) {
    recovered_1000b9a0(plVar1,uVar6);
    lVar4 = *param_3;
    uVar5 = *(ulong *)(param_2 + 0x10);
  }
  lVar3 = *plVar1;
  uVar7 = *(long *)(lVar4 + 0x60) + (ulong)(*(long *)(lVar4 + 0x60) == 0);
  lVar4 = lVar3;
  if (uVar5 < uVar7) {
    recovered_1000b9a0(plVar1,uVar7);
    lVar4 = *plVar1;
  }
  lVar2 = lVar3 + uVar6 * 0x28;
  uVar5 = recovered_10008a20((void *)(lVar4 + uVar7 * 0x28 + -0x28));
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = recovered_10008a20((void *)(lVar3 + uVar6 * 0x28 + -0x28));
    if ((uVar6 | uVar5) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar5 & 0xffffffff);
    }
    else {
      uVar6 = (long)uVar6 / (long)uVar5;
    }
  }
  *(undefined1 *)(lVar2 + -0x28) = 2;
  *(ulong *)(lVar2 + -8) = uVar6;
  *(undefined8 *)(lVar2 + -0x18) = 0;
  if (*(undefined1 **)(lVar2 + -0x20) != (undefined1 *)0x0) {
    **(undefined1 **)(lVar2 + -0x20) = 0;
  }
  return;
}


#undef PTR_recovered_1000f930_100115c8
#define PTR_recovered_1000f930_100115c8 (*(void * *)(((uintptr_t)pf_module_state + 0x178cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa60
 */

void recovered_1000fa60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000f930_100115c8;
  return;
}

#undef PTR_recovered_1000f930_100115c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa80
 */

void recovered_1000fa80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fa90
 */

void recovered_1000fa90(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007130(in_RDI);
  return;
}


#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000faa0
 */

void recovered_1000faa0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;

  lVar5 = *param_3;
  uVar9 = *(long *)(lVar5 + 0x28) + (ulong)(*(long *)(lVar5 + 0x28) == 0);
  plVar1 = (long *)(param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar5 = *param_3;
    uVar6 = *(ulong *)(param_2 + 0x10);
  }
  lVar3 = *plVar1;
  lVar8 = lVar3 + uVar9 * 0x28;
  uVar9 = *(long *)(lVar5 + 0x60) + (ulong)(*(long *)(lVar5 + 0x60) == 0);
  if (uVar6 < uVar9) {
    recovered_1000b9a0(plVar1,uVar9);
    lVar3 = *plVar1;
  }
  cVar2 = *(char *)(lVar8 + -0x28);
  if (cVar2 != *(char *)(lVar3 + -0x28 + uVar9 * 0x28)) {
    return;
  }
  if (cVar2 != '\0') {
    lVar3 = lVar3 + uVar9 * 0x28;
    if (cVar2 == '\x02') {
      if (*(long *)(lVar8 + -8) != *(long *)(lVar3 + -8)) {
        return;
      }
    }
    else {
      if (cVar2 != '\x01') {
        return;
      }
      puVar4 = *(undefined1 **)(lVar8 + -0x20);
      lVar5 = *(long *)(lVar8 + -0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_10010a26;
      }
      puVar7 = *(undefined1 **)(lVar3 + -0x20);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_10010a26;
      }
      if (lVar5 != *(long *)(lVar3 + -0x18)) {
        return;
      }
      if (lVar5 != 0) {
        lVar8 = 0;
        do {
          if (puVar4[lVar8] != puVar7[lVar8]) {
            return;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
      }
    }
  }
  if (*(byte *)(param_2 + 0x40) < 4) {
    *(char *)(param_2 + 0x40) = (char)(0x30201 >> ((*(byte *)(param_2 + 0x40) & 3) << 3));
  }
  return;
}

#undef DAT_10010a26

#undef PTR_recovered_1000fa80_10011610
#define PTR_recovered_1000fa80_10011610 (*(void * *)(((uintptr_t)pf_module_state + 0x17d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fba0
 */

void recovered_1000fba0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_100070d0(0x10);
  *puVar1 = &PTR_recovered_1000fa80_10011610;
  return;
}

#undef PTR_recovered_1000fa80_10011610

#undef DAT_10010a26
#define DAT_10010a26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fbc0
 */

long recovered_1000fbc0(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;

  uVar8 = param_1[1];
  if (uVar8 == param_1[2]) {
    uVar6 = 4;
    if (uVar8 != 0) {
      uVar6 = uVar8 * 2;
    }
    if (uVar8 < uVar6) {
      pvVar5 = recovered_100070d0(uVar6 * 0x28);
      if (param_1[1] != 0) {
        lVar9 = 0x20;
        uVar8 = 0;
        do {
          lVar3 = *param_1;
          *(undefined1 *)((long)pvVar5 + lVar9 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar9);
          *(undefined8 *)((long)pvVar5 + lVar9 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar9);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar9);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar9 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar3 + -8 + lVar9) = 0;
          *(undefined8 *)((long)pvVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          recovered_10007130((void *)0x0);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x28;
        } while (uVar8 < (ulong)param_1[1]);
      }
      recovered_10007130((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = uVar6;
      uVar8 = param_1[1];
    }
  }
  lVar9 = *param_1;
  *(undefined1 *)(lVar9 + uVar8 * 0x28) = *param_2;
  puVar1 = (undefined8 *)(lVar9 + 8 + uVar8 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar9 + 0x18 + uVar8 * 0x28) = 0;
  puVar7 = &DAT_10010a26;
  if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 8);
  }
  recovered_1000c230((long *)(lVar9 + uVar8 * 0x28 + 8),(long)puVar7,*(ulong *)(param_2 + 0x10));
  *(undefined8 *)(lVar9 + 0x20 + uVar8 * 0x28) = *(undefined8 *)(param_2 + 0x20);
  lVar9 = param_1[1];
  param_1[1] = lVar9 + 1;
  return lVar9 * 0x28 + *param_1;
}

#undef DAT_10010a26

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd10
 */

long recovered_1000fd10(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
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
      pvVar5 = recovered_100070d0(uVar8 * 0x28);
      if (param_1[1] != 0) {
        lVar7 = 0x20;
        uVar6 = 0;
        do {
          lVar3 = *param_1;
          *(undefined1 *)((long)pvVar5 + lVar7 + -0x20) = *(undefined1 *)(lVar3 + -0x20 + lVar7);
          *(undefined8 *)((long)pvVar5 + lVar7 + -0x18) = *(undefined8 *)(lVar3 + -0x18 + lVar7);
          puVar1 = (undefined8 *)(lVar3 + -0x10 + lVar7);
          uVar4 = puVar1[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar7 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar3 + -8 + lVar7) = 0;
          *(undefined8 *)((long)pvVar5 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          recovered_10007130((void *)0x0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x28;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_10007130((void *)*param_1);
      *param_1 = (long)pvVar5;
      param_1[2] = uVar8;
      uVar6 = param_1[1];
    }
  }
  lVar7 = *param_1;
  *(undefined1 *)(lVar7 + uVar6 * 0x28) = *param_2;
  *(undefined8 *)(lVar7 + 8 + uVar6 * 0x28) = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar6 * 0x28);
  *puVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar4;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20 + uVar6 * 0x28) = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = uVar6 + 1;
  return lVar7 + uVar6 * 0x28;
}
