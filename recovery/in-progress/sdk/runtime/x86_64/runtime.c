/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1004a95c
#define DAT_1004a95c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c26U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10034a40
 */

void recovered_10034a40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  PF_PART1(DAT_1004a95c, 4) = 0;
  recovered_10034a60();
  return;
}

#undef DAT_1004a95c

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
#undef DAT_1004a95c
#define DAT_1004a95c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c26U)))
#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c32U)))
#undef DAT_1004a970
#define DAT_1004a970 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c3aU)))
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
 * Address: 0x10034a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10034a60(void)

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
  if (PF_PART1(DAT_1004a95c, 4) != '\0') {
    return;
  }
  DAT_1004a968 = 0;
  DAT_1004a970 = 0;
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
                if (*puVar2 <= uVar7) goto LAB_10034af3;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar8 = 0;
LAB_10034af3:
            local_438[uVar8 * 2 + 2] = uVar7;
            local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
            uVar9 = uVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
LAB_10034c3e:
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
        if (lVar12 == 0) goto LAB_10034d06;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x10034cef;
        recovered_10039c10(puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (DAT_1004a968 != 0) goto LAB_10034e45;
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
              if (*puVar2 <= uVar7) goto LAB_10034bb5;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar8 = 0;
LAB_10034bb5:
          local_438[uVar8 * 2 + 2] = uVar7;
          local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
          uVar9 = uVar9 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    goto LAB_10034c3e;
  }
LAB_10034d06:
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
      if (DAT_1004a968 == 0) {
        puVar4 = &DAT_1004a968;
      }
      *puVar4 = 0x300000;
      if (DAT_1004a970 == 0) {
        PF_PART1(DAT_1004a95c, 4) = 1;
        DAT_1004a970 = 0x300000;
        return;
      }
      PF_PART1(DAT_1004a95c, 4) = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_1004a968 == 0) {
      puVar4 = &DAT_1004a968;
    }
    *puVar4 = 0x300000;
    if (DAT_1004a970 == 0) {
      DAT_1004a970 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_1004a968 == 0) {
        puVar4 = &DAT_1004a968;
      }
      *puVar4 = 0x2000000;
      if (DAT_1004a970 == 0) {
        PF_PART1(DAT_1004a95c, 4) = 1;
        DAT_1004a970 = 0x2000000;
        return;
      }
      PF_PART1(DAT_1004a95c, 4) = 1;
      return;
    }
  }
LAB_10034e45:
  if (DAT_1004a970 == 0) {
    DAT_1004a970 = DAT_1004a968;
    PF_PART1(DAT_1004a95c, 4) = 1;
    return;
  }
  PF_PART1(DAT_1004a95c, 4) = 1;
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
#undef DAT_1004a95c
#undef DAT_1004a968
#undef DAT_1004a970
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

#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c32U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10034ed0
 */

ulong recovered_10034ed0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10034a60();
  uVar3 = 0;
  for (plVar1 = DAT_1004a968; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_1004a968

#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c32U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10034f20
 */

long recovered_10034f20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10034a60();
  lVar1 = 0;
  for (plVar2 = DAT_1004a968; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1004a968

#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c32U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10034f60
 */

ulong recovered_10034f60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10034a60();
  uVar3 = 0;
  for (plVar1 = DAT_1004a968; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1004a968

#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c32U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10034fa0
 */

long recovered_10034fa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_10034a60();
  lVar2 = 0;
  for (plVar1 = DAT_1004a968; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_1004a968

#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c32U)))
#undef DAT_1004a970
#define DAT_1004a970 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c3aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10034fd0
 */

ulong * recovered_10034fd0(long param_1)

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
  recovered_10034a60();
  puVar3 = DAT_1004a970;
  if (DAT_1004a970 == (ulong *)0x0) {
    puVar3 = DAT_1004a968;
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
        DAT_1004a970 = DAT_1004a968;
        if (puVar3 != (ulong *)0x0) {
          DAT_1004a970 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_1004a968;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1004a968
#undef DAT_1004a970

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100350b0
 */

ulong recovered_100350b0(ulong param_1,uint param_2)

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
 * Address: 0x100350f0
 */

ulong recovered_100350f0(ulong param_1,uint param_2)

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
 * Address: 0x10035130
 */

long recovered_10035130(long param_1,uint param_2)

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
 * Address: 0x10035180
 */

ulong recovered_10035180(ulong param_1,ulong param_2)

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
 * Address: 0x10035220
 */

long recovered_10035220(ulong param_1,ulong param_2)

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
 * Address: 0x10035290
 */

ulong recovered_10035290(ulong param_1,ulong param_2)

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
 * Address: 0x10035360
 */

long recovered_10035360(ulong param_1,ulong param_2)

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
 * Address: 0x100353f0
 */

void recovered_100353f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10035410
 */

int recovered_10035410(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -value;
  if (-value < 0) {
    iVar1 = value;
  }
  return iVar1;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_10035420(ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x6800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x50U && api[0x4c/4]) {return ((void * (*)(ulong))(uintptr_t)api[0x4c/4])(size);}
 return 0;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void recovered_10035470(void *pointer){
 volatile uint32_t *api=(volatile uint32_t *)0x6800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x54U && api[0x50/4]) {((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);return;}
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_100354c0(void *pointer,ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x6800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x58U && api[0x54/4]) {return ((void * (*)(void *,ulong))(uintptr_t)api[0x54/4])(pointer,size);}
 return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10035510
 */

void * recovered_10035510(void *destination,void *source,ulong count)

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
LAB_1003552f:
    if (count == 0) {
      return pvVar5;
    }
  }
  else if ((((uint)source ^ (uint)destination) & 7) == 0) {
    if (((ulong)destination & 7) == 0) {
LAB_1003571e:
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
                    goto LAB_1003571e;
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
        if (uVar6 == uVar9) goto LAB_1003552f;
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
    goto LAB_1003552f;
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
        goto LAB_10035740;
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
LAB_10035740:
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
 * Address: 0x10035950
 */

void * recovered_10035950(void *destination,void *source,ulong count)

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
LAB_10035cea:
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
                      goto LAB_10035cea;
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
          if (uVar11 == uVar16) goto LAB_10035f48;
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
LAB_10035f48:
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
          goto LAB_10035d0c;
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
LAB_10035d0c:
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
LAB_10035ade:
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
                    goto LAB_10035ade;
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
        if (uVar12 == uVar13) goto LAB_100360aa;
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
LAB_100360aa:
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
        goto LAB_1003616f;
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
LAB_1003616f:
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
 * Address: 0x10036210
 */

void * recovered_10036210(void *destination,int value,ulong count)

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
LAB_1003635d:
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
                    goto LAB_1003635d;
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
        if (uVar6 == uVar10) goto LAB_10036491;
      }
      do {
        *(undefined8 *)destination = uVar5;
        destination = (void *)((long)destination + 8);
        count = count - 8;
      } while (7 < count);
    }
  }
LAB_10036491:
  if (count == 0) {
    return pvVar3;
  }
  if (count < 4) {
LAB_100364a0:
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
        goto LAB_100364a0;
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
 * Address: 0x10036560
 */

void recovered_10036560(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10036785;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10036785:
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
        goto LAB_10036806;
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
LAB_10036806:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036830
 */

void recovered_10036830(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10036a55;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10036a55:
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
        goto LAB_10036ad6;
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
LAB_10036ad6:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036b00
 */

int recovered_10036b00(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 7) != 0) goto LAB_10036d33;
    uVar11 = count;
    puVar8 = right;
    puVar10 = left;
    if (((ulong)left & 7) != 0) {
      bVar1 = *(byte *)left;
      bVar5 = *(byte *)right;
      if (bVar1 != bVar5) {
LAB_10036c93:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10036de8:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)left + 1);
      puVar8 = (ulong *)((long)right + 1);
      uVar11 = count - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_10036c93;
        puVar10 = (ulong *)((long)left + 2);
        puVar8 = (ulong *)((long)right + 2);
        uVar11 = count - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_10036c93;
          puVar10 = (ulong *)((long)left + 3);
          puVar8 = (ulong *)((long)right + 3);
          uVar11 = count - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_10036c93;
            puVar10 = (ulong *)((long)left + 4);
            puVar8 = (ulong *)((long)right + 4);
            uVar11 = count - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_10036c93;
              puVar10 = (ulong *)((long)left + 5);
              puVar8 = (ulong *)((long)right + 5);
              uVar11 = count - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_10036c93;
                puVar10 = (ulong *)((long)left + 6);
                puVar8 = (ulong *)((long)right + 6);
                uVar11 = count - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_10036c93;
                  puVar10 = (ulong *)((long)left + 7);
                  puVar8 = (ulong *)((long)right + 7);
                  uVar11 = count - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_10036c93;
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
LAB_10036d5f:
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
        goto LAB_10036de8;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_10036d5f;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_10036d5f;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_10036d5f;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < count; count = count - 8) {
      if (*(ulong *)left != *(ulong *)right) {
        iVar3 = recovered_10036e00(left,right);
        return iVar3;
      }
      right = (ulong *)((long)right + 8);
      left = (ulong *)((long)left + 8);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_10036d33:
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
 * Address: 0x10036e00
 */

int recovered_10036e00(byte *param_1,byte *param_2)

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
 * Address: 0x10036e70
 */

int recovered_10036e70(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x61U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036e90
 */

int recovered_10036e90(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x41U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036eb0
 */

int recovered_10036eb0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036ed0
 */

int recovered_10036ed0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036f00
 */

int recovered_10036f00(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value == 9 || value == 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036f20
 */

int recovered_10036f20(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x20U < 0x5f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036f40
 */

int recovered_10036f40(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = value + 0x20;
  if (value - 0x5bU < 0xffffffe6) {
    iVar1 = value;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036f60
 */

int recovered_10036f60(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = value + -0x20;
  if (value - 0x7bU < 0xffffffe6) {
    iVar1 = value;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036f80
 */

ulong recovered_10036f80(char *text)

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
 * Address: 0x10036fb0
 */

int recovered_10036fb0(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10036fd3;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10036fd3:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10036ff0
 */

int recovered_10036ff0(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10037013;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10037013:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037030
 */

char * recovered_10037030(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  do {
    cVar1 = source[lVar2];
    destination[lVar2] = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return destination;
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
 * Address: 0x10037050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10037050(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  if (text == (char *)0x0) {
    return (char *)0x0;
  }
  uVar5 = 0xfffffffffffffff8;
  do {
    uVar10 = uVar5;
    uVar5 = uVar10 + 1;
  } while (text[uVar10 + 8] != '\0');
  if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
     ((_DAT_00006808 < 0x50 || ((code *)(ulong)_DAT_0000684c == (code *)0x0)))) {
    return (char *)0x0;
  }
  uVar9 = uVar10 + 9;
  pcVar4 = (char *)(*(code *)(ulong)_DAT_0000684c)(uVar9);
  if (pcVar4 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar8 = pcVar4;
  if (uVar9 < 0x10) {
LAB_100370f9:
    if (uVar9 == 0) {
      return pcVar4;
    }
  }
  else if ((((uint)pcVar4 ^ (uint)text) & 7) == 0) {
    if (((ulong)pcVar4 & 7) == 0) {
      pcVar7 = text;
      pcVar6 = pcVar4;
    }
    else {
      pcVar6 = pcVar4 + 1;
      *pcVar4 = *text;
      pcVar7 = text + 1;
      uVar9 = uVar10 + 8;
      if ((uVar5 != 0xfffffffffffffff9) && (((ulong)pcVar6 & 7) != 0)) {
        pcVar6 = pcVar4 + 2;
        pcVar4[1] = text[1];
        pcVar7 = text + 2;
        uVar9 = uVar10 + 7;
        if ((uVar5 != 0xfffffffffffffffa) && (((ulong)pcVar6 & 7) != 0)) {
          pcVar6 = pcVar4 + 3;
          pcVar4[2] = text[2];
          pcVar7 = text + 3;
          uVar9 = uVar10 + 6;
          if ((uVar5 != 0xfffffffffffffffb) && (((ulong)pcVar6 & 7) != 0)) {
            pcVar6 = pcVar4 + 4;
            pcVar4[3] = text[3];
            pcVar7 = text + 4;
            uVar9 = uVar10 + 5;
            if ((uVar5 != 0xfffffffffffffffc) && (((ulong)pcVar6 & 7) != 0)) {
              pcVar6 = pcVar4 + 5;
              pcVar4[4] = text[4];
              pcVar7 = text + 5;
              uVar9 = uVar10 + 4;
              if ((uVar5 != 0xfffffffffffffffd) && (((ulong)pcVar6 & 7) != 0)) {
                pcVar6 = pcVar4 + 6;
                pcVar4[5] = text[5];
                pcVar7 = text + 6;
                uVar9 = uVar10 + 3;
                if ((uVar5 != 0xfffffffffffffffe) && (((ulong)pcVar6 & 7) != 0)) {
                  pcVar6 = pcVar4 + 7;
                  pcVar4[6] = text[6];
                  pcVar7 = text + 7;
                  uVar9 = uVar10 + 2;
                  if ((uVar5 != 0xffffffffffffffff) && (((ulong)pcVar6 & 7) != 0)) {
                    pcVar4[7] = text[7];
                    pcVar7 = text + 8;
                    uVar9 = uVar5;
                    pcVar6 = pcVar4 + 8;
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
        *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
        *(undefined8 *)(pcVar6 + 8) = *(undefined8 *)(pcVar7 + 8);
        *(undefined8 *)(pcVar6 + 0x10) = *(undefined8 *)(pcVar7 + 0x10);
        *(undefined8 *)(pcVar6 + 0x18) = *(undefined8 *)(pcVar7 + 0x18);
        pcVar6 = pcVar6 + 0x20;
        pcVar7 = pcVar7 + 0x20;
        uVar10 = uVar5;
      }
      uVar9 = uVar5;
      if (0x1f < uVar5) {
        do {
          *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
          *(undefined8 *)(pcVar6 + 8) = *(undefined8 *)(pcVar7 + 8);
          *(undefined8 *)(pcVar6 + 0x10) = *(undefined8 *)(pcVar7 + 0x10);
          *(undefined8 *)(pcVar6 + 0x18) = *(undefined8 *)(pcVar7 + 0x18);
          *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(pcVar7 + 0x20);
          *(undefined8 *)(pcVar6 + 0x28) = *(undefined8 *)(pcVar7 + 0x28);
          *(undefined8 *)(pcVar6 + 0x30) = *(undefined8 *)(pcVar7 + 0x30);
          *(undefined8 *)(pcVar6 + 0x38) = *(undefined8 *)(pcVar7 + 0x38);
          pcVar6 = pcVar6 + 0x40;
          pcVar7 = pcVar7 + 0x40;
          uVar10 = uVar10 - 0x40;
          uVar9 = uVar10;
        } while (0x1f < uVar10);
      }
    }
    if (uVar9 < 8) {
      text = pcVar7;
      pcVar8 = pcVar6;
    }
    else {
      if ((0x27 < uVar9 - 8) && (0x1f < (ulong)((long)pcVar6 - (long)pcVar7))) {
        uVar5 = (uVar9 - 8 >> 3) + 1;
        uVar10 = uVar5 & 0xfffffffffffffffc;
        text = pcVar7 + uVar10 * 8;
        pcVar8 = pcVar6 + uVar10 * 8;
        uVar9 = uVar9 + uVar10 * -8;
        uVar11 = 0;
        do {
          uVar1 = *(undefined8 *)(pcVar7 + uVar11 * 8 + 8);
          uVar2 = *(undefined8 *)(pcVar7 + uVar11 * 8 + 0x10);
          uVar3 = *(undefined8 *)(pcVar7 + uVar11 * 8 + 0x10 + 8);
          *(undefined8 *)(pcVar6 + uVar11 * 8) = *(undefined8 *)(pcVar7 + uVar11 * 8);
          *(undefined8 *)(pcVar6 + uVar11 * 8 + 8) = uVar1;
          *(undefined8 *)(pcVar6 + uVar11 * 8 + 0x10) = uVar2;
          *(undefined8 *)(pcVar6 + uVar11 * 8 + 0x10 + 8) = uVar3;
          uVar11 = uVar11 + 4;
        } while (uVar10 != uVar11);
        pcVar7 = text;
        pcVar6 = pcVar8;
        if (uVar5 == uVar10) goto LAB_100370f9;
      }
      do {
        text = pcVar7 + 8;
        *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
        pcVar8 = pcVar6 + 8;
        uVar9 = uVar9 - 8;
        pcVar7 = text;
        pcVar6 = pcVar8;
      } while (7 < uVar9);
    }
    goto LAB_100370f9;
  }
  uVar5 = uVar9;
  pcVar6 = pcVar8;
  if ((uVar9 < 4) || ((ulong)((long)pcVar8 - (long)text) < 0x20)) {
LAB_10037418:
    pcVar7 = text;
  }
  else {
    if (uVar9 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffffe0;
      uVar5 = 0;
      do {
        uVar1 = *(undefined8 *)(text + uVar5 + 8);
        uVar2 = *(undefined8 *)(text + uVar5 + 0x10);
        uVar3 = *(undefined8 *)(text + uVar5 + 0x10 + 8);
        *(undefined8 *)(pcVar8 + uVar5) = *(undefined8 *)(text + uVar5);
        *(undefined8 *)(pcVar8 + uVar5 + 8) = uVar1;
        *(undefined8 *)(pcVar8 + uVar5 + 0x10) = uVar2;
        *(undefined8 *)(pcVar8 + uVar5 + 0x10 + 8) = uVar3;
        uVar5 = uVar5 + 0x20;
      } while (uVar10 != uVar5);
      if (uVar9 == uVar10) {
        return pcVar4;
      }
      if ((uVar9 & 0x1c) == 0) {
        text = text + uVar10;
        pcVar6 = pcVar8 + uVar10;
        uVar5 = (ulong)((uint)uVar9 & 0x1f);
        goto LAB_10037418;
      }
    }
    uVar11 = uVar9 & 0xfffffffffffffffc;
    uVar5 = (ulong)((uint)uVar9 & 3);
    pcVar6 = pcVar8 + uVar11;
    pcVar7 = text + uVar11;
    do {
      *(undefined4 *)(pcVar8 + uVar10) = *(undefined4 *)(text + uVar10);
      uVar10 = uVar10 + 4;
    } while (uVar11 != uVar10);
    if (uVar9 == uVar11) {
      return pcVar4;
    }
  }
  uVar10 = uVar5 - 1;
  if ((uVar5 & 7) != 0) {
    uVar9 = 0;
    do {
      pcVar6[uVar9] = pcVar7[uVar9];
      uVar9 = uVar9 + 1;
    } while ((uVar5 & 7) != uVar9);
    uVar5 = uVar5 - uVar9;
    pcVar6 = pcVar6 + uVar9;
    pcVar7 = pcVar7 + uVar9;
  }
  if (uVar10 < 7) {
    return pcVar4;
  }
  uVar10 = 0;
  do {
    pcVar6[uVar10] = pcVar7[uVar10];
    pcVar6[uVar10 + 1] = pcVar7[uVar10 + 1];
    pcVar6[uVar10 + 2] = pcVar7[uVar10 + 2];
    pcVar6[uVar10 + 3] = pcVar7[uVar10 + 3];
    pcVar6[uVar10 + 4] = pcVar7[uVar10 + 4];
    pcVar6[uVar10 + 5] = pcVar7[uVar10 + 5];
    pcVar6[uVar10 + 6] = pcVar7[uVar10 + 6];
    pcVar6[uVar10 + 7] = pcVar7[uVar10 + 7];
    uVar10 = uVar10 + 8;
  } while (uVar5 != uVar10);
  return pcVar4;
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
 * Address: 0x100374d0
 */

char * recovered_100374d0(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = *text;
  while( true ) {
    if (cVar1 == '\0') {
      if ((char)value != '\0') {
        text = (char *)0x0;
      }
      return text;
    }
    if ((char)value == cVar1) break;
    cVar1 = text[1];
    text = text + 1;
  }
  return text;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037510
 */

ulong recovered_10037510(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;

  cVar2 = *text;
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = 0;
  do {
    if (*accept == '\0') {
      return 0;
    }
    cVar4 = *accept;
    pcVar3 = accept;
    while (pcVar3 = pcVar3 + 1, cVar2 != cVar4) {
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        return uVar1;
      }
    }
    cVar2 = text[uVar1 + 1];
    uVar1 = uVar1 + 1;
  } while (cVar2 != '\0');
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037570
 */

char * recovered_10037570(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char cVar3;

  cVar1 = *text;
  if (cVar1 == '\0') {
    return (char *)0x0;
  }
  do {
    if (*accept != '\0') {
      cVar3 = *accept;
      pcVar2 = accept;
      do {
        pcVar2 = pcVar2 + 1;
        if (cVar1 == cVar3) {
          return text;
        }
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
    }
    cVar1 = text[1];
    text = text + 1;
  } while (cVar1 != '\0');
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100375d0
 */

char * recovered_100375d0(char *haystack,char *needle)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  char cVar3;

  if (*needle == '\0') {
    return haystack;
  }
  if (*haystack == '\0') {
    return (char *)0x0;
  }
  do {
    lVar2 = 0;
    cVar3 = *needle;
    while (haystack[lVar2] == cVar3) {
      cVar3 = needle[lVar2 + 1];
      lVar2 = lVar2 + 1;
      if (cVar3 == '\0') {
        return haystack;
      }
    }
    pcVar1 = haystack + 1;
    haystack = haystack + 1;
    if (*pcVar1 == '\0') {
      return (char *)0x0;
    }
  } while( true );
}


#undef DAT_1004898d
#define DAT_1004898d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c57U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037630
 */

undefined * recovered_10037630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1004898d;
}

#undef DAT_1004898d

#undef DAT_1004a3f0
#define DAT_1004a3f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037640
 */

undefined * recovered_10037640(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1004a3f0;
}

#undef DAT_1004a3f0

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
#define uStack_18 (*(undefined8 *)(frame + 40))
#define uStack_20 (*(undefined8 *)(frame + 32))
#define local_28 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037650
 */

/* WARNING: Removing unreachable block (ram,0x10037666) */
/* WARNING: Removing unreachable block (ram,0x100376b3) */
/* WARNING: Removing unreachable block (ram,0x100376be) */
/* WARNING: Removing unreachable block (ram,0x100376c7) */
/* WARNING: Removing unreachable block (ram,0x100376d0) */
/* WARNING: Removing unreachable block (ram,0x100376bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10037650(undefined8 *param_1)

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
#undef uStack_18
#undef uStack_20
#undef local_28

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037750
 */

double recovered_10037750(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_10048e68;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 *
                    DAT_10048e68 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68;
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

#undef DAT_10048e68

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10037820(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_10048ef0 ^ (ulong)param_1);
  if ((double)(_DAT_10048ef0 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_10048e70 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10048e68;
      iVar1 = iVar1 + 1;
    } while (DAT_10048e70 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10048e68)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_10048ef0 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef DAT_10048ef0
#undef _DAT_10048ef0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100378f0
 */

double recovered_100378f0(double x,double y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((y == 0.0) && (!NAN(y))) {
    return 0.0;
  }
  return x - (double)(int)(x / y) * y;
}


#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037920
 */

double recovered_10037920(double base,double exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;

  dVar4 = 0.0;
  if (((double)(int)exponent == exponent) && (!NAN((double)(int)exponent) && !NAN(exponent))) {
    uVar2 = (uint)exponent;
    if (uVar2 == 0) {
      return DAT_10048e70;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_10048e70;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * base;
      }
      base = base * base;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_10048e70 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_10048e70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100379a0
 */

double recovered_100379a0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100379d0
 */

double recovered_100379d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  return (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                 (ulong)(DAT_10048e70 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_10048e70

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037a30
 */

double recovered_10037a30(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < value) {
    dVar1 = value;
    if (value <= DAT_10048e70) {
      dVar1 = DAT_10048e70;
    }
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
    dVar1 = (value / dVar1 + dVar1) * DAT_10048e68;
  }
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048e70

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e78
#define DAT_10048e78 (*(double *)(((uintptr_t)pf_module_state + 0x2142U)))
#undef DAT_10048e80
#define DAT_10048e80 (*(double *)(((uintptr_t)pf_module_state + 0x214aU)))
#undef DAT_10048e88
#define DAT_10048e88 (*(double *)(((uintptr_t)pf_module_state + 0x2152U)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
#undef DAT_10048e98
#define DAT_10048e98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef DAT_10048f00
#define DAT_10048f00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21caU)))
#undef DAT_10048f10
#define DAT_10048f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21daU)))
#undef DAT_10048f20
#define DAT_10048f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21eaU)))
#undef DAT_10048f30
#define DAT_10048f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21faU)))
#undef _DAT_10048e98
#define _DAT_10048e98 (*(double *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048f00
#define _DAT_10048f00 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21caU)))
#undef _DAT_10048f10
#define _DAT_10048f10 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21daU)))
#undef _DAT_10048f20
#define _DAT_10048f20 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21eaU)))
#undef _DAT_10048f30
#define _DAT_10048f30 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21faU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10037be0(double value)

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

  if (0.0 < value) {
    iVar1 = 0;
    if (DAT_10048e80 < value) {
      iVar1 = 0;
      do {
        value = value * DAT_10048e68;
        iVar1 = iVar1 + 1;
      } while (DAT_10048e80 < value);
    }
    for (; value < DAT_10048e88; value = value + value) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10048e90 + value) / (value + DAT_10048e70);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_10048f00);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_10048f10);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_10048f20);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_10048f30);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_10048e98 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10048ea0;
  }
  return DAT_10048e78;
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef DAT_10048e78
#undef DAT_10048e80
#undef DAT_10048e88
#undef DAT_10048e90
#undef DAT_10048e98
#undef DAT_10048ea0
#undef DAT_10048f00
#undef DAT_10048f10
#undef DAT_10048f20
#undef DAT_10048f30
#undef _DAT_10048e98
#undef _DAT_10048ea0
#undef _DAT_10048f00
#undef _DAT_10048f10
#undef _DAT_10048f20
#undef _DAT_10048f30

#undef DAT_10048f40
#define DAT_10048f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037d30
 */

longlong recovered_10037d30(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(value + *(double *)(&DAT_10048f40 + (ulong)(0.0 <= value) * 8));
}

#undef DAT_10048f40

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb0
#define DAT_10048eb0 (*(double *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048ec0
#define DAT_10048ec0 (*(double *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef DAT_10048ec8
#define DAT_10048ec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2192U)))
#undef DAT_10048f50
#define DAT_10048f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221aU)))
#undef _DAT_10048ec8
#define _DAT_10048ec8 (*(double *)(((uintptr_t)pf_module_state + 0x2192U)))
#undef _DAT_10048f50
#define _DAT_10048f50 (*(uint128 *)(((uintptr_t)pf_module_state + 0x221aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037d60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10037d60(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10048ea8 < value; value = value + DAT_10048eb0) {
  }
  for (; value < DAT_10048eb8; value = value + DAT_10048ec0) {
  }
  dVar1 = value * value;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10048f50);
  return ((dVar1 / _DAT_10048ec8 + DAT_10048e70 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * value;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb0
#undef DAT_10048eb8
#undef DAT_10048ec0
#undef DAT_10048ec8
#undef DAT_10048f50
#undef _DAT_10048ec8
#undef _DAT_10048f50

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb0
#define DAT_10048eb0 (*(double *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048ec0
#define DAT_10048ec0 (*(double *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#undef DAT_10048f60
#define DAT_10048f60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x222aU)))
#undef _DAT_10048f60
#define _DAT_10048f60 (*(uint128 *)(((uintptr_t)pf_module_state + 0x222aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10037e10(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10048ea8 < value; value = value + DAT_10048eb0) {
  }
  for (; value < DAT_10048eb8; value = value + DAT_10048ec0) {
  }
  dVar1 = value * value;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10048f60);
  return (DAT_10048ed0 * dVar1 + DAT_10048e70 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb0
#undef DAT_10048eb8
#undef DAT_10048ec0
#undef DAT_10048ed0
#undef DAT_10048f60
#undef _DAT_10048f60

#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10037eb0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10048ef0 ^ (ulong)value);
  if ((double)(_DAT_10048ef0 ^ (ulong)value) <= value) {
    dVar1 = value;
  }
  return dVar1;
}

#undef DAT_10048ef0
#undef _DAT_10048ef0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed8
#define DAT_10048ed8 (*(double *)(((uintptr_t)pf_module_state + 0x21a2U)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_10037ed0(double value)

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
  dVar7 = (double)(_DAT_10048ef0 ^ (ulong)value);
  if ((double)(_DAT_10048ef0 ^ (ulong)value) <= value) {
    dVar7 = value;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_10048ed8;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_10048e68;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_10048e68;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= value) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_10048e68
#undef DAT_10048ed8
#undef DAT_10048ef0
#undef _DAT_10048ef0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed8
#define DAT_10048ed8 (*(double *)(((uintptr_t)pf_module_state + 0x21a2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10037fa0
 */

ulonglong recovered_10037fa0(double value)

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
  dVar6 = DAT_10048ed8;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (value < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(value < dVar6) & (ulong)value |
                    ~-(ulong)(value < dVar6) & (ulong)(value - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_10048e68;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    value = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_10048e68;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_10048e68
#undef DAT_10048ed8

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038050
 */

double recovered_10038050(ulonglong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (value == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_10048e70;
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

#undef DAT_10048e70

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100380a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100380a0(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if (value < 0) {
    dVar4 = 0.0;
    uVar2 = -value;
    dVar3 = DAT_10048e70;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_10048ef0);
  }
  dVar3 = 0.0;
  if (value != 0) {
    dVar4 = DAT_10048e70;
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

#undef DAT_10048e70
#undef DAT_10048ef0
#undef _DAT_10048ef0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038130
 */

float recovered_10038130(float x,float y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((y == 0.0) && (!NAN(y))) {
    return 0.0;
  }
  return x - (float)(int)(x / y) * y;
}


#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef UNK_10048ef4
#define UNK_10048ef4 (*(uint *)(((uintptr_t)pf_module_state + 0x21beU)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef uRam0000000010048ef4
#define uRam0000000010048ef4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10038180(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam0000000010048ef4,
                             SUB84(dVar2,0) ^ _DAT_10048ef0));
  }
  iVar1 = 0;
  if (DAT_10048e70 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10048e68;
      iVar1 = iVar1 + 1;
    } while (DAT_10048e70 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10048e68)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010048ef4,_DAT_10048ef0));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef DAT_10048ef0
#undef UNK_10048ef4
#undef _DAT_10048ef0
#undef uRam0000000010048ef4

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038240
 */

undefined8 recovered_10038240(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_10048e68;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 *
                  DAT_10048e68 * DAT_10048e68 * DAT_10048e68;
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

#undef DAT_10048e68

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048f80
#define DAT_10048f80 (*(float *)(((uintptr_t)pf_module_state + 0x224aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038330
 */

float recovered_10038330(float base,float exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;

  if (((float)(int)exponent != exponent) || (NAN((float)(int)exponent) || NAN(exponent))) {
    return 0.0;
  }
  uVar2 = (uint)exponent;
  if (uVar2 == 0) {
    return DAT_10048f80;
  }
  dVar5 = (double)base;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_10048e70;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_10048e70 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_10048e70
#undef DAT_10048f80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100383c0
 */

float recovered_100383c0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  return (float)(double)(~uVar1 & (ulong)(double)(int)value |
                        (ulong)(double)((int)value + -1) & uVar1);
}


#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038400
 */

float recovered_10038400(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  uVar1 = -(ulong)(dVar2 < (double)value);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10048e70 + dVar2) & uVar1);
}

#undef DAT_10048e70

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038460
 */

double recovered_10038460(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  if (value < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                    (ulong)(DAT_10048e70 + dVar2) & -(ulong)(dVar2 < value));
  }
  return dVar2;
}

#undef DAT_10048e70

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100384c0
 */

float recovered_100384c0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  if (value < 0.0) {
    uVar1 = -(ulong)(dVar2 < (double)value);
    dVar2 = (double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10048e70 + dVar2) & uVar1);
  }
  return (float)dVar2;
}

#undef DAT_10048e70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038530
 */

float recovered_10038530(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037a30((double)value);
  return (float)dVar1;
}


#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e80
#define DAT_10048e80 (*(double *)(((uintptr_t)pf_module_state + 0x214aU)))
#undef DAT_10048e88
#define DAT_10048e88 (*(double *)(((uintptr_t)pf_module_state + 0x2152U)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
#undef DAT_10048e98
#define DAT_10048e98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef DAT_10048f00
#define DAT_10048f00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21caU)))
#undef DAT_10048f10
#define DAT_10048f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21daU)))
#undef DAT_10048f20
#define DAT_10048f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21eaU)))
#undef DAT_10048f30
#define DAT_10048f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21faU)))
#undef DAT_10048f84
#define DAT_10048f84 (*(float *)(((uintptr_t)pf_module_state + 0x224eU)))
#undef DAT_10048f88
#define DAT_10048f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2252U)))
#undef _DAT_10048e98
#define _DAT_10048e98 (*(double *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048f00
#define _DAT_10048f00 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21caU)))
#undef _DAT_10048f10
#define _DAT_10048f10 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21daU)))
#undef _DAT_10048f20
#define _DAT_10048f20 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21eaU)))
#undef _DAT_10048f30
#define _DAT_10048f30 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21faU)))
#undef _DAT_10048f88
#define _DAT_10048f88 (*(float *)(((uintptr_t)pf_module_state + 0x2252U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10038550(float value)

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

  if (0.0 < value) {
    dVar2 = (double)value;
    iVar1 = 0;
    if (_DAT_10048f88 < value) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_10048e68;
        iVar1 = iVar1 + 1;
      } while (DAT_10048e80 < dVar2);
    }
    for (; dVar2 < DAT_10048e88; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10048e90 + dVar2) / (dVar2 + DAT_10048e70);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_10048f00);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_10048f10);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_10048f20);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_10048f30);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_10048e98 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10048ea0);
  }
  return DAT_10048f84;
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef DAT_10048e80
#undef DAT_10048e88
#undef DAT_10048e90
#undef DAT_10048e98
#undef DAT_10048ea0
#undef DAT_10048f00
#undef DAT_10048f10
#undef DAT_10048f20
#undef DAT_10048f30
#undef DAT_10048f84
#undef DAT_10048f88
#undef _DAT_10048e98
#undef _DAT_10048ea0
#undef _DAT_10048f00
#undef _DAT_10048f10
#undef _DAT_10048f20
#undef _DAT_10048f30
#undef _DAT_10048f88

#undef DAT_10048f40
#define DAT_10048f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100386a0
 */

long recovered_100386a0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(value + *(double *)(&DAT_10048f40 + (ulong)(0.0 <= value) * 8));
}

#undef DAT_10048f40

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb0
#define DAT_10048eb0 (*(double *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048ec0
#define DAT_10048ec0 (*(double *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef DAT_10048ec8
#define DAT_10048ec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2192U)))
#undef DAT_10048f50
#define DAT_10048f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x221aU)))
#undef _DAT_10048ec8
#define _DAT_10048ec8 (*(double *)(((uintptr_t)pf_module_state + 0x2192U)))
#undef _DAT_10048f50
#define _DAT_10048f50 (*(uint128 *)(((uintptr_t)pf_module_state + 0x221aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100386d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100386d0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)value; DAT_10048ea8 < dVar1; dVar1 = dVar1 + DAT_10048eb0) {
  }
  for (; dVar1 < DAT_10048eb8; dVar1 = dVar1 + DAT_10048ec0) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_10048f50);
  return (float)(((dVar2 / _DAT_10048ec8 + DAT_10048e70 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb0
#undef DAT_10048eb8
#undef DAT_10048ec0
#undef DAT_10048ec8
#undef DAT_10048f50
#undef _DAT_10048ec8
#undef _DAT_10048f50

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb0
#define DAT_10048eb0 (*(double *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048ec0
#define DAT_10048ec0 (*(double *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#undef DAT_10048f60
#define DAT_10048f60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x222aU)))
#undef _DAT_10048f60
#define _DAT_10048f60 (*(uint128 *)(((uintptr_t)pf_module_state + 0x222aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10038780(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)value; DAT_10048ea8 < dVar1; dVar1 = dVar1 + DAT_10048eb0) {
  }
  for (; dVar1 < DAT_10048eb8; dVar1 = dVar1 + DAT_10048ec0) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10048f60);
  return (float)((DAT_10048ed0 * dVar1 + DAT_10048e70 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb0
#undef DAT_10048eb8
#undef DAT_10048ec0
#undef DAT_10048ed0
#undef DAT_10048f60
#undef _DAT_10048f60

#undef DAT_10048f70
#define DAT_10048f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x223aU)))
#undef _DAT_10048f70
#define _DAT_10048f70 (*(uint *)(((uintptr_t)pf_module_state + 0x223aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10038820(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(_DAT_10048f70 ^ (uint)value);
  if ((float)(_DAT_10048f70 ^ (uint)value) <= value) {
    fVar1 = value;
  }
  return fVar1;
}

#undef DAT_10048f70
#undef _DAT_10048f70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038840
 */

long recovered_10038840(char *text,char **endptr,int base)

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

  for (pbVar8 = (byte *)text; (bVar1 = *pbVar8, (byte)(bVar1 - 9) < 5 || (bVar1 == 0x20));
      pbVar8 = pbVar8 + 1) {
  }
  uVar9 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar8 + uVar9;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar8[uVar9 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar8 + uVar9 + 2;
    }
  }
  else if (base == 0) {
    base = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar8[uVar9 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar8 + uVar9 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
  }
  else if (base - 0x25U < 0xffffffdd) {
    if (endptr != (char **)0x0) {
      *endptr = text;
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
    if ((uint)base <= uVar4) break;
    lVar7 = lVar7 * (ulong)(uint)base + (ulong)uVar4;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  lVar6 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar6 = lVar7;
  }
  return lVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038970
 */

ulong recovered_10038970(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;

  for (pbVar8 = (byte *)text; (bVar1 = *pbVar8, (byte)(bVar1 - 9) < 5 || (bVar1 == 0x20));
      pbVar8 = pbVar8 + 1) {
  }
  uVar7 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar8 + uVar7;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar8[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar8 + uVar7 + 2;
    }
  }
  else if (base == 0) {
    base = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar8[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar8 + uVar7 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
  }
  else if (base - 0x25U < 0xffffffdd) {
    if (endptr != (char **)0x0) {
      *endptr = text;
    }
    return 0;
  }
  uVar7 = 0;
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
    if ((uint)base <= uVar4) break;
    uVar7 = uVar7 * (uint)base + (ulong)uVar4;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  uVar6 = -uVar7;
  if (bVar1 != 0x2d) {
    uVar6 = uVar7;
  }
  return uVar6;
}


#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ee0
#define DAT_10048ee0 (*(double *)(((uintptr_t)pf_module_state + 0x21aaU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10038aa0(char *text,char **endptr)

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

  for (pbVar3 = (byte *)text; (bVar1 = *pbVar3, (byte)(bVar1 - 9) < 5 || (bVar1 == 0x20));
      pbVar3 = pbVar3 + 1) {
  }
  pbVar3 = pbVar3 + ((bVar1 - 0x2b & 0xfd) == 0);
  bVar2 = *pbVar3;
  dVar11 = 0.0;
  bVar6 = bVar2 - 0x30U;
  bVar9 = bVar6;
  while (uVar4 = (uint)bVar2, bVar9 < 10) {
    dVar11 = dVar11 * DAT_10048ee0 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_10048e70;
      do {
        dVar12 = dVar12 * DAT_10048ee0 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_10048ee0;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_10038b79;
    }
  }
  dVar12 = 0.0;
  if (9 < bVar6) {
    if (endptr == (char **)0x0) {
      return 0.0;
    }
    *endptr = text;
    return 0.0;
  }
LAB_10038b79:
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
                dVar11 = dVar11 * DAT_10048e68;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68 *
                         DAT_10048e68 * DAT_10048e68 * DAT_10048e68 * DAT_10048e68;
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
  if (endptr != (char **)0x0) {
    *endptr = (char *)pbVar3;
  }
  if (bVar1 == 0x2d) {
    dVar11 = (double)((ulong)dVar11 ^ _DAT_10048ef0);
  }
  return dVar11;
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef DAT_10048ee0
#undef DAT_10048ef0
#undef _DAT_10048ef0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10038d00
 */

float recovered_10038d00(char *text,char **endptr)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10038aa0(text,endptr);
  return (float)dVar1;
}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10038d10(char *buffer,unsigned long size,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,size,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10039b90(char *buffer,unsigned long size,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,size,format,args);__builtin_va_end(args);return result;}


#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef DAT_02000018
#define DAT_02000018 (*(uint8_t *)(0x2000018U))
#undef DAT_1004a968
#define DAT_1004a968 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c32U)))
#undef DAT_1004a970
#define DAT_1004a970 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x3c3aU)))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10039c10(ulong param_1,ulong param_2,ulong *param_3)

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
        if (DAT_1004a968 == 0) {
          puVar4 = (ulong *)&DAT_1004a968;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_1004a970 == (long *)0x0) {
          DAT_1004a970 = plVar2;
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
      if (DAT_1004a968 == 0) {
        puVar1 = &DAT_1004a968;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_1004a970 == (long *)0x0) {
        DAT_1004a970 = (long *)&DAT_02000000;
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
      if (DAT_1004a968 == 0) {
        puVar4 = (ulong *)&DAT_1004a968;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1004a970 == (long *)0x0) {
        DAT_1004a970 = plVar2;
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
#undef DAT_1004a968
#undef DAT_1004a970
#undef _DAT_02000000
#undef _DAT_02000008
#undef _DAT_02000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039dd0
 */

/* WARNING: This is an inlined function */

void recovered_10039dd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10048f90
#define DAT_10048f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225aU)))
#undef UNK_10048f98
#define UNK_10048f98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2262U)))
#undef _DAT_10048f90
#define _DAT_10048f90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x225aU)))
#undef uRam0000000010048f98
#define uRam0000000010048f98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2262U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10039de0(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar2 = uRam0000000010048f98;
  uVar1 = _DAT_10048f90;
  if ((param_2 <= param_1 || param_1 == (int *)0x0) || (*param_1 != 0)) {
    return;
  }
  piVar3 = param_1 + 1;
  if (param_1 + 1 < param_2) {
    piVar3 = param_2;
  }
  if (~(ulong)param_1 + (long)piVar3 < 0x1c) {
    piVar3 = param_1;
  }
  else {
    uVar4 = (~(ulong)param_1 + (long)piVar3 >> 2) + 1;
    uVar5 = uVar4 & 0xfffffffffffffff8;
    piVar3 = param_1 + uVar5;
    uVar6 = 0;
    do {
      *(undefined8 *)(param_1 + uVar6) = uVar1;
      *(undefined8 *)(param_1 + uVar6 + 2) = uVar2;
      *(undefined8 *)(param_1 + uVar6 + 4) = uVar1;
      *(undefined8 *)(param_1 + uVar6 + 4 + 2) = uVar2;
      uVar6 = uVar6 + 8;
    } while (uVar5 != uVar6);
    if (uVar4 == uVar5) {
      return;
    }
  }
  do {
    *piVar3 = 1;
    piVar3 = piVar3 + 1;
  } while (piVar3 < param_2);
  return;
}

#undef DAT_10048f90
#undef UNK_10048f98
#undef _DAT_10048f90
#undef uRam0000000010048f98

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_1004be10
#define DAT_1004be10 (*(int *)(((uintptr_t)pf_module_state + 0x50daU)))
#undef DAT_1004be14
#define DAT_1004be14 (*(uint *)(((uintptr_t)pf_module_state + 0x50deU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10039e80(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (DAT_1004be10 != 0)) {
    return;
  }
  if (DAT_1004be14 + 1 < 0x10000) {
    DAT_1004be14 = DAT_1004be14 + 1;
    return;
  }
  DAT_1004be14 = 0;
  DAT_1004be10 = 1;
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  DAT_1004be10 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef DAT_1004be10
#undef DAT_1004be14
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_1004be10
#define DAT_1004be10 (*(int *)(((uintptr_t)pf_module_state + 0x50daU)))
#undef DAT_1004be14
#define DAT_1004be14 (*(uint *)(((uintptr_t)pf_module_state + 0x50deU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039f10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10039f10(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1004be10 != 0) {
    return;
  }
  if (DAT_1004be14 + 1 < 0x10000) {
    DAT_1004be14 = DAT_1004be14 + 1;
    return;
  }
  DAT_1004be14 = 0;
  DAT_1004be10 = 1;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  DAT_1004be10 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef DAT_1004be10
#undef DAT_1004be14
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039fa0
 */

void recovered_10039fa0(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039fb0
 */

void recovered_10039fb0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10037fa0((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039fc0
 */

void recovered_10039fc0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10037ed0((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039fd0
 */

float recovered_10039fd0(ulong in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10038050(in_RDI);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10039fe0
 */

float recovered_10039fe0(ulong in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100380a0(in_RDI);
  return (float)dVar1;
}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10039ff0(uint8_t *pointer,...){pf_snow_atomic_enter();uint8_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a020(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a050(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a080(uint8_t *pointer,uint8_t *expected,uint8_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a0c0(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a0f0(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a120(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a150(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a180(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003a1b0(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a1e0(uint16_t *pointer,...){pf_snow_atomic_enter();uint16_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a210(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a240(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a270(uint16_t *pointer,uint16_t *expected,uint16_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a2b0(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a2e0(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a310(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a340(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a370(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003a3a0(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a3d0(uint32_t *pointer,...){pf_snow_atomic_enter();uint32_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a400(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a430(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a460(uint32_t *pointer,uint32_t *expected,uint32_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a4a0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a4d0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a500(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a530(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a560(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003a590(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a5c0(uint64_t *pointer,...){pf_snow_atomic_enter();uint64_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a5f0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a620(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a650(uint64_t *pointer,uint64_t *expected,uint64_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a690(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a6c0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a6f0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a720(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a750(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a780(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
bool recovered_1003a7b0(uint8_t *pointer,...){pf_snow_atomic_enter();bool old=*pointer!=0;*pointer=1;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a7e0(uint8_t *pointer,...){pf_snow_atomic_enter();*pointer=0;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a810(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)value[i]=pointer[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a860(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)pointer[i]=value[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003a8b0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++){uint8_t old=pointer[i];pointer[i]=value[i];out[i]=old;}pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003a920(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...){pf_snow_atomic_enter();uint64_t result=value!=0;if(value){for(size_t i=0;i<size;i++)if(pointer[i]!=value[i])result=0;for(size_t i=0;i<size;i++){if(result)pointer[i]=desired[i];else value[i]=pointer[i];}}pf_snow_atomic_leave();return result;}


#undef DAT_1004ab88
#define DAT_1004ab88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e52U)))
#undef DAT_1004afa6
#define DAT_1004afa6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4270U)))
#undef DAT_1004b6a8
#define DAT_1004b6a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4972U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003a9c0
 */

void recovered_1003a9c0(long param_1,ulong in_RCX,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10035510(&DAT_1004ab88,(void *)param_1,0xb20);
  DAT_1004b6a8 = 1;
  recovered_1003aa00(&DAT_1004afa6,in_RCX,in_R8);
  return;
}

#undef DAT_1004ab88
#undef DAT_1004afa6
#undef DAT_1004b6a8

#undef DAT_1004a980
#define DAT_1004a980 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c4aU)))
#undef DAT_1004be20
#define DAT_1004be20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50eaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003aa00
 */

void recovered_1003aa00(char *param_1,ulong in_RCX,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;

  recovered_10036210(&DAT_1004be20,0,0x800);
  recovered_10036210(&DAT_1004a980,0,0x208);
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    uVar7 = 0;
    if (cVar2 != '\0') {
      uVar4 = 0;
      uVar8 = uVar7;
      do {
        lVar3 = 0;
        pcVar5 = param_1;
        while ((cVar2 != '\0' && (cVar2 != '\n'))) {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          lVar3 = lVar3 + -1;
          cVar2 = *pcVar1;
        }
        uVar7 = uVar8;
        if (lVar3 != 0) {
          uVar6 = (uVar4 - lVar3) + 1;
          if (uVar6 < 0x800) {
            uVar7 = (ulong)((int)uVar8 + 1);
            (&DAT_1004a980)[uVar8] = &DAT_1004be20 + uVar4;
            recovered_10035510(&DAT_1004be20 + uVar4,param_1,-lVar3);
            cVar2 = *pcVar5;
            uVar4 = uVar6;
          }
        }
        bVar9 = cVar2 == '\n';
        cVar2 = pcVar5[bVar9];
        if (cVar2 == '\0') break;
        param_1 = pcVar5 + bVar9;
        uVar8 = uVar7;
      } while ((uint)uVar7 < 0x40);
    }
    (&DAT_1004a980)[uVar7] = 0;
  }
  return;
}

#undef DAT_1004a980
#undef DAT_1004be20

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_358 (*(char (*)[256])(frame + 24))
#define local_258 (*(char (*)[248])(frame + 280))
#define local_160 (*(void * *)(frame + 528))
#define local_158 (*(uint *)(frame + 536))
#define local_150 (*(undefined4 *)(frame + 544))
#define local_14c (*(char (*)[248])(frame + 548))
#define local_54 (*(uint *)(frame + 796))
#define local_50 (*(uint *)(frame + 800))
#define local_4c (*(undefined4 *)(frame + 804))
#define local_48 (*(undefined * *)(frame + 808))
#define local_40 (*(undefined8 * *)(frame + 816))
#define local_31 (*(byte *)(frame + 831))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ab00
 */

/* WARNING: Type propagation algorithm not settling */

void * recovered_1003ab00(char *path,char *mode)

{
  unsigned char frame[912] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 *pointer;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  void *destination;
  char *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 *in_R8;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qa_00;
  undefined8 in_XMM0_Qa_01;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  local_48 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                in_XMM6_Qa,in_XMM7_Qa);
  if (mode == (char *)0x0) {
    DAT_1004a954 = 0x16;
    return (void *)0x0;
  }
  pcVar8 = mode;
  do {
    cVar1 = *pcVar8;
    if (cVar1 == 'w') break;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar8 = mode;
  do {
    cVar2 = *pcVar8;
    if (cVar2 == 'a') break;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  do {
    cVar3 = *mode;
    if (cVar3 == '+') break;
    mode = mode + 1;
  } while (cVar3 != '\0');
  if (path == (char *)0x0 || local_48 == (undefined *)0x0) {
    DAT_1004a954 = 0x16;
    return (void *)0x0;
  }
  uVar7 = recovered_1003b070((long)local_48,path,local_258,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                             in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  if ((char)uVar7 == '\0') {
    DAT_1004a954 = 0x3f;
    return (void *)0x0;
  }
  local_40 = recovered_10035420(0x140);
  if (local_40 == (undefined8 *)0x0) {
    DAT_1004a954 = 0xc;
    return (void *)0x0;
  }
  recovered_10036210(local_40,0,0x140);
  local_31 = cVar3 == '\0' && cVar2 == '\0';
  iVar6 = 3;
  if (cVar1 == '\0') {
    iVar6 = (uint)(cVar3 != '\0' || cVar2 != '\0') * 2 + 1;
  }
  *local_40 = 0x454474c46;
  iVar5 = iVar6 + 4;
  if (cVar2 == '\0') {
    iVar5 = iVar6;
  }
  *(int *)(local_40 + 1) = iVar5;
  *(undefined4 *)((long)local_40 + 0xc) = 0xffffffff;
  *(undefined4 *)((long)local_40 + 0x14) = 0xffffffff;
  pf_varargs_10039b90__8_((char *)(local_40 + 3),0xf1,&DAT_100489c0,(ulonglong)local_258);
  if ((local_31 & cVar1 != '\0') != 0) goto LAB_1003ae26;
  recovered_10036210(&local_160,0,0x108);
  uVar7 = recovered_1003b070((long)local_48,local_258,local_358,in_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,
                             in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  if ((char)uVar7 != '\0') {
    recovered_10036210(&local_54,0,0xc);
    iVar6 = recovered_1003e780((long)local_48,local_358,(long)&local_54,in_XMM0_Qa_01,in_XMM1_Qa,
                               in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if (local_54 != 0 && iVar6 != 0) {
      local_160 = (void *)(ulong)local_54;
      local_158 = local_50;
      local_150 = local_4c;
      pf_varargs_10039b90__8_(local_14c,0xf1,&DAT_100489c0,(ulonglong)local_358);
      local_40[0x22] = local_160;
      uVar7 = (ulong)local_158;
      local_40[0x23] = uVar7;
      if (cVar2 == '\0') {
        if ((cVar3 == '\0') || (local_158 == 0)) goto LAB_1003ae26;
      }
      else if (uVar7 == 0) goto LAB_1003ae26;
      uVar9 = local_40[0x26];
      if (uVar9 < uVar7) {
        uVar4 = 0x100;
        if (uVar9 != 0) {
          uVar4 = uVar9;
        }
        do {
          uVar9 = uVar4;
          uVar4 = uVar9 * 2;
        } while (uVar9 < uVar7);
        destination = recovered_100354c0((void *)local_40[0x24],uVar9);
        if (destination == (void *)0x0) {
          *(undefined1 *)((long)local_40 + 0x11) = 1;
          uVar10 = 0xc;
          goto LAB_1003accc;
        }
        local_40[0x24] = destination;
        local_40[0x26] = uVar9;
        uVar7 = (ulong)local_158;
      }
      else {
        destination = (void *)local_40[0x24];
      }
      recovered_10035510(destination,local_160,uVar7);
      local_40[0x25] = (ulong)local_158;
      uVar7 = 0;
      if (cVar2 != '\0') {
        uVar7 = (ulong)local_158;
      }
      local_40[0x27] = uVar7;
      goto LAB_1003ae26;
    }
  }
  if ((cVar2 == '\0' && cVar1 == '\0') && cVar3 == '\0') {
    uVar10 = 2;
LAB_1003accc:
    recovered_10035470(local_40);
    DAT_1004a954 = uVar10;
    return (void *)0x0;
  }
LAB_1003ae26:
  iVar6 = recovered_1003b300((long)local_40);
  pointer = local_40;
  if (iVar6 < 0) {
    recovered_10035470((void *)local_40[0x24]);
    recovered_10035470(pointer);
    DAT_1004a954 = 0x18;
    return (void *)0x0;
  }
  return local_40;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef local_358
#undef local_258
#undef local_160
#undef local_158
#undef local_150
#undef local_14c
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_31

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004ab88
#define DAT_1004ab88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e52U)))
#undef DAT_1004ac95
#define DAT_1004ac95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f5fU)))
#undef DAT_1004afa6
#define DAT_1004afa6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4270U)))
#undef DAT_1004b1a8
#define DAT_1004b1a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4472U)))
#undef DAT_1004b1b0
#define DAT_1004b1b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x447aU)))
#undef DAT_1004b3b0
#define DAT_1004b3b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x467aU)))
#undef DAT_1004b5b0
#define DAT_1004b5b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x487aU)))
#undef DAT_1004b6a8
#define DAT_1004b6a8 (*(char *)(((uintptr_t)pf_module_state + 0x4972U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(uint *)(0x6944U))
#undef _DAT_1004b1a8
#define _DAT_1004b1a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4472U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ae80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
recovered_1003ae80(undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;

  if (DAT_1004b6a8 == '\0') {
    puVar3 = (undefined *)0x0;
    recovered_10036210(&DAT_1004ab88,0,0xb20);
    recovered_10036210(&DAT_1004ab88,0,0xb20);
    if (_DAT_00006800 == 0x50414d57) {
      if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x147 < _DAT_00006808)) &&
         ((code *)(ulong)_DAT_00006944 != (code *)0x0)) {
        iVar1 = (*(code *)(ulong)_DAT_00006944)(&DAT_1004ab88);
        uVar8 = 0;
        if (iVar1 != 0) {
          pf_varargs_10039b90__8_((char *)&DAT_1004b3b0,0x200,&DAT_100489c0,((uintptr_t)pf_module_state + 0x4070U));
          uVar4 = (ulong)DAT_1004b3b0;
          if (DAT_1004b3b0 == 0) {
LAB_1003b015:
            _DAT_1004b1a8 = (undefined4)uVar8;
            puVar3 = &DAT_100489e8;
            if (DAT_1004ac95 != '\0') {
              puVar3 = &DAT_1004ac95;
            }
            pf_varargs_10039b90__8_(&DAT_1004b5b0,0xf1,&DAT_100489c0,(ulonglong)puVar3);
            DAT_1004b6a8 = 1;
            recovered_1003aa00(&DAT_1004afa6,(ulong)puVar3,in_R8);
            return &DAT_1004ab88;
          }
          uVar2 = 0;
          pbVar7 = &DAT_1004b3b0;
LAB_1003af84:
          iVar1 = (int)uVar4;
          pbVar6 = pbVar7 + 1;
          if ((byte)uVar4 < 0x28) {
            if ((0x100002600U >> (uVar4 & 0x3f) & 1) != 0) {
              uVar4 = (ulong)*pbVar6;
              pbVar7 = pbVar6;
              goto LAB_1003af84;
            }
            if ((0x8400000000U >> (uVar4 & 0x3f) & 1) == 0) {
              if (uVar4 != 0) goto LAB_1003afa2;
              uVar8 = uVar2 & 0xffffffff;
              goto LAB_1003b015;
            }
          }
          else {
LAB_1003afa2:
            iVar1 = 0;
            pbVar6 = pbVar7;
          }
          uVar8 = uVar2 + 1;
          (&DAT_1004b1b0)[uVar2] = pbVar6;
          bVar5 = *pbVar6;
          if (bVar5 != 0) {
            do {
              pbVar7 = pbVar6 + 1;
              if (iVar1 == 0) {
                if ((bVar5 < 0x21) && ((0x100002600U >> ((ulong)bVar5 & 0x3f) & 1) != 0))
                goto LAB_1003afe9;
              }
              else if (iVar1 == (char)bVar5) goto LAB_1003afe9;
              bVar5 = *pbVar7;
              pbVar6 = pbVar7;
              if (bVar5 == 0) break;
            } while( true );
          }
          goto LAB_1003b015;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
  else {
    puVar3 = &DAT_1004ab88;
  }
  return puVar3;
LAB_1003afe9:
  *pbVar6 = 0;
  uVar4 = (ulong)*pbVar7;
  if ((*pbVar7 == 0) || (bVar9 = 0x3e < uVar2, uVar2 = uVar8, bVar9)) goto LAB_1003b015;
  goto LAB_1003af84;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef DAT_100489c0
#undef DAT_100489e8
#undef DAT_1004ab88
#undef DAT_1004ac95
#undef DAT_1004afa6
#undef DAT_1004b1a8
#undef DAT_1004b1b0
#undef DAT_1004b3b0
#undef DAT_1004b5b0
#undef DAT_1004b6a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef _DAT_1004b1a8

#undef DAT_10047613
#define DAT_10047613 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8ddU)))
#undef DAT_100487e2
#define DAT_100487e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aacU)))
#undef DAT_100487ec
#define DAT_100487ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab6U)))
#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef str_100487e6
#define str_100487e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ab0U)))
#define local_128 (*(char (*)[248])(frame + 792))
#define auStack_428 (*(undefined8 (*)[64])(frame + 24))
#define local_228 (*(char *)(frame + 536))
#define local_227 (*(char (*)[255])(frame + 537))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b070
 */

ulong recovered_1003b070(long param_1,char *param_2,undefined1 *param_3,undefined8 in_XMM0_Qa,
                        undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                        undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                        undefined8 in_XMM7_Qa)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;

  if (param_3 == (undefined1 *)0x0) {
    uVar8 = 0;
    goto LAB_1003b2ea;
  }
  *param_3 = 0;
  pcVar5 = &DAT_10047613;
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
LAB_1003b0cf:
    param_2 = pcVar5;
    pcVar5 = (char *)(param_1 + 0xa28);
    if (*(char *)(param_1 + 0xa28) == '\0') {
      pcVar5 = &DAT_100489e8;
    }
    iVar2 = recovered_10036fb0(pcVar5,&DAT_100489e8);
    if (iVar2 == 0) {
      pcVar5 = &DAT_100487e2;
      goto LAB_1003b12c;
    }
    pf_varargs_10039b90__8__8_(local_128,0xf1,str_100487e6,(ulonglong)pcVar5,(ulonglong)param_2);
  }
  else {
    if ((cVar1 != '\\') && (cVar1 != '/')) {
      pcVar5 = param_2;
      goto LAB_1003b0cf;
    }
    pcVar5 = &DAT_100489c0;
LAB_1003b12c:
    pf_varargs_10039b90__8_(local_128,0xf1,pcVar5,(ulonglong)param_2);
  }
  uVar7 = 0;
  pcVar5 = &local_228;
  pf_varargs_10039b90__8_(pcVar5,0xf1,&DAT_100489c0,(ulonglong)local_128);
  if (local_228 != '\0') {
    uVar8 = 0;
    while( true ) {
      while ((uVar7 = (uint)uVar8, local_228 == '/' || (local_228 == '\\'))) {
        pcVar6 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        local_228 = *pcVar6;
      }
      pcVar6 = pcVar5;
      if (local_228 == '\0') break;
      do {
        if ((local_228 == '/') || (local_228 == '\\')) {
          bVar9 = 1;
          goto LAB_1003b1c1;
        }
        local_228 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      } while (local_228 != '\0');
      bVar9 = 0;
LAB_1003b1c1:
      *pcVar6 = '\0';
      iVar2 = recovered_10036fb0(pcVar5,&DAT_10047613);
      uVar3 = uVar8;
      if (iVar2 != 0) {
        iVar2 = recovered_10036fb0(pcVar5,&DAT_100487ec);
        if (iVar2 == 0) {
          uVar3 = (ulong)(uVar7 - 1);
          if (uVar7 == 0) {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = (ulong)(uVar7 + 1);
          auStack_428[uVar8] = pcVar5;
        }
      }
      uVar7 = (uint)uVar3;
      pcVar5 = pcVar6 + bVar9;
      if (((bVar9 == 0) || (local_228 = *pcVar5, local_228 == '\0')) ||
         (uVar8 = uVar3, 0x3f < uVar7)) break;
    }
  }
  if (uVar7 == 0) {
    uVar8 = CONCAT71((int7)((ulong)pcVar5 >> 8),1);
LAB_1003b2d4:
    pf_varargs_10039b90___(param_3,0xf1,&DAT_100489e8);
  }
  else {
    if (uVar7 == 0x40) {
      for (; (cVar1 = *pcVar5, cVar1 == '/' || (cVar1 == '\\')); pcVar5 = pcVar5 + 1) {
      }
      if (cVar1 != '\0') {
LAB_1003b2cc:
        uVar8 = 0;
        goto LAB_1003b2d4;
      }
      *param_3 = 0;
    }
    else {
      *param_3 = 0;
    }
    uVar8 = 0;
    do {
      uVar3 = recovered_10036f80(param_3);
      pcVar5 = (char *)auStack_428[uVar8];
      uVar4 = recovered_10036f80(pcVar5);
      if (0xf1 < uVar4 + uVar3 + 2) goto LAB_1003b2cc;
      param_3[uVar3] = 0x2f;
      pf_varargs_10039b90__8_(param_3 + uVar3 + 1,0xf0 - uVar3,&DAT_100489c0,(ulonglong)pcVar5);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_1003b2ea:
  return uVar8 & 0xffffffff;
}

#undef DAT_10047613
#undef DAT_100487e2
#undef DAT_100487ec
#undef DAT_100489c0
#undef DAT_100489e8
#undef str_100487e6
#undef local_128
#undef auStack_428
#undef local_228
#undef local_227

#undef DAT_1004a868
#define DAT_1004a868 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b32U)))
#undef DAT_1004a870
#define DAT_1004a870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b3aU)))
#undef DAT_1004a878
#define DAT_1004a878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b42U)))
#undef DAT_1004a880
#define DAT_1004a880 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b4aU)))
#undef DAT_1004a888
#define DAT_1004a888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b52U)))
#undef DAT_1004a890
#define DAT_1004a890 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b5aU)))
#undef DAT_1004a898
#define DAT_1004a898 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b62U)))
#undef DAT_1004a8a0
#define DAT_1004a8a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b6aU)))
#undef DAT_1004a8a8
#define DAT_1004a8a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b72U)))
#undef DAT_1004a8b0
#define DAT_1004a8b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b7aU)))
#undef DAT_1004a8b8
#define DAT_1004a8b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b82U)))
#undef DAT_1004a8c0
#define DAT_1004a8c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b8aU)))
#undef DAT_1004a8c8
#define DAT_1004a8c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b92U)))
#undef DAT_1004a8d0
#define DAT_1004a8d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b9aU)))
#undef DAT_1004a8d8
#define DAT_1004a8d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3ba2U)))
#undef DAT_1004a8e0
#define DAT_1004a8e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3baaU)))
#undef DAT_1004a8e8
#define DAT_1004a8e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bb2U)))
#undef DAT_1004a8f0
#define DAT_1004a8f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bbaU)))
#undef DAT_1004a8f8
#define DAT_1004a8f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bc2U)))
#undef DAT_1004a900
#define DAT_1004a900 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bcaU)))
#undef DAT_1004a908
#define DAT_1004a908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bd2U)))
#undef DAT_1004a910
#define DAT_1004a910 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bdaU)))
#undef DAT_1004a918
#define DAT_1004a918 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3be2U)))
#undef DAT_1004a920
#define DAT_1004a920 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3beaU)))
#undef DAT_1004a928
#define DAT_1004a928 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bf2U)))
#undef DAT_1004a930
#define DAT_1004a930 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3bfaU)))
#undef DAT_1004a938
#define DAT_1004a938 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c02U)))
#undef DAT_1004a940
#define DAT_1004a940 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c0aU)))
#undef DAT_1004a948
#define DAT_1004a948 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c12U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b300
 */

undefined4 recovered_1003b300(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long *plVar2;

  if (DAT_1004a868 == 0) {
    plVar2 = &DAT_1004a868;
    uVar1 = 3;
  }
  else if (DAT_1004a870 == 0) {
    plVar2 = &DAT_1004a870;
    uVar1 = 4;
  }
  else if (DAT_1004a878 == 0) {
    plVar2 = &DAT_1004a878;
    uVar1 = 5;
  }
  else if (DAT_1004a880 == 0) {
    plVar2 = &DAT_1004a880;
    uVar1 = 6;
  }
  else if (DAT_1004a888 == 0) {
    plVar2 = &DAT_1004a888;
    uVar1 = 7;
  }
  else if (DAT_1004a890 == 0) {
    plVar2 = &DAT_1004a890;
    uVar1 = 8;
  }
  else if (DAT_1004a898 == 0) {
    plVar2 = &DAT_1004a898;
    uVar1 = 9;
  }
  else if (DAT_1004a8a0 == 0) {
    plVar2 = &DAT_1004a8a0;
    uVar1 = 10;
  }
  else if (DAT_1004a8a8 == 0) {
    plVar2 = &DAT_1004a8a8;
    uVar1 = 0xb;
  }
  else if (DAT_1004a8b0 == 0) {
    plVar2 = &DAT_1004a8b0;
    uVar1 = 0xc;
  }
  else if (DAT_1004a8b8 == 0) {
    plVar2 = &DAT_1004a8b8;
    uVar1 = 0xd;
  }
  else if (DAT_1004a8c0 == 0) {
    plVar2 = &DAT_1004a8c0;
    uVar1 = 0xe;
  }
  else if (DAT_1004a8c8 == 0) {
    plVar2 = &DAT_1004a8c8;
    uVar1 = 0xf;
  }
  else if (DAT_1004a8d0 == 0) {
    plVar2 = &DAT_1004a8d0;
    uVar1 = 0x10;
  }
  else if (DAT_1004a8d8 == 0) {
    plVar2 = &DAT_1004a8d8;
    uVar1 = 0x11;
  }
  else if (DAT_1004a8e0 == 0) {
    plVar2 = &DAT_1004a8e0;
    uVar1 = 0x12;
  }
  else if (DAT_1004a8e8 == 0) {
    plVar2 = &DAT_1004a8e8;
    uVar1 = 0x13;
  }
  else if (DAT_1004a8f0 == 0) {
    plVar2 = &DAT_1004a8f0;
    uVar1 = 0x14;
  }
  else if (DAT_1004a8f8 == 0) {
    plVar2 = &DAT_1004a8f8;
    uVar1 = 0x15;
  }
  else if (DAT_1004a900 == 0) {
    plVar2 = &DAT_1004a900;
    uVar1 = 0x16;
  }
  else if (DAT_1004a908 == 0) {
    plVar2 = &DAT_1004a908;
    uVar1 = 0x17;
  }
  else if (DAT_1004a910 == 0) {
    plVar2 = &DAT_1004a910;
    uVar1 = 0x18;
  }
  else if (DAT_1004a918 == 0) {
    plVar2 = &DAT_1004a918;
    uVar1 = 0x19;
  }
  else if (DAT_1004a920 == 0) {
    plVar2 = &DAT_1004a920;
    uVar1 = 0x1a;
  }
  else if (DAT_1004a928 == 0) {
    plVar2 = &DAT_1004a928;
    uVar1 = 0x1b;
  }
  else if (DAT_1004a930 == 0) {
    plVar2 = &DAT_1004a930;
    uVar1 = 0x1c;
  }
  else if (DAT_1004a938 == 0) {
    plVar2 = &DAT_1004a938;
    uVar1 = 0x1d;
  }
  else if (DAT_1004a940 == 0) {
    plVar2 = &DAT_1004a940;
    uVar1 = 0x1e;
  }
  else {
    if (DAT_1004a948 != 0) {
      return 0xffffffff;
    }
    plVar2 = &DAT_1004a948;
    uVar1 = 0x1f;
  }
  *plVar2 = param_1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return uVar1;
}

#undef DAT_1004a868
#undef DAT_1004a870
#undef DAT_1004a878
#undef DAT_1004a880
#undef DAT_1004a888
#undef DAT_1004a890
#undef DAT_1004a898
#undef DAT_1004a8a0
#undef DAT_1004a8a8
#undef DAT_1004a8b0
#undef DAT_1004a8b8
#undef DAT_1004a8c0
#undef DAT_1004a8c8
#undef DAT_1004a8d0
#undef DAT_1004a8d8
#undef DAT_1004a8e0
#undef DAT_1004a8e8
#undef DAT_1004a8f0
#undef DAT_1004a8f8
#undef DAT_1004a900
#undef DAT_1004a908
#undef DAT_1004a910
#undef DAT_1004a918
#undef DAT_1004a920
#undef DAT_1004a928
#undef DAT_1004a930
#undef DAT_1004a938
#undef DAT_1004a940
#undef DAT_1004a948

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a590
#define DAT_1004a590 (*(void * *)(((uintptr_t)pf_module_state + 0x385aU)))
#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#undef DAT_1004a820
#define DAT_1004a820 (*(void * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define uStack_54 (*(uint *)(frame + 796))
#define uStack_50 (*(uint *)(frame + 800))
#define uStack_150 (*(undefined4 *)(frame + 544))
#define acStack_14c (*(char (*)[248])(frame + 548))
#define puStack_40 (*(undefined8 * *)(frame + 816))
#define bStack_31 (*(byte *)(frame + 831))
#define uStack_4c (*(undefined4 *)(frame + 804))
#define puStack_48 (*(undefined * *)(frame + 808))
#define pvStack_160 (*(void * *)(frame + 528))
#define uStack_158 (*(uint *)(frame + 536))
#define acStack_358 (*(char (*)[256])(frame + 24))
#define acStack_258 (*(char (*)[248])(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b680
 */

/* WARNING: Type propagation algorithm not settling */

void * recovered_1003b680(char *path,char *mode,void *stream)

{
  unsigned char frame[912] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 *pointer;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 *in_R8;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qa_00;
  undefined8 in_XMM0_Qa_01;
  undefined8 in_XMM0_Qa_02;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (stream != (void *)0x0) {
    if (*(int *)stream == 0x54474c46) {
      puVar8 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                  in_XMM6_Qa,in_XMM7_Qa);
      if (*(int *)stream == 0x54474c46) {
        if ((2 < *(int *)((long)stream + 4) - 1U) && (*(char *)((long)stream + 0x12) == '\x01')) {
          if ((puVar8 == (undefined *)0x0) ||
             (uVar9 = recovered_1003ba40((long)puVar8,(char *)((long)stream + 0x18),
                                         *(long *)((long)stream + 0x120),
                                         *(int *)((long)stream + 0x128),in_XMM0_Qa_02,in_XMM1_Qa,
                                         in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                                         in_XMM7_Qa), (int)uVar9 == 0)) {
            *(undefined1 *)((long)stream + 0x11) = 1;
            DAT_1004a954 = 5;
          }
          else {
            *(undefined1 *)((long)stream + 0x12) = 0;
          }
        }
      }
      else {
        DAT_1004a954 = 9;
      }
      if ((ulong)*(uint *)((long)stream + 0xc) < 0x20) {
        (&(*(int **)(pf_module_state+0x3b1aU)))[*(uint *)((long)stream + 0xc)] = 0;
      }
      if (((DAT_1004a590 != stream) && (DAT_1004a6d8 != stream)) && (DAT_1004a820 != stream)) {
        recovered_10035470(*(void **)((long)stream + 0x120));
        recovered_10036210(stream,0,0x140);
        recovered_10035470(stream);
      }
    }
    else {
      DAT_1004a954 = 9;
    }
    pvVar10 = recovered_1003ab00(path,mode);
    return pvVar10;
  }
  puStack_48 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                  in_XMM6_Qa,in_XMM7_Qa);
  if (mode == (char *)0x0) {
    DAT_1004a954 = 0x16;
    return (void *)0x0;
  }
  pcVar11 = mode;
  do {
    cVar1 = *pcVar11;
    if (cVar1 == 'w') break;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  pcVar11 = mode;
  do {
    cVar2 = *pcVar11;
    if (cVar2 == 'a') break;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  do {
    cVar3 = *mode;
    if (cVar3 == '+') break;
    mode = mode + 1;
  } while (cVar3 != '\0');
  if (path == (char *)0x0 || puStack_48 == (undefined *)0x0) {
    DAT_1004a954 = 0x16;
    return (void *)0x0;
  }
  uVar7 = recovered_1003b070((long)puStack_48,path,acStack_258,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                             in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  if ((char)uVar7 == '\0') {
    DAT_1004a954 = 0x3f;
    return (void *)0x0;
  }
  puStack_40 = recovered_10035420(0x140);
  if (puStack_40 == (undefined8 *)0x0) {
    DAT_1004a954 = 0xc;
    return (void *)0x0;
  }
  recovered_10036210(puStack_40,0,0x140);
  bStack_31 = cVar3 == '\0' && cVar2 == '\0';
  iVar6 = 3;
  if (cVar1 == '\0') {
    iVar6 = (uint)(cVar3 != '\0' || cVar2 != '\0') * 2 + 1;
  }
  *puStack_40 = 0x454474c46;
  iVar5 = iVar6 + 4;
  if (cVar2 == '\0') {
    iVar5 = iVar6;
  }
  *(int *)(puStack_40 + 1) = iVar5;
  *(undefined4 *)((long)puStack_40 + 0xc) = 0xffffffff;
  *(undefined4 *)((long)puStack_40 + 0x14) = 0xffffffff;
  pf_varargs_10039b90__8_((char *)(puStack_40 + 3),0xf1,&DAT_100489c0,(ulonglong)acStack_258);
  if ((bStack_31 & cVar1 != '\0') != 0) goto LAB_1003ae26;
  recovered_10036210(&pvStack_160,0,0x108);
  uVar7 = recovered_1003b070((long)puStack_48,acStack_258,acStack_358,in_XMM0_Qa_00,in_XMM1_Qa,
                             in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  if ((char)uVar7 != '\0') {
    recovered_10036210(&uStack_54,0,0xc);
    iVar6 = recovered_1003e780((long)puStack_48,acStack_358,(long)&uStack_54,in_XMM0_Qa_01,
                               in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                               in_XMM7_Qa);
    if (uStack_54 != 0 && iVar6 != 0) {
      pvStack_160 = (void *)(ulong)uStack_54;
      uStack_158 = uStack_50;
      uStack_150 = uStack_4c;
      pf_varargs_10039b90__8_(acStack_14c,0xf1,&DAT_100489c0,(ulonglong)acStack_358);
      puStack_40[0x22] = pvStack_160;
      uVar7 = (ulong)uStack_158;
      puStack_40[0x23] = uVar7;
      if (cVar2 == '\0') {
        if ((cVar3 == '\0') || (uStack_158 == 0)) goto LAB_1003ae26;
      }
      else if (uVar7 == 0) goto LAB_1003ae26;
      uVar12 = puStack_40[0x26];
      if (uVar12 < uVar7) {
        uVar4 = 0x100;
        if (uVar12 != 0) {
          uVar4 = uVar12;
        }
        do {
          uVar12 = uVar4;
          uVar4 = uVar12 * 2;
        } while (uVar12 < uVar7);
        pvVar10 = recovered_100354c0((void *)puStack_40[0x24],uVar12);
        if (pvVar10 == (void *)0x0) {
          *(undefined1 *)((long)puStack_40 + 0x11) = 1;
          uVar13 = 0xc;
          goto LAB_1003accc;
        }
        puStack_40[0x24] = pvVar10;
        puStack_40[0x26] = uVar12;
        uVar7 = (ulong)uStack_158;
      }
      else {
        pvVar10 = (void *)puStack_40[0x24];
      }
      recovered_10035510(pvVar10,pvStack_160,uVar7);
      puStack_40[0x25] = (ulong)uStack_158;
      uVar7 = 0;
      if (cVar2 != '\0') {
        uVar7 = (ulong)uStack_158;
      }
      puStack_40[0x27] = uVar7;
      goto LAB_1003ae26;
    }
  }
  if ((cVar2 == '\0' && cVar1 == '\0') && cVar3 == '\0') {
    uVar13 = 2;
LAB_1003accc:
    recovered_10035470(puStack_40);
    DAT_1004a954 = uVar13;
    return (void *)0x0;
  }
LAB_1003ae26:
  iVar6 = recovered_1003b300((long)puStack_40);
  pointer = puStack_40;
  if (iVar6 < 0) {
    recovered_10035470((void *)puStack_40[0x24]);
    recovered_10035470(pointer);
    DAT_1004a954 = 0x18;
    return (void *)0x0;
  }
  return puStack_40;
}

#undef DAT_100489c0
#undef DAT_1004a590
#undef DAT_1004a6d8
#undef DAT_1004a820
#undef DAT_1004a850
#undef DAT_1004a954
#undef uStack_54
#undef uStack_50
#undef uStack_150
#undef acStack_14c
#undef puStack_40
#undef bStack_31
#undef uStack_4c
#undef puStack_48
#undef pvStack_160
#undef uStack_158
#undef acStack_358
#undef acStack_258

#undef DAT_1004a590
#define DAT_1004a590 (*(void * *)(((uintptr_t)pf_module_state + 0x385aU)))
#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#undef DAT_1004a820
#define DAT_1004a820 (*(void * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b7a0
 */

int recovered_1003b7a0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = recovered_1003b980(stream);
    if ((ulong)*(uint *)((long)stream + 0xc) < 0x20) {
      (&(*(int **)(pf_module_state+0x3b1aU)))[*(uint *)((long)stream + 0xc)] = 0;
    }
    if (((DAT_1004a590 != stream) && (DAT_1004a6d8 != stream)) && (DAT_1004a820 != stream)) {
      recovered_10035470(*(void **)((long)stream + 0x120));
      recovered_10036210(stream,0,0x140);
      recovered_10035470(stream);
    }
  }
  return iVar1;
}

#undef DAT_1004a590
#undef DAT_1004a6d8
#undef DAT_1004a820
#undef DAT_1004a850
#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b840
 */

void recovered_1003b840(char *in_RDI,char *in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003ab00(in_RDI,in_RSI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b850
 */

void recovered_1003b850(long in_RDI,char *in_RSI,int *in_RDX,undefined8 *in_R8,undefined8 in_XMM1_Qa
                       ,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003b680((char *)in_RDI,in_RSI,in_RDX);
  return;
}


#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b860
 */

void * recovered_1003b860(int fd,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int *piVar2;
  char *pcVar3;
  ulong uVar4;

  if ((uint)fd < 0x20) {
    piVar2 = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[(uint)fd];
    if (((piVar2 != (int *)0x0) && (mode != (char *)0x0)) && (*piVar2 == 0x54474c46)) {
      pcVar3 = mode;
      do {
        cVar1 = *pcVar3;
        if (cVar1 == '\0') {
          pcVar3 = mode;
          goto LAB_1003b8c0;
        }
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != 'w');
      goto LAB_1003b8ef;
    }
  }
  DAT_1004a954 = 9;
  return (void *)0x0;
  while (pcVar3 = pcVar3 + 1, cVar1 != 'a') {
LAB_1003b8c0:
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      pcVar3 = mode;
      goto LAB_1003b8e0;
    }
  }
  goto LAB_1003b8ef;
  while (pcVar3 = pcVar3 + 1, cVar1 != '+') {
LAB_1003b8e0:
    cVar1 = *pcVar3;
    if (cVar1 == '\0') goto LAB_1003b900;
  }
LAB_1003b8ef:
  *(byte *)(piVar2 + 2) = *(byte *)(piVar2 + 2) | 2;
LAB_1003b900:
  do {
    cVar1 = *mode;
    if (cVar1 == '\0') {
      return piVar2;
    }
    mode = mode + 1;
  } while (cVar1 != 'a');
  *(byte *)(piVar2 + 2) = *(byte *)(piVar2 + 2) | 4;
  uVar4 = *(ulong *)(piVar2 + 0x46);
  if (*(ulong *)(piVar2 + 0x46) < *(ulong *)(piVar2 + 0x4a)) {
    uVar4 = *(ulong *)(piVar2 + 0x4a);
  }
  *(ulong *)(piVar2 + 0x4e) = uVar4;
  return piVar2;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b940
 */

void * recovered_1003b940(char *command,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return (void *)0x0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b960
 */

int recovered_1003b960(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return -1;
}

#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b980
 */

int recovered_1003b980(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *in_R8;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  puVar2 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if (stream == (void *)0x0) {
    lVar4 = 0;
    do {
      if (*(void **)((long)&(*(int **)(pf_module_state+0x3b1aU)) + lVar4) != (void *)0x0) {
        recovered_1003b980(*(void **)((long)&(*(int **)(pf_module_state+0x3b1aU)) + lVar4));
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x100);
    iVar1 = 0;
  }
  else {
    if (*(int *)stream == 0x54474c46) {
      if (*(int *)((long)stream + 4) - 1U < 3) {
        return 0;
      }
      if (*(char *)((long)stream + 0x12) != '\x01') {
        return 0;
      }
      if ((puVar2 != (undefined *)0x0) &&
         (uVar3 = recovered_1003ba40((long)puVar2,(char *)((long)stream + 0x18),
                                     *(long *)((long)stream + 0x120),*(int *)((long)stream + 0x128),
                                     in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa), (int)uVar3 != 0)) {
        *(undefined1 *)((long)stream + 0x12) = 0;
        return 0;
      }
      *(undefined1 *)((long)stream + 0x11) = 1;
      DAT_1004a954 = 5;
    }
    else {
      DAT_1004a954 = 9;
    }
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_000068d0
#define DAT_000068d0 (*(uint8_t *)(0x68d0U))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
#undef _DAT_000068d0
#define _DAT_000068d0 (*(uint *)(0x68d0U))
#undef str_100487d9
#define str_100487d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aa3U)))
#undef str_10048e24
#define str_10048e24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eeU)))
#define local_228 (*(char (*)[256])(frame + 24))
#define local_128 (*(char (*)[264])(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ba40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1003ba40(long param_1,char *param_2,long param_3,int param_4,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if (((param_1 != 0) && (-1 < *(int *)(param_1 + 0x14))) && (param_3 != 0 || param_4 == 0)) {
    local_128[0] = '\0';
    uVar2 = recovered_1003b070(param_1,param_2,local_228,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa
                               ,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar1 = recovered_10036fb0(local_228,&DAT_100489e8);
      if (iVar1 == 0) {
        pf_varargs_10039b90___(local_128,0xf9,str_10048e24);
      }
      else {
        pf_varargs_10039b90__8_(local_128,0xf9,str_100487d9,(ulonglong)local_228);
      }
      uVar3 = 0;
      if (local_128[0] != '\0') {
        if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
           ((0xb < _DAT_00006808 && (0xd3 < _DAT_00006808)))) {
          if ((code *)(ulong)_DAT_000068d0 != (code *)0x0) {
            uVar3 = (*(code *)(ulong)_DAT_000068d0)(*(undefined4 *)(param_1 + 0x14),local_128,param_3,param_4);
          }
        }
        else if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
                ((0xb < _DAT_00006808 &&
                 ((0x3b < _DAT_00006808 && ((code *)(ulong)_DAT_00006838 != (code *)0x0)))))) {
          uVar3 = (*(code *)(ulong)_DAT_00006838)(local_128,param_3,param_4);
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_000068d0
#undef DAT_100489e8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838
#undef _DAT_000068d0
#undef str_100487d9
#undef str_10048e24
#undef local_228
#undef local_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bbc0
 */

void recovered_1003bbc0(int *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003b980(in_RDI);
  return;
}


#undef DAT_1004a590
#define DAT_1004a590 (*(int * *)(((uintptr_t)pf_module_state + 0x385aU)))
#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(int * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#undef DAT_1004a820
#define DAT_1004a820 (*(int * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bbd0
 */

undefined8
recovered_1003bbd0(int *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_XMM0_Qa;

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    DAT_1004a954 = 9;
    return 0xffffffff;
  }
  puVar1 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if (*param_1 == 0x54474c46) {
    uVar3 = 0;
    if ((param_1[1] - 1U < 3) || (*(char *)((long)param_1 + 0x12) != '\x01')) goto LAB_1003bc6a;
    if (puVar1 != (undefined *)0x0) {
      uVar2 = recovered_1003ba40((long)puVar1,(char *)(param_1 + 6),*(long *)(param_1 + 0x48),
                                 param_1[0x4a],in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                 in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
      uVar3 = 0;
      if ((int)uVar2 != 0) {
        *(undefined1 *)((long)param_1 + 0x12) = 0;
        goto LAB_1003bc6a;
      }
    }
    *(undefined1 *)((long)param_1 + 0x11) = 1;
    DAT_1004a954 = 5;
  }
  else {
    DAT_1004a954 = 9;
  }
  uVar3 = 0xffffffff;
LAB_1003bc6a:
  if ((ulong)(uint)param_1[3] < 0x20) {
    (&(*(int **)(pf_module_state+0x3b1aU)))[(uint)param_1[3]] = 0;
  }
  if (((DAT_1004a590 != param_1) && (DAT_1004a6d8 != param_1)) && (DAT_1004a820 != param_1)) {
    recovered_10035470(*(void **)(param_1 + 0x48));
    recovered_10036210(param_1,0,0x140);
    recovered_10035470(param_1);
  }
  return uVar3;
}

#undef DAT_1004a590
#undef DAT_1004a6d8
#undef DAT_1004a820
#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000694c
#define DAT_0000694c (*(uint8_t *)(0x694cU))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef DAT_10048e34
#define DAT_10048e34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20feU)))
#undef DAT_1004c620
#define DAT_1004c620 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x58eaU)))
#undef DAT_1004c628
#define DAT_1004c628 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x58f2U)))
#undef DAT_1004c630
#define DAT_1004c630 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58faU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000694c
#define _DAT_0000694c (*(uint *)(0x694cU))
#define local_238 (*(undefined1 (*)[520])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1003bce0(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong count_00;
  ulong uVar4;

  if (stream != (void *)0x0 && ptr != (void *)0x0) {
    if (count == 0) {
      return 0;
    }
    if (size == 0) {
      return 0;
    }
    if (*(int *)stream != 0x54474c46) {
      return 0;
    }
    uVar2 = count * size;
    if (*(int *)((long)stream + 4) == 1) {
      if (uVar2 != 0) {
        if (DAT_1004c628 <= DAT_1004c620) {
          local_238[0] = 0;
          if (_DAT_00006800 != 0x50414d57) {
            return 0;
          }
          if (_DAT_00006804 == 0) {
            return 0;
          }
          if (_DAT_00006808 < 0xc) {
            return 0;
          }
          if (_DAT_00006808 < 0x150) {
            return 0;
          }
          if ((code *)(ulong)_DAT_0000694c == (code *)0x0) {
            return 0;
          }
          iVar1 = (*(code *)(ulong)_DAT_0000694c)(0,local_238,0x1ff,&DAT_100489fc,0);
          if (iVar1 == 0) {
            return 0;
          }
          pf_varargs_10039b90__8_(&DAT_1004c630,0x200,&DAT_10048e34,(ulonglong)local_238);
          DAT_1004c620 = 0;
          DAT_1004c628 = recovered_10036f80(&DAT_1004c630);
        }
        uVar3 = DAT_1004c628 - DAT_1004c620;
        if (uVar2 <= DAT_1004c628 - DAT_1004c620) {
          uVar3 = uVar2;
        }
        recovered_10035510(ptr,&DAT_1004c630 + DAT_1004c620,uVar3);
        DAT_1004c620 = DAT_1004c620 + uVar3;
        if (0 < (long)uVar3) {
          if ((uVar3 | size) >> 0x20 == 0) {
            return (uVar3 & 0xffffffff) / (size & 0xffffffff);
          }
          return uVar3 / size;
        }
      }
    }
    else {
      if (uVar2 != 0 && *(int *)((long)stream + 0x14) != -1) {
        *(char *)ptr = (char)*(int *)((long)stream + 0x14);
        *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
        uVar2 = recovered_1003bce0((void *)((long)ptr + 1),1,uVar2 - 1,stream);
        uVar2 = uVar2 + 1;
        if ((uVar2 | size) >> 0x20 == 0) {
          return (uVar2 & 0xffffffff) / (size & 0xffffffff);
        }
        return uVar2 / size;
      }
      uVar3 = *(ulong *)((long)stream + 0x138);
      uVar4 = *(ulong *)((long)stream + 0x118) - uVar3;
      if (uVar3 <= *(ulong *)((long)stream + 0x118) && uVar4 != 0) {
        count_00 = uVar2;
        if (uVar4 < uVar2) {
          count_00 = uVar4;
        }
        recovered_10035510(ptr,(void *)(uVar3 + *(long *)((long)stream + 0x110)),count_00);
        *(long *)((long)stream + 0x138) = *(long *)((long)stream + 0x138) + count_00;
        if (uVar4 < uVar2) {
          *(undefined1 *)((long)stream + 0x10) = 1;
        }
        if ((count_00 | size) >> 0x20 == 0) {
          return (count_00 & 0xffffffff) / (size & 0xffffffff);
        }
        return count_00 / size;
      }
      *(undefined1 *)((long)stream + 0x10) = 1;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000694c
#undef DAT_100489fc
#undef DAT_10048e34
#undef DAT_1004c620
#undef DAT_1004c628
#undef DAT_1004c630
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000694c
#undef local_238

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006948
#define DAT_00006948 (*(uint8_t *)(0x6948U))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006948
#define _DAT_00006948 (*(uint *)(0x6948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bf70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1003bf70(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  if ((((stream == (void *)0x0 || ptr == (void *)0x0) || (count == 0)) || (size == 0)) ||
     (*(int *)stream != 0x54474c46)) {
    return 0;
  }
  uVar6 = count * size;
  if ((*(uint *)((long)stream + 4) & 0xfffffffe) == 2) {
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 &&
        ((0x14b < _DAT_00006808 && ((code *)(ulong)_DAT_00006948 != (code *)0x0)))))) {
      uVar3 = (*(code *)(ulong)_DAT_00006948)
                        ((*(uint *)((long)stream + 4) == 3) + '\x01',ptr,uVar6 & 0xffffffff);
      uVar6 = (ulong)uVar3;
    }
    else {
      uVar6 = 0;
    }
    if (size <= uVar6) {
      return uVar6 / (size & 0xffffffff);
    }
  }
  else {
    if ((*(byte *)((long)stream + 8) & 2) != 0) {
      uVar5 = *(ulong *)((long)stream + 0x130);
      lVar7 = *(long *)((long)stream + 0x138);
      uVar1 = lVar7 + uVar6;
      if (uVar5 < uVar1) {
        uVar2 = 0x100;
        if (uVar5 != 0) {
          uVar2 = uVar5;
        }
        do {
          uVar5 = uVar2;
          uVar2 = uVar5 * 2;
        } while (uVar5 < uVar1);
        pvVar4 = recovered_100354c0(*(void **)((long)stream + 0x120),uVar5);
        if (pvVar4 == (void *)0x0) {
          *(undefined1 *)((long)stream + 0x11) = 1;
          DAT_1004a954 = 0xc;
          return 0;
        }
        *(void **)((long)stream + 0x120) = pvVar4;
        *(ulong *)((long)stream + 0x130) = uVar5;
        lVar7 = *(long *)((long)stream + 0x138);
      }
      else {
        pvVar4 = *(void **)((long)stream + 0x120);
      }
      recovered_10035510((void *)(lVar7 + (long)pvVar4),ptr,uVar6);
      *(ulong *)((long)stream + 0x138) = uVar1;
      if (*(ulong *)((long)stream + 0x128) < uVar1) {
        *(ulong *)((long)stream + 0x128) = uVar1;
      }
      *(undefined1 *)((long)stream + 0x12) = 1;
      return count;
    }
    *(undefined1 *)((long)stream + 0x11) = 1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006948
#undef DAT_1004a954
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006948

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c110
 */

void recovered_1003c110(undefined1 *in_RDI,ulong in_RSI,long in_RDX,int *in_RCX,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003bce0(in_RDI,in_RSI,in_RDX,in_RCX);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c120
 */

void recovered_1003c120(long in_RDI,ulong in_RSI,ulong in_RDX,int *in_RCX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003bf70((void *)in_RDI,in_RSI,in_RDX,in_RCX);
  return;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c130
 */

int recovered_1003c130(void *stream,long offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    return -1;
  }
  if (origin == 0) {
    uVar1 = 0;
  }
  else if (origin == 2) {
    uVar1 = *(ulong *)((long)stream + 0x118);
    if (*(ulong *)((long)stream + 0x118) < *(ulong *)((long)stream + 0x128)) {
      uVar1 = *(ulong *)((long)stream + 0x128);
    }
  }
  else {
    if (origin != 1) {
      DAT_1004a954 = 0x16;
      return -1;
    }
    uVar1 = *(ulong *)((long)stream + 0x138);
  }
  if ((offset < 0) && (uVar1 < (ulong)-offset)) {
    DAT_1004a954 = 0x16;
    return -1;
  }
  *(ulong *)((long)stream + 0x138) = uVar1 + offset;
  *(undefined1 *)((long)stream + 0x10) = 0;
  *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c1d0
 */

undefined8 recovered_1003c1d0(int *param_1,long param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    DAT_1004a954 = 9;
    return 0xffffffff;
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else if (param_3 == 2) {
    uVar1 = *(ulong *)(param_1 + 0x46);
    if (*(ulong *)(param_1 + 0x46) < *(ulong *)(param_1 + 0x4a)) {
      uVar1 = *(ulong *)(param_1 + 0x4a);
    }
  }
  else {
    if (param_3 != 1) {
      DAT_1004a954 = 0x16;
      return 0xffffffff;
    }
    uVar1 = *(ulong *)(param_1 + 0x4e);
  }
  if ((param_2 < 0) && (uVar1 < (ulong)-param_2)) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x4e) = uVar1 + param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = -1;
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c270
 */

long recovered_1003c270(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    return -1;
  }
  return *(long *)((long)stream + 0x138);
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c2a0
 */

undefined8 recovered_1003c2a0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    DAT_1004a954 = 9;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x4e);
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c2d0
 */

int recovered_1003c2d0(void *stream,longlong offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    return -1;
  }
  if (origin == 0) {
    uVar1 = 0;
  }
  else if (origin == 2) {
    uVar1 = *(ulong *)((long)stream + 0x118);
    if (*(ulong *)((long)stream + 0x118) < *(ulong *)((long)stream + 0x128)) {
      uVar1 = *(ulong *)((long)stream + 0x128);
    }
  }
  else {
    if (origin != 1) {
      DAT_1004a954 = 0x16;
      return -1;
    }
    uVar1 = *(ulong *)((long)stream + 0x138);
  }
  if ((offset < 0) && (uVar1 < (ulong)-offset)) {
    DAT_1004a954 = 0x16;
    return -1;
  }
  *(ulong *)((long)stream + 0x138) = uVar1 + offset;
  *(undefined1 *)((long)stream + 0x10) = 0;
  *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c370
 */

longlong recovered_1003c370(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    return -1;
  }
  return *(longlong *)((long)stream + 0x138);
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c3a0
 */

int recovered_1003c3a0(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (pos == (long *)0x0) {
    DAT_1004a954 = 0x16;
    return -1;
  }
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)((long)stream + 0x138);
  }
  *pos = lVar1;
  return (int)(lVar1 >> 0x3f);
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c3f0
 */

int recovered_1003c3f0(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (pos != (long *)0x0) {
    if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
      DAT_1004a954 = 9;
      return -1;
    }
    if (-1 < *pos) {
      *(long *)((long)stream + 0x138) = *pos;
      *(undefined1 *)((long)stream + 0x10) = 0;
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
      return 0;
    }
  }
  DAT_1004a954 = 0x16;
  return -1;
}

#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c450
 */

int recovered_1003c450(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    uVar1 = (uint)*(byte *)((long)stream + 0x10);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c470
 */

undefined1 recovered_1003c470(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    uVar1 = (undefined1)param_1[4];
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c490
 */

int recovered_1003c490(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    uVar1 = (uint)*(byte *)((long)stream + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c4b0
 */

undefined1 recovered_1003c4b0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    uVar1 = *(undefined1 *)((long)param_1 + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c4d0
 */

void recovered_1003c4d0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    *(undefined2 *)((long)stream + 0x10) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c4f0
 */

void recovered_1003c4f0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c510
 */

int recovered_1003c510(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    return -1;
  }
  return *(int *)((long)stream + 0xc);
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c540
 */

int recovered_1003c540(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)((long)stream + 0x14);
    if (uVar1 == 0xffffffff) {
      uVar2 = recovered_1003bce0(&local_9,1,1,stream);
      uVar1 = 0xffffffff;
      if (uVar2 == 1) {
        uVar1 = (uint)local_9;
      }
    }
    else {
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    }
  }
  return uVar1;
}

#undef DAT_1004a954
#undef local_9

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c5b0
 */

int recovered_1003c5b0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)((long)stream + 0x14);
    if (uVar1 == 0xffffffff) {
      uVar2 = recovered_1003bce0(&local_9,1,1,stream);
      uVar1 = 0xffffffff;
      if (uVar2 == 1) {
        uVar1 = (uint)local_9;
      }
    }
    else {
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    }
  }
  return uVar1;
}

#undef DAT_1004a954
#undef local_9

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c620
 */

uint recovered_1003c620(int *param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    DAT_1004a954 = 9;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1[5];
    if (uVar1 == 0xffffffff) {
      uVar2 = recovered_1003bce0(&local_9,1,1,param_1);
      uVar1 = 0xffffffff;
      if (uVar2 == 1) {
        uVar1 = (uint)local_9;
      }
    }
    else {
      param_1[5] = -1;
    }
  }
  return uVar1;
}

#undef DAT_1004a954
#undef local_9

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000694c
#define DAT_0000694c (*(uint8_t *)(0x694cU))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000694c
#define _DAT_0000694c (*(uint *)(0x694cU))
#define local_a (*(byte (*)[2])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1003c690(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x14f < _DAT_00006808 && ((code *)(ulong)_DAT_0000694c != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)_DAT_0000694c)(0,local_a,2,&DAT_100489fc,0);
    bVar2 = 10;
    if (local_a[0] != 0) {
      bVar2 = local_a[0];
    }
    if (iVar1 != 0) {
      return (int)bVar2;
    }
  }
  return -1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000694c
#undef DAT_100489fc
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000694c
#undef local_a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c710
 */

int recovered_1003c710(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -1;
  if (((stream != (void *)0x0) && (ch != -1)) && (*(int *)stream == 0x54474c46)) {
    *(uint *)((long)stream + 0x14) = ch & 0xff;
    *(undefined1 *)((long)stream + 0x10) = 0;
    iVar1 = ch;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c740
 */

uint recovered_1003c740(uint param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (((param_2 != (int *)0x0) && (param_1 != 0xffffffff)) && (*param_2 == 0x54474c46)) {
    param_2[5] = param_1 & 0xff;
    *(undefined1 *)(param_2 + 4) = 0;
    uVar1 = param_1;
  }
  return uVar1;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define uStack_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c770
 */

char * recovered_1003c770(char *text,int count,void *stream)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong in_RAX;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;

  if (((stream == (void *)0x0 || text == (char *)0x0) || count < 1) ||
     (*(int *)stream != 0x54474c46)) {
    pcVar3 = (char *)0x0;
  }
  else {
    uVar5 = count - 1;
    uVar4 = 0;
    uStack_38 = in_RAX;
    do {
      if (uVar5 == uVar4) goto LAB_1003c824;
      uStack_38 = uStack_38 & 0xffffffffffffff;
      if (*(int *)stream != 0x54474c46) {
        DAT_1004a954 = 9;
        break;
      }
      uVar1 = *(uint *)((long)stream + 0x14);
      if (uVar1 == 0xffffffff) {
        uVar2 = recovered_1003bce0((void *)((long)&uStack_38 + 7),1,1,stream);
        if (uVar2 != 1) break;
        uVar1 = (uint)PF_PART1(uStack_38, 7);
      }
      else {
        *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
      }
      text[uVar4] = (char)uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar1 != 10);
    uVar5 = (uint)uVar4;
LAB_1003c824:
    text[(int)uVar5] = '\0';
    pcVar3 = (char *)0x0;
    if (uVar5 != 0) {
      pcVar3 = text;
    }
  }
  return pcVar3;
}

#undef DAT_1004a954
#undef uStack_38

#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c850
 */

int recovered_1003c850(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = (byte)ch;
  uVar2 = recovered_1003bf70(&local_9,1,1,stream);
  uVar1 = 0xffffffff;
  if (uVar2 == 1) {
    uVar1 = (uint)local_9;
  }
  return uVar1;
}

#undef local_9

#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c890
 */

int recovered_1003c890(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = (byte)ch;
  uVar2 = recovered_1003bf70(&local_9,1,1,stream);
  uVar1 = 0xffffffff;
  if (uVar2 == 1) {
    uVar1 = (uint)local_9;
  }
  return uVar1;
}

#undef local_9

#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c8d0
 */

int recovered_1003c8d0(int ch)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = (byte)ch;
  uVar2 = recovered_1003bf70(&local_9,1,1,DAT_1004a6d8);
  uVar1 = 0xffffffff;
  if (uVar2 == 1) {
    uVar1 = (uint)local_9;
  }
  return uVar1;
}

#undef DAT_1004a6d8
#undef local_9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c910
 */

int recovered_1003c910(char *text,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  ulong uVar1;

  if (text == (char *)0x0) {
    count = 0;
  }
  else {
    count = recovered_10036f80(text);
  }
  uVar1 = recovered_1003bf70(text,1,count,stream);
  return -(uint)(uVar1 != count);
}


#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#define local_19 (*(undefined1 *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c960
 */

int recovered_1003c960(char *text)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *stream;
  int iVar1;
  ulong uVar2;
  ulong uVar3;

  stream = DAT_1004a6d8;
  if (text == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10036f80(text);
  }
  uVar3 = recovered_1003bf70(text,1,uVar2,stream);
  iVar1 = -1;
  if (uVar3 == uVar2) {
    local_19 = 10;
    uVar2 = recovered_1003bf70(&local_19,1,1,DAT_1004a6d8);
    iVar1 = -(uint)(uVar2 != 1);
  }
  return iVar1;
}

#undef DAT_1004a6d8
#undef local_19

#define local_1018 (*(char (*)[4104])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c9e0
 */

int recovered_1003c9e0(void *stream,char *format,void *args)

{
  unsigned char frame[4176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong count;

  uVar1 = recovered_10038d10(local_1018,0x1000,format,args);
  if (-1 < (int)uVar1) {
    count = 0xfff;
    if (uVar1 < 0xfff) {
      count = (ulong)uVar1;
    }
    recovered_1003bf70(local_1018,1,count,stream);
  }
  return uVar1;
}

#undef local_1018

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_1003ca40(void *stream,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_1003c9e0(stream,format,(void *)args);__builtin_va_end(args);return result;}


#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#define local_1018 (*(char (*)[4104])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cb10
 */

int recovered_1003cb10(char *format,void *args)

{
  unsigned char frame[4176] __attribute__((aligned(16))) = {0};

  void *stream;
  uint uVar1;
  ulong count;

  stream = DAT_1004a6d8;
  uVar1 = recovered_10038d10(local_1018,0x1000,format,args);
  if (-1 < (int)uVar1) {
    count = 0xfff;
    if (uVar1 < 0xfff) {
      count = (ulong)uVar1;
    }
    recovered_1003bf70(local_1018,1,count,stream);
  }
  return uVar1;
}

#undef DAT_1004a6d8
#undef local_1018

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_1003cb70(char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_1003cb10(format,(void *)args);__builtin_va_end(args);return result;}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_1003cc40(char *buffer,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_1003cc60(char *buffer,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);__builtin_va_end(args);return result;}


#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cd00
 */

int recovered_1003cd00(char *buffer,char *format,void *args)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  byte *pbVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  bool bVar19;

  if (buffer == (char *)0x0) {
    buffer = &DAT_100489fc;
  }
  if (format == (char *)0x0) {
    format = &DAT_100489fc;
  }
  iVar15 = 0;
LAB_1003cd37:
  pbVar18 = (byte *)buffer;
LAB_1003cd40:
  uVar6 = (uint)(byte)*format;
  switch((uintptr_t)(uVar6)) {
  case 0:
    goto switchD_1003cd51_caseD_0;
  default:
    if (*pbVar18 != *format) {
      return iVar15;
    }
    pbVar18 = pbVar18 + 1;
    format = format + 1;
    goto LAB_1003cd40;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x20:
    while ((uVar6 - 9 < 5 || (uVar6 == 0x20))) {
      pbVar10 = (byte *)(format + 1);
      format = format + 1;
      uVar6 = (uint)*pbVar10;
    }
    for (; (*pbVar18 - 9 < 5 || (*pbVar18 == 0x20)); pbVar18 = pbVar18 + 1) {
    }
    goto LAB_1003cd40;
  case 0x25:
    break;
  }
  bVar3 = format[1];
  if (bVar3 != 0x25) goto LAB_1003cdd0;
  if (*pbVar18 != 0x25) {
    return iVar15;
  }
  pbVar18 = pbVar18 + 1;
  format = format + 2;
  goto LAB_1003cd40;
LAB_1003cdd0:
  pbVar10 = (byte *)(format + (ulong)(bVar3 == 0x2a) + 1);
  bVar11 = format[(ulong)(bVar3 == 0x2a) + 1];
  if ((byte)(bVar11 - 0x30U) < 10) {
    uVar16 = 0;
    do {
      uVar16 = (ulong)(byte)(bVar11 - 0x30U) + uVar16 * 10;
      bVar11 = pbVar10[1];
      pbVar10 = pbVar10 + 1;
    } while ((byte)(bVar11 - 0x30U) < 10);
    if (uVar16 == 0) goto LAB_1003ce24;
  }
  else {
LAB_1003ce24:
    uVar16 = 0xffffffffffffffff;
  }
  if (bVar11 == 0x7a) {
    pbVar10 = pbVar10 + 1;
    cVar5 = '\x05';
  }
  else if (bVar11 == 0x6c) {
    pbVar1 = pbVar10 + 2;
    pbVar2 = pbVar10 + 1;
    pbVar10 = pbVar10 + 1;
    if (*pbVar2 == 0x6c) {
      pbVar10 = pbVar1;
    }
    cVar5 = (*pbVar2 == 0x6c) + '\x03';
  }
  else if (bVar11 == 0x68) {
    pbVar1 = pbVar10 + 2;
    pbVar2 = pbVar10 + 1;
    pbVar10 = pbVar10 + 1;
    if (*pbVar2 == 0x68) {
      pbVar10 = pbVar1;
    }
    cVar5 = (*pbVar2 == 0x68) + '\x01';
  }
  else {
    cVar5 = '\0';
  }
  bVar11 = *pbVar10;
  format = (char *)(pbVar10 + (bVar11 != 0));
  uVar14 = (ulong)(bVar11 - 0x58);
  if (0x20 < bVar11 - 0x58) {
switchD_1003cd51_caseD_0:
    return iVar15;
  }
  if ((0x120821001U >> (uVar14 & 0x3f) & 1) == 0) {
    if (uVar14 != 0x1b) {
      if (uVar14 != 0xb) {
        return iVar15;
      }
      if (bVar3 == 0x2a) {
        lVar17 = 0;
      }
      else {
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          plVar9 = (long *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          plVar9 = *(long **)((long)args + 8);
          *(long **)((long)args + 8) = plVar9 + 1;
        }
        lVar17 = *plVar9;
      }
      uVar14 = 0;
      do {
        if (pbVar18[uVar14] == 0) {
          if (uVar14 == 0) {
            return iVar15;
          }
          break;
        }
        if (lVar17 != 0) {
          *(byte *)(lVar17 + uVar14) = pbVar18[uVar14];
        }
        uVar14 = uVar14 + 1;
      } while (uVar16 != uVar14);
      bVar19 = lVar17 != 0;
      buffer = (char *)(pbVar18 + uVar14);
      goto LAB_1003d453;
    }
    for (; (*pbVar18 - 9 < 5 || (*pbVar18 == 0x20)); pbVar18 = pbVar18 + 1) {
    }
    if (bVar3 == 0x2a) {
      lVar17 = 0;
    }
    else {
      uVar6 = *(uint *)args;
      if ((ulong)uVar6 < 0x29) {
        plVar9 = (long *)((ulong)uVar6 + *(long *)((long)args + 0x10));
        *(uint *)args = uVar6 + 8;
      }
      else {
        plVar9 = *(long **)((long)args + 8);
        *(long **)((long)args + 8) = plVar9 + 1;
      }
      lVar17 = *plVar9;
    }
    uVar14 = 0;
    do {
      bVar3 = pbVar18[uVar14];
      if (((ulong)bVar3 < 0x21) &&
         (uVar7 = uVar14, (0x100003e01U >> ((ulong)bVar3 & 0x3f) & 1) != 0)) goto LAB_1003d1c7;
      if (lVar17 != 0) {
        *(byte *)(lVar17 + uVar14) = bVar3;
      }
      uVar7 = uVar14 + 1;
      uVar14 = uVar7;
    } while (uVar16 != uVar7);
    uVar14 = uVar16;
LAB_1003d1c7:
    buffer = (char *)(pbVar18 + uVar7);
    if (uVar14 == 0) {
      return iVar15;
    }
    if (lVar17 == 0) goto LAB_1003cd37;
    *(undefined1 *)(lVar17 + uVar14) = 0;
  }
  else {
    for (; (bVar4 = *pbVar18, bVar4 - 9 < 5 || (bVar4 == 0x20)); pbVar18 = pbVar18 + 1) {
    }
    if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) {
      bVar19 = bVar4 != 0x2d;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar16 - 1;
    }
    else {
      bVar19 = true;
    }
    switch((uintptr_t)(uVar14)) {
    case 0:
    case 0x20:
switchD_1003cf14_caseD_0:
      uVar14 = 0x10;
      if (1 < uVar16) {
        bVar4 = *pbVar18;
        if (bVar4 != 0x30) goto joined_r0x1003d157;
        if ((pbVar18[1] | 0x20) != 0x78) goto LAB_1003d1f3;
        pbVar18 = pbVar18 + 2;
        uVar16 = uVar16 - 2;
      }
      break;
    default:
      uVar14 = 10;
      break;
    case 0x11:
      if (uVar16 < 2) {
        if (uVar16 == 0) {
          return iVar15;
        }
        bVar4 = *pbVar18;
        uVar14 = (ulong)((uint)(bVar4 != 0x30) * 2 + 8);
        uVar16 = 1;
        goto joined_r0x1003d157;
      }
      bVar4 = *pbVar18;
      uVar14 = 10;
      if (bVar4 != 0x30) goto joined_r0x1003d157;
      if ((pbVar18[1] | 0x20) == 0x78) {
        pbVar18 = pbVar18 + 2;
        uVar16 = uVar16 - 2;
        goto switchD_1003cf14_caseD_0;
      }
      uVar14 = 8;
LAB_1003d1f3:
      uVar6 = (uint)uVar14;
      buffer = (char *)(pbVar18 + uVar16);
      lVar17 = uVar16 - 1;
      iVar12 = 0x30;
      goto LAB_1003cfbb;
    case 0x17:
      uVar14 = 8;
    }
    if (uVar16 == 0) {
      return iVar15;
    }
    bVar4 = *pbVar18;
joined_r0x1003d157:
    if (bVar4 == 0) {
      return iVar15;
    }
    uVar6 = (uint)uVar14;
    buffer = (char *)(pbVar18 + uVar16);
    lVar17 = uVar16 - 1;
    iVar12 = (int)(char)bVar4;
    if ((byte)(bVar4 - 0x30U) < 10) {
LAB_1003cfbb:
      uVar13 = iVar12 - 0x30;
      if (uVar6 <= uVar13) {
        return iVar15;
      }
    }
    else {
      if ((byte)(bVar4 + 0x9f) < 6) {
        uVar13 = iVar12 - 0x57;
      }
      else {
        uVar13 = iVar12 - 0x37;
        if (5 < (byte)(bVar4 + 0xbf)) {
          uVar13 = 0xffffffff;
        }
      }
      if (uVar6 <= uVar13) {
        return iVar15;
      }
    }
    uVar16 = (ulong)uVar13;
    pbVar10 = pbVar18;
    if (lVar17 != 0) {
      do {
        pbVar10 = pbVar10 + 1;
        pbVar18 = pbVar18 + 1;
        bVar4 = *pbVar10;
        iVar12 = (int)(char)bVar4;
        if (iVar12 == 0) {
          buffer = (char *)pbVar18;
          break;
        }
        if ((byte)(bVar4 - 0x30U) < 10) {
          uVar13 = iVar12 - 0x30;
        }
        else if ((byte)(bVar4 + 0x9f) < 6) {
          uVar13 = iVar12 - 0x57;
        }
        else {
          uVar13 = iVar12 - 0x37;
          if (5 < (byte)(bVar4 + 0xbf)) {
            uVar13 = 0xffffffff;
          }
        }
        if (uVar6 <= uVar13) {
          buffer = (char *)pbVar10;
          break;
        }
        lVar17 = lVar17 + -1;
        uVar16 = (ulong)uVar13 + uVar16 * uVar14;
      } while (lVar17 != 0);
    }
    if (bVar3 == 0x2a) goto LAB_1003cd37;
    if ((bVar11 == 0x69) || (bVar11 == 100)) {
      uVar14 = -uVar16;
      if (bVar19) {
        uVar14 = uVar16;
      }
      switch((uintptr_t)(cVar5)) {
      case '\x01':
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(short *)*puVar8 = (short)uVar14;
        break;
      case '\x02':
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(char *)*puVar8 = (char)uVar14;
        break;
      case '\x03':
      case '\x04':
      case '\x05':
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(ulong *)*puVar8 = uVar14;
        break;
      default:
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(int *)*puVar8 = (int)uVar14;
      }
    }
    else {
      switch((uintptr_t)(cVar5)) {
      case '\x01':
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(short *)*puVar8 = (short)uVar16;
        break;
      case '\x02':
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(char *)*puVar8 = (char)uVar16;
        break;
      case '\x03':
      case '\x04':
      case '\x05':
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(ulong *)*puVar8 = uVar16;
        break;
      default:
        uVar6 = *(uint *)args;
        if ((ulong)uVar6 < 0x29) {
          puVar8 = (undefined8 *)((ulong)uVar6 + *(long *)((long)args + 0x10));
          *(uint *)args = uVar6 + 8;
        }
        else {
          puVar8 = *(undefined8 **)((long)args + 8);
          *(undefined8 **)((long)args + 8) = puVar8 + 1;
        }
        *(int *)*puVar8 = (int)uVar16;
      }
    }
  }
  bVar19 = true;
LAB_1003d453:
  iVar15 = iVar15 + (uint)bVar19;
  goto LAB_1003cd37;
}

#undef DAT_100489fc

#define uStack0000000000000008 (*(undefined1 *)(frame + 248))
#define local_d8 (*(undefined1 (*)[16])(frame + 24))
#define local_c8 (*(undefined8 *)(frame + 40))
#define local_c0 (*(undefined8 *)(frame + 48))
#define local_b8 (*(undefined8 *)(frame + 56))
#define local_b0 (*(undefined8 *)(frame + 64))
#define local_a8 (*(undefined8 *)(frame + 72))
#define local_98 (*(undefined8 *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 104))
#define local_78 (*(undefined8 *)(frame + 120))
#define local_68 (*(undefined8 *)(frame + 136))
#define local_58 (*(undefined8 *)(frame + 152))
#define local_48 (*(undefined8 *)(frame + 168))
#define local_38 (*(undefined8 *)(frame + 184))
#define local_28 (*(undefined8 *)(frame + 200))
#define local_20 (*(undefined1 * *)(frame + 208))
#define local_18 (*(undefined1 * *)(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d5c0
 */

int recovered_1003d5c0(char *buffer,char *format,...)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  local_18 = local_d8;
  local_20 = &uStack0000000000000008;
  local_28 = 0x3000000010;
  local_c8 = in_RDX;
  local_c0 = in_RCX;
  local_b8 = in_R8;
  local_b0 = in_R9;
  iVar1 = recovered_1003cd00(buffer,format,&local_28);
  return iVar1;
}

#undef uStack0000000000000008
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_38
#undef local_28
#undef local_20
#undef local_18

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d650
 */

int recovered_1003d650(void *stream,char *buffer,int mode,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (iVar1 = 0, *(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d680
 */

void recovered_1003d680(void *stream,char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_1004a954 = 9;
  }
  return;
}

#undef DAT_1004a954

#undef DAT_100489c4
#define DAT_100489c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8eU)))
#undef DAT_1004a820
#define DAT_1004a820 (*(void * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(int *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_19 (*(undefined1 *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d6a0
 */

void recovered_1003d6a0(char *prefix)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  char *text;

  pvVar1 = DAT_1004a820;
  if ((prefix != (char *)0x0) && (*prefix != '\0')) {
    uVar2 = recovered_10036f80(prefix);
    recovered_1003bf70(prefix,1,uVar2,pvVar1);
    pvVar1 = DAT_1004a820;
    uVar2 = recovered_10036f80(&DAT_100489c4);
    recovered_1003bf70(&DAT_100489c4,1,uVar2,pvVar1);
  }
  text = recovered_1003d760(DAT_1004a954);
  pvVar1 = DAT_1004a820;
  uVar2 = recovered_10036f80(text);
  recovered_1003bf70(text,1,uVar2,pvVar1);
  local_19 = 10;
  recovered_1003bf70(&local_19,1,1,DAT_1004a820);
  return;
}

#undef DAT_100489c4
#undef DAT_1004a820
#undef DAT_1004a954
#undef local_19

#undef str_10048afa
#define str_10048afa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dc4U)))
#undef str_10048b03
#define str_10048b03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcdU)))
#undef str_10048b1b
#define str_10048b1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1de5U)))
#undef str_10048b35
#define str_10048b35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dffU)))
#undef str_10048b45
#define str_10048b45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0fU)))
#undef str_10048b5d
#define str_10048b5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e27U)))
#undef str_10048b70
#define str_10048b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3aU)))
#undef str_10048b84
#define str_10048b84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4eU)))
#undef str_10048ba5
#define str_10048ba5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e6fU)))
#undef str_10048bbc
#define str_10048bbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e86U)))
#undef str_10048bce
#define str_10048bce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e98U)))
#undef str_10048bda
#define str_10048bda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ea4U)))
#undef str_10048bea
#define str_10048bea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eb4U)))
#undef str_10048bf9
#define str_10048bf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ec3U)))
#undef str_10048c0a
#define str_10048c0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ed4U)))
#undef str_10048c1e
#define str_10048c1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ee8U)))
#undef str_10048c36
#define str_10048c36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f00U)))
#undef str_10048c42
#define str_10048c42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0cU)))
#undef str_10048c53
#define str_10048c53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f1dU)))
#undef str_10048c66
#define str_10048c66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f30U)))
#undef str_10048c7f
#define str_10048c7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f49U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d760
 */

char * recovered_1003d760(int error_number)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(error_number)) {
  case 0:
    return str_10048afa;
  case 1:
    return str_10048b03;
  case 2:
    return str_10048b1b;
  case 3:
    return str_10048b35;
  case 4:
    return str_10048b45;
  case 5:
    return str_10048b5d;
  default:
    return str_10048c7f;
  case 9:
    return str_10048b70;
  case 0xb:
    return str_10048b84;
  case 0xc:
    return str_10048ba5;
  case 0xd:
    return str_10048bbc;
  case 0x11:
    return str_10048bce;
  case 0x14:
    return str_10048bda;
  case 0x15:
    return str_10048bea;
  case 0x16:
    return str_10048bf9;
  case 0x18:
    return str_10048c0a;
  case 0x1c:
    return str_10048c1e;
  case 0x20:
    return str_10048c36;
  case 0x22:
    return str_10048c42;
  case 0x3f:
    return str_10048c53;
  case 0x4e:
    return str_10048c66;
  }
}

#undef str_10048afa
#undef str_10048b03
#undef str_10048b1b
#undef str_10048b35
#undef str_10048b45
#undef str_10048b5d
#undef str_10048b70
#undef str_10048b84
#undef str_10048ba5
#undef str_10048bbc
#undef str_10048bce
#undef str_10048bda
#undef str_10048bea
#undef str_10048bf9
#undef str_10048c0a
#undef str_10048c1e
#undef str_10048c36
#undef str_10048c42
#undef str_10048c53
#undef str_10048c66
#undef str_10048c7f

#undef DAT_1004b6b0
#define DAT_1004b6b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x497aU)))
#undef DAT_1004b6d0
#define DAT_1004b6d0 (*(uint *)(((uintptr_t)pf_module_state + 0x499aU)))
#undef str_100489c7
#define str_100489c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c91U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d980
 */

char * recovered_1003d980(char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *buffer_00;

  buffer_00 = &DAT_1004b6b0;
  if (buffer != (char *)0x0) {
    buffer_00 = buffer;
  }
  DAT_1004b6d0 = DAT_1004b6d0 + 1;
  pf_varargs_10039b90__4_(buffer_00,0x20,str_100489c7,DAT_1004b6d0);
  return buffer_00;
}

#undef DAT_1004b6b0
#undef DAT_1004b6d0
#undef str_100489c7

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d9d0
 */

int recovered_1003d9d0(char *path)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *in_R8;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  uVar1 = recovered_1003d9e0(path,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                             in_XMM6_Qa,in_XMM7_Qa);
  return (int)uVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef DAT_000068d4
#define DAT_000068d4 (*(uint8_t *)(0x68d4U))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
#undef _DAT_000068d4
#define _DAT_000068d4 (*(uint *)(0x68d4U))
#undef str_100487d9
#define str_100487d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aa3U)))
#undef str_10048e24
#define str_10048e24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eeU)))
#define local_218 (*(char (*)[256])(frame + 24))
#define local_118 (*(char (*)[256])(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d9e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1003d9e0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 in_XMM0_Qa;

  puVar2 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if ((puVar2 != (undefined *)0x0) && (-1 < *(int *)(puVar2 + 0x14))) {
    local_118[0] = '\0';
    uVar3 = recovered_1003b070((long)puVar2,param_1,local_218,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                               in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar3 != '\0') {
      iVar1 = recovered_10036fb0(local_218,&DAT_100489e8);
      if (iVar1 == 0) {
        pf_varargs_10039b90___(local_118,0xf9,str_10048e24);
      }
      else {
        pf_varargs_10039b90__8_(local_118,0xf9,str_100487d9,(ulonglong)local_218);
      }
      if (local_118[0] != '\0') {
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xd7 < _DAT_00006808)) {
          if ((code *)(ulong)_DAT_000068d4 == (code *)0x0) {
            DAT_1004a954 = 2;
            return 0xffffffff;
          }
          iVar1 = (*(code *)(ulong)_DAT_000068d4)(*(undefined4 *)(puVar2 + 0x14),local_118);
        }
        else {
          if (_DAT_00006800 != 0x50414d57) {
            DAT_1004a954 = 2;
            return 0xffffffff;
          }
          if (_DAT_00006804 == 0) {
            DAT_1004a954 = 2;
            return 0xffffffff;
          }
          if (_DAT_00006808 < 0xc) {
            DAT_1004a954 = 2;
            return 0xffffffff;
          }
          if (_DAT_00006808 < 0x40) {
            DAT_1004a954 = 2;
            return 0xffffffff;
          }
          if ((code *)(ulong)_DAT_0000683c == (code *)0x0) {
            DAT_1004a954 = 2;
            return 0xffffffff;
          }
          iVar1 = (*(code *)(ulong)_DAT_0000683c)(local_118);
        }
        if (iVar1 != 0) {
          return 0;
        }
      }
    }
  }
  DAT_1004a954 = 2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_000068d4
#undef DAT_100489e8
#undef DAT_1004a954
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000683c
#undef _DAT_000068d4
#undef str_100487d9
#undef str_10048e24
#undef local_218
#undef local_118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003db60
 */

void recovered_1003db60(char *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003d9e0(in_RDI,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006888
#define DAT_00006888 (*(uint8_t *)(0x6888U))
#undef DAT_000068d8
#define DAT_000068d8 (*(uint8_t *)(0x68d8U))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006888
#define _DAT_00006888 (*(uint *)(0x6888U))
#undef _DAT_000068d8
#define _DAT_000068d8 (*(uint *)(0x68d8U))
#undef str_100487d9
#define str_100487d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aa3U)))
#undef str_10048e24
#define str_10048e24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eeU)))
#define local_318 (*(char (*)[256])(frame + 24))
#define local_218 (*(char (*)[256])(frame + 280))
#define local_118 (*(char (*)[248])(frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003db70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1003db70(char *oldPath,char *newPath)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  undefined8 in_XMM0_Qa;
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *in_R8;
  undefined8 in_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  puVar2 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if ((puVar2 != (undefined *)0x0) && (-1 < *(int *)(puVar2 + 0x14))) {
    local_318[0] = '\0';
    uVar3 = recovered_1003b070((long)puVar2,oldPath,local_118,in_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,
                               in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar3 != '\0') {
      iVar1 = recovered_10036fb0(local_118,&DAT_100489e8);
      if (iVar1 == 0) {
        pf_varargs_10039b90___(local_318,0xf9,str_10048e24);
        in_XMM0_Qa = extraout_XMM0_Qa_00;
      }
      else {
        pf_varargs_10039b90__8_(local_318,0xf9,str_100487d9,(ulonglong)local_118);
        in_XMM0_Qa = extraout_XMM0_Qa;
      }
      if (local_318[0] != '\0') {
        local_218[0] = '\0';
        uVar3 = recovered_1003b070((long)puVar2,newPath,local_118,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                                   in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
        if ((char)uVar3 != '\0') {
          iVar1 = recovered_10036fb0(local_118,&DAT_100489e8);
          if (iVar1 == 0) {
            pf_varargs_10039b90___(local_218,0xf9,str_10048e24);
          }
          else {
            pf_varargs_10039b90__8_(local_218,0xf9,str_100487d9,(ulonglong)local_118);
          }
          if (local_218[0] != '\0') {
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && (0xdb < _DAT_00006808)) {
              if ((code *)(ulong)_DAT_000068d8 == (code *)0x0) {
                DAT_1004a954 = 5;
                return -1;
              }
              iVar1 = (*(code *)(ulong)_DAT_000068d8)
                                (*(undefined4 *)(puVar2 + 0x14),local_318,local_218);
            }
            else {
              if (_DAT_00006800 != 0x50414d57) {
                DAT_1004a954 = 5;
                return -1;
              }
              if (_DAT_00006804 == 0) {
                DAT_1004a954 = 5;
                return -1;
              }
              if (_DAT_00006808 < 0xc) {
                DAT_1004a954 = 5;
                return -1;
              }
              if (_DAT_00006808 < 0x8c) {
                DAT_1004a954 = 5;
                return -1;
              }
              if ((code *)(ulong)_DAT_00006888 == (code *)0x0) {
                DAT_1004a954 = 5;
                return -1;
              }
              iVar1 = (*(code *)(ulong)_DAT_00006888)(local_318,local_218);
            }
            if (iVar1 != 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  DAT_1004a954 = 5;
  return -1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006888
#undef DAT_000068d8
#undef DAT_100489e8
#undef DAT_1004a954
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006888
#undef _DAT_000068d8
#undef str_100487d9
#undef str_10048e24
#undef local_318
#undef local_218
#undef local_118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003dd90
 */

void recovered_1003dd90(char *in_RDI,char *in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003db70(in_RDI,in_RSI);
  return;
}


#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489d9
#define DAT_100489d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca3U)))
#undef DAT_100489dc
#define DAT_100489dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca6U)))
#undef DAT_100489df
#define DAT_100489df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca9U)))
#undef DAT_100489e2
#define DAT_100489e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cacU)))
#undef DAT_100489e4
#define DAT_100489e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1caeU)))
#undef DAT_100489e6
#define DAT_100489e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb0U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_d0 (*(undefined1 (*)[180])(frame + 16))
#define local_1c (*(char (*)[4])(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003dda0
 */

undefined4
recovered_1003dda0(long param_1,uint param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  void *pvVar2;
  undefined *vararg0;
  undefined *puVar3;

  if (((~param_2 & 0xa00) == 0) &&
     (uVar1 = recovered_1003de80(param_1,(long)local_d0,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                 in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa), (int)uVar1 == 0)) {
    DAT_1004a954 = 0x11;
  }
  else {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 1) == 0) {
        vararg0 = &DAT_100489e6;
      }
      else {
        vararg0 = &DAT_100489e2;
        if ((param_2 & 8) == 0) {
          vararg0 = &DAT_100489e4;
        }
      }
    }
    else {
      puVar3 = &DAT_100489dc;
      if ((param_2 & 0x400) == 0) {
        puVar3 = &DAT_100489df;
      }
      vararg0 = &DAT_100489d9;
      if ((param_2 & 8) == 0) {
        vararg0 = puVar3;
      }
    }
    pf_varargs_10039b90__8_(local_1c,4,&DAT_100489c0,(ulonglong)vararg0);
    pvVar2 = recovered_1003ab00((char *)param_1,local_1c);
    if (pvVar2 != (void *)0x0) {
      return *(undefined4 *)((long)pvVar2 + 0xc);
    }
  }
  return 0xffffffff;
}

#undef DAT_100489c0
#undef DAT_100489d9
#undef DAT_100489dc
#undef DAT_100489df
#undef DAT_100489e2
#undef DAT_100489e4
#undef DAT_100489e6
#undef DAT_1004a954
#undef local_d0
#undef local_1c

#undef DAT_10048fa0
#define DAT_10048fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226aU)))
#undef DAT_10048fb0
#define DAT_10048fb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x227aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef UNK_10048fa8
#define UNK_10048fa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2272U)))
#undef UNK_10048fb8
#define UNK_10048fb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2282U)))
#undef _DAT_10048fa0
#define _DAT_10048fa0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x226aU)))
#undef _DAT_10048fb0
#define _DAT_10048fb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x227aU)))
#undef uRam0000000010048fa8
#define uRam0000000010048fa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2272U)))
#undef uRam0000000010048fb8
#define uRam0000000010048fb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2282U)))
#define local_40 (*(undefined1 (*)[4])(frame + 16))
#define local_3c (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003de80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1003de80(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 extraout_XMM0_Da_00 = 0;
  undefined4 extraout_XMM0_Db = 0;
  undefined4 extraout_XMM0_Db_00 = 0;

  puVar2 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  local_34 = 0;
  if (((param_2 == 0) || (param_1 == 0)) || (puVar2 == (undefined *)0x0)) {
    DAT_1004a954 = 0x16;
LAB_1003df23:
    uVar3 = 0xffffffff;
  }
  else {
    recovered_10036210(local_40,0,0xc);
    iVar1 = recovered_1003e780((long)puVar2,(char *)param_1,(long)local_40,
                               CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),in_XMM1_Qa,in_XMM2_Qa,
                               in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if (iVar1 == 0) {
      uVar3 = recovered_1003e8e0((long)puVar2,(char *)param_1,0,0,&local_34,
                                 CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),in_XMM1_Qa,
                                 in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
      if ((int)uVar3 == 0) {
        DAT_1004a954 = 2;
        goto LAB_1003df23;
      }
      recovered_10036210((void *)param_2,0,0xb0);
      uVar3 = uRam0000000010048fb8;
      *(undefined8 *)(param_2 + 8) = _DAT_10048fb0;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0x1000;
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
    else {
      recovered_10036210((void *)param_2,0,0xb0);
      uVar3 = uRam0000000010048fa8;
      *(undefined8 *)(param_2 + 8) = _DAT_10048fa0;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(ulong *)(param_2 + 0x20) = (ulong)local_3c;
      *(undefined4 *)(param_2 + 0x28) = 0x1000;
      *(ulong *)(param_2 + 0x30) = (ulong)(local_3c + 0x1ff >> 9);
    }
    uVar3 = 0;
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0x78);
  }
  return uVar3;
}

#undef DAT_10048fa0
#undef DAT_10048fb0
#undef DAT_1004a954
#undef UNK_10048fa8
#undef UNK_10048fb8
#undef _DAT_10048fa0
#undef _DAT_10048fb0
#undef uRam0000000010048fa8
#undef uRam0000000010048fb8
#undef local_40
#undef local_3c
#undef local_34

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#define local_1c (*(char (*)[4])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e000
 */

undefined4
recovered_1003e000(char *param_1,undefined8 *in_R8,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  void *pvVar2;

  pf_varargs_10039b90__8_(local_1c,4,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1caeU));
  pvVar2 = recovered_1003ab00(param_1,local_1c);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)((long)pvVar2 + 0xc);
  }
  return uVar1;
}

#undef DAT_100489c0
#undef local_1c

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e060
 */

ulong recovered_1003e060(uint param_1,undefined1 *param_2,long in_RDX,undefined8 in_XMM1_Qa,
                        undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                        undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  ulong uVar1;

  if (((param_1 < 0x20) && (stream = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], stream != (int *)0x0)) &&
     (*stream == 0x54474c46)) {
    uVar1 = recovered_1003bce0(param_2,1,in_RDX,stream);
    return uVar1;
  }
  DAT_1004a954 = 9;
  return 0xffffffffffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e0b0
 */

ulong recovered_1003e0b0(uint param_1,long param_2,ulong in_RDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  ulong uVar1;

  if (((param_1 < 0x20) && (stream = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], stream != (int *)0x0)) &&
     (*stream == 0x54474c46)) {
    uVar1 = recovered_1003bf70((void *)param_2,1,in_RDX,stream);
    return uVar1;
  }
  DAT_1004a954 = 9;
  return 0xffffffffffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a590
#define DAT_1004a590 (*(int * *)(((uintptr_t)pf_module_state + 0x385aU)))
#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(int * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#undef DAT_1004a820
#define DAT_1004a820 (*(int * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e100
 */

undefined8
recovered_1003e100(uint param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *destination;
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_XMM0_Qa;

  if (((0x1f < param_1) ||
      (destination = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], destination == (int *)0x0)) ||
     (*destination != 0x54474c46)) {
    DAT_1004a954 = 9;
    return 0xffffffff;
  }
  puVar1 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if (*destination == 0x54474c46) {
    uVar3 = 0;
    if ((destination[1] - 1U < 3) || (*(char *)((long)destination + 0x12) != '\x01'))
    goto LAB_1003e1a2;
    if (puVar1 != (undefined *)0x0) {
      uVar2 = recovered_1003ba40((long)puVar1,(char *)(destination + 6),
                                 *(long *)(destination + 0x48),destination[0x4a],in_XMM0_Qa,
                                 in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                                 in_XMM7_Qa);
      uVar3 = 0;
      if ((int)uVar2 != 0) {
        *(undefined1 *)((long)destination + 0x12) = 0;
        goto LAB_1003e1a2;
      }
    }
    *(undefined1 *)((long)destination + 0x11) = 1;
    DAT_1004a954 = 5;
  }
  else {
    DAT_1004a954 = 9;
  }
  uVar3 = 0xffffffff;
LAB_1003e1a2:
  if ((ulong)(uint)destination[3] < 0x20) {
    (&(*(int **)(pf_module_state+0x3b1aU)))[(uint)destination[3]] = 0;
  }
  if (((DAT_1004a590 != destination) && (DAT_1004a6d8 != destination)) &&
     (DAT_1004a820 != destination)) {
    recovered_10035470(*(void **)(destination + 0x48));
    recovered_10036210(destination,0,0x140);
    recovered_10035470(destination);
  }
  return uVar3;
}

#undef DAT_1004a590
#undef DAT_1004a6d8
#undef DAT_1004a820
#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e210
 */

long recovered_1003e210(uint param_1,long param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  ulong uVar2;

  if (0x1f < param_1) {
    return -1;
  }
  piVar1 = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1];
  if (piVar1 == (int *)0x0) {
    return -1;
  }
  if (*piVar1 != 0x54474c46) {
    return -1;
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else if (param_3 == 2) {
    uVar2 = *(ulong *)(piVar1 + 0x46);
    if (*(ulong *)(piVar1 + 0x46) < *(ulong *)(piVar1 + 0x4a)) {
      uVar2 = *(ulong *)(piVar1 + 0x4a);
    }
  }
  else {
    if (param_3 != 1) {
      DAT_1004a954 = 0x16;
      return -1;
    }
    uVar2 = *(ulong *)(piVar1 + 0x4e);
  }
  if ((param_2 < 0) && (uVar2 < (ulong)-param_2)) {
    DAT_1004a954 = 0x16;
    return -1;
  }
  *(ulong *)(piVar1 + 0x4e) = uVar2 + param_2;
  *(undefined1 *)(piVar1 + 4) = 0;
  piVar1[5] = -1;
  return uVar2 + param_2;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e2b0
 */

undefined4 recovered_1003e2b0(uint param_1,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *source;
  int iVar1;
  void *destination;
  void *destination_00;

  if (((0x1f < param_1) || (source = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], source == (int *)0x0)) ||
     (*source != 0x54474c46)) {
    DAT_1004a954 = 9;
    return 0xffffffff;
  }
  destination = recovered_10035420(0x140);
  if (destination == (void *)0x0) {
LAB_1003e39c:
    DAT_1004a954 = 0xc;
  }
  else {
    recovered_10035510(destination,source,0x140);
    *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
    if ((*(long *)(source + 0x48) != 0) && (*(ulong *)(source + 0x4c) != 0)) {
      destination_00 = recovered_10035420(*(ulong *)(source + 0x4c));
      *(void **)((long)destination + 0x120) = destination_00;
      if (destination_00 == (void *)0x0) {
        recovered_10035470(destination);
        goto LAB_1003e39c;
      }
      recovered_10035510(destination_00,*(void **)(source + 0x48),*(ulong *)(source + 0x4c));
    }
    iVar1 = recovered_1003b300((long)destination);
    if (-1 < iVar1) {
      return *(undefined4 *)((long)destination + 0xc);
    }
    recovered_10035470(*(void **)((long)destination + 0x120));
    recovered_10035470(destination);
    DAT_1004a954 = 0x18;
  }
  return 0xffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e3b0
 */

uint recovered_1003e3b0(uint param_1,uint param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *source;
  void *destination;
  void *destination_00;

  if ((((param_1 < 0x20) && (source = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], source != (int *)0x0)) &&
      (param_2 < 0x20)) && (*source == 0x54474c46)) {
    if (param_1 == param_2) {
      return param_1;
    }
    if (param_2 < 3) {
      (&(*(int **)(pf_module_state+0x3b1aU)))[param_2] = source;
      return param_2;
    }
    if ((((&(*(int **)(pf_module_state+0x3b1aU)))[param_2] == 0) ||
        (recovered_1003e100(param_2,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                            in_XMM6_Qa,in_XMM7_Qa), *source == 0x54474c46)) &&
       (destination = recovered_10035420(0x140), destination != (void *)0x0)) {
      recovered_10035510(destination,source,0x140);
      *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
      if ((*(long *)(source + 0x48) == 0) || (*(ulong *)(source + 0x4c) == 0)) {
LAB_1003e49a:
        *(uint *)((long)destination + 0xc) = param_2;
        (&(*(int **)(pf_module_state+0x3b1aU)))[param_2] = destination;
        return param_2;
      }
      destination_00 = recovered_10035420(*(ulong *)(source + 0x4c));
      *(void **)((long)destination + 0x120) = destination_00;
      if (destination_00 != (void *)0x0) {
        recovered_10035510(destination_00,*(void **)(source + 0x48),*(ulong *)(source + 0x4c));
        goto LAB_1003e49a;
      }
      recovered_10035470(destination);
    }
    DAT_1004a954 = 0xc;
  }
  else {
    DAT_1004a954 = 9;
  }
  return 0xffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e4d0
 */

undefined8 recovered_1003e4d0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0xffffffffffffffff;
  }
  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e500
 */

undefined8 recovered_1003e500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x2f;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e520
 */

undefined8 recovered_1003e520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e540
 */

undefined8 recovered_1003e540(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e560
 */

undefined8 recovered_1003e560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e580
 */

undefined8 recovered_1003e580(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e5a0
 */

undefined8 recovered_1003e5a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e5c0
 */

undefined8 recovered_1003e5c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e5e0
 */

undefined8 recovered_1003e5e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e600
 */

undefined8 recovered_1003e600(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e620
 */

/* WARNING: Removing unreachable block (ram,0x1003e714) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong recovered_1003e620(uint param_1,undefined4 param_2,long param_3,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_var = 0;
  ulong uVar3;

  if (((param_1 < 0x20) && (piVar1 = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], piVar1 != (int *)0x0)) &&
     (*piVar1 == 0x54474c46)) {
    uVar3 = 0;
    switch((uintptr_t)(param_2)) {
    case 0:
      uVar2 = recovered_1003e2b0(param_1,in_R8);
      uVar3 = CONCAT44(extraout_var,uVar2);
      break;
    case 1:
    case 2:
    case 4:
    case 8:
    case 9:
      break;
    case 3:
      uVar3 = (ulong)(piVar1[2] & 2);
      break;
    case 7:
      if (param_3 != 0) {
        *(undefined2 *)(param_3 + 0x14) = 2;
        *(undefined4 *)(param_3 + 0x10) = 0;
        return 0;
      }
    default:
      DAT_1004a954 = 0x16;
      goto LAB_1003e6c1;
    }
  }
  else {
    DAT_1004a954 = 9;
LAB_1003e6c1:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef DAT_000068c8
#define DAT_000068c8 (*(uint8_t *)(0x68c8U))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef _DAT_000068c8
#define _DAT_000068c8 (*(uint *)(0x68c8U))
#undef str_100487d9
#define str_100487d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aa3U)))
#undef str_10048e24
#define str_10048e24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eeU)))
#define local_228 (*(char (*)[256])(frame + 24))
#define local_128 (*(char (*)[264])(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1003e780(long param_1,char *param_2,long param_3,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  ulong uVar3;

  uVar2 = 0;
  if ((param_3 != 0) && (-1 < *(int *)(param_1 + 0x14))) {
    local_128[0] = '\0';
    uVar3 = recovered_1003b070(param_1,param_2,local_228,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa
                               ,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar3 != '\0') {
      iVar1 = recovered_10036fb0(local_228,&DAT_100489e8);
      if (iVar1 == 0) {
        pf_varargs_10039b90___(local_128,0xf9,str_10048e24);
      }
      else {
        pf_varargs_10039b90__8_(local_128,0xf9,str_100487d9,(ulonglong)local_228);
      }
      if (local_128[0] != '\0') {
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xcb < _DAT_00006808)) {
          if ((code *)(ulong)_DAT_000068c8 == (code *)0x0) {
            return 0;
          }
          uVar2 = (*(code *)(ulong)_DAT_000068c8)(*(undefined4 *)(param_1 + 0x14),local_128,param_3);
        }
        else {
          if (_DAT_00006800 != 0x50414d57) {
            return 0;
          }
          if (_DAT_00006804 == 0) {
            return 0;
          }
          if (_DAT_00006808 < 0xc) {
            return 0;
          }
          if (_DAT_00006808 < 0x38) {
            return 0;
          }
          if ((code *)(ulong)_DAT_00006834 == (code *)0x0) {
            return 0;
          }
          uVar2 = (*(code *)(ulong)_DAT_00006834)(local_128,param_3);
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_000068c8
#undef DAT_100489e8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_000068c8
#undef str_100487d9
#undef str_10048e24
#undef local_228
#undef local_128

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006884
#define DAT_00006884 (*(uint8_t *)(0x6884U))
#undef DAT_000068cc
#define DAT_000068cc (*(uint8_t *)(0x68ccU))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006884
#define _DAT_00006884 (*(uint *)(0x6884U))
#undef _DAT_000068cc
#define _DAT_000068cc (*(uint *)(0x68ccU))
#undef str_100487d9
#define str_100487d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aa3U)))
#undef str_10048e24
#define str_10048e24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eeU)))
#define local_258 (*(char (*)[256])(frame + 24))
#define local_158 (*(char (*)[256])(frame + 280))
#define local_58 (*(void * *)(frame + 536))
#define local_50 (*(uint * *)(frame + 544))
#define local_44 (*(uint *)(frame + 556))
#define local_40 (*(ulong *)(frame + 560))
#define local_34 (*(uint *)(frame + 572))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e8e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1003e8e0(long param_1,char *param_2,long param_3,uint param_4,uint *param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[656] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  ulong uVar12;
  char *text;
  char *pcVar13;

  local_44 = 0;
  uVar10 = 0;
  if (-1 < *(int *)(param_1 + 0x14)) {
    local_158[0] = '\0';
    uVar6 = recovered_1003b070(param_1,param_2,local_258,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa
                               ,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar6 != '\0') {
      iVar5 = recovered_10036fb0(local_258,&DAT_100489e8);
      if (iVar5 == 0) {
        pf_varargs_10039b90___(local_158,0xf9,str_10048e24);
      }
      else {
        pf_varargs_10039b90__8_(local_158,0xf9,str_100487d9,(ulonglong)local_258);
      }
      if (local_158[0] != '\0') {
        puVar11 = &local_44;
        if (param_5 != (uint *)0x0) {
          puVar11 = param_5;
        }
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xcf < _DAT_00006808)) {
          if ((code *)(ulong)_DAT_000068cc == (code *)0x0) {
            return 0;
          }
          iVar5 = (*(code *)(ulong)_DAT_000068cc)
                            (*(undefined4 *)(param_1 + 0x14),local_158,param_3,param_4,puVar11);
        }
        else {
          if (_DAT_00006800 != 0x50414d57) {
            return 0;
          }
          if (_DAT_00006804 == 0) {
            return 0;
          }
          if (_DAT_00006808 < 0xc) {
            return 0;
          }
          if (_DAT_00006808 < 0x88) {
            return 0;
          }
          if ((code *)(ulong)_DAT_00006884 == (code *)0x0) {
            return 0;
          }
          iVar5 = (*(code *)(ulong)_DAT_00006884)(local_158,param_3,param_4,puVar11);
        }
        if ((iVar5 != 0) && (uVar10 = 1, param_4 != 0 && param_3 != 0)) {
          local_50 = puVar11;
          uVar3 = *puVar11;
          if (uVar3 == 0) {
            local_34 = 0;
          }
          else {
            if (uVar3 < param_4) {
              param_4 = uVar3;
            }
            uVar6 = (ulong)param_4;
            uVar12 = 0;
            local_34 = 0;
            local_40 = uVar6;
            do {
              lVar8 = uVar12 * 0x1f8;
              cVar4 = *(char *)(param_3 + 0xf1 + lVar8);
              if (cVar4 != '\0') {
                local_58 = (void *)(param_3 + lVar8);
                pcVar13 = (char *)(param_3 + lVar8 + 0xf1);
                for (text = local_158; (*text == '/' || (*text == '\\')); text = text + 1) {
                }
                while ((cVar4 == '\\' || (cVar4 == '/'))) {
                  pcVar1 = pcVar13 + 1;
                  pcVar13 = pcVar13 + 1;
                  cVar4 = *pcVar1;
                }
                uVar7 = recovered_10036f80(text);
                uVar6 = local_40;
                if (uVar7 != 0) {
                  uVar9 = 0;
                  do {
                    cVar4 = pcVar13[uVar9];
                    cVar2 = text[uVar9];
                    if (((cVar4 != cVar2) || (cVar4 == '\0')) || (cVar2 == '\0')) {
                      if (cVar4 != cVar2) goto LAB_1003eab1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar7 != uVar9);
                  if ((pcVar13[uVar7] != '\\') && (pcVar13[uVar7] != '/')) goto LAB_1003eab1;
                  pcVar13 = pcVar13 + uVar7 + 1;
                }
                cVar4 = *pcVar13;
                if (cVar4 != '\0') {
                  while (pcVar13 = pcVar13 + 1, cVar4 != '\0') {
                    if ((cVar4 == '/') || (cVar4 == '\\')) goto LAB_1003eab1;
                    cVar4 = *pcVar13;
                  }
                  if (uVar12 != local_34) {
                    recovered_10035510((void *)((ulong)local_34 * 0x1f8 + param_3),local_58,0x1f8);
                  }
                  local_34 = local_34 + 1;
                }
              }
LAB_1003eab1:
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar6);
          }
          *local_50 = local_34;
        }
      }
    }
  }
  return uVar10;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006884
#undef DAT_000068cc
#undef DAT_100489e8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006884
#undef _DAT_000068cc
#undef str_100487d9
#undef str_10048e24
#undef local_258
#undef local_158
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ec20
 */

void recovered_1003ec20(long in_RDI,long in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003de80(in_RDI,in_RSI,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                     in_XMM6_Qa,in_XMM7_Qa);
  return;
}


#undef DAT_10048fa0
#define DAT_10048fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x226aU)))
#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef UNK_10048fa8
#define UNK_10048fa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2272U)))
#undef _DAT_10048fa0
#define _DAT_10048fa0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x226aU)))
#undef uRam0000000010048fa8
#define uRam0000000010048fa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2272U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ec30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1003ec30(uint param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;

  if ((((0x1f < param_1) || (piVar1 = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], piVar1 == (int *)0x0)) ||
      (param_2 == 0)) || (*piVar1 != 0x54474c46)) {
    DAT_1004a954 = 9;
    return 0xffffffff;
  }
  uVar3 = *(ulong *)(piVar1 + 0x46);
  if (*(ulong *)(piVar1 + 0x46) < *(ulong *)(piVar1 + 0x4a)) {
    uVar3 = *(ulong *)(piVar1 + 0x4a);
  }
  recovered_10036210((void *)param_2,0,0xb0);
  uVar2 = uRam0000000010048fa8;
  *(undefined8 *)(param_2 + 8) = _DAT_10048fa0;
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(ulong *)(param_2 + 0x20) = uVar3 & 0xffffffff;
  *(undefined4 *)(param_2 + 0x28) = 0x1000;
  *(ulong *)(param_2 + 0x30) = (ulong)((int)uVar3 + 0x1ffU >> 9);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0x78);
  return 0;
}

#undef DAT_10048fa0
#undef DAT_1004a850
#undef DAT_1004a954
#undef UNK_10048fa8
#undef _DAT_10048fa0
#undef uRam0000000010048fa8

#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef str_10048a4c
#define str_10048a4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d16U)))
#undef str_10048e38
#define str_10048e38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2102U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ed30
 */

undefined8 recovered_1003ed30(long param_1,undefined8 *param_2,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0 || param_2 == (undefined8 *)0x0) {
    DAT_1004a954 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    recovered_10036210(param_2,0,0x850);
    *param_2 = 0x100000001000;
    param_2[1] = 0x40000;
    param_2[2] = 0x20000;
    param_2[3] = 0x20000;
    param_2[4] = 0x10000;
    param_2[5] = 0x8000;
    *(undefined4 *)((long)param_2 + 0x3c) = 0x1000;
    recovered_10035510(param_2 + 8,str_10048e38,6);
    recovered_10035510(param_2 + 10,&DAT_100489e8,2);
    recovered_10035510(param_2 + 0x8a,str_10048a4c,0xb);
  }
  return uVar1;
}

#undef DAT_100489e8
#undef DAT_1004a954
#undef str_10048a4c
#undef str_10048e38

#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef str_10048a4c
#define str_10048a4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d16U)))
#undef str_10048e38
#define str_10048e38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2102U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ee00
 */

undefined8 recovered_1003ee00(uint param_1,undefined8 *param_2,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 < 0x20) && ((int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1] != (int *)0x0)) &&
      (param_2 != (undefined8 *)0x0)) && (*(int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1] == 0x54474c46)) {
    recovered_10036210(param_2,0,0x850);
    *param_2 = 0x100000001000;
    param_2[1] = 0x40000;
    param_2[2] = 0x20000;
    param_2[3] = 0x20000;
    param_2[4] = 0x10000;
    param_2[5] = 0x8000;
    *(undefined4 *)((long)param_2 + 0x3c) = 0x1000;
    recovered_10035510(param_2 + 8,str_10048e38,6);
    recovered_10035510(param_2 + 10,&DAT_100489e8,2);
    recovered_10035510(param_2 + 0x8a,str_10048a4c,0xb);
    return 0;
  }
  DAT_1004a954 = 9;
  return 0xffffffff;
}

#undef DAT_100489e8
#undef DAT_1004a850
#undef DAT_1004a954
#undef str_10048a4c
#undef str_10048e38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000688c
#define DAT_0000688c (*(uint8_t *)(0x688cU))
#undef DAT_000068dc
#define DAT_000068dc (*(uint8_t *)(0x68dcU))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000688c
#define _DAT_0000688c (*(uint *)(0x688cU))
#undef _DAT_000068dc
#define _DAT_000068dc (*(uint *)(0x68dcU))
#undef str_100487d9
#define str_100487d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aa3U)))
#undef str_10048e24
#define str_10048e24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eeU)))
#define local_218 (*(char (*)[256])(frame + 24))
#define local_118 (*(char (*)[256])(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003eef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1003eef0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 in_XMM0_Qa;

  puVar2 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if ((puVar2 != (undefined *)0x0) && (-1 < *(int *)(puVar2 + 0x14))) {
    local_118[0] = '\0';
    uVar3 = recovered_1003b070((long)puVar2,param_1,local_218,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                               in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar3 != '\0') {
      iVar1 = recovered_10036fb0(local_218,&DAT_100489e8);
      if (iVar1 == 0) {
        pf_varargs_10039b90___(local_118,0xf9,str_10048e24);
      }
      else {
        pf_varargs_10039b90__8_(local_118,0xf9,str_100487d9,(ulonglong)local_218);
      }
      if (local_118[0] != '\0') {
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xdf < _DAT_00006808)) {
          if ((code *)(ulong)_DAT_000068dc == (code *)0x0) {
            DAT_1004a954 = 5;
            return 0xffffffff;
          }
          iVar1 = (*(code *)(ulong)_DAT_000068dc)(*(undefined4 *)(puVar2 + 0x14),local_118);
        }
        else {
          if (_DAT_00006800 != 0x50414d57) {
            DAT_1004a954 = 5;
            return 0xffffffff;
          }
          if (_DAT_00006804 == 0) {
            DAT_1004a954 = 5;
            return 0xffffffff;
          }
          if (_DAT_00006808 < 0xc) {
            DAT_1004a954 = 5;
            return 0xffffffff;
          }
          if (_DAT_00006808 < 0x90) {
            DAT_1004a954 = 5;
            return 0xffffffff;
          }
          if ((code *)(ulong)_DAT_0000688c == (code *)0x0) {
            DAT_1004a954 = 5;
            return 0xffffffff;
          }
          iVar1 = (*(code *)(ulong)_DAT_0000688c)(local_118);
        }
        if (iVar1 != 0) {
          return 0;
        }
      }
    }
  }
  DAT_1004a954 = 5;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000688c
#undef DAT_000068dc
#undef DAT_100489e8
#undef DAT_1004a954
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000688c
#undef _DAT_000068dc
#undef str_100487d9
#undef str_10048e24
#undef local_218
#undef local_118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f070
 */

void recovered_1003f070(char *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003d9e0(in_RDI,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  return;
}


#define local_b8 (*(undefined1 (*)[176])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f080
 */

void recovered_1003f080(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_1003de80(param_1,(long)local_b8,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}

#undef local_b8

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_b8 (*(undefined1 (*)[176])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f0a0
 */

undefined8 recovered_1003f0a0(uint param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  if (((param_1 < 0x20) && ((int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1] != (int *)0x0)) &&
     (*(int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1] == 0x54474c46)) {
    recovered_10036210(local_b8,0,0xb0);
    return 0;
  }
  DAT_1004a954 = 9;
  return 0xffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954
#undef local_b8

#define local_b8 (*(undefined1 (*)[176])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f100
 */

void recovered_1003f100(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_1003de80(param_1,(long)local_b8,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}

#undef local_b8

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_b8 (*(undefined1 (*)[176])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f120
 */

undefined8 recovered_1003f120(uint param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  if (((param_1 < 0x20) && ((int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1] != (int *)0x0)) &&
     (*(int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1] == 0x54474c46)) {
    recovered_10036210(local_b8,0,0xb0);
    return 0;
  }
  DAT_1004a954 = 9;
  return 0xffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954
#undef local_b8

#define local_b8 (*(undefined1 (*)[176])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f180
 */

void recovered_1003f180(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_1003de80(param_1,(long)local_b8,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}

#undef local_b8

#undef DAT_1004a830
#define DAT_1004a830 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3afaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f1a0
 */

undefined4 recovered_1003f1a0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = DAT_1004a830;
  DAT_1004a830 = param_1;
  return uVar1;
}

#undef DAT_1004a830

#define local_b8 (*(undefined1 (*)[176])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f1c0
 */

void recovered_1003f1c0(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_1003de80(param_1,(long)local_b8,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}

#undef local_b8

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_318 (*(undefined1 (*)[512])(frame + 24))
#define local_118 (*(char (*)[244])(frame + 536))
#define local_24 (*(uint *)(frame + 780))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f1e0
 */

undefined8
recovered_1003f1e0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qa_00;

  puVar1 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if (puVar1 != (undefined *)0x0) {
    local_24 = 0;
    uVar2 = recovered_1003b070((long)puVar1,param_1,local_118,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,
                               in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if (((char)uVar2 != '\0') &&
       (uVar3 = recovered_1003e8e0((long)puVar1,local_118,(long)local_318,1,&local_24,in_XMM0_Qa_00,
                                   in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa
                                   ,in_XMM7_Qa), (int)uVar3 != 0)) {
      pf_varargs_10039b90__8_(puVar1 + 0xa28,0xf1,&DAT_100489c0,(ulonglong)local_118);
      pf_varargs_10039b90__8_(puVar1 + 0x10d,0xf1,&DAT_100489c0,(ulonglong)local_118);
      return 0;
    }
  }
  DAT_1004a954 = 2;
  return 0xffffffff;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef local_318
#undef local_118
#undef local_24

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489e8
#define DAT_100489e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb2U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f2b0
 */

long recovered_1003f2b0(long param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  char *text;

  puVar1 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if (puVar1 == (undefined *)0x0) {
    text = &DAT_100489e8;
  }
  else {
    text = &DAT_100489e8;
    if (puVar1[0xa28] != '\0') {
      text = puVar1 + 0xa28;
    }
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1004a954 = 0x16;
    param_1 = 0;
  }
  else {
    uVar2 = recovered_10036f80(text);
    if (param_2 < uVar2 + 1) {
      DAT_1004a954 = 0x22;
      param_1 = 0;
    }
    else {
      pf_varargs_10039b90__8_((char *)param_1,param_2,&DAT_100489c0,(ulonglong)text);
    }
  }
  return param_1;
}

#undef DAT_100489c0
#undef DAT_100489e8
#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f360
 */

undefined8 recovered_1003f360(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x16;
  return 0xffffffffffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f380
 */

undefined8 recovered_1003f380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f3a0
 */

undefined8 recovered_1003f3a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_248 (*(char (*)[256])(frame + 24))
#define local_148 (*(void * *)(frame + 280))
#define local_140 (*(uint *)(frame + 288))
#define local_138 (*(undefined4 *)(frame + 296))
#define local_134 (*(char (*)[248])(frame + 300))
#define local_3c (*(uint *)(frame + 548))
#define local_38 (*(uint *)(frame + 552))
#define local_34 (*(undefined4 *)(frame + 556))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f3c0
 */

undefined8
recovered_1003f3c0(long param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  void *destination;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 in_XMM0_Qa;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 in_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 extraout_XMM0_Qa_01 = 0;
  undefined8 extraout_XMM0_Qa_02 = 0;

  puVar4 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  uVar1 = 0x16;
  if (((-1 < (long)param_2) && (param_1 != 0)) && (puVar4 != (undefined *)0x0)) {
    destination = recovered_10035420(param_2 + (param_2 == 0));
    if (destination == (void *)0x0) {
      uVar1 = 0xc;
    }
    else {
      recovered_10036210(destination,0,param_2);
      recovered_10036210(&local_148,0,0x108);
      uVar5 = recovered_1003b070((long)puVar4,(char *)param_1,local_248,in_XMM0_Qa,in_XMM1_Qa,
                                 in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
      uVar7 = (uint)param_2;
      uVar6 = extraout_XMM0_Qa;
      if ((char)uVar5 != '\0') {
        recovered_10036210(&local_3c,0,0xc);
        iVar2 = recovered_1003e780((long)puVar4,local_248,(long)&local_3c,in_XMM0_Qa_00,in_XMM1_Qa,
                                   in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa
                                  );
        uVar6 = extraout_XMM0_Qa_00;
        if (local_3c != 0 && iVar2 != 0) {
          local_148 = (void *)(ulong)local_3c;
          local_140 = local_38;
          local_138 = local_34;
          pf_varargs_10039b90__8_(local_134,0xf1,&DAT_100489c0,(ulonglong)local_248);
          uVar3 = local_140;
          if (uVar7 <= local_140) {
            uVar3 = uVar7;
          }
          uVar6 = extraout_XMM0_Qa_01;
          if (uVar3 != 0) {
            recovered_10035510(destination,local_148,(ulong)uVar3);
            uVar6 = extraout_XMM0_Qa_02;
          }
        }
      }
      uVar6 = recovered_1003ba40((long)puVar4,(char *)param_1,(long)destination,uVar7,uVar6,
                                 in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                                 in_XMM7_Qa);
      recovered_10035470(destination);
      if ((int)uVar6 != 0) {
        return 0;
      }
      uVar1 = 5;
    }
  }
  DAT_1004a954 = uVar1;
  return 0xffffffff;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef local_248
#undef local_148
#undef local_140
#undef local_138
#undef local_134
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f540
 */

undefined8
recovered_1003f540(uint param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined4 extraout_var = 0;

  if ((((param_1 < 0x20) && (stream = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], stream != (int *)0x0)) &&
      (-1 < (long)param_2)) && (*stream == 0x54474c46)) {
    if ((*(byte *)(stream + 2) & 2) != 0) {
      uVar3 = *(ulong *)(stream + 0x4c);
      if (uVar3 < param_2) {
        uVar1 = 0x100;
        if (uVar3 != 0) {
          uVar1 = uVar3;
        }
        do {
          uVar3 = uVar1;
          uVar1 = uVar3 * 2;
        } while (uVar3 < param_2);
        pvVar4 = recovered_100354c0(*(void **)(stream + 0x48),uVar3);
        if (pvVar4 == (void *)0x0) {
          *(undefined1 *)((long)stream + 0x11) = 1;
          DAT_1004a954 = 0xc;
          return 0xffffffff;
        }
        *(void **)(stream + 0x48) = pvVar4;
        *(ulong *)(stream + 0x4c) = uVar3;
      }
      uVar3 = *(ulong *)(stream + 0x4a);
      if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
        recovered_10036210((void *)(uVar3 + *(long *)(stream + 0x48)),0,param_2 - uVar3);
      }
      *(ulong *)(stream + 0x4a) = param_2;
      if (param_2 < *(ulong *)(stream + 0x4e)) {
        *(ulong *)(stream + 0x4e) = param_2;
      }
      *(undefined1 *)((long)stream + 0x12) = 1;
      iVar2 = recovered_1003b980(stream);
      return CONCAT44(extraout_var,iVar2);
    }
    DAT_1004a954 = 0x16;
  }
  else {
    DAT_1004a954 = 9;
  }
  return 0xffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f660
 */

undefined8
recovered_1003f660(uint param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  int iVar1;
  undefined4 extraout_var = 0;

  if (((param_1 < 0x20) && (stream = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_1], stream != (int *)0x0)) &&
     (*stream == 0x54474c46)) {
    iVar1 = recovered_1003b980(stream);
    return CONCAT44(extraout_var,iVar1);
  }
  DAT_1004a954 = 9;
  return 0xffffffff;
}

#undef DAT_1004a850
#undef DAT_1004a954

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_bd38 (*(undefined1 (*)[48388])(frame + 24))
#define local_34 (*(uint *)(frame + 48412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f6a0
 */

uint * recovered_1003f6a0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                         undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                         undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[48496] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint *destination;
  undefined1 *vararg0;
  ulong uVar4;
  char *buffer;
  undefined8 in_XMM0_Qa;

  puVar2 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  local_34 = 0;
  if (puVar2 == (undefined *)0x0) {
    DAT_1004a954 = 0x16;
  }
  else {
    vararg0 = local_bd38;
    uVar3 = recovered_1003e8e0((long)puVar2,param_1,(long)vararg0,0x60,&local_34,in_XMM0_Qa,
                               in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                               in_XMM7_Qa);
    if ((int)uVar3 == 0) {
      DAT_1004a954 = 2;
    }
    else {
      destination = recovered_10035420(0x6308);
      if (destination != (uint *)0x0) {
        recovered_10036210(destination,0,0x6308);
        if (0x60 < local_34) {
          local_34 = 0x60;
        }
        *destination = local_34;
        if (local_34 == 0) {
          return destination;
        }
        buffer = (char *)((long)destination + 0xd);
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(int *)(buffer + -5) = (int)uVar4;
          cVar1 = '\x04';
          if (*(int *)(vararg0 + 0x1ec) != 2) {
            cVar1 = ((vararg0[0x1e8] & 2) == 0) * '\x04' + '\x04';
          }
          buffer[-1] = cVar1;
          pf_varargs_10039b90__8_(buffer,0x100,&DAT_100489c0,(ulonglong)vararg0);
          buffer = buffer + 0x108;
          vararg0 = vararg0 + 0x1f8;
        } while (uVar4 < local_34);
        return destination;
      }
      DAT_1004a954 = 0xc;
    }
  }
  return (uint *)0x0;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef local_bd38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f7e0
 */

uint * recovered_1003f7e0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 != (uint *)0x0) {
    uVar1 = param_1[1];
    if (uVar1 < *param_1) {
      param_1[1] = uVar1 + 1;
      return param_1 + (ulong)uVar1 * 0x42 + 2;
    }
  }
  return (uint *)0x0;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f810
 */

undefined8 recovered_1003f810(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1004a954 = 9;
    return 0xffffffff;
  }
  recovered_10035470((void *)param_1);
  return 0;
}

#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f840
 */

void recovered_1003f840(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f860
 */

long recovered_1003f860(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                       uint param_5,long param_6,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  void *destination;
  ulong uVar3;

  destination = recovered_10035420(param_2 + (param_2 == 0));
  if (destination == (void *)0x0) {
    DAT_1004a954 = 0xc;
    destination = (void *)0xffffffffffffffff;
  }
  else if ((int)param_5 < 0 || (param_4 >> 0xc & 1) != 0) {
    recovered_10036210(destination,0,param_2);
  }
  else if (((param_5 < 0x20) && (piVar1 = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_5], piVar1 != (int *)0x0)) &&
          (*piVar1 == 0x54474c46)) {
    lVar2 = *(long *)(piVar1 + 0x4e);
    *(undefined1 *)(piVar1 + 4) = 0;
    piVar1[5] = -1;
    if (-1 < lVar2) {
      if (param_6 < 0) {
        DAT_1004a954 = 0x16;
      }
      else {
        *(long *)(piVar1 + 0x4e) = param_6;
        piVar1[5] = -1;
        uVar3 = recovered_1003bce0(destination,1,param_2,piVar1);
        if ((uVar3 <= param_2 && param_2 - uVar3 != 0) && -1 < (long)uVar3) {
          recovered_10036210((void *)((long)destination + uVar3),0,param_2 - uVar3);
        }
        piVar1 = (int *)(&(*(int **)(pf_module_state+0x3b1aU)))[param_5];
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0x54474c46)) {
          *(long *)(piVar1 + 0x4e) = lVar2;
          *(undefined1 *)(piVar1 + 4) = 0;
          piVar1[5] = -1;
        }
      }
    }
  }
  return (long)destination;
}

#undef DAT_1004a850
#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9b0
 */

undefined8 recovered_1003f9b0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10035470(in_RDI);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9c0
 */

undefined8 recovered_1003f9c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9d0
 */

undefined8 recovered_1003f9d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9e0
 */

undefined8 recovered_1003f9e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_1004a980
#define DAT_1004a980 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c4aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9f0
 */

long recovered_1003f9f0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  ulong count;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;

  recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, pcVar6 = param_1, cVar1 != '\0')) {
    while (cVar1 != '\0') {
      if (cVar1 == '=') {
        return 0;
      }
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    }
    count = recovered_10036f80(param_1);
    if (DAT_1004a980 != (char *)0x0) {
      uVar5 = 1;
      plVar4 = (long *)&DAT_1004a980;
      pcVar6 = DAT_1004a980;
      do {
        uVar3 = recovered_10036f80(pcVar6);
        if (((count < uVar3) && (pcVar6[count] == '=')) &&
           (iVar2 = recovered_10036b00(pcVar6,param_1,count), iVar2 == 0)) {
          return *plVar4 + count + 1;
        }
        plVar4 = (long *)(&DAT_1004a980 + uVar5);
        pcVar6 = (&DAT_1004a980)[uVar5];
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (pcVar6 != (char *)0x0);
    }
  }
  return 0;
}

#undef DAT_1004a980

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fad0
 */

undefined8 recovered_1003fad0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 2;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_100489ea
#define DAT_100489ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb4U)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003faf0
 */

void recovered_1003faf0(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;

  if (param_1 == 0) {
    DAT_1004a954 = 0x16;
    return;
  }
  if ((param_2 == (char *)0x0) || (cVar2 = *param_2, cVar2 == '\0')) {
    param_2 = &DAT_100489ea;
    cVar2 = '/';
  }
  uVar3 = 1;
  do {
    *(char *)(param_1 + -1 + uVar3) = cVar2;
    cVar2 = param_2[uVar3];
    uVar1 = uVar3 + 1;
    if (cVar2 == '\0') break;
    bVar4 = uVar3 < 0xf0;
    uVar3 = uVar1;
  } while (bVar4);
  *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  return;
}

#undef DAT_100489ea
#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef str_100489f5
#define str_100489f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cbfU)))
#define local_128 (*(char (*)[264])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fb60
 */

undefined8
recovered_1003fb60(char *param_1,long param_2,int param_3,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;

  lVar3 = recovered_1003f9f0(param_1,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                             in_XMM6_Qa,in_XMM7_Qa);
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, pcVar2 = param_1, cVar1 != '\0')) {
    while (cVar1 != '\0') {
      if (cVar1 == '=') {
        DAT_1004a954 = 0x16;
        return 0xffffffff;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    if (param_2 != 0) {
      if ((param_3 == 0) && (lVar3 != 0)) {
        return 0;
      }
      uVar4 = recovered_10036f80(param_1);
      uVar5 = recovered_10036f80((char *)param_2);
      if ((uVar5 + uVar4) - 0xff < 0xfffffffffffffeff) {
        DAT_1004a954 = 0xc;
        return 0xffffffff;
      }
      pf_varargs_10039b90__8__8_(local_128,0x100,str_100489f5,(ulonglong)param_1,param_2);
      uVar6 = recovered_1003fc50((long)param_1,local_128,(undefined8 *)param_2);
      return uVar6;
    }
  }
  DAT_1004a954 = 0x16;
  return 0xffffffff;
}

#undef DAT_1004a954
#undef str_100489f5
#undef local_128

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004a980
#define DAT_1004a980 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3c4aU)))
#define local_848 (*(char (*)[2056])(frame + 24))
#define local_40 (*(void * *)(frame + 2080))
#define local_38 (*(char * *)(frame + 2088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fc50
 */

undefined8 recovered_1003fc50(long param_1,char *param_2,undefined8 *in_R8)

{
  unsigned char frame[2176] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong count;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10036f80((char *)param_1);
  }
  local_848[0] = '\0';
  local_38 = param_2;
  if (DAT_1004a980 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 1;
    uVar5 = 0;
    pcVar4 = DAT_1004a980;
    local_40 = (void *)param_1;
    do {
      count = recovered_10036f80(pcVar4);
      uVar3 = recovered_10036f80(pcVar4);
      if (((uVar3 <= uVar2) || (pcVar4[uVar2] != '=')) ||
         (iVar1 = recovered_10036b00(pcVar4,local_40,uVar2), iVar1 != 0)) {
        if ((count + uVar5) - 0x7fe < 0xfffffffffffff800) {
          DAT_1004a954 = 0xc;
          return 0xffffffff;
        }
        recovered_10035510(local_848 + uVar5,pcVar4,count);
        (local_848 + count + uVar5)[0] = '\n';
        (local_848 + count + uVar5)[1] = '\0';
        uVar5 = count + uVar5 + 1;
      }
      pcVar4 = (&DAT_1004a980)[uVar6];
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (pcVar4 != (char *)0x0);
  }
  pcVar4 = local_38;
  uVar2 = uVar5;
  if ((local_38 != (char *)0x0) && (*local_38 != '\0')) {
    uVar6 = recovered_10036f80(local_38);
    uVar2 = uVar6 + uVar5 + 2;
    if (0x7ff < uVar2) {
      DAT_1004a954 = 0xc;
      return 0xffffffff;
    }
    recovered_10035510(local_848 + uVar5,pcVar4,uVar6);
    (local_848 + uVar6 + uVar5)[0] = '\n';
    (local_848 + uVar6 + uVar5)[1] = '\0';
  }
  recovered_1003aa00(local_848,uVar2,in_R8);
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004a980
#undef local_848
#undef local_40
#undef local_38

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fdf0
 */

undefined8 recovered_1003fdf0(char *param_1,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  undefined8 uVar3;

  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, pcVar2 = param_1, cVar1 != '\0')) {
    while( true ) {
      if (cVar1 == '\0') {
        uVar3 = recovered_1003fc50((long)param_1,(char *)0x0,in_R8);
        return uVar3;
      }
      if (cVar1 == '=') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
  }
  DAT_1004a954 = 0x16;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_a8 (*(undefined1 (*)[136])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fe40
 */

undefined8 recovered_1003fe40(long param_1,undefined8 *in_R8)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong count;
  undefined8 uVar2;

  if (param_1 != 0) {
    pcVar1 = recovered_100374d0((char *)param_1,0x3d);
    count = (long)pcVar1 - param_1;
    if (pcVar1 != (char *)0x0 && count != 0) {
      if (count < 0x80) {
        recovered_10035510(local_a8,(void *)param_1,count);
        local_a8[count] = 0;
        uVar2 = recovered_1003fc50((long)local_a8,(char *)param_1,in_R8);
        return uVar2;
      }
      DAT_1004a954 = 0xc;
      return 0xffffffff;
    }
  }
  DAT_1004a954 = 0x16;
  return 0xffffffff;
}

#undef DAT_1004a954
#undef local_a8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006954
#define DAT_00006954 (*(uint8_t *)(0x6954U))
#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#undef DAT_1004a820
#define DAT_1004a820 (*(void * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006954
#define _DAT_00006954 (*(uint *)(0x6954U))
#define local_228 (*(char (*)[527])(frame + 24))
#define local_19 (*(undefined1 *)(frame + 551))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1003fee0(long param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  void *stream;
  void *stream_00;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return 1;
  }
  local_228[0] = '\0';
  uVar2 = 0xffffffff;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x157 < _DAT_00006808 && ((code *)(ulong)_DAT_00006954 != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)_DAT_00006954)(param_1,local_228,0x200);
    stream_00 = DAT_1004a820;
    stream = DAT_1004a6d8;
    if (iVar1 == 0) {
      if (local_228[0] != '\0') {
        uVar3 = recovered_10036f80(local_228);
        recovered_1003bf70(local_228,1,uVar3,stream_00);
        local_19 = 10;
        recovered_1003bf70(&local_19,1,1,DAT_1004a820);
      }
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      if (local_228[0] != '\0') {
        uVar3 = recovered_10036f80(local_228);
        recovered_1003bf70(local_228,1,uVar3,stream);
        local_19 = 10;
        recovered_1003bf70(&local_19,1,1,DAT_1004a6d8);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006954
#undef DAT_1004a6d8
#undef DAT_1004a820
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006954
#undef local_228
#undef local_19

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#define local_118 (*(char (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040030
 */

long recovered_10040030(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  undefined8 in_XMM0_Qa;

  puVar1 = recovered_1003ae80(in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                              in_XMM6_Qa,in_XMM7_Qa);
  if (param_1 == 0 || puVar1 == (undefined *)0x0) {
    DAT_1004a954 = 0x16;
  }
  else {
    uVar2 = recovered_1003b070((long)puVar1,(char *)param_1,local_118,in_XMM0_Qa,in_XMM1_Qa,
                               in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if ((char)uVar2 != '\0') {
      if (param_2 == 0) {
        uVar2 = recovered_10036f80(local_118);
        param_2 = (long)recovered_10035420(uVar2 + 1);
        if ((char *)param_2 == (char *)0x0) {
          DAT_1004a954 = 0xc;
          return 0;
        }
      }
      recovered_10037030((char *)param_2,local_118);
      return (long)(char *)param_2;
    }
    DAT_1004a954 = 0x3f;
  }
  return 0;
}

#undef DAT_1004a954
#undef local_118

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004b6d0
#define DAT_1004b6d0 (*(uint *)(((uintptr_t)pf_module_state + 0x499aU)))
#undef str_10048a00
#define str_10048a00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ccaU)))
#undef str_10048a3f
#define str_10048a3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d09U)))
#define local_198 (*(undefined1 (*)[176])(frame + 24))
#define local_e8 (*(undefined1 (*)[180])(frame + 200))
#define local_34 (*(char (*)[4])(frame + 380))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100400e0
 */

undefined4
recovered_100400e0(long param_1,uint param_2,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[464] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *in_R8;
  long lVar7;

  if (param_1 != 0 && -1 < (int)param_2) {
    uVar4 = recovered_10036f80((char *)param_1);
    if ((ulong)param_2 + 6 <= uVar4) {
      lVar7 = (uVar4 + param_1) - (ulong)param_2;
      iVar2 = recovered_10036b00((void *)(lVar7 + -6),str_10048a3f,6);
      if (iVar2 == 0) {
        iVar2 = 0x80;
        while( true ) {
          uVar1 = DAT_1004b6d0 + 1;
          uVar4 = (ulong)(uVar1 >> 1) / 0x1f;
          iVar3 = DAT_1004b6d0 + (int)uVar4 * -0x3e;
          DAT_1004b6d0 = uVar1;
          *(char *)(lVar7 + -6) = str_10048a00[iVar3 + 1];
          *(char *)(lVar7 + -5) =
               str_10048a00[(uint)((int)(uVar4 / 0x3e) * -0x3f + (int)(uVar4 / 0x3e) + (int)uVar4)];
          *(char *)(lVar7 + -4) = str_10048a00[(uVar1 / 0x3a2f8) * -0x3e + uVar1 / 0xf04];
          *(char *)(lVar7 + -3) = str_10048a00[(uVar1 / 0x3a2f8) % 0x3e];
          *(char *)(lVar7 + -2) = str_10048a00[(uVar1 / 0xe17810) % 0x3e];
          in_R8 = (undefined8 *)((ulong)uVar1 / 0x369b13e0);
          *(undefined1 *)(lVar7 + -1) = *(undefined1 *)(in_R8 + 0x2009140);
          uVar5 = recovered_1003de80(param_1,(long)local_e8,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                     in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
          if ((int)uVar5 != 0) break;
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            DAT_1004a954 = 0x11;
            return 0xffffffff;
          }
        }
        uVar5 = recovered_1003de80(param_1,(long)local_198,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                   in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
        if ((int)uVar5 == 0) {
          DAT_1004a954 = 0x11;
          return 0xffffffff;
        }
        pf_varargs_10039b90__8_(local_34,4,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1ca9U));
        pvVar6 = recovered_1003ab00((char *)param_1,local_34);
        if (pvVar6 == (void *)0x0) {
          return 0xffffffff;
        }
        return *(undefined4 *)((long)pvVar6 + 0xc);
      }
    }
  }
  DAT_1004a954 = 0x16;
  return 0xffffffff;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef DAT_1004b6d0
#undef str_10048a00
#undef str_10048a3f
#undef local_198
#undef local_e8
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040300
 */

void recovered_10040300(long param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100400e0(param_1,0,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  return;
}


#undef DAT_1004b6d4
#define DAT_1004b6d4 (*(uint *)(((uintptr_t)pf_module_state + 0x499eU)))
#undef DAT_1004b6e0
#define DAT_1004b6e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040310
 */

undefined8 recovered_10040310(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  uVar1 = 0xffffffff;
  if (DAT_1004b6d4 < 0x20 && param_1 != 0) {
    uVar2 = (ulong)DAT_1004b6d4;
    DAT_1004b6d4 = DAT_1004b6d4 + 1;
    *(long *)(&DAT_1004b6e0 + uVar2 * 8) = param_1;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_1004b6d4
#undef DAT_1004b6e0

#undef DAT_1004b6d4
#define DAT_1004b6d4 (*(uint *)(((uintptr_t)pf_module_state + 0x499eU)))
#undef DAT_1004b6e0
#define DAT_1004b6e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040350
 */

undefined8 recovered_10040350(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  uVar1 = 0xffffffff;
  if (DAT_1004b6d4 < 0x20 && param_1 != 0) {
    uVar2 = (ulong)DAT_1004b6d4;
    DAT_1004b6d4 = DAT_1004b6d4 + 1;
    *(long *)(&DAT_1004b6e0 + uVar2 * 8) = param_1;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_1004b6d4
#undef DAT_1004b6e0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10040390(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (_DAT_00006800 != 0x50414d57) goto LAB_100403e0;
  if (_DAT_00006804 == 0) goto LAB_100403e0;
  if (_DAT_00006808 < 0xc) goto LAB_100403e0;
  uVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_100403e0;
  do {
    if (uVar1 != 0) {
      (*(code *)(ulong)uVar1)();
    }
LAB_100403e0:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (uVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10040420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (_DAT_00006800 != 0x50414d57) goto LAB_10040470;
  if (_DAT_00006804 == 0) goto LAB_10040470;
  if (_DAT_00006808 < 0xc) goto LAB_10040470;
  uVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_10040470;
  do {
    if (uVar1 != 0) {
      (*(code *)(ulong)uVar1)();
    }
LAB_10040470:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (uVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_1004b6d4
#define DAT_1004b6d4 (*(uint *)(((uintptr_t)pf_module_state + 0x499eU)))
#undef DAT_1004b6e0
#define DAT_1004b6e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49aaU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100404b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100404b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = (ulong)DAT_1004b6d4;
  uVar1 = DAT_1004b6d4;
  while (uVar1 != 0) {
    DAT_1004b6d4 = (int)uVar2 - 1;
    uVar2 = (ulong)DAT_1004b6d4;
    if (*(code **)(&DAT_1004b6e0 + uVar2 * 8) != (code *)0x0) {
      (**(code **)(&DAT_1004b6e0 + uVar2 * 8))();
      uVar2 = (ulong)DAT_1004b6d4;
    }
    uVar1 = (uint)uVar2;
  }
  if (_DAT_00006800 != 0x50414d57) goto LAB_10040530;
  if (_DAT_00006804 == 0) goto LAB_10040530;
  if (_DAT_00006808 < 0xc) goto LAB_10040530;
  uVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_10040530;
  do {
    if (uVar1 != 0) {
      (*(code *)(ulong)uVar1)();
    }
LAB_10040530:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (uVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef DAT_1004b6d4
#undef DAT_1004b6e0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10040570(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (_DAT_00006800 != 0x50414d57) goto LAB_100405c0;
  if (_DAT_00006804 == 0) goto LAB_100405c0;
  if (_DAT_00006808 < 0xc) goto LAB_100405c0;
  uVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_100405c0;
  do {
    if (uVar1 != 0) {
      (*(code *)(ulong)uVar1)();
    }
LAB_100405c0:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (uVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040600
 */

bool recovered_10040600(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 < 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040610
 */

undefined8 recovered_10040610(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040620
 */

undefined8 recovered_10040620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040630
 */

undefined8 recovered_10040630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040640
 */

undefined8 recovered_10040640(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040650
 */

undefined8 recovered_10040650(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != 1000) {
    DAT_1004a954 = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040680
 */

undefined8 recovered_10040680(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != 1000) {
    DAT_1004a954 = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1004a954

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(uint *)(0x6944U))
#define local_628 (*(undefined1 (*)[12])(frame + 24))
#define local_61c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100406b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100406b0(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10036210(local_628,0,0x620);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x147 < _DAT_00006808 && ((code *)(ulong)_DAT_00006944 != (code *)0x0)) &&
      (iVar1 = (*(code *)(ulong)_DAT_00006944)(local_628), iVar1 != 0)))) {
    return local_61c;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_628
#undef local_61c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040730
 */

undefined8 recovered_10040730(void)

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
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(uint *)(0x6944U))
#define local_630 (*(undefined1 (*)[12])(frame + 16))
#define local_624 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040740(int param_1)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != 0) {
    recovered_10036210(local_630,0,0x620);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x147 < _DAT_00006808 && ((code *)(ulong)_DAT_00006944 != (code *)0x0)) &&
        (iVar1 = (*(code *)(ulong)_DAT_00006944)(local_630), iVar1 != 0)))) {
      iVar1 = local_624;
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 != param_1) {
      DAT_1004a954 = 3;
      return -1;
    }
  }
  recovered_10036210(local_630,0,0x620);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x147 < _DAT_00006808 && ((code *)(ulong)_DAT_00006944 != (code *)0x0)) &&
       (iVar1 = (*(code *)(ulong)_DAT_00006944)(local_630), iVar1 != 0)))))) {
    return local_624;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef DAT_1004a954
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_630
#undef local_624

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(uint *)(0x6944U))
#define local_628 (*(undefined1 (*)[12])(frame + 24))
#define local_61c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10040850(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10036210(local_628,0,0x620);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x147 < _DAT_00006808 && ((code *)(ulong)_DAT_00006944 != (code *)0x0)) &&
      (iVar1 = (*(code *)(ulong)_DAT_00006944)(local_628), iVar1 != 0)))) {
    return local_61c;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_628
#undef local_61c

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100408d0
 */

undefined8 recovered_100408d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a954 = 0x4e;
  return 0xffffffff;
}

#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100408f0
 */

void recovered_100408f0(long param_1,long *param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040900(param_1,param_2,in_R8,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004b6d4
#define DAT_1004b6d4 (*(uint *)(((uintptr_t)pf_module_state + 0x499eU)))
#undef DAT_1004b6e0
#define DAT_1004b6e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49aaU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
#define local_238 (*(char (*)[520])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10040900(long param_1,long *param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong count;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *text;

  if (param_1 == 0) {
    DAT_1004a954 = 0x16;
  }
  else {
    local_238[0] = '\0';
    if ((param_2 == (long *)0x0) || (text = (char *)*param_2, text == (char *)0x0)) {
      pf_varargs_10039b90__8_(local_238,0x200,&DAT_100489c0,param_1);
    }
    else {
      uVar3 = 1;
      lVar4 = 0;
      do {
        count = recovered_10036f80(text);
        if (0x1ff < count + lVar4 + 2) {
          DAT_1004a954 = 7;
          goto LAB_10040a6d;
        }
        if ((int)uVar3 != 1) {
          local_238[lVar4] = ' ';
          lVar4 = lVar4 + 1;
        }
        recovered_10035510(local_238 + lVar4,text,count);
        lVar4 = lVar4 + count;
        local_238[lVar4] = '\0';
        text = (char *)param_2[uVar3];
        uVar3 = (ulong)((int)uVar3 + 1);
      } while (text != (char *)0x0);
    }
    uVar2 = recovered_1003fee0((long)local_238);
    if ((int)uVar2 == 0) {
      uVar3 = (ulong)DAT_1004b6d4;
      uVar1 = DAT_1004b6d4;
      while (uVar1 != 0) {
        DAT_1004b6d4 = (int)uVar3 - 1;
        uVar3 = (ulong)DAT_1004b6d4;
        if (*(code **)(&DAT_1004b6e0 + uVar3 * 8) != (code *)0x0) {
          (**(code **)(&DAT_1004b6e0 + uVar3 * 8))();
          uVar3 = (ulong)DAT_1004b6d4;
        }
        uVar1 = (uint)uVar3;
      }
      if (_DAT_00006800 != 0x50414d57) goto LAB_10040a90;
      if (_DAT_00006804 == 0) goto LAB_10040a90;
      if (_DAT_00006808 < 0xc) goto LAB_10040a90;
      if (_DAT_00006808 < 0x34) goto LAB_10040a90;
      uVar1 = _DAT_00006830;
      do {
        if (uVar1 != 0) {
          (*(code *)(ulong)uVar1)();
        }
LAB_10040a90:
        do {
          do {
          } while (_DAT_00006800 != 0x50414d57);
        } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) || (_DAT_00006808 < 0xa0));
        uVar1 = _DAT_0000689c;
      } while( true );
    }
  }
LAB_10040a6d:
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef DAT_100489c0
#undef DAT_1004a954
#undef DAT_1004b6d4
#undef DAT_1004b6e0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c
#undef local_238

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040ae0
 */

void recovered_10040ae0(long in_RDI,long *in_RSI,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040900(in_RDI,in_RSI,in_R8,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040af0
 */

void recovered_10040af0(long in_RDI,long *in_RSI,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040900(in_RDI,in_RSI,in_R8,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040b00
 */

undefined8 recovered_10040b00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 1:
  case 0x1d:
    return 0x1000;
  case 2:
  case 5:
    return 0x20;
  case 3:
    return 1000;
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
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
    goto switchD_10040b16_caseD_4;
  case 0x39:
  case 0x3a:
    return 1;
  case 0x46:
    return 0x400;
  default:
    if (param_1 - 200U < 2) {
      return 0x8000;
    }
switchD_10040b16_caseD_4:
    DAT_1004a954 = 0x16;
    return 0xffffffffffffffff;
  }
}

#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040c80
 */

undefined8 recovered_10040c80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0x1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040c90
 */

undefined8 recovered_10040c90(void)

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
 * Address: 0x10040ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10040ca0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

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
 * Address: 0x10040cf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10040cf0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

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
 * Address: 0x10040d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10040d40(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  return 0;
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
 * Address: 0x10040da0
 */

undefined8 recovered_10040da0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 extraout_RAX = 0;

  recovered_10037650((undefined8 *)0x0);
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = extraout_RAX;
    param_1[1] = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040de0
 */

undefined8 recovered_10040de0(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 extraout_RAX = 0;
  undefined8 uVar1;

  if (param_2 == (undefined8 *)0x0) {
    DAT_1004a954 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    recovered_10037650((undefined8 *)0x0);
    *param_2 = extraout_RAX;
    param_2[1] = 0;
  }
  return uVar1;
}

#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e20
 */

undefined8 recovered_10040e20(undefined8 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e40
 */

undefined8 recovered_10040e40(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e60
 */

undefined8
recovered_10040e60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_4 != 0) {
    recovered_10036210((void *)param_4,0,0x90);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040ea0
 */

undefined8 recovered_10040ea0(uint param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == (undefined8 *)0x0) || (9 < param_1)) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  if ((0x13U >> (param_1 & 0x1f) & 1) == 0) {
    if ((0x20cU >> (param_1 & 0x1f) & 1) == 0) {
      if (param_1 != 8) {
        DAT_1004a954 = 0x16;
        return 0xffffffff;
      }
      *param_2 = 0x20;
      param_2[1] = 0x20;
    }
    else {
      *param_2 = 0x8000000;
      param_2[1] = 0x8000000;
    }
  }
  else {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0xffffffffffffffff;
  }
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040f10
 */

undefined8 recovered_10040f10(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 10) && ((799U >> (param_1 & 0x1f) & 1) != 0)) {
    return 0;
  }
  DAT_1004a954 = 0x16;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040f40
 */

undefined8 recovered_10040f40(undefined8 param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    DAT_1004a954 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    recovered_10036210((void *)param_2,0,0x90);
  }
  return uVar1;
}

#undef DAT_1004a954

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
 * Address: 0x10040f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10040f80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && ((code *)(ulong)_DAT_0000689c != (code *)0x0)))) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  return 0;
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
 * Address: 0x10040fd0
 */

undefined8 recovered_10040fd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040fe0
 */

undefined8 recovered_10040fe0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040ff0
 */

undefined8 recovered_10040ff0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041000
 */

undefined8 recovered_10041000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041010
 */

undefined8 recovered_10041010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041020
 */

undefined8 recovered_10041020(undefined8 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == (undefined4 *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_2 = 0;
  return 0;
}

#undef DAT_1004a954

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041050
 */

undefined8
recovered_10041050(long param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1004a954 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    recovered_10036210((void *)param_1,0,0xc0);
    pf_varargs_10039b90__8_((char *)param_1,0x20,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1d10U));
    pf_varargs_10039b90__8_((char *)(param_1 + 0x20),0x20,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1d16U));
    pf_varargs_10039b90__8_((char *)(param_1 + 0x40),0x20,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1d21U));
    pf_varargs_10039b90__8_((char *)(param_1 + 0x60),0x40,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1d25U));
    pf_varargs_10039b90__8_((char *)(param_1 + 0xa0),0x20,&DAT_100489c0,((uintptr_t)pf_module_state + 0x23eU));
  }
  return uVar1;
}

#undef DAT_100489c0
#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef str_10048a4c
#define str_10048a4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041130
 */

undefined8 recovered_10041130(long param_1,ulong param_2,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10036f80(str_10048a4c);
  if (param_1 == 0 || param_2 == 0) {
    DAT_1004a954 = 0x16;
  }
  else {
    if (uVar1 < param_2) {
      recovered_10035510((void *)param_1,str_10048a4c,uVar1 + 1);
      return 0;
    }
    recovered_10035510((void *)param_1,str_10048a4c,param_2);
    DAT_1004a954 = 0x3f;
  }
  return 0xffffffff;
}

#undef DAT_1004a954
#undef str_10048a4c

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004b7e0
#define DAT_1004b7e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aaaU)))
#undef DAT_1004b7e8
#define DAT_1004b7e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ab2U)))
#undef DAT_1004b7f0
#define DAT_1004b7f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4abaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100411b0
 */

undefined8 recovered_100411b0(uint param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if (param_1 - 0x20 < 0xffffffe1) {
    DAT_1004a954 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar2 = (ulong)param_1;
  uVar1 = *(undefined8 *)(&DAT_1004b7e0 + uVar2 * 0x18);
  *(undefined8 *)(&DAT_1004b7e0 + uVar2 * 0x18) = param_2;
  *(undefined8 *)(&DAT_1004b7e8 + uVar2 * 0x18) = 0;
  *(undefined8 *)(&DAT_1004b7f0 + uVar2 * 0x18) = 0;
  return uVar1;
}

#undef DAT_1004a954
#undef DAT_1004b7e0
#undef DAT_1004b7e8
#undef DAT_1004b7f0

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004b7e0
#define DAT_1004b7e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aaaU)))
#undef DAT_1004b7e8
#define DAT_1004b7e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ab2U)))
#undef DAT_1004b7f0
#define DAT_1004b7f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4abaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100411f0
 */

undefined8 recovered_100411f0(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_1 - 0x20 < 0xffffffe1) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  uVar1 = (ulong)param_1;
  if (param_3 != (undefined8 *)0x0) {
    param_3[2] = *(undefined8 *)(&DAT_1004b7f0 + uVar1 * 0x18);
    uVar2 = *(undefined8 *)(&DAT_1004b7e8 + uVar1 * 0x18);
    *param_3 = *(undefined8 *)(&DAT_1004b7e0 + uVar1 * 0x18);
    param_3[1] = uVar2;
  }
  if (param_2 != (undefined8 *)0x0) {
    *(undefined8 *)(&DAT_1004b7f0 + uVar1 * 0x18) = param_2[2];
    uVar2 = param_2[1];
    *(undefined8 *)(&DAT_1004b7e0 + uVar1 * 0x18) = *param_2;
    *(undefined8 *)(&DAT_1004b7e8 + uVar1 * 0x18) = uVar2;
  }
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004b7e0
#undef DAT_1004b7e8
#undef DAT_1004b7f0

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bae0
#define DAT_1004bae0 (*(uint *)(((uintptr_t)pf_module_state + 0x4daaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041260
 */

undefined8 recovered_10041260(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_3 != (uint *)0x0) {
    *param_3 = DAT_1004bae0;
  }
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    if (param_1 == 3) {
      DAT_1004bae0 = *param_2;
      return uVar1;
    }
    if (param_1 != 2) {
      if (param_1 == 1) {
        DAT_1004bae0 = DAT_1004bae0 | *param_2;
        return uVar1;
      }
      DAT_1004a954 = 0x16;
      return 0xffffffff;
    }
    DAT_1004bae0 = DAT_1004bae0 & ~*param_2;
  }
  return uVar1;
}

#undef DAT_1004a954
#undef DAT_1004bae0

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bae0
#define DAT_1004bae0 (*(uint *)(((uintptr_t)pf_module_state + 0x4daaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100412c0
 */

undefined8 recovered_100412c0(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_3 != (uint *)0x0) {
    *param_3 = DAT_1004bae0;
  }
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    if (param_1 == 3) {
      DAT_1004bae0 = *param_2;
      return uVar1;
    }
    if (param_1 != 2) {
      if (param_1 == 1) {
        DAT_1004bae0 = DAT_1004bae0 | *param_2;
        return uVar1;
      }
      DAT_1004a954 = 0x16;
      return 0xffffffff;
    }
    DAT_1004bae0 = DAT_1004bae0 & ~*param_2;
  }
  return uVar1;
}

#undef DAT_1004a954
#undef DAT_1004bae0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041320
 */

undefined8 recovered_10041320(void)

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
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(uint *)(0x6944U))
#define local_630 (*(undefined1 (*)[12])(frame + 16))
#define local_624 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10041330(int param_1)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  recovered_10036210(local_630,0,0x620);
  if (((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
      ((_DAT_00006808 < 0x148 || ((code *)(ulong)_DAT_00006944 == (code *)0x0)))) ||
     (iVar1 = (*(code *)(ulong)_DAT_00006944)(local_630), iVar1 == 0)) {
    local_624 = 1;
  }
  uVar2 = 0;
  if ((param_1 != 0) && (local_624 != param_1)) {
    DAT_1004a954 = 3;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef DAT_1004a954
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_630
#undef local_624

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100413d0
 */

undefined8 recovered_100413d0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0;
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041400
 */

undefined8 recovered_10041400(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0xffffffff;
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041430
 */

undefined8 recovered_10041430(uint *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (uint *)0x0 || param_2 - 0x20U < 0xffffffe1) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_1 = *param_1 | 1 << ((byte)param_2 & 0x1f);
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041470
 */

undefined8 recovered_10041470(uint *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == (uint *)0x0 || param_2 - 0x20U < 0xffffffe1) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  bVar1 = (byte)param_2 & 0x1f;
  *param_1 = *param_1 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return 0;
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100414b0
 */

ulong recovered_100414b0(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (uint *)0x0 || param_2 - 0x20 < 0xffffffe1) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  return (ulong)((*param_1 >> (param_2 & 0x1f) & 1) != 0);
}

#undef DAT_1004a954

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bae4
#define DAT_1004bae4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4daeU)))
#undef DAT_1004bae8
#define DAT_1004bae8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db2U)))
#undef DAT_1004baec
#define DAT_1004baec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db6U)))
#undef DAT_1004baf0
#define DAT_1004baf0 (*(int *)(((uintptr_t)pf_module_state + 0x4dbaU)))
#undef DAT_1004baf4
#define DAT_1004baf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbeU)))
#undef DAT_1004bb00
#define DAT_1004bb00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dcaU)))
#undef UNK_1004bafc
#define UNK_1004bafc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc6U)))
#undef UNK_1004bb04
#define UNK_1004bb04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dceU)))
#undef UNK_1004bb08
#define UNK_1004bb08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dd2U)))
#undef _DAT_1004bae4
#define _DAT_1004bae4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4daeU)))
#undef _DAT_1004bae8
#define _DAT_1004bae8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4db2U)))
#undef _DAT_1004baec
#define _DAT_1004baec (*(int *)(((uintptr_t)pf_module_state + 0x4db6U)))
#undef _DAT_1004baf4
#define _DAT_1004baf4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dbeU)))
#undef _DAT_1004bb00
#define _DAT_1004bb00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dcaU)))
#undef uRam000000001004bafc
#define uRam000000001004bafc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc6U)))
#undef uRam000000001004bb04
#define uRam000000001004bb04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dceU)))
#undef uRam000000001004bb08
#define uRam000000001004bb08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dd2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100414f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100414f0(uint param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (2 < param_1 || param_2 == (undefined8 *)0x0) {
    DAT_1004a954 = 0x19;
    return 0xffffffff;
  }
  if (DAT_1004baf0 == 0 && _DAT_1004baec == 0) {
    recovered_10036210(&DAT_1004bae4,0,0x2c);
    DAT_1004baf0 = 0x588;
    _DAT_1004bae8 = 1;
    _DAT_1004baec = 0xb00;
  }
  uVar1 = uRam000000001004bb08;
  *(ulong *)((long)param_2 + 0x1c) = CONCAT44(uRam000000001004bb04,_DAT_1004bb00);
  *(undefined8 *)((long)param_2 + 0x24) = uVar1;
  uVar1 = CONCAT44(_DAT_1004bb00,uRam000000001004bafc);
  param_2[2] = _DAT_1004baf4;
  param_2[3] = uVar1;
  uVar1 = CONCAT44(DAT_1004baf0,_DAT_1004baec);
  *param_2 = CONCAT44(_DAT_1004bae8,_DAT_1004bae4);
  param_2[1] = uVar1;
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bae4
#undef DAT_1004bae8
#undef DAT_1004baec
#undef DAT_1004baf0
#undef DAT_1004baf4
#undef DAT_1004bb00
#undef UNK_1004bafc
#undef UNK_1004bb04
#undef UNK_1004bb08
#undef _DAT_1004bae4
#undef _DAT_1004bae8
#undef _DAT_1004baec
#undef _DAT_1004baf4
#undef _DAT_1004bb00
#undef uRam000000001004bafc
#undef uRam000000001004bb04
#undef uRam000000001004bb08

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bae4
#define DAT_1004bae4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4daeU)))
#undef DAT_1004baec
#define DAT_1004baec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db6U)))
#undef DAT_1004baf4
#define DAT_1004baf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbeU)))
#undef DAT_1004bb00
#define DAT_1004bb00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dcaU)))
#undef UNK_1004bafc
#define UNK_1004bafc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc6U)))
#undef UNK_1004bb04
#define UNK_1004bb04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dceU)))
#undef UNK_1004bb08
#define UNK_1004bb08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dd2U)))
#undef _DAT_1004bae4
#define _DAT_1004bae4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4daeU)))
#undef _DAT_1004baec
#define _DAT_1004baec (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db6U)))
#undef _DAT_1004baf4
#define _DAT_1004baf4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dbeU)))
#undef _DAT_1004bb00
#define _DAT_1004bb00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dcaU)))
#undef uRam000000001004bafc
#define uRam000000001004bafc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc6U)))
#undef uRam000000001004bb04
#define uRam000000001004bb04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dceU)))
#undef uRam000000001004bb08
#define uRam000000001004bb08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dd2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10041590(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 3 && param_3 != (undefined8 *)0x0) {
    uRam000000001004bb04 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x1c) >> 0x20);
    uRam000000001004bb08 = *(undefined8 *)((long)param_3 + 0x24);
    _DAT_1004baf4 = param_3[2];
    uRam000000001004bafc = (undefined4)param_3[3];
    _DAT_1004bb00 = (undefined4)((ulong)param_3[3] >> 0x20);
    _DAT_1004bae4 = *param_3;
    _DAT_1004baec = param_3[1];
    return 0;
  }
  DAT_1004a954 = 0x19;
  return 0xffffffff;
}

#undef DAT_1004a954
#undef DAT_1004bae4
#undef DAT_1004baec
#undef DAT_1004baf4
#undef DAT_1004bb00
#undef UNK_1004bafc
#undef UNK_1004bb04
#undef UNK_1004bb08
#undef _DAT_1004bae4
#undef _DAT_1004baec
#undef _DAT_1004baf4
#undef _DAT_1004bb00
#undef uRam000000001004bafc
#undef uRam000000001004bb04
#undef uRam000000001004bb08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100415e0
 */

void recovered_100415e0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    param_1[3] = param_1[3] & 0xfffffa77;
    *(byte *)((long)param_1 + 9) = *(byte *)((long)param_1 + 9) | 0xb;
  }
  return;
}


#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041600
 */

/* WARNING: Removing unreachable block (ram,0x10041693) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 recovered_10041600(uint param_1,long param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 3) {
    if (param_2 == 0x8004667e) {
      return 0;
    }
    if (param_2 == 0x40087468) {
      if (param_3 == (undefined8 *)0x0) {
        DAT_1004a954 = 0x16;
        return 0xffffffff;
      }
      *param_3 = 0x500019;
      return 0;
    }
  }
  DAT_1004a954 = 0x19;
  return 0xffffffff;
}

#undef DAT_1004a954

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100416f0
 */

uint recovered_100416f0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;

  if (param_1 < 1) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2 & 1;
  }
  if ((param_3 != (uint *)0x0) && ((*param_3 & 1) != 0)) {
    if (((*(int **)(pf_module_state+0x3b1aU)) == (int *)0x0) || (*(*(int **)(pf_module_state+0x3b1aU)) != 0x54474c46)) {
      *param_3 = *param_3 & 0xfffffffe;
    }
    else {
      uVar1 = uVar1 + 1;
    }
  }
  uVar4 = param_1 - 1;
  if ((param_4 != (uint *)0x0) && ((*param_4 & 1) != 0)) {
    *param_4 = *param_4 & 0xfffffffe;
  }
  if (uVar4 != 0) {
    uVar5 = 0xff;
    if ((ulong)uVar4 < 0xff) {
      uVar5 = (ulong)uVar4;
    }
    uVar3 = 1;
    do {
      bVar2 = (byte)uVar3;
      uVar4 = (uint)uVar3;
      if (param_2 != (uint *)0x0) {
        uVar6 = uVar3 >> 5 & 0x7ffffff;
        if ((param_2[uVar6] >> (uVar4 & 0x1f) & 1) != 0) {
          param_2[uVar6] = param_2[uVar6] & ~(1 << (bVar2 & 0x1f));
        }
      }
      if (param_3 != (uint *)0x0) {
        uVar6 = uVar3 >> 5 & 0x7ffffff;
        if ((param_3[uVar6] >> (uVar4 & 0x1f) & 1) != 0) {
          if (((uVar3 < 0x20) && ((&(*(int **)(pf_module_state+0x3b1aU)))[uVar3] != (int *)0x0)) &&
             (*(&(*(int **)(pf_module_state+0x3b1aU)))[uVar3] == 0x54474c46)) {
            uVar1 = uVar1 + 1;
          }
          else {
            param_3[uVar6] = param_3[uVar6] & ~(1 << (bVar2 & 0x1f));
          }
        }
      }
      if (param_4 != (uint *)0x0) {
        uVar6 = uVar3 >> 5 & 0x7ffffff;
        if ((param_4[uVar6] >> (uVar4 & 0x1f) & 1) != 0) {
          param_4[uVar6] = param_4[uVar6] & ~(1 << (bVar2 & 0x1f));
        }
      }
      bVar7 = uVar3 != uVar5;
      uVar3 = uVar3 + 1;
    } while (bVar7);
  }
  return uVar1;
}

#undef DAT_1004a850

#undef DAT_1004a850
#define DAT_1004a850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b1aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041850
 */

int recovered_10041850(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;

  if (param_1 == 0 && param_2 != 0) {
    DAT_1004a954 = 0xe;
    return -1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = 0;
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 6 + uVar2 * 8) = 0;
    uVar5 = (ulong)*(uint *)(param_1 + uVar2 * 8);
    uVar3 = 0x20;
    if ((((uVar5 < 0x20) && ((int *)(&(*(int **)(pf_module_state+0x3b1aU)))[uVar5] != (int *)0x0)) &&
        (*(int *)(&(*(int **)(pf_module_state+0x3b1aU)))[uVar5] == 0x54474c46)) &&
       (uVar3 = *(ushort *)(param_1 + 4 + uVar2 * 8) & 5, uVar3 == 0)) {
      iVar4 = 0;
    }
    else {
      *(ushort *)(param_1 + 6 + uVar2 * 8) = uVar3;
      iVar4 = 1;
    }
    iVar1 = iVar1 + iVar4;
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return iVar1;
}

#undef DAT_1004a850
#undef DAT_1004a954

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041900
 */

undefined8 recovered_10041900(int *param_1,undefined *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0x16;
  if ((param_2 == (undefined *)0x0 || param_1 == (int *)0x0) || (uVar1 = 0, *param_1 != 0)) {
    return uVar1;
  }
  *param_1 = 1;
  (*(code *)param_2)();
  return 0;
}


#undef DAT_1004a838
#define DAT_1004a838 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3b02U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041930
 */

undefined8
recovered_10041930(long *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == (undefined *)0x0) {
    return 0x16;
  }
  if (param_1 != (long *)0x0) {
    lVar1 = DAT_1004a838 + 1;
    *param_1 = DAT_1004a838;
    DAT_1004a838 = lVar1;
  }
  (*(code *)param_3)(param_4);
  return 0;
}

#undef DAT_1004a838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041970
 */

undefined8 recovered_10041970(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041990
 */

undefined8 recovered_10041990(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100419a0
 */

undefined8 recovered_100419a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100419c0
 */

undefined8 recovered_100419c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100419d0
 */

undefined8 recovered_100419d0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100419f0
 */

undefined8 recovered_100419f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a00
 */

undefined8 recovered_10041a00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a10
 */

undefined8 recovered_10041a10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a20
 */

undefined8 recovered_10041a20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a30
 */

undefined8 recovered_10041a30(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a50
 */

undefined8 recovered_10041a50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a60
 */

undefined8 recovered_10041a60(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a70
 */

undefined8 recovered_10041a70(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041a90
 */

undefined8 recovered_10041a90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041aa0
 */

undefined8 recovered_10041aa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ab0
 */

undefined8 recovered_10041ab0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ac0
 */

undefined8 recovered_10041ac0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ad0
 */

undefined8 recovered_10041ad0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_1004bb10
#define DAT_1004bb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddaU)))
#undef DAT_1004bb11
#define DAT_1004bb11 (*(char *)(((uintptr_t)pf_module_state + 0x4ddbU)))
#undef DAT_1004bb12
#define DAT_1004bb12 (*(char *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#undef DAT_1004bb13
#define DAT_1004bb13 (*(char *)(((uintptr_t)pf_module_state + 0x4dddU)))
#undef DAT_1004bb14
#define DAT_1004bb14 (*(char *)(((uintptr_t)pf_module_state + 0x4ddeU)))
#undef DAT_1004bb15
#define DAT_1004bb15 (*(char *)(((uintptr_t)pf_module_state + 0x4ddfU)))
#undef DAT_1004bb16
#define DAT_1004bb16 (*(char *)(((uintptr_t)pf_module_state + 0x4de0U)))
#undef DAT_1004bb17
#define DAT_1004bb17 (*(char *)(((uintptr_t)pf_module_state + 0x4de1U)))
#undef DAT_1004bb18
#define DAT_1004bb18 (*(char *)(((uintptr_t)pf_module_state + 0x4de2U)))
#undef DAT_1004bb19
#define DAT_1004bb19 (*(char *)(((uintptr_t)pf_module_state + 0x4de3U)))
#undef DAT_1004bb1a
#define DAT_1004bb1a (*(char *)(((uintptr_t)pf_module_state + 0x4de4U)))
#undef DAT_1004bb1b
#define DAT_1004bb1b (*(char *)(((uintptr_t)pf_module_state + 0x4de5U)))
#undef DAT_1004bb1c
#define DAT_1004bb1c (*(char *)(((uintptr_t)pf_module_state + 0x4de6U)))
#undef DAT_1004bb1d
#define DAT_1004bb1d (*(char *)(((uintptr_t)pf_module_state + 0x4de7U)))
#undef DAT_1004bb1e
#define DAT_1004bb1e (*(char *)(((uintptr_t)pf_module_state + 0x4de8U)))
#undef DAT_1004bb1f
#define DAT_1004bb1f (*(char *)(((uintptr_t)pf_module_state + 0x4de9U)))
#undef DAT_1004bb20
#define DAT_1004bb20 (*(char *)(((uintptr_t)pf_module_state + 0x4deaU)))
#undef DAT_1004bb21
#define DAT_1004bb21 (*(char *)(((uintptr_t)pf_module_state + 0x4debU)))
#undef DAT_1004bb22
#define DAT_1004bb22 (*(char *)(((uintptr_t)pf_module_state + 0x4decU)))
#undef DAT_1004bb23
#define DAT_1004bb23 (*(char *)(((uintptr_t)pf_module_state + 0x4dedU)))
#undef DAT_1004bb24
#define DAT_1004bb24 (*(char *)(((uintptr_t)pf_module_state + 0x4deeU)))
#undef DAT_1004bb25
#define DAT_1004bb25 (*(char *)(((uintptr_t)pf_module_state + 0x4defU)))
#undef DAT_1004bb26
#define DAT_1004bb26 (*(char *)(((uintptr_t)pf_module_state + 0x4df0U)))
#undef DAT_1004bb27
#define DAT_1004bb27 (*(char *)(((uintptr_t)pf_module_state + 0x4df1U)))
#undef DAT_1004bb28
#define DAT_1004bb28 (*(char *)(((uintptr_t)pf_module_state + 0x4df2U)))
#undef DAT_1004bb29
#define DAT_1004bb29 (*(char *)(((uintptr_t)pf_module_state + 0x4df3U)))
#undef DAT_1004bb2a
#define DAT_1004bb2a (*(char *)(((uintptr_t)pf_module_state + 0x4df4U)))
#undef DAT_1004bb2b
#define DAT_1004bb2b (*(char *)(((uintptr_t)pf_module_state + 0x4df5U)))
#undef DAT_1004bb2c
#define DAT_1004bb2c (*(char *)(((uintptr_t)pf_module_state + 0x4df6U)))
#undef DAT_1004bb2d
#define DAT_1004bb2d (*(char *)(((uintptr_t)pf_module_state + 0x4df7U)))
#undef DAT_1004bb2e
#define DAT_1004bb2e (*(char *)(((uintptr_t)pf_module_state + 0x4df8U)))
#undef DAT_1004bb2f
#define DAT_1004bb2f (*(char *)(((uintptr_t)pf_module_state + 0x4df9U)))
#undef DAT_1004bb30
#define DAT_1004bb30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ae0
 */

undefined8 recovered_10041ae0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  lVar1 = 1;
  if ((((((((DAT_1004bb11 != '\0') && (lVar1 = 2, DAT_1004bb12 == '\x01')) &&
          (lVar1 = 3, DAT_1004bb13 == '\x01')) &&
         (((lVar1 = 4, DAT_1004bb14 == '\x01' && (lVar1 = 5, DAT_1004bb15 == '\x01')) &&
          ((lVar1 = 6, DAT_1004bb16 == '\x01' &&
           ((lVar1 = 7, DAT_1004bb17 == '\x01' && (lVar1 = 8, DAT_1004bb18 == '\x01')))))))) &&
        (lVar1 = 9, DAT_1004bb19 == '\x01')) &&
       (((lVar1 = 10, DAT_1004bb1a == '\x01' && (lVar1 = 0xb, DAT_1004bb1b == '\x01')) &&
        (lVar1 = 0xc, DAT_1004bb1c == '\x01')))) &&
      (((lVar1 = 0xd, DAT_1004bb1d == '\x01' && (lVar1 = 0xe, DAT_1004bb1e == '\x01')) &&
       ((lVar1 = 0xf, DAT_1004bb1f == '\x01' &&
        ((lVar1 = 0x10, DAT_1004bb20 == '\x01' && (lVar1 = 0x11, DAT_1004bb21 == '\x01')))))))) &&
     (((lVar1 = 0x12, DAT_1004bb22 == '\x01' &&
       (((((lVar1 = 0x13, DAT_1004bb23 == '\x01' && (lVar1 = 0x14, DAT_1004bb24 == '\x01')) &&
          (lVar1 = 0x15, DAT_1004bb25 == '\x01')) &&
         ((lVar1 = 0x16, DAT_1004bb26 == '\x01' && (lVar1 = 0x17, DAT_1004bb27 == '\x01')))) &&
        ((lVar1 = 0x18, DAT_1004bb28 == '\x01' &&
         ((lVar1 = 0x19, DAT_1004bb29 == '\x01' && (lVar1 = 0x1a, DAT_1004bb2a == '\x01')))))))) &&
      ((lVar1 = 0x1b, DAT_1004bb2b == '\x01' &&
       (((lVar1 = 0x1c, DAT_1004bb2c == '\x01' && (lVar1 = 0x1d, DAT_1004bb2d == '\x01')) &&
        (lVar1 = 0x1e, DAT_1004bb2e == '\x01')))))))) {
    lVar1 = 0x1f;
    if (DAT_1004bb2f == '\x01') {
      return 0xb;
    }
  }
  (&DAT_1004bb10)[lVar1] = 1;
  *(undefined8 *)(&DAT_1004bb30 + lVar1 * 8) = 0;
  *param_1 = (int)lVar1;
  return 0;
}

#undef DAT_1004bb10
#undef DAT_1004bb11
#undef DAT_1004bb12
#undef DAT_1004bb13
#undef DAT_1004bb14
#undef DAT_1004bb15
#undef DAT_1004bb16
#undef DAT_1004bb17
#undef DAT_1004bb18
#undef DAT_1004bb19
#undef DAT_1004bb1a
#undef DAT_1004bb1b
#undef DAT_1004bb1c
#undef DAT_1004bb1d
#undef DAT_1004bb1e
#undef DAT_1004bb1f
#undef DAT_1004bb20
#undef DAT_1004bb21
#undef DAT_1004bb22
#undef DAT_1004bb23
#undef DAT_1004bb24
#undef DAT_1004bb25
#undef DAT_1004bb26
#undef DAT_1004bb27
#undef DAT_1004bb28
#undef DAT_1004bb29
#undef DAT_1004bb2a
#undef DAT_1004bb2b
#undef DAT_1004bb2c
#undef DAT_1004bb2d
#undef DAT_1004bb2e
#undef DAT_1004bb2f
#undef DAT_1004bb30

#undef DAT_1004bb10
#define DAT_1004bb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddaU)))
#undef DAT_1004bb30
#define DAT_1004bb30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041d30
 */

undefined8 recovered_10041d30(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0x16;
  if (param_1 < 0x20) {
    (&DAT_1004bb10)[param_1] = 0;
    *(undefined8 *)(&DAT_1004bb30 + (ulong)param_1 * 8) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_1004bb10
#undef DAT_1004bb30

#undef DAT_1004bb10
#define DAT_1004bb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddaU)))
#undef DAT_1004bb30
#define DAT_1004bb30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041d60
 */

undefined8 recovered_10041d60(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x20) && ((&DAT_1004bb10)[param_1] == '\x01')) {
    return *(undefined8 *)(&DAT_1004bb30 + (ulong)param_1 * 8);
  }
  return 0;
}

#undef DAT_1004bb10
#undef DAT_1004bb30

#undef DAT_1004bb10
#define DAT_1004bb10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddaU)))
#undef DAT_1004bb30
#define DAT_1004bb30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041d90
 */

undefined8 recovered_10041d90(uint param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0x16;
  if ((param_1 < 0x20) && ((&DAT_1004bb10)[param_1] == '\x01')) {
    *(undefined8 *)(&DAT_1004bb30 + (ulong)param_1 * 8) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_1004bb10
#undef DAT_1004bb30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041dc0
 */

undefined8 recovered_10041dc0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041de0
 */

undefined8 recovered_10041de0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041df0
 */

undefined8 recovered_10041df0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041e00
 */

undefined8 recovered_10041e00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041e10
 */

undefined8 recovered_10041e10(void)

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
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(uint *)(0x6944U))
#define local_628 (*(undefined1 (*)[12])(frame + 24))
#define local_61c (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10041e20(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10036210(local_628,0,0x620);
  if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
     (((_DAT_00006808 < 0x148 || ((code *)(ulong)_DAT_00006944 == (code *)0x0)) ||
      (iVar1 = (*(code *)(ulong)_DAT_00006944)(local_628), iVar1 == 0)))) {
    local_61c = 1;
  }
  return (long)local_61c;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_628
#undef local_61c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041eb0
 */

bool recovered_10041eb0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ec0
 */

undefined8 recovered_10041ec0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  *param_1 = 0;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ee0
 */

undefined8 recovered_10041ee0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ef0
 */

undefined8 recovered_10041ef0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041f00
 */

undefined8 recovered_10041f00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041f10
 */

undefined8 recovered_10041f10(void)

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
#undef DAT_00006954
#define DAT_00006954 (*(uint8_t *)(0x6954U))
#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a6d8
#define DAT_1004a6d8 (*(void * *)(((uintptr_t)pf_module_state + 0x39a2U)))
#undef DAT_1004a820
#define DAT_1004a820 (*(void * *)(((uintptr_t)pf_module_state + 0x3aeaU)))
#undef DAT_1004a950
#define DAT_1004a950 (*(int *)(((uintptr_t)pf_module_state + 0x3c1aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006954
#define _DAT_00006954 (*(uint *)(0x6954U))
#define local_448 (*(char (*)[512])(frame + 24))
#define local_248 (*(char (*)[520])(frame + 536))
#define local_40 (*(int * *)(frame + 1056))
#define local_31 (*(undefined1 *)(frame + 1071))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10041f20(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[1152] __attribute__((aligned(16))) = {0};

  void *stream;
  void *stream_00;
  int iVar1;
  ulong count;
  undefined8 uVar2;
  long *plVar3;
  char *text;
  ulong uVar4;
  long lVar5;

  if (param_2 == 0) {
    return 0x16;
  }
  local_248[0] = '\0';
  local_40 = param_1;
  if ((param_5 == (long *)0x0) || (text = (char *)*param_5, text == (char *)0x0)) {
    pf_varargs_10039b90__8_(local_248,0x200,&DAT_100489c0,param_2);
  }
  else {
    uVar4 = 1;
    lVar5 = 0;
    plVar3 = param_5;
    do {
      count = recovered_10036f80(text);
      if (0x1ff < count + lVar5 + 2) {
        return 7;
      }
      if ((int)uVar4 != 1) {
        local_248[lVar5] = ' ';
        lVar5 = lVar5 + 1;
      }
      recovered_10035510(local_248 + lVar5,(void *)*plVar3,count);
      lVar5 = lVar5 + count;
      local_248[lVar5] = '\0';
      plVar3 = param_5 + uVar4;
      text = (char *)param_5[uVar4];
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (text != (char *)0x0);
  }
  local_448[0] = '\0';
  uVar2 = 2;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x157 < _DAT_00006808 && ((code *)(ulong)_DAT_00006954 != (code *)0x0)))) {
    iVar1 = (*(code *)(ulong)_DAT_00006954)(local_248,local_448,0x200);
    stream_00 = DAT_1004a820;
    stream = DAT_1004a6d8;
    if (iVar1 == 0) {
      if (local_448[0] != '\0') {
        uVar4 = recovered_10036f80(local_448);
        recovered_1003bf70(local_448,1,uVar4,stream_00);
        local_31 = 10;
        recovered_1003bf70(&local_31,1,1,DAT_1004a820);
      }
      uVar2 = 2;
    }
    else {
      if (local_448[0] != '\0') {
        uVar4 = recovered_10036f80(local_448);
        recovered_1003bf70(local_448,1,uVar4,stream);
        local_31 = 10;
        recovered_1003bf70(&local_31,1,1,DAT_1004a6d8);
      }
      uVar2 = 0;
      if (local_40 != (int *)0x0) {
        DAT_1004a950 = DAT_1004a950 + 1;
        *local_40 = DAT_1004a950;
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006954
#undef DAT_100489c0
#undef DAT_1004a6d8
#undef DAT_1004a820
#undef DAT_1004a950
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006954
#undef local_448
#undef local_248
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042150
 */

void recovered_10042150(int *in_RDI,long in_RSI,undefined8 in_RDX,undefined8 in_RCX,long *in_R8,
                       undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10041f20(in_RDI,in_RSI,in_RDX,in_RCX,in_R8,in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                     in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  return;
}


#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489ea
#define DAT_100489ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb4U)))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef DAT_10048a72
#define DAT_10048a72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3cU)))
#undef DAT_10048a7d
#define DAT_10048a7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10048a82
#define DAT_10048a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1004bc30
#define DAT_1004bc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef DAT_1004bc38
#define DAT_1004bc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef DAT_1004bc40
#define DAT_1004bc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef DAT_1004bc48
#define DAT_1004bc48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef DAT_1004bc50
#define DAT_1004bc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef DAT_1004bc58
#define DAT_1004bc58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef DAT_1004bc60
#define DAT_1004bc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f2aU)))
#undef DAT_1004bca0
#define DAT_1004bca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6aU)))
#undef _DAT_1004bc30
#define _DAT_1004bc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef _DAT_1004bc38
#define _DAT_1004bc38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef _DAT_1004bc40
#define _DAT_1004bc40 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef _DAT_1004bc48
#define _DAT_1004bc48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef _DAT_1004bc50
#define _DAT_1004bc50 (*(char * *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef _DAT_1004bc58
#define _DAT_1004bc58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef str_10048a77
#define str_10048a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d41U)))
#undef str_10048a87
#define str_10048a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
recovered_10042160(int param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined *puVar2;
  char *vararg0;

  if (param_1 == 0) {
    _DAT_1004bc30 = &DAT_10048a72;
    _DAT_1004bc38 = &DAT_100489fc;
    _DAT_1004bc40 = 0;
    _DAT_1004bc48 = &DAT_10048a72;
    _DAT_1004bc50 = str_10048a77;
    _DAT_1004bc58 = &DAT_100489ea;
    return &DAT_1004bc30;
  }
  pcVar1 = (char *)recovered_1003f9f0(&DAT_10048a7d,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                      in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
  if (pcVar1 == (char *)0x0) {
    vararg0 = &DAT_10048a82;
  }
  else {
    vararg0 = &DAT_10048a82;
    if (*pcVar1 != '\0') {
      vararg0 = pcVar1;
    }
  }
  pf_varargs_10039b90__8_(&DAT_1004bc60,0x40,&DAT_100489c0,(ulonglong)vararg0);
  pf_varargs_10039b90__8_(&DAT_1004bca0,0x80,str_10048a87,((uintptr_t)pf_module_state + 0x4f2aU));
  puVar2 = (undefined *)0x0;
  _DAT_1004bc30 = &DAT_1004bc60;
  _DAT_1004bc38 = &DAT_100489fc;
  _DAT_1004bc40 = 0x3e8000003e8;
  _DAT_1004bc48 = &DAT_1004bc60;
  _DAT_1004bc50 = &DAT_1004bca0;
  _DAT_1004bc58 = &DAT_100489ea;
  if (param_1 == 1000) {
    puVar2 = &DAT_1004bc30;
  }
  return puVar2;
}

#undef DAT_100489c0
#undef DAT_100489ea
#undef DAT_100489fc
#undef DAT_10048a72
#undef DAT_10048a7d
#undef DAT_10048a82
#undef DAT_1004bc30
#undef DAT_1004bc38
#undef DAT_1004bc40
#undef DAT_1004bc48
#undef DAT_1004bc50
#undef DAT_1004bc58
#undef DAT_1004bc60
#undef DAT_1004bca0
#undef _DAT_1004bc30
#undef _DAT_1004bc38
#undef _DAT_1004bc40
#undef _DAT_1004bc48
#undef _DAT_1004bc50
#undef _DAT_1004bc58
#undef str_10048a77
#undef str_10048a87

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489ea
#define DAT_100489ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb4U)))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef DAT_10048a72
#define DAT_10048a72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3cU)))
#undef DAT_10048a7d
#define DAT_10048a7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10048a82
#define DAT_10048a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1004bc30
#define DAT_1004bc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef DAT_1004bc38
#define DAT_1004bc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef DAT_1004bc40
#define DAT_1004bc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef DAT_1004bc44
#define DAT_1004bc44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0eU)))
#undef DAT_1004bc48
#define DAT_1004bc48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef DAT_1004bc50
#define DAT_1004bc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef DAT_1004bc58
#define DAT_1004bc58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef DAT_1004bc60
#define DAT_1004bc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f2aU)))
#undef DAT_1004bca0
#define DAT_1004bca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6aU)))
#undef _DAT_1004bc30
#define _DAT_1004bc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef _DAT_1004bc38
#define _DAT_1004bc38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef _DAT_1004bc40
#define _DAT_1004bc40 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef _DAT_1004bc44
#define _DAT_1004bc44 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0eU)))
#undef _DAT_1004bc48
#define _DAT_1004bc48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef _DAT_1004bc50
#define _DAT_1004bc50 (*(char * *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef _DAT_1004bc58
#define _DAT_1004bc58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef str_10048a77
#define str_10048a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d41U)))
#undef str_10048a87
#define str_10048a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
recovered_10042290(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;

  uVar6 = 0;
  if (param_1 == 0) {
LAB_100422f8:
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_10048a72;
    iVar1 = recovered_10036fb0((char *)param_1,&DAT_10048a72);
    if (iVar1 == 0) {
      pcVar2 = str_10048a77;
    }
    else {
      pcVar2 = (char *)recovered_1003f9f0(&DAT_10048a7d,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                          in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
      if (pcVar2 == (char *)0x0) {
        pcVar4 = &DAT_10048a82;
      }
      else {
        pcVar4 = &DAT_10048a82;
        if (*pcVar2 != '\0') {
          pcVar4 = pcVar2;
        }
      }
      iVar1 = recovered_10036fb0((char *)param_1,pcVar4);
      if (iVar1 != 0) goto LAB_100422f8;
      pcVar2 = (char *)recovered_1003f9f0(&DAT_10048a7d,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                          in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
      if (pcVar2 == (char *)0x0) {
        pcVar4 = &DAT_10048a82;
      }
      else {
        pcVar4 = &DAT_10048a82;
        if (*pcVar2 != '\0') {
          pcVar4 = pcVar2;
        }
      }
      puVar5 = &DAT_1004bc60;
      pf_varargs_10039b90__8_(&DAT_1004bc60,0x40,&DAT_100489c0,(ulonglong)pcVar4);
      pcVar2 = &DAT_1004bca0;
      pf_varargs_10039b90__8_(&DAT_1004bca0,0x80,str_10048a87,((uintptr_t)pf_module_state + 0x4f2aU));
      uVar6 = 1000;
    }
    puVar3 = &DAT_1004bc30;
    _DAT_1004bc38 = &DAT_100489fc;
    _DAT_1004bc58 = &DAT_100489ea;
    _DAT_1004bc30 = puVar5;
    _DAT_1004bc40 = uVar6;
    _DAT_1004bc44 = uVar6;
    _DAT_1004bc48 = puVar5;
    _DAT_1004bc50 = pcVar2;
  }
  return puVar3;
}

#undef DAT_100489c0
#undef DAT_100489ea
#undef DAT_100489fc
#undef DAT_10048a72
#undef DAT_10048a7d
#undef DAT_10048a82
#undef DAT_1004bc30
#undef DAT_1004bc38
#undef DAT_1004bc40
#undef DAT_1004bc44
#undef DAT_1004bc48
#undef DAT_1004bc50
#undef DAT_1004bc58
#undef DAT_1004bc60
#undef DAT_1004bca0
#undef _DAT_1004bc30
#undef _DAT_1004bc38
#undef _DAT_1004bc40
#undef _DAT_1004bc44
#undef _DAT_1004bc48
#undef _DAT_1004bc50
#undef _DAT_1004bc58
#undef str_10048a77
#undef str_10048a87

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489ea
#define DAT_100489ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb4U)))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef DAT_10048a72
#define DAT_10048a72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3cU)))
#undef DAT_10048a7d
#define DAT_10048a7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10048a82
#define DAT_10048a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1004bc30
#define DAT_1004bc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef DAT_1004bc38
#define DAT_1004bc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef DAT_1004bc40
#define DAT_1004bc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef DAT_1004bc48
#define DAT_1004bc48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef DAT_1004bc50
#define DAT_1004bc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef DAT_1004bc58
#define DAT_1004bc58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef DAT_1004bc60
#define DAT_1004bc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f2aU)))
#undef DAT_1004bca0
#define DAT_1004bca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6aU)))
#undef _DAT_1004bc30
#define _DAT_1004bc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef _DAT_1004bc38
#define _DAT_1004bc38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef _DAT_1004bc40
#define _DAT_1004bc40 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef _DAT_1004bc48
#define _DAT_1004bc48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef _DAT_1004bc50
#define _DAT_1004bc50 (*(char * *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef _DAT_1004bc58
#define _DAT_1004bc58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef str_10048a77
#define str_10048a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d41U)))
#undef str_10048a87
#define str_10048a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100423c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100423c0(int param_1,long *param_2,long param_3,ulong param_4,undefined8 *param_5,
                        undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                        undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                        undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  char *vararg0;
  undefined8 *puVar4;
  ulong uVar5;

  if (param_5 == (undefined8 *)0x0 || (param_3 == 0 || param_2 == (long *)0x0)) {
    return 0x16;
  }
  puVar4 = param_5;
  if (param_1 == 0) {
    _DAT_1004bc30 = &DAT_10048a72;
    _DAT_1004bc40 = 0;
    _DAT_1004bc48 = &DAT_10048a72;
    _DAT_1004bc50 = str_10048a77;
  }
  else {
    pcVar1 = (char *)recovered_1003f9f0(&DAT_10048a7d,param_5,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                        in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if (pcVar1 == (char *)0x0) {
      vararg0 = &DAT_10048a82;
    }
    else {
      vararg0 = &DAT_10048a82;
      if (*pcVar1 != '\0') {
        vararg0 = pcVar1;
      }
    }
    uVar5 = 0;
    pf_varargs_10039b90__8_(&DAT_1004bc60,0x40,&DAT_100489c0,(ulonglong)vararg0);
    pf_varargs_10039b90__8_(&DAT_1004bca0,0x80,str_10048a87,((uintptr_t)pf_module_state + 0x4f2aU));
    _DAT_1004bc30 = &DAT_1004bc60;
    _DAT_1004bc38 = &DAT_100489fc;
    _DAT_1004bc40 = 0x3e8000003e8;
    _DAT_1004bc48 = &DAT_1004bc60;
    _DAT_1004bc50 = &DAT_1004bca0;
    _DAT_1004bc58 = &DAT_100489ea;
    if (param_1 != 1000) {
      plVar3 = (long *)0x0;
      goto LAB_10042534;
    }
  }
  _DAT_1004bc58 = &DAT_100489ea;
  _DAT_1004bc38 = &DAT_100489fc;
  uVar2 = recovered_10042550((undefined8 *)&DAT_1004bc30,param_2,param_3,param_4,puVar4);
  uVar5 = uVar2 & 0xffffffff;
  plVar3 = (long *)0x0;
  if ((int)uVar2 == 0) {
    plVar3 = param_2;
  }
LAB_10042534:
  *param_5 = plVar3;
  return uVar5;
}

#undef DAT_100489c0
#undef DAT_100489ea
#undef DAT_100489fc
#undef DAT_10048a72
#undef DAT_10048a7d
#undef DAT_10048a82
#undef DAT_1004bc30
#undef DAT_1004bc38
#undef DAT_1004bc40
#undef DAT_1004bc48
#undef DAT_1004bc50
#undef DAT_1004bc58
#undef DAT_1004bc60
#undef DAT_1004bca0
#undef _DAT_1004bc30
#undef _DAT_1004bc38
#undef _DAT_1004bc40
#undef _DAT_1004bc48
#undef _DAT_1004bc50
#undef _DAT_1004bc58
#undef str_10048a77
#undef str_10048a87

#define local_50 (*(long *)(frame + 16))
#define local_48 (*(ulong *)(frame + 24))
#define local_40 (*(char * *)(frame + 32))
#define local_38 (*(long * *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042550
 */

ulong recovered_10042550(undefined8 *param_1,long *param_2,long param_3,ulong param_4,
                        undefined8 *in_R8)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;

  recovered_10036210(param_2,0,0x30);
  param_2[2] = param_1[2];
  pcVar1 = (char *)*param_1;
  local_38 = param_2;
  uVar2 = recovered_10036f80(pcVar1);
  uVar2 = uVar2 + 1;
  if (uVar2 <= param_4) {
    recovered_10035510((void *)param_3,pcVar1,uVar2);
    *local_38 = param_3;
    local_40 = (char *)param_1[1];
    uVar3 = recovered_10036f80(local_40);
    uVar3 = uVar3 + 1;
    uVar4 = (param_4 - uVar2) - uVar3;
    if (uVar3 <= param_4 - uVar2) {
      pvVar6 = (void *)(param_3 + uVar2);
      recovered_10035510(pvVar6,local_40,uVar3);
      local_38[1] = (long)pvVar6;
      pcVar1 = (char *)param_1[3];
      uVar2 = recovered_10036f80(pcVar1);
      uVar2 = uVar2 + 1;
      uVar5 = uVar4 - uVar2;
      if (uVar2 <= uVar4) {
        pvVar6 = (void *)((long)pvVar6 + uVar3);
        recovered_10035510(pvVar6,pcVar1,uVar2);
        local_38[3] = (long)pvVar6;
        pcVar1 = (char *)param_1[4];
        uVar3 = recovered_10036f80(pcVar1);
        uVar3 = uVar3 + 1;
        local_48 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          return 0x22;
        }
        pvVar6 = (void *)((long)pvVar6 + uVar2);
        recovered_10035510(pvVar6,pcVar1,uVar3);
        local_38[4] = (long)pvVar6;
        local_50 = (long)pvVar6 + uVar3;
        uVar2 = recovered_10046ce0((undefined8 *)param_1[5],local_38 + 5,&local_50,&local_48,in_R8);
        return uVar2 & 0xffffffff;
      }
    }
  }
  return 0x22;
}

#undef local_50
#undef local_48
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100426a0
 */

ulong recovered_100426a0(long param_1,long *param_2,long param_3,ulong param_4,undefined8 *param_5,
                        undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                        undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 *in_R8;
  uint128 auVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = -(uint)((int)param_3 == 0);
  uVar7 = -(uint)((int)((ulong)param_3 >> 0x20) == 0);
  PF_PART8(auVar5, 0) = CONCAT44(-(uint)(param_2 == (long *)0x0),-(uint)(param_1 == 0));
  PF_PART4(auVar5, 8) = uVar6 & uVar7;
  PF_PART4(auVar5, 12) = -(uint)(param_5 == (undefined8 *)0x0);
  iVar4 = movmskps((int)param_2,auVar5);
  uVar1 = 0x16;
  if (iVar4 == 0) {
    in_R8 = param_5;
    puVar2 = (undefined8 *)
             recovered_10042290(param_1,param_5,PF_PART8(auVar5, 0),CONCAT44(uVar7,uVar6),in_XMM3_Qa,
                                in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
      plVar3 = (long *)0x0;
    }
    else {
      uVar1 = recovered_10042550(puVar2,param_2,param_3,param_4,in_R8);
      plVar3 = (long *)0x0;
      if ((int)uVar1 == 0) {
        plVar3 = param_2;
      }
    }
    *param_5 = plVar3;
  }
  return uVar1;
}


#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489ea
#define DAT_100489ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb4U)))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef DAT_10048a72
#define DAT_10048a72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3cU)))
#undef DAT_10048a7d
#define DAT_10048a7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10048a82
#define DAT_10048a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1004bc30
#define DAT_1004bc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef DAT_1004bc38
#define DAT_1004bc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef DAT_1004bc40
#define DAT_1004bc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef DAT_1004bc44
#define DAT_1004bc44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0eU)))
#undef DAT_1004bc48
#define DAT_1004bc48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef DAT_1004bc50
#define DAT_1004bc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef DAT_1004bc58
#define DAT_1004bc58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef DAT_1004bc60
#define DAT_1004bc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f2aU)))
#undef DAT_1004bca0
#define DAT_1004bca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6aU)))
#undef DAT_1004bd20
#define DAT_1004bd20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef DAT_1004bd28
#define DAT_1004bd28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff2U)))
#undef DAT_1004bd30
#define DAT_1004bd30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ffaU)))
#undef DAT_1004bd38
#define DAT_1004bd38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5002U)))
#undef DAT_1004bd40
#define DAT_1004bd40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x500aU)))
#undef DAT_1004bd48
#define DAT_1004bd48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5012U)))
#undef _DAT_1004bc30
#define _DAT_1004bc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef _DAT_1004bc38
#define _DAT_1004bc38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef _DAT_1004bc40
#define _DAT_1004bc40 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef _DAT_1004bc44
#define _DAT_1004bc44 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0eU)))
#undef _DAT_1004bc48
#define _DAT_1004bc48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef _DAT_1004bc50
#define _DAT_1004bc50 (*(char * *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef _DAT_1004bc58
#define _DAT_1004bc58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef _DAT_1004bd20
#define _DAT_1004bd20 (*(char * *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef _DAT_1004bd28
#define _DAT_1004bd28 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ff2U)))
#undef _DAT_1004bd30
#define _DAT_1004bd30 (*(int *)(((uintptr_t)pf_module_state + 0x4ffaU)))
#undef _DAT_1004bd38
#define _DAT_1004bd38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5002U)))
#undef _DAT_1004bd40
#define _DAT_1004bd40 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x500aU)))
#undef _DAT_1004bd48
#define _DAT_1004bd48 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5012U)))
#undef str_10048a77
#define str_10048a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d41U)))
#undef str_10048a87
#define str_10048a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d51U)))
#undef str_10048a90
#define str_10048a90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5aU)))
#undef str_10048a96
#define str_10048a96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
recovered_10042730(int param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined *puVar2;
  char *vararg0;
  undefined *puVar3;

  if (param_1 == 0) {
    pcVar1 = str_10048a77;
    puVar3 = &DAT_10048a72;
    _DAT_1004bc40 = 0;
    _DAT_1004bd20 = str_10048a90;
  }
  else {
    pcVar1 = (char *)recovered_1003f9f0(&DAT_10048a7d,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                        in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
    if (pcVar1 == (char *)0x0) {
      vararg0 = &DAT_10048a82;
    }
    else {
      vararg0 = &DAT_10048a82;
      if (*pcVar1 != '\0') {
        vararg0 = pcVar1;
      }
    }
    puVar3 = &DAT_1004bc60;
    pf_varargs_10039b90__8_(&DAT_1004bc60,0x40,&DAT_100489c0,(ulonglong)vararg0);
    pcVar1 = &DAT_1004bca0;
    pf_varargs_10039b90__8_(&DAT_1004bca0,0x80,str_10048a87,((uintptr_t)pf_module_state + 0x4f2aU));
    _DAT_1004bc40 = 1000;
    _DAT_1004bd20 = str_10048a96;
  }
  puVar2 = (undefined *)0x0;
  if (param_1 == 1000) {
    puVar2 = &DAT_1004bd20;
  }
  _DAT_1004bc30 = puVar3;
  _DAT_1004bc38 = &DAT_100489fc;
  _DAT_1004bc44 = _DAT_1004bc40;
  _DAT_1004bc48 = puVar3;
  _DAT_1004bc50 = pcVar1;
  _DAT_1004bc58 = &DAT_100489ea;
  _DAT_1004bd40 = puVar3;
  _DAT_1004bd48 = 0;
  _DAT_1004bd28 = &DAT_100489fc;
  _DAT_1004bd30 = param_1;
  _DAT_1004bd38 = &DAT_1004bd40;
  if (param_1 == 0) {
    puVar2 = &DAT_1004bd20;
  }
  return puVar2;
}

#undef DAT_100489c0
#undef DAT_100489ea
#undef DAT_100489fc
#undef DAT_10048a72
#undef DAT_10048a7d
#undef DAT_10048a82
#undef DAT_1004bc30
#undef DAT_1004bc38
#undef DAT_1004bc40
#undef DAT_1004bc44
#undef DAT_1004bc48
#undef DAT_1004bc50
#undef DAT_1004bc58
#undef DAT_1004bc60
#undef DAT_1004bca0
#undef DAT_1004bd20
#undef DAT_1004bd28
#undef DAT_1004bd30
#undef DAT_1004bd38
#undef DAT_1004bd40
#undef DAT_1004bd48
#undef _DAT_1004bc30
#undef _DAT_1004bc38
#undef _DAT_1004bc40
#undef _DAT_1004bc44
#undef _DAT_1004bc48
#undef _DAT_1004bc50
#undef _DAT_1004bc58
#undef _DAT_1004bd20
#undef _DAT_1004bd28
#undef _DAT_1004bd30
#undef _DAT_1004bd38
#undef _DAT_1004bd40
#undef _DAT_1004bd48
#undef str_10048a77
#undef str_10048a87
#undef str_10048a90
#undef str_10048a96

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_100489ea
#define DAT_100489ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cb4U)))
#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
#undef DAT_10048a72
#define DAT_10048a72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3cU)))
#undef DAT_10048a7d
#define DAT_10048a7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d47U)))
#undef DAT_10048a82
#define DAT_10048a82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4cU)))
#undef DAT_1004bc30
#define DAT_1004bc30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef DAT_1004bc38
#define DAT_1004bc38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef DAT_1004bc40
#define DAT_1004bc40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef DAT_1004bc44
#define DAT_1004bc44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0eU)))
#undef DAT_1004bc48
#define DAT_1004bc48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef DAT_1004bc50
#define DAT_1004bc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef DAT_1004bc58
#define DAT_1004bc58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef DAT_1004bc60
#define DAT_1004bc60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f2aU)))
#undef DAT_1004bca0
#define DAT_1004bca0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6aU)))
#undef DAT_1004bd20
#define DAT_1004bd20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef DAT_1004bd28
#define DAT_1004bd28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff2U)))
#undef DAT_1004bd30
#define DAT_1004bd30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ffaU)))
#undef DAT_1004bd38
#define DAT_1004bd38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5002U)))
#undef DAT_1004bd40
#define DAT_1004bd40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x500aU)))
#undef DAT_1004bd48
#define DAT_1004bd48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5012U)))
#undef _DAT_1004bc30
#define _DAT_1004bc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efaU)))
#undef _DAT_1004bc38
#define _DAT_1004bc38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f02U)))
#undef _DAT_1004bc40
#define _DAT_1004bc40 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0aU)))
#undef _DAT_1004bc44
#define _DAT_1004bc44 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0eU)))
#undef _DAT_1004bc48
#define _DAT_1004bc48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f12U)))
#undef _DAT_1004bc50
#define _DAT_1004bc50 (*(char * *)(((uintptr_t)pf_module_state + 0x4f1aU)))
#undef _DAT_1004bc58
#define _DAT_1004bc58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f22U)))
#undef _DAT_1004bd20
#define _DAT_1004bd20 (*(char * *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef _DAT_1004bd28
#define _DAT_1004bd28 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ff2U)))
#undef _DAT_1004bd30
#define _DAT_1004bd30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ffaU)))
#undef _DAT_1004bd38
#define _DAT_1004bd38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5002U)))
#undef _DAT_1004bd40
#define _DAT_1004bd40 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x500aU)))
#undef _DAT_1004bd48
#define _DAT_1004bd48 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5012U)))
#undef str_10048a77
#define str_10048a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d41U)))
#undef str_10048a87
#define str_10048a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d51U)))
#undef str_10048a90
#define str_10048a90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5aU)))
#undef str_10048a96
#define str_10048a96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042860
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
recovered_10042860(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  char *vararg0;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;

  uVar5 = 0;
  if (param_1 == 0) {
LAB_1004289f:
    puVar3 = (undefined *)0x0;
  }
  else {
    pcVar4 = str_10048a90;
    iVar1 = recovered_10036fb0((char *)param_1,str_10048a90);
    if (iVar1 == 0) {
      pcVar2 = str_10048a77;
      puVar6 = &DAT_10048a72;
    }
    else {
      pcVar4 = str_10048a96;
      iVar1 = recovered_10036fb0((char *)param_1,str_10048a96);
      if (iVar1 != 0) goto LAB_1004289f;
      pcVar2 = (char *)recovered_1003f9f0(&DAT_10048a7d,in_R8,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,
                                          in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
      if (pcVar2 == (char *)0x0) {
        vararg0 = &DAT_10048a82;
      }
      else {
        vararg0 = &DAT_10048a82;
        if (*pcVar2 != '\0') {
          vararg0 = pcVar2;
        }
      }
      puVar6 = &DAT_1004bc60;
      pf_varargs_10039b90__8_(&DAT_1004bc60,0x40,&DAT_100489c0,(ulonglong)vararg0);
      pcVar2 = &DAT_1004bca0;
      pf_varargs_10039b90__8_(&DAT_1004bca0,0x80,str_10048a87,((uintptr_t)pf_module_state + 0x4f2aU));
      uVar5 = 1000;
    }
    _DAT_1004bc38 = &DAT_100489fc;
    _DAT_1004bc58 = &DAT_100489ea;
    _DAT_1004bd48 = 0;
    puVar3 = &DAT_1004bd20;
    _DAT_1004bd28 = &DAT_100489fc;
    _DAT_1004bd38 = &DAT_1004bd40;
    _DAT_1004bc30 = puVar6;
    _DAT_1004bc40 = uVar5;
    _DAT_1004bc44 = uVar5;
    _DAT_1004bc48 = puVar6;
    _DAT_1004bc50 = pcVar2;
    _DAT_1004bd20 = pcVar4;
    _DAT_1004bd30 = uVar5;
    _DAT_1004bd40 = puVar6;
  }
  return puVar3;
}

#undef DAT_100489c0
#undef DAT_100489ea
#undef DAT_100489fc
#undef DAT_10048a72
#undef DAT_10048a7d
#undef DAT_10048a82
#undef DAT_1004bc30
#undef DAT_1004bc38
#undef DAT_1004bc40
#undef DAT_1004bc44
#undef DAT_1004bc48
#undef DAT_1004bc50
#undef DAT_1004bc58
#undef DAT_1004bc60
#undef DAT_1004bca0
#undef DAT_1004bd20
#undef DAT_1004bd28
#undef DAT_1004bd30
#undef DAT_1004bd38
#undef DAT_1004bd40
#undef DAT_1004bd48
#undef _DAT_1004bc30
#undef _DAT_1004bc38
#undef _DAT_1004bc40
#undef _DAT_1004bc44
#undef _DAT_1004bc48
#undef _DAT_1004bc50
#undef _DAT_1004bc58
#undef _DAT_1004bd20
#undef _DAT_1004bd28
#undef _DAT_1004bd30
#undef _DAT_1004bd38
#undef _DAT_1004bd40
#undef _DAT_1004bd48
#undef str_10048a77
#undef str_10048a87
#undef str_10048a90
#undef str_10048a96

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bd50
#define DAT_1004bd50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100429b0
 */

undefined8
recovered_100429b0(undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_10039b90__8_(&DAT_1004bd50,0x60,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1d66U));
  DAT_1004a954 = 0x4e;
  return 0;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef DAT_1004bd50

#undef DAT_100489c0
#define DAT_100489c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8aU)))
#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bd50
#define DAT_1004bd50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100429f0
 */

undefined8
recovered_100429f0(undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_10039b90__8_(&DAT_1004bd50,0x60,&DAT_100489c0,((uintptr_t)pf_module_state + 0x1d96U));
  DAT_1004a954 = 0x4e;
  return 0;
}

#undef DAT_100489c0
#undef DAT_1004a954
#undef DAT_1004bd50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042a30
 */

undefined8 recovered_10042a30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_1004bd50
#define DAT_1004bd50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042a40
 */

undefined1 * recovered_10042a40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)0x0;
  if (DAT_1004bd50 != '\0') {
    puVar1 = &DAT_1004bd50;
  }
  return puVar1;
}

#undef DAT_1004bd50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042a60
 */

ulong recovered_10042a60(char *text,ulong max_length)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (max_length == 0 || text == (char *)0x0) {
    return 0;
  }
  uVar1 = 0;
  do {
    if (text[uVar1] == '\0') {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (max_length != uVar1);
  return max_length;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042aa0
 */

long recovered_10042aa0(long param_1,long param_2,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  ulong count;

  count = 0;
  if (param_2 != 0 && param_1 != 0) {
    do {
      if (*(char *)(param_1 + count) == '\0') goto LAB_10042ad2;
      count = count + 1;
    } while (param_2 != count);
    count = param_2;
  }
LAB_10042ad2:
  destination = recovered_10035420(count + 1);
  if (destination != (void *)0x0) {
    recovered_10035510(destination,(void *)param_1,count);
    *(undefined1 *)((long)destination + count) = 0;
  }
  return (long)destination;
}


#undef DAT_100489fc
#define DAT_100489fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042b00
 */

int recovered_10042b00(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;

  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_100489fc;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = &DAT_100489fc;
  }
  bVar2 = *param_1;
  bVar4 = bVar2 != 0;
  bVar1 = *param_2;
  bVar5 = bVar1 != 0;
  if (bVar4 || bVar5) {
    do {
      bVar3 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar3 = bVar2;
      }
      bVar2 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar2 = bVar1;
      }
      if (bVar3 != bVar2) {
        return (uint)bVar3 - (uint)bVar2;
      }
      bVar2 = param_1[bVar4];
      param_1 = param_1 + bVar4;
      bVar1 = param_2[bVar5];
      param_2 = param_2 + bVar5;
      bVar4 = bVar2 != 0;
      bVar5 = bVar1 != 0;
    } while (bVar4 || bVar5);
  }
  return 0;
}

#undef DAT_100489fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042bc0
 */

int recovered_10042bc0(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;

  if (param_3 != 0) {
    lVar2 = 0;
    do {
      uVar3 = 0;
      if (param_1 != 0) {
        bVar1 = *(byte *)(param_1 + lVar2);
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        uVar3 = (uint)bVar5;
      }
      if (param_2 == 0) {
        uVar4 = 0;
LAB_10042c3b:
        return uVar3 - uVar4;
      }
      bVar1 = *(byte *)(param_2 + lVar2);
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      uVar4 = (uint)bVar5;
      if (((bVar5 == 0) || (uVar3 == 0)) || (uVar3 != uVar4)) goto LAB_10042c3b;
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042c40
 */

int recovered_10042c40(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;

  if (count != 0) {
    uVar3 = 0;
    do {
      uVar2 = 0;
      if (left != (char *)0x0) {
        uVar2 = (uint)(byte)left[uVar3];
      }
      if (right == (char *)0x0) {
        uVar4 = 0;
LAB_10042c85:
        return uVar2 - uVar4;
      }
      bVar1 = right[uVar3];
      uVar4 = (uint)bVar1;
      if (((bVar1 == 0) || (uVar2 == 0)) || (uVar2 != bVar1)) goto LAB_10042c85;
      uVar3 = uVar3 + 1;
    } while (count != uVar3);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042c90
 */

void recovered_10042c90(undefined8 *param_1,undefined8 *param_2,ulong in_RDX,undefined8 in_RCX,
                       undefined8 *in_R8,undefined1 *in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10035950(param_2,param_1,in_RDX);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042cb0
 */

void recovered_10042cb0(ulong *in_RDI,ulong *in_RSI,ulong in_RDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10036b00(in_RDI,in_RSI,in_RDX);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042cc0
 */

undefined1 * recovered_10042cc0(long param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *text;

  if (param_1 == 0) {
    if (param_3 == (long *)0x0) {
      return (undefined1 *)0x0;
    }
    param_1 = *param_3;
  }
  pcVar1 = (char *)0x0;
  if (((param_3 != (long *)0x0) && (param_2 != 0)) && ((char *)param_1 != (char *)0x0)) {
    uVar2 = recovered_10037510((char *)param_1,(char *)param_2);
    text = (char *)(param_1 + uVar2);
    if (*(char *)(param_1 + uVar2) == '\0') {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar3 = recovered_10037570(text,(char *)param_2);
      pcVar1 = text;
      if (pcVar3 == (char *)0x0) {
        uVar2 = recovered_10036f80(text);
        text = text + uVar2;
      }
      else {
        *pcVar3 = '\0';
        text = pcVar3 + 1;
      }
    }
    *param_3 = (long)text;
  }
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042d50
 */

void * recovered_10042d50(void *memory,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (count == 0) {
    return (void *)0x0;
  }
  do {
    if (*(char *)memory == (char)value) {
      return memory;
    }
    memory = (void *)((long)memory + 1);
    count = count - 1;
  } while (count != 0);
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042d80
 */

char * recovered_10042d80(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;

  if (text == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *text;
    if ((char)value == cVar1) {
      pcVar2 = text;
    }
    text = text + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}


#undef DAT_10049140
#define DAT_10049140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x240aU)))
#undef str_10048d14
#define str_10048d14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fdeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042db0
 */

char * recovered_10042db0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 1U < 0x14) {
    return &DAT_10049140 + *(int *)(&DAT_10049140 + (ulong)(param_1 - 1U) * 4);
  }
  return str_10048d14;
}

#undef DAT_10049140
#undef str_10048d14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042de0
 */

ulong recovered_10042de0(char *text,char *reject)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  ulong uVar3;

  if ((reject == (char *)0x0 || text == (char *)0x0) || (cVar1 = *text, cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      pcVar2 = recovered_100374d0(reject,(int)cVar1);
      if (pcVar2 != (char *)0x0) {
        return uVar3;
      }
      cVar1 = text[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (cVar1 != '\0');
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042e40
 */

char * recovered_10042e40(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar2 = 0;
  if (count != 0) {
    while (source[uVar2] != '\0') {
      destination[uVar2] = source[uVar2];
      uVar2 = uVar2 + 1;
      if (count == uVar2) {
        return destination;
      }
    }
  }
  uVar4 = count - uVar2;
  if (count < uVar2 || uVar4 == 0) {
    return destination;
  }
  uVar3 = uVar2;
  if (7 < uVar4) {
    if (uVar4 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        pcVar1 = destination + uVar3 + uVar2;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        pcVar1 = destination + uVar3 + uVar2 + 0x10;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        uVar3 = uVar3 + 0x20;
      } while (uVar5 != uVar3);
      if (uVar4 == uVar5) {
        return destination;
      }
      if ((uVar4 & 0x18) == 0) {
        uVar3 = uVar2 + uVar5;
        goto LAB_10042ef0;
      }
    }
    uVar6 = uVar4 & 0xfffffffffffffff8;
    uVar3 = uVar2 + uVar6;
    do {
      pcVar1 = destination + uVar5 + uVar2;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      uVar5 = uVar5 + 8;
    } while (uVar6 != uVar5);
    if (uVar4 == uVar6) {
      return destination;
    }
  }
LAB_10042ef0:
  do {
    destination[uVar3] = '\0';
    uVar3 = uVar3 + 1;
  } while (count != uVar3);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042f00
 */

char * recovered_10042f00(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10036f80(destination);
  recovered_10037030(destination + uVar1,source);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042f30
 */

char * recovered_10042f30(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = recovered_10036f80(destination);
  if (count == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (source[uVar2] == '\0') goto LAB_10042f7d;
      destination[uVar2 + uVar1] = source[uVar2];
      uVar2 = uVar2 + 1;
    } while (count != uVar2);
    uVar2 = count;
  }
LAB_10042f7d:
  destination[uVar2 + uVar1] = '\0';
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042fa0
 */

ulong recovered_10042fa0(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong count_00;

  if (source == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10036f80(source);
  }
  if (count != 0 && destination != (char *)0x0) {
    count_00 = count - 1;
    if (uVar1 < count - 1) {
      count_00 = uVar1;
    }
    if (count_00 != 0) {
      recovered_10035510(destination,source,count_00);
    }
    destination[count_00] = '\0';
  }
  return uVar1;
}


#undef DAT_1004bdb0
#define DAT_1004bdb0 (*(char * *)(((uintptr_t)pf_module_state + 0x507aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043010
 */

char * recovered_10043010(char *text,char *delimiters)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text_00;
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  if (text == (char *)0x0) {
    text = DAT_1004bdb0;
  }
  if (delimiters == (char *)0x0 || text == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    uVar1 = recovered_10037510(text,delimiters);
    text_00 = text + uVar1;
    if (text[uVar1] == '\0') {
      pcVar3 = (char *)0x0;
      DAT_1004bdb0 = text_00;
    }
    else {
      pcVar2 = recovered_10037570(text_00,delimiters);
      pcVar3 = text_00;
      if (pcVar2 == (char *)0x0) {
        uVar1 = recovered_10036f80(text_00);
        DAT_1004bdb0 = text_00 + uVar1;
      }
      else {
        *pcVar2 = '\0';
        DAT_1004bdb0 = pcVar2 + 1;
      }
    }
  }
  return pcVar3;
}

#undef DAT_1004bdb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100430a0
 */

void * recovered_100430a0(ulong count,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  void *destination;
  ulong count_00;

  if ((size == 0) ||
     (PF_PART8(auVar1, 8) = 0, PF_PART8(auVar1, 0) = size, PF_PART8(auVar2, 8) = 0, PF_PART8(auVar2, 0) = count,
     SUB168(auVar1 * auVar2,8) == 0)) {
    count_00 = size * count;
    destination = recovered_10035420(count_00 + (count_00 == 0));
    if (destination != (void *)0x0) {
      recovered_10036210(destination,0,count_00);
      return destination;
    }
  }
  return (void *)0x0;
}


#undef DAT_1004a840
#define DAT_1004a840 (*(int *)(((uintptr_t)pf_module_state + 0x3b0aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100430f0
 */

void recovered_100430f0(uint seed)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a840 = seed + (seed == 0);
  return;
}

#undef DAT_1004a840

#undef DAT_1004a840
#define DAT_1004a840 (*(uint *)(((uintptr_t)pf_module_state + 0x3b0aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043110
 */

int recovered_10043110(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004a840 = DAT_1004a840 * 0x41c64e6d + 0x3039;
  return DAT_1004a840 >> 0x10 & 0x7fff;
}

#undef DAT_1004a840

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043140
 */

long recovered_10043140(long value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = -value;
  if (-value < 0) {
    lVar1 = value;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043150
 */

longlong recovered_10043150(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = -value;
  if (-value < 0) {
    lVar1 = value;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043160
 */

ulong recovered_10043160(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  return (long)param_1 % (long)param_2 << 0x20 | (long)param_1 / (long)param_2 & 0xffffffffU;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043180
 */

ulong recovered_10043180(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 | param_2) >> 0x20 == 0) {
    return (param_1 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  return (long)param_1 / (long)param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431b0
 */

ulong recovered_100431b0(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 | param_2) >> 0x20 == 0) {
    return (param_1 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  return (long)param_1 / (long)param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431e0
 */

longlong recovered_100431e0(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10038840(text,endptr,base);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431f0
 */

ulonglong recovered_100431f0(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10038970(text,endptr,base);
  return uVar1;
}


#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint *)(((uintptr_t)pf_module_state + 0x5082U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043200
 */

undefined8 recovered_10043200(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004bdb8 = DAT_1004bdb8 & (~param_1 | 0xffffff60);
  return 0;
}

#undef DAT_1004bdb8

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5082U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043220
 */

undefined8 recovered_10043220(ushort *param_1,ushort param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_1 = param_2 & (ushort)DAT_1004bdb8 & 0x9f;
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bdb8

#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint *)(((uintptr_t)pf_module_state + 0x5082U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043250
 */

undefined8 recovered_10043250(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004bdb8 = DAT_1004bdb8 | param_1 & 0x9f;
  return 0;
}

#undef DAT_1004bdb8

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint *)(((uintptr_t)pf_module_state + 0x5082U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043270
 */

undefined8 recovered_10043270(ushort *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  DAT_1004bdb8 = param_2 & (*param_1 ^ DAT_1004bdb8) & 0x9f ^ DAT_1004bdb8;
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bdb8

#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint *)(((uintptr_t)pf_module_state + 0x5082U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100432b0
 */

uint recovered_100432b0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 & DAT_1004bdb8 & 0x9f;
}

#undef DAT_1004bdb8

#undef DAT_1004bdbc
#define DAT_1004bdbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5086U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100432d0
 */

undefined4 recovered_100432d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return DAT_1004bdbc;
}

#undef DAT_1004bdbc

#undef DAT_1004bdbc
#define DAT_1004bdbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5086U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100432e0
 */

undefined8 recovered_100432e0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1004bdbc = param_1;
  return 0;
}

#undef DAT_1004bdbc

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5082U)))
#undef DAT_1004bdbc
#define DAT_1004bdbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5086U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100432f0
 */

undefined8 recovered_100432f0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_1 = DAT_1004bdb8;
  param_1[1] = DAT_1004bdbc;
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bdb8
#undef DAT_1004bdbc

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5082U)))
#undef DAT_1004bdbc
#define DAT_1004bdbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5086U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043330
 */

undefined8 recovered_10043330(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  *param_1 = DAT_1004bdb8;
  param_1[1] = DAT_1004bdbc;
  DAT_1004bdb8 = 0;
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bdb8
#undef DAT_1004bdbc

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5082U)))
#undef DAT_1004bdbc
#define DAT_1004bdbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5086U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043370
 */

undefined8 recovered_10043370(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  DAT_1004bdb8 = *param_1;
  DAT_1004bdbc = param_1[1];
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bdb8
#undef DAT_1004bdbc

#undef DAT_1004a954
#define DAT_1004a954 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c1eU)))
#undef DAT_1004bdb8
#define DAT_1004bdb8 (*(uint *)(((uintptr_t)pf_module_state + 0x5082U)))
#undef DAT_1004bdbc
#define DAT_1004bdbc (*(uint *)(((uintptr_t)pf_module_state + 0x5086U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100433b0
 */

undefined8 recovered_100433b0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (uint *)0x0) {
    DAT_1004a954 = 0x16;
    return 0xffffffff;
  }
  DAT_1004bdbc = param_1[1];
  DAT_1004bdb8 = DAT_1004bdb8 | *param_1;
  return 0;
}

#undef DAT_1004a954
#undef DAT_1004bdb8
#undef DAT_1004bdbc

/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100433f0(void *context) { __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10043420(void *context,int value) { __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043450
 */

bool recovered_10043450(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043480
 */

bool recovered_10043480(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434a0
 */

byte recovered_100434a0(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434e0
 */

bool recovered_100434e0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043510
 */

bool recovered_10043510(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) == 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043530
 */

bool recovered_10043530(long in_stack_00000008,uint in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~in_stack_00000010 & 0x7fff) == 0 && in_stack_00000008 == -0x8000000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043560
 */

bool recovered_10043560(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xfffffffffffff) != 0 && (~param_1 & 0x7ff0000000000000) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043590
 */

bool recovered_10043590(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffff) != 0 && (~param_1 & 0x7f800000) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100435c0
 */

bool recovered_100435c0(longdouble in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return NAN(in_stack_00000008);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100435d0
 */

bool recovered_100435d0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7ff0000000000000) != 0x7ff0000000000000 && (param_1 & 0x7ff0000000000000) != 0
  ;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043600
 */

bool recovered_10043600(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7f800000) != 0x7f800000 && (param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043620
 */

byte recovered_10043620(long in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((in_stack_00000010 & 0x7fff) - 1 & 0xffff) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f) |
         ((ulong)(in_stack_00000010 & 0x7fff) - 1) + (ulong)(in_stack_00000008 != 0) <
         (ulong)(in_stack_00000008 - 1U < 0x7fffffffffffffff);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043670
 */

uint recovered_10043670(undefined1 in_XMM0 [16])

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_EAX = 0;
  uint uVar1;

  uVar1 = movmskpd(in_EAX,in_XMM0);
  return uVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043680
 */

uint recovered_10043680(undefined1 in_XMM0 [16])

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_EAX = 0;
  uint uVar1;

  uVar1 = movmskps(in_EAX,in_XMM0);
  return uVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043690
 */

bool recovered_10043690(longdouble in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  bool bVar2;

  bVar2 = true;
  lVar1 = (longdouble)0;
  if (lVar1 <= in_stack_00000008) {
    if ((in_stack_00000008 != lVar1) || (NAN(in_stack_00000008) || NAN(lVar1))) {
      bVar2 = false;
    }
    else {
      bVar2 = (longdouble)1 / in_stack_00000008 < lVar1;
    }
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100436d0
 */

byte recovered_100436d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;

  uVar2 = (ulong)param_1 & 0x7ff0000000000000;
  bVar1 = 1;
  if ((uVar2 != 0x7ff0000000000000 || ((ulong)param_1 & 0xfffffffffffff) == 0) &&
     (bVar1 = 2, ABS(param_1) != INFINITY)) {
    bVar1 = 3;
    if ((param_1 != 0.0) || (NAN(param_1))) {
      return (uVar2 == 0x7ff0000000000000 || uVar2 == 0) | 4;
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043750
 */

byte recovered_10043750(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = (uint)param_1 & 0x7f800000;
  bVar1 = 1;
  if ((uVar2 != 0x7f800000 || ((uint)param_1 & 0x7fffff) == 0) &&
     (bVar1 = 2, ABS(param_1) != INFINITY)) {
    bVar1 = 3;
    if ((param_1 != 0.0) || (NAN(param_1))) {
      return (uVar2 == 0x7f800000 || uVar2 == 0) | 4;
    }
  }
  return bVar1;
}


/* Native extended-float classification; Pooka's Free Software License. */
int recovered_100437c0(long double value){if(__builtin_isnan(value))return 1;if(__builtin_isinf(value))return 2;if(value==0)return 3;return 4;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043830
 */

int recovered_10043830(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)((ulong)ABS(value) < 0x7ff0000000000000);
}


#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043860
 */

double recovered_10043860(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0.0) {
    dVar1 = recovered_100379d0(value + DAT_10048ed0);
    return dVar1;
  }
  dVar1 = recovered_100379a0(value + DAT_10048e68);
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043890
 */

float recovered_10043890(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0((double)value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0((double)value + DAT_10048ed0);
  }
  return (float)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100438d0
 */

double recovered_100438d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)in_stack_00000008;
  if (0.0 <= dVar1) {
    dVar1 = recovered_100379a0(dVar1 + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(dVar1 + DAT_10048ed0);
  }
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0
#undef in_stack_00000008

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043920
 */

double recovered_10043920(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0.0) {
    dVar1 = recovered_100379d0(value + DAT_10048ed0);
    return dVar1;
  }
  dVar1 = recovered_100379a0(value + DAT_10048e68);
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043950
 */

float recovered_10043950(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0((double)value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0((double)value + DAT_10048ed0);
  }
  return (float)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043990
 */

double recovered_10043990(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)in_stack_00000008;
  if (0.0 <= dVar1) {
    dVar1 = recovered_100379a0(dVar1 + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(dVar1 + DAT_10048ed0);
  }
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0
#undef in_stack_00000008

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100439e0
 */

double recovered_100439e0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0.0) {
    dVar1 = recovered_100379d0(value + DAT_10048ed0);
    return dVar1;
  }
  dVar1 = recovered_100379a0(value + DAT_10048e68);
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043a10
 */

float recovered_10043a10(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0((double)value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0((double)value + DAT_10048ed0);
  }
  return (float)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043a50
 */

double recovered_10043a50(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)in_stack_00000008;
  if (0.0 <= dVar1) {
    dVar1 = recovered_100379a0(dVar1 + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(dVar1 + DAT_10048ed0);
  }
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0
#undef in_stack_00000008

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043aa0
 */

long recovered_10043aa0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0(value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(value + DAT_10048ed0);
  }
  return (long)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043ae0
 */

long recovered_10043ae0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0((double)value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0((double)value + DAT_10048ed0);
  }
  return (long)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b20
 */

long recovered_10043b20(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)in_stack_00000008;
  if (0.0 <= dVar1) {
    dVar1 = recovered_100379a0(dVar1 + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(dVar1 + DAT_10048ed0);
  }
  return (long)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0
#undef in_stack_00000008

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b70
 */

longlong recovered_10043b70(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0(value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(value + DAT_10048ed0);
  }
  return (long)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043bb0
 */

longlong recovered_10043bb0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100379a0((double)value + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0((double)value + DAT_10048ed0);
  }
  return (long)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043bf0
 */

longlong recovered_10043bf0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)in_stack_00000008;
  if (0.0 <= dVar1) {
    dVar1 = recovered_100379a0(dVar1 + DAT_10048e68);
  }
  else {
    dVar1 = recovered_100379d0(dVar1 + DAT_10048ed0);
  }
  return (long)dVar1;
}

#undef DAT_10048e68
#undef DAT_10048ed0
#undef in_stack_00000008

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
#undef DAT_10048e98
#define DAT_10048e98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_10048f00
#define DAT_10048f00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21caU)))
#undef DAT_10048f10
#define DAT_10048f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21daU)))
#undef DAT_10048f20
#define DAT_10048f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21eaU)))
#undef DAT_10048f30
#define DAT_10048f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21faU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(double *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef _DAT_10048e98
#define _DAT_10048e98 (*(double *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048f00
#define _DAT_10048f00 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21caU)))
#undef _DAT_10048f10
#define _DAT_10048f10 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21daU)))
#undef _DAT_10048f20
#define _DAT_10048f20 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21eaU)))
#undef _DAT_10048f30
#define _DAT_10048f30 (*(uint128 *)(((uintptr_t)pf_module_state + 0x21faU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10043c40(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  uint128 auVar3;
  double dVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;
  uint128 auVar14;

  if (value <= DAT_10048e70) {
    if (DAT_10048e90 <= value) {
      dVar1 = (double)(_DAT_10048ef0 ^ (ulong)value) * value;
      (*(double *)((uint8_t *)&(auVar9)+0)) = dVar1 * dVar1 * value;
      (*(double *)((uint8_t *)&(auVar9)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar9)+0));
      auVar14 = divpd(auVar9,_DAT_10048f00);
      (*(double *)((uint8_t *)&(auVar6)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar9)+0)) * dVar1;
      (*(double *)((uint8_t *)&(auVar6)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar6)+0));
      auVar9 = divpd(auVar6,_DAT_10048f10);
      (*(double *)((uint8_t *)&(auVar12)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar6)+0)) * dVar1;
      (*(double *)((uint8_t *)&(auVar12)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar12)+0));
      auVar6 = divpd(auVar12,_DAT_10048f20);
      (*(double *)((uint8_t *)&(auVar3)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar12)+0)) * dVar1;
      (*(double *)((uint8_t *)&(auVar3)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar3)+0));
      auVar3 = divpd(auVar3,_DAT_10048f30);
      return (*(double *)((uint8_t *)&(auVar3)+8)) +
             (*(double *)((uint8_t *)&(auVar6)+8)) +
             (*(double *)((uint8_t *)&(auVar9)+8)) +
             (*(double *)((uint8_t *)&(auVar14)+8)) + (dVar1 * value) / _DAT_10048e98 + value + (*(double *)((uint8_t *)&(auVar14)+0)) + (*(double *)((uint8_t *)&(auVar9)+0))
             + (*(double *)((uint8_t *)&(auVar6)+0)) + (*(double *)((uint8_t *)&(auVar3)+0));
    }
    dVar4 = DAT_10048e70 / value;
    dVar1 = (double)(_DAT_10048ef0 ^ (ulong)dVar4) * dVar4;
    (*(double *)((uint8_t *)&(auVar13)+0)) = dVar1 * dVar4 * dVar1;
    (*(double *)((uint8_t *)&(auVar13)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar13)+0));
    auVar12 = divpd(auVar13,_DAT_10048f00);
    (*(double *)((uint8_t *)&(auVar14)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar13)+0)) * dVar1;
    (*(double *)((uint8_t *)&(auVar14)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar14)+0));
    auVar3 = divpd(auVar14,_DAT_10048f10);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar14)+0)) * dVar1;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar6 = divpd(auVar7,_DAT_10048f20);
    (*(double *)((uint8_t *)&(auVar10)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar1;
    (*(double *)((uint8_t *)&(auVar10)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar10)+0));
    auVar9 = divpd(auVar10,_DAT_10048f30);
    dVar4 = (*(double *)((uint8_t *)&(auVar9)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar12)+8)) + (dVar4 * dVar1) / _DAT_10048e98 + dVar4 + (*(double *)((uint8_t *)&(auVar12)+0)) + (*(double *)((uint8_t *)&(auVar3)+0)) +
            (*(double *)((uint8_t *)&(auVar6)+0)) + (*(double *)((uint8_t *)&(auVar9)+0));
    dVar1 = DAT_10048fe0;
  }
  else {
    dVar4 = DAT_10048e70 / value;
    dVar1 = (double)(_DAT_10048ef0 ^ (ulong)dVar4) * dVar4;
    (*(double *)((uint8_t *)&(auVar11)+0)) = dVar1 * dVar4 * dVar1;
    (*(double *)((uint8_t *)&(auVar11)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar11)+0));
    auVar12 = divpd(auVar11,_DAT_10048f00);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar11)+0)) * dVar1;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar3 = divpd(auVar2,_DAT_10048f10);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0)) * dVar1;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar6 = divpd(auVar5,_DAT_10048f20);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar1 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar1;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar9 = divpd(auVar8,_DAT_10048f30);
    dVar4 = (*(double *)((uint8_t *)&(auVar9)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar12)+8)) + (dVar4 * dVar1) / _DAT_10048e98 + dVar4 + (*(double *)((uint8_t *)&(auVar12)+0)) + (*(double *)((uint8_t *)&(auVar3)+0)) +
            (*(double *)((uint8_t *)&(auVar6)+0)) + (*(double *)((uint8_t *)&(auVar9)+0));
    dVar1 = DAT_10048fe8;
  }
  return dVar1 - dVar4;
}

#undef DAT_10048e70
#undef DAT_10048e90
#undef DAT_10048e98
#undef DAT_10048ef0
#undef DAT_10048f00
#undef DAT_10048f10
#undef DAT_10048f20
#undef DAT_10048f30
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef _DAT_10048e98
#undef _DAT_10048ef0
#undef _DAT_10048f00
#undef _DAT_10048f10
#undef _DAT_10048f20
#undef _DAT_10048f30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043ec0
 */

float recovered_10043ec0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10043c40((double)value);
  return (float)dVar1;
}


#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043ee0
 */

double recovered_10043ee0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10043c40((double)in_stack_00000008);
  return dVar1;
}

#undef in_stack_00000008

#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043f10
 */

double recovered_10043f10(double y,double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 < x) {
    dVar1 = recovered_10043c40(y / x);
    return dVar1;
  }
  if ((0.0 <= y) && (x < 0.0)) {
    dVar1 = recovered_10043c40(y / x);
    return dVar1 + DAT_10048ea8;
  }
  if ((y < 0.0) && (x < 0.0)) {
    dVar1 = recovered_10043c40(y / x);
    return dVar1 + DAT_10048eb8;
  }
  if (((0.0 < y) && (x == 0.0)) && (!NAN(x))) {
    return DAT_10048fe8;
  }
  return (double)(DAT_10048fe0 & -(ulong)(x == 0.0) & -(ulong)(y < 0.0));
}

#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fe0
#undef DAT_10048fe8

#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(double *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043fb0
 */

float recovered_10043fb0(float y,float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)y;
  dVar2 = (double)x;
  if (x <= 0.0) {
    if ((y < 0.0) || (0.0 <= x)) {
      if ((0.0 <= y) || (0.0 <= x)) {
        if (((y <= 0.0) || (x != 0.0)) || (NAN(x))) {
          dVar1 = 0.0;
          if ((x == 0.0) && (!NAN(x))) {
            dVar1 = DAT_10048fe0;
          }
          if (0.0 <= y) {
            dVar1 = 0.0;
          }
        }
        else {
          dVar1 = DAT_10048fe8;
        }
      }
      else {
        dVar1 = recovered_10043c40(dVar1 / dVar2);
        dVar1 = dVar1 + DAT_10048eb8;
      }
    }
    else {
      dVar1 = recovered_10043c40(dVar1 / dVar2);
      dVar1 = dVar1 + DAT_10048ea8;
    }
  }
  else {
    dVar1 = recovered_10043c40(dVar1 / dVar2);
  }
  return (float)dVar1;
}

#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fe0
#undef DAT_10048fe8

#undef DAT_10048ea8
#define DAT_10048ea8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044060
 */

void recovered_10044060(longdouble in_stack_00000008,longdouble in_stack_00000018)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)in_stack_00000008;
  dVar2 = (double)in_stack_00000018;
  if (dVar2 <= 0.0) {
    if ((dVar1 < 0.0) || (0.0 <= dVar2)) {
      if ((dVar1 < 0.0) && (dVar2 < 0.0)) {
        recovered_10043c40(dVar1 / dVar2);
      }
    }
    else {
      recovered_10043c40(dVar1 / dVar2);
    }
  }
  else {
    recovered_10043c40(dVar1 / dVar2);
  }
  return;
}

#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fe0
#undef DAT_10048fe8

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fc0
#define DAT_10048fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef DAT_10048ff0
#define DAT_10048ff0 (*(double *)(((uintptr_t)pf_module_state + 0x22baU)))
#undef _DAT_10048fc0
#define _DAT_10048fc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x228aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044120(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((double)(_DAT_10048fc0 & (ulong)value) <= DAT_10048e70) {
    dVar1 = recovered_10037a30(DAT_10048e70 - value * value);
    if (0.0 < dVar1) {
      dVar1 = recovered_10043c40(value / dVar1);
      return dVar1;
    }
    if ((value < 0.0) || (0.0 <= dVar1)) {
      if ((0.0 <= value) || (0.0 <= dVar1)) {
        if (((value <= 0.0) || (dVar1 != 0.0)) || (NAN(dVar1))) {
          dVar1 = (double)(DAT_10048fe0 & -(ulong)(dVar1 == 0.0) & -(ulong)(value < 0.0));
        }
        else {
          dVar1 = DAT_10048fe8;
        }
      }
      else {
        dVar1 = recovered_10043c40(value / dVar1);
        dVar1 = dVar1 + DAT_10048eb8;
      }
    }
    else {
      dVar1 = recovered_10043c40(value / dVar1);
      dVar1 = dVar1 + DAT_10048ea8;
    }
  }
  else {
    dVar1 = DAT_10048ff0;
  }
  return dVar1;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fc0
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef DAT_10048ff0
#undef _DAT_10048fc0

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fc0
#define DAT_10048fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef DAT_10048ff0
#define DAT_10048ff0 (*(double *)(((uintptr_t)pf_module_state + 0x22baU)))
#undef UNK_10048fc4
#define UNK_10048fc4 (*(uint *)(((uintptr_t)pf_module_state + 0x228eU)))
#undef _DAT_10048fc0
#define _DAT_10048fc0 (*(uint *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef uRam0000000010048fc4
#define uRam0000000010048fc4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x228eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10044220(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)value;
  if (pf_bits_double(CONCAT44(uRam0000000010048fc4 & (uint)((ulong)dVar2 >> 0x20),
                       _DAT_10048fc0 & SUB84(dVar2,0))) <= DAT_10048e70) {
    dVar1 = recovered_10037a30(DAT_10048e70 - dVar2 * dVar2);
    if (dVar1 <= 0.0) {
      if ((value < 0.0) || (0.0 <= dVar1)) {
        if ((0.0 <= value) || (0.0 <= dVar1)) {
          if (((value <= 0.0) || (dVar1 != 0.0)) || (NAN(dVar1))) {
            if (value < 0.0) {
              dVar2 = (double)(DAT_10048fe0 & -(ulong)(dVar1 == 0.0));
            }
            else {
              dVar2 = 0.0;
            }
          }
          else {
            dVar2 = DAT_10048fe8;
          }
        }
        else {
          dVar2 = recovered_10043c40(dVar2 / dVar1);
          dVar2 = dVar2 + DAT_10048eb8;
        }
      }
      else {
        dVar2 = recovered_10043c40(dVar2 / dVar1);
        dVar2 = dVar2 + DAT_10048ea8;
      }
    }
    else {
      dVar2 = recovered_10043c40(dVar2 / dVar1);
    }
  }
  else {
    dVar2 = DAT_10048ff0;
  }
  return (float)dVar2;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fc0
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef DAT_10048ff0
#undef UNK_10048fc4
#undef _DAT_10048fc0
#undef uRam0000000010048fc4

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fc0
#define DAT_10048fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef DAT_10048ff0
#define DAT_10048ff0 (*(double *)(((uintptr_t)pf_module_state + 0x22baU)))
#undef _DAT_10048fc0
#define _DAT_10048fc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044340(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)in_stack_00000008;
  if ((double)(_DAT_10048fc0 & (ulong)dVar2) <= DAT_10048e70) {
    dVar1 = recovered_10037a30(DAT_10048e70 - dVar2 * dVar2);
    if (dVar1 <= 0.0) {
      if ((dVar2 < 0.0) || (0.0 <= dVar1)) {
        if ((0.0 <= dVar2) || (0.0 <= dVar1)) {
          if (((dVar2 <= 0.0) || (dVar1 != 0.0)) || (NAN(dVar1))) {
            dVar2 = (double)(DAT_10048fe0 & -(ulong)(dVar1 == 0.0) & -(ulong)(dVar2 < 0.0));
          }
          else {
            dVar2 = DAT_10048fe8;
          }
        }
        else {
          dVar2 = recovered_10043c40(dVar2 / dVar1);
          dVar2 = dVar2 + DAT_10048eb8;
        }
      }
      else {
        dVar2 = recovered_10043c40(dVar2 / dVar1);
        dVar2 = dVar2 + DAT_10048ea8;
      }
    }
    else {
      dVar2 = recovered_10043c40(dVar2 / dVar1);
    }
  }
  else {
    dVar2 = DAT_10048ff0;
  }
  return dVar2;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fc0
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef DAT_10048ff0
#undef _DAT_10048fc0
#undef in_stack_00000008

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_10048fc0
#define DAT_10048fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef DAT_10048ff0
#define DAT_10048ff0 (*(double *)(((uintptr_t)pf_module_state + 0x22baU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048fc0
#define _DAT_10048fc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x228aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044450(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if ((double)(_DAT_10048fc0 & (ulong)value) <= DAT_10048e70) {
    dVar1 = (double)(_DAT_10048ef0 ^ (ulong)value);
    dVar2 = recovered_10037a30(DAT_10048e70 - value * value);
    if (dVar1 < value) {
      dVar1 = recovered_10043c40(dVar2 / value);
      return dVar1;
    }
    if ((0.0 <= value) || (dVar2 < 0.0)) {
      if ((0.0 <= value) || (0.0 <= dVar2)) {
        if (((value != 0.0) || (NAN(value))) || (dVar2 <= 0.0)) {
          dVar1 = (double)(DAT_10048fe0 & -(ulong)(dVar2 < 0.0) & -(ulong)(value == 0.0));
        }
        else {
          dVar1 = DAT_10048fe8;
        }
      }
      else {
        dVar1 = recovered_10043c40(dVar2 / value);
        dVar1 = dVar1 + DAT_10048eb8;
      }
    }
    else {
      dVar1 = recovered_10043c40(dVar2 / value);
      dVar1 = dVar1 + DAT_10048ea8;
    }
  }
  else {
    dVar1 = DAT_10048ff0;
  }
  return dVar1;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048ef0
#undef DAT_10048fc0
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef DAT_10048ff0
#undef UNK_10048ef8
#undef _DAT_10048ef0
#undef _DAT_10048fc0

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048fc0
#define DAT_10048fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef DAT_10048ff0
#define DAT_10048ff0 (*(double *)(((uintptr_t)pf_module_state + 0x22baU)))
#undef UNK_10048fc4
#define UNK_10048fc4 (*(uint *)(((uintptr_t)pf_module_state + 0x228eU)))
#undef _DAT_10048fc0
#define _DAT_10048fc0 (*(uint *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef uRam0000000010048fc4
#define uRam0000000010048fc4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x228eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10044550(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)value;
  if (pf_bits_double(CONCAT44(uRam0000000010048fc4 & (uint)((ulong)dVar2 >> 0x20),
                       _DAT_10048fc0 & SUB84(dVar2,0))) <= DAT_10048e70) {
    dVar1 = recovered_10037a30(DAT_10048e70 - dVar2 * dVar2);
    if (value <= 0.0) {
      if ((0.0 <= value) || (dVar1 < 0.0)) {
        if ((0.0 <= value) || (0.0 <= dVar1)) {
          if (((value != 0.0) || (NAN(value))) || (dVar1 <= 0.0)) {
            if ((value != 0.0) || (NAN(value))) {
              dVar2 = 0.0;
            }
            else {
              dVar2 = (double)(DAT_10048fe0 & -(ulong)(dVar1 < 0.0));
            }
          }
          else {
            dVar2 = DAT_10048fe8;
          }
        }
        else {
          dVar2 = recovered_10043c40(dVar1 / dVar2);
          dVar2 = dVar2 + DAT_10048eb8;
        }
      }
      else {
        dVar2 = recovered_10043c40(dVar1 / dVar2);
        dVar2 = dVar2 + DAT_10048ea8;
      }
    }
    else {
      dVar2 = recovered_10043c40(dVar1 / dVar2);
    }
  }
  else {
    dVar2 = DAT_10048ff0;
  }
  return (float)dVar2;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048fc0
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef DAT_10048ff0
#undef UNK_10048fc4
#undef _DAT_10048fc0
#undef uRam0000000010048fc4

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ea8
#define DAT_10048ea8 (*(double *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10048eb8
#define DAT_10048eb8 (*(double *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_10048fc0
#define DAT_10048fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#undef DAT_10048fe0
#define DAT_10048fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22aaU)))
#undef DAT_10048fe8
#define DAT_10048fe8 (*(double *)(((uintptr_t)pf_module_state + 0x22b2U)))
#undef DAT_10048ff0
#define DAT_10048ff0 (*(double *)(((uintptr_t)pf_module_state + 0x22baU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_10048fc0
#define _DAT_10048fc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x228aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044660(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)in_stack_00000008;
  if ((double)(_DAT_10048fc0 & (ulong)dVar3) <= DAT_10048e70) {
    dVar1 = (double)(_DAT_10048ef0 ^ (ulong)dVar3);
    dVar2 = recovered_10037a30(DAT_10048e70 - dVar3 * dVar3);
    if (dVar3 <= dVar1) {
      if ((0.0 <= dVar3) || (dVar2 < 0.0)) {
        if ((0.0 <= dVar3) || (0.0 <= dVar2)) {
          if (((dVar3 != 0.0) || (NAN(dVar3))) || (dVar2 <= 0.0)) {
            dVar3 = (double)(DAT_10048fe0 & -(ulong)(dVar2 < 0.0) & -(ulong)(dVar3 == 0.0));
          }
          else {
            dVar3 = DAT_10048fe8;
          }
        }
        else {
          dVar3 = recovered_10043c40(dVar2 / dVar3);
          dVar3 = dVar3 + DAT_10048eb8;
        }
      }
      else {
        dVar3 = recovered_10043c40(dVar2 / dVar3);
        dVar3 = dVar3 + DAT_10048ea8;
      }
    }
    else {
      dVar3 = recovered_10043c40(dVar2 / dVar3);
    }
  }
  else {
    dVar3 = DAT_10048ff0;
  }
  return dVar3;
}

#undef DAT_10048e70
#undef DAT_10048ea8
#undef DAT_10048eb8
#undef DAT_10048ef0
#undef DAT_10048fc0
#undef DAT_10048fe0
#undef DAT_10048fe8
#undef DAT_10048ff0
#undef UNK_10048ef8
#undef _DAT_10048ef0
#undef _DAT_10048fc0
#undef in_stack_00000008

#undef DAT_10048fd0
#define DAT_10048fd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044770
 */

double recovered_10044770(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10037e10(value);
  dVar2 = recovered_10037d60(value);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    dVar2 = dVar2 / dVar1;
  }
  else {
    dVar2 = *(double *)(&DAT_10048fd0 + (ulong)(0.0 <= dVar2) * 8);
  }
  return dVar2;
}

#undef DAT_10048fd0

#undef DAT_10048fd0
#define DAT_10048fd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100447d0
 */

float recovered_100447d0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10037e10((double)value);
  dVar2 = recovered_10037d60((double)value);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    dVar2 = dVar2 / dVar1;
  }
  else {
    dVar2 = *(double *)(&DAT_10048fd0 + (ulong)(0.0 <= dVar2) * 8);
  }
  return (float)dVar2;
}

#undef DAT_10048fd0

#undef DAT_10048fd0
#define DAT_10048fd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044830
 */

double recovered_10044830(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10037e10((double)in_stack_00000008);
  dVar2 = recovered_10037d60((double)in_stack_00000008);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    dVar2 = dVar2 / dVar1;
  }
  else {
    dVar2 = *(double *)(&DAT_10048fd0 + (ulong)(0.0 <= dVar2) * 8);
  }
  return dVar2;
}

#undef DAT_10048fd0
#undef in_stack_00000008

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e98
#define DAT_10048e98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef DAT_10048ed0
#define DAT_10048ed0 (*(double *)(((uintptr_t)pf_module_state + 0x219aU)))
#undef DAT_10048ee0
#define DAT_10048ee0 (*(double *)(((uintptr_t)pf_module_state + 0x21aaU)))
#undef DAT_10048ff8
#define DAT_10048ff8 (*(double *)(((uintptr_t)pf_module_state + 0x22c2U)))
#undef DAT_10049000
#define DAT_10049000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22caU)))
#undef DAT_10049008
#define DAT_10049008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22d2U)))
#undef DAT_10049010
#define DAT_10049010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22daU)))
#undef DAT_10049018
#define DAT_10049018 (*(double *)(((uintptr_t)pf_module_state + 0x22e2U)))
#undef DAT_10049020
#define DAT_10049020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22eaU)))
#undef DAT_10049028
#define DAT_10049028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22f2U)))
#undef DAT_10049030
#define DAT_10049030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22faU)))
#undef DAT_10049038
#define DAT_10049038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2302U)))
#undef DAT_10049040
#define DAT_10049040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x230aU)))
#undef DAT_10049048
#define DAT_10049048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2312U)))
#undef DAT_10049050
#define DAT_10049050 (*(double *)(((uintptr_t)pf_module_state + 0x231aU)))
#undef DAT_10049058
#define DAT_10049058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2322U)))
#undef DAT_10049060
#define DAT_10049060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x232aU)))
#undef DAT_10049068
#define DAT_10049068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2332U)))
#undef DAT_10049070
#define DAT_10049070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x233aU)))
#undef DAT_10049078
#define DAT_10049078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2342U)))
#undef DAT_10049080
#define DAT_10049080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x234aU)))
#undef DAT_10049088
#define DAT_10049088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2352U)))
#undef DAT_10049090
#define DAT_10049090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235aU)))
#undef DAT_10049098
#define DAT_10049098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2362U)))
#undef DAT_100490a0
#define DAT_100490a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x236aU)))
#undef DAT_100490a8
#define DAT_100490a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2372U)))
#undef DAT_100490b0
#define DAT_100490b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x237aU)))
#undef _DAT_10048e98
#define _DAT_10048e98 (*(double *)(((uintptr_t)pf_module_state + 0x2162U)))
#undef _DAT_10049000
#define _DAT_10049000 (*(double *)(((uintptr_t)pf_module_state + 0x22caU)))
#undef _DAT_10049008
#define _DAT_10049008 (*(double *)(((uintptr_t)pf_module_state + 0x22d2U)))
#undef _DAT_10049010
#define _DAT_10049010 (*(double *)(((uintptr_t)pf_module_state + 0x22daU)))
#undef _DAT_10049020
#define _DAT_10049020 (*(double *)(((uintptr_t)pf_module_state + 0x22eaU)))
#undef _DAT_10049028
#define _DAT_10049028 (*(double *)(((uintptr_t)pf_module_state + 0x22f2U)))
#undef _DAT_10049030
#define _DAT_10049030 (*(double *)(((uintptr_t)pf_module_state + 0x22faU)))
#undef _DAT_10049038
#define _DAT_10049038 (*(double *)(((uintptr_t)pf_module_state + 0x2302U)))
#undef _DAT_10049040
#define _DAT_10049040 (*(double *)(((uintptr_t)pf_module_state + 0x230aU)))
#undef _DAT_10049048
#define _DAT_10049048 (*(double *)(((uintptr_t)pf_module_state + 0x2312U)))
#undef _DAT_10049058
#define _DAT_10049058 (*(double *)(((uintptr_t)pf_module_state + 0x2322U)))
#undef _DAT_10049060
#define _DAT_10049060 (*(double *)(((uintptr_t)pf_module_state + 0x232aU)))
#undef _DAT_10049068
#define _DAT_10049068 (*(double *)(((uintptr_t)pf_module_state + 0x2332U)))
#undef _DAT_10049070
#define _DAT_10049070 (*(double *)(((uintptr_t)pf_module_state + 0x233aU)))
#undef _DAT_10049078
#define _DAT_10049078 (*(double *)(((uintptr_t)pf_module_state + 0x2342U)))
#undef _DAT_10049080
#define _DAT_10049080 (*(double *)(((uintptr_t)pf_module_state + 0x234aU)))
#undef _DAT_10049088
#define _DAT_10049088 (*(double *)(((uintptr_t)pf_module_state + 0x2352U)))
#undef _DAT_10049090
#define _DAT_10049090 (*(double *)(((uintptr_t)pf_module_state + 0x235aU)))
#undef _DAT_10049098
#define _DAT_10049098 (*(double *)(((uintptr_t)pf_module_state + 0x2362U)))
#undef _DAT_100490a0
#define _DAT_100490a0 (*(double *)(((uintptr_t)pf_module_state + 0x236aU)))
#undef _DAT_100490a8
#define _DAT_100490a8 (*(double *)(((uintptr_t)pf_module_state + 0x2372U)))
#undef _DAT_100490b0
#define _DAT_100490b0 (*(double *)(((uintptr_t)pf_module_state + 0x237aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100448a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100448a0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;

  uVar1 = 0;
  if (DAT_10048e68 < value) {
    uVar1 = 0;
    do {
      value = value * DAT_10048e68;
      uVar1 = uVar1 + 1;
    } while (DAT_10048e68 < value);
  }
  for (; value < DAT_10048ed0; value = value * DAT_10048e68) {
    uVar1 = uVar1 + 1;
  }
  dVar3 = DAT_10048e68 * value * value;
  dVar16 = (value / _DAT_10048e98) * dVar3;
  dVar4 = DAT_10048ff8 * value * dVar16;
  dVar17 = (value / _DAT_10049000) * dVar4;
  dVar5 = (value / _DAT_10049008) * dVar17;
  dVar18 = (value / _DAT_10049010) * dVar5;
  dVar6 = DAT_10049018 * value * dVar18;
  dVar19 = (value / _DAT_10049020) * dVar6;
  dVar7 = (value / DAT_10048ee0) * dVar19;
  dVar20 = (value / _DAT_10049028) * dVar7;
  dVar8 = (value / _DAT_10049030) * dVar20;
  dVar21 = (value / _DAT_10049038) * dVar8;
  dVar9 = (value / _DAT_10049040) * dVar21;
  dVar22 = (value / _DAT_10049048) * dVar9;
  dVar10 = DAT_10049050 * value * dVar22;
  dVar23 = (value / _DAT_10049058) * dVar10;
  dVar11 = (value / _DAT_10049060) * dVar23;
  dVar24 = (value / _DAT_10049068) * dVar11;
  dVar12 = (value / _DAT_10049070) * dVar24;
  dVar25 = (value / _DAT_10049078) * dVar12;
  dVar13 = (value / _DAT_10049080) * dVar25;
  dVar26 = (value / _DAT_10049088) * dVar13;
  dVar14 = (value / _DAT_10049090) * dVar26;
  dVar27 = (value / _DAT_10049098) * dVar14;
  dVar15 = (value / _DAT_100490a0) * dVar27;
  dVar28 = (value / _DAT_100490a8) * dVar15;
  dVar3 = (value / _DAT_100490b0) * dVar28 +
          DAT_10048e70 + value + dVar3 + dVar16 + dVar4 + dVar17 + dVar5 + dVar18 + dVar6 + dVar19 +
          dVar7 + dVar20 + dVar8 + dVar21 + dVar9 + dVar22 + dVar10 + dVar23 + dVar11 + dVar24 +
          dVar12 + dVar25 + dVar13 + dVar26 + dVar14 + dVar27 + dVar15 + dVar28;
  if (uVar1 != 0) {
    uVar2 = uVar1 & 7;
    if (7 < uVar1) {
      uVar1 = uVar1 & 0xfffffff8;
      do {
        dVar3 = dVar3 * dVar3 * dVar3 * dVar3;
        dVar3 = dVar3 * dVar3;
        dVar3 = dVar3 * dVar3;
        dVar3 = dVar3 * dVar3;
        dVar3 = dVar3 * dVar3;
        dVar3 = dVar3 * dVar3;
        dVar3 = dVar3 * dVar3;
        uVar1 = uVar1 - 8;
      } while (uVar1 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      dVar3 = dVar3 * dVar3;
    }
  }
  return dVar3;
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef DAT_10048e98
#undef DAT_10048ed0
#undef DAT_10048ee0
#undef DAT_10048ff8
#undef DAT_10049000
#undef DAT_10049008
#undef DAT_10049010
#undef DAT_10049018
#undef DAT_10049020
#undef DAT_10049028
#undef DAT_10049030
#undef DAT_10049038
#undef DAT_10049040
#undef DAT_10049048
#undef DAT_10049050
#undef DAT_10049058
#undef DAT_10049060
#undef DAT_10049068
#undef DAT_10049070
#undef DAT_10049078
#undef DAT_10049080
#undef DAT_10049088
#undef DAT_10049090
#undef DAT_10049098
#undef DAT_100490a0
#undef DAT_100490a8
#undef DAT_100490b0
#undef _DAT_10048e98
#undef _DAT_10049000
#undef _DAT_10049008
#undef _DAT_10049010
#undef _DAT_10049020
#undef _DAT_10049028
#undef _DAT_10049030
#undef _DAT_10049038
#undef _DAT_10049040
#undef _DAT_10049048
#undef _DAT_10049058
#undef _DAT_10049060
#undef _DAT_10049068
#undef _DAT_10049070
#undef _DAT_10049078
#undef _DAT_10049080
#undef _DAT_10049088
#undef _DAT_10049090
#undef _DAT_10049098
#undef _DAT_100490a0
#undef _DAT_100490a8
#undef _DAT_100490b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b80
 */

float recovered_10044b80(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)value);
  return (float)dVar1;
}


#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ba0
 */

double recovered_10044ba0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)in_stack_00000008);
  return dVar1;
}

#undef in_stack_00000008

#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044bd0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0(value * _DAT_10048ea0);
  return dVar1;
}

#undef DAT_10048ea0
#undef _DAT_10048ea0

#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10044bf0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)value * _DAT_10048ea0);
  return (float)dVar1;
}

#undef DAT_10048ea0
#undef _DAT_10048ea0

#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044c10(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)in_stack_00000008 * _DAT_10048ea0);
  return dVar1;
}

#undef DAT_10048ea0
#undef _DAT_10048ea0
#undef in_stack_00000008

#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044c40
 */

double recovered_10044c40(double in_XMM0_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0(in_XMM0_Qa);
  return dVar1 + DAT_10048e90;
}

#undef DAT_10048e90

#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044c60
 */

undefined8 recovered_10044c60(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)param_1);
  return CONCAT44((int)((ulong)(dVar1 + DAT_10048e90) >> 0x20),(float)(dVar1 + DAT_10048e90));
}

#undef DAT_10048e90

#undef DAT_10048e90
#define DAT_10048e90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044c80
 */

void recovered_10044c80(longdouble in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100448a0((double)in_stack_00000008);
  return;
}

#undef DAT_10048e90

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044cb0
 */

double recovered_10044cb0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0(value);
  return (dVar1 + DAT_10048e90 / dVar1) * DAT_10048e68;
}

#undef DAT_10048e68
#undef DAT_10048e90

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ce0
 */

float recovered_10044ce0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)value);
  return (float)((DAT_10048e90 / dVar1 + dVar1) * DAT_10048e68);
}

#undef DAT_10048e68
#undef DAT_10048e90

#undef DAT_10048e68
#define DAT_10048e68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e90
#define DAT_10048e90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x215aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044d10
 */

double recovered_10044d10(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)in_stack_00000008);
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048e90
#undef in_stack_00000008

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044d50
 */

double recovered_10044d50(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0(value);
  return (dVar1 + DAT_10048e70 / dVar1) * DAT_10048e68;
}

#undef DAT_10048e68
#undef DAT_10048e70

#undef DAT_10048e68
#define DAT_10048e68 (*(double *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044d80
 */

float recovered_10044d80(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)value);
  return (float)((DAT_10048e70 / dVar1 + dVar1) * DAT_10048e68);
}

#undef DAT_10048e68
#undef DAT_10048e70

#undef DAT_10048e68
#define DAT_10048e68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2132U)))
#undef DAT_10048e70
#define DAT_10048e70 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x213aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044db0
 */

double recovered_10044db0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)in_stack_00000008);
  return dVar1;
}

#undef DAT_10048e68
#undef DAT_10048e70
#undef in_stack_00000008

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044df0
 */

double recovered_10044df0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0(value + value);
  return (DAT_10048e90 + dVar1) / (dVar1 + DAT_10048e70);
}

#undef DAT_10048e70
#undef DAT_10048e90

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e90
#define DAT_10048e90 (*(double *)(((uintptr_t)pf_module_state + 0x215aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044e20
 */

float recovered_10044e20(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)value + (double)value);
  return (float)((DAT_10048e90 + dVar1) / (dVar1 + DAT_10048e70));
}

#undef DAT_10048e70
#undef DAT_10048e90

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048e90
#define DAT_10048e90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x215aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044e60
 */

double recovered_10044e60(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100448a0((double)in_stack_00000008 + (double)in_stack_00000008);
  return dVar1 + DAT_10048e70;
}

#undef DAT_10048e70
#undef DAT_10048e90
#undef in_stack_00000008

#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044eb0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0(value);
  return dVar1 / _DAT_10048ea0;
}

#undef DAT_10048ea0
#undef _DAT_10048ea0

#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10044ed0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0((double)value);
  return (float)(dVar1 / _DAT_10048ea0);
}

#undef DAT_10048ea0
#undef _DAT_10048ea0

#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044ef0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0((double)in_stack_00000008);
  return dVar1 / _DAT_10048ea0;
}

#undef DAT_10048ea0
#undef _DAT_10048ea0
#undef in_stack_00000008

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044f20
 */

double recovered_10044f20(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0(value + DAT_10048e70);
  return dVar1;
}

#undef DAT_10048e70

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044f40
 */

float recovered_10044f40(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0((double)value + DAT_10048e70);
  return (float)dVar1;
}

#undef DAT_10048e70

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044f60
 */

double recovered_10044f60(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0((double)in_stack_00000008 + DAT_10048e70);
  return dVar1;
}

#undef DAT_10048e70
#undef in_stack_00000008

#undef DAT_10048e78
#define DAT_10048e78 (*(double *)(((uintptr_t)pf_module_state + 0x2142U)))
#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10044f90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((value == 0.0) && (!NAN(value))) {
    return DAT_10048e78;
  }
  if ((ulong)ABS(value) < 0x7ff0000000000000) {
    dVar1 = recovered_10037eb0(value);
    dVar1 = recovered_10037be0(dVar1);
    dVar1 = recovered_100379a0(dVar1 / _DAT_10048ea0);
    return dVar1;
  }
  return value * value;
}

#undef DAT_10048e78
#undef DAT_10048ea0
#undef _DAT_10048ea0

#undef DAT_10048e78
#define DAT_10048e78 (*(double *)(((uintptr_t)pf_module_state + 0x2142U)))
#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10044ff0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((value == 0.0) && (!NAN(value))) {
    return (float)DAT_10048e78;
  }
  dVar1 = (double)value;
  if ((ulong)ABS(dVar1) < 0x7ff0000000000000) {
    dVar1 = recovered_10037eb0(dVar1);
    dVar1 = recovered_10037be0(dVar1);
    dVar1 = recovered_100379a0(dVar1 / _DAT_10048ea0);
    return (float)dVar1;
  }
  return (float)(dVar1 * dVar1);
}

#undef DAT_10048e78
#undef DAT_10048ea0
#undef _DAT_10048ea0

#undef DAT_10048e78
#define DAT_10048e78 (*(double *)(((uintptr_t)pf_module_state + 0x2142U)))
#undef DAT_10048ea0
#define DAT_10048ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216aU)))
#undef _DAT_10048ea0
#define _DAT_10048ea0 (*(double *)(((uintptr_t)pf_module_state + 0x216aU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10045060(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)in_stack_00000008;
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    if ((ulong)ABS(dVar1) < 0x7ff0000000000000) {
      dVar1 = recovered_10037eb0(dVar1);
      dVar1 = recovered_10037be0(dVar1);
      dVar1 = recovered_100379a0(dVar1 / _DAT_10048ea0);
    }
    else {
      dVar1 = dVar1 * dVar1;
    }
  }
  else {
    dVar1 = DAT_10048e78;
  }
  return dVar1;
}

#undef DAT_10048e78
#undef DAT_10048ea0
#undef _DAT_10048ea0
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100450e0
 */

double recovered_100450e0(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10038460(value);
  if (integer_part != (double *)0x0) {
    *integer_part = dVar1;
  }
  return value - dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045110
 */

float recovered_10045110(float value,float *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10038460((double)value);
  if (integer_part != (float *)0x0) {
    *integer_part = (float)dVar1;
  }
  return (float)((double)value - dVar1);
}


#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045150
 */

double recovered_10045150(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10038460((double)in_stack_00000008);
  if (integer_part != (double *)0x0) {
    *(longdouble *)integer_part = (longdouble)dVar1;
  }
  return dVar1;
}

#undef in_stack_00000008

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_100490b8
#define DAT_100490b8 (*(double *)(((uintptr_t)pf_module_state + 0x2382U)))
#undef DAT_100490c0
#define DAT_100490c0 (*(double *)(((uintptr_t)pf_module_state + 0x238aU)))
#undef DAT_100490c8
#define DAT_100490c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef DAT_100490d0
#define DAT_100490d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef DAT_100490d8
#define DAT_100490d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef DAT_100490e0
#define DAT_100490e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_100490c8
#define _DAT_100490c8 (*(double *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef _DAT_100490d0
#define _DAT_100490d0 (*(double *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef _DAT_100490d8
#define _DAT_100490d8 (*(double *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef _DAT_100490e0
#define _DAT_100490e0 (*(double *)(((uintptr_t)pf_module_state + 0x23aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100451a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100451a0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar3 = (double)((ulong)value ^ _DAT_10048ef0);
  dVar2 = dVar3;
  if (dVar3 <= value) {
    dVar2 = value;
  }
  dVar4 = DAT_10048e70 / (DAT_100490b8 * dVar2 + DAT_10048e70);
  dVar1 = (((DAT_100490c0 * dVar4 + _DAT_100490c8) * dVar4 + _DAT_100490d0) * dVar4 + _DAT_100490d8)
          * dVar4 + _DAT_100490e0;
  dVar2 = recovered_100448a0((double)((ulong)dVar2 ^ _DAT_10048ef0) * dVar2);
  dVar2 = DAT_10048e70 - dVar1 * dVar4 * dVar2;
  return (double)(-(ulong)(value < dVar3) & (_DAT_10048ef0 ^ (ulong)dVar2) |
                 ~-(ulong)(value < dVar3) & (ulong)dVar2);
}

#undef DAT_10048e70
#undef DAT_10048ef0
#undef DAT_100490b8
#undef DAT_100490c0
#undef DAT_100490c8
#undef DAT_100490d0
#undef DAT_100490d8
#undef DAT_100490e0
#undef UNK_10048ef8
#undef _DAT_10048ef0
#undef _DAT_100490c8
#undef _DAT_100490d0
#undef _DAT_100490d8
#undef _DAT_100490e0

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_100490b8
#define DAT_100490b8 (*(double *)(((uintptr_t)pf_module_state + 0x2382U)))
#undef DAT_100490c0
#define DAT_100490c0 (*(double *)(((uintptr_t)pf_module_state + 0x238aU)))
#undef DAT_100490c8
#define DAT_100490c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef DAT_100490d0
#define DAT_100490d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef DAT_100490d8
#define DAT_100490d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef DAT_100490e0
#define DAT_100490e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef UNK_10048ef4
#define UNK_10048ef4 (*(uint *)(((uintptr_t)pf_module_state + 0x21beU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef UNK_10048efc
#define UNK_10048efc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21c6U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_100490c8
#define _DAT_100490c8 (*(double *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef _DAT_100490d0
#define _DAT_100490d0 (*(double *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef _DAT_100490d8
#define _DAT_100490d8 (*(double *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef _DAT_100490e0
#define _DAT_100490e0 (*(double *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef uRam0000000010048ef4
#define uRam0000000010048ef4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10045290(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)value;
  if (value < 0.0) {
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam0000000010048ef4,
                             SUB84(dVar2,0) ^ _DAT_10048ef0));
  }
  dVar1 = recovered_100448a0(pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam0000000010048ef4,
                                              SUB84(dVar2,0) ^ _DAT_10048ef0)) * dVar2);
  dVar2 = DAT_10048e70 / (dVar2 * DAT_100490b8 + DAT_10048e70);
  dVar2 = DAT_10048e70 -
          ((((DAT_100490c0 * dVar2 + _DAT_100490c8) * dVar2 + _DAT_100490d0) * dVar2 + _DAT_100490d8
           ) * dVar2 + _DAT_100490e0) * dVar2 * dVar1;
  if (value < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010048ef4,_DAT_10048ef0));
  }
  return (float)dVar2;
}

#undef DAT_10048e70
#undef DAT_10048ef0
#undef DAT_100490b8
#undef DAT_100490c0
#undef DAT_100490c8
#undef DAT_100490d0
#undef DAT_100490d8
#undef DAT_100490e0
#undef UNK_10048ef4
#undef UNK_10048ef8
#undef UNK_10048efc
#undef _DAT_10048ef0
#undef _DAT_100490c8
#undef _DAT_100490d0
#undef _DAT_100490d8
#undef _DAT_100490e0
#undef uRam0000000010048ef4

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_100490b8
#define DAT_100490b8 (*(double *)(((uintptr_t)pf_module_state + 0x2382U)))
#undef DAT_100490c0
#define DAT_100490c0 (*(double *)(((uintptr_t)pf_module_state + 0x238aU)))
#undef DAT_100490c8
#define DAT_100490c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef DAT_100490d0
#define DAT_100490d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef DAT_100490d8
#define DAT_100490d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef DAT_100490e0
#define DAT_100490e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_100490c8
#define _DAT_100490c8 (*(double *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef _DAT_100490d0
#define _DAT_100490d0 (*(double *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef _DAT_100490d8
#define _DAT_100490d8 (*(double *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef _DAT_100490e0
#define _DAT_100490e0 (*(double *)(((uintptr_t)pf_module_state + 0x23aaU)))
#define in_stack_00000008 (*(longdouble *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10045350(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar1 = (double)in_stack_00000008;
  dVar4 = (double)((ulong)dVar1 ^ _DAT_10048ef0);
  dVar3 = dVar4;
  if (dVar4 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar5 = DAT_10048e70 / (DAT_100490b8 * dVar3 + DAT_10048e70);
  dVar2 = (((DAT_100490c0 * dVar5 + _DAT_100490c8) * dVar5 + _DAT_100490d0) * dVar5 + _DAT_100490d8)
          * dVar5 + _DAT_100490e0;
  dVar3 = recovered_100448a0((double)((ulong)dVar3 ^ _DAT_10048ef0) * dVar3);
  return (double)(~-(ulong)(dVar1 < dVar4) & (ulong)(DAT_10048e70 - dVar2 * dVar5 * dVar3));
}

#undef DAT_10048e70
#undef DAT_10048ef0
#undef DAT_100490b8
#undef DAT_100490c0
#undef DAT_100490c8
#undef DAT_100490d0
#undef DAT_100490d8
#undef DAT_100490e0
#undef UNK_10048ef8
#undef _DAT_10048ef0
#undef _DAT_100490c8
#undef _DAT_100490d0
#undef _DAT_100490d8
#undef _DAT_100490e0
#undef in_stack_00000008

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_100490b8
#define DAT_100490b8 (*(double *)(((uintptr_t)pf_module_state + 0x2382U)))
#undef DAT_100490c0
#define DAT_100490c0 (*(double *)(((uintptr_t)pf_module_state + 0x238aU)))
#undef DAT_100490c8
#define DAT_100490c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef DAT_100490d0
#define DAT_100490d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef DAT_100490d8
#define DAT_100490d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef DAT_100490e0
#define DAT_100490e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_100490c8
#define _DAT_100490c8 (*(double *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef _DAT_100490d0
#define _DAT_100490d0 (*(double *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef _DAT_100490d8
#define _DAT_100490d8 (*(double *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef _DAT_100490e0
#define _DAT_100490e0 (*(double *)(((uintptr_t)pf_module_state + 0x23aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10045450(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar3 = (double)((ulong)param_1 ^ _DAT_10048ef0);
  dVar2 = dVar3;
  if (dVar3 <= param_1) {
    dVar2 = param_1;
  }
  dVar4 = DAT_10048e70 / (DAT_100490b8 * dVar2 + DAT_10048e70);
  dVar1 = (((DAT_100490c0 * dVar4 + _DAT_100490c8) * dVar4 + _DAT_100490d0) * dVar4 + _DAT_100490d8)
          * dVar4 + _DAT_100490e0;
  dVar2 = recovered_100448a0((double)((ulong)dVar2 ^ _DAT_10048ef0) * dVar2);
  dVar2 = DAT_10048e70 - dVar1 * dVar4 * dVar2;
  return DAT_10048e70 -
         (double)(-(ulong)(param_1 < dVar3) & (_DAT_10048ef0 ^ (ulong)dVar2) |
                 ~-(ulong)(param_1 < dVar3) & (ulong)dVar2);
}

#undef DAT_10048e70
#undef DAT_10048ef0
#undef DAT_100490b8
#undef DAT_100490c0
#undef DAT_100490c8
#undef DAT_100490d0
#undef DAT_100490d8
#undef DAT_100490e0
#undef UNK_10048ef8
#undef _DAT_10048ef0
#undef _DAT_100490c8
#undef _DAT_100490d0
#undef _DAT_100490d8
#undef _DAT_100490e0

#undef DAT_10048e70
#define DAT_10048e70 (*(double *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_100490b8
#define DAT_100490b8 (*(double *)(((uintptr_t)pf_module_state + 0x2382U)))
#undef DAT_100490c0
#define DAT_100490c0 (*(double *)(((uintptr_t)pf_module_state + 0x238aU)))
#undef DAT_100490c8
#define DAT_100490c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef DAT_100490d0
#define DAT_100490d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef DAT_100490d8
#define DAT_100490d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef DAT_100490e0
#define DAT_100490e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef UNK_10048ef4
#define UNK_10048ef4 (*(uint *)(((uintptr_t)pf_module_state + 0x21beU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef UNK_10048efc
#define UNK_10048efc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21c6U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef _DAT_100490c8
#define _DAT_100490c8 (*(double *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef _DAT_100490d0
#define _DAT_100490d0 (*(double *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef _DAT_100490d8
#define _DAT_100490d8 (*(double *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef _DAT_100490e0
#define _DAT_100490e0 (*(double *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef uRam0000000010048ef4
#define uRam0000000010048ef4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10045540(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)param_1;
  if (param_1 < 0.0) {
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam0000000010048ef4,
                             SUB84(dVar2,0) ^ _DAT_10048ef0));
  }
  dVar1 = recovered_100448a0(pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam0000000010048ef4,
                                              SUB84(dVar2,0) ^ _DAT_10048ef0)) * dVar2);
  dVar2 = DAT_10048e70 / (dVar2 * DAT_100490b8 + DAT_10048e70);
  dVar2 = DAT_10048e70 -
          ((((DAT_100490c0 * dVar2 + _DAT_100490c8) * dVar2 + _DAT_100490d0) * dVar2 + _DAT_100490d8
           ) * dVar2 + _DAT_100490e0) * dVar2 * dVar1;
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010048ef4,_DAT_10048ef0));
  }
  return (float)(DAT_10048e70 - dVar2);
}

#undef DAT_10048e70
#undef DAT_10048ef0
#undef DAT_100490b8
#undef DAT_100490c0
#undef DAT_100490c8
#undef DAT_100490d0
#undef DAT_100490d8
#undef DAT_100490e0
#undef UNK_10048ef4
#undef UNK_10048ef8
#undef UNK_10048efc
#undef _DAT_10048ef0
#undef _DAT_100490c8
#undef _DAT_100490d0
#undef _DAT_100490d8
#undef _DAT_100490e0
#undef uRam0000000010048ef4

#undef DAT_10048e70
#define DAT_10048e70 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x213aU)))
#undef DAT_10048ef0
#define DAT_10048ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21baU)))
#undef DAT_100490b8
#define DAT_100490b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2382U)))
#undef DAT_100490c0
#define DAT_100490c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x238aU)))
#undef DAT_100490c8
#define DAT_100490c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2392U)))
#undef DAT_100490d0
#define DAT_100490d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239aU)))
#undef DAT_100490d8
#define DAT_100490d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23a2U)))
#undef DAT_100490e0
#define DAT_100490e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aaU)))
#undef UNK_10048ef8
#define UNK_10048ef8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c2U)))
#undef _DAT_10048ef0
#define _DAT_10048ef0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10045610(longdouble in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)in_stack_00000008;
  dVar2 = (double)((ulong)dVar1 ^ _DAT_10048ef0);
  if ((double)((ulong)dVar1 ^ _DAT_10048ef0) <= dVar1) {
    dVar2 = dVar1;
  }
  recovered_100448a0((double)((ulong)dVar2 ^ _DAT_10048ef0) * dVar2);
  return;
}

#undef DAT_10048e70
#undef DAT_10048ef0
#undef DAT_100490b8
#undef DAT_100490c0
#undef DAT_100490c8
#undef DAT_100490d0
#undef DAT_100490d8
#undef DAT_100490e0
#undef UNK_10048ef8
#undef _DAT_10048ef0

#undef DAT_100490e8
#define DAT_100490e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23b2U)))
#undef _DAT_100490e8
#define _DAT_100490e8 (*(double *)(((uintptr_t)pf_module_state + 0x23b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10045710(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0(value);
  return dVar1 / _DAT_100490e8;
}

#undef DAT_100490e8
#undef _DAT_100490e8

#undef DAT_100490e8
#define DAT_100490e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23b2U)))
#undef _DAT_100490e8
#define _DAT_100490e8 (*(double *)(((uintptr_t)pf_module_state + 0x23b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10045730(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10037be0((double)value);
  return (float)(dVar1 / _DAT_100490e8);
}

#undef DAT_100490e8
#undef _DAT_100490e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045750
 */

int recovered_10045750(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10038840(text,(char **)0x0,10);
  return (int)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045770
 */

long recovered_10045770(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10038840(text,(char **)0x0,10);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045790
 */

longlong recovered_10045790(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10038840(text,(char **)0x0,10);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100457b0
 */

void recovered_100457b0(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10038aa0((char *)in_RDI,(char **)in_RSI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100457d0
 */

void recovered_100457d0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10038aa0((char *)param_1,(char **)0x0);
  return;
}


#define local_198 (*(undefined1 (*)[256])(frame + 24))
#define local_98 (*(ulong *)(frame + 280))
#define local_90 (*(pf_compare * *)(frame + 288))
#define local_88 (*(ulong *)(frame + 296))
#define local_80 (*(long *)(frame + 304))
#define local_78 (*(ulong *)(frame + 312))
#define local_70 (*(ulong *)(frame + 320))
#define local_68 (*(ulong *)(frame + 328))
#define local_60 (*(ulong *)(frame + 336))
#define local_58 (*(long *)(frame + 344))
#define local_50 (*(void * *)(frame + 352))
#define local_48 (*(void * *)(frame + 360))
#define local_40 (*(void * *)(frame + 368))
#define local_38 (*(void * *)(frame + 376))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100457e0
 */

void recovered_100457e0(void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[464] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;

  if ((compare != (pf_compare *)0x0 && (size != 0 && base != (void *)0x0)) && (count != 0)) {
    local_68 = size & 0x7fffffffffffffe0;
    local_70 = size & 0x7ffffffffffffffc;
    local_78 = size - 1;
    lVar15 = (long)base + 0x10;
    local_58 = (long)base + 0x10;
    local_80 = -size;
    local_60 = 0;
    local_90 = compare;
    local_88 = count;
    local_40 = base;
    local_50 = base;
    do {
      local_50 = (void *)(size + (long)local_50);
      local_58 = local_58 + size;
      local_98 = local_60 + 1;
      uVar13 = local_98;
      if (local_98 < count) {
        local_38 = (void *)(local_60 * size + (long)local_40);
        lVar16 = local_58;
        pvVar17 = local_50;
        local_60 = local_98;
        do {
          local_48 = (void *)(local_98 * size + (long)local_40);
          iVar12 = (*local_90)(local_38,local_48);
          if (0 < iVar12) {
            if (size < 0x101) {
              recovered_10035510(local_198,local_38,size);
              recovered_10035510(local_38,local_48,size);
              recovered_10035510(local_48,local_198,size);
            }
            else {
              if ((long)size < 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                do {
                  puVar1 = (undefined8 *)(lVar15 + -0x10 + uVar13);
                  uVar5 = *puVar1;
                  uVar6 = puVar1[1];
                  uVar7 = *(undefined8 *)(lVar15 + uVar13);
                  uVar8 = ((undefined8 *)(lVar15 + uVar13))[1];
                  puVar1 = (undefined8 *)(lVar16 + -0x10 + uVar13);
                  uVar9 = puVar1[1];
                  uVar10 = *(undefined8 *)(lVar16 + uVar13);
                  uVar11 = ((undefined8 *)(lVar16 + uVar13))[1];
                  puVar2 = (undefined8 *)(lVar15 + -0x10 + uVar13);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar9;
                  *(undefined8 *)(lVar15 + uVar13) = uVar10;
                  ((undefined8 *)(lVar15 + uVar13))[1] = uVar11;
                  puVar1 = (undefined8 *)(lVar16 + -0x10 + uVar13);
                  *puVar1 = uVar5;
                  puVar1[1] = uVar6;
                  *(undefined8 *)(lVar16 + uVar13) = uVar7;
                  ((undefined8 *)(lVar16 + uVar13))[1] = uVar8;
                  uVar13 = uVar13 + 0x20;
                } while (local_68 != uVar13);
                if (local_68 == size) goto LAB_10045906;
                uVar13 = local_68;
                if ((size & 0x1c) != 0) {
                  do {
                    uVar4 = *(undefined4 *)((long)base + uVar13);
                    *(undefined4 *)((long)base + uVar13) = *(undefined4 *)((long)pvVar17 + uVar13);
                    *(undefined4 *)((long)pvVar17 + uVar13) = uVar4;
                    uVar13 = uVar13 + 4;
                  } while (local_70 != uVar13);
                  uVar13 = local_70;
                  if (local_70 == size) goto LAB_10045906;
                }
              }
              uVar14 = uVar13;
              if ((size & 1) != 0) {
                uVar3 = *(undefined1 *)((long)local_38 + uVar13);
                *(undefined1 *)((long)local_38 + uVar13) = *(undefined1 *)((long)local_48 + uVar13);
                *(undefined1 *)((long)local_48 + uVar13) = uVar3;
                uVar14 = uVar13 | 1;
              }
              if (uVar13 != local_78) {
                do {
                  uVar3 = *(undefined1 *)((long)base + uVar14);
                  *(undefined1 *)((long)base + uVar14) = *(undefined1 *)((long)pvVar17 + uVar14);
                  *(undefined1 *)((long)pvVar17 + uVar14) = uVar3;
                  uVar3 = *(undefined1 *)((long)base + uVar14 + 1);
                  *(undefined1 *)((long)base + uVar14 + 1) =
                       *(undefined1 *)((long)pvVar17 + uVar14 + 1);
                  *(undefined1 *)((long)pvVar17 + uVar14 + 1) = uVar3;
                  uVar14 = uVar14 + 2;
                } while (local_80 + uVar14 != 0);
              }
            }
          }
LAB_10045906:
          local_98 = local_98 + 1;
          lVar16 = lVar16 + size;
          pvVar17 = (void *)((long)pvVar17 + size);
          count = local_88;
          uVar13 = local_60;
        } while (local_98 < local_88);
      }
      local_60 = uVar13;
      lVar15 = lVar15 + size;
      base = (void *)((long)base + size);
    } while (local_60 != count);
  }
  return;
}

#undef local_198
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a80
 */

void * recovered_10045a80(void *key,void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;

  if ((compare == (pf_compare *)0x0 || size == 0) || (base == (void *)0x0 || key == (void *)0x0)) {
LAB_10045b07:
    pvVar3 = (void *)0x0;
  }
  else {
    uVar5 = 0;
    do {
      while( true ) {
        if (count < uVar5 || count - uVar5 == 0) goto LAB_10045b07;
        uVar4 = count - uVar5 >> 1;
        uVar1 = uVar4 + uVar5;
        pvVar3 = (void *)(uVar1 * size + (long)base);
        iVar2 = (*compare)(key,pvVar3);
        if (-1 < iVar2) break;
        count = uVar1;
        if (iVar2 == 0) {
          return pvVar3;
        }
      }
      uVar5 = uVar4 + 1 + uVar5;
    } while (iVar2 != 0);
  }
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b20
 */

int recovered_10045b20(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((uint)value < 0x21) && ((0x100003600U >> ((ulong)(uint)value & 0x3f) & 1) != 0)) {
    return 1;
  }
  return (int)(value == 0xb);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b50
 */

int recovered_10045b50(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b70
 */

int recovered_10045b70(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 6 || value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b90
 */

int recovered_10045b90(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((0x20 < (uint)value) || (uVar1 = 0, (0x100003600U >> ((ulong)(uint)value & 0x3f) & 1) == 0)) {
    uVar1 = (uint)(value != 0xb);
  }
  if ((value - 0x61U < 0x1a || value - 0x30U < 10) || value - 0x41U < 0x1a) {
    uVar1 = 0;
  }
  if (0x5d < value - 0x21U) {
    uVar1 = 0;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045bf0
 */

int recovered_10045bf0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value == 0x7f || (uint)value < 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c10
 */

int recovered_10045c10(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x21U < 0x5e);
}


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
#define local_20 (*(undefined1 (*)[16])(frame + 16))
#define local_10 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10045c30(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10036210(local_20,0,0x18);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x16b < _DAT_00006808 && ((code *)(ulong)_DAT_00006968 != (code *)0x0)) &&
      (iVar1 = (*(code *)(ulong)_DAT_00006968)(local_20), iVar1 != 0)))) {
    return (ulong)local_10 * 0x37;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006968
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006968
#undef local_20
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045cb0
 */

double recovered_10045cb0(long end,long start)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)(end - start);
}


#undef DAT_10049110
#define DAT_10049110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23daU)))
#undef DAT_10049118
#define DAT_10049118 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23e2U)))
#undef DAT_10049120
#define DAT_10049120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x23eaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045cc0
 */

long recovered_10045cc0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint128 auVar23;
  uint128 auVar24;

  if (param_1 == (uint *)0x0) {
    return -1;
  }
  uVar11 = param_1[5];
  if ((int)uVar11 < 0x46) {
    return -1;
  }
  uVar5 = param_1[4];
  uVar13 = (ulong)uVar5;
  if (0xb < uVar13) {
    return -1;
  }
  uVar6 = param_1[3];
  lVar14 = (long)(int)uVar6;
  if (lVar14 < 1) {
    return -1;
  }
  uVar2 = uVar11 + 0x76c;
  if (((uVar11 & 3) != 0 || uVar5 != 1) ||
     ((iVar15 = 0x1d, (uVar2 * -0x3d70a3d7 >> 2 | uVar11 * 0x40000000) < 0x28f5c29 &&
      (uVar2 % 400 != 0)))) {
    iVar15 = *(int *)(&DAT_10049110 + uVar13 * 4);
  }
  if (iVar15 < (int)uVar6) {
    return -1;
  }
  uVar7 = param_1[2];
  if (0x17 < uVar7) {
    return -1;
  }
  uVar8 = param_1[1];
  if (0x3b < uVar8) {
    return -1;
  }
  uVar9 = *param_1;
  if (0x3c < uVar9) {
    return -1;
  }
  if (uVar11 == 0x46) {
    lVar19 = 0;
  }
  else {
    uVar10 = 0x7b3;
    if (0x7b3 < (int)uVar2) {
      uVar10 = uVar2;
    }
    uVar16 = 0x7b2;
    lVar19 = 0;
    do {
      lVar12 = 0x16d;
      if ((uVar16 & 3) == 0) {
        lVar12 = (ulong)((uVar16 / 400) * -400 + 0x7b2 + uVar16 == 0x7b2 ||
                        (uVar16 / 100) * -100 + 0x7b2 + uVar16 != 0x7b2) + 0x16d;
      }
      lVar19 = lVar19 + lVar12;
      uVar16 = uVar16 + 1;
    } while (uVar10 != uVar16);
  }
  if (((uVar13 != 0) && (lVar19 = lVar19 + 0x1f, uVar5 != 1)) &&
     (lVar19 = ((ulong)((uVar11 & 3) != 0 ||
                       0xa3d70a < (uVar2 * -0x3d70a3d7 >> 4 | uVar2 * -0x70000000) &&
                       (uVar2 * -0x3d70a3d7 >> 2 | uVar11 * 0x40000000) < 0x28f5c29) ^ 0x1d) +
               lVar19, uVar5 != 2)) {
    uVar1 = uVar13 - 2;
    lVar12 = 2;
    if (3 < uVar1) {
      uVar17 = uVar1 & 0xfffffffffffffffc;
      lVar12 = uVar17 + 2;
      lVar22 = 0;
      lVar20 = 0;
      lVar21 = 0;
      uVar18 = 0;
      do {
        lVar3 = *(long *)(&DAT_10049118 + uVar18);
        lVar4 = *(long *)(&DAT_10049120 + uVar18);
        PF_PART4(auVar23, 8) = (int)((ulong)lVar3 >> 0x20);
        PF_PART8(auVar23, 0) = lVar3;
        PF_PART4(auVar23, 12) = -(uint)(lVar3 < 0);
        lVar19 = lVar19 + CONCAT44(-(uint)((int)lVar3 < 0),(int)lVar3);
        lVar22 = lVar22 + PF_PART8(auVar23, 8);
        PF_PART4(auVar24, 8) = (int)((ulong)lVar4 >> 0x20);
        PF_PART8(auVar24, 0) = lVar4;
        PF_PART4(auVar24, 12) = -(uint)(lVar4 < 0);
        lVar20 = lVar20 + CONCAT44(-(uint)((int)lVar4 < 0),(int)lVar4);
        lVar21 = lVar21 + PF_PART8(auVar24, 8);
        uVar18 = uVar18 + 4;
      } while (uVar17 != uVar18);
      lVar19 = lVar21 + lVar22 + lVar20 + lVar19;
      if (uVar1 == uVar17) goto LAB_10045f40;
    }
    lVar20 = 0;
    do {
      lVar19 = lVar19 + *(int *)(&DAT_10049110 + lVar12 * 4 + lVar20 * 4);
      lVar20 = lVar20 + 1;
    } while (uVar13 - lVar12 != lVar20);
  }
LAB_10045f40:
  uVar11 = recovered_10045fd0(uVar2,uVar5,uVar6);
  uVar13 = lVar14 + lVar19 + 3;
  param_1[7] = uVar11;
  uVar11 = 0x3b;
  if (uVar9 != 0x3c) {
    uVar11 = uVar9;
  }
  param_1[6] = (int)uVar13 + (int)(uVar13 / 7) * -7;
  return (lVar14 + lVar19) * 0x15180 + (ulong)(uVar8 * 0x3c + uVar7 * 0xe10 + uVar11) + -0x15180;
}

#undef DAT_10049110
#undef DAT_10049118
#undef DAT_10049120

#undef DAT_10049110
#define DAT_10049110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045fd0
 */

int recovered_10045fd0(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;

  if ((int)param_2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x1f;
    if ((param_2 != 1) &&
       (uVar1 = param_1 * -0x3d70a3d7 + 0x51eb850,
       iVar2 = 0x3c - (uint)((param_1 & 3) != 0 ||
                            0xa3d70a < (uVar1 >> 4 | param_1 * -0x70000000) &&
                            (uVar1 >> 2 | param_1 * 0x40000000) < 0x28f5c29), param_2 != 2)) {
      if (param_2 == 3) {
        uVar7 = 2;
      }
      else {
        uVar5 = 2;
        do {
          iVar6 = 0;
          iVar3 = 0;
          if (uVar5 < 0xc) {
            iVar3 = *(int *)(&DAT_10049110 + uVar5 * 4);
            iVar6 = *(int *)(uVar5 * 4 + ((uintptr_t)pf_module_state + 0x23deU));
          }
          iVar2 = iVar2 + iVar3 + iVar6;
          uVar7 = uVar5 + 2;
          lVar4 = uVar5 - 2;
          uVar5 = uVar7;
        } while (lVar4 != (ulong)(param_2 & 0x7ffffffe) - 4);
      }
      if ((param_2 & 1) != 0) {
        iVar3 = 0;
        if (uVar7 < 0xc) {
          iVar3 = *(int *)(&DAT_10049110 + uVar7 * 4);
        }
        iVar2 = iVar3 + iVar2;
      }
    }
  }
  return iVar2 + param_3 + -1;
}

#undef DAT_10049110

#undef DAT_1004bdc0
#define DAT_1004bdc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x508aU)))
#undef DAT_1004bdc4
#define DAT_1004bdc4 (*(uint *)(((uintptr_t)pf_module_state + 0x508eU)))
#undef DAT_1004bdc8
#define DAT_1004bdc8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5092U)))
#undef DAT_1004bdcc
#define DAT_1004bdcc (*(int *)(((uintptr_t)pf_module_state + 0x5096U)))
#undef DAT_1004bdd0
#define DAT_1004bdd0 (*(int *)(((uintptr_t)pf_module_state + 0x509aU)))
#undef DAT_1004bdd4
#define DAT_1004bdd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x509eU)))
#undef DAT_1004bdd8
#define DAT_1004bdd8 (*(int *)(((uintptr_t)pf_module_state + 0x50a2U)))
#undef DAT_1004bddc
#define DAT_1004bddc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50a6U)))
#undef DAT_1004bde0
#define DAT_1004bde0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50aaU)))
#undef _DAT_1004bdd4
#define _DAT_1004bdd4 (*(int *)(((uintptr_t)pf_module_state + 0x509eU)))
#undef _DAT_1004bddc
#define _DAT_1004bddc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a6U)))
#undef _DAT_1004bde0
#define _DAT_1004bde0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100460b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100460b0(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;

  recovered_10036210(&DAT_1004bdc0,0,0x24);
  uVar3 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar3 = 0;
    if (0 < (long)*param_1) {
      uVar3 = *param_1;
    }
  }
  uVar4 = uVar3 / 0x15180 + 4;
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = uVar4;
  uVar5 = uVar3 % 0x15180;
  DAT_1004bdd8 = (int)uVar4 + SUB164(auVar1 * ZEXT816(0x2492492492492493),8) * -7;
  uVar6 = 0x7b2;
  uVar3 = uVar3 / 0x15180;
  uVar2 = 0x7b1;
  do {
    uVar7 = uVar2;
    uVar4 = uVar3;
    uVar2 = uVar7 + 1;
    uVar8 = 0x16d;
    if ((uVar2 & 3) == 0) {
      uVar8 = (ulong)((uVar6 / 400) * -400 + 0x7b2 + uVar7 == 0x7b1 ||
                     (uVar6 / 100) * -100 + 0x7b2 + uVar7 != 0x7b1) + 0x16d;
    }
    uVar6 = uVar6 + 1;
    uVar3 = uVar4 - uVar8;
  } while (uVar8 <= uVar4);
  _DAT_1004bdd4 = uVar7 - 0x76b;
  _DAT_1004bddc = (int)uVar4;
  DAT_1004bdd0 = 0;
  if (0x1e < uVar4) {
    uVar4 = uVar4 - 0x1f;
    uVar6 = uVar2 * -0x3d70a3d7 + 0x51eb850;
    uVar8 = (ulong)((uVar2 & 3) != 0 ||
                   0xa3d70a < (uVar6 >> 4 | uVar2 * -0x70000000) &&
                   (uVar6 >> 2 | uVar2 * 0x40000000) < 0x28f5c29) ^ 0x1d;
    DAT_1004bdd0 = 1;
    uVar3 = uVar4 - uVar8;
    if (uVar8 <= uVar4) {
      DAT_1004bdd0 = 2;
      uVar4 = uVar3;
      if (0x1e < uVar3) {
        uVar4 = uVar3 - 0x1f;
        DAT_1004bdd0 = 3;
        if (0x1d < uVar4) {
          uVar4 = uVar3 - 0x3d;
          DAT_1004bdd0 = 4;
          if (0x1e < uVar4) {
            uVar4 = uVar3 - 0x5c;
            DAT_1004bdd0 = 5;
            if (0x1d < uVar4) {
              uVar4 = uVar3 - 0x7a;
              DAT_1004bdd0 = 6;
              if (0x1e < uVar4) {
                uVar4 = uVar3 - 0x99;
                DAT_1004bdd0 = 7;
                if (0x1e < uVar4) {
                  uVar4 = uVar3 - 0xb8;
                  DAT_1004bdd0 = 8;
                  if (0x1d < uVar4) {
                    uVar4 = uVar3 - 0xd6;
                    DAT_1004bdd0 = 9;
                    if (0x1e < uVar4) {
                      uVar4 = uVar3 - 0xf5;
                      DAT_1004bdd0 = 10;
                      if (0x1d < uVar4) {
                        uVar8 = uVar3 - 0x113;
                        DAT_1004bdd0 = 0xc - (uint)(uVar8 < 0x1f);
                        uVar4 = uVar3 - 0x132;
                        if (uVar8 < 0x1f) {
                          uVar4 = uVar8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DAT_1004bdcc = (int)uVar4 + 1;
  DAT_1004bdc8 = (int)(uVar5 / 0xe10);
  uVar2 = (uint)(uVar5 / 0x3c);
  DAT_1004bdc4 = uVar2 % 0x3c;
  DAT_1004bdc0 = (int)uVar5 + uVar2 * -0x3c;
  _DAT_1004bde0 = 0;
  return &DAT_1004bdc0;
}

#undef DAT_1004bdc0
#undef DAT_1004bdc4
#undef DAT_1004bdc8
#undef DAT_1004bdcc
#undef DAT_1004bdd0
#undef DAT_1004bdd4
#undef DAT_1004bdd8
#undef DAT_1004bddc
#undef DAT_1004bde0
#undef _DAT_1004bdd4
#undef _DAT_1004bddc
#undef _DAT_1004bde0

#undef DAT_1004bdc0
#define DAT_1004bdc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x508aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046350
 */

undefined4 * recovered_10046350(ulong *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100460b0(in_RDI);
  return &DAT_1004bdc0;
}

#undef DAT_1004bdc0

#undef DAT_10048d23
#define DAT_10048d23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fedU)))
#undef DAT_10048d3f
#define DAT_10048d3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2009U)))
#undef DAT_1004a2b0
#define DAT_1004a2b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357aU)))
#undef DAT_1004a330
#define DAT_1004a330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x35faU)))
#undef DAT_1004bdf0
#define DAT_1004bdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50baU)))
#undef str_10048d6f
#define str_10048d6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2039U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046370
 */

undefined *
recovered_10046370(undefined4 *param_1,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined *vararg0;
  ulong uVar2;
  undefined *vararg1;
  uint vararg2;
  uint vararg3;
  uint vararg6;
  uint vararg5;
  uint vararg4;

  if (param_1 == (undefined4 *)0x0) {
    vararg6 = 0x7b2;
    vararg2 = 1;
    vararg0 = &DAT_10048d23;
    vararg1 = &DAT_10048d3f;
    vararg5 = 0;
    vararg3 = 0;
    vararg4 = 0;
  }
  else {
    uVar1 = (ulong)(uint)param_1[6];
    if (6 < (uint)param_1[6]) {
      uVar1 = 0;
    }
    uVar2 = 0;
    if ((uint)param_1[4] < 0xc) {
      uVar2 = (ulong)(uint)param_1[4];
    }
    vararg0 = *(undefined **)(&DAT_1004a2b0 + uVar1 * 8);
    vararg1 = (undefined *)(&DAT_1004a330)[uVar2];
    vararg2 = param_1[3];
    vararg3 = param_1[2];
    vararg5 = *param_1;
    vararg4 = param_1[1];
    vararg6 = param_1[5] + 0x76c;
  }
  pf_varargs_10039b90__8__8__4__4__4__4__4_
            (&DAT_1004bdf0,0x20,str_10048d6f,(ulonglong)vararg0,(ulonglong)vararg1,vararg2,vararg3,
             vararg4,vararg5,vararg6);
  return &DAT_1004bdf0;
}

#undef DAT_10048d23
#undef DAT_10048d3f
#undef DAT_1004a2b0
#undef DAT_1004a330
#undef DAT_1004bdf0
#undef str_10048d6f

#undef DAT_1004a2b0
#define DAT_1004a2b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357aU)))
#undef DAT_1004a330
#define DAT_1004a330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x35faU)))
#undef DAT_1004bdc0
#define DAT_1004bdc0 (*(uint *)(((uintptr_t)pf_module_state + 0x508aU)))
#undef DAT_1004bdc4
#define DAT_1004bdc4 (*(uint *)(((uintptr_t)pf_module_state + 0x508eU)))
#undef DAT_1004bdc8
#define DAT_1004bdc8 (*(uint *)(((uintptr_t)pf_module_state + 0x5092U)))
#undef DAT_1004bdcc
#define DAT_1004bdcc (*(uint *)(((uintptr_t)pf_module_state + 0x5096U)))
#undef DAT_1004bdd0
#define DAT_1004bdd0 (*(uint *)(((uintptr_t)pf_module_state + 0x509aU)))
#undef DAT_1004bdd4
#define DAT_1004bdd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x509eU)))
#undef DAT_1004bdd8
#define DAT_1004bdd8 (*(uint *)(((uintptr_t)pf_module_state + 0x50a2U)))
#undef DAT_1004bdf0
#define DAT_1004bdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50baU)))
#undef _DAT_1004bdd4
#define _DAT_1004bdd4 (*(int *)(((uintptr_t)pf_module_state + 0x509eU)))
#undef str_10048d6f
#define str_10048d6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2039U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
recovered_10046420(ulong *in_RDI,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  recovered_100460b0(in_RDI);
  uVar1 = (ulong)DAT_1004bdd8;
  if (6 < DAT_1004bdd8) {
    uVar1 = 0;
  }
  uVar2 = (ulong)DAT_1004bdd0;
  if (0xb < DAT_1004bdd0) {
    uVar2 = 0;
  }
  pf_varargs_10039b90__8__8__4__4__4__4__4_
            (&DAT_1004bdf0,0x20,str_10048d6f,*(ulonglong *)(&DAT_1004a2b0 + uVar1 * 8),
             (&DAT_1004a330)[uVar2],DAT_1004bdcc,DAT_1004bdc8,DAT_1004bdc4,DAT_1004bdc0,
             _DAT_1004bdd4 + 0x76c);
  return &DAT_1004bdf0;
}

#undef DAT_1004a2b0
#undef DAT_1004a330
#undef DAT_1004bdc0
#undef DAT_1004bdc4
#undef DAT_1004bdc8
#undef DAT_1004bdcc
#undef DAT_1004bdd0
#undef DAT_1004bdd4
#undef DAT_1004bdd8
#undef DAT_1004bdf0
#undef _DAT_1004bdd4
#undef str_10048d6f

#undef DAT_100475bd
#define DAT_100475bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x887U)))
#undef DAT_100475e3
#define DAT_100475e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8adU)))
#undef DAT_100475e7
#define DAT_100475e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8b1U)))
#undef DAT_10048e1b
#define DAT_10048e1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20e5U)))
#undef DAT_10048e1e
#define DAT_10048e1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20e8U)))
#undef DAT_10048e3e
#define DAT_10048e3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2108U)))
#undef DAT_10048e43
#define DAT_10048e43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x210dU)))
#undef DAT_1004a2b0
#define DAT_1004a2b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357aU)))
#undef DAT_1004a2f0
#define DAT_1004a2f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35baU)))
#undef DAT_1004a330
#define DAT_1004a330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x35faU)))
#undef DAT_1004a390
#define DAT_1004a390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x365aU)))
#define local_3a (*(char (*)[2])(frame + 70))
#define local_38 (*(long *)(frame + 72))
#define local_68 (*(char (*)[24])(frame + 24))
#define local_50 (*(ulong *)(frame + 48))
#define local_48 (*(uint * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100464c0
 */

long recovered_100464c0(undefined1 *param_1,ulong param_2,char *param_3,uint *param_4,
                       undefined8 *in_R8,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;

  local_38 = 0;
  if ((param_4 == (uint *)0x0 || param_3 == (char *)0x0) ||
      (param_2 == 0 || param_1 == (undefined1 *)0x0)) {
LAB_10046a09:
    local_38 = 0;
  }
  else {
    *param_1 = 0;
    cVar3 = *param_3;
    if (cVar3 != '\0') {
      lVar9 = 0;
      local_50 = param_2;
      local_48 = param_4;
      do {
        pcVar10 = local_3a;
        if (cVar3 != '%') {
          local_3a[0] = cVar3;
LAB_100465f3:
          local_3a[1] = 0;
          uVar4 = recovered_10036f80(pcVar10);
          if (uVar4 + local_38 < local_50) goto LAB_10046574;
          goto LAB_10046a09;
        }
        lVar1 = lVar9 + 1;
        lVar9 = lVar9 + 1;
        pcVar2 = &DAT_100475e7;
        switch((uintptr_t)(param_3[lVar1])) {
        case '\0':
          goto switchD_100465c7_caseD_0;
        default:
          local_3a[0] = param_3[lVar1];
          goto LAB_100465f3;
        case '%':
          goto switchD_100465c7_caseD_25;
        case 'A':
          uVar4 = (ulong)local_48[6];
          if (6 < local_48[6]) {
            uVar4 = 0;
          }
          puVar8 = (undefined8 *)&DAT_1004a2f0;
          goto LAB_100469c8;
        case 'B':
          uVar4 = (ulong)local_48[4];
          if (0xb < local_48[4]) {
            uVar4 = 0;
          }
          puVar8 = (undefined8 *)&DAT_1004a390;
          goto LAB_100469c8;
        case 'F':
          pf_varargs_10039b90__4_(local_68,0x10,&DAT_10048e43,local_48[5] + 0x76c);
          uVar5 = recovered_10036f80(local_68);
          uVar4 = local_50;
          if (uVar5 + local_38 < local_50) {
            recovered_10035510(param_1 + local_38,local_68,uVar5);
            local_38 = uVar5 + local_38;
            param_1[local_38] = 0;
            uVar5 = recovered_10036f80(&DAT_100475e3);
            if (uVar5 + local_38 < uVar4) {
              recovered_10035510(param_1 + local_38,&DAT_100475e3,uVar5);
              local_38 = uVar5 + local_38;
              param_1[local_38] = 0;
              pf_varargs_10039b90__4_(local_68,0x10,&DAT_10048e3e,local_48[4] + 1);
              uVar5 = recovered_10036f80(local_68);
              if (uVar5 + local_38 < uVar4) {
                recovered_10035510(param_1 + local_38,local_68,uVar5);
                local_38 = uVar5 + local_38;
                param_1[local_38] = 0;
                uVar5 = recovered_10036f80(&DAT_100475e3);
                if (uVar5 + local_38 < uVar4) {
                  recovered_10035510(param_1 + local_38,&DAT_100475e3,uVar5);
                  local_38 = uVar5 + local_38;
                  param_1[local_38] = 0;
                  uVar7 = local_48[3];
                  uVar6 = extraout_XMM0_Qa;
                  goto LAB_10046980;
                }
              }
            }
          }
          goto LAB_10046a09;
        case 'H':
          uVar7 = local_48[2];
          break;
        case 'I':
          uVar7 = local_48[2];
          uVar7 = uVar7 + (((uint)((int)uVar7 / 6 + ((int)uVar7 >> 0x1f)) >> 1) -
                          ((int)uVar7 >> 0x1f)) * -0xc;
          if (uVar7 == 0) {
            uVar7 = 0xc;
          }
          pcVar10 = &DAT_10048e3e;
          goto LAB_1004654b;
        case 'M':
          uVar7 = local_48[1];
          break;
        case 'S':
          uVar7 = *local_48;
          break;
        case 'T':
          pf_varargs_10039b90__4_(local_68,0x10,&DAT_10048e3e,local_48[2]);
          uVar5 = recovered_10036f80(local_68);
          uVar4 = local_50;
          if (uVar5 + local_38 < local_50) {
            recovered_10035510(param_1 + local_38,local_68,uVar5);
            local_38 = uVar5 + local_38;
            param_1[local_38] = 0;
            uVar5 = recovered_10036f80(&DAT_100475bd);
            if (uVar5 + local_38 < uVar4) {
              recovered_10035510(param_1 + local_38,&DAT_100475bd,uVar5);
              local_38 = uVar5 + local_38;
              param_1[local_38] = 0;
              pf_varargs_10039b90__4_(local_68,0x10,&DAT_10048e3e,local_48[1]);
              uVar5 = recovered_10036f80(local_68);
              if (uVar5 + local_38 < uVar4) {
                recovered_10035510(param_1 + local_38,local_68,uVar5);
                local_38 = uVar5 + local_38;
                param_1[local_38] = 0;
                uVar5 = recovered_10036f80(&DAT_100475bd);
                if (uVar5 + local_38 < uVar4) {
                  recovered_10035510(param_1 + local_38,&DAT_100475bd,uVar5);
                  local_38 = uVar5 + local_38;
                  param_1[local_38] = 0;
                  uVar7 = *local_48;
                  uVar6 = extraout_XMM0_Qa_00;
LAB_10046980:
                  uVar6 = recovered_10046bf0((long)param_1,uVar4,&local_38,(ulong)uVar7,2,uVar6,
                                             in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                             in_XMM6_Qa,in_XMM7_Qa);
                  if ((char)uVar6 != '\0') goto LAB_1004658a;
                }
              }
            }
          }
          goto LAB_10046a09;
        case 'Y':
          uVar7 = local_48[5] + 0x76c;
          pcVar10 = &DAT_10048e43;
          goto LAB_1004654b;
        case 'a':
          uVar4 = (ulong)local_48[6];
          if (6 < local_48[6]) {
            uVar4 = 0;
          }
          puVar8 = (undefined8 *)&DAT_1004a2b0;
          goto LAB_100469c8;
        case 'b':
          uVar4 = (ulong)local_48[4];
          if (0xb < local_48[4]) {
            uVar4 = 0;
          }
          puVar8 = &DAT_1004a330;
LAB_100469c8:
          pcVar10 = (char *)puVar8[uVar4];
LAB_100469cc:
          uVar4 = recovered_10036f80(pcVar10);
          if (uVar4 + local_38 < local_50) {
            recovered_10035510(param_1 + local_38,pcVar10,uVar4);
            local_38 = uVar4 + local_38;
            param_1[local_38] = 0;
            goto LAB_1004658a;
          }
          goto LAB_10046a09;
        case 'd':
          uVar7 = local_48[3];
          break;
        case 'm':
          uVar7 = local_48[4] + 1;
          break;
        case 'p':
          pcVar10 = &DAT_10048e1e;
          if ((int)local_48[2] < 0xc) {
            pcVar10 = &DAT_10048e1b;
          }
          goto LAB_100469cc;
        }
        pcVar10 = &DAT_10048e3e;
LAB_1004654b:
        pf_varargs_10039b90__4_(local_68,0x10,pcVar10,uVar7);
        pcVar2 = local_68;
switchD_100465c7_caseD_25:
        pcVar10 = pcVar2;
        uVar4 = recovered_10036f80(pcVar10);
        if (local_50 <= uVar4 + local_38) goto LAB_10046a09;
LAB_10046574:
        recovered_10035510(param_1 + local_38,pcVar10,uVar4);
        local_38 = uVar4 + local_38;
        param_1[local_38] = 0;
LAB_1004658a:
        cVar3 = param_3[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (cVar3 != '\0');
    }
switchD_100465c7_caseD_0:
  }
  return local_38;
}

#undef DAT_100475bd
#undef DAT_100475e3
#undef DAT_100475e7
#undef DAT_10048e1b
#undef DAT_10048e1e
#undef DAT_10048e3e
#undef DAT_10048e43
#undef DAT_1004a2b0
#undef DAT_1004a2f0
#undef DAT_1004a330
#undef DAT_1004a390
#undef local_3a
#undef local_38
#undef local_68
#undef local_50
#undef local_48

#undef DAT_10048e3e
#define DAT_10048e3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2108U)))
#undef DAT_10048e43
#define DAT_10048e43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x210dU)))
#undef DAT_10048e48
#define DAT_10048e48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2112U)))
#define local_48 (*(char (*)[24])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046bf0
 */

undefined8
recovered_10046bf0(long param_1,ulong param_2,long *param_3,undefined8 param_4,int param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong count;
  char *format;
  char *pcVar2;
  undefined8 uVar3;

  pcVar2 = &DAT_10048e48;
  if (param_5 == 4) {
    pcVar2 = &DAT_10048e43;
  }
  format = &DAT_10048e3e;
  if (param_5 != 2) {
    format = pcVar2;
  }
  uVar3 = 0;
  pf_varargs_10039b90__4_(local_48,0x10,format,(uint)param_4);
  count = recovered_10036f80(local_48);
  if (param_3 != (long *)0x0 && param_1 != 0) {
    if (*param_3 + count < param_2) {
      recovered_10035510((void *)(*param_3 + param_1),local_48,count);
      lVar1 = *param_3;
      *param_3 = count + lVar1;
      *(undefined1 *)(param_1 + count + lVar1) = 0;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef DAT_10048e3e
#undef DAT_10048e43
#undef DAT_10048e48
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ca0
 */

bool recovered_10046ca0(undefined8 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 extraout_RAX = 0;

  if (param_1 != (undefined8 *)0x0 && param_2 == 1) {
    recovered_10037650((undefined8 *)0x0);
    *param_1 = extraout_RAX;
    param_1[1] = 0;
  }
  return param_1 != (undefined8 *)0x0 && param_2 == 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ce0
 */

undefined8
recovered_10046ce0(undefined8 *param_1,long *param_2,long *param_3,ulong *param_4,undefined8 *in_R8)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined8 uVar3;

  uVar2 = recovered_10036f80((char *)param_1);
  uVar2 = uVar2 + 1;
  uVar3 = 0x22;
  if (uVar2 <= *param_4) {
    recovered_10035510((void *)*param_3,param_1,uVar2);
    lVar1 = *param_3;
    *param_2 = lVar1;
    *param_3 = lVar1 + uVar2;
    *param_4 = *param_4 - uVar2;
    uVar3 = 0;
  }
  return uVar3;
}


__asm__(".globl ___chkstk_darwin\n.set ___chkstk_darwin, ____chkstk_darwin\n");
