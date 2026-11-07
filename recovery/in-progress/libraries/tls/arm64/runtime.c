/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x542cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x543cU)))
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
 * Address: 0x100005b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005b8(void)

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

  DAT_1000c0e0 = 0;
  uStack_48 = 0;
  DAT_1000c0e8 = 0;
  DAT_1000c0f0 = 0;
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
    recovered_10002434(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_1000c0e8 == 0) {
    uVar4 = _DAT_82010088 & 0xfffffff0;
    if (_DAT_82010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300030 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10002434(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  if (DAT_1000c0f0 == 0) {
    DAT_1000c0f0 = DAT_1000c0e8;
  }
  DAT_1000c0e0 = 1;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0
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

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(byte *)(((uintptr_t)pf_module_state + 0x542cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x543cU)))
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
 * Address: 0x100005c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005c4(void)

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
  if ((DAT_1000c0e0 & 1) == 0) {
    DAT_1000c0e8 = 0;
    DAT_1000c0f0 = 0;
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
      recovered_10002434(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c0e8 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002434(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_1000c0f0 == 0) {
      DAT_1000c0f0 = DAT_1000c0e8;
    }
    DAT_1000c0e0 = 1;
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0
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

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000848
 */

ulong recovered_10000848(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005c4();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000894
 */

long recovered_10000894(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c4();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d4
 */

ulong recovered_100008d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005c4();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000910
 */

long recovered_10000910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c4();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5434U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x543cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000940
 */

ulong * recovered_10000940(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 != 0) {
    recovered_100005c4();
    puVar4 = DAT_1000c0e8;
    if (DAT_1000c0f0 != (ulong *)0x0) {
      puVar4 = DAT_1000c0f0;
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
            DAT_1000c0f0 = DAT_1000c0e8;
            *(undefined1 *)(puVar2 + 3) = 0;
            if (puVar4 != (ulong *)0x0) {
              DAT_1000c0f0 = puVar4;
            }
            return puVar2 + 4;
          }
        }
        puVar1 = puVar2 + 1;
        puVar2 = DAT_1000c0e8;
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          puVar2 = (ulong *)*puVar1;
        }
      } while (puVar2 != (ulong *)0x0 && puVar2 != puVar4);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000c0e8
#undef DAT_1000c0f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a18
 */

ulong recovered_10000a18(ulong param_1,uint param_2)

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
 * Address: 0x10000a5c
 */

ulong recovered_10000a5c(ulong param_1,uint param_2)

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
 * Address: 0x10000aa8
 */

long recovered_10000aa8(long param_1,uint param_2)

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
 * Address: 0x10000af8
 */

/* WARNING: Removing unreachable block (ram,0x10000b48) */

ulong recovered_10000af8(ulong param_1,ulong param_2)

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
 * Address: 0x10000b00
 */

ulong recovered_10000b00(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000b60
 */

undefined8 recovered_10000b60(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10000b00(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b80
 */

long recovered_10000b80(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000b00(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

long recovered_10000bc0(long param_1,long param_2)

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
  recovered_10000b00(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c0c
 */

void recovered_10000c0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c14
 */

int recovered_10000c14(int param_1)

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
void * recovered_10000c20(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000c64(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000ca8(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf4
 */

void * recovered_10000cf4(void *destination,void *source,ulong count)

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
 * Address: 0x10000dcc
 */

void * recovered_10000dcc(void *destination,void *source,ulong count)

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
      destination = recovered_10000cf4(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee0
 */

void * recovered_10000ee0(void *destination,int value,ulong count)

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
 * Address: 0x10000f78
 */

void recovered_10000f78(ulong *param_1,ulong param_2)

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
 * Address: 0x10000f7c
 */

void recovered_10000f7c(ulong *param_1,ulong param_2)

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
 * Address: 0x10000f80
 */

int recovered_10000f80(void *left,void *right,ulong count)

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
        goto recovered_100010ec;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_100010ec;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_100010ec;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_100010ec;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_100010ec:
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
 * Address: 0x100010ec
 */

int recovered_100010ec(long param_1,long param_2)

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
 * Address: 0x1000111c
 */

bool recovered_1000111c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000112c
 */

bool recovered_1000112c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000113c
 */

bool recovered_1000113c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001150
 */

bool recovered_10001150(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000116c
 */

bool recovered_1000116c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000117c
 */

bool recovered_1000117c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000118c
 */

int recovered_1000118c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

int recovered_100011a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011b4
 */

ulong recovered_100011b4(char *text)

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
 * Address: 0x100011d8
 */

int recovered_100011d8(char *left,char *right)

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
 * Address: 0x10001200
 */

int recovered_10001200(char *left,char *right)

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
 * Address: 0x10001204
 */

void recovered_10001204(long param_1,long param_2)

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
 * Address: 0x1000121c
 */

void recovered_1000121c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_100011b4(param_1);
    destination = recovered_10000c20(uVar1 + 1);
    if (destination != (void *)0x0) {
      recovered_10000cf4(destination,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001258
 */

char * recovered_10001258(char *param_1,char param_2)

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
 * Address: 0x10001280
 */

long recovered_10001280(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10001258(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012c8
 */

char * recovered_100012c8(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10001258(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001308
 */

char * recovered_10001308(char *param_1,char *param_2)

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


#undef DAT_10006fd6
#define DAT_10006fd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x322U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001344
 */

undefined * recovered_10001344(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10006fd6;
}

#undef DAT_10006fd6

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x534cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

undefined ** recovered_10001350(void)

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
 * Address: 0x1000135c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000135c(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000ee0(auStack_38,0,0x18);
  bVar1 = recovered_1000252c(0x168);
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
 * Address: 0x100013d4
 */

double recovered_100013d4(double param_1,uint param_2)

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
 * Address: 0x10001408
 */

uint128 recovered_10001408(double param_1,int *param_2)

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
 * Address: 0x1000147c
 */

uint128 recovered_1000147c(double param_1,double param_2)

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
 * Address: 0x100014a0
 */

uint128 recovered_100014a0(double param_1,double param_2)

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
 * Address: 0x10001500
 */

uint128 recovered_10001500(double param_1)

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
 * Address: 0x1000151c
 */

uint128 recovered_1000151c(double param_1)

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
 * Address: 0x10001548
 */

uint128 recovered_10001548(double param_1)

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


#undef DAT_10006cc0
#define DAT_10006cc0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001584
 */

uint128 recovered_10001584(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10006cc0 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10006cc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

long recovered_10001630(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10006cc8
#define DAT_10006cc8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001644
 */

uint128 recovered_10001644(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001698(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006cc8);
  return auVar1;
}

#undef DAT_10006cc8

#undef DAT_10006cd0
#define DAT_10006cd0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10006cd8
#define DAT_10006cd8 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10006ce0
#define DAT_10006ce0 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10006ce8
#define DAT_10006ce8 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001698
 */

void recovered_10001698(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10006cd0 < param_1; param_1 = param_1 + DAT_10006ce8) {
  }
  for (; param_1 < DAT_10006cd8; param_1 = param_1 + DAT_10006ce0) {
  }
  return;
}

#undef DAT_10006cd0
#undef DAT_10006cd8
#undef DAT_10006ce0
#undef DAT_10006ce8

#undef DAT_10006cf0
#define DAT_10006cf0 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016dc
 */

uint128 recovered_100016dc(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001698(in_d0);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006cf0;
  return auVar1;
}

#undef DAT_10006cf0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001728
 */

uint128 recovered_10001728(double param_1)

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
long long recovered_10001738(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10001798(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100017e8(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10001810(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001834
 */

float recovered_10001834(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001868
 */

float recovered_10001868(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001408((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001880
 */

float recovered_10001880(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100013d4((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001898
 */

float recovered_10001898(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100014a0((double)param_1,(double)param_2);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018b4
 */

float recovered_100018b4(float param_1)

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
 * Address: 0x100018d8
 */

float recovered_100018d8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000151c((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f0
 */

uint128 recovered_100018f0(double param_1)

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
 * Address: 0x10001918
 */

float recovered_10001918(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100018f0((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001930
 */

float recovered_10001930(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001548((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001948
 */

float recovered_10001948(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001584((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001960
 */

long recovered_10001960(double param_1)

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
 * Address: 0x10001974
 */

float recovered_10001974(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001644((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000198c
 */

float recovered_1000198c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100016dc((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a4
 */

float recovered_100019a4(float param_1)

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
 * Address: 0x100019b4
 */

long recovered_100019b4(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001a4c;
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
      goto LAB_10001a78;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001a78;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001a78;
    }
LAB_10001a4c:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001a78:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001ab8((uint)*pbVar4);
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
 * Address: 0x10001ab8
 */

uint recovered_10001ab8(int param_1)

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
 * Address: 0x10001ae8
 */

long recovered_10001ae8(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001bcc;
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
      goto LAB_10001bcc;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001bcc;
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
LAB_10001bcc:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001ab8((uint)*pbVar6);
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
 * Address: 0x10001c0c
 */

uint128 recovered_10001c0c(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_100013d4(dVar12,iVar9 * iVar6);
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
 * Address: 0x10001d9c
 */

float recovered_10001d9c(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001c0c(in_x0,in_x1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
#define pdStack_78 (*(double * *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db4
 */

int recovered_10001db4(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_10001e24:
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
      goto LAB_10001e50;
    }
    goto LAB_10001e54;
  }
  pbVar8 = param_3 + 1;
  bVar1 = *pbVar8;
  if (bVar1 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar1)) {
      case 0x2a:
        goto code_r0x10001ef0;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10001ed8;
      default:
        if ((bVar1 != 0x20) && (bVar1 != 0x23)) goto LAB_10001ed8;
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
  goto LAB_10002180;
LAB_10001ed8:
  do {
    pbVar8 = param_3 + 1;
    bVar1 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar1 - 0x30U < 10);
LAB_10001f00:
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
LAB_10001fb4:
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
      goto LAB_10001fb4;
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
      goto LAB_10001e50;
    }
    break;
  case 100:
  case 0x69:
code_r0x100020d0:
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
LAB_10002170:
    pdStack_78 = pdStack_78 + 1;
    uVar9 = 10;
code_r0x10002178:
    uVar7 = 0;
LAB_1000217c:
    recovered_10002368((long *)&local_80,&local_88,&local_8c,(ulong)dVar6,uVar9,uVar7);
    goto LAB_10002180;
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
      recovered_10002368((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar6,10,0);
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
      goto LAB_10002180;
    }
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0x324U);
code_r0x10002194:
    pdStack_78 = pdStack_78 + 1;
    recovered_10002318((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_10002180;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      dVar6 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002318((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x359U));
      uVar9 = 0x10;
      goto code_r0x10002178;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pcVar5 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
      goto code_r0x10002194;
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
      goto LAB_10002170;
    case 0x78:
code_r0x1000208c:
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
      goto LAB_1000217c;
    default:
      if (bVar1 == 0x49) goto code_r0x100020d0;
      if (bVar1 == 0x58) goto code_r0x1000208c;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_10001e50:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10001e54:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002180:
  param_3 = pbVar8 + 1;
  goto LAB_10001e24;
code_r0x10001ef0:
  pdStack_78 = pdStack_78 + 1;
  bVar1 = *pbVar8;
  goto LAB_10001f00;
}

#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022dc
 */

void recovered_100022dc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10006fe4
#define str_10006fe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002318
 */

void recovered_10002318(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10006fe4;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100022dc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10006fe4

#undef str_10006feb
#define str_10006feb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_10006ffc
#define str_10006ffc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x348U)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002368
 */

void recovered_10002368(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10006feb;
  if (param_6 == 0) {
    pcVar1 = str_10006ffc;
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
    recovered_100022dc(param_1,param_2,param_3,local_80[lVar6]);
  }
  return;
}

#undef str_10006feb
#undef str_10006ffc
#undef local_80

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_1000240c(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001db4(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x542cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x543cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002434
 */

void recovered_10002434(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_100024bc(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_1000c0e0;
      if (DAT_1000c0e8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_1000c0f0 == (long *)0x0) {
        DAT_1000c0f0 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x542cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5434U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x543cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024bc
 */

void recovered_100024bc(long param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_1000c0e0;
      if (DAT_1000c0e8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000c0f0 == (long *)0x0) {
        DAT_1000c0f0 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0

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
 * Address: 0x1000252c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000252c(int param_1)

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

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002674
 */

void recovered_10002674(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c100 != 0) {
          DAT_1000c100 = DAT_1000c100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000272c(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_1000272c(0);
          }
          pcVar1 = &DAT_1000c108 + DAT_1000c100;
          DAT_1000c100 = DAT_1000c100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000272c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000272c(int param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c100 != 0) || (param_1 != 0)) {
    if (DAT_1000c100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000cf4(local_230,&DAT_1000c108,DAT_1000c100);
      uVar2 = DAT_1000c100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_100034c0(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_1000c100 = 0;
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100027b8(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000cf4(auStack_230,&DAT_1000c108,DAT_1000c100);
    uVar2 = DAT_1000c100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_100034c0(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_1000c100 = 0;
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100027c0(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c100 != 0) {
    if (DAT_1000c100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000cf4(auStack_230,&DAT_1000c108,DAT_1000c100);
      uVar2 = DAT_1000c100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_100034c0(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_1000c100 = 0;
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10007010
#define DAT_10007010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c8
 */

void recovered_100027c8(char *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10007010;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_1000240c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002674(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10007010
#undef acStack_160

#undef DAT_1000702e
#define DAT_1000702e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37aU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef str_10007013
#define str_10007013 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000282c
 */

/* WARNING: Removing unreachable block (ram,0x10002878) */

void recovered_1000282c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002850(str_10007013);
  pcVar4 = &DAT_1000702e;
  for (uVar3 = recovered_100011b4(&DAT_1000702e); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000272c(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_1000272c(0);
        }
        pcVar1 = &DAT_1000c108 + DAT_1000c100;
        DAT_1000c100 = DAT_1000c100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000702e
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10007013

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002850
 */

void recovered_10002850(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_100011b4(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c100 != 0) {
          DAT_1000c100 = DAT_1000c100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000272c(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_1000272c(0);
          }
          pcVar1 = &DAT_1000c108 + DAT_1000c100;
          DAT_1000c100 = DAT_1000c100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108

#undef DAT_1000702e
#define DAT_1000702e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37aU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x544cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef str_10007031
#define str_10007031 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000287c
 */

/* WARNING: Removing unreachable block (ram,0x10002878) */

void recovered_1000287c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002850(str_10007031);
  pcVar4 = &DAT_1000702e;
  for (uVar3 = recovered_100011b4(&DAT_1000702e); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000272c(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_1000272c(0);
        }
        pcVar1 = &DAT_1000c108 + DAT_1000c100;
        DAT_1000c100 = DAT_1000c100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000702e
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10007031

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100028a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_100027c0();
    bVar2 = recovered_100034c0(0x44);
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
 * Address: 0x10002918
 */

undefined8 recovered_10002918(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000291c
 */

void recovered_1000291c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002920
 */

undefined8 recovered_10002920(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10007010
#define DAT_10007010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
#undef str_100070c5
#define str_100070c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x411U)))
#undef str_100070d2
#define str_100070d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41eU)))
#undef str_100070e0
#define str_100070e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42cU)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002928
 */

undefined4 * recovered_10002928(char *param_1,long param_2)

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
  iVar2 = recovered_100011d8(param_1,str_100070c5);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100011d8(param_1,str_100070d2);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100011d8(param_1,str_100070e0);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c20(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000ee0(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10001258((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001258((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001258((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10001258((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001258((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001258((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10001258((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_10007010,(ulonglong)param_1);
        recovered_10000ee0(&uStack_4c,0,0xc);
        uVar6 = recovered_10002b64(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002b0c:
            recovered_10000c64(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001258((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002bb4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002b0c;
              recovered_10000cf4(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c20(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000ee0(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_10007010,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_10007010
#undef DAT_1000c058
#undef str_100070c5
#undef str_100070d2
#undef str_100070e0
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002b64(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100034c0(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb4
 */

undefined8 recovered_10002bb4(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000ca8(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_10007010
#define DAT_10007010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
#undef str_100070c5
#define str_100070c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x411U)))
#undef str_100070d2
#define str_100070d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41eU)))
#undef str_100070e0
#define str_100070e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42cU)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3c
 */

undefined4 * recovered_10002c3c(char *param_1,long param_2,int *param_3)

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
    recovered_10002c70(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100011d8(param_1,str_100070c5);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100011d8(param_1,str_100070d2);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100011d8(param_1,str_100070e0);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c20(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000ee0(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10001258((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001258((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001258((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10001258((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001258((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001258((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10001258((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_10007010,(ulonglong)param_1);
        recovered_10000ee0(&uStack_4c,0,0xc);
        uVar6 = recovered_10002b64(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002b0c:
            recovered_10000c64(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001258((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002bb4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002b0c;
              recovered_10000cf4(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c20(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000ee0(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_10007010,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_10007010
#undef DAT_1000c058
#undef str_100070c5
#undef str_100070d2
#undef str_100070e0
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c70
 */

undefined8 recovered_10002c70(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003094(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000c64(*(void **)(param_1 + 0x40));
    }
    recovered_10000c64(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb4
 */

ulong recovered_10002cb4(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

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
          recovered_10000cf4(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
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
            uVar4 = recovered_10002de8(param_4);
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


#undef DAT_10006fe3
#define DAT_10006fe3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de8
 */

uint recovered_10002de8(int *param_1)

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
LAB_10002e80:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100028a0((long)text,0x1fe,&DAT_10006fe3,0);
      if (bVar2) {
        uVar3 = recovered_100011b4(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002e80;
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

#undef DAT_10006fe3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ecc
 */

long recovered_10002ecc(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10002674(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10002fcc;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002bb4((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000ee0((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000cf4((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10002fcc;
    }
  }
  param_3 = 0;
LAB_10002fcc:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fdc
 */

undefined8 recovered_10002fdc(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10002fe8;
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
LAB_10002fe8:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

undefined8 recovered_10003070(long param_1)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003094
 */

undefined8 recovered_10003094(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003270(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x10003108
 */

undefined1 recovered_10003108(long param_1)

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
 * Address: 0x10003114
 */

undefined1 recovered_10003114(long param_1)

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
 * Address: 0x10003120
 */

void recovered_10003120(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003134
 */

uint recovered_10003134(uint param_1,long param_2)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003158
 */

undefined8 recovered_10003158(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10003190(param_1);
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
 * Address: 0x10003190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003190(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100034c0(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100031c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53a4U)))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

undefined8 recovered_100031d4(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000ee0(&uStack_2c,0,0xc);
    uVar1 = recovered_10002b64(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10003270(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003190(param_1), (int)uVar1 != 0)) {
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
 * Address: 0x10003270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100034c0(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100032c0. Too many branches */
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
 * Address: 0x100032d0
 */

undefined8 recovered_100032d0(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *destination;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000ee0(&uStack_3c,0,0xc);
    uVar2 = recovered_10002b64(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      destination = recovered_10000c20((ulong)uVar1);
      uVar2 = 0;
      if (destination != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000cf4(destination,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10003370
 */

bool recovered_10003370(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003270(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000339c
 */

undefined8 recovered_1000339c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a0
 */

void recovered_100033a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a4
 */

undefined8 recovered_100033a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a8
 */

undefined8 recovered_100033a8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ac
 */

undefined8 recovered_100033ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b0
 */

char * recovered_100033b0(long param_1,char param_2,long param_3)

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
 * Address: 0x100033d4
 */

int recovered_100033d4(char *left,char *right,ulong count)

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


#undef DAT_10007054
#define DAT_10007054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a0U)))
#undef str_10007057
#define str_10007057 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a3U)))
#undef str_10007064
#define str_10007064 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b0U)))
#undef str_1000706e
#define str_1000706e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_10007082
#define str_10007082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#undef str_10007090
#define str_10007090 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_100070a2
#define str_100070a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eeU)))
#undef str_100070ae
#define str_100070ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_100070bf
#define str_100070bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003404
 */

char * recovered_10003404(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10007054;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003430_caseD_1;
  case 2:
    return str_10007057;
  case 5:
    return str_10007064;
  case 9:
    return str_1000706e;
  case 0xc:
    return str_10007082;
  case 0xd:
    return str_10007090;
  default:
    if (param_1 == 0x11) {
      return str_100070a2;
    }
    if (param_1 == 0x16) {
      return str_100070ae;
    }
switchD_10003430_caseD_1:
    return str_100070bf;
  }
}

#undef DAT_10007054
#undef str_10007057
#undef str_10007064
#undef str_1000706e
#undef str_10007082
#undef str_10007090
#undef str_100070a2
#undef str_100070ae
#undef str_100070bf

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a4
 */

undefined8 recovered_100034a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a8
 */

undefined8 recovered_100034a8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5444U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034ac
 */

void recovered_100034ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0f8 = DAT_1000c0f8 + 1;
  return;
}

#undef DAT_1000c0f8

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
 * Address: 0x100034c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100034c0(int param_1)

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
__attribute__((naked,noreturn)) void recovered_1000358c(void *context){__asm__ volatile("ldr x16,[x0,#80]\nmov sp,x16\nldr x29,[x0,#64]\nldr x16,[x0,#72]\nbr x16");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100035a0(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100035dc(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003620
 */

void recovered_10003620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000c0c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003630);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003634
 */

undefined8 recovered_10003634(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000363c
 */

void recovered_1000363c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000364c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5654U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000364c
 */

long recovered_1000364c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c308;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c308 = param_1;
  return param_1 + 0x30;
}

#undef DAT_1000c308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000366c
 */

void * recovered_1000366c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c20(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000369c
 */

void * recovered_1000369c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c20(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a0
 */

void recovered_100036a0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036b8
 */

void recovered_100036b8(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036d0
 */

void recovered_100036d0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e8
 */

void recovered_100036e8(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

undefined8 recovered_10003700(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003708
 */

uint recovered_10003708(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003718
 */

void recovered_10003718(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003728
 */

void recovered_10003728(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000372c
 */

undefined1 * recovered_1000372c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000c20(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003620();
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
 * Address: 0x10003774
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003774(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_1000252c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003784
 */

long recovered_10003784(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5654U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000378c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000378c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c308;
  if (DAT_1000c308 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c308 + 0x10);
    DAT_1000c308 = *(long *)(DAT_1000c308 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_1000252c(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c308
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e4
 */

void recovered_100037e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003804((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x565cU)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003804
 */

void recovered_10003804(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c310;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003864;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10003dec((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003910(param_1);
LAB_10003864:
                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}

#undef DAT_1000c310
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5654U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003868
 */

void recovered_10003868(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c308;
  if (DAT_1000c308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003620();
  }
  *(undefined1 *)(DAT_1000c308 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003804(puVar1);
}

#undef DAT_1000c308

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x565cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003898
 */

void recovered_10003898(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c310;
  DAT_1000c310 = param_1;
  return;
}

#undef DAT_1000c310

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x565cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038ac
 */

void recovered_100038ac(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c310;
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

#undef DAT_1000c310

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d8
 */

void recovered_100038d8(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003804(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e4
 */

void recovered_100038e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x565cU)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f0
 */

undefined8 recovered_100038f0(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c310 != (long *)0x0) {
    DAT_1000c310 = (long *)*DAT_1000c310;
  }
  puVar2 = (undefined8 *)recovered_10003910(param_1);
  plVar3 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003620();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10003dec((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_100039a4;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_100039a4:
  recovered_1000358c((long)plVar3);
  recovered_100038f0(extraout_x0);
  return 0;
}

#undef DAT_1000c310
#undef uStack_50
#undef uStack_48

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x565cU)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003910
 */

undefined8 recovered_10003910(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003620();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10003dec((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_100039a4;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_100039a4:
  recovered_1000358c((long)plVar2);
  recovered_100038f0(extraout_x0);
  return 0;
}

#undef DAT_1000c310
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039ac
 */

undefined8 recovered_100039ac(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038f0(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b8
 */

undefined8 recovered_100039b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

void recovered_100039c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039cc
 */

long recovered_100039cc(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10003a0c(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a0c
 */

bool recovered_10003a0c(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10003a90:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003a90;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003a90;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state + 0x53fcU)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a98
 */

void recovered_10003a98(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a9c
 */

undefined8 recovered_10003a9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aa4
 */

bool recovered_10003aa4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab4
 */

bool recovered_10003ab4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aec
 */

bool recovered_10003aec(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b08
 */

bool recovered_10003b08(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b20
 */

bool recovered_10003b20(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b38
 */

bool recovered_10003b38(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b50
 */

bool recovered_10003b50(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10003b68(double value) {
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
float recovered_10003c28(float value){return (float)recovered_10003b68((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10003c44(long double value){return (long double)recovered_10003b68((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10003c48(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c58
 */

uint128 recovered_10003c58(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001500(param_1);
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
 * Address: 0x10003ca4
 */

long recovered_10003ca4(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003ce4;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003ce4:
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
      goto LAB_10003d68;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003d68;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003d68;
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
LAB_10003d68:
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
 * Address: 0x10003de8
 */

long recovered_10003de8(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003ce4;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003ce4:
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
      goto LAB_10003d68;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003d68;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003d68;
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
LAB_10003d68:
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

#undef DAT_10006d58
#define DAT_10006d58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dec
 */

undefined8 recovered_10003dec(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_10003fc4((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_100040b8(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_100040b8(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_100040b8(&local_68);
        uVar5 = recovered_100040b8(&local_68);
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
            uVar5 = recovered_1000411c(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_1000411c(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10006d58 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10003fc4((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10003a0c(param_2,(long *)puVar6);
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

#undef DAT_10006d58
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fc4
 */

ulong * recovered_10003fc4(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_100040f0(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_1000407c;
  case 1:
    puVar1 = (ulong *)recovered_100040b8(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_100040f0(pbVar5,2);
    goto LAB_10004078;
  case 3:
    puVar1 = (ulong *)recovered_100040f0(pbVar5,4);
    goto LAB_10004040;
  default:
    goto switchD_1000400c_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_1000411c(param_2);
    break;
  case 10:
    uVar3 = recovered_100040f0(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004078:
    pbVar4 = pbVar5 + 2;
LAB_1000407c:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_100040f0(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004040:
    pbVar4 = pbVar5 + 4;
    goto LAB_1000407c;
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
switchD_1000400c_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040b8
 */

ulong recovered_100040b8(undefined8 *param_1)

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
 * Address: 0x100040f0
 */

ulong recovered_100040f0(byte *param_1,long param_2)

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
 * Address: 0x1000411c
 */

ulong recovered_1000411c(undefined8 *param_1)

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


#undef str_100070ee
#define str_100070ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004194
 */

char * recovered_10004194(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return str_100070ee;
}

#undef str_100070ee

#undef DAT_10006fe3
#define DAT_10006fe3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a0
 */

void recovered_100041a0(void *context,void *io,char *hostname)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  ulong count;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;

  if (context != (void *)0x0) {
    recovered_10000ee0(context,0,0x220);
    if (io != (void *)0x0) {
      uVar3 = *(undefined8 *)((long)io + 8);
      uVar2 = *(undefined8 *)io;
      uVar5 = *(undefined8 *)((long)io + 0x18);
      uVar4 = *(undefined8 *)((long)io + 0x10);
      *(undefined8 *)((long)context + 0x20) = *(undefined8 *)((long)io + 0x20);
      *(undefined8 *)((long)context + 8) = uVar3;
      *(undefined8 *)context = uVar2;
      *(undefined8 *)((long)context + 0x18) = uVar5;
      *(undefined8 *)((long)context + 0x10) = uVar4;
    }
    text = &DAT_10006fe3;
    if (hostname != (char *)0x0) {
      text = hostname;
    }
    count = recovered_100011b4(text);
    if (0x7e < count) {
      count = 0x7f;
    }
    recovered_10000cf4((void *)((long)context + 0x28),text,count);
    *(undefined1 *)((long)context + 0x28 + count) = 0;
    uVar1 = recovered_10004234((long)context);
    *(uint *)((long)context + 0x218) = uVar1;
  }
  return;
}

#undef DAT_10006fe3

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[8])(frame + 24))
#define iStack_2c (*(int *)(frame + 36))
#define local_30 (*(uint *)(frame + 32))
#define local_28 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004234
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004234(long param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 0x574d544c;
  recovered_10000ee0(auStack_38,0,0x18);
  bVar1 = recovered_10005a58(0x168);
  if (((bVar1) && (_DAT_82010968 != 0)) &&
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 != 0)) {
    uVar3 = local_30 ^ iStack_2c * 0x3c6ef35f ^ local_28 * 0x19660d ^ 0x574d544cU;
  }
  return uVar3 ^ (uint)param_1 ^ *(uint *)(param_1 + 0x218);
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef iStack_2c
#undef local_30
#undef local_28

#undef DAT_10006dc0
#define DAT_10006dc0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_10006dc8
#define DAT_10006dc8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_10006dd0
#define DAT_10006dd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_10006dd8
#define DAT_10006dd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_10006e40
#define DAT_10006e40 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_10006e0f
#define str_10006e0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15bU)))
#undef str_10007082
#define str_10007082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#undef str_1000711c
#define str_1000711c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x468U)))
#undef str_10007137
#define str_10007137 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x483U)))
#undef str_10007154
#define str_10007154 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a0U)))
#undef str_1000715c
#define str_1000715c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a8U)))
#undef str_10007169
#define str_10007169 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b5U)))
#undef str_100071cc
#define str_100071cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#undef str_100071ea
#define str_100071ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x536U)))
#undef str_10007203
#define str_10007203 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54fU)))
#undef str_1000721d
#define str_1000721d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_10007239
#define str_10007239 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x585U)))
#undef str_10007253
#define str_10007253 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_1000727f
#define str_1000727f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cbU)))
#undef str_10007298
#define str_10007298 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_100072b1
#define str_100072b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fdU)))
#undef str_100072c7
#define str_100072c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x613U)))
#undef str_10007301
#define str_10007301 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64dU)))
#undef str_10007317
#define str_10007317 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x663U)))
#undef str_1000732f
#define str_1000732f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67bU)))
#undef str_1000734b
#define str_1000734b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x697U)))
#undef str_10007354
#define str_10007354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a0U)))
#undef str_10007375
#define str_10007375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c1U)))
#undef str_10007382
#define str_10007382 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6ceU)))
#define uStack_706 (*(undefined2 *)(frame + 298))
#define uStack_704 (*(undefined1 *)(frame + 300))
#define uStack_703 (*(ushort *)(frame + 301))
#define auStack_701 (*(undefined1 (*)[465])(frame + 303))
#define auStack_530 (*(undefined1 (*)[32])(frame + 768))
#define auStack_510 (*(undefined1 (*)[32])(frame + 800))
#define auStack_4f0 (*(undefined1 (*)[32])(frame + 832))
#define auStack_4d0 (*(undefined1 (*)[32])(frame + 864))
#define uStack_4b0 (*(undefined4 *)(frame + 896))
#define uStack_4ac (*(undefined2 *)(frame + 900))
#define auStack_4aa (*(undefined1 (*)[250])(frame + 902))
#define uStack_3b0 (*(undefined8 *)(frame + 1152))
#define auStack_1a8 (*(undefined1 (*)[32])(frame + 1672))
#define auStack_188 (*(undefined1 (*)[32])(frame + 1704))
#define auStack_168 (*(undefined1 (*)[32])(frame + 1736))
#define auStack_148 (*(undefined1 (*)[32])(frame + 1768))
#define auStack_128 (*(undefined1 (*)[32])(frame + 1800))
#define auStack_108 (*(undefined1 (*)[32])(frame + 1832))
#define auStack_e8 (*(undefined1 (*)[32])(frame + 1864))
#define abStack_c8 (*(byte (*)[32])(frame + 1896))
#define auStack_a8 (*(ulong (*)[4])(frame + 1928))
#define auStack_88 (*(undefined1 (*)[40])(frame + 1960))
#define pcStack_820 (*(char * *)(frame + 16))
#define auStack_818 (*(undefined1 (*)[32])(frame + 24))
#define auStack_7f8 (*(undefined1 (*)[32])(frame + 56))
#define auStack_7d8 (*(undefined1 (*)[32])(frame + 88))
#define auStack_7b8 (*(undefined1 (*)[32])(frame + 120))
#define auStack_798 (*(undefined1 (*)[32])(frame + 152))
#define auStack_778 (*(undefined1 (*)[32])(frame + 184))
#define auStack_758 (*(undefined1 (*)[32])(frame + 216))
#define uStack_738 (*(ulong *)(frame + 248))
#define uStack_730 (*(undefined1 *)(frame + 256))
#define uStack_72f (*(undefined1 *)(frame + 257))
#define uStack_72e (*(undefined1 *)(frame + 258))
#define uStack_72d (*(undefined1 *)(frame + 259))
#define uStack_72c (*(undefined2 *)(frame + 260))
#define auStack_72a (*(undefined1 (*)[32])(frame + 262))
#define uStack_70a (*(undefined4 *)(frame + 294))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042d0
 */

int recovered_100042d0(void *context,char *error,ulong capacity)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *data;
  void *source;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;

  uStack_738 = 0;
  if ((((context == (void *)0x0) || (*(long *)((long)context + 8) == 0)) ||
      (*(long *)((long)context + 0x10) == 0)) ||
     (pcVar14 = (char *)((long)context + 0x28), *pcVar14 == '\0')) {
    pcVar14 = str_1000711c;
    goto LAB_10004450;
  }
  auStack_a8[0] = 0;
  uVar9 = recovered_100011b4(pcVar14);
  if (0xffffffffffffff4b < uVar9 - 0xb5) {
    recovered_10005aa4(context,auStack_88);
    recovered_10005aa4(context,auStack_4d0);
    recovered_10004eec(auStack_4f0,auStack_4d0,str_10006e0f + 0x11);
    recovered_10000ee0(&uStack_3b0,0,0x200);
    recovered_10000ee0(&uStack_4b0,0,0x100);
    iVar8 = (int)uVar9 + 3;
    uStack_4b0 = (uint)CONCAT11((char)iVar8,(char)((uint)iVar8 >> 8));
    uStack_4ac = CONCAT11(PF_PART1(uStack_4ac, 1),(char)uVar9);
    recovered_10000cf4((void *)((long)&uStack_4ac + 1),pcVar14,uVar9);
    uVar10 = recovered_10005b48((long)&uStack_3b0,(long *)auStack_a8,0,&uStack_4b0,
                                (int)uVar9 + 5U & 0xffff);
    if ((int)uVar10 != 0) {
      uStack_4b0 = CONCAT13(PF_PART1(uStack_4b0, 3),0x40302);
      uVar10 = recovered_10005b48((long)&uStack_3b0,(long *)auStack_a8,0x2b,&uStack_4b0,3);
      if ((int)uVar10 != 0) {
        uStack_4b0 = (uint)DAT_10006dc0;
        uVar10 = recovered_10005b48((long)&uStack_3b0,(long *)auStack_a8,10,&uStack_4b0,4);
        if ((int)uVar10 != 0) {
          uStack_4b0 = CONCAT22(PF_PART2(uStack_4b0, 2),0xc00);
          for (lVar11 = 0; lVar11 != 0xc; lVar11 = lVar11 + 2) {
            *(ushort *)(auStack_4d0 + lVar11 + 0x22) =
                 *(ushort *)((long)&DAT_10006e40 + lVar11) >> 8 |
                 *(ushort *)((long)&DAT_10006e40 + lVar11) << 8;
          }
          uVar9 = recovered_10005b48((long)&uStack_3b0,(long *)auStack_a8,0xd,&uStack_4b0,0xe);
          if ((uVar9 & 1) != 0) {
            uStack_4b0 = (uint)DAT_10006dc8;
            uStack_4ac = 0x2000;
            recovered_10000cf4(auStack_4aa,auStack_4f0,0x20);
            uVar9 = recovered_10005b48((long)&uStack_3b0,(long *)auStack_a8,0x33,&uStack_4b0,0x26);
            if ((uVar9 & 1) != 0) {
              uStack_730 = 1;
              uStack_72c = 0x303;
              recovered_10000cf4(auStack_72a,auStack_88,0x20);
              uStack_70a = (undefined4)DAT_10006dd0;
              uStack_706 = 0x103;
              uStack_704 = 0;
              uStack_703 = (ushort)(auStack_a8[0] >> 8) & 0xff |
                           (ushort)(((uint)auStack_a8[0] & 0xff00ff) << 8);
              recovered_10000cf4(auStack_701,&uStack_3b0,auStack_a8[0]);
              uVar13 = auStack_a8[0];
              iVar8 = (int)auStack_a8[0] + 0x2b;
              uStack_72f = (undefined1)((uint)iVar8 >> 0x10);
              uStack_72e = (undefined1)((uint)iVar8 >> 8);
              uStack_72d = (undefined1)iVar8;
              uVar9 = auStack_a8[0] + 0x2f;
              recovered_10004c28((undefined8 *)((long)context + 0xa8));
              recovered_10004c4c((void *)((long)context + 0xa8),&uStack_730,uVar9);
              uVar16 = uStack_3b0;
              if (0x205 < uVar13 + 0x34) {
                return 0;
              }
              PF_PART3(uStack_3b0, 5) = SUB83(uVar16,5);
              PF_PART5(uStack_3b0, 0) = CONCAT14((char)uVar9,CONCAT13((char)(uVar9 >> 8),0x10316));
              recovered_10000cf4((void *)((long)&uStack_3b0 + 5),&uStack_730,uVar9);
              uVar10 = recovered_10005bec(context,(long)&uStack_3b0,uVar13 + 0x34,error,capacity);
              if ((int)uVar10 == 0) {
                return 0;
              }
              data = (char *)recovered_10004e58(0x4100);
              if (data != (char *)0x0) {
                uStack_3b0 = uStack_3b0 & 0xffffffffffffff00;
                uVar10 = recovered_10005724(context,(void *)0x0,(byte *)&uStack_3b0,(long)data,
                                            0x4100,&uStack_738,error,capacity);
                if ((int)uVar10 == 0) goto LAB_1000465c;
                if ((byte)uStack_3b0 == 0x16) {
                  if ((uStack_738 < 4) || (*data != '\x02')) {
                    pcVar15 = str_100071ea;
                  }
                  else {
                    uVar5 = (uint)(byte)data[1] << 0x10 | (uint)(byte)data[2] << 8 |
                            (uint)(byte)data[3];
                    if (uVar5 < 0x26 || uStack_738 < uVar5 + 4) {
                      pcVar15 = str_10007203;
                    }
                    else if ((data[4] == '\x03') && (data[5] == '\x03')) {
                      uVar9 = (ulong)(byte)data[0x26];
                      if (uStack_738 < uVar9 + 0x2b) {
                        pcVar15 = str_10007239;
                      }
                      else if ((ushort)(*(ushort *)(data + uVar9 + 0x27) >> 8 |
                                       *(ushort *)(data + uVar9 + 0x27) << 8) == 0x1303) {
                        if ((data[uVar9 + 0x29] == '\0') &&
                           (uVar16 = uVar9 + 0x2c, uVar16 <= uStack_738)) {
                          uVar9 = ((uint)(*(ushort *)(data + uVar9 + 0x2a) >> 8) |
                                  (*(ushort *)(data + uVar9 + 0x2a) & 0xff00ff) << 8) + uVar16;
                          if (uStack_738 < uVar9) {
                            pcVar15 = str_10007298;
                          }
                          else {
                            bVar7 = false;
                            bVar6 = 0;
                            pcVar15 = str_100072b1;
                            while (uVar13 = uVar16 + 4, uVar13 <= uVar9) {
                              puVar2 = (ushort *)(data + uVar16);
                              uVar4 = puVar2[1];
                              uVar5 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
                              uVar16 = uVar13 + uVar5;
                              if (uVar9 < uVar16) goto LAB_10004658;
                              uVar4 = *puVar2;
                              uVar4 = uVar4 >> 8 | uVar4 << 8;
                              if (uVar4 == 0x2b && 1 < uVar5) {
                                bVar7 = (ushort)(*(ushort *)(data + uVar13) >> 8 |
                                                *(ushort *)(data + uVar13) << 8) == 0x304;
                              }
                              else if ((((uVar4 == 0x33) && (0x23 < uVar5)) &&
                                       (puVar2 = (ushort *)(data + uVar13),
                                       (ushort)(*puVar2 >> 8 | *puVar2 << 8) == 0x1d)) &&
                                      ((ushort)(puVar2[1] >> 8 | puVar2[1] << 8) == 0x20)) {
                                recovered_10000cf4(auStack_510,puVar2 + 2,0x20);
                                bVar6 = 1;
                              }
                            }
                            if ((bool)(bVar7 & bVar6)) {
                              recovered_10004c4c((void *)((long)context + 0xa8),data,uStack_738);
                              recovered_10004ea4(data);
                              recovered_10004eec(auStack_530,auStack_4d0,auStack_510);
                              recovered_10000ee0(auStack_758,0,0x20);
                              recovered_10005364(auStack_758,auStack_758,auStack_778);
                              recovered_100053a8(auStack_778,str_10007154,(void *)0x0,auStack_798);
                              recovered_10005364(auStack_798,auStack_530,auStack_7b8);
                              recovered_10005404((long)context,auStack_7d8);
                              recovered_100053a8(auStack_7b8,str_1000715c,auStack_7d8,auStack_7f8);
                              recovered_100053a8(auStack_7b8,str_10007169,auStack_7d8,auStack_818);
                              recovered_10005444((void *)((long)context + 0x118),auStack_7f8);
                              recovered_10005444((void *)((long)context + 0x150),auStack_818);
                              *(undefined1 *)((long)context + 0x21c) = 1;
                              source = (void *)recovered_10004e58(0x4100);
                              data = (char *)recovered_10004e58(0x8000);
                              if ((source != (void *)0x0) && (data != (char *)0x0)) {
                                bVar7 = false;
                                uVar9 = 0;
                                pcStack_820 = str_10007301;
                                while( true ) {
                                  if (bVar7) {
                                    recovered_10005404((long)context,abStack_c8);
                                    recovered_100053a8(auStack_7b8,str_10007154,(void *)0x0,
                                                       auStack_e8);
                                    recovered_10000ee0(auStack_168,0,0x20);
                                    recovered_10005364(auStack_e8,auStack_168,auStack_108);
                                    recovered_100053a8(auStack_108,str_10007375,abStack_c8,
                                                       auStack_128);
                                    recovered_100053a8(auStack_108,str_10007382,abStack_c8,
                                                       auStack_148);
                                    recovered_10005444((void *)((long)context + 0x188),auStack_128);
                                    recovered_10005444((void *)((long)context + 0x1c0),auStack_148);
                                    *(undefined1 *)((long)context + 0x21d) = 1;
                                    uStack_3b0 = CONCAT44(PF_PART4(uStack_3b0, 4),(int)DAT_10006dd8);
                                    recovered_10005404((long)context,auStack_188);
                                    recovered_10006190(auStack_7f8,str_1000734b,(void *)0x0,0,
                                                       auStack_1a8,0x20);
                                    recovered_10005f60(auStack_1a8,auStack_188,
                                                       (void *)((long)&uStack_3b0 + 4));
                                    uVar10 = recovered_10005510(context,(void *)((long)context +
                                                                                0x118),0x16,
                                                                &uStack_3b0,0x24,error,capacity);
                                    if ((int)uVar10 != 0) {
                                      recovered_10004c4c((void *)((long)context + 0xa8),&uStack_3b0,
                                                         0x24);
                                    }
                                    recovered_10004ea4(source);
                                    recovered_10004ea4(data);
                                    if ((int)uVar10 == 0) {
                                      return 0;
                                    }
                                    if ((*(code **)((long)context + 0x20) == (code *)0x0) ||
                                       (iVar8 = (**(code **)((long)context + 0x20))
                                                          (*(undefined8 *)context,pcVar14,
                                                           (long)context + 0x1f8,
                                                           *(undefined1 *)((long)context + 0x21e),
                                                           error,capacity), iVar8 != 0)) {
                                      return 1;
                                    }
                                    return 0;
                                  }
                                  abStack_c8[0] = 0;
                                  uStack_3b0 = 0;
                                  uVar10 = recovered_10005724(context,(void *)((long)context + 0x150
                                                                              ),abStack_c8,
                                                              (long)source,0x4100,&uStack_3b0,error,
                                                              capacity);
                                  if ((int)uVar10 == 0) break;
                                  if (abStack_c8[0] == 0x16) {
                                    if (0x8000 - uVar9 < uStack_3b0) {
                                      pcStack_820 = str_10007317;
                                      goto LAB_10004c10;
                                    }
                                    recovered_10000cf4(data + uVar9,source,uStack_3b0);
                                    uVar9 = uStack_3b0 + uVar9;
                                    for (lVar11 = 0; lVar11 + 4U <= uVar9;
                                        lVar11 = uVar16 + 4 + lVar11) {
                                      pcVar15 = data + lVar11;
                                      uVar5 = (uint)(byte)pcVar15[1] << 0x10 |
                                              (uint)(byte)pcVar15[2] << 8 | (uint)(byte)pcVar15[3];
                                      uVar16 = (ulong)uVar5;
                                      if (uVar9 < lVar11 + 4U + uVar16) break;
                                      if (*pcVar15 == '\x14') {
                                        if (uVar5 != 0x20) {
                                          pcStack_820 = str_1000732f;
                                          goto LAB_10004c10;
                                        }
                                        recovered_10005404((long)context,&uStack_4b0);
                                        recovered_10006190(auStack_818,str_1000734b,(void *)0x0,0,
                                                           auStack_88,0x20);
                                        recovered_10005f60(auStack_88,&uStack_4b0,auStack_a8);
                                        bVar7 = recovered_1000635c((byte *)auStack_a8,
                                                                   (byte *)(pcVar15 + 4),0x20);
                                        if (!bVar7) {
                                          pcStack_820 = str_10007354;
                                          goto LAB_10004c10;
                                        }
                                        recovered_10004c4c((void *)((long)context + 0xa8),pcVar15,
                                                           0x24);
                                        lVar11 = lVar11 + 0x24;
                                        bVar7 = true;
                                        goto LAB_10004a6c;
                                      }
                                      if (*pcVar15 == '\v' && 6 < uVar5) {
                                        pbVar12 = (byte *)(pcVar15 + 4);
                                        uVar13 = (ulong)*pbVar12;
                                        if ((uVar13 + 4 <= uVar16) &&
                                           (uVar1 = uVar13 + 7,
                                           ((pbVar12[uVar13 + 1] != 0 || pbVar12[uVar13 + 2] != 0)
                                           || pbVar12[uVar13 + 3] != 0) && uVar1 <= uVar16)) {
                                          pbVar3 = pbVar12 + uVar13 + 4;
                                          uVar5 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 |
                                                  (uint)pbVar3[2];
                                          if (uVar5 != 0 && uVar1 + uVar5 <= uVar16) {
                                            recovered_1000613c(pbVar12 + uVar1,(ulong)uVar5,
                                                               (void *)((long)context + 0x1f8));
                                            *(undefined1 *)((long)context + 0x21e) = 1;
                                          }
                                        }
                                      }
                                      recovered_10004c4c((void *)((long)context + 0xa8),pcVar15,
                                                         uVar16 + 4);
                                    }
                                    bVar7 = false;
LAB_10004a6c:
                                    if ((lVar11 != 0) && (uVar9 = uVar9 - lVar11, uVar9 != 0)) {
                                      recovered_10000dcc(data,data + lVar11,uVar9);
                                    }
                                  }
                                  else {
                                    if (abStack_c8[0] == 0x15) {
LAB_10004c10:
                                      pf_varargs_1000240c_0(error,capacity,pcStack_820);
                                      break;
                                    }
                                    bVar7 = false;
                                  }
                                }
                                recovered_10004ea4(source);
                                goto LAB_1000465c;
                              }
                              if (source != (void *)0x0) {
                                recovered_10004ea4(source);
                              }
                              if (data != (char *)0x0) {
                                recovered_10004ea4(data);
                              }
                              goto LAB_10004aa8;
                            }
                            pcVar15 = str_100072c7;
                          }
                        }
                        else {
                          pcVar15 = str_1000727f;
                        }
                      }
                      else {
                        pcVar15 = str_10007253;
                      }
                    }
                    else {
                      pcVar15 = str_1000721d;
                    }
                  }
                }
                else {
                  pcVar15 = str_100071cc;
                }
LAB_10004658:
                pf_varargs_1000240c_0(error,capacity,pcVar15);
LAB_1000465c:
                recovered_10004ea4(data);
                return 0;
              }
LAB_10004aa8:
              pcVar14 = str_10007082;
              goto LAB_10004450;
            }
          }
        }
      }
    }
  }
  pcVar14 = str_10007137;
LAB_10004450:
  pf_varargs_1000240c_0(error,capacity,pcVar14);
  return 0;
}

#undef DAT_10006dc0
#undef DAT_10006dc8
#undef DAT_10006dd0
#undef DAT_10006dd8
#undef DAT_10006e40
#undef str_10006e0f
#undef str_10007082
#undef str_1000711c
#undef str_10007137
#undef str_10007154
#undef str_1000715c
#undef str_10007169
#undef str_100071cc
#undef str_100071ea
#undef str_10007203
#undef str_1000721d
#undef str_10007239
#undef str_10007253
#undef str_1000727f
#undef str_10007298
#undef str_100072b1
#undef str_100072c7
#undef str_10007301
#undef str_10007317
#undef str_1000732f
#undef str_1000734b
#undef str_10007354
#undef str_10007375
#undef str_10007382
#undef uStack_706
#undef uStack_704
#undef uStack_703
#undef auStack_701
#undef auStack_530
#undef auStack_510
#undef auStack_4f0
#undef auStack_4d0
#undef uStack_4b0
#undef uStack_4ac
#undef auStack_4aa
#undef uStack_3b0
#undef auStack_1a8
#undef auStack_188
#undef auStack_168
#undef auStack_148
#undef auStack_128
#undef auStack_108
#undef auStack_e8
#undef abStack_c8
#undef auStack_a8
#undef auStack_88
#undef pcStack_820
#undef auStack_818
#undef auStack_7f8
#undef auStack_7d8
#undef auStack_7b8
#undef auStack_798
#undef auStack_778
#undef auStack_758
#undef uStack_738
#undef uStack_730
#undef uStack_72f
#undef uStack_72e
#undef uStack_72d
#undef uStack_72c
#undef auStack_72a
#undef uStack_70a

#undef DAT_10006df0
#define DAT_10006df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_10006e00
#define DAT_10006e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef UNK_10006df8
#define UNK_10006df8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef UNK_10006e08
#define UNK_10006e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef _DAT_10006df0
#define _DAT_10006df0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10006e00
#define _DAT_10006e00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef uRam0000000010006df8
#define uRam0000000010006df8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef uRam0000000010006e08
#define uRam0000000010006e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x154U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004c28(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar3 = uRam0000000010006e08;
  uVar2 = _DAT_10006e00;
  uVar1 = _DAT_10006df0;
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = uRam0000000010006df8;
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  return;
}

#undef DAT_10006df0
#undef DAT_10006e00
#undef UNK_10006df8
#undef UNK_10006e08
#undef _DAT_10006df0
#undef _DAT_10006e00
#undef uRam0000000010006df8
#undef uRam0000000010006e08

#define auStack_168 (*(uint (*)[66])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c4c
 */

void recovered_10004c4c(void *context,void *data,ulong size)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong count;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;

  if ((context != (void *)0x0) && ((data != (void *)0x0 || (size == 0)))) {
    *(ulong *)((long)context + 0x20) = *(long *)((long)context + 0x20) + size;
    while (size != 0) {
      uVar11 = (ulong)(0x40 - *(uint *)((long)context + 0x68));
      count = size;
      if (uVar11 <= size) {
        count = uVar11;
      }
      recovered_10000cf4((void *)((long)context + (ulong)*(uint *)((long)context + 0x68) + 0x28),
                         data,count);
      iVar1 = *(int *)((long)context + 0x68) + (int)count;
      *(int *)((long)context + 0x68) = iVar1;
      data = (void *)((long)data + count);
      size = size - count;
      if (iVar1 == 0x40) {
        for (lVar10 = 0; lVar10 != 0x40; lVar10 = lVar10 + 4) {
          uVar2 = *(uint *)((long)context + lVar10 + 0x28);
          uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          *(uint *)((long)auStack_168 + lVar10) = uVar2 >> 0x10 | uVar2 << 0x10;
        }
        for (lVar10 = 0; lVar10 != 0xc0; lVar10 = lVar10 + 4) {
          uVar2 = *(uint *)((long)auStack_168 + lVar10 + 4);
          uVar3 = *(uint *)((long)auStack_168 + lVar10 + 0x38);
          *(uint *)((long)auStack_168 + lVar10 + 0x40) =
               ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3) +
               *(int *)((long)auStack_168 + lVar10) + *(int *)((long)auStack_168 + lVar10 + 0x24) +
               ((uVar3 >> 0x11 | uVar3 << 0xf) ^ (uVar3 >> 0x13 | uVar3 << 0xd) ^ uVar3 >> 10);
        }
        uVar3 = *(uint *)context;
        uVar9 = *(uint *)((long)context + 4);
        uVar8 = *(uint *)((long)context + 8);
        uVar4 = *(uint *)((long)context + 0xc);
        uVar2 = *(uint *)((long)context + 0x10);
        uVar6 = *(uint *)((long)context + 0x14);
        uVar13 = *(uint *)((long)context + 0x18);
        uVar5 = *(uint *)((long)context + 0x1c);
        for (lVar10 = 0; uVar12 = uVar13, uVar13 = uVar6, uVar6 = uVar2, uVar7 = uVar8,
            uVar8 = uVar9, uVar9 = uVar3, lVar10 != 0x100; lVar10 = lVar10 + 4) {
          iVar1 = (uVar6 & uVar13 | uVar12 & (uVar6 ^ 0xffffffff)) + uVar5 +
                  ((uVar6 >> 6 | uVar6 << 0x1a) ^ (uVar6 >> 0xb | uVar6 << 0x15) ^
                  (uVar6 >> 0x19 | uVar6 << 7)) +
                  *(int *)(lVar10 + ((uintptr_t)pf_module_state + 0x198U)) + *(int *)((long)auStack_168 + lVar10);
          uVar2 = iVar1 + uVar4;
          uVar3 = ((uVar9 >> 2 | uVar9 << 0x1e) ^ (uVar9 >> 0xd | uVar9 << 0x13) ^
                  (uVar9 >> 0x16 | uVar9 << 10)) + (uVar9 & (uVar8 ^ uVar7) ^ uVar8 & uVar7) + iVar1
          ;
          uVar4 = uVar7;
          uVar5 = uVar12;
        }
        *(uint *)context = uVar9 + *(uint *)context;
        *(uint *)((long)context + 4) = uVar8 + *(uint *)((long)context + 4);
        *(uint *)((long)context + 8) = uVar7 + *(uint *)((long)context + 8);
        *(uint *)((long)context + 0xc) = uVar4 + *(uint *)((long)context + 0xc);
        *(uint *)((long)context + 0x10) = uVar6 + *(uint *)((long)context + 0x10);
        *(uint *)((long)context + 0x14) = uVar13 + *(uint *)((long)context + 0x14);
        *(uint *)((long)context + 0x18) = uVar12 + *(uint *)((long)context + 0x18);
        *(uint *)((long)context + 0x1c) = uVar5 + *(uint *)((long)context + 0x1c);
        *(undefined4 *)((long)context + 0x68) = 0;
      }
    }
  }
  return;
}

#undef auStack_168

#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004e58(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005a58(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201084c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004ea4(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10005a58(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered X25519 over the reference's seventeen radix-2^15 limbs.
 * Pooka's Free Software License. */
typedef struct {uint32_t limb[17];} pf_tls_field;
static pf_tls_field pf_tls_reduce(uint64_t value[17]){
 for(unsigned pass=0;pass<4;++pass){
  uint64_t carry=0;
  for(unsigned i=0;i<17;++i){uint64_t word=value[i]+carry;value[i]=word&32767;carry=word>>15;}
  value[0]+=19*carry;
 }
 pf_tls_field out;
 for(unsigned i=0;i<17;++i)out.limb[i]=(uint32_t)value[i];
 unsigned top=1;for(unsigned i=1;i<17;++i)top&=out.limb[i]==32767;
 if(top&&out.limb[0]>=32749){out.limb[0]-=32749;for(unsigned i=1;i<17;++i)out.limb[i]=0;}
 return out;
}
static pf_tls_field pf_tls_add(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_sub(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+2*(i?32767:32749)-b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_mul(pf_tls_field a,pf_tls_field b){
 uint64_t words[34]={0};
 for(unsigned i=0;i<17;++i)for(unsigned j=0;j<17;++j)words[i+j]+=(uint64_t)a.limb[i]*b.limb[j];
 for(unsigned i=33;i>16;--i)words[i-17]+=19*words[i];
 return pf_tls_reduce(words);
}
static void pf_tls_swap(pf_tls_field *a,pf_tls_field *b,unsigned bit){
 uint32_t mask=0U-bit;for(unsigned i=0;i<17;++i){uint32_t change=mask&(a->limb[i]^b->limb[i]);a->limb[i]^=change;b->limb[i]^=change;}
}
void recovered_10004eec(void *output,void *scalar,void *point){
 if(!output||!scalar||!point)return;
 uint8_t key[32];for(unsigned i=0;i<32;++i)key[i]=((uint8_t *)scalar)[i];key[0]&=248;key[31]=(key[31]&127)|64;
 pf_tls_field x1={{0}},x2={{1}},z2={{0}},x3,z3={{1}},a24={{121665&32767,121665>>15}};
 for(unsigned i=0;i<255;++i)x1.limb[i/15]|=(uint32_t)((((uint8_t *)point)[i/8]>>(i&7))&1)<<(i%15);
 x3=x1;unsigned previous=0;
 for(int i=254;i>=0;--i){
  unsigned bit=(key[i/8]>>(i&7))&1;pf_tls_swap(&x2,&x3,previous^bit);pf_tls_swap(&z2,&z3,previous^bit);previous=bit;
  pf_tls_field a=pf_tls_add(x2,z2),b=pf_tls_sub(x2,z2),aa=pf_tls_mul(a,a),bb=pf_tls_mul(b,b),e=pf_tls_sub(aa,bb);
  pf_tls_field c=pf_tls_add(x3,z3),d=pf_tls_sub(x3,z3),da=pf_tls_mul(d,a),cb=pf_tls_mul(c,b);
  pf_tls_field sum=pf_tls_add(da,cb),difference=pf_tls_sub(da,cb);
  x3=pf_tls_mul(sum,sum);z3=pf_tls_mul(x1,pf_tls_mul(difference,difference));x2=pf_tls_mul(aa,bb);z2=pf_tls_mul(e,pf_tls_add(aa,pf_tls_mul(a24,e)));
 }
 pf_tls_swap(&x2,&x3,previous);pf_tls_swap(&z2,&z3,previous);
 pf_tls_field inverse={{1}};
 for(int bit=254;bit>=0;--bit){inverse=pf_tls_mul(inverse,inverse);if(bit!=4&&bit!=2)inverse=pf_tls_mul(inverse,z2);}
 pf_tls_field result=pf_tls_mul(x2,inverse);
 for(unsigned i=0;i<32;++i)((uint8_t *)output)[i]=0;
 for(unsigned i=0;i<255;++i)((uint8_t *)output)[i/8]|=(uint8_t)(((result.limb[i/15]>>(i%15))&1)<<(i&7));
}


#define auStack_50 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005364
 */

void recovered_10005364(void *salt,void *input,void *output)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    recovered_10000ee0(auStack_50,0,0x20);
    salt = auStack_50;
  }
  recovered_10005f60(salt,input,output);
  return;
}

#undef auStack_50

#undef DAT_10006fe3
#define DAT_10006fe3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32fU)))
#define auStack_50 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053a8
 */

void recovered_100053a8(void *secret,char *label,void *hash,void *output)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};


  if (hash == (void *)0x0) {
    recovered_1000613c(&DAT_10006fe3,0,auStack_50);
    hash = auStack_50;
  }
  recovered_10006190(secret,label,hash,0x20,output,0x20);
  return;
}

#undef DAT_10006fe3
#undef auStack_50

#define auStack_90 (*(undefined1 (*)[112])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005404
 */

void recovered_10005404(long param_1,void *param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  if (param_2 != (void *)0x0) {
    recovered_10000cf4(auStack_90,(void *)(param_1 + 0xa8),0x70);
    recovered_1000608c(auStack_90,param_2);
  }
  return;
}

#undef auStack_90

#undef DAT_100072fa
#define DAT_100072fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x646U)))
#undef DAT_100072fe
#define DAT_100072fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005444
 */

void recovered_10005444(void *output,void *secret)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((output != (void *)0x0) && (secret != (void *)0x0)) {
    recovered_10000ee0(output,0,0x38);
    recovered_10006190(secret,&DAT_100072fa,(void *)0x0,0,output,0x20);
    recovered_10006190(secret,&DAT_100072fe,(void *)0x0,0,(void *)((long)output + 0x20),0xc);
    *(undefined8 *)((long)output + 0x30) = 0;
  }
  return;
}

#undef DAT_100072fa
#undef DAT_100072fe

#undef str_10007082
#define str_10007082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#undef str_10007176
#define str_10007176 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
#define auStack_7c (*(undefined1 (*)[16])(frame + 20))
#define auStack_6c (*(undefined1 (*)[12])(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b4
 */

int recovered_100054b4(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *key;
  ulong size_00;
  void *destination;
  undefined2 *associated;
  undefined8 uVar2;

  if (((context == (void *)0x0) || (*(char *)((long)context + 0x21d) != '\x01')) ||
     ((data == (void *)0x0 && (size != 0)))) {
    pf_varargs_1000240c_0(error,capacity,str_10007176);
    return 0;
  }
  key = (void *)((long)context + 0x188);
  if ((key != (void *)0x0) && ((data != (void *)0x0 || (size == 0)))) {
    associated = (undefined2 *)recovered_10004e58(size + 0x16);
    if (associated != (undefined2 *)0x0) {
      size_00 = size + 1;
      *associated = 0x317;
      *(undefined1 *)(associated + 1) = 3;
      iVar1 = (int)size + 0x11;
      *(char *)((long)associated + 3) = (char)((uint)iVar1 >> 8);
      *(char *)(associated + 2) = (char)iVar1;
      destination = (void *)((long)associated + 5);
      if (size != 0) {
        recovered_10000cf4(destination,data,size);
      }
      *(undefined1 *)((long)destination + size) = 0x17;
      recovered_10006398((long)key,auStack_6c);
      recovered_100063f8(key,auStack_6c,(long)destination,(long)destination,size_00);
      recovered_100064b4(key,auStack_6c,associated,destination,size_00,auStack_7c);
      recovered_10000cf4((void *)((long)destination + size_00),auStack_7c,0x10);
      *(long *)((long)context + 0x1b8) = *(long *)((long)context + 0x1b8) + 1;
      uVar2 = recovered_10005bec(context,(long)associated,size + 0x16,error,capacity);
      recovered_10004ea4(associated);
      return (int)uVar2;
    }
    pf_varargs_1000240c_0(error,capacity,str_10007082);
  }
  return 0;
}

#undef str_10007082
#undef str_10007176
#undef auStack_7c
#undef auStack_6c

#undef str_10007082
#define str_10007082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#define auStack_7c (*(undefined1 (*)[16])(frame + 20))
#define auStack_6c (*(undefined1 (*)[12])(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005510
 */

undefined8
recovered_10005510(undefined8 *param_1,void *param_2,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong size;
  void *destination;
  undefined2 *associated;
  undefined8 uVar2;

  if ((param_2 != (void *)0x0) && ((param_4 != (void *)0x0 || (param_5 == 0)))) {
    associated = (undefined2 *)recovered_10004e58(param_5 + 0x16);
    if (associated != (undefined2 *)0x0) {
      size = param_5 + 1;
      *associated = 0x317;
      *(undefined1 *)(associated + 1) = 3;
      iVar1 = (int)param_5 + 0x11;
      *(char *)((long)associated + 3) = (char)((uint)iVar1 >> 8);
      *(char *)(associated + 2) = (char)iVar1;
      destination = (void *)((long)associated + 5);
      if (param_5 != 0) {
        recovered_10000cf4(destination,param_4,param_5);
      }
      *(undefined1 *)((long)destination + param_5) = param_3;
      recovered_10006398((long)param_2,auStack_6c);
      recovered_100063f8(param_2,auStack_6c,(long)destination,(long)destination,size);
      recovered_100064b4(param_2,auStack_6c,associated,destination,size,auStack_7c);
      recovered_10000cf4((void *)((long)destination + size),auStack_7c,0x10);
      *(long *)((long)param_2 + 0x30) = *(long *)((long)param_2 + 0x30) + 1;
      uVar2 = recovered_10005bec(param_1,(long)associated,param_5 + 0x16,param_6,param_7);
      recovered_10004ea4(associated);
      return uVar2;
    }
    pf_varargs_1000240c_0(param_6,param_7,str_10007082);
  }
  return 0;
}

#undef str_10007082
#undef auStack_7c
#undef auStack_6c

#undef str_10007176
#define str_10007176 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
#undef str_10007199
#define str_10007199 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#define local_50 (*(ulong *)(frame + 16))
#define local_41 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005654
 */

int recovered_10005654(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  char *format;

  if (read != (ulong *)0x0) {
    *read = 0;
  }
  if ((((context == (void *)0x0) || (size == 0)) || (data == (void *)0x0)) ||
     ((*(byte *)((long)context + 0x21d) & 1) == 0)) {
    format = str_10007176;
  }
  else {
    do {
      local_41 = 0;
      local_50 = 0;
      uVar1 = recovered_10005724(context,(void *)((long)context + 0x1c0),&local_41,(long)data,size,
                                 &local_50,error,capacity);
      if ((int)uVar1 == 0) {
        return 0;
      }
      if (local_41 == 0x17) {
        if (read != (ulong *)0x0) {
          *read = local_50;
        }
        return 1;
      }
    } while (local_41 != 0x15);
    format = str_10007199;
  }
  pf_varargs_1000240c_0(error,capacity,format);
  return 0;
}

#undef str_10007176
#undef str_10007199
#undef local_50
#undef local_41

#undef str_10007082
#define str_10007082 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#undef str_1000738f
#define str_1000738f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dbU)))
#undef str_100073a9
#define str_100073a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f5U)))
#undef str_100073c8
#define str_100073c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x714U)))
#undef str_100073f5
#define str_100073f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x741U)))
#undef str_10007453
#define str_10007453 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79fU)))
#undef str_10007468
#define str_10007468 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b4U)))
#undef str_10007489
#define str_10007489 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d5U)))
#define bStack_81 (*(byte *)(frame + 63))
#define bStack_80 (*(byte *)(frame + 64))
#define bStack_7f (*(byte *)(frame + 65))
#define uStack_7e (*(ushort *)(frame + 66))
#define abStack_7c (*(byte (*)[16])(frame + 68))
#define auStack_6c (*(undefined1 (*)[12])(frame + 84))
#define in_stack_ffffffffffffff50 (*(ulong *)(frame + 16))
#define in_stack_ffffffffffffff58 (*(ulong *)(frame + 24))
#define in_stack_ffffffffffffff60 (*(ulong *)(frame + 32))
#define in_stack_ffffffffffffff68 (*(ulonglong *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005724
 */

undefined8
recovered_10005724(undefined8 *param_1,void *param_2,byte *param_3,long param_4,ulong param_5,
                  ulong *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte *ciphertext;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulonglong vararg3;

  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 == 0) {
    return 0;
  }
LAB_1000577c:
  uVar4 = recovered_10006b84(param_1,(long)&bStack_81,5,param_7,param_8);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (((uint)(uStack_7e >> 8) | (uStack_7e & 0xff00ff) << 8) - 0x4801 < 0xffffb800) {
    pcVar6 = str_1000738f;
  }
  else {
    uVar2 = (uint)(uStack_7e >> 8) | (uStack_7e & 0xff00ff) << 8;
    vararg3 = (ulonglong)uVar2;
    if (param_2 != (void *)0x0) {
      ciphertext = (byte *)recovered_10004e58(vararg3);
      if (ciphertext == (byte *)0x0) {
        pcVar6 = str_10007082;
        goto LAB_100059bc;
      }
      uVar5 = recovered_10006b84(param_1,(long)ciphertext,vararg3,param_7,param_8);
      if ((uVar5 & 1) == 0) goto LAB_10014984;
      uVar5 = (ulong)bStack_81;
      if (bStack_81 == 0x14) {
        recovered_10004ea4(ciphertext);
      }
      else {
        if (bStack_81 != 0x17) {
          if (bStack_81 == 0x15) {
            uVar5 = (ulong)*ciphertext;
            if (uVar2 < 2) {
              in_stack_ffffffffffffff58 = 0;
            }
            else {
              in_stack_ffffffffffffff58 = (ulong)ciphertext[1];
            }
            pcVar6 = str_100073c8;
            vararg3 = in_stack_ffffffffffffff68;
          }
          else {
            in_stack_ffffffffffffff58 = (ulong)bStack_80;
            in_stack_ffffffffffffff60 = (ulong)bStack_7f;
            pcVar6 = str_100073f5;
          }
          goto LAB_100059e4;
        }
        if (param_6 != (ulong *)0x0) {
          *param_6 = 0;
        }
        if (param_3 != (byte *)0x0) {
          *param_3 = 0;
        }
        if (uVar2 < 0x10) goto LAB_10014984;
        uVar5 = vararg3 - 0x10;
        if (param_5 < uVar5) {
          pcVar6 = str_10007453;
          uVar5 = in_stack_ffffffffffffff50;
          vararg3 = in_stack_ffffffffffffff68;
LAB_100059e4:
          pf_varargs_1000240c_4
                    (param_7,param_8,pcVar6,uVar5,in_stack_ffffffffffffff58,
                     in_stack_ffffffffffffff60,vararg3);
LAB_10014984:
          recovered_10004ea4(ciphertext);
          return 0;
        }
        recovered_10006398((long)param_2,auStack_6c);
        recovered_100064b4(param_2,auStack_6c,&bStack_81,ciphertext,uVar5,abStack_7c);
        bVar3 = recovered_1000635c(abStack_7c,ciphertext + uVar5,0x10);
        if (!bVar3) {
          pcVar6 = str_10007468;
          uVar5 = in_stack_ffffffffffffff50;
          vararg3 = in_stack_ffffffffffffff68;
          goto LAB_100059e4;
        }
        recovered_100063f8(param_2,auStack_6c,(long)ciphertext,param_4,uVar5);
        *(long *)((long)param_2 + 0x30) = *(long *)((long)param_2 + 0x30) + 1;
        for (uVar5 = vararg3 - 0x11; uVar5 != 0xffffffffffffffff; uVar5 = uVar5 - 1) {
          bVar1 = *(byte *)(param_4 + uVar5);
          if (bVar1 != 0) {
            if ((bVar1 & 0xfc) != 0x14) {
              pcVar6 = str_10007489;
              uVar5 = (ulong)bVar1;
              vararg3 = in_stack_ffffffffffffff68;
              goto LAB_100059e4;
            }
            if (param_3 != (byte *)0x0) {
              *param_3 = bVar1;
            }
            if (param_6 != (ulong *)0x0) {
              *param_6 = uVar5;
            }
            break;
          }
        }
        recovered_10004ea4(ciphertext);
        if (param_3 == (byte *)0x0) {
          return 1;
        }
        if (param_6 == (ulong *)0x0) {
          return 1;
        }
        if (*param_3 != 0) {
          return 1;
        }
        if (*param_6 != 0) {
          return 1;
        }
      }
      goto LAB_1000577c;
    }
    if (vararg3 <= param_5) {
      uVar4 = recovered_10006b84(param_1,param_4,vararg3,param_7,param_8);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (bStack_81 != 0x14) {
        if (bStack_81 != 0x15) {
          if (param_3 != (byte *)0x0) {
            *param_3 = bStack_81;
          }
          if (param_6 != (ulong *)0x0) {
            *param_6 = vararg3;
          }
          return 1;
        }
        in_stack_ffffffffffffff50 = (ulong)*(byte *)param_4;
        if (uVar2 < 2) {
          in_stack_ffffffffffffff58 = 0;
        }
        else {
          in_stack_ffffffffffffff58 = (ulong)*(byte *)(param_4 + 1);
        }
        pcVar6 = str_100073c8;
        goto LAB_100059bc;
      }
      goto LAB_1000577c;
    }
    pcVar6 = str_100073a9;
  }
LAB_100059bc:
  pf_varargs_1000240c_2(param_7,param_8,pcVar6,in_stack_ffffffffffffff50,in_stack_ffffffffffffff58);
  return 0;
}

#undef str_10007082
#undef str_1000738f
#undef str_100073a9
#undef str_100073c8
#undef str_100073f5
#undef str_10007453
#undef str_10007468
#undef str_10007489
#undef bStack_81
#undef bStack_80
#undef bStack_7f
#undef uStack_7e
#undef abStack_7c
#undef auStack_6c
#undef in_stack_ffffffffffffff50
#undef in_stack_ffffffffffffff58
#undef in_stack_ffffffffffffff60
#undef in_stack_ffffffffffffff68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a10
 */

int recovered_10005a10(void *context,void *output)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 0;
  if ((context != (void *)0x0) && (output != (void *)0x0)) {
    if (*(char *)((long)context + 0x21e) == '\x01') {
      recovered_10000cf4(output,(void *)((long)context + 0x1f8),0x20);
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
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
 * Address: 0x10005a58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005a58(int param_1)

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

/* Native entropy callback and fallback state evolution; Pooka's Free Software License. */
void recovered_10005aa4(void *opaque,void *output){
 uintptr_t *context=(uintptr_t *)opaque;
 uint32_t date[6]={0},seed=0x574d544cU;
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]==0x50414d57U&&api[1]&&api[2]>=364&&api[90]&&((int (*)(void *))(uintptr_t)api[90])(date))
  seed^=date[3]*0x3c6ef35fU^date[2]^date[4]*0x19660dU;
 if(!output)return;
 uint32_t *stored=(uint32_t *)((uint8_t *)opaque+0x218);
 seed^=(uint32_t)(uintptr_t)opaque^*stored;
 if(!context[3]||!((unsigned char (*)(void *,void *,unsigned long))context[3])((void *)context[0],output,32)){
  for(unsigned i=0;i<32;++i){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;((uint8_t *)output)[i]=(uint8_t)(seed>>((i*8)&24));}
 }else{
  uint32_t folded=0;for(unsigned i=0;i<8;++i)folded^=((uint32_t *)output)[i];
  seed^=folded;
 }
 *stored=seed;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b48
 */

undefined8 recovered_10005b48(long param_1,long *param_2,uint param_3,void *param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;

  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if (*param_2 + (ulong)param_5 + 4 < 0x201) {
      *(ushort *)(param_1 + *param_2) =
           (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
      lVar3 = *param_2;
      *param_2 = lVar3 + 2;
      puVar1 = (undefined1 *)(param_1 + lVar3 + 2);
      *puVar1 = (char)(param_5 >> 8);
      puVar1[1] = (char)param_5;
      lVar3 = *param_2 + 2;
      *param_2 = lVar3;
      if ((param_4 != (void *)0x0) && (param_5 != 0)) {
        recovered_10000cf4((void *)(param_1 + lVar3),param_4,(ulong)param_5);
        lVar3 = *param_2;
      }
      *param_2 = lVar3 + (ulong)param_5;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


#undef str_100071aa
#define str_100071aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bec
 */

undefined8
recovered_10005bec(undefined8 *param_1,long param_2,long param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((code *)param_1[2] == (code *)0x0) || ((param_2 == 0 && (param_3 != 0)))) {
    pf_varargs_1000240c_0(param_4,param_5,str_100071aa);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10005c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[2])(*param_1);
  return uVar1;
}

#undef str_100071aa

#define auStack_130 (*(undefined1 (*)[32])(frame + 16))
#define auStack_110 (*(undefined1 (*)[112])(frame + 48))
#define auStack_a0 (*(undefined1 (*)[112])(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f60
 */

void recovered_10005f60(void *param_1,void *param_2,void *param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};


  recovered_10005fcc(auStack_a0,auStack_110,param_1);
  recovered_10004c4c(auStack_a0,param_2,0x20);
  recovered_1000608c(auStack_a0,auStack_130);
  recovered_10004c4c(auStack_110,auStack_130,0x20);
  recovered_1000608c(auStack_110,param_3);
  return;
}

#undef auStack_130
#undef auStack_110
#undef auStack_a0

#define local_f0 (*(byte (*)[192])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fcc
 */

void recovered_10005fcc(void *inner,void *outer,void *key)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  long lVar1;

  recovered_10000ee0(local_f0 + 0x80,0,0x40);
  if (key != (void *)0x0) {
    recovered_10000cf4(local_f0 + 0x80,key,0x20);
  }
  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 1) {
    local_f0[lVar1 + 0x40] = local_f0[lVar1 + 0x80] ^ 0x36;
    local_f0[lVar1] = local_f0[lVar1 + 0x80] ^ 0x5c;
  }
  recovered_10004c28(inner);
  recovered_10004c4c(inner,local_f0 + 0x40,0x40);
  recovered_10004c28(outer);
  recovered_10004c4c(outer,local_f0,0x40);
  return;
}

#undef local_f0

#undef DAT_10006fd4
#define DAT_10006fd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x320U)))
#undef DAT_100072f1
#define DAT_100072f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63dU)))
#define local_38 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000608c
 */

void recovered_1000608c(void *context,void *output)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  if ((context != (void *)0x0) && (output != (void *)0x0)) {
    uVar2 = *(long *)((long)context + 0x20) << 3;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    local_38 = uVar2 >> 0x20 | uVar2 << 0x20;
    recovered_10004c4c(context,&DAT_100072f1,1);
    while (*(int *)((long)context + 0x68) != 0x38) {
      recovered_10004c4c(context,&DAT_10006fd4,1);
    }
    recovered_10004c4c(context,&local_38,8);
    lVar4 = (long)output + 1;
    for (lVar3 = 0; lVar3 != 8; lVar3 = lVar3 + 1) {
      uVar1 = *(uint *)((long)context + lVar3 * 4);
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)(lVar4 + -1) = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar4 = lVar4 + 4;
    }
  }
  return;
}

#undef DAT_10006fd4
#undef DAT_100072f1
#undef local_38

#undef DAT_10006df0
#define DAT_10006df0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_10006e00
#define DAT_10006e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef UNK_10006df8
#define UNK_10006df8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef UNK_10006e08
#define UNK_10006e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef _DAT_10006df0
#define _DAT_10006df0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10006e00
#define _DAT_10006e00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef uRam0000000010006df8
#define uRam0000000010006df8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef uRam0000000010006e08
#define uRam0000000010006e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x154U)))
#define local_28 (*(undefined4 *)(frame + 120))
#define uStack_88 (*(undefined8 *)(frame + 24))
#define uStack_80 (*(undefined8 *)(frame + 32))
#define uStack_78 (*(undefined8 *)(frame + 40))
#define local_90 (*(undefined8 *)(frame + 16))
#define local_70 (*(undefined8 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000613c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000613c(void *param_1,ulong param_2,void *param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};


  uStack_88 = uRam0000000010006df8;
  local_90 = _DAT_10006df0;
  uStack_78 = uRam0000000010006e08;
  uStack_80 = _DAT_10006e00;
  local_70 = 0;
  local_28 = 0;
  recovered_10004c4c(&local_90,param_1,param_2);
  recovered_1000608c(&local_90,param_3);
  return;
}

#undef DAT_10006df0
#undef DAT_10006e00
#undef UNK_10006df8
#undef UNK_10006e08
#undef _DAT_10006df0
#undef _DAT_10006e00
#undef uRam0000000010006df8
#undef uRam0000000010006e08
#undef local_28
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef local_90
#undef local_70

#undef str_100072f3
#define str_100072f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63fU)))
#define auStack_20d (*(undefined1 (*)[125])(frame + 19))
#define local_210 (*(undefined1 *)(frame + 16))
#define auStack_190 (*(undefined1 (*)[32])(frame + 144))
#define local_20f (*(undefined1 *)(frame + 17))
#define auStack_170 (*(undefined1 (*)[112])(frame + 176))
#define local_20e (*(undefined1 *)(frame + 18))
#define auStack_100 (*(undefined1 (*)[119])(frame + 288))
#define bStack_89 (*(byte *)(frame + 407))
#define auStack_88 (*(undefined1 (*)[40])(frame + 408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006190
 */

void recovered_10006190(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong count;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;

  uVar2 = recovered_100011b4(str_100072f3);
  if ((((label != (char *)0x0) && (uVar3 = recovered_100011b4(label), label != (char *)0x0)) &&
      (secret != (void *)0x0)) && ((output != (void *)0x0 && (uVar3 + uVar2 < 0x100)))) {
    lVar1 = uVar3 + uVar2 + 3;
    uVar5 = lVar1 + 1U + context_length;
    if (uVar5 < 0x81) {
      local_210 = (undefined1)(output_length >> 8);
      local_20f = (undefined1)output_length;
      local_20e = (undefined1)(uVar3 + uVar2);
      recovered_10000cf4(auStack_20d,str_100072f3,uVar2);
      recovered_10000cf4(auStack_20d + uVar2,label,uVar3);
      auStack_20d[lVar1 + -3] = (char)context_length;
      uVar2 = lVar1 + 1U;
      if (context_length != 0) {
        recovered_10000cf4(auStack_20d + lVar1 + -2,context,context_length);
        uVar2 = uVar5;
      }
      uVar3 = 0;
      uVar5 = 0;
      bVar6 = true;
      bStack_89 = 1;
      do {
        count = output_length - uVar3;
        if (output_length < uVar3 || count == 0) {
          return;
        }
        recovered_10005fcc(auStack_100,auStack_170,secret);
        if (!bVar6) {
          recovered_10004c4c(auStack_100,auStack_88,uVar5);
        }
        recovered_10004c4c(auStack_100,&local_210,uVar2);
        recovered_10004c4c(auStack_100,&bStack_89,1);
        recovered_1000608c(auStack_100,auStack_190);
        recovered_10004c4c(auStack_170,auStack_190,0x20);
        recovered_1000608c(auStack_170,auStack_88);
        if (0x1f < count) {
          count = 0x20;
        }
        recovered_10000cf4((void *)((long)output + uVar3),auStack_88,count);
        bVar6 = false;
        uVar3 = count + uVar3;
        uVar4 = (uint)bStack_89;
        bStack_89 = (byte)(uVar4 + 1);
        uVar5 = 0x20;
      } while ((uVar4 + 1 >> 8 == 0) || (uVar5 = 0x20, output_length <= uVar3));
    }
  }
  return;
}

#undef str_100072f3
#undef auStack_20d
#undef local_210
#undef auStack_190
#undef local_20f
#undef auStack_170
#undef local_20e
#undef auStack_100
#undef bStack_89
#undef auStack_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000635c
 */

bool recovered_1000635c(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;

  bVar1 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    bVar2 = 0;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      bVar2 = *param_2 ^ *param_1 | bVar2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    bVar1 = bVar2 == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006398
 */

void recovered_10006398(long param_1,void *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;

  if (param_2 != (void *)0x0) {
    recovered_10000cf4(param_2,(void *)(param_1 + 0x20),0xc);
    pbVar2 = (byte *)((long)param_2 + 0xb);
    for (uVar1 = 0; uVar1 != 0x40; uVar1 = uVar1 + 8) {
      *pbVar2 = *pbVar2 ^ (byte)(*(ulong *)(param_1 + 0x30) >> (uVar1 & 0x3f));
      pbVar2 = pbVar2 + -1;
    }
  }
  return;
}


#define abStack_a0 (*(byte (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063f8
 */

void recovered_100063f8(void *param_1,void *param_2,long param_3,long param_4,ulong param_5)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint counter;
  ulong uVar6;

  counter = 1;
  for (uVar6 = 0; uVar1 = param_5 - uVar6, uVar6 <= param_5 && uVar1 != 0; uVar6 = uVar1 + uVar6) {
    if (0x3f < uVar1) {
      uVar1 = 0x40;
    }
    recovered_100068fc(param_1,counter,param_2,abStack_a0);
    pbVar2 = (byte *)(param_4 + uVar6);
    pbVar3 = (byte *)(param_3 + uVar6);
    pbVar4 = abStack_a0;
    for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar2 = *pbVar4 ^ *pbVar3;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    }
    counter = counter + 1;
  }
  return;
}

#undef abStack_a0

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_100064b4(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_100068fc(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_10000c20(total);
 if(!message){for(unsigned i=0;i<16;++i)((uint8_t *)output)[i]=0;return;}
 for(unsigned long i=0;i<total;++i)message[i]=0;
 for(unsigned i=0;i<5;++i)message[i]=((uint8_t *)associated)[i];
 for(unsigned long i=0;i<size;++i)message[16+i]=((uint8_t *)ciphertext)[i];
 message[16+padded]=5;
 for(unsigned i=0;i<8;++i)message[24+padded+i]=(uint8_t)((uint64_t)size>>(8*i));
 uint8_t clamp[16];for(unsigned i=0;i<16;++i)clamp[i]=one_time[i];
 clamp[3]&=15;clamp[7]&=15;clamp[11]&=15;clamp[15]&=15;clamp[4]&=252;clamp[8]&=252;clamp[12]&=252;
 const uint32_t mask=0x3ffffffU;
 uint32_t r[5]={pf_tls_load32(clamp)&mask,(pf_tls_load32(clamp+3)>>2)&mask,(pf_tls_load32(clamp+6)>>4)&mask,(pf_tls_load32(clamp+9)>>6)&mask,pf_tls_load32(clamp+12)>>8};
 uint32_t h[5]={0};
 for(unsigned long offset=0;offset<total;offset+=16){
  uint8_t *p=message+offset;
  h[0]+=pf_tls_load32(p)&mask;h[1]+=(pf_tls_load32(p+3)>>2)&mask;h[2]+=(pf_tls_load32(p+6)>>4)&mask;h[3]+=(pf_tls_load32(p+9)>>6)&mask;h[4]+=(pf_tls_load32(p+12)>>8)|(1U<<24);
  uint64_t d[5]={0};
  for(unsigned i=0;i<5;++i)for(unsigned j=0;j<5;++j){unsigned index=(i+5-j)%5;uint64_t coefficient=r[index];if(j>i)coefficient*=5;d[i]+=(uint64_t)h[j]*coefficient;}
  for(unsigned i=0;i<4;++i){h[i]=(uint32_t)d[i]&mask;d[i+1]+=d[i]>>26;}
  h[4]=(uint32_t)d[4]&mask;h[0]+=(uint32_t)(d[4]>>26)*5;h[1]+=h[0]>>26;h[0]&=mask;
 }
 for(unsigned pass=0;pass<3;++pass){uint32_t carry=0;for(unsigned i=0;i<5;++i){uint32_t value=h[i]+carry;h[i]=value&mask;carry=value>>26;}h[0]+=carry*5;}
 uint32_t g[5],carry=5;
 for(unsigned i=0;i<4;++i){uint32_t value=h[i]+carry;g[i]=value&mask;carry=value>>26;}
 g[4]=h[4]+carry-(1U<<26);uint32_t select=(g[4]>>31)-1;g[4]&=mask;
 for(unsigned i=0;i<5;++i)h[i]=(h[i]&~select)|(g[i]&select);
 uint32_t words[4]={h[0]|h[1]<<26,h[1]>>6|h[2]<<20,h[2]>>12|h[3]<<14,h[3]>>18|h[4]<<8};
 uint64_t high=0;
 for(unsigned i=0;i<4;++i){uint64_t value=(uint64_t)words[i]+pf_tls_load32(one_time+16+4*i)+high;pf_tls_store32((uint8_t *)output+4*i,(uint32_t)value);high=value>>32;}
 recovered_10000c64(message);
}


/* Recovered twenty-round ChaCha block transform; Pooka's Free Software License. */
static uint32_t pf_tls_chacha_load(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static uint32_t pf_tls_chacha_rotate(uint32_t word,unsigned bits){return word<<bits|word>>(32-bits);}
static void pf_tls_chacha_quarter(uint32_t *x,unsigned a,unsigned b,unsigned c,unsigned d){
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],16);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],12);
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],8);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],7);
}
void recovered_100068fc(void *key,uint counter,void *nonce,void *output){
 uint32_t initial[16]={0x61707865U,0x3320646eU,0x79622d32U,0x6b206574U};
 for(unsigned i=0;i<8;++i)initial[4+i]=pf_tls_chacha_load((uint8_t *)key+4*i);
 initial[12]=counter;for(unsigned i=0;i<3;++i)initial[13+i]=pf_tls_chacha_load((uint8_t *)nonce+4*i);
 uint32_t x[16];for(unsigned i=0;i<16;++i)x[i]=initial[i];
 for(unsigned round=0;round<10;++round){
  pf_tls_chacha_quarter(x,0,4,8,12);pf_tls_chacha_quarter(x,1,5,9,13);pf_tls_chacha_quarter(x,2,6,10,14);pf_tls_chacha_quarter(x,3,7,11,15);
  pf_tls_chacha_quarter(x,0,5,10,15);pf_tls_chacha_quarter(x,1,6,11,12);pf_tls_chacha_quarter(x,2,7,8,13);pf_tls_chacha_quarter(x,3,4,9,14);
 }
 for(unsigned i=0;i<16;++i){uint32_t value=x[i]+initial[i];for(unsigned j=0;j<4;++j)((uint8_t *)output)[4*i+j]=(uint8_t)(value>>(8*j));}
}


#undef str_10007432
#define str_10007432 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b84
 */

undefined8
recovered_10006b84(undefined8 *param_1,long param_2,long param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((code *)param_1[1] == (code *)0x0) || ((param_2 == 0 && (param_3 != 0)))) {
    pf_varargs_1000240c_0(param_4,param_5,str_10007432);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[1])(*param_1);
  return uVar1;
}

#undef str_10007432
