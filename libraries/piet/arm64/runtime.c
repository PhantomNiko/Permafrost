/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10010140
#define DAT_10010140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cdcU)))
#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
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
 * Address: 0x100006a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100006a8(void)

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

  DAT_10010140 = 0;
  uStack_48 = 0;
  DAT_10010148 = 0;
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
    recovered_10001dc8(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_10010148 == 0) {
    uVar4 = _DAT_40010088 & 0xfffffff0;
    if (_DAT_40010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300028 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10001dc8(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  DAT_10010140 = 1;
  return;
}

#undef DAT_10010140
#undef DAT_10010148
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

#undef DAT_10010140
#define DAT_10010140 (*(byte *)(((uintptr_t)pf_module_state + 0x8cdcU)))
#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
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
 * Address: 0x100006b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100006b4(void)

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
  if ((DAT_10010140 & 1) == 0) {
    DAT_10010148 = 0;
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
      recovered_10001dc8(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_10010148 == 0) {
      uVar4 = _DAT_40010088 & 0xfffffff0;
      if (_DAT_40010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300028 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10001dc8(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    DAT_10010140 = 1;
  }
  return;
}

#undef DAT_10010140
#undef DAT_10010148
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

#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000091c
 */

ulong recovered_1000091c(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100006b4();
  uVar1 = 0;
  for (plVar2 = &DAT_10010148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_10010148

#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000968
 */

long recovered_10000968(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100006b4();
  lVar1 = 0;
  for (plVar2 = &DAT_10010148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_10010148

#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009a8
 */

ulong recovered_100009a8(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100006b4();
  uVar1 = 0;
  for (plVar2 = &DAT_10010148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_10010148

#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e4
 */

long recovered_100009e4(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100006b4();
  lVar1 = 0;
  for (plVar2 = &DAT_10010148; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_10010148

#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a14
 */

ulong * recovered_10000a14(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;

  if (param_1 != 0) {
    recovered_100006b4();
    uVar1 = param_1 + 0xfU & 0xfffffffffffffff0;
    for (puVar2 = &DAT_10010148; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
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

#undef DAT_10010148

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aa8
 */

ulong recovered_10000aa8(ulong param_1,uint param_2)

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
 * Address: 0x10000aec
 */

ulong recovered_10000aec(ulong param_1,uint param_2)

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
 * Address: 0x10000b38
 */

long recovered_10000b38(long param_1,uint param_2)

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
 * Address: 0x10000b88
 */

/* WARNING: Removing unreachable block (ram,0x10000bd8) */

void recovered_10000b88(ulong param_1,ulong param_2)

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
 * Address: 0x10000b90
 */

ulong recovered_10000b90(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000bf0
 */

undefined8 recovered_10000bf0(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_10000b90(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c10
 */

long recovered_10000c10(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000b90(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c50
 */

long recovered_10000c50(long param_1,long param_2)

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
  recovered_10000b90(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c9c
 */

void recovered_10000c9c(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca4
 */

int recovered_10000ca4(int param_1)

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
void * recovered_10000cb0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000cf4(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000d38(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d84
 */

void * recovered_10000d84(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da4
 */

void * recovered_10000da4(void *out,void *data,ulong size)

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
 * Address: 0x10000df4
 */

void * recovered_10000df4(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e10
 */

void recovered_10000e10(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e24
 */

void recovered_10000e24(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e38
 */

int recovered_10000e38(void *left,void *right,ulong size)

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
 * Address: 0x10000e60
 */

bool recovered_10000e60(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e70
 */

bool recovered_10000e70(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e80
 */

bool recovered_10000e80(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e94
 */

bool recovered_10000e94(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eb0
 */

bool recovered_10000eb0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec0
 */

bool recovered_10000ec0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ed0
 */

int recovered_10000ed0(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee4
 */

int recovered_10000ee4(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ef8
 */

ulong recovered_10000ef8(char *text)

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
 * Address: 0x10000f1c
 */

int recovered_10000f1c(char *left,char *right)

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
 * Address: 0x10000f44
 */

int recovered_10000f44(char *left,char *right)

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
 * Address: 0x10000f48
 */

void recovered_10000f48(long param_1,long param_2)

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
 * Address: 0x10000f60
 */

void recovered_10000f60(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000ef8(param_1);
    out = recovered_10000cb0(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000d84(out,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f9c
 */

char * recovered_10000f9c(char *param_1,char param_2)

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
 * Address: 0x10000fc4
 */

long recovered_10000fc4(long param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10000f9c(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000100c
 */

char * recovered_1000100c(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000f9c(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000104c
 */

char * recovered_1000104c(char *param_1,char *param_2)

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


#undef DAT_10007ecb
#define DAT_10007ecb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001088
 */

undefined * recovered_10001088(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10007ecb;
}

#undef DAT_10007ecb

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8b9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001094
 */

undefined ** recovered_10001094(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a0
 */

undefined8 recovered_100010a0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010bc
 */

double recovered_100010bc(double param_1,uint param_2)

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
 * Address: 0x100010f0
 */

uint128 recovered_100010f0(double param_1,int *param_2)

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
 * Address: 0x10001164
 */

double recovered_10001164(double left,double right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001188
 */

double recovered_10001188(double left,double right)

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
 * Address: 0x100011e8
 */

double recovered_100011e8(double value)

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
 * Address: 0x10001204
 */

double recovered_10001204(double value)

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
 * Address: 0x10001230
 */

double recovered_10001230(double value)

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


#undef DAT_10007468
#define DAT_10007468 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000126c
 */

double recovered_1000126c(double value)

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
    return (double)iVar1 * DAT_10007468 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_10007468

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001318
 */

long recovered_10001318(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10007470
#define DAT_10007470 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000132c
 */

double recovered_1000132c(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001380(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_10007470);
}

#undef DAT_10007470

#undef DAT_10007478
#define DAT_10007478 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10007480
#define DAT_10007480 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10007488
#define DAT_10007488 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10007490
#define DAT_10007490 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001380
 */

void recovered_10001380(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_10007478 < param_1; param_1 = param_1 + DAT_10007490) {
  }
  for (; param_1 < DAT_10007480; param_1 = param_1 + DAT_10007488) {
  }
  return;
}

#undef DAT_10007478
#undef DAT_10007480
#undef DAT_10007488
#undef DAT_10007490

#undef DAT_10007498
#define DAT_10007498 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013c4
 */

double recovered_100013c4(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001380(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10007498;
}

#undef DAT_10007498

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001410
 */

double recovered_10001410(double value)

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
 * Address: 0x10001420
 */

float recovered_10001420(float left,float right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001454
 */

float recovered_10001454(float param_1)

{
  unsigned char frame[64] = {0};

  int *in_x0;
  uint128 auVar1;

  auVar1 = recovered_100010f0((double)param_1,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000146c
 */

float recovered_1000146c(float param_1)

{
  unsigned char frame[64] = {0};

  uint in_w0;
  double dVar1;

  dVar1 = recovered_100010bc((double)param_1,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001484
 */

float recovered_10001484(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001188((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a0
 */

float recovered_100014a0(float value)

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
 * Address: 0x100014c4
 */

float recovered_100014c4(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001204((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014dc
 */

double recovered_100014dc(double value)

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
 * Address: 0x10001504
 */

float recovered_10001504(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100014dc((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000151c
 */

float recovered_1000151c(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001230((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001534
 */

float recovered_10001534(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000126c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000154c
 */

long recovered_1000154c(double param_1)

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
 * Address: 0x10001560
 */

float recovered_10001560(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000132c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001578
 */

float recovered_10001578(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100013c4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001590
 */

float recovered_10001590(float value)

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
 * Address: 0x100015a0
 */

long recovered_100015a0(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001638;
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
      goto LAB_10001664;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001664;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001664;
    }
LAB_10001638:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001664:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_100016a4((uint)*pbVar4);
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
 * Address: 0x100016a4
 */

uint recovered_100016a4(int param_1)

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
 * Address: 0x100016d4
 */

long recovered_100016d4(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_100017b8;
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
      goto LAB_100017b8;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100017b8;
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
LAB_100017b8:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_100016a4((uint)*pbVar6);
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
 * Address: 0x100017f8
 */

double recovered_100017f8(char *text,char **end)

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
        dVar11 = recovered_100010bc(dVar11,iVar8 * iVar5);
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
 * Address: 0x10001988
 */

float recovered_10001988(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100017f8(text,end);
  return (float)dVar1;
}


#define local_8c (*(int *)(frame + 16))
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
#define pdStack_78 (*(double * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a0
 */

int recovered_100019a0(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10001a04:
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
LAB_10001a90:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001b28;
      case 100:
      case 0x69:
LAB_10001ae0:
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
LAB_10020258:
        if (local_88 < 2) goto LAB_10001a5c;
        *local_80 = 0x3f;
        goto LAB_10001a58;
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
        recovered_10001d00((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
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
        goto LAB_10001a60;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x10001aac;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001cb0((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0xa95U));
        goto code_r0x10001c1c;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001cb0((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_10001a60;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001c1c:
        uVar4 = 0x10;
        goto code_r0x10001c34;
      default:
        if (uVar5 == 0x49) goto LAB_10001ae0;
        if (uVar5 != 0x58) goto LAB_10020258;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001c38;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001c34:
      iVar7 = 0;
LAB_10001c38:
      recovered_10001d00((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_10001a60;
    }
    if (local_88 < 2) goto LAB_10001a5c;
    *local_80 = 0x25;
    goto LAB_10001a58;
  }
  if (bVar1 == 0) {
    if (capacity != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_10001a58;
  }
  goto LAB_10001a5c;
code_r0x10001aac:
  format = format + 1;
  uVar5 = (uint)(byte)*format;
  goto LAB_10001a90;
code_r0x10001b28:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_10001a58:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_10001a5c:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_10001a60:
  format = format + 1;
  goto LAB_10001a04;
}

#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c74
 */

void recovered_10001c74(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10007ed0
#define str_10007ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb0
 */

void recovered_10001cb0(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10007ed0;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001c74(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10007ed0

#undef str_10007ed7
#define str_10007ed7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa73U)))
#undef str_10007ee8
#define str_10007ee8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa84U)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

void recovered_10001d00(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_10007ed7;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_10007ee8;
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
    recovered_10001c74(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_10007ed7
#undef str_10007ee8
#undef local_60

#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001da0
 */

int recovered_10001da0(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100019a0(out,capacity,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_10010148
#define DAT_10010148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc8
 */

void recovered_10001dc8(long param_1,ulong param_2,ulong *param_3)

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
      puVar3 = (ulong *)&DAT_10010148;
      if (DAT_10010148 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_10010148

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
 * Address: 0x10001e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001e20(int param_1)

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

#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f58
 */

void recovered_10001f58(char *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010158 != 0) {
          DAT_10010158 = DAT_10010158 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10002010(1);
        }
        else {
          if (DAT_10010158 - 0x1ffU < 0xfffffffffffffdff || DAT_10010158 == -2) {
            recovered_10002010(0);
          }
          pcVar1 = &DAT_10010160 + DAT_10010158;
          DAT_10010158 = DAT_10010158 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010158
#undef DAT_10010160

#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002010
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002010(int param_1)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010158 != 0) || (param_1 != 0)) {
    if (DAT_10010158 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d84(local_230,&DAT_10010160,DAT_10010158);
      uVar2 = DAT_10010158;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002d50(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_10010158 = 0;
  }
  return;
}

#undef DAT_10010158
#undef DAT_10010160
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000209c(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010158 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000d84(auStack_230,&DAT_10010160,DAT_10010158);
    uVar2 = DAT_10010158;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002d50(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_10010158 = 0;
  return;
}

#undef DAT_10010158
#undef DAT_10010160
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100020a4(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010158 != 0) {
    if (DAT_10010158 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d84(auStack_230,&DAT_10010160,DAT_10010158);
      uVar2 = DAT_10010158;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002d50(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_10010158 = 0;
  }
  return;
}

#undef DAT_10010158
#undef DAT_10010160
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10007efc
#define DAT_10007efc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa98U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020ac
 */

void recovered_100020ac(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_10007efc;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001da0(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001f58(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10007efc
#undef acStack_160

#undef DAT_10007fe6
#define DAT_10007fe6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb82U)))
#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
#undef str_10007eff
#define str_10007eff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9bU)))
#undef str_10007f22
#define str_10007f22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabeU)))
#undef str_10007f5b
#define str_10007f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf7U)))
#undef str_10007f90
#define str_10007f90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2cU)))
#undef str_10007fb6
#define str_10007fb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb52U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002110
 */

/* WARNING: Removing unreachable block (ram,0x1000218c) */

void recovered_10002110(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002164(str_10007eff);
  recovered_10002164(str_10007f22);
  recovered_10002164(str_10007f5b);
  recovered_10002164(str_10007f90);
  recovered_10002164(str_10007fb6);
  pcVar4 = &DAT_10007fe6;
  for (uVar3 = recovered_10000ef8(&DAT_10007fe6); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010158 != 0) {
        DAT_10010158 = DAT_10010158 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10002010(1);
      }
      else {
        if (DAT_10010158 - 0x1ffU < 0xfffffffffffffdff || DAT_10010158 == -2) {
          recovered_10002010(0);
        }
        pcVar1 = &DAT_10010160 + DAT_10010158;
        DAT_10010158 = DAT_10010158 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10007fe6
#undef DAT_10010158
#undef DAT_10010160
#undef str_10007eff
#undef str_10007f22
#undef str_10007f5b
#undef str_10007f90
#undef str_10007fb6

#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002164
 */

void recovered_10002164(char *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10000ef8(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010158 != 0) {
          DAT_10010158 = DAT_10010158 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10002010(1);
        }
        else {
          if (DAT_10010158 - 0x1ffU < 0xfffffffffffffdff || DAT_10010158 == -2) {
            recovered_10002010(0);
          }
          pcVar1 = &DAT_10010160 + DAT_10010158;
          DAT_10010158 = DAT_10010158 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010158
#undef DAT_10010160

#undef DAT_10007fe6
#define DAT_10007fe6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb82U)))
#undef DAT_10010158
#define DAT_10010158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_10010160
#define DAT_10010160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
#undef str_10007fe9
#define str_10007fe9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb85U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

/* WARNING: Removing unreachable block (ram,0x1000218c) */

void recovered_10002190(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10002164(str_10007fe9);
  pcVar4 = &DAT_10007fe6;
  for (uVar3 = recovered_10000ef8(&DAT_10007fe6); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010158 != 0) {
        DAT_10010158 = DAT_10010158 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10002010(1);
      }
      else {
        if (DAT_10010158 - 0x1ffU < 0xfffffffffffffdff || DAT_10010158 == -2) {
          recovered_10002010(0);
        }
        pcVar1 = &DAT_10010160 + DAT_10010158;
        DAT_10010158 = DAT_10010158 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10007fe6
#undef DAT_10010158
#undef DAT_10010160
#undef str_10007fe9

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x40010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100021b4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_100020a4();
    bVar2 = recovered_10002d50(0x44);
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
 * Address: 0x1000222c
 */

undefined8 recovered_1000222c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002230
 */

void recovered_10002230(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002234
 */

undefined8 recovered_10002234(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10007efc
#define DAT_10007efc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa98U)))
#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
#undef str_1000807d
#define str_1000807d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc19U)))
#undef str_1000808a
#define str_1000808a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc26U)))
#undef str_10008098
#define str_10008098 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc34U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000223c
 */

undefined4 * recovered_1000223c(char *param_1,long param_2)

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
    DAT_100100b8 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000f1c(param_1,str_1000807d);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000f1c(param_1,str_1000808a);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000f1c(param_1,str_10008098);
      if (iVar3 != 0) {
        puVar4 = recovered_10000cb0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_100100b8 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000df4(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000f9c((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f9c((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f9c((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000f9c((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f9c((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f9c((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000f9c((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001da0((char *)(puVar4 + 1),0xf1,&DAT_10007efc);
        recovered_10000df4(&uStack_4c,0,0xc);
        uVar6 = recovered_10002478(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_100100b8 = 2;
LAB_10002420:
            recovered_10000cf4(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000f9c((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100024c8((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002420;
              recovered_10000d84(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000cb0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_100100b8 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000df4(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001da0((char *)(puVar4 + 1),0xf1,&DAT_10007efc);
  return puVar4;
}

#undef DAT_10007efc
#undef DAT_100100b8
#undef str_1000807d
#undef str_1000808a
#undef str_10008098
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x40010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002478
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002478(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d50(0x34);
  if ((bVar1) && (_DAT_40010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100024b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010834
#undef _DAT_40010834

#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024c8
 */

undefined8 recovered_100024c8(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000d38(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_100100b8 = 0xc;
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

#undef DAT_100100b8

#undef DAT_10007efc
#define DAT_10007efc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa98U)))
#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
#undef str_1000807d
#define str_1000807d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc19U)))
#undef str_1000808a
#define str_1000808a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc26U)))
#undef str_10008098
#define str_10008098 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc34U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002550
 */

void recovered_10002550(char *param_1,long param_2,int *param_3)

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
    recovered_10002584(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_100100b8 = 0x16;
    return;
  }
  iVar2 = recovered_10000f1c(param_1,str_1000807d);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000f1c(param_1,str_1000808a);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000f1c(param_1,str_10008098);
      if (iVar3 != 0) {
        puVar4 = recovered_10000cb0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_100100b8 = 0xc;
          return;
        }
        recovered_10000df4(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000f9c((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f9c((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f9c((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000f9c((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f9c((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f9c((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000f9c((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001da0((char *)(puVar4 + 1),0xf1,&DAT_10007efc);
        recovered_10000df4(&uStack_4c,0,0xc);
        uVar6 = recovered_10002478(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_100100b8 = 2;
LAB_10002420:
            recovered_10000cf4(puVar4);
            return;
          }
        }
        else {
          pcVar5 = recovered_10000f9c((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100024c8((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002420;
              recovered_10000d84(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000cb0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_100100b8 = 0xc;
    return;
  }
  recovered_10000df4(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001da0((char *)(puVar4 + 1),0xf1,&DAT_10007efc);
  return;
}

#undef DAT_10007efc
#undef DAT_100100b8
#undef str_1000807d
#undef str_1000808a
#undef str_10008098
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002584
 */

undefined8 recovered_10002584(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002924(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000cf4(*(void **)(param_1 + 0x40));
    }
    recovered_10000cf4(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c8
 */

long recovered_100025c8(undefined1 *param_1,long param_2,long param_3,int *param_4)

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
          uVar3 = recovered_10002678(param_4);
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


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002678
 */

uint recovered_10002678(int *param_1)

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
LAB_10002710:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100021b4((long)text,0x1fe,&DAT_10007ecf,0);
      if (bVar2) {
        uVar3 = recovered_10000ef8(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002710;
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

#undef DAT_10007ecf

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000275c
 */

long recovered_1000275c(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10001f58(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_1000285c;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_100024c8((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000df4((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000d84((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_1000285c;
    }
  }
  param_3 = 0;
LAB_1000285c:
  return param_3;
}


#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000286c
 */

undefined8 recovered_1000286c(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_100100b8 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10002878;
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
LAB_10002878:
  DAT_100100b8 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_100100b8

#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002900
 */

undefined8 recovered_10002900(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_100100b8 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_100100b8

#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002924
 */

undefined8 recovered_10002924(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002b00(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_100100b8 = 5;
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

#undef DAT_100100b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002998
 */

undefined1 recovered_10002998(long param_1)

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
 * Address: 0x100029a4
 */

undefined1 recovered_100029a4(long param_1)

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
 * Address: 0x100029b0
 */

void recovered_100029b0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c4
 */

uint recovered_100029c4(uint param_1,long param_2)

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


#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029e8
 */

undefined8 recovered_100029e8(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_100100b8 = 0x16;
  }
  else {
    uVar1 = recovered_10002a20(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_100100b8 = 5;
  }
  return 0xffffffff;
}

#undef DAT_100100b8

#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_4001083c
#define _DAT_4001083c (*(uint *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002a20(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d50(0x3c);
  if ((bVar1) && (_DAT_4001083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_4001083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_4001083c
#undef _DAT_4001083c

#undef DAT_100100b8
#define DAT_100100b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c54U)))
#define uStack_28 (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a64
 */

undefined8 recovered_10002a64(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_100100b8 = 0x16;
  }
  else {
    recovered_10000df4(&uStack_2c,0,0xc);
    uVar1 = recovered_10002478(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_100100b8 = 2;
    }
    else {
      uVar1 = recovered_10002b00(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002a20(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_100100b8 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_100100b8
#undef uStack_28
#undef uStack_2c

#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010838
#define _DAT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d50(0x38);
  if ((bVar1) && (_DAT_40010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002b50. Too many branches */
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
 * Address: 0x10002b60
 */

undefined8 recovered_10002b60(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000df4(&uStack_3c,0,0xc);
    uVar2 = recovered_10002478(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_10000cb0((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000d84(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10002c00
 */

bool recovered_10002c00(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002b00(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c2c
 */

undefined8 recovered_10002c2c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

void recovered_10002c30(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c34
 */

undefined8 recovered_10002c34(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c38
 */

undefined8 recovered_10002c38(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3c
 */

undefined8 recovered_10002c3c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c40
 */

char * recovered_10002c40(long param_1,char param_2,long param_3)

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
 * Address: 0x10002c64
 */

int recovered_10002c64(char *left,char *right,ulong size)

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


#undef DAT_1000800c
#define DAT_1000800c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba8U)))
#undef str_1000800f
#define str_1000800f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbabU)))
#undef str_1000801c
#define str_1000801c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb8U)))
#undef str_10008026
#define str_10008026 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc2U)))
#undef str_1000803a
#define str_1000803a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd6U)))
#undef str_10008048
#define str_10008048 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe4U)))
#undef str_1000805a
#define str_1000805a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf6U)))
#undef str_10008066
#define str_10008066 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc02U)))
#undef str_10008077
#define str_10008077 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc13U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c94
 */

char * recovered_10002c94(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000800c;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002cc0_caseD_1;
  case 2:
    return str_1000800f;
  case 5:
    return str_1000801c;
  case 9:
    return str_10008026;
  case 0xc:
    return str_1000803a;
  case 0xd:
    return str_10008048;
  default:
    if (param_1 == 0x11) {
      return str_1000805a;
    }
    if (param_1 == 0x16) {
      return str_10008066;
    }
switchD_10002cc0_caseD_1:
    return str_10008077;
  }
}

#undef DAT_1000800c
#undef str_1000800f
#undef str_1000801c
#undef str_10008026
#undef str_1000803a
#undef str_10008048
#undef str_1000805a
#undef str_10008066
#undef str_10008077

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d34
 */

undefined8 recovered_10002d34(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d38
 */

undefined8 recovered_10002d38(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10010150
#define DAT_10010150 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d3c
 */

void recovered_10002d3c(void)

{
  unsigned char frame[64] = {0};

  DAT_10010150 = DAT_10010150 + 1;
  return;
}

#undef DAT_10010150

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
 * Address: 0x10002d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002d50(int param_1)

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
 * Address: 0x10002e1c
 */

void recovered_10002e1c(long param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked, returns_twice)) unsigned long recovered_10002e30(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002e5c(unsigned long *context,int value)
{
 __asm__ volatile("cmp w1,#0\ncsinc w1,w1,wzr,ne\nldp x19,x20,[x0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nmov w0,w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

void recovered_10002e90(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10000c9c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002ea0);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea4
 */

undefined8 recovered_10002ea4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eac
 */

void recovered_10002eac(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002ebc(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002e90();
}


#undef DAT_10010360
#define DAT_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8efcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ebc
 */

void recovered_10002ebc(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = DAT_10010360;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10010360 = param_1;
  return;
}

#undef DAT_10010360

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002edc
 */

void * recovered_10002edc(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cb0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f0c
 */

void * recovered_10002f0c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cb0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f10
 */

void recovered_10002f10(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f28
 */

void recovered_10002f28(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f40
 */

void recovered_10002f40(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f58
 */

void recovered_10002f58(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f70
 */

undefined8 recovered_10002f70(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f78
 */

uint recovered_10002f78(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f88
 */

void recovered_10002f88(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f98
 */

void recovered_10002f98(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f9c
 */

undefined1 * recovered_10002f9c(ulong param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000cb0(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002e90();
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
 * Address: 0x10002fe4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002fe4(long param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10001e20(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

long recovered_10002ff4(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_10010360
#define DAT_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8efcU)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ffc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002ffc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10010360;
  if (DAT_10010360 != 0) {
    puVar1 = (undefined8 *)(DAT_10010360 + 0x10);
    DAT_10010360 = *(long *)(DAT_10010360 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_10001e20(0x50);
      if ((bVar3) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_40010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010360
#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003054
 */

void recovered_10003054(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003074((undefined8 *)(param_1 + -0x30));
}


#undef DAT_10010368
#define DAT_10010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8f04U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003074
 */

void recovered_10003074(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10010368;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_100030d4;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_1000356c((long)puVar2,(undefined8 *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003180(param_1);
LAB_100030d4:
                    /* WARNING: Subroutine does not return */
  recovered_10002e90();
}

#undef DAT_10010368
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010360
#define DAT_10010360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8efcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d8
 */

void recovered_100030d8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010360;
  if (DAT_10010360 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002e90();
  }
  *(undefined1 *)(DAT_10010360 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10003074(puVar1);
}

#undef DAT_10010360

#undef DAT_10010368
#define DAT_10010368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8f04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003108
 */

void recovered_10003108(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_10010368;
  DAT_10010368 = param_1;
  return;
}

#undef DAT_10010368

#undef DAT_10010368
#define DAT_10010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8f04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000311c
 */

void recovered_1000311c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010368;
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

#undef DAT_10010368

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003148
 */

void recovered_10003148(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

                    /* WARNING: Subroutine does not return */
  recovered_10003074(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003154
 */

void recovered_10003154(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002e90();
}


#undef DAT_10010368
#define DAT_10010368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8f04U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

undefined8 recovered_10003160(undefined8 *param_1)

{
  unsigned char frame[128] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_10010368 != (long *)0x0) {
    DAT_10010368 = (long *)*DAT_10010368;
  }
  puVar2 = (undefined8 *)recovered_10003180(param_1);
  plVar3 = DAT_10010368;
  while( true ) {
    DAT_10010368 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002e90();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_1000356c((long)plVar3,(undefined8 *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003214;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003214:
  recovered_10002e1c((long)plVar3);
  recovered_10003160(extraout_x0);
  return 0;
}

#undef DAT_10010368
#undef uStack_50
#undef uStack_48

#undef DAT_10010368
#define DAT_10010368 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8f04U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003180
 */

undefined8 recovered_10003180(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_10010368;
  while( true ) {
    DAT_10010368 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002e90();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_1000356c((long)plVar2,(undefined8 *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003214;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10003214:
  recovered_10002e1c((long)plVar2);
  recovered_10003160(extraout_x0);
  return 0;
}

#undef DAT_10010368
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000321c
 */

undefined8 recovered_1000321c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

  recovered_10003160(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003228
 */

undefined8 recovered_10003228(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003230
 */

void recovered_10003230(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002e90();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000323c
 */

long recovered_1000323c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_1000327c(*(undefined8 **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


#undef DAT_10010110
#define DAT_10010110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000327c
 */

bool recovered_1000327c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (undefined8 *)0x0) {
LAB_10003300:
    bVar3 = true;
  }
  else {
    while ((puVar4 = param_1, bVar3 = puVar4 != (undefined8 *)0x0, puVar4 != param_2 &&
           (puVar4 != (undefined8 *)0x0))) {
      pcVar5 = (char *)puVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003300;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003300;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (undefined8 *)0x0;
      if ((undefined *)*puVar4 == &DAT_10010110) {
        param_1 = (undefined8 *)puVar4[2];
      }
    }
  }
  return bVar3;
}

#undef DAT_10010110

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003308
 */

void recovered_10003308(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000330c
 */

undefined8 recovered_1000330c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003314
 */

bool recovered_10003314(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003324
 */

bool recovered_10003324(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000335c
 */

bool recovered_1000335c(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003378
 */

bool recovered_10003378(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003390
 */

bool recovered_10003390(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033a8
 */

bool recovered_100033a8(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033c0
 */

bool recovered_100033c0(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d8
 */

double recovered_100033d8(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_100011e8(value);
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
 * Address: 0x10003424
 */

long recovered_10003424(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003464;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003464:
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
      goto LAB_100034e8;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100034e8;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100034e8;
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
LAB_100034e8:
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
 * Address: 0x10003568
 */

long recovered_10003568(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003464;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003464:
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
      goto LAB_100034e8;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100034e8;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100034e8;
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
LAB_100034e8:
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

#undef DAT_100074d8
#define DAT_100074d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000356c
 */

undefined8 recovered_1000356c(long param_1,undefined8 *param_2,undefined2 *param_3)

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
      recovered_10003744((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10003838(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10003838(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10003838(&local_68);
        uVar5 = recovered_10003838(&local_68);
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
            uVar5 = recovered_1000389c(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_1000389c(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_100074d8 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10003744((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_1000327c(param_2,puVar6);
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

#undef DAT_100074d8
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003744
 */

ulong * recovered_10003744(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10003870(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_100037fc;
  case 1:
    puVar1 = (ulong *)recovered_10003838(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10003870(pbVar5,2);
    goto LAB_100037f8;
  case 3:
    puVar1 = (ulong *)recovered_10003870(pbVar5,4);
    goto LAB_100037c0;
  default:
    goto switchD_1000378c_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_1000389c(param_2);
    break;
  case 10:
    uVar3 = recovered_10003870(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_100037f8:
    pbVar4 = pbVar5 + 2;
LAB_100037fc:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10003870(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_100037c0:
    pbVar4 = pbVar5 + 4;
    goto LAB_100037fc;
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
switchD_1000378c_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003838
 */

ulong recovered_10003838(undefined8 *param_1)

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
 * Address: 0x10003870
 */

ulong recovered_10003870(byte *param_1,long param_2)

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
 * Address: 0x1000389c
 */

ulong recovered_1000389c(undefined8 *param_1)

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
 * Address: 0x10003914
 */

void recovered_10003914(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003918
 */

void recovered_10003918(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000391c
 */

void recovered_1000391c(undefined1 *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  *(long *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  recovered_10003964((long *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return;
}


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003964
 */

long * recovered_10003964(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_10007ecf;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_10005588(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_10007ecf

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039a8
 */

void recovered_100039a8(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  recovered_100039d8((undefined8 *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d8
 */

undefined8 * recovered_100039d8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_10002f10((void *)*param_1);
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
 * Address: 0x10003a24
 */

void recovered_10003a24(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a40
 */

void recovered_10003a40(undefined1 *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = 2;
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(ulong *)(param_1 + 0x28) = param_2;
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a64
 */

void recovered_10003a64(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a80
 */

void recovered_10003a80(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  long *in_x1;

  *param_1 = 1;
  recovered_10003964((long *)(param_1 + 8),in_x1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aa8
 */

void recovered_10003aa8(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x1;

  *param_1 = 1;
  recovered_100039d8((undefined8 *)(param_1 + 8),in_x1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad0
 */

void recovered_10003ad0(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  return;
}


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
#define abStack_40 (*(byte (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af0
 */

void recovered_10003af0(undefined8 *param_1,char *param_2)

{
  unsigned char frame[112] = {0};

  undefined1 *puVar1;
  uint128 auVar2;

  if (*param_2 == '\x02') {
    auVar2 = recovered_10005784(abStack_40,abStack_40 + 0x20,*(ulong *)(param_2 + 0x20),10);
    if (PF_PART4(auVar2, 8) == 0) {
      recovered_100056f4(param_1,(long)abStack_40,PF_PART8(auVar2, 0) - (long)abStack_40);
    }
    else {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    return;
  }
  if (*param_2 != '\x01') {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10007ecf;
  if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 8);
  }
  recovered_10005588(param_1,(long)puVar1,*(ulong *)(param_2 + 0x10));
  return;
}

#undef DAT_10007ecf
#undef abStack_40

#define abStack_40 (*(byte (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b24
 */

void recovered_10003b24(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] = {0};

  uint128 auVar1;

  auVar1 = recovered_10005784(abStack_40,abStack_40 + 0x20,param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_100056f4(param_1,(long)abStack_40,PF_PART8(auVar1, 0) - (long)abStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef abStack_40

#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
#undef DAT_100100b8
#define DAT_100100b8 (*(int *)(((uintptr_t)pf_module_state + 0x8c54U)))
#define local_38 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b80
 */

undefined8 recovered_10003b80(char *param_1)

{
  unsigned char frame[104] = {0};

  byte *pbVar1;
  char *pcVar2;
  undefined1 *puVar3;
  long lVar4;

  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 0x10) != 0) {
      local_38 = (char *)0x0;
      DAT_100100b8 = 0;
      pbVar1 = &DAT_10007ecf;
      if (*(byte **)(param_1 + 8) != (byte *)0x0) {
        pbVar1 = *(byte **)(param_1 + 8);
      }
      lVar4 = recovered_10003568(pbVar1,&local_38,10);
      pcVar2 = &DAT_10007ecf;
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar2 = *(char **)(param_1 + 8);
      }
      if ((((local_38 != (char *)0x0) && (local_38 != pcVar2)) && (*local_38 == '\0')) &&
         (DAT_100100b8 != 0x22)) {
        return lVar4;
      }
      if (((2 < *(ulong *)(param_1 + 0x10)) && (*pcVar2 == '0')) &&
         ((byte)(pcVar2[1] | 0x20U) == 0x78)) {
        local_38 = (char *)0x0;
        DAT_100100b8 = 0;
        lVar4 = recovered_10003568((byte *)(pcVar2 + 2),&local_38,0x10);
        puVar3 = &DAT_10007ecf;
        if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
          puVar3 = *(undefined1 **)(param_1 + 8);
        }
        if (((local_38 != (char *)0x0) && (local_38 != puVar3 + 2)) &&
           ((*local_38 == '\0' && (DAT_100100b8 != 0x22)))) {
          return lVar4;
        }
      }
    }
  }
  else if (*param_1 == '\x02') {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}

#undef DAT_10007ecf
#undef DAT_100100b8
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca8
 */

undefined8 * recovered_10003ca8(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[10] = 0;
  recovered_10003d28((long)param_1);
  recovered_10004738(param_1);
  return param_1;
}


#undef PTR_recovered_10005f14_1000c0d8
#define PTR_recovered_10005f14_1000c0d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4c74U)))
#undef PTR_recovered_10006010_1000c130
#define PTR_recovered_10006010_1000c130 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4cccU)))
#undef PTR_recovered_100060ec_1000c178
#define PTR_recovered_100060ec_1000c178 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4d14U)))
#undef PTR_recovered_10006148_1000c1c0
#define PTR_recovered_10006148_1000c1c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4d5cU)))
#undef PTR_recovered_100061ac_1000c208
#define PTR_recovered_100061ac_1000c208 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4da4U)))
#undef PTR_recovered_1000621c_1000c250
#define PTR_recovered_1000621c_1000c250 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4decU)))
#undef PTR_recovered_100062a4_1000c298
#define PTR_recovered_100062a4_1000c298 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e34U)))
#undef PTR_recovered_100063a8_1000c2e0
#define PTR_recovered_100063a8_1000c2e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e7cU)))
#undef PTR_recovered_100064b4_1000c328
#define PTR_recovered_100064b4_1000c328 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ec4U)))
#undef PTR_recovered_10006744_1000c370
#define PTR_recovered_10006744_1000c370 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f0cU)))
#undef PTR_recovered_1000679c_1000c3b8
#define PTR_recovered_1000679c_1000c3b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f54U)))
#undef PTR_recovered_100067dc_1000c400
#define PTR_recovered_100067dc_1000c400 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f9cU)))
#undef PTR_recovered_100069e8_1000c448
#define PTR_recovered_100069e8_1000c448 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4fe4U)))
#undef PTR_recovered_10006a94_1000c490
#define PTR_recovered_10006a94_1000c490 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x502cU)))
#undef PTR_recovered_10006af0_1000c4d8
#define PTR_recovered_10006af0_1000c4d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5074U)))
#undef PTR_recovered_10006b50_1000c520
#define PTR_recovered_10006b50_1000c520 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x50bcU)))
#undef PTR_recovered_10006bac_1000c568
#define PTR_recovered_10006bac_1000c568 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5104U)))
#undef PTR_recovered_10006c0c_1000c5b0
#define PTR_recovered_10006c0c_1000c5b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x514cU)))
#undef PTR_recovered_10006c68_1000c5f8
#define PTR_recovered_10006c68_1000c5f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5194U)))
#undef PTR_recovered_10006cc8_1000c640
#define PTR_recovered_10006cc8_1000c640 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51dcU)))
#undef PTR_recovered_10006d5c_1000c688
#define PTR_recovered_10006d5c_1000c688 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef PTR_recovered_10006de4_1000c6d0
#define PTR_recovered_10006de4_1000c6d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x526cU)))
#define plStack_158 (*(long * *)(frame + 432))
#define pvStack_150 (*(void * *)(frame + 440))
#define uStack_148 (*(undefined8 *)(frame + 448))
#define plStack_138 (*(long * *)(frame + 464))
#define uStack_129 (*(undefined1 *)(frame + 479))
#define pvStack_128 (*(void * *)(frame + 480))
#define uStack_120 (*(undefined8 *)(frame + 488))
#define plStack_110 (*(long * *)(frame + 504))
#define pvStack_108 (*(void * *)(frame + 512))
#define uStack_100 (*(undefined8 *)(frame + 520))
#define plStack_f0 (*(long * *)(frame + 536))
#define pvStack_e8 (*(void * *)(frame + 544))
#define uStack_e0 (*(undefined8 *)(frame + 552))
#define plStack_d0 (*(long * *)(frame + 568))
#define pvStack_c8 (*(void * *)(frame + 576))
#define uStack_c0 (*(undefined8 *)(frame + 584))
#define plStack_b0 (*(long * *)(frame + 600))
#define pvStack_a8 (*(void * *)(frame + 608))
#define uStack_a0 (*(undefined8 *)(frame + 616))
#define plStack_90 (*(long * *)(frame + 632))
#define pvStack_88 (*(void * *)(frame + 640))
#define uStack_80 (*(undefined8 *)(frame + 648))
#define plStack_70 (*(long * *)(frame + 664))
#define pvStack_68 (*(void * *)(frame + 672))
#define uStack_60 (*(undefined8 *)(frame + 680))
#define plStack_50 (*(long * *)(frame + 696))
#define pvStack_48 (*(void * *)(frame + 704))
#define uStack_40 (*(undefined8 *)(frame + 712))
#define plStack_2f8 (*(long * *)(frame + 16))
#define pvStack_2f0 (*(void * *)(frame + 24))
#define uStack_2e8 (*(undefined8 *)(frame + 32))
#define plStack_2d8 (*(long * *)(frame + 48))
#define pvStack_2d0 (*(void * *)(frame + 56))
#define uStack_2c8 (*(undefined8 *)(frame + 64))
#define plStack_2b8 (*(long * *)(frame + 80))
#define pvStack_2b0 (*(void * *)(frame + 88))
#define uStack_2a8 (*(undefined8 *)(frame + 96))
#define plStack_298 (*(long * *)(frame + 112))
#define pvStack_290 (*(void * *)(frame + 120))
#define uStack_288 (*(undefined8 *)(frame + 128))
#define plStack_278 (*(long * *)(frame + 144))
#define pvStack_270 (*(void * *)(frame + 152))
#define uStack_268 (*(undefined8 *)(frame + 160))
#define plStack_258 (*(long * *)(frame + 176))
#define local_12b (*(undefined2 *)(frame + 477))
#define pvStack_250 (*(void * *)(frame + 184))
#define uStack_248 (*(undefined8 *)(frame + 192))
#define plStack_238 (*(long * *)(frame + 208))
#define pvStack_230 (*(void * *)(frame + 216))
#define uStack_228 (*(undefined8 *)(frame + 224))
#define plStack_218 (*(long * *)(frame + 240))
#define pvStack_210 (*(void * *)(frame + 248))
#define uStack_208 (*(undefined8 *)(frame + 256))
#define plStack_1f8 (*(long * *)(frame + 272))
#define pvStack_1f0 (*(void * *)(frame + 280))
#define uStack_1e8 (*(undefined8 *)(frame + 288))
#define plStack_1d8 (*(long * *)(frame + 304))
#define pvStack_1d0 (*(void * *)(frame + 312))
#define uStack_1c8 (*(undefined8 *)(frame + 320))
#define plStack_1b8 (*(long * *)(frame + 336))
#define pvStack_1b0 (*(void * *)(frame + 344))
#define uStack_1a8 (*(undefined8 *)(frame + 352))
#define plStack_198 (*(long * *)(frame + 368))
#define pvStack_190 (*(void * *)(frame + 376))
#define uStack_188 (*(undefined8 *)(frame + 384))
#define plStack_178 (*(long * *)(frame + 400))
#define pvStack_170 (*(void * *)(frame + 408))
#define uStack_168 (*(undefined8 *)(frame + 416))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d28
 */

void recovered_10003d28(long param_1)

{
  unsigned char frame[808] = {0};


  recovered_100051f8((long *)(param_1 + 0x20));
  local_12b = (ushort)PF_PART1(local_12b, 1) << 8;
  recovered_10005e54((long *)&pvStack_48,(undefined1 *)&local_12b,1);
  plStack_50 = recovered_10002edc(0x10);
  *plStack_50 = (long)&PTR_recovered_10005f14_1000c0d8;
  recovered_10005074(param_1,1,&pvStack_48,(long *)&plStack_50);
  if (plStack_50 != (long *)0x0) {
    (**(code **)(*plStack_50 + 8))();
  }
  uStack_40 = 0;
  recovered_10002f10(pvStack_48);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_10005e54((long *)&pvStack_68,(undefined1 *)&local_12b,1);
  plStack_70 = recovered_10002edc(0x10);
  *plStack_70 = (long)&PTR_recovered_10006010_1000c130;
  recovered_10005074(param_1,2,&pvStack_68,(long *)&plStack_70);
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 8))();
  }
  uStack_60 = 0;
  recovered_10002f10(pvStack_68);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_10005e54((long *)&pvStack_88,(undefined1 *)&local_12b,1);
  plStack_90 = recovered_10002edc(0x10);
  *plStack_90 = (long)&PTR_recovered_100060ec_1000c178;
  recovered_10005074(param_1,3,&pvStack_88,(long *)&plStack_90);
  if (plStack_90 != (long *)0x0) {
    (**(code **)(*plStack_90 + 8))();
  }
  uStack_80 = 0;
  recovered_10002f10(pvStack_88);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_10005e54((long *)&pvStack_a8,(undefined1 *)&local_12b,1);
  plStack_b0 = recovered_10002edc(0x10);
  *plStack_b0 = (long)&PTR_recovered_10006148_1000c1c0;
  recovered_10005074(param_1,4,&pvStack_a8,(long *)&plStack_b0);
  if (plStack_b0 != (long *)0x0) {
    (**(code **)(*plStack_b0 + 8))();
  }
  uStack_a0 = 0;
  recovered_10002f10(pvStack_a8);
  local_12b = local_12b & 0xff00;
  recovered_10005e54((long *)&pvStack_c8,(undefined1 *)&local_12b,1);
  plStack_d0 = recovered_10002edc(0x10);
  *plStack_d0 = (long)&PTR_recovered_100061ac_1000c208;
  recovered_10005074(param_1,5,&pvStack_c8,(long *)&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    (**(code **)(*plStack_d0 + 8))();
  }
  uStack_c0 = 0;
  recovered_10002f10(pvStack_c8);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_10005e54((long *)&pvStack_e8,(undefined1 *)&local_12b,1);
  plStack_f0 = recovered_10002edc(0x10);
  *plStack_f0 = (long)&PTR_recovered_1000621c_1000c250;
  recovered_10005074(param_1,6,&pvStack_e8,(long *)&plStack_f0);
  if (plStack_f0 != (long *)0x0) {
    (**(code **)(*plStack_f0 + 8))();
  }
  uStack_e0 = 0;
  recovered_10002f10(pvStack_e8);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_10005e54((long *)&pvStack_108,(undefined1 *)&local_12b,1);
  plStack_110 = recovered_10002edc(0x10);
  *plStack_110 = (long)&PTR_recovered_100062a4_1000c298;
  recovered_10005074(param_1,7,&pvStack_108,(long *)&plStack_110);
  if (plStack_110 != (long *)0x0) {
    (**(code **)(*plStack_110 + 8))();
  }
  uStack_100 = 0;
  recovered_10002f10(pvStack_108);
  local_12b = 0x101;
  uStack_129 = 1;
  recovered_10005e54((long *)&pvStack_128,(undefined1 *)&local_12b,3);
  plStack_138 = recovered_10002edc(0x10);
  *plStack_138 = (long)&PTR_recovered_100063a8_1000c2e0;
  recovered_10005074(param_1,8,&pvStack_128,(long *)&plStack_138);
  if (plStack_138 != (long *)0x0) {
    (**(code **)(*plStack_138 + 8))();
  }
  uStack_120 = 0;
  recovered_10002f10(pvStack_128);
  local_12b = 0x101;
  uStack_129 = 0;
  recovered_10005e54((long *)&pvStack_150,(undefined1 *)&local_12b,3);
  plStack_158 = recovered_10002edc(0x10);
  *plStack_158 = (long)&PTR_recovered_100064b4_1000c328;
  recovered_10005074(param_1,9,&pvStack_150,(long *)&plStack_158);
  if (plStack_158 != (long *)0x0) {
    (**(code **)(*plStack_158 + 8))();
  }
  uStack_148 = 0;
  recovered_10002f10(pvStack_150);
  local_12b = 0x101;
  recovered_10005e54((long *)&pvStack_170,(undefined1 *)&local_12b,2);
  plStack_178 = recovered_10002edc(0x10);
  *plStack_178 = (long)&PTR_recovered_10006744_1000c370;
  recovered_10005074(param_1,10,&pvStack_170,(long *)&plStack_178);
  if (plStack_178 != (long *)0x0) {
    (**(code **)(*plStack_178 + 8))();
  }
  uStack_168 = 0;
  recovered_10002f10(pvStack_170);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_10005e54((long *)&pvStack_190,(undefined1 *)&local_12b,1);
  plStack_198 = recovered_10002edc(0x10);
  *plStack_198 = (long)&PTR_recovered_1000679c_1000c3b8;
  recovered_10005074(param_1,0xb,&pvStack_190,(long *)&plStack_198);
  if (plStack_198 != (long *)0x0) {
    (**(code **)(*plStack_198 + 8))();
  }
  uStack_188 = 0;
  recovered_10002f10(pvStack_190);
  local_12b = 0x202;
  recovered_10005e54((long *)&pvStack_1b0,(undefined1 *)&local_12b,2);
  plStack_1b8 = recovered_10002edc(0x10);
  *plStack_1b8 = (long)&PTR_recovered_100067dc_1000c400;
  recovered_10005074(param_1,0xc,&pvStack_1b0,(long *)&plStack_1b8);
  if (plStack_1b8 != (long *)0x0) {
    (**(code **)(*plStack_1b8 + 8))();
  }
  uStack_1a8 = 0;
  recovered_10002f10(pvStack_1b0);
  local_12b = 2;
  recovered_10005e54((long *)&pvStack_1d0,(undefined1 *)&local_12b,2);
  plStack_1d8 = recovered_10002edc(0x10);
  *plStack_1d8 = (long)&PTR_recovered_100069e8_1000c448;
  recovered_10005074(param_1,0xd,&pvStack_1d0,(long *)&plStack_1d8);
  if (plStack_1d8 != (long *)0x0) {
    (**(code **)(*plStack_1d8 + 8))();
  }
  uStack_1c8 = 0;
  recovered_10002f10(pvStack_1d0);
  local_12b = 0x102;
  recovered_10005e54((long *)&pvStack_1f0,(undefined1 *)&local_12b,2);
  plStack_1f8 = recovered_10002edc(0x10);
  *plStack_1f8 = (long)&PTR_recovered_10006a94_1000c490;
  recovered_10005074(param_1,0xe,&pvStack_1f0,(long *)&plStack_1f8);
  if (plStack_1f8 != (long *)0x0) {
    (**(code **)(*plStack_1f8 + 8))();
  }
  uStack_1e8 = 0;
  recovered_10002f10(pvStack_1f0);
  local_12b = 0x202;
  recovered_10005e54((long *)&pvStack_210,(undefined1 *)&local_12b,2);
  plStack_218 = recovered_10002edc(0x10);
  *plStack_218 = (long)&PTR_recovered_10006af0_1000c4d8;
  recovered_10005074(param_1,0xf,&pvStack_210,(long *)&plStack_218);
  if (plStack_218 != (long *)0x0) {
    (**(code **)(*plStack_218 + 8))();
  }
  uStack_208 = 0;
  recovered_10002f10(pvStack_210);
  local_12b = 0x102;
  recovered_10005e54((long *)&pvStack_230,(undefined1 *)&local_12b,2);
  plStack_238 = recovered_10002edc(0x10);
  *plStack_238 = (long)&PTR_recovered_10006b50_1000c520;
  recovered_10005074(param_1,0x10,&pvStack_230,(long *)&plStack_238);
  if (plStack_238 != (long *)0x0) {
    (**(code **)(*plStack_238 + 8))();
  }
  uStack_228 = 0;
  recovered_10002f10(pvStack_230);
  local_12b = 0x202;
  recovered_10005e54((long *)&pvStack_250,(undefined1 *)&local_12b,2);
  plStack_258 = recovered_10002edc(0x10);
  *plStack_258 = (long)&PTR_recovered_10006bac_1000c568;
  recovered_10005074(param_1,0x11,&pvStack_250,(long *)&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (**(code **)(*plStack_258 + 8))();
  }
  uStack_248 = 0;
  recovered_10002f10(pvStack_250);
  local_12b = 0x102;
  recovered_10005e54((long *)&pvStack_270,(undefined1 *)&local_12b,2);
  plStack_278 = recovered_10002edc(0x10);
  *plStack_278 = (long)&PTR_recovered_10006c0c_1000c5b0;
  recovered_10005074(param_1,0x12,&pvStack_270,(long *)&plStack_278);
  if (plStack_278 != (long *)0x0) {
    (**(code **)(*plStack_278 + 8))();
  }
  uStack_268 = 0;
  recovered_10002f10(pvStack_270);
  local_12b = 0x202;
  recovered_10005e54((long *)&pvStack_290,(undefined1 *)&local_12b,2);
  plStack_298 = recovered_10002edc(0x10);
  *plStack_298 = (long)&PTR_recovered_10006c68_1000c5f8;
  recovered_10005074(param_1,0x13,&pvStack_290,(long *)&plStack_298);
  if (plStack_298 != (long *)0x0) {
    (**(code **)(*plStack_298 + 8))();
  }
  uStack_288 = 0;
  recovered_10002f10(pvStack_290);
  local_12b = 0x102;
  recovered_10005e54((long *)&pvStack_2b0,(undefined1 *)&local_12b,2);
  plStack_2b8 = recovered_10002edc(0x10);
  *plStack_2b8 = (long)&PTR_recovered_10006cc8_1000c640;
  recovered_10005074(param_1,0x14,&pvStack_2b0,(long *)&plStack_2b8);
  if (plStack_2b8 != (long *)0x0) {
    (**(code **)(*plStack_2b8 + 8))();
  }
  uStack_2a8 = 0;
  recovered_10002f10(pvStack_2b0);
  local_12b = 0x202;
  recovered_10005e54((long *)&pvStack_2d0,(undefined1 *)&local_12b,2);
  plStack_2d8 = recovered_10002edc(0x10);
  *plStack_2d8 = (long)&PTR_recovered_10006d5c_1000c688;
  recovered_10005074(param_1,0x15,&pvStack_2d0,(long *)&plStack_2d8);
  if (plStack_2d8 != (long *)0x0) {
    (**(code **)(*plStack_2d8 + 8))();
  }
  uStack_2c8 = 0;
  recovered_10002f10(pvStack_2d0);
  local_12b = 0x202;
  recovered_10005e54((long *)&pvStack_2f0,(undefined1 *)&local_12b,2);
  plStack_2f8 = recovered_10002edc(0x10);
  *plStack_2f8 = (long)&PTR_recovered_10006de4_1000c6d0;
  recovered_10005074(param_1,0x16,&pvStack_2f0,(long *)&plStack_2f8);
  if (plStack_2f8 != (long *)0x0) {
    (**(code **)(*plStack_2f8 + 8))();
  }
  uStack_2e8 = 0;
  recovered_10002f10(pvStack_2f0);
  return;
}

#undef PTR_recovered_10005f14_1000c0d8
#undef PTR_recovered_10006010_1000c130
#undef PTR_recovered_100060ec_1000c178
#undef PTR_recovered_10006148_1000c1c0
#undef PTR_recovered_100061ac_1000c208
#undef PTR_recovered_1000621c_1000c250
#undef PTR_recovered_100062a4_1000c298
#undef PTR_recovered_100063a8_1000c2e0
#undef PTR_recovered_100064b4_1000c328
#undef PTR_recovered_10006744_1000c370
#undef PTR_recovered_1000679c_1000c3b8
#undef PTR_recovered_100067dc_1000c400
#undef PTR_recovered_100069e8_1000c448
#undef PTR_recovered_10006a94_1000c490
#undef PTR_recovered_10006af0_1000c4d8
#undef PTR_recovered_10006b50_1000c520
#undef PTR_recovered_10006bac_1000c568
#undef PTR_recovered_10006c0c_1000c5b0
#undef PTR_recovered_10006c68_1000c5f8
#undef PTR_recovered_10006cc8_1000c640
#undef PTR_recovered_10006d5c_1000c688
#undef PTR_recovered_10006de4_1000c6d0
#undef plStack_158
#undef pvStack_150
#undef uStack_148
#undef plStack_138
#undef uStack_129
#undef pvStack_128
#undef uStack_120
#undef plStack_110
#undef pvStack_108
#undef uStack_100
#undef plStack_f0
#undef pvStack_e8
#undef uStack_e0
#undef plStack_d0
#undef pvStack_c8
#undef uStack_c0
#undef plStack_b0
#undef pvStack_a8
#undef uStack_a0
#undef plStack_90
#undef pvStack_88
#undef uStack_80
#undef plStack_70
#undef pvStack_68
#undef uStack_60
#undef plStack_50
#undef pvStack_48
#undef uStack_40
#undef plStack_2f8
#undef pvStack_2f0
#undef uStack_2e8
#undef plStack_2d8
#undef pvStack_2d0
#undef uStack_2c8
#undef plStack_2b8
#undef pvStack_2b0
#undef uStack_2a8
#undef plStack_298
#undef pvStack_290
#undef uStack_288
#undef plStack_278
#undef pvStack_270
#undef uStack_268
#undef plStack_258
#undef local_12b
#undef pvStack_250
#undef uStack_248
#undef plStack_238
#undef pvStack_230
#undef uStack_228
#undef plStack_218
#undef pvStack_210
#undef uStack_208
#undef plStack_1f8
#undef pvStack_1f0
#undef uStack_1e8
#undef plStack_1d8
#undef pvStack_1d0
#undef uStack_1c8
#undef plStack_1b8
#undef pvStack_1b0
#undef uStack_1a8
#undef plStack_198
#undef pvStack_190
#undef uStack_188
#undef plStack_178
#undef pvStack_170
#undef uStack_168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004738
 */

void recovered_10004738(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = recovered_10004780((int *)*param_1);
  *(bool *)(param_1 + 9) = !bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000476c
 */

undefined8 * recovered_1000476c(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[10] = 0;
  recovered_10003d28((long)param_1);
  recovered_10004738(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004770
 */

void recovered_10004770(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = recovered_10004780((int *)*param_1);
  *(bool *)(param_1 + 9) = !bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004778
 */

undefined8 recovered_10004778(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004780
 */

bool recovered_10004780(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if ((*(long *)(param_1 + 2) == 0) || (*param_1 < 1)) {
      return false;
    }
    bVar1 = 0 < param_1[1];
  }
  return bVar1;
}


#define local_a8 (*(byte *)(frame + 128))
#define local_a0 (*(long *)(frame + 136))
#define local_98 (*(undefined8 *)(frame + 144))
#define local_84 (*(int *)(frame + 164))
#define local_7c (*(char *)(frame + 172))
#define local_7b (*(char (*)[11])(frame + 173))
#define pvStack_110 (*(void * *)(frame + 24))
#define uStack_108 (*(undefined8 *)(frame + 32))
#define uStack_100 (*(undefined8 *)(frame + 40))
#define uStack_f8 (*(ulong *)(frame + 48))
#define uStack_f0 (*(ulong *)(frame + 56))
#define uStack_e8 (*(undefined1 *)(frame + 64))
#define uStack_d0 (*(undefined8 *)(frame + 88))
#define uStack_b8 (*(undefined8 *)(frame + 112))
#define uStack_90 (*(undefined8 *)(frame + 152))
#define iStack_80 (*(int *)(frame + 168))
#define local_118 (*(int (*)[2])(frame + 16))
#define local_e0 (*(void * *)(frame + 72))
#define local_d8 (*(undefined8 *)(frame + 80))
#define local_c8 (*(undefined1 * *)(frame + 96))
#define local_c0 (*(ulong *)(frame + 104))
#define local_b0 (*(undefined8 *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047b0
 */

byte recovered_100047b0(undefined8 *param_1)

{
  unsigned char frame[328] = {0};

  undefined1 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  void *data;
  long *plVar11;
  byte bVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  char *pcVar19;

  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    piVar14 = (int *)*param_1;
    iVar13 = *(int *)(param_1 + 7);
    iVar15 = *(int *)((long)param_1 + 0x3c);
    bVar6 = recovered_10004c0c(piVar14,iVar13,iVar15);
    if (bVar6) {
      uVar9 = recovered_10004c6c(piVar14,iVar13,iVar15);
      uVar8 = (uint)uVar9;
      if (uVar8 == 0) {
        recovered_10004d10((long)param_1);
        local_118[0] = *(int *)(param_1 + 7);
        local_c8 = (undefined1 *)CONCAT44(PF_PART4(local_c8, 4),*(undefined4 *)((long)param_1 + 0x3c));
      }
      else {
        if (uVar8 == 0xffffff) {
          *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
        }
        else {
          bVar12 = *(byte *)((long)param_1 + 0x49);
          uVar4 = *(uint *)((long)param_1 + 0x44);
          uVar3 = uVar4 - uVar8;
          if (uVar4 <= uVar8) {
            uVar3 = uVar8 - uVar4;
          }
          *(uint *)((long)param_1 + 0x44) = uVar8;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
          if (((bVar12 & 1) != 0) || (uVar8 != uVar4)) {
            local_84 = iVar15;
            iStack_80 = iVar13;
            recovered_10004cc8(&iStack_80,&local_84,(uint)*(byte *)(param_1 + 8));
            local_98 = 0;
            uStack_90 = 0;
            local_a0 = 0;
            if (((ulong)uVar3 < (ulong)param_1[5]) && (param_1[4] != 0)) {
              plVar11 = (long *)(param_1[4] + (ulong)uVar3 * 0x20);
              recovered_10004d34(&local_a0,plVar11[1]);
              pcVar19 = (char *)*plVar11;
              pcVar2 = pcVar19 + plVar11[1];
              iVar13 = local_84;
              iVar15 = iStack_80;
              do {
                if (pcVar19 == pcVar2) {
                  *(int *)(param_1 + 7) = iVar15;
                  *(int *)((long)param_1 + 0x3c) = iVar13;
                  plVar11 = (long *)plVar11[3];
                  if (plVar11 != (long *)0x0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11,param_1,&local_a0);
                    iVar13 = *(int *)((long)param_1 + 0x3c);
                    iVar15 = *(int *)(param_1 + 7);
                  }
                  goto LAB_10004b5c;
                }
                bVar6 = false;
                cVar5 = *pcVar19;
                piVar14 = (int *)*param_1;
                bVar12 = *(byte *)(param_1 + 8);
                local_c0 = 0;
                uStack_b8 = 0;
                local_c8 = (undefined1 *)0x0;
                local_b0 = 0x100000001;
                local_a8 = 0;
                local_e0 = (void *)CONCAT44(PF_PART4(local_e0, 4),iVar13);
                iVar18 = iVar13;
                local_118[0] = iVar15;
LAB_10004978:
                iVar16 = local_118[0];
                bVar7 = recovered_10004c0c(piVar14,local_118[0],iVar18);
                if (bVar7) {
                  uVar9 = recovered_10004c6c(piVar14,iVar16,iVar18);
                  if ((int)uVar9 != 0xffffff) goto code_r0x100049a4;
                  recovered_10004cc8(local_118,(int *)&local_e0,(uint)bVar12);
                  local_b0 = CONCAT44((int)local_e0,local_118[0]);
                  iVar18 = (int)local_e0;
                  iVar16 = local_118[0];
                  if ((local_a8 & 1) != 0) goto LAB_10004a44;
                  if (cVar5 == '\x02') {
                    uVar10 = recovered_10004ea8(&local_c8);
                    uVar9 = uVar10 + 1;
                    if (uVar10 == 0xffffffffffffffff) {
                      uVar9 = 0xffffffffffffffff;
                    }
                    pvStack_110 = (void *)0x0;
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_f8 = 0;
                    local_118[0] = CONCAT31(PF_PART3(local_118[0], 1),2);
                    uStack_e8 = local_c0 == 0;
                    uStack_f0 = uVar9;
                    recovered_10005cc8(&local_a0,(undefined1 *)local_118);
                    recovered_10004edc((long)param_1,uVar9);
LAB_10004b30:
                    data = pvStack_110;
                  }
                  else {
                    if (cVar5 == '\x01') {
                      uStack_f8 = recovered_10004ea8(&local_c8);
                      if (0x7ffffffffffffffe < uStack_f8) {
                        uStack_f8 = 0x7fffffffffffffff;
                      }
                      pvStack_110 = (void *)0x0;
                      uStack_108 = 0;
                      uStack_f0 = 0;
                      local_118[0] = CONCAT31(PF_PART3(local_118[0], 1),1);
                      uStack_100 = 0;
                      uStack_e8 = local_c0 == 0;
                      recovered_10005cc8(&local_a0,(undefined1 *)local_118);
                      goto LAB_10004b30;
                    }
                    if (cVar5 != '\0') goto LAB_10004b38;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_e0 = (void *)0x0;
                    recovered_10004dcc((long *)&local_e0,local_c0);
                    puVar1 = local_c8;
                    for (uVar9 = local_c0; uVar9 != 0; uVar9 = uVar9 - 1) {
                      recovered_10004e44((long *)&local_e0,*puVar1);
                      puVar1 = puVar1 + 1;
                    }
                    recovered_100039a8((undefined1 *)local_118,&local_e0);
                    uStack_e8 = local_c0 == 0;
                    recovered_10005cc8(&local_a0,(undefined1 *)local_118);
                    recovered_10002f10(pvStack_110);
                    data = local_e0;
                  }
                  recovered_10002f10(data);
LAB_10004b38:
                  bVar6 = false;
                  iVar13 = PF_PART4(local_b0, 4);
                  iVar15 = (int)local_b0;
                  goto LAB_10004b40;
                }
                local_b0 = CONCAT44(iVar18,iVar16);
                local_a8 = 1;
LAB_10004a44:
                *(int *)(param_1 + 7) = iVar16;
                *(int *)((long)param_1 + 0x3c) = iVar18;
                bVar6 = true;
                *(undefined1 *)(param_1 + 9) = 1;
LAB_10004b40:
                local_c0 = 0;
                recovered_10002f10(local_c8);
                pcVar19 = pcVar19 + 1;
              } while (!bVar6);
              bVar12 = 0;
            }
            else {
              *(int *)(param_1 + 7) = iStack_80;
              *(int *)((long)param_1 + 0x3c) = local_84;
              iVar13 = local_84;
              iVar15 = iStack_80;
LAB_10004b5c:
              bVar6 = recovered_10004c0c((int *)*param_1,iVar15,iVar13);
              if (bVar6) {
                bVar12 = *(byte *)(param_1 + 9) ^ 1;
              }
              else {
                bVar12 = 0;
                *(undefined1 *)(param_1 + 9) = 1;
              }
            }
            recovered_10005bd8(&local_a0);
            goto LAB_100048b8;
          }
        }
        local_c8 = (undefined1 *)CONCAT44(PF_PART4(local_c8, 4),iVar15);
        local_118[0] = iVar13;
      }
      recovered_10004cc8(local_118,(int *)&local_c8,(uint)*(byte *)(param_1 + 8));
      *(int *)(param_1 + 7) = local_118[0];
      *(int *)((long)param_1 + 0x3c) = (int)local_c8;
      bVar6 = recovered_10004c0c((int *)*param_1,local_118[0],(int)local_c8);
      if (bVar6) {
        bVar12 = *(byte *)(param_1 + 9) ^ 1;
        goto LAB_100048b8;
      }
    }
    bVar12 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    bVar12 = 0;
  }
LAB_100048b8:
  return bVar12 & 1;
code_r0x100049a4:
  if (bVar6) {
    bVar6 = true;
  }
  else {
    local_7b[0] = (char)(uVar9 >> 0x10);
    local_7b[1] = (char)(uVar9 >> 8);
    local_7b[2] = (char)uVar9;
    for (lVar17 = 0; (bVar6 = lVar17 != 3, bVar6 && (local_7c = local_7b[lVar17], local_7c != -1));
        lVar17 = lVar17 + 1) {
      recovered_10005850((long *)&local_c8,&local_7c);
    }
  }
  recovered_10004cc8(local_118,(int *)&local_e0,(uint)bVar12);
  iVar18 = (int)local_e0;
  goto LAB_10004978;
}

#undef local_a8
#undef local_a0
#undef local_98
#undef local_84
#undef local_7c
#undef local_7b
#undef pvStack_110
#undef uStack_108
#undef uStack_100
#undef uStack_f8
#undef uStack_f0
#undef uStack_e8
#undef uStack_d0
#undef uStack_b8
#undef uStack_90
#undef iStack_80
#undef local_118
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c0c
 */

bool recovered_10004c0c(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;

  bVar1 = recovered_10004780(param_1);
  bVar2 = false;
  if ((0 < param_3 && 0 < param_2) && (bVar1)) {
    if (*param_1 < param_2) {
      bVar2 = false;
    }
    else {
      bVar2 = param_3 <= param_1[1];
    }
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c6c
 */

ulong recovered_10004c6c(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  bool bVar2;
  ulong uVar3;

  bVar2 = recovered_10004c0c(param_1,param_2,param_3);
  uVar3 = (ulong)bVar2;
  if (bVar2) {
    pbVar1 = (byte *)(*(long *)(param_1 + 2) + (long)(param_2 + *param_1 * (param_3 + -1) + -1) * 4)
    ;
    uVar3 = (ulong)((uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2]);
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cc8
 */

void recovered_10004cc8(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar2 = 1;
  iVar1 = 1;
  switch((uintptr_t)(param_3)) {
  case 0:
    break;
  case 2:
    iVar2 = -1;
    break;
  case 3:
    iVar1 = -1;
  case 1:
    iVar2 = iVar1;
    param_1 = param_2;
    break;
  default:
    goto switchD_10004cec_default;
  }
  *param_1 = *param_1 + iVar2;
switchD_10004cec_default:
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d10
 */

void recovered_10004d10(long param_1)

{
  unsigned char frame[64] = {0};

  if (*(byte *)(param_1 + 0x40) < 4) {
    *(char *)(param_1 + 0x40) = (char)(0x30201 >> (ulong)((*(byte *)(param_1 + 0x40) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d34
 */

void recovered_10004d34(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005c58(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10005c6c((undefined1 *)(extraout_x0 + lVar1),(undefined1 *)(*param_1 + lVar1));
      recovered_10005938((undefined8 *)(*param_1 + lVar1 + 8));
      lVar1 = lVar1 + 0x38;
    }
    recovered_10002f10((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dcc
 */

void recovered_10004dcc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005728(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_x0 + param_1[1]) = 0;
    recovered_10002f10((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e44
 */

void recovered_10004e44(long *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10004dcc(param_1,uVar1);
  }
  recovered_100056bc(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea8
 */

ulong recovered_10004ea8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  ulong uVar2;
  long lVar3;

  uVar2 = 0;
  lVar3 = param_1[1];
  pbVar1 = (byte *)*param_1;
  while( true ) {
    if (lVar3 == 0) {
      return uVar2;
    }
    if (uVar2 >> 0x38 != 0) break;
    uVar2 = (ulong)*pbVar1 | uVar2 << 8;
    lVar3 = lVar3 + -1;
    pbVar1 = pbVar1 + 1;
  }
  return 0xffffffffffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004edc
 */

long recovered_10004edc(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    recovered_10005258((long *)(param_1 + 8),param_2);
  }
  return *(long *)(param_1 + 8) + param_2 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f24
 */

void recovered_10004f24(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  do {
    bVar1 = recovered_100047b0(param_1);
  } while ((bVar1 & 1) != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f48
 */

undefined1 recovered_10004f48(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x48);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f50
 */

void recovered_10004f50(long param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long *plVar1;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    recovered_10004fa0((long *)(param_1 + 0x20),param_2 + 1);
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + param_2 * 0x20);
  recovered_10005960(plVar1,param_3);
  recovered_100059bc(plVar1 + 3,param_3 + 3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa0
 */

void recovered_10004fa0(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    lVar2 = uVar3 * 0x20;
    for (; lVar2 = lVar2 + -0x20, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_10005af8((undefined8 *)(*param_1 + lVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_10005d3c(param_1,param_2);
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      puVar1 = (undefined8 *)(*param_1 + uVar3 * 0x20);
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005040
 */

long * recovered_10005040(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10005960(param_1,param_2);
  recovered_100059bc(param_1 + 3,param_2 + 3);
  return param_1;
}


#define local_50 (*(long (*)[4])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005074
 */

void recovered_10005074(long param_1,ulong param_2,undefined8 *param_3,long *param_4)

{
  unsigned char frame[128] = {0};


  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  recovered_100050e8(local_50,param_3);
  recovered_10005138(local_50 + 3,param_4);
  recovered_10004f50(param_1,param_2,local_50);
  recovered_10005af8(local_50);
  return;
}

#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e8
 */

undefined8 * recovered_100050e8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002f10((void *)*param_1);
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
 * Address: 0x10005138
 */

long * recovered_10005138(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#define local_30 (*(undefined8 *)(frame + 16))
#define local_20 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 24))
#define uStack_18 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005184
 */

void recovered_10005184(long param_1,ulong param_2)

{
  unsigned char frame[96] = {0};


  if (param_2 < *(ulong *)(param_1 + 0x28)) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    recovered_100051c4(*(long *)(param_1 + 0x20) + param_2 * 0x20,(long)&local_30);
    recovered_10005af8(&local_30);
  }
  return;
}

#undef local_30
#undef local_20
#undef uStack_28
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051c4
 */

long recovered_100051c4(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  recovered_100050e8((undefined8 *)param_1,(undefined8 *)param_2);
  recovered_10005138((long *)(param_1 + 0x18),(long *)(param_2 + 0x18));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f8
 */

void recovered_100051f8(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10005af8((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005248
 */

long recovered_10005248(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005250
 */

long recovered_10005250(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005258
 */

void recovered_10005258(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    lVar3 = uVar2 * 0x28 + -0x20;
    for (; param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_10005938((undefined8 *)(*param_1 + lVar3));
      lVar3 = lVar3 + -0x28;
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_10006f00(param_1,param_2);
    uVar2 = param_1[1];
    while (uVar2 < param_2) {
      puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x28);
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      uVar2 = param_1[1] + 1;
      param_1[1] = uVar2;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005304
 */

long recovered_10005304(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    return 0;
  }
  return *(long *)(param_1 + 8) + param_2 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005324
 */

void recovered_10005324(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10006fe4((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000534c
 */

void recovered_1000534c(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10007058((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


#define uStack_38 (*(undefined8 *)(frame + 32))
#define uStack_30 (*(undefined8 *)(frame + 40))
#define uStack_28 (*(undefined8 *)(frame + 48))
#define auStack_48 (*(undefined1 (*)[8])(frame + 16))
#define pvStack_40 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005374
 */

undefined8 recovered_10005374(long param_1)

{
  unsigned char frame[120] = {0};

  undefined8 extraout_x0 = 0;

  auStack_48[0] = 0;
  pvStack_40 = (void *)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  recovered_10003a80(auStack_48);
  recovered_1000534c(param_1,auStack_48);
  recovered_10002f10(pvStack_40);
  return extraout_x0;
}

#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef auStack_48
#undef pvStack_40

#define uStack_38 (*(undefined8 *)(frame + 32))
#define uStack_30 (*(undefined8 *)(frame + 40))
#define uStack_28 (*(undefined8 *)(frame + 48))
#define auStack_48 (*(undefined1 (*)[8])(frame + 16))
#define pvStack_40 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053b0
 */

undefined8 recovered_100053b0(long param_1)

{
  unsigned char frame[120] = {0};

  undefined8 extraout_x0 = 0;

  auStack_48[0] = 0;
  pvStack_40 = (void *)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  recovered_10003aa8(auStack_48);
  recovered_1000534c(param_1,auStack_48);
  recovered_10002f10(pvStack_40);
  return extraout_x0;
}

#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef auStack_48
#undef pvStack_40

#define uStack_38 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 48))
#define local_48 (*(undefined1 (*)[8])(frame + 16))
#define local_40 (*(void * *)(frame + 24))
#define local_30 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053ec
 */

undefined8 recovered_100053ec(long param_1,undefined8 param_2)

{
  unsigned char frame[120] = {0};

  undefined8 extraout_x0 = 0;

  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_48[0] = 2;
  local_30 = 0;
  uStack_28 = param_2;
  recovered_1000534c(param_1,local_48);
  recovered_10002f10(local_40);
  return extraout_x0;
}

#undef uStack_38
#undef uStack_28
#undef local_48
#undef local_40
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000542c
 */

void recovered_1000542c(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulong in_x1;

  puVar1 = (undefined1 *)recovered_10004edc(param_1,in_x1);
  recovered_10006fe4((long *)(param_1 + 8),puVar1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005454
 */

void recovered_10005454(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  recovered_10005498(param_1,param_2);
  puVar1 = (undefined1 *)recovered_10004edc(param_1,param_2);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005498
 */

void recovered_10005498(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(ulong *)(param_1 + 0x50) = param_2;
  if (param_2 <= *(ulong *)(param_1 + 0x10)) {
    return;
  }
  plVar1 = (long *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (param_2 < uVar3) {
    lVar4 = uVar3 * 0x28 + -0x20;
    for (; param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_10005938((undefined8 *)(*plVar1 + lVar4));
      lVar4 = lVar4 + -0x28;
    }
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_10006f00(plVar1,param_2);
    uVar3 = *(ulong *)(param_1 + 0x10);
    while (uVar3 < param_2) {
      puVar2 = (undefined8 *)(*plVar1 + uVar3 * 0x28);
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      uVar3 = *(long *)(param_1 + 0x10) + 1;
      *(ulong *)(param_1 + 0x10) = uVar3;
    }
  }
  return;
}


#define uStack_38 (*(undefined8 *)(frame + 32))
#define uStack_30 (*(undefined8 *)(frame + 40))
#define uStack_28 (*(undefined8 *)(frame + 48))
#define auStack_48 (*(undefined1 (*)[8])(frame + 16))
#define pvStack_40 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054bc
 */

long recovered_100054bc(long param_1)

{
  unsigned char frame[120] = {0};

  ulong extraout_x0;
  long lVar1;
  ulong uVar2;

  uVar2 = *(ulong *)(param_1 + 0x50);
  if (uVar2 == 0) {
    auStack_48[0] = 0;
    pvStack_40 = (void *)0x0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    recovered_1000534c(param_1,auStack_48);
    lVar1 = recovered_10004edc(param_1,extraout_x0);
    recovered_10002f10(pvStack_40);
    return lVar1;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    recovered_10005258((long *)(param_1 + 8),uVar2);
  }
  return *(long *)(param_1 + 8) + uVar2 * 0x28 + -0x28;
}

#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef auStack_48
#undef pvStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005514
 */

long recovered_10005514(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = *(ulong *)(param_1 + 0x50);
  if ((uVar1 == 0) || (*(ulong *)(param_1 + 0x10) < uVar1)) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005534
 */

long recovered_10005534(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000553c
 */

long recovered_1000553c(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005544
 */

undefined8 recovered_10005544(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 0x50);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000554c
 */

undefined4 recovered_1000554c(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005554
 */

undefined4 recovered_10005554(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x3c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000555c
 */

undefined1 recovered_1000555c(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x40);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005564
 */

void recovered_10005564(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000556c
 */

undefined4 recovered_1000556c(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x44);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005574
 */

void recovered_10005574(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  *(uint *)(param_1 + 0x44) = param_2 & 0xffffff;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005580
 */

void recovered_10005580(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005584
 */

void recovered_10005584(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005588
 */

void recovered_10005588(long *param_1,long param_2,ulong param_3)

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
  uVar2 = recovered_10005670(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_100056bc(param_1);
    }
    else {
      recovered_10004dcc(param_1,uVar1);
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
    recovered_100056f4(&local_50,*param_1 + local_38,uVar1);
    data = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = data;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_10002f10(data);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005670
 */

undefined8 recovered_10005670(long *param_1,long param_2,long *param_3)

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
 * Address: 0x100056bc
 */

void recovered_100056bc(long *param_1)

{
  unsigned char frame[64] = {0};

  long extraout_x0;

  if (*param_1 == 0) {
    recovered_10005728(0);
    *param_1 = extraout_x0;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f4
 */

undefined8 * recovered_100056f4(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10005588(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005728
 */

void recovered_10005728(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002edc(param_1 + 1);
  *puVar1 = 0;
  return;
}


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005744
 */

undefined8 * recovered_10005744(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10007ecf;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10005588(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10007ecf

#define abStack_42 (*(byte (*)[66])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005784
 */

uint128 recovered_10005784(byte *param_1,byte *param_2,ulong param_3,uint param_4)

{
  unsigned char frame[114] = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint128 auVar11;

  uVar6 = 1;
  if ((((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (uVar6 = 1, param_1 <= param_2)) &&
     (0xffffffdc < param_4 - 0x25)) {
    uVar7 = -param_3;
    if (-1 < (long)param_3) {
      uVar7 = param_3;
    }
    uVar9 = (ulong)param_4;
    uVar10 = 0;
    do {
      uVar8 = uVar10;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar7 / uVar9;
      }
      uVar10 = uVar7 - uVar2 * uVar9;
      bVar3 = (byte)uVar10;
      bVar1 = bVar3 | 0x30;
      if (9 < uVar10) {
        bVar1 = bVar3 + 0x57;
      }
      abStack_42[uVar8 + 1] = bVar1;
      uVar10 = uVar8 + 1;
      bVar5 = uVar9 <= uVar7;
      uVar7 = uVar2;
    } while (bVar5);
    if ((long)param_3 < 0) {
      abStack_42[uVar8 + 2] = 0x2d;
      uVar10 = uVar8 + 2;
    }
    pbVar4 = param_1;
    uVar7 = uVar10;
    if ((ulong)((long)param_2 - (long)param_1) < uVar10) {
      uVar6 = 2;
      param_1 = param_2;
    }
    else {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar4 = abStack_42[uVar7];
        pbVar4 = pbVar4 + 1;
      }
      uVar6 = 0;
      param_1 = param_1 + uVar10;
    }
  }
  PF_PART8(auVar11, 8) = uVar6;
  PF_PART8(auVar11, 0) = param_1;
  return auVar11;
}

#undef abStack_42

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005850
 */

long recovered_10005850(long *param_1,undefined1 *param_2)

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
    recovered_100058b8(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058b8
 */

void recovered_100058b8(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_1000592c(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10002f10((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000592c
 */

void recovered_1000592c(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000cb0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005938
 */

undefined8 * recovered_10005938(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002f10((void *)*param_1);
  return param_1;
}


#define lStack_28 (*(long *)(frame + 32))
#define local_38 (*(void * *)(frame + 16))
#define local_30 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005960
 */

long * recovered_10005960(long *param_1,long *param_2)

{
  unsigned char frame[104] = {0};

  void *data;
  long lVar1;

  if (param_1 != param_2) {
    recovered_10005a1c((long *)&local_38,param_2);
    data = (void *)*param_1;
    *param_1 = (long)local_38;
    lVar1 = param_1[2];
    param_1[2] = lStack_28;
    param_1[1] = local_30;
    local_30 = 0;
    local_38 = data;
    lStack_28 = lVar1;
    recovered_10002f10(data);
  }
  return param_1;
}

#undef lStack_28
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059bc
 */

long * recovered_100059bc(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  if (param_1 != param_2) {
    if ((long *)*param_2 == (long *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (**(code **)(*(long *)*param_2 + 0x18))();
    }
    plVar2 = (long *)*param_1;
    *param_1 = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a1c
 */

long * recovered_10005a1c(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10005a78(param_1,param_2[1]);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  for (lVar3 = 0; lVar2 != lVar3; lVar3 = lVar3 + 1) {
    *(undefined1 *)(*param_1 + lVar3) = *(undefined1 *)(lVar1 + lVar3);
  }
  param_1[1] = lVar2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a78
 */

void recovered_10005a78(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005aec(param_2);
    uVar2 = param_1[1];
    for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10002f10((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005aec
 */

void recovered_10005aec(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000cb0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005af8
 */

void recovered_10005af8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  param_1[1] = 0;
  recovered_10002f10((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b2c
 */

long * recovered_10005b2c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005b58(param_1);
  recovered_10002f10((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b58
 */

void recovered_10005b58(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10005938((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bac
 */

undefined8 * recovered_10005bac(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100051f8(param_1);
  recovered_10002f10((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd8
 */

long * recovered_10005bd8(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005c04(param_1);
  recovered_10002f10((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c04
 */

void recovered_10005c04(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x30;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10005938((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c58
 */

void recovered_10005c58(long param_1)

{
  unsigned char frame[64] = {0};

  ulong size;
  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  size = param_1 * 0x38;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cb0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c6c
 */

undefined1 * recovered_10005c6c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  *param_1 = *param_2;
  recovered_10005cac((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cac
 */

void recovered_10005cac(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10005cc8
 */

long recovered_10005cc8(long *param_1,undefined1 *param_2)

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
    recovered_10004d34(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10005c6c((undefined1 *)(*param_1 + lVar2 * 0x38),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x38;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d3c
 */

void recovered_10005d3c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005dd0(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10005de0((undefined8 *)(extraout_x0 + lVar1),(undefined8 *)(*param_1 + lVar1));
      recovered_10005af8((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x20;
    }
    recovered_10002f10((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dd0
 */

void recovered_10005dd0(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return;
  }
  size = param_1 * 0x20;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cb0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de0
 */

void recovered_10005de0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;

  recovered_10005e0c(param_1,param_2);
  *(undefined8 *)(extraout_x0 + 0x18) = param_2[3];
  param_2[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e0c
 */

void recovered_10005e0c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10005e28
 */

undefined8 * recovered_10005e28(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002f10((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e54
 */

long * recovered_10005e54(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10005a78(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    recovered_10005eb0(param_1,param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb0
 */

long recovered_10005eb0(long *param_1,undefined1 *param_2)

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
    recovered_10005a78(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f14
 */

void recovered_10005f14(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f18
 */

void recovered_10005f18(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
#undef PTR_DAT_1000c040
#define PTR_DAT_1000c040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bdcU)))
#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f1c
 */

void recovered_10005f1c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[104] = {0};

  undefined1 *puVar1;
  char *pcVar2;
  long lVar3;

  if (param_3[1] != 0) {
    lVar3 = *param_3;
    if (*(char *)(lVar3 + 0x30) != '\x01') {
      puVar1 = &DAT_10007ecf;
      if (*(undefined1 **)(lVar3 + 8) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(lVar3 + 8);
      }
      if (((*(long *)(lVar3 + 0x10) != 0) && (puVar1 != (undefined1 *)0x0)) &&
         (*(uint **)(PTR_DAT_1000c040 + 8) != (uint *)0x0)) {
        recovered_1000275c(puVar1,1,*(long *)(lVar3 + 0x10),*(uint **)(PTR_DAT_1000c040 + 8));
      }
      return;
    }
    pcVar2 = (char *)recovered_10005514(param_2);
    if (pcVar2 != (char *)0x0) {
      recovered_10003af0(apvStack_38,pcVar2);
      recovered_10005fbc((long)PTR_DAT_1000c040,apvStack_38);
      recovered_10002f10(apvStack_38[0]);
    }
  }
  return;
}

#undef DAT_10007ecf
#undef PTR_DAT_1000c040
#undef apvStack_38

#undef PTR_recovered_10005f14_1000c0d8
#define PTR_recovered_10005f14_1000c0d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4c74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f9c
 */

void recovered_10005f9c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10005f14_1000c0d8;
  return;
}

#undef PTR_recovered_10005f14_1000c0d8

#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fbc
 */

void recovered_10005fbc(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10007ecf;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if (((param_2[1] != 0) && (puVar1 != (undefined1 *)0x0)) &&
     (*(uint **)(param_1 + 8) != (uint *)0x0)) {
    recovered_1000275c(puVar1,1,param_2[1],*(uint **)(param_1 + 8));
  }
  return;
}

#undef DAT_10007ecf

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fd4
 */

long recovered_10005fd4(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  if (((param_3 != 0) && (param_2 != 0)) && (*(uint **)(param_1 + 8) != (uint *)0x0)) {
    recovered_1000275c((void *)param_2,1,param_3,*(uint **)(param_1 + 8));
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006010
 */

void recovered_10006010(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006014
 */

void recovered_10006014(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#undef PTR_DAT_1000c040
#define PTR_DAT_1000c040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bdcU)))
#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006018
 */

void recovered_10006018(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[104] = {0};

  undefined *puVar1;
  char *pcVar2;
  ulong uVar3;

  if (param_3[1] == 0) {
    return;
  }
  if (*(char *)(*param_3 + 0x30) == '\x01') {
    pcVar2 = (char *)recovered_10005514(param_2);
    if (pcVar2 == (char *)0x0) {
      return;
    }
    uVar3 = recovered_10003b80(pcVar2);
  }
  else {
    uVar3 = *(ulong *)(*param_3 + 0x20);
  }
  puVar1 = PTR_DAT_1000c040;
  recovered_10003b24(apvStack_38,uVar3);
  recovered_10005fbc((long)puVar1,apvStack_38);
  recovered_10002f10(apvStack_38[0]);
  return;
}

#undef PTR_DAT_1000c040
#undef apvStack_38

#undef PTR_recovered_10006010_1000c130
#define PTR_recovered_10006010_1000c130 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4cccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000606c
 */

void recovered_1000606c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006010_1000c130;
  return;
}

#undef PTR_recovered_10006010_1000c130

#define local_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000608c
 */

undefined8 recovered_1000608c(long param_1,ulong param_2)

{
  unsigned char frame[104] = {0};

  undefined8 extraout_x0 = 0;

  recovered_10003b24(local_38,param_2);
  recovered_10005fbc(param_1,local_38);
  recovered_10002f10(local_38[0]);
  return extraout_x0;
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060ec
 */

void recovered_100060ec(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060f0
 */

void recovered_100060f0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060f4
 */

void recovered_100060f4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[104] = {0};

  char *pcVar1;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  recovered_10003af0(apvStack_38,pcVar1);
  recovered_10003aa8(pcVar1);
  recovered_10002f10(apvStack_38[0]);
  return;
}

#undef apvStack_38

#undef PTR_recovered_100060ec_1000c178
#define PTR_recovered_100060ec_1000c178 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4d14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006128
 */

void recovered_10006128(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100060ec_1000c178;
  return;
}

#undef PTR_recovered_100060ec_1000c178

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006148
 */

void recovered_10006148(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000614c
 */

void recovered_1000614c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

void recovered_10006150(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  char *pcVar2;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar2 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  uVar1 = recovered_10003b80(pcVar2);
  *pcVar2 = '\x02';
  *(undefined8 *)(pcVar2 + 0x20) = uVar1;
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  if (*(undefined1 **)(pcVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006148_1000c1c0
#define PTR_recovered_10006148_1000c1c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4d5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000618c
 */

void recovered_1000618c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006148_1000c1c0;
  return;
}

#undef PTR_recovered_10006148_1000c1c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061ac
 */

void recovered_100061ac(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061b0
 */

void recovered_100061b0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define uStack_30 (*(undefined8 *)(frame + 40))
#define uStack_38 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 48))
#define pvStack_40 (*(void * *)(frame + 24))
#define auStack_48 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061b4
 */

void recovered_100061b4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[120] = {0};

  undefined1 *puVar1;
  long lVar2;

  if (*(long *)(param_2 + 0x50) == 0) {
    auStack_48[0] = 0;
    pvStack_40 = (void *)0x0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    recovered_10003a80(auStack_48);
    recovered_1000534c(param_2,auStack_48);
    recovered_10002f10(pvStack_40);
    return;
  }
  puVar1 = (undefined1 *)recovered_100054bc(param_2);
  lVar2 = *param_3;
  *puVar1 = 1;
  recovered_10003964((long *)(puVar1 + 8),(long *)(lVar2 + 8));
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_100061ac_1000c208
#define PTR_recovered_100061ac_1000c208 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4da4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061fc
 */

void recovered_100061fc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100061ac_1000c208;
  return;
}

#undef PTR_recovered_100061ac_1000c208

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000621c
 */

void recovered_1000621c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006220
 */

void recovered_10006220(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define uStack_30 (*(undefined8 *)(frame + 40))
#define uStack_38 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 48))
#define pvStack_40 (*(void * *)(frame + 24))
#define auStack_48 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006224
 */

void recovered_10006224(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[120] = {0};

  undefined1 *puVar1;
  undefined8 uVar2;

  if (*(long *)(param_2 + 0x50) == 0) {
    uStack_28 = *(undefined8 *)(*param_3 + 0x20);
    pvStack_40 = (void *)0x0;
    uStack_38 = 0;
    auStack_48[0] = 2;
    uStack_30 = 0;
    recovered_1000534c(param_2,auStack_48);
    recovered_10002f10(pvStack_40);
    return;
  }
  puVar1 = (undefined1 *)recovered_100054bc(param_2);
  uVar2 = *(undefined8 *)(*param_3 + 0x20);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_1000621c_1000c250
#define PTR_recovered_1000621c_1000c250 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4decU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006284
 */

void recovered_10006284(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_1000621c_1000c250;
  return;
}

#undef PTR_recovered_1000621c_1000c250

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062a4
 */

void recovered_100062a4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062a8
 */

void recovered_100062a8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define pvStack_40 (*(void * *)(frame + 24))
#define auStack_48 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062ac
 */

void recovered_100062ac(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[120] = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  recovered_10006370(auStack_48,puVar1);
  if (*(long *)(param_2 + 0x50) == 0) {
    recovered_10005324(param_2,auStack_48);
  }
  else {
    puVar1 = (undefined1 *)recovered_100054bc(param_2);
    recovered_10006338(puVar1,auStack_48);
  }
  recovered_10002f10(pvStack_40);
  return;
}

#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_100062a4_1000c298
#define PTR_recovered_100062a4_1000c298 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006318
 */

void recovered_10006318(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100062a4_1000c298;
  return;
}

#undef PTR_recovered_100062a4_1000c298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006338
 */

undefined1 * recovered_10006338(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10003964((long *)(param_1 + 8),(long *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006370
 */

undefined1 * recovered_10006370(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10005744((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a8
 */

void recovered_100063a8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063ac
 */

void recovered_100063ac(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063b0
 */

void recovered_100063b0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  undefined1 uVar4;
  undefined1 uVar3;
  uint uVar5;
  bool bVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;

  piVar7 = (int *)*param_2;
  lVar8 = *param_3;
  lVar10 = *(long *)(lVar8 + 0x20);
  if (lVar10 < -0x7fffffff) {
    lVar10 = -0x80000000;
  }
  if (0x7ffffffe < lVar10) {
    lVar10 = 0x7fffffff;
  }
  lVar2 = *(long *)(lVar8 + 0x58);
  if (*(long *)(lVar8 + 0x58) < -0x7fffffff) {
    lVar2 = -0x80000000;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  uVar11 = *(uint *)(lVar8 + 0x90);
  bVar6 = recovered_10004c0c(piVar7,(int)lVar10,(int)lVar2);
  if (bVar6) {
    uVar5 = ((int)lVar10 + *piVar7 * ((int)lVar2 + -1)) - 1;
    uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    uVar1 = (long)(int)uVar5 << 2 | 1;
    uVar3 = (undefined1)(uVar11 >> 8);
    uVar4 = (undefined1)(uVar11 >> 0x10);
    if (uVar11 >> 0x18 == 0) {
      *(undefined1 *)(*(long *)(piVar7 + 2) + uVar9) = uVar4;
      *(undefined1 *)(*(long *)(piVar7 + 2) + uVar1) = uVar3;
      *(char *)(*(long *)(piVar7 + 2) + uVar9 + 2) = (char)uVar11;
      uVar11 = 0xff;
    }
    else {
      *(char *)(*(long *)(piVar7 + 2) + uVar9) = (char)(uVar11 >> 0x18);
      *(undefined1 *)(*(long *)(piVar7 + 2) + uVar1) = uVar4;
      *(undefined1 *)(*(long *)(piVar7 + 2) + uVar9 + 2) = uVar3;
    }
    *(char *)(*(long *)(piVar7 + 2) + uVar9 + 3) = (char)uVar11;
  }
  return;
}


#undef PTR_recovered_100063a8_1000c2e0
#define PTR_recovered_100063a8_1000c2e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063e4
 */

void recovered_100063e4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100063a8_1000c2e0;
  return;
}

#undef PTR_recovered_100063a8_1000c2e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006404
 */

void recovered_10006404(int *param_1,int param_2,int param_3,ulong param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 uVar7;

  uVar7 = (undefined1)param_4;
  bVar5 = recovered_10004c0c(param_1,param_2,param_3);
  if (bVar5) {
    uVar2 = (param_2 + *param_1 * (param_3 + -1)) - 1;
    uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    uVar1 = (long)(int)uVar2 << 2 | 1;
    uVar4 = (undefined1)(param_4 >> 8);
    uVar3 = (undefined1)(param_4 >> 0x10);
    if ((param_4 & 0xff000000) == 0) {
      *(undefined1 *)(*(long *)(param_1 + 2) + uVar6) = uVar3;
      *(undefined1 *)(*(long *)(param_1 + 2) + uVar1) = uVar4;
      *(undefined1 *)(*(long *)(param_1 + 2) + uVar6 + 2) = uVar7;
      uVar7 = 0xff;
    }
    else {
      *(char *)(*(long *)(param_1 + 2) + uVar6) = (char)(param_4 >> 0x18);
      *(undefined1 *)(*(long *)(param_1 + 2) + uVar1) = uVar3;
      *(undefined1 *)(*(long *)(param_1 + 2) + uVar6 + 2) = uVar4;
    }
    *(undefined1 *)(*(long *)(param_1 + 2) + uVar6 + 3) = uVar7;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b4
 */

void recovered_100064b4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b8
 */

void recovered_100064b8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
#define uStack_48 (*(undefined8 *)(frame + 32))
#define local_58 (*(char * *)(frame + 16))
#define local_50 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064bc
 */

void recovered_100064bc(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[136] = {0};

  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;

  lVar6 = *param_3;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (char *)0x0;
  recovered_10004dcc((long *)&local_58,*(ulong *)(lVar6 + 0x80));
  lVar7 = *(long *)(lVar6 + 0x80);
  pbVar3 = &DAT_10007ecf;
  if (*(byte **)(lVar6 + 0x78) != (byte *)0x0) {
    pbVar3 = *(byte **)(lVar6 + 0x78);
  }
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    bVar1 = *pbVar3;
    if (0x23 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x900002600U) == 0) {
      recovered_10004e44((long *)&local_58,bVar1);
    }
    pbVar3 = pbVar3 + 1;
  }
  if (1 < local_50) {
    if ((*local_58 == '0') && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      recovered_10006698((long *)&local_58,0,2);
    }
    if (local_50 == 8 || local_50 == 6) {
      pbVar3 = (byte *)recovered_10006720(&local_58);
      pbVar4 = (byte *)recovered_100066f8(&local_58);
      uVar8 = 0;
      for (; bVar2 = pbVar3 == pbVar4, !bVar2; pbVar3 = pbVar3 + 1) {
        bVar1 = *pbVar3;
        uVar5 = bVar1 - 0x30;
        if (9 < uVar5) {
          uVar5 = (uint)bVar1;
          if (bVar1 - 0x61 < 6) {
            uVar5 = uVar5 - 0x57;
          }
          else {
            if (5 < uVar5 - 0x41) {
              uVar8 = 0;
              break;
            }
            uVar5 = uVar5 - 0x37;
          }
        }
        uVar8 = (ulong)(uVar5 & 0xff | (int)uVar8 << 4);
      }
      goto LAB_1000660c;
    }
  }
  uVar8 = 0;
  bVar2 = false;
LAB_1000660c:
  recovered_10002f10(local_58);
  if (bVar2) {
    lVar7 = *(long *)(*param_3 + 0x20);
    if (lVar7 < -0x7fffffff) {
      lVar7 = -0x80000000;
    }
    if (0x7ffffffe < lVar7) {
      lVar7 = 0x7fffffff;
    }
    lVar6 = *(long *)(*param_3 + 0x58);
    if (lVar6 < -0x7fffffff) {
      lVar6 = -0x80000000;
    }
    if (0x7ffffffe < lVar6) {
      lVar6 = 0x7fffffff;
    }
    recovered_10006404((int *)*param_2,(int)lVar7,(int)lVar6,uVar8);
  }
  return;
}

#undef DAT_10007ecf
#undef uStack_48
#undef local_58
#undef local_50

#undef PTR_recovered_100064b4_1000c328
#define PTR_recovered_100064b4_1000c328 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006678
 */

void recovered_10006678(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100064b4_1000c328;
  return;
}

#undef PTR_recovered_100064b4_1000c328

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006698
 */

void recovered_10006698(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  uVar3 = param_1[1];
  uVar2 = uVar3;
  if (param_2 <= uVar3) {
    uVar2 = param_2;
  }
  uVar4 = uVar3 - uVar2;
  uVar1 = uVar4;
  if (param_3 <= uVar4) {
    uVar1 = param_3;
  }
  if (param_3 != 0xffffffffffffffff) {
    uVar4 = uVar1;
  }
  for (; uVar4 + uVar2 < uVar3; uVar2 = uVar2 + 1) {
    *(undefined1 *)(*param_1 + uVar2) = ((undefined1 *)(*param_1 + uVar2))[uVar4];
    uVar3 = param_1[1];
  }
  param_1[1] = uVar3 - uVar4;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + (uVar3 - uVar4)) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f8
 */

long recovered_100066f8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_10006720(param_1);
  return lVar1 + param_1[1];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006720
 */

undefined8 recovered_10006720(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100056bc(param_1);
  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006744
 */

void recovered_10006744(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006748
 */

void recovered_10006748(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000674c
 */

void recovered_1000674c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar2 = *(long *)(*param_3 + 0x20);
  if (lVar2 < -0x7fffffff) {
    lVar2 = -0x80000000;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  lVar1 = *(long *)(*param_3 + 0x58);
  if (lVar1 < -0x7fffffff) {
    lVar1 = -0x80000000;
  }
  if (0x7ffffffe < lVar1) {
    lVar1 = 0x7fffffff;
  }
  *(int *)(param_2 + 0x38) = (int)lVar2;
  *(int *)(param_2 + 0x3c) = (int)lVar1;
  return;
}


#undef PTR_recovered_10006744_1000c370
#define PTR_recovered_10006744_1000c370 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000677c
 */

void recovered_1000677c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006744_1000c370;
  return;
}

#undef PTR_recovered_10006744_1000c370

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000679c
 */

void recovered_1000679c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a0
 */

void recovered_100067a0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a4
 */

void recovered_100067a4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulong uVar2;

  uVar2 = *(ulong *)(*param_3 + 0x20);
  if ((long)uVar2 < 2) {
    uVar2 = 1;
  }
  recovered_10005498(param_2,uVar2);
  puVar1 = (undefined1 *)recovered_10004edc(param_2,uVar2);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


#undef PTR_recovered_1000679c_1000c3b8
#define PTR_recovered_1000679c_1000c3b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067bc
 */

void recovered_100067bc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_1000679c_1000c3b8;
  return;
}

#undef PTR_recovered_1000679c_1000c3b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067dc
 */

void recovered_100067dc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e0
 */

void recovered_100067e0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define apvStack_60 (*(void * (*)[3])(frame + 40))
#define apvStack_78 (*(void * (*)[3])(frame + 16))
#define apvStack_48 (*(void * (*)[3])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e4
 */

void recovered_100067e4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[168] = {0};

  char *pcVar1;
  char *pcVar2;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar2 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x60));
  recovered_10003af0(apvStack_48,pcVar2);
  recovered_10003af0(apvStack_78,pcVar1);
  recovered_100068a0((long *)apvStack_60,apvStack_78,apvStack_48);
  recovered_10003aa8(pcVar1);
  recovered_10002f10(apvStack_60[0]);
  recovered_10002f10(apvStack_78[0]);
  recovered_10002f10(apvStack_48[0]);
  return;
}

#undef apvStack_60
#undef apvStack_78
#undef apvStack_48

#undef PTR_recovered_100067dc_1000c400
#define PTR_recovered_100067dc_1000c400 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

void recovered_10006880(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100067dc_1000c400;
  return;
}

#undef PTR_recovered_100067dc_1000c400

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a0
 */

void recovered_100068a0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  recovered_10005744(param_1,param_2);
  recovered_100068ec(param_1,param_3);
  return;
}


#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068ec
 */

void recovered_100068ec(long *param_1,undefined8 *param_2)

{
  unsigned char frame[104] = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  uVar6 = param_2[1];
  puVar1 = &DAT_10007ecf;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10005670(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10004dcc(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10004dcc(param_1,uVar4 + lVar7);
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
  return;
}

#undef DAT_10007ecf
#undef lStack_38

#define local_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006904
 */

long * recovered_10006904(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10005670(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10004dcc(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10004dcc(param_1,uVar3 + lVar5);
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
 * Address: 0x100069e8
 */

void recovered_100069e8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069ec
 */

void recovered_100069ec(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


#define apvStack_38 (*(void * (*)[3])(frame + 40))
#define apvStack_50 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069f0
 */

void recovered_100069f0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[128] = {0};

  char *pcVar1;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  recovered_10003af0(apvStack_50,pcVar1);
  recovered_100068a0((long *)apvStack_38,apvStack_50,(undefined8 *)(*param_3 + 0x40));
  recovered_10003aa8(pcVar1);
  recovered_10002f10(apvStack_38[0]);
  recovered_10002f10(apvStack_50[0]);
  return;
}

#undef apvStack_38
#undef apvStack_50

#undef PTR_recovered_100069e8_1000c448
#define PTR_recovered_100069e8_1000c448 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4fe4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a74
 */

void recovered_10006a74(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_100069e8_1000c448;
  return;
}

#undef PTR_recovered_100069e8_1000c448

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a94
 */

void recovered_10006a94(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a98
 */

void recovered_10006a98(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a9c
 */

void recovered_10006a9c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  lVar2 = recovered_10003b80(pcVar1);
  lVar3 = *(long *)(*param_3 + 0x58);
  *pcVar1 = '\x02';
  *(long *)(pcVar1 + 0x20) = lVar3 + lVar2;
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  if (*(undefined1 **)(pcVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006a94_1000c490
#define PTR_recovered_10006a94_1000c490 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x502cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ad0
 */

void recovered_10006ad0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006a94_1000c490;
  return;
}

#undef PTR_recovered_10006a94_1000c490

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af4
 */

void recovered_10006af4(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af8
 */

void recovered_10006af8(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar2 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar3 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10003b80(pcVar3);
  lVar4 = recovered_10003b80(pcVar2);
  *pcVar2 = '\x02';
  *(long *)(pcVar2 + 0x20) = lVar4 + lVar1;
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  if (*(undefined1 **)(pcVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006af0_1000c4d8
#define PTR_recovered_10006af0_1000c4d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5074U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

void recovered_10006b30(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006af0_1000c4d8;
  return;
}

#undef PTR_recovered_10006af0_1000c4d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

void recovered_10006b50(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b54
 */

void recovered_10006b54(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b58
 */

void recovered_10006b58(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  lVar2 = recovered_10003b80(pcVar1);
  lVar3 = *(long *)(*param_3 + 0x58);
  *pcVar1 = '\x02';
  *(long *)(pcVar1 + 0x20) = lVar2 - lVar3;
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  if (*(undefined1 **)(pcVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006b50_1000c520
#define PTR_recovered_10006b50_1000c520 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x50bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b8c
 */

void recovered_10006b8c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006b50_1000c520;
  return;
}

#undef PTR_recovered_10006b50_1000c520

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bac
 */

void recovered_10006bac(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bb0
 */

void recovered_10006bb0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bb4
 */

void recovered_10006bb4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar2 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar3 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10003b80(pcVar3);
  lVar4 = recovered_10003b80(pcVar2);
  *pcVar2 = '\x02';
  *(long *)(pcVar2 + 0x20) = lVar4 - lVar1;
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  if (*(undefined1 **)(pcVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006bac_1000c568
#define PTR_recovered_10006bac_1000c568 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5104U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bec
 */

void recovered_10006bec(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006bac_1000c568;
  return;
}

#undef PTR_recovered_10006bac_1000c568

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c0c
 */

void recovered_10006c0c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c10
 */

void recovered_10006c10(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c14
 */

void recovered_10006c14(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  lVar2 = recovered_10003b80(pcVar1);
  lVar3 = *(long *)(*param_3 + 0x58);
  *pcVar1 = '\x02';
  *(long *)(pcVar1 + 0x20) = lVar3 * lVar2;
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  if (*(undefined1 **)(pcVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006c0c_1000c5b0
#define PTR_recovered_10006c0c_1000c5b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x514cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c48
 */

void recovered_10006c48(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006c0c_1000c5b0;
  return;
}

#undef PTR_recovered_10006c0c_1000c5b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c68
 */

void recovered_10006c68(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c6c
 */

void recovered_10006c6c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c70
 */

void recovered_10006c70(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar2 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar3 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10003b80(pcVar3);
  lVar4 = recovered_10003b80(pcVar2);
  *pcVar2 = '\x02';
  *(long *)(pcVar2 + 0x20) = lVar4 * lVar1;
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  if (*(undefined1 **)(pcVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006c68_1000c5f8
#define PTR_recovered_10006c68_1000c5f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5194U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ca8
 */

void recovered_10006ca8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006c68_1000c5f8;
  return;
}

#undef PTR_recovered_10006c68_1000c5f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cc8
 */

void recovered_10006cc8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ccc
 */

void recovered_10006ccc(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cd0
 */

void recovered_10006cd0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;

  lVar4 = *(long *)(*param_3 + 0x58);
  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = recovered_10003b80(pcVar1);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar2 / lVar4;
    }
  }
  *pcVar1 = '\x02';
  *(long *)(pcVar1 + 0x20) = lVar3;
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  if (*(undefined1 **)(pcVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006cc8_1000c640
#define PTR_recovered_10006cc8_1000c640 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d3c
 */

void recovered_10006d3c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006cc8_1000c640;
  return;
}

#undef PTR_recovered_10006cc8_1000c640

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d5c
 */

void recovered_10006d5c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d60
 */

void recovered_10006d60(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d64
 */

void recovered_10006d64(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;

  recovered_10005498(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar3 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar4 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10003b80(pcVar4);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = recovered_10003b80(pcVar3);
    lVar5 = 0;
    if (lVar1 != 0) {
      lVar5 = lVar2 / lVar1;
    }
  }
  *pcVar3 = '\x02';
  *(long *)(pcVar3 + 0x20) = lVar5;
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  if (*(undefined1 **)(pcVar3 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar3 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006d5c_1000c688
#define PTR_recovered_10006d5c_1000c688 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dc4
 */

void recovered_10006dc4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006d5c_1000c688;
  return;
}

#undef PTR_recovered_10006d5c_1000c688

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de4
 */

void recovered_10006de4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de8
 */

void recovered_10006de8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dec
 */

void recovered_10006dec(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar4 = (char *)recovered_10004edc(param_2,*(ulong *)(*param_3 + 0x60));
  cVar1 = *pcVar3;
  if (cVar1 != *pcVar4) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      bVar2 = recovered_10006ea0((undefined8 *)(pcVar3 + 8),(undefined8 *)(pcVar4 + 8));
      if (!bVar2) {
        return;
      }
    }
    else if ((cVar1 != '\x02') || (*(long *)(pcVar3 + 0x20) != *(long *)(pcVar4 + 0x20))) {
      return;
    }
  }
  if (*(byte *)(param_2 + 0x40) < 4) {
    *(char *)(param_2 + 0x40) = (char)(0x30201 >> (ulong)((*(byte *)(param_2 + 0x40) & 3) << 3));
  }
  return;
}


#undef PTR_recovered_10006de4_1000c6d0
#define PTR_recovered_10006de4_1000c6d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x526cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

void recovered_10006e80(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002edc(0x10);
  *puVar1 = &PTR_recovered_10006de4_1000c6d0;
  return;
}

#undef PTR_recovered_10006de4_1000c6d0

#undef DAT_10007ecf
#define DAT_10007ecf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

bool recovered_10006ea0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;

  lVar5 = param_1[1];
  pcVar4 = &DAT_10007ecf;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  pcVar6 = &DAT_10007ecf;
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

#undef DAT_10007ecf

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ec8
 */

bool recovered_10006ec8(char *param_1,long param_2,char *param_3,long param_4)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f00
 */

void recovered_10006f00(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10006f98(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10006fac((undefined1 *)(extraout_x0 + lVar1),(undefined1 *)(*param_1 + lVar1));
      recovered_10005938((undefined8 *)(*param_1 + lVar1 + 8));
      lVar1 = lVar1 + 0x28;
    }
    recovered_10002f10((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f98
 */

void recovered_10006f98(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return;
  }
  size = param_1 * 0x28;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cb0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c9c();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fac
 */

undefined1 * recovered_10006fac(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10005cac((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe4
 */

long recovered_10006fe4(long *param_1,undefined1 *param_2)

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
    recovered_10006f00(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10006370((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007058
 */

long recovered_10007058(long *param_1,undefined1 *param_2)

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
    recovered_10006f00(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10006fac((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


#undef DAT_100100c0
#define DAT_100100c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8c5cU)))
#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ba4U)))
#undef PTR_DAT_1000c028
#define PTR_DAT_1000c028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bc4U)))
#undef PTR_recovered_10003914_1000c078
#define PTR_recovered_10003914_1000c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4c14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007314
 */

void recovered_10007314(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_1000c008 & 1) == 0) {
    *PTR_DAT_1000c008 = 1;
    uVar2 = DAT_100100c0;
    puVar1 = PTR_DAT_1000c028;
    *(undefined ***)PTR_DAT_1000c028 = &PTR_recovered_10003914_1000c078;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_100100c0
#undef PTR_DAT_1000c008
#undef PTR_DAT_1000c028
#undef PTR_recovered_10003914_1000c078

#undef DAT_100100c8
#define DAT_100100c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8c64U)))
#undef PTR_DAT_1000c020
#define PTR_DAT_1000c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bbcU)))
#undef PTR_DAT_1000c040
#define PTR_DAT_1000c040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bdcU)))
#undef PTR_recovered_10003918_1000c0a8
#define PTR_recovered_10003918_1000c0a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4c44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007368
 */

void recovered_10007368(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_1000c020 & 1) == 0) {
    *PTR_DAT_1000c020 = 1;
    uVar2 = DAT_100100c8;
    puVar1 = PTR_DAT_1000c040;
    *(undefined ***)PTR_DAT_1000c040 = &PTR_recovered_10003918_1000c0a8;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_100100c8
#undef PTR_DAT_1000c020
#undef PTR_DAT_1000c040
#undef PTR_recovered_10003918_1000c0a8

#undef DAT_100100d0
#define DAT_100100d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8c6cU)))
#undef PTR_DAT_1000c010
#define PTR_DAT_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bacU)))
#undef PTR_DAT_1000c030
#define PTR_DAT_1000c030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bccU)))
#undef PTR_recovered_10003918_1000c0a8
#define PTR_recovered_10003918_1000c0a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4c44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073bc
 */

void recovered_100073bc(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_1000c010 & 1) == 0) {
    *PTR_DAT_1000c010 = 1;
    uVar2 = DAT_100100d0;
    puVar1 = PTR_DAT_1000c030;
    *(undefined ***)PTR_DAT_1000c030 = &PTR_recovered_10003918_1000c0a8;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_100100d0
#undef PTR_DAT_1000c010
#undef PTR_DAT_1000c030
#undef PTR_recovered_10003918_1000c0a8

#undef DAT_100100d0
#define DAT_100100d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8c6cU)))
#undef PTR_DAT_1000c018
#define PTR_DAT_1000c018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bb4U)))
#undef PTR_DAT_1000c038
#define PTR_DAT_1000c038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4bd4U)))
#undef PTR_recovered_10003918_1000c0a8
#define PTR_recovered_10003918_1000c0a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4c44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007410
 */

void recovered_10007410(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;

  if ((*PTR_DAT_1000c018 & 1) == 0) {
    *PTR_DAT_1000c018 = 1;
    uVar2 = DAT_100100d0;
    puVar1 = PTR_DAT_1000c038;
    *(undefined ***)PTR_DAT_1000c038 = &PTR_recovered_10003918_1000c0a8;
    *(undefined8 *)(puVar1 + 8) = uVar2;
    return;
  }
  return;
}

#undef DAT_100100d0
#undef PTR_DAT_1000c018
#undef PTR_DAT_1000c038
#undef PTR_recovered_10003918_1000c0a8
