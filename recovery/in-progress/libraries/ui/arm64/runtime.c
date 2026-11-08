/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b10U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b20U)))
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
#define DAT_1000c0e0 (*(byte *)(((uintptr_t)pf_module_state + 0x5b10U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b20U)))
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
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
#define DAT_1000c0e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5b18U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5b20U)))
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


#undef DAT_10006725
#define DAT_10006725 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001344
 */

undefined * recovered_10001344(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10006725;
}

#undef DAT_10006725

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5a30U)))
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


#undef DAT_100065d0
#define DAT_100065d0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_100065d0 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_100065d0

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


#undef DAT_100065d8
#define DAT_100065d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_100065d8);
  return auVar1;
}

#undef DAT_100065d8

#undef DAT_100065e0
#define DAT_100065e0 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_100065f0
#define DAT_100065f0 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_100065f8
#define DAT_100065f8 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001698
 */

void recovered_10001698(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_100065e0 < param_1; param_1 = param_1 + DAT_100065f8) {
  }
  for (; param_1 < DAT_100065e8; param_1 = param_1 + DAT_100065f0) {
  }
  return;
}

#undef DAT_100065e0
#undef DAT_100065e8
#undef DAT_100065f0
#undef DAT_100065f8

#undef DAT_10006600
#define DAT_10006600 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_10006600;
  return auVar1;
}

#undef DAT_10006600

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


#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
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
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0x157U);
code_r0x10002194:
    pdStack_78 = pdStack_78 + 1;
    recovered_10002318((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_10002180;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      dVar6 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002318((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x18cU));
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

#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

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


#undef str_10006733
#define str_10006733 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002318
 */

void recovered_10002318(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10006733;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100022dc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10006733

#undef str_1000673a
#define str_1000673a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_1000674b
#define str_1000674b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17bU)))
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

  pcVar1 = str_1000673a;
  if (param_6 == 0) {
    pcVar1 = str_1000674b;
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

#undef str_1000673a
#undef str_1000674b
#undef local_80

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_1000240c(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001db4(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b10U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5b20U)))
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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b10U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b18U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5b20U)))
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
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

#undef DAT_1000675f
#define DAT_1000675f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c8
 */

void recovered_100027c8(char *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_1000675f;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_1000240c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002674(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000675f
#undef acStack_160

#undef DAT_1000677d
#define DAT_1000677d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
#undef str_10006762
#define str_10006762 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
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

  recovered_10002850(str_10006762);
  pcVar4 = &DAT_1000677d;
  for (uVar3 = recovered_100011b4(&DAT_1000677d); uVar3 != 0; uVar3 = uVar3 - 1) {
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

#undef DAT_1000677d
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10006762

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
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

#undef DAT_1000677d
#define DAT_1000677d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b38U)))
#undef str_10006780
#define str_10006780 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b0U)))
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

  recovered_10002850(str_10006780);
  pcVar4 = &DAT_1000677d;
  for (uVar3 = recovered_100011b4(&DAT_1000677d); uVar3 != 0; uVar3 = uVar3 - 1) {
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

#undef DAT_1000677d
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10006780

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


#undef DAT_1000675f
#define DAT_1000675f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
#undef str_10006814
#define str_10006814 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x244U)))
#undef str_10006821
#define str_10006821 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x251U)))
#undef str_1000682f
#define str_1000682f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
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
  iVar2 = recovered_100011d8(param_1,str_10006814);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100011d8(param_1,str_10006821);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100011d8(param_1,str_1000682f);
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
        pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_1000675f,(ulonglong)param_1);
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
  pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_1000675f,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_1000675f
#undef DAT_1000c058
#undef str_10006814
#undef str_10006821
#undef str_1000682f
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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
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

#undef DAT_1000675f
#define DAT_1000675f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
#undef str_10006814
#define str_10006814 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x244U)))
#undef str_10006821
#define str_10006821 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x251U)))
#undef str_1000682f
#define str_1000682f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
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
  iVar2 = recovered_100011d8(param_1,str_10006814);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100011d8(param_1,str_10006821);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100011d8(param_1,str_1000682f);
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
        pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_1000675f,(ulonglong)param_1);
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
  pf_varargs_1000240c_1((char *)(puVar4 + 1),0xf1,&DAT_1000675f,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_1000675f
#undef DAT_1000c058
#undef str_10006814
#undef str_10006821
#undef str_1000682f
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


#undef DAT_10006732
#define DAT_10006732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x162U)))
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
      bVar2 = recovered_100028a0((long)text,0x1fe,&DAT_10006732,0);
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

#undef DAT_10006732

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a88U)))
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


#undef DAT_100067a3
#define DAT_100067a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_100067a6
#define str_100067a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d6U)))
#undef str_100067b3
#define str_100067b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#undef str_100067bd
#define str_100067bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1edU)))
#undef str_100067d1
#define str_100067d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_100067df
#define str_100067df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
#undef str_100067f1
#define str_100067f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#undef str_100067fd
#define str_100067fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22dU)))
#undef str_1000680e
#define str_1000680e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003404
 */

char * recovered_10003404(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_100067a3;
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
    return str_100067a6;
  case 5:
    return str_100067b3;
  case 9:
    return str_100067bd;
  case 0xc:
    return str_100067d1;
  case 0xd:
    return str_100067df;
  default:
    if (param_1 == 0x11) {
      return str_100067f1;
    }
    if (param_1 == 0x16) {
      return str_100067fd;
    }
switchD_10003430_caseD_1:
    return str_1000680e;
  }
}

#undef DAT_100067a3
#undef str_100067a6
#undef str_100067b3
#undef str_100067bd
#undef str_100067d1
#undef str_100067df
#undef str_100067f1
#undef str_100067fd
#undef str_1000680e

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
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b28U)))
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
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5d38U)))
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
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5d38U)))
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
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5d40U)))
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
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5d38U)))
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
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5d40U)))
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
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5d40U)))
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
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5d40U)))
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
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5d40U)))
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
      if (*plVar4 == ((uintptr_t)pf_module_state + 0x5ae0U)) {
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

#undef DAT_10006668
#define DAT_10006668 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#define local_68 (*(byte * *)(frame + 24))
#define pbStack_70 (*(byte * *)(frame + 16))
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
                local_68 = pbVar7 + *(long *)(&DAT_10006668 + uVar4 * 8) * (uVar5 & 0x7fffffff);
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

#undef DAT_10006668
#undef local_68
#undef pbStack_70

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


#undef DAT_100066d0
#define DAT_100066d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef UNK_100066d8
#define UNK_100066d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef _DAT_100066d0
#define _DAT_100066d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef uRam00000000100066d8
#define uRam00000000100066d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004194
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004194(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10000ee0(param_1,0,0x48);
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  *(int *)(param_1 + 2) = param_3 << 2;
  uVar1 = _DAT_100066d0;
  *(undefined8 *)((long)param_1 + 0x1c) = uRam00000000100066d8;
  *(undefined8 *)((long)param_1 + 0x14) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}

#undef DAT_100066d0
#undef UNK_100066d8
#undef _DAT_100066d0
#undef uRam00000000100066d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e4
 */

void recovered_100041e4(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (99 < param_3) {
    param_3 = 100;
  }
  *(uint *)(param_2 + 0x18) = param_3;
  uVar3 = 0x48;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004200
 */

void recovered_10004200(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (99 < param_3) {
    param_3 = 100;
  }
  *(uint *)(param_2 + 0x1c) = param_3;
  uVar3 = 0x48;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000421c
 */

void recovered_1000421c(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (4 < param_3 + 1U) {
    param_3 = -1;
  }
  if (99 < param_4) {
    param_4 = 100;
  }
  *(int *)(param_2 + 0x20) = param_3;
  *(uint *)(param_2 + 0x24) = param_4;
  uVar3 = 0x48;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004244
 */

void recovered_10004244(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[4] = 0;
  return;
}


#undef DAT_100066f0
#define DAT_100066f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004258
 */

void recovered_10004258(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[4] = DAT_100066f0;
  return;
}

#undef DAT_100066f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004274
 */

void recovered_10004274(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  if (99 < param_3) {
    param_3 = 100;
  }
  *(undefined4 *)(param_1 + 4) = 2;
  *(uint *)((long)param_1 + 0x24) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004298
 */

void recovered_10004298(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  if (99 < param_3) {
    param_3 = 100;
  }
  *(undefined4 *)(param_1 + 4) = 3;
  *(uint *)((long)param_1 + 0x24) = param_3;
  return;
}


#undef DAT_100066f8
#define DAT_100066f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef DAT_820108a0
#define DAT_820108a0 (*(uint8_t *)(0x820108a0U))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
#undef _DAT_820108a0
#define _DAT_820108a0 (*(uint *)(0x820108a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100042bc(int *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar17 = *(int *)(param_2 + 1);
  if ((iVar17 != 0) && (uVar5 = *(uint *)((long)param_2 + 0xc), uVar5 != 0)) {
    uVar1 = iVar17 << 2;
    if (*(uint *)(param_2 + 2) != 0) {
      uVar1 = *(uint *)(param_2 + 2);
    }
    uVar12 = iVar17 << 2;
    if (uVar1 != 0) {
      uVar12 = uVar1;
    }
    if (((uint)(iVar17 << 2) <= uVar12) &&
       (uVar14 = (ulong)uVar12 * (ulong)uVar5, (uVar14 & 0xffffffff00000000) == 0)) {
      uVar13 = *param_2;
      iVar6 = *(int *)((long)param_2 + 0x14);
      uVar15 = param_2[3];
      iVar2 = *(int *)(param_2 + 4);
      uVar12 = *(uint *)((long)param_2 + 0x24);
      puVar3 = (undefined *)param_2[5];
      puVar4 = (undefined *)param_2[6];
      puVar11 = (undefined *)param_2[7];
      uVar7 = *(uint *)(param_2 + 8);
      recovered_10000ee0(param_1,0,0x350);
      bVar8 = recovered_10005cec(0xa0);
      if ((bVar8) && (_DAT_820108a0 != 0)) {
        uVar9 = (*(code *)(ulong)_DAT_820108a0)(uVar13,iVar17,uVar5);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        *param_1 = (int)uVar9;
        param_1[1] = iVar17;
        param_1[2] = uVar5;
        param_1[3] = uVar1;
        param_1[4] = iVar6;
        iVar17 = (int)((ulong)uVar15 >> 0x20);
        uVar16 = pf_ui_min_u32x2(uVar15,0x6400000064,4);
        *(ulong *)(param_1 + 5) =
             uVar16 ^ (uVar16 ^ DAT_100066f8) &
                      CONCAT44(-(uint)(iVar17 == -1),-(uint)((int)uVar15 == -1));
        if (4 < iVar2 + 1U) {
          iVar2 = -1;
        }
        if (99 < uVar12) {
          uVar12 = 100;
        }
        param_1[7] = iVar2;
        param_1[8] = uVar12;
        *(undefined8 *)(param_1 + 0xe) = uVar13;
        if ((uVar7 & 1) == 0) {
LAB_100043e4:
          if (((puVar3 != (undefined *)0x0) || (puVar4 != (undefined *)0x0)) ||
             (puVar11 != (undefined *)0x0)) {
            recovered_10004500(param_1,puVar3,puVar4,puVar11);
          }
          if ((int)uVar15 != -1 || iVar17 != -1) {
            recovered_10004584(param_1,param_1[5],param_1[6]);
          }
          if (param_1[7] == -1) {
            return uVar9;
          }
          recovered_10004624(param_1,param_1[7],param_1[8]);
          return uVar9;
        }
        bVar8 = recovered_10005cec(0x4c);
        if ((bVar8) && (_DAT_8201084c != 0)) {
          lVar10 = (*(code *)(ulong)_DAT_8201084c)(uVar14 & 0xffffffff);
          *(long *)(param_1 + 0xc) = lVar10;
          if (lVar10 != 0) {
            param_1[9] = param_1[9] | 1;
            param_1[10] = (int)uVar14;
            goto LAB_100043e4;
          }
        }
        else {
          param_1[0xc] = 0;
          param_1[0xd] = 0;
        }
        recovered_100044b8(uVar9);
        recovered_10000ee0(param_1,0,0x350);
      }
    }
  }
  return 0;
}

#undef DAT_100066f8
#undef DAT_8201084c
#undef DAT_820108a0
#undef _DAT_8201084c
#undef _DAT_820108a0

#undef DAT_820108a8
#define DAT_820108a8 (*(uint8_t *)(0x820108a8U))
#undef _DAT_820108a8
#define _DAT_820108a8 (*(uint *)(0x820108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100044b8(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xa8);
  if ((bVar1) && (_DAT_820108a8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100044f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108a8)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108a8
#undef _DAT_820108a8

#undef DAT_10006732
#define DAT_10006732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x162U)))
#undef DAT_820108ec
#define DAT_820108ec (*(uint8_t *)(0x820108ecU))
#undef _DAT_820108ec
#define _DAT_820108ec (*(uint *)(0x820108ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004500
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004500(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;

  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, iVar4 != 0)) {
    puVar1 = &DAT_10006732;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    puVar2 = &DAT_10006732;
    if (param_3 != (undefined *)0x0) {
      puVar2 = param_3;
    }
    puVar3 = &DAT_10006732;
    if (param_4 != (undefined *)0x0) {
      puVar3 = param_4;
    }
    bVar5 = recovered_10005cec(0xec);
    if ((bVar5) && (_DAT_820108ec != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)(ulong)_DAT_820108ec)(iVar4,puVar1,puVar2,puVar3);
      return uVar6;
    }
  }
  return 0;
}

#undef DAT_10006732
#undef DAT_820108ec
#undef _DAT_820108ec

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004584
 */

ulong recovered_10004584(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    bVar2 = recovered_10005cec(0x160);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010960 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010960)
                        (iVar1,(param_2 * 0xff + 0x32) / 100,(param_3 * 0xff + 0x32) / 100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[5] = param_2;
      param_1[6] = param_3;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004624
 */

ulong recovered_10004624(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (4 < param_2 + 1U) {
      param_2 = -1;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    if (param_2 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_1[1];
      if ((uint)param_1[2] <= (uint)param_1[1]) {
        uVar4 = param_1[2];
      }
      uVar4 = (uVar4 * param_3 + 0x32) / 100;
    }
    bVar2 = recovered_10005cec(0x164);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010964 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010964)(iVar1,param_2,uVar4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[7] = param_2;
      param_1[8] = param_3;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d8
 */

uint128 recovered_100046d8(int *param_1,byte *param_2,byte *param_3,ulong param_4,ulong param_5,uint param_6
                  ,undefined8 param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong extraout_x0_02;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  byte *unaff_x30;
  uint128 auVar8;

  uVar4 = 0;
  if (param_1 == (int *)0x0) goto LAB_10004818;
  iVar2 = *param_1;
  if (iVar2 == 0) {
LAB_10004804:
    uVar4 = 0;
  }
  else {
    param_1[0x12] = 0;
    if ((int)param_4 == 0) {
      param_4 = (ulong)(uint)param_1[1];
    }
    if ((int)param_5 == 0) {
      param_5 = (ulong)(uint)param_1[2];
    }
    iVar7 = (int)param_4;
    uVar1 = iVar7 << 2;
    if (param_6 != 0) {
      uVar1 = param_6;
    }
    if (param_2 == (byte *)0x0) {
      param_2 = *(byte **)(param_1 + 0xe);
    }
    uint32_t pf_hash_acc;
    pf_hash_acc = recovered_1000482c(0x811c9dc5,iVar7);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,(int)param_5);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,uVar1);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,(int)param_7);
    uVar4 = pf_hash_acc;
    if (param_2 != (byte *)0x0) {
      for (pbVar6 = param_2; *pbVar6 != 0; pbVar6 = pbVar6 + 1) {
        uVar4 = (ulong)(((uint)uVar4 ^ (uint)*pbVar6) * 0x1000193);
      }
    }
    uVar5 = recovered_10004854(uVar4,param_3,(param_5 & 0xffffffff) * (ulong)uVar1);
    if ((param_1[0x11] == 0) || ((int)uVar5 != param_1[0x10])) {
      bVar3 = recovered_10005cec(0xa4);
      uVar4 = (ulong)bVar3;
      if (bVar3) {
        if (uRam00000000820108a4 == 0) goto LAB_10004804;
        uVar4 = (*(code *)(ulong)uRam00000000820108a4)
                          (iVar2,param_2,param_3,param_4,param_5,(ulong)uVar1,param_7);
        if ((int)uVar4 != 0) {
          param_1[0x10] = (int)uVar5;
          param_1[0x11] = 1;
          goto LAB_100047f0;
        }
      }
    }
    else {
LAB_100047f0:
      *(byte **)(param_1 + 0xe) = param_2;
      param_1[1] = iVar7;
      param_1[2] = (int)param_5;
      uVar4 = 1;
      param_1[3] = uVar1;
      param_1[4] = (int)param_7;
    }
  }
  param_2 = unaff_x30;
LAB_10004818:
  PF_PART8(auVar8, 8) = param_2;
  PF_PART8(auVar8, 0) = uVar4;
  return auVar8;
}

#undef UNK_820108a4
#undef uRam00000000820108a4

#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000482c
 */

uint32_t recovered_1000482c(ulong param_1,undefined4 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = param_2;
  return recovered_10004854(param_1,(byte *)&local_14,4);
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004854
 */

ulong recovered_10004854(ulong param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (byte *)0x0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      param_1 = (ulong)(((uint)param_1 ^ (uint)*param_2) * 0x1000193);
      param_2 = param_2 + 1;
    }
  }
  return param_1;
}


#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000487c
 */

uint128 recovered_1000487c(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint128 auVar7;
  bool bVar8;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong extraout_x0_02;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_x30;
  uint128 auVar13;

  if (param_3 == (int *)0x0) {
    PF_PART8(auVar7, 8) = 0;
    PF_PART8(auVar7, 0) = param_2;
    return auVar7 << 0x40;
  }
  pbVar11 = *(byte **)(param_3 + 4);
  iVar2 = *param_3;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  if (param_1 == (int *)0x0) {
    uVar9 = 0;
    unaff_x30 = param_2;
    goto LAB_10004818;
  }
  iVar6 = param_1[4];
  iVar4 = *param_1;
  if (iVar4 == 0) {
LAB_10004804:
    uVar9 = 0;
  }
  else {
    param_1[0x12] = 0;
    if (iVar2 == 0) {
      iVar2 = param_1[1];
    }
    if (uVar3 == 0) {
      uVar3 = param_1[2];
    }
    uVar1 = iVar2 << 2;
    if (uVar5 != 0) {
      uVar1 = uVar5;
    }
    if (param_2 == (byte *)0x0) {
      param_2 = *(byte **)(param_1 + 0xe);
    }
    uint32_t pf_hash_acc;
    pf_hash_acc = recovered_1000482c(0x811c9dc5,iVar2);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,uVar3);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,uVar1);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,iVar6);
    uVar9 = pf_hash_acc;
    if (param_2 != (byte *)0x0) {
      for (pbVar12 = param_2; *pbVar12 != 0; pbVar12 = pbVar12 + 1) {
        uVar9 = (ulong)(((uint)uVar9 ^ (uint)*pbVar12) * 0x1000193);
      }
    }
    uVar10 = recovered_10004854(uVar9,pbVar11,(ulong)uVar3 * (ulong)uVar1);
    if ((param_1[0x11] == 0) || ((int)uVar10 != param_1[0x10])) {
      bVar8 = recovered_10005cec(0xa4);
      uVar9 = (ulong)bVar8;
      if (!bVar8) goto LAB_10004818;
      if (uRam00000000820108a4 == 0) goto LAB_10004804;
      uVar9 = (*(code *)(ulong)uRam00000000820108a4)
                        (iVar4,param_2,pbVar11,iVar2,(ulong)uVar3,(ulong)uVar1,iVar6);
      if ((int)uVar9 == 0) goto LAB_10004818;
      param_1[0x10] = (int)uVar10;
      param_1[0x11] = 1;
    }
    *(byte **)(param_1 + 0xe) = param_2;
    param_1[1] = iVar2;
    param_1[2] = uVar3;
    uVar9 = 1;
    param_1[3] = uVar1;
    param_1[4] = iVar6;
  }
LAB_10004818:
  PF_PART8(auVar13, 8) = unaff_x30;
  PF_PART8(auVar13, 0) = uVar9;
  return auVar13;
}

#undef UNK_820108a4
#undef uRam00000000820108a4

#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048ac
 */

uint128 recovered_100048ac(int *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint128 auVar7;
  bool bVar8;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong extraout_x0_02;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_x30;
  uint128 auVar13;

  if (param_1 == (int *)0x0) {
    PF_PART8(auVar7, 8) = 0;
    PF_PART8(auVar7, 0) = param_2;
    return auVar7 << 0x40;
  }
  pbVar5 = *(byte **)(param_1 + 0xc);
  pbVar12 = *(byte **)(param_1 + 0xe);
  iVar2 = param_1[1];
  uVar3 = param_1[2];
  iVar4 = param_1[4];
  uVar9 = 0;
  if (param_1 == (int *)0x0) goto LAB_10004818;
  iVar6 = *param_1;
  if (iVar6 == 0) {
LAB_10004804:
    uVar9 = 0;
  }
  else {
    param_1[0x12] = 0;
    if (iVar2 == 0) {
      iVar2 = param_1[1];
    }
    if (uVar3 == 0) {
      uVar3 = param_1[2];
    }
    uVar1 = iVar2 << 2;
    if (param_1[3] != 0) {
      uVar1 = param_1[3];
    }
    if (pbVar12 == (byte *)0x0) {
      pbVar12 = *(byte **)(param_1 + 0xe);
    }
    uint32_t pf_hash_acc;
    pf_hash_acc = recovered_1000482c(0x811c9dc5,iVar2);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,uVar3);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,uVar1);
    pf_hash_acc = recovered_1000482c(pf_hash_acc,iVar4);
    uVar9 = pf_hash_acc;
    if (pbVar12 != (byte *)0x0) {
      for (pbVar11 = pbVar12; *pbVar11 != 0; pbVar11 = pbVar11 + 1) {
        uVar9 = (ulong)(((uint)uVar9 ^ (uint)*pbVar11) * 0x1000193);
      }
    }
    uVar10 = recovered_10004854(uVar9,pbVar5,(ulong)uVar3 * (ulong)uVar1);
    if ((param_1[0x11] == 0) || ((int)uVar10 != param_1[0x10])) {
      bVar8 = recovered_10005cec(0xa4);
      uVar9 = (ulong)bVar8;
      if (bVar8) {
        if (uRam00000000820108a4 == 0) goto LAB_10004804;
        uVar9 = (*(code *)(ulong)uRam00000000820108a4)
                          (iVar6,pbVar12,pbVar5,iVar2,(ulong)uVar3,(ulong)uVar1,iVar4);
        if ((int)uVar9 != 0) {
          param_1[0x10] = (int)uVar10;
          param_1[0x11] = 1;
          goto LAB_100047f0;
        }
      }
    }
    else {
LAB_100047f0:
      *(byte **)(param_1 + 0xe) = pbVar12;
      param_1[1] = iVar2;
      param_1[2] = uVar3;
      uVar9 = 1;
      param_1[3] = uVar1;
      param_1[4] = iVar4;
    }
  }
  pbVar12 = unaff_x30;
LAB_10004818:
  PF_PART8(auVar13, 8) = pbVar12;
  PF_PART8(auVar13, 0) = uVar9;
  return auVar13;
}

#undef UNK_820108a4
#undef uRam00000000820108a4

#undef DAT_82010854
#define DAT_82010854 (*(uint8_t *)(0x82010854U))
#undef _DAT_82010854
#define _DAT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_100048c4(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar4 = (ulong)(uint)(param_2 << 2) * (ulong)param_3;
  if ((uVar4 & 0xffffffff00000000) == 0) {
    lVar3 = *(long *)(param_1 + 0xc);
    if ((param_1[10] != (int)uVar4) || (lVar3 == 0)) {
      bVar1 = recovered_10005cec(0x54);
      if (!bVar1) {
        return 0;
      }
      if (_DAT_82010854 == 0) goto LAB_1000490c;
      lVar3 = (*(code *)(ulong)_DAT_82010854)(lVar3,uVar4 & 0xffffffff);
      if (lVar3 == 0) {
        return 0;
      }
      *(long *)(param_1 + 0xc) = lVar3;
      param_1[9] = param_1[9] | 1;
      param_1[10] = (int)uVar4;
    }
    param_1[1] = param_2;
    param_1[2] = param_3;
    uVar2 = 1;
    param_1[3] = param_2 << 2;
  }
  else {
LAB_1000490c:
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_82010854
#undef _DAT_82010854

#undef DAT_82010854
#define DAT_82010854 (*(uint8_t *)(0x82010854U))
#undef _DAT_82010854
#define _DAT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_10004980(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar4 = 0;
LAB_100049b4:
    iVar3 = param_1[1];
  }
  else {
    iVar3 = *(int *)(param_2 + 0x50);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + 0x18);
    }
    uVar4 = *(uint *)(param_2 + 0x54);
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_2 + 0x1c);
    }
    if (iVar3 == 0) goto LAB_100049b4;
  }
  if (uVar4 == 0) {
    uVar4 = param_1[2];
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar6 = (ulong)(uint)(iVar3 << 2) * (ulong)uVar4;
  if ((uVar6 & 0xffffffff00000000) == 0) {
    lVar5 = *(long *)(param_1 + 0xc);
    if ((param_1[10] != (int)uVar6) || (lVar5 == 0)) {
      bVar1 = recovered_10005cec(0x54);
      if (!bVar1) {
        return 0;
      }
      if (_DAT_82010854 == 0) goto LAB_1000490c;
      lVar5 = (*(code *)(ulong)_DAT_82010854)(lVar5,uVar6 & 0xffffffff);
      if (lVar5 == 0) {
        return 0;
      }
      *(long *)(param_1 + 0xc) = lVar5;
      param_1[9] = param_1[9] | 1;
      param_1[10] = (int)uVar6;
    }
    param_1[1] = iVar3;
    param_1[2] = uVar4;
    uVar2 = 1;
    param_1[3] = iVar3 << 2;
  }
  else {
LAB_1000490c:
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_82010854
#undef _DAT_82010854

#undef UNK_820108b4
#define UNK_820108b4 (*(uint *)(0x820108b4U))
#undef uRam00000000820108b4
#define uRam00000000820108b4 (*(uint32_t *)(0x820108b4U))
#define uStack_290 (*(undefined8 *)(frame + 48))
#define uStack_288 (*(undefined8 *)(frame + 56))
#define uStack_268 (*(uint *)(frame + 88))
#define uStack_264 (*(uint *)(frame + 92))
#define iStack_260 (*(int *)(frame + 96))
#define uStack_25c (*(uint *)(frame + 100))
#define auStack_2a8 (*(undefined1 (*)[24])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d0
 */

ulong recovered_100049d0(int *param_1,void *param_2)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
LAB_10004af4:
    uVar4 = 0;
  }
  else {
    if (param_1[0x12] == 0) {
      recovered_10000ee0(auStack_2a8,0,0x278);
      iVar2 = *param_1;
      bVar3 = recovered_10005cec(0xb4);
      if (!bVar3) {
        return (ulong)bVar3;
      }
      if (uRam00000000820108b4 == 0) goto LAB_10004af4;
      uVar4 = (*(code *)(ulong)uRam00000000820108b4)(iVar2,auStack_2a8);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      recovered_10000cf4(param_1 + 0x13,auStack_2a8,0x278);
      param_1[0x12] = 1;
      *(undefined8 *)(param_1 + 3) = uStack_288;
      *(undefined8 *)(param_1 + 1) = uStack_290;
      uVar6 = uStack_268;
      if (0xfe < uStack_268) {
        uVar6 = 0xff;
      }
      uVar5 = 0xf;
      if (uStack_268 != 0xffffffff) {
        uVar5 = (uVar6 * 100 + 0x7f) / 0xff;
      }
      uVar6 = uStack_264;
      if (0xfe < uStack_264) {
        uVar6 = 0xff;
      }
      uVar1 = 0;
      if (uStack_264 != 0xffffffff) {
        uVar1 = (uVar6 * 100 + 0x7f) / 0xff;
      }
      param_1[5] = uVar5;
      param_1[6] = uVar1;
      if (4 < iStack_260 + 1U) {
        iStack_260 = -1;
      }
      param_1[7] = iStack_260;
      uVar5 = (uint)((ulong)uStack_290 >> 0x20);
      uVar6 = (uint)uStack_290;
      if (uVar5 <= (uint)uStack_290) {
        uVar6 = uVar5;
      }
      uVar6 = uVar6 * 100 + 0x32;
      if (uVar6 < 100) {
        uVar5 = 0;
      }
      else {
        uVar6 = uVar6 / 100;
        uVar5 = 0;
        if ((ulong)uVar6 != 0) {
          uVar5 = (uint)(((ulong)(uVar6 >> 1) + (ulong)uStack_25c * 100) / (ulong)uVar6);
        }
        if (99 < uVar5) {
          uVar5 = 100;
        }
      }
      param_1[8] = uVar5;
      if (param_2 != (void *)0x0) {
        recovered_10000cf4(param_2,auStack_2a8,0x278);
      }
    }
    else if (param_2 != (void *)0x0) {
      recovered_10000cf4(param_2,param_1 + 0x13,0x278);
    }
    uVar4 = 1;
  }
  return uVar4;
}

#undef UNK_820108b4
#undef uRam00000000820108b4
#undef uStack_290
#undef uStack_288
#undef uStack_268
#undef uStack_264
#undef iStack_260
#undef uStack_25c
#undef auStack_2a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b44
 */

bool recovered_10004b44(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return true;
  }
  return (*(byte *)(param_1 + 0x28) & 0x11) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b64
 */

/* WARNING: Removing unreachable block (ram,0x10000f08) */

void recovered_10004b64(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar3 = 0;
  for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
    uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
  }
  uVar1 = 0x18;
  puVar2 = param_1;
  for (; (uVar1 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = (ulong *)((long)param_1 + 1)) {
    *(undefined1 *)puVar2 = 0;
    uVar1 = uVar1 - 1;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  for (; 0x1f < uVar1; uVar1 = uVar1 - 0x20) {
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  }
  while (7 < uVar1) {
    *puVar2 = uVar3;
    uVar1 = uVar1 - 8;
    puVar2 = puVar2 + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b78
 */

undefined4 recovered_10004b78(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;

  uVar3 = 0;
  if (param_1 != (undefined1 *)0x0) {
    recovered_10004b64((ulong *)param_1);
switchD_10004cb8_caseD_49:
    uVar4 = recovered_10004d24();
    uVar2 = (uint)uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2 & 0xff;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      if (uVar1 - 0x20 < 0x5f) {
        *(uint *)(param_1 + 0x10) = uVar1;
      }
      switch((uintptr_t)(uVar1)) {
      case 0x51:
switchD_10004c5c_caseD_71:
        param_1[9] = 1;
        break;
      case 0x52:
switchD_10004c5c_caseD_72:
        param_1[10] = 1;
        break;
      case 0x53:
switchD_10004c5c_caseD_73:
        param_1[0xb] = 1;
        break;
      case 0x54:
      case 0x55:
      case 0x56:
        break;
      case 0x57:
switchD_10004c5c_caseD_77:
        param_1[0xc] = 1;
        break;
      default:
        switch((uintptr_t)(uVar1)) {
        case 0x71:
          goto switchD_10004c5c_caseD_71;
        case 0x72:
          goto switchD_10004c5c_caseD_72;
        case 0x73:
          goto switchD_10004c5c_caseD_73;
        case 0x74:
        case 0x75:
        case 0x76:
          break;
        case 0x77:
          goto switchD_10004c5c_caseD_77;
        default:
          if (uVar1 == 8) {
LAB_10004c88:
            param_1[4] = 1;
          }
          else if (uVar1 == 10 || uVar1 == 0xd) {
            param_1[5] = 1;
          }
          else if (uVar1 == 0x1b) {
            param_1[6] = 1;
          }
          else if (uVar1 == 0x41) {
LAB_10004c38:
            param_1[7] = 1;
          }
          else {
            if (uVar1 != 0x44) {
              if (uVar1 == 0x7f) goto LAB_10004c88;
              if (uVar1 != 100) {
                if (uVar1 != 0x61) break;
                goto LAB_10004c38;
              }
            }
            param_1[8] = 1;
          }
        }
      }
      uVar2 = uVar2 >> 8 & 0xff;
      switch((uintptr_t)(uVar2)) {
      case 0x48:
        *param_1 = 1;
        break;
      case 0x49:
      case 0x4a:
      case 0x4c:
      case 0x4e:
      case 0x4f:
        break;
      case 0x4b:
        param_1[2] = 1;
        break;
      case 0x4d:
        param_1[3] = 1;
        break;
      case 0x50:
        param_1[1] = 1;
        break;
      default:
        if (uVar2 == 0x1c) {
          param_1[5] = 1;
        }
        else if (uVar2 == 0xe) {
          param_1[4] = 1;
        }
        else if (uVar2 == 1) {
          param_1[6] = 1;
        }
      }
      goto switchD_10004cb8_caseD_49;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar3;
}


#undef DAT_8201082c
#define DAT_8201082c (*(uint8_t *)(0x8201082cU))
#undef _DAT_8201082c
#define _DAT_8201082c (*(uint *)(0x8201082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d24
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004d24(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0x2c);
  if ((bVar1) && (_DAT_8201082c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201082c)();
    return uVar2;
  }
  return 0;
}

#undef DAT_8201082c
#undef _DAT_8201082c

#define auStack_298 (*(undefined1 (*)[40])(frame + 24))
#define local_270 (*(uint *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d5c
 */

bool recovered_10004d5c(int *param_1)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100049d0(param_1,auStack_298);
  return (local_270 & 0x11) != 0 || (int)uVar1 == 0;
}

#undef auStack_298
#undef local_270

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d98
 */

undefined8 recovered_10004d98(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = recovered_100044b8((ulong)(uint)*param_1);
    }
    if (((*(byte *)(param_1 + 9) & 1) != 0) && (*(long *)(param_1 + 0xc) != 0)) {
      recovered_10004df4(*(long *)(param_1 + 0xc));
    }
    recovered_10000ee0(param_1,0,0x350);
  }
  return uVar1;
}


#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004df4(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10005cec(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e38
 */

ulong recovered_10004e38(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[6];
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    if (99 < uVar4) {
      uVar4 = 100;
    }
    bVar2 = recovered_10005cec(0x160);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010960 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010960)
                        (iVar1,(param_2 * 0xff + 0x32) / 100,(uVar4 * 0xff + 0x32) / 100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[5] = param_2;
      param_1[6] = uVar4;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e4c
 */

ulong recovered_10004e4c(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[5];
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (99 < uVar4) {
      uVar4 = 100;
    }
    if (99 < param_2) {
      param_2 = 100;
    }
    bVar2 = recovered_10005cec(0x160);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010960 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010960)
                        (iVar1,(uVar4 * 0xff + 0x32) / 100,(param_2 * 0xff + 0x32) / 100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[5] = uVar4;
      param_1[6] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e64
 */

/* WARNING: Removing unreachable block (ram,0x10004650) */
/* WARNING: Removing unreachable block (ram,0x1000465c) */
/* WARNING: Removing unreachable block (ram,0x10004684) */

ulong recovered_10004e64(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    bVar2 = recovered_10005cec(0x164);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010964 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010964)(iVar1,0,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[7] = 0;
      param_1[8] = 0;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e70
 */

/* WARNING: Removing unreachable block (ram,0x10004650) */
/* WARNING: Removing unreachable block (ram,0x1000465c) */
/* WARNING: Removing unreachable block (ram,0x10004684) */

ulong recovered_10004e70(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    bVar2 = recovered_10005cec(0x164);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010964 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010964)(iVar1,1,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[7] = 1;
      param_1[8] = 0;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e7c
 */

/* WARNING: Removing unreachable block (ram,0x10004650) */
/* WARNING: Removing unreachable block (ram,0x10004684) */

ulong recovered_10004e7c(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar1 = param_1[1];
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      uVar1 = param_1[2];
    }
    bVar3 = recovered_10005cec(0x164);
    if (!bVar3) {
      return (ulong)bVar3;
    }
    if (uRam0000000082010964 != 0) {
      uVar4 = (*(code *)(ulong)uRam0000000082010964)(iVar2,2,(uVar1 * param_2 + 0x32) / 100);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_1[7] = 2;
      param_1[8] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e88
 */

/* WARNING: Removing unreachable block (ram,0x10004650) */
/* WARNING: Removing unreachable block (ram,0x10004684) */

ulong recovered_10004e88(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar1 = param_1[1];
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      uVar1 = param_1[2];
    }
    bVar3 = recovered_10005cec(0x164);
    if (!bVar3) {
      return (ulong)bVar3;
    }
    if (uRam0000000082010964 != 0) {
      uVar4 = (*(code *)(ulong)uRam0000000082010964)(iVar2,3,(uVar1 * param_2 + 0x32) / 100);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_1[7] = 3;
      param_1[8] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef DAT_82010900
#define DAT_82010900 (*(uint8_t *)(0x82010900U))
#undef _DAT_82010900
#define _DAT_82010900 (*(uint *)(0x82010900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004e94(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;

  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (iVar1 = *param_1, iVar1 != 0)) &&
     ((bVar2 = recovered_10005cec(0x100), bVar2 && (_DAT_82010900 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10004ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)_DAT_82010900)(iVar1,param_2);
    return uVar3;
  }
  return 0;
}

#undef DAT_82010900
#undef _DAT_82010900

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10004ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xb0);
  if ((bVar1) && (_DAT_820108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108b0
#undef _DAT_820108b0

#undef DAT_8201097c
#define DAT_8201097c (*(uint8_t *)(0x8201097cU))
#undef _DAT_8201097c
#define _DAT_8201097c (*(uint *)(0x8201097cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0x17c);
  if ((bVar1) && (_DAT_8201097c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201097c)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201097c
#undef _DAT_8201097c

#undef DAT_820108ac
#define DAT_820108ac (*(uint8_t *)(0x820108acU))
#undef _DAT_820108ac
#define _DAT_820108ac (*(uint *)(0x820108acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f88
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xac);
  if ((bVar1) && (_DAT_820108ac != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108ac)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108ac
#undef _DAT_820108ac

#undef DAT_820108f0
#define DAT_820108f0 (*(uint8_t *)(0x820108f0U))
#undef _DAT_820108f0
#define _DAT_820108f0 (*(uint *)(0x820108f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xf0);
  if ((bVar1) && (_DAT_820108f0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108f0)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108f0
#undef _DAT_820108f0

#undef DAT_820108fc
#define DAT_820108fc (*(uint8_t *)(0x820108fcU))
#undef _DAT_820108fc
#define _DAT_820108fc (*(uint *)(0x820108fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005038
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10005038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xfc);
  if ((bVar1) && (_DAT_820108fc != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100188c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108fc)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108fc
#undef _DAT_820108fc

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xb0);
  if ((bVar1) && (_DAT_820108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,0xe,10);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108b0
#undef _DAT_820108b0

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000508c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000508c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0xb0);
  if ((bVar1) && (_DAT_820108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10018814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,1,1);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108b0
#undef _DAT_820108b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005098
 */

bool recovered_10005098(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  do {
    uVar2 = recovered_10004d24();
    uVar1 = (uint)uVar2;
    if ((uVar1 == 0) || ((uVar1 & 0xff00) == 0x100)) break;
  } while ((uVar1 & 0xdf) != 0x51 && (uVar1 & 0xff) != 0x1b);
  return uVar1 != 0;
}


#undef DAT_8201089c
#define DAT_8201089c (*(uint8_t *)(0x8201089cU))
#undef _DAT_8201089c
#define _DAT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100050e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  for (; param_1 != 0; param_1 = param_1 + -1) {
    bVar1 = recovered_10005cec(0x9c);
    if ((bVar1) && (_DAT_8201089c != 0)) {
      (*(code *)(ulong)_DAT_8201089c)();
    }
  }
  return;
}

#undef DAT_8201089c
#undef _DAT_8201089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005124
 */

void recovered_10005124(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005134
 */

uint128 recovered_10005134(ulong param_1,long param_2,uint param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 0) = param_1 & 0xffffffff | param_2 << 0x20;
  PF_PART8(auVar1, 8) = (ulong)param_3 | param_4 << 0x20;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005148
 */

void recovered_10005148(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100066e0
#define DAT_100066e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef UNK_100066e8
#define UNK_100066e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x118U)))
#undef _DAT_100066e0
#define _DAT_100066e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef uRam00000000100066e8
#define uRam00000000100066e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005158
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005158(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_10000ee0(param_1,0,0x58);
  uVar1 = _DAT_100066e0;
  *(undefined8 *)((long)param_1 + 0x28) = uRam00000000100066e8;
  *(undefined8 *)((long)param_1 + 0x20) = uVar1;
  return;
}

#undef DAT_100066e0
#undef UNK_100066e8
#undef _DAT_100066e0
#undef uRam00000000100066e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000518c
 */

void recovered_1000518c(undefined4 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b8
 */

void recovered_100051b8(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  param_1[10] = param_2;
  *param_1 = 2;
  param_1[1] = param_1[1] | 2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051ec
 */

void recovered_100051ec(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  *param_1 = 4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005210
 */

void recovered_10005210(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 0x12) = param_3;
  *(undefined8 *)(param_1 + 0x14) = param_4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005244
 */

void recovered_10005244(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005268
 */

void recovered_10005268(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000528c
 */

void recovered_1000528c(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005158(param_1);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = param_3;
  param_1[8] = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052cc
 */

void recovered_100052cc(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,
                       undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  *(undefined8 *)(param_2 + 0x38) = param_3;
  *(undefined8 *)(param_2 + 0x40) = param_4;
  uVar3 = 0x58;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052dc
 */

void recovered_100052dc(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
  uVar3 = 0x58;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052f8
 */

void recovered_100052f8(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  *(undefined4 *)(param_2 + 0x28) = param_3;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 2;
  uVar3 = 0x58;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005314
 */

void recovered_10005314(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (-1 < param_3) {
    *(int *)(param_2 + 0x30) = param_3;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 4;
  }
  if (-1 < param_4) {
    *(int *)(param_2 + 0x34) = param_4;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 8;
  }
  uVar3 = 0x58;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005348
 */

void recovered_10005348(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)(param_2 + 0x2c) = param_3;
  uVar3 = 0x58;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005360
 */

void recovered_10005360(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (3 < param_3) {
    param_3 = 1;
  }
  *(uint *)(param_2 + 0x20) = param_3;
  uVar3 = 0x58;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005378
 */

undefined8 recovered_10005378(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (*param_1 - 1U < 7) {
    uVar4 = (int)param_2 -
            ((param_1[0xf] & (param_1[0xf] >> 0x1f ^ 0xffffffffU)) +
            (param_1[0x11] & (param_1[0x11] >> 0x1f ^ 0xffffffffU)));
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    uVar5 = (int)((ulong)param_2 >> 0x20) -
            ((param_1[0xe] & (param_1[0xe] >> 0x1f ^ 0xffffffffU)) +
            (param_1[0x10] & (param_1[0x10] >> 0x1f ^ 0xffffffffU)));
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    uVar6 = CONCAT44(uVar5,uVar4);
    uVar9 = 0;
    switch((uintptr_t)(*param_1)) {
    case 1:
      uVar9 = param_1[0xb];
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uVar8 = recovered_10005d34(*(undefined **)(param_1 + 2),(ulong)uVar9);
      uVar9 = (uint)(uVar8 >> 0x20);
      break;
    case 2:
      uVar8 = 0x10;
      goto LAB_10005494;
    case 3:
      uVar9 = param_1[0xb];
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uVar6 = recovered_10005d34(*(undefined **)(param_1 + 2),(ulong)uVar9);
      uVar8 = (ulong)((int)uVar6 + 0x14);
      iVar3 = (int)((ulong)uVar6 >> 0x20);
      if (iVar3 < 0xd) {
        iVar3 = 0xc;
      }
      uVar9 = iVar3 + 0xc;
      break;
    case 5:
      uVar5 = param_1[6];
      if (uVar5 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = param_1[7] * (uVar5 - 1);
      }
      lVar10 = 0;
      iVar3 = 0;
      uVar9 = 0;
      for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
        piVar1 = (int *)0x0;
        if (*(long *)(param_1 + 4) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 4) + lVar10);
        }
        if ((piVar1 == (int *)0x0) || (*piVar1 != 4)) {
          uVar2 = recovered_10005378(piVar1,uVar6);
          uVar7 = uVar7 + (int)uVar2;
          uVar5 = (uint)((ulong)uVar2 >> 0x20);
          if ((int)uVar9 <= (int)uVar5) {
            uVar9 = uVar5;
          }
          uVar5 = param_1[6];
        }
        else {
          iVar3 = iVar3 + 1;
        }
        lVar10 = lVar10 + 0x58;
      }
      uVar5 = uVar7;
      if ((int)uVar7 <= (int)uVar4) {
        uVar5 = uVar4;
      }
      if (iVar3 != 0) {
        uVar7 = uVar5;
      }
      uVar8 = (ulong)uVar7;
      break;
    case 6:
      uVar4 = param_1[6];
      if (uVar4 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[7] * (uVar4 - 1);
      }
      lVar10 = 0;
      iVar3 = 0;
      uVar8 = 0;
      for (uVar11 = 0; uVar11 < uVar4; uVar11 = uVar11 + 1) {
        piVar1 = (int *)0x0;
        if (*(long *)(param_1 + 4) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 4) + lVar10);
        }
        if ((piVar1 == (int *)0x0) || (*piVar1 != 4)) {
          uVar2 = recovered_10005378(piVar1,uVar6);
          uVar4 = (uint)uVar8;
          if ((int)(uint)uVar8 <= (int)(uint)uVar2) {
            uVar4 = (uint)uVar2;
          }
          uVar8 = (ulong)uVar4;
          uVar9 = uVar9 + (int)((ulong)uVar2 >> 0x20);
          uVar4 = param_1[6];
        }
        else {
          iVar3 = iVar3 + 1;
        }
        lVar10 = lVar10 + 0x58;
      }
      uVar4 = uVar9;
      if ((int)uVar9 <= (int)uVar5) {
        uVar4 = uVar5;
      }
      if (iVar3 != 0) {
        uVar9 = uVar4;
      }
      break;
    case 7:
      lVar10 = 0;
      uVar8 = 0;
      uVar9 = 0;
      for (uVar11 = 0; uVar11 < (uint)param_1[6]; uVar11 = uVar11 + 1) {
        piVar1 = (int *)0x0;
        if (*(long *)(param_1 + 4) != 0) {
          piVar1 = (int *)(*(long *)(param_1 + 4) + lVar10);
        }
        uVar2 = recovered_10005378(piVar1,uVar6);
        uVar4 = (uint)uVar8;
        if ((int)(uint)uVar8 <= (int)(uint)uVar2) {
          uVar4 = (uint)uVar2;
        }
        uVar8 = (ulong)uVar4;
        uVar4 = (uint)((ulong)uVar2 >> 0x20);
        if ((int)uVar9 <= (int)uVar4) {
          uVar9 = uVar4;
        }
        lVar10 = lVar10 + 0x58;
      }
    }
  }
  else {
LAB_10005494:
    uVar9 = (uint)uVar8;
  }
  uVar4 = (uint)uVar8;
  if (((uint)param_1[1] >> 2 & 1) != 0) {
    uVar4 = param_1[0xc] & (param_1[0xc] >> 0x1f ^ 0xffffffffU);
  }
  if (((uint)param_1[1] >> 3 & 1) != 0) {
    uVar9 = param_1[0xd] & (param_1[0xd] >> 0x1f ^ 0xffffffffU);
  }
  return CONCAT44((param_1[0xe] & (param_1[0xe] >> 0x1f ^ 0xffffffffU)) + uVar9 +
                  (param_1[0x10] & (param_1[0x10] >> 0x1f ^ 0xffffffffU)),
                  (param_1[0xf] & (param_1[0xf] >> 0x1f ^ 0xffffffffU)) + uVar4 +
                  (param_1[0x11] & (param_1[0x11] >> 0x1f ^ 0xffffffffU)));
}


#define auStack_3c (*(undefined1 (*)[4])(frame + 20))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_28 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005610
 */

int recovered_10005610(long param_1,uint *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  recovered_10000ee0(param_2,0,0x2c);
  recovered_10000ee0(auStack_3c,0,0x1c);
  if (param_1 == 0) {
    uVar3 = *param_2;
    iVar4 = 0;
  }
  else {
    uVar2 = recovered_10004e94((int *)param_1,(long)auStack_3c);
    uVar3 = *param_2;
    if ((int)uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      uVar3 = uVar3 | 1;
      *(undefined8 *)(param_2 + 3) = local_38;
      *(undefined8 *)(param_2 + 1) = local_28;
      iVar4 = 1;
    }
  }
  *param_2 = uVar3 | 2;
  iVar1 = recovered_10004b78((undefined1 *)(param_2 + 5));
  return iVar1 + iVar4;
}

#undef auStack_3c
#undef local_38
#undef local_28

#define lStack_2c8 (*(long *)(frame + 24))
#define lStack_2bc (*(long *)(frame + 36))
#define uStack_2c0 (*(uint *)(frame + 32))
#define auStack_2a8 (*(undefined1 (*)[40])(frame + 56))
#define uStack_2b0 (*(undefined8 *)(frame + 48))
#define bStack_280 (*(byte *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b4
 */

undefined8 recovered_100056b4(int *param_1,int *param_2,undefined8 param_3)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  ulong extraout_x1;
  uint128 auVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    recovered_10000ee0(auStack_2a8,0,0x278);
    uVar2 = recovered_100049d0(param_1,auStack_2a8);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((bStack_280 & 0x11) == 0) {
      cVar1 = recovered_10004980(param_1,(long)auStack_2a8);
      if (cVar1 == '\0') {
        return 0;
      }
      if (*(long *)(param_1 + 0xc) != 0) {
        recovered_10000ee0(&lStack_2c8,0,0x20);
        lStack_2c8 = *(long *)(param_1 + 0xc);
        uStack_2c0 = param_1[1];
        lStack_2bc = *(long *)(param_1 + 2);
        uStack_2b0 = param_3;
        recovered_10005798(&lStack_2c8,0,(ulong)uStack_2c0 | lStack_2bc << 0x20,param_1[4]);
        recovered_10005840(&lStack_2c8,param_2,0,*(undefined8 *)(param_1 + 1));
        auVar3 = recovered_100048ac(param_1,extraout_x1);
        return PF_PART8(auVar3, 0);
      }
    }
  }
  return 0;
}

#undef lStack_2c8
#undef lStack_2bc
#undef uStack_2c0
#undef auStack_2a8
#undef uStack_2b0
#undef bStack_280

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005798
 */

void recovered_10005798(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;

  iVar7 = (int)((ulong)param_3 >> 0x20);
  uVar5 = (uint)param_2;
  uVar6 = (uint)((ulong)param_2 >> 0x20);
  if (param_1 != (long *)0x0) {
    uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    uVar4 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    uVar8 = (ulong)uVar4;
    iVar1 = uVar5 + (int)param_3;
    if ((int)param_1[1] <= iVar1) {
      iVar1 = (int)param_1[1];
    }
    uVar6 = uVar6 + iVar7;
    if ((int)*(uint *)((long)param_1 + 0xc) <= (int)uVar6) {
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    if (((((int)uVar4 < (int)uVar6 && (int)uVar3 < iVar1) && *param_1 != 0) && 0 < (int)param_3) &&
        0 < iVar7) {
      for (; uVar8 != uVar6; uVar8 = uVar8 + 1) {
        puVar2 = (undefined1 *)(*param_1 + uVar8 * *(uint *)(param_1 + 2) + (ulong)uVar3 * 4);
        for (iVar7 = iVar1 - uVar3; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar2 = (char)((uint)param_4 >> 0x10);
          puVar2[1] = (char)((uint)param_4 >> 8);
          puVar2[2] = (char)param_4;
          puVar2[3] = 0xff;
          puVar2 = puVar2 + 4;
        }
      }
    }
  }
  return;
}


#undef DAT_10006732
#define DAT_10006732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x162U)))
#define lStack_68 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

long * recovered_10005840(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long *extraout_x0;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined *puVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  byte bVar29;
  long *plVar30;
  ulong unaff_x27;
  ulong uVar31;
  uint uVar32;
  undefined8 unaff_x28;
  long *unaff_x30;
  uint128 auVar33;
  uint128 auVar34;

  if (param_1 == (long *)0x0) {
    return unaff_x30;
  }
  if (param_2 == (int *)0x0) {
    return unaff_x30;
  }
  bVar5 = true;
  bVar6 = false;
  if (0 < (int)param_4) {
    iVar18 = (int)((ulong)param_4 >> 0x20);
    bVar6 = SBORROW4(iVar18,1);
    bVar5 = iVar18 + -1 < 0;
  }
  if (bVar5 != bVar6) {
    return unaff_x30;
  }
  iVar18 = *param_2;
  if ((*(byte *)(param_2 + 1) >> 1 & 1) == 0) {
LAB_100058c0:
    auVar34 = recovered_10005e28(param_3,param_4,*(undefined8 *)(param_2 + 0xe),
                                 *(undefined8 *)(param_2 + 0x10));
    uVar7 = PF_PART4(auVar34, 12);
    uVar32 = PF_PART4(auVar34, 8);
    switch((uintptr_t)(iVar18)) {
    case 1:
      uVar7 = param_2[0xb];
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uVar9 = recovered_10005d34(*(undefined **)(param_2 + 2),(ulong)uVar7);
      iVar18 = param_2[8];
      auVar34 = recovered_10005e74(PF_PART8(auVar34, 0),PF_PART8(auVar34, 8),uVar9,iVar18);
      puVar14 = &DAT_10006732;
      if (*(undefined **)(param_2 + 2) != (undefined *)0x0) {
        puVar14 = *(undefined **)(param_2 + 2);
      }
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        iVar16 = 0x202020;
      }
      else {
        iVar16 = param_2[9];
      }
      uVar7 = param_2[0xb];
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      goto LAB_10005bc0;
    case 2:
      if ((*(byte *)(param_2 + 1) >> 1 & 1) == 0) {
        iVar18 = 0xf4f4f4;
      }
      else {
        iVar18 = param_2[10];
      }
      if (param_1 != (long *)0x0) {
        uVar11 = PF_PART4(auVar34, 0);
        uVar12 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        uVar20 = PF_PART4(auVar34, 4);
        uVar4 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
        uVar22 = (ulong)uVar4;
        iVar16 = uVar11 + uVar32;
        if ((int)param_1[1] <= (int)(uVar11 + uVar32)) {
          iVar16 = (int)param_1[1];
        }
        uVar11 = uVar20 + uVar7;
        if ((int)*(uint *)((long)param_1 + 0xc) <= (int)(uVar20 + uVar7)) {
          uVar11 = *(uint *)((long)param_1 + 0xc);
        }
        if (((((int)uVar4 < (int)uVar11 && (int)uVar12 < iVar16) && *param_1 != 0) &&
            0 < (int)uVar32) && 0 < (int)uVar7) {
          for (; uVar22 != uVar11; uVar22 = uVar22 + 1) {
            puVar1 = (undefined1 *)(*param_1 + uVar22 * *(uint *)(param_1 + 2) + (ulong)uVar12 * 4);
            for (iVar26 = iVar16 - uVar12; iVar26 != 0; iVar26 = iVar26 + -1) {
              *puVar1 = (char)((uint)iVar18 >> 0x10);
              puVar1[1] = (char)((uint)iVar18 >> 8);
              puVar1[2] = (char)iVar18;
              puVar1[3] = 0xff;
              puVar1 = puVar1 + 4;
            }
          }
        }
      }
      return param_1;
    case 3:
      goto switchD_100058ec_caseD_3;
    default:
      return unaff_x30;
    case 5:
      bVar5 = true;
      break;
    case 6:
      bVar5 = false;
      break;
    case 7:
      if (*(long *)(param_2 + 4) == 0) {
        return unaff_x30;
      }
      lVar28 = 0;
      for (uVar22 = 0; uVar22 < (uint)param_2[6]; uVar22 = uVar22 + 1) {
        lVar15 = *(long *)(param_2 + 4);
        uVar9 = recovered_10005378((int *)(lVar15 + lVar28),
                                   CONCAT44(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU),
                                            uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU)));
        auVar33 = recovered_10005e74(PF_PART8(auVar34, 0),PF_PART8(auVar34, 8),uVar9,param_2[8]);
        recovered_10005840(param_1,(int *)(lVar15 + lVar28),PF_PART8(auVar33, 0),PF_PART8(auVar33, 8));
        lVar28 = lVar28 + 0x58;
      }
      return unaff_x30;
    }
    auVar34 = recovered_10005e28(param_3,param_4,*(undefined8 *)(param_2 + 0xe),
                                 *(undefined8 *)(param_2 + 0x10));
    uVar7 = recovered_10005d98((long)param_2);
    plVar10 = (long *)(ulong)uVar7;
    iVar26 = PF_PART4(auVar34, 0);
    iVar16 = PF_PART4(auVar34, 4);
    iVar18 = iVar26;
    if (!bVar5) {
      iVar18 = iVar16;
    }
    if ((*(long *)(param_2 + 4) != 0) && (uVar22 = (ulong)(uint)param_2[6], param_2[6] != 0)) {
      lVar28 = 0;
      iVar24 = 0;
      uVar7 = PF_PART4(auVar34, 8);
      uVar32 = PF_PART4(auVar34, 12);
      lStack_68 = CONCAT44(uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU),
                           uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
      plVar30 = plVar10;
      for (uVar25 = 0; uVar25 < uVar22; uVar25 = uVar25 + 1) {
        if (*(int *)(*(long *)(param_2 + 4) + lVar28) == 4) {
          iVar24 = iVar24 + 1;
        }
        else {
          plVar10 = (long *)recovered_10005378((int *)(*(long *)(param_2 + 4) + lVar28),lStack_68);
          iVar8 = (int)plVar10;
          if (!bVar5) {
            iVar8 = (int)((ulong)plVar10 >> 0x20);
          }
          plVar30 = (long *)(ulong)(uint)((int)plVar30 + iVar8);
          uVar22 = (ulong)(uint)param_2[6];
        }
        lVar28 = lVar28 + 0x58;
      }
      if (iVar24 == 0) {
        uVar12 = 0;
      }
      else {
        uVar4 = uVar7;
        if (!bVar5) {
          uVar4 = uVar32;
        }
        uVar4 = uVar4 - (int)plVar30;
        uVar12 = 0;
        if (iVar24 != 0) {
          uVar12 = (int)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) / iVar24;
        }
      }
      lVar28 = 0;
      uVar25 = 0;
      uVar4 = uVar12;
      uVar11 = uVar32;
      if (!bVar5) {
        uVar4 = uVar7;
        uVar11 = uVar12;
      }
      for (; uVar25 < uVar22; uVar25 = uVar25 + 1) {
        lVar15 = *(long *)(param_2 + 4);
        uVar9 = recovered_10005378((int *)(lVar15 + lVar28),lStack_68);
        iVar24 = *(int *)(lVar15 + lVar28);
        uVar23 = (uint)((ulong)uVar9 >> 0x20);
        uVar20 = uVar4;
        uVar3 = uVar11;
        if (iVar24 != 4) {
          uVar20 = (uint)uVar9;
          uVar3 = uVar23;
        }
        uVar19 = uVar12;
        if (bVar5) {
          if (iVar24 != 4) {
            uVar19 = (uint)uVar9;
          }
          iVar24 = param_2[8];
          uVar20 = uVar32;
          if (iVar24 != 3) {
            uVar20 = uVar3;
          }
          uVar9 = CONCAT44(uVar20,uVar19);
          iVar8 = (iVar16 + uVar32) - uVar3;
          if ((int)uVar32 <= (int)uVar20 || iVar24 != 2) {
            iVar8 = iVar16;
          }
          if (iVar24 == 1 && (int)uVar20 < (int)uVar32) {
            iVar8 = (int)(uVar32 - uVar3) / 2 + iVar16;
          }
          iVar24 = iVar18;
        }
        else {
          iVar8 = param_2[8];
          uVar3 = uVar7;
          if (iVar8 != 3) {
            uVar3 = uVar20;
          }
          if (iVar24 != 4) {
            uVar19 = uVar23;
          }
          uVar9 = CONCAT44(uVar19,uVar3);
          iVar24 = (iVar26 + uVar7) - uVar20;
          if ((int)uVar7 <= (int)uVar3 || iVar8 != 2) {
            iVar24 = iVar26;
          }
          if (iVar8 == 1 && (int)uVar3 < (int)uVar7) {
            iVar24 = (int)(uVar7 - uVar20) / 2 + iVar26;
          }
          iVar8 = iVar18;
        }
        iVar18 = param_2[7] + iVar18 + uVar19;
        plVar10 = recovered_10005840(param_1,(int *)(lVar15 + lVar28),CONCAT44(iVar8,iVar24),uVar9);
        uVar22 = (ulong)(uint)param_2[6];
        lVar28 = lVar28 + 0x58;
      }
    }
    return plVar10;
  }
  if (iVar18 != 3) {
    recovered_10005798(param_1,param_3,param_4,param_2[10]);
    iVar18 = *param_2;
    goto LAB_100058c0;
  }
  auVar34 = recovered_10005e28(param_3,param_4,*(undefined8 *)(param_2 + 0xe),
                               *(undefined8 *)(param_2 + 0x10));
switchD_100058ec_caseD_3:
  uVar22 = PF_PART8(auVar34, 8);
  uVar25 = PF_PART8(auVar34, 0);
  pbVar21 = (byte *)param_1[3];
  iVar18 = PF_PART4(auVar34, 8);
  iVar16 = PF_PART4(auVar34, 0);
  if ((pbVar21 == (byte *)0x0) || ((*pbVar21 & 1) == 0)) {
LAB_10005998:
    bVar13 = 0;
    bVar5 = false;
    bVar29 = 0;
  }
  else {
    if (((*(int *)(pbVar21 + 4) < iVar16 || *(int *)(pbVar21 + 8) < PF_PART4(auVar34, 4)) ||
         iVar16 + iVar18 <= *(int *)(pbVar21 + 4)) ||
       (PF_PART4(auVar34, 4) + PF_PART4(auVar34, 12) <= *(int *)(pbVar21 + 8))) goto LAB_10005998;
    bVar13 = pbVar21[0xc] & 1;
    bVar29 = pbVar21[0x10] & 1;
    bVar5 = true;
  }
  if ((*(byte *)(param_2 + 1) >> 1 & 1) == 0) {
    uVar7 = 0xf4f4f4;
    if (bVar13 == 0) goto LAB_100059b8;
LAB_100059d4:
    uVar32 = 0;
    uVar12 = 0xc;
LAB_100059e0:
    uVar7 = recovered_100063a0(uVar7,uVar32,uVar12);
  }
  else {
    uVar7 = param_2[10];
    if (bVar13 != 0) goto LAB_100059d4;
LAB_100059b8:
    if (bVar5) {
      uVar32 = 0xffffff;
      uVar12 = 0x12;
      goto LAB_100059e0;
    }
  }
  recovered_10005798(param_1,uVar25,uVar22,uVar7);
  if (0 < iVar18 && 0 < PF_PART4(auVar34, 12)) {
    uVar2 = 0x286dc4;
    if (!bVar5) {
      uVar2 = 0x9a9a9a;
    }
    uVar27 = uVar22 & 0x7fffffff | 0x100000000;
    recovered_10005798(param_1,uVar25,uVar27,uVar2);
    uVar31 = uVar22 & 0xffffffff00000000;
    recovered_10005798(param_1,(uVar31 + uVar25 & 0xffffffff00000000 | uVar25 & 0xffffffff) -
                               0x100000000,uVar27,uVar2);
    recovered_10005798(param_1,uVar25,uVar31 | 1,uVar2);
    recovered_10005798(param_1,(ulong)((iVar18 + iVar16) - 1) | uVar25 & 0xffffffff00000000,
                       uVar31 | 1,uVar2);
  }
  if ((bVar29 != 0) && (*(code **)(param_2 + 0x12) != (code *)0x0)) {
    (**(code **)(param_2 + 0x12))(*(undefined8 *)(param_2 + 0x14));
  }
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    iVar16 = 0x202020;
  }
  else {
    iVar16 = param_2[9];
  }
  puVar14 = &DAT_10006732;
  if (*(undefined **)(param_2 + 2) != (undefined *)0x0) {
    puVar14 = *(undefined **)(param_2 + 2);
  }
  auVar34 = recovered_10005e28(uVar25,uVar22,0xa00000006,0xa00000006);
  uVar7 = param_2[0xb];
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  iVar18 = 1;
LAB_10005bc0:
  uVar22 = PF_PART8(auVar34, 0);
  plVar10 = recovered_10000ee0(&lStack_68,0,0x18);
  if (((param_1 != (long *)0x0) && (puVar14 != (undefined *)0x0)) && (*param_1 != 0)) {
    iVar26 = PF_PART4(auVar34, 8);
    iVar24 = PF_PART4(auVar34, 12);
    if (((0 < iVar26 && 0 < iVar24) &&
        (plVar10 = (long *)recovered_10005dbc(puVar14,(ulong)uVar7,(ulong)(iVar16 << 8 | 0xff),
                                              &lStack_68), (int)plVar10 != 0)) &&
       (plVar10 = (long *)0x0, lStack_68 != 0)) {
      iVar16 = PF_PART4(auVar34, 4);
      uVar7 = PF_PART4(auVar34, 0);
      unaff_x28 = *(uint64_t *)((uint8_t *)&lStack_68+8);
      unaff_x27 = *(uint64_t *)((uint8_t *)&lStack_68+16);
      uVar32 = (uint)((ulong)unaff_x28 >> 0x20);
      if (iVar18 == 2) {
        uVar12 = uVar7;
        if ((int)uVar32 < iVar26) {
          uVar12 = (uVar7 + iVar26) - uVar32;
        }
        uVar22 = (ulong)uVar12;
      }
      else if ((iVar18 == 1) && (iVar26 - uVar32 != 0 && (int)uVar32 <= iVar26)) {
        uVar22 = (ulong)((int)(iVar26 - uVar32) / 2 + uVar7);
      }
      iVar8 = iVar24 - (int)unaff_x27;
      iVar18 = iVar16;
      if (iVar8 != 0 && (int)unaff_x27 <= iVar24) {
        iVar18 = iVar8 / 2 + iVar16;
      }
      for (uVar25 = 0; uVar25 < (unaff_x27 & 0xffffffff); uVar25 = uVar25 + 1) {
        uVar12 = iVar18 + (int)uVar25;
        if (((iVar16 <= (int)uVar12 && (int)uVar12 < iVar16 + iVar24) && (-1 < (int)uVar12)) &&
           ((int)uVar12 < *(int *)((long)param_1 + 0xc))) {
          uVar31 = uVar22;
          lVar28 = lStack_68;
          for (uVar27 = 0; uVar27 < uVar32; uVar27 = uVar27 + 1) {
            iVar8 = (int)uVar31;
            if ((((int)uVar7 <= iVar8 && iVar8 < (int)(uVar7 + iVar26)) && (-1 < iVar8)) &&
               ((iVar8 < (int)param_1[1] &&
                ((*param_1 != 0 && ((int)uVar12 < *(int *)((long)param_1 + 0xc))))))) {
              lVar15 = lVar28 + uVar25 * (unaff_x27 >> 0x20);
              bVar13 = *(byte *)(lVar15 + 3);
              if (bVar13 != 0) {
                lVar17 = uVar25 * (unaff_x27 >> 0x20);
                pbVar21 = (byte *)(*param_1 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar12 +
                                  (uVar31 & 0xffffffff) * 4);
                if (bVar13 == 0xff) {
                  *pbVar21 = *(byte *)(lVar28 + lVar17);
                  pbVar21[1] = *(byte *)(lVar15 + 1);
                  bVar13 = *(byte *)(lVar15 + 2);
                }
                else {
                  uVar11 = (uint)bVar13;
                  uVar4 = uVar11 ^ 0xff;
                  *pbVar21 = (byte)((uVar4 * *pbVar21 + *(byte *)(lVar28 + lVar17) * uVar11 + 0x7f)
                                   / 0xff);
                  pbVar21[1] = (byte)((uVar4 * pbVar21[1] + *(byte *)(lVar15 + 1) * uVar11 + 0x7f) /
                                     0xff);
                  bVar13 = (byte)((uVar4 * pbVar21[2] + *(byte *)(lVar15 + 2) * uVar11 + 0x7f) /
                                 0xff);
                }
                pbVar21[2] = bVar13;
                pbVar21[3] = 0xff;
              }
            }
            uVar31 = (ulong)(iVar8 + 1);
            lVar28 = lVar28 + 4;
          }
        }
      }
      recovered_10004df4(lStack_68);
      plVar10 = extraout_x0;
    }
  }
  return plVar10;
}

#undef DAT_10006732
#undef lStack_68

#define auStack_5f8 (*(undefined1 (*)[632])(frame + 24))
#define aiStack_380 (*(int (*)[212])(frame + 656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bf4
 */

undefined8 recovered_10005bf4(undefined8 *param_1)

{
  unsigned char frame[1584] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;

  uVar5 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[10] == 0) {
      uVar5 = 0;
    }
    else {
      recovered_10000ee0(aiStack_380,0,0x350);
      piVar1 = aiStack_380;
      if ((int *)*param_1 != (int *)0x0) {
        piVar1 = (int *)*param_1;
      }
      if ((*piVar1 != 0) || (uVar5 = recovered_100042bc(piVar1,param_1 + 1), (int)uVar5 != 0)) {
        uVar6 = 1;
        while (bVar3 = recovered_10004d5c(piVar1), !bVar3) {
          recovered_10000ee0(auStack_5f8,0,0x278);
          recovered_100049d0(piVar1,auStack_5f8);
          if (((((code *)param_1[0xb] != (code *)0x0) &&
               (iVar4 = (*(code *)param_1[0xb])(piVar1,auStack_5f8,param_1[0xc]), iVar4 == 0)) ||
              (iVar4 = (*(code *)param_1[10])(piVar1,param_1[0xc]), iVar4 == 0)) ||
             (*(int *)(param_1 + 0xd) - 1U < uVar6)) break;
          uVar2 = *(uint *)((long)param_1 + 0x6c);
          if (uVar2 < 2) {
            uVar2 = 1;
          }
          recovered_100050e0(uVar2);
          uVar6 = uVar6 + 1;
        }
        recovered_10004d98(piVar1);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

#undef auStack_5f8
#undef aiStack_380

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
 * Address: 0x10005cec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005cec(int param_1)

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

#undef DAT_10006732
#define DAT_10006732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x162U)))
#define uStack_2c (*(uint *)(frame + 36))
#define auStack_38 (*(undefined1 (*)[12])(frame + 24))
#define uStack_28 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d34
 */

undefined8 recovered_10005d34(undefined *param_1,undefined8 param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined8 uVar2;

  recovered_10000ee0(auStack_38,0,0x18);
  puVar1 = &DAT_10006732;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  uVar2 = recovered_10005dbc(puVar1,param_2,0,auStack_38);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT44(uStack_28 & ((int)uStack_28 >> 0x1f ^ 0xffffffffU),
                     uStack_2c & ((int)uStack_2c >> 0x1f ^ 0xffffffffU));
  }
  return uVar2;
}

#undef DAT_10006732
#undef uStack_2c
#undef auStack_38
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d98
 */

int recovered_10005d98(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 0;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) < 2) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x1c) * (*(uint *)(param_1 + 0x18) - 1);
  }
  return iVar1;
}


#undef DAT_82010978
#define DAT_82010978 (*(uint8_t *)(0x82010978U))
#undef _DAT_82010978
#define _DAT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dbc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10005dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10005cec(0x178);
  if ((bVar1) && (_DAT_82010978 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010978)(param_1,0xffffffff,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010978
#undef _DAT_82010978

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e28
 */

uint128 recovered_10005e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint128 auVar5;

  uVar4 = (uint)((ulong)param_4 >> 0x20);
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  uVar1 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
  uVar4 = (int)param_2 - ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + uVar3);
  uVar2 = (int)((ulong)param_2 >> 0x20) -
          (((uint)param_4 & ((int)(uint)param_4 >> 0x1f ^ 0xffffffffU)) + uVar1);
  PF_PART4(auVar5, 12) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  PF_PART4(auVar5, 8) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  PF_PART4(auVar5, 4) = uVar1 + (int)((ulong)param_1 >> 0x20);
  PF_PART4(auVar5, 0) = uVar3 + (int)param_1;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e74
 */

uint128 recovered_10005e74(ulong param_1,ulong param_2,undefined8 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint128 auVar11;

  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = param_1 >> 0x20;
  uVar10 = param_2 >> 0x20;
  uVar3 = (uint)param_2;
  uVar1 = uVar3;
  if ((int)(uint)param_3 <= (int)uVar3) {
    uVar1 = (uint)param_3;
  }
  uVar7 = (ulong)uVar1;
  uVar9 = (uint)(param_2 >> 0x20);
  uVar2 = uVar9;
  if ((int)uVar4 <= (int)uVar9) {
    uVar2 = uVar4;
  }
  uVar8 = (ulong)uVar2;
  if (param_4 != 3) {
    iVar5 = (int)(param_1 >> 0x20);
    param_2 = uVar7;
    uVar10 = uVar8;
    if (param_4 == 2) {
      param_1 = (ulong)(((int)param_1 + uVar3) - uVar1);
      uVar6 = (ulong)((iVar5 + uVar9) - uVar2);
    }
    else if (param_4 == 1) {
      param_1 = (ulong)(uint)((int)(uVar3 - uVar1) / 2 + (int)param_1);
      uVar6 = (ulong)(uint)((int)(uVar9 - uVar2) / 2 + iVar5);
    }
  }
  PF_PART8(auVar11, 0) = param_1 & 0xffffffff | uVar6 << 0x20;
  PF_PART8(auVar11, 8) = param_2 & 0xffffffff | uVar10 << 0x20;
  return auVar11;
}


#define lStack_68 (*(long *)(frame + 24))
#define uStack_58 (*(uint *)(frame + 40))
#define uStack_5c (*(uint *)(frame + 36))
#define uStack_54 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ef8
 */

void recovered_10005ef8(long *param_1,ulong param_2,undefined8 param_3,long param_4,int param_5,
                       undefined8 param_6,int param_7)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;

  recovered_10000ee0(&lStack_68,0,0x18);
  if (((param_1 != (long *)0x0) && (param_4 != 0)) && (*param_1 != 0)) {
    iVar17 = (int)param_3;
    iVar18 = (int)((ulong)param_3 >> 0x20);
    if (((0 < iVar17 && 0 < iVar18) &&
        (uVar4 = recovered_10005dbc(param_4,param_6,(ulong)(param_5 << 8 | 0xff),&lStack_68),
        (int)uVar4 != 0)) && (lStack_68 != 0)) {
      iVar11 = (int)(param_2 >> 0x20);
      uVar16 = (uint)param_2;
      if (param_7 == 2) {
        uVar2 = uVar16;
        if ((int)uStack_5c < iVar17) {
          uVar2 = (uVar16 + iVar17) - uStack_5c;
        }
        param_2 = (ulong)uVar2;
      }
      else if ((param_7 == 1) && (iVar17 - uStack_5c != 0 && (int)uStack_5c <= iVar17)) {
        param_2 = (ulong)((int)(iVar17 - uStack_5c) / 2 + uVar16);
      }
      iVar12 = iVar11;
      if (iVar18 - uStack_58 != 0 && (int)uStack_58 <= iVar18) {
        iVar12 = (int)(iVar18 - uStack_58) / 2 + iVar11;
      }
      for (uVar13 = 0; uVar13 < uStack_58; uVar13 = uVar13 + 1) {
        uVar2 = iVar12 + (int)uVar13;
        if (((iVar11 <= (int)uVar2 && (int)uVar2 < iVar11 + iVar18) && (-1 < (int)uVar2)) &&
           ((int)uVar2 < *(int *)((long)param_1 + 0xc))) {
          uVar6 = param_2;
          lVar15 = lStack_68;
          for (uVar14 = 0; uVar14 < uStack_5c; uVar14 = uVar14 + 1) {
            iVar5 = (int)uVar6;
            if ((((int)uVar16 <= iVar5 && iVar5 < (int)(uVar16 + iVar17)) && (-1 < iVar5)) &&
               ((iVar5 < (int)param_1[1] &&
                ((*param_1 != 0 && ((int)uVar2 < *(int *)((long)param_1 + 0xc))))))) {
              lVar8 = lVar15 + uVar13 * uStack_54;
              bVar7 = *(byte *)(lVar8 + 3);
              if (bVar7 != 0) {
                lVar10 = uVar13 * uStack_54;
                pbVar1 = (byte *)(*param_1 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar2 +
                                 (uVar6 & 0xffffffff) * 4);
                if (bVar7 == 0xff) {
                  *pbVar1 = *(byte *)(lVar15 + lVar10);
                  pbVar1[1] = *(byte *)(lVar8 + 1);
                  bVar7 = *(byte *)(lVar8 + 2);
                }
                else {
                  uVar9 = (uint)bVar7;
                  uVar3 = uVar9 ^ 0xff;
                  *pbVar1 = (byte)((uVar3 * *pbVar1 + *(byte *)(lVar15 + lVar10) * uVar9 + 0x7f) /
                                  0xff);
                  pbVar1[1] = (byte)((uVar3 * pbVar1[1] + *(byte *)(lVar8 + 1) * uVar9 + 0x7f) /
                                    0xff);
                  bVar7 = (byte)((uVar3 * pbVar1[2] + *(byte *)(lVar8 + 2) * uVar9 + 0x7f) / 0xff);
                }
                pbVar1[2] = bVar7;
                pbVar1[3] = 0xff;
              }
            }
            uVar6 = (ulong)(iVar5 + 1);
            lVar15 = lVar15 + 4;
          }
        }
      }
      recovered_10004df4(lStack_68);
    }
  }
  return;
}

#undef lStack_68
#undef uStack_58
#undef uStack_5c
#undef uStack_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000613c
 */

void recovered_1000613c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint128 auVar22;

  auVar22 = recovered_10005e28(param_3,param_4,*(undefined8 *)(param_2 + 0x38),
                               *(undefined8 *)(param_2 + 0x40));
  iVar5 = recovered_10005d98(param_2);
  iVar14 = PF_PART4(auVar22, 0);
  iVar8 = PF_PART4(auVar22, 4);
  iVar20 = iVar14;
  if (param_5 == 0) {
    iVar20 = iVar8;
  }
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (uVar10 = (ulong)*(uint *)(param_2 + 0x18), *(uint *)(param_2 + 0x18) != 0)) {
    lVar15 = 0;
    iVar11 = 0;
    uVar17 = PF_PART4(auVar22, 8);
    uVar21 = PF_PART4(auVar22, 12);
    uVar12 = CONCAT44(uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU),
                      uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    for (uVar16 = 0; uVar16 < uVar10; uVar16 = uVar16 + 1) {
      if (*(int *)(*(long *)(param_2 + 0x10) + lVar15) == 4) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar7 = recovered_10005378((int *)(*(long *)(param_2 + 0x10) + lVar15),uVar12);
        iVar6 = (int)uVar7;
        if (param_5 == 0) {
          iVar6 = (int)((ulong)uVar7 >> 0x20);
        }
        iVar5 = iVar5 + iVar6;
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
      }
      lVar15 = lVar15 + 0x58;
    }
    if (iVar11 == 0) {
      uVar19 = 0;
    }
    else {
      uVar1 = uVar17;
      if (param_5 == 0) {
        uVar1 = uVar21;
      }
      uVar19 = 0;
      if (iVar11 != 0) {
        uVar19 = (int)(uVar1 - iVar5 & ((int)(uVar1 - iVar5) >> 0x1f ^ 0xffffffffU)) / iVar11;
      }
    }
    lVar15 = 0;
    uVar16 = 0;
    uVar1 = uVar19;
    uVar4 = uVar21;
    if (param_5 == 0) {
      uVar1 = uVar17;
      uVar4 = uVar19;
    }
    for (; uVar16 < uVar10; uVar16 = uVar16 + 1) {
      lVar18 = *(long *)(param_2 + 0x10);
      uVar7 = recovered_10005378((int *)(lVar18 + lVar15),uVar12);
      iVar5 = *(int *)(lVar18 + lVar15);
      uVar13 = (uint)((ulong)uVar7 >> 0x20);
      uVar2 = uVar1;
      uVar3 = uVar4;
      if (iVar5 != 4) {
        uVar2 = (uint)uVar7;
        uVar3 = uVar13;
      }
      uVar9 = uVar19;
      if (param_5 == 0) {
        iVar11 = *(int *)(param_2 + 0x20);
        uVar3 = uVar17;
        if (iVar11 != 3) {
          uVar3 = uVar2;
        }
        if (iVar5 != 4) {
          uVar9 = uVar13;
        }
        uVar7 = CONCAT44(uVar9,uVar3);
        iVar5 = (iVar14 + uVar17) - uVar2;
        if ((int)uVar17 <= (int)uVar3 || iVar11 != 2) {
          iVar5 = iVar14;
        }
        if (iVar11 == 1 && (int)uVar3 < (int)uVar17) {
          iVar5 = (int)(uVar17 - uVar2) / 2 + iVar14;
        }
        iVar11 = iVar20;
      }
      else {
        if (iVar5 != 4) {
          uVar9 = (uint)uVar7;
        }
        iVar5 = *(int *)(param_2 + 0x20);
        uVar2 = uVar21;
        if (iVar5 != 3) {
          uVar2 = uVar3;
        }
        uVar7 = CONCAT44(uVar2,uVar9);
        iVar11 = (iVar8 + uVar21) - uVar3;
        if ((int)uVar21 <= (int)uVar2 || iVar5 != 2) {
          iVar11 = iVar8;
        }
        if (iVar5 == 1 && (int)uVar2 < (int)uVar21) {
          iVar11 = (int)(uVar21 - uVar3) / 2 + iVar8;
        }
        iVar5 = iVar20;
      }
      iVar20 = *(int *)(param_2 + 0x1c) + iVar20 + uVar9;
      recovered_10005840(param_1,(int *)(lVar18 + lVar15),CONCAT44(iVar11,iVar5),uVar7);
      uVar10 = (ulong)*(uint *)(param_2 + 0x18);
      lVar15 = lVar15 + 0x58;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a0
 */

uint recovered_100063a0(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 100 - param_3;
  if (99 < param_3) {
    param_3 = 100;
  }
  return (param_3 * (param_2 & 0xff) + iVar1 * (param_1 & 0xff) + 0x32 & 0xffff) / 100 |
         (param_3 * (param_2 >> 8 & 0xff) + iVar1 * (param_1 >> 8 & 0xff) + 0x32 & 0xffff) / 100 <<
         8 | (param_3 * (param_2 >> 0x10 & 0xff) + iVar1 * (param_1 >> 0x10 & 0xff) + 0x32 & 0xffff)
             / 100 << 0x10;
}

/* TerrorUI value operations */
PFUIInsets pf_ui_insets(int32_t all){return (PFUIInsets){all,all,all,all};}
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y){return (PFUIInsets){y,x,y,x};}
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l){return (PFUIInsets){t,r,b,l};}
PFUIView pf_ui_view_empty(void){PFUIView v={0};v.alignment=1;v.foreground=0x202020;v.background=0xf6f6f6;v.scale=1;return v;}
PFUIView pf_ui_text(uintptr_t text){PFUIView v=pf_ui_view_empty();v.type=1;v.text=text;return v;}
PFUIView pf_ui_rectangle(uint32_t color){PFUIView v=pf_ui_view_empty();v.type=2;v.background=color;v.flags=2;return v;}
PFUIView pf_ui_spacer(void){PFUIView v=pf_ui_view_empty();v.type=4;return v;}
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_text(text);v.type=3;v.callback=callback;v.userdata=userdata;return v;}
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_view_empty();v.type=5;v.children=children;v.count=count;v.spacing=spacing;return v;}
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_hstack(children,count,spacing);v.type=6;return v;}
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count){PFUIView v=pf_ui_hstack(children,count,0);v.type=7;return v;}
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding){v.padding=padding;return v;}
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color){v.foreground=color;v.flags|=1;return v;}
PFUIView pf_ui_view_background(PFUIView v,uint32_t color){v.background=color;v.flags|=2;return v;}
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height){if(width>=0){v.flags|=4;v.width=width;}if(height>=0){v.flags|=8;v.height=height;}return v;}
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale){v.scale=scale?scale:1;return v;}
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment){v.alignment=alignment<4?alignment:1;return v;}
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height){PFUIWindowSpec s={0};s.title=title;s.width=width;s.height=height;s.stride=width*4;s.background=0xf6f6f6;s.transparency=~0U;s.shadow=~0U;s.mode=-1;return s;}
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value){s.transparency=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value){s.shadow=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount){s.mode=(uint32_t)mode+1<5?mode:-1;s.amount=amount<100?amount:100;return s;}
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s){s.mode=0;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s){s.mode=1;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value){s.mode=2;s.amount=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value){s.mode=3;s.amount=value<100?value:100;return s;}

/* Explicit service wrappers preserve arguments across native tail calls. */
static uintptr_t pf_ui_service(uint32_t offset){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x6800U;
#endif
 if(api[0]!=0x50414d57U||!api[1]||api[2]<offset+4)return 0;
 return api[offset/4];
}
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b){uintptr_t fn=pf_ui_service(0xb0);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,a,b):0;}
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count){uintptr_t fn=pf_ui_service(0xac);return fn?((uint32_t(*)(void*,uint32_t,void*))fn)(records,capacity,count):0;}
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command){uintptr_t fn=pf_ui_service(0xf0);return fn?((uint32_t(*)(uint32_t,uint32_t,uint32_t))fn)(id,menu,command):0;}
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons,uint32_t flags){uintptr_t fn=pf_ui_service(0xfc);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,buttons,flags):0;}
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state){uintptr_t fn=pf_ui_service(0x100);return window&&*window&&state&&fn?((uint32_t(*)(uint32_t,void*))fn)(*window,state):0;}
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,14,10);}
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,1,1);}
