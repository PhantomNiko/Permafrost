/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c70U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c80U)))
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
 * Address: 0x100006a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100006a8(void)

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

  DAT_1000c0f0 = 0;
  uStack_48 = 0;
  DAT_1000c0f8 = 0;
  DAT_1000c100 = 0;
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
    recovered_10002524(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_1000c0f8 == 0) {
    uVar4 = _DAT_82010088 & 0xfffffff0;
    if (_DAT_82010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300030 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10002524(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  if (DAT_1000c100 == 0) {
    DAT_1000c100 = DAT_1000c0f8;
  }
  DAT_1000c0f0 = 1;
  return;
}

#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c100
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

#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(byte *)(((uintptr_t)pf_module_state + 0x5c70U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c80U)))
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
#define local_48 (*(ulong *)(frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100006b4(void)

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
  if ((DAT_1000c0f0 & 1) == 0) {
    DAT_1000c0f8 = 0;
    DAT_1000c100 = 0;
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
      recovered_10002524(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c0f8 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002524(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_1000c100 == 0) {
      DAT_1000c100 = DAT_1000c0f8;
    }
    DAT_1000c0f0 = 1;
  }
  return;
}

#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c100
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef auStack_458
#undef local_48

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000938
 */

ulong recovered_10000938(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100006b4();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_1000c0f8

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000984
 */

long recovered_10000984(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100006b4();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_1000c0f8

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009c4
 */

ulong recovered_100009c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100006b4();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1000c0f8

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a00
 */

long recovered_10000a00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100006b4();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c0f8

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c78U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a30
 */

ulong * recovered_10000a30(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 != 0) {
    recovered_100006b4();
    puVar4 = DAT_1000c0f8;
    if (DAT_1000c100 != (ulong *)0x0) {
      puVar4 = DAT_1000c100;
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
            DAT_1000c100 = DAT_1000c0f8;
            *(undefined1 *)(puVar2 + 3) = 0;
            if (puVar4 != (ulong *)0x0) {
              DAT_1000c100 = puVar4;
            }
            return puVar2 + 4;
          }
        }
        puVar1 = puVar2 + 1;
        puVar2 = DAT_1000c0f8;
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          puVar2 = (ulong *)*puVar1;
        }
      } while (puVar2 != (ulong *)0x0 && puVar2 != puVar4);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000c0f8
#undef DAT_1000c100

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10000b08(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10000b4c(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10000b98(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000be8(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;

  if (param_2 != 0) {
    lVar4 = 0;
    uVar5 = 0x3f;
    do {
      uVar1 = param_1 >> (uVar5 & 0x3f) & 1 | lVar4 << 1;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = param_2;
      }
      lVar4 = uVar1 - uVar2;
      uVar3 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar3;
    } while (-1 < (int)uVar3);
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10000bf0(ulong param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack_18 (*(undefined8 *)(frame + 16))
undefined8 recovered_10000c50(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_10000bf0(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10000c70(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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
  lVar4 = recovered_10000bf0(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_28 (*(long *)(frame + 16))
long recovered_10000cb0(long param_1,long param_2)

{
  unsigned char frame[88] = {0};

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
  recovered_10000bf0(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000cfc(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10000d04(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000d10(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000d54(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000d98(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de4
 */

void * recovered_10000de4(void *out,void *data,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((size < 0x10) || ((((uint)data ^ (uint)out) & 7) != 0)) {
    puVar3 = out;
  }
  else {
    for (puVar3 = out; (size != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)data;
      data = (undefined1 *)((long)data + 1);
      size = size - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < size + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)data + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    size = size + lVar4;
    while (7 < size) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)data + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      size = size - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    data = (void *)((long)data + (lVar6 - lVar4));
  }
  for (; size != 0; size = size - 1) {
    *puVar3 = *(undefined1 *)data;
    data = (undefined1 *)((long)data + 1);
    puVar3 = puVar3 + 1;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ebc
 */

void * recovered_10000ebc(void *out,void *data,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((out != data) && (size != 0)) {
    puVar2 = (undefined1 *)((long)data + size);
    if ((out >= data && out <= puVar2) && (out < data || puVar2 != out)) {
      puVar3 = (undefined1 *)((long)out + size);
      uVar1 = size;
      if ((0xf < size) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (size != 0 && (((int)out + (int)size & 7U) != 0)); size = size - 1) {
          *(undefined1 *)((long)out + (size - 1)) = *(undefined1 *)((long)data + (size - 1));
        }
        for (; 0x1f < size; size = size - 0x20) {
          *(undefined8 *)((long)out + (size - 8)) = *(undefined8 *)((long)data + (size - 8));
          *(undefined8 *)((long)out + (size - 0x10)) = *(undefined8 *)((long)data + (size - 0x10));
          *(undefined8 *)((long)out + (size - 0x18)) = *(undefined8 *)((long)data + (size - 0x18));
          *(undefined8 *)((long)out + (size - 0x20)) = *(undefined8 *)((long)data + (size - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = size; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)out + size + lVar4 + -8) =
               *(undefined8 *)((long)data + size + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)out + lVar4 + size);
        puVar2 = (undefined1 *)((long)data + lVar4 + size);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      out = recovered_10000de4(out,data,size);
    }
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd0
 */

void * recovered_10000fd0(void *out,int value,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = out;
  if (0xf < size) {
    uVar3 = (ulong)(value & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = out; (size != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)value;
      size = size - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < size; size = size - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < size; size = size - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; size != 0; size = size - 1) {
    *(char *)puVar2 = (char)value;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001068
 */

void recovered_10001068(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (0xf < (ulong)param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (undefined1 *)((long)param_1 + 1);
    }
    for (; 0x1f < (ulong)param_2; param_2 = param_2 - 0x20) {
      *(ulong *)param_1 = uVar2;
      *(ulong *)((long)param_1 + 8) = uVar2;
      *(ulong *)((long)param_1 + 0x10) = uVar2;
      *(ulong *)((long)param_1 + 0x18) = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 0x20);
    }
    for (; 7 < (ulong)param_2; param_2 = param_2 - 8) {
      *(ulong *)param_1 = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 8);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000106c
 */

void recovered_1000106c(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (0xf < (ulong)param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (undefined1 *)((long)param_1 + 1);
    }
    for (; 0x1f < (ulong)param_2; param_2 = param_2 - 0x20) {
      *(ulong *)param_1 = uVar2;
      *(ulong *)((long)param_1 + 8) = uVar2;
      *(ulong *)((long)param_1 + 0x10) = uVar2;
      *(ulong *)((long)param_1 + 0x18) = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 0x20);
    }
    for (; 7 < (ulong)param_2; param_2 = param_2 - 8) {
      *(ulong *)param_1 = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 8);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001070
 */

int recovered_10001070(void *left,void *right,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < size) && ((((uint)right ^ (uint)left) & 7) == 0)) {
    for (lVar6 = 0; (uVar5 = size - lVar6, uVar5 != 0 && (((uint)left + (int)lVar6 & 7) != 0));
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
        goto recovered_100011dc;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_100011dc;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_100011dc;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_100011dc;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (size = uVar5; 7 < size; size = size - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_100011dc:
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
    if (size == 0) {
      return 0;
    }
    if ((uint)*(byte *)left - (uint)*(byte *)right != 0) break;
    left = (void *)((long)left + 1);
    right = (void *)((long)right + 1);
    size = size - 1;
  }
  return (uint)*(byte *)left - (uint)*(byte *)right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011dc
 */

int recovered_100011dc(long param_1,long param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000120c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000121c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000122c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001240(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000125c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000126c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000127c(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001290(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_100012a4(char *text)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100012c8(char *left,char *right)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *left;
    if (bVar1 == 0 || (uint)bVar1 != (uint)(byte)*right) break;
    left = left + 1;
    right = right + 1;
  }
  return (uint)bVar1 - (uint)(byte)*right;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100012f0(char *left,char *right)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *left;
    if (bVar1 == 0 || (uint)bVar1 != (uint)(byte)*right) break;
    left = left + 1;
    right = right + 1;
  }
  return (uint)bVar1 - (uint)(byte)*right;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100012f4(long param_1,long param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000130c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_100012a4(param_1);
    out = recovered_10000d10(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000de4(out,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001348(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001370
 */

long recovered_10001370(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10001348(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100013b8(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10001348(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100013f8(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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


#undef DAT_100065c4
#define DAT_100065c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001434
 */

undefined * recovered_10001434(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100065c4;
}

#undef DAT_100065c4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5c2cU)))
undefined ** recovered_10001440(void)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x1000144c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000144c(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000fd0(auStack_38,0,0x18);
  bVar1 = recovered_1000261c(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return local_30;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef local_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100014c4(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    param_1 = param_1 + param_1;
  }
  for (uVar1 = param_2 & (int)param_2 >> 0x1f; uVar1 != 0; uVar1 = uVar1 + 1) {
    param_1 = param_1 * 0.5;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_100014f8(double param_1,int *param_2)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_1000156c(double left,double right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001590(double left,double right)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100015f0(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = (double)(int)value;
  dVar1 = (double)((int)value + -1);
  if (dVar2 <= value) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_1000160c(double value)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001638(double value)

{
  unsigned char frame[64] = {0};

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


#undef DAT_100064b0
#define DAT_100064b0 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001674
 */

double recovered_10001674(double value)

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
    return (double)iVar1 * DAT_100064b0 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_100064b0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10001720(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10005c88 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
double recovered_10001734(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001788(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_10005c88);
}

#undef DAT_10005c88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10005c90 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
#define DAT_10005c98 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#define DAT_10005ca0 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#define DAT_10005ca8 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
void recovered_10001788(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_10005c90 < param_1; param_1 = param_1 + DAT_10005ca8) {
  }
  for (; param_1 < DAT_10005c98; param_1 = param_1 + DAT_10005ca0) {
  }
  return;
}

#undef DAT_10005c90
#undef DAT_10005c98
#undef DAT_10005ca0
#undef DAT_10005ca8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10005cb0 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
double recovered_100017cc(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001788(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10005cb0;
}

#undef DAT_10005cb0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001818(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -value;
  if (0.0 <= value) {
    dVar1 = value;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001828(float left,float right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001888
 */

ulong recovered_10001888(double param_1)

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
 * Address: 0x100018d8
 */

void recovered_100018d8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001900
 */

uint128 recovered_10001900(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if ((long)param_1 < 0) {
    recovered_100018d8(-param_1);
    PF_PART8(auVar2, 8) = 0;
    (*(double *)((uint8_t *)&(auVar2)+0)) = -extraout_d0;
    return auVar2;
  }
  dVar4 = 1.0;
  dVar3 = 0.0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      dVar3 = dVar3 + dVar4;
    }
    dVar4 = dVar4 + dVar4;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar3;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001924
 */

float recovered_10001924(float value,float in_s1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_s1 == 0.0) {
    return 0.0;
  }
  return value - in_s1 * (float)(int)(value / in_s1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001958
 */

float recovered_10001958(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100014f8((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001970
 */

float recovered_10001970(float param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100014c4((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001988
 */

float recovered_10001988(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001590((double)param_1,(double)param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a4
 */

float recovered_100019a4(float param_1)

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
 * Address: 0x100019c8
 */

float recovered_100019c8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000160c((double)param_1);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e0
 */

uint128 recovered_100019e0(double param_1)

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
 * Address: 0x10001a08
 */

float recovered_10001a08(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100019e0((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

float recovered_10001a20(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001638((double)param_1);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a38
 */

float recovered_10001a38(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001674((double)param_1);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a50
 */

long recovered_10001a50(double param_1)

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
 * Address: 0x10001a64
 */

float recovered_10001a64(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001734((double)param_1);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a7c
 */

float recovered_10001a7c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100017cc((double)param_1);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a94
 */

float recovered_10001a94(float param_1)

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
 * Address: 0x10001aa4
 */

long recovered_10001aa4(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001b3c;
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
      goto LAB_10001b68;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001b68;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001b68;
    }
LAB_10001b3c:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001b68:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001ba8((uint)*pbVar4);
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
 * Address: 0x10001ba8
 */

uint recovered_10001ba8(int param_1)

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
 * Address: 0x10001bd8
 */

long recovered_10001bd8(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001cbc;
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
      goto LAB_10001cbc;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001cbc;
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
LAB_10001cbc:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001ba8((uint)*pbVar6);
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
 * Address: 0x10001cfc
 */

uint128 recovered_10001cfc(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_100014c4(dVar12,iVar9 * iVar6);
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
 * Address: 0x10001e8c
 */

float recovered_10001e8c(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001cfc(in_x0,in_x1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ea4
 */

int recovered_10001ea4(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_10001f14:
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
      goto LAB_10001f40;
    }
    goto LAB_10001f44;
  }
  pbVar8 = param_3 + 1;
  bVar1 = *pbVar8;
  if (bVar1 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar1)) {
      case 0x2a:
        goto code_r0x10001fe0;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10001fc8;
      default:
        if ((bVar1 != 0x20) && (bVar1 != 0x23)) goto LAB_10001fc8;
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
  goto LAB_10002270;
LAB_10001fc8:
  do {
    pbVar8 = param_3 + 1;
    bVar1 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar1 - 0x30U < 10);
LAB_10001ff0:
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
LAB_100020a4:
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
      goto LAB_100020a4;
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
      goto LAB_10001f40;
    }
    break;
  case 100:
  case 0x69:
code_r0x100021c0:
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
LAB_10002260:
    pdStack_78 = pdStack_78 + 1;
    uVar9 = 10;
code_r0x10002268:
    uVar7 = 0;
LAB_1000226c:
    recovered_10002458((long *)&local_80,&local_88,&local_8c,(ulong)dVar6,uVar9,uVar7);
    goto LAB_10002270;
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
      recovered_10002458((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar6,10,0);
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
      goto LAB_10002270;
    }
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0x146U);
code_r0x10002284:
    pdStack_78 = pdStack_78 + 1;
    recovered_10002408((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_10002270;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      dVar6 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002408((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x17bU));
      uVar9 = 0x10;
      goto code_r0x10002268;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pcVar5 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
      goto code_r0x10002284;
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
      goto LAB_10002260;
    case 0x78:
code_r0x1000217c:
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
      goto LAB_1000226c;
    default:
      if (bVar1 == 0x49) goto code_r0x100021c0;
      if (bVar1 == 0x58) goto code_r0x1000217c;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_10001f40:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10001f44:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002270:
  param_3 = pbVar8 + 1;
  goto LAB_10001f14;
code_r0x10001fe0:
  pdStack_78 = pdStack_78 + 1;
  bVar1 = *pbVar8;
  goto LAB_10001ff0;
}

#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023cc
 */

void recovered_100023cc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_100065d2
#define str_100065d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002408
 */

void recovered_10002408(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_100065d2;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100023cc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100065d2

#undef str_100065d9
#define str_100065d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_100065ea
#define str_100065ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002458
 */

void recovered_10002458(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_100065d9;
  if (param_6 == 0) {
    pcVar1 = str_100065ea;
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
    recovered_100023cc(param_1,param_2,param_3,local_80[lVar6]);
  }
  return;
}

#undef str_100065d9
#undef str_100065ea
#undef local_80

/* Native variadic interface; Pooka's Free Software License. */
int recovered_100024fc(char *buffer,unsigned long capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_10001ea4(buffer,capacity,format,(void *)args);__builtin_va_end(args);return result;}


#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c70U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002524
 */

void recovered_10002524(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_100025ac(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_1000c0f0;
      if (DAT_1000c0f8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_1000c100 == (long *)0x0) {
        DAT_1000c100 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c100

#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c70U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c78U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ac
 */

void recovered_100025ac(long param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_1000c0f0;
      if (DAT_1000c0f8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000c100 == (long *)0x0) {
        DAT_1000c100 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c0f0
#undef DAT_1000c0f8
#undef DAT_1000c100

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
 * Address: 0x1000261c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000261c(int param_1)

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

#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002764
 */

void recovered_10002764(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c110 != 0) {
          DAT_1000c110 = DAT_1000c110 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000281c(1);
        }
        else {
          if (DAT_1000c110 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c110 == -2) {
            recovered_1000281c(0);
          }
          pcVar1 = &DAT_1000c118 + DAT_1000c110;
          DAT_1000c110 = DAT_1000c110 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118

#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000281c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000281c(int param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c110 != 0) || (param_1 != 0)) {
    if (DAT_1000c110 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000de4(local_230,&DAT_1000c118,DAT_1000c110);
      uVar2 = DAT_1000c110;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_100035b0(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_1000c110 = 0;
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100028a8(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c110 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000de4(auStack_230,&DAT_1000c118,DAT_1000c110);
    uVar2 = DAT_1000c110;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_100035b0(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_1000c110 = 0;
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100028b0(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c110 != 0) {
    if (DAT_1000c110 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000de4(auStack_230,&DAT_1000c118,DAT_1000c110);
      uVar2 = DAT_1000c110;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_100035b0(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_1000c110 = 0;
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_100065fe
#define DAT_100065fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eU)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b8
 */

void recovered_100028b8(undefined *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_100065fe;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_100024fc(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002764(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_100065fe
#undef acStack_160

#undef DAT_1000661c
#define DAT_1000661c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
#undef str_10006601
#define str_10006601 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x181U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000291c
 */

/* WARNING: Removing unreachable block (ram,0x10002968) */

void recovered_1000291c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002940(str_10006601);
  pcVar4 = &DAT_1000661c;
  for (uVar3 = recovered_100012a4(&DAT_1000661c); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c110 != 0) {
        DAT_1000c110 = DAT_1000c110 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000281c(1);
      }
      else {
        if (DAT_1000c110 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c110 == -2) {
          recovered_1000281c(0);
        }
        pcVar1 = &DAT_1000c118 + DAT_1000c110;
        DAT_1000c110 = DAT_1000c110 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000661c
#undef DAT_1000c110
#undef DAT_1000c118
#undef str_10006601

#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002940
 */

void recovered_10002940(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_100012a4(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c110 != 0) {
          DAT_1000c110 = DAT_1000c110 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000281c(1);
        }
        else {
          if (DAT_1000c110 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c110 == -2) {
            recovered_1000281c(0);
          }
          pcVar1 = &DAT_1000c118 + DAT_1000c110;
          DAT_1000c110 = DAT_1000c110 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118

#undef DAT_1000661c
#define DAT_1000661c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c90U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c98U)))
#undef str_1000661f
#define str_1000661f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000296c
 */

/* WARNING: Removing unreachable block (ram,0x10002968) */

void recovered_1000296c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002940(str_1000661f);
  pcVar4 = &DAT_1000661c;
  for (uVar3 = recovered_100012a4(&DAT_1000661c); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c110 != 0) {
        DAT_1000c110 = DAT_1000c110 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000281c(1);
      }
      else {
        if (DAT_1000c110 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c110 == -2) {
          recovered_1000281c(0);
        }
        pcVar1 = &DAT_1000c118 + DAT_1000c110;
        DAT_1000c110 = DAT_1000c110 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000661c
#undef DAT_1000c110
#undef DAT_1000c118
#undef str_1000661f

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002990(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_100028b0();
    bVar2 = recovered_100035b0(0x44);
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
 * Address: 0x10002a08
 */

undefined8 recovered_10002a08(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a0c
 */

void recovered_10002a0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a10
 */

undefined8 recovered_10002a10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_100065fe
#define DAT_100065fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eU)))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef str_100066b3
#define str_100066b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_100066c0
#define str_100066c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
#undef str_100066ce
#define str_100066ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24eU)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a18
 */

undefined4 * recovered_10002a18(char *param_1,char *param_2)

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

  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    DAT_1000c068 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100012c8(param_1,str_100066b3);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100012c8(param_1,str_100066c0);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100012c8(param_1,str_100066ce);
      if (iVar3 != 0) {
        puVar4 = recovered_10000d10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c068 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000fd0(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10001348(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001348(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001348(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10001348(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001348(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001348(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10001348(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_100024fc_1((char *)(puVar4 + 1),0xf1,&DAT_100065fe,(ulonglong)param_1);
        recovered_10000fd0(&uStack_4c,0,0xc);
        uVar6 = recovered_10002c54(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c068 = 2;
LAB_10002bfc:
            recovered_10000d54(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001348(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002ca4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002bfc;
              recovered_10000de4(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000d10(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c068 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000fd0(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_100024fc_1((char *)(puVar4 + 1),0xf1,&DAT_100065fe,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_100065fe
#undef DAT_1000c068
#undef str_100066b3
#undef str_100066c0
#undef str_100066ce
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c54
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002c54(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100035b0(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca4
 */

undefined8 recovered_10002ca4(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000d98(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_1000c068 = 0xc;
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

#undef DAT_1000c068

#undef DAT_100065fe
#define DAT_100065fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eU)))
#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef str_100066b3
#define str_100066b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_100066c0
#define str_100066c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
#undef str_100066ce
#define str_100066ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24eU)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d2c
 */

undefined4 * recovered_10002d2c(char *param_1,char *param_2,void *param_3)

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

  if (param_3 != (void *)0x0) {
    recovered_10002d60(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    DAT_1000c068 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100012c8(param_1,str_100066b3);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100012c8(param_1,str_100066c0);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100012c8(param_1,str_100066ce);
      if (iVar3 != 0) {
        puVar4 = recovered_10000d10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c068 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000fd0(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10001348(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001348(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001348(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10001348(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001348(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001348(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10001348(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_100024fc_1((char *)(puVar4 + 1),0xf1,&DAT_100065fe,(ulonglong)param_1);
        recovered_10000fd0(&uStack_4c,0,0xc);
        uVar6 = recovered_10002c54(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c068 = 2;
LAB_10002bfc:
            recovered_10000d54(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001348(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002ca4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002bfc;
              recovered_10000de4(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000d10(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c068 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000fd0(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_100024fc_1((char *)(puVar4 + 1),0xf1,&DAT_100065fe,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_100065fe
#undef DAT_1000c068
#undef str_100066b3
#undef str_100066c0
#undef str_100066ce
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d60
 */

undefined8 recovered_10002d60(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003184(param_1);
    if (*(void **)((long)param_1 + 0x100) != (void *)0x0) {
      recovered_10000d54(*(void **)((long)param_1 + 0x100));
    }
    recovered_10000d54(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002da4
 */

ulong recovered_10002da4(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
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
          size = uVar7;
          if (uVar6 <= uVar7) {
            size = uVar6;
          }
          recovered_10000de4(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),size);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + size;
          if (uVar7 < uVar6) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = size / param_2;
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
            uVar4 = recovered_10002ed8(param_4);
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


#undef DAT_100065d1
#define DAT_100065d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed8
 */

uint recovered_10002ed8(int *param_1)

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
LAB_10002f70:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10002990((long)text,0x1fe,&DAT_100065d1,0);
      if (bVar2) {
        uVar3 = recovered_100012a4(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002f70;
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

#undef DAT_100065d1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fbc
 */

long recovered_10002fbc(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10002764(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_100030bc;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002ca4((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000fd0((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000de4((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_100030bc;
    }
  }
  param_3 = 0;
LAB_100030bc:
  return param_3;
}


#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030cc
 */

undefined8 recovered_100030cc(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000c068 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_100030d8;
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
LAB_100030d8:
  DAT_1000c068 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c068

#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

undefined8 recovered_10003160(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000c068 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000c068

#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003184
 */

undefined8 recovered_10003184(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003360(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_1000c068 = 5;
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

#undef DAT_1000c068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

undefined1 recovered_100031f8(long param_1)

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
 * Address: 0x10003204
 */

undefined1 recovered_10003204(long param_1)

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
 * Address: 0x10003210
 */

void recovered_10003210(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003224
 */

uint recovered_10003224(uint param_1,long param_2)

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


#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003248
 */

undefined8 recovered_10003248(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c068 = 0x16;
  }
  else {
    uVar1 = recovered_10003280(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c068 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c068

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003280(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100035b0(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100032b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_1000c068
#define DAT_1000c068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c4
 */

undefined8 recovered_100032c4(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    DAT_1000c068 = 0x16;
  }
  else {
    recovered_10000fd0(&uStack_2c,0,0xc);
    uVar1 = recovered_10002c54(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c068 = 2;
    }
    else {
      uVar1 = recovered_10003360(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003280(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c068 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c068
#undef uStack_28
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100035b0(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100033b0. Too many branches */
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
 * Address: 0x100033c0
 */

undefined8 recovered_100033c0(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000fd0(&uStack_3c,0,0xc);
    uVar2 = recovered_10002c54(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_10000d10((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000de4(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = out;
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
 * Address: 0x10003460
 */

bool recovered_10003460(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003360(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000348c
 */

undefined8 recovered_1000348c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003490
 */

void recovered_10003490(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003494
 */

undefined8 recovered_10003494(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003498(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000349c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a0
 */

void recovered_100034a0(long in_x0,char in_w1,long in_x2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = (char *)(in_x0 + -1);
  do {
    if (in_x2 == 0) {
      return;
    }
    pcVar1 = pcVar1 + 1;
    in_x2 = in_x2 + -1;
  } while (*pcVar1 != in_w1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034c4
 */

int recovered_100034c4(byte *param_1,byte *param_2,long param_3)

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


#undef DAT_10006642
#define DAT_10006642 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_10006645
#define str_10006645 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c5U)))
#undef str_10006652
#define str_10006652 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d2U)))
#undef str_1000665c
#define str_1000665c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcU)))
#undef str_10006670
#define str_10006670 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000667e
#define str_1000667e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1feU)))
#undef str_10006690
#define str_10006690 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x210U)))
#undef str_1000669c
#define str_1000669c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_100066ad
#define str_100066ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034f4
 */

char * recovered_100034f4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10006642;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003520_caseD_1;
  case 2:
    return str_10006645;
  case 5:
    return str_10006652;
  case 9:
    return str_1000665c;
  case 0xc:
    return str_10006670;
  case 0xd:
    return str_1000667e;
  default:
    if (param_1 == 0x11) {
      return str_10006690;
    }
    if (param_1 == 0x16) {
      return str_1000669c;
    }
switchD_10003520_caseD_1:
    return str_100066ad;
  }
}

#undef DAT_10006642
#undef str_10006645
#undef str_10006652
#undef str_1000665c
#undef str_10006670
#undef str_1000667e
#undef str_10006690
#undef str_1000669c
#undef str_100066ad

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

__attribute__((naked, returns_twice)) unsigned long recovered_10003594(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003598
 */

undefined8 recovered_10003598(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c108
#define DAT_1000c108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000359c
 */

void recovered_1000359c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c108 = DAT_1000c108 + 1;
  return;
}

#undef DAT_1000c108

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
 * Address: 0x100035b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100035b0(int param_1)

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
 * Address: 0x1000367c
 */

void recovered_1000367c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x1000368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003690(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100036cc(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003710
 */

void recovered_10003710(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000cfc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003720);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003724
 */

undefined8 recovered_10003724(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000372c
 */

void recovered_1000372c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000373c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003710();
}


#undef DAT_1000c318
#define DAT_1000c318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5e98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000373c
 */

long recovered_1000373c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c318;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c318 = param_1;
  return param_1 + 0x30;
}

#undef DAT_1000c318

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000375c
 */

void * recovered_1000375c(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000d10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cfc();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000378c
 */

void * recovered_1000378c(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000d10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cfc();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003790
 */

void recovered_10003790(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a8
 */

void recovered_100037a8(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c0
 */

void recovered_100037c0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d54(param_1);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100037d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100037f8((undefined8 *)(param_1 + -0x30));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037f0
 */

undefined8 recovered_100037f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037f8
 */

void recovered_100037f8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003808
 */

void recovered_10003808(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003818
 */

void recovered_10003818(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000381c
 */

undefined1 * recovered_1000381c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000d10(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003710();
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
 * Address: 0x10003864
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003864(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_1000261c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

long recovered_10003874(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c318
#define DAT_1000c318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5e98U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000387c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000387c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c318;
  if (DAT_1000c318 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c318 + 0x10);
    DAT_1000c318 = *(long *)(DAT_1000c318 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_1000261c(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c318
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d4
 */

void recovered_100038d4(long param_1,ulong param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(ulong *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100038f4((ulong *)(param_1 + -0x30));
}


#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5ea0U)))
#define cStack_2e (*(char *)(frame + 18))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f4
 */

void recovered_100038f4(ulong *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long *extraout_x1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c320;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003954;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10003edc((long)puVar2,*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = (ulong)puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003a00((long *)param_1,extraout_x1);
LAB_10003954:
                    /* WARNING: Subroutine does not return */
  recovered_10003710();
}

#undef DAT_1000c320
#undef cStack_2e
#undef local_30
#undef local_28
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c318
#define DAT_1000c318 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5e98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003958
 */

void recovered_10003958(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  puVar1 = DAT_1000c318;
  if (DAT_1000c318 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003710();
  }
  *(undefined1 *)(DAT_1000c318 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100038f4(puVar1);
}

#undef DAT_1000c318

#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5ea0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003988
 */

void recovered_10003988(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c320;
  DAT_1000c320 = param_1;
  return;
}

#undef DAT_1000c320

#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5ea0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000399c
 */

void recovered_1000399c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c320;
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

#undef DAT_1000c320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c8
 */

void recovered_100039c8(ulong *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100038f4(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d4
 */

void recovered_100039d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003710();
}


#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5ea0U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039e0
 */

undefined8 recovered_100039e0(long *param_1,long *param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  ulong *puVar3;
  long *extraout_x0;
  long *extraout_x1;
  long *plVar4;

  if (DAT_1000c320 != (long *)0x0) {
    DAT_1000c320 = (long *)*DAT_1000c320;
  }
  bVar2 = recovered_10003a00(param_1,param_2);
  puVar3 = (ulong *)(ulong)bVar2;
  plVar4 = DAT_1000c320;
  while( true ) {
    DAT_1000c320 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003710();
    }
    if (plVar4 == (long *)puVar3[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10003edc((long)plVar4,*puVar3,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar4[2] = (long)puVar3;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)(plVar4 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003a94;
    }
    plVar4 = (long *)*plVar4;
  }
  plVar4[2] = (long)puVar3;
  uVar1 = puVar3[4];
  *(undefined4 *)(plVar4 + 3) = *(undefined4 *)((long)puVar3 + 0x24);
  *(int *)(plVar4 + 1) = (int)uVar1;
LAB_10003a94:
  recovered_1000367c((long)plVar4);
  recovered_100039e0(extraout_x0,extraout_x1);
  return 0;
}

#undef DAT_1000c320
#undef uStack_50
#undef uStack_48

#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5ea0U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a00
 */

uchar recovered_10003a00(long *param_1,long *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *extraout_x0;
  long *extraout_x1;
  long *plVar2;

  plVar2 = DAT_1000c320;
  while( true ) {
    DAT_1000c320 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003710();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10003edc((long)plVar2,*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003a94;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  lVar1 = param_1[4];
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(int *)(plVar2 + 1) = (int)lVar1;
LAB_10003a94:
  recovered_1000367c((long)plVar2);
  recovered_100039e0(extraout_x0,extraout_x1);
  return '\0';
}

#undef DAT_1000c320
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a9c
 */

undefined8 recovered_10003a9c(long *in_x0,long *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100039e0(in_x0,in_x1);
  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003aa8(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

void recovered_10003ab0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003710();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003abc
 */

long recovered_10003abc(long *param_1,undefined8 param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != 0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    uVar1 = recovered_10003afc(*(ulong *)(*param_1 + -8),(long *)param_3);
    lVar2 = (long)param_1 + lVar2;
    if (uVar1 == '\0') {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003afc
 */

uchar recovered_10003afc(ulong param_1,long *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (in_x1 == (long *)0x0) {
LAB_10003b80:
    bVar3 = true;
  }
  else {
    while ((plVar4 = (long *)param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != in_x1 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)in_x1[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003b80;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003b80;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (ulong)(long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state + 0x5c40U)) {
        param_1 = (ulong)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b88
 */

void recovered_10003b88(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b8c
 */

undefined8 recovered_10003b8c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b94
 */

bool recovered_10003b94(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba4
 */

bool recovered_10003ba4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bdc
 */

bool recovered_10003bdc(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf8
 */

bool recovered_10003bf8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c10
 */

bool recovered_10003c10(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c28
 */

bool recovered_10003c28(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c40
 */

bool recovered_10003c40(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10006528
#define DAT_10006528 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_10006530
#define DAT_10006530 (*(double *)(((uintptr_t)pf_module_state + 0xb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c58
 */

uint128 recovered_10003c58(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (NAN(param_1)) {
    dVar4 = param_1;
  }
  else if (param_1 <= DAT_10006528) {
    dVar4 = 0.0;
    if (DAT_10006530 <= param_1) {
      iVar2 = 0;
      for (; 0.5 < param_1; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      for (; param_1 < -0.5; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        dVar5 = dVar5 * (param_1 / dVar6);
        dVar4 = dVar4 + dVar5;
        dVar6 = dVar6 + 1.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = INFINITY;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
  return auVar1;
}

#undef DAT_10006528
#undef DAT_10006530

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d18
 */

void recovered_10003d18(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003c58((double)param_1);
  return;
}


#undef DAT_10006528
#define DAT_10006528 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_10006530
#define DAT_10006530 (*(double *)(((uintptr_t)pf_module_state + 0xb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d34
 */

uint128 recovered_10003d34(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (NAN(param_1)) {
    dVar4 = param_1;
  }
  else if (param_1 <= DAT_10006528) {
    dVar4 = 0.0;
    if (DAT_10006530 <= param_1) {
      iVar2 = 0;
      for (; 0.5 < param_1; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      for (; param_1 < -0.5; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        dVar5 = dVar5 * (param_1 / dVar6);
        dVar4 = dVar4 + dVar5;
        dVar6 = dVar6 + 1.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = INFINITY;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
  return auVar1;
}

#undef DAT_10006528
#undef DAT_10006530

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d38
 */

uint128 recovered_10003d38(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = (double)param_1 - (double)param_2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d48
 */

uint128 recovered_10003d48(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar2 = recovered_100015f0(param_1);
  dVar3 = dVar2;
  if (param_1 - dVar2 <= -0.5) {
    dVar3 = dVar2 + -1.0;
  }
  if (0.5 <= param_1 - dVar2) {
    dVar3 = dVar2 + 1.0;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar3;
  return auVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d94
 */

long recovered_10003d94(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003dd4;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003dd4:
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
      goto LAB_10003e58;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003e58;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003e58;
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
LAB_10003e58:
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
 * Address: 0x10003ed8
 */

long recovered_10003ed8(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003dd4;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003dd4:
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
      goto LAB_10003e58;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003e58;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003e58;
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
LAB_10003e58:
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

#undef DAT_10006548
#define DAT_10006548 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#define local_68 (*(byte * *)(frame + 24))
#define pbStack_70 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003edc
 */

undefined8 recovered_10003edc(long param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uchar uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *in_x1;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;

  pbVar7 = *(byte **)(param_1 + 0x38);
  if (pbVar7 != (byte *)0x0) {
    local_68 = pbVar7 + 1;
    pbVar8 = local_68;
    if (*pbVar7 != 0xff) {
      recovered_100040b4((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      puVar5 = recovered_100041a8((long)&local_68);
      pbVar7 = local_68 + (long)puVar5;
    }
    local_68 = local_68 + 1;
    puVar5 = recovered_100041a8((long)&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + (long)puVar5;
      while (local_68 < pbVar8) {
        puVar5 = recovered_100041a8((long)&local_68);
        puVar6 = recovered_100041a8((long)&local_68);
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(int *)(param_3 + 2) = (int)puVar5;
          *(undefined4 *)(param_3 + 4) = 0;
          if (((ulong)puVar6 & 0xffffffff) == 0) {
            *(undefined1 *)((long)param_3 + 1) = 1;
            return 0;
          }
          pbStack_70 = pbVar8 + (((ulong)puVar6 & 0xffffffff) - 1);
          uVar10 = (ulong)bVar1 & 0xf;
          iVar9 = 0x40;
          do {
            uVar3 = recovered_1000420c(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar4 = recovered_1000420c(&pbStack_70);
            if (uVar3 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar3) {
              in_x1 = (ulong *)0x0;
              if ((((uint)uVar10 < 0xd && 0 < (int)uVar3) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar10 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10006548 + uVar10 * 8) * (uVar3 & 0x7fffffff);
                in_x1 = recovered_100040b4((uint)bVar1,(long *)&local_68);
              }
              uVar2 = recovered_10003afc(param_2,(long *)in_x1);
              if (uVar2 != '\0') {
                *(undefined1 *)(param_3 + 1) = 1;
                *(int *)(param_3 + 4) = (int)uVar3;
                return 1;
              }
            }
            if (uVar4 == 0) {
              return 0;
            }
            pbStack_70 = pbVar8 + uVar4;
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

#undef DAT_10006548
#undef local_68
#undef pbStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040b4
 */

ulong * recovered_100040b4(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_100041e0(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_1000416c;
  case 1:
    puVar1 = recovered_100041a8((long)param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_100041e0(pbVar5,2);
    goto LAB_10004168;
  case 3:
    puVar1 = (ulong *)recovered_100041e0(pbVar5,4);
    goto LAB_10004130;
  default:
    goto switchD_100040fc_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_1000420c(param_2);
    break;
  case 10:
    uVar3 = recovered_100041e0(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004168:
    pbVar4 = pbVar5 + 2;
LAB_1000416c:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_100041e0(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004130:
    pbVar4 = pbVar5 + 4;
    goto LAB_1000416c;
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
switchD_100040fc_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a8
 */

undefined8 * recovered_100041a8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte *pbVar4;

  uVar3 = 0;
  puVar2 = (undefined8 *)0x0;
  pbVar4 = *(byte **)param_1;
  do {
    *(byte **)param_1 = pbVar4 + 1;
    bVar1 = *pbVar4;
    puVar2 = (undefined8 *)(((ulong)bVar1 & 0x7f) << (uVar3 & 0x3f) | (ulong)puVar2);
    uVar3 = (ulong)((int)uVar3 + 7);
    pbVar4 = pbVar4 + 1;
  } while ((char)bVar1 < '\0');
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e0
 */

ulong recovered_100041e0(byte *param_1,long param_2)

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
 * Address: 0x1000420c
 */

ulong recovered_1000420c(undefined8 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004284
 */

void recovered_10004284(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004290
 */

void recovered_10004290(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


#define uStack_30 (*(undefined8 *)(frame + 48))
#define local_42 (*(ushort *)(frame + 30))
#define local_40 (*(void * *)(frame + 32))
#define local_38 (*(undefined8 *)(frame + 40))
#define local_28 (*(int *)(frame + 56))
#define local_24 (*(short *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000429c
 */

undefined8 * recovered_1000429c(long param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;

  local_38 = 0;
  uStack_30 = 0;
  local_40 = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  if (param_1 != 0) {
    local_42 = 2;
    uVar2 = recovered_10004348(param_1,(long)&local_40,&local_42);
    iVar1 = 0;
    if (local_24 == 2) {
      iVar1 = (int)uVar2;
    }
    if ((iVar1 == 1) && (local_28 != 0)) {
      puVar3 = recovered_1000375c(0x28);
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      recovered_100043c8(puVar3,&local_40);
      puVar3[4] = 0;
      goto LAB_10004320;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_10004320:
  local_38 = 0;
  recovered_10003790(local_40);
  return puVar3;
}

#undef uStack_30
#undef local_42
#undef local_40
#undef local_38
#undef local_28
#undef local_24

#define local_30 (*(ulong *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 40))
#define local_38 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004348
 */

undefined8 recovered_10004348(long param_1,long param_2,ushort *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;

  local_30 = 0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  bVar1 = recovered_10004ec8(param_1,(long *)&local_38);
  if ((bVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10004f98(local_38,local_30,param_2,param_3);
  }
  local_30 = 0;
  recovered_10003790(local_38);
  return uVar2;
}

#undef local_30
#undef uStack_28
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043c8
 */

undefined8 * recovered_100043c8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;

  recovered_10004c0c(param_1,param_2);
  uVar1 = *(undefined2 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x1c) = uVar1;
  return param_1;
}


/* Recovered track generator; Pooka's Free Software License. */
long * recovered_10004400(uint frequency,uint duration,long waveform,uintptr_t side) {
 struct track { short *samples; unsigned long count,capacity; uint rate; ushort channels; unsigned long mixer; };
 const char *wave=(const char *)waveform,*channel=(const char *)(uintptr_t)side;
 if((int)(frequency|duration)<0||!wave||!channel)return 0;
 const char *waves[3]={"square","sine","saw"},*channels[3]={"left","right","both"};
 int kind=-1,mode=-1;
 for(int k=0;k<3;++k){unsigned i=0;while(wave[i]&&wave[i]==waves[k][i])++i;if(wave[i]==waves[k][i])kind=k;}
 for(int k=0;k<3;++k){unsigned i=0;while(channel[i]&&channel[i]==channels[k][i])++i;if(channel[i]==channels[k][i])mode=k;}
 if(kind<0||mode<0)return 0;
 struct track *out=(struct track *)recovered_1000375c(sizeof(struct track));
 if(!out)return 0;
 out->samples=0;out->count=out->capacity=0;out->rate=44100;out->channels=2;out->mixer=0;
 unsigned long frames=(unsigned long)((long double)duration*44100.0L/1000.0L+0.5L);
 if(!frames)return (long *)out;
 out->samples=(short *)recovered_1000375c(frames*4);
 if(!out->samples){recovered_10003790(out);return 0;}
 out->count=out->capacity=frames*2;
 for(unsigned long i=0;i<frames;++i){
  short sample=0;
  if(frequency){
   double cycle=((double)i*(double)frequency)/44100.0;
   double phase=cycle-(double)(long)cycle,value;
   if(kind==0)value=phase<0.5?1.0:-1.0;
   else if(kind==2)value=phase+phase-1.0;
   else {
    double x=cycle*6.283185307179586;
    while(x>3.141592653589793)x-=6.283185307179586;
    while(x< -3.141592653589793)x+=6.283185307179586;
    double square=x*x,fourth=square*square,sixth=square*fourth;
    value=((square/ -6.0+1.0+fourth/120.0)-sixth/5040.0)*x;
   }
   double scaled=(value*0.75)*32767.0;
   sample=scaled<= -32768.0?-32768:scaled>=32767.0?32767:(short)(long)(scaled+(scaled>=0.0?0.5:-0.5));
  }
  out->samples[i*2]=mode==1?0:sample;
  out->samples[i*2+1]=mode==0?0:sample;
 }
 return (long *)out;
}


#undef DAT_100065b8
#define DAT_100065b8 (*(double *)(((uintptr_t)pf_module_state + 0x138U)))
#undef PTR_FUN_1000c000
#define PTR_FUN_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5b80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046e8
 */

undefined8 recovered_100046e8(ulong param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((0 < (long)param_1) && (param_2 != 0)) {
    if (((double)param_1 * (double)param_2) / DAT_100065b8 < 9.223372036854776e+18) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)PTR_FUN_1000c000)();
      return uVar1;
    }
    uVar1 = 0x7fffffffffffffff;
  }
  return uVar1;
}

#undef DAT_100065b8
#undef PTR_FUN_1000c000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004730
 */

void recovered_10004730(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_100059c0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_100065b0
#define DAT_100065b0 (*(double *)(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004738
 */

int recovered_10004738(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  long lVar2;

  if (param_1 <= -32768.0) {
    sVar1 = -0x8000;
  }
  else if (DAT_100065b0 <= param_1) {
    sVar1 = 0x7fff;
  }
  else {
    lVar2 = recovered_10001a50(param_1);
    sVar1 = (short)lVar2;
  }
  return (int)sVar1;
}

#undef DAT_100065b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004780
 */

int recovered_10004780(void *track,void *view)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;
  int iVar3;

  if (view == (void *)0x0) {
    return 0;
  }
  *(undefined8 *)view = 0;
  *(undefined8 *)((long)view + 8) = 0;
  *(undefined4 *)((long)view + 0x10) = 0;
  *(undefined2 *)((long)view + 0x14) = 0;
  if ((track == (void *)0x0) || (bVar2 = recovered_100047e8((long)track), bVar2)) {
    iVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)track + 8);
    *(undefined8 *)view = *(undefined8 *)track;
    *(undefined8 *)((long)view + 8) = uVar1;
    *(undefined4 *)((long)view + 0x10) = *(undefined4 *)((long)track + 0x18);
    *(undefined2 *)((long)view + 0x14) = *(undefined2 *)((long)track + 0x1c);
    iVar3 = 1;
  }
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e8
 */

bool recovered_100047e8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((*(long *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    return true;
  }
  return *(short *)(param_1 + 0x1c) == 0;
}


#define lStack_78 (*(long *)(frame + 24))
#define bStack_70 (*(byte *)(frame + 32))
#define pvStack_38 (*(void * *)(frame + 88))
#define lStack_30 (*(long *)(frame + 96))
#define uStack_28 (*(undefined8 *)(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004810
 */

byte recovered_10004810(undefined8 *param_1,long param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;

  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0;
  }
  bVar2 = 0;
  if (param_2 != 0) {
    lStack_30 = 0;
    uStack_28 = 0;
    pvStack_38 = (void *)0x0;
    uVar1 = recovered_10005d40(param_1,&pvStack_38);
    if ((uVar1 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      recovered_1000617c(&lStack_78,(char *)param_2,4);
      if ((lStack_78 == 0) ||
         (recovered_1000620c(&lStack_78,(long)pvStack_38,lStack_30), lStack_78 == 0)) {
        bVar2 = 0;
      }
      else {
        bVar2 = bStack_70;
      }
      recovered_10005488(&lStack_78);
    }
    lStack_30 = 0;
    recovered_10003790(pvStack_38);
  }
  return bVar2 & 1;
}

#undef lStack_78
#undef bStack_70
#undef pvStack_38
#undef lStack_30
#undef uStack_28

#define uStack_28 (*(undefined8 *)(frame + 104))
#define local_78 (*(long *)(frame + 24))
#define local_70 (*(byte *)(frame + 32))
#define local_38 (*(void * *)(frame + 88))
#define local_30 (*(long *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000482c
 */

byte recovered_1000482c(long param_1,undefined8 *param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;

  bVar2 = 0;
  if (param_1 != 0) {
    local_30 = 0;
    uStack_28 = 0;
    local_38 = (void *)0x0;
    uVar1 = recovered_10005d40(param_2,&local_38);
    if ((uVar1 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      recovered_1000617c(&local_78,(char *)param_1,4);
      if ((local_78 == 0) || (recovered_1000620c(&local_78,(long)local_38,local_30), local_78 == 0))
      {
        bVar2 = 0;
      }
      else {
        bVar2 = local_70;
      }
      recovered_10005488(&local_78);
    }
    local_30 = 0;
    recovered_10003790(local_38);
  }
  return bVar2 & 1;
}

#undef uStack_28
#undef local_78
#undef local_70
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048f4
 */

undefined8 recovered_100048f4(long *param_1,long *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  uint128 auVar13;
  double dVar14;

  uVar4 = 0;
  if (((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) && (-1 < param_3)) {
    if (((*(short *)((long)param_1 + 0x1c) == 2) && (*(short *)((long)param_2 + 0x1c) == 2)) &&
       ((*(uint *)(param_1 + 3) != 0 && ((int)param_2[3] != 0)))) {
      uVar7 = param_2[1];
      if (1 < (ulong)param_1[1] && 1 < uVar7) {
        uVar8 = (ulong)param_1[1] >> 1;
        uVar5 = recovered_100046e8(param_3,*(uint *)(param_1 + 3));
        uVar2 = uVar8 - uVar5;
        if (uVar5 <= uVar8 && uVar2 != 0) {
          dVar11 = pf_bits_double(NEON_ucvtf((ulong)*(uint *)(param_2 + 3)));
          dVar14 = pf_bits_double(NEON_ucvtf((ulong)*(uint *)(param_1 + 3)));
          dVar12 = recovered_1000160c((double)(uVar7 >> 1) / (dVar11 / dVar14));
          uVar7 = 0;
          uVar8 = (long)dVar12;
          if (uVar2 <= (ulong)(long)dVar12) {
            uVar8 = uVar2;
          }
          lVar6 = uVar5 << 2;
          for (; uVar7 < uVar8; uVar7 = uVar7 + 1) {
            lVar9 = -2;
            lVar10 = lVar6;
            do {
              sVar1 = *(short *)(*param_1 + lVar10);
              auVar13 = recovered_10004a4c((dVar11 / dVar14) * (double)uVar7,param_2,
                                           (int)lVar9 + 2U & 0xffff);
              iVar3 = recovered_10004738((*(double *)((uint8_t *)&(auVar13)+0)) + (double)(int)sVar1);
              *(short *)(*param_1 + lVar10) = (short)iVar3;
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + 2;
            } while (lVar9 != 0);
            lVar6 = lVar6 + 4;
          }
          param_1[4] = 0;
        }
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a4c
 */

uint128 recovered_10004a4c(double param_1,long *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint128 auVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;

  uVar1 = *(ushort *)((long)param_2 + 0x1c);
  uVar5 = (ulong)uVar1;
  if ((uVar1 != 0) && (param_3 <= uVar1 && uVar1 != param_3)) {
    uVar7 = param_2[1];
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar7 / uVar5;
    }
    dVar9 = (double)uVar8;
    bVar3 = false;
    bVar4 = false;
    if ((0.0 <= param_1 && uVar7 != 0) && uVar5 <= uVar7) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar9) && !NAN(param_1)) {
        bVar3 = dVar9 == param_1;
        bVar4 = param_1 <= dVar9;
      }
    }
    if (bVar4 && !bVar3) {
      dVar9 = recovered_100015f0(param_1);
      lVar6 = (long)dVar9;
      uVar8 = uVar8 - 1;
      if (lVar6 + 1U <= uVar8) {
        uVar8 = lVar6 + 1;
      }
      dVar10 = pf_bits_double(NEON_ucvtf((long)dVar9));
      dVar9 = (double)(int)*(short *)(*param_2 +
                                      (ulong)*(ushort *)((long)param_2 + 0x1c) * lVar6 * 2 +
                                     (ulong)param_3 * 2);
      dVar9 = dVar9 + (param_1 - dVar10) *
                      ((double)(int)*(short *)(*param_2 +
                                               uVar8 * *(ushort *)((long)param_2 + 0x1c) * 2 +
                                              (ulong)param_3 * 2) - dVar9);
      goto LAB_10004aa0;
    }
  }
  dVar9 = 0.0;
LAB_10004aa0:
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar9;
  return auVar2;
}


#define uStack_38 (*(undefined8 *)(frame + 40))
#define local_48 (*(void * *)(frame + 24))
#define local_40 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b10
 */

undefined8 recovered_10004b10(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  uVar2 = 0;
  if ((((long)param_2 <= (long)param_3) && (param_1 != (long *)0x0)) &&
     (-1 < (long)(param_3 | param_2))) {
    uVar5 = (ulong)*(ushort *)((long)param_1 + 0x1c);
    if ((uVar5 == 0) || (*(uint *)(param_1 + 3) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = (ulong)param_1[1] / uVar5;
      }
      uVar3 = recovered_100046e8(param_2,*(uint *)(param_1 + 3));
      uVar4 = recovered_100046e8(param_3,*(uint *)(param_1 + 3));
      uVar5 = uVar1;
      if (uVar3 <= uVar1) {
        uVar5 = uVar3;
      }
      if (uVar4 <= uVar1) {
        uVar1 = uVar4;
      }
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      local_40 = 0;
      uStack_38 = 0;
      local_48 = (void *)0x0;
      recovered_10004bf8((long *)&local_48,
                         (undefined2 *)(*param_1 + uVar5 * *(ushort *)((long)param_1 + 0x1c) * 2),
                         (undefined2 *)(*param_1 + uVar1 * *(ushort *)((long)param_1 + 0x1c) * 2));
      recovered_10004c0c(param_1,&local_48);
      param_1[4] = 0;
      local_40 = 0;
      recovered_10003790(local_48);
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef uStack_38
#undef local_48
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bf8
 */

long recovered_10004bf8(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  param_1[1] = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = *param_1 - lVar3 >> 1;
  }
  if (1 < (ulong)((long)param_3 - (long)param_2)) {
    uVar8 = (ulong)((long)param_3 - (long)param_2) >> 1;
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
      recovered_100059c0(param_1,uVar4);
      uVar5 = param_1[1];
      uVar6 = uVar5;
    }
    while (uVar7 < uVar5) {
      puVar1 = (undefined2 *)(*param_1 + (uVar5 - 1) * 2);
      puVar1[uVar8] = *puVar1;
      uVar5 = uVar5 - 1;
    }
    lVar3 = uVar7 << 1;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined2 *)(*param_1 + lVar3) = *param_2;
      lVar3 = lVar3 + 2;
    }
    param_1[1] = uVar6 + uVar8;
    lVar3 = *param_1;
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + uVar7 * 2;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c0c
 */

undefined8 * recovered_10004c0c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003790((void *)*param_1);
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


#define pvStack_50 (*(void * *)(frame + 16))
#define uStack_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c5c
 */

undefined8 recovered_10004c5c(double param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_2 != 0) {
    bVar2 = recovered_10003c40((ulong)param_1);
    if (0.0 < param_1 && bVar2) {
      if (((param_1 != 1.0) && (uVar4 = (ulong)*(ushort *)(param_2 + 0x1c), uVar4 != 0)) &&
         (uVar4 <= *(ulong *)(param_2 + 8))) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = *(ulong *)(param_2 + 8) / uVar4;
        }
        recovered_10004ce0((long *)&pvStack_50,param_1,param_2,uVar1);
        recovered_100043c8((undefined8 *)param_2,&pvStack_50);
        uStack_48 = 0;
        recovered_10003790(pvStack_50);
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef pvStack_50
#undef uStack_48

#define local_52 (*(undefined2 *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ce0
 */

void recovered_10004ce0(long *param_1,double param_2,long param_3,ulong param_4)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint128 auVar6;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  uVar1 = *(ushort *)(param_3 + 0x1c);
  *(ushort *)((long)param_1 + 0x1c) = uVar1;
  local_52 = 0;
  recovered_10004730(param_1,uVar1 * param_4,&local_52);
  if ((((0.0 < param_2) && (*(short *)(param_3 + 0x1c) != 0)) && (*(int *)(param_3 + 0x18) != 0)) &&
     (*(long *)(param_3 + 8) != 0)) {
    lVar3 = 0;
    for (uVar4 = 0; uVar4 != param_4; uVar4 = uVar4 + 1) {
      for (uVar5 = 0; uVar5 < *(ushort *)((long)param_1 + 0x1c); uVar5 = uVar5 + 1) {
        auVar6 = recovered_10004a4c((double)uVar4 * param_2,(long *)param_3,(uint)uVar5 & 0xffff);
        iVar2 = recovered_10004738((*(double *)((uint8_t *)&(auVar6)+0)));
        *(short *)(*param_1 + lVar3 * (ulong)*(ushort *)((long)param_1 + 0x1c) + uVar5 * 2) =
             (short)iVar2;
      }
      lVar3 = lVar3 + 2;
    }
  }
  return;
}

#undef local_52

#define pvStack_50 (*(void * *)(frame + 16))
#define uStack_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dec
 */

undefined8 recovered_10004dec(double param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_2 != 0) {
    bVar2 = recovered_10003c40((ulong)param_1);
    if (0.0 < param_1 && bVar2) {
      if (((param_1 != 1.0) && (uVar4 = (ulong)*(ushort *)(param_2 + 0x1c), uVar4 != 0)) &&
         (uVar4 <= *(ulong *)(param_2 + 8))) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = *(ulong *)(param_2 + 8) / uVar4;
        }
        if ((double)uVar1 / param_1 <= 0.0) {
          uVar4 = 0;
        }
        else {
          uVar4 = recovered_10001720((double)uVar1 / param_1);
        }
        recovered_10004ce0((long *)&pvStack_50,param_1,param_2,uVar4);
        recovered_100043c8((undefined8 *)param_2,&pvStack_50);
        uStack_48 = 0;
        recovered_10003790(pvStack_50);
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef pvStack_50
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e90
 */

undefined8 recovered_10004e90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e94
 */

undefined8 recovered_10004e94(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e9c
 */

undefined8 recovered_10004e9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea4
 */

void recovered_10004ea4(void *track)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *pointer;

  if (track == (void *)0x0) {
    return;
  }
  *(undefined8 *)((long)track + 0x20) = 0;
  pointer = recovered_1000626c(track);
  recovered_10000d54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec4
 */

void recovered_10004ec4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define local_60 (*(long *)(frame + 16))
#define local_58 (*(byte *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec8
 */

byte recovered_10004ec8(long param_1,long *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;

  bVar2 = 0;
  if ((param_1 == 0) || (param_2 == (long *)0x0)) goto LAB_10004f6c;
  recovered_10005400(&local_60,(char *)param_1,4);
  if (local_60 == 0) {
LAB_10004f60:
    bVar2 = 0;
  }
  else {
    recovered_100055f4(&local_60,0,2);
    uVar1 = recovered_10005644(&local_60);
    if ((long)uVar1 < 1) goto LAB_10004f60;
    recovered_100055f4(&local_60,0,0);
    recovered_10005398(param_2,uVar1);
    recovered_10005704(&local_60,*param_2,uVar1);
    if (local_60 == 0) goto LAB_10004f60;
    bVar2 = local_58;
  }
  recovered_10005488(&local_60);
LAB_10004f6c:
  return bVar2 & 1;
}

#undef local_60
#undef local_58

#undef DAT_10006700
#define DAT_10006700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10006705
#define DAT_10006705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x285U)))
#undef DAT_1000670a
#define DAT_1000670a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1000670f
#define DAT_1000670f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#define uStack_98 (*(undefined8 *)(frame + 56))
#define local_c0 (*(ulong *)(frame + 16))
#define local_b0 (*(uint3 * *)(frame + 32))
#define local_a8 (*(void * *)(frame + 40))
#define local_a0 (*(undefined8 *)(frame + 48))
#define local_90 (*(int *)(frame + 64))
#define local_8c (*(undefined2 *)(frame + 68))
#define local_82 (*(ushort *)(frame + 78))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f98
 */

undefined8 recovered_10004f98(void *param_1,ulong param_2,long param_3,ushort *param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  void *left;
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint3 *puVar17;
  uint3 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint128 auVar21;
  uint128 auVar22;
  double dVar23;

  if (param_2 < 0xc) {
    return 0;
  }
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar9 = recovered_10001070(param_1,&DAT_10006700,4);
  if ((iVar9 == 0) &&
     (iVar9 = recovered_10001070((void *)((long)param_1 + 8),&DAT_10006705,4), iVar9 == 0)) {
    local_c0 = 0;
    bVar8 = false;
    uVar19 = 0;
    puVar17 = (uint3 *)0x0;
    uVar16 = 0;
    iVar9 = 0;
    local_82 = 0;
    lVar12 = 0xc;
    while (uVar14 = lVar12 + 8, uVar14 <= param_2) {
      left = (void *)((long)param_1 + lVar12);
      uVar4 = *(uint *)((long)left + 4);
      uVar20 = (ulong)uVar4;
      if (param_2 < uVar14 + uVar20) {
        return 0;
      }
      iVar10 = recovered_10001070(left,&DAT_1000670a,4);
      if (iVar10 == 0) {
        if (uVar4 < 0x10) {
          return 0;
        }
        puVar1 = (ushort *)((long)param_1 + uVar14);
        local_82 = *puVar1;
        uVar7 = puVar1[1];
        iVar9 = *(int *)(puVar1 + 2);
        uVar6 = puVar1[7];
        uVar11 = recovered_10005758(&local_82,(long)puVar1,uVar20);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        uVar16 = (uint)uVar6;
        bVar8 = recovered_100057ac((uint)local_82,uVar16);
        if (!bVar8) {
          return 0;
        }
        local_c0 = (ulong)uVar7;
        bVar8 = true;
      }
      else {
        iVar10 = recovered_10001070(left,&DAT_1000670f,4);
        puVar18 = (uint3 *)((long)param_1 + uVar14);
        uVar13 = uVar20;
        if (iVar10 != 0 || puVar17 != (uint3 *)0x0) {
          puVar18 = puVar17;
          uVar13 = uVar19;
        }
        uVar19 = uVar13;
        puVar17 = puVar18;
      }
      lVar12 = uVar14 + uVar20 + (ulong)(uVar4 & 1);
    }
    if (!bVar8) {
      return 0;
    }
    if (puVar17 == (uint3 *)0x0) {
      return 0;
    }
    if (uVar19 == 0) {
      return 0;
    }
    if (local_c0 == 0) {
      return 0;
    }
    if (iVar9 == 0) {
      return 0;
    }
    if (uVar16 < 8) {
      return 0;
    }
    uVar20 = (ulong)(uVar16 >> 3);
    uVar14 = local_c0 * uVar20;
    if (uVar14 == 0) {
      return 0;
    }
    if (uVar19 < uVar14) {
      return 0;
    }
    uVar4 = (uint)local_c0;
    if (*param_4 != 0) {
      uVar4 = (uint)*param_4;
    }
    uVar13 = (ulong)uVar4;
    if (uVar4 != 0) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar19 / uVar14;
      }
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = (void *)0x0;
      local_8c = (undefined2)uVar4;
      local_90 = iVar9;
      recovered_100057e0((long *)&local_a8,uVar5 * uVar13);
      lVar12 = 0;
      uVar19 = 0;
      uVar3 = uVar20;
      if ((local_c0 & 0xfffe) == 0) {
        uVar3 = 0;
      }
      local_b0 = puVar17;
      for (; uVar19 < uVar5; uVar19 = uVar19 + 1) {
        puVar18 = (uint3 *)((long)puVar17 + uVar19 * uVar14);
        if (uVar4 == 2) {
          auVar21 = recovered_10005844(puVar18,(uint)local_82,uVar16);
          auVar22 = recovered_10005844((uint3 *)((long)puVar18 + uVar3),(uint)local_82,uVar16);
          iVar9 = recovered_10005964((*(double *)((uint8_t *)&(auVar21)+0)));
          *(short *)((long)local_a8 + uVar19 * 4) = (short)iVar9;
          iVar9 = recovered_10005964((*(double *)((uint8_t *)&(auVar22)+0)));
          *(short *)((long)local_a8 + uVar19 * 4 + 2) = (short)iVar9;
        }
        else if (uVar4 == 1) {
          dVar23 = 0.0;
          puVar18 = local_b0;
          for (uVar15 = local_c0; uVar15 != 0; uVar15 = uVar15 - 1) {
            auVar21 = recovered_10005844(puVar18,(uint)local_82,uVar16);
            dVar23 = dVar23 + (*(double *)((uint8_t *)&(auVar21)+0));
            puVar18 = (uint3 *)((long)puVar18 + uVar20);
          }
          iVar9 = recovered_10005964(dVar23 / (double)local_c0);
          *(short *)((long)local_a8 + uVar19 * 2) = (short)iVar9;
        }
        else {
          for (uVar15 = 0; uVar13 != uVar15; uVar15 = uVar15 + 1) {
            uVar2 = (uint)uVar15;
            if (local_c0 <= uVar15) {
              uVar2 = (uint)local_c0 - 1;
            }
            auVar21 = recovered_10005844((uint3 *)((long)puVar18 + (uVar2 & 0xffff) * uVar20),
                                         (uint)local_82,uVar16);
            iVar9 = recovered_10005964((*(double *)((uint8_t *)&(auVar21)+0)));
            *(short *)((long)local_a8 + uVar15 * 2 + lVar12) = (short)iVar9;
          }
        }
        local_b0 = (uint3 *)((long)local_b0 + uVar14);
        lVar12 = lVar12 + uVar13 * 2;
      }
      recovered_100043c8((undefined8 *)param_3,&local_a8);
      local_a0 = 0;
      recovered_10003790(local_a8);
      return 1;
    }
  }
  return 0;
}

#undef DAT_10006700
#undef DAT_10006705
#undef DAT_1000670a
#undef DAT_1000670f
#undef uStack_98
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_90
#undef local_8c
#undef local_82

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005398
 */

void recovered_10005398(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10005684(param_1,param_2);
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
 * Address: 0x10005400
 */

long * recovered_10005400(long *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  recovered_10005454(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005454
 */

void recovered_10005454(long *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100054b0(param_1,param_2,param_3 | 1);
  param_1[3] = *param_1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005488
 */

long * recovered_10005488(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005508(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b0
 */

void recovered_100054b0(long *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 *puVar2;

  recovered_10005508(param_1);
  pcVar1 = recovered_1000553c(param_3);
  puVar2 = recovered_10002a18(param_2,pcVar1);
  *param_1 = (long)puVar2;
  *(bool *)(param_1 + 1) = puVar2 != (undefined4 *)0x0;
  param_1[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005508
 */

void recovered_10005508(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((void *)*param_1 != (void *)0x0) {
    recovered_10002d60((void *)*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}


#undef DAT_100066dc
#define DAT_100066dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25cU)))
#undef DAT_100066e0
#define DAT_100066e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef DAT_100066e3
#define DAT_100066e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x263U)))
#undef DAT_100066f1
#define DAT_100066f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000553c
 */

undefined * recovered_1000553c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;

  bVar4 = (param_1 & 4) != 0;
  puVar1 = (undefined *)((uintptr_t)pf_module_state + 0x27eU);
  if (bVar4) {
    puVar1 = (undefined *)((uintptr_t)pf_module_state + 0x27bU);
  }
  puVar2 = (undefined *)((uintptr_t)pf_module_state + 0x279U);
  if (bVar4) {
    puVar2 = (undefined *)((uintptr_t)pf_module_state + 0x276U);
  }
  puVar3 = (undefined *)((uintptr_t)pf_module_state + 0x274U);
  if ((param_1 & 4) != 0) {
    puVar3 = &DAT_100066f1;
  }
  if ((param_1 & 8) != 0) {
    puVar2 = puVar3;
  }
  if ((param_1 & 2) != 0) {
    puVar1 = puVar2;
  }
  bVar4 = (param_1 & 4) != 0;
  puVar2 = (undefined *)((uintptr_t)pf_module_state + 0x26eU);
  if (bVar4) {
    puVar2 = (undefined *)((uintptr_t)pf_module_state + 0x26aU);
  }
  puVar3 = (undefined *)((uintptr_t)pf_module_state + 0x267U);
  if (bVar4) {
    puVar3 = &DAT_100066e3;
  }
  if ((param_1 & 0x10) != 0) {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_100066e0;
  if ((param_1 & 4) != 0) {
    puVar3 = &DAT_100066dc;
  }
  if ((param_1 & 8) != 0) {
    puVar2 = puVar3;
  }
  if (((param_1 ^ 0xffffffff) & 3) == 0) {
    puVar1 = puVar2;
  }
  return puVar1;
}

#undef DAT_100066dc
#undef DAT_100066e0
#undef DAT_100066e3
#undef DAT_100066f1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f4
 */

void recovered_100055f4(long *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;

  if ((int *)*param_1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (uint)(param_3 == 2) << 1;
    if (param_3 == 1) {
      iVar1 = 1;
    }
    uVar3 = recovered_100030cc((int *)*param_1,param_2,iVar1);
    bVar2 = (int)uVar3 == 0;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005644
 */

long recovered_10005644(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((*param_1 == 0) || (lVar1 = recovered_10003160(*param_1), lVar1 < 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    lVar1 = -1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005684
 */

void recovered_10005684(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_100056f8(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10003790((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f8
 */

void * recovered_100056f8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000d10(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cfc();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005704
 */

void recovered_10005704(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  uVar2 = 0;
  bVar1 = false;
  if (((-1 < param_3) && (param_2 != 0)) && ((int *)*param_1 != (int *)0x0)) {
    uVar2 = recovered_10002da4((undefined1 *)param_2,1,param_3,(int *)*param_1);
    bVar1 = uVar2 == param_3;
  }
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = uVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005758
 */

undefined8 recovered_10005758(ushort *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (ushort *)0x0) {
LAB_100057a0:
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0xfffe) {
      if (param_2 == 0) {
        return 0;
      }
      if (param_3 < 0x28) {
        return 0;
      }
      if ((*(ushort *)(param_2 + 0x10) < 0x16) || ((*(ushort *)(param_2 + 0x18) & 0xfffd) != 1))
      goto LAB_100057a0;
      *param_1 = *(ushort *)(param_2 + 0x18);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057ac
 */

bool recovered_100057ac(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = param_2 == 0x20 || param_2 == 0x40;
  if (param_1 != 3) {
    bVar1 = param_1 == 1 && (param_2 - 8U & 0xffe7) == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e0
 */

void recovered_100057e0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100059c0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#define local_20 (*(double *)(frame + 16))
#define local_14 (*(float *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005844
 */

uint128 recovered_10005844(uint3 *param_1,int param_2,int param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint128 auVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;

  dVar5 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_20 = 0.0;
      recovered_10000de4(&local_20,param_1,8);
      dVar5 = 1.0;
      if (local_20 <= 1.0) {
        dVar5 = local_20;
      }
      uVar3 = 0;
      uVar4 = 0xbff00000;
      if (-1.0 <= local_20) {
        uVar3 = SUB84(dVar5,0);
        uVar4 = (undefined4)((ulong)dVar5 >> 0x20);
      }
      dVar5 = pf_bits_double(CONCAT44(uVar4,uVar3));
    }
    else if (param_3 == 0x20) {
      local_14 = 0.0;
      recovered_10000de4(&local_14,param_1,4);
      dVar5 = 1.0;
      if ((double)local_14 <= 1.0) {
        dVar5 = (double)local_14;
      }
      uVar3 = 0;
      uVar4 = 0xbff00000;
      if (-1.0 <= local_14) {
        uVar3 = SUB84(dVar5,0);
        uVar4 = (undefined4)((ulong)dVar5 >> 0x20);
      }
      dVar5 = pf_bits_double(CONCAT44(uVar4,uVar3));
    }
  }
  else {
    dVar5 = 0.0;
    if (param_2 == 1) {
      dVar5 = 0.0;
      switch((uintptr_t)(param_3 - 8U >> 3 | param_3 << 0x1d)) {
      case 0:
        dVar5 = (double)(int)((byte)*param_1 - 0x80) / 128.0;
        break;
      case 1:
        dVar5 = (double)(int)(short)*param_1 / 32768.0;
        break;
      case 2:
        uVar1 = *param_1 | 0xff000000;
        if (-1 < *(char *)((long)param_1 + 2)) {
          uVar1 = (uint)*param_1;
        }
        dVar5 = (double)(int)uVar1 / 8388608.0;
        break;
      case 3:
        dVar5 = (double)*(int *)param_1 / 2147483648.0;
      }
    }
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar5;
  return auVar2;
}

#undef local_20
#undef local_14

#undef DAT_100065b0
#define DAT_100065b0 (*(double *)(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005964
 */

int recovered_10005964(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  long lVar2;
  double dVar3;

  if (param_1 <= -1.0) {
    sVar1 = -0x8000;
  }
  else if (1.0 <= param_1) {
    sVar1 = 0x7fff;
  }
  else {
    dVar3 = 32768.0;
    if (0.0 <= param_1) {
      dVar3 = DAT_100065b0;
    }
    lVar2 = recovered_10001a50(dVar3 * param_1);
    sVar1 = (short)lVar2;
  }
  return (int)sVar1;
}

#undef DAT_100065b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059c0
 */

void recovered_100059c0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10005a34(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)((long)pvVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_10003790((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a34
 */

void * recovered_10005a34(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 2;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000d10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cfc();
  }
  return pvVar1;
}


#undef DAT_100065d1
#define DAT_100065d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a44
 */

bool recovered_10005a44(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;

  lVar5 = param_1[1];
  pcVar4 = &DAT_100065d1;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  pcVar6 = &DAT_100065d1;
  if ((char *)*param_2 != (char *)0x0) {
    pcVar6 = (char *)*param_2;
  }
  if (lVar5 == param_2[1]) {
    do {
      bVar3 = lVar5 == 0;
      if (lVar5 == 0) {
        return true;
      }
      cVar1 = *pcVar4;
      cVar2 = *pcVar6;
      lVar5 = lVar5 + -1;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_100065d1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a6c
 */

long * recovered_10005a6c(long *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10005b98(param_2);
  recovered_10005ab0(param_1,param_2,uVar1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ab0
 */

void recovered_10005ab0(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  void *pointer;
  ulong uVar3;
  long lVar4;
  long lVar5;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  puVar2 = recovered_10005bbc(param_1,param_2,(ulong)&local_38);
  if ((int)puVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10005c08(param_1);
    }
    else {
      recovered_10005c40(param_1,uVar1);
      for (uVar3 = 0; uVar1 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_10005cb8(&local_50,*param_1 + local_38,uVar1);
    pointer = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pointer;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_10003790(pointer);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b98
 */

long recovered_10005b98(long param_1)

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
 * Address: 0x10005bbc
 */

undefined8 * recovered_10005bbc(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;

  puVar1 = (undefined8 *)0x0;
  if ((param_2 != 0) && (*param_1 != 0)) {
    uVar3 = 0;
    lVar2 = param_2 - *param_1;
    do {
      if ((ulong)param_1[1] < uVar3) {
        return (undefined8 *)0x0;
      }
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *(long *)param_3 = lVar2;
    puVar1 = (undefined8 *)0x1;
  }
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c08
 */

void recovered_10005c08(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long extraout_x0;

  if (*param_1 == 0) {
    recovered_10005cec(0);
    *param_1 = extraout_x0;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c40
 */

void recovered_10005c40(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005cec(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_x0 + param_1[1]) = 0;
    recovered_10003790((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb8
 */

undefined8 * recovered_10005cb8(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10005ab0(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cec
 */

void recovered_10005cec(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = recovered_1000375c(param_1 + 1);
  *puVar1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d08
 */

bool recovered_10005d08(char *param_1,long param_2,char *param_3,long param_4)

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


#undef DAT_10006700
#define DAT_10006700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10006705
#define DAT_10006705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x285U)))
#undef DAT_1000670a
#define DAT_1000670a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1000670f
#define DAT_1000670f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define local_58 (*(void * *)(frame + 24))
#define local_50 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d40
 */

undefined8 recovered_10005d40(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;

  if ((param_2 != (undefined8 *)0x0) && (*(uint *)(param_1 + 3) != 0)) {
    uVar2 = *(ushort *)((long)param_1 + 0x1c);
    uVar4 = (ulong)uVar2;
    if (uVar4 != 0) {
      uVar5 = param_1[1];
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar5 / uVar4;
      }
      if ((uVar5 == uVar3 * uVar4) && (uVar5 = uVar5 * 2, uVar5 < 0xffffffdc)) {
        uVar4 = (ulong)*(uint *)(param_1 + 3) * (ulong)uVar2 * 2;
        if ((short)uVar2 < 0) {
          return 0;
        }
        if ((uVar4 & 0xffffffff00000000) != 0) {
          return 0;
        }
        local_50 = 0;
        uStack_48 = 0;
        local_58 = (void *)0x0;
        recovered_10005684((long *)&local_58,uVar5 + 0x2c);
        recovered_10005efc((long *)&local_58,&DAT_10006700,4);
        recovered_10005f14((long *)&local_58,(int)uVar5 + 0x24);
        recovered_10005efc((long *)&local_58,&DAT_10006705,4);
        recovered_10005efc((long *)&local_58,&DAT_1000670a,4);
        recovered_10005f14((long *)&local_58,0x10);
        recovered_10005f84((long *)&local_58,1);
        recovered_10005f84((long *)&local_58,(uint)*(ushort *)((long)param_1 + 0x1c));
        recovered_10005f14((long *)&local_58,*(undefined4 *)(param_1 + 3));
        recovered_10005f14((long *)&local_58,(int)uVar4);
        recovered_10005f84((long *)&local_58,(uVar2 & 0x7fff) << 1);
        recovered_10005f84((long *)&local_58,0x10);
        recovered_10005efc((long *)&local_58,&DAT_1000670f,4);
        recovered_10005f14((long *)&local_58,(int)uVar5);
        puVar1 = (ushort *)*param_1;
        for (lVar6 = param_1[1] << 1; lVar6 != 0; lVar6 = lVar6 + -2) {
          recovered_10005f84((long *)&local_58,(uint)*puVar1);
          puVar1 = puVar1 + 1;
        }
        recovered_10005fcc(param_2,&local_58);
        local_50 = 0;
        recovered_10003790(local_58);
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_10006700
#undef DAT_10006705
#undef DAT_1000670a
#undef DAT_1000670f
#undef uStack_48
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005efc
 */

long recovered_10005efc(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  puVar1 = param_2 + param_3;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    uVar8 = param_1[1];
  }
  else {
    uVar8 = (*param_1 + param_1[1]) - lVar5;
  }
  lVar4 = (long)puVar1 - (long)param_2;
  if (lVar4 != 0) {
    uVar7 = param_1[1];
    uVar6 = param_1[2];
    if (uVar6 < uVar7 + lVar4) {
      uVar3 = 4;
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
      do {
        uVar6 = uVar3;
        uVar3 = uVar6 << 1;
      } while (uVar6 < uVar7 + lVar4);
      recovered_10005684(param_1,uVar6);
      uVar7 = param_1[1];
    }
    while (uVar8 < uVar7) {
      puVar2 = (undefined1 *)(*param_1 + (uVar7 - 1));
      puVar2[lVar4] = *puVar2;
      uVar7 = uVar7 - 1;
    }
    uVar7 = uVar8;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      *(undefined1 *)(*param_1 + uVar7) = *param_2;
      uVar7 = uVar7 + 1;
    }
    lVar5 = *param_1;
    param_1[1] = param_1[1] + lVar4;
  }
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = lVar5 + uVar8;
  }
  return lVar4;
}


#define local_24 (*(undefined1 *)(frame + 28))
#define local_23 (*(undefined1 *)(frame + 29))
#define local_22 (*(undefined1 *)(frame + 30))
#define local_21 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f14
 */

void recovered_10005f14(long *param_1,undefined4 param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};


  local_21 = (undefined1)param_2;
  recovered_10006114(param_1,&local_21);
  local_22 = (undefined1)((uint)param_2 >> 8);
  recovered_10006114(param_1,&local_22);
  local_23 = (undefined1)((uint)param_2 >> 0x10);
  recovered_10006114(param_1,&local_23);
  local_24 = (undefined1)((uint)param_2 >> 0x18);
  recovered_10006114(param_1,&local_24);
  return;
}

#undef local_24
#undef local_23
#undef local_22
#undef local_21

#define local_22 (*(undefined1 *)(frame + 30))
#define local_21 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f84
 */

void recovered_10005f84(long *param_1,undefined4 param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};


  local_21 = (undefined1)param_2;
  recovered_10006114(param_1,&local_21);
  local_22 = (undefined1)((uint)param_2 >> 8);
  recovered_10006114(param_1,&local_22);
  return;
}

#undef local_22
#undef local_21

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fcc
 */

undefined8 * recovered_10005fcc(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003790((void *)*param_1);
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
 * Address: 0x1000601c
 */

long recovered_1000601c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005684(param_1,uVar5);
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
 * Address: 0x10006114
 */

long recovered_10006114(long *param_1,undefined1 *param_2)

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
    recovered_10005684(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000617c
 */

undefined8 * recovered_1000617c(undefined8 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 10;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0x20;
  recovered_100061e0(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061e0
 */

void recovered_100061e0(undefined8 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100054b0(param_1,param_2,param_3 | 2);
  param_1[3] = *param_1;
  param_1[4] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000620c
 */

void recovered_1000620c(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((uint *)*param_1 != (uint *)0x0) {
    if ((-1 < param_3) && (param_2 != 0 || param_3 == 0)) {
      lVar1 = recovered_10002fbc((void *)param_2,1,param_3,(uint *)*param_1);
      *(bool *)(param_1 + 1) = lVar1 == param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000626c
 */

undefined8 * recovered_1000626c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10003790((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006298
 */

void recovered_10006298(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_100059c0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006304
 */

long recovered_10006304(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 *puVar1;
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
    uVar7 = param_2 - lVar3 >> 1;
  }
  if (1 < (ulong)((long)param_4 - (long)param_3)) {
    uVar8 = (ulong)((long)param_4 - (long)param_3) >> 1;
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
      recovered_100059c0(param_1,uVar4);
      uVar5 = param_1[1];
      uVar6 = uVar5;
    }
    while (uVar7 < uVar5) {
      puVar1 = (undefined2 *)(*param_1 + (uVar5 - 1) * 2);
      puVar1[uVar8] = *puVar1;
      uVar5 = uVar5 - 1;
    }
    lVar3 = uVar7 << 1;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined2 *)(*param_1 + lVar3) = *param_3;
      lVar3 = lVar3 + 2;
    }
    param_1[1] = uVar6 + uVar8;
    lVar3 = *param_1;
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + uVar7 * 2;
  }
  return lVar2;
}


/* Runtime rounding import; Pooka's Free Software License. */
long long recovered_10006480(double value){if(!(value<9223372036854775808.0)||value< -9223372036854775808.0)return (long long)0x8000000000000000ULL;return (long long)(value<0.0?value-0.5:value+0.5);}

