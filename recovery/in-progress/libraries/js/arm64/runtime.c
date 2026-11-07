/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a4cU)))
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
 * Address: 0x10000608
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000608(void)

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
    recovered_10002484(puVar8[-1],*puVar8,&uStack_48);
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
    recovered_10002484(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
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
#define DAT_1000c0e0 (*(byte *)(((uintptr_t)pf_module_state + 0x5a3cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a4cU)))
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
 * Address: 0x10000614
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000614(void)

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
      recovered_10002484(puVar8[-1],*puVar8,&local_48);
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
      recovered_10002484(0x300000,(ulong)uVar2 - 0x300000,&local_48);
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000898
 */

ulong recovered_10000898(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000614();
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008e4
 */

long recovered_100008e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000614();
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000924
 */

ulong recovered_10000924(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000614();
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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000960
 */

long recovered_10000960(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000614();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5a44U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5a4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000990
 */

ulong * recovered_10000990(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 != 0) {
    recovered_10000614();
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
 * Address: 0x10000a68
 */

ulong recovered_10000a68(ulong param_1,uint param_2)

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
 * Address: 0x10000aac
 */

ulong recovered_10000aac(ulong param_1,uint param_2)

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
 * Address: 0x10000af8
 */

long recovered_10000af8(long param_1,uint param_2)

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
 * Address: 0x10000b48
 */

/* WARNING: Removing unreachable block (ram,0x10000b98) */

ulong recovered_10000b48(ulong param_1,ulong param_2)

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
 * Address: 0x10000b50
 */

ulong recovered_10000b50(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000bb0
 */

undefined8 recovered_10000bb0(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10000b50(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd0
 */

long recovered_10000bd0(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000b50(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

long recovered_10000c10(long param_1,long param_2)

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
  recovered_10000b50(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c5c
 */

void recovered_10000c5c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c64
 */

int recovered_10000c64(int param_1)

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
void * recovered_10000c70(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000cb4(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000cf8(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d44
 */

void recovered_10000d44(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;

  if ((param_3 < 0x10) || ((((uint)param_2 ^ (uint)param_1) & 7) != 0)) {
  }
  else {
    for (; (param_3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    lVar4 = 0;
    for (lVar3 = 0; 0x1f < param_3 + lVar3; lVar3 = lVar3 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar4);
      puVar2 = (undefined8 *)(param_2 + lVar4);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar4 = lVar4 + 0x20;
    }
    lVar5 = 0;
    param_3 = param_3 + lVar3;
    while (7 < param_3) {
      *(undefined8 *)(param_1 + lVar4 + lVar5) = *(undefined8 *)(param_2 + lVar4 + lVar5);
      lVar5 = lVar5 + 8;
      param_3 = param_3 - 8;
    }
    param_1 = param_1 + (lVar5 - lVar3);
    param_2 = param_2 + (lVar5 - lVar3);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e1c
 */

void recovered_10000e1c(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((param_1 != param_2) && (param_3 != 0)) {
    puVar2 = param_2 + param_3;
    if ((param_1 >= param_2 && param_1 <= puVar2) && (param_1 < param_2 || puVar2 != param_1)) {
      puVar3 = param_1 + param_3;
      uVar1 = param_3;
      if ((0xf < param_3) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (param_3 != 0 && (((int)param_1 + (int)param_3 & 7U) != 0)); param_3 = param_3 - 1) {
          param_1[param_3 - 1] = param_2[param_3 - 1];
        }
        for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
          *(undefined8 *)(param_1 + (param_3 - 8)) = *(undefined8 *)(param_2 + (param_3 - 8));
          *(undefined8 *)(param_1 + (param_3 - 0x10)) = *(undefined8 *)(param_2 + (param_3 - 0x10));
          *(undefined8 *)(param_1 + (param_3 - 0x18)) = *(undefined8 *)(param_2 + (param_3 - 0x18));
          *(undefined8 *)(param_1 + (param_3 - 0x20)) = *(undefined8 *)(param_2 + (param_3 - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = param_3; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)(param_1 + param_3 + lVar4 + -8) =
               *(undefined8 *)(param_2 + param_3 + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = param_1 + lVar4 + param_3;
        puVar2 = param_2 + lVar4 + param_3;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      recovered_10000d44(param_1,param_2,param_3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

void recovered_10000f30(ulong *param_1,byte param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;

  if (0xf < param_3) {
    uVar2 = (ulong)param_2;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_3 != 0 && (((ulong)puVar3 & 7) != 0));
        puVar3 = (ulong *)((long)puVar3 + 1)) {
      *(byte *)param_1 = param_2;
      param_3 = param_3 - 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(byte *)param_1 = param_2;
    param_1 = (ulong *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fc8
 */

void recovered_10000fc8(ulong *param_1,ulong param_2)

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
 * Address: 0x10000fcc
 */

void recovered_10000fcc(ulong *param_1,ulong param_2)

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
 * Address: 0x10000fd0
 */

int recovered_10000fd0(byte *param_1,byte *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
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
        goto recovered_1000113c;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_1000113c;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_1000113c;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_1000113c;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_1000113c:
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
 * Address: 0x1000113c
 */

int recovered_1000113c(long param_1,long param_2)

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
 * Address: 0x1000116c
 */

bool recovered_1000116c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000117c
 */

bool recovered_1000117c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000118c
 */

bool recovered_1000118c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

bool recovered_100011a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011bc
 */

bool recovered_100011bc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cc
 */

bool recovered_100011cc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011dc
 */

int recovered_100011dc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

int recovered_100011f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001204
 */

long recovered_10001204(long param_1)

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
 * Address: 0x10001228
 */

int recovered_10001228(byte *param_1,byte *param_2)

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
 * Address: 0x10001250
 */

int recovered_10001250(byte *param_1,byte *param_2)

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
 * Address: 0x10001254
 */

void recovered_10001254(long param_1,long param_2)

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
 * Address: 0x1000126c
 */

void recovered_1000126c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;

  if (param_1 != 0) {
    lVar1 = recovered_10001204(param_1);
    puVar2 = recovered_10000c70(lVar1 + 1);
    if (puVar2 != (undefined1 *)0x0) {
      recovered_10000d44(puVar2,(undefined1 *)param_1,lVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012a8
 */

char * recovered_100012a8(char *param_1,char param_2)

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
 * Address: 0x100012d0
 */

long recovered_100012d0(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100012a8(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001318
 */

char * recovered_10001318(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100012a8(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001358
 */

char * recovered_10001358(char *param_1,char *param_2)

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


#undef DAT_100067bb
#define DAT_100067bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x117U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001394
 */

undefined * recovered_10001394(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100067bb;
}

#undef DAT_100067bb

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x595cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a0
 */

undefined ** recovered_100013a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define local_30 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100013ac(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000f30(&uStack_38,0,0x18);
  bVar1 = recovered_1000257c(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(&uStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef local_30
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001424
 */

double recovered_10001424(double param_1,uint param_2)

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
 * Address: 0x10001458
 */

uint128 recovered_10001458(double param_1,int *param_2)

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
 * Address: 0x100014cc
 */

uint128 recovered_100014cc(double param_1,double param_2)

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
 * Address: 0x100014f0
 */

uint128 recovered_100014f0(double param_1,double param_2)

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
 * Address: 0x10001550
 */

uint128 recovered_10001550(double param_1)

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
 * Address: 0x1000156c
 */

uint128 recovered_1000156c(double param_1)

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
 * Address: 0x10001598
 */

uint128 recovered_10001598(double param_1)

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


#undef DAT_100066a8
#define DAT_100066a8 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d4
 */

uint128 recovered_100015d4(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_100066a8 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_100066a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

long recovered_10001680(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_100066b0
#define DAT_100066b0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001694
 */

uint128 recovered_10001694(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_100016e8(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100066b0);
  return auVar1;
}

#undef DAT_100066b0

#undef DAT_100066b8
#define DAT_100066b8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100066c0
#define DAT_100066c0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100066c8
#define DAT_100066c8 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100066d0
#define DAT_100066d0 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e8
 */

void recovered_100016e8(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_100066b8 < param_1; param_1 = param_1 + DAT_100066d0) {
  }
  for (; param_1 < DAT_100066c0; param_1 = param_1 + DAT_100066c8) {
  }
  return;
}

#undef DAT_100066b8
#undef DAT_100066c0
#undef DAT_100066c8
#undef DAT_100066d0

#undef DAT_100066d8
#define DAT_100066d8 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000172c
 */

uint128 recovered_1000172c(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_100016e8(in_d0);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100066d8;
  return auVar1;
}

#undef DAT_100066d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001778
 */

uint128 recovered_10001778(double param_1)

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
long long recovered_10001788(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_100017e8(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10001838(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10001860(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001884
 */

float recovered_10001884(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018b8
 */

float recovered_100018b8(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001458((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d0
 */

float recovered_100018d0(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001424((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e8
 */

float recovered_100018e8(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100014f0((double)param_1,(double)param_2);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001904
 */

float recovered_10001904(float param_1)

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
 * Address: 0x10001928
 */

float recovered_10001928(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000156c((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001940
 */

uint128 recovered_10001940(double param_1)

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
 * Address: 0x10001968
 */

float recovered_10001968(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001940((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001980
 */

float recovered_10001980(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001598((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001998
 */

float recovered_10001998(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100015d4((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b0
 */

long recovered_100019b0(double param_1)

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
 * Address: 0x100019c4
 */

float recovered_100019c4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001694((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019dc
 */

float recovered_100019dc(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000172c((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f4
 */

float recovered_100019f4(float param_1)

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
 * Address: 0x10001a04
 */

long recovered_10001a04(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001a9c;
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
      goto LAB_10001ac8;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001ac8;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001ac8;
    }
LAB_10001a9c:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001ac8:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001b08((uint)*pbVar4);
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
 * Address: 0x10001b08
 */

uint recovered_10001b08(int param_1)

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
 * Address: 0x10001b38
 */

long recovered_10001b38(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001c1c;
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
      goto LAB_10001c1c;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001c1c;
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
LAB_10001c1c:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001b08((uint)*pbVar6);
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
 * Address: 0x10001c5c
 */

uint128 recovered_10001c5c(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_10001424(dVar12,iVar9 * iVar6);
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
 * Address: 0x10001dec
 */

float recovered_10001dec(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001c5c(in_x0,in_x1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e04
 */

int recovered_10001e04(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_10001e74:
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
      goto LAB_10001ea0;
    }
    goto LAB_10001ea4;
  }
  pbVar8 = param_3 + 1;
  bVar1 = *pbVar8;
  if (bVar1 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar1)) {
      case 0x2a:
        goto code_r0x10001f40;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10001f28;
      default:
        if ((bVar1 != 0x20) && (bVar1 != 0x23)) goto LAB_10001f28;
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
  goto LAB_100021d0;
LAB_10001f28:
  do {
    pbVar8 = param_3 + 1;
    bVar1 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar1 - 0x30U < 10);
LAB_10001f50:
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
LAB_10002004:
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
      goto LAB_10002004;
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
      goto LAB_10001ea0;
    }
    break;
  case 100:
  case 0x69:
code_r0x10002120:
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
LAB_100021c0:
    pdStack_78 = pdStack_78 + 1;
    uVar9 = 10;
code_r0x100021c8:
    uVar7 = 0;
LAB_100021cc:
    recovered_100023b8((long *)&local_80,&local_88,&local_8c,(ulong)dVar6,uVar9,uVar7);
    goto LAB_100021d0;
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
      recovered_100023b8((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar6,10,0);
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
      goto LAB_100021d0;
    }
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0x119U);
code_r0x100021e4:
    pdStack_78 = pdStack_78 + 1;
    recovered_10002368((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_100021d0;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      dVar6 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002368((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x14eU));
      uVar9 = 0x10;
      goto code_r0x100021c8;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pcVar5 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
      goto code_r0x100021e4;
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
      goto LAB_100021c0;
    case 0x78:
code_r0x100020dc:
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
      goto LAB_100021cc;
    default:
      if (bVar1 == 0x49) goto code_r0x10002120;
      if (bVar1 == 0x58) goto code_r0x100020dc;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_10001ea0:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10001ea4:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_100021d0:
  param_3 = pbVar8 + 1;
  goto LAB_10001e74;
code_r0x10001f40:
  pdStack_78 = pdStack_78 + 1;
  bVar1 = *pbVar8;
  goto LAB_10001f50;
}

#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000232c
 */

void recovered_1000232c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_100067c9
#define str_100067c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x125U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002368
 */

void recovered_10002368(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_100067c9;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_1000232c(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100067c9

#undef str_100067d0
#define str_100067d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12cU)))
#undef str_100067e1
#define str_100067e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13dU)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b8
 */

void recovered_100023b8(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_100067d0;
  if (param_6 == 0) {
    pcVar1 = str_100067e1;
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
    recovered_1000232c(param_1,param_2,param_3,local_80[lVar6]);
  }
  return;
}

#undef str_100067d0
#undef str_100067e1
#undef local_80

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_1000245c(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001e04(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5a4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002484
 */

void recovered_10002484(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_1000250c(param_1,0x84000000 - param_1,param_3);
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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a44U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5a4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000250c
 */

void recovered_1000250c(long param_1,ulong param_2,ulong *param_3)

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
 * Address: 0x1000257c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000257c(int param_1)

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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c4
 */

void recovered_100026c4(char *param_1,long param_2)

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
          recovered_1000277c(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_1000277c(0);
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000277c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000277c(int param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c100 != 0) || (param_1 != 0)) {
    if (DAT_1000c100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d44(local_230,&DAT_1000c108,DAT_1000c100);
      uVar2 = DAT_1000c100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003510(0x40);
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002808
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002808(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000d44(auStack_230,&DAT_1000c108,DAT_1000c100);
    uVar2 = DAT_1000c100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003510(0x40);
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
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

  if (DAT_1000c100 != 0) {
    if (DAT_1000c100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d44(auStack_230,&DAT_1000c108,DAT_1000c100);
      uVar2 = DAT_1000c100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003510(0x40);
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

#undef DAT_100067f5
#define DAT_100067f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002818
 */

void recovered_10002818(char *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_100067f5;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_1000245c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_100026c4(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_100067f5
#undef acStack_160

#undef DAT_10006813
#define DAT_10006813 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef str_100067f8
#define str_100067f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x154U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000287c
 */

/* WARNING: Removing unreachable block (ram,0x100028c8) */

void recovered_1000287c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_100028a0(str_100067f8);
  pcVar4 = &DAT_10006813;
  for (lVar3 = recovered_10001204(((uintptr_t)pf_module_state + 0x16fU)); lVar3 != 0; lVar3 = lVar3 + -1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000277c(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_1000277c(0);
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

#undef DAT_10006813
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_100067f8

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

void recovered_100028a0(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  lVar3 = recovered_10001204((long)param_1);
  if (param_1 != (char *)0x0) {
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c100 != 0) {
          DAT_1000c100 = DAT_1000c100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000277c(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_1000277c(0);
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

#undef DAT_10006813
#define DAT_10006813 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a5cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef str_10006816
#define str_10006816 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028cc
 */

/* WARNING: Removing unreachable block (ram,0x100028c8) */

void recovered_100028cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_100028a0(str_10006816);
  pcVar4 = &DAT_10006813;
  for (lVar3 = recovered_10001204(((uintptr_t)pf_module_state + 0x16fU)); lVar3 != 0; lVar3 = lVar3 + -1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000277c(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_1000277c(0);
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

#undef DAT_10006813
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10006816

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100028f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10002810();
    bVar2 = recovered_10003510(0x44);
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
 * Address: 0x10002968
 */

undefined8 recovered_10002968(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000296c
 */

void recovered_1000296c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

undefined8 recovered_10002970(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_100067f5
#define DAT_100067f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
#undef str_100068aa
#define str_100068aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
#undef str_100068b7
#define str_100068b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#undef str_100068c5
#define str_100068c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#define uStack_4c (*(undefined8 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002978
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * recovered_10002978(long param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001228((byte *)param_1,(byte *)str_100068aa);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001228((byte *)param_1,(byte *)str_100068b7);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001228((byte *)param_1,(byte *)str_100068c5);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c70(0x340);
        if (puVar4 == (ulong *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000f30(puVar4,0,0x340);
        *(undefined4 *)puVar4 = 0;
        pcVar5 = recovered_100012a8((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012a8((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012a8((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x124) = bVar1;
        pcVar5 = recovered_100012a8((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012a8((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012a8((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100012a8((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
        pf_varargs_1000245c_1((char *)((long)puVar4 + 4),0xf1,&DAT_100067f5,param_1);
        recovered_10000f30(&uStack_4c,0,0xc);
        uVar6 = recovered_10002bb4(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002b5c:
            recovered_10000cb4(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100012a8((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)PF_PART4(uStack_4c, 4), PF_PART4(uStack_4c, 4) != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002c04((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002b5c;
              recovered_10000d44((undefined1 *)puVar4[0x20],(undefined1 *)(ulong)(uint)uStack_4c,
                                 (ulong)PF_PART4(uStack_4c, 4));
              uVar7 = (ulong)PF_PART4(uStack_4c, 4);
            }
            else {
              puVar4[0x1f] = (ulong)(uint)uStack_4c;
            }
            puVar4[0x21] = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          puVar4[0x23] = puVar4[0x21];
          return (undefined4 *)puVar4;
        }
        return (undefined4 *)puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_10000c70(0x340);
  if (puVar4 == (ulong *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000f30(puVar4,0,0x340);
  *(undefined4 *)puVar4 = uVar8;
  *(bool *)((long)puVar4 + 0x124) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  pf_varargs_1000245c_1((char *)((long)puVar4 + 4),0xf1,&DAT_100067f5,param_1);
  return (undefined4 *)puVar4;
}

#undef DAT_100067f5
#undef DAT_1000c058
#undef str_100068aa
#undef str_100068b7
#undef str_100068c5
#undef uStack_4c

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002bb4(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003510(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c04
 */

undefined8 recovered_10002c04(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000cf8(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_100067f5
#define DAT_100067f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
#undef str_100068aa
#define str_100068aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
#undef str_100068b7
#define str_100068b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#undef str_100068c5
#define str_100068c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#define uStack_4c (*(undefined8 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c8c
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * recovered_10002c8c(long param_1,long param_2,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_10002cc0(param_3);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001228((byte *)param_1,(byte *)str_100068aa);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001228((byte *)param_1,(byte *)str_100068b7);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001228((byte *)param_1,(byte *)str_100068c5);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c70(0x340);
        if (puVar4 == (ulong *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000f30(puVar4,0,0x340);
        *(undefined4 *)puVar4 = 0;
        pcVar5 = recovered_100012a8((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012a8((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012a8((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x124) = bVar1;
        pcVar5 = recovered_100012a8((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012a8((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012a8((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100012a8((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
        pf_varargs_1000245c_1((char *)((long)puVar4 + 4),0xf1,&DAT_100067f5,param_1);
        recovered_10000f30(&uStack_4c,0,0xc);
        uVar6 = recovered_10002bb4(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002b5c:
            recovered_10000cb4(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100012a8((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)PF_PART4(uStack_4c, 4), PF_PART4(uStack_4c, 4) != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002c04((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002b5c;
              recovered_10000d44((undefined1 *)puVar4[0x20],(undefined1 *)(ulong)(uint)uStack_4c,
                                 (ulong)PF_PART4(uStack_4c, 4));
              uVar7 = (ulong)PF_PART4(uStack_4c, 4);
            }
            else {
              puVar4[0x1f] = (ulong)(uint)uStack_4c;
            }
            puVar4[0x21] = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          puVar4[0x23] = puVar4[0x21];
          return (undefined4 *)puVar4;
        }
        return (undefined4 *)puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_10000c70(0x340);
  if (puVar4 == (ulong *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000f30(puVar4,0,0x340);
  *(undefined4 *)puVar4 = uVar8;
  *(bool *)((long)puVar4 + 0x124) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  pf_varargs_1000245c_1((char *)((long)puVar4 + 4),0xf1,&DAT_100067f5,param_1);
  return (undefined4 *)puVar4;
}

#undef DAT_100067f5
#undef DAT_1000c058
#undef str_100068aa
#undef str_100068b7
#undef str_100068c5
#undef uStack_4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cc0
 */

undefined8 recovered_10002cc0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100030e4(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000cb4(*(void **)(param_1 + 0x40));
    }
    recovered_10000cb4(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d04
 */

ulong recovered_10002d04(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

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
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_2;
          PF_PART8(auVar3, 8) = 0;
          PF_PART8(auVar3, 0) = param_3;
          uVar7 = param_3 * param_2;
          if (SUB168(auVar2 * auVar3,8) != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          uVar1 = uVar8;
          if (uVar7 <= uVar8) {
            uVar1 = uVar7;
          }
          recovered_10000d44(param_1,(undefined1 *)(*(long *)(param_4 + 0x3e) + uVar6),uVar1);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar1;
          if (uVar8 < uVar7) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar1 / param_2;
          }
        }
      }
      else {
        uVar8 = 0;
        while( true ) {
          uVar6 = param_2;
          puVar4 = param_1;
          if (uVar8 == param_3) break;
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar5 = recovered_10002e38(param_4);
            if (uVar5 == 0xffffffff) {
              return uVar8;
            }
            *puVar4 = (char)uVar5;
            puVar4 = puVar4 + 1;
          }
          param_1 = param_1 + param_2;
          uVar8 = uVar8 + 1;
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


#undef DAT_100067c8
#define DAT_100067c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e38
 */

uint recovered_10002e38(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] == '\x01') {
    uVar2 = param_1[0x48];
    if (uVar2 != 0xffffffff) {
      param_1[0x48] = -1;
      return uVar2;
    }
    if (*param_1 == 1) {
      uVar5 = *(ulong *)(param_1 + 0xce);
      if (uVar5 < *(ulong *)(param_1 + 0xcc)) {
LAB_10002ed0:
        *(ulong *)(param_1 + 0xce) = uVar5 + 1;
        return (uint)*(byte *)((long)param_1 + uVar5 + 0x12a);
      }
      lVar1 = (long)param_1 + 0x12a;
      bVar3 = recovered_100028f0(lVar1,0x1fe,&DAT_100067c8,0);
      if (bVar3) {
        lVar4 = recovered_10001204(lVar1);
        uVar5 = 0;
        *(long *)(param_1 + 0xcc) = lVar4 + 1;
        *(undefined1 *)(lVar1 + lVar4) = 10;
        *(undefined1 *)(lVar1 + *(long *)(param_1 + 0xcc)) = 0;
        goto LAB_10002ed0;
      }
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x46);
      if (uVar5 < *(ulong *)(param_1 + 0x42)) {
        *(ulong *)(param_1 + 0x46) = uVar5 + 1;
        return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return 0xffffffff;
}

#undef DAT_100067c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f1c
 */

long recovered_10002f1c(long param_1,long param_2,long param_3,uint *param_4)

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
      recovered_100026c4((char *)param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_1000301c;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002c04((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000f30((ulong *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000d44((undefined1 *)(*(long *)(param_4 + 0x40) + uVar3),(undefined1 *)param_1,
                         uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_1000301c;
    }
  }
  param_3 = 0;
LAB_1000301c:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000302c
 */

undefined8 recovered_1000302c(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10003038;
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
LAB_10003038:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

undefined8 recovered_100030c0(long param_1)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e4
 */

undefined8 recovered_100030e4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_100032c0(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x10003158
 */

undefined1 recovered_10003158(long param_1)

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
 * Address: 0x10003164
 */

undefined1 recovered_10003164(long param_1)

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
 * Address: 0x10003170
 */

void recovered_10003170(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003184
 */

uint recovered_10003184(uint param_1,long param_2)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a8
 */

undefined8 recovered_100031a8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_100031e0(param_1);
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
 * Address: 0x100031e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100031e0(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003510(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
#define uStack_2c (*(undefined8 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003224
 */

undefined8 recovered_10003224(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000f30(&uStack_2c,0,0xc);
    uVar1 = recovered_10002bb4(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_100032c0(param_2,(ulong)(uint)uStack_2c,(ulong)PF_PART4(uStack_2c, 4));
      if (((int)uVar1 != 0) && (uVar1 = recovered_100031e0(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c058
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100032c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003510(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010838
#undef _DAT_82010838

#define uStack_3c (*(undefined8 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

undefined8 recovered_10003320(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000f30(&uStack_3c,0,0xc);
    uVar2 = recovered_10002bb4(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = PF_PART4(uStack_3c, 4);
      if (PF_PART4(uStack_3c, 4) < 2) {
        uVar1 = 1;
      }
      puVar3 = recovered_10000c70((ulong)uVar1);
      uVar2 = 0;
      if (puVar3 != (undefined1 *)0x0) {
        if (PF_PART4(uStack_3c, 4) == 0) {
          uVar4 = 0;
        }
        else {
          recovered_10000d44(puVar3,(undefined1 *)(ulong)(uint)uStack_3c,(ulong)PF_PART4(uStack_3c, 4));
          uVar4 = (ulong)PF_PART4(uStack_3c, 4);
        }
        *param_2 = puVar3;
        *param_3 = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033c0
 */

bool recovered_100033c0(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_100032c0(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ec
 */

undefined8 recovered_100033ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033f0
 */

void recovered_100033f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
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

undefined8 recovered_100033f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
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

char * recovered_10003400(long param_1,char param_2,long param_3)

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
 * Address: 0x10003424
 */

int recovered_10003424(byte *param_1,byte *param_2,long param_3)

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


#undef DAT_10006839
#define DAT_10006839 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195U)))
#undef str_1000683c
#define str_1000683c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x198U)))
#undef str_10006849
#define str_10006849 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a5U)))
#undef str_10006853
#define str_10006853 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_10006867
#define str_10006867 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10006875
#define str_10006875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d1U)))
#undef str_10006887
#define str_10006887 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#undef str_10006893
#define str_10006893 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1efU)))
#undef str_100068a4
#define str_100068a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x200U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003454
 */

char * recovered_10003454(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10006839;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003480_caseD_1;
  case 2:
    return str_1000683c;
  case 5:
    return str_10006849;
  case 9:
    return str_10006853;
  case 0xc:
    return str_10006867;
  case 0xd:
    return str_10006875;
  default:
    if (param_1 == 0x11) {
      return str_10006887;
    }
    if (param_1 == 0x16) {
      return str_10006893;
    }
switchD_10003480_caseD_1:
    return str_100068a4;
  }
}

#undef DAT_10006839
#undef str_1000683c
#undef str_10006849
#undef str_10006853
#undef str_10006867
#undef str_10006875
#undef str_10006887
#undef str_10006893
#undef str_100068a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034f4
 */

undefined8 recovered_100034f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034f8
 */

undefined8 recovered_100034f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5a54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034fc
 */

void recovered_100034fc(void)

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
 * Address: 0x10003510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003510(int param_1)

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
__attribute__((naked,noreturn)) void recovered_100035dc(void *context){__asm__ volatile("ldr x16,[x0,#80]\nmov sp,x16\nldr x29,[x0,#64]\nldr x16,[x0,#72]\nbr x16");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100035f0(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1000362c(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003670
 */

void recovered_10003670(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000c5c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003680);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003684
 */

undefined8 recovered_10003684(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000368c
 */

void recovered_1000368c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000369c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003670();
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000369c
 */

long recovered_1000369c(long param_1)

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
 * Address: 0x100036bc
 */

void * recovered_100036bc(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c70(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c5c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036ec
 */

void * recovered_100036ec(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c70(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c5c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f0
 */

void recovered_100036f0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cb4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003708
 */

void recovered_10003708(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cb4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003720
 */

void recovered_10003720(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cb4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003738
 */

void recovered_10003738(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cb4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003750
 */

undefined8 recovered_10003750(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003758
 */

uint recovered_10003758(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003768
 */

void recovered_10003768(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003778
 */

void recovered_10003778(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000377c
 */

undefined1 * recovered_1000377c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000c70(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003670();
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
 * Address: 0x100037c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100037c4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_1000257c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037d4
 */

long recovered_100037d4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c64U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100037dc(void)

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
      bVar3 = recovered_1000257c(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000ce8. Too many branches */
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
 * Address: 0x10003834
 */

void recovered_10003834(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003854((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c6cU)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003854
 */

void recovered_10003854(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c310;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_100038b4;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10003e3c((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003960(param_1);
LAB_100038b4:
                    /* WARNING: Subroutine does not return */
  recovered_10003670();
}

#undef DAT_1000c310
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b8
 */

void recovered_100038b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c308;
  if (DAT_1000c308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003670();
  }
  *(undefined1 *)(DAT_1000c308 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003854(puVar1);
}

#undef DAT_1000c308

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e8
 */

void recovered_100038e8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c310;
  DAT_1000c310 = param_1;
  return;
}

#undef DAT_1000c310

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5c6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038fc
 */

void recovered_100038fc(undefined8 *param_1)

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
 * Address: 0x10003928
 */

void recovered_10003928(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003854(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003934
 */

void recovered_10003934(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003670();
}


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c6cU)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003940
 */

undefined8 recovered_10003940(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c310 != (long *)0x0) {
    DAT_1000c310 = (long *)*DAT_1000c310;
  }
  puVar2 = (undefined8 *)recovered_10003960(param_1);
  plVar3 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003670();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10003e3c((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_100039f4;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_100039f4:
  recovered_100035dc((long)plVar3);
  recovered_10003940(extraout_x0);
  return 0;
}

#undef DAT_1000c310
#undef uStack_50
#undef uStack_48

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5c6cU)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003960
 */

undefined8 recovered_10003960(undefined8 *param_1)

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
      recovered_10003670();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10003e3c((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_100039f4;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_100039f4:
  recovered_100035dc((long)plVar2);
  recovered_10003940(extraout_x0);
  return 0;
}

#undef DAT_1000c310
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039fc
 */

undefined8 recovered_100039fc(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003940(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a08
 */

undefined8 recovered_10003a08(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a10
 */

void recovered_10003a10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003670();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a1c
 */

long recovered_10003a1c(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10003a5c(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a5c
 */

bool recovered_10003a5c(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10003ae0:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003ae0;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003ae0;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state + 0x5a0cU)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae8
 */

void recovered_10003ae8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aec
 */

undefined8 recovered_10003aec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af4
 */

bool recovered_10003af4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b04
 */

bool recovered_10003b04(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b3c
 */

bool recovered_10003b3c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b58
 */

bool recovered_10003b58(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b70
 */

bool recovered_10003b70(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b88
 */

bool recovered_10003b88(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba0
 */

bool recovered_10003ba0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10003bb8(double value) {
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
float recovered_10003c78(float value){return (float)recovered_10003bb8((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10003c94(long double value){return (long double)recovered_10003bb8((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10003c98(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca8
 */

uint128 recovered_10003ca8(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001550(param_1);
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
 * Address: 0x10003cf4
 */

long recovered_10003cf4(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003d34;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003d34:
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
      goto LAB_10003db8;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003db8;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003db8;
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
LAB_10003db8:
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
 * Address: 0x10003e38
 */

long recovered_10003e38(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003d34;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003d34:
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
      goto LAB_10003db8;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003db8;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003db8;
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
LAB_10003db8:
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

#undef DAT_10006740
#define DAT_10006740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e3c
 */

undefined8 recovered_10003e3c(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_10004014((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004108(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004108(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004108(&local_68);
        uVar5 = recovered_10004108(&local_68);
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
            uVar5 = recovered_1000416c(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_1000416c(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10006740 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004014((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10003a5c(param_2,(long *)puVar6);
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

#undef DAT_10006740
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004014
 */

ulong * recovered_10004014(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10004140(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_100040cc;
  case 1:
    puVar1 = (ulong *)recovered_10004108(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004140(pbVar5,2);
    goto LAB_100040c8;
  case 3:
    puVar1 = (ulong *)recovered_10004140(pbVar5,4);
    goto LAB_10004090;
  default:
    goto switchD_1000405c_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_1000416c(param_2);
    break;
  case 10:
    uVar3 = recovered_10004140(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_100040c8:
    pbVar4 = pbVar5 + 2;
LAB_100040cc:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004140(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004090:
    pbVar4 = pbVar5 + 4;
    goto LAB_100040cc;
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
switchD_1000405c_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004108
 */

ulong recovered_10004108(undefined8 *param_1)

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
 * Address: 0x10004140
 */

ulong recovered_10004140(byte *param_1,long param_2)

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
 * Address: 0x1000416c
 */

ulong recovered_1000416c(undefined8 *param_1)

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


#undef DAT_100068d3
#define DAT_100068d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e4
 */

undefined * recovered_100041e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100068d3;
}

#undef DAT_100068d3

#undef PTR_str_10006a04_10008008
#define PTR_str_10006a04_10008008 (*(char * *)(((uintptr_t)pf_module_state + 0x1964U)))
#undef str_100068d7
#define str_100068d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_100068e7
#define str_100068e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_10006908
#define str_10006908 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_100069bf
#define str_100069bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31bU)))
#undef str_100069c8
#define str_100069c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x324U)))
#undef str_100069dd
#define str_100069dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_100069eb
#define str_100069eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
#undef str_100069fb
#define str_100069fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x357U)))
#define pbStack_1100 (*(byte * *)(frame + 16))
#define acStack_10c8 (*(char (*)[4096])(frame + 72))
#define abStack_c8 (*(byte (*)[104])(frame + 4168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f0
 */

uint recovered_100041f0(char *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5,
                       undefined8 param_6,undefined1 *param_7,ulong param_8,char *param_9,
                       ulong param_10)

{
  unsigned char frame[4400] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *last;

  uVar6 = (uint)param_8;
  if (param_2 == (byte *)0x0) {
    last = (byte *)0x0;
  }
  else {
    lVar16 = recovered_10001204((long)param_2);
    last = param_2 + lVar16;
  }
  if ((param_5 != (char *)0x0) && ((uint)param_6 != 0)) {
    *param_5 = '\0';
  }
  if ((param_9 != (char *)0x0) && ((uint)param_10 != 0)) {
    *param_9 = '\0';
  }
  if ((param_7 != (undefined1 *)0x0) && (uVar6 != 0)) {
    *param_7 = 0;
  }
  if (param_2 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    abStack_c8[0] = 0;
    for (pbVar17 = param_2; uVar18 = (ulong)*pbVar17,
        *pbVar17 < 0x21 && (1L << (uVar18 & 0x3f) & 0x100002600U) != 0; pbVar17 = pbVar17 + 1) {
    }
    uVar5 = 0;
    while (((uVar9 = (uint)uVar18, uVar9 - 0x30 < 10 || (uVar9 & 0xdf) - 0x41 < 0x1a ||
            (uVar9 == 0x5f)) || (uVar9 == 0x24))) {
      if (uVar5 + 1 < 0x60) {
        abStack_c8[uVar5] = (byte)uVar18;
        uVar5 = uVar5 + 1;
      }
      pbVar17 = pbVar17 + 1;
      uVar18 = (ulong)*pbVar17;
    }
    abStack_c8[uVar5] = 0;
    lVar16 = 1;
    while (((uint)uVar18 < 0x21 && ((1L << (uVar18 & 0x3f) & 0x100002600U) != 0))) {
      pbVar15 = pbVar17 + lVar16;
      lVar16 = lVar16 + 1;
      uVar18 = (ulong)*pbVar15;
    }
    pbVar17 = param_2;
    uVar9 = uVar6;
    if ((uVar5 != 0) && ((uint)uVar18 == 0x28)) {
      pbStack_1100 = (byte *)0x0;
      pbVar17 = (byte *)0x0;
      if ((param_1 != (char *)0x0) && (abStack_c8[0] != 0)) {
        pbStack_1100 = (byte *)0x0;
        uVar18 = param_8;
LAB_10004384:
        pcVar10 = recovered_10005088(param_1,str_100069bf);
        if (pcVar10 != (char *)0x0) {
          for (pbVar15 = (byte *)(pcVar10 + 8);
              *pbVar15 < 0x21 && (1L << ((ulong)*pbVar15 & 0x3f) & 0x100002600U) != 0;
              pbVar15 = pbVar15 + 1) {
          }
          lVar16 = recovered_10001204((long)abStack_c8);
          iVar4 = recovered_10003424(pbVar15,abStack_c8,lVar16);
          if (iVar4 == 0) {
            bVar3 = pbVar15[lVar16];
            if (bVar3 < 0x29 && (1L << ((ulong)bVar3 & 0x3f) & 0x10100002600U) != 0) {
              pcVar11 = recovered_100012a8((char *)(pbVar15 + lVar16),'{');
              if (pcVar11 != (char *)0x0) {
                pbVar17 = (byte *)(pcVar11 + 1);
                iVar4 = 1;
                pbVar15 = pbVar17;
LAB_1000441c:
                bVar1 = *pbVar15;
                if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                  pbVar15 = pbVar15 + 1;
LAB_10004434:
                  do {
                    bVar2 = *pbVar15;
                    if (bVar2 == 0x5c) {
                      if (pbVar15[1] != 0) {
                        pbVar15 = pbVar15 + 2;
                        goto LAB_10004434;
                      }
                    }
                    else if (bVar2 == 0) break;
                    pbVar15 = pbVar15 + 1;
                  } while (bVar2 != bVar1);
                  goto LAB_1000441c;
                }
                if (bVar1 == 0) goto LAB_10004494;
                if (bVar1 == 0x7b) {
                  iVar4 = iVar4 + 1;
                }
                else if ((bVar1 == 0x7d) && (iVar4 = iVar4 + -1, iVar4 == 0)) goto LAB_100044cc;
                pbVar15 = pbVar15 + 1;
                goto LAB_1000441c;
              }
LAB_10004494:
              pbVar17 = (byte *)0x0;
            }
            goto LAB_10004498;
          }
          goto LAB_100044c4;
        }
        pbVar17 = (byte *)0x0;
        uVar9 = (uint)uVar18;
      }
LAB_100044e0:
      if (pbVar17 == (byte *)0x0 || pbStack_1100 == (byte *)0x0) {
        pbVar17 = param_2;
        pbStack_1100 = last;
      }
      last = pbStack_1100;
    }
    uVar7 = 0;
    if (((PF_PART4(param_10, 4) >> 1 & 1) != 0) && (last != (byte *)0x0)) {
      pcVar10 = recovered_10004864((char *)pbVar17,(char *)last,str_100068d7);
      if (pcVar10 == (char *)0x0) {
        uVar7 = 0;
      }
      else {
        recovered_10004940(param_9,(uint)param_10,str_100068e7);
        uVar7 = 4;
      }
    }
    uVar5 = 0;
    if ((((uint)param_6 != 0) && (param_5 != (char *)0x0)) && (last != (byte *)0x0)) {
      pbVar15 = pbVar17;
LAB_10004570:
      while (pbVar15 < last) {
        pbVar12 = (byte *)recovered_10004864((char *)pbVar15,(char *)last,str_100069c8);
        pbVar13 = (byte *)recovered_10004864((char *)pbVar15,(char *)last,str_100069dd);
        pbVar14 = (byte *)recovered_10004864((char *)pbVar15,(char *)last,str_100069eb);
        pbVar15 = (byte *)recovered_10004864((char *)pbVar15,(char *)last,str_100069fb);
        if (pbVar12 == (byte *)0x0) {
          if (pbVar13 != (byte *)0x0) goto LAB_100045dc;
          if (pbVar14 != (byte *)0x0) goto LAB_100045ec;
LAB_100045f8:
          pbVar14 = pbVar15;
        }
        else {
          if (pbVar12 <= pbVar13 || pbVar13 == (byte *)0x0) {
            pbVar13 = pbVar12;
          }
LAB_100045dc:
          if (pbVar13 <= pbVar14 || pbVar14 == (byte *)0x0) {
            pbVar14 = pbVar13;
          }
LAB_100045ec:
          if ((pbVar15 != (byte *)0x0) && (pbVar15 < pbVar14)) goto LAB_100045f8;
        }
        if ((pbVar14 == (byte *)0x0) || (last <= pbVar14)) break;
        if ((((pbVar14 <= pbVar17) ||
             ((bVar3 = pbVar14[-1], 9 < (byte)(bVar3 - 0x30U) && 0x19 < (byte)((bVar3 & 0xdf) + 0xbf)
              && ((0x3b < bVar3 - 0x24 ||
                  ((1L << ((ulong)(bVar3 - 0x24) & 0x3f) & 0x800000000000401U) == 0)))))) &&
            (pbVar13 = (byte *)recovered_100012a8((char *)pbVar14,'='), pbVar13 != (byte *)0x0)) &&
           (pbVar13 < last)) goto code_r0x1000466c;
        pbVar15 = pbVar14 + 1;
      }
      for (lVar16 = 0; lVar16 != 5; lVar16 = lVar16 + 1) {
        pcVar10 = (&PTR_str_10006a04_10008008)[lVar16];
        pbVar15 = pbVar17;
        while (((pbVar15 < last &&
                (pbVar15 = (byte *)recovered_10004864((char *)pbVar15,(char *)last,pcVar10),
                pbVar15 != (byte *)0x0)) && (pbVar15 < last))) {
          pcVar11 = recovered_100012a8((char *)pbVar15,'(');
          if (((pcVar11 != (char *)0x0) &&
              (pbVar13 = (byte *)recovered_10005840(pcVar11), pcVar11 != (char *)0x0)) &&
             ((pbVar13 != (byte *)0x0 && (pbVar13 <= last)))) {
            *param_5 = '\0';
            uVar5 = recovered_1000512c(param_5,(uint)param_6,pcVar11 + 1,(char *)pbVar13,param_3,
                                       (char *)param_4);
            pbVar15 = pbVar13;
            if (((uVar5 >> 4 & 1) != 0) && (*param_5 != '\0')) goto LAB_100047b8;
          }
          pbVar15 = pbVar15 + 1;
        }
      }
      uVar5 = 0;
LAB_100047b8:
      uVar9 = uVar6;
    }
    uVar5 = uVar5 | uVar7;
    if (((param_10 & 0x100000000) != 0) && (last != (byte *)0x0)) {
      uVar18 = (long)last - (long)pbVar17;
      if (0xffe < uVar18) {
        uVar18 = 0xfff;
      }
      recovered_10000d44(acStack_10c8,pbVar17,uVar18);
      acStack_10c8[uVar18] = '\0';
      uVar6 = recovered_100049ac(acStack_10c8,param_7,uVar9);
      uVar7 = recovered_10004aa4(acStack_10c8,param_7,uVar9);
      uVar8 = recovered_10004c6c(acStack_10c8,param_7,uVar9);
      uVar9 = recovered_10004d64(acStack_10c8,param_7,uVar9);
      uVar5 = uVar6 | uVar7 | uVar8 | uVar9 | uVar5;
    }
    if (uVar5 == 0) {
      recovered_10004940(param_9,(uint)param_10,str_10006908);
      uVar5 = 8;
    }
  }
  return uVar5;
LAB_100044cc:
  pbStack_1100 = pbVar15;
LAB_10004498:
  if (bVar3 < 0x29) {
    uVar18 = param_8 & 0xffffffff;
    if ((1L << ((ulong)(uint)bVar3 & 0x3f) & 0x10100002600U) != 0) goto LAB_100044e0;
  }
  else {
    uVar18 = param_8 & 0xffffffff;
  }
LAB_100044c4:
  param_1 = pcVar10 + 1;
  goto LAB_10004384;
code_r0x1000466c:
  for (pbVar15 = pbVar13 + 1; pbVar15 < last; pbVar15 = pbVar15 + 1) {
    if (*pbVar15 < 0x3c && (1L << ((ulong)*pbVar15 & 0x3f) & 0x800000000002400U) != 0)
    goto LAB_100046b4;
  }
  pbVar15 = last;
LAB_100046b4:
  *param_5 = '\0';
  uVar5 = recovered_1000512c(param_5,(uint)param_6,(char *)(pbVar13 + 1),(char *)pbVar15,param_3,
                             (char *)param_4);
  if (((uVar5 >> 4 & 1) == 0) || (*param_5 == '\0')) goto LAB_10004570;
  goto LAB_100047b8;
}

#undef PTR_str_10006a04_10008008
#undef str_100068d7
#undef str_100068e7
#undef str_10006908
#undef str_100069bf
#undef str_100069c8
#undef str_100069dd
#undef str_100069eb
#undef str_100069fb
#undef pbStack_1100
#undef acStack_10c8
#undef abStack_c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004864
 */

char * recovered_10004864(char *first,char *last,char *pattern)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;

  if (pattern == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = recovered_10001204((long)pattern);
  }
  if ((((first <= last) && (first != (char *)0x0)) && (last != (char *)0x0)) &&
     ((pattern != (char *)0x0 && (lVar3 != 0)))) {
    for (; (first + lVar3 <= last && (*first != 0)); first = first + 1) {
      pbVar4 = (byte *)pattern;
      pbVar5 = (byte *)first;
      lVar6 = lVar3;
      do {
        if (lVar6 == 0) {
          return (char *)(byte *)first;
        }
        if (last <= pbVar5) break;
        bVar2 = *pbVar5;
        if (bVar2 == 0) break;
        uVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar1 = (uint)bVar2;
        }
        bVar2 = *pbVar4;
        uVar7 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar7 = (uint)bVar2;
        }
        lVar6 = lVar6 + -1;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar1 == uVar7);
    }
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004940
 */

void recovered_10004940(char *buffer,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((((buffer != (char *)0x0) && (capacity != 0)) && (text != (char *)0x0)) && (*buffer == '\0'))
  {
    uVar1 = recovered_10001204((long)text);
    if (capacity <= uVar1) {
      uVar1 = (ulong)capacity - 1;
    }
    if (uVar1 != 0) {
      recovered_10000d44(buffer,text,uVar1);
    }
    buffer[uVar1] = '\0';
  }
  return;
}


#undef str_10006964
#define str_10006964 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c0U)))
#undef str_10006b1b
#define str_10006b1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x477U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049ac
 */

uint recovered_100049ac(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *first;
  char *last;
  byte *text;
  byte *pbVar2;
  uint uVar3;

  uVar3 = 0;
  do {
    text = (byte *)recovered_10005088(script,str_10006964);
    if (text == (byte *)0x0) {
      return uVar3;
    }
    pbVar2 = (byte *)recovered_10005088((char *)text,str_10006b1b);
    first = text;
    script = (char *)text;
    while( true ) {
      script = script + 1;
      if (*first == 0) {
        return uVar3;
      }
      if (*first == 0x28) break;
      first = first + 1;
    }
    for (; (byte)*script < 0x21 && (1L << ((ulong)(byte)*script & 0x3f) & 0x100002600U) != 0;
        script = script + 1) {
    }
    last = recovered_10005840((char *)first);
    if (last != (char *)0x0) {
      uVar1 = recovered_10005f7c(output,capacity,script,last);
      if (uVar1 != 0) {
        uVar3 = 1;
      }
      if (pbVar2 == text) {
        recovered_100062e0(output,capacity,10);
        uVar3 = 1;
      }
      script = last + 1;
    }
  } while( true );
}

#undef str_10006964
#undef str_10006b1b

#undef DAT_10006b5f
#define DAT_10006b5f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bbU)))
#undef PTR_str_10006b31_10008030
#define PTR_str_10006b31_10008030 (*(char * *)(((uintptr_t)pf_module_state + 0x198cU)))
#undef PTR_str_10006b47_10008040
#define PTR_str_10006b47_10008040 (*(char * *)(((uintptr_t)pf_module_state + 0x199cU)))
#undef str_10006b68
#define str_10006b68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_10006b77
#define str_10006b77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_10006b7f
#define str_10006b7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa4
 */

uint recovered_10004aa4(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;

  uVar4 = 0;
  if (((script != (char *)0x0) && (output != (char *)0x0)) && (capacity != 0)) {
    uVar4 = 0;
    for (lVar6 = 0; lVar6 != 2; lVar6 = lVar6 + 1) {
      pcVar5 = (&PTR_str_10006b31_10008030)[lVar6];
      pcVar3 = script;
      while ((pcVar3 = recovered_10005088(pcVar3,pcVar5), pcVar3 != (char *)0x0 &&
             (pcVar3 = recovered_100012a8(pcVar3,'='), pcVar3 != (char *)0x0))) {
        pcVar3 = pcVar3 + 1;
        pcVar2 = recovered_1000632c(pcVar3);
        if (pcVar2 != (char *)0x0) {
          uVar1 = recovered_10005f7c(output,capacity,pcVar3,pcVar2);
          if (uVar1 != 0) {
            uVar4 = 1;
          }
          if (*pcVar2 != '\0') {
            pcVar3 = pcVar2 + 1;
          }
        }
      }
    }
    for (lVar6 = 0; lVar6 != 2; lVar6 = lVar6 + 1) {
      pcVar5 = (&PTR_str_10006b47_10008040)[lVar6];
      pcVar3 = script;
      while ((pcVar3 = recovered_10005088(pcVar3,pcVar5), pcVar3 != (char *)0x0 &&
             (pcVar3 = recovered_100012a8(pcVar3,'='), pcVar3 != (char *)0x0))) {
        pcVar3 = pcVar3 + 1;
        pcVar2 = recovered_1000632c(pcVar3);
        if (pcVar2 != (char *)0x0) {
          recovered_10005f14(output,capacity,&DAT_10006b5f);
          recovered_10006434(output,capacity,pcVar3,pcVar2);
          recovered_10005f14(output,capacity,(char *)((uintptr_t)pf_module_state + 0x4bfU));
          if (*pcVar2 != '\0') {
            pcVar3 = pcVar2 + 1;
          }
          uVar4 = 1;
        }
      }
    }
    while ((pcVar3 = recovered_10005088(script,str_10006b68), pcVar3 != (char *)0x0 &&
           (pcVar3 = recovered_100012a8(pcVar3,'='), pcVar3 != (char *)0x0))) {
      script = pcVar3 + 1;
      pcVar3 = recovered_1000632c(script);
      if (pcVar3 != (char *)0x0) {
        recovered_10005f14(output,capacity,str_10006b77);
        recovered_10006434(output,capacity,script,pcVar3);
        recovered_10005f14(output,capacity,str_10006b7f);
        if (*pcVar3 != '\0') {
          script = pcVar3 + 1;
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

#undef DAT_10006b5f
#undef PTR_str_10006b31_10008030
#undef PTR_str_10006b47_10008040
#undef str_10006b68
#undef str_10006b77
#undef str_10006b7f

#undef str_10006b98
#define str_10006b98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c6c
 */

uint recovered_10004c6c(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *last;
  char *pcVar5;
  uint uVar6;

  uVar6 = 0;
  do {
    pcVar4 = recovered_10005088(script,str_10006b98);
    if ((pcVar4 == (char *)0x0) || (pcVar4 = recovered_100012a8(pcVar4,'('), pcVar4 == (char *)0x0))
    {
      return uVar6;
    }
    last = recovered_10005840(pcVar4);
    if (last != (char *)0x0) {
      pcVar5 = pcVar4 + 1;
LAB_10004cbc:
      pcVar4 = last;
      if (pcVar5 < last) {
        cVar2 = *pcVar5;
        if (((cVar2 == '\"') || (cVar2 == '\'')) || (cVar2 == '`')) {
          pcVar4 = pcVar5 + 1;
          do {
            while( true ) {
              if (last <= pcVar4) {
                pcVar5 = pcVar4;
                goto LAB_10004cbc;
              }
              pcVar5 = pcVar4 + 1;
              cVar1 = *pcVar4;
              if (cVar1 != '\\' || last <= pcVar5) break;
              pcVar4 = pcVar4 + 2;
            }
            pcVar4 = pcVar5;
          } while (cVar1 != cVar2);
        }
        else {
          if (cVar2 == ',') {
            uVar3 = recovered_10005f7c(output,capacity,pcVar5 + 1,last);
            if (uVar3 != 0) {
              uVar6 = 1;
            }
            goto LAB_10004d50;
          }
          pcVar5 = pcVar5 + 1;
        }
        goto LAB_10004cbc;
      }
    }
LAB_10004d50:
    script = pcVar4 + 1;
  } while( true );
}

#undef str_10006b98

#undef str_100069a6
#define str_100069a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x302U)))
#undef str_100069b2
#define str_100069b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d64
 */

uint recovered_10004d64(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;

  uVar9 = 0;
  do {
    if ((script == (char *)0x0) || (*script == '\0')) {
      return uVar9;
    }
    pcVar6 = recovered_10005088(script,str_100069a6);
    pcVar5 = recovered_10005088(script,str_100069b2);
    if (pcVar6 == (char *)0x0) {
      if (pcVar5 == (char *)0x0) {
        return uVar9;
      }
    }
    else if (pcVar6 <= pcVar5 || pcVar5 == (char *)0x0) {
      pcVar5 = pcVar6;
    }
    pcVar5 = recovered_100012a8(pcVar5,'(');
    if (pcVar5 == (char *)0x0) {
      return uVar9;
    }
    pcVar6 = recovered_10005840(pcVar5);
    if (pcVar6 != (char *)0x0) {
      bVar3 = false;
      do {
        if (pcVar6 < pcVar5 + 1) break;
        lVar7 = 1;
LAB_10004df8:
        pcVar1 = pcVar5 + lVar7;
        if (pcVar1 < pcVar6) {
          cVar2 = *pcVar1;
          if ((cVar2 == '\"') || (cVar2 == '\'')) {
            lVar8 = lVar7 + 1;
            do {
              while( true ) {
                if (pcVar6 <= pcVar5 + lVar8) {
                  lVar7 = lVar8;
                  goto LAB_10004df8;
                }
                pcVar1 = pcVar5 + lVar8;
                lVar7 = lVar8 + 1;
                if (*pcVar1 != '\\' || pcVar6 <= pcVar5 + lVar7) break;
                lVar8 = lVar8 + 2;
              }
              lVar8 = lVar7;
            } while (*pcVar1 != cVar2);
          }
          else {
            if (cVar2 == ',') goto LAB_10004e70;
            lVar7 = lVar7 + 1;
          }
          goto LAB_10004df8;
        }
LAB_10004e70:
        if (1 < lVar7) {
          if (bVar3) {
            recovered_100062e0(output,capacity,0x20);
          }
          uVar4 = recovered_10005f7c(output,capacity,pcVar5 + 1,pcVar1);
          if (uVar4 != 0) {
            bVar3 = true;
          }
        }
        pcVar5 = pcVar1;
      } while (pcVar1 < pcVar6);
      pcVar5 = pcVar6;
      if (bVar3) {
        recovered_100062e0(output,capacity,10);
        uVar9 = 1;
      }
    }
    script = pcVar5 + 1;
  } while( true );
}

#undef str_100069a6
#undef str_100069b2

#undef str_100068d7
#define str_100068d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_100068e7
#define str_100068e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_10006908
#define str_10006908 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_10006924
#define str_10006924 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x280U)))
#undef str_1000692b
#define str_1000692b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x287U)))
#undef str_1000695a
#define str_1000695a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b6U)))
#undef str_10006964
#define str_10006964 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c0U)))
#undef str_10006973
#define str_10006973 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cfU)))
#undef str_1000697d
#define str_1000697d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d9U)))
#undef str_10006989
#define str_10006989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_10006993
#define str_10006993 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2efU)))
#undef str_100069a6
#define str_100069a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x302U)))
#undef str_100069b2
#define str_100069b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004edc
 */

uint recovered_10004edc(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;

  if ((status != (char *)0x0) && (status_capacity != 0)) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((flags & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = recovered_100049ac(script,output,capacity);
      uVar2 = recovered_10004aa4(script,output,capacity);
      uVar3 = recovered_10004c6c(script,output,capacity);
      uVar4 = recovered_10004d64(script,output,capacity);
      uVar1 = uVar2 | uVar1 | uVar3 | uVar4;
    }
    pcVar5 = recovered_10005088(script,str_10006924);
    if (pcVar5 != (char *)0x0) {
      uVar1 = uVar1 | 2;
      recovered_10004940(status,status_capacity,str_1000692b);
    }
    if (((flags >> 1 & 1) != 0) &&
       (pcVar5 = recovered_10005088(script,str_100068d7), pcVar5 != (char *)0x0)) {
      uVar1 = uVar1 | 4;
      recovered_10004940(status,status_capacity,str_100068e7);
    }
    pcVar5 = recovered_10005088(script,str_1000695a);
    if ((((((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10005088(script,str_10006964), pcVar5 == (char *)0x0)) &&
          (pcVar5 = recovered_10005088(script,str_10006973), pcVar5 == (char *)0x0)) &&
         ((pcVar5 = recovered_10005088(script,str_1000697d), pcVar5 == (char *)0x0 &&
          (pcVar5 = recovered_10005088(script,str_10006989), pcVar5 == (char *)0x0)))) &&
        ((pcVar5 = recovered_10005088(script,str_10006993), pcVar5 == (char *)0x0 &&
         ((pcVar5 = recovered_10005088(script,str_100069a6), pcVar5 == (char *)0x0 &&
          (pcVar5 = recovered_10005088(script,str_100069b2), pcVar5 == (char *)0x0)))))) &&
       ((pcVar5 = recovered_10005088(script,str_10006924), pcVar5 == (char *)0x0 &&
        ((pcVar5 = recovered_10005088(script,str_100068d7), pcVar5 == (char *)0x0 &&
         (*script != '\0')))))) {
      uVar1 = uVar1 | 8;
      recovered_10004940(status,status_capacity,str_10006908);
    }
  }
  return uVar1;
}

#undef str_100068d7
#undef str_100068e7
#undef str_10006908
#undef str_10006924
#undef str_1000692b
#undef str_1000695a
#undef str_10006964
#undef str_10006973
#undef str_1000697d
#undef str_10006989
#undef str_10006993
#undef str_100069a6
#undef str_100069b2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005088
 */

char * recovered_10005088(char *text,char *pattern)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;

  if (pattern == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = recovered_10001204((long)pattern);
  }
  if (((text != (char *)0x0) && (pattern != (char *)0x0)) && (lVar3 != 0)) {
    for (; *text != '\0'; text = text + 1) {
      lVar4 = 0;
      do {
        if (lVar3 == lVar4) {
          return text;
        }
        bVar2 = text[lVar4];
        if (bVar2 == 0) break;
        uVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar1 = (uint)bVar2;
        }
        bVar2 = pattern[lVar4];
        uVar5 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar5 = (uint)bVar2;
        }
        lVar4 = lVar4 + 1;
      } while (uVar1 == uVar5);
    }
  }
  return (char *)0x0;
}


#undef DAT_100067c8
#define DAT_100067c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10006a60
#define str_10006a60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bcU)))
#undef str_10006a73
#define str_10006a73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cfU)))
#undef str_10006a7d
#define str_10006a7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_10006a95
#define str_10006a95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f1U)))
#undef str_10006aaa
#define str_10006aaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x406U)))
#undef str_10006ab1
#define str_10006ab1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_10006ac8
#define str_10006ac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_10006ad3
#define str_10006ad3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42fU)))
#define acStack_268 (*(char (*)[520])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000512c
 */

uint recovered_1000512c(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char frame[672] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  char *last_00;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;

  pcVar1 = &DAT_100067c8;
  if (html != (char *)0x0) {
    pcVar1 = html;
  }
  pbVar4 = (byte *)first;
LAB_1000517c:
  do {
    while( true ) {
      if (pbVar4 == (byte *)0x0) {
        return 0x10;
      }
      pbVar8 = pbVar4;
      if (last <= pbVar4) {
        return 0x10;
      }
      while( true ) {
        if (last <= pbVar8) {
          return 0x10;
        }
        bVar2 = *pbVar8;
        if (0x2b < bVar2) goto LAB_10005208;
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x80100002600U) == 0) break;
        pbVar8 = pbVar8 + 1;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x8400000000U) == 0) break;
      first = (char *)(pbVar8 + 1);
      pbVar8 = (byte *)first;
      do {
        while( true ) {
          pbVar4 = pbVar8;
          if (last <= pbVar4) goto LAB_1000538c;
          if (*pbVar4 != 0x5c || last <= pbVar4 + 1) break;
          pbVar8 = pbVar4 + 2;
        }
        pbVar8 = pbVar4 + 1;
      } while (*pbVar4 != bVar2);
LAB_1000538c:
      recovered_10005534(output,capacity,first,(char *)pbVar4);
      if (pbVar4 < last) {
        pbVar4 = pbVar4 + 1;
      }
    }
LAB_10005208:
    if (bVar2 == 0x60) {
      do {
        first = (char *)(pbVar8 + 1);
        pbVar8 = (byte *)first;
        do {
          while( true ) {
            while( true ) {
              pbVar4 = pbVar8;
              if (last <= pbVar4) goto LAB_1000538c;
              pbVar8 = pbVar4 + 1;
              bVar2 = *pbVar4;
              if (!(bVar2 == 0x5c && pbVar8 < last)) break;
              pbVar8 = pbVar4 + 2;
            }
            if (bVar2 == 0x24) break;
            if (bVar2 == 0x60) goto LAB_1000538c;
          }
        } while ((last <= pbVar8) || (*pbVar8 != 0x7b));
        pbVar8 = (byte *)recovered_1000577c((char *)(pbVar4 + 2),last);
        if (pbVar8 == (byte *)0x0) {
          return 8;
        }
        recovered_10005534(output,capacity,first,(char *)pbVar4);
        uVar3 = recovered_1000512c(output,capacity,(char *)(pbVar4 + 2),(char *)pbVar8,url,html);
        if ((uVar3 >> 3 & 1) != 0) {
          return uVar3;
        }
      } while( true );
    }
    pbVar4 = (byte *)recovered_10005088((char *)pbVar8,str_10006a60);
    if ((pbVar8 != pbVar4) &&
       (pbVar4 = (byte *)recovered_10005088((char *)pbVar8,str_10006a73), pbVar8 != pbVar4))
    {
      pbVar4 = (byte *)recovered_10005088((char *)pbVar8,str_10006a7d);
      if (pbVar8 == pbVar4) {
        pcVar7 = recovered_100012a8((char *)pbVar8,'(');
        if (pcVar7 == (char *)0x0) {
          return 8;
        }
        pcVar7 = recovered_10005840(pcVar7);
        if (pcVar7 == (char *)0x0) {
          return 8;
        }
        if (last < pcVar7) {
          return 8;
        }
        pbVar4 = (byte *)(pcVar7 + 1);
        pbVar5 = (byte *)recovered_10005088((char *)pbVar8,str_10006a95);
        if ((pbVar8 == pbVar5) ||
           (pbVar5 = (byte *)recovered_10005088((char *)pbVar4,str_10006a95), pbVar5 != pbVar4)) {
          uVar3 = recovered_100058dc(output,capacity,(char *)pbVar8,last,url,html,0);
          pbVar5 = (byte *)recovered_10005088((char *)pbVar4,str_10006aaa);
          if (pbVar5 == pbVar4) {
            pcVar7 = str_10006aaa;
            goto LAB_100054fc;
          }
        }
        else {
          acStack_268[0] = '\0';
          recovered_10005b84(acStack_268,(uint)pcVar1,first);
          uVar3 = recovered_100058dc(output,capacity,(char *)pbVar8,last,url,acStack_268,0);
          pcVar7 = str_10006a95;
LAB_100054fc:
          lVar6 = recovered_10001204((long)pcVar7);
          pbVar4 = pbVar4 + lVar6;
        }
        first = (char *)pbVar8;
        if ((uVar3 >> 3 & 1) != 0) {
          return uVar3;
        }
      }
      else {
        pbVar4 = (byte *)recovered_10005088((char *)pbVar8,str_10006ab1);
        first = (char *)pbVar8;
        if (((pbVar8 == pbVar4) ||
            (pbVar4 = (byte *)recovered_10005088((char *)pbVar8,str_10006ac8), pbVar8 == pbVar4)) ||
           (pbVar4 = (byte *)recovered_10005088((char *)pbVar8,str_10006ad3), pbVar8 == pbVar4)) {
          uVar3 = recovered_100058dc(output,capacity,(char *)pbVar8,last,url,html,0);
          if ((uVar3 >> 3 & 1) != 0) {
            return uVar3;
          }
          while( true ) {
            pbVar4 = pbVar8;
            if ((last <= pbVar8) ||
               (!(0x3b < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x800180000000000U) == 0)))
            break;
            pbVar8 = pbVar8 + 1;
          }
        }
        else {
          uVar3 = recovered_10005bf4(output,capacity,(char *)pbVar8,last,url,html,0);
          if ((uVar3 >> 3 & 1) != 0) {
            return 8;
          }
          while( true ) {
            pbVar4 = pbVar8;
            if ((last <= pbVar8) ||
               (!(0x3b < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x800180000000000U) == 0)))
            break;
            pbVar8 = pbVar8 + 1;
          }
        }
      }
      goto LAB_1000517c;
    }
    pcVar7 = recovered_100012a8((char *)pbVar8,'(');
    if (pcVar7 == (char *)0x0) {
      return 8;
    }
    last_00 = recovered_10005840(pcVar7);
    if (last_00 == (char *)0x0) {
      return 8;
    }
    if (last < last_00) {
      return 8;
    }
    first = pcVar7 + 1;
    uVar3 = recovered_100058dc(output,capacity,first,last_00,url,html,1);
    pbVar4 = (byte *)(last_00 + 1);
    if ((uVar3 >> 3 & 1) != 0) {
      return uVar3;
    }
  } while( true );
}

#undef DAT_100067c8
#undef str_10006a60
#undef str_10006a73
#undef str_10006a7d
#undef str_10006a95
#undef str_10006aaa
#undef str_10006ab1
#undef str_10006ac8
#undef str_10006ad3
#undef acStack_268

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005534
 */

uint recovered_10005534(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;

  uVar3 = 0;
  if ((((output != (char *)0x0) && (capacity != 0)) && (first <= last)) &&
     ((first != (char *)0x0 && (last != (char *)0x0)))) {
    uVar5 = recovered_10001204((long)output);
    uVar3 = 0;
    uVar8 = (ulong)capacity;
    while (first < last) {
      pcVar1 = first + 1;
      if (*first != '\\' || last <= pcVar1) {
        uVar6 = uVar5 + 1;
        if (uVar6 < uVar8) {
          output[uVar5] = *first;
          output[uVar6] = '\0';
          uVar5 = uVar6;
        }
        uVar3 = 1;
        uVar6 = uVar5;
        pcVar10 = first;
        goto LAB_100055c8;
      }
      cVar7 = *pcVar1;
      uVar6 = uVar5;
      pcVar10 = pcVar1;
      switch((uintptr_t)(cVar7)) {
      case 'n':
        if (uVar8 <= uVar5 + 1) goto LAB_10005710;
        cVar7 = '\n';
LAB_100056fc:
        output[uVar5] = cVar7;
code_r0x10005700:
        uVar6 = uVar5 + 1;
        output[uVar6] = '\0';
        uVar3 = 1;
        pcVar10 = pcVar1;
        break;
      case 'o':
      case 'p':
      case 'q':
      case 's':
      case 'w':
code_r0x10005628:
        uVar6 = uVar5 + 1;
        if (uVar8 <= uVar6) goto LAB_10005710;
        output[uVar5] = cVar7;
        output[uVar6] = '\0';
        uVar3 = 1;
        break;
      case 'r':
        break;
      case 't':
        if (uVar5 + 1 < uVar8) {
          output[uVar5] = ' ';
          goto code_r0x10005700;
        }
        goto LAB_10005710;
      case 'u':
        pcVar10 = first + 5;
        if (pcVar10 < last) {
          uVar3 = 0;
          for (lVar9 = 0; lVar9 != 4; lVar9 = lVar9 + 1) {
            uVar4 = recovered_10005dbc((int)first[lVar9 + 2]);
            if ((int)uVar4 < 0) goto code_r0x10014b88;
            uVar3 = uVar4 | uVar3 << 4;
          }
          uVar6 = uVar5 + 1;
          if (uVar6 < uVar8) {
            if (0x5e < uVar3 - 0x20) {
              uVar3 = 0x20;
            }
            output[uVar5] = (char)uVar3;
            output[uVar6] = '\0';
            uVar3 = 1;
            break;
          }
          uVar6 = uVar5;
        }
        else {
code_r0x10014b88:
          uVar2 = uVar5 + 1;
          pcVar10 = pcVar1;
          if (uVar2 < uVar8) {
            output[uVar5] = 'u';
            output[uVar2] = '\0';
            uVar6 = uVar2;
          }
        }
        uVar3 = 1;
        break;
      case 'v':
        goto LAB_10005710;
      case 'x':
        pcVar10 = first + 3;
        if (pcVar10 < last) {
          uVar3 = recovered_10005dbc((int)first[2]);
          uVar4 = recovered_10005dbc((int)first[3]);
          if ((-1 < (int)uVar3) && (-1 < (int)uVar4)) {
            uVar2 = uVar5 + 1;
            if (uVar2 < uVar8) {
              output[uVar5] = (byte)uVar4 | (byte)(uVar3 << 4);
              output[uVar2] = '\0';
              uVar6 = uVar2;
            }
            uVar3 = 1;
            break;
          }
        }
        if (uVar5 + 1 < uVar8) {
          cVar7 = 'x';
          goto LAB_100056fc;
        }
        goto LAB_10005710;
      default:
        if (cVar7 == '\"') {
          if (uVar5 + 1 < uVar8) {
            cVar7 = '\"';
            goto LAB_100056fc;
          }
        }
        else if (cVar7 == '\'') {
          if (uVar5 + 1 < uVar8) {
            cVar7 = '\'';
            goto LAB_100056fc;
          }
        }
        else if (cVar7 == '\\') {
          if (uVar5 + 1 < uVar8) {
            cVar7 = '\\';
            goto LAB_100056fc;
          }
        }
        else if ((cVar7 != 'b') && (cVar7 != 'f')) goto code_r0x10005628;
LAB_10005710:
        uVar3 = 1;
        uVar6 = uVar5;
        pcVar10 = pcVar1;
      }
LAB_100055c8:
      uVar5 = uVar6;
      first = pcVar10 + 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000577c
 */

char * recovered_1000577c(char *first,char *last)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;

  if (((first <= last) && (first != (char *)0x0)) && (last != (char *)0x0)) {
    iVar4 = 1;
LAB_100057a0:
    if (first < last) {
      bVar2 = *first;
      uVar3 = bVar2 - 0x22;
      if (uVar3 < 0x3f && (1L << ((ulong)uVar3 & 0x3f) & 0x4000000000000021U) != 0) {
        pbVar5 = (byte *)(first + 1);
        do {
          while( true ) {
            if (last <= pbVar5) {
              first = (char *)pbVar5;
              goto LAB_100057a0;
            }
            first = (char *)(pbVar5 + 1);
            bVar1 = *pbVar5;
            if (bVar1 != 0x5c || last <= first) break;
            pbVar5 = pbVar5 + 2;
          }
          pbVar5 = (byte *)first;
        } while (bVar1 != bVar2);
      }
      else {
        if (bVar2 == 0x7b) {
          iVar4 = iVar4 + 1;
        }
        else if ((bVar2 == 0x7d) && (iVar4 = iVar4 + -1, iVar4 == 0)) {
          return (char *)(byte *)first;
        }
        first = first + 1;
      }
      goto LAB_100057a0;
    }
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

char * recovered_10005840(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
    return (char *)0x0;
  }
  iVar3 = 1;
switchD_1000587c_caseD_23:
  first = first + 1;
LAB_10005860:
  cVar1 = *first;
  switch((uintptr_t)(cVar1)) {
  case '\"':
  case '\'':
    first = first + 1;
LAB_10005884:
    do {
      cVar2 = *first;
      if (cVar2 == '\\') {
        if (first[1] != '\0') {
          first = first + 2;
          goto LAB_10005884;
        }
      }
      else if (cVar2 == '\0') break;
      first = first + 1;
    } while (cVar2 != cVar1);
    goto LAB_10005860;
  case '#':
  case '$':
  case '%':
  case '&':
    goto switchD_1000587c_caseD_23;
  case '(':
    iVar3 = iVar3 + 1;
    goto switchD_1000587c_caseD_23;
  case ')':
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return first;
    }
    goto switchD_1000587c_caseD_23;
  default:
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    goto switchD_1000587c_caseD_23;
  }
}


#undef DAT_100067c8
#define DAT_100067c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10006a7d
#define str_10006a7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_10006ab1
#define str_10006ab1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_10006ac8
#define str_10006ac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_10006ad3
#define str_10006ad3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42fU)))
#undef str_10006ae6
#define str_10006ae6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x442U)))
#define abStack_110 (*(byte (*)[96])(frame + 16))
#define abStack_b0 (*(byte (*)[96])(frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058dc
 */

uint recovered_100058dc(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;

  if (first == (char *)0x0) {
    return 8;
  }
  if (last <= first) {
    return 8;
  }
  pcVar4 = recovered_10005088(first,str_10006a7d);
  if ((pcVar4 == first) || (pcVar4 = recovered_10005088(first,str_10006ab1), pcVar4 == first)) {
    pbVar5 = (byte *)recovered_100012a8(first,'(');
    if (pbVar5 == (byte *)0x0) {
      return 8;
    }
    if (last <= pbVar5) {
      return 8;
    }
    do {
      pbVar6 = pbVar5;
      pbVar5 = pbVar6 + 1;
      if (last <= pbVar5) {
        return 8;
      }
      bVar1 = *pbVar5;
      if (0x27 < bVar1) {
        return 8;
      }
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x8400000000U) == 0) {
      return 8;
    }
    pbVar5 = pbVar6 + 2;
    for (lVar7 = 2; (pbVar6 + lVar7 < last && (pbVar6[lVar7] != bVar1)); lVar7 = lVar7 + 1) {
    }
    if (lVar7 - 2U == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = lVar7 - 2U;
      if (*pbVar5 == 0x23) {
        uVar8 = lVar7 - 3;
        pbVar5 = pbVar6 + 3;
      }
    }
    if (0x5e < uVar8) {
      uVar8 = 0x5f;
    }
    recovered_10000d44(abStack_110,pbVar5,uVar8);
    abStack_110[uVar8] = 0;
    if ((url != (char *)0x0) && (*url != '\0')) {
      iVar3 = recovered_10001228(abStack_110,(byte *)url);
      if (iVar3 == 0) {
LAB_10005b40:
        pcVar4 = &DAT_100067c8;
        if (html != (char *)0x0) {
          pcVar4 = html;
        }
        if (depth == 0) {
          recovered_10005f14(output,capacity,pcVar4);
        }
        else {
          recovered_10005dec(output,capacity,pcVar4);
        }
        return 0x10;
      }
      pcVar4 = recovered_10005088((char *)abStack_110,str_10006ae6);
      if (pcVar4 != (char *)0x0) {
        pbVar5 = (byte *)(pcVar4 + 5);
        while( true ) {
          bVar1 = *pbVar5;
          uVar2 = (uint)bVar1;
          if ((bVar1 != 9) && (bVar1 != 0x20)) break;
          pbVar5 = pbVar5 + 1;
        }
        if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
          pbVar5 = pbVar5 + 1;
        }
        else {
          uVar2 = 0;
        }
        uVar8 = 0;
        while( true ) {
          bVar1 = pbVar5[uVar8];
          if ((((int)(char)bVar1 == 0) || (0x5e < uVar8 || uVar2 == (int)(char)bVar1)) ||
             ((uVar2 == 0 && (((bVar1 == 9 || (bVar1 == 0x20)) || (bVar1 == 0x5d)))))) break;
          abStack_b0[uVar8] = bVar1;
          uVar8 = uVar8 + 1;
        }
        abStack_b0[uVar8] = 0;
        iVar3 = recovered_10001228(abStack_b0,(byte *)url);
        if (iVar3 == 0) goto LAB_10005b40;
      }
    }
  }
  else {
    uVar2 = recovered_10005bf4(output,capacity,first,last,url,html,depth);
    if ((uVar2 >> 3 & 1) == 0) {
      return uVar2;
    }
    pcVar4 = recovered_10005088(first,str_10006ac8);
    if ((pcVar4 == first) || (pcVar4 = recovered_10005088(first,str_10006ad3), pcVar4 == first))
    goto LAB_10005b40;
  }
  return 8;
}

#undef DAT_100067c8
#undef str_10006a7d
#undef str_10006ab1
#undef str_10006ac8
#undef str_10006ad3
#undef str_10006ae6
#undef abStack_110
#undef abStack_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b84
 */

uint recovered_10005b84(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;

  pbVar5 = (byte *)(ulong)capacity;
  pcVar4 = output;
  if (pbVar5 != (byte *)0x0) {
    if (output == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)recovered_10001204((long)output);
    }
    while( true ) {
      bVar3 = *pbVar5;
      if (bVar3 == 0) break;
      bVar2 = bVar3 - 0x20;
      if (0x19 < bVar3 - 0x61U) {
        bVar2 = bVar3;
      }
      if ((output != (char *)0x0) && (pcVar1 = pcVar4 + 1, pcVar1 < (char *)0x200)) {
        output[(long)pcVar4] = bVar2;
        output[(long)pcVar1] = '\0';
        pcVar4 = pcVar1;
      }
      pbVar5 = pbVar5 + 1;
    }
  }
  return (uint)pcVar4;
}


#undef DAT_100067c8
#define DAT_100067c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10006aaa
#define str_10006aaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x406U)))
#undef str_10006afd
#define str_10006afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_10006b0c
#define str_10006b0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x468U)))
#define local_a0 (*(byte (*)[96])(frame + 528))
#define abStack_2a0 (*(byte (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bf4
 */

uint recovered_10005bf4(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;

  if (first == (char *)0x0) {
    return 8;
  }
  if (last == (char *)0x0) {
    return 8;
  }
  if (last <= first) {
    return 8;
  }
  if (url == (char *)0x0) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  bVar2 = *first;
  if (((0x19 < (bVar2 & 0xffffffdf) - 0x41) && (bVar2 != 0x5f)) && (bVar2 != 0x24)) {
    return 8;
  }
  uVar7 = 0;
  for (pbVar8 = (byte *)first;
      (pbVar8 < last &&
      (((bVar2 = *pbVar8, bVar2 - 0x30U < 10 || (bVar2 & 0xffffffdf) - 0x41 < 0x1a || (bVar2 == 0x5f)
        ) || (bVar2 == 0x24)))); pbVar8 = pbVar8 + 1) {
    if (uVar7 + 1 < 0x60) {
      local_a0[uVar7] = bVar2;
      uVar7 = uVar7 + 1;
    }
  }
  local_a0[uVar7] = 0;
  iVar3 = recovered_10001228(local_a0,(byte *)url);
  if ((iVar3 != 0) ||
     (pbVar5 = (byte *)recovered_10005088((char *)pbVar8,str_10006aaa), pbVar8 != pbVar5)) {
    return 8;
  }
  lVar4 = recovered_10001204(((uintptr_t)pf_module_state + 0x406U));
  pbVar8 = pbVar8 + lVar4;
  pbVar5 = &DAT_100067c8;
  if (html != (char *)0x0) {
    pbVar5 = (byte *)html;
  }
  pbVar6 = (byte *)recovered_10005088((char *)pbVar8,str_10006afd);
  if (pbVar8 == pbVar6) {
    abStack_2a0[0] = 0;
    recovered_10005b84((char *)abStack_2a0,(uint)pbVar5,first);
  }
  else {
    pbVar6 = (byte *)recovered_10005088((char *)pbVar8,str_10006b0c);
    if (pbVar8 != pbVar6) goto LAB_10005d9c;
    abStack_2a0[0] = 0;
    uVar7 = recovered_10001204((long)abStack_2a0);
    while( true ) {
      bVar2 = *pbVar5;
      if (bVar2 == 0) break;
      if (uVar7 + 1 < 0x200) {
        bVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          bVar1 = bVar2;
        }
        abStack_2a0[uVar7] = bVar1;
        abStack_2a0[uVar7 + 1] = 0;
        uVar7 = uVar7 + 1;
      }
      pbVar5 = pbVar5 + 1;
    }
  }
  pbVar5 = abStack_2a0;
LAB_10005d9c:
  if (depth == 0) {
    recovered_10005f14(output,capacity,(char *)pbVar5);
  }
  else {
    recovered_10005dec(output,capacity,(char *)pbVar5);
  }
  return 0x10;
}

#undef DAT_100067c8
#undef str_10006aaa
#undef str_10006afd
#undef str_10006b0c
#undef local_a0
#undef abStack_2a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dbc
 */

uint recovered_10005dbc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 - 0x37;
  if (5 < param_1 - 0x41U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x61U < 6) {
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}


#undef str_10006aec
#define str_10006aec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dec
 */

uint recovered_10005dec(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;

  pcVar3 = output;
  if (text != (char *)0x0) {
    if (output == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)recovered_10001204((long)output);
    }
    bVar1 = output != (char *)0x0;
    bVar2 = capacity != 0;
    pcVar4 = (char *)(ulong)capacity;
    while( true ) {
      bVar5 = *text;
      if (bVar5 == 0) break;
      uVar6 = (uint)bVar5;
      if ((uVar6 - 0x30 < 10 || (bVar5 & 0xffffffdf) - 0x41 < 0x1a) || (uVar6 - 0x2d < 2)) {
LAB_10014c8c:
        pcVar7 = pcVar3 + 1;
        if (pcVar7 < pcVar4 && (bVar1 && bVar2)) {
LAB_10005e88:
          output[(long)pcVar3] = bVar5;
          output[(long)pcVar7] = '\0';
          pcVar3 = pcVar7;
        }
      }
      else if (uVar6 == 0x20) {
        pcVar7 = pcVar3 + 1;
        if (pcVar7 < pcVar4 && (bVar1 && bVar2)) {
          bVar5 = 0x2b;
          goto LAB_10005e88;
        }
      }
      else {
        if ((uVar6 == 0x7e) || (bVar5 == 0x5f)) goto LAB_10014c8c;
        if (bVar1 && bVar2) {
          pcVar7 = pcVar3 + 1;
          if (pcVar7 < pcVar4) {
            output[(long)pcVar3] = '%';
            output[(long)pcVar7] = '\0';
            bVar5 = *text;
            pcVar3 = pcVar7;
          }
          pcVar7 = pcVar3 + 1;
          if (pcVar7 < pcVar4) {
            output[(long)pcVar3] = str_10006aec[bVar5 >> 4];
            output[(long)pcVar7] = '\0';
            bVar5 = *text;
            pcVar3 = pcVar7;
          }
          pcVar7 = pcVar3 + 1;
          if (pcVar7 < pcVar4) {
            bVar5 = str_10006aec[(ulong)bVar5 & 0xf];
            goto LAB_10005e88;
          }
        }
      }
      text = text + 1;
    }
  }
  return (uint)pcVar3;
}

#undef str_10006aec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f14
 */

uint recovered_10005f14(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = output;
  if ((output != (char *)0x0) && (text != (char *)0x0)) {
    pcVar2 = (char *)recovered_10001204((long)output);
    for (; *text != '\0'; text = text + 1) {
      if ((capacity != 0) && (pcVar1 = pcVar2 + 1, pcVar1 < (char *)(ulong)capacity)) {
        output[(long)pcVar2] = *text;
        output[(long)pcVar1] = '\0';
        pcVar2 = pcVar1;
      }
    }
  }
  return (uint)pcVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f7c
 */

uint recovered_10005f7c(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;

  if ((((output != (char *)0x0) && (capacity != 0)) && (first <= last)) &&
     ((first != (char *)0x0 && (last != (char *)0x0)))) {
    uVar5 = 0;
LAB_10005ff0:
    do {
      pbVar12 = (byte *)first;
      if (last <= pbVar12) {
        return uVar5;
      }
      while( true ) {
        if (last <= pbVar12) {
          return uVar5;
        }
        bVar2 = *pbVar12;
        if (0x2b < bVar2) goto LAB_100060a4;
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x80100002600U) == 0) break;
        pbVar12 = pbVar12 + 1;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x8400000000U) == 0) {
LAB_100060a4:
        if (bVar2 == 0x60) {
          do {
            lVar9 = 1;
LAB_100060b0:
            lVar8 = lVar9;
            first = (char *)(pbVar12 + lVar8);
            if (last <= first) {
LAB_10014ce0:
              uVar5 = recovered_10005534(output,capacity,(char *)(pbVar12 + 1),first);
              if ((uVar5 == 0) && (lVar8 != 1)) {
                return 0;
              }
              if (first < last) {
                first = first + 1;
              }
              uVar5 = 1;
              goto LAB_10005ff0;
            }
            bVar2 = pbVar12[lVar8];
            lVar9 = lVar8 + 1;
            pbVar6 = pbVar12 + lVar9;
            if (bVar2 == 0x5c && pbVar6 < last) {
              lVar9 = lVar8 + 2;
              goto LAB_100060b0;
            }
            if (bVar2 != 0x24) {
              if (bVar2 == 0x60) goto LAB_10014ce0;
              goto LAB_100060b0;
            }
            if ((last <= pbVar6) || (*pbVar6 != 0x7b)) goto LAB_100060b0;
            pbVar6 = (byte *)recovered_1000577c(first + 2,last);
            if (pbVar6 == (byte *)0x0) {
              return 0;
            }
            recovered_10005534(output,capacity,(char *)(pbVar12 + 1),first);
            uVar5 = recovered_10005f7c(output,capacity,first + 2,(char *)pbVar6);
            pbVar12 = pbVar6;
            if (uVar5 == 0) {
              return 0;
            }
          } while( true );
        }
        lVar9 = 4;
        for (first = (char *)pbVar12; (first < last && (1 < (byte)*first - 0x2b)); first = first + 1
            ) {
          lVar9 = lVar9 + -1;
        }
        for (; (pbVar12 < first &&
               (*pbVar12 < 0x21 && (1L << ((ulong)*pbVar12 & 0x3f) & 0x100002600U) != 0));
            pbVar12 = pbVar12 + 1) {
          lVar9 = lVar9 + 1;
        }
        pbVar6 = (byte *)first;
        while( true ) {
          if (pbVar6 <= pbVar12) {
            return 0;
          }
          bVar2 = pbVar6[-1];
          if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          lVar9 = lVar9 + 1;
          pbVar6 = pbVar6 + -1;
        }
        pbVar10 = pbVar12;
        if (lVar9 == 0) {
          iVar4 = recovered_10003424(pbVar12,(byte *)((uintptr_t)pf_module_state + 0x488U),4);
          uVar5 = 1;
          if (iVar4 == 0) goto LAB_10005ff0;
        }
        while (pbVar10 < pbVar6) {
          pbVar11 = pbVar10 + 1;
          bVar2 = *pbVar10;
          pbVar10 = pbVar11;
          if (((bVar2 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
             ((bVar2 != 0x2b && bVar2 - 0x3a < 0xfffffff6) && bVar2 - 0x2f < 0xfffffffe)) {
            return 0;
          }
        }
        uVar7 = recovered_10001204((long)output);
        for (; pbVar12 < pbVar6; pbVar12 = pbVar12 + 1) {
          uVar1 = uVar7 + 1;
          if (uVar1 < capacity) {
            output[uVar7] = *pbVar12;
            output[uVar1] = '\0';
            uVar7 = uVar1;
          }
        }
        uVar5 = 1;
        goto LAB_10005ff0;
      }
      pbVar6 = pbVar12 + 1;
      do {
        while( true ) {
          first = (char *)pbVar6;
          if (last <= first) goto LAB_10006070;
          if (*first != 0x5c || last <= first + 1) break;
          pbVar6 = (byte *)(first + 2);
        }
        pbVar6 = (byte *)(first + 1);
      } while (*first != bVar2);
LAB_10006070:
      uVar3 = recovered_10005534(output,capacity,(char *)(pbVar12 + 1),first);
      if (first < last) {
        first = first + 1;
      }
      uVar5 = 1;
    } while (uVar3 != 0);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e0
 */

uint recovered_100062e0(char *output,uint capacity,int character)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = output;
  if ((output != (char *)0x0) && (capacity != 0)) {
    pcVar1 = (char *)recovered_10001204((long)output);
    if (pcVar1 + 1 < (char *)(ulong)capacity) {
      output[(long)pcVar1] = (char)character;
      output[(long)(pcVar1 + 1)] = '\0';
    }
  }
  return (uint)pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000632c
 */

char * recovered_1000632c(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar5 = 0;
  iVar3 = 0;
  iVar4 = 0;
  do {
    for (; ((cVar1 = *first, cVar1 != '\"' && (cVar1 != '\'')) && (cVar1 != '`')); first = first + 1
        ) {
      if (cVar1 == '\0') {
        return first;
      }
      if (cVar1 == '(') {
        iVar5 = iVar5 + 1;
      }
      else if (cVar1 == ')' && 0 < iVar5) {
        iVar5 = iVar5 + -1;
      }
      else if (cVar1 == '[') {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == ']' && 0 < iVar3) {
        iVar3 = iVar3 + -1;
      }
      else if (cVar1 == '{') {
        iVar4 = iVar4 + 1;
      }
      else if (cVar1 == '}' && 0 < iVar4) {
        iVar4 = iVar4 + -1;
      }
      else if ((((cVar1 == '\n') || (cVar1 == ';')) || (cVar1 == '\r')) && (iVar5 == 0)) {
        if (iVar3 == 0 && iVar4 == 0) {
          return first;
        }
        iVar5 = 0;
      }
    }
    first = first + 1;
LAB_1000635c:
    do {
      cVar2 = *first;
      if (cVar2 == '\\') {
        if (first[1] != '\0') {
          first = first + 2;
          goto LAB_1000635c;
        }
      }
      else if (cVar2 == '\0') break;
      first = first + 1;
    } while (cVar2 != cVar1);
  } while( true );
}


#define acStack_460 (*(char (*)[1024])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006434
 */

uint recovered_10006434(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  char *text;
  char *pcVar5;

  pcVar5 = acStack_460;
  acStack_460[0] = '\0';
  uVar3 = recovered_10005f7c(acStack_460,0x400,first,last);
  uVar4 = (ulong)uVar3;
  if (uVar3 == 0) {
LAB_10006520:
    return (uint)uVar4;
  }
  if (output == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = recovered_10001204((long)output);
  }
  do {
    cVar2 = *pcVar5;
    if (cVar2 == '&') {
      text = (char *)((uintptr_t)pf_module_state + 0x4e4U);
LAB_10006504:
      recovered_10005f14(output,capacity,text);
      if (output == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = recovered_10001204((long)output);
      }
    }
    else {
      if (cVar2 == '<') {
        text = (char *)((uintptr_t)pf_module_state + 0x4eaU);
        goto LAB_10006504;
      }
      if (cVar2 == '>') {
        text = (char *)((uintptr_t)pf_module_state + 0x4efU);
        goto LAB_10006504;
      }
      if (cVar2 == '\0') goto LAB_10006520;
      if ((output != (char *)0x0 && capacity != 0) && (uVar1 = uVar4 + 1, uVar1 < capacity)) {
        output[uVar4] = cVar2;
        output[uVar1] = '\0';
        uVar4 = uVar1;
      }
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
}

#undef acStack_460
