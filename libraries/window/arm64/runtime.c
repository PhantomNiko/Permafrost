/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6834U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
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
 * Address: 0x10000608
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000608(void)

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

  DAT_1000c110 = 0;
  uStack_48 = 0;
  DAT_1000c118 = 0;
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
    recovered_10001d28(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_1000c118 == 0) {
    uVar4 = _DAT_40010088 & 0xfffffff0;
    if (_DAT_40010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300028 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_10001d28(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  DAT_1000c110 = 1;
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
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

#undef DAT_1000c110
#define DAT_1000c110 (*(byte *)(((uintptr_t)pf_module_state + 0x6834U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
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
 * Address: 0x10000614
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000614(void)

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
  if ((DAT_1000c110 & 1) == 0) {
    DAT_1000c118 = 0;
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
      recovered_10001d28(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c118 == 0) {
      uVar4 = _DAT_40010088 & 0xfffffff0;
      if (_DAT_40010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300028 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10001d28(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    DAT_1000c110 = 1;
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
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

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000087c
 */

ulong recovered_1000087c(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000614();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008c8
 */

long recovered_100008c8(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000614();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000908
 */

ulong recovered_10000908(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000614();
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000944
 */

long recovered_10000944(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000614();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000974
 */

ulong * recovered_10000974(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;

  if (param_1 != 0) {
    recovered_10000614();
    uVar1 = param_1 + 0xfU & 0xfffffffffffffff0;
    for (puVar2 = &DAT_1000c118; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
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

#undef DAT_1000c118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a08
 */

ulong recovered_10000a08(ulong param_1,uint param_2)

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
 * Address: 0x10000a4c
 */

ulong recovered_10000a4c(ulong param_1,uint param_2)

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
 * Address: 0x10000a98
 */

long recovered_10000a98(long param_1,uint param_2)

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
 * Address: 0x10000ae8
 */

/* WARNING: Removing unreachable block (ram,0x10000b38) */

void recovered_10000ae8(ulong param_1,ulong param_2)

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
 * Address: 0x10000af0
 */

ulong recovered_10000af0(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000b50
 */

undefined8 recovered_10000b50(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_10000af0(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b70
 */

long recovered_10000b70(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000af0(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb0
 */

long recovered_10000bb0(long param_1,long param_2)

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
  recovered_10000af0(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bfc
 */

void recovered_10000bfc(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c04
 */

int recovered_10000c04(int param_1)

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
void * recovered_10000c10(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000c54(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000c98(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce4
 */

void * recovered_10000ce4(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

void * recovered_10000d04(void *out,void *data,ulong size)

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
 * Address: 0x10000d54
 */

void * recovered_10000d54(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d70
 */

void recovered_10000d70(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d84
 */

void recovered_10000d84(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d98
 */

int recovered_10000d98(void *left,void *right,ulong size)

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
 * Address: 0x10000dc0
 */

bool recovered_10000dc0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd0
 */

bool recovered_10000dd0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de0
 */

bool recovered_10000de0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000df4
 */

bool recovered_10000df4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e10
 */

bool recovered_10000e10(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e20
 */

bool recovered_10000e20(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e30
 */

int recovered_10000e30(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e44
 */

int recovered_10000e44(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e58
 */

ulong recovered_10000e58(char *text)

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
 * Address: 0x10000e7c
 */

int recovered_10000e7c(char *left,char *right)

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
 * Address: 0x10000ea4
 */

int recovered_10000ea4(char *left,char *right)

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
 * Address: 0x10000ea8
 */

void recovered_10000ea8(long param_1,long param_2)

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
 * Address: 0x10000ec0
 */

void recovered_10000ec0(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000e58(param_1);
    out = recovered_10000c10(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000ce4(out,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000efc
 */

char * recovered_10000efc(char *param_1,char param_2)

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
 * Address: 0x10000f24
 */

long recovered_10000f24(long param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10000efc(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f6c
 */

char * recovered_10000f6c(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000efc(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fac
 */

char * recovered_10000fac(char *param_1,char *param_2)

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


#undef DAT_100059ff
#define DAT_100059ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x123U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

undefined * recovered_10000fe8(void)

{
  unsigned char frame[64] = {0};

  return &DAT_100059ff;
}

#undef DAT_100059ff

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6724U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ff4
 */

undefined ** recovered_10000ff4(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

undefined8 recovered_10001000(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000101c
 */

double recovered_1000101c(double param_1,uint param_2)

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
 * Address: 0x10001050
 */

uint128 recovered_10001050(double param_1,int *param_2)

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
 * Address: 0x100010c4
 */

double recovered_100010c4(double left,double right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e8
 */

double recovered_100010e8(double left,double right)

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
 * Address: 0x10001148
 */

double recovered_10001148(double value)

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
 * Address: 0x10001164
 */

double recovered_10001164(double value)

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
 * Address: 0x10001190
 */

double recovered_10001190(double value)

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


#undef DAT_100058e0
#define DAT_100058e0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cc
 */

double recovered_100011cc(double value)

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
    return (double)iVar1 * DAT_100058e0 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_100058e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001278
 */

long recovered_10001278(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_100058e8
#define DAT_100058e8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000128c
 */

double recovered_1000128c(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_100012e0(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_100058e8);
}

#undef DAT_100058e8

#undef DAT_100058f0
#define DAT_100058f0 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100058f8
#define DAT_100058f8 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10005900
#define DAT_10005900 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10005908
#define DAT_10005908 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012e0
 */

void recovered_100012e0(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_100058f0 < param_1; param_1 = param_1 + DAT_10005908) {
  }
  for (; param_1 < DAT_100058f8; param_1 = param_1 + DAT_10005900) {
  }
  return;
}

#undef DAT_100058f0
#undef DAT_100058f8
#undef DAT_10005900
#undef DAT_10005908

#undef DAT_10005910
#define DAT_10005910 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001324
 */

double recovered_10001324(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_100012e0(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10005910;
}

#undef DAT_10005910

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001370
 */

double recovered_10001370(double value)

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
 * Address: 0x10001380
 */

float recovered_10001380(float left,float right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b4
 */

float recovered_100013b4(float param_1)

{
  unsigned char frame[64] = {0};

  int *in_x0;
  uint128 auVar1;

  auVar1 = recovered_10001050((double)param_1,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013cc
 */

float recovered_100013cc(float param_1)

{
  unsigned char frame[64] = {0};

  uint in_w0;
  double dVar1;

  dVar1 = recovered_1000101c((double)param_1,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e4
 */

float recovered_100013e4(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010e8((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001400
 */

float recovered_10001400(float value)

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
 * Address: 0x10001424
 */

float recovered_10001424(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001164((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000143c
 */

double recovered_1000143c(double value)

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
 * Address: 0x10001464
 */

float recovered_10001464(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000143c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000147c
 */

float recovered_1000147c(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001190((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001494
 */

float recovered_10001494(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100011cc((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014ac
 */

long recovered_100014ac(double param_1)

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
 * Address: 0x100014c0
 */

float recovered_100014c0(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000128c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d8
 */

float recovered_100014d8(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001324((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014f0
 */

float recovered_100014f0(float value)

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
 * Address: 0x10001500
 */

long recovered_10001500(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001598;
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
      goto LAB_100015c4;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_100015c4;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_100015c4;
    }
LAB_10001598:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_100015c4:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001604((uint)*pbVar4);
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
 * Address: 0x10001604
 */

uint recovered_10001604(int param_1)

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
 * Address: 0x10001634
 */

long recovered_10001634(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001718;
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
      goto LAB_10001718;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001718;
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
LAB_10001718:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001604((uint)*pbVar6);
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
 * Address: 0x10001758
 */

double recovered_10001758(char *text,char **end)

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
        dVar11 = recovered_1000101c(dVar11,iVar8 * iVar5);
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
 * Address: 0x100018e8
 */

float recovered_100018e8(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001758(text,end);
  return (float)dVar1;
}


#define local_8c (*(int *)(frame + 16))
#define pdStack_78 (*(double * *)(frame + 36))
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001900
 */

int recovered_10001900(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10001964:
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
LAB_100019f0:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001a88;
      case 100:
      case 0x69:
LAB_10001a40:
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
        if (local_88 < 2) goto LAB_100019bc;
        *local_80 = 0x3f;
        goto LAB_100019b8;
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
        recovered_10001c60((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
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
        goto LAB_100019c0;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x10001a0c;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001c10((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x151U));
        goto code_r0x10001b7c;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001c10((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_100019c0;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001b7c:
        uVar4 = 0x10;
        goto code_r0x10001b94;
      default:
        if (uVar5 == 0x49) goto LAB_10001a40;
        if (uVar5 != 0x58) goto LAB_10018258;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001b98;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001b94:
      iVar7 = 0;
LAB_10001b98:
      recovered_10001c60((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_100019c0;
    }
    if (local_88 < 2) goto LAB_100019bc;
    *local_80 = 0x25;
    goto LAB_100019b8;
  }
  if (bVar1 == 0) {
    if (capacity != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_100019b8;
  }
  goto LAB_100019bc;
code_r0x10001a0c:
  format = format + 1;
  uVar5 = (uint)(byte)*format;
  goto LAB_100019f0;
code_r0x10001a88:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_100019b8:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_100019bc:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_100019c0:
  format = format + 1;
  goto LAB_10001964;
}

#undef local_8c
#undef pdStack_78
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd4
 */

void recovered_10001bd4(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10005a04
#define str_10005a04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

void recovered_10001c10(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10005a04;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001bd4(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10005a04

#undef str_10005a0b
#define str_10005a0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12fU)))
#undef str_10005a1c
#define str_10005a1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

void recovered_10001c60(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_10005a0b;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_10005a1c;
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
    recovered_10001bd4(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_10005a0b
#undef str_10005a1c
#undef local_60

#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

int recovered_10001d00(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10001900(out,capacity,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x683cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d28
 */

void recovered_10001d28(long param_1,ulong param_2,ulong *param_3)

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
      puVar3 = (ulong *)&DAT_1000c118;
      if (DAT_1000c118 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_1000c118

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
 * Address: 0x10001d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001d80(int param_1)

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

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb8
 */

void recovered_10001eb8(char *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c128 != 0) {
          DAT_1000c128 = DAT_1000c128 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_1000c130 + DAT_1000c128;
          DAT_1000c128 = DAT_1000c128 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f70(int param_1)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c128 != 0) || (param_1 != 0)) {
    if (DAT_1000c128 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000ce4(local_230,&DAT_1000c130,DAT_1000c128);
      uVar2 = DAT_1000c128;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002cb0(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_1000c128 = 0;
  }
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ffc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ffc(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c128 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000ce4(auStack_230,&DAT_1000c130,DAT_1000c128);
    uVar2 = DAT_1000c128;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002cb0(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_1000c128 = 0;
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002004
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002004(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c128 != 0) {
    if (DAT_1000c128 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000ce4(auStack_230,&DAT_1000c130,DAT_1000c128);
      uVar2 = DAT_1000c128;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002cb0(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_1000c128 = 0;
  }
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10005a30
#define DAT_10005a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000200c
 */

void recovered_1000200c(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_10005a30;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001d00(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001eb8(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10005a30
#undef acStack_160

#undef DAT_10005b1a
#define DAT_10005b1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23eU)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef str_10005a33
#define str_10005a33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157U)))
#undef str_10005a56
#define str_10005a56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_10005a8f
#define str_10005a8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_10005ac4
#define str_10005ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10005aea
#define str_10005aea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002070
 */

/* WARNING: Removing unreachable block (ram,0x100020ec) */

void recovered_10002070(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100020c4(str_10005a33);
  recovered_100020c4(str_10005a56);
  recovered_100020c4(str_10005a8f);
  recovered_100020c4(str_10005ac4);
  recovered_100020c4(str_10005aea);
  pcVar4 = &DAT_10005b1a;
  for (uVar3 = recovered_10000e58(&DAT_10005b1a); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c128 != 0) {
        DAT_1000c128 = DAT_1000c128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f70(1);
      }
      else {
        if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
          recovered_10001f70(0);
        }
        pcVar1 = &DAT_1000c130 + DAT_1000c128;
        DAT_1000c128 = DAT_1000c128 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10005b1a
#undef DAT_1000c128
#undef DAT_1000c130
#undef str_10005a33
#undef str_10005a56
#undef str_10005a8f
#undef str_10005ac4
#undef str_10005aea

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c4
 */

void recovered_100020c4(char *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10000e58(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c128 != 0) {
          DAT_1000c128 = DAT_1000c128 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_1000c130 + DAT_1000c128;
          DAT_1000c128 = DAT_1000c128 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130

#undef DAT_10005b1a
#define DAT_10005b1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23eU)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef str_10005b1d
#define str_10005b1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x241U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

/* WARNING: Removing unreachable block (ram,0x100020ec) */

void recovered_100020f0(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100020c4(str_10005b1d);
  pcVar4 = &DAT_10005b1a;
  for (uVar3 = recovered_10000e58(&DAT_10005b1a); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c128 != 0) {
        DAT_1000c128 = DAT_1000c128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f70(1);
      }
      else {
        if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
          recovered_10001f70(0);
        }
        pcVar1 = &DAT_1000c130 + DAT_1000c128;
        DAT_1000c128 = DAT_1000c128 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10005b1a
#undef DAT_1000c128
#undef DAT_1000c130
#undef str_10005b1d

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x40010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002114
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002114(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10002004();
    bVar2 = recovered_10002cb0(0x44);
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
 * Address: 0x1000218c
 */

undefined8 recovered_1000218c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

void recovered_10002190(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002194
 */

undefined8 recovered_10002194(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005a30
#define DAT_10005a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
#undef str_10005bb1
#define str_10005bb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_10005bbe
#define str_10005bbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_10005bcc
#define str_10005bcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f0U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000219c
 */

undefined4 * recovered_1000219c(char *param_1,long param_2)

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
  iVar2 = recovered_10000e7c(param_1,str_10005bb1);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c(param_1,str_10005bbe);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c(param_1,str_10005bcc);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000d54(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000efc((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000efc((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000efc((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000efc((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000efc((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000efc((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000efc((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10005a30);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100023d8(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002380:
            recovered_10000c54(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000efc((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002428((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002380;
              recovered_10000ce4(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c10(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d54(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10005a30);
  return puVar4;
}

#undef DAT_10005a30
#undef DAT_1000c058
#undef str_10005bb1
#undef str_10005bbe
#undef str_10005bcc
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x40010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023d8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100023d8(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002cb0(0x34);
  if ((bVar1) && (_DAT_40010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010834
#undef _DAT_40010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002428
 */

undefined8 recovered_10002428(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000c98(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_10005a30
#define DAT_10005a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x154U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
#undef str_10005bb1
#define str_10005bb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_10005bbe
#define str_10005bbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_10005bcc
#define str_10005bcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f0U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b0
 */

void recovered_100024b0(char *param_1,long param_2,int *param_3)

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
    recovered_100024e4(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return;
  }
  iVar2 = recovered_10000e7c(param_1,str_10005bb1);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c(param_1,str_10005bbe);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c(param_1,str_10005bcc);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return;
        }
        recovered_10000d54(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000efc((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000efc((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000efc((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000efc((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000efc((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000efc((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000efc((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10005a30);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100023d8(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002380:
            recovered_10000c54(puVar4);
            return;
          }
        }
        else {
          pcVar5 = recovered_10000efc((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002428((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002380;
              recovered_10000ce4(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c10(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return;
  }
  recovered_10000d54(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10005a30);
  return;
}

#undef DAT_10005a30
#undef DAT_1000c058
#undef str_10005bb1
#undef str_10005bbe
#undef str_10005bcc
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024e4
 */

undefined8 recovered_100024e4(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002884(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000c54(*(void **)(param_1 + 0x40));
    }
    recovered_10000c54(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002528
 */

long recovered_10002528(undefined1 *param_1,long param_2,long param_3,int *param_4)

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
          uVar3 = recovered_100025d8(param_4);
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


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025d8
 */

uint recovered_100025d8(int *param_1)

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
LAB_10002670:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10002114((long)text,0x1fe,&DAT_10005a03,0);
      if (bVar2) {
        uVar3 = recovered_10000e58(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002670;
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

#undef DAT_10005a03

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026bc
 */

long recovered_100026bc(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10001eb8(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_100027bc;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002428((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000d54((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000ce4((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_100027bc;
    }
  }
  param_3 = 0;
LAB_100027bc:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027cc
 */

undefined8 recovered_100027cc(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_100027d8;
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
LAB_100027d8:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

undefined8 recovered_10002860(long param_1)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002884
 */

undefined8 recovered_10002884(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002a60(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x100028f8
 */

undefined1 recovered_100028f8(long param_1)

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
 * Address: 0x10002904
 */

undefined1 recovered_10002904(long param_1)

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
 * Address: 0x10002910
 */

void recovered_10002910(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002924
 */

uint recovered_10002924(uint param_1,long param_2)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002948
 */

undefined8 recovered_10002948(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10002980(param_1);
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
 * Address: 0x10002980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002980(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002cb0(0x3c);
  if ((bVar1) && (_DAT_4001083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100029b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_4001083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_4001083c
#undef _DAT_4001083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x677cU)))
#define uStack_28 (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c4
 */

undefined8 recovered_100029c4(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000d54(&uStack_2c,0,0xc);
    uVar1 = recovered_100023d8(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10002a60(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002980(param_1), (int)uVar1 != 0)) {
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
 * Address: 0x10002a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002cb0(0x38);
  if ((bVar1) && (_DAT_40010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002ab0. Too many branches */
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
 * Address: 0x10002ac0
 */

undefined8 recovered_10002ac0(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000d54(&uStack_3c,0,0xc);
    uVar2 = recovered_100023d8(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_10000c10((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000ce4(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10002b60
 */

bool recovered_10002b60(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002a60(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b8c
 */

undefined8 recovered_10002b8c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b90
 */

void recovered_10002b90(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b94
 */

undefined8 recovered_10002b94(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b98
 */

undefined8 recovered_10002b98(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b9c
 */

undefined8 recovered_10002b9c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba0
 */

char * recovered_10002ba0(long param_1,char param_2,long param_3)

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
 * Address: 0x10002bc4
 */

int recovered_10002bc4(char *left,char *right,ulong size)

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


#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef str_10005b43
#define str_10005b43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#undef str_10005b50
#define str_10005b50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x274U)))
#undef str_10005b5a
#define str_10005b5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27eU)))
#undef str_10005b6e
#define str_10005b6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_10005b7c
#define str_10005b7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a0U)))
#undef str_10005b8e
#define str_10005b8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10005b9a
#define str_10005b9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2beU)))
#undef str_10005bab
#define str_10005bab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf4
 */

char * recovered_10002bf4(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10005b40;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002c20_caseD_1;
  case 2:
    return str_10005b43;
  case 5:
    return str_10005b50;
  case 9:
    return str_10005b5a;
  case 0xc:
    return str_10005b6e;
  case 0xd:
    return str_10005b7c;
  default:
    if (param_1 == 0x11) {
      return str_10005b8e;
    }
    if (param_1 == 0x16) {
      return str_10005b9a;
    }
switchD_10002c20_caseD_1:
    return str_10005bab;
  }
}

#undef DAT_10005b40
#undef str_10005b43
#undef str_10005b50
#undef str_10005b5a
#undef str_10005b6e
#undef str_10005b7c
#undef str_10005b8e
#undef str_10005b9a
#undef str_10005bab

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c94
 */

undefined8 recovered_10002c94(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c98
 */

undefined8 recovered_10002c98(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9c
 */

void recovered_10002c9c(void)

{
  unsigned char frame[64] = {0};

  DAT_1000c120 = DAT_1000c120 + 1;
  return;
}

#undef DAT_1000c120

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
 * Address: 0x10002cb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002cb0(int param_1)

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
 * Address: 0x10002d7c
 */

void recovered_10002d7c(long param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked, returns_twice)) unsigned long recovered_10002d90(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002dbc(unsigned long *context,int value)
{
 __asm__ volatile("cmp w1,#0\ncsinc w1,w1,wzr,ne\nldp x19,x20,[x0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nmov w0,w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df0
 */

void recovered_10002df0(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10000bfc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e00);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e04
 */

undefined8 recovered_10002e04(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e0c
 */

void recovered_10002e0c(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e1c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002df0();
}


#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e1c
 */

void recovered_10002e1c(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c330;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c330 = param_1;
  return;
}

#undef DAT_1000c330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e3c
 */

void * recovered_10002e3c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e6c
 */

void * recovered_10002e6c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e70
 */

void recovered_10002e70(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e88
 */

void recovered_10002e88(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea0
 */

void recovered_10002ea0(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eb8
 */

void recovered_10002eb8(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed0
 */

undefined8 recovered_10002ed0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed8
 */

uint recovered_10002ed8(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee8
 */

void recovered_10002ee8(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef8
 */

void recovered_10002ef8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002efc
 */

undefined1 * recovered_10002efc(ulong param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000c10(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002df0();
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
 * Address: 0x10002f44
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002f44(long param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10001d80(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f54
 */

long recovered_10002f54(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a54U)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f5c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002f5c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c330;
  if (DAT_1000c330 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c330 + 0x10);
    DAT_1000c330 = *(long *)(DAT_1000c330 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_10001d80(0x50);
      if ((bVar3) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_40010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c330
#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fb4
 */

void recovered_10002fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002fd4((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a5cU)))
#define cStack_2e (*(char *)(frame + 18))
#define local_30 (*(undefined2 *)(frame + 16))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define local_28 (*(undefined4 *)(frame + 24))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd4
 */

void recovered_10002fd4(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c338;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003034;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100034cc((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_100030e0(param_1);
LAB_10003034:
                    /* WARNING: Subroutine does not return */
  recovered_10002df0();
}

#undef DAT_1000c338
#undef cStack_2e
#undef local_30
#undef uStack_2d
#undef local_28
#undef uStack_2c

#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003038
 */

void recovered_10003038(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c330;
  if (DAT_1000c330 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002df0();
  }
  *(undefined1 *)(DAT_1000c330 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002fd4(puVar1);
}

#undef DAT_1000c330

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003068
 */

void recovered_10003068(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000c338;
  DAT_1000c338 = param_1;
  return;
}

#undef DAT_1000c338

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

void recovered_1000307c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c338;
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

#undef DAT_1000c338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a8
 */

void recovered_100030a8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

                    /* WARNING: Subroutine does not return */
  recovered_10002fd4(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b4
 */

void recovered_100030b4(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002df0();
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a5cU)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

undefined8 recovered_100030c0(undefined8 *param_1)

{
  unsigned char frame[128] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c338 != (long *)0x0) {
    DAT_1000c338 = (long *)*DAT_1000c338;
  }
  puVar2 = (undefined8 *)recovered_100030e0(param_1);
  plVar3 = DAT_1000c338;
  while( true ) {
    DAT_1000c338 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002df0();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_100034cc((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003174;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003174:
  recovered_10002d7c((long)plVar3);
  recovered_100030c0(extraout_x0);
  return 0;
}

#undef DAT_1000c338
#undef uStack_50
#undef uStack_48

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a5cU)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e0
 */

undefined8 recovered_100030e0(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_1000c338;
  while( true ) {
    DAT_1000c338 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002df0();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_100034cc((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003174;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10003174:
  recovered_10002d7c((long)plVar2);
  recovered_100030c0(extraout_x0);
  return 0;
}

#undef DAT_1000c338
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000317c
 */

undefined8 recovered_1000317c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

  recovered_100030c0(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003188
 */

undefined8 recovered_10003188(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003190
 */

void recovered_10003190(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002df0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000319c
 */

long recovered_1000319c(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_100031dc(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031dc
 */

bool recovered_100031dc(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10003260:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003260;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003260;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x67d4U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003268
 */

void recovered_10003268(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000326c
 */

undefined8 recovered_1000326c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003274
 */

bool recovered_10003274(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003284
 */

bool recovered_10003284(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032bc
 */

bool recovered_100032bc(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d8
 */

bool recovered_100032d8(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f0
 */

bool recovered_100032f0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003308
 */

bool recovered_10003308(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

bool recovered_10003320(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003338
 */

double recovered_10003338(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10001148(value);
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
 * Address: 0x10003384
 */

long recovered_10003384(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100033c4;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100033c4:
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
      goto LAB_10003448;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003448;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003448;
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
LAB_10003448:
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
 * Address: 0x100034c8
 */

long recovered_100034c8(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100033c4;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100033c4:
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
      goto LAB_10003448;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003448;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003448;
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
LAB_10003448:
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

#undef DAT_10005950
#define DAT_10005950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034cc
 */

undefined8 recovered_100034cc(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_100036a4((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10003798(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10003798(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10003798(&local_68);
        uVar5 = recovered_10003798(&local_68);
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
            uVar5 = recovered_100037fc(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_100037fc(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10005950 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_100036a4((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_100031dc(param_2,(long *)puVar6);
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

#undef DAT_10005950
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a4
 */

ulong * recovered_100036a4(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_100037d0(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_1000375c;
  case 1:
    puVar1 = (ulong *)recovered_10003798(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_100037d0(pbVar5,2);
    goto LAB_10003758;
  case 3:
    puVar1 = (ulong *)recovered_100037d0(pbVar5,4);
    goto LAB_10003720;
  default:
    goto switchD_100036ec_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_100037fc(param_2);
    break;
  case 10:
    uVar3 = recovered_100037d0(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10003758:
    pbVar4 = pbVar5 + 2;
LAB_1000375c:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_100037d0(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10003720:
    pbVar4 = pbVar5 + 4;
    goto LAB_1000375c;
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
switchD_100036ec_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003798
 */

ulong recovered_10003798(undefined8 *param_1)

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
 * Address: 0x100037d0
 */

ulong recovered_100037d0(byte *param_1,long param_2)

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
 * Address: 0x100037fc
 */

ulong recovered_100037fc(undefined8 *param_1)

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


#undef DAT_100059b8
#define DAT_100059b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a6cU)))
#undef UNK_400108a0
#define UNK_400108a0 (*(uint *)(0x400108a0U))
#undef str_10005bda
#define str_10005bda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2feU)))
#undef uRam00000000400108a0
#define uRam00000000400108a0 (*(uint *)(0x400108a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

long * recovered_10003874(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  void *data;

  plVar5 = recovered_10002e3c(0xd0);
  *plVar5 = 0;
  plVar5[2] = 0;
  plVar5[1] = 0;
  plVar5[4] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(int *)((long)plVar5 + 0x2c) = (int)DAT_100059b8;
  *(undefined1 *)(plVar5 + 6) = 0xf6;
  *(undefined8 *)((long)plVar5 + 0x34) = 0;
  *(undefined2 *)((long)plVar5 + 0x3c) = 0;
  *(undefined1 *)((long)plVar5 + 0x3e) = 0;
  plVar5[8] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0x11] = 0;
  plVar5[0x13] = 0;
  plVar5[0x12] = 0;
  plVar5[0x15] = 0;
  plVar5[0x14] = 0;
  pcVar1 = str_10005bda;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  plVar5[0x17] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = 0;
  plVar5[0x18] = 0;
  recovered_100039b0(plVar5,(long)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)((long)plVar5 + 0x1c) = param_2;
  *(uint *)(plVar5 + 4) = param_3;
  *(uint *)((long)plVar5 + 0x34) = param_2 >> 1;
  *(uint *)(plVar5 + 7) = param_3 >> 1;
  puVar2 = &DAT_10005a03;
  if ((undefined1 *)*plVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*plVar5;
  }
  bVar3 = recovered_100050b8(0xa0);
  if ((bVar3) && (uRam00000000400108a0 != 0)) {
    iVar4 = (*(code *)(ulong)uRam00000000400108a0)(puVar2,param_2,param_3);
    *(int *)(plVar5 + 3) = iVar4;
    if (iVar4 != 0) {
      DAT_1000c348 = plVar5;
      recovered_10003a14(plVar5);
      recovered_10003cec((long)plVar5);
      return plVar5;
    }
  }
  else {
    *(undefined4 *)(plVar5 + 3) = 0;
  }
  recovered_100039ec(plVar5);
  recovered_10002e70(data);
  return (long *)0x0;
}

#undef DAT_100059b8
#undef DAT_10005a03
#undef DAT_1000c348
#undef UNK_400108a0
#undef str_10005bda
#undef uRam00000000400108a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

long * recovered_100039b0(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10004f48(param_2);
  recovered_10004e60(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039ec
 */

void recovered_100039ec(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005100(param_1 + 8);
  recovered_10002e70((void *)*param_1);
  return;
}


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef UNK_400108a4
#define UNK_400108a4 (*(uint *)(0x400108a4U))
#undef uRam00000000400108a4
#define uRam00000000400108a4 (*(uint *)(0x400108a4U))
#define local_78 (*(void * *)(frame + 16))
#define local_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a14
 */

void recovered_10003a14(undefined8 *param_1)

{
  unsigned char frame[168] = {0};

  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  bool bVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;

  if ((param_1 != (undefined8 *)0x0) && (iVar25 = *(int *)(param_1 + 3), iVar25 != 0)) {
    iVar10 = *(int *)((long)param_1 + 0x1c);
    iVar11 = *(int *)(param_1 + 4);
    iVar6 = iVar10;
    if (iVar10 < 2) {
      iVar6 = 1;
    }
    iVar7 = iVar11;
    if (iVar11 < 2) {
      iVar7 = 1;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_78 = (void *)0x0;
    if (((param_1[9] != 0) && (0 < *(int *)(param_1 + 0xb))) && (0 < *(int *)((long)param_1 + 0x5c))
       ) {
      uVar26 = (long)iVar10 * (long)iVar11 * 4;
      recovered_1000512c((long *)&local_78,uVar26);
      for (uVar21 = 0; uVar21 < uVar26; uVar21 = uVar21 + 4) {
        *(undefined1 *)((long)local_78 + uVar21) = *(undefined1 *)((long)param_1 + 0x2e);
        *(undefined1 *)((long)local_78 + uVar21 + 1) = *(undefined1 *)((long)param_1 + 0x2f);
        *(undefined1 *)((long)local_78 + uVar21 + 2) = *(undefined1 *)(param_1 + 6);
        *(undefined1 *)((long)local_78 + uVar21 + 3) = 0xff;
      }
      iVar25 = *(int *)(param_1 + 0xb);
      iVar10 = *(int *)((long)param_1 + 0x5c);
      uVar8 = *(uint *)((long)param_1 + 0x1c);
      uVar9 = *(uint *)(param_1 + 4);
      uVar19 = 0;
      if ((long)iVar25 != 0) {
        uVar19 = (uint)(((long)iVar10 * (long)(int)uVar8) / (long)iVar25);
      }
      if ((int)uVar19 < 2) {
        uVar19 = 1;
      }
      uVar22 = uVar8;
      if ((int)uVar9 < (int)uVar19) {
        uVar22 = 0;
        if ((long)iVar10 != 0) {
          uVar22 = (uint)(((long)(int)uVar9 * (long)iVar25) / (long)iVar10);
        }
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        uVar19 = uVar9;
      }
      lVar23 = (long)((int)(uVar8 - uVar22) / 2);
      uVar26 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
      lVar24 = (long)((int)(uVar9 - uVar19) / 2);
      for (uVar21 = 0; uVar21 != (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar21 = uVar21 + 1
          ) {
        iVar25 = 0;
        iVar10 = 0;
        if (uVar19 != 0) {
          iVar10 = (*(int *)((long)param_1 + 0x5c) * (int)uVar21) / (int)uVar19;
        }
        iVar11 = *(int *)((long)param_1 + 0x5c) + -1;
        if (iVar10 <= iVar11) {
          iVar11 = iVar10;
        }
        lVar15 = lVar23;
        uVar16 = uVar26;
        iVar2 = 0;
        if (-1 < iVar10) {
          iVar2 = iVar11;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          iVar10 = *(int *)(param_1 + 0xb);
          iVar11 = 0;
          if (uVar22 != 0) {
            iVar11 = (iVar10 * iVar25) / (int)uVar22;
          }
          iVar3 = iVar10 + -1;
          if (iVar11 <= iVar10 + -1) {
            iVar3 = iVar11;
          }
          iVar4 = 0;
          if (-1 < iVar11) {
            iVar4 = iVar3;
          }
          lVar1 = (long)iVar10 * (long)iVar2 + (long)iVar4;
          lVar20 = lVar15 + lVar24 * *(int *)((long)param_1 + 0x1c);
          *(undefined1 *)((long)local_78 + lVar20 * 4) = *(undefined1 *)(param_1[8] + lVar1 * 4);
          *(undefined1 *)((long)local_78 + lVar20 * 4 + 1) =
               *(undefined1 *)(param_1[8] + lVar1 * 4 + 1);
          *(undefined1 *)((long)local_78 + lVar20 * 4 + 2) =
               *(undefined1 *)(param_1[8] + lVar1 * 4 + 2);
          *(undefined1 *)((long)local_78 + lVar20 * 4 + 3) =
               *(undefined1 *)(param_1[8] + lVar1 * 4 + 3);
          iVar25 = iVar25 + 1;
          lVar15 = lVar15 + 1;
        }
        lVar24 = lVar24 + 1;
      }
      iVar25 = *(int *)(param_1 + 3);
    }
    pvVar17 = local_78;
    puVar5 = &DAT_10005a03;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*param_1;
    }
    bVar12 = *(byte *)((long)param_1 + 0x2e);
    bVar13 = *(byte *)((long)param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 6);
    bVar18 = recovered_100050b8(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      if (uRam00000000400108a4 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uRam00000000400108a4)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)((long)param_1 + 0x2d) = uVar19 != 0;
    local_70 = 0;
    recovered_10002e70(local_78);
  }
  return;
}

#undef DAT_10005a03
#undef UNK_400108a4
#undef uRam00000000400108a4
#undef local_78
#undef local_70
#undef uStack_68

#undef UNK_400108b4
#define UNK_400108b4 (*(uint *)(0x400108b4U))
#undef uRam00000000400108b4
#define uRam00000000400108b4 (*(uint *)(0x400108b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cec
 */

ulong recovered_10003cec(long param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      bVar2 = recovered_100050b8(0xb4);
      uVar3 = (ulong)bVar2;
      if (bVar2) {
        if (uRam00000000400108b4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (*(code *)(ulong)uRam00000000400108b4)(iVar1,param_1 + 0x60);
          if ((int)uVar3 != 0) {
            *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x88);
            uVar3 = 1;
            if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
              return 1;
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
  }
  return uVar3;
}

#undef UNK_400108b4
#undef uRam00000000400108b4

#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(uint *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003d68(long param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      bVar4 = recovered_100050b8(0xb0);
      if ((bVar4) && (_DAT_400108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_400108b0)(iVar3,uVar1,uVar2,1,1);
        return;
      }
    }
  }
  return;
}

#undef DAT_400108b0
#undef _DAT_400108b0

#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a6cU)))
#undef UNK_400108a8
#define UNK_400108a8 (*(uint *)(0x400108a8U))
#undef uRam00000000400108a8
#define uRam00000000400108a8 (*(uint *)(0x400108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

void recovered_10003de0(long param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  void *buffer;

  if (param_1 == 0) {
    return;
  }
  if (DAT_1000c348 == param_1) {
    DAT_1000c348 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (bVar2 = recovered_100050b8(0xa8), bVar2)) && (uRam00000000400108a8 != 0)) {
    (*(code *)(ulong)uRam00000000400108a8)(iVar1);
  }
  recovered_100039ec((undefined8 *)param_1);
  recovered_10000c54(buffer);
  return;
}

#undef DAT_1000c348
#undef UNK_400108a8
#undef uRam00000000400108a8

#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#define local_38 (*(undefined1 * *)(frame + 16))
#define local_30 (*(long *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e48
 */

void * recovered_10003e48(undefined8 *param_1)

{
  unsigned char frame[104] = {0};

  undefined1 *data;
  ulong size;
  void *out;

  if (param_1 == (undefined8 *)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    size = 1;
    local_38 = (undefined1 *)0x0;
  }
  else {
    recovered_10005214(&local_38,param_1);
    size = local_30 + 1;
  }
  out = recovered_10002e6c(size);
  data = &DAT_10005a03;
  if (local_38 != (undefined1 *)0x0) {
    data = local_38;
  }
  recovered_10000ce4(out,data,local_30 + 1);
  recovered_10002e70(local_38);
  return out;
}

#undef DAT_10005a03
#undef local_38
#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec8
 */

void recovered_10003ec8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
    }
    *param_3 = uVar1;
  }
  return;
}


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef UNK_400108a4
#define UNK_400108a4 (*(uint *)(0x400108a4U))
#undef uRam00000000400108a4
#define uRam00000000400108a4 (*(uint *)(0x400108a4U))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003efc
 */

void recovered_10003efc(long param_1,int param_2,int param_3)

{
  unsigned char frame[168] = {0};

  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  bool bVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_3;
  recovered_10003f38(param_1);
  if ((param_1 != 0) && (iVar25 = *(int *)(param_1 + 0x18), iVar25 != 0)) {
    iVar10 = *(int *)(param_1 + 0x1c);
    iVar11 = *(int *)(param_1 + 0x20);
    iVar6 = iVar10;
    if (iVar10 < 2) {
      iVar6 = 1;
    }
    iVar7 = iVar11;
    if (iVar11 < 2) {
      iVar7 = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pvStack_78 = (void *)0x0;
    if (((*(long *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x58))) &&
       (0 < *(int *)(param_1 + 0x5c))) {
      uVar26 = (long)iVar10 * (long)iVar11 * 4;
      recovered_1000512c((long *)&pvStack_78,uVar26);
      for (uVar21 = 0; uVar21 < uVar26; uVar21 = uVar21 + 4) {
        *(undefined1 *)((long)pvStack_78 + uVar21) = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 1) = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 2) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 3) = 0xff;
      }
      iVar25 = *(int *)(param_1 + 0x58);
      iVar10 = *(int *)(param_1 + 0x5c);
      uVar8 = *(uint *)(param_1 + 0x1c);
      uVar9 = *(uint *)(param_1 + 0x20);
      uVar19 = 0;
      if ((long)iVar25 != 0) {
        uVar19 = (uint)(((long)iVar10 * (long)(int)uVar8) / (long)iVar25);
      }
      if ((int)uVar19 < 2) {
        uVar19 = 1;
      }
      uVar22 = uVar8;
      if ((int)uVar9 < (int)uVar19) {
        uVar22 = 0;
        if ((long)iVar10 != 0) {
          uVar22 = (uint)(((long)(int)uVar9 * (long)iVar25) / (long)iVar10);
        }
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        uVar19 = uVar9;
      }
      lVar23 = (long)((int)(uVar8 - uVar22) / 2);
      uVar26 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
      lVar24 = (long)((int)(uVar9 - uVar19) / 2);
      for (uVar21 = 0; uVar21 != (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar21 = uVar21 + 1
          ) {
        iVar25 = 0;
        iVar10 = 0;
        if (uVar19 != 0) {
          iVar10 = (*(int *)(param_1 + 0x5c) * (int)uVar21) / (int)uVar19;
        }
        iVar11 = *(int *)(param_1 + 0x5c) + -1;
        if (iVar10 <= iVar11) {
          iVar11 = iVar10;
        }
        lVar15 = lVar23;
        uVar16 = uVar26;
        iVar2 = 0;
        if (-1 < iVar10) {
          iVar2 = iVar11;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          iVar10 = *(int *)(param_1 + 0x58);
          iVar11 = 0;
          if (uVar22 != 0) {
            iVar11 = (iVar10 * iVar25) / (int)uVar22;
          }
          iVar3 = iVar10 + -1;
          if (iVar11 <= iVar10 + -1) {
            iVar3 = iVar11;
          }
          iVar4 = 0;
          if (-1 < iVar11) {
            iVar4 = iVar3;
          }
          lVar1 = (long)iVar10 * (long)iVar2 + (long)iVar4;
          lVar20 = lVar15 + lVar24 * *(int *)(param_1 + 0x1c);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 1) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 1);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 2) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 2);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 3) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 3);
          iVar25 = iVar25 + 1;
          lVar15 = lVar15 + 1;
        }
        lVar24 = lVar24 + 1;
      }
      iVar25 = *(int *)(param_1 + 0x18);
    }
    pvVar17 = pvStack_78;
    puVar5 = &DAT_10005a03;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)param_1;
    }
    bVar12 = *(byte *)(param_1 + 0x2e);
    bVar13 = *(byte *)(param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 0x30);
    bVar18 = recovered_100050b8(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      if (uRam00000000400108a4 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uRam00000000400108a4)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar19 != 0;
    uStack_70 = 0;
    recovered_10002e70(pvStack_78);
  }
  return;
}

#undef DAT_10005a03
#undef UNK_400108a4
#undef uRam00000000400108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f38
 */

void recovered_10003f38(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;

  uVar1 = NEON_smax(*(undefined8 *)(param_1 + 0x1c),0x100000001,4);
  lVar3 = *(long *)(param_1 + 0x34);
  uVar2 = NEON_smin(CONCAT44((int)((ulong)uVar1 >> 0x20) + -1,(int)uVar1 + -1),lVar3,4);
  *(ulong *)(param_1 + 0x34) = CONCAT44(-(uint)(-1 < lVar3),-(uint)(-1 < (int)lVar3)) & uVar2;
  return;
}


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef UNK_400108a4
#define UNK_400108a4 (*(uint *)(0x400108a4U))
#undef uRam00000000400108a4
#define uRam00000000400108a4 (*(uint *)(0x400108a4U))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f64
 */

void recovered_10003f64(long param_1,undefined1 *param_2)

{
  unsigned char frame[168] = {0};

  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  bool bVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  puVar5 = &DAT_10005a03;
  if (param_2 != (undefined1 *)0x0) {
    puVar5 = param_2;
  }
  recovered_100039b0((long *)param_1,(long)puVar5);
  if ((param_1 != 0) && (iVar25 = *(int *)(param_1 + 0x18), iVar25 != 0)) {
    iVar10 = *(int *)(param_1 + 0x1c);
    iVar11 = *(int *)(param_1 + 0x20);
    iVar6 = iVar10;
    if (iVar10 < 2) {
      iVar6 = 1;
    }
    iVar7 = iVar11;
    if (iVar11 < 2) {
      iVar7 = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pvStack_78 = (void *)0x0;
    if (((*(long *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x58))) &&
       (0 < *(int *)(param_1 + 0x5c))) {
      uVar26 = (long)iVar10 * (long)iVar11 * 4;
      recovered_1000512c((long *)&pvStack_78,uVar26);
      for (uVar21 = 0; uVar21 < uVar26; uVar21 = uVar21 + 4) {
        *(undefined1 *)((long)pvStack_78 + uVar21) = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 1) = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 2) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 3) = 0xff;
      }
      iVar25 = *(int *)(param_1 + 0x58);
      iVar10 = *(int *)(param_1 + 0x5c);
      uVar8 = *(uint *)(param_1 + 0x1c);
      uVar9 = *(uint *)(param_1 + 0x20);
      uVar19 = 0;
      if ((long)iVar25 != 0) {
        uVar19 = (uint)(((long)iVar10 * (long)(int)uVar8) / (long)iVar25);
      }
      if ((int)uVar19 < 2) {
        uVar19 = 1;
      }
      uVar22 = uVar8;
      if ((int)uVar9 < (int)uVar19) {
        uVar22 = 0;
        if ((long)iVar10 != 0) {
          uVar22 = (uint)(((long)(int)uVar9 * (long)iVar25) / (long)iVar10);
        }
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        uVar19 = uVar9;
      }
      lVar23 = (long)((int)(uVar8 - uVar22) / 2);
      uVar26 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
      lVar24 = (long)((int)(uVar9 - uVar19) / 2);
      for (uVar21 = 0; uVar21 != (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar21 = uVar21 + 1
          ) {
        iVar25 = 0;
        iVar10 = 0;
        if (uVar19 != 0) {
          iVar10 = (*(int *)(param_1 + 0x5c) * (int)uVar21) / (int)uVar19;
        }
        iVar11 = *(int *)(param_1 + 0x5c) + -1;
        if (iVar10 <= iVar11) {
          iVar11 = iVar10;
        }
        lVar15 = lVar23;
        uVar16 = uVar26;
        iVar2 = 0;
        if (-1 < iVar10) {
          iVar2 = iVar11;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          iVar10 = *(int *)(param_1 + 0x58);
          iVar11 = 0;
          if (uVar22 != 0) {
            iVar11 = (iVar10 * iVar25) / (int)uVar22;
          }
          iVar3 = iVar10 + -1;
          if (iVar11 <= iVar10 + -1) {
            iVar3 = iVar11;
          }
          iVar4 = 0;
          if (-1 < iVar11) {
            iVar4 = iVar3;
          }
          lVar1 = (long)iVar10 * (long)iVar2 + (long)iVar4;
          lVar20 = lVar15 + lVar24 * *(int *)(param_1 + 0x1c);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 1) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 1);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 2) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 2);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 3) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 3);
          iVar25 = iVar25 + 1;
          lVar15 = lVar15 + 1;
        }
        lVar24 = lVar24 + 1;
      }
      iVar25 = *(int *)(param_1 + 0x18);
    }
    pvVar17 = pvStack_78;
    puVar5 = &DAT_10005a03;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)param_1;
    }
    bVar12 = *(byte *)(param_1 + 0x2e);
    bVar13 = *(byte *)(param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 0x30);
    bVar18 = recovered_100050b8(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      if (uRam00000000400108a4 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uRam00000000400108a4)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar19 != 0;
    uStack_70 = 0;
    recovered_10002e70(pvStack_78);
  }
  return;
}

#undef DAT_10005a03
#undef UNK_400108a4
#undef uRam00000000400108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef UNK_400108a4
#define UNK_400108a4 (*(uint *)(0x400108a4U))
#undef uRam00000000400108a4
#define uRam00000000400108a4 (*(uint *)(0x400108a4U))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f9c
 */

void recovered_10003f9c(long param_1,uint *param_2)

{
  unsigned char frame[168] = {0};

  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  bool bVar17;
  uint uVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;

  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) ||
      (puVar19 = *(undefined1 **)(param_2 + 2), puVar19 == (undefined1 *)0x0)) ||
     (((int)*param_2 < 1 || ((int)param_2[1] < 1)))) {
    return;
  }
  recovered_10004004((long *)(param_1 + 0x40),puVar19,
                     puVar19 + (ulong)*param_2 * (ulong)param_2[1] * 4);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_2;
  if ((param_1 != 0) && (iVar25 = *(int *)(param_1 + 0x18), iVar25 != 0)) {
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar10 = *(int *)(param_1 + 0x20);
    iVar5 = iVar9;
    if (iVar9 < 2) {
      iVar5 = 1;
    }
    iVar6 = iVar10;
    if (iVar10 < 2) {
      iVar6 = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pvStack_78 = (void *)0x0;
    if (((*(long *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x58))) &&
       (0 < *(int *)(param_1 + 0x5c))) {
      uVar26 = (long)iVar9 * (long)iVar10 * 4;
      recovered_1000512c((long *)&pvStack_78,uVar26);
      for (uVar21 = 0; uVar21 < uVar26; uVar21 = uVar21 + 4) {
        *(undefined1 *)((long)pvStack_78 + uVar21) = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 1) = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 2) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 3) = 0xff;
      }
      iVar25 = *(int *)(param_1 + 0x58);
      iVar9 = *(int *)(param_1 + 0x5c);
      uVar7 = *(uint *)(param_1 + 0x1c);
      uVar8 = *(uint *)(param_1 + 0x20);
      uVar18 = 0;
      if ((long)iVar25 != 0) {
        uVar18 = (uint)(((long)iVar9 * (long)(int)uVar7) / (long)iVar25);
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      uVar22 = uVar7;
      if ((int)uVar8 < (int)uVar18) {
        uVar22 = 0;
        if ((long)iVar9 != 0) {
          uVar22 = (uint)(((long)(int)uVar8 * (long)iVar25) / (long)iVar9);
        }
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        uVar18 = uVar8;
      }
      lVar23 = (long)((int)(uVar7 - uVar22) / 2);
      uVar26 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
      lVar24 = (long)((int)(uVar8 - uVar18) / 2);
      for (uVar21 = 0; uVar21 != (uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar21 = uVar21 + 1
          ) {
        iVar25 = 0;
        iVar9 = 0;
        if (uVar18 != 0) {
          iVar9 = (*(int *)(param_1 + 0x5c) * (int)uVar21) / (int)uVar18;
        }
        iVar10 = *(int *)(param_1 + 0x5c) + -1;
        if (iVar9 <= iVar10) {
          iVar10 = iVar9;
        }
        lVar14 = lVar23;
        uVar15 = uVar26;
        iVar2 = 0;
        if (-1 < iVar9) {
          iVar2 = iVar10;
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          iVar9 = *(int *)(param_1 + 0x58);
          iVar10 = 0;
          if (uVar22 != 0) {
            iVar10 = (iVar9 * iVar25) / (int)uVar22;
          }
          iVar3 = iVar9 + -1;
          if (iVar10 <= iVar9 + -1) {
            iVar3 = iVar10;
          }
          iVar4 = 0;
          if (-1 < iVar10) {
            iVar4 = iVar3;
          }
          lVar1 = (long)iVar9 * (long)iVar2 + (long)iVar4;
          lVar20 = lVar14 + lVar24 * *(int *)(param_1 + 0x1c);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 1) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 1);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 2) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 2);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 3) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 3);
          iVar25 = iVar25 + 1;
          lVar14 = lVar14 + 1;
        }
        lVar24 = lVar24 + 1;
      }
      iVar25 = *(int *)(param_1 + 0x18);
    }
    pvVar16 = pvStack_78;
    puVar19 = &DAT_10005a03;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)param_1;
    }
    bVar11 = *(byte *)(param_1 + 0x2e);
    bVar12 = *(byte *)(param_1 + 0x2f);
    bVar13 = *(byte *)(param_1 + 0x30);
    bVar17 = recovered_100050b8(0xa4);
    uVar18 = (uint)bVar17;
    if (bVar17) {
      if (uRam00000000400108a4 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (*(code *)(ulong)uRam00000000400108a4)
                           (iVar25,puVar19,pvVar16,iVar5,iVar6,iVar5 << 2,
                            (uint)bVar11 << 0x10 | (uint)bVar12 << 8 | (uint)bVar13);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar18 != 0;
    uStack_70 = 0;
    recovered_10002e70(pvStack_78);
  }
  return;
}

#undef DAT_10005a03
#undef UNK_400108a4
#undef uRam00000000400108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004004
 */

void recovered_10004004(long *param_1,undefined1 *param_2,undefined1 *param_3)

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
      recovered_10005194(param_1,uVar4);
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


#undef DAT_100059c0
#define DAT_100059c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef DAT_100059d0
#define DAT_100059d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef DAT_4001087c
#define DAT_4001087c (*(uint8_t *)(0x4001087cU))
#undef DAT_40010880
#define DAT_40010880 (*(uint8_t *)(0x40010880U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef UNK_100059d8
#define UNK_100059d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_100059d0
#define _DAT_100059d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_4001087c
#define _DAT_4001087c (*(uint *)(0x4001087cU))
#undef _DAT_40010880
#define _DAT_40010880 (*(uint *)(0x40010880U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint *)(0x4001089cU))
#undef uRam00000000100059d8
#define uRam00000000100059d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#define uStack_98 (*(undefined8 *)(frame + 24))
#define iStack_5c (*(int *)(frame + 84))
#define uStack_58 (*(undefined8 *)(frame + 88))
#define local_a0 (*(undefined8 *)(frame + 16))
#define local_90 (*(undefined8 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 40))
#define local_80 (*(long (*)[4])(frame + 48))
#define local_50 (*(undefined4 *)(frame + 96))
#define uStack_60 (*(undefined8 *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004018
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004018(long param_1)

{
  unsigned char frame[208] = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;

  if (param_1 == 0) {
    return;
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  recovered_10003cec(param_1);
  bVar3 = recovered_100050b8(0x80);
  if (((!bVar3) || (_DAT_40010880 == 0)) ||
     (iVar4 = (*(code *)(ulong)_DAT_40010880)(&local_a0), iVar4 == 0)) goto LAB_100041f0;
  local_50 = 0;
  local_80[3] = 0;
  local_80[2] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  bVar3 = recovered_100050b8(0x7c);
  if (((bVar3) && (_DAT_4001087c != 0)) &&
     (iVar4 = (*(code *)(ulong)_DAT_4001087c)(local_80), iVar4 != 0)) {
    iVar4 = 0;
    bVar3 = true;
    if (local_80[0] == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = (uint)((ulong)local_80[1] >> 0x20);
      uVar9 = (uint)local_80[2];
      iVar10 = (int)((ulong)local_80[2] >> 0x20);
      uVar5 = CONCAT17(-((char)((PF_PART4(uStack_58, 4) == (int)((ulong)uRam00000000100059d8 >> 0x20)) *
                               -0x80) < '\0'),
                       CONCAT16(-((char)((iStack_5c == (int)uRam00000000100059d8) * -0x80) < '\0'),
                                CONCAT15(-((char)(((int)((ulong)local_80[3] >> 0x20) ==
                                                  (int)((ulong)_DAT_100059d0 >> 0x20)) * -0x80) <
                                          '\0'),CONCAT14(-((char)(~-((int)local_80[3] ==
                                                                    (int)_DAT_100059d0) << 7) < '\0'
                                                          ),CONCAT13(-((char)((iVar10 == 0) * -0x80)
                                                                      < '\0'),CONCAT12(-((char)((
                                                  uVar9 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((uVar8 == 0) * -0x80) < '\0'),
                                                           -((char)(((int)local_80[1] == 0) * -0x80)
                                                            < '\0')))))))) & DAT_100059c0;
      uVar7 = 0;
      if ((char)((char)uVar5 + (char)(uVar5 >> 8) + (char)(uVar5 >> 0x10) + (char)(uVar5 >> 0x18) +
                 (char)(uVar5 >> 0x20) + (char)(uVar5 >> 0x28) + (char)(uVar5 >> 0x30) +
                (char)(uVar5 >> 0x38)) == '\0' && uVar9 <= uVar8 >> 2) {
        bVar3 = false;
        uVar7 = uVar9;
        iVar4 = iVar10;
      }
    }
  }
  else {
    iVar4 = 0;
    uVar7 = 0;
    bVar3 = true;
  }
  iVar10 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28);
  if (((uint)local_a0 >> 1 & 1) == 0) {
LAB_10004170:
    if ((local_a0 & 1) == 0) {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar5 = recovered_10005254((uint)uStack_98,(uint)local_88,uVar7);
      uVar6 = recovered_10005254(PF_PART4(uStack_98, 4),PF_PART4(local_88, 4),iVar4);
      *(int *)(param_1 + 0x34) = ((int)uVar5 - iVar10) + -0xe;
      iVar4 = ((int)uVar6 - iVar2) + -0x26;
      goto LAB_100041b0;
    }
  }
  else {
    if ((int)local_90 == 0 && PF_PART4(local_90, 4) == 0) goto LAB_10004170;
    *(int *)(param_1 + 0x34) = (int)local_90 + *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38) + PF_PART4(local_90, 4);
LAB_100041b0:
    *(int *)(param_1 + 0x38) = iVar4;
  }
  bVar3 = (*(uint *)(param_1 + 0x84) & 6) == 2;
  bVar1 = 0;
  if (bVar3) {
    bVar1 = (byte)(PF_PART4(local_a0, 4) >> 1) & 1;
  }
  *(byte *)(param_1 + 0x3c) = bVar3 & (byte)(local_a0 >> 0x20);
  *(byte *)(param_1 + 0x3d) = bVar1;
  bVar1 = 0;
  if (bVar3) {
    bVar1 = (byte)(PF_PART4(local_a0, 4) >> 2) & 1;
  }
  *(byte *)(param_1 + 0x3e) = bVar1;
  recovered_10003f38(param_1);
LAB_100041f0:
  recovered_1000423c();
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    recovered_10003a14((undefined8 *)param_1);
  }
  bVar3 = recovered_100050b8(0x9c);
  if ((bVar3) && (_DAT_4001089c != 0)) {
    (*(code *)(ulong)_DAT_4001089c)();
  }
  return;
}

#undef DAT_100059c0
#undef DAT_100059d0
#undef DAT_4001087c
#undef DAT_40010880
#undef DAT_4001089c
#undef UNK_100059d8
#undef _DAT_100059d0
#undef _DAT_4001087c
#undef _DAT_40010880
#undef _DAT_4001089c
#undef uRam00000000100059d8
#undef uStack_98
#undef iStack_5c
#undef uStack_58
#undef local_a0
#undef local_90
#undef local_88
#undef local_80
#undef local_50
#undef uStack_60

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6804U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6805U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6806U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6807U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6808U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682dU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682eU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682fU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6830U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6831U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(byte *)(((uintptr_t)pf_module_state + 0x6832U)))
#undef DAT_1000c340
#define DAT_1000c340 (*(int *)(((uintptr_t)pf_module_state + 0x6a64U)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a6cU)))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x272cU)))
#undef _DAT_4001082c
#define _DAT_4001082c (*(uint *)(0x4001082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000423c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000423c(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;

  recovered_100046d8();
  lVar3 = DAT_1000c348;
  if (((DAT_1000c348 == 0) || (uVar6 = recovered_10003cec(DAT_1000c348), (int)uVar6 == 0)) ||
     ((*(uint *)(lVar3 + 0x84) & 6) != 2)) {
    return;
  }
switchD_100044bc_caseD_49:
  do {
    do {
      bVar4 = recovered_100050b8(0x2c);
      if (!bVar4) {
        return;
      }
      if (_DAT_4001082c == 0) {
        return;
      }
      uVar5 = (*(code *)(ulong)_DAT_4001082c)();
      if (uVar5 == 0) {
        return;
      }
      uVar1 = uVar5 >> 8 & 0xff;
      if ((uVar5 & 0xff) == 0) goto LAB_10004310;
    } while (DAT_1000c348 == 0);
    if (DAT_1000c340 == 2) {
      DAT_1000c340 = 0;
      switch((uintptr_t)(uVar5 & 0xff)) {
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
    else if (DAT_1000c340 == 1) {
      DAT_1000c340 = (uint)((uVar5 & 0xff) == 0x5b) << 1;
    }
    else if ((uVar5 & 0xff) == 0x1b) {
      DAT_1000c340 = 1;
    }
    else if ((uVar5 - 0x20 & 0xff) < 0x5f) {
      DAT_1000c10e = (byte)uVar5;
      bVar2 = DAT_1000c10e;
      if (0x19 < (uVar5 - 0x61 & 0xff)) {
        if (0x19 < (uVar5 - 0x41 & 0xff)) {
          if ((uVar5 - 0x30 & 0xff) < 10) {
            *(&PTR_DAT_10008008)[(ulong)(uVar5 - 0x30) & 0xff] = 1;
            goto switchD_10004438_caseD_5;
          }
          goto LAB_10004414;
        }
        bVar2 = DAT_1000c10e | 0x20;
      }
      recovered_100052a0((int)(char)bVar2);
    }
    else {
LAB_10004414:
      uVar5 = uVar5 & 0xff;
      switch((uintptr_t)(uVar5)) {
      case 3:
      case 4:
        *(undefined1 *)(DAT_1000c348 + 0x2c) = 1;
        break;
      case 5:
      case 6:
      case 7:
      case 9:
      case 0xb:
      case 0xc:
        break;
      case 8:
switchD_10004438_caseD_8:
        DAT_1000c10b = 1;
        break;
      case 10:
      case 0xd:
        DAT_1000c0e0 = 1;
        break;
      default:
        if (uVar5 == 0x20) {
          DAT_1000c10d = 1;
        }
        else if (uVar5 == 0x2d) {
          DAT_1000c109 = 1;
        }
        else if (uVar5 == 0x2e) {
          DAT_1000c10a = 1;
        }
        else if (uVar5 == 0x7f) goto switchD_10004438_caseD_8;
      }
    }
switchD_10004438_caseD_5:
  } while (DAT_1000c348 == 0);
  goto LAB_100044a4;
LAB_10004310:
  if (DAT_1000c348 == 0) goto switchD_100044bc_caseD_49;
  switch((uintptr_t)(uVar1)) {
  case 1:
switchD_100044bc_caseD_48:
    DAT_1000c0e1 = 1;
    goto switchD_100044bc_caseD_49;
  case 2:
switchD_100044bc_caseD_50:
    DAT_1000c0e2 = 1;
    goto switchD_100044bc_caseD_49;
  case 3:
switchD_100044bc_caseD_4d:
    DAT_1000c0e4 = 1;
    goto switchD_100044bc_caseD_49;
  case 4:
switchD_100044bc_caseD_4b:
    DAT_1000c0e3 = 1;
    goto switchD_100044bc_caseD_49;
  }
  if (uVar1 != 0x17) {
LAB_100044a4:
    switch((uintptr_t)(uVar1)) {
    case 0x48:
      goto switchD_100044bc_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_100044bc_caseD_49;
    case 0x4b:
      goto switchD_100044bc_caseD_4b;
    case 0x4d:
      goto switchD_100044bc_caseD_4d;
    case 0x50:
      goto switchD_100044bc_caseD_50;
    case 0x53:
      DAT_1000c10c = 1;
      goto switchD_100044bc_caseD_49;
    default:
      if (uVar1 != 1) {
        if (uVar1 == 0xe) {
          DAT_1000c10b = 1;
        }
        else if (uVar1 == 0x1c) {
          DAT_1000c0e0 = 1;
        }
        goto switchD_100044bc_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_1000c348 + 0x2c) = 1;
  goto switchD_100044bc_caseD_49;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e
#undef DAT_1000c340
#undef DAT_1000c348
#undef DAT_4001082c
#undef PTR_DAT_10008008
#undef _DAT_4001082c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004548
 */

byte recovered_10004548(long param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    recovered_10003cec(param_1);
    bVar1 = *(byte *)(param_1 + 0x2c);
  }
  return bVar1 & 1;
}


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef UNK_400108a4
#define UNK_400108a4 (*(uint *)(0x400108a4U))
#undef uRam00000000400108a4
#define uRam00000000400108a4 (*(uint *)(0x400108a4U))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000457c
 */

void recovered_1000457c(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[168] = {0};

  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  bool bVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2e) = param_2;
  *(undefined1 *)(param_1 + 0x2f) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  if ((param_1 != 0) && (iVar25 = *(int *)(param_1 + 0x18), iVar25 != 0)) {
    iVar10 = *(int *)(param_1 + 0x1c);
    iVar11 = *(int *)(param_1 + 0x20);
    iVar6 = iVar10;
    if (iVar10 < 2) {
      iVar6 = 1;
    }
    iVar7 = iVar11;
    if (iVar11 < 2) {
      iVar7 = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pvStack_78 = (void *)0x0;
    if (((*(long *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x58))) &&
       (0 < *(int *)(param_1 + 0x5c))) {
      uVar26 = (long)iVar10 * (long)iVar11 * 4;
      recovered_1000512c((long *)&pvStack_78,uVar26);
      for (uVar21 = 0; uVar21 < uVar26; uVar21 = uVar21 + 4) {
        *(undefined1 *)((long)pvStack_78 + uVar21) = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 1) = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 2) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((long)pvStack_78 + uVar21 + 3) = 0xff;
      }
      iVar25 = *(int *)(param_1 + 0x58);
      iVar10 = *(int *)(param_1 + 0x5c);
      uVar8 = *(uint *)(param_1 + 0x1c);
      uVar9 = *(uint *)(param_1 + 0x20);
      uVar19 = 0;
      if ((long)iVar25 != 0) {
        uVar19 = (uint)(((long)iVar10 * (long)(int)uVar8) / (long)iVar25);
      }
      if ((int)uVar19 < 2) {
        uVar19 = 1;
      }
      uVar22 = uVar8;
      if ((int)uVar9 < (int)uVar19) {
        uVar22 = 0;
        if ((long)iVar10 != 0) {
          uVar22 = (uint)(((long)(int)uVar9 * (long)iVar25) / (long)iVar10);
        }
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        uVar19 = uVar9;
      }
      lVar23 = (long)((int)(uVar8 - uVar22) / 2);
      uVar26 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
      lVar24 = (long)((int)(uVar9 - uVar19) / 2);
      for (uVar21 = 0; uVar21 != (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar21 = uVar21 + 1
          ) {
        iVar25 = 0;
        iVar10 = 0;
        if (uVar19 != 0) {
          iVar10 = (*(int *)(param_1 + 0x5c) * (int)uVar21) / (int)uVar19;
        }
        iVar11 = *(int *)(param_1 + 0x5c) + -1;
        if (iVar10 <= iVar11) {
          iVar11 = iVar10;
        }
        lVar15 = lVar23;
        uVar16 = uVar26;
        iVar2 = 0;
        if (-1 < iVar10) {
          iVar2 = iVar11;
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          iVar10 = *(int *)(param_1 + 0x58);
          iVar11 = 0;
          if (uVar22 != 0) {
            iVar11 = (iVar10 * iVar25) / (int)uVar22;
          }
          iVar3 = iVar10 + -1;
          if (iVar11 <= iVar10 + -1) {
            iVar3 = iVar11;
          }
          iVar4 = 0;
          if (-1 < iVar11) {
            iVar4 = iVar3;
          }
          lVar1 = (long)iVar10 * (long)iVar2 + (long)iVar4;
          lVar20 = lVar15 + lVar24 * *(int *)(param_1 + 0x1c);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 1) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 1);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 2) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 2);
          *(undefined1 *)((long)pvStack_78 + lVar20 * 4 + 3) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 3);
          iVar25 = iVar25 + 1;
          lVar15 = lVar15 + 1;
        }
        lVar24 = lVar24 + 1;
      }
      iVar25 = *(int *)(param_1 + 0x18);
    }
    pvVar17 = pvStack_78;
    puVar5 = &DAT_10005a03;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)param_1;
    }
    bVar12 = *(byte *)(param_1 + 0x2e);
    bVar13 = *(byte *)(param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 0x30);
    bVar18 = recovered_100050b8(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      if (uRam00000000400108a4 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uRam00000000400108a4)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar19 != 0;
    uStack_70 = 0;
    recovered_10002e70(pvStack_78);
  }
  return;
}

#undef DAT_10005a03
#undef UNK_400108a4
#undef uRam00000000400108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004594
 */

int * recovered_10004594(long param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  void *out;
  ulong uVar2;
  undefined1 *puVar3;
  ulong size;
  int iVar4;
  int iVar5;

  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_10002e3c(0x20);
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 < 1) {
      iVar4 = *(int *)(param_1 + 0x1c);
    }
    *piVar1 = iVar4;
    iVar5 = *(int *)(param_1 + 0x5c);
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x20);
    }
    piVar1[1] = iVar5;
    size = (long)iVar4 * (long)iVar5 * 4;
    out = recovered_10002e6c(size);
    *(void **)(piVar1 + 2) = out;
    if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x58) != iVar4)) ||
       (*(int *)(param_1 + 0x5c) != iVar5)) {
      puVar3 = (undefined1 *)((long)out + 3);
      for (uVar2 = 0; uVar2 < size; uVar2 = uVar2 + 4) {
        puVar3[-3] = *(undefined1 *)(param_1 + 0x2e);
        *(undefined2 *)(puVar3 + -2) = *(undefined2 *)(param_1 + 0x2f);
        *puVar3 = 0xff;
        puVar3 = puVar3 + 4;
      }
    }
    else {
      recovered_10000ce4(out,*(void **)(param_1 + 0x40),size);
    }
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  return piVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004680
 */

void recovered_10004680(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

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
      *param_2 = *(undefined4 *)(param_1 + 0x34);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b8
 */

byte recovered_100046b8(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x3c);
  }
  return bVar1 & 1;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6804U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6805U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6806U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6807U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6808U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6809U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680aU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680bU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680cU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680dU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680eU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680fU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6810U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6811U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6812U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6813U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6814U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6815U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6816U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6817U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6818U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6819U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681aU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681bU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681cU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681dU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681eU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681fU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6820U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6821U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6822U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6823U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6824U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6825U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6826U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6827U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6828U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6829U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682aU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682bU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682cU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682dU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682eU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682fU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6830U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6831U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6832U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d8
 */

void recovered_100046d8(void)

{
  unsigned char frame[64] = {0};

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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6804U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6805U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6806U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6807U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6808U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6809U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680aU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680bU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680cU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680dU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680eU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680fU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6810U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6811U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6812U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6813U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6814U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6815U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6816U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6817U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6818U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6819U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681aU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681bU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681cU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681dU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681eU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x681fU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6820U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6821U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6822U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6823U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6824U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6825U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6826U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6827U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6828U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6829U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682aU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682bU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682cU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682dU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682eU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682fU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6830U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6831U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6832U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004854
 */

void recovered_10004854(void)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10004858
 */

void recovered_10004858(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000485c
 */

void recovered_1000485c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004860
 */

undefined8 recovered_10004860(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004864
 */

void recovered_10004864(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004868
 */

undefined8 recovered_10004868(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10005a01
#define DAT_10005a01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x125U)))
#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef DAT_10005be7
#define DAT_10005be7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30bU)))
#undef DAT_10005bea
#define DAT_10005bea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30eU)))
#define apuStack_c0 (*(undefined1 * (*)[3])(frame + 40))
#define uStack_a0 (*(undefined8 *)(frame + 72))
#define pvStack_90 (*(void * *)(frame + 88))
#define uStack_68 (*(undefined8 *)(frame + 128))
#define local_d8 (*(char * *)(frame + 16))
#define local_d0 (*(ulong *)(frame + 24))
#define local_a8 (*(void * *)(frame + 64))
#define local_98 (*(undefined8 *)(frame + 80))
#define local_88 (*(long *)(frame + 96))
#define local_78 (*(long *)(frame + 112))
#define local_70 (*(ulong *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000486c
 */

void * recovered_1000486c(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[264] = {0};

  char *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  void *data;
  bool bVar5;
  bool bVar6;
  ulong extraout_x0;
  undefined8 uVar7;
  void *out;
  long lVar8;
  ulong uVar9;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  out = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    recovered_1000574c(&local_d8,(long)param_1);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    if (local_d0 == 0) {
      bVar5 = false;
    }
    else {
      pcVar1 = &DAT_10005a03;
      if (local_d8 != (char *)0x0) {
        pcVar1 = local_d8;
      }
      bVar5 = *pcVar1 == '/';
    }
    uVar9 = 0;
    do {
      if (local_d0 <= uVar9) break;
      recovered_100052c8(&local_d8,'/',uVar9);
      uVar2 = local_d0;
      if (extraout_x0 != 0xffffffffffffffff) {
        uVar2 = extraout_x0;
      }
      recovered_10005300(&pvStack_90,&local_d8,uVar9,uVar2 - uVar9);
      if ((local_88 != 0) && (bVar6 = recovered_10004bb8(&pvStack_90,&DAT_10005a01), bVar6)) {
        bVar6 = recovered_1000533c(&pvStack_90,&DAT_10005be7);
        if (bVar6) {
          if ((local_70 == 0) ||
             (bVar6 = recovered_10004bb8((undefined8 *)(local_78 + local_70 * 0x18 + -0x18),
                                         &DAT_10005be7), !bVar6)) {
            if (!bVar5) goto LAB_100049a8;
          }
          else {
            recovered_1000538c(&local_78);
          }
        }
        else {
LAB_100049a8:
          recovered_100054b0(&local_78,&pvStack_90);
        }
      }
      uVar9 = extraout_x0 + 1;
      recovered_10002e70(pvStack_90);
    } while (extraout_x0 != 0xffffffffffffffff);
    puVar3 = &DAT_10005bea;
    if (!bVar5) {
      puVar3 = &DAT_10005a03;
    }
    recovered_1000574c(&pvStack_90,(long)puVar3);
    lVar8 = 0;
    for (uVar9 = 0; uVar9 < local_70; uVar9 = uVar9 + 1) {
      if (uVar9 != 0 || bVar5) {
        recovered_100053c8((long *)&pvStack_90,0x2f);
      }
      recovered_1000542c((long *)&pvStack_90,(undefined8 *)(local_78 + lVar8));
      lVar8 = lVar8 + 0x18;
    }
    if (local_88 == 0) {
      puVar4 = &DAT_10005bea;
      if (!bVar5) {
        puVar4 = &DAT_10005a01;
      }
      recovered_1000574c(apuStack_c0,(long)puVar4);
    }
    else {
      recovered_10005214(apuStack_c0,&pvStack_90);
    }
    recovered_10002e70(pvStack_90);
    recovered_100056cc(&local_78);
    recovered_10002e70(local_d8);
    puVar3 = &DAT_10005a03;
    if (apuStack_c0[0] != (undefined1 *)0x0) {
      puVar3 = apuStack_c0[0];
    }
    uVar7 = recovered_10004b64(puVar3,&local_a8);
    if (((int)uVar7 != 0) ||
       ((bVar5 = recovered_10004bb8(apuStack_c0,param_1), bVar5 &&
        (uVar7 = recovered_10004b64(param_1,&local_a8), (int)uVar7 != 0)))) {
      data = local_a8;
      out = (void *)0x0;
      if ((((local_a8 != (void *)0x0) && ((int)uStack_a0 != 0)) && (PF_PART4(uStack_a0, 4) != 0)) &&
         ((int)local_98 != 0)) {
        out = recovered_10002e6c(uStack_a0 & 0xffffffff);
        recovered_10000ce4(out,data,uStack_a0 & 0xffffffff);
        recovered_10004bd0(data);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = PF_PART4(uStack_a0, 4);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)local_98;
        }
      }
    }
    else {
      out = (void *)0x0;
    }
    recovered_10002e70(apuStack_c0[0]);
  }
  return out;
}

#undef DAT_10005a01
#undef DAT_10005a03
#undef DAT_10005be7
#undef DAT_10005bea
#undef apuStack_c0
#undef uStack_a0
#undef pvStack_90
#undef uStack_68
#undef local_d8
#undef local_d0
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_70

#undef DAT_40010858
#define DAT_40010858 (*(uint8_t *)(0x40010858U))
#undef _DAT_40010858
#define _DAT_40010858 (*(uint *)(0x40010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004b64(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100050b8(0x58);
  if ((bVar1) && (_DAT_40010858 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010858)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010858
#undef _DAT_40010858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bb8
 */

bool recovered_10004bb8(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000533c(param_1,param_2);
  return !bVar1;
}


#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004bd0(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_100050b8(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(param_1);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

#undef UNK_40010868
#define UNK_40010868 (*(uint *)(0x40010868U))
#undef uRam0000000040010868
#define uRam0000000040010868 (*(uint *)(0x40010868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c10
 */

undefined8 recovered_10004c10(undefined4 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100050b8(0x68);
  if ((bVar1) && (uRam0000000040010868 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100186d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uRam0000000040010868)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef UNK_40010868
#undef uRam0000000040010868

#undef UNK_40010870
#define UNK_40010870 (*(uint *)(0x40010870U))
#undef uRam0000000040010870
#define uRam0000000040010870 (*(uint *)(0x40010870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c64
 */

void recovered_10004c64(undefined4 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_100050b8(0x70);
  if ((bVar1) && (uRam0000000040010870 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100186e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uRam0000000040010870)(param_1,param_2);
    return;
  }
  return;
}

#undef UNK_40010870
#undef uRam0000000040010870

#undef DAT_100059c8
#define DAT_100059c8 (*(double *)(((uintptr_t)pf_module_state + 0xecU)))
#undef UNK_40010874
#define UNK_40010874 (*(uint *)(0x40010874U))
#undef uRam0000000040010874
#define uRam0000000040010874 (*(uint *)(0x40010874U))
#define uStack_54 (*(undefined4 *)(frame + 36))
#define local_68 (*(void * *)(frame + 16))
#define local_58 (*(uint *)(frame + 32))
#define uStack_60 (*(uint *)(frame + 24))
#define uStack_5c (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb4
 */

undefined8 *
recovered_10004cb4(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  unsigned char frame[152] = {0};

  ulong size;
  void *data;
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  void *out;
  double dVar4;
  double dVar5;

  local_68 = (void *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    dVar4 = 1.0;
    if (param_1 <= 1.0) {
      dVar4 = param_1;
    }
    dVar5 = 0.0;
    if (0.0 <= param_1) {
      dVar5 = dVar4 * DAT_100059c8;
    }
    bVar1 = recovered_100050b8(0x74);
    if (((bVar1) && (uRam0000000040010874 != 0)) &&
       (iVar2 = (*(code *)(ulong)uRam0000000040010874)
                          (param_2,param_3,param_4,param_5,param_6,(int)dVar5,&local_68),
       data = local_68, iVar2 != 0)) {
      if (((local_68 != (void *)0x0) && (uStack_5c != 0)) && (local_58 != 0)) {
        size = (ulong)uStack_5c * (ulong)local_58 * 4;
        if (uStack_60 != 0) {
          size = (ulong)uStack_60;
        }
        puVar3 = recovered_10002e3c(0x20);
        *puVar3 = CONCAT44(local_58,uStack_5c);
        out = recovered_10002e6c(size);
        puVar3[1] = out;
        recovered_10000ce4(out,data,size);
        puVar3[3] = 0;
        puVar3[2] = 0;
        recovered_10004bd0(data);
        return puVar3;
      }
      if (local_68 != (void *)0x0) {
        recovered_10004bd0(local_68);
      }
    }
  }
  return (undefined8 *)0x0;
}

#undef DAT_100059c8
#undef UNK_40010874
#undef uRam0000000040010874
#undef uStack_54
#undef local_68
#undef local_58
#undef uStack_60
#undef uStack_5c

#undef UNK_40010878
#define UNK_40010878 (*(uint *)(0x40010878U))
#undef uRam0000000040010878
#define uRam0000000040010878 (*(uint *)(0x40010878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df8
 */

void recovered_10004df8(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_100050b8(0x78);
  if ((bVar1) && (uRam0000000040010878 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uRam0000000040010878)(param_1);
    return;
  }
  return;
}

#undef UNK_40010878
#undef uRam0000000040010878

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e38
 */

undefined8 * recovered_10004e38(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e70((void *)*param_1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define lStack_40 (*(long *)(frame + 32))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e60
 */

void recovered_10004e60(long *param_1,long param_2,ulong param_3)

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
  uVar2 = recovered_10004f6c(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10004fb8(param_1);
    }
    else {
      recovered_10004ff0(param_1,uVar1);
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
    recovered_10005068(&local_50,*param_1 + local_38,uVar1);
    data = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = data;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_10002e70(data);
  }
  return;
}

#undef local_50
#undef lStack_40
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f48
 */

long recovered_10004f48(long param_1)

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
 * Address: 0x10004f6c
 */

undefined8 recovered_10004f6c(long *param_1,long param_2,long *param_3)

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
 * Address: 0x10004fb8
 */

void recovered_10004fb8(long *param_1)

{
  unsigned char frame[64] = {0};

  long extraout_x0;

  if (*param_1 == 0) {
    recovered_1000509c(0);
    *param_1 = extraout_x0;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ff0
 */

void recovered_10004ff0(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_1000509c(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_x0 + param_1[1]) = 0;
    recovered_10002e70((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005068
 */

undefined8 * recovered_10005068(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10004e60(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000509c
 */

void recovered_1000509c(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002e3c(param_1 + 1);
  *puVar1 = 0;
  return;
}


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
 * Address: 0x100050b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100050b8(int param_1)

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
 * Address: 0x10005100
 */

undefined8 * recovered_10005100(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000512c
 */

void recovered_1000512c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10005194(param_1,param_2);
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
 * Address: 0x10005194
 */

void recovered_10005194(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005208(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005208
 */

void recovered_10005208(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c10(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return;
}


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005214
 */

undefined8 * recovered_10005214(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10005a03;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10004e60(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10005a03

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005254
 */

ulong recovered_10005254(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

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


#undef PTR_DAT_10008058
#define PTR_DAT_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x277cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052a0
 */

void recovered_100052a0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 - 0x61U < 0x1a) {
    *(&PTR_DAT_10008058)[(ulong)(param_1 - 0x61U) & 0xff] = 1;
  }
  return;
}

#undef PTR_DAT_10008058

#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#define local_20 (*(undefined1 * *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c8
 */

void recovered_100052c8(undefined8 *param_1,char param_2,ulong param_3)

{
  unsigned char frame[80] = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_10005a03;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_10005444((long *)&local_20,param_2,param_3);
  return;
}

#undef DAT_10005a03
#undef local_20
#undef uStack_18

#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005300
 */

void recovered_10005300(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] = {0};

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
  puVar3 = &DAT_10005a03;
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
  recovered_10004e60(param_1,(long)(puVar3 + uVar2),uVar1);
  return;
}

#undef DAT_10005a03

#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000533c
 */

bool recovered_1000533c(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10005a03;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10004f48((long)param_2);
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

#undef DAT_10005a03

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000538c
 */

void recovered_1000538c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004e38((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053c8
 */

void recovered_100053c8(long *param_1,undefined1 param_2)

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
    recovered_10004ff0(param_1,uVar1);
  }
  recovered_10004fb8(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10005a03
#define DAT_10005a03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000542c
 */

void recovered_1000542c(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_10005a03;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10004f6c(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10004ff0(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10004ff0(param_1,uVar4 + lVar7);
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

#undef DAT_10005a03
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005444
 */

ulong recovered_10005444(long *param_1,char param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10005478
 */

bool recovered_10005478(char *param_1,long param_2,char *param_3,long param_4)

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
 * Address: 0x100054b0
 */

long recovered_100054b0(long *param_1,undefined8 *param_2)

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
    recovered_10005524(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10005214((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005524
 */

void recovered_10005524(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_100055b8(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_100055cc((undefined8 *)(extraout_x0 + lVar1),(undefined8 *)(*param_1 + lVar1));
      recovered_10004e38((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x18;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b8
 */

void recovered_100055b8(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return;
  }
  size = param_1 * 0x18;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055cc
 */

void recovered_100055cc(undefined8 *param_1,undefined8 *param_2)

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


#define local_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e8
 */

long * recovered_100055e8(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10004f6c(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10004ff0(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10004ff0(param_1,uVar3 + lVar5);
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
 * Address: 0x100056cc
 */

long * recovered_100056cc(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100056f8(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f8
 */

void recovered_100056f8(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10004e38((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000574c
 */

undefined8 * recovered_1000574c(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10004f48(param_2);
  recovered_10004e60(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005790
 */

long recovered_10005790(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005194(param_1,uVar5);
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

