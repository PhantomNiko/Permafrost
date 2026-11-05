/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54dcU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
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
#define auStack_458 (*(ulong (*)[130])(frame + 16))
#define uStack_48 (*(ulong *)(frame + 1056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005b8(void)

{
  unsigned char frame[1160] = {0};

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
    recovered_10001cd8(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_1000c0e8 == 0) {
    uVar4 = _DAT_40010088 & 0xfffffff0;
    if (_DAT_40010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300028 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10001cd8(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  DAT_1000c0e0 = 1;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
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

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(byte *)(((uintptr_t)pf_module_state + 0x54dcU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
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
#define local_48 (*(ulong *)(frame + 1056))
#define auStack_458 (*(ulong (*)[130])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005c4(void)

{
  unsigned char frame[1160] = {0};

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
      recovered_10001cd8(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c0e8 == 0) {
      uVar4 = _DAT_40010088 & 0xfffffff0;
      if (_DAT_40010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300028 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10001cd8(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    DAT_1000c0e0 = 1;
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
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

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000082c
 */

ulong recovered_1000082c(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005c4();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000878
 */

long recovered_10000878(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c4();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_1000c0e8

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008b8
 */

ulong recovered_100008b8(void)

{
  unsigned char frame[64] = {0};

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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f4
 */

long recovered_100008f4(void)

{
  unsigned char frame[64] = {0};

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
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000924
 */

ulong * recovered_10000924(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;

  if (param_1 != 0) {
    recovered_100005c4();
    uVar1 = param_1 + 0xfU & 0xfffffffffffffff0;
    for (puVar2 = &DAT_1000c0e8; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
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

#undef DAT_1000c0e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009b8
 */

ulong recovered_100009b8(ulong param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009fc
 */

ulong recovered_100009fc(ulong param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a48
 */

long recovered_10000a48(long param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a98
 */

/* WARNING: Removing unreachable block (ram,0x10000ae8) */

void recovered_10000a98(ulong param_1,ulong param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aa0
 */

ulong recovered_10000aa0(ulong param_1,ulong param_2,long *param_3)

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


#define uStack_18 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b00
 */

undefined8 recovered_10000b00(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


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
  lVar4 = recovered_10000aa0(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b60
 */

long recovered_10000b60(long param_1,long param_2)

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
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb4
 */

int recovered_10000bb4(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef _DAT_4001084c
#define _DAT_4001084c (*(uint *)(0x4001084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000bc0(ulong size)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  void *pvVar2;

  bVar1 = recovered_10001d30(0x4c);
  if ((bVar1) && (_DAT_4001084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)(ulong)_DAT_4001084c)(size);
    return pvVar2;
  }
  return (void *)0x0;
}

#undef DAT_4001084c
#undef _DAT_4001084c

#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000c04(void *buffer)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_10001d30(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(buffer);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

#undef DAT_40010854
#define DAT_40010854 (*(uint8_t *)(0x40010854U))
#undef _DAT_40010854
#define _DAT_40010854 (*(uint *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c48
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000c48(void *buffer,ulong size)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  void *pvVar2;

  bVar1 = recovered_10001d30(0x54);
  if ((bVar1) && (_DAT_40010854 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)(ulong)_DAT_40010854)(buffer,size);
    return pvVar2;
  }
  return (void *)0x0;
}

#undef DAT_40010854
#undef _DAT_40010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c94
 */

void * recovered_10000c94(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb4
 */

void * recovered_10000cb4(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if ((out != data) && (size != 0)) {
    puVar1 = out;
    if (out < data) {
      for (; size != 0; size = size - 1) {
        *puVar1 = *(undefined1 *)data;
        puVar1 = puVar1 + 1;
        data = (undefined1 *)((long)data + 1);
      }
    }
    else {
      for (; size != 0; size = size - 1) {
        *(undefined1 *)((long)out + (size - 1)) = *(undefined1 *)((long)data + (size - 1));
      }
    }
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

void * recovered_10000d04(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d20
 */

void recovered_10000d20(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

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
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d48
 */

int recovered_10000d48(void *left,void *right,ulong size)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;

  do {
    if (size == 0) {
      return 0;
    }
    bVar1 = *(byte *)left;
    bVar2 = *(byte *)right;
    size = size - 1;
    left = (byte *)((long)left + 1);
    right = (byte *)((long)right + 1);
  } while ((uint)bVar1 - (uint)bVar2 == 0);
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d70
 */

bool recovered_10000d70(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d80
 */

bool recovered_10000d80(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

bool recovered_10000d90(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da4
 */

bool recovered_10000da4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

bool recovered_10000dc0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd0
 */

bool recovered_10000dd0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de0
 */

int recovered_10000de0(int param_1)

{
  unsigned char frame[64] = {0};

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
  unsigned char frame[64] = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e2c
 */

int recovered_10000e2c(char *left,char *right)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e54
 */

int recovered_10000e54(char *left,char *right)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e58
 */

void recovered_10000e58(long param_1,long param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e70
 */

void recovered_10000e70(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000e08(param_1);
    out = recovered_10000bc0(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000c94(out,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eac
 */

char * recovered_10000eac(char *param_1,char param_2)

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
 * Address: 0x10000ed4
 */

long recovered_10000ed4(long param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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
  unsigned char frame[64] = {0};

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


#undef DAT_10006fb8
#define DAT_10006fb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f98
 */

undefined * recovered_10000f98(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10006fb8;
}

#undef DAT_10006fb8

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x53fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa4
 */

undefined ** recovered_10000fa4(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fb0
 */

undefined8 recovered_10000fb0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

uint128 recovered_10001000(double param_1,int *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001074
 */

double recovered_10001074(double left,double right)

{
  unsigned char frame[64] = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f8
 */

double recovered_100010f8(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001114
 */

double recovered_10001114(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001140
 */

double recovered_10001140(double value)

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


#undef DAT_10006c08
#define DAT_10006c08 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000117c
 */

double recovered_1000117c(double value)

{
  unsigned char frame[64] = {0};

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
    return (double)iVar1 * DAT_10006c08 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_10006c08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001228
 */

long recovered_10001228(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10006c10
#define DAT_10006c10 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000123c
 */

double recovered_1000123c(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10001290(value);
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006c10);
}

#undef DAT_10006c10

#undef DAT_10006c18
#define DAT_10006c18 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006c20
#define DAT_10006c20 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10006c28
#define DAT_10006c28 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10006c30
#define DAT_10006c30 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001290
 */

double recovered_10001290(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_10006c18 < param_1; param_1 = param_1 + DAT_10006c30) {
  }
  for (; param_1 < DAT_10006c20; param_1 = param_1 + DAT_10006c28) {
  }
  return param_1;
}

#undef DAT_10006c18
#undef DAT_10006c20
#undef DAT_10006c28
#undef DAT_10006c30

#undef DAT_10006c38
#define DAT_10006c38 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012d4
 */

double recovered_100012d4(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001290(value);
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10006c38;
}

#undef DAT_10006c38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

double recovered_10001320(double value)

{
  unsigned char frame[64] = {0};

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

float recovered_10001330(float left,float right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001364
 */

float recovered_10001364(float param_1)

{
  unsigned char frame[64] = {0};

  int *in_x0;
  uint128 auVar1;

  auVar1 = recovered_10001000((double)param_1,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000137c
 */

float recovered_1000137c(float param_1)

{
  unsigned char frame[64] = {0};

  uint in_w0;
  double dVar1;

  dVar1 = recovered_10000fcc((double)param_1,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001394
 */

float recovered_10001394(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001098((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b0
 */

float recovered_100013b0(float value)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100013d4
 */

float recovered_100013d4(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001114((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ec
 */

double recovered_100013ec(double value)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001414
 */

float recovered_10001414(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100013ec((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000142c
 */

float recovered_1000142c(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001140((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001444
 */

float recovered_10001444(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000117c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000145c
 */

long recovered_1000145c(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001470
 */

float recovered_10001470(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000123c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001488
 */

float recovered_10001488(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012d4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a0
 */

float recovered_100014a0(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

long recovered_100014b0(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001548;
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
      goto LAB_10001574;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001574;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001574;
    }
LAB_10001548:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001574:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_100015b4((uint)*pbVar4);
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
 * Address: 0x100015b4
 */

uint recovered_100015b4(int param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100015e4
 */

long recovered_100015e4(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
      goto LAB_100016c8;
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
      goto LAB_100016c8;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100016c8;
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
LAB_100016c8:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_100015b4((uint)*pbVar6);
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
 * Address: 0x10001708
 */

double recovered_10001708(char *text,char **end)

{
  unsigned char frame[64] = {0};

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
    uVar4 = bVar3 - 0x30;
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
      if (9 < bVar3 - 0x30) break;
      dVar13 = (double)(bVar3 - 0x30) + dVar13 * 10.0;
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
      for (; *pbVar10 - 0x30 < 10; pbVar10 = pbVar10 + 1) {
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
 * Address: 0x10001898
 */

float recovered_10001898(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001708(text,end);
  return (float)dVar1;
}


#define local_8c (*(int *)(frame + 16))
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
#define pdStack_78 (*(double * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018b0
 */

int recovered_100018b0(char *out,ulong capacity,char *format,void *arguments)

{
  unsigned char frame[188] = {0};

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
  pdStack_78 = arguments;
  if (capacity != 0) {
    *out = '\0';
  }
LAB_10001914:
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
LAB_100019a0:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001a38;
      case 100:
      case 0x69:
LAB_100019f0:
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
LAB_10018258:
        if (local_88 < 2) goto LAB_1000196c;
        *local_80 = 0x3f;
        goto LAB_10001968;
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
        recovered_10001c10((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
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
        goto LAB_10001970;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x100019bc;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001bc0((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x3e2U));
        goto code_r0x10001b2c;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001bc0((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_10001970;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001b2c:
        uVar4 = 0x10;
        goto code_r0x10001b44;
      default:
        if (uVar5 == 0x49) goto LAB_100019f0;
        if (uVar5 != 0x58) goto LAB_10018258;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001b48;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001b44:
      iVar7 = 0;
LAB_10001b48:
      recovered_10001c10((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_10001970;
    }
    if (local_88 < 2) goto LAB_1000196c;
    *local_80 = 0x25;
    goto LAB_10001968;
  }
  if (bVar1 == 0) {
    if (capacity != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_10001968;
  }
  goto LAB_1000196c;
code_r0x100019bc:
  format = format + 1;
  uVar5 = (uint)(byte)*format;
  goto LAB_100019a0;
code_r0x10001a38:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_10001968:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_1000196c:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_10001970:
  format = format + 1;
  goto LAB_10001914;
}

#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b84
 */

void recovered_10001b84(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef str_10006fbd
#define str_10006fbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bc0
 */

void recovered_10001bc0(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10006fbd;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001b84(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10006fbd

#undef str_10006fc4
#define str_10006fc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c0U)))
#undef str_10006fd5
#define str_10006fd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d1U)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

void recovered_10001c10(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_10006fc4;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_10006fd5;
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
    recovered_10001b84(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_10006fc4
#undef str_10006fd5
#undef local_60

#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb0
 */

int recovered_10001cb0(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100018b0(out,capacity,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd8
 */

void recovered_10001cd8(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] = {0};

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
      puVar3 = (ulong *)&DAT_1000c0e8;
      if (DAT_1000c0e8 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_1000c0e8

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
 * Address: 0x10001d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001d30(int param_1)

{
  unsigned char frame[64] = {0};

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

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e68
 */

void recovered_10001e68(char *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c0f8 != 0) {
          DAT_1000c0f8 = DAT_1000c0f8 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f20(1);
        }
        else {
          if (DAT_1000c0f8 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c0f8 == -2) {
            recovered_10001f20(0);
          }
          pcVar1 = &DAT_1000c100 + DAT_1000c0f8;
          DAT_1000c0f8 = DAT_1000c0f8 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c0f8
#undef DAT_1000c100

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f20(int param_1)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c0f8 != 0) || (param_1 != 0)) {
    if (DAT_1000c0f8 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000c94(local_230,&DAT_1000c100,DAT_1000c0f8);
      uVar2 = DAT_1000c0f8;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002c60(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_1000c0f8 = 0;
  }
  return;
}

#undef DAT_1000c0f8
#undef DAT_1000c100
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001fac(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c0f8 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000c94(auStack_230,&DAT_1000c100,DAT_1000c0f8);
    uVar2 = DAT_1000c0f8;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002c60(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_1000c0f8 = 0;
  return;
}

#undef DAT_1000c0f8
#undef DAT_1000c100
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fb4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001fb4(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c0f8 != 0) {
    if (DAT_1000c0f8 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000c94(auStack_230,&DAT_1000c100,DAT_1000c0f8);
      uVar2 = DAT_1000c0f8;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002c60(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_1000c0f8 = 0;
  }
  return;
}

#undef DAT_1000c0f8
#undef DAT_1000c100
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10006fe9
#define DAT_10006fe9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e5U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fbc
 */

void recovered_10001fbc(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_10006fe9;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001cb0(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001e68(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10006fe9
#undef acStack_160

#undef DAT_100070d3
#define DAT_100070d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cfU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
#undef str_10006fec
#define str_10006fec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e8U)))
#undef str_1000700f
#define str_1000700f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10007048
#define str_10007048 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x444U)))
#undef str_1000707d
#define str_1000707d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x479U)))
#undef str_100070a3
#define str_100070a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002020
 */

/* WARNING: Removing unreachable block (ram,0x1000209c) */

void recovered_10002020(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002074(str_10006fec);
  recovered_10002074(str_1000700f);
  recovered_10002074(str_10007048);
  recovered_10002074(str_1000707d);
  recovered_10002074(str_100070a3);
  pcVar4 = &DAT_100070d3;
  for (uVar3 = recovered_10000e08(&DAT_100070d3); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c0f8 != 0) {
        DAT_1000c0f8 = DAT_1000c0f8 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f20(1);
      }
      else {
        if (DAT_1000c0f8 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c0f8 == -2) {
          recovered_10001f20(0);
        }
        pcVar1 = &DAT_1000c100 + DAT_1000c0f8;
        DAT_1000c0f8 = DAT_1000c0f8 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_100070d3
#undef DAT_1000c0f8
#undef DAT_1000c100
#undef str_10006fec
#undef str_1000700f
#undef str_10007048
#undef str_1000707d
#undef str_100070a3

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002074
 */

void recovered_10002074(char *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10000e08(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c0f8 != 0) {
          DAT_1000c0f8 = DAT_1000c0f8 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f20(1);
        }
        else {
          if (DAT_1000c0f8 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c0f8 == -2) {
            recovered_10001f20(0);
          }
          pcVar1 = &DAT_1000c100 + DAT_1000c0f8;
          DAT_1000c0f8 = DAT_1000c0f8 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c0f8
#undef DAT_1000c100

#undef DAT_100070d3
#define DAT_100070d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cfU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54f4U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54fcU)))
#undef str_100070d6
#define str_100070d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a0
 */

/* WARNING: Removing unreachable block (ram,0x1000209c) */

void recovered_100020a0(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002074(str_100070d6);
  pcVar4 = &DAT_100070d3;
  for (uVar3 = recovered_10000e08(&DAT_100070d3); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c0f8 != 0) {
        DAT_1000c0f8 = DAT_1000c0f8 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f20(1);
      }
      else {
        if (DAT_1000c0f8 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c0f8 == -2) {
          recovered_10001f20(0);
        }
        pcVar1 = &DAT_1000c100 + DAT_1000c0f8;
        DAT_1000c0f8 = DAT_1000c0f8 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_100070d3
#undef DAT_1000c0f8
#undef DAT_1000c100
#undef str_100070d6

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x40010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100020c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10001fb4();
    bVar2 = recovered_10002c60(0x44);
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
 * Address: 0x1000213c
 */

undefined8 recovered_1000213c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002140
 */

void recovered_10002140(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002144
 */

undefined8 recovered_10002144(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10006fe9
#define DAT_10006fe9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e5U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef str_1000716a
#define str_1000716a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x566U)))
#undef str_10007177
#define str_10007177 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
#undef str_10007185
#define str_10007185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x581U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000214c
 */

undefined4 * recovered_1000214c(char *param_1,long param_2)

{
  unsigned char frame[124] = {0};

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
  iVar2 = recovered_10000e2c(param_1,str_1000716a);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e2c(param_1,str_10007177);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e2c(param_1,str_10007185);
      if (iVar3 != 0) {
        puVar4 = recovered_10000bc0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
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
        recovered_10001cb0((char *)(puVar4 + 1),0xf1,&DAT_10006fe9);
        recovered_10000d04(&uStack_4c,0,0xc);
        uVar6 = recovered_10002388(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002330:
            recovered_10000c04(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000eac((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100023d8((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002330;
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
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d04(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001cb0((char *)(puVar4 + 1),0xf1,&DAT_10006fe9);
  return puVar4;
}

#undef DAT_10006fe9
#undef DAT_1000c058
#undef str_1000716a
#undef str_10007177
#undef str_10007185
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x40010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002388
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002388(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002c60(0x34);
  if ((bVar1) && (_DAT_40010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100023c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010834
#undef _DAT_40010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023d8
 */

undefined8 recovered_100023d8(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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

#undef DAT_10006fe9
#define DAT_10006fe9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e5U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef str_1000716a
#define str_1000716a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x566U)))
#undef str_10007177
#define str_10007177 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
#undef str_10007185
#define str_10007185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x581U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002460
 */

void recovered_10002460(char *param_1,long param_2,int *param_3)

{
  unsigned char frame[124] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_10002494(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return;
  }
  iVar2 = recovered_10000e2c(param_1,str_1000716a);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e2c(param_1,str_10007177);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e2c(param_1,str_10007185);
      if (iVar3 != 0) {
        puVar4 = recovered_10000bc0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return;
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
        recovered_10001cb0((char *)(puVar4 + 1),0xf1,&DAT_10006fe9);
        recovered_10000d04(&uStack_4c,0,0xc);
        uVar6 = recovered_10002388(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002330:
            recovered_10000c04(puVar4);
            return;
          }
        }
        else {
          pcVar5 = recovered_10000eac((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100023d8((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002330;
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
          return;
        }
        return;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_10000bc0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return;
  }
  recovered_10000d04(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001cb0((char *)(puVar4 + 1),0xf1,&DAT_10006fe9);
  return;
}

#undef DAT_10006fe9
#undef DAT_1000c058
#undef str_1000716a
#undef str_10007177
#undef str_10007185
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002494
 */

undefined8 recovered_10002494(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002834(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000c04(*(void **)(param_1 + 0x40));
    }
    recovered_10000c04(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d8
 */

long recovered_100024d8(undefined1 *param_1,long param_2,long param_3,int *param_4)

{
  unsigned char frame[64] = {0};

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
          uVar3 = recovered_10002588(param_4);
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


#undef DAT_10006fbc
#define DAT_10006fbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002588
 */

uint recovered_10002588(int *param_1)

{
  unsigned char frame[64] = {0};

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
LAB_10002620:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100020c4((long)text,0x1fe,&DAT_10006fbc,0);
      if (bVar2) {
        uVar3 = recovered_10000e08(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002620;
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

#undef DAT_10006fbc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000266c
 */

long recovered_1000266c(void *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

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
      recovered_10001e68(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_1000276c;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_100023d8((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000d04((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000c94((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_1000276c;
    }
  }
  param_3 = 0;
LAB_1000276c:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000277c
 */

undefined8 recovered_1000277c(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
        if (param_3 != 2) goto LAB_10002788;
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
LAB_10002788:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

undefined8 recovered_10002810(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002834
 */

undefined8 recovered_10002834(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002a10(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x100028a8
 */

undefined1 recovered_100028a8(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x128);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b4
 */

undefined1 recovered_100028b4(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x129);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c0
 */

void recovered_100028c0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d4
 */

uint recovered_100028d4(uint param_1,long param_2)

{
  unsigned char frame[64] = {0};

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f8
 */

undefined8 recovered_100028f8(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10002930(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_4001083c
#define _DAT_4001083c (*(uint *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002930(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002c60(0x3c);
  if ((bVar1) && (_DAT_4001083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_4001083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_4001083c
#undef _DAT_4001083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#define uStack_28 (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002974
 */

undefined8 recovered_10002974(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000d04(&uStack_2c,0,0xc);
    uVar1 = recovered_10002388(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10002a10(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002930(param_1), (int)uVar1 != 0)) {
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

#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010838
#define _DAT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002c60(0x38);
  if ((bVar1) && (_DAT_40010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010838
#undef _DAT_40010838

#define uStack_3c (*(uint *)(frame + 16))
#define uStack_38 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

undefined8 recovered_10002a70(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000d04(&uStack_3c,0,0xc);
    uVar2 = recovered_10002388(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_10000bc0((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000c94(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10002b10
 */

bool recovered_10002b10(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002a10(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b3c
 */

undefined8 recovered_10002b3c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b40
 */

void recovered_10002b40(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b44
 */

undefined8 recovered_10002b44(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b48
 */

undefined8 recovered_10002b48(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b4c
 */

undefined8 recovered_10002b4c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b50
 */

char * recovered_10002b50(long param_1,char param_2,long param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002b74
 */

int recovered_10002b74(char *left,char *right,ulong size)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  int iVar2;

  while( true ) {
    if (size == 0) {
      return 0;
    }
    bVar1 = *left;
    iVar2 = (uint)bVar1 - (uint)(byte)*right;
    if (iVar2 != 0) break;
    size = size - 1;
    left = left + 1;
    right = right + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


#undef DAT_100070f9
#define DAT_100070f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_100070fc
#define str_100070fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f8U)))
#undef str_10007109
#define str_10007109 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x505U)))
#undef str_10007113
#define str_10007113 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50fU)))
#undef str_10007127
#define str_10007127 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x523U)))
#undef str_10007135
#define str_10007135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x531U)))
#undef str_10007147
#define str_10007147 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x543U)))
#undef str_10007153
#define str_10007153 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54fU)))
#undef str_10007164
#define str_10007164 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba4
 */

char * recovered_10002ba4(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_100070f9;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002bd0_caseD_1;
  case 2:
    return str_100070fc;
  case 5:
    return str_10007109;
  case 9:
    return str_10007113;
  case 0xc:
    return str_10007127;
  case 0xd:
    return str_10007135;
  default:
    if (param_1 == 0x11) {
      return str_10007147;
    }
    if (param_1 == 0x16) {
      return str_10007153;
    }
switchD_10002bd0_caseD_1:
    return str_10007164;
  }
}

#undef DAT_100070f9
#undef str_100070fc
#undef str_10007109
#undef str_10007113
#undef str_10007127
#undef str_10007135
#undef str_10007147
#undef str_10007153
#undef str_10007164

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c44
 */

undefined8 recovered_10002c44(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c48
 */

undefined8 recovered_10002c48(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c4c
 */

void recovered_10002c4c(void)

{
  unsigned char frame[64] = {0};

  DAT_1000c0f0 = DAT_1000c0f0 + 1;
  return;
}

#undef DAT_1000c0f0

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
 * Address: 0x10002c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002c60(int param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002d2c
 */

ulonglong recovered_10002d2c(long param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

                    /* WARNING: Could not recover jumptable at 0x10002d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x48))();
  return uVar1;
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked, returns_twice)) unsigned long recovered_10002d40(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002d6c(unsigned long *context,int value)
{
 __asm__ volatile("cmp w1,#0\ncsinc w1,w1,wzr,ne\nldp x19,x20,[x0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nmov w0,w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002da0
 */

void recovered_10002da0(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10000bac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002db0);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db4
 */

undefined8 recovered_10002db4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dbc
 */

void recovered_10002dbc(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002dcc(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002da0();
}


#undef DAT_1000c300
#define DAT_1000c300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dcc
 */

void recovered_10002dcc(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c300;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c300 = param_1;
  return;
}

#undef DAT_1000c300

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dec
 */

void * recovered_10002dec(ulong size)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002e1c
 */

void * recovered_10002e1c(ulong size)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002e20
 */

void recovered_10002e20(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c04(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e38
 */

void recovered_10002e38(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c04(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e50
 */

void recovered_10002e50(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000c04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e68
 */

void recovered_10002e68(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000c04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e80
 */

undefined8 recovered_10002e80(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e88
 */

uint recovered_10002e88(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e98
 */

void recovered_10002e98(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea8
 */

void recovered_10002ea8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eac
 */

undefined1 * recovered_10002eac(ulong param_1)

{
  unsigned char frame[64] = {0};

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
    recovered_10002da0();
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
 * Address: 0x10002ef4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002ef4(long param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10001d30(0x50);
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
 * Address: 0x10002f04
 */

long recovered_10002f04(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c300
#define DAT_1000c300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56fcU)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f0c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002f0c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c300;
  if (DAT_1000c300 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c300 + 0x10);
    DAT_1000c300 = *(long *)(DAT_1000c300 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_10001d30(0x50);
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

#undef DAT_1000c300
#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f64
 */

void recovered_10002f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002f84((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5704U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f84
 */

void recovered_10002f84(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c308;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10002fe4;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_1000347c((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003090(param_1);
LAB_10002fe4:
                    /* WARNING: Subroutine does not return */
  recovered_10002da0();
}

#undef DAT_1000c308
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c300
#define DAT_1000c300 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x56fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe8
 */

void recovered_10002fe8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c300;
  if (DAT_1000c300 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002da0();
  }
  *(undefined1 *)(DAT_1000c300 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002f84(puVar1);
}

#undef DAT_1000c300

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5704U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003018
 */

void recovered_10003018(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000c308;
  DAT_1000c308 = param_1;
  return;
}

#undef DAT_1000c308

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5704U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000302c
 */

void recovered_1000302c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c308;
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

#undef DAT_1000c308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003058
 */

void recovered_10003058(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002f84(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003064
 */

void recovered_10003064(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002da0();
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5704U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

undefined8 recovered_10003070(undefined8 *param_1)

{
  unsigned char frame[128] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;

  if (DAT_1000c308 != (long *)0x0) {
    DAT_1000c308 = (long *)*DAT_1000c308;
  }
  puVar2 = (undefined8 *)recovered_10003090(param_1);
  plVar3 = DAT_1000c308;
  while( true ) {
    DAT_1000c308 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002da0();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_1000347c((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003124;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003124:
  puVar2 = (undefined8 *)recovered_10002d2c((long)plVar3);
  recovered_10003070(puVar2);
  return 0;
}

#undef DAT_1000c308
#undef uStack_50
#undef uStack_48

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5704U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

undefined8 recovered_10003090(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;

  plVar3 = DAT_1000c308;
  while( true ) {
    DAT_1000c308 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002da0();
    }
    if (plVar3 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_1000347c((long)plVar3,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar3[2] = (long)param_1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003124;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003124:
  puVar2 = (undefined8 *)recovered_10002d2c((long)plVar3);
  recovered_10003070(puVar2);
  return 0;
}

#undef DAT_1000c308
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000312c
 */

undefined8 recovered_1000312c(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

  recovered_10003070(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003138
 */

undefined8 recovered_10003138(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003140
 */

void recovered_10003140(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002da0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000314c
 */

long recovered_1000314c(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_1000318c(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000318c
 */

bool recovered_1000318c(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10003210:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003210;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003210;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x54acU)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003218
 */

void recovered_10003218(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000321c
 */

undefined8 recovered_1000321c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003224
 */

bool recovered_10003224(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003234
 */

bool recovered_10003234(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000326c
 */

bool recovered_1000326c(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003288
 */

bool recovered_10003288(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a0
 */

bool recovered_100032a0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b8
 */

bool recovered_100032b8(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d0
 */

bool recovered_100032d0(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e8
 */

double recovered_100032e8(double value)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10003334
 */

long recovered_10003334(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003374;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003374:
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
      goto LAB_100033f8;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100033f8;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100033f8;
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
LAB_100033f8:
  pbVar6 = pbVar6 + -1;
  lVar7 = 1;
  lVar1 = 0;
  do {
    lVar10 = lVar1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30;
    uVar9 = (uint)bVar3;
    uVar8 = uVar9 - 0x37;
    if (0x19 < uVar9 - 0x41) {
      uVar8 = 0xffffffff;
    }
    if (bVar3 - 0x61 < 0x1a) {
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
 * Address: 0x10003478
 */

long recovered_10003478(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003374;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003374:
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
      goto LAB_100033f8;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100033f8;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100033f8;
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
LAB_100033f8:
  pbVar6 = pbVar6 + -1;
  lVar7 = 1;
  lVar1 = 0;
  do {
    lVar10 = lVar1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30;
    uVar9 = (uint)bVar3;
    uVar8 = uVar9 - 0x37;
    if (0x19 < uVar9 - 0x41) {
      uVar8 = 0xffffffff;
    }
    if (bVar3 - 0x61 < 0x1a) {
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

#undef DAT_10006c78
#define DAT_10006c78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000347c
 */

undefined8 recovered_1000347c(long param_1,long *param_2,undefined2 *param_3)

{
  unsigned char frame[160] = {0};

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
      recovered_10003654((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10003748(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10003748(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10003748(&local_68);
        uVar5 = recovered_10003748(&local_68);
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
            uVar5 = recovered_100037ac(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_100037ac(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10006c78 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10003654((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_1000318c(param_2,(long *)puVar6);
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

#undef DAT_10006c78
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003654
 */

ulong * recovered_10003654(uint param_1,long *param_2)

{
  unsigned char frame[64] = {0};

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
    puVar1 = (ulong *)recovered_10003780(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_1000370c;
  case 1:
    puVar1 = (ulong *)recovered_10003748(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10003780(pbVar5,2);
    goto LAB_10003708;
  case 3:
    puVar1 = (ulong *)recovered_10003780(pbVar5,4);
    goto LAB_100036d0;
  default:
    goto switchD_1000369c_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_100037ac(param_2);
    break;
  case 10:
    uVar3 = recovered_10003780(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10003708:
    pbVar4 = pbVar5 + 2;
LAB_1000370c:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10003780(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_100036d0:
    pbVar4 = pbVar5 + 4;
    goto LAB_1000370c;
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
switchD_1000369c_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003748
 */

ulong recovered_10003748(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10003780
 */

ulong recovered_10003780(byte *param_1,long param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100037ac
 */

ulong recovered_100037ac(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

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


#undef DAT_10006cf3
#define DAT_10006cf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_10006f20
#define DAT_10006f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31cU)))
#undef DAT_10006f3c
#define DAT_10006f3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x338U)))
#undef DAT_10006f58
#define DAT_10006f58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_10006f74
#define DAT_10006f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x370U)))
#undef DAT_10007196
#define DAT_10007196 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x592U)))
#undef DAT_1000719b
#define DAT_1000719b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x597U)))
#undef DAT_100071a0
#define DAT_100071a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59cU)))
#undef DAT_100071a5
#define DAT_100071a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a1U)))
#undef DAT_100071aa
#define DAT_100071aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6U)))
#define pvStack_208 (*(void * *)(frame + 16))
#define uStack_200 (*(undefined8 *)(frame + 24))
#define uStack_1f8 (*(undefined8 *)(frame + 32))
#define pvStack_1f0 (*(void * *)(frame + 40))
#define uStack_1e8 (*(ulong *)(frame + 48))
#define uStack_1e0 (*(undefined8 *)(frame + 56))
#define uStack_1d8 (*(undefined8 *)(frame + 64))
#define uStack_1d0 (*(undefined8 *)(frame + 72))
#define uStack_1c8 (*(undefined2 *)(frame + 80))
#define uStack_1b8 (*(undefined8 *)(frame + 96))
#define uStack_1a8 (*(undefined8 *)(frame + 112))
#define lStack_198 (*(long *)(frame + 128))
#define uStack_188 (*(undefined8 *)(frame + 144))
#define uStack_170 (*(undefined8 *)(frame + 168))
#define uStack_158 (*(ulong *)(frame + 192))
#define pvStack_128 (*(void * *)(frame + 240))
#define uStack_108 (*(ulong *)(frame + 272))
#define lStack_100 (*(long *)(frame + 280))
#define uStack_f8 (*(undefined8 *)(frame + 288))
#define uStack_e0 (*(undefined8 *)(frame + 312))
#define uStack_c8 (*(ulong *)(frame + 336))
#define pbStack_b8 (*(byte * *)(frame + 352))
#define uStack_b0 (*(undefined8 *)(frame + 360))
#define uStack_a8 (*(undefined8 *)(frame + 368))
#define pbStack_a0 (*(byte * *)(frame + 376))
#define uStack_98 (*(undefined8 *)(frame + 384))
#define uStack_90 (*(undefined8 *)(frame + 392))
#define pbStack_88 (*(byte * *)(frame + 400))
#define uStack_80 (*(ulong *)(frame + 408))
#define local_1c0 (*(undefined8 *)(frame + 88))
#define local_1b0 (*(ulong *)(frame + 104))
#define local_1a0 (*(long *)(frame + 120))
#define local_190 (*(ulong *)(frame + 136))
#define local_180 (*(ushort * *)(frame + 152))
#define local_178 (*(ulong *)(frame + 160))
#define local_168 (*(void * *)(frame + 176))
#define local_160 (*(ulong *)(frame + 184))
#define local_148 (*(void * *)(frame + 208))
#define local_140 (*(ulong *)(frame + 216))
#define local_130 (*(void * *)(frame + 232))
#define local_120 (*(undefined8 *)(frame + 248))
#define local_118 (*(ulong *)(frame + 256))
#define local_110 (*(long *)(frame + 264))
#define local_f0 (*(undefined8 *)(frame + 296))
#define local_e8 (*(undefined8 *)(frame + 304))
#define local_d8 (*(void * *)(frame + 320))
#define local_d0 (*(ulong *)(frame + 328))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003824
 */

uchar recovered_10003824(void *data,ulong length,void *image)

{
  unsigned char frame[568] = {0};

  byte *pbVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  char cVar30;
  byte bVar31;
  ulong uVar32;
  uint uVar33;
  void *pvVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  uchar uVar38;
  long lVar39;

  pvStack_128 = (void *)0x0;
  local_130 = (void *)0x0;
  local_120 = 0;
  local_118 = 0;
  recovered_100048dc(image,&local_130);
  local_120 = 0;
  recovered_10002e20(pvStack_128);
  uVar38 = '\0';
  if ((data != (void *)0x0) && (length != 0)) {
    recovered_10006948(&local_148,data,(undefined1 *)((long)data + length));
    uStack_188 = 0;
    local_190 = 0;
    uStack_170 = 0;
    local_178 = 0;
    local_180 = (ushort *)0x0;
    local_168 = (void *)0x0;
    uStack_158 = 0;
    local_160 = 0;
    pvStack_128 = (void *)0x0;
    local_130 = (void *)0x0;
    local_120 = 0;
    local_118 = local_118 & 0xffff000000000000;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    lStack_100 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_d8 = (void *)0x0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_1a0 = 0;
    lStack_198 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = local_118;
    local_1b0 = 0;
    recovered_10004908(&lStack_198,&uStack_108);
    recovered_10004908(&local_180,&local_f0);
    local_160 = 0;
    recovered_10002e20(local_168);
    local_168 = local_d8;
    uStack_158 = uStack_c8;
    local_160 = local_d0;
    local_d8 = (void *)0x0;
    uStack_c8 = 0;
    local_d0 = 0;
    recovered_10004958((long)&local_130);
    if ((7 < local_140) && (iVar22 = recovered_10000d48(local_148,&DAT_10006cf3,8), iVar22 == 0)) {
      lVar39 = 8;
LAB_10003984:
      while( true ) {
        uVar32 = local_140;
        pvVar34 = local_148;
        if (local_140 < lVar39 + 0xcU) break;
        puVar5 = (uint *)((long)local_148 + lVar39);
        uVar23 = recovered_10004fcc(puVar5);
        lVar39 = lVar39 + 8;
        uVar36 = (ulong)uVar23;
        if (uVar32 - lVar39 < uVar36 + 4) goto LAB_1000395c;
        puVar6 = (uint *)((long)pvVar34 + lVar39);
        uVar24 = recovered_10004fcc((uint *)((long)pvVar34 + lVar39 + uVar36));
        uVar25 = recovered_10004fd8(0,(byte *)(puVar5 + 1),4);
        if (uVar23 != 0) {
          uVar25 = recovered_10004fd8(uVar25,(byte *)puVar6,uVar36);
        }
        if (uVar25 != uVar24) goto LAB_1000395c;
        lVar39 = lVar39 + uVar36 + 4;
        if ((uStack_1a8 & 0x100000000) == 0) {
          iVar22 = recovered_10000d48(puVar5 + 1,&DAT_10007196,4);
          uVar38 = '\0';
          if ((uVar23 == 0xd) && (iVar22 == 0)) {
            uVar23 = recovered_10004fcc(puVar6);
            local_1c0 = CONCAT44(PF_PART4(local_1c0, 4),uVar23);
            uVar24 = recovered_10004fcc(puVar6 + 1);
            uVar38 = '\0';
            local_1c0 = CONCAT44(uVar24,(uint)local_1c0);
            bVar31 = (byte)puVar6[2];
            bVar11 = *(byte *)((long)puVar6 + 9);
            uStack_1b8 = (ulong)CONCAT14(bVar11,(uint)bVar31);
            local_1b0 = (ulong)CONCAT14(*(char *)((long)puVar6 + 0xb),
                                        (uint)*(byte *)((long)puVar6 + 10));
            PF_PART5(uStack_1a8, 0) = CONCAT14(1,(uint)(byte)puVar6[3]);
            if ((uVar23 != 0) && (uVar24 != 0)) goto code_r0x10003acc;
          }
          goto LAB_10003960;
        }
        iVar22 = recovered_10000d48(puVar5 + 1,&DAT_100071a0,4);
        if (iVar22 == 0) {
          if (uVar23 == 0) goto LAB_1000395c;
          uVar38 = '\0';
          if ((0x300 < uVar23) || (uVar23 % 3 != 0)) goto LAB_10003960;
          recovered_10005068(&lStack_198,(undefined1 *)puVar6,(undefined1 *)((long)puVar6 + uVar36))
          ;
        }
        else {
          iVar22 = recovered_10000d48(puVar5 + 1,&DAT_100071a5,4);
          if (iVar22 == 0) {
            if (((uVar23 != 2) && (PF_PART4(uStack_1b8, 4) == 0)) || (uVar23 != 6 && PF_PART4(uStack_1b8, 4) == 2)
               ) goto LAB_1000395c;
            if (PF_PART4(uStack_1b8, 4) == 3) {
              if (local_190 / 3 < uVar36) goto LAB_1000395c;
            }
            else if (PF_PART4(uStack_1b8, 4) == 4 || PF_PART4(uStack_1b8, 4) == 6) goto LAB_1000395c;
            recovered_10005068((long *)&local_180,(undefined1 *)puVar6,
                               (undefined1 *)((long)puVar6 + uVar36));
          }
          else {
            iVar22 = recovered_10000d48(puVar5 + 1,&DAT_100071aa,4);
            if (iVar22 == 0) {
              if (uVar23 != 0) {
                if (local_160 == uStack_158) {
                  uVar32 = 4;
                  if (local_160 != 0) {
                    uVar32 = local_160 << 1;
                  }
                  if (local_160 < uVar32) {
                    pvVar34 = recovered_10002dec(uVar32 << 4);
                    lVar28 = 0;
                    for (uVar35 = local_160; uVar35 != 0; uVar35 = uVar35 - 1) {
                      uVar27 = *(undefined8 *)((long)local_168 + lVar28);
                      ((undefined8 *)((long)pvVar34 + lVar28))[1] =
                           ((undefined8 *)((long)local_168 + lVar28))[1];
                      *(undefined8 *)((long)pvVar34 + lVar28) = uVar27;
                      lVar28 = lVar28 + 0x10;
                    }
                    recovered_10002e20(local_168);
                    local_168 = pvVar34;
                    uStack_158 = uVar32;
                  }
                }
                puVar7 = (undefined8 *)((long)local_168 + local_160 * 0x10);
                *puVar7 = puVar6;
                puVar7[1] = uVar36;
                local_160 = local_160 + 1;
                local_1a0 = local_1a0 + uVar36;
              }
            }
            else {
              iVar22 = recovered_10000d48(puVar5 + 1,&DAT_1000719b,4);
              if (iVar22 == 0) {
                if (uVar23 == 0) {
                  PF_PART6(uStack_1a8, 0) = CONCAT15(1,(undefined5)uStack_1a8);
                  break;
                }
                goto LAB_1000395c;
              }
              if (((byte)puVar5[1] >> 5 & 1) == 0) goto LAB_1000395c;
            }
          }
        }
      }
      if (((PF_PART1(uStack_1a8, 4) != '\x01') || (PF_PART1(uStack_1a8, 5) != '\x01' || local_1a0 == 0)) ||
         (PF_PART4(uStack_1b8, 4) == 3 && local_190 == 0)) goto LAB_1000395c;
      pvStack_1f0 = (void *)0x0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c8 = 0;
      local_130 = (void *)0x0;
      local_120 = 0;
      pvStack_128 = (void *)0x0;
      local_110 = 0;
      local_118 = 0;
      uStack_108 = uStack_108 & 0xffffffffffff0000;
      recovered_10004908(&pvStack_1f0,&local_130);
      uStack_1d0 = local_110;
      uStack_1d8 = local_118;
      uStack_1c8 = (undefined2)uStack_108;
      pvStack_128 = (void *)0x0;
      recovered_10002e20(local_130);
      if (PF_PART4(uStack_1b8, 4) == 0) {
        if (local_178 == 0) goto LAB_10003e18;
        if (local_178 == 2) {
          uStack_1d8 = CONCAT44(PF_PART4(uStack_1d8, 4),
                                (uint)(*local_180 >> 8) | (*local_180 & 0xff00ff) << 8);
          uStack_1c8 = CONCAT11(PF_PART1(uStack_1c8, 1),1);
          goto LAB_10003e18;
        }
LAB_10003e10:
        uVar38 = '\0';
        goto LAB_100047ec;
      }
      if (PF_PART4(uStack_1b8, 4) == 2) {
        if (local_178 != 0) {
          if (local_178 != 6) goto LAB_10003e10;
          uStack_1d8 = CONCAT44((uint)(*local_180 >> 8) | (*local_180 & 0xff00ff) << 8,
                                (uint)uStack_1d8);
          uStack_1d0 = CONCAT44((uint)(local_180[2] >> 8) | (local_180[2] & 0xff00ff) << 8,
                                (uint)(local_180[1] >> 8) | (local_180[1] & 0xff00ff) << 8);
          uStack_1c8 = CONCAT11(1,(byte)uStack_1c8);
        }
        goto LAB_10003e18;
      }
      if (PF_PART4(uStack_1b8, 4) != 3) {
        if (local_178 != 0) goto LAB_10003e10;
        goto LAB_10003e18;
      }
      uVar38 = '\0';
      if ((local_190 == 0) || (uVar32 = local_190 / 3, local_190 != uVar32 * 3)) goto LAB_100047ec;
      local_130 = (void *)CONCAT71(PF_PART7(local_130, 1),0xff);
      recovered_100051f4((long *)&pvStack_1f0,uVar32 << 2,(undefined1 *)&local_130);
      lVar28 = 0;
      lVar39 = 0;
      for (; uVar32 != 0; uVar32 = uVar32 - 1) {
        *(undefined1 *)((long)pvStack_1f0 + lVar39) = *(undefined1 *)(lStack_198 + lVar28);
        *(undefined1 *)((long)pvStack_1f0 + lVar39 + 1) = *(undefined1 *)(lStack_198 + lVar28 + 1);
        *(undefined1 *)((long)pvStack_1f0 + lVar39 + 2) = *(undefined1 *)(lStack_198 + lVar28 + 2);
        lVar39 = lVar39 + 4;
        lVar28 = lVar28 + 3;
      }
      lVar39 = 3;
      for (uVar32 = 0; uVar32 < local_178; uVar32 = uVar32 + 1) {
        *(undefined1 *)((long)pvStack_1f0 + lVar39) = *(undefined1 *)((long)local_180 + uVar32);
        lVar39 = lVar39 + 4;
      }
LAB_10003e18:
      uVar32 = local_1c0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      pvStack_208 = (void *)0x0;
      if ((int)uStack_1a8 == 0) {
        uVar23 = recovered_100052e8((long)&local_1c0);
        uVar36 = (local_1c0 >> 0x20) * (uVar32 & 0xffffffff);
        if (uVar36 >> 0x3e == 0) {
          recovered_10005280((long *)&pvStack_208,uVar36 * 4);
          local_120 = 0;
          pvStack_128 = (void *)0x0;
          local_130 = (void *)0x0;
          local_118 = 0;
          uStack_108 = 0;
          local_110 = 0;
          lStack_100 = 0;
          bVar20 = recovered_1000531c((long *)&local_130,(long *)&local_168);
          if (bVar20) {
            uVar32 = (uVar32 & 0xffffffff) * (ulong)uVar23 + 7 >> 3;
            uVar24 = recovered_100052e8((long)&local_1c0);
            uVar23 = uVar24 + 7 >> 3;
            if (uVar24 < 8) {
              uVar23 = 1;
            }
            recovered_100068f0(&pbStack_88,uVar32 + 1);
            if (PF_PART4(uStack_1b8, 4) == 6 && (int)uStack_1b8 == 8) {
              lVar39 = 0;
              uVar36 = 0;
              do {
                if (local_1c0 >> 0x20 <= uVar36) {
                  bVar20 = lStack_100 == local_110;
                  goto LAB_10004814;
                }
                bVar20 = recovered_10005b18((long)&local_130,pbStack_88,uStack_80);
                if (!bVar20) break;
                pbVar8 = (byte *)0x0;
                if (uVar36 != 0) {
                  pbVar8 = (byte *)((char *)((long)pvStack_208 + lVar39) + -uVar32);
                }
                uVar35 = recovered_10005b78((uint)*pbStack_88,(char *)((long)pvStack_208 + lVar39),
                                            (char *)(pbStack_88 + 1),pbVar8,uVar32,4);
                uVar36 = uVar36 + 1;
                lVar39 = lVar39 + uVar32;
              } while ((uVar35 & 1) != 0);
              uStack_80 = 0;
              recovered_10002e20(pbStack_88);
              goto LAB_100047e0;
            }
            recovered_100068f0(&pbStack_a0,uVar32);
            recovered_100068f0(&pbStack_b8,uVar32);
            lVar39 = 0;
            uVar36 = 0;
            bVar20 = false;
            while( true ) {
              if (local_1c0 >> 0x20 <= uVar36) {
                bVar20 = lStack_100 == local_110;
                goto switchD_10004464_caseD_1;
              }
              bVar21 = recovered_10005b18((long)&local_130,pbStack_88,uStack_80);
              if (!bVar21) break;
              pbVar8 = pbStack_a0;
              if (!bVar20) {
                pbVar8 = (byte *)0x0;
              }
              uVar27 = recovered_10005b78((uint)*pbStack_88,(char *)pbStack_b8,
                                          (char *)(pbStack_88 + 1),pbVar8,uVar32,(ulong)uVar23);
              if ((int)uVar27 == 0) break;
              bVar20 = false;
              if (6 < PF_PART4(uStack_1b8, 4)) goto switchD_10004464_caseD_1;
              uVar35 = local_1c0 & 0xffffffff;
              pvVar34 = (void *)((long)pvStack_208 + lVar39 * uVar35);
              switch((uintptr_t)(PF_PART4(uStack_1b8, 4))) {
              case 0:
                if ((int)uStack_1b8 == 8) {
                  pcVar4 = (char *)((long)pvVar34 + 3);
                  pbVar8 = pbStack_b8;
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    bVar31 = *pbVar8;
                    pcVar4[-3] = bVar31;
                    pcVar4[-2] = bVar31;
                    pcVar4[-1] = bVar31;
                    *pcVar4 = -((uint)uStack_1d8 != bVar31 | ((byte)uStack_1c8 ^ 0xff) & 1);
                    pcVar4 = pcVar4 + 4;
                    pbVar8 = pbVar8 + 1;
                  }
                }
                else {
                  pbVar8 = pbStack_b8 + 1;
                  pcVar4 = (char *)((long)pvVar34 + 3);
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    uVar24 = (uint)(*(ushort *)(pbVar8 + -1) >> 8) |
                             (*(ushort *)(pbVar8 + -1) & 0xff00ff) << 8;
                    cVar30 = (char)((uVar24 * 0xff + 0x7fff) / 0xffff);
                    pcVar4[-3] = cVar30;
                    pcVar4[-2] = cVar30;
                    pcVar4[-1] = cVar30;
                    *pcVar4 = -(uVar24 != (uint)uStack_1d8 | ((byte)uStack_1c8 ^ 0xff) & 1);
                    pbVar8 = pbVar8 + 2;
                    pcVar4 = pcVar4 + 4;
                  }
                }
                break;
              default:
                goto switchD_10004464_caseD_1;
              case 2:
                if ((int)uStack_1b8 == 8) {
                  pbVar8 = pbStack_b8 + 2;
                  pcVar4 = (char *)((long)pvVar34 + 3);
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    if ((PF_PART1(uStack_1c8, 1) == 1 && PF_PART4(uStack_1d8, 4) == pbVar8[-2]) &&
                       ((uint)uStack_1d0 == pbVar8[-1])) {
                      cVar30 = -(PF_PART4(uStack_1d0, 4) != *pbVar8);
                    }
                    else {
                      cVar30 = -1;
                    }
                    pcVar4[-3] = pbVar8[-2];
                    pcVar4[-2] = pbVar8[-1];
                    pcVar4[-1] = *pbVar8;
                    *pcVar4 = cVar30;
                    pbVar8 = pbVar8 + 3;
                    pcVar4 = pcVar4 + 4;
                  }
                }
                else {
                  puVar3 = (ushort *)(pbStack_b8 + 2);
                  pcVar4 = (char *)((long)pvVar34 + 3);
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    uVar24 = (uint)(puVar3[-1] >> 8) | (puVar3[-1] & 0xff00ff) << 8;
                    uVar25 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
                    uVar33 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
                    pcVar4[-3] = (char)((uVar24 * 0xff + 0x7fff) / 0xffff);
                    pcVar4[-2] = (char)((uVar25 * 0xff + 0x7fff) / 0xffff);
                    pcVar4[-1] = (char)((uVar33 * 0xff + 0x7fff) / 0xffff);
                    *pcVar4 = -(uVar24 != PF_PART4(uStack_1d8, 4) | (PF_PART1(uStack_1c8, 1) ^ 0xff) & 1 |
                               (uVar25 != (uint)uStack_1d0 || uVar33 != PF_PART4(uStack_1d0, 4)));
                    puVar3 = puVar3 + 3;
                    pcVar4 = pcVar4 + 4;
                  }
                }
                break;
              case 3:
                uVar29 = uStack_1e8 >> 2;
                pbVar8 = pbStack_b8;
                for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                  if (uVar29 <= *pbVar8) goto LAB_100047f4;
                  recovered_10000c94(pvVar34,(void *)((long)pvStack_1f0 + (ulong)*pbVar8 * 4),4);
                  pvVar34 = (void *)((long)pvVar34 + 4);
                  pbVar8 = pbVar8 + 1;
                }
                break;
              case 4:
                if ((int)uStack_1b8 == 8) {
                  pbVar1 = (byte *)((long)pvVar34 + 3);
                  pbVar8 = pbStack_b8;
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    bVar31 = *pbVar8;
                    pbVar1[-3] = bVar31;
                    pbVar1[-2] = bVar31;
                    pbVar1[-1] = *pbVar8;
                    *pbVar1 = pbVar8[1];
                    pbVar8 = pbVar8 + 2;
                    pbVar1 = pbVar1 + 4;
                  }
                }
                else {
                  pbVar8 = pbStack_b8 + 3;
                  puVar2 = (undefined1 *)((long)pvVar34 + 3);
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    uVar13 = *(ushort *)(pbVar8 + -3);
                    uVar12 = *(ushort *)(pbVar8 + -1);
                    uVar16 = (undefined1)
                             (((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                               ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) / 0xffff)
                    ;
                    puVar2[-3] = uVar16;
                    puVar2[-2] = uVar16;
                    puVar2[-1] = uVar16;
                    *puVar2 = (char)(((((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8) * 0x100 -
                                      ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8)) + 0x7fff) /
                                    0xffff);
                    pbVar8 = pbVar8 + 4;
                    puVar2 = puVar2 + 4;
                  }
                }
                break;
              case 6:
                if ((int)uStack_1b8 == 8) {
                  recovered_10000c94((void *)((long)pvStack_208 + uVar36 * uVar35 * 4),pbStack_b8,
                                     uVar35 << 2);
                }
                else {
                  pbVar8 = pbStack_b8 + 3;
                  puVar2 = (undefined1 *)((long)pvVar34 + 3);
                  for (; uVar35 != 0; uVar35 = uVar35 - 1) {
                    uVar13 = *(ushort *)(pbVar8 + -3);
                    puVar2[-3] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                         ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                       / 0xffff);
                    uVar13 = *(ushort *)(pbVar8 + -1);
                    puVar2[-2] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                         ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                       / 0xffff);
                    uVar13 = *(ushort *)(pbVar8 + 1);
                    puVar2[-1] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                         ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                       / 0xffff);
                    uVar13 = *(ushort *)(pbVar8 + 3);
                    *puVar2 = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                      ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                    0xffff);
                    pbVar8 = pbVar8 + 8;
                    puVar2 = puVar2 + 4;
                  }
                }
              }
              uVar19 = uStack_90;
              uVar27 = uStack_98;
              pbVar8 = pbStack_a0;
              pbStack_a0 = pbStack_b8;
              pbStack_b8 = pbVar8;
              uStack_90 = uStack_a8;
              uStack_98 = uStack_b0;
              uStack_a8 = uVar19;
              uStack_b0 = uVar27;
              uVar36 = uVar36 + 1;
              lVar39 = lVar39 + 4;
              bVar20 = true;
            }
LAB_100047f4:
            bVar20 = false;
switchD_10004464_caseD_1:
            uStack_b0 = 0;
            recovered_10002e20(pbStack_b8);
            uStack_98 = 0;
            recovered_10002e20(pbStack_a0);
LAB_10004814:
            uStack_80 = 0;
            recovered_10002e20(pbStack_88);
            recovered_10005d48(&local_130);
            if (bVar20) goto LAB_10004820;
          }
          else {
LAB_100047e0:
            recovered_10005d48(&local_130);
          }
        }
LAB_100047e4:
        uVar38 = '\0';
      }
      else {
        uVar32 = (local_1c0 >> 0x20) * (local_1c0 & 0xffffffff);
        if (uVar32 >> 0x3e != 0) goto LAB_100047e4;
        local_130 = (void *)((ulong)local_130 & 0xffffffffffffff00);
        recovered_100051f4((long *)&pvStack_208,uVar32 * 4,(undefined1 *)&local_130);
        local_120 = 0;
        pvStack_128 = (void *)0x0;
        local_130 = (void *)0x0;
        local_118 = 0;
        uStack_108 = 0;
        local_110 = 0;
        lStack_100 = 0;
        bVar20 = recovered_1000531c((long *)&local_130,(long *)&local_168);
        if (!bVar20) goto LAB_100047e0;
        uVar24 = recovered_100052e8((long)&local_1c0);
        lVar39 = 0;
        uVar23 = uVar24 + 7 >> 3;
        if (uVar24 < 8) {
          uVar23 = 1;
        }
        while( true ) {
          lVar18 = lStack_100;
          lVar28 = local_110;
          if (lVar39 == 7) break;
          uVar24 = *(uint *)(&DAT_10006f20 + lVar39 * 4);
          uVar25 = *(uint *)(&DAT_10006f58 + lVar39 * 4);
          if (uVar24 < (uint)local_1c0) {
            uVar33 = 0;
            if (uVar25 != 0) {
              uVar33 = ((uint)local_1c0 + ~uVar24) / uVar25;
            }
            uVar33 = uVar33 + 1;
          }
          else {
            uVar33 = 0;
          }
          uVar9 = *(uint *)(&DAT_10006f3c + lVar39 * 4);
          if (uVar9 < PF_PART4(local_1c0, 4)) {
            uVar10 = *(uint *)(&DAT_10006f74 + lVar39 * 4);
            uVar17 = 0;
            if (uVar10 != 0) {
              uVar17 = (PF_PART4(local_1c0, 4) + ~uVar9) / uVar10;
            }
            if ((uVar33 != 0) && (uVar17 != 0xffffffff)) {
              uVar26 = recovered_100052e8((long)&local_1c0);
              uVar35 = (ulong)uVar26 * (ulong)uVar33 + 7 >> 3;
              recovered_100068f0(&pbStack_88,uVar35 + 1);
              recovered_100068f0(&pbStack_a0,uVar35);
              recovered_100068f0(&pbStack_b8,uVar35);
              uVar32 = 0;
              bVar20 = false;
              uVar36 = (ulong)uVar33;
              while ((uVar32 < uVar17 + 1 &&
                     (bVar21 = recovered_10005b18((long)&local_130,pbStack_88,uStack_80), bVar21)))
              {
                pbVar8 = pbStack_a0;
                if (!bVar20) {
                  pbVar8 = (byte *)0x0;
                }
                uVar27 = recovered_10005b78((uint)*pbStack_88,(char *)pbStack_b8,
                                            (char *)(pbStack_88 + 1),pbVar8,uVar35,(ulong)uVar23);
                pvVar34 = pvStack_208;
                if (((int)uVar27 == 0) || (6 < PF_PART4(uStack_1b8, 4))) break;
                lVar28 = (local_1c0 & 0xffffffff) * (ulong)(uVar9 + uVar10 * (int)uVar32);
                switch((uintptr_t)(PF_PART4(uStack_1b8, 4))) {
                case 0:
                  uVar33 = uVar24;
                  uVar29 = uVar36;
                  pbVar8 = pbStack_b8;
                  if ((int)uStack_1b8 == 8) {
                    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                      bVar31 = *pbVar8;
                      pbVar1 = (byte *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      *pbVar1 = bVar31;
                      pbVar1[1] = bVar31;
                      pbVar1[2] = bVar31;
                      pbVar1[3] = -((uint)uStack_1d8 != bVar31 | ((byte)uStack_1c8 ^ 0xff) & 1);
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 1;
                    }
                  }
                  else {
                    pbVar8 = pbStack_b8 + 1;
                    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                      uVar26 = (uint)(*(ushort *)(pbVar8 + -1) >> 8) |
                               (*(ushort *)(pbVar8 + -1) & 0xff00ff) << 8;
                      uVar16 = (undefined1)((uVar26 * 0xff + 0x7fff) / 0xffff);
                      puVar2 = (undefined1 *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      *puVar2 = uVar16;
                      puVar2[1] = uVar16;
                      puVar2[2] = uVar16;
                      puVar2[3] = -(uVar26 != (uint)uStack_1d8 | ((byte)uStack_1c8 ^ 0xff) & 1);
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 2;
                    }
                  }
                  break;
                default:
                  goto switchD_10003fc8_caseD_1;
                case 2:
                  if ((int)uStack_1b8 == 8) {
                    uVar33 = uVar24;
                    pbVar8 = pbStack_b8 + 2;
                    for (uVar29 = uVar36; uVar29 != 0; uVar29 = uVar29 - 1) {
                      if ((PF_PART1(uStack_1c8, 1) == 1 && PF_PART4(uStack_1d8, 4) == pbVar8[-2]) &&
                         ((uint)uStack_1d0 == pbVar8[-1])) {
                        bVar31 = -(PF_PART4(uStack_1d0, 4) != *pbVar8);
                      }
                      else {
                        bVar31 = 0xff;
                      }
                      pbVar1 = (byte *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      *pbVar1 = pbVar8[-2];
                      pbVar1[1] = pbVar8[-1];
                      pbVar1[2] = *pbVar8;
                      pbVar1[3] = bVar31;
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 3;
                    }
                  }
                  else {
                    puVar3 = (ushort *)(pbStack_b8 + 2);
                    uVar33 = uVar24;
                    for (uVar29 = uVar36; uVar29 != 0; uVar29 = uVar29 - 1) {
                      uVar26 = (uint)(puVar3[-1] >> 8) | (puVar3[-1] & 0xff00ff) << 8;
                      uVar14 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
                      uVar15 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
                      puVar2 = (undefined1 *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      *puVar2 = (char)((uVar26 * 0xff + 0x7fff) / 0xffff);
                      puVar2[1] = (char)((uVar14 * 0xff + 0x7fff) / 0xffff);
                      puVar2[2] = (char)((uVar15 * 0xff + 0x7fff) / 0xffff);
                      puVar2[3] = -(uVar26 != PF_PART4(uStack_1d8, 4) | (PF_PART1(uStack_1c8, 1) ^ 0xff) & 1 |
                                   (uVar14 != (uint)uStack_1d0 || uVar15 != PF_PART4(uStack_1d0, 4)));
                      uVar33 = uVar33 + uVar25;
                      puVar3 = puVar3 + 3;
                    }
                  }
                  break;
                case 3:
                  uVar37 = uStack_1e8 >> 2;
                  uVar33 = uVar24;
                  pbVar8 = pbStack_b8;
                  for (uVar29 = uVar36; uVar29 != 0; uVar29 = uVar29 - 1) {
                    if (uVar37 <= *pbVar8) goto switchD_10003fc8_caseD_1;
                    recovered_10000c94((void *)((long)pvVar34 + (ulong)uVar33 * 4 + lVar28 * 4),
                                       (void *)((long)pvStack_1f0 + (ulong)*pbVar8 * 4),4);
                    uVar33 = uVar33 + uVar25;
                    pbVar8 = pbVar8 + 1;
                  }
                  break;
                case 4:
                  uVar33 = uVar24;
                  uVar29 = uVar36;
                  pbVar8 = pbStack_b8;
                  if ((int)uStack_1b8 == 8) {
                    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                      pbVar1 = (byte *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      bVar31 = *pbVar8;
                      *pbVar1 = bVar31;
                      pbVar1[1] = bVar31;
                      pbVar1[2] = *pbVar8;
                      pbVar1[3] = pbVar8[1];
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 2;
                    }
                  }
                  else {
                    pbVar8 = pbStack_b8 + 3;
                    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                      uVar13 = *(ushort *)(pbVar8 + -3);
                      uVar12 = *(ushort *)(pbVar8 + -1);
                      uVar16 = (undefined1)
                               (((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                 ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                               0xffff);
                      puVar2 = (undefined1 *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      *puVar2 = uVar16;
                      puVar2[1] = uVar16;
                      puVar2[2] = uVar16;
                      puVar2[3] = (char)(((((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8) * 0x100
                                          - ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8)) +
                                         0x7fff) / 0xffff);
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 4;
                    }
                  }
                  break;
                case 6:
                  uVar33 = uVar24;
                  uVar29 = uVar36;
                  pbVar8 = pbStack_b8;
                  if ((int)uStack_1b8 == 8) {
                    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                      recovered_10000c94((void *)((long)pvVar34 + (ulong)uVar33 * 4 + lVar28 * 4),
                                         pbVar8,4);
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 4;
                    }
                  }
                  else {
                    pbVar8 = pbStack_b8 + 3;
                    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                      puVar2 = (undefined1 *)((long)pvStack_208 + (ulong)uVar33 * 4 + lVar28 * 4);
                      uVar13 = *(ushort *)(pbVar8 + -3);
                      *puVar2 = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                      uVar13 = *(ushort *)(pbVar8 + -1);
                      puVar2[1] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100
                                          - ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) +
                                         0x7fff) / 0xffff);
                      uVar13 = *(ushort *)(pbVar8 + 1);
                      puVar2[2] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100
                                          - ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) +
                                         0x7fff) / 0xffff);
                      uVar13 = *(ushort *)(pbVar8 + 3);
                      puVar2[3] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100
                                          - ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) +
                                         0x7fff) / 0xffff);
                      uVar33 = uVar33 + uVar25;
                      pbVar8 = pbVar8 + 8;
                    }
                  }
                }
                uVar19 = uStack_90;
                uVar27 = uStack_98;
                pbVar8 = pbStack_a0;
                pbStack_a0 = pbStack_b8;
                pbStack_b8 = pbVar8;
                uStack_90 = uStack_a8;
                uStack_98 = uStack_b0;
                uStack_a8 = uVar19;
                uStack_b0 = uVar27;
                uVar32 = uVar32 + 1;
                bVar20 = true;
              }
switchD_10003fc8_caseD_1:
              uStack_b0 = 0;
              recovered_10002e20(pbStack_b8);
              uStack_98 = 0;
              recovered_10002e20(pbStack_a0);
              uStack_80 = 0;
              recovered_10002e20(pbStack_88);
              if (uVar32 < uVar17 + 1) goto LAB_100047e0;
            }
          }
          lVar39 = lVar39 + 1;
        }
        recovered_10005d48(&local_130);
        if (lVar18 != lVar28) goto LAB_100047e4;
LAB_10004820:
        *(ulong *)image = local_1c0;
        recovered_10004908((undefined8 *)((long)image + 8),&pvStack_208);
        uVar38 = '\x01';
      }
      uStack_200 = 0;
      recovered_10002e20(pvStack_208);
LAB_100047ec:
      uStack_1e8 = 0;
      recovered_10002e20(pvStack_1f0);
      goto LAB_10003960;
    }
LAB_1000395c:
    uVar38 = '\0';
LAB_10003960:
    recovered_10004958((long)&local_1c0);
    local_140 = 0;
    recovered_10002e20(local_148);
  }
  return uVar38;
code_r0x10003acc:
  bVar20 = false;
  if (bVar11 < 7) {
    if ((1 << (ulong)(bVar11 & 0x1f) & 0x55U) == 0) {
      if (bVar11 == 3) {
        bVar20 = bVar31 == 8;
      }
    }
    else {
      bVar20 = true;
      if (bVar31 != 8) {
        bVar20 = bVar31 == 0x10;
      }
    }
  }
  uVar38 = '\0';
  if ((((!bVar20) || (*(byte *)((long)puVar6 + 10) != 0)) || (*(char *)((long)puVar6 + 0xb) != '\0')
      ) || (1 < (byte)puVar6[3])) goto LAB_10003960;
  goto LAB_10003984;
}

#undef DAT_10006cf3
#undef DAT_10006f20
#undef DAT_10006f3c
#undef DAT_10006f58
#undef DAT_10006f74
#undef DAT_10007196
#undef DAT_1000719b
#undef DAT_100071a0
#undef DAT_100071a5
#undef DAT_100071aa
#undef pvStack_208
#undef uStack_200
#undef uStack_1f8
#undef pvStack_1f0
#undef uStack_1e8
#undef uStack_1e0
#undef uStack_1d8
#undef uStack_1d0
#undef uStack_1c8
#undef uStack_1b8
#undef uStack_1a8
#undef lStack_198
#undef uStack_188
#undef uStack_170
#undef uStack_158
#undef pvStack_128
#undef uStack_108
#undef lStack_100
#undef uStack_f8
#undef uStack_e0
#undef uStack_c8
#undef pbStack_b8
#undef uStack_b0
#undef uStack_a8
#undef pbStack_a0
#undef uStack_98
#undef uStack_90
#undef pbStack_88
#undef uStack_80
#undef local_1c0
#undef local_1b0
#undef local_1a0
#undef local_190
#undef local_180
#undef local_178
#undef local_168
#undef local_160
#undef local_148
#undef local_140
#undef local_130
#undef local_120
#undef local_118
#undef local_110
#undef local_f0
#undef local_e8
#undef local_d8
#undef local_d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048dc
 */

undefined8 * recovered_100048dc(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10004908(param_1 + 1,param_2 + 1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004908
 */

undefined8 * recovered_10004908(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002e20((void *)*param_1);
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
 * Address: 0x10004958
 */

long recovered_10004958(long param_1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 0x60) = 0;
  recovered_10002e20(*(void **)(param_1 + 0x58));
  recovered_1000691c((undefined8 *)(param_1 + 0x40));
  recovered_1000691c((undefined8 *)(param_1 + 0x28));
  return param_1;
}


#define local_50 (*(undefined1 * *)(frame + 16))
#define pvStack_48 (*(void * *)(frame + 24))
#define uStack_40 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004990
 */

ulong recovered_10004990(long param_1,ulong *param_2)

{
  unsigned char frame[128] = {0};

  bool bVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;

  pvStack_48 = (void *)0x0;
  local_50 = (undefined1 *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  recovered_100048dc(param_2,&local_50);
  uStack_40 = 0;
  recovered_10002e20(pvStack_48);
  local_50 = (undefined1 *)0x0;
  uStack_40 = 0;
  pvStack_48 = (void *)0x0;
  if ((param_1 != 0) &&
     (piVar4 = recovered_1000214c((char *)param_1,((uintptr_t)pf_module_state+0x5abU)), piVar4 != (int *)0x0)) {
    uVar5 = recovered_1000277c(piVar4,0,2);
    if (((int)uVar5 == 0) &&
       ((uVar6 = recovered_10002810((long)piVar4), -1 < (long)uVar6 &&
        (uVar5 = recovered_1000277c(piVar4,0,0), (int)uVar5 == 0)))) {
      recovered_10005280((long *)&local_50,uVar6);
      if (pvStack_48 == (void *)0x0) {
        bVar2 = true;
      }
      else {
        uVar6 = recovered_100024d8(local_50,1,(long)pvStack_48,piVar4);
        bVar2 = (void *)uVar6 == pvStack_48;
      }
    }
    else {
      bVar2 = false;
    }
    uVar5 = recovered_10002494(piVar4);
    bVar1 = false;
    if ((int)uVar5 == 0) {
      bVar1 = bVar2;
    }
    if (bVar1) {
      bVar3 = recovered_10003824(local_50,(ulong)pvStack_48,param_2);
      uVar6 = (ulong)bVar3;
      goto LAB_10004a38;
    }
  }
  uVar6 = 0;
LAB_10004a38:
  pvStack_48 = (void *)0x0;
  recovered_10002e20(local_50);
  return uVar6;
}

#undef local_50
#undef pvStack_48
#undef uStack_40
#undef uStack_38

#undef DAT_10006cf3
#define DAT_10006cf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
#undef DAT_10006fb0
#define DAT_10006fb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3acU)))
#undef DAT_10007196
#define DAT_10007196 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x592U)))
#undef DAT_1000719b
#define DAT_1000719b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x597U)))
#undef DAT_100071aa
#define DAT_100071aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a6U)))
#define uStack_88 (*(undefined8 *)(frame + 32))
#define uStack_70 (*(undefined8 *)(frame + 56))
#define local_98 (*(void * *)(frame + 16))
#define local_90 (*(ulong *)(frame + 24))
#define local_80 (*(undefined8 *)(frame + 40))
#define local_78 (*(ulong *)(frame + 48))
#define local_61 (*(undefined1 *)(frame + 71))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ac0
 */

undefined4 recovered_10004ac0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[200] = {0};

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
  void *data;
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
    puVar11 = recovered_1000214c((char *)param_1,((uintptr_t)pf_module_state+0x58fU));
    uVar10 = 0;
    if (puVar11 != (uint *)0x0) {
      bVar8 = recovered_10004ed4(puVar11,&DAT_10006cf3,8);
      if (bVar8) {
        local_80 = (void *)CONCAT17((char)param_4,
                                    CONCAT16((char)(param_4 >> 8),
                                             CONCAT15((char)(param_4 >> 0x10),
                                                      CONCAT14((char)(param_4 >> 0x18),
                                                               CONCAT13((char)param_3,
                                                                        CONCAT12((char)(param_3 >> 8
                                                                                       ),CONCAT11((
                                                  char)(param_3 >> 0x10),(char)(param_3 >> 0x18)))))
                                                  )));
        PF_PART5(local_78, 0) = (uint5)(uint)DAT_10006fb0;
        uVar12 = recovered_10004f14(puVar11,&DAT_10007196,(byte *)&local_80,0xd);
        if ((int)uVar12 != 0) {
          local_78 = 0;
          uStack_70 = 0;
          local_80 = (void *)0x0;
          uVar1 = (param_3 & 0xffffffff) << 2 | 1;
          recovered_10005280(&local_80,uVar1 * (param_4 & 0xffffffff));
          uVar14 = (param_3 & 0xffffffff) * 4;
          lVar23 = 1;
          lVar22 = param_2;
          for (uVar12 = 0; uVar12 != (param_4 & 0xffffffff); uVar12 = uVar12 + 1) {
            uVar16 = 0;
            uVar18 = 0;
            uVar17 = 0;
            data = (void *)(param_2 + uVar12 * uVar14);
            pvVar3 = (void *)0x0;
            if (uVar12 != 0) {
              pvVar3 = (void *)((long)data + (param_3 & 0xffffffff) * -4);
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
            pcVar13 = (char *)((long)local_80 + uVar12 * uVar1);
            *pcVar13 = cVar7;
            if (cVar7 == '\x02') {
              if (pvVar3 == (void *)0x0) goto LAB_10004d24;
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                *(char *)((long)local_80 + uVar18 + lVar23) =
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
                *(char *)((long)local_80 + uVar18 + lVar23) = *(char *)(lVar22 + uVar18) - cVar7;
              }
            }
            else {
LAB_10004d24:
              recovered_10000c94(pcVar13 + 1,data,uVar14);
            }
            lVar22 = lVar22 + uVar14;
            lVar23 = lVar23 + uVar1;
          }
          local_90 = 0;
          uStack_88 = 0;
          local_98 = (void *)0x0;
          local_61 = 0x78;
          recovered_10005fec((long *)&local_98,&local_61);
          local_61 = 1;
          recovered_10005fec((long *)&local_98,&local_61);
          uVar12 = 0;
          while (uVar1 = local_78 - uVar12, uVar12 <= local_78 && uVar1 != 0) {
            if (0xfffe < uVar1) {
              uVar1 = 0xffff;
            }
            uVar14 = uVar1 + uVar12;
            local_61 = uVar14 == local_78;
            recovered_10005fec((long *)&local_98,&local_61);
            local_61 = (undefined1)uVar1;
            recovered_10005fec((long *)&local_98,&local_61);
            local_61 = (undefined1)(uVar1 >> 8);
            recovered_10005fec((long *)&local_98,&local_61);
            uVar9 = (uint)uVar1 ^ 0xffff;
            local_61 = (undefined1)uVar9;
            recovered_10005fec((long *)&local_98,&local_61);
            local_61 = (undefined1)(uVar9 >> 8);
            recovered_10005fec((long *)&local_98,&local_61);
            recovered_1000507c((long *)&local_98,(long)local_98 + local_90,
                               (undefined1 *)((long)local_80 + uVar12),
                               (undefined1 *)((long)local_80 + uVar14));
            uVar12 = uVar14;
          }
          uVar9 = recovered_10005f88((long)local_80,local_78);
          uVar1 = local_90;
          recovered_10005280((long *)&local_98,local_90 + 4);
          uVar12 = 0;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          *(uint *)((long)local_98 + uVar1) = uVar9 >> 0x10 | uVar9 << 0x10;
          do {
            uVar1 = local_90 - uVar12;
            if (local_90 < uVar12 || uVar1 == 0) {
              local_90 = 0;
              recovered_10002e20(local_98);
              local_78 = 0;
              recovered_10002e20(local_80);
              uVar12 = recovered_10004f14(puVar11,&DAT_1000719b,(byte *)0x0,0);
              uVar21 = (undefined4)uVar12;
              goto LAB_10004e58;
            }
            if (0x3ffff < uVar1) {
              uVar1 = 0x40000;
            }
            uVar14 = recovered_10004f14(puVar11,&DAT_100071aa,(byte *)((long)local_98 + uVar12),
                                        uVar1);
            uVar12 = uVar1 + uVar12;
          } while ((uVar14 & 1) != 0);
          local_90 = 0;
          recovered_10002e20(local_98);
          local_78 = 0;
          recovered_10002e20(local_80);
        }
      }
      uVar21 = 0;
LAB_10004e58:
      uVar15 = recovered_10002494((int *)puVar11);
      uVar10 = 0;
      if ((int)uVar15 == 0) {
        uVar10 = uVar21;
      }
    }
  }
  return uVar10;
}

#undef DAT_10006cf3
#undef DAT_10006fb0
#undef DAT_10007196
#undef DAT_1000719b
#undef DAT_100071aa
#undef uStack_88
#undef uStack_70
#undef local_98
#undef local_90
#undef local_80
#undef local_78
#undef local_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ed4
 */

bool recovered_10004ed4(uint *param_1,void *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_3 == 0) {
    return true;
  }
  lVar1 = recovered_1000266c(param_2,1,param_3,param_1);
  return lVar1 == param_3;
}


#define uStack_38 (*(uint *)(frame + 16))
#define local_34 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f14
 */

ulong recovered_10004f14(uint *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  unsigned char frame[104] = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;

  uVar3 = 0;
  if ((param_4 >> 0x20 == 0) && (param_3 != (byte *)0x0 || param_4 == 0)) {
    uVar2 = ((uint)param_4 & 0xff00ff00) >> 8 | ((uint)param_4 & 0xff00ff) << 8;
    local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = recovered_10004fd8(0,param_2,4);
    if (param_4 != 0) {
      uVar2 = recovered_10004fd8(uVar2,param_3,param_4);
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_38 = uVar2 >> 0x10 | uVar2 << 0x10;
    bVar1 = recovered_10004ed4(param_1,&local_34,4);
    uVar3 = (ulong)bVar1;
    if (bVar1) {
      bVar1 = recovered_10004ed4(param_1,param_2,4);
      uVar3 = (ulong)bVar1;
      if (bVar1) {
        bVar1 = recovered_10004ed4(param_1,param_3,param_4);
        uVar3 = (ulong)bVar1;
        if (bVar1) {
          bVar1 = recovered_10004ed4(param_1,&uStack_38,4);
          uVar3 = (ulong)bVar1;
        }
      }
    }
  }
  return uVar3;
}

#undef uStack_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fcc
 */

uint recovered_10004fcc(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


#undef DAT_1000c310
#define DAT_1000c310 (*(byte *)(((uintptr_t)pf_module_state + 0x570cU)))
#undef DAT_1000c3d8
#define DAT_1000c3d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fd8
 */

uint recovered_10004fd8(uint param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;

  if ((DAT_1000c310 & 1) == 0) {
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
      (&DAT_1000c3d8)[uVar2] = uVar1;
    }
    DAT_1000c310 = 1;
  }
  uVar1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = (&DAT_1000c3d8)[(byte)(*param_2 ^ (byte)uVar1)] ^ uVar1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}

#undef DAT_1000c310
#undef DAT_1000c3d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005068
 */

void recovered_10005068(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

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
      recovered_10005174(param_1,uVar4);
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
 * Address: 0x1000507c
 */

long recovered_1000507c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] = {0};

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
      recovered_10005174(param_1,uVar5);
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
 * Address: 0x10005174
 */

void recovered_10005174(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_100051e8(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002e20((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051e8
 */

ulonglong recovered_100051e8(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000bc0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f4
 */

void recovered_100051f4(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_10005174(param_1,param_2);
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
    recovered_10005174(param_1,param_2);
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
 * Address: 0x100051fc
 */

void recovered_100051fc(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10005174(param_1,param_2);
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
    recovered_10005174(param_1,param_2);
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
 * Address: 0x10005280
 */

void recovered_10005280(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10005174(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_10006f90
#define DAT_10006f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e8
 */

int recovered_100052e8(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 < 7) && ((0x5dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(int *)(param_1 + 8) * *(int *)(&DAT_10006f90 + (ulong)uVar1 * 4);
  }
  return 0;
}

#undef DAT_10006f90

#undef DAT_1000c311
#define DAT_1000c311 (*(byte *)(((uintptr_t)pf_module_state + 0x570dU)))
#undef DAT_1000c312
#define DAT_1000c312 (*(byte *)(((uintptr_t)pf_module_state + 0x570eU)))
#undef DAT_1000c318
#define DAT_1000c318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5714U)))
#undef DAT_1000c378
#define DAT_1000c378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5774U)))
#undef DAT_1000c388
#define DAT_1000c388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5784U)))
#undef DAT_1000c398
#define DAT_1000c398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_1000c3a8
#define DAT_1000c3a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57a4U)))
#undef DAT_1000c3b8
#define DAT_1000c3b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57b4U)))
#undef DAT_1000c3c5
#define DAT_1000c3c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57c1U)))
#undef UNK_1000c320
#define UNK_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x571cU)))
#undef UNK_1000c328
#define UNK_1000c328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5724U)))
#undef UNK_1000c330
#define UNK_1000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x572cU)))
#undef UNK_1000c338
#define UNK_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5734U)))
#undef UNK_1000c340
#define UNK_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x573cU)))
#undef UNK_1000c348
#define UNK_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5744U)))
#undef UNK_1000c350
#define UNK_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x574cU)))
#undef UNK_1000c358
#define UNK_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5754U)))
#undef UNK_1000c360
#define UNK_1000c360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x575cU)))
#undef UNK_1000c365
#define UNK_1000c365 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5761U)))
#undef UNK_1000c368
#define UNK_1000c368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5764U)))
#undef UNK_1000c36d
#define UNK_1000c36d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5769U)))
#undef UNK_1000c380
#define UNK_1000c380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x577cU)))
#undef UNK_1000c390
#define UNK_1000c390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x578cU)))
#undef UNK_1000c3a0
#define UNK_1000c3a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x579cU)))
#undef UNK_1000c3b0
#define UNK_1000c3b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef UNK_1000c3c0
#define UNK_1000c3c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef UNK_1000c3c8
#define UNK_1000c3c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef UNK_1000c3cd
#define UNK_1000c3cd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57c9U)))
#undef _DAT_1000c318
#define _DAT_1000c318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5714U)))
#undef _DAT_1000c378
#define _DAT_1000c378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5774U)))
#undef _DAT_1000c388
#define _DAT_1000c388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5784U)))
#undef _DAT_1000c398
#define _DAT_1000c398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef _DAT_1000c3a8
#define _DAT_1000c3a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57a4U)))
#undef _DAT_1000c3b8
#define _DAT_1000c3b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57b4U)))
#undef _DAT_1000c3c5
#define _DAT_1000c3c5 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57c1U)))
#undef uRam000000001000c320
#define uRam000000001000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x571cU)))
#undef uRam000000001000c328
#define uRam000000001000c328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5724U)))
#undef uRam000000001000c330
#define uRam000000001000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x572cU)))
#undef uRam000000001000c338
#define uRam000000001000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5734U)))
#undef uRam000000001000c340
#define uRam000000001000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x573cU)))
#undef uRam000000001000c348
#define uRam000000001000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5744U)))
#undef uRam000000001000c350
#define uRam000000001000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x574cU)))
#undef uRam000000001000c358
#define uRam000000001000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5754U)))
#undef uRam000000001000c360
#define uRam000000001000c360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x575cU)))
#undef uRam000000001000c365
#define uRam000000001000c365 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5761U)))
#undef uRam000000001000c368
#define uRam000000001000c368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5764U)))
#undef uRam000000001000c36d
#define uRam000000001000c36d (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5769U)))
#undef uRam000000001000c380
#define uRam000000001000c380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x577cU)))
#undef uRam000000001000c390
#define uRam000000001000c390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x578cU)))
#undef uRam000000001000c3a0
#define uRam000000001000c3a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x579cU)))
#undef uRam000000001000c3b0
#define uRam000000001000c3b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef uRam000000001000c3c0
#define uRam000000001000c3c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef uRam000000001000c3c8
#define uRam000000001000c3c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef uRam000000001000c3cd
#define uRam000000001000c3cd (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57c9U)))
#define uStack_90 (*(undefined8 *)(frame + 544))
#define uStack_7c (*(uint *)(frame + 564))
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
#define local_2a0 (*(ulong *)(frame + 16))
#define uStack_228 (*(undefined8 *)(frame + 136))
#define local_240 (*(ulong *)(frame + 112))
#define uStack_220 (*(undefined8 *)(frame + 144))
#define local_1e0 (*(undefined8 *)(frame + 208))
#define uStack_218 (*(undefined8 *)(frame + 152))
#define local_1d8 (*(byte * *)(frame + 216))
#define uStack_210 (*(undefined8 *)(frame + 160))
#define local_1c8 (*(long *)(frame + 232))
#define uStack_208 (*(undefined8 *)(frame + 168))
#define local_1c0 (*(ulong *)(frame + 240))
#define pvStack_200 (*(void * *)(frame + 176))
#define local_1b8 (*(uint *)(frame + 248))
#define uStack_1f8 (*(undefined5 *)(frame + 184))
#define local_1b0 (*(undefined8 *)(frame + 256))
#define uStack_1f3 (*(undefined3 *)(frame + 189))
#define local_100 (*(void * *)(frame + 432))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000531c
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000531c(long *param_1,long *param_2)

{
  unsigned char frame[720] = {0};

  bool bVar1;
  void *data;
  undefined8 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;

  uVar10 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar13 = *param_2;
  for (lVar12 = param_2[1] << 4; lVar12 != 0; lVar12 = lVar12 + -0x10) {
    if (CARRY8(*(ulong *)(lVar13 + 8),uVar10)) {
      return false;
    }
    uVar10 = *(ulong *)(lVar13 + 8) + uVar10;
    lVar13 = lVar13 + 0x10;
  }
  recovered_10005174(param_1,uVar10);
  puVar2 = (undefined8 *)*param_2;
  for (lVar13 = param_2[1] << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
    recovered_1000507c(param_1,*param_1 + param_1[1],(undefined1 *)*puVar2,
                       (undefined1 *)*puVar2 + puVar2[1]);
    puVar2 = puVar2 + 2;
  }
  param_1[4] = 0;
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
        uVar8 = recovered_10005d70((long *)&local_1d8,1,(uint *)((long)&local_1e0 + 4));
        if ((int)uVar8 == 0) {
          return false;
        }
        uVar8 = recovered_10005d70((long *)&local_1d8,2,(uint *)&local_1e0);
        if ((int)uVar8 == 0) {
          return false;
        }
        iVar5 = PF_PART4(local_1e0, 4);
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
          uVar8 = recovered_10005d70((long *)&local_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar8 == 0) ||
              (uVar8 = recovered_10005d70((long *)&local_1d8,5,(uint *)&uStack_78), (int)uVar8 == 0)
              ) || (uVar8 = recovered_10005d70((long *)&local_1d8,4,&uStack_7c), (int)uVar8 == 0)) {
            iVar11 = 1;
          }
          else {
            uVar10 = uStack_78 & 0xffffffff;
            uVar14 = uStack_78 >> 0x20;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            recovered_10006320((long *)&uStack_98,0x13,(undefined4 *)&local_100);
            lVar13 = uVar14 + 0x101;
            data = (void *)CONCAT44(uStack_94,uStack_98);
            puVar3 = (uint *)((uintptr_t)pf_module_state+0x2d0U);
            for (uVar14 = (ulong)(uStack_7c + 4); uVar14 != 0; uVar14 = uVar14 - 1) {
              local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
              uVar8 = recovered_10005d70((long *)&local_1d8,3,(uint *)&local_100);
              if ((int)uVar8 == 0) {
                uStack_90 = 0;
                recovered_10002e20(data);
                goto LAB_100058f0;
              }
              *(uint *)((long)data + (ulong)*puVar3 * 4) = (uint)local_100;
              puVar3 = puVar3 + 1;
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
            uVar14 = recovered_100061b8((long *)&uStack_98,(uint *)&local_100,0);
            if ((uVar14 & 1) == 0) {
              uVar10 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar10 = uVar10 + 1 + lVar13;
              puStack_118 = (undefined4 *)0x0;
              recovered_10006430((long *)&puStack_118,uVar10);
              do {
                uVar14 = uStack_110;
                if (uVar10 <= uStack_110) {
                  recovered_10006784((long *)&uStack_130,puStack_118,puStack_118 + lVar13);
                  recovered_10006784(&uStack_148,puStack_118 + lVar13,puStack_118 + uStack_110);
                  uVar10 = recovered_100061b8((long *)&uStack_130,(uint *)&local_240,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = 0;
                  }
                  else {
                    bVar1 = false;
                    piVar4 = (int *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148);
                    for (lVar13 = lStack_140 << 2; lVar13 != 0; lVar13 = lVar13 + -4) {
                      bVar1 = (bool)(bVar1 | *piVar4 != 0);
                      piVar4 = piVar4 + 1;
                    }
                    if (bVar1) {
                      uVar10 = recovered_100061b8(&uStack_148,(uint *)&local_2a0,1);
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
                      recovered_100064b4(&local_2a0,&local_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_10002e20(pvStack_170);
                      uVar10 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_10002e20((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_10002e20((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_100058b4;
                }
                local_1b0 = local_1b0 & 0xffffffff00000000;
                uVar6 = recovered_10006054((long *)&local_1d8,(long)&local_100,(uint *)&local_1b0);
                if ((uVar6 & 1) == 0) break;
                if ((uint)local_1b0 < 0x10) {
                  recovered_100066bc((long *)&puStack_118,(undefined4 *)&local_1b0);
LAB_100056b0:
                  iVar11 = 5;
                  goto LAB_100057a0;
                }
                if ((uint)local_1b0 == 0x12) {
                  uStack_130 = 0;
                  uVar8 = recovered_10005d70((long *)&local_1d8,7,&uStack_130);
                  if ((int)uVar8 == 0) goto LAB_1000579c;
                  uVar6 = uStack_130 + 0xb;
                  for (uVar7 = 0; uVar7 < uVar6 && uVar14 < uVar10; uVar7 = uVar7 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_10006720((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar14 = uStack_110;
                  }
                  goto LAB_100056b0;
                }
                if ((uint)local_1b0 == 0x11) {
                  uStack_130 = 0;
                  uVar8 = recovered_10005d70((long *)&local_1d8,3,&uStack_130);
                  if ((int)uVar8 == 0) goto LAB_1000579c;
                  uVar6 = uStack_130 + 3;
                  for (uVar7 = 0; uVar7 < uVar6 && uVar14 < uVar10; uVar7 = uVar7 + 1) {
                    PF_PART4(uStack_148, 0) = 0;
                    recovered_10006720((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar14 = uStack_110;
                  }
                  goto LAB_100056b0;
                }
                if (((uint)local_1b0 != 0x10) || (uVar14 == 0)) break;
                uStack_130 = 0;
                uVar8 = recovered_10005d70((long *)&local_1d8,2,&uStack_130);
                if ((int)uVar8 != 0) {
                  uVar6 = uStack_130 + 3;
                  PF_PART4(uStack_148, 0) = puStack_118[uVar14 - 1];
                  for (uVar7 = 0; uVar7 < uVar6 && uVar14 < uVar10; uVar7 = uVar7 + 1) {
                    recovered_100066bc((long *)&puStack_118,(undefined4 *)&uStack_148);
                    uVar14 = uStack_110;
                  }
                  goto LAB_100056b0;
                }
LAB_1000579c:
                iVar11 = 1;
LAB_100057a0:
              } while (iVar11 == 5);
              uVar10 = 0;
LAB_100058b4:
              uStack_110 = 0;
              recovered_10002e20(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_10002e20(pvStack_c0);
            uStack_90 = 0;
            recovered_10002e20((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar10 & 1) == 0) {
LAB_100058f0:
              iVar11 = 1;
            }
            else {
              uVar8 = recovered_10005df0((long *)&local_1d8,(long)&local_240,(long)&local_2a0,
                                         param_1 + 3);
              iVar11 = 3;
              if ((int)uVar8 == 0) {
                iVar11 = 1;
              }
            }
          }
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_10002e20(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_10002e20(pvStack_200);
LAB_100057cc:
          if (iVar11 != 3) {
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
            uVar8 = recovered_10005d70((long *)&local_1d8,8,(uint *)&local_100);
            if ((((int)uVar8 != 0) &&
                (uVar8 = recovered_10005d70((long *)&local_1d8,8,(uint *)&local_1b0),
                (int)uVar8 != 0)) &&
               ((uVar8 = recovered_10005d70((long *)&local_1d8,8,(uint *)&local_240),
                (int)uVar8 != 0 &&
                (uVar8 = recovered_10005d70((long *)&local_1d8,8,(uint *)&local_2a0),
                (int)uVar8 != 0)))) {
              uVar6 = (uint)local_100 | (uint)local_1b0 << 8;
              if ((((uint)local_240 | (int)local_2a0 << 8) ^ uVar6) == 0xffff) {
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  uStack_98 = 0;
                  uVar8 = recovered_10005d70((long *)&local_1d8,8,&uStack_98);
                  if ((int)uVar8 == 0) goto LAB_100057b0;
                  puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                  recovered_10005fec(param_1 + 3,(undefined1 *)&puStack_118);
                }
                iVar11 = 3;
                goto LAB_100057cc;
              }
            }
LAB_100057b0:
            iVar11 = 1;
            goto LAB_100057cc;
          }
          if ((DAT_1000c311 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),8);
            recovered_10006320((long *)&local_100,0x120,(undefined4 *)&local_1b0);
            for (lVar13 = 0; lVar13 != 0x1c0; lVar13 = lVar13 + 4) {
              *(undefined4 *)((long)local_100 + lVar13 + 0x240) = 9;
            }
            for (lVar13 = 0; lVar13 != 0x60; lVar13 = lVar13 + 4) {
              *(undefined4 *)((long)local_100 + lVar13 + 0x400) = 7;
            }
            for (lVar13 = 0; lVar13 != 0x20; lVar13 = lVar13 + 4) {
              *(undefined4 *)((long)local_100 + lVar13 + 0x460) = 8;
            }
            uRam000000001000c36d = 0;
            uRam000000001000c368 = 0;
            uRam000000001000c350 = 0;
            uRam000000001000c348 = 0;
            uRam000000001000c360 = 0;
            uRam000000001000c365 = 0;
            uRam000000001000c358 = 0;
            uRam000000001000c330 = 0;
            uRam000000001000c328 = 0;
            uRam000000001000c340 = 0;
            uRam000000001000c338 = 0;
            uRam000000001000c320 = 0;
            _DAT_1000c318 = 0;
            recovered_100061b8((long *)&local_100,(uint *)&DAT_1000c318,0);
            uStack_f8 = 0;
            recovered_10002e20(local_100);
            recovered_10002e80();
            DAT_1000c311 = 1;
          }
          if ((DAT_1000c312 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),5);
            plVar9 = recovered_10006320((long *)&local_100,0x20,(undefined4 *)&local_1b0);
            uRam000000001000c380 = 0;
            _DAT_1000c378 = 0;
            uRam000000001000c390 = 0;
            _DAT_1000c388 = 0;
            uRam000000001000c3a0 = 0;
            _DAT_1000c398 = 0;
            uRam000000001000c3b0 = 0;
            _DAT_1000c3a8 = 0;
            uRam000000001000c3c0 = 0;
            _DAT_1000c3b8 = 0;
            uRam000000001000c3cd = 0;
            _DAT_1000c3c5 = 0;
            uRam000000001000c3c8 = 0;
            recovered_100061b8(plVar9,(uint *)&DAT_1000c378,0);
            uStack_f8 = 0;
            recovered_10002e20(local_100);
            recovered_10002e80();
            DAT_1000c312 = 1;
          }
          uVar10 = recovered_10005df0((long *)&local_1d8,((uintptr_t)pf_module_state+0x5714U),((uintptr_t)pf_module_state+0x5774U),param_1 + 3);
          if ((uVar10 & 1) == 0) {
            return false;
          }
        }
      } while (iVar5 == 0);
      if (local_1c8 == lStack_1d0 && local_1b8 < 8) {
        uVar6 = recovered_10004fcc((uint *)(*param_1 + param_1[1] + -4));
        uVar7 = recovered_10005f88(param_1[3],param_1[4]);
        return uVar7 == uVar6;
      }
    }
  }
  return false;
}

#undef DAT_1000c311
#undef DAT_1000c312
#undef DAT_1000c318
#undef DAT_1000c378
#undef DAT_1000c388
#undef DAT_1000c398
#undef DAT_1000c3a8
#undef DAT_1000c3b8
#undef DAT_1000c3c5
#undef UNK_1000c320
#undef UNK_1000c328
#undef UNK_1000c330
#undef UNK_1000c338
#undef UNK_1000c340
#undef UNK_1000c348
#undef UNK_1000c350
#undef UNK_1000c358
#undef UNK_1000c360
#undef UNK_1000c365
#undef UNK_1000c368
#undef UNK_1000c36d
#undef UNK_1000c380
#undef UNK_1000c390
#undef UNK_1000c3a0
#undef UNK_1000c3b0
#undef UNK_1000c3c0
#undef UNK_1000c3c8
#undef UNK_1000c3cd
#undef _DAT_1000c318
#undef _DAT_1000c378
#undef _DAT_1000c388
#undef _DAT_1000c398
#undef _DAT_1000c3a8
#undef _DAT_1000c3b8
#undef _DAT_1000c3c5
#undef uRam000000001000c320
#undef uRam000000001000c328
#undef uRam000000001000c330
#undef uRam000000001000c338
#undef uRam000000001000c340
#undef uRam000000001000c348
#undef uRam000000001000c350
#undef uRam000000001000c358
#undef uRam000000001000c360
#undef uRam000000001000c365
#undef uRam000000001000c368
#undef uRam000000001000c36d
#undef uRam000000001000c380
#undef uRam000000001000c390
#undef uRam000000001000c3a0
#undef uRam000000001000c3b0
#undef uRam000000001000c3c0
#undef uRam000000001000c3c8
#undef uRam000000001000c3cd
#undef uStack_90
#undef uStack_7c
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
#undef local_2a0
#undef uStack_228
#undef local_240
#undef uStack_220
#undef local_1e0
#undef uStack_218
#undef local_1d8
#undef uStack_210
#undef local_1c8
#undef uStack_208
#undef local_1c0
#undef pvStack_200
#undef local_1b8
#undef uStack_1f8
#undef local_1b0
#undef uStack_1f3
#undef local_100
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b18
 */

bool recovered_10005b18(long param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

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
    recovered_10000c94(param_2,(void *)(*(long *)(param_1 + 0x18) + uVar3),param_3);
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b78
 */

undefined8
recovered_10005b78(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10005d48
 */

void recovered_10005d48(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000691c(param_1 + 3);
  param_1[1] = 0;
  recovered_10002e20((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d70
 */

undefined8 recovered_10005d70(long *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

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


#undef DAT_10006cfc
#define DAT_10006cfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf8U)))
#undef DAT_10006d70
#define DAT_10006d70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10006de4
#define DAT_10006de4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e0U)))
#undef DAT_10006e5c
#define DAT_10006e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
#define local_6c (*(uint *)(frame + 16))
#define local_68 (*(uint *)(frame + 20))
#define local_64 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005df0
 */

undefined8 recovered_10005df0(long *param_1,long param_2,long param_3,long *param_4)

{
  unsigned char frame[156] = {0};

  uint uVar1;
  undefined8 uVar2;
  int iVar3;

  while( true ) {
    while( true ) {
      local_64 = 0;
      uVar1 = recovered_10006054(param_1,param_2,&local_64);
      if (uVar1 == 0) {
        return 0;
      }
      if (0xff < local_64) break;
      local_68 = CONCAT31(PF_PART3(local_68, 1),(char)local_64);
      recovered_10005fec(param_4,(undefined1 *)&local_68);
    }
    if (local_64 == 0x100) {
      return 1;
    }
    if (0x11d < local_64) {
      return 0;
    }
    iVar3 = *(int *)(&DAT_10006cfc + (ulong)(local_64 - 0x101) * 4);
    if (*(uint *)(&DAT_10006d70 + (ulong)(local_64 - 0x101) * 4) != 0) {
      local_68 = 0;
      uVar2 = recovered_10005d70(param_1,*(uint *)(&DAT_10006d70 + (ulong)(local_64 - 0x101) * 4),
                                 &local_68);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      iVar3 = local_68 + iVar3;
    }
    local_68 = 0;
    uVar1 = recovered_10006054(param_1,param_3,&local_68);
    if (uVar1 == 0) break;
    if (0x1d < local_68) {
      return 0;
    }
    uVar1 = *(uint *)(&DAT_10006de4 + (ulong)local_68 * 4);
    if (*(uint *)(&DAT_10006e5c + (ulong)local_68 * 4) != 0) {
      local_6c = 0;
      uVar2 = recovered_10005d70(param_1,*(uint *)(&DAT_10006e5c + (ulong)local_68 * 4),&local_6c);
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
      recovered_10006150(param_4,(undefined1 *)(*param_4 + (param_4[1] - (ulong)uVar1)));
    }
  }
  return 0;
}

#undef DAT_10006cfc
#undef DAT_10006d70
#undef DAT_10006de4
#undef DAT_10006e5c
#undef local_6c
#undef local_68
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f64
 */

long recovered_10005f64(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_100068c4((undefined8 *)(param_1 + 0x40));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f88
 */

uint recovered_10005f88(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10005fec
 */

long recovered_10005fec(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10005174(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define local_54 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006054
 */

uint recovered_10006054(long *param_1,long param_2,uint *param_3)

{
  unsigned char frame[132] = {0};

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
      uVar3 = recovered_10005d70(param_1,1,&local_54);
      if ((int)uVar3 == 0) {
LAB_10006124:
        local_54 = 0;
        break;
      }
      local_54 = local_54 | uVar8;
      uVar2 = *(uint *)(param_2 + (ulong)uVar4 * 4);
      uVar8 = uVar2 + iVar7;
      if (local_54 < uVar8) {
        uVar1 = lVar6 + (ulong)(local_54 - iVar7);
        if (*(ulong *)(param_2 + 0x48) <= uVar1) goto LAB_10006124;
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
 * Address: 0x10006150
 */

long recovered_10006150(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10005174(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define local_d0 (*(uint (*)[16])(frame + 16))
#define local_90 (*(ulong (*)[8])(frame + 80))
#define local_50 (*(void * *)(frame + 144))
#define local_48 (*(undefined5 *)(frame + 152))
#define uStack_43 (*(undefined3 *)(frame + 157))
#define uStack_40 (*(undefined5 *)(frame + 160))
#define uStack_3b (*(undefined8 *)(frame + 165))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061b8
 */

undefined8 recovered_100061b8(long *param_1,uint *param_2,undefined8 param_3)

{
  unsigned char frame[256] = {0};

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
  local_90[7] = 0;
  local_90[6] = 0;
  local_48 = 0;
  uStack_43 = 0;
  local_50 = (void *)0x0;
  local_90[3] = 0;
  local_90[2] = 0;
  local_90[5] = 0;
  local_90[4] = 0;
  local_90[1] = 0;
  local_90[0] = 0;
  recovered_100064b4((undefined8 *)param_2,local_90);
  local_48 = 0;
  uStack_43 = 0;
  recovered_10002e20(local_50);
  puVar2 = (uint *)*param_1;
  uVar3 = param_1[1];
  for (lVar7 = uVar3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    uVar5 = *puVar2;
    if (0xf < uVar5) goto LAB_10006274;
    param_2[uVar5] = param_2[uVar5] + 1;
    uVar4 = param_2[0x16];
    if (param_2[0x16] <= uVar5) {
      uVar4 = uVar5;
    }
    param_2[0x16] = uVar4;
    puVar2 = puVar2 + 1;
  }
  if (uVar3 == *param_2) {
LAB_10006304:
    *(char *)(param_2 + 0x17) = (char)param_3;
  }
  else {
    iVar6 = 1;
    lVar7 = 4;
    do {
      if (lVar7 == 0x40) {
        uVar5 = 0;
        local_d0[10] = 0;
        local_d0[0xb] = 0;
        local_d0[8] = 0;
        local_d0[9] = 0;
        local_d0[0xe] = 0;
        local_d0[0xf] = 0;
        local_d0[0xc] = 0;
        local_d0[0xd] = 0;
        local_d0[2] = 0;
        local_d0[3] = 0;
        local_d0[0] = 0;
        local_d0[1] = 0;
        local_d0[6] = 0;
        local_d0[7] = 0;
        local_d0[4] = 0;
        local_d0[5] = 0;
        for (lVar7 = 4; lVar7 != 0x40; lVar7 = lVar7 + 4) {
          *(uint *)((long)local_d0 + lVar7) = uVar5;
          uVar5 = *(int *)((long)param_2 + lVar7) + uVar5;
        }
        local_90[0] = local_90[0] & 0xffffffffffff0000;
        recovered_100064fc((long *)(param_2 + 0x10),(ulong)uVar5,(undefined2 *)local_90);
        lVar7 = *param_1;
        uVar3 = param_1[1];
        lVar8 = *(long *)(param_2 + 0x10);
        for (uVar9 = 0; uVar9 < uVar3; uVar9 = (ulong)((int)uVar9 + 1)) {
          uVar5 = *(uint *)(lVar7 + uVar9 * 4);
          if (uVar5 != 0) {
            uVar4 = local_d0[uVar5];
            local_d0[uVar5] = uVar4 + 1;
            *(short *)(lVar8 + (ulong)uVar4 * 2) = (short)uVar9;
          }
        }
        param_3 = 1;
        goto LAB_10006304;
      }
      piVar1 = (int *)((long)param_2 + lVar7);
      lVar7 = lVar7 + 4;
      iVar6 = iVar6 * 2 - *piVar1;
    } while (-1 < iVar6);
LAB_10006274:
    param_3 = 0;
  }
  return param_3;
}

#undef local_d0
#undef local_90
#undef local_50
#undef local_48
#undef uStack_43
#undef uStack_40
#undef uStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006320
 */

long * recovered_10006320(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000634c(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000634c
 */

void recovered_1000634c(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10006430(param_1,param_2);
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
    recovered_10006430(param_1,param_2);
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
 * Address: 0x100063cc
 */

void recovered_100063cc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006430(param_1,param_2);
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
 * Address: 0x10006430
 */

void recovered_10006430(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_100064a4(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined4 *)(uVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_10002e20((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a4
 */

ulonglong recovered_100064a4(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 4;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b4
 */

undefined8 * recovered_100064b4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

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
  recovered_10006504(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064fc
 */

void recovered_100064fc(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_10006638(param_1,param_2);
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
    recovered_10006638(param_1,param_2);
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
 * Address: 0x10006504
 */

undefined8 * recovered_10006504(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002e20((void *)*param_1);
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
 * Address: 0x10006554
 */

void recovered_10006554(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10006638(param_1,param_2);
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
    recovered_10006638(param_1,param_2);
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
 * Address: 0x100065d4
 */

void recovered_100065d4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006638(param_1,param_2);
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
 * Address: 0x10006638
 */

void recovered_10006638(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_100066ac(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)(uVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_10002e20((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066ac
 */

ulonglong recovered_100066ac(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 2;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000bc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bac();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066bc
 */

long recovered_100066bc(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10006430(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006720
 */

long recovered_10006720(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10006430(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006784
 */

long * recovered_10006784(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_100067bc(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067bc
 */

long recovered_100067bc(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

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
      recovered_10006430(param_1,uVar4);
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
 * Address: 0x100068c4
 */

undefined8 * recovered_100068c4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e20((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f0
 */

undefined8 * recovered_100068f0(undefined8 *param_1,ulong in_x1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10005280(param_1,in_x1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000691c
 */

undefined8 * recovered_1000691c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e20((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006948
 */

undefined8 * recovered_10006948(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000507c(param_1,0,param_2,param_3);
  return param_1;
}

