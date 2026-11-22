/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10007060
#define DAT_10007060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void recovered_10000480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10007060 = 0;
  recovered_100004a0();
  return;
}

#undef DAT_10007060

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
#undef DAT_10007060
#define DAT_10007060 (*(char *)(((uintptr_t)pf_module_state + 0xd50U)))
#undef DAT_10007068
#define DAT_10007068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd58U)))
#undef DAT_10007070
#define DAT_10007070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd60U)))
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
 * Address: 0x100004a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100004a0(void)

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
  if (DAT_10007060 != '\0') {
    return;
  }
  DAT_10007068 = 0;
  DAT_10007070 = 0;
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
                if (*puVar2 <= uVar7) goto LAB_10000533;
                puVar2[2] = *puVar2;
                puVar2[3] = puVar2[1];
                puVar2 = puVar2 + -2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar8 = 0;
LAB_10000533:
            local_438[uVar8 * 2 + 2] = uVar7;
            local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
            uVar9 = uVar9 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
LAB_1000067e:
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
        if (lVar12 == 0) goto LAB_10000746;
      }
      puVar2 = local_438 + 3;
      do {
        local_438[1] = 0x1000072f;
        recovered_10005650(puVar2[-1],*puVar2,&local_28);
        puVar2 = puVar2 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (DAT_10007068 != 0) goto LAB_10000885;
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
              if (*puVar2 <= uVar7) goto LAB_100005f5;
              puVar2[2] = *puVar2;
              puVar2[3] = puVar2[1];
              puVar2 = puVar2 + -2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar8 = 0;
LAB_100005f5:
          local_438[uVar8 * 2 + 2] = uVar7;
          local_438[uVar8 * 2 + 3] = uVar6 - uVar7;
          uVar9 = uVar9 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
    goto LAB_1000067e;
  }
LAB_10000746:
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
      if (DAT_10007068 == 0) {
        puVar4 = &DAT_10007068;
      }
      *puVar4 = 0x300000;
      if (DAT_10007070 == 0) {
        DAT_10007060 = 1;
        DAT_10007070 = 0x300000;
        return;
      }
      DAT_10007060 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14fffe0;
    _DAT_00300008 = 0;
    _DAT_00300010 = local_28;
    DAT_00300018 = 1;
    puVar4 = (undefined8 *)(local_28 + 8);
    if (DAT_10007068 == 0) {
      puVar4 = &DAT_10007068;
    }
    *puVar4 = 0x300000;
    if (DAT_10007070 == 0) {
      DAT_10007070 = 0x300000;
    }
    if ((0x2000000 < uVar5) && (0x30 < (uVar5 & 0xfffffffffffffff0) - 0x2000000)) {
      _DAT_02000000 = (uVar5 & 0xfffffffffffffff0) - 0x2000020;
      _DAT_02000008 = 0;
      _DAT_02000010 = 0x300000;
      DAT_02000018 = 1;
      puVar4 = (undefined8 *)&DAT_00300008;
      if (DAT_10007068 == 0) {
        puVar4 = &DAT_10007068;
      }
      *puVar4 = 0x2000000;
      if (DAT_10007070 == 0) {
        DAT_10007060 = 1;
        DAT_10007070 = 0x2000000;
        return;
      }
      DAT_10007060 = 1;
      return;
    }
  }
LAB_10000885:
  if (DAT_10007070 == 0) {
    DAT_10007070 = DAT_10007068;
    DAT_10007060 = 1;
    return;
  }
  DAT_10007060 = 1;
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
#undef DAT_10007060
#undef DAT_10007068
#undef DAT_10007070
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

#undef DAT_10007068
#define DAT_10007068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000910
 */

ulong recovered_10000910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004a0();
  uVar3 = 0;
  for (plVar1 = DAT_10007068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_10007068

#undef DAT_10007068
#define DAT_10007068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000960
 */

long recovered_10000960(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100004a0();
  lVar1 = 0;
  for (plVar2 = DAT_10007068; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_10007068

#undef DAT_10007068
#define DAT_10007068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009a0
 */

ulong recovered_100009a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004a0();
  uVar3 = 0;
  for (plVar1 = DAT_10007068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_10007068

#undef DAT_10007068
#define DAT_10007068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e0
 */

long recovered_100009e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  recovered_100004a0();
  lVar2 = 0;
  for (plVar1 = DAT_10007068; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar2 = lVar2 + *plVar1;
  }
  return lVar2;
}

#undef DAT_10007068

#undef DAT_10007068
#define DAT_10007068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd58U)))
#undef DAT_10007070
#define DAT_10007070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a10
 */

ulong * recovered_10000a10(long param_1)

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
  recovered_100004a0();
  puVar3 = DAT_10007070;
  if (DAT_10007070 == (ulong *)0x0) {
    puVar3 = DAT_10007068;
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
        DAT_10007070 = DAT_10007068;
        if (puVar3 != (ulong *)0x0) {
          DAT_10007070 = puVar3;
        }
        *(undefined1 *)(puVar4 + 3) = 0;
        return puVar4 + 4;
      }
    }
    puVar1 = puVar4 + 1;
    puVar4 = (ulong *)*puVar1;
    if ((ulong *)*puVar1 == (ulong *)0x0) {
      puVar4 = DAT_10007068;
    }
    if (puVar4 == (ulong *)0x0) break;
    if (puVar4 == puVar3) {
      return (ulong *)0x0;
    }
  }
  return (ulong *)0x0;
}

#undef DAT_10007068
#undef DAT_10007070

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af0
 */

ulong recovered_10000af0(ulong param_1,uint param_2)

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
 * Address: 0x10000b30
 */

ulong recovered_10000b30(ulong param_1,uint param_2)

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
 * Address: 0x10000b70
 */

long recovered_10000b70(long param_1,uint param_2)

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
 * Address: 0x10000bc0
 */

ulong recovered_10000bc0(ulong param_1,ulong param_2)

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
 * Address: 0x10000c60
 */

long recovered_10000c60(ulong param_1,ulong param_2)

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
 * Address: 0x10000cd0
 */

ulong recovered_10000cd0(ulong param_1,ulong param_2)

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
 * Address: 0x10000da0
 */

long recovered_10000da0(ulong param_1,ulong param_2)

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
 * Address: 0x10000e30
 */

void recovered_10000e30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e50
 */

int recovered_10000e50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e60
 */

undefined8 recovered_10000e60(ulong in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x4f < uVar2)) {
    uVar2 = UINT_0000684c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10000ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(in_RDI);
      return pvVar3;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eb0
 */

void recovered_10000eb0(void *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x53 < uVar2)) {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10000ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(in_RDI);
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f00
 */

undefined8 recovered_10000f00(void *in_RDI,ulong in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x57 < uVar2)) {
    uVar2 = UINT_00006854;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10000f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*(code *)(ulong)uVar2)(in_RDI,in_RSI);
      return pvVar3;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f50
 */

void recovered_10000f50(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_10000f6f:
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)param_1 & 7) == 0) {
LAB_1000115e:
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
                    goto LAB_1000115e;
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
        if (uVar5 == uVar8) goto LAB_10000f6f;
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
    goto LAB_10000f6f;
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
        goto LAB_10001180;
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
LAB_10001180:
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
 * Address: 0x10001390
 */

void recovered_10001390(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
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
LAB_1000172a:
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
                      goto LAB_1000172a;
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
          if (uVar9 == uVar10) goto LAB_10001988;
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
LAB_10001988:
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
          goto LAB_1000174c;
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
LAB_1000174c:
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
LAB_1000151e:
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
                    goto LAB_1000151e;
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
        if (uVar9 == uVar10) goto LAB_10001aea;
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
LAB_10001aea:
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
        goto LAB_10001baf;
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
LAB_10001baf:
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
 * Address: 0x10001c50
 */

void recovered_10001c50(byte *param_1,byte param_2,ulong param_3)

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
LAB_10001d9d:
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
                    goto LAB_10001d9d;
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
        if (uVar4 == uVar7) goto LAB_10001ed1;
      }
      do {
        *(undefined8 *)param_1 = uVar3;
        param_1 = param_1 + 8;
        param_3 = param_3 - 8;
      } while (7 < param_3);
    }
  }
LAB_10001ed1:
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 4) {
LAB_10001ee0:
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
        goto LAB_10001ee0;
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
 * Address: 0x10001fa0
 */

void recovered_10001fa0(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_100021c5;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_100021c5:
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
        goto LAB_10002246;
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
LAB_10002246:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002270
 */

void recovered_10002270(undefined8 *param_1,ulong param_2)

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
        if (uVar3 == uVar5) goto LAB_10002495;
      }
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 8;
        puVar1 = puVar6;
      } while (7 < uVar2);
    }
  }
LAB_10002495:
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
        goto LAB_10002516;
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
LAB_10002516:
  uVar2 = 0;
  do {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar3 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002540
 */

int recovered_10002540(ulong *param_1,ulong *param_2,ulong param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) goto LAB_10002773;
    uVar11 = param_3;
    puVar8 = param_2;
    puVar10 = param_1;
    if (((ulong)param_1 & 7) != 0) {
      bVar1 = (byte)*param_1;
      bVar5 = (byte)*param_2;
      if (bVar1 != bVar5) {
LAB_100026d3:
        uVar6 = (uint)bVar5;
        uVar2 = (uint)bVar1;
LAB_10002828:
        return uVar2 - uVar6;
      }
      puVar10 = (ulong *)((long)param_1 + 1);
      puVar8 = (ulong *)((long)param_2 + 1);
      uVar11 = param_3 - 1;
      if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
        bVar1 = *(byte *)puVar10;
        bVar5 = *(byte *)puVar8;
        if (bVar1 != bVar5) goto LAB_100026d3;
        puVar10 = (ulong *)((long)param_1 + 2);
        puVar8 = (ulong *)((long)param_2 + 2);
        uVar11 = param_3 - 2;
        if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
          bVar1 = *(byte *)puVar10;
          bVar5 = *(byte *)puVar8;
          if (bVar1 != bVar5) goto LAB_100026d3;
          puVar10 = (ulong *)((long)param_1 + 3);
          puVar8 = (ulong *)((long)param_2 + 3);
          uVar11 = param_3 - 3;
          if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
            bVar1 = *(byte *)puVar10;
            bVar5 = *(byte *)puVar8;
            if (bVar1 != bVar5) goto LAB_100026d3;
            puVar10 = (ulong *)((long)param_1 + 4);
            puVar8 = (ulong *)((long)param_2 + 4);
            uVar11 = param_3 - 4;
            if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
              bVar1 = *(byte *)puVar10;
              bVar5 = *(byte *)puVar8;
              if (bVar1 != bVar5) goto LAB_100026d3;
              puVar10 = (ulong *)((long)param_1 + 5);
              puVar8 = (ulong *)((long)param_2 + 5);
              uVar11 = param_3 - 5;
              if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                bVar1 = *(byte *)puVar10;
                bVar5 = *(byte *)puVar8;
                if (bVar1 != bVar5) goto LAB_100026d3;
                puVar10 = (ulong *)((long)param_1 + 6);
                puVar8 = (ulong *)((long)param_2 + 6);
                uVar11 = param_3 - 6;
                if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                  bVar1 = *(byte *)puVar10;
                  bVar5 = *(byte *)puVar8;
                  if (bVar1 != bVar5) goto LAB_100026d3;
                  puVar10 = (ulong *)((long)param_1 + 7);
                  puVar8 = (ulong *)((long)param_2 + 7);
                  uVar11 = param_3 - 7;
                  if (((ulong)puVar10 & 7) != 0 && uVar11 != 0) {
                    bVar1 = *(byte *)puVar10;
                    bVar5 = *(byte *)puVar8;
                    if (bVar1 != bVar5) goto LAB_100026d3;
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
LAB_1000279f:
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
        goto LAB_10002828;
      }
      uVar4 = puVar10[1];
      uVar7 = puVar8[1];
      if (uVar4 != uVar7) goto LAB_1000279f;
      uVar4 = puVar10[2];
      uVar7 = puVar8[2];
      if (uVar4 != uVar7) goto LAB_1000279f;
      uVar4 = puVar10[3];
      uVar7 = puVar8[3];
      if (uVar4 != uVar7) goto LAB_1000279f;
      uVar11 = uVar11 - 0x20;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002840((byte *)param_1,(byte *)param_2);
        return iVar3;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10002773:
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
 * Address: 0x10002840
 */

int recovered_10002840(byte *param_1,byte *param_2)

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
 * Address: 0x100028b0
 */

bool recovered_100028b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d0
 */

bool recovered_100028d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

bool recovered_100028f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002910
 */

bool recovered_10002910(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002940
 */

bool recovered_10002940(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

bool recovered_10002960(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

int recovered_10002980(int param_1)

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
 * Address: 0x100029a0
 */

int recovered_100029a0(int param_1)

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
 * Address: 0x100029c0
 */

long recovered_100029c0(long param_1)

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
 * Address: 0x100029f0
 */

int recovered_100029f0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002a13;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002a13:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a30
 */

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
      if (bVar1 != *param_2) goto LAB_10002a53;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    bVar1 = 0;
LAB_10002a53:
    uVar2 = (uint)bVar1;
  }
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

void recovered_10002a70(long param_1,long param_2)

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
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

undefined8 * recovered_10002a90(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar7 = 0xfffffffffffffff8;
  do {
    uVar12 = uVar7;
    uVar7 = uVar12 + 1;
  } while (*(char *)((long)param_1 + uVar12 + 8) != '\0');
  iVar1 = Ram0000000000006800;
  if ((((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
      (uVar2 = Ram0000000000006808, uVar2 < 0xc)) || (uVar2 = Ram0000000000006808, uVar2 < 0x50)) {
    return (undefined8 *)0x0;
  }
  uVar2 = UINT_0000684c;
  if ((code *)(ulong)uVar2 == (code *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar11 = uVar12 + 9;
  puVar6 = (*(code *)(ulong)uVar2)(uVar11);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar10 = puVar6;
  if (uVar11 < 0x10) {
LAB_10002b39:
    if (uVar11 == 0) {
      return puVar6;
    }
  }
  else if ((((uint)puVar6 ^ (uint)param_1) & 7) == 0) {
    if (((ulong)puVar6 & 7) == 0) {
      puVar9 = param_1;
      puVar8 = puVar6;
    }
    else {
      puVar8 = (undefined8 *)((long)puVar6 + 1);
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      puVar9 = (undefined8 *)((long)param_1 + 1);
      uVar11 = uVar12 + 8;
      if ((uVar7 != 0xfffffffffffffff9) && (((ulong)puVar8 & 7) != 0)) {
        puVar8 = (undefined8 *)((long)puVar6 + 2);
        *(undefined1 *)((long)puVar6 + 1) = *(undefined1 *)((long)param_1 + 1);
        puVar9 = (undefined8 *)((long)param_1 + 2);
        uVar11 = uVar12 + 7;
        if ((uVar7 != 0xfffffffffffffffa) && (((ulong)puVar8 & 7) != 0)) {
          puVar8 = (undefined8 *)((long)puVar6 + 3);
          *(undefined1 *)((long)puVar6 + 2) = *(undefined1 *)((long)param_1 + 2);
          puVar9 = (undefined8 *)((long)param_1 + 3);
          uVar11 = uVar12 + 6;
          if ((uVar7 != 0xfffffffffffffffb) && (((ulong)puVar8 & 7) != 0)) {
            puVar8 = (undefined8 *)((long)puVar6 + 4);
            *(undefined1 *)((long)puVar6 + 3) = *(undefined1 *)((long)param_1 + 3);
            puVar9 = (undefined8 *)((long)param_1 + 4);
            uVar11 = uVar12 + 5;
            if ((uVar7 != 0xfffffffffffffffc) && (((ulong)puVar8 & 7) != 0)) {
              puVar8 = (undefined8 *)((long)puVar6 + 5);
              *(undefined1 *)((long)puVar6 + 4) = *(undefined1 *)((long)param_1 + 4);
              puVar9 = (undefined8 *)((long)param_1 + 5);
              uVar11 = uVar12 + 4;
              if ((uVar7 != 0xfffffffffffffffd) && (((ulong)puVar8 & 7) != 0)) {
                puVar8 = (undefined8 *)((long)puVar6 + 6);
                *(undefined1 *)((long)puVar6 + 5) = *(undefined1 *)((long)param_1 + 5);
                puVar9 = (undefined8 *)((long)param_1 + 6);
                uVar11 = uVar12 + 3;
                if ((uVar7 != 0xfffffffffffffffe) && (((ulong)puVar8 & 7) != 0)) {
                  puVar8 = (undefined8 *)((long)puVar6 + 7);
                  *(undefined1 *)((long)puVar6 + 6) = *(undefined1 *)((long)param_1 + 6);
                  puVar9 = (undefined8 *)((long)param_1 + 7);
                  uVar11 = uVar12 + 2;
                  if ((uVar7 != 0xffffffffffffffff) && (((ulong)puVar8 & 7) != 0)) {
                    *(undefined1 *)((long)puVar6 + 7) = *(undefined1 *)((long)param_1 + 7);
                    puVar9 = param_1 + 1;
                    uVar11 = uVar7;
                    puVar8 = puVar6 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar11 < 0x20) {
    }
    else {
      uVar7 = uVar11 - 0x20;
      uVar12 = uVar11;
      if ((uVar7 & 0x20) == 0) {
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        puVar8[3] = puVar9[3];
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        uVar12 = uVar7;
      }
      uVar11 = uVar7;
      if (0x1f < uVar7) {
        do {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          puVar8[3] = puVar9[3];
          puVar8[4] = puVar9[4];
          puVar8[5] = puVar9[5];
          puVar8[6] = puVar9[6];
          puVar8[7] = puVar9[7];
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + 8;
          uVar12 = uVar12 - 0x40;
          uVar11 = uVar12;
        } while (0x1f < uVar12);
      }
    }
    if (uVar11 < 8) {
      param_1 = puVar9;
      puVar10 = puVar8;
    }
    else {
      if ((0x27 < uVar11 - 8) && (0x1f < (ulong)((long)puVar8 - (long)puVar9))) {
        uVar7 = (uVar11 - 8 >> 3) + 1;
        uVar12 = uVar7 & 0xfffffffffffffffc;
        param_1 = puVar9 + uVar12;
        puVar10 = puVar8 + uVar12;
        uVar11 = uVar11 + uVar12 * -8;
        uVar13 = 0;
        do {
          uVar3 = (puVar9 + uVar13)[1];
          uVar4 = puVar9[uVar13 + 2];
          uVar5 = (puVar9 + uVar13 + 2)[1];
          puVar8[uVar13] = puVar9[uVar13];
          (puVar8 + uVar13)[1] = uVar3;
          puVar8[uVar13 + 2] = uVar4;
          (puVar8 + uVar13 + 2)[1] = uVar5;
          uVar13 = uVar13 + 4;
        } while (uVar12 != uVar13);
        puVar9 = param_1;
        puVar8 = puVar10;
        if (uVar7 == uVar12) goto LAB_10002b39;
      }
      do {
        param_1 = puVar9 + 1;
        *puVar8 = *puVar9;
        puVar10 = puVar8 + 1;
        uVar11 = uVar11 - 8;
        puVar9 = param_1;
        puVar8 = puVar10;
      } while (7 < uVar11);
    }
    goto LAB_10002b39;
  }
  uVar7 = uVar11;
  puVar8 = puVar10;
  if ((uVar11 < 4) || ((ulong)((long)puVar10 - (long)param_1) < 0x20)) {
LAB_10002e58:
    puVar9 = param_1;
  }
  else {
    if (uVar11 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      uVar7 = 0;
      do {
        uVar3 = ((undefined8 *)((long)param_1 + uVar7))[1];
        puVar8 = (undefined8 *)((long)param_1 + uVar7 + 0x10);
        uVar4 = *puVar8;
        uVar5 = puVar8[1];
        *(undefined8 *)((long)puVar10 + uVar7) = *(undefined8 *)((long)param_1 + uVar7);
        ((undefined8 *)((long)puVar10 + uVar7))[1] = uVar3;
        puVar8 = (undefined8 *)((long)puVar10 + uVar7 + 0x10);
        *puVar8 = uVar4;
        puVar8[1] = uVar5;
        uVar7 = uVar7 + 0x20;
      } while (uVar12 != uVar7);
      if (uVar11 == uVar12) {
        return puVar6;
      }
      if ((uVar11 & 0x1c) == 0) {
        param_1 = (undefined8 *)((long)param_1 + uVar12);
        puVar8 = (undefined8 *)((long)puVar10 + uVar12);
        uVar7 = (ulong)((uint)uVar11 & 0x1f);
        goto LAB_10002e58;
      }
    }
    uVar13 = uVar11 & 0xfffffffffffffffc;
    uVar7 = (ulong)((uint)uVar11 & 3);
    puVar8 = (undefined8 *)((long)puVar10 + uVar13);
    puVar9 = (undefined8 *)((long)param_1 + uVar13);
    do {
      *(undefined4 *)((long)puVar10 + uVar12) = *(undefined4 *)((long)param_1 + uVar12);
      uVar12 = uVar12 + 4;
    } while (uVar13 != uVar12);
    if (uVar11 == uVar13) {
      return puVar6;
    }
  }
  uVar12 = uVar7 - 1;
  if ((uVar7 & 7) != 0) {
    uVar11 = 0;
    do {
      *(undefined1 *)((long)puVar8 + uVar11) = *(undefined1 *)((long)puVar9 + uVar11);
      uVar11 = uVar11 + 1;
    } while ((uVar7 & 7) != uVar11);
    uVar7 = uVar7 - uVar11;
    puVar8 = (undefined8 *)((long)puVar8 + uVar11);
    puVar9 = (undefined8 *)((long)puVar9 + uVar11);
  }
  if (uVar12 < 7) {
    return puVar6;
  }
  uVar12 = 0;
  do {
    *(undefined1 *)((long)puVar8 + uVar12) = *(undefined1 *)((long)puVar9 + uVar12);
    *(undefined1 *)((long)puVar8 + uVar12 + 1) = *(undefined1 *)((long)puVar9 + uVar12 + 1);
    *(undefined1 *)((long)puVar8 + uVar12 + 2) = *(undefined1 *)((long)puVar9 + uVar12 + 2);
    *(undefined1 *)((long)puVar8 + uVar12 + 3) = *(undefined1 *)((long)puVar9 + uVar12 + 3);
    *(undefined1 *)((long)puVar8 + uVar12 + 4) = *(undefined1 *)((long)puVar9 + uVar12 + 4);
    *(undefined1 *)((long)puVar8 + uVar12 + 5) = *(undefined1 *)((long)puVar9 + uVar12 + 5);
    *(undefined1 *)((long)puVar8 + uVar12 + 6) = *(undefined1 *)((long)puVar9 + uVar12 + 6);
    *(undefined1 *)((long)puVar8 + uVar12 + 7) = *(undefined1 *)((long)puVar9 + uVar12 + 7);
    uVar12 = uVar12 + 8;
  } while (uVar7 != uVar12);
  return puVar6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f10
 */

char * recovered_10002f10(char *param_1,char param_2)

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
 * Address: 0x10002f50
 */

long recovered_10002f50(char *param_1,char *param_2)

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
 * Address: 0x10002fb0
 */

char * recovered_10002fb0(char *param_1,char *param_2)

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
 * Address: 0x10003010
 */

char * recovered_10003010(char *param_1,char *param_2)

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


#undef DAT_1000642c
#define DAT_1000642c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

undefined * recovered_10003070(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000642c;
}

#undef DAT_1000642c

#undef DAT_10007000
#define DAT_10007000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003080
 */

undefined * recovered_10003080(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10007000;
}

#undef DAT_10007000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#define uStack_20 (*(undefined8 *)(frame + 32))
#define uStack_18 (*(undefined8 *)(frame + 40))
#define local_28 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

/* WARNING: Removing unreachable block (ram,0x100030a6) */
/* WARNING: Removing unreachable block (ram,0x100030f3) */
/* WARNING: Removing unreachable block (ram,0x100030fe) */
/* WARNING: Removing unreachable block (ram,0x10003107) */
/* WARNING: Removing unreachable block (ram,0x10003110) */
/* WARNING: Removing unreachable block (ram,0x100030fc) */

void recovered_10003090(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uStack_18 = 0;
  uStack_20 = 0;
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x16b < uVar2)) {
    uVar2 = UINT_00006968;
    if (((code *)(ulong)uVar2 != (code *)0x0) &&
       (uVar2 = (*(code *)(ulong)uVar2)(local_28), uVar2 != 0)) goto LAB_10003178;
  }
  uStack_20 = 0x574d4236;
LAB_10003178:
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = uStack_20;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006968
#undef uStack_20
#undef uStack_18
#undef local_28

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003190
 */

double recovered_10003190(double param_1,uint param_2)

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
          param_1 = param_1 * DAT_10006310;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          param_1 = param_1 * DAT_10006310 * DAT_10006310 * DAT_10006310 * DAT_10006310 *
                    DAT_10006310 * DAT_10006310 * DAT_10006310 * DAT_10006310;
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

#undef DAT_10006310

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003260(double param_1,int *param_2)

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
  dVar2 = (double)(_DAT_10006390 ^ (ulong)param_1);
  if ((double)(_DAT_10006390 ^ (ulong)param_1) <= param_1) {
    dVar2 = param_1;
  }
  iVar1 = 0;
  if (DAT_10006318 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10006310;
      iVar1 = iVar1 + 1;
    } while (DAT_10006318 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10006310)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  return ~-(ulong)(param_1 < 0.0) & (ulong)dVar2 |
         (_DAT_10006390 ^ (ulong)dVar2) & -(ulong)(param_1 < 0.0);
}

#undef DAT_10006310
#undef DAT_10006318
#undef DAT_10006390
#undef _DAT_10006390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003330
 */

double recovered_10003330(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003360
 */

double recovered_10003360(double param_1,double param_2)

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
      return DAT_10006318;
    }
    uVar3 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    dVar4 = DAT_10006318;
    do {
      if ((uVar3 & 1) != 0) {
        dVar4 = dVar4 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
    if ((int)uVar2 < 0) {
      return DAT_10006318 / dVar4;
    }
  }
  return dVar4;
}

#undef DAT_10006318

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e0
 */

ulong recovered_100033e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003410
 */

ulong recovered_10003410(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  return ~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
         (ulong)(DAT_10006318 + dVar2) & -(ulong)(dVar2 < param_1);
}

#undef DAT_10006318

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003470
 */

double recovered_10003470(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.0;
  if (0.0 < param_1) {
    dVar1 = param_1;
    if (param_1 <= DAT_10006318) {
      dVar1 = DAT_10006318;
    }
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
    dVar1 = (param_1 / dVar1 + dVar1) * DAT_10006310;
  }
  return dVar1;
}

#undef DAT_10006310
#undef DAT_10006318

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006320
#define DAT_10006320 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10006328
#define DAT_10006328 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10006330
#define DAT_10006330 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10006338
#define DAT_10006338 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10006340
#define DAT_10006340 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10006348
#define DAT_10006348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_100063a0
#define DAT_100063a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90U)))
#undef DAT_100063b0
#define DAT_100063b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_100063c0
#define DAT_100063c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef DAT_100063d0
#define DAT_100063d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef _DAT_10006340
#define _DAT_10006340 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_10006348
#define _DAT_10006348 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_100063a0
#define _DAT_100063a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x90U)))
#undef _DAT_100063b0
#define _DAT_100063b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef _DAT_100063c0
#define _DAT_100063c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef _DAT_100063d0
#define _DAT_100063d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003620(double param_1)

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
    if (DAT_10006328 < param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_10006310;
        iVar1 = iVar1 + 1;
      } while (DAT_10006328 < param_1);
    }
    for (; param_1 < DAT_10006330; param_1 = param_1 + param_1) {
      iVar1 = iVar1 + -1;
    }
    dVar6 = (DAT_10006338 + param_1) / (param_1 + DAT_10006318);
    dVar3 = dVar6 * dVar6;
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar3 * dVar6 * dVar3;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_100063a0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar7)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar7 = divpd(auVar5,_DAT_100063b0);
    (*(double *)((uint8_t *)&(auVar4)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar4)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0));
    auVar5 = divpd(auVar4,_DAT_100063c0);
    (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3 * (*(double *)((uint8_t *)&(auVar4)+0)) * dVar3;
    (*(double *)((uint8_t *)&(auVar2)+8)) = dVar3 * (*(double *)((uint8_t *)&(auVar2)+0));
    auVar2 = divpd(auVar2,_DAT_100063d0);
    dVar3 = (*(double *)((uint8_t *)&(auVar2)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar7)+8)) +
            (*(double *)((uint8_t *)&(auVar8)+8)) + (dVar6 * dVar3) / _DAT_10006340 + dVar6 + 0.0 + (*(double *)((uint8_t *)&(auVar8)+0)) +
            (*(double *)((uint8_t *)&(auVar7)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar2)+0));
    return dVar3 + dVar3 + (double)iVar1 * _DAT_10006348;
  }
  return DAT_10006320;
}

#undef DAT_10006310
#undef DAT_10006318
#undef DAT_10006320
#undef DAT_10006328
#undef DAT_10006330
#undef DAT_10006338
#undef DAT_10006340
#undef DAT_10006348
#undef DAT_100063a0
#undef DAT_100063b0
#undef DAT_100063c0
#undef DAT_100063d0
#undef _DAT_10006340
#undef _DAT_10006348
#undef _DAT_100063a0
#undef _DAT_100063b0
#undef _DAT_100063c0
#undef _DAT_100063d0

#undef DAT_100063e0
#define DAT_100063e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

long recovered_10003770(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_100063e0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100063e0

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006350
#define DAT_10006350 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10006358
#define DAT_10006358 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10006360
#define DAT_10006360 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10006368
#define DAT_10006368 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10006370
#define DAT_10006370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_100063f0
#define DAT_100063f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0U)))
#undef _DAT_10006370
#define _DAT_10006370 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_100063f0
#define _DAT_100063f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100037a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10006350 < param_1; param_1 = param_1 + DAT_10006358) {
  }
  for (; param_1 < DAT_10006360; param_1 = param_1 + DAT_10006368) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_100063f0);
  return ((dVar1 / _DAT_10006370 + DAT_10006318 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8))) * param_1;
}

#undef DAT_10006318
#undef DAT_10006350
#undef DAT_10006358
#undef DAT_10006360
#undef DAT_10006368
#undef DAT_10006370
#undef DAT_100063f0
#undef _DAT_10006370
#undef _DAT_100063f0

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006350
#define DAT_10006350 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10006358
#define DAT_10006358 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10006360
#define DAT_10006360 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10006368
#define DAT_10006368 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10006378
#define DAT_10006378 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10006400
#define DAT_10006400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0U)))
#undef _DAT_10006400
#define _DAT_10006400 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003850(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (; DAT_10006350 < param_1; param_1 = param_1 + DAT_10006358) {
  }
  for (; param_1 < DAT_10006360; param_1 = param_1 + DAT_10006368) {
  }
  dVar1 = param_1 * param_1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10006400);
  return (DAT_10006378 * dVar1 + DAT_10006318 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8));
}

#undef DAT_10006318
#undef DAT_10006350
#undef DAT_10006358
#undef DAT_10006360
#undef DAT_10006368
#undef DAT_10006378
#undef DAT_10006400
#undef _DAT_10006400

#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100038f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10006390 ^ (ulong)param_1);
  if ((double)(_DAT_10006390 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_10006390
#undef _DAT_10006390

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006380
#define DAT_10006380 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10003910(double param_1)

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
  dVar7 = (double)(_DAT_10006390 ^ (ulong)param_1);
  if ((double)(_DAT_10006390 ^ (ulong)param_1) <= param_1) {
    dVar7 = param_1;
  }
  lVar1 = 0x3f;
  uVar4 = 0;
  dVar6 = DAT_10006380;
  do {
    uVar5 = 1L << ((byte)lVar1 & 0x3f);
    if (dVar7 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(dVar7 < dVar6) & (ulong)dVar7 |
                    ~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6));
    lVar2 = lVar1 + -1;
    uVar3 = 1L << ((byte)lVar2 & 0x3f);
    dVar6 = dVar6 * DAT_10006310;
    if (dVar7 < dVar6) {
      uVar3 = 0;
    }
    dVar7 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                    -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar4 = uVar3 | uVar5 | uVar4;
    dVar6 = dVar6 * DAT_10006310;
    lVar1 = lVar1 + -2;
  } while (lVar2 != 0);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}

#undef DAT_10006310
#undef DAT_10006380
#undef DAT_10006390
#undef _DAT_10006390

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006380
#define DAT_10006380 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039e0
 */

ulong recovered_100039e0(double param_1)

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
  dVar6 = DAT_10006380;
  do {
    uVar5 = 1L << ((byte)lVar3 & 0x3f);
    if (param_1 < dVar6) {
      uVar5 = 0;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar6) & (ulong)param_1 |
                    ~-(ulong)(param_1 < dVar6) & (ulong)(param_1 - dVar6));
    lVar4 = lVar3 + -1;
    uVar1 = 1L << ((byte)lVar4 & 0x3f);
    dVar6 = dVar6 * DAT_10006310;
    if (dVar7 < dVar6) {
      uVar1 = 0;
    }
    param_1 = (double)(~-(ulong)(dVar7 < dVar6) & (ulong)(dVar7 - dVar6) |
                      -(ulong)(dVar7 < dVar6) & (ulong)dVar7);
    uVar2 = uVar1 | uVar5 | uVar2;
    dVar6 = dVar6 * DAT_10006310;
    lVar3 = lVar3 + -2;
  } while (lVar4 != 0);
  return uVar2;
}

#undef DAT_10006310
#undef DAT_10006380

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a90
 */

double recovered_10003a90(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;

  if (param_1 == 0) {
    return 0.0;
  }
  dVar2 = 0.0;
  dVar3 = DAT_10006318;
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

#undef DAT_10006318

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003ae0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((long)param_1 < 0) {
    dVar4 = 0.0;
    uVar2 = -param_1;
    dVar3 = DAT_10006318;
    do {
      if ((uVar2 & 1) != 0) {
        dVar4 = dVar4 + dVar3;
      }
      dVar3 = dVar3 + dVar3;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
    return (double)((ulong)dVar4 ^ _DAT_10006390);
  }
  dVar3 = 0.0;
  if (param_1 != 0) {
    dVar4 = DAT_10006318;
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

#undef DAT_10006318
#undef DAT_10006390
#undef _DAT_10006390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b70
 */

float recovered_10003b70(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef UNK_10006394
#define UNK_10006394 (*(uint *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint *)(((uintptr_t)pf_module_state + 0x80U)))
#undef uRam0000000010006394
#define uRam0000000010006394 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003bc0(float param_1,int *param_2)

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
    dVar2 = pf_bits_double(CONCAT44((uint)((ulong)dVar2 >> 0x20) ^ uRam0000000010006394,
                             SUB84(dVar2,0) ^ _DAT_10006390));
  }
  iVar1 = 0;
  if (DAT_10006318 <= dVar2) {
    iVar1 = 0;
    do {
      dVar2 = dVar2 * DAT_10006310;
      iVar1 = iVar1 + 1;
    } while (DAT_10006318 <= dVar2);
  }
  for (; (0.0 < dVar2 && (dVar2 < DAT_10006310)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_1 < 0.0) {
    dVar2 = (double)((ulong)dVar2 ^ CONCAT44(uRam0000000010006394,_DAT_10006390));
  }
  return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
}

#undef DAT_10006310
#undef DAT_10006318
#undef DAT_10006390
#undef UNK_10006394
#undef _DAT_10006390
#undef uRam0000000010006394

#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c80
 */

undefined8 recovered_10003c80(float param_1,uint param_2)

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
          dVar3 = dVar3 * DAT_10006310;
          iVar2 = iVar2 + -1;
        } while (-(-param_2 & 7) != iVar2);
        uVar1 = param_2 - iVar2;
      }
      if (param_2 < 0xfffffff9) {
        do {
          dVar3 = dVar3 * DAT_10006310 * DAT_10006310 * DAT_10006310 * DAT_10006310 * DAT_10006310 *
                  DAT_10006310 * DAT_10006310 * DAT_10006310;
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

#undef DAT_10006310

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006420
#define DAT_10006420 (*(float *)(((uintptr_t)pf_module_state + 0x110U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d70
 */

float recovered_10003d70(float param_1,float param_2)

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
    return DAT_10006420;
  }
  dVar5 = (double)param_1;
  uVar3 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar3 = uVar2;
  }
  dVar4 = DAT_10006318;
  do {
    if ((uVar3 & 1) != 0) {
      dVar4 = dVar4 * dVar5;
    }
    dVar5 = dVar5 * dVar5;
    bVar1 = 1 < uVar3;
    uVar3 = uVar3 >> 1;
  } while (bVar1);
  if ((int)uVar2 < 0) {
    dVar4 = DAT_10006318 / dVar4;
  }
  return (float)dVar4;
}

#undef DAT_10006318
#undef DAT_10006420

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e00
 */

undefined8 recovered_10003e00(undefined1 in_XMM0 [16],ulong in_XMM2_Qb)

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


#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

float recovered_10003e40(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)((double)param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  uVar1 = -(ulong)(dVar2 < (double)param_1);
  return (float)(double)(~uVar1 & (ulong)dVar2 | (ulong)(DAT_10006318 + dVar2) & uVar1);
}

#undef DAT_10006318

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

double recovered_10003ea0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1
                  );
  if (param_1 < 0.0) {
    dVar2 = (double)(~-(ulong)(dVar2 < param_1) & (ulong)dVar2 |
                    (ulong)(DAT_10006318 + dVar2) & -(ulong)(dVar2 < param_1));
  }
  return dVar2;
}

#undef DAT_10006318

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f00
 */

undefined8 recovered_10003f00(undefined8 param_1)

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
    PF_PART8(auVar5, 0) = ~uVar1 & (ulong)dVar3 | (ulong)(DAT_10006318 + dVar3) & uVar1;
  }
  PF_PART12(auVar6, 4) = PF_PART12(auVar5, 4);
  (*(float *)((uint8_t *)&(auVar6)+0)) = (float)(*(double *)((uint8_t *)&(auVar5)+0));
  return PF_PART8(auVar6, 0);
}

#undef DAT_10006318

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

float recovered_10003f70(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003470((double)param_1);
  return (float)dVar1;
}


#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006328
#define DAT_10006328 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10006330
#define DAT_10006330 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10006338
#define DAT_10006338 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10006340
#define DAT_10006340 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10006348
#define DAT_10006348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_100063a0
#define DAT_100063a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90U)))
#undef DAT_100063b0
#define DAT_100063b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef DAT_100063c0
#define DAT_100063c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef DAT_100063d0
#define DAT_100063d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef DAT_10006424
#define DAT_10006424 (*(float *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_10006428
#define DAT_10006428 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x118U)))
#undef _DAT_10006340
#define _DAT_10006340 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_10006348
#define _DAT_10006348 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_100063a0
#define _DAT_100063a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x90U)))
#undef _DAT_100063b0
#define _DAT_100063b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef _DAT_100063c0
#define _DAT_100063c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef _DAT_100063d0
#define _DAT_100063d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef _DAT_10006428
#define _DAT_10006428 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10003f90(float param_1)

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
    if (_DAT_10006428 < param_1) {
      iVar1 = 0;
      do {
        dVar2 = dVar2 * DAT_10006310;
        iVar1 = iVar1 + 1;
      } while (DAT_10006328 < dVar2);
    }
    for (; dVar2 < DAT_10006330; dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = (DAT_10006338 + dVar2) / (dVar2 + DAT_10006318);
    dVar2 = dVar4 * dVar4;
    (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar4 * dVar2;
    (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
    auVar6 = divpd(auVar3,_DAT_100063a0);
    (*(double *)((uint8_t *)&(auVar5)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar5)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0));
    auVar3 = divpd(auVar5,_DAT_100063b0);
    (*(double *)((uint8_t *)&(auVar8)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar5)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar8)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0));
    auVar5 = divpd(auVar8,_DAT_100063c0);
    (*(double *)((uint8_t *)&(auVar7)+0)) = dVar2 * (*(double *)((uint8_t *)&(auVar8)+0)) * dVar2;
    (*(double *)((uint8_t *)&(auVar7)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar7)+0));
    auVar8 = divpd(auVar7,_DAT_100063d0);
    dVar2 = (*(double *)((uint8_t *)&(auVar8)+8)) +
            (*(double *)((uint8_t *)&(auVar5)+8)) +
            (*(double *)((uint8_t *)&(auVar3)+8)) +
            (*(double *)((uint8_t *)&(auVar6)+8)) + (dVar4 * dVar2) / _DAT_10006340 + dVar4 + 0.0 + (*(double *)((uint8_t *)&(auVar6)+0)) +
            (*(double *)((uint8_t *)&(auVar3)+0)) + (*(double *)((uint8_t *)&(auVar5)+0)) + (*(double *)((uint8_t *)&(auVar8)+0));
    return (float)(dVar2 + dVar2 + (double)iVar1 * _DAT_10006348);
  }
  return DAT_10006424;
}

#undef DAT_10006310
#undef DAT_10006318
#undef DAT_10006328
#undef DAT_10006330
#undef DAT_10006338
#undef DAT_10006340
#undef DAT_10006348
#undef DAT_100063a0
#undef DAT_100063b0
#undef DAT_100063c0
#undef DAT_100063d0
#undef DAT_10006424
#undef DAT_10006428
#undef _DAT_10006340
#undef _DAT_10006348
#undef _DAT_100063a0
#undef _DAT_100063b0
#undef _DAT_100063c0
#undef _DAT_100063d0
#undef _DAT_10006428

#undef DAT_100063e0
#define DAT_100063e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e0
 */

long recovered_100040e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_100063e0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100063e0

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006350
#define DAT_10006350 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10006358
#define DAT_10006358 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10006360
#define DAT_10006360 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10006368
#define DAT_10006368 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10006370
#define DAT_10006370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_100063f0
#define DAT_100063f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0U)))
#undef _DAT_10006370
#define _DAT_10006370 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_100063f0
#define _DAT_100063f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10004110(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  for (dVar1 = (double)param_1; DAT_10006350 < dVar1; dVar1 = dVar1 + DAT_10006358) {
  }
  for (; dVar1 < DAT_10006360; dVar1 = dVar1 + DAT_10006368) {
  }
  dVar2 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar3)+0)) = dVar2 * dVar2;
  (*(double *)((uint8_t *)&(auVar3)+8)) = dVar2 * (*(double *)((uint8_t *)&(auVar3)+0));
  auVar3 = divpd(auVar3,_DAT_100063f0);
  return (float)(((dVar2 / _DAT_10006370 + DAT_10006318 + (*(double *)((uint8_t *)&(auVar3)+0))) - (*(double *)((uint8_t *)&(auVar3)+8))) * dVar1);
}

#undef DAT_10006318
#undef DAT_10006350
#undef DAT_10006358
#undef DAT_10006360
#undef DAT_10006368
#undef DAT_10006370
#undef DAT_100063f0
#undef _DAT_10006370
#undef _DAT_100063f0

#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006350
#define DAT_10006350 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10006358
#define DAT_10006358 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10006360
#define DAT_10006360 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10006368
#define DAT_10006368 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10006378
#define DAT_10006378 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10006400
#define DAT_10006400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0U)))
#undef _DAT_10006400
#define _DAT_10006400 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100041c0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;

  for (dVar1 = (double)param_1; DAT_10006350 < dVar1; dVar1 = dVar1 + DAT_10006358) {
  }
  for (; dVar1 < DAT_10006360; dVar1 = dVar1 + DAT_10006368) {
  }
  dVar1 = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar1 * dVar1;
  (*(double *)((uint8_t *)&(auVar2)+8)) = dVar1 * (*(double *)((uint8_t *)&(auVar2)+0));
  auVar2 = divpd(auVar2,_DAT_10006400);
  return (float)((DAT_10006378 * dVar1 + DAT_10006318 + (*(double *)((uint8_t *)&(auVar2)+0))) - (*(double *)((uint8_t *)&(auVar2)+8)));
}

#undef DAT_10006318
#undef DAT_10006350
#undef DAT_10006358
#undef DAT_10006360
#undef DAT_10006368
#undef DAT_10006378
#undef DAT_10006400
#undef _DAT_10006400

#undef DAT_10006410
#define DAT_10006410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef UNK_10006414
#define UNK_10006414 (*(uint *)(((uintptr_t)pf_module_state + 0x104U)))
#undef _DAT_10006410
#define _DAT_10006410 (*(uint *)(((uintptr_t)pf_module_state + 0x100U)))
#undef uRam0000000010006414
#define uRam0000000010006414 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x104U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004260(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)param_1;
  fVar2 = (float)(_DAT_10006410 ^ (uint)fVar1);
  if ((float)(_DAT_10006410 ^ (uint)fVar1) <= fVar1) {
    fVar2 = fVar1;
  }
  return CONCAT44(uRam0000000010006414 ^ (uint)((ulong)param_1 >> 0x20),fVar2);
}

#undef DAT_10006410
#undef UNK_10006414
#undef _DAT_10006410
#undef uRam0000000010006414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004280
 */

long recovered_10004280(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_10006310
#define DAT_10006310 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10006318
#define DAT_10006318 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10006388
#define DAT_10006388 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100044e0(byte *param_1,undefined8 *param_2)

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
    dVar11 = dVar11 * DAT_10006388 + (double)(int)(uVar4 - 0x30);
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
      dVar13 = DAT_10006318;
      do {
        dVar12 = dVar12 * DAT_10006388 + (double)(int)(uVar4 - 0x30);
        dVar13 = dVar13 * DAT_10006388;
        pbVar5 = pbVar3 + 1;
        uVar4 = (uint)*pbVar5;
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      dVar12 = dVar12 / dVar13;
      goto LAB_100045b9;
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
LAB_100045b9:
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
                dVar11 = dVar11 * DAT_10006310;
                iVar10 = iVar10 + -1;
              } while (-uVar8 != iVar10);
              uVar8 = uVar4 - iVar10;
            }
            if (uVar4 < 0xfffffff9) {
              do {
                dVar11 = dVar11 * DAT_10006310 * DAT_10006310 * DAT_10006310 * DAT_10006310 *
                         DAT_10006310 * DAT_10006310 * DAT_10006310 * DAT_10006310;
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
    dVar11 = (double)((ulong)dVar11 ^ _DAT_10006390);
  }
  return dVar11;
}

#undef DAT_10006310
#undef DAT_10006318
#undef DAT_10006388
#undef DAT_10006390
#undef _DAT_10006390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004740
 */

float recovered_10004740(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100044e0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_10006388
#define DAT_10006388 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10006390
#define DAT_10006390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_10006431
#define DAT_10006431 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x121U)))
#undef _DAT_10006390
#define _DAT_10006390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef str_10006438
#define str_10006438 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_10006449
#define str_10006449 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#define local_38 (*(uint * *)(frame + 88))
#define abStack_7a (*(byte (*)[66])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004750(byte *param_1,ulong param_2,byte *param_3,uint *param_4)

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
  uVar6 = _DAT_10006390;
  dVar5 = DAT_10006388;
  uVar12 = 0;
  uVar23 = param_2;
LAB_100047b9:
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
      goto LAB_100047d2;
    }
    goto LAB_100047b3;
  }
  bVar7 = param_3[1];
  if (bVar7 == 0x25) {
    if (1 < uVar23) {
      *param_1 = 0x25;
      param_1 = param_1 + 1;
      uVar23 = uVar23 - 1;
    }
    param_3 = param_3 + 1;
    goto LAB_100047b3;
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
        goto joined_r0x10004863;
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
joined_r0x10004863:
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
LAB_10004c62:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
      }
      goto LAB_10004c6e;
    case '\a':
      if (0x28 < uVar2) goto LAB_10004c62;
      puVar9 = (ulong *)(*(long *)(param_4 + 4) + uVar12);
      *param_4 = uVar2 + 8;
LAB_10004c6e:
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
      abStack_7a[uVar18 + 2] = str_10006449[uVar22 % 10];
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
    goto LAB_100047b6;
  default:
    if (1 < uVar23) {
      *param_1 = 0x3f;
LAB_100047d2:
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
LAB_10004e83:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10004e83;
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
    pcVar20 = str_10006449;
    if (*param_3 == 0x58) {
      pcVar20 = str_10006438;
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
    goto LAB_100047b9;
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
      goto LAB_100047d2;
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
        abStack_7a[uVar17 + 2] = str_10006449[uVar22 % 10];
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
    goto LAB_100047b9;
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
      abStack_7a[uVar17 + 2] = str_10006449[(uint)uVar22 & 0xf];
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
    goto LAB_100047b9;
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
      pbVar13 = &DAT_10006431;
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
    goto LAB_100047b6;
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
LAB_10005103:
        puVar9 = *(ulong **)(param_4 + 2);
        *(ulong **)(param_4 + 2) = puVar9 + 1;
        uVar12 = *puVar9;
      }
      break;
    case '\a':
      if (0x28 < uVar19) goto LAB_10005103;
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
      abStack_7a[uVar18 + 2] = str_10006449[uVar12 % 10];
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
    goto LAB_100047b9;
  }
LAB_100047b3:
  uVar12 = (ulong)(uVar19 + 1);
LAB_100047b6:
  param_3 = param_3 + 1;
  goto LAB_100047b9;
}

#undef DAT_10006388
#undef DAT_10006390
#undef DAT_10006431
#undef _DAT_10006390
#undef str_10006438
#undef str_10006449
#undef local_38
#undef abStack_7a

int recovered_100055d0(char *buffer,size_t capacity,const char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,capacity,format,args);__builtin_va_end(args);return result;}


#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_02000010
#define DAT_02000010 (*(uint8_t *)(0x2000010U))
#undef DAT_02000018
#define DAT_02000018 (*(uint8_t *)(0x2000018U))
#undef DAT_10007068
#define DAT_10007068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd58U)))
#undef DAT_10007070
#define DAT_10007070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xd60U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(uint64_t *)(0x2000000U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint64_t *)(0x2000008U))
#undef _DAT_02000010
#define _DAT_02000010 (*(uint64_t *)(0x2000010U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005650(ulong param_1,ulong param_2,ulong *param_3)

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
        if (DAT_10007068 == 0) {
          puVar4 = (ulong *)&DAT_10007068;
        }
        *puVar4 = (ulong)plVar2;
        *param_3 = (ulong)plVar2;
        if (DAT_10007070 == (long *)0x0) {
          DAT_10007070 = plVar2;
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
      if (DAT_10007068 == 0) {
        puVar1 = &DAT_10007068;
      }
      *puVar1 = 0x2000000;
      *param_3 = 0x2000000;
      if (DAT_10007070 == (long *)0x0) {
        DAT_10007070 = (long *)&DAT_02000000;
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
      if (DAT_10007068 == 0) {
        puVar4 = (ulong *)&DAT_10007068;
      }
      *puVar4 = (ulong)plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10007070 == (long *)0x0) {
        DAT_10007070 = plVar2;
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
#undef DAT_10007068
#undef DAT_10007070
#undef _DAT_02000000
#undef _DAT_02000008
#undef _DAT_02000010

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000693c
#define DAT_0000693c (*(uint8_t *)(0x693cU))
#undef DAT_10006463
#define DAT_10006463 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef DAT_100064cc
#define DAT_100064cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef Ram000000000000693c
#define Ram000000000000693c (*(uint32_t *)(0x693cU))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_00006910
#define UINT_00006910 (*(uint *)(0x6910U))
#undef str_1000645a
#define str_1000645a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#undef str_10006468
#define str_10006468 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158U)))
#undef str_10006480
#define str_10006480 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x170U)))
#undef str_100064a3
#define str_100064a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#define local_4088 (*(byte (*)[496])(frame + 24))
#define local_3e98 (*(int (*)[3909])(frame + 520))
#define local_184 (*(uint *)(frame + 16156))
#define local_180 (*(uint *)(frame + 16160))
#define local_13f (*(char (*)[99])(frame + 16225))
#define local_dc (*(uint *)(frame + 16324))
#define local_d8 (*(char *)(frame + 16328))
#define local_97 (*(char (*)[99])(frame + 16393))
#define local_34 (*(uint *)(frame + 16492))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005810
 */

int recovered_10005810(void)

{
  unsigned char frame[16576] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 *in_R8;
  ulong uVar9;
  int *piVar10;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  local_34 = 0;
  iVar5 = Ram0000000000006800;
  iVar3 = -1;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0xbf < uVar4)) {
    uVar4 = UINT_000068bc;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      iVar3 = (*(code *)(ulong)uVar4)();
    }
  }
  recovered_10001c50((byte *)&local_dc,0,0xa8);
  local_dc = 0x180000;
  pf_varargs_100055d0__8_(local_97,0x20,&DAT_100064cc,((uintptr_t)pf_module_state + 0x153U));
  if ((iVar3 < 0) ||
     (uVar6 = recovered_10005d80(iVar3,&local_dc,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa), (char)uVar6 == '\0')) {
    recovered_10001c50(local_4088,0,0x3f00);
    iVar5 = Ram0000000000006800;
    if (((iVar5 == 0x50414d57) &&
        ((iVar5 = Ram0000000000006804, iVar5 != 0 && (uVar4 = Ram0000000000006808, 0xb < uVar4))))
       && (uVar4 = Ram0000000000006808, 0xc3 < uVar4)) {
      uVar4 = UINT_000068c0;
      if (((code *)(ulong)uVar4 != (code *)0x0) &&
         (uVar4 = (*(code *)(ulong)uVar4)(local_4088,0x20,&local_34), uVar4 != 0)) {
        if (local_34 < 0x21) {
          if (local_34 == 0) goto LAB_100059f8;
        }
        else {
          local_34 = 0x20;
        }
        piVar10 = local_3e98;
        uVar9 = 0;
        do {
          recovered_10001c50((byte *)&local_184,0,0xa8);
          local_184 = 0x180000;
          puVar7 = &DAT_10006463;
          pf_varargs_100055d0__8_(local_13f,0x20,&DAT_100064cc,((uintptr_t)pf_module_state + 0x153U));
          uVar6 = recovered_10005d80(*piVar10,&local_184,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa
                                     ,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
          if ((char)uVar6 != '\0') {
            recovered_10000f50((undefined8 *)&local_dc,(undefined8 *)&local_184,0xa8,puVar7,in_R8);
            iVar3 = *piVar10;
            break;
          }
          uVar9 = uVar9 + 1;
          piVar10 = piVar10 + 0x7e;
        } while (uVar9 < local_34);
      }
    }
  }
LAB_100059f8:
  if (local_dc == 0) {
    local_dc = 0x180000;
  }
  local_34 = 0;
  iVar1 = Ram0000000000006800;
  iVar5 = -1;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0xbf < uVar4)) {
    uVar4 = UINT_000068bc;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      iVar5 = (*(code *)(ulong)uVar4)();
    }
  }
  recovered_10001c50(local_4088,0,0x3f00);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0xc3 < uVar4)))) {
    uVar4 = UINT_000068c0;
    if (((code *)(ulong)uVar4 != (code *)0x0) &&
       (uVar4 = (*(code *)(ulong)uVar4)(local_4088,0x20,&local_34), uVar4 != 0)) {
      if (local_34 < 0x21) {
        if (local_34 == 0) goto LAB_10005ba3;
      }
      else {
        local_34 = 0x20;
      }
      piVar10 = local_3e98;
      uVar9 = 0;
      do {
        recovered_10001c50((byte *)&local_184,0,0x8c);
        iVar1 = Ram0000000000006800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
            (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
           (uVar4 = Ram0000000000006808, 0x113 < uVar4)) {
          uVar4 = UINT_00006910;
          if ((((code *)(ulong)uVar4 != (code *)0x0) &&
              (uVar4 = (*(code *)(ulong)uVar4)(*piVar10,&local_184), uVar4 != 0)) &&
             ((local_180 & 10) == 2)) {
            if ((local_180 & 4) == 0) {
              iVar5 = *piVar10;
              break;
            }
            if (iVar5 < 0) {
              iVar5 = *piVar10;
            }
          }
        }
        uVar9 = uVar9 + 1;
        piVar10 = piVar10 + 0x7e;
      } while (uVar9 < local_34);
    }
  }
LAB_10005ba3:
  uVar4 = local_dc;
  pcVar8 = &DAT_10006463;
  if (local_97[0] != '\0') {
    pcVar8 = local_97;
  }
  pf_varargs_100055d0__8_((char *)local_4088,0xf1,str_1000645a,(ulonglong)pcVar8);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x13f < uVar2)))) {
    uVar2 = Ram000000000000693c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(0,iVar5,iVar3,local_dc,uVar4 << 10,uVar4 >> 0x16,local_97,local_4088);
    }
  }
  iVar3 = Ram0000000000006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x43 < uVar2)) {
    uVar2 = UINT_00006840;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(str_10006468);
    }
  }
  if (local_d8 == '\x01') {
    iVar3 = Ram0000000000006800;
    if ((((iVar3 != 0x50414d57) || (iVar3 = Ram0000000000006804, iVar3 == 0)) ||
        (uVar4 = Ram0000000000006808, uVar4 < 0xc)) ||
       ((uVar4 = Ram0000000000006808, uVar4 < 0x44 || (uVar4 = UINT_00006840, uVar4 == 0))))
    goto LAB_10005d30;
    pcVar8 = str_10006480;
  }
  else {
    if (((uVar4 == 0) || (iVar3 = Ram0000000000006800, iVar3 != 0x50414d57)) ||
       (((iVar3 = Ram0000000000006804, iVar3 == 0 ||
         ((uVar4 = Ram0000000000006808, uVar4 < 0xc || (uVar4 = Ram0000000000006808, uVar4 < 0x44)))
         ) || (uVar4 = UINT_00006840, uVar4 == 0)))) goto LAB_10005d30;
    pcVar8 = str_100064a3;
  }
  (*(code *)(ulong)uVar4)(pcVar8);
LAB_10005d30:
  do {
    do {
      do {
        iVar3 = Ram0000000000006800;
      } while (iVar3 != 0x50414d57);
      iVar3 = Ram0000000000006804;
    } while (((iVar3 == 0) || (uVar4 = Ram0000000000006808, uVar4 < 0xc)) ||
            (uVar4 = Ram0000000000006808, uVar4 < 0xa0));
    uVar4 = UINT_0000689c;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      (*(code *)(ulong)uVar4)();
    }
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000693c
#undef DAT_10006463
#undef DAT_100064cc
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef Ram000000000000693c
#undef UINT_00006840
#undef UINT_0000689c
#undef UINT_000068bc
#undef UINT_000068c0
#undef UINT_00006910
#undef str_1000645a
#undef str_10006468
#undef str_10006480
#undef str_100064a3
#undef local_4088
#undef local_3e98
#undef local_184
#undef local_180
#undef local_13f
#undef local_dc
#undef local_d8
#undef local_97
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100064cc
#define DAT_100064cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef DAT_10006517
#define DAT_10006517 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207U)))
#undef DAT_10006519
#define DAT_10006519 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef DAT_1000651e
#define DAT_1000651e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20eU)))
#undef DAT_10006522
#define DAT_10006522 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x212U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef str_100064cf
#define str_100064cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bfU)))
#undef str_100064e0
#define str_100064e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_100064e8
#define str_100064e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d8U)))
#undef str_100064f2
#define str_100064f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e2U)))
#undef str_10006500
#define str_10006500 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_10006509
#define str_10006509 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#define local_188 (*(byte (*)[128])(frame + 24))
#define local_108 (*(byte (*)[48])(frame + 152))
#define local_d8 (*(byte (*)[104])(frame + 200))
#define local_70 (*(char * *)(frame + 304))
#define local_68 (*(char * *)(frame + 312))
#define local_60 (*(char * *)(frame + 320))
#define local_54 (*(uint *)(frame + 332))
#define local_50 (*(uint *)(frame + 336))
#define local_48 (*(undefined8 * *)(frame + 344))
#define local_40 (*(ulong *)(frame + 352))
#define local_38 (*(uint * *)(frame + 360))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d80
 */

undefined8
recovered_10005d80(int param_1,uint *param_2,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa)

{
  unsigned char frame[448] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  char *buffer;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar2 = 0;
  local_38 = param_2;
  recovered_10001c50((byte *)&local_54,0,0xc);
  iVar3 = Ram0000000000006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
      (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0xcb < uVar1)) {
    uVar1 = UINT_000068c8;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar1)(param_1,str_100064cf,&local_54);
    }
  }
  else {
    iVar3 = Ram0000000000006800;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
       ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x37 < uVar1))))
    {
      uVar1 = UINT_00006834;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar1)(str_100064cf,&local_54);
      }
    }
  }
  if (local_54 == 0 || (local_50 == 0 || uVar2 == 0)) {
    return 0;
  }
  puVar4 = (undefined8 *)(ulong)local_50;
  uVar12 = (ulong)local_54;
  local_60 = (char *)((long)local_38 + 0x65);
  local_68 = (char *)((long)local_38 + 0x45);
  local_70 = (char *)((long)local_38 + 5);
  local_48 = (undefined8 *)0x0;
  local_40 = uVar12;
LAB_10005ed0:
  uVar7 = 0;
  do {
    puVar14 = local_48;
    uVar10 = uVar7;
    if (*(byte *)(uVar12 + (long)local_48) == 10) break;
    uVar10 = uVar7 | 1;
    puVar14 = (undefined8 *)((long)local_48 + 1);
    local_188[uVar7] = *(byte *)(uVar12 + (long)local_48);
    if (puVar4 <= puVar14) break;
    if (*(byte *)(uVar12 + (long)puVar14) == 10) break;
    if (uVar7 == 0x7e) {
      uVar10 = 0x7f;
      break;
    }
    uVar7 = uVar7 + 2;
    local_48 = (undefined8 *)((long)local_48 + 2);
    local_188[uVar10] = *(byte *)(uVar12 + (long)puVar14);
    puVar14 = local_48;
    uVar10 = uVar7;
  } while (local_48 < puVar4);
  if (puVar14 < puVar4) {
    puVar14 = (undefined8 *)((long)puVar14 + 1);
    do {
      if (*(char *)((uVar12 - 1) + (long)puVar14) == '\n') goto LAB_10005f90;
      puVar13 = (undefined8 *)((long)puVar14 + 1);
      bVar17 = puVar14 != puVar4;
      puVar14 = puVar13;
    } while (bVar17);
    local_48 = puVar4;
  }
  else {
LAB_10005f90:
    local_48 = puVar14;
  }
  local_188[uVar10] = 0;
  pbVar15 = local_188;
  pbVar16 = pbVar15;
  while (((ulong)*pbVar16 < 0x21 && ((0x100002600U >> ((ulong)*pbVar16 & 0x3f) & 1) != 0))) {
    pbVar16 = pbVar16 + 1;
    pbVar15 = pbVar15 + 1;
  }
  lVar5 = recovered_100029c0((long)pbVar16);
  pbVar8 = pbVar16 + lVar5;
  if (0 < lVar5) {
    do {
      if ((0x20 < (ulong)pbVar8[-1]) || ((0x100002600U >> ((ulong)pbVar8[-1] & 0x3f) & 1) == 0))
      break;
      pbVar8 = pbVar8 + -1;
    } while (pbVar16 < pbVar8);
  }
  *pbVar8 = 0;
  pbVar6 = (byte *)recovered_10002f10((char *)pbVar16,'=');
  if (pbVar6 != (byte *)0x0) {
    if (pbVar6 != pbVar15) {
      pbVar11 = pbVar6;
      do {
        if ((0x20 < (ulong)pbVar11[-1]) || ((0x100002600U >> ((ulong)pbVar11[-1] & 0x3f) & 1) == 0))
        goto LAB_100060a0;
        pbVar11 = pbVar11 + -1;
      } while (pbVar15 != pbVar11);
    }
    goto LAB_10006048;
  }
  goto LAB_10005ec0;
  while( true ) {
    pbVar16 = pbVar16 + 1;
    pbVar15 = pbVar15 + 1;
    if (pbVar11 == pbVar15) break;
LAB_100060a0:
    if ((0x20 < (ulong)*pbVar16) || ((0x100002600U >> ((ulong)*pbVar16 & 0x3f) & 1) == 0)) {
      uVar12 = (long)pbVar11 - (long)pbVar15;
      goto LAB_1000604a;
    }
  }
  pbVar16 = pbVar11;
LAB_10006048:
  uVar12 = 0;
LAB_1000604a:
  if (0x2e < uVar12) {
    uVar12 = 0x2f;
  }
  recovered_10000f50((undefined8 *)local_108,(undefined8 *)pbVar16,uVar12,pbVar8,puVar14);
  local_108[uVar12] = 0;
  pbVar15 = pbVar6;
  while( true ) {
    pbVar15 = pbVar15 + 1;
    if ((0x20 < (ulong)*pbVar15) || ((0x100002600U >> ((ulong)*pbVar15 & 0x3f) & 1) == 0)) break;
    pbVar6 = pbVar6 + 1;
  }
  uVar12 = recovered_100029c0((long)pbVar15);
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    pbVar6 = pbVar6 + uVar12;
    do {
      if ((0x20 < (ulong)*pbVar6) || ((0x100002600U >> ((ulong)*pbVar6 & 0x3f) & 1) == 0))
      goto LAB_10006119;
      pbVar6 = pbVar6 + -1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar12 = 0;
  }
LAB_10006119:
  pbVar16 = local_d8;
  if (0x5e < uVar12) {
    uVar12 = 0x5f;
  }
  recovered_10000f50((undefined8 *)pbVar16,(undefined8 *)pbVar15,uVar12,pbVar8,puVar14);
  local_d8[uVar12] = 0;
  iVar3 = recovered_100029f0(local_108,(byte *)str_100064e0);
  if (iVar3 == 0) {
    pbVar15 = local_d8;
    while( true ) {
      pbVar15 = pbVar15 + 1;
      bVar9 = *pbVar16;
      if ((0x20 < (ulong)bVar9) || ((0x100002600U >> ((ulong)bVar9 & 0x3f) & 1) == 0)) break;
      pbVar16 = pbVar16 + 1;
    }
    bVar9 = bVar9 - 0x30U;
    if (bVar9 < 10) {
      uVar2 = 0;
      do {
        if (~(uint)bVar9 / 10 < uVar2) goto LAB_1000622e;
        uVar2 = (uint)bVar9 + uVar2 * 10;
        bVar9 = *pbVar15 - 0x30U;
        pbVar15 = pbVar15 + 1;
      } while (bVar9 < 10);
    }
    else {
LAB_1000622e:
      uVar2 = 0x180000;
    }
    *local_38 = uVar2;
    uVar12 = local_40;
  }
  else {
    iVar3 = recovered_100029f0(local_108,(byte *)str_100064e8);
    uVar12 = local_40;
    if (iVar3 == 0) {
      pbVar15 = local_d8;
      while (((ulong)*pbVar15 < 0x21 && ((0x100002600U >> ((ulong)*pbVar15 & 0x3f) & 1) != 0))) {
        pbVar15 = pbVar15 + 1;
      }
      iVar3 = recovered_100029f0(pbVar15,&DAT_10006517);
      bVar17 = true;
      if (((iVar3 != 0) && (iVar3 = recovered_100029f0(pbVar15,&DAT_10006519), iVar3 != 0)) &&
         (iVar3 = recovered_100029f0(pbVar15,&DAT_1000651e), iVar3 != 0)) {
        iVar3 = recovered_100029f0(pbVar15,&DAT_10006522);
        bVar17 = iVar3 == 0;
      }
      *(bool *)(local_38 + 1) = bVar17;
      uVar12 = local_40;
    }
    else {
      iVar3 = recovered_100029f0(local_108,(byte *)str_100064f2);
      if (iVar3 == 0) {
        uVar7 = 0x40;
        buffer = local_70;
      }
      else {
        iVar3 = recovered_100029f0(local_108,(byte *)str_10006500);
        if (iVar3 == 0) {
          uVar7 = 0x20;
          buffer = local_68;
        }
        else {
          iVar3 = recovered_100029f0(local_108,(byte *)str_10006509);
          if (iVar3 != 0) goto LAB_10005ec0;
          uVar7 = 0x40;
          buffer = local_60;
        }
      }
      pf_varargs_100055d0__8_(buffer,uVar7,&DAT_100064cc,(ulonglong)local_d8);
    }
  }
LAB_10005ec0:
  puVar4 = (undefined8 *)(ulong)local_50;
  if (puVar4 <= local_48) {
    return CONCAT71((uint7)(uint3)(local_50 >> 8),1);
  }
  goto LAB_10005ed0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100064cc
#undef DAT_10006517
#undef DAT_10006519
#undef DAT_1000651e
#undef DAT_10006522
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8
#undef str_100064cf
#undef str_100064e0
#undef str_100064e8
#undef str_100064f2
#undef str_10006500
#undef str_10006509
#undef local_188
#undef local_108
#undef local_d8
#undef local_70
#undef local_68
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_38
