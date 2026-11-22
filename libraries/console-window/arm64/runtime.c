/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f04U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f14U)))
#undef DAT_82010088
#define DAT_82010088 (*(uint8_t *)(0x82010088U))
#undef DAT_8201008c
#define DAT_8201008c (*(uint8_t *)(0x8201008cU))
#undef DAT_82010238
#define DAT_82010238 (*(uint8_t *)(0x82010238U))
#undef DAT_8201023c
#define DAT_8201023c (*(uint8_t *)(0x8201023cU))
#undef _DAT_82010088
#define _DAT_82010088 (*(uint *)(0x82010088U))
#undef _DAT_8201008c
#define _DAT_8201008c (*(uint *)(0x8201008cU))
#undef _DAT_82010238
#define _DAT_82010238 (*(int *)(0x82010238U))
#undef _DAT_8201023c
#define _DAT_8201023c (*(uint *)(0x8201023cU))
#define auStack_458 (*(ulong (*)[130])(frame + 24))
#define uStack_48 (*(ulong *)(frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000610(void)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;

  DAT_1000c110 = 0;
  uStack_48 = 0;
  DAT_1000c118 = 0;
  DAT_1000c120 = 0;
  uVar4 = _DAT_8201008c;
  if (0xf < _DAT_8201008c) {
    uVar4 = 0x10;
  }
  if ((_DAT_82010238 == 0x34364857) && (_DAT_8201023c != 0)) {
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = _DAT_8201023c;
    if (0x3f < _DAT_8201023c) {
      uVar4 = 0x40;
    }
    for (; uVar5 != uVar4; uVar5 = uVar5 + 1) {
      lVar7 = *(long *)(uVar5 * 0x10 + 0x82010248);
      if (lVar7 != 0) {
        uVar6 = *(ulong *)(uVar5 * 0x10 + 0x82010240);
        uVar1 = lVar7 + uVar6;
        if (0x300000 < uVar1 && uVar6 < uVar1) {
          if (uVar6 < 0x300001) {
            uVar6 = 0x300000;
          }
          if (uVar3 < 0x40) {
            uVar9 = uVar3;
            for (puVar8 = auStack_458 + uVar3 * 2 + 2; (uVar9 != 0 && (uVar6 < puVar8[-2]));
                puVar8 = puVar8 + -2) {
              puVar8[1] = puVar8[-1];
              *puVar8 = puVar8[-2];
              uVar9 = uVar9 - 1;
            }
            *puVar8 = uVar6;
            puVar8[1] = uVar1 - uVar6;
            uVar3 = uVar3 + 1;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
    for (uVar5 = 0; uVar5 != uVar4; uVar5 = uVar5 + 1) {
      uVar2 = *(uint *)(uVar5 * 8 + 0x82010094);
      if (uVar2 != 0) {
        uVar6 = (ulong)*(uint *)(uVar5 * 8 + 0x82010090);
        uVar1 = uVar2 + uVar6;
        if (0x300000 < uVar1) {
          if (uVar6 < 0x300001) {
            uVar6 = 0x300000;
          }
          if (uVar3 < 0x40) {
            uVar9 = uVar3;
            for (puVar8 = auStack_458 + uVar3 * 2 + 2; (uVar9 != 0 && (uVar6 < puVar8[-2]));
                puVar8 = puVar8 + -2) {
              puVar8[1] = puVar8[-1];
              *puVar8 = puVar8[-2];
              uVar9 = uVar9 - 1;
            }
            *puVar8 = uVar6;
            puVar8[1] = uVar1 - uVar6;
            uVar3 = uVar3 + 1;
          }
        }
      }
    }
  }
  if (uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    puVar8 = auStack_458 + 4;
    lVar7 = 1;
    while (uVar3 = uVar3 - 1, uVar3 != 0) {
      uVar5 = auStack_458[lVar7 * 2 + 1] + auStack_458[lVar7 * 2];
      if (uVar5 < *puVar8) {
        uVar5 = *puVar8;
        auStack_458[lVar7 * 2 + 3] = puVar8[1];
        auStack_458[lVar7 * 2 + 2] = uVar5;
        lVar7 = lVar7 + 1;
      }
      else {
        uVar1 = puVar8[1] + *puVar8;
        if (uVar5 < uVar1) {
          auStack_458[lVar7 * 2 + 1] = uVar1 - auStack_458[lVar7 * 2];
        }
      }
      puVar8 = puVar8 + 2;
    }
  }
  puVar8 = auStack_458 + 3;
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    recovered_1000248c(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_1000c118 == 0) {
    uVar4 = _DAT_82010088 & 0xfffffff0;
    if (_DAT_82010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300030 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_1000248c(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  if (DAT_1000c120 == 0) {
    DAT_1000c120 = DAT_1000c118;
  }
  DAT_1000c110 = 1;
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef auStack_458
#undef uStack_48

#undef DAT_1000c110
#define DAT_1000c110 (*(byte *)(((uintptr_t)pf_module_state + 0x5f04U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f14U)))
#undef DAT_82010088
#define DAT_82010088 (*(uint8_t *)(0x82010088U))
#undef DAT_8201008c
#define DAT_8201008c (*(uint8_t *)(0x8201008cU))
#undef DAT_82010238
#define DAT_82010238 (*(uint8_t *)(0x82010238U))
#undef DAT_8201023c
#define DAT_8201023c (*(uint8_t *)(0x8201023cU))
#undef _DAT_82010088
#define _DAT_82010088 (*(uint *)(0x82010088U))
#undef _DAT_8201008c
#define _DAT_8201008c (*(uint *)(0x8201008cU))
#undef _DAT_82010238
#define _DAT_82010238 (*(int *)(0x82010238U))
#undef _DAT_8201023c
#define _DAT_8201023c (*(uint *)(0x8201023cU))
#define local_48 (*(ulong *)(frame + 1064))
#define auStack_458 (*(ulong (*)[130])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000061c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000061c(void)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;

  local_48 = 0;
  if ((DAT_1000c110 & 1) == 0) {
    DAT_1000c118 = 0;
    DAT_1000c120 = 0;
    uVar4 = _DAT_8201008c;
    if (0xf < _DAT_8201008c) {
      uVar4 = 0x10;
    }
    if ((_DAT_82010238 == 0x34364857) && (_DAT_8201023c != 0)) {
      uVar5 = 0;
      uVar3 = 0;
      uVar4 = _DAT_8201023c;
      if (0x3f < _DAT_8201023c) {
        uVar4 = 0x40;
      }
      for (; uVar5 != uVar4; uVar5 = uVar5 + 1) {
        lVar7 = *(long *)(uVar5 * 0x10 + 0x82010248);
        if (lVar7 != 0) {
          uVar6 = *(ulong *)(uVar5 * 0x10 + 0x82010240);
          uVar1 = lVar7 + uVar6;
          if (0x300000 < uVar1 && uVar6 < uVar1) {
            if (uVar6 < 0x300001) {
              uVar6 = 0x300000;
            }
            if (uVar3 < 0x40) {
              uVar9 = uVar3;
              for (puVar8 = auStack_458 + uVar3 * 2 + 2; (uVar9 != 0 && (uVar6 < puVar8[-2]));
                  puVar8 = puVar8 + -2) {
                puVar8[1] = puVar8[-1];
                *puVar8 = puVar8[-2];
                uVar9 = uVar9 - 1;
              }
              *puVar8 = uVar6;
              puVar8[1] = uVar1 - uVar6;
              uVar3 = uVar3 + 1;
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      for (uVar5 = 0; uVar5 != uVar4; uVar5 = uVar5 + 1) {
        uVar2 = *(uint *)(uVar5 * 8 + 0x82010094);
        if (uVar2 != 0) {
          uVar6 = (ulong)*(uint *)(uVar5 * 8 + 0x82010090);
          uVar1 = uVar2 + uVar6;
          if (0x300000 < uVar1) {
            if (uVar6 < 0x300001) {
              uVar6 = 0x300000;
            }
            if (uVar3 < 0x40) {
              uVar9 = uVar3;
              for (puVar8 = auStack_458 + uVar3 * 2 + 2; (uVar9 != 0 && (uVar6 < puVar8[-2]));
                  puVar8 = puVar8 + -2) {
                puVar8[1] = puVar8[-1];
                *puVar8 = puVar8[-2];
                uVar9 = uVar9 - 1;
              }
              *puVar8 = uVar6;
              puVar8[1] = uVar1 - uVar6;
              uVar3 = uVar3 + 1;
            }
          }
        }
      }
    }
    if (uVar3 == 0) {
      lVar7 = 0;
    }
    else {
      puVar8 = auStack_458 + 4;
      lVar7 = 1;
      while (uVar3 = uVar3 - 1, uVar3 != 0) {
        uVar5 = auStack_458[lVar7 * 2 + 1] + auStack_458[lVar7 * 2];
        if (uVar5 < *puVar8) {
          uVar5 = *puVar8;
          auStack_458[lVar7 * 2 + 3] = puVar8[1];
          auStack_458[lVar7 * 2 + 2] = uVar5;
          lVar7 = lVar7 + 1;
        }
        else {
          uVar1 = puVar8[1] + *puVar8;
          if (uVar5 < uVar1) {
            auStack_458[lVar7 * 2 + 1] = uVar1 - auStack_458[lVar7 * 2];
          }
        }
        puVar8 = puVar8 + 2;
      }
    }
    puVar8 = auStack_458 + 3;
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      recovered_1000248c(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c118 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_1000248c(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_1000c120 == 0) {
      DAT_1000c120 = DAT_1000c118;
    }
    DAT_1000c110 = 1;
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef local_48
#undef auStack_458

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008a0
 */

ulong recovered_100008a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008ec
 */

long recovered_100008ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1000061c();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000092c
 */

ulong recovered_1000092c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000968
 */

long recovered_10000968(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1000061c();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5f0cU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5f14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000998
 */

ulong * recovered_10000998(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 != 0) {
    recovered_1000061c();
    puVar4 = DAT_1000c118;
    if (DAT_1000c120 != (ulong *)0x0) {
      puVar4 = DAT_1000c120;
    }
    if (puVar4 != (ulong *)0x0) {
      uVar3 = param_1 + 0xfU & 0xfffffffffffffff0;
      puVar2 = puVar4;
      do {
        if ((char)puVar2[3] == '\x01') {
          uVar5 = *puVar2;
          if (uVar3 <= uVar5) {
            if (uVar5 < uVar3 + 0x30) {
              puVar4 = (ulong *)puVar2[1];
            }
            else {
              puVar4 = (ulong *)((long)puVar2 + uVar3 + 0x20);
              *puVar4 = (uVar5 - uVar3) - 0x20;
              uVar5 = puVar2[1];
              *(ulong *)((long)puVar2 + uVar3 + 0x28) = uVar5;
              *(ulong **)((long)puVar2 + uVar3 + 0x30) = puVar2;
              *(undefined1 *)((long)puVar2 + uVar3 + 0x38) = 1;
              if (uVar5 != 0) {
                *(ulong **)(uVar5 + 0x10) = puVar4;
              }
              *puVar2 = uVar3;
              puVar2[1] = (ulong)puVar4;
            }
            DAT_1000c120 = DAT_1000c118;
            *(undefined1 *)(puVar2 + 3) = 0;
            if (puVar4 != (ulong *)0x0) {
              DAT_1000c120 = puVar4;
            }
            return puVar2 + 4;
          }
        }
        puVar1 = puVar2 + 1;
        puVar2 = DAT_1000c118;
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          puVar2 = (ulong *)*puVar1;
        }
      } while (puVar2 != (ulong *)0x0 && puVar2 != puVar4);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000c118
#undef DAT_1000c120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a70
 */

ulong recovered_10000a70(ulong param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    uVar2 = (uint)param_1 << (ulong)(param_2 & 0x1f);
    uVar3 = (ulong)uVar2;
    uVar1 = (int)(param_1 >> 0x20) << (ulong)(param_2 & 0x1f) |
            ((uint)param_1 >> 1) >> (ulong)(~param_2 & 0x1f);
    if (0x1f < param_2) {
      uVar1 = uVar2;
    }
    if (0x1f < param_2) {
      uVar3 = 0;
    }
    param_1 = 0;
    if (param_2 < 0x40) {
      param_1 = uVar3 | (ulong)uVar1 << 0x20;
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ab4
 */

ulong recovered_10000ab4(ulong param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return 0;
    }
    uVar2 = (uint)(param_1 >> 0x20);
    uVar1 = uVar2 >> (ulong)(param_2 & 0x1f);
    uVar3 = (ulong)uVar1 << 0x20;
    uVar2 = (uVar2 << 1) << (ulong)(~param_2 & 0x1f) | (uint)param_1 >> (ulong)(param_2 & 0x1f);
    if (0x1f < param_2) {
      uVar2 = uVar1;
    }
    if (0x1f < param_2) {
      uVar3 = 0;
    }
    param_1 = uVar3 | uVar2;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b00
 */

long recovered_10000b00(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong in_x10;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return in_x10;
    }
    iVar1 = (int)((ulong)param_1 >> 0x20);
    uVar2 = iVar1 >> (param_2 & 0x1f);
    if (0x1f < param_2) {
      uVar2 = iVar1 >> 0x1f;
    }
    in_x10 = (ulong)uVar2;
  }
  return in_x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b50
 */

/* WARNING: Removing unreachable block (ram,0x10000ba0) */

ulong recovered_10000b50(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = 0;
    uVar6 = 0x3f;
    do {
      uVar1 = param_1 >> (uVar6 & 0x3f) & 1 | lVar5 << 1;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = 1L << (uVar6 & 0x3f);
      }
      uVar4 = uVar2 | uVar4;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = param_2;
      }
      lVar5 = uVar1 - uVar2;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (-1 < (int)uVar3);
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b58
 */

ulong recovered_10000b58(ulong param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  if (param_2 == 0) {
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = 0;
    uVar6 = 0x3f;
    do {
      uVar1 = param_1 >> (uVar6 & 0x3f) & 1 | lVar5 << 1;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = 1L << (uVar6 & 0x3f);
      }
      uVar4 = uVar2 | uVar4;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = param_2;
      }
      lVar5 = uVar1 - uVar2;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (-1 < (int)uVar3);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar5;
  }
  return uVar4;
}


#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb8
 */

undefined8 recovered_10000bb8(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10000b58(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd8
 */

long recovered_10000bd8(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = -param_1;
  if (-1 < (long)param_1) {
    uVar1 = param_1;
  }
  uVar2 = -param_2;
  if (-1 < (long)param_2) {
    uVar2 = param_2;
  }
  lVar4 = recovered_10000b58(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c18
 */

long recovered_10000c18(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  if (param_2 == 0) {
    return 0;
  }
  lVar2 = -param_1;
  if (-1 < param_1) {
    lVar2 = param_1;
  }
  lVar1 = -param_2;
  if (-1 < param_2) {
    lVar1 = param_2;
  }
  lStack_28 = 0;
  recovered_10000b58(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c64
 */

void recovered_10000c64(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c6c
 */

int recovered_10000c6c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000c78(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000cbc(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000d00(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d4c
 */

void * recovered_10000d4c(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((count < 0x10) || ((((uint)source ^ (uint)destination) & 7) != 0)) {
    puVar3 = destination;
  }
  else {
    for (puVar3 = destination; (count != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)source;
      source = (undefined1 *)((long)source + 1);
      count = count - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < count + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)source + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    count = count + lVar4;
    while (7 < count) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)source + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      count = count - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    source = (void *)((long)source + (lVar6 - lVar4));
  }
  for (; count != 0; count = count - 1) {
    *puVar3 = *(undefined1 *)source;
    source = (undefined1 *)((long)source + 1);
    puVar3 = puVar3 + 1;
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e24
 */

void * recovered_10000e24(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((destination != source) && (count != 0)) {
    puVar2 = (undefined1 *)((long)source + count);
    if ((destination >= source && destination <= puVar2) &&
        (destination < source || puVar2 != destination)) {
      puVar3 = (undefined1 *)((long)destination + count);
      uVar1 = count;
      if ((0xf < count) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (count != 0 && (((int)destination + (int)count & 7U) != 0)); count = count - 1) {
          *(undefined1 *)((long)destination + (count - 1)) =
               *(undefined1 *)((long)source + (count - 1));
        }
        for (; 0x1f < count; count = count - 0x20) {
          *(undefined8 *)((long)destination + (count - 8)) =
               *(undefined8 *)((long)source + (count - 8));
          *(undefined8 *)((long)destination + (count - 0x10)) =
               *(undefined8 *)((long)source + (count - 0x10));
          *(undefined8 *)((long)destination + (count - 0x18)) =
               *(undefined8 *)((long)source + (count - 0x18));
          *(undefined8 *)((long)destination + (count - 0x20)) =
               *(undefined8 *)((long)source + (count - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = count; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)destination + count + lVar4 + -8) =
               *(undefined8 *)((long)source + count + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)destination + lVar4 + count);
        puVar2 = (undefined1 *)((long)source + lVar4 + count);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      destination = recovered_10000d4c(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f38
 */

void * recovered_10000f38(void *destination,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = destination;
  if (0xf < count) {
    uVar3 = (ulong)(value & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = destination; (count != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)value;
      count = count - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < count; count = count - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < count; count = count - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; count != 0; count = count - 1) {
    *(char *)puVar2 = (char)value;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd0
 */

void recovered_10000fd0(ulong *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;

  if (0xf < param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0));
        puVar3 = (ulong *)((long)puVar3 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    for (; 0x1f < param_2; param_2 = param_2 - 0x20) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    }
    for (; 7 < param_2; param_2 = param_2 - 8) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (ulong *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd4
 */

void recovered_10000fd4(ulong *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;

  if (0xf < param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0));
        puVar3 = (ulong *)((long)puVar3 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    for (; 0x1f < param_2; param_2 = param_2 - 0x20) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    }
    for (; 7 < param_2; param_2 = param_2 - 8) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (ulong *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd8
 */

int recovered_10000fd8(void *left,void *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < count) && ((((uint)right ^ (uint)left) & 7) == 0)) {
    for (lVar6 = 0; (uVar5 = count - lVar6, uVar5 != 0 && (((uint)left + (int)lVar6 & 7) != 0));
        lVar6 = lVar6 + 1) {
      iVar3 = (uint)*(byte *)((long)left + lVar6) - (uint)*(byte *)((long)right + lVar6);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)((long)left + lVar6) != *(long *)((long)right + lVar6)) {
        lVar4 = (long)left + lVar6;
        lVar6 = (long)right + lVar6;
        goto recovered_10001144;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_10001144;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_10001144;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_10001144;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_10001144:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = (byte *)(lVar4 + lVar7);
          pbVar2 = (byte *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
          iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
        } while (iVar3 == 0);
        return iVar3;
      }
      lVar7 = lVar7 + 8;
    }
    left = (void *)((long)left + lVar7 + lVar6);
    right = (void *)((long)right + lVar7 + lVar6);
  }
  while( true ) {
    if (count == 0) {
      return 0;
    }
    if ((uint)*(byte *)left - (uint)*(byte *)right != 0) break;
    left = (void *)((long)left + 1);
    right = (void *)((long)right + 1);
    count = count - 1;
  }
  return (uint)*(byte *)left - (uint)*(byte *)right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001144
 */

int recovered_10001144(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;

  lVar4 = 0;
  do {
    if (lVar4 == 8) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + lVar4);
    pbVar2 = (byte *)(param_2 + lVar4);
    lVar4 = lVar4 + 1;
    iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
  } while (iVar3 == 0);
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001174
 */

bool recovered_10001174(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001184
 */

bool recovered_10001184(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001194
 */

bool recovered_10001194(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a8
 */

bool recovered_100011a8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011c4
 */

bool recovered_100011c4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d4
 */

bool recovered_100011d4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011e4
 */

int recovered_100011e4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f8
 */

int recovered_100011f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000120c
 */

ulong recovered_1000120c(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  while( true ) {
    if (text == (char *)0x0) {
      return 0;
    }
    if (text[uVar1] == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001230
 */

int recovered_10001230(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *left;
    if (bVar1 == 0 || (uint)bVar1 != (uint)(byte)*right) break;
    left = left + 1;
    right = right + 1;
  }
  return (uint)bVar1 - (uint)(byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001258
 */

int recovered_10001258(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *left;
    if (bVar1 == 0 || (uint)bVar1 != (uint)(byte)*right) break;
    left = left + 1;
    right = right + 1;
  }
  return (uint)bVar1 - (uint)(byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000125c
 */

void recovered_1000125c(long param_1,long param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001274
 */

void recovered_10001274(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_1000120c(param_1);
    destination = recovered_10000c78(uVar1 + 1);
    if (destination != (void *)0x0) {
      recovered_10000d4c(destination,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012b0
 */

char * recovered_100012b0(char *param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (*param_1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012d8
 */

long recovered_100012d8(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100012b0(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

char * recovered_10001320(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100012b0(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001360
 */

char * recovered_10001360(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;

  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      lVar3 = 0;
      do {
        pcVar1 = param_2 + lVar3;
        if (*pcVar1 == '\0') {
          return param_1;
        }
        pcVar2 = param_1 + lVar3;
        lVar3 = lVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


#undef DAT_10006347
#define DAT_10006347 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000139c
 */

undefined * recovered_1000139c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10006347;
}

#undef DAT_10006347

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5df4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a8
 */

undefined ** recovered_100013a8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[8])(frame + 24))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100013b4(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000f38(auStack_38,0,0x18);
  bVar1 = recovered_10002584(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000142c
 */

double recovered_1000142c(double param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    param_1 = param_1 + param_1;
  }
  for (uVar1 = param_2 & (int)param_2 >> 0x1f; uVar1 != 0; uVar1 = uVar1 + 1) {
    param_1 = param_1 * 0.5;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001460
 */

uint128 recovered_10001460(double param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  dVar5 = 0.0;
  if (param_1 != 0.0) {
    iVar3 = 0;
    dVar4 = -param_1;
    if (0.0 <= param_1) {
      dVar4 = param_1;
    }
    for (; 1.0 <= dVar4; dVar4 = dVar4 * 0.5) {
      iVar3 = iVar3 + 1;
    }
    while( true ) {
      bVar2 = false;
      if ((0.0 < dVar4) && (bVar2 = false, !NAN(dVar4))) {
        bVar2 = dVar4 < 0.5;
      }
      if (!bVar2) break;
      dVar4 = dVar4 + dVar4;
      iVar3 = iVar3 + -1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    dVar5 = -dVar4;
    if (0.0 <= param_1) {
      dVar5 = dVar4;
    }
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar5;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d4
 */

uint128 recovered_100014d4(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  if (param_2 == 0.0) {
    return ZEXT816(0);
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = param_1 - param_2 * (double)(int)(param_1 / param_2);
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014f8
 */

uint128 recovered_100014f8(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;
  uint uVar3;
  double dVar4;
  double dVar5;

  uVar3 = (uint)param_2;
  dVar5 = 0.0;
  if ((double)(int)uVar3 == param_2) {
    if (uVar3 == 0) {
      dVar5 = 1.0;
    }
    else {
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      dVar4 = 1.0;
      for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          dVar4 = param_1 * dVar4;
        }
        param_1 = param_1 * param_1;
      }
      dVar5 = 1.0 / dVar4;
      if (-1 < (int)uVar3) {
        dVar5 = dVar4;
      }
    }
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar5;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001558
 */

uint128 recovered_10001558(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(int)param_1;
  dVar2 = (double)((int)param_1 + -1);
  if (dVar3 <= param_1) {
    dVar2 = dVar3;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001574
 */

uint128 recovered_10001574(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar2 = (double)(int)param_1;
  dVar3 = (double)((int)param_1 + -1);
  if (dVar2 <= param_1) {
    dVar3 = dVar2;
  }
  dVar2 = dVar3 + 1.0;
  if (param_1 <= dVar3) {
    dVar2 = dVar3;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015a0
 */

uint128 recovered_100015a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  double dVar3;

  dVar3 = 0.0;
  if (0.0 < param_1) {
    iVar2 = 0x18;
    dVar3 = param_1;
    do {
      dVar3 = (dVar3 + param_1 / dVar3) * 0.5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar3;
  return auVar1;
}


#undef DAT_10006210
#define DAT_10006210 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015dc
 */

uint128 recovered_100015dc(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;

  if (0.0 < param_1) {
    iVar2 = 0;
    for (; 1.5 < param_1; param_1 = param_1 * 0.5) {
      iVar2 = iVar2 + 1;
    }
    for (; param_1 < 0.75; param_1 = param_1 + param_1) {
      iVar2 = iVar2 + -1;
    }
    dVar5 = 1.0;
    dVar6 = (param_1 + -1.0) / (param_1 + 1.0);
    dVar7 = dVar6 * dVar6;
    dVar4 = 0.0;
    for (uVar3 = 1; uVar3 < 0x14; uVar3 = uVar3 + 2) {
      dVar4 = dVar4 + dVar6 / dVar5;
      dVar6 = dVar7 * dVar6;
      dVar5 = dVar5 + 2.0;
    }
    PF_PART8(auVar1, 8) = 0;
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10006210 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10006210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001688
 */

long recovered_10001688(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10006218
#define DAT_10006218 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000169c
 */

uint128 recovered_1000169c(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_100016f0(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006218);
  return auVar1;
}

#undef DAT_10006218

#undef DAT_10006220
#define DAT_10006220 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006228
#define DAT_10006228 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10006230
#define DAT_10006230 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10006238
#define DAT_10006238 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

void recovered_100016f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10006220 < param_1; param_1 = param_1 + DAT_10006238) {
  }
  for (; param_1 < DAT_10006228; param_1 = param_1 + DAT_10006230) {
  }
  return;
}

#undef DAT_10006220
#undef DAT_10006228
#undef DAT_10006230
#undef DAT_10006238

#undef DAT_10006240
#define DAT_10006240 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001734
 */

uint128 recovered_10001734(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_100016f0(in_d0);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006240;
  return auVar1;
}

#undef DAT_10006240

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001780
 */

uint128 recovered_10001780(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = -param_1;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2;
  return auVar1;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10001790(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_100017f0(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10001840(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10001868(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000188c
 */

float recovered_1000188c(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018c0
 */

float recovered_100018c0(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001460((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d8
 */

float recovered_100018d8(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000142c((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f0
 */

float recovered_100018f0(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100014f8((double)param_1,(double)param_2);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000190c
 */

float recovered_1000190c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)param_1;
  fVar2 = (float)((int)param_1 + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001930
 */

float recovered_10001930(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001574((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001948
 */

uint128 recovered_10001948(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double dVar4;

  if (param_1 < 0.0) {
    dVar4 = (double)(int)param_1;
    dVar3 = (double)((int)param_1 + -1);
    if (dVar4 <= param_1) {
      dVar3 = dVar4;
    }
    dVar4 = dVar3 + 1.0;
    if (param_1 <= dVar3) {
      dVar4 = dVar3;
    }
    PF_PART8(auVar1, 8) = 0;
    (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
    return auVar1;
  }
  dVar4 = (double)(int)param_1;
  dVar3 = (double)((int)param_1 + -1);
  if (dVar4 <= param_1) {
    dVar3 = dVar4;
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001970
 */

float recovered_10001970(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001948((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001988
 */

float recovered_10001988(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100015a0((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a0
 */

float recovered_100019a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100015dc((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b8
 */

long recovered_100019b8(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019cc
 */

float recovered_100019cc(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000169c((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e4
 */

float recovered_100019e4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001734((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019fc
 */

float recovered_100019fc(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a0c
 */

long recovered_10001a0c(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;

  for (pbVar5 = param_1; bVar2 = *pbVar5,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar5 = pbVar5 + 1) {
  }
  uVar6 = (ulong)(bVar2 == 0x2d || bVar2 == 0x2b);
  pbVar4 = pbVar5;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar4 = pbVar5 + 1;
  }
  if (param_3 == 0x10) {
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001aa4;
  }
  else {
    if (param_3 != 0) {
      if (param_3 - 0x25 < 0xffffffdd) {
        if (param_2 == (undefined8 *)0x0) {
          return 0;
        }
        *param_2 = param_1;
        return 0;
      }
      goto LAB_10001ad0;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001ad0;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001ad0;
    }
LAB_10001aa4:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001ad0:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001b10((uint)*pbVar4);
    if (param_3 <= uVar3) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar3;
    param_1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar1 = -lVar7;
  if (bVar2 != 0x2d) {
    lVar1 = lVar7;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

uint recovered_10001b10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 - 0x37;
  if (0x19 < param_1 - 0x41U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x61U < 0x1a) {
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b40
 */

long recovered_10001b40(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;

  pbVar6 = param_1;
  while( true ) {
    bVar3 = *pbVar6;
    if ((4 < bVar3 - 9) && (bVar3 != 0x20)) break;
    pbVar6 = pbVar6 + 1;
  }
  if (bVar3 == 0x2b) {
    bVar4 = false;
    pbVar6 = pbVar6 + 1;
  }
  else if (bVar3 == 0x2d) {
    pbVar6 = pbVar6 + 1;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (param_3 == 0x10) {
    if (*pbVar6 != 0x30) {
      param_3 = 0x10;
      goto LAB_10001c24;
    }
    bVar3 = pbVar6[1];
    uVar5 = 0x10;
  }
  else {
    if (param_3 != 0) {
      if (param_3 - 0x25 < 0xffffffdd) {
        if (param_2 == (undefined8 *)0x0) {
          return 0;
        }
        *param_2 = param_1;
        return 0;
      }
      goto LAB_10001c24;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001c24;
    }
    bVar3 = pbVar6[1];
    uVar5 = 8;
  }
  pbVar2 = pbVar6 + 2;
  param_3 = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    param_3 = uVar5;
  }
  pbVar6 = pbVar2;
LAB_10001c24:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001b10((uint)*pbVar6);
    if (param_3 <= uVar5) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar5;
    param_1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar1 = -lVar7;
  if (!bVar4) {
    lVar1 = lVar7;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c64
 */

uint128 recovered_10001c64(byte *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint128 auVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  double dVar12;
  double dVar13;
  double dVar14;

  for (pbVar7 = param_1; bVar2 = *pbVar7,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar7 = pbVar7 + 1) {
  }
  bVar8 = false;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar7 = pbVar7 + 1;
  }
  dVar12 = 0.0;
  while( true ) {
    bVar3 = *pbVar7;
    uVar4 = bVar3 - 0x30U;
    if (9 < uVar4) break;
    dVar12 = (double)uVar4 + dVar12 * 10.0;
    pbVar7 = pbVar7 + 1;
    bVar8 = true;
  }
  if (bVar3 == 0x2e) {
    dVar13 = 1.0;
    dVar14 = 0.0;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar7;
      if (9 < bVar3 - 0x30U) break;
      dVar14 = (double)(bVar3 - 0x30U) + dVar14 * 10.0;
      dVar13 = dVar13 * 10.0;
      bVar8 = true;
    }
  }
  else {
    dVar13 = 1.0;
    dVar14 = 0.0;
  }
  if (bVar8) {
    dVar12 = dVar12 + dVar14 / dVar13;
    if ((bVar3 | 0x20) == 0x65) {
      iVar9 = 0;
      bVar8 = false;
      bVar3 = pbVar7[1];
      iVar10 = 1;
      pbVar1 = pbVar7 + 1;
      if (bVar3 == 0x2d) {
        iVar10 = -1;
        pbVar1 = pbVar7 + 2;
      }
      pbVar11 = pbVar7 + 2;
      iVar6 = 1;
      if (bVar3 != 0x2b) {
        pbVar11 = pbVar1;
        iVar6 = iVar10;
      }
      for (; *pbVar11 - 0x30U < 10; pbVar11 = pbVar11 + 1) {
        iVar9 = (uint)*pbVar11 + iVar9 * 10 + -0x30;
        bVar8 = true;
      }
      if (bVar8) {
        dVar12 = recovered_1000142c(dVar12,iVar9 * iVar6);
        pbVar7 = pbVar11;
      }
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = pbVar7;
    }
    dVar13 = -dVar12;
    if (bVar2 != 0x2d) {
      dVar13 = dVar12;
    }
  }
  else {
    dVar13 = 0.0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
  }
  PF_PART8(auVar5, 8) = 0;
  (*(double *)((uint8_t *)&(auVar5)+0)) = dVar13;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df4
 */

float recovered_10001df4(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001c64(in_x0,in_x1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


#define local_80 (*(byte * *)(frame + 32))
#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e0c
 */

int recovered_10001e0c(byte *param_1,ulong param_2,byte *param_3,double *param_4)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  double *pdVar3;
  bool bVar4;
  char *pcVar5;
  double dVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;

  local_8c = 0;
  local_88 = param_2;
  local_80 = param_1;
  pdStack_78 = param_4;
  if (param_2 != 0) {
    *param_1 = 0;
  }
LAB_10001e7c:
  bVar1 = *param_3;
  if (bVar1 != 0x25) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        *local_80 = 0;
      }
      return local_8c;
    }
    pbVar8 = param_3;
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = bVar1;
      goto LAB_10001ea8;
    }
    goto LAB_10001eac;
  }
  pbVar8 = param_3 + 1;
  bVar1 = *pbVar8;
  if (bVar1 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar1)) {
      case 0x2a:
        goto code_r0x10001f48;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10001f30;
      default:
        if ((bVar1 != 0x20) && (bVar1 != 0x23)) goto LAB_10001f30;
      case 0x2b:
      case 0x2d:
      case 0x30:
        bVar1 = *pbVar8;
        param_3 = param_3 + 1;
        pbVar8 = pbVar8 + 1;
      }
    } while( true );
  }
  if (1 < local_88) {
    *local_80 = 0x25;
    local_88 = local_88 - 1;
    local_80 = local_80 + 1;
  }
  local_8c = local_8c + 1;
  goto LAB_100021d8;
LAB_10001f30:
  do {
    pbVar8 = param_3 + 1;
    bVar1 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar1 - 0x30U < 10);
LAB_10001f58:
  uVar9 = (uint)bVar1;
  if (uVar9 == 0x2e) {
    if (pbVar8[1] == 0x2a) {
      pdStack_78 = pdStack_78 + 1;
      pbVar8 = pbVar8 + 2;
      uVar9 = (uint)*pbVar8;
    }
    else {
      do {
        pbVar8 = pbVar8 + 1;
        uVar9 = (uint)*pbVar8;
      } while (uVar9 - 0x30 < 10);
    }
  }
  if (uVar9 == 0x4c) {
    pbVar8 = pbVar8 + 1;
    uVar13 = 8;
    bVar2 = true;
  }
  else if (uVar9 == 0x7a) {
    bVar2 = false;
    pbVar8 = pbVar8 + 1;
    uVar13 = 5;
  }
  else if (uVar9 == 0x6a) {
    bVar2 = false;
    pbVar8 = pbVar8 + 1;
    uVar13 = 7;
  }
  else if (uVar9 == 0x6c) {
    bVar4 = pbVar8[1] == 0x6c;
    uVar13 = 3;
    if (bVar4) {
      uVar13 = 4;
    }
LAB_1000200c:
    pbVar10 = pbVar8 + 1;
    bVar2 = false;
    if (bVar4) {
      pbVar10 = pbVar8 + 2;
    }
    pbVar8 = pbVar10;
  }
  else if (uVar9 == 0x74) {
    bVar2 = false;
    pbVar8 = pbVar8 + 1;
    uVar13 = 6;
  }
  else {
    if (uVar9 == 0x68) {
      bVar4 = pbVar8[1] == 0x68;
      uVar13 = 1;
      if (!bVar4) {
        uVar13 = 2;
      }
      goto LAB_1000200c;
    }
    bVar2 = false;
    uVar13 = 0;
  }
  bVar1 = *pbVar8;
  switch((uintptr_t)(bVar1)) {
  case 99:
    pdVar3 = pdStack_78 + 1;
    if (1 < local_88) {
      *local_80 = (byte)*(uint *)pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      goto LAB_10001ea8;
    }
    break;
  case 100:
  case 0x69:
code_r0x10002128:
    switch((uintptr_t)(uVar13)) {
    case 1:
      dVar6 = (double)(long)*(char *)pdStack_78;
      break;
    case 2:
      dVar6 = (double)(long)*(short *)pdStack_78;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      dVar6 = *pdStack_78;
      break;
    default:
      dVar6 = (double)(long)(int)*(uint *)pdStack_78;
    }
    if ((long)dVar6 < 0) {
      if (1 < local_88) {
        *local_80 = 0x2d;
        local_88 = local_88 - 1;
        local_80 = local_80 + 1;
      }
      local_8c = local_8c + 1;
      dVar6 = (double)-(long)dVar6;
    }
LAB_100021c8:
    pdStack_78 = pdStack_78 + 1;
    uVar9 = 10;
code_r0x100021d0:
    uVar7 = 0;
LAB_100021d4:
    recovered_100023c0((long *)&local_80,&local_88,&local_8c,(ulong)dVar6,uVar9,uVar7);
    goto LAB_100021d8;
  case 0x66:
    if (!bVar2) {
      dVar6 = *pdStack_78;
      if (dVar6 < 0.0) {
        if (1 < local_88) {
          *local_80 = 0x2d;
          local_88 = local_88 - 1;
          local_80 = local_80 + 1;
        }
        local_8c = local_8c + 1;
        dVar6 = -dVar6;
      }
      pdStack_78 = pdStack_78 + 1;
      recovered_100023c0((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar6,10,0);
      pbVar10 = local_80;
      if (1 < local_88) {
        pbVar10 = local_80 + 1;
        *local_80 = 0x2e;
        local_88 = local_88 - 1;
      }
      dVar6 = dVar6 - (double)(int)dVar6;
      iVar11 = 6;
      do {
        iVar12 = (int)(dVar6 * 10.0);
        local_80 = pbVar10;
        if (1 < local_88) {
          local_80 = pbVar10 + 1;
          *pbVar10 = (char)iVar12 + 0x30;
          local_88 = local_88 - 1;
        }
        dVar6 = dVar6 * 10.0 - (double)iVar12;
        iVar11 = iVar11 + -1;
        pbVar10 = local_80;
      } while (iVar11 != 0);
      local_8c = local_8c + 7;
      goto LAB_100021d8;
    }
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0x13dU);
code_r0x100021ec:
    pdStack_78 = pdStack_78 + 1;
    recovered_10002370((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_100021d8;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      dVar6 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002370((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x172U));
      uVar9 = 0x10;
      goto code_r0x100021d0;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pcVar5 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
      goto code_r0x100021ec;
    case 0x75:
      switch((uintptr_t)(uVar13)) {
      case 1:
        dVar6 = (double)(ulong)*(byte *)pdStack_78;
        break;
      case 2:
        dVar6 = (double)(ulong)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        dVar6 = *pdStack_78;
        break;
      default:
        dVar6 = (double)(ulong)*(uint *)pdStack_78;
      }
      goto LAB_100021c8;
    case 0x78:
code_r0x100020e4:
      switch((uintptr_t)(uVar13)) {
      case 1:
        dVar6 = (double)(ulong)*(byte *)pdStack_78;
        break;
      case 2:
        dVar6 = (double)(ulong)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        dVar6 = *pdStack_78;
        break;
      default:
        dVar6 = (double)(ulong)*(uint *)pdStack_78;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar7 = (uint)(*pbVar8 == 0x58);
      uVar9 = 0x10;
      goto LAB_100021d4;
    default:
      if (bVar1 == 0x49) goto code_r0x10002128;
      if (bVar1 == 0x58) goto code_r0x100020e4;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_10001ea8:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10001eac:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_100021d8:
  param_3 = pbVar8 + 1;
  goto LAB_10001e7c;
code_r0x10001f48:
  pdStack_78 = pdStack_78 + 1;
  bVar1 = *pbVar8;
  goto LAB_10001f58;
}

#undef local_80
#undef pdStack_78
#undef local_8c
#undef local_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002334
 */

void recovered_10002334(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef str_10006355
#define str_10006355 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002370
 */

void recovered_10002370(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10006355;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002334(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10006355

#undef str_1000635c
#define str_1000635c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
#undef str_1000636d
#define str_1000636d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c0
 */

void recovered_100023c0(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_1000635c;
  if (param_6 == 0) {
    pcVar1 = str_1000636d;
  }
  uVar5 = (ulong)param_5;
  lVar3 = 0;
  do {
    lVar6 = lVar3;
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = param_4 / uVar5;
    }
    local_80[lVar6] = pcVar1[param_4 - uVar2 * uVar5];
    bVar4 = uVar5 <= param_4;
    param_4 = uVar2;
    lVar3 = lVar6 + 1;
  } while (bVar4);
  for (; lVar6 != -1; lVar6 = lVar6 + -1) {
    recovered_10002334(param_1,param_2,param_3,local_80[lVar6]);
  }
  return;
}

#undef str_1000635c
#undef str_1000636d
#undef local_80

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10002464(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001e0c(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f04U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5f14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000248c
 */

void recovered_1000248c(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;

  uVar4 = param_1 + param_2;
  if (CARRY8(param_1,param_2)) {
    uVar4 = 0xffffffffffffffff;
  }
  bVar1 = 0x44 < param_1 >> 0x19;
  if (((!bVar1 && param_1 < uVar4) && 0x83ffffff < uVar4) &&
      ((bVar1 || uVar4 <= param_1) || uVar4 != 0x84000000)) {
    if (param_1 >> 0x1a < 0x21) {
      recovered_10002514(param_1,0x84000000 - param_1,param_3);
    }
    if (uVar4 < 0x8a000001) {
      return;
    }
    param_2 = uVar4 - 0x8a000000;
    param_1 = 0x8a000000;
  }
  if (param_3 != (ulong *)0x0) {
    plVar3 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar4 = param_2 - ((long)plVar3 - param_1);
    if (((long)plVar3 - param_1 <= param_2 && uVar4 != 0) &&
       (uVar4 = uVar4 & 0xfffffffffffffff0, 0x30 < uVar4)) {
      *plVar3 = uVar4 - 0x20;
      plVar3[1] = 0;
      puVar5 = (undefined1 *)*param_3;
      plVar3[2] = (long)puVar5;
      *(undefined1 *)(plVar3 + 3) = 1;
      puVar2 = &DAT_1000c110;
      if (DAT_1000c118 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_1000c120 == (long *)0x0) {
        DAT_1000c120 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f04U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f0cU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5f14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002514
 */

void recovered_10002514(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;

  if (param_3 != (ulong *)0x0) {
    plVar2 = (long *)(param_1 + 0xfU & 0xfffffffffffffff0);
    uVar3 = param_2 - ((long)plVar2 - param_1);
    if (((ulong)((long)plVar2 - param_1) <= param_2 && uVar3 != 0) &&
       (uVar3 = uVar3 & 0xfffffffffffffff0, 0x30 < uVar3)) {
      *plVar2 = uVar3 - 0x20;
      plVar2[1] = 0;
      puVar4 = (undefined1 *)*param_3;
      plVar2[2] = (long)puVar4;
      *(undefined1 *)(plVar2 + 3) = 1;
      puVar1 = &DAT_1000c110;
      if (DAT_1000c118 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000c120 == (long *)0x0) {
        DAT_1000c120 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002584
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002584(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026cc
 */

void recovered_100026cc(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c130 != 0) {
          DAT_1000c130 = DAT_1000c130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10002784(1);
        }
        else {
          if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
            recovered_10002784(0);
          }
          pcVar1 = &DAT_1000c138 + DAT_1000c130;
          DAT_1000c130 = DAT_1000c130 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002784
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002784(int param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c130 != 0) || (param_1 != 0)) {
    if (DAT_1000c130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d4c(local_230,&DAT_1000c138,DAT_1000c130);
      uVar2 = DAT_1000c130;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003518(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_1000c130 = 0;
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002810(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c130 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000d4c(auStack_230,&DAT_1000c138,DAT_1000c130);
    uVar2 = DAT_1000c130;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003518(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_1000c130 = 0;
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002818
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002818(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c130 != 0) {
    if (DAT_1000c130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d4c(auStack_230,&DAT_1000c138,DAT_1000c130);
      uVar2 = DAT_1000c130;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003518(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_1000c130 = 0;
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10006381
#define DAT_10006381 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

void recovered_10002820(char *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10006381;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002464(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_100026cc(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10006381
#undef acStack_160

#undef DAT_1000639f
#define DAT_1000639f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x193U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
#undef str_10006384
#define str_10006384 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x178U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002884
 */

/* WARNING: Removing unreachable block (ram,0x100028d0) */

void recovered_10002884(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100028a8(str_10006384);
  pcVar4 = &DAT_1000639f;
  for (uVar3 = recovered_1000120c(&DAT_1000639f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c130 != 0) {
        DAT_1000c130 = DAT_1000c130 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10002784(1);
      }
      else {
        if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
          recovered_10002784(0);
        }
        pcVar1 = &DAT_1000c138 + DAT_1000c130;
        DAT_1000c130 = DAT_1000c130 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000639f
#undef DAT_1000c130
#undef DAT_1000c138
#undef str_10006384

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a8
 */

void recovered_100028a8(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_1000120c(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c130 != 0) {
          DAT_1000c130 = DAT_1000c130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10002784(1);
        }
        else {
          if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
            recovered_10002784(0);
          }
          pcVar1 = &DAT_1000c138 + DAT_1000c130;
          DAT_1000c130 = DAT_1000c130 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138

#undef DAT_1000639f
#define DAT_1000639f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x193U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f24U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2cU)))
#undef str_100063a2
#define str_100063a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d4
 */

/* WARNING: Removing unreachable block (ram,0x100028d0) */

void recovered_100028d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100028a8(str_100063a2);
  pcVar4 = &DAT_1000639f;
  for (uVar3 = recovered_1000120c(&DAT_1000639f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c130 != 0) {
        DAT_1000c130 = DAT_1000c130 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10002784(1);
      }
      else {
        if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
          recovered_10002784(0);
        }
        pcVar1 = &DAT_1000c138 + DAT_1000c130;
        DAT_1000c130 = DAT_1000c130 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000639f
#undef DAT_1000c130
#undef DAT_1000c138
#undef str_100063a2

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100028f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10002818();
    bVar2 = recovered_10003518(0x44);
    bVar1 = false;
    if (bVar2) {
      if (_DAT_82010844 == 0) {
        bVar1 = false;
      }
      else {
        iVar3 = (*(code *)(ulong)_DAT_82010844)(param_1,param_2,param_3,param_4);
        bVar1 = iVar3 != 0;
      }
    }
  }
  return bVar1;
}

#undef DAT_82010844
#undef _DAT_82010844

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

undefined8 recovered_10002970(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002974
 */

void recovered_10002974(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002978
 */

undefined8 recovered_10002978(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10006381
#define DAT_10006381 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
#undef str_10006436
#define str_10006436 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22aU)))
#undef str_10006443
#define str_10006443 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x237U)))
#undef str_10006451
#define str_10006451 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

undefined4 * recovered_10002980(char *param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001230(param_1,str_10006436);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001230(param_1,str_10006443);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001230(param_1,str_10006451);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c78(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000f38(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100012b0((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012b0((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012b0((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100012b0((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012b0((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012b0((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100012b0((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_10002464_1((char *)(puVar4 + 1),0xf1,&DAT_10006381,(ulonglong)param_1);
        recovered_10000f38(&uStack_4c,0,0xc);
        uVar6 = recovered_10002bbc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002b64:
            recovered_10000cbc(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100012b0((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002c0c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002b64;
              recovered_10000d4c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
                                );
              uVar7 = (ulong)uStack_48;
            }
            else {
              *(ulong *)(puVar4 + 0x3e) = (ulong)uStack_4c;
            }
            *(ulong *)(puVar4 + 0x42) = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          *(undefined8 *)(puVar4 + 0x46) = *(undefined8 *)(puVar4 + 0x42);
          return puVar4;
        }
        return puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_10000c78(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000f38(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_10002464_1((char *)(puVar4 + 1),0xf1,&DAT_10006381,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_10006381
#undef DAT_1000c058
#undef str_10006436
#undef str_10006443
#undef str_10006451
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002bbc(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003518(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c0c
 */

undefined8 recovered_10002c0c(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x110);
    if (uVar4 < param_2) {
      uVar1 = 0x100;
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 << 1;
      } while (uVar4 < param_2);
      pvVar2 = recovered_10000d00(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_1000c058 = 0xc;
        *(undefined1 *)(param_1 + 0x129) = 1;
        uVar3 = 0;
      }
      else {
        *(ulong *)(param_1 + 0x110) = uVar4;
        uVar3 = 1;
        *(void **)(param_1 + 0xf8) = pvVar2;
        *(void **)(param_1 + 0x100) = pvVar2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_1000c058

#undef DAT_10006381
#define DAT_10006381 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
#undef str_10006436
#define str_10006436 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22aU)))
#undef str_10006443
#define str_10006443 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x237U)))
#undef str_10006451
#define str_10006451 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c94
 */

undefined4 * recovered_10002c94(char *param_1,long param_2,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_10002cc8(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001230(param_1,str_10006436);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001230(param_1,str_10006443);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001230(param_1,str_10006451);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c78(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000f38(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100012b0((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012b0((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012b0((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100012b0((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012b0((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012b0((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100012b0((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_10002464_1((char *)(puVar4 + 1),0xf1,&DAT_10006381,(ulonglong)param_1);
        recovered_10000f38(&uStack_4c,0,0xc);
        uVar6 = recovered_10002bbc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002b64:
            recovered_10000cbc(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100012b0((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002c0c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002b64;
              recovered_10000d4c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
                                );
              uVar7 = (ulong)uStack_48;
            }
            else {
              *(ulong *)(puVar4 + 0x3e) = (ulong)uStack_4c;
            }
            *(ulong *)(puVar4 + 0x42) = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          *(undefined8 *)(puVar4 + 0x46) = *(undefined8 *)(puVar4 + 0x42);
          return puVar4;
        }
        return puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_10000c78(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000f38(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_10002464_1((char *)(puVar4 + 1),0xf1,&DAT_10006381,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_10006381
#undef DAT_1000c058
#undef str_10006436
#undef str_10006443
#undef str_10006451
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cc8
 */

undefined8 recovered_10002cc8(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100030ec(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000cbc(*(void **)(param_1 + 0x40));
    }
    recovered_10000cbc(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d0c
 */

ulong recovered_10002d0c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  uint128 auVar1;
  uint128 auVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  uVar7 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      if ((*param_4 == 0) && (param_4[0x48] == -1)) {
        uVar5 = *(ulong *)(param_4 + 0x46);
        uVar7 = *(ulong *)(param_4 + 0x42) - uVar5;
        if (*(ulong *)(param_4 + 0x42) < uVar5 || uVar7 == 0) {
          uVar7 = 0;
          *(undefined1 *)(param_4 + 0x4a) = 1;
        }
        else {
          PF_PART8(auVar1, 8) = 0;
          PF_PART8(auVar1, 0) = param_2;
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_3;
          uVar6 = param_3 * param_2;
          if (SUB168(auVar1 * auVar2,8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          count = uVar7;
          if (uVar6 <= uVar7) {
            count = uVar6;
          }
          recovered_10000d4c(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + count;
          if (uVar7 < uVar6) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = count / param_2;
          }
        }
      }
      else {
        uVar7 = 0;
        while( true ) {
          uVar5 = param_2;
          puVar3 = param_1;
          if (uVar7 == param_3) break;
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar4 = recovered_10002e40(param_4);
            if (uVar4 == 0xffffffff) {
              return uVar7;
            }
            *puVar3 = (char)uVar4;
            puVar3 = puVar3 + 1;
          }
          param_1 = param_1 + param_2;
          uVar7 = uVar7 + 1;
        }
        uVar7 = param_3;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}


#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e40
 */

uint recovered_10002e40(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] == '\x01') {
    uVar1 = param_1[0x48];
    if (uVar1 != 0xffffffff) {
      param_1[0x48] = -1;
      return uVar1;
    }
    if (*param_1 == 1) {
      uVar4 = *(ulong *)(param_1 + 0xce);
      if (uVar4 < *(ulong *)(param_1 + 0xcc)) {
LAB_10002ed8:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100028f8((long)text,0x1fe,&DAT_10006354,0);
      if (bVar2) {
        uVar3 = recovered_1000120c(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002ed8;
      }
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x46);
      if (uVar4 < *(ulong *)(param_1 + 0x42)) {
        *(ulong *)(param_1 + 0x46) = uVar4 + 1;
        return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return 0xffffffff;
}

#undef DAT_10006354

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f24
 */

long recovered_10002f24(void *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_100026cc(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10003024;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002c0c((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000f38((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000d4c((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10003024;
    }
  }
  param_3 = 0;
LAB_10003024:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003034
 */

undefined8 recovered_10003034(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000c058 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10003040;
        lVar1 = 0x108;
      }
      param_2 = *(long *)((long)param_1 + lVar1) + param_2;
    }
    if (-1 < (long)param_2) {
      *(ulong *)(param_1 + 0x46) = param_2;
      *(bool *)(param_1 + 0x4a) = *(ulong *)(param_1 + 0x42) <= param_2;
      param_1[0x48] = -1;
      return 0;
    }
  }
LAB_10003040:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c8
 */

undefined8 recovered_100030c8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030ec
 */

undefined8 recovered_100030ec(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_100032c8(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_1000c058 = 5;
        *(undefined1 *)((long)param_1 + 0x129) = 1;
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
        *(undefined1 *)((long)param_1 + 0x127) = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_1000c058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

undefined1 recovered_10003160(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x128);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000316c
 */

undefined1 recovered_1000316c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x129);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003178
 */

void recovered_10003178(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000318c
 */

uint recovered_1000318c(uint param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if ((param_1 != 0xffffffff) && (param_2 != 0)) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x120) = uVar1;
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return uVar1;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

undefined8 recovered_100031b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_100031e8(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100031e8(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003518(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000321c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e4cU)))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000322c
 */

undefined8 recovered_1000322c(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000f38(&uStack_2c,0,0xc);
    uVar1 = recovered_10002bbc(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_100032c8(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_100031e8(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c058
#undef uStack_28
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100032c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003518(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010838
#undef _DAT_82010838

#define uStack_3c (*(uint *)(frame + 20))
#define uStack_38 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003328
 */

undefined8 recovered_10003328(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *destination;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000f38(&uStack_3c,0,0xc);
    uVar2 = recovered_10002bbc(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      destination = recovered_10000c78((ulong)uVar1);
      uVar2 = 0;
      if (destination != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000d4c(destination,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = destination;
        *param_3 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_3c
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033c8
 */

bool recovered_100033c8(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_100032c8(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033f4
 */

undefined8 recovered_100033f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033f8
 */

void recovered_100033f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033fc
 */

undefined8 recovered_100033fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003400
 */

undefined8 recovered_10003400(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003404
 */

undefined8 recovered_10003404(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003408
 */

char * recovered_10003408(long param_1,char param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = (char *)(param_1 + -1);
  do {
    if (param_3 == 0) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + 1;
    param_3 = param_3 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000342c
 */

int recovered_1000342c(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;

  while( true ) {
    if (count == 0) {
      return 0;
    }
    bVar1 = *left;
    iVar2 = (uint)bVar1 - (uint)(byte)*right;
    if (iVar2 != 0) break;
    count = count - 1;
    left = left + 1;
    right = right + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


#undef DAT_100063c5
#define DAT_100063c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef str_100063c8
#define str_100063c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_100063d5
#define str_100063d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_100063df
#define str_100063df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_100063f3
#define str_100063f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e7U)))
#undef str_10006401
#define str_10006401 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10006413
#define str_10006413 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x207U)))
#undef str_1000641f
#define str_1000641f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#undef str_10006430
#define str_10006430 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000345c
 */

char * recovered_1000345c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_100063c5;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003488_caseD_1;
  case 2:
    return str_100063c8;
  case 5:
    return str_100063d5;
  case 9:
    return str_100063df;
  case 0xc:
    return str_100063f3;
  case 0xd:
    return str_10006401;
  default:
    if (param_1 == 0x11) {
      return str_10006413;
    }
    if (param_1 == 0x16) {
      return str_1000641f;
    }
switchD_10003488_caseD_1:
    return str_10006430;
  }
}

#undef DAT_100063c5
#undef str_100063c8
#undef str_100063d5
#undef str_100063df
#undef str_100063f3
#undef str_10006401
#undef str_10006413
#undef str_1000641f
#undef str_10006430

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034fc
 */

undefined8 recovered_100034fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003500
 */

undefined8 recovered_10003500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5f1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003504
 */

void recovered_10003504(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c128 = DAT_1000c128 + 1;
  return;
}

#undef DAT_1000c128

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003518
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003518(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100035e4(void *context){__asm__ volatile("ldr x16,[x0,#80]\nmov sp,x16\nldr x29,[x0,#64]\nldr x16,[x0,#72]\nbr x16");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100035f8(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003634(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003678
 */

void recovered_10003678(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000c64();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003688);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000368c
 */

undefined8 recovered_1000368c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003694
 */

void recovered_10003694(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100036a4(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003678();
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x612cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a4
 */

long recovered_100036a4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c338;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c338 = param_1;
  return param_1 + 0x30;
}

#undef DAT_1000c338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c4
 */

void * recovered_100036c4(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c78(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c64();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f4
 */

void * recovered_100036f4(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c78(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c64();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f8
 */

void recovered_100036f8(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cbc(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003710
 */

void recovered_10003710(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cbc(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003728
 */

void recovered_10003728(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cbc(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

void recovered_10003740(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cbc(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003758
 */

undefined8 recovered_10003758(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003760
 */

uint recovered_10003760(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

void recovered_10003770(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003780
 */

void recovered_10003780(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003784
 */

undefined1 * recovered_10003784(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000c78(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003678();
  }
  for (; size != 0; size = size - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return puVar2 + 0x30;
}


#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100037cc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10002584(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037dc
 */

long recovered_100037dc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x612cU)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100037e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c338;
  if (DAT_1000c338 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c338 + 0x10);
    DAT_1000c338 = *(long *)(DAT_1000c338 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_10002584(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c338
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000383c
 */

void recovered_1000383c(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000385c((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6134U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000385c
 */

void recovered_1000385c(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c340;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_100038bc;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10003e44((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003968(param_1);
LAB_100038bc:
                    /* WARNING: Subroutine does not return */
  recovered_10003678();
}

#undef DAT_1000c340
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x612cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c0
 */

void recovered_100038c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c338;
  if (DAT_1000c338 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003678();
  }
  *(undefined1 *)(DAT_1000c338 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000385c(puVar1);
}

#undef DAT_1000c338

#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6134U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f0
 */

void recovered_100038f0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c340;
  DAT_1000c340 = param_1;
  return;
}

#undef DAT_1000c340

#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6134U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003904
 */

void recovered_10003904(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c340;
  while( true ) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 == param_1) {
      *puVar1 = *param_1;
      return;
    }
    if (puVar2 == (undefined8 *)0x0) break;
    puVar1 = puVar2;
  }
  return;
}

#undef DAT_1000c340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

void recovered_10003930(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000385c(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000393c
 */

void recovered_1000393c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003678();
}


#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6134U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003948
 */

undefined8 recovered_10003948(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c340 != (long *)0x0) {
    DAT_1000c340 = (long *)*DAT_1000c340;
  }
  puVar2 = (undefined8 *)recovered_10003968(param_1);
  plVar3 = DAT_1000c340;
  while( true ) {
    DAT_1000c340 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003678();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10003e44((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_100039fc;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_100039fc:
  recovered_100035e4((long)plVar3);
  recovered_10003948(extraout_x0);
  return 0;
}

#undef DAT_1000c340
#undef uStack_50
#undef uStack_48

#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6134U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003968
 */

undefined8 recovered_10003968(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_1000c340;
  while( true ) {
    DAT_1000c340 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003678();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10003e44((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_100039fc;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_100039fc:
  recovered_100035e4((long)plVar2);
  recovered_10003948(extraout_x0);
  return 0;
}

#undef DAT_1000c340
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a04
 */

undefined8 recovered_10003a04(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003948(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a10
 */

undefined8 recovered_10003a10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a18
 */

void recovered_10003a18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003678();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a24
 */

long recovered_10003a24(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10003a64(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a64
 */

bool recovered_10003a64(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10003ae8:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003ae8;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003ae8;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state + 0x5ea4U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af0
 */

void recovered_10003af0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af4
 */

undefined8 recovered_10003af4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003afc
 */

bool recovered_10003afc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b0c
 */

bool recovered_10003b0c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b44
 */

bool recovered_10003b44(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b60
 */

bool recovered_10003b60(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b78
 */

bool recovered_10003b78(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b90
 */

bool recovered_10003b90(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba8
 */

bool recovered_10003ba8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10003bc0(double value) {
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
float recovered_10003c80(float value){return (float)recovered_10003bc0((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10003c9c(long double value){return (long double)recovered_10003bc0((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10003ca0(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cb0
 */

uint128 recovered_10003cb0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001558(param_1);
  dVar1 = (*(double *)((uint8_t *)&(auVar2)+0));
  dVar3 = dVar1;
  if (param_1 - dVar1 <= -0.5) {
    dVar3 = dVar1 + -1.0;
  }
  if (0.5 <= param_1 - dVar1) {
    dVar3 = dVar1 + 1.0;
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3;
  return auVar2;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cfc
 */

long recovered_10003cfc(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;

  for (pbVar6 = param_1; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003d3c;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003d3c:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar5 = bVar3 == 0x2d;
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = false;
  }
  if (param_3 == 0x10) {
    if (*pbVar6 != 0x30) {
      param_3 = 0x10;
      goto LAB_10003dc0;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003dc0;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003dc0;
    }
    bVar3 = pbVar6[1];
    uVar8 = 8;
  }
  pbVar2 = pbVar6 + 2;
  param_3 = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    param_3 = uVar8;
  }
  pbVar6 = pbVar2;
LAB_10003dc0:
  pbVar6 = pbVar6 + -1;
  lVar7 = 1;
  lVar1 = 0;
  do {
    lVar10 = lVar1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30U;
    uVar9 = (uint)bVar3;
    uVar8 = uVar9 - 0x37;
    if (0x19 < uVar9 - 0x41) {
      uVar8 = 0xffffffff;
    }
    if (bVar3 - 0x61U < 0x1a) {
      uVar8 = uVar9 - 0x57;
    }
    if (9 < uVar4) {
      uVar4 = uVar8;
    }
    lVar7 = lVar7 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar1 = lVar10 * (ulong)param_3 + (ulong)uVar4, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar7 != 0) {
      param_1 = pbVar6;
    }
    *param_2 = param_1;
  }
  lVar1 = -lVar10;
  if (!bVar5) {
    lVar1 = lVar10;
  }
  return lVar1;
}

#undef EXT_00000000

#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e40
 */

long recovered_10003e40(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;

  for (pbVar6 = param_1; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003d3c;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003d3c:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar5 = bVar3 == 0x2d;
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = false;
  }
  if (param_3 == 0x10) {
    if (*pbVar6 != 0x30) {
      param_3 = 0x10;
      goto LAB_10003dc0;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003dc0;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003dc0;
    }
    bVar3 = pbVar6[1];
    uVar8 = 8;
  }
  pbVar2 = pbVar6 + 2;
  param_3 = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    param_3 = uVar8;
  }
  pbVar6 = pbVar2;
LAB_10003dc0:
  pbVar6 = pbVar6 + -1;
  lVar7 = 1;
  lVar1 = 0;
  do {
    lVar10 = lVar1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30U;
    uVar9 = (uint)bVar3;
    uVar8 = uVar9 - 0x37;
    if (0x19 < uVar9 - 0x41) {
      uVar8 = 0xffffffff;
    }
    if (bVar3 - 0x61U < 0x1a) {
      uVar8 = uVar9 - 0x57;
    }
    if (9 < uVar4) {
      uVar4 = uVar8;
    }
    lVar7 = lVar7 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar1 = lVar10 * (ulong)param_3 + (ulong)uVar4, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar7 != 0) {
      param_1 = pbVar6;
    }
    *param_2 = param_1;
  }
  lVar1 = -lVar10;
  if (!bVar5) {
    lVar1 = lVar10;
  }
  return lVar1;
}

#undef EXT_00000000

#undef DAT_100062a8
#define DAT_100062a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e44
 */

undefined8 recovered_10003e44(long param_1,long *param_2,undefined2 *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;

  pbVar7 = *(byte **)(param_1 + 0x38);
  if (pbVar7 != (byte *)0x0) {
    local_68 = pbVar7 + 1;
    pbVar8 = local_68;
    if (*pbVar7 != 0xff) {
      recovered_1000401c((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004110(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004110(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004110(&local_68);
        uVar5 = recovered_10004110(&local_68);
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(int *)(param_3 + 2) = (int)uVar4;
          *(undefined4 *)(param_3 + 4) = 0;
          if ((uVar5 & 0xffffffff) == 0) {
            *(undefined1 *)((long)param_3 + 1) = 1;
            return 0;
          }
          pbStack_70 = pbVar8 + ((uVar5 & 0xffffffff) - 1);
          uVar4 = (ulong)bVar1 & 0xf;
          iVar9 = 0x40;
          do {
            uVar5 = recovered_10004174(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004174(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_100062a8 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_1000401c((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10003a64(param_2,(long *)puVar6);
              if (bVar2) {
                *(undefined1 *)(param_3 + 1) = 1;
                *(int *)(param_3 + 4) = (int)uVar5;
                return 1;
              }
            }
            if (uVar3 == 0) {
              return 0;
            }
            pbStack_70 = pbVar8 + uVar3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          return 0;
        }
      }
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  return 0;
}

#undef DAT_100062a8
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000401c
 */

ulong * recovered_1000401c(uint param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;

  if (param_1 == 0xff) {
    return (ulong *)0x0;
  }
  puVar1 = (ulong *)0x0;
  if (0xc < (param_1 & 0xf)) {
    return (ulong *)0x0;
  }
  pbVar5 = (byte *)*param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    puVar1 = (ulong *)recovered_10004148(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_100040d4;
  case 1:
    puVar1 = (ulong *)recovered_10004110(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004148(pbVar5,2);
    goto LAB_100040d0;
  case 3:
    puVar1 = (ulong *)recovered_10004148(pbVar5,4);
    goto LAB_10004098;
  default:
    goto switchD_10004064_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004174(param_2);
    break;
  case 10:
    uVar3 = recovered_10004148(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_100040d0:
    pbVar4 = pbVar5 + 2;
LAB_100040d4:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004148(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004098:
    pbVar4 = pbVar5 + 4;
    goto LAB_100040d4;
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (ulong *)0x0;
    }
    puVar1 = (ulong *)((long)puVar1 + (long)pbVar5);
  }
  if (((param_1 >> 7 & 1) != 0) && (puVar1 != (ulong *)0x0)) {
    puVar1 = (ulong *)*puVar1;
  }
switchD_10004064_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004110
 */

ulong recovered_10004110(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;

  uVar3 = 0;
  uVar2 = 0;
  pbVar4 = (byte *)*param_1;
  do {
    *param_1 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = ((ulong)bVar1 & 0x7f) << (uVar3 & 0x3f) | uVar2;
    uVar3 = (ulong)((int)uVar3 + 7);
    pbVar4 = pbVar4 + 1;
  } while ((char)bVar1 < '\0');
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004148
 */

ulong recovered_10004148(byte *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar2 = 0;
  uVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (ulong)*param_1 << (uVar2 & 0x3f) | uVar1;
    uVar2 = uVar2 + 8;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004174
 */

ulong recovered_10004174(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;

  uVar4 = 0;
  uVar5 = 0;
  pbVar6 = (byte *)*param_1;
  do {
    *param_1 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = ((ulong)bVar3 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    pbVar6 = pbVar6 + 1;
  } while ((char)bVar3 < '\0');
  uVar2 = 0;
  if (0x3f < bVar3 && uVar1 < 0x40) {
    uVar2 = -1L << (uVar5 & 0x3f);
  }
  return uVar4 | uVar2;
}


#undef DAT_1000c388
#define DAT_1000c388 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x617cU)))
#undef DAT_82010814
#define DAT_82010814 (*(uint8_t *)(0x82010814U))
#undef _DAT_82010814
#define _DAT_82010814 (*(uint *)(0x82010814U))
#undef str_1000645f
#define str_1000645f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x253U)))
#define local_31 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100041ec(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  long *plVar3;

  bVar2 = recovered_10005670(0x14);
  if ((bVar2) && (_DAT_82010814 != 0)) {
    (*(code *)(ulong)_DAT_82010814)();
  }
  plVar3 = recovered_100036c4(0x70);
  *plVar3 = 0;
  plVar3[2] = 0;
  plVar3[1] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[5] = 0;
  *(undefined2 *)((long)plVar3 + 0x34) = 0;
  *(undefined1 *)((long)plVar3 + 0x36) = 0;
  plVar3[7] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  pcVar1 = str_1000645f;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  recovered_100042ec(plVar3,(long)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)(plVar3 + 3) = param_2;
  *(uint *)((long)plVar3 + 0x1c) = param_3;
  *(uint *)(plVar3 + 4) = param_2;
  *(uint *)((long)plVar3 + 0x24) = param_3;
  *(uint *)((long)plVar3 + 0x2c) = param_2 >> 1;
  *(uint *)(plVar3 + 6) = param_3 >> 1;
  local_31 = 0;
  recovered_10004328(plVar3 + 0xb,(ulong)param_2 * (ulong)param_3 * 4,&local_31);
  DAT_1000c388 = plVar3;
  recovered_10004330((long)plVar3);
  recovered_10004560((long)plVar3);
  return plVar3;
}

#undef DAT_1000c388
#undef DAT_82010814
#undef _DAT_82010814
#undef str_1000645f
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042ec
 */

long * recovered_100042ec(long *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100057c8(param_2);
  recovered_100056e0(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004328
 */

void recovered_10004328(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_1000603c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000603c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#define local_65 (*(undefined1 *)(frame + 27))
#define local_64 (*(undefined2 *)(frame + 28))
#define local_62 (*(undefined1 *)(frame + 30))
#define local_61 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004330
 */

undefined8 recovered_10004330(long param_1)

{pf_console_compose((void *)param_1);}


#undef local_65
#undef local_64
#undef local_62
#undef local_61

#undef DAT_10006310
#define DAT_10006310 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_10006320
#define DAT_10006320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x613cU)))
#undef DAT_1000c350
#define DAT_1000c350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6144U)))
#undef DAT_1000c360
#define DAT_1000c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6154U)))
#undef DAT_1000c368
#define DAT_1000c368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x615cU)))
#undef DAT_1000c36c
#define DAT_1000c36c (*(int *)(((uintptr_t)pf_module_state + 0x6160U)))
#undef DAT_1000c370
#define DAT_1000c370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6164U)))
#undef DAT_1000c374
#define DAT_1000c374 (*(int *)(((uintptr_t)pf_module_state + 0x6168U)))
#undef DAT_1000c378
#define DAT_1000c378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x616cU)))
#undef DAT_8201087c
#define DAT_8201087c (*(uint8_t *)(0x8201087cU))
#undef UNK_10006318
#define UNK_10006318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef UNK_1000c358
#define UNK_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x614cU)))
#undef _DAT_10006310
#define _DAT_10006310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef _DAT_1000c350
#define _DAT_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6144U)))
#undef _DAT_8201087c
#define _DAT_8201087c (*(uint *)(0x8201087cU))
#undef uRam0000000010006318
#define uRam0000000010006318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef uRam000000001000c358
#define uRam000000001000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x614cU)))
#define uStack_80 (*(uint *)(frame + 32))
#define iStack_70 (*(int *)(frame + 48))
#define uStack_68 (*(undefined4 *)(frame + 56))
#define local_90 (*(ulong *)(frame + 16))
#define local_88 (*(int *)(frame + 24))
#define local_84 (*(uint *)(frame + 28))
#define local_7c (*(undefined8 *)(frame + 36))
#define local_74 (*(int *)(frame + 44))
#define local_6c (*(undefined4 *)(frame + 52))
#define local_64 (*(undefined4 *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004560(long param_1)

{pf_console_present((void *)param_1);}


#undef DAT_10006310
#undef DAT_10006320
#undef DAT_1000c348
#undef DAT_1000c350
#undef DAT_1000c360
#undef DAT_1000c368
#undef DAT_1000c36c
#undef DAT_1000c370
#undef DAT_1000c374
#undef DAT_1000c378
#undef DAT_8201087c
#undef UNK_10006318
#undef UNK_1000c358
#undef _DAT_10006310
#undef _DAT_1000c350
#undef _DAT_8201087c
#undef uRam0000000010006318
#undef uRam000000001000c358
#undef uStack_80
#undef iStack_70
#undef uStack_68
#undef local_90
#undef local_88
#undef local_84
#undef local_7c
#undef local_74
#undef local_6c
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d8
 */

void recovered_100049d8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


#undef DAT_1000c388
#define DAT_1000c388 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x617cU)))
#undef DAT_82010818
#define DAT_82010818 (*(uint8_t *)(0x82010818U))
#undef _DAT_82010818
#define _DAT_82010818 (*(uint *)(0x82010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100049e8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 *puVar2;

  if (param_1 != (undefined8 *)0x0) {
    if (DAT_1000c388 == param_1) {
      DAT_1000c388 = (undefined8 *)0x0;
    }
    recovered_100060bc(param_1 + 0xb);
    recovered_100060bc(param_1 + 7);
    puVar2 = recovered_100056b8(param_1);
    recovered_100036f8(puVar2);
    bVar1 = recovered_10005670(0x18);
    if ((bVar1) && (_DAT_82010818 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_82010818)();
      return;
    }
  }
  return;
}

#undef DAT_1000c388
#undef DAT_82010818
#undef _DAT_82010818

#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#define local_38 (*(undefined1 * *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 40))
#define local_30 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a60
 */

void * recovered_10004a60(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *source;
  ulong uVar1;
  void *destination;

  if (param_1 == (undefined8 *)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    uVar1 = 1;
    local_38 = (undefined1 *)0x0;
  }
  else {
    recovered_100059d4(&local_38,param_1);
    uVar1 = local_30 + 1;
  }
  destination = recovered_100036f4(uVar1);
  source = &DAT_10006354;
  if (local_38 != (undefined1 *)0x0) {
    source = local_38;
  }
  recovered_10000d4c(destination,source,local_30 + 1);
  recovered_100036f8(local_38);
  return destination;
}

#undef DAT_10006354
#undef local_38
#undef uStack_28
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ae4
 */

void recovered_10004ae4(long param_1,undefined4 *param_2,undefined4 *param_3)

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


#define uStack_65 (*(undefined1 *)(frame + 27))
#define uStack_64 (*(undefined2 *)(frame + 28))
#define uStack_62 (*(undefined1 *)(frame + 30))
#define uStack_61 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b18
 */

undefined8 recovered_10004b18(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 unaff_x30;
  float fVar17;
  uint128 auVar18;
  uint128 auVar19;
  float fVar20;
  float fVar21;
  float fVar22;

  if (param_1 == 0) {
    return 0;
  }
  PF_PART4(auVar18, 4) = param_3;
  PF_PART4(auVar18, 0) = param_2;
  PF_PART4(auVar18, 8) = param_2;
  PF_PART4(auVar18, 12) = param_3;
  PF_PART4(auVar19, 8) = 1;
  PF_PART8(auVar19, 0) = 0x100000001;
  PF_PART4(auVar19, 12) = 1;
  auVar19 = NEON_smax(auVar18,auVar19,4);
  *(long *)(param_1 + 0x20) = PF_PART8(auVar19, 8);
  *(long *)(param_1 + 0x18) = PF_PART8(auVar19, 0);
  recovered_10004b60(param_1);
  uVar9 = 0;
  if (param_1 != 0) {
    if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
      uStack_61 = 0;
      recovered_10004328((long *)(param_1 + 0x58),
                         (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                         &uStack_61);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
        iVar12 = 0;
        iVar13 = 0;
        bVar8 = false;
        iVar11 = 0;
        iVar10 = 0;
      }
      else {
        fVar20 = (float)*(uint *)(param_1 + 0x50);
        fVar17 = (float)*(int *)(param_1 + 0x18) / fVar20;
        fVar22 = (float)*(uint *)(param_1 + 0x54);
        fVar21 = (float)*(int *)(param_1 + 0x1c) / fVar22;
        if (fVar17 <= fVar21) {
          fVar21 = fVar17;
        }
        iVar10 = (int)(fVar21 * fVar20);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar11 = (int)(fVar21 * fVar22);
        if (iVar11 < 2) {
          iVar11 = 1;
        }
        iVar12 = (*(int *)(param_1 + 0x18) - iVar10) / 2;
        iVar13 = (*(int *)(param_1 + 0x1c) - iVar11) / 2;
        bVar8 = true;
      }
      for (lVar16 = 0; lVar16 < *(int *)(param_1 + 0x1c); lVar16 = lVar16 + 1) {
        iVar15 = -iVar12;
        for (lVar14 = 0; lVar14 < *(int *)(param_1 + 0x18); lVar14 = lVar14 + 1) {
          uStack_65 = *(undefined1 *)(param_1 + 0x29);
          uStack_64 = *(undefined2 *)(param_1 + 0x2a);
          bVar7 = false;
          if (iVar12 <= lVar14) {
            bVar7 = bVar8;
          }
          if (((bVar7 && lVar14 < iVar10 + iVar12) && iVar13 <= lVar16) && lVar16 < iVar11 + iVar13)
          {
            iVar4 = *(int *)(param_1 + 0x50);
            iVar5 = 0;
            if (iVar10 != 0) {
              iVar5 = (iVar4 * iVar15) / iVar10;
            }
            iVar6 = iVar4 + -1;
            if (iVar5 <= iVar4 + -1) {
              iVar6 = iVar5;
            }
            iVar2 = 0;
            if (-1 < iVar5) {
              iVar2 = iVar6;
            }
            iVar5 = 0;
            if (iVar11 != 0) {
              iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar16 - iVar13)) / iVar11;
            }
            iVar6 = *(int *)(param_1 + 0x54) + -1;
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
            iVar3 = 0;
            if (-1 < iVar5) {
              iVar3 = iVar6;
            }
            puVar1 = (undefined1 *)
                     (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4);
            uStack_65 = *puVar1;
            uStack_64 = *(undefined2 *)(puVar1 + 1);
          }
          uStack_62 = 0xff;
          recovered_10000d4c((void *)(*(long *)(param_1 + 0x58) +
                                     (lVar14 + lVar16 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,4)
          ;
          iVar15 = iVar15 + 1;
        }
      }
    }
    uVar9 = unaff_x30;
  }
  return uVar9;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b60
 */

void recovered_10004b60(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;

  if (param_1 != 0) {
    uVar1 = NEON_smax(*(undefined8 *)(param_1 + 0x20),0x100000001,4);
    lVar3 = *(long *)(param_1 + 0x2c);
    uVar2 = NEON_smin(CONCAT44((int)((ulong)uVar1 >> 0x20) + -1,(int)uVar1 + -1),lVar3,4);
    *(ulong *)(param_1 + 0x2c) = CONCAT44(-(uint)(-1 < lVar3),-(uint)(-1 < (int)lVar3)) & uVar2;
  }
  return;
}


#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b90
 */

long * recovered_10004b90(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;

  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  puVar1 = &DAT_10006354;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  uVar2 = recovered_100057c8((long)puVar1);
  recovered_100056e0(param_1,(long)puVar1,uVar2);
  return param_1;
}

#undef DAT_10006354

#define uStack_65 (*(undefined1 *)(frame + 27))
#define uStack_64 (*(undefined2 *)(frame + 28))
#define uStack_62 (*(undefined1 *)(frame + 30))
#define uStack_61 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bac
 */

long recovered_10004bac(long param_1,uint *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long unaff_x30;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) ||
      (puVar8 = *(undefined1 **)(param_2 + 2), puVar8 == (undefined1 *)0x0)) ||
     (((int)*param_2 < 1 || ((int)param_2[1] < 1)))) {
    return param_1;
  }
  recovered_10004c1c((long *)(param_1 + 0x38),puVar8,
                     puVar8 + (ulong)*param_2 * (ulong)param_2[1] * 4);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
  lVar15 = 0;
  if (param_1 != 0) {
    if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
      uStack_61 = 0;
      recovered_10004328((long *)(param_1 + 0x58),
                         (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                         &uStack_61);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
        iVar11 = 0;
        iVar12 = 0;
        bVar7 = false;
        iVar10 = 0;
        iVar9 = 0;
      }
      else {
        fVar17 = (float)*(uint *)(param_1 + 0x50);
        fVar16 = (float)*(int *)(param_1 + 0x18) / fVar17;
        fVar19 = (float)*(uint *)(param_1 + 0x54);
        fVar18 = (float)*(int *)(param_1 + 0x1c) / fVar19;
        if (fVar16 <= fVar18) {
          fVar18 = fVar16;
        }
        iVar9 = (int)(fVar18 * fVar17);
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        iVar10 = (int)(fVar18 * fVar19);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
        iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
        bVar7 = true;
      }
      for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
        iVar14 = -iVar11;
        for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
          uStack_65 = *(undefined1 *)(param_1 + 0x29);
          uStack_64 = *(undefined2 *)(param_1 + 0x2a);
          bVar6 = false;
          if (iVar11 <= lVar13) {
            bVar6 = bVar7;
          }
          if (((bVar6 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) && lVar15 < iVar10 + iVar12)
          {
            iVar3 = *(int *)(param_1 + 0x50);
            iVar4 = 0;
            if (iVar9 != 0) {
              iVar4 = (iVar3 * iVar14) / iVar9;
            }
            iVar5 = iVar3 + -1;
            if (iVar4 <= iVar3 + -1) {
              iVar5 = iVar4;
            }
            iVar1 = 0;
            if (-1 < iVar4) {
              iVar1 = iVar5;
            }
            iVar4 = 0;
            if (iVar10 != 0) {
              iVar4 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
            }
            iVar5 = *(int *)(param_1 + 0x54) + -1;
            if (iVar4 <= iVar5) {
              iVar5 = iVar4;
            }
            iVar2 = 0;
            if (-1 < iVar4) {
              iVar2 = iVar5;
            }
            puVar8 = (undefined1 *)
                     (*(long *)(param_1 + 0x38) + ((long)iVar1 + (long)iVar3 * (long)iVar2) * 4);
            uStack_65 = *puVar8;
            uStack_64 = *(undefined2 *)(puVar8 + 1);
          }
          uStack_62 = 0xff;
          recovered_10000d4c((void *)(*(long *)(param_1 + 0x58) +
                                     (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,4)
          ;
          iVar14 = iVar14 + 1;
        }
      }
    }
    lVar15 = unaff_x30;
  }
  return lVar15;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c1c
 */

long recovered_10004c1c(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  param_1[1] = 0;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = *param_1 - lVar4;
  }
  lVar3 = (long)param_3 - (long)param_2;
  if (lVar3 != 0) {
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar6 + lVar3) {
      uVar2 = 4;
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      do {
        uVar5 = uVar2;
        uVar2 = uVar5 << 1;
      } while (uVar5 < uVar6 + lVar3);
      recovered_1000603c(param_1,uVar5);
      uVar6 = param_1[1];
    }
    while (uVar7 < uVar6) {
      puVar1 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar1[lVar3] = *puVar1;
      uVar6 = uVar6 - 1;
    }
    uVar6 = uVar7;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)(*param_1 + uVar6) = *param_2;
      uVar6 = uVar6 + 1;
    }
    lVar4 = *param_1;
    param_1[1] = param_1[1] + lVar3;
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + uVar7;
  }
  return lVar3;
}


#undef DAT_10006310
#define DAT_10006310 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_10006320
#define DAT_10006320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x613cU)))
#undef DAT_1000c350
#define DAT_1000c350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6144U)))
#undef DAT_1000c360
#define DAT_1000c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6154U)))
#undef DAT_1000c368
#define DAT_1000c368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x615cU)))
#undef DAT_1000c36c
#define DAT_1000c36c (*(int *)(((uintptr_t)pf_module_state + 0x6160U)))
#undef DAT_1000c370
#define DAT_1000c370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6164U)))
#undef DAT_1000c374
#define DAT_1000c374 (*(int *)(((uintptr_t)pf_module_state + 0x6168U)))
#undef DAT_1000c378
#define DAT_1000c378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x616cU)))
#undef DAT_8201087c
#define DAT_8201087c (*(uint8_t *)(0x8201087cU))
#undef UNK_10006318
#define UNK_10006318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef UNK_1000c358
#define UNK_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x614cU)))
#undef _DAT_10006310
#define _DAT_10006310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef _DAT_1000c350
#define _DAT_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6144U)))
#undef _DAT_8201087c
#define _DAT_8201087c (*(uint *)(0x8201087cU))
#undef uRam0000000010006318
#define uRam0000000010006318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef uRam000000001000c358
#define uRam000000001000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x614cU)))
#define iStack_88 (*(int *)(frame + 24))
#define uStack_84 (*(uint *)(frame + 28))
#define uStack_80 (*(uint *)(frame + 32))
#define uStack_7c (*(undefined8 *)(frame + 36))
#define iStack_74 (*(int *)(frame + 44))
#define iStack_70 (*(int *)(frame + 48))
#define uStack_6c (*(undefined4 *)(frame + 52))
#define uStack_68 (*(undefined4 *)(frame + 56))
#define uStack_64 (*(undefined4 *)(frame + 60))
#define uStack_90 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004c30(long param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;

  if (param_1 == 0) {
    return;
  }
  recovered_10004c64();
  recovered_10004330(param_1);
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  recovered_10000f38(&DAT_1000c348,0,0x34);
  bVar9 = recovered_10005670(0x7c);
  if (!bVar9) {
    return;
  }
  if (_DAT_8201087c == 0) {
    return;
  }
  iVar10 = (*(code *)(ulong)_DAT_8201087c)(&DAT_1000c348);
  uVar23 = _DAT_1000c350;
  uVar22 = DAT_1000c348;
  if (iVar10 == 0) {
    return;
  }
  if (DAT_1000c348 == 0) {
    return;
  }
  iVar10 = (int)((ulong)DAT_1000c360 >> 0x20);
  iStack_88 = (int)_DAT_1000c350;
  uStack_84 = (uint)(_DAT_1000c350 >> 0x20);
  uVar26 = (uint)uRam000000001000c358;
  uVar27 = (uint)(uRam000000001000c358 >> 0x20);
  uVar19 = CONCAT17(-((char)((DAT_1000c374 == (int)((ulong)uRam0000000010006318 >> 0x20)) * -0x80) <
                     '\0'),CONCAT16(-((char)((DAT_1000c36c == (int)uRam0000000010006318) * -0x80) <
                                     '\0'),CONCAT15(-((char)((iVar10 ==
                                                             (int)((ulong)_DAT_10006310 >> 0x20)) *
                                                            -0x80) < '\0'),
                                                    CONCAT14(-((char)(~-((int)DAT_1000c360 ==
                                                                        (int)_DAT_10006310) << 7) <
                                                              '\0'),CONCAT13(-((char)((uVar27 == 0)
                                                                                     * -0x80) < '\0'
                                                                              ),CONCAT12(-((char)((
                                                  uVar26 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((uStack_84 == 0) * -0x80) < '\0'
                                                            ),-((char)((iStack_88 == 0) * -0x80) <
                                                               '\0')))))))) & DAT_10006320;
  uVar20 = (ulong)uStack_84;
  uVar24 = uRam000000001000c358 & 0xffffffff;
  if ((char)((char)uVar19 + (char)(uVar19 >> 8) + (char)(uVar19 >> 0x10) + (char)(uVar19 >> 0x18) +
             (char)(uVar19 >> 0x20) + (char)(uVar19 >> 0x28) + (char)(uVar19 >> 0x30) +
            (char)(uVar19 >> 0x38)) != '\0' || uStack_84 >> 2 < uVar26) {
    return;
  }
  uStack_90 = DAT_1000c348;
  uVar25 = (ulong)uVar27;
  uStack_7c = CONCAT44(iVar10,uVar27);
  iStack_74 = DAT_1000c36c;
  iStack_70 = DAT_1000c374;
  uStack_6c = DAT_1000c368;
  uStack_68 = DAT_1000c370;
  uStack_64 = DAT_1000c378;
  uStack_80 = uVar26;
  uVar11 = recovered_10005938((long)&uStack_90,(uint)*(byte *)(param_1 + 0x29),
                              (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b));
  for (uVar19 = 0; uVar19 != uVar25; uVar19 = uVar19 + 1) {
    puVar8 = (uint *)(uVar22 + uVar19 * uVar20);
    for (uVar21 = uVar24; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    }
  }
  uVar19 = 0;
  uVar21 = (ulong)*(uint *)(param_1 + 0x18);
  uVar5 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar11 = 0;
  if (uVar21 != 0) {
    uVar11 = (uint)((uVar5 * uVar24) / uVar21);
  }
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar13 = (uint)((uVar21 * uVar25) / uVar5);
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  uVar21 = (ulong)uVar13;
  uVar14 = uVar27;
  if (uVar11 <= uVar27) {
    uVar13 = uVar26;
    uVar21 = uVar24;
    uVar25 = (ulong)uVar11;
    uVar14 = uVar11;
  }
  uVar11 = uVar26 - uVar13 >> 1;
  uVar6 = uVar27 - uVar14 >> 1;
  for (; uVar19 < uVar25; uVar19 = uVar19 + 1) {
    uVar24 = 0;
    uVar5 = 0;
    if (uVar25 != 0) {
      uVar5 = (uVar19 * *(uint *)(param_1 + 0x1c)) / uVar25;
    }
    for (; uVar21 != uVar24; uVar24 = uVar24 + 1) {
      uVar7 = 0;
      if (uVar21 != 0) {
        uVar7 = (uVar24 * *(uint *)(param_1 + 0x18)) / uVar21;
      }
      pbVar2 = (byte *)(*(long *)(param_1 + 0x58) +
                       ((uVar5 & 0xffffffff) * (long)(int)*(uint *)(param_1 + 0x18) +
                       (uVar7 & 0xffffffff)) * 4);
      uVar12 = recovered_10005938((long)&uStack_90,(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2]);
      *(uint *)(uVar22 + (ulong)uVar11 * 4 + uVar20 * (uVar6 + (int)uVar19) + uVar24 * 4) = uVar12;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if ((((int)uVar12 < 1) || (uVar14 == 0)) || (uVar13 == 0)) goto LAB_10004964;
  uVar13 = *(uint *)(param_1 + 0x24);
  if ((int)uVar13 < 1) goto LAB_10004964;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x30);
  iVar10 = uVar12 - 1;
  if (iVar4 <= (int)(uVar12 - 1)) {
    iVar10 = iVar4;
  }
  iVar18 = 0;
  if (-1 < iVar4) {
    iVar18 = iVar10;
  }
  iVar10 = 0;
  if ((ulong)uVar12 != 0) {
    iVar10 = (int)((uVar21 * (long)iVar18) / (ulong)uVar12);
  }
  iVar4 = uVar13 - 1;
  if (iVar17 <= (int)(uVar13 - 1)) {
    iVar4 = iVar17;
  }
  iVar18 = 0;
  if (-1 < iVar17) {
    iVar18 = iVar4;
  }
  iVar4 = 0;
  if ((ulong)uVar13 != 0) {
    iVar4 = (int)((uVar25 * (long)iVar18) / (ulong)uVar13);
  }
  uVar13 = recovered_10005938((long)&uStack_90,0,0,0);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar17 = 0xff;
    iVar18 = 0x3c;
LAB_10004894:
    iVar15 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x35) == '\x01') {
      iVar17 = 0x3c;
      iVar18 = 0xff;
      goto LAB_10004894;
    }
    if (*(char *)(param_1 + 0x36) == '\x01') {
      iVar17 = 0x50;
      iVar18 = 0x82;
    }
    else {
      iVar17 = 0xff;
      iVar18 = 0xff;
    }
    iVar15 = 0xff;
  }
  uVar14 = recovered_10005938((long)&uStack_90,iVar17,iVar18,iVar15);
  for (iVar17 = -7; iVar17 != 8; iVar17 = iVar17 + 1) {
    uVar12 = uVar6 + iVar4 + iVar17;
    for (iVar18 = -7; iVar18 != 8; iVar18 = iVar18 + 1) {
      iVar15 = recovered_10000c6c(iVar18);
      iVar16 = recovered_10000c6c(iVar17);
      if (((iVar16 + iVar15 < 8) && (uVar1 = uVar11 + iVar10 + iVar18, -1 < (int)uVar1)) &&
         ((-1 < (int)uVar12 && (uVar1 < uVar26 && uVar12 < uVar27)))) {
        uVar3 = uVar13;
        if (iVar16 + iVar15 < 6) {
          uVar3 = uVar14;
        }
        *(uint *)(uVar22 + (ulong)uVar1 * 4 + uVar20 * uVar12) = uVar3;
      }
    }
  }
LAB_10004964:
  uVar19 = ctr_el0;
  uVar20 = 4L << (uVar19 >> 0x10 & 0xf);
  uVar19 = uVar22 + (uVar23 & 0xffffffff);
  if (CARRY8(uVar22,uVar23 & 0xffffffff)) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar22 = uVar22 & -uVar20;
  uVar23 = ~uVar22 + uVar20;
  do {
    if (uVar19 <= uVar22) break;
    DC_CVAC(uVar22);
    uVar22 = uVar22 + uVar20;
    uVar23 = uVar23 - uVar20;
  } while (uVar20 <= uVar23);
  DataSynchronizationBarrier(3,3,0);
  InstructionSynchronizationBarrier();
  return;
}

#undef DAT_10006310
#undef DAT_10006320
#undef DAT_1000c348
#undef DAT_1000c350
#undef DAT_1000c360
#undef DAT_1000c368
#undef DAT_1000c36c
#undef DAT_1000c370
#undef DAT_1000c374
#undef DAT_1000c378
#undef DAT_8201087c
#undef UNK_10006318
#undef UNK_1000c358
#undef _DAT_10006310
#undef _DAT_1000c350
#undef _DAT_8201087c
#undef uRam0000000010006318
#undef uRam000000001000c358
#undef iStack_88
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef iStack_74
#undef iStack_70
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_90

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed4U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed5U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed6U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed7U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed8U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed9U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edaU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edbU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edcU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eddU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edeU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edfU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee0U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee1U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee2U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee3U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee4U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee5U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee6U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee7U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee8U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee9U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeaU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eebU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eecU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eedU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeeU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eefU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef0U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef1U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef2U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef3U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef4U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef5U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef6U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef7U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef8U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef9U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efaU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efbU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efcU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efdU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efeU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5effU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f00U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f01U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(byte *)(((uintptr_t)pf_module_state + 0x5f02U)))
#undef DAT_1000c380
#define DAT_1000c380 (*(int *)(((uintptr_t)pf_module_state + 0x6174U)))
#undef DAT_1000c388
#define DAT_1000c388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x617cU)))
#undef DAT_8201082c
#define DAT_8201082c (*(uint8_t *)(0x8201082cU))
#undef DAT_82010880
#define DAT_82010880 (*(uint8_t *)(0x82010880U))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1dfcU)))
#undef _DAT_8201082c
#define _DAT_8201082c (*(uint *)(0x8201082cU))
#undef _DAT_82010880
#define _DAT_82010880 (*(uint *)(0x82010880U))
#define local_80 (*(undefined8 *)(frame + 16))
#define local_70 (*(undefined8 *)(frame + 32))
#define local_68 (*(undefined8 *)(frame + 40))
#define uStack_78 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004c64(void)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 unaff_x30;

  if (DAT_1000c388 == 0) {
    DAT_1000c0e0 = 0;
    DAT_1000c0e1 = 0;
    DAT_1000c0e2 = 0;
    DAT_1000c0e3 = 0;
    DAT_1000c0e4 = 0;
    DAT_1000c0e5 = 0;
    DAT_1000c0e6 = 0;
    DAT_1000c0e7 = 0;
    DAT_1000c0e8 = 0;
    DAT_1000c0e9 = 0;
    DAT_1000c0ea = 0;
    DAT_1000c0eb = 0;
    DAT_1000c0ec = 0;
    DAT_1000c0ed = 0;
    DAT_1000c0ee = 0;
    DAT_1000c0ef = 0;
    DAT_1000c0f0 = 0;
    DAT_1000c0f1 = 0;
    DAT_1000c0f2 = 0;
    DAT_1000c0f3 = 0;
    DAT_1000c0f4 = 0;
    DAT_1000c0f5 = 0;
    DAT_1000c0f6 = 0;
    DAT_1000c0f7 = 0;
    DAT_1000c0f8 = 0;
    DAT_1000c0f9 = 0;
    DAT_1000c0fa = 0;
    DAT_1000c0fb = 0;
    DAT_1000c0fc = 0;
    DAT_1000c0fd = 0;
    DAT_1000c0fe = 0;
    DAT_1000c0ff = 0;
    DAT_1000c100 = 0;
    DAT_1000c101 = 0;
    DAT_1000c102 = 0;
    DAT_1000c103 = 0;
    DAT_1000c104 = 0;
    DAT_1000c105 = 0;
    DAT_1000c106 = 0;
    DAT_1000c107 = 0;
    DAT_1000c108 = 0;
    DAT_1000c109 = 0;
    DAT_1000c10a = 0;
    DAT_1000c10b = 0;
    DAT_1000c10c = 0;
    DAT_1000c10d = 0;
    DAT_1000c10e = 0;
    return unaff_x30;
  }
switchD_10004ed8_caseD_49:
  do {
    bVar5 = recovered_10005670(0x2c);
    if (((!bVar5) || (_DAT_8201082c == 0)) ||
       (uVar6 = (*(code *)(ulong)_DAT_8201082c)(), uVar6 == 0)) {
      lVar4 = DAT_1000c388;
      recovered_10004b60(DAT_1000c388);
      if (lVar4 != 0) {
        uStack_78 = 0;
        local_80 = 0;
        local_68 = 0;
        local_70 = 0;
        bVar5 = recovered_10005670(0x80);
        if (((bVar5) && (_DAT_82010880 != 0)) &&
           (iVar7 = (*(code *)(ulong)_DAT_82010880)(&local_80), iVar7 != 0)) {
          if ((local_80 & 1) == 0) {
            if (((uint)local_80 >> 1 & 1) != 0) {
              iVar7 = (int)((ulong)local_70 >> 0x20);
              if ((int)local_70 != 0 || iVar7 != 0) {
                *(ulong *)(lVar4 + 0x2c) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20) + iVar7,
                              (int)*(undefined8 *)(lVar4 + 0x2c) + (int)local_70);
              }
            }
          }
          else {
            uVar8 = recovered_10005a3c((uint)uStack_78,(uint)local_68,*(int *)(lVar4 + 0x20));
            *(int *)(lVar4 + 0x2c) = (int)uVar8;
            uVar8 = recovered_10005a3c(PF_PART4(uStack_78, 4),PF_PART4(local_68, 4),*(int *)(lVar4 + 0x24));
            *(int *)(lVar4 + 0x30) = (int)uVar8;
          }
          *(byte *)(lVar4 + 0x34) = PF_PART1(local_80, 4) & 1;
          *(byte *)(lVar4 + 0x35) = PF_PART1(local_80, 4) >> 1 & 1;
          *(byte *)(lVar4 + 0x36) = PF_PART1(local_80, 4) >> 2 & 1;
          recovered_10004b60(lVar4);
        }
      }
      return unaff_x30;
    }
    uVar2 = uVar6 >> 8 & 0xff;
    if ((uVar6 & 0xff) == 0) goto LAB_10004d1c;
    if (DAT_1000c388 != 0) {
      if (DAT_1000c380 == 2) {
        DAT_1000c380 = 0;
        switch((uintptr_t)(uVar6 & 0xff)) {
        case 0x41:
          DAT_1000c0e1 = 1;
          break;
        case 0x42:
          DAT_1000c0e2 = 1;
          break;
        case 0x43:
          DAT_1000c0e4 = 1;
          break;
        case 0x44:
          DAT_1000c0e3 = 1;
        }
      }
      else if (DAT_1000c380 == 1) {
        DAT_1000c380 = (uint)((uVar6 & 0xff) == 0x5b) << 1;
      }
      else if ((uVar6 & 0xff) == 0x1b) {
        DAT_1000c380 = 1;
      }
      else if ((uVar6 - 0x20 & 0xff) < 0x5f) {
        DAT_1000c10e = (byte)uVar6;
        bVar3 = DAT_1000c10e;
        if (0x19 < (uVar6 - 0x61 & 0xff)) {
          if (0x19 < (uVar6 - 0x41 & 0xff)) {
            if ((uVar6 - 0x30 & 0xff) < 10) {
              *(&PTR_DAT_10008008)[(ulong)(uVar6 - 0x30) & 0xff] = 1;
              goto switchD_10004e48_caseD_5;
            }
            goto LAB_10004e24;
          }
          bVar3 = DAT_1000c10e | 0x20;
        }
        recovered_10005a14((int)(char)bVar3);
      }
      else {
LAB_10004e24:
        uVar1 = uVar6 & 0xff;
        switch((uintptr_t)(uVar1)) {
        case 3:
        case 4:
          *(undefined1 *)(DAT_1000c388 + 0x28) = 1;
          break;
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xb:
        case 0xc:
          break;
        case 8:
switchD_10004e48_caseD_8:
          DAT_1000c10b = 1;
          break;
        case 10:
        case 0xd:
          DAT_1000c0e0 = 1;
          break;
        default:
          if (uVar1 == 0x20) {
            DAT_1000c10d = 1;
          }
          else if (uVar1 == 0x2d) {
            DAT_1000c109 = 1;
          }
          else if (uVar1 == 0x2e) {
            DAT_1000c10a = 1;
          }
          else if (uVar1 == 0x7f) goto switchD_10004e48_caseD_8;
        }
      }
    }
switchD_10004e48_caseD_5:
  } while (((uVar6 & 0xffff) == 0x11b) || (DAT_1000c388 == 0));
  goto LAB_10004ec0;
LAB_10004d1c:
  if (DAT_1000c388 == 0) goto switchD_10004ed8_caseD_49;
  switch((uintptr_t)(uVar2)) {
  case 1:
switchD_10004ed8_caseD_48:
    DAT_1000c0e1 = 1;
    goto switchD_10004ed8_caseD_49;
  case 2:
switchD_10004ed8_caseD_50:
    DAT_1000c0e2 = 1;
    goto switchD_10004ed8_caseD_49;
  case 3:
switchD_10004ed8_caseD_4d:
    DAT_1000c0e4 = 1;
    goto switchD_10004ed8_caseD_49;
  case 4:
switchD_10004ed8_caseD_4b:
    DAT_1000c0e3 = 1;
    goto switchD_10004ed8_caseD_49;
  }
  if (uVar2 != 0x17) {
LAB_10004ec0:
    switch((uintptr_t)(uVar2)) {
    case 0x48:
      goto switchD_10004ed8_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_10004ed8_caseD_49;
    case 0x4b:
      goto switchD_10004ed8_caseD_4b;
    case 0x4d:
      goto switchD_10004ed8_caseD_4d;
    case 0x50:
      goto switchD_10004ed8_caseD_50;
    case 0x53:
      DAT_1000c10c = 1;
      goto switchD_10004ed8_caseD_49;
    default:
      if (uVar2 != 1) {
        if (uVar2 == 0xe) {
          DAT_1000c10b = 1;
        }
        else if (uVar2 == 0x1c) {
          DAT_1000c0e0 = 1;
        }
        goto switchD_10004ed8_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_1000c388 + 0x28) = 1;
  goto switchD_10004ed8_caseD_49;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c0e5
#undef DAT_1000c0e6
#undef DAT_1000c0e7
#undef DAT_1000c0e8
#undef DAT_1000c0e9
#undef DAT_1000c0ea
#undef DAT_1000c0eb
#undef DAT_1000c0ec
#undef DAT_1000c0ed
#undef DAT_1000c0ee
#undef DAT_1000c0ef
#undef DAT_1000c0f0
#undef DAT_1000c0f1
#undef DAT_1000c0f2
#undef DAT_1000c0f3
#undef DAT_1000c0f4
#undef DAT_1000c0f5
#undef DAT_1000c0f6
#undef DAT_1000c0f7
#undef DAT_1000c0f8
#undef DAT_1000c0f9
#undef DAT_1000c0fa
#undef DAT_1000c0fb
#undef DAT_1000c0fc
#undef DAT_1000c0fd
#undef DAT_1000c0fe
#undef DAT_1000c0ff
#undef DAT_1000c100
#undef DAT_1000c101
#undef DAT_1000c102
#undef DAT_1000c103
#undef DAT_1000c104
#undef DAT_1000c105
#undef DAT_1000c106
#undef DAT_1000c107
#undef DAT_1000c108
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e
#undef DAT_1000c380
#undef DAT_1000c388
#undef DAT_8201082c
#undef DAT_82010880
#undef PTR_DAT_10008008
#undef _DAT_8201082c
#undef _DAT_82010880
#undef local_80
#undef local_70
#undef local_68
#undef uStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000502c
 */

byte recovered_1000502c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  return bVar1 & 1;
}


#define uStack_65 (*(undefined1 *)(frame + 27))
#define uStack_64 (*(undefined2 *)(frame + 28))
#define uStack_62 (*(undefined1 *)(frame + 30))
#define uStack_61 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005044
 */

long recovered_10005044(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long unaff_x30;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x29) = param_2;
    *(undefined1 *)(param_1 + 0x2a) = param_3;
    *(undefined1 *)(param_1 + 0x2b) = param_4;
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar15 = 0;
      if (param_1 != 0) {
        if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
          uStack_61 = 0;
          recovered_10004328((long *)(param_1 + 0x58),
                             (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4
                             ,&uStack_61);
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
            iVar11 = 0;
            iVar12 = 0;
            bVar8 = false;
            iVar10 = 0;
            iVar9 = 0;
          }
          else {
            fVar17 = (float)*(uint *)(param_1 + 0x50);
            fVar16 = (float)*(int *)(param_1 + 0x18) / fVar17;
            fVar19 = (float)*(uint *)(param_1 + 0x54);
            fVar18 = (float)*(int *)(param_1 + 0x1c) / fVar19;
            if (fVar16 <= fVar18) {
              fVar18 = fVar16;
            }
            iVar9 = (int)(fVar18 * fVar17);
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            iVar10 = (int)(fVar18 * fVar19);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
            iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
            bVar8 = true;
          }
          for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
            iVar14 = -iVar11;
            for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
              uStack_65 = *(undefined1 *)(param_1 + 0x29);
              uStack_64 = *(undefined2 *)(param_1 + 0x2a);
              bVar7 = false;
              if (iVar11 <= lVar13) {
                bVar7 = bVar8;
              }
              if (((bVar7 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) &&
                  lVar15 < iVar10 + iVar12) {
                iVar4 = *(int *)(param_1 + 0x50);
                iVar5 = 0;
                if (iVar9 != 0) {
                  iVar5 = (iVar4 * iVar14) / iVar9;
                }
                iVar6 = iVar4 + -1;
                if (iVar5 <= iVar4 + -1) {
                  iVar6 = iVar5;
                }
                iVar2 = 0;
                if (-1 < iVar5) {
                  iVar2 = iVar6;
                }
                iVar5 = 0;
                if (iVar10 != 0) {
                  iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
                }
                iVar6 = *(int *)(param_1 + 0x54) + -1;
                if (iVar5 <= iVar6) {
                  iVar6 = iVar5;
                }
                iVar3 = 0;
                if (-1 < iVar5) {
                  iVar3 = iVar6;
                }
                puVar1 = (undefined1 *)
                         (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4)
                ;
                uStack_65 = *puVar1;
                uStack_64 = *(undefined2 *)(puVar1 + 1);
              }
              uStack_62 = 0xff;
              recovered_10000d4c((void *)(*(long *)(param_1 + 0x58) +
                                         (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),
                                 &uStack_65,4);
              iVar14 = iVar14 + 1;
            }
          }
        }
        lVar15 = unaff_x30;
      }
      return lVar15;
    }
  }
  return param_1;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005064
 */

int * recovered_10005064(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  void *destination;
  ulong count;

  if ((param_1 == 0) || (recovered_10004330(param_1), *(long *)(param_1 + 0x60) == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = recovered_100036c4(0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x1c);
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    count = (long)iVar1 * (long)iVar2 * 4;
    destination = recovered_100036f4(count);
    *(void **)(piVar3 + 2) = destination;
    recovered_10000d4c(destination,*(void **)(param_1 + 0x58),count);
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e4
 */

void recovered_100050e4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = 0xffffffff;
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
 * Address: 0x1000511c
 */

byte recovered_1000511c(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x34);
  }
  return bVar1 & 1;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed4U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed5U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed6U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed7U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed8U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed9U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edaU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edbU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edcU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eddU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edeU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edfU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee0U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee1U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee2U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee3U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee4U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee5U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee6U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee7U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee8U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee9U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeaU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eebU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eecU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eedU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeeU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eefU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef0U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef1U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef2U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef3U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef4U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef5U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef6U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef7U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef8U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef9U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efaU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efbU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efcU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efdU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efeU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5effU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f00U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f01U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f02U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000513c
 */

void recovered_1000513c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0e0 = 0;
  DAT_1000c0e1 = 0;
  DAT_1000c0e2 = 0;
  DAT_1000c0e3 = 0;
  DAT_1000c0e4 = 0;
  DAT_1000c0e5 = 0;
  DAT_1000c0e6 = 0;
  DAT_1000c0e7 = 0;
  DAT_1000c0e8 = 0;
  DAT_1000c0e9 = 0;
  DAT_1000c0ea = 0;
  DAT_1000c0eb = 0;
  DAT_1000c0ec = 0;
  DAT_1000c0ed = 0;
  DAT_1000c0ee = 0;
  DAT_1000c0ef = 0;
  DAT_1000c0f0 = 0;
  DAT_1000c0f1 = 0;
  DAT_1000c0f2 = 0;
  DAT_1000c0f3 = 0;
  DAT_1000c0f4 = 0;
  DAT_1000c0f5 = 0;
  DAT_1000c0f6 = 0;
  DAT_1000c0f7 = 0;
  DAT_1000c0f8 = 0;
  DAT_1000c0f9 = 0;
  DAT_1000c0fa = 0;
  DAT_1000c0fb = 0;
  DAT_1000c0fc = 0;
  DAT_1000c0fd = 0;
  DAT_1000c0fe = 0;
  DAT_1000c0ff = 0;
  DAT_1000c100 = 0;
  DAT_1000c101 = 0;
  DAT_1000c102 = 0;
  DAT_1000c103 = 0;
  DAT_1000c104 = 0;
  DAT_1000c105 = 0;
  DAT_1000c106 = 0;
  DAT_1000c107 = 0;
  DAT_1000c108 = 0;
  DAT_1000c109 = 0;
  DAT_1000c10a = 0;
  DAT_1000c10b = 0;
  DAT_1000c10c = 0;
  DAT_1000c10d = 0;
  DAT_1000c10e = 0;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c0e5
#undef DAT_1000c0e6
#undef DAT_1000c0e7
#undef DAT_1000c0e8
#undef DAT_1000c0e9
#undef DAT_1000c0ea
#undef DAT_1000c0eb
#undef DAT_1000c0ec
#undef DAT_1000c0ed
#undef DAT_1000c0ee
#undef DAT_1000c0ef
#undef DAT_1000c0f0
#undef DAT_1000c0f1
#undef DAT_1000c0f2
#undef DAT_1000c0f3
#undef DAT_1000c0f4
#undef DAT_1000c0f5
#undef DAT_1000c0f6
#undef DAT_1000c0f7
#undef DAT_1000c0f8
#undef DAT_1000c0f9
#undef DAT_1000c0fa
#undef DAT_1000c0fb
#undef DAT_1000c0fc
#undef DAT_1000c0fd
#undef DAT_1000c0fe
#undef DAT_1000c0ff
#undef DAT_1000c100
#undef DAT_1000c101
#undef DAT_1000c102
#undef DAT_1000c103
#undef DAT_1000c104
#undef DAT_1000c105
#undef DAT_1000c106
#undef DAT_1000c107
#undef DAT_1000c108
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed4U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed5U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed6U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed7U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed8U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ed9U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edaU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edbU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edcU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eddU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edeU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5edfU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee0U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee1U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee2U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee3U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee4U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee5U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee6U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee7U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee8U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ee9U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeaU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eebU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eecU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eedU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeeU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eefU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef0U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef1U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef2U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef3U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef4U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef5U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef6U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef7U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef8U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ef9U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efaU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efbU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efcU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efdU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5efeU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5effU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f00U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f01U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f02U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052b8
 */

void recovered_100052b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0e0 = 0;
  DAT_1000c0e1 = 0;
  DAT_1000c0e2 = 0;
  DAT_1000c0e3 = 0;
  DAT_1000c0e4 = 0;
  DAT_1000c0e5 = 0;
  DAT_1000c0e6 = 0;
  DAT_1000c0e7 = 0;
  DAT_1000c0e8 = 0;
  DAT_1000c0e9 = 0;
  DAT_1000c0ea = 0;
  DAT_1000c0eb = 0;
  DAT_1000c0ec = 0;
  DAT_1000c0ed = 0;
  DAT_1000c0ee = 0;
  DAT_1000c0ef = 0;
  DAT_1000c0f0 = 0;
  DAT_1000c0f1 = 0;
  DAT_1000c0f2 = 0;
  DAT_1000c0f3 = 0;
  DAT_1000c0f4 = 0;
  DAT_1000c0f5 = 0;
  DAT_1000c0f6 = 0;
  DAT_1000c0f7 = 0;
  DAT_1000c0f8 = 0;
  DAT_1000c0f9 = 0;
  DAT_1000c0fa = 0;
  DAT_1000c0fb = 0;
  DAT_1000c0fc = 0;
  DAT_1000c0fd = 0;
  DAT_1000c0fe = 0;
  DAT_1000c0ff = 0;
  DAT_1000c100 = 0;
  DAT_1000c101 = 0;
  DAT_1000c102 = 0;
  DAT_1000c103 = 0;
  DAT_1000c104 = 0;
  DAT_1000c105 = 0;
  DAT_1000c106 = 0;
  DAT_1000c107 = 0;
  DAT_1000c108 = 0;
  DAT_1000c109 = 0;
  DAT_1000c10a = 0;
  DAT_1000c10b = 0;
  DAT_1000c10c = 0;
  DAT_1000c10d = 0;
  DAT_1000c10e = 0;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c0e5
#undef DAT_1000c0e6
#undef DAT_1000c0e7
#undef DAT_1000c0e8
#undef DAT_1000c0e9
#undef DAT_1000c0ea
#undef DAT_1000c0eb
#undef DAT_1000c0ec
#undef DAT_1000c0ed
#undef DAT_1000c0ee
#undef DAT_1000c0ef
#undef DAT_1000c0f0
#undef DAT_1000c0f1
#undef DAT_1000c0f2
#undef DAT_1000c0f3
#undef DAT_1000c0f4
#undef DAT_1000c0f5
#undef DAT_1000c0f6
#undef DAT_1000c0f7
#undef DAT_1000c0f8
#undef DAT_1000c0f9
#undef DAT_1000c0fa
#undef DAT_1000c0fb
#undef DAT_1000c0fc
#undef DAT_1000c0fd
#undef DAT_1000c0fe
#undef DAT_1000c0ff
#undef DAT_1000c100
#undef DAT_1000c101
#undef DAT_1000c102
#undef DAT_1000c103
#undef DAT_1000c104
#undef DAT_1000c105
#undef DAT_1000c106
#undef DAT_1000c107
#undef DAT_1000c108
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052bc
 */

void recovered_100052bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c0
 */

void recovered_100052c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c4
 */

undefined8 recovered_100052c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c8
 */

void recovered_100052c8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052cc
 */

undefined8 recovered_100052cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10006352
#define DAT_10006352 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef DAT_1000646a
#define DAT_1000646a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25eU)))
#undef DAT_1000646d
#define DAT_1000646d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
#define local_d8 (*(char * *)(frame + 24))
#define local_d0 (*(ulong *)(frame + 32))
#define local_c0 (*(undefined1 * *)(frame + 48))
#define local_b0 (*(undefined8 *)(frame + 64))
#define local_a8 (*(void * *)(frame + 72))
#define local_98 (*(undefined8 *)(frame + 88))
#define local_90 (*(undefined1 * *)(frame + 96))
#define local_88 (*(long *)(frame + 104))
#define local_80 (*(undefined8 *)(frame + 112))
#define local_78 (*(long *)(frame + 120))
#define local_70 (*(ulong *)(frame + 128))
#define lStack_b8 (*(long *)(frame + 56))
#define uStack_a0 (*(undefined8 *)(frame + 80))
#define uStack_68 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_100052d0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  void *source;
  bool bVar5;
  bool bVar6;
  ulong extraout_x0;
  undefined8 uVar7;
  void *destination;
  long lVar8;
  ulong uVar9;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  destination = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    recovered_10005f0c(&local_d8,(long)param_1);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    if (local_d0 == 0) {
      bVar5 = false;
    }
    else {
      pcVar1 = &DAT_10006354;
      if (local_d8 != (char *)0x0) {
        pcVar1 = local_d8;
      }
      bVar5 = *pcVar1 == '/';
    }
    uVar9 = 0;
    do {
      if (local_d0 <= uVar9) break;
      recovered_10005a88(&local_d8,'/',uVar9);
      uVar2 = local_d0;
      if (extraout_x0 != 0xffffffffffffffff) {
        uVar2 = extraout_x0;
      }
      recovered_10005ac0(&local_90,&local_d8,uVar9,uVar2 - uVar9);
      if ((local_88 != 0) && (bVar6 = recovered_10005658(&local_90,&DAT_10006352), bVar6)) {
        bVar6 = recovered_10005afc(&local_90,&DAT_1000646a);
        if (bVar6) {
          if ((local_70 == 0) ||
             (bVar6 = recovered_10005658((undefined8 *)(local_78 + local_70 * 0x18 + -0x18),
                                         &DAT_1000646a), !bVar6)) {
            if (!bVar5) goto LAB_1000540c;
          }
          else {
            recovered_10005b4c(&local_78);
          }
        }
        else {
LAB_1000540c:
          recovered_10005c70(&local_78,&local_90);
        }
      }
      uVar9 = extraout_x0 + 1;
      recovered_100036f8(local_90);
    } while (extraout_x0 != 0xffffffffffffffff);
    puVar3 = &DAT_1000646d;
    if (!bVar5) {
      puVar3 = &DAT_10006354;
    }
    recovered_10005f0c(&local_90,(long)puVar3);
    lVar8 = 0;
    for (uVar9 = 0; uVar9 < local_70; uVar9 = uVar9 + 1) {
      if (uVar9 != 0 || bVar5) {
        recovered_10005b88((long *)&local_90,0x2f);
      }
      recovered_10005bec((long *)&local_90,(undefined8 *)(local_78 + lVar8));
      lVar8 = lVar8 + 0x18;
    }
    if (local_88 == 0) {
      puVar4 = &DAT_1000646d;
      if (!bVar5) {
        puVar4 = &DAT_10006352;
      }
      recovered_10005f0c(&local_c0,(long)puVar4);
    }
    else {
      local_c0 = local_90;
      lStack_b8 = local_88;
      local_b0 = local_80;
      local_88 = 0;
      local_80 = 0;
      local_90 = (undefined1 *)0x0;
    }
    recovered_100036f8(local_90);
    recovered_10005e8c(&local_78);
    recovered_100036f8(local_d8);
    puVar3 = &DAT_10006354;
    if (local_c0 != (undefined1 *)0x0) {
      puVar3 = local_c0;
    }
    uVar7 = recovered_10005604(puVar3,&local_a8);
    if (((int)uVar7 != 0) ||
       ((bVar5 = recovered_10005658(&local_c0,param_1), bVar5 &&
        (uVar7 = recovered_10005604(param_1,&local_a8), (int)uVar7 != 0)))) {
      source = local_a8;
      destination = (void *)0x0;
      if ((((local_a8 != (void *)0x0) && ((int)uStack_a0 != 0)) && (PF_PART4(uStack_a0, 4) != 0)) &&
         ((int)local_98 != 0)) {
        destination = recovered_100036f4(uStack_a0 & 0xffffffff);
        recovered_10000d4c(destination,source,uStack_a0 & 0xffffffff);
        bVar5 = recovered_10005670(0x50);
        if ((bVar5) && (_DAT_82010850 != 0)) {
          (*(code *)(ulong)_DAT_82010850)(source);
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = PF_PART4(uStack_a0, 4);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)local_98;
        }
      }
    }
    else {
      destination = (void *)0x0;
    }
    recovered_100036f8(local_c0);
  }
  return destination;
}

#undef DAT_10006352
#undef DAT_10006354
#undef DAT_1000646a
#undef DAT_1000646d
#undef DAT_82010850
#undef _DAT_82010850
#undef local_d8
#undef local_d0
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef lStack_b8
#undef uStack_a0
#undef uStack_68

#undef DAT_82010858
#define DAT_82010858 (*(uint8_t *)(0x82010858U))
#undef _DAT_82010858
#define _DAT_82010858 (*(uint *)(0x82010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005604
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005604(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005670(0x58);
  if ((bVar1) && (_DAT_82010858 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010858)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010858
#undef _DAT_82010858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005658
 */

bool recovered_10005658(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10005afc(param_1,param_2);
  return !bVar1;
}


#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005670(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b8
 */

undefined8 * recovered_100056b8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100036f8((void *)*param_1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e0
 */

void recovered_100056e0(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_100057ec(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10005838(param_1);
    }
    else {
      recovered_10005870(param_1,uVar1);
      for (uVar4 = 0; uVar1 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_100058e8(&local_50,*param_1 + local_38,uVar1);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar6 = param_1[2];
    lVar5 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pvVar3;
    local_48 = lVar5;
    lStack_40 = lVar6;
    recovered_100036f8(pvVar3);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057c8
 */

long recovered_100057c8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + lVar1) == '\0') break;
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057ec
 */

undefined8 recovered_100057ec(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;

  uVar1 = 0;
  if ((param_2 != 0) && (*param_1 != 0)) {
    uVar3 = 0;
    lVar2 = param_2 - *param_1;
    do {
      if ((ulong)param_1[1] < uVar3) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *param_3 = lVar2;
    uVar1 = 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005838
 */

void recovered_10005838(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (*param_1 == 0) {
    pvVar1 = recovered_1000591c(0);
    *param_1 = (long)pvVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005870
 */

void recovered_10005870(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000591c(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)((long)pvVar1 + param_1[1]) = 0;
    recovered_100036f8((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058e8
 */

undefined8 * recovered_100058e8(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_100056e0(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000591c
 */

void * recovered_1000591c(ulong capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = recovered_100036c4(capacity + 1);
  *puVar1 = 0;
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005938
 */

uint recovered_10005938(long param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_100059a4(param_2,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x24));
  uVar2 = recovered_100059a4(param_3,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x28));
  uVar3 = recovered_100059a4(param_4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x2c));
  return uVar2 | uVar1 | uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a4
 */

int recovered_100059a4(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = ~(-1 << (ulong)(param_2 & 0x1f));
  }
  return (uVar1 * param_1 + 0x7f) / 0xff << (ulong)(param_3 & 0x1f);
}


#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059d4
 */

undefined8 * recovered_100059d4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10006354;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100056e0(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10006354

#undef PTR_DAT_10008058
#define PTR_DAT_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a14
 */

void recovered_10005a14(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 0x61U < 0x1a) {
    *(&PTR_DAT_10008058)[(ulong)(param_1 - 0x61U) & 0xff] = 1;
  }
  return;
}

#undef PTR_DAT_10008058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a3c
 */

ulong recovered_10005a3c(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (param_3 < 2) {
    return 0;
  }
  if (param_2 != 0) {
    uVar1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
    if (param_2 <= uVar1) {
      uVar1 = param_2;
    }
    uVar3 = 0;
    if ((ulong)param_2 != 0) {
      uVar3 = ((ulong)(param_3 - 1) * (ulong)uVar1) / (ulong)param_2;
    }
    return uVar3;
  }
  uVar1 = param_3 - 1U;
  if (param_1 <= param_3 - 1U) {
    uVar1 = param_1;
  }
  uVar2 = 0;
  if (-1 < (int)param_1) {
    uVar2 = uVar1;
  }
  return (ulong)uVar2;
}


#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#define local_20 (*(undefined1 * *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a88
 */

void recovered_10005a88(undefined8 *param_1,char param_2,ulong param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_10006354;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_10005c04((long *)&local_20,param_2,param_3);
  return;
}

#undef DAT_10006354
#undef local_20
#undef uStack_18

#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

undefined8 * recovered_10005ac0(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;

  uVar4 = param_2[1];
  uVar2 = uVar4;
  if (param_3 <= uVar4) {
    uVar2 = param_3;
  }
  uVar4 = uVar4 - uVar2;
  uVar1 = uVar4;
  if (param_4 <= uVar4) {
    uVar1 = param_4;
  }
  if (param_4 != 0xffffffffffffffff) {
    uVar4 = uVar1;
  }
  puVar3 = &DAT_10006354;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (puVar3 + uVar2 != (undefined1 *)0x0) {
    uVar1 = uVar4;
  }
  recovered_100056e0(param_1,(long)(puVar3 + uVar2),uVar1);
  return param_1;
}

#undef DAT_10006354

#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005afc
 */

bool recovered_10005afc(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10006354;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_100057c8((long)param_2);
  if (lVar6 == lVar4) {
    do {
      bVar3 = lVar6 == 0;
      if (lVar6 == 0) {
        return true;
      }
      cVar1 = *pcVar5;
      cVar2 = *param_2;
      lVar6 = lVar6 + -1;
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_10006354

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b4c
 */

void recovered_10005b4c(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100056b8((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b88
 */

void recovered_10005b88(long *param_1,undefined1 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10005870(param_1,uVar1);
  }
  recovered_10005838(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10006354
#define DAT_10006354 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#define lStack_38 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bec
 */

long * recovered_10005bec(long *param_1,undefined8 *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  uVar6 = param_2[1];
  puVar1 = &DAT_10006354;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_100057ec(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10005870(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10005870(param_1,uVar4 + lVar7);
      lVar3 = 0;
      for (uVar5 = uVar4; uVar6 = uVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)(*param_1 + lVar7) = *(undefined1 *)(*param_1 + lStack_38 + lVar3);
        lVar3 = lVar3 + 1;
        lVar7 = lVar7 + 1;
      }
    }
    lVar7 = param_1[1];
    param_1[1] = lVar7 + uVar6;
    *(undefined1 *)(*param_1 + lVar7 + uVar6) = 0;
  }
  return param_1;
}

#undef DAT_10006354
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c04
 */

ulong recovered_10005c04(long *param_1,char param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if ((ulong)param_1[1] <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) == param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c38
 */

bool recovered_10005c38(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;

  if (param_2 == param_4) {
    do {
      bVar3 = param_2 == 0;
      if (param_2 == 0) {
        return true;
      }
      cVar1 = *param_1;
      cVar2 = *param_3;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c70
 */

long recovered_10005c70(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10005ce4(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_100059d4((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ce4
 */

void recovered_10005ce4(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10005d78(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10005e70((undefined8 *)((long)pvVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_100056b8((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_100036f8((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d78
 */

void * recovered_10005d78(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x18;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c78(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c64();
  }
  return pvVar1;
}


#define local_38 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d8c
 */

long * recovered_10005d8c(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_100057ec(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10005870(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10005870(param_1,uVar3 + lVar5);
      lVar2 = 0;
      for (uVar4 = uVar3; param_3 = uVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)(*param_1 + lVar5) = *(undefined1 *)(*param_1 + local_38 + lVar2);
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + 1;
      }
    }
    lVar5 = param_1[1];
    param_1[1] = lVar5 + param_3;
    *(undefined1 *)(*param_1 + lVar5 + param_3) = 0;
  }
  return param_1;
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e70
 */

void recovered_10005e70(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e8c
 */

long * recovered_10005e8c(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005eb8(param_1);
  recovered_100036f8((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb8
 */

void recovered_10005eb8(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_100056b8((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f0c
 */

undefined8 * recovered_10005f0c(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_100057c8(param_2);
  recovered_100056e0(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f50
 */

void recovered_10005f50(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_1000603c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000603c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fd4
 */

void recovered_10005fd4(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000603c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000603c
 */

void recovered_1000603c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_100060b0(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_100036f8((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060b0
 */

void * recovered_100060b0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c78(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c64();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060bc
 */

undefined8 * recovered_100060bc(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100036f8((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060e8
 */

long recovered_100060e8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - lVar4;
  }
  lVar3 = (long)param_4 - (long)param_3;
  if (lVar3 != 0) {
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar6 + lVar3) {
      uVar2 = 4;
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      do {
        uVar5 = uVar2;
        uVar2 = uVar5 << 1;
      } while (uVar5 < uVar6 + lVar3);
      recovered_1000603c(param_1,uVar5);
      uVar6 = param_1[1];
    }
    while (uVar7 < uVar6) {
      puVar1 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar1[lVar3] = *puVar1;
      uVar6 = uVar6 - 1;
    }
    uVar6 = uVar7;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar6) = *param_3;
      uVar6 = uVar6 + 1;
    }
    lVar4 = *param_1;
    param_1[1] = param_1[1] + lVar3;
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + uVar7;
  }
  return lVar3;
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
