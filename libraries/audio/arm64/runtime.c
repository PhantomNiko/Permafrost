/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
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
 * Address: 0x10000658
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000658(void)

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

  DAT_1000c140 = 0;
  uStack_48 = 0;
  DAT_1000c148 = 0;
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
    recovered_10001d78(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_1000c148 == 0) {
    uVar4 = _DAT_40010088 & 0xfffffff0;
    if (_DAT_40010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300028 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10001d78(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  DAT_1000c140 = 1;
  return;
}

#undef DAT_1000c140
#undef DAT_1000c148
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

#undef DAT_1000c140
#define DAT_1000c140 (*(byte *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
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
#define local_48 (*(ulong *)(frame + 1056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000664
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000664(void)

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
  if ((DAT_1000c140 & 1) == 0) {
    DAT_1000c148 = 0;
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
      recovered_10001d78(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c148 == 0) {
      uVar4 = _DAT_40010088 & 0xfffffff0;
      if (_DAT_40010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300028 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10001d78(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    DAT_1000c140 = 1;
  }
  return;
}

#undef DAT_1000c140
#undef DAT_1000c148
#undef DAT_40010088
#undef DAT_4001008c
#undef DAT_40010238
#undef DAT_4001023c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef _DAT_40010238
#undef _DAT_4001023c
#undef auStack_458
#undef local_48

#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008cc
 */

ulong recovered_100008cc(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000664();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_1000c148

#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000918
 */

long recovered_10000918(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000664();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_1000c148

#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000958
 */

ulong recovered_10000958(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000664();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1000c148

#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000994
 */

long recovered_10000994(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000664();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c148

#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009c4
 */

ulong * recovered_100009c4(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;

  if (param_1 != 0) {
    recovered_10000664();
    uVar1 = param_1 + 0xfU & 0xfffffffffffffff0;
    for (puVar2 = &DAT_1000c148; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
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

#undef DAT_1000c148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a58
 */

ulong recovered_10000a58(ulong param_1,uint param_2)

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
 * Address: 0x10000a9c
 */

ulong recovered_10000a9c(ulong param_1,uint param_2)

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
 * Address: 0x10000ae8
 */

long recovered_10000ae8(long param_1,uint param_2)

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
 * Address: 0x10000b38
 */

/* WARNING: Removing unreachable block (ram,0x10000b88) */

void recovered_10000b38(ulong param_1,ulong param_2)

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
 * Address: 0x10000b40
 */

ulong recovered_10000b40(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000ba0
 */

undefined8 recovered_10000ba0(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_10000b40(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

long recovered_10000bc0(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000b40(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c00
 */

long recovered_10000c00(long param_1,long param_2)

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
  recovered_10000b40(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c4c
 */

void recovered_10000c4c(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c54
 */

int recovered_10000c54(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000c60(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000ca4(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000ce8(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d34
 */

void * recovered_10000d34(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d54
 */

void * recovered_10000d54(void *out,void *data,ulong size)

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
 * Address: 0x10000da4
 */

void * recovered_10000da4(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

void recovered_10000dc0(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd4
 */

void recovered_10000dd4(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de8
 */

int recovered_10000de8(void *left,void *right,ulong size)

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
 * Address: 0x10000e10
 */

bool recovered_10000e10(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e20
 */

bool recovered_10000e20(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e30
 */

bool recovered_10000e30(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e44
 */

bool recovered_10000e44(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e60
 */

bool recovered_10000e60(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e70
 */

bool recovered_10000e70(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e80
 */

int recovered_10000e80(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e94
 */

int recovered_10000e94(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ea8
 */

ulong recovered_10000ea8(char *text)

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
 * Address: 0x10000ecc
 */

int recovered_10000ecc(char *left,char *right)

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
 * Address: 0x10000ef4
 */

int recovered_10000ef4(char *left,char *right)

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
 * Address: 0x10000ef8
 */

void recovered_10000ef8(long param_1,long param_2)

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
 * Address: 0x10000f10
 */

void recovered_10000f10(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000ea8(param_1);
    out = recovered_10000c60(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000d34(out,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f4c
 */

char * recovered_10000f4c(char *param_1,char param_2)

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
 * Address: 0x10000f74
 */

long recovered_10000f74(long param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10000f4c(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fbc
 */

char * recovered_10000fbc(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000f4c(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ffc
 */

char * recovered_10000ffc(char *param_1,char *param_2)

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


#undef DAT_10005da9
#define DAT_10005da9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001038
 */

undefined * recovered_10001038(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10005da9;
}

#undef DAT_10005da9

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6380U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001044
 */

undefined ** recovered_10001044(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

undefined8 recovered_10001050(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000106c
 */

double recovered_1000106c(double param_1,uint param_2)

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
 * Address: 0x100010a0
 */

uint128 recovered_100010a0(double param_1,int *param_2)

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
 * Address: 0x10001114
 */

double recovered_10001114(double left,double right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001138
 */

double recovered_10001138(double left,double right)

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
 * Address: 0x10001198
 */

double recovered_10001198(double value)

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
 * Address: 0x100011b4
 */

double recovered_100011b4(double value)

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
 * Address: 0x100011e0
 */

double recovered_100011e0(double value)

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


#undef DAT_10005c80
#define DAT_10005c80 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000121c
 */

double recovered_1000121c(double value)

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
    return (double)iVar1 * DAT_10005c80 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_10005c80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012c8
 */

long recovered_100012c8(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10005c88
#define DAT_10005c88 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012dc
 */

double recovered_100012dc(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001330(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_10005c88);
}

#undef DAT_10005c88

#undef DAT_10005c90
#define DAT_10005c90 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10005c98
#define DAT_10005c98 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10005ca0
#define DAT_10005ca0 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10005ca8
#define DAT_10005ca8 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001330
 */

void recovered_10001330(double param_1)

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

#undef DAT_10005cb0
#define DAT_10005cb0 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001374
 */

double recovered_10001374(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001330(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10005cb0;
}

#undef DAT_10005cb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013c0
 */

double recovered_100013c0(double value)

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
 * Address: 0x100013d0
 */

float recovered_100013d0(float left,float right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001404
 */

float recovered_10001404(float param_1)

{
  unsigned char frame[64] = {0};

  int *in_x0;
  uint128 auVar1;

  auVar1 = recovered_100010a0((double)param_1,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000141c
 */

float recovered_1000141c(float param_1)

{
  unsigned char frame[64] = {0};

  uint in_w0;
  double dVar1;

  dVar1 = recovered_1000106c((double)param_1,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001434
 */

float recovered_10001434(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001138((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001450
 */

float recovered_10001450(float value)

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
 * Address: 0x10001474
 */

float recovered_10001474(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100011b4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000148c
 */

double recovered_1000148c(double value)

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
 * Address: 0x100014b4
 */

float recovered_100014b4(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000148c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014cc
 */

float recovered_100014cc(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100011e0((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e4
 */

float recovered_100014e4(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000121c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014fc
 */

long recovered_100014fc(double param_1)

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
 * Address: 0x10001510
 */

float recovered_10001510(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012dc((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001528
 */

float recovered_10001528(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001374((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001540
 */

float recovered_10001540(float value)

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
 * Address: 0x10001550
 */

long recovered_10001550(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_100015e8;
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
      goto LAB_10001614;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001614;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001614;
    }
LAB_100015e8:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001614:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001654((uint)*pbVar4);
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
 * Address: 0x10001654
 */

uint recovered_10001654(int param_1)

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
 * Address: 0x10001684
 */

long recovered_10001684(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001768;
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
      goto LAB_10001768;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001768;
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
LAB_10001768:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001654((uint)*pbVar6);
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
 * Address: 0x100017a8
 */

double recovered_100017a8(char *text,char **end)

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
        dVar11 = recovered_1000106c(dVar11,iVar8 * iVar5);
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
 * Address: 0x10001938
 */

float recovered_10001938(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100017a8(text,end);
  return (float)dVar1;
}


#define local_8c (*(int *)(frame + 16))
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
#define pdStack_78 (*(double * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001950
 */

int recovered_10001950(char *out,ulong capacity,char *format,void *arguments)

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
LAB_100019b4:
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
LAB_10001a40:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001ad8;
      case 100:
      case 0x69:
LAB_10001a90:
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
        if (local_88 < 2) goto LAB_10001a0c;
        *local_80 = 0x3f;
        goto LAB_10001a08;
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
        recovered_10001cb0((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
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
        goto LAB_10001a10;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x10001a5c;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001c60((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x157U));
        goto code_r0x10001bcc;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001c60((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_10001a10;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001bcc:
        uVar4 = 0x10;
        goto code_r0x10001be4;
      default:
        if (uVar5 == 0x49) goto LAB_10001a90;
        if (uVar5 != 0x58) goto LAB_10018258;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001be8;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001be4:
      iVar7 = 0;
LAB_10001be8:
      recovered_10001cb0((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_10001a10;
    }
    if (local_88 < 2) goto LAB_10001a0c;
    *local_80 = 0x25;
    goto LAB_10001a08;
  }
  if (bVar1 == 0) {
    if (capacity != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_10001a08;
  }
  goto LAB_10001a0c;
code_r0x10001a5c:
  format = format + 1;
  uVar5 = (uint)(byte)*format;
  goto LAB_10001a40;
code_r0x10001ad8:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_10001a08:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_10001a0c:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_10001a10:
  format = format + 1;
  goto LAB_100019b4;
}

#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c24
 */

void recovered_10001c24(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10005dae
#define str_10005dae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

void recovered_10001c60(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10005dae;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001c24(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10005dae

#undef str_10005db5
#define str_10005db5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135U)))
#undef str_10005dc6
#define str_10005dc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x146U)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb0
 */

void recovered_10001cb0(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_10005db5;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_10005dc6;
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
    recovered_10001c24(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_10005db5
#undef str_10005dc6
#undef local_60

#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d50
 */

int recovered_10001d50(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10001950(out,capacity,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_1000c148
#define DAT_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d78
 */

void recovered_10001d78(long param_1,ulong param_2,ulong *param_3)

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
      puVar3 = (ulong *)&DAT_1000c148;
      if (DAT_1000c148 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_1000c148

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
 * Address: 0x10001dd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001dd0(int param_1)

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

#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f08
 */

void recovered_10001f08(char *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c158 != 0) {
          DAT_1000c158 = DAT_1000c158 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001fc0(1);
        }
        else {
          if (DAT_1000c158 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c158 == -2) {
            recovered_10001fc0(0);
          }
          pcVar1 = &DAT_1000c160 + DAT_1000c158;
          DAT_1000c158 = DAT_1000c158 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c158
#undef DAT_1000c160

#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001fc0(int param_1)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c158 != 0) || (param_1 != 0)) {
    if (DAT_1000c158 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d34(local_230,&DAT_1000c160,DAT_1000c158);
      uVar2 = DAT_1000c158;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002d00(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_1000c158 = 0;
  }
  return;
}

#undef DAT_1000c158
#undef DAT_1000c160
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000204c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000204c(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c158 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000d34(auStack_230,&DAT_1000c160,DAT_1000c158);
    uVar2 = DAT_1000c158;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002d00(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_1000c158 = 0;
  return;
}

#undef DAT_1000c158
#undef DAT_1000c160
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002054
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002054(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c158 != 0) {
    if (DAT_1000c158 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d34(auStack_230,&DAT_1000c160,DAT_1000c158);
      uVar2 = DAT_1000c158;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002d00(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_1000c158 = 0;
  }
  return;
}

#undef DAT_1000c158
#undef DAT_1000c160
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10005dda
#define DAT_10005dda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000205c
 */

void recovered_1000205c(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_10005dda;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001d50(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001f08(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10005dda
#undef acStack_160

#undef DAT_10005ec4
#define DAT_10005ec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef str_10005ddd
#define str_10005ddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dU)))
#undef str_10005e00
#define str_10005e00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_10005e39
#define str_10005e39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b9U)))
#undef str_10005e6e
#define str_10005e6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eeU)))
#undef str_10005e94
#define str_10005e94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x214U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c0
 */

/* WARNING: Removing unreachable block (ram,0x1000213c) */

void recovered_100020c0(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002114(str_10005ddd);
  recovered_10002114(str_10005e00);
  recovered_10002114(str_10005e39);
  recovered_10002114(str_10005e6e);
  recovered_10002114(str_10005e94);
  pcVar4 = &DAT_10005ec4;
  for (uVar3 = recovered_10000ea8(&DAT_10005ec4); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c158 != 0) {
        DAT_1000c158 = DAT_1000c158 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001fc0(1);
      }
      else {
        if (DAT_1000c158 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c158 == -2) {
          recovered_10001fc0(0);
        }
        pcVar1 = &DAT_1000c160 + DAT_1000c158;
        DAT_1000c158 = DAT_1000c158 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10005ec4
#undef DAT_1000c158
#undef DAT_1000c160
#undef str_10005ddd
#undef str_10005e00
#undef str_10005e39
#undef str_10005e6e
#undef str_10005e94

#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002114
 */

void recovered_10002114(char *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10000ea8(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c158 != 0) {
          DAT_1000c158 = DAT_1000c158 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001fc0(1);
        }
        else {
          if (DAT_1000c158 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c158 == -2) {
            recovered_10001fc0(0);
          }
          pcVar1 = &DAT_1000c160 + DAT_1000c158;
          DAT_1000c158 = DAT_1000c158 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c158
#undef DAT_1000c160

#undef DAT_10005ec4
#define DAT_10005ec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_1000c158
#define DAT_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef str_10005ec7
#define str_10005ec7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002140
 */

/* WARNING: Removing unreachable block (ram,0x1000213c) */

void recovered_10002140(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002114(str_10005ec7);
  pcVar4 = &DAT_10005ec4;
  for (uVar3 = recovered_10000ea8(&DAT_10005ec4); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c158 != 0) {
        DAT_1000c158 = DAT_1000c158 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001fc0(1);
      }
      else {
        if (DAT_1000c158 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c158 == -2) {
          recovered_10001fc0(0);
        }
        pcVar1 = &DAT_1000c160 + DAT_1000c158;
        DAT_1000c158 = DAT_1000c158 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10005ec4
#undef DAT_1000c158
#undef DAT_1000c160
#undef str_10005ec7

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x40010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002164
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002164(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10002054();
    bVar2 = recovered_10002d00(0x44);
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
 * Address: 0x100021dc
 */

undefined8 recovered_100021dc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e0
 */

void recovered_100021e0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e4
 */

undefined8 recovered_100021e4(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005dda
#define DAT_10005dda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
#undef str_10005f5b
#define str_10005f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
#undef str_10005f68
#define str_10005f68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_10005f76
#define str_10005f76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ec
 */

undefined4 * recovered_100021ec(char *param_1,long param_2)

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
    DAT_1000c0b8 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000ecc(param_1,str_10005f5b);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000ecc(param_1,str_10005f68);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000ecc(param_1,str_10005f76);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c60(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c0b8 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000da4(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000f4c((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f4c((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f4c((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000f4c((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f4c((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f4c((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000f4c((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001d50((char *)(puVar4 + 1),0xf1,&DAT_10005dda);
        recovered_10000da4(&uStack_4c,0,0xc);
        uVar6 = recovered_10002428(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c0b8 = 2;
LAB_100023d0:
            recovered_10000ca4(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000f4c((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002478((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100023d0;
              recovered_10000d34(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c60(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c0b8 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000da4(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d50((char *)(puVar4 + 1),0xf1,&DAT_10005dda);
  return puVar4;
}

#undef DAT_10005dda
#undef DAT_1000c0b8
#undef str_10005f5b
#undef str_10005f68
#undef str_10005f76
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x40010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002428
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002428(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d00(0x34);
  if ((bVar1) && (_DAT_40010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010834
#undef _DAT_40010834

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002478
 */

undefined8 recovered_10002478(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000ce8(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_1000c0b8 = 0xc;
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

#undef DAT_1000c0b8

#undef DAT_10005dda
#define DAT_10005dda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
#undef str_10005f5b
#define str_10005f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
#undef str_10005f68
#define str_10005f68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#undef str_10005f76
#define str_10005f76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002500
 */

void recovered_10002500(char *param_1,long param_2,int *param_3)

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
    recovered_10002534(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c0b8 = 0x16;
    return;
  }
  iVar2 = recovered_10000ecc(param_1,str_10005f5b);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000ecc(param_1,str_10005f68);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000ecc(param_1,str_10005f76);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c60(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c0b8 = 0xc;
          return;
        }
        recovered_10000da4(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000f4c((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f4c((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f4c((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000f4c((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f4c((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f4c((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000f4c((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001d50((char *)(puVar4 + 1),0xf1,&DAT_10005dda);
        recovered_10000da4(&uStack_4c,0,0xc);
        uVar6 = recovered_10002428(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c0b8 = 2;
LAB_100023d0:
            recovered_10000ca4(puVar4);
            return;
          }
        }
        else {
          pcVar5 = recovered_10000f4c((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002478((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100023d0;
              recovered_10000d34(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c60(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c0b8 = 0xc;
    return;
  }
  recovered_10000da4(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d50((char *)(puVar4 + 1),0xf1,&DAT_10005dda);
  return;
}

#undef DAT_10005dda
#undef DAT_1000c0b8
#undef str_10005f5b
#undef str_10005f68
#undef str_10005f76
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002534
 */

undefined8 recovered_10002534(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100028d4(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000ca4(*(void **)(param_1 + 0x40));
    }
    recovered_10000ca4(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002578
 */

long recovered_10002578(undefined1 *param_1,long param_2,long param_3,int *param_4)

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
          uVar3 = recovered_10002628(param_4);
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


#undef DAT_10005dad
#define DAT_10005dad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002628
 */

uint recovered_10002628(int *param_1)

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
LAB_100026c0:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10002164((long)text,0x1fe,&DAT_10005dad,0);
      if (bVar2) {
        uVar3 = recovered_10000ea8(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_100026c0;
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

#undef DAT_10005dad

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000270c
 */

long recovered_1000270c(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10001f08(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_1000280c;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002478((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000da4((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000d34((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_1000280c;
    }
  }
  param_3 = 0;
LAB_1000280c:
  return param_3;
}


#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000281c
 */

undefined8 recovered_1000281c(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000c0b8 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10002828;
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
LAB_10002828:
  DAT_1000c0b8 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c0b8

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b0
 */

undefined8 recovered_100028b0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_1000c0b8 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000c0b8

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d4
 */

undefined8 recovered_100028d4(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002ab0(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_1000c0b8 = 5;
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

#undef DAT_1000c0b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002948
 */

undefined1 recovered_10002948(long param_1)

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
 * Address: 0x10002954
 */

undefined1 recovered_10002954(long param_1)

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
 * Address: 0x10002960
 */

void recovered_10002960(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002974
 */

uint recovered_10002974(uint param_1,long param_2)

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


#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002998
 */

undefined8 recovered_10002998(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c0b8 = 0x16;
  }
  else {
    uVar1 = recovered_100029d0(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c0b8 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c0b8

#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_4001083c
#define _DAT_4001083c (*(uint *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100029d0(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d00(0x3c);
  if ((bVar1) && (_DAT_4001083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_4001083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_4001083c
#undef _DAT_4001083c

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6438U)))
#define uStack_28 (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a14
 */

undefined8 recovered_10002a14(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c0b8 = 0x16;
  }
  else {
    recovered_10000da4(&uStack_2c,0,0xc);
    uVar1 = recovered_10002428(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c0b8 = 2;
    }
    else {
      uVar1 = recovered_10002ab0(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_100029d0(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c0b8 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c0b8
#undef uStack_28
#undef uStack_2c

#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010838
#define _DAT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d00(0x38);
  if ((bVar1) && (_DAT_40010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002b00. Too many branches */
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
 * Address: 0x10002b10
 */

undefined8 recovered_10002b10(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000da4(&uStack_3c,0,0xc);
    uVar2 = recovered_10002428(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_10000c60((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000d34(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10002bb0
 */

bool recovered_10002bb0(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002ab0(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bdc
 */

undefined8 recovered_10002bdc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be0
 */

void recovered_10002be0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be4
 */

undefined8 recovered_10002be4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be8
 */

undefined8 recovered_10002be8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bec
 */

undefined8 recovered_10002bec(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf0
 */

char * recovered_10002bf0(long param_1,char param_2,long param_3)

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
 * Address: 0x10002c14
 */

int recovered_10002c14(char *left,char *right,ulong size)

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


#undef DAT_10005eea
#define DAT_10005eea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef str_10005eed
#define str_10005eed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_10005efa
#define str_10005efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27aU)))
#undef str_10005f04
#define str_10005f04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x284U)))
#undef str_10005f18
#define str_10005f18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x298U)))
#undef str_10005f26
#define str_10005f26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_10005f38
#define str_10005f38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_10005f44
#define str_10005f44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c4U)))
#undef str_10005f55
#define str_10005f55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c44
 */

char * recovered_10002c44(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10005eea;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002c70_caseD_1;
  case 2:
    return str_10005eed;
  case 5:
    return str_10005efa;
  case 9:
    return str_10005f04;
  case 0xc:
    return str_10005f18;
  case 0xd:
    return str_10005f26;
  default:
    if (param_1 == 0x11) {
      return str_10005f38;
    }
    if (param_1 == 0x16) {
      return str_10005f44;
    }
switchD_10002c70_caseD_1:
    return str_10005f55;
  }
}

#undef DAT_10005eea
#undef str_10005eed
#undef str_10005efa
#undef str_10005f04
#undef str_10005f18
#undef str_10005f26
#undef str_10005f38
#undef str_10005f44
#undef str_10005f55

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce4
 */

undefined8 recovered_10002ce4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce8
 */

undefined8 recovered_10002ce8(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c150
#define DAT_1000c150 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cec
 */

void recovered_10002cec(void)

{
  unsigned char frame[64] = {0};

  DAT_1000c150 = DAT_1000c150 + 1;
  return;
}

#undef DAT_1000c150

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
 * Address: 0x10002d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002d00(int param_1)

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
 * Address: 0x10002dcc
 */

void recovered_10002dcc(long param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked, returns_twice)) unsigned long recovered_10002de0(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002e0c(unsigned long *context,int value)
{
 __asm__ volatile("cmp w1,#0\ncsinc w1,w1,wzr,ne\nldp x19,x20,[x0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nmov w0,w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e40
 */

void recovered_10002e40(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10000c4c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e50);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e54
 */

undefined8 recovered_10002e54(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e5c
 */

void recovered_10002e5c(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e6c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002e40();
}


#undef DAT_1000c360
#define DAT_1000c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e6c
 */

void recovered_10002e6c(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c360;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c360 = param_1;
  return;
}

#undef DAT_1000c360

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e8c
 */

void * recovered_10002e8c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c60(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c4c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ebc
 */

void * recovered_10002ebc(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c60(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c4c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

void recovered_10002ec0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000ca4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed8
 */

void recovered_10002ed8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000ca4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

void recovered_10002ef0(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000ca4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f08
 */

void recovered_10002f08(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000ca4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f20
 */

undefined8 recovered_10002f20(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f28
 */

uint recovered_10002f28(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f38
 */

void recovered_10002f38(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f48
 */

void recovered_10002f48(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f4c
 */

undefined1 * recovered_10002f4c(ulong param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000c60(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002e40();
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
 * Address: 0x10002f94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002f94(long param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10001dd0(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa4
 */

long recovered_10002fa4(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c360
#define DAT_1000c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66e0U)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002fac(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c360;
  if (DAT_1000c360 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c360 + 0x10);
    DAT_1000c360 = *(long *)(DAT_1000c360 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_10001dd0(0x50);
      if ((bVar3) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_40010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c360
#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003004
 */

void recovered_10003004(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003024((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c368
#define DAT_1000c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66e8U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003024
 */

void recovered_10003024(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c368;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003084;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_1000351c((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003130(param_1);
LAB_10003084:
                    /* WARNING: Subroutine does not return */
  recovered_10002e40();
}

#undef DAT_1000c368
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c360
#define DAT_1000c360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x66e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003088
 */

void recovered_10003088(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c360;
  if (DAT_1000c360 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002e40();
  }
  *(undefined1 *)(DAT_1000c360 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003024(puVar1);
}

#undef DAT_1000c360

#undef DAT_1000c368
#define DAT_1000c368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x66e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b8
 */

void recovered_100030b8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000c368;
  DAT_1000c368 = param_1;
  return;
}

#undef DAT_1000c368

#undef DAT_1000c368
#define DAT_1000c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x66e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030cc
 */

void recovered_100030cc(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c368;
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

#undef DAT_1000c368

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030f8
 */

void recovered_100030f8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

                    /* WARNING: Subroutine does not return */
  recovered_10003024(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003104
 */

void recovered_10003104(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002e40();
}


#undef DAT_1000c368
#define DAT_1000c368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x66e8U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

undefined8 recovered_10003110(undefined8 *param_1)

{
  unsigned char frame[128] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c368 != (long *)0x0) {
    DAT_1000c368 = (long *)*DAT_1000c368;
  }
  puVar2 = (undefined8 *)recovered_10003130(param_1);
  plVar3 = DAT_1000c368;
  while( true ) {
    DAT_1000c368 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002e40();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_1000351c((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_100031c4;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_100031c4:
  recovered_10002dcc((long)plVar3);
  recovered_10003110(extraout_x0);
  return 0;
}

#undef DAT_1000c368
#undef uStack_50
#undef uStack_48

#undef DAT_1000c368
#define DAT_1000c368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x66e8U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003130
 */

undefined8 recovered_10003130(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_1000c368;
  while( true ) {
    DAT_1000c368 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002e40();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_1000351c((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_100031c4;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_100031c4:
  recovered_10002dcc((long)plVar2);
  recovered_10003110(extraout_x0);
  return 0;
}

#undef DAT_1000c368
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031cc
 */

undefined8 recovered_100031cc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

  recovered_10003110(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d8
 */

undefined8 recovered_100031d8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e0
 */

void recovered_100031e0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002e40();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031ec
 */

long recovered_100031ec(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_1000322c(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000322c
 */

bool recovered_1000322c(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_100032b0:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_100032b0;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100032b0;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x6490U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b8
 */

void recovered_100032b8(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032bc
 */

undefined8 recovered_100032bc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c4
 */

bool recovered_100032c4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d4
 */

bool recovered_100032d4(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000330c
 */

bool recovered_1000330c(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003328
 */

bool recovered_10003328(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003340
 */

bool recovered_10003340(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003358
 */

bool recovered_10003358(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

bool recovered_10003370(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003388
 */

double recovered_10003388(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10001198(value);
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
 * Address: 0x100033d4
 */

long recovered_100033d4(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003414;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003414:
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
      goto LAB_10003498;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003498;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003498;
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
LAB_10003498:
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
 * Address: 0x10003518
 */

long recovered_10003518(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003414;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003414:
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
      goto LAB_10003498;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003498;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003498;
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
LAB_10003498:
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

#undef DAT_10005cf0
#define DAT_10005cf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000351c
 */

undefined8 recovered_1000351c(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_100036f4((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_100037e8(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_100037e8(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_100037e8(&local_68);
        uVar5 = recovered_100037e8(&local_68);
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
            uVar5 = recovered_1000384c(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_1000384c(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10005cf0 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_100036f4((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_1000322c(param_2,(long *)puVar6);
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

#undef DAT_10005cf0
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f4
 */

ulong * recovered_100036f4(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10003820(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_100037ac;
  case 1:
    puVar1 = (ulong *)recovered_100037e8(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10003820(pbVar5,2);
    goto LAB_100037a8;
  case 3:
    puVar1 = (ulong *)recovered_10003820(pbVar5,4);
    goto LAB_10003770;
  default:
    goto switchD_1000373c_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_1000384c(param_2);
    break;
  case 10:
    uVar3 = recovered_10003820(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_100037a8:
    pbVar4 = pbVar5 + 2;
LAB_100037ac:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10003820(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10003770:
    pbVar4 = pbVar5 + 4;
    goto LAB_100037ac;
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
switchD_1000373c_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e8
 */

ulong recovered_100037e8(undefined8 *param_1)

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
 * Address: 0x10003820
 */

ulong recovered_10003820(byte *param_1,long param_2)

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
 * Address: 0x1000384c
 */

ulong recovered_1000384c(undefined8 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c4
 */

void recovered_100038c4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c8
 */

void recovered_100038c8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038cc
 */

void recovered_100038cc(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d8
 */

void recovered_100038d8(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


#define local_42 (*(ushort *)(frame + 16))
#define uStack_30 (*(undefined8 *)(frame + 34))
#define local_40 (*(void * *)(frame + 18))
#define local_38 (*(undefined8 *)(frame + 26))
#define local_28 (*(int *)(frame + 42))
#define local_24 (*(short *)(frame + 46))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e4
 */

undefined8 * recovered_100038e4(long param_1)

{
  unsigned char frame[114] = {0};

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
    uVar2 = recovered_10003994(param_1,(long)&local_40,&local_42);
    iVar1 = 0;
    if (local_24 == 2) {
      iVar1 = (int)uVar2;
    }
    if ((iVar1 == 1) && (local_28 != 0)) {
      puVar3 = recovered_10002e8c(0x28);
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      recovered_10003a14(puVar3,&local_40);
      puVar3[4] = 0;
      goto LAB_10003968;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_10003968:
  local_38 = 0;
  recovered_10002ec0(local_40);
  return puVar3;
}

#undef local_42
#undef uStack_30
#undef local_40
#undef local_38
#undef local_28
#undef local_24

#define local_38 (*(void * *)(frame + 16))
#define local_30 (*(ulong *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003994
 */

undefined8 recovered_10003994(long param_1,long param_2,ushort *param_3)

{
  unsigned char frame[104] = {0};

  byte bVar1;
  undefined8 uVar2;

  local_30 = 0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  bVar1 = recovered_100044bc(param_1,(long *)&local_38);
  if ((bVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10004598(local_38,local_30,param_2,param_3);
  }
  local_30 = 0;
  recovered_10002ec0(local_38);
  return uVar2;
}

#undef local_38
#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a14
 */

undefined8 * recovered_10003a14(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined2 uVar1;

  recovered_10004200(param_1,param_2);
  uVar1 = *(undefined2 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x1c) = uVar1;
  return param_1;
}


#undef DAT_10005ca0
#define DAT_10005ca0 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10005d58
#define DAT_10005d58 (*(double *)(((uintptr_t)pf_module_state + 0xd8U)))
#undef DAT_10005fc3
#define DAT_10005fc3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x343U)))
#undef DAT_10005fc8
#define DAT_10005fc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10005fcc
#define DAT_10005fcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10005fd7
#define DAT_10005fd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357U)))
#undef str_10005fbc
#define str_10005fbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33cU)))
#undef str_10005fd1
#define str_10005fd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x351U)))
#define local_a8 (*(void * *)(frame + 16))
#define local_a0 (*(undefined8 *)(frame + 24))
#define uStack_98 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a4c
 */

long * recovered_10003a4c(uint param_1,uint param_2,long param_3,long param_4)

{
  unsigned char frame[216] = {0};

  double dVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;

  if ((int)(param_2 | param_1) < 0) {
    return (long *)0x0;
  }
  if (param_3 == 0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = (void *)0x0;
  }
  else {
    recovered_100050e0((long *)&local_a8,param_3);
  }
  bVar4 = recovered_10005090(&local_a8,str_10005fbc);
  if (bVar4) {
    iVar8 = 0;
LAB_10003aec:
    bVar4 = true;
  }
  else {
    bVar4 = recovered_10005090(&local_a8,&DAT_10005fc3);
    if (bVar4) {
      iVar8 = 1;
      goto LAB_10003aec;
    }
    bVar4 = recovered_10005090(&local_a8,&DAT_10005fc8);
    if (bVar4) {
      iVar8 = 2;
      goto LAB_10003aec;
    }
    bVar4 = false;
    iVar8 = 1;
  }
  recovered_10002ec0(local_a8);
  if (!bVar4) {
    return (long *)0x0;
  }
  if (param_4 == 0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = (void *)0x0;
  }
  else {
    recovered_100050e0((long *)&local_a8,param_4);
  }
  bVar4 = recovered_10005090(&local_a8,&DAT_10005fcc);
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    bVar4 = recovered_10005090(&local_a8,str_10005fd1);
    if (bVar4) {
      uVar3 = 1;
    }
    else {
      bVar4 = recovered_10005090(&local_a8,&DAT_10005fd7);
      uVar11 = 2;
      uVar3 = 2;
      if (!bVar4) {
        bVar4 = false;
        goto LAB_10003b68;
      }
    }
  }
  uVar11 = uVar3;
  bVar4 = true;
LAB_10003b68:
  recovered_10002ec0(local_a8);
  if (!bVar4) {
    return (long *)0x0;
  }
  plVar6 = recovered_10002e8c(0x28);
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[4] = 0;
  *(undefined4 *)(plVar6 + 3) = 0xac44;
  *(undefined2 *)((long)plVar6 + 0x1c) = 2;
  uVar7 = recovered_10003ccc((ulong)param_2,0xac44);
  local_a8 = (void *)((ulong)local_a8 & 0xffffffffffff0000);
  recovered_10003d14(plVar6,uVar7 << 1,(undefined2 *)&local_a8);
  dVar2 = DAT_10005d58;
  dVar1 = DAT_10005ca0;
  if (0 < (int)param_1) {
    lVar9 = 0;
    for (uVar10 = 0; uVar7 != uVar10; uVar10 = uVar10 + 1) {
      dVar14 = (double)NEON_ucvtf((ulong)*(uint *)(plVar6 + 3));
      dVar14 = ((double)param_1 * (double)uVar10) / dVar14;
      dVar12 = recovered_10001198(dVar14);
      if (iVar8 == 2) {
        dVar13 = (dVar14 - dVar12) * 2.0 + -1.0;
      }
      else if (iVar8 == 1) {
        dVar13 = recovered_100012dc(dVar14 * dVar1);
      }
      else {
        dVar13 = 1.0;
        if (0.5 <= dVar14 - dVar12) {
          dVar13 = -1.0;
        }
      }
      iVar5 = recovered_10003d1c(dVar13 * 0.75 * dVar2);
      if ((uVar11 & 1) == 0) {
        *(short *)(*plVar6 + lVar9) = (short)iVar5;
      }
      if (uVar11 - 1 < 2) {
        *(short *)(*plVar6 + lVar9 + 2) = (short)iVar5;
      }
      lVar9 = lVar9 + 4;
    }
  }
  plVar6[4] = 0;
  return plVar6;
}

#undef DAT_10005ca0
#undef DAT_10005d58
#undef DAT_10005fc3
#undef DAT_10005fc8
#undef DAT_10005fcc
#undef DAT_10005fd7
#undef str_10005fbc
#undef str_10005fd1
#undef local_a8
#undef local_a0
#undef uStack_98

#undef DAT_10005d60
#define DAT_10005d60 (*(double *)(((uintptr_t)pf_module_state + 0xe0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ccc
 */

long recovered_10003ccc(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  double dVar2;
  double dVar3;

  lVar1 = 0;
  if ((0 < (long)param_1) && (param_2 != 0)) {
    dVar2 = ((double)param_1 * (double)param_2) / DAT_10005d60;
    if (dVar2 < 9.223372036854776e+18) {
      dVar3 = 0.5;
      if (dVar2 < 0.0) {
        dVar3 = -0.5;
      }
      return (long)(dVar3 + dVar2);
    }
    lVar1 = 0x7fffffffffffffff;
  }
  return lVar1;
}

#undef DAT_10005d60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d14
 */

void recovered_10003d14(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_1000500c(param_1,param_2);
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
    recovered_1000500c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_10005d58
#define DAT_10005d58 (*(double *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d1c
 */

int recovered_10003d1c(double param_1)

{
  unsigned char frame[64] = {0};

  short sVar1;
  long lVar2;

  if (param_1 <= -32768.0) {
    sVar1 = -0x8000;
  }
  else if (DAT_10005d58 <= param_1) {
    sVar1 = 0x7fff;
  }
  else {
    lVar2 = recovered_100014fc(param_1);
    sVar1 = (short)lVar2;
  }
  return (int)sVar1;
}

#undef DAT_10005d58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d64
 */

undefined8 recovered_10003d64(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined2 *)((long)param_2 + 0x14) = 0;
  if ((param_1 == (undefined8 *)0x0) || (bVar1 = recovered_10003dcc((long)param_1), bVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 3);
    *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)((long)param_1 + 0x1c);
    uVar2 = 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dcc
 */

bool recovered_10003dcc(long param_1)

{
  unsigned char frame[64] = {0};

  if ((*(long *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    return true;
  }
  return *(short *)(param_1 + 0x1c) == 0;
}


#define auStack_60 (*(undefined8 (*)[2])(frame + 16))
#define lStack_50 (*(long *)(frame + 32))
#define bStack_48 (*(byte *)(frame + 40))
#define pvStack_38 (*(void * *)(frame + 56))
#define lStack_30 (*(long *)(frame + 64))
#define uStack_28 (*(undefined8 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df4
 */

byte recovered_10003df4(undefined8 *param_1,long param_2)

{
  unsigned char frame[144] = {0};

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
    uVar1 = recovered_100053b4(param_1,&pvStack_38);
    if ((uVar1 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      recovered_10005818(auStack_60,(char *)param_2,4);
      if ((lStack_50 == 0) ||
         (recovered_100058c4(&lStack_50,(long)pvStack_38,lStack_30), lStack_50 == 0)) {
        bVar2 = 0;
      }
      else {
        bVar2 = bStack_48;
      }
      recovered_10004aac(&lStack_50);
    }
    lStack_30 = 0;
    recovered_10002ec0(pvStack_38);
  }
  return bVar2 & 1;
}

#undef auStack_60
#undef lStack_50
#undef bStack_48
#undef pvStack_38
#undef lStack_30
#undef uStack_28

#define auStack_60 (*(undefined8 (*)[2])(frame + 16))
#define local_50 (*(long *)(frame + 32))
#define local_48 (*(byte *)(frame + 40))
#define local_38 (*(void * *)(frame + 56))
#define local_30 (*(long *)(frame + 64))
#define uStack_28 (*(undefined8 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e10
 */

byte recovered_10003e10(long param_1,undefined8 *param_2)

{
  unsigned char frame[144] = {0};

  ulong uVar1;
  byte bVar2;

  bVar2 = 0;
  if (param_1 != 0) {
    local_30 = 0;
    uStack_28 = 0;
    local_38 = (void *)0x0;
    uVar1 = recovered_100053b4(param_2,&local_38);
    if ((uVar1 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      recovered_10005818(auStack_60,(char *)param_1,4);
      if ((local_50 == 0) || (recovered_100058c4(&local_50,(long)local_38,local_30), local_50 == 0))
      {
        bVar2 = 0;
      }
      else {
        bVar2 = local_48;
      }
      recovered_10004aac(&local_50);
    }
    local_30 = 0;
    recovered_10002ec0(local_38);
  }
  return bVar2 & 1;
}

#undef auStack_60
#undef local_50
#undef local_48
#undef local_38
#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003edc
 */

undefined8 recovered_10003edc(long *param_1,long *param_2,long param_3)

{
  unsigned char frame[64] = {0};

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
        uVar5 = recovered_10003ccc(param_3,*(uint *)(param_1 + 3));
        uVar2 = uVar8 - uVar5;
        if (uVar5 <= uVar8 && uVar2 != 0) {
          dVar11 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 3));
          dVar14 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 3));
          dVar12 = recovered_100011b4((double)(uVar7 >> 1) / (dVar11 / dVar14));
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
              auVar13 = recovered_10004034((dVar11 / dVar14) * (double)uVar7,param_2,
                                           (int)lVar9 + 2U & 0xffff);
              iVar3 = recovered_10003d1c(PF_PART8(auVar13, 0) + (double)(int)sVar1);
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
 * Address: 0x10004034
 */

uint128 recovered_10004034(double param_1,long *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
      dVar9 = recovered_10001198(param_1);
      lVar6 = (long)dVar9;
      uVar8 = uVar8 - 1;
      if (lVar6 + 1U <= uVar8) {
        uVar8 = lVar6 + 1;
      }
      dVar10 = (double)NEON_ucvtf((long)dVar9);
      dVar9 = (double)(int)*(short *)(*param_2 +
                                      (ulong)*(ushort *)((long)param_2 + 0x1c) * lVar6 * 2 +
                                     (ulong)param_3 * 2);
      dVar9 = dVar9 + (param_1 - dVar10) *
                      ((double)(int)*(short *)(*param_2 +
                                               uVar8 * *(ushort *)((long)param_2 + 0x1c) * 2 +
                                              (ulong)param_3 * 2) - dVar9);
      goto LAB_10004088;
    }
  }
  dVar9 = 0.0;
LAB_10004088:
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar9;
  return auVar2;
}


#define uStack_38 (*(undefined8 *)(frame + 32))
#define local_48 (*(void * *)(frame + 16))
#define local_40 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040f8
 */

undefined8 recovered_100040f8(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[120] = {0};

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
      uVar3 = recovered_10003ccc(param_2,*(uint *)(param_1 + 3));
      uVar4 = recovered_10003ccc(param_3,*(uint *)(param_1 + 3));
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
      recovered_100041ec((long *)&local_48,
                         (undefined2 *)(*param_1 + uVar5 * *(ushort *)((long)param_1 + 0x1c) * 2),
                         (undefined2 *)(*param_1 + uVar1 * *(ushort *)((long)param_1 + 0x1c) * 2));
      recovered_10004200(param_1,&local_48);
      param_1[4] = 0;
      local_40 = 0;
      recovered_10002ec0(local_48);
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef uStack_38
#undef local_48
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041ec
 */

void recovered_100041ec(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;

  param_1[1] = 0;
  if (*param_1 == 0) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = *param_1 - *param_1 >> 1;
  }
  if (1 < (ulong)((long)param_3 - (long)param_2)) {
    uVar7 = (ulong)((long)param_3 - (long)param_2) >> 1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = uVar3;
    if (uVar2 < uVar3 + uVar7) {
      uVar4 = 4;
      if (uVar2 != 0) {
        uVar4 = uVar2;
      }
      do {
        uVar2 = uVar4;
        uVar4 = uVar2 << 1;
      } while (uVar2 < uVar3 + uVar7);
      recovered_1000500c(param_1,uVar2);
      uVar3 = param_1[1];
      uVar4 = uVar3;
    }
    while (uVar6 < uVar3) {
      puVar1 = (undefined2 *)(*param_1 + (uVar3 - 1) * 2);
      puVar1[uVar7] = *puVar1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = uVar6 << 1;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined2 *)(*param_1 + lVar5) = *param_2;
      lVar5 = lVar5 + 2;
    }
    param_1[1] = uVar4 + uVar7;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004200
 */

undefined8 * recovered_10004200(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002ec0((void *)*param_1);
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
 * Address: 0x10004250
 */

undefined8 recovered_10004250(double param_1,long param_2)

{
  unsigned char frame[128] = {0};

  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_2 != 0) {
    bVar2 = recovered_10003370((ulong)param_1);
    if (0.0 < param_1 && bVar2) {
      if (((param_1 != 1.0) && (uVar4 = (ulong)*(ushort *)(param_2 + 0x1c), uVar4 != 0)) &&
         (uVar4 <= *(ulong *)(param_2 + 8))) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = *(ulong *)(param_2 + 8) / uVar4;
        }
        recovered_100042d0((long *)&pvStack_50,param_1,param_2,uVar1);
        recovered_10003a14((undefined8 *)param_2,&pvStack_50);
        uStack_48 = 0;
        recovered_10002ec0(pvStack_50);
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

#define local_52 (*(undefined2 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042d0
 */

void recovered_100042d0(long *param_1,double param_2,long param_3,ulong param_4)

{
  unsigned char frame[130] = {0};

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
  recovered_10003d14(param_1,uVar1 * param_4,&local_52);
  if ((((0.0 < param_2) && (*(short *)(param_3 + 0x1c) != 0)) && (*(int *)(param_3 + 0x18) != 0)) &&
     (*(long *)(param_3 + 8) != 0)) {
    lVar3 = 0;
    for (uVar4 = 0; uVar4 != param_4; uVar4 = uVar4 + 1) {
      for (uVar5 = 0; uVar5 < *(ushort *)((long)param_1 + 0x1c); uVar5 = uVar5 + 1) {
        auVar6 = recovered_10004034((double)uVar4 * param_2,(long *)param_3,(uint)uVar5 & 0xffff);
        iVar2 = recovered_10003d1c(PF_PART8(auVar6, 0));
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
 * Address: 0x100043dc
 */

undefined8 recovered_100043dc(double param_1,long param_2)

{
  unsigned char frame[128] = {0};

  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_2 != 0) {
    bVar2 = recovered_10003370((ulong)param_1);
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
          uVar4 = recovered_100012c8((double)uVar1 / param_1);
        }
        recovered_100042d0((long *)&pvStack_50,param_1,param_2,uVar4);
        recovered_10003a14((undefined8 *)param_2,&pvStack_50);
        uStack_48 = 0;
        recovered_10002ec0(pvStack_50);
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
 * Address: 0x1000447c
 */

undefined8 recovered_1000447c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004480
 */

undefined8 recovered_10004480(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004488
 */

undefined8 recovered_10004488(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

void recovered_10004490(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *buffer;

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  param_1[4] = 0;
  buffer = recovered_10005924(param_1);
  recovered_10000ca4(buffer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b0
 */

void recovered_100044b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b4
 */

void recovered_100044b4(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000ca4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b8
 */

void recovered_100044b8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000ca4(data);
  return;
}


#define local_48 (*(long *)(frame + 32))
#define local_40 (*(byte *)(frame + 40))
#define auStack_58 (*(undefined8 (*)[2])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044bc
 */

byte recovered_100044bc(long param_1,long *param_2)

{
  unsigned char frame[136] = {0};

  ulong uVar1;
  byte bVar2;

  bVar2 = 0;
  if ((param_1 == 0) || (param_2 == (long *)0x0)) goto LAB_10004568;
  recovered_10004a28(auStack_58,(char *)param_1,4);
  if (local_48 == 0) {
LAB_1000455c:
    bVar2 = 0;
  }
  else {
    recovered_10004c40(&local_48,0,2);
    uVar1 = recovered_10004c90(&local_48);
    if ((long)uVar1 < 1) goto LAB_1000455c;
    recovered_10004c40(&local_48,0,0);
    recovered_10004998(param_2,uVar1);
    recovered_10004d50(&local_48,*param_2,uVar1);
    if (local_48 == 0) goto LAB_1000455c;
    bVar2 = local_40;
  }
  recovered_10004aac(&local_48);
LAB_10004568:
  return bVar2 & 1;
}

#undef local_48
#undef local_40
#undef auStack_58

#undef DAT_10005fa8
#define DAT_10005fa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_10005fad
#define DAT_10005fad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
#undef DAT_10005fb2
#define DAT_10005fb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
#undef DAT_10005fb7
#define DAT_10005fb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x337U)))
#define local_82 (*(ushort *)(frame + 78))
#define uStack_98 (*(undefined8 *)(frame + 56))
#define local_c0 (*(ulong *)(frame + 16))
#define local_b0 (*(uint3 * *)(frame + 32))
#define local_a8 (*(void * *)(frame + 40))
#define local_a0 (*(undefined8 *)(frame + 48))
#define local_90 (*(int *)(frame + 64))
#define local_8c (*(undefined2 *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004598
 */

undefined8 recovered_10004598(void *param_1,ulong param_2,long param_3,ushort *param_4)

{
  unsigned char frame[240] = {0};

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
  iVar9 = recovered_10000de8(param_1,&DAT_10005fa8,4);
  if ((iVar9 == 0) &&
     (iVar9 = recovered_10000de8((void *)((long)param_1 + 8),&DAT_10005fad,4), iVar9 == 0)) {
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
      iVar10 = recovered_10000de8(left,&DAT_10005fb2,4);
      if (iVar10 == 0) {
        if (uVar4 < 0x10) {
          return 0;
        }
        puVar1 = (ushort *)((long)param_1 + uVar14);
        local_82 = *puVar1;
        uVar7 = puVar1[1];
        iVar9 = *(int *)(puVar1 + 2);
        uVar6 = puVar1[7];
        uVar11 = recovered_10004da4(&local_82,(long)puVar1,uVar20);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        uVar16 = (uint)uVar6;
        bVar8 = recovered_10004df8((uint)local_82,uVar16);
        if (!bVar8) {
          return 0;
        }
        local_c0 = (ulong)uVar7;
        bVar8 = true;
      }
      else {
        iVar10 = recovered_10000de8(left,&DAT_10005fb7,4);
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
      recovered_10004e2c((long *)&local_a8,uVar5 * uVar13);
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
          auVar21 = recovered_10004e90(puVar18,(uint)local_82,uVar16);
          auVar22 = recovered_10004e90((uint3 *)((long)puVar18 + uVar3),(uint)local_82,uVar16);
          iVar9 = recovered_10004fb0(PF_PART8(auVar21, 0));
          *(short *)((long)local_a8 + uVar19 * 4) = (short)iVar9;
          iVar9 = recovered_10004fb0(PF_PART8(auVar22, 0));
          *(short *)((long)local_a8 + uVar19 * 4 + 2) = (short)iVar9;
        }
        else if (uVar4 == 1) {
          dVar23 = 0.0;
          puVar18 = local_b0;
          for (uVar15 = local_c0; uVar15 != 0; uVar15 = uVar15 - 1) {
            auVar21 = recovered_10004e90(puVar18,(uint)local_82,uVar16);
            dVar23 = dVar23 + PF_PART8(auVar21, 0);
            puVar18 = (uint3 *)((long)puVar18 + uVar20);
          }
          iVar9 = recovered_10004fb0(dVar23 / (double)local_c0);
          *(short *)((long)local_a8 + uVar19 * 2) = (short)iVar9;
        }
        else {
          for (uVar15 = 0; uVar13 != uVar15; uVar15 = uVar15 + 1) {
            uVar2 = (uint)uVar15;
            if (local_c0 <= uVar15) {
              uVar2 = (uint)local_c0 - 1;
            }
            auVar21 = recovered_10004e90((uint3 *)((long)puVar18 + (uVar2 & 0xffff) * uVar20),
                                         (uint)local_82,uVar16);
            iVar9 = recovered_10004fb0(PF_PART8(auVar21, 0));
            *(short *)((long)local_a8 + uVar15 * 2 + lVar12) = (short)iVar9;
          }
        }
        local_b0 = (uint3 *)((long)local_b0 + uVar14);
        lVar12 = lVar12 + uVar13 * 2;
      }
      recovered_10003a14((undefined8 *)param_3,&local_a8);
      local_a0 = 0;
      recovered_10002ec0(local_a8);
      return 1;
    }
  }
  return 0;
}

#undef DAT_10005fa8
#undef DAT_10005fad
#undef DAT_10005fb2
#undef DAT_10005fb7
#undef local_82
#undef uStack_98
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_90
#undef local_8c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004998
 */

void recovered_10004998(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10004cd0(param_1,param_2);
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
 * Address: 0x10004a00
 */

long recovered_10004a00(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004aac((long *)(param_1 + 0x10));
  return param_1;
}


#undef PTR_recovered_10004a00_100080d8
#define PTR_recovered_10004a00_100080d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2458U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a28
 */

undefined8 * recovered_10004a28(undefined8 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_recovered_10004a00_100080d8;
  param_1[1] = 0;
  recovered_10004a7c((long)param_1,param_2,param_3);
  return param_1;
}

#undef PTR_recovered_10004a00_100080d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a7c
 */

void recovered_10004a7c(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_10004afc((long *)(param_1 + 0x10),param_2,param_3 | 1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aac
 */

long * recovered_10004aac(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004b54(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ad4
 */

void recovered_10004ad4(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004aac((long *)((long)param_1 + 0x10));
  recovered_10000ca4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004afc
 */

void recovered_10004afc(long *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined4 *puVar2;

  recovered_10004b54(param_1);
  puVar1 = recovered_10004b88(param_3);
  puVar2 = recovered_100021ec(param_2,(long)puVar1);
  *param_1 = (long)puVar2;
  *(bool *)(param_1 + 1) = puVar2 != (undefined4 *)0x0;
  param_1[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b54
 */

void recovered_10004b54(long *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*param_1 != (int *)0x0) {
    recovered_10002534((int *)*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}


#undef DAT_10005f84
#define DAT_10005f84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x304U)))
#undef DAT_10005f88
#define DAT_10005f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x308U)))
#undef DAT_10005f8b
#define DAT_10005f8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30bU)))
#undef DAT_10005f99
#define DAT_10005f99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x319U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b88
 */

undefined * recovered_10004b88(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;

  bVar4 = (param_1 & 4) != 0;
  puVar1 = (undefined *)((uintptr_t)pf_module_state+0x326U);
  if (bVar4) {
    puVar1 = (undefined *)((uintptr_t)pf_module_state+0x323U);
  }
  puVar2 = (undefined *)((uintptr_t)pf_module_state+0x321U);
  if (bVar4) {
    puVar2 = (undefined *)((uintptr_t)pf_module_state+0x31eU);
  }
  puVar3 = (undefined *)((uintptr_t)pf_module_state+0x31cU);
  if ((param_1 & 4) != 0) {
    puVar3 = &DAT_10005f99;
  }
  if ((param_1 & 8) != 0) {
    puVar2 = puVar3;
  }
  if ((param_1 & 2) != 0) {
    puVar1 = puVar2;
  }
  bVar4 = (param_1 & 4) != 0;
  puVar2 = (undefined *)((uintptr_t)pf_module_state+0x316U);
  if (bVar4) {
    puVar2 = (undefined *)((uintptr_t)pf_module_state+0x312U);
  }
  puVar3 = (undefined *)((uintptr_t)pf_module_state+0x30fU);
  if (bVar4) {
    puVar3 = &DAT_10005f8b;
  }
  if ((param_1 & 0x10) != 0) {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_10005f88;
  if ((param_1 & 4) != 0) {
    puVar3 = &DAT_10005f84;
  }
  if ((param_1 & 8) != 0) {
    puVar2 = puVar3;
  }
  if (((param_1 ^ 0xffffffff) & 3) == 0) {
    puVar1 = puVar2;
  }
  return puVar1;
}

#undef DAT_10005f84
#undef DAT_10005f88
#undef DAT_10005f8b
#undef DAT_10005f99

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c40
 */

void recovered_10004c40(long *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
    uVar3 = recovered_1000281c((int *)*param_1,param_2,iVar1);
    bVar2 = (int)uVar3 == 0;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c90
 */

long recovered_10004c90(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if ((*param_1 == 0) || (lVar1 = recovered_100028b0(*param_1), lVar1 < 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    lVar1 = -1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cd0
 */

void recovered_10004cd0(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10004d44(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10002ec0((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d44
 */

void recovered_10004d44(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c60(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c4c();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d50
 */

void recovered_10004d50(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  bVar1 = false;
  if (((-1 < param_3) && (param_2 != 0)) && ((int *)*param_1 != (int *)0x0)) {
    lVar2 = recovered_10002578((undefined1 *)param_2,1,param_3,(int *)*param_1);
    bVar1 = lVar2 == param_3;
  }
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = lVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004da4
 */

undefined8 recovered_10004da4(ushort *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (ushort *)0x0) {
LAB_10004dec:
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
      goto LAB_10004dec;
      *param_1 = *(ushort *)(param_2 + 0x18);
    }
    uVar1 = 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df8
 */

bool recovered_10004df8(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = param_2 == 0x20 || param_2 == 0x40;
  if (param_1 != 3) {
    bVar1 = param_1 == 1 && (param_2 - 8U & 0xffe7) == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e2c
 */

void recovered_10004e2c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000500c(param_1,param_2);
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
 * Address: 0x10004e90
 */

uint128 recovered_10004e90(uint3 *param_1,int param_2,int param_3)

{
  unsigned char frame[80] = {0};

  uint uVar1;
  uint128 auVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;

  dVar5 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_20 = 0.0;
      recovered_10000d34(&local_20,param_1,8);
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
      recovered_10000d34(&local_14,param_1,4);
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
  PF_PART8(auVar2, 0) = dVar5;
  return auVar2;
}

#undef local_20
#undef local_14

#undef DAT_10005d58
#define DAT_10005d58 (*(double *)(((uintptr_t)pf_module_state + 0xd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fb0
 */

int recovered_10004fb0(double param_1)

{
  unsigned char frame[64] = {0};

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
      dVar3 = DAT_10005d58;
    }
    lVar2 = recovered_100014fc(dVar3 * param_1);
    sVar1 = (short)lVar2;
  }
  return (int)sVar1;
}

#undef DAT_10005d58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000500c
 */

void recovered_1000500c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005080(param_2);
    uVar2 = param_1[1];
    for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 1) {
      *(undefined2 *)(extraout_x0 + uVar1 * 2) = *(undefined2 *)(*param_1 + uVar1 * 2);
    }
    recovered_10002ec0((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005080
 */

void recovered_10005080(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return;
  }
  size = param_1 * 2;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c60(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c4c();
  }
  return;
}


#undef DAT_10005dad
#define DAT_10005dad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005090
 */

bool recovered_10005090(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10005dad;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_1000520c((long)param_2);
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

#undef DAT_10005dad

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e0
 */

long * recovered_100050e0(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_1000520c(param_2);
  recovered_10005124(param_1,param_2,uVar1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005124
 */

void recovered_10005124(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *data;
  ulong uVar3;
  long lVar4;
  long lVar5;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10005230(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_1000527c(param_1);
    }
    else {
      recovered_100052b4(param_1,uVar1);
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
    recovered_1000532c(&local_50,*param_1 + local_38,uVar1);
    data = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = data;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_10002ec0(data);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000520c
 */

long recovered_1000520c(long param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10005230
 */

undefined8 recovered_10005230(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x1000527c
 */

void recovered_1000527c(long *param_1)

{
  unsigned char frame[64] = {0};

  long extraout_x0;

  if (*param_1 == 0) {
    recovered_10005360(0);
    *param_1 = extraout_x0;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052b4
 */

void recovered_100052b4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005360(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_x0 + param_1[1]) = 0;
    recovered_10002ec0((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000532c
 */

undefined8 * recovered_1000532c(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_10005124(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005360
 */

void recovered_10005360(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002e8c(param_1 + 1);
  *puVar1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000537c
 */

bool recovered_1000537c(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char frame[64] = {0};

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


#undef DAT_10005fa8
#define DAT_10005fa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_10005fad
#define DAT_10005fad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
#undef DAT_10005fb2
#define DAT_10005fb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
#undef DAT_10005fb7
#define DAT_10005fb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x337U)))
#define uStack_48 (*(undefined8 *)(frame + 32))
#define local_58 (*(void * *)(frame + 16))
#define local_50 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053b4
 */

undefined8 recovered_100053b4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[136] = {0};

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
        recovered_10004cd0((long *)&local_58,uVar5 + 0x2c);
        recovered_10005598((long *)&local_58,&DAT_10005fa8,4);
        recovered_100055b0((long *)&local_58,(int)uVar5 + 0x24);
        recovered_10005598((long *)&local_58,&DAT_10005fad,4);
        recovered_10005598((long *)&local_58,&DAT_10005fb2,4);
        recovered_100055b0((long *)&local_58,0x10);
        recovered_10005620((long *)&local_58,1);
        recovered_10005620((long *)&local_58,(uint)*(ushort *)((long)param_1 + 0x1c));
        recovered_100055b0((long *)&local_58,*(undefined4 *)(param_1 + 3));
        recovered_100055b0((long *)&local_58,(int)uVar4);
        recovered_10005620((long *)&local_58,(uVar2 & 0x7fff) << 1);
        recovered_10005620((long *)&local_58,0x10);
        recovered_10005598((long *)&local_58,&DAT_10005fb7,4);
        recovered_100055b0((long *)&local_58,(int)uVar5);
        puVar1 = (ushort *)*param_1;
        for (lVar6 = param_1[1] << 1; lVar6 != 0; lVar6 = lVar6 + -2) {
          recovered_10005620((long *)&local_58,(uint)*puVar1);
          puVar1 = puVar1 + 1;
        }
        recovered_10005668(param_2,&local_58);
        local_50 = 0;
        recovered_10002ec0(local_58);
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_10005fa8
#undef DAT_10005fad
#undef DAT_10005fb2
#undef DAT_10005fb7
#undef uStack_48
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005570
 */

long recovered_10005570(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004aac((long *)(param_1 + 0x10));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005598
 */

void recovered_10005598(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  puVar1 = param_2 + param_3;
  if (*param_1 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = (*param_1 + param_1[1]) - *param_1;
  }
  lVar4 = (long)puVar1 - (long)param_2;
  if (lVar4 != 0) {
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar6 + lVar4) {
      uVar3 = 4;
      if (uVar5 != 0) {
        uVar3 = uVar5;
      }
      do {
        uVar5 = uVar3;
        uVar3 = uVar5 << 1;
      } while (uVar5 < uVar6 + lVar4);
      recovered_10004cd0(param_1,uVar5);
      uVar6 = param_1[1];
    }
    for (; uVar7 < uVar6; uVar6 = uVar6 - 1) {
      puVar2 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar2[lVar4] = *puVar2;
    }
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      *(undefined1 *)(*param_1 + uVar7) = *param_2;
      uVar7 = uVar7 + 1;
    }
    param_1[1] = param_1[1] + lVar4;
  }
  return;
}


#define local_24 (*(undefined1 *)(frame + 16))
#define local_23 (*(undefined1 *)(frame + 17))
#define local_22 (*(undefined1 *)(frame + 18))
#define local_21 (*(undefined1 *)(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(long *param_1,undefined4 param_2)

{
  unsigned char frame[84] = {0};


  local_21 = (undefined1)param_2;
  recovered_100057b0(param_1,&local_21);
  local_22 = (undefined1)((uint)param_2 >> 8);
  recovered_100057b0(param_1,&local_22);
  local_23 = (undefined1)((uint)param_2 >> 0x10);
  recovered_100057b0(param_1,&local_23);
  local_24 = (undefined1)((uint)param_2 >> 0x18);
  recovered_100057b0(param_1,&local_24);
  return;
}

#undef local_24
#undef local_23
#undef local_22
#undef local_21

#define local_22 (*(undefined1 *)(frame + 16))
#define local_21 (*(undefined1 *)(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005620
 */

void recovered_10005620(long *param_1,undefined4 param_2)

{
  unsigned char frame[82] = {0};


  local_21 = (undefined1)param_2;
  recovered_100057b0(param_1,&local_21);
  local_22 = (undefined1)((uint)param_2 >> 8);
  recovered_100057b0(param_1,&local_22);
  return;
}

#undef local_22
#undef local_21

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005668
 */

undefined8 * recovered_10005668(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002ec0((void *)*param_1);
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
 * Address: 0x100056b8
 */

long recovered_100056b8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10004cd0(param_1,uVar5);
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
 * Address: 0x100057b0
 */

long recovered_100057b0(long *param_1,undefined1 *param_2)

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
    recovered_10004cd0(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#undef PTR_recovered_10005570_10008140
#define PTR_recovered_10005570_10008140 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x24c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005818
 */

undefined8 * recovered_10005818(undefined8 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_recovered_10005570_10008140;
  param_1[1] = 0;
  recovered_1000586c((long)param_1,param_2,param_3);
  return param_1;
}

#undef PTR_recovered_10005570_10008140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000586c
 */

void recovered_1000586c(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_10004afc((long *)(param_1 + 0x10),param_2,param_3 | 2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000589c
 */

void recovered_1000589c(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004aac((long *)((long)param_1 + 0x10));
  recovered_10000ca4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c4
 */

void recovered_100058c4(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if ((uint *)*param_1 != (uint *)0x0) {
    if ((-1 < param_3) && (param_2 != 0 || param_3 == 0)) {
      lVar1 = recovered_1000270c((void *)param_2,1,param_3,(uint *)*param_1);
      *(bool *)(param_1 + 1) = lVar1 == param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005924
 */

undefined8 * recovered_10005924(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002ec0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005950
 */

void recovered_10005950(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_1000500c(param_1,param_2);
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
    recovered_1000500c(param_1,param_2);
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
 * Address: 0x100059d0
 */

long recovered_100059d0(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char frame[64] = {0};

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
      recovered_1000500c(param_1,uVar4);
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


#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6440U)))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2388U)))
#undef PTR_DAT_10008028
#define PTR_DAT_10008028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x23a8U)))
#undef PTR_recovered_100038c4_10008078
#define PTR_recovered_100038c4_10008078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x23f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b30
 */

void recovered_10005b30(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_10008008 & 1) == 0) {
    *PTR_DAT_10008008 = 1;
    uVar2 = DAT_1000c0c0;
    puVar1 = PTR_DAT_10008028;
    *(undefined ***)PTR_DAT_10008028 = &PTR_recovered_100038c4_10008078;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_1000c0c0
#undef PTR_DAT_10008008
#undef PTR_DAT_10008028
#undef PTR_recovered_100038c4_10008078

#undef DAT_1000c0c8
#define DAT_1000c0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6448U)))
#undef PTR_DAT_10008020
#define PTR_DAT_10008020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x23a0U)))
#undef PTR_DAT_10008040
#define PTR_DAT_10008040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x23c0U)))
#undef PTR_recovered_100038c8_100080a8
#define PTR_recovered_100038c8_100080a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2428U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b84
 */

void recovered_10005b84(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_10008020 & 1) == 0) {
    *PTR_DAT_10008020 = 1;
    uVar2 = DAT_1000c0c8;
    puVar1 = PTR_DAT_10008040;
    *(undefined ***)PTR_DAT_10008040 = &PTR_recovered_100038c8_100080a8;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_1000c0c8
#undef PTR_DAT_10008020
#undef PTR_DAT_10008040
#undef PTR_recovered_100038c8_100080a8

#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef PTR_DAT_10008010
#define PTR_DAT_10008010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2390U)))
#undef PTR_DAT_10008030
#define PTR_DAT_10008030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x23b0U)))
#undef PTR_recovered_100038c8_100080a8
#define PTR_recovered_100038c8_100080a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2428U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd8
 */

void recovered_10005bd8(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_10008010 & 1) == 0) {
    *PTR_DAT_10008010 = 1;
    uVar2 = DAT_1000c0d0;
    puVar1 = PTR_DAT_10008030;
    *(undefined ***)PTR_DAT_10008030 = &PTR_recovered_100038c8_100080a8;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_1000c0d0
#undef PTR_DAT_10008010
#undef PTR_DAT_10008030
#undef PTR_recovered_100038c8_100080a8

#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6450U)))
#undef PTR_DAT_10008018
#define PTR_DAT_10008018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2398U)))
#undef PTR_DAT_10008038
#define PTR_DAT_10008038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x23b8U)))
#undef PTR_recovered_100038c8_100080a8
#define PTR_recovered_100038c8_100080a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2428U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c2c
 */

void recovered_10005c2c(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_10008018 & 1) == 0) {
    *PTR_DAT_10008018 = 1;
    uVar2 = DAT_1000c0d0;
    puVar1 = PTR_DAT_10008038;
    *(undefined ***)PTR_DAT_10008038 = &PTR_recovered_100038c8_100080a8;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_1000c0d0
#undef PTR_DAT_10008018
#undef PTR_DAT_10008038
#undef PTR_recovered_100038c8_100080a8
