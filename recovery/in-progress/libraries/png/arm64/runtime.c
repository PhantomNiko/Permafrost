#include "scope_jump.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100140e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5970U)))
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
#define _DAT_40010088 (*(uint *)(0x40010088U))
#define _DAT_4001008c (*(uint *)(0x4001008cU))
#define _DAT_40010238 (*(int *)(0x40010238U))
#define _DAT_4001023c (*(uint *)(0x4001023cU))
#define auStack_458 (*(ulong (*)[130])(frame + 24))
#define uStack_48 (*(ulong *)(frame + 1064))
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
    recovered_100024bc(puVar8[-1],*puVar8,&uStack_48);
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
    recovered_100024bc(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  DAT_100140e0 = 1;
  return;
}

#undef DAT_100140e0
#undef DAT_100140e8
#undef _DAT_40010088
#undef _DAT_4001008c
#undef _DAT_40010238
#undef _DAT_4001023c
#undef auStack_458
#undef uStack_48

#undef DAT_100100e0
#define DAT_100100e0 (*(byte *)(((uintptr_t)pf_module_state + 0x5970U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5980U)))
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
  if ((DAT_100100e0 & 1) == 0) {
    DAT_100100e8 = 0;
    DAT_100100f0 = 0;
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
    if (DAT_100100e8 == 0) {
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
    if (DAT_100100f0 == 0) {
      DAT_100100f0 = DAT_100100e8;
    }
    DAT_100100e0 = 1;
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0
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

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_100100e8

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_100100e8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
ulong recovered_100008d4(void)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100140e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
long recovered_10000910(void)

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

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5978U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5980U)))
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
    puVar4 = DAT_100100e8;
    if (DAT_100100f0 != (ulong *)0x0) {
      puVar4 = DAT_100100f0;
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
            DAT_100100f0 = DAT_100100e8;
            *(undefined1 *)(puVar2 + 3) = 0;
            if (puVar4 != (ulong *)0x0) {
              DAT_100100f0 = puVar4;
            }
            return puVar2 + 4;
          }
        }
        puVar1 = puVar2 + 1;
        puVar2 = DAT_100100e8;
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          puVar2 = (ulong *)*puVar1;
        }
      } while (puVar2 != (ulong *)0x0 && puVar2 != puVar4);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_100100e8
#undef DAT_100100f0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack_18 (*(undefined8 *)(frame + 24))
undefined8 recovered_10000b60(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10000b00(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_28 (*(long *)(frame + 24))
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000c0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000c20(ulonglong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *pvVar2;

  bVar1 = recovered_1000252c(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)(ulong)_DAT_8201084c)(size);
    return pvVar2;
  }
  return (void *)0x0;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000c64(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_1000252c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(pointer);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_82010854
#define DAT_82010854 (*(uint8_t *)(0x82010854U))
#undef _DAT_82010854
#define _DAT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000ca8(void *pointer,ulonglong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *pvVar2;

  bVar1 = recovered_1000252c(0x54);
  if ((bVar1) && (_DAT_82010854 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)(ulong)_DAT_82010854)(pointer,size);
    return pvVar2;
  }
  return (void *)0x0;
}

#undef DAT_82010854
#undef _DAT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf4
 */

void * recovered_10000cf4(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((bytes < 0x10) || ((((uint)src ^ (uint)dst) & 7) != 0)) {
    puVar3 = dst;
  }
  else {
    for (puVar3 = dst; (bytes != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)src;
      src = (undefined1 *)((long)src + 1);
      bytes = bytes - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < bytes + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)src + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    bytes = bytes + lVar4;
    while (7 < bytes) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)src + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      bytes = bytes - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    src = (void *)((long)src + (lVar6 - lVar4));
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *puVar3 = *(undefined1 *)src;
    src = (undefined1 *)((long)src + 1);
    puVar3 = puVar3 + 1;
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dcc
 */

void * recovered_10000dcc(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((dst != src) && (bytes != 0)) {
    puVar2 = (undefined1 *)((long)src + bytes);
    if ((dst >= src && dst <= puVar2) && (dst < src || puVar2 != dst)) {
      puVar3 = (undefined1 *)((long)dst + bytes);
      uVar1 = bytes;
      if ((0xf < bytes) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (bytes != 0 && (((int)dst + (int)bytes & 7U) != 0)); bytes = bytes - 1) {
          *(undefined1 *)((long)dst + (bytes - 1)) = *(undefined1 *)((long)src + (bytes - 1));
        }
        for (; 0x1f < bytes; bytes = bytes - 0x20) {
          *(undefined8 *)((long)dst + (bytes - 8)) = *(undefined8 *)((long)src + (bytes - 8));
          *(undefined8 *)((long)dst + (bytes - 0x10)) = *(undefined8 *)((long)src + (bytes - 0x10));
          *(undefined8 *)((long)dst + (bytes - 0x18)) = *(undefined8 *)((long)src + (bytes - 0x18));
          *(undefined8 *)((long)dst + (bytes - 0x20)) = *(undefined8 *)((long)src + (bytes - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = bytes; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)dst + bytes + lVar4 + -8) =
               *(undefined8 *)((long)src + bytes + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)dst + lVar4 + bytes);
        puVar2 = (undefined1 *)((long)src + lVar4 + bytes);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      dst = recovered_10000cf4(dst,src,bytes);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee0
 */

void * recovered_10000ee0(void *dst,int byte,ulong bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = dst;
  if (0xf < bytes) {
    uVar3 = (ulong)(byte & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = dst; (bytes != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)byte;
      bytes = bytes - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < bytes; bytes = bytes - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < bytes; bytes = bytes - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *(char *)puVar2 = (char)byte;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f78
 */

void recovered_10000f78(undefined1 *param_1,long param_2)

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
 * Address: 0x10000f7c
 */

void recovered_10000f7c(undefined1 *param_1,long param_2)

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
 * Address: 0x10000f80
 */

int recovered_10000f80(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < (ulong)param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
    for (lVar7 = 0; (uVar5 = param_3 - lVar7, uVar5 != 0 && (((uint)param_1 + (int)lVar7 & 7) != 0))
        ; lVar7 = lVar7 + 1) {
      if ((uint)param_1[lVar7] - (uint)param_2[lVar7] != 0) {
        return (uint)param_1[lVar7] - (uint)param_2[lVar7];
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)(param_1 + lVar7) != *(long *)(param_2 + lVar7)) {
        pbVar3 = param_1 + lVar7;
        pbVar4 = param_2 + lVar7;
        goto recovered_100010ec;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_100010ec;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_100010ec;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_100010ec;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < (ulong)param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_100010ec:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = pbVar3 + lVar7;
          pbVar2 = pbVar4 + lVar7;
          lVar7 = lVar7 + 1;
        } while ((uint)*pbVar1 - (uint)*pbVar2 == 0);
        return (uint)*pbVar1 - (uint)*pbVar2;
      }
      lVar6 = lVar6 + 8;
    }
    param_1 = param_1 + lVar6 + lVar7;
    param_2 = param_2 + lVar6 + lVar7;
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)*param_1 - (uint)*param_2 != 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  return (uint)*param_1 - (uint)*param_2;
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000111c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000112c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000113c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001150(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000116c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000117c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000118c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100011a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100011d8(byte *param_1,byte *param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001200(byte *param_1,byte *param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000121c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_100011b4((char *)param_1);
    dst = recovered_10000c20(uVar1 + 1);
    pvVar2 = (void *)0x0;
    if (dst != (void *)0x0) {
      pvVar2 = recovered_10000cf4(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return (long)pvVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000cd14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43cU)))
undefined * recovered_10001344(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000cd14;
}

#undef DAT_1000cd14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10014000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5890U)))
undefined ** recovered_10001350(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10014000;
}

#undef PTR_DAT_10014000

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

undefined8 recovered_1000135c(undefined8 *param_1)

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
  return local_30;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef local_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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
  PF_PART8(auVar1, 0) = dVar5;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_1000147c(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100014a0(double left,double right)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001500(double value)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_1000151c(double value)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001548(double value)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000c6e0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
double recovered_10001584(double value)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000c6e8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
double recovered_10001644(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001698(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_1000c6e8);
}

#undef DAT_1000c6e8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000c6f0 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#define DAT_1000c6f8 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#define DAT_1000c700 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#define DAT_1000c708 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
void recovered_10001698(double param_1)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100016dc(double value){return pf_cosine_polynomial(value);}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001728(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (0.0 <= value) {
    dVar1 = value;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001738(double param_1)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001798(double param_1)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100017e8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001810(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if (param_1 < 0) {
    recovered_100017e8(-param_1);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001834(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001868(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001408((double)param_2,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001880(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100013d4((double)param_2,in_w0);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001898(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100014a0((double)left,(double)right);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100018b4(float value)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100018d8(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000151c((double)value);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100018f0(double value)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001918(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100018f0((double)value);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001930(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001548((double)value);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001948(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001584((double)param_1);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001974(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001644((double)value);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_1000198c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100016dc((double)value);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100019a4(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
  }
  return fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001c0c(char *text,char **end)

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
        dVar11 = recovered_100013d4(dVar11,iVar8 * iVar5);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001d9c(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001c0c(text,end);
  return (float)dVar1;
}


#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db4
 */

int recovered_10001db4(char *out,ulong capacity,char *format,void *args)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  double *pdVar3;
  bool bVar4;
  char *pcVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;

  local_8c = 0;
  local_88 = capacity;
  local_80 = (byte *)out;
  pdStack_78 = args;
  if (capacity != 0) {
    *out = '\0';
  }
LAB_10001e24:
  bVar1 = *format;
  if (bVar1 != 0x25) {
    if (bVar1 == 0) {
      if (capacity != 0) {
        *local_80 = 0;
      }
      return local_8c;
    }
    pbVar9 = (byte *)format;
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = bVar1;
      goto LAB_10001e50;
    }
    goto LAB_10001e54;
  }
  pbVar9 = (byte *)(format + 1);
  bVar1 = *pbVar9;
  if (bVar1 != 0x25) {
    pbVar9 = (byte *)(format + 2);
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
        bVar1 = *pbVar9;
        format = format + 1;
        pbVar9 = pbVar9 + 1;
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
    pbVar9 = (byte *)(format + 1);
    bVar1 = *pbVar9;
    format = (char *)pbVar9;
  } while (bVar1 - 0x30U < 10);
LAB_10001f00:
  uVar10 = (uint)bVar1;
  if (uVar10 == 0x2e) {
    if (pbVar9[1] == 0x2a) {
      pdStack_78 = pdStack_78 + 1;
      pbVar9 = pbVar9 + 2;
      uVar10 = (uint)*pbVar9;
    }
    else {
      do {
        pbVar9 = pbVar9 + 1;
        uVar10 = (uint)*pbVar9;
      } while (uVar10 - 0x30 < 10);
    }
  }
  if (uVar10 == 0x4c) {
    pbVar9 = pbVar9 + 1;
    uVar14 = 8;
    bVar2 = true;
  }
  else if (uVar10 == 0x7a) {
    bVar2 = false;
    pbVar9 = pbVar9 + 1;
    uVar14 = 5;
  }
  else if (uVar10 == 0x6a) {
    bVar2 = false;
    pbVar9 = pbVar9 + 1;
    uVar14 = 7;
  }
  else if (uVar10 == 0x6c) {
    bVar4 = pbVar9[1] == 0x6c;
    uVar14 = 3;
    if (bVar4) {
      uVar14 = 4;
    }
LAB_10001fb4:
    pbVar11 = pbVar9 + 1;
    bVar2 = false;
    if (bVar4) {
      pbVar11 = pbVar9 + 2;
    }
    pbVar9 = pbVar11;
  }
  else if (uVar10 == 0x74) {
    bVar2 = false;
    pbVar9 = pbVar9 + 1;
    uVar14 = 6;
  }
  else {
    if (uVar10 == 0x68) {
      bVar4 = pbVar9[1] == 0x68;
      uVar14 = 1;
      if (!bVar4) {
        uVar14 = 2;
      }
      goto LAB_10001fb4;
    }
    bVar2 = false;
    uVar14 = 0;
  }
  bVar1 = *pbVar9;
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
    switch((uintptr_t)(uVar14)) {
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
    uVar10 = SUB84(dVar6,0);
    uVar7 = 10;
code_r0x10002178:
    uVar8 = 0;
LAB_1000217c:
    recovered_10002368((long *)&local_80,&local_88,&local_8c,uVar10,uVar7,uVar8);
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
      recovered_10002368((long *)&local_80,&local_88,&local_8c,(int)dVar6,10,0);
      pbVar11 = local_80;
      if (1 < local_88) {
        pbVar11 = local_80 + 1;
        *local_80 = 0x2e;
        local_88 = local_88 - 1;
      }
      dVar6 = dVar6 - (double)(int)dVar6;
      iVar12 = 6;
      do {
        iVar13 = (int)(dVar6 * 10.0);
        local_80 = pbVar11;
        if (1 < local_88) {
          local_80 = pbVar11 + 1;
          *pbVar11 = (char)iVar13 + 0x30;
          local_88 = local_88 - 1;
        }
        dVar6 = dVar6 * 10.0 - (double)iVar13;
        iVar12 = iVar12 + -1;
        pbVar11 = local_80;
      } while (iVar12 != 0);
      local_8c = local_8c + 7;
      goto LAB_10002180;
    }
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0x43eU);
code_r0x10002194:
    pdStack_78 = pdStack_78 + 1;
    recovered_10002318((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_10002180;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      uVar10 = SUB84(*pdStack_78,0);
      pdStack_78 = pdStack_78 + 1;
      recovered_10002318((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x473U));
      uVar7 = 0x10;
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
      switch((uintptr_t)(uVar14)) {
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
      switch((uintptr_t)(uVar14)) {
      case 1:
        uVar10 = (uint)*(byte *)pdStack_78;
        break;
      case 2:
        uVar10 = (uint)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        uVar10 = SUB84(*pdStack_78,0);
        break;
      default:
        uVar10 = *(uint *)pdStack_78;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar8 = (uint)(*pbVar9 == 0x58);
      uVar7 = 0x10;
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
  format = (char *)(pbVar9 + 1);
  goto LAB_10001e24;
code_r0x10001ef0:
  pdStack_78 = pdStack_78 + 1;
  bVar1 = *pbVar9;
  goto LAB_10001f00;
}

#undef local_88
#undef local_80
#undef pdStack_78
#undef local_8c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define str_1000cd19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44aU)))
void recovered_10002318(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_1000cd19;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100022dc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1000cd19

#undef str_1000abc1
#define str_1000abc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_1000abd2
#define str_1000abd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x462U)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002368
 */

void recovered_10002368(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  pcVar1 = str_1000abc1;
  if (param_6 == 0) {
    pcVar1 = str_1000abd2;
  }
  uVar6 = (ulong)param_5;
  uVar5 = (ulong)param_4;
  lVar3 = 0;
  do {
    lVar7 = lVar3;
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar5 / uVar6;
    }
    local_80[lVar7] = pcVar1[uVar5 - uVar2 * uVar6];
    bVar4 = uVar6 <= uVar5;
    uVar5 = uVar2;
    lVar3 = lVar7 + 1;
  } while (bVar4);
  for (; lVar7 != -1; lVar7 = lVar7 + -1) {
    recovered_100022dc(param_1,param_2,param_3,local_80[lVar7]);
  }
  return;
}

#undef str_1000abc1
#undef str_1000abd2
#undef local_80

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_1000240c(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001db4(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5970U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5980U)))
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
      puVar2 = &DAT_100100e0;
      if (DAT_100100e8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_100100f0 == (long *)0x0) {
        DAT_100100f0 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5970U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5978U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5980U)))
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
      puVar1 = &DAT_100100e0;
      if (DAT_100100e8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_100100f0 == (long *)0x0) {
        DAT_100100f0 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002578
 */

void recovered_10002578(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define uStack0000000000000010 (*(undefined1 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002588
 */

uint128 recovered_10002588(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = &uStack0000000000000008;
  PF_PART8(auVar1, 0) = &uStack0000000000000010;
  return auVar1;
}

#undef uStack0000000000000008
#undef uStack0000000000000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002598
 */

uint128 recovered_10002598(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = (double)param_1;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025a4
 */

undefined8 recovered_100025a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ac
 */

void recovered_100025ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 in_w3;
  int *unaff_x19;
  ulong *unaff_x20;
  long *unaff_x21;

  recovered_100022dc(unaff_x21,unaff_x20,unaff_x19,in_w3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025bc
 */

void recovered_100025bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005c4();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c4
 */

void recovered_100025c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025cc
 */

void recovered_100025cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025dc
 */

void recovered_100025dc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define in_stack_00000010 (*(undefined1 * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ec
 */

void recovered_100025ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  *in_stack_00000010 = 0x2d;
  return;
}

#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002604
 */

void recovered_10002604(void *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000ee0(param_1,0,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002610
 */

long recovered_10002610(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (long)(param_2 + param_1);
}


#define lStack0000000000000008 (*(long *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000261c
 */

void recovered_1000261c(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  lStack0000000000000008 = 0;
  recovered_10000b00(param_1,param_2,&lStack0000000000000008);
  return;
}

#undef lStack0000000000000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002628
 */

void recovered_10002628(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002634
 */

void recovered_10002634(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002640
 */

void recovered_10002640(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002654
 */

void recovered_10002654(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002668
 */

void recovered_10002668(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
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
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000272c(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_1000272c(0);
          }
          pcVar1 = &DAT_10010108 + DAT_10010100;
          DAT_10010100 = DAT_10010100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
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

  if ((DAT_10010100 != 0) || (param_1 != 0)) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000cf4(local_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_100034c0(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_10010100 = 0;
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
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

  if (DAT_10010100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000cf4(auStack_230,&DAT_10010108,DAT_10010100);
    uVar2 = DAT_10010100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_100034c0(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_10010100 = 0;
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
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

  if (DAT_10010100 != 0) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000cf4(auStack_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_100034c0(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_10010100 = 0;
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000cd45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
void recovered_100027c8(undefined *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_1000cd45;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_1000240c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002674(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000cd45
#undef acStack_160

#undef DAT_1000ac04
#define DAT_1000ac04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x494U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
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

  recovered_10002850(((uintptr_t)pf_module_state + 0x479U));
  pcVar4 = &DAT_1000ac04;
  for (uVar3 = recovered_100011b4(&DAT_1000ac04); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000272c(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_1000272c(0);
        }
        pcVar1 = &DAT_10010108 + DAT_10010100;
        DAT_10010100 = DAT_10010100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000ac04
#undef DAT_10010100
#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002850
 */

void recovered_10002850(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar3 = recovered_100011b4((char *)param_1);
  if (param_1 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000272c(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_1000272c(0);
          }
          pcVar1 = &DAT_10010108 + DAT_10010100;
          DAT_10010100 = DAT_10010100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108

#undef DAT_1000ac04
#define DAT_1000ac04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x494U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5990U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5998U)))
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

  recovered_10002850(((uintptr_t)pf_module_state + 0x497U));
  pcVar4 = &DAT_1000ac04;
  for (uVar3 = recovered_100011b4(&DAT_1000ac04); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000272c(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_1000272c(0);
        }
        pcVar1 = &DAT_10010108 + DAT_10010100;
        DAT_10010100 = DAT_10010100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000ac04
#undef DAT_10010100
#undef DAT_10010108

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_100028a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10002918(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000291c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10002920(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000cd45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
#define str_1000cec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#define str_1000ced3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x538U)))
#define str_1000cee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x546U)))
#define uStack_48 (*(uint *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 20))
undefined4 * recovered_10002928(long param_1,long param_2)

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
  iVar2 = recovered_100011d8((byte *)param_1,(byte *)str_1000cec6);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100011d8((byte *)param_1,(byte *)str_1000ced3);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100011d8((byte *)param_1,(byte *)str_1000cee1);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c20(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10014058 = 0xc;
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
        pf_varargs_10001dac_1((char *)(puVar4 + 1),0xf1,&DAT_1000cd45,param_1);
        recovered_10000ee0(&uStack_4c,0,0xc);
        uVar6 = recovered_10002b64(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10014058 = 2;
LAB_1000242c:
            recovered_10000c64(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001258((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002bb4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_1000242c;
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
    DAT_10014058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000ee0(puVar4,0,0x340);
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
#undef uStack_48
#undef uStack_4c

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000cd45 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
#define str_1000cec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52bU)))
#define str_1000ced3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x538U)))
#define str_1000cee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x546U)))
#define uStack_48 (*(uint *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 20))
undefined4 * recovered_10002c3c(long param_1,long param_2,int *param_3)

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
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10014058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100011d8((byte *)param_1,(byte *)str_1000cec6);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100011d8((byte *)param_1,(byte *)str_1000ced3);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100011d8((byte *)param_1,(byte *)str_1000cee1);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c20(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10014058 = 0xc;
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
        pf_varargs_10001dac_1((char *)(puVar4 + 1),0xf1,&DAT_1000cd45,param_1);
        recovered_10000ee0(&uStack_4c,0,0xc);
        uVar6 = recovered_10002b64(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10014058 = 2;
LAB_1000242c:
            recovered_10000c64(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001258((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002bb4((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_1000242c;
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
    DAT_10014058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000ee0(puVar4,0,0x340);
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
#undef uStack_48
#undef uStack_4c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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

long recovered_10002cb4(undefined1 *param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong bytes;
  uint128 auVar1;
  uint128 auVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;

  uVar8 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      if ((*param_4 == 0) && (param_4[0x48] == -1)) {
        uVar6 = *(ulong *)(param_4 + 0x46);
        uVar8 = *(ulong *)(param_4 + 0x42) - uVar6;
        if (*(ulong *)(param_4 + 0x42) < uVar6 || uVar8 == 0) {
          uVar8 = 0;
          *(undefined1 *)(param_4 + 0x4a) = 1;
        }
        else {
          PF_PART8(auVar1, 8) = 0;
          PF_PART8(auVar1, 0) = param_2;
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_3;
          uVar7 = param_3 * param_2;
          if (SUB168(auVar1 * auVar2,8) != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          bytes = uVar8;
          if (uVar7 <= uVar8) {
            bytes = uVar7;
          }
          recovered_10000cf4(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar6),bytes);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + bytes;
          if (uVar8 < uVar7) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = bytes / (ulong)param_2;
          }
        }
      }
      else {
        lVar9 = 0;
        while( true ) {
          lVar3 = param_2;
          puVar4 = param_1;
          if (lVar9 == param_3) break;
          for (; lVar3 != 0; lVar3 = lVar3 + -1) {
            uVar5 = recovered_10002de8(param_4);
            if (uVar5 == 0xffffffff) {
              return lVar9;
            }
            *puVar4 = (char)uVar5;
            puVar4 = puVar4 + 1;
          }
          param_1 = param_1 + param_2;
          lVar9 = lVar9 + 1;
        }
        uVar8 = param_3;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000cd18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x449U)))
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
LAB_1000271c:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100028a0((long)text,0x1fe,&DAT_1000cd18,0);
      if (bVar2) {
        uVar3 = recovered_100011b4(text);
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10002ecc(long param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10002674((char *)param_1,uVar5);
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
    uVar1 = recovered_10002bb4((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000ee0((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000cf4((void *)(*(long *)(param_4 + 0x40) + uVar3),(void *)param_1,uVar5);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
undefined8 recovered_10002fdc(int *param_1,ulong param_2,int param_3)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
undefined8 recovered_10003070(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10014058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10014058

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003120(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
undefined8 recovered_10003158(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10014058 = 0x16;
  }
  else {
    uVar1 = recovered_10003190(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10014058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10014058

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
undefined8 recovered_100031d4(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10014058 = 0x16;
  }
  else {
    recovered_10000ee0(&uStack_2c,0,0xc);
    uVar1 = recovered_10002b64(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10014058 = 2;
    }
    else {
      uVar1 = recovered_10003270(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003190(param_1), (int)uVar1 != 0)) {
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack_38 (*(uint *)(frame + 24))
#define uStack_3c (*(uint *)(frame + 20))
undefined8 recovered_100032d0(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *dst;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000ee0(&uStack_3c,0,0xc);
    uVar2 = recovered_10002b64(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      dst = recovered_10000c20((ulong)uVar1);
      uVar2 = 0;
      if (dst != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000cf4(dst,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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

#undef uStack_38
#undef uStack_3c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_1000339c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100033a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100033a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100033a8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100033ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100033d4(byte *param_1,byte *param_2,long param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000ce55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4baU)))
#define str_1000ce58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bdU)))
#define str_1000ce65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4caU)))
#define str_1000ce6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#define str_1000ce83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e8U)))
#define str_1000ce91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f6U)))
#define str_1000cea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x508U)))
#define str_1000ceaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x514U)))
#define str_1000cec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
char * recovered_10003404(int param_1)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100034a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100034a8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100140f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5988U)))
void recovered_100034ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_100140f0 = DAT_100140f0 + 1;
  return;
}

#undef DAT_100140f0

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003508
 */

void recovered_10003508(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *unaff_x21;

  recovered_10001258(unaff_x21,'a');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003514
 */

void recovered_10003514(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000ee0(param_1,0,0xc);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003520
 */

undefined8 recovered_10003520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003528
 */

undefined8 recovered_10003528(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003530
 */

void recovered_10003530(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003538
 */

void recovered_10003538(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *unaff_x19;

  recovered_10000ee0(unaff_x19,0,0x340);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003548
 */

void recovered_10003548(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003554
 */

void recovered_10003554(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *unaff_x21;

  recovered_10001258(unaff_x21,'w');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003560
 */

void recovered_10003560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *unaff_x21;

  recovered_10001258(unaff_x21,'+');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000356c
 */

void recovered_1000356c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003578
 */

int recovered_10003578(undefined8 param_1,undefined8 param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long unaff_x19;

  iVar1 = recovered_1000240c((char *)(unaff_x19 + 4),0xf1,param_3);
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003584
 */

undefined8 recovered_10003584(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1000358c(long param_1){__asm__ volatile(PF_SCOPE_JUMP_ASM);}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100035a0(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100035dc(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000c0c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002eac);
  (*pcVar1)();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003634(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000363c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000364c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b98U)))
long recovered_1000364c(long param_1)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_1000366c(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c20(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_1000369c(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c20(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100036a0(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100036b8(void *pointer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100036d0(void *pointer,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100036e8(void *pointer,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000c64(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003700(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10003708(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003718(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003728(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10003784(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5b98U)))
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

  lVar2 = DAT_10010308;
  if (DAT_10010308 != 0) {
    puVar1 = (undefined8 *)(DAT_10010308 + 0x10);
    DAT_10010308 = *(long *)(DAT_10010308 + 0x10);
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

#undef DAT_10010308
#undef DAT_82010850
#undef _DAT_82010850

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5ba0U)))
#define cStack_2e (*(char *)(frame + 18))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_30 (*(undefined2 *)(frame + 16))
#define uStack_2c (*(undefined4 *)(frame + 20))
#define uStack_2d (*(undefined1 *)(frame + 19))
void recovered_10003804(undefined8 *param_1)

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
    uVar1 = recovered_10003dec((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003910(param_1);
LAB_100030e0:
                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}

#undef DAT_10014308
#undef cStack_2e
#undef local_28
#undef local_30
#undef uStack_2c
#undef uStack_2d

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014300 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5b98U)))
void recovered_10003868(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10014300;
  if (DAT_10014300 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003620();
  }
  *(undefined1 *)(DAT_10014300 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003804(puVar1);
}

#undef DAT_10014300

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5ba0U)))
void recovered_10003898(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10014308;
  DAT_10014308 = param_1;
  return;
}

#undef DAT_10014308

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5ba0U)))
void recovered_100038ac(undefined8 *param_1)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100038d8(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003804(in_x0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100038e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5ba0U)))
#define uStack_48 (*(undefined4 *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 16))
undefined8 recovered_100038f0(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_10014308 != (long *)0x0) {
    DAT_10014308 = (long *)*DAT_10014308;
  }
  puVar2 = (undefined8 *)recovered_10003910(param_1);
  plVar3 = DAT_10014308;
  while( true ) {
    DAT_10014308 = plVar3;
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
      goto LAB_10003220;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003220:
  recovered_1000358c((long)plVar3);
  recovered_100038f0(extraout_x0);
  return 0;
}

#undef DAT_10014308
#undef uStack_48
#undef uStack_50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10014308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5ba0U)))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_40 (*(undefined8 *)(frame + 16))
undefined8 recovered_10003910(undefined8 *param_1)

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
      goto LAB_10003220;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10003220:
  recovered_1000358c((long)plVar2);
  recovered_100038f0(extraout_x0);
  return 0;
}

#undef DAT_10014308
#undef local_38
#undef local_40

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100039ac(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038f0(in_x0);
  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100039b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100039c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003620();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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
      if (*plVar4 == ((uintptr_t)pf_module_state + 0x5940U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003a98(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003a9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003aa4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003ab4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003aec(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003b08(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003b20(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003b38(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003b50(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1000a7e8
#define DAT_1000a7e8 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_1000a7f0
#define DAT_1000a7f0 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b68
 */

uint128 recovered_10003b68(double param_1)

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
  else if (param_1 <= DAT_1000a7e8) {
    dVar4 = 0.0;
    if (DAT_1000a7f0 <= param_1) {
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
  PF_PART8(auVar1, 0) = dVar4;
  return auVar1;
}

#undef DAT_1000a7e8
#undef DAT_1000a7f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c28
 */

void recovered_10003c28(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003b68((double)param_1);
  return;
}


#undef DAT_1000a7e8
#define DAT_1000a7e8 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_1000a7f0
#define DAT_1000a7f0 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c44
 */

uint128 recovered_10003c44(double param_1)

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
  else if (param_1 <= DAT_1000a7e8) {
    dVar4 = 0.0;
    if (DAT_1000a7f0 <= param_1) {
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
  PF_PART8(auVar1, 0) = dVar4;
  return auVar1;
}

#undef DAT_1000a7e8
#undef DAT_1000a7f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c48
 */

uint128 recovered_10003c48(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = (double)param_1 - (double)param_2;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10003c58(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10001500(value);
  dVar2 = dVar1;
  if (value - dVar1 <= -0.5) {
    dVar2 = dVar1 + -1.0;
  }
  if (0.5 <= value - dVar1) {
    dVar2 = dVar1 + 1.0;
  }
  return dVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000c750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#define local_68 (*(byte * *)(frame + 24))
#define pbStack_70 (*(byte * *)(frame + 16))
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
                local_68 = pbVar7 + *(long *)(&DAT_1000c750 + uVar4 * 8) * (uVar5 & 0x7fffffff);
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

#undef DAT_1000c750
#undef local_68
#undef pbStack_70

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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
    goto LAB_10003808;
  case 1:
    puVar1 = (ulong *)recovered_100040b8(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_100040f0(pbVar5,2);
    goto LAB_10003804;
  case 3:
    puVar1 = (ulong *)recovered_100040f0(pbVar5,4);
    goto LAB_100037cc;
  default:
    goto switchD_10003798_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_1000411c(param_2);
    break;
  case 10:
    uVar3 = recovered_100040f0(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10003804:
    pbVar4 = pbVar5 + 2;
LAB_10003808:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_100040f0(pbVar5,4);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

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


#define uStack0000000000000008 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000416c
 */

void recovered_1000416c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_100040b8(&uStack0000000000000008);
  return;
}

#undef uStack0000000000000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004174
 */

void recovered_10004174(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000417c
 */

void recovered_1000417c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *unaff_x20;

  recovered_100040f0(unaff_x20,2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004188
 */

void recovered_10004188(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *unaff_x20;

  recovered_100040f0(unaff_x20,4);
  return;
}


#undef DAT_1000a8bf
#define DAT_1000a8bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef str_1000acc4
#define str_1000acc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004194
 */

undefined4 recovered_10004194(byte *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_10004218;
  }
  else {
    iVar2 = recovered_10000f80(param_1,&DAT_1000a8bf,8);
    if (iVar2 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 0x42) && (param_1[1] == 0x4d)) {
    return 2;
  }
  if ((0xd < param_2) && (iVar2 = recovered_10000f80(param_1,(byte *)str_1000acc4,9), iVar2 == 0)) {
    return 4;
  }
LAB_10004218:
  uVar1 = recovered_10004248(param_1,param_2);
  uVar3 = 3;
  if (uVar1 == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_1000a8bf
#undef str_1000acc4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define str_1000cf06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56bU)))
bool recovered_10004248(byte *param_1,ulong param_2)

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
      (iVar5 = recovered_10000f80(param_1 + (param_2 - 0x12),(byte *)str_1000cf06,0x11), iVar5 == 0)
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

#undef DAT_1000a870
#define DAT_1000a870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_1000a8bf
#define DAT_1000a8bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef DAT_1000ab78
#define DAT_1000ab78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x408U)))
#undef DAT_1000acd1
#define DAT_1000acd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x561U)))
#undef DAT_1000acd6
#define DAT_1000acd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566U)))
#undef DAT_1000aced
#define DAT_1000aced (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dU)))
#undef DAT_1000acf7
#define DAT_1000acf7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x587U)))
#undef DAT_1000acfc
#define DAT_1000acfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58cU)))
#undef DAT_1000ad01
#define DAT_1000ad01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x591U)))
#undef DAT_1000ad06
#define DAT_1000ad06 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x596U)))
#undef DAT_1000ad0b
#define DAT_1000ad0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bU)))
#undef str_1000acc4
#define str_1000acc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x554U)))
#define lStack_2b0 (*(long *)(frame + 144))
#define uStack_2a0 (*(undefined8 *)(frame + 160))
#define uStack_298 (*(undefined8 *)(frame + 168))
#define uStack_290 (*(undefined8 *)(frame + 176))
#define uStack_288 (*(undefined8 *)(frame + 184))
#define uStack_280 (*(undefined8 *)(frame + 192))
#define uStack_278 (*(undefined2 *)(frame + 200))
#define uStack_270 (*(undefined8 *)(frame + 208))
#define uStack_268 (*(uint *)(frame + 216))
#define uStack_264 (*(uint *)(frame + 220))
#define uStack_260 (*(uint *)(frame + 224))
#define uStack_25c (*(uint *)(frame + 228))
#define uStack_258 (*(uint *)(frame + 232))
#define bStack_254 (*(byte *)(frame + 236))
#define cStack_253 (*(char *)(frame + 237))
#define bStack_252 (*(byte *)(frame + 238))
#define uStack_251 (*(undefined1 *)(frame + 239))
#define ppvStack_250 (*(void ** *)(frame + 240))
#define lStack_248 (*(long *)(frame + 248))
#define lStack_240 (*(long *)(frame + 256))
#define uStack_238 (*(ulong *)(frame + 264))
#define uStack_230 (*(undefined8 *)(frame + 272))
#define puStack_228 (*(ushort * *)(frame + 280))
#define uStack_220 (*(ulong *)(frame + 288))
#define uStack_218 (*(undefined8 *)(frame + 296))
#define pvStack_210 (*(void * *)(frame + 304))
#define uStack_208 (*(undefined8 *)(frame + 312))
#define uStack_200 (*(undefined8 *)(frame + 320))
#define puStack_1f8 (*(uint * *)(frame + 328))
#define uStack_1f0 (*(ulong *)(frame + 336))
#define uStack_1e8 (*(ulong *)(frame + 344))
#define pvStack_1e0 (*(void * *)(frame + 352))
#define uStack_1d8 (*(undefined8 *)(frame + 360))
#define uStack_1d0 (*(undefined8 *)(frame + 368))
#define uStack_1c8 (*(uint *)(frame + 376))
#define uStack_1c4 (*(undefined4 *)(frame + 380))
#define uStack_1c0 (*(undefined8 *)(frame + 384))
#define pvStack_1b0 (*(void * *)(frame + 400))
#define lStack_1a8 (*(long *)(frame + 408))
#define uStack_1a0 (*(undefined8 *)(frame + 416))
#define uStack_198 (*(ulonglong *)(frame + 424))
#define pppppppuStack_190 (*(uint ******* *)(frame + 432))
#define uStack_188 (*(ulong *)(frame + 440))
#define uStack_180 (*(undefined8 *)(frame + 448))
#define uStack_178 (*(ulong *)(frame + 456))
#define uStack_170 (*(undefined8 *)(frame + 464))
#define uStack_168 (*(ulong *)(frame + 472))
#define uStack_160 (*(ulong *)(frame + 480))
#define uStack_154 (*(uint *)(frame + 492))
#define uStack_150 (*(undefined8 *)(frame + 496))
#define ppvStack_148 (*(void ** *)(frame + 504))
#define uStack_140 (*(undefined8 *)(frame + 512))
#define uStack_138 (*(undefined8 *)(frame + 520))
#define uStack_130 (*(undefined8 *)(frame + 528))
#define uStack_128 (*(uint *)(frame + 536))
#define uStack_124 (*(undefined2 *)(frame + 540))
#define uStack_122 (*(undefined1 *)(frame + 542))
#define uStack_121 (*(undefined1 *)(frame + 543))
#define ppvStack_120 (*(void ** *)(frame + 544))
#define puStack_118 (*(uint * *)(frame + 552))
#define puStack_110 (*(undefined8 * *)(frame + 560))
#define puStack_108 (*(ulong * *)(frame + 568))
#define ppvStack_100 (*(void ** *)(frame + 576))
#define pppvStack_f8 (*(void *** *)(frame + 584))
#define puStack_f0 (*(undefined8 * *)(frame + 592))
#define uStack_e8 (*(undefined8 *)(frame + 600))
#define pvStack_e0 (*(void * *)(frame + 608))
#define uStack_d8 (*(undefined8 *)(frame + 616))
#define uStack_d0 (*(undefined8 *)(frame + 624))
#define puStack_c8 (*(uint * *)(frame + 632))
#define uStack_c0 (*(ulong *)(frame + 640))
#define uStack_b8 (*(ulong *)(frame + 648))
#define pppppppuStack_a8 (*(uint ******* *)(frame + 664))
#define uStack_a0 (*(ulong *)(frame + 672))
#define uStack_98 (*(undefined8 *)(frame + 680))
#define uStack_330 (*(ulong *)(frame + 16))
#define uStack_318 (*(ulong *)(frame + 40))
#define uStack_310 (*(ulong *)(frame + 48))
#define uStack_2dc (*(uint *)(frame + 100))
#define lStack_2d0 (*(long *)(frame + 112))
#define uStack_2c8 (*(ulong *)(frame + 120))
#define lStack_2c0 (*(long *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b0
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_100043b0(void *data,ulong length,void *image)

{
  unsigned char frame[864] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint *******pppppppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *dst;
  long lVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;
  float fVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 uVar20;
  byte bVar21;
  uchar uVar22;
  uchar uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  uint *puVar31;
  undefined8 *puVar32;
  void *pvVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  undefined1 *puVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  uint *******pppppppuVar48;
  uint *puVar49;
  ulong uVar50;
  ulong uVar51;
  uint ******ppppppuVar52;
  ulong uVar53;
  long lVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;

  PF_PART4(uStack_138, 0) = 0;
  PF_PART4(uStack_138, 4) = 0;
  uStack_140 = (uint *******)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  PF_PART4(uStack_130, 0) = 0;
  PF_PART4(uStack_130, 4) = 0;
  recovered_1000655c(image,&uStack_140);
  PF_PART4(uStack_130, 0) = 0;
  PF_PART4(uStack_130, 4) = 0;
  recovered_100036a0((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
  if (data == (void *)0x0) {
    return '\0';
  }
  if (length == 0) {
    return '\0';
  }
  uVar24 = recovered_10004194(data,length);
  switch((uintptr_t)(uVar24)) {
  case 1:
    recovered_1000a314(&pppppppuStack_190,data,(undefined1 *)((long)data + length));
    lStack_240 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    puStack_228 = (ushort *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    pvStack_210 = (void *)0x0;
    puStack_1f8 = (uint *)0x0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    ppvStack_120 = (void **)((ulong)ppvStack_120 & 0xffffffff00000000);
    puStack_110 = (undefined8 *)0x0;
    puStack_118 = (uint *)0x0;
    ppvStack_100 = (void **)0x0;
    puStack_108 = (ulong *)0x0;
    pppvStack_f8 = (void ***)0x0;
    uStack_e8 = 0;
    puStack_f0 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    pvStack_e0 = (void *)0x0;
    puStack_c8 = (uint *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_258 = 0;
    bStack_254 = 0;
    cStack_253 = '\0';
    bStack_252 = 0;
    uStack_251 = uStack_121;
    uStack_260 = 0;
    uStack_25c = 0;
    lStack_248 = 0;
    ppvStack_250 = ppvStack_120;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_270 = (uint *******)0x0;
    recovered_1000705c(&lStack_240,&puStack_110);
    recovered_1000705c(&puStack_228,&pppvStack_f8);
    uStack_208 = 0;
    recovered_100036a0(pvStack_210);
    pvStack_210 = pvStack_e0;
    uStack_200 = uStack_d0;
    uStack_208 = uStack_d8;
    pvStack_e0 = (void *)0x0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    recovered_10009bb4((long *)&puStack_1f8);
    recovered_100036a0(puStack_1f8);
    puStack_1f8 = puStack_c8;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    puStack_c8 = (uint *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    recovered_100070ac((long)&uStack_140);
    if ((7 < uStack_188) &&
       (iVar26 = recovered_10000f80((byte *)pppppppuStack_190,&DAT_1000a8bf,8), iVar26 == 0)) {
      bVar17 = false;
      lVar54 = 8;
LAB_100047ac:
      do {
        uVar53 = uStack_188;
        pppppppuVar48 = pppppppuStack_190;
        if (uStack_188 < lVar54 + 0xcU) {
LAB_10005300:
          if (((bStack_254 != 1) || (!(cStack_253 == '\x01' && lStack_248 != 0))) ||
             (!(uStack_264 != 3 || uStack_238 != 0))) break;
          if (bStack_252 != 1) goto LAB_10005380;
          if (((int)ppvStack_250 == 0) || (((ulong)ppvStack_250 & 0xffffffff) <= uStack_1f0 - 1))
          break;
          lVar54 = uStack_1f0 * 0x38;
          bVar19 = false;
          puVar31 = puStack_1f8;
          goto LAB_10005368;
        }
        puVar31 = (uint *)((long)pppppppuStack_190 + lVar54);
        uVar29 = recovered_100084ac(puVar31);
        uVar50 = (ulong)uVar29;
        lVar54 = lVar54 + 8;
        if (uVar53 - lVar54 < uVar50 + 4) break;
        pppppppuVar2 = (uint *******)((long)pppppppuVar48 + lVar54);
        uVar27 = recovered_100084ac((uint *)((long)pppppppuVar48 + lVar54 + uVar50));
        uVar28 = recovered_10009ac4(0,(byte *)(puVar31 + 1),4);
        if (uVar29 != 0) {
          uVar28 = recovered_10009ac4(uVar28,(byte *)pppppppuVar2,uVar50);
        }
        if (uVar28 != uVar27) break;
        lVar54 = lVar54 + uVar50 + 4;
        if ((bStack_254 & 1) != 0) {
          iVar26 = recovered_10000f80((byte *)(puVar31 + 1),(byte *)((uintptr_t)pf_module_state + 0x582U),4);
          if (iVar26 != 0) {
            iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000acf7,4);
            if (iVar26 != 0) {
              iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000acfc,4);
              if (iVar26 == 0) {
                if (uVar29 == 0) break;
                bVar19 = false;
                if ((0x300 < uVar29) || (uVar29 % 3 != 0)) goto LAB_10004560;
                recovered_100085cc(&lStack_240,(undefined1 *)pppppppuVar2,
                                   (undefined1 *)((long)pppppppuVar2 + uVar50));
              }
              else {
                iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000ad01,4);
                if (iVar26 == 0) {
                  if (((uVar29 != 2) && (uStack_264 == 0)) || (uVar29 != 6 && uStack_264 == 2))
                  break;
                  if (uStack_264 == 3) {
                    if (uStack_238 / 3 < uVar50) break;
                  }
                  else if (uStack_264 == 4 || uStack_264 == 6) break;
                  recovered_100085cc((long *)&puStack_228,(undefined1 *)pppppppuVar2,
                                     (undefined1 *)((long)pppppppuVar2 + uVar50));
                }
                else {
                  iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000ad06,4);
                  if (iVar26 == 0) {
                    bVar17 = true;
                    if (uVar29 != 0) {
                      PF_PART4(uStack_138, 4) = 0;
                      uStack_140 = pppppppuVar2;
                      PF_PART4(uStack_138, 0) = uVar29;
                      recovered_10009b54((long *)&pvStack_210,&uStack_140);
                      if ((uStack_1f0 != 0) && ((char)puStack_1f8[uStack_1f0 * 0xe + -8] == '\x01'))
                      {
                        recovered_10009b54((long *)(puStack_1f8 + uStack_1f0 * 0xe + -6),&uStack_140
                                          );
                      }
                      lStack_248 = lStack_248 + uVar50;
                      bVar17 = true;
                    }
                  }
                  else {
                    iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000ad0b,4);
                    uVar53 = uStack_1f0;
                    puVar47 = puStack_1f8;
                    if (iVar26 == 0) {
                      if (bStack_252 != 1) break;
                      bVar19 = false;
                      if ((uVar29 < 5) || (uStack_1f0 == 0)) goto LAB_10004560;
                      lVar40 = *(long *)(puStack_1f8 + uStack_1f0 * 0xe + -4);
                      if (lVar40 == *(long *)(puStack_1f8 + uStack_1f0 * 0xe + -2)) {
                        uVar50 = 4;
                        if (lVar40 != 0) {
                          uVar50 = lVar40 << 1;
                        }
                        recovered_10009c08((long *)(puStack_1f8 + uStack_1f0 * 0xe + -6),uVar50);
                        lVar40 = *(long *)(puVar47 + uVar53 * 0xe + -4);
                      }
                      plVar1 = (long *)(*(long *)(puVar47 + uVar53 * 0xe + -6) + lVar40 * 0x10);
                      *plVar1 = (long)((long)pppppppuVar2 + 4);
                      plVar1[1] = (ulong)(uVar29 - 4);
                      *(long *)(puVar47 + uVar53 * 0xe + -4) =
                           *(long *)(puVar47 + uVar53 * 0xe + -4) + 1;
                    }
                    else {
                      iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000acd6,4);
                      if (iVar26 == 0) {
                        if (uVar29 == 0) {
                          cStack_253 = '\x01';
                          goto LAB_10005300;
                        }
                        break;
                      }
                      if (((byte)puVar31[1] >> 5 & 1) == 0) break;
                    }
                  }
                }
              }
              goto LAB_100047ac;
            }
            if ((uVar29 != 0x1a) || (bStack_252 != 1)) break;
            uVar29 = recovered_100084ac((uint *)((long)pppppppuVar2 + 4));
            uVar27 = recovered_100084ac((uint *)(pppppppuVar2 + 1));
            uVar28 = recovered_100084ac((uint *)((long)pppppppuVar2 + 0xc));
            uVar46 = recovered_100084ac((uint *)(pppppppuVar2 + 2));
            bVar19 = uStack_1f0 == 0;
            if ((uVar29 != 0) && (uVar27 != 0)) {
              if ((uVar28 <= (uint)uStack_270) &&
                 (uVar29 <= (uint)uStack_270 - uVar28 && uVar46 <= PF_PART4(uStack_270, 4))) {
                bVar21 = *(byte *)(pppppppuVar2 + 3);
                bVar6 = *(byte *)((long)pppppppuVar2 + 0x19);
                if ((uVar27 <= PF_PART4(uStack_270, 4) - uVar46 && bVar21 < 3) && bVar6 < 2) {
                  if (uStack_1f0 == uStack_1e8) {
                    uVar53 = 4;
                    if (uStack_1f0 != 0) {
                      uVar53 = uStack_1f0 << 1;
                    }
                    if (uStack_1f0 < uVar53) {
                      puVar31 = recovered_1000366c(uVar53 * 0x38);
                      lVar40 = 0;
                      for (uVar50 = 0; uVar50 < uStack_1f0; uVar50 = uVar50 + 1) {
                        puVar3 = (undefined8 *)((long)puVar31 + lVar40);
                        puVar4 = (undefined8 *)((long)puStack_1f8 + lVar40);
                        uVar60 = *(undefined8 *)((long)puVar4 + 0x11);
                        uVar59 = *(undefined8 *)((long)puVar4 + 9);
                        uVar61 = *puVar4;
                        puVar3[1] = puVar4[1];
                        *puVar3 = uVar61;
                        *(undefined8 *)((long)puVar3 + 0x11) = uVar60;
                        *(undefined8 *)((long)puVar3 + 9) = uVar59;
                        puVar32 = puVar4 + 4;
                        puVar3[4] = *puVar32;
                        uVar59 = puVar4[5];
                        puVar3[6] = puVar4[6];
                        puVar3[5] = uVar59;
                        puVar4[5] = 0;
                        puVar4[6] = 0;
                        *puVar32 = 0;
                        recovered_10009aa0(puVar32);
                        lVar40 = lVar40 + 0x38;
                      }
                      recovered_100036a0(puStack_1f8);
                      puStack_1f8 = puVar31;
                      uStack_1e8 = uVar53;
                    }
                  }
                  puVar47 = puStack_1f8 + uStack_1f0 * 0xe;
                  *puVar47 = uVar29;
                  puVar47[1] = uVar27;
                  puVar47[2] = uVar28;
                  puVar47[3] = uVar46;
                  puVar47[4] = (uint)bVar21;
                  puVar47[5] = (uint)bVar6;
                  *(byte *)(puVar47 + 6) = bVar19 & (bVar17 ^ 0xffU);
                  puVar31 = puVar47 + 8;
                  puVar31[0] = 0;
                  puVar31[1] = 0;
                  puVar47[10] = 0;
                  puVar47[0xb] = 0;
                  puVar47[0xc] = 0;
                  puVar47[0xd] = 0;
                  recovered_10009c08((long *)puVar31,0);
                  puVar47[10] = 0;
                  puVar47[0xb] = 0;
                  uStack_1f0 = uStack_1f0 + 1;
                  recovered_100036a0((void *)0x0);
                  goto LAB_100047ac;
                }
              }
            }
            recovered_100036a0((void *)0x0);
            break;
          }
          if ((uVar29 != 8 || bVar17) || ((bStack_252 & 1) != 0)) break;
          bStack_252 = 1;
          uVar29 = recovered_100084ac((uint *)pppppppuVar2);
          bVar17 = false;
          ppvStack_250 = (void **)CONCAT44(PF_PART4(ppvStack_250, 4),uVar29);
          goto LAB_100047ac;
        }
        iVar26 = recovered_10000f80((byte *)(puVar31 + 1),&DAT_1000acd1,4);
        bVar19 = false;
        if ((uVar29 != 0xd) || (iVar26 != 0)) goto LAB_10004560;
        uVar29 = recovered_100084ac((uint *)pppppppuVar2);
        uStack_270 = (uint *******)CONCAT44(PF_PART4(uStack_270, 4),uVar29);
        uVar27 = recovered_100084ac((uint *)((long)pppppppuVar2 + 4));
        bVar19 = false;
        uStack_270 = (uint *******)CONCAT44(uVar27,(uint)uStack_270);
        bVar21 = *(byte *)(pppppppuVar2 + 1);
        uStack_268 = (uint)bVar21;
        bVar6 = *(byte *)((long)pppppppuVar2 + 9);
        uStack_264 = (uint)bVar6;
        uStack_260 = (uint)*(byte *)((long)pppppppuVar2 + 10);
        uStack_25c = (uint)*(byte *)((long)pppppppuVar2 + 0xb);
        uStack_258 = (uint)*(byte *)((long)pppppppuVar2 + 0xc);
        bStack_254 = 1;
        if ((uVar29 == 0) || (uVar27 == 0)) goto LAB_10004560;
        bVar16 = false;
        if (uStack_264 < 7) {
          if ((1 << (ulong)(bVar6 & 0x1f) & 0x55U) == 0) {
            if (bVar6 == 3) {
              bVar16 = uStack_268 == 8;
            }
          }
          else {
            bVar16 = true;
            if (bVar21 != 8) {
              bVar16 = bVar21 == 0x10;
            }
          }
        }
        bVar19 = false;
        if ((((!bVar16) || (uStack_260 != 0)) || (uStack_25c != 0)) || (1 < uStack_258))
        goto LAB_10004560;
      } while( true );
    }
    bVar19 = false;
    goto LAB_10004560;
  case 2:
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_1000655c(image,&uStack_140);
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_100036a0((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
    if (length < 0x1a) {
      return '\0';
    }
    if (*(char *)data != 'B') {
      return '\0';
    }
    if (*(char *)((long)data + 1) != 'M') {
      return '\0';
    }
    uVar53 = (ulong)*(uint *)((long)data + 10);
    uVar29 = *(uint *)((long)data + 0xe);
    if ((uVar29 != 0xc) && (uVar29 < 0x28)) {
      return '\0';
    }
    uVar50 = (ulong)uVar29 + 0xe;
    if (uVar29 == 0xc) {
      uVar25 = 0;
      iVar26 = 0;
      uVar28 = 0;
      uVar27 = (uint)*(ushort *)((long)data + 0x12);
      uVar46 = (uint)*(ushort *)((long)data + 0x14);
      sVar7 = *(short *)((long)data + 0x16);
      uVar8 = *(ushort *)((long)data + 0x18);
    }
    else {
      if (length < uVar29 + 0xe) {
        return '\0';
      }
      uVar27 = *(uint *)((long)data + 0x12);
      if ((int)uVar27 < 1) {
        return '\0';
      }
      uVar28 = *(uint *)((long)data + 0x16);
      if (uVar28 == 0) {
        return '\0';
      }
      uVar46 = -uVar28;
      if (-1 < (int)uVar28) {
        uVar46 = uVar28;
      }
      sVar7 = *(short *)((long)data + 0x1a);
      uVar8 = *(ushort *)((long)data + 0x1c);
      iVar26 = *(int *)((long)data + 0x1e);
      uVar25 = *(uint *)((long)data + 0x2e);
      if ((uVar29 == 0x28) && (iVar26 == 6 || iVar26 == 3)) {
        lVar54 = 0x10;
        if (iVar26 != 6) {
          lVar54 = 0xc;
        }
        uVar50 = lVar54 + 0x36;
      }
      uVar28 = uVar28 >> 0x1f;
    }
    if (sVar7 != 1) {
      return '\0';
    }
    if (uVar27 == 0) {
      return '\0';
    }
    if (uVar46 == 0) {
      return '\0';
    }
    if (length <= uVar53) {
      return '\0';
    }
    if (iVar26 == 0) {
      uVar42 = 0;
      uVar34 = 0;
      uVar41 = 0;
      uVar37 = 0;
    }
    else {
      if (iVar26 != 6 && iVar26 != 3) {
        return '\0';
      }
      if (uVar29 < 0x34) {
        uVar58 = 0x46;
        if (iVar26 != 6) {
          uVar58 = 0x42;
        }
        if (length < uVar58) {
          return '\0';
        }
        uVar34 = *(uint *)((long)data + 0x36);
        uVar41 = *(uint *)((long)data + 0x3a);
        uVar37 = *(uint *)((long)data + 0x3e);
        if (iVar26 != 6) goto LAB_10005134;
      }
      else {
        uVar34 = *(uint *)((long)data + 0x36);
        uVar41 = *(uint *)((long)data + 0x3a);
        uVar37 = *(uint *)((long)data + 0x3e);
        if (uVar29 < 0x38) {
LAB_10005134:
          uVar42 = 0;
          goto LAB_10005138;
        }
      }
      uVar42 = *(uint *)((long)data + 0x42);
    }
LAB_10005138:
    bVar19 = uVar8 != 0x10;
    bVar17 = uVar34 != 0;
    bVar16 = uVar41 != 0;
    bVar18 = uVar37 != 0;
    uVar44 = 0x1f;
    if (((bVar19 || bVar17) || bVar16) || bVar18) {
      uVar44 = uVar37;
    }
    uVar37 = 0x3e0;
    if (((bVar19 || bVar17) || bVar16) || bVar18) {
      uVar37 = uVar41;
    }
    uVar41 = 0x7c00;
    if (((bVar19 || bVar17) || bVar16) || bVar18) {
      uVar41 = uVar34;
    }
    if ((((uVar8 == 0x20) && (uVar41 == 0)) && (uVar37 == 0)) && (uVar44 == 0)) {
      uVar41 = 0xff0000;
      uVar37 = 0xff00;
      uVar42 = 0xff000000;
      uVar44 = 0xff;
    }
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    uStack_140 = (uint *******)0x0;
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uVar34 = (uint)uVar8;
    if (uVar8 < 9) {
      uVar9 = 1 << (ulong)(uVar34 & 0x1f);
      if (uVar25 != 0) {
        uVar9 = uVar25;
      }
      lVar54 = 3;
      if (uVar29 != 0xc) {
        lVar54 = 4;
      }
      if (uVar50 <= length && lVar54 * (ulong)uVar9 <= length - uVar50) {
        uVar58 = (ulong)uVar9 * 4;
        uStack_270 = (uint *******)CONCAT71(PF_PART7(uStack_270, 1),0xff);
        recovered_10007ea8(&uStack_140,uVar58,(undefined1 *)&uStack_270);
        puVar38 = (undefined1 *)((long)data + uVar50 + 2);
        for (uVar50 = 0; uVar58 != uVar50; uVar50 = uVar50 + 4) {
          *(undefined1 *)((long)uStack_140 + uVar50) = *puVar38;
          *(undefined1 *)((long)uStack_140 + uVar50 + 1) = puVar38[-1];
          *(undefined1 *)((long)uStack_140 + uVar50 + 2) = puVar38[-2];
          puVar38 = puVar38 + lVar54;
        }
        goto LAB_10005258;
      }
LAB_100052e8:
      bVar19 = false;
    }
    else {
LAB_10005258:
      bVar19 = false;
      if ((uVar34 < 0x21) && ((1L << ((ulong)(uint)uVar8 & 0x3f) & 0x101010112U) != 0)) {
        uVar50 = (ulong)uVar27 * (ulong)uVar34 + 0x1f >> 3 & 0x3ffffffffffc;
        if ((uVar50 != 0) &&
           ((uVar58 = CONCAT44(0,uVar46), PF_PART8(auVar11, 8) = 0, PF_PART8(auVar11, 0) = uVar50,
            PF_PART8(auVar13, 8) = 0, PF_PART8(auVar13, 0) = uVar58, SUB168(auVar11 * auVar13,8) == 0 &&
            (uVar50 * uVar58 <= length - uVar53)))) {
          uVar35 = uVar27 * uVar58;
          if (uVar35 >> 0x3e == 0) {
            recovered_10008090(&uStack_270,uVar35 * 4);
            bVar17 = false;
            lStack_2c0 = 0;
            lVar54 = (ulong)uVar27 * 4;
            for (uVar35 = 0; bVar19 = uVar35 == uVar58, !bVar19; uVar35 = uVar35 + 1) {
              lVar40 = 0;
              uVar39 = 0;
              uVar29 = (uint)uVar35;
              if (uVar28 == 0) {
                uVar29 = uVar46 + ~(uint)uVar35;
              }
              puVar47 = (uint *)((long)data + uVar50 * uVar29 + uVar53);
              puVar38 = (undefined1 *)((long)data + uVar50 * uVar29 + uVar53 + 2);
              puVar31 = puVar47;
              puVar49 = puVar47;
              for (; pppppppuVar48 = uStack_270, lVar54 != lVar40; lVar40 = lVar40 + 4) {
                lVar5 = lStack_2c0 + lVar40;
                if (uVar34 == 1) {
                  uVar51 = (ulong)(*(byte *)((long)puVar47 + (uVar39 >> 3 & 0x1fffffff)) >>
                                   (ulong)(((uint)uVar39 ^ 0xffffffff) & 7) & 1);
LAB_10005814:
                  if (CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138) <= (uVar51 << 2 | 3))
                  goto LAB_10005a2c;
                  recovered_10000cf4((void *)((long)uStack_270 + lVar5),
                                     (uint *)((long)uStack_140 + uVar51 * 4),4);
                }
                else {
                  if (uVar34 == 4) {
                    bVar21 = *(byte *)((long)puVar47 + (uVar39 >> 1 & 0x7fffffff));
                    uVar29 = (uint)(bVar21 >> 4);
                    if ((uVar39 & 1) != 0) {
                      uVar29 = bVar21 & 0xf;
                    }
                    uVar51 = (ulong)uVar29;
                    goto LAB_10005814;
                  }
                  if (uVar34 == 0x18) {
                    *(undefined1 *)((long)uStack_270 + lVar5) = *puVar38;
                    lVar5 = lVar40 + lStack_2c0;
                    *(undefined1 *)((long)uStack_270 + lVar5 + 1) = puVar38[-1];
                    *(undefined1 *)((long)uStack_270 + lVar5 + 2) = puVar38[-2];
                    *(undefined1 *)((long)uStack_270 + lVar5 + 3) = 0xff;
                  }
                  else {
                    if (uVar34 == 8) {
                      uVar51 = (ulong)(byte)*puVar31;
                      goto LAB_10005814;
                    }
                    if (uVar34 == 0x10) {
                      uVar29 = (uint)(ushort)*puVar49;
                    }
                    else {
                      uVar29 = *puVar49;
                    }
                    uVar25 = recovered_10007eb0(uVar29,uVar41);
                    *(char *)((long)pppppppuVar48 + lVar5) = (char)uVar25;
                    uVar25 = recovered_10007eb0(uVar29,uVar37);
                    lVar5 = lVar40 + lStack_2c0;
                    *(char *)((long)pppppppuVar48 + lVar5 + 1) = (char)uVar25;
                    uVar25 = recovered_10007eb0(uVar29,uVar44);
                    *(char *)((long)pppppppuVar48 + lVar5 + 2) = (char)uVar25;
                    if (uVar42 == 0) {
                      uVar29 = 0xff;
                    }
                    else {
                      uVar29 = recovered_10007eb0(uVar29,uVar42);
                      uVar29 = uVar29 & 0xff;
                    }
                    *(char *)((long)pppppppuVar48 + lVar5 + 3) = (char)uVar29;
                    bVar17 = (bool)(bVar17 | uVar29 != 0);
                  }
                }
                uVar39 = uVar39 + 1;
                puVar49 = (uint *)((long)puVar49 + (ulong)(uVar8 >> 3));
                puVar31 = (uint *)((long)puVar31 + 1);
                puVar38 = puVar38 + 3;
              }
              lStack_2c0 = lStack_2c0 + lVar54;
            }
            if ((uVar34 == 0x20 && uVar42 != 0) && !bVar17) {
              for (uVar53 = 3; uVar53 < CONCAT44(uStack_264,uStack_268); uVar53 = uVar53 + 4) {
                *(undefined1 *)((long)uStack_270 + uVar53) = 0xff;
              }
            }
            *(uint *)image = uVar27;
            *(uint *)((long)image + 4) = uVar46;
            recovered_1000705c((undefined8 *)((long)image + 8),&uStack_270);
LAB_10005a2c:
            uStack_268 = 0;
            uStack_264 = 0;
            recovered_100036a0(uStack_270);
            goto LAB_100052ec;
          }
        }
        goto LAB_100052e8;
      }
    }
LAB_100052ec:
    uStack_138 = (uint *******)0x0;
    pppppppuVar48 = uStack_140;
    goto LAB_10004e64;
  case 3:
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_1000655c(image,&uStack_140);
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_100036a0((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
    uVar23 = recovered_10004248(data,length);
    if (uVar23 == '\0') {
      return '\0';
    }
    bVar21 = *(byte *)((long)data + 2);
    pvStack_1b0 = (void *)CONCAT44(PF_PART4(pvStack_1b0, 4),(uint)*(ushort *)((long)data + 3));
    uStack_1c8 = (uint)*(ushort *)((long)data + 5);
    bVar6 = *(byte *)((long)data + 7);
    pvStack_1e0 = (void *)CONCAT44(PF_PART4(pvStack_1e0, 4),(uint)*(ushort *)((long)data + 0xc));
    ppvStack_148 = (void **)CONCAT44(PF_PART4(ppvStack_148, 4),(uint)*(ushort *)((long)data + 0xe));
    uStack_160 = CONCAT44(PF_PART4(uStack_160, 4),(uint)*(byte *)((long)data + 0x10));
    uStack_168 = CONCAT44(PF_PART4(uStack_168, 4),(uint)*(byte *)((long)data + 0x11));
    uVar29 = bVar21 - 8;
    if (bVar21 < 8) {
      uVar29 = (uint)bVar21;
    }
    uStack_178 = CONCAT44(PF_PART4(uStack_178, 4),uVar29);
    uVar53 = (ulong)*(byte *)data + 0x12;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_270 = (uint *******)0x0;
    uVar29 = (uint)*(ushort *)((long)data + 0xc);
    uVar27 = (uint)*(ushort *)((long)data + 0xe);
    if (*(char *)((long)data + 1) == '\x01') {
      uVar58 = (ulong)bVar6 + 7 >> 3;
      uVar50 = uVar58 * uStack_1c8;
      if (uVar53 <= length && uVar50 <= length - uVar53) {
        uStack_140 = (uint *******)CONCAT71(PF_PART7(uStack_140, 1),0xff);
        recovered_10007ea8(&uStack_270,(ulong)*(ushort *)((long)data + 5) << 2,
                           (undefined1 *)&uStack_140);
        uVar35 = 0xffffffffffffffff;
        pbVar30 = (byte *)((long)data + uVar53);
        lVar54 = 0;
        do {
          uVar35 = uVar35 + 1;
          if (uStack_1c8 <= uVar35) {
            uVar53 = uVar50 + uVar53;
            uVar29 = (uint)pvStack_1e0;
            uVar27 = (uint)ppvStack_148;
            goto LAB_10004cc8;
          }
          uVar39 = recovered_100080bc(pbVar30,(uint)bVar6,(uint)(bVar6 == 0x20) << 3,
                                      (byte *)((long)uStack_270 + lVar54));
          pbVar30 = pbVar30 + uVar58;
          lVar54 = lVar54 + 4;
        } while ((uVar39 & 1) != 0);
      }
LAB_10004cd8:
      bVar19 = false;
    }
    else {
LAB_10004cc8:
      pppppppuStack_a8 = (uint *******)((ulong)uVar29 * (ulong)uVar27);
      if ((ulong)pppppppuStack_a8 >> 0x3e != 0) goto LAB_10004cd8;
      recovered_10008090(&uStack_2a0,(long)pppppppuStack_a8 * 4);
      uVar50 = (uStack_160 & 0xffffffff) + 7 >> 3;
      pppppppuStack_190 = (uint *******)0x0;
      uStack_140 = (uint *******)&pppppppuStack_190;
      uStack_138 = (uint *******)&pppppppuStack_a8;
      uStack_130 = &uStack_178;
      uStack_128 = (uint)&uStack_160;
      uStack_124 = (undefined2)((ulong)&uStack_160 >> 0x20);
      uStack_122 = (undefined1)((ulong)&uStack_160 >> 0x30);
      uStack_121 = (undefined1)((ulong)&uStack_160 >> 0x38);
      ppvStack_120 = &pvStack_1b0;
      puStack_118 = &uStack_1c8;
      puStack_110 = &uStack_270;
      puStack_108 = &uStack_168;
      ppvStack_100 = &pvStack_1e0;
      pppvStack_f8 = &ppvStack_148;
      puStack_f0 = &uStack_2a0;
      if (bVar21 < 8) {
        if (((pppppppuStack_a8 == (uint *******)0x0) ||
            (PF_PART8(auVar10, 8) = 0, PF_PART8(auVar10, 0) = pppppppuStack_a8, PF_PART8(auVar12, 8) = 0,
            PF_PART8(auVar12, 0) = uVar50, SUB168(auVar10 * auVar12,8) == 0)) &&
           (uVar53 <= length && (long)pppppppuStack_a8 * uVar50 <= length - uVar53)) {
          pbVar30 = (byte *)((long)data + uVar53);
          pppppppuVar48 = (uint *******)0xffffffffffffffff;
          do {
            pppppppuVar48 = (uint *******)((long)pppppppuVar48 + 1);
            if (pppppppuStack_a8 <= pppppppuVar48) goto LAB_100050cc;
            uVar53 = recovered_10008194(&uStack_140,pbVar30);
            pbVar30 = pbVar30 + uVar50;
          } while ((uVar53 & 1) != 0);
        }
LAB_10004e54:
        bVar19 = false;
      }
      else {
        while (pppppppuStack_190 < pppppppuStack_a8) {
          if (length <= uVar53) goto LAB_10004e54;
          uVar58 = uVar53 + 1;
          bVar21 = *(byte *)((long)data + uVar53);
          if ((char)bVar21 < '\0') {
            if (length - uVar58 < uVar50) goto LAB_10004e54;
            uVar53 = uVar58 + uVar50;
            iVar26 = ((int)(char)bVar21 & 0x7fU) + 2;
            while (iVar26 = iVar26 + -1, iVar26 != 0) {
              uVar35 = recovered_10008194(&uStack_140,(byte *)((long)data + uVar58));
              if ((uVar35 & 1) == 0) goto LAB_10004e54;
            }
          }
          else {
            uVar35 = (length - 1) - uVar53;
            uVar53 = uVar58;
            for (iVar26 = (bVar21 & 0x7f) + 1; iVar26 != 0; iVar26 = iVar26 + -1) {
              if (length < uVar53 || uVar35 < uVar50) goto LAB_10004e54;
              uVar58 = recovered_10008194(&uStack_140,(byte *)((long)data + uVar53));
              if ((uVar58 & 1) == 0) goto LAB_10004e54;
              uVar53 = uVar53 + uVar50;
              uVar35 = uVar35 - uVar50;
            }
          }
        }
LAB_100050cc:
        *(uint *)image = (uint)pvStack_1e0;
        *(uint *)((long)image + 4) = (uint)ppvStack_148;
        recovered_1000705c((undefined8 *)((long)image + 8),&uStack_2a0);
        bVar19 = true;
      }
      uStack_298 = 0;
      recovered_100036a0(uStack_2a0);
    }
    uStack_268 = 0;
    uStack_264 = 0;
    pppppppuVar48 = uStack_270;
    goto LAB_10004e64;
  case 4:
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_1000655c(image,&uStack_140);
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_100036a0((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
    if (length < 0x1e) {
      return '\0';
    }
    iVar26 = recovered_10000f80(data,(byte *)str_1000acc4,9);
    if (iVar26 != 0) {
      return '\0';
    }
    if (*(char *)((long)data + 0xd) != '\0') {
      return '\0';
    }
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    PF_PART4(uStack_130, 0) = (uint)DAT_1000a870;
    PF_PART4(uStack_130, 4) = (uint)((ulong)DAT_1000a870 >> 0x20);
    puStack_118 = (uint *)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    ppvStack_120 = (void **)0x0;
    iVar26 = recovered_10000f80((byte *)((long)data + 9),&DAT_1000aced,4);
    if (iVar26 == 0) {
      PF_PART4(uStack_138, 4) = 0;
      PF_PART4(uStack_130, 0) = 4;
LAB_10004f80:
      uStack_198 = 0xe;
      iVar26 = recovered_10008310(data,length,&uStack_198,(uint *)&uStack_140);
      if (iVar26 == 0) goto LAB_100056cc;
      iVar26 = recovered_10008310(data,length,&uStack_198,(uint *)((ulong)&uStack_140 | 4));
      if (iVar26 == 0) goto LAB_100056cc;
      iVar26 = recovered_10008310(data,length,&uStack_198,(uint *)((ulong)&uStack_140 | 8));
      bVar19 = false;
      if (((iVar26 != 0) && ((uint)uStack_140 != 0)) &&
         ((PF_PART4(uStack_140, 4) != 0 && ((uint)uStack_138 < 3)))) {
        if (3 < PF_PART4(uStack_138, 4)) {
          uStack_270 = (uint *******)((ulong)uStack_270 & 0xffffffff00000000);
          iVar26 = recovered_10008310(data,length,&uStack_198,(uint *)&uStack_270);
          if ((iVar26 == 0) ||
             ((((uint)uStack_270 != 0 && ((uint)uStack_270 != 0x96)) && ((uint)uStack_270 != 100))))
          goto LAB_100056cc;
        }
        while( true ) {
          uStack_270 = (uint *******)((ulong)uStack_270 & 0xffffffff00000000);
          uStack_2a0 = (void *)((ulong)uStack_2a0 & 0xffffffff00000000);
          iVar26 = recovered_10008310(data,length,&uStack_198,(uint *)&uStack_270);
          if (iVar26 == 0) break;
          iVar26 = recovered_10008310(data,length,&uStack_198,(uint *)&uStack_2a0);
          uVar15 = uStack_198;
          if (iVar26 == 0) break;
          uVar29 = (uint)uStack_2a0;
          if ((uint)uStack_270 == 0) {
            if ((uint)uStack_2a0 == 0) {
              lStack_1a8 = 0;
              uStack_1a0 = 0;
              pvStack_1b0 = (void *)0x0;
              goto LAB_10005918;
            }
            break;
          }
          if ((length < uStack_198) ||
             (uVar53 = (ulong)uStack_2a0 & 0xffffffff, length - uStack_198 < uVar53)) break;
          puVar31 = (uint *)((long)data + uStack_198);
          if ((uint)uStack_270 == 1 && 3 < (uint)uStack_2a0) {
            uVar27 = recovered_100084ac(puVar31);
            if (uVar27 < 0x101 && uVar27 * 3 + 4 <= uVar29) {
              pppppppuStack_a8 = (uint *******)((ulong)pppppppuStack_a8 & 0xffffffffffffff00);
              recovered_10007ea8((long *)&uStack_128,(ulong)(uVar27 * 3),
                                 (undefined1 *)&pppppppuStack_a8);
              recovered_10000cf4((void *)CONCAT17(uStack_121,
                                                  CONCAT16(uStack_122,
                                                           CONCAT24(uStack_124,uStack_128))),
                                 puVar31 + 1,(ulong)ppvStack_120);
            }
          }
          else if (((uint)uStack_270 == 0x11) && ((uint)uStack_2a0 != 0)) {
            PF_PART4(uStack_130, 4) = (uint)(byte)*puVar31;
          }
          uStack_198 = uVar15 + uVar53;
        }
        goto LAB_100056cc;
      }
    }
    else {
      if ((((*(char *)((long)data + 9) == 'v') && (*(byte *)((long)data + 10) - 0x30U < 10)) &&
          (*(byte *)((long)data + 0xb) - 0x30U < 10)) && (*(byte *)((long)data + 0xc) - 0x30U < 10)) {
        PF_PART4(uStack_138, 4) =
             ((uint)*(byte *)((long)data + 0xb) * 10 + (uint)*(byte *)((long)data + 10) * 100 +
             (uint)*(byte *)((long)data + 0xc)) - 0x14d0;
        PF_PART4(uStack_130, 0) = 8;
        if (PF_PART4(uStack_138, 4) < 0xb) {
          PF_PART4(uStack_130, 0) = 4;
        }
        goto LAB_10004f80;
      }
LAB_100056cc:
      bVar19 = false;
    }
    break;
  default:
    return '\0';
  }
  goto LAB_100056d0;
LAB_10005918:
  uStack_270 = (uint *******)0x0;
  bVar21 = recovered_10008340((long)data,length,&uStack_198,(uint)uStack_130,&uStack_270);
  if ((bVar21 & 1) == 0) goto LAB_100059e4;
  if (uStack_270 == (uint *******)0x0) {
    if ((lStack_1a8 != 0) &&
       (uVar53 = ((ulong)uStack_140 >> 0x20) * ((ulong)uStack_140 & 0xffffffff), uVar53 >> 0x3e == 0
       )) {
      uStack_270 = (uint *******)0x0;
      recovered_100085a0((undefined8 *)&uStack_1c8,uVar53 * 4,(undefined1 *)&uStack_270);
      lStack_2b0 = lStack_1a8;
      goto LAB_10005a68;
    }
    goto LAB_100059e4;
  }
  if (length <= uStack_270) goto LAB_100059e4;
  recovered_100084b8((long *)&pvStack_1b0,&uStack_270);
  goto LAB_10005918;
LAB_10005a68:
  bVar19 = lStack_2b0 == 0;
  if (lStack_2b0 != 0) {
    uStack_270 = (uint *******)0x0;
    uStack_268 = 0;
    uStack_264 = CONCAT31(PF_PART3(uStack_264, 1),1);
    uStack_260 = 0xff;
    uStack_25c = 0;
    uStack_258 = 0;
    ppvStack_250 = (void **)0x0;
    lStack_2b0 = lStack_2b0 + -1;
    uStack_2a0 = *(void **)((long)pvStack_1b0 + lStack_2b0 * 8);
    iVar26 = recovered_10008310(data,length,&uStack_2a0,(uint *)&uStack_270);
    if (iVar26 == 0) goto LAB_10006428;
    iVar26 = recovered_10008310(data,length,&uStack_2a0,(uint *)((ulong)&uStack_270 | 4));
    if (iVar26 == 0) goto LAB_10006428;
    iVar26 = recovered_10008310(data,length,&uStack_2a0,&uStack_268);
    if (iVar26 == 0) goto LAB_10006428;
    pppppppuStack_a8 = (uint *******)((ulong)pppppppuStack_a8 & 0xffffffff00000000);
    iVar26 = recovered_10008310(data,length,&uStack_2a0,(uint *)&pppppppuStack_a8);
    if (iVar26 == 0) goto LAB_10006428;
    if ((int)pppppppuStack_a8 != 0) {
      if (length < uStack_2a0) goto LAB_10006428;
      if (length - (long)uStack_2a0 < ((ulong)pppppppuStack_a8 & 0xffffffff)) goto LAB_10006428;
      uStack_2a0 = (void *)((long)uStack_2a0 + ((ulong)pppppppuStack_a8 & 0xffffffff));
    }
    uVar53 = (ulong)uStack_260;
    uVar27 = uStack_258;
    uVar20 = (char)uStack_264;
    uVar29 = uStack_25c;
    while( true ) {
      pvStack_1e0 = (void *)((ulong)pvStack_1e0 & 0xffffffff00000000);
      ppvStack_148 = (void **)((ulong)ppvStack_148 & 0xffffffff00000000);
      iVar26 = recovered_10008310(data,length,&uStack_2a0,(uint *)&pvStack_1e0);
      if (iVar26 == 0) goto LAB_10006428;
      iVar26 = recovered_10008310(data,length,&uStack_2a0,(uint *)&ppvStack_148);
      uVar28 = (uint)uStack_130;
      pvVar33 = uStack_2a0;
      if (iVar26 == 0) goto LAB_10006428;
      if ((uint)pvStack_1e0 == 0) break;
      if (length < uStack_2a0) goto LAB_10006428;
      uVar50 = (ulong)ppvStack_148 & 0xffffffff;
      if (length - (long)uStack_2a0 < uVar50) goto LAB_10006428;
      puVar31 = (uint *)((long)data + (long)uStack_2a0);
      if ((uint)pvStack_1e0 == 6 && 3 < (uint)ppvStack_148) {
        uVar28 = recovered_100084ac(puVar31);
        if (0xfe < uVar28) {
          uVar28 = 0xff;
        }
        uVar53 = (ulong)uVar28;
      }
      else if ((uint)pvStack_1e0 == 8 && 3 < (uint)ppvStack_148) {
        uVar28 = recovered_100084ac(puVar31);
        uVar20 = uVar28 != 0;
      }
      else if ((uint)pvStack_1e0 == 0xf && 7 < (uint)ppvStack_148) {
        uVar29 = recovered_100084ac(puVar31);
        uVar27 = recovered_100084ac(puVar31 + 1);
      }
      else if ((uint)pvStack_1e0 == 0x21 && 3 < (uint)ppvStack_148) {
        uVar28 = recovered_100084ac(puVar31);
        pppppppuStack_a8 = (uint *******)CONCAT44(PF_PART4(pppppppuStack_a8, 4),uVar28);
        pppppppuStack_190 = (uint *******)((ulong)pppppppuStack_190 & 0xffffffff00000000);
        recovered_10000cf4(&pppppppuStack_190,&pppppppuStack_a8,4);
        if (PF_PART4(pppppppuStack_190, 0) <= 0.0) {
          uVar53 = 0;
        }
        else if (1.0 <= PF_PART4(pppppppuStack_190, 0)) {
          uVar53 = 0xff;
        }
        else {
          fVar14 = 0.5;
          if (PF_PART4(pppppppuStack_190, 0) * 255.0 < 0.0) {
            fVar14 = -0.5;
          }
          uVar53 = (ulong)(fVar14 + PF_PART4(pppppppuStack_190, 0) * 255.0);
        }
      }
      uStack_2a0 = (void *)((long)pvVar33 + uVar50);
    }
    uStack_260 = (uint)uVar53;
    uStack_264 = CONCAT31(PF_PART3(uStack_264, 1),uVar20);
    uStack_25c = uVar29;
    uStack_258 = uVar27;
    if (((uint)ppvStack_148 != 0) ||
       (uVar23 = recovered_10008340((long)data,length,&uStack_2a0,(uint)uStack_130,
                                    (ulong *)&ppvStack_250), uVar23 == '\0')) goto LAB_10006428;
    uVar23 = recovered_10008340((long)data,length,&uStack_2a0,uVar28,(ulong *)&pppppppuStack_a8);
    uVar29 = uStack_260;
    pppppppuVar48 = uStack_270;
    if (uVar23 == '\0') goto LAB_10006428;
    uVar27 = (uint)uStack_270;
    uVar53 = (ulong)uStack_270 & 0xffffffff;
    if ((uint)uStack_270 == 0) goto LAB_10006428;
    uVar46 = PF_PART4(uStack_270, 4);
    uVar50 = (ulong)PF_PART4(uStack_270, 4);
    if ((PF_PART4(uStack_270, 4) == 0) || (ppvStack_250 == (void **)0x0)) goto LAB_10006428;
    if (((char)uStack_264 == '\x01') && (uStack_260 != 0)) {
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      pvStack_1e0 = (void *)0x0;
      uStack_150 = 0;
      ppvStack_148 = ppvStack_250;
      uStack_154 = 0;
      uStack_160 = 0;
      iVar26 = recovered_10008310(data,length,(ulonglong *)&ppvStack_148,
                                  (uint *)((long)&uStack_150 + 4));
      if (((iVar26 != 0) &&
          (iVar26 = recovered_10008310(data,length,(ulonglong *)&ppvStack_148,(uint *)&uStack_150),
          iVar26 != 0)) &&
         (iVar26 = recovered_10008310(data,length,(ulonglong *)&ppvStack_148,&uStack_154),
         iVar26 != 0)) {
        uVar23 = recovered_10008340((long)data,length,(ulong *)&ppvStack_148,uVar28,&uStack_160);
        uVar28 = uStack_268;
        if ((((uVar23 != '\0') && (PF_PART4(uStack_150, 4) == uVar27)) && ((uint)uStack_150 == uVar46)) &&
           ((uStack_160 != 0 && (uStack_268 < 6)))) {
          uVar25 = *(uint *)(&DAT_1000ab78 + (ulong)uStack_268 * 4);
          uVar58 = (ulong)uVar25;
          if (uStack_154 == uVar25) {
            uStack_170 = 0;
            uStack_168 = uStack_160;
            iVar26 = recovered_10008310(data,length,&uStack_168,(uint *)((long)&uStack_170 + 4));
            if ((iVar26 != 0) &&
               (iVar26 = recovered_10008310(data,length,&uStack_168,(uint *)&uStack_170),
               iVar26 != 0)) {
              if (PF_PART4(uStack_170, 4) == uVar27 && (uint)uStack_170 == uVar46) {
                uVar39 = (ulong)(uVar27 + 0x3f >> 6);
                uVar35 = (ulong)(uVar46 + 0x3f >> 6);
                uVar51 = uVar35 * uVar39;
                recovered_100085e0((long *)&pppppppuStack_a8,uVar51);
                lVar54 = 0;
LAB_10005de0:
                if (uVar51 == 0) {
                  uStack_178 = 0;
                  uVar23 = recovered_10008340((long)data,length,&uStack_168,(uint)uStack_130,
                                              &uStack_178);
                  bVar17 = false;
                  if ((uVar23 == '\0') || (uStack_178 != 0)) goto LAB_10006330;
                  if (uVar50 * uVar53 >> 0x3e == 0) {
                    uStack_2a0 = (void *)((ulong)uStack_2a0 & 0xffffffffffffff00);
                    recovered_10007ea8((long *)&pvStack_1e0,uVar50 * uVar53 * 4,
                                       (undefined1 *)&uStack_2a0);
                    uStack_330 = 0;
                    uVar51 = uVar50;
                    while( true ) {
                      uVar34 = (uint)uVar51;
                      uVar41 = uVar34 - 0x40;
                      if (0x3f < uVar34) {
                        uVar34 = 0x40;
                      }
                      if (uStack_330 == uVar35) break;
                      uStack_2dc = 0;
                      uStack_310 = 0;
                      uVar37 = uVar46 + (int)uStack_330 * -0x40;
                      if (0x3f < uVar37) {
                        uVar37 = 0x40;
                      }
                      uStack_318 = (ulong)pppppppuVar48 & 0xffffffff;
                      while( true ) {
                        uVar51 = uStack_318;
                        if (0x3f < uStack_318) {
                          uVar51 = 0x40;
                        }
                        if (uStack_310 == uVar39) break;
                        lVar54 = uStack_310 + uStack_330 * uVar39;
                        ppppppuVar52 = pppppppuStack_a8[lVar54];
                        uVar57 = length - (long)ppppppuVar52;
                        if (length < ppppppuVar52 || uVar57 == 0) goto LAB_1000632c;
                        uVar42 = uVar27 + (int)uStack_310 * -0x40;
                        if (0x3f < uVar42) {
                          uVar42 = 0x40;
                        }
                        uVar36 = lVar54 + 1;
                        uVar55 = uVar57;
                        if ((uVar36 < uStack_a0) &&
                           (uVar55 = (long)pppppppuStack_a8[uVar36] - (long)ppppppuVar52,
                           pppppppuStack_a8[uVar36] < ppppppuVar52 || uVar55 == 0)) {
                          uVar55 = uVar57;
                        }
                        uVar42 = uVar42 * uVar37;
                        uVar56 = (ulong)(uVar42 * uVar25);
                        uStack_188 = 0;
                        uStack_180 = 0;
                        pppppppuStack_190 = (uint *******)0x0;
                        if (PF_PART4(uStack_130, 4) == 2) {
                          if ((uVar36 < uStack_a0) && (uVar55 != 0)) {
                            recovered_1000a314(&uStack_2a0,
                                               (undefined1 *)((long)data + (long)ppppppuVar52),
                                               (undefined1 *)((long)data + (long)ppppppuVar52) +
                                               uVar55);
                            uVar22 = recovered_10008768(&uStack_2a0,(long *)&pppppppuStack_190);
                            uStack_298 = 0;
                            recovered_100036a0(uStack_2a0);
                            uVar23 = '\0';
                            if (uStack_188 == uVar56) {
                              uVar23 = uVar22;
                            }
                            if (uVar23 == '\x01') goto LAB_10005fd4;
                          }
LAB_10006328:
                          uStack_188 = 0;
                          recovered_100036a0(pppppppuStack_190);
                          goto LAB_1000632c;
                        }
                        if (PF_PART4(uStack_130, 4) == 1) {
                          uStack_2a0 = (void *)((ulong)uStack_2a0 & 0xffffffffffffff00);
                          recovered_10007ea8((long *)&pppppppuStack_190,uVar56,
                                             (undefined1 *)&uStack_2a0);
                          uVar36 = 0;
                          uVar57 = 0;
                          while (uVar36 != uVar58) {
                            for (uVar44 = 0; uVar9 = uVar42 - uVar44,
                                uVar44 < uVar42 && uVar57 < uVar55; uVar44 = (int)uVar43 + uVar44) {
                              uVar56 = uVar57 + 1;
                              pbVar30 = (byte *)((long)data + uVar57 + (long)ppppppuVar52);
                              bVar21 = *pbVar30;
                              uVar45 = (uint)bVar21;
                              if (bVar21 < 0x7f) {
                                if ((uVar55 <= uVar56) || (uVar9 <= uVar45)) goto LAB_10006328;
                                uVar57 = uVar57 + 2;
                                uVar20 = *(undefined1 *)((long)data + uVar56 + (long)ppppppuVar52);
                                uVar43 = (ulong)bVar21 + 1;
                                uVar9 = uVar44;
                                for (uVar56 = uVar43; uVar56 != 0; uVar56 = uVar56 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_190 + uVar36 + (ulong)uVar25 * (ulong)uVar9)
                                       = uVar20;
                                  uVar9 = uVar9 + 1;
                                }
                              }
                              else if (uVar45 == 0x80) {
                                if (uVar55 - uVar56 < 2) goto LAB_10006328;
                                uVar45 = (uint)CONCAT11(*(undefined1 *)
                                                         ((long)data + uVar56 + (long)ppppppuVar52),
                                                        pbVar30[2]);
                                uVar43 = (ulong)uVar45;
                                if ((uVar9 <= uVar45 - 1) ||
                                   (lVar54 = uVar57 + 3, uVar55 - lVar54 < (ulong)uVar45))
                                goto LAB_10006328;
                                puVar38 = (undefined1 *)((long)data + lVar54 + (long)ppppppuVar52);
                                uVar9 = uVar44;
                                for (uVar57 = uVar43; uVar57 != 0; uVar57 = uVar57 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_190 + uVar36 + (ulong)uVar25 * (ulong)uVar9)
                                       = *puVar38;
                                  uVar9 = uVar9 + 1;
                                  puVar38 = puVar38 + 1;
                                }
                                uVar57 = lVar54 + uVar43;
                              }
                              else if (uVar45 == 0x7f) {
                                if ((uVar55 - uVar56 < 3) ||
                                   (uVar45 = (uint)CONCAT11(*(undefined1 *)
                                                             ((long)data +
                                                             uVar56 + (long)ppppppuVar52),pbVar30[2]
                                                           ), uVar43 = (ulong)uVar45,
                                   uVar9 <= uVar45 - 1)) goto LAB_10006328;
                                uVar57 = uVar57 + 4;
                                bVar21 = pbVar30[3];
                                uVar9 = uVar44;
                                for (uVar56 = uVar43; uVar56 != 0; uVar56 = uVar56 - 1) {
                                  *(byte *)((long)pppppppuStack_190 +
                                           uVar36 + (ulong)uVar25 * (ulong)uVar9) = bVar21;
                                  uVar9 = uVar9 + 1;
                                }
                              }
                              else {
                                uVar43 = 0x100 - (ulong)bVar21;
                                if ((uVar9 < (uint)uVar43) || (uVar55 - uVar56 < uVar43))
                                goto LAB_10006328;
                                puVar38 = (undefined1 *)((long)data + uVar56 + (long)ppppppuVar52);
                                uVar9 = uVar44;
                                for (uVar57 = uVar43; uVar57 != 0; uVar57 = uVar57 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_190 + uVar36 + (ulong)uVar25 * (ulong)uVar9)
                                       = *puVar38;
                                  uVar9 = uVar9 + 1;
                                  puVar38 = puVar38 + 1;
                                }
                                uVar57 = uVar56 + uVar43;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar44 < uVar42) goto LAB_10006328;
                          }
                        }
                        else {
                          if ((PF_PART4(uStack_130, 4) != 0) || (uVar57 < uVar56)) goto LAB_10006328;
                          recovered_100085cc((long *)&pppppppuStack_190,
                                             (undefined1 *)((long)data + (long)ppppppuVar52),
                                             (undefined1 *)((long)data + (long)ppppppuVar52) +
                                             uVar56);
                        }
LAB_10005fd4:
                        lStack_2d0 = 0;
                        for (uStack_2c8 = 0; uStack_2c8 != uVar34; uStack_2c8 = uStack_2c8 + 1) {
                          uVar42 = uStack_2dc;
                          lVar54 = lStack_2d0;
                          for (uVar57 = uVar51; uVar57 != 0; uVar57 = uVar57 - 1) {
                            PF_PART4(uStack_2a0, 4) = (undefined4)((ulong)uStack_2a0 >> 0x20);
                            uStack_2a0 = (void *)CONCAT44(PF_PART4(uStack_2a0, 4),0xff000000);
                            if (uVar28 < 6) {
                              uVar44 = 1 << (ulong)(uVar28 & 0x1f);
                              if ((uVar44 & 3) == 0) {
                                if ((uVar44 & 0xc) == 0) {
                                  lVar40 = (ulong)*(byte *)((long)pppppppuStack_190 + lVar54) * 3;
                                  uVar36 = lVar40 + 2;
                                  if (uVar36 < ppvStack_120) {
                                    lVar5 = CONCAT17(uStack_121,
                                                     CONCAT16(uStack_122,
                                                              CONCAT24(uStack_124,uStack_128)));
                                    PF_PART3(uStack_2a0, 0) =
                                         CONCAT12(*(undefined1 *)(lVar5 + uVar36),
                                                  *(undefined2 *)(lVar5 + lVar40));
                                  }
                                  if (uVar28 == 5) goto LAB_100060c8;
                                }
                                else {
                                  PF_PART3(uStack_2a0, 0) =
                                       CONCAT12(*(undefined1 *)((long)pppppppuStack_190 + lVar54),
                                                CONCAT11(*(undefined1 *)
                                                          ((long)pppppppuStack_190 + lVar54),
                                                         *(undefined1 *)
                                                          ((long)pppppppuStack_190 + lVar54)));
                                  if (uVar28 == 3) {
LAB_100060c8:
                                    lVar40 = 1;
                                    goto LAB_100060cc;
                                  }
                                }
                                goto LAB_100060d8;
                              }
                              uStack_2a0 = (void *)CONCAT53(PF_PART5(uStack_2a0, 3),
                                                            *(undefined3 *)
                                                             ((long)pppppppuStack_190 + lVar54));
                              if (uVar28 != 1) goto LAB_100060d8;
                              lVar40 = 3;
LAB_100060cc:
                              uVar44 = (uint)*(byte *)((long)pppppppuStack_190 + lVar54 + lVar40);
                            }
                            else {
LAB_100060d8:
                              uVar44 = 0xff;
                            }
                            PF_PART4(uStack_2a0, 0) =
                                 CONCAT13((char)((uVar44 * uVar29 + 0x7f) / 0xff),
                                          (undefined3)uStack_2a0);
                            recovered_10000cf4((void *)((long)pvStack_1e0 +
                                                       (uVar53 * (uint)((int)uStack_330 * 0x40 +
                                                                       (int)uStack_2c8) +
                                                       (ulong)uVar42) * 4),&uStack_2a0,4);
                            uVar42 = uVar42 + 1;
                            lVar54 = lVar54 + uVar58;
                          }
                          lStack_2d0 = lStack_2d0 + uVar58 * uVar51;
                        }
                        uStack_188 = 0;
                        recovered_100036a0(pppppppuStack_190);
                        uStack_310 = uStack_310 + 1;
                        uStack_318 = (ulong)((int)uStack_318 - 0x40);
                        uStack_2dc = uStack_2dc + 0x40;
                      }
                      uStack_330 = uStack_330 + 1;
                      uVar51 = (ulong)uVar41;
                    }
                    bVar17 = true;
                    goto LAB_10006330;
                  }
                }
                else {
                  uVar23 = recovered_10008340((long)data,length,&uStack_168,(uint)uStack_130,
                                              (ulong *)((long)pppppppuStack_a8 + lVar54));
                  if (uVar23 != '\0') goto code_r0x10005e00;
                }
                goto LAB_1000632c;
              }
            }
          }
        }
      }
      pvVar33 = (void *)0x0;
      goto LAB_10006420;
    }
    goto LAB_10005a68;
  }
  *(uint ********)image = uStack_140;
  recovered_1000705c((undefined8 *)((long)image + 8),(undefined8 *)&uStack_1c8);
LAB_10006428:
  uStack_1c0 = 0;
  recovered_100036a0((void *)CONCAT44(uStack_1c4,uStack_1c8));
LAB_100059e8:
  lStack_1a8 = 0;
  recovered_100036a0(pvStack_1b0);
LAB_100056d0:
  ppvStack_120 = (void **)0x0;
  pppppppuVar48 =
       (uint *******)CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
  goto LAB_10004e64;
code_r0x10005e00:
  plVar1 = (long *)((long)pppppppuStack_a8 + lVar54);
  lVar54 = lVar54 + 8;
  uVar51 = uVar51 - 1;
  if (*plVar1 == 0) goto LAB_1000632c;
  goto LAB_10005de0;
LAB_1000632c:
  bVar17 = false;
LAB_10006330:
  uStack_a0 = 0;
  recovered_100036a0(pppppppuStack_a8);
  uVar27 = uStack_258;
  uVar29 = uStack_25c;
  if (!bVar17) {
    pvVar33 = pvStack_1e0;
LAB_10006420:
    uStack_1d8 = 0;
    recovered_100036a0(pvVar33);
    goto LAB_10006428;
  }
  lVar54 = 0;
  for (uVar58 = 0; uVar58 != uVar50; uVar58 = uVar58 + 1) {
    uVar28 = uVar27 + (int)uVar58;
    if (-1 < (int)uVar28) {
      uVar35 = uVar53;
      lVar40 = lVar54;
      uVar46 = uVar29;
      if ((int)uVar28 < PF_PART4(uStack_140, 4)) {
        for (; uVar35 != 0; uVar35 = uVar35 - 1) {
          if ((-1 < (int)uVar46) && ((int)uVar46 < (int)(uint)uStack_140)) {
            recovered_100083e4(CONCAT44(uStack_1c4,uStack_1c8) +
                               (((ulong)uStack_140 & 0xffffffff) * (ulong)uVar28 + (ulong)uVar46) *
                               4,(long)pvStack_1e0 + lVar40);
          }
          lVar40 = lVar40 + 4;
          uVar46 = uVar46 + 1;
        }
      }
    }
    lVar54 = lVar54 + uVar53 * 4;
  }
  uStack_1d8 = 0;
  recovered_100036a0(pvStack_1e0);
  goto LAB_10005a68;
LAB_100059e4:
  bVar19 = false;
  goto LAB_100059e8;
LAB_10005380:
  uStack_2a0 = (void *)0x0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = (void **)0x0;
  uStack_288 = 0;
  uStack_278 = 0;
  uStack_140 = (uint *******)0x0;
  PF_PART4(uStack_130, 0) = 0;
  PF_PART4(uStack_130, 4) = 0;
  PF_PART4(uStack_138, 0) = 0;
  PF_PART4(uStack_138, 4) = 0;
  ppvStack_120 = (void **)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  puStack_118 = (uint *)((ulong)puStack_118 & 0xffffffffffff0000);
  recovered_1000705c(&uStack_2a0,&uStack_140);
  uStack_288 = CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
  uStack_280 = ppvStack_120;
  uStack_278 = PF_PART2(puStack_118, 0);
  PF_PART4(uStack_138, 0) = 0;
  PF_PART4(uStack_138, 4) = 0;
  recovered_100036a0(uStack_140);
  if (uStack_264 == 0) {
    if (uStack_220 != 0) {
      if (uStack_220 != 2) goto LAB_10005524;
      uStack_288 = CONCAT44(PF_PART4(uStack_288, 4),
                            (uint)(*puStack_228 >> 8) | (*puStack_228 & 0xff00ff) << 8);
      uStack_278 = CONCAT11(PF_PART1(uStack_278, 1),1);
    }
LAB_1000552c:
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    pvStack_1b0 = (void *)0x0;
    if (bStack_252 == 1 && uStack_1f0 != 0) {
      uVar53 = ((ulong)uStack_270 >> 0x20) * ((ulong)uStack_270 & 0xffffffff);
      if (uVar53 >> 0x3e == 0) {
        uStack_140 = (uint *******)((ulong)uStack_140 & 0xffffffffffffff00);
        recovered_10007ea8((long *)&pvStack_1b0,uVar53 * 4,(undefined1 *)&uStack_140);
        bVar21 = 0;
        puVar31 = puStack_1f8 + 6;
        for (lVar54 = uStack_1f0 * 0x38; lVar54 != 0; lVar54 = lVar54 + -0x38) {
          if ((bVar21 & 1) == 0) {
            bVar21 = (byte)*puVar31;
          }
          else {
            bVar21 = 1;
          }
          puVar31 = puVar31 + 0xe;
        }
        if ((bVar21 & 1) == 0) {
          PF_PART4(uStack_130, 0) = 0;
          PF_PART4(uStack_130, 4) = 0;
          uStack_140 = (uint *******)0x0;
          PF_PART4(uStack_138, 0) = 0;
          PF_PART4(uStack_138, 4) = 0;
          uVar23 = recovered_10006588((uint *)&uStack_270,(long *)&pvStack_210,&uStack_2a0,
                                      &uStack_140);
          if ((uVar23 == '\0') || (CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138) != lStack_1a8)) {
            PF_PART4(uStack_138, 0) = 0;
            PF_PART4(uStack_138, 4) = 0;
            pppppppuVar48 = uStack_140;
LAB_100059b4:
            recovered_100036a0(pppppppuVar48);
            goto LAB_100059b8;
          }
          recovered_1000705c(&pvStack_1b0,&uStack_140);
          PF_PART4(uStack_138, 0) = 0;
          PF_PART4(uStack_138, 4) = 0;
          recovered_100036a0(uStack_140);
        }
        puVar47 = puStack_1f8 + uStack_1f0 * 0xe;
        for (puVar31 = puStack_1f8; puVar31 != puVar47; puVar31 = puVar31 + 0xe) {
          PF_PART4(uStack_138, 0) = uStack_268;
          PF_PART4(uStack_130, 4) = uStack_25c;
          uStack_128 = uStack_258;
          PF_PART4(uStack_138, 4) = uStack_264;
          PF_PART4(uStack_130, 0) = uStack_260;
          uVar29 = *puVar31;
          uVar27 = puVar31[1];
          uStack_140 = *(uint ********)puVar31;
          uStack_a0 = 0;
          uStack_98 = 0;
          pppppppuStack_a8 = (uint *******)0x0;
          bVar21 = recovered_10006588((uint *)&uStack_140,(long *)(puVar31 + 8),&uStack_2a0,
                                      (long *)&pppppppuStack_a8);
          if ((bVar21 & 1) == 0) {
            uStack_a0 = 0;
            pppppppuVar48 = pppppppuStack_a8;
            goto LAB_100059b4;
          }
          lVar54 = 0;
          uVar50 = (ulong)uStack_270 & 0xffffffff;
          for (uVar53 = 0; uVar53 != uVar27; uVar53 = uVar53 + 1) {
            pvVar33 = (void *)((long)pppppppuStack_a8 + lVar54);
            dst = (void *)((long)pvStack_1b0 +
                          uVar50 * 4 * (ulong)(puVar31[3] + (int)uVar53) + (ulong)puVar31[2] * 4);
            for (uVar58 = (ulong)uVar29; uVar58 != 0; uVar58 = uVar58 - 1) {
              if (puVar31[5] == 0) {
                recovered_10000cf4(dst,pvVar33,4);
              }
              else {
                recovered_100083e4((long)dst,(long)pvVar33);
              }
              pvVar33 = (void *)((long)pvVar33 + 4);
              dst = (void *)((long)dst + 4);
            }
            lVar54 = lVar54 + (ulong)uVar29 * 4;
          }
          uStack_a0 = 0;
          recovered_100036a0(pppppppuStack_a8);
        }
        goto LAB_10005560;
      }
LAB_100059b8:
      bVar19 = false;
    }
    else {
      bVar21 = recovered_10006588((uint *)&uStack_270,(long *)&pvStack_210,&uStack_2a0,
                                  (long *)&pvStack_1b0);
      if ((bVar21 & 1) == 0) goto LAB_100059b8;
LAB_10005560:
      *(uint ********)image = uStack_270;
      recovered_1000705c((undefined8 *)((long)image + 8),&pvStack_1b0);
      bVar19 = true;
    }
    lStack_1a8 = 0;
    recovered_100036a0(pvStack_1b0);
  }
  else {
    if (uStack_264 != 2) {
      if (uStack_264 == 3) {
        bVar19 = false;
        if ((uStack_238 == 0) || (uVar53 = uStack_238 / 3, uStack_238 != uVar53 * 3))
        goto LAB_100059c0;
        uStack_140 = (uint *******)CONCAT71(PF_PART7(uStack_140, 1),0xff);
        recovered_10007ea8(&uStack_2a0,uVar53 << 2,(undefined1 *)&uStack_140);
        lVar40 = 0;
        lVar54 = 0;
        for (; uVar53 != 0; uVar53 = uVar53 - 1) {
          *(undefined1 *)((long)uStack_2a0 + lVar54) = *(undefined1 *)(lStack_240 + lVar40);
          *(undefined1 *)((long)uStack_2a0 + lVar54 + 1) = *(undefined1 *)(lStack_240 + lVar40 + 1);
          *(undefined1 *)((long)uStack_2a0 + lVar54 + 2) = *(undefined1 *)(lStack_240 + lVar40 + 2);
          lVar54 = lVar54 + 4;
          lVar40 = lVar40 + 3;
        }
        lVar54 = 3;
        for (uVar53 = 0; uVar53 < uStack_220; uVar53 = uVar53 + 1) {
          *(undefined1 *)((long)uStack_2a0 + lVar54) = *(undefined1 *)((long)puStack_228 + uVar53);
          lVar54 = lVar54 + 4;
        }
      }
      else if (uStack_220 != 0) goto LAB_10005524;
      goto LAB_1000552c;
    }
    if (uStack_220 == 0) goto LAB_1000552c;
    if (uStack_220 == 6) {
      uStack_288 = CONCAT44((uint)(*puStack_228 >> 8) | (*puStack_228 & 0xff00ff) << 8,
                            (undefined4)uStack_288);
      uStack_280 = (void **)CONCAT44((uint)(puStack_228[2] >> 8) | (puStack_228[2] & 0xff00ff) << 8,
                                     (uint)(puStack_228[1] >> 8) | (puStack_228[1] & 0xff00ff) << 8)
      ;
      uStack_278 = CONCAT11(1,(undefined1)uStack_278);
      goto LAB_1000552c;
    }
LAB_10005524:
    bVar19 = false;
  }
LAB_100059c0:
  uStack_298 = 0;
  recovered_100036a0(uStack_2a0);
  goto LAB_10004560;
  while( true ) {
    puVar47 = puVar31 + 10;
    puVar31 = puVar31 + 0xe;
    lVar54 = lVar54 + -0x38;
    if (*(long *)puVar47 == 0) break;
LAB_10005368:
    if (lVar54 == 0) goto LAB_10005380;
  }
LAB_10004560:
  recovered_100070ac((long)&uStack_270);
  uStack_188 = 0;
  pppppppuVar48 = pppppppuStack_190;
LAB_10004e64:
  recovered_100036a0(pppppppuVar48);
  return bVar19;
}

#undef DAT_1000a870
#undef DAT_1000a8bf
#undef DAT_1000ab78
#undef DAT_1000acd1
#undef DAT_1000acd6
#undef DAT_1000aced
#undef DAT_1000acf7
#undef DAT_1000acfc
#undef DAT_1000ad01
#undef DAT_1000ad06
#undef DAT_1000ad0b
#undef str_1000acc4
#undef lStack_2b0
#undef uStack_2a0
#undef uStack_298
#undef uStack_290
#undef uStack_288
#undef uStack_280
#undef uStack_278
#undef uStack_270
#undef uStack_268
#undef uStack_264
#undef uStack_260
#undef uStack_25c
#undef uStack_258
#undef bStack_254
#undef cStack_253
#undef bStack_252
#undef uStack_251
#undef ppvStack_250
#undef lStack_248
#undef lStack_240
#undef uStack_238
#undef uStack_230
#undef puStack_228
#undef uStack_220
#undef uStack_218
#undef pvStack_210
#undef uStack_208
#undef uStack_200
#undef puStack_1f8
#undef uStack_1f0
#undef uStack_1e8
#undef pvStack_1e0
#undef uStack_1d8
#undef uStack_1d0
#undef uStack_1c8
#undef uStack_1c4
#undef uStack_1c0
#undef pvStack_1b0
#undef lStack_1a8
#undef uStack_1a0
#undef uStack_198
#undef pppppppuStack_190
#undef uStack_188
#undef uStack_180
#undef uStack_178
#undef uStack_170
#undef uStack_168
#undef uStack_160
#undef uStack_154
#undef uStack_150
#undef ppvStack_148
#undef uStack_140
#undef uStack_138
#undef uStack_130
#undef uStack_128
#undef uStack_124
#undef uStack_122
#undef uStack_121
#undef ppvStack_120
#undef puStack_118
#undef puStack_110
#undef puStack_108
#undef ppvStack_100
#undef pppvStack_f8
#undef puStack_f0
#undef uStack_e8
#undef pvStack_e0
#undef uStack_d8
#undef uStack_d0
#undef puStack_c8
#undef uStack_c0
#undef uStack_b8
#undef pppppppuStack_a8
#undef uStack_a0
#undef uStack_98
#undef uStack_330
#undef uStack_318
#undef uStack_310
#undef uStack_2dc
#undef lStack_2d0
#undef uStack_2c8
#undef lStack_2c0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_1000655c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_1000705c(param_1 + 1,param_2 + 1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000cbd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37cU)))
#define DAT_1000cbf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x398U)))
#define DAT_1000cc0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b4U)))
#define DAT_1000cc28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d0U)))
#define lStack_70 (*(long *)(frame + 144))
#define lStack_80 (*(long *)(frame + 128))
#define local_a0 (*(ulong *)(frame + 96))
#define pbStack_b8 (*(byte * *)(frame + 72))
#define pbStack_d0 (*(byte * *)(frame + 48))
#define pbStack_e8 (*(byte * *)(frame + 24))
#define uStack_78 (*(undefined8 *)(frame + 136))
#define uStack_88 (*(undefined8 *)(frame + 120))
#define uStack_90 (*(undefined8 *)(frame + 112))
#define uStack_98 (*(undefined8 *)(frame + 104))
#define uStack_b0 (*(ulong *)(frame + 80))
#define uStack_c0 (*(undefined8 *)(frame + 64))
#define uStack_c8 (*(undefined8 *)(frame + 56))
#define uStack_d8 (*(undefined8 *)(frame + 40))
#define uStack_e0 (*(undefined8 *)(frame + 32))
bool recovered_10006588(uint *param_1,long *param_2,long *param_3,long *param_4)

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
    uVar24 = recovered_10009c80((long)param_1);
    if ((ulong)param_1[1] * (ulong)uVar7 >> 0x3e != 0) {
      return false;
    }
    recovered_10007fa8(param_4,(ulong)param_1[1] * (ulong)uVar7 * 4);
    local_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_70 = 0;
    uVar27 = recovered_10009cb4((long *)&local_a0,param_2);
    if ((uVar27 & 1) != 0) {
      uVar27 = (ulong)uVar7 * (ulong)uVar24 + 7 >> 3;
      uVar24 = recovered_10009c80((long)param_1);
      uVar7 = uVar24 + 7 >> 3;
      if (uVar24 < 8) {
        uVar7 = 1;
      }
      recovered_10008090(&pbStack_b8,uVar27 + 1);
      if (param_1[3] == 6 && param_1[2] == 8) {
        lVar35 = 0;
        uVar28 = 0;
        do {
          if (param_1[1] <= uVar28) {
            bVar22 = lStack_70 == lStack_80;
            goto LAB_10007b9c;
          }
          bVar22 = recovered_10009d5c((long)&local_a0,(long)pbStack_b8,uStack_b0);
          if (!bVar22) break;
          pbVar5 = (byte *)0x0;
          if (uVar28 != 0) {
            pbVar5 = (byte *)((char *)(*param_4 + lVar35) + -uVar27);
          }
          uVar34 = recovered_10009db8((uint)*pbStack_b8,(char *)(*param_4 + lVar35),
                                      (char *)(pbStack_b8 + 1),pbVar5,uVar27,4);
          uVar28 = uVar28 + 1;
          lVar35 = lVar35 + uVar27;
        } while ((uVar34 & 1) != 0);
        bVar22 = false;
      }
      else {
        recovered_10008090(&pbStack_d0,uVar27);
        recovered_10008090(&pbStack_e8,uVar27);
        lVar35 = 0;
        bVar22 = false;
        for (uVar28 = 0; uVar28 < param_1[1]; uVar28 = uVar28 + 1) {
          bVar23 = recovered_10009d5c((long)&local_a0,(long)pbStack_b8,uStack_b0);
          if (!bVar23) {
LAB_10007b84:
            bVar22 = false;
            goto switchD_100077fc_caseD_1;
          }
          pbVar5 = pbStack_d0;
          if (!bVar22) {
            pbVar5 = (byte *)0x0;
          }
          uVar26 = recovered_10009db8((uint)*pbStack_b8,(char *)pbStack_e8,(char *)(pbStack_b8 + 1),
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
              recovered_10000cf4(dst,(void *)(*param_3 + (ulong)*pbVar5 * 4),4);
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
              recovered_10000cf4((void *)(*param_4 + uVar28 * uVar34 * 4),pbStack_e8,uVar34 << 2);
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
        recovered_100036a0(pbStack_e8);
        uStack_c8 = 0;
        recovered_100036a0(pbStack_d0);
      }
LAB_10007b9c:
      uStack_b0 = 0;
      recovered_100036a0(pbStack_b8);
      goto LAB_10007ba0;
    }
  }
  else {
    if ((ulong)param_1[1] * (ulong)uVar7 >> 0x3e != 0) {
      return false;
    }
    local_a0 = local_a0 & 0xffffffffffffff00;
    recovered_10007ea8(param_4,(ulong)param_1[1] * (ulong)uVar7 * 4,(undefined1 *)&local_a0);
    local_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_70 = 0;
    uVar27 = recovered_10009cb4((long *)&local_a0,param_2);
    if ((uVar27 & 1) != 0) {
      uVar24 = recovered_10009c80((long)param_1);
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
            uVar25 = recovered_10009c80((long)param_1);
            uVar34 = (ulong)uVar25 * (ulong)uVar33 + 7 >> 3;
            recovered_10008090(&pbStack_b8,uVar34 + 1);
            recovered_10008090(&pbStack_d0,uVar34);
            recovered_10008090(&pbStack_e8,uVar34);
            uVar27 = 0;
            bVar22 = false;
            uVar28 = (ulong)uVar33;
            while ((uVar27 < uVar19 + 1 &&
                   (bVar23 = recovered_10009d5c((long)&local_a0,(long)pbStack_b8,uStack_b0), bVar23)
                   )) {
              pbVar5 = pbStack_d0;
              if (!bVar22) {
                pbVar5 = (byte *)0x0;
              }
              uVar26 = recovered_10009db8((uint)*pbStack_b8,(char *)pbStack_e8,
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
                  recovered_10000cf4((void *)(lVar4 + (ulong)uVar33 * 4),
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
                    recovered_10000cf4((void *)(lVar4 + (ulong)uVar33 * 4),pbVar5,4);
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
            recovered_100036a0(pbStack_e8);
            uStack_c8 = 0;
            recovered_100036a0(pbStack_d0);
            uStack_b0 = 0;
            recovered_100036a0(pbStack_b8);
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
  recovered_10009f88(&local_a0);
  return bVar22;
}

#undef DAT_1000cbd4
#undef DAT_1000cbf0
#undef DAT_1000cc0c
#undef DAT_1000cc28
#undef lStack_70
#undef lStack_80
#undef local_a0
#undef pbStack_b8
#undef pbStack_d0
#undef pbStack_e8
#undef uStack_78
#undef uStack_88
#undef uStack_90
#undef uStack_98
#undef uStack_b0
#undef uStack_c0
#undef uStack_c8
#undef uStack_d8
#undef uStack_e0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_1000705c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100036a0((void *)*param_1);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100070ac(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009bb4((long *)(param_1 + 0x78));
  recovered_100036a0(*(void **)(param_1 + 0x78));
  recovered_10009aa0((undefined8 *)(param_1 + 0x60));
  recovered_1000a34c((undefined8 *)(param_1 + 0x48));
  recovered_1000a34c((undefined8 *)(param_1 + 0x30));
  return param_1;
}


#define puStack_50 (*(undefined1 * *)(frame + 16))
#define pvStack_48 (*(void * *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070ec
 */

ulong recovered_100070ec(long param_1,uint *param_2)

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
  recovered_1000655c((undefined8 *)param_2,&puStack_50);
  uStack_40 = 0;
  recovered_100036a0(pvStack_48);
  puStack_50 = (undefined1 *)0x0;
  uStack_40 = 0;
  pvStack_48 = (void *)0x0;
  if ((param_1 != 0) && (piVar4 = recovered_10002928(param_1,((uintptr_t)pf_module_state + 0x5a0U)), piVar4 != (int *)0x0)) {
    uVar5 = recovered_10002fdc(piVar4,0,2);
    if (((int)uVar5 == 0) &&
       ((uVar6 = recovered_10003070((long)piVar4), -1 < (long)uVar6 &&
        (uVar5 = recovered_10002fdc(piVar4,0,0), (int)uVar5 == 0)))) {
      recovered_10007fa8((long *)&puStack_50,uVar6);
      if (pvStack_48 == (void *)0x0) {
        bVar2 = true;
      }
      else {
        uVar6 = recovered_10002cb4(puStack_50,1,(long)pvStack_48,piVar4);
        bVar2 = (void *)uVar6 == pvStack_48;
      }
    }
    else {
      bVar2 = false;
    }
    uVar5 = recovered_10002c70(piVar4);
    bVar1 = false;
    if ((int)uVar5 == 0) {
      bVar1 = bVar2;
    }
    if (bVar1) {
      bVar3 = recovered_100043b0(puStack_50,(ulong)pvStack_48,param_2);
      uVar6 = (ulong)bVar3;
      goto LAB_10007190;
    }
  }
  uVar6 = 0;
LAB_10007190:
  pvStack_48 = (void *)0x0;
  recovered_100036a0(puStack_50);
  return uVar6;
}

#undef puStack_50
#undef pvStack_48
#undef uStack_40
#undef uStack_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10007218(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000762c(uint *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == 0) {
    return true;
  }
  lVar1 = recovered_10002ecc(param_2,1,param_3,param_1);
  return lVar1 == param_3;
}


#define uStack_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007664
 */

ulong recovered_10007664(uint *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;

  uVar3 = 0;
  if ((param_4 >> 0x20 == 0) && (param_3 != (byte *)0x0 || param_4 == 0)) {
    uVar2 = ((uint)param_4 & 0xff00ff00) >> 8 | ((uint)param_4 & 0xff00ff) << 8;
    local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = recovered_10009ac4(0,param_2,4);
    if (param_4 != 0) {
      uVar2 = recovered_10009ac4(uVar2,param_3,param_4);
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_38 = uVar2 >> 0x10 | uVar2 << 0x10;
    bVar1 = recovered_1000762c(param_1,(long)&local_34,4);
    uVar3 = (ulong)bVar1;
    if (bVar1 != 0) {
      bVar1 = recovered_1000762c(param_1,(long)param_2,4);
      uVar3 = (ulong)bVar1;
      if (bVar1 != 0) {
        bVar1 = recovered_1000762c(param_1,(long)param_3,param_4);
        uVar3 = (ulong)bVar1;
        if (bVar1 != 0) {
          bVar1 = recovered_1000762c(param_1,(long)&uStack_38,4);
          uVar3 = (ulong)bVar1;
        }
      }
    }
  }
  return uVar3;
}

#undef uStack_38
#undef local_34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000c7e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#define DAT_1000cefc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x561U)))
#define DAT_1000cf01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x566U)))
#define DAT_1000cf37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x596U)))
#define pvStack_98 (*(void * *)(frame + 24))
#define uStack_61 (*(undefined1 *)(frame + 79))
#define uStack_70 (*(undefined8 *)(frame + 64))
#define uStack_78 (*(ulong *)(frame + 56))
#define uStack_80 (*(undefined8 *)(frame + 48))
#define uStack_88 (*(undefined8 *)(frame + 40))
#define uStack_90 (*(ulong *)(frame + 32))
undefined4 recovered_1000771c(long param_1,long param_2,ulong param_3,ulong param_4)

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
    puVar11 = recovered_10002928(param_1,((uintptr_t)pf_module_state + 0x55eU));
    uVar10 = 0;
    if (puVar11 != (uint *)0x0) {
      bVar8 = recovered_1000762c(puVar11,((uintptr_t)pf_module_state + 0x14fU),8);
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
        uVar12 = recovered_10007664(puVar11,&DAT_1000cefc,(byte *)&uStack_80,0xd);
        if ((int)uVar12 != 0) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_80 = (void *)0x0;
          uVar1 = (param_3 & 0xffffffff) << 2 | 1;
          recovered_10007fa8(&uStack_80,uVar1 * (param_4 & 0xffffffff));
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
              recovered_10000cf4(pcVar13 + 1,src,uVar14);
            }
            lVar22 = lVar22 + uVar14;
            lVar23 = lVar23 + uVar1;
          }
          uStack_90 = 0;
          uStack_88 = 0;
          pvStack_98 = (void *)0x0;
          uStack_61 = 0x78;
          recovered_100091a4((long *)&pvStack_98,&uStack_61);
          uStack_61 = 1;
          recovered_100091a4((long *)&pvStack_98,&uStack_61);
          uVar12 = 0;
          while (uVar1 = uStack_78 - uVar12, uVar12 <= uStack_78 && uVar1 != 0) {
            if (0xfffe < uVar1) {
              uVar1 = 0xffff;
            }
            uVar14 = uVar1 + uVar12;
            uStack_61 = uVar14 == uStack_78;
            recovered_100091a4((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)uVar1;
            recovered_100091a4((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar1 >> 8);
            recovered_100091a4((long *)&pvStack_98,&uStack_61);
            uVar9 = (uint)uVar1 ^ 0xffff;
            uStack_61 = (undefined1)uVar9;
            recovered_100091a4((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar9 >> 8);
            recovered_100091a4((long *)&pvStack_98,&uStack_61);
            recovered_10008670((long *)&pvStack_98,(long)pvStack_98 + uStack_90,
                               (undefined1 *)((long)uStack_80 + uVar12),
                               (undefined1 *)((long)uStack_80 + uVar14));
            uVar12 = uVar14;
          }
          uVar9 = recovered_10009140((long)uStack_80,uStack_78);
          uVar1 = uStack_90;
          recovered_10007fa8((long *)&pvStack_98,uStack_90 + 4);
          uVar12 = 0;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          *(uint *)((long)pvStack_98 + uVar1) = uVar9 >> 0x10 | uVar9 << 0x10;
          do {
            uVar1 = uStack_90 - uVar12;
            if (uStack_90 < uVar12 || uVar1 == 0) {
              uStack_90 = 0;
              recovered_100036a0(pvStack_98);
              uStack_78 = 0;
              recovered_100036a0(uStack_80);
              uVar12 = recovered_10007664(puVar11,&DAT_1000cf01,(byte *)0x0,0);
              uVar21 = (undefined4)uVar12;
              goto LAB_10008180;
            }
            if (0x3ffff < uVar1) {
              uVar1 = 0x40000;
            }
            uVar14 = recovered_10007664(puVar11,&DAT_1000cf37,(byte *)((long)pvStack_98 + uVar12),
                                        uVar1);
            uVar12 = uVar1 + uVar12;
          } while ((uVar14 & 1) != 0);
          uStack_90 = 0;
          recovered_100036a0(pvStack_98);
          uStack_78 = 0;
          recovered_100036a0(uStack_80);
        }
      }
      uVar21 = 0;
LAB_10008180:
      uVar15 = recovered_10002c70((int *)puVar11);
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
#undef uStack_61
#undef uStack_70
#undef uStack_78
#undef uStack_80
#undef uStack_88
#undef uStack_90

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000c7f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#define DAT_1000c7f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x118U)))
#define DAT_1000c800 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x120U)))
#define lStack_e0 (*(long *)(frame + 32))
#define local_54 (*(undefined4 *)(frame + 172))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_59 (*(undefined1 *)(frame + 167))
#define local_5a (*(undefined1 *)(frame + 166))
#define local_5b (*(undefined1 *)(frame + 165))
#define local_5c (*(undefined1 *)(frame + 164))
#define local_5e (*(undefined2 *)(frame + 162))
#define local_70 (*(undefined4 *)(frame + 144))
#define local_8c (*(undefined8 *)(frame + 116))
#define local_9c (*(undefined4 *)(frame + 100))
#define local_ac (*(undefined8 *)(frame + 84))
#define local_b4 (*(undefined8 *)(frame + 76))
#define local_b5 (*(undefined1 *)(frame + 75))
#define local_b6 (*(undefined1 *)(frame + 74))
#define local_b7 (*(undefined1 *)(frame + 73))
#define local_b8 (*(undefined1 *)(frame + 72))
#define local_c0 (*(undefined8 *)(frame + 64))
#define local_c1 (*(undefined1 *)(frame + 63))
#define local_c2 (*(undefined1 *)(frame + 62))
#define local_c3 (*(undefined1 *)(frame + 61))
#define local_c4 (*(undefined1 *)(frame + 60))
#define local_c5 (*(undefined1 *)(frame + 59))
#define local_c6 (*(undefined1 *)(frame + 58))
#define local_c7 (*(undefined1 *)(frame + 57))
#define local_c8 (*(undefined1 *)(frame + 56))
#define local_cc (*(undefined4 *)(frame + 52))
#define local_e8 (*(void * *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 152))
#define uStack_6c (*(undefined4 *)(frame + 148))
#define uStack_74 (*(undefined4 *)(frame + 140))
#define uStack_7c (*(undefined8 *)(frame + 132))
#define uStack_84 (*(undefined8 *)(frame + 124))
#define uStack_90 (*(undefined4 *)(frame + 112))
#define uStack_91 (*(undefined1 *)(frame + 111))
#define uStack_95 (*(undefined4 *)(frame + 107))
#define uStack_97 (*(undefined2 *)(frame + 105))
#define uStack_98 (*(undefined1 *)(frame + 104))
#define uStack_a4 (*(undefined8 *)(frame + 92))
byte recovered_10007720(long param_1,long param_2,ulong param_3,uint param_4)

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
       (puVar5 = recovered_10002928(param_1,((uintptr_t)pf_module_state + 0x55eU)), puVar5 != (uint *)0x0)) {
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
      bVar3 = recovered_1000762c(puVar5,(long)&local_5e,0xe);
      bVar4 = false;
      if (bVar3) {
        bVar4 = recovered_1000762c(puVar5,(long)&local_cc,0x6c);
      }
      recovered_10008090(&local_e8,in_x1);
      for (uVar9 = 0; (bVar4 != false && (uVar9 < param_4)); uVar9 = uVar9 + 1) {
        for (uVar7 = 0; in_x1 != uVar7; uVar7 = uVar7 + 4) {
          puVar2 = (undefined1 *)(param_2 + uVar7);
          *(undefined1 *)((long)local_e8 + uVar7) = puVar2[2];
          *(undefined1 *)((long)local_e8 + uVar7 + 1) = puVar2[1];
          *(undefined1 *)((long)local_e8 + uVar7 + 2) = *puVar2;
          *(undefined1 *)((long)local_e8 + uVar7 + 3) = puVar2[3];
        }
        bVar4 = recovered_1000762c(puVar5,(long)local_e8,lStack_e0);
        param_2 = param_2 + in_x1;
      }
      uVar6 = recovered_10002c70((int *)puVar5);
      bVar8 = bVar4 & (int)uVar6 == 0;
      lStack_e0 = 0;
      recovered_100036a0(local_e8);
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
#undef local_54
#undef local_58
#undef local_59
#undef local_5a
#undef local_5b
#undef local_5c
#undef local_5e
#undef local_70
#undef local_8c
#undef local_9c
#undef local_ac
#undef local_b4
#undef local_b5
#undef local_b6
#undef local_b7
#undef local_b8
#undef local_c0
#undef local_c1
#undef local_c2
#undef local_c3
#undef local_c4
#undef local_c5
#undef local_c6
#undef local_c7
#undef local_c8
#undef local_cc
#undef local_e8
#undef uStack_68
#undef uStack_6c
#undef uStack_74
#undef uStack_7c
#undef uStack_84
#undef uStack_90
#undef uStack_91
#undef uStack_95
#undef uStack_97
#undef uStack_98
#undef uStack_a4

#define local_70 (*(void * *)(frame + 16))
#define local_58 (*(undefined8 *)(frame + 40))
#define local_50 (*(undefined4 *)(frame + 48))
#define local_4c (*(undefined1 *)(frame + 52))
#define local_4b (*(undefined1 *)(frame + 53))
#define local_4a (*(undefined1 *)(frame + 54))
#define local_49 (*(undefined1 *)(frame + 55))
#define local_48 (*(undefined2 *)(frame + 56))
#define lStack_68 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007980
 */

uint recovered_10007980(long param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong in_x1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;

  uVar7 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar4 = recovered_10002928(param_1,((uintptr_t)pf_module_state + 0x55eU));
    uVar7 = 0;
    if (puVar4 != (uint *)0x0) {
      local_50 = 0;
      local_58 = 0x20000;
      local_4c = (undefined1)param_3;
      local_4b = (undefined1)(param_3 >> 8);
      local_4a = (undefined1)param_4;
      local_49 = (undefined1)(param_4 >> 8);
      local_48 = 0x2820;
      bVar2 = recovered_1000762c(puVar4,(long)&local_58,0x12);
      in_x1 = (ulong)param_3 * 4;
      recovered_10008090(&local_70,in_x1);
      for (uVar8 = 0; ((bVar2 & 1) != 0 && (uVar8 < param_4)); uVar8 = uVar8 + 1) {
        for (uVar6 = 0; in_x1 != uVar6; uVar6 = uVar6 + 4) {
          puVar1 = (undefined1 *)(param_2 + uVar6);
          *(undefined1 *)((long)local_70 + uVar6) = puVar1[2];
          *(undefined1 *)((long)local_70 + uVar6 + 1) = puVar1[1];
          *(undefined1 *)((long)local_70 + uVar6 + 2) = *puVar1;
          *(undefined1 *)((long)local_70 + uVar6 + 3) = puVar1[3];
        }
        bVar2 = recovered_1000762c(puVar4,(long)local_70,lStack_68);
        param_2 = param_2 + in_x1;
      }
      if ((bVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        bVar2 = recovered_1000762c(puVar4,((uintptr_t)pf_module_state + 0x3ecU),0x1a);
        uVar3 = (uint)bVar2;
      }
      uVar5 = recovered_10002c70((int *)puVar4);
      uVar7 = 0;
      if ((int)uVar5 == 0) {
        uVar7 = uVar3;
      }
      lStack_68 = 0;
      recovered_100036a0(local_70);
    }
  }
  return uVar7;
}

#undef local_70
#undef local_58
#undef local_50
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef lStack_68

#undef DAT_1000a898
#define DAT_1000a898 (*(void * *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_1000a8a0
#define DAT_1000a8a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x130U)))
#undef str_1000ad13
#define str_1000ad13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a3U)))
#define uStack_68 (*(undefined8 *)(frame + 56))
#define local_90 (*(void * *)(frame + 16))
#define local_88 (*(undefined8 *)(frame + 24))
#define local_78 (*(void * *)(frame + 40))
#define local_70 (*(long *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b10
 */

uint recovered_10007b10(long param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
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
      local_90 = DAT_1000a898;
      PF_PART6(local_88, 0) = CONCAT24(0x33,(int)DAT_1000a8a0);
      recovered_10009fac((long *)&local_78,0,(undefined1 *)&local_90,0xe);
      recovered_10009fb4((long *)&local_78,param_3);
      recovered_10009fb4((long *)&local_78,param_4);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0x11);
      recovered_10009fb4((long *)&local_78,1);
      local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
      recovered_100091a4((long *)&local_78,(undefined1 *)&local_90);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      lVar3 = local_70;
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fec((long *)&local_78,lVar3,(uint)local_70);
      recovered_10009fb4((long *)&local_78,param_3);
      recovered_10009fb4((long *)&local_78,param_4);
      recovered_10009fb4((long *)&local_78,1);
      uVar5 = recovered_100011b4(str_1000ad13);
      recovered_10009fb4((long *)&local_78,(int)uVar5 + 1);
      recovered_1000a104((long *)&local_78,(long)local_78 + local_70,str_1000ad13,
                         str_1000ad13 + uVar5);
      local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
      recovered_100091a4((long *)&local_78,(undefined1 *)&local_90);
      recovered_10009fb4((long *)&local_78,6);
      recovered_10009fb4((long *)&local_78,4);
      recovered_10009fb4((long *)&local_78,0xff);
      recovered_10009fb4((long *)&local_78,7);
      recovered_10009fb4((long *)&local_78,4);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,8);
      recovered_10009fb4((long *)&local_78,4);
      recovered_10009fb4((long *)&local_78,1);
      recovered_10009fb4((long *)&local_78,0xf);
      recovered_10009fb4((long *)&local_78,8);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      lVar3 = local_70;
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fec((long *)&local_78,lVar3,(uint)local_70);
      recovered_10009fb4((long *)&local_78,param_3);
      recovered_10009fb4((long *)&local_78,param_4);
      recovered_10009fb4((long *)&local_78,4);
      lVar3 = local_70;
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fb4((long *)&local_78,0);
      recovered_10009fec((long *)&local_78,lVar3,(uint)local_70);
      recovered_10009fb4((long *)&local_78,param_3);
      recovered_10009fb4((long *)&local_78,param_4);
      recovered_1000a1fc((long *)&local_90,uVar14);
      for (uVar5 = 0; uVar14 != uVar5; uVar5 = uVar5 + 1) {
        *(long *)((long)local_90 + uVar5 * 8) = local_70;
        recovered_10009fb4((long *)&local_78,0);
      }
      recovered_10009fb4((long *)&local_78,0);
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
          recovered_10009fec((long *)&local_78,
                             *(long *)((long)local_90 + uVar13 * 8 + uVar14 * uVar10 * 8),
                             (uint)local_70);
          puVar1 = puVar16;
          for (uVar15 = uVar5; uVar15 != 0; uVar15 = uVar15 - 1) {
            recovered_10008670((long *)&local_78,(long)local_78 + local_70,puVar1,puVar1 + uVar2 * 4
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
      puVar6 = recovered_10002928(param_1,((uintptr_t)pf_module_state + 0x55eU));
      if (puVar6 == (uint *)0x0) {
        uVar11 = 0;
      }
      else {
        bVar4 = recovered_1000762c(puVar6,(long)local_78,local_70);
        uVar7 = recovered_10002c70((int *)puVar6);
        uVar11 = 0;
        if ((int)uVar7 == 0) {
          uVar11 = (uint)bVar4;
        }
      }
      local_88 = 0;
      recovered_100036a0(local_90);
      local_70 = 0;
      recovered_100036a0(local_78);
    }
    else {
      uVar11 = 0;
    }
  }
  return uVar11;
}

#undef DAT_1000a898
#undef DAT_1000a8a0
#undef str_1000ad13
#undef uStack_68
#undef local_90
#undef local_88
#undef local_78
#undef local_70

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007ea8(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_10008010(param_1,param_2);
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
    recovered_10008010(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10007eb0(uint param_1,uint param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007f24(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10008010(param_1,param_2);
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
    recovered_10008010(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007fa8(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10008010(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008010(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10008084(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_100036a0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10008084(ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  if (count < 2) {
    count = 1;
  }
  pvVar1 = recovered_10000c20(count);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_10008090(undefined8 *param_1,ulong in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007fa8(param_1,in_x1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100080bc(byte *param_1,int param_2,uint param_3,byte *param_4)

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
 * Address: 0x10008194
 */

undefined8 recovered_10008194(undefined8 *param_1,byte *param_2)

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
LAB_1000829c:
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
      recovered_10000cf4((void *)(*(long *)param_1[10] +
                                 ((ulong)uVar2 + uVar4 * (uVar5 & 0xffffffff)) * 4),local_24,4);
      *(long *)*param_1 = *(long *)*param_1 + 1;
      return 1;
    }
    if (iVar1 == 2) {
      uVar5 = recovered_100080bc(param_2,*(int *)param_1[3],*(uint *)param_1[7],local_24);
      if ((uVar5 & 1) != 0) goto LAB_1000829c;
    }
    else if (iVar1 == 1) {
      uVar3 = (uint)*param_2;
      if (*(int *)param_1[3] != 8) {
        uVar3 = (uint)CONCAT11(param_2[1],*param_2);
      }
      uVar2 = uVar3 - *(uint *)param_1[4];
      if ((*(uint *)param_1[4] <= uVar3) && (uVar2 < *(uint *)param_1[5])) {
        recovered_10000cf4(local_24,(void *)(*(long *)param_1[6] + (ulong)uVar2 * 4),4);
        uVar6 = *(ulong *)*param_1;
        goto LAB_1000829c;
      }
    }
  }
  return 0;
}

#undef local_24

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10008310(uchar *data,ulong size,ulonglong *position,uint *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10008470((long)data,size,*position,out);
  if (bVar1 != 0) {
    *position = *position + 4;
  }
  return (uint)bVar1;
}


#define local_44 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008340
 */

uchar recovered_10008340(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  uVar4 = *param_3;
  if (param_4 == 4) {
    local_44 = 0;
    uVar1 = recovered_10008470(param_1,param_2,uVar4,&local_44);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar4 = (ulong)local_44;
  }
  else {
    if (param_2 < uVar4 || param_2 - uVar4 < 8) {
      return '\0';
    }
    uVar3 = recovered_100084ac((uint *)(param_1 + uVar4));
    uVar2 = recovered_100084ac((uint *)(param_1 + uVar4) + 1);
    uVar4 = CONCAT44(uVar3,uVar2);
  }
  *param_5 = uVar4;
  *param_3 = *param_3 + (ulong)param_4;
  return '\x01';
}

#undef local_44

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100083e4(long param_1,long param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008470(long param_1,ulong param_2,ulong param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;

  uVar1 = param_2 - param_3;
  bVar2 = param_2 >= param_3;
  if (bVar2 && 3 < uVar1) {
    uVar3 = recovered_100084ac((uint *)(param_1 + param_3));
    *param_4 = uVar3;
  }
  return (bVar2 && 2 < uVar1) && (param_2 < param_3 || uVar1 != 3);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_100084ac(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100084b8(long *param_1,undefined8 *param_2)

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
    recovered_1000851c(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000851c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10008590(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined8 *)((long)pvVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_100036a0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10008590(ulong count)

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
  pvVar1 = recovered_10000c20(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_100085a0(undefined8 *param_1,ulong in_x1,undefined1 *in_x2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007f24(param_1,in_x1,in_x2);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100085cc(long *param_1,undefined1 *param_2,undefined1 *param_3)

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
      recovered_10008010(param_1,uVar4);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_100085e0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000860c(param_1,param_2);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000860c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000851c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10008670(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10008010(param_1,uVar5);
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


#undef DAT_10010320
#define DAT_10010320 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bb0U)))
#undef DAT_10010380
#define DAT_10010380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c10U)))
#undef UNK_10010318
#define UNK_10010318 (*(byte *)(((uintptr_t)pf_module_state + 0x5ba8U)))
#undef UNK_10010319
#define UNK_10010319 (*(byte *)(((uintptr_t)pf_module_state + 0x5ba9U)))
#undef UNK_10010328
#define UNK_10010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bb8U)))
#undef UNK_10010330
#define UNK_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc0U)))
#undef UNK_10010338
#define UNK_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc8U)))
#undef UNK_10010340
#define UNK_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd0U)))
#undef UNK_10010348
#define UNK_10010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd8U)))
#undef UNK_10010350
#define UNK_10010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be0U)))
#undef UNK_10010358
#define UNK_10010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef UNK_10010360
#define UNK_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef UNK_10010368
#define UNK_10010368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5bf8U)))
#undef UNK_1001036d
#define UNK_1001036d (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5bfdU)))
#undef UNK_10010370
#define UNK_10010370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c00U)))
#undef UNK_10010375
#define UNK_10010375 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c05U)))
#undef UNK_10010388
#define UNK_10010388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c18U)))
#undef UNK_10010390
#define UNK_10010390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c20U)))
#undef UNK_10010398
#define UNK_10010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c28U)))
#undef UNK_100103a0
#define UNK_100103a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c30U)))
#undef UNK_100103a8
#define UNK_100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c38U)))
#undef UNK_100103b0
#define UNK_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c40U)))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c48U)))
#undef UNK_100103c0
#define UNK_100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c50U)))
#undef UNK_100103c8
#define UNK_100103c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c58U)))
#undef UNK_100103cd
#define UNK_100103cd (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c5dU)))
#undef UNK_100103d0
#define UNK_100103d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c60U)))
#undef UNK_100103d5
#define UNK_100103d5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c65U)))
#undef _DAT_10010320
#define _DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bb0U)))
#undef _DAT_10010380
#define _DAT_10010380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c10U)))
#undef bRam0000000010010318
#define bRam0000000010010318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ba8U)))
#undef bRam0000000010010319
#define bRam0000000010010319 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ba9U)))
#undef uRam0000000010010328
#define uRam0000000010010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bb8U)))
#undef uRam0000000010010330
#define uRam0000000010010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc0U)))
#undef uRam0000000010010338
#define uRam0000000010010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc8U)))
#undef uRam0000000010010340
#define uRam0000000010010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd0U)))
#undef uRam0000000010010348
#define uRam0000000010010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd8U)))
#undef uRam0000000010010350
#define uRam0000000010010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be0U)))
#undef uRam0000000010010358
#define uRam0000000010010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef uRam0000000010010360
#define uRam0000000010010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef uRam0000000010010368
#define uRam0000000010010368 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5bf8U)))->pf_payload_bits
#undef uRam000000001001036d
#define uRam000000001001036d ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x5bfdU)))->pf_payload_bits
#undef uRam0000000010010370
#define uRam0000000010010370 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5c00U)))->pf_payload_bits
#undef uRam0000000010010375
#define uRam0000000010010375 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c05U)))
#undef uRam0000000010010388
#define uRam0000000010010388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c18U)))
#undef uRam0000000010010390
#define uRam0000000010010390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c20U)))
#undef uRam0000000010010398
#define uRam0000000010010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c28U)))
#undef uRam00000000100103a0
#define uRam00000000100103a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c30U)))
#undef uRam00000000100103a8
#define uRam00000000100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c38U)))
#undef uRam00000000100103b0
#define uRam00000000100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c40U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c48U)))
#undef uRam00000000100103c0
#define uRam00000000100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c50U)))
#undef uRam00000000100103c8
#define uRam00000000100103c8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5c58U)))->pf_payload_bits
#undef uRam00000000100103cd
#define uRam00000000100103cd ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x5c5dU)))->pf_payload_bits
#undef uRam00000000100103d0
#define uRam00000000100103d0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5c60U)))->pf_payload_bits
#undef uRam00000000100103d5
#define uRam00000000100103d5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c65U)))
#define uStack_78 (*(undefined8 *)(frame + 568))
#define local_2a0 (*(ulong *)(frame + 16))
#define local_240 (*(ulong *)(frame + 112))
#define local_1e0 (*(undefined8 *)(frame + 208))
#define local_1d8 (*(byte * *)(frame + 216))
#define local_1c8 (*(long *)(frame + 232))
#define local_1c0 (*(ulong *)(frame + 240))
#define local_1b8 (*(uint *)(frame + 248))
#define local_1b0 (*(undefined8 *)(frame + 256))
#define local_100 (*(void * *)(frame + 432))
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
#define uStack_e0 (*(undefined8 *)(frame + 464))
#define uStack_d8 (*(undefined8 *)(frame + 472))
#define uStack_d0 (*(undefined8 *)(frame + 480))
#define uStack_c8 (*(undefined8 *)(frame + 488))
#define pvStack_c0 (*(void * *)(frame + 496))
#define uStack_b8 (*(undefined5 *)(frame + 504))
#define uStack_b3 (*(undefined3 *)(frame + 509))
#define uStack_b0 (*(undefined5 *)(frame + 512))
#define uStack_ab (*(undefined8 *)(frame + 517))
#define uStack_98 (*(uint *)(frame + 536))
#define uStack_94 (*(undefined4 *)(frame + 540))
#define uStack_90 (*(undefined8 *)(frame + 544))
#define uStack_7c (*(uint *)(frame + 564))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008768
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10008768(long *param_1,long *param_2)

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
        uVar7 = recovered_10008f30((long *)&local_1d8,1,(uint *)((long)&local_1e0 + 4));
        if ((int)uVar7 == 0) {
          return '\0';
        }
        uVar7 = recovered_10008f30((long *)&local_1d8,2,(uint *)&local_1e0);
        if ((int)uVar7 == 0) {
          return '\0';
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
          uVar7 = recovered_10008f30((long *)&local_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar7 == 0) ||
              (uVar7 = recovered_10008f30((long *)&local_1d8,5,(uint *)&uStack_78), (int)uVar7 == 0)
              ) || (uVar7 = recovered_10008f30((long *)&local_1d8,4,&uStack_7c), (int)uVar7 == 0)) {
            iVar10 = 1;
          }
          else {
            uVar8 = uStack_78 & 0xffffffff;
            uVar12 = uStack_78 >> 0x20;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            recovered_100094d4((long *)&uStack_98,0x13,(undefined4 *)&local_100);
            lVar11 = uVar12 + 0x101;
            pointer = (void *)CONCAT44(uStack_94,uStack_98);
            puVar2 = (uint *)((uintptr_t)pf_module_state + 0x330U);
            for (uVar12 = (ulong)(uStack_7c + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
              local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
              uVar7 = recovered_10008f30((long *)&local_1d8,3,(uint *)&local_100);
              if ((int)uVar7 == 0) {
                uStack_90 = 0;
                recovered_100036a0(pointer);
                iVar10 = 1;
                goto LAB_10008ba8;
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
            uVar12 = recovered_10009370((long *)&uStack_98,(uint *)&local_100,0);
            if ((uVar12 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar8 = uVar8 + 1 + lVar11;
              puStack_118 = (undefined4 *)0x0;
              recovered_100095e4((long *)&puStack_118,uVar8);
              do {
                uVar12 = uStack_110;
                if (uVar8 <= uStack_110) {
                  recovered_10009934((long *)&uStack_130,puStack_118,puStack_118 + lVar11);
                  recovered_10009934(&uStack_148,puStack_118 + lVar11,puStack_118 + uStack_110);
                  uVar8 = recovered_10009370((long *)&uStack_130,(uint *)&local_240,0);
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
                      uVar8 = recovered_10009370(&uStack_148,(uint *)&local_2a0,1);
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
                      recovered_10009668(&local_2a0,&local_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_100036a0(pvStack_170);
                      uVar8 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_100036a0((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_100036a0((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_10008cc8;
                }
                local_1b0 = local_1b0 & 0xffffffff00000000;
                uVar5 = recovered_1000920c((long *)&local_1d8,(long)&local_100,(uint *)&local_1b0);
                if ((uVar5 & 1) == 0) break;
                if ((uint)local_1b0 < 0x10) {
                  recovered_1000986c((long *)&puStack_118,(undefined4 *)&local_1b0);
LAB_10008a90:
                  iVar10 = 5;
                  goto LAB_10008b80;
                }
                if ((uint)local_1b0 == 0x12) {
                  uStack_130 = 0;
                  uVar7 = recovered_10008f30((long *)&local_1d8,7,&uStack_130);
                  if ((int)uVar7 == 0) goto LAB_10008b7c;
                  uVar5 = uStack_130 + 0xb;
                  for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar8; uVar6 = uVar6 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_100098d0((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar12 = uStack_110;
                  }
                  goto LAB_10008a90;
                }
                if ((uint)local_1b0 == 0x11) {
                  uStack_130 = 0;
                  uVar7 = recovered_10008f30((long *)&local_1d8,3,&uStack_130);
                  if ((int)uVar7 == 0) goto LAB_10008b7c;
                  uVar5 = uStack_130 + 3;
                  for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar8; uVar6 = uVar6 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_100098d0((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar12 = uStack_110;
                  }
                  goto LAB_10008a90;
                }
                if (((uint)local_1b0 != 0x10) || (uVar12 == 0)) break;
                uStack_130 = 0;
                uVar7 = recovered_10008f30((long *)&local_1d8,2,&uStack_130);
                if ((int)uVar7 != 0) {
                  uVar5 = uStack_130 + 3;
                  PF_PART4(uStack_148, 0) = puStack_118[uVar12 - 1];
                  for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar8; uVar6 = uVar6 + 1) {
                    recovered_1000986c((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar12 = uStack_110;
                  }
                  goto LAB_10008a90;
                }
LAB_10008b7c:
                iVar10 = 1;
LAB_10008b80:
              } while (iVar10 == 5);
              uVar8 = 0;
LAB_10008cc8:
              uStack_110 = 0;
              recovered_100036a0(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_100036a0(pvStack_c0);
            uStack_90 = 0;
            recovered_100036a0((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar8 & 1) == 0) {
              iVar10 = 1;
            }
            else {
              uVar7 = recovered_10008fac((long *)&local_1d8,(long)&local_240,(long)&local_2a0,
                                         param_2);
              iVar10 = 3;
              if ((int)uVar7 == 0) {
                iVar10 = 1;
              }
            }
          }
LAB_10008ba8:
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_100036a0(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_100036a0(pvStack_200);
LAB_10008bb8:
          if (iVar10 != 3) {
            return '\0';
          }
        }
        else {
          if ((uint)local_1e0 != 1) {
            if ((uint)local_1e0 != 0) {
              return '\0';
            }
            local_1c0 = local_1c0 >> (local_1b8 & 7);
            local_1b8 = local_1b8 & 0xfffffff8;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            local_1b0 = (ulong)PF_PART4(local_1b0, 4) << 0x20;
            local_240 = local_240 & 0xffffffff00000000;
            local_2a0 = local_2a0 & 0xffffffff00000000;
            uVar7 = recovered_10008f30((long *)&local_1d8,8,(uint *)&local_100);
            if ((((int)uVar7 != 0) &&
                (uVar7 = recovered_10008f30((long *)&local_1d8,8,(uint *)&local_1b0),
                (int)uVar7 != 0)) &&
               ((uVar7 = recovered_10008f30((long *)&local_1d8,8,(uint *)&local_240),
                (int)uVar7 != 0 &&
                (uVar7 = recovered_10008f30((long *)&local_1d8,8,(uint *)&local_2a0),
                (int)uVar7 != 0)))) {
              uVar5 = (uint)local_100 | (uint)local_1b0 << 8;
              if ((((uint)local_240 | (int)local_2a0 << 8) ^ uVar5) == 0xffff) {
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                  uStack_98 = 0;
                  uVar7 = recovered_10008f30((long *)&local_1d8,8,&uStack_98);
                  if ((int)uVar7 == 0) goto LAB_10008b9c;
                  puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                  recovered_100091a4(param_2,(undefined1 *)&puStack_118);
                }
                iVar10 = 3;
                goto LAB_10008bb8;
              }
            }
LAB_10008b9c:
            iVar10 = 1;
            goto LAB_10008bb8;
          }
          if ((bRam0000000010010318 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),8);
            recovered_100094d4((long *)&local_100,0x120,(undefined4 *)&local_1b0);
            for (lVar11 = 0; lVar11 != 0x1c0; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x240) = 9;
            }
            for (lVar11 = 0; lVar11 != 0x60; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x400) = 7;
            }
            for (lVar11 = 0; lVar11 != 0x20; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x460) = 8;
            }
            uRam0000000010010375 = 0;
            uRam0000000010010370 = 0;
            uRam0000000010010358 = 0;
            uRam0000000010010350 = 0;
            uRam0000000010010368 = 0;
            uRam000000001001036d = 0;
            uRam0000000010010360 = 0;
            uRam0000000010010338 = 0;
            uRam0000000010010330 = 0;
            uRam0000000010010348 = 0;
            uRam0000000010010340 = 0;
            uRam0000000010010328 = 0;
            _DAT_10010320 = 0;
            recovered_10009370((long *)&local_100,(uint *)&DAT_10010320,0);
            uStack_f8 = 0;
            recovered_100036a0(local_100);
            recovered_10003700();
            bRam0000000010010318 = 1;
          }
          if ((bRam0000000010010319 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),5);
            plVar9 = recovered_100094d4((long *)&local_100,0x20,(undefined4 *)&local_1b0);
            uRam0000000010010388 = 0;
            _DAT_10010380 = 0;
            uRam0000000010010398 = 0;
            uRam0000000010010390 = 0;
            uRam00000000100103a8 = 0;
            uRam00000000100103a0 = 0;
            uRam00000000100103b8 = 0;
            uRam00000000100103b0 = 0;
            uRam00000000100103c8 = 0;
            uRam00000000100103c0 = 0;
            uRam00000000100103d5 = 0;
            uRam00000000100103cd = 0;
            uRam00000000100103d0 = 0;
            recovered_10009370(plVar9,(uint *)&DAT_10010380,0);
            uStack_f8 = 0;
            recovered_100036a0(local_100);
            recovered_10003700();
            bRam0000000010010319 = 1;
          }
          uVar8 = recovered_10008fac((long *)&local_1d8,((uintptr_t)pf_module_state + 0x5bb0U),((uintptr_t)pf_module_state + 0x5c10U),param_2);
          if ((uVar8 & 1) == 0) {
            return '\0';
          }
        }
      } while (iVar4 == 0);
      if (local_1c8 == lStack_1d0 && local_1b8 < 8) {
        uVar5 = recovered_100084ac((uint *)(*param_1 + param_1[1] + -4));
        uVar6 = recovered_10009140(*param_2,param_2[1]);
        return uVar6 == uVar5;
      }
    }
  }
  return '\0';
}

#undef DAT_10010320
#undef DAT_10010380
#undef UNK_10010318
#undef UNK_10010319
#undef UNK_10010328
#undef UNK_10010330
#undef UNK_10010338
#undef UNK_10010340
#undef UNK_10010348
#undef UNK_10010350
#undef UNK_10010358
#undef UNK_10010360
#undef UNK_10010368
#undef UNK_1001036d
#undef UNK_10010370
#undef UNK_10010375
#undef UNK_10010388
#undef UNK_10010390
#undef UNK_10010398
#undef UNK_100103a0
#undef UNK_100103a8
#undef UNK_100103b0
#undef UNK_100103b8
#undef UNK_100103c0
#undef UNK_100103c8
#undef UNK_100103cd
#undef UNK_100103d0
#undef UNK_100103d5
#undef _DAT_10010320
#undef _DAT_10010380
#undef bRam0000000010010318
#undef bRam0000000010010319
#undef uRam0000000010010328
#undef uRam0000000010010330
#undef uRam0000000010010338
#undef uRam0000000010010340
#undef uRam0000000010010348
#undef uRam0000000010010350
#undef uRam0000000010010358
#undef uRam0000000010010360
#undef uRam0000000010010368
#undef uRam000000001001036d
#undef uRam0000000010010370
#undef uRam0000000010010375
#undef uRam0000000010010388
#undef uRam0000000010010390
#undef uRam0000000010010398
#undef uRam00000000100103a0
#undef uRam00000000100103a8
#undef uRam00000000100103b0
#undef uRam00000000100103b8
#undef uRam00000000100103c0
#undef uRam00000000100103c8
#undef uRam00000000100103cd
#undef uRam00000000100103d0
#undef uRam00000000100103d5
#undef uStack_78
#undef local_2a0
#undef local_240
#undef local_1e0
#undef local_1d8
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_100
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
#undef uStack_e0
#undef uStack_d8
#undef uStack_d0
#undef uStack_c8
#undef pvStack_c0
#undef uStack_b8
#undef uStack_b3
#undef uStack_b0
#undef uStack_ab
#undef uStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_7c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10008f30(long *param_1,uint param_2,uint *param_3)

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


#undef DAT_1000a8c8
#define DAT_1000a8c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x158U)))
#undef DAT_1000a93c
#define DAT_1000a93c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef DAT_1000a9b0
#define DAT_1000a9b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x240U)))
#undef DAT_1000aa28
#define DAT_1000aa28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#define local_6c (*(uint *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fac
 */

undefined8 recovered_10008fac(long *param_1,long param_2,long param_3,long *param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  int iVar3;

  while( true ) {
    while( true ) {
      local_64 = 0;
      uVar1 = recovered_1000920c(param_1,param_2,&local_64);
      if (uVar1 == 0) {
        return 0;
      }
      if (0xff < local_64) break;
      local_68 = CONCAT31(PF_PART3(local_68, 1),(char)local_64);
      recovered_100091a4(param_4,(undefined1 *)&local_68);
    }
    if (local_64 == 0x100) {
      return 1;
    }
    if (0x11d < local_64) {
      return 0;
    }
    iVar3 = *(int *)(&DAT_1000a8c8 + (ulong)(local_64 - 0x101) * 4);
    if (*(uint *)(&DAT_1000a93c + (ulong)(local_64 - 0x101) * 4) != 0) {
      local_68 = 0;
      uVar2 = recovered_10008f30(param_1,*(uint *)(&DAT_1000a93c + (ulong)(local_64 - 0x101) * 4),
                                 &local_68);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      iVar3 = local_68 + iVar3;
    }
    local_68 = 0;
    uVar1 = recovered_1000920c(param_1,param_3,&local_68);
    if (uVar1 == 0) break;
    if (0x1d < local_68) {
      return 0;
    }
    uVar1 = *(uint *)(&DAT_1000a9b0 + (ulong)local_68 * 4);
    if (*(uint *)(&DAT_1000aa28 + (ulong)local_68 * 4) != 0) {
      local_6c = 0;
      uVar2 = recovered_10008f30(param_1,*(uint *)(&DAT_1000aa28 + (ulong)local_68 * 4),&local_6c);
      if ((int)uVar2 == 0) {
        return 0;
      }
      uVar1 = local_6c + uVar1;
    }
    if (uVar1 == 0) {
      return 0;
    }
    if ((ulong)param_4[1] < (ulong)uVar1) {
      return 0;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      recovered_10009308(param_4,(undefined1 *)(*param_4 + (param_4[1] - (ulong)uVar1)));
    }
  }
  return 0;
}

#undef DAT_1000a8c8
#undef DAT_1000a93c
#undef DAT_1000a9b0
#undef DAT_1000aa28
#undef local_6c
#undef local_68
#undef local_64

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10009120(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009a74((undefined8 *)(param_1 + 0x40));
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10009140(long param_1,ulong param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100091a4(long *param_1,undefined1 *param_2)

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
    recovered_10008010(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_54 (*(uint *)(frame + 28))
uint recovered_1000920c(long *param_1,long param_2,uint *param_3)

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
      uVar3 = recovered_10008f30(param_1,1,&local_54);
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10009308(long *param_1,undefined1 *param_2)

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
    recovered_10008010(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define auStack_90 (*(ulong (*)[8])(frame + 80))
#define auStack_d0 (*(uint (*)[16])(frame + 16))
#define pvStack_50 (*(void * *)(frame + 144))
#define uStack_3b (*(undefined8 *)(frame + 165))
#define uStack_40 (*(undefined5 *)(frame + 160))
#define uStack_43 (*(undefined3 *)(frame + 157))
#define uStack_48 (*(undefined5 *)(frame + 152))
undefined8 recovered_10009370(long *param_1,uint *param_2,undefined8 param_3)

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
  recovered_10009668((undefined8 *)param_2,auStack_90);
  uStack_48 = 0;
  uStack_43 = 0;
  recovered_100036a0(pvStack_50);
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
        recovered_100096ac((long *)(param_2 + 0x10),(ulong)uVar5,(undefined2 *)auStack_90);
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
#undef pvStack_50
#undef uStack_3b
#undef uStack_40
#undef uStack_43
#undef uStack_48

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_100094d4(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10009500(param_1,param_2,param_3);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009500(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_100095e4(param_1,param_2);
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
    recovered_100095e4(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009580(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100095e4(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100095e4(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10009658(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined4 *)((long)pvVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_100036a0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10009658(ulong count)

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
  pvVar1 = recovered_10000c20(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_10009668(undefined8 *param_1,undefined8 *param_2)

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
  recovered_100096b4(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = uVar1;
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100096ac(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_100097e8(param_1,param_2);
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
    recovered_100097e8(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_100096b4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100036a0((void *)*param_1);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009704(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_100097e8(param_1,param_2);
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
    recovered_100097e8(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009784(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100097e8(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100097e8(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000985c(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)((long)pvVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_100036a0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_1000985c(ulong count)

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
  pvVar1 = recovered_10000c20(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000986c(long *param_1,undefined4 *param_2)

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
    recovered_100095e4(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100098d0(long *param_1,undefined4 *param_2)

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
    recovered_100095e4(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_10009934(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000996c(param_1,0,param_2,param_3);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000996c(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

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
      recovered_100095e4(param_1,uVar4);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_10009a74(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100036a0((void *)*param_1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_10009aa0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100036a0((void *)*param_1);
  return param_1;
}


#undef DAT_1001031a
#define DAT_1001031a (*(byte *)(((uintptr_t)pf_module_state + 0x5baaU)))
#undef DAT_100103e0
#define DAT_100103e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ac4
 */

uint recovered_10009ac4(uint param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;

  if ((DAT_1001031a & 1) == 0) {
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
      (&DAT_100103e0)[uVar2] = uVar1;
    }
    DAT_1001031a = 1;
  }
  uVar1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = (&DAT_100103e0)[(byte)(*param_2 ^ (byte)uVar1)] ^ uVar1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}

#undef DAT_1001031a
#undef DAT_100103e0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009b54(long *param_1,undefined8 *param_2)

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
    recovered_10009c08(param_1,uVar1);
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
 * Address: 0x10009bb4
 */

void recovered_10009bb4(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10009aa0((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009c08(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000366c(param_2 << 4);
    lVar2 = 0;
    uVar4 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar5 = *(undefined8 *)(*param_1 + lVar2);
      ((undefined8 *)((long)pvVar1 + lVar2))[1] = ((undefined8 *)(*param_1 + lVar2))[1];
      *(undefined8 *)((long)pvVar1 + lVar2) = uVar5;
      lVar2 = lVar2 + 0x10;
    }
    recovered_100036a0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1000ccf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x420U)))
int recovered_10009c80(long param_1)

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

#undef DAT_10010320
#define DAT_10010320 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bb0U)))
#undef DAT_10010380
#define DAT_10010380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c10U)))
#undef UNK_10010318
#define UNK_10010318 (*(byte *)(((uintptr_t)pf_module_state + 0x5ba8U)))
#undef UNK_10010319
#define UNK_10010319 (*(byte *)(((uintptr_t)pf_module_state + 0x5ba9U)))
#undef UNK_10010328
#define UNK_10010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bb8U)))
#undef UNK_10010330
#define UNK_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc0U)))
#undef UNK_10010338
#define UNK_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc8U)))
#undef UNK_10010340
#define UNK_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd0U)))
#undef UNK_10010348
#define UNK_10010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd8U)))
#undef UNK_10010350
#define UNK_10010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be0U)))
#undef UNK_10010358
#define UNK_10010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef UNK_10010360
#define UNK_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef UNK_10010368
#define UNK_10010368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5bf8U)))
#undef UNK_1001036d
#define UNK_1001036d (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5bfdU)))
#undef UNK_10010370
#define UNK_10010370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c00U)))
#undef UNK_10010375
#define UNK_10010375 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c05U)))
#undef UNK_10010388
#define UNK_10010388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c18U)))
#undef UNK_10010390
#define UNK_10010390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c20U)))
#undef UNK_10010398
#define UNK_10010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c28U)))
#undef UNK_100103a0
#define UNK_100103a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c30U)))
#undef UNK_100103a8
#define UNK_100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c38U)))
#undef UNK_100103b0
#define UNK_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c40U)))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c48U)))
#undef UNK_100103c0
#define UNK_100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c50U)))
#undef UNK_100103c8
#define UNK_100103c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c58U)))
#undef UNK_100103cd
#define UNK_100103cd (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c5dU)))
#undef UNK_100103d0
#define UNK_100103d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c60U)))
#undef UNK_100103d5
#define UNK_100103d5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c65U)))
#undef _DAT_10010320
#define _DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bb0U)))
#undef _DAT_10010380
#define _DAT_10010380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c10U)))
#undef bRam0000000010010318
#define bRam0000000010010318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ba8U)))
#undef bRam0000000010010319
#define bRam0000000010010319 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ba9U)))
#undef uRam0000000010010328
#define uRam0000000010010328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bb8U)))
#undef uRam0000000010010330
#define uRam0000000010010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc0U)))
#undef uRam0000000010010338
#define uRam0000000010010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bc8U)))
#undef uRam0000000010010340
#define uRam0000000010010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd0U)))
#undef uRam0000000010010348
#define uRam0000000010010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bd8U)))
#undef uRam0000000010010350
#define uRam0000000010010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be0U)))
#undef uRam0000000010010358
#define uRam0000000010010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef uRam0000000010010360
#define uRam0000000010010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef uRam0000000010010368
#define uRam0000000010010368 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5bf8U)))->pf_payload_bits
#undef uRam000000001001036d
#define uRam000000001001036d ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x5bfdU)))->pf_payload_bits
#undef uRam0000000010010370
#define uRam0000000010010370 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5c00U)))->pf_payload_bits
#undef uRam0000000010010375
#define uRam0000000010010375 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c05U)))
#undef uRam0000000010010388
#define uRam0000000010010388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c18U)))
#undef uRam0000000010010390
#define uRam0000000010010390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c20U)))
#undef uRam0000000010010398
#define uRam0000000010010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c28U)))
#undef uRam00000000100103a0
#define uRam00000000100103a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c30U)))
#undef uRam00000000100103a8
#define uRam00000000100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c38U)))
#undef uRam00000000100103b0
#define uRam00000000100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c40U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c48U)))
#undef uRam00000000100103c0
#define uRam00000000100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c50U)))
#undef uRam00000000100103c8
#define uRam00000000100103c8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5c58U)))->pf_payload_bits
#undef uRam00000000100103cd
#define uRam00000000100103cd ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x5c5dU)))->pf_payload_bits
#undef uRam00000000100103d0
#define uRam00000000100103d0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5c60U)))->pf_payload_bits
#undef uRam00000000100103d5
#define uRam00000000100103d5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c65U)))
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
 * Address: 0x10009cb4
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10009cb4(long *param_1,long *param_2)

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
  recovered_10008010(param_1,uVar11);
  puVar3 = (undefined8 *)*param_2;
  for (lVar14 = param_2[1] << 4; lVar14 != 0; lVar14 = lVar14 + -0x10) {
    recovered_10008670(param_1,*param_1 + param_1[1],(undefined1 *)*puVar3,
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
        uVar9 = recovered_10008f30((long *)&pbStack_1d8,1,(uint *)((long)&uStack_1e0 + 4));
        if ((int)uVar9 == 0) {
          return 0;
        }
        uVar9 = recovered_10008f30((long *)&pbStack_1d8,2,(uint *)&uStack_1e0);
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
          uVar9 = recovered_10008f30((long *)&pbStack_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar9 == 0) ||
              (uVar9 = recovered_10008f30((long *)&pbStack_1d8,5,(uint *)&uStack_78),
              (int)uVar9 == 0)) ||
             (uVar9 = recovered_10008f30((long *)&pbStack_1d8,4,&uStack_7c), (int)uVar9 == 0)) {
            iVar12 = 1;
          }
          else {
            uVar11 = uStack_78 & 0xffffffff;
            uVar15 = uStack_78 >> 0x20;
            pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
            recovered_100094d4((long *)&uStack_98,0x13,(undefined4 *)&pvStack_100);
            lVar14 = uVar15 + 0x101;
            pointer = (void *)CONCAT44(uStack_94,uStack_98);
            puVar4 = (uint *)((uintptr_t)pf_module_state + 0x330U);
            for (uVar15 = (ulong)(uStack_7c + 4); uVar15 != 0; uVar15 = uVar15 - 1) {
              pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
              uVar9 = recovered_10008f30((long *)&pbStack_1d8,3,(uint *)&pvStack_100);
              if ((int)uVar9 == 0) {
                uStack_90 = 0;
                recovered_100036a0(pointer);
                iVar12 = 1;
                goto LAB_10008ba8;
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
            uVar15 = recovered_10009370((long *)&uStack_98,(uint *)&pvStack_100,0);
            if ((uVar15 & 1) == 0) {
              uVar11 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar11 = uVar11 + 1 + lVar14;
              puStack_118 = (undefined4 *)0x0;
              recovered_100095e4((long *)&puStack_118,uVar11);
              do {
                uVar15 = uStack_110;
                if (uVar11 <= uStack_110) {
                  recovered_10009934((long *)&uStack_130,puStack_118,puStack_118 + lVar14);
                  recovered_10009934(&uStack_148,puStack_118 + lVar14,puStack_118 + uStack_110);
                  uVar11 = recovered_10009370((long *)&uStack_130,(uint *)&uStack_240,0);
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
                      uVar11 = recovered_10009370(&uStack_148,(uint *)&uStack_2a0,1);
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
                      recovered_10009668(&uStack_2a0,&uStack_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_100036a0(pvStack_170);
                      uVar11 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_100036a0((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_100036a0((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_10008cc8;
                }
                uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
                uVar7 = recovered_1000920c((long *)&pbStack_1d8,(long)&pvStack_100,
                                           (uint *)&uStack_1b0);
                if ((uVar7 & 1) == 0) break;
                if ((uint)uStack_1b0 < 0x10) {
                  recovered_1000986c((long *)&puStack_118,(undefined4 *)&uStack_1b0);
LAB_10008a90:
                  iVar12 = 5;
                  goto LAB_10008b80;
                }
                if ((uint)uStack_1b0 == 0x12) {
                  uStack_130 = 0;
                  uVar9 = recovered_10008f30((long *)&pbStack_1d8,7,&uStack_130);
                  if ((int)uVar9 == 0) goto LAB_10008b7c;
                  uVar7 = uStack_130 + 0xb;
                  for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_100098d0((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar15 = uStack_110;
                  }
                  goto LAB_10008a90;
                }
                if ((uint)uStack_1b0 == 0x11) {
                  uStack_130 = 0;
                  uVar9 = recovered_10008f30((long *)&pbStack_1d8,3,&uStack_130);
                  if ((int)uVar9 == 0) goto LAB_10008b7c;
                  uVar7 = uStack_130 + 3;
                  for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_100098d0((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar15 = uStack_110;
                  }
                  goto LAB_10008a90;
                }
                if (((uint)uStack_1b0 != 0x10) || (uVar15 == 0)) break;
                uStack_130 = 0;
                uVar9 = recovered_10008f30((long *)&pbStack_1d8,2,&uStack_130);
                if ((int)uVar9 != 0) {
                  uVar7 = uStack_130 + 3;
                  PF_PART4(uStack_148, 0) = puStack_118[uVar15 - 1];
                  for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                    recovered_1000986c((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar15 = uStack_110;
                  }
                  goto LAB_10008a90;
                }
LAB_10008b7c:
                iVar12 = 1;
LAB_10008b80:
              } while (iVar12 == 5);
              uVar11 = 0;
LAB_10008cc8:
              uStack_110 = 0;
              recovered_100036a0(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_100036a0(pvStack_c0);
            uStack_90 = 0;
            recovered_100036a0((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar11 & 1) == 0) {
              iVar12 = 1;
            }
            else {
              uVar9 = recovered_10008fac((long *)&pbStack_1d8,(long)&uStack_240,(long)&uStack_2a0,
                                         plVar1);
              iVar12 = 3;
              if ((int)uVar9 == 0) {
                iVar12 = 1;
              }
            }
          }
LAB_10008ba8:
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_100036a0(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_100036a0(pvStack_200);
LAB_10008bb8:
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
            uVar9 = recovered_10008f30((long *)&pbStack_1d8,8,(uint *)&pvStack_100);
            if ((((int)uVar9 != 0) &&
                (uVar9 = recovered_10008f30((long *)&pbStack_1d8,8,(uint *)&uStack_1b0),
                (int)uVar9 != 0)) &&
               ((uVar9 = recovered_10008f30((long *)&pbStack_1d8,8,(uint *)&uStack_240),
                (int)uVar9 != 0 &&
                (uVar9 = recovered_10008f30((long *)&pbStack_1d8,8,(uint *)&uStack_2a0),
                (int)uVar9 != 0)))) {
              uVar7 = (uint)pvStack_100 | (uint)uStack_1b0 << 8;
              if ((((uint)uStack_240 | (int)uStack_2a0 << 8) ^ uVar7) == 0xffff) {
                for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                  uStack_98 = 0;
                  uVar9 = recovered_10008f30((long *)&pbStack_1d8,8,&uStack_98);
                  if ((int)uVar9 == 0) goto LAB_10008b9c;
                  puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                  recovered_100091a4(plVar1,(undefined1 *)&puStack_118);
                }
                iVar12 = 3;
                goto LAB_10008bb8;
              }
            }
LAB_10008b9c:
            iVar12 = 1;
            goto LAB_10008bb8;
          }
          if ((bRam0000000010010318 & 1) == 0) {
            uStack_1b0 = CONCAT44(PF_PART4(uStack_1b0, 4),8);
            recovered_100094d4((long *)&pvStack_100,0x120,(undefined4 *)&uStack_1b0);
            for (lVar14 = 0; lVar14 != 0x1c0; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x240) = 9;
            }
            for (lVar14 = 0; lVar14 != 0x60; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x400) = 7;
            }
            for (lVar14 = 0; lVar14 != 0x20; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x460) = 8;
            }
            uRam0000000010010375 = 0;
            uRam0000000010010370 = 0;
            uRam0000000010010358 = 0;
            uRam0000000010010350 = 0;
            uRam0000000010010368 = 0;
            uRam000000001001036d = 0;
            uRam0000000010010360 = 0;
            uRam0000000010010338 = 0;
            uRam0000000010010330 = 0;
            uRam0000000010010348 = 0;
            uRam0000000010010340 = 0;
            uRam0000000010010328 = 0;
            _DAT_10010320 = 0;
            recovered_10009370((long *)&pvStack_100,(uint *)&DAT_10010320,0);
            uStack_f8 = 0;
            recovered_100036a0(pvStack_100);
            recovered_10003700();
            bRam0000000010010318 = 1;
          }
          if ((bRam0000000010010319 & 1) == 0) {
            uStack_1b0 = CONCAT44(PF_PART4(uStack_1b0, 4),5);
            plVar10 = recovered_100094d4((long *)&pvStack_100,0x20,(undefined4 *)&uStack_1b0);
            uRam0000000010010388 = 0;
            _DAT_10010380 = 0;
            uRam0000000010010398 = 0;
            uRam0000000010010390 = 0;
            uRam00000000100103a8 = 0;
            uRam00000000100103a0 = 0;
            uRam00000000100103b8 = 0;
            uRam00000000100103b0 = 0;
            uRam00000000100103c8 = 0;
            uRam00000000100103c0 = 0;
            uRam00000000100103d5 = 0;
            uRam00000000100103cd = 0;
            uRam00000000100103d0 = 0;
            recovered_10009370(plVar10,(uint *)&DAT_10010380,0);
            uStack_f8 = 0;
            recovered_100036a0(pvStack_100);
            recovered_10003700();
            bRam0000000010010319 = 1;
          }
          uVar11 = recovered_10008fac((long *)&pbStack_1d8,((uintptr_t)pf_module_state + 0x5bb0U),((uintptr_t)pf_module_state + 0x5c10U),plVar1);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
      } while (iVar6 == 0);
      if (lStack_1c8 == lStack_1d0 && uStack_1b8 < 8) {
        uVar7 = recovered_100084ac((uint *)(*param_1 + param_1[1] + -4));
        uVar8 = recovered_10009140(*plVar1,param_1[4]);
        return (ulong)(uVar8 == uVar7);
      }
    }
  }
  return 0;
}

#undef DAT_10010320
#undef DAT_10010380
#undef UNK_10010318
#undef UNK_10010319
#undef UNK_10010328
#undef UNK_10010330
#undef UNK_10010338
#undef UNK_10010340
#undef UNK_10010348
#undef UNK_10010350
#undef UNK_10010358
#undef UNK_10010360
#undef UNK_10010368
#undef UNK_1001036d
#undef UNK_10010370
#undef UNK_10010375
#undef UNK_10010388
#undef UNK_10010390
#undef UNK_10010398
#undef UNK_100103a0
#undef UNK_100103a8
#undef UNK_100103b0
#undef UNK_100103b8
#undef UNK_100103c0
#undef UNK_100103c8
#undef UNK_100103cd
#undef UNK_100103d0
#undef UNK_100103d5
#undef _DAT_10010320
#undef _DAT_10010380
#undef bRam0000000010010318
#undef bRam0000000010010319
#undef uRam0000000010010328
#undef uRam0000000010010330
#undef uRam0000000010010338
#undef uRam0000000010010340
#undef uRam0000000010010348
#undef uRam0000000010010350
#undef uRam0000000010010358
#undef uRam0000000010010360
#undef uRam0000000010010368
#undef uRam000000001001036d
#undef uRam0000000010010370
#undef uRam0000000010010375
#undef uRam0000000010010388
#undef uRam0000000010010390
#undef uRam0000000010010398
#undef uRam00000000100103a0
#undef uRam00000000100103a8
#undef uRam00000000100103b0
#undef uRam00000000100103b8
#undef uRam00000000100103c0
#undef uRam00000000100103c8
#undef uRam00000000100103cd
#undef uRam00000000100103d0
#undef uRam00000000100103d5
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10009d5c(long param_1,long param_2,ulong param_3)

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
    recovered_10000cf4((void *)param_2,(void *)(*(long *)(param_1 + 0x18) + uVar3),param_3);
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009db8
 */

undefined8
recovered_10009db8(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
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
    recovered_10000cf4(param_2,param_3,param_5);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009f88(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a34c(param_1 + 3);
  param_1[1] = 0;
  recovered_100036a0((void *)*param_1);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009fac(long *in_x0,long in_x1,undefined1 *in_x2,long in_x3)

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
      recovered_10008010(in_x0,uVar5);
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
 * Address: 0x10009fb4
 */

void recovered_10009fb4(long *param_1,uint param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_1000a00c(param_1,*param_1 + param_1[1],(undefined1 *)&local_14,
                     ((undefined1 *)&local_14 + 4));
  return;
}

#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009fec(long *param_1,long param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 + 4U <= (ulong)param_1[1]) {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    *(uint *)(*param_1 + param_2) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000a00c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10008010(param_1,uVar5);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000a104(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10008010(param_1,uVar5);
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_1000a1fc(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000a228(param_1,param_2);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000a228(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000a290(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000a290(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000a304(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)((long)pvVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_100036a0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_1000a304(ulong count)

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
  pvVar1 = recovered_10000c20(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c0c();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_1000a314(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008670(param_1,0,param_2,param_3);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_1000a34c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100036a0((void *)*param_1);
  return param_1;
}


#define lStack0000000000000058 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a378
 */

void recovered_1000a378(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_10009fb4(&lStack0000000000000058,0);
  return;
}

#undef lStack0000000000000058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a384
 */

int recovered_1000a384(undefined8 param_1,undefined8 param_2,ulonglong *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar *unaff_x20;
  ulong unaff_x21;

  iVar1 = recovered_10008310(unaff_x20,unaff_x21,param_3,param_4);
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a390
 */

void recovered_1000a390(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3ac
 */

void recovered_1000a3ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3c8
 */

void recovered_1000a3c8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define uStack000000000000003f (*(undefined1 *)(frame + 95))
#define lStack0000000000000008 (*(long *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3e4
 */

void recovered_1000a3e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_100091a4(&lStack0000000000000008,&uStack000000000000003f);
  return;
}

#undef uStack000000000000003f
#undef lStack0000000000000008

#define in_stack_00000008 (*(void * *)(frame + 40))
#define uStack0000000000000010 (*(undefined8 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3f0
 */

void recovered_1000a3f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000010 = 0;
  recovered_100036a0(in_stack_00000008);
  return;
}

#undef in_stack_00000008
#undef uStack0000000000000010

#define in_stack_000000a0 (*(void * *)(frame + 192))
#define uStack00000000000000a8 (*(undefined8 *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3fc
 */

void recovered_1000a3fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack00000000000000a8 = 0;
  recovered_100036a0(in_stack_000000a0);
  return;
}

#undef in_stack_000000a0
#undef uStack00000000000000a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a408
 */

void recovered_1000a408(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define in_stack_00000000 (*(void * *)(frame + 32))
#define uStack0000000000000008 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a414
 */

void recovered_1000a414(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000008 = 0;
  recovered_100036a0(in_stack_00000000);
  return;
}

#undef in_stack_00000000
#undef uStack0000000000000008

#define in_stack_00000190 (*(void * *)(frame + 432))
#define uStack0000000000000198 (*(undefined8 *)(frame + 440))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a420
 */

void recovered_1000a420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000198 = 0;
  recovered_100036a0(in_stack_00000190);
  return;
}

#undef in_stack_00000190
#undef uStack0000000000000198

#define in_stack_00000208 (*(void * *)(frame + 552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a42c
 */

void recovered_1000a42c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_100036a0(in_stack_00000208);
  return;
}

#undef in_stack_00000208

#define lStack0000000000000058 (*(long *)(frame + 120))
#define in_stack_00000060 (*(uint *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a438
 */

void recovered_1000a438(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long unaff_x24;

  recovered_10009fec(&lStack0000000000000058,unaff_x24,in_stack_00000060);
  return;
}

#undef lStack0000000000000058
#undef in_stack_00000060

#define lStack0000000000000058 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a448
 */

void recovered_1000a448(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint unaff_w21;

  recovered_10009fb4(&lStack0000000000000058,unaff_w21);
  return;
}

#undef lStack0000000000000058

#define lStack0000000000000058 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a454
 */

void recovered_1000a454(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint unaff_w27;

  recovered_10009fb4(&lStack0000000000000058,unaff_w27);
  return;
}

#undef lStack0000000000000058

#define lStack0000000000000058 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a460
 */

void recovered_1000a460(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_10009fb4(&lStack0000000000000058,4);
  return;
}

#undef lStack0000000000000058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a46c
 */

int recovered_1000a46c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10000f80(param_1,param_2,4);
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a474
 */

void recovered_1000a474(void *param_1,void *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cf4(param_1,param_2,4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a47c
 */

void recovered_1000a47c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100039c0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a484
 */

undefined8 recovered_1000a484(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a48c
 */

void recovered_1000a48c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a498
 */

void recovered_1000a498(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define in_stack_000001b0 (*(void * *)(frame + 464))
#define uStack00000000000001b8 (*(undefined8 *)(frame + 472))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4ac
 */

void recovered_1000a4ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack00000000000001b8 = 0;
  recovered_100036a0(in_stack_000001b0);
  return;
}

#undef in_stack_000001b0
#undef uStack00000000000001b8

#define in_stack_00000020 (*(void * *)(frame + 64))
#define uStack0000000000000028 (*(undefined8 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4b8
 */

void recovered_1000a4b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000028 = 0;
  recovered_100036a0(in_stack_00000020);
  return;
}

#undef in_stack_00000020
#undef uStack0000000000000028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4c4
 */

void recovered_1000a4c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4d4
 */

void recovered_1000a4d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long unaff_x29;

  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  recovered_100036a0(*(void **)(unaff_x29 + -0x98));
  return;
}


#define lStack0000000000000058 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4e0
 */

void recovered_1000a4e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_10009fb4(&lStack0000000000000058,1);
  return;
}

#undef lStack0000000000000058

#define in_stack_00000078 (*(void * *)(frame + 152))
#define uStack0000000000000080 (*(undefined8 *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4ec
 */

void recovered_1000a4ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000080 = 0;
  recovered_100036a0(in_stack_00000078);
  return;
}

#undef in_stack_00000078
#undef uStack0000000000000080

#define in_stack_00000060 (*(void * *)(frame + 128))
#define uStack0000000000000068 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4f8
 */

void recovered_1000a4f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000068 = 0;
  recovered_100036a0(in_stack_00000060);
  return;
}

#undef in_stack_00000060
#undef uStack0000000000000068

#define in_stack_00000048 (*(void * *)(frame + 104))
#define uStack0000000000000050 (*(undefined8 *)(frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a504
 */

void recovered_1000a504(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000050 = 0;
  recovered_100036a0(in_stack_00000048);
  return;
}

#undef in_stack_00000048
#undef uStack0000000000000050

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a510
 */

void recovered_1000a510(long *param_1,undefined8 param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008f30(param_1,8,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a518
 */

void recovered_1000a518(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a520
 */

uint recovered_1000a520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *unaff_x25;

  uVar1 = recovered_100084ac(unaff_x25);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a528
 */

void recovered_1000a528(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a534
 */

void recovered_1000a534(long *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009370(param_1,param_2,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a53c
 */

void recovered_1000a53c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a558
 */

int recovered_1000a558(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long unaff_x24;

  iVar1 = recovered_10009c80(unaff_x24);
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a560
 */

void recovered_1000a560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a57c
 */

void recovered_1000a57c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define in_stack_00000200 (*(undefined8 *)(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a584
 */

undefined8 recovered_1000a584(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  return in_stack_00000200;
}

#undef in_stack_00000200

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a590
 */

void recovered_1000a590(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5a0
 */

void recovered_1000a5a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_x10;
  undefined1 *in_x11;

  *in_x10 = *in_x11;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5b0
 */

void recovered_1000a5b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define uStack00000000000000d8 (*(undefined1 *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5c0
 */

undefined1 * recovered_1000a5c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  return &uStack00000000000000d8;
}

#undef uStack00000000000000d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5d0
 */

void recovered_1000a5d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *in_x9;
  char *in_x10;
  long in_x11;

  *in_x9 = in_x9[in_x11] + *in_x10;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5e8
 */

void recovered_1000a5e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5f4
 */

void recovered_1000a5f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define in_stack_00000160 (*(void * *)(frame + 384))
#define uStack0000000000000168 (*(undefined8 *)(frame + 392))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a600
 */

void recovered_1000a600(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000168 = 0;
  recovered_100036a0(in_stack_00000160);
  return;
}

#undef in_stack_00000160
#undef uStack0000000000000168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a60c
 */

uchar recovered_1000a60c(long param_1,ulong param_2,ulong *param_3,undefined8 param_4,ulong *param_5
                        )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint unaff_w23;

  uVar1 = recovered_10008340(param_1,param_2,param_3,unaff_w23,param_5);
  return uVar1;
}


#define auStack_7ffffffe (*(undefined1 (*)[2147483646])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a614
 */

void recovered_1000a614(long *param_1,ulong param_2)

{
  unsigned char frame[2147483696] __attribute__((aligned(16))) = {0};


  recovered_10007ea8(param_1,param_2,auStack_7ffffffe + 0x800001fe);
  return;
}

#undef auStack_7ffffffe

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a61c
 */

void recovered_1000a61c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long unaff_x29;

  *(undefined8 *)(unaff_x29 + -0xe8) = 0;
  recovered_100036a0(*(void **)(unaff_x29 + -0xf0));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a628
 */

void recovered_1000a628(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *unaff_x28;

  recovered_1000655c(unaff_x28,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a630
 */

void recovered_1000a630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long unaff_x29;

  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  recovered_100036a0(*(void **)(unaff_x29 + -0xb0));
  return;
}


#define in_stack_00000198 (*(void * *)(frame + 440))
#define uStack00000000000001a0 (*(undefined8 *)(frame + 448))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a63c
 */

void recovered_1000a63c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack00000000000001a0 = 0;
  recovered_100036a0(in_stack_00000198);
  return;
}

#undef in_stack_00000198
#undef uStack00000000000001a0

#define in_stack_00000180 (*(void * *)(frame + 416))
#define uStack0000000000000188 (*(undefined8 *)(frame + 424))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a648
 */

void recovered_1000a648(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000188 = 0;
  recovered_100036a0(in_stack_00000180);
  return;
}

#undef in_stack_00000180
#undef uStack0000000000000188

#define in_stack_00000168 (*(void * *)(frame + 392))
#define uStack0000000000000170 (*(undefined8 *)(frame + 400))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a654
 */

void recovered_1000a654(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000170 = 0;
  recovered_100036a0(in_stack_00000168);
  return;
}

#undef in_stack_00000168
#undef uStack0000000000000170

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a660
 */

void recovered_1000a660(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long unaff_x26;
  undefined1 *unaff_x27;

  recovered_100085cc(param_1,unaff_x27,unaff_x27 + unaff_x26);
  return;
}


#define lStack0000000000000198 (*(long *)(frame + 440))
#define uStack0000000000000168 (*(undefined4 *)(frame + 392))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a66c
 */

void recovered_1000a66c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_100098d0(&lStack0000000000000198,&uStack0000000000000168);
  return;
}

#undef lStack0000000000000198
#undef uStack0000000000000168

#define in_stack_00000058 (*(void * *)(frame + 120))
#define uStack0000000000000060 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a678
 */

void recovered_1000a678(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000060 = 0;
  recovered_100036a0(in_stack_00000058);
  return;
}

#undef in_stack_00000058
#undef uStack0000000000000060

#define in_stack_00000040 (*(void * *)(frame + 96))
#define uStack0000000000000048 (*(undefined8 *)(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a684
 */

void recovered_1000a684(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000048 = 0;
  recovered_100036a0(in_stack_00000040);
  return;
}

#undef in_stack_00000040
#undef uStack0000000000000048

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a690
 */

void recovered_1000a690(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a69c
 */

uint recovered_1000a69c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *unaff_x22;

  uVar1 = recovered_100084ac(unaff_x22);
  return uVar1;
}


#define lStack0000000000000090 (*(long *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6a4
 */

void recovered_1000a6a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *unaff_x22;

  recovered_10009cb4(&lStack0000000000000090,unaff_x22);
  return;
}

#undef lStack0000000000000090

#define uStack0000000000000090 (*(undefined1 *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b0
 */

uchar recovered_1000a6b0(undefined8 param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_10009d5c((long)&uStack0000000000000090,param_2,param_3);
  return uVar1;
}

#undef uStack0000000000000090

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b8
 */

undefined8 recovered_1000a6b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6c0
 */

uchar recovered_1000a6c0(uint *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_1000762c(param_1,param_2,4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6c8
 */

int recovered_1000a6c8(undefined8 param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *unaff_x20;

  iVar1 = recovered_10000f80(unaff_x20,param_2,9);
  return iVar1;
}


#define in_stack_00000178 (*(void * *)(frame + 408))
#define uStack0000000000000180 (*(undefined8 *)(frame + 416))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6d4
 */

void recovered_1000a6d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000180 = 0;
  recovered_100036a0(in_stack_00000178);
  return;
}

#undef in_stack_00000178
#undef uStack0000000000000180

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6e0
 */

uint recovered_1000a6e0(undefined8 param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10009ac4(0,param_2,4);
  return uVar1;
}


#define lStack0000000000000058 (*(long *)(frame + 120))
#define uStack0000000000000040 (*(undefined1 *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6ec
 */

void recovered_1000a6ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_100091a4(&lStack0000000000000058,&uStack0000000000000040);
  return;
}

#undef lStack0000000000000058
#undef uStack0000000000000040

#define lStack0000000000000058 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6f8
 */

void recovered_1000a6f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  recovered_10009fb4(&lStack0000000000000058,8);
  return;
}

#undef lStack0000000000000058

#define in_stack_00000050 (*(void * *)(frame + 112))
#define uStack0000000000000058 (*(undefined8 *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a704
 */

void recovered_1000a704(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  uStack0000000000000058 = 0;
  recovered_100036a0(in_stack_00000050);
  return;
}

#undef in_stack_00000050
#undef uStack0000000000000058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a710
 */

void recovered_1000a710(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a71c
 */

void recovered_1000a71c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *unaff_x24;

  *unaff_x24 = 1;
  return;
}


#define in_stack_00000078 (*(undefined1 * *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a730
 */

undefined1 recovered_1000a730(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  return *in_stack_00000078;
}

#undef in_stack_00000078

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a744
 */

void recovered_1000a744(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a758
 */

void recovered_1000a758(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a764
 */

void recovered_1000a764(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}

