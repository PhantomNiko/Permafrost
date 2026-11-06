/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2008U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

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
#undef DAT_1000b120
#define DAT_1000b120 (*(char *)(((uintptr_t)pf_module_state + 0x2008U)))
#undef DAT_1000b128
#define DAT_1000b128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2010U)))
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
#define local_428 (*(ulong (*)[130])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000580(void)

{
  unsigned char frame[1112] = {0};

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

  if (DAT_1000b120 != '\0') {
    return;
  }
  DAT_1000b128 = 0;
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
                if (*puVar7 <= uVar13) goto LAB_100005fe;
                puVar7[2] = *puVar7;
                puVar7[3] = puVar7[1];
                puVar7 = puVar7 + -2;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            uVar14 = 0;
LAB_100005fe:
            local_428[uVar14 * 2 + 2] = uVar13;
            local_428[uVar14 * 2 + 3] = uVar12 - uVar13;
            uVar2 = uVar2 + 1;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
LAB_1000074e:
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
        if (lVar5 == 0) goto LAB_10000848;
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
          if (DAT_1000b128 == 0) {
            puVar8 = (ulong *)&DAT_1000b128;
          }
          *puVar8 = (ulong)plVar10;
          plVar9 = plVar10;
        }
        puVar7 = puVar7 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (DAT_1000b128 != 0) {
        DAT_1000b120 = 1;
        return;
      }
      goto LAB_10000856;
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
              if (*puVar7 <= uVar13) goto LAB_100006c5;
              puVar7[2] = *puVar7;
              puVar7[3] = puVar7[1];
              puVar7 = puVar7 + -2;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          uVar14 = 0;
LAB_100006c5:
          local_428[uVar14 * 2 + 2] = uVar13;
          local_428[uVar14 * 2 + 3] = uVar12 - uVar13;
          uVar2 = uVar2 + 1;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar6);
    goto LAB_1000074e;
  }
LAB_10000848:
  plVar9 = (long *)0x0;
LAB_10000856:
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
    if (DAT_1000b128 == 0) {
      plVar9 = &DAT_1000b128;
    }
    *plVar9 = 0x300000;
  }
  DAT_1000b120 = 1;
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
#undef DAT_1000b120
#undef DAT_1000b128
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef _DAT_00300000
#undef _DAT_00300008
#undef local_428

#undef DAT_1000b128
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2010U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008e0
 */

ulong recovered_100008e0(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000580();
  uVar3 = 0;
  for (plVar1 = DAT_1000b128; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
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

#undef DAT_1000b128

#undef DAT_1000b128
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2010U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000930
 */

long recovered_10000930(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000580();
  lVar1 = 0;
  for (plVar2 = DAT_1000b128; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1000b128

#undef DAT_1000b128
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2010U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000970
 */

ulong recovered_10000970(void)

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

#undef DAT_1000b128
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2010U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009b0
 */

long recovered_100009b0(void)

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

#undef DAT_1000b128
#define DAT_1000b128 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2010U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e0
 */

ulong * recovered_100009e0(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  recovered_10000580();
  if (DAT_1000b128 != (ulong *)0x0) {
    uVar3 = param_1 + 0xfU & 0xfffffffffffffff0;
    puVar2 = DAT_1000b128;
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

#undef DAT_1000b128

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a70
 */

ulong recovered_10000a70(ulong param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ab0
 */

ulong recovered_10000ab0(ulong param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af0
 */

long recovered_10000af0(long param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b40
 */

ulong recovered_10000b40(ulong param_1,ulong param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be0
 */

long recovered_10000be0(ulong param_1,ulong param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c50
 */

ulong recovered_10000c50(ulong param_1,ulong param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

long recovered_10000d20(ulong param_1,ulong param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db0
 */

void recovered_10000db0(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd0
 */

int recovered_10000dd0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000de0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000e30(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000e80(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ed0
 */

void * recovered_10000ed0(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  if (bytes == 0) {
    return dst;
  }
  if ((ulong)((long)dst - (long)src) < 0x20 || bytes < 4) {
    uVar5 = 0;
  }
  else {
    if (bytes < 0x20) {
      uVar6 = 0;
    }
    else {
      uVar5 = bytes & 0xffffffffffffffe0;
      uVar6 = 0;
      do {
        uVar2 = ((undefined8 *)((long)src + uVar6))[1];
        puVar1 = (undefined8 *)((long)src + uVar6 + 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined8 *)((long)dst + uVar6) = *(undefined8 *)((long)src + uVar6);
        ((undefined8 *)((long)dst + uVar6))[1] = uVar2;
        puVar1 = (undefined8 *)((long)dst + uVar6 + 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        uVar6 = uVar6 + 0x20;
      } while (uVar5 != uVar6);
      if (uVar5 == bytes) {
        return dst;
      }
      uVar6 = uVar5;
      if ((bytes & 0x1c) == 0) goto LAB_10000f76;
    }
    uVar5 = bytes & 0xfffffffffffffffc;
    do {
      *(undefined4 *)((long)dst + uVar6) = *(undefined4 *)((long)src + uVar6);
      uVar6 = uVar6 + 4;
    } while (uVar5 != uVar6);
    if (uVar5 == bytes) {
      return dst;
    }
  }
LAB_10000f76:
  uVar7 = bytes & 3;
  uVar6 = uVar5;
  if (uVar7 != 0) {
    do {
      *(undefined1 *)((long)dst + uVar6) = *(undefined1 *)((long)src + uVar6);
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uVar5 - bytes < 0xfffffffffffffffd) {
    do {
      *(undefined1 *)((long)dst + uVar6) = *(undefined1 *)((long)src + uVar6);
      *(undefined1 *)((long)dst + uVar6 + 1) = *(undefined1 *)((long)src + uVar6 + 1);
      *(undefined1 *)((long)dst + uVar6 + 2) = *(undefined1 *)((long)src + uVar6 + 2);
      *(undefined1 *)((long)dst + uVar6 + 3) = *(undefined1 *)((long)src + uVar6 + 3);
      uVar6 = uVar6 + 4;
    } while (bytes != uVar6);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

void * recovered_10000fe0(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;

  if (bytes == 0 || dst == src) {
    return dst;
  }
  if (dst < src) {
    if ((ulong)((long)dst - (long)src) < 0x20 || bytes < 4) {
      uVar6 = 0;
    }
    else {
      if (bytes < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar6 = bytes & 0xffffffffffffffe0;
        uVar8 = 0;
        do {
          uVar3 = ((undefined8 *)((long)src + uVar8))[1];
          puVar2 = (undefined8 *)((long)src + uVar8 + 0x10);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          *(undefined8 *)((long)dst + uVar8) = *(undefined8 *)((long)src + uVar8);
          ((undefined8 *)((long)dst + uVar8))[1] = uVar3;
          puVar2 = (undefined8 *)((long)dst + uVar8 + 0x10);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          uVar8 = uVar8 + 0x20;
        } while (uVar6 != uVar8);
        if (uVar6 == bytes) {
          return dst;
        }
        uVar8 = uVar6;
        if ((bytes & 0x1c) == 0) goto LAB_100010ba;
      }
      uVar6 = bytes & 0xfffffffffffffffc;
      do {
        *(undefined4 *)((long)dst + uVar8) = *(undefined4 *)((long)src + uVar8);
        uVar8 = uVar8 + 4;
      } while (uVar6 != uVar8);
      if (uVar6 == bytes) {
        return dst;
      }
    }
LAB_100010ba:
    uVar9 = bytes & 3;
    uVar8 = uVar6;
    if (uVar9 != 0) {
      do {
        *(undefined1 *)((long)dst + uVar8) = *(undefined1 *)((long)src + uVar8);
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar6 - bytes < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)((long)dst + uVar8) = *(undefined1 *)((long)src + uVar8);
        *(undefined1 *)((long)dst + uVar8 + 1) = *(undefined1 *)((long)src + uVar8 + 1);
        *(undefined1 *)((long)dst + uVar8 + 2) = *(undefined1 *)((long)src + uVar8 + 2);
        *(undefined1 *)((long)dst + uVar8 + 3) = *(undefined1 *)((long)src + uVar8 + 3);
        uVar8 = uVar8 + 4;
      } while (bytes != uVar8);
    }
    return dst;
  }
  if ((ulong)((long)src - (long)dst) < 0x10 || bytes < 4) {
LAB_10001033:
    uVar8 = bytes;
  }
  else {
    if (bytes < 0x10) {
      uVar6 = 0;
    }
    else {
      uVar6 = bytes & 0xfffffffffffffff0;
      lVar7 = 0;
      do {
        puVar2 = (undefined8 *)((long)src + lVar7 + (bytes - 0x10));
        uVar3 = puVar2[1];
        puVar1 = (undefined8 *)((long)dst + lVar7 + (bytes - 0x10));
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        lVar7 = lVar7 + -0x10;
      } while (-lVar7 != uVar6);
      if (uVar6 == bytes) {
        return dst;
      }
      if ((bytes & 0xc) == 0) {
        bytes = (ulong)((uint)bytes & 0xf);
        goto LAB_10001033;
      }
    }
    uVar8 = (ulong)((uint)bytes & 3);
    lVar7 = -uVar6;
    do {
      *(undefined4 *)((long)dst + lVar7 + (bytes - 4)) =
           *(undefined4 *)((long)src + lVar7 + (bytes - 4));
      lVar7 = lVar7 + -4;
    } while (-lVar7 != (bytes & 0xfffffffffffffffc));
    if ((bytes & 0xfffffffffffffffc) == bytes) {
      return dst;
    }
  }
  uVar9 = uVar8;
  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)((long)dst + (uVar9 - 1)) = *(undefined1 *)((long)src + (uVar9 - 1));
    uVar9 = uVar9 - 1;
  }
  if (uVar8 - 1 < 3) {
    return dst;
  }
  do {
    *(undefined1 *)((long)dst + (uVar9 - 1)) = *(undefined1 *)((long)src + (uVar9 - 1));
    *(undefined1 *)((long)dst + (uVar9 - 2)) = *(undefined1 *)((long)src + (uVar9 - 2));
    *(undefined1 *)((long)dst + (uVar9 - 3)) = *(undefined1 *)((long)src + (uVar9 - 3));
    *(undefined1 *)((long)dst + (uVar9 - 4)) = *(undefined1 *)((long)src + (uVar9 - 4));
    uVar9 = uVar9 - 4;
  } while (uVar9 != 0);
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001240
 */

void * recovered_10001240(void *dst,int byte,ulong bytes)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint128 auVar6;

  if (bytes == 0) {
    return dst;
  }
  uVar3 = (undefined1)byte;
  if (bytes < 4) {
    uVar2 = 0;
  }
  else {
    if (bytes < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar2 = bytes & 0xffffffffffffffe0;
      auVar6 = pshuflw(ZEXT216(CONCAT11(uVar3,uVar3)),ZEXT216(CONCAT11(uVar3,uVar3)),0);
      uVar5 = PF_PART4(auVar6, 0);
      uVar4 = 0;
      do {
        puVar1 = (undefined4 *)((long)dst + uVar4);
        *puVar1 = uVar5;
        puVar1[1] = uVar5;
        puVar1[2] = uVar5;
        puVar1[3] = uVar5;
        puVar1 = (undefined4 *)((long)dst + uVar4 + 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar5;
        puVar1[2] = uVar5;
        puVar1[3] = uVar5;
        uVar4 = uVar4 + 0x20;
      } while (uVar2 != uVar4);
      if (uVar2 == bytes) {
        return dst;
      }
      uVar4 = uVar2;
      if ((bytes & 0x1c) == 0) goto LAB_100012f0;
    }
    uVar2 = bytes & 0xfffffffffffffffc;
    auVar6 = pshuflw(ZEXT216(CONCAT11(uVar3,uVar3)),ZEXT216(CONCAT11(uVar3,uVar3)),0);
    do {
      *(int *)((long)dst + uVar4) = PF_PART4(auVar6, 0);
      uVar4 = uVar4 + 4;
    } while (uVar2 != uVar4);
    if (uVar2 == bytes) {
      return dst;
    }
  }
LAB_100012f0:
  do {
    *(undefined1 *)((long)dst + uVar2) = uVar3;
    uVar2 = uVar2 + 1;
  } while (bytes != uVar2);
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

void recovered_10001300(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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
      if ((param_2 & 0x18) == 0) goto LAB_10001380;
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
LAB_10001380:
  do {
    *(undefined1 *)(param_1 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

void recovered_10001390(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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
      if ((param_2 & 0x18) == 0) goto LAB_10001410;
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
LAB_10001410:
  do {
    *(undefined1 *)(param_1 + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001420
 */

int recovered_10001420(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001450
 */

bool recovered_10001450(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001470
 */

bool recovered_10001470(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001490
 */

bool recovered_10001490(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

bool recovered_100014b0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

bool recovered_100014e0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001500
 */

bool recovered_10001500(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001520
 */

int recovered_10001520(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001540
 */

int recovered_10001540(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001560
 */

ulong recovered_10001560(char *text)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001590
 */

int recovered_10001590(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d0
 */

int recovered_100015d0(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001610
 */

void recovered_10001610(long param_1,long param_2)

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
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

long recovered_10001630(long param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  if (param_1 == 0) {
    return 0;
  }
  uVar11 = 0;
  uVar4 = 1;
  do {
    uVar8 = uVar4;
    pcVar1 = (char *)(param_1 + uVar11);
    uVar11 = uVar11 + 1;
    uVar4 = uVar8 + 1;
  } while (*pcVar1 != '\0');
  iVar3 = Ram0000000000006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x4f < uVar4)) {
    uVar4 = UINT_0000684c;
    if (((code *)(ulong)uVar4 != (code *)0x0) &&
       (pvVar9 = (*(code *)(ulong)uVar4)((uint)uVar11), pvVar9 != (void *)0x0)) {
      if (uVar11 == 0) {
        return (long)pvVar9;
      }
      uVar10 = 0;
      if ((3 < uVar11) && (0x1f < (ulong)((long)pvVar9 - param_1))) {
        if (uVar11 < 0x20) {
          uVar12 = 0;
        }
        else {
          uVar10 = uVar11 & 0xffffffffffffffe0;
          uVar12 = 0;
          do {
            uVar5 = ((undefined8 *)(param_1 + uVar12))[1];
            puVar2 = (undefined8 *)(param_1 + 0x10 + uVar12);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            *(undefined8 *)((long)pvVar9 + uVar12) = *(undefined8 *)(param_1 + uVar12);
            ((undefined8 *)((long)pvVar9 + uVar12))[1] = uVar5;
            puVar2 = (undefined8 *)((long)pvVar9 + uVar12 + 0x10);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            uVar12 = uVar12 + 0x20;
          } while (uVar10 != uVar12);
          if (uVar11 == uVar10) {
            return (long)pvVar9;
          }
          uVar12 = uVar10;
          if ((uVar11 & 0x1c) == 0) goto LAB_10001731;
        }
        uVar10 = uVar11 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)((long)pvVar9 + uVar12) = *(undefined4 *)(param_1 + uVar12);
          uVar12 = uVar12 + 4;
        } while (uVar10 != uVar12);
        if (uVar11 == uVar10) {
          return (long)pvVar9;
        }
      }
LAB_10001731:
      uVar12 = ~uVar10;
      if ((uVar11 & 3) != 0) {
        uVar13 = (ulong)(uVar8 & 3);
        do {
          *(undefined1 *)((long)pvVar9 + uVar10) = *(undefined1 *)(param_1 + uVar10);
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (uVar12 + uVar11 < 3) {
        return (long)pvVar9;
      }
      do {
        *(undefined1 *)((long)pvVar9 + uVar10) = *(undefined1 *)(param_1 + uVar10);
        *(undefined1 *)((long)pvVar9 + uVar10 + 1) = *(undefined1 *)(param_1 + 1 + uVar10);
        *(undefined1 *)((long)pvVar9 + uVar10 + 2) = *(undefined1 *)(param_1 + 2 + uVar10);
        *(undefined1 *)((long)pvVar9 + uVar10 + 3) = *(undefined1 *)(param_1 + 3 + uVar10);
        uVar10 = uVar10 + 4;
      } while (uVar11 != uVar10);
      return (long)pvVar9;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a0
 */

char * recovered_100017a0(char *param_1,char param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e0
 */

long recovered_100017e0(char *param_1,char *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001840
 */

char * recovered_10001840(char *param_1,char *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a0
 */

char * recovered_100018a0(char *param_1,char *param_2)

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


#undef DAT_100092c8
#define DAT_100092c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001900
 */

undefined * recovered_10001900(void)

{
  unsigned char frame[64] = {0};

  return &DAT_100092c8;
}

#undef DAT_100092c8

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1ee8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

undefined ** recovered_10001910(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000b000;
}

#undef PTR_DAT_1000b000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001920
 */

undefined8 recovered_10001920(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001940
 */

double recovered_10001940(double param_1,uint param_2)

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

#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10001a10(double param_1,int *param_2)

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
#undef DAT_100091a0
#undef _DAT_100091a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae0
 */

double recovered_10001ae0(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (double)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

double recovered_10001b10(double param_1,double param_2)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b90
 */

ulong recovered_10001b90(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(param_1 < (double)(int)param_1);
  return ~uVar1 & (ulong)(double)(int)param_1 | (ulong)(double)((int)param_1 + -1) & uVar1;
}


#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bc0
 */

ulong recovered_10001bc0(double param_1)

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

#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c20
 */

double recovered_10001c20(double param_1)

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

#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009130
#define DAT_10009130 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10009138
#define DAT_10009138 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10009140
#define DAT_10009140 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10009148
#define DAT_10009148 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10009150
#define DAT_10009150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10009158
#define DAT_10009158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_100091b0
#define DAT_100091b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_100091c0
#define DAT_100091c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_100091d0
#define DAT_100091d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_100091e0
#define DAT_100091e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef _DAT_10009150
#define _DAT_10009150 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_10009158
#define _DAT_10009158 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_100091b0
#define _DAT_100091b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x98U)))
#undef _DAT_100091c0
#define _DAT_100091c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef _DAT_100091d0
#define _DAT_100091d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef _DAT_100091e0
#define _DAT_100091e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001dd0(double param_1)

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
#undef DAT_10009150
#undef DAT_10009158
#undef DAT_100091b0
#undef DAT_100091c0
#undef DAT_100091d0
#undef DAT_100091e0
#undef _DAT_10009150
#undef _DAT_10009158
#undef _DAT_100091b0
#undef _DAT_100091c0
#undef _DAT_100091d0
#undef _DAT_100091e0

#undef DAT_100091f0
#define DAT_100091f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

long recovered_10001f20(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_100091f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100091f0

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009160
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10009168
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10009170
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10009178
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10009180
#define DAT_10009180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10009200
#define DAT_10009200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
#undef _DAT_10009180
#define _DAT_10009180 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_10009200
#define _DAT_10009200 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001f50(double param_1)

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
#undef DAT_10009180
#undef DAT_10009200
#undef _DAT_10009180
#undef _DAT_10009200

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009160
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10009168
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10009170
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10009178
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10009188
#define DAT_10009188 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10009210
#define DAT_10009210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef _DAT_10009210
#define _DAT_10009210 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10002000(double param_1)

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
#undef DAT_10009210
#undef _DAT_10009210

#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100020a0(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)(_DAT_100091a0 ^ (ulong)param_1);
  if ((double)(_DAT_100091a0 ^ (ulong)param_1) <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}

#undef DAT_100091a0
#undef _DAT_100091a0

#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009190
#define DAT_10009190 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100020c0(double param_1)

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
#undef DAT_100091a0
#undef _DAT_100091a0

#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009190
#define DAT_10009190 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

ulong recovered_10002190(double param_1)

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

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002240
 */

double recovered_10002240(ulong param_1)

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

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10002290(ulong param_1)

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
#undef DAT_100091a0
#undef _DAT_100091a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002320
 */

float recovered_10002320(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 0.0;
  }
  return param_1 - (float)(int)(param_1 / param_2) * param_2;
}


#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef UNK_100091a4
#define UNK_100091a4 (*(uint *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint *)(((uintptr_t)pf_module_state + 0x88U)))
#undef uRam00000000100091a4
#define uRam00000000100091a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002370(float param_1,int *param_2)

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
#undef DAT_100091a0
#undef UNK_100091a4
#undef _DAT_100091a0
#undef uRam00000000100091a4

#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002430
 */

undefined8 recovered_10002430(float param_1,uint param_2)

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

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009230
#define DAT_10009230 (*(float *)(((uintptr_t)pf_module_state + 0x118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002520
 */

float recovered_10002520(float param_1,float param_2)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b0
 */

undefined8 recovered_100025b0(void)

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


#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025f0
 */

float recovered_100025f0(float param_1)

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

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002650
 */

double recovered_10002650(double param_1)

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

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026b0
 */

undefined8 recovered_100026b0(undefined8 param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002720
 */

float recovered_10002720(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001c20((double)param_1);
  return (float)dVar1;
}


#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009138
#define DAT_10009138 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10009140
#define DAT_10009140 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10009148
#define DAT_10009148 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10009150
#define DAT_10009150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10009158
#define DAT_10009158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_100091b0
#define DAT_100091b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#undef DAT_100091c0
#define DAT_100091c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_100091d0
#define DAT_100091d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_100091e0
#define DAT_100091e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef DAT_10009234
#define DAT_10009234 (*(float *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_10009238
#define DAT_10009238 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef _DAT_10009150
#define _DAT_10009150 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_10009158
#define _DAT_10009158 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_100091b0
#define _DAT_100091b0 (*(uint128 *)(((uintptr_t)pf_module_state + 0x98U)))
#undef _DAT_100091c0
#define _DAT_100091c0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef _DAT_100091d0
#define _DAT_100091d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef _DAT_100091e0
#define _DAT_100091e0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xc8U)))
#undef _DAT_10009238
#define _DAT_10009238 (*(float *)(((uintptr_t)pf_module_state + 0x120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10002740(float param_1)

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
#undef DAT_10009150
#undef DAT_10009158
#undef DAT_100091b0
#undef DAT_100091c0
#undef DAT_100091d0
#undef DAT_100091e0
#undef DAT_10009234
#undef DAT_10009238
#undef _DAT_10009150
#undef _DAT_10009158
#undef _DAT_100091b0
#undef _DAT_100091c0
#undef _DAT_100091d0
#undef _DAT_100091e0
#undef _DAT_10009238

#undef DAT_100091f0
#define DAT_100091f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

long recovered_10002890(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_100091f0 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_100091f0

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009160
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10009168
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10009170
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10009178
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10009180
#define DAT_10009180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10009200
#define DAT_10009200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe8U)))
#undef _DAT_10009180
#define _DAT_10009180 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_10009200
#define _DAT_10009200 (*(uint128 *)(((uintptr_t)pf_module_state + 0xe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100028c0(float param_1)

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
#undef DAT_10009180
#undef DAT_10009200
#undef _DAT_10009180
#undef _DAT_10009200

#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009160
#define DAT_10009160 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10009168
#define DAT_10009168 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10009170
#define DAT_10009170 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10009178
#define DAT_10009178 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10009188
#define DAT_10009188 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10009210
#define DAT_10009210 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef _DAT_10009210
#define _DAT_10009210 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10002970(float param_1)

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
#undef DAT_10009210
#undef _DAT_10009210

#undef DAT_10009220
#define DAT_10009220 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_10009224
#define UNK_10009224 (*(uint *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_10009220
#define _DAT_10009220 (*(uint *)(((uintptr_t)pf_module_state + 0x108U)))
#undef uRam0000000010009224
#define uRam0000000010009224 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002a10(undefined8 param_1)

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

#undef DAT_10009220
#undef UNK_10009224
#undef _DAT_10009220
#undef uRam0000000010009224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a30
 */

long recovered_10002a30(byte *param_1,undefined8 *param_2,uint param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b60
 */

long recovered_10002b60(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009198
#define DAT_10009198 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10002c90(byte *param_1,undefined8 *param_2)

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
#undef DAT_100091a0
#undef _DAT_100091a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

float recovered_10002ef0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RSI;
  byte *in_RDI;
  double dVar1;

  dVar1 = recovered_10002c90(in_RDI,in_RSI);
  return (float)dVar1;
}


#undef DAT_10009198
#define DAT_10009198 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_100091a0
#define DAT_100091a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef DAT_100092cd
#define DAT_100092cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b5U)))
#undef _DAT_100091a0
#define _DAT_100091a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef str_100092d4
#define str_100092d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_100092e5
#define str_100092e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
#define acStack_5a (*(char (*)[42])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10002f00(char *param_1,ulong param_2,char *param_3,uint *param_4)

{
  unsigned char frame[138] = {0};

  bool bVar1;
  double dVar2;
  ulong uVar3;
  int iVar4;
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
  uVar3 = _DAT_100091a0;
  dVar2 = DAT_10009198;
  uVar9 = 0;
  uVar12 = param_2;
LAB_10002f6b:
  cVar7 = *param_3;
  iVar4 = (int)uVar9;
  if (cVar7 != '%') {
    if (cVar7 == '\0') {
      if (param_2 != 0) {
        *param_1 = '\0';
      }
      return uVar9;
    }
    if (1 < uVar12) {
      *param_1 = cVar7;
LAB_10002f60:
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
    }
LAB_10002f66:
    uVar9 = (ulong)(iVar4 + 1);
    goto LAB_10002f68;
  }
  cVar7 = param_3[1];
  param_3 = param_3 + 1;
  if (cVar7 == '%') {
    if (1 < uVar12) {
      *param_1 = '%';
      goto LAB_10002f60;
    }
    goto LAB_10002f66;
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
LAB_10003000:
  switch((uintptr_t)(cVar7)) {
  case 'I':
  case 'd':
  case 'i':
    goto switchD_10003019_caseD_49;
  default:
    if (uVar12 < 2) goto LAB_10002f66;
    *param_1 = '?';
    goto LAB_10002f60;
  case 'X':
    uVar13 = *param_4;
    if ((ulong)uVar13 < 0x29) {
      puVar5 = (uint *)((ulong)uVar13 + *(long *)(param_4 + 4));
      *param_4 = uVar13 + 8;
    }
    else {
      puVar5 = *(uint **)(param_4 + 2);
      *(uint **)(param_4 + 2) = puVar5 + 2;
    }
    uVar9 = (ulong)*puVar5;
    uVar6 = 0;
    uVar13 = *puVar5;
    do {
      uVar10 = uVar6;
      acStack_5a[uVar10 + 2] = str_100092d4[uVar13 & 0xf];
      uVar6 = uVar10 + 1;
      uVar9 = uVar9 >> 4;
      bVar1 = 0xf < uVar13;
      uVar13 = (uint)uVar9;
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
    uVar13 = *param_4;
    if ((ulong)uVar13 < 0x29) {
      pcVar17 = (char *)((ulong)uVar13 + *(long *)(param_4 + 4));
      *param_4 = uVar13 + 8;
    }
    else {
      pcVar17 = *(char **)(param_4 + 2);
      *(char **)(param_4 + 2) = pcVar17 + 8;
    }
    if (uVar12 < 2) goto LAB_10002f66;
    *param_1 = *pcVar17;
    goto LAB_10002f60;
  case 'f':
    uVar13 = param_4[1];
    if ((ulong)uVar13 < 0xa1) {
      pdVar16 = (double *)((ulong)uVar13 + *(long *)(param_4 + 4));
      param_4[1] = uVar13 + 0x10;
    }
    else {
      pdVar16 = *(double **)(param_4 + 2);
      *(double **)(param_4 + 2) = pdVar16 + 1;
    }
    dVar18 = *pdVar16;
    uVar8 = uVar12;
    if (dVar18 < 0.0) {
      if (1 < uVar12) {
        *param_1 = '-';
        param_1 = param_1 + 1;
        uVar12 = uVar12 - 1;
      }
      uVar9 = (ulong)(iVar4 + 1);
      dVar18 = (double)((ulong)dVar18 ^ uVar3);
      uVar8 = uVar12;
    }
    iVar4 = (int)uVar9;
    uVar12 = 0;
    uVar13 = (int)dVar18;
    do {
      uVar9 = uVar12;
      acStack_5a[uVar9 + 2] = str_100092e5[uVar13 % 10];
      uVar12 = uVar9 + 1;
      bVar1 = 9 < uVar13;
      uVar13 = uVar13 / 10;
    } while (bVar1);
    if (uVar12 != 0) {
      if ((uVar9 & 1) == 0) {
        if (1 < uVar8) {
          *param_1 = acStack_5a[uVar9 + 2];
          param_1 = param_1 + 1;
          uVar8 = uVar8 - 1;
        }
      }
      else {
        uVar9 = uVar12;
      }
      iVar4 = iVar4 + (int)uVar12;
      if (uVar12 != 1) {
        do {
          if (1 < uVar8) {
            *param_1 = acStack_5a[uVar9 + 1];
            param_1 = param_1 + 1;
            uVar8 = uVar8 - 1;
          }
          if (1 < uVar8) {
            *param_1 = acStack_5a[uVar9];
            param_1 = param_1 + 1;
            uVar8 = uVar8 - 1;
          }
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
    }
    uVar12 = uVar8;
    if (1 < uVar8) {
      *param_1 = '.';
      uVar12 = uVar8 - 1;
      if (uVar12 < 2) {
        param_1 = param_1 + 1;
      }
      else {
        dVar18 = (dVar18 - (double)(int)dVar18) * dVar2;
        iVar11 = (int)dVar18;
        param_1[1] = (char)iVar11 + '0';
        uVar9 = uVar8 & 0xfffffffffffffffe;
        uVar12 = 1;
        if (uVar9 == 2) {
          param_1 = param_1 + 2;
        }
        else {
          dVar18 = (dVar18 - (double)iVar11) * dVar2;
          iVar11 = (int)dVar18;
          param_1[2] = (char)iVar11 + '0';
          if (uVar8 - 5 < 0xfffffffffffffffe) {
            dVar18 = (dVar18 - (double)iVar11) * dVar2;
            iVar11 = (int)dVar18;
            param_1[3] = (char)iVar11 + '0';
            if (uVar9 == 4) {
              param_1 = param_1 + 4;
            }
            else {
              dVar18 = (dVar18 - (double)iVar11) * dVar2;
              param_1[4] = (char)(int)dVar18 + '0';
              if (uVar8 - 7 < 0xfffffffffffffffe) {
                dVar18 = (dVar18 - (double)(int)dVar18) * dVar2;
                iVar11 = (int)dVar18;
                param_1[5] = (char)iVar11 + '0';
                if (uVar9 == 6) {
                  param_1 = param_1 + 6;
                }
                else {
                  param_1[6] = (char)(int)((dVar18 - (double)iVar11) * dVar2) + '0';
                  param_1 = param_1 + 7;
                  uVar12 = uVar8 - 7;
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
    uVar9 = (ulong)(iVar4 + 7);
    param_3 = param_3 + 1;
    goto LAB_10002f6b;
  case 'h':
  case 'l':
  case 't':
  case 'z':
    goto switchD_10003019_caseD_68;
  case 'p':
    uVar13 = *param_4;
    if ((ulong)uVar13 < 0x29) {
      puVar15 = (ulong *)((ulong)uVar13 + *(long *)(param_4 + 4));
      *param_4 = uVar13 + 8;
    }
    else {
      puVar15 = *(ulong **)(param_4 + 2);
      *(ulong **)(param_4 + 2) = puVar15 + 1;
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
      acStack_5a[uVar10 + 2] = str_100092e5[uVar13 & 0xf];
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
    uVar9 = (iVar4 + 2) + uVar9;
    param_3 = param_3 + 1;
    goto LAB_10002f6b;
  case 's':
    uVar13 = *param_4;
    if ((ulong)uVar13 < 0x29) {
      puVar14 = (undefined8 *)((ulong)uVar13 + *(long *)(param_4 + 4));
      *param_4 = uVar13 + 8;
    }
    else {
      puVar14 = *(undefined8 **)(param_4 + 2);
      *(undefined8 **)(param_4 + 2) = puVar14 + 1;
    }
    pcVar17 = (char *)*puVar14;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = &DAT_100092cd;
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
    goto LAB_10002f68;
  case 'u':
    goto switchD_10003019_caseD_75;
  case 'x':
    uVar13 = *param_4;
    if ((ulong)uVar13 < 0x29) {
      puVar5 = (uint *)((ulong)uVar13 + *(long *)(param_4 + 4));
      *param_4 = uVar13 + 8;
    }
    else {
      puVar5 = *(uint **)(param_4 + 2);
      *(uint **)(param_4 + 2) = puVar5 + 2;
    }
    uVar9 = (ulong)*puVar5;
    uVar6 = 0;
    uVar13 = *puVar5;
    do {
      uVar10 = uVar6;
      acStack_5a[uVar10 + 2] = str_100092e5[uVar13 & 0xf];
      uVar6 = uVar10 + 1;
      uVar9 = uVar9 >> 4;
      bVar1 = 0xf < uVar13;
      uVar13 = (uint)uVar9;
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
  goto LAB_10002f6b;
switchD_10003019_caseD_75:
  uVar13 = *param_4;
  if ((ulong)uVar13 < 0x29) {
    puVar5 = (uint *)((ulong)uVar13 + *(long *)(param_4 + 4));
    *param_4 = uVar13 + 8;
  }
  else {
    puVar5 = *(uint **)(param_4 + 2);
    *(uint **)(param_4 + 2) = puVar5 + 2;
  }
  uVar9 = 0;
  uVar13 = *puVar5;
  do {
    uVar6 = uVar9;
    acStack_5a[uVar6 + 2] = str_100092e5[uVar13 % 10];
    uVar9 = uVar6 + 1;
    bVar1 = 9 < uVar13;
    uVar13 = uVar13 / 10;
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
  goto LAB_10002f6b;
switchD_10003019_caseD_68:
  cVar7 = param_3[1];
  param_3 = param_3 + 1;
  goto LAB_10003000;
switchD_10003019_caseD_49:
  uVar13 = *param_4;
  if ((ulong)uVar13 < 0x29) {
    puVar5 = (uint *)((ulong)uVar13 + *(long *)(param_4 + 4));
    *param_4 = uVar13 + 8;
  }
  else {
    puVar5 = *(uint **)(param_4 + 2);
    *(uint **)(param_4 + 2) = puVar5 + 2;
  }
  uVar13 = *puVar5;
  if ((int)uVar13 < 0) {
    if (1 < uVar12) {
      *param_1 = '-';
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
    }
    uVar9 = (ulong)(iVar4 + 1);
    uVar13 = -uVar13;
  }
  uVar9 = uVar9 & 0xffffffff;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    acStack_5a[uVar6 + 2] = str_100092e5[uVar13 % 10];
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
LAB_10002f68:
    param_3 = param_3 + 1;
  }
  goto LAB_10002f6b;
}

#undef DAT_10009198
#undef DAT_100091a0
#undef DAT_100092cd
#undef _DAT_100091a0
#undef str_100092d4
#undef str_100092e5
#undef acStack_5a

#define uStack0000000000000008 (*(undefined1 *)(frame + 240))
#define local_d8 (*(undefined1 (*)[48])(frame + 16))
#define local_a8 (*(undefined8 *)(frame + 64))
#define local_98 (*(undefined8 *)(frame + 80))
#define local_88 (*(undefined8 *)(frame + 96))
#define local_78 (*(undefined8 *)(frame + 112))
#define local_68 (*(undefined8 *)(frame + 128))
#define local_58 (*(undefined8 *)(frame + 144))
#define local_48 (*(undefined8 *)(frame + 160))
#define local_38 (*(undefined8 *)(frame + 176))
#define local_28 (*(uint (*)[2])(frame + 192))
#define local_20 (*(undefined1 * *)(frame + 200))
#define local_18 (*(undefined1 * *)(frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

void recovered_10003930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  unsigned char frame[264] = {0};

  char in_AL;
  char *in_RDX;
  ulong in_RSI;
  char *in_RDI;

  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_18 = local_d8;
  local_20 = &uStack0000000000000008;
  local_28[0] = 0x18;
  local_28[1] = 0x30;
  recovered_10002f00(in_RDI,in_RSI,in_RDX,local_28);
  return;
}

#undef uStack0000000000000008
#undef local_d8
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

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2018U)))
#undef DAT_1000b140
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2028U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_238 (*(char (*)[520])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

void recovered_100039b0(long param_1,long param_2)

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
            recovered_10000ed0(local_238,&DAT_1000b140,DAT_1000b130);
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
            recovered_10000ed0(local_238,&DAT_1000b140,DAT_1000b130);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef local_238

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2018U)))
#undef DAT_1000b140
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2028U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b80
 */

void recovered_10003b80(void)

{
  unsigned char frame[568] = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;

  if (DAT_1000b130 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10000ed0(local_208,&DAT_1000b140,DAT_1000b130);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef local_208

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2018U)))
#undef DAT_1000b140
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2028U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c20
 */

void recovered_10003c20(void)

{
  unsigned char frame[568] = {0};

  int iVar1;
  uint uVar2;

  if (DAT_1000b130 != 0) {
    recovered_10000ed0(local_208,&DAT_1000b140,DAT_1000b130);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef local_208

#define local_148 (*(undefined1 (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cc0
 */

void recovered_10003cc0(undefined *param_1,undefined1 *param_2)

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

  recovered_10003930(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                     in_XMM7_Qa);
  if (0 < (int)extraout_EAX) {
    recovered_100039b0((long)local_148,(ulong)extraout_EAX);
  }
  return;
}

#undef local_148

#undef DAT_100093e0
#define DAT_100093e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_100092f9
#define str_100092f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e1U)))
#undef str_1000931c
#define str_1000931c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204U)))
#undef str_10009355
#define str_10009355 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23dU)))
#undef str_1000938a
#define str_1000938a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x272U)))
#undef str_100093b0
#define str_100093b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d20
 */

void recovered_10003d20(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10001560(str_100092f9);
  recovered_100039b0(((uintptr_t)pf_module_state+0x1e1U),uVar1);
  uVar1 = recovered_10001560(str_1000931c);
  recovered_100039b0(((uintptr_t)pf_module_state+0x204U),uVar1);
  uVar1 = recovered_10001560(str_10009355);
  recovered_100039b0(((uintptr_t)pf_module_state+0x23dU),uVar1);
  uVar1 = recovered_10001560(str_1000938a);
  recovered_100039b0(((uintptr_t)pf_module_state+0x272U),uVar1);
  uVar1 = recovered_10001560(str_100093b0);
  recovered_100039b0(((uintptr_t)pf_module_state+0x298U),uVar1);
  uVar1 = recovered_10001560(&DAT_100093e0);
  recovered_100039b0(((uintptr_t)pf_module_state+0x2c8U),uVar1);
  return;
}

#undef DAT_100093e0
#undef str_100092f9
#undef str_1000931c
#undef str_10009355
#undef str_1000938a
#undef str_100093b0

#undef DAT_100093e0
#define DAT_100093e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef str_100093e3
#define str_100093e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd0
 */

void recovered_10003dd0(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10001560(str_100093e3);
  recovered_100039b0(((uintptr_t)pf_module_state+0x2cbU),uVar1);
  uVar1 = recovered_10001560(&DAT_100093e0);
  recovered_100039b0(((uintptr_t)pf_module_state+0x2c8U),uVar1);
  return;
}

#undef DAT_100093e0
#undef str_100093e3

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2018U)))
#undef DAT_1000b140
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2028U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_00006844
#define UINT_00006844 (*(uint *)(0x6844U))
#define local_228 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e10
 */

bool recovered_10003e10(long param_1,long param_2,char *param_3,byte param_4)

{
  unsigned char frame[600] = {0};

  uint uVar1;
  int iVar2;

  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (DAT_1000b130 != 0) {
    recovered_10000ed0(local_228,&DAT_1000b140,DAT_1000b130);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef UINT_00006844
#undef local_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f30
 */

undefined8 recovered_10003f30(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

void recovered_10003f40(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f50
 */

undefined1 recovered_10003f50(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef str_10009477
#define str_10009477 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#undef str_10009484
#define str_10009484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_10009492
#define str_10009492 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#define local_34 (*(uint *)(frame + 16))
#define local_30 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f60
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * recovered_10003f60(long param_1,long param_2)

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
  iVar4 = recovered_10001590((byte *)param_1,(byte *)str_10009477);
  if (iVar4 == 0) {
    uVar9 = 1;
LAB_1000420e:
    puVar6 = recovered_10000de0(0x340);
    if (puVar6 == (undefined4 *)0x0) {
      DAT_1000b060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001240(puVar6,0,0x340);
    *puVar6 = uVar9;
    *(bool *)(puVar6 + 0x49) = iVar4 == 0;
    *(bool *)((long)puVar6 + 0x125) = iVar4 != 0;
    puVar6[0x48] = 0xffffffff;
    recovered_10003930(extraout_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                       in_XMM6_Qa,in_XMM7_Qa);
    return puVar6;
  }
  iVar5 = recovered_10001590((byte *)param_1,(byte *)str_10009484);
  if (iVar5 == 0) {
    uVar9 = 2;
    goto LAB_1000420e;
  }
  iVar5 = recovered_10001590((byte *)param_1,(byte *)str_10009492);
  if (iVar5 == 0) {
    uVar9 = 3;
    goto LAB_1000420e;
  }
  puVar6 = recovered_10000de0(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_1000b060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001240(puVar6,0,0x340);
  *puVar6 = 0;
  pcVar7 = recovered_100017a0((char *)param_2,'r');
  bVar11 = true;
  bVar10 = true;
  if (pcVar7 == (char *)0x0) {
    pcVar7 = recovered_100017a0((char *)param_2,'+');
    bVar10 = true;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = recovered_100017a0((char *)param_2,'a');
      bVar10 = pcVar7 != (char *)0x0;
    }
  }
  *(bool *)(puVar6 + 0x49) = bVar10;
  pcVar7 = recovered_100017a0((char *)param_2,'w');
  if ((pcVar7 == (char *)0x0) &&
     (pcVar7 = recovered_100017a0((char *)param_2,'a'), pcVar7 == (char *)0x0)) {
    pcVar7 = recovered_100017a0((char *)param_2,'+');
    bVar11 = pcVar7 != (char *)0x0;
  }
  *(bool *)((long)puVar6 + 0x125) = bVar11;
  pcVar7 = recovered_100017a0((char *)param_2,'a');
  *(bool *)((long)puVar6 + 0x126) = pcVar7 != (char *)0x0;
  puVar6[0x48] = 0xffffffff;
  recovered_10003930(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                     in_XMM6_Qa,in_XMM7_Qa);
  recovered_10001240(&local_34,0,0xc);
  iVar4 = Ram0000000000006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x37 < uVar2)) {
    uVar2 = UINT_00006834;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar4 = (*(code *)(ulong)uVar2)(param_1,&local_34), iVar4 == 0)) goto LAB_100041de;
    pcVar7 = recovered_100017a0((char *)param_2,'w');
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
          dst = recovered_10000e80(*(void **)(puVar6 + 0x40),uVar8);
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
        recovered_10000ed0(dst,(void *)(ulong)local_34,bytes);
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
      recovered_10000e30(puVar6);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef str_10009477
#undef str_10009484
#undef str_10009492
#undef local_34
#undef local_30

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef str_10009477
#define str_10009477 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#undef str_10009484
#define str_10009484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_10009492
#define str_10009492 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#define uStack_34 (*(uint *)(frame + 16))
#define uStack_30 (*(ulong *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042f0
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * recovered_100042f0(long param_1,long param_2,int *param_3)

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
      recovered_10000e30(*(void **)(param_3 + 0x40));
    }
    uStack_30 = 0x100043c0;
    recovered_10000e30(param_3);
    puVar8 = recovered_10003f60(param_1,param_2);
    return puVar8;
  }
  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar5 = recovered_10001590((byte *)param_1,(byte *)str_10009477);
  if (iVar5 == 0) {
    uVar9 = 1;
LAB_1000420e:
    puVar8 = recovered_10000de0(0x340);
    if (puVar8 == (undefined4 *)0x0) {
      DAT_1000b060 = 0xc;
      return (undefined4 *)0x0;
    }
    recovered_10001240(puVar8,0,0x340);
    *puVar8 = uVar9;
    *(bool *)(puVar8 + 0x49) = iVar5 == 0;
    *(bool *)((long)puVar8 + 0x125) = iVar5 != 0;
    puVar8[0x48] = 0xffffffff;
    recovered_10003930(extraout_XMM0_Qa_00,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                       in_XMM6_Qa,in_XMM7_Qa);
    return puVar8;
  }
  iVar4 = recovered_10001590((byte *)param_1,(byte *)str_10009484);
  if (iVar4 == 0) {
    uVar9 = 2;
    goto LAB_1000420e;
  }
  iVar4 = recovered_10001590((byte *)param_1,(byte *)str_10009492);
  if (iVar4 == 0) {
    uVar9 = 3;
    goto LAB_1000420e;
  }
  puVar8 = recovered_10000de0(0x340);
  if (puVar8 == (undefined4 *)0x0) {
    DAT_1000b060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001240(puVar8,0,0x340);
  *puVar8 = 0;
  pcVar6 = recovered_100017a0((char *)param_2,'r');
  bVar11 = true;
  bVar10 = true;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = recovered_100017a0((char *)param_2,'+');
    bVar10 = true;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = recovered_100017a0((char *)param_2,'a');
      bVar10 = pcVar6 != (char *)0x0;
    }
  }
  *(bool *)(puVar8 + 0x49) = bVar10;
  pcVar6 = recovered_100017a0((char *)param_2,'w');
  if ((pcVar6 == (char *)0x0) &&
     (pcVar6 = recovered_100017a0((char *)param_2,'a'), pcVar6 == (char *)0x0)) {
    pcVar6 = recovered_100017a0((char *)param_2,'+');
    bVar11 = pcVar6 != (char *)0x0;
  }
  *(bool *)((long)puVar8 + 0x125) = bVar11;
  pcVar6 = recovered_100017a0((char *)param_2,'a');
  *(bool *)((long)puVar8 + 0x126) = pcVar6 != (char *)0x0;
  puVar8[0x48] = 0xffffffff;
  recovered_10003930(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                     in_XMM6_Qa,in_XMM7_Qa);
  recovered_10001240(&uStack_34,0,0xc);
  iVar5 = Ram0000000000006800;
  if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x37 < uVar2)))) {
    uVar2 = UINT_00006834;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar5 = (*(code *)(ulong)uVar2)((char *)param_1,&uStack_34), iVar5 == 0)) goto LAB_100041de;
    pcVar6 = recovered_100017a0((char *)param_2,'w');
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
          dst = recovered_10000e80(*(void **)(puVar8 + 0x40),uVar7);
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
        recovered_10000ed0(dst,(void *)(ulong)uStack_34,bytes);
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
      recovered_10000e30(puVar8);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef str_10009477
#undef str_10009484
#undef str_10009492
#undef uStack_34
#undef uStack_30

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043e0
 */

undefined8 recovered_100043e0(int *param_1)

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
    recovered_10000e30(*(void **)(param_1 + 0x40));
  }
  recovered_10000e30(param_1);
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b0
 */

long recovered_100044b0(long param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] = {0};

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
          uVar1 = recovered_10004540(param_4);
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
#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2018U)))
#undef DAT_1000b140
#define DAT_1000b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2028U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_00006844
#define UINT_00006844 (*(uint *)(0x6844U))
#define local_218 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004540
 */

uint recovered_10004540(int *param_1)

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
      recovered_10000ed0(local_218,&DAT_1000b140,DAT_1000b130);
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
          uVar3 = recovered_10001560((char *)((long)param_1 + 0x12a));
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100092cc
#undef DAT_1000b130
#undef DAT_1000b140
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006840
#undef UINT_00006844
#undef local_218

#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004730
 */

long recovered_10004730(long param_1,long param_2,long param_3,uint *param_4)

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
    recovered_100039b0(param_1,uVar5);
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
      pvVar3 = recovered_10000e80(*(void **)(param_4 + 0x40),uVar2);
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
      recovered_10001240((void *)(uVar2 + *(long *)(param_4 + 0x40)),0,uVar4 - uVar2);
      uVar4 = *(ulong *)(param_4 + 0x46);
    }
    recovered_10000ed0((void *)(uVar4 + *(long *)(param_4 + 0x40)),(void *)param_1,uVar5);
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

#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c0
 */

undefined8 recovered_100048c0(int *param_1,ulong param_2,int param_3)

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

#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004940
 */

undefined8 recovered_10004940(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_1000b060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000b060

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004970
 */

undefined8 recovered_10004970(int *param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a20
 */

undefined1 recovered_10004a20(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x128);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a40
 */

undefined1 recovered_10004a40(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x129);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a60
 */

void recovered_10004a60(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a80
 */

uint recovered_10004a80(uint param_1,long param_2)

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


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab0
 */

undefined8 recovered_10004ab0(long param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000683c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1000b060
#define DAT_1000b060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#define local_2c (*(uint *)(frame + 16))
#define local_28 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b30
 */

undefined8 recovered_10004b30(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b060 = 0x16;
    return 0xffffffff;
  }
  recovered_10001240(&local_2c,0,0xc);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b060
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_0000683c
#undef local_2c
#undef local_28

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
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ca0
 */

ulong recovered_10004ca0(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[100] = {0};

  uint uVar1;
  int iVar2;
  void *dst;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar3 = 0;
    recovered_10001240(&local_34,0,0xc);
    iVar2 = Ram0000000000006800;
    if (iVar2 != 0x50414d57) goto LAB_10004d5f;
    iVar2 = Ram0000000000006804;
    if (((iVar2 != 0) && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
       (uVar1 = Ram0000000000006808, 0x37 < uVar1)) {
      uVar1 = UINT_00006834;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)((char *)param_1,&local_34);
        if (iVar2 != 0) {
          dst = recovered_10000de0((ulong)(local_30 + (local_30 == 0)));
          if (dst != (void *)0x0) {
            if ((ulong)local_30 == 0) {
              uVar3 = 0;
            }
            else {
              recovered_10000ed0(dst,(void *)(ulong)local_34,(ulong)local_30);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef local_30
#undef local_34

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
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d80
 */

bool recovered_10004d80(long param_1,long param_2,long param_3)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df0
 */

undefined8 recovered_10004df0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e00
 */

void recovered_10004e00(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e10
 */

undefined8 recovered_10004e10(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e20
 */

undefined8 recovered_10004e20(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e30
 */

undefined8 recovered_10004e30(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e40
 */

char * recovered_10004e40(char *param_1,char param_2,long param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e70
 */

int recovered_10004e70(long param_1,long param_2,long param_3)

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


#undef DAT_10009406
#define DAT_10009406 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eeU)))
#undef str_10009409
#define str_10009409 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f1U)))
#undef str_10009416
#define str_10009416 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2feU)))
#undef str_10009420
#define str_10009420 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x308U)))
#undef str_10009434
#define str_10009434 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31cU)))
#undef str_10009442
#define str_10009442 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32aU)))
#undef str_10009454
#define str_10009454 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33cU)))
#undef str_10009460
#define str_10009460 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x348U)))
#undef str_10009471
#define str_10009471 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x359U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eb0
 */

char * recovered_10004eb0(undefined4 param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

undefined8 recovered_10004f80(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f90
 */

undefined8 recovered_10004f90(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000b340
#define DAT_1000b340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2228U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa0
 */

void recovered_10004fa0(void)

{
  unsigned char frame[64] = {0};

  DAT_1000b340 = DAT_1000b340 + 1;
  return;
}

#undef DAT_1000b340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc0
 */

void recovered_10004fc0(long param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10004fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fd0
 */

undefined8 recovered_10004fd0(undefined8 *param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

void recovered_10005000(long param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x1000502a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(code **)(param_1 + 0x38));
  return;
}


#undef DAT_10005081
#define DAT_10005081 (*(uint8_t *)(0x10005081U))
#undef DAT_100094b0
#define DAT_100094b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x398U)))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined * *)(frame + 72))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005030
 */

void recovered_10005030(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_100050b0;
  local_60 = &DAT_100094b0;
  local_50 = &DAT_10005081;
  local_80 = 1;
  recovered_10005630(&local_88);
  recovered_10000db0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10005081
#undef DAT_100094b0
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b0
 */

undefined8 recovered_100050b0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050c0
 */

void recovered_100050c0(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_100050d0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}


#undef DAT_1000b348
#define DAT_1000b348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050d0
 */

long recovered_100050d0(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000b348;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000b348 = param_1;
  lVar1 = recovered_100054f0(param_1);
  return lVar1;
}

#undef DAT_1000b348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005100
 */

long recovered_10005100(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000de0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000db0();
  }
  return (long)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005130
 */

long recovered_10005130(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000de0(param_1 + (ulong)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000db0();
  }
  return (long)pvVar1;
}


#undef DAT_100094c0
#define DAT_100094c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a8U)))
#undef LAB_100051cd
#define LAB_100051cd (*(uint8_t *)(0x100051cdU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005160
 */

void recovered_10005160(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_100050b0;
  local_60 = &DAT_100094c0;
  local_50 = &LAB_100051cd;
  local_80 = 1;
  recovered_10005630(&local_88);
  recovered_10000e30(param_1);
  recovered_10005650(&local_88);
  return;
}

#undef DAT_100094c0
#undef LAB_100051cd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100094d0
#define DAT_100094d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b8U)))
#undef LAB_1000526d
#define LAB_1000526d (*(uint8_t *)(0x1000526dU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005200
 */

void recovered_10005200(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_100050b0;
  local_60 = &DAT_100094d0;
  local_50 = &LAB_1000526d;
  local_80 = 1;
  recovered_10005630(&local_88);
  recovered_10000e30(param_1);
  recovered_10005650(&local_88);
  return;
}

#undef DAT_100094d0
#undef LAB_1000526d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100094e0
#define DAT_100094e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c8U)))
#undef LAB_1000530d
#define LAB_1000530d (*(uint8_t *)(0x1000530dU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052a0
 */

void recovered_100052a0(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_100050b0;
  local_60 = &DAT_100094e0;
  local_50 = &LAB_1000530d;
  local_80 = 1;
  recovered_10005630(&local_88);
  recovered_10000e30(param_1);
  recovered_10005650(&local_88);
  return;
}

#undef DAT_100094e0
#undef LAB_1000530d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100094f0
#define DAT_100094f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef LAB_100053ad
#define LAB_100053ad (*(uint8_t *)(0x100053adU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

void recovered_10005340(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_100050b0;
  local_60 = &DAT_100094f0;
  local_50 = &LAB_100053ad;
  local_80 = 1;
  recovered_10005630(&local_88);
  recovered_10000e30(param_1);
  recovered_10005650(&local_88);
  return;
}

#undef DAT_100094f0
#undef LAB_100053ad
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053e0
 */

undefined8 recovered_100053e0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053f0
 */

uint recovered_100053f0(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005400
 */

void recovered_10005400(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005410
 */

void recovered_10005410(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005420
 */

long recovered_10005420(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar2 = recovered_10000de0(size);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005030();
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054d0
 */

void recovered_100054d0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000e30((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054f0
 */

long recovered_100054f0(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000b348
#define DAT_1000b348 (*(void * *)(((uintptr_t)pf_module_state + 0x2230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

void recovered_10005500(void)

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
      recovered_10000e30(pointer);
      return;
    }
  }
  return;
}

#undef DAT_1000b348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

void recovered_10005550(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005580((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000b348
#define DAT_1000b348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_1000b350
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2238U)))
#define cStack_36 (*(char *)(frame + 18))
#define uStack_35 (*(undefined1 *)(frame + 19))
#define uStack_34 (*(undefined4 *)(frame + 20))
#define local_38 (*(undefined2 *)(frame + 16))
#define local_30 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005580
 */

void recovered_10005580(undefined8 *param_1)

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
      uVar3 = recovered_10005b70((long)plVar4,pbVar1,&local_38);
      if (((char)uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_100056d0(param_1);
        puVar2 = DAT_1000b348;
        if (DAT_1000b348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10005030();
        }
        *(undefined1 *)(DAT_1000b348 + 5) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10005580(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}

#undef DAT_1000b348
#undef DAT_1000b350
#undef cStack_36
#undef uStack_35
#undef uStack_34
#undef local_38
#undef local_30

#undef DAT_1000b348
#define DAT_1000b348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005600
 */

void recovered_10005600(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000b348;
  if (DAT_1000b348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005030();
  }
  *(undefined1 *)(DAT_1000b348 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005580(puVar1);
}

#undef DAT_1000b348

#undef DAT_1000b350
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005630
 */

void recovered_10005630(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000b350;
  DAT_1000b350 = param_1;
  return;
}

#undef DAT_1000b350

#undef DAT_1000b350
#define DAT_1000b350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

void recovered_10005650(undefined8 *param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005690
 */

void recovered_10005690(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;

                    /* WARNING: Subroutine does not return */
  recovered_10005580(in_RDI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

void recovered_100056a0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}


#undef DAT_1000b350
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2238U)))
#define uStack_40 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b0
 */

void recovered_100056b0(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  byte *in_RSI;
  undefined8 *puVar3;

  if (DAT_1000b350 != (undefined8 *)0x0) {
    DAT_1000b350 = (undefined8 *)*DAT_1000b350;
  }
  recovered_100056d0(param_1);
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
        recovered_10004fc0((long)puVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_100056b0(puVar3);
      }
      uStack_38 = 0;
      uStack_40 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10005b70((long)DAT_1000b350,in_RSI,(undefined2 *)&uStack_40);
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
  recovered_10005030();
}

#undef DAT_1000b350
#undef uStack_40
#undef uStack_38

#undef DAT_1000b350
#define DAT_1000b350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2238U)))
#define local_38 (*(undefined8 *)(frame + 16))
#define local_30 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

void recovered_100056d0(undefined8 *param_1)

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
        recovered_10004fc0((long)plVar3,in_RSI);
                    /* WARNING: Subroutine does not return */
        recovered_100056b0(plVar3);
      }
      local_30 = 0;
      local_38 = 0;
      in_RSI = (byte *)*param_1;
      recovered_10005b70((long)DAT_1000b350,in_RSI,(undefined2 *)&local_38);
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
  recovered_10005030();
}

#undef DAT_1000b350
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005770
 */

void recovered_10005770(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;

                    /* WARNING: Subroutine does not return */
  recovered_100056b0(in_RDI);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

undefined8 recovered_10005780(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005790
 */

void recovered_10005790(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}


#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

long recovered_100057a0(long *param_1,undefined8 param_2,undefined8 *param_3)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005880
 */

void recovered_10005880(void)

{
  unsigned char frame[64] = {0};

  recovered_10000db0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005890
 */

undefined8 recovered_10005890(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058a0
 */

bool recovered_100058a0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c0
 */

bool recovered_100058c0(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058f0
 */

bool recovered_100058f0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005910
 */

bool recovered_10005910(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005940
 */

bool recovered_10005940(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005960
 */

byte recovered_10005960(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a0
 */

bool recovered_100059a0(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10009120
#define DAT_10009120 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009148
#define DAT_10009148 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10009188
#define DAT_10009188 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059d0
 */

double recovered_100059d0(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)recovered_10001b90(param_1);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a20
 */

long recovered_10005a20(byte *param_1,undefined8 *param_2,uint param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

void recovered_10005b60(void)

{
  unsigned char frame[64] = {0};

  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  recovered_10005a20(in_RDI,in_RSI,in_EDX);
  return;
}


#undef DAT_10009248
#define DAT_10009248 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x130U)))
#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fa8U)))
#define local_40 (*(byte * *)(frame + 16))
#define local_31 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

undefined8 recovered_10005b70(long param_1,byte *param_2,undefined2 *param_3)

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
      recovered_10005f10((uint)*pbVar8,(long *)&local_40);
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
    pbVar17 = recovered_10005f10((uint)uVar10,(long *)&local_40);
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
#undef local_40
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f10
 */

byte * recovered_10005f10(uint param_1,long *param_2)

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
#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_1000b358
#define DAT_1000b358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2240U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068a0
#define UINT_000068a0 (*(uint *)(0x68a0U))
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
#undef str_100094a0
#define str_100094a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060a0
 */

long * recovered_100060a0(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;

  plVar5 = (long *)recovered_10005100(0x2c0);
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = -0x90a000000000000;
  *(undefined1 *)(plVar5 + 6) = 0xf6;
  *(undefined8 *)((long)plVar5 + 0x34) = 0;
  *(undefined2 *)((long)plVar5 + 0x3c) = 0;
  *(undefined1 *)((long)plVar5 + 0x3e) = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  *(undefined4 *)(plVar5 + 0x13) = 0;
  pcVar7 = str_100094a0;
  if (param_1 != (char *)0x0) {
    pcVar7 = param_1;
  }
  recovered_10001390((long)plVar5 + 0x9c,0x220);
  uVar6 = 0xffffffffffffffff;
  do {
    lVar2 = uVar6 + 1;
    uVar6 = uVar6 + 1;
  } while (pcVar7[lVar2] != '\0');
  recovered_10008540(plVar5,(long)pcVar7,uVar6);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)((long)plVar5 + 0x1c) = param_2;
  uVar3 = 1;
  if (1 < (int)param_3) {
    uVar3 = param_3;
  }
  *(uint *)(plVar5 + 4) = uVar3;
  *(uint *)((long)plVar5 + 0x34) = param_2 >> 1;
  *(uint *)(plVar5 + 7) = uVar3 >> 1;
  pcVar7 = &DAT_100092cc;
  if ((char *)*plVar5 != (char *)0x0) {
    pcVar7 = (char *)*plVar5;
  }
  iVar4 = Ram0000000000006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
      (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0xa3 < uVar1)) {
    uVar1 = UINT_000068a0;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      uVar3 = (*(code *)(ulong)uVar1)(pcVar7,param_2,uVar3);
      *(uint *)(plVar5 + 3) = uVar3;
      if (uVar3 != 0) {
        DAT_1000b358 = plVar5;
        recovered_100062d0(plVar5);
        if (*(uint *)(plVar5 + 3) == 0) {
          return plVar5;
        }
        iVar4 = Ram0000000000006800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
           ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0xb7 < uVar3)
            ))) {
          uVar3 = UINT_000068b4;
          if ((((code *)(ulong)uVar3 != (code *)0x0) &&
              (iVar4 = (*(code *)(ulong)uVar3)(*(uint *)(plVar5 + 3),plVar5 + 0xc), iVar4 != 0)) &&
             (*(long *)((long)plVar5 + 0x24) = plVar5[0x11],
             (*(byte *)((long)plVar5 + 0x84) & 1) == 0)) {
            return plVar5;
          }
        }
        *(undefined1 *)((long)plVar5 + 0x2c) = 1;
        return plVar5;
      }
      goto LAB_10006298;
    }
  }
  *(undefined4 *)(plVar5 + 3) = 0;
LAB_10006298:
  plVar5[9] = 0;
  recovered_10005160(plVar5[8]);
  recovered_10005160(*plVar5);
  recovered_10005160(plVar5);
  return (long *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100092cc
#undef DAT_1000b358
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068a0
#undef UINT_000068b4
#undef str_100094a0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_10009500
#define DAT_10009500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e8U)))
#undef LAB_100066b3
#define LAB_100066b3 (*(uint8_t *)(0x100066b3U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068a4
#define UINT_000068a4 (*(uint *)(0x68a4U))
#define local_c0 (*(undefined8 *)(frame + 152))
#define local_b8 (*(undefined4 *)(frame + 160))
#define local_a0 (*(code * *)(frame + 184))
#define local_98 (*(undefined * *)(frame + 192))
#define local_90 (*(undefined1 * *)(frame + 200))
#define local_88 (*(undefined1 * *)(frame + 208))
#define local_80 (*(undefined1 * *)(frame + 216))
#define local_68 (*(void * *)(frame + 240))
#define local_60 (*(ulong *)(frame + 248))
#define local_54 (*(int *)(frame + 260))
#define local_50 (*(void * *)(frame + 264))
#define local_48 (*(ulong *)(frame + 272))
#define local_3c (*(uint *)(frame + 284))
#define local_38 (*(undefined8 * *)(frame + 288))
#define auStackY_148 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062d0
 */

void recovered_100062d0(undefined8 *param_1)

{
  unsigned char frame[376] = {0};

  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;

  local_90 = (undefined1 *)((long)(uintptr_t)(frame + 344) + -8);
  local_80 = auStackY_148 + 0x80;
  local_a0 = recovered_100050b0;
  local_98 = &DAT_10009500;
  local_88 = &LAB_100066b3;
  recovered_10005630(&local_c0);
  if ((param_1 == (undefined8 *)0x0) || (*(int *)(param_1 + 3) == 0)) goto LAB_1000668c;
  uVar4 = *(uint *)((long)param_1 + 0x1c);
  uVar17 = 1;
  if (1 < (int)uVar4) {
    uVar17 = (ulong)uVar4;
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar25 = 1;
  if (1 < (int)uVar5) {
    uVar25 = uVar5;
  }
  if (((param_1[9] == 0) || (*(int *)(param_1 + 0xb) < 1)) || (*(int *)((long)param_1 + 0x5c) < 1))
  {
    pvVar12 = (void *)0x0;
  }
  else {
    uVar20 = (long)(int)uVar4 * (long)(int)uVar5 * 4;
    local_60 = uVar17;
    local_3c = uVar25;
    local_38 = param_1;
    if (uVar20 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      local_b8 = 1;
      local_48 = uVar20;
      pvVar12 = (void *)recovered_10005100(uVar20);
      uVar17 = 0;
      recovered_10005160(0);
      if (local_48 < 8) goto LAB_10006708;
      if (local_48 < 0x20) {
        uVar20 = 0;
LAB_10006417:
        uVar17 = local_48 & 0xfffffffffffffff8;
        do {
          *(undefined8 *)((long)pvVar12 + uVar20) = 0;
          uVar20 = uVar20 + 8;
        } while (uVar17 != uVar20);
        for (; local_48 != uVar17; uVar17 = uVar17 + 1) {
LAB_10006708:
          *(undefined1 *)((long)pvVar12 + uVar17) = 0;
        }
      }
      else {
        uVar17 = local_48 & 0xffffffffffffffe0;
        uVar20 = 0;
        do {
          *(undefined8 *)((long)pvVar12 + uVar20) = 0;
          ((undefined8 *)((long)pvVar12 + uVar20))[1] = 0;
          puVar1 = (undefined8 *)((long)pvVar12 + uVar20 + 0x10);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar20 = uVar20 + 0x20;
        } while (uVar17 != uVar20);
        if (local_48 != uVar17) {
          uVar20 = uVar17;
          if ((local_48 & 0x18) == 0) goto LAB_10006708;
          goto LAB_10006417;
        }
      }
      uVar2 = *(undefined1 *)((long)local_38 + 0x2e);
      uVar3 = *(undefined1 *)((long)local_38 + 0x2f);
      lVar21 = local_38[6];
      uVar17 = 0;
      do {
        *(undefined1 *)((long)pvVar12 + uVar17) = uVar2;
        *(undefined1 *)((long)pvVar12 + uVar17 + 1) = uVar3;
        *(char *)((long)pvVar12 + uVar17 + 2) = (char)lVar21;
        *(undefined1 *)((long)pvVar12 + uVar17 + 3) = 0xff;
        uVar17 = uVar17 + 4;
      } while (uVar17 < local_48);
    }
    uVar4 = *(uint *)((long)local_38 + 0x1c);
    lVar21 = (long)(int)uVar4;
    uVar5 = *(uint *)((long)local_38 + 0x5c);
    uVar24 = (ulong)(int)uVar5;
    uVar17 = uVar24 * lVar21;
    uVar6 = *(uint *)(local_38 + 0xb);
    uVar20 = (ulong)(int)uVar6;
    if ((uVar17 | uVar20) >> 0x20 == 0) {
      uVar25 = (uint)((uVar17 & 0xffffffff) / (ulong)uVar6);
    }
    else {
      uVar25 = (uint)((long)uVar17 / (long)uVar20);
    }
    uVar18 = 1;
    if (1 < (int)uVar25) {
      uVar18 = uVar25;
    }
    uVar7 = *(uint *)(local_38 + 4);
    uVar15 = uVar4;
    uVar17 = local_60;
    param_1 = local_38;
    uVar25 = local_3c;
    if ((int)uVar7 < (int)uVar18) {
      uVar13 = (long)(int)uVar7 * uVar20;
      if ((uVar13 | uVar24) >> 0x20 == 0) {
        uVar18 = (uint)((uVar13 & 0xffffffff) / (ulong)uVar5);
      }
      else {
        uVar18 = (uint)((long)uVar13 / (long)uVar24);
      }
      uVar15 = 1;
      if (1 < (int)uVar18) {
        uVar15 = uVar18;
      }
      uVar18 = uVar7;
      if ((int)uVar7 < 1) goto LAB_100065d9;
    }
    local_54 = uVar5 - 1;
    lVar26 = (long)pvVar12 +
             (long)((int)(uVar4 - uVar15) / 2) * 4 + ((int)(uVar7 - uVar18) / 2) * lVar21 * 4 + 3;
    uVar13 = 0;
    do {
      if (0 < (int)uVar15) {
        iVar9 = (int)(uVar5 * (int)uVar13) / (int)uVar18;
        iVar11 = iVar9;
        if (local_54 < iVar9) {
          iVar11 = local_54;
        }
        iVar16 = 0;
        if (iVar9 < 0) {
          iVar11 = 0;
        }
        lVar8 = local_38[8];
        uVar22 = 0;
        do {
          iVar10 = iVar16 / (int)uVar15;
          iVar9 = uVar6 - 1;
          if (iVar10 <= (int)(uVar6 - 1)) {
            iVar9 = iVar10;
          }
          iVar19 = 0;
          if (-1 < iVar10) {
            iVar19 = iVar9;
          }
          lVar14 = (long)iVar19 + (long)iVar11 * uVar20;
          *(undefined1 *)(lVar26 + -3 + uVar22 * 4) = *(undefined1 *)(lVar8 + lVar14 * 4);
          *(undefined1 *)(lVar26 + -2 + uVar22 * 4) = *(undefined1 *)(lVar8 + 1 + lVar14 * 4);
          *(undefined1 *)(lVar26 + -1 + uVar22 * 4) = *(undefined1 *)(lVar8 + 2 + lVar14 * 4);
          *(undefined1 *)(lVar26 + uVar22 * 4) = *(undefined1 *)(lVar8 + 3 + lVar14 * 4);
          uVar22 = uVar22 + 1;
          iVar16 = iVar16 + uVar6;
        } while (uVar15 != uVar22);
      }
      uVar13 = uVar13 + 1;
      lVar26 = lVar26 + lVar21 * 4;
    } while (uVar13 != uVar18);
    local_68 = pvVar12;
    local_48 = uVar24;
  }
LAB_100065d9:
  iVar11 = 0;
  pcVar23 = &DAT_100092cc;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar23 = (char *)*param_1;
  }
  iVar9 = Ram0000000000006800;
  local_50 = pvVar12;
  if (iVar9 == 0x50414d57) {
    iVar9 = Ram0000000000006804;
    if (iVar9 != 0) {
      uVar4 = Ram0000000000006808;
      if (0xb < uVar4) {
        uVar4 = Ram0000000000006808;
        if (0xa7 < uVar4) {
          uVar4 = UINT_000068a4;
          if ((code *)(ulong)uVar4 != (code *)0x0) {
            local_b8 = 2;
            local_38 = param_1;
            iVar11 = (*(code *)(ulong)uVar4)
                               (*(uint *)(param_1 + 3),pcVar23,pvVar12,(uint)uVar17,uVar25,
                                (uint)uVar17 * 4,
                                (uint)*(byte *)((long)param_1 + 0x2f) << 8 |
                                (uint)*(byte *)((long)param_1 + 0x2e) << 0x10 |
                                (uint)*(byte *)(param_1 + 6));
            param_1 = local_38;
          }
        }
      }
    }
  }
  *(bool *)((long)param_1 + 0x2d) = iVar11 != 0;
  recovered_10005160(local_50);
LAB_1000668c:
  recovered_10005650(&local_c0);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100092cc
#undef DAT_10009500
#undef LAB_100066b3
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068a4
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_54
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef auStackY_148

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
#undef UINT_000068b0
#define UINT_000068b0 (*(uint *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006760
 */

void recovered_10006760(long param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
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
#undef DAT_1000b358
#define DAT_1000b358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2240U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068a8
#define UINT_000068a8 (*(uint *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067d0
 */

void recovered_100067d0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (DAT_1000b358 == param_1) {
    DAT_1000b358 = (undefined8 *)0x0;
  }
  if ((((*(uint *)(param_1 + 3) != 0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
      (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0xab < uVar2)))) {
    uVar2 = UINT_000068a8;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(*(uint *)(param_1 + 3));
    }
  }
  param_1[9] = 0;
  recovered_10005160(param_1[8]);
  recovered_10005160(*param_1);
  recovered_10005160(param_1);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1000b358
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068a8

#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_10009508
#define DAT_10009508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f0U)))
#undef LAB_1000697c
#define LAB_1000697c (*(uint8_t *)(0x1000697cU))
#define lStack_40 (*(long *)(frame + 120))
#define local_a8 (*(undefined8 *)(frame + 16))
#define local_a0 (*(undefined4 *)(frame + 24))
#define local_88 (*(code * *)(frame + 48))
#define local_80 (*(undefined * *)(frame + 56))
#define local_78 (*(undefined1 * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_50 (*(void * *)(frame + 104))
#define local_48 (*(undefined1 * *)(frame + 112))
#define local_38 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

long recovered_10006880(undefined8 *param_1)

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
  local_88 = recovered_100050b0;
  local_80 = &DAT_10009508;
  local_70 = &LAB_1000697c;
  recovered_10005630(&local_a8);
  if (param_1 == (undefined8 *)0x0) {
    lVar3 = 1;
  }
  else {
    puVar2 = &DAT_100092cc;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_a0 = 0xffffffff;
    recovered_10008540((long *)&local_48,(long)puVar2,param_1[1]);
    lVar3 = lStack_40 + 1;
  }
  local_a0 = 1;
  local_50 = (void *)recovered_10005130(lVar3);
  puVar2 = &DAT_100092cc;
  if (local_48 != (undefined1 *)0x0) {
    puVar2 = local_48;
  }
  local_a0 = 2;
  recovered_10000ed0(local_50,puVar2,lStack_40 + 1);
  pvVar1 = local_50;
  recovered_10005160(local_48);
  recovered_10005650(&local_a8);
  return (long)pvVar1;
}

#undef DAT_100092cc
#undef DAT_10009508
#undef LAB_1000697c
#undef lStack_40
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069d0
 */

void recovered_100069d0(long param_1,undefined4 *param_2,undefined4 *param_3)

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
 * Address: 0x10006a00
 */

void recovered_10006a00(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
  *(int *)(param_1 + 0x1c) = param_2;
  iVar2 = 1;
  if (1 < param_3) {
    iVar2 = param_3;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  iVar3 = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar4 = param_2 + -1;
  if (iVar3 <= param_2 + -1) {
    iVar4 = iVar3;
  }
  if (iVar3 < 0) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar4;
  iVar3 = iVar2 + -1;
  if (iVar1 <= iVar2 + -1) {
    iVar3 = iVar1;
  }
  if (iVar1 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar3;
  recovered_100062d0((undefined8 *)param_1);
  return;
}


#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a60
 */

void recovered_10006a60(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (param_1 == (long *)0x0) {
    return;
  }
  puVar3 = &DAT_100092cc;
  if (param_2 != (undefined1 *)0x0) {
    puVar3 = param_2;
  }
  uVar2 = 0xffffffffffffffff;
  do {
    lVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (puVar3[lVar1] != '\0');
  recovered_10008540(param_1,(long)puVar3,uVar2);
  recovered_100062d0(param_1);
  return;
}

#undef DAT_100092cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

void recovered_10006ac0(long param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar3 = *(undefined1 **)(param_2 + 2), puVar3 == (undefined1 *)0x0)) ||
      (iVar1 = *param_2, (long)iVar1 < 1)) || (iVar2 = param_2[1], (long)iVar2 < 1)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  recovered_10008e40((long *)(param_1 + 0x40),*(long *)(param_1 + 0x40),puVar3,
                     puVar3 + (long)iVar1 * (long)iVar2 * 4);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_2;
  recovered_100062d0((undefined8 *)param_1);
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
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UINT_00006880
#define UINT_00006880 (*(uint *)(0x6880U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
#define local_58 (*(undefined4 *)(frame + 64))
#define local_48 (*(undefined1 (*)[16])(frame + 80))
#define local_38 (*(undefined1 (*)[16])(frame + 96))
#define local_88 (*(undefined1 (*)[16])(frame + 16))
#define local_78 (*(undefined1 (*)[16])(frame + 32))
#define local_68 (*(undefined1 (*)[16])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

void recovered_10006b30(long param_1)

{
  unsigned char frame[184] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  bool bVar12;
  uint128 auVar13;

  if (param_1 == 0) {
    return;
  }
  (*(uint128 *)(void *)local_38) = (uint128)0x0;
  (*(uint128 *)(void *)local_48) = (uint128)0x0;
  if (*(uint *)(param_1 + 0x18) != 0) {
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xb7 < uVar2))
    {
      uVar2 = UINT_000068b4;
      if ((((code *)(ulong)uVar2 != (code *)0x0) &&
          (iVar1 = (*(code *)(ulong)uVar2)(*(uint *)(param_1 + 0x18),(void *)(param_1 + 0x60)),
          iVar1 != 0)) &&
         (*(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x88),
         (*(byte *)(param_1 + 0x84) & 1) == 0)) goto LAB_10006bbe;
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
LAB_10006bbe:
  iVar1 = Ram0000000000006800;
  if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
     ((uVar2 = Ram0000000000006808, uVar2 < 0xc || (uVar2 = Ram0000000000006808, uVar2 < 0x84))))
  goto LAB_10006e68;
  uVar2 = UINT_00006880;
  if (((code *)(ulong)uVar2 == (code *)0x0) ||
     (iVar1 = (*(code *)(ulong)uVar2)(local_48), iVar1 == 0)) goto LAB_10006e68;
  (*(uint128 *)(void *)local_68) = (uint128)0x0;
  (*(uint128 *)(void *)local_78) = (uint128)0x0;
  (*(uint128 *)(void *)local_88) = (uint128)0x0;
  local_58 = 0;
  iVar1 = Ram0000000000006800;
  bVar11 = 1;
  iVar8 = 0;
  if ((iVar1 == 0x50414d57) &&
     (((iVar1 = Ram0000000000006804, iVar1 != 0 && (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
      (uVar2 = Ram0000000000006808, 0x7f < uVar2)))) {
    uVar2 = UINT_0000687c;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (iVar1 = (*(code *)(ulong)uVar2)(local_88), iVar1 == 0)) goto LAB_10006cf4;
    PF_PART4(auVar13, 0) = -(uint)(PF_PART4(local_88, 8) == 0);
    PF_PART4(auVar13, 4) = -(uint)(PF_PART4(local_88, 12) == 0);
    PF_PART4(auVar13, 8) = -(uint)(PF_PART4(local_78, 0) == 0);
    PF_PART4(auVar13, 12) = -(uint)(SUB164((uint128)0x0,0xc) == PF_PART4(local_78, 4));
    iVar1 = movmskps(iVar1,auVar13);
    if ((((iVar1 != 0) || ((PF_PART4(local_78, 8) != 0x20 || (PF_PART4(local_78, 12) == 0)))) ||
        (PF_PART4(local_68, 4) == 0)) || ((PF_PART8(local_88, 0) == 0 || (PF_PART4(local_68, 12) == 0))))
    goto LAB_10006cf4;
    uVar2 = 0;
    if ((uint)PF_PART4(local_78, 0) <= (uint)PF_PART4(local_88, 12) >> 2) {
      bVar11 = 0;
      iVar8 = PF_PART4(local_78, 4);
      uVar2 = PF_PART4(local_78, 0);
    }
  }
  else {
LAB_10006cf4:
    uVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (((byte)local_48[0] & 2) == 0) {
LAB_10006d25:
    if ((byte)((bVar11 ^ 1) & local_48[0]) == 0) {
      iVar8 = *(int *)(param_1 + 0x38);
    }
    else {
      uVar9 = 0;
      uVar4 = 0;
      if (1 < uVar2) {
        uVar10 = (ulong)(uint)PF_PART4(local_38, 8);
        if (uVar10 == 0) {
          uVar3 = uVar2 - 1;
          if ((uint)PF_PART4(local_48, 8) <= uVar2 - 1) {
            uVar3 = PF_PART4(local_48, 8);
          }
          uVar4 = 0;
          if (-1 < (int)PF_PART4(local_48, 8)) {
            uVar4 = uVar3;
          }
        }
        else {
          uVar4 = 0;
          if (0 < (int)PF_PART4(local_48, 8)) {
            uVar4 = PF_PART4(local_48, 8);
          }
          if ((uint)PF_PART4(local_38, 8) <= uVar4) {
            uVar4 = PF_PART4(local_38, 8);
          }
          uVar7 = (ulong)(uVar2 - 1) * (ulong)uVar4;
          if ((uVar7 & 0x7fffffff00000000) == 0) {
            uVar4 = (uint)((uVar7 & 0xffffffff) / uVar10);
          }
          else {
            uVar4 = (uint)(uVar7 / uVar10);
          }
        }
      }
      if (1 < iVar8) {
        uVar10 = (ulong)(uint)PF_PART4(local_38, 12);
        if (uVar10 == 0) {
          uVar2 = iVar8 - 1U;
          if ((uint)PF_PART4(local_48, 12) <= iVar8 - 1U) {
            uVar2 = PF_PART4(local_48, 12);
          }
          uVar9 = 0;
          if (-1 < (int)PF_PART4(local_48, 12)) {
            uVar9 = uVar2;
          }
        }
        else {
          uVar2 = 0;
          if (0 < (int)PF_PART4(local_48, 12)) {
            uVar2 = PF_PART4(local_48, 12);
          }
          if ((uint)PF_PART4(local_38, 12) <= uVar2) {
            uVar2 = PF_PART4(local_38, 12);
          }
          uVar7 = (ulong)(iVar8 - 1) * (ulong)uVar2;
          if ((uVar7 & 0x7fffffff00000000) == 0) {
            uVar9 = (uint)((uVar7 & 0xffffffff) / uVar10);
          }
          else {
            uVar9 = (uint)(uVar7 / uVar10);
          }
        }
      }
      iVar1 = (uVar4 - *(int *)(param_1 + 0x24)) + -0xe;
      iVar8 = (uVar9 - *(int *)(param_1 + 0x28)) + -0x26;
    }
  }
  else {
    if (PF_PART4(local_38, 0) == 0 && PF_PART4(local_38, 4) == 0) goto LAB_10006d25;
    iVar1 = PF_PART4(local_38, 0) + iVar1;
    iVar8 = PF_PART4(local_38, 4) + *(int *)(param_1 + 0x38);
  }
  bVar12 = (*(uint *)(param_1 + 0x84) & 6) == 2;
  *(byte *)(param_1 + 0x3c) = local_48[4] & bVar12;
  *(byte *)(param_1 + 0x3d) = (byte)(((byte)local_48[4] & 2) >> 1) & bVar12;
  *(byte *)(param_1 + 0x3e) = (byte)(((byte)local_48[4] & 4) >> 2) & bVar12;
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  iVar6 = iVar5 + -1;
  if (iVar1 <= iVar5 + -1) {
    iVar6 = iVar1;
  }
  if (iVar1 < 0) {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar6;
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0x20)) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  iVar5 = iVar1 + -1;
  if (iVar8 <= iVar1 + -1) {
    iVar5 = iVar8;
  }
  if (iVar8 < 0) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar5;
LAB_10006e68:
  recovered_10006ed0();
  if (*(char *)(param_1 + 0x2d) == '\0') {
    recovered_100062d0((undefined8 *)param_1);
  }
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x9f < uVar2)) {
    uVar2 = UINT_0000689c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)();
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
#undef UINT_0000687c
#undef UINT_00006880
#undef UINT_0000689c
#undef UINT_000068b4
#undef local_58
#undef local_48
#undef local_38
#undef local_88
#undef local_78
#undef local_68

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10009cf8
#define DAT_10009cf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbe0U)))
#undef DAT_1000b0f0
#define DAT_1000b0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fd8U)))
#undef DAT_1000b0f1
#define DAT_1000b0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fd9U)))
#undef DAT_1000b0f2
#define DAT_1000b0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdaU)))
#undef DAT_1000b0f3
#define DAT_1000b0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdbU)))
#undef DAT_1000b0f4
#define DAT_1000b0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdcU)))
#undef DAT_1000b0f5
#define DAT_1000b0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fddU)))
#undef DAT_1000b0f6
#define DAT_1000b0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdeU)))
#undef DAT_1000b0f7
#define DAT_1000b0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdfU)))
#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe0U)))
#undef DAT_1000b0f9
#define DAT_1000b0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe1U)))
#undef DAT_1000b0fa
#define DAT_1000b0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe2U)))
#undef DAT_1000b0fb
#define DAT_1000b0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe4U)))
#undef DAT_1000b0fd
#define DAT_1000b0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe5U)))
#undef DAT_1000b0fe
#define DAT_1000b0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe6U)))
#undef DAT_1000b0ff
#define DAT_1000b0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe7U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe8U)))
#undef DAT_1000b101
#define DAT_1000b101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe9U)))
#undef DAT_1000b102
#define DAT_1000b102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feaU)))
#undef DAT_1000b103
#define DAT_1000b103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1febU)))
#undef DAT_1000b104
#define DAT_1000b104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fecU)))
#undef DAT_1000b105
#define DAT_1000b105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fedU)))
#undef DAT_1000b106
#define DAT_1000b106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feeU)))
#undef DAT_1000b107
#define DAT_1000b107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fefU)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff0U)))
#undef DAT_1000b109
#define DAT_1000b109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff1U)))
#undef DAT_1000b10a
#define DAT_1000b10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff2U)))
#undef DAT_1000b10b
#define DAT_1000b10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff3U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff4U)))
#undef DAT_1000b10d
#define DAT_1000b10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff5U)))
#undef DAT_1000b10e
#define DAT_1000b10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff6U)))
#undef DAT_1000b10f
#define DAT_1000b10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff7U)))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff8U)))
#undef DAT_1000b111
#define DAT_1000b111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff9U)))
#undef DAT_1000b112
#define DAT_1000b112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffaU)))
#undef DAT_1000b113
#define DAT_1000b113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffbU)))
#undef DAT_1000b114
#define DAT_1000b114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffcU)))
#undef DAT_1000b115
#define DAT_1000b115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffdU)))
#undef DAT_1000b116
#define DAT_1000b116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffeU)))
#undef DAT_1000b117
#define DAT_1000b117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fffU)))
#undef DAT_1000b118
#define DAT_1000b118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2000U)))
#undef DAT_1000b119
#define DAT_1000b119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2001U)))
#undef DAT_1000b11a
#define DAT_1000b11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2002U)))
#undef DAT_1000b11b
#define DAT_1000b11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2003U)))
#undef DAT_1000b11c
#define DAT_1000b11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2004U)))
#undef DAT_1000b11d
#define DAT_1000b11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2005U)))
#undef DAT_1000b11e
#define DAT_1000b11e (*(char *)(((uintptr_t)pf_module_state + 0x2006U)))
#undef DAT_1000b358
#define DAT_1000b358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2240U)))
#undef DAT_1000b360
#define DAT_1000b360 (*(int *)(((uintptr_t)pf_module_state + 0x2248U)))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xee8U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed0
 */

void recovered_10006ed0(void)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined6 extraout_var = 0;
  long lVar5;
  byte bVar6;
  uint uVar7;

  lVar5 = DAT_1000b358;
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
  DAT_1000b11e = '\0';
  if ((DAT_1000b358 != 0) && (*(uint *)(DAT_1000b358 + 0x18) != 0)) {
    iVar4 = Ram0000000000006800;
    if ((iVar4 == 0x50414d57) &&
       (((iVar4 = Ram0000000000006804, iVar4 != 0 && (uVar7 = Ram0000000000006808, 0xb < uVar7)) &&
        (uVar7 = Ram0000000000006808, 0xb7 < uVar7)))) {
      uVar7 = UINT_000068b4;
      if (((code *)(ulong)uVar7 != (code *)0x0) &&
         (iVar4 = (*(code *)(ulong)uVar7)
                            (*(uint *)(DAT_1000b358 + 0x18),(void *)(DAT_1000b358 + 0x60)),
         iVar4 != 0)) {
        *(undefined8 *)(lVar5 + 0x24) = *(undefined8 *)(lVar5 + 0x88);
        if ((*(uint *)(lVar5 + 0x84) & 1) != 0) {
          *(undefined1 *)(lVar5 + 0x2c) = 1;
        }
        if ((*(uint *)(lVar5 + 0x84) & 6) != 2) {
          return;
        }
        iVar4 = Ram0000000000006800;
        do {
          if (iVar4 != 0x50414d57) {
            return;
          }
          iVar4 = Ram0000000000006804;
          if (iVar4 == 0) {
            return;
          }
          uVar7 = Ram0000000000006808;
          if (uVar7 < 0xc) {
            return;
          }
          uVar7 = Ram0000000000006808;
          if (uVar7 < 0x30) {
            return;
          }
          uVar7 = UINT_0000682c;
          if ((code *)(ulong)uVar7 == (code *)0x0) {
            return;
          }
          uVar3 = (*(code *)(ulong)uVar7)();
          lVar5 = DAT_1000b358;
          iVar4 = (int)CONCAT62(extraout_var,uVar3);
          if (iVar4 == 0) {
            return;
          }
          cVar2 = (char)uVar3;
          cVar1 = (char)(uVar3 >> 8);
          if (cVar2 == '\0') {
            if (DAT_1000b358 != 0) {
              switch((uintptr_t)(cVar1)) {
              case '\x01':
                goto switchD_100072c9_caseD_48;
              case '\x02':
                goto switchD_100072c9_caseD_50;
              case '\x03':
                goto switchD_100072c9_caseD_4d;
              case '\x04':
                goto switchD_100072c9_caseD_4b;
              default:
                goto switchD_1000727e_caseD_5;
              case '\x17':
                goto switchD_10007191_caseD_17;
              }
            }
          }
          else {
            if (DAT_1000b358 == 0) goto switchD_100072c9_caseD_f;
            if (DAT_1000b360 == 2) {
              DAT_1000b360 = 0;
              switch((uintptr_t)(cVar2)) {
              case 'A':
                DAT_1000b0f1 = 1;
                break;
              case 'B':
                DAT_1000b0f2 = 1;
                break;
              case 'C':
                DAT_1000b0f4 = 1;
                break;
              case 'D':
                DAT_1000b0f3 = 1;
              }
            }
            else if (DAT_1000b360 == 1) {
              DAT_1000b360 = (uint)(cVar2 == '[') * 2;
            }
            else if (cVar2 == '\x1b') {
              DAT_1000b360 = 1;
            }
            else if ((byte)(cVar2 - 0x20U) < 0x5f) {
              DAT_1000b11e = cVar2;
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                **(undefined1 **)(&DAT_10009cf8 + (long)cVar2 * 8) = 1;
              }
              else {
                uVar7 = iVar4 - 0x41;
                bVar6 = (byte)uVar7;
                if (bVar6 < 0x1a) {
                  if (bVar6 < 0x1a) {
                    *(&PTR_DAT_1000a000)[uVar7 & 0xff] = 1;
                  }
                }
                else {
                  if (9 < (byte)(cVar2 - 0x30U)) goto LAB_1000726b;
                  recovered_100087f0(cVar2);
                  lVar5 = DAT_1000b358;
                  if (DAT_1000b358 == 0) goto switchD_100072c9_caseD_f;
                }
              }
            }
            else {
LAB_1000726b:
              switch((uintptr_t)(cVar2)) {
              case '\x03':
              case '\x04':
                *(undefined1 *)(DAT_1000b358 + 0x2c) = 1;
                break;
              case '\x05':
              case '\x06':
              case '\a':
              case '\t':
              case '\v':
              case '\f':
              case '\x0e':
              case '\x0f':
              case '\x10':
              case '\x11':
              case '\x12':
              case '\x13':
              case '\x14':
              case '\x15':
              case '\x16':
              case '\x17':
              case '\x18':
              case '\x19':
              case '\x1a':
              case '\x1b':
              case '\x1c':
              case '\x1d':
              case '\x1e':
              case '\x1f':
              case '!':
              case '\"':
              case '#':
              case '$':
              case '%':
              case '&':
              case '\'':
              case '(':
              case ')':
              case '*':
              case '+':
              case ',':
                break;
              case '\b':
switchD_1000727e_caseD_8:
                DAT_1000b11b = 1;
                break;
              case '\n':
              case '\r':
                DAT_1000b0f0 = 1;
                break;
              case ' ':
                DAT_1000b11d = 1;
                break;
              case '-':
                DAT_1000b119 = 1;
                break;
              case '.':
                DAT_1000b11a = 1;
                break;
              default:
                if (cVar2 == '\x7f') goto switchD_1000727e_caseD_8;
              }
            }
switchD_1000727e_caseD_5:
            switch((uintptr_t)(cVar1)) {
            case '\x0e':
              DAT_1000b11b = 1;
              break;
            case '\x0f':
            case '\x10':
            case '\x11':
            case '\x12':
            case '\x13':
            case '\x14':
            case '\x15':
            case '\x16':
            case '\x17':
            case '\x18':
            case '\x19':
            case '\x1a':
            case '\x1b':
            case '\x1d':
            case '\x1e':
            case '\x1f':
            case ' ':
            case '!':
            case '\"':
            case '#':
            case '$':
            case '%':
            case '&':
            case '\'':
            case '(':
            case ')':
            case '*':
            case '+':
            case ',':
            case '-':
            case '.':
            case '/':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
            case '=':
            case '>':
            case '?':
            case '@':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
              break;
            case '\x1c':
              DAT_1000b0f0 = 1;
              break;
            case 'H':
switchD_100072c9_caseD_48:
              DAT_1000b0f1 = 1;
              break;
            case 'K':
switchD_100072c9_caseD_4b:
              DAT_1000b0f3 = 1;
              break;
            case 'M':
switchD_100072c9_caseD_4d:
              DAT_1000b0f4 = 1;
              break;
            case 'P':
switchD_100072c9_caseD_50:
              DAT_1000b0f2 = 1;
              break;
            case 'S':
              DAT_1000b11c = 1;
              break;
            default:
              if (cVar1 == '\x01') {
switchD_10007191_caseD_17:
                *(undefined1 *)(lVar5 + 0x2c) = 1;
              }
            }
          }
switchD_100072c9_caseD_f:
          iVar4 = Ram0000000000006800;
        } while( true );
      }
    }
    *(undefined1 *)(lVar5 + 0x2c) = 1;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10009cf8
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
#undef DAT_1000b358
#undef DAT_1000b360
#undef PTR_DAT_1000a000
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000682c
#undef UINT_000068b4

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
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007560
 */

undefined1 recovered_10007560(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  if (param_1 == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 0x18) != 0) {
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0xb7 < uVar1))
    {
      uVar1 = UINT_000068b4;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)(*(uint *)(param_1 + 0x18),(void *)(param_1 + 0x60));
        if ((iVar2 != 0) &&
           (*(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x88),
           (*(byte *)(param_1 + 0x84) & 1) == 0)) goto LAB_100075e7;
      }
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
LAB_100075e7:
  return *(undefined1 *)(param_1 + 0x2c);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

void recovered_100075f0(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2e) = param_2;
  *(undefined1 *)(param_1 + 0x2f) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  recovered_100062d0((undefined8 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

int * recovered_10007610(long param_1)

{
  unsigned char frame[64] = {0};

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
    piVar4 = (int *)recovered_10005100(0x20);
    iVar7 = *(int *)(param_1 + 0x58);
    if (iVar7 < 1) {
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    *piVar4 = iVar7;
    iVar8 = *(int *)(param_1 + 0x5c);
    if (iVar8 < 1) {
      iVar8 = *(int *)(param_1 + 0x20);
    }
    piVar4[1] = iVar8;
    uVar9 = (long)iVar8 * (long)iVar7 * 4;
    dst = (void *)recovered_10005130(uVar9);
    *(void **)(piVar4 + 2) = dst;
    if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x58) != iVar7)) ||
       (*(int *)(param_1 + 0x5c) != iVar8)) {
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
      recovered_10000ed0(dst,*(void **)(param_1 + 0x40),uVar9);
    }
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
  }
  return piVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

void recovered_10007730(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

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
      *param_2 = *(undefined4 *)(param_1 + 0x34);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007770
 */

undefined1 recovered_10007770(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 3 && param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x3c + (ulong)param_2);
  }
  return 0;
}


#undef DAT_1000b0f0
#define DAT_1000b0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fd8U)))
#undef DAT_1000b0f1
#define DAT_1000b0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fd9U)))
#undef DAT_1000b0f2
#define DAT_1000b0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdaU)))
#undef DAT_1000b0f3
#define DAT_1000b0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdbU)))
#undef DAT_1000b0f4
#define DAT_1000b0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdcU)))
#undef DAT_1000b0f5
#define DAT_1000b0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fddU)))
#undef DAT_1000b0f6
#define DAT_1000b0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdeU)))
#undef DAT_1000b0f7
#define DAT_1000b0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdfU)))
#undef DAT_1000b0f8
#define DAT_1000b0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe0U)))
#undef DAT_1000b0f9
#define DAT_1000b0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe1U)))
#undef DAT_1000b0fa
#define DAT_1000b0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe2U)))
#undef DAT_1000b0fb
#define DAT_1000b0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe3U)))
#undef DAT_1000b0fc
#define DAT_1000b0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe4U)))
#undef DAT_1000b0fd
#define DAT_1000b0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe5U)))
#undef DAT_1000b0fe
#define DAT_1000b0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe6U)))
#undef DAT_1000b0ff
#define DAT_1000b0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe7U)))
#undef DAT_1000b100
#define DAT_1000b100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe8U)))
#undef DAT_1000b101
#define DAT_1000b101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fe9U)))
#undef DAT_1000b102
#define DAT_1000b102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feaU)))
#undef DAT_1000b103
#define DAT_1000b103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1febU)))
#undef DAT_1000b104
#define DAT_1000b104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fecU)))
#undef DAT_1000b105
#define DAT_1000b105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fedU)))
#undef DAT_1000b106
#define DAT_1000b106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feeU)))
#undef DAT_1000b107
#define DAT_1000b107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fefU)))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff0U)))
#undef DAT_1000b109
#define DAT_1000b109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff1U)))
#undef DAT_1000b10a
#define DAT_1000b10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff2U)))
#undef DAT_1000b10b
#define DAT_1000b10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff3U)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff4U)))
#undef DAT_1000b10d
#define DAT_1000b10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff5U)))
#undef DAT_1000b10e
#define DAT_1000b10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff6U)))
#undef DAT_1000b10f
#define DAT_1000b10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff7U)))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff8U)))
#undef DAT_1000b111
#define DAT_1000b111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ff9U)))
#undef DAT_1000b112
#define DAT_1000b112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffaU)))
#undef DAT_1000b113
#define DAT_1000b113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffbU)))
#undef DAT_1000b114
#define DAT_1000b114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffcU)))
#undef DAT_1000b115
#define DAT_1000b115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffdU)))
#undef DAT_1000b116
#define DAT_1000b116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffeU)))
#undef DAT_1000b117
#define DAT_1000b117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fffU)))
#undef DAT_1000b118
#define DAT_1000b118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2000U)))
#undef DAT_1000b119
#define DAT_1000b119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2001U)))
#undef DAT_1000b11a
#define DAT_1000b11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2002U)))
#undef DAT_1000b11b
#define DAT_1000b11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2003U)))
#undef DAT_1000b11c
#define DAT_1000b11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2004U)))
#undef DAT_1000b11d
#define DAT_1000b11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2005U)))
#undef DAT_1000b11e
#define DAT_1000b11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2006U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a0
 */

void recovered_100077a0(void)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078f0
 */

void recovered_100078f0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007900
 */

void recovered_10007900(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

undefined8 recovered_10007910(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007920
 */

void recovered_10007920(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007930
 */

undefined8 recovered_10007930(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100092ca
#define DAT_100092ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2U)))
#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_100094ad
#define DAT_100094ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x395U)))
#undef DAT_10009510
#define DAT_10009510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f8U)))
#undef LAB_100081b3
#define LAB_100081b3 (*(uint8_t *)(0x100081b3U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#define auStack_148 (*(undefined1 (*)[8])(frame + 16))
#define local_140 (*(undefined4 * *)(frame + 24))
#define pvStack_128 (*(void * *)(frame + 48))
#define local_138 (*(undefined4 * *)(frame + 32))
#define local_130 (*(char * *)(frame + 40))
#define local_120 (*(undefined8 *)(frame + 56))
#define local_118 (*(undefined8 *)(frame + 64))
#define local_110 (*(undefined4 *)(frame + 72))
#define local_f8 (*(code * *)(frame + 96))
#define local_f0 (*(undefined * *)(frame + 104))
#define local_e8 (*(undefined1 * *)(frame + 112))
#define local_e0 (*(undefined1 * *)(frame + 120))
#define lStack_b8 (*(long *)(frame + 160))
#define local_d8 (*(undefined1 * *)(frame + 128))
#define local_c0 (*(char * *)(frame + 152))
#define local_b0 (*(undefined8 *)(frame + 168))
#define local_a8 (*(void * *)(frame + 176))
#define uStack_a0 (*(undefined8 *)(frame + 184))
#define local_98 (*(undefined8 *)(frame + 192))
#define local_88 (*(char * *)(frame + 208))
#define local_80 (*(long *)(frame + 216))
#define local_70 (*(undefined8 *)(frame + 232))
#define pvStack_78 (*(void * *)(frame + 224))
#define local_68 (*(char * *)(frame + 240))
#define local_60 (*(undefined8 *)(frame + 248))
#define local_58 (*(char * *)(frame + 256))
#define local_48 (*(void * *)(frame + 272))
#define local_40 (*(void * *)(frame + 280))
#define pvStack_50 (*(void * *)(frame + 264))
#define local_34 (*(undefined4 *)(frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007940
 */

ulong recovered_10007940(long param_1,undefined4 *param_2,undefined4 *param_3)

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
  local_f8 = recovered_100050b0;
  local_f0 = &DAT_10009510;
  local_e0 = &LAB_100081b3;
  local_68 = (char *)param_1;
  recovered_10005630(&local_118);
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
  recovered_10008540((long *)&local_130,(long)local_68,uVar8);
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
    recovered_10008540((long *)&local_58,(long)(pcVar13 + (long)pvVar12),uVar10);
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
            recovered_10005160(pcVar13);
            pvStack_78 = (void *)((long)pvStack_78 - 1);
            goto LAB_10007a9b;
          }
        }
        if ((char)local_34 != '\0') goto LAB_10007a9b;
      }
      local_110 = 2;
      recovered_10008880(&local_80,&local_58);
      pvVar12 = local_40;
    }
LAB_10007a9b:
    pvVar12 = (void *)((long)pvVar12 + 1);
    recovered_10005160(local_58);
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
  recovered_10008540((long *)&local_58,(long)puVar14,uVar8);
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
          pcVar13 = (char *)recovered_10005100((ulong)pvVar9 | 1);
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
          recovered_10005160(local_58);
          local_48 = local_60;
LAB_10007e08:
          local_58 = pcVar13;
        }
        else {
LAB_10007d00:
          if (local_58 == (char *)0x0) {
            local_110 = 5;
            pcVar13 = (char *)recovered_10005100(1);
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
      recovered_100089a0((long *)&local_58,(long)puVar14,
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
  recovered_10008540((long *)&local_c0,(long)pcVar13,(ulong)pvVar12);
  recovered_10005160(local_58);
  if (pvStack_78 != (void *)0x0) {
    lVar16 = (long)pvStack_78 * 0x18;
    pvVar12 = pvStack_78;
    do {
      lVar16 = lVar16 + -0x18;
      recovered_10005160(*(undefined8 *)(local_80 + lVar16));
      pvVar12 = (void *)((long)pvVar12 - 1);
    } while (pvVar12 != (void *)0x0);
  }
  pvStack_78 = (void *)0x0;
  recovered_10005160(local_80);
  recovered_10005160(local_130);
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
            local_60 = (void *)recovered_10005130(uStack_a0 & 0xffffffff);
            local_110 = 0xb;
            recovered_10000ed0(local_60,local_40,uStack_a0 & 0xffffffff);
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
  recovered_10005160(local_c0);
LAB_10008192:
  recovered_10005650(&local_118);
  return (ulong)pvVar12;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
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
#undef local_140
#undef pvStack_128
#undef local_138
#undef local_130
#undef local_120
#undef local_118
#undef local_110
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef lStack_b8
#undef local_d8
#undef local_c0
#undef local_b0
#undef local_a8
#undef uStack_a0
#undef local_98
#undef local_88
#undef local_80
#undef local_70
#undef pvStack_78
#undef local_68
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef pvStack_50
#undef local_34

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
#undef UINT_00006868
#define UINT_00006868 (*(uint *)(0x6868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008270
 */

undefined8 recovered_10008270(void)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006868

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
#undef UINT_00006870
#define UINT_00006870 (*(uint *)(0x6870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082c0
 */

void recovered_100082c0(void)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006870

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10009128
#define DAT_10009128 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100092c0
#define DAT_100092c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006874
#define UINT_00006874 (*(uint *)(0x6874U))
#undef _DAT_100092c0
#define _DAT_100092c0 (*(double *)(((uintptr_t)pf_module_state + 0x1a8U)))
#define uStack_30 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 28))
#define uStack_28 (*(uint *)(frame + 32))
#define uStack_24 (*(undefined4 *)(frame + 36))
#define local_38 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10008310(long param_1,long param_2)

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
          puVar3 = (undefined8 *)recovered_10005100(0x20);
          *puVar3 = CONCAT44(uStack_28,uStack_2c);
          dst = (void *)recovered_10005130(bytes);
          puVar3[1] = dst;
          recovered_10000ed0(dst,src,bytes);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10009128
#undef DAT_100092c0
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006874
#undef _DAT_100092c0
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef local_38

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
#undef UINT_00006878
#define UINT_00006878 (*(uint *)(0x6878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084f0
 */

void recovered_100084f0(void)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006878

#define local_38 (*(long *)(frame + 32))
#define lStack_40 (*(long *)(frame + 24))
#define local_48 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008540
 */

void recovered_10008540(long *param_1,long param_2,ulong param_3)

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
        recovered_10008540(&local_48,(long)(puVar8 + uVar11),uVar12);
        lVar2 = *param_1;
        *param_1 = local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = lVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        recovered_10005160(lVar2);
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
      puVar8 = (undefined1 *)recovered_10005100(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10008766;
  puVar8 = (undefined1 *)recovered_10005100(uVar13 + 1);
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
  recovered_10005160(lVar2);
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

#undef local_38
#undef lStack_40
#undef local_48

#undef PTR_DAT_1000a0d0
#define PTR_DAT_1000a0d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xfb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087f0
 */

void recovered_100087f0(char param_1)

{
  unsigned char frame[64] = {0};

  if ((byte)(param_1 - 0x30U) < 10) {
    *(&PTR_DAT_1000a0d0)[(byte)(param_1 - 0x30U)] = 1;
  }
  return;
}

#undef PTR_DAT_1000a0d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008820
 */

void recovered_10008820(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * 0x18;
    do {
      lVar2 = lVar2 + -0x18;
      recovered_10005160(*(undefined8 *)(*param_1 + lVar2));
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10005160(*param_1);
  return;
}


#undef DAT_100092cc
#define DAT_100092cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008880
 */

long recovered_10008880(long *param_1,undefined8 *param_2)

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
      lVar4 = recovered_10005100(uVar8 * 0x18);
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
          recovered_10005160(0);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_10005160(*param_1);
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
  recovered_10008540((long *)(lVar4 + uVar6 * 0x18),(long)puVar5,param_2[1]);
  lVar4 = param_1[1];
  param_1[1] = lVar4 + 1;
  return lVar4 * 0x18 + *param_1;
}

#undef DAT_100092cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089a0
 */

long * recovered_100089a0(long *param_1,long param_2,ulong param_3)

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
    puVar7 = (undefined1 *)recovered_10005100(uVar5 + 1);
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
    recovered_10005160(lVar13);
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
  puVar6 = (undefined1 *)recovered_10005100(uVar14 + 1);
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
  recovered_10005160(lVar13);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e40
 */

long recovered_10008e40(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] = {0};

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
  if (param_3 == param_4) goto LAB_100090fd;
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
    lVar5 = recovered_10005100(uVar6);
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
          if (uVar11 == uVar7) goto LAB_10008fbf;
          uVar8 = uVar7;
          if ((uVar11 & 0x1c) == 0) goto LAB_10008f55;
        }
        uVar7 = uVar11 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(lVar5 + uVar8) = *(undefined4 *)(lVar12 + uVar8);
          uVar8 = uVar8 + 4;
        } while (uVar7 != uVar8);
        if (uVar11 == uVar7) goto LAB_10008fbf;
      }
LAB_10008f55:
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
LAB_10008fbf:
    recovered_10005160(lVar12);
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
LAB_100090fd:
  lVar5 = 0;
  if (!bVar16) {
    lVar5 = lVar12 + uVar9;
  }
  return lVar5;
}

