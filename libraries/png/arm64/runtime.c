/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100140e0
#define DAT_100140e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a0cU)))
#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x40010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x4001008cU))
#undef DAT_40010238
#define DAT_40010238 (*(uint8_t *)(0x40010238U))
#undef DAT_4001023c
#define DAT_4001023c (*(uint8_t *)(0x4001023cU))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x40010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x4001008cU))
#undef _DAT_40010238
#define _DAT_40010238 (*(int *)(0x40010238U))
#undef _DAT_4001023c
#define _DAT_4001023c (*(uint *)(0x4001023cU))
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

  DAT_100140e0 = 0;
  uStack_48 = 0;
  DAT_100140e8 = 0;
  uVar4 = _DAT_4001008c;
  if (0xf < _DAT_4001008c) {
    uVar4 = 0x10;
  }
  if ((_DAT_40010238 == 0x34364857) && (_DAT_4001023c != 0)) {
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = _DAT_4001023c;
    if (0x3f < _DAT_4001023c) {
      uVar4 = 0x40;
    }
    for (; uVar5 != uVar4; uVar5 = uVar5 + 1) {
      lVar7 = *(long *)(uVar5 * 0x10 + 0x40010248);
      if (lVar7 != 0) {
        uVar6 = *(ulong *)(uVar5 * 0x10 + 0x40010240);
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
      uVar2 = *(uint *)(uVar5 * 8 + 0x40010094);
      if (uVar2 != 0) {
        uVar6 = (ulong)*(uint *)(uVar5 * 8 + 0x40010090);
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
    recovered_10001dd4(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_100140e8 == 0) {
    uVar4 = _DAT_40010088 & 0xfffffff0;
    if (_DAT_40010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300028 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10001dd4(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  DAT_100140e0 = 1;
  return;
}

#undef DAT_100140e0
#undef DAT_100140e8
#undef DAT_40010088
#undef DAT_4001008c
#undef DAT_40010238
#undef DAT_4001023c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef _DAT_40010238
#undef _DAT_4001023c
#undef auStack_458
#undef uStack_48

#undef DAT_100140e0
#define DAT_100140e0 (*(byte *)(((uintptr_t)pf_module_state + 0x7a0cU)))
#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x40010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x4001008cU))
#undef DAT_40010238
#define DAT_40010238 (*(uint8_t *)(0x40010238U))
#undef DAT_4001023c
#define DAT_4001023c (*(uint8_t *)(0x4001023cU))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x40010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x4001008cU))
#undef _DAT_40010238
#define _DAT_40010238 (*(int *)(0x40010238U))
#undef _DAT_4001023c
#define _DAT_4001023c (*(uint *)(0x4001023cU))
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
  if ((DAT_100140e0 & 1) == 0) {
    DAT_100140e8 = 0;
    uVar4 = _DAT_4001008c;
    if (0xf < _DAT_4001008c) {
      uVar4 = 0x10;
    }
    if ((_DAT_40010238 == 0x34364857) && (_DAT_4001023c != 0)) {
      uVar5 = 0;
      uVar3 = 0;
      uVar4 = _DAT_4001023c;
      if (0x3f < _DAT_4001023c) {
        uVar4 = 0x40;
      }
      for (; uVar5 != uVar4; uVar5 = uVar5 + 1) {
        lVar7 = *(long *)(uVar5 * 0x10 + 0x40010248);
        if (lVar7 != 0) {
          uVar6 = *(ulong *)(uVar5 * 0x10 + 0x40010240);
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
        uVar2 = *(uint *)(uVar5 * 8 + 0x40010094);
        if (uVar2 != 0) {
          uVar6 = (ulong)*(uint *)(uVar5 * 8 + 0x40010090);
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
      recovered_10001dd4(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_100140e8 == 0) {
      uVar4 = _DAT_40010088 & 0xfffffff0;
      if (_DAT_40010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300028 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10001dd4(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    DAT_100140e0 = 1;
  }
  return;
}

#undef DAT_100140e0
#undef DAT_100140e8
#undef DAT_40010088
#undef DAT_4001008c
#undef DAT_40010238
#undef DAT_4001023c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef _DAT_40010238
#undef _DAT_4001023c
#undef local_48
#undef auStack_458

#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000082c
 */

ulong recovered_1000082c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005c4();
  uVar1 = 0;
  for (plVar2 = &DAT_100140e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_100140e8

#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000878
 */

long recovered_10000878(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c4();
  lVar1 = 0;
  for (plVar2 = &DAT_100140e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_100140e8

#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008b8
 */

ulong recovered_100008b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005c4();
  uVar1 = 0;
  for (plVar2 = &DAT_100140e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_100140e8

#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f4
 */

long recovered_100008f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c4();
  lVar1 = 0;
  for (plVar2 = &DAT_100140e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_100140e8

#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000924
 */

ulong * recovered_10000924(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;

  if (param_1 != 0) {
    recovered_100005c4();
    uVar1 = param_1 + 0xfU & 0xfffffffffffffff0;
    for (puVar2 = &DAT_100140e8; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
        puVar2 = puVar2 + 1) {
      if ((char)puVar2[2] == '\x01') {
        uVar3 = *puVar2;
        if (uVar1 <= uVar3) {
          if (uVar1 + 0x30 <= uVar3) {
            plVar4 = (long *)((long)puVar2 + uVar1 + 0x20);
            *plVar4 = (uVar3 - uVar1) + -0x20;
            *(ulong *)((long)puVar2 + uVar1 + 0x28) = puVar2[1];
            *(undefined1 *)((long)puVar2 + uVar1 + 0x30) = 1;
            *puVar2 = uVar1;
            puVar2[1] = (ulong)plVar4;
          }
          *(undefined1 *)(puVar2 + 2) = 0;
          return puVar2 + 4;
        }
      }
    }
  }
  return (ulong *)0x0;
}

#undef DAT_100140e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009b8
 */

ulong recovered_100009b8(ulong param_1,uint param_2)

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
 * Address: 0x100009fc
 */

ulong recovered_100009fc(ulong param_1,uint param_2)

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
 * Address: 0x10000a48
 */

long recovered_10000a48(long param_1,uint param_2)

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
 * Address: 0x10000a98
 */

/* WARNING: Removing unreachable block (ram,0x10000ae8) */

ulong recovered_10000a98(ulong param_1,ulong param_2)

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
 * Address: 0x10000aa0
 */

ulong recovered_10000aa0(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000b00
 */

undefined8 recovered_10000b00(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10000aa0(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b20
 */

long recovered_10000b20(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000aa0(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

long recovered_10000b60(long param_1,long param_2)

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
  recovered_10000aa0(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bac
 */

void recovered_10000bac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb4
 */

int recovered_10000bb4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000bc0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000c04(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000c48(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c94
 */

void * recovered_10000c94(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)dst + uVar1) = *(undefined1 *)((long)src + uVar1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb4
 */

void * recovered_10000cb4(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if ((dst != src) && (bytes != 0)) {
    puVar1 = dst;
    if (dst < src) {
      for (; bytes != 0; bytes = bytes - 1) {
        *puVar1 = *(undefined1 *)src;
        puVar1 = puVar1 + 1;
        src = (undefined1 *)((long)src + 1);
      }
    }
    else {
      for (; bytes != 0; bytes = bytes - 1) {
        *(undefined1 *)((long)dst + (bytes - 1)) = *(undefined1 *)((long)src + (bytes - 1));
      }
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

void * recovered_10000d04(void *dst,int byte,ulong bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)dst + uVar1) = (char)byte;
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

void recovered_10000d20(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d34
 */

void recovered_10000d34(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d48
 */

int recovered_10000d48(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;

  do {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    bVar2 = *param_2;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while ((uint)bVar1 - (uint)bVar2 == 0);
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d70
 */

bool recovered_10000d70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d80
 */

bool recovered_10000d80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

bool recovered_10000d90(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da4
 */

bool recovered_10000da4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

bool recovered_10000dc0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd0
 */

bool recovered_10000dd0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de0
 */

int recovered_10000de0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000df4
 */

int recovered_10000df4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e08
 */

ulong recovered_10000e08(char *text)

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
 * Address: 0x10000e2c
 */

int recovered_10000e2c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0 || (uint)bVar1 != (uint)*param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)bVar1 - (uint)*param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e54
 */

int recovered_10000e54(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0 || (uint)bVar1 != (uint)*param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)bVar1 - (uint)*param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e58
 */

void recovered_10000e58(long param_1,long param_2)

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
 * Address: 0x10000e70
 */

long recovered_10000e70(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_10000e08((char *)param_1);
    dst = recovered_10000bc0(uVar1 + 1);
    pvVar2 = (void *)0x0;
    if (dst != (void *)0x0) {
      pvVar2 = recovered_10000c94(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return (long)pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eac
 */

char * recovered_10000eac(char *param_1,char param_2)

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
 * Address: 0x10000ed4
 */

long recovered_10000ed4(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10000eac(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f1c
 */

char * recovered_10000f1c(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000eac(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f5c
 */

char * recovered_10000f5c(char *param_1,char *param_2)

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


#undef DAT_1000cd14
#define DAT_1000cd14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x640U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f98
 */

undefined * recovered_10000f98(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000cd14;
}

#undef DAT_1000cd14

#undef PTR_DAT_10014000
#define PTR_DAT_10014000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x792cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa4
 */

undefined ** recovered_10000fa4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10014000;
}

#undef PTR_DAT_10014000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fb0
 */

undefined8 recovered_10000fb0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fcc
 */

double recovered_10000fcc(double param_1,uint param_2)

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
 * Address: 0x10001000
 */

uint128 recovered_10001000(double param_1,int *param_2)

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
  PF_PART8(auVar1, 0) = dVar5;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001074
 */

double recovered_10001074(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001098
 */

double recovered_10001098(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;

  uVar2 = (uint)right;
  dVar4 = 0.0;
  if ((double)(int)uVar2 == right) {
    if (uVar2 == 0) {
      dVar4 = 1.0;
    }
    else {
      uVar1 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      dVar3 = 1.0;
      for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          dVar3 = left * dVar3;
        }
        left = left * left;
      }
      dVar4 = 1.0 / dVar3;
      if (-1 < (int)uVar2) {
        dVar4 = dVar3;
      }
    }
  }
  return dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f8
 */

double recovered_100010f8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)(int)value;
  dVar1 = (double)((int)value + -1);
  if (dVar2 <= value) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001114
 */

double recovered_10001114(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)value;
  dVar2 = (double)((int)value + -1);
  if (dVar1 <= value) {
    dVar2 = dVar1;
  }
  dVar1 = dVar2 + 1.0;
  if (value <= dVar2) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001140
 */

double recovered_10001140(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  dVar2 = 0.0;
  if (0.0 < value) {
    iVar1 = 0x18;
    dVar2 = value;
    do {
      dVar2 = (dVar2 + value / dVar2) * 0.5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return dVar2;
}


#undef DAT_1000c6e0
#define DAT_1000c6e0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000117c
 */

double recovered_1000117c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (0.0 < value) {
    iVar1 = 0;
    for (; 1.5 < value; value = value * 0.5) {
      iVar1 = iVar1 + 1;
    }
    for (; value < 0.75; value = value + value) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = 1.0;
    dVar5 = (value + -1.0) / (value + 1.0);
    dVar6 = dVar5 * dVar5;
    dVar3 = 0.0;
    for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
      dVar3 = dVar3 + dVar5 / dVar4;
      dVar5 = dVar6 * dVar5;
      dVar4 = dVar4 + 2.0;
    }
    return (double)iVar1 * DAT_1000c6e0 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_1000c6e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001228
 */

long recovered_10001228(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_1000c6e8
#define DAT_1000c6e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000123c
 */

double recovered_1000123c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001290(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_1000c6e8);
}

#undef DAT_1000c6e8

#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000c6f8
#define DAT_1000c6f8 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000c700
#define DAT_1000c700 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000c708
#define DAT_1000c708 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001290
 */

void recovered_10001290(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_1000c6f0 < param_1; param_1 = param_1 + DAT_1000c708) {
  }
  for (; param_1 < DAT_1000c6f8; param_1 = param_1 + DAT_1000c700) {
  }
  return;
}

#undef DAT_1000c6f0
#undef DAT_1000c6f8
#undef DAT_1000c700
#undef DAT_1000c708

/* Native cosine polynomial. Pooka's Free Software License. */
#include "numbers.h"
double recovered_100012d4(double value){return pf_cosine_polynomial(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

double recovered_10001320(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (0.0 <= value) {
    dVar1 = value;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001330
 */

ulong recovered_10001330(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (param_1 == 0.0) {
    return 0;
  }
  uVar4 = 0;
  dVar6 = -param_1;
  if (0.0 <= param_1) {
    dVar6 = param_1;
  }
  uVar5 = 0x3f;
  dVar7 = 9.223372036854776e+18;
  do {
    bVar3 = dVar7 <= dVar6;
    if (bVar3) {
      dVar6 = dVar6 - dVar7;
    }
    uVar1 = 0;
    if (bVar3) {
      uVar1 = 1L << (uVar5 & 0x3f);
    }
    uVar4 = uVar1 | uVar4;
    dVar7 = dVar7 * 0.5;
    uVar2 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar2;
  } while (-1 < (int)uVar2);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

ulong recovered_10001390(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;

  uVar4 = 0;
  if (0.0 < param_1) {
    uVar5 = 0x3f;
    dVar6 = 9.223372036854776e+18;
    do {
      bVar3 = dVar6 <= param_1;
      if (bVar3) {
        param_1 = param_1 - dVar6;
      }
      uVar1 = 0;
      if (bVar3) {
        uVar1 = 1L << (uVar5 & 0x3f);
      }
      uVar4 = uVar1 | uVar4;
      dVar6 = dVar6 * 0.5;
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
    } while (-1 < (int)uVar2);
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

void recovered_100013e0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001408
 */

uint128 recovered_10001408(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if (param_1 < 0) {
    recovered_100013e0(-param_1);
    PF_PART8(auVar2, 8) = 0;
    PF_PART8(auVar2, 0) = -extraout_d0;
    return auVar2;
  }
  dVar4 = 1.0;
  dVar3 = 0.0;
  for (; param_1 != 0; param_1 = (ulong)param_1 >> 1) {
    if ((param_1 & 1U) != 0) {
      dVar3 = dVar3 + dVar4;
    }
    dVar4 = dVar4 + dVar4;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar3;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000142c
 */

float recovered_1000142c(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001460
 */

float recovered_10001460(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001000((double)param_2,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001478
 */

float recovered_10001478(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10000fcc((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001490
 */

float recovered_10001490(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001098((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014ac
 */

float recovered_100014ac(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)value;
  fVar2 = (float)((int)value + -1);
  if (fVar1 <= value) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d0
 */

float recovered_100014d0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001114((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e8
 */

double recovered_100014e8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = (double)(int)value;
    dVar1 = (double)((int)value + -1);
    if (dVar2 <= value) {
      dVar1 = dVar2;
    }
    dVar2 = dVar1 + 1.0;
    if (value <= dVar1) {
      dVar2 = dVar1;
    }
    return dVar2;
  }
  dVar2 = (double)(int)value;
  dVar1 = (double)((int)value + -1);
  if (dVar2 <= value) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001510
 */

float recovered_10001510(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100014e8((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001528
 */

float recovered_10001528(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001140((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001540
 */

float recovered_10001540(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000117c((double)param_1);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001558
 */

long recovered_10001558(double param_1)

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
 * Address: 0x1000156c
 */

float recovered_1000156c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000123c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001584
 */

float recovered_10001584(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100012d4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000159c
 */

float recovered_1000159c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015ac
 */

long recovered_100015ac(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001644;
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
      goto LAB_10001670;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001670;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001670;
    }
LAB_10001644:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001670:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_100016b0((uint)*pbVar4);
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
 * Address: 0x100016b0
 */

uint recovered_100016b0(int param_1)

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
 * Address: 0x100016e0
 */

long recovered_100016e0(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_100017c4;
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
      goto LAB_100017c4;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100017c4;
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
LAB_100017c4:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_100016b0((uint)*pbVar6);
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
 * Address: 0x10001804
 */

double recovered_10001804(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  double dVar11;
  double dVar12;
  double dVar13;

  for (pbVar6 = (byte *)text; bVar2 = *pbVar6,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar6 = pbVar6 + 1) {
  }
  bVar7 = false;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar6 = pbVar6 + 1;
  }
  dVar11 = 0.0;
  while( true ) {
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30U;
    if (9 < uVar4) break;
    dVar11 = (double)uVar4 + dVar11 * 10.0;
    pbVar6 = pbVar6 + 1;
    bVar7 = true;
  }
  if (bVar3 == 0x2e) {
    dVar12 = 1.0;
    dVar13 = 0.0;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar6;
      if (9 < bVar3 - 0x30U) break;
      dVar13 = (double)(bVar3 - 0x30U) + dVar13 * 10.0;
      dVar12 = dVar12 * 10.0;
      bVar7 = true;
    }
  }
  else {
    dVar12 = 1.0;
    dVar13 = 0.0;
  }
  if (bVar7) {
    dVar11 = dVar11 + dVar13 / dVar12;
    if ((bVar3 | 0x20) == 0x65) {
      iVar8 = 0;
      bVar7 = false;
      bVar3 = pbVar6[1];
      iVar9 = 1;
      pbVar1 = pbVar6 + 1;
      if (bVar3 == 0x2d) {
        iVar9 = -1;
        pbVar1 = pbVar6 + 2;
      }
      pbVar10 = pbVar6 + 2;
      iVar5 = 1;
      if (bVar3 != 0x2b) {
        pbVar10 = pbVar1;
        iVar5 = iVar9;
      }
      for (; *pbVar10 - 0x30U < 10; pbVar10 = pbVar10 + 1) {
        iVar8 = (uint)*pbVar10 + iVar8 * 10 + -0x30;
        bVar7 = true;
      }
      if (bVar7) {
        dVar11 = recovered_10000fcc(dVar11,iVar8 * iVar5);
        pbVar6 = pbVar10;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar6;
    }
    dVar12 = -dVar11;
    if (bVar2 != 0x2d) {
      dVar12 = dVar11;
    }
  }
  else {
    dVar12 = 0.0;
    if (end != (char **)0x0) {
      *end = text;
    }
  }
  return dVar12;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001994
 */

float recovered_10001994(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001804(text,end);
  return (float)dVar1;
}


#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019ac
 */

int recovered_100019ac(char *out,ulong capacity,char *format,void *args)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double *pdVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  double dVar9;

  local_8c = 0;
  local_88 = capacity;
  local_80 = (byte *)out;
  pdStack_78 = args;
  if (capacity != 0) {
    *out = '\0';
  }
LAB_10001a10:
  bVar1 = *format;
  pdVar2 = pdStack_78;
  if (bVar1 == 0x25) {
    format = format + 1;
    bVar1 = *format;
    if (bVar1 != 0x25) {
      while (uVar5 = (uint)bVar1, uVar5 - 0x30 < 10) {
        format = format + 1;
        bVar1 = *format;
      }
      if (uVar5 == 0x2e) {
        do {
          format = format + 1;
          uVar5 = (uint)(byte)*format;
        } while (uVar5 - 0x30 < 10);
      }
LAB_10001a9c:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001b34;
      case 100:
      case 0x69:
LAB_10001aec:
        uVar5 = *(uint *)pdStack_78;
        if ((int)uVar5 < 0) {
          if (1 < local_88) {
            *local_80 = 0x2d;
            local_88 = local_88 - 1;
            local_80 = local_80 + 1;
          }
          local_8c = local_8c + 1;
          uVar5 = -uVar5;
        }
        break;
      case 0x65:
      case 0x67:
      case 0x6a:
      case 0x6b:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x71:
      case 0x72:
      case 0x76:
      case 0x77:
      case 0x79:
LAB_10020260:
        if (local_88 < 2) goto LAB_10001a68;
        *local_80 = 0x3f;
        goto LAB_10001a64;
      case 0x66:
        dVar9 = *pdStack_78;
        if (dVar9 < 0.0) {
          if (1 < local_88) {
            *local_80 = 0x2d;
            local_88 = local_88 - 1;
            local_80 = local_80 + 1;
          }
          local_8c = local_8c + 1;
          dVar9 = -dVar9;
        }
        pdStack_78 = pdStack_78 + 1;
        recovered_10001d0c((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
        pbVar6 = local_80;
        if (1 < local_88) {
          pbVar6 = local_80 + 1;
          *local_80 = 0x2e;
          local_88 = local_88 - 1;
        }
        dVar9 = dVar9 - (double)(int)dVar9;
        iVar7 = 6;
        do {
          iVar8 = (int)(dVar9 * 10.0);
          local_80 = pbVar6;
          if (1 < local_88) {
            local_80 = pbVar6 + 1;
            *pbVar6 = (char)iVar8 + 0x30;
            local_88 = local_88 - 1;
          }
          dVar9 = dVar9 * 10.0 - (double)iVar8;
          iVar7 = iVar7 + -1;
          pbVar6 = local_80;
        } while (iVar7 != 0);
        local_8c = local_8c + 7;
        goto LAB_10001a6c;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x10001ab8;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001cbc((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x66eU));
        goto code_r0x10001c28;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001cbc((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_10001a6c;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001c28:
        uVar4 = 0x10;
        goto code_r0x10001c40;
      default:
        if (uVar5 == 0x49) goto LAB_10001aec;
        if (uVar5 != 0x58) goto LAB_10020260;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001c44;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001c40:
      iVar7 = 0;
LAB_10001c44:
      recovered_10001d0c((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_10001a6c;
    }
    if (local_88 < 2) goto LAB_10001a68;
    *local_80 = 0x25;
    goto LAB_10001a64;
  }
  if (bVar1 == 0) {
    if (capacity != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_10001a64;
  }
  goto LAB_10001a68;
code_r0x10001ab8:
  format = format + 1;
  uVar5 = (uint)(byte)*format;
  goto LAB_10001a9c;
code_r0x10001b34:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_10001a64:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_10001a68:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_10001a6c:
  format = format + 1;
  goto LAB_10001a10;
}

#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c80
 */

void recovered_10001c80(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_1000cd19
#define str_1000cd19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x645U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cbc
 */

void recovered_10001cbc(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_1000cd19;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001c80(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1000cd19

#undef str_1000cd20
#define str_1000cd20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64cU)))
#undef str_1000cd31
#define str_1000cd31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d0c
 */

void recovered_10001d0c(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_1000cd20;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_1000cd31;
  }
  do {
    lVar5 = lVar3;
    uVar2 = 0;
    if (param_5 != 0) {
      uVar2 = param_4 / param_5;
    }
    local_60[lVar5] = pcVar1[param_4 - uVar2 * param_5];
    bVar4 = param_5 <= param_4;
    lVar3 = lVar5 + 1;
    param_4 = uVar2;
  } while (bVar4);
  for (; lVar5 != -1; lVar5 = lVar5 + -1) {
    recovered_10001c80(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_1000cd20
#undef str_1000cd31
#undef local_60

/* Preserve the native variadic arguments. Pooka's Free Software License. */
int recovered_10001dac(char *out,unsigned long capacity,char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_100019ac(out,capacity,format,args);__builtin_va_end(args);return result;
}


#undef DAT_100140e8
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

void recovered_10001dd4(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ulong uVar2;
  ulong *puVar3;

  if (param_3 != (ulong *)0x0) {
    plVar1 = (long *)(param_1 + 0xfU & 0xfffffffffffffff0);
    uVar2 = param_2 - ((long)plVar1 - param_1);
    if (((ulong)((long)plVar1 - param_1) <= param_2 && uVar2 != 0) &&
       (uVar2 = uVar2 & 0xfffffffffffffff0, 0x28 < uVar2)) {
      *plVar1 = uVar2 - 0x20;
      plVar1[1] = 0;
      *(undefined1 *)(plVar1 + 2) = 1;
      puVar3 = (ulong *)&DAT_100140e8;
      if (DAT_100140e8 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_100140e8

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001e2c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb < _DAT_40010808)) {
    return param_1 + 4U <= _DAT_40010808;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f64
 */

void recovered_10001f64(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_100140f8 != 0) {
          DAT_100140f8 = DAT_100140f8 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000201c(1);
        }
        else {
          if (DAT_100140f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100140f8 == -2) {
            recovered_1000201c(0);
          }
          pcVar1 = &DAT_10014100 + DAT_100140f8;
          DAT_100140f8 = DAT_100140f8 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_100140f8
#undef DAT_10014100

#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000201c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000201c(int param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_100140f8 != 0) || (param_1 != 0)) {
    if (DAT_100140f8 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000c94(local_230,&DAT_10014100,DAT_100140f8);
      uVar2 = DAT_100140f8;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002d5c(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_100140f8 = 0;
  }
  return;
}

#undef DAT_100140f8
#undef DAT_10014100
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100020a8(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_100140f8 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000c94(auStack_230,&DAT_10014100,DAT_100140f8);
    uVar2 = DAT_100140f8;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002d5c(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_100140f8 = 0;
  return;
}

#undef DAT_100140f8
#undef DAT_10014100
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100020b0(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_100140f8 != 0) {
    if (DAT_100140f8 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000c94(auStack_230,&DAT_10014100,DAT_100140f8);
      uVar2 = DAT_100140f8;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002d5c(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_100140f8 = 0;
  }
  return;
}

#undef DAT_100140f8
#undef DAT_10014100
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_1000cd45
#define DAT_1000cd45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b8
 */

void recovered_100020b8(undefined *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_1000cd45;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001dac(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001f64(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000cd45
#undef acStack_160

#undef DAT_1000ce2f
#define DAT_1000ce2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75bU)))
#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000211c
 */

/* WARNING: Removing unreachable block (ram,0x10002198) */

void recovered_1000211c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002170(((uintptr_t)pf_module_state+0x674U));
  recovered_10002170(((uintptr_t)pf_module_state+0x697U));
  recovered_10002170(((uintptr_t)pf_module_state+0x6d0U));
  recovered_10002170(((uintptr_t)pf_module_state+0x705U));
  recovered_10002170(((uintptr_t)pf_module_state+0x72bU));
  pcVar4 = &DAT_1000ce2f;
  for (uVar3 = recovered_10000e08(&DAT_1000ce2f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_100140f8 != 0) {
        DAT_100140f8 = DAT_100140f8 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000201c(1);
      }
      else {
        if (DAT_100140f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100140f8 == -2) {
          recovered_1000201c(0);
        }
        pcVar1 = &DAT_10014100 + DAT_100140f8;
        DAT_100140f8 = DAT_100140f8 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000ce2f
#undef DAT_100140f8
#undef DAT_10014100

#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002170
 */

void recovered_10002170(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar3 = recovered_10000e08((char *)param_1);
  if (param_1 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_100140f8 != 0) {
          DAT_100140f8 = DAT_100140f8 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000201c(1);
        }
        else {
          if (DAT_100140f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100140f8 == -2) {
            recovered_1000201c(0);
          }
          pcVar1 = &DAT_10014100 + DAT_100140f8;
          DAT_100140f8 = DAT_100140f8 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_100140f8
#undef DAT_10014100

#undef DAT_1000ce2f
#define DAT_1000ce2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75bU)))
#undef DAT_100140f8
#define DAT_100140f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a24U)))
#undef DAT_10014100
#define DAT_10014100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000219c
 */

/* WARNING: Removing unreachable block (ram,0x10002198) */

void recovered_1000219c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002170(((uintptr_t)pf_module_state+0x75eU));
  pcVar4 = &DAT_1000ce2f;
  for (uVar3 = recovered_10000e08(&DAT_1000ce2f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_100140f8 != 0) {
        DAT_100140f8 = DAT_100140f8 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000201c(1);
      }
      else {
        if (DAT_100140f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100140f8 == -2) {
          recovered_1000201c(0);
        }
        pcVar1 = &DAT_10014100 + DAT_100140f8;
        DAT_100140f8 = DAT_100140f8 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000ce2f
#undef DAT_100140f8
#undef DAT_10014100

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x40010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100021c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_100020b0();
    bVar2 = recovered_10002d5c(0x44);
    bVar1 = false;
    if (bVar2) {
      if (_DAT_40010844 == 0) {
        bVar1 = false;
      }
      else {
        iVar3 = (*(code *)(ulong)_DAT_40010844)(param_1,param_2,param_3,param_4);
        bVar1 = iVar3 != 0;
      }
    }
  }
  return bVar1;
}

#undef DAT_40010844
#undef _DAT_40010844

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002238
 */

undefined8 recovered_10002238(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000223c
 */

void recovered_1000223c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002240
 */

undefined8 recovered_10002240(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000cd45
#define DAT_1000cd45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671U)))
#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
#undef str_1000cec6
#define str_1000cec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f2U)))
#undef str_1000ced3
#define str_1000ced3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ffU)))
#undef str_1000cee1
#define str_1000cee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002248
 */

undefined4 * recovered_10002248(long param_1,long param_2)

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

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10014058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000e2c((byte *)param_1,(byte *)str_1000cec6);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e2c((byte *)param_1,(byte *)str_1000ced3);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e2c((byte *)param_1,(byte *)str_1000cee1);
      if (iVar3 != 0) {
        puVar4 = recovered_10000bc0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10014058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000d04(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000eac((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000eac((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000eac((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000eac((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000eac((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000eac((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000eac((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_10001dac_1((char *)(puVar4 + 1),0xf1,&DAT_1000cd45,param_1);
        recovered_10000d04(&uStack_4c,0,0xc);
        uVar6 = recovered_10002484(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10014058 = 2;
LAB_1000242c:
            recovered_10000c04(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000eac((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100024d4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_1000242c;
              recovered_10000c94(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000bc0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10014058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d04(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_10001dac_1((char *)(puVar4 + 1),0xf1,&DAT_1000cd45,param_1);
  return puVar4;
}

#undef DAT_1000cd45
#undef DAT_10014058
#undef str_1000cec6
#undef str_1000ced3
#undef str_1000cee1
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x40010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002484
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002484(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d5c(0x34);
  if ((bVar1) && (_DAT_40010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100024c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010834
#undef _DAT_40010834

#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d4
 */

undefined8 recovered_100024d4(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000c48(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_10014058 = 0xc;
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

#undef DAT_10014058

#undef DAT_1000cd45
#define DAT_1000cd45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671U)))
#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
#undef str_1000cec6
#define str_1000cec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f2U)))
#undef str_1000ced3
#define str_1000ced3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ffU)))
#undef str_1000cee1
#define str_1000cee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80dU)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000255c
 */

undefined4 * recovered_1000255c(long param_1,long param_2,int *param_3)

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
    recovered_10002590(param_3);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10014058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000e2c((byte *)param_1,(byte *)str_1000cec6);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e2c((byte *)param_1,(byte *)str_1000ced3);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e2c((byte *)param_1,(byte *)str_1000cee1);
      if (iVar3 != 0) {
        puVar4 = recovered_10000bc0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10014058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000d04(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000eac((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000eac((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000eac((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000eac((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000eac((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000eac((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000eac((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_10001dac_1((char *)(puVar4 + 1),0xf1,&DAT_1000cd45,param_1);
        recovered_10000d04(&uStack_4c,0,0xc);
        uVar6 = recovered_10002484(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10014058 = 2;
LAB_1000242c:
            recovered_10000c04(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000eac((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100024d4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_1000242c;
              recovered_10000c94(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000bc0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10014058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d04(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_10001dac_1((char *)(puVar4 + 1),0xf1,&DAT_1000cd45,param_1);
  return puVar4;
}

#undef DAT_1000cd45
#undef DAT_10014058
#undef str_1000cec6
#undef str_1000ced3
#undef str_1000cee1
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

undefined8 recovered_10002590(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002930(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000c04(*(void **)(param_1 + 0x40));
    }
    recovered_10000c04(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025d4
 */

long recovered_100025d4(undefined1 *param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;

  lVar4 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      for (lVar4 = 0; lVar1 = param_2, puVar2 = param_1, lVar4 != param_3; lVar4 = lVar4 + 1) {
        for (; lVar1 != 0; lVar1 = lVar1 + -1) {
          uVar3 = recovered_10002684(param_4);
          if (uVar3 == 0xffffffff) {
            return lVar4;
          }
          *puVar2 = (char)uVar3;
          puVar2 = puVar2 + 1;
        }
        param_1 = param_1 + param_2;
      }
      lVar4 = param_3;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}


#undef DAT_1000cd18
#define DAT_1000cd18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x644U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002684
 */

uint recovered_10002684(int *param_1)

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
LAB_1000271c:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100021c0((long)text,0x1fe,&DAT_1000cd18,0);
      if (bVar2) {
        uVar3 = recovered_10000e08(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_1000271c;
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

#undef DAT_1000cd18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002768
 */

long recovered_10002768(long param_1,long param_2,long param_3,uint *param_4)

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
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10001f64((char *)param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10002868;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_100024d4((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000d04((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000c94((void *)(*(long *)(param_4 + 0x40) + uVar3),(void *)param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10002868;
    }
  }
  param_3 = 0;
LAB_10002868:
  return param_3;
}


#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002878
 */

undefined8 recovered_10002878(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10014058 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10002884;
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
LAB_10002884:
  DAT_10014058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10014058

#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000290c
 */

undefined8 recovered_1000290c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10014058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10014058

#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

undefined8 recovered_10002930(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002b0c(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_10014058 = 5;
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

#undef DAT_10014058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a4
 */

undefined1 recovered_100029a4(long param_1)

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
 * Address: 0x100029b0
 */

undefined1 recovered_100029b0(long param_1)

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
 * Address: 0x100029bc
 */

void recovered_100029bc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d0
 */

uint recovered_100029d0(uint param_1,long param_2)

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


#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f4
 */

undefined8 recovered_100029f4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10014058 = 0x16;
  }
  else {
    uVar1 = recovered_10002a2c(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10014058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10014058

#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_4001083c
#define _DAT_4001083c (*(uint *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002a2c(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d5c(0x3c);
  if ((bVar1) && (_DAT_4001083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_4001083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_4001083c
#undef _DAT_4001083c

#undef DAT_10014058
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7984U)))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

undefined8 recovered_10002a70(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10014058 = 0x16;
  }
  else {
    recovered_10000d04(&uStack_2c,0,0xc);
    uVar1 = recovered_10002484(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10014058 = 2;
    }
    else {
      uVar1 = recovered_10002b0c(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002a2c(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_10014058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_10014058
#undef uStack_28
#undef uStack_2c

#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010838
#define _DAT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b0c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d5c(0x38);
  if ((bVar1) && (_DAT_40010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010838
#undef _DAT_40010838

#define uStack_3c (*(uint *)(frame + 20))
#define uStack_38 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b6c
 */

undefined8 recovered_10002b6c(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *dst;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000d04(&uStack_3c,0,0xc);
    uVar2 = recovered_10002484(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      dst = recovered_10000bc0((ulong)uVar1);
      uVar2 = 0;
      if (dst != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000c94(dst,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = (long)dst;
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
 * Address: 0x10002c0c
 */

bool recovered_10002c0c(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002b0c(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c38
 */

undefined8 recovered_10002c38(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3c
 */

void recovered_10002c3c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c40
 */

undefined8 recovered_10002c40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c44
 */

undefined8 recovered_10002c44(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c48
 */

undefined8 recovered_10002c48(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c4c
 */

char * recovered_10002c4c(long param_1,char param_2,long param_3)

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
 * Address: 0x10002c70
 */

int recovered_10002c70(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    iVar2 = (uint)bVar1 - (uint)*param_2;
    if (iVar2 != 0) break;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


#undef DAT_1000ce55
#define DAT_1000ce55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x781U)))
#undef str_1000ce58
#define str_1000ce58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x784U)))
#undef str_1000ce65
#define str_1000ce65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x791U)))
#undef str_1000ce6f
#define str_1000ce6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79bU)))
#undef str_1000ce83
#define str_1000ce83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7afU)))
#undef str_1000ce91
#define str_1000ce91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bdU)))
#undef str_1000cea3
#define str_1000cea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cfU)))
#undef str_1000ceaf
#define str_1000ceaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dbU)))
#undef str_1000cec0
#define str_1000cec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca0
 */

char * recovered_10002ca0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000ce55;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002ccc_caseD_1;
  case 2:
    return str_1000ce58;
  case 5:
    return str_1000ce65;
  case 9:
    return str_1000ce6f;
  case 0xc:
    return str_1000ce83;
  case 0xd:
    return str_1000ce91;
  default:
    if (param_1 == 0x11) {
      return str_1000cea3;
    }
    if (param_1 == 0x16) {
      return str_1000ceaf;
    }
switchD_10002ccc_caseD_1:
    return str_1000cec0;
  }
}

#undef DAT_1000ce55
#undef str_1000ce58
#undef str_1000ce65
#undef str_1000ce6f
#undef str_1000ce83
#undef str_1000ce91
#undef str_1000cea3
#undef str_1000ceaf
#undef str_1000cec0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

undefined8 recovered_10002d40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d44
 */

undefined8 recovered_10002d44(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_100140f0
#define DAT_100140f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7a1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d48
 */

void recovered_10002d48(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_100140f0 = DAT_100140f0 + 1;
  return;
}

#undef DAT_100140f0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d5c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002d5c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb < _DAT_40010808)) {
    return param_1 + 4U <= _DAT_40010808;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e28
 */

void recovered_10002e28(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10002e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10002e3c(void *context){__asm__ volatile("stp x19,x20,[x0]; stp x21,x22,[x0,#16]; stp x23,x24,[x0,#32]; stp x25,x26,[x0,#48]; stp x27,x28,[x0,#64]; stp x29,x30,[x0,#80]; mov x8,sp; str x8,[x0,#96]; mov w0,#0; ret");}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002e68(void *context,int value){__asm__ volatile("cmp w1,#0; csinc w1,w1,wzr,ne; ldp x19,x20,[x0]; ldp x21,x22,[x0,#16]; ldp x23,x24,[x0,#32]; ldp x25,x26,[x0,#48]; ldp x27,x28,[x0,#64]; ldp x29,x30,[x0,#80]; ldr x8,[x0,#96]; mov sp,x8; mov w0,w1; ret");}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e9c
 */

void recovered_10002e9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000bac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002eac);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eb0
 */

undefined8 recovered_10002eb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eb8
 */

void recovered_10002eb8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002ec8(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002e9c();
}


#undef DAT_10014300
#define DAT_10014300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec8
 */

long recovered_10002ec8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_10014300;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10014300 = param_1;
  return param_1 + 0x30;
}

#undef DAT_10014300

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee8
 */

void * recovered_10002ee8(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f18
 */

void * recovered_10002f18(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f1c
 */

void recovered_10002f1c(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c04(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f34
 */

void recovered_10002f34(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c04(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f4c
 */

void recovered_10002f4c(void *pointer,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c04(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f64
 */

void recovered_10002f64(void *pointer,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c04(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f7c
 */

undefined8 recovered_10002f7c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f84
 */

uint recovered_10002f84(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f94
 */

void recovered_10002f94(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa4
 */

void recovered_10002fa4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa8
 */

undefined1 * recovered_10002fa8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000bc0(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002e9c();
  }
  for (; size != 0; size = size - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return puVar2 + 0x30;
}


#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002ff0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10001e2c(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003000
 */

long recovered_10003000(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_10014300
#define DAT_10014300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c2cU)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003008
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003008(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10014300;
  if (DAT_10014300 != 0) {
    puVar1 = (undefined8 *)(DAT_10014300 + 0x10);
    DAT_10014300 = *(long *)(DAT_10014300 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_10001e2c(0x50);
      if ((bVar3) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_40010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10014300
#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

void recovered_10003060(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003080((undefined8 *)(param_1 + -0x30));
}


#undef DAT_10014308
#define DAT_10014308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c34U)))
#define cStack_2e (*(char *)(frame + 18))
#define local_30 (*(undefined2 *)(frame + 16))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define local_28 (*(undefined4 *)(frame + 24))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003080
 */

void recovered_10003080(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10014308;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_100030e0;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10003578((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_1000318c(param_1);
LAB_100030e0:
                    /* WARNING: Subroutine does not return */
  recovered_10002e9c();
}

#undef DAT_10014308
#undef cStack_2e
#undef local_30
#undef uStack_2d
#undef local_28
#undef uStack_2c

#undef DAT_10014300
#define DAT_10014300 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7c2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e4
 */

void recovered_100030e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10014300;
  if (DAT_10014300 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002e9c();
  }
  *(undefined1 *)(DAT_10014300 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003080(puVar1);
}

#undef DAT_10014300

#undef DAT_10014308
#define DAT_10014308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7c34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003114
 */

void recovered_10003114(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10014308;
  DAT_10014308 = param_1;
  return;
}

#undef DAT_10014308

#undef DAT_10014308
#define DAT_10014308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003128
 */

void recovered_10003128(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10014308;
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

#undef DAT_10014308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003154
 */

void recovered_10003154(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003080(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

void recovered_10003160(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002e9c();
}


#undef DAT_10014308
#define DAT_10014308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7c34U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000316c
 */

undefined8 recovered_1000316c(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_10014308 != (long *)0x0) {
    DAT_10014308 = (long *)*DAT_10014308;
  }
  puVar2 = (undefined8 *)recovered_1000318c(param_1);
  plVar3 = DAT_10014308;
  while( true ) {
    DAT_10014308 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002e9c();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10003578((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003220;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003220:
  recovered_10002e28((long)plVar3);
  recovered_1000316c(extraout_x0);
  return 0;
}

#undef DAT_10014308
#undef uStack_50
#undef uStack_48

#undef DAT_10014308
#define DAT_10014308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7c34U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000318c
 */

undefined8 recovered_1000318c(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_10014308;
  while( true ) {
    DAT_10014308 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002e9c();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10003578((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003220;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10003220:
  recovered_10002e28((long)plVar2);
  recovered_1000316c(extraout_x0);
  return 0;
}

#undef DAT_10014308
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003228
 */

undefined8 recovered_10003228(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000316c(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003234
 */

undefined8 recovered_10003234(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000323c
 */

void recovered_1000323c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002e9c();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003248
 */

long recovered_10003248(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10003288(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003288
 */

bool recovered_10003288(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_1000330c:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_1000330c;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_1000330c;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x79dcU)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003314
 */

void recovered_10003314(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003318
 */

undefined8 recovered_10003318(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

bool recovered_10003320(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003330
 */

bool recovered_10003330(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003368
 */

bool recovered_10003368(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003384
 */

bool recovered_10003384(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000339c
 */

bool recovered_1000339c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b4
 */

bool recovered_100033b4(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033cc
 */

bool recovered_100033cc(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e4
 */

double recovered_100033e4(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_100010f8(value);
  dVar2 = dVar1;
  if (value - dVar1 <= -0.5) {
    dVar2 = dVar1 + -1.0;
  }
  if (0.5 <= value - dVar1) {
    dVar2 = dVar1 + 1.0;
  }
  return dVar2;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003430
 */

long recovered_10003430(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003470;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003470:
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
      goto LAB_100034f4;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100034f4;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100034f4;
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
LAB_100034f4:
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
 * Address: 0x10003574
 */

long recovered_10003574(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003470;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003470:
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
      goto LAB_100034f4;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100034f4;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100034f4;
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
LAB_100034f4:
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

#undef DAT_1000c750
#define DAT_1000c750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003578
 */

undefined8 recovered_10003578(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_10003750((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10003844(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10003844(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10003844(&local_68);
        uVar5 = recovered_10003844(&local_68);
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
            uVar5 = recovered_100038a8(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_100038a8(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_1000c750 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10003750((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10003288(param_2,(long *)puVar6);
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

#undef DAT_1000c750
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003750
 */

ulong * recovered_10003750(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_1000387c(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10003808;
  case 1:
    puVar1 = (ulong *)recovered_10003844(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_1000387c(pbVar5,2);
    goto LAB_10003804;
  case 3:
    puVar1 = (ulong *)recovered_1000387c(pbVar5,4);
    goto LAB_100037cc;
  default:
    goto switchD_10003798_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_100038a8(param_2);
    break;
  case 10:
    uVar3 = recovered_1000387c(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10003804:
    pbVar4 = pbVar5 + 2;
LAB_10003808:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_1000387c(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_100037cc:
    pbVar4 = pbVar5 + 4;
    goto LAB_10003808;
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
switchD_10003798_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003844
 */

ulong recovered_10003844(undefined8 *param_1)

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
 * Address: 0x1000387c
 */

ulong recovered_1000387c(byte *param_1,long param_2)

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
 * Address: 0x100038a8
 */

ulong recovered_100038a8(undefined8 *param_1)

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


#undef DAT_1000c89f
#define DAT_1000c89f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#undef str_1000c8a7
#define str_1000c8a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_1000ceef
#define str_1000ceef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003920
 */

undefined4 recovered_10003920(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_10003a10;
  }
  else {
    iVar2 = recovered_10000d48(param_1,&DAT_1000c89f,8);
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*param_1 == 0x42) {
    if (param_1[1] == 0x4d) {
      return 2;
    }
    if (param_2 < 3) goto LAB_10003a10;
  }
  else {
    if (param_2 < 3) goto LAB_10003a10;
    if (((*param_1 == 0xff) && (param_1[1] == 0xd8)) && (param_1[2] == 0xff)) {
      return 4;
    }
  }
  if (param_2 < 0xe) {
    if (param_2 < 8) goto LAB_10003a10;
  }
  else {
    iVar2 = recovered_10000d48(param_1,(byte *)str_1000ceef,9);
    if (iVar2 == 0) {
      return 5;
    }
  }
  iVar2 = recovered_10000d48(param_1,(byte *)str_1000c8a7,8);
  if (iVar2 == 0) {
    return 6;
  }
LAB_10003a10:
  bVar1 = recovered_10003a30(param_1,param_2);
  uVar3 = 3;
  if (!bVar1) {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_1000c89f
#undef str_1000c8a7
#undef str_1000ceef

#undef str_1000cf06
#define str_1000cf06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x832U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a30
 */

bool recovered_10003a30(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;

  if (param_2 < 0x12) {
    return false;
  }
  if (((0x19 < param_2) &&
      (iVar5 = recovered_10000d48(param_1 + (param_2 - 0x12),(byte *)str_1000cf06,0x11), iVar5 == 0)
      ) && (param_1[param_2 - 1] == 0)) {
    return true;
  }
  bVar1 = param_1[1];
  if (bVar1 < 2) {
    uVar7 = (uint)param_1[2];
    if ((((uVar7 == 0xb || 0xfffffffd < uVar7 - 0xb) || 0xfffffffc < uVar7 - 4) &&
        *(short *)(param_1 + 0xc) != 0) && *(short *)(param_1 + 0xe) != 0) {
      uVar4 = *(ushort *)(param_1 + 5);
      bVar2 = param_1[7];
      bVar3 = param_1[0x10];
      if ((bVar1 != 0) || (uVar4 == 0)) {
        if (bVar1 == 1) {
          if (uVar4 == 0) {
            return false;
          }
          if (0x20 < bVar2) {
            return false;
          }
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x101018000U) == 0) {
            return false;
          }
        }
        uVar8 = (uint)param_1[2];
        uVar7 = uVar8 - 8;
        if (uVar8 < 8) {
          uVar7 = uVar8;
        }
        if (uVar7 == 3) {
          if (bVar3 != 0x10 && bVar3 != 8) {
            return false;
          }
        }
        else if (uVar7 == 2) {
          if (0x20 < bVar3) {
            return false;
          }
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x101018000U) == 0) {
            return false;
          }
        }
        else if ((uVar7 == 1 && bVar3 != 8) && bVar3 != 0x10) {
          return false;
        }
        lVar6 = ((ulong)bVar2 + 7 >> 3) * (ulong)uVar4;
        if (bVar1 != 1) {
          lVar6 = 0;
        }
        return (ulong)*param_1 + lVar6 + 0x12 < param_2;
      }
    }
  }
  return false;
}

#undef str_1000cf06

#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000c7b8
#define DAT_1000c7b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef DAT_1000c7c0
#define DAT_1000c7c0 (*(double *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000c7c8
#define DAT_1000c7c8 (*(double *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef DAT_1000c7d0
#define DAT_1000c7d0 (*(double *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef DAT_1000c7d8
#define DAT_1000c7d8 (*(double *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_1000c7e0
#define DAT_1000c7e0 (*(double *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_1000c870
#define DAT_1000c870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_1000c89f
#define DAT_1000c89f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbU)))
#undef DAT_1000c8b0
#define DAT_1000c8b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
#undef DAT_1000cce0
#define DAT_1000cce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60cU)))
#undef DAT_1000cefc
#define DAT_1000cefc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000cf01
#define DAT_1000cf01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82dU)))
#undef DAT_1000cf1e
#define DAT_1000cf1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84aU)))
#undef DAT_1000cf28
#define DAT_1000cf28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x854U)))
#undef DAT_1000cf2d
#define DAT_1000cf2d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x859U)))
#undef DAT_1000cf32
#define DAT_1000cf32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85eU)))
#undef DAT_1000cf37
#define DAT_1000cf37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x863U)))
#undef DAT_1000cf3c
#define DAT_1000cf3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x868U)))
#undef DAT_10014310
#define DAT_10014310 (*(byte *)(((uintptr_t)pf_module_state + 0x7c3cU)))
#undef DAT_100143d8
#define DAT_100143d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7d04U)))
#undef UNK_1000c878
#define UNK_1000c878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a4U)))
#undef _DAT_1000c870
#define _DAT_1000c870 (*(uint * * * * * * *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef str_1000c8a7
#define str_1000c8a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_1000ceef
#define str_1000ceef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81bU)))
#undef str_1000cf18
#define str_1000cf18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x844U)))
#undef uRam000000001000c878
#define uRam000000001000c878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a4U)))
#define uStack_d40 (*(ulong *)(frame + 16))
#define uStack_d24 (*(uint *)(frame + 44))
#define uStack_d20 (*(ulong *)(frame + 48))
#define uStack_cf8 (*(ulong *)(frame + 88))
#define lStack_cd8 (*(long *)(frame + 120))
#define puStack_cc8 (*(uint * *)(frame + 136))
#define lStack_cb0 (*(long *)(frame + 160))
#define uStack_c90 (*(undefined8 *)(frame + 192))
#define uStack_c88 (*(uint *)(frame + 200))
#define uStack_c84 (*(uint *)(frame + 204))
#define uStack_c80 (*(uint *)(frame + 208))
#define uStack_c7c (*(uint *)(frame + 212))
#define uStack_c78 (*(uint *)(frame + 216))
#define uStack_c74 (*(undefined4 *)(frame + 220))
#define ppvStack_c70 (*(void ** *)(frame + 224))
#define lStack_c68 (*(long *)(frame + 232))
#define lStack_c60 (*(long *)(frame + 240))
#define uStack_c58 (*(ulong *)(frame + 248))
#define uStack_c50 (*(undefined8 *)(frame + 256))
#define puStack_c48 (*(ushort * *)(frame + 264))
#define uStack_c40 (*(ulong *)(frame + 272))
#define uStack_c38 (*(undefined8 *)(frame + 280))
#define pvStack_c30 (*(void * *)(frame + 288))
#define uStack_c28 (*(undefined8 *)(frame + 296))
#define uStack_c20 (*(undefined8 *)(frame + 304))
#define puStack_c18 (*(uint * *)(frame + 312))
#define uStack_c10 (*(ulong *)(frame + 320))
#define uStack_c08 (*(ulong *)(frame + 328))
#define acStack_868 (*(char (*)[128])(frame + 1256))
#define acStack_7e8 (*(char (*)[128])(frame + 1384))
#define puStack_768 (*(uint * *)(frame + 1512))
#define uStack_760 (*(ulong *)(frame + 1520))
#define uStack_758 (*(ulong *)(frame + 1528))
#define puStack_750 (*(uint * *)(frame + 1536))
#define lStack_748 (*(long *)(frame + 1544))
#define uStack_740 (*(undefined8 *)(frame + 1552))
#define pppppppuStack_738 (*(uint ******* *)(frame + 1560))
#define uStack_730 (*(ulong *)(frame + 1568))
#define uStack_720 (*(undefined8 *)(frame + 1584))
#define uStack_718 (*(undefined8 *)(frame + 1592))
#define uStack_710 (*(undefined8 *)(frame + 1600))
#define uStack_708 (*(uint *)(frame + 1608))
#define uStack_704 (*(undefined2 *)(frame + 1612))
#define uStack_702 (*(undefined1 *)(frame + 1614))
#define uStack_701 (*(undefined1 *)(frame + 1615))
#define ppvStack_700 (*(void ** *)(frame + 1616))
#define puStack_6f8 (*(uint * *)(frame + 1624))
#define puStack_6f0 (*(undefined8 * *)(frame + 1632))
#define puStack_6e8 (*(ulong * *)(frame + 1640))
#define ppvStack_6e0 (*(void ** *)(frame + 1648))
#define pppvStack_6d8 (*(void *** *)(frame + 1656))
#define puStack_6d0 (*(undefined8 * *)(frame + 1664))
#define uStack_6c8 (*(undefined8 *)(frame + 1672))
#define pvStack_6c0 (*(void * *)(frame + 1680))
#define uStack_6b8 (*(undefined8 *)(frame + 1688))
#define uStack_6b0 (*(undefined8 *)(frame + 1696))
#define puStack_6a8 (*(uint * *)(frame + 1704))
#define uStack_6a0 (*(ulong *)(frame + 1712))
#define uStack_698 (*(ulong *)(frame + 1720))
#define auStack_2f8 (*(undefined1 (*)[8])(frame + 2648))
#define auStack_2f0 (*(undefined8 (*)[15])(frame + 2656))
#define uStack_278 (*(undefined8 *)(frame + 2776))
#define apuStack_270 (*(uint * (*)[16])(frame + 2784))
#define uStack_1f0 (*(ulong *)(frame + 2912))
#define uStack_1e8 (*(ulong *)(frame + 2920))
#define uStack_1e0 (*(undefined8 *)(frame + 2928))
#define uStack_1d8 (*(undefined8 *)(frame + 2936))
#define uStack_1d0 (*(undefined8 *)(frame + 2944))
#define pppppppuStack_1c8 (*(uint ******* *)(frame + 2952))
#define uStack_1c0 (*(ulong *)(frame + 2960))
#define uStack_1b0 (*(undefined8 *)(frame + 2976))
#define uStack_1a8 (*(undefined8 *)(frame + 2984))
#define uStack_1a0 (*(undefined8 *)(frame + 2992))
#define uStack_198 (*(undefined8 *)(frame + 3000))
#define uStack_190 (*(undefined8 *)(frame + 3008))
#define uStack_188 (*(undefined8 *)(frame + 3016))
#define uStack_180 (*(undefined8 *)(frame + 3024))
#define uStack_178 (*(undefined8 *)(frame + 3032))
#define pppppppuStack_170 (*(uint ******* *)(frame + 3040))
#define uStack_168 (*(ulong *)(frame + 3048))
#define uStack_160 (*(ulong *)(frame + 3056))
#define uStack_158 (*(undefined1 *)(frame + 3064))
#define uStack_154 (*(undefined4 *)(frame + 3068))
#define pvStack_150 (*(void * *)(frame + 3072))
#define uStack_148 (*(undefined8 *)(frame + 3080))
#define uStack_140 (*(undefined8 *)(frame + 3088))
#define uStack_138 (*(uint *)(frame + 3096))
#define uStack_134 (*(undefined4 *)(frame + 3100))
#define uStack_130 (*(undefined8 *)(frame + 3104))
#define pvStack_120 (*(void * *)(frame + 3120))
#define lStack_118 (*(long *)(frame + 3128))
#define uStack_110 (*(undefined8 *)(frame + 3136))
#define uStack_108 (*(ulonglong *)(frame + 3144))
#define pppppppuStack_100 (*(uint ******* *)(frame + 3152))
#define uStack_f8 (*(ulong *)(frame + 3160))
#define uStack_f0 (*(undefined8 *)(frame + 3168))
#define uStack_e8 (*(ulong *)(frame + 3176))
#define uStack_e0 (*(undefined8 *)(frame + 3184))
#define uStack_d8 (*(ulong *)(frame + 3192))
#define uStack_d0 (*(ulong *)(frame + 3200))
#define uStack_c4 (*(uint *)(frame + 3212))
#define uStack_c0 (*(undefined8 *)(frame + 3216))
#define appvStack_b8 (*(void ** (*)[3])(frame + 3224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b98
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10003b98(void *data,ulong length,void *image)

{
  unsigned char frame[3440] __attribute__((aligned(16))) = {0};

  long *plVar1;
  ushort *puVar2;
  ulong *puVar3;
  uint *******pppppppuVar4;
  char *pcVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  byte *pbVar32;
  void *pvVar33;
  undefined8 *puVar34;
  void *pvVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  uint *puVar43;
  undefined1 *puVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined8 uVar51;
  ulong uVar52;
  undefined8 *puVar53;
  uint uVar54;
  uint uVar55;
  long lVar56;
  uint *******pppppppuVar57;
  ulong uVar58;
  long lVar59;
  uint ******ppppppuVar60;
  ulong uVar61;
  uint *puVar62;
  uchar uVar63;
  undefined8 *puVar64;
  uint *puVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  double dVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;

  PF_PART4(uStack_718, 0) = 0;
  PF_PART4(uStack_718, 4) = 0;
  uStack_720 = (uint *******)0x0;
  uStack_708 = 0;
  uStack_704 = 0;
  uStack_702 = 0;
  uStack_701 = 0;
  PF_PART4(uStack_710, 0) = 0;
  PF_PART4(uStack_710, 4) = 0;
  recovered_10007138(image,&uStack_720);
  PF_PART4(uStack_710, 0) = 0;
  PF_PART4(uStack_710, 4) = 0;
  recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
  if (data == (void *)0x0) {
    return '\0';
  }
  if (length == 0) {
    return '\0';
  }
  uVar26 = recovered_10003920(data,length);
  switch((uintptr_t)(uVar26)) {
  case 1:
    recovered_1000c03c(&pppppppuStack_100,data,(undefined1 *)((long)data + length));
    lStack_c60 = 0;
    uStack_c50 = 0;
    uStack_c58 = 0;
    puStack_c48 = (ushort *)0x0;
    uStack_c38 = 0;
    uStack_c40 = 0;
    uStack_c28 = 0;
    pvStack_c30 = (void *)0x0;
    puStack_c18 = (uint *)0x0;
    uStack_c20 = 0;
    uStack_c08 = 0;
    uStack_c10 = 0;
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    ppvStack_700 = (void **)((ulong)ppvStack_700 & 0xffffffff00000000);
    puStack_6f0 = (undefined8 *)0x0;
    puStack_6f8 = (uint *)0x0;
    ppvStack_6e0 = (void **)0x0;
    puStack_6e8 = (ulong *)0x0;
    pppvStack_6d8 = (void ***)0x0;
    uStack_6c8 = 0;
    puStack_6d0 = (undefined8 *)0x0;
    uStack_6b0 = 0;
    uStack_6b8 = 0;
    pvStack_6c0 = (void *)0x0;
    puStack_6a8 = (uint *)0x0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_c78 = 0;
    PF_PART1(uStack_c74, 0) = 0;
    PF_PART1(uStack_c74, 1) = '\0';
    PF_PART1(uStack_c74, 2) = 0;
    PF_PART1(uStack_c74, 3) = uStack_701;
    uStack_c80 = 0;
    uStack_c7c = 0;
    lStack_c68 = 0;
    ppvStack_c70 = ppvStack_700;
    uStack_c88 = 0;
    uStack_c84 = 0;
    uStack_c90 = (uint *******)0x0;
    recovered_10007c38(&lStack_c60,&puStack_6f0);
    recovered_10007c38(&puStack_c48,&pppvStack_6d8);
    uStack_c28 = 0;
    recovered_10002f1c(pvStack_c30);
    pvStack_c30 = pvStack_6c0;
    uStack_c20 = uStack_6b0;
    uStack_c28 = uStack_6b8;
    pvStack_6c0 = (void *)0x0;
    uStack_6b0 = 0;
    uStack_6b8 = 0;
    recovered_1000b2f4((long *)&puStack_c18);
    recovered_10002f1c(puStack_c18);
    puStack_c18 = puStack_6a8;
    uStack_c08 = uStack_698;
    uStack_c10 = uStack_6a0;
    puStack_6a8 = (uint *)0x0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    recovered_10007c88((long)&uStack_720);
    if ((7 < uStack_f8) &&
       (iVar28 = recovered_10000d48((byte *)pppppppuStack_100,&DAT_1000c89f,8), iVar28 == 0)) {
      bVar20 = false;
      lVar59 = 8;
LAB_10004a38:
      do {
        uVar39 = uStack_f8;
        pppppppuVar57 = pppppppuStack_100;
        if (uStack_f8 < lVar59 + 0xcU) {
LAB_10005544:
          if ((((byte)uStack_c74 != 1) || (!(PF_PART1(uStack_c74, 1) == '\x01' && lStack_c68 != 0))) ||
             (!(uStack_c84 != 3 || uStack_c58 != 0))) break;
          if (PF_PART1(uStack_c74, 2) != 1) goto LAB_100055c4;
          if (((int)ppvStack_c70 == 0) || (((ulong)ppvStack_c70 & 0xffffffff) <= uStack_c10 - 1))
          break;
          lVar59 = uStack_c10 * 0x38;
          bVar17 = false;
          puVar43 = puStack_c18;
          goto LAB_100055ac;
        }
        puVar43 = (uint *)((long)pppppppuStack_100 + lVar59);
        uVar31 = recovered_10009cdc(puVar43);
        uVar58 = (ulong)uVar31;
        lVar59 = lVar59 + 8;
        if (uVar39 - lVar59 < uVar58 + 4) break;
        pppppppuVar4 = (uint *******)((long)pppppppuVar57 + lVar59);
        uVar29 = recovered_10009cdc((uint *)((long)pppppppuVar57 + lVar59 + uVar58));
        uVar30 = recovered_1000b204(0,(byte *)(puVar43 + 1),4);
        if (uVar31 != 0) {
          uVar30 = recovered_1000b204(uVar30,(byte *)pppppppuVar4,uVar58);
        }
        if (uVar30 != uVar29) break;
        lVar59 = lVar59 + uVar58 + 4;
        if (((byte)uStack_c74 & 1) != 0) {
          iVar28 = recovered_10000d48((byte *)(puVar43 + 1),(byte *)((uintptr_t)pf_module_state+0x84fU),4);
          if (iVar28 != 0) {
            iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cf28,4);
            if (iVar28 != 0) {
              iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cf2d,4);
              if (iVar28 == 0) {
                if (uVar31 == 0) break;
                bVar17 = false;
                if ((0x300 < uVar31) || (uVar31 % 3 != 0)) goto LAB_10003d3c;
                recovered_10009dfc(&lStack_c60,(undefined1 *)pppppppuVar4,
                                   (undefined1 *)((long)pppppppuVar4 + uVar58));
              }
              else {
                iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cf32,4);
                if (iVar28 == 0) {
                  if (((uVar31 != 2) && (uStack_c84 == 0)) || (uVar31 != 6 && uStack_c84 == 2))
                  break;
                  if (uStack_c84 == 3) {
                    if (uStack_c58 / 3 < uVar58) break;
                  }
                  else if (uStack_c84 == 4 || uStack_c84 == 6) break;
                  recovered_10009dfc((long *)&puStack_c48,(undefined1 *)pppppppuVar4,
                                     (undefined1 *)((long)pppppppuVar4 + uVar58));
                }
                else {
                  iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cf37,4);
                  if (iVar28 == 0) {
                    bVar20 = true;
                    if (uVar31 != 0) {
                      PF_PART4(uStack_718, 4) = 0;
                      uStack_720 = pppppppuVar4;
                      PF_PART4(uStack_718, 0) = uVar31;
                      recovered_1000b294((long *)&pvStack_c30,&uStack_720);
                      if ((uStack_c10 != 0) && ((char)puStack_c18[uStack_c10 * 0xe + -8] == '\x01'))
                      {
                        recovered_1000b294((long *)(puStack_c18 + uStack_c10 * 0xe + -6),&uStack_720
                                          );
                      }
                      lStack_c68 = lStack_c68 + uVar58;
                      bVar20 = true;
                    }
                  }
                  else {
                    iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cf3c,4);
                    uVar39 = uStack_c10;
                    puVar62 = puStack_c18;
                    if (iVar28 == 0) {
                      if (PF_PART1(uStack_c74, 2) != 1) break;
                      bVar17 = false;
                      if ((uVar31 < 5) || (uStack_c10 == 0)) goto LAB_10003d3c;
                      lVar46 = *(long *)(puStack_c18 + uStack_c10 * 0xe + -4);
                      if (lVar46 == *(long *)(puStack_c18 + uStack_c10 * 0xe + -2)) {
                        uVar58 = 4;
                        if (lVar46 != 0) {
                          uVar58 = lVar46 << 1;
                        }
                        recovered_1000b340((long *)(puStack_c18 + uStack_c10 * 0xe + -6),uVar58);
                        lVar46 = *(long *)(puVar62 + uVar39 * 0xe + -4);
                      }
                      plVar1 = (long *)(*(long *)(puVar62 + uVar39 * 0xe + -6) + lVar46 * 0x10);
                      *plVar1 = (long)((long)pppppppuVar4 + 4);
                      plVar1[1] = (ulong)(uVar31 - 4);
                      *(long *)(puVar62 + uVar39 * 0xe + -4) =
                           *(long *)(puVar62 + uVar39 * 0xe + -4) + 1;
                    }
                    else {
                      iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cf01,4);
                      if (iVar28 == 0) {
                        if (uVar31 == 0) {
                          PF_PART1(uStack_c74, 1) = '\x01';
                          goto LAB_10005544;
                        }
                        break;
                      }
                      if (((byte)puVar43[1] >> 5 & 1) == 0) break;
                    }
                  }
                }
              }
              goto LAB_10004a38;
            }
            if ((uVar31 != 0x1a) || (PF_PART1(uStack_c74, 2) != 1)) break;
            uVar31 = recovered_10009cdc((uint *)((long)pppppppuVar4 + 4));
            uVar29 = recovered_10009cdc((uint *)(pppppppuVar4 + 1));
            uVar30 = recovered_10009cdc((uint *)((long)pppppppuVar4 + 0xc));
            uVar54 = recovered_10009cdc((uint *)(pppppppuVar4 + 2));
            bVar17 = uStack_c10 == 0;
            if ((uVar31 != 0) && (uVar29 != 0)) {
              if ((uVar30 <= (uint)uStack_c90) &&
                 (uVar31 <= (uint)uStack_c90 - uVar30 && uVar54 <= PF_PART4(uStack_c90, 4))) {
                bVar22 = *(byte *)(pppppppuVar4 + 3);
                bVar23 = *(byte *)((long)pppppppuVar4 + 0x19);
                if ((uVar29 <= PF_PART4(uStack_c90, 4) - uVar54 && bVar22 < 3) && bVar23 < 2) {
                  if (uStack_c10 == uStack_c08) {
                    uVar39 = 4;
                    if (uStack_c10 != 0) {
                      uVar39 = uStack_c10 << 1;
                    }
                    if (uStack_c10 < uVar39) {
                      puVar43 = recovered_10002ee8(uVar39 * 0x38);
                      lVar46 = 0;
                      for (uVar58 = 0; uVar58 < uStack_c10; uVar58 = uVar58 + 1) {
                        puVar64 = (undefined8 *)((long)puVar43 + lVar46);
                        puVar53 = (undefined8 *)((long)puStack_c18 + lVar46);
                        uVar71 = *(undefined8 *)((long)puVar53 + 0x11);
                        uVar51 = *(undefined8 *)((long)puVar53 + 9);
                        uVar72 = *puVar53;
                        puVar64[1] = puVar53[1];
                        *puVar64 = uVar72;
                        *(undefined8 *)((long)puVar64 + 0x11) = uVar71;
                        *(undefined8 *)((long)puVar64 + 9) = uVar51;
                        puVar34 = puVar53 + 4;
                        puVar64[4] = *puVar34;
                        uVar51 = puVar53[5];
                        puVar64[6] = puVar53[6];
                        puVar64[5] = uVar51;
                        puVar53[5] = 0;
                        puVar53[6] = 0;
                        *puVar34 = 0;
                        recovered_1000b1e0(puVar34);
                        lVar46 = lVar46 + 0x38;
                      }
                      recovered_10002f1c(puStack_c18);
                      puStack_c18 = puVar43;
                      uStack_c08 = uVar39;
                    }
                  }
                  puVar62 = puStack_c18 + uStack_c10 * 0xe;
                  *puVar62 = uVar31;
                  puVar62[1] = uVar29;
                  puVar62[2] = uVar30;
                  puVar62[3] = uVar54;
                  puVar62[4] = (uint)bVar22;
                  puVar62[5] = (uint)bVar23;
                  *(byte *)(puVar62 + 6) = bVar17 & (bVar20 ^ 0xffU);
                  puVar43 = puVar62 + 8;
                  puVar43[0] = 0;
                  puVar43[1] = 0;
                  puVar62[10] = 0;
                  puVar62[0xb] = 0;
                  puVar62[0xc] = 0;
                  puVar62[0xd] = 0;
                  recovered_1000b340((long *)puVar43,0);
                  puVar62[10] = 0;
                  puVar62[0xb] = 0;
                  uStack_c10 = uStack_c10 + 1;
                  recovered_10002f1c((void *)0x0);
                  goto LAB_10004a38;
                }
              }
            }
            recovered_10002f1c((void *)0x0);
            break;
          }
          if ((uVar31 != 8 || bVar20) || ((PF_PART1(uStack_c74, 2) & 1) != 0)) break;
          PF_PART1(uStack_c74, 2) = 1;
          uVar31 = recovered_10009cdc((uint *)pppppppuVar4);
          bVar20 = false;
          ppvStack_c70 = (void **)CONCAT44(PF_PART4(ppvStack_c70, 4),uVar31);
          goto LAB_10004a38;
        }
        iVar28 = recovered_10000d48((byte *)(puVar43 + 1),&DAT_1000cefc,4);
        bVar17 = false;
        if ((uVar31 != 0xd) || (iVar28 != 0)) goto LAB_10003d3c;
        uVar31 = recovered_10009cdc((uint *)pppppppuVar4);
        uStack_c90 = (uint *******)CONCAT44(PF_PART4(uStack_c90, 4),uVar31);
        uVar29 = recovered_10009cdc((uint *)((long)pppppppuVar4 + 4));
        bVar17 = false;
        uStack_c90 = (uint *******)CONCAT44(uVar29,(uint)uStack_c90);
        bVar22 = *(byte *)(pppppppuVar4 + 1);
        uStack_c88 = (uint)bVar22;
        bVar23 = *(byte *)((long)pppppppuVar4 + 9);
        uStack_c84 = (uint)bVar23;
        uStack_c80 = (uint)*(byte *)((long)pppppppuVar4 + 10);
        uStack_c7c = (uint)*(byte *)((long)pppppppuVar4 + 0xb);
        uStack_c78 = (uint)*(byte *)((long)pppppppuVar4 + 0xc);
        PF_PART1(uStack_c74, 0) = 1;
        if ((uVar31 == 0) || (uVar29 == 0)) goto LAB_10003d3c;
        bVar21 = false;
        if (uStack_c84 < 7) {
          if ((1 << (ulong)(bVar23 & 0x1f) & 0x55U) == 0) {
            if (bVar23 == 3) {
              bVar21 = uStack_c88 == 8;
            }
          }
          else {
            bVar21 = true;
            if (bVar22 != 8) {
              bVar21 = bVar22 == 0x10;
            }
          }
        }
        bVar17 = false;
        if ((((!bVar21) || (uStack_c80 != 0)) || (uStack_c7c != 0)) || (1 < uStack_c78))
        goto LAB_10003d3c;
      } while( true );
    }
    bVar17 = false;
    goto LAB_10003d3c;
  case 2:
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10007138(image,&uStack_720);
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
    if (length < 0x1a) {
      return '\0';
    }
    if (*(char *)data != 'B') {
      return '\0';
    }
    if (*(char *)((long)data + 1) != 'M') {
      return '\0';
    }
    uVar39 = (ulong)*(uint *)((long)data + 10);
    uVar31 = *(uint *)((long)data + 0xe);
    if ((uVar31 != 0xc) && (uVar31 < 0x28)) {
      return '\0';
    }
    uVar58 = (ulong)uVar31 + 0xe;
    if (uVar31 == 0xc) {
      uVar27 = 0;
      iVar28 = 0;
      uVar30 = 0;
      uVar29 = (uint)*(ushort *)((long)data + 0x12);
      uVar54 = (uint)*(ushort *)((long)data + 0x14);
      sVar6 = *(short *)((long)data + 0x16);
      uVar7 = *(ushort *)((long)data + 0x18);
    }
    else {
      if (length < uVar31 + 0xe) {
        return '\0';
      }
      uVar29 = *(uint *)((long)data + 0x12);
      if ((int)uVar29 < 1) {
        return '\0';
      }
      uVar30 = *(uint *)((long)data + 0x16);
      if (uVar30 == 0) {
        return '\0';
      }
      uVar54 = -uVar30;
      if (-1 < (int)uVar30) {
        uVar54 = uVar30;
      }
      sVar6 = *(short *)((long)data + 0x1a);
      uVar7 = *(ushort *)((long)data + 0x1c);
      iVar28 = *(int *)((long)data + 0x1e);
      uVar27 = *(uint *)((long)data + 0x2e);
      if ((uVar31 == 0x28) && (iVar28 == 6 || iVar28 == 3)) {
        lVar59 = 0x10;
        if (iVar28 != 6) {
          lVar59 = 0xc;
        }
        uVar58 = lVar59 + 0x36;
      }
      uVar30 = uVar30 >> 0x1f;
    }
    if (sVar6 != 1) {
      return '\0';
    }
    if (uVar29 == 0) {
      return '\0';
    }
    if (uVar54 == 0) {
      return '\0';
    }
    if (length <= uVar39) {
      return '\0';
    }
    if (iVar28 == 0) {
      uVar41 = 0;
      uVar37 = 0;
      uVar48 = 0;
      uVar49 = 0;
    }
    else {
      if (iVar28 != 6 && iVar28 != 3) {
        return '\0';
      }
      if (uVar31 < 0x34) {
        uVar47 = 0x46;
        if (iVar28 != 6) {
          uVar47 = 0x42;
        }
        if (length < uVar47) {
          return '\0';
        }
        uVar37 = *(uint *)((long)data + 0x36);
        uVar48 = *(uint *)((long)data + 0x3a);
        uVar49 = *(uint *)((long)data + 0x3e);
        if (iVar28 != 6) goto LAB_1000535c;
      }
      else {
        uVar37 = *(uint *)((long)data + 0x36);
        uVar48 = *(uint *)((long)data + 0x3a);
        uVar49 = *(uint *)((long)data + 0x3e);
        if (uVar31 < 0x38) {
LAB_1000535c:
          uVar41 = 0;
          goto LAB_10005360;
        }
      }
      uVar41 = *(uint *)((long)data + 0x42);
    }
LAB_10005360:
    bVar17 = uVar7 != 0x10;
    bVar20 = uVar37 != 0;
    bVar21 = uVar48 != 0;
    bVar18 = uVar49 != 0;
    uVar50 = 0x1f;
    if (((bVar17 || bVar20) || bVar21) || bVar18) {
      uVar50 = uVar49;
    }
    uVar49 = 0x3e0;
    if (((bVar17 || bVar20) || bVar21) || bVar18) {
      uVar49 = uVar48;
    }
    uVar48 = 0x7c00;
    if (((bVar17 || bVar20) || bVar21) || bVar18) {
      uVar48 = uVar37;
    }
    if ((((uVar7 == 0x20) && (uVar48 == 0)) && (uVar49 == 0)) && (uVar50 == 0)) {
      uVar48 = 0xff0000;
      uVar49 = 0xff00;
      uVar41 = 0xff000000;
      uVar50 = 0xff;
    }
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    uStack_720 = (uint *******)0x0;
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uVar37 = (uint)uVar7;
    if (uVar7 < 9) {
      uVar38 = 1 << (ulong)(uVar37 & 0x1f);
      if (uVar27 != 0) {
        uVar38 = uVar27;
      }
      lVar59 = 3;
      if (uVar31 != 0xc) {
        lVar59 = 4;
      }
      if (uVar58 <= length && lVar59 * (ulong)uVar38 <= length - uVar58) {
        uVar47 = (ulong)uVar38 * 4;
        uStack_c90 = (uint *******)CONCAT71(PF_PART7(uStack_c90, 1),0xff);
        recovered_10009148(&uStack_720,uVar47,(undefined1 *)&uStack_c90);
        puVar44 = (undefined1 *)((long)data + uVar58 + 2);
        for (uVar58 = 0; uVar47 != uVar58; uVar58 = uVar58 + 4) {
          *(undefined1 *)((long)uStack_720 + uVar58) = *puVar44;
          *(undefined1 *)((long)uStack_720 + uVar58 + 1) = puVar44[-1];
          *(undefined1 *)((long)uStack_720 + uVar58 + 2) = puVar44[-2];
          puVar44 = puVar44 + lVar59;
        }
        goto LAB_10005498;
      }
    }
    else {
LAB_10005498:
      bVar17 = false;
      if ((0x20 < uVar37) || ((1L << ((ulong)(uint)uVar7 & 0x3f) & 0x101010112U) == 0)) break;
      uVar58 = (ulong)uVar29 * (ulong)uVar37 + 0x1f >> 3 & 0x3ffffffffffc;
      if ((uVar58 != 0) &&
         ((uVar47 = CONCAT44(0,uVar54), PF_PART8(auVar10, 8) = 0, PF_PART8(auVar10, 0) = uVar58, PF_PART8(auVar12, 8) = 0
          , PF_PART8(auVar12, 0) = uVar47, SUB168(auVar10 * auVar12,8) == 0 &&
          (uVar58 * uVar47 <= length - uVar39)))) {
        uVar61 = uVar29 * uVar47;
        if (uVar61 >> 0x3e == 0) {
          recovered_10009330(&uStack_c90,uVar61 * 4);
          lStack_cd8 = 0;
          bVar20 = false;
          lVar59 = (ulong)uVar29 * 4;
          for (uStack_cf8 = 0; bVar17 = uStack_cf8 == uVar47, !bVar17; uStack_cf8 = uStack_cf8 + 1)
          {
            lVar46 = 0;
            uVar61 = 0;
            uVar31 = (uint)uStack_cf8;
            if (uVar30 == 0) {
              uVar31 = uVar54 + ~(uint)uStack_cf8;
            }
            puVar62 = (uint *)((long)data + uVar58 * uVar31 + uVar39);
            puVar44 = (undefined1 *)((long)data + uVar58 * uVar31 + uVar39 + 2);
            puVar65 = puVar62;
            puVar43 = puVar62;
            for (; pppppppuVar57 = uStack_c90, lVar59 != lVar46; lVar46 = lVar46 + 4) {
              lVar45 = lStack_cd8 + lVar46;
              if (uVar37 == 1) {
                uVar68 = (ulong)(*(byte *)((long)puVar62 + (uVar61 >> 3 & 0x1fffffff)) >>
                                 (ulong)(((uint)uVar61 ^ 0xffffffff) & 7) & 1);
LAB_10005a54:
                if (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) <= (uVar68 << 2 | 3))
                goto LAB_10005c60;
                recovered_10000c94((void *)((long)uStack_c90 + lVar45),
                                   (uint *)((long)uStack_720 + uVar68 * 4),4);
              }
              else {
                if (uVar37 == 4) {
                  bVar22 = *(byte *)((long)puVar62 + (uVar61 >> 1 & 0x7fffffff));
                  uVar31 = (uint)(bVar22 >> 4);
                  if ((uVar61 & 1) != 0) {
                    uVar31 = bVar22 & 0xf;
                  }
                  uVar68 = (ulong)uVar31;
                  goto LAB_10005a54;
                }
                if (uVar37 == 0x18) {
                  *(undefined1 *)((long)uStack_c90 + lVar45) = *puVar44;
                  lVar45 = lVar46 + lStack_cd8;
                  *(undefined1 *)((long)uStack_c90 + lVar45 + 1) = puVar44[-1];
                  *(undefined1 *)((long)uStack_c90 + lVar45 + 2) = puVar44[-2];
                  *(undefined1 *)((long)uStack_c90 + lVar45 + 3) = 0xff;
                }
                else {
                  if (uVar37 == 8) {
                    uVar68 = (ulong)(byte)*puVar43;
                    goto LAB_10005a54;
                  }
                  if (uVar37 == 0x10) {
                    uVar31 = (uint)(ushort)*puVar65;
                  }
                  else {
                    uVar31 = *puVar65;
                  }
                  uVar27 = recovered_10009150(uVar31,uVar48);
                  *(char *)((long)pppppppuVar57 + lVar45) = (char)uVar27;
                  uVar27 = recovered_10009150(uVar31,uVar49);
                  lVar45 = lVar46 + lStack_cd8;
                  *(char *)((long)pppppppuVar57 + lVar45 + 1) = (char)uVar27;
                  uVar27 = recovered_10009150(uVar31,uVar50);
                  *(char *)((long)pppppppuVar57 + lVar45 + 2) = (char)uVar27;
                  if (uVar41 == 0) {
                    uVar31 = 0xff;
                  }
                  else {
                    uVar31 = recovered_10009150(uVar31,uVar41);
                    uVar31 = uVar31 & 0xff;
                  }
                  *(char *)((long)pppppppuVar57 + lVar45 + 3) = (char)uVar31;
                  bVar20 = (bool)(bVar20 | uVar31 != 0);
                }
              }
              uVar61 = uVar61 + 1;
              puVar65 = (uint *)((long)puVar65 + (ulong)(uVar7 >> 3));
              puVar43 = (uint *)((long)puVar43 + 1);
              puVar44 = puVar44 + 3;
            }
            lStack_cd8 = lStack_cd8 + lVar59;
          }
          if ((uVar37 == 0x20 && uVar41 != 0) && !bVar20) {
            for (uVar39 = 3; uVar39 < CONCAT44(uStack_c84,uStack_c88); uVar39 = uVar39 + 4) {
              *(undefined1 *)((long)uStack_c90 + uVar39) = 0xff;
            }
          }
          *(uint *)image = uVar29;
          *(uint *)((long)image + 4) = uVar54;
          recovered_10007c38((undefined8 *)((long)image + 8),&uStack_c90);
LAB_10005c60:
          uStack_c88 = 0;
          uStack_c84 = 0;
          recovered_10002f1c(uStack_c90);
          break;
        }
      }
    }
    bVar17 = false;
    break;
  case 3:
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10007138(image,&uStack_720);
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
    bVar17 = recovered_10003a30(data,length);
    if (!bVar17) {
      return '\0';
    }
    bVar22 = *(byte *)((long)data + 2);
    pvStack_120 = (void *)CONCAT44(PF_PART4(pvStack_120, 4),(uint)*(ushort *)((long)data + 3));
    uStack_138 = (uint)*(ushort *)((long)data + 5);
    bVar23 = *(byte *)((long)data + 7);
    pvStack_150 = (void *)CONCAT44(PF_PART4(pvStack_150, 4),(uint)*(ushort *)((long)data + 0xc));
    appvStack_b8[0] = (void **)CONCAT44(PF_PART4(appvStack_b8[0], 4),(uint)*(ushort *)((long)data + 0xe));
    uStack_d0 = CONCAT44(PF_PART4(uStack_d0, 4),(uint)*(byte *)((long)data + 0x10));
    uStack_d8 = CONCAT44(PF_PART4(uStack_d8, 4),(uint)*(byte *)((long)data + 0x11));
    uVar31 = bVar22 - 8;
    if (bVar22 < 8) {
      uVar31 = (uint)bVar22;
    }
    uStack_e8 = CONCAT44(PF_PART4(uStack_e8, 4),uVar31);
    uVar39 = (ulong)*(byte *)data + 0x12;
    uStack_c88 = 0;
    uStack_c84 = 0;
    uStack_c80 = 0;
    uStack_c7c = 0;
    uStack_c90 = (uint *******)0x0;
    uVar31 = (uint)*(ushort *)((long)data + 0xc);
    uVar29 = (uint)*(ushort *)((long)data + 0xe);
    if (*(char *)((long)data + 1) == '\x01') {
      uVar58 = (ulong)bVar23 + 7 >> 3;
      uVar47 = uVar58 * uStack_138;
      if (uVar39 <= length && uVar47 <= length - uVar39) {
        uStack_720 = (uint *******)CONCAT71(PF_PART7(uStack_720, 1),0xff);
        recovered_10009148(&uStack_c90,(ulong)*(ushort *)((long)data + 5) << 2,
                           (undefined1 *)&uStack_720);
        uVar61 = 0xffffffffffffffff;
        pbVar32 = (byte *)((long)data + uVar39);
        lVar59 = 0;
        do {
          uVar61 = uVar61 + 1;
          if (uStack_138 <= uVar61) {
            uVar39 = uVar47 + uVar39;
            uVar31 = (uint)pvStack_150;
            uVar29 = (uint)appvStack_b8[0];
            goto LAB_10004f58;
          }
          uVar68 = recovered_1000935c(pbVar32,(uint)bVar23,(uint)(bVar23 == 0x20) << 3,
                                      (byte *)((long)uStack_c90 + lVar59));
          pbVar32 = pbVar32 + uVar58;
          lVar59 = lVar59 + 4;
        } while ((uVar68 & 1) != 0);
      }
LAB_10004f68:
      bVar17 = false;
    }
    else {
LAB_10004f58:
      pppppppuStack_170 = (uint *******)((ulong)uVar31 * (ulong)uVar29);
      if ((ulong)pppppppuStack_170 >> 0x3e != 0) goto LAB_10004f68;
      recovered_10009330(&uStack_1b0,(long)pppppppuStack_170 * 4);
      uVar58 = (uStack_d0 & 0xffffffff) + 7 >> 3;
      pppppppuStack_100 = (uint *******)0x0;
      uStack_720 = (uint *******)&pppppppuStack_100;
      uStack_718 = (uint *******)&pppppppuStack_170;
      uStack_710 = &uStack_e8;
      uStack_708 = (uint)&uStack_d0;
      uStack_704 = (undefined2)((ulong)&uStack_d0 >> 0x20);
      uStack_702 = (undefined1)((ulong)&uStack_d0 >> 0x30);
      uStack_701 = (undefined1)((ulong)&uStack_d0 >> 0x38);
      ppvStack_700 = &pvStack_120;
      puStack_6f8 = &uStack_138;
      puStack_6f0 = &uStack_c90;
      puStack_6e8 = &uStack_d8;
      ppvStack_6e0 = &pvStack_150;
      pppvStack_6d8 = appvStack_b8;
      puStack_6d0 = &uStack_1b0;
      if (bVar22 < 8) {
        if (((pppppppuStack_170 == (uint *******)0x0) ||
            (PF_PART8(auVar9, 8) = 0, PF_PART8(auVar9, 0) = pppppppuStack_170, PF_PART8(auVar11, 8) = 0,
            PF_PART8(auVar11, 0) = uVar58, SUB168(auVar9 * auVar11,8) == 0)) &&
           (uVar39 <= length && (long)pppppppuStack_170 * uVar58 <= length - uVar39)) {
          pbVar32 = (byte *)((long)data + uVar39);
          pppppppuVar57 = (uint *******)0xffffffffffffffff;
          do {
            pppppppuVar57 = (uint *******)((long)pppppppuVar57 + 1);
            if (pppppppuStack_170 <= pppppppuVar57) goto LAB_100052dc;
            uVar39 = recovered_10009434(&uStack_720,pbVar32);
            pbVar32 = pbVar32 + uVar58;
          } while ((uVar39 & 1) != 0);
        }
LAB_100050f0:
        bVar17 = false;
      }
      else {
        while (pppppppuStack_100 < pppppppuStack_170) {
          if (length <= uVar39) goto LAB_100050f0;
          uVar47 = uVar39 + 1;
          bVar22 = *(byte *)((long)data + uVar39);
          if ((char)bVar22 < '\0') {
            if (length - uVar47 < uVar58) goto LAB_100050f0;
            uVar39 = uVar47 + uVar58;
            iVar28 = ((int)(char)bVar22 & 0x7fU) + 2;
            while (iVar28 = iVar28 + -1, iVar28 != 0) {
              uVar61 = recovered_10009434(&uStack_720,(byte *)((long)data + uVar47));
              if ((uVar61 & 1) == 0) goto LAB_100050f0;
            }
          }
          else {
            uVar61 = (length - 1) - uVar39;
            uVar39 = uVar47;
            for (iVar28 = (bVar22 & 0x7f) + 1; iVar28 != 0; iVar28 = iVar28 + -1) {
              if (length < uVar39 || uVar61 < uVar58) goto LAB_100050f0;
              uVar47 = recovered_10009434(&uStack_720,(byte *)((long)data + uVar39));
              if ((uVar47 & 1) == 0) goto LAB_100050f0;
              uVar39 = uVar39 + uVar58;
              uVar61 = uVar61 - uVar58;
            }
          }
        }
LAB_100052dc:
        *(uint *)image = (uint)pvStack_150;
        *(uint *)((long)image + 4) = (uint)appvStack_b8[0];
        recovered_10007c38((undefined8 *)((long)image + 8),&uStack_1b0);
        bVar17 = true;
      }
      uStack_1a8 = 0;
      recovered_10002f1c(uStack_1b0);
    }
    uStack_c88 = 0;
    uStack_c84 = 0;
    pppppppuVar57 = uStack_c90;
    goto LAB_10005100;
  case 4:
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10007138(image,&uStack_720);
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
    ppppppuVar60 = _DAT_1000c870;
    lVar59 = 0;
    uStack_c88 = (uint)uRam000000001000c878;
    uVar31 = uStack_c88;
    uStack_c84 = (uint)((ulong)uRam000000001000c878 >> 0x20);
    uVar29 = uStack_c84;
    uStack_c90 = (uint *******)_DAT_1000c870;
    uStack_c80 = 0;
    uStack_c7c = 0;
    do {
      *(undefined1 *)((long)&uStack_c78 + lVar59) = 0;
      recovered_10000d20((undefined1 *)((long)&uStack_c74 + lVar59),0x100);
      lVar59 = lVar59 + 0x104;
    } while (lVar59 != 0x410);
    recovered_100095e0((long)acStack_868);
    recovered_100095e0((long)acStack_7e8);
    puStack_768 = (uint *)0x0;
    uStack_758 = 0;
    uStack_760 = 0;
    lStack_748 = 0;
    puStack_750 = (uint *)0x0;
    pppppppuStack_738 = (uint *******)0x0;
    uStack_740 = 0;
    uStack_730 = 0;
    uStack_720 = (uint *******)ppppppuVar60;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    PF_PART4(uStack_718, 0) = uVar31;
    PF_PART4(uStack_718, 4) = uVar29;
    recovered_10000d20((undefined1 *)&uStack_708,0x490);
    lVar59 = 0;
    do {
      auStack_2f8[lVar59] = 0;
      *(undefined8 *)((long)auStack_2f0 + lVar59) = 0;
      *(undefined8 *)((long)auStack_2f0 + lVar59 + 0x10) = 0;
      *(undefined8 *)((long)auStack_2f0 + lVar59 + 8) = 0;
      lVar59 = lVar59 + 0x20;
    } while (lVar59 != 0x80);
    lVar59 = 0;
    apuStack_270[0xc] = (uint *)0x0;
    apuStack_270[0xb] = (uint *)0x0;
    apuStack_270[0xe] = (uint *)0x0;
    apuStack_270[0xd] = (uint *)0x0;
    apuStack_270[8] = (uint *)0x0;
    apuStack_270[7] = (uint *)0x0;
    apuStack_270[10] = (uint *)0x0;
    apuStack_270[9] = (uint *)0x0;
    apuStack_270[4] = (uint *)0x0;
    apuStack_270[3] = (uint *)0x0;
    apuStack_270[6] = (uint *)0x0;
    apuStack_270[5] = (uint *)0x0;
    apuStack_270[0] = (uint *)0x0;
    uStack_278 = 0;
    apuStack_270[2] = (uint *)0x0;
    apuStack_270[1] = (uint *)0x0;
    do {
      *(undefined1 *)((long)auStack_2f0 + lVar59 + 0x78) = 0;
      *(undefined8 *)((long)apuStack_270 + lVar59) = 0;
      *(undefined8 *)((long)apuStack_270 + lVar59 + 0x10) = 0;
      *(undefined8 *)((long)apuStack_270 + lVar59 + 8) = 0;
      lVar59 = lVar59 + 0x20;
    } while (lVar59 != 0x80);
    apuStack_270[0xf] = (uint *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    pppppppuStack_1c8 = (uint *******)0x0;
    uStack_1d0 = 0;
    uStack_1c0 = 0;
    recovered_10000c94(&uStack_c90,&uStack_720,0x428);
    recovered_100096c4((long)acStack_868,(long)auStack_2f8);
    recovered_100096c4((long)acStack_7e8,(long)&uStack_278);
    recovered_1000967c((long *)&puStack_768);
    recovered_10002f1c(puStack_768);
    puStack_768 = apuStack_270[0xf];
    uStack_758 = uStack_1e8;
    uStack_760 = uStack_1f0;
    apuStack_270[0xf] = (uint *)0x0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    recovered_10009710(&puStack_750,&uStack_1e0);
    uStack_730 = uStack_1c0;
    pppppppuStack_738 = pppppppuStack_1c8;
    recovered_100095a8((long)&uStack_720);
    if (3 < length) {
      if (*(char *)data == -1) {
        if (*(char *)((long)data + 1) == -0x28) {
          uVar39 = 2;
          while( true ) {
            if (length <= uVar39 + 1) break;
            lVar59 = (long)data + uVar39 + 3;
            while( true ) {
              if (length <= uVar39) goto LAB_10005ca8;
              if (*(char *)((long)data + uVar39) == -1) break;
              uVar39 = uVar39 + 1;
              lVar59 = lVar59 + 1;
            }
            do {
              uVar58 = uVar39;
              if (length <= uVar58) goto LAB_10005ca8;
              bVar22 = *(byte *)((long)data + uVar58);
              uVar39 = uVar58 + 1;
              lVar59 = lVar59 + 1;
            } while (bVar22 == 0xff);
            if (bVar22 == 0xd9) break;
            uVar31 = (uint)bVar22;
            if (((uVar31 & 0xf8) != 0xd0) && (uVar31 != 1 && 9 < uVar31 - 0xd0)) {
              uVar47 = uVar58 + 3;
              if (length < uVar47) break;
              uVar29 = (uint)CONCAT11(*(undefined1 *)((long)data + uVar39),
                                      *(undefined1 *)((long)data + uVar58 + 2));
              uVar30 = uVar29 - 2;
              uVar39 = (ulong)uVar30;
              if (uVar29 < 2) break;
              if (length - uVar47 < uVar39) break;
              puVar2 = (ushort *)((long)data + uVar47);
              if (uVar31 == 0xc0) {
                if ((uVar30 < 6) || ((byte)*puVar2 != 8)) break;
                uVar63 = '\0';
                uVar31 = (uint)(*(ushort *)((long)puVar2 + 1) >> 8) |
                         (*(ushort *)((long)puVar2 + 1) & 0xff00ff) << 8;
                uVar29 = (uint)(*(ushort *)((long)puVar2 + 3) >> 8) |
                         (*(ushort *)((long)puVar2 + 3) & 0xff00ff) << 8;
                uStack_c90 = (uint *******)CONCAT44(uVar31,uVar29);
                if ((uVar29 == 0) || (uVar31 == 0)) goto LAB_10005cac;
                uVar63 = '\0';
                bVar22 = *(byte *)((long)puVar2 + 5);
                if ((4 < bVar22) || ((1 << (ulong)(bVar22 & 0x1f) & 0x1aU) == 0)) goto LAB_10005cac;
                if (uVar30 < (uint)bVar22 * 3 + 6) break;
                recovered_1000967c((long *)&puStack_768);
                uVar58 = 0;
                uStack_c88 = 1;
                uStack_c84 = 1;
                while (uVar58 != bVar22) {
                  pbVar32 = (byte *)((long)puVar2 + uVar58 * 3 + 6);
                  uStack_708 = 0;
                  uStack_704 = 0;
                  uStack_702 = 0;
                  uStack_701 = 0;
                  PF_PART4(uStack_710, 0) = 0;
                  PF_PART4(uStack_710, 4) = 0;
                  ppvStack_700 = (void **)((ulong)ppvStack_700 & 0xffffffff00000000);
                  puStack_6e8 = (ulong *)0x0;
                  puStack_6f8 = (uint *)0x0;
                  puStack_6f0 = (undefined8 *)0x0;
                  bVar23 = pbVar32[1] >> 4;
                  uVar31 = (uint)bVar23;
                  uStack_720 = (uint *******)(ulong)CONCAT14(bVar23,(uint)*pbVar32);
                  PF_PART4(uStack_718, 0) = pbVar32[1] & 0xf;
                  bVar23 = pbVar32[2];
                  PF_PART4(uStack_718, 4) = (uint)bVar23;
                  bVar17 = uVar31 - 1 < 4;
                  bVar20 = (uint)uStack_718 - 1 < 4;
                  if ((bVar17 && bVar20) && bVar23 < 4) {
                    if (uStack_c88 <= uVar31) {
                      uStack_c88 = uVar31;
                    }
                    if (uStack_c84 <= (uint)uStack_718) {
                      uStack_c84 = (uint)uStack_718;
                    }
                    if (uStack_760 == uStack_758) {
                      uVar61 = 4;
                      if (uStack_760 != 0) {
                        uVar61 = uStack_760 << 1;
                      }
                      if (uStack_760 < uVar61) {
                        puVar43 = recovered_10002ee8(uVar61 << 6);
                        lVar59 = 0;
                        for (uVar68 = 0; uVar68 < uStack_760; uVar68 = uVar68 + 1) {
                          puVar64 = (undefined8 *)((long)puVar43 + lVar59);
                          puVar53 = (undefined8 *)((long)puStack_768 + lVar59);
                          uVar26 = *(undefined4 *)(puVar53 + 4);
                          uVar72 = *puVar53;
                          uVar71 = puVar53[3];
                          uVar51 = puVar53[2];
                          puVar64[1] = puVar53[1];
                          *puVar64 = uVar72;
                          puVar64[3] = uVar71;
                          puVar64[2] = uVar51;
                          *(undefined4 *)(puVar64 + 4) = uVar26;
                          recovered_100097b0(puVar64 + 5,puVar53 + 5);
                          recovered_1000c074((undefined8 *)((long)puStack_768 + lVar59 + 0x28));
                          lVar59 = lVar59 + 0x40;
                        }
                        recovered_10002f1c(puStack_768);
                        puStack_768 = puVar43;
                        uStack_758 = uVar61;
                      }
                    }
                    puVar3 = (ulong *)(puStack_768 + uStack_760 * 0x10);
                    *(int *)(puVar3 + 4) = (int)ppvStack_700;
                    puVar3[1] = CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718);
                    *puVar3 = (ulong)uStack_720;
                    puVar3[3] = CONCAT17(uStack_701,
                                         CONCAT16(uStack_702,CONCAT24(uStack_704,uStack_708)));
                    puVar3[2] = CONCAT44(PF_PART4(uStack_710, 4),(uint)uStack_710);
                    recovered_100097cc((long *)(puVar3 + 5),(long *)&puStack_6f8);
                    uStack_760 = uStack_760 + 1;
                  }
                  puStack_6f0 = (undefined8 *)0x0;
                  recovered_10002f1c(puStack_6f8);
                  uVar63 = '\0';
                  uVar58 = uVar58 + 1;
                  if ((!bVar17 || !bVar20) || bVar23 >= 4) goto LAB_10005cac;
                }
              }
              else {
                uVar31 = (uint)bVar22;
                if (uVar31 == 0xc4) {
                  uVar58 = 0;
                  while (uVar58 < uVar39) {
                    if (uVar39 - uVar58 < 0x11) goto LAB_10005ca8;
                    bVar22 = *(byte *)((long)puVar2 + uVar58);
                    uVar61 = (ulong)bVar22 & 0xf;
                    bVar17 = false;
                    bVar20 = true;
                    if (bVar22 < 0x20) {
                      bVar20 = 2 < (uint)uVar61;
                      bVar17 = (uint)uVar61 == 3;
                    }
                    if (bVar20 && !bVar17) goto LAB_10005ca8;
                    uVar68 = 0;
                    for (lVar46 = 0; lVar46 != 0x10; lVar46 = lVar46 + 1) {
                      uVar68 = uVar68 + *(byte *)(lVar59 + uVar58 + lVar46);
                    }
                    lVar46 = uVar58 + 0x11;
                    if (uVar39 - lVar46 < uVar68) goto LAB_10005ca8;
                    uStack_720 = (uint *******)((ulong)uStack_720 & 0xffffffffffffff00);
                    uStack_708 = 0;
                    uStack_704 = 0;
                    uStack_702 = 0;
                    uStack_701 = 0;
                    pcVar5 = acStack_868 + uVar61 * 0x20;
                    if (0xf < bVar22) {
                      pcVar5 = acStack_7e8 + uVar61 * 0x20;
                    }
                    PF_PART4(uStack_718, 0) = 0;
                    PF_PART4(uStack_718, 4) = 0;
                    PF_PART4(uStack_710, 0) = 0;
                    PF_PART4(uStack_710, 4) = 0;
                    recovered_10009760(pcVar5,(undefined1 *)&uStack_720);
                    PF_PART4(uStack_710, 0) = 0;
                    PF_PART4(uStack_710, 4) = 0;
                    recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
                    uVar61 = 0;
                    uVar31 = 0;
                    for (lVar45 = 1; lVar45 != 0x11; lVar45 = lVar45 + 1) {
                      bVar22 = ((byte *)((long)puVar2 + uVar58))[lVar45];
                      iVar28 = (int)uVar61;
                      for (; (uint)bVar22 + iVar28 != (int)uVar61; uVar61 = uVar61 + 1) {
                        if (uVar68 <= uVar61) goto LAB_10005ca8;
                        bVar23 = *(byte *)((long)puVar2 + uVar61 + lVar46);
                        uVar67 = *(ulong *)(pcVar5 + 0x10);
                        if (uVar67 == *(ulong *)(pcVar5 + 0x18)) {
                          uVar40 = 4;
                          if (uVar67 != 0) {
                            uVar40 = uVar67 << 1;
                          }
                          if (uVar67 < uVar40) {
                            pvVar33 = recovered_10002ee8(uVar40 * 0xc);
                            lVar56 = 0;
                            pvVar35 = *(void **)(pcVar5 + 8);
                            for (lVar42 = *(long *)(pcVar5 + 0x10); lVar42 != 0;
                                lVar42 = lVar42 + -1) {
                              puVar64 = (undefined8 *)((long)pvVar35 + lVar56);
                              uVar51 = *puVar64;
                              *(undefined4 *)((undefined8 *)((long)pvVar33 + lVar56) + 1) =
                                   *(undefined4 *)(puVar64 + 1);
                              *(undefined8 *)((long)pvVar33 + lVar56) = uVar51;
                              lVar56 = lVar56 + 0xc;
                            }
                            recovered_10002f1c(pvVar35);
                            *(void **)(pcVar5 + 8) = pvVar33;
                            *(ulong *)(pcVar5 + 0x18) = uVar40;
                            uVar67 = *(ulong *)(pcVar5 + 0x10);
                          }
                        }
                        puVar43 = (uint *)(*(long *)(pcVar5 + 8) + uVar67 * 0xc);
                        *puVar43 = uVar31;
                        puVar43[1] = (uint)lVar45;
                        puVar43[2] = (uint)bVar23;
                        *(ulong *)(pcVar5 + 0x10) = uVar67 + 1;
                        uVar31 = uVar31 + 1;
                      }
                      if ((uint)(1 << (ulong)((uint)lVar45 & 0x1f)) < uVar31) goto LAB_10005ca8;
                      uVar31 = uVar31 << 1;
                    }
                    uVar63 = '\0';
                    uVar58 = uVar68 + lVar46;
                    *pcVar5 = uVar61 == uVar68;
                    if (uVar61 != uVar68) goto LAB_10005cac;
                  }
                }
                else if (uVar31 == 0xdb) {
                  uVar58 = 0;
                  while (uVar58 < uVar39) {
                    uVar29 = (uint)*(byte *)((long)puVar2 + uVar58);
                    uVar31 = uVar29 & 0xf;
                    if (0x1f < *(byte *)((long)puVar2 + uVar58) || 3 < uVar31) goto LAB_10005ca8;
                    uVar58 = uVar58 + 1;
                    uVar61 = 0x40;
                    if (0xf < uVar29) {
                      uVar61 = 0x80;
                    }
                    if (uVar39 - uVar58 < uVar61) goto LAB_10005ca8;
                    for (lVar59 = 0; lVar59 != 0x100; lVar59 = lVar59 + 4) {
                      if (uVar29 < 0x10) {
                        uVar30 = (uint)*(byte *)((long)puVar2 + uVar58);
                        uVar58 = uVar58 + 1;
                      }
                      else {
                        uVar30 = (uint)(*(ushort *)((long)puVar2 + uVar58) >> 8) |
                                 (*(ushort *)((long)puVar2 + uVar58) & 0xff00ff) << 8;
                      }
                      if (0xf < uVar29) {
                        uVar58 = uVar58 + 2;
                      }
                      (&uStack_c74)
                      [(ulong)uVar31 * 0x41 + (ulong)*(uint *)((long)&DAT_1000c8b0 + lVar59)] =
                           uVar30;
                    }
                    *(undefined1 *)(&uStack_c78 + (ulong)uVar31 * 0x41) = 1;
                  }
                }
                else if (uVar31 == 0xdd) {
                  if (uVar30 != 4) break;
                  uStack_c80 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
                }
                else if (uVar31 == 0xee) {
                  if ((0xb < uVar30) &&
                     (iVar28 = recovered_10000d48((byte *)puVar2,(byte *)str_1000cf18,5),
                     iVar28 == 0)) {
                    uStack_c7c = (uint)*(byte *)((long)puVar2 + 0xb);
                  }
                }
                else {
                  if (uVar31 == 0xda) {
                    uVar63 = '\0';
                    if ((uVar30 < 6) || (uStack_760 == 0)) goto LAB_10005cac;
                    uVar58 = (ulong)(byte)*puVar2;
                    if ((byte)*puVar2 != 0) {
                      lVar59 = uVar58 * 2;
                      if ((int)lVar59 + 4U <= uVar30) {
                        uVar61 = 0;
                        lStack_748 = 0;
                        goto LAB_10006684;
                      }
                    }
                    break;
                  }
                  if (uVar31 != 200 && uVar31 - 0xc1 < 0xf) break;
                }
              }
              uVar39 = uVar47 + uVar39;
            }
          }
        }
      }
    }
    goto LAB_10005ca8;
  case 5:
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10007138(image,&uStack_720);
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
    if (length < 0x1e) {
      return '\0';
    }
    iVar28 = recovered_10000d48(data,(byte *)str_1000ceef,9);
    if (iVar28 != 0) {
      return '\0';
    }
    if (*(char *)((long)data + 0xd) != '\0') {
      return '\0';
    }
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    PF_PART4(uStack_710, 0) = (uint)DAT_1000c7b8;
    PF_PART4(uStack_710, 4) = (uint)((ulong)DAT_1000c7b8 >> 0x20);
    puStack_6f8 = (uint *)0x0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    ppvStack_700 = (void **)0x0;
    iVar28 = recovered_10000d48((byte *)((long)data + 9),&DAT_1000cf1e,4);
    if (iVar28 == 0) {
      PF_PART4(uStack_718, 4) = 0;
      PF_PART4(uStack_710, 0) = 4;
LAB_1000517c:
      uStack_108 = 0xe;
      iVar28 = recovered_10009b50(data,length,&uStack_108,(uint *)&uStack_720);
      if (iVar28 == 0) goto LAB_1000590c;
      iVar28 = recovered_10009b50(data,length,&uStack_108,(uint *)((ulong)&uStack_720 | 4));
      if (iVar28 == 0) goto LAB_1000590c;
      iVar28 = recovered_10009b50(data,length,&uStack_108,(uint *)((ulong)&uStack_720 | 8));
      bVar17 = false;
      if (((iVar28 != 0) && ((uint)uStack_720 != 0)) &&
         ((PF_PART4(uStack_720, 4) != 0 && ((uint)uStack_718 < 3)))) {
        if (3 < PF_PART4(uStack_718, 4)) {
          uStack_c90 = (uint *******)((ulong)uStack_c90 & 0xffffffff00000000);
          iVar28 = recovered_10009b50(data,length,&uStack_108,(uint *)&uStack_c90);
          if ((iVar28 == 0) ||
             ((((uint)uStack_c90 != 0 && ((uint)uStack_c90 != 0x96)) && ((uint)uStack_c90 != 100))))
          goto LAB_1000590c;
        }
        while( true ) {
          uStack_c90 = (uint *******)((ulong)uStack_c90 & 0xffffffff00000000);
          uStack_1b0 = (void *)((ulong)uStack_1b0 & 0xffffffff00000000);
          iVar28 = recovered_10009b50(data,length,&uStack_108,(uint *)&uStack_c90);
          if (iVar28 == 0) break;
          iVar28 = recovered_10009b50(data,length,&uStack_108,(uint *)&uStack_1b0);
          uVar16 = uStack_108;
          if (iVar28 == 0) break;
          uVar31 = (uint)uStack_1b0;
          if ((uint)uStack_c90 == 0) {
            if ((uint)uStack_1b0 == 0) {
              uStack_110 = 0;
              pvStack_120 = (void *)0x0;
              lStack_118 = 0;
              goto LAB_10005b54;
            }
            break;
          }
          if ((length < uStack_108) ||
             (uVar39 = (ulong)uStack_1b0 & 0xffffffff, length - uStack_108 < uVar39)) break;
          puVar43 = (uint *)((long)data + uStack_108);
          if ((uint)uStack_c90 == 1 && 3 < (uint)uStack_1b0) {
            uVar29 = recovered_10009cdc(puVar43);
            if (uVar29 < 0x101 && uVar29 * 3 + 4 <= uVar31) {
              pppppppuStack_170 = (uint *******)((ulong)pppppppuStack_170 & 0xffffffffffffff00);
              recovered_10009148((long *)&uStack_708,(ulong)(uVar29 * 3),
                                 (undefined1 *)&pppppppuStack_170);
              recovered_10000c94((void *)CONCAT17(uStack_701,
                                                  CONCAT16(uStack_702,
                                                           CONCAT24(uStack_704,uStack_708))),
                                 puVar43 + 1,(ulong)ppvStack_700);
            }
          }
          else if (((uint)uStack_c90 == 0x11) && ((uint)uStack_1b0 != 0)) {
            PF_PART4(uStack_710, 4) = (uint)(byte)*puVar43;
          }
          uStack_108 = uVar16 + uVar39;
        }
        goto LAB_1000590c;
      }
    }
    else {
      if ((((*(char *)((long)data + 9) == 'v') && (*(byte *)((long)data + 10) - 0x30U < 10)) &&
          (*(byte *)((long)data + 0xb) - 0x30U < 10)) && (*(byte *)((long)data + 0xc) - 0x30U < 10)) {
        PF_PART4(uStack_718, 4) =
             ((uint)*(byte *)((long)data + 0xb) * 10 + (uint)*(byte *)((long)data + 10) * 100 +
             (uint)*(byte *)((long)data + 0xc)) - 0x14d0;
        PF_PART4(uStack_710, 0) = 8;
        if (PF_PART4(uStack_718, 4) < 0xb) {
          PF_PART4(uStack_710, 0) = 4;
        }
        goto LAB_1000517c;
      }
LAB_1000590c:
      bVar17 = false;
    }
    goto LAB_10005910;
  case 6:
    PF_PART4(uStack_718, 0) = 0;
    PF_PART4(uStack_718, 4) = 0;
    uStack_720 = (uint *******)0x0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_702 = 0;
    uStack_701 = 0;
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10007138(image,&uStack_720);
    PF_PART4(uStack_710, 0) = 0;
    PF_PART4(uStack_710, 4) = 0;
    recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718));
    if (length < 0x14) {
      return '\0';
    }
    iVar28 = recovered_10000d48(data,(byte *)str_1000c8a7,8);
    if (iVar28 != 0) {
      return '\0';
    }
    uVar31 = *(uint *)((long)data + 8);
    if (uVar31 == 0) {
      return '\0';
    }
    uVar29 = *(uint *)((long)data + 0xc);
    if (uVar29 == 0) {
      return '\0';
    }
    iVar28 = *(int *)((long)data + 0x10);
    if (iVar28 == 0) {
      return '\0';
    }
    if ((ulong)uVar29 * (ulong)uVar31 >> 0x3e != 0) {
      return '\0';
    }
    uStack_c90 = (uint *******)((ulong)uStack_c90 & 0xffffffffffffff00);
    recovered_10009dd0(&uStack_720,(ulong)uVar29 * (ulong)uVar31 * 4,(undefined1 *)&uStack_c90);
    uVar39 = 0x14;
    for (iVar36 = 0; bVar17 = iVar36 == iVar28, !bVar17; iVar36 = iVar36 + 1) {
      if (length < uVar39 || length - uVar39 < 0x1c) goto LAB_1000552c;
      puVar43 = (uint *)((long)data + uVar39);
      uVar58 = (ulong)puVar43[3];
      uVar30 = puVar43[4];
      uVar47 = uVar30 * uVar58;
      if (uVar47 >> 0x3e != 0) goto LAB_1000552c;
      uVar39 = uVar39 + 0x1c;
      uVar47 = uVar47 * 4;
      if (length < uVar39 || length - uVar39 < uVar47) goto LAB_1000552c;
      if ((*puVar43 & 1) != 0) {
        uVar54 = puVar43[1];
        uVar27 = puVar43[2];
        pvVar35 = (void *)((long)data + uVar39);
        uVar37 = puVar43[5];
        for (uVar61 = 0; uVar61 != uVar30; uVar61 = uVar61 + 1) {
          uVar48 = uVar27 + (int)uVar61;
          if ((-1 < (int)uVar48) && ((int)uVar48 < (int)uVar29)) {
            uVar49 = uVar54;
            pvVar33 = pvVar35;
            for (uVar68 = uVar58; uVar68 != 0; uVar68 = uVar68 - 1) {
              if ((-1 < (int)uVar49) && ((int)uVar49 < (int)uVar31)) {
                recovered_10000c94(&uStack_c90,pvVar33,4);
                PF_PART4(uStack_c90, 0) =
                     CONCAT13((char)(((uint)PF_PART1(uStack_c90, 3) * (uint)(byte)uVar37 + 0x7f) / 0xff),
                              (undefined3)uStack_c90);
                recovered_10009c14((long)((long)uStack_720 +
                                         ((ulong)uVar31 * (ulong)uVar48 + (ulong)uVar49) * 4),
                                   (long)&uStack_c90);
              }
              pvVar33 = (void *)((long)pvVar33 + 4);
              uVar49 = uVar49 + 1;
            }
          }
          pvVar35 = (void *)((long)pvVar35 + uVar58 * 4);
        }
      }
      uVar39 = uVar47 + uVar39;
    }
    *(uint *)image = uVar31;
    *(uint *)((long)image + 4) = uVar29;
    recovered_10007c38((undefined8 *)((long)image + 8),&uStack_720);
    break;
  default:
    return '\0';
  }
LAB_1000552c:
  uStack_718 = (uint *******)0x0;
  pppppppuVar57 = uStack_720;
  goto LAB_10005100;
LAB_10005b54:
  uStack_c90 = (uint *******)0x0;
  bVar17 = recovered_10009b80((long)data,length,&uStack_108,(uint)uStack_710,&uStack_c90);
  if (!bVar17) goto LAB_10005c18;
  if (uStack_c90 == (uint *******)0x0) {
    if ((lStack_118 != 0) &&
       (uVar39 = ((ulong)uStack_720 >> 0x20) * ((ulong)uStack_720 & 0xffffffff), uVar39 >> 0x3e == 0
       )) {
      uStack_c90 = (uint *******)0x0;
      recovered_10009dd0((undefined8 *)&uStack_138,uVar39 * 4,(undefined1 *)&uStack_c90);
      lStack_cb0 = lStack_118;
      goto LAB_10005cf0;
    }
    goto LAB_10005c18;
  }
  if (length <= uStack_c90) goto LAB_10005c18;
  recovered_10009ce8((long *)&pvStack_120,&uStack_c90);
  goto LAB_10005b54;
LAB_10005cf0:
  bVar17 = lStack_cb0 == 0;
  if (lStack_cb0 != 0) {
    uStack_c90 = (uint *******)0x0;
    uStack_c88 = 0;
    uStack_c84 = CONCAT31(PF_PART3(uStack_c84, 1),1);
    uStack_c80 = 0xff;
    uStack_c7c = 0;
    uStack_c78 = 0;
    ppvStack_c70 = (void **)0x0;
    lStack_cb0 = lStack_cb0 + -1;
    uStack_1b0 = *(void **)((long)pvStack_120 + lStack_cb0 * 8);
    iVar28 = recovered_10009b50(data,length,&uStack_1b0,(uint *)&uStack_c90);
    if (iVar28 == 0) goto LAB_10006734;
    iVar28 = recovered_10009b50(data,length,&uStack_1b0,(uint *)((ulong)&uStack_c90 | 4));
    if (iVar28 == 0) goto LAB_10006734;
    iVar28 = recovered_10009b50(data,length,&uStack_1b0,&uStack_c88);
    if (iVar28 == 0) goto LAB_10006734;
    pppppppuStack_170 = (uint *******)((ulong)pppppppuStack_170 & 0xffffffff00000000);
    iVar28 = recovered_10009b50(data,length,&uStack_1b0,(uint *)&pppppppuStack_170);
    if (iVar28 == 0) goto LAB_10006734;
    if ((int)pppppppuStack_170 != 0) {
      if (length < uStack_1b0) goto LAB_10006734;
      if (length - (long)uStack_1b0 < ((ulong)pppppppuStack_170 & 0xffffffff)) goto LAB_10006734;
      uStack_1b0 = (void *)((long)uStack_1b0 + ((ulong)pppppppuStack_170 & 0xffffffff));
    }
    uVar39 = (ulong)uStack_c80;
    uVar31 = uStack_c7c;
    uVar29 = uStack_c78;
    uVar19 = (char)uStack_c84;
    while( true ) {
      pvStack_150 = (void *)((ulong)pvStack_150 & 0xffffffff00000000);
      appvStack_b8[0] = (void **)((ulong)appvStack_b8[0] & 0xffffffff00000000);
      iVar28 = recovered_10009b50(data,length,&uStack_1b0,(uint *)&pvStack_150);
      if (iVar28 == 0) goto LAB_10006734;
      iVar28 = recovered_10009b50(data,length,&uStack_1b0,(uint *)appvStack_b8);
      pvVar35 = uStack_1b0;
      uVar30 = (uint)uStack_710;
      if (iVar28 == 0) goto LAB_10006734;
      if ((uint)pvStack_150 == 0) break;
      if (length < uStack_1b0) goto LAB_10006734;
      uVar58 = (ulong)appvStack_b8[0] & 0xffffffff;
      if (length - (long)uStack_1b0 < uVar58) goto LAB_10006734;
      puVar43 = (uint *)((long)data + (long)uStack_1b0);
      if ((uint)pvStack_150 == 6 && 3 < (uint)appvStack_b8[0]) {
        uVar30 = recovered_10009cdc(puVar43);
        if (0xfe < uVar30) {
          uVar30 = 0xff;
        }
        uVar39 = (ulong)uVar30;
      }
      else if ((uint)pvStack_150 == 8 && 3 < (uint)appvStack_b8[0]) {
        uVar30 = recovered_10009cdc(puVar43);
        uVar19 = uVar30 != 0;
      }
      else if ((uint)pvStack_150 == 0xf && 7 < (uint)appvStack_b8[0]) {
        uVar31 = recovered_10009cdc(puVar43);
        uVar29 = recovered_10009cdc(puVar43 + 1);
      }
      else if ((uint)pvStack_150 == 0x21 && 3 < (uint)appvStack_b8[0]) {
        uVar30 = recovered_10009cdc(puVar43);
        pppppppuStack_170 = (uint *******)CONCAT44(PF_PART4(pppppppuStack_170, 4),uVar30);
        pppppppuStack_100 = (uint *******)((ulong)pppppppuStack_100 & 0xffffffff00000000);
        recovered_10000c94(&pppppppuStack_100,&pppppppuStack_170,4);
        if (PF_PART4(pppppppuStack_100, 0) <= 0.0) {
          uVar39 = 0;
        }
        else if (1.0 <= PF_PART4(pppppppuStack_100, 0)) {
          uVar39 = 0xff;
        }
        else {
          fVar13 = 0.5;
          if (PF_PART4(pppppppuStack_100, 0) * 255.0 < 0.0) {
            fVar13 = -0.5;
          }
          uVar39 = (ulong)(fVar13 + PF_PART4(pppppppuStack_100, 0) * 255.0);
        }
      }
      uStack_1b0 = (void *)((long)pvVar35 + uVar58);
    }
    uStack_c80 = (uint)uVar39;
    uStack_c84 = CONCAT31(PF_PART3(uStack_c84, 1),uVar19);
    uStack_c7c = uVar31;
    uStack_c78 = uVar29;
    if (((uint)appvStack_b8[0] != 0) ||
       (bVar20 = recovered_10009b80((long)data,length,&uStack_1b0,(uint)uStack_710,
                                    (ulong *)&ppvStack_c70), !bVar20)) goto LAB_10006734;
    bVar20 = recovered_10009b80((long)data,length,&uStack_1b0,uVar30,(ulong *)&pppppppuStack_170);
    uVar31 = uStack_c80;
    if (!bVar20) goto LAB_10006734;
    uVar29 = (uint)uStack_c90;
    uVar39 = (ulong)uStack_c90 & 0xffffffff;
    if ((uint)uStack_c90 == 0) goto LAB_10006734;
    uVar54 = PF_PART4(uStack_c90, 4);
    uVar58 = (ulong)PF_PART4(uStack_c90, 4);
    if ((PF_PART4(uStack_c90, 4) == 0) || (ppvStack_c70 == (void **)0x0)) goto LAB_10006734;
    if (((char)uStack_c84 == '\x01') && (uStack_c80 != 0)) {
      uStack_140 = 0;
      pvStack_150 = (void *)0x0;
      uStack_148 = 0;
      uStack_c0 = 0;
      appvStack_b8[0] = ppvStack_c70;
      uStack_c4 = 0;
      uStack_d0 = 0;
      iVar28 = recovered_10009b50(data,length,(ulonglong *)appvStack_b8,
                                  (uint *)((long)&uStack_c0 + 4));
      if (((iVar28 != 0) &&
          (iVar28 = recovered_10009b50(data,length,(ulonglong *)appvStack_b8,(uint *)&uStack_c0),
          iVar28 != 0)) &&
         (iVar28 = recovered_10009b50(data,length,(ulonglong *)appvStack_b8,&uStack_c4), iVar28 != 0
         )) {
        bVar20 = recovered_10009b80((long)data,length,(ulong *)appvStack_b8,uVar30,&uStack_d0);
        uVar30 = uStack_c88;
        if ((((bVar20) && (PF_PART4(uStack_c0, 4) == uVar29)) && ((uint)uStack_c0 == uVar54)) &&
           ((uStack_d0 != 0 && (uStack_c88 < 6)))) {
          uVar27 = *(uint *)(&DAT_1000cce0 + (ulong)uStack_c88 * 4);
          if (uStack_c4 == uVar27) {
            uStack_e0 = 0;
            uStack_d8 = uStack_d0;
            iVar28 = recovered_10009b50(data,length,&uStack_d8,(uint *)((long)&uStack_e0 + 4));
            if ((iVar28 != 0) &&
               (iVar28 = recovered_10009b50(data,length,&uStack_d8,(uint *)&uStack_e0), iVar28 != 0)
               ) {
              if (PF_PART4(uStack_e0, 4) == uVar29 && (uint)uStack_e0 == uVar54) {
                uVar61 = (ulong)(uVar29 + 0x3f >> 6);
                uVar47 = (ulong)(uVar54 + 0x3f >> 6);
                uVar68 = uVar47 * uVar61;
                recovered_10009e10((long *)&pppppppuStack_170,uVar68);
                lVar59 = 0;
LAB_10006058:
                if (uVar68 == 0) {
                  uStack_e8 = 0;
                  bVar21 = recovered_10009b80((long)data,length,&uStack_d8,(uint)uStack_710,
                                              &uStack_e8);
                  bVar20 = false;
                  if ((!bVar21) || (uStack_e8 != 0)) goto LAB_100065a4;
                  if (uVar58 * uVar39 >> 0x3e == 0) {
                    uStack_1b0 = (void *)((ulong)uStack_1b0 & 0xffffffffffffff00);
                    recovered_10009148((long *)&pvStack_150,uVar58 * uVar39 * 4,
                                       (undefined1 *)&uStack_1b0);
                    uStack_d40 = 0;
                    uVar68 = uVar58;
                    while( true ) {
                      uVar37 = (uint)uVar68;
                      uVar48 = uVar37 - 0x40;
                      if (0x3f < uVar37) {
                        uVar37 = 0x40;
                      }
                      if (uStack_d40 == uVar47) break;
                      uVar49 = 0;
                      uStack_d20 = 0;
                      uVar41 = uVar54 + (int)uStack_d40 * -0x40;
                      if (0x3f < uVar41) {
                        uVar41 = 0x40;
                      }
                      uStack_d24 = uVar29;
                      while( true ) {
                        uVar68 = (ulong)uStack_d24;
                        if (0x3f < uVar68) {
                          uVar68 = 0x40;
                        }
                        if (uStack_d20 == uVar61) break;
                        lVar59 = uStack_d20 + uStack_d40 * uVar61;
                        ppppppuVar60 = pppppppuStack_170[lVar59];
                        uVar67 = length - (long)ppppppuVar60;
                        if (length < ppppppuVar60 || uVar67 == 0) goto LAB_100065a0;
                        uVar50 = uVar29 + (int)uStack_d20 * -0x40;
                        if (0x3f < uVar50) {
                          uVar50 = 0x40;
                        }
                        uVar40 = lVar59 + 1;
                        uVar66 = uVar67;
                        if ((uVar40 < uStack_168) &&
                           (uVar66 = (long)pppppppuStack_170[uVar40] - (long)ppppppuVar60,
                           pppppppuStack_170[uVar40] < ppppppuVar60 || uVar66 == 0)) {
                          uVar66 = uVar67;
                        }
                        uVar50 = uVar50 * uVar41;
                        uVar69 = (ulong)(uVar50 * uVar27);
                        uStack_f8 = 0;
                        uStack_f0 = 0;
                        pppppppuStack_100 = (uint *******)0x0;
                        if (PF_PART4(uStack_710, 4) == 2) {
                          if ((uVar40 < uStack_168) && (uVar66 != 0)) {
                            recovered_1000c03c(&uStack_1b0,
                                               (undefined1 *)((long)data + (long)ppppppuVar60),
                                               (undefined1 *)((long)data + (long)ppppppuVar60) +
                                               uVar66);
                            bVar21 = recovered_10009f98(&uStack_1b0,(long *)&pppppppuStack_100);
                            uStack_1a8 = 0;
                            recovered_10002f1c(uStack_1b0);
                            bVar20 = false;
                            if (uStack_f8 == uVar69) {
                              bVar20 = bVar21;
                            }
                            if (bVar20 == true) goto LAB_10006244;
                          }
LAB_1000659c:
                          uStack_f8 = 0;
                          recovered_10002f1c(pppppppuStack_100);
                          goto LAB_100065a0;
                        }
                        if (PF_PART4(uStack_710, 4) == 1) {
                          uStack_1b0 = (void *)((ulong)uStack_1b0 & 0xffffffffffffff00);
                          recovered_10009148((long *)&pppppppuStack_100,uVar69,
                                             (undefined1 *)&uStack_1b0);
                          uVar40 = 0;
                          uVar67 = 0;
                          while (uVar40 != uVar27) {
                            for (uVar38 = 0; uVar8 = uVar50 - uVar38,
                                uVar38 < uVar50 && uVar67 < uVar66; uVar38 = (int)uVar52 + uVar38) {
                              uVar69 = uVar67 + 1;
                              pbVar32 = (byte *)((long)data + uVar67 + (long)ppppppuVar60);
                              bVar22 = *pbVar32;
                              uVar55 = (uint)bVar22;
                              if (bVar22 < 0x7f) {
                                if ((uVar66 <= uVar69) || (uVar8 <= uVar55)) goto LAB_1000659c;
                                uVar67 = uVar67 + 2;
                                uVar19 = *(undefined1 *)((long)data + uVar69 + (long)ppppppuVar60);
                                uVar52 = (ulong)bVar22 + 1;
                                uVar8 = uVar38;
                                for (uVar69 = uVar52; uVar69 != 0; uVar69 = uVar69 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_100 + uVar40 + (ulong)uVar27 * (ulong)uVar8)
                                       = uVar19;
                                  uVar8 = uVar8 + 1;
                                }
                              }
                              else if (uVar55 == 0x80) {
                                if (uVar66 - uVar69 < 2) goto LAB_1000659c;
                                uVar55 = (uint)CONCAT11(*(undefined1 *)
                                                         ((long)data + uVar69 + (long)ppppppuVar60),
                                                        pbVar32[2]);
                                uVar52 = (ulong)uVar55;
                                if ((uVar8 <= uVar55 - 1) ||
                                   (lVar59 = uVar67 + 3, uVar66 - lVar59 < (ulong)uVar55))
                                goto LAB_1000659c;
                                puVar44 = (undefined1 *)((long)data + lVar59 + (long)ppppppuVar60);
                                uVar8 = uVar38;
                                for (uVar67 = uVar52; uVar67 != 0; uVar67 = uVar67 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_100 + uVar40 + (ulong)uVar27 * (ulong)uVar8)
                                       = *puVar44;
                                  uVar8 = uVar8 + 1;
                                  puVar44 = puVar44 + 1;
                                }
                                uVar67 = lVar59 + uVar52;
                              }
                              else if (uVar55 == 0x7f) {
                                if ((uVar66 - uVar69 < 3) ||
                                   (uVar55 = (uint)CONCAT11(*(undefined1 *)
                                                             ((long)data +
                                                             uVar69 + (long)ppppppuVar60),pbVar32[2]
                                                           ), uVar52 = (ulong)uVar55,
                                   uVar8 <= uVar55 - 1)) goto LAB_1000659c;
                                uVar67 = uVar67 + 4;
                                bVar22 = pbVar32[3];
                                uVar8 = uVar38;
                                for (uVar69 = uVar52; uVar69 != 0; uVar69 = uVar69 - 1) {
                                  *(byte *)((long)pppppppuStack_100 +
                                           uVar40 + (ulong)uVar27 * (ulong)uVar8) = bVar22;
                                  uVar8 = uVar8 + 1;
                                }
                              }
                              else {
                                uVar52 = 0x100 - (ulong)bVar22;
                                if ((uVar8 < (uint)uVar52) || (uVar66 - uVar69 < uVar52))
                                goto LAB_1000659c;
                                puVar44 = (undefined1 *)((long)data + uVar69 + (long)ppppppuVar60);
                                uVar8 = uVar38;
                                for (uVar67 = uVar52; uVar67 != 0; uVar67 = uVar67 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_100 + uVar40 + (ulong)uVar27 * (ulong)uVar8)
                                       = *puVar44;
                                  uVar8 = uVar8 + 1;
                                  puVar44 = puVar44 + 1;
                                }
                                uVar67 = uVar69 + uVar52;
                              }
                            }
                            uVar40 = uVar40 + 1;
                            if (uVar38 < uVar50) goto LAB_1000659c;
                          }
                        }
                        else {
                          if ((PF_PART4(uStack_710, 4) != 0) || (uVar67 < uVar69)) goto LAB_1000659c;
                          recovered_10009dfc((long *)&pppppppuStack_100,
                                             (undefined1 *)((long)data + (long)ppppppuVar60),
                                             (undefined1 *)((long)data + (long)ppppppuVar60) +
                                             uVar69);
                        }
LAB_10006244:
                        lVar59 = 0;
                        for (puStack_cc8 = (uint *)0x0; puStack_cc8 != (uint *)(ulong)uVar37;
                            puStack_cc8 = (uint *)((long)puStack_cc8 + 1)) {
                          lVar46 = lVar59;
                          uVar50 = uVar49;
                          for (uVar67 = uVar68; uVar67 != 0; uVar67 = uVar67 - 1) {
                            PF_PART4(uStack_1b0, 4) = (undefined4)((ulong)uStack_1b0 >> 0x20);
                            uStack_1b0 = (void *)CONCAT44(PF_PART4(uStack_1b0, 4),0xff000000);
                            if (uVar30 < 6) {
                              uVar38 = 1 << (ulong)(uVar30 & 0x1f);
                              if ((uVar38 & 3) == 0) {
                                if ((uVar38 & 0xc) == 0) {
                                  lVar45 = (ulong)*(byte *)((long)pppppppuStack_100 + lVar46) * 3;
                                  uVar40 = lVar45 + 2;
                                  if (uVar40 < ppvStack_700) {
                                    lVar56 = CONCAT17(uStack_701,
                                                      CONCAT16(uStack_702,
                                                               CONCAT24(uStack_704,uStack_708)));
                                    PF_PART3(uStack_1b0, 0) =
                                         CONCAT12(*(undefined1 *)(lVar56 + uVar40),
                                                  *(undefined2 *)(lVar56 + lVar45));
                                  }
                                  if (uVar30 == 5) goto LAB_10006340;
                                }
                                else {
                                  PF_PART3(uStack_1b0, 0) =
                                       CONCAT12(*(undefined1 *)((long)pppppppuStack_100 + lVar46),
                                                CONCAT11(*(undefined1 *)
                                                          ((long)pppppppuStack_100 + lVar46),
                                                         *(undefined1 *)
                                                          ((long)pppppppuStack_100 + lVar46)));
                                  if (uVar30 == 3) {
LAB_10006340:
                                    lVar45 = 1;
                                    goto LAB_10006344;
                                  }
                                }
                                goto LAB_10006350;
                              }
                              uStack_1b0 = (void *)CONCAT53(PF_PART5(uStack_1b0, 3),
                                                            *(undefined3 *)
                                                             ((long)pppppppuStack_100 + lVar46));
                              if (uVar30 != 1) goto LAB_10006350;
                              lVar45 = 3;
LAB_10006344:
                              uVar38 = (uint)*(byte *)((long)pppppppuStack_100 + lVar46 + lVar45);
                            }
                            else {
LAB_10006350:
                              uVar38 = 0xff;
                            }
                            PF_PART4(uStack_1b0, 0) =
                                 CONCAT13((char)((uVar38 * uVar31 + 0x7f) / 0xff),
                                          (undefined3)uStack_1b0);
                            recovered_10000c94((void *)((long)pvStack_150 +
                                                       (uVar39 * (uint)((int)uStack_d40 * 0x40 +
                                                                       (int)puStack_cc8) +
                                                       (ulong)uVar50) * 4),&uStack_1b0,4);
                            uVar50 = uVar50 + 1;
                            lVar46 = lVar46 + (ulong)uVar27;
                          }
                          lVar59 = lVar59 + uVar27 * uVar68;
                        }
                        uStack_f8 = 0;
                        recovered_10002f1c(pppppppuStack_100);
                        uStack_d20 = uStack_d20 + 1;
                        uStack_d24 = uStack_d24 - 0x40;
                        uVar49 = uVar49 + 0x40;
                      }
                      uStack_d40 = uStack_d40 + 1;
                      uVar68 = (ulong)uVar48;
                    }
                    bVar20 = true;
                    goto LAB_100065a4;
                  }
                }
                else {
                  bVar20 = recovered_10009b80((long)data,length,&uStack_d8,(uint)uStack_710,
                                              (ulong *)((long)pppppppuStack_170 + lVar59));
                  if (bVar20) goto code_r0x10006074;
                }
                goto LAB_100065a0;
              }
            }
          }
        }
      }
      pvVar35 = (void *)0x0;
      goto LAB_1000672c;
    }
    goto LAB_10005cf0;
  }
  *(uint ********)image = uStack_720;
  recovered_10007c38((undefined8 *)((long)image + 8),(undefined8 *)&uStack_138);
LAB_10006734:
  uStack_130 = 0;
  recovered_10002f1c((void *)CONCAT44(uStack_134,uStack_138));
LAB_10005c1c:
  lStack_118 = 0;
  recovered_10002f1c(pvStack_120);
LAB_10005910:
  ppvStack_700 = (void **)0x0;
  pppppppuVar57 =
       (uint *******)CONCAT17(uStack_701,CONCAT16(uStack_702,CONCAT24(uStack_704,uStack_708)));
  goto LAB_10005100;
code_r0x10006074:
  plVar1 = (long *)((long)pppppppuStack_170 + lVar59);
  lVar59 = lVar59 + 8;
  uVar68 = uVar68 - 1;
  if (*plVar1 == 0) goto LAB_100065a0;
  goto LAB_10006058;
LAB_100065a0:
  bVar20 = false;
LAB_100065a4:
  uStack_168 = 0;
  recovered_10002f1c(pppppppuStack_170);
  uVar29 = uStack_c78;
  uVar31 = uStack_c7c;
  if (!bVar20) {
    pvVar35 = pvStack_150;
LAB_1000672c:
    uStack_148 = 0;
    recovered_10002f1c(pvVar35);
    goto LAB_10006734;
  }
  lVar59 = 0;
  for (uVar47 = 0; uVar47 != uVar58; uVar47 = uVar47 + 1) {
    uVar30 = uVar29 + (int)uVar47;
    if (-1 < (int)uVar30) {
      uVar61 = uVar39;
      lVar46 = lVar59;
      uVar54 = uVar31;
      if ((int)uVar30 < PF_PART4(uStack_720, 4)) {
        for (; uVar61 != 0; uVar61 = uVar61 - 1) {
          if ((-1 < (int)uVar54) && ((int)uVar54 < (int)(uint)uStack_720)) {
            recovered_10009c14(CONCAT44(uStack_134,uStack_138) +
                               (((ulong)uStack_720 & 0xffffffff) * (ulong)uVar30 + (ulong)uVar54) *
                               4,(long)pvStack_150 + lVar46);
          }
          lVar46 = lVar46 + 4;
          uVar54 = uVar54 + 1;
        }
      }
    }
    lVar59 = lVar59 + uVar39 * 4;
  }
  uStack_148 = 0;
  recovered_10002f1c(pvStack_150);
  goto LAB_10005cf0;
LAB_10005c18:
  bVar17 = false;
  goto LAB_10005c1c;
LAB_10006684:
  if (uVar61 == uVar58) goto LAB_1000673c;
  uVar68 = 0;
  bVar22 = (byte)puVar2[uVar61 + 1];
  puVar43 = puStack_768;
  while( true ) {
    if (uStack_760 == uVar68) goto LAB_10005ca8;
    if (*puVar43 == (uint)*(byte *)((long)puVar2 + uVar61 * 2 + 1)) break;
    uVar68 = uVar68 + 1;
    puVar43 = puVar43 + 0x10;
  }
  if ((int)uVar68 < 0) goto LAB_10005ca8;
  uVar31 = bVar22 & 0xf;
  puStack_768[(uVar68 & 0x7fffffff) * 0x10 + 4] = (uint)(bVar22 >> 4);
  puStack_768[(uVar68 & 0x7fffffff) * 0x10 + 5] = uVar31;
  if (0x3f < bVar22 || 3 < uVar31) goto LAB_10005ca8;
  uStack_720 = (uint *******)CONCAT44(PF_PART4(uStack_720, 4),(int)uVar68);
  recovered_1000982c((long *)&puStack_750,(undefined4 *)&uStack_720);
  uVar61 = uVar61 + 1;
  goto LAB_10006684;
LAB_100055c4:
  uStack_1b0 = (void *)0x0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = (void **)0x0;
  uStack_198 = 0;
  uStack_188 = uStack_188 & 0xffffffffffff0000;
  uStack_720 = (uint *******)0x0;
  PF_PART4(uStack_710, 0) = 0;
  PF_PART4(uStack_710, 4) = 0;
  PF_PART4(uStack_718, 0) = 0;
  PF_PART4(uStack_718, 4) = 0;
  ppvStack_700 = (void **)0x0;
  uStack_708 = 0;
  uStack_704 = 0;
  uStack_702 = 0;
  uStack_701 = 0;
  puStack_6f8 = (uint *)((ulong)puStack_6f8 & 0xffffffffffff0000);
  recovered_10007c38(&uStack_1b0,&uStack_720);
  uStack_198 = CONCAT17(uStack_701,CONCAT16(uStack_702,CONCAT24(uStack_704,uStack_708)));
  uStack_190 = ppvStack_700;
  uStack_188 = CONCAT62(PF_PART6(uStack_188, 2),PF_PART2(puStack_6f8, 0));
  PF_PART4(uStack_718, 0) = 0;
  PF_PART4(uStack_718, 4) = 0;
  recovered_10002f1c(uStack_720);
  if (uStack_c84 == 0) {
    if (uStack_c40 != 0) {
      if (uStack_c40 != 2) goto LAB_10005760;
      uStack_198 = CONCAT44(PF_PART4(uStack_198, 4),
                            (uint)(*puStack_c48 >> 8) | (*puStack_c48 & 0xff00ff) << 8);
      uStack_188 = CONCAT71(PF_PART7(uStack_188, 1),1);
    }
LAB_10005768:
    uStack_110 = 0;
    pvStack_120 = (void *)0x0;
    lStack_118 = 0;
    if (PF_PART1(uStack_c74, 2) == 1 && uStack_c10 != 0) {
      uVar39 = ((ulong)uStack_c90 >> 0x20) * ((ulong)uStack_c90 & 0xffffffff);
      if (uVar39 >> 0x3e == 0) {
        uStack_720 = (uint *******)((ulong)uStack_720 & 0xffffffffffffff00);
        recovered_10009148((long *)&pvStack_120,uVar39 * 4,(undefined1 *)&uStack_720);
        bVar22 = 0;
        puVar43 = puStack_c18 + 6;
        for (lVar59 = uStack_c10 * 0x38; lVar59 != 0; lVar59 = lVar59 + -0x38) {
          if ((bVar22 & 1) == 0) {
            bVar22 = (byte)*puVar43;
          }
          else {
            bVar22 = 1;
          }
          puVar43 = puVar43 + 0xe;
        }
        if ((bVar22 & 1) == 0) {
          PF_PART4(uStack_710, 0) = 0;
          PF_PART4(uStack_710, 4) = 0;
          uStack_720 = (uint *******)0x0;
          PF_PART4(uStack_718, 0) = 0;
          PF_PART4(uStack_718, 4) = 0;
          bVar17 = recovered_10007164((uint *)&uStack_c90,(long *)&pvStack_c30,&uStack_1b0,
                                      &uStack_720);
          if ((!bVar17) || (CONCAT44(PF_PART4(uStack_718, 4),(uint)uStack_718) != lStack_118)) {
            PF_PART4(uStack_718, 0) = 0;
            PF_PART4(uStack_718, 4) = 0;
            pppppppuVar57 = uStack_720;
LAB_10005bec:
            recovered_10002f1c(pppppppuVar57);
            goto LAB_10005bf0;
          }
          recovered_10007c38(&pvStack_120,&uStack_720);
          PF_PART4(uStack_718, 0) = 0;
          PF_PART4(uStack_718, 4) = 0;
          recovered_10002f1c(uStack_720);
        }
        puVar62 = puStack_c18 + uStack_c10 * 0xe;
        for (puVar43 = puStack_c18; puVar43 != puVar62; puVar43 = puVar43 + 0xe) {
          PF_PART4(uStack_718, 0) = uStack_c88;
          PF_PART4(uStack_710, 4) = uStack_c7c;
          uStack_708 = uStack_c78;
          PF_PART4(uStack_718, 4) = uStack_c84;
          PF_PART4(uStack_710, 0) = uStack_c80;
          uVar31 = *puVar43;
          uVar29 = puVar43[1];
          uStack_720 = *(uint ********)puVar43;
          uStack_160 = 0;
          pppppppuStack_170 = (uint *******)0x0;
          uStack_168 = 0;
          bVar17 = recovered_10007164((uint *)&uStack_720,(long *)(puVar43 + 8),&uStack_1b0,
                                      (long *)&pppppppuStack_170);
          if (!bVar17) {
            uStack_168 = 0;
            pppppppuVar57 = pppppppuStack_170;
            goto LAB_10005bec;
          }
          lVar59 = 0;
          uVar58 = (ulong)uStack_c90 & 0xffffffff;
          for (uVar39 = 0; uVar39 != uVar29; uVar39 = uVar39 + 1) {
            pvVar35 = (void *)((long)pppppppuStack_170 + lVar59);
            pvVar33 = (void *)((long)pvStack_120 +
                              uVar58 * 4 * (ulong)(puVar43[3] + (int)uVar39) + (ulong)puVar43[2] * 4
                              );
            for (uVar47 = (ulong)uVar31; uVar47 != 0; uVar47 = uVar47 - 1) {
              if (puVar43[5] == 0) {
                recovered_10000c94(pvVar33,pvVar35,4);
              }
              else {
                recovered_10009c14((long)pvVar33,(long)pvVar35);
              }
              pvVar35 = (void *)((long)pvVar35 + 4);
              pvVar33 = (void *)((long)pvVar33 + 4);
            }
            lVar59 = lVar59 + (ulong)uVar31 * 4;
          }
          uStack_168 = 0;
          recovered_10002f1c(pppppppuStack_170);
        }
        goto LAB_100057a0;
      }
LAB_10005bf0:
      bVar17 = false;
    }
    else {
      bVar17 = recovered_10007164((uint *)&uStack_c90,(long *)&pvStack_c30,&uStack_1b0,
                                  (long *)&pvStack_120);
      if (!bVar17) goto LAB_10005bf0;
LAB_100057a0:
      *(uint ********)image = uStack_c90;
      recovered_10007c38((undefined8 *)((long)image + 8),&pvStack_120);
      bVar17 = true;
    }
    lStack_118 = 0;
    recovered_10002f1c(pvStack_120);
  }
  else {
    if (uStack_c84 == 2) {
      if (uStack_c40 != 0) {
        if (uStack_c40 != 6) goto LAB_10005760;
        uStack_198 = CONCAT44((uint)(*puStack_c48 >> 8) | (*puStack_c48 & 0xff00ff) << 8,
                              (undefined4)uStack_198);
        uStack_190 = (void **)CONCAT44((uint)(puStack_c48[2] >> 8) |
                                       (puStack_c48[2] & 0xff00ff) << 8,
                                       (uint)(puStack_c48[1] >> 8) |
                                       (puStack_c48[1] & 0xff00ff) << 8);
        PF_PART2(uStack_188, 0) = CONCAT11(1,(undefined1)uStack_188);
      }
      goto LAB_10005768;
    }
    if (uStack_c84 == 3) {
      bVar17 = false;
      if ((uStack_c58 != 0) && (uVar39 = uStack_c58 / 3, uStack_c58 == uVar39 * 3)) {
        uStack_720 = (uint *******)CONCAT71(PF_PART7(uStack_720, 1),0xff);
        recovered_10009148(&uStack_1b0,uVar39 << 2,(undefined1 *)&uStack_720);
        lVar46 = 0;
        lVar59 = 0;
        for (; uVar39 != 0; uVar39 = uVar39 - 1) {
          *(undefined1 *)((long)uStack_1b0 + lVar59) = *(undefined1 *)(lStack_c60 + lVar46);
          *(undefined1 *)((long)uStack_1b0 + lVar59 + 1) = *(undefined1 *)(lStack_c60 + lVar46 + 1);
          *(undefined1 *)((long)uStack_1b0 + lVar59 + 2) = *(undefined1 *)(lStack_c60 + lVar46 + 2);
          lVar59 = lVar59 + 4;
          lVar46 = lVar46 + 3;
        }
        lVar59 = 3;
        for (uVar39 = 0; uVar39 < uStack_c40; uVar39 = uVar39 + 1) {
          *(undefined1 *)((long)uStack_1b0 + lVar59) = *(undefined1 *)((long)puStack_c48 + uVar39);
          lVar59 = lVar59 + 4;
        }
        goto LAB_10005768;
      }
    }
    else {
      if (uStack_c40 == 0) goto LAB_10005768;
LAB_10005760:
      bVar17 = false;
    }
  }
  uStack_1a8 = 0;
  recovered_10002f1c(uStack_1b0);
  goto LAB_10003d3c;
LAB_1000673c:
  if (*(byte *)((long)puVar2 + lVar59 + 1) == 0) {
    if ((byte)puVar2[uVar58 + 1] == 0x3f) {
      if (*(byte *)((long)puVar2 + lVar59 + 3) == 0) {
        uVar47 = uVar47 + uVar39;
        uVar39 = uVar47;
        while( true ) {
          uVar58 = uVar39;
          uVar39 = uVar58 + 1;
          if (length <= uVar39) break;
          if (*(char *)((long)data + uVar58) == -1) {
            do {
              if (length <= uVar39) goto LAB_100067b4;
              bVar22 = *(byte *)((long)data + uVar39);
              uVar39 = uVar39 + 1;
            } while (bVar22 == 0xff);
            if ((bVar22 != 0) && ((bVar22 & 0xf8) != 0xd0)) break;
          }
        }
LAB_100067b4:
        pppppppuStack_738 = (uint *******)((long)data + uVar47);
        uStack_730 = uVar58 - uVar47;
        if (uVar58 - uVar47 != 0) {
          if ((uint)uStack_c90 != 0) {
            if (PF_PART4(uStack_c90, 4) != 0) {
              uVar31 = 0;
              if (uStack_c88 << 3 != 0) {
                uVar31 = (((uint)uStack_c90 + uStack_c88 * 8) - 1) / (uStack_c88 << 3);
              }
              uVar29 = 0;
              if (uStack_c84 << 3 != 0) {
                uVar29 = ((PF_PART4(uStack_c90, 4) + uStack_c84 * 8) - 1) / (uStack_c84 << 3);
              }
              lVar59 = uStack_760 << 6;
              dVar14 = DAT_1000c6f0;
              dVar15 = DAT_1000c7e0;
              puVar43 = puStack_768;
              while( true ) {
                DAT_1000c6f0 = dVar14;
                DAT_1000c7e0 = dVar15;
                if (lVar59 == 0) break;
                if ((((char)(&uStack_c78)[(ulong)puVar43[3] * 0x41] != '\x01') ||
                    (acStack_868[(ulong)puVar43[4] * 0x20] != '\x01')) ||
                   (acStack_7e8[(ulong)puVar43[5] * 0x20] != '\x01')) goto LAB_10005ca8;
                uVar30 = puVar43[1] * uVar31 * 8;
                uVar54 = puVar43[2] * uVar29 * 8;
                puVar43[7] = uVar30;
                puVar43[8] = uVar54;
                uStack_720 = (uint *******)((ulong)uStack_720 & 0xffffffffffffff00);
                recovered_10009148((long *)(puVar43 + 10),(ulong)uVar54 * (ulong)uVar30,
                                   (undefined1 *)&uStack_720);
                puVar43[6] = 0;
                puVar43 = puVar43 + 0x10;
                lVar59 = lVar59 + -0x40;
                dVar14 = DAT_1000c6f0;
                dVar15 = DAT_1000c7e0;
              }
              uVar30 = 0;
              pppppppuStack_170 = pppppppuStack_738;
              uStack_168 = uStack_730;
              uStack_160 = 0;
              uStack_158 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              uStack_188 = 0;
              uStack_190 = (void **)0x0;
              uStack_198 = 0;
              uStack_1a0 = 0;
              uStack_1a8 = 0;
              uStack_1b0 = (void *)0x0;
              uStack_154 = 0;
              for (uVar54 = 0; uVar54 < uVar29; uVar54 = uVar54 + 1) {
                for (uVar27 = 0; uVar27 < uVar31; uVar27 = uVar27 + 1) {
                  if (uStack_c80 != 0 && uVar30 == uStack_c80) {
                    uStack_154 = 0;
                    if ((uStack_160 < uStack_168) &&
                       (*(char *)((long)pppppppuStack_170 + uStack_160) == -1)) {
                      uVar39 = uStack_160 + 1;
                      do {
                        uVar58 = uVar39;
                        if (uStack_168 <= uVar58) goto LAB_10005ca8;
                        bVar22 = *(byte *)((long)pppppppuStack_170 + uVar58);
                        uVar39 = uVar58 + 1;
                      } while (bVar22 == 0xff);
                      if ((bVar22 & 0xf8) != 0xd0) {
                        if (bVar22 != 0) goto LAB_10005ca8;
                        uVar39 = uVar58 - 1;
                      }
                      uStack_160 = uVar39;
                    }
                    puVar43 = puStack_768;
                    for (lVar59 = uStack_760 << 6; lVar59 != 0; lVar59 = lVar59 + -0x40) {
                      puVar43[6] = 0;
                      puVar43 = puVar43 + 0x10;
                    }
                    uVar30 = 0;
                  }
                  puVar43 = puStack_750 + lStack_748;
                  for (puStack_cc8 = puStack_750; puVar62 = puStack_768, puStack_cc8 != puVar43;
                      puStack_cc8 = puStack_cc8 + 1) {
                    uVar39 = (ulong)*puStack_cc8;
                    if (uStack_760 <= uVar39) goto LAB_10005ca8;
                    for (uVar37 = 0; uVar37 < puVar62[uVar39 * 0x10 + 2]; uVar37 = uVar37 + 1) {
                      for (uVar48 = 0; uVar48 < puVar62[uVar39 * 0x10 + 1]; uVar48 = uVar48 + 1) {
                        uVar49 = puVar62[uVar39 * 0x10 + 3];
                        if (((3 < uVar49) || (uVar41 = puVar62[uVar39 * 0x10 + 4], 3 < uVar41)) ||
                           ((uVar50 = puVar62[uVar39 * 0x10 + 5], 3 < uVar50 ||
                            ((char)(&uStack_c78)[(ulong)uVar49 * 0x41] != '\x01'))))
                        goto LAB_10005ca8;
                        recovered_10000d20((undefined1 *)((long)&uStack_720 + 4),0xfc);
                        pppppppuStack_100 =
                             (uint *******)((ulong)pppppppuStack_100 & 0xffffffff00000000);
                        iVar28 = recovered_1000995c((long *)&pppppppuStack_170,
                                                    acStack_868 + (ulong)uVar41 * 0x20,
                                                    (undefined4 *)&pppppppuStack_100);
                        if (iVar28 == 0) goto LAB_10005ca8;
                        uVar41 = (uint)PF_PART4(pppppppuStack_100, 0);
                        if (0xb < (uint)PF_PART4(pppppppuStack_100, 0)) goto LAB_10005ca8;
                        pvStack_120 = (void *)((ulong)pvStack_120 & 0xffffffff00000000);
                        bVar17 = recovered_10009a10((long *)&pppppppuStack_170,
                                                    (uint)PF_PART4(pppppppuStack_100, 0),
                                                    (uint *)&pvStack_120);
                        if (!bVar17) goto LAB_10005ca8;
                        iVar28 = recovered_10009a70((uint)pvStack_120,uVar41);
                        uVar41 = puVar62[uVar39 * 0x10 + 6];
                        puVar62[uVar39 * 0x10 + 6] = uVar41 + iVar28;
                        uStack_720 = (uint *******)
                                     CONCAT44(PF_PART4(uStack_720, 4),
                                              (&uStack_c74)[(ulong)uVar49 * 0x41] *
                                              (uVar41 + iVar28));
                        uVar41 = 1;
                        do {
                          while( true ) {
                            if (0x3f < uVar41) goto LAB_10006b6c;
                            iVar28 = recovered_1000995c((long *)&pppppppuStack_170,
                                                        acStack_7e8 + (ulong)uVar50 * 0x20,
                                                        (undefined4 *)&pppppppuStack_100);
                            if (iVar28 == 0) goto LAB_10005ca8;
                            uVar38 = (uint)PF_PART4(pppppppuStack_100, 0) & 0xf;
                            if (((ulong)pppppppuStack_100 & 0xf) == 0) break;
                            uVar41 = ((uint)PF_PART4(pppppppuStack_100, 0) >> 4) + uVar41;
                            if (0x3f < uVar41) goto LAB_10005ca8;
                            uStack_138 = 0;
                            bVar17 = recovered_10009a10((long *)&pppppppuStack_170,uVar38,
                                                        &uStack_138);
                            if (!bVar17) goto LAB_10005ca8;
                            uVar8 = (&DAT_1000c8b0)[uVar41];
                            iVar28 = recovered_10009a70(uStack_138,uVar38);
                            *(int *)((long)&uStack_720 + (ulong)uVar8 * 4) =
                                 (&uStack_c74 + (ulong)uVar49 * 0x41)[uVar8] * iVar28;
                            uVar41 = uVar41 + 1;
                          }
                          uVar41 = uVar41 + 0x10;
                        } while ((uint)PF_PART4(pppppppuStack_100, 0) >> 4 == 0xf);
LAB_10006b6c:
                        if ((DAT_10014310 & 1) == 0) {
                          puVar64 = &DAT_100143d8;
                          for (uVar58 = 0; uVar58 != 8; uVar58 = uVar58 + 1) {
                            for (uVar47 = 0; uVar47 != 8; uVar47 = uVar47 + 1) {
                              dVar70 = recovered_100012d4(((double)(uVar58 & 0xffffffff) * 2.0 + 1.0
                                                          ) * (double)(uVar47 & 0xffffffff) * dVar14
                                                          * 0.0625);
                              puVar64[uVar47] = PF_RAW64(dVar70);
                            }
                            puVar64 = puVar64 + 8;
                          }
                          DAT_10014310 = 1;
                        }
                        for (lVar59 = 0; lVar59 != 8; lVar59 = lVar59 + 1) {
                          puVar64 = &DAT_100143d8;
                          for (lVar46 = 0; lVar46 != 8; lVar46 = lVar46 + 1) {
                            dVar70 = 0.0;
                            puVar53 = &uStack_720;
                            for (lVar45 = 0; lVar45 != 8; lVar45 = lVar45 + 1) {
                              lVar56 = 0;
                              dVar73 = dVar15;
                              if (lVar45 != 0) {
                                dVar73 = 1.0;
                              }
                              for (; lVar56 != 8; lVar56 = lVar56 + 1) {
                                dVar75 = dVar15;
                                if (lVar56 != 0) {
                                  dVar75 = 1.0;
                                }
                                dVar70 = dVar70 + pf_bits_double((&DAT_100143d8)[lVar45 + lVar59 * 8]) *
                                                  pf_bits_double((uintptr_t)puVar64[lVar56]) *
                                                  dVar73 * dVar75 *
                                                  (double)*(int *)((long)puVar53 + lVar56 * 4);
                              }
                              puVar53 = puVar53 + 4;
                            }
                            dVar70 = dVar70 * 0.25 + 128.0;
                            dVar73 = 0.5;
                            if (dVar70 < 0.0) {
                              dVar73 = -0.5;
                            }
                            uVar41 = (uint)(long)(dVar70 + dVar73);
                            uVar49 = uVar41;
                            if (0xfe < uVar41) {
                              uVar49 = 0xffffffff;
                            }
                            uVar19 = 0;
                            if (0 < (int)uVar41) {
                              uVar19 = (char)uVar49;
                            }
                            *(undefined1 *)((long)&uStack_1b0 + lVar46 + lVar59 * 8) = uVar19;
                            puVar64 = puVar64 + 8;
                          }
                        }
                        uVar49 = puVar62[uVar39 * 0x10 + 1];
                        uVar58 = (ulong)((uVar37 + uVar54 * puVar62[uVar39 * 0x10 + 2]) * 8);
                        puVar64 = &uStack_1b0;
                        lVar59 = 8;
                        do {
                          if (uVar58 < puVar62[uVar39 * 0x10 + 8]) {
                            recovered_10000c94((void *)(*(long *)(puVar62 + uVar39 * 0x10 + 10) +
                                                        uVar58 * puVar62[uVar39 * 0x10 + 7] +
                                                       (ulong)((uVar48 + uVar49 * uVar27) * 8)),
                                               puVar64,8);
                          }
                          puVar64 = puVar64 + 1;
                          uVar58 = uVar58 + 1;
                          lVar59 = lVar59 + -1;
                        } while (lVar59 != 0);
                      }
                    }
                  }
                  uVar30 = uVar30 + 1;
                }
              }
              uVar39 = ((ulong)uStack_c90 >> 0x20) * ((ulong)uStack_c90 & 0xffffffff);
              if (uVar39 >> 0x3e == 0) {
                recovered_10009330(&uStack_720,uVar39 * 4);
                dVar73 = DAT_1000c7d8;
                dVar70 = DAT_1000c7d0;
                dVar15 = DAT_1000c7c8;
                dVar14 = DAT_1000c7c0;
                pppppppuStack_100 = (uint *******)&uStack_c90;
                for (uVar39 = 0; uVar39 < PF_PART4(uStack_c90, 4); uVar39 = uVar39 + 1) {
                  uVar58 = 0;
                  while( true ) {
                    uVar47 = uStack_760;
                    puVar43 = puStack_768;
                    if (((ulong)uStack_c90 & 0xffffffff) <= uVar58) break;
                    pbVar32 = (byte *)((long)uStack_720 +
                                      (uVar58 + uVar39 * ((ulong)uStack_c90 & 0xffffffff)) * 4);
                    iVar28 = (int)uVar58;
                    iVar36 = (int)uVar39;
                    bVar22 = recovered_10009914((long *)&pppppppuStack_100,(long)puStack_768,iVar28,
                                                iVar36);
                    uVar31 = (uint)bVar22;
                    if (uVar47 == 3) {
                      bVar23 = recovered_10009914((long *)&pppppppuStack_100,(long)(puVar43 + 0x10),
                                                  iVar28,iVar36);
                      bVar24 = recovered_10009914((long *)&pppppppuStack_100,(long)(puVar43 + 0x20),
                                                  iVar28,iVar36);
                      dVar75 = (double)bVar22;
                      dVar74 = dVar75 + dVar14 * (double)(int)(bVar24 - 0x80);
                      dVar76 = 0.5;
                      if (dVar74 < 0.0) {
                        dVar76 = -0.5;
                      }
                      uVar29 = (uint)(long)(dVar74 + dVar76);
                      uVar31 = uVar29;
                      if (0xfe < uVar29) {
                        uVar31 = 0xffffffff;
                      }
                      bVar22 = 0;
                      if (0 < (int)uVar29) {
                        bVar22 = (byte)uVar31;
                      }
                      *pbVar32 = bVar22;
                      dVar74 = dVar75 + dVar15 * (double)(int)(bVar23 - 0x80) +
                               dVar70 * (double)(int)(bVar24 - 0x80);
                      dVar76 = 0.5;
                      if (dVar74 < 0.0) {
                        dVar76 = -0.5;
                      }
                      uVar29 = (uint)(long)(dVar74 + dVar76);
                      uVar31 = uVar29;
                      if (0xfe < uVar29) {
                        uVar31 = 0xffffffff;
                      }
                      bVar22 = 0;
                      if (0 < (int)uVar29) {
                        bVar22 = (byte)uVar31;
                      }
                      pbVar32[1] = bVar22;
                      dVar75 = dVar75 + dVar73 * (double)(int)(bVar23 - 0x80);
                      dVar74 = 0.5;
                      if (dVar75 < 0.0) {
                        dVar74 = -0.5;
                      }
                      uVar29 = (uint)(long)(dVar75 + dVar74);
                      uVar31 = uVar29;
                      if (0xfe < uVar29) {
                        uVar31 = 0xffffffff;
                      }
                      bVar22 = 0;
                      if (0 < (int)uVar29) {
                        bVar22 = (byte)uVar31;
                      }
                    }
                    else if (uVar47 == 1) {
                      *pbVar32 = bVar22;
                      pbVar32[1] = bVar22;
                    }
                    else {
                      bVar23 = recovered_10009914((long *)&pppppppuStack_100,(long)(puVar43 + 0x10),
                                                  iVar28,iVar36);
                      uVar29 = (uint)bVar23;
                      bVar24 = recovered_10009914((long *)&pppppppuStack_100,(long)(puVar43 + 0x20),
                                                  iVar28,iVar36);
                      uVar30 = (uint)bVar24;
                      bVar25 = recovered_10009914((long *)&pppppppuStack_100,(long)(puVar43 + 0x30),
                                                  iVar28,iVar36);
                      if (uStack_c7c == 2) {
                        dVar75 = (double)bVar22;
                        dVar74 = dVar75 + dVar14 * (double)(int)(bVar24 - 0x80);
                        dVar76 = 0.5;
                        if (dVar74 < 0.0) {
                          dVar76 = -0.5;
                        }
                        uVar29 = (uint)(long)(dVar74 + dVar76);
                        uVar31 = uVar29 & 0xff;
                        if (0xfe < uVar29) {
                          uVar31 = 0xff;
                        }
                        if ((int)uVar29 < 1) {
                          uVar31 = 0;
                        }
                        dVar74 = dVar75 + dVar15 * (double)(int)(bVar23 - 0x80) +
                                 dVar70 * (double)(int)(bVar24 - 0x80);
                        dVar76 = 0.5;
                        if (dVar74 < 0.0) {
                          dVar76 = -0.5;
                        }
                        uVar30 = (uint)(long)(dVar74 + dVar76);
                        uVar29 = uVar30 & 0xff;
                        if (0xfe < uVar30) {
                          uVar29 = 0xff;
                        }
                        if ((int)uVar30 < 1) {
                          uVar29 = 0;
                        }
                        dVar75 = dVar75 + dVar73 * (double)(int)(bVar23 - 0x80);
                        dVar74 = 0.5;
                        if (dVar75 < 0.0) {
                          dVar74 = -0.5;
                        }
                        uVar54 = (uint)(long)(dVar75 + dVar74);
                        uVar30 = uVar54 & 0xff;
                        if (0xfe < uVar54) {
                          uVar30 = 0xff;
                        }
                        if ((int)uVar54 < 1) {
                          uVar30 = 0;
                        }
                      }
                      uVar31 = uVar31 + bVar25;
                      uVar54 = uVar31;
                      if (0xfe < uVar31) {
                        uVar54 = 0xff;
                      }
                      bVar22 = 0;
                      if (uVar31 < 0xff) {
                        bVar22 = ~(byte)uVar54;
                      }
                      *pbVar32 = bVar22;
                      uVar29 = uVar29 + bVar25;
                      uVar31 = uVar29;
                      if (0xfe < uVar29) {
                        uVar31 = 0xff;
                      }
                      bVar22 = 0;
                      if (uVar29 < 0xff) {
                        bVar22 = ~(byte)uVar31;
                      }
                      pbVar32[1] = bVar22;
                      uVar30 = uVar30 + bVar25;
                      uVar31 = uVar30;
                      if (0xfe < uVar30) {
                        uVar31 = 0xff;
                      }
                      bVar22 = 0;
                      if (uVar30 < 0xff) {
                        bVar22 = ~(byte)uVar31;
                      }
                    }
                    pbVar32[2] = bVar22;
                    pbVar32[3] = 0xff;
                    uVar58 = uVar58 + 1;
                  }
                }
                *(uint *)image = (uint)uStack_c90;
                *(uint *)((long)image + 4) = PF_PART4(uStack_c90, 4);
                recovered_10007c38((undefined8 *)((long)image + 8),&uStack_720);
                PF_PART4(uStack_718, 0) = 0;
                PF_PART4(uStack_718, 4) = 0;
                recovered_10002f1c(uStack_720);
                uVar63 = '\x01';
                goto LAB_10005cac;
              }
            }
          }
        }
      }
    }
  }
LAB_10005ca8:
  uVar63 = '\0';
LAB_10005cac:
  recovered_100095a8((long)&uStack_c90);
  return uVar63;
  while( true ) {
    puVar62 = puVar43 + 10;
    puVar43 = puVar43 + 0xe;
    lVar59 = lVar59 + -0x38;
    if (*(long *)puVar62 == 0) break;
LAB_100055ac:
    if (lVar59 == 0) goto LAB_100055c4;
  }
LAB_10003d3c:
  recovered_10007c88((long)&uStack_c90);
  uStack_f8 = 0;
  pppppppuVar57 = pppppppuStack_100;
LAB_10005100:
  recovered_10002f1c(pppppppuVar57);
  return bVar17;
}

#undef DAT_1000c6f0
#undef DAT_1000c7b8
#undef DAT_1000c7c0
#undef DAT_1000c7c8
#undef DAT_1000c7d0
#undef DAT_1000c7d8
#undef DAT_1000c7e0
#undef DAT_1000c870
#undef DAT_1000c89f
#undef DAT_1000c8b0
#undef DAT_1000cce0
#undef DAT_1000cefc
#undef DAT_1000cf01
#undef DAT_1000cf1e
#undef DAT_1000cf28
#undef DAT_1000cf2d
#undef DAT_1000cf32
#undef DAT_1000cf37
#undef DAT_1000cf3c
#undef DAT_10014310
#undef DAT_100143d8
#undef UNK_1000c878
#undef _DAT_1000c870
#undef str_1000c8a7
#undef str_1000ceef
#undef str_1000cf18
#undef uRam000000001000c878
#undef uStack_d40
#undef uStack_d24
#undef uStack_d20
#undef uStack_cf8
#undef lStack_cd8
#undef puStack_cc8
#undef lStack_cb0
#undef uStack_c90
#undef uStack_c88
#undef uStack_c84
#undef uStack_c80
#undef uStack_c7c
#undef uStack_c78
#undef uStack_c74
#undef ppvStack_c70
#undef lStack_c68
#undef lStack_c60
#undef uStack_c58
#undef uStack_c50
#undef puStack_c48
#undef uStack_c40
#undef uStack_c38
#undef pvStack_c30
#undef uStack_c28
#undef uStack_c20
#undef puStack_c18
#undef uStack_c10
#undef uStack_c08
#undef acStack_868
#undef acStack_7e8
#undef puStack_768
#undef uStack_760
#undef uStack_758
#undef puStack_750
#undef lStack_748
#undef uStack_740
#undef pppppppuStack_738
#undef uStack_730
#undef uStack_720
#undef uStack_718
#undef uStack_710
#undef uStack_708
#undef uStack_704
#undef uStack_702
#undef uStack_701
#undef ppvStack_700
#undef puStack_6f8
#undef puStack_6f0
#undef puStack_6e8
#undef ppvStack_6e0
#undef pppvStack_6d8
#undef puStack_6d0
#undef uStack_6c8
#undef pvStack_6c0
#undef uStack_6b8
#undef uStack_6b0
#undef puStack_6a8
#undef uStack_6a0
#undef uStack_698
#undef auStack_2f8
#undef auStack_2f0
#undef uStack_278
#undef apuStack_270
#undef uStack_1f0
#undef uStack_1e8
#undef uStack_1e0
#undef uStack_1d8
#undef uStack_1d0
#undef pppppppuStack_1c8
#undef uStack_1c0
#undef uStack_1b0
#undef uStack_1a8
#undef uStack_1a0
#undef uStack_198
#undef uStack_190
#undef uStack_188
#undef uStack_180
#undef uStack_178
#undef pppppppuStack_170
#undef uStack_168
#undef uStack_160
#undef uStack_158
#undef uStack_154
#undef pvStack_150
#undef uStack_148
#undef uStack_140
#undef uStack_138
#undef uStack_134
#undef uStack_130
#undef pvStack_120
#undef lStack_118
#undef uStack_110
#undef uStack_108
#undef pppppppuStack_100
#undef uStack_f8
#undef uStack_f0
#undef uStack_e8
#undef uStack_e0
#undef uStack_d8
#undef uStack_d0
#undef uStack_c4
#undef uStack_c0
#undef appvStack_b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007138
 */

undefined8 * recovered_10007138(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10007c38(param_1 + 1,param_2 + 1);
  return param_1;
}


#undef DAT_1000cbd4
#define DAT_1000cbd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x500U)))
#undef DAT_1000cbf0
#define DAT_1000cbf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000cc0c
#define DAT_1000cc0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x538U)))
#undef DAT_1000cc28
#define DAT_1000cc28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x554U)))
#define local_a0 (*(ulong *)(frame + 96))
#define pbStack_e8 (*(byte * *)(frame + 24))
#define uStack_e0 (*(undefined8 *)(frame + 32))
#define uStack_d8 (*(undefined8 *)(frame + 40))
#define pbStack_d0 (*(byte * *)(frame + 48))
#define uStack_c8 (*(undefined8 *)(frame + 56))
#define uStack_c0 (*(undefined8 *)(frame + 64))
#define pbStack_b8 (*(byte * *)(frame + 72))
#define uStack_b0 (*(ulong *)(frame + 80))
#define uStack_98 (*(undefined8 *)(frame + 104))
#define uStack_90 (*(undefined8 *)(frame + 112))
#define uStack_88 (*(undefined8 *)(frame + 120))
#define lStack_80 (*(long *)(frame + 128))
#define uStack_78 (*(undefined8 *)(frame + 136))
#define lStack_70 (*(long *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007164
 */

bool recovered_10007164(uint *param_1,long *param_2,long *param_3,long *param_4)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint uVar19;
  char *pcVar20;
  undefined8 uVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  char cVar31;
  byte bVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  void *dst;

  uVar7 = *param_1;
  if (param_1[6] == 0) {
    uVar24 = recovered_1000b3b8((long)param_1);
    if ((ulong)param_1[1] * (ulong)uVar7 >> 0x3e != 0) {
      return false;
    }
    recovered_10009248(param_4,(ulong)param_1[1] * (ulong)uVar7 * 4);
    local_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_70 = 0;
    uVar27 = recovered_1000b3ec((long *)&local_a0,param_2);
    if ((uVar27 & 1) != 0) {
      uVar27 = (ulong)uVar7 * (ulong)uVar24 + 7 >> 3;
      uVar24 = recovered_1000b3b8((long)param_1);
      uVar7 = uVar24 + 7 >> 3;
      if (uVar24 < 8) {
        uVar7 = 1;
      }
      recovered_10009330(&pbStack_b8,uVar27 + 1);
      if (param_1[3] == 6 && param_1[2] == 8) {
        lVar35 = 0;
        uVar28 = 0;
        do {
          if (param_1[1] <= uVar28) {
            bVar22 = lStack_70 == lStack_80;
            goto LAB_10007b9c;
          }
          bVar22 = recovered_1000b494((long)&local_a0,(long)pbStack_b8,uStack_b0);
          if (!bVar22) break;
          pbVar5 = (byte *)0x0;
          if (uVar28 != 0) {
            pbVar5 = (byte *)((char *)(*param_4 + lVar35) + -uVar27);
          }
          uVar34 = recovered_1000b4f0((uint)*pbStack_b8,(char *)(*param_4 + lVar35),
                                      (char *)(pbStack_b8 + 1),pbVar5,uVar27,4);
          uVar28 = uVar28 + 1;
          lVar35 = lVar35 + uVar27;
        } while ((uVar34 & 1) != 0);
        bVar22 = false;
      }
      else {
        recovered_10009330(&pbStack_d0,uVar27);
        recovered_10009330(&pbStack_e8,uVar27);
        lVar35 = 0;
        bVar22 = false;
        for (uVar28 = 0; uVar28 < param_1[1]; uVar28 = uVar28 + 1) {
          bVar23 = recovered_1000b494((long)&local_a0,(long)pbStack_b8,uStack_b0);
          if (!bVar23) {
LAB_10007b84:
            bVar22 = false;
            goto switchD_100077fc_caseD_1;
          }
          pbVar5 = pbStack_d0;
          if (!bVar22) {
            pbVar5 = (byte *)0x0;
          }
          uVar26 = recovered_1000b4f0((uint)*pbStack_b8,(char *)pbStack_e8,(char *)(pbStack_b8 + 1),
                                      pbVar5,uVar27,(ulong)uVar7);
          if ((int)uVar26 == 0) goto LAB_10007b84;
          bVar22 = false;
          if (6 < param_1[3]) goto switchD_100077fc_caseD_1;
          uVar34 = (ulong)*param_1;
          dst = (void *)(*param_4 + lVar35 * uVar34);
          switch((uintptr_t)(param_1[3])) {
          case 0:
            if (param_1[2] == 8) {
              pcVar20 = (char *)((long)dst + 3);
              pbVar5 = pbStack_e8;
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                bVar32 = *pbVar5;
                bVar12 = *(byte *)(param_3 + 5);
                uVar24 = *(uint *)(param_3 + 3);
                pcVar20[-3] = bVar32;
                pcVar20[-2] = bVar32;
                pcVar20[-1] = bVar32;
                *pcVar20 = -(uVar24 != bVar32 | (bVar12 ^ 0xff) & 1);
                pcVar20 = pcVar20 + 4;
                pbVar5 = pbVar5 + 1;
              }
            }
            else {
              pbVar5 = pbStack_e8 + 1;
              pcVar20 = (char *)((long)dst + 3);
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                uVar9 = (uint)(*(ushort *)(pbVar5 + -1) >> 8) |
                        (*(ushort *)(pbVar5 + -1) & 0xff00ff) << 8;
                bVar32 = *(byte *)(param_3 + 5);
                uVar24 = *(uint *)(param_3 + 3);
                cVar31 = (char)((uVar9 * 0xff + 0x7fff) / 0xffff);
                pcVar20[-3] = cVar31;
                pcVar20[-2] = cVar31;
                pcVar20[-1] = cVar31;
                *pcVar20 = -(uVar9 != uVar24 | (bVar32 ^ 0xff) & 1);
                pbVar5 = pbVar5 + 2;
                pcVar20 = pcVar20 + 4;
              }
            }
            break;
          default:
            goto switchD_100077fc_caseD_1;
          case 2:
            if (param_1[2] == 8) {
              pbVar5 = pbStack_e8 + 2;
              pcVar20 = (char *)((long)dst + 3);
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                if ((*(char *)((long)param_3 + 0x29) == '\x01' &&
                     *(uint *)((long)param_3 + 0x1c) == (uint)pbVar5[-2]) &&
                   (*(uint *)(param_3 + 4) == (uint)pbVar5[-1])) {
                  cVar31 = -(*(uint *)((long)param_3 + 0x24) != (uint)*pbVar5);
                }
                else {
                  cVar31 = -1;
                }
                pcVar20[-3] = pbVar5[-2];
                pcVar20[-2] = pbVar5[-1];
                pcVar20[-1] = *pbVar5;
                *pcVar20 = cVar31;
                pbVar5 = pbVar5 + 3;
                pcVar20 = pcVar20 + 4;
              }
            }
            else {
              puVar3 = (ushort *)(pbStack_e8 + 2);
              pcVar20 = (char *)((long)dst + 3);
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                uVar10 = (uint)(puVar3[-1] >> 8) | (puVar3[-1] & 0xff00ff) << 8;
                uVar11 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
                uVar19 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
                bVar32 = *(byte *)((long)param_3 + 0x29);
                uVar24 = *(uint *)((long)param_3 + 0x1c);
                uVar9 = *(uint *)(param_3 + 4);
                uVar33 = *(uint *)((long)param_3 + 0x24);
                pcVar20[-3] = (char)((uVar10 * 0xff + 0x7fff) / 0xffff);
                pcVar20[-2] = (char)((uVar11 * 0xff + 0x7fff) / 0xffff);
                pcVar20[-1] = (char)((uVar19 * 0xff + 0x7fff) / 0xffff);
                *pcVar20 = -(uVar10 != uVar24 | (bVar32 ^ 0xff) & 1 |
                            (uVar11 != uVar9 || uVar19 != uVar33));
                puVar3 = puVar3 + 3;
                pcVar20 = pcVar20 + 4;
              }
            }
            break;
          case 3:
            uVar30 = param_3[1];
            pbVar5 = pbStack_e8;
            for (; uVar34 != 0; uVar34 = uVar34 - 1) {
              if (uVar30 >> 2 <= (ulong)*pbVar5) goto LAB_10007b84;
              recovered_10000c94(dst,(void *)(*param_3 + (ulong)*pbVar5 * 4),4);
              dst = (void *)((long)dst + 4);
              pbVar5 = pbVar5 + 1;
            }
            break;
          case 4:
            if (param_1[2] == 8) {
              pbVar1 = (byte *)((long)dst + 3);
              pbVar5 = pbStack_e8;
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                bVar32 = *pbVar5;
                pbVar1[-3] = bVar32;
                pbVar1[-2] = bVar32;
                pbVar1[-1] = *pbVar5;
                *pbVar1 = pbVar5[1];
                pbVar5 = pbVar5 + 2;
                pbVar1 = pbVar1 + 4;
              }
            }
            else {
              pbVar5 = pbStack_e8 + 3;
              puVar2 = (undefined1 *)((long)dst + 3);
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                uVar14 = *(ushort *)(pbVar5 + -3);
                uVar13 = *(ushort *)(pbVar5 + -1);
                uVar18 = (undefined1)
                         (((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                           ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) / 0xffff);
                puVar2[-3] = uVar18;
                puVar2[-2] = uVar18;
                puVar2[-1] = uVar18;
                *puVar2 = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                  ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                0xffff);
                pbVar5 = pbVar5 + 4;
                puVar2 = puVar2 + 4;
              }
            }
            break;
          case 6:
            if (param_1[2] == 8) {
              recovered_10000c94((void *)(*param_4 + uVar28 * uVar34 * 4),pbStack_e8,uVar34 << 2);
            }
            else {
              pbVar5 = pbStack_e8 + 3;
              puVar2 = (undefined1 *)((long)dst + 3);
              for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                uVar14 = *(ushort *)(pbVar5 + -3);
                puVar2[-3] = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                     ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) /
                                   0xffff);
                uVar14 = *(ushort *)(pbVar5 + -1);
                puVar2[-2] = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                     ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) /
                                   0xffff);
                uVar14 = *(ushort *)(pbVar5 + 1);
                puVar2[-1] = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                     ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) /
                                   0xffff);
                uVar14 = *(ushort *)(pbVar5 + 3);
                *puVar2 = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                  ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) /
                                0xffff);
                pbVar5 = pbVar5 + 8;
                puVar2 = puVar2 + 4;
              }
            }
          }
          uVar21 = uStack_c0;
          uVar26 = uStack_c8;
          pbVar5 = pbStack_d0;
          pbStack_d0 = pbStack_e8;
          pbStack_e8 = pbVar5;
          uStack_c0 = uStack_d8;
          uStack_c8 = uStack_e0;
          uStack_d8 = uVar21;
          uStack_e0 = uVar26;
          lVar35 = lVar35 + 4;
          bVar22 = true;
        }
        bVar22 = lStack_70 == lStack_80;
switchD_100077fc_caseD_1:
        uStack_e0 = 0;
        recovered_10002f1c(pbStack_e8);
        uStack_c8 = 0;
        recovered_10002f1c(pbStack_d0);
      }
LAB_10007b9c:
      uStack_b0 = 0;
      recovered_10002f1c(pbStack_b8);
      goto LAB_10007ba0;
    }
  }
  else {
    if ((ulong)param_1[1] * (ulong)uVar7 >> 0x3e != 0) {
      return false;
    }
    local_a0 = local_a0 & 0xffffffffffffff00;
    recovered_10009148(param_4,(ulong)param_1[1] * (ulong)uVar7 * 4,(undefined1 *)&local_a0);
    local_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_70 = 0;
    uVar27 = recovered_1000b3ec((long *)&local_a0,param_2);
    if ((uVar27 & 1) != 0) {
      uVar24 = recovered_1000b3b8((long)param_1);
      lVar35 = 0;
      uVar7 = uVar24 + 7 >> 3;
      if (uVar24 < 8) {
        uVar7 = 1;
      }
      for (; lVar35 != 7; lVar35 = lVar35 + 1) {
        uVar24 = *(uint *)(&DAT_1000cbd4 + lVar35 * 4);
        uVar9 = *(uint *)(&DAT_1000cc0c + lVar35 * 4);
        if (uVar24 < *param_1) {
          uVar33 = 0;
          if (uVar9 != 0) {
            uVar33 = (*param_1 + ~uVar24) / uVar9;
          }
          uVar33 = uVar33 + 1;
        }
        else {
          uVar33 = 0;
        }
        uVar10 = *(uint *)(&DAT_1000cbf0 + lVar35 * 4);
        if (uVar10 < param_1[1]) {
          uVar11 = *(uint *)(&DAT_1000cc28 + lVar35 * 4);
          uVar19 = 0;
          if (uVar11 != 0) {
            uVar19 = (param_1[1] + ~uVar10) / uVar11;
          }
          if ((uVar33 != 0) && (uVar19 != 0xffffffff)) {
            uVar25 = recovered_1000b3b8((long)param_1);
            uVar34 = (ulong)uVar25 * (ulong)uVar33 + 7 >> 3;
            recovered_10009330(&pbStack_b8,uVar34 + 1);
            recovered_10009330(&pbStack_d0,uVar34);
            recovered_10009330(&pbStack_e8,uVar34);
            uVar27 = 0;
            bVar22 = false;
            uVar28 = (ulong)uVar33;
            while ((uVar27 < uVar19 + 1 &&
                   (bVar23 = recovered_1000b494((long)&local_a0,(long)pbStack_b8,uStack_b0), bVar23)
                   )) {
              pbVar5 = pbStack_d0;
              if (!bVar22) {
                pbVar5 = (byte *)0x0;
              }
              uVar26 = recovered_1000b4f0((uint)*pbStack_b8,(char *)pbStack_e8,
                                          (char *)(pbStack_b8 + 1),pbVar5,uVar34,(ulong)uVar7);
              if (((int)uVar26 == 0) || (6 < param_1[3])) break;
              lVar4 = *param_4 + (ulong)*param_1 * (ulong)(uVar10 + uVar11 * (int)uVar27) * 4;
              switch((uintptr_t)(param_1[3])) {
              case 0:
                uVar33 = uVar24;
                uVar30 = uVar28;
                pbVar5 = pbStack_e8;
                if (param_1[2] == 8) {
                  for (; uVar30 != 0; uVar30 = uVar30 - 1) {
                    bVar32 = *pbVar5;
                    bVar12 = *(byte *)(param_3 + 5);
                    uVar25 = *(uint *)(param_3 + 3);
                    pbVar1 = (byte *)(lVar4 + (ulong)uVar33 * 4);
                    *pbVar1 = bVar32;
                    pbVar1[1] = bVar32;
                    pbVar1[2] = bVar32;
                    pbVar1[3] = -(uVar25 != bVar32 | (bVar12 ^ 0xff) & 1);
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 1;
                  }
                }
                else {
                  pbVar5 = pbStack_e8 + 1;
                  for (; uVar30 != 0; uVar30 = uVar30 - 1) {
                    uVar6 = (uint)(*(ushort *)(pbVar5 + -1) >> 8) |
                            (*(ushort *)(pbVar5 + -1) & 0xff00ff) << 8;
                    bVar32 = *(byte *)(param_3 + 5);
                    uVar25 = *(uint *)(param_3 + 3);
                    uVar18 = (undefined1)((uVar6 * 0xff + 0x7fff) / 0xffff);
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar33 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar18;
                    puVar2[2] = uVar18;
                    puVar2[3] = -(uVar6 != uVar25 | (bVar32 ^ 0xff) & 1);
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 2;
                  }
                }
                break;
              default:
                goto switchD_10007348_caseD_1;
              case 2:
                if (param_1[2] == 8) {
                  uVar33 = uVar24;
                  pbVar5 = pbStack_e8 + 2;
                  for (uVar30 = uVar28; uVar30 != 0; uVar30 = uVar30 - 1) {
                    if ((*(char *)((long)param_3 + 0x29) == '\x01' &&
                         *(uint *)((long)param_3 + 0x1c) == (uint)pbVar5[-2]) &&
                       (*(uint *)(param_3 + 4) == (uint)pbVar5[-1])) {
                      bVar32 = -(*(uint *)((long)param_3 + 0x24) != (uint)*pbVar5);
                    }
                    else {
                      bVar32 = 0xff;
                    }
                    pbVar1 = (byte *)(lVar4 + (ulong)uVar33 * 4);
                    *pbVar1 = pbVar5[-2];
                    pbVar1[1] = pbVar5[-1];
                    pbVar1[2] = *pbVar5;
                    pbVar1[3] = bVar32;
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 3;
                  }
                }
                else {
                  puVar3 = (ushort *)(pbStack_e8 + 2);
                  uVar33 = uVar24;
                  for (uVar30 = uVar28; uVar30 != 0; uVar30 = uVar30 - 1) {
                    uVar15 = (uint)(puVar3[-1] >> 8) | (puVar3[-1] & 0xff00ff) << 8;
                    uVar16 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
                    uVar17 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
                    bVar32 = *(byte *)((long)param_3 + 0x29);
                    uVar25 = *(uint *)((long)param_3 + 0x1c);
                    uVar6 = *(uint *)(param_3 + 4);
                    uVar8 = *(uint *)((long)param_3 + 0x24);
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar33 * 4);
                    *puVar2 = (char)((uVar15 * 0xff + 0x7fff) / 0xffff);
                    puVar2[1] = (char)((uVar16 * 0xff + 0x7fff) / 0xffff);
                    puVar2[2] = (char)((uVar17 * 0xff + 0x7fff) / 0xffff);
                    puVar2[3] = -(uVar15 != uVar25 | (bVar32 ^ 0xff) & 1 |
                                 (uVar16 != uVar6 || uVar17 != uVar8));
                    uVar33 = uVar33 + uVar9;
                    puVar3 = puVar3 + 3;
                  }
                }
                break;
              case 3:
                uVar29 = param_3[1];
                uVar33 = uVar24;
                pbVar5 = pbStack_e8;
                for (uVar30 = uVar28; uVar30 != 0; uVar30 = uVar30 - 1) {
                  if (uVar29 >> 2 <= (ulong)*pbVar5) goto switchD_10007348_caseD_1;
                  recovered_10000c94((void *)(lVar4 + (ulong)uVar33 * 4),
                                     (void *)(*param_3 + (ulong)*pbVar5 * 4),4);
                  uVar33 = uVar33 + uVar9;
                  pbVar5 = pbVar5 + 1;
                }
                break;
              case 4:
                uVar33 = uVar24;
                uVar30 = uVar28;
                pbVar5 = pbStack_e8;
                if (param_1[2] == 8) {
                  for (; uVar30 != 0; uVar30 = uVar30 - 1) {
                    pbVar1 = (byte *)(lVar4 + (ulong)uVar33 * 4);
                    bVar32 = *pbVar5;
                    *pbVar1 = bVar32;
                    pbVar1[1] = bVar32;
                    pbVar1[2] = *pbVar5;
                    pbVar1[3] = pbVar5[1];
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 2;
                  }
                }
                else {
                  pbVar5 = pbStack_e8 + 3;
                  for (; uVar30 != 0; uVar30 = uVar30 - 1) {
                    uVar14 = *(ushort *)(pbVar5 + -3);
                    uVar13 = *(ushort *)(pbVar5 + -1);
                    uVar18 = (undefined1)
                             (((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                               ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) / 0xffff)
                    ;
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar33 * 4);
                    *puVar2 = uVar18;
                    puVar2[1] = uVar18;
                    puVar2[2] = uVar18;
                    puVar2[3] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 4;
                  }
                }
                break;
              case 6:
                uVar33 = uVar24;
                uVar30 = uVar28;
                pbVar5 = pbStack_e8;
                if (param_1[2] == 8) {
                  for (; uVar30 != 0; uVar30 = uVar30 - 1) {
                    recovered_10000c94((void *)(lVar4 + (ulong)uVar33 * 4),pbVar5,4);
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 4;
                  }
                }
                else {
                  pbVar5 = pbStack_e8 + 3;
                  for (; uVar30 != 0; uVar30 = uVar30 - 1) {
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar33 * 4);
                    uVar14 = *(ushort *)(pbVar5 + -3);
                    *puVar2 = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                      ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff) /
                                    0xffff);
                    uVar14 = *(ushort *)(pbVar5 + -1);
                    puVar2[1] = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar14 = *(ushort *)(pbVar5 + 1);
                    puVar2[2] = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar14 = *(ushort *)(pbVar5 + 3);
                    puVar2[3] = (char)(((((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar33 = uVar33 + uVar9;
                    pbVar5 = pbVar5 + 8;
                  }
                }
              }
              uVar21 = uStack_c0;
              uVar26 = uStack_c8;
              pbVar5 = pbStack_d0;
              pbStack_d0 = pbStack_e8;
              pbStack_e8 = pbVar5;
              uStack_c0 = uStack_d8;
              uStack_c8 = uStack_e0;
              uStack_d8 = uVar21;
              uStack_e0 = uVar26;
              uVar27 = uVar27 + 1;
              bVar22 = true;
            }
switchD_10007348_caseD_1:
            uStack_e0 = 0;
            recovered_10002f1c(pbStack_e8);
            uStack_c8 = 0;
            recovered_10002f1c(pbStack_d0);
            uStack_b0 = 0;
            recovered_10002f1c(pbStack_b8);
            if (uVar27 < uVar19 + 1) goto LAB_10007b0c;
          }
        }
      }
      bVar22 = lStack_70 == lStack_80;
      goto LAB_10007ba0;
    }
  }
LAB_10007b0c:
  bVar22 = false;
LAB_10007ba0:
  recovered_1000b6c0(&local_a0);
  return bVar22;
}

#undef DAT_1000cbd4
#undef DAT_1000cbf0
#undef DAT_1000cc0c
#undef DAT_1000cc28
#undef local_a0
#undef pbStack_e8
#undef uStack_e0
#undef uStack_d8
#undef pbStack_d0
#undef uStack_c8
#undef uStack_c0
#undef pbStack_b8
#undef uStack_b0
#undef uStack_98
#undef uStack_90
#undef uStack_88
#undef lStack_80
#undef uStack_78
#undef lStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c38
 */

undefined8 * recovered_10007c38(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002f1c((void *)*param_1);
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c88
 */

long recovered_10007c88(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000b2f4((long *)(param_1 + 0x78));
  recovered_10002f1c(*(void **)(param_1 + 0x78));
  recovered_1000b1e0((undefined8 *)(param_1 + 0x60));
  recovered_1000c074((undefined8 *)(param_1 + 0x48));
  recovered_1000c074((undefined8 *)(param_1 + 0x30));
  return param_1;
}


#define puStack_50 (*(undefined1 * *)(frame + 16))
#define pvStack_48 (*(void * *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cc8
 */

ulong recovered_10007cc8(long param_1,uint *param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;

  pvStack_48 = (void *)0x0;
  puStack_50 = (undefined1 *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  recovered_10007138((undefined8 *)param_2,&puStack_50);
  uStack_40 = 0;
  recovered_10002f1c(pvStack_48);
  puStack_50 = (undefined1 *)0x0;
  uStack_40 = 0;
  pvStack_48 = (void *)0x0;
  if ((param_1 != 0) && (piVar4 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x86dU)), piVar4 != (int *)0x0)) {
    uVar5 = recovered_10002878(piVar4,0,2);
    if (((int)uVar5 == 0) &&
       ((uVar6 = recovered_1000290c((long)piVar4), -1 < (long)uVar6 &&
        (uVar5 = recovered_10002878(piVar4,0,0), (int)uVar5 == 0)))) {
      recovered_10009248((long *)&puStack_50,uVar6);
      if (pvStack_48 == (void *)0x0) {
        bVar2 = true;
      }
      else {
        uVar6 = recovered_100025d4(puStack_50,1,(long)pvStack_48,piVar4);
        bVar2 = (void *)uVar6 == pvStack_48;
      }
    }
    else {
      bVar2 = false;
    }
    uVar5 = recovered_10002590(piVar4);
    bVar1 = false;
    if ((int)uVar5 == 0) {
      bVar1 = bVar2;
    }
    if (bVar1) {
      bVar3 = recovered_10003b98(puStack_50,(ulong)pvStack_48,param_2);
      uVar6 = (ulong)bVar3;
      goto LAB_10007d6c;
    }
  }
  uVar6 = 0;
LAB_10007d6c:
  pvStack_48 = (void *)0x0;
  recovered_10002f1c(puStack_50);
  return uVar6;
}

#undef puStack_50
#undef pvStack_48
#undef uStack_40
#undef uStack_38

/* Native PNG stream construction. Pooka's Free Software License. */
#include "png_encode.h"
int recovered_10007de8(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081fc
 */

bool recovered_100081fc(uint *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == 0) {
    return true;
  }
  lVar1 = recovered_10002768(param_2,1,param_3,param_1);
  return lVar1 == param_3;
}


#define uStack_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008234
 */

ulong recovered_10008234(uint *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;

  uVar3 = 0;
  if ((param_4 >> 0x20 == 0) && (param_3 != (byte *)0x0 || param_4 == 0)) {
    uVar2 = ((uint)param_4 & 0xff00ff00) >> 8 | ((uint)param_4 & 0xff00ff) << 8;
    local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = recovered_1000b204(0,param_2,4);
    if (param_4 != 0) {
      uVar2 = recovered_1000b204(uVar2,param_3,param_4);
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_38 = uVar2 >> 0x10 | uVar2 << 0x10;
    bVar1 = recovered_100081fc(param_1,(long)&local_34,4);
    uVar3 = (ulong)bVar1;
    if (bVar1) {
      bVar1 = recovered_100081fc(param_1,(long)param_2,4);
      uVar3 = (ulong)bVar1;
      if (bVar1) {
        bVar1 = recovered_100081fc(param_1,(long)param_3,param_4);
        uVar3 = (ulong)bVar1;
        if (bVar1) {
          bVar1 = recovered_100081fc(param_1,(long)&uStack_38,4);
          uVar3 = (ulong)bVar1;
        }
      }
    }
  }
  return uVar3;
}

#undef uStack_38
#undef local_34

#undef DAT_1000c7e8
#define DAT_1000c7e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_1000cefc
#define DAT_1000cefc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x828U)))
#undef DAT_1000cf01
#define DAT_1000cf01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82dU)))
#undef DAT_1000cf37
#define DAT_1000cf37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x863U)))
#define pvStack_98 (*(void * *)(frame + 24))
#define uStack_90 (*(ulong *)(frame + 32))
#define uStack_88 (*(undefined8 *)(frame + 40))
#define uStack_80 (*(undefined8 *)(frame + 48))
#define uStack_78 (*(ulong *)(frame + 56))
#define uStack_70 (*(undefined8 *)(frame + 64))
#define uStack_61 (*(undefined1 *)(frame + 79))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e0
 */

undefined4 recovered_100082e0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *src;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;

  uVar10 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar11 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x825U));
    uVar10 = 0;
    if (puVar11 != (uint *)0x0) {
      bVar8 = recovered_100081fc(puVar11,((uintptr_t)pf_module_state+0x1cbU),8);
      if (bVar8) {
        uStack_80 = (void *)CONCAT17((char)param_4,
                                     CONCAT16((char)(param_4 >> 8),
                                              CONCAT15((char)(param_4 >> 0x10),
                                                       CONCAT14((char)(param_4 >> 0x18),
                                                                CONCAT13((char)param_3,
                                                                         CONCAT12((char)(param_3 >>
                                                                                        8),CONCAT11(
                                                  (char)(param_3 >> 0x10),(char)(param_3 >> 0x18))))
                                                  ))));
        PF_PART5(uStack_78, 0) = (uint5)(uint)DAT_1000c7e8;
        uVar12 = recovered_10008234(puVar11,&DAT_1000cefc,(byte *)&uStack_80,0xd);
        if ((int)uVar12 != 0) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_80 = (void *)0x0;
          uVar1 = (param_3 & 0xffffffff) << 2 | 1;
          recovered_10009248(&uStack_80,uVar1 * (param_4 & 0xffffffff));
          uVar14 = (param_3 & 0xffffffff) * 4;
          lVar23 = 1;
          lVar22 = param_2;
          for (uVar12 = 0; uVar12 != (param_4 & 0xffffffff); uVar12 = uVar12 + 1) {
            uVar16 = 0;
            uVar18 = 0;
            uVar17 = 0;
            src = (void *)(param_2 + uVar12 * uVar14);
            pvVar3 = (void *)0x0;
            if (uVar12 != 0) {
              pvVar3 = (void *)((long)src + (param_3 & 0xffffffff) * -4);
            }
            uVar19 = -(ulong)(pvVar3 == (void *)0x0);
            for (; uVar14 != uVar18; uVar18 = uVar18 + 1) {
              bVar4 = *(byte *)(lVar22 + uVar18);
              iVar6 = (int)(char)bVar4;
              uVar9 = 0x100 - bVar4;
              if (-1 < iVar6) {
                uVar9 = (uint)bVar4;
              }
              if (uVar18 < 4) {
                uVar20 = 0;
              }
              else {
                uVar20 = (uint)*(byte *)(lVar22 + uVar18 + -4);
              }
              uVar20 = iVar6 - uVar20;
              uVar2 = 0x100 - (uVar20 & 0xff);
              if (-1 < (char)uVar20) {
                uVar2 = uVar20 & 0xff;
              }
              if (pvVar3 != (void *)0x0) {
                uVar5 = iVar6 - (uint)*(byte *)((long)pvVar3 + uVar18);
                uVar20 = 0x100 - (uVar5 & 0xff);
                if (-1 < (char)uVar5) {
                  uVar20 = uVar5 & 0xff;
                }
                uVar19 = uVar19 + uVar20;
              }
              uVar17 = uVar17 + uVar9;
              uVar16 = uVar16 + uVar2;
            }
            cVar7 = uVar16 < uVar17;
            if (!(bool)cVar7) {
              uVar16 = uVar17;
            }
            if (uVar19 < uVar16 && pvVar3 != (void *)0x0) {
              cVar7 = '\x02';
            }
            pcVar13 = (char *)((long)uStack_80 + uVar12 * uVar1);
            *pcVar13 = cVar7;
            if (cVar7 == '\x02') {
              if (pvVar3 == (void *)0x0) goto LAB_1000804c;
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                *(char *)((long)uStack_80 + uVar18 + lVar23) =
                     *(char *)(lVar22 + uVar18) - *(char *)((long)pvVar3 + uVar18);
              }
            }
            else if (cVar7 == '\x01') {
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                if (uVar18 < 4) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = *(char *)(lVar22 + uVar18 + -4);
                }
                *(char *)((long)uStack_80 + uVar18 + lVar23) = *(char *)(lVar22 + uVar18) - cVar7;
              }
            }
            else {
LAB_1000804c:
              recovered_10000c94(pcVar13 + 1,src,uVar14);
            }
            lVar22 = lVar22 + uVar14;
            lVar23 = lVar23 + uVar1;
          }
          uStack_90 = 0;
          uStack_88 = 0;
          pvStack_98 = (void *)0x0;
          uStack_61 = 0x78;
          recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
          uStack_61 = 1;
          recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
          uVar12 = 0;
          while (uVar1 = uStack_78 - uVar12, uVar12 <= uStack_78 && uVar1 != 0) {
            if (0xfffe < uVar1) {
              uVar1 = 0xffff;
            }
            uVar14 = uVar1 + uVar12;
            uStack_61 = uVar14 == uStack_78;
            recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)uVar1;
            recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar1 >> 8);
            recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
            uVar9 = (uint)uVar1 ^ 0xffff;
            uStack_61 = (undefined1)uVar9;
            recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar9 >> 8);
            recovered_1000a9cc((long *)&pvStack_98,&uStack_61);
            recovered_10009ea0((long *)&pvStack_98,(long)pvStack_98 + uStack_90,
                               (undefined1 *)((long)uStack_80 + uVar12),
                               (undefined1 *)((long)uStack_80 + uVar14));
            uVar12 = uVar14;
          }
          uVar9 = recovered_1000a968((long)uStack_80,uStack_78);
          uVar1 = uStack_90;
          recovered_10009248((long *)&pvStack_98,uStack_90 + 4);
          uVar12 = 0;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          *(uint *)((long)pvStack_98 + uVar1) = uVar9 >> 0x10 | uVar9 << 0x10;
          do {
            uVar1 = uStack_90 - uVar12;
            if (uStack_90 < uVar12 || uVar1 == 0) {
              uStack_90 = 0;
              recovered_10002f1c(pvStack_98);
              uStack_78 = 0;
              recovered_10002f1c(uStack_80);
              uVar12 = recovered_10008234(puVar11,&DAT_1000cf01,(byte *)0x0,0);
              uVar21 = (undefined4)uVar12;
              goto LAB_10008180;
            }
            if (0x3ffff < uVar1) {
              uVar1 = 0x40000;
            }
            uVar14 = recovered_10008234(puVar11,&DAT_1000cf37,(byte *)((long)pvStack_98 + uVar12),
                                        uVar1);
            uVar12 = uVar1 + uVar12;
          } while ((uVar14 & 1) != 0);
          uStack_90 = 0;
          recovered_10002f1c(pvStack_98);
          uStack_78 = 0;
          recovered_10002f1c(uStack_80);
        }
      }
      uVar21 = 0;
LAB_10008180:
      uVar15 = recovered_10002590((int *)puVar11);
      uVar10 = 0;
      if ((int)uVar15 == 0) {
        uVar10 = uVar21;
      }
    }
  }
  return uVar10;
}

#undef DAT_1000c7e8
#undef DAT_1000cefc
#undef DAT_1000cf01
#undef DAT_1000cf37
#undef pvStack_98
#undef uStack_90
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef uStack_70
#undef uStack_61

#undef DAT_1000c7f0
#define DAT_1000c7f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000c7f8
#define DAT_1000c7f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_1000c800
#define DAT_1000c800 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#define lStack_e0 (*(long *)(frame + 32))
#define local_e8 (*(void * *)(frame + 24))
#define local_cc (*(undefined4 *)(frame + 52))
#define uStack_a4 (*(undefined8 *)(frame + 92))
#define local_c8 (*(undefined1 *)(frame + 56))
#define local_c7 (*(undefined1 *)(frame + 57))
#define uStack_98 (*(undefined1 *)(frame + 104))
#define local_c6 (*(undefined1 *)(frame + 58))
#define uStack_97 (*(undefined2 *)(frame + 105))
#define local_c5 (*(undefined1 *)(frame + 59))
#define uStack_95 (*(undefined4 *)(frame + 107))
#define local_c4 (*(undefined1 *)(frame + 60))
#define uStack_91 (*(undefined1 *)(frame + 111))
#define local_c3 (*(undefined1 *)(frame + 61))
#define uStack_90 (*(undefined4 *)(frame + 112))
#define local_c2 (*(undefined1 *)(frame + 62))
#define local_c1 (*(undefined1 *)(frame + 63))
#define uStack_84 (*(undefined8 *)(frame + 124))
#define local_c0 (*(undefined8 *)(frame + 64))
#define uStack_7c (*(undefined8 *)(frame + 132))
#define local_b8 (*(undefined1 *)(frame + 72))
#define uStack_74 (*(undefined4 *)(frame + 140))
#define local_b7 (*(undefined1 *)(frame + 73))
#define local_b6 (*(undefined1 *)(frame + 74))
#define uStack_6c (*(undefined4 *)(frame + 148))
#define local_b5 (*(undefined1 *)(frame + 75))
#define uStack_68 (*(undefined8 *)(frame + 152))
#define local_b4 (*(undefined8 *)(frame + 76))
#define local_ac (*(undefined8 *)(frame + 84))
#define local_9c (*(undefined4 *)(frame + 100))
#define local_8c (*(undefined8 *)(frame + 116))
#define local_70 (*(undefined4 *)(frame + 144))
#define local_5e (*(undefined2 *)(frame + 162))
#define local_5c (*(undefined1 *)(frame + 164))
#define local_5b (*(undefined1 *)(frame + 165))
#define local_5a (*(undefined1 *)(frame + 166))
#define local_59 (*(undefined1 *)(frame + 167))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_54 (*(undefined4 *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e4
 */

byte recovered_100082e4(long param_1,long param_2,ulong param_3,uint param_4)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  ulong in_x1;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;

  bVar8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    in_x1 = (param_3 & 0xffffffff) * 4;
    uVar9 = in_x1 * param_4;
    if ((uVar9 < 0xffffff86) &&
       (puVar5 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x825U)), puVar5 != (uint *)0x0)) {
      local_58 = 0;
      local_5e = 0x4d42;
      iVar1 = (int)uVar9 + 0x7a;
      local_5c = (undefined1)iVar1;
      local_5b = (undefined1)((uint)iVar1 >> 8);
      local_5a = (undefined1)((uint)iVar1 >> 0x10);
      local_59 = (undefined1)((uint)iVar1 >> 0x18);
      local_54 = 0x7a;
      local_ac = 0;
      uStack_90 = 0;
      uStack_97 = 0;
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_74 = 0;
      local_70 = 0;
      uStack_7c = 0;
      uStack_84 = 0;
      local_8c = 0;
      local_cc = 0x6c;
      local_c8 = (undefined1)param_3;
      local_c7 = (undefined1)(param_3 >> 8);
      local_c6 = (undefined1)(param_3 >> 0x10);
      local_c5 = (undefined1)(param_3 >> 0x18);
      iVar1 = -param_4;
      local_c4 = (undefined1)iVar1;
      local_c3 = (undefined1)((uint)iVar1 >> 8);
      local_c2 = (undefined1)((uint)iVar1 >> 0x10);
      local_c1 = (undefined1)((uint)iVar1 >> 0x18);
      local_c0 = DAT_1000c7f0;
      local_b8 = (undefined1)uVar9;
      local_b7 = (undefined1)(uVar9 >> 8);
      local_b6 = (undefined1)(uVar9 >> 0x10);
      local_b5 = (undefined1)(uVar9 >> 0x18);
      local_b4 = DAT_1000c7f8;
      uStack_a4 = 0xff0000ff0000;
      local_9c = 0xff;
      uStack_98 = 0;
      uStack_95 = (undefined4)DAT_1000c800;
      uStack_91 = 0x73;
      bVar3 = recovered_100081fc(puVar5,(long)&local_5e,0xe);
      bVar4 = false;
      if (bVar3) {
        bVar4 = recovered_100081fc(puVar5,(long)&local_cc,0x6c);
      }
      recovered_10009330(&local_e8,in_x1);
      for (uVar9 = 0; (bVar4 != false && (uVar9 < param_4)); uVar9 = uVar9 + 1) {
        for (uVar7 = 0; in_x1 != uVar7; uVar7 = uVar7 + 4) {
          puVar2 = (undefined1 *)(param_2 + uVar7);
          *(undefined1 *)((long)local_e8 + uVar7) = puVar2[2];
          *(undefined1 *)((long)local_e8 + uVar7 + 1) = puVar2[1];
          *(undefined1 *)((long)local_e8 + uVar7 + 2) = *puVar2;
          *(undefined1 *)((long)local_e8 + uVar7 + 3) = puVar2[3];
        }
        bVar4 = recovered_100081fc(puVar5,(long)local_e8,lStack_e0);
        param_2 = param_2 + in_x1;
      }
      uVar6 = recovered_10002590((int *)puVar5);
      bVar8 = bVar4 & (int)uVar6 == 0;
      lStack_e0 = 0;
      recovered_10002f1c(local_e8);
    }
    else {
      bVar8 = 0;
    }
  }
  return bVar8;
}

#undef DAT_1000c7f0
#undef DAT_1000c7f8
#undef DAT_1000c800
#undef lStack_e0
#undef local_e8
#undef local_cc
#undef uStack_a4
#undef local_c8
#undef local_c7
#undef uStack_98
#undef local_c6
#undef uStack_97
#undef local_c5
#undef uStack_95
#undef local_c4
#undef uStack_91
#undef local_c3
#undef uStack_90
#undef local_c2
#undef local_c1
#undef uStack_84
#undef local_c0
#undef uStack_7c
#undef local_b8
#undef uStack_74
#undef local_b7
#undef local_b6
#undef uStack_6c
#undef local_b5
#undef uStack_68
#undef local_b4
#undef local_ac
#undef local_9c
#undef local_8c
#undef local_70
#undef local_5e
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_54

#define lStack_68 (*(long *)(frame + 24))
#define local_70 (*(void * *)(frame + 16))
#define local_58 (*(undefined8 *)(frame + 40))
#define local_50 (*(undefined4 *)(frame + 48))
#define local_4c (*(undefined1 *)(frame + 52))
#define local_4b (*(undefined1 *)(frame + 53))
#define local_4a (*(undefined1 *)(frame + 54))
#define local_49 (*(undefined1 *)(frame + 55))
#define local_48 (*(undefined2 *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008544
 */

uint recovered_10008544(long param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong in_x1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;

  uVar8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar5 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x825U));
    uVar8 = 0;
    if (puVar5 != (uint *)0x0) {
      local_50 = 0;
      local_58 = 0x20000;
      local_4c = (undefined1)param_3;
      local_4b = (undefined1)(param_3 >> 8);
      local_4a = (undefined1)param_4;
      local_49 = (undefined1)(param_4 >> 8);
      local_48 = 0x2820;
      bVar2 = recovered_100081fc(puVar5,(long)&local_58,0x12);
      in_x1 = (ulong)param_3 * 4;
      recovered_10009330(&local_70,in_x1);
      uVar9 = 0;
      bVar3 = false;
      if (bVar2) {
        do {
          bVar3 = true;
          if (param_4 <= uVar9) break;
          for (uVar7 = 0; in_x1 != uVar7; uVar7 = uVar7 + 4) {
            puVar1 = (undefined1 *)(param_2 + uVar7);
            *(undefined1 *)((long)local_70 + uVar7) = puVar1[2];
            *(undefined1 *)((long)local_70 + uVar7 + 1) = puVar1[1];
            *(undefined1 *)((long)local_70 + uVar7 + 2) = *puVar1;
            *(undefined1 *)((long)local_70 + uVar7 + 3) = puVar1[3];
          }
          bVar2 = recovered_100081fc(puVar5,(long)local_70,lStack_68);
          uVar9 = uVar9 + 1;
          param_2 = param_2 + in_x1;
          bVar3 = false;
        } while (bVar2);
      }
      if (bVar3) {
        bVar3 = recovered_100081fc(puVar5,((uintptr_t)pf_module_state+0x570U),0x1a);
        uVar4 = (uint)bVar3;
      }
      else {
        uVar4 = 0;
      }
      uVar6 = recovered_10002590((int *)puVar5);
      uVar8 = 0;
      if ((int)uVar6 == 0) {
        uVar8 = uVar4;
      }
      lStack_68 = 0;
      recovered_10002f1c(local_70);
    }
  }
  return uVar8;
}

#undef lStack_68
#undef local_70
#undef local_58
#undef local_50
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48

#undef DAT_1000c808
#define DAT_1000c808 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1000c810
#define DAT_1000c810 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_1000c818
#define DAT_1000c818 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_1000c820
#define DAT_1000c820 (*(double *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_1000c828
#define DAT_1000c828 (*(double *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_1000c830
#define DAT_1000c830 (*(double *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_1000c838
#define DAT_1000c838 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef DAT_1000c840
#define DAT_1000c840 (*(double *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_1000c848
#define DAT_1000c848 (*(double *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_1000c850
#define DAT_1000c850 (*(double *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef DAT_1000c8b0
#define DAT_1000c8b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
#define uStack_1634 (*(undefined4 *)(frame + 540))
#define uStack_1630 (*(undefined2 *)(frame + 544))
#define uStack_162e (*(undefined2 *)(frame + 546))
#define uStack_162c (*(undefined1 *)(frame + 548))
#define uStack_162b (*(undefined1 *)(frame + 549))
#define uStack_162a (*(undefined1 *)(frame + 550))
#define pvStack_1438 (*(void * *)(frame + 1048))
#define lStack_1430 (*(long *)(frame + 1056))
#define uStack_1428 (*(undefined8 *)(frame + 1064))
#define aiStack_1234 (*(int (*)[64])(frame + 1564))
#define iStack_1134 (*(int *)(frame + 1820))
#define aiStack_1130 (*(int (*)[2])(frame + 1824))
#define pvStack_1128 (*(void * *)(frame + 1832))
#define lStack_1120 (*(long *)(frame + 1840))
#define uStack_1118 (*(undefined8 *)(frame + 1848))
#define bStack_1110 (*(byte *)(frame + 1856))
#define iStack_110c (*(int *)(frame + 1860))
#define puStack_1108 (*(undefined1 * *)(frame + 1864))
#define lStack_1100 (*(long *)(frame + 1872))
#define uStack_10f8 (*(undefined8 *)(frame + 1880))
#define puStack_10f0 (*(undefined1 * *)(frame + 1888))
#define lStack_10e8 (*(long *)(frame + 1896))
#define uStack_10e0 (*(undefined8 *)(frame + 1904))
#define puStack_10d8 (*(undefined1 * *)(frame + 1912))
#define lStack_10d0 (*(long *)(frame + 1920))
#define uStack_10c8 (*(undefined8 *)(frame + 1928))
#define puStack_10c0 (*(undefined1 * *)(frame + 1936))
#define lStack_10b8 (*(long *)(frame + 1944))
#define uStack_10b0 (*(undefined8 *)(frame + 1952))
#define auStack_10a8 (*(undefined1 (*)[2048])(frame + 1960))
#define auStack_8a8 (*(undefined1 (*)[2056])(frame + 4008))
#define auStack_1838 (*(undefined1 (*)[512])(frame + 24))
#define uStack_1638 (*(undefined1 *)(frame + 536))
#define uStack_1637 (*(undefined1 *)(frame + 537))
#define uStack_1636 (*(undefined1 *)(frame + 538))
#define uStack_1635 (*(undefined1 *)(frame + 539))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086d0
 */

uint recovered_100086d0(long param_1,long param_2,uint param_3,int param_4)

{
  unsigned char frame[6256] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  void **ppvVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;

  if (0xffff < param_4) {
    return 0;
  }
  if (0xffff < (int)param_3) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if ((int)param_3 < 1 || param_4 < 1) {
    return 0;
  }
  puVar12 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x825U));
  if (puVar12 == (uint *)0x0) {
    return 0;
  }
  recovered_10000d20(auStack_8a8,0x800);
  recovered_10000d20(auStack_10a8,0x800);
  puStack_10c0 = (undefined1 *)0x0;
  uStack_10b0 = 0;
  lStack_10b8 = 0;
  puStack_10d8 = (undefined1 *)0x0;
  uStack_10c8 = 0;
  lStack_10d0 = 0;
  puStack_10f0 = (undefined1 *)0x0;
  uStack_10e0 = 0;
  lStack_10e8 = 0;
  puStack_1108 = (undefined1 *)0x0;
  uStack_10f8 = 0;
  lStack_1100 = 0;
  recovered_1000b6e4(1,(long)auStack_8a8,(long *)&puStack_10c0,(long *)&puStack_10d8);
  recovered_1000b6e4(0,(long)auStack_10a8,(long *)&puStack_10f0,(long *)&puStack_1108);
  bVar11 = recovered_100081fc(puVar12,((uintptr_t)pf_module_state+0x870U),2);
  if (bVar11) {
    uStack_1638 = (undefined1)DAT_1000c808;
    uStack_1637 = (undefined1)((ulong)DAT_1000c808 >> 8);
    uStack_1636 = (undefined1)((ulong)DAT_1000c808 >> 0x10);
    uStack_1635 = (undefined1)((ulong)DAT_1000c808 >> 0x18);
    uStack_1634 = (undefined4)((ulong)DAT_1000c808 >> 0x20);
    uStack_1630 = 0x100;
    uStack_162e = 0x100;
    uStack_162c = 0;
    uStack_162b = 0;
    recovered_1000bc78(&pvStack_1438,(long)&uStack_1638,0xe);
    uVar13 = recovered_1000b800(puVar12,0xe0,&pvStack_1438);
    lStack_1430 = 0;
    recovered_10002f1c(pvStack_1438);
    if ((int)uVar13 != 0) {
      uStack_1428 = 0;
      pvStack_1438 = (void *)0x0;
      lStack_1430 = 0;
      uStack_1638 = 0;
      recovered_1000a9cc((long *)&pvStack_1438,&uStack_1638);
      for (lVar21 = 0; lVar21 != 0x100; lVar21 = lVar21 + 4) {
        recovered_1000ab30((long *)&pvStack_1438,
                           (undefined1 *)
                           ((ulong)*(uint *)((long)&DAT_1000c8b0 + lVar21) + ((uintptr_t)pf_module_state+0x58aU)));
      }
      uStack_1638 = 1;
      recovered_1000a9cc((long *)&pvStack_1438,&uStack_1638);
      for (lVar21 = 0; lVar21 != 0x100; lVar21 = lVar21 + 4) {
        recovered_1000ab30((long *)&pvStack_1438,
                           (undefined1 *)
                           ((ulong)*(uint *)((long)&DAT_1000c8b0 + lVar21) + ((uintptr_t)pf_module_state+0x5caU)));
      }
      uVar13 = recovered_1000b800(puVar12,0xdb,&pvStack_1438);
      lStack_1430 = 0;
      recovered_10002f1c(pvStack_1438);
      if ((int)uVar13 != 0) {
        uStack_1638 = 8;
        uStack_1637 = (undefined1)((uint)param_4 >> 8);
        uStack_1636 = (undefined1)param_4;
        uStack_1635 = (undefined1)(param_3 >> 8);
        PF_PART3(uStack_1634, 1) = (undefined3)DAT_1000c810;
        uStack_1634 = CONCAT31(PF_PART3(uStack_1634, 1),(char)param_3);
        uStack_1630 = (undefined2)((ulong)DAT_1000c810 >> 0x18);
        uStack_162e = (undefined2)((ulong)DAT_1000c810 >> 0x28);
        uStack_162c = (undefined1)((ulong)DAT_1000c810 >> 0x38);
        uStack_162b = 0x11;
        uStack_162a = 1;
        recovered_1000bc78(&pvStack_1438,(long)&uStack_1638,0xf);
        uVar13 = recovered_1000b800(puVar12,0xc0,&pvStack_1438);
        lStack_1430 = 0;
        recovered_10002f1c(pvStack_1438);
        if ((int)uVar13 != 0) {
          uStack_1428 = 0;
          pvStack_1438 = (void *)0x0;
          lStack_1430 = 0;
          uStack_1638 = 0;
          recovered_1000a9cc((long *)&pvStack_1438,&uStack_1638);
          recovered_1000b864((long *)&pvStack_1438,(long)pvStack_1438 + lStack_1430,puStack_10c0,
                             puStack_10c0 + lStack_10b8);
          recovered_1000b864((long *)&pvStack_1438,(long)pvStack_1438 + lStack_1430,puStack_10d8,
                             puStack_10d8 + lStack_10d0);
          uVar13 = recovered_1000b800(puVar12,0xc4,&pvStack_1438);
          lStack_1430 = 0;
          recovered_10002f1c(pvStack_1438);
          if ((int)uVar13 != 0) {
            uStack_1428 = 0;
            pvStack_1438 = (void *)0x0;
            lStack_1430 = 0;
            uStack_1638 = 0x10;
            recovered_1000a9cc((long *)&pvStack_1438,&uStack_1638);
            recovered_1000b864((long *)&pvStack_1438,(long)pvStack_1438 + lStack_1430,puStack_10f0,
                               puStack_10f0 + lStack_10e8);
            recovered_1000b864((long *)&pvStack_1438,(long)pvStack_1438 + lStack_1430,puStack_1108,
                               puStack_1108 + lStack_1100);
            uVar13 = recovered_1000b800(puVar12,0xc4,&pvStack_1438);
            lStack_1430 = 0;
            recovered_10002f1c(pvStack_1438);
            if ((int)uVar13 != 0) {
              uStack_1638 = (undefined1)DAT_1000c818;
              uStack_1637 = (undefined1)((ulong)DAT_1000c818 >> 8);
              uStack_1636 = (undefined1)((ulong)DAT_1000c818 >> 0x10);
              uStack_1635 = (undefined1)((ulong)DAT_1000c818 >> 0x18);
              uStack_1634 = (undefined4)((ulong)DAT_1000c818 >> 0x20);
              uStack_1630 = 0x3f;
              recovered_1000bc78(&pvStack_1438,(long)&uStack_1638,10);
              uVar13 = recovered_1000b800(puVar12,0xda,&pvStack_1438);
              lStack_1430 = 0;
              recovered_10002f1c(pvStack_1438);
            }
          }
        }
      }
    }
  }
  else {
    uVar13 = 0;
  }
  uStack_1118 = 0;
  pvStack_1128 = (void *)0x0;
  lStack_1120 = 0;
  bStack_1110 = '\0';
  iStack_110c = 0;
  aiStack_1130[0] = 0;
  aiStack_1130[1] = 0;
  iStack_1134 = 0;
  recovered_10000d20((undefined1 *)aiStack_1234,0x100);
  dVar10 = DAT_1000c850;
  dVar9 = DAT_1000c848;
  dVar8 = DAT_1000c840;
  dVar7 = DAT_1000c838;
  dVar6 = DAT_1000c830;
  dVar5 = DAT_1000c828;
  dVar4 = DAT_1000c820;
  if ((uVar13 & 1) != 0) {
    for (uVar13 = 0; uVar13 != param_4 + 7U >> 3; uVar13 = uVar13 + 1) {
      uVar22 = 0;
      for (uVar20 = 0; uVar20 != param_3 + 7 >> 3; uVar20 = uVar20 + 1) {
        ppvVar15 = &pvStack_1438;
        puVar16 = &uStack_1638;
        puVar17 = auStack_1838;
        for (lVar21 = 0; lVar21 != 8; lVar21 = lVar21 + 1) {
          lVar18 = 0;
          uVar1 = (int)lVar21 + (int)(uVar13 << 3);
          if (param_4 - 1U <= uVar1) {
            uVar1 = param_4 - 1U;
          }
          uVar19 = uVar22;
          for (; lVar18 != 0x40; lVar18 = lVar18 + 8) {
            uVar3 = uVar19;
            if (param_3 - 1 <= uVar19) {
              uVar3 = param_3 - 1;
            }
            pbVar2 = (byte *)(param_2 + ((ulong)param_3 * (ulong)uVar1 + (ulong)uVar3) * 4);
            dVar23 = pf_bits_double(NEON_ucvtf((ulong)*pbVar2));
            dVar24 = pf_bits_double(NEON_ucvtf((ulong)pbVar2[1]));
            dVar25 = pf_bits_double(NEON_ucvtf((ulong)pbVar2[2]));
            *(double *)((long)ppvVar15 + lVar18) =
                 dVar24 * dVar4 + dVar5 * dVar23 + dVar6 * dVar25 + -128.0;
            *(double *)(puVar16 + lVar18) = dVar24 * dVar7 + dVar8 * dVar23 + dVar25 * 0.5;
            *(double *)(puVar17 + lVar18) = dVar24 * dVar9 + dVar23 * 0.5 + dVar10 * dVar25;
            uVar19 = uVar19 + 1;
          }
          ppvVar15 = ppvVar15 + 8;
          puVar16 = puVar16 + 0x40;
          puVar17 = puVar17 + 0x40;
        }
        recovered_1000b95c((long)&pvStack_1438,((uintptr_t)pf_module_state+0x58aU),(long)aiStack_1234);
        recovered_1000bb18((long)&pvStack_1128,aiStack_1234,aiStack_1130 + 1,(long)auStack_8a8,
                           (long)auStack_10a8);
        recovered_1000b95c((long)&uStack_1638,((uintptr_t)pf_module_state+0x5caU),(long)aiStack_1234);
        recovered_1000bb18((long)&pvStack_1128,aiStack_1234,aiStack_1130,(long)auStack_8a8,
                           (long)auStack_10a8);
        recovered_1000b95c((long)auStack_1838,((uintptr_t)pf_module_state+0x5caU),(long)aiStack_1234);
        recovered_1000bb18((long)&pvStack_1128,aiStack_1234,&iStack_1134,(long)auStack_8a8,
                           (long)auStack_10a8);
        uVar22 = uVar22 + 8;
      }
    }
    if (iStack_110c != 0) {
      bStack_1110 = bStack_1110 << (ulong)(8U - iStack_110c & 0x1f) |
                    (byte)(-1 << (ulong)(8U - iStack_110c & 0x1f)) ^ 0xff;
      recovered_1000bd78((long *)&pvStack_1128,bStack_1110);
      bStack_1110 = '\0';
      iStack_110c = 0;
    }
    bVar11 = recovered_100081fc(puVar12,(long)pvStack_1128,lStack_1120);
    if (bVar11) {
      bVar11 = recovered_100081fc(puVar12,((uintptr_t)pf_module_state+0x873U),2);
      uVar22 = (uint)bVar11;
      goto LAB_10008a80;
    }
  }
  uVar22 = 0;
LAB_10008a80:
  uVar14 = recovered_10002590((int *)puVar12);
  uVar1 = 0;
  if ((int)uVar14 == 0) {
    uVar1 = uVar22;
  }
  lStack_1120 = 0;
  recovered_10002f1c(pvStack_1128);
  lStack_1100 = 0;
  recovered_10002f1c(puStack_1108);
  lStack_10e8 = 0;
  recovered_10002f1c(puStack_10f0);
  lStack_10d0 = 0;
  recovered_10002f1c(puStack_10d8);
  lStack_10b8 = 0;
  recovered_10002f1c(puStack_10c0);
  return uVar1;
}

#undef DAT_1000c808
#undef DAT_1000c810
#undef DAT_1000c818
#undef DAT_1000c820
#undef DAT_1000c828
#undef DAT_1000c830
#undef DAT_1000c838
#undef DAT_1000c840
#undef DAT_1000c848
#undef DAT_1000c850
#undef DAT_1000c8b0
#undef uStack_1634
#undef uStack_1630
#undef uStack_162e
#undef uStack_162c
#undef uStack_162b
#undef uStack_162a
#undef pvStack_1438
#undef lStack_1430
#undef uStack_1428
#undef aiStack_1234
#undef iStack_1134
#undef aiStack_1130
#undef pvStack_1128
#undef lStack_1120
#undef uStack_1118
#undef bStack_1110
#undef iStack_110c
#undef puStack_1108
#undef lStack_1100
#undef uStack_10f8
#undef puStack_10f0
#undef lStack_10e8
#undef uStack_10e0
#undef puStack_10d8
#undef lStack_10d0
#undef uStack_10c8
#undef puStack_10c0
#undef lStack_10b8
#undef uStack_10b0
#undef auStack_10a8
#undef auStack_8a8
#undef auStack_1838
#undef uStack_1638
#undef uStack_1637
#undef uStack_1636
#undef uStack_1635

#undef DAT_1000c858
#define DAT_1000c858 (*(void * *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_1000c860
#define DAT_1000c860 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_1000cf4a
#define str_1000cf4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x876U)))
#define uStack_68 (*(undefined8 *)(frame + 56))
#define local_90 (*(void * *)(frame + 16))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_78 (*(void * *)(frame + 40))
#define local_70 (*(long *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c98
 */

uint recovered_10008c98(long param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;

  uVar8 = (ulong)param_3;
  uVar11 = 0;
  if (((param_1 != 0) && (param_2 != (undefined1 *)0x0)) && (0 < (int)param_3 && 0 < (int)param_4))
  {
    uVar10 = (ulong)(param_3 + 0x3f >> 6);
    uVar9 = (ulong)(param_4 + 0x3f >> 6);
    uVar14 = uVar9 * uVar10;
    if (uVar14 >> 0x1e == 0) {
      local_70 = 0;
      uStack_68 = 0;
      local_78 = (void *)0x0;
      local_90 = DAT_1000c858;
      PF_PART6(local_88, 0) = CONCAT24(0x33,(int)DAT_1000c860);
      recovered_1000bdc0((long *)&local_78,0,(undefined1 *)&local_90,0xe);
      recovered_1000bdc8((long *)&local_78,param_3);
      recovered_1000bdc8((long *)&local_78,param_4);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0x11);
      recovered_1000bdc8((long *)&local_78,1);
      local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
      recovered_1000a9cc((long *)&local_78,(undefined1 *)&local_90);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      lVar3 = local_70;
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdec((long *)&local_78,lVar3,(uint)local_70);
      recovered_1000bdc8((long *)&local_78,param_3);
      recovered_1000bdc8((long *)&local_78,param_4);
      recovered_1000bdc8((long *)&local_78,1);
      uVar5 = recovered_10000e08(str_1000cf4a);
      recovered_1000bdc8((long *)&local_78,(int)uVar5 + 1);
      recovered_1000be0c((long *)&local_78,(long)local_78 + local_70,str_1000cf4a,
                         str_1000cf4a + uVar5);
      local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
      recovered_1000a9cc((long *)&local_78,(undefined1 *)&local_90);
      recovered_1000bdc8((long *)&local_78,6);
      recovered_1000bdc8((long *)&local_78,4);
      recovered_1000bdc8((long *)&local_78,0xff);
      recovered_1000bdc8((long *)&local_78,7);
      recovered_1000bdc8((long *)&local_78,4);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,8);
      recovered_1000bdc8((long *)&local_78,4);
      recovered_1000bdc8((long *)&local_78,1);
      recovered_1000bdc8((long *)&local_78,0xf);
      recovered_1000bdc8((long *)&local_78,8);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      lVar3 = local_70;
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdec((long *)&local_78,lVar3,(uint)local_70);
      recovered_1000bdc8((long *)&local_78,param_3);
      recovered_1000bdc8((long *)&local_78,param_4);
      recovered_1000bdc8((long *)&local_78,4);
      lVar3 = local_70;
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdc8((long *)&local_78,0);
      recovered_1000bdec((long *)&local_78,lVar3,(uint)local_70);
      recovered_1000bdc8((long *)&local_78,param_3);
      recovered_1000bdc8((long *)&local_78,param_4);
      recovered_1000bf04((long *)&local_90,uVar14);
      for (uVar5 = 0; uVar14 != uVar5; uVar5 = uVar5 + 1) {
        *(long *)((long)local_90 + uVar5 * 8) = local_70;
        recovered_1000bdc8((long *)&local_78,0);
      }
      recovered_1000bdc8((long *)&local_78,0);
      uVar14 = 0;
      while( true ) {
        uVar5 = (ulong)param_4;
        if (0x3f < uVar5) {
          uVar5 = 0x40;
        }
        if (uVar14 == uVar9) break;
        uVar13 = 0;
        uVar12 = uVar8;
        puVar16 = param_2;
        while( true ) {
          uVar2 = uVar12;
          if (0x3f < uVar12) {
            uVar2 = 0x40;
          }
          if (uVar13 == uVar10) break;
          recovered_1000bdec((long *)&local_78,
                             *(long *)((long)local_90 + uVar13 * 8 + uVar14 * uVar10 * 8),
                             (uint)local_70);
          puVar1 = puVar16;
          for (uVar15 = uVar5; uVar15 != 0; uVar15 = uVar15 - 1) {
            recovered_10009ea0((long *)&local_78,(long)local_78 + local_70,puVar1,puVar1 + uVar2 * 4
                              );
            puVar1 = puVar1 + uVar8 * 4;
          }
          uVar13 = uVar13 + 1;
          puVar16 = puVar16 + 0x100;
          uVar12 = (ulong)((int)uVar12 - 0x40);
        }
        uVar14 = uVar14 + 1;
        param_4 = param_4 - 0x40;
        param_2 = param_2 + uVar8 * 0x100;
      }
      puVar6 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x825U));
      if (puVar6 == (uint *)0x0) {
        uVar11 = 0;
      }
      else {
        bVar4 = recovered_100081fc(puVar6,(long)local_78,local_70);
        uVar7 = recovered_10002590((int *)puVar6);
        uVar11 = 0;
        if ((int)uVar7 == 0) {
          uVar11 = (uint)bVar4;
        }
      }
      local_88 = 0;
      recovered_10002f1c(local_90);
      local_70 = 0;
      recovered_10002f1c(local_78);
    }
    else {
      uVar11 = 0;
    }
  }
  return uVar11;
}

#undef DAT_1000c858
#undef DAT_1000c860
#undef str_1000cf4a
#undef uStack_68
#undef local_90
#undef local_88
#undef local_78
#undef local_70

#undef DAT_1000c8af
#define DAT_1000c8af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dbU)))
#undef str_1000c8a7
#define str_1000c8a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#define uStack_49 (*(undefined1 *)(frame + 23))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define local_48 (*(void * *)(frame + 24))
#define local_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000902c
 */

uint recovered_1000902c(long param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar3 = recovered_10002248(param_1,((uintptr_t)pf_module_state+0x825U));
    uVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      local_40 = 0;
      uStack_38 = 0;
      local_48 = (void *)0x0;
      recovered_10009ea0((long *)&local_48,0,str_1000c8a7,&DAT_1000c8af);
      recovered_1000c01c((long *)&local_48,param_3);
      recovered_1000c01c((long *)&local_48,param_4);
      recovered_1000c01c((long *)&local_48,1);
      recovered_1000c01c((long *)&local_48,1);
      recovered_1000c01c((long *)&local_48,0);
      recovered_1000c01c((long *)&local_48,0);
      recovered_1000c01c((long *)&local_48,param_3);
      recovered_1000c01c((long *)&local_48,param_4);
      uStack_49 = 0xff;
      recovered_1000a9cc((long *)&local_48,&uStack_49);
      iVar6 = 7;
      do {
        uStack_49 = 0;
        recovered_1000a9cc((long *)&local_48,&uStack_49);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      bVar1 = recovered_100081fc(puVar3,(long)local_48,local_40);
      if (bVar1) {
        bVar1 = recovered_100081fc(puVar3,param_2,(ulong)param_3 * (ulong)param_4 * 4);
        uVar2 = (uint)bVar1;
      }
      else {
        uVar2 = 0;
      }
      uVar4 = recovered_10002590((int *)puVar3);
      uVar5 = 0;
      if ((int)uVar4 == 0) {
        uVar5 = uVar2;
      }
      local_40 = 0;
      recovered_10002f1c(local_48);
    }
  }
  return uVar5;
}

#undef DAT_1000c8af
#undef str_1000c8a7
#undef uStack_49
#undef uStack_38
#undef local_48
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009148
 */

void recovered_10009148(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_100092b0(param_1,param_2);
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
    recovered_100092b0(param_1,param_2);
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
 * Address: 0x10009150
 */

uint recovered_10009150(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 != 0) {
    uVar1 = 0xffffffff;
    do {
      uVar1 = uVar1 + 1;
      if (0x1f < uVar1) break;
    } while ((1 << (ulong)(uVar1 & 0x1f) & param_2) == 0);
    uVar2 = 0;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 >> 1) {
      uVar2 = uVar2 + (uVar3 & 1);
    }
    uVar3 = 0xffffffff;
    if (uVar2 < 0x1f) {
      uVar3 = ~(-1 << (ulong)(uVar2 & 0x1f));
    }
    if (uVar3 != 0) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (((param_2 & param_1) >> (ulong)(uVar1 & 0x1f)) * 0xff + (uVar3 >> 1)) / uVar3;
      }
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091c4
 */

void recovered_100091c4(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_100092b0(param_1,param_2);
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
    recovered_100092b0(param_1,param_2);
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
 * Address: 0x10009248
 */

void recovered_10009248(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100092b0(param_1,param_2);
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
 * Address: 0x100092b0
 */

void recovered_100092b0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10009324(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002f1c((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009324
 */

void * recovered_10009324(ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  if (count < 2) {
    count = 1;
  }
  pvVar1 = recovered_10000bc0(count);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009330
 */

undefined8 * recovered_10009330(undefined8 *param_1,ulong in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10009248(param_1,in_x1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000935c
 */

undefined8 recovered_1000935c(byte *param_1,int param_2,uint param_3,byte *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  byte bVar3;

  if (param_2 == 8) {
    bVar3 = *param_1;
    *param_4 = bVar3;
  }
  else {
    if (param_2 - 0xfU < 2) {
      bVar1 = *param_1;
      bVar3 = param_1[1];
      sVar2 = *(short *)param_1;
      *param_4 = (byte)((((uint)(int)(char)bVar3 >> 2 & 0x1f) * 0xff) / 0x1f);
      param_4[1] = (byte)((((uint)(int)sVar2 >> 5 & 0x1f) * 0xff) / 0x1f);
      param_4[2] = (byte)(((bVar1 & 0x1f) * 0xff) / 0x1f);
      bVar3 = (char)bVar3 >> 7;
      if ((param_3 & 0xf) == 0 || param_2 != 0x10) {
        bVar3 = 0xff;
      }
      goto LAB_10009428;
    }
    if (param_2 == 0x20) {
      *param_4 = param_1[2];
      param_4[1] = param_1[1];
      param_4[2] = *param_1;
      bVar3 = param_1[3];
      goto LAB_10009428;
    }
    if (param_2 != 0x18) {
      return 0;
    }
    *param_4 = param_1[2];
    bVar3 = param_1[1];
  }
  param_4[1] = bVar3;
  param_4[2] = *param_1;
  bVar3 = 0xff;
LAB_10009428:
  param_4[3] = bVar3;
  return 1;
}


#define local_24 (*(byte (*)[4])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009434
 */

undefined8 recovered_10009434(undefined8 *param_1,byte *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar6 = *(ulong *)*param_1;
  if (uVar6 < *(ulong *)param_1[1]) {
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0xff;
    iVar1 = *(int *)param_1[2];
    if (iVar1 == 3) {
      local_24[1] = *param_2;
      local_24[0] = local_24[1];
      local_24[2] = local_24[1];
      if (*(int *)param_1[3] == 0x10) {
        local_24[3] = param_2[1];
      }
      else {
        local_24[3] = 0xff;
      }
LAB_1000953c:
      uVar3 = *(uint *)param_1[8];
      uVar4 = (ulong)uVar3;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar6 / uVar4;
      }
      uVar2 = (int)uVar6 - (uint)uVar5 * uVar3;
      if ((*(uint *)param_1[7] & 0x10) != 0) {
        uVar2 = uVar3 + ~uVar2;
      }
      if ((*(uint *)param_1[7] >> 5 & 1) == 0) {
        uVar5 = (ulong)(*(int *)param_1[9] + ~(uint)uVar5);
      }
      recovered_10000c94((void *)(*(long *)param_1[10] +
                                 ((ulong)uVar2 + uVar4 * (uVar5 & 0xffffffff)) * 4),local_24,4);
      *(long *)*param_1 = *(long *)*param_1 + 1;
      return 1;
    }
    if (iVar1 == 2) {
      uVar5 = recovered_1000935c(param_2,*(int *)param_1[3],*(uint *)param_1[7],local_24);
      if ((uVar5 & 1) != 0) goto LAB_1000953c;
    }
    else if (iVar1 == 1) {
      uVar3 = (uint)*param_2;
      if (*(int *)param_1[3] != 8) {
        uVar3 = (uint)CONCAT11(param_2[1],*param_2);
      }
      uVar2 = uVar3 - *(uint *)param_1[4];
      if ((*(uint *)param_1[4] <= uVar3) && (uVar2 < *(uint *)param_1[5])) {
        recovered_10000c94(local_24,(void *)(*(long *)param_1[6] + (ulong)uVar2 * 4),4);
        uVar6 = *(ulong *)*param_1;
        goto LAB_1000953c;
      }
    }
  }
  return 0;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a8
 */

long recovered_100095a8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009b24((undefined8 *)(param_1 + 0x540));
  recovered_10009604((long *)(param_1 + 0x528));
  recovered_10009628(param_1 + 0x4a8);
  recovered_10009628(param_1 + 0x428);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095e0
 */

void recovered_100095e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  lVar2 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + lVar2);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x80);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009604
 */

long * recovered_10009604(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000967c(param_1);
  recovered_10002f1c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009628
 */

long recovered_10009628(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0x60;
  do {
    recovered_10009658(param_1 + lVar2);
    bVar1 = lVar2 != 0;
    lVar2 = lVar2 + -0x20;
  } while (bVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009658
 */

long recovered_10009658(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x10) = 0;
  recovered_10002f1c(*(void **)(param_1 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000967c
 */

void recovered_1000967c(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x40 + -0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_1000c074((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x40;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096c4
 */

long recovered_100096c4(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 0x20) {
    recovered_10009760((undefined1 *)(param_1 + lVar1),(undefined1 *)(param_2 + lVar1));
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009710
 */

undefined8 * recovered_10009710(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002f1c((void *)*param_1);
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009760
 */

undefined1 * recovered_10009760(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    recovered_10002f1c(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097b0
 */

void recovered_100097b0(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x100097cc
 */

long * recovered_100097cc(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_100092b0(param_1,param_2[1]);
  for (uVar1 = 0; uVar1 < (ulong)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = *(undefined1 *)(*param_2 + uVar1);
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000982c
 */

long recovered_1000982c(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10009890(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009890
 */

void recovered_10009890(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10009904(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined4 *)((long)pvVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_10002f1c((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009904
 */

void * recovered_10009904(ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 4;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009914
 */

undefined1 recovered_10009914(long *param_1,long param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = *(uint *)(*param_1 + 8);
  uVar2 = *(uint *)(*param_1 + 0xc);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = (uint)(*(int *)(param_2 + 4) * param_3) / uVar1;
  }
  uVar1 = *(uint *)(param_2 + 0x1c) - 1;
  if (uVar1 <= uVar4) {
    uVar4 = uVar1;
  }
  uVar3 = *(int *)(param_2 + 0x20) - 1;
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = (uint)(*(int *)(param_2 + 8) * param_4) / uVar2;
  }
  if (uVar3 <= uVar1) {
    uVar1 = uVar3;
  }
  return *(undefined1 *)
          (*(long *)(param_2 + 0x28) + (ulong)*(uint *)(param_2 + 0x1c) * (ulong)uVar1 +
          (ulong)uVar4);
}


#define uStack_44 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000995c
 */

int recovered_1000995c(long *param_1,char *param_2,undefined4 *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;

  if (*param_2 != '\x01') {
    return 0;
  }
  uVar6 = 0;
  uVar5 = 1;
  while( true ) {
    if (uVar5 == 0x11) {
      return 0;
    }
    uStack_44 = 0;
    uVar3 = recovered_10009a98(param_1,&uStack_44);
    if ((int)uVar3 == 0) break;
    uVar6 = uStack_44 | uVar6 << 1;
    puVar1 = (undefined4 *)(*(long *)(param_2 + 8) + 8);
    for (lVar4 = *(long *)(param_2 + 0x10) * 0xc; lVar4 != 0; lVar4 = lVar4 + -0xc) {
      if ((puVar1[-1] == uVar5) && (puVar1[-2] == uVar6)) {
        *param_3 = *puVar1;
        goto LAB_100099f8;
      }
      puVar1 = puVar1 + 3;
    }
    uVar5 = uVar5 + 1;
  }
LAB_100099f8:
  iVar2 = 0;
  if (uVar5 < 0x11) {
    iVar2 = (int)uVar3;
  }
  return iVar2;
}

#undef uStack_44

#define uStack_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a10
 */

bool recovered_10009a10(long *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;

  *param_3 = 0;
  for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
    uStack_34 = 0;
    uVar1 = recovered_10009a98(param_1,&uStack_34);
    if ((int)uVar1 == 0) break;
    *param_3 = uStack_34 | *param_3 << 1;
  }
  return param_2 <= uVar2;
}

#undef uStack_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a70
 */

int recovered_10009a70(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (param_1 >> (ulong)(param_2 - 1 & 0x1f) == 0) {
    iVar2 = (-1 << (ulong)(param_2 & 0x1f)) + 1;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = iVar2 + param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a98
 */

undefined8 recovered_10009a98(long *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ulong uVar3;

  if (*(int *)((long)param_1 + 0x1c) == 0) {
    uVar3 = param_1[2];
    while( true ) {
      if ((ulong)param_1[1] <= uVar3) {
        return 0;
      }
      param_1[2] = uVar3 + 1;
      bVar1 = *(byte *)(*param_1 + uVar3);
      if (bVar1 != 0xff) break;
      if ((ulong)param_1[1] <= uVar3 + 1) {
        return 0;
      }
      param_1[2] = uVar3 + 2;
      bVar2 = *(byte *)(*param_1 + uVar3 + 1);
      if (bVar2 == 0) break;
      uVar3 = uVar3 + 2;
      if ((bVar2 & 0xf8) != 0xd0) {
        return 0;
      }
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 8;
  }
  else {
    bVar1 = *(byte *)(param_1 + 3);
  }
  *param_2 = (uint)(bVar1 >> 7);
  *(byte *)(param_1 + 3) = bVar1 << 1;
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b24
 */

undefined8 * recovered_10009b24(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10002f1c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b50
 */

int recovered_10009b50(uchar *data,ulong size,ulonglong *position,uint *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10009ca0((long)data,size,*position,out);
  if (bVar1 != 0) {
    *position = *position + 4;
  }
  return (uint)bVar1;
}


#define local_44 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b80
 */

bool recovered_10009b80(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  uVar4 = *param_3;
  if (param_4 == 4) {
    local_44 = 0;
    bVar1 = recovered_10009ca0(param_1,param_2,uVar4,&local_44);
    if (!bVar1) {
      return bVar1;
    }
    uVar4 = (ulong)local_44;
  }
  else {
    if (param_2 < uVar4 || param_2 - uVar4 < 8) {
      return false;
    }
    uVar3 = recovered_10009cdc((uint *)(param_1 + uVar4));
    uVar2 = recovered_10009cdc((uint *)(param_1 + uVar4) + 1);
    uVar4 = CONCAT44(uVar3,uVar2);
  }
  *param_5 = uVar4;
  *param_3 = *param_3 + (ulong)param_4;
  return true;
}

#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c14
 */

void recovered_10009c14(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;

  bVar2 = *(byte *)(param_2 + 3);
  if (bVar2 != 0xff) {
    if (bVar2 == 0) {
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
    }
    else if (*(byte *)(param_1 + 3) != 0) {
      uVar5 = (uint)bVar2;
      iVar3 = (uVar5 ^ 0xff) * (uint)*(byte *)(param_1 + 3);
      uVar1 = (iVar3 + 0x7fU & 0xffff) / 0xff + uVar5;
      for (lVar6 = 0; lVar6 != 3; lVar6 = lVar6 + 1) {
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (undefined1)
                  (((uVar1 >> 1) + *(byte *)(param_2 + lVar6) * uVar5 +
                   (iVar3 * (uint)*(byte *)(param_1 + lVar6) + 0x7f) / 0xff) / uVar1);
        }
        *(undefined1 *)(param_1 + lVar6) = uVar4;
      }
      *(char *)(param_1 + 3) = (char)uVar1;
      return;
    }
  }
  for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
    *(undefined1 *)(param_1 + lVar6) = *(undefined1 *)(param_2 + lVar6);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ca0
 */

bool recovered_10009ca0(long param_1,ulong param_2,ulong param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;

  uVar1 = param_2 - param_3;
  bVar2 = param_2 >= param_3;
  if (bVar2 && 3 < uVar1) {
    uVar3 = recovered_10009cdc((uint *)(param_1 + param_3));
    *param_4 = uVar3;
  }
  return (bVar2 && 2 < uVar1) && (param_2 < param_3 || uVar1 != 3);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cdc
 */

uint recovered_10009cdc(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ce8
 */

long recovered_10009ce8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10009d4c(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d4c
 */

void recovered_10009d4c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10009dc0(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined8 *)((long)pvVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10002f1c((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dc0
 */

void * recovered_10009dc0(ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 8;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dd0
 */

undefined8 * recovered_10009dd0(undefined8 *param_1,ulong in_x1,undefined1 *in_x2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_100091c4(param_1,in_x1,in_x2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dfc
 */

void recovered_10009dfc(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  param_1[1] = 0;
  if (*param_1 == 0) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = *param_1 - *param_1;
  }
  lVar3 = (long)param_3 - (long)param_2;
  if (lVar3 != 0) {
    uVar5 = param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < uVar5 + lVar3) {
      uVar2 = 4;
      if (uVar4 != 0) {
        uVar2 = uVar4;
      }
      do {
        uVar4 = uVar2;
        uVar2 = uVar4 << 1;
      } while (uVar4 < uVar5 + lVar3);
      recovered_100092b0(param_1,uVar4);
      uVar5 = param_1[1];
    }
    for (; uVar6 < uVar5; uVar5 = uVar5 - 1) {
      puVar1 = (undefined1 *)(*param_1 + (uVar5 - 1));
      puVar1[lVar3] = *puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)(*param_1 + uVar6) = *param_2;
      uVar6 = uVar6 + 1;
    }
    param_1[1] = param_1[1] + lVar3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e10
 */

long * recovered_10009e10(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10009e3c(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e3c
 */

void recovered_10009e3c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10009d4c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ea0
 */

long recovered_10009ea0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_100092b0(param_1,uVar5);
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


#undef DAT_10014318
#define DAT_10014318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c44U)))
#undef DAT_10014378
#define DAT_10014378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ca4U)))
#undef DAT_10014388
#define DAT_10014388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cb4U)))
#undef DAT_10014398
#define DAT_10014398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cc4U)))
#undef DAT_100143a8
#define DAT_100143a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cd4U)))
#undef DAT_100143b8
#define DAT_100143b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ce4U)))
#undef DAT_100143c5
#define DAT_100143c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cf1U)))
#undef UNK_10014311
#define UNK_10014311 (*(byte *)(((uintptr_t)pf_module_state + 0x7c3dU)))
#undef UNK_10014312
#define UNK_10014312 (*(byte *)(((uintptr_t)pf_module_state + 0x7c3eU)))
#undef UNK_10014320
#define UNK_10014320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c4cU)))
#undef UNK_10014328
#define UNK_10014328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c54U)))
#undef UNK_10014330
#define UNK_10014330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c5cU)))
#undef UNK_10014338
#define UNK_10014338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c64U)))
#undef UNK_10014340
#define UNK_10014340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c6cU)))
#undef UNK_10014348
#define UNK_10014348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c74U)))
#undef UNK_10014350
#define UNK_10014350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c7cU)))
#undef UNK_10014358
#define UNK_10014358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c84U)))
#undef UNK_10014360
#define UNK_10014360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c8cU)))
#undef UNK_10014365
#define UNK_10014365 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c91U)))
#undef UNK_10014368
#define UNK_10014368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c94U)))
#undef UNK_1001436d
#define UNK_1001436d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c99U)))
#undef UNK_10014380
#define UNK_10014380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cacU)))
#undef UNK_10014390
#define UNK_10014390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cbcU)))
#undef UNK_100143a0
#define UNK_100143a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cccU)))
#undef UNK_100143b0
#define UNK_100143b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cdcU)))
#undef UNK_100143c0
#define UNK_100143c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cecU)))
#undef UNK_100143c8
#define UNK_100143c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cf4U)))
#undef UNK_100143cd
#define UNK_100143cd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cf9U)))
#undef _DAT_10014318
#define _DAT_10014318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c44U)))
#undef _DAT_10014378
#define _DAT_10014378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ca4U)))
#undef _DAT_10014388
#define _DAT_10014388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cb4U)))
#undef _DAT_10014398
#define _DAT_10014398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cc4U)))
#undef _DAT_100143a8
#define _DAT_100143a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cd4U)))
#undef _DAT_100143b8
#define _DAT_100143b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ce4U)))
#undef _DAT_100143c5
#define _DAT_100143c5 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cf1U)))
#undef bRam0000000010014311
#define bRam0000000010014311 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c3dU)))
#undef bRam0000000010014312
#define bRam0000000010014312 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c3eU)))
#undef uRam0000000010014320
#define uRam0000000010014320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c4cU)))
#undef uRam0000000010014328
#define uRam0000000010014328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c54U)))
#undef uRam0000000010014330
#define uRam0000000010014330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c5cU)))
#undef uRam0000000010014338
#define uRam0000000010014338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c64U)))
#undef uRam0000000010014340
#define uRam0000000010014340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c6cU)))
#undef uRam0000000010014348
#define uRam0000000010014348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c74U)))
#undef uRam0000000010014350
#define uRam0000000010014350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c7cU)))
#undef uRam0000000010014358
#define uRam0000000010014358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c84U)))
#undef uRam0000000010014360
#define uRam0000000010014360 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7c8cU)))->pf_payload_bits
#undef uRam0000000010014365
#define uRam0000000010014365 ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x7c91U)))->pf_payload_bits
#undef uRam0000000010014368
#define uRam0000000010014368 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7c94U)))->pf_payload_bits
#undef uRam000000001001436d
#define uRam000000001001436d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c99U)))
#undef uRam0000000010014380
#define uRam0000000010014380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cacU)))
#undef uRam0000000010014390
#define uRam0000000010014390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cbcU)))
#undef uRam00000000100143a0
#define uRam00000000100143a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cccU)))
#undef uRam00000000100143b0
#define uRam00000000100143b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cdcU)))
#undef uRam00000000100143c0
#define uRam00000000100143c0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7cecU)))->pf_payload_bits
#undef uRam00000000100143c8
#define uRam00000000100143c8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7cf4U)))->pf_payload_bits
#undef uRam00000000100143cd
#define uRam00000000100143cd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cf9U)))
#define uStack_78 (*(undefined8 *)(frame + 568))
#define uStack_298 (*(undefined8 *)(frame + 24))
#define uStack_290 (*(undefined8 *)(frame + 32))
#define uStack_288 (*(undefined8 *)(frame + 40))
#define uStack_280 (*(undefined8 *)(frame + 48))
#define uStack_278 (*(undefined8 *)(frame + 56))
#define uStack_270 (*(undefined8 *)(frame + 64))
#define uStack_268 (*(undefined8 *)(frame + 72))
#define pvStack_260 (*(void * *)(frame + 80))
#define uStack_258 (*(undefined5 *)(frame + 88))
#define uStack_253 (*(undefined3 *)(frame + 93))
#define uStack_250 (*(undefined5 *)(frame + 96))
#define uStack_24b (*(undefined8 *)(frame + 101))
#define uStack_238 (*(undefined8 *)(frame + 120))
#define uStack_230 (*(undefined8 *)(frame + 128))
#define uStack_228 (*(undefined8 *)(frame + 136))
#define uStack_220 (*(undefined8 *)(frame + 144))
#define uStack_218 (*(undefined8 *)(frame + 152))
#define uStack_210 (*(undefined8 *)(frame + 160))
#define uStack_208 (*(undefined8 *)(frame + 168))
#define pvStack_200 (*(void * *)(frame + 176))
#define uStack_1f8 (*(undefined5 *)(frame + 184))
#define uStack_1f3 (*(undefined3 *)(frame + 189))
#define uStack_1f0 (*(undefined5 *)(frame + 192))
#define uStack_1eb (*(undefined8 *)(frame + 197))
#define lStack_1d0 (*(long *)(frame + 224))
#define uStack_1a8 (*(undefined8 *)(frame + 264))
#define uStack_1a0 (*(undefined8 *)(frame + 272))
#define uStack_198 (*(undefined8 *)(frame + 280))
#define uStack_190 (*(undefined8 *)(frame + 288))
#define uStack_188 (*(undefined8 *)(frame + 296))
#define uStack_180 (*(undefined8 *)(frame + 304))
#define uStack_178 (*(undefined8 *)(frame + 312))
#define pvStack_170 (*(void * *)(frame + 320))
#define uStack_168 (*(undefined5 *)(frame + 328))
#define uStack_163 (*(undefined3 *)(frame + 333))
#define uStack_160 (*(undefined5 *)(frame + 336))
#define uStack_15b (*(undefined8 *)(frame + 341))
#define uStack_148 (*(undefined8 *)(frame + 360))
#define lStack_140 (*(long *)(frame + 368))
#define uStack_130 (*(uint *)(frame + 384))
#define uStack_12c (*(undefined4 *)(frame + 388))
#define uStack_128 (*(undefined8 *)(frame + 392))
#define puStack_118 (*(undefined4 * *)(frame + 408))
#define uStack_110 (*(ulong *)(frame + 416))
#define uStack_108 (*(undefined8 *)(frame + 424))
#define uStack_f8 (*(undefined8 *)(frame + 440))
#define uStack_f0 (*(undefined8 *)(frame + 448))
#define uStack_e8 (*(undefined8 *)(frame + 456))
#define local_2a0 (*(ulong *)(frame + 16))
#define uStack_e0 (*(undefined8 *)(frame + 464))
#define local_240 (*(ulong *)(frame + 112))
#define uStack_d8 (*(undefined8 *)(frame + 472))
#define local_1e0 (*(undefined8 *)(frame + 208))
#define uStack_d0 (*(undefined8 *)(frame + 480))
#define local_1d8 (*(byte * *)(frame + 216))
#define uStack_c8 (*(undefined8 *)(frame + 488))
#define local_1c8 (*(long *)(frame + 232))
#define pvStack_c0 (*(void * *)(frame + 496))
#define local_1c0 (*(ulong *)(frame + 240))
#define uStack_b8 (*(undefined5 *)(frame + 504))
#define local_1b8 (*(uint *)(frame + 248))
#define uStack_b3 (*(undefined3 *)(frame + 509))
#define local_1b0 (*(undefined8 *)(frame + 256))
#define uStack_b0 (*(undefined5 *)(frame + 512))
#define local_100 (*(void * *)(frame + 432))
#define uStack_ab (*(undefined8 *)(frame + 517))
#define uStack_98 (*(uint *)(frame + 536))
#define uStack_94 (*(undefined4 *)(frame + 540))
#define uStack_90 (*(undefined8 *)(frame + 544))
#define uStack_7c (*(uint *)(frame + 564))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f98
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009f98(long *param_1,long *param_2)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *pointer;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;

  param_2[1] = 0;
  lStack_1d0 = param_1[1] - 6;
  if (5 < (ulong)param_1[1]) {
    local_1d8 = (byte *)*param_1;
    if (((*local_1d8 & 0xf) == 8) &&
       ((local_1d8[1] & 0x20) == 0 && (uint)CONCAT11(*local_1d8,local_1d8[1]) % 0x1f == 0)) {
      local_1d8 = local_1d8 + 2;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      do {
        local_1e0 = 0;
        uVar7 = recovered_1000a75c((long *)&local_1d8,1,(uint *)((long)&local_1e0 + 4));
        if ((int)uVar7 == 0) {
          return false;
        }
        uVar7 = recovered_1000a75c((long *)&local_1d8,2,(uint *)&local_1e0);
        if ((int)uVar7 == 0) {
          return false;
        }
        iVar4 = PF_PART4(local_1e0, 4);
        if ((uint)local_1e0 == 2) {
          uStack_1eb = 0;
          uStack_1f0 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          pvStack_200 = (void *)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          local_240 = 0;
          uStack_24b = 0;
          uStack_250 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_253 = 0;
          pvStack_260 = (void *)0x0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_298 = 0;
          local_2a0 = 0;
          uStack_78 = 0;
          uStack_7c = 0;
          uVar7 = recovered_1000a75c((long *)&local_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar7 == 0) ||
              (uVar7 = recovered_1000a75c((long *)&local_1d8,5,(uint *)&uStack_78), (int)uVar7 == 0)
              ) || (uVar7 = recovered_1000a75c((long *)&local_1d8,4,&uStack_7c), (int)uVar7 == 0)) {
            iVar10 = 1;
          }
          else {
            uVar8 = uStack_78 & 0xffffffff;
            uVar12 = uStack_78 >> 0x20;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            recovered_1000acfc((long *)&uStack_98,0x13,(undefined4 *)&local_100);
            lVar11 = uVar12 + 0x101;
            pointer = (void *)CONCAT44(uStack_94,uStack_98);
            puVar2 = (uint *)((uintptr_t)pf_module_state+0x4b4U);
            for (uVar12 = (ulong)(uStack_7c + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
              local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
              uVar7 = recovered_1000a75c((long *)&local_1d8,3,(uint *)&local_100);
              if ((int)uVar7 == 0) {
                uStack_90 = 0;
                recovered_10002f1c(pointer);
                iVar10 = 1;
                goto LAB_1000a3d4;
              }
              *(uint *)((long)pointer + (ulong)*puVar2 * 4) = (uint)local_100;
              puVar2 = puVar2 + 1;
            }
            uStack_ab = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_b3 = 0;
            pvStack_c0 = (void *)0x0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            local_100 = (void *)0x0;
            uVar12 = recovered_1000ab98((long *)&uStack_98,(uint *)&local_100,0);
            if ((uVar12 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar8 = uVar8 + 1 + lVar11;
              puStack_118 = (undefined4 *)0x0;
              recovered_10009890((long *)&puStack_118,uVar8);
              do {
                uVar12 = uStack_110;
                if (uVar8 <= uStack_110) {
                  recovered_1000b074((long *)&uStack_130,puStack_118,puStack_118 + lVar11);
                  recovered_1000b074(&uStack_148,puStack_118 + lVar11,puStack_118 + uStack_110);
                  uVar8 = recovered_1000ab98((long *)&uStack_130,(uint *)&local_240,0);
                  if ((uVar8 & 1) == 0) {
                    uVar8 = 0;
                  }
                  else {
                    bVar1 = false;
                    piVar3 = (int *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148);
                    for (lVar11 = lStack_140 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
                      bVar1 = (bool)(bVar1 | *piVar3 != 0);
                      piVar3 = piVar3 + 1;
                    }
                    if (bVar1) {
                      uVar8 = recovered_1000ab98(&uStack_148,(uint *)&local_2a0,1);
                    }
                    else {
                      uStack_15b = 0;
                      uStack_160 = 0;
                      uStack_178 = 0;
                      uStack_180 = 0;
                      uStack_168 = 0;
                      uStack_163 = 0;
                      pvStack_170 = (void *)0x0;
                      uStack_198 = 0;
                      uStack_1a0 = 0;
                      uStack_188 = 0;
                      uStack_190 = 0;
                      uStack_1a8 = 0;
                      local_1b0 = 0;
                      recovered_1000ae0c(&local_2a0,&local_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_10002f1c(pvStack_170);
                      uVar8 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_10002f1c((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_1000a4f4;
                }
                local_1b0 = local_1b0 & 0xffffffff00000000;
                uVar5 = recovered_1000aa34((long *)&local_1d8,(long)&local_100,(uint *)&local_1b0);
                if ((uVar5 & 1) == 0) break;
                if ((uint)local_1b0 < 0x10) {
                  recovered_1000b010((long *)&puStack_118,(undefined4 *)&local_1b0);
LAB_1000a2bc:
                  iVar10 = 5;
                  goto LAB_1000a3ac;
                }
                if ((uint)local_1b0 == 0x12) {
                  uStack_130 = 0;
                  uVar7 = recovered_1000a75c((long *)&local_1d8,7,&uStack_130);
                  if ((int)uVar7 == 0) goto LAB_1000a3a8;
                  uVar5 = uStack_130 + 0xb;
                  for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar8; uVar6 = uVar6 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_1000982c((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar12 = uStack_110;
                  }
                  goto LAB_1000a2bc;
                }
                if ((uint)local_1b0 == 0x11) {
                  uStack_130 = 0;
                  uVar7 = recovered_1000a75c((long *)&local_1d8,3,&uStack_130);
                  if ((int)uVar7 == 0) goto LAB_1000a3a8;
                  uVar5 = uStack_130 + 3;
                  for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar8; uVar6 = uVar6 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_1000982c((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar12 = uStack_110;
                  }
                  goto LAB_1000a2bc;
                }
                if (((uint)local_1b0 != 0x10) || (uVar12 == 0)) break;
                uStack_130 = 0;
                uVar7 = recovered_1000a75c((long *)&local_1d8,2,&uStack_130);
                if ((int)uVar7 != 0) {
                  uVar5 = uStack_130 + 3;
                  PF_PART4(uStack_148, 0) = puStack_118[uVar12 - 1];
                  for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar8; uVar6 = uVar6 + 1) {
                    recovered_1000b010((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar12 = uStack_110;
                  }
                  goto LAB_1000a2bc;
                }
LAB_1000a3a8:
                iVar10 = 1;
LAB_1000a3ac:
              } while (iVar10 == 5);
              uVar8 = 0;
LAB_1000a4f4:
              uStack_110 = 0;
              recovered_10002f1c(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_10002f1c(pvStack_c0);
            uStack_90 = 0;
            recovered_10002f1c((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar8 & 1) == 0) {
              iVar10 = 1;
            }
            else {
              uVar7 = recovered_1000a7d8((long *)&local_1d8,(long)&local_240,(long)&local_2a0,
                                         param_2);
              iVar10 = 3;
              if ((int)uVar7 == 0) {
                iVar10 = 1;
              }
            }
          }
LAB_1000a3d4:
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_10002f1c(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_10002f1c(pvStack_200);
LAB_1000a3e4:
          if (iVar10 != 3) {
            return false;
          }
        }
        else {
          if ((uint)local_1e0 != 1) {
            if ((uint)local_1e0 != 0) {
              return false;
            }
            local_1c0 = local_1c0 >> (local_1b8 & 7);
            local_1b8 = local_1b8 & 0xfffffff8;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            local_1b0 = (ulong)PF_PART4(local_1b0, 4) << 0x20;
            local_240 = local_240 & 0xffffffff00000000;
            local_2a0 = local_2a0 & 0xffffffff00000000;
            uVar7 = recovered_1000a75c((long *)&local_1d8,8,(uint *)&local_100);
            if ((((int)uVar7 != 0) &&
                (uVar7 = recovered_1000a75c((long *)&local_1d8,8,(uint *)&local_1b0),
                (int)uVar7 != 0)) &&
               ((uVar7 = recovered_1000a75c((long *)&local_1d8,8,(uint *)&local_240),
                (int)uVar7 != 0 &&
                (uVar7 = recovered_1000a75c((long *)&local_1d8,8,(uint *)&local_2a0),
                (int)uVar7 != 0)))) {
              uVar5 = (uint)local_100 | (uint)local_1b0 << 8;
              if ((((uint)local_240 | (int)local_2a0 << 8) ^ uVar5) == 0xffff) {
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                  uStack_98 = 0;
                  uVar7 = recovered_1000a75c((long *)&local_1d8,8,&uStack_98);
                  if ((int)uVar7 == 0) goto LAB_1000a3c8;
                  puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                  recovered_1000a9cc(param_2,(undefined1 *)&puStack_118);
                }
                iVar10 = 3;
                goto LAB_1000a3e4;
              }
            }
LAB_1000a3c8:
            iVar10 = 1;
            goto LAB_1000a3e4;
          }
          if ((bRam0000000010014311 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),8);
            recovered_1000acfc((long *)&local_100,0x120,(undefined4 *)&local_1b0);
            for (lVar11 = 0; lVar11 != 0x1c0; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x240) = 9;
            }
            for (lVar11 = 0; lVar11 != 0x60; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x400) = 7;
            }
            for (lVar11 = 0; lVar11 != 0x20; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x460) = 8;
            }
            uRam000000001001436d = 0;
            uRam0000000010014368 = 0;
            uRam0000000010014350 = 0;
            uRam0000000010014348 = 0;
            uRam0000000010014360 = 0;
            uRam0000000010014365 = 0;
            uRam0000000010014358 = 0;
            uRam0000000010014330 = 0;
            uRam0000000010014328 = 0;
            uRam0000000010014340 = 0;
            uRam0000000010014338 = 0;
            uRam0000000010014320 = 0;
            _DAT_10014318 = 0;
            recovered_1000ab98((long *)&local_100,(uint *)&DAT_10014318,0);
            uStack_f8 = 0;
            recovered_10002f1c(local_100);
            recovered_10002f7c();
            bRam0000000010014311 = 1;
          }
          if ((bRam0000000010014312 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),5);
            plVar9 = recovered_1000acfc((long *)&local_100,0x20,(undefined4 *)&local_1b0);
            uRam0000000010014380 = 0;
            _DAT_10014378 = 0;
            uRam0000000010014390 = 0;
            _DAT_10014388 = 0;
            uRam00000000100143a0 = 0;
            _DAT_10014398 = 0;
            uRam00000000100143b0 = 0;
            _DAT_100143a8 = 0;
            uRam00000000100143c0 = 0;
            _DAT_100143b8 = 0;
            uRam00000000100143cd = 0;
            _DAT_100143c5 = 0;
            uRam00000000100143c8 = 0;
            recovered_1000ab98(plVar9,(uint *)&DAT_10014378,0);
            uStack_f8 = 0;
            recovered_10002f1c(local_100);
            recovered_10002f7c();
            bRam0000000010014312 = 1;
          }
          uVar8 = recovered_1000a7d8((long *)&local_1d8,((uintptr_t)pf_module_state+0x7c44U),((uintptr_t)pf_module_state+0x7ca4U),param_2);
          if ((uVar8 & 1) == 0) {
            return false;
          }
        }
      } while (iVar4 == 0);
      if (local_1c8 == lStack_1d0 && local_1b8 < 8) {
        uVar5 = recovered_10009cdc((uint *)(*param_1 + param_1[1] + -4));
        uVar6 = recovered_1000a968(*param_2,param_2[1]);
        return uVar6 == uVar5;
      }
    }
  }
  return false;
}

#undef DAT_10014318
#undef DAT_10014378
#undef DAT_10014388
#undef DAT_10014398
#undef DAT_100143a8
#undef DAT_100143b8
#undef DAT_100143c5
#undef UNK_10014311
#undef UNK_10014312
#undef UNK_10014320
#undef UNK_10014328
#undef UNK_10014330
#undef UNK_10014338
#undef UNK_10014340
#undef UNK_10014348
#undef UNK_10014350
#undef UNK_10014358
#undef UNK_10014360
#undef UNK_10014365
#undef UNK_10014368
#undef UNK_1001436d
#undef UNK_10014380
#undef UNK_10014390
#undef UNK_100143a0
#undef UNK_100143b0
#undef UNK_100143c0
#undef UNK_100143c8
#undef UNK_100143cd
#undef _DAT_10014318
#undef _DAT_10014378
#undef _DAT_10014388
#undef _DAT_10014398
#undef _DAT_100143a8
#undef _DAT_100143b8
#undef _DAT_100143c5
#undef bRam0000000010014311
#undef bRam0000000010014312
#undef uRam0000000010014320
#undef uRam0000000010014328
#undef uRam0000000010014330
#undef uRam0000000010014338
#undef uRam0000000010014340
#undef uRam0000000010014348
#undef uRam0000000010014350
#undef uRam0000000010014358
#undef uRam0000000010014360
#undef uRam0000000010014365
#undef uRam0000000010014368
#undef uRam000000001001436d
#undef uRam0000000010014380
#undef uRam0000000010014390
#undef uRam00000000100143a0
#undef uRam00000000100143b0
#undef uRam00000000100143c0
#undef uRam00000000100143c8
#undef uRam00000000100143cd
#undef uStack_78
#undef uStack_298
#undef uStack_290
#undef uStack_288
#undef uStack_280
#undef uStack_278
#undef uStack_270
#undef uStack_268
#undef pvStack_260
#undef uStack_258
#undef uStack_253
#undef uStack_250
#undef uStack_24b
#undef uStack_238
#undef uStack_230
#undef uStack_228
#undef uStack_220
#undef uStack_218
#undef uStack_210
#undef uStack_208
#undef pvStack_200
#undef uStack_1f8
#undef uStack_1f3
#undef uStack_1f0
#undef uStack_1eb
#undef lStack_1d0
#undef uStack_1a8
#undef uStack_1a0
#undef uStack_198
#undef uStack_190
#undef uStack_188
#undef uStack_180
#undef uStack_178
#undef pvStack_170
#undef uStack_168
#undef uStack_163
#undef uStack_160
#undef uStack_15b
#undef uStack_148
#undef lStack_140
#undef uStack_130
#undef uStack_12c
#undef uStack_128
#undef puStack_118
#undef uStack_110
#undef uStack_108
#undef uStack_f8
#undef uStack_f0
#undef uStack_e8
#undef local_2a0
#undef uStack_e0
#undef local_240
#undef uStack_d8
#undef local_1e0
#undef uStack_d0
#undef local_1d8
#undef uStack_c8
#undef local_1c8
#undef pvStack_c0
#undef local_1c0
#undef uStack_b8
#undef local_1b8
#undef uStack_b3
#undef local_1b0
#undef uStack_b0
#undef local_100
#undef uStack_ab
#undef uStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a75c
 */

undefined8 recovered_1000a75c(long *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  if (param_2 < 0x19) {
    uVar1 = *(uint *)(param_1 + 4);
    while( true ) {
      if (param_2 <= uVar1) {
        uVar2 = param_1[3];
        *param_3 = (uint)uVar2 & ((uint)(-1L << ((ulong)param_2 & 0x3f)) ^ 0xffffffff);
        param_1[3] = uVar2 >> ((ulong)param_2 & 0x3f);
        *(uint *)(param_1 + 4) = (int)param_1[4] - param_2;
        return 1;
      }
      uVar2 = param_1[2];
      if ((ulong)param_1[1] <= uVar2) break;
      param_1[2] = uVar2 + 1;
      param_1[3] = (ulong)*(byte *)(*param_1 + uVar2) << ((ulong)uVar1 & 0x3f) | param_1[3];
      uVar1 = uVar1 + 8;
      *(uint *)(param_1 + 4) = uVar1;
    }
  }
  return 0;
}


#define local_68 (*(uint *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 20))
#define local_64 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7d8
 */

undefined8 recovered_1000a7d8(long *param_1,long param_2,long param_3,long *param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;

  while( true ) {
    while( true ) {
      local_64 = 0;
      uVar2 = recovered_1000aa34(param_1,param_2,&local_64);
      if (uVar2 == 0) {
        return 0;
      }
      if (0xff < local_64) break;
      local_68 = CONCAT31(PF_PART3(local_68, 1),(char)local_64);
      recovered_1000a9cc(param_4,(undefined1 *)&local_68);
    }
    if (local_64 == 0x100) {
      return 1;
    }
    if (0x11d < local_64) {
      return 0;
    }
    iVar4 = *(int *)((ulong)(local_64 - 0x101) * 4 + ((uintptr_t)pf_module_state+0x2dcU));
    uVar2 = *(uint *)((ulong)(local_64 - 0x101) * 4 + ((uintptr_t)pf_module_state+0x350U));
    if (uVar2 != 0) {
      local_68 = 0;
      uVar3 = recovered_1000a75c(param_1,uVar2,&local_68);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      iVar4 = local_68 + iVar4;
    }
    local_68 = 0;
    uVar2 = recovered_1000aa34(param_1,param_3,&local_68);
    if (uVar2 == 0) break;
    if (0x1d < local_68) {
      return 0;
    }
    uVar2 = *(uint *)((ulong)local_68 * 4 + ((uintptr_t)pf_module_state+0x3c4U));
    uVar1 = *(uint *)((ulong)local_68 * 4 + ((uintptr_t)pf_module_state+0x43cU));
    if (uVar1 != 0) {
      uStack_6c = 0;
      uVar3 = recovered_1000a75c(param_1,uVar1,&uStack_6c);
      if ((int)uVar3 == 0) {
        return 0;
      }
      uVar2 = uStack_6c + uVar2;
    }
    if (uVar2 == 0) {
      return 0;
    }
    if ((ulong)param_4[1] < (ulong)uVar2) {
      return 0;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      recovered_1000ab30(param_4,(undefined1 *)(*param_4 + (param_4[1] - (ulong)uVar2)));
    }
  }
  return 0;
}

#undef local_68
#undef uStack_6c
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a948
 */

long recovered_1000a948(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000b1b4((undefined8 *)(param_1 + 0x40));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a968
 */

uint recovered_1000a968(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar3 = 0;
  uVar4 = 1;
  for (uVar5 = 0; uVar1 = param_2 - uVar5, uVar5 <= param_2 && uVar1 != 0; uVar5 = uVar1 + uVar5) {
    if (0x15af < uVar1) {
      uVar1 = 0x15b0;
    }
    pbVar2 = (byte *)(param_1 + uVar5);
    for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar4 = uVar4 + *pbVar2;
      uVar3 = uVar4 + uVar3;
      pbVar2 = pbVar2 + 1;
    }
    uVar4 = uVar4 % 0xfff1;
    uVar3 = uVar3 % 0xfff1;
  }
  return uVar4 | uVar3 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9cc
 */

long recovered_1000a9cc(long *param_1,undefined1 *param_2)

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
    recovered_100092b0(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define local_54 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa34
 */

uint recovered_1000aa34(long *param_1,long param_2,uint *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;

  if (*(char *)(param_2 + 0x5c) != '\x01') {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 0x58);
  if (uVar5 == 0) {
    local_54 = 0;
  }
  else {
    iVar7 = 0;
    lVar6 = 0;
    uVar8 = 0;
    local_54 = 1;
    for (uVar4 = 1; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
      local_54 = 0;
      uVar3 = recovered_1000a75c(param_1,1,&local_54);
      if ((int)uVar3 == 0) {
LAB_1000ab04:
        local_54 = 0;
        break;
      }
      local_54 = local_54 | uVar8;
      uVar2 = *(uint *)(param_2 + (ulong)uVar4 * 4);
      uVar8 = uVar2 + iVar7;
      if (local_54 < uVar8) {
        uVar1 = lVar6 + (ulong)(local_54 - iVar7);
        if (*(ulong *)(param_2 + 0x48) <= uVar1) goto LAB_1000ab04;
        *param_3 = (uint)*(ushort *)(*(long *)(param_2 + 0x40) + uVar1 * 2);
        local_54 = 1;
        break;
      }
      lVar6 = lVar6 + (ulong)uVar2;
      iVar7 = uVar8 * 2;
      uVar8 = local_54 << 1;
      uVar5 = *(uint *)(param_2 + 0x58);
    }
    local_54 = uVar4 <= uVar5 & local_54;
  }
  return local_54;
}

#undef local_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab30
 */

long recovered_1000ab30(long *param_1,undefined1 *param_2)

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
    recovered_100092b0(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define auStack_90 (*(ulong (*)[8])(frame + 80))
#define auStack_d0 (*(uint (*)[16])(frame + 16))
#define uStack_48 (*(undefined5 *)(frame + 152))
#define pvStack_50 (*(void * *)(frame + 144))
#define uStack_40 (*(undefined5 *)(frame + 160))
#define uStack_43 (*(undefined3 *)(frame + 157))
#define uStack_3b (*(undefined8 *)(frame + 165))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab98
 */

undefined8 recovered_1000ab98(long *param_1,uint *param_2,undefined8 param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;

  uStack_3b = 0;
  uStack_40 = 0;
  auStack_90[7] = 0;
  auStack_90[6] = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  pvStack_50 = (void *)0x0;
  auStack_90[3] = 0;
  auStack_90[2] = 0;
  auStack_90[5] = 0;
  auStack_90[4] = 0;
  auStack_90[1] = 0;
  auStack_90[0] = 0;
  recovered_1000ae0c((undefined8 *)param_2,auStack_90);
  uStack_48 = 0;
  uStack_43 = 0;
  recovered_10002f1c(pvStack_50);
  puVar2 = (uint *)*param_1;
  uVar3 = param_1[1];
  for (lVar7 = uVar3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    uVar5 = *puVar2;
    if (0xf < uVar5) goto LAB_1000ac50;
    param_2[uVar5] = param_2[uVar5] + 1;
    uVar4 = param_2[0x16];
    if (param_2[0x16] <= uVar5) {
      uVar4 = uVar5;
    }
    param_2[0x16] = uVar4;
    puVar2 = puVar2 + 1;
  }
  if (uVar3 == *param_2) {
LAB_1000ace0:
    *(char *)(param_2 + 0x17) = (char)param_3;
  }
  else {
    iVar6 = 1;
    lVar7 = 4;
    do {
      if (lVar7 == 0x40) {
        uVar5 = 0;
        auStack_d0[10] = 0;
        auStack_d0[0xb] = 0;
        auStack_d0[8] = 0;
        auStack_d0[9] = 0;
        auStack_d0[0xe] = 0;
        auStack_d0[0xf] = 0;
        auStack_d0[0xc] = 0;
        auStack_d0[0xd] = 0;
        auStack_d0[2] = 0;
        auStack_d0[3] = 0;
        auStack_d0[0] = 0;
        auStack_d0[1] = 0;
        auStack_d0[6] = 0;
        auStack_d0[7] = 0;
        auStack_d0[4] = 0;
        auStack_d0[5] = 0;
        for (lVar7 = 4; lVar7 != 0x40; lVar7 = lVar7 + 4) {
          *(uint *)((long)auStack_d0 + lVar7) = uVar5;
          uVar5 = *(int *)((long)param_2 + lVar7) + uVar5;
        }
        auStack_90[0] = auStack_90[0] & 0xffffffffffff0000;
        recovered_1000ae50((long *)(param_2 + 0x10),(ulong)uVar5,(undefined2 *)auStack_90);
        lVar7 = *param_1;
        uVar3 = param_1[1];
        lVar8 = *(long *)(param_2 + 0x10);
        for (uVar9 = 0; uVar9 < uVar3; uVar9 = (ulong)((int)uVar9 + 1)) {
          uVar5 = *(uint *)(lVar7 + uVar9 * 4);
          if (uVar5 != 0) {
            uVar4 = auStack_d0[uVar5];
            auStack_d0[uVar5] = uVar4 + 1;
            *(short *)(lVar8 + (ulong)uVar4 * 2) = (short)uVar9;
          }
        }
        param_3 = 1;
        goto LAB_1000ace0;
      }
      piVar1 = (int *)((long)param_2 + lVar7);
      lVar7 = lVar7 + 4;
      iVar6 = iVar6 * 2 - *piVar1;
    } while (-1 < iVar6);
LAB_1000ac50:
    param_3 = 0;
  }
  return param_3;
}

#undef auStack_90
#undef auStack_d0
#undef uStack_48
#undef pvStack_50
#undef uStack_40
#undef uStack_43
#undef uStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000acfc
 */

long * recovered_1000acfc(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000ad28(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad28
 */

void recovered_1000ad28(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10009890(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10009890(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ada8
 */

void recovered_1000ada8(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10009890(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae0c
 */

undefined8 * recovered_1000ae0c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;

  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar6 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  recovered_1000ae58(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae50
 */

void recovered_1000ae50(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_1000af8c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000af8c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae58
 */

undefined8 * recovered_1000ae58(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002f1c((void *)*param_1);
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aea8
 */

void recovered_1000aea8(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_1000af8c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000af8c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af28
 */

void recovered_1000af28(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000af8c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af8c
 */

void recovered_1000af8c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000b000(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)((long)pvVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_10002f1c((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b000
 */

void * recovered_1000b000(ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 2;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b010
 */

long recovered_1000b010(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10009890(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b074
 */

long * recovered_1000b074(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000b0ac(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0ac
 */

long recovered_1000b0ac(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  lVar3 = *param_1;
  if (lVar3 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - lVar3 >> 2;
  }
  if (3 < (ulong)((long)param_4 - (long)param_3)) {
    uVar8 = (ulong)((long)param_4 - (long)param_3) >> 2;
    uVar5 = param_1[1];
    uVar4 = param_1[2];
    uVar6 = uVar5;
    if (uVar4 < uVar5 + uVar8) {
      uVar6 = 4;
      if (uVar4 != 0) {
        uVar6 = uVar4;
      }
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 << 1;
      } while (uVar4 < uVar5 + uVar8);
      recovered_10009890(param_1,uVar4);
      uVar5 = param_1[1];
      uVar6 = uVar5;
    }
    while (uVar7 < uVar5) {
      puVar1 = (undefined4 *)(*param_1 + (uVar5 - 1) * 4);
      puVar1[uVar8] = *puVar1;
      uVar5 = uVar5 - 1;
    }
    lVar3 = uVar7 << 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined4 *)(*param_1 + lVar3) = *param_3;
      lVar3 = lVar3 + 4;
    }
    param_1[1] = uVar6 + uVar8;
    lVar3 = *param_1;
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + uVar7 * 4;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1b4
 */

undefined8 * recovered_1000b1b4(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10002f1c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1e0
 */

undefined8 * recovered_1000b1e0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10002f1c((void *)*param_1);
  return param_1;
}


#undef DAT_10014313
#define DAT_10014313 (*(byte *)(((uintptr_t)pf_module_state + 0x7c3fU)))
#undef DAT_100147d8
#define DAT_100147d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8104U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b204
 */

uint recovered_1000b204(uint param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;

  if ((DAT_10014313 & 1) == 0) {
    for (uVar2 = 0; uVar2 != 0x100; uVar2 = uVar2 + 1) {
      iVar3 = 8;
      uVar4 = uVar2;
      do {
        uVar1 = (uint)(uVar4 >> 1) & 0x7fffffff;
        if ((uVar4 & 1) != 0) {
          uVar1 = (uint)uVar4 >> 1 ^ 0xedb88320;
        }
        uVar4 = (ulong)uVar1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      (&DAT_100147d8)[uVar2] = uVar1;
    }
    DAT_10014313 = 1;
  }
  uVar1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = (&DAT_100147d8)[(byte)(*param_2 ^ (byte)uVar1)] ^ uVar1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}

#undef DAT_10014313
#undef DAT_100147d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b294
 */

void recovered_1000b294(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_1000b340(param_1,uVar1);
    lVar3 = param_1[1];
  }
  uVar4 = *param_2;
  puVar2 = (undefined8 *)(*param_1 + lVar3 * 0x10);
  puVar2[1] = param_2[1];
  *puVar2 = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2f4
 */

void recovered_1000b2f4(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_1000b1e0((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b340
 */

void recovered_1000b340(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002ee8(param_2 << 4);
    lVar2 = 0;
    uVar4 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar5 = *(undefined8 *)(*param_1 + lVar2);
      ((undefined8 *)((long)pvVar1 + lVar2))[1] = ((undefined8 *)(*param_1 + lVar2))[1];
      *(undefined8 *)((long)pvVar1 + lVar2) = uVar5;
      lVar2 = lVar2 + 0x10;
    }
    recovered_10002f1c((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


#undef DAT_1000ccf8
#define DAT_1000ccf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x624U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3b8
 */

int recovered_1000b3b8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 < 7) && ((0x5dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(int *)(param_1 + 8) * *(int *)(&DAT_1000ccf8 + (ulong)uVar1 * 4);
  }
  return 0;
}

#undef DAT_1000ccf8

#undef DAT_10014318
#define DAT_10014318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c44U)))
#undef DAT_10014378
#define DAT_10014378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ca4U)))
#undef DAT_10014388
#define DAT_10014388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cb4U)))
#undef DAT_10014398
#define DAT_10014398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cc4U)))
#undef DAT_100143a8
#define DAT_100143a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cd4U)))
#undef DAT_100143b8
#define DAT_100143b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ce4U)))
#undef DAT_100143c5
#define DAT_100143c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cf1U)))
#undef UNK_10014311
#define UNK_10014311 (*(byte *)(((uintptr_t)pf_module_state + 0x7c3dU)))
#undef UNK_10014312
#define UNK_10014312 (*(byte *)(((uintptr_t)pf_module_state + 0x7c3eU)))
#undef UNK_10014320
#define UNK_10014320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c4cU)))
#undef UNK_10014328
#define UNK_10014328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c54U)))
#undef UNK_10014330
#define UNK_10014330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c5cU)))
#undef UNK_10014338
#define UNK_10014338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c64U)))
#undef UNK_10014340
#define UNK_10014340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c6cU)))
#undef UNK_10014348
#define UNK_10014348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c74U)))
#undef UNK_10014350
#define UNK_10014350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c7cU)))
#undef UNK_10014358
#define UNK_10014358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c84U)))
#undef UNK_10014360
#define UNK_10014360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c8cU)))
#undef UNK_10014365
#define UNK_10014365 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c91U)))
#undef UNK_10014368
#define UNK_10014368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c94U)))
#undef UNK_1001436d
#define UNK_1001436d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c99U)))
#undef UNK_10014380
#define UNK_10014380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cacU)))
#undef UNK_10014390
#define UNK_10014390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cbcU)))
#undef UNK_100143a0
#define UNK_100143a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cccU)))
#undef UNK_100143b0
#define UNK_100143b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cdcU)))
#undef UNK_100143c0
#define UNK_100143c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cecU)))
#undef UNK_100143c8
#define UNK_100143c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cf4U)))
#undef UNK_100143cd
#define UNK_100143cd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cf9U)))
#undef _DAT_10014318
#define _DAT_10014318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c44U)))
#undef _DAT_10014378
#define _DAT_10014378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ca4U)))
#undef _DAT_10014388
#define _DAT_10014388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cb4U)))
#undef _DAT_10014398
#define _DAT_10014398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cc4U)))
#undef _DAT_100143a8
#define _DAT_100143a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cd4U)))
#undef _DAT_100143b8
#define _DAT_100143b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ce4U)))
#undef _DAT_100143c5
#define _DAT_100143c5 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7cf1U)))
#undef bRam0000000010014311
#define bRam0000000010014311 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c3dU)))
#undef bRam0000000010014312
#define bRam0000000010014312 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c3eU)))
#undef uRam0000000010014320
#define uRam0000000010014320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c4cU)))
#undef uRam0000000010014328
#define uRam0000000010014328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c54U)))
#undef uRam0000000010014330
#define uRam0000000010014330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c5cU)))
#undef uRam0000000010014338
#define uRam0000000010014338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c64U)))
#undef uRam0000000010014340
#define uRam0000000010014340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c6cU)))
#undef uRam0000000010014348
#define uRam0000000010014348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c74U)))
#undef uRam0000000010014350
#define uRam0000000010014350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c7cU)))
#undef uRam0000000010014358
#define uRam0000000010014358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c84U)))
#undef uRam0000000010014360
#define uRam0000000010014360 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7c8cU)))->pf_payload_bits
#undef uRam0000000010014365
#define uRam0000000010014365 ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x7c91U)))->pf_payload_bits
#undef uRam0000000010014368
#define uRam0000000010014368 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7c94U)))->pf_payload_bits
#undef uRam000000001001436d
#define uRam000000001001436d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7c99U)))
#undef uRam0000000010014380
#define uRam0000000010014380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cacU)))
#undef uRam0000000010014390
#define uRam0000000010014390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cbcU)))
#undef uRam00000000100143a0
#define uRam00000000100143a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cccU)))
#undef uRam00000000100143b0
#define uRam00000000100143b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cdcU)))
#undef uRam00000000100143c0
#define uRam00000000100143c0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7cecU)))->pf_payload_bits
#undef uRam00000000100143c8
#define uRam00000000100143c8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x7cf4U)))->pf_payload_bits
#undef uRam00000000100143cd
#define uRam00000000100143cd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cf9U)))
#define uStack_78 (*(undefined8 *)(frame + 568))
#define uStack_298 (*(undefined8 *)(frame + 24))
#define uStack_2a0 (*(ulong *)(frame + 16))
#define uStack_288 (*(undefined8 *)(frame + 40))
#define uStack_290 (*(undefined8 *)(frame + 32))
#define uStack_278 (*(undefined8 *)(frame + 56))
#define uStack_280 (*(undefined8 *)(frame + 48))
#define uStack_268 (*(undefined8 *)(frame + 72))
#define uStack_270 (*(undefined8 *)(frame + 64))
#define uStack_258 (*(undefined5 *)(frame + 88))
#define pvStack_260 (*(void * *)(frame + 80))
#define uStack_250 (*(undefined5 *)(frame + 96))
#define uStack_253 (*(undefined3 *)(frame + 93))
#define uStack_240 (*(ulong *)(frame + 112))
#define uStack_24b (*(undefined8 *)(frame + 101))
#define uStack_230 (*(undefined8 *)(frame + 128))
#define uStack_238 (*(undefined8 *)(frame + 120))
#define uStack_220 (*(undefined8 *)(frame + 144))
#define uStack_228 (*(undefined8 *)(frame + 136))
#define uStack_210 (*(undefined8 *)(frame + 160))
#define uStack_218 (*(undefined8 *)(frame + 152))
#define pvStack_200 (*(void * *)(frame + 176))
#define uStack_208 (*(undefined8 *)(frame + 168))
#define uStack_1f3 (*(undefined3 *)(frame + 189))
#define uStack_1f8 (*(undefined5 *)(frame + 184))
#define uStack_1eb (*(undefined8 *)(frame + 197))
#define uStack_1f0 (*(undefined5 *)(frame + 192))
#define pbStack_1d8 (*(byte * *)(frame + 216))
#define uStack_1e0 (*(undefined8 *)(frame + 208))
#define lStack_1c8 (*(long *)(frame + 232))
#define lStack_1d0 (*(long *)(frame + 224))
#define uStack_1b8 (*(uint *)(frame + 248))
#define uStack_1c0 (*(ulong *)(frame + 240))
#define uStack_1a8 (*(undefined8 *)(frame + 264))
#define uStack_1b0 (*(undefined8 *)(frame + 256))
#define uStack_198 (*(undefined8 *)(frame + 280))
#define uStack_1a0 (*(undefined8 *)(frame + 272))
#define uStack_188 (*(undefined8 *)(frame + 296))
#define uStack_190 (*(undefined8 *)(frame + 288))
#define uStack_178 (*(undefined8 *)(frame + 312))
#define uStack_180 (*(undefined8 *)(frame + 304))
#define uStack_168 (*(undefined5 *)(frame + 328))
#define pvStack_170 (*(void * *)(frame + 320))
#define uStack_160 (*(undefined5 *)(frame + 336))
#define uStack_163 (*(undefined3 *)(frame + 333))
#define uStack_148 (*(undefined8 *)(frame + 360))
#define uStack_15b (*(undefined8 *)(frame + 341))
#define uStack_130 (*(uint *)(frame + 384))
#define lStack_140 (*(long *)(frame + 368))
#define uStack_128 (*(undefined8 *)(frame + 392))
#define uStack_12c (*(undefined4 *)(frame + 388))
#define uStack_110 (*(ulong *)(frame + 416))
#define puStack_118 (*(undefined4 * *)(frame + 408))
#define pvStack_100 (*(void * *)(frame + 432))
#define uStack_108 (*(undefined8 *)(frame + 424))
#define uStack_f0 (*(undefined8 *)(frame + 448))
#define uStack_f8 (*(undefined8 *)(frame + 440))
#define uStack_e0 (*(undefined8 *)(frame + 464))
#define uStack_e8 (*(undefined8 *)(frame + 456))
#define uStack_d0 (*(undefined8 *)(frame + 480))
#define uStack_d8 (*(undefined8 *)(frame + 472))
#define pvStack_c0 (*(void * *)(frame + 496))
#define uStack_c8 (*(undefined8 *)(frame + 488))
#define uStack_b3 (*(undefined3 *)(frame + 509))
#define uStack_b8 (*(undefined5 *)(frame + 504))
#define uStack_ab (*(undefined8 *)(frame + 517))
#define uStack_b0 (*(undefined5 *)(frame + 512))
#define uStack_94 (*(undefined4 *)(frame + 540))
#define uStack_98 (*(uint *)(frame + 536))
#define uStack_7c (*(uint *)(frame + 564))
#define uStack_90 (*(undefined8 *)(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3ec
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000b3ec(long *param_1,long *param_2)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  long *plVar1;
  bool bVar2;
  void *pointer;
  undefined8 *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;

  uVar11 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar14 = *param_2;
  for (lVar13 = param_2[1] << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
    if (CARRY8(*(ulong *)(lVar14 + 8),uVar11)) {
      return 0;
    }
    uVar11 = *(ulong *)(lVar14 + 8) + uVar11;
    lVar14 = lVar14 + 0x10;
  }
  recovered_100092b0(param_1,uVar11);
  puVar3 = (undefined8 *)*param_2;
  for (lVar14 = param_2[1] << 4; lVar14 != 0; lVar14 = lVar14 + -0x10) {
    recovered_10009ea0(param_1,*param_1 + param_1[1],(undefined1 *)*puVar3,
                       (undefined1 *)*puVar3 + puVar3[1]);
    puVar3 = puVar3 + 2;
  }
  plVar1 = param_1 + 3;
  param_1[4] = 0;
  lStack_1d0 = param_1[1] - 6;
  if (5 < (ulong)param_1[1]) {
    pbStack_1d8 = (byte *)*param_1;
    if (((*pbStack_1d8 & 0xf) == 8) &&
       ((pbStack_1d8[1] & 0x20) == 0 && (uint)CONCAT11(*pbStack_1d8,pbStack_1d8[1]) % 0x1f == 0)) {
      pbStack_1d8 = pbStack_1d8 + 2;
      lStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      do {
        uStack_1e0 = 0;
        uVar9 = recovered_1000a75c((long *)&pbStack_1d8,1,(uint *)((long)&uStack_1e0 + 4));
        if ((int)uVar9 == 0) {
          return 0;
        }
        uVar9 = recovered_1000a75c((long *)&pbStack_1d8,2,(uint *)&uStack_1e0);
        if ((int)uVar9 == 0) {
          return 0;
        }
        iVar6 = PF_PART4(uStack_1e0, 4);
        if ((uint)uStack_1e0 == 2) {
          uStack_1eb = 0;
          uStack_1f0 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          pvStack_200 = (void *)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_24b = 0;
          uStack_250 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_253 = 0;
          pvStack_260 = (void *)0x0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_78 = 0;
          uStack_7c = 0;
          uVar9 = recovered_1000a75c((long *)&pbStack_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar9 == 0) ||
              (uVar9 = recovered_1000a75c((long *)&pbStack_1d8,5,(uint *)&uStack_78),
              (int)uVar9 == 0)) ||
             (uVar9 = recovered_1000a75c((long *)&pbStack_1d8,4,&uStack_7c), (int)uVar9 == 0)) {
            iVar12 = 1;
          }
          else {
            uVar11 = uStack_78 & 0xffffffff;
            uVar15 = uStack_78 >> 0x20;
            pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
            recovered_1000acfc((long *)&uStack_98,0x13,(undefined4 *)&pvStack_100);
            lVar14 = uVar15 + 0x101;
            pointer = (void *)CONCAT44(uStack_94,uStack_98);
            puVar4 = (uint *)((uintptr_t)pf_module_state+0x4b4U);
            for (uVar15 = (ulong)(uStack_7c + 4); uVar15 != 0; uVar15 = uVar15 - 1) {
              pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
              uVar9 = recovered_1000a75c((long *)&pbStack_1d8,3,(uint *)&pvStack_100);
              if ((int)uVar9 == 0) {
                uStack_90 = 0;
                recovered_10002f1c(pointer);
                iVar12 = 1;
                goto LAB_1000a3d4;
              }
              *(uint *)((long)pointer + (ulong)*puVar4 * 4) = (uint)pvStack_100;
              puVar4 = puVar4 + 1;
            }
            uStack_ab = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_b3 = 0;
            pvStack_c0 = (void *)0x0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            pvStack_100 = (void *)0x0;
            uVar15 = recovered_1000ab98((long *)&uStack_98,(uint *)&pvStack_100,0);
            if ((uVar15 & 1) == 0) {
              uVar11 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar11 = uVar11 + 1 + lVar14;
              puStack_118 = (undefined4 *)0x0;
              recovered_10009890((long *)&puStack_118,uVar11);
              do {
                uVar15 = uStack_110;
                if (uVar11 <= uStack_110) {
                  recovered_1000b074((long *)&uStack_130,puStack_118,puStack_118 + lVar14);
                  recovered_1000b074(&uStack_148,puStack_118 + lVar14,puStack_118 + uStack_110);
                  uVar11 = recovered_1000ab98((long *)&uStack_130,(uint *)&uStack_240,0);
                  if ((uVar11 & 1) == 0) {
                    uVar11 = 0;
                  }
                  else {
                    bVar2 = false;
                    piVar5 = (int *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148);
                    for (lVar14 = lStack_140 << 2; lVar14 != 0; lVar14 = lVar14 + -4) {
                      bVar2 = (bool)(bVar2 | *piVar5 != 0);
                      piVar5 = piVar5 + 1;
                    }
                    if (bVar2) {
                      uVar11 = recovered_1000ab98(&uStack_148,(uint *)&uStack_2a0,1);
                    }
                    else {
                      uStack_15b = 0;
                      uStack_160 = 0;
                      uStack_178 = 0;
                      uStack_180 = 0;
                      uStack_168 = 0;
                      uStack_163 = 0;
                      pvStack_170 = (void *)0x0;
                      uStack_198 = 0;
                      uStack_1a0 = 0;
                      uStack_188 = 0;
                      uStack_190 = 0;
                      uStack_1a8 = 0;
                      uStack_1b0 = 0;
                      recovered_1000ae0c(&uStack_2a0,&uStack_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_10002f1c(pvStack_170);
                      uVar11 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_10002f1c((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_10002f1c((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_1000a4f4;
                }
                uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
                uVar7 = recovered_1000aa34((long *)&pbStack_1d8,(long)&pvStack_100,
                                           (uint *)&uStack_1b0);
                if ((uVar7 & 1) == 0) break;
                if ((uint)uStack_1b0 < 0x10) {
                  recovered_1000b010((long *)&puStack_118,(undefined4 *)&uStack_1b0);
LAB_1000a2bc:
                  iVar12 = 5;
                  goto LAB_1000a3ac;
                }
                if ((uint)uStack_1b0 == 0x12) {
                  uStack_130 = 0;
                  uVar9 = recovered_1000a75c((long *)&pbStack_1d8,7,&uStack_130);
                  if ((int)uVar9 == 0) goto LAB_1000a3a8;
                  uVar7 = uStack_130 + 0xb;
                  for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_1000982c((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar15 = uStack_110;
                  }
                  goto LAB_1000a2bc;
                }
                if ((uint)uStack_1b0 == 0x11) {
                  uStack_130 = 0;
                  uVar9 = recovered_1000a75c((long *)&pbStack_1d8,3,&uStack_130);
                  if ((int)uVar9 == 0) goto LAB_1000a3a8;
                  uVar7 = uStack_130 + 3;
                  for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_1000982c((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar15 = uStack_110;
                  }
                  goto LAB_1000a2bc;
                }
                if (((uint)uStack_1b0 != 0x10) || (uVar15 == 0)) break;
                uStack_130 = 0;
                uVar9 = recovered_1000a75c((long *)&pbStack_1d8,2,&uStack_130);
                if ((int)uVar9 != 0) {
                  uVar7 = uStack_130 + 3;
                  PF_PART4(uStack_148, 0) = puStack_118[uVar15 - 1];
                  for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                    recovered_1000b010((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar15 = uStack_110;
                  }
                  goto LAB_1000a2bc;
                }
LAB_1000a3a8:
                iVar12 = 1;
LAB_1000a3ac:
              } while (iVar12 == 5);
              uVar11 = 0;
LAB_1000a4f4:
              uStack_110 = 0;
              recovered_10002f1c(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_10002f1c(pvStack_c0);
            uStack_90 = 0;
            recovered_10002f1c((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar11 & 1) == 0) {
              iVar12 = 1;
            }
            else {
              uVar9 = recovered_1000a7d8((long *)&pbStack_1d8,(long)&uStack_240,(long)&uStack_2a0,
                                         plVar1);
              iVar12 = 3;
              if ((int)uVar9 == 0) {
                iVar12 = 1;
              }
            }
          }
LAB_1000a3d4:
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_10002f1c(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_10002f1c(pvStack_200);
LAB_1000a3e4:
          if (iVar12 != 3) {
            return 0;
          }
        }
        else {
          if ((uint)uStack_1e0 != 1) {
            if ((uint)uStack_1e0 != 0) {
              return 0;
            }
            uStack_1c0 = uStack_1c0 >> (uStack_1b8 & 7);
            uStack_1b8 = uStack_1b8 & 0xfffffff8;
            pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
            uStack_1b0 = (ulong)PF_PART4(uStack_1b0, 4) << 0x20;
            uStack_240 = uStack_240 & 0xffffffff00000000;
            uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
            uVar9 = recovered_1000a75c((long *)&pbStack_1d8,8,(uint *)&pvStack_100);
            if ((((int)uVar9 != 0) &&
                (uVar9 = recovered_1000a75c((long *)&pbStack_1d8,8,(uint *)&uStack_1b0),
                (int)uVar9 != 0)) &&
               ((uVar9 = recovered_1000a75c((long *)&pbStack_1d8,8,(uint *)&uStack_240),
                (int)uVar9 != 0 &&
                (uVar9 = recovered_1000a75c((long *)&pbStack_1d8,8,(uint *)&uStack_2a0),
                (int)uVar9 != 0)))) {
              uVar7 = (uint)pvStack_100 | (uint)uStack_1b0 << 8;
              if ((((uint)uStack_240 | (int)uStack_2a0 << 8) ^ uVar7) == 0xffff) {
                for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                  uStack_98 = 0;
                  uVar9 = recovered_1000a75c((long *)&pbStack_1d8,8,&uStack_98);
                  if ((int)uVar9 == 0) goto LAB_1000a3c8;
                  puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                  recovered_1000a9cc(plVar1,(undefined1 *)&puStack_118);
                }
                iVar12 = 3;
                goto LAB_1000a3e4;
              }
            }
LAB_1000a3c8:
            iVar12 = 1;
            goto LAB_1000a3e4;
          }
          if ((bRam0000000010014311 & 1) == 0) {
            uStack_1b0 = CONCAT44(PF_PART4(uStack_1b0, 4),8);
            recovered_1000acfc((long *)&pvStack_100,0x120,(undefined4 *)&uStack_1b0);
            for (lVar14 = 0; lVar14 != 0x1c0; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x240) = 9;
            }
            for (lVar14 = 0; lVar14 != 0x60; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x400) = 7;
            }
            for (lVar14 = 0; lVar14 != 0x20; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x460) = 8;
            }
            uRam000000001001436d = 0;
            uRam0000000010014368 = 0;
            uRam0000000010014350 = 0;
            uRam0000000010014348 = 0;
            uRam0000000010014360 = 0;
            uRam0000000010014365 = 0;
            uRam0000000010014358 = 0;
            uRam0000000010014330 = 0;
            uRam0000000010014328 = 0;
            uRam0000000010014340 = 0;
            uRam0000000010014338 = 0;
            uRam0000000010014320 = 0;
            _DAT_10014318 = 0;
            recovered_1000ab98((long *)&pvStack_100,(uint *)&DAT_10014318,0);
            uStack_f8 = 0;
            recovered_10002f1c(pvStack_100);
            recovered_10002f7c();
            bRam0000000010014311 = 1;
          }
          if ((bRam0000000010014312 & 1) == 0) {
            uStack_1b0 = CONCAT44(PF_PART4(uStack_1b0, 4),5);
            plVar10 = recovered_1000acfc((long *)&pvStack_100,0x20,(undefined4 *)&uStack_1b0);
            uRam0000000010014380 = 0;
            _DAT_10014378 = 0;
            uRam0000000010014390 = 0;
            _DAT_10014388 = 0;
            uRam00000000100143a0 = 0;
            _DAT_10014398 = 0;
            uRam00000000100143b0 = 0;
            _DAT_100143a8 = 0;
            uRam00000000100143c0 = 0;
            _DAT_100143b8 = 0;
            uRam00000000100143cd = 0;
            _DAT_100143c5 = 0;
            uRam00000000100143c8 = 0;
            recovered_1000ab98(plVar10,(uint *)&DAT_10014378,0);
            uStack_f8 = 0;
            recovered_10002f1c(pvStack_100);
            recovered_10002f7c();
            bRam0000000010014312 = 1;
          }
          uVar11 = recovered_1000a7d8((long *)&pbStack_1d8,((uintptr_t)pf_module_state+0x7c44U),((uintptr_t)pf_module_state+0x7ca4U),plVar1);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
      } while (iVar6 == 0);
      if (lStack_1c8 == lStack_1d0 && uStack_1b8 < 8) {
        uVar7 = recovered_10009cdc((uint *)(*param_1 + param_1[1] + -4));
        uVar8 = recovered_1000a968(*plVar1,param_1[4]);
        return (ulong)(uVar8 == uVar7);
      }
    }
  }
  return 0;
}

#undef DAT_10014318
#undef DAT_10014378
#undef DAT_10014388
#undef DAT_10014398
#undef DAT_100143a8
#undef DAT_100143b8
#undef DAT_100143c5
#undef UNK_10014311
#undef UNK_10014312
#undef UNK_10014320
#undef UNK_10014328
#undef UNK_10014330
#undef UNK_10014338
#undef UNK_10014340
#undef UNK_10014348
#undef UNK_10014350
#undef UNK_10014358
#undef UNK_10014360
#undef UNK_10014365
#undef UNK_10014368
#undef UNK_1001436d
#undef UNK_10014380
#undef UNK_10014390
#undef UNK_100143a0
#undef UNK_100143b0
#undef UNK_100143c0
#undef UNK_100143c8
#undef UNK_100143cd
#undef _DAT_10014318
#undef _DAT_10014378
#undef _DAT_10014388
#undef _DAT_10014398
#undef _DAT_100143a8
#undef _DAT_100143b8
#undef _DAT_100143c5
#undef bRam0000000010014311
#undef bRam0000000010014312
#undef uRam0000000010014320
#undef uRam0000000010014328
#undef uRam0000000010014330
#undef uRam0000000010014338
#undef uRam0000000010014340
#undef uRam0000000010014348
#undef uRam0000000010014350
#undef uRam0000000010014358
#undef uRam0000000010014360
#undef uRam0000000010014365
#undef uRam0000000010014368
#undef uRam000000001001436d
#undef uRam0000000010014380
#undef uRam0000000010014390
#undef uRam00000000100143a0
#undef uRam00000000100143b0
#undef uRam00000000100143c0
#undef uRam00000000100143c8
#undef uRam00000000100143cd
#undef uStack_78
#undef uStack_298
#undef uStack_2a0
#undef uStack_288
#undef uStack_290
#undef uStack_278
#undef uStack_280
#undef uStack_268
#undef uStack_270
#undef uStack_258
#undef pvStack_260
#undef uStack_250
#undef uStack_253
#undef uStack_240
#undef uStack_24b
#undef uStack_230
#undef uStack_238
#undef uStack_220
#undef uStack_228
#undef uStack_210
#undef uStack_218
#undef pvStack_200
#undef uStack_208
#undef uStack_1f3
#undef uStack_1f8
#undef uStack_1eb
#undef uStack_1f0
#undef pbStack_1d8
#undef uStack_1e0
#undef lStack_1c8
#undef lStack_1d0
#undef uStack_1b8
#undef uStack_1c0
#undef uStack_1a8
#undef uStack_1b0
#undef uStack_198
#undef uStack_1a0
#undef uStack_188
#undef uStack_190
#undef uStack_178
#undef uStack_180
#undef uStack_168
#undef pvStack_170
#undef uStack_160
#undef uStack_163
#undef uStack_148
#undef uStack_15b
#undef uStack_130
#undef lStack_140
#undef uStack_128
#undef uStack_12c
#undef uStack_110
#undef puStack_118
#undef pvStack_100
#undef uStack_108
#undef uStack_f0
#undef uStack_f8
#undef uStack_e0
#undef uStack_e8
#undef uStack_d0
#undef uStack_d8
#undef pvStack_c0
#undef uStack_c8
#undef uStack_b3
#undef uStack_b8
#undef uStack_ab
#undef uStack_b0
#undef uStack_94
#undef uStack_98
#undef uStack_7c
#undef uStack_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b494
 */

bool recovered_1000b494(long param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;

  uVar3 = *(ulong *)(param_1 + 0x30);
  if (CARRY8(param_3,uVar3)) {
    return false;
  }
  uVar2 = uVar3 + param_3;
  bVar1 = uVar2 <= *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    recovered_10000c94((void *)param_2,(void *)(*(long *)(param_1 + 0x18) + uVar3),param_3);
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4f0
 */

undefined8
recovered_1000b4f0(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;

  switch((uintptr_t)(param_1)) {
  case 1:
    uVar8 = param_6;
    if (param_5 <= param_6) {
      uVar8 = param_5;
    }
    lVar9 = param_5 - uVar8;
    pcVar6 = param_2;
    pcVar7 = param_3;
    for (uVar12 = uVar8; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar6 = *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcVar6 = param_3 + uVar8;
    pcVar7 = param_2 + uVar8;
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pcVar7 = pcVar7[-param_6] + *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    break;
  case 2:
    if (param_4 != (byte *)0x0) {
      for (; param_5 != 0; param_5 = param_5 - 1) {
        *param_2 = *param_4 + *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      }
      return 1;
    }
  case 0:
    recovered_10000c94(param_2,param_3,param_5);
    break;
  case 3:
    if (param_4 == (byte *)0x0) {
      if (param_5 != 0) {
        uVar8 = param_6;
        if (param_5 <= param_6) {
          uVar8 = param_5;
        }
        lVar9 = param_5 - uVar8;
        pcVar6 = param_2;
        pcVar7 = param_3;
        for (uVar12 = uVar8; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar6 = *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcVar6 = param_3 + uVar8;
        pcVar7 = param_2 + uVar8;
        for (; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pcVar7 = *pcVar6 + ((byte)pcVar7[-param_6] >> 1);
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    else {
      for (uVar8 = 0; param_5 != uVar8; uVar8 = uVar8 + 1) {
        if (uVar8 < param_6) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)(byte)param_2[uVar8 - param_6];
        }
        param_2[uVar8] = param_3[uVar8] + (char)(uVar11 + param_4[uVar8] >> 1);
      }
    }
    break;
  case 4:
    if (param_4 == (byte *)0x0) {
      uVar8 = param_6;
      if (param_5 <= param_6) {
        uVar8 = param_5;
      }
      lVar9 = param_5 - uVar8;
      pcVar6 = param_2;
      pcVar7 = param_3;
      for (uVar12 = uVar8; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar6 = *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar6 = param_3 + uVar8;
      pcVar7 = param_2 + uVar8;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pcVar7 = pcVar7[-param_6] + *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      uVar8 = 0;
      for (; param_5 != 0; param_5 = param_5 - 1) {
        if (uVar8 < param_6) {
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          uVar10 = (uint)(byte)param_2[-param_6];
          uVar11 = (uint)param_4[-param_6];
        }
        bVar2 = *param_4;
        uVar3 = uVar10 - uVar11;
        uVar4 = bVar2 - uVar11;
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar4 = -uVar3;
        if (-1 < (int)uVar3) {
          uVar4 = uVar3;
        }
        uVar5 = (uVar3 + bVar2) - uVar11;
        uVar3 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar3 = uVar5;
        }
        if (uVar4 <= uVar3) {
          uVar11 = (uint)bVar2;
        }
        if (uVar1 <= uVar3 && uVar1 <= uVar4) {
          uVar11 = uVar10;
        }
        *param_2 = param_3[uVar8] + (char)uVar11;
        uVar8 = uVar8 + 1;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
      }
    }
    break;
  default:
    return 0;
  }
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6c0
 */

void recovered_1000b6c0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000c074(param_1 + 3);
  param_1[1] = 0;
  recovered_10002f1c((void *)*param_1);
  return;
}


#define uStack_33 (*(undefined1 *)(frame + 29))
#define uStack_31 (*(undefined1 *)(frame + 31))
#define uStack_32 (*(undefined1 *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6e4
 */

void recovered_1000b6e4(int param_1,long param_2,long *param_3,long *param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;

  recovered_10000d20((undefined1 *)param_2,0x800);
  uStack_31 = 0;
  recovered_10009148(param_3,0x10,&uStack_31);
  param_4[1] = 0;
  if (param_1 == 0) {
    *(undefined1 *)(*param_3 + 7) = 1;
    *(undefined1 *)(*param_3 + 8) = 0xff;
    for (iVar8 = 0; iVar8 != 0x100; iVar8 = iVar8 + 1) {
      uStack_33 = (undefined1)iVar8;
      recovered_1000a9cc(param_4,&uStack_33);
    }
  }
  else {
    *(undefined1 *)(*param_3 + 3) = 0xc;
    for (iVar8 = 0; iVar8 != 0xc; iVar8 = iVar8 + 1) {
      uStack_32 = (undefined1)iVar8;
      recovered_1000a9cc(param_4,&uStack_32);
    }
  }
  lVar4 = 0;
  lVar2 = *param_3;
  iVar8 = 0;
  for (lVar3 = 1; lVar3 != 0x11; lVar3 = lVar3 + 1) {
    lVar7 = *param_4;
    iVar5 = iVar8 << 1;
    for (uVar6 = 0; uVar6 < *(byte *)(lVar2 + -1 + lVar3); uVar6 = uVar6 + 1) {
      bVar1 = *(byte *)(lVar7 + lVar4);
      lVar4 = lVar4 + 1;
      *(int *)(param_2 + (ulong)bVar1 * 4) = iVar8;
      iVar8 = iVar8 + 1;
      *(int *)(param_2 + 0x400 + (ulong)bVar1 * 4) = (int)lVar3;
      iVar5 = iVar5 + 2;
    }
    iVar8 = iVar5;
  }
  return;
}

#undef uStack_33
#undef uStack_31
#undef uStack_32

#define local_21 (*(undefined1 *)(frame + 31))
#define local_24 (*(undefined1 *)(frame + 28))
#define local_23 (*(undefined1 *)(frame + 29))
#define local_22 (*(undefined1 *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b800
 */

undefined8 recovered_1000b800(uint *param_1,undefined1 param_2,undefined8 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  bool bVar3;

  if (0xfffd < (ulong)param_3[1]) {
    return 0;
  }
  local_24 = 0xff;
  iVar1 = (int)param_3[1] + 2;
  local_22 = (undefined1)((uint)iVar1 >> 8);
  local_21 = (undefined1)iVar1;
  local_23 = param_2;
  bVar2 = recovered_100081fc(param_1,(long)&local_24,4);
  bVar3 = false;
  if (bVar2) {
    bVar3 = recovered_100081fc(param_1,*param_3,param_3[1]);
  }
  return (ulong)bVar3;
}

#undef local_21
#undef local_24
#undef local_23
#undef local_22

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b864
 */

long recovered_1000b864(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_100092b0(param_1,uVar5);
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


#undef DAT_1000c6f0
#define DAT_1000c6f0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000c7e0
#define DAT_1000c7e0 (*(double *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_1000c868
#define DAT_1000c868 (*(double *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_10014314
#define DAT_10014314 (*(byte *)(((uintptr_t)pf_module_state + 0x7c40U)))
#undef DAT_100145d8
#define DAT_100145d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7f04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b95c
 */

void recovered_1000b95c(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;

  dVar1 = DAT_1000c6f0;
  if ((DAT_10014314 & 1) == 0) {
    puVar7 = &DAT_100145d8;
    for (uVar6 = 0; uVar6 != 8; uVar6 = uVar6 + 1) {
      for (uVar8 = 0; uVar8 != 8; uVar8 = uVar8 + 1) {
        dVar9 = recovered_100012d4(((double)(uVar6 & 0xffffffff) * 2.0 + 1.0) *
                                   (double)(uVar8 & 0xffffffff) * dVar1 * 0.0625);
        puVar7[uVar8] = PF_RAW64(dVar9);
      }
      puVar7 = puVar7 + 8;
    }
    DAT_10014314 = 1;
  }
  dVar9 = DAT_1000c868;
  dVar1 = DAT_1000c7e0;
  for (lVar2 = 0; lVar2 != 8; lVar2 = lVar2 + 1) {
    uVar6 = 0;
    dVar10 = dVar1;
    if (lVar2 != 0) {
      dVar10 = 1.0;
    }
    puVar7 = &DAT_100145d8;
    for (; uVar6 != 8; uVar6 = uVar6 + 1) {
      dVar11 = 0.0;
      lVar4 = param_1;
      for (lVar3 = 0; lVar3 != 8; lVar3 = lVar3 + 1) {
        for (lVar5 = 0; lVar5 != 0x40; lVar5 = lVar5 + 8) {
          dVar11 = dVar11 + pf_bits_double((&DAT_100145d8)[lVar2 + lVar3 * 8]) *
                            *(double *)(lVar4 + lVar5) * pf_bits_double((uintptr_t)puVar7[lVar5]);
        }
        lVar4 = lVar4 + 0x40;
      }
      uVar8 = uVar6 | lVar2 << 3;
      dVar12 = dVar9;
      if (uVar6 != 0) {
        dVar12 = 0.25;
      }
      dVar13 = pf_bits_double(NEON_ucvtf((ulong)*(byte *)(param_2 + uVar8)));
      dVar13 = (dVar10 * dVar12 * dVar11) / dVar13;
      dVar11 = 0.5;
      if (dVar13 < 0.0) {
        dVar11 = -0.5;
      }
      *(int *)(param_3 + uVar8 * 4) = (int)(long)(dVar13 + dVar11);
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

#undef DAT_1000c6f0
#undef DAT_1000c7e0
#undef DAT_1000c868
#undef DAT_10014314
#undef DAT_100145d8

#undef DAT_1000c8b0
#define DAT_1000c8b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb18
 */

void recovered_1000bb18(long param_1,int *param_2,int *param_3,long param_4,long param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;

  uVar5 = *param_2 - *param_3;
  *param_3 = *param_2;
  uVar4 = recovered_1000bcd4(uVar5);
  recovered_1000bcf8(param_1,param_4,(ulong)uVar4);
  if ((uVar5 & 0x80000000) != 0) {
    uVar5 = uVar5 + ~(-1 << (ulong)(uVar4 & 0x1f));
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar7 = uVar5;
  }
  recovered_1000bd08(param_1,uVar7,uVar4);
  uVar5 = 0;
  for (lVar6 = 1; lVar6 != 0x40; lVar6 = lVar6 + 1) {
    uVar4 = param_2[(uint)(&DAT_1000c8b0)[lVar6]];
    if (uVar4 == 0) {
      uVar5 = uVar5 + 1;
    }
    else {
      uVar7 = uVar5 << 4;
      while (bVar3 = 0xf < uVar5, uVar5 = uVar5 - 0x10, bVar3) {
        recovered_1000bcf8(param_1,param_5,0xf0);
        uVar7 = uVar7 - 0x100;
      }
      uVar5 = recovered_1000bcd4(uVar4);
      recovered_1000bcf8(param_1,param_5,(ulong)(uVar5 | uVar7));
      if ((uVar4 & 0x80000000) != 0) {
        uVar4 = uVar4 + ~(-1 << (ulong)(uVar5 & 0x1f));
      }
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4;
      }
      recovered_1000bd08(param_1,uVar7,uVar5);
      uVar5 = 0;
    }
  }
  if (uVar5 == 0) {
    return;
  }
  uVar5 = *(uint *)param_5;
  uVar4 = *(uint *)(param_5 + 0x400);
  while (uVar4 = uVar4 - 1, uVar4 != 0xffffffff) {
    bVar2 = (byte)(uVar5 >> (ulong)(uVar4 & 0x1f)) & 1 | *(char *)(param_1 + 0x18) << 1;
    *(byte *)(param_1 + 0x18) = bVar2;
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 8) {
      recovered_1000bd78((long *)param_1,bVar2);
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}

#undef DAT_1000c8b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc78
 */

undefined8 * recovered_1000bc78(undefined8 *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_100092b0(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    recovered_1000ab30(param_1,(undefined1 *)param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcd4
 */

uint recovered_1000bcd4(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = 0;
  uVar1 = -value;
  if (-1 < value) {
    uVar1 = value;
  }
  for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcf8
 */

void recovered_1000bcf8(long param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;

  puVar1 = (uint *)(param_2 + (param_3 & 0xffffffff) * 4);
  uVar3 = *puVar1;
  uVar5 = puVar1[0x100];
  while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
    bVar4 = (byte)(uVar3 >> (ulong)(uVar5 & 0x1f)) & 1 | *(char *)(param_1 + 0x18) << 1;
    *(byte *)(param_1 + 0x18) = bVar4;
    iVar2 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 == 8) {
      recovered_1000bd78((long *)param_1,bVar4);
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd08
 */

void recovered_1000bd08(long param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;

  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    bVar2 = (byte)(param_2 >> (ulong)(param_3 & 0x1f)) & 1 | *(char *)(param_1 + 0x18) << 1;
    *(byte *)(param_1 + 0x18) = bVar2;
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 8) {
      recovered_1000bd78((long *)param_1,bVar2);
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}


#define local_22 (*(undefined1 *)(frame + 30))
#define local_21 (*(char *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd78
 */

void recovered_1000bd78(long *param_1,char param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};


  local_21 = param_2;
  recovered_1000ab30(param_1,&local_21);
  if (local_21 == -1) {
    local_22 = 0;
    recovered_1000a9cc(param_1,&local_22);
  }
  return;
}

#undef local_22
#undef local_21

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdc0
 */

void recovered_1000bdc0(long *in_x0,long in_x1,undefined1 *in_x2,long in_x3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  puVar2 = in_x2 + in_x3;
  if (*in_x0 == 0) {
    uVar7 = in_x0[1];
  }
  else {
    uVar7 = in_x1 - *in_x0;
  }
  lVar4 = (long)puVar2 - (long)in_x2;
  if (lVar4 != 0) {
    uVar6 = in_x0[1];
    uVar5 = in_x0[2];
    if (uVar5 < uVar6 + lVar4) {
      uVar3 = 4;
      if (uVar5 != 0) {
        uVar3 = uVar5;
      }
      do {
        uVar5 = uVar3;
        uVar3 = uVar5 << 1;
      } while (uVar5 < uVar6 + lVar4);
      recovered_100092b0(in_x0,uVar5);
      uVar6 = in_x0[1];
    }
    for (; uVar7 < uVar6; uVar6 = uVar6 - 1) {
      puVar1 = (undefined1 *)(*in_x0 + (uVar6 - 1));
      puVar1[lVar4] = *puVar1;
    }
    for (; in_x2 != puVar2; in_x2 = in_x2 + 1) {
      *(undefined1 *)(*in_x0 + uVar7) = *in_x2;
      uVar7 = uVar7 + 1;
    }
    in_x0[1] = in_x0[1] + lVar4;
  }
  return;
}


#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdc8
 */

void recovered_1000bdc8(long *param_1,uint param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_1000b864(param_1,*param_1 + param_1[1],(undefined1 *)&local_14,
                     (undefined1 *)((long)(uintptr_t)(frame + 48) + -0x10));
  return;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdec
 */

void recovered_1000bdec(long *param_1,long param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 + 4U <= (ulong)param_1[1]) {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    *(uint *)(*param_1 + param_2) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be0c
 */

long recovered_1000be0c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_100092b0(param_1,uVar5);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf04
 */

long * recovered_1000bf04(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000bf30(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf30
 */

void recovered_1000bf30(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000bf98(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf98
 */

void recovered_1000bf98(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000c00c(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)((long)pvVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10002f1c((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c00c
 */

void * recovered_1000c00c(ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 8;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return pvVar1;
}


#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c01c
 */

void recovered_1000c01c(long *param_1,undefined4 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = param_2;
  recovered_1000b864(param_1,*param_1 + param_1[1],(undefined1 *)&local_14,
                     (undefined1 *)((long)(uintptr_t)(frame + 48) + -0x10));
  return;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c03c
 */

undefined8 * recovered_1000c03c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10009ea0(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c074
 */

undefined8 * recovered_1000c074(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10002f1c((void *)*param_1);
  return param_1;
}

