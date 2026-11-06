/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1001f0f0
#define DAT_1001f0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cedU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004c0
 */

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
#undef DAT_1001f0f0
#define DAT_1001f0f0 (*(char *)(((uintptr_t)pf_module_state + 0x1cedU)))
#undef DAT_1001f0f8
#define DAT_1001f0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cf5U)))
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
#define local_428 (*(ulong (*)[130])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100004e0(void)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;

  if (DAT_1001f0f0 != '\0') {
    return;
  }
  DAT_1001f0f8 = 0;
  uVar6 = 0x10;
  if (_DAT_0000608c < 0x10) {
    uVar6 = (ulong)_DAT_0000608c;
  }
  if ((_DAT_00006238 == 0x34364857) && (_DAT_0000623c != 0)) {
    uVar6 = 0x40;
    if (_DAT_0000623c < 0x40) {
      uVar6 = (ulong)_DAT_0000623c;
    }
    uVar2 = 0;
    uVar11 = 0;
    do {
      if (*(long *)(&DAT_00006248 + uVar11 * 0x10) != 0) {
        uVar13 = *(ulong *)(&DAT_00006240 + uVar11 * 0x10);
        uVar12 = *(long *)(&DAT_00006248 + uVar11 * 0x10) + uVar13;
        if ((0x300000 < uVar12) && (uVar13 < uVar12)) {
          if (uVar13 < 0x300001) {
            uVar13 = 0x300000;
          }
          if (uVar2 < 0x40) {
            if (uVar2 != 0) {
              puVar7 = local_428 + uVar2 * 2;
              uVar14 = uVar2;
              do {
                if (*puVar7 <= uVar13) goto LAB_1000055e;
                puVar7[2] = *puVar7;
                puVar7[3] = puVar7[1];
                puVar7 = puVar7 + -2;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            uVar14 = 0;
LAB_1000055e:
            local_428[uVar14 * 2 + 2] = uVar13;
            local_428[uVar14 * 2 + 3] = uVar12 - uVar13;
            uVar2 = uVar2 + 1;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
LAB_100006ae:
    if (uVar2 != 0) {
      lVar5 = 1;
      if (uVar2 != 1) {
        lVar3 = uVar2 - 1;
        puVar7 = local_428 + 4;
        lVar4 = 1;
        do {
          uVar6 = local_428[lVar4 * 2 + 1] + local_428[lVar4 * 2];
          if (uVar6 < *puVar7) {
            lVar5 = lVar4 + 1;
            uVar6 = puVar7[1];
            local_428[lVar4 * 2 + 2] = *puVar7;
            local_428[lVar4 * 2 + 3] = uVar6;
          }
          else {
            uVar2 = *puVar7 + puVar7[1];
            lVar5 = lVar4;
            if (uVar6 < uVar2) {
              local_428[lVar4 * 2 + 1] = uVar2 - local_428[lVar4 * 2];
            }
          }
          puVar7 = puVar7 + 2;
          lVar3 = lVar3 + -1;
          lVar4 = lVar5;
        } while (lVar3 != 0);
        if (lVar5 == 0) goto LAB_100007a8;
      }
      puVar7 = local_428 + 3;
      plVar9 = (long *)0x0;
      do {
        plVar10 = (long *)(puVar7[-1] + 0xf & 0xfffffffffffffff0);
        uVar2 = (long)plVar10 - puVar7[-1];
        uVar6 = *puVar7 - uVar2;
        if ((uVar2 <= *puVar7 && uVar6 != 0) && (uVar6 = uVar6 & 0xfffffffffffffff0, 0x28 < uVar6))
        {
          *plVar10 = uVar6 - 0x20;
          plVar10[1] = 0;
          *(undefined1 *)(plVar10 + 2) = 1;
          puVar8 = (ulong *)(plVar9 + 1);
          if (DAT_1001f0f8 == 0) {
            puVar8 = (ulong *)&DAT_1001f0f8;
          }
          *puVar8 = (ulong)plVar10;
          plVar9 = plVar10;
        }
        puVar7 = puVar7 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (DAT_1001f0f8 != 0) {
        DAT_1001f0f0 = 1;
        return;
      }
      goto LAB_100007b6;
    }
  }
  else if (_DAT_0000608c != 0) {
    uVar2 = 0;
    uVar11 = 0;
    do {
      uVar13 = (ulong)*(uint *)(&DAT_00006090 + uVar11 * 8);
      uVar12 = *(uint *)(&DAT_00006094 + uVar11 * 8) + uVar13;
      if (0x300000 < uVar12 && (ulong)*(uint *)(&DAT_00006094 + uVar11 * 8) != 0) {
        if (uVar13 < 0x300001) {
          uVar13 = 0x300000;
        }
        if (uVar2 < 0x40) {
          if (uVar2 != 0) {
            puVar7 = local_428 + uVar2 * 2;
            uVar14 = uVar2;
            do {
              if (*puVar7 <= uVar13) goto LAB_10000625;
              puVar7[2] = *puVar7;
              puVar7[3] = puVar7[1];
              puVar7 = puVar7 + -2;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          uVar14 = 0;
LAB_10000625:
          local_428[uVar14 * 2 + 2] = uVar13;
          local_428[uVar14 * 2 + 3] = uVar12 - uVar13;
          uVar2 = uVar2 + 1;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
    goto LAB_100006ae;
  }
LAB_100007a8:
  plVar9 = (long *)0x0;
LAB_100007b6:
  uVar1 = _DAT_00006088 & 0xfffffff0;
  if (_DAT_00006088 < 0x300001) {
    uVar1 = 0x4000000;
  }
  uVar6 = (ulong)uVar1;
  if (uVar1 < 0x300029) {
    uVar6 = 0x4000000;
  }
  if (0x28 < uVar6 - 0x300000) {
    _DAT_00300000 = uVar6 - 0x300020;
    _DAT_00300008 = 0;
    DAT_00300010 = 1;
    plVar9 = plVar9 + 1;
    if (DAT_1001f0f8 == 0) {
      plVar9 = &DAT_1001f0f8;
    }
    *plVar9 = 0x300000;
  }
  DAT_1001f0f0 = 1;
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
#undef DAT_1001f0f0
#undef DAT_1001f0f8
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef _DAT_00300000
#undef _DAT_00300008
#undef local_428

#undef DAT_1001f0f8
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1cf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000840
 */

ulong recovered_10000840(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004e0();
  uVar3 = 0;
  for (plVar1 = DAT_1001f0f8; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if ((char)plVar1[2] == '\x01') {
      uVar3 = uVar3 + *plVar1;
    }
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1001f0f8

#undef DAT_1001f0f8
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1cf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000890
 */

long recovered_10000890(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100004e0();
  lVar1 = 0;
  for (plVar2 = DAT_1001f0f8; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1001f0f8

#undef DAT_1001f0f8
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1cf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d0
 */

ulong recovered_100008d0(void)

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

#undef DAT_1001f0f8
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1cf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000910
 */

long recovered_10000910(void)

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

#undef DAT_1001f0f8
#define DAT_1001f0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1cf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000940
 */

ulong * recovered_10000940(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  recovered_100004e0();
  if (DAT_1001f0f8 != (ulong *)0x0) {
    uVar3 = param_1 + 0xfU & 0xfffffffffffffff0;
    puVar2 = DAT_1001f0f8;
    do {
      if ((char)puVar2[2] == '\x01') {
        uVar1 = *puVar2;
        if (uVar3 <= uVar1) {
          if (uVar3 + 0x30 <= uVar1) {
            *(ulong *)((long)puVar2 + uVar3 + 0x20) = (uVar1 - uVar3) + -0x20;
            *(ulong *)((long)puVar2 + uVar3 + 0x28) = puVar2[1];
            *(undefined1 *)((long)puVar2 + uVar3 + 0x30) = 1;
            *puVar2 = uVar3;
            puVar2[1] = (long)puVar2 + uVar3 + 0x20;
          }
          *(undefined1 *)(puVar2 + 2) = 0;
          return puVar2 + 4;
        }
      }
      puVar2 = (ulong *)puVar2[1];
    } while (puVar2 != (ulong *)0x0);
  }
  return (ulong *)0x0;
}

#undef DAT_1001f0f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009d0
 */

ulong recovered_100009d0(ulong param_1,uint param_2)

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
 * Address: 0x10000a10
 */

ulong recovered_10000a10(ulong param_1,uint param_2)

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
 * Address: 0x10000a50
 */

long recovered_10000a50(long param_1,uint param_2)

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
 * Address: 0x10000aa0
 */

ulong recovered_10000aa0(ulong param_1,ulong param_2)

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
 * Address: 0x10000b40
 */

long recovered_10000b40(ulong param_1,ulong param_2)

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
 * Address: 0x10000bb0
 */

ulong recovered_10000bb0(ulong param_1,ulong param_2)

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
 * Address: 0x10000c80
 */

long recovered_10000c80(ulong param_1,ulong param_2)

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
 * Address: 0x10000d10
 */

void recovered_10000d10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d30
 */

int recovered_10000d30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000d40(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000d90(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000de0(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e30
 */

void * recovered_10000e30(void *param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  if (param_3 == 0) {
    return param_1;
  }
  if ((ulong)((long)param_1 - (long)param_2) < 0x20 || param_3 < 4) {
    uVar5 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar5 = param_3 & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)param_2 + uVar6))[1];
        puVar1 = (undefined8 *)((long)param_2 + uVar6 + 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined8 *)((long)param_1 + uVar6) = *(undefined8 *)((long)param_2 + uVar6);
        ((undefined8 *)((long)param_1 + uVar6))[1] = uVar2;
        puVar1 = (undefined8 *)((long)param_1 + uVar6 + 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar5 != uVar6);
      if (uVar5 == param_3) {
        return param_1;
      }
      uVar6 = uVar5;
      if ((param_3 & 0x1c) == 0) goto LAB_10000ed6;
    }
    uVar5 = param_3 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)param_1 + uVar6) = *(undefined4 *)((long)param_2 + uVar6);
      uVar6 = uVar6 + 4;
    } while (uVar5 != uVar6);
    if (uVar5 == param_3) {
      return param_1;
    }
  }
LAB_10000ed6:
  uVar7 = param_3 & 3;
  uVar6 = uVar5;
  if (uVar7 != 0) {
    do {
      *(undefined1 *)((long)param_1 + uVar6) = *(undefined1 *)((long)param_2 + uVar6);
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uVar5 - param_3 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)param_1 + uVar6) = *(undefined1 *)((long)param_2 + uVar6);
      *(undefined1 *)((long)param_1 + uVar6 + 1) = *(undefined1 *)((long)param_2 + uVar6 + 1);
      *(undefined1 *)((long)param_1 + uVar6 + 2) = *(undefined1 *)((long)param_2 + uVar6 + 2);
      *(undefined1 *)((long)param_1 + uVar6 + 3) = *(undefined1 *)((long)param_2 + uVar6 + 3);
      uVar6 = uVar6 + 4;
    } while (param_3 != uVar6);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

void * recovered_10000f40(void *param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_3 == 0 || param_1 == param_2) {
    return param_1;
  }
  if (param_1 < param_2) {
    if ((ulong)((long)param_1 - (long)param_2) < 0x20 || param_3 < 4) {
      uVar6 = 0;
    }
    else {
      if (param_3 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar6 = param_3 & 0xffffffffffffffe0;
        uVar8 = 0;
        do {
          uVar3 = ((undefined8 *)((long)param_2 + uVar8))[1];
          puVar2 = (undefined8 *)((long)param_2 + uVar8 + 0x10);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          *(undefined8 *)((long)param_1 + uVar8) = *(undefined8 *)((long)param_2 + uVar8);
          ((undefined8 *)((long)param_1 + uVar8))[1] = uVar3;
          puVar2 = (undefined8 *)((long)param_1 + uVar8 + 0x10);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          uVar8 = uVar8 + 0x20;
        } while (uVar6 != uVar8);
        if (uVar6 == param_3) {
          return param_1;
        }
        uVar8 = uVar6;
        if ((param_3 & 0x1c) == 0) goto LAB_1000101a;
      }
      uVar6 = param_3 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)param_1 + uVar8) = *(undefined4 *)((long)param_2 + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar6 != uVar8);
      if (uVar6 == param_3) {
        return param_1;
      }
    }
LAB_1000101a:
    uVar9 = param_3 & 3;
    uVar8 = uVar6;
    if (uVar9 != 0) {
      do {
        *(undefined1 *)((long)param_1 + uVar8) = *(undefined1 *)((long)param_2 + uVar8);
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar6 - param_3 < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)param_1 + uVar8) = *(undefined1 *)((long)param_2 + uVar8);
        *(undefined1 *)((long)param_1 + uVar8 + 1) = *(undefined1 *)((long)param_2 + uVar8 + 1);
        *(undefined1 *)((long)param_1 + uVar8 + 2) = *(undefined1 *)((long)param_2 + uVar8 + 2);
        *(undefined1 *)((long)param_1 + uVar8 + 3) = *(undefined1 *)((long)param_2 + uVar8 + 3);
        uVar8 = uVar8 + 4;
      } while (param_3 != uVar8);
    }
    return param_1;
  }
  if ((ulong)((long)param_2 - (long)param_1) < 0x10 || param_3 < 4) {
LAB_10000f93:
    uVar8 = param_3;
  }
  else {
    if (param_3 < 0x10) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_3 & 0xfffffffffffffff0;
      lVar7 = 0;
      do {
        puVar2 = (undefined8 *)((long)param_2 + lVar7 + (param_3 - 0x10));
        uVar3 = puVar2[1];
        puVar1 = (undefined8 *)((long)param_1 + lVar7 + (param_3 - 0x10));
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        lVar7 = lVar7 + -0x10;
      } while (-lVar7 != uVar6);
      if (uVar6 == param_3) {
        return param_1;
      }
      if ((param_3 & 0xc) == 0) {
        param_3 = (ulong)((uint)param_3 & 0xf);
        goto LAB_10000f93;
      }
    }
    uVar8 = (ulong)((uint)param_3 & 3);
    lVar7 = -uVar6;
    do {
      *(undefined4 *)((long)param_1 + lVar7 + (param_3 - 4)) =
           *(undefined4 *)((long)param_2 + lVar7 + (param_3 - 4));
      lVar7 = lVar7 + -4;
    } while (-lVar7 != (param_3 & 0xfffffffffffffffc));
    if ((param_3 & 0xfffffffffffffffc) == param_3) {
      return param_1;
    }
  }
  uVar9 = uVar8;
  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)((long)param_1 + (uVar9 - 1)) = *(undefined1 *)((long)param_2 + (uVar9 - 1));
    uVar9 = uVar9 - 1;
  }
  if (uVar8 - 1 < 3) {
    return param_1;
  }
  do {
    *(undefined1 *)((long)param_1 + (uVar9 - 1)) = *(undefined1 *)((long)param_2 + (uVar9 - 1));
    *(undefined1 *)((long)param_1 + (uVar9 - 2)) = *(undefined1 *)((long)param_2 + (uVar9 - 2));
    *(undefined1 *)((long)param_1 + (uVar9 - 3)) = *(undefined1 *)((long)param_2 + (uVar9 - 3));
    *(undefined1 *)((long)param_1 + (uVar9 - 4)) = *(undefined1 *)((long)param_2 + (uVar9 - 4));
    uVar9 = uVar9 - 4;
  } while (uVar9 != 0);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

void * recovered_100011a0(void *param_1,int param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint128 auVar6;

  if (param_3 == 0) {
    return param_1;
  }
  uVar3 = (undefined1)param_2;
  if (param_3 < 4) {
    uVar2 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar2 = param_3 & 0xffffffffffffffe0;
      auVar6 = pshuflw(ZEXT216(CONCAT11(uVar3,uVar3)),ZEXT216(CONCAT11(uVar3,uVar3)),0);
      uVar5 = PF_PART4(auVar6, 0);
      uVar4 = 0;
      do {
        puVar1 = (undefined4 *)((long)param_1 + uVar4);
        *puVar1 = uVar5;
        puVar1[1] = uVar5;
        puVar1[2] = uVar5;
        puVar1[3] = uVar5;
        puVar1 = (undefined4 *)((long)param_1 + uVar4 + 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar5;
        puVar1[2] = uVar5;
        puVar1[3] = uVar5;
        uVar4 = uVar4 + 0x20;
      } while (uVar2 != uVar4);
      if (uVar2 == param_3) {
        return param_1;
      }
      uVar4 = uVar2;
      if ((param_3 & 0x1c) == 0) goto LAB_10001250;
    }
    uVar2 = param_3 & 0xfffffffffffffffc;
    auVar6 = pshuflw(ZEXT216(CONCAT11(uVar3,uVar3)),ZEXT216(CONCAT11(uVar3,uVar3)),0);
    do {
      *(int *)((long)param_1 + uVar4) = PF_PART4(auVar6, 0);
      uVar4 = uVar4 + 4;
    } while (uVar2 != uVar4);
    if (uVar2 == param_3) {
      return param_1;
    }
  }
LAB_10001250:
  do {
    *(undefined1 *)((long)param_1 + uVar2) = uVar3;
    uVar2 = uVar2 + 1;
  } while (param_3 != uVar2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001260
 */

void recovered_10001260(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;

  if (param_2 == 0) {
    return;
  }
  if (param_2 < 8) {
    uVar2 = 0;
  }
  else {
    if (param_2 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar2 = param_2 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        *(undefined8 *)(param_1 + uVar3) = 0;
        ((undefined8 *)(param_1 + uVar3))[1] = 0;
        puVar1 = (undefined8 *)(param_1 + 0x10 + uVar3);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar3 = uVar3 + 0x20;
      } while (uVar2 != uVar3);
      if (uVar2 == param_2) {
        return;
      }
      uVar3 = uVar2;
      if ((param_2 & 0x18) == 0) goto LAB_100012e0;
    }
    uVar2 = param_2 & 0xfffffffffffffff8;
    do {
      *(undefined8 *)(param_1 + uVar3) = 0;
      uVar3 = uVar3 + 8;
    } while (uVar2 != uVar3);
    if (uVar2 == param_2) {
      return;
    }
  }
LAB_100012e0:
  do {
    *(undefined1 *)(param_1 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f0
 */

void recovered_100012f0(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;

  if (param_2 == 0) {
    return;
  }
  if (param_2 < 8) {
    uVar2 = 0;
  }
  else {
    if (param_2 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar2 = param_2 & 0xffffffffffffffe0;
      uVar3 = 0;
      do {
        *(undefined8 *)(param_1 + uVar3) = 0;
        ((undefined8 *)(param_1 + uVar3))[1] = 0;
        puVar1 = (undefined8 *)(param_1 + 0x10 + uVar3);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar3 = uVar3 + 0x20;
      } while (uVar2 != uVar3);
      if (uVar2 == param_2) {
        return;
      }
      uVar3 = uVar2;
      if ((param_2 & 0x18) == 0) goto LAB_10001370;
    }
    uVar2 = param_2 & 0xfffffffffffffff8;
    do {
      *(undefined8 *)(param_1 + uVar3) = 0;
      uVar3 = uVar3 + 8;
    } while (uVar2 != uVar3);
    if (uVar2 == param_2) {
      return;
    }
  }
LAB_10001370:
  do {
    *(undefined1 *)(param_1 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001380
 */

int recovered_10001380(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (*(byte *)(param_1 + lVar1) != *(byte *)(param_2 + lVar1)) {
        return (uint)*(byte *)(param_1 + lVar1) - (uint)*(byte *)(param_2 + lVar1);
      }
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b0
 */

bool recovered_100013b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d0
 */

bool recovered_100013d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

bool recovered_100013f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001410
 */

bool recovered_10001410(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001440
 */

bool recovered_10001440(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001460
 */

bool recovered_10001460(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001480
 */

int recovered_10001480(int param_1)

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
 * Address: 0x100014a0
 */

int recovered_100014a0(int param_1)

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
 * Address: 0x100014c0
 */

ulong recovered_100014c0(char *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014f0
 */

int recovered_100014f0(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001530
 */

int recovered_10001530(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001570
 */

void recovered_10001570(long param_1,long param_2)

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
 * Address: 0x10001590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10001590(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  if (param_1 == 0) {
    return 0;
  }
  uVar10 = 0;
  uVar6 = 1;
  do {
    uVar7 = uVar6;
    pcVar1 = (char *)(param_1 + uVar10);
    uVar10 = uVar10 + 1;
    uVar6 = uVar7 + 1;
  } while (*pcVar1 != '\0');
  if (((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
      ((_DAT_00006808 < 0x50 || ((code *)(ulong)_DAT_0000684c == (code *)0x0)))) ||
     (lVar8 = (*(code *)(ulong)_DAT_0000684c)(uVar10), lVar8 == 0)) {
    return 0;
  }
  if (uVar10 == 0) {
    return lVar8;
  }
  uVar9 = 0;
  if ((3 < uVar10) && (0x1f < (ulong)(lVar8 - param_1))) {
    if (uVar10 < 0x20) {
      uVar11 = 0;
    }
    else {
      uVar9 = uVar10 & 0xffffffffffffffe0;
      uVar11 = 0;
      do {
        uVar3 = ((undefined8 *)(param_1 + uVar11))[1];
        puVar2 = (undefined8 *)(param_1 + 0x10 + uVar11);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        *(undefined8 *)(lVar8 + uVar11) = *(undefined8 *)(param_1 + uVar11);
        ((undefined8 *)(lVar8 + uVar11))[1] = uVar3;
        puVar2 = (undefined8 *)(lVar8 + 0x10 + uVar11);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        uVar11 = uVar11 + 0x20;
      } while (uVar9 != uVar11);
      if (uVar10 == uVar9) {
        return lVar8;
      }
      uVar11 = uVar9;
      if ((uVar10 & 0x1c) == 0) goto LAB_10001691;
    }
    uVar9 = uVar10 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)(lVar8 + uVar11) = *(undefined4 *)(param_1 + uVar11);
      uVar11 = uVar11 + 4;
    } while (uVar9 != uVar11);
    if (uVar10 == uVar9) {
      return lVar8;
    }
  }
LAB_10001691:
  uVar11 = ~uVar9;
  if ((uVar10 & 3) != 0) {
    uVar12 = (ulong)(uVar7 & 3);
    do {
      *(undefined1 *)(lVar8 + uVar9) = *(undefined1 *)(param_1 + uVar9);
      uVar9 = uVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (2 < uVar11 + uVar10) {
    do {
      *(undefined1 *)(lVar8 + uVar9) = *(undefined1 *)(param_1 + uVar9);
      *(undefined1 *)(lVar8 + 1 + uVar9) = *(undefined1 *)(param_1 + 1 + uVar9);
      *(undefined1 *)(lVar8 + 2 + uVar9) = *(undefined1 *)(param_1 + 2 + uVar9);
      *(undefined1 *)(lVar8 + 3 + uVar9) = *(undefined1 *)(param_1 + 3 + uVar9);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
  }
  return lVar8;
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
 * Address: 0x10001700
 */

char * recovered_10001700(char *param_1,char param_2)

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
 * Address: 0x10001740
 */

long recovered_10001740(char *param_1,char *param_2)

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
 * Address: 0x100017a0
 */

char * recovered_100017a0(char *param_1,char *param_2)

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
 * Address: 0x10001800
 */

char * recovered_10001800(char *param_1,char *param_2)

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


#undef DAT_1001dbd0
#define DAT_1001dbd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

undefined * recovered_10001860(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1001dbd0;
}

#undef DAT_1001dbd0

#undef PTR_DAT_1001f000
#define PTR_DAT_1001f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1bfdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

undefined ** recovered_10001870(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001f000;
}

#undef PTR_DAT_1001f000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001880
 */

undefined8 recovered_10001880(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a0
 */

double recovered_100018a0(double param_1,uint param_2)

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

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10001970(double param_1,int *param_2)

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
#undef DAT_1001d490
#undef _DAT_1001d490

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

double recovered_10001a40(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a70
 */

double recovered_10001a70(double param_1,double param_2)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001af0
 */

ulong recovered_10001af0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b20
 */

ulong recovered_10001b20(double param_1)

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

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b80
 */

double recovered_10001b80(double param_1)

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

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d420
#define DAT_1001d420 (*(double *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef DAT_1001d428
#define DAT_1001d428 (*(double *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_1001d430
#define DAT_1001d430 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1001d438
#define DAT_1001d438 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1001d440
#define DAT_1001d440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1001d448
#define DAT_1001d448 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_1001d4a0
#define DAT_1001d4a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef DAT_1001d4b0
#define DAT_1001d4b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
#undef DAT_1001d4c0
#define DAT_1001d4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef DAT_1001d4d0
#define DAT_1001d4d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef _DAT_1001d440
#define _DAT_1001d440 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_1001d448
#define _DAT_1001d448 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#undef _DAT_1001d4a0
#define _DAT_1001d4a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef _DAT_1001d4b0
#define _DAT_1001d4b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xadU)))
#undef _DAT_1001d4c0
#define _DAT_1001d4c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef _DAT_1001d4d0
#define _DAT_1001d4d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001d30(double param_1)

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
#undef DAT_1001d440
#undef DAT_1001d448
#undef DAT_1001d4a0
#undef DAT_1001d4b0
#undef DAT_1001d4c0
#undef DAT_1001d4d0
#undef _DAT_1001d440
#undef _DAT_1001d448
#undef _DAT_1001d4a0
#undef _DAT_1001d4b0
#undef _DAT_1001d4c0
#undef _DAT_1001d4d0

#undef DAT_1001d4e0
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

long recovered_10001e80(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001d4e0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001d4e0

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d450
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_1001d458
#define DAT_1001d458 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_1001d460
#define DAT_1001d460 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_1001d468
#define DAT_1001d468 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_1001d470
#define DAT_1001d470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_1001d4f0
#define DAT_1001d4f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xedU)))
#undef _DAT_1001d470
#define _DAT_1001d470 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef _DAT_1001d4f0
#define _DAT_1001d4f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xedU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001eb0(double param_1)

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
#undef DAT_1001d470
#undef DAT_1001d4f0
#undef _DAT_1001d470
#undef _DAT_1001d4f0

/* Native range reduction and sixth-order cosine. Pooka's Free Software License. */
#include "numbers.h"
double recovered_10001f60(double value){return pf_cosine_polynomial(value);}


#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10002000(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(_DAT_1001d490 ^ (ulong)param_1);
  if ((double)(_DAT_1001d490 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_1001d490
#undef _DAT_1001d490

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d480
#define DAT_1001d480 (*(double *)(((uintptr_t)pf_module_state + 0x7dU)))
#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10002020(double param_1)

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
#undef DAT_1001d490
#undef _DAT_1001d490

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d480
#define DAT_1001d480 (*(double *)(((uintptr_t)pf_module_state + 0x7dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

ulong recovered_100020f0(double param_1)

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

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021a0
 */

double recovered_100021a0(ulong param_1)

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

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100021f0(ulong param_1)

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
#undef DAT_1001d490
#undef _DAT_1001d490

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002280
 */

float recovered_10002280(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef UNK_1001d494
#define UNK_1001d494 (*(uint *)(((uintptr_t)pf_module_state + 0x91U)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef uRam000000001001d494
#define uRam000000001001d494 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x91U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100022d0(float param_1,int *param_2)

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
#undef DAT_1001d490
#undef UNK_1001d494
#undef _DAT_1001d490
#undef uRam000000001001d494

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002390
 */

undefined8 recovered_10002390(float param_1,uint param_2)

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

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d520
#define DAT_1001d520 (*(float *)(((uintptr_t)pf_module_state + 0x11dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002480
 */

float recovered_10002480(float param_1,float param_2)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002510
 */

undefined8 recovered_10002510(undefined1 in_XMM0 [16])

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


#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002550
 */

float recovered_10002550(float param_1)

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

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b0
 */

double recovered_100025b0(double param_1)

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

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002610
 */

undefined8 recovered_10002610(undefined8 param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

float recovered_10002680(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001b80((double)param_1);
  return (float)dVar1;
}


#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d428
#define DAT_1001d428 (*(double *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_1001d430
#define DAT_1001d430 (*(double *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1001d438
#define DAT_1001d438 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1001d440
#define DAT_1001d440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1001d448
#define DAT_1001d448 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_1001d4a0
#define DAT_1001d4a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef DAT_1001d4b0
#define DAT_1001d4b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
#undef DAT_1001d4c0
#define DAT_1001d4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef DAT_1001d4d0
#define DAT_1001d4d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_1001d524
#define DAT_1001d524 (*(float *)(((uintptr_t)pf_module_state + 0x121U)))
#undef DAT_1001d528
#define DAT_1001d528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef _DAT_1001d440
#define _DAT_1001d440 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_1001d448
#define _DAT_1001d448 (*(double *)(((uintptr_t)pf_module_state + 0x45U)))
#undef _DAT_1001d4a0
#define _DAT_1001d4a0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x9dU)))
#undef _DAT_1001d4b0
#define _DAT_1001d4b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xadU)))
#undef _DAT_1001d4c0
#define _DAT_1001d4c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbdU)))
#undef _DAT_1001d4d0
#define _DAT_1001d4d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef _DAT_1001d528
#define _DAT_1001d528 (*(float *)(((uintptr_t)pf_module_state + 0x125U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100026a0(float param_1)

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
#undef DAT_1001d440
#undef DAT_1001d448
#undef DAT_1001d4a0
#undef DAT_1001d4b0
#undef DAT_1001d4c0
#undef DAT_1001d4d0
#undef DAT_1001d524
#undef DAT_1001d528
#undef _DAT_1001d440
#undef _DAT_1001d448
#undef _DAT_1001d4a0
#undef _DAT_1001d4b0
#undef _DAT_1001d4c0
#undef _DAT_1001d4d0
#undef _DAT_1001d528

#undef DAT_1001d4e0
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f0
 */

long recovered_100027f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_1 + *(double *)(&DAT_1001d4e0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_1001d4e0

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d450
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_1001d458
#define DAT_1001d458 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_1001d460
#define DAT_1001d460 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_1001d468
#define DAT_1001d468 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_1001d470
#define DAT_1001d470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef DAT_1001d4f0
#define DAT_1001d4f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xedU)))
#undef _DAT_1001d470
#define _DAT_1001d470 (*(double *)(((uintptr_t)pf_module_state + 0x6dU)))
#undef _DAT_1001d4f0
#define _DAT_1001d4f0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xedU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10002820(float param_1)

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
#undef DAT_1001d470
#undef DAT_1001d4f0
#undef _DAT_1001d470
#undef _DAT_1001d4f0

#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d450
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_1001d458
#define DAT_1001d458 (*(double *)(((uintptr_t)pf_module_state + 0x55U)))
#undef DAT_1001d460
#define DAT_1001d460 (*(double *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_1001d468
#define DAT_1001d468 (*(double *)(((uintptr_t)pf_module_state + 0x65U)))
#undef DAT_1001d478
#define DAT_1001d478 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
#undef DAT_1001d500
#define DAT_1001d500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfdU)))
#undef _DAT_1001d500
#define _DAT_1001d500 (*(uint128 *)(((uintptr_t)pf_module_state + 0xfdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100028d0(float param_1)

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
#undef DAT_1001d500
#undef _DAT_1001d500

#undef DAT_1001d510
#define DAT_1001d510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10dU)))
#undef UNK_1001d514
#define UNK_1001d514 (*(uint *)(((uintptr_t)pf_module_state + 0x111U)))
#undef _DAT_1001d510
#define _DAT_1001d510 (*(uint *)(((uintptr_t)pf_module_state + 0x10dU)))
#undef uRam000000001001d514
#define uRam000000001001d514 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x111U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002970(undefined8 param_1)

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

#undef DAT_1001d510
#undef UNK_1001d514
#undef _DAT_1001d510
#undef uRam000000001001d514

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002990
 */

long recovered_10002990(byte *param_1,undefined8 *param_2,uint param_3)

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
 * Address: 0x10002ac0
 */

long recovered_10002ac0(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d488
#define DAT_1001d488 (*(double *)(((uintptr_t)pf_module_state + 0x85U)))
#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10002bf0(byte *param_1,undefined8 *param_2)

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
#undef DAT_1001d490
#undef _DAT_1001d490

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e50
 */

float recovered_10002e50(byte *in_RDI,undefined8 *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10002bf0(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_1001d488
#define DAT_1001d488 (*(double *)(((uintptr_t)pf_module_state + 0x85U)))
#undef DAT_1001d490
#define DAT_1001d490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef DAT_1001dbd5
#define DAT_1001dbd5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d2U)))
#undef _DAT_1001d490
#define _DAT_1001d490 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8dU)))
#undef str_1001dbdc
#define str_1001dbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d9U)))
#undef str_1001dbed
#define str_1001dbed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eaU)))
#define acStack_5a (*(char (*)[42])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002e60(char *param_1,ulong param_2,char *param_3,void *param_4)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  double *pdVar16;
  char *pcVar17;
  double dVar18;

  if (param_2 != 0) {
    *param_1 = '\0';
  }
  uVar3 = _DAT_1001d490;
  dVar2 = DAT_1001d488;
  uVar9 = 0;
  uVar12 = param_2;
LAB_10002ecb:
  cVar7 = *param_3;
  uVar4 = (uint)uVar9;
  if (cVar7 != '%') {
    if (cVar7 == '\0') {
      if (param_2 != 0) {
        *param_1 = '\0';
      }
      return uVar4;
    }
    if (1 < uVar12) {
      *param_1 = cVar7;
LAB_10002ec0:
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
    }
LAB_10002ec6:
    uVar9 = (ulong)(uVar4 + 1);
    goto LAB_10002ec8;
  }
  cVar7 = param_3[1];
  param_3 = param_3 + 1;
  if (cVar7 == '%') {
    if (1 < uVar12) {
      *param_1 = '%';
      goto LAB_10002ec0;
    }
    goto LAB_10002ec6;
  }
  while ((byte)(cVar7 - 0x30U) < 10) {
    pcVar17 = param_3 + 1;
    param_3 = param_3 + 1;
    cVar7 = *pcVar17;
  }
  if (cVar7 == '.') {
    do {
      cVar7 = param_3[1];
      param_3 = param_3 + 1;
    } while ((byte)(cVar7 - 0x30U) < 10);
  }
  uVar8 = uVar9 & 0xffffffff;
LAB_10002f60:
  switch((uintptr_t)(cVar7)) {
  case 'I':
  case 'd':
  case 'i':
    goto switchD_10002f79_caseD_49;
  default:
    if (uVar12 < 2) goto LAB_10002ec6;
    *param_1 = '?';
    goto LAB_10002ec0;
  case 'X':
    uVar4 = *(uint *)param_4;
    if ((ulong)uVar4 < 0x29) {
      puVar5 = (uint *)((ulong)uVar4 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar4 + 8;
    }
    else {
      puVar5 = *(uint **)((long)param_4 + 8);
      *(uint **)((long)param_4 + 8) = puVar5 + 2;
    }
    uVar9 = (ulong)*puVar5;
    uVar6 = 0;
    uVar4 = *puVar5;
    do {
      uVar10 = uVar6;
      acStack_5a[uVar10 + 2] = str_1001dbdc[uVar4 & 0xf];
      uVar6 = uVar10 + 1;
      uVar9 = uVar9 >> 4;
      bVar1 = 0xf < uVar4;
      uVar4 = (uint)uVar9;
    } while (bVar1);
    if ((uVar10 & 1) == 0) {
      if (1 < uVar12) {
        *param_1 = acStack_5a[uVar10 + 2];
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
    }
    else {
      uVar10 = uVar6;
    }
    if (uVar6 != 1) {
      do {
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar10 + 1];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar10];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    break;
  case 'c':
    uVar13 = *(uint *)param_4;
    if ((ulong)uVar13 < 0x29) {
      pcVar17 = (char *)((ulong)uVar13 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar13 + 8;
    }
    else {
      pcVar17 = *(char **)((long)param_4 + 8);
      *(char **)((long)param_4 + 8) = pcVar17 + 8;
    }
    if (uVar12 < 2) goto LAB_10002ec6;
    *param_1 = *pcVar17;
    goto LAB_10002ec0;
  case 'f':
    uVar13 = *(uint *)((long)param_4 + 4);
    if ((ulong)uVar13 < 0xa1) {
      pdVar16 = (double *)((ulong)uVar13 + *(long *)((long)param_4 + 0x10));
      *(uint *)((long)param_4 + 4) = uVar13 + 0x10;
    }
    else {
      pdVar16 = *(double **)((long)param_4 + 8);
      *(double **)((long)param_4 + 8) = pdVar16 + 1;
    }
    dVar18 = *pdVar16;
    uVar9 = uVar12;
    if (dVar18 < 0.0) {
      if (1 < uVar12) {
        *param_1 = '-';
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
      uVar4 = uVar4 + 1;
      dVar18 = (double)((ulong)dVar18 ^ uVar3);
      uVar9 = uVar12;
    }
    uVar12 = 0;
    uVar13 = (int)dVar18;
    do {
      uVar8 = uVar12;
      acStack_5a[uVar8 + 2] = str_1001dbed[uVar13 % 10];
      uVar12 = uVar8 + 1;
      bVar1 = 9 < uVar13;
      uVar13 = uVar13 / 10;
    } while (bVar1);
    if (uVar12 != 0) {
      if ((uVar8 & 1) == 0) {
        if (1 < uVar9) {
          *param_1 = acStack_5a[uVar8 + 2];
          param_1 = param_1 + 1;
          uVar9 = uVar9 - 1;
        }
      }
      else {
        uVar8 = uVar12;
      }
      uVar4 = uVar4 + (int)uVar12;
      if (uVar12 != 1) {
        do {
          if (1 < uVar9) {
            *param_1 = acStack_5a[uVar8 + 1];
            param_1 = param_1 + 1;
            uVar9 = uVar9 - 1;
          }
          if (1 < uVar9) {
            *param_1 = acStack_5a[uVar8];
            param_1 = param_1 + 1;
            uVar9 = uVar9 - 1;
          }
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
    }
    uVar12 = uVar9;
    if (1 < uVar9) {
      *param_1 = '.';
      uVar12 = uVar9 - 1;
      if (uVar12 < 2) {
        param_1 = param_1 + 1;
      }
      else {
        dVar18 = (dVar18 - (double)(int)dVar18) * dVar2;
        iVar11 = (int)dVar18;
        param_1[1] = (char)iVar11 + '0';
        uVar8 = uVar9 & 0xfffffffffffffffe;
        uVar12 = 1;
        if (uVar8 == 2) {
          param_1 = param_1 + 2;
        }
        else {
          dVar18 = (dVar18 - (double)iVar11) * dVar2;
          iVar11 = (int)dVar18;
          param_1[2] = (char)iVar11 + '0';
          if (uVar9 - 5 < 0xfffffffffffffffe) {
            dVar18 = (dVar18 - (double)iVar11) * dVar2;
            iVar11 = (int)dVar18;
            param_1[3] = (char)iVar11 + '0';
            if (uVar8 == 4) {
              param_1 = param_1 + 4;
            }
            else {
              dVar18 = (dVar18 - (double)iVar11) * dVar2;
              param_1[4] = (char)(int)dVar18 + '0';
              if (uVar9 - 7 < 0xfffffffffffffffe) {
                dVar18 = (dVar18 - (double)(int)dVar18) * dVar2;
                iVar11 = (int)dVar18;
                param_1[5] = (char)iVar11 + '0';
                if (uVar8 == 6) {
                  param_1 = param_1 + 6;
                }
                else {
                  param_1[6] = (char)(int)((dVar18 - (double)iVar11) * dVar2) + '0';
                  param_1 = param_1 + 7;
                  uVar12 = uVar9 - 7;
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
    uVar9 = (ulong)(uVar4 + 7);
    param_3 = param_3 + 1;
    goto LAB_10002ecb;
  case 'h':
  case 'l':
  case 't':
  case 'z':
    goto switchD_10002f79_caseD_68;
  case 'p':
    uVar13 = *(uint *)param_4;
    if ((ulong)uVar13 < 0x29) {
      puVar15 = (ulong *)((ulong)uVar13 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar13 + 8;
    }
    else {
      puVar15 = *(ulong **)((long)param_4 + 8);
      *(ulong **)((long)param_4 + 8) = puVar15 + 1;
    }
    uVar8 = *puVar15;
    if (1 < uVar12) {
      *param_1 = '0';
      if (uVar12 - 3 < 0xfffffffffffffffe) {
        param_1[1] = 'x';
        param_1 = param_1 + 2;
        uVar12 = uVar12 - 2;
      }
      else {
        param_1 = param_1 + 1;
        uVar12 = 1;
      }
    }
    uVar6 = uVar8 & 0xffffffff;
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      uVar13 = (uint)uVar8;
      acStack_5a[uVar10 + 2] = str_1001dbed[uVar13 & 0xf];
      uVar9 = uVar10 + 1;
      uVar8 = uVar6 >> 4;
      uVar6 = uVar8;
    } while (0xf < uVar13);
    if ((uVar10 & 1) == 0) {
      if (1 < uVar12) {
        *param_1 = acStack_5a[uVar10 + 2];
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
    }
    else {
      uVar10 = uVar9;
    }
    if (uVar9 != 1) {
      do {
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar10 + 1];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar10];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    uVar9 = (uVar4 + 2) + uVar9;
    param_3 = param_3 + 1;
    goto LAB_10002ecb;
  case 's':
    uVar4 = *(uint *)param_4;
    if ((ulong)uVar4 < 0x29) {
      puVar14 = (undefined8 *)((ulong)uVar4 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar4 + 8;
    }
    else {
      puVar14 = *(undefined8 **)((long)param_4 + 8);
      *(undefined8 **)((long)param_4 + 8) = puVar14 + 1;
    }
    pcVar17 = (char *)*puVar14;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = &DAT_1001dbd5;
    }
    cVar7 = *pcVar17;
    while (cVar7 != '\0') {
      pcVar17 = pcVar17 + 1;
      if (1 < uVar12) {
        *param_1 = cVar7;
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
      uVar9 = (ulong)((int)uVar9 + 1);
      cVar7 = *pcVar17;
    }
    goto LAB_10002ec8;
  case 'u':
    goto switchD_10002f79_caseD_75;
  case 'x':
    uVar4 = *(uint *)param_4;
    if ((ulong)uVar4 < 0x29) {
      puVar5 = (uint *)((ulong)uVar4 + *(long *)((long)param_4 + 0x10));
      *(uint *)param_4 = uVar4 + 8;
    }
    else {
      puVar5 = *(uint **)((long)param_4 + 8);
      *(uint **)((long)param_4 + 8) = puVar5 + 2;
    }
    uVar9 = (ulong)*puVar5;
    uVar6 = 0;
    uVar4 = *puVar5;
    do {
      uVar10 = uVar6;
      acStack_5a[uVar10 + 2] = str_1001dbed[uVar4 & 0xf];
      uVar6 = uVar10 + 1;
      uVar9 = uVar9 >> 4;
      bVar1 = 0xf < uVar4;
      uVar4 = (uint)uVar9;
    } while (bVar1);
    if ((uVar10 & 1) == 0) {
      if (1 < uVar12) {
        *param_1 = acStack_5a[uVar10 + 2];
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
    }
    else {
      uVar10 = uVar6;
    }
    if (uVar6 != 1) {
      do {
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar10 + 1];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar10];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
  }
  param_3 = param_3 + 1;
  uVar9 = uVar8 + uVar6 & 0xffffffff;
  goto LAB_10002ecb;
switchD_10002f79_caseD_75:
  uVar4 = *(uint *)param_4;
  if ((ulong)uVar4 < 0x29) {
    puVar5 = (uint *)((ulong)uVar4 + *(long *)((long)param_4 + 0x10));
    *(uint *)param_4 = uVar4 + 8;
  }
  else {
    puVar5 = *(uint **)((long)param_4 + 8);
    *(uint **)((long)param_4 + 8) = puVar5 + 2;
  }
  uVar9 = 0;
  uVar4 = *puVar5;
  do {
    uVar6 = uVar9;
    acStack_5a[uVar6 + 2] = str_1001dbed[uVar4 % 10];
    uVar9 = uVar6 + 1;
    bVar1 = 9 < uVar4;
    uVar4 = uVar4 / 10;
  } while (bVar1);
  if (uVar9 == 0) {
    param_3 = param_3 + 1;
    uVar9 = uVar8;
  }
  else {
    if ((uVar6 & 1) == 0) {
      if (1 < uVar12) {
        *param_1 = acStack_5a[uVar6 + 2];
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
    }
    else {
      uVar6 = uVar9;
    }
    if (uVar9 == 1) {
      uVar9 = uVar8 + uVar9 & 0xffffffff;
      param_3 = param_3 + 1;
    }
    else {
      do {
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar6 + 1];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar6];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
      uVar9 = uVar8 + uVar9 & 0xffffffff;
      param_3 = param_3 + 1;
    }
  }
  goto LAB_10002ecb;
switchD_10002f79_caseD_68:
  cVar7 = param_3[1];
  param_3 = param_3 + 1;
  goto LAB_10002f60;
switchD_10002f79_caseD_49:
  uVar13 = *(uint *)param_4;
  if ((ulong)uVar13 < 0x29) {
    puVar5 = (uint *)((ulong)uVar13 + *(long *)((long)param_4 + 0x10));
    *(uint *)param_4 = uVar13 + 8;
  }
  else {
    puVar5 = *(uint **)((long)param_4 + 8);
    *(uint **)((long)param_4 + 8) = puVar5 + 2;
  }
  uVar13 = *puVar5;
  if ((int)uVar13 < 0) {
    if (1 < uVar12) {
      *param_1 = '-';
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
    }
    uVar4 = uVar4 + 1;
    uVar13 = -uVar13;
  }
  uVar9 = (ulong)uVar4;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    acStack_5a[uVar6 + 2] = str_1001dbed[uVar13 % 10];
    uVar8 = uVar6 + 1;
    bVar1 = 9 < uVar13;
    uVar13 = uVar13 / 10;
  } while (bVar1);
  if (uVar8 == 0) {
    param_3 = param_3 + 1;
  }
  else {
    if ((uVar6 & 1) == 0) {
      if (1 < uVar12) {
        *param_1 = acStack_5a[uVar6 + 2];
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
    }
    else {
      uVar6 = uVar8;
    }
    uVar9 = uVar9 + uVar8;
    if (uVar8 != 1) {
      do {
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar6 + 1];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        if (1 < uVar12) {
          *param_1 = acStack_5a[uVar6];
          param_1 = param_1 + 1;
          uVar12 = uVar12 - 1;
        }
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
LAB_10002ec8:
    param_3 = param_3 + 1;
  }
  goto LAB_10002ecb;
}

#undef DAT_1001d488
#undef DAT_1001d490
#undef DAT_1001dbd5
#undef _DAT_1001d490
#undef str_1001dbdc
#undef str_1001dbed
#undef acStack_5a

/* Preserve the variadic C ABI. Pooka's Free Software License. */
int recovered_10003890(char *buffer,size_t capacity,const char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002e60(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1001f100
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfdU)))
#undef DAT_1001f110
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d0dU)))
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
 * Address: 0x10003910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003910(long param_1,long param_2)

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
            recovered_10000e30(local_238,&DAT_1001f110,DAT_1001f100);
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
            recovered_10000e30(local_238,&DAT_1001f110,DAT_1001f100);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1001f100
#undef DAT_1001f110
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
#undef DAT_1001f100
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfdU)))
#undef DAT_1001f110
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d0dU)))
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
 * Address: 0x10003ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003ae0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1001f100 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10000e30(local_208,&DAT_1001f110,DAT_1001f100);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1001f100
#undef DAT_1001f110
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
#undef DAT_1001f100
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfdU)))
#undef DAT_1001f110
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d0dU)))
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
 * Address: 0x10003b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003b80(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1001f100 != 0) {
    recovered_10000e30(local_208,&DAT_1001f110,DAT_1001f100);
    local_208[DAT_1001f100] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && ((code *)(ulong)_DAT_00006840 != (code *)0x0)))) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1001f100 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1001dbd4
#define DAT_1001dbd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d1U)))
#undef DAT_1001dbfe
#define DAT_1001dbfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7fbU)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c20
 */

void recovered_10003c20(undefined *param_1,undefined *param_2)

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
  uVar1 = recovered_10003890(local_148,0x140,pcVar3,puVar2);
  if (0 < (int)uVar1) {
    recovered_10003910((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_1001dbd4
#undef DAT_1001dbfe
#undef local_148

#undef DAT_1001dce8
#define DAT_1001dce8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8e5U)))
#undef str_1001dc01
#define str_1001dc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7feU)))
#undef str_1001dc24
#define str_1001dc24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x821U)))
#undef str_1001dc5d
#define str_1001dc5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85aU)))
#undef str_1001dc92
#define str_1001dc92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88fU)))
#undef str_1001dcb8
#define str_1001dcb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c80
 */

void recovered_10003c80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100014c0(str_1001dc01);
  recovered_10003910(((uintptr_t)pf_module_state+0x7feU),uVar1);
  uVar1 = recovered_100014c0(str_1001dc24);
  recovered_10003910(((uintptr_t)pf_module_state+0x821U),uVar1);
  uVar1 = recovered_100014c0(str_1001dc5d);
  recovered_10003910(((uintptr_t)pf_module_state+0x85aU),uVar1);
  uVar1 = recovered_100014c0(str_1001dc92);
  recovered_10003910(((uintptr_t)pf_module_state+0x88fU),uVar1);
  uVar1 = recovered_100014c0(str_1001dcb8);
  recovered_10003910(((uintptr_t)pf_module_state+0x8b5U),uVar1);
  uVar1 = recovered_100014c0(&DAT_1001dce8);
  recovered_10003910(((uintptr_t)pf_module_state+0x8e5U),uVar1);
  return;
}

#undef DAT_1001dce8
#undef str_1001dc01
#undef str_1001dc24
#undef str_1001dc5d
#undef str_1001dc92
#undef str_1001dcb8

#undef DAT_1001dce8
#define DAT_1001dce8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8e5U)))
#undef str_1001dceb
#define str_1001dceb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d30
 */

void recovered_10003d30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100014c0(str_1001dceb);
  recovered_10003910(((uintptr_t)pf_module_state+0x8e8U),uVar1);
  uVar1 = recovered_100014c0(&DAT_1001dce8);
  recovered_10003910(((uintptr_t)pf_module_state+0x8e5U),uVar1);
  return;
}

#undef DAT_1001dce8
#undef str_1001dceb

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
#undef DAT_1001f100
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfdU)))
#undef DAT_1001f110
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d0dU)))
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
 * Address: 0x10003d70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003d70(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1001f100 != 0) {
    recovered_10000e30(local_228,&DAT_1001f110,DAT_1001f100);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e90
 */

undefined8 recovered_10003e90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

void recovered_10003ea0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003eb0
 */

undefined1 recovered_10003eb0(void)

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
#undef DAT_1001dbfe
#define DAT_1001dbfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7fbU)))
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
#undef str_1001dd7f
#define str_1001dd7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97cU)))
#undef str_1001dd8c
#define str_1001dd8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x989U)))
#undef str_1001dd9a
#define str_1001dd9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x997U)))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10003ec0(long param_1,long param_2)

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
  iVar3 = recovered_100014f0((byte *)param_1,(byte *)str_1001dd7f);
  if (iVar3 == 0) {
    uVar10 = 1;
LAB_1000416e:
    puVar5 = recovered_10000d40(0x340);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_1001f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_100011a0(puVar5,0,0x340);
    *puVar5 = uVar10;
    *(bool *)(puVar5 + 0x49) = iVar3 == 0;
    *(bool *)((long)puVar5 + 0x125) = iVar3 != 0;
    puVar5[0x48] = 0xffffffff;
    pf_varargs_10003890__8_((char *)(puVar5 + 1),0xf1,&DAT_1001dbfe,param_1);
    return puVar5;
  }
  iVar4 = recovered_100014f0((byte *)param_1,(byte *)str_1001dd8c);
  if (iVar4 == 0) {
    uVar10 = 2;
    goto LAB_1000416e;
  }
  iVar4 = recovered_100014f0((byte *)param_1,(byte *)str_1001dd9a);
  if (iVar4 == 0) {
    uVar10 = 3;
    goto LAB_1000416e;
  }
  puVar5 = recovered_10000d40(0x340);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_1001f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100011a0(puVar5,0,0x340);
  *puVar5 = 0;
  pcVar6 = recovered_10001700((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_10001700((char *)param_2,'+');
    bVar11 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_10001700((char *)param_2,'a');
      bVar11 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar5 + 0x49) = bVar11;
  pcVar6 = recovered_10001700((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_10001700((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_10001700((char *)param_2,'+');
    bVar12 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar5 + 0x125) = bVar12;
  pcVar6 = recovered_10001700((char *)param_2,'a');
  *(bool *)((long)puVar5 + 0x126) = pcVar6 != (char *)0x0;
  puVar5[0x48] = 0xffffffff;
  pf_varargs_10003890__8_((char *)(puVar5 + 1),0xf1,&DAT_1001dbfe,param_1);
  recovered_100011a0(&local_34,0,0xc);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
      (iVar3 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34), iVar3 != 0)))) {
    pcVar6 = recovered_10001700((char *)param_2,'w');
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
          pvVar8 = recovered_10000de0(*(void **)(puVar5 + 0x40),uVar7);
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
        recovered_10000e30(pvVar8,(void *)(ulong)local_34,uVar9);
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
    recovered_10000d90(puVar5);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_1001dbfe
#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1001dd7f
#undef str_1001dd8c
#undef str_1001dd9a
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
#undef DAT_1001dbfe
#define DAT_1001dbfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7fbU)))
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
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
#undef str_1001dd7f
#define str_1001dd7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97cU)))
#undef str_1001dd8c
#define str_1001dd8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x989U)))
#undef str_1001dd9a
#define str_1001dd9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x997U)))
#define uStack_34 (*(uint *)(frame + 28))
#define uStack_30 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004250
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10004250(long param_1,long param_2,int *param_3)

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
      recovered_10000d90(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x10004320;
    recovered_10000d90(param_3);
    puVar8 = recovered_10003ec0(param_1,param_2);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1001f060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_100014f0((byte *)param_1,(byte *)str_1001dd7f);
  if (iVar4 == 0) {
    uVar10 = 1;
LAB_1000416e:
    puVar8 = recovered_10000d40(0x340);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_1001f060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_100011a0(puVar8,0,0x340);
    *puVar8 = uVar10;
    *(bool *)(puVar8 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar8 + 0x125) = iVar4 != 0;
    puVar8[0x48] = 0xffffffff;
    pf_varargs_10003890__8_((char *)(puVar8 + 1),0xf1,&DAT_1001dbfe,param_1);
    return puVar8;
  }
  iVar3 = recovered_100014f0((byte *)param_1,(byte *)str_1001dd8c);
  if (iVar3 == 0) {
    uVar10 = 2;
    goto LAB_1000416e;
  }
  iVar3 = recovered_100014f0((byte *)param_1,(byte *)str_1001dd9a);
  if (iVar3 == 0) {
    uVar10 = 3;
    goto LAB_1000416e;
  }
  puVar8 = recovered_10000d40(0x340);
  if (puVar8 == (undefined4 *)0x0) {
    DAT_1001f060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100011a0(puVar8,0,0x340);
  *puVar8 = 0;
  pcVar5 = recovered_10001700((char *)param_2,'r');
  bVar12 = true;
  bVar11 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = recovered_10001700((char *)param_2,'+');
    bVar11 = true;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = recovered_10001700((char *)param_2,'a');
      bVar11 = pcVar5 != (char *)0x0;
    }
  }
  *(bool *)(puVar8 + 0x49) = bVar11;
  pcVar5 = recovered_10001700((char *)param_2,'w');
  if ((pcVar5 == (char *)0x0) &&
     (pcVar5 = recovered_10001700((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
    pcVar5 = recovered_10001700((char *)param_2,'+');
    bVar12 = pcVar5 != (char *)0x0;
  }
  *(bool *)((long)puVar8 + 0x125) = bVar12;
  pcVar5 = recovered_10001700((char *)param_2,'a');
  *(bool *)((long)puVar8 + 0x126) = pcVar5 != (char *)0x0;
  puVar8[0x48] = 0xffffffff;
  pf_varargs_10003890__8_((char *)(puVar8 + 1),0xf1,&DAT_1001dbfe,param_1);
  recovered_100011a0(&uStack_34,0,0xc);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x37 < _DAT_00006808 && ((code *)(ulong)_DAT_00006834 != (code *)0x0)) &&
       (iVar4 = (*(code *)(ulong)_DAT_00006834)(param_1,&uStack_34), iVar4 != 0)))))) {
    pcVar5 = recovered_10001700((char *)param_2,'w');
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
          pvVar7 = recovered_10000de0(*(void **)(puVar8 + 0x40),uVar6);
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
        recovered_10000e30(pvVar7,(void *)(ulong)uStack_34,uVar9);
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
    recovered_10000d90(puVar8);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
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
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004340(int *param_1)

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
    recovered_10000d90(*(void **)(param_1 + 0x40));
  }
  recovered_10000d90(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004410
 */

long recovered_10004410(long param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;

  lVar2 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) && (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      lVar2 = 0;
      do {
        lVar3 = 0;
        do {
          uVar1 = recovered_100044a0(param_4);
          if (uVar1 == 0xffffffff) {
            return lVar2;
          }
          *(char *)(param_1 + lVar3) = (char)uVar1;
          lVar3 = lVar3 + 1;
        } while (param_2 != lVar3);
        lVar2 = lVar2 + 1;
        param_1 = param_1 + param_2;
      } while (lVar2 != param_3);
      lVar2 = param_3;
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
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
#undef DAT_1001dbd4
#define DAT_1001dbd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d1U)))
#undef DAT_1001f100
#define DAT_1001f100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfdU)))
#undef DAT_1001f110
#define DAT_1001f110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d0dU)))
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
 * Address: 0x100044a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100044a0(int *param_1)

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
      recovered_10000e30(local_218,&DAT_1001f110,DAT_1001f100);
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
        uVar3 = recovered_100014c0((char *)((long)param_1 + 0x12a));
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_1001dbd4
#undef DAT_1001f100
#undef DAT_1001f110
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_218

#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004690
 */

long recovered_10004690(long param_1,long param_2,long param_3,uint *param_4)

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
    recovered_10003910(param_1,uVar5);
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
      pvVar3 = recovered_10000de0(*(void **)(param_4 + 0x40),uVar2);
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
      recovered_100011a0((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10000e30((void *)(uVar4 + *(long *)(param_4 + 0x40)),(void *)param_1,uVar5);
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

#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004820
 */

undefined8 recovered_10004820(int *param_1,ulong param_2,int param_3)

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

#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a0
 */

undefined8 recovered_100048a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1001f060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1001f060

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100048d0(int *param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_1001f060
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

undefined1 recovered_10004980(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049a0
 */

undefined1 recovered_100049a0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049c0
 */

void recovered_100049c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049e0
 */

uint recovered_100049e0(uint param_1,long param_2)

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
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004a10(long param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_1001f060
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
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c5dU)))
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
 * Address: 0x10004a90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004a90(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1001f060 = 0x16;
    return 0xffffffff;
  }
  recovered_100011a0(&local_2c,0,0xc);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef DAT_1001f060
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
 * Address: 0x10004c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004c00(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_100011a0(&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_10004cbf;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        pvVar2 = recovered_10000d40((ulong)(local_30 + (local_30 == 0)));
        if (pvVar2 != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10000e30(pvVar2,(void *)(ulong)local_34,(ulong)local_30);
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
 * Address: 0x10004ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004ce0(long param_1,long param_2,long param_3)

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
 * Address: 0x10004d50
 */

undefined8 recovered_10004d50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d60
 */

void recovered_10004d60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d70
 */

undefined8 recovered_10004d70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d80
 */

undefined8 recovered_10004d80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d90
 */

undefined8 recovered_10004d90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004da0
 */

char * recovered_10004da0(char *param_1,char param_2,long param_3)

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
 * Address: 0x10004dd0
 */

int recovered_10004dd0(long param_1,long param_2,long param_3)

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


#undef DAT_1001dd0e
#define DAT_1001dd0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90bU)))
#undef str_1001dd11
#define str_1001dd11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90eU)))
#undef str_1001dd1e
#define str_1001dd1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91bU)))
#undef str_1001dd28
#define str_1001dd28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x925U)))
#undef str_1001dd3c
#define str_1001dd3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x939U)))
#undef str_1001dd4a
#define str_1001dd4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x947U)))
#undef str_1001dd5c
#define str_1001dd5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x959U)))
#undef str_1001dd68
#define str_1001dd68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x965U)))
#undef str_1001dd79
#define str_1001dd79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x976U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e10
 */

char * recovered_10004e10(undefined4 param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee0
 */

undefined8 recovered_10004ee0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef0
 */

undefined8 recovered_10004ef0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1001f310
#define DAT_1001f310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f00
 */

void recovered_10004f00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001f310 = DAT_1001f310 + 1;
  return;
}

#undef DAT_1001f310

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f20
 */

void recovered_10004f20(long param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10004f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f30
 */


__attribute__((naked,returns_twice)) int recovered_10004f30(void *context){
 __asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nret");
}


#undef uStack0000000000000008
#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f60
 */


__attribute__((naked,noreturn)) void recovered_10004f60(void *context,int value){
 __asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nmovl $1,%eax\n1: movq 56(%rdi),%rdx\nmovq 48(%rdi),%rsp\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\njmp *%rdx");
}



#undef DAT_10004fe1
#define DAT_10004fe1 (*(uint8_t *)(0x10004fe1U))
#undef DAT_1001de0c
#define DAT_1001de0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa09U)))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f90
 */

void recovered_10004f90(void)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10005010;
  local_60 = &DAT_1001de0c;
  local_50 = &DAT_10004fe1;
  local_80 = 1;
  recovered_10005590(&local_88);
  recovered_10000d10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10004fe1
#undef DAT_1001de0c
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef auStack_40
#undef local_68
#undef local_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005010
 */

undefined8 recovered_10005010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005020
 */

void recovered_10005020(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005030(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004f90();
}


#undef DAT_1001f318
#define DAT_1001f318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005030
 */

long recovered_10005030(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1001f318;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1001f318 = param_1;
  lVar1 = recovered_10005450(param_1);
  return lVar1;
}

#undef DAT_1001f318

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

long recovered_10005060(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000d40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000d10();
  }
  return (long)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005090
 */

long recovered_10005090(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000d40(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000d10();
  }
  return (long)pvVar1;
}


#undef DAT_1001de1c
#define DAT_1001de1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa19U)))
#undef LAB_1000512d
#define LAB_1000512d (*(uint8_t *)(0x1000512dU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050c0
 */

void recovered_100050c0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10005010;
  local_60 = &DAT_1001de1c;
  local_50 = &LAB_1000512d;
  local_80 = 1;
  recovered_10005590(&local_88);
  recovered_10000d90(param_1);
  recovered_100055b0(&local_88);
  return;
}

#undef DAT_1001de1c
#undef LAB_1000512d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

#undef DAT_1001de2c
#define DAT_1001de2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa29U)))
#undef LAB_100051cd
#define LAB_100051cd (*(uint8_t *)(0x100051cdU))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005160
 */

void recovered_10005160(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10005010;
  local_60 = &DAT_1001de2c;
  local_50 = &LAB_100051cd;
  local_80 = 1;
  recovered_10005590(&local_88);
  recovered_10000d90(param_1);
  recovered_100055b0(&local_88);
  return;
}

#undef DAT_1001de2c
#undef LAB_100051cd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1001de3c
#define DAT_1001de3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa39U)))
#undef LAB_1000526d
#define LAB_1000526d (*(uint8_t *)(0x1000526dU))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
#define local_48 (*(undefined1 * *)(frame + 88))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005200
 */

void recovered_10005200(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10005010;
  local_60 = &DAT_1001de3c;
  local_50 = &LAB_1000526d;
  local_80 = 1;
  recovered_10005590(&local_88);
  recovered_10000d90(param_1);
  recovered_100055b0(&local_88);
  return;
}

#undef DAT_1001de3c
#undef LAB_1000526d
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88
#undef local_80

#undef DAT_1001de4c
#define DAT_1001de4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa49U)))
#undef LAB_1000530d
#define LAB_1000530d (*(uint8_t *)(0x1000530dU))
#define local_48 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined4 *)(frame + 32))
#define local_68 (*(code * *)(frame + 56))
#define local_60 (*(undefined * *)(frame + 64))
#define auStack_40 (*(undefined1 (*)[16])(frame + 96))
#define local_58 (*(undefined1 * *)(frame + 72))
#define local_50 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052a0
 */

void recovered_100052a0(void *param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10005010;
  local_60 = &DAT_1001de4c;
  local_50 = &LAB_1000530d;
  local_80 = 1;
  recovered_10005590(&local_88);
  recovered_10000d90(param_1);
  recovered_100055b0(&local_88);
  return;
}

#undef DAT_1001de4c
#undef LAB_1000530d
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

undefined8 recovered_10005340(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005350
 */

uint recovered_10005350(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005360
 */

void recovered_10005360(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005370
 */

void recovered_10005370(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005380
 */

long recovered_10005380(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  uVar5 = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10000d40(uVar5);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004f90();
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005430
 */

void recovered_10005430(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000d90((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005450
 */

long recovered_10005450(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1001f318
#define DAT_1001f318 (*(void * *)(((uintptr_t)pf_module_state + 0x1f15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005460
 */

void recovered_10005460(void)

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
      recovered_10000d90(pvVar2);
      return;
    }
  }
  return;
}

#undef DAT_1001f318

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b0
 */

void recovered_100054b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100054e0((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1001f318
#define DAT_1001f318 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1f15U)))
#undef DAT_1001f320
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1f1dU)))
#define cStack_36 (*(char *)(frame + 26))
#define uStack_35 (*(undefined1 *)(frame + 27))
#define uStack_34 (*(undefined4 *)(frame + 28))
#define local_38 (*(undefined2 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054e0
 */

void recovered_100054e0(undefined8 *param_1)

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
      uVar3 = recovered_10005ad0((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_10005630(param_1,in_RSI);
        puVar2 = DAT_1001f318;
        if (DAT_1001f318 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10004f90();
        }
        *(undefined1 *)(DAT_1001f318 + 5) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_100054e0(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004f90();
}

#undef DAT_1001f318
#undef DAT_1001f320
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1001f318
#define DAT_1001f318 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1f15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005560
 */

void recovered_10005560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1001f318;
  if (DAT_1001f318 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004f90();
  }
  *(undefined1 *)(DAT_1001f318 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100054e0(puVar1);
}

#undef DAT_1001f318

#undef DAT_1001f320
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1f1dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005590
 */

void recovered_10005590(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1001f320;
  DAT_1001f320 = param_1;
  return;
}

#undef DAT_1001f320

#undef DAT_1001f320
#define DAT_1001f320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f1dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(undefined8 *param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f0
 */

void recovered_100055f0(undefined8 *in_RDI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100054e0(in_RDI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005600
 */

void recovered_10005600(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004f90();
}


#undef DAT_1001f320
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1f1dU)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005610
 */

void recovered_10005610(undefined8 *param_1,byte *in_RSI)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;

  if (DAT_1001f320 != (undefined8 *)0x0) {
    DAT_1001f320 = (undefined8 *)*DAT_1001f320;
  }
  recovered_10005630(param_1,in_RSI);
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
        recovered_10004f20((long)puVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10005610(puVar3,in_RSI);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10005ad0((long)DAT_1001f320,in_RSI,(undefined2 *)&uStack_40);
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
  recovered_10004f90();
}

#undef DAT_1001f320
#undef uStack_40
#undef uStack_38

#undef DAT_1001f320
#define DAT_1001f320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1f1dU)))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005630
 */

void recovered_10005630(undefined8 *param_1,byte *in_RSI)

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
        recovered_10004f20((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_10005610(plVar3,in_RSI);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10005ad0((long)DAT_1001f320,in_RSI,(undefined2 *)&local_38);
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
  recovered_10004f90();
}

#undef DAT_1001f320
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

void recovered_100056d0(undefined8 *in_RDI,byte *in_RSI)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005610(in_RDI,in_RSI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e0
 */

undefined8 recovered_100056e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f0
 */

void recovered_100056f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004f90();
}


#undef DAT_1001f0c0
#define DAT_1001f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005700
 */

long recovered_10005700(long *param_1,undefined8 param_2,undefined8 *param_3)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e0
 */

void recovered_100057e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d10();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057f0
 */

undefined8 recovered_100057f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005800
 */

bool recovered_10005800(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005820
 */

bool recovered_10005820(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005850
 */

bool recovered_10005850(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005870
 */

bool recovered_10005870(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058a0
 */

bool recovered_100058a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c0
 */

byte recovered_100058c0(undefined8 in_stack_00000008,ushort in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005900
 */

bool recovered_10005900(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d438
#define DAT_1001d438 (*(double *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1001d478
#define DAT_1001d478 (*(double *)(((uintptr_t)pf_module_state + 0x75U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005930
 */

double recovered_10005930(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)recovered_10001af0(param_1);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005980
 */

long recovered_10005980(byte *param_1,undefined8 *param_2,uint param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

void recovered_10005ac0(byte *in_RDI,undefined8 *in_RSI,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005980(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_1001d538
#define DAT_1001d538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef DAT_1001f0c0
#define DAT_1001f0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbdU)))
#define local_40 (*(byte * *)(frame + 16))
#define local_31 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ad0
 */

undefined8 recovered_10005ad0(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_10005e70((uint)*pbVar8,(long *)&local_40);
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
    pbVar17 = recovered_10005e70((uint)uVar10,(long *)&local_40);
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
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e70
 */

byte * recovered_10005e70(uint param_1,long *param_2)

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
 * Address: 0x10006000
 */

int recovered_10006000(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  if (param_2 == 0 || param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_100060e8;
  }
  else {
    iVar1 = recovered_10001380((long)param_1,((uintptr_t)pf_module_state+0x34dU),8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  if (*param_1 == 0x42) {
    if (param_1[1] == 0x4d) {
      return 2;
    }
    if (param_2 < 3) goto LAB_100060e8;
  }
  else {
    if (param_2 < 3) goto LAB_100060e8;
    if (((*param_1 == 0xff) && (param_1[1] == 0xd8)) && (param_1[2] == 0xff)) {
      return 4;
    }
  }
  if (param_2 < 0xe) {
    if (param_2 < 8) goto LAB_100060e8;
  }
  else {
    iVar1 = recovered_10001380((long)param_1,((uintptr_t)pf_module_state+0x9a5U),9);
    if (iVar1 == 0) {
      return 5;
    }
  }
  iVar1 = recovered_10001380((long)param_1,((uintptr_t)pf_module_state+0x355U),8);
  if (iVar1 == 0) {
    return 6;
  }
LAB_100060e8:
  uVar2 = recovered_10006110(param_1,param_2);
  return ((uint)uVar2 & 0xff) * 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006110
 */

undefined8 recovered_10006110(byte *param_1,ulong param_2)

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
        (iVar6 = recovered_10001380((long)(param_1 + (param_2 - 0x12)),((uintptr_t)pf_module_state+0x9bcU),0x11), iVar6 == 0)
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


#undef DAT_1000b1c8
#define DAT_1000b1c8 (*(uint8_t *)(0x1000b1c8U))
#undef DAT_1001d410
#define DAT_1001d410 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d440
#define DAT_1001d440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1001d450
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_1001d478
#define DAT_1001d478 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x75U)))
#undef DAT_1001d4e0
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
#undef DAT_1001d5a0
#define DAT_1001d5a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19dU)))
#undef DAT_1001d690
#define DAT_1001d690 (*(double *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1001d698
#define DAT_1001d698 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_1001d6b0
#define DAT_1001d6b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef DAT_1001d6b8
#define DAT_1001d6b8 (*(double *)(((uintptr_t)pf_module_state + 0x2b5U)))
#undef DAT_1001d6c0
#define DAT_1001d6c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef DAT_1001d6c8
#define DAT_1001d6c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c5U)))
#undef DAT_1001d6d0
#define DAT_1001d6d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cdU)))
#undef DAT_1001d6d8
#define DAT_1001d6d8 (*(double *)(((uintptr_t)pf_module_state + 0x2d5U)))
#undef DAT_1001d6e0
#define DAT_1001d6e0 (*(double *)(((uintptr_t)pf_module_state + 0x2ddU)))
#undef DAT_1001d6e8
#define DAT_1001d6e8 (*(double *)(((uintptr_t)pf_module_state + 0x2e5U)))
#undef DAT_1001d6f0
#define DAT_1001d6f0 (*(double *)(((uintptr_t)pf_module_state + 0x2edU)))
#undef DAT_1001d6f8
#define DAT_1001d6f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f5U)))
#undef DAT_1001d760
#define DAT_1001d760 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x35dU)))
#undef DAT_1001de5c
#define DAT_1001de5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa59U)))
#undef DAT_1001f330
#define DAT_1001f330 (*(char *)(((uintptr_t)pf_module_state + 0x1f2dU)))
#undef DAT_1001f340
#define DAT_1001f340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f3dU)))
#undef DAT_1001f348
#define DAT_1001f348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f45U)))
#undef DAT_1001f350
#define DAT_1001f350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f4dU)))
#undef DAT_1001f358
#define DAT_1001f358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f55U)))
#undef DAT_1001f360
#define DAT_1001f360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f5dU)))
#undef DAT_1001f368
#define DAT_1001f368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f65U)))
#undef DAT_1001f370
#define DAT_1001f370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f6dU)))
#undef DAT_1001f378
#define DAT_1001f378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f75U)))
#undef LAB_1000b000
#define LAB_1000b000 (*(uint8_t *)(0x1000b000U))
#undef UNK_1001d5a8
#define UNK_1001d5a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a5U)))
#undef _DAT_1001d440
#define _DAT_1001d440 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_1001d5a0
#define _DAT_1001d5a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19dU)))
#undef _DAT_1001d698
#define _DAT_1001d698 (*(double *)(((uintptr_t)pf_module_state + 0x295U)))
#undef _DAT_1001d6a0
#define _DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef _DAT_1001d6a8
#define _DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef _DAT_1001d6b0
#define _DAT_1001d6b0 (*(double *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef _DAT_1001d6c0
#define _DAT_1001d6c0 (*(double *)(((uintptr_t)pf_module_state + 0x2bdU)))
#undef _DAT_1001d6c8
#define _DAT_1001d6c8 (*(double *)(((uintptr_t)pf_module_state + 0x2c5U)))
#undef _DAT_1001d6d0
#define _DAT_1001d6d0 (*(double *)(((uintptr_t)pf_module_state + 0x2cdU)))
#undef _DAT_1001d6f8
#define _DAT_1001d6f8 (*(double *)(((uintptr_t)pf_module_state + 0x2f5U)))
#undef uRam000000001001d5a8
#define uRam000000001001d5a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a5U)))
#define puStack_208 (*(uint * *)(frame + 2792))
#define uStack_1c0 (*(undefined8 *)(frame + 2864))
#define puStack_190 (*(uint * *)(frame + 2912))
#define uStack_180 (*(undefined8 *)(frame + 2928))
#define uStack_170 (*(undefined8 *)(frame + 2944))
#define uStack_160 (*(undefined8 *)(frame + 2960))
#define local_cd0 (*(undefined1 (*)[8])(frame + 32))
#define local_cc0 (*(undefined8 *)(frame + 48))
#define local_cb8 (*(uint *)(frame + 56))
#define local_ca8 (*(undefined1 *)(frame + 72))
#define local_ca0 (*(undefined8 *)(frame + 80))
#define local_8a8 (*(char (*)[8])(frame + 1096))
#define local_8a0 (*(long (*)[3])(frame + 1104))
#define local_888 (*(undefined1 *)(frame + 1128))
#define local_880 (*(undefined8 *)(frame + 1136))
#define local_870 (*(undefined8 *)(frame + 1152))
#define local_868 (*(undefined1 *)(frame + 1160))
#define local_860 (*(undefined8 *)(frame + 1168))
#define local_850 (*(undefined8 *)(frame + 1184))
#define local_848 (*(undefined1 *)(frame + 1192))
#define local_840 (*(undefined8 *)(frame + 1200))
#define local_830 (*(undefined8 *)(frame + 1216))
#define local_828 (*(char (*)[8])(frame + 1224))
#define local_820 (*(long (*)[3])(frame + 1232))
#define local_808 (*(undefined1 *)(frame + 1256))
#define local_800 (*(undefined8 *)(frame + 1264))
#define local_7e0 (*(undefined8 *)(frame + 1296))
#define local_7d0 (*(undefined8 *)(frame + 1312))
#define local_7c8 (*(undefined1 *)(frame + 1320))
#define local_7c0 (*(undefined1 (*)[16])(frame + 1328))
#define local_7b0 (*(undefined1 (*)[8])(frame + 1344))
#define local_7a0 (*(undefined1 (*)[16])(frame + 1360))
#define local_790 (*(undefined1 (*)[16])(frame + 1376))
#define local_780 (*(undefined1 (*)[12])(frame + 1392))
#define local_770 (*(undefined8 *)(frame + 1408))
#define local_768 (*(undefined8 *)(frame + 1416))
#define local_758 (*(undefined8 *)(frame + 1432))
#define local_740 (*(undefined8 *)(frame + 1456))
#define local_6f4 (*(undefined4 *)(frame + 1532))
#define local_6d4 (*(undefined8 *)(frame + 1564))
#define local_6c4 (*(undefined8 *)(frame + 1580))
#define local_6b4 (*(undefined8 *)(frame + 1596))
#define local_6a4 (*(undefined8 *)(frame + 1612))
#define local_694 (*(undefined8 *)(frame + 1628))
#define local_678 (*(undefined4 *)(frame + 1656))
#define local_338 (*(undefined8 *)(frame + 2488))
#define local_328 (*(undefined8 *)(frame + 2504))
#define local_318 (*(undefined8 *)(frame + 2520))
#define local_308 (*(undefined8 *)(frame + 2536))
#define local_2f8 (*(undefined8 *)(frame + 2552))
#define local_2e8 (*(undefined8 *)(frame + 2568))
#define local_2d8 (*(undefined8 *)(frame + 2584))
#define local_2c8 (*(undefined8 *)(frame + 2600))
#define local_2b8 (*(undefined8 *)(frame + 2616))
#define local_2a8 (*(undefined8 *)(frame + 2632))
#define local_298 (*(undefined8 *)(frame + 2648))
#define local_288 (*(undefined8 *)(frame + 2664))
#define local_278 (*(undefined8 *)(frame + 2680))
#define local_268 (*(undefined8 *)(frame + 2696))
#define local_260 (*(undefined1 *)(frame + 2704))
#define local_258 (*(undefined8 *)(frame + 2712))
#define local_250 (*(undefined8 *)(frame + 2720))
#define local_240 (*(undefined8 *)(frame + 2736))
#define local_238 (*(undefined8 *)(frame + 2744))
#define local_228 (*(undefined8 *)(frame + 2760))
#define local_220 (*(undefined8 *)(frame + 2768))
#define local_210 (*(undefined8 *)(frame + 2784))
#define auStack_cd8 (*(undefined1 (*)[8])(frame + 24))
#define local_200 (*(long *)(frame + 2800))
#define local_1f8 (*(long *)(frame + 2808))
#define local_1f0 (*(uint *)(frame + 2816))
#define uStack_cc8 (*(undefined8 *)(frame + 40))
#define local_1ec (*(uint *)(frame + 2820))
#define local_1e8 (*(undefined1 (*)[16])(frame + 2824))
#define auStack_cb4 (*(uint (*)[3])(frame + 60))
#define local_1d8 (*(undefined8 *)(frame + 2840))
#define local_1d0 (*(uint * *)(frame + 2848))
#define local_1c8 (*(undefined8 *)(frame + 2856))
#define uStack_ca7 (*(undefined1 *)(frame + 73))
#define local_1b4 (*(uint *)(frame + 2876))
#define uStack_ca6 (*(undefined6 *)(frame + 74))
#define local_1b0 (*(uint * *)(frame + 2880))
#define local_1a8 (*(uint * *)(frame + 2888))
#define local_1a0 (*(ulong *)(frame + 2896))
#define local_198 (*(undefined1 (*)[8])(frame + 2904))
#define local_188 (*(uint * *)(frame + 2920))
#define local_178 (*(undefined8 *)(frame + 2936))
#define uStack_878 (*(undefined8 *)(frame + 1144))
#define local_168 (*(undefined8 *)(frame + 2952))
#define local_154 (*(uint *)(frame + 2972))
#define local_150 (*(uint *)(frame + 2976))
#define local_14c (*(uint *)(frame + 2980))
#define uStack_858 (*(undefined8 *)(frame + 1176))
#define local_148 (*(ulong *)(frame + 2984))
#define local_140 (*(ulong *)(frame + 2992))
#define local_138 (*(uint * *)(frame + 3000))
#define local_130 (*(uint * *)(frame + 3008))
#define uStack_838 (*(undefined8 *)(frame + 1208))
#define local_128 (*(long *)(frame + 3016))
#define local_120 (*(uint * *)(frame + 3024))
#define local_118 (*(ulong *)(frame + 3032))
#define local_110 (*(undefined8 *)(frame + 3040))
#define local_108 (*(undefined4 *)(frame + 3048))
#define local_f0 (*(code * *)(frame + 3072))
#define uStack_7f8 (*(undefined1 *)(frame + 1272))
#define local_e8 (*(undefined * *)(frame + 3080))
#define uStack_7f7 (*(undefined7 *)(frame + 1273))
#define local_e0 (*(undefined1 * *)(frame + 3088))
#define uStack_7f0 (*(undefined8 *)(frame + 1280))
#define local_d8 (*(undefined1 * *)(frame + 3096))
#define uStack_7e8 (*(undefined1 *)(frame + 1288))
#define local_d0 (*(undefined1 * *)(frame + 3104))
#define local_b8 (*(uint * *)(frame + 3128))
#define uStack_7d8 (*(undefined1 *)(frame + 1304))
#define local_b0 (*(long *)(frame + 3136))
#define uStack_7d7 (*(undefined7 *)(frame + 1305))
#define local_a8 (*(uint * *)(frame + 3144))
#define local_a0 (*(ulong *)(frame + 3152))
#define local_98 (*(uint * *)(frame + 3160))
#define local_8c (*(uint *)(frame + 3172))
#define local_88 (*(undefined8 *)(frame + 3176))
#define puStack_7a8 (*(uint * *)(frame + 1352))
#define local_80 (*(uint ** *)(frame + 3184))
#define local_74 (*(uint *)(frame + 3196))
#define local_70 (*(uint * *)(frame + 3200))
#define iStack_774 (*(int *)(frame + 1404))
#define local_68 (*(uint * *)(frame + 3208))
#define local_60 (*(uint * *)(frame + 3216))
#define local_58 (*(uint * *)(frame + 3224))
#define local_50 (*(double * *)(frame + 3232))
#define uStack_760 (*(undefined8 *)(frame + 1424))
#define local_48 (*(uint * *)(frame + 3240))
#define local_40 (*(uint * *)(frame + 3248))
#define uStack_750 (*(uint *)(frame + 1440))
#define cStack_74c (*(char *)(frame + 1444))
#define local_38 (*(uint * *)(frame + 3256))
#define cStack_74b (*(char *)(frame + 1445))
#define cStack_74a (*(char *)(frame + 1446))
#define uStack_749 (*(undefined1 *)(frame + 1447))
#define uStack_748 (*(undefined8 *)(frame + 1448))
#define uStack_738 (*(undefined8 *)(frame + 1464))
#define uStack_730 (*(undefined8 *)(frame + 1472))
#define uStack_728 (*(undefined8 *)(frame + 1480))
#define uStack_720 (*(undefined8 *)(frame + 1488))
#define uStack_718 (*(undefined8 *)(frame + 1496))
#define uStack_710 (*(undefined4 *)(frame + 1504))
#define uStack_70c (*(undefined4 *)(frame + 1508))
#define uStack_708 (*(undefined4 *)(frame + 1512))
#define uStack_704 (*(undefined4 *)(frame + 1516))
#define uStack_700 (*(undefined4 *)(frame + 1520))
#define uStack_6fc (*(undefined4 *)(frame + 1524))
#define uStack_6f8 (*(undefined4 *)(frame + 1528))
#define uStack_6f0 (*(undefined4 *)(frame + 1536))
#define uStack_6ec (*(undefined4 *)(frame + 1540))
#define uStack_6e8 (*(undefined4 *)(frame + 1544))
#define uStack_6e4 (*(undefined4 *)(frame + 1548))
#define uStack_6e0 (*(undefined4 *)(frame + 1552))
#define uStack_6dc (*(undefined4 *)(frame + 1556))
#define uStack_6d8 (*(undefined4 *)(frame + 1560))
#define uStack_6cc (*(undefined8 *)(frame + 1572))
#define uStack_6bc (*(undefined8 *)(frame + 1588))
#define uStack_6ac (*(undefined8 *)(frame + 1604))
#define uStack_69c (*(undefined8 *)(frame + 1620))
#define uStack_68c (*(undefined8 *)(frame + 1636))
#define uStack_684 (*(undefined8 *)(frame + 1644))
#define uStack_67c (*(undefined4 *)(frame + 1652))
#define uStack_674 (*(undefined4 *)(frame + 1660))
#define uStack_670 (*(undefined8 *)(frame + 1664))
#define uStack_330 (*(undefined8 *)(frame + 2496))
#define uStack_310 (*(undefined8 *)(frame + 2528))
#define uStack_2f0 (*(undefined8 *)(frame + 2560))
#define uStack_2d0 (*(undefined8 *)(frame + 2592))
#define uStack_2b0 (*(undefined8 *)(frame + 2624))
#define uStack_290 (*(undefined8 *)(frame + 2656))
#define uStack_270 (*(undefined8 *)(frame + 2688))
#define uStack_248 (*(undefined8 *)(frame + 2728))
#define uStack_230 (*(undefined8 *)(frame + 2752))
#define uStack_218 (*(undefined8 *)(frame + 2776))
#define stack0xfffffffffffff888 (*(uint64_t *)(frame + 1400))
#define stack0xfffffffffffff331 (*(uint8_t *)(frame + 33))
#define stack0xfffffffffffff888 (*(uint64_t *)(frame + 1400))
#define stack0xfffffffffffff888 (*(uint64_t *)(frame + 1400))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10006270(void *param_1,ulong param_2,void *param_3)

{
  unsigned char frame[3344] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint128 auVar4;
  uint128 auVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint128 auVar11;
  uint128 auVar12;
  double dVar13;
  uchar uVar14;
  byte bVar15;
  ushort uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  ushort *puVar23;
  uint *puVar24;
  ulong uVar25;
  undefined4 extraout_var = 0;
  undefined7 uVar27;
  undefined8 *puVar26;
  char *pcVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  byte *pbVar33;
  ulong uVar34;
  undefined1 *puVar35;
  byte bVar36;
  int iVar37;
  uint *puVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  short sVar42;
  uint uVar43;
  int iVar44;
  uint *puVar45;
  long *plVar46;
  undefined1 auVar47 [8];
  long lVar48;
  uint *puVar49;
  undefined1 uVar50;
  double *pdVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint **ppuVar55;
  ulong uVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  bool bVar61;
  byte bVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  uint128 auVar68;

  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((long)param_3 + 0x10) = 0;
  recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
  *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
  *(undefined8 *)((long)param_3 + 0x18) = 0;
  recovered_100050c0(0);
  local_d0 = auStack_cd8;
  local_f0 = recovered_10005010;
  local_e8 = &DAT_1001de5c;
  local_d8 = &LAB_1000b000;
  local_e0 = (undefined1 *)((long)(uintptr_t)(frame + 3312) + -8);
  recovered_10005590(&local_110);
  bVar62 = 0;
  local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
  uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
  local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
  uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
  local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
  uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
  uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
  uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
  uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
  uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
  if (param_2 == 0 || param_1 == (void *)0x0) goto LAB_100091c5;
  local_108 = 0xffffffff;
  iVar17 = recovered_10006000(param_1,param_2);
  if (5 < iVar17 - 1U) goto LAB_10007705;
  ppuVar55 = (uint **)((long)param_3 + 8);
  local_138 = param_3;
  local_68 = param_1;
  local_58 = (uint *)param_2;
  switch((uintptr_t)(iVar17)) {
  case 2:
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    bVar62 = 0;
    recovered_100050c0(0);
    local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
    uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
    local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
    uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
    local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
    uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
    uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
    uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
    uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
    uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
    if (param_2 < 0x1a) goto LAB_100091c5;
    if ((*(char *)param_1 == 'B') && (*(char *)((long)param_1 + 1) == 'M')) {
      uVar20 = *(uint *)((long)param_1 + 0xe);
      uVar57 = (ulong)uVar20;
      if (uVar57 == 0xc || 0x27 < uVar57) {
        puVar45 = (uint *)(ulong)*(uint *)((long)param_1 + 10);
        puVar38 = (uint *)(uVar57 + 0xe);
        if (uVar57 == 0xc) {
          uVar19 = (uint)*(ushort *)((long)param_1 + 0x12);
          uVar53 = (uint)*(ushort *)((long)param_1 + 0x14);
          sVar42 = *(short *)((long)param_1 + 0x16);
          uVar16 = *(ushort *)((long)param_1 + 0x18);
          uVar54 = 0;
          iVar17 = 0;
          local_88 = (uint *)((ulong)PF_PART4(local_88, 4) << 0x20);
LAB_100070b2:
          if (((uVar53 != 0 && uVar19 != 0) && sVar42 == 1) &&
             (puVar49 = (uint *)(param_2 - (long)puVar45),
             puVar45 <= param_2 && puVar49 != (uint *)0x0)) {
            if (iVar17 == 0) {
              iVar37 = 0;
              uVar43 = 0;
              iVar44 = 0;
              uVar52 = 0;
            }
            else {
              if ((iVar17 != 6) && (iVar17 != 3)) goto LAB_10007705;
              if (uVar20 < 0x34) {
                uVar52 = 0;
                bVar62 = 0;
                local_48 = puVar49;
                local_40 = puVar38;
                local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
                uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
                local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
                uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
                local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
                uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
                uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
                uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
                uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
                uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
                if (param_2 < (ulong)(iVar17 == 6) * 4 + 0x42) goto LAB_100091c5;
                uVar43 = *(uint *)((long)param_1 + 0x36);
                iVar44 = *(int *)((long)param_1 + 0x3a);
                iVar37 = *(int *)((long)param_1 + 0x3e);
                if (iVar17 == 6) goto LAB_100085db;
              }
              else {
                uVar43 = *(uint *)((long)param_1 + 0x36);
                iVar44 = *(int *)((long)param_1 + 0x3a);
                iVar37 = *(int *)((long)param_1 + 0x3e);
                uVar52 = 0;
                if (0x37 < uVar20) {
LAB_100085db:
                  uVar52 = *(uint *)((long)param_1 + 0x42);
                }
              }
            }
            local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),uVar19);
            local_a0 = (ulong)uVar16;
            bVar7 = uVar43 != 0;
            bVar8 = iVar44 != 0;
            bVar6 = uVar16 != 0x10;
            bVar61 = iVar37 != 0;
            iVar17 = 0x1f;
            if (((bVar7 || bVar8) || bVar6) || bVar61) {
              iVar17 = iVar37;
            }
            iVar37 = 0x3e0;
            if (((bVar7 || bVar8) || bVar6) || bVar61) {
              iVar37 = iVar44;
            }
            local_8c = 0x7c00;
            if (((bVar7 || bVar8) || bVar6) || bVar61) {
              local_8c = uVar43;
            }
            PF_PART4(local_768, 0) = 0;
            PF_PART4(local_768, 4) = 0;
            PF_PART4(uStack_760, 0) = 0;
            PF_PART4(uStack_760, 4) = 0;
            PF_PART4(local_758, 0) = 0;
            PF_PART4(local_758, 4) = 0;
            puVar24 = (uint *)(ulong)(uint)uVar16;
            local_50 = (double *)CONCAT44(PF_PART4(local_50, 4),uVar53);
            local_74 = uVar52;
            if ((((uVar16 == 0x20) && (local_8c == 0)) && (iVar37 == 0)) && (iVar17 == 0)) {
              local_8c = 0xff0000;
              iVar37 = 0xff00;
              iVar17 = 0xff;
              uVar20 = 0xff000000;
              local_48 = puVar49;
              local_40 = puVar38;
LAB_100087c9:
              local_60 = (uint *)((ulong)local_38 & 0xffffffff);
              uVar57 = (long)puVar24 * (long)local_60 + 0x1fU >> 3 & 0xffffffffffc;
              if (uVar57 != 0) {
                uVar34 = CONCAT44(0,uVar53);
                PF_PART8(auVar3, 8) = 0;
                PF_PART8(auVar3, 0) = uVar57;
                PF_PART8(auVar5, 8) = 0;
                PF_PART8(auVar5, 0) = uVar34;
                if (SUB168(auVar3 * auVar5,8) == 0) {
                  local_118 = CONCAT44(PF_PART4(local_118, 4),iVar37);
                  local_130 = (uint *)CONCAT44(PF_PART4(local_130, 4),iVar17);
                  local_148 = uVar57;
                  local_80 = ppuVar55;
                  local_74 = uVar20;
                  local_58 = puVar45;
                  if ((uint *)(uVar57 * uVar34) <= local_48) {
                    local_108 = 2;
                    local_1a0 = uVar34;
                    recovered_10015790((long *)local_cd0,uVar34 * (long)local_60 * 4);
                    local_68 = (uint *)((long)local_68 + (long)local_58);
                    local_120 = (uint *)(local_a0 >> 3 & 0x1fffffff);
                    local_200 = (long)local_60 * 4;
                    puVar38 = (uint *)0x0;
                    local_b8 = (uint *)(ulong)((int)local_a0 - 1);
                    uVar34 = 0;
                    uVar21 = 0;
                    local_70 = (uint *)0x0;
                    uVar57 = (ulong)local_50 & 0xffffffff;
                    do {
                      uVar25 = (ulong)(~(uint)uVar34 + (int)uVar57);
                      if ((char)local_88 != '\0') {
                        uVar25 = uVar34 & 0xffffffff;
                      }
                      puVar45 = (uint *)(uVar25 * local_148 + (long)local_68);
                      puVar49 = (uint *)0x2;
                      puVar24 = (uint *)0x0;
                      local_1a8 = (uint *)uVar21;
                      local_140 = uVar34;
                      local_a8 = puVar45;
                      local_98 = puVar38;
                      do {
                        puVar41 = local_98;
                        (*(uint64_t *)(void *)auVar47) = *(uint64_t *)(void *)local_cd0;
                        local_58 = puVar24;
                        local_48 = puVar45;
                        local_40 = puVar38;
                        local_38 = puVar49;
                        if ((uint)local_b8 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x10008aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar14 = (*(code *)(&DAT_1000b1c8 +
                                             *(int *)(&DAT_1000b1c8 + (long)local_b8 * 4)))();
                          return uVar14;
                        }
                        if ((uint)local_a0 == 0x10) {
                          uVar20 = (uint)(ushort)*puVar45;
                        }
                        else {
                          uVar20 = *puVar45;
                        }
                        auVar68 = recovered_10015920(uVar20,local_8c,uVar57);
                        *(byte *)((long)puVar41 + (long)((*(uint64_t *)(void *)auVar47) + (uintptr_t)(uintptr_t)(uintptr_t)puVar24 * 4)) = PF_PART1(auVar68,0);
                        auVar68 = recovered_10015920(uVar20,(uint)local_118,PF_PART8(auVar68, 8));
                        *(byte *)((long)puVar41 + (*(uint64_t *)(void *)auVar47) + (long)(uintptr_t)(uintptr_t)(uintptr_t)puVar24 * 4 + 1) =
                             PF_PART1(auVar68,0);
                        auVar68 = recovered_10015920(uVar20,(uint)local_130,PF_PART8(auVar68, 8));
                        *(byte *)((long)puVar41 + (*(uint64_t *)(void *)auVar47) + (long)(uintptr_t)(uintptr_t)(uintptr_t)puVar24 * 4 + 2) =
                             PF_PART1(auVar68,0);
                        if (local_74 == 0) {
                          bVar62 = 0xff;
                        }
                        else {
                          auVar68 = recovered_10015920(uVar20,local_74,PF_PART8(auVar68, 8));
                          bVar62 = PF_PART1(auVar68,0);
                        }
                        puVar39 = local_138;
                        *(byte *)((long)puVar41 + (*(uint64_t *)(void *)auVar47) + (long)(uintptr_t)(uintptr_t)(uintptr_t)puVar24 * 4 + 3) = bVar62;
                        uVar27 = (undefined7)((ulong)local_70 >> 8);
                        local_70 = (uint *)(CONCAT71(uVar27,(byte)local_70 | bVar62 != 0) &
                                           0xffffffffffffff01);
                        puVar24 = (uint *)((long)local_58 + 1);
                        puVar45 = (uint *)((long)local_48 + (long)local_120);
                        puVar49 = (uint *)((long)local_38 + 3);
                        puVar38 = local_40 + 1;
                        uVar57 = (ulong)local_50 & 0xffffffff;
                      } while (local_60 != puVar24);
                      uVar34 = local_140 + 1;
                      puVar38 = (uint *)((long)local_98 + local_200);
                      uVar21 = CONCAT71(uVar27,local_1a0 <= uVar34);
                    } while (uVar34 != local_1a0);
                    if ((((uint)local_a0 == 0x20) && (local_74 != 0)) &&
                       (((char)local_70 == '\0' && (3 < uStack_cc8)))) {
                      uVar57 = 3;
                      do {
                        *(undefined1 *)((*(uint64_t *)(void *)local_cd0) + uVar57) = 0xff;
                        uVar57 = uVar57 + 4;
                      } while (uVar57 < uStack_cc8);
                    }
                    *local_138 = (uint)local_60;
                    local_138[1] = (uint)local_50;
                    if (local_80 == (uint **)local_cd0) {
                      uVar27 = (undefined7)((*(uint64_t *)(void *)local_cd0) >> 8);
                    }
                    else {
                      local_138[4] = 0;
                      local_138[5] = 0;
                      recovered_100050c0(*(undefined8 *)(local_138 + 2));
                      auVar68 = (*(uint128 *)(void *)&local_cd0);
                      *(uint64_t *)(puVar39 + 2) = *(uint64_t *)(void *)&local_cd0;
                      *(uint **)(puVar39 + 4) = uStack_cc8;
                      *(uint **)(puVar39 + 6) = local_cc0;
                      (*(uint64_t *)(void *)local_cd0) = (uint64_t)0x0;
                      local_cc0 = (uint *)0x0;
                      uVar27 = PF_PART7(auVar68, 1);
                    }
                    local_1a8 = (uint *)CONCAT71(uVar27,1);
                    uStack_cc8 = (uint *)0x0;
                    recovered_100050c0(*(uint64_t *)(void *)local_cd0);
                    puVar41 = local_1a8;
                    goto LAB_10008826;
                  }
                }
              }
              puVar41 = (uint *)0x0;
            }
            else {
              local_48 = puVar49;
              local_40 = puVar38;
              if (uVar16 < 9) {
                uVar19 = 1 << ((byte)uVar16 & 0x1f);
                if (uVar54 != 0) {
                  uVar19 = uVar54;
                }
                puVar39 = (uint *)(ulong)uVar19;
                puVar41 = (uint *)0x0;
                if (puVar38 <= param_2) {
                  local_60 = (uint *)((ulong)(uVar20 != 0xc) + 3);
                  if ((ulong)((long)local_60 * (long)puVar39) <= param_2 - (long)puVar38) {
                    local_118 = CONCAT44(PF_PART4(local_118, 4),iVar37);
                    local_130 = (uint *)CONCAT44(PF_PART4(local_130, 4),iVar17);
                    local_cd0[0] = 0xff;
                    local_108 = 1;
                    local_b8 = puVar39;
                    local_98 = puVar24;
                    local_80 = ppuVar55;
                    local_58 = puVar45;
                    recovered_10015600(&local_768,(long)puVar39 * 4,local_cd0);
                    uVar57 = 1;
                    if (1 < (uint)local_b8) {
                      uVar57 = (ulong)local_b8 & 0xffffffff;
                    }
                    pbVar29 = (byte *)((long)local_68 + (long)local_40) + 2;
                    uVar34 = 0;
                    do {
                      *(byte *)(CONCAT44(PF_PART4(local_768, 4),(uint)local_768) + uVar34 * 4) = *pbVar29;
                      *(byte *)(CONCAT44(PF_PART4(local_768, 4),(uint)local_768) + 1 + uVar34 * 4) =
                           pbVar29[-1];
                      *(byte *)(CONCAT44(PF_PART4(local_768, 4),(uint)local_768) + 2 + uVar34 * 4) =
                           pbVar29[-2];
                      uVar34 = uVar34 + 1;
                      pbVar29 = pbVar29 + (long)local_60;
                      puVar24 = local_98;
                      ppuVar55 = local_80;
                      puVar45 = local_58;
                      uVar53 = (uint)local_50;
                      iVar17 = (uint)local_130;
                      iVar37 = (uint)local_118;
                    } while (uVar57 != uVar34);
                    goto LAB_100087ab;
                  }
                }
              }
              else {
LAB_100087ab:
                puVar41 = (uint *)0x0;
                if (((uint)local_a0 < 0x21) &&
                   (uVar20 = local_74, (0x101010112U >> ((ulong)puVar24 & 0x3f) & 1) != 0))
                goto LAB_100087c9;
              }
            }
LAB_10008826:
            bVar62 = (byte)puVar41;
            PF_PART4(uStack_760, 0) = 0;
            PF_PART4(uStack_760, 4) = 0;
            recovered_100050c0(CONCAT44(PF_PART4(local_768, 4),(uint)local_768));
            local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
            uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
            local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
            uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
            local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
            uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
            uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
            uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
            uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
            uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
            goto LAB_100091c5;
          }
        }
        else if (uVar20 + 0xe <= param_2) {
          uVar19 = *(uint *)((long)param_1 + 0x12);
          uVar54 = *(uint *)((long)param_1 + 0x16);
          if (uVar54 != 0 && 0 < (int)uVar19) {
            local_88 = (uint *)CONCAT44(PF_PART4(local_88, 4),uVar54 >> 0x1f);
            uVar53 = -uVar54;
            if ((int)-uVar54 < 0) {
              uVar53 = uVar54;
            }
            sVar42 = *(short *)((long)param_1 + 0x1a);
            uVar16 = *(ushort *)((long)param_1 + 0x1c);
            iVar17 = *(int *)((long)param_1 + 0x1e);
            uVar54 = *(uint *)((long)param_1 + 0x2e);
            if ((uVar20 == 0x28) && ((iVar17 == 6 || (iVar17 == 3)))) {
              puVar38 = (uint *)((ulong)(iVar17 == 6) * 4 + 0x42);
            }
            goto LAB_100070b2;
          }
        }
      }
    }
    goto LAB_10007705;
  case 3:
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    bVar62 = 0;
    recovered_100050c0(0);
    local_108 = 0xffffffff;
    uVar21 = recovered_10006110(param_1,param_2);
    local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
    uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
    local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
    uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
    local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
    uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
    uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
    uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
    uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
    uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
    if ((char)uVar21 == '\0') goto LAB_100091c5;
    bVar62 = *(byte *)((long)param_1 + 2);
    puVar45 = (uint *)(ulong)bVar62;
    local_1b0 = (uint *)CONCAT44(PF_PART4(local_1b0, 4),(uint)*(ushort *)((long)param_1 + 3));
    uVar16 = *(ushort *)((long)param_1 + 5);
    local_154 = (uint)uVar16;
    puVar38 = (uint *)(ulong)*(byte *)((long)param_1 + 7);
    local_150 = (uint)*(ushort *)((long)param_1 + 0xc);
    local_14c = (uint)*(ushort *)((long)param_1 + 0xe);
    local_1b4 = (uint)*(byte *)((long)param_1 + 0x10);
    local_1f0 = (uint)*(byte *)((long)param_1 + 0x11);
    local_1ec = bVar62 - 8;
    if (bVar62 < 8) {
      local_1ec = (uint)bVar62;
    }
    puVar49 = (uint *)((ulong)*(byte *)param_1 + 0x12);
    (*(uint64_t *)(void *)local_cd0) = (uint64_t)0x0;
    uStack_cc8 = (uint *)0x0;
    local_cc0 = (uint *)0x0;
    if (*(char *)((long)param_1 + 1) == '\x01') {
      bVar62 = 0;
      local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
      uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
      local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
      uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
      local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
      uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
      uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
      uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
      uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
      uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
      if (puVar49 <= param_2) {
        puVar24 = (uint *)(ulong)(*(byte *)((long)param_1 + 7) + 7 >> 3);
        puVar41 = (uint *)((long)puVar24 * (ulong)uVar16);
        local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
        uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
        local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
        uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
        local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
        uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
        uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
        uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
        uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
        uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
        if (puVar41 <= (uint *)(param_2 - (long)puVar49)) {
          puVar39 = (uint *)(ulong)((uint)uVar16 * 4);
          local_50 = (double *)puVar41;
          local_48 = puVar24;
          if ((ulong)uVar16 == 0) {
            puVar24 = (uint *)0x0;
          }
          else {
            local_108 = 4;
            local_88 = puVar39;
            local_80 = ppuVar55;
            local_60 = puVar38;
            local_40 = puVar45;
            local_38 = puVar49;
            puVar41 = (uint *)recovered_10005060((long)puVar39);
            puVar38 = local_60;
            param_1 = local_68;
            ppuVar55 = local_80;
            puVar24 = uStack_cc8;
            if (uStack_cc8 != (uint *)0x0) {
              puVar45 = (uint *)0x0;
              if (((uint *)0x3 < uStack_cc8) && (0x1f < (ulong)((long)puVar41 - (*(uint64_t *)(void *)local_cd0)))) {
                if (uStack_cc8 < (uint *)0x20) {
                  puVar49 = (uint *)0x0;
                }
                else {
                  puVar45 = (uint *)((ulong)uStack_cc8 & 0xffffffffffffffe0);
                  puVar49 = (uint *)0x0;
                  do {
                    uVar21 = *(undefined8 *)((byte *)((*(uint64_t *)(void *)local_cd0) + (long)puVar49) + 8);
                    uVar9 = *(undefined8 *)((long)((*(uint64_t *)(void *)local_cd0) + 0x10) + (long)puVar49);
                    uVar10 = *(undefined8 *)
                              ((byte *)((long)((*(uint64_t *)(void *)local_cd0) + 0x10) + (long)puVar49) + 8);
                    *(undefined8 *)((long)puVar41 + (long)puVar49) =
                         *(undefined8 *)((*(uint64_t *)(void *)local_cd0) + (long)puVar49);
                    *(undefined8 *)((byte *)((long)puVar41 + (long)puVar49) + 8) = uVar21;
                    *(undefined8 *)((long)(puVar41 + 4) + (long)puVar49) = uVar9;
                    *(undefined8 *)((byte *)((long)(puVar41 + 4) + (long)puVar49) + 8) = uVar10;
                    puVar49 = puVar49 + 8;
                  } while (puVar45 != puVar49);
                  if (uStack_cc8 == puVar45) goto LAB_1000792b;
                  puVar49 = puVar45;
                  if (((ulong)uStack_cc8 & 0x1c) == 0) goto LAB_100078d8;
                }
                puVar45 = (uint *)((ulong)uStack_cc8 & 0xfffffffffffffffc);
                do {
                  *(undefined4 *)((long)puVar41 + (long)puVar49) =
                       *(undefined4 *)((*(uint64_t *)(void *)local_cd0) + (long)puVar49);
                  puVar49 = puVar49 + 1;
                } while (puVar45 != puVar49);
                if (uStack_cc8 == puVar45) goto LAB_1000792b;
              }
LAB_100078d8:
              uVar57 = (ulong)uStack_cc8 & 3;
              puVar49 = puVar45;
              if (uVar57 != 0) {
                do {
                  *(byte *)((long)puVar41 + (long)puVar49) =
                       *(byte *)((*(uint64_t *)(void *)local_cd0) + (long)puVar49);
                  puVar49 = (uint *)((long)puVar49 + 1);
                  uVar57 = uVar57 - 1;
                } while (uVar57 != 0);
              }
              if ((ulong)((long)puVar45 - (long)uStack_cc8) < 0xfffffffffffffffd) {
                do {
                  *(byte *)((long)puVar41 + (long)puVar49) =
                       *(byte *)((*(uint64_t *)(void *)local_cd0) + (long)puVar49);
                  *(byte *)((long)puVar41 + 1U + (long)puVar49) =
                       *(byte *)((*(uint64_t *)(void *)local_cd0) + 1U + (long)puVar49);
                  *(byte *)((long)puVar41 + 2U + (long)puVar49) =
                       *(byte *)((*(uint64_t *)(void *)local_cd0) + 2U + (long)puVar49);
                  *(byte *)((long)puVar41 + 3U + (long)puVar49) =
                       *(byte *)((*(uint64_t *)(void *)local_cd0) + 3U + (long)puVar49);
                  puVar49 = puVar49 + 1;
                } while (uStack_cc8 != puVar49);
              }
            }
LAB_1000792b:
            recovered_100050c0(*(uint64_t *)(void *)local_cd0);
            local_cc0 = local_88;
            puVar39 = local_88;
            puVar49 = local_38;
            puVar45 = local_40;
            (*(uint64_t *)(void *)local_cd0) = (uint64_t)puVar41;
          }
          while( true ) {
            if (puVar39 <= puVar24) break;
            *(byte *)((*(uint64_t *)(void *)local_cd0) + (long)puVar24) = 0xff;
            puVar24 = (uint *)((long)uStack_cc8 + 1);
            uStack_cc8 = puVar24;
          }
          if (local_154 != 0) {
            puVar23 = (ushort *)((long)param_1 + (long)puVar49);
            iVar17 = (int)puVar38;
            uVar57 = 0;
            do {
              if ((char)puVar38 == '\b') {
                bVar62 = (byte)*puVar23;
                *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4) = bVar62;
LAB_10007a32:
                *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 1) = bVar62;
                *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 2) = (byte)*puVar23;
LAB_10007a05:
                bVar62 = 0xff;
              }
              else {
                if (iVar17 - 0xfU < 2) {
                  uVar16 = *puVar23;
                  *(char *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4) =
                       (char)((uVar16 >> 10 & 0x1f) * 0x20e7f7 >> 0x12);
                  *(char *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 1) =
                       (char)((uVar16 >> 5 & 0x1f) * 0x20e7f7 >> 0x12);
                  *(char *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 2) =
                       (char)((uVar16 & 0x1f) * 0x20e7f7 >> 0x12);
                  goto LAB_10007a05;
                }
                if (iVar17 != 0x20) {
                  if (iVar17 == 0x18) {
                    *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4) = (byte)puVar23[1];
                    bVar62 = *(byte *)((long)puVar23 + 1);
                    goto LAB_10007a32;
                  }
                  bVar62 = 0;
                  goto LAB_10007ef4;
                }
                *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4) = (byte)puVar23[1];
                *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 1) = *(byte *)((long)puVar23 + 1);
                *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 2) = (byte)*puVar23;
                bVar62 = *(byte *)((long)puVar23 + 3);
              }
              *(byte *)((*(uint64_t *)(void *)local_cd0) + uVar57 * 4 + 3) = bVar62;
              uVar57 = uVar57 + 1;
              puVar23 = (ushort *)((long)puVar23 + (long)local_48);
            } while (uVar57 < local_154);
          }
          puVar49 = (uint *)((long)puVar49 + (long)local_50);
          goto LAB_10007a96;
        }
      }
    }
    else {
LAB_10007a96:
      local_1d0 = (uint *)((ulong)local_14c * (ulong)local_150);
      if ((ulong)local_1d0 >> 0x3e == 0) {
        (*(uint64_t *)(void *)local_198) = (uint64_t)0x0;
        puStack_190 = (uint *)0x0;
        local_188 = (uint *)0x0;
        local_80 = ppuVar55;
        if (local_1d0 != (uint *)0x0) {
          local_48 = (uint *)((long)local_1d0 * 4);
          local_108 = 5;
          local_40 = puVar45;
          local_38 = puVar49;
          puVar24 = (uint *)recovered_10005060((long)local_48);
          param_1 = local_68;
          puVar38 = puStack_190;
          if (puStack_190 != (uint *)0x0) {
            puVar45 = (uint *)0x0;
            if (((uint *)0x3 < puStack_190) && (0x1f < (ulong)((long)puVar24 - (*(uint64_t *)(void *)local_198)))) {
              if (puStack_190 < (uint *)0x20) {
                puVar49 = (uint *)0x0;
              }
              else {
                puVar45 = (uint *)((ulong)puStack_190 & 0xffffffffffffffe0);
                puVar49 = (uint *)0x0;
                do {
                  uVar21 = *(undefined8 *)((byte *)((*(uint64_t *)(void *)local_198) + (long)puVar49) + 8);
                  uVar9 = *(undefined8 *)((long)((*(uint64_t *)(void *)local_198) + 0x10) + (long)puVar49);
                  uVar10 = *(undefined8 *)
                            ((byte *)((long)((*(uint64_t *)(void *)local_198) + 0x10) + (long)puVar49) + 8);
                  *(undefined8 *)((long)puVar24 + (long)puVar49) =
                       *(undefined8 *)((*(uint64_t *)(void *)local_198) + (long)puVar49);
                  *(undefined8 *)((byte *)((long)puVar24 + (long)puVar49) + 8) = uVar21;
                  *(undefined8 *)((long)(puVar24 + 4) + (long)puVar49) = uVar9;
                  *(undefined8 *)((byte *)((long)(puVar24 + 4) + (long)puVar49) + 8) = uVar10;
                  puVar49 = puVar49 + 8;
                } while (puVar45 != puVar49);
                if (puStack_190 == puVar45) goto LAB_10007bdb;
                puVar49 = puVar45;
                if (((ulong)puStack_190 & 0x1c) == 0) goto LAB_10007b88;
              }
              puVar45 = (uint *)((ulong)puStack_190 & 0xfffffffffffffffc);
              do {
                *(undefined4 *)((long)puVar24 + (long)puVar49) =
                     *(undefined4 *)((*(uint64_t *)(void *)local_198) + (long)puVar49);
                puVar49 = puVar49 + 1;
              } while (puVar45 != puVar49);
              if (puStack_190 == puVar45) goto LAB_10007bdb;
            }
LAB_10007b88:
            uVar57 = (ulong)puStack_190 & 3;
            puVar49 = puVar45;
            if (uVar57 != 0) {
              do {
                *(byte *)((long)puVar24 + (long)puVar49) =
                     *(byte *)((*(uint64_t *)(void *)local_198) + (long)puVar49);
                puVar49 = (uint *)((long)puVar49 + 1);
                uVar57 = uVar57 - 1;
              } while (uVar57 != 0);
            }
            if ((ulong)((long)puVar45 - (long)puStack_190) < 0xfffffffffffffffd) {
              do {
                *(byte *)((long)puVar24 + (long)puVar49) =
                     *(byte *)((*(uint64_t *)(void *)local_198) + (long)puVar49);
                *(byte *)((long)puVar24 + 1U + (long)puVar49) =
                     *(byte *)((*(uint64_t *)(void *)local_198) + 1U + (long)puVar49);
                *(byte *)((long)puVar24 + 2U + (long)puVar49) =
                     *(byte *)((*(uint64_t *)(void *)local_198) + 2U + (long)puVar49);
                *(byte *)((long)puVar24 + 3U + (long)puVar49) =
                     *(byte *)((*(uint64_t *)(void *)local_198) + 3U + (long)puVar49);
                puVar49 = puVar49 + 1;
              } while (puStack_190 != puVar49);
            }
          }
LAB_10007bdb:
          recovered_100050c0(*(uint64_t *)(void *)local_198);
          local_188 = local_48;
          while( true ) {
            puVar49 = local_38;
            puVar45 = local_40;
            (*(uint64_t *)(void *)local_198) = (uint64_t)puVar24;
            if (local_48 <= puVar38) break;
            *(byte *)((long)puVar24 + (long)puVar38) = 0;
            puVar38 = (uint *)((long)puStack_190 + 1);
            puStack_190 = puVar38;
          }
        }
        local_50 = (double *)((ulong)local_1b4 + 7 >> 3);
        PF_PART8(auVar12, 8) = 0;
        PF_PART8(auVar12, 0) = PF_PART8(local_1e8, 8);
        (*(uint128 *)(void *)local_1e8) = auVar12 << 0x40;
        local_768 = (uint *)local_1e8;
        uStack_760 = &local_1d0;
        local_758 = &local_1ec;
        uStack_750 = (uint)&local_1b4;
        cStack_74c = (char)((ulong)&local_1b4 >> 0x20);
        cStack_74b = (char)((ulong)&local_1b4 >> 0x28);
        cStack_74a = (char)((ulong)&local_1b4 >> 0x30);
        uStack_749 = (undefined1)((ulong)&local_1b4 >> 0x38);
        uStack_748 = &local_1b0;
        local_740 = &local_154;
        uStack_738 = *(uint64_t *)(void *)local_cd0;
        uStack_730 = &local_1f0;
        uStack_728 = &local_150;
        uStack_720 = &local_14c;
        uStack_718 = local_198;
        if ((byte)puVar45 < 8) {
          if (local_1d0 == (uint *)0x0) {
            if (puVar49 <= local_58) goto LAB_10007e70;
LAB_10007e6c:
            bVar62 = 0;
          }
          else {
            bVar62 = 0;
            PF_PART8(auVar2, 8) = 0;
            PF_PART8(auVar2, 0) = local_1d0;
            PF_PART8(auVar4, 8) = 0;
            PF_PART8(auVar4, 0) = local_50;
            if (((SUB168(auVar2 * auVar4,8) == 0) && (puVar49 <= local_58)) &&
               ((ulong)((long)local_1d0 * (long)local_50) <= (ulong)((long)local_58 - (long)puVar49)
               )) {
              puVar49 = (uint *)((long)param_1 + (long)puVar49);
              puVar38 = (uint *)0x0;
              do {
                local_108 = 6;
                local_68 = puVar49;
                local_38 = puVar38;
                uVar21 = recovered_100159b0(&local_768,(ushort *)puVar49);
                if ((char)uVar21 == '\0') goto LAB_10007e6c;
                puVar38 = (uint *)((long)local_38 + 1);
                puVar49 = (uint *)((long)local_68 + (long)local_50);
              } while (puVar38 < local_1d0);
              goto LAB_10007e70;
            }
          }
        }
        else {
          if (local_1d0 != (uint *)0x0) {
            local_60 = (uint *)((long)local_58 + -1);
            do {
              if (local_58 <= puVar49) goto LAB_10007e6c;
              puVar38 = (uint *)((long)puVar49 + 1);
              iVar17 = (*(byte *)((long)param_1 + (long)puVar49) & 0x7f) + 1;
              if ((char)*(byte *)((long)param_1 + (long)puVar49) < '\0') {
                if ((uint *)((long)local_58 - (long)puVar38) < local_50) goto LAB_10007e6c;
                local_48 = (uint *)((long)param_1 + (long)puVar38);
                local_40 = (uint *)((long)puVar38 + (long)local_50);
                do {
                  local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),iVar17);
                  local_108 = 7;
                  uVar21 = recovered_100159b0(&local_768,(ushort *)local_48);
                  if ((char)uVar21 == '\0') goto LAB_10007e6c;
                  iVar17 = (uint)local_38 + -1;
                } while (iVar17 != 0);
                puVar38 = local_40;
              }
              else {
                puVar45 = (uint *)((long)local_60 - (long)puVar49);
                do {
                  bVar62 = 0;
                  if ((local_58 < puVar38) || (puVar45 < local_50)) goto LAB_10007ed6;
                  local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),iVar17);
                  local_108 = 8;
                  local_48 = (uint *)((long)puVar45 - (long)local_50);
                  local_40 = puVar38;
                  uVar21 = recovered_100159b0(&local_768,(ushort *)((long)param_1 + (long)puVar38));
                  if ((char)uVar21 == '\0') goto LAB_10007e6c;
                  puVar38 = (uint *)((long)local_40 + (long)local_50);
                  iVar17 = (uint)local_38 + -1;
                  puVar45 = local_48;
                  param_1 = local_68;
                } while (iVar17 != 0);
              }
              puVar49 = puVar38;
              param_1 = local_68;
            } while ((ulong)PF_PART8(local_1e8, 0) < local_1d0);
          }
LAB_10007e70:
          puVar38 = local_138;
          *local_138 = local_150;
          local_138[1] = local_14c;
          if (local_80 != (uint **)local_198) {
            local_138[4] = 0;
            local_138[5] = 0;
            recovered_100050c0(*(undefined8 *)(local_138 + 2));
            *(uint64_t *)(puVar38 + 2) = *(uint64_t *)(void *)&local_198;
            *(uint **)(puVar38 + 4) = puStack_190;
            *(uint **)(puVar38 + 6) = local_188;
            (*(uint64_t *)(void *)local_198) = (uint64_t)0x0;
            local_188 = (uint *)0x0;
          }
          bVar62 = 1;
        }
LAB_10007ed6:
        puStack_190 = (uint *)0x0;
        recovered_100050c0(*(uint64_t *)(void *)local_198);
      }
      else {
        bVar62 = 0;
      }
    }
LAB_10007ef4:
    uStack_cc8 = (uint *)0x0;
    recovered_100050c0(*(uint64_t *)(void *)local_cd0);
    goto LAB_100091c5;
  case 4:
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    recovered_100050c0(0);
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    local_800 = 0;
    uStack_7f8 = 0;
    uStack_7f7 = 0;
    local_7e0 = 0;
    uStack_7d8 = 0;
    uStack_7d7 = 0;
    local_7d0 = 0;
    local_7c8 = 0;
    (*(uint128 *)(void *)local_7c0) = (uint128)0x0;
    (*(uint128 *)(void *)&local_7b0) = (uint128)0x0;
    (*(uint128 *)(void *)local_7a0) = (uint128)0x0;
    (*(uint128 *)(void *)local_790) = (uint128)0x0;
    (*(uint128 *)(void *)&local_780) = (uint128)0x0;
    local_770 = (uint *)0x0;
    PF_PART4(local_768, 0) = (uint)_DAT_1001d5a0;
    PF_PART4(local_768, 4) = (uint)((ulong)_DAT_1001d5a0 >> 0x20);
    PF_PART4(uStack_760, 0) = (uint)uRam000000001001d5a8;
    PF_PART4(uStack_760, 4) = (uint)((ulong)uRam000000001001d5a8 >> 0x20);
    PF_PART4(local_758, 0) = 0;
    PF_PART4(local_758, 4) = 0;
    recovered_100012f0((long)&uStack_750,0x550);
    recovered_10000e30(local_cd0,&local_768,0x428);
    local_8a8[0] = '\0';
    recovered_100050c0(0);
    local_8a0[0] = 0;
    local_8a0[1] = 0;
    local_8a0[2] = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_328 = 0;
    local_888 = 0;
    recovered_100050c0(0);
    local_880 = 0;
    uStack_878 = 0;
    local_870 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_308 = 0;
    local_868 = 0;
    recovered_100050c0(0);
    local_860 = 0;
    uStack_858 = 0;
    local_850 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_848 = 0;
    recovered_100050c0(0);
    local_840 = 0;
    uStack_838 = 0;
    local_830 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    local_828[0] = '\0';
    recovered_100050c0(0);
    local_820[0] = 0;
    local_820[1] = 0;
    local_820[2] = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    local_808 = 0;
    recovered_100050c0(local_800);
    local_800 = 0;
    uStack_7f8 = 0;
    uStack_7f7 = 0;
    uStack_7f0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_7e8 = 0;
    recovered_100050c0(local_7e0);
    local_7e0 = 0;
    uStack_7d8 = 0;
    uStack_7d7 = 0;
    local_7d0 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_7c8 = local_260;
    recovered_100050c0(PF_PART8(local_7c0, 0));
    puVar38 = puStack_7a8;
    (*(uint64_t *)(void *)local_7b0) = (uint64_t)uStack_248;
    local_258 = 0;
    local_250 = 0;
    uStack_248 = 0;
    if (PF_PART8(local_7a0, 0) != 0) {
      puVar45 = puStack_7a8 + PF_PART8(local_7a0, 0) * 0x10 + -4;
      lVar60 = PF_PART8(local_7a0, 0);
      do {
        puVar45[0] = 0;
        puVar45[1] = 0;
        recovered_100050c0(*(undefined8 *)(puVar45 + -2));
        puVar45 = puVar45 + -0x10;
        lVar60 = lVar60 + -1;
      } while (lVar60 != 0);
    }
    recovered_100050c0(puVar38);
    puStack_7a8 = (uint *)local_240;
    PF_PART8(local_7a0, 8) = uStack_230;
    PF_PART8(local_7a0, 0) = local_238;
    local_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    recovered_100050c0(PF_PART8(local_790, 0));
    PF_PART8(local_780, 0) = uStack_218;
    PF_PART8(local_790, 8) = local_220;
    PF_PART8(local_790, 0) = local_228;
    local_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    stack0xfffffffffffff888 = (uint *)local_210;
    local_770 = puStack_208;
    recovered_10015bf0((long)&local_768);
    if (local_58 < (uint *)0x4) {
LAB_100091b3:
      bVar62 = 0;
    }
    else {
      if ((byte)*local_68 != 0xff) goto LAB_100091b3;
      if (*(byte *)((long)local_68 + 1) != 0xd8) goto LAB_100091b3;
      puVar38 = (uint *)((long)local_68 + 0xb);
      puVar45 = (uint *)0x2;
      puVar49 = local_58;
      puVar24 = local_68;
      do {
        if (puVar49 <= puVar45) goto LAB_100091b3;
        puVar41 = (uint *)((long)puVar38 + (long)puVar45);
        while (*(byte *)((long)puVar24 + (long)puVar45) != 0xff) {
          puVar45 = (uint *)((long)puVar45 + 1);
          puVar41 = (uint *)((long)puVar41 + 1);
          if (puVar49 == puVar45) goto LAB_100091b3;
        }
        puVar39 = puVar45;
        if (puVar49 <= puVar45) goto LAB_100091b3;
        while( true ) {
          bVar62 = *(byte *)((long)puVar24 + (long)puVar39);
          puVar45 = (uint *)((long)puVar39 + 1);
          if (bVar62 != 0xff) break;
          puVar41 = (uint *)((long)puVar41 + 1);
          bVar62 = 0;
          puVar39 = puVar45;
          if (puVar49 <= puVar45) goto LAB_100091b6;
        }
        if (bVar62 == 0xd9) goto LAB_100091b3;
        if ((bVar62 & 0xf8) != 0xd0) {
          local_40 = puVar38;
          if (9 < (byte)(bVar62 + 0x30) && bVar62 != 1) {
            puVar38 = (uint *)((long)puVar39 + 3);
            if (puVar49 < puVar38) goto LAB_100091b3;
            uVar16 = *(ushort *)((byte *)((long)puVar24 + 1) + (long)puVar39) << 8 |
                     *(ushort *)((byte *)((long)puVar24 + 1) + (long)puVar39) >> 8;
            if (uVar16 < 2) goto LAB_100091b3;
            uVar20 = uVar16 - 2;
            local_38 = (uint *)(ulong)uVar20;
            if ((uint *)((long)puVar49 - (long)puVar38) < local_38) goto LAB_100091b3;
            local_88 = puVar38;
            if (bVar62 - 0xc0 < 0x2f) {
              local_48 = (uint *)((long)puVar24 + (long)puVar38);
              switch((uintptr_t)((uint)bVar62)) {
              case 0xc0:
                local_80 = ppuVar55;
                if ((uVar20 < 6) || ((byte)*local_48 != 8)) goto LAB_100091b3;
                uVar19 = CONCAT22(0,*(ushort *)((long)local_48 + 1) << 8 |
                                    *(ushort *)((long)local_48 + 1) >> 8);
                PF_PART4(local_cd0, 4) = uVar19;
                uVar16 = *(ushort *)((long)local_48 + 3) << 8 | *(ushort *)((long)local_48 + 3) >> 8
                ;
                PF_PART2(local_cd0, 2) = 0;
                PF_PART2(local_cd0, 0) = uVar16;
                bVar62 = 0;
                if ((uVar16 == 0) || (uVar19 == 0)) goto LAB_100091b6;
                bVar15 = *(byte *)((long)local_48 + 5);
                local_50 = (double *)(ulong)bVar15;
                bVar62 = 0;
                if ((4 < bVar15) || ((0x1aU >> (bVar15 & 0x1f) & 1) == 0)) goto LAB_100091b6;
                if (uVar20 < (uint)bVar15 * 3 + 6) goto LAB_100091b3;
                if (PF_PART8(local_7a0, 0) != 0) {
                  puVar38 = puStack_7a8 + PF_PART8(local_7a0, 0) * 0x10 + -4;
                  lVar60 = PF_PART8(local_7a0, 0);
                  do {
                    puVar38[0] = 0;
                    puVar38[1] = 0;
                    recovered_100050c0(*(undefined8 *)(puVar38 + -2));
                    puVar38 = puVar38 + -0x10;
                    lVar60 = lVar60 + -1;
                  } while (lVar60 != 0);
                }
                PF_PART8(auVar11, 8) = 0;
                PF_PART8(auVar11, 0) = PF_PART8(local_7a0, 8);
                (*(uint128 *)(void *)local_7a0) = auVar11 << 0x40;
                uStack_cc8 = (uint *)0x100000001;
                do {
                  PF_PART4(local_758, 0) = 0;
                  PF_PART4(local_758, 4) = 0;
                  uStack_750 = 0;
                  cStack_74c = '\0';
                  cStack_74b = '\0';
                  cStack_74a = '\0';
                  uStack_749 = 0;
                  PF_PART4(uStack_748, 0) = 0;
                  PF_PART4(local_740, 0) = 0;
                  PF_PART4(local_740, 4) = 0;
                  PF_PART4(uStack_738, 0) = 0;
                  PF_PART4(uStack_738, 4) = 0;
                  PF_PART4(uStack_730, 0) = 0;
                  PF_PART4(uStack_730, 4) = 0;
                  PF_PART4(local_768, 0) = (uint)*(byte *)((long)puVar41 + -2);
                  PF_PART4(local_768, 4) = (uint)(*(byte *)((long)puVar41 + -1) >> 4);
                  PF_PART4(uStack_760, 0) = *(byte *)((long)puVar41 + -1) & 0xf;
                  PF_PART4(uStack_760, 4) = (uint)(byte)*puVar41;
                  local_48 = puVar41;
                  if (((3 < PF_PART4(local_768, 4) - 1) || (3 < (uint)uStack_760 - 1)) ||
                     (3 < (byte)*puVar41)) {
                    bVar62 = 0;
                    recovered_100050c0(0);
                    goto LAB_100091b6;
                  }
                  uVar20 = PF_PART4(local_768, 4);
                  if (PF_PART4(local_768, 4) < (uint)uStack_cc8) {
                    uVar20 = (uint)uStack_cc8;
                  }
                  uVar19 = (uint)uStack_760;
                  if ((uint)uStack_760 < PF_PART4(uStack_cc8, 4)) {
                    uVar19 = PF_PART4(uStack_cc8, 4);
                  }
                  PF_PART4(uStack_cc8, 0) = uVar20;
                  PF_PART4(uStack_cc8, 4) = uVar19;
                  local_108 = 10;
                  recovered_10015f30((long *)&puStack_7a8,&local_768);
                  recovered_100050c0(0);
                  puVar41 = (uint *)((long)local_48 + 3);
                  local_50 = (double *)((long)local_50 - 1);
                  puVar24 = local_68;
                  ppuVar55 = local_80;
                } while (local_50 != (double *)0x0);
                break;
              default:
                goto switchD_10006b26_caseD_c1;
              case 0xc4:
                local_98 = (uint *)((long)local_48 + 1);
                puVar38 = (uint *)0x0;
                local_80 = ppuVar55;
                while( true ) {
                  ppuVar55 = local_80;
                  if (local_38 <= puVar38) break;
                  if ((ulong)((long)local_38 - (long)puVar38) < 0x11) goto LAB_100091b3;
                  bVar15 = *(byte *)((long)local_48 + (long)puVar38);
                  bVar62 = 0;
                  if (0x1f < bVar15) goto LAB_100091b6;
                  if (3 < (byte)(bVar15 & 0xf)) goto LAB_100091b6;
                  puVar49 = (uint *)((ulong)((byte *)((long)local_98 + 0xf))[(long)puVar38] +
                                     (ulong)*(byte *)((long)((long)local_98 + 0xeU) + (long)puVar38)
                                     + (ulong)((byte *)((long)local_98 + 0xd))[(long)puVar38] +
                                       (ulong)*(byte *)((long)(local_98 + 3) + (long)puVar38) +
                                       (ulong)((byte *)((long)local_98 + 0xb))[(long)puVar38] +
                                    (ulong)*(byte *)((long)((long)local_98 + 10U) + (long)puVar38) +
                                    (ulong)((byte *)((long)local_98 + 9))[(long)puVar38] +
                                    (ulong)*(byte *)((long)(local_98 + 2) + (long)puVar38) +
                                    (ulong)((byte *)((long)local_98 + 7))[(long)puVar38] +
                                    (ulong)*(byte *)((long)((long)local_98 + 6U) + (long)puVar38) +
                                    (ulong)((byte *)((long)local_98 + 5))[(long)puVar38] +
                                    (ulong)*(byte *)((long)(local_98 + 1) + (long)puVar38) +
                                    (ulong)((byte *)((long)local_98 + 3))[(long)puVar38] +
                                    (ulong)*(byte *)((long)((long)local_98 + 2U) + (long)puVar38) +
                                    (ulong)((byte *)((long)local_98 + 1))[(long)puVar38] +
                                    (ulong)*(byte *)((long)local_98 + (long)puVar38));
                  puVar45 = (uint *)((long)puVar38 + 0x11);
                  if ((uint *)((long)local_38 - (long)puVar45) < puVar49) goto LAB_100091b3;
                  pcVar28 = local_828;
                  if (bVar15 < 0x10) {
                    pcVar28 = local_8a8;
                  }
                  local_108 = 9;
                  local_60 = puVar45;
                  local_50 = (double *)puVar49;
                  uVar18 = recovered_10015d30((long)((long)puVar38 + (long)local_98),
                                              (long)((long)puVar45 + (long)local_48),(ulong)puVar49,
                                              pcVar28 + ((bVar15 & 0xf) << 5));
                  puVar38 = (uint *)((long)local_50 + (long)local_60);
                  bVar62 = 0;
                  puVar24 = local_68;
                  if ((char)uVar18 == '\0') goto LAB_100091b6;
                }
                break;
              case 0xda:
                bVar62 = 0;
                local_80 = ppuVar55;
                if ((5 < uVar20) && (PF_PART8(local_7a0, 0) != 0)) {
                  bVar62 = (byte)*local_48;
                  if ((bVar62 == 0) || (uVar20 < (uint)bVar62 * 2 + 4)) goto LAB_100091b3;
                  local_60 = (uint *)(ulong)((uint)bVar62 * 2);
                  PF_PART8(local_790, 8) = 0;
                  local_50 = (double *)(ulong)bVar62;
                  local_40 = (uint *)0x0;
                  goto LAB_10009234;
                }
                goto LAB_100091b6;
              case 0xdb:
                if (local_38 != (uint *)0x0) {
                  puVar38 = (uint *)0x0;
                  puVar45 = local_48;
                  do {
                    puVar49 = local_48;
                    bVar15 = *(byte *)((long)puVar45 + (long)puVar38);
                    bVar62 = 0;
                    if (0x1f < bVar15) goto LAB_100091b6;
                    uVar20 = bVar15 & 0xf;
                    if (3 < (byte)uVar20) goto LAB_100091b6;
                    puVar38 = (uint *)((long)puVar38 + 1);
                    if ((ulong)((long)local_38 - (long)puVar38) <
                        (ulong)(0xf < bVar15) * 0x40 + 0x40) goto LAB_100091b3;
                    lVar60 = 0;
                    do {
                      if (bVar15 < 0x10) {
                        uVar19 = (uint)*(byte *)((long)puVar49 + (long)puVar38);
                        puVar45 = (uint *)((long)puVar38 + 1);
                      }
                      else {
                        uVar19 = (uint)(ushort)(*(ushort *)((long)puVar49 + (long)puVar38) << 8 |
                                               *(ushort *)((long)puVar49 + (long)puVar38) >> 8);
                        puVar45 = puVar38;
                      }
                      puVar38 = (uint *)((long)puVar45 + 2);
                      if (bVar15 < 0x10) {
                        puVar38 = puVar45;
                      }
                      *(uint *)((long)auStack_cb4 +
                               (ulong)*(uint *)((long)&DAT_1001d760 + lVar60) * 4 +
                               (ulong)(uVar20 * 0x104)) = uVar19;
                      lVar60 = lVar60 + 4;
                    } while (lVar60 != 0x100);
                    *(undefined1 *)((long)auStack_cb4 + ((ulong)(uVar20 * 0x104) - 4)) = 1;
                    puVar45 = puVar49;
                  } while (puVar38 < local_38);
                }
                break;
              case 0xdd:
                if (uVar20 != 4) goto LAB_100091b3;
                local_cc0 = (uint *)CONCAT44(PF_PART4(local_cc0, 4),
                                             (uint)(ushort)((ushort)*local_48 << 8 |
                                                           (ushort)*local_48 >> 8));
                puVar24 = local_68;
                break;
              case 0xee:
                if (0xb < uVar20) {
                  local_108 = 0xb;
                  local_80 = ppuVar55;
                  iVar17 = recovered_10001380((long)local_48,((uintptr_t)pf_module_state+0x9ceU),5);
                  puVar24 = local_68;
                  ppuVar55 = local_80;
                  if (iVar17 == 0) {
                    local_cc0 = (uint *)(ulong)CONCAT14(*(byte *)((long)local_48 + 0xb),
                                                        (uint)local_cc0);
                  }
                }
              }
            }
            else {
switchD_10006b26_caseD_c1:
              if (bVar62 != 200 && (byte)(bVar62 + 0x3f) < 0xf) goto LAB_100091b3;
            }
            puVar45 = (uint *)((long)local_88 + (long)local_38);
            puVar38 = local_40;
            puVar49 = local_58;
          }
        }
        bVar62 = 0;
      } while ((uint *)((long)puVar45 + 1U) < puVar49);
    }
LAB_100091b6:
    recovered_10015bf0((long)(uintptr_t)local_cd0);
    local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
    uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
    local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
    uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
    local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
    uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
    uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
    uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
    uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
    uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
    goto LAB_100091c5;
  case 5:
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    bVar62 = 0;
    recovered_100050c0(0);
    local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
    uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
    local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
    uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
    local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
    uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
    uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
    uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
    uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
    uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
    if (param_2 < 0x1e) goto LAB_100091c5;
    local_108 = 0xffffffff;
    iVar17 = recovered_10001380((long)param_1,((uintptr_t)pf_module_state+0x9a5U),9);
    if ((iVar17 != 0) || (*(char *)((long)param_1 + 0xd) != '\0')) goto LAB_10007705;
    PF_PART4(local_758, 4) = 0;
    uStack_750 = 0;
    cStack_74c = '\0';
    cStack_74b = '\0';
    cStack_74a = '\0';
    uStack_749 = 0;
    PF_PART4(uStack_748, 0) = 0;
    PF_PART4(uStack_748, 4) = 0;
    PF_PART4(local_740, 0) = 0;
    PF_PART4(local_740, 4) = 0;
    local_38 = (uint *)((long)param_1 + 9);
    local_108 = 0x1f;
    local_80 = ppuVar55;
    iVar17 = recovered_10001380((long)local_38,((uintptr_t)pf_module_state+0x9d4U),4);
    if (iVar17 == 0) {
      PF_PART4(uStack_760, 4) = 0;
      PF_PART4(local_758, 0) = 4;
      bVar61 = false;
    }
    else {
      if (((((byte)*local_38 != 0x76) || (9 < (byte)(*(byte *)((long)local_68 + 10) - 0x30U))) ||
          (9 < (byte)(*(byte *)((long)local_68 + 0xb) - 0x30U))) ||
         (9 < (byte)((byte)local_68[3] - 0x30U))) {
        lVar60 = 0;
        goto LAB_1000acfd;
      }
      PF_PART4(uStack_760, 4) =
           ((uint)*(byte *)((long)local_68 + 10) * 100 + (uint)*(byte *)((long)local_68 + 0xb) * 10
           + (uint)(byte)local_68[3]) - 0x14d0;
      PF_PART4(local_758, 0) = (uint)(10 < PF_PART4(uStack_760, 4)) * 4 + 4;
      bVar61 = 3 < PF_PART4(uStack_760, 4);
    }
    uVar20 = *(uint *)((long)local_68 + 0xe);
    PF_PART4(local_768, 0) =
         uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar20 = *(uint *)((long)local_68 + 0x12);
    PF_PART4(local_768, 4) =
         uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar20 = *(uint *)((long)local_68 + 0x16);
    PF_PART4(uStack_760, 0) =
         uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    local_1b0 = (uint *)0x1a;
    bVar62 = 0;
    if ((((uint)local_768 != 0) && (PF_PART4(local_768, 4) != 0)) && ((uint)uStack_760 < 3)) {
      if (bVar61) {
        uVar20 = *(uint *)((long)local_68 + 0x1a);
        uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
        ;
        local_1b0 = (uint *)0x1e;
        if (((uVar20 == 0) || (uVar20 == 0x96)) || (uVar20 == 100)) goto LAB_10007796;
      }
      else {
LAB_10007796:
        local_108 = 0x20;
        uVar18 = recovered_100162f0((long)local_68,(ulong)local_58,(ulong *)&local_1b0,
                                    (long)&local_768);
        if ((char)uVar18 != '\0') {
          (*(uint128 *)(void *)&local_198) = (uint128)0x0;
          local_188 = (uint *)0x0;
          local_48 = (uint *)(ulong)(uint)local_758;
          puVar45 = (uint *)((long)local_58 - (long)local_1b0);
          puVar38 = local_1b0;
          while( true ) {
            if ((int)local_48 == 4) {
              if ((local_58 < puVar38) || (puVar45 < (uint *)0x4)) goto LAB_10008874;
              uVar20 = *(uint *)((long)local_68 + (long)puVar38);
              puVar49 = (uint *)(ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 |
                                        (uVar20 & 0xff00) << 8 | uVar20 << 0x18);
            }
            else {
              if ((local_58 < puVar38) || (puVar45 < (uint *)0x8)) goto LAB_10008874;
              uVar57 = *(ulong *)((long)local_68 + (long)puVar38);
              puVar49 = (uint *)(uVar57 >> 0x38 | (uVar57 & 0xff000000000000) >> 0x28 |
                                 (uVar57 & 0xff0000000000) >> 0x18 | (uVar57 & 0xff00000000) >> 8 |
                                 (uVar57 & 0xff000000) << 8 | (uVar57 & 0xff0000) << 0x18 |
                                 (uVar57 & 0xff00) << 0x28 | uVar57 << 0x38);
            }
            (*(uint64_t *)(void *)local_cd0) = (uint64_t)puVar49;
            if (puVar49 == (uint *)0x0) break;
            if (local_58 <= puVar49) goto LAB_10008874;
            local_108 = 0x21;
            local_40 = puVar45;
            local_38 = puVar38;
            recovered_10016600((long *)local_198,(undefined8 *)local_cd0);
            puVar38 = (uint *)((long)local_38 + (long)local_48);
            puVar45 = (uint *)((long)local_40 - (long)local_48);
          }
          if (puStack_190 != (uint *)0x0) {
            local_40 = (uint *)(ulong)(uint)local_768;
            local_a8 = (uint *)(ulong)PF_PART4(local_768, 4);
            if ((ulong)((long)local_a8 * (long)local_40) >> 0x3e == 0) {
              PF_PART1(auVar68,0xf) = 0;
              PF_PART15(auVar68, 0) = stack0xfffffffffffff331;
              (*(uint128 *)(void *)&local_cd0) = auVar68 << 8;
              local_108 = 0x22;
              recovered_10016740((long *)&local_1d0,(long)local_a8 * (long)local_40 * 4,local_cd0);
              puVar49 = puStack_190;
              auVar68 = (*(uint128 *)(void *)&local_cd0);
              puVar38 = local_138;
              puVar45 = local_70;
              goto joined_r0x10008c26;
            }
          }
LAB_10008874:
          bVar62 = 0;
          goto LAB_10008876;
        }
      }
      bVar62 = 0;
    }
    goto LAB_1000888d;
  case 6:
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
    *(uint128 *)((long)param_3 + 8) = (uint128)0x0;
    *(undefined8 *)((long)param_3 + 0x18) = 0;
    bVar62 = 0;
    recovered_100050c0(0);
    local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
    uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
    local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
    uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
    local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
    uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
    uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
    uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
    uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
    uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
    if (param_2 < 0x14) goto LAB_100091c5;
    local_108 = 0xffffffff;
    iVar17 = recovered_10001380((long)param_1,((uintptr_t)pf_module_state+0x355U),8);
    if (iVar17 == 0) {
      puVar38 = (uint *)(ulong)*(uint *)((long)param_1 + 8);
      uVar20 = *(uint *)((long)param_1 + 0xc);
      local_130 = (uint *)CONCAT44(PF_PART4(local_130, 4),*(int *)((long)param_1 + 0x10));
      if ((*(int *)((long)param_1 + 0x10) != 0 && (uVar20 != 0 && puVar38 != (uint *)0x0)) &&
         (uVar57 = (ulong)uVar20 * (long)puVar38, uVar57 >> 0x3e == 0)) {
        local_a0 = CONCAT44(PF_PART4(local_a0, 4),uVar20);
        local_140 = uVar57 * 4;
        local_108 = 0xffffffff;
        local_b0 = recovered_10005060(local_140);
        uVar34 = 0;
        recovered_100050c0(0);
        if (uVar57 < 2) goto LAB_1000acd5;
        if (uVar57 < 8) {
          uVar25 = 0;
LAB_10007f4b:
          uVar34 = local_140 & 0xfffffffffffffff8;
          do {
            *(undefined8 *)(local_b0 + uVar25) = 0;
            uVar25 = uVar25 + 8;
          } while (uVar34 != uVar25);
          for (; local_140 != uVar34; uVar34 = uVar34 + 1) {
LAB_1000acd5:
            *(undefined1 *)(local_b0 + uVar34) = 0;
          }
        }
        else {
          uVar34 = local_140 & 0xffffffffffffffe0;
          uVar25 = 0;
          do {
            *(uint128 *)(local_b0 + uVar25) = (uint128)0x0;
            *(uint128 *)(local_b0 + 0x10 + uVar25) = (uint128)0x0;
            uVar25 = uVar25 + 0x20;
          } while (uVar34 != uVar25);
          if (local_140 != uVar34) {
            uVar25 = uVar34;
            if ((uVar57 & 6) == 0) goto LAB_1000acd5;
            goto LAB_10007f4b;
          }
        }
        lVar60 = local_b0;
        if ((uint *)0x1b < local_58 + -5) {
          local_98 = (uint *)(ulong)*(uint *)((long)param_1 + 0x20);
          local_120 = (uint *)(ulong)*(uint *)((long)param_1 + 0x24);
          uVar57 = (long)local_120 * (long)local_98;
          local_118 = 0;
          bVar62 = false;
          if (uVar57 < 0x4000000000000000) {
            pbVar33 = (byte *)((long)param_1 + 0x28);
            pbVar29 = (byte *)((long)param_1 + 0x14);
            puVar45 = (uint *)((long)param_1 + 0x1c);
            puVar49 = (uint *)((long)param_1 + 0x18);
            local_70 = (uint *)0x30;
            bVar62 = false;
            puVar24 = local_58;
            local_60 = puVar38;
            while( true ) {
              local_74 = *puVar49;
              local_8c = *puVar45;
              local_80 = (uint **)CONCAT44(PF_PART4(local_80, 4),(uint)*pbVar33);
              lVar60 = local_b0;
              if (puVar24 < local_70) break;
              local_148 = uVar57 * 4;
              if ((ulong)((long)puVar24 - (long)local_70) < local_148) break;
              if (((*pbVar29 & 1) != 0) && ((uint)local_120 != 0)) {
                local_b8 = (uint *)((long)local_70 + (long)param_1);
                local_a8 = (uint *)((long)local_98 * 4);
                local_88 = (uint *)0x0;
                do {
                  if ((int)local_98 != 0) {
                    uVar20 = local_8c + (int)local_88;
                    if ((-1 < (int)uVar20) && ((int)uVar20 < (int)(uint)local_a0)) {
                      local_50 = (double *)((ulong)uVar20 * (long)puVar38);
                      puVar45 = local_b8;
                      puVar49 = local_98;
                      uVar20 = local_74;
                      do {
                        if ((int)uVar20 < (int)puVar38 && -1 < (int)uVar20) {
                          local_38 = (uint *)CONCAT44(PF_PART4(local_38, 4),uVar20);
                          local_108 = 0x26;
                          local_48 = puVar45;
                          local_40 = puVar49;
                          recovered_10000e30(&local_768,puVar45,4);
                          PF_PART4(local_768, 0) =
                               CONCAT13((char)((ulong)(((uint)local_768 >> 0x18) * (int)local_80 +
                                                      0x7f) * 0x1010102 >> 0x20),
                                        (undefined3)local_768);
                          local_108 = 0x27;
                          recovered_10017470((byte *)((long)(((ulong)local_38 & 0xffffffff) +
                                                            (long)local_50) * 4 + local_b0),
                                             (byte *)&local_768);
                          puVar45 = local_48;
                          puVar49 = local_40;
                          puVar24 = local_58;
                          param_1 = local_68;
                          puVar38 = local_60;
                          param_3 = local_138;
                          uVar20 = (uint)local_38;
                        }
                        puVar45 = puVar45 + 1;
                        uVar20 = uVar20 + 1;
                        puVar49 = (uint *)((long)puVar49 - 1);
                      } while (puVar49 != (uint *)0x0);
                    }
                  }
                  local_88 = (uint *)((long)local_88 + 1);
                  local_b8 = (uint *)((long)local_b8 + (long)local_a8);
                } while (local_88 != local_120);
              }
              uVar20 = (int)local_118 + 1;
              uVar57 = (ulong)uVar20;
              if (uVar20 == (uint)local_130) {
                *(uint *)param_3 = (uint)puVar38;
                *(uint *)((long)param_3 + 4) = (uint)local_a0;
                *(uint *)((long)param_3 + 0x10) = 0;
                *(uint *)((long)param_3 + 0x14) = 0;
                recovered_100050c0(*(undefined8 *)((long)param_3 + 8));
                *(long *)((long)param_3 + 8) = local_b0;
                *(ulong *)((long)param_3 + 0x10) = local_140;
                *(ulong *)((long)param_3 + 0x18) = local_140;
                bVar62 = true;
                lVar60 = 0;
                break;
              }
              puVar41 = (uint *)((long)local_70 + local_148);
              bVar62 = (uint)local_130 <= uVar20;
              lVar60 = local_b0;
              if ((puVar24 < puVar41) ||
                 (local_118 = uVar57, (ulong)((long)puVar24 - (long)puVar41) < 0x1c)) break;
              pbVar29 = (byte *)((long)param_1 + (long)puVar41);
              puVar49 = (uint *)((byte *)((long)param_1 + (long)puVar41) + 4);
              puVar45 = (uint *)((long)((long)param_1 + 8) + (long)puVar41);
              local_98 = (uint *)(ulong)*(uint *)((long)((long)param_1 + 0xc) + (long)puVar41);
              local_120 = (uint *)(ulong)*(uint *)((long)((long)param_1 + 0x10) + (long)puVar41);
              pbVar33 = (byte *)((long)param_1 + (long)puVar41) + 0x14;
              local_70 = puVar41 + 7;
              uVar57 = (long)local_120 * (long)local_98;
              if (0x3fffffffffffffff < uVar57) break;
            }
          }
          recovered_100050c0(lVar60);
          local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
          uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
          local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
          uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
          local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
          uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
          uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
          uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
          uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
          uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
          goto LAB_100091c5;
        }
LAB_1000acfd:
        bVar62 = 0;
        recovered_100050c0(lVar60);
        local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
        uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
        local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
        uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
        local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
        uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
        uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
        uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
        uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
        uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
        goto LAB_100091c5;
      }
    }
LAB_10007705:
    bVar62 = 0;
    local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
    uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
    local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
    uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
    local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
    uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
    uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
    uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
    uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
    uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
    goto LAB_100091c5;
  }
  uVar57 = 4;
  do {
    uVar34 = uVar57;
    uVar57 = uVar34 * 2;
  } while (uVar34 < param_2);
  local_108 = 0xffffffff;
  local_128 = recovered_10005060(uVar34);
  uVar57 = 0;
  recovered_100050c0(0);
  if (param_2 < 4) {
    puVar22 = param_1;
LAB_100072ba:
    puVar35 = (undefined1 *)(uVar57 + local_128);
    do {
      *puVar35 = *puVar22;
      puVar22 = puVar22 + 1;
      puVar35 = puVar35 + 1;
    } while (puVar22 != (undefined1 *)((long)param_1 + param_2));
  }
  else if (param_2 < 0x20) {
    uVar34 = 0;
LAB_1000727a:
    uVar57 = param_2 & 0xfffffffffffffffc;
    puVar22 = (undefined1 *)((long)param_1 + uVar57);
    do {
      *(undefined4 *)(local_128 + uVar34) = *(undefined4 *)((long)param_1 + uVar34);
      uVar34 = uVar34 + 4;
    } while (uVar57 != uVar34);
    if (uVar57 != param_2) goto LAB_100072ba;
  }
  else {
    uVar57 = param_2 & 0xffffffffffffffe0;
    uVar34 = 0;
    do {
      uVar21 = ((undefined8 *)((long)param_1 + uVar34))[1];
      puVar26 = (undefined8 *)((long)param_1 + uVar34 + 0x10);
      uVar9 = *puVar26;
      uVar10 = puVar26[1];
      *(undefined8 *)(local_128 + uVar34) = *(undefined8 *)((long)param_1 + uVar34);
      ((undefined8 *)(local_128 + uVar34))[1] = uVar21;
      puVar26 = (undefined8 *)(local_128 + 0x10 + uVar34);
      *puVar26 = uVar9;
      puVar26[1] = uVar10;
      uVar34 = uVar34 + 0x20;
    } while (uVar57 != uVar34);
    if (uVar57 != param_2) {
      uVar34 = uVar57;
      if ((param_2 & 0x1c) == 0) {
        puVar22 = (undefined1 *)((long)param_1 + uVar57);
        goto LAB_100072ba;
      }
      goto LAB_1000727a;
    }
  }
  PF_PART4(local_768, 0) = 0;
  PF_PART4(local_768, 4) = 0;
  PF_PART4(uStack_760, 0) = 0;
  PF_PART4(uStack_760, 4) = 0;
  PF_PART4(local_758, 0) = 0;
  PF_PART4(local_758, 4) = 0;
  uStack_750 = 0;
  cStack_74c = '\0';
  cStack_74b = '\0';
  cStack_74a = '\0';
  PF_PART4(uStack_748, 0) = 0;
  PF_PART4(local_740, 0) = 0;
  PF_PART4(local_740, 4) = 0;
  bVar62 = 0;
  recovered_100050c0(0);
  PF_PART4(uStack_738, 0) = 0;
  PF_PART4(uStack_738, 4) = 0;
  PF_PART4(uStack_730, 0) = 0;
  PF_PART4(uStack_730, 4) = 0;
  PF_PART4(uStack_728, 0) = 0;
  PF_PART4(uStack_728, 4) = 0;
  recovered_100050c0(0);
  PF_PART4(uStack_720, 0) = 0;
  PF_PART4(uStack_720, 4) = 0;
  PF_PART4(uStack_718, 0) = 0;
  PF_PART4(uStack_718, 4) = 0;
  uStack_710 = 0;
  uStack_70c = 0;
  recovered_100050c0(0);
  uStack_708 = 0;
  uStack_704 = 0;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 0;
  local_6f4 = 0;
  recovered_100050c0(0);
  uStack_6f0 = 0;
  uStack_6ec = 0;
  uStack_6e8 = 0;
  uStack_6e4 = 0;
  uStack_6e0 = 0;
  uStack_6dc = 0;
  recovered_100050c0(0);
  recovered_100050c0(0);
  recovered_100050c0(0);
  recovered_100050c0(0);
  if (param_2 < 8) {
LAB_100073ee:
    lVar60 = CONCAT44(uStack_6e4,uStack_6e8);
  }
  else {
    local_108 = 0x28;
    iVar17 = recovered_10001380(local_128,((uintptr_t)pf_module_state+0x34dU),8);
    if (iVar17 != 0) {
LAB_100073ec:
      bVar62 = 0;
      goto LAB_100073ee;
    }
    if ((uint *)0x13 < local_58) {
      pbVar29 = (byte *)0x8;
      local_80 = (uint **)0x0;
LAB_10007fe6:
      uVar20 = *(uint *)(pbVar29 + local_128);
      puVar45 = (uint *)(ulong)(uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                               uVar20 << 0x18);
      puVar38 = (uint *)(pbVar29 + 8);
      if ((uint *)((long)local_58 - (long)puVar38) < puVar45 + 1) goto LAB_100073ec;
      local_40 = (uint *)(pbVar29 + local_128 + 4);
      puVar24 = (uint *)(local_128 + (long)puVar38);
      puVar49 = (uint *)((long)puVar38 + (long)puVar45);
      uVar20 = *(uint *)(local_128 + (long)puVar49);
      uVar19 = recovered_1001af80(0,(long)local_40,4);
      if (puVar45 != (uint *)0x0) {
        uVar19 = recovered_1001af80(uVar19,(long)puVar24,(ulong)puVar45);
      }
      if (uVar19 != (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                    uVar20 << 0x18)) goto LAB_100073ec;
      local_68 = puVar38;
      local_50 = (double *)puVar49;
      local_48 = puVar24;
      local_38 = puVar45;
      if (cStack_74c == '\0') {
        local_108 = 0x29;
        iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9b2U),4);
        bVar62 = 0;
        if (((uint)local_38 != 0xd) || (iVar17 != 0)) goto LAB_100073ee;
        uVar20 = *local_48;
        PF_PART4(local_768, 0) =
             uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
        uVar20 = local_48[1];
        PF_PART4(local_768, 4) =
             uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
        bVar15 = (byte)local_48[2];
        PF_PART4(uStack_760, 0) = (uint)bVar15;
        bVar36 = *(byte *)((long)local_48 + 9);
        PF_PART4(uStack_760, 4) = (uint)bVar36;
        PF_PART4(local_758, 0) = (uint)*(byte *)((long)local_48 + 10);
        PF_PART4(local_758, 4) = (uint)*(byte *)((long)local_48 + 0xb);
        uStack_750 = (uint)(byte)local_48[3];
        cStack_74c = '\x01';
        bVar62 = 0;
        if (((uint)local_768 == 0) || ((PF_PART4(local_768, 4) == 0 || (bVar62 = 0, 6 < PF_PART4(uStack_760, 4))))
           ) goto LAB_100073ee;
        if ((0x55U >> (bVar36 & 0x1f) & 1) == 0) {
          if (bVar36 != 3) goto LAB_100073ee;
          bVar15 = bVar15 - 8;
        }
        else {
          bVar15 = bVar15 - 8 & 0xf7;
        }
        bVar62 = 0;
        if ((((bVar15 != 0) || (*(byte *)((long)local_48 + 10) != 0)) ||
            (*(byte *)((long)local_48 + 0xb) != 0)) || (1 < (byte)local_48[3])) goto LAB_100073ee;
      }
      else {
        local_108 = 0x2a;
        iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9d9U),4);
        if (iVar17 == 0) {
          if ((((uint)local_38 != 8) || (((ulong)local_80 & 1) != 0)) || (cStack_74a != '\0'))
          goto LAB_100073ec;
          cStack_74a = '\x01';
          uVar20 = *local_48;
          PF_PART4(uStack_748, 0) =
               uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
        }
        else {
          local_108 = 0x2b;
          iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9deU),4);
          if (iVar17 == 0) {
            if (((uint)local_38 != 0x1a) || (cStack_74a != '\x01')) goto LAB_100073ec;
            auStack_cb4[1] = 0;
            auStack_cb4[2] = 0;
            local_ca8 = 0;
            uStack_ca7 = 0;
            uStack_ca6 = 0;
            local_ca0 = 0;
            uVar20 = local_48[1];
            PF_PART4(local_cd0, 0) =
                 uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
            ;
            uVar20 = local_48[2];
            PF_PART4(local_cd0, 4) =
                 uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
            ;
            uVar20 = local_48[3];
            PF_PART4(uStack_cc8, 0) =
                 uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
            ;
            uVar20 = local_48[4];
            PF_PART4(uStack_cc8, 4) =
                 uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18
            ;
            local_cc0 = (uint *)(ulong)CONCAT14(*(byte *)((long)local_48 + 0x19),
                                                (uint)(byte)local_48[6]);
            local_cb8 = CONCAT31(PF_PART3(local_cb8, 1),
                                 ~(byte)local_80 & CONCAT44(uStack_6e4,uStack_6e8) == 0);
            if (((((PF_PART4(local_cd0, 0) == 0) ||
                  (((PF_PART4(local_cd0, 4) == 0 || ((uint)local_768 < (uint)uStack_cc8)) ||
                   ((uint)local_768 - (uint)uStack_cc8 < (uint)PF_PART4(local_cd0, 0))))) ||
                 ((PF_PART4(local_768, 4) < PF_PART4(uStack_cc8, 4) ||
                  (PF_PART4(local_768, 4) - PF_PART4(uStack_cc8, 4) < (uint)PF_PART4(local_cd0, 4))))) ||
                (2 < (byte)local_48[6])) || (1 < *(byte *)((long)local_48 + 0x19))) {
              bVar62 = 0;
              lVar60 = 0;
              goto LAB_10009080;
            }
            local_108 = 0x2c;
            recovered_1001b190((long *)&uStack_6f0,(undefined8 *)local_cd0);
            recovered_100050c0(0);
          }
          else {
            local_108 = 0x2d;
            iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9e3U),4);
            if (iVar17 == 0) {
              bVar62 = 0;
              uVar20 = (uint)local_38;
              if ((uVar20 == 0) || (0x300 < uVar20)) goto LAB_100073ee;
              puVar26 = &uStack_730;
              plVar46 = &uStack_738;
              if (uVar20 + (uint)((ulong)((long)local_38 * 0xaaaaaaab) >> 0x21) * -3 != 0)
              goto LAB_100073ee;
            }
            else {
              local_108 = 0x2f;
              iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9e8U),4);
              if (iVar17 != 0) {
                local_108 = 0x30;
                iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9edU),4);
                if (iVar17 == 0) {
                  local_80 = (uint **)CONCAT71((int7)(CONCAT44(extraout_var,iVar17) >> 8),1);
                  if ((int)local_38 != 0) {
                    uStack_cc8 = local_38;
                    (*(uint64_t *)(void *)local_cd0) = (uint64_t)local_48;
                    local_108 = 0x31;
                    recovered_1001b360((long *)&uStack_708,(undefined8 *)local_cd0);
                    if (CONCAT44(uStack_6e4,uStack_6e8) != 0) {
                      lVar60 = CONCAT44(uStack_6e4,uStack_6e8) * 0x38;
                      if (*(char *)(CONCAT44(uStack_6ec,uStack_6f0) + -0x20 + lVar60) == '\x01') {
                        local_108 = 0x32;
                        recovered_1001b360((long *)(CONCAT44(uStack_6ec,uStack_6f0) + lVar60 + -0x18
                                                   ),(undefined8 *)local_cd0);
                      }
                    }
                    local_740 = (uint *)((long)local_740 + (long)local_38);
                  }
                }
                else {
                  local_108 = 0x33;
                  iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9f2U),4);
                  if (iVar17 == 0) {
                    if (cStack_74a == '\x01') {
                      lVar60 = CONCAT44(uStack_6e4,uStack_6e8);
                      bVar62 = 0;
                      if ((4 < (uint)local_38) && (lVar60 != 0)) {
                        PF_PART4(uStack_cc8, 0) = (uint)local_38 - 4;
                        (*(uint64_t *)(void *)local_cd0) = (uint64_t)(local_48 + 1);
                        PF_PART4(uStack_cc8, 4) = 0;
                        local_108 = 0x34;
                        recovered_1001b430((long *)(CONCAT44(uStack_6ec,uStack_6f0) + lVar60 * 0x38
                                                   + -0x18),(undefined8 *)local_cd0);
                        goto LAB_10007fc2;
                      }
                      goto LAB_100073f8;
                    }
                    goto LAB_100073ec;
                  }
                  local_108 = 0x35;
                  iVar17 = recovered_10001380((long)local_40,((uintptr_t)pf_module_state+0x9b7U),4);
                  if (iVar17 == 0) {
                    if ((uint)local_38 != 0) goto LAB_100073ec;
                    cStack_74b = '\x01';
                    goto LAB_100074b0;
                  }
                  if ((*local_40 & 0x20) == 0) goto LAB_100073ec;
                }
                goto LAB_10007fc2;
              }
              if (((int)local_38 != 2 && PF_PART4(uStack_760, 4) == 0) ||
                 ((int)local_38 != 6 && PF_PART4(uStack_760, 4) == 2)) goto LAB_100073ec;
              if (PF_PART4(uStack_760, 4) == 3) {
                puVar26 = &uStack_718;
                plVar46 = &uStack_720;
                if ((uint *)(CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730) / 3) < local_38)
                goto LAB_100073ec;
              }
              else {
                bVar62 = 0;
                if (PF_PART4(uStack_760, 4) == 4) goto LAB_100073ee;
                puVar26 = &uStack_718;
                plVar46 = &uStack_720;
                if (PF_PART4(uStack_760, 4) == 6) goto LAB_100073ee;
              }
            }
            *puVar26 = 0;
            local_108 = 0x2e;
            recovered_10017e80(plVar46,*plVar46,(undefined1 *)local_48,
                               (byte *)((long)local_48 + (long)local_38));
          }
        }
      }
LAB_10007fc2:
      pbVar29 = (byte *)((long)local_38 + (long)local_68) + 4;
      if (local_58 < (uint *)((long)local_50 + 0x10)) goto LAB_100074b0;
      goto LAB_10007fe6;
    }
LAB_100074b0:
    if (cStack_74c != '\x01') goto LAB_100073ec;
    bVar62 = 0;
    if ((cStack_74b != '\x01') || (local_740 == (uint *)0x0)) goto LAB_100073ee;
    if ((PF_PART4(uStack_760, 4) == 3) && (CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730) == 0))
    goto LAB_100073ec;
    if (cStack_74a != '\x01') {
LAB_1000753f:
      recovered_100050c0(0);
      (*(uint128 *)(void *)&local_cd0) = (uint128)0x0;
      local_cc0 = (uint *)0x0;
      local_cb8 = 0;
      auStack_cb4[0] = 0;
      auStack_cb4[1] = 0;
      auStack_cb4[2] = 0;
      local_ca8 = 0;
      uStack_ca7 = 0;
      recovered_100050c0(0);
      if (PF_PART4(uStack_760, 4) == 0) {
        lVar60 = 0;
        if (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) != 0) {
          bVar62 = 0;
          if (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) != 2) goto LAB_10009075;
          local_cb8 = (uint)(ushort)(*(ushort *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720) <<
                                     8 | *(ushort *)
                                          CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720) >> 8);
          local_ca8 = 1;
          lVar60 = 0;
        }
LAB_10008f98:
        (*(uint128 *)(void *)&local_198) = (uint128)0x0;
        local_188 = (uint *)0x0;
        local_1f8 = lVar60;
        if ((cStack_74a == '\x01') && (CONCAT44(uStack_6e4,uStack_6e8) != 0)) {
          local_108 = 0x37;
          uVar57 = recovered_1000b310((uint *)&local_768,local_cd0,(long *)local_198);
          bVar62 = (byte)uVar57;
        }
        else {
          local_108 = 0x38;
          uVar57 = recovered_1000b880((uint *)&local_768,(long *)&uStack_708,local_cd0,
                                      (long *)local_198);
          bVar62 = (byte)uVar57;
        }
        puVar38 = local_138;
        if (bVar62 == 0) {
          (*(uint64_t *)(void *)auVar47) = *(uint64_t *)(void *)local_198;
        }
        else {
          *(ulong *)local_138 = CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
          local_138[4] = 0;
          local_138[5] = 0;
          recovered_100050c0(*(undefined8 *)(local_138 + 2));
          *(uint64_t *)(puVar38 + 2) = *(uint64_t *)(void *)&local_198;
          *(uint **)(puVar38 + 4) = puStack_190;
          *(uint **)(puVar38 + 6) = local_188;
          (*(uint64_t *)(void *)auVar47) = (uint64_t)(uint *)0x0;
        }
        recovered_100050c0(*(uint64_t *)(void *)auVar47);
        lVar60 = local_1f8;
      }
      else {
        if (PF_PART4(uStack_760, 4) == 2) {
          lVar60 = 0;
          if (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) != 0) {
            bVar62 = 0;
            if (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) != 6) goto LAB_10009075;
            puVar23 = (ushort *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
            auStack_cb4[0] = (uint)(ushort)(*puVar23 << 8 | *puVar23 >> 8);
            auStack_cb4[1] = (uint)(ushort)(puVar23[1] << 8 | puVar23[1] >> 8);
            auStack_cb4[2] = (uint)(ushort)(puVar23[2] << 8 | puVar23[2] >> 8);
            uStack_ca7 = 1;
            lVar60 = 0;
          }
          goto LAB_10008f98;
        }
        if (PF_PART4(uStack_760, 4) == 3) {
          puVar38 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
          bVar62 = 0;
          lVar60 = 0;
          if (puVar38 != (uint *)0x0) {
            puVar45 = (uint *)((ulong)puVar38 / 3);
            local_40 = puVar38;
            if (puVar38 == (uint *)((long)puVar45 * 3)) {
              local_38 = (uint *)((long)puVar45 * 4);
              uStack_cc8 = (uint *)0x0;
              local_48 = puVar45;
              if (local_38 == (uint *)0x0) {
                lVar60 = 0;
              }
              else {
                local_108 = 0x36;
                lVar60 = recovered_10005060((long)local_38);
                puVar38 = (uint *)0x0;
                recovered_100050c0(0);
                local_cc0 = local_38;
                if (local_38 < (uint *)0x20) {
LAB_10007656:
                  do {
                    *(byte *)(lVar60 + (long)puVar38) = 0xff;
                    puVar38 = (uint *)((long)puVar38 + 1);
                  } while (puVar38 < local_38);
                }
                else {
                  puVar38 = (uint *)((ulong)local_38 & 0xffffffffffffffe0);
                  puVar45 = (uint *)0x0;
                  do {
                    pbVar29 = (byte *)(lVar60 + (long)puVar45);
                    pbVar29[0] = 0xff;
                    pbVar29[1] = 0xff;
                    pbVar29[2] = 0xff;
                    pbVar29[3] = 0xff;
                    pbVar29[4] = 0xff;
                    pbVar29[5] = 0xff;
                    pbVar29[6] = 0xff;
                    pbVar29[7] = 0xff;
                    pbVar29[8] = 0xff;
                    pbVar29[9] = 0xff;
                    pbVar29[10] = 0xff;
                    pbVar29[0xb] = 0xff;
                    pbVar29[0xc] = 0xff;
                    pbVar29[0xd] = 0xff;
                    pbVar29[0xe] = 0xff;
                    pbVar29[0xf] = 0xff;
                    pbVar29 = (byte *)(lVar60 + 0x10 + (long)puVar45);
                    pbVar29[0] = 0xff;
                    pbVar29[1] = 0xff;
                    pbVar29[2] = 0xff;
                    pbVar29[3] = 0xff;
                    pbVar29[4] = 0xff;
                    pbVar29[5] = 0xff;
                    pbVar29[6] = 0xff;
                    pbVar29[7] = 0xff;
                    pbVar29[8] = 0xff;
                    pbVar29[9] = 0xff;
                    pbVar29[10] = 0xff;
                    pbVar29[0xb] = 0xff;
                    pbVar29[0xc] = 0xff;
                    pbVar29[0xd] = 0xff;
                    pbVar29[0xe] = 0xff;
                    pbVar29[0xf] = 0xff;
                    puVar45 = puVar45 + 8;
                  } while (puVar38 != puVar45);
                  if (local_38 != puVar38) goto LAB_10007656;
                }
                uStack_cc8 = puVar38;
                (*(uint64_t *)(void *)local_cd0) = (uint64_t)lVar60;
              }
              if ((uint *)0x2 < local_40) {
                puVar22 = (undefined1 *)(CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738) + 2);
                puVar38 = (uint *)0x0;
                do {
                  *(undefined1 *)(lVar60 + (long)puVar38 * 4) = puVar22[-2];
                  *(undefined1 *)(lVar60 + 1 + (long)puVar38 * 4) = puVar22[-1];
                  *(undefined1 *)(lVar60 + 2 + (long)puVar38 * 4) = *puVar22;
                  puVar38 = (uint *)((long)puVar38 + 1);
                  puVar22 = puVar22 + 3;
                } while (local_48 != puVar38);
              }
              uVar57 = CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
              if (uVar57 != 0) {
                lVar58 = CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
                if (uVar57 < 4) {
                  uVar34 = 0;
                }
                else {
                  uVar34 = 0;
                  do {
                    *(undefined1 *)(lVar60 + 3 + uVar34 * 4) = *(undefined1 *)(lVar58 + uVar34);
                    *(undefined1 *)(lVar60 + 7 + uVar34 * 4) = *(undefined1 *)(lVar58 + 1 + uVar34);
                    *(undefined1 *)(lVar60 + 0xb + uVar34 * 4) =
                         *(undefined1 *)(lVar58 + 2 + uVar34);
                    *(undefined1 *)(lVar60 + 0xf + uVar34 * 4) =
                         *(undefined1 *)(lVar58 + 3 + uVar34);
                    uVar34 = uVar34 + 4;
                  } while ((uVar57 & 0xfffffffffffffffc) != uVar34);
                }
                if ((ulong)((uint)uStack_718 & 3) != 0) {
                  uVar57 = 0;
                  do {
                    *(undefined1 *)(lVar60 + uVar34 * 4 + 3 + uVar57 * 4) =
                         *(undefined1 *)(lVar58 + uVar34 + uVar57);
                    uVar57 = uVar57 + 1;
                  } while (((uint)uStack_718 & 3) != uVar57);
                }
              }
              goto LAB_10008f98;
            }
          }
        }
        else {
          lVar60 = 0;
          bVar62 = 0;
          if (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) == 0) goto LAB_10008f98;
        }
      }
LAB_10009075:
      uStack_cc8 = (uint *)0x0;
LAB_10009080:
      recovered_100050c0(lVar60);
      goto LAB_100073ee;
    }
    if ((ulong)(uint)uStack_748 == 0) goto LAB_100073ec;
    lVar60 = CONCAT44(uStack_6e4,uStack_6e8);
    if (lVar60 - 1U < (ulong)(uint)uStack_748) {
      lVar58 = 0;
      do {
        if (*(long *)(CONCAT44(uStack_6ec,uStack_6f0) + 0x28 + lVar58) == 0) goto LAB_100073ec;
        lVar58 = lVar58 + 0x38;
      } while (lVar60 * 0x38 != lVar58);
      goto LAB_1000753f;
    }
    bVar62 = 0;
  }
LAB_100073f8:
  if (lVar60 != 0) {
    lVar58 = lVar60 * 0x38 + -0x10;
    do {
      *(undefined8 *)(CONCAT44(uStack_6ec,uStack_6f0) + lVar58) = 0;
      recovered_100050c0(*(undefined8 *)(CONCAT44(uStack_6ec,uStack_6f0) + -8 + lVar58));
      lVar58 = lVar58 + -0x38;
      lVar60 = lVar60 + -1;
    } while (lVar60 != 0);
  }
  uStack_6e8 = 0;
  uStack_6e4 = 0;
  recovered_100050c0(CONCAT44(uStack_6ec,uStack_6f0));
  uStack_700 = 0;
  uStack_6fc = 0;
  recovered_100050c0(CONCAT44(uStack_704,uStack_708));
  PF_PART4(uStack_718, 0) = 0;
  PF_PART4(uStack_718, 4) = 0;
  recovered_100050c0(CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720));
  PF_PART4(uStack_730, 0) = 0;
  PF_PART4(uStack_730, 4) = 0;
  recovered_100050c0(CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738));
  recovered_100050c0(local_128);
LAB_100091c5:
  recovered_100055b0(&local_110);
  return bVar62 & 1;
joined_r0x10008c26:
  local_70 = puVar49;
  local_138 = puVar38;
  if (local_70 == (uint *)0x0) goto LAB_10008c2c;
  (*(uint128 *)(void *)&local_cd0) = ZEXT812(0);
  PF_PART3(uStack_cc8, 5) = PF_PART3(auVar68, 13);
  PF_PART1(uStack_cc8, 4) = 1;
  local_cc0 = (uint *)0xff;
  local_cb8 = 0;
  auStack_cb4[1] = 0;
  auStack_cb4[2] = 0;
  local_108 = 0x23;
  bVar61 = recovered_100168d0((long)local_68,(ulong)local_58,(long)&local_768,
                              *(ulong *)((*(uint64_t *)(void *)local_198) + ((long)local_70 * 2 + -2) * 4),
                              (uint *)local_cd0);
  if (!bVar61) {
LAB_100090b0:
    bVar62 = 0;
    goto LAB_100090b3;
  }
  if ((PF_PART1(uStack_cc8, 4) == '\x01') && ((uint)local_cc0 != 0)) {
    (*(uint128 *)(void *)local_1e8) = (uint128)0x0;
    local_1d8 = 0;
    local_108 = 0x24;
    uVar57 = recovered_10016be0((long)local_68,(ulong)local_58,(long)&local_768,(uint *)local_cd0,
                                (long *)local_1e8);
    if ((char)uVar57 == '\0') {
      PF_PART8(local_1e8, 8) = 0;
      recovered_100050c0(PF_PART8(local_1e8, 0));
      goto LAB_100090b0;
    }
    local_120 = (uint *)(ulong)(uint)PF_PART4(local_cd0, 4);
    if (local_120 != (uint *)0x0) {
      local_8c = local_cb8;
      local_b8 = (uint *)(ulong)(uint)PF_PART4(local_cd0, 0);
      local_74 = PF_PART4(local_cc0, 4);
      local_a0 = (long)local_b8 * 4;
      local_88 = (uint *)0x0;
      puVar38 = (uint *)0x0;
      do {
        uVar20 = local_8c + (int)puVar38;
        local_98 = puVar38;
        if ((-1 < (int)uVar20 && (int)local_b8 != 0) && (int)uVar20 < (int)(uint)local_a8) {
          local_60 = (uint *)((ulong)uVar20 * (long)local_40);
          puVar38 = local_b8;
          pdVar51 = (double *)local_88;
          uVar20 = local_74;
          do {
            local_38 = puVar38;
            if ((int)uVar20 < (int)local_40 && -1 < (int)uVar20) {
              local_108 = 0x25;
              local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),uVar20);
              local_50 = pdVar51;
              recovered_10017470((byte *)(local_1d0 + (long)((ulong)uVar20 + (long)local_60)),
                                 (byte *)(PF_PART8(local_1e8, 0) + (long)pdVar51));
              pdVar51 = local_50;
              uVar20 = (uint)local_48;
            }
            pdVar51 = (double *)((long)pdVar51 + 4);
            uVar20 = uVar20 + 1;
            puVar38 = (uint *)((long)local_38 + -1);
          } while (puVar38 != (uint *)0x0);
        }
        puVar38 = (uint *)((long)local_98 + 1);
        local_88 = (uint *)((long)local_88 + local_a0);
      } while (puVar38 != local_120);
    }
    PF_PART8(local_1e8, 8) = 0;
    recovered_100050c0(PF_PART8(local_1e8, 0));
  }
  puVar49 = (uint *)((long)local_70 + -1);
  auVar68 = (*(uint128 *)(void *)&local_cd0);
  puVar38 = local_138;
  puVar45 = local_70;
  goto joined_r0x10008c26;
LAB_10008c2c:
  *puVar38 = (uint)local_40;
  puVar38[1] = (uint)local_a8;
  bVar62 = 1;
  (*(uint128 *)(void *)&local_cd0) = auVar68;
  local_70 = puVar45;
  if (local_80 != &local_1d0) {
    puVar38[4] = 0;
    puVar38[5] = 0;
    recovered_100050c0(*(undefined8 *)(puVar38 + 2));
    *(uint **)(puVar38 + 2) = local_1d0;
    *(undefined8 *)(puVar38 + 4) = local_1c8;
    *(undefined8 *)(puVar38 + 6) = uStack_1c0;
    local_1d0 = (uint *)0x0;
    uStack_1c0 = 0;
  }
LAB_100090b3:
  local_1c8 = 0;
  recovered_100050c0(local_1d0);
LAB_10008876:
  puStack_190 = (uint *)0x0;
  recovered_100050c0(*(uint64_t *)(void *)local_198);
LAB_1000888d:
  recovered_100050c0(CONCAT17(uStack_749,
                              CONCAT16(cStack_74a,
                                       CONCAT15(cStack_74b,CONCAT14(cStack_74c,uStack_750)))));
  local_768 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
  uStack_760 = (uint **)CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
  local_758 = (uint *)CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
  uStack_748 = (uint **)CONCAT44(PF_PART4(uStack_748, 4),(uint)uStack_748);
  local_740 = (uint *)CONCAT44(PF_PART4(local_740, 4),(undefined4)local_740);
  uStack_738 = (undefined1 *)CONCAT44(PF_PART4(uStack_738, 4),(undefined4)uStack_738);
  uStack_730 = (uint *)CONCAT44(PF_PART4(uStack_730, 4),(undefined4)uStack_730);
  uStack_728 = (uint *)CONCAT44(PF_PART4(uStack_728, 4),(undefined4)uStack_728);
  uStack_720 = (uint *)CONCAT44(PF_PART4(uStack_720, 4),(undefined4)uStack_720);
  uStack_718 = (undefined1 *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
  goto LAB_100091c5;
  while( true ) {
    bVar15 = *(byte *)((long)local_48 + (long)local_40 * 2 + 2);
    lVar60 = 0;
    puVar38 = puStack_7a8;
    while (*puVar38 != (uint)*(byte *)((long)local_48 + (long)local_40 * 2 + 1)) {
      lVar60 = lVar60 + 1;
      puVar38 = puVar38 + 0x10;
      bVar62 = 0;
      if (PF_PART8(local_7a0, 0) == lVar60) goto LAB_100091b6;
    }
    uVar20 = (uint)lVar60;
    if ((int)uVar20 < 0) goto LAB_100091b3;
    puStack_7a8[(ulong)(uVar20 & 0x7fffffff) * 0x10 + 4] = (uint)(bVar15 >> 4);
    puStack_7a8[(ulong)(uVar20 & 0x7fffffff) * 0x10 + 5] = bVar15 & 0xf;
    bVar62 = 0;
    if (0x3f < bVar15) goto LAB_100091b6;
    if (3 < (bVar15 & 0xf)) goto LAB_100091b6;
    local_108 = 0xc;
    PF_PART4(local_768, 0) = uVar20;
    recovered_100161b0((long *)local_790,(undefined4 *)&local_768);
    local_40 = (uint *)((long)local_40 + 1);
    if ((double *)local_40 == local_50) break;
LAB_10009234:
    if (PF_PART8(local_7a0, 0) == 0) goto LAB_100091b3;
  }
  if (((byte *)((long)local_48 + 1))[(long)local_60] == 0) {
    if (*(byte *)((long)((long)local_48 + 2) + (long)local_60) == 0x3f) {
      if (((byte *)((long)local_48 + 3))[(long)local_60] == 0) {
        puVar38 = (uint *)((long)local_88 + (long)local_38);
        puVar45 = puVar38;
        if ((byte *)((long)local_88 + (long)local_38) + 1 < local_58) {
          puVar49 = (uint *)((byte *)((long)local_88 + (long)local_38) + 1);
          do {
            puVar24 = puVar49;
            if (*(byte *)((long)local_68 + (long)puVar45) == 0xff) {
              if (local_58 <= puVar24) break;
              while( true ) {
                puVar24 = (uint *)((long)puVar24 + 1);
                bVar62 = ((byte *)((long)local_68 + -1))[(long)puVar24];
                if (bVar62 != 0xff) break;
                if (puVar24 == local_58) goto LAB_100093a9;
              }
              if (bVar62 != 0 && (bVar62 & 0xf8) != 0xd0) break;
            }
            puVar49 = (uint *)((long)puVar24 + 1);
            puVar45 = puVar24;
          } while ((uint *)((long)puVar24 + 1) < local_58);
        }
LAB_100093a9:
        local_68 = (uint *)((long)local_68 + (long)puVar38);
        stack0xfffffffffffff888 = local_68;
        local_38 = (uint *)((long)puVar45 - (long)puVar38);
        local_770 = local_38;
        if (local_38 != (uint *)0x0) {
          if (PF_PART4(local_cd0, 0) != 0) {
            if (PF_PART4(local_cd0, 4) != 0) {
              local_8c = (PF_PART4(local_cd0, 0) + (uint)uStack_cc8 * 8) - 1;
              local_a0 = CONCAT44(PF_PART4(local_a0, 4),(uint)uStack_cc8 << 3);
              local_a8 = (uint *)((ulong)local_8c / (ulong)((uint)uStack_cc8 << 3));
              uVar20 = (PF_PART4(local_cd0, 4) + PF_PART4(uStack_cc8, 4) * 8) - 1;
              local_60 = (uint *)CONCAT44(PF_PART4(local_60, 4),uVar20);
              local_50 = (double *)CONCAT44(PF_PART4(local_50, 4),PF_PART4(uStack_cc8, 4) * 8);
              local_120 = (uint *)((ulong)uVar20 / (ulong)(PF_PART4(uStack_cc8, 4) * 8));
              if (PF_PART8(local_7a0, 0) != 0) {
                local_38 = puStack_7a8;
                local_68 = puStack_7a8 + PF_PART8(local_7a0, 0) * 0x10;
                local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),(int)local_a8 * 8);
                local_58 = (uint *)CONCAT44(PF_PART4(local_58, 4),(int)local_120 * 8);
                do {
                  if ((char)auStack_cb4[(ulong)local_38[3] * 0x41 + -1] != '\x01')
                  goto LAB_100091b3;
                  if (local_8a8[(ulong)local_38[4] * 0x20] != '\x01') goto LAB_100091b3;
                  if (local_828[(ulong)local_38[5] * 0x20] != '\x01') goto LAB_100091b3;
                  local_38[7] = local_38[1] * (uint)local_48;
                  local_38[8] = local_38[2] * (int)local_58;
                  local_40 = (uint *)((ulong)(local_38[2] * (int)local_58) *
                                     (ulong)(local_38[1] * (uint)local_48));
                  local_38[0xc] = 0;
                  local_38[0xd] = 0;
                  if (*(uint **)(local_38 + 0xe) < local_40) {
                    local_108 = 0xd;
                    lVar58 = recovered_10005060((long)local_40);
                    lVar60 = *(long *)(local_38 + 10);
                    uVar57 = *(ulong *)(local_38 + 0xc);
                    if (uVar57 != 0) {
                      if (uVar57 < 4) {
                        uVar34 = 0;
                      }
                      else {
                        uVar34 = 0;
                        if (0x1f < (ulong)(lVar58 - lVar60)) {
                          if (uVar57 < 0x20) {
                            uVar25 = 0;
                          }
                          else {
                            uVar34 = uVar57 & 0xffffffffffffffe0;
                            uVar25 = 0;
                            do {
                              uVar21 = ((undefined8 *)(lVar60 + uVar25))[1];
                              puVar26 = (undefined8 *)(lVar60 + 0x10 + uVar25);
                              uVar9 = *puVar26;
                              uVar10 = puVar26[1];
                              *(undefined8 *)(lVar58 + uVar25) = *(undefined8 *)(lVar60 + uVar25);
                              ((undefined8 *)(lVar58 + uVar25))[1] = uVar21;
                              puVar26 = (undefined8 *)(lVar58 + 0x10 + uVar25);
                              *puVar26 = uVar9;
                              puVar26[1] = uVar10;
                              uVar25 = uVar25 + 0x20;
                            } while (uVar34 != uVar25);
                            if (uVar57 == uVar34) goto LAB_10009606;
                            uVar25 = uVar34;
                            if ((uVar57 & 0x1c) == 0) goto LAB_100095b2;
                          }
                          uVar34 = uVar57 & 0xfffffffffffffffc;
                          do {
                            *(undefined4 *)(lVar58 + uVar25) = *(undefined4 *)(lVar60 + uVar25);
                            uVar25 = uVar25 + 4;
                          } while (uVar34 != uVar25);
                          if (uVar57 == uVar34) goto LAB_10009606;
                        }
                      }
LAB_100095b2:
                      uVar40 = uVar57 & 3;
                      uVar25 = uVar34;
                      if (uVar40 != 0) {
                        do {
                          *(undefined1 *)(lVar58 + uVar25) = *(undefined1 *)(lVar60 + uVar25);
                          uVar25 = uVar25 + 1;
                          uVar40 = uVar40 - 1;
                        } while (uVar40 != 0);
                      }
                      if (uVar34 - uVar57 < 0xfffffffffffffffd) {
                        do {
                          *(undefined1 *)(lVar58 + uVar25) = *(undefined1 *)(lVar60 + uVar25);
                          *(undefined1 *)(lVar58 + 1 + uVar25) =
                               *(undefined1 *)(lVar60 + 1 + uVar25);
                          *(undefined1 *)(lVar58 + 2 + uVar25) =
                               *(undefined1 *)(lVar60 + 2 + uVar25);
                          *(undefined1 *)(lVar58 + 3 + uVar25) =
                               *(undefined1 *)(lVar60 + 3 + uVar25);
                          uVar25 = uVar25 + 4;
                        } while (uVar57 != uVar25);
                      }
                    }
LAB_10009606:
                    recovered_100050c0(lVar60);
                    *(long *)(local_38 + 10) = lVar58;
                    *(uint **)(local_38 + 0xe) = local_40;
                    puVar38 = *(uint **)(local_38 + 0xc);
                  }
                  else {
                    puVar38 = (uint *)0x0;
                  }
                  while (puVar38 < local_40) {
                    *(byte *)(*(long *)(local_38 + 10) + (long)puVar38) = 0;
                    puVar38 = (uint *)(*(long *)(local_38 + 0xc) + 1);
                    *(uint **)(local_38 + 0xc) = puVar38;
                  }
                  local_38[6] = 0;
                  local_38 = local_38 + 0x10;
                } while (local_38 != local_68);
                local_68 = stack0xfffffffffffff888;
                local_38 = local_770;
              }
              local_168 = 0;
              uStack_160 = 0;
              local_178 = 0;
              uStack_170 = 0;
              local_188 = (uint *)0x0;
              uStack_180 = 0;
              (*(uint128 *)(void *)&local_198) = ZEXT816(0);
              local_770 = local_38;
              if ((uint)local_50 <= (uint)local_60) {
                local_74 = 0;
                local_118 = local_118 & 0xffffffff00000000;
                local_48 = (uint *)((ulong)local_48 & 0xffffffff00000000);
                local_58 = (uint *)0x0;
                local_40 = (uint *)0x0;
                do {
                  if ((uint)local_a0 <= local_8c) {
                    local_148 = local_148 & 0xffffffff00000000;
                    do {
                      if (local_74 == (uint)local_cc0 && (uint)local_cc0 != 0) {
                        if ((local_40 < local_38) &&
                           (*(byte *)((long)local_68 + (long)local_40) == 0xff)) {
                          local_40 = (uint *)((long)local_40 + 1);
                          do {
                            puVar38 = local_40;
                            if (local_38 == local_40) goto LAB_100091b3;
                            bVar62 = *(byte *)((long)local_68 + (long)local_40);
                            local_40 = (uint *)((long)local_40 + 1);
                          } while (bVar62 == 0xff);
                          if ((bVar62 & 0xf8) != 0xd0) {
                            if (bVar62 != 0) goto LAB_100091b3;
                            local_40 = (uint *)((long)puVar38 - 1);
                          }
                        }
                        local_48 = (uint *)((ulong)local_48 & 0xffffffff00000000);
                        if (PF_PART8(local_7a0, 0) != 0) {
                          lVar60 = 0;
                          do {
                            *(undefined4 *)((long)puStack_7a8 + lVar60 + 0x18) = 0;
                            lVar60 = lVar60 + 0x40;
                          } while (PF_PART8(local_7a0, 0) * 0x40 != lVar60);
                        }
                        local_74 = 0;
                      }
                      if (PF_PART8(local_790, 8) != 0) {
                        local_130 = (uint *)PF_PART8(local_790, 0);
                        local_1a8 = (uint *)(PF_PART8(local_790, 0) + PF_PART8(local_790, 8) * 4);
                        do {
                          uVar57 = (ulong)*local_130;
                          if ((ulong)PF_PART8(local_7a0, 0) <= uVar57) goto LAB_100091b3;
                          uVar20 = puStack_7a8[uVar57 * 0x10 + 2];
                          if (uVar20 != 0) {
                            local_70 = puStack_7a8 + uVar57 * 0x10;
                            uVar19 = (puStack_7a8 + uVar57 * 0x10)[1];
                            local_140 = local_140 & 0xffffffff00000000;
LAB_10009d6d:
                            if (uVar19 != 0) {
                              local_1a0 = local_1a0 & 0xffffffff00000000;
LAB_10009d7f:
                              uVar57 = (ulong)local_70[3];
                              if (uVar57 < 4) {
                                uVar34 = (ulong)local_70[4];
                                if (uVar34 < 4) {
                                  uVar25 = (ulong)local_70[5];
                                  if (uVar25 < 4) {
                                    if ((char)auStack_cb4[uVar57 * 0x41 + -1] == '\x01') {
                                      uStack_674 = 0;
                                      uStack_670 = 0;
                                      uStack_684 = 0;
                                      uStack_67c = 0;
                                      local_678 = 0;
                                      local_694 = 0;
                                      uStack_68c = 0;
                                      local_6a4 = 0;
                                      uStack_69c = 0;
                                      local_6b4 = 0;
                                      uStack_6ac = 0;
                                      local_6c4 = 0;
                                      uStack_6bc = 0;
                                      local_6d4 = 0;
                                      uStack_6cc = 0;
                                      uStack_6e4 = 0;
                                      uStack_6e0 = 0;
                                      uStack_6dc = 0;
                                      uStack_6d8 = 0;
                                      local_6f4 = 0;
                                      uStack_6f0 = 0;
                                      uStack_6ec = 0;
                                      uStack_6e8 = 0;
                                      uStack_704 = 0;
                                      uStack_700 = 0;
                                      uStack_6fc = 0;
                                      uStack_6f8 = 0;
                                      PF_PART4(uStack_718, 4) = 0;
                                      uStack_710 = 0;
                                      uStack_70c = 0;
                                      uStack_708 = 0;
                                      PF_PART4(uStack_728, 4) = 0;
                                      PF_PART4(uStack_720, 0) = 0;
                                      PF_PART4(uStack_720, 4) = 0;
                                      PF_PART4(uStack_718, 0) = 0;
                                      PF_PART4(uStack_738, 4) = 0;
                                      PF_PART4(uStack_730, 0) = 0;
                                      PF_PART4(uStack_730, 4) = 0;
                                      PF_PART4(uStack_728, 0) = 0;
                                      PF_PART4(uStack_748, 4) = 0;
                                      PF_PART4(local_740, 0) = 0;
                                      PF_PART4(local_740, 4) = 0;
                                      PF_PART4(uStack_738, 0) = 0;
                                      PF_PART4(local_758, 4) = 0;
                                      uStack_750 = 0;
                                      cStack_74c = '\0';
                                      cStack_74b = '\0';
                                      cStack_74a = '\0';
                                      uStack_749 = 0;
                                      PF_PART4(uStack_748, 0) = 0;
                                      PF_PART4(local_768, 4) = 0;
                                      PF_PART4(uStack_760, 0) = 0;
                                      PF_PART4(uStack_760, 4) = 0;
                                      PF_PART4(local_758, 0) = 0;
                                      if (local_8a8[uVar34 * 0x20] != '\0') {
                                        lVar60 = local_8a0[uVar34 * 4];
                                        uVar20 = 1;
                                        iVar17 = 0;
                                        bVar61 = true;
                                        do {
                                          if ((uint)local_48 == 0) {
                                            if (local_38 <= local_40) break;
                                            puVar38 = (uint *)((long)local_40 + 1);
                                            while( true ) {
                                              local_58 = (uint *)(ulong)((byte *)((long)local_68 +
                                                                                 -1))[(long)puVar38]
                                              ;
                                              local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),8);
                                              if (((byte *)((long)local_68 + -1))[(long)puVar38] !=
                                                  0xff) break;
                                              local_58 = (uint *)0xff;
                                              if (local_38 <= puVar38) goto LAB_100091b3;
                                              local_40 = (uint *)((long)puVar38 + 1);
                                              if (*(byte *)((long)local_68 + (long)puVar38) == 0) {
                                                local_58 = (uint *)CONCAT71((int7)((ulong)puVar38 >>
                                                                                  8),0xff);
                                                goto LAB_10009eaa;
                                              }
                                              if ((*(byte *)((long)local_68 + (long)puVar38) & 0xf8)
                                                  != 0xd0) goto LAB_100091b3;
                                              puVar38 = (uint *)((long)puVar38 + 2);
                                              if (local_38 <= local_40) goto LAB_100091b3;
                                            }
                                            local_40 = puVar38;
                                          }
LAB_10009eaa:
                                          uVar40 = (ulong)local_58 & 0xffffffff;
                                          local_58 = (uint *)CONCAT71((int7)((ulong)local_58 >> 8),
                                                                      (char)local_58 * '\x02');
                                          local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),
                                                                      (uint)local_48 + -1);
                                          iVar17 = (uint)((byte)(uVar40 >> 7) & 1) + iVar17 * 2;
                                          if (local_8a0[uVar34 * 4 + 1] != 0) {
                                            lVar58 = 0;
                                            do {
                                              if ((*(uint *)(lVar60 + 4 + lVar58) == uVar20) &&
                                                 (*(int *)(lVar60 + lVar58) == iVar17)) {
                                                uVar20 = *(uint *)(lVar60 + 8 + lVar58);
                                                if (!(bool)(bVar61 & uVar20 < 0xc))
                                                goto LAB_100091b3;
                                                if (uVar20 == 0) {
                                                  iVar17 = 0;
                                                  puVar38 = local_40;
                                                  goto LAB_1000a08a;
                                                }
                                                uVar54 = 0;
                                                bVar61 = false;
                                                uVar19 = 0;
                                                puVar45 = local_40;
                                                goto LAB_10009f98;
                                              }
                                              lVar58 = lVar58 + 0xc;
                                            } while (local_8a0[uVar34 * 4 + 1] * 0xc != lVar58);
                                          }
                                          bVar61 = uVar20 < 0x10;
                                          uVar20 = uVar20 + 1;
                                        } while (uVar20 != 0x11);
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_100091b3;
                            }
                            uVar19 = 0;
                            goto LAB_1000aa4f;
                          }
LAB_1000aa65:
                          local_130 = local_130 + 1;
                        } while (local_130 != local_1a8);
                      }
                      local_74 = local_74 + 1;
                      uVar20 = (int)local_148 + 1;
                      local_148 = CONCAT44(PF_PART4(local_148, 4),uVar20);
                    } while (uVar20 < (uint)local_a8);
                  }
                  uVar20 = (uint)local_118 + 1;
                  local_118 = CONCAT44(PF_PART4(local_118, 4),uVar20);
                } while (uVar20 < (uint)local_120);
              }
              if ((ulong)(uint)PF_PART4(local_cd0, 4) * (ulong)(uint)PF_PART4(local_cd0, 0) >> 0x3e == 0) {
                local_108 = 0x1e;
                recovered_10015790(&local_768,
                                   (ulong)(uint)PF_PART4(local_cd0, 4) * (ulong)(uint)PF_PART4(local_cd0, 0) * 4);
                puVar38 = local_138;
                dVar13 = DAT_1001d6f0;
                dVar1 = DAT_1001d6e8;
                dVar64 = DAT_1001d6e0;
                dVar63 = DAT_1001d6d8;
                uVar34 = DAT_1001d478;
                uVar57 = DAT_1001d410;
                if (PF_PART4(local_cd0, 4) == 0) {
                  uVar20 = 0;
                }
                else {
                  uVar25 = (ulong)(uint)PF_PART4(local_cd0, 0);
                  local_40 = (uint *)0x0;
                  do {
                    uVar40 = 0;
                    if ((int)uVar25 != 0) {
                      uVar40 = 0;
                      do {
                        local_38 = (uint *)CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
                        lVar60 = uVar25 * (long)local_40 + uVar40;
                        uVar20 = puStack_7a8[7] - 1;
                        iVar17 = (int)uVar40;
                        uVar25 = (ulong)(puStack_7a8[1] * iVar17) / (ulong)(uint)uStack_cc8;
                        uVar31 = (ulong)uVar20;
                        if ((uint)uVar25 < uVar20) {
                          uVar31 = uVar25;
                        }
                        iVar44 = (int)local_40;
                        uVar25 = (ulong)(puStack_7a8[2] * iVar44) / (ulong)PF_PART4(uStack_cc8, 4);
                        uVar30 = (ulong)(puStack_7a8[8] - 1);
                        if ((uint)uVar25 < puStack_7a8[8] - 1) {
                          uVar30 = uVar25;
                        }
                        bVar62 = *(byte *)(uVar31 + uVar30 * puStack_7a8[7] +
                                                    *(long *)(puStack_7a8 + 10));
                        if (PF_PART8(local_7a0, 0) == 3) {
                          uVar20 = puStack_7a8[0x17] - 1;
                          uVar31 = (ulong)local_48 >> 0x20;
                          local_48 = (uint *)((ulong)local_48 & 0xffffffff00000000);
                          uVar25 = (ulong)(puStack_7a8[0x11] * iVar17) / (ulong)(uint)uStack_cc8;
                          uVar30 = (ulong)uVar20;
                          if ((uint)uVar25 < uVar20) {
                            uVar30 = uVar25;
                          }
                          uVar25 = (ulong)(puStack_7a8[0x12] * iVar44) / (ulong)PF_PART4(uStack_cc8, 4);
                          uVar32 = (ulong)(puStack_7a8[0x18] - 1);
                          if ((uint)uVar25 < puStack_7a8[0x18] - 1) {
                            uVar32 = uVar25;
                          }
                          uVar20 = puStack_7a8[0x27] - 1;
                          uVar25 = (ulong)(puStack_7a8[0x21] * iVar17) / (ulong)(uint)uStack_cc8;
                          uVar59 = (ulong)uVar20;
                          if ((uint)uVar25 < uVar20) {
                            uVar59 = uVar25;
                          }
                          uVar25 = (ulong)(puStack_7a8[0x22] * iVar44) / (ulong)PF_PART4(uStack_cc8, 4);
                          uVar56 = (ulong)(puStack_7a8[0x28] - 1);
                          if ((uint)uVar25 < puStack_7a8[0x28] - 1) {
                            uVar56 = uVar25;
                          }
                          dVar65 = (double)bVar62;
                          dVar66 = (double)(int)(*(byte *)(uVar59 + uVar56 * puStack_7a8[0x27] +
                                                                    *(long *)(puStack_7a8 + 0x2a)) -
                                                0x80);
                          dVar67 = dVar66 * dVar63 + dVar65;
                          uVar25 = -(ulong)(0.0 <= dVar67);
                          lVar58 = (long)(pf_bits_double(~uVar25 & uVar34 | uVar25 & uVar57) + dVar67);
                          bVar62 = 0xff;
                          uVar20 = (uint)lVar58;
                          if (uVar20 < 0xff) {
                            bVar62 = (byte)lVar58;
                          }
                          bVar15 = *(byte *)(uVar30 + uVar32 * puStack_7a8[0x17] +
                                                      *(long *)(puStack_7a8 + 0x1a));
                          bVar36 = 0;
                          if (0 < (int)uVar20) {
                            bVar36 = bVar62;
                          }
                          *(byte *)(local_38 + lVar60) = bVar36;
                          dVar67 = (double)(int)(bVar15 - 0x80);
                          dVar66 = dVar66 * dVar1 + dVar67 * dVar64 + dVar65;
                          uVar25 = -(ulong)(0.0 <= dVar66);
                          uVar19 = (uint)(long)(pf_bits_double(~uVar25 & uVar34 | uVar25 & uVar57) +
                                               dVar66);
                          uVar20 = 0xff;
                          if (uVar19 < 0xff) {
                            uVar20 = uVar19;
                          }
                          bVar62 = 0;
                          if (0 < (int)uVar19) {
                            bVar62 = (byte)uVar20;
                          }
                          *(byte *)((long)local_38 + lVar60 * 4 + 1) = bVar62;
                          dVar65 = dVar67 * dVar13 + dVar65;
                          uVar25 = -(ulong)(0.0 <= dVar65);
                          uVar19 = (uint)(long)(pf_bits_double(~uVar25 & uVar34 | uVar25 & uVar57) +
                                               dVar65);
                          uVar20 = 0xff;
                          if (uVar19 < 0xff) {
                            uVar20 = uVar19;
                          }
                          if (0 < (int)uVar19) {
                            local_48 = (uint *)CONCAT44((int)uVar31,uVar20);
                          }
                          bVar62 = (byte)local_48;
                        }
                        else if (PF_PART8(local_7a0, 0) == 1) {
                          *(byte *)(local_38 + lVar60) = bVar62;
                          *(byte *)((long)local_38 + lVar60 * 4 + 1) = bVar62;
                        }
                        else {
                          uVar20 = puStack_7a8[0x17] - 1;
                          uVar25 = (ulong)(puStack_7a8[0x11] * iVar17) / (ulong)(uint)uStack_cc8;
                          uVar31 = (ulong)uVar20;
                          if ((uint)uVar25 < uVar20) {
                            uVar31 = uVar25;
                          }
                          uVar25 = (ulong)(puStack_7a8[0x12] * iVar44) / (ulong)PF_PART4(uStack_cc8, 4);
                          uVar30 = (ulong)(puStack_7a8[0x18] - 1);
                          if ((uint)uVar25 < puStack_7a8[0x18] - 1) {
                            uVar30 = uVar25;
                          }
                          bVar15 = *(byte *)(uVar31 + uVar30 * puStack_7a8[0x17] +
                                                      *(long *)(puStack_7a8 + 0x1a));
                          uVar19 = (uint)bVar15;
                          uVar20 = puStack_7a8[0x27] - 1;
                          uVar25 = (ulong)(puStack_7a8[0x21] * iVar17) / (ulong)(uint)uStack_cc8;
                          uVar31 = (ulong)uVar20;
                          if ((uint)uVar25 < uVar20) {
                            uVar31 = uVar25;
                          }
                          uVar25 = (ulong)(puStack_7a8[0x22] * iVar44) / (ulong)PF_PART4(uStack_cc8, 4);
                          uVar30 = (ulong)(puStack_7a8[0x28] - 1);
                          if ((uint)uVar25 < puStack_7a8[0x28] - 1) {
                            uVar30 = uVar25;
                          }
                          bVar36 = *(byte *)(uVar31 + uVar30 * puStack_7a8[0x27] +
                                                      *(long *)(puStack_7a8 + 0x2a));
                          uVar54 = (uint)bVar36;
                          uVar20 = puStack_7a8[0x37] - 1;
                          uVar25 = (ulong)(puStack_7a8[0x31] * iVar17) / (ulong)(uint)uStack_cc8;
                          uVar31 = (ulong)uVar20;
                          if ((uint)uVar25 < uVar20) {
                            uVar31 = uVar25;
                          }
                          uVar25 = (ulong)(puStack_7a8[0x32] * iVar44) / (ulong)PF_PART4(uStack_cc8, 4);
                          uVar30 = (ulong)(puStack_7a8[0x38] - 1);
                          if ((uint)uVar25 < puStack_7a8[0x38] - 1) {
                            uVar30 = uVar25;
                          }
                          if (PF_PART4(local_cc0, 4) == 2) {
                            dVar65 = (double)bVar62;
                            dVar66 = (double)(int)(bVar36 - 0x80);
                            dVar67 = dVar66 * dVar63 + dVar65;
                            uVar25 = -(ulong)(0.0 <= dVar67);
                            uVar54 = 0xff;
                            uVar19 = (uint)(long)(pf_bits_double(~uVar25 & uVar34 | uVar25 & uVar57) +
                                                 dVar67);
                            if (uVar19 < 0xff) {
                              uVar20 = uVar19 & 0xff;
                            }
                            else {
                              uVar20 = 0xff;
                            }
                            if ((int)uVar19 < 1) {
                              uVar20 = 0;
                            }
                            dVar67 = (double)(int)(bVar15 - 0x80);
                            dVar66 = dVar66 * dVar1 + dVar67 * dVar64 + dVar65;
                            uVar25 = -(ulong)(0.0 <= dVar66);
                            uVar53 = (uint)(long)(pf_bits_double(~uVar25 & uVar34 | uVar25 & uVar57) +
                                                 dVar66);
                            if (uVar53 < 0xff) {
                              uVar19 = uVar53 & 0xff;
                            }
                            else {
                              uVar19 = 0xff;
                            }
                            if ((int)uVar53 < 1) {
                              uVar19 = 0;
                            }
                            dVar65 = dVar67 * dVar13 + dVar65;
                            uVar25 = -(ulong)(0.0 <= dVar65);
                            uVar53 = (uint)(long)(pf_bits_double(~uVar25 & uVar34 | uVar25 & uVar57) +
                                                 dVar65);
                            if (uVar53 < 0xff) {
                              uVar54 = uVar53 & 0xff;
                            }
                            if ((int)uVar53 < 1) {
                              uVar54 = 0;
                            }
                          }
                          else {
                            uVar20 = (uint)bVar62;
                          }
                          bVar62 = *(byte *)(uVar31 + uVar30 * puStack_7a8[0x37] +
                                                      *(long *)(puStack_7a8 + 0x3a));
                          uVar20 = uVar20 + bVar62;
                          bVar61 = 0xfe < uVar20;
                          if (bVar61) {
                            uVar20 = 0xff;
                          }
                          bVar15 = ~(byte)uVar20;
                          if (bVar61) {
                            bVar15 = 0;
                          }
                          *(byte *)(local_38 + lVar60) = bVar15;
                          uVar19 = uVar19 + bVar62;
                          bVar61 = 0xfe < uVar19;
                          if (bVar61) {
                            uVar19 = 0xff;
                          }
                          bVar15 = ~(byte)uVar19;
                          if (bVar61) {
                            bVar15 = 0;
                          }
                          *(byte *)((long)local_38 + lVar60 * 4 + 1) = bVar15;
                          uVar54 = uVar54 + bVar62;
                          bVar61 = 0xfe < uVar54;
                          if (bVar61) {
                            uVar54 = 0xff;
                          }
                          bVar62 = ~(byte)uVar54;
                          if (bVar61) {
                            bVar62 = 0;
                          }
                        }
                        *(byte *)((long)local_38 + lVar60 * 4 + 2) = bVar62;
                        *(byte *)((long)local_38 + lVar60 * 4 + 3) = 0xff;
                        uVar40 = uVar40 + 1;
                        uVar25 = (ulong)(uint)PF_PART4(local_cd0, 0);
                      } while (uVar40 < uVar25);
                      uVar40 = uVar25;
                    }
                    uVar25 = uVar40;
                    local_40 = (uint *)((long)local_40 + 1);
                    uVar20 = PF_PART4(local_cd0, 4);
                  } while (local_40 < (uint *)(ulong)(uint)PF_PART4(local_cd0, 4));
                }
                *local_138 = PF_PART4(local_cd0, 0);
                local_138[1] = uVar20;
                if (local_80 == (uint **)&local_768) {
                  uVar21 = CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
                }
                else {
                  local_138[4] = 0;
                  local_138[5] = 0;
                  recovered_100050c0(*(undefined8 *)(local_138 + 2));
                  *(ulong *)(puVar38 + 2) = CONCAT44(PF_PART4(local_768, 4),(uint)local_768);
                  *(ulong *)(puVar38 + 4) = CONCAT44(PF_PART4(uStack_760, 4),(uint)uStack_760);
                  *(ulong *)(puVar38 + 6) = CONCAT44(PF_PART4(local_758, 4),(uint)local_758);
                  PF_PART4(local_768, 0) = 0;
                  PF_PART4(local_768, 4) = 0;
                  PF_PART4(local_758, 0) = 0;
                  PF_PART4(local_758, 4) = 0;
                  uVar21 = 0;
                }
                PF_PART4(uStack_760, 0) = 0;
                PF_PART4(uStack_760, 4) = 0;
                recovered_100050c0(uVar21);
                bVar62 = 1;
                goto LAB_100091b6;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_100091b3;
LAB_10009f98:
  if ((uint)local_48 == 0) {
    do {
      if (local_38 <= puVar45) {
LAB_1000a052:
        local_48 = (uint *)((ulong)PF_PART4(local_48, 4) << 0x20);
        puVar38 = puVar45;
        if (!bVar61) goto LAB_100091b3;
        goto LAB_1000a063;
      }
      puVar38 = (uint *)((long)puVar45 + 1);
      local_40 = puVar38;
      if (*(byte *)((long)local_68 + (long)puVar45) != 0xff) {
        local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),7);
        local_58 = (uint *)(ulong)*(byte *)((long)local_68 + (long)puVar45);
        goto LAB_10009fa1;
      }
      if (local_38 <= puVar38) {
        puVar45 = (uint *)((long)puVar45 + 1);
LAB_1000a04e:
        local_40 = puVar45;
        goto LAB_1000a052;
      }
      pbVar29 = (byte *)((long)local_68 + 1) + (long)puVar45;
      puVar45 = (uint *)((long)puVar45 + 2);
      if (*pbVar29 == 0) goto LAB_1000a02b;
      if ((*pbVar29 & 0xf8) != 0xd0) goto LAB_1000a04e;
      local_40 = puVar45;
    } while( true );
  }
  local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),(uint)local_48 + -1);
  puVar38 = puVar45;
  goto LAB_10009fa1;
LAB_1000a02b:
  local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),7);
  local_40 = puVar45;
  puVar38 = puVar45;
  local_58 = (uint *)0xff;
LAB_10009fa1:
  uVar34 = (ulong)local_58 & 0xffffffff;
  local_58 = (uint *)CONCAT71((int7)((ulong)local_58 >> 8),(char)local_58 * '\x02');
  uVar54 = (uint)((byte)(uVar34 >> 7) & 1) + uVar54 * 2;
  uVar19 = uVar19 + 1;
  bVar61 = uVar20 <= uVar19;
  puVar45 = puVar38;
  if (uVar19 == uVar20) goto LAB_1000a063;
  goto LAB_10009f98;
LAB_1000a063:
  uVar19 = -1 << ((byte)uVar20 & 0x1f) | 1;
  if (uVar54 >> ((byte)uVar20 - 1 & 0x1f) != 0) {
    uVar19 = 0;
  }
  iVar17 = uVar19 + uVar54;
LAB_1000a08a:
  uVar20 = local_70[6];
  local_70[6] = iVar17 + uVar20;
  PF_PART4(local_768, 0) = (iVar17 + uVar20) * auStack_cb4[uVar57 * 0x41];
  if (local_828[uVar25 * 0x20] == '\x01') {
    lVar60 = local_820[uVar25 * 4];
    lVar58 = local_820[uVar25 * 4 + 1];
    uVar20 = 1;
LAB_1000a0d4:
    iVar17 = 0;
    bVar61 = true;
    uVar19 = 1;
    do {
      if ((uint)local_48 == 0) {
        if (local_38 <= puVar38) break;
        puVar38 = (uint *)((long)puVar38 + 1);
        while( true ) {
          local_58 = (uint *)(ulong)((byte *)((long)local_68 + -1))[(long)puVar38];
          local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),8);
          if (((byte *)((long)local_68 + -1))[(long)puVar38] != 0xff) break;
          local_58 = (uint *)0xff;
          if (local_38 <= puVar38) goto LAB_100091b3;
          local_40 = (uint *)((long)puVar38 + 1);
          if (*(byte *)((long)local_68 + (long)puVar38) == 0) {
            local_58 = (uint *)CONCAT71((int7)((ulong)puVar38 >> 8),0xff);
            puVar38 = local_40;
            goto LAB_1000a0ff;
          }
          if ((*(byte *)((long)local_68 + (long)puVar38) & 0xf8) != 0xd0) goto LAB_100091b3;
          puVar38 = (uint *)((long)puVar38 + 2);
          if (local_38 <= local_40) goto LAB_100091b3;
        }
        local_40 = puVar38;
      }
LAB_1000a0ff:
      uVar34 = (ulong)local_58 & 0xffffffff;
      local_58 = (uint *)CONCAT71((int7)((ulong)local_58 >> 8),(char)local_58 * '\x02');
      local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),(uint)local_48 + -1);
      iVar17 = (uint)((byte)(uVar34 >> 7) & 1) + iVar17 * 2;
      if (lVar58 != 0) {
        lVar48 = 0;
        do {
          if ((*(uint *)(lVar60 + 4 + lVar48) == uVar19) && (*(int *)(lVar60 + lVar48) == iVar17)) {
            if (!bVar61) goto LAB_100091b3;
            uVar19 = *(uint *)(lVar60 + 8 + lVar48);
            uVar54 = uVar19 >> 4;
            uVar19 = uVar19 & 0xf;
            if (uVar19 == 0) {
              if (uVar54 != 0xf) goto LAB_1000a300;
              uVar20 = uVar20 + 0x10;
              goto LAB_1000a2f7;
            }
            uVar54 = uVar54 + uVar20;
            if (0x3f < uVar54) goto LAB_100091b3;
            uVar53 = 0;
            bVar61 = false;
            uVar20 = 0;
            puVar45 = puVar38;
            goto LAB_1000a1e7;
          }
          lVar48 = lVar48 + 0xc;
        } while (lVar58 * 0xc != lVar48);
      }
      bVar61 = uVar19 < 0x10;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x11);
  }
  goto LAB_100091b3;
LAB_1000a1e7:
  if ((uint)local_48 == 0) {
    do {
      if (local_38 <= puVar45) {
LAB_1000a29f:
        local_48 = (uint *)((ulong)PF_PART4(local_48, 4) << 0x20);
        puVar38 = puVar45;
        if (!bVar61) goto LAB_100091b3;
        goto LAB_1000a2af;
      }
      puVar38 = (uint *)((long)puVar45 + 1);
      local_40 = puVar38;
      if (*(byte *)((long)local_68 + (long)puVar45) != 0xff) {
        local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),7);
        local_58 = (uint *)(ulong)*(byte *)((long)local_68 + (long)puVar45);
        goto LAB_1000a1f0;
      }
      if (local_38 <= puVar38) {
        puVar45 = (uint *)((long)puVar45 + 1);
LAB_1000a29b:
        local_40 = puVar45;
        goto LAB_1000a29f;
      }
      pbVar29 = (byte *)((long)local_68 + 1) + (long)puVar45;
      puVar45 = (uint *)((long)puVar45 + 2);
      if (*pbVar29 == 0) goto LAB_1000a277;
      if ((*pbVar29 & 0xf8) != 0xd0) goto LAB_1000a29b;
      local_40 = puVar45;
    } while( true );
  }
  local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),(uint)local_48 + -1);
  puVar38 = puVar45;
  goto LAB_1000a1f0;
LAB_1000a277:
  local_48 = (uint *)CONCAT44(PF_PART4(local_48, 4),7);
  local_40 = puVar45;
  puVar38 = puVar45;
  local_58 = (uint *)0xff;
LAB_1000a1f0:
  uVar34 = (ulong)local_58 & 0xffffffff;
  local_58 = (uint *)CONCAT71((int7)((ulong)local_58 >> 8),(char)local_58 * '\x02');
  uVar53 = (uint)((byte)(uVar34 >> 7) & 1) + uVar53 * 2;
  uVar20 = uVar20 + 1;
  bVar61 = uVar19 <= uVar20;
  puVar45 = puVar38;
  if (uVar20 == uVar19) goto LAB_1000a2af;
  goto LAB_1000a1e7;
LAB_1000a2af:
  uVar20 = -1 << (sbyte)uVar19 | 1;
  if (uVar53 >> ((sbyte)uVar19 - 1U & 0x1f) != 0) {
    uVar20 = 0;
  }
  *(uint *)((long)&local_768 + (ulong)(uint)(&DAT_1001d760)[uVar54] * 4) =
       (uVar20 + uVar53) * auStack_cb4[uVar57 * 0x41 + (ulong)(uint)(&DAT_1001d760)[uVar54]];
  uVar20 = uVar54 + 1;
LAB_1000a2f7:
  if (0x3f < uVar20) goto LAB_1000a300;
  goto LAB_1000a0d4;
LAB_1000a300:
  if (DAT_1001f330 == '\0') {
    local_50 = (double *)&DAT_1001f378;
    local_88 = (uint *)0x0;
    do {
      local_60 = (uint *)(uintptr_t)pf_double_bits((double)(int)local_88 + (double)(int)local_88 + DAT_1001d418);
      local_108 = 0xe;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * _DAT_1001d6f8 * DAT_1001d450 * DAT_1001d690);
      local_50[-7] = dVar63;
      local_108 = 0xf;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * DAT_1001d450 * DAT_1001d690);
      local_50[-6] = dVar63;
      local_108 = 0x10;
      dVar63 = recovered_10001f60((pf_bits_double((uintptr_t)local_60) + pf_bits_double((uintptr_t)local_60)) * DAT_1001d450 *
                                  DAT_1001d690);
      local_50[-5] = dVar63;
      local_108 = 0x11;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * _DAT_1001d440 * DAT_1001d450 * DAT_1001d690);
      local_50[-4] = dVar63;
      local_108 = 0x12;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * _DAT_1001d698 * DAT_1001d450 * DAT_1001d690);
      local_50[-3] = dVar63;
      local_108 = 0x13;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * _DAT_1001d6a0 * DAT_1001d450 * DAT_1001d690);
      local_50[-2] = dVar63;
      local_108 = 0x14;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * _DAT_1001d6a8 * DAT_1001d450 * DAT_1001d690);
      local_50[-1] = dVar63;
      local_108 = 0x15;
      dVar63 = recovered_10001f60(pf_bits_double((uintptr_t)local_60) * _DAT_1001d6b0 * DAT_1001d450 * DAT_1001d690);
      *local_50 = dVar63;
      local_88 = (uint *)((long)local_88 + 1);
      local_50 = local_50 + 8;
    } while (local_88 != (uint *)0x8);
    DAT_1001f330 = '\x01';
  }
  local_50 = (double *)(uintptr_t)pf_double_bits((double)(int32_t)CONCAT13(uStack_749,CONCAT12(cStack_74a,CONCAT11(cStack_74b,cStack_74c))) *
             DAT_1001d6b8);
  local_60 = (uint *)(uintptr_t)pf_double_bits((double)(int)uStack_750 * DAT_1001d6b8);
  local_88 = (uint *)(uintptr_t)pf_double_bits((double)(int)PF_PART4(local_758, 4) * DAT_1001d6b8);
  local_98 = (uint *)(uintptr_t)pf_double_bits((double)(int)(uint)local_758 * DAT_1001d6b8);
  local_b8 = (uint *)(uintptr_t)pf_double_bits((double)(int)PF_PART4(uStack_760, 4) * DAT_1001d6b8);
  puVar26 = &DAT_1001f340;
  lVar60 = 0;
  do {
    dVar63 = ((double *)&DAT_1001f340)[lVar60 * 8];
    lVar58 = 0;
    do {
      dVar64 = pf_bits_double((uintptr_t)local_50) * ((double *)&DAT_1001f378)[lVar58 * 8] * dVar63 +
               (double)(int)uStack_750 * DAT_1001d6b8 * ((double *)&DAT_1001f370)[lVar58 * 8] * dVar63
               + (double)(int)PF_PART4(local_758, 4) * DAT_1001d6b8 * ((double *)&DAT_1001f368)[lVar58 * 8] *
                 dVar63 + (double)(int)(uint)local_758 * DAT_1001d6b8 *
                          ((double *)&DAT_1001f360)[lVar58 * 8] * dVar63 +
                          (double)(int)PF_PART4(uStack_760, 4) * DAT_1001d6b8 *
                          ((double *)&DAT_1001f358)[lVar58 * 8] * dVar63 +
                          (double)(int)(uint)uStack_760 * DAT_1001d6b8 *
                          ((double *)&DAT_1001f350)[lVar58 * 8] * dVar63 +
                          (double)(int)PF_PART4(local_768, 4) * DAT_1001d6b8 *
                          ((double *)&DAT_1001f348)[lVar58 * 8] * dVar63 +
                          (double)(int)(uint)local_768 * _DAT_1001d6c0 *
                          ((double *)&DAT_1001f340)[lVar58 * 8] * dVar63 + _DAT_1001d6f8;
      lVar48 = 0xf;
      do {
        dVar1 = *(double *)((long)puVar26 + lVar48 + -7);
        dVar64 = (double)*(int *)((long)&local_768 + lVar48 * 4) *
                 ((double *)&DAT_1001f378)[lVar58 * 8] * dVar1 +
                 (double)*(int *)((long)&local_770 + lVar48 * 4 + 4) *
                 ((double *)&DAT_1001f370)[lVar58 * 8] * dVar1 +
                 (double)*(int *)(local_780 + lVar48 * 4 + 0x10) *
                 ((double *)&DAT_1001f368)[lVar58 * 8] * dVar1 +
                 (double)*(int *)(local_780 + lVar48 * 4 + 0xc) *
                 ((double *)&DAT_1001f360)[lVar58 * 8] * dVar1 +
                 (double)*(int *)(local_780 + lVar48 * 4 + 8) * ((double *)&DAT_1001f358)[lVar58 * 8]
                 * dVar1 + (double)*(int *)(local_780 + lVar48 * 4 + 4) *
                           ((double *)&DAT_1001f350)[lVar58 * 8] * dVar1 +
                           (double)*(int *)(local_780 + lVar48 * 4) *
                           ((double *)&DAT_1001f348)[lVar58 * 8] * dVar1 +
                           (double)*(int *)(local_790 + lVar48 * 4 + 0xc) * DAT_1001d6b8 *
                           ((double *)&DAT_1001f340)[lVar58 * 8] * dVar1 + dVar64;
        lVar48 = lVar48 + 8;
      } while (lVar48 != 0x47);
      dVar64 = dVar64 * _DAT_1001d6c8 + _DAT_1001d6d0;
      lVar48 = (long)(dVar64 + *(double *)(uintptr_t)(uintptr_t)((&DAT_1001d4e0 + (ulong)(_DAT_1001d6f8 <= dVar64) * 8)));
      uVar20 = (uint)lVar48;
      uVar50 = (undefined1)lVar48;
      if (0xfe < uVar20) {
        uVar50 = 0xff;
      }
      if ((int)uVar20 < 1) {
        uVar50 = 0;
      }
      local_198[lVar58 + lVar60 * 8] = uVar50;
      lVar58 = lVar58 + 1;
    } while (lVar58 != 8);
    lVar60 = lVar60 + 1;
    puVar26 = puVar26 + 8;
  } while (lVar60 != 8);
  uVar19 = (local_70[2] * (uint)local_118 + (int)local_140) * 8;
  local_60 = (uint *)(ulong)((local_70[1] * (int)local_148 + (int)local_1a0) * 8);
  uVar20 = local_70[8];
  local_50 = (double *)(ulong)uVar19;
  if (uVar19 < uVar20) {
    local_108 = 0x16;
    recovered_10000e30((byte *)((ulong)local_70[7] * (long)(ulong)uVar19 + *(long *)(local_70 + 10)
                               + (long)local_60),local_198,8);
    uVar20 = local_70[8];
  }
  uVar57 = (ulong)uVar20;
  if (((ulong)local_50 | 1) < uVar57) {
    local_108 = 0x17;
    recovered_10000e30((byte *)(((ulong)local_50 | 1) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&puStack_190,8);
    uVar57 = (ulong)local_70[8];
  }
  if (((ulong)local_50 | 2) < uVar57) {
    local_108 = 0x18;
    recovered_10000e30((byte *)(((ulong)local_50 | 2) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&local_188,8);
    uVar57 = (ulong)local_70[8];
  }
  if (((ulong)local_50 | 3) < uVar57) {
    local_108 = 0x19;
    recovered_10000e30((byte *)(((ulong)local_50 | 3) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&uStack_180,8);
    uVar57 = (ulong)local_70[8];
  }
  if (((ulong)local_50 | 4) < uVar57) {
    local_108 = 0x1a;
    recovered_10000e30((byte *)(((ulong)local_50 | 4) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&local_178,8);
    uVar57 = (ulong)local_70[8];
  }
  if (((ulong)local_50 | 5) < uVar57) {
    local_108 = 0x1b;
    recovered_10000e30((byte *)(((ulong)local_50 | 5) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&uStack_170,8);
    uVar57 = (ulong)local_70[8];
  }
  if (((ulong)local_50 | 6) < uVar57) {
    local_108 = 0x1c;
    recovered_10000e30((byte *)(((ulong)local_50 | 6) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&local_168,8);
    uVar57 = (ulong)local_70[8];
  }
  if (((ulong)local_50 | 7) < uVar57) {
    local_108 = 0x1d;
    recovered_10000e30((byte *)(((ulong)local_50 | 7) * (ulong)local_70[7] +
                                *(long *)(local_70 + 10) + (long)local_60),&uStack_160,8);
  }
  uVar20 = (int)local_1a0 + 1;
  uVar19 = local_70[1];
  local_1a0 = CONCAT44(PF_PART4(local_1a0, 4),uVar20);
  if (uVar19 <= uVar20) goto code_r0x1000aa44;
  goto LAB_10009d7f;
code_r0x1000aa44:
  uVar20 = local_70[2];
LAB_1000aa4f:
  uVar54 = (int)local_140 + 1;
  local_140 = CONCAT44(PF_PART4(local_140, 4),uVar54);
  if (uVar20 <= uVar54) goto LAB_1000aa65;
  goto LAB_10009d6d;
}

#undef DAT_1000b1c8
#undef DAT_1001d410
#undef DAT_1001d418
#undef DAT_1001d440
#undef DAT_1001d450
#undef DAT_1001d478
#undef DAT_1001d4e0
#undef DAT_1001d5a0
#undef DAT_1001d690
#undef DAT_1001d698
#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d6b0
#undef DAT_1001d6b8
#undef DAT_1001d6c0
#undef DAT_1001d6c8
#undef DAT_1001d6d0
#undef DAT_1001d6d8
#undef DAT_1001d6e0
#undef DAT_1001d6e8
#undef DAT_1001d6f0
#undef DAT_1001d6f8
#undef DAT_1001d760
#undef DAT_1001de5c
#undef DAT_1001f330
#undef DAT_1001f340
#undef DAT_1001f348
#undef DAT_1001f350
#undef DAT_1001f358
#undef DAT_1001f360
#undef DAT_1001f368
#undef DAT_1001f370
#undef DAT_1001f378
#undef LAB_1000b000
#undef UNK_1001d5a8
#undef _DAT_1001d440
#undef _DAT_1001d5a0
#undef _DAT_1001d698
#undef _DAT_1001d6a0
#undef _DAT_1001d6a8
#undef _DAT_1001d6b0
#undef _DAT_1001d6c0
#undef _DAT_1001d6c8
#undef _DAT_1001d6d0
#undef _DAT_1001d6f8
#undef uRam000000001001d5a8
#undef puStack_208
#undef uStack_1c0
#undef puStack_190
#undef uStack_180
#undef uStack_170
#undef uStack_160
#undef local_cd0
#undef local_cc0
#undef local_cb8
#undef local_ca8
#undef local_ca0
#undef local_8a8
#undef local_8a0
#undef local_888
#undef local_880
#undef local_870
#undef local_868
#undef local_860
#undef local_850
#undef local_848
#undef local_840
#undef local_830
#undef local_828
#undef local_820
#undef local_808
#undef local_800
#undef local_7e0
#undef local_7d0
#undef local_7c8
#undef local_7c0
#undef local_7b0
#undef local_7a0
#undef local_790
#undef local_780
#undef local_770
#undef local_768
#undef local_758
#undef local_740
#undef local_6f4
#undef local_6d4
#undef local_6c4
#undef local_6b4
#undef local_6a4
#undef local_694
#undef local_678
#undef local_338
#undef local_328
#undef local_318
#undef local_308
#undef local_2f8
#undef local_2e8
#undef local_2d8
#undef local_2c8
#undef local_2b8
#undef local_2a8
#undef local_298
#undef local_288
#undef local_278
#undef local_268
#undef local_260
#undef local_258
#undef local_250
#undef local_240
#undef local_238
#undef local_228
#undef local_220
#undef local_210
#undef auStack_cd8
#undef local_200
#undef local_1f8
#undef local_1f0
#undef uStack_cc8
#undef local_1ec
#undef local_1e8
#undef auStack_cb4
#undef local_1d8
#undef local_1d0
#undef local_1c8
#undef uStack_ca7
#undef local_1b4
#undef uStack_ca6
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_188
#undef local_178
#undef uStack_878
#undef local_168
#undef local_154
#undef local_150
#undef local_14c
#undef uStack_858
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef uStack_838
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_f0
#undef uStack_7f8
#undef local_e8
#undef uStack_7f7
#undef local_e0
#undef uStack_7f0
#undef local_d8
#undef uStack_7e8
#undef local_d0
#undef local_b8
#undef uStack_7d8
#undef local_b0
#undef uStack_7d7
#undef local_a8
#undef local_a0
#undef local_98
#undef local_8c
#undef local_88
#undef puStack_7a8
#undef local_80
#undef local_74
#undef local_70
#undef iStack_774
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef uStack_760
#undef local_48
#undef local_40
#undef uStack_750
#undef cStack_74c
#undef local_38
#undef cStack_74b
#undef cStack_74a
#undef uStack_749
#undef uStack_748
#undef uStack_738
#undef uStack_730
#undef uStack_728
#undef uStack_720
#undef uStack_718
#undef uStack_710
#undef uStack_70c
#undef uStack_708
#undef uStack_704
#undef uStack_700
#undef uStack_6fc
#undef uStack_6f8
#undef uStack_6f0
#undef uStack_6ec
#undef uStack_6e8
#undef uStack_6e4
#undef uStack_6e0
#undef uStack_6dc
#undef uStack_6d8
#undef uStack_6cc
#undef uStack_6bc
#undef uStack_6ac
#undef uStack_69c
#undef uStack_68c
#undef uStack_684
#undef uStack_67c
#undef uStack_674
#undef uStack_670
#undef uStack_330
#undef uStack_310
#undef uStack_2f0
#undef uStack_2d0
#undef uStack_2b0
#undef uStack_290
#undef uStack_270
#undef uStack_248
#undef uStack_230
#undef uStack_218
#undef stack0xfffffffffffff888
#undef stack0xfffffffffffff331
#undef stack0xfffffffffffff888
#undef stack0xfffffffffffff888

#undef DAT_1001ded0
#define DAT_1001ded0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacdU)))
#undef LAB_1000b7f8
#define LAB_1000b7f8 (*(uint8_t *)(0x1000b7f8U))
#define uStack_d8 (*(undefined8 *)(frame + 120))
#define local_138 (*(undefined8 *)(frame + 24))
#define local_130 (*(undefined4 *)(frame + 32))
#define local_118 (*(code * *)(frame + 56))
#define local_110 (*(undefined * *)(frame + 64))
#define local_108 (*(undefined1 * *)(frame + 72))
#define local_100 (*(undefined1 * *)(frame + 80))
#define local_f8 (*(undefined1 * *)(frame + 88))
#define uStack_70 (*(undefined4 *)(frame + 224))
#define local_e0 (*(byte * *)(frame + 112))
#define uStack_6c (*(undefined4 *)(frame + 228))
#define local_d0 (*(undefined8 *)(frame + 128))
#define uStack_68 (*(undefined4 *)(frame + 232))
#define local_c8 (*(ulong *)(frame + 136))
#define uStack_64 (*(undefined4 *)(frame + 236))
#define local_c0 (*(byte * *)(frame + 144))
#define uStack_60 (*(undefined4 *)(frame + 240))
#define local_b8 (*(byte * *)(frame + 152))
#define local_b0 (*(long *)(frame + 160))
#define local_a8 (*(uint * *)(frame + 168))
#define local_a0 (*(uint * *)(frame + 176))
#define local_98 (*(ulong *)(frame + 184))
#define local_90 (*(ulong *)(frame + 192))
#define local_88 (*(long * *)(frame + 200))
#define local_80 (*(byte * *)(frame + 208))
#define local_78 (*(byte * *)(frame + 216))
#define local_58 (*(byte * *)(frame + 248))
#define local_50 (*(byte * *)(frame + 256))
#define local_48 (*(ulong *)(frame + 264))
#define local_40 (*(ulong *)(frame + 272))
#define local_38 (*(uint * *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b310
 */

ulong recovered_1000b310(uint *param_1,byte *param_2,long *param_3)

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
  local_118 = recovered_10005010;
  local_110 = &DAT_1001ded0;
  local_100 = &LAB_1000b7f8;
  local_80 = param_2;
  local_38 = param_1;
  recovered_10005590(&local_138);
  if ((ulong)uVar3 * (ulong)uVar2 >> 0x3e == 0) {
    uVar14 = (ulong)uVar3 * (ulong)uVar2 * 4;
    param_3[1] = 0;
    if ((ulong)param_3[2] < uVar14) {
      local_130 = 0xffffffff;
      lVar8 = recovered_10005060(uVar14);
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
      recovered_100050c0(lVar10);
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
      uVar14 = recovered_1000b880(local_38,(long *)(local_38 + 0x18),local_80,(long *)&local_78);
      plVar7 = local_88;
      if (((char)uVar14 == '\0') || (lVar10 = CONCAT44(uStack_6c,uStack_70), lVar10 != local_88[1]))
      {
        pbVar18 = local_78;
LAB_1000b7ca:
        recovered_100050c0(pbVar18);
        goto LAB_1000b7cf;
      }
      local_88[1] = 0;
      recovered_100050c0(*local_88);
      *plVar7 = (long)local_78;
      plVar7[1] = lVar10;
      plVar7[2] = CONCAT44(uStack_64,uStack_68);
      recovered_100050c0(0);
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
        uVar14 = recovered_1000b880((uint *)&local_78,(long *)(puVar15 + 8),local_80,
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
                  recovered_10000e30(pbVar19,pbVar18,4);
                }
                else {
                  local_130 = 4;
                  recovered_10017470(pbVar19,pbVar18);
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
        recovered_100050c0(local_58);
        puVar15 = puVar15 + 0xe;
      } while (puVar15 != local_a8);
      uVar14 = CONCAT71(uVar20,1);
    }
  }
  else {
LAB_1000b7cf:
    uVar14 = 0;
  }
  recovered_100055b0(&local_138);
  return uVar14 & 0xffffffff;
}

#undef DAT_1001ded0
#undef LAB_1000b7f8
#undef uStack_d8
#undef local_138
#undef local_130
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef uStack_70
#undef local_e0
#undef uStack_6c
#undef local_d0
#undef uStack_68
#undef local_c8
#undef uStack_64
#undef local_c0
#undef uStack_60
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1001da84
#define DAT_1001da84 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x681U)))
#undef DAT_1001daa0
#define DAT_1001daa0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x69dU)))
#undef DAT_1001dabc
#define DAT_1001dabc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b9U)))
#undef DAT_1001dad8
#define DAT_1001dad8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d5U)))
#undef DAT_1001db9c
#define DAT_1001db9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x799U)))
#undef DAT_1001dedc
#define DAT_1001dedc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad9U)))
#undef LAB_1000d592
#define LAB_1000d592 (*(uint8_t *)(0x1000d592U))
#define local_1b8 (*(byte * *)(frame + 24))
#define local_1b0 (*(byte * *)(frame + 32))
#define local_1a8 (*(byte * *)(frame + 40))
#define local_1a0 (*(ulong *)(frame + 48))
#define local_198 (*(long *)(frame + 56))
#define local_190 (*(byte * *)(frame + 64))
#define local_188 (*(ulong *)(frame + 72))
#define local_180 (*(byte * *)(frame + 80))
#define local_178 (*(undefined8 *)(frame + 88))
#define local_170 (*(undefined4 *)(frame + 96))
#define local_158 (*(code * *)(frame + 120))
#define local_150 (*(undefined * *)(frame + 128))
#define local_148 (*(undefined1 * *)(frame + 136))
#define local_140 (*(undefined1 * *)(frame + 144))
#define local_138 (*(undefined1 * *)(frame + 152))
#define local_120 (*(uint *)(frame + 176))
#define local_11c (*(uint *)(frame + 180))
#define local_118 (*(ulong *)(frame + 184))
#define local_110 (*(byte * *)(frame + 192))
#define local_108 (*(byte * *)(frame + 200))
#define local_100 (*(long (*)[4])(frame + 208))
#define local_e0 (*(byte * *)(frame + 240))
#define local_d0 (*(byte * *)(frame + 256))
#define local_c8 (*(byte * *)(frame + 264))
#define local_c0 (*(byte * *)(frame + 272))
#define local_b8 (*(byte * *)(frame + 280))
#define local_b0 (*(byte * *)(frame + 288))
#define local_a8 (*(ulong *)(frame + 296))
#define local_a0 (*(long * *)(frame + 304))
#define local_98 (*(byte * *)(frame + 312))
#define local_90 (*(byte * *)(frame + 320))
#define local_88 (*(byte * *)(frame + 328))
#define local_80 (*(long *)(frame + 336))
#define local_78 (*(byte * *)(frame + 344))
#define local_70 (*(uint * *)(frame + 352))
#define local_68 (*(byte * *)(frame + 360))
#define local_60 (*(byte * *)(frame + 368))
#define local_58 (*(byte * *)(frame + 376))
#define local_4c (*(uint *)(frame + 388))
#define local_48 (*(byte * *)(frame + 392))
#define local_40 (*(byte * *)(frame + 400))
#define local_38 (*(byte * *)(frame + 408))
#define uStack_d8 (*(undefined8 *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b880
 */

ulong recovered_1000b880(uint *param_1,long *param_2,byte *param_3,long *param_4)

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
  local_158 = recovered_10005010;
  local_150 = &DAT_1001dedc;
  local_140 = &LAB_1000d592;
  local_c8 = param_3;
  local_a0 = param_4;
  recovered_10005590(&local_178);
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
        lVar13 = recovered_10005060(uVar14);
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
        recovered_100050c0(lVar31);
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
    uVar35 = recovered_1001b500(local_100,param_2);
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
    local_78 = (byte *)recovered_10005060((long)local_68);
    pbVar15 = (byte *)0x0;
    recovered_100050c0(0);
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
          recovered_10000e30(local_78,local_d0 + local_100[3],(ulong)local_68);
          local_60 = local_60 + 1;
          local_d0 = local_48;
          local_170 = 4;
          uVar35 = recovered_1001b6f0((uint)*local_78,*local_a0,(long)local_60,0,(ulong)local_58,4);
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
                recovered_10000e30(local_78,local_d0 + local_100[3],(ulong)local_68);
                local_d0 = local_88;
                local_170 = 6;
                uVar35 = recovered_1001b6f0((uint)*local_78,
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
        local_b0 = (byte *)recovered_10005060((long)local_58);
        pbVar15 = (byte *)0x0;
        recovered_100050c0(0);
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
        pbVar18 = (byte *)recovered_10005060((long)local_58);
        pbVar15 = (byte *)0x0;
        recovered_100050c0(0);
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
          recovered_10000e30(local_78,local_d0 + local_100[3],(ulong)local_68);
          local_d0 = local_60;
          local_170 = 10;
          uVar35 = recovered_1001b6f0((uint)*local_78,(long)local_40,(long)local_108,(long)local_48,
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
                recovered_10000e30(pbVar34,(void *)((ulong)local_40[(long)pbVar15] * 4 +
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
              recovered_10000e30(pvVar1,local_40,(long)pbVar19 << 2);
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
      recovered_100050c0(pbVar18);
      recovered_100050c0(pbVar15);
    }
    recovered_100050c0(local_78);
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
      lVar13 = recovered_10005060(uVar35);
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
      recovered_100050c0(lVar31);
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
    uVar35 = recovered_1001b500(local_100,param_2);
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
              local_90 = (byte *)recovered_10005060((long)local_108);
              recovered_100050c0(0);
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
                local_c0 = (byte *)recovered_10005060((long)local_98);
                recovered_100050c0(0);
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
                pbVar15 = (byte *)recovered_10005060((long)local_98);
                recovered_100050c0(0);
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
                  recovered_100050c0(local_38);
                  recovered_100050c0(local_180);
                  recovered_100050c0(local_90);
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
                recovered_10000e30(local_90,local_d0 + local_100[3],(ulong)local_108);
                local_d0 = local_58;
                local_170 = 0x12;
                uVar35 = recovered_1001b6f0((uint)*local_90,(long)local_38,(long)local_1b0,
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
                    recovered_10000e30(local_48 + (ulong)uVar16 * 4,
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
                      recovered_10000e30(local_48 + (ulong)uVar16 * 4,pbVar18,4);
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
              recovered_100050c0(local_180);
              recovered_100050c0(local_38);
              recovered_100050c0(local_90);
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
  recovered_100050c0(local_100[3]);
  local_100[1] = 0;
  recovered_100050c0(local_100[0]);
LAB_1000d572:
  recovered_100055b0(&local_178);
  return uVar35 & 0xffffffff;
}

#undef DAT_1001da84
#undef DAT_1001daa0
#undef DAT_1001dabc
#undef DAT_1001dad8
#undef DAT_1001db9c
#undef DAT_1001dedc
#undef LAB_1000d592
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_120
#undef local_11c
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_e0
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
#undef local_4c
#undef local_48
#undef local_40
#undef local_38
#undef uStack_d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d730
 */

void recovered_1000d730(long param_1)

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
      recovered_100050c0(*(undefined8 *)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x68) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x50) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x38) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x30));
  return;
}


#undef DAT_1001df08
#define DAT_1001df08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb05U)))
#undef LAB_1000da8a
#define LAB_1000da8a (*(uint8_t *)(0x1000da8aU))
#define local_50 (*(void * *)(frame + 128))
#define local_48 (*(int * *)(frame + 136))
#define local_40 (*(void * *)(frame + 144))
#define local_31 (*(bool *)(frame + 159))
#define local_b8 (*(undefined8 *)(frame + 24))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_98 (*(code * *)(frame + 56))
#define local_90 (*(undefined * *)(frame + 64))
#define local_88 (*(undefined1 * *)(frame + 72))
#define local_80 (*(undefined1 * *)(frame + 80))
#define local_78 (*(undefined1 * *)(frame + 88))
#define local_60 (*(void * *)(frame + 112))
#define local_58 (*(ulong *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7d0
 */

uchar recovered_1000d7d0(char *param_1,void *param_2)

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
  recovered_100050c0(*(undefined8 *)((long)param_2 + 8));
  *(undefined8 *)((long)param_2 + 8) = 0;
  *(undefined8 *)((long)param_2 + 0x10) = 0;
  *(undefined8 *)((long)param_2 + 0x18) = 0;
  recovered_100050c0(0);
  local_78 = (undefined1 *)&local_b8;
  local_98 = recovered_10005010;
  local_90 = &DAT_1001df08;
  local_80 = &LAB_1000da8a;
  local_88 = (undefined1 *)((long)(uintptr_t)(frame + 208) + -8);
  recovered_10005590(&local_b8);
  pvVar6 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_40 = (void *)0x0;
    local_b0 = 1;
    local_60 = param_2;
    piVar3 = recovered_10003ec0((long)param_1,((uintptr_t)pf_module_state+0x9f7U));
    if (piVar3 != (int *)0x0) {
      local_40 = (void *)0x0;
      local_b0 = 2;
      local_48 = piVar3;
      uVar4 = recovered_10004820(piVar3,0,2);
      if ((int)uVar4 == 0) {
        local_40 = (void *)0x0;
        local_b0 = 3;
        uVar5 = recovered_100048a0((long)local_48);
        if (-1 < (long)uVar5) {
          local_40 = (void *)0x0;
          local_b0 = 4;
          local_58 = uVar5;
          uVar4 = recovered_10004820(local_48,0,0);
          if ((int)uVar4 == 0) {
            if (local_58 == 0) {
              local_31 = true;
              local_50 = (void *)0x0;
            }
            else {
              local_40 = (void *)0x0;
              local_b0 = 5;
              pvVar6 = (void *)recovered_10005060(local_58);
              piVar3 = local_48;
              uVar5 = local_58;
              uVar8 = 0;
              recovered_100050c0(0);
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
              uVar5 = recovered_10004410((long)pvVar6,1,uVar5,piVar3);
              local_31 = uVar5 == local_58;
            }
            local_b0 = 8;
            local_40 = local_50;
            uVar4 = recovered_10004340(local_48);
            pvVar6 = local_50;
            if ((local_31 & (int)uVar4 == 0) != 0) {
              local_40 = local_50;
              local_b0 = 9;
              uVar2 = recovered_10006270(local_50,local_58,local_60);
              pvVar6 = local_50;
              goto LAB_1000d8cf;
            }
            goto LAB_1000d8cd;
          }
        }
      }
      local_40 = (void *)0x0;
      local_b0 = 7;
      recovered_10004340(local_48);
    }
    pvVar6 = (void *)0x0;
  }
LAB_1000d8cd:
  uVar2 = '\0';
LAB_1000d8cf:
  recovered_100050c0(pvVar6);
  recovered_100055b0(&local_b8);
  return uVar2;
}

#undef DAT_1001df08
#undef LAB_1000da8a
#undef local_50
#undef local_48
#undef local_40
#undef local_31
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_58

/* Native PNG stream construction. Pooka's Free Software License. */
#include "png_encode.h"
int recovered_1000daf0(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1a0
 */

bool recovered_1000f1a0(uint *param_1,long param_2,long param_3,ulong param_4)

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
  uVar1 = recovered_1001af80(0,param_2,4);
  if (param_4 != 0) {
    uVar1 = recovered_1001af80(uVar1,param_3,param_4);
  }
  local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = recovered_10004690((long)&local_30,1,4,param_1);
  if (((lVar2 == 4) && (lVar2 = recovered_10004690(param_2,1,4,param_1), lVar2 == 4)) &&
     ((param_4 == 0 || (uVar3 = recovered_10004690(param_3,1,param_4,param_1), uVar3 == param_4))))
  {
    lVar2 = recovered_10004690((long)&local_2c,1,4,param_1);
    return lVar2 == 4;
  }
  return false;
}

#undef local_30
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f290
 */

uchar recovered_1000f290(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_1000daf0(param_1,param_2,param_3,param_4);
  return uVar1;
}


#undef DAT_1001df3c
#define DAT_1001df3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb39U)))
#undef LAB_1000f73c
#define LAB_1000f73c (*(uint8_t *)(0x1000f73cU))
#define uStack_ac (*(undefined4 *)(frame + 212))
#define local_160 (*(undefined8 *)(frame + 32))
#define local_158 (*(undefined4 *)(frame + 40))
#define local_140 (*(code * *)(frame + 64))
#define local_138 (*(undefined * *)(frame + 72))
#define local_130 (*(undefined1 * *)(frame + 80))
#define local_128 (*(undefined1 * *)(frame + 88))
#define local_120 (*(undefined1 * *)(frame + 96))
#define local_108 (*(ulong *)(frame + 120))
#define local_100 (*(ulong *)(frame + 128))
#define local_f8 (*(long *)(frame + 136))
#define local_f0 (*(ulong *)(frame + 144))
#define local_e8 (*(undefined4 *)(frame + 152))
#define local_e4 (*(undefined1 *)(frame + 156))
#define local_e3 (*(undefined1 *)(frame + 157))
#define local_e2 (*(undefined1 *)(frame + 158))
#define local_e1 (*(undefined1 *)(frame + 159))
#define auStack_168 (*(undefined1 (*)[8])(frame + 24))
#define local_e0 (*(undefined1 *)(frame + 160))
#define local_df (*(undefined1 *)(frame + 161))
#define local_de (*(undefined1 *)(frame + 162))
#define local_dd (*(undefined1 *)(frame + 163))
#define local_dc (*(undefined8 *)(frame + 164))
#define local_d4 (*(undefined1 *)(frame + 172))
#define local_d3 (*(undefined1 *)(frame + 173))
#define local_d2 (*(undefined1 *)(frame + 174))
#define local_d1 (*(undefined1 *)(frame + 175))
#define local_d0 (*(undefined8 *)(frame + 176))
#define local_c8 (*(undefined1 (*)[16])(frame + 184))
#define local_b8 (*(undefined1 (*)[7])(frame + 200))
#define local_a8 (*(undefined1 (*)[16])(frame + 216))
#define local_8c (*(undefined4 *)(frame + 244))
#define local_70 (*(uint * *)(frame + 272))
#define local_68 (*(void * *)(frame + 280))
#define local_5e (*(undefined2 *)(frame + 290))
#define local_5c (*(undefined1 *)(frame + 292))
#define local_5b (*(undefined1 *)(frame + 293))
#define local_5a (*(undefined1 *)(frame + 294))
#define local_59 (*(undefined1 *)(frame + 295))
#define local_58 (*(undefined8 *)(frame + 296))
#define local_50 (*(long *)(frame + 304))
#define local_48 (*(ulong *)(frame + 312))
#define local_3c (*(uint *)(frame + 324))
#define local_38 (*(undefined8 *)(frame + 328))
#define uStack_b1 (*(undefined4 *)(frame + 207))
#define uStack_ad (*(undefined1 *)(frame + 211))
#define auStack_98 (*(undefined1 (*)[12])(frame + 232))
#define auStack_88 (*(undefined1 (*)[12])(frame + 248))
#define stack0xffffffffffffff49 (*(uint8_t *)(frame + 201))
#define stack0xffffffffffffff4d (*(uint8_t *)(frame + 205))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2a0
 */

uchar recovered_1000f2a0(char *param_1,void *param_2,int param_3,int param_4)

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
  local_140 = recovered_10005010;
  local_138 = &DAT_1001df3c;
  local_128 = &LAB_1000f73c;
  local_68 = param_2;
  recovered_10005590(&local_160);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_48 = (ulong)(uint)param_3;
    uVar10 = local_48 * 4;
    local_100 = (ulong)(uint)param_4;
    uVar14 = uVar10 * local_100;
    if (uVar14 >> 1 < 0x7fffffc3) {
      local_158 = 0xffffffff;
      local_3c = param_3;
      puVar7 = recovered_10003ec0((long)param_1,((uintptr_t)pf_module_state+0x9afU));
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
        lVar8 = recovered_10004690((long)&local_5e,1,0xe,puVar7);
        if (lVar8 == 0xe) {
          local_158 = 0xffffffff;
          lVar8 = recovered_10004690((long)&local_e8,1,0x6c,puVar7);
          bVar15 = lVar8 == 0x6c;
        }
        else {
          bVar15 = false;
        }
        local_158 = 0xffffffff;
        local_38 = recovered_10005060(uVar10);
        uVar14 = 0;
        recovered_100050c0(0);
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
            uVar10 = recovered_10004690(local_38,1,local_f0,local_70);
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
        uVar11 = recovered_10004340((int *)puVar7);
        bVar13 = (byte)local_50 & (int)uVar11 == 0;
        recovered_100050c0(local_38);
        goto LAB_1000f4f3;
      }
    }
  }
  bVar13 = 0;
LAB_1000f4f3:
  recovered_100055b0(&local_160);
  return bVar13;
}

#undef DAT_1001df3c
#undef LAB_1000f73c
#undef uStack_ac
#undef local_160
#undef local_158
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_e3
#undef local_e2
#undef local_e1
#undef auStack_168
#undef local_e0
#undef local_df
#undef local_de
#undef local_dd
#undef local_dc
#undef local_d4
#undef local_d3
#undef local_d2
#undef local_d1
#undef local_d0
#undef local_c8
#undef local_b8
#undef local_a8
#undef local_8c
#undef local_70
#undef local_68
#undef local_5e
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef uStack_b1
#undef uStack_ad
#undef auStack_98
#undef auStack_88
#undef stack0xffffffffffffff49
#undef stack0xffffffffffffff4d

#undef DAT_1001df44
#define DAT_1001df44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb41U)))
#undef LAB_1000fb0d
#define LAB_1000fb0d (*(uint8_t *)(0x1000fb0dU))
#define local_f0 (*(undefined8 *)(frame + 32))
#define local_e8 (*(undefined4 *)(frame + 40))
#define local_d0 (*(code * *)(frame + 64))
#define local_c8 (*(undefined * *)(frame + 72))
#define local_c0 (*(undefined1 * *)(frame + 80))
#define auStack_f8 (*(undefined1 (*)[8])(frame + 24))
#define local_b8 (*(undefined1 * *)(frame + 88))
#define local_b0 (*(undefined1 * *)(frame + 96))
#define local_98 (*(ulong *)(frame + 120))
#define local_90 (*(long *)(frame + 128))
#define local_88 (*(ulong *)(frame + 136))
#define local_80 (*(ulong *)(frame + 144))
#define local_78 (*(uint * *)(frame + 152))
#define local_70 (*(void * *)(frame + 160))
#define local_68 (*(undefined3 *)(frame + 168))
#define local_58 (*(undefined2 *)(frame + 184))
#define local_50 (*(ulong *)(frame + 192))
#define local_44 (*(uint *)(frame + 204))
#define local_40 (*(ulong *)(frame + 208))
#define local_38 (*(undefined8 *)(frame + 216))
#define auStack_65 (*(undefined1 (*)[13])(frame + 171))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f790
 */

uchar recovered_1000f790(char *param_1,void *param_2,int param_3,int param_4)

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
  local_d0 = recovered_10005010;
  local_c8 = &DAT_1001df44;
  local_b8 = &LAB_1000fb0d;
  local_70 = param_2;
  local_44 = param_3;
  recovered_10005590(&local_f0);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_e8 = 0xffffffff;
    puVar7 = recovered_10003ec0((long)param_1,((uintptr_t)pf_module_state+0x9afU));
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
      lVar8 = recovered_10004690((long)&local_68,1,0x12,puVar7);
      local_50 = (ulong)uVar6;
      uVar9 = local_50 * 4;
      local_e8 = 0xffffffff;
      local_38 = recovered_10005060(uVar9);
      uVar13 = 0;
      recovered_100050c0(0);
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
          uVar9 = recovered_10004690(local_38,1,local_88,local_78);
          if (uVar9 != local_88) break;
          uVar11 = local_98 + 1;
          uVar13 = local_40 + local_88;
        } while (uVar11 < local_80);
        puVar7 = local_78;
        if (uVar9 != local_88) goto LAB_1000fac1;
        local_e8 = 2;
        lVar8 = recovered_10004690(((uintptr_t)pf_module_state+0x6fdU),1,0x1a,local_78);
        local_40 = CONCAT44(PF_PART4(local_40, 4),(int)CONCAT71((int7)((ulong)lVar8 >> 8),lVar8 == 0x1a));
        puVar7 = local_78;
      }
      else {
LAB_1000fac1:
        local_40 = local_40 & 0xffffffff00000000;
      }
      local_e8 = 3;
      uVar10 = recovered_10004340((int *)puVar7);
      bVar12 = (byte)local_40 & (int)uVar10 == 0;
      recovered_100050c0(local_38);
      goto LAB_1000faed;
    }
  }
  bVar12 = 0;
LAB_1000faed:
  recovered_100055b0(&local_f0);
  return bVar12;
}

#undef DAT_1001df44
#undef LAB_1000fb0d
#undef local_f0
#undef local_e8
#undef local_d0
#undef local_c8
#undef local_c0
#undef auStack_f8
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38
#undef auStack_65

#undef DAT_1001d410
#define DAT_1001d410 (*(double *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1001d700
#define DAT_1001d700 (*(double *)(((uintptr_t)pf_module_state + 0x2fdU)))
#undef DAT_1001d708
#define DAT_1001d708 (*(double *)(((uintptr_t)pf_module_state + 0x305U)))
#undef DAT_1001d710
#define DAT_1001d710 (*(double *)(((uintptr_t)pf_module_state + 0x30dU)))
#undef DAT_1001d718
#define DAT_1001d718 (*(double *)(((uintptr_t)pf_module_state + 0x315U)))
#undef DAT_1001d720
#define DAT_1001d720 (*(double *)(((uintptr_t)pf_module_state + 0x31dU)))
#undef DAT_1001d728
#define DAT_1001d728 (*(double *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001d730
#define DAT_1001d730 (*(double *)(((uintptr_t)pf_module_state + 0x32dU)))
#undef DAT_1001d738
#define DAT_1001d738 (*(double *)(((uintptr_t)pf_module_state + 0x335U)))
#undef DAT_1001d760
#define DAT_1001d760 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x35dU)))
#undef DAT_1001df50
#define DAT_1001df50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4dU)))
#undef LAB_10011610
#define LAB_10011610 (*(uint8_t *)(0x10011610U))
#define local_108 (*(undefined8 * *)(frame + 6072))
#define puStack_160 (*(undefined8 * *)(frame + 5984))
#define local_100 (*(undefined8 * *)(frame + 6080))
#define local_f8 (*(ulong *)(frame + 6088))
#define local_f0 (*(ulong *)(frame + 6096))
#define uStack_148 (*(ulong *)(frame + 6008))
#define local_e8 (*(undefined8 * *)(frame + 6104))
#define local_e0 (*(undefined8 *)(frame + 6112))
#define local_d8 (*(undefined4 *)(frame + 6120))
#define puStack_130 (*(undefined8 * *)(frame + 6032))
#define local_c0 (*(code * *)(frame + 6144))
#define local_b8 (*(undefined * *)(frame + 6152))
#define local_b0 (*(undefined1 * *)(frame + 6160))
#define local_a8 (*(undefined1 * *)(frame + 6168))
#define local_a0 (*(undefined1 * *)(frame + 6176))
#define local_88 (*(ulong *)(frame + 6200))
#define local_80 (*(undefined8 * *)(frame + 6208))
#define local_78 (*(undefined8 * *)(frame + 6216))
#define local_70 (*(undefined8 * *)(frame + 6224))
#define local_68 (*(uint * *)(frame + 6232))
#define local_60 (*(void * *)(frame + 6240))
#define local_58 (*(undefined8 * *)(frame + 6248))
#define local_50 (*(undefined8 * *)(frame + 6256))
#define local_48 (*(undefined8 * *)(frame + 6264))
#define local_40 (*(undefined8 * *)(frame + 6272))
#define local_38 (*(undefined8 *)(frame + 6280))
#define local_18a8 (*(undefined1 (*)[2048])(frame + 24))
#define local_10a8 (*(uint (*)[512])(frame + 2072))
#define local_8a8 (*(undefined1 (*)[512])(frame + 4120))
#define local_6a8 (*(undefined1 *)(frame + 4632))
#define local_6a0 (*(undefined2 *)(frame + 4640))
#define local_69c (*(undefined1 *)(frame + 4644))
#define local_4a8 (*(int (*)[64])(frame + 5144))
#define uStack_6a7 (*(undefined1 *)(frame + 4633))
#define uStack_6a6 (*(undefined1 *)(frame + 4634))
#define cStack_6a5 (*(char *)(frame + 4635))
#define local_3a8 (*(undefined8 *)(frame + 5400))
#define local_3a0 (*(undefined8 * *)(frame + 5408))
#define uStack_6a4 (*(undefined4 *)(frame + 4636))
#define local_1a0 (*(ulong *)(frame + 5920))
#define local_198 (*(undefined8 * *)(frame + 5928))
#define uStack_69e (*(undefined2 *)(frame + 4642))
#define local_188 (*(undefined8 *)(frame + 5944))
#define local_180 (*(undefined8 * *)(frame + 5952))
#define uStack_69b (*(undefined1 *)(frame + 4645))
#define local_170 (*(undefined8 *)(frame + 5968))
#define uStack_69a (*(undefined1 *)(frame + 4646))
#define local_168 (*(undefined8 * *)(frame + 5976))
#define local_158 (*(undefined8 *)(frame + 5992))
#define local_150 (*(undefined8 * *)(frame + 6000))
#define local_140 (*(undefined8 *)(frame + 6016))
#define local_138 (*(long *)(frame + 6024))
#define local_128 (*(undefined8 *)(frame + 6040))
#define puStack_190 (*(undefined8 * *)(frame + 5936))
#define local_120 (*(byte *)(frame + 6048))
#define local_11c (*(int *)(frame + 6052))
#define local_114 (*(int (*)[3])(frame + 6060))
#define uStack_178 (*(ulong *)(frame + 5960))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb70
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_1000fb70(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[6368] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  bool bVar28;
  double dVar29;

  local_b0 = (undefined1 *)((long)(uintptr_t)(frame + 6336) + -8);
  local_a0 = local_18a8;
  uVar12 = (ulong)(uint)param_4;
  uVar19 = (ulong)(uint)param_3;
  local_c0 = recovered_10005010;
  local_b8 = &DAT_1001df50;
  local_a8 = &LAB_10011610;
  recovered_10005590(&local_e0);
  bVar14 = 0;
  local_f8 = uVar12;
  if (((((0xffff < param_4) || (local_f0 = uVar19, 0xffff < param_3)) || (param_1 == (char *)0x0))
      || ((param_2 == (void *)0x0 || (param_3 < 1)))) || (param_4 < 1)) goto LAB_10010a99;
  local_d8 = 0xffffffff;
  local_68 = recovered_10003ec0((long)param_1,((uintptr_t)pf_module_state+0x9afU));
  if (local_68 == (uint *)0x0) {
    bVar14 = 0;
    goto LAB_10010a99;
  }
  local_60 = param_2;
  recovered_100012f0((long)local_18a8,0x800);
  recovered_100012f0((long)local_10a8,0x800);
  local_198 = (undefined8 *)0x0;
  puStack_190 = (undefined8 *)0x0;
  local_188 = 0;
  local_180 = (undefined8 *)0x0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = (undefined8 *)0x0;
  puStack_160 = (undefined8 *)0x0;
  local_158 = 0;
  local_150 = (undefined8 *)0x0;
  uStack_148 = 0;
  local_140 = 0;
  local_d8 = 1;
  recovered_1001c220('\x01',(long)local_18a8,(long *)&local_198,(long *)&local_180);
  local_d8 = 2;
  recovered_1001c220('\0',(long)local_10a8,(long *)&local_168,(long *)&local_150);
  local_d8 = 3;
  lVar7 = recovered_10004690(((uintptr_t)pf_module_state+0x9faU),1,2,local_68);
  if (lVar7 == 2) {
    local_6a8 = 0x4a;
    uStack_6a7 = 0x46;
    uStack_6a6 = 0x49;
    cStack_6a5 = 'F';
    uStack_6a4 = 0x10100;
    local_6a0 = 0x100;
    uStack_69e = 0x100;
    local_69c = 0;
    uStack_69b = 0;
    local_d8 = 4;
    recovered_1001ce60(&local_3a8,&local_6a8,0xe);
    if ((undefined8 *)0xfffd < local_3a0) {
LAB_10010540:
      local_3a0 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)
               CONCAT44(PF_PART4(local_3a8, 4),
                        CONCAT13(PF_PART1(local_3a8, 3),CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8)));
LAB_10010552:
      recovered_100050c0(puVar8);
      goto LAB_10010557;
    }
    local_6a8 = 0xff;
    uStack_6a7 = 0xe0;
    uStack_6a6 = (undefined1)((uint)((int)local_3a0 + 2) >> 8);
    cStack_6a5 = (char)local_3a0 + '\x02';
    local_d8 = 5;
    lVar7 = recovered_10004690((long)&local_6a8,1,4,local_68);
    if (lVar7 != 4) goto LAB_10010540;
    if (local_3a0 == (undefined8 *)0x0) {
      recovered_100050c0(CONCAT44(PF_PART4(local_3a8, 4),
                                  CONCAT13(PF_PART1(local_3a8, 3),
                                           CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))));
    }
    else {
      local_d8 = 6;
      local_38 = local_3a0;
      puVar8 = (undefined8 *)
               recovered_10004690(CONCAT44(PF_PART4(local_3a8, 4),
                                           CONCAT13(PF_PART1(local_3a8, 3),
                                                    CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))
                                          ),1,(long)local_3a0,local_68);
      local_3a0 = (undefined8 *)0x0;
      recovered_100050c0(CONCAT44(PF_PART4(local_3a8, 4),
                                  CONCAT13(PF_PART1(local_3a8, 3),
                                           CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))));
      if (puVar8 != local_38) goto LAB_10010557;
    }
    local_d8 = 7;
    puVar9 = (undefined8 *)recovered_10005060(4);
    puVar18 = (undefined8 *)0x0;
    recovered_100050c0(0);
    *(undefined1 *)puVar9 = 0;
    puVar8 = (undefined8 *)0x1;
    local_88 = 0x7ffffffffffffffc;
    puVar27 = (undefined8 *)0x4;
    do {
      puVar10 = (undefined8 *)(ulong)(uint)(&DAT_1001d760)[(long)puVar18];
      local_80 = puVar9;
      if ((puVar8 == puVar27) && (0 < (long)puVar27)) {
        local_38 = (undefined8 *)((long)puVar27 * 2);
        local_d8 = 9;
        local_78 = puVar27;
        local_50 = puVar8;
        local_48 = puVar10;
        local_40 = puVar18;
        puVar9 = (undefined8 *)recovered_10005060((long)local_38);
        puVar27 = local_38;
        puVar18 = local_40;
        puVar8 = local_50;
        if (local_78 < (undefined8 *)0x4) {
          puVar10 = (undefined8 *)0x0;
LAB_1000ffec:
          uVar12 = (ulong)local_78 & 3;
          puVar16 = puVar10;
          if (uVar12 != 0) {
            do {
              *(undefined1 *)((long)puVar9 + (long)puVar16) =
                   *(undefined1 *)((long)local_80 + (long)puVar16);
              puVar16 = (undefined8 *)((long)puVar16 + 1);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if ((ulong)((long)puVar10 - (long)local_78) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar9 + (long)puVar16) =
                   *(undefined1 *)((long)local_80 + (long)puVar16);
              ((undefined1 *)((long)puVar9 + 1))[(long)puVar16] =
                   ((undefined1 *)((long)local_80 + 1))[(long)puVar16];
              ((undefined1 *)((long)puVar9 + 2))[(long)puVar16] =
                   ((undefined1 *)((long)local_80 + 2))[(long)puVar16];
              ((undefined1 *)((long)puVar9 + 3))[(long)puVar16] =
                   ((undefined1 *)((long)local_80 + 3))[(long)puVar16];
              puVar16 = (undefined8 *)((long)puVar16 + 4);
            } while (local_78 != puVar16);
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if ((ulong)((long)puVar9 - (long)local_80) < 0x20) goto LAB_1000ffec;
          if (local_78 < (undefined8 *)0x20) {
            puVar16 = (undefined8 *)0x0;
LAB_1000ffc6:
            puVar10 = (undefined8 *)((ulong)local_78 & local_88);
            do {
              *(undefined4 *)((long)puVar9 + (long)puVar16) =
                   *(undefined4 *)((long)local_80 + (long)puVar16);
              puVar16 = (undefined8 *)((long)puVar16 + 4);
            } while (puVar10 != puVar16);
            if (local_78 != puVar10) goto LAB_1000ffec;
          }
          else {
            puVar10 = (undefined8 *)((ulong)local_78 & 0x7fffffffffffffe0);
            puVar16 = (undefined8 *)0x0;
            do {
              uVar13 = ((undefined8 *)((long)local_80 + (long)puVar16))[1];
              uVar3 = *(undefined8 *)((long)(local_80 + 2) + (long)puVar16);
              uVar4 = ((undefined8 *)((long)(local_80 + 2) + (long)puVar16))[1];
              *(undefined8 *)((long)puVar9 + (long)puVar16) =
                   *(undefined8 *)((long)local_80 + (long)puVar16);
              ((undefined8 *)((long)puVar9 + (long)puVar16))[1] = uVar13;
              *(undefined8 *)((long)(puVar9 + 2) + (long)puVar16) = uVar3;
              ((undefined8 *)((long)(puVar9 + 2) + (long)puVar16))[1] = uVar4;
              puVar16 = puVar16 + 4;
            } while (puVar10 != puVar16);
            if (local_78 != puVar10) {
              puVar16 = puVar10;
              if (((ulong)local_78 & 0x1c) == 0) goto LAB_1000ffec;
              goto LAB_1000ffc6;
            }
          }
        }
        recovered_100050c0(local_80);
        puVar10 = local_48;
      }
      *(undefined1 *)((long)puVar9 + (long)puVar8) = *(undefined1 *)((long)puVar10 + ((uintptr_t)pf_module_state+0x717U));
      puVar8 = (undefined8 *)((long)puVar8 + 1);
      puVar18 = (undefined8 *)((long)puVar18 + 1);
      local_70 = puVar9;
    } while (puVar18 != (undefined8 *)0x40);
    if (puVar27 == (undefined8 *)0x41) {
      local_d8 = 8;
      puVar9 = (undefined8 *)recovered_10005060(0x82);
      if ((ulong)((long)puVar9 - (long)local_70) < 0x20) {
        lVar7 = 0;
      }
      else {
        uVar13 = local_70[1];
        uVar3 = local_70[2];
        uVar4 = local_70[3];
        *puVar9 = *local_70;
        puVar9[1] = uVar13;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        uVar13 = local_70[5];
        uVar3 = local_70[6];
        uVar4 = local_70[7];
        puVar9[4] = local_70[4];
        puVar9[5] = uVar13;
        puVar9[6] = uVar3;
        puVar9[7] = uVar4;
        lVar7 = 0x40;
      }
      lVar23 = 1;
      do {
        *(undefined1 *)((long)puVar9 + lVar7) = *(undefined1 *)((long)local_70 + lVar7);
        lVar7 = lVar7 + 1;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      if ((ulong)((long)puVar9 - (long)local_70) < 0x20) {
        do {
          *(undefined1 *)((long)puVar9 + lVar7) = *(undefined1 *)((long)local_70 + lVar7);
          *(undefined1 *)((long)puVar9 + lVar7 + 1) = *(undefined1 *)((long)local_70 + lVar7 + 1);
          *(undefined1 *)((long)puVar9 + lVar7 + 2) = *(undefined1 *)((long)local_70 + lVar7 + 2);
          *(undefined1 *)((long)puVar9 + lVar7 + 3) = *(undefined1 *)((long)local_70 + lVar7 + 3);
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0x41);
      }
      recovered_100050c0(local_70);
      puVar27 = (undefined8 *)0x82;
    }
    *(undefined1 *)((long)puVar9 + 0x41) = 1;
    puVar8 = (undefined8 *)0x42;
    puVar18 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x41;
    do {
      puVar21 = (undefined8 *)(ulong)(uint)(&DAT_1001d760)[(long)puVar18];
      puVar16 = puVar8;
      local_58 = puVar9;
      if (puVar8 == puVar27) {
        local_38 = (undefined8 *)((long)puVar8 * 2);
        local_d8 = 0xc;
        local_78 = puVar10;
        local_50 = (undefined8 *)(ulong)(uint)(&DAT_1001d760)[(long)puVar18];
        local_48 = puVar8;
        local_40 = puVar18;
        puVar9 = (undefined8 *)recovered_10005060((long)local_38);
        puVar27 = local_38;
        puVar18 = local_40;
        puVar16 = local_48;
        if (local_48 < (undefined8 *)0x4) {
          puVar8 = (undefined8 *)0x0;
LAB_1001032c:
          puVar10 = puVar8;
          if (((ulong)local_48 & 3) != 0) {
            uVar12 = (ulong)((uint)local_48 & 3);
            do {
              *(undefined1 *)((long)puVar9 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + (long)puVar10);
              puVar10 = (undefined8 *)((long)puVar10 + 1);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (2 < (ulong)((long)local_78 - (long)puVar8)) {
            do {
              *(undefined1 *)((long)puVar9 + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + (long)puVar10);
              ((undefined1 *)((long)puVar9 + 1))[(long)puVar10] =
                   ((undefined1 *)((long)local_58 + 1))[(long)puVar10];
              ((undefined1 *)((long)puVar9 + 2))[(long)puVar10] =
                   ((undefined1 *)((long)local_58 + 2))[(long)puVar10];
              ((undefined1 *)((long)puVar9 + 3))[(long)puVar10] =
                   ((undefined1 *)((long)local_58 + 3))[(long)puVar10];
              puVar10 = (undefined8 *)((long)puVar10 + 4);
            } while (local_48 != puVar10);
          }
        }
        else {
          puVar8 = (undefined8 *)0x0;
          if ((ulong)((long)puVar9 - (long)local_58) < 0x20) goto LAB_1001032c;
          if (local_48 < (undefined8 *)0x20) {
            puVar10 = (undefined8 *)0x0;
LAB_100102ff:
            puVar8 = (undefined8 *)((ulong)local_48 & local_88);
            do {
              *(undefined4 *)((long)puVar9 + (long)puVar10) =
                   *(undefined4 *)((long)local_58 + (long)puVar10);
              puVar10 = (undefined8 *)((long)puVar10 + 4);
            } while ((undefined8 *)((ulong)local_48 & 0xfffffffffffffffc) != puVar10);
            if (local_48 != puVar8) goto LAB_1001032c;
          }
          else {
            puVar8 = (undefined8 *)((ulong)local_48 & 0x7fffffffffffffe0);
            uVar13 = local_58[1];
            uVar3 = local_58[2];
            uVar4 = local_58[3];
            *puVar9 = *local_58;
            puVar9[1] = uVar13;
            puVar9[2] = uVar3;
            puVar9[3] = uVar4;
            if (puVar8 != (undefined8 *)0x20) {
              uVar13 = local_58[5];
              uVar3 = local_58[6];
              uVar4 = local_58[7];
              puVar9[4] = local_58[4];
              puVar9[5] = uVar13;
              puVar9[6] = uVar3;
              puVar9[7] = uVar4;
              if (puVar8 != (undefined8 *)0x40) {
                uVar13 = local_58[9];
                uVar3 = local_58[10];
                uVar4 = local_58[0xb];
                puVar9[8] = local_58[8];
                puVar9[9] = uVar13;
                puVar9[10] = uVar3;
                puVar9[0xb] = uVar4;
                if (puVar8 != (undefined8 *)0x60) {
                  uVar13 = local_58[0xd];
                  uVar3 = local_58[0xe];
                  uVar4 = local_58[0xf];
                  puVar9[0xc] = local_58[0xc];
                  puVar9[0xd] = uVar13;
                  puVar9[0xe] = uVar3;
                  puVar9[0xf] = uVar4;
                }
              }
            }
            if (local_48 != puVar8) {
              puVar10 = puVar8;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_1001032c;
              goto LAB_100102ff;
            }
          }
        }
        recovered_100050c0(local_58);
        puVar21 = local_50;
      }
      *(undefined1 *)((long)puVar9 + (long)puVar16) = *(undefined1 *)((long)puVar21 + ((uintptr_t)pf_module_state+0x757U));
      puVar18 = (undefined8 *)((long)puVar18 + 1);
      puVar8 = (undefined8 *)((long)puVar16 + 1);
      puVar10 = puVar16;
      local_e8 = puVar9;
    } while (puVar18 != (undefined8 *)0x40);
    PF_PART2(local_3a8, 0) = 0xdbff;
    PF_PART1(local_3a8, 2) = 0;
    PF_PART1(local_3a8, 3) = -0x7c;
    local_d8 = 10;
    lVar7 = recovered_10004690((long)&local_3a8,1,4,local_68);
    if (lVar7 != 4) {
      puVar8 = local_e8;
      goto LAB_10010552;
    }
    local_d8 = 0xb;
    lVar7 = recovered_10004690((long)local_e8,1,0x82,local_68);
    recovered_100050c0(local_e8);
    if (lVar7 != 0x82) goto LAB_10010557;
    local_6a8 = 8;
    uStack_6a7 = (undefined1)(local_f8 >> 8);
    uStack_6a6 = (undefined1)local_f8;
    cStack_6a5 = (char)(local_f0 >> 8);
    uStack_6a4 = CONCAT31(0x110103,(char)local_f0);
    local_6a0 = 0x200;
    uStack_69e = 0x111;
    local_69c = 3;
    uStack_69b = 0x11;
    uStack_69a = 1;
    local_d8 = 0xd;
    recovered_1001ce60(&local_3a8,&local_6a8,0xf);
    if ((undefined8 *)0xfffd < local_3a0) goto LAB_10010540;
    local_6a8 = 0xff;
    uStack_6a7 = 0xc0;
    uStack_6a6 = (undefined1)((uint)((int)local_3a0 + 2) >> 8);
    cStack_6a5 = (char)local_3a0 + '\x02';
    local_d8 = 0xe;
    lVar7 = recovered_10004690((long)&local_6a8,1,4,local_68);
    if (lVar7 != 4) goto LAB_10010540;
    if (local_3a0 == (undefined8 *)0x0) {
      recovered_100050c0(CONCAT44(PF_PART4(local_3a8, 4),
                                  CONCAT13(PF_PART1(local_3a8, 3),
                                           CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))));
    }
    else {
      local_d8 = 0xf;
      local_38 = local_3a0;
      puVar8 = (undefined8 *)
               recovered_10004690(CONCAT44(PF_PART4(local_3a8, 4),
                                           CONCAT13(PF_PART1(local_3a8, 3),
                                                    CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))
                                          ),1,(long)local_3a0,local_68);
      local_3a0 = (undefined8 *)0x0;
      recovered_100050c0(CONCAT44(PF_PART4(local_3a8, 4),
                                  CONCAT13(PF_PART1(local_3a8, 3),
                                           CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))));
      if (puVar8 != local_38) goto LAB_10010557;
    }
    local_d8 = 0x10;
    puVar8 = (undefined8 *)recovered_10005060(4);
    recovered_100050c0(0);
    *(undefined1 *)puVar8 = 0;
    puVar18 = puStack_190;
    if (puStack_190 == (undefined8 *)0x0) {
      puVar27 = (undefined8 *)0x1;
      puVar9 = (undefined8 *)0x4;
    }
    else {
      puVar27 = (undefined8 *)((long)puStack_190 + 1);
      puVar10 = local_198;
      puVar9 = (undefined8 *)0x4;
      if ((undefined8 *)0x4 < puVar27) {
        local_78 = local_198;
        local_50 = puStack_190;
        puVar18 = (undefined8 *)0x4;
        do {
          local_48 = puVar18;
          puVar18 = (undefined8 *)((long)local_48 * 2);
        } while (local_48 < puVar27);
        local_d8 = 0x11;
        local_100 = puVar8;
        local_40 = puVar27;
        local_38 = puVar8;
        puVar8 = (undefined8 *)recovered_10005060((long)local_48);
        *(undefined1 *)puVar8 = *(undefined1 *)local_38;
        recovered_100050c0(local_38);
        puVar18 = local_50;
        puVar10 = local_78;
        puVar27 = local_40;
        puVar9 = local_48;
      }
      puVar17 = (undefined1 *)0x1;
      puVar16 = puVar10;
      if (((undefined8 *)0x3 < puVar18) &&
         ((undefined1 *)0x1f < (undefined1 *)((long)puVar8 + (1 - (long)puVar10)))) {
        if (puVar18 < (undefined8 *)0x20) {
          puVar21 = (undefined8 *)0x0;
        }
        else {
          puVar21 = (undefined8 *)((ulong)puVar18 & 0xffffffffffffffe0);
          puVar16 = (undefined8 *)0x0;
          do {
            uVar13 = ((undefined8 *)((long)puVar10 + (long)puVar16))[1];
            uVar3 = *(undefined8 *)((long)(puVar10 + 2) + (long)puVar16);
            uVar4 = ((undefined8 *)((long)(puVar10 + 2) + (long)puVar16))[1];
            *(undefined8 *)((undefined1 *)((long)puVar8 + 1) + (long)puVar16) =
                 *(undefined8 *)((long)puVar10 + (long)puVar16);
            *(undefined8 *)((long)((undefined1 *)((long)puVar8 + 1) + (long)puVar16) + 8) = uVar13;
            *(undefined8 *)((undefined1 *)((long)puVar8 + 0x11) + (long)puVar16) = uVar3;
            *(undefined8 *)((long)((undefined1 *)((long)puVar8 + 0x11) + (long)puVar16) + 8) = uVar4
            ;
            puVar16 = puVar16 + 4;
          } while (puVar21 != puVar16);
          if (puVar18 == puVar21) goto LAB_10010c95;
          if (((ulong)puVar18 & 0x1c) == 0) {
            puVar16 = (undefined8 *)((long)puVar10 + (long)puVar21);
            puVar17 = (undefined1 *)((ulong)puVar21 | 1);
            goto LAB_10010c2a;
          }
        }
        puVar22 = (undefined8 *)((ulong)puVar18 & 0xfffffffffffffffc);
        puVar16 = (undefined8 *)((long)puVar10 + (long)puVar22);
        puVar17 = (undefined1 *)((long)puVar22 + 1);
        do {
          *(undefined4 *)((undefined1 *)((long)puVar8 + 1) + (long)puVar21) =
               *(undefined4 *)((long)puVar10 + (long)puVar21);
          puVar21 = (undefined8 *)((long)puVar21 + 4);
        } while (puVar22 != puVar21);
        if (puVar18 == puVar22) goto LAB_10010c95;
      }
LAB_10010c2a:
      puVar20 = (undefined1 *)((long)puVar10 + (long)puVar18);
      uVar6 = (int)puVar20 - (int)puVar16 & 3;
      uVar12 = (ulong)uVar6;
      puVar10 = puVar16;
      if (uVar6 != 0) {
        do {
          *(undefined1 *)((long)puVar8 + (long)puVar17) = *(undefined1 *)puVar10;
          puVar10 = (undefined8 *)((long)puVar10 + 1);
          puVar17 = puVar17 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if ((ulong)((long)puVar16 - (long)puVar20) < 0xfffffffffffffffd) {
        puVar17 = puVar17 + (long)puVar8;
        lVar7 = 0;
        do {
          puVar17[lVar7] = *(undefined1 *)((long)puVar10 + lVar7);
          puVar17[lVar7 + 1] = *(undefined1 *)((long)puVar10 + lVar7 + 1);
          puVar17[lVar7 + 2] = *(undefined1 *)((long)puVar10 + lVar7 + 2);
          puVar17[lVar7 + 3] = *(undefined1 *)((long)puVar10 + lVar7 + 3);
          lVar23 = lVar7 + 4;
          lVar7 = lVar7 + 4;
        } while ((undefined1 *)((long)puVar10 + lVar23) != puVar20);
      }
    }
LAB_10010c95:
    puVar10 = puVar27;
    if (uStack_178 != 0) {
      puVar10 = (undefined8 *)(uStack_178 + (long)puVar27);
      puVar16 = local_180;
      uVar12 = uStack_178;
      if (puVar9 < puVar10) {
        local_88 = uStack_178;
        local_78 = local_180;
        puVar16 = (undefined8 *)0x4;
        if (puVar9 != (undefined8 *)0x0) {
          puVar16 = puVar9;
        }
        do {
          puVar9 = puVar16;
          puVar16 = (undefined8 *)((long)puVar9 * 2);
        } while (puVar9 < puVar10);
        local_d8 = 0x12;
        local_100 = puVar8;
        local_50 = puVar18;
        local_48 = puVar10;
        local_40 = puVar27;
        local_38 = puVar8;
        puVar8 = (undefined8 *)recovered_10005060((long)puVar9);
        puVar27 = local_40;
        if (local_40 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          if (((undefined8 *)0x3 < local_40) && (0x1f < (ulong)((long)puVar8 - (long)local_38))) {
            if (local_40 < (undefined8 *)0x20) {
              puVar9 = (undefined8 *)0x0;
            }
            else {
              puVar18 = (undefined8 *)((ulong)local_40 & 0xffffffffffffffe0);
              puVar9 = (undefined8 *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_38 + (long)puVar9))[1];
                uVar3 = *(undefined8 *)((long)(local_38 + 2) + (long)puVar9);
                uVar4 = ((undefined8 *)((long)(local_38 + 2) + (long)puVar9))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar9) =
                     *(undefined8 *)((long)local_38 + (long)puVar9);
                ((undefined8 *)((long)puVar8 + (long)puVar9))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 2) + (long)puVar9) = uVar3;
                ((undefined8 *)((long)(puVar8 + 2) + (long)puVar9))[1] = uVar4;
                puVar9 = puVar9 + 4;
              } while (puVar18 != puVar9);
              if (local_40 == puVar18) goto LAB_10010dd8;
              puVar9 = puVar18;
              if (((ulong)local_40 & 0x1c) == 0) goto LAB_10010d85;
            }
            puVar18 = (undefined8 *)((ulong)local_40 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar9) =
                   *(undefined4 *)((long)local_38 + (long)puVar9);
              puVar9 = (undefined8 *)((long)puVar9 + 4);
            } while (puVar18 != puVar9);
            if (local_40 == puVar18) goto LAB_10010dd8;
          }
LAB_10010d85:
          uVar12 = (ulong)local_40 & 3;
          puVar9 = puVar18;
          if (uVar12 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar9) =
                   *(undefined1 *)((long)local_38 + (long)puVar9);
              puVar9 = (undefined8 *)((long)puVar9 + 1);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if ((ulong)((long)puVar18 - (long)local_40) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar9) =
                   *(undefined1 *)((long)local_38 + (long)puVar9);
              ((undefined1 *)((long)puVar8 + 1))[(long)puVar9] =
                   ((undefined1 *)((long)local_38 + 1))[(long)puVar9];
              ((undefined1 *)((long)puVar8 + 2))[(long)puVar9] =
                   ((undefined1 *)((long)local_38 + 2))[(long)puVar9];
              ((undefined1 *)((long)puVar8 + 3))[(long)puVar9] =
                   ((undefined1 *)((long)local_38 + 3))[(long)puVar9];
              puVar9 = (undefined8 *)((long)puVar9 + 4);
            } while (local_40 != puVar9);
          }
        }
LAB_10010dd8:
        recovered_100050c0(local_38);
        puVar18 = local_50;
        puVar10 = local_48;
        puVar16 = local_78;
        uVar12 = local_88;
      }
      if ((uVar12 < 4) ||
         ((undefined1 *)((long)puVar18 + (long)puVar8) + (1 - (long)puVar16) < (undefined1 *)0x20))
      {
        puVar18 = puVar16;
      }
      else {
        if (uVar12 < 0x20) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar12 & 0xffffffffffffffe0;
          uVar26 = 0;
          do {
            uVar13 = ((undefined8 *)((long)puVar16 + uVar26))[1];
            puVar18 = (undefined8 *)((long)puVar16 + uVar26 + 0x10);
            uVar3 = *puVar18;
            uVar4 = puVar18[1];
            puVar18 = (undefined8 *)((undefined1 *)((long)puVar27 + (long)puVar8) + uVar26);
            *puVar18 = *(undefined8 *)((long)puVar16 + uVar26);
            puVar18[1] = uVar13;
            puVar18 = (undefined8 *)((undefined1 *)((long)puVar27 + (long)puVar8) + uVar26 + 0x10);
            *puVar18 = uVar3;
            puVar18[1] = uVar4;
            uVar26 = uVar26 + 0x20;
          } while (uVar19 != uVar26);
          if (uVar12 == uVar19) goto LAB_10010e78;
          if ((uVar12 & 0x1c) == 0) {
            puVar27 = (undefined8 *)((long)puVar27 + uVar19);
            puVar18 = (undefined8 *)(uVar19 + (long)puVar16);
            goto LAB_10010e09;
          }
        }
        uVar26 = uVar12 & 0xfffffffffffffffc;
        puVar18 = (undefined8 *)((long)puVar16 + uVar26);
        puVar17 = (undefined1 *)((long)puVar8 + (long)puVar27);
        puVar27 = (undefined8 *)((long)puVar27 + uVar26);
        do {
          *(undefined4 *)(puVar17 + uVar19) = *(undefined4 *)((long)puVar16 + uVar19);
          uVar19 = uVar19 + 4;
        } while (uVar26 != uVar19);
        if (uVar12 == uVar26) goto LAB_10010e78;
      }
LAB_10010e09:
      puVar17 = (undefined1 *)((long)puVar16 + uVar12);
      uVar6 = (int)puVar17 - (int)puVar18 & 3;
      uVar12 = (ulong)uVar6;
      puVar9 = puVar18;
      if (uVar6 != 0) {
        do {
          *(undefined1 *)((long)puVar8 + (long)puVar27) = *(undefined1 *)puVar9;
          puVar9 = (undefined8 *)((long)puVar9 + 1);
          puVar27 = (undefined8 *)((long)puVar27 + 1);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if ((ulong)((long)puVar18 - (long)puVar17) < 0xfffffffffffffffd) {
        puVar20 = (undefined1 *)((long)puVar27 + (long)puVar8);
        lVar7 = 0;
        do {
          puVar20[lVar7] = *(undefined1 *)((long)puVar9 + lVar7);
          puVar20[lVar7 + 1] = *(undefined1 *)((long)puVar9 + lVar7 + 1);
          puVar20[lVar7 + 2] = *(undefined1 *)((long)puVar9 + lVar7 + 2);
          puVar20[lVar7 + 3] = *(undefined1 *)((long)puVar9 + lVar7 + 3);
          lVar23 = lVar7 + 4;
          lVar7 = lVar7 + 4;
        } while ((undefined1 *)((long)puVar9 + lVar23) != puVar17);
      }
    }
LAB_10010e78:
    if ((undefined8 *)0xfffd < puVar10) {
LAB_10010e81:
      goto LAB_10010552;
    }
    PF_PART2(local_3a8, 0) = 0xc4ff;
    PF_PART1(local_3a8, 2) = (undefined1)((uint)((int)puVar10 + 2) >> 8);
    PF_PART1(local_3a8, 3) = (char)puVar10 + '\x02';
    local_d8 = 0x13;
    local_100 = puVar8;
    local_40 = puVar10;
    local_38 = puVar8;
    lVar7 = recovered_10004690((long)&local_3a8,1,4,local_68);
    puVar8 = local_38;
    if (lVar7 != 4) goto LAB_10010552;
    if (local_40 == (undefined8 *)0x0) {
      recovered_100050c0(local_38);
    }
    else {
      local_100 = local_38;
      local_d8 = 0x14;
      puVar8 = (undefined8 *)recovered_10004690((long)local_38,1,(long)local_40,local_68);
      recovered_100050c0(local_38);
      if (puVar8 != local_40) goto LAB_10010557;
    }
    local_d8 = 0x15;
    puVar8 = (undefined8 *)recovered_10005060(4);
    recovered_100050c0(0);
    *(undefined1 *)puVar8 = 0x10;
    local_50 = puStack_160;
    if (puStack_160 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x1;
      puVar27 = (undefined8 *)0x4;
    }
    else {
      local_38 = (undefined8 *)((long)puStack_160 + 1);
      if (local_38 < (undefined8 *)0x5) {
        local_48 = (undefined8 *)0x4;
        puVar18 = local_168;
      }
      else {
        local_78 = local_168;
        puVar18 = (undefined8 *)0x4;
        do {
          local_48 = puVar18;
          puVar18 = (undefined8 *)((long)local_48 * 2);
        } while (local_48 < local_38);
        local_d8 = 0x16;
        local_108 = puVar8;
        local_40 = puVar8;
        puVar8 = (undefined8 *)recovered_10005060((long)local_48);
        *(undefined1 *)puVar8 = *(undefined1 *)local_40;
        recovered_100050c0(local_40);
        puVar18 = local_78;
      }
      puVar17 = (undefined1 *)0x1;
      puVar27 = puVar18;
      if ((local_50 < (undefined8 *)0x4) ||
         ((undefined1 *)((long)puVar8 + (1 - (long)puVar18)) < (undefined1 *)0x20)) {
LAB_1001112e:
        puVar20 = (undefined1 *)((long)puVar18 + (long)local_50);
        uVar6 = (int)puVar20 - (int)puVar27 & 3;
        uVar12 = (ulong)uVar6;
        puVar18 = puVar27;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)((long)puVar8 + (long)puVar17) = *(undefined1 *)puVar18;
            puVar18 = (undefined8 *)((long)puVar18 + 1);
            puVar17 = puVar17 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if ((ulong)((long)puVar27 - (long)puVar20) < 0xfffffffffffffffd) {
          puVar17 = puVar17 + (long)puVar8;
          lVar7 = 0;
          do {
            puVar17[lVar7] = *(undefined1 *)((long)puVar18 + lVar7);
            puVar17[lVar7 + 1] = *(undefined1 *)((long)puVar18 + lVar7 + 1);
            puVar17[lVar7 + 2] = *(undefined1 *)((long)puVar18 + lVar7 + 2);
            puVar17[lVar7 + 3] = *(undefined1 *)((long)puVar18 + lVar7 + 3);
            lVar23 = lVar7 + 4;
            lVar7 = lVar7 + 4;
          } while ((undefined1 *)((long)puVar18 + lVar23) != puVar20);
        }
      }
      else if (local_50 < (undefined8 *)0x20) {
        puVar9 = (undefined8 *)0x0;
LAB_100110f0:
        puVar10 = (undefined8 *)((ulong)local_50 & 0xfffffffffffffffc);
        puVar27 = (undefined8 *)((long)puVar18 + (long)puVar10);
        puVar17 = (undefined1 *)((long)puVar10 + 1);
        do {
          *(undefined4 *)((undefined1 *)((long)puVar8 + 1) + (long)puVar9) =
               *(undefined4 *)((long)puVar18 + (long)puVar9);
          puVar9 = (undefined8 *)((long)puVar9 + 4);
        } while (puVar10 != puVar9);
        if (local_50 != puVar10) goto LAB_1001112e;
      }
      else {
        puVar9 = (undefined8 *)((ulong)local_50 & 0xffffffffffffffe0);
        puVar27 = (undefined8 *)0x0;
        do {
          uVar13 = ((undefined8 *)((long)puVar18 + (long)puVar27))[1];
          uVar3 = *(undefined8 *)((long)(puVar18 + 2) + (long)puVar27);
          uVar4 = ((undefined8 *)((long)(puVar18 + 2) + (long)puVar27))[1];
          *(undefined8 *)((undefined1 *)((long)puVar8 + 1) + (long)puVar27) =
               *(undefined8 *)((long)puVar18 + (long)puVar27);
          *(undefined8 *)((long)((undefined1 *)((long)puVar8 + 1) + (long)puVar27) + 8) = uVar13;
          *(undefined8 *)((undefined1 *)((long)puVar8 + 0x11) + (long)puVar27) = uVar3;
          *(undefined8 *)((long)((undefined1 *)((long)puVar8 + 0x11) + (long)puVar27) + 8) = uVar4;
          puVar27 = puVar27 + 4;
        } while (puVar9 != puVar27);
        if (local_50 != puVar9) {
          if (((ulong)local_50 & 0x1c) == 0) {
            puVar27 = (undefined8 *)((long)puVar18 + (long)puVar9);
            puVar17 = (undefined1 *)((ulong)puVar9 | 1);
            goto LAB_1001112e;
          }
          goto LAB_100110f0;
        }
      }
      puVar18 = local_38;
      puVar27 = local_48;
    }
    if (uStack_148 != 0) {
      local_48 = (undefined8 *)(uStack_148 + (long)puVar18);
      uVar12 = uStack_148;
      puVar9 = local_150;
      local_38 = puVar18;
      if (puVar27 < local_48) {
        local_88 = uStack_148;
        local_78 = local_150;
        puVar18 = (undefined8 *)0x4;
        if (puVar27 != (undefined8 *)0x0) {
          puVar18 = puVar27;
        }
        do {
          puVar27 = puVar18;
          puVar18 = (undefined8 *)((long)puVar27 * 2);
        } while (puVar27 < local_48);
        local_d8 = 0x17;
        local_108 = puVar8;
        local_40 = puVar8;
        puVar8 = (undefined8 *)recovered_10005060((long)puVar27);
        if (local_38 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          if (((undefined8 *)0x3 < local_38) && (0x1f < (ulong)((long)puVar8 - (long)local_40))) {
            if (local_38 < (undefined8 *)0x20) {
              puVar27 = (undefined8 *)0x0;
            }
            else {
              puVar18 = (undefined8 *)((ulong)local_38 & 0xffffffffffffffe0);
              puVar27 = (undefined8 *)0x0;
              do {
                uVar13 = ((undefined8 *)((long)local_40 + (long)puVar27))[1];
                uVar3 = *(undefined8 *)((long)(local_40 + 2) + (long)puVar27);
                uVar4 = ((undefined8 *)((long)(local_40 + 2) + (long)puVar27))[1];
                *(undefined8 *)((long)puVar8 + (long)puVar27) =
                     *(undefined8 *)((long)local_40 + (long)puVar27);
                ((undefined8 *)((long)puVar8 + (long)puVar27))[1] = uVar13;
                *(undefined8 *)((long)(puVar8 + 2) + (long)puVar27) = uVar3;
                ((undefined8 *)((long)(puVar8 + 2) + (long)puVar27))[1] = uVar4;
                puVar27 = puVar27 + 4;
              } while (puVar18 != puVar27);
              if (local_38 == puVar18) goto LAB_10011312;
              puVar27 = puVar18;
              if (((ulong)local_38 & 0x1c) == 0) goto LAB_100112be;
            }
            puVar18 = (undefined8 *)((ulong)local_38 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_40 + (long)puVar27);
              puVar27 = (undefined8 *)((long)puVar27 + 4);
            } while (puVar18 != puVar27);
            if (local_38 == puVar18) goto LAB_10011312;
          }
LAB_100112be:
          uVar12 = (ulong)local_38 & 3;
          puVar27 = puVar18;
          if (uVar12 != 0) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_40 + (long)puVar27);
              puVar27 = (undefined8 *)((long)puVar27 + 1);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if ((ulong)((long)puVar18 - (long)local_38) < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)((long)puVar8 + (long)puVar27) =
                   *(undefined1 *)((long)local_40 + (long)puVar27);
              ((undefined1 *)((long)puVar8 + 1))[(long)puVar27] =
                   ((undefined1 *)((long)local_40 + 1))[(long)puVar27];
              ((undefined1 *)((long)puVar8 + 2))[(long)puVar27] =
                   ((undefined1 *)((long)local_40 + 2))[(long)puVar27];
              ((undefined1 *)((long)puVar8 + 3))[(long)puVar27] =
                   ((undefined1 *)((long)local_40 + 3))[(long)puVar27];
              puVar27 = (undefined8 *)((long)puVar27 + 4);
            } while (local_38 != puVar27);
          }
        }
LAB_10011312:
        recovered_100050c0(local_40);
        uVar12 = local_88;
        puVar9 = local_78;
      }
      puVar18 = puVar9;
      if ((uVar12 < 4) ||
         ((undefined1 *)((long)local_50 + (long)puVar8) + (1 - (long)puVar9) < (undefined1 *)0x20))
      {
LAB_100113ea:
        puVar17 = (undefined1 *)((long)puVar9 + uVar12);
        uVar6 = (int)puVar17 - (int)puVar18 & 3;
        uVar12 = (ulong)uVar6;
        puVar27 = puVar18;
        puVar9 = local_38;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)((long)puVar8 + (long)puVar9) = *(undefined1 *)puVar27;
            puVar27 = (undefined8 *)((long)puVar27 + 1);
            puVar9 = (undefined8 *)((long)puVar9 + 1);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if ((ulong)((long)puVar18 - (long)puVar17) < 0xfffffffffffffffd) {
          puVar20 = (undefined1 *)((long)puVar9 + (long)puVar8);
          lVar7 = 0;
          do {
            puVar20[lVar7] = *(undefined1 *)((long)puVar27 + lVar7);
            puVar20[lVar7 + 1] = *(undefined1 *)((long)puVar27 + lVar7 + 1);
            puVar20[lVar7 + 2] = *(undefined1 *)((long)puVar27 + lVar7 + 2);
            puVar20[lVar7 + 3] = *(undefined1 *)((long)puVar27 + lVar7 + 3);
            lVar23 = lVar7 + 4;
            lVar7 = lVar7 + 4;
          } while ((undefined1 *)((long)puVar27 + lVar23) != puVar17);
        }
      }
      else if (uVar12 < 0x20) {
        uVar19 = 0;
LAB_100113a0:
        uVar26 = uVar12 & 0xfffffffffffffffc;
        puVar18 = (undefined8 *)((long)puVar9 + uVar26);
        puVar17 = (undefined1 *)((long)puVar8 + (long)local_38);
        local_38 = (undefined8 *)((long)local_38 + uVar26);
        do {
          *(undefined4 *)(puVar17 + uVar19) = *(undefined4 *)((long)puVar9 + uVar19);
          uVar19 = uVar19 + 4;
        } while (uVar26 != uVar19);
        if (uVar12 != uVar26) goto LAB_100113ea;
      }
      else {
        uVar19 = uVar12 & 0xffffffffffffffe0;
        uVar26 = 0;
        do {
          uVar13 = ((undefined8 *)((long)puVar9 + uVar26))[1];
          puVar18 = (undefined8 *)((long)puVar9 + uVar26 + 0x10);
          uVar3 = *puVar18;
          uVar4 = puVar18[1];
          puVar18 = (undefined8 *)((undefined1 *)((long)local_38 + (long)puVar8) + uVar26);
          *puVar18 = *(undefined8 *)((long)puVar9 + uVar26);
          puVar18[1] = uVar13;
          puVar18 = (undefined8 *)((undefined1 *)((long)local_38 + (long)puVar8) + uVar26 + 0x10);
          *puVar18 = uVar3;
          puVar18[1] = uVar4;
          uVar26 = uVar26 + 0x20;
        } while (uVar19 != uVar26);
        if (uVar12 != uVar19) {
          if ((uVar12 & 0x1c) == 0) {
            local_38 = (undefined8 *)((long)local_38 + uVar19);
            puVar18 = (undefined8 *)(uVar19 + (long)puVar9);
            goto LAB_100113ea;
          }
          goto LAB_100113a0;
        }
      }
      puVar18 = local_48;
    }
    if ((undefined8 *)0xfffd < puVar18) goto LAB_10010e81;
    PF_PART2(local_3a8, 0) = 0xc4ff;
    PF_PART1(local_3a8, 2) = (undefined1)((uint)((int)puVar18 + 2) >> 8);
    PF_PART1(local_3a8, 3) = (char)puVar18 + '\x02';
    local_d8 = 0x18;
    local_108 = puVar8;
    local_40 = puVar8;
    local_38 = puVar18;
    lVar7 = recovered_10004690((long)&local_3a8,1,4,local_68);
    puVar8 = local_40;
    if (lVar7 != 4) goto LAB_10010552;
    if (local_38 == (undefined8 *)0x0) {
      recovered_100050c0(local_40);
    }
    else {
      local_108 = local_40;
      local_d8 = 0x19;
      puVar8 = (undefined8 *)recovered_10004690((long)local_40,1,(long)local_38,local_68);
      recovered_100050c0(local_40);
      if (puVar8 != local_38) goto LAB_10010557;
    }
    local_6a8 = 3;
    uStack_6a7 = 1;
    uStack_6a6 = 0;
    cStack_6a5 = '\x02';
    uStack_6a4 = 0x300;
    local_6a0 = 0x3f;
    local_d8 = 0x1a;
    recovered_1001ce60(&local_3a8,&local_6a8,10);
    if (local_3a0 < (undefined8 *)0xfffe) {
      local_6a8 = 0xff;
      uStack_6a7 = 0xda;
      uStack_6a6 = (undefined1)((uint)((int)local_3a0 + 2) >> 8);
      cStack_6a5 = (char)local_3a0 + '\x02';
      local_d8 = 0x1b;
      lVar7 = recovered_10004690((long)&local_6a8,1,4,local_68);
      if (lVar7 != 4) goto LAB_100115ee;
      local_38 = local_3a0;
      if (local_3a0 == (undefined8 *)0x0) {
        bVar28 = true;
      }
      else {
        local_d8 = 0x1c;
        puVar8 = (undefined8 *)
                 recovered_10004690(CONCAT44(PF_PART4(local_3a8, 4),
                                             CONCAT13(PF_PART1(local_3a8, 3),
                                                      CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8
                                                              ))),1,(long)local_3a0,local_68);
        bVar28 = puVar8 == local_38;
      }
    }
    else {
LAB_100115ee:
      bVar28 = false;
    }
    local_3a0 = (undefined8 *)0x0;
    recovered_100050c0(CONCAT44(PF_PART4(local_3a8, 4),
                                CONCAT13(PF_PART1(local_3a8, 3),
                                         CONCAT12(PF_PART1(local_3a8, 2),(undefined2)local_3a8))));
  }
  else {
LAB_10010557:
    bVar28 = false;
  }
  local_138 = 0;
  puStack_130 = (undefined8 *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0;
  local_114[0] = 0;
  local_114[1] = 0;
  local_114[2] = 0;
  local_4a8[0x3c] = 0;
  local_4a8[0x3d] = 0;
  local_4a8[0x3e] = 0;
  local_4a8[0x3f] = 0;
  local_4a8[0x38] = 0;
  local_4a8[0x39] = 0;
  local_4a8[0x3a] = 0;
  local_4a8[0x3b] = 0;
  local_4a8[0x34] = 0;
  local_4a8[0x35] = 0;
  local_4a8[0x36] = 0;
  local_4a8[0x37] = 0;
  local_4a8[0x30] = 0;
  local_4a8[0x31] = 0;
  local_4a8[0x32] = 0;
  local_4a8[0x33] = 0;
  local_4a8[0x2c] = 0;
  local_4a8[0x2d] = 0;
  local_4a8[0x2e] = 0;
  local_4a8[0x2f] = 0;
  local_4a8[0x28] = 0;
  local_4a8[0x29] = 0;
  local_4a8[0x2a] = 0;
  local_4a8[0x2b] = 0;
  local_4a8[0x24] = 0;
  local_4a8[0x25] = 0;
  local_4a8[0x26] = 0;
  local_4a8[0x27] = 0;
  local_4a8[0x20] = 0;
  local_4a8[0x21] = 0;
  local_4a8[0x22] = 0;
  local_4a8[0x23] = 0;
  local_4a8[0x1c] = 0;
  local_4a8[0x1d] = 0;
  local_4a8[0x1e] = 0;
  local_4a8[0x1f] = 0;
  local_4a8[0x18] = 0;
  local_4a8[0x19] = 0;
  local_4a8[0x1a] = 0;
  local_4a8[0x1b] = 0;
  local_4a8[0x14] = 0;
  local_4a8[0x15] = 0;
  local_4a8[0x16] = 0;
  local_4a8[0x17] = 0;
  local_4a8[0x10] = 0;
  local_4a8[0x11] = 0;
  local_4a8[0x12] = 0;
  local_4a8[0x13] = 0;
  local_4a8[0xc] = 0;
  local_4a8[0xd] = 0;
  local_4a8[0xe] = 0;
  local_4a8[0xf] = 0;
  local_4a8[8] = 0;
  local_4a8[9] = 0;
  local_4a8[10] = 0;
  local_4a8[0xb] = 0;
  local_4a8[4] = 0;
  local_4a8[5] = 0;
  local_4a8[6] = 0;
  local_4a8[7] = 0;
  local_4a8[0] = 0;
  local_4a8[1] = 0;
  local_4a8[2] = 0;
  local_4a8[3] = 0;
  if (bVar28) {
    uVar6 = (int)local_f8 + 7U >> 3;
    uVar15 = (int)local_f0 + 7U >> 3;
    local_f8 = (ulong)((int)local_f8 - 1);
    local_78 = (undefined8 *)(local_f0 & 0xffffffff);
    local_f0 = (ulong)((int)local_f0 - 1);
    local_48 = (undefined8 *)(ulong)(uVar15 + (uVar15 == 0));
    local_1a0 = (ulong)(uVar6 + (uVar6 == 0));
    uVar12 = 0;
    do {
      local_40 = (undefined8 *)(uVar12 * 8);
      puVar8 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      local_88 = uVar12;
      do {
        pvVar5 = local_60;
        puVar27 = local_78;
        uVar19 = local_f0;
        uVar12 = local_f8;
        puVar17 = &local_6a8;
        puVar20 = local_8a8;
        lVar7 = 0;
        puVar11 = (undefined2 *)&local_3a8;
        local_50 = puVar18;
        local_38 = puVar8;
        do {
          puVar8 = local_38;
          uVar6 = (int)lVar7 + (int)local_40;
          uVar26 = (ulong)uVar6;
          if ((uint)uVar12 <= uVar6) {
            uVar26 = uVar12 & 0xffffffff;
          }
          lVar23 = 0;
          do {
            uVar6 = (int)lVar23 + (int)puVar8;
            uVar24 = (ulong)uVar6;
            if ((uint)uVar19 <= uVar6) {
              uVar24 = uVar19 & 0xffffffff;
            }
            lVar25 = uVar24 + uVar26 * (long)puVar27;
            dVar1 = (double)*(byte *)((long)pvVar5 + lVar25 * 4);
            dVar29 = (double)*(byte *)((long)pvVar5 + lVar25 * 4 + 1);
            dVar2 = (double)*(byte *)((long)pvVar5 + lVar25 * 4 + 2);
            *(double *)(puVar11 + lVar23 * 4) =
                 dVar2 * DAT_1001d710 + dVar1 * DAT_1001d708 + dVar29 * DAT_1001d700 + DAT_1001d718;
            *(double *)(puVar17 + lVar23 * 8) =
                 dVar2 * DAT_1001d410 + dVar1 * DAT_1001d728 + dVar29 * DAT_1001d720;
            *(double *)(puVar20 + lVar23 * 8) =
                 dVar2 * DAT_1001d738 + dVar1 * DAT_1001d410 + dVar29 * DAT_1001d730;
            lVar23 = lVar23 + 1;
          } while (lVar23 != 8);
          lVar7 = lVar7 + 1;
          puVar20 = puVar20 + 0x40;
          puVar17 = puVar17 + 0x40;
          puVar11 = puVar11 + 0x20;
        } while (lVar7 != 8);
        local_d8 = 0x1e;
        recovered_1001c730((long)&local_3a8,((uintptr_t)pf_module_state+0x717U),(long)local_4a8);
        local_d8 = 0x1f;
        recovered_1001cac0(&local_138,local_4a8,local_114,(long)local_18a8,local_10a8);
        local_d8 = 0x20;
        recovered_1001c730((long)&local_6a8,((uintptr_t)pf_module_state+0x757U),(long)local_4a8);
        local_d8 = 0x21;
        recovered_1001cac0(&local_138,local_4a8,local_114 + 1,(long)local_18a8,local_10a8);
        local_d8 = 0x22;
        recovered_1001c730((long)local_8a8,((uintptr_t)pf_module_state+0x757U),(long)local_4a8);
        local_d8 = 0x23;
        recovered_1001cac0(&local_138,local_4a8,local_114 + 2,(long)local_18a8,local_10a8);
        puVar18 = (undefined8 *)((long)local_50 + 1);
        puVar8 = local_38 + 1;
      } while (puVar18 != local_48);
      uVar12 = local_88 + 1;
    } while (uVar12 != local_1a0);
    if (local_11c != 0) {
      bVar14 = 8 - (char)local_11c;
      local_120 = ~(byte)(-1 << (bVar14 & 0x1f)) | local_120 << (bVar14 & 0x1f);
      local_d8 = 0x1d;
      recovered_1001d140(&local_138,local_120);
    }
    if (puStack_130 != (undefined8 *)0x0) {
      local_d8 = 0x24;
      local_38 = puStack_130;
      puVar8 = (undefined8 *)recovered_10004690(local_138,1,(long)puStack_130,local_68);
      if (puVar8 != local_38) goto LAB_10010a37;
    }
    local_d8 = 0x25;
    lVar7 = recovered_10004690(((uintptr_t)pf_module_state+0x9fdU),1,2,local_68);
    local_38 = (undefined8 *)
               CONCAT44(PF_PART4(local_38, 4),(int)CONCAT71((int7)((ulong)lVar7 >> 8),lVar7 == 2));
  }
  else {
LAB_10010a37:
    local_38 = (undefined8 *)((ulong)local_38 & 0xffffffff00000000);
  }
  local_d8 = 0x26;
  uVar13 = recovered_10004340((int *)local_68);
  bVar14 = (byte)local_38 & (int)uVar13 == 0;
  recovered_100050c0(local_138);
  recovered_100050c0(local_150);
  recovered_100050c0(local_168);
  recovered_100050c0(local_180);
  recovered_100050c0(*(uint64_t *)(void *)local_198);
LAB_10010a99:
  recovered_100055b0(&local_e0);
  return bVar14;
}

#undef DAT_1001d410
#undef DAT_1001d700
#undef DAT_1001d708
#undef DAT_1001d710
#undef DAT_1001d718
#undef DAT_1001d720
#undef DAT_1001d728
#undef DAT_1001d730
#undef DAT_1001d738
#undef DAT_1001d760
#undef DAT_1001df50
#undef LAB_10011610
#undef local_108
#undef puStack_160
#undef local_100
#undef local_f8
#undef local_f0
#undef uStack_148
#undef local_e8
#undef local_e0
#undef local_d8
#undef puStack_130
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
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
#undef local_18a8
#undef local_10a8
#undef local_8a8
#undef local_6a8
#undef local_6a0
#undef local_69c
#undef local_4a8
#undef uStack_6a7
#undef uStack_6a6
#undef cStack_6a5
#undef local_3a8
#undef local_3a0
#undef uStack_6a4
#undef local_1a0
#undef local_198
#undef uStack_69e
#undef local_188
#undef local_180
#undef uStack_69b
#undef local_170
#undef uStack_69a
#undef local_168
#undef local_158
#undef local_150
#undef local_140
#undef local_138
#undef local_128
#undef puStack_190
#undef local_120
#undef local_11c
#undef local_114
#undef uStack_178

#undef DAT_1001d5d0
#define DAT_1001d5d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef DAT_1001dfa0
#define DAT_1001dfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9dU)))
#undef LAB_1001506c
#define LAB_1001506c (*(uint8_t *)(0x1001506cU))
#undef UNK_1001d5d8
#define UNK_1001d5d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#undef _DAT_1001d5d0
#define _DAT_1001d5d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cdU)))
#undef str_1001de03
#define str_1001de03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa00U)))
#undef uRam000000001001d5d8
#define uRam000000001001d5d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5U)))
#define local_174 (*(int *)(frame + 220))
#define local_170 (*(uint * *)(frame + 224))
#define local_168 (*(uint * *)(frame + 232))
#define local_160 (*(uint * *)(frame + 240))
#define local_158 (*(uint * *)(frame + 248))
#define local_150 (*(ulong *)(frame + 256))
#define local_148 (*(uint * *)(frame + 264))
#define local_140 (*(undefined8 *)(frame + 272))
#define local_138 (*(undefined4 *)(frame + 280))
#define local_120 (*(code * *)(frame + 304))
#define local_118 (*(undefined * *)(frame + 312))
#define local_110 (*(undefined1 * *)(frame + 320))
#define local_108 (*(undefined1 * *)(frame + 328))
#define local_100 (*(undefined1 * *)(frame + 336))
#define local_e8 (*(long *)(frame + 360))
#define local_e0 (*(uint * *)(frame + 368))
#define local_d8 (*(long *)(frame + 376))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10011800(char *param_1,void *param_2,int param_3,int param_4)

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
  local_120 = recovered_10005010;
  local_118 = &DAT_1001dfa0;
  local_108 = &LAB_1001506c;
  local_1d0 = param_1;
  local_158 = param_2;
  recovered_10005590(&local_140);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_180 = (ulong)(param_3 + 0x3fU >> 6);
    local_150 = (ulong)(param_4 + 0x3fU >> 6);
    if ((uint *)(local_150 * local_180) < (uint *)0x40000000) {
      local_138 = 1;
      local_88 = (uint *)(local_150 * local_180);
      local_78 = (ulong)(uint)param_3;
      local_60 = (ulong)(uint)param_4;
      local_70 = (uint *)recovered_10005060(0x10);
      recovered_100050c0(0);
      *(undefined8 *)local_70 = 0x66637820706d6967;
      *(undefined4 *)((long)local_70 + 8) = 0x30307620;
      *(undefined2 *)((long)local_70 + 0xc) = 0x33;
      local_1b0 = (undefined8 *)local_70;
      local_138 = 2;
      puVar7 = (undefined8 *)recovered_10005060(0x20);
      uVar31 = local_78;
      uVar18 = local_78 >> 0x18;
      uVar20 = local_78 >> 0x10 & 0xffff;
      uVar19 = local_78 >> 8 & 0xffffff;
      *puVar7 = *(undefined8 *)local_70;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)local_70 + 8);
      *(undefined1 *)((long)puVar7 + 0xc) = *(undefined1 *)((long)local_70 + 0xc);
      *(undefined1 *)((long)puVar7 + 0xd) = *(undefined1 *)((long)local_70 + 0xd);
      recovered_100050c0(local_70);
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
      puVar7 = (undefined8 *)recovered_10005060(0x40);
      local_a8 = local_158;
      uVar13 = *(undefined8 *)((long)local_40 + 8);
      *puVar7 = *(undefined8 *)local_40;
      puVar7[1] = uVar13;
      puVar7[2] = *(undefined8 *)((long)local_40 + 0x10);
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((long)local_40 + 0x18);
      *(undefined1 *)((long)puVar7 + 0x1c) = *(undefined1 *)((long)local_40 + 0x1c);
      *(undefined1 *)((long)puVar7 + 0x1d) = *(undefined1 *)((long)local_40 + 0x1d);
      recovered_100050c0(local_40);
      *(undefined4 *)((long)puVar7 + 0x1e) = 0x1000000;
      *(undefined1 *)((long)puVar7 + 0x22) = 0;
      uVar13 = uRam000000001001d5d8;
      *(undefined8 *)((long)puVar7 + 0x23) = _DAT_1001d5d0;
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
      puVar8 = (uint *)recovered_10005060((long)local_38);
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
      recovered_100050c0(local_40);
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
        recovered_100050c0(local_40);
      }
      else {
        local_38 = puVar10;
      }
      *(undefined4 *)((long)puVar8 + 0x43) = 0x1000000;
      local_138 = 6;
      local_68 = puVar8;
      local_40 = puVar8;
      puVar10 = (uint *)recovered_100014c0(str_1001de03);
      puVar8 = local_38;
      if (local_38 < (uint *)0x4b) {
        do {
          local_50 = puVar8;
          puVar8 = (uint *)((long)local_50 * 2);
        } while (local_50 < (uint *)0x4b);
        local_68 = local_40;
        local_138 = 7;
        local_58 = puVar10;
        puVar8 = (uint *)recovered_10005060((long)local_50);
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
        recovered_100050c0(local_40);
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
          puVar8 = (uint *)recovered_10005060((long)local_38);
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
          recovered_100050c0(local_48);
          puVar10 = local_50;
          local_50 = puVar27;
        }
        else {
          puVar16 = puVar10;
        }
        lVar9 = 0x4b;
        if (puVar16 < (uint *)0x4) {
          pcVar11 = str_1001de03;
LAB_10011f66:
          uVar18 = ~(ulong)pcVar11;
          uVar30 = ((int)puVar10 + ((uintptr_t)pf_module_state+0xa00U)) - (int)pcVar11 & 3;
          uVar31 = (ulong)uVar30;
          if (uVar30 != 0) {
            do {
              *(char *)((long)puVar8 + lVar9) = *pcVar11;
              pcVar11 = pcVar11 + 1;
              lVar9 = lVar9 + 1;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
          if ((char *)0x2 < (char *)((long)puVar16 + ((uintptr_t)pf_module_state+0xa00U)) + uVar18) {
            lVar17 = 0;
            do {
              *(char *)((long)puVar8 + lVar17 + lVar9) = pcVar11[lVar17];
              *(char *)((long)puVar8 + lVar17 + lVar9 + 1) = pcVar11[lVar17 + 1];
              *(char *)((long)puVar8 + lVar17 + lVar9 + 2) = pcVar11[lVar17 + 2];
              *(char *)((long)puVar8 + lVar17 + lVar9 + 3) = pcVar11[lVar17 + 3];
              lVar3 = lVar17 + 4;
              lVar17 = lVar17 + 4;
            } while (pcVar11 + lVar3 != (char *)((long)puVar16 + ((uintptr_t)pf_module_state+0xa00U)));
          }
        }
        else {
          pcVar11 = str_1001de03;
          if (puVar8 + -0x400776e < (uint *)0x20) goto LAB_10011f66;
          if (puVar16 < (uint *)0x20) {
            puVar14 = (uint *)0x0;
LAB_10011f1b:
            puVar27 = (uint *)((ulong)puVar16 & 0xfffffffffffffffc);
            pcVar11 = (char *)((long)puVar27 + ((uintptr_t)pf_module_state+0xa00U));
            lVar9 = (long)puVar27 + 0x4b;
            do {
              *(undefined4 *)((long)puVar8 + 0x4bU + (long)puVar14) =
                   *(undefined4 *)((long)puVar14 + ((uintptr_t)pf_module_state+0xa00U));
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (puVar16 != puVar27) goto LAB_10011f66;
          }
          else {
            puVar14 = (uint *)((ulong)puVar16 & 0xffffffffffffffe0);
            puVar27 = (uint *)0x0;
            do {
              uVar13 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state+0xa08U));
              uVar1 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state+0xa10U));
              uVar2 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state+0xa18U));
              puVar7 = (undefined8 *)((long)puVar8 + 0x4bU + (long)puVar27);
              *puVar7 = *(undefined8 *)((long)puVar27 + ((uintptr_t)pf_module_state+0xa00U));
              puVar7[1] = uVar13;
              puVar7 = (undefined8 *)((long)puVar8 + 0x5bU + (long)puVar27);
              *puVar7 = uVar1;
              puVar7[1] = uVar2;
              puVar27 = puVar27 + 8;
            } while (puVar14 != puVar27);
            if (puVar16 != puVar14) {
              if (((ulong)puVar10 & 0x1c) == 0) {
                pcVar11 = (char *)((long)puVar14 + ((uintptr_t)pf_module_state+0xa00U));
                lVar9 = (long)puVar14 + 0x4b;
                goto LAB_10011f66;
              }
              goto LAB_10011f1b;
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
        if (local_38 <= local_50) goto LAB_1001206c;
        local_138 = 9;
        local_68 = puVar8;
        local_48 = puVar8;
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_1001213f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100120d5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001213f;
          }
LAB_100120d5:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_1001213f:
        recovered_100050c0(local_48);
      }
      else {
LAB_1001206c:
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_48 == (uint *)uVar18) goto LAB_100122af;
              uVar31 = uVar18;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10012245;
            }
            uVar18 = (ulong)local_48 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)((long)puVar8 + uVar31) = *(undefined4 *)((long)local_50 + uVar31);
              uVar31 = uVar31 + 4;
            } while (uVar18 != uVar31);
            if (local_48 == (uint *)uVar18) goto LAB_100122af;
          }
LAB_10012245:
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
LAB_100122af:
        recovered_100050c0(local_50);
      }
      *(undefined4 *)((long)puVar8 + 1U + (long)puVar32) = 0x6000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_1001240f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100123a5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001240f;
          }
LAB_100123a5:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001240f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 5U + (long)puVar32) = 0x4000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_1001256f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012505;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001256f;
          }
LAB_10012505:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001256f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 9U + (long)puVar32) = 0xff000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_100126cf;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012665;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_100126cf;
          }
LAB_10012665:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_100126cf:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0xdU + (long)puVar32) = 0x7000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_1001282f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100127c5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001282f;
          }
LAB_100127c5:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001282f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x11U + (long)puVar32) = 0x4000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_1001298f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012925;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001298f;
          }
LAB_10012925:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001298f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x15U + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_10012aef;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012a85;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_10012aef;
          }
LAB_10012a85:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_10012aef:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x19U + (long)puVar32) = 0x8000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_10012c4f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012be5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10012c4f;
          }
LAB_10012be5:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10012c4f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x1dU + (long)puVar32) = 0x4000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_10012daf;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10012d45;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_10012daf;
          }
LAB_10012d45:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_10012daf:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x21U + (long)puVar32) = 0x1000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_10012f0f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10012ea5;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10012f0f;
          }
LAB_10012ea5:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10012f0f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x25U + (long)puVar32) = 0xf000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_1001306f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10013005;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001306f;
          }
LAB_10013005:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001306f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x29U + (long)puVar32) = 0x8000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_100131cf;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10013165;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_100131cf;
          }
LAB_10013165:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_100131cf:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x2dU + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_1001332f;
              puVar16 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_100132c5;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_50 == puVar10) goto LAB_1001332f;
          }
LAB_100132c5:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_1001332f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x31U + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_1001348f;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10013425;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_48 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_1001348f;
          }
LAB_10013425:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_1001348f:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x35U + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar16) goto LAB_10013600;
              puVar27 = puVar16;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10013596;
            }
            puVar16 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_48 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_50 == puVar16) goto LAB_10013600;
          }
LAB_10013596:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar16) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_10013600:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x39U + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar27) goto LAB_10013763;
              puVar14 = puVar27;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_100136f4;
            }
            puVar27 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_48 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_58 == puVar27) goto LAB_10013763;
          }
LAB_100136f4:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_58 != puVar27);
          }
        }
LAB_10013763:
        recovered_100050c0(local_48);
      }
      *(undefined4 *)((long)puVar8 + 0x3dU + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar10) goto LAB_100138e0;
              puVar27 = puVar10;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10013876;
            }
            puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_b8 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar10 != puVar27);
            if (local_50 == puVar10) goto LAB_100138e0;
          }
LAB_10013876:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_b8 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_50 != puVar10);
          }
        }
LAB_100138e0:
        recovered_100050c0(local_b8);
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_48 == puVar10) goto LAB_10013a60;
              puVar16 = puVar10;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_100139f6;
            }
            puVar10 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_50 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_48 == puVar10) goto LAB_10013a60;
          }
LAB_100139f6:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_48 != puVar10);
          }
        }
LAB_10013a60:
        recovered_100050c0(local_50);
        uVar4 = (undefined1)local_78;
      }
      *(char *)((long)puVar8 + 0x45U + (long)puVar32) = (char)local_70;
      *(char *)((long)puVar8 + 0x46U + (long)puVar32) = (char)local_b0;
      *(char *)((long)puVar8 + 0x47U + (long)puVar32) = (char)local_90;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar10) goto LAB_10013be0;
              puVar16 = puVar10;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10013b76;
            }
            puVar10 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_50 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_58 == puVar10) goto LAB_10013be0;
          }
LAB_10013b76:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_50 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_58 != puVar10);
          }
        }
LAB_10013be0:
        recovered_100050c0(local_50);
      }
      *(char *)((long)puVar8 + 0x49U + (long)puVar32) = (char)local_c8;
      *(char *)((long)puVar8 + 0x4aU + (long)puVar32) = (char)local_c0;
      *(char *)((long)puVar8 + 0x4bU + (long)puVar32) = (char)local_d0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_48 == puVar10) goto LAB_10013d60;
              puVar16 = puVar10;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10013cf6;
            }
            puVar10 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar16) =
                   *(undefined4 *)((long)local_58 + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (puVar10 != puVar16);
            if (local_48 == puVar10) goto LAB_10013d60;
          }
LAB_10013cf6:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 1U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 2U + (long)puVar10);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar10) =
                   *(undefined1 *)((long)local_58 + 3U + (long)puVar10);
              puVar10 = puVar10 + 1;
            } while (local_48 != puVar10);
          }
        }
LAB_10013d60:
        recovered_100050c0(local_58);
      }
      *(undefined4 *)((long)puVar8 + 0x4dU + (long)puVar32) = 0x4000000;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar16) goto LAB_10013ec4;
              puVar27 = puVar16;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10013e57;
            }
            puVar16 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_58 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_50 == puVar16) goto LAB_10013ec4;
          }
LAB_10013e57:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 1U + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 2U + (long)puVar16);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar16) =
                   *(undefined1 *)((long)local_58 + 3U + (long)puVar16);
              puVar16 = puVar16 + 1;
            } while (local_50 != puVar16);
          }
        }
LAB_10013ec4:
        recovered_100050c0(local_58);
      }
      *(undefined4 *)((long)puVar8 + 0x51U + (long)puVar32) = 0;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_48 == puVar27) goto LAB_10014043;
              puVar14 = puVar27;
              if (((ulong)local_48 & 0x1c) == 0) goto LAB_10013fd4;
            }
            puVar27 = (uint *)((ulong)local_48 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_b8 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_48 == puVar27) goto LAB_10014043;
          }
LAB_10013fd4:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 1U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 2U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar27) =
                   *(undefined1 *)((long)local_b8 + 3U + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_48 != puVar27);
          }
        }
LAB_10014043:
        recovered_100050c0(local_b8);
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_58 == puVar27) goto LAB_100141d3;
              puVar14 = puVar27;
              if (((ulong)local_58 & 0x1c) == 0) goto LAB_10014164;
            }
            puVar27 = (uint *)((ulong)local_58 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_48 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_58 == puVar27) goto LAB_100141d3;
          }
LAB_10014164:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 1U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 2U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar27) =
                   *(undefined1 *)((long)local_48 + 3U + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_58 != puVar27);
          }
        }
LAB_100141d3:
        recovered_100050c0(local_48);
      }
      *(char *)((long)puVar8 + 0x59U + (long)puVar32) = (char)local_70;
      *(char *)((long)puVar8 + 0x5aU + (long)puVar32) = (char)local_b0;
      *(char *)((long)puVar8 + 0x5bU + (long)puVar32) = (char)local_90;
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_50 == puVar27) goto LAB_1001436b;
              puVar14 = puVar27;
              if (((ulong)local_50 & 0x1c) == 0) goto LAB_10014304;
            }
            puVar27 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar14) =
                   *(undefined4 *)((long)local_b0 + (long)puVar14);
              puVar14 = puVar14 + 1;
            } while (puVar27 != puVar14);
            if (local_50 == puVar27) goto LAB_1001436b;
          }
LAB_10014304:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 1U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 2U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar27) =
                   *(undefined1 *)((long)local_b0 + 3U + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_50 != puVar27);
          }
        }
LAB_1001436b:
        recovered_100050c0(local_b0);
      }
      *(char *)((long)puVar8 + (long)puVar10) = (char)local_c8;
      *(char *)((long)puVar8 + 5U + (long)puVar16) = (char)local_c0;
      *(char *)((long)puVar8 + 6U + (long)puVar16) = (char)local_d0;
      *(char *)((long)puVar8 + 7U + (long)puVar16) = (char)local_60;
      local_148 = puVar8;
      if (local_88 == (uint *)0x0) {
        local_d8 = 0;
        uVar18 = local_78;
        puVar10 = local_a8;
      }
      else {
        local_138 = 0x22;
        local_e8 = recovered_10005060((long)local_88 * 8);
        puVar10 = (uint *)0x0;
        recovered_100050c0(0);
        if (local_88 < (uint *)0x4) goto LAB_10014e00;
        puVar10 = (uint *)(ulong)((uint)local_88 & 0x3ffffffc);
        puVar8 = (uint *)0x0;
        do {
          puVar7 = (undefined8 *)(local_e8 + (long)puVar8 * 8);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)(local_e8 + 0x10 + (long)puVar8 * 8);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar8 = puVar8 + 1;
        } while (puVar10 != puVar8);
        for (; local_88 != puVar10; puVar10 = (uint *)((long)puVar10 + 1)) {
LAB_10014e00:
          *(undefined8 *)(local_e8 + (long)puVar10 * 8) = 0;
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
          *(uint **)(local_e8 + (long)puVar14 * 8) = puVar16;
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
            puVar8 = (uint *)recovered_10005060((long)local_38);
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
                    if (local_70 == local_90) goto LAB_10014e40;
                    puVar27 = local_90;
                    if (((ulong)local_70 & 0x1c) == 0) goto LAB_10014fdf;
                  }
                  do {
                    *(undefined4 *)((long)puVar8 + (long)puVar27) =
                         *(undefined4 *)((long)local_a0 + (long)puVar27);
                    puVar27 = puVar27 + 1;
                  } while (local_c0 != puVar27);
                  puVar27 = local_c0;
                  if (local_70 == local_c0) goto LAB_10014e40;
                }
              }
LAB_10014fdf:
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
                  *(undefined1 *)((long)puVar8 + 1U + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 1U + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 2U + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 2U + (long)puVar14);
                  *(undefined1 *)((long)puVar8 + 3U + (long)puVar14) =
                       *(undefined1 *)((long)local_a0 + 3U + (long)puVar14);
                  puVar14 = puVar14 + 1;
                } while (local_70 != puVar14);
              }
            }
LAB_10014e40:
            recovered_100050c0(local_a0);
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
        puVar8 = (uint *)recovered_10005060((long)local_38);
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
              if (local_40 == puVar16) goto LAB_100145d7;
              puVar27 = puVar16;
              if (((ulong)local_40 & 0x1c) == 0) goto LAB_1001455b;
            }
            puVar16 = (uint *)((ulong)local_40 & 0xfffffffffffffffc);
            do {
              *(undefined4 *)((long)puVar8 + (long)puVar27) =
                   *(undefined4 *)((long)local_98 + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (puVar16 != puVar27);
            if (local_40 == puVar16) goto LAB_100145d7;
          }
LAB_1001455b:
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
              *(undefined1 *)((long)puVar8 + 1U + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 1U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 2U + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 2U + (long)puVar27);
              *(undefined1 *)((long)puVar8 + 3U + (long)puVar27) =
                   *(undefined1 *)((long)local_98 + 3U + (long)puVar27);
              puVar27 = puVar27 + 1;
            } while (local_40 != puVar27);
          }
        }
LAB_100145d7:
        recovered_100050c0(local_98);
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
          lVar17 = *(long *)(local_d8 + (local_210 + (long)puVar14) * 8);
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
                  puVar8 = (uint *)recovered_10005060((long)local_38);
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
                          if (local_50 == puVar10) goto LAB_10014a6b;
                          puVar32 = puVar10;
                          if (((ulong)local_50 & 0x1c) == 0) goto LAB_100149f8;
                        }
                        puVar10 = (uint *)((ulong)local_50 & 0xfffffffffffffffc);
                        do {
                          *(undefined4 *)((long)puVar8 + (long)puVar32) =
                               *(undefined4 *)((long)local_80 + (long)puVar32);
                          puVar32 = puVar32 + 1;
                        } while (puVar10 != puVar32);
                        if (local_50 == puVar10) goto LAB_10014a6b;
                      }
                    }
LAB_100149f8:
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
                        *(undefined1 *)((long)puVar8 + 1U + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 1U + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 2U + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 2U + (long)puVar32);
                        *(undefined1 *)((long)puVar8 + 3U + (long)puVar32) =
                             *(undefined1 *)((long)local_80 + 3U + (long)puVar32);
                        puVar32 = puVar32 + 1;
                      } while (local_50 != puVar32);
                    }
                  }
LAB_10014a6b:
                  recovered_100050c0(local_80);
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
                        if (uVar31 == uVar20) goto LAB_10014c10;
                        if ((uVar31 & 0xc) == 0) {
                          puVar22 = (uint *)((long)puVar16 - uVar20);
                          goto LAB_10014bd9;
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
                      if (uVar31 == uVar19) goto LAB_10014c10;
                    }
LAB_10014bd9:
                    do {
                      *(undefined1 *)((long)puVar8 + local_220 + (long)puVar22) =
                           *(undefined1 *)(((long)puVar8 - 1U) + (long)puVar22);
                      puVar22 = (uint *)((long)puVar22 + -1);
                    } while (local_40 < puVar22);
                  }
                }
LAB_10014c10:
                puVar12 = (uint *)(((long)local_c0 + (long)local_90) * lVar9 + (long)local_58);
                puVar22 = puVar12;
                if ((int)uVar18 == (int)local_d0) {
LAB_10014c56:
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
                    goto LAB_10014c56;
                  }
                  if (local_178 < 8) {
                    puVar22 = (uint *)0x0;
LAB_10014d10:
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
                        goto LAB_10014c56;
                      }
                      goto LAB_10014d10;
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
      puVar10 = recovered_10003ec0((long)local_1d0,((uintptr_t)pf_module_state+0x9afU));
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
          puVar10 = (uint *)recovered_10004690((long)local_e0,1,(long)local_50,puVar10);
          uVar6 = (undefined4)CONCAT71((int7)((ulong)puVar10 >> 8),puVar10 == local_50);
          puVar10 = local_40;
        }
        local_70 = (uint *)CONCAT44(PF_PART4(local_70, 4),uVar6);
        local_138 = 0x28;
        uVar13 = recovered_10004340((int *)puVar10);
        bVar25 = (byte)local_70 & (int)uVar13 == 0;
      }
      recovered_100050c0(local_d8);
      recovered_100050c0(local_e0);
      goto LAB_10014ddb;
    }
  }
  bVar25 = 0;
LAB_10014ddb:
  recovered_100055b0(&local_140);
  return bVar25;
}

#undef DAT_1001d5d0
#undef DAT_1001dfa0
#undef LAB_1001506c
#undef UNK_1001d5d8
#undef _DAT_1001d5d0
#undef str_1001de03
#undef uRam000000001001d5d8
#undef local_174
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138
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

#undef DAT_1001d5e0
#define DAT_1001d5e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ddU)))
#undef DAT_1001dff4
#define DAT_1001dff4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf1U)))
#undef LAB_10015587
#define LAB_10015587 (*(uint8_t *)(0x10015587U))
#define local_d8 (*(void * *)(frame + 24))
#define local_d0 (*(undefined8 *)(frame + 32))
#define local_c8 (*(undefined4 *)(frame + 40))
#define local_b0 (*(code * *)(frame + 64))
#define local_a8 (*(undefined * *)(frame + 72))
#define local_a0 (*(undefined1 * *)(frame + 80))
#define local_98 (*(undefined1 * *)(frame + 88))
#define local_90 (*(undefined1 * *)(frame + 96))
#define local_78 (*(uint *)(frame + 120))
#define local_74 (*(uint *)(frame + 124))
#define local_70 (*(uint *)(frame + 128))
#define local_6c (*(uint *)(frame + 132))
#define local_68 (*(uint *)(frame + 136))
#define local_64 (*(uint *)(frame + 140))
#define local_60 (*(uint * *)(frame + 144))
#define local_58 (*(undefined8 * *)(frame + 152))
#define local_50 (*(undefined8 * *)(frame + 160))
#define local_44 (*(uint *)(frame + 172))
#define local_40 (*(ulong *)(frame + 176))
#define local_38 (*(undefined8 * *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015270
 */

uchar recovered_10015270(char *param_1,void *param_2,int param_3,int param_4)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  local_a0 = (undefined1 *)((long)(uintptr_t)(frame + 240) + -8);
  local_90 = (undefined1 *)&local_d8;
  local_b0 = recovered_10005010;
  local_a8 = &DAT_1001dff4;
  local_98 = &LAB_10015587;
  recovered_10005590(&local_d0);
  if ((0 < param_4 && 0 < param_3) && (param_2 != (void *)0x0 && param_1 != (char *)0x0)) {
    local_c8 = 0xffffffff;
    local_60 = recovered_10003ec0((long)param_1,((uintptr_t)pf_module_state+0x9afU));
    if (local_60 != (uint *)0x0) {
      local_40 = CONCAT44(PF_PART4(local_40, 4),param_3);
      local_58 = (undefined8 *)0x0;
      local_c8 = 1;
      local_d8 = param_2;
      local_44 = param_4;
      local_50 = (undefined8 *)recovered_10005060(8);
      recovered_100050c0(0);
      *local_50 = 0x100474d49494552;
      local_58 = local_50;
      local_c8 = 2;
      puVar2 = (undefined8 *)recovered_10005060(0x10);
      uVar4 = local_40;
      uVar8 = (uint)local_40 >> 8;
      uVar9 = (uint)local_40 >> 0x10;
      uVar7 = (uint)local_40 >> 0x18;
      *puVar2 = *local_50;
      recovered_100050c0(local_50);
      *(char *)(puVar2 + 1) = (char)uVar4;
      *(char *)((long)puVar2 + 9) = (char)(uVar4 >> 8);
      *(char *)((long)puVar2 + 10) = (char)(uVar4 >> 0x10);
      *(char *)((long)puVar2 + 0xb) = (char)(uVar4 >> 0x18);
      local_6c = local_44 >> 8;
      local_68 = local_44 >> 0x10;
      local_64 = local_44 >> 0x18;
      *(char *)((long)puVar2 + 0xc) = (char)local_44;
      *(char *)((long)puVar2 + 0xd) = (char)(local_44 >> 8);
      *(char *)((long)puVar2 + 0xe) = (char)(local_44 >> 0x10);
      *(char *)((long)puVar2 + 0xf) = (char)(local_44 >> 0x18);
      local_c8 = 3;
      local_78 = uVar8;
      local_74 = uVar9;
      local_70 = uVar7;
      local_58 = puVar2;
      local_50 = puVar2;
      puVar2 = (undefined8 *)recovered_10005060(0x20);
      uVar5 = local_50[1];
      *puVar2 = *local_50;
      puVar2[1] = uVar5;
      recovered_100050c0(local_50);
      puVar2[2] = DAT_1001d5e0;
      puVar2[3] = 0;
      local_c8 = 4;
      local_58 = puVar2;
      local_50 = puVar2;
      local_38 = (undefined8 *)recovered_10005060(0x40);
      uVar5 = local_50[1];
      *local_38 = *local_50;
      local_38[1] = uVar5;
      uVar5 = local_50[3];
      local_38[2] = local_50[2];
      local_38[3] = uVar5;
      recovered_100050c0(local_50);
      *(char *)(local_38 + 4) = (char)local_40;
      *(char *)((long)local_38 + 0x21) = (char)local_78;
      *(char *)((long)local_38 + 0x22) = (char)local_74;
      *(char *)((long)local_38 + 0x23) = (char)local_70;
      *(char *)((long)local_38 + 0x24) = (char)local_44;
      *(char *)((long)local_38 + 0x25) = (char)local_6c;
      *(char *)((long)local_38 + 0x26) = (char)local_68;
      *(char *)((long)local_38 + 0x27) = (char)local_64;
      local_38[5] = 0xff;
      local_c8 = 5;
      lVar3 = recovered_10004690((long)local_38,1,0x30,local_60);
      if (lVar3 == 0x30) {
        lVar3 = (local_40 & 0xffffffff) * (ulong)local_44;
        if (lVar3 == 0) {
          uVar1 = (undefined4)CONCAT71((uint7)(uint3)(local_44 >> 8),1);
        }
        else {
          local_40 = lVar3 * 4;
          local_c8 = 6;
          uVar4 = recovered_10004690((long)local_d8,1,local_40,local_60);
          uVar1 = (undefined4)CONCAT71((int7)(uVar4 >> 8),uVar4 == local_40);
        }
        local_40 = CONCAT44(PF_PART4(local_40, 4),uVar1);
      }
      else {
        local_40 = local_40 & 0xffffffff00000000;
      }
      local_c8 = 7;
      uVar5 = recovered_10004340((int *)local_60);
      bVar6 = (byte)local_40 & (int)uVar5 == 0;
      recovered_100050c0(local_38);
      goto LAB_10015567;
    }
  }
  bVar6 = 0;
LAB_10015567:
  recovered_100055b0(&local_d0);
  return bVar6;
}

#undef DAT_1001d5e0
#undef DAT_1001dff4
#undef LAB_10015587
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015600
 */

void recovered_10015600(long *param_1,ulong param_2,undefined1 *param_3)

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
  lVar6 = recovered_10005060(param_2);
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
  recovered_100050c0(lVar2);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015790
 */

void recovered_10015790(long *param_1,ulong param_2)

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
  lVar6 = recovered_10005060(param_2);
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
  recovered_100050c0(lVar2);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015920
 */

uint128 recovered_10015920(uint param_1,uint param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  uint128 auVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint128 auVar7;

  if (param_2 != 0) {
    uVar4 = 0xffffffff;
    do {
      uVar4 = uVar4 + 1;
      if (0x1f < uVar4) break;
    } while ((1 << ((byte)uVar4 & 0x1f) & param_2) == 0);
    uVar5 = 0;
    uVar6 = param_2;
    do {
      uVar5 = uVar5 + (uVar6 & 1);
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar1);
    param_3 = 0xffffffff;
    uVar6 = ~(-1 << ((byte)uVar5 & 0x1f));
    if (0x1e < uVar5) {
      uVar6 = 0xffffffff;
    }
    if (uVar6 != 0) {
      uVar2 = (ulong)((uVar6 >> 1) + ((param_2 & param_1) >> ((byte)uVar4 & 0x1f)) * 0xff);
      PF_PART8(auVar7, 8) = uVar2 % (ulong)uVar6;
      PF_PART8(auVar7, 0) = uVar2 / uVar6;
      return auVar7;
    }
  }
  PF_PART8(auVar3, 8) = 0;
  PF_PART8(auVar3, 0) = param_3;
  return auVar3 << 0x40;
}


#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100159b0
 */

undefined8 recovered_100159b0(undefined8 *param_1,ushort *param_2)

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
      recovered_10000e30((void *)((long)&uStack_18 + 4),
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
  recovered_10000e30((void *)(((ulong)uVar10 + uVar4 * uVar8) * 4 + *(long *)param_1[10]),
                     (void *)((long)&uStack_18 + 4),4);
  plVar3 = (long *)*param_1;
  *plVar3 = *plVar3 + 1;
  return CONCAT71((int7)((ulong)plVar3 >> 8),1);
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015bf0
 */

void recovered_10015bf0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  *(undefined8 *)(param_1 + 0x548) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x540));
  lVar2 = *(long *)(param_1 + 0x530);
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x40 + -0x10;
    do {
      lVar1 = *(long *)(param_1 + 0x528);
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_100050c0(*(undefined8 *)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x40;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x530) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x528));
  *(undefined8 *)(param_1 + 0x518) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x510));
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x4f0));
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x4d0));
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x4b0));
  *(undefined8 *)(param_1 + 0x498) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x490));
  *(undefined8 *)(param_1 + 0x478) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x470));
  *(undefined8 *)(param_1 + 0x458) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x438) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x430));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015d30
 */

undefined4 recovered_10015d30(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;

  *param_4 = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  recovered_100050c0(*(undefined8 *)(param_4 + 8));
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  uVar13 = 0;
  recovered_100050c0(0);
  lVar7 = 1;
  uVar12 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + -1 + lVar7);
    if (bVar1 != 0) {
      iVar11 = (int)uVar12;
      do {
        if (param_3 <= uVar12) {
          return 0;
        }
        bVar2 = *(byte *)(param_2 + uVar12);
        uVar5 = *(ulong *)(param_4 + 0x10);
        if (uVar5 == *(ulong *)(param_4 + 0x18)) {
          uVar10 = uVar5 * 2;
          if (uVar5 == 0) {
            uVar10 = 4;
          }
          if (uVar5 < uVar10) {
            lVar6 = recovered_10005060(uVar10 * 0xc);
            lVar3 = *(long *)(param_4 + 8);
            uVar5 = *(ulong *)(param_4 + 0x10);
            if (uVar5 != 0) {
              if (uVar5 == 1) {
                uVar8 = 0;
              }
              else {
                lVar9 = 0;
                uVar8 = 0;
                do {
                  *(undefined4 *)(lVar6 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar9);
                  *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
                  *(undefined8 *)(lVar6 + 0xc + lVar9) = *(undefined8 *)(lVar3 + 0xc + lVar9);
                  *(undefined4 *)(lVar6 + 0x14 + lVar9) = *(undefined4 *)(lVar3 + 0x14 + lVar9);
                  uVar8 = uVar8 + 2;
                  lVar9 = lVar9 + 0x18;
                } while ((uVar5 & 0xfffffffffffffffe) != uVar8);
              }
              if ((uVar5 & 1) != 0) {
                lVar9 = uVar8 * 0xc;
                *(undefined4 *)(lVar6 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar9);
                *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
              }
            }
            recovered_100050c0(lVar3);
            *(long *)(param_4 + 8) = lVar6;
            *(ulong *)(param_4 + 0x18) = uVar10;
            uVar5 = *(ulong *)(param_4 + 0x10);
          }
        }
        uVar12 = uVar12 + 1;
        lVar3 = *(long *)(param_4 + 8);
        *(uint *)(lVar3 + uVar5 * 0xc) = uVar13;
        *(int *)(lVar3 + 4 + uVar5 * 0xc) = (int)lVar7;
        *(uint *)(lVar3 + 8 + uVar5 * 0xc) = (uint)bVar2;
        *(ulong *)(param_4 + 0x10) = uVar5 + 1;
        uVar13 = uVar13 + 1;
      } while ((uint)bVar1 + iVar11 != (int)uVar12);
    }
    uVar4 = 1 << ((byte)lVar7 & 0x1f);
    if (uVar4 < uVar13) break;
    uVar13 = uVar13 * 2;
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x11) {
      *param_4 = uVar12 == param_3;
      return CONCAT31((int3)(uVar4 >> 8),uVar12 == param_3);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015f30
 */

void recovered_10015f30(long *param_1,undefined8 *param_2)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;

  uVar12 = param_1[1];
  if (uVar12 == param_1[2]) {
    uVar9 = 4;
    if (uVar12 != 0) {
      uVar9 = uVar12 * 2;
    }
    if (uVar12 < uVar9) {
      lVar6 = recovered_10005060(uVar9 << 6);
      if (param_1[1] != 0) {
        lVar13 = 0x30;
        uVar12 = 0;
        do {
          lVar7 = *param_1;
          *(undefined4 *)(lVar6 + -0x10 + lVar13) = *(undefined4 *)(lVar7 + -0x10 + lVar13);
          puVar1 = (undefined8 *)(lVar7 + -0x30 + lVar13);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          puVar1 = (undefined8 *)(lVar7 + -0x20 + lVar13);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + -0x20 + lVar13);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(lVar6 + -0x30 + lVar13);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          *(undefined8 *)(lVar6 + -8 + lVar13) = *(undefined8 *)(lVar7 + -8 + lVar13);
          uVar3 = ((undefined8 *)(lVar7 + lVar13))[1];
          *(undefined8 *)(lVar6 + lVar13) = *(undefined8 *)(lVar7 + lVar13);
          ((undefined8 *)(lVar6 + lVar13))[1] = uVar3;
          puVar1 = (undefined8 *)(lVar7 + -8 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar7 + 8 + lVar13) = 0;
          recovered_100050c0(0);
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 0x40;
        } while (uVar12 < (ulong)param_1[1]);
      }
      recovered_100050c0(*param_1);
      *param_1 = lVar6;
      param_1[2] = uVar9;
      uVar12 = param_1[1];
    }
  }
  lVar13 = *param_1;
  lVar7 = uVar12 * 0x40;
  lVar6 = lVar13 + lVar7;
  *(undefined4 *)(lVar13 + 0x20 + lVar7) = *(undefined4 *)(param_2 + 4);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar7);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar13 + lVar7) = uVar3;
  ((undefined8 *)(lVar13 + lVar7))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar13 + 0x28 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar13 + 0x38 + lVar7) = 0;
  lVar13 = param_2[6];
  if (lVar13 != 0) {
    lVar8 = recovered_10005060(lVar13);
    lVar7 = *(long *)(lVar6 + 0x28);
    uVar12 = *(ulong *)(lVar6 + 0x30);
    if (uVar12 != 0) {
      uVar9 = 0;
      if ((3 < uVar12) && (0x1f < (ulong)(lVar8 - lVar7))) {
        if (uVar12 < 0x20) {
          uVar10 = 0;
        }
        else {
          uVar9 = uVar12 & 0xffffffffffffffe0;
          uVar10 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar7 + uVar10))[1];
            puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar10);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            *(undefined8 *)(lVar8 + uVar10) = *(undefined8 *)(lVar7 + uVar10);
            ((undefined8 *)(lVar8 + uVar10))[1] = uVar3;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + uVar10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            uVar10 = uVar10 + 0x20;
          } while (uVar9 != uVar10);
          if (uVar12 == uVar9) goto LAB_1001614f;
          uVar10 = uVar9;
          if ((uVar12 & 0x1c) == 0) goto LAB_100160e5;
        }
        uVar9 = uVar12 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar8 + uVar10) = *(undefined4 *)(lVar7 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar12 == uVar9) goto LAB_1001614f;
      }
LAB_100160e5:
      uVar11 = uVar12 & 3;
      uVar10 = uVar9;
      if (uVar11 != 0) {
        do {
          *(undefined1 *)(lVar8 + uVar10) = *(undefined1 *)(lVar7 + uVar10);
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar9 - uVar12 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(lVar8 + uVar10) = *(undefined1 *)(lVar7 + uVar10);
          *(undefined1 *)(lVar8 + 1 + uVar10) = *(undefined1 *)(lVar7 + 1 + uVar10);
          *(undefined1 *)(lVar8 + 2 + uVar10) = *(undefined1 *)(lVar7 + 2 + uVar10);
          *(undefined1 *)(lVar8 + 3 + uVar10) = *(undefined1 *)(lVar7 + 3 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar12 != uVar10);
      }
    }
LAB_1001614f:
    recovered_100050c0(lVar7);
    *(long *)(lVar6 + 0x28) = lVar8;
    *(long *)(lVar6 + 0x38) = lVar13;
    if (param_2[6] != 0) {
      uVar12 = 0;
      do {
        *(undefined1 *)(*(long *)(lVar6 + 0x28) + uVar12) = *(undefined1 *)(param_2[5] + uVar12);
        uVar12 = uVar12 + 1;
        uVar9 = param_2[6];
      } while (uVar12 < uVar9);
      goto LAB_1001618f;
    }
  }
  uVar9 = 0;
LAB_1001618f:
  *(ulong *)(lVar6 + 0x30) = uVar9;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100161b0
 */

void recovered_100161b0(long *param_1,undefined4 *param_2)

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
  if (uVar8 != param_1[2]) goto LAB_100162ce;
  uVar12 = 4;
  if (uVar8 != 0) {
    uVar12 = uVar8 * 2;
  }
  if (uVar12 <= uVar8) goto LAB_100162ce;
  lVar7 = recovered_10005060(uVar12 * 4);
  lVar3 = *param_1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = 0;
    if ((7 < uVar8) && (0x1f < (ulong)(lVar7 - lVar3))) {
      uVar9 = uVar8 & 0xfffffffffffffff8;
      uVar10 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + uVar10 * 4);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 4);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar7 + uVar10 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar10 * 4);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        uVar10 = uVar10 + 8;
      } while (uVar9 != uVar10);
      if (uVar8 == uVar9) goto LAB_100162bb;
    }
    uVar11 = uVar8 & 3;
    uVar10 = uVar9;
    if (uVar11 != 0) {
      do {
        *(undefined4 *)(lVar7 + uVar10 * 4) = *(undefined4 *)(lVar3 + uVar10 * 4);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar9 - uVar8 < 0xfffffffffffffffd) {
      do {
        *(undefined4 *)(lVar7 + uVar10 * 4) = *(undefined4 *)(lVar3 + uVar10 * 4);
        *(undefined4 *)(lVar7 + 4 + uVar10 * 4) = *(undefined4 *)(lVar3 + 4 + uVar10 * 4);
        *(undefined4 *)(lVar7 + 8 + uVar10 * 4) = *(undefined4 *)(lVar3 + 8 + uVar10 * 4);
        *(undefined4 *)(lVar7 + 0xc + uVar10 * 4) = *(undefined4 *)(lVar3 + 0xc + uVar10 * 4);
        uVar10 = uVar10 + 4;
      } while (uVar8 != uVar10);
    }
  }
LAB_100162bb:
  recovered_100050c0(lVar3);
  *param_1 = lVar7;
  param_1[2] = uVar12;
  uVar8 = param_1[1];
LAB_100162ce:
  *(undefined4 *)(*param_1 + uVar8 * 4) = *param_2;
  param_1[1] = uVar8 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100162f0
 */

undefined4 recovered_100162f0(long param_1,ulong param_2,ulong *param_3,long param_4)

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
            lVar9 = recovered_10005060(uVar10);
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
            recovered_100050c0(lVar3);
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
          recovered_10000e30(*(void **)(param_4 + 0x18),puVar1 + 1,uVar14);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100165a0
 */

undefined8 recovered_100165a0(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016600
 */

void recovered_10016600(long *param_1,undefined8 *param_2)

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
  lVar7 = recovered_10005060(uVar12 * 8);
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
  recovered_100050c0(lVar3);
  *param_1 = lVar7;
  param_1[2] = uVar12;
  uVar8 = param_1[1];
LAB_10016722:
  *(undefined8 *)(*param_1 + uVar8 * 8) = *param_2;
  param_1[1] = uVar8 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016740
 */

void recovered_10016740(long *param_1,ulong param_2,undefined1 *param_3)

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
  lVar6 = recovered_10005060(param_2);
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
  recovered_100050c0(lVar2);
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


#undef DAT_1001d4e0
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
#undef DAT_1001d520
#define DAT_1001d520 (*(float *)(((uintptr_t)pf_module_state + 0x11dU)))
#undef DAT_1001d740
#define DAT_1001d740 (*(float *)(((uintptr_t)pf_module_state + 0x33dU)))
#define local_50 (*(ulong *)(frame + 16))
#define local_48 (*(float (*)[2])(frame + 24))
#define local_40 (*(long *)(frame + 32))
#define local_38 (*(ulong *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100168d0
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100168d0(long param_1,ulong param_2,long param_3,ulong param_4,uint *param_5)

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
      recovered_10000e30(local_48,&local_50,4);
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
    uVar2 = recovered_100165a0(param_1,param_2,&local_50,uVar1,(ulong *)local_48);
    if ((char)uVar2 != '\0') {
      return uVar4 != 0 && (param_5[1] != 0 && *param_5 != 0);
    }
  }
  return false;
}

#undef DAT_1001d4e0
#undef DAT_1001d520
#undef DAT_1001d740
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1001dbb8
#define DAT_1001dbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b5U)))
#undef DAT_1001e008
#define DAT_1001e008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc05U)))
#undef LAB_100173d4
#define LAB_100173d4 (*(uint8_t *)(0x100173d4U))
#define auStack_1b8 (*(undefined1 (*)[8])(frame + 24))
#define uStack_90 (*(ulong *)(frame + 320))
#define uStack_32 (*(undefined1 *)(frame + 414))
#define uStack_31 (*(undefined1 *)(frame + 415))
#define local_1b0 (*(undefined8 *)(frame + 32))
#define local_1a8 (*(undefined4 *)(frame + 40))
#define local_190 (*(code * *)(frame + 64))
#define local_188 (*(undefined * *)(frame + 72))
#define local_180 (*(undefined1 * *)(frame + 80))
#define local_178 (*(undefined1 * *)(frame + 88))
#define local_170 (*(undefined1 * *)(frame + 96))
#define local_158 (*(ulong *)(frame + 120))
#define local_150 (*(ulong *)(frame + 128))
#define local_148 (*(ulong *)(frame + 136))
#define local_140 (*(long *)(frame + 144))
#define local_138 (*(ulong *)(frame + 152))
#define local_130 (*(ulong *)(frame + 160))
#define local_128 (*(long *)(frame + 168))
#define local_120 (*(ulong *)(frame + 176))
#define local_118 (*(ulong *)(frame + 184))
#define local_110 (*(long *)(frame + 192))
#define local_108 (*(ulong *)(frame + 200))
#define local_f8 (*(ulong *)(frame + 216))
#define local_f0 (*(long *)(frame + 224))
#define local_e8 (*(ulong *)(frame + 232))
#define local_e0 (*(ulong *)(frame + 240))
#define local_d8 (*(ulong *)(frame + 248))
#define local_d0 (*(ulong *)(frame + 256))
#define local_c4 (*(uint *)(frame + 268))
#define local_c0 (*(long * *)(frame + 272))
#define local_b8 (*(uint * *)(frame + 280))
#define local_b0 (*(ulong *)(frame + 288))
#define local_a8 (*(ulong *)(frame + 296))
#define local_a0 (*(ulong *)(frame + 304))
#define local_98 (*(ulong *)(frame + 312))
#define local_88 (*(undefined8 *)(frame + 328))
#define local_80 (*(ulong *)(frame + 336))
#define local_78 (*(ulong *)(frame + 344))
#define local_70 (*(ulong *)(frame + 352))
#define local_64 (*(uint *)(frame + 364))
#define local_60 (*(ulong *)(frame + 368))
#define local_58 (*(ulong *)(frame + 376))
#define local_50 (*(long *)(frame + 384))
#define local_48 (*(long *)(frame + 392))
#define local_40 (*(ulong *)(frame + 400))
#define local_34 (*(undefined1 (*)[2])(frame + 412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016be0
 */

ulong recovered_10016be0(long param_1,ulong param_2,long param_3,uint *param_4,long *param_5)

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
  local_190 = recovered_10005010;
  local_188 = &DAT_1001e008;
  local_178 = &LAB_100173d4;
  local_c0 = param_5;
  local_50 = param_3;
  local_48 = param_1;
  recovered_10005590(&local_1b0);
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
                recovered_10017560(&local_110,uVar8);
                if (uVar8 != 0) {
                  lVar18 = 0;
                  do {
                    uVar5 = recovered_100165a0(local_48,local_70,&local_118,
                                               *(uint *)(local_50 + 0x10),
                                               (ulong *)(local_110 + lVar18));
                    if (((char)uVar5 == '\0') || (*(long *)(local_110 + lVar18) == 0))
                    goto LAB_100173b6;
                    lVar18 = lVar18 + 8;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                local_f8 = 0;
                uVar5 = recovered_100165a0(local_48,local_70,&local_118,*(uint *)(local_50 + 0x10),
                                           &local_f8);
                puVar9 = (uint *)0x0;
                if (((char)uVar5 != '\0') && (local_f8 == 0)) {
                  local_b8 = param_4;
                  if ((ulong)param_4[1] * (ulong)*param_4 >> 0x3e == 0) {
                    local_98 = local_98 & 0xffffffffffffff00;
                    local_1a8 = 1;
                    recovered_10015600(local_c0,(ulong)param_4[1] * (ulong)*param_4 * 4,
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
                                uVar8 = recovered_10017c90((undefined1 *)(uVar11 + local_48),uVar8,
                                                           (long *)&local_98);
                                if (((byte)uVar8 & uStack_90 == local_40) == 1) goto LAB_1001718b;
                              }
LAB_1001739f:
                              uStack_90 = 0;
                              recovered_100050c0(local_98);
                              goto LAB_100173b6;
                            }
                            if (iVar3 == 1) {
                              local_1a8 = 3;
                              uVar8 = recovered_100176e0(uVar11 + local_48,uVar8,
                                                         uVar10 * (int)local_80,local_64,
                                                         (long *)&local_98);
                              if ((char)uVar8 == '\0') goto LAB_1001739f;
                            }
                            else {
                              if ((iVar3 != 0) || (uVar6 < uVar16)) goto LAB_1001739f;
                              local_1a8 = 2;
                              recovered_10017e80((long *)&local_98,0,
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
                                    recovered_10000e30((void *)((*puVar9 * local_40 +
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
                            recovered_100050c0(local_98);
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
                recovered_100050c0(local_110);
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
  recovered_100055b0(&local_1b0);
  return (ulong)puVar9 & 0xffffffff;
}

#undef DAT_1001dbb8
#undef DAT_1001e008
#undef LAB_100173d4
#undef auStack_1b8
#undef uStack_90
#undef uStack_32
#undef uStack_31
#undef local_1b0
#undef local_1a8
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017470
 */

void recovered_10017470(byte *param_1,byte *param_2)

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
  recovered_10000e30(param_1,param_2,4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017560
 */

void recovered_10017560(long *param_1,ulong param_2)

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
  lVar7 = recovered_10005060(param_2 * 8);
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
  recovered_100050c0(lVar3);
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


#define local_50 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100176e0
 */

ulong recovered_100176e0(long param_1,ulong param_2,uint param_3,uint param_4,long *param_5)

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
  lVar8 = recovered_10005060(uVar19);
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
  recovered_100050c0(lVar17);
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

#undef DAT_1001e018
#define DAT_1001e018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc15U)))
#undef LAB_10017e34
#define LAB_10017e34 (*(uint8_t *)(0x10017e34U))
#define local_a8 (*(undefined8 *)(frame + 24))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_88 (*(code * *)(frame + 56))
#define local_80 (*(undefined * *)(frame + 64))
#define local_78 (*(undefined1 * *)(frame + 72))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_50 (*(long *)(frame + 112))
#define local_48 (*(ulong *)(frame + 120))
#define local_40 (*(ulong *)(frame + 128))
#define local_38 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017c90
 */

ulong recovered_10017c90(undefined1 *param_1,ulong param_2,long *param_3)

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
  local_88 = recovered_10005010;
  local_80 = &DAT_1001e018;
  local_70 = &LAB_10017e34;
  recovered_10005590(&local_a8);
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
  local_38 = recovered_10005060(uVar5);
  uVar7 = 0;
  recovered_100050c0(0);
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
  uVar7 = recovered_10018160(&local_50,param_3);
  uVar7 = uVar7 & 0xffffffff;
  recovered_100050c0(local_38);
LAB_10017e17:
  recovered_100055b0(&local_a8);
  return uVar7;
}

#undef DAT_1001e018
#undef LAB_10017e34
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017e80
 */

long recovered_10017e80(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
    lVar5 = recovered_10005060(uVar6);
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
    recovered_100050c0(lVar12);
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


#undef DAT_1001da38
#define DAT_1001da38 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x635U)))
#undef DAT_1001e020
#define DAT_1001e020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1dU)))
#undef DAT_1001f5a0
#define DAT_1001f5a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219dU)))
#undef DAT_1001f608
#define DAT_1001f608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2205U)))
#undef LAB_100197d4
#define LAB_100197d4 (*(uint8_t *)(0x100197d4U))
#define local_2b8 (*(uint (*)[16])(frame + 24))
#define local_278 (*(undefined8 *)(frame + 88))
#define local_270 (*(undefined5 *)(frame + 96))
#define local_258 (*(uint (*)[16])(frame + 120))
#define local_218 (*(long *)(frame + 184))
#define local_210 (*(undefined5 *)(frame + 192))
#define local_1f8 (*(uint (*)[16])(frame + 216))
#define local_1b8 (*(undefined8 *)(frame + 280))
#define local_198 (*(ulong *)(frame + 312))
#define local_190 (*(long *)(frame + 320))
#define local_188 (*(undefined8 * *)(frame + 328))
#define local_180 (*(undefined8 *)(frame + 336))
#define local_178 (*(undefined8 *)(frame + 344))
#define local_170 (*(long (*)[4])(frame + 352))
#define local_150 (*(long *)(frame + 384))
#define local_140 (*(undefined8 *)(frame + 400))
#define local_134 (*(uint *)(frame + 412))
#define local_130 (*(undefined4 * *)(frame + 416))
#define uStack_26b (*(undefined3 *)(frame + 101))
#define local_128 (*(undefined8 *)(frame + 424))
#define uStack_268 (*(undefined5 *)(frame + 104))
#define local_120 (*(undefined4 *)(frame + 432))
#define uStack_263 (*(undefined8 *)(frame + 109))
#define local_108 (*(code * *)(frame + 456))
#define local_100 (*(undefined * *)(frame + 464))
#define local_f8 (*(undefined1 * *)(frame + 472))
#define local_f0 (*(undefined1 * *)(frame + 480))
#define uStack_20b (*(undefined3 *)(frame + 197))
#define local_e8 (*(undefined1 * *)(frame + 488))
#define uStack_208 (*(undefined5 *)(frame + 200))
#define local_d0 (*(long * *)(frame + 512))
#define uStack_203 (*(undefined8 *)(frame + 205))
#define local_c8 (*(ulong *)(frame + 520))
#define local_c0 (*(long *)(frame + 528))
#define local_b8 (*(undefined4 * *)(frame + 536))
#define uStack_1b0 (*(undefined5 *)(frame + 288))
#define local_b0 (*(long * *)(frame + 544))
#define uStack_1ab (*(undefined3 *)(frame + 293))
#define local_a8 (*(ulong *)(frame + 552))
#define uStack_1a8 (*(undefined5 *)(frame + 296))
#define local_9c (*(uint *)(frame + 564))
#define uStack_1a3 (*(undefined3 *)(frame + 301))
#define local_98 (*(undefined4 * *)(frame + 568))
#define uStack_1a0 (*(undefined4 *)(frame + 304))
#define local_90 (*(undefined4 * *)(frame + 576))
#define uStack_19c (*(undefined1 *)(frame + 308))
#define local_88 (*(undefined4 * *)(frame + 584))
#define local_80 (*(undefined8 * *)(frame + 592))
#define local_78 (*(ulong *)(frame + 600))
#define local_70 (*(undefined8 *)(frame + 608))
#define local_68 (*(ulong *)(frame + 616))
#define local_60 (*(byte * *)(frame + 624))
#define local_58 (*(ulong *)(frame + 632))
#define lStack_148 (*(long *)(frame + 392))
#define local_50 (*(ulong *)(frame + 640))
#define local_40 (*(uint *)(frame + 656))
#define local_38 (*(undefined4 * *)(frame + 664))
#define uStack_48 (*(ulong *)(frame + 648))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018160
 */

ulong recovered_10018160(long *param_1,long *param_2)

{
  unsigned char frame[752] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  byte bVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  char cVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  long *plVar27;
  bool bVar28;

  local_f8 = (undefined1 *)((long)(uintptr_t)(frame + 720) + -8);
  local_e8 = (undefined1 *)local_2b8;
  param_2[1] = 0;
  uVar24 = param_1[1];
  local_108 = recovered_10005010;
  local_100 = &DAT_1001e020;
  local_f0 = &LAB_100197d4;
  local_b0 = param_2;
  recovered_10005590(&local_128);
  uVar15 = local_40;
  if (5 < uVar24) {
    pbVar2 = (byte *)*param_1;
    if ((*pbVar2 & 0xf) == 8) {
      uVar18 = 0;
      if (((pbVar2[1] & 0x20) != 0) ||
         (uVar1 = CONCAT11(*pbVar2,pbVar2[1]), uVar15 = (uint)uVar1 * 0x843 >> 0x10,
         (ushort)((short)(((uVar1 - uVar15 & 0xffff) >> 1) + uVar15 >> 4) * -0x1f + uVar1) != 0))
      goto switchD_1001832c_caseD_3;
      local_58 = uVar24 - 6;
      local_60 = pbVar2 + 2;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_134 = 5;
      plVar27 = local_b0;
      local_d0 = param_1;
      do {
        if (local_40 == 0) {
          uVar15 = local_40;
          if (local_58 <= local_50) goto LAB_10019795;
          uVar24 = local_50 + 1;
          local_170[3] = local_60[local_50] | uStack_48;
          uStack_48 = (ulong)local_170[3] >> 3;
          local_40 = local_134;
          uVar18 = 0;
          local_50 = uVar24;
          switch((uintptr_t)((uint)((ulong)local_170[3] >> 1) & 3)) {
          case 1:
            goto switchD_1001832c_caseD_1;
          case 2:
            goto switchD_1001832c_caseD_2;
          case 3:
            goto switchD_1001832c_caseD_3;
          }
switchD_1001832c_caseD_0:
          uVar24 = uStack_48 >> ((byte)local_40 & 7);
          uVar15 = local_40 & 0xfffffff8;
          bVar13 = (byte)(uVar24 >> 0x10);
          uVar19 = (uint)(uVar24 >> 8);
          if (local_40 < 8) {
            uStack_48 = uVar24;
            if (local_58 <= local_50) goto LAB_10019795;
            uVar6 = (uint)uVar24 & 0xff | (uint)local_60[local_50];
            local_40 = 0;
            local_50 = local_50 + 1;
LAB_10019138:
            uStack_48 = uVar24 >> 8;
            uVar18 = 0;
            if (local_58 <= local_50) goto switchD_1001832c_caseD_3;
            uVar19 = local_60[local_50] | uVar19;
            local_40 = 0;
            local_50 = local_50 + 1;
LAB_1001916e:
            uStack_48 = uVar24 >> 0x10;
            uVar15 = local_40;
            if (local_58 <= local_50) goto LAB_10019795;
            uVar20 = (uint)(bVar13 | local_60[local_50]);
            local_40 = (uint)uVar18;
            local_50 = local_50 + 1;
LAB_1001919f:
            uStack_48 = uVar24 >> 0x18;
            uVar15 = local_40;
            if (local_58 <= local_50) goto LAB_10019795;
            uVar25 = uStack_48 | (ulong)local_60[local_50] << ((byte)uVar18 & 0x3f);
            local_50 = local_50 + 1;
          }
          else {
            uVar6 = (uint)(byte)uVar24;
            local_40 = uVar15 - 8;
            if (local_40 == 0) goto LAB_10019138;
            local_40 = uVar15 - 0x10;
            uVar18 = (ulong)local_40;
            if (local_40 == 0) goto LAB_1001916e;
            uVar25 = uVar24 >> 0x18;
            uVar20 = (uint)bVar13;
            local_40 = uVar15 - 0x18;
            uVar18 = (ulong)local_40;
            if (local_40 == 0) goto LAB_1001919f;
            uVar18 = (ulong)(uVar15 - 0x20);
          }
          uStack_48 = uVar25 >> 8;
          local_40 = (uint)uVar18;
          uVar6 = (uVar19 & 0xff) << 8 | uVar6;
          uVar15 = local_40;
          if (((((uint)uVar25 & 0xff) << 8 | uVar20) ^ uVar6) != 0xffff) goto LAB_10019795;
          if (uVar6 != 0) {
            uVar19 = 0;
            do {
              if (local_40 < 8) {
                uVar15 = local_40;
                if (local_58 <= local_50) goto LAB_10019795;
                bVar13 = (byte)local_40;
                local_40 = local_40 | 8;
                uVar24 = (ulong)local_60[local_50] << (bVar13 & 0x3f) | uStack_48;
                local_50 = local_50 + 1;
              }
              else {
                uVar24 = uStack_48;
              }
              uStack_48 = uVar24 >> 8;
              local_40 = local_40 - 8;
              uVar25 = plVar27[1];
              if (uVar25 == plVar27[2]) {
                uVar18 = uVar25 * 2;
                if (uVar25 == 0) {
                  uVar18 = 4;
                }
                if (uVar25 < uVar18) {
                  local_120 = 0xffffffff;
                  lVar12 = recovered_10005060(uVar18);
                  lVar23 = *plVar27;
                  uVar25 = plVar27[1];
                  if (uVar25 != 0) {
                    if (uVar25 < 4) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = 0;
                      if (0x1f < (ulong)(lVar12 - lVar23)) {
                        if (uVar25 < 0x20) {
                          uVar16 = 0;
                        }
                        else {
                          uVar14 = uVar25 & 0xffffffffffffffe0;
                          uVar16 = 0;
                          do {
                            uVar10 = ((undefined8 *)(lVar23 + uVar16))[1];
                            puVar22 = (undefined8 *)(lVar23 + 0x10 + uVar16);
                            uVar4 = *puVar22;
                            uVar5 = puVar22[1];
                            *(undefined8 *)(lVar12 + uVar16) = *(undefined8 *)(lVar23 + uVar16);
                            ((undefined8 *)(lVar12 + uVar16))[1] = uVar10;
                            puVar22 = (undefined8 *)(lVar12 + 0x10 + uVar16);
                            *puVar22 = uVar4;
                            puVar22[1] = uVar5;
                            uVar16 = uVar16 + 0x20;
                          } while (uVar14 != uVar16);
                          if (uVar25 == uVar14) goto LAB_10019210;
                          uVar16 = uVar14;
                          if ((uVar25 & 0x1c) == 0) goto LAB_10019369;
                        }
                        uVar14 = uVar25 & 0xfffffffffffffffc;
                        do {
                          *(undefined4 *)(lVar12 + uVar16) = *(undefined4 *)(lVar23 + uVar16);
                          uVar16 = uVar16 + 4;
                        } while (uVar14 != uVar16);
                        if (uVar25 == uVar14) goto LAB_10019210;
                      }
                    }
LAB_10019369:
                    uVar21 = uVar25 & 3;
                    uVar16 = uVar14;
                    if (uVar21 != 0) {
                      do {
                        *(undefined1 *)(lVar12 + uVar16) = *(undefined1 *)(lVar23 + uVar16);
                        uVar16 = uVar16 + 1;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    if (uVar14 - uVar25 < 0xfffffffffffffffd) {
                      do {
                        *(undefined1 *)(lVar12 + uVar16) = *(undefined1 *)(lVar23 + uVar16);
                        *(undefined1 *)(lVar12 + 1 + uVar16) = *(undefined1 *)(lVar23 + 1 + uVar16);
                        *(undefined1 *)(lVar12 + 2 + uVar16) = *(undefined1 *)(lVar23 + 2 + uVar16);
                        *(undefined1 *)(lVar12 + 3 + uVar16) = *(undefined1 *)(lVar23 + 3 + uVar16);
                        uVar16 = uVar16 + 4;
                      } while (uVar25 != uVar16);
                    }
                  }
LAB_10019210:
                  recovered_100050c0(lVar23);
                  *local_b0 = lVar12;
                  local_b0[2] = uVar18;
                  uVar25 = local_b0[1];
                  plVar27 = local_b0;
                }
              }
              *(char *)(*plVar27 + uVar25) = (char)uVar24;
              plVar27[1] = plVar27[1] + 1;
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar6);
            param_1 = local_d0;
          }
        }
        else {
          local_170[3] = uStack_48;
          uVar24 = uStack_48 >> 1;
          uVar15 = local_40 - 1;
          if (local_40 < 3) {
            uStack_48 = uVar24;
            if (local_58 <= local_50) goto LAB_10019795;
            uVar24 = uVar24 | (ulong)local_60[local_50] << ((byte)uVar15 & 0x3f);
            uVar15 = local_40 + 7;
            local_50 = local_50 + 1;
          }
          uStack_48 = uVar24 >> 2;
          local_40 = uVar15 - 2;
          uVar18 = 0;
          switch((uintptr_t)((uint)uVar24 & 3)) {
          case 0:
            goto switchD_1001832c_caseD_0;
          case 1:
switchD_1001832c_caseD_1:
            uVar18 = 0;
            if (DAT_1001f5a0 == '\0') {
              uVar15 = recovered_10005350((uint *)&DAT_1001f5a0);
              if (uVar15 != 0) {
                local_120 = 1;
                recovered_1001a040();
                recovered_10005340();
                recovered_10005360((byte *)&DAT_1001f5a0);
                param_1 = local_d0;
                plVar27 = local_b0;
              }
            }
            if (DAT_1001f608 == '\0') {
              uVar15 = recovered_10005350((uint *)&DAT_1001f608);
              if (uVar15 != 0) {
                local_120 = 2;
                recovered_1001aac0();
                recovered_10005340();
                recovered_10005360((byte *)&DAT_1001f608);
                param_1 = local_d0;
                plVar27 = local_b0;
              }
            }
            local_120 = 0xffffffff;
            uVar10 = recovered_100199b0((long *)&local_60,((uintptr_t)pf_module_state+0x213dU),((uintptr_t)pf_module_state+0x21a5U),plVar27);
            uVar15 = local_40;
            if ((char)uVar10 == '\0') goto LAB_10019795;
            break;
          case 2:
switchD_1001832c_caseD_2:
            uStack_268 = 0;
            uStack_263 = 0;
            local_278 = 0;
            local_270 = 0;
            uStack_26b = 0;
            local_2b8[0xc] = 0;
            local_2b8[0xd] = 0;
            local_2b8[0xe] = 0;
            local_2b8[0xf] = 0;
            local_2b8[8] = 0;
            local_2b8[9] = 0;
            local_2b8[10] = 0;
            local_2b8[0xb] = 0;
            local_2b8[4] = 0;
            local_2b8[5] = 0;
            local_2b8[6] = 0;
            local_2b8[7] = 0;
            local_2b8[0] = 0;
            local_2b8[1] = 0;
            local_2b8[2] = 0;
            local_2b8[3] = 0;
            uStack_1a8 = 0;
            uStack_1a3 = 0;
            uStack_1a0 = 0;
            uStack_19c = 0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            uStack_1ab = 0;
            local_1f8[0xc] = 0;
            local_1f8[0xd] = 0;
            local_1f8[0xe] = 0;
            local_1f8[0xf] = 0;
            local_1f8[8] = 0;
            local_1f8[9] = 0;
            local_1f8[10] = 0;
            local_1f8[0xb] = 0;
            local_1f8[4] = 0;
            local_1f8[5] = 0;
            local_1f8[6] = 0;
            local_1f8[7] = 0;
            local_1f8[0] = 0;
            local_1f8[1] = 0;
            local_1f8[2] = 0;
            local_1f8[3] = 0;
            if (local_40 < 5) {
              uVar24 = uStack_48;
              uVar15 = local_40;
              if (local_50 < local_58) {
                uStack_48 = uStack_48 | (ulong)local_60[local_50] << ((byte)local_40 & 0x3f);
                local_40 = local_40 | 8;
                local_50 = local_50 + 1;
                goto LAB_1001845a;
              }
            }
            else {
LAB_1001845a:
              uVar18 = uStack_48 >> 5;
              uVar19 = local_40 - 5;
              if (uVar19 < 5) {
                uVar24 = uVar18;
                uVar15 = uVar19;
                if (local_58 <= local_50) goto LAB_1001977d;
                uVar18 = uVar18 | (ulong)local_60[local_50] << ((byte)uVar19 & 0x3f);
                uVar19 = local_40 + 3;
                local_50 = local_50 + 1;
              }
              uVar24 = uVar18 >> 5;
              uVar15 = uVar19 - 5;
              local_78 = uVar18;
              local_68 = uStack_48;
              if (uVar15 < 4) {
                if (local_58 <= local_50) goto LAB_1001977d;
                uVar24 = uVar24 | (ulong)local_60[local_50] << ((byte)uVar15 & 0x3f);
                uVar15 = uVar19 + 3;
                local_50 = local_50 + 1;
              }
              local_40 = uVar15 - 4;
              local_120 = 3;
              local_70 = uVar24;
              uStack_48 = uVar24 >> 4;
              local_80 = (undefined8 *)recovered_10005060(0x4c);
              uVar18 = (ulong)((uint)local_68 & 0x1f);
              uVar15 = (uint)local_78;
              recovered_100050c0(0);
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
              local_130 = (undefined4 *)(uVar18 + 0x101);
              local_180 = 0x13;
              lVar23 = 0;
              uVar24 = local_50;
              do {
                uVar25 = uVar24;
                if (local_40 < 3) {
                  if (local_58 <= uVar24) goto LAB_10019774;
                  uVar25 = uVar24 + 1;
                  uStack_48 = uStack_48 | (ulong)local_60[uVar24] << ((byte)local_40 & 0x3f);
                  local_40 = local_40 | 8;
                  local_50 = uVar25;
                }
                uVar19 = (uint)uStack_48;
                uStack_48 = uStack_48 >> 3;
                local_40 = local_40 - 3;
                *(uint *)((long)local_80 + (ulong)*(uint *)((long)&DAT_1001da38 + lVar23) * 4) =
                     uVar19 & 7;
                lVar23 = lVar23 + 4;
                uVar24 = uVar25;
              } while ((ulong)((uint)local_70 & 0xf) * 4 + 0x10 != lVar23);
              uStack_208 = 0;
              uStack_203 = 0;
              local_218 = 0;
              local_210 = 0;
              uStack_20b = 0;
              local_258[0xc] = 0;
              local_258[0xd] = 0;
              local_258[0xe] = 0;
              local_258[0xf] = 0;
              local_258[8] = 0;
              local_258[9] = 0;
              local_258[10] = 0;
              local_258[0xb] = 0;
              local_258[4] = 0;
              local_258[5] = 0;
              local_258[6] = 0;
              local_258[7] = 0;
              local_258[0] = 0;
              local_258[1] = 0;
              local_258[2] = 0;
              local_258[3] = 0;
              local_120 = 4;
              local_78 = (ulong)(uVar15 & 0x1f);
              local_68 = uVar18;
              uVar24 = recovered_1001a620((long *)&local_188,local_258,0);
              if ((char)uVar24 == '\0') {
                recovered_100050c0(local_218);
LAB_10019774:
                puVar22 = local_80;
              }
              else {
                local_78 = local_68 + local_78 + 0x102;
                local_120 = 5;
                puVar11 = (undefined4 *)recovered_10005060((ulong)(uint)((int)local_78 * 4));
                recovered_100050c0(0);
                if (PF_PART1(uStack_203, 7) == '\x01') {
                  local_190 = local_218;
                  local_198 = CONCAT35(uStack_20b,local_210);
                  local_68 = 0;
                  uVar24 = local_78;
                  do {
                    local_70 = uVar24;
                    local_38 = puVar11;
                    if (PF_PART4(uStack_203, 3) == 0) goto LAB_100195fd;
                    uVar25 = 1;
                    uVar15 = 0;
                    lVar23 = 0;
                    iVar8 = 0;
                    uVar18 = local_50;
                    while( true ) {
                      if (local_40 == 0) {
                        if (local_58 <= uVar18) goto LAB_100195fd;
                        uVar14 = uVar18 + 1;
                        local_50 = uVar14;
                        uStack_48 = uStack_48 | local_60[uVar18];
                        uVar19 = 8;
                      }
                      else {
                        uVar14 = uVar18;
                        uVar19 = local_40;
                      }
                      uVar15 = (uint)uStack_48 & 1 | uVar15;
                      uVar18 = uStack_48 >> 1;
                      uStack_48 = uVar18;
                      local_40 = uVar19 - 1;
                      uVar6 = local_258[uVar25] + iVar8;
                      if (uVar15 < uVar6) break;
                      lVar23 = lVar23 + (ulong)local_258[uVar25];
                      iVar8 = uVar6 * 2;
                      uVar15 = uVar15 * 2;
                      uVar19 = (int)uVar25 + 1;
                      uVar25 = (ulong)uVar19;
                      uVar18 = uVar14;
                      if (PF_PART4(uStack_203, 3) < uVar19) goto LAB_100195fd;
                    }
                    uVar25 = lVar23 + (ulong)(uVar15 - iVar8);
                    if (local_198 <= uVar25) goto LAB_100195fd;
                    uVar1 = *(ushort *)(local_190 + uVar25 * 2);
                    uVar15 = (uint)uVar1;
                    if (uVar1 < 0x10) {
                      uVar25 = uVar24;
                      uVar18 = local_68;
                      if (local_68 == uVar24) {
                        uVar14 = local_68 * 2;
                        if (local_68 == 0) {
                          uVar14 = 4;
                        }
                        uVar25 = local_68;
                        if (local_68 < uVar14) {
                          local_70 = CONCAT44((int)(uVar24 >> 0x20),uVar15);
                          local_120 = 6;
                          local_a8 = uVar14;
                          puVar11 = (undefined4 *)recovered_10005060(uVar14 * 4);
                          uVar18 = local_68;
                          if (local_68 != 0) {
                            if (local_68 < 8) {
                              uVar24 = 0;
                            }
                            else {
                              uVar24 = 0;
                              if (0x1f < (ulong)((long)puVar11 - (long)local_38)) {
                                uVar24 = local_68 & 0xfffffffffffffff8;
                                uVar25 = 0;
                                do {
                                  uVar10 = *(undefined8 *)((long)(local_38 + uVar25) + 8);
                                  uVar4 = *(undefined8 *)(local_38 + uVar25 + 4);
                                  uVar5 = *(undefined8 *)((long)(local_38 + uVar25 + 4) + 8);
                                  *(undefined8 *)(puVar11 + uVar25) =
                                       *(undefined8 *)(local_38 + uVar25);
                                  *(undefined8 *)((long)(puVar11 + uVar25) + 8) = uVar10;
                                  *(undefined8 *)(puVar11 + uVar25 + 4) = uVar4;
                                  *(undefined8 *)((long)(puVar11 + uVar25 + 4) + 8) = uVar5;
                                  uVar25 = uVar25 + 8;
                                } while (uVar24 != uVar25);
                                if (local_68 == uVar24) goto LAB_10018f96;
                              }
                            }
                            uVar14 = local_68 & 3;
                            uVar25 = uVar24;
                            if (uVar14 != 0) {
                              do {
                                puVar11[uVar25] = local_38[uVar25];
                                uVar25 = uVar25 + 1;
                                uVar14 = uVar14 - 1;
                              } while (uVar14 != 0);
                            }
                            if (uVar24 - local_68 < 0xfffffffffffffffd) {
                              do {
                                puVar11[uVar25] = local_38[uVar25];
                                puVar11[uVar25 + 1] = local_38[uVar25 + 1];
                                puVar11[uVar25 + 2] = local_38[uVar25 + 2];
                                puVar11[uVar25 + 3] = local_38[uVar25 + 3];
                                uVar25 = uVar25 + 4;
                              } while (local_68 != uVar25);
                            }
                          }
LAB_10018f96:
                          recovered_100050c0(local_38);
                          uVar25 = local_a8;
                          uVar15 = (uint)local_70;
                        }
                      }
                      uVar24 = uVar25;
                      puVar11[uVar18] = uVar15;
                      local_68 = uVar18 + 1;
                      uVar25 = local_78;
                    }
                    else {
                      bVar13 = (byte)local_40;
                      uVar25 = local_78;
                      if (uVar1 == 0x12) {
                        if (uVar19 < 8) {
                          if (local_58 <= uVar14) goto LAB_100195fd;
                          local_50 = uVar14 + 1;
                          uVar18 = uVar18 | (ulong)local_60[uVar14] << (bVar13 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar18 >> 7;
                        local_40 = local_40 - 7;
                        if (local_68 < local_78) {
                          uVar18 = (ulong)(((uint)uVar18 & 0x7f) + 0xb);
                          local_c0 = local_68 - 1;
                          uVar14 = 0;
                          uVar15 = 0;
                          local_a8 = uVar18;
                          uVar16 = local_68;
                          do {
                            local_98 = puVar11;
                            if (uVar16 == uVar24) {
                              uVar21 = uVar16 * 2;
                              if (uVar16 == 0) {
                                uVar21 = 4;
                              }
                              uVar24 = uVar16;
                              if (uVar16 < uVar21) {
                                local_120 = 9;
                                local_c8 = uVar21;
                                local_9c = uVar15;
                                local_70 = uVar14;
                                local_68 = uVar16;
                                puVar11 = (undefined4 *)recovered_10005060(uVar21 * 4);
                                uVar16 = local_68;
                                uVar14 = local_70;
                                uVar18 = local_a8;
                                if (local_68 != 0) {
                                  if (local_68 < 8) {
                                    uVar24 = 0;
                                  }
                                  else {
                                    uVar24 = 0;
                                    if (0x1f < (ulong)((long)puVar11 - (long)local_98)) {
                                      uVar24 = local_68 & 0xfffffffffffffff8;
                                      uVar25 = 0;
                                      do {
                                        uVar10 = *(undefined8 *)((long)(local_98 + uVar25) + 8);
                                        uVar4 = *(undefined8 *)(local_98 + uVar25 + 4);
                                        uVar5 = *(undefined8 *)((long)(local_98 + uVar25 + 4) + 8);
                                        *(undefined8 *)(puVar11 + uVar25) =
                                             *(undefined8 *)(local_98 + uVar25);
                                        *(undefined8 *)((long)(puVar11 + uVar25) + 8) = uVar10;
                                        *(undefined8 *)(puVar11 + uVar25 + 4) = uVar4;
                                        *(undefined8 *)((long)(puVar11 + uVar25 + 4) + 8) = uVar5;
                                        uVar25 = uVar25 + 8;
                                      } while (uVar24 != uVar25);
                                      if (local_68 == uVar24) goto LAB_10018eef;
                                    }
                                  }
                                  uVar25 = uVar24;
                                  if ((local_68 & 3) != 0) {
                                    uVar21 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar11[uVar25] = local_98[uVar25];
                                      uVar25 = uVar25 + 1;
                                      uVar21 = uVar21 - 1;
                                    } while (uVar21 != 0);
                                  }
                                  if (2 < (local_c0 + local_70) - uVar24) {
                                    do {
                                      puVar11[uVar25] = local_98[uVar25];
                                      puVar11[uVar25 + 1] = local_98[uVar25 + 1];
                                      puVar11[uVar25 + 2] = local_98[uVar25 + 2];
                                      puVar11[uVar25 + 3] = local_98[uVar25 + 3];
                                      uVar25 = uVar25 + 4;
                                    } while (local_68 != uVar25);
                                  }
                                }
LAB_10018eef:
                                recovered_100050c0(local_98);
                                uVar25 = local_78;
                                uVar24 = local_c8;
                                uVar15 = local_9c;
                              }
                            }
                            puVar11[uVar16] = 0;
                            local_68 = uVar16 + 1;
                            uVar15 = uVar15 + 1;
                            if ((uint)uVar18 <= uVar15) break;
                            uVar14 = uVar14 + 1;
                            uVar16 = local_68;
                          } while (local_68 < uVar25);
                        }
                      }
                      else if (uVar15 == 0x11) {
                        if (uVar19 < 4) {
                          if (local_58 <= uVar14) goto LAB_100195fd;
                          local_50 = uVar14 + 1;
                          uVar18 = uVar18 | (ulong)local_60[uVar14] << (bVar13 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar18 >> 3;
                        local_40 = local_40 - 3;
                        if (local_68 < local_78) {
                          uVar18 = (ulong)(((uint)uVar18 & 7) + 3);
                          local_c0 = local_68 - 1;
                          uVar14 = 0;
                          uVar15 = 0;
                          local_a8 = uVar18;
                          uVar16 = local_68;
                          do {
                            local_90 = puVar11;
                            if (uVar16 == uVar24) {
                              uVar21 = uVar16 * 2;
                              if (uVar16 == 0) {
                                uVar21 = 4;
                              }
                              uVar24 = uVar16;
                              if (uVar16 < uVar21) {
                                local_120 = 8;
                                local_c8 = uVar21;
                                local_9c = uVar15;
                                local_70 = uVar14;
                                local_68 = uVar16;
                                puVar11 = (undefined4 *)recovered_10005060(uVar21 * 4);
                                uVar16 = local_68;
                                uVar14 = local_70;
                                uVar18 = local_a8;
                                if (local_68 != 0) {
                                  if (local_68 < 8) {
                                    uVar24 = 0;
                                  }
                                  else {
                                    uVar24 = 0;
                                    if (0x1f < (ulong)((long)puVar11 - (long)local_90)) {
                                      uVar24 = local_68 & 0xfffffffffffffff8;
                                      uVar25 = 0;
                                      do {
                                        uVar10 = *(undefined8 *)((long)(local_90 + uVar25) + 8);
                                        uVar4 = *(undefined8 *)(local_90 + uVar25 + 4);
                                        uVar5 = *(undefined8 *)((long)(local_90 + uVar25 + 4) + 8);
                                        *(undefined8 *)(puVar11 + uVar25) =
                                             *(undefined8 *)(local_90 + uVar25);
                                        *(undefined8 *)((long)(puVar11 + uVar25) + 8) = uVar10;
                                        *(undefined8 *)(puVar11 + uVar25 + 4) = uVar4;
                                        *(undefined8 *)((long)(puVar11 + uVar25 + 4) + 8) = uVar5;
                                        uVar25 = uVar25 + 8;
                                      } while (uVar24 != uVar25);
                                      if (local_68 == uVar24) goto LAB_10018cff;
                                    }
                                  }
                                  uVar25 = uVar24;
                                  if ((local_68 & 3) != 0) {
                                    uVar21 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar11[uVar25] = local_90[uVar25];
                                      uVar25 = uVar25 + 1;
                                      uVar21 = uVar21 - 1;
                                    } while (uVar21 != 0);
                                  }
                                  if (2 < (local_c0 + local_70) - uVar24) {
                                    do {
                                      puVar11[uVar25] = local_90[uVar25];
                                      puVar11[uVar25 + 1] = local_90[uVar25 + 1];
                                      puVar11[uVar25 + 2] = local_90[uVar25 + 2];
                                      puVar11[uVar25 + 3] = local_90[uVar25 + 3];
                                      uVar25 = uVar25 + 4;
                                    } while (local_68 != uVar25);
                                  }
                                }
LAB_10018cff:
                                recovered_100050c0(local_90);
                                uVar25 = local_78;
                                uVar24 = local_c8;
                                uVar15 = local_9c;
                              }
                            }
                            puVar11[uVar16] = 0;
                            local_68 = uVar16 + 1;
                            uVar15 = uVar15 + 1;
                            if ((uint)uVar18 <= uVar15) break;
                            uVar14 = uVar14 + 1;
                            uVar16 = local_68;
                          } while (local_68 < uVar25);
                        }
                      }
                      else {
                        if ((uVar15 != 0x10) || (local_68 == 0)) goto LAB_100195fd;
                        if (uVar19 < 3) {
                          if (local_58 <= uVar14) goto LAB_100195fd;
                          local_50 = uVar14 + 1;
                          uVar18 = uVar18 | (ulong)local_60[uVar14] << (bVar13 & 0x3f);
                          local_40 = local_40 | 8;
                        }
                        uStack_48 = uVar18 >> 2;
                        local_40 = local_40 - 2;
                        uVar7 = puVar11[local_68 - 1];
                        if (local_68 < local_78) {
                          uVar18 = (ulong)(((uint)uVar18 & 3) + 3);
                          local_c0 = local_68 - 1;
                          uVar14 = 0;
                          uVar15 = 0;
                          local_a8 = uVar18;
                          local_c8 = CONCAT44(PF_PART4(local_c8, 4),uVar7);
                          uVar16 = local_68;
                          do {
                            local_88 = puVar11;
                            if (uVar16 == uVar24) {
                              uVar24 = uVar16;
                              if (0 < (long)uVar16) {
                                local_120 = 7;
                                local_9c = uVar15;
                                local_70 = uVar14;
                                local_68 = uVar16;
                                puVar11 = (undefined4 *)recovered_10005060(uVar16 * 8);
                                uVar16 = local_68;
                                uVar14 = local_70;
                                uVar18 = local_a8;
                                if (local_68 < 8) {
                                  uVar24 = 0;
LAB_10018a26:
                                  uVar25 = uVar24;
                                  if ((local_68 & 3) != 0) {
                                    uVar21 = (ulong)((uint)local_68 & 3);
                                    do {
                                      puVar11[uVar25] = local_88[uVar25];
                                      uVar25 = uVar25 + 1;
                                      uVar21 = uVar21 - 1;
                                    } while (uVar21 != 0);
                                  }
                                  if (2 < (local_c0 + local_70) - uVar24) {
                                    do {
                                      puVar11[uVar25] = local_88[uVar25];
                                      puVar11[uVar25 + 1] = local_88[uVar25 + 1];
                                      puVar11[uVar25 + 2] = local_88[uVar25 + 2];
                                      puVar11[uVar25 + 3] = local_88[uVar25 + 3];
                                      uVar25 = uVar25 + 4;
                                    } while (local_68 != uVar25);
                                  }
                                }
                                else {
                                  uVar24 = 0;
                                  if ((ulong)((long)puVar11 - (long)local_88) < 0x20)
                                  goto LAB_10018a26;
                                  uVar24 = local_68 & 0x7ffffffffffffff8;
                                  uVar25 = 0;
                                  do {
                                    uVar10 = *(undefined8 *)((long)(local_88 + uVar25) + 8);
                                    uVar4 = *(undefined8 *)(local_88 + uVar25 + 4);
                                    uVar5 = *(undefined8 *)((long)(local_88 + uVar25 + 4) + 8);
                                    *(undefined8 *)(puVar11 + uVar25) =
                                         *(undefined8 *)(local_88 + uVar25);
                                    *(undefined8 *)((long)(puVar11 + uVar25) + 8) = uVar10;
                                    *(undefined8 *)(puVar11 + uVar25 + 4) = uVar4;
                                    *(undefined8 *)((long)(puVar11 + uVar25 + 4) + 8) = uVar5;
                                    uVar25 = uVar25 + 8;
                                  } while (uVar24 != uVar25);
                                  if (local_68 != uVar24) goto LAB_10018a26;
                                }
                                uVar24 = local_68 * 2;
                                recovered_100050c0(local_88);
                                uVar25 = local_78;
                                uVar7 = (undefined4)local_c8;
                                uVar15 = local_9c;
                              }
                            }
                            puVar11[uVar16] = uVar7;
                            local_68 = uVar16 + 1;
                            uVar15 = uVar15 + 1;
                            if ((uint)uVar18 <= uVar15) break;
                            uVar14 = uVar14 + 1;
                            uVar16 = local_68;
                          } while (local_68 < uVar25);
                        }
                      }
                    }
                    local_b8 = puVar11;
                  } while (local_68 < uVar25);
                  local_130 = (undefined4 *)((ulong)(uint)((int)local_130 << 2) + (long)puVar11);
                  local_170[0] = 0;
                  local_170[1] = 0;
                  local_170[2] = 0;
                  local_120 = 10;
                  recovered_1001ac50(local_170,0,puVar11,local_130);
                  local_150 = 0;
                  lStack_148 = 0;
                  local_140 = 0;
                  local_120 = 0xb;
                  recovered_1001ac50(&local_150,0,local_130,local_b8 + local_68);
                  local_120 = 0xc;
                  uVar24 = recovered_1001a620(local_170,local_2b8,0);
                  if ((char)uVar24 == '\0') {
                    cVar17 = '\0';
                  }
                  else {
                    if (lStack_148 != 0) {
                      lVar23 = 0;
                      bVar13 = 0;
                      do {
                        bVar3 = bVar13;
                        bVar28 = *(int *)(local_150 + lVar23) != 0;
                        lVar23 = lVar23 + 4;
                        bVar13 = bVar3 | bVar28;
                      } while (lStack_148 * 4 != lVar23);
                      if ((bool)(bVar3 | bVar28)) {
                        local_120 = 0xd;
                        uVar24 = recovered_1001a620(&local_150,local_1f8,1);
                        cVar17 = (char)uVar24;
                        goto LAB_10019455;
                      }
                    }
                    local_1f8[0xc] = 0;
                    local_1f8[0xd] = 0;
                    local_1f8[0xe] = 0;
                    local_1f8[0xf] = 0;
                    local_1f8[8] = 0;
                    local_1f8[9] = 0;
                    local_1f8[10] = 0;
                    local_1f8[0xb] = 0;
                    local_1f8[4] = 0;
                    local_1f8[5] = 0;
                    local_1f8[6] = 0;
                    local_1f8[7] = 0;
                    local_1f8[0] = 0;
                    local_1f8[1] = 0;
                    local_1f8[2] = 0;
                    local_1f8[3] = 0;
                    recovered_100050c0(local_1b8);
                    local_1b8 = 0;
                    uStack_1b0 = 0;
                    uStack_1ab = 0;
                    uStack_1a8 = 0;
                    uStack_1a3 = 0;
                    uStack_1a0 = 0;
                    recovered_100050c0(0);
                    uStack_19c = 1;
                    cVar17 = '\x01';
                  }
LAB_10019455:
                  lStack_148 = 0;
                  recovered_100050c0(local_150);
                  local_170[1] = 0;
                  recovered_100050c0(local_170[0]);
                  recovered_100050c0(local_b8);
                  puVar22 = local_188;
                  local_210 = 0;
                  uStack_20b = 0;
                  recovered_100050c0(local_218);
                  recovered_100050c0(puVar22);
                  uVar24 = uStack_48;
                  uVar15 = local_40;
                  if (cVar17 == '\0') goto LAB_1001977d;
                  local_120 = 0xe;
                  uVar18 = recovered_100199b0((long *)&local_60,(long)local_2b8,(long)local_1f8,
                                              local_b0);
                  uVar18 = uVar18 & 0xffffffff;
                  uStack_1b0 = 0;
                  uStack_1ab = 0;
                  recovered_100050c0(local_1b8);
                  local_270 = 0;
                  uStack_26b = 0;
                  recovered_100050c0(local_278);
                  param_1 = local_d0;
                  plVar27 = local_b0;
                  uVar15 = local_40;
                  if ((char)uVar18 != '\0') break;
                  goto LAB_10019795;
                }
LAB_100195fd:
                recovered_100050c0(puVar11);
                puVar22 = local_188;
                recovered_100050c0(local_218);
              }
              recovered_100050c0(puVar22);
              uVar24 = uStack_48;
              uVar15 = local_40;
            }
LAB_1001977d:
            local_40 = uVar15;
            uStack_48 = uVar24;
            recovered_100050c0(local_1b8);
            recovered_100050c0(local_278);
            uVar15 = local_40;
            goto LAB_10019795;
          case 3:
            goto switchD_1001832c_caseD_3;
          }
        }
      } while ((local_170[3] & 1U) == 0);
      uStack_48 = uStack_48 >> ((byte)local_40 & 7);
      local_40 = local_40 & 0xfffffff8;
      uVar15 = local_40;
      if (local_40 == 0 && local_50 == local_58) {
        uVar15 = *(uint *)(*param_1 + -4 + param_1[1]);
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18
        ;
        uVar24 = plVar27[1];
        if (uVar24 == 0) {
          uVar19 = 1;
        }
        else {
          local_b0 = (long *)CONCAT44(PF_PART4(local_b0, 4),uVar15);
          uVar25 = 0;
          uVar19 = 1;
          uVar6 = 0;
          do {
            uVar18 = uVar24 - uVar25;
            if (0x15af < uVar18) {
              uVar18 = 0x15b0;
            }
            if (uVar24 != uVar25) {
              uVar14 = uVar18 + (uVar18 == 0);
              uVar20 = (uint)uVar14;
              if (uVar24 - uVar25 < 4) {
                uVar16 = 0;
              }
              else {
                lVar23 = *plVar27 + 3 + uVar25;
                uVar16 = 0;
                do {
                  iVar8 = *(byte *)(lVar23 + -3 + uVar16) + uVar19;
                  iVar26 = (uint)*(byte *)(lVar23 + -2 + uVar16) + iVar8;
                  iVar9 = (uint)*(byte *)(lVar23 + -1 + uVar16) + iVar26;
                  uVar19 = (uint)*(byte *)(lVar23 + uVar16) + iVar9;
                  uVar6 = uVar6 + iVar8 + iVar26 + iVar9 + uVar19;
                  uVar16 = uVar16 + 4;
                } while ((uVar20 & 0x1ffc) != uVar16);
              }
              if ((uVar14 & 3) != 0) {
                uVar14 = 0;
                do {
                  uVar19 = uVar19 + *(byte *)(uVar16 + uVar25 + *plVar27 + uVar14);
                  uVar6 = uVar6 + uVar19;
                  uVar14 = uVar14 + 1;
                } while ((uVar20 & 3) != uVar14);
              }
              uVar19 = uVar19 % 0xfff1;
              uVar6 = uVar6 % 0xfff1;
            }
            uVar25 = uVar25 + uVar18;
          } while (uVar25 < uVar24);
          uVar19 = uVar19 + uVar6 * 0x10000;
        }
        uVar18 = CONCAT71((int7)(uVar18 >> 8),uVar19 == uVar15);
        goto switchD_1001832c_caseD_3;
      }
    }
  }
LAB_10019795:
  local_40 = uVar15;
  uVar18 = 0;
switchD_1001832c_caseD_3:
  recovered_100055b0(&local_128);
  return uVar18 & 0xffffffff;
}

#undef DAT_1001da38
#undef DAT_1001e020
#undef DAT_1001f5a0
#undef DAT_1001f608
#undef LAB_100197d4
#undef local_2b8
#undef local_278
#undef local_270
#undef local_258
#undef local_218
#undef local_210
#undef local_1f8
#undef local_1b8
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_150
#undef local_140
#undef local_134
#undef local_130
#undef uStack_26b
#undef local_128
#undef uStack_268
#undef local_120
#undef uStack_263
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef uStack_20b
#undef local_e8
#undef uStack_208
#undef local_d0
#undef uStack_203
#undef local_c8
#undef local_c0
#undef local_b8
#undef uStack_1b0
#undef local_b0
#undef uStack_1ab
#undef local_a8
#undef uStack_1a8
#undef local_9c
#undef uStack_1a3
#undef local_98
#undef uStack_1a0
#undef local_90
#undef uStack_19c
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef lStack_148
#undef local_50
#undef local_40
#undef local_38
#undef uStack_48

#undef DAT_1001d860
#define DAT_1001d860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45dU)))
#undef DAT_1001d8d4
#define DAT_1001d8d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d1U)))
#undef DAT_1001d948
#define DAT_1001d948 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545U)))
#undef DAT_1001d9c0
#define DAT_1001d9c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100199b0
 */

undefined8 recovered_100199b0(long *param_1,long param_2,long param_3,long *param_4)

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
          lVar19 = recovered_10005060(uVar13);
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
          recovered_100050c0(lVar4);
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
              lVar19 = recovered_10005060(uVar20);
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
              recovered_100050c0(lVar5);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a020
 */

void recovered_1001a020(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x48) = 0;
  recovered_100050c0(*(undefined8 *)(param_1 + 0x40));
  return;
}


#undef DAT_1001d5f0
#define DAT_1001d5f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1edU)))
#undef DAT_1001d600
#define DAT_1001d600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdU)))
#undef DAT_1001d610
#define DAT_1001d610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef DAT_1001e040
#define DAT_1001e040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc3dU)))
#undef DAT_1001f540
#define DAT_1001f540 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213dU)))
#undef DAT_1001f550
#define DAT_1001f550 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214dU)))
#undef DAT_1001f560
#define DAT_1001f560 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x215dU)))
#undef DAT_1001f570
#define DAT_1001f570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216dU)))
#undef DAT_1001f580
#define DAT_1001f580 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x217dU)))
#undef DAT_1001f58d
#define DAT_1001f58d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef LAB_1001a5c3
#define LAB_1001a5c3 (*(uint8_t *)(0x1001a5c3U))
#undef UNK_1001d5f8
#define UNK_1001d5f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f5U)))
#undef UNK_1001d608
#define UNK_1001d608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x205U)))
#undef UNK_1001d618
#define UNK_1001d618 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x215U)))
#undef UNK_1001f548
#define UNK_1001f548 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef UNK_1001f558
#define UNK_1001f558 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2155U)))
#undef UNK_1001f568
#define UNK_1001f568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2165U)))
#undef UNK_1001f578
#define UNK_1001f578 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2175U)))
#undef UNK_1001f588
#define UNK_1001f588 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2185U)))
#undef UNK_1001f590
#define UNK_1001f590 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218dU)))
#undef UNK_1001f595
#define UNK_1001f595 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2192U)))
#undef _DAT_1001d5f0
#define _DAT_1001d5f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1edU)))
#undef _DAT_1001d600
#define _DAT_1001d600 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1fdU)))
#undef _DAT_1001d610
#define _DAT_1001d610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef _DAT_1001f540
#define _DAT_1001f540 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x213dU)))
#undef _DAT_1001f550
#define _DAT_1001f550 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x214dU)))
#undef _DAT_1001f560
#define _DAT_1001f560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x215dU)))
#undef _DAT_1001f570
#define _DAT_1001f570 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x216dU)))
#undef _DAT_1001f580
#define _DAT_1001f580 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x217dU)))
#undef _DAT_1001f58d
#define _DAT_1001f58d (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef uRam000000001001d5f8
#define uRam000000001001d5f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1f5U)))
#undef uRam000000001001d608
#define uRam000000001001d608 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x205U)))
#undef uRam000000001001d618
#define uRam000000001001d618 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x215U)))
#undef uRam000000001001f548
#define uRam000000001001f548 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2145U)))
#undef uRam000000001001f558
#define uRam000000001001f558 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2155U)))
#undef uRam000000001001f568
#define uRam000000001001f568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2165U)))
#undef uRam000000001001f578
#define uRam000000001001f578 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2175U)))
#undef uRam000000001001f588
#define uRam000000001001f588 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x2185U)))->pf_payload_bits
#undef uRam000000001001f590
#define uRam000000001001f590 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x218dU)))->pf_payload_bits
#undef uRam000000001001f595
#define uRam000000001001f595 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2192U)))
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
 * Address: 0x1001a040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001a040(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  local_38 = (undefined8 *)recovered_10005060(0x480);
  recovered_100050c0(0);
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
  local_88 = recovered_10005010;
  local_80 = &DAT_1001e040;
  local_70 = &LAB_1001a5c3;
  local_a0 = 1;
  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  recovered_10005590(&local_a8);
  recovered_1001a620((long *)&local_50,(uint *)&DAT_1001f540,0);
  recovered_100050c0(local_38);
  recovered_100055b0(&local_a8);
  return;
}

#undef DAT_1001d5f0
#undef DAT_1001d600
#undef DAT_1001d610
#undef DAT_1001e040
#undef DAT_1001f540
#undef DAT_1001f550
#undef DAT_1001f560
#undef DAT_1001f570
#undef DAT_1001f580
#undef DAT_1001f58d
#undef LAB_1001a5c3
#undef UNK_1001d5f8
#undef UNK_1001d608
#undef UNK_1001d618
#undef UNK_1001f548
#undef UNK_1001f558
#undef UNK_1001f568
#undef UNK_1001f578
#undef UNK_1001f588
#undef UNK_1001f590
#undef UNK_1001f595
#undef _DAT_1001d5f0
#undef _DAT_1001d600
#undef _DAT_1001d610
#undef _DAT_1001f540
#undef _DAT_1001f550
#undef _DAT_1001f560
#undef _DAT_1001f570
#undef _DAT_1001f580
#undef _DAT_1001f58d
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

#define local_44 (*(int *)(frame + 124))
#define local_40 (*(ulong *)(frame + 128))
#define local_34 (*(int *)(frame + 140))
#define auStack_a8 (*(uint (*)[4])(frame + 24))
#define local_98 (*(int *)(frame + 40))
#define local_94 (*(int *)(frame + 44))
#define local_90 (*(int *)(frame + 48))
#define local_8c (*(int *)(frame + 52))
#define local_88 (*(int *)(frame + 56))
#define local_84 (*(int *)(frame + 60))
#define local_80 (*(int *)(frame + 64))
#define local_7c (*(int *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(int *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(int *)(frame + 84))
#define local_68 (*(int *)(frame + 88))
#define local_64 (*(int *)(frame + 92))
#define local_60 (*(int *)(frame + 96))
#define local_5c (*(int *)(frame + 100))
#define local_58 (*(int *)(frame + 104))
#define local_54 (*(int *)(frame + 108))
#define local_50 (*(int *)(frame + 112))
#define local_4c (*(int *)(frame + 116))
#define local_48 (*(int *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a620
 */

ulong recovered_1001a620(long *param_1,uint *param_2,ulong param_3)

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
  recovered_100050c0(*(undefined8 *)(param_2 + 0x10));
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  recovered_100050c0(0);
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
    lVar12 = recovered_10005060(local_40 * 2);
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
    recovered_100050c0(lVar4);
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

#undef local_44
#undef local_40
#undef local_34
#undef auStack_a8
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48

#undef DAT_1001d620
#define DAT_1001d620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_1001e048
#define DAT_1001e048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc45U)))
#undef DAT_1001f5a8
#define DAT_1001f5a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21a5U)))
#undef DAT_1001f5b8
#define DAT_1001f5b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21b5U)))
#undef DAT_1001f5c8
#define DAT_1001f5c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21c5U)))
#undef DAT_1001f5d8
#define DAT_1001f5d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21d5U)))
#undef DAT_1001f5e8
#define DAT_1001f5e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21e5U)))
#undef DAT_1001f5f5
#define DAT_1001f5f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21f2U)))
#undef LAB_1001abe9
#define LAB_1001abe9 (*(uint8_t *)(0x1001abe9U))
#undef UNK_1001d628
#define UNK_1001d628 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x225U)))
#undef UNK_1001f5b0
#define UNK_1001f5b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21adU)))
#undef UNK_1001f5c0
#define UNK_1001f5c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21bdU)))
#undef UNK_1001f5d0
#define UNK_1001f5d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21cdU)))
#undef UNK_1001f5e0
#define UNK_1001f5e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21ddU)))
#undef UNK_1001f5f0
#define UNK_1001f5f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21edU)))
#undef UNK_1001f5f8
#define UNK_1001f5f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21f5U)))
#undef UNK_1001f5fd
#define UNK_1001f5fd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21faU)))
#undef _DAT_1001d620
#define _DAT_1001d620 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef _DAT_1001f5a8
#define _DAT_1001f5a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21a5U)))
#undef _DAT_1001f5b8
#define _DAT_1001f5b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21b5U)))
#undef _DAT_1001f5c8
#define _DAT_1001f5c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21c5U)))
#undef _DAT_1001f5d8
#define _DAT_1001f5d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21d5U)))
#undef _DAT_1001f5e8
#define _DAT_1001f5e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21e5U)))
#undef _DAT_1001f5f5
#define _DAT_1001f5f5 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21f2U)))
#undef uRam000000001001d628
#define uRam000000001001d628 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x225U)))
#undef uRam000000001001f5b0
#define uRam000000001001f5b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21adU)))
#undef uRam000000001001f5c0
#define uRam000000001001f5c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21bdU)))
#undef uRam000000001001f5d0
#define uRam000000001001f5d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21cdU)))
#undef uRam000000001001f5e0
#define uRam000000001001f5e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21ddU)))
#undef uRam000000001001f5f0
#define uRam000000001001f5f0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x21edU)))->pf_payload_bits
#undef uRam000000001001f5f8
#define uRam000000001001f5f8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x21f5U)))->pf_payload_bits
#undef uRam000000001001f5fd
#define uRam000000001001f5fd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21faU)))
#define local_40 (*(undefined8 *)(frame + 128))
#define local_38 (*(undefined8 * *)(frame + 136))
#define local_a8 (*(undefined8 *)(frame + 24))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_88 (*(code * *)(frame + 56))
#define local_80 (*(undefined * *)(frame + 64))
#define local_78 (*(undefined1 * *)(frame + 72))
#define local_70 (*(undefined1 * *)(frame + 80))
#define local_68 (*(undefined1 * *)(frame + 88))
#define local_50 (*(undefined8 * *)(frame + 112))
#define local_48 (*(undefined8 *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001aac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001aac0(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_38 = (undefined8 *)recovered_10005060(0x80);
  recovered_100050c0(0);
  uVar2 = uRam000000001001d628;
  uVar1 = _DAT_1001d620;
  local_68 = (undefined1 *)&local_a8;
  local_50 = local_38;
  local_40 = 0x20;
  *local_38 = _DAT_1001d620;
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
  _DAT_1001f5a8 = 0;
  uRam000000001001f5b0 = 0;
  _DAT_1001f5b8 = 0;
  uRam000000001001f5c0 = 0;
  _DAT_1001f5c8 = 0;
  uRam000000001001f5d0 = 0;
  _DAT_1001f5d8 = 0;
  uRam000000001001f5e0 = 0;
  _DAT_1001f5e8 = 0;
  uRam000000001001f5f0 = 0;
  _DAT_1001f5f5 = 0;
  uRam000000001001f5f8 = 0;
  uRam000000001001f5fd = 0;
  local_88 = recovered_10005010;
  local_80 = &DAT_1001e048;
  local_70 = &LAB_1001abe9;
  local_a0 = 1;
  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 192) + -8);
  recovered_10005590(&local_a8);
  recovered_1001a620((long *)&local_50,(uint *)&DAT_1001f5a8,0);
  recovered_100050c0(local_38);
  recovered_100055b0(&local_a8);
  return;
}

#undef DAT_1001d620
#undef DAT_1001e048
#undef DAT_1001f5a8
#undef DAT_1001f5b8
#undef DAT_1001f5c8
#undef DAT_1001f5d8
#undef DAT_1001f5e8
#undef DAT_1001f5f5
#undef LAB_1001abe9
#undef UNK_1001d628
#undef UNK_1001f5b0
#undef UNK_1001f5c0
#undef UNK_1001f5d0
#undef UNK_1001f5e0
#undef UNK_1001f5f0
#undef UNK_1001f5f8
#undef UNK_1001f5fd
#undef _DAT_1001d620
#undef _DAT_1001f5a8
#undef _DAT_1001f5b8
#undef _DAT_1001f5c8
#undef _DAT_1001f5d8
#undef _DAT_1001f5e8
#undef _DAT_1001f5f5
#undef uRam000000001001d628
#undef uRam000000001001f5b0
#undef uRam000000001001f5c0
#undef uRam000000001001f5d0
#undef uRam000000001001f5e0
#undef uRam000000001001f5f0
#undef uRam000000001001f5f8
#undef uRam000000001001f5fd
#undef local_40
#undef local_38
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ac50
 */

long recovered_1001ac50(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

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
    lVar6 = recovered_10005060(uVar13 * 4);
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
    recovered_100050c0(lVar18);
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


#undef DAT_1001d630
#define DAT_1001d630 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22dU)))
#undef DAT_1001d640
#define DAT_1001d640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23dU)))
#undef DAT_1001d650
#define DAT_1001d650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24dU)))
#undef DAT_1001f610
#define DAT_1001f610 (*(char *)(((uintptr_t)pf_module_state + 0x220dU)))
#undef DAT_1001f614
#define DAT_1001f614 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2211U)))
#undef UNK_1001d634
#define UNK_1001d634 (*(uint *)(((uintptr_t)pf_module_state + 0x231U)))
#undef UNK_1001d638
#define UNK_1001d638 (*(uint *)(((uintptr_t)pf_module_state + 0x235U)))
#undef UNK_1001d63c
#define UNK_1001d63c (*(uint *)(((uintptr_t)pf_module_state + 0x239U)))
#undef UNK_1001d644
#define UNK_1001d644 (*(uint *)(((uintptr_t)pf_module_state + 0x241U)))
#undef UNK_1001d648
#define UNK_1001d648 (*(uint *)(((uintptr_t)pf_module_state + 0x245U)))
#undef UNK_1001d64c
#define UNK_1001d64c (*(uint *)(((uintptr_t)pf_module_state + 0x249U)))
#undef UNK_1001d654
#define UNK_1001d654 (*(int *)(((uintptr_t)pf_module_state + 0x251U)))
#undef UNK_1001d658
#define UNK_1001d658 (*(int *)(((uintptr_t)pf_module_state + 0x255U)))
#undef UNK_1001d65c
#define UNK_1001d65c (*(int *)(((uintptr_t)pf_module_state + 0x259U)))
#undef _DAT_1001d630
#define _DAT_1001d630 (*(uint *)(((uintptr_t)pf_module_state + 0x22dU)))
#undef _DAT_1001d640
#define _DAT_1001d640 (*(uint *)(((uintptr_t)pf_module_state + 0x23dU)))
#undef _DAT_1001d650
#define _DAT_1001d650 (*(int *)(((uintptr_t)pf_module_state + 0x24dU)))
#undef iRam000000001001d654
#define iRam000000001001d654 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x251U)))
#undef iRam000000001001d658
#define iRam000000001001d658 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x255U)))
#undef iRam000000001001d65c
#define iRam000000001001d65c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x259U)))
#undef uRam000000001001d634
#define uRam000000001001d634 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x231U)))
#undef uRam000000001001d638
#define uRam000000001001d638 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x235U)))
#undef uRam000000001001d63c
#define uRam000000001001d63c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef uRam000000001001d644
#define uRam000000001001d644 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef uRam000000001001d648
#define uRam000000001001d648 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x245U)))
#undef uRam000000001001d64c
#define uRam000000001001d64c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x249U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001af80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1001af80(uint param_1,long param_2,ulong param_3)

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

  iVar7 = iRam000000001001d65c;
  iVar6 = iRam000000001001d658;
  iVar5 = iRam000000001001d654;
  iVar4 = _DAT_1001d650;
  uVar3 = uRam000000001001d64c;
  uVar2 = uRam000000001001d648;
  uVar1 = uRam000000001001d644;
  uVar8 = _DAT_1001d640;
  if (DAT_1001f610 == '\0') {
    lVar9 = 0;
    uVar11 = _DAT_1001d630;
    uVar12 = uRam000000001001d634;
    uVar13 = uRam000000001001d638;
    uVar14 = uRam000000001001d63c;
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
      *(uint *)(&DAT_1001f614 + lVar9) = (uVar16 ^ uVar8) & uVar15 | ~uVar15 & uVar16;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x2215U)) = (uVar18 ^ uVar1) & uVar17 | ~uVar17 & uVar18;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x2219U)) = (uVar20 ^ uVar2) & uVar19 | ~uVar19 & uVar20;
      *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x221dU)) = (uVar22 ^ uVar3) & uVar21 | ~uVar21 & uVar22;
      uVar11 = uVar11 + iVar4;
      uVar12 = uVar12 + iVar5;
      uVar13 = uVar13 + iVar6;
      uVar14 = uVar14 + iVar7;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x400);
    DAT_1001f610 = '\x01';
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
                *(uint *)(&DAT_1001f614 +
                         (ulong)(byte)(*(byte *)(param_2 + uVar10) ^ (byte)uVar8) * 4);
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_1001f614 +
                         (ulong)(byte)(*(byte *)(param_2 + 1 + uVar10) ^ (byte)uVar8) * 4);
        uVar10 = uVar10 + 2;
      } while ((param_3 & 0xfffffffffffffffe) != uVar10);
    }
    if ((param_3 & 1) != 0) {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_1001f614 + (ulong)(byte)(*(byte *)(param_2 + uVar10) ^ (byte)uVar8) * 4
                       );
    }
    param_1 = ~uVar8;
  }
  return param_1;
}

#undef DAT_1001d630
#undef DAT_1001d640
#undef DAT_1001d650
#undef DAT_1001f610
#undef DAT_1001f614
#undef UNK_1001d634
#undef UNK_1001d638
#undef UNK_1001d63c
#undef UNK_1001d644
#undef UNK_1001d648
#undef UNK_1001d64c
#undef UNK_1001d654
#undef UNK_1001d658
#undef UNK_1001d65c
#undef _DAT_1001d630
#undef _DAT_1001d640
#undef _DAT_1001d650
#undef iRam000000001001d654
#undef iRam000000001001d658
#undef iRam000000001001d65c
#undef uRam000000001001d634
#undef uRam000000001001d638
#undef uRam000000001001d63c
#undef uRam000000001001d644
#undef uRam000000001001d648
#undef uRam000000001001d64c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b190
 */

void recovered_1001b190(long *param_1,undefined8 *param_2)

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
      lVar6 = recovered_10005060(uVar9 * 0x38);
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
          recovered_100050c0(0);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x38;
        } while (uVar11 < (ulong)param_1[1]);
      }
      recovered_100050c0(*param_1);
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
    lVar8 = recovered_10005060(lVar12 << 4);
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
    recovered_100050c0(lVar7);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b360
 */

void recovered_1001b360(long *param_1,undefined8 *param_2)

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
      lVar5 = recovered_10005060(uVar9 << 4);
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
      recovered_100050c0(lVar3);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b430
 */

void recovered_1001b430(long *param_1,undefined8 *param_2)

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
      lVar5 = recovered_10005060(uVar9 << 4);
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
      recovered_100050c0(lVar3);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b500
 */

ulong recovered_1001b500(long *param_1,long *param_2)

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
    lVar6 = recovered_10005060(uVar11);
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
    recovered_100050c0(lVar12);
    *param_1 = lVar6;
    param_1[2] = uVar11;
    puVar10 = (undefined8 *)*param_2;
    lVar12 = param_2[1];
  }
  if (lVar12 != 0) {
    puVar13 = puVar10 + lVar12 * 2;
    do {
      recovered_10017e80(param_1,*param_1 + param_1[1],(undefined1 *)*puVar10,
                         (undefined1 *)*puVar10 + puVar10[1]);
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar13);
  }
LAB_1001b6d4:
  uVar11 = recovered_10018160(param_1,param_1 + 3);
  return uVar11;
}


#undef DAT_1001d660
#define DAT_1001d660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef _DAT_1001d660
#define _DAT_1001d660 (*(uint128 *)(((uintptr_t)pf_module_state + 0x25dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b6f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1001b6f0(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5,
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
    recovered_10000e30((void *)param_2,(void *)param_3,param_5);
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

#undef DAT_1001d660
#undef _DAT_1001d660

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c220
 */

void recovered_1001c220(char param_1,long param_2,long *param_3,long *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;

  recovered_100012f0(param_2,0x800);
  param_3[1] = 0;
  if ((ulong)param_3[2] < 0x10) {
    lVar7 = recovered_10005060(0x10);
    lVar3 = *param_3;
    uVar8 = param_3[1];
    if (uVar8 != 0) {
      if ((ulong)(lVar7 - lVar3) < 0x20 || uVar8 < 4) {
        uVar15 = 0;
      }
      else {
        if (uVar8 < 0x20) {
          uVar9 = 0;
        }
        else {
          uVar15 = uVar8 & 0xffffffffffffffe0;
          uVar9 = 0;
          do {
            uVar4 = ((undefined8 *)(lVar3 + uVar9))[1];
            puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar9);
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            *(undefined8 *)(lVar7 + uVar9) = *(undefined8 *)(lVar3 + uVar9);
            ((undefined8 *)(lVar7 + uVar9))[1] = uVar4;
            puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar9);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            uVar9 = uVar9 + 0x20;
          } while (uVar15 != uVar9);
          if (uVar8 == uVar15) goto LAB_1001c370;
          uVar9 = uVar15;
          if ((uVar8 & 0x1c) == 0) goto LAB_1001c306;
        }
        uVar15 = uVar8 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar7 + uVar9) = *(undefined4 *)(lVar3 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar15 != uVar9);
        if (uVar8 == uVar15) goto LAB_1001c370;
      }
LAB_1001c306:
      uVar11 = uVar8 & 3;
      uVar9 = uVar15;
      if (uVar11 != 0) {
        do {
          *(undefined1 *)(lVar7 + uVar9) = *(undefined1 *)(lVar3 + uVar9);
          uVar9 = uVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar15 - uVar8 < 0xfffffffffffffffd) {
        do {
          *(undefined1 *)(lVar7 + uVar9) = *(undefined1 *)(lVar3 + uVar9);
          *(undefined1 *)(lVar7 + 1 + uVar9) = *(undefined1 *)(lVar3 + 1 + uVar9);
          *(undefined1 *)(lVar7 + 2 + uVar9) = *(undefined1 *)(lVar3 + 2 + uVar9);
          *(undefined1 *)(lVar7 + 3 + uVar9) = *(undefined1 *)(lVar3 + 3 + uVar9);
          uVar9 = uVar9 + 4;
        } while (uVar8 != uVar9);
      }
    }
LAB_1001c370:
    recovered_100050c0(lVar3);
    *param_3 = lVar7;
    param_3[2] = 0x10;
    uVar8 = param_3[1];
    if (0xf < uVar8) goto LAB_1001c3a8;
  }
  else {
    uVar8 = 0;
  }
  do {
    *(undefined1 *)(*param_3 + uVar8) = 0;
    uVar8 = param_3[1] + 1;
    param_3[1] = uVar8;
  } while (uVar8 < 0x10);
LAB_1001c3a8:
  param_4[1] = 0;
  if (param_1 == '\0') {
    *(undefined1 *)(*param_3 + 7) = 1;
    *(undefined1 *)(*param_3 + 8) = 0xff;
    uVar8 = param_4[1];
    iVar16 = 0;
    do {
      if (uVar8 == param_4[2]) {
        uVar15 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar15 = 4;
        }
        if (uVar8 < uVar15) {
          lVar7 = recovered_10005060(uVar15);
          lVar3 = *param_4;
          uVar8 = param_4[1];
          if (uVar8 != 0) {
            if (uVar8 < 4) {
              uVar9 = 0;
            }
            else {
              uVar9 = 0;
              if (0x1f < (ulong)(lVar7 - lVar3)) {
                if (uVar8 < 0x20) {
                  uVar11 = 0;
                }
                else {
                  uVar9 = uVar8 & 0xffffffffffffffe0;
                  uVar11 = 0;
                  do {
                    uVar4 = ((undefined8 *)(lVar3 + uVar11))[1];
                    puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar11);
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    *(undefined8 *)(lVar7 + uVar11) = *(undefined8 *)(lVar3 + uVar11);
                    ((undefined8 *)(lVar7 + uVar11))[1] = uVar4;
                    puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar11);
                    *puVar1 = uVar5;
                    puVar1[1] = uVar6;
                    uVar11 = uVar11 + 0x20;
                  } while (uVar9 != uVar11);
                  if (uVar8 == uVar9) goto LAB_1001c550;
                  uVar11 = uVar9;
                  if ((uVar8 & 0x1c) == 0) goto LAB_1001c64a;
                }
                uVar9 = uVar8 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(lVar7 + uVar11) = *(undefined4 *)(lVar3 + uVar11);
                  uVar11 = uVar11 + 4;
                } while (uVar9 != uVar11);
                if (uVar8 == uVar9) goto LAB_1001c550;
              }
            }
LAB_1001c64a:
            uVar12 = uVar8 & 3;
            uVar11 = uVar9;
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(lVar7 + uVar11) = *(undefined1 *)(lVar3 + uVar11);
                uVar11 = uVar11 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (uVar9 - uVar8 < 0xfffffffffffffffd) {
              do {
                *(undefined1 *)(lVar7 + uVar11) = *(undefined1 *)(lVar3 + uVar11);
                *(undefined1 *)(lVar7 + 1 + uVar11) = *(undefined1 *)(lVar3 + 1 + uVar11);
                *(undefined1 *)(lVar7 + 2 + uVar11) = *(undefined1 *)(lVar3 + 2 + uVar11);
                *(undefined1 *)(lVar7 + 3 + uVar11) = *(undefined1 *)(lVar3 + 3 + uVar11);
                uVar11 = uVar11 + 4;
              } while (uVar8 != uVar11);
            }
          }
LAB_1001c550:
          recovered_100050c0(lVar3);
          *param_4 = lVar7;
          param_4[2] = uVar15;
          uVar8 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar8) = (char)iVar16;
      uVar8 = param_4[1] + 1;
      param_4[1] = uVar8;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x100);
  }
  else {
    *(undefined1 *)(*param_3 + 3) = 0xc;
    uVar8 = param_4[1];
    iVar16 = 0;
    do {
      if (uVar8 == param_4[2]) {
        uVar15 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar15 = 4;
        }
        if (uVar8 < uVar15) {
          lVar7 = recovered_10005060(uVar15);
          lVar3 = *param_4;
          uVar8 = param_4[1];
          if (uVar8 != 0) {
            if (uVar8 < 4) {
              uVar9 = 0;
            }
            else {
              uVar9 = 0;
              if (0x1f < (ulong)(lVar7 - lVar3)) {
                if (uVar8 < 0x20) {
                  uVar11 = 0;
                }
                else {
                  uVar9 = uVar8 & 0xffffffffffffffe0;
                  uVar11 = 0;
                  do {
                    uVar4 = ((undefined8 *)(lVar3 + uVar11))[1];
                    puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar11);
                    uVar5 = *puVar1;
                    uVar6 = puVar1[1];
                    *(undefined8 *)(lVar7 + uVar11) = *(undefined8 *)(lVar3 + uVar11);
                    ((undefined8 *)(lVar7 + uVar11))[1] = uVar4;
                    puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar11);
                    *puVar1 = uVar5;
                    puVar1[1] = uVar6;
                    uVar11 = uVar11 + 0x20;
                  } while (uVar9 != uVar11);
                  if (uVar8 == uVar9) goto LAB_1001c3e0;
                  uVar11 = uVar9;
                  if ((uVar8 & 0x1c) == 0) goto LAB_1001c4ca;
                }
                uVar9 = uVar8 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)(lVar7 + uVar11) = *(undefined4 *)(lVar3 + uVar11);
                  uVar11 = uVar11 + 4;
                } while (uVar9 != uVar11);
                if (uVar8 == uVar9) goto LAB_1001c3e0;
              }
            }
LAB_1001c4ca:
            uVar12 = uVar8 & 3;
            uVar11 = uVar9;
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(lVar7 + uVar11) = *(undefined1 *)(lVar3 + uVar11);
                uVar11 = uVar11 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (uVar9 - uVar8 < 0xfffffffffffffffd) {
              do {
                *(undefined1 *)(lVar7 + uVar11) = *(undefined1 *)(lVar3 + uVar11);
                *(undefined1 *)(lVar7 + 1 + uVar11) = *(undefined1 *)(lVar3 + 1 + uVar11);
                *(undefined1 *)(lVar7 + 2 + uVar11) = *(undefined1 *)(lVar3 + 2 + uVar11);
                *(undefined1 *)(lVar7 + 3 + uVar11) = *(undefined1 *)(lVar3 + 3 + uVar11);
                uVar11 = uVar11 + 4;
              } while (uVar8 != uVar11);
            }
          }
LAB_1001c3e0:
          recovered_100050c0(lVar3);
          *param_4 = lVar7;
          param_4[2] = uVar15;
          uVar8 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar8) = (char)iVar16;
      uVar8 = param_4[1] + 1;
      param_4[1] = uVar8;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0xc);
  }
  lVar3 = *param_3;
  lVar7 = *param_4;
  lVar10 = 0;
  lVar13 = 1;
  iVar16 = 0;
  do {
    if (*(char *)(lVar3 + -1 + lVar13) != '\0') {
      uVar14 = 0;
      do {
        bVar2 = *(byte *)(lVar7 + lVar10);
        lVar10 = lVar10 + 1;
        *(uint *)(param_2 + (ulong)bVar2 * 4) = iVar16 + uVar14;
        *(int *)(param_2 + 0x400 + (ulong)bVar2 * 4) = (int)lVar13;
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(byte *)(lVar3 + -1 + lVar13));
      iVar16 = iVar16 + uVar14;
    }
    iVar16 = iVar16 * 2;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x11);
  return;
}


#undef DAT_1001d418
#define DAT_1001d418 (*(double *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1001d440
#define DAT_1001d440 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1001d450
#define DAT_1001d450 (*(double *)(((uintptr_t)pf_module_state + 0x4dU)))
#undef DAT_1001d4e0
#define DAT_1001d4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xddU)))
#undef DAT_1001d670
#define DAT_1001d670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_1001d680
#define DAT_1001d680 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27dU)))
#undef DAT_1001d690
#define DAT_1001d690 (*(double *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1001d698
#define DAT_1001d698 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_1001d6a0
#define DAT_1001d6a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef DAT_1001d6a8
#define DAT_1001d6a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_1001d6b0
#define DAT_1001d6b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef DAT_1001d6f8
#define DAT_1001d6f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f5U)))
#undef DAT_1001fa14
#define DAT_1001fa14 (*(char *)(((uintptr_t)pf_module_state + 0x2611U)))
#undef DAT_1001fa20
#define DAT_1001fa20 (*(double *)(((uintptr_t)pf_module_state + 0x261dU)))
#undef DAT_1001fa58
#define DAT_1001fa58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2655U)))
#undef DAT_1001fa60
#define DAT_1001fa60 (*(double *)(((uintptr_t)pf_module_state + 0x265dU)))
#undef DAT_1001faa0
#define DAT_1001faa0 (*(double *)(((uintptr_t)pf_module_state + 0x269dU)))
#undef DAT_1001fae0
#define DAT_1001fae0 (*(double *)(((uintptr_t)pf_module_state + 0x26ddU)))
#undef DAT_1001fb20
#define DAT_1001fb20 (*(double *)(((uintptr_t)pf_module_state + 0x271dU)))
#undef DAT_1001fb60
#define DAT_1001fb60 (*(double *)(((uintptr_t)pf_module_state + 0x275dU)))
#undef DAT_1001fba0
#define DAT_1001fba0 (*(double *)(((uintptr_t)pf_module_state + 0x279dU)))
#undef DAT_1001fbe0
#define DAT_1001fbe0 (*(double *)(((uintptr_t)pf_module_state + 0x27ddU)))
#undef _DAT_1001d440
#define _DAT_1001d440 (*(double *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_1001d698
#define _DAT_1001d698 (*(double *)(((uintptr_t)pf_module_state + 0x295U)))
#undef _DAT_1001d6a0
#define _DAT_1001d6a0 (*(double *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef _DAT_1001d6a8
#define _DAT_1001d6a8 (*(double *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef _DAT_1001d6b0
#define _DAT_1001d6b0 (*(double *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef _DAT_1001d6f8
#define _DAT_1001d6f8 (*(double *)(((uintptr_t)pf_module_state + 0x2f5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001c730(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  long lVar6;
  double dVar7;
  double dVar8;

  if (DAT_1001fa14 == '\0') {
    pdVar5 = (double *)&DAT_1001fa58;
    lVar6 = 0;
    do {
      dVar7 = (double)(int)lVar6 + (double)(int)lVar6 + DAT_1001d418;
      dVar8 = recovered_10001f60(dVar7 * _DAT_1001d6f8 * DAT_1001d450 * DAT_1001d690);
      pdVar5[-7] = dVar8;
      dVar8 = recovered_10001f60(dVar7 * DAT_1001d450 * DAT_1001d690);
      pdVar5[-6] = dVar8;
      dVar8 = recovered_10001f60((dVar7 + dVar7) * DAT_1001d450 * DAT_1001d690);
      pdVar5[-5] = dVar8;
      dVar8 = recovered_10001f60(dVar7 * _DAT_1001d440 * DAT_1001d450 * DAT_1001d690);
      pdVar5[-4] = dVar8;
      dVar8 = recovered_10001f60(dVar7 * _DAT_1001d698 * DAT_1001d450 * DAT_1001d690);
      pdVar5[-3] = dVar8;
      dVar8 = recovered_10001f60(dVar7 * _DAT_1001d6a0 * DAT_1001d450 * DAT_1001d690);
      pdVar5[-2] = dVar8;
      dVar8 = recovered_10001f60(dVar7 * _DAT_1001d6a8 * DAT_1001d450 * DAT_1001d690);
      pdVar5[-1] = dVar8;
      dVar7 = recovered_10001f60(dVar7 * _DAT_1001d6b0 * DAT_1001d450 * DAT_1001d690);
      *pdVar5 = dVar7;
      lVar6 = lVar6 + 1;
      pdVar5 = pdVar5 + 8;
    } while (lVar6 != 8);
    DAT_1001fa14 = '\x01';
  }
  lVar6 = 0;
  puVar2 = &DAT_1001fa20;
  do {
    dVar7 = *(double *)(&DAT_1001d670 + (ulong)(lVar6 == 0) * 8);
    lVar3 = 0;
    do {
      dVar8 = 0.0;
      lVar4 = 0;
      do {
        dVar1 = *(double *)((long)puVar2 + lVar4);
        dVar8 = *(double *)(param_1 + 0x38 + lVar4) * (double)(&DAT_1001fbe0)[lVar3] * dVar1 +
                *(double *)(param_1 + 0x30 + lVar4) * (double)(&DAT_1001fba0)[lVar3] * dVar1 +
                *(double *)(param_1 + 0x28 + lVar4) * (double)(&DAT_1001fb60)[lVar3] * dVar1 +
                *(double *)(param_1 + 0x20 + lVar4) * (double)(&DAT_1001fb20)[lVar3] * dVar1 +
                *(double *)(param_1 + 0x18 + lVar4) * (double)(&DAT_1001fae0)[lVar3] * dVar1 +
                *(double *)(param_1 + 0x10 + lVar4) * (double)(&DAT_1001faa0)[lVar3] * dVar1 +
                *(double *)(param_1 + 8 + lVar4) * (double)(&DAT_1001fa60)[lVar3] * dVar1 +
                *(double *)(param_1 + lVar4) * (double)(&DAT_1001fa20)[lVar3] * dVar1 + dVar8;
        lVar4 = lVar4 + 0x40;
      } while (lVar4 != 0x200);
      lVar4 = lVar3 + lVar6 * 8;
      dVar8 = (*(double *)(&DAT_1001d680 + (ulong)(lVar3 == 0) * 8) * dVar7 * dVar8) /
              (double)*(byte *)(param_2 + lVar4);
      *(int *)(param_3 + lVar4 * 4) =
           (int)(long)(dVar8 + *(double *)(uintptr_t)(uintptr_t)((&DAT_1001d4e0 + (ulong)(0.0 <= dVar8) * 8)));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 8);
    lVar6 = lVar6 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar6 != 8);
  return;
}

#undef DAT_1001d418
#undef DAT_1001d440
#undef DAT_1001d450
#undef DAT_1001d4e0
#undef DAT_1001d670
#undef DAT_1001d680
#undef DAT_1001d690
#undef DAT_1001d698
#undef DAT_1001d6a0
#undef DAT_1001d6a8
#undef DAT_1001d6b0
#undef DAT_1001d6f8
#undef DAT_1001fa14
#undef DAT_1001fa20
#undef DAT_1001fa58
#undef DAT_1001fa60
#undef DAT_1001faa0
#undef DAT_1001fae0
#undef DAT_1001fb20
#undef DAT_1001fb60
#undef DAT_1001fba0
#undef DAT_1001fbe0
#undef _DAT_1001d440
#undef _DAT_1001d698
#undef _DAT_1001d6a0
#undef _DAT_1001d6a8
#undef _DAT_1001d6b0
#undef _DAT_1001d6f8

#undef DAT_1001d760
#define DAT_1001d760 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x35dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cac0
 */

void recovered_1001cac0(long *param_1,int *param_2,int *param_3,long param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;

  uVar9 = 0;
  uVar12 = *param_2 - *param_3;
  *param_3 = *param_2;
  if (uVar12 != 0) {
    uVar13 = -uVar12;
    if ((int)-uVar12 < 0) {
      uVar13 = uVar12;
    }
    uVar9 = 0;
    uVar7 = (ulong)uVar13;
    do {
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 >> 1;
      bVar2 = 1 < uVar13;
      uVar13 = (uint)uVar7;
    } while (bVar2);
  }
  uVar13 = *(uint *)(param_4 + 0x400 + (ulong)uVar9 * 4);
  if (uVar13 != 0) {
    uVar1 = *(uint *)(param_4 + (ulong)uVar9 * 4);
    cVar5 = (char)param_1[3];
    iVar3 = *(int *)((long)param_1 + 0x1c);
    do {
      uVar13 = uVar13 - 1;
      cVar5 = ((uVar1 >> (uVar13 & 0x1f) & 1) != 0) + cVar5 * '\x02';
      *(char *)(param_1 + 3) = cVar5;
      iVar3 = iVar3 + 1;
      *(int *)((long)param_1 + 0x1c) = iVar3;
      if (iVar3 == 8) {
        recovered_1001d140(param_1,cVar5);
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        iVar3 = 0;
        cVar5 = '\0';
      }
    } while (uVar13 != 0);
  }
  if (uVar9 != 0) {
    bVar6 = (byte)uVar9;
    cVar5 = (char)param_1[3];
    iVar3 = *(int *)((long)param_1 + 0x1c);
    do {
      uVar9 = uVar9 - 1;
      cVar5 = ((((int)uVar12 >> 0x1f & ~(-1 << (bVar6 & 0x1f))) + uVar12 >> (uVar9 & 0x1f) & 1) != 0
              ) + cVar5 * '\x02';
      *(char *)(param_1 + 3) = cVar5;
      iVar3 = iVar3 + 1;
      *(int *)((long)param_1 + 0x1c) = iVar3;
      if (iVar3 == 8) {
        recovered_1001d140(param_1,cVar5);
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        iVar3 = 0;
        cVar5 = '\0';
      }
    } while (uVar9 != 0);
  }
  uVar9 = 0;
  lVar8 = 1;
  do {
    while (uVar12 = param_2[(uint)(&DAT_1001d760)[lVar8]], uVar12 == 0) {
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
      if (lVar8 == 0x40) {
        if ((uVar9 != 0) && (uVar9 = param_5[0x100], uVar9 != 0)) {
          uVar12 = *param_5;
          cVar5 = (char)param_1[3];
          iVar3 = *(int *)((long)param_1 + 0x1c);
          do {
            uVar9 = uVar9 - 1;
            cVar5 = ((uVar12 >> (uVar9 & 0x1f) & 1) != 0) + cVar5 * '\x02';
            *(char *)(param_1 + 3) = cVar5;
            iVar3 = iVar3 + 1;
            *(int *)((long)param_1 + 0x1c) = iVar3;
            if (iVar3 == 8) {
              recovered_1001d140(param_1,cVar5);
              *(undefined1 *)(param_1 + 3) = 0;
              *(undefined4 *)((long)param_1 + 0x1c) = 0;
              iVar3 = 0;
              cVar5 = '\0';
            }
          } while (uVar9 != 0);
        }
        return;
      }
    }
    for (; 0xf < uVar9; uVar9 = uVar9 - 0x10) {
      uVar13 = param_5[0x1f0];
      if (uVar13 != 0) {
        uVar1 = param_5[0xf0];
        cVar5 = (char)param_1[3];
        iVar3 = *(int *)((long)param_1 + 0x1c);
        do {
          uVar13 = uVar13 - 1;
          cVar5 = ((uVar1 >> (uVar13 & 0x1f) & 1) != 0) + cVar5 * '\x02';
          *(char *)(param_1 + 3) = cVar5;
          iVar3 = iVar3 + 1;
          *(int *)((long)param_1 + 0x1c) = iVar3;
          if (iVar3 == 8) {
            recovered_1001d140(param_1,cVar5);
            *(undefined1 *)(param_1 + 3) = 0;
            *(undefined4 *)((long)param_1 + 0x1c) = 0;
            iVar3 = 0;
            cVar5 = '\0';
          }
        } while (uVar13 != 0);
      }
    }
    uVar13 = -uVar12;
    if ((int)-uVar12 < 0) {
      uVar13 = uVar12;
    }
    uVar7 = (ulong)uVar13;
    iVar3 = -1;
    uVar1 = 0;
    do {
      uVar11 = uVar1;
      iVar10 = iVar3;
      uVar7 = uVar7 >> 1;
      iVar3 = iVar10 + 1;
      bVar2 = 1 < uVar13;
      uVar13 = (uint)uVar7;
      uVar1 = uVar11 + 1;
    } while (bVar2);
    uVar7 = (ulong)(iVar10 + 2U | uVar9 << 4);
    uVar9 = param_5[uVar7 + 0x100];
    cVar5 = (char)param_1[3];
    iVar4 = *(int *)((long)param_1 + 0x1c);
    if (uVar9 != 0) {
      uVar13 = param_5[uVar7];
      do {
        uVar9 = uVar9 - 1;
        cVar5 = ((uVar13 >> (uVar9 & 0x1f) & 1) != 0) + cVar5 * '\x02';
        *(char *)(param_1 + 3) = cVar5;
        iVar4 = iVar4 + 1;
        *(int *)((long)param_1 + 0x1c) = iVar4;
        if (iVar4 == 8) {
          recovered_1001d140(param_1,cVar5);
          *(undefined1 *)(param_1 + 3) = 0;
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
          iVar4 = 0;
          cVar5 = '\0';
        }
      } while (uVar9 != 0);
    }
    do {
      cVar5 = ((((int)uVar12 >> 0x1f & ~(-2 << ((byte)iVar3 & 0x1f))) + uVar12 >> (uVar11 & 0x1f) &
               1) != 0) + cVar5 * '\x02';
      *(char *)(param_1 + 3) = cVar5;
      iVar4 = iVar4 + 1;
      *(int *)((long)param_1 + 0x1c) = iVar4;
      if (iVar4 == 8) {
        recovered_1001d140(param_1,cVar5);
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        iVar4 = 0;
        cVar5 = '\0';
      }
      uVar11 = uVar11 - 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != -2);
    lVar8 = lVar8 + 1;
    uVar9 = 0;
  } while (lVar8 != 0x40);
  return;
}

#undef DAT_1001d760

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ce60
 */

void recovered_1001ce60(long *param_1,undefined1 *param_2,long param_3)

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
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    return;
  }
  lVar6 = recovered_10005060(param_3);
  lVar2 = *param_1;
  uVar7 = param_1[1];
  if (uVar7 == 0) goto LAB_1001cf9f;
  if ((ulong)(lVar6 - lVar2) < 0x20 || uVar7 < 4) {
    uVar12 = 0;
  }
  else {
    if (uVar7 < 0x20) {
      uVar8 = 0;
    }
    else {
      uVar12 = uVar7 & 0xffffffffffffffe0;
      uVar8 = 0;
      do {
        uVar3 = ((undefined8 *)(lVar2 + uVar8))[1];
        puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar8);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)(lVar6 + uVar8) = *(undefined8 *)(lVar2 + uVar8);
        ((undefined8 *)(lVar6 + uVar8))[1] = uVar3;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar8);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        uVar8 = uVar8 + 0x20;
      } while (uVar12 != uVar8);
      if (uVar7 == uVar12) goto LAB_1001cf9f;
      uVar8 = uVar12;
      if ((uVar7 & 0x1c) == 0) goto LAB_1001cf35;
    }
    uVar12 = uVar7 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)(lVar6 + uVar8) = *(undefined4 *)(lVar2 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar12 != uVar8);
    if (uVar7 == uVar12) goto LAB_1001cf9f;
  }
LAB_1001cf35:
  uVar10 = uVar7 & 3;
  uVar8 = uVar12;
  if (uVar10 != 0) {
    do {
      *(undefined1 *)(lVar6 + uVar8) = *(undefined1 *)(lVar2 + uVar8);
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar12 - uVar7 < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)(lVar6 + uVar8) = *(undefined1 *)(lVar2 + uVar8);
      *(undefined1 *)(lVar6 + 1 + uVar8) = *(undefined1 *)(lVar2 + 1 + uVar8);
      *(undefined1 *)(lVar6 + 2 + uVar8) = *(undefined1 *)(lVar2 + 2 + uVar8);
      *(undefined1 *)(lVar6 + 3 + uVar8) = *(undefined1 *)(lVar2 + 3 + uVar8);
      uVar8 = uVar8 + 4;
    } while (uVar7 != uVar8);
  }
LAB_1001cf9f:
  recovered_100050c0(lVar2);
  *param_1 = lVar6;
  param_1[2] = param_3;
  puVar9 = param_2 + param_3;
  uVar7 = param_1[1];
  do {
    if (uVar7 == param_1[2]) {
      uVar12 = uVar7 * 2;
      if (uVar7 == 0) {
        uVar12 = 4;
      }
      if (uVar7 < uVar12) {
        lVar6 = recovered_10005060(uVar12);
        lVar2 = *param_1;
        uVar7 = param_1[1];
        if (uVar7 != 0) {
          if (uVar7 < 4) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            if (0x1f < (ulong)(lVar6 - lVar2)) {
              if (uVar7 < 0x20) {
                uVar10 = 0;
              }
              else {
                uVar8 = uVar7 & 0xffffffffffffffe0;
                uVar10 = 0;
                do {
                  uVar3 = ((undefined8 *)(lVar2 + uVar10))[1];
                  puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar10);
                  uVar4 = *puVar1;
                  uVar5 = puVar1[1];
                  *(undefined8 *)(lVar6 + uVar10) = *(undefined8 *)(lVar2 + uVar10);
                  ((undefined8 *)(lVar6 + uVar10))[1] = uVar3;
                  puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar10);
                  *puVar1 = uVar4;
                  puVar1[1] = uVar5;
                  uVar10 = uVar10 + 0x20;
                } while (uVar8 != uVar10);
                if (uVar7 == uVar8) goto LAB_1001cfc0;
                uVar10 = uVar8;
                if ((uVar7 & 0x1c) == 0) goto LAB_1001d0ba;
              }
              uVar8 = uVar7 & 0xfffffffffffffffc;
              do {
                *(undefined4 *)(lVar6 + uVar10) = *(undefined4 *)(lVar2 + uVar10);
                uVar10 = uVar10 + 4;
              } while (uVar8 != uVar10);
              if (uVar7 == uVar8) goto LAB_1001cfc0;
            }
          }
LAB_1001d0ba:
          uVar11 = uVar7 & 3;
          uVar10 = uVar8;
          if (uVar11 != 0) {
            do {
              *(undefined1 *)(lVar6 + uVar10) = *(undefined1 *)(lVar2 + uVar10);
              uVar10 = uVar10 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (uVar8 - uVar7 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)(lVar6 + uVar10) = *(undefined1 *)(lVar2 + uVar10);
              *(undefined1 *)(lVar6 + 1 + uVar10) = *(undefined1 *)(lVar2 + 1 + uVar10);
              *(undefined1 *)(lVar6 + 2 + uVar10) = *(undefined1 *)(lVar2 + 2 + uVar10);
              *(undefined1 *)(lVar6 + 3 + uVar10) = *(undefined1 *)(lVar2 + 3 + uVar10);
              uVar10 = uVar10 + 4;
            } while (uVar7 != uVar10);
          }
        }
LAB_1001cfc0:
        recovered_100050c0(lVar2);
        *param_1 = lVar6;
        param_1[2] = uVar12;
        uVar7 = param_1[1];
      }
    }
    *(undefined1 *)(*param_1 + uVar7) = *param_2;
    uVar7 = param_1[1] + 1;
    param_1[1] = uVar7;
    param_2 = param_2 + 1;
    if (param_2 == puVar9) {
      return;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d140
 */

void recovered_1001d140(long *param_1,char param_2)

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
  ulong uVar11;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar11 = 4;
    if (uVar7 != 0) {
      uVar11 = uVar7 * 2;
    }
    if (uVar7 < uVar11) {
      lVar6 = recovered_10005060(uVar11);
      lVar2 = *param_1;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        uVar8 = 0;
        if ((3 < uVar7) && (0x1f < (ulong)(lVar6 - lVar2))) {
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
            if (uVar7 == uVar8) goto LAB_1001d27f;
            uVar9 = uVar8;
            if ((uVar7 & 0x1c) == 0) goto LAB_1001d215;
          }
          uVar8 = uVar7 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_1001d27f;
        }
LAB_1001d215:
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
LAB_1001d27f:
      recovered_100050c0(lVar2);
      *param_1 = lVar6;
      param_1[2] = uVar11;
      uVar7 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar7) = param_2;
  uVar7 = param_1[1] + 1;
  param_1[1] = uVar7;
  if (param_2 != -1) {
    return;
  }
  if (uVar7 != param_1[2]) goto LAB_1001d3ef;
  uVar11 = 4;
  if (uVar7 != 0) {
    uVar11 = uVar7 * 2;
  }
  if (uVar11 <= uVar7) goto LAB_1001d3ef;
  lVar6 = recovered_10005060(uVar11);
  lVar2 = *param_1;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar8 = 0;
    if ((3 < uVar7) && (0x1f < (ulong)(lVar6 - lVar2))) {
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
        if (uVar7 == uVar8) goto LAB_1001d3df;
        uVar9 = uVar8;
        if ((uVar7 & 0x1c) == 0) goto LAB_1001d375;
      }
      uVar8 = uVar7 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(lVar6 + uVar9) = *(undefined4 *)(lVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar8 != uVar9);
      if (uVar7 == uVar8) goto LAB_1001d3df;
    }
LAB_1001d375:
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
LAB_1001d3df:
  recovered_100050c0(lVar2);
  *param_1 = lVar6;
  param_1[2] = uVar11;
  uVar7 = param_1[1];
LAB_1001d3ef:
  *(undefined1 *)(*param_1 + uVar7) = 0;
  param_1[1] = param_1[1] + 1;
  return;
}

