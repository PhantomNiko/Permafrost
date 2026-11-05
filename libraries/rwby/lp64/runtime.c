/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10020108
#define DAT_10020108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e20U)))
#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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

  DAT_10020108 = 0;
  uStack_48 = 0;
  DAT_10020110 = 0;
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
  if (DAT_10020110 == 0) {
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
  DAT_10020108 = 1;
  return;
}

#undef DAT_10020108
#undef DAT_10020110
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

#undef DAT_10020108
#define DAT_10020108 (*(byte *)(((uintptr_t)pf_module_state + 0x9e20U)))
#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
  if ((DAT_10020108 & 1) == 0) {
    DAT_10020110 = 0;
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
    if (DAT_10020110 == 0) {
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
    DAT_10020108 = 1;
  }
  return;
}

#undef DAT_10020108
#undef DAT_10020110
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

#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
  for (plVar2 = &DAT_10020110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_10020110

#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
  for (plVar2 = &DAT_10020110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_10020110

#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
  for (plVar2 = &DAT_10020110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_10020110

#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
  for (plVar2 = &DAT_10020110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_10020110

#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
    for (puVar2 = &DAT_10020110; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
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

#undef DAT_10020110

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


#define lStack_18 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b50
 */

long recovered_10000b50(ulong param_1,ulong param_2)

{
  unsigned char frame[72] = {0};


  lStack_18 = 0;
  recovered_10000af0(param_1,param_2,&lStack_18);
  return lStack_18;
}

#undef lStack_18

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
  lVar4 = recovered_10000af0(uVar1,uVar2,(long *)0x0);
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

  ulong uVar1;
  ulong uVar2;
  long lVar3;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = -param_1;
  if (-1 < param_1) {
    uVar1 = param_1;
  }
  uVar2 = -param_2;
  if (-1 < param_2) {
    uVar2 = param_2;
  }
  lStack_28 = 0;
  recovered_10000af0(uVar1,uVar2,&lStack_28);
  lVar3 = -lStack_28;
  if (-1 < param_1) {
    lVar3 = lStack_28;
  }
  return lVar3;
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
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000c54(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000c98(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
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


#undef DAT_10017860
#define DAT_10017860 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1578U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

undefined * recovered_10000fe8(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10017860;
}

#undef DAT_10017860

#undef PTR_DAT_10020000
#define PTR_DAT_10020000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9d18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ff4
 */

undefined ** recovered_10000ff4(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10020000;
}

#undef PTR_DAT_10020000

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


#undef DAT_100162e8
#define DAT_100162e8 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
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
    return (double)iVar1 * DAT_100162e8 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_100162e8

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


#undef DAT_100162f0
#define DAT_100162f0 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000128c
 */

double recovered_1000128c(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_100012e0(value);
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100162f0);
}

#undef DAT_100162f0

#undef DAT_100162f8
#define DAT_100162f8 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10016300
#define DAT_10016300 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10016308
#define DAT_10016308 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10016310
#define DAT_10016310 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012e0
 */

double recovered_100012e0(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_100162f8 < param_1; param_1 = param_1 + DAT_10016310) {
  }
  for (; param_1 < DAT_10016300; param_1 = param_1 + DAT_10016308) {
  }
  return param_1;
}

#undef DAT_100162f8
#undef DAT_10016300
#undef DAT_10016308
#undef DAT_10016310

#undef DAT_10016318
#define DAT_10016318 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001324
 */

double recovered_10001324(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012e0(value);
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10016318;
}

#undef DAT_10016318

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

float recovered_100013b4(int *in_x0,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001050((double)param_2,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013cc
 */

float recovered_100013cc(uint in_w0,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000101c((double)param_2,in_w0);
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
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
#define pdStack_78 (*(double * *)(frame + 36))
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
LAB_10044258:
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
        recovered_10001c10((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x15a6U));
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
        if (uVar5 != 0x58) goto LAB_10044258;
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
#undef local_88
#undef local_80
#undef pdStack_78

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


#undef DAT_10017865
#define DAT_10017865 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

void recovered_10001c10(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = &DAT_10017865;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001bd4(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_10017865

#undef str_1001786c
#define str_1001786c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1584U)))
#undef str_1001787d
#define str_1001787d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1595U)))
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

  pcVar1 = str_1001786c;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_1001787d;
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

#undef str_1001786c
#undef str_1001787d
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

#undef DAT_10020110
#define DAT_10020110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e28U)))
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
      puVar3 = (ulong *)&DAT_10020110;
      if (DAT_10020110 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_10020110

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x08U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)((PF_MODULE_WMAP_BASE+0x08U)))
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

#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
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
        if (DAT_10020120 != 0) {
          DAT_10020120 = DAT_10020120 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_10020120 - 0x1ffU < 0xfffffffffffffdff || DAT_10020120 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_10020128 + DAT_10020120;
          DAT_10020120 = DAT_10020120 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10020120
#undef DAT_10020128

#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x40U)))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)((PF_MODULE_WMAP_BASE+0x40U)))
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

  if ((DAT_10020120 != 0) || (param_1 != 0)) {
    if (DAT_10020120 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000ce4(local_230,&DAT_10020128,DAT_10020120);
      uVar2 = DAT_10020120;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002cb0(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_10020120 = 0;
  }
  return;
}

#undef DAT_10020120
#undef DAT_10020128
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x40U)))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)((PF_MODULE_WMAP_BASE+0x40U)))
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

  if (DAT_10020120 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000ce4(auStack_230,&DAT_10020128,DAT_10020120);
    uVar2 = DAT_10020120;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002cb0(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_10020120 = 0;
  return;
}

#undef DAT_10020120
#undef DAT_10020128
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x40U)))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)((PF_MODULE_WMAP_BASE+0x40U)))
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

  if (DAT_10020120 != 0) {
    if (DAT_10020120 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000ce4(auStack_230,&DAT_10020128,DAT_10020120);
      uVar2 = DAT_10020120;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002cb0(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_10020120 = 0;
  }
  return;
}

#undef DAT_10020120
#undef DAT_10020128
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_10017891
#define DAT_10017891 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15a9U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000200c
 */

void recovered_1000200c(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_10017891;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001d00(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001eb8(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10017891
#undef acStack_160

#undef DAT_1001797b
#define DAT_1001797b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1693U)))
#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
#undef str_10017894
#define str_10017894 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15acU)))
#undef str_100178b7
#define str_100178b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15cfU)))
#undef str_100178f0
#define str_100178f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1608U)))
#undef str_10017925
#define str_10017925 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163dU)))
#undef str_1001794b
#define str_1001794b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1663U)))
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

  recovered_100020c4(str_10017894);
  recovered_100020c4(str_100178b7);
  recovered_100020c4(str_100178f0);
  recovered_100020c4(str_10017925);
  recovered_100020c4(str_1001794b);
  pcVar4 = &DAT_1001797b;
  for (uVar3 = recovered_10000e58(&DAT_1001797b); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10020120 != 0) {
        DAT_10020120 = DAT_10020120 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f70(1);
      }
      else {
        if (DAT_10020120 - 0x1ffU < 0xfffffffffffffdff || DAT_10020120 == -2) {
          recovered_10001f70(0);
        }
        pcVar1 = &DAT_10020128 + DAT_10020120;
        DAT_10020120 = DAT_10020120 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1001797b
#undef DAT_10020120
#undef DAT_10020128
#undef str_10017894
#undef str_100178b7
#undef str_100178f0
#undef str_10017925
#undef str_1001794b

#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
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
        if (DAT_10020120 != 0) {
          DAT_10020120 = DAT_10020120 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_10020120 - 0x1ffU < 0xfffffffffffffdff || DAT_10020120 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_10020128 + DAT_10020120;
          DAT_10020120 = DAT_10020120 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10020120
#undef DAT_10020128

#undef DAT_1001797b
#define DAT_1001797b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1693U)))
#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
#undef str_1001797e
#define str_1001797e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1696U)))
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

  recovered_100020c4(str_1001797e);
  pcVar4 = &DAT_1001797b;
  for (uVar3 = recovered_10000e58(&DAT_1001797b); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10020120 != 0) {
        DAT_10020120 = DAT_10020120 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f70(1);
      }
      else {
        if (DAT_10020120 - 0x1ffU < 0xfffffffffffffdff || DAT_10020120 == -2) {
          recovered_10001f70(0);
        }
        pcVar1 = &DAT_10020128 + DAT_10020120;
        DAT_10020120 = DAT_10020120 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1001797b
#undef DAT_10020120
#undef DAT_10020128
#undef str_1001797e

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x44U)))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)((PF_MODULE_WMAP_BASE+0x44U)))
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


#undef DAT_10017891
#define DAT_10017891 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15a9U)))
#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
#undef str_10017a12
#define str_10017a12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172aU)))
#undef str_10017a1f
#define str_10017a1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1737U)))
#undef str_10017a2d
#define str_10017a2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1745U)))
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
    DAT_10020080 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000e7c(param_1,str_10017a12);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c(param_1,str_10017a1f);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c(param_1,str_10017a2d);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10020080 = 0xc;
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
        recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10017891);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100023d8(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10020080 = 2;
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
    DAT_10020080 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d54(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10017891);
  return puVar4;
}

#undef DAT_10017891
#undef DAT_10020080
#undef str_10017a12
#undef str_10017a1f
#undef str_10017a2d
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x34U)))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)((PF_MODULE_WMAP_BASE+0x34U)))
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

#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
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
        DAT_10020080 = 0xc;
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

#undef DAT_10020080

#undef DAT_10017891
#define DAT_10017891 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15a9U)))
#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
#undef str_10017a12
#define str_10017a12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172aU)))
#undef str_10017a1f
#define str_10017a1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1737U)))
#undef str_10017a2d
#define str_10017a2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1745U)))
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
    DAT_10020080 = 0x16;
    return;
  }
  iVar2 = recovered_10000e7c(param_1,str_10017a12);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c(param_1,str_10017a1f);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c(param_1,str_10017a2d);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10020080 = 0xc;
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
        recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10017891);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100023d8(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10020080 = 2;
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
    DAT_10020080 = 0xc;
    return;
  }
  recovered_10000d54(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_10017891);
  return;
}

#undef DAT_10017891
#undef DAT_10020080
#undef str_10017a12
#undef str_10017a1f
#undef str_10017a2d
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


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
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
      bVar2 = recovered_10002114((long)text,0x1fe,&DAT_10017864,0);
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

#undef DAT_10017864

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


#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027cc
 */

undefined8 recovered_100027cc(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10020080 = 0x16;
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
  DAT_10020080 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10020080

#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

undefined8 recovered_10002860(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_10020080 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10020080

#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
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
        DAT_10020080 = 5;
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

#undef DAT_10020080

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


#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002948
 */

undefined8 recovered_10002948(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10020080 = 0x16;
  }
  else {
    uVar1 = recovered_10002980(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10020080 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10020080

#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x3cU)))
#undef _DAT_4001083c
#define _DAT_4001083c (*(uint *)((PF_MODULE_WMAP_BASE+0x3cU)))
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

#undef DAT_10020080
#define DAT_10020080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d98U)))
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
    DAT_10020080 = 0x16;
  }
  else {
    recovered_10000d54(&uStack_2c,0,0xc);
    uVar1 = recovered_100023d8(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10020080 = 2;
    }
    else {
      uVar1 = recovered_10002a60(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002980(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_10020080 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_10020080
#undef uStack_28
#undef uStack_2c

#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x38U)))
#undef _DAT_40010838
#define _DAT_40010838 (*(uint *)((PF_MODULE_WMAP_BASE+0x38U)))
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


#undef DAT_100179a1
#define DAT_100179a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16b9U)))
#undef str_100179a4
#define str_100179a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16bcU)))
#undef str_100179b1
#define str_100179b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16c9U)))
#undef str_100179bb
#define str_100179bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16d3U)))
#undef str_100179cf
#define str_100179cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16e7U)))
#undef str_100179dd
#define str_100179dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16f5U)))
#undef str_100179ef
#define str_100179ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1707U)))
#undef str_100179fb
#define str_100179fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1713U)))
#undef str_10017a0c
#define str_10017a0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1724U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf4
 */

char * recovered_10002bf4(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_100179a1;
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
    return str_100179a4;
  case 5:
    return str_100179b1;
  case 9:
    return str_100179bb;
  case 0xc:
    return str_100179cf;
  case 0xd:
    return str_100179dd;
  default:
    if (param_1 == 0x11) {
      return str_100179ef;
    }
    if (param_1 == 0x16) {
      return str_100179fb;
    }
switchD_10002c20_caseD_1:
    return str_10017a0c;
  }
}

#undef DAT_100179a1
#undef str_100179a4
#undef str_100179b1
#undef str_100179bb
#undef str_100179cf
#undef str_100179dd
#undef str_100179ef
#undef str_100179fb
#undef str_10017a0c

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


#undef DAT_10020118
#define DAT_10020118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9c
 */

void recovered_10002c9c(void)

{
  unsigned char frame[64] = {0};

  DAT_10020118 = DAT_10020118 + 1;
  return;
}

#undef DAT_10020118

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x08U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)((PF_MODULE_WMAP_BASE+0x08U)))
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

ulonglong recovered_10002d7c(long param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

                    /* WARNING: Could not recover jumptable at 0x10002d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x48))();
  return uVar1;
}


#if defined(__aarch64__)
/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked, returns_twice)) unsigned long recovered_10002d90(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}
#else
/* System V nonlocal-jump register context; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) unsigned long recovered_10002d90(unsigned long *context){__asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq");}
#endif



#if defined(__aarch64__)
/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002dbc(unsigned long *context,int value)
{
 __asm__ volatile("cmp w1,#0\ncsinc w1,w1,wzr,ne\nldp x19,x20,[x0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nmov w0,w1\nret");
}
#else
/* System V nonlocal-jump register context; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002dbc(unsigned long *context,int value){__asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\njmpq *56(%rdi)");}
#endif



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


#undef DAT_10020328
#define DAT_10020328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa040U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e1c
 */

void recovered_10002e1c(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = DAT_10020328;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10020328 = param_1;
  return;
}

#undef DAT_10020328

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
#define DAT_40010850 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x50U)))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)((PF_MODULE_WMAP_BASE+0x50U)))
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


#undef DAT_10020328
#define DAT_10020328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa040U)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x50U)))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)((PF_MODULE_WMAP_BASE+0x50U)))
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

  lVar2 = DAT_10020328;
  if (DAT_10020328 != 0) {
    puVar1 = (undefined8 *)(DAT_10020328 + 0x10);
    DAT_10020328 = *(long *)(DAT_10020328 + 0x10);
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

#undef DAT_10020328
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


#undef DAT_10020330
#define DAT_10020330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa048U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd4
 */

void recovered_10002fd4(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10020330;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003034;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100034cc((long)puVar2,(undefined8 *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_100030e0(param_1);
LAB_10003034:
                    /* WARNING: Subroutine does not return */
  recovered_10002df0();
}

#undef DAT_10020330
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10020328
#define DAT_10020328 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xa040U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003038
 */

void recovered_10003038(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10020328;
  if (DAT_10020328 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002df0();
  }
  *(undefined1 *)(DAT_10020328 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002fd4(puVar1);
}

#undef DAT_10020328

#undef DAT_10020330
#define DAT_10020330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xa048U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003068
 */

void recovered_10003068(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_10020330;
  DAT_10020330 = param_1;
  return;
}

#undef DAT_10020330

#undef DAT_10020330
#define DAT_10020330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa048U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

void recovered_1000307c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10020330;
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

#undef DAT_10020330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a8
 */

void recovered_100030a8(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

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


#undef DAT_10020330
#define DAT_10020330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xa048U)))
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
  long *plVar3;

  if (DAT_10020330 != (long *)0x0) {
    DAT_10020330 = (long *)*DAT_10020330;
  }
  puVar2 = (undefined8 *)recovered_100030e0(param_1);
  plVar3 = DAT_10020330;
  while( true ) {
    DAT_10020330 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002df0();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_100034cc((long)plVar3,(undefined8 *)*puVar2,(undefined2 *)&uStack_50);
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
  puVar2 = (undefined8 *)recovered_10002d7c((long)plVar3);
  recovered_100030c0(puVar2);
  return 0;
}

#undef DAT_10020330
#undef uStack_50
#undef uStack_48

#undef DAT_10020330
#define DAT_10020330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0xa048U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e0
 */

undefined8 recovered_100030e0(undefined8 *param_1)

{
  unsigned char frame[112] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;

  plVar3 = DAT_10020330;
  while( true ) {
    DAT_10020330 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002df0();
    }
    if (plVar3 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_100034cc((long)plVar3,(undefined8 *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar3[2] = (long)param_1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003174;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003174:
  puVar2 = (undefined8 *)recovered_10002d7c((long)plVar3);
  recovered_100030c0(puVar2);
  return 0;
}

#undef DAT_10020330
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000317c
 */

undefined8 recovered_1000317c(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

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

long recovered_1000319c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_100031dc(*(undefined8 **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


#undef DAT_100200d8
#define DAT_100200d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9df0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031dc
 */

bool recovered_100031dc(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (undefined8 *)0x0) {
LAB_10003260:
    bVar3 = true;
  }
  else {
    while ((puVar4 = param_1, bVar3 = puVar4 != (undefined8 *)0x0, puVar4 != param_2 &&
           (puVar4 != (undefined8 *)0x0))) {
      pcVar5 = (char *)puVar4[1];
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
      param_1 = (undefined8 *)0x0;
      if ((undefined *)*puVar4 == &DAT_100200d8) {
        param_1 = (undefined8 *)puVar4[2];
      }
    }
  }
  return bVar3;
}

#undef DAT_100200d8

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

#undef DAT_10016358
#define DAT_10016358 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034cc
 */

undefined8 recovered_100034cc(long param_1,undefined8 *param_2,undefined2 *param_3)

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
                local_68 = pbVar7 + *(long *)(&DAT_10016358 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_100036a4((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_100031dc(param_2,puVar6);
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

#undef DAT_10016358
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


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

void recovered_10003874(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;

  lVar4 = param_1[1];
  pcVar2 = &DAT_10017864;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar2 = (char *)*param_1;
  }
  if (pcVar2 != (char *)0x0) {
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      cVar3 = *pcVar2;
      if (cVar3 == '\b') {
        if (DAT_10020120 != 0) {
          DAT_10020120 = DAT_10020120 + -1;
        }
      }
      else if (cVar3 != '\r') {
        if (cVar3 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_10020120 - 0x1ffU < 0xfffffffffffffdff || DAT_10020120 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_10020128 + DAT_10020120;
          DAT_10020120 = DAT_10020120 + 1;
          *pcVar1 = cVar3;
        }
      }
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}

#undef DAT_10017864
#undef DAT_10020120
#undef DAT_10020128

#undef DAT_10020120
#define DAT_10020120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9e38U)))
#undef DAT_10020128
#define DAT_10020128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000388c
 */

void recovered_1000388c(long param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;

  if (param_1 == 0) {
    return;
  }
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  if (param_1 != 0) {
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_10020120 != 0) {
          DAT_10020120 = DAT_10020120 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_10020120 - 0x1ffU < 0xfffffffffffffdff || DAT_10020120 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_10020128 + DAT_10020120;
          DAT_10020120 = DAT_10020120 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10020120
#undef DAT_10020128

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038ac
 */

void recovered_100038ac(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b0
 */

void recovered_100038b0(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b4
 */

void recovered_100038b4(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038b8
 */

void recovered_100038b8(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038bc
 */

void recovered_100038bc(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 8) = (long)param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c0
 */

void recovered_100038c0(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 8) = (long)param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c4
 */

void recovered_100038c4(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c8
 */

void recovered_100038c8(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038cc
 */

void recovered_100038cc(void *object,double value)

{
  unsigned char frame[64] = {0};

  *(undefined1 *)object = 2;
  *(undefined8 *)((long)object + 0x20) = 2;
  *(double *)((long)object + 8) = value;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d0
 */

void recovered_100038d0(void *object,double value)

{
  unsigned char frame[64] = {0};

  *(undefined1 *)object = 2;
  *(undefined8 *)((long)object + 0x20) = 2;
  *(double *)((long)object + 8) = value;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d4
 */

void recovered_100038d4(undefined1 *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 3;
  *(undefined8 *)(param_1 + 0x20) = 3;
  param_1[8] = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d8
 */

void recovered_100038d8(undefined1 *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 3;
  *(undefined8 *)(param_1 + 0x20) = 3;
  param_1[8] = param_2;
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038dc
 */

undefined1 * recovered_100038dc(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[104] = {0};

  undefined1 *puVar1;

  *param_1 = 4;
  puVar1 = &DAT_10017864;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  recovered_100064b8((long *)apvStack_38,(long)puVar1);
  recovered_1000feac((long)(param_1 + 8),apvStack_38);
  recovered_10002e70(apvStack_38[0]);
  return param_1;
}

#undef DAT_10017864
#undef apvStack_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000392c
 */

undefined1 * recovered_1000392c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[104] = {0};

  undefined1 *puVar1;

  *param_1 = 4;
  puVar1 = &DAT_10017864;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  recovered_100064b8((long *)apvStack_38,(long)puVar1);
  recovered_1000feac((long)(param_1 + 8),apvStack_38);
  recovered_10002e70(apvStack_38[0]);
  return param_1;
}

#undef DAT_10017864
#undef apvStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

undefined1 * recovered_10003930(undefined1 *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1000feb8((long)(param_1 + 8),in_x1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003958
 */

undefined1 * recovered_10003958(undefined1 *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1000feb8((long)(param_1 + 8),in_x1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000395c
 */

undefined1 * recovered_1000395c(undefined1 *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1000feac((long)(param_1 + 8),in_x1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003980
 */

undefined1 * recovered_10003980(undefined1 *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1000feac((long)(param_1 + 8),in_x1);
  return param_1;
}


#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003984
 */

undefined1 * recovered_10003984(undefined1 *param_1,long *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 5;
  recovered_100039b8(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 5;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_1000ff58(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#undef PTR_recovered_1000ff20_1001c210
#define PTR_recovered_1000ff20_1001c210 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5f28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b8
 */

void recovered_100039b8(undefined8 *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  undefined8 *puVar2;

  plVar1 = recovered_10002e3c(0x18);
  recovered_1000bd14(plVar1,param_2);
  if (plVar1 == (long *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = recovered_10002e3c(0x20);
    puVar2[2] = 1;
    puVar2[1] = 1;
    *puVar2 = &PTR_recovered_1000ff20_1001c210;
    puVar2[3] = plVar1;
  }
  *param_1 = puVar2;
  param_1[1] = plVar1;
  return;
}

#undef PTR_recovered_1000ff20_1001c210

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a10
 */

undefined1 * recovered_10003a10(undefined1 *param_1,long *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 5;
  recovered_100039b8(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 5;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_1000ff58(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a14
 */

undefined1 * recovered_10003a14(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 5;
  recovered_10003a48(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 5;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_1000ff58(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#undef PTR_recovered_1000ff20_1001c210
#define PTR_recovered_1000ff20_1001c210 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5f28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a48
 */

void recovered_10003a48(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = recovered_10002e3c(0x18);
  recovered_1000d454(puVar1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = recovered_10002e3c(0x20);
    puVar2[2] = 1;
    puVar2[1] = 1;
    *puVar2 = &PTR_recovered_1000ff20_1001c210;
    puVar2[3] = puVar1;
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}

#undef PTR_recovered_1000ff20_1001c210

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a8c
 */

undefined1 * recovered_10003a8c(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 5;
  recovered_10003a48(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 5;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_1000ff58(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a90
 */

undefined1 * recovered_10003a90(undefined1 *param_1,long *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 6;
  recovered_10003ac4(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_10010174(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#undef PTR_recovered_1001013c_1001c250
#define PTR_recovered_1001013c_1001c250 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5f68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ac4
 */

void recovered_10003ac4(undefined8 *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  undefined8 *puVar2;

  plVar1 = recovered_10002e3c(0x50);
  recovered_1000ffc0(plVar1,param_2);
  if (plVar1 == (long *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = recovered_10002e3c(0x20);
    puVar2[2] = 1;
    puVar2[1] = 1;
    *puVar2 = &PTR_recovered_1001013c_1001c250;
    puVar2[3] = plVar1;
  }
  *param_1 = puVar2;
  param_1[1] = plVar1;
  return;
}

#undef PTR_recovered_1001013c_1001c250

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b1c
 */

undefined1 * recovered_10003b1c(undefined1 *param_1,long *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 6;
  recovered_10003ac4(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_10010174(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b20
 */

undefined1 * recovered_10003b20(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 6;
  recovered_10003b54(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_10010174(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#undef PTR_recovered_1001013c_1001c250
#define PTR_recovered_1001013c_1001c250 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5f68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b54
 */

void recovered_10003b54(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = recovered_10002e3c(0x50);
  recovered_100101dc(puVar1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = recovered_10002e3c(0x20);
    puVar2[2] = 1;
    puVar2[1] = 1;
    *puVar2 = &PTR_recovered_1001013c_1001c250;
    puVar2[3] = puVar1;
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}

#undef PTR_recovered_1001013c_1001c250

#define lStack_30 (*(long *)(frame + 16))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b98
 */

undefined1 * recovered_10003b98(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[96] = {0};


  *param_1 = 6;
  recovered_10003b54(&lStack_30,param_2);
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x10) = uStack_28;
  *(long *)(param_1 + 8) = lStack_30;
  lStack_30 = 0;
  uStack_28 = 0;
  recovered_10010174(&lStack_30);
  return param_1;
}

#undef lStack_30
#undef uStack_28

#define alStack_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b9c
 */

void recovered_10003b9c(undefined1 *param_1)

{
  unsigned char frame[104] = {0};


  alStack_38[1] = 0;
  alStack_38[2] = 0;
  alStack_38[0] = 0;
  recovered_10003a14(param_1,alStack_38);
  recovered_10010238(alStack_38);
  return;
}

#undef alStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bdc
 */

long * recovered_10003bdc(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10010264(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


#define local_70 (*(undefined8 *)(frame + 16))
#define local_60 (*(undefined8 *)(frame + 32))
#define local_40 (*(undefined8 *)(frame + 64))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define uStack_58 (*(undefined8 *)(frame + 40))
#define uStack_50 (*(undefined8 *)(frame + 48))
#define uStack_48 (*(undefined8 *)(frame + 56))
#define uStack_38 (*(undefined8 *)(frame + 72))
#define uStack_30 (*(undefined8 *)(frame + 80))
#define uStack_28 (*(undefined8 *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003be0
 */

void recovered_10003be0(undefined1 *param_1)

{
  unsigned char frame[160] = {0};


  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  recovered_10003b20(param_1,&local_70);
  recovered_10006990((long)&local_70);
  return;
}

#undef local_70
#undef local_60
#undef local_40
#undef uStack_68
#undef uStack_58
#undef uStack_50
#undef uStack_48
#undef uStack_38
#undef uStack_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c34
 */

byte recovered_10003c34(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  byte bVar2;

  bVar2 = 0;
  if (*param_1 != '\0') {
    if (*param_1 == '\x03') {
      if (*(long *)(param_1 + 0x20) != 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10003c6c);
        (*pcVar1)();
      }
      bVar2 = param_1[8];
    }
    else {
      bVar2 = 1;
    }
  }
  return bVar2 & 1;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10017a3b
#define DAT_10017a3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1753U)))
#undef DAT_10017a3f
#define DAT_10017a3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1757U)))
#undef str_10017a44
#define str_10017a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175cU)))
#define pvStack_68 (*(void * *)(frame + 16))
#define uStack_60 (*(undefined8 *)(frame + 24))
#define uStack_58 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c6c
 */

long * recovered_10003c6c(long *param_1,undefined1 *param_2)

{
  unsigned char frame[152] = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x30;
  uint128 auVar9;

  switch((uintptr_t)(*param_2)) {
  default:
    pcVar5 = &DAT_10017a3b;
    goto LAB_10003d24;
  case 1:
    if (*(long *)(param_2 + 0x20) == 1) {
      auVar9 = recovered_100069c0((byte *)((long)pf_current_sp() + -0x40),
                                  (byte *)((long)pf_current_sp() + -0x20),*(ulong *)(param_2 + 8)
                                  ,10);
      plVar6 = PF_PART8(auVar9, 0);
      if (PF_PART4(auVar9, 8) == 0) {
        plVar6 = recovered_10006704(param_1,(long)pf_current_sp() + -0x40,
                                    (long)plVar6 - ((long)pf_current_sp() + -0x40));
      }
      else {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      return plVar6;
    }
    break;
  case 2:
    uStack_60 = 0;
    uStack_58 = 0;
    pvStack_68 = (void *)0x0;
    if (*(long *)(param_2 + 0x20) == 2) {
      recovered_10003f80(*(double *)(param_2 + 8),(long *)&pvStack_68);
      recovered_10006dc0(param_1,&pvStack_68);
LAB_10003d74:
      recovered_10002e70(pvStack_68);
      return unaff_x30;
    }
    break;
  case 3:
    if (*(long *)(param_2 + 0x20) != 3) break;
    pcVar5 = &DAT_10017a3f;
    if (param_2[8] == '\0') {
      pcVar5 = str_10017a44;
    }
LAB_10003d24:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar4 = recovered_100065e4((long)pcVar5);
    recovered_100064fc(param_1,(long)pcVar5,uVar4);
    return param_1;
  case 4:
    if (*(long *)(param_2 + 0x20) == 4) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      puVar1 = &DAT_10017864;
      if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(param_2 + 8);
      }
      recovered_100064fc(param_1,(long)puVar1,*(ulong *)(param_2 + 0x10));
      return param_1;
    }
    break;
  case 5:
    if (*(long *)(param_2 + 0x20) == 5) {
      plVar6 = *(long **)(param_2 + 0x10);
      recovered_100064b8(param_1,((uintptr_t)pf_module_state+0x1762U));
      lVar8 = 0;
      for (uVar4 = 1; uVar4 - 1 < (ulong)plVar6[1]; uVar4 = uVar4 + 1) {
        recovered_10003c6c((long *)&pvStack_68,(undefined1 *)(*plVar6 + lVar8));
        recovered_10003fd8(param_1,&pvStack_68);
        recovered_10002e70(pvStack_68);
        if (uVar4 < (ulong)plVar6[1]) {
          recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x1764U));
        }
        lVar8 = lVar8 + 0x28;
      }
      recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x1767U));
      return unaff_x30;
    }
    break;
  case 6:
    if (*(long *)(param_2 + 0x20) == 6) {
      puVar7 = *(undefined8 **)(param_2 + 0x10);
      recovered_100064b8(param_1,((uintptr_t)pf_module_state+0x1769U));
      puVar2 = (undefined8 *)*puVar7;
      uVar4 = 1;
      for (lVar8 = puVar7[1] << 6; lVar8 != 0; lVar8 = lVar8 + -0x40) {
        recovered_10003fd8(param_1,puVar2);
        recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x176bU));
        recovered_10003c6c((long *)&pvStack_68,(undefined1 *)(puVar2 + 3));
        recovered_10003fd8(param_1,&pvStack_68);
        recovered_10002e70(pvStack_68);
        if (uVar4 < (ulong)puVar7[1]) {
          recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x1764U));
        }
        puVar2 = puVar2 + 8;
        uVar4 = uVar4 + 1;
      }
      recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x176eU));
      return unaff_x30;
    }
    break;
  case 7:
    if (*(long *)(param_2 + 0x20) == 7) {
      recovered_1000403c((long *)&pvStack_68,((uintptr_t)pf_module_state+0x1770U),
                         (undefined8 *)(*(long *)(param_2 + 0x10) + 0x20));
      recovered_10003ff0(param_1,&pvStack_68,((uintptr_t)pf_module_state+0x1767U));
      goto LAB_10003d74;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10003ee4);
  (*pcVar3)();
}

#undef DAT_10017864
#undef DAT_10017a3b
#undef DAT_10017a3f
#undef str_10017a44
#undef pvStack_68
#undef uStack_60
#undef uStack_58

#define abStack_40 (*(byte (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f24
 */

void recovered_10003f24(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] = {0};

  uint128 auVar1;

  auVar1 = recovered_100069c0(abStack_40,abStack_40 + 0x20,param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10006704(param_1,(long)abStack_40,PF_PART8(auVar1, 0) - (long)abStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef abStack_40

#define local_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f80
 */

long * recovered_10003f80(double param_1,long *param_2)

{
  unsigned char frame[104] = {0};


  recovered_10006a8c((long *)local_38,param_1);
  recovered_10003fd8(param_2,local_38);
  recovered_10002e70(local_38[0]);
  return param_2;
}

#undef local_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd8
 */

void recovered_10003fd8(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_10017864;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10006608(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_1000668c(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_1000668c(param_1,uVar4 + lVar7);
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

#undef DAT_10017864
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ff0
 */

void recovered_10003ff0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  recovered_10006dc0(param_1,param_2);
  recovered_10006ee4(param_1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000403c
 */

void recovered_1000403c(long *param_1,long param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  recovered_100064b8(param_1,param_2);
  recovered_10003fd8(param_1,param_3);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004088
 */

ulong recovered_10004088(char *param_1)

{
  unsigned char frame[64] = {0};

  char cVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;

  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    if (*(long *)(param_1 + 0x20) != 3) goto LAB_100040e8;
    uVar3 = (ulong)(byte)param_1[8];
  }
  else if (cVar1 == '\x02') {
    if (*(long *)(param_1 + 0x20) != 2) goto LAB_100040e8;
    uVar3 = (ulong)*(double *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\x01') {
      puVar4 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x177bU));
      recovered_10002fb4((long)puVar4,&LAB_1001c050,recovered_10004120);
      recovered_10002f44((long)puVar4);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    if (*(long *)(param_1 + 0x20) != 1) {
LAB_100040e8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100040ec);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + 8);
  }
  return uVar3;
}

#undef LAB_1001c050

#undef PTR_recovered_10004120_1001c078
#define PTR_recovered_10004120_1001c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000411c
 */

undefined8 * recovered_1000411c(undefined8 *param_1,long in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_10004120_1001c078;
  recovered_100064b8(param_1 + 1,in_x1);
  return param_1;
}

#undef PTR_recovered_10004120_1001c078

#undef PTR_recovered_10004120_1001c078
#define PTR_recovered_10004120_1001c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

undefined8 * recovered_10004120(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_10004120_1001c078;
  recovered_10006754(param_1 + 1);
  return param_1;
}

#undef PTR_recovered_10004120_1001c078

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004124
 */

double recovered_10004124(void *object)

{
  unsigned char frame[64] = {0};

  char cVar1;
  code *pcVar2;
  undefined8 *puVar3;
  double dVar4;

  cVar1 = *(char *)object;
  if (cVar1 == '\x03') {
    if (*(long *)((long)object + 0x20) != 3) goto LAB_10004198;
    dVar4 = 1.0;
    if (*(char *)((long)object + 8) == '\0') {
      dVar4 = 0.0;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(long *)((long)object + 0x20) != 2) goto LAB_10004198;
    dVar4 = *(double *)((long)object + 8);
  }
  else {
    if (cVar1 != '\x01') {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x177bU));
      recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
      recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    if (*(long *)((long)object + 0x20) != 1) {
LAB_10004198:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000419c);
      (*pcVar2)();
    }
    dVar4 = (double)*(long *)((long)object + 8);
  }
  return dVar4;
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041cc
 */

char recovered_100041cc(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*param_1 == '\x03') {
    if (*(long *)(param_1 + 0x20) == 3) {
      return param_1[8];
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x1790U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004224);
  (*pcVar1)();
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000422c
 */

char * recovered_1000422c(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*param_1 == '\x04') {
    if (*(long *)(param_1 + 0x20) == 4) {
      return param_1 + 8;
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x17a5U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004284);
  (*pcVar1)();
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000428c
 */

undefined8 recovered_1000428c(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*param_1 == '\x05') {
    if (*(long *)(param_1 + 0x20) == 5) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x17bbU));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100042e4);
  (*pcVar1)();
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042ec
 */

undefined8 recovered_100042ec(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*param_1 == '\x05') {
    if (*(long *)(param_1 + 0x20) == 5) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x17bbU));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004344);
  (*pcVar1)();
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000434c
 */

undefined8 recovered_1000434c(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*param_1 == '\x06') {
    if (*(long *)(param_1 + 0x20) == 6) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x17d1U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100043a4);
  (*pcVar1)();
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043ac
 */

undefined8 recovered_100043ac(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*param_1 == '\x06') {
    if (*(long *)(param_1 + 0x20) == 6) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x17d1U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004404);
  (*pcVar1)();
}

#undef LAB_1001c050

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000440c
 */

long * recovered_1000440c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004438(param_1);
  *(long **)(*param_1 + 0xd0) = param_1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004438
 */

void recovered_10004438(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0xd8);
  recovered_100102b8(puVar1);
  *param_1 = puVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000447c
 */

long * recovered_1000447c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004438(param_1);
  *(long **)(*param_1 + 0xd0) = param_1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004480
 */

long * recovered_10004480(long *param_1)

{
  unsigned char frame[64] = {0};

  void *data;

  data = (void *)0x0;
  if (*param_1 != 0) {
    data = (void *)recovered_10015854(*param_1);
  }
  recovered_10002e70(data);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004484
 */

long * recovered_10004484(long *param_1)

{
  unsigned char frame[64] = {0};

  void *data;

  data = (void *)0x0;
  if (*param_1 != 0) {
    data = (void *)recovered_10015854(*param_1);
  }
  recovered_10002e70(data);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004488
 */

void recovered_10004488(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0xd0) = param_1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044a0
 */

void recovered_100044a0(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0xd0) = param_1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b8
 */

long * recovered_100044b8(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    recovered_100044ec(param_1,param_2);
    if (*param_1 != 0) {
      *(long **)(*param_1 + 0xd0) = param_1;
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044ec
 */

long * recovered_100044ec(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 != param_2) {
    lVar1 = *param_2;
    *param_2 = 0;
    recovered_1001588c(param_1,lVar1);
  }
  return param_1;
}


#define local_28 (*(long * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004528
 */

void recovered_10004528(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[88] = {0};

  long *plVar1;

  plVar1 = (long *)*param_1;
  local_28 = (long *)*param_3;
  *param_3 = 0;
  recovered_10004578(plVar1,param_2,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}

#undef local_28

#undef str_10017a0c
#define str_10017a0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1724U)))
#undef str_10017ad9
#define str_10017ad9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17f1U)))
#undef str_10017adf
#define str_10017adf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17f7U)))
#define local_70 (*(long * *)(frame + 16))
#define lStack_68 (*(long *)(frame + 24))
#define local_60 (*(undefined1 * *)(frame + 32))
#define local_58 (*(undefined1 (*)[8])(frame + 40))
#define local_38 (*(undefined8 *)(frame + 72))
#define alStack_50 (*(long (*)[3])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004578
 */

void recovered_10004578(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[160] = {0};

  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;

  local_38 = 0;
  local_58[0] = 7;
  local_70 = (long *)*param_3;
  *param_3 = 0;
  recovered_10007188(&lStack_68);
  *local_60 = 1;
  bVar1 = recovered_100071cc(param_2,str_10017a0c);
  if (bVar1) {
    uVar4 = 1;
  }
  else {
    bVar1 = recovered_100071cc(param_2,str_10017ad9);
    if (bVar1) {
      uVar4 = 2;
    }
    else {
      bVar1 = recovered_100071cc(param_2,str_10017adf);
      if (!bVar1) goto LAB_100045fc;
      uVar4 = 3;
    }
  }
  local_60[1] = uVar4;
LAB_100045fc:
  recovered_1000721c((long *)(local_60 + 0x18),(long *)&local_70);
  recovered_10007268((undefined8 *)(local_60 + 0x20),param_2);
  recovered_1000743c(alStack_50,&lStack_68);
  recovered_10006928(&lStack_68);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  uVar2 = recovered_10006fac((long)param_1,param_2);
  recovered_10007028((long)param_1,uVar2,local_58);
  puVar3 = (undefined1 *)recovered_100070a8(param_1,param_2);
  recovered_1000715c(puVar3,local_58);
  recovered_1000686c(alStack_50);
  return;
}

#undef str_10017a0c
#undef str_10017ad9
#undef str_10017adf
#undef local_70
#undef lStack_68
#undef local_60
#undef local_58
#undef local_38
#undef alStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f8
 */

void recovered_100046f8(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;

  plVar1 = (long *)*param_1;
  uVar2 = recovered_10006fac((long)plVar1,param_2);
  recovered_10007028((long)plVar1,uVar2,param_3);
  puVar3 = (undefined1 *)recovered_100070a8(plVar1,param_2);
  *puVar3 = *param_3;
  recovered_10008374((long *)(puVar3 + 8),(long *)(param_3 + 8));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004700
 */

void recovered_10004700(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined1 *puVar2;

  uVar1 = recovered_10006fac((long)param_1,param_2);
  recovered_10007028((long)param_1,uVar1,param_3);
  puVar2 = (undefined1 *)recovered_100070a8(param_1,param_2);
  *puVar2 = *param_3;
  recovered_10008374((long *)(puVar2 + 8),(long *)(param_3 + 8));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004750
 */

bool recovered_10004750(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;

  lVar1 = *param_1;
  uVar2 = recovered_100084d4(lVar1,param_2);
  puVar3 = (undefined1 *)recovered_10008514(lVar1,uVar2);
  if (puVar3 != (undefined1 *)0x0) {
    recovered_1000715c(param_3,puVar3);
  }
  return puVar3 != (undefined1 *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004758
 */

bool recovered_10004758(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined1 *puVar2;

  uVar1 = recovered_100084d4(param_1,param_2);
  puVar2 = (undefined1 *)recovered_10008514(param_1,uVar1);
  if (puVar2 != (undefined1 *)0x0) {
    recovered_1000715c(param_3,puVar2);
  }
  return puVar2 != (undefined1 *)0x0;
}


#undef DAT_10016558
#define DAT_10016558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10017a3b
#define DAT_10017a3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1753U)))
#undef DAT_10017a3f
#define DAT_10017a3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1757U)))
#undef DAT_10017afd
#define DAT_10017afd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1815U)))
#undef DAT_10017b00
#define DAT_10017b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1818U)))
#undef DAT_10017b02
#define DAT_10017b02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181aU)))
#undef DAT_10017b05
#define DAT_10017b05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181dU)))
#undef DAT_10017b07
#define DAT_10017b07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181fU)))
#undef DAT_10017b0a
#define DAT_10017b0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1822U)))
#undef DAT_10017b0c
#define DAT_10017b0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1824U)))
#undef DAT_10017b0f
#define DAT_10017b0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1827U)))
#undef DAT_10017b9b
#define DAT_10017b9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18b3U)))
#undef DAT_10017ba4
#define DAT_10017ba4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef DAT_10017ba9
#define DAT_10017ba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18c1U)))
#undef DAT_10017bb3
#define DAT_10017bb3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18cbU)))
#undef DAT_10017bbe
#define DAT_10017bbe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18d6U)))
#undef DAT_10017bc3
#define DAT_10017bc3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18dbU)))
#undef DAT_10017bc6
#define DAT_10017bc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18deU)))
#undef DAT_10017bca
#define DAT_10017bca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18e2U)))
#undef DAT_10017bcd
#define DAT_10017bcd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18e5U)))
#undef str_10017a44
#define str_10017a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175cU)))
#undef str_10017b9e
#define str_10017b9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18b6U)))
#undef str_10017bad
#define str_10017bad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18c5U)))
#undef str_10017bb7
#define str_10017bb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cfU)))
#define apvStack_2f0 (*(void * (*)[3])(frame + 480))
#define apvStack_308 (*(void * (*)[3])(frame + 456))
#define apvStack_2c0 (*(void * (*)[3])(frame + 528))
#define apvStack_2d8 (*(void * (*)[3])(frame + 504))
#define apvStack_290 (*(void * (*)[3])(frame + 576))
#define apvStack_2a8 (*(void * (*)[3])(frame + 552))
#define apvStack_260 (*(void * (*)[3])(frame + 624))
#define apvStack_278 (*(void * (*)[3])(frame + 600))
#define apvStack_230 (*(void * (*)[3])(frame + 672))
#define apvStack_248 (*(void * (*)[3])(frame + 648))
#define apvStack_200 (*(void * (*)[3])(frame + 720))
#define apvStack_218 (*(void * (*)[3])(frame + 696))
#define alStack_1d0 (*(long (*)[3])(frame + 768))
#define apvStack_1e8 (*(void * (*)[3])(frame + 744))
#define uStack_1a0 (*(undefined8 *)(frame + 816))
#define apvStack_1b8 (*(void * (*)[3])(frame + 792))
#define uStack_190 (*(undefined8 *)(frame + 832))
#define pvStack_198 (*(void * *)(frame + 824))
#define lStack_180 (*(long *)(frame + 848))
#define lStack_188 (*(long *)(frame + 840))
#define puStack_170 (*(undefined8 * *)(frame + 864))
#define uStack_178 (*(undefined8 *)(frame + 856))
#define uStack_160 (*(undefined8 *)(frame + 880))
#define uStack_168 (*(ulong *)(frame + 872))
#define uStack_150 (*(undefined8 *)(frame + 896))
#define uStack_158 (*(undefined8 *)(frame + 888))
#define auStack_140 (*(undefined1 (*)[136])(frame + 912))
#define uStack_148 (*(undefined8 *)(frame + 904))
#define uStack_b0 (*(undefined8 *)(frame + 1056))
#define uStack_b8 (*(undefined8 *)(frame + 1048))
#define uStack_a0 (*(undefined8 *)(frame + 1072))
#define uStack_a8 (*(undefined8 *)(frame + 1064))
#define uStack_90 (*(undefined8 *)(frame + 1088))
#define uStack_98 (*(undefined8 *)(frame + 1080))
#define pvStack_80 (*(void * *)(frame + 1104))
#define uStack_88 (*(undefined8 *)(frame + 1096))
#define uStack_70 (*(undefined8 *)(frame + 1120))
#define uStack_78 (*(undefined8 *)(frame + 1112))
#define pvStack_4c0 (*(void * *)(frame + 16))
#define uStack_4b0 (*(undefined8 *)(frame + 32))
#define uStack_4b8 (*(undefined8 *)(frame + 24))
#define uStack_4a0 (*(undefined8 *)(frame + 48))
#define lStack_4a8 (*(long *)(frame + 40))
#define lStack_490 (*(long *)(frame + 64))
#define uStack_498 (*(undefined8 *)(frame + 56))
#define uStack_480 (*(undefined8 *)(frame + 80))
#define uStack_488 (*(undefined8 *)(frame + 72))
#define uStack_470 (*(undefined8 *)(frame + 96))
#define pvStack_478 (*(void * *)(frame + 88))
#define lStack_460 (*(long *)(frame + 112))
#define uStack_468 (*(undefined8 *)(frame + 104))
#define lStack_440 (*(long *)(frame + 144))
#define alStack_458 (*(long (*)[3])(frame + 120))
#define uStack_430 (*(undefined8 *)(frame + 160))
#define uStack_438 (*(undefined8 *)(frame + 152))
#define uStack_420 (*(ulong *)(frame + 176))
#define plStack_428 (*(long * *)(frame + 168))
#define uStack_410 (*(undefined8 *)(frame + 192))
#define lStack_418 (*(long *)(frame + 184))
#define uStack_400 (*(undefined8 *)(frame + 208))
#define uStack_408 (*(undefined8 *)(frame + 200))
#define uStack_3f0 (*(ulong *)(frame + 224))
#define puStack_3f8 (*(undefined1 * *)(frame + 216))
#define puStack_3e0 (*(undefined1 * *)(frame + 240))
#define uStack_3e8 (*(undefined8 *)(frame + 232))
#define uStack_3d0 (*(undefined8 *)(frame + 256))
#define uStack_3d8 (*(ulong *)(frame + 248))
#define uStack_3c0 (*(undefined8 *)(frame + 272))
#define uStack_3c8 (*(undefined8 *)(frame + 264))
#define uStack_3b0 (*(ulong *)(frame + 288))
#define uStack_3b8 (*(undefined8 *)(frame + 280))
#define uStack_3a0 (*(undefined1 *)(frame + 304))
#define uStack_3a8 (*(undefined8 *)(frame + 296))
#define apvStack_380 (*(void * (*)[3])(frame + 336))
#define apvStack_398 (*(void * (*)[3])(frame + 312))
#define apvStack_350 (*(void * (*)[3])(frame + 384))
#define apvStack_368 (*(void * (*)[3])(frame + 360))
#define apvStack_320 (*(void * (*)[3])(frame + 432))
#define apvStack_338 (*(void * (*)[3])(frame + 408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047a4
 */

void recovered_100047a4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char frame[1264] = {0};

  undefined1 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  void *data;
  long *plVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  char cVar21;
  ulong uVar22;

  recovered_10006dc0(&puStack_3f8,param_3);
  recovered_10006dc0(&uStack_410,param_4);
  puStack_3e0 = puStack_3f8;
  uStack_3d0 = uStack_3e8;
  uStack_3d8 = uStack_3f0;
  puStack_3f8 = (undefined1 *)0x0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3c8 = uStack_410;
  uStack_3b8 = uStack_400;
  uStack_3c0 = uStack_408;
  uStack_410 = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0x100000001;
  uStack_3a0 = 0;
  recovered_10002e70((void *)0x0);
  recovered_10002e70(puStack_3f8);
  lStack_4a8 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uVar18 = uStack_3b0;
switchD_100048bc_caseD_9:
  uStack_3b0 = uVar18;
  if (uStack_3d8 <= uStack_3b0) goto LAB_100054d8;
  uVar9 = (int)uStack_3a8;
  uVar17 = uStack_3a8 & 0xffffffff;
  uVar10 = PF_PART4(uStack_3a8, 4);
  uVar22 = (ulong)PF_PART4(uStack_3a8, 4);
  uStack_3a0 = 0;
  uStack_3a8 = CONCAT44(PF_PART4(uStack_3a8, 4) + 1,(int)uStack_3a8);
  uVar18 = uStack_3b0 + 1;
  cVar5 = puStack_3e0[uStack_3b0];
  uVar8 = (uint)cVar5;
  switch((uintptr_t)(cVar5)) {
  case '\t':
  case '\v':
  case '\f':
  case ' ':
    goto switchD_100048bc_caseD_9;
  case '\n':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_200,((uintptr_t)pf_module_state+0x1801U));
    recovered_1000874c((undefined1 *)&uStack_1a0,10,apvStack_200,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    data = apvStack_200[0];
    break;
  case '\r':
    if ((uVar18 < uStack_3d8) && (puStack_3e0[uVar18] == '\n')) {
      uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
      uVar18 = uStack_3b0 + 2;
    }
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_1e8,((uintptr_t)pf_module_state+0x1801U));
    recovered_1000874c((undefined1 *)&uStack_1a0,10,apvStack_1e8,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    data = apvStack_1e8[0];
    break;
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case '$':
  case '.':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
    goto switchD_100048bc_caseD_e;
  case '!':
    if ((uVar18 < uStack_3d8) && (puStack_3e0[uVar18] == '=')) {
      uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
      uVar19 = 0x13;
      uStack_3a0 = true;
      uStack_3b0 = uStack_3b0 + 2;
    }
    else {
      uStack_3a0 = false;
      uVar19 = 0x10;
      uStack_3b0 = uVar18;
    }
    puVar3 = &DAT_10017afd;
    if (!(bool)uStack_3a0) {
      puVar3 = &DAT_10017b00;
    }
    recovered_100064b8((long *)apvStack_320,(long)puVar3);
    recovered_1000874c((undefined1 *)&uStack_1a0,uVar19,apvStack_320,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_320[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '\"':
  case '\'':
    uStack_78 = 0;
    uStack_70 = 0;
    pvStack_80 = (void *)0x0;
    uStack_3b0 = uVar18;
    while( true ) {
      if (uStack_3d8 <= uStack_3b0) {
        recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x1897U));
        recovered_100087cc(apvStack_1b8,&uStack_3c8,uVar17,uVar22,alStack_1d0);
        recovered_10008790(apvStack_1b8);
        goto LAB_10005a9c;
      }
      uStack_3a0 = 0;
      iVar14 = PF_PART4(uStack_3a8, 4);
      uStack_3a8 = CONCAT44(PF_PART4(uStack_3a8, 4) + 1,(int)uStack_3a8);
      uVar18 = uStack_3b0 + 1;
      cVar21 = puStack_3e0[uStack_3b0];
      if (cVar21 == cVar5) break;
      if (cVar21 == '\\') {
        if (uStack_3d8 <= uVar18) {
          uStack_3b0 = uVar18;
          recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x187cU));
          recovered_100087cc(apvStack_1b8,&uStack_3c8,uVar17,uVar22,alStack_1d0);
          recovered_10008790(apvStack_1b8);
          goto LAB_10005a9c;
        }
        uStack_3a8 = CONCAT44(iVar14 + 2,(int)uStack_3a8);
        uStack_3b0 = uStack_3b0 + 2;
        cVar6 = puStack_3e0[uVar18];
        cVar21 = cVar6;
        if (cVar6 == 'n') {
          cVar21 = '\n';
        }
        cVar2 = '\r';
        if (cVar6 != 'r') {
          cVar2 = cVar21;
        }
        cVar21 = '\t';
        if (cVar6 != 't') {
          cVar21 = cVar2;
        }
        cVar2 = cVar6;
        if (cVar6 != '\\') {
          cVar2 = cVar21;
        }
        cVar21 = cVar6;
        if (cVar6 != '\'') {
          cVar21 = cVar2;
        }
        if (cVar6 != '\"') {
          cVar6 = cVar21;
        }
        recovered_10006c48((long *)&pvStack_80,cVar6);
      }
      else {
        if (cVar21 == '\n' || cVar21 == '\r') {
          uStack_3b0 = uVar18;
          recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x1897U));
          recovered_100087cc(apvStack_1b8,&uStack_3c8,uVar17,uVar22,alStack_1d0);
          recovered_10008790(apvStack_1b8);
          goto LAB_10005a9c;
        }
        uStack_3b0 = uVar18;
        recovered_10006c48((long *)&pvStack_80,cVar21);
      }
    }
    uStack_3b0 = uVar18;
    recovered_10006dc0(apvStack_1b8,&pvStack_80);
    recovered_1000874c((undefined1 *)&uStack_1a0,3,apvStack_1b8,uVar9,uVar10);
    recovered_10002e70(apvStack_1b8[0]);
    recovered_10002e70(pvStack_80);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    goto LAB_100054cc;
  case '#':
    iVar14 = uVar10 + 2;
    uStack_3b0 = uVar18;
    while( true ) {
      uStack_3a0 = 0;
      uVar18 = uStack_3b0;
      if ((uStack_3d8 <= uStack_3b0) ||
         (!(puStack_3e0[uStack_3b0] != '\n' && puStack_3e0[uStack_3b0] != '\r'))) break;
      uStack_3a8 = CONCAT44(iVar14,(int)uStack_3a8);
      iVar14 = iVar14 + 1;
      uStack_3b0 = uStack_3b0 + 1;
    }
    goto switchD_100048bc_caseD_9;
  case '%':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_308,((uintptr_t)pf_module_state+0x1813U));
    recovered_1000874c((undefined1 *)&uStack_1a0,0xf,apvStack_308,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_308[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '&':
    if ((uStack_3d8 <= uVar18) || (puStack_3e0[uVar18] != '&')) {
      uStack_3b0 = uVar18;
      recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x1829U));
      recovered_100087cc(&uStack_1a0,&uStack_3c8,uVar17,uVar22,&pvStack_80);
      recovered_10008790(&uStack_1a0);
      goto LAB_10005a9c;
    }
    uStack_3b0 = uStack_3b0 + 2;
    uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
    uStack_3a0 = 1;
    recovered_100064b8((long *)apvStack_380,((uintptr_t)pf_module_state+0x1842U));
    recovered_1000874c((undefined1 *)&uStack_1a0,0x18,apvStack_380,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_380[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '(':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_218,((uintptr_t)pf_module_state+0x1803U));
    recovered_1000874c((undefined1 *)&uStack_1a0,4,apvStack_218,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_218[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case ')':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_230,((uintptr_t)pf_module_state+0x1805U));
    recovered_1000874c((undefined1 *)&uStack_1a0,5,apvStack_230,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_230[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '*':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_2d8,((uintptr_t)pf_module_state+0x180fU));
    recovered_1000874c((undefined1 *)&uStack_1a0,0xd,apvStack_2d8,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_2d8[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '+':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_2a8,((uintptr_t)pf_module_state+0x180bU));
    recovered_1000874c((undefined1 *)&uStack_1a0,0xb,apvStack_2a8,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_2a8[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case ',':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_278,((uintptr_t)pf_module_state+0x1807U));
    recovered_1000874c((undefined1 *)&uStack_1a0,8,apvStack_278,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_278[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '-':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_2c0,((uintptr_t)pf_module_state+0x180dU));
    recovered_1000874c((undefined1 *)&uStack_1a0,0xc,apvStack_2c0,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_2c0[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '/':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_2f0,((uintptr_t)pf_module_state+0x1811U));
    recovered_1000874c((undefined1 *)&uStack_1a0,0xe,apvStack_2f0,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_2f0[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case ';':
    uStack_3b0 = uVar18;
    recovered_100064b8((long *)apvStack_290,((uintptr_t)pf_module_state+0x1809U));
    recovered_1000874c((undefined1 *)&uStack_1a0,9,apvStack_290,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_290[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '<':
    if ((uVar18 < uStack_3d8) && (puStack_3e0[uVar18] == '=')) {
      uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
      uVar19 = 0x15;
      uStack_3a0 = true;
      uStack_3b0 = uStack_3b0 + 2;
    }
    else {
      uStack_3a0 = false;
      uVar19 = 0x14;
      uStack_3b0 = uVar18;
    }
    puVar3 = &DAT_10017b07;
    if (!(bool)uStack_3a0) {
      puVar3 = &DAT_10017b0a;
    }
    recovered_100064b8((long *)apvStack_350,(long)puVar3);
    recovered_1000874c((undefined1 *)&uStack_1a0,uVar19,apvStack_350,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_350[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '=':
    if ((uVar18 < uStack_3d8) && (puStack_3e0[uVar18] == '=')) {
      uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
      uVar19 = 0x12;
      uStack_3a0 = true;
      uStack_3b0 = uStack_3b0 + 2;
    }
    else {
      uStack_3a0 = false;
      uVar19 = 0x11;
      uStack_3b0 = uVar18;
    }
    puVar3 = &DAT_10017b02;
    if (!(bool)uStack_3a0) {
      puVar3 = &DAT_10017b05;
    }
    recovered_100064b8((long *)apvStack_338,(long)puVar3);
    recovered_1000874c((undefined1 *)&uStack_1a0,uVar19,apvStack_338,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_338[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  case '>':
    if ((uVar18 < uStack_3d8) && (puStack_3e0[uVar18] == '=')) {
      uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
      uVar19 = 0x17;
      uStack_3a0 = true;
      uStack_3b0 = uStack_3b0 + 2;
    }
    else {
      uStack_3a0 = false;
      uVar19 = 0x16;
      uStack_3b0 = uVar18;
    }
    puVar3 = &DAT_10017b0c;
    if (!(bool)uStack_3a0) {
      puVar3 = &DAT_10017b0f;
    }
    recovered_100064b8((long *)apvStack_368,(long)puVar3);
    recovered_1000874c((undefined1 *)&uStack_1a0,uVar19,apvStack_368,uVar9,uVar10);
    recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
    recovered_10002e70(pvStack_198);
    recovered_10002e70(apvStack_368[0]);
    uVar18 = uStack_3b0;
    goto switchD_100048bc_caseD_9;
  default:
    if (cVar5 == '[') {
      uStack_3b0 = uVar18;
      recovered_100064b8((long *)apvStack_248,((uintptr_t)pf_module_state+0x1762U));
      recovered_1000874c((undefined1 *)&uStack_1a0,6,apvStack_248,uVar9,uVar10);
      recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
      recovered_10002e70(pvStack_198);
      recovered_10002e70(apvStack_248[0]);
      uVar18 = uStack_3b0;
    }
    else if (cVar5 == ']') {
      uStack_3b0 = uVar18;
      recovered_100064b8((long *)apvStack_260,((uintptr_t)pf_module_state+0x1767U));
      recovered_1000874c((undefined1 *)&uStack_1a0,7,apvStack_260,uVar9,uVar10);
      recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
      recovered_10002e70(pvStack_198);
      recovered_10002e70(apvStack_260[0]);
      uVar18 = uStack_3b0;
    }
    else if (cVar5 == '|') {
      if ((uStack_3d8 <= uVar18) || (puStack_3e0[uVar18] != '|')) {
        uStack_3b0 = uVar18;
        recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x1845U));
        recovered_100087cc(&uStack_1a0,&uStack_3c8,uVar17,uVar22,&pvStack_80);
        recovered_10008790(&uStack_1a0);
        goto LAB_10005a9c;
      }
      uStack_3b0 = uStack_3b0 + 2;
      uStack_3a8 = CONCAT44(uVar10 + 2,(int)uStack_3a8);
      uStack_3a0 = 1;
      recovered_100064b8((long *)apvStack_398,((uintptr_t)pf_module_state+0x185eU));
      recovered_1000874c((undefined1 *)&uStack_1a0,0x19,apvStack_398,uVar9,uVar10);
      recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
      recovered_10002e70(pvStack_198);
      recovered_10002e70(apvStack_398[0]);
      uVar18 = uStack_3b0;
    }
    else {
switchD_100048bc_caseD_e:
      if (uVar8 - 0x30 < 10) {
        uStack_3b0 = uVar18;
        recovered_100089d0((long *)&pvStack_80,1,cVar5);
        bVar12 = false;
        while (uStack_3b0 < uStack_3d8) {
          puVar1 = &DAT_10017864;
          if (puStack_3e0 != (undefined1 *)0x0) {
            puVar1 = puStack_3e0;
          }
          if ((byte)puVar1[uStack_3b0] - 0x30U < 10) {
            uStack_3a0 = 0;
            uStack_3a8 = CONCAT44(PF_PART4(uStack_3a8, 4) + 1,(int)uStack_3a8);
            puVar1 = puStack_3e0 + uStack_3b0;
            uStack_3b0 = uStack_3b0 + 1;
            recovered_10006c48((long *)&pvStack_80,*puVar1);
          }
          else {
            if ((bool)((byte)puVar1[uStack_3b0] != 0x2e | bVar12)) break;
            uVar18 = uStack_3b0 + 1;
            if ((uStack_3d8 <= uVar18) || (9 < (byte)puVar1[uVar18] - 0x30U)) {
              bVar12 = false;
              break;
            }
            uStack_3a0 = 0;
            uStack_3a8 = CONCAT44(PF_PART4(uStack_3a8, 4) + 1,(int)uStack_3a8);
            puVar1 = puStack_3e0 + uStack_3b0;
            bVar12 = true;
            uStack_3b0 = uVar18;
            recovered_10006c48((long *)&pvStack_80,*puVar1);
          }
        }
        recovered_10006dc0(apvStack_1b8,&pvStack_80);
        uVar19 = 1;
        if (bVar12) {
          uVar19 = 2;
        }
        recovered_1000874c((undefined1 *)&uStack_1a0,uVar19,apvStack_1b8,uVar9,uVar10);
        recovered_10002e70(apvStack_1b8[0]);
        recovered_10002e70(pvStack_80);
        recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
      }
      else {
        if (uVar8 != 0x5f && 0x19 < ((uVar8 & 0xffffffdf) - 0x41 & 0xff)) {
          uStack_3b0 = uVar18;
          recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x1861U));
          recovered_10008874((long *)apvStack_1b8,alStack_1d0,(ulong)uVar8);
          recovered_10003ff0(&pvStack_80,apvStack_1b8,((uintptr_t)pf_module_state+0x1878U));
          recovered_100087cc(&uStack_1a0,&uStack_3c8,uVar17,uVar22,&pvStack_80);
          recovered_10008790(&uStack_1a0);
          goto LAB_10005a9c;
        }
        uStack_3b0 = uVar18;
        recovered_100089d0((long *)&pvStack_80,1,cVar5);
        while (uStack_3b0 < uStack_3d8) {
          puVar1 = &DAT_10017864;
          if (puStack_3e0 != (undefined1 *)0x0) {
            puVar1 = puStack_3e0;
          }
          bVar7 = puVar1[uStack_3b0];
          if ((((9 < (byte)(bVar7 - 0x30U)) &&
               (bVar7 != 0x5f && 0x19 < (byte)((bVar7 & 0xdf) + 0xbf))) && (bVar7 != 0x3f)) &&
             (bVar7 != 0x21)) break;
          uStack_3a0 = 0;
          uStack_3a8 = CONCAT44(PF_PART4(uStack_3a8, 4) + 1,(int)uStack_3a8);
          puVar1 = puStack_3e0 + uStack_3b0;
          uStack_3b0 = uStack_3b0 + 1;
          recovered_10006c48((long *)&pvStack_80,*puVar1);
        }
        bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017b9b);
        if (bVar12) {
          uVar19 = 0x1a;
        }
        else {
          bVar12 = recovered_100071cc(&pvStack_80,str_10017b9e);
          if (bVar12) {
            uVar19 = 0x1b;
          }
          else {
            bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017ba4);
            if (bVar12) {
              uVar19 = 0x1c;
            }
            else {
              bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017ba9);
              if (bVar12) {
                uVar19 = 0x1d;
              }
              else {
                bVar12 = recovered_100071cc(&pvStack_80,str_10017bad);
                if (bVar12) {
                  uVar19 = 0x1e;
                }
                else {
                  bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017bb3);
                  if (bVar12) {
                    uVar19 = 0x1f;
                  }
                  else {
                    bVar12 = recovered_100071cc(&pvStack_80,str_10017bb7);
                    if (bVar12) {
                      uVar19 = 0x20;
                    }
                    else {
                      bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017a3f);
                      if (bVar12) {
                        uVar19 = 0x21;
                      }
                      else {
                        bVar12 = recovered_100071cc(&pvStack_80,str_10017a44);
                        if (bVar12) {
                          uVar19 = 0x22;
                        }
                        else {
                          bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017a3b);
                          if (bVar12) {
                            uVar19 = 0x23;
                          }
                          else {
                            bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017bbe);
                            if (bVar12) {
                              uVar19 = 0x24;
                            }
                            else {
                              bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017bc3);
                              if (bVar12) {
                                uVar19 = 0x25;
                              }
                              else {
                                bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017bc6);
                                if (bVar12) {
                                  uVar19 = 0x26;
                                }
                                else {
                                  bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017bca);
                                  if (bVar12) {
                                    uVar19 = 0x27;
                                  }
                                  else {
                                    bVar12 = recovered_100071cc(&pvStack_80,&DAT_10017bcd);
                                    uVar19 = 0x28;
                                    if (!bVar12) {
                                      uVar19 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        recovered_10006dc0(apvStack_1b8,&pvStack_80);
        recovered_1000874c((undefined1 *)&uStack_1a0,uVar19,apvStack_1b8,uVar9,uVar10);
        recovered_10002e70(apvStack_1b8[0]);
        recovered_10002e70(pvStack_80);
        recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
      }
LAB_100054cc:
      recovered_10002e70(pvStack_198);
      uVar18 = uStack_3b0;
    }
    goto switchD_100048bc_caseD_9;
  }
  recovered_10002e70(data);
  uStack_3a8 = CONCAT44(1,(int)uStack_3a8 + 1);
  uVar18 = uStack_3b0;
  goto switchD_100048bc_caseD_9;
LAB_100054d8:
  recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x157cU));
  recovered_1000874c((undefined1 *)&uStack_1a0,0x2a,&pvStack_80,(int)uStack_3a8,PF_PART4(uStack_3a8, 4));
  recovered_10008698(&lStack_4a8,(undefined1 *)&uStack_1a0);
  recovered_10002e70(pvStack_198);
  recovered_10002e70(pvStack_80);
  recovered_10006dc0(&pvStack_4c0,param_4);
  lStack_490 = lStack_4a8;
  uStack_480 = uStack_498;
  uStack_488 = uStack_4a0;
  lStack_4a8 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  pvStack_478 = pvStack_4c0;
  uStack_468 = uStack_4b0;
  uStack_470 = uStack_4b8;
  pvStack_4c0 = (void *)0x0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  lStack_460 = 0;
  recovered_100064b8(alStack_458,((uintptr_t)pf_module_state+0x18e9U));
  uStack_430 = 0;
  uStack_438 = 0;
  lStack_440 = 0;
  plStack_428 = (long *)0x0;
  lStack_418 = 0;
  uStack_420 = 0;
  recovered_10007268(alStack_458,&pvStack_478);
  uStack_190 = 0;
  pvStack_198 = (void *)0x0;
  uStack_1a0 = 0;
  lStack_188 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  puStack_170 = (undefined8 *)0x0;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  recovered_10000d70(auStack_140,0x81);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (uStack_420 == lStack_418) {
    uVar18 = 4;
    if (uStack_420 != 0) {
      uVar18 = uStack_420 << 1;
    }
    recovered_10008b50((long *)&plStack_428,uVar18);
  }
  recovered_10008be0((long)(plStack_428 + uStack_420 * 0x24),(long)&uStack_1a0);
  uStack_420 = uStack_420 + 1;
  recovered_10008ab8((long)&uStack_1a0);
  recovered_10008b14(plStack_428,((uintptr_t)pf_module_state+0x18f2U));
  recovered_10002e70(pvStack_4c0);
  recovered_10008584(&lStack_4a8);
  while (recovered_10009154(&lStack_490), *(char *)(lStack_490 + lStack_460 * 0x28) != '*') {
    recovered_10009188(&lStack_490,0);
  }
  recovered_1000983c((long)alStack_458);
  recovered_10006dc0(&uStack_1a0,alStack_458);
  recovered_1000bd14(&lStack_188,&lStack_440);
  uStack_160 = 0;
  puStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  recovered_10008b50((long *)&puStack_170,uStack_420);
  lVar15 = 0;
  for (uVar18 = 0; uVar18 < uStack_420; uVar18 = uVar18 + 1) {
    recovered_1000a258((long)puStack_170 + lVar15,(long)plStack_428 + lVar15);
    lVar15 = lVar15 + 0x120;
  }
  uStack_168 = uStack_420;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008f24(param_1,&DAT_10016558,4);
  recovered_10008f3c(param_1,1);
  recovered_10008f54(param_1,&uStack_1a0);
  recovered_10008f3c(param_1,(undefined4)lStack_180);
  plVar13 = (long *)(lStack_188 + 0x20);
  lVar15 = lStack_180 * 0x28;
  do {
    if (lVar15 == 0) {
      recovered_10008f3c(param_1,(undefined4)uStack_168);
      puVar20 = puStack_170 + uStack_168 * 0x24;
      for (puVar16 = puStack_170; puVar16 != puVar20; puVar16 = puVar16 + 0x24) {
        recovered_10008f54(param_1,puVar16);
        recovered_10008f3c(param_1,*(undefined4 *)(puVar16 + 4));
        puVar4 = (undefined8 *)puVar16[3];
        for (lVar15 = puVar16[4] * 0x18; lVar15 != 0; lVar15 = lVar15 + -0x18) {
          recovered_10008f54(param_1,puVar4);
          puVar4 = puVar4 + 3;
        }
        recovered_10008f3c(param_1,*(undefined4 *)(puVar16 + 7));
        puVar1 = (undefined1 *)puVar16[6];
        for (lVar15 = puVar16[7] << 4; lVar15 != 0; lVar15 = lVar15 + -0x10) {
          recovered_10008f90(param_1,*puVar1);
          recovered_10008fb0(param_1,*(undefined4 *)(puVar1 + 4));
          recovered_10008fb0(param_1,*(undefined4 *)(puVar1 + 8));
          recovered_10008f3c(param_1,*(undefined4 *)(puVar1 + 0xc));
          puVar1 = puVar1 + 0x10;
        }
      }
      recovered_100085e0((long)&uStack_1a0);
      recovered_10008648((long)&lStack_490);
      recovered_10008674((long)&puStack_3e0);
      return;
    }
    recovered_10008f90(param_1,(char)plVar13[-4]);
    switch((uintptr_t)((char)plVar13[-4])) {
    case '\0':
      break;
    case '\x01':
      if (*plVar13 != 1) goto LAB_10005a9c;
      pvStack_80 = (void *)plVar13[-3];
      recovered_10008f24(param_1,(undefined1 *)&pvStack_80,8);
      break;
    case '\x02':
      if (*plVar13 != 2) goto LAB_10005a9c;
      pvStack_80 = (void *)plVar13[-3];
      recovered_10008f24(param_1,(undefined1 *)&pvStack_80,8);
      break;
    case '\x03':
      if (*plVar13 != 3) goto LAB_10005a9c;
      recovered_10008f90(param_1,(char)plVar13[-3]);
      break;
    case '\x04':
      if (*plVar13 != 4) goto LAB_10005a9c;
      recovered_10008f54(param_1,plVar13 + -3);
      break;
    default:
      plVar13 = recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x18f9U));
      recovered_10008790(plVar13);
LAB_10005a9c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10005aa0);
      (*pcVar11)();
    }
    plVar13 = plVar13 + 5;
    lVar15 = lVar15 + -0x28;
  } while( true );
}

#undef DAT_10016558
#undef DAT_10017864
#undef DAT_10017a3b
#undef DAT_10017a3f
#undef DAT_10017afd
#undef DAT_10017b00
#undef DAT_10017b02
#undef DAT_10017b05
#undef DAT_10017b07
#undef DAT_10017b0a
#undef DAT_10017b0c
#undef DAT_10017b0f
#undef DAT_10017b9b
#undef DAT_10017ba4
#undef DAT_10017ba9
#undef DAT_10017bb3
#undef DAT_10017bbe
#undef DAT_10017bc3
#undef DAT_10017bc6
#undef DAT_10017bca
#undef DAT_10017bcd
#undef str_10017a44
#undef str_10017b9e
#undef str_10017bad
#undef str_10017bb7
#undef apvStack_2f0
#undef apvStack_308
#undef apvStack_2c0
#undef apvStack_2d8
#undef apvStack_290
#undef apvStack_2a8
#undef apvStack_260
#undef apvStack_278
#undef apvStack_230
#undef apvStack_248
#undef apvStack_200
#undef apvStack_218
#undef alStack_1d0
#undef apvStack_1e8
#undef uStack_1a0
#undef apvStack_1b8
#undef uStack_190
#undef pvStack_198
#undef lStack_180
#undef lStack_188
#undef puStack_170
#undef uStack_178
#undef uStack_160
#undef uStack_168
#undef uStack_150
#undef uStack_158
#undef auStack_140
#undef uStack_148
#undef uStack_b0
#undef uStack_b8
#undef uStack_a0
#undef uStack_a8
#undef uStack_90
#undef uStack_98
#undef pvStack_80
#undef uStack_88
#undef uStack_70
#undef uStack_78
#undef pvStack_4c0
#undef uStack_4b0
#undef uStack_4b8
#undef uStack_4a0
#undef lStack_4a8
#undef lStack_490
#undef uStack_498
#undef uStack_480
#undef uStack_488
#undef uStack_470
#undef pvStack_478
#undef lStack_460
#undef uStack_468
#undef lStack_440
#undef alStack_458
#undef uStack_430
#undef uStack_438
#undef uStack_420
#undef plStack_428
#undef uStack_410
#undef lStack_418
#undef uStack_400
#undef uStack_408
#undef uStack_3f0
#undef puStack_3f8
#undef puStack_3e0
#undef uStack_3e8
#undef uStack_3d0
#undef uStack_3d8
#undef uStack_3c0
#undef uStack_3c8
#undef uStack_3b0
#undef uStack_3b8
#undef uStack_3a0
#undef uStack_3a8
#undef apvStack_380
#undef apvStack_398
#undef apvStack_350
#undef apvStack_368
#undef apvStack_320
#undef apvStack_338

#undef DAT_10016558
#define DAT_10016558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10017a3b
#define DAT_10017a3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1753U)))
#undef DAT_10017a3f
#define DAT_10017a3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1757U)))
#undef DAT_10017afd
#define DAT_10017afd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1815U)))
#undef DAT_10017b00
#define DAT_10017b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1818U)))
#undef DAT_10017b02
#define DAT_10017b02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181aU)))
#undef DAT_10017b05
#define DAT_10017b05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181dU)))
#undef DAT_10017b07
#define DAT_10017b07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181fU)))
#undef DAT_10017b0a
#define DAT_10017b0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1822U)))
#undef DAT_10017b0c
#define DAT_10017b0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1824U)))
#undef DAT_10017b0f
#define DAT_10017b0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1827U)))
#undef DAT_10017b9b
#define DAT_10017b9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18b3U)))
#undef DAT_10017ba4
#define DAT_10017ba4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18bcU)))
#undef DAT_10017ba9
#define DAT_10017ba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18c1U)))
#undef DAT_10017bb3
#define DAT_10017bb3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18cbU)))
#undef DAT_10017bbe
#define DAT_10017bbe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18d6U)))
#undef DAT_10017bc3
#define DAT_10017bc3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18dbU)))
#undef DAT_10017bc6
#define DAT_10017bc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18deU)))
#undef DAT_10017bca
#define DAT_10017bca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18e2U)))
#undef DAT_10017bcd
#define DAT_10017bcd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18e5U)))
#undef str_10017a44
#define str_10017a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175cU)))
#undef str_10017b9e
#define str_10017b9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18b6U)))
#undef str_10017bad
#define str_10017bad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18c5U)))
#undef str_10017bb7
#define str_10017bb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cfU)))
#define alStack_1d0 (*(long (*)[3])(frame + 768))
#define uStack_190 (*(undefined8 *)(frame + 832))
#define uStack_178 (*(undefined8 *)(frame + 856))
#define uStack_160 (*(undefined8 *)(frame + 880))
#define auStack_140 (*(undefined1 (*)[136])(frame + 912))
#define uStack_148 (*(undefined8 *)(frame + 904))
#define uStack_b0 (*(undefined8 *)(frame + 1056))
#define uStack_88 (*(undefined8 *)(frame + 1096))
#define uStack_70 (*(undefined8 *)(frame + 1120))
#define local_4c0 (*(void * *)(frame + 16))
#define local_4b8 (*(undefined8 *)(frame + 24))
#define local_4a8 (*(long *)(frame + 40))
#define local_4a0 (*(undefined8 *)(frame + 48))
#define local_490 (*(long *)(frame + 64))
#define local_488 (*(undefined8 *)(frame + 72))
#define local_478 (*(void * *)(frame + 88))
#define local_470 (*(undefined8 *)(frame + 96))
#define local_460 (*(long *)(frame + 112))
#define local_440 (*(long *)(frame + 144))
#define local_438 (*(undefined8 *)(frame + 152))
#define local_428 (*(long * *)(frame + 168))
#define local_420 (*(ulong *)(frame + 176))
#define local_410 (*(undefined8 *)(frame + 192))
#define local_408 (*(undefined8 *)(frame + 200))
#define local_3f8 (*(undefined1 * *)(frame + 216))
#define local_3f0 (*(ulong *)(frame + 224))
#define local_3e0 (*(undefined1 * *)(frame + 240))
#define local_3d8 (*(ulong *)(frame + 248))
#define local_3c8 (*(undefined8 *)(frame + 264))
#define local_3c0 (*(undefined8 *)(frame + 272))
#define local_3b0 (*(ulong *)(frame + 288))
#define local_3a8 (*(undefined8 *)(frame + 296))
#define local_3a0 (*(undefined1 *)(frame + 304))
#define local_398 (*(void * (*)[3])(frame + 312))
#define local_380 (*(void * (*)[3])(frame + 336))
#define local_368 (*(void * (*)[3])(frame + 360))
#define local_350 (*(void * (*)[3])(frame + 384))
#define local_338 (*(void * (*)[3])(frame + 408))
#define local_320 (*(void * (*)[3])(frame + 432))
#define local_308 (*(void * (*)[3])(frame + 456))
#define local_2f0 (*(void * (*)[3])(frame + 480))
#define local_2d8 (*(void * (*)[3])(frame + 504))
#define local_2c0 (*(void * (*)[3])(frame + 528))
#define local_2a8 (*(void * (*)[3])(frame + 552))
#define local_290 (*(void * (*)[3])(frame + 576))
#define local_278 (*(void * (*)[3])(frame + 600))
#define local_260 (*(void * (*)[3])(frame + 624))
#define local_248 (*(void * (*)[3])(frame + 648))
#define local_230 (*(void * (*)[3])(frame + 672))
#define local_218 (*(void * (*)[3])(frame + 696))
#define local_200 (*(void * (*)[3])(frame + 720))
#define local_1e8 (*(void * (*)[3])(frame + 744))
#define local_1b8 (*(void * (*)[3])(frame + 792))
#define local_1a0 (*(undefined8 *)(frame + 816))
#define local_198 (*(void * *)(frame + 824))
#define local_188 (*(long *)(frame + 840))
#define local_180 (*(long *)(frame + 848))
#define local_170 (*(undefined8 * *)(frame + 864))
#define local_168 (*(ulong *)(frame + 872))
#define local_158 (*(undefined8 *)(frame + 888))
#define uStack_4b0 (*(undefined8 *)(frame + 32))
#define local_150 (*(undefined8 *)(frame + 896))
#define local_b8 (*(undefined8 *)(frame + 1048))
#define local_a8 (*(undefined8 *)(frame + 1064))
#define local_a0 (*(undefined8 *)(frame + 1072))
#define local_98 (*(undefined8 *)(frame + 1080))
#define uStack_498 (*(undefined8 *)(frame + 56))
#define local_90 (*(undefined8 *)(frame + 1088))
#define uStack_480 (*(undefined8 *)(frame + 80))
#define local_80 (*(void * *)(frame + 1104))
#define local_78 (*(undefined8 *)(frame + 1112))
#define uStack_468 (*(undefined8 *)(frame + 104))
#define alStack_458 (*(long (*)[3])(frame + 120))
#define uStack_430 (*(undefined8 *)(frame + 160))
#define lStack_418 (*(long *)(frame + 184))
#define uStack_400 (*(undefined8 *)(frame + 208))
#define uStack_3e8 (*(undefined8 *)(frame + 232))
#define uStack_3d0 (*(undefined8 *)(frame + 256))
#define uStack_3b8 (*(undefined8 *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047ac
 */

void recovered_100047ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char frame[1264] = {0};

  undefined1 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  code *pcVar11;
  bool bVar12;
  void *data;
  long *plVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  char cVar21;
  ulong uVar22;

  recovered_10006dc0(&local_3f8,param_3);
  recovered_10006dc0(&local_410,param_4);
  local_3e0 = local_3f8;
  uStack_3d0 = uStack_3e8;
  local_3d8 = local_3f0;
  local_3f8 = (undefined1 *)0x0;
  uStack_3e8 = 0;
  local_3f0 = 0;
  local_3c8 = local_410;
  uStack_3b8 = uStack_400;
  local_3c0 = local_408;
  local_410 = 0;
  uStack_400 = 0;
  local_408 = 0;
  local_3b0 = 0;
  local_3a8 = 0x100000001;
  local_3a0 = 0;
  recovered_10002e70((void *)0x0);
  recovered_10002e70(local_3f8);
  local_4a8 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  uVar18 = local_3b0;
switchD_100048bc_caseD_9:
  local_3b0 = uVar18;
  if (local_3d8 <= local_3b0) goto LAB_100054d8;
  uVar9 = (int)local_3a8;
  uVar17 = local_3a8 & 0xffffffff;
  uVar10 = PF_PART4(local_3a8, 4);
  uVar22 = (ulong)PF_PART4(local_3a8, 4);
  local_3a0 = 0;
  local_3a8 = CONCAT44(PF_PART4(local_3a8, 4) + 1,(int)local_3a8);
  uVar18 = local_3b0 + 1;
  cVar5 = local_3e0[local_3b0];
  uVar8 = (uint)cVar5;
  switch((uintptr_t)(cVar5)) {
  case '\t':
  case '\v':
  case '\f':
  case ' ':
    goto switchD_100048bc_caseD_9;
  case '\n':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_200,((uintptr_t)pf_module_state+0x1801U));
    recovered_1000874c((undefined1 *)&local_1a0,10,local_200,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    data = local_200[0];
    break;
  case '\r':
    if ((uVar18 < local_3d8) && (local_3e0[uVar18] == '\n')) {
      local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
      uVar18 = local_3b0 + 2;
    }
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_1e8,((uintptr_t)pf_module_state+0x1801U));
    recovered_1000874c((undefined1 *)&local_1a0,10,local_1e8,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    data = local_1e8[0];
    break;
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case '$':
  case '.':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
    goto switchD_100048bc_caseD_e;
  case '!':
    if ((uVar18 < local_3d8) && (local_3e0[uVar18] == '=')) {
      local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
      uVar19 = 0x13;
      local_3a0 = true;
      local_3b0 = local_3b0 + 2;
    }
    else {
      local_3a0 = false;
      uVar19 = 0x10;
      local_3b0 = uVar18;
    }
    puVar3 = &DAT_10017afd;
    if (!(bool)local_3a0) {
      puVar3 = &DAT_10017b00;
    }
    recovered_100064b8((long *)local_320,(long)puVar3);
    recovered_1000874c((undefined1 *)&local_1a0,uVar19,local_320,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_320[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '\"':
  case '\'':
    local_78 = 0;
    uStack_70 = 0;
    local_80 = (void *)0x0;
    local_3b0 = uVar18;
    while( true ) {
      if (local_3d8 <= local_3b0) {
        recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x1897U));
        recovered_100087cc(local_1b8,&local_3c8,uVar17,uVar22,alStack_1d0);
        recovered_10008790(local_1b8);
        goto LAB_10005a9c;
      }
      local_3a0 = 0;
      iVar14 = PF_PART4(local_3a8, 4);
      local_3a8 = CONCAT44(PF_PART4(local_3a8, 4) + 1,(int)local_3a8);
      uVar18 = local_3b0 + 1;
      cVar21 = local_3e0[local_3b0];
      if (cVar21 == cVar5) break;
      if (cVar21 == '\\') {
        if (local_3d8 <= uVar18) {
          local_3b0 = uVar18;
          recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x187cU));
          recovered_100087cc(local_1b8,&local_3c8,uVar17,uVar22,alStack_1d0);
          recovered_10008790(local_1b8);
          goto LAB_10005a9c;
        }
        local_3a8 = CONCAT44(iVar14 + 2,(int)local_3a8);
        local_3b0 = local_3b0 + 2;
        cVar6 = local_3e0[uVar18];
        cVar21 = cVar6;
        if (cVar6 == 'n') {
          cVar21 = '\n';
        }
        cVar2 = '\r';
        if (cVar6 != 'r') {
          cVar2 = cVar21;
        }
        cVar21 = '\t';
        if (cVar6 != 't') {
          cVar21 = cVar2;
        }
        cVar2 = cVar6;
        if (cVar6 != '\\') {
          cVar2 = cVar21;
        }
        cVar21 = cVar6;
        if (cVar6 != '\'') {
          cVar21 = cVar2;
        }
        if (cVar6 != '\"') {
          cVar6 = cVar21;
        }
        recovered_10006c48((long *)&local_80,cVar6);
      }
      else {
        if (cVar21 == '\n' || cVar21 == '\r') {
          local_3b0 = uVar18;
          recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x1897U));
          recovered_100087cc(local_1b8,&local_3c8,uVar17,uVar22,alStack_1d0);
          recovered_10008790(local_1b8);
          goto LAB_10005a9c;
        }
        local_3b0 = uVar18;
        recovered_10006c48((long *)&local_80,cVar21);
      }
    }
    local_3b0 = uVar18;
    recovered_10006dc0(local_1b8,&local_80);
    recovered_1000874c((undefined1 *)&local_1a0,3,local_1b8,uVar9,uVar10);
    recovered_10002e70(local_1b8[0]);
    recovered_10002e70(local_80);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    goto LAB_100054cc;
  case '#':
    iVar14 = uVar10 + 2;
    local_3b0 = uVar18;
    while( true ) {
      local_3a0 = 0;
      uVar18 = local_3b0;
      if ((local_3d8 <= local_3b0) ||
         (!(local_3e0[local_3b0] != '\n' && local_3e0[local_3b0] != '\r'))) break;
      local_3a8 = CONCAT44(iVar14,(int)local_3a8);
      iVar14 = iVar14 + 1;
      local_3b0 = local_3b0 + 1;
    }
    goto switchD_100048bc_caseD_9;
  case '%':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_308,((uintptr_t)pf_module_state+0x1813U));
    recovered_1000874c((undefined1 *)&local_1a0,0xf,local_308,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_308[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '&':
    if ((local_3d8 <= uVar18) || (local_3e0[uVar18] != '&')) {
      local_3b0 = uVar18;
      recovered_100064b8((long *)&local_80,((uintptr_t)pf_module_state+0x1829U));
      recovered_100087cc(&local_1a0,&local_3c8,uVar17,uVar22,&local_80);
      recovered_10008790(&local_1a0);
      goto LAB_10005a9c;
    }
    local_3b0 = local_3b0 + 2;
    local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
    local_3a0 = 1;
    recovered_100064b8((long *)local_380,((uintptr_t)pf_module_state+0x1842U));
    recovered_1000874c((undefined1 *)&local_1a0,0x18,local_380,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_380[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '(':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_218,((uintptr_t)pf_module_state+0x1803U));
    recovered_1000874c((undefined1 *)&local_1a0,4,local_218,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_218[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case ')':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_230,((uintptr_t)pf_module_state+0x1805U));
    recovered_1000874c((undefined1 *)&local_1a0,5,local_230,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_230[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '*':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_2d8,((uintptr_t)pf_module_state+0x180fU));
    recovered_1000874c((undefined1 *)&local_1a0,0xd,local_2d8,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_2d8[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '+':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_2a8,((uintptr_t)pf_module_state+0x180bU));
    recovered_1000874c((undefined1 *)&local_1a0,0xb,local_2a8,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_2a8[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case ',':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_278,((uintptr_t)pf_module_state+0x1807U));
    recovered_1000874c((undefined1 *)&local_1a0,8,local_278,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_278[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '-':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_2c0,((uintptr_t)pf_module_state+0x180dU));
    recovered_1000874c((undefined1 *)&local_1a0,0xc,local_2c0,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_2c0[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '/':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_2f0,((uintptr_t)pf_module_state+0x1811U));
    recovered_1000874c((undefined1 *)&local_1a0,0xe,local_2f0,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_2f0[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case ';':
    local_3b0 = uVar18;
    recovered_100064b8((long *)local_290,((uintptr_t)pf_module_state+0x1809U));
    recovered_1000874c((undefined1 *)&local_1a0,9,local_290,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_290[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '<':
    if ((uVar18 < local_3d8) && (local_3e0[uVar18] == '=')) {
      local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
      uVar19 = 0x15;
      local_3a0 = true;
      local_3b0 = local_3b0 + 2;
    }
    else {
      local_3a0 = false;
      uVar19 = 0x14;
      local_3b0 = uVar18;
    }
    puVar3 = &DAT_10017b07;
    if (!(bool)local_3a0) {
      puVar3 = &DAT_10017b0a;
    }
    recovered_100064b8((long *)local_350,(long)puVar3);
    recovered_1000874c((undefined1 *)&local_1a0,uVar19,local_350,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_350[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '=':
    if ((uVar18 < local_3d8) && (local_3e0[uVar18] == '=')) {
      local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
      uVar19 = 0x12;
      local_3a0 = true;
      local_3b0 = local_3b0 + 2;
    }
    else {
      local_3a0 = false;
      uVar19 = 0x11;
      local_3b0 = uVar18;
    }
    puVar3 = &DAT_10017b02;
    if (!(bool)local_3a0) {
      puVar3 = &DAT_10017b05;
    }
    recovered_100064b8((long *)local_338,(long)puVar3);
    recovered_1000874c((undefined1 *)&local_1a0,uVar19,local_338,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_338[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  case '>':
    if ((uVar18 < local_3d8) && (local_3e0[uVar18] == '=')) {
      local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
      uVar19 = 0x17;
      local_3a0 = true;
      local_3b0 = local_3b0 + 2;
    }
    else {
      local_3a0 = false;
      uVar19 = 0x16;
      local_3b0 = uVar18;
    }
    puVar3 = &DAT_10017b0c;
    if (!(bool)local_3a0) {
      puVar3 = &DAT_10017b0f;
    }
    recovered_100064b8((long *)local_368,(long)puVar3);
    recovered_1000874c((undefined1 *)&local_1a0,uVar19,local_368,uVar9,uVar10);
    recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
    recovered_10002e70(local_198);
    recovered_10002e70(local_368[0]);
    uVar18 = local_3b0;
    goto switchD_100048bc_caseD_9;
  default:
    if (cVar5 == '[') {
      local_3b0 = uVar18;
      recovered_100064b8((long *)local_248,((uintptr_t)pf_module_state+0x1762U));
      recovered_1000874c((undefined1 *)&local_1a0,6,local_248,uVar9,uVar10);
      recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
      recovered_10002e70(local_198);
      recovered_10002e70(local_248[0]);
      uVar18 = local_3b0;
    }
    else if (cVar5 == ']') {
      local_3b0 = uVar18;
      recovered_100064b8((long *)local_260,((uintptr_t)pf_module_state+0x1767U));
      recovered_1000874c((undefined1 *)&local_1a0,7,local_260,uVar9,uVar10);
      recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
      recovered_10002e70(local_198);
      recovered_10002e70(local_260[0]);
      uVar18 = local_3b0;
    }
    else if (cVar5 == '|') {
      if ((local_3d8 <= uVar18) || (local_3e0[uVar18] != '|')) {
        local_3b0 = uVar18;
        recovered_100064b8((long *)&local_80,((uintptr_t)pf_module_state+0x1845U));
        recovered_100087cc(&local_1a0,&local_3c8,uVar17,uVar22,&local_80);
        recovered_10008790(&local_1a0);
        goto LAB_10005a9c;
      }
      local_3b0 = local_3b0 + 2;
      local_3a8 = CONCAT44(uVar10 + 2,(int)local_3a8);
      local_3a0 = 1;
      recovered_100064b8((long *)local_398,((uintptr_t)pf_module_state+0x185eU));
      recovered_1000874c((undefined1 *)&local_1a0,0x19,local_398,uVar9,uVar10);
      recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
      recovered_10002e70(local_198);
      recovered_10002e70(local_398[0]);
      uVar18 = local_3b0;
    }
    else {
switchD_100048bc_caseD_e:
      if (uVar8 - 0x30 < 10) {
        local_3b0 = uVar18;
        recovered_100089d0((long *)&local_80,1,cVar5);
        bVar12 = false;
        while (local_3b0 < local_3d8) {
          puVar1 = &DAT_10017864;
          if (local_3e0 != (undefined1 *)0x0) {
            puVar1 = local_3e0;
          }
          if ((byte)puVar1[local_3b0] - 0x30U < 10) {
            local_3a0 = 0;
            local_3a8 = CONCAT44(PF_PART4(local_3a8, 4) + 1,(int)local_3a8);
            puVar1 = local_3e0 + local_3b0;
            local_3b0 = local_3b0 + 1;
            recovered_10006c48((long *)&local_80,*puVar1);
          }
          else {
            if ((bool)((byte)puVar1[local_3b0] != 0x2e | bVar12)) break;
            uVar18 = local_3b0 + 1;
            if ((local_3d8 <= uVar18) || (9 < (byte)puVar1[uVar18] - 0x30U)) {
              bVar12 = false;
              break;
            }
            local_3a0 = 0;
            local_3a8 = CONCAT44(PF_PART4(local_3a8, 4) + 1,(int)local_3a8);
            puVar1 = local_3e0 + local_3b0;
            bVar12 = true;
            local_3b0 = uVar18;
            recovered_10006c48((long *)&local_80,*puVar1);
          }
        }
        recovered_10006dc0(local_1b8,&local_80);
        uVar19 = 1;
        if (bVar12) {
          uVar19 = 2;
        }
        recovered_1000874c((undefined1 *)&local_1a0,uVar19,local_1b8,uVar9,uVar10);
        recovered_10002e70(local_1b8[0]);
        recovered_10002e70(local_80);
        recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
      }
      else {
        if (uVar8 != 0x5f && 0x19 < ((uVar8 & 0xffffffdf) - 0x41 & 0xff)) {
          local_3b0 = uVar18;
          recovered_100064b8(alStack_1d0,((uintptr_t)pf_module_state+0x1861U));
          recovered_10008874((long *)local_1b8,alStack_1d0,(ulong)uVar8);
          recovered_10003ff0(&local_80,local_1b8,((uintptr_t)pf_module_state+0x1878U));
          recovered_100087cc(&local_1a0,&local_3c8,uVar17,uVar22,&local_80);
          recovered_10008790(&local_1a0);
          goto LAB_10005a9c;
        }
        local_3b0 = uVar18;
        recovered_100089d0((long *)&local_80,1,cVar5);
        while (local_3b0 < local_3d8) {
          puVar1 = &DAT_10017864;
          if (local_3e0 != (undefined1 *)0x0) {
            puVar1 = local_3e0;
          }
          bVar7 = puVar1[local_3b0];
          if ((((9 < (byte)(bVar7 - 0x30U)) &&
               (bVar7 != 0x5f && 0x19 < (byte)((bVar7 & 0xdf) + 0xbf))) && (bVar7 != 0x3f)) &&
             (bVar7 != 0x21)) break;
          local_3a0 = 0;
          local_3a8 = CONCAT44(PF_PART4(local_3a8, 4) + 1,(int)local_3a8);
          puVar1 = local_3e0 + local_3b0;
          local_3b0 = local_3b0 + 1;
          recovered_10006c48((long *)&local_80,*puVar1);
        }
        bVar12 = recovered_100071cc(&local_80,&DAT_10017b9b);
        if (bVar12) {
          uVar19 = 0x1a;
        }
        else {
          bVar12 = recovered_100071cc(&local_80,str_10017b9e);
          if (bVar12) {
            uVar19 = 0x1b;
          }
          else {
            bVar12 = recovered_100071cc(&local_80,&DAT_10017ba4);
            if (bVar12) {
              uVar19 = 0x1c;
            }
            else {
              bVar12 = recovered_100071cc(&local_80,&DAT_10017ba9);
              if (bVar12) {
                uVar19 = 0x1d;
              }
              else {
                bVar12 = recovered_100071cc(&local_80,str_10017bad);
                if (bVar12) {
                  uVar19 = 0x1e;
                }
                else {
                  bVar12 = recovered_100071cc(&local_80,&DAT_10017bb3);
                  if (bVar12) {
                    uVar19 = 0x1f;
                  }
                  else {
                    bVar12 = recovered_100071cc(&local_80,str_10017bb7);
                    if (bVar12) {
                      uVar19 = 0x20;
                    }
                    else {
                      bVar12 = recovered_100071cc(&local_80,&DAT_10017a3f);
                      if (bVar12) {
                        uVar19 = 0x21;
                      }
                      else {
                        bVar12 = recovered_100071cc(&local_80,str_10017a44);
                        if (bVar12) {
                          uVar19 = 0x22;
                        }
                        else {
                          bVar12 = recovered_100071cc(&local_80,&DAT_10017a3b);
                          if (bVar12) {
                            uVar19 = 0x23;
                          }
                          else {
                            bVar12 = recovered_100071cc(&local_80,&DAT_10017bbe);
                            if (bVar12) {
                              uVar19 = 0x24;
                            }
                            else {
                              bVar12 = recovered_100071cc(&local_80,&DAT_10017bc3);
                              if (bVar12) {
                                uVar19 = 0x25;
                              }
                              else {
                                bVar12 = recovered_100071cc(&local_80,&DAT_10017bc6);
                                if (bVar12) {
                                  uVar19 = 0x26;
                                }
                                else {
                                  bVar12 = recovered_100071cc(&local_80,&DAT_10017bca);
                                  if (bVar12) {
                                    uVar19 = 0x27;
                                  }
                                  else {
                                    bVar12 = recovered_100071cc(&local_80,&DAT_10017bcd);
                                    uVar19 = 0x28;
                                    if (!bVar12) {
                                      uVar19 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        recovered_10006dc0(local_1b8,&local_80);
        recovered_1000874c((undefined1 *)&local_1a0,uVar19,local_1b8,uVar9,uVar10);
        recovered_10002e70(local_1b8[0]);
        recovered_10002e70(local_80);
        recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
      }
LAB_100054cc:
      recovered_10002e70(local_198);
      uVar18 = local_3b0;
    }
    goto switchD_100048bc_caseD_9;
  }
  recovered_10002e70(data);
  local_3a8 = CONCAT44(1,(int)local_3a8 + 1);
  uVar18 = local_3b0;
  goto switchD_100048bc_caseD_9;
LAB_100054d8:
  recovered_100064b8((long *)&local_80,((uintptr_t)pf_module_state+0x157cU));
  recovered_1000874c((undefined1 *)&local_1a0,0x2a,&local_80,(int)local_3a8,PF_PART4(local_3a8, 4));
  recovered_10008698(&local_4a8,(undefined1 *)&local_1a0);
  recovered_10002e70(local_198);
  recovered_10002e70(local_80);
  recovered_10006dc0(&local_4c0,param_4);
  local_490 = local_4a8;
  uStack_480 = uStack_498;
  local_488 = local_4a0;
  local_4a8 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  local_478 = local_4c0;
  uStack_468 = uStack_4b0;
  local_470 = local_4b8;
  local_4c0 = (void *)0x0;
  uStack_4b0 = 0;
  local_4b8 = 0;
  local_460 = 0;
  recovered_100064b8(alStack_458,((uintptr_t)pf_module_state+0x18e9U));
  uStack_430 = 0;
  local_438 = 0;
  local_440 = 0;
  local_428 = (long *)0x0;
  lStack_418 = 0;
  local_420 = 0;
  recovered_10007268(alStack_458,&local_478);
  uStack_190 = 0;
  local_198 = (void *)0x0;
  local_1a0 = 0;
  local_188 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_160 = 0;
  local_168 = 0;
  local_170 = (undefined8 *)0x0;
  local_158 = 0;
  uStack_148 = 0;
  local_150 = 0;
  recovered_10000d70(auStack_140,0x81);
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  local_a0 = 0xffffffffffffffff;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (local_420 == lStack_418) {
    uVar18 = 4;
    if (local_420 != 0) {
      uVar18 = local_420 << 1;
    }
    recovered_10008b50((long *)&local_428,uVar18);
  }
  recovered_10008be0((long)(local_428 + local_420 * 0x24),(long)&local_1a0);
  local_420 = local_420 + 1;
  recovered_10008ab8((long)&local_1a0);
  recovered_10008b14(local_428,((uintptr_t)pf_module_state+0x18f2U));
  recovered_10002e70(local_4c0);
  recovered_10008584(&local_4a8);
  while (recovered_10009154(&local_490), *(char *)(local_490 + local_460 * 0x28) != '*') {
    recovered_10009188(&local_490,0);
  }
  recovered_1000983c((long)alStack_458);
  recovered_10006dc0(&local_1a0,alStack_458);
  recovered_1000bd14(&local_188,&local_440);
  uStack_160 = 0;
  local_170 = (undefined8 *)0x0;
  local_168 = 0;
  recovered_10008b50((long *)&local_170,local_420);
  lVar15 = 0;
  for (uVar18 = 0; uVar18 < local_420; uVar18 = uVar18 + 1) {
    recovered_1000a258((long)local_170 + lVar15,(long)local_428 + lVar15);
    lVar15 = lVar15 + 0x120;
  }
  local_168 = local_420;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008f24(param_1,&DAT_10016558,4);
  recovered_10008f3c(param_1,1);
  recovered_10008f54(param_1,&local_1a0);
  recovered_10008f3c(param_1,(undefined4)local_180);
  plVar13 = (long *)(local_188 + 0x20);
  lVar15 = local_180 * 0x28;
  do {
    if (lVar15 == 0) {
      recovered_10008f3c(param_1,(undefined4)local_168);
      puVar20 = local_170 + local_168 * 0x24;
      for (puVar16 = local_170; puVar16 != puVar20; puVar16 = puVar16 + 0x24) {
        recovered_10008f54(param_1,puVar16);
        recovered_10008f3c(param_1,*(undefined4 *)(puVar16 + 4));
        puVar4 = (undefined8 *)puVar16[3];
        for (lVar15 = puVar16[4] * 0x18; lVar15 != 0; lVar15 = lVar15 + -0x18) {
          recovered_10008f54(param_1,puVar4);
          puVar4 = puVar4 + 3;
        }
        recovered_10008f3c(param_1,*(undefined4 *)(puVar16 + 7));
        puVar1 = (undefined1 *)puVar16[6];
        for (lVar15 = puVar16[7] << 4; lVar15 != 0; lVar15 = lVar15 + -0x10) {
          recovered_10008f90(param_1,*puVar1);
          recovered_10008fb0(param_1,*(undefined4 *)(puVar1 + 4));
          recovered_10008fb0(param_1,*(undefined4 *)(puVar1 + 8));
          recovered_10008f3c(param_1,*(undefined4 *)(puVar1 + 0xc));
          puVar1 = puVar1 + 0x10;
        }
      }
      recovered_100085e0((long)&local_1a0);
      recovered_10008648((long)&local_490);
      recovered_10008674((long)&local_3e0);
      return;
    }
    recovered_10008f90(param_1,(char)plVar13[-4]);
    switch((uintptr_t)((char)plVar13[-4])) {
    case '\0':
      break;
    case '\x01':
      if (*plVar13 != 1) goto LAB_10005a9c;
      local_80 = (void *)plVar13[-3];
      recovered_10008f24(param_1,(undefined1 *)&local_80,8);
      break;
    case '\x02':
      if (*plVar13 != 2) goto LAB_10005a9c;
      local_80 = (void *)plVar13[-3];
      recovered_10008f24(param_1,(undefined1 *)&local_80,8);
      break;
    case '\x03':
      if (*plVar13 != 3) goto LAB_10005a9c;
      recovered_10008f90(param_1,(char)plVar13[-3]);
      break;
    case '\x04':
      if (*plVar13 != 4) goto LAB_10005a9c;
      recovered_10008f54(param_1,plVar13 + -3);
      break;
    default:
      plVar13 = recovered_100064b8((long *)&local_80,((uintptr_t)pf_module_state+0x18f9U));
      recovered_10008790(plVar13);
LAB_10005a9c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10005aa0);
      (*pcVar11)();
    }
    plVar13 = plVar13 + 5;
    lVar15 = lVar15 + -0x28;
  } while( true );
}

#undef DAT_10016558
#undef DAT_10017864
#undef DAT_10017a3b
#undef DAT_10017a3f
#undef DAT_10017afd
#undef DAT_10017b00
#undef DAT_10017b02
#undef DAT_10017b05
#undef DAT_10017b07
#undef DAT_10017b0a
#undef DAT_10017b0c
#undef DAT_10017b0f
#undef DAT_10017b9b
#undef DAT_10017ba4
#undef DAT_10017ba9
#undef DAT_10017bb3
#undef DAT_10017bbe
#undef DAT_10017bc3
#undef DAT_10017bc6
#undef DAT_10017bca
#undef DAT_10017bcd
#undef str_10017a44
#undef str_10017b9e
#undef str_10017bad
#undef str_10017bb7
#undef alStack_1d0
#undef uStack_190
#undef uStack_178
#undef uStack_160
#undef auStack_140
#undef uStack_148
#undef uStack_b0
#undef uStack_88
#undef uStack_70
#undef local_4c0
#undef local_4b8
#undef local_4a8
#undef local_4a0
#undef local_490
#undef local_488
#undef local_478
#undef local_470
#undef local_460
#undef local_440
#undef local_438
#undef local_428
#undef local_420
#undef local_410
#undef local_408
#undef local_3f8
#undef local_3f0
#undef local_3e0
#undef local_3d8
#undef local_3c8
#undef local_3c0
#undef local_3b0
#undef local_3a8
#undef local_3a0
#undef local_398
#undef local_380
#undef local_368
#undef local_350
#undef local_338
#undef local_320
#undef local_308
#undef local_2f0
#undef local_2d8
#undef local_2c0
#undef local_2a8
#undef local_290
#undef local_278
#undef local_260
#undef local_248
#undef local_230
#undef local_218
#undef local_200
#undef local_1e8
#undef local_1b8
#undef local_1a0
#undef local_198
#undef local_188
#undef local_180
#undef local_170
#undef local_168
#undef local_158
#undef uStack_4b0
#undef local_150
#undef local_b8
#undef local_a8
#undef local_a0
#undef local_98
#undef uStack_498
#undef local_90
#undef uStack_480
#undef local_80
#undef local_78
#undef uStack_468
#undef alStack_458
#undef uStack_430
#undef lStack_418
#undef uStack_400
#undef uStack_3e8
#undef uStack_3d0
#undef uStack_3b8

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_98 (*(long (*)[3])(frame + 16))
#define lStack_70 (*(long *)(frame + 56))
#define auStack_80 (*(undefined8 (*)[2])(frame + 40))
#define pvStack_58 (*(void * *)(frame + 80))
#define bStack_68 (*(byte *)(frame + 64))
#define lStack_50 (*(long *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e38
 */

void recovered_10005e38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4)

{
  unsigned char frame[200] = {0};

  char *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;

  recovered_100047ac((long *)&pvStack_58,*param_1,param_2,param_4);
  pcVar1 = &DAT_10017864;
  if ((char *)*param_3 != (char *)0x0) {
    pcVar1 = (char *)*param_3;
  }
  recovered_1000bdb0(auStack_80,pcVar1,4);
  if ((lStack_70 == 0) || ((bStack_68 & 1) == 0)) {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000403c(alStack_98,((uintptr_t)pf_module_state+0x1ab7U),param_3);
    recovered_10008940(puVar3,alStack_98);
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10005f38);
    (*pcVar2)();
  }
  if (lStack_50 != 0) {
    recovered_1000bfc8(&lStack_70,(long)pvStack_58,lStack_50);
  }
  recovered_1000be34(&lStack_70);
  lStack_50 = 0;
  recovered_10002e70(pvStack_58);
  return;
}

#undef DAT_10017864
#undef LAB_1001c050
#undef alStack_98
#undef lStack_70
#undef auStack_80
#undef pvStack_58
#undef bStack_68
#undef lStack_50

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define local_70 (*(long *)(frame + 56))
#define alStack_98 (*(long (*)[3])(frame + 16))
#define local_68 (*(byte *)(frame + 64))
#define local_58 (*(void * *)(frame + 80))
#define local_50 (*(long *)(frame + 88))
#define auStack_80 (*(undefined8 (*)[2])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e40
 */

undefined8
recovered_10005e40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char frame[200] = {0};

  char *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;

  recovered_100047ac((long *)&local_58,param_1,param_2,param_4);
  pcVar1 = &DAT_10017864;
  if ((char *)*param_3 != (char *)0x0) {
    pcVar1 = (char *)*param_3;
  }
  recovered_1000bdb0(auStack_80,pcVar1,4);
  if ((local_70 == 0) || ((local_68 & 1) == 0)) {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000403c(alStack_98,((uintptr_t)pf_module_state+0x1ab7U),param_3);
    recovered_10008940(puVar3,alStack_98);
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10005f38);
    (*pcVar2)();
  }
  if (local_50 != 0) {
    recovered_1000bfc8(&local_70,(long)local_58,local_50);
  }
  recovered_1000be34(&local_70);
  local_50 = 0;
  recovered_10002e70(local_58);
  return 1;
}

#undef DAT_10017864
#undef LAB_1001c050
#undef local_70
#undef alStack_98
#undef local_68
#undef local_58
#undef local_50
#undef auStack_80

#define pvStack_48 (*(void * *)(frame + 16))
#define uStack_40 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fe8
 */

void recovered_10005fe8(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2)

{
  unsigned char frame[120] = {0};

  char *pcVar1;

  pcVar1 = (char *)*param_2;
  recovered_100047ac((long *)&pvStack_48,pcVar1,in_x1,in_x2);
  recovered_100061e0(in_x8,pcVar1,(long *)&pvStack_48);
  uStack_40 = 0;
  recovered_10002e70(pvStack_48);
  return;
}

#undef pvStack_48
#undef uStack_40

#define local_48 (*(void * *)(frame + 16))
#define local_40 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

void recovered_10005ff0(undefined1 *param_1,char *param_2,undefined8 *in_x1,undefined8 *in_x2)

{
  unsigned char frame[120] = {0};


  recovered_100047ac((long *)&local_48,param_2,in_x1,in_x2);
  recovered_100061e0(param_1,param_2,(long *)&local_48);
  local_40 = 0;
  recovered_10002e70(local_48);
  return;
}

#undef local_48
#undef local_40

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define bStack_40 (*(byte *)(frame + 88))
#define pvStack_70 (*(void * *)(frame + 40))
#define apvStack_88 (*(void * (*)[3])(frame + 16))
#define uStack_60 (*(undefined8 *)(frame + 56))
#define uStack_68 (*(undefined8 *)(frame + 48))
#define lStack_48 (*(long *)(frame + 80))
#define auStack_58 (*(undefined8 (*)[2])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060bc
 */

void recovered_100060bc(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1)

{
  unsigned char frame[184] = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = (char *)*param_2;
  pcVar1 = &DAT_10017864;
  if ((char *)*in_x1 != (char *)0x0) {
    pcVar1 = (char *)*in_x1;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((lStack_48 == 0) || ((bStack_40 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x28) = 0;
    recovered_1000403c((long *)(in_x8 + 0x30),((uintptr_t)pf_module_state+0x1b01U),in_x1);
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    pvStack_70 = (void *)0x0;
    recovered_1000c028((long *)&pvStack_70,lStack_48);
    recovered_10006dc0(apvStack_88,&pvStack_70);
    recovered_10005ff0(in_x8,pcVar2,apvStack_88,in_x1);
    recovered_10002e70(apvStack_88[0]);
    recovered_10002e70(pvStack_70);
  }
  recovered_1000be34(&lStack_48);
  return;
}

#undef DAT_10017864
#undef bStack_40
#undef pvStack_70
#undef apvStack_88
#undef uStack_60
#undef uStack_68
#undef lStack_48
#undef auStack_58

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define local_88 (*(void * (*)[3])(frame + 16))
#define local_70 (*(void * *)(frame + 40))
#define local_68 (*(undefined8 *)(frame + 48))
#define local_48 (*(long *)(frame + 80))
#define local_40 (*(byte *)(frame + 88))
#define uStack_60 (*(undefined8 *)(frame + 56))
#define auStack_58 (*(undefined8 (*)[2])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060c4
 */

void recovered_100060c4(undefined1 *param_1,char *param_2,undefined8 *param_3)

{
  unsigned char frame[184] = {0};

  char *pcVar1;

  pcVar1 = &DAT_10017864;
  if ((char *)*param_3 != (char *)0x0) {
    pcVar1 = (char *)*param_3;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((local_48 == 0) || ((local_40 & 1) == 0)) {
    *param_1 = 0;
    param_1[8] = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    recovered_1000403c((long *)(param_1 + 0x30),((uintptr_t)pf_module_state+0x1b01U),param_3);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_70 = (void *)0x0;
    recovered_1000c028((long *)&local_70,local_48);
    recovered_10006dc0(local_88,&local_70);
    recovered_10005ff0(param_1,param_2,local_88,param_3);
    recovered_10002e70(local_88[0]);
    recovered_10002e70(local_70);
  }
  recovered_1000be34(&local_48);
  return;
}

#undef DAT_10017864
#undef local_88
#undef local_70
#undef local_68
#undef local_48
#undef local_40
#undef uStack_60
#undef auStack_58

#define alStack_40 (*(long (*)[2])(frame + 88))
#define auStack_88 (*(undefined1 (*)[72])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061d8
 */

void recovered_100061d8(undefined1 *in_x8,undefined8 *param_2,long *in_x1)

{
  unsigned char frame[184] = {0};

  char *pcVar1;

  pcVar1 = (char *)*param_2;
  recovered_1000c1e8((long)auStack_88,in_x1);
  recovered_1000c168(alStack_40,(long)auStack_88);
  recovered_100085e0((long)auStack_88);
  *in_x8 = 1;
  recovered_1000c644(in_x8 + 8,pcVar1,alStack_40,0,0,0);
  *(undefined8 *)(in_x8 + 0x38) = 0;
  *(undefined8 *)(in_x8 + 0x40) = 0;
  *(undefined8 *)(in_x8 + 0x30) = 0;
  recovered_100073a4(alStack_40);
  return;
}

#undef alStack_40
#undef auStack_88

#define alStack_40 (*(long (*)[2])(frame + 88))
#define auStack_88 (*(undefined1 (*)[72])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061e0
 */

void recovered_100061e0(undefined1 *param_1,char *param_2,long *param_3)

{
  unsigned char frame[184] = {0};


  recovered_1000c1e8((long)auStack_88,param_3);
  recovered_1000c168(alStack_40,(long)auStack_88);
  recovered_100085e0((long)auStack_88);
  *param_1 = 1;
  recovered_1000c644(param_1 + 8,param_2,alStack_40,0,0,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  recovered_100073a4(alStack_40);
  return;
}

#undef alStack_40
#undef auStack_88

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define pvStack_70 (*(void * *)(frame + 16))
#define auStack_58 (*(undefined8 (*)[2])(frame + 40))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define bStack_40 (*(byte *)(frame + 64))
#define lStack_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062ec
 */

void recovered_100062ec(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1)

{
  unsigned char frame[160] = {0};

  char *pcVar1;
  char *pcVar2;
  ulong uVar3;

  pcVar2 = (char *)*param_2;
  pcVar1 = &DAT_10017864;
  if ((char *)*in_x1 != (char *)0x0) {
    pcVar1 = (char *)*in_x1;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((lStack_48 == 0) || ((bStack_40 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x28) = 0;
    recovered_1000403c((long *)(in_x8 + 0x30),((uintptr_t)pf_module_state+0x211aU),in_x1);
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    pvStack_70 = (void *)0x0;
    recovered_1000fdc8(&lStack_48,0,2);
    uVar3 = recovered_1000fe18(&lStack_48);
    recovered_1000fdc8(&lStack_48,0,0);
    if (0 < (long)uVar3) {
      recovered_10007f30((long *)&pvStack_70,uVar3);
      recovered_1000fe58(&lStack_48,(long)pvStack_70,uVar3);
    }
    recovered_100061e0(in_x8,pcVar2,(long *)&pvStack_70);
    uStack_68 = 0;
    recovered_10002e70(pvStack_70);
  }
  recovered_1000be34(&lStack_48);
  return;
}

#undef DAT_10017864
#undef uStack_68
#undef pvStack_70
#undef auStack_58
#undef uStack_60
#undef bStack_40
#undef lStack_48

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define local_70 (*(void * *)(frame + 16))
#define local_68 (*(undefined8 *)(frame + 24))
#define local_48 (*(long *)(frame + 56))
#define auStack_58 (*(undefined8 (*)[2])(frame + 40))
#define local_40 (*(byte *)(frame + 64))
#define uStack_60 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062f4
 */

void recovered_100062f4(undefined1 *param_1,char *param_2,undefined8 *param_3)

{
  unsigned char frame[160] = {0};

  char *pcVar1;
  ulong uVar2;

  pcVar1 = &DAT_10017864;
  if ((char *)*param_3 != (char *)0x0) {
    pcVar1 = (char *)*param_3;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((local_48 == 0) || ((local_40 & 1) == 0)) {
    *param_1 = 0;
    param_1[8] = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    recovered_1000403c((long *)(param_1 + 0x30),((uintptr_t)pf_module_state+0x211aU),param_3);
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_70 = (void *)0x0;
    recovered_1000fdc8(&local_48,0,2);
    uVar2 = recovered_1000fe18(&local_48);
    recovered_1000fdc8(&local_48,0,0);
    if (0 < (long)uVar2) {
      recovered_10007f30((long *)&local_70,uVar2);
      recovered_1000fe58(&local_48,(long)local_70,uVar2);
    }
    recovered_100061e0(param_1,param_2,(long *)&local_70);
    local_68 = 0;
    recovered_10002e70(local_70);
  }
  recovered_1000be34(&local_48);
  return;
}

#undef DAT_10017864
#undef local_70
#undef local_68
#undef local_48
#undef auStack_58
#undef local_40
#undef uStack_60

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define pvStack_70 (*(void * *)(frame + 16))
#define auStack_58 (*(undefined8 (*)[2])(frame + 40))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define bStack_40 (*(byte *)(frame + 64))
#define lStack_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006438
 */

void recovered_10006438(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1)

{
  unsigned char frame[160] = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;

  pcVar3 = (char *)*param_2;
  pcVar1 = &DAT_10017864;
  if ((char *)*in_x1 != (char *)0x0) {
    pcVar1 = (char *)*in_x1;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((lStack_48 == 0) || ((bStack_40 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x28) = 0;
    recovered_1000403c((long *)(in_x8 + 0x30),((uintptr_t)pf_module_state+0x211aU),in_x1);
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    pvStack_70 = (void *)0x0;
    recovered_1000fdc8(&lStack_48,0,2);
    uVar2 = recovered_1000fe18(&lStack_48);
    recovered_1000fdc8(&lStack_48,0,0);
    if (0 < (long)uVar2) {
      recovered_10007f30((long *)&pvStack_70,uVar2);
      recovered_1000fe58(&lStack_48,(long)pvStack_70,uVar2);
    }
    recovered_100061e0(in_x8,pcVar3,(long *)&pvStack_70);
    uStack_68 = 0;
    recovered_10002e70(pvStack_70);
  }
  recovered_1000be34(&lStack_48);
  return;
}

#undef DAT_10017864
#undef uStack_68
#undef pvStack_70
#undef auStack_58
#undef uStack_60
#undef bStack_40
#undef lStack_48

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10017a3b
#define DAT_10017a3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1753U)))
#undef DAT_10017a3f
#define DAT_10017a3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1757U)))
#undef str_10017a44
#define str_10017a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175cU)))
#define pvStack_68 (*(void * *)(frame + 16))
#define uStack_58 (*(undefined8 *)(frame + 32))
#define uStack_60 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006440
 */

long * recovered_10006440(long *param_1,undefined1 *param_2)

{
  unsigned char frame[152] = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x30;
  uint128 auVar9;

  switch((uintptr_t)(*param_2)) {
  default:
    pcVar5 = &DAT_10017a3b;
    goto LAB_10003d24;
  case 1:
    if (*(long *)(param_2 + 0x20) == 1) {
      auVar9 = recovered_100069c0((byte *)((long)pf_current_sp() + -0x40),
                                  (byte *)((long)pf_current_sp() + -0x20),*(ulong *)(param_2 + 8)
                                  ,10);
      plVar6 = PF_PART8(auVar9, 0);
      if (PF_PART4(auVar9, 8) == 0) {
        plVar6 = recovered_10006704(param_1,(long)pf_current_sp() + -0x40,
                                    (long)plVar6 - ((long)pf_current_sp() + -0x40));
      }
      else {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      return plVar6;
    }
    break;
  case 2:
    uStack_60 = 0;
    uStack_58 = 0;
    pvStack_68 = (void *)0x0;
    if (*(long *)(param_2 + 0x20) == 2) {
      recovered_10003f80(*(double *)(param_2 + 8),(long *)&pvStack_68);
      recovered_10006dc0(param_1,&pvStack_68);
LAB_10003d74:
      recovered_10002e70(pvStack_68);
      return unaff_x30;
    }
    break;
  case 3:
    if (*(long *)(param_2 + 0x20) != 3) break;
    pcVar5 = &DAT_10017a3f;
    if (param_2[8] == '\0') {
      pcVar5 = str_10017a44;
    }
LAB_10003d24:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar4 = recovered_100065e4((long)pcVar5);
    recovered_100064fc(param_1,(long)pcVar5,uVar4);
    return param_1;
  case 4:
    if (*(long *)(param_2 + 0x20) == 4) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      puVar1 = &DAT_10017864;
      if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(param_2 + 8);
      }
      recovered_100064fc(param_1,(long)puVar1,*(ulong *)(param_2 + 0x10));
      return param_1;
    }
    break;
  case 5:
    if (*(long *)(param_2 + 0x20) == 5) {
      plVar6 = *(long **)(param_2 + 0x10);
      recovered_100064b8(param_1,((uintptr_t)pf_module_state+0x1762U));
      lVar8 = 0;
      for (uVar4 = 1; uVar4 - 1 < (ulong)plVar6[1]; uVar4 = uVar4 + 1) {
        recovered_10003c6c((long *)&pvStack_68,(undefined1 *)(*plVar6 + lVar8));
        recovered_10003fd8(param_1,&pvStack_68);
        recovered_10002e70(pvStack_68);
        if (uVar4 < (ulong)plVar6[1]) {
          recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x1764U));
        }
        lVar8 = lVar8 + 0x28;
      }
      recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x1767U));
      return unaff_x30;
    }
    break;
  case 6:
    if (*(long *)(param_2 + 0x20) == 6) {
      puVar7 = *(undefined8 **)(param_2 + 0x10);
      recovered_100064b8(param_1,((uintptr_t)pf_module_state+0x1769U));
      puVar2 = (undefined8 *)*puVar7;
      uVar4 = 1;
      for (lVar8 = puVar7[1] << 6; lVar8 != 0; lVar8 = lVar8 + -0x40) {
        recovered_10003fd8(param_1,puVar2);
        recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x176bU));
        recovered_10003c6c((long *)&pvStack_68,(undefined1 *)(puVar2 + 3));
        recovered_10003fd8(param_1,&pvStack_68);
        recovered_10002e70(pvStack_68);
        if (uVar4 < (ulong)puVar7[1]) {
          recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x1764U));
        }
        puVar2 = puVar2 + 8;
        uVar4 = uVar4 + 1;
      }
      recovered_10006ee4(param_1,((uintptr_t)pf_module_state+0x176eU));
      return unaff_x30;
    }
    break;
  case 7:
    if (*(long *)(param_2 + 0x20) == 7) {
      recovered_1000403c((long *)&pvStack_68,((uintptr_t)pf_module_state+0x1770U),
                         (undefined8 *)(*(long *)(param_2 + 0x10) + 0x20));
      recovered_10003ff0(param_1,&pvStack_68,((uintptr_t)pf_module_state+0x1767U));
      goto LAB_10003d74;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10003ee4);
  (*pcVar3)();
}

#undef DAT_10017864
#undef DAT_10017a3b
#undef DAT_10017a3f
#undef str_10017a44
#undef pvStack_68
#undef uStack_58
#undef uStack_60

#define local_28 (*(long * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006444
 */

void recovered_10006444(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[88] = {0};


  local_28 = (long *)*param_3;
  *param_3 = 0;
  recovered_10004528(param_1,param_2,&local_28);
  if (local_28 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10006484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_28 + 8))();
  return;
}

#undef local_28

#define pvStack_48 (*(void * *)(frame + 16))
#define uStack_40 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a4
 */

void recovered_100064a4(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2)

{
  unsigned char frame[120] = {0};

  char *pcVar1;

  pcVar1 = (char *)*param_2;
  recovered_100047ac((long *)&pvStack_48,pcVar1,in_x1,in_x2);
  recovered_100061e0(in_x8,pcVar1,(long *)&pvStack_48);
  uStack_40 = 0;
  recovered_10002e70(pvStack_48);
  return;
}

#undef pvStack_48
#undef uStack_40

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define bStack_40 (*(byte *)(frame + 88))
#define pvStack_70 (*(void * *)(frame + 40))
#define apvStack_88 (*(void * (*)[3])(frame + 16))
#define uStack_60 (*(undefined8 *)(frame + 56))
#define uStack_68 (*(undefined8 *)(frame + 48))
#define lStack_48 (*(long *)(frame + 80))
#define auStack_58 (*(undefined8 (*)[2])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a8
 */

void recovered_100064a8(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1)

{
  unsigned char frame[184] = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = (char *)*param_2;
  pcVar1 = &DAT_10017864;
  if ((char *)*in_x1 != (char *)0x0) {
    pcVar1 = (char *)*in_x1;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((lStack_48 == 0) || ((bStack_40 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x28) = 0;
    recovered_1000403c((long *)(in_x8 + 0x30),((uintptr_t)pf_module_state+0x1b01U),in_x1);
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    pvStack_70 = (void *)0x0;
    recovered_1000c028((long *)&pvStack_70,lStack_48);
    recovered_10006dc0(apvStack_88,&pvStack_70);
    recovered_10005ff0(in_x8,pcVar2,apvStack_88,in_x1);
    recovered_10002e70(apvStack_88[0]);
    recovered_10002e70(pvStack_70);
  }
  recovered_1000be34(&lStack_48);
  return;
}

#undef DAT_10017864
#undef bStack_40
#undef pvStack_70
#undef apvStack_88
#undef uStack_60
#undef uStack_68
#undef lStack_48
#undef auStack_58

#define alStack_40 (*(long (*)[2])(frame + 88))
#define auStack_88 (*(undefined1 (*)[72])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064ac
 */

void recovered_100064ac(undefined1 *in_x8,undefined8 *param_2,long *in_x1)

{
  unsigned char frame[184] = {0};

  char *pcVar1;

  pcVar1 = (char *)*param_2;
  recovered_1000c1e8((long)auStack_88,in_x1);
  recovered_1000c168(alStack_40,(long)auStack_88);
  recovered_100085e0((long)auStack_88);
  *in_x8 = 1;
  recovered_1000c644(in_x8 + 8,pcVar1,alStack_40,0,0,0);
  *(undefined8 *)(in_x8 + 0x38) = 0;
  *(undefined8 *)(in_x8 + 0x40) = 0;
  *(undefined8 *)(in_x8 + 0x30) = 0;
  recovered_100073a4(alStack_40);
  return;
}

#undef alStack_40
#undef auStack_88

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define pvStack_70 (*(void * *)(frame + 16))
#define auStack_58 (*(undefined8 (*)[2])(frame + 40))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define bStack_40 (*(byte *)(frame + 64))
#define lStack_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b0
 */

void recovered_100064b0(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1)

{
  unsigned char frame[160] = {0};

  char *pcVar1;
  char *pcVar2;
  ulong uVar3;

  pcVar2 = (char *)*param_2;
  pcVar1 = &DAT_10017864;
  if ((char *)*in_x1 != (char *)0x0) {
    pcVar1 = (char *)*in_x1;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((lStack_48 == 0) || ((bStack_40 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x28) = 0;
    recovered_1000403c((long *)(in_x8 + 0x30),((uintptr_t)pf_module_state+0x211aU),in_x1);
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    pvStack_70 = (void *)0x0;
    recovered_1000fdc8(&lStack_48,0,2);
    uVar3 = recovered_1000fe18(&lStack_48);
    recovered_1000fdc8(&lStack_48,0,0);
    if (0 < (long)uVar3) {
      recovered_10007f30((long *)&pvStack_70,uVar3);
      recovered_1000fe58(&lStack_48,(long)pvStack_70,uVar3);
    }
    recovered_100061e0(in_x8,pcVar2,(long *)&pvStack_70);
    uStack_68 = 0;
    recovered_10002e70(pvStack_70);
  }
  recovered_1000be34(&lStack_48);
  return;
}

#undef DAT_10017864
#undef uStack_68
#undef pvStack_70
#undef auStack_58
#undef uStack_60
#undef bStack_40
#undef lStack_48

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define pvStack_70 (*(void * *)(frame + 16))
#define auStack_58 (*(undefined8 (*)[2])(frame + 40))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define bStack_40 (*(byte *)(frame + 64))
#define lStack_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b4
 */

void recovered_100064b4(undefined1 *in_x8,undefined8 *param_2,undefined8 *in_x1)

{
  unsigned char frame[160] = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;

  pcVar3 = (char *)*param_2;
  pcVar1 = &DAT_10017864;
  if ((char *)*in_x1 != (char *)0x0) {
    pcVar1 = (char *)*in_x1;
  }
  recovered_1000c0bc(auStack_58,pcVar1,4);
  if ((lStack_48 == 0) || ((bStack_40 & 1) == 0)) {
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x28) = 0;
    recovered_1000403c((long *)(in_x8 + 0x30),((uintptr_t)pf_module_state+0x211aU),in_x1);
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    pvStack_70 = (void *)0x0;
    recovered_1000fdc8(&lStack_48,0,2);
    uVar2 = recovered_1000fe18(&lStack_48);
    recovered_1000fdc8(&lStack_48,0,0);
    if (0 < (long)uVar2) {
      recovered_10007f30((long *)&pvStack_70,uVar2);
      recovered_1000fe58(&lStack_48,(long)pvStack_70,uVar2);
    }
    recovered_100061e0(in_x8,pcVar3,(long *)&pvStack_70);
    uStack_68 = 0;
    recovered_10002e70(pvStack_70);
  }
  recovered_1000be34(&lStack_48);
  return;
}

#undef DAT_10017864
#undef uStack_68
#undef pvStack_70
#undef auStack_58
#undef uStack_60
#undef bStack_40
#undef lStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064b8
 */

long * recovered_100064b8(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_100065e4(param_2);
  recovered_100064fc(param_1,param_2,uVar1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064fc
 */

void recovered_100064fc(long *param_1,long param_2,ulong param_3)

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
  uVar2 = recovered_10006608(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10006654(param_1);
    }
    else {
      recovered_1000668c(param_1,uVar1);
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
    recovered_10006704(&local_50,*param_1 + local_38,uVar1);
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
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065e4
 */

long recovered_100065e4(long param_1)

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
 * Address: 0x10006608
 */

undefined8 recovered_10006608(long *param_1,long param_2,long *param_3)

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
 * Address: 0x10006654
 */

void recovered_10006654(long *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_10006738(0);
    *param_1 = uVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000668c
 */

void recovered_1000668c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10006738(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)(uVar1 + param_1[1]) = 0;
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006704
 */

undefined8 * recovered_10006704(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_100064fc(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006738
 */

ulonglong recovered_10006738(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002e3c(param_1 + 1);
  *puVar1 = 0;
  return (ulonglong)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006754
 */

undefined8 * recovered_10006754(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000677c
 */

ulonglong recovered_1000677c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return (ulonglong)param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000679c
 */

undefined8 * recovered_1000679c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067c8
 */

long * recovered_100067c8(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100067f4(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067f4
 */

void recovered_100067f4(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x40;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x40;
    recovered_10006844(*param_1 + lVar1);
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006844
 */

void recovered_10006844(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000686c((long *)(param_1 + 0x20));
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000686c
 */

long * recovered_1000686c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000689c(param_1[3],param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000689c
 */

void recovered_1000689c(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 0) {
    return;
  }
  if (param_1 == 1) {
    return;
  }
  if (param_1 == 2) {
    return;
  }
  if (param_1 == 3) {
    return;
  }
  if (param_1 == 4) {
    recovered_10002e70((void *)*param_2);
    return;
  }
  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a8
 */

void recovered_100068a8(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 1) {
    return;
  }
  if (param_1 == 2) {
    return;
  }
  if (param_1 == 3) {
    return;
  }
  if (param_1 == 4) {
    recovered_10002e70((void *)*param_2);
    return;
  }
  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068b8
 */

void recovered_100068b8(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 2) {
    return;
  }
  if (param_1 == 3) {
    return;
  }
  if (param_1 == 4) {
    recovered_10002e70((void *)*param_2);
    return;
  }
  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c8
 */

void recovered_100068c8(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 3) {
    return;
  }
  if (param_1 == 4) {
    recovered_10002e70((void *)*param_2);
    return;
  }
  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068d8
 */

void recovered_100068d8(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 4) {
    recovered_10002e70((void *)*param_2);
    return;
  }
  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068ec
 */

void recovered_100068ec(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006900
 */

void recovered_10006900(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006914
 */

void recovered_10006914(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006928
 */

void recovered_10006928(long *param_1)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006990
 */

ulonglong recovered_10006990(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000679c((undefined8 *)(param_1 + 0x30));
  recovered_1000679c((undefined8 *)(param_1 + 0x18));
  recovered_100067f4((long *)param_1);
  recovered_10002e70(*(void **)param_1);
  return param_1;
}


#define abStack_42 (*(byte (*)[66])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c0
 */

uint128 recovered_100069c0(byte *param_1,byte *param_2,ulong param_3,uint param_4)

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

#undef DAT_10017840
#define DAT_10017840 (*(double *)(((uintptr_t)pf_module_state + 0x1558U)))
#undef DAT_10017acc
#define DAT_10017acc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e4U)))
#undef DAT_10017ad0
#define DAT_10017ad0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e8U)))
#undef DAT_10017ad4
#define DAT_10017ad4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ecU)))
#define local_58 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a8c
 */

void recovered_10006a8c(long *param_1,double param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;

  if (NAN(param_2)) {
    puVar3 = &DAT_10017acc;
  }
  else {
    if (0.0 <= param_2) {
      if (param_2 == 0.0) {
        bVar1 = 1.0 / param_2 < 0.0;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (param_2 == INFINITY) {
      puVar3 = &DAT_10017ad0;
    }
    else {
      if (param_2 != -INFINITY) {
        dVar7 = -param_2;
        if (!bVar1) {
          dVar7 = param_2;
        }
        uVar2 = (ulong)dVar7;
        dVar8 = pf_bits_double(NEON_ucvtf((long)dVar7));
        uVar4 = (ulong)(DAT_10017840 * (dVar7 - dVar8) + 0.5);
        uVar5 = uVar4 - 1000000;
        param_1[1] = 0;
        param_1[2] = 0;
        if (uVar4 < 1000000) {
          uVar5 = uVar4;
        }
        else {
          uVar2 = uVar2 + 1;
        }
        *param_1 = 0;
        if (bVar1) {
          recovered_10006c48(param_1,0x2d);
        }
        recovered_10006cac(local_58,uVar2);
        recovered_10003fd8(param_1,local_58);
        recovered_10002e70(local_58[0]);
        recovered_10006c48(param_1,0x2e);
        iVar6 = 6;
        uVar2 = 100000;
        do {
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = uVar5 / uVar2;
          }
          recovered_10006c48(param_1,(char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30);
          iVar6 = iVar6 + -1;
          uVar2 = uVar2 / 10;
        } while (iVar6 != 0);
        return;
      }
      puVar3 = &DAT_10017ad4;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar2 = recovered_100065e4((long)puVar3);
  recovered_100064fc(param_1,(long)puVar3,uVar2);
  return;
}

#undef DAT_10017840
#undef DAT_10017acc
#undef DAT_10017ad0
#undef DAT_10017ad4
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c48
 */

void recovered_10006c48(long *param_1,undefined1 param_2)

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
    recovered_1000668c(param_1,uVar1);
  }
  recovered_10006654(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#define auStack_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cac
 */

void recovered_10006cac(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] = {0};

  uint128 auVar1;

  auVar1 = recovered_10006d08((ulong)auStack_40,(ulong)(auStack_40 + 0x20),param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10006704(param_1,(long)auStack_40,PF_PART8(auVar1, 0) - (long)auStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef auStack_40

#define local_41 (*(byte (*)[65])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d08
 */

uint128 recovered_10006d08(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char frame[113] = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint128 auVar10;

  uVar5 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar5 = 1, param_1 <= param_2)) &&
     (0xffffffdc < param_4 - 0x25)) {
    uVar6 = (ulong)param_4;
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = param_3 / uVar6;
      }
      uVar7 = param_3 - uVar2 * uVar6;
      bVar3 = (byte)uVar7;
      bVar1 = bVar3 | 0x30;
      if (9 < uVar7) {
        bVar1 = bVar3 + 0x57;
      }
      uVar7 = uVar8 + 1;
      local_41[uVar8] = bVar1;
      bVar4 = uVar6 <= param_3;
      param_3 = uVar2;
    } while (bVar4);
    if (param_2 - param_1 < uVar7) {
      uVar5 = 2;
      param_1 = param_2;
    }
    else {
      pbVar9 = local_41 + uVar8 + 1;
      for (uVar6 = 0; pbVar9 = pbVar9 + -1, uVar7 != uVar6; uVar6 = uVar6 + 1) {
        *(byte *)(param_1 + uVar6) = *pbVar9;
      }
      uVar5 = 0;
      param_1 = param_1 + uVar7;
    }
  }
  PF_PART8(auVar10, 8) = uVar5;
  PF_PART8(auVar10, 0) = param_1;
  return auVar10;
}

#undef local_41

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dc0
 */

undefined8 * recovered_10006dc0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10017864;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100064fc(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10017864

#define local_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

long * recovered_10006e00(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10006608(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_1000668c(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_1000668c(param_1,uVar3 + lVar5);
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

#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ee4
 */

void recovered_10006ee4(long *param_1,long param_2)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;

  uVar2 = recovered_100065e4(param_2);
  if ((param_2 != 0) && (uVar2 != 0)) {
    lStack_38 = 0;
    uVar1 = recovered_10006608(param_1,param_2,&lStack_38);
    lVar6 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_1000668c(param_1,lVar6 + uVar2);
      for (uVar4 = 0; uVar2 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
    }
    else {
      uVar4 = lVar6 - lStack_38;
      if (uVar2 <= (ulong)(lVar6 - lStack_38)) {
        uVar4 = uVar2;
      }
      recovered_1000668c(param_1,uVar4 + lVar6);
      lVar3 = 0;
      for (uVar5 = uVar4; uVar2 = uVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)(*param_1 + lVar6) = *(undefined1 *)(*param_1 + lStack_38 + lVar3);
        lVar3 = lVar3 + 1;
        lVar6 = lVar6 + 1;
      }
    }
    lVar6 = param_1[1];
    param_1[1] = lVar6 + uVar2;
    *(undefined1 *)(*param_1 + lVar6 + uVar2) = 0;
  }
  return;
}

#undef lStack_38

#undef PTR_recovered_10004120_1001c078
#define PTR_recovered_10004120_1001c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f18
 */

undefined8 * recovered_10006f18(undefined8 *param_1,long in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_10004120_1001c078;
  recovered_100064b8(param_1 + 1,in_x1);
  return param_1;
}

#undef PTR_recovered_10004120_1001c078

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f4c
 */

void recovered_10006f4c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *buffer;

  buffer = recovered_10006f78(param_1);
  recovered_10000c54(buffer);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f60
 */

undefined1 * recovered_10006f60(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10017864;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  return puVar1;
}

#undef DAT_10017864

#undef PTR_recovered_10004120_1001c078
#define PTR_recovered_10004120_1001c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f78
 */

undefined8 * recovered_10006f78(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_10004120_1001c078;
  recovered_10006754(param_1 + 1);
  return param_1;
}

#undef PTR_recovered_10004120_1001c078

#define local_29 (*(undefined1 *)(frame + 16))
#define local_28 (*(undefined8 *)(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fac
 */

undefined8 recovered_10006fac(long param_1,undefined8 *param_2)

{
  unsigned char frame[89] = {0};

  long lVar1;

  lVar1 = recovered_10007480((long *)(param_1 + 0x50),param_2);
  if (lVar1 == *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x58) * 0x20) {
    local_28 = *(undefined8 *)(param_1 + 0xa8);
    recovered_100074b4((long *)(param_1 + 0x50),param_2,&local_28);
    recovered_10007544((long *)(param_1 + 0xa0));
    local_29 = 0;
    recovered_10007d18((long *)(param_1 + 0xb8),&local_29);
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x18);
  }
  return local_28;
}

#undef local_29
#undef local_28

#define local_31 (*(undefined1 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007028
 */

void recovered_10007028(long param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[97] = {0};


  if (*(ulong *)(param_1 + 0xa8) <= param_2) {
    recovered_10007e00((long *)(param_1 + 0xa0),param_2 + 1);
    local_31 = 0;
    recovered_10007eac((long *)(param_1 + 0xb8),param_2 + 1,&local_31);
  }
  recovered_1000715c((undefined1 *)(*(long *)(param_1 + 0xa0) + param_2 * 0x28),param_3);
  *(undefined1 *)(*(long *)(param_1 + 0xb8) + param_2) = 1;
  return;
}

#undef local_31

#undef PTR_DAT_1001c010
#define PTR_DAT_1001c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d28U)))
#define local_58 (*(undefined1 (*)[8])(frame + 16))
#define local_38 (*(undefined8 *)(frame + 48))
#define alStack_50 (*(long (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070a8
 */

long recovered_100070a8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[136] = {0};

  long lVar1;

  lVar1 = recovered_10007f98(param_1,param_2);
  if (lVar1 == *param_1 + param_1[1] * 0x40) {
    recovered_10007fcc((long)param_1);
    local_58[0] = 0;
    local_38 = 0;
    recovered_10007ffc(param_1,param_2,local_58);
    recovered_1000686c(alStack_50);
    recovered_10007b18(param_1 + 6,(undefined8 *)PTR_DAT_1001c010);
    recovered_10008078((long)param_1,param_1[1] + -1);
    lVar1 = *param_1 + param_1[1] * 0x40 + -0x40;
  }
  return lVar1 + 0x18;
}

#undef PTR_DAT_1001c010
#undef local_58
#undef local_38
#undef alStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000715c
 */

undefined1 * recovered_1000715c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10008374((long *)(param_1 + 8),(long *)(param_2 + 8));
  return param_1;
}


#undef PTR_recovered_10007328_1001c0a0
#define PTR_recovered_10007328_1001c0a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5db8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007188
 */

void recovered_10007188(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = recovered_10002e3c(0x38);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  recovered_100072ac((undefined2 *)puVar1);
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = recovered_10002e3c(0x20);
    puVar2[2] = 1;
    puVar2[1] = 1;
    *puVar2 = &PTR_recovered_10007328_1001c0a0;
    puVar2[3] = puVar1;
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}

#undef PTR_recovered_10007328_1001c0a0

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071cc
 */

bool recovered_100071cc(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10017864;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_100065e4((long)param_2);
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

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000721c
 */

long * recovered_1000721c(long *param_1,long *param_2)

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


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007268
 */

undefined8 * recovered_10007268(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_100064fc(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072ac
 */

void recovered_100072ac(undefined2 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}


#undef PTR_recovered_10007328_1001c0a0
#define PTR_recovered_10007328_1001c0a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5db8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072cc
 */

undefined8 * recovered_100072cc(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  if (param_2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = recovered_10002e3c(0x20);
    puVar1[2] = 1;
    puVar1[1] = 1;
    *puVar1 = &PTR_recovered_10007328_1001c0a0;
    puVar1[3] = param_2;
  }
  *param_1 = puVar1;
  param_1[1] = param_2;
  return param_1;
}

#undef PTR_recovered_10007328_1001c0a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007328
 */

void recovered_10007328(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000732c
 */

void recovered_1000732c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007330
 */

void recovered_10007330(long param_1)

{
  unsigned char frame[64] = {0};

  void *data;

  data = (void *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    data = (void *)recovered_10007360(*(long *)(param_1 + 0x18));
  }
  recovered_10002e70(data);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007360
 */

long recovered_10007360(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006754((undefined8 *)(param_1 + 0x20));
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  recovered_100073a4((long *)(param_1 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073a4
 */

long * recovered_100073a4(long *param_1)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007404
 */

bool recovered_10007404(char *param_1,long param_2,char *param_3,long param_4)

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
 * Address: 0x1000743c
 */

undefined8 * recovered_1000743c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  recovered_1000689c(param_1[3],param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = 7;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

long recovered_10007480(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_100075a4(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x20;
}


#undef PTR_DAT_1001c020
#define PTR_DAT_1001c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b4
 */

uint128 recovered_100074b4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;
  uint128 auVar3;

  lVar2 = recovered_10007480(param_1,param_2);
  bVar1 = lVar2 == *param_1 + param_1[1] * 0x20;
  if (bVar1) {
    recovered_100076bc((long)param_1);
    recovered_100076ec(param_1,param_2,param_3);
    recovered_10007b18(param_1 + 6,(undefined8 *)PTR_DAT_1001c020);
    recovered_10007768(param_1,param_1[1] + -1);
    lVar2 = *param_1 + param_1[1] * 0x20 + -0x20;
  }
  PF_PART1(auVar3,8) = bVar1;
  PF_PART8(auVar3, 0) = lVar2;
  PF_PART7(auVar3, 9) = 0;
  return auVar3;
}

#undef PTR_DAT_1001c020

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007544
 */

void recovered_10007544(long *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_10007b80(param_1,uVar1);
    lVar3 = param_1[1];
  }
  puVar2 = (undefined1 *)(*param_1 + lVar3 * 0x28);
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  param_1[1] = lVar3 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a4
 */

long recovered_100075a4(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  long *plVar3;
  long lVar4;

  if (param_1[4] == 0) {
    lVar4 = -1;
  }
  else {
    uVar1 = recovered_10007614((long)param_1,param_2);
    plVar3 = (long *)(param_1[3] + uVar1 * 8);
    while ((lVar4 = *plVar3, lVar4 != -1 &&
           (uVar2 = recovered_10007694((undefined8 *)(*param_1 + lVar4 * 0x20),param_2),
           (uVar2 & 1) == 0))) {
      plVar3 = (long *)(param_1[6] + lVar4 * 8);
    }
  }
  return lVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007614
 */

ulong recovered_10007614(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007644(param_1 + 0x48,param_2);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007644
 */

ulonglong recovered_10007644(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  long lVar2;
  ulong uVar3;

  lVar2 = param_2[1];
  pbVar1 = &DAT_10017864;
  if ((byte *)*param_2 != (byte *)0x0) {
    pbVar1 = (byte *)*param_2;
  }
  uVar3 = 0x14650fb0739d0383;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    uVar3 = (uVar3 ^ *pbVar1) * 0x100000001b3;
    pbVar1 = pbVar1 + 1;
  }
  return uVar3;
}

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000765c
 */

ulong recovered_1000765c(byte *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = 0x14650fb0739d0383;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (uVar1 ^ *param_1) * 0x100000001b3;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007694
 */

ulonglong recovered_10007694(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  ulonglong uVar6;

  lVar4 = param_1[1];
  pcVar3 = &DAT_10017864;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)*param_1;
  }
  pcVar5 = &DAT_10017864;
  if ((char *)*param_2 != (char *)0x0) {
    pcVar5 = (char *)*param_2;
  }
  if (lVar4 == param_2[1]) {
    do {
      uVar6 = (ulonglong)(lVar4 == 0);
      if (lVar4 == 0) {
        return 1;
      }
      cVar1 = *pcVar3;
      cVar2 = *pcVar5;
      lVar4 = lVar4 + -1;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

#undef DAT_10017864

#undef PTR_DAT_1001c020
#define PTR_DAT_1001c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076bc
 */

void recovered_100076bc(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;

  if (*(long *)(param_1 + 0x20) != 0 &&
      *(long *)(param_1 + 8) * 4 + 4U <= (ulong)(*(long *)(param_1 + 0x20) * 3)) {
    return;
  }
  uVar3 = *(long *)(param_1 + 8) * 2 + 2;
  uVar1 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar3 = recovered_10007818(uVar1);
  puVar2 = PTR_DAT_1001c020;
  recovered_10007810((long *)(param_1 + 0x18),uVar3,(undefined8 *)PTR_DAT_1001c020);
  recovered_10007810((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar2);
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x20); uVar3 = uVar3 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar3 * 8) = 0xffffffffffffffff;
  }
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
    recovered_10007768((long *)param_1,uVar3);
  }
  return;
}

#undef PTR_DAT_1001c020

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076ec
 */

long recovered_100076ec(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
    recovered_10007a08(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10007af0((undefined8 *)(*param_1 + lVar2 * 0x20),param_2,param_3);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + (lVar2 + 1) * 0x20 + -0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007768
 */

void recovered_10007768(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_10007614((long)param_1,(undefined8 *)(*param_1 + param_2 * 0x20));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


#undef PTR_DAT_1001c020
#define PTR_DAT_1001c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a8
 */

void recovered_100077a8(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  ulong uVar2;

  uVar2 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar2 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = recovered_10007818(uVar2);
  puVar1 = PTR_DAT_1001c020;
  recovered_10007810((long *)(param_1 + 0x18),uVar2,(undefined8 *)PTR_DAT_1001c020);
  recovered_10007810((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar1);
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar2 * 8) = 0xffffffffffffffff;
  }
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 8); uVar2 = uVar2 + 1) {
    recovered_10007768((long *)param_1,uVar2);
  }
  return;
}

#undef PTR_DAT_1001c020

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

void recovered_10007810(long *param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_10007984(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007984(param_1,param_2);
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
 * Address: 0x10007818
 */

ulong recovered_10007818(ulong param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007834
 */

void recovered_10007834(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_10007768((long *)param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007898
 */

void recovered_10007898(long *param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10007984(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007984(param_1,param_2);
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
 * Address: 0x1000791c
 */

void recovered_1000791c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007984(param_1,param_2);
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
 * Address: 0x10007984
 */

void recovered_10007984(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_100079f8(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)(uVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f8
 */

ulonglong recovered_100079f8(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 8;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a08
 */

void recovered_10007a08(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10007a9c(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10007aac((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_10006754((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x20;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a9c
 */

ulonglong recovered_10007a9c(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x20;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007aac
 */

void recovered_10007aac(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007ad4(param_1,param_2);
  *(undefined8 *)(uVar1 + 0x18) = param_2[3];
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ad4
 */

ulonglong recovered_10007ad4(undefined8 *param_1,undefined8 *param_2)

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
  return (ulonglong)param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007af0
 */

void recovered_10007af0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10006dc0(param_1,param_2);
  puVar1[3] = *param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b18
 */

long recovered_10007b18(long *param_1,undefined8 *param_2)

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
    recovered_10007984(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b80
 */

void recovered_10007b80(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10007c18(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10007c2c((undefined1 *)(uVar1 + lVar2),(undefined1 *)(*param_1 + lVar2));
      recovered_1000686c((long *)(*param_1 + lVar2 + 8));
      lVar2 = lVar2 + 0x28;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c18
 */

ulonglong recovered_10007c18(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x28;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c2c
 */

undefined1 * recovered_10007c2c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10007c58((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c58
 */

undefined8 * recovered_10007c58(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = param_2[3];
  param_1[3] = lVar1;
  recovered_10007c8c(lVar1,param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c8c
 */

void recovered_10007c8c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c98
 */

void recovered_10007c98(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cb0
 */

void recovered_10007cb0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cc8
 */

void recovered_10007cc8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ce0
 */

void recovered_10007ce0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d18
 */

long recovered_10007d18(long *param_1,undefined1 *param_2)

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
    recovered_10007d80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d80
 */

void recovered_10007d80(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10007df4(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007df4
 */

ulonglong recovered_10007df4(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c10(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

void recovered_10007e00(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    lVar3 = uVar2 * 0x28 + -0x20;
    for (; param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_1000686c((long *)(*param_1 + lVar3));
      lVar3 = lVar3 + -0x28;
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_10007b80(param_1,param_2);
    uVar2 = param_1[1];
    lVar3 = uVar2 * 0x28;
    while (uVar2 < param_2) {
      lVar1 = *param_1;
      *(undefined1 *)(lVar1 + lVar3) = 0;
      *(undefined8 *)((undefined1 *)(lVar1 + lVar3) + 0x20) = 0;
      uVar2 = uVar2 + 1;
      param_1[1] = uVar2;
      lVar3 = lVar3 + 0x28;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007eac
 */

void recovered_10007eac(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10007d80(param_1,param_2);
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
    recovered_10007d80(param_1,param_2);
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
 * Address: 0x10007f30
 */

void recovered_10007f30(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007d80(param_1,param_2);
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
 * Address: 0x10007f98
 */

long recovered_10007f98(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_100080b8(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x40;
}


#undef PTR_DAT_1001c010
#define PTR_DAT_1001c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fcc
 */

void recovered_10007fcc(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;

  if (*(long *)(param_1 + 0x20) != 0 &&
      *(long *)(param_1 + 8) * 4 + 4U <= (ulong)(*(long *)(param_1 + 0x20) * 3)) {
    return;
  }
  uVar3 = *(long *)(param_1 + 8) * 2 + 2;
  uVar1 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar3 = recovered_100081c0(uVar1);
  puVar2 = PTR_DAT_1001c010;
  recovered_10007810((long *)(param_1 + 0x18),uVar3,(undefined8 *)PTR_DAT_1001c010);
  recovered_10007810((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar2);
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x20); uVar3 = uVar3 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar3 * 8) = 0xffffffffffffffff;
  }
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
    recovered_10008078(param_1,uVar3);
  }
  return;
}

#undef PTR_DAT_1001c010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ffc
 */

long recovered_10007ffc(long *param_1,undefined8 *param_2,undefined1 *param_3)

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
    recovered_10008240(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000832c((undefined8 *)(*param_1 + lVar2 * 0x40),param_2,param_3);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + (lVar2 + 1) * 0x40 + -0x40;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008078
 */

void recovered_10008078(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_10008128(param_1,(undefined8 *)(*(long *)param_1 + param_2 * 0x40));
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x30) + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080b8
 */

long recovered_100080b8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  long *plVar3;
  long lVar4;

  if (param_1[4] == 0) {
    lVar4 = -1;
  }
  else {
    uVar1 = recovered_10008128((long)param_1,param_2);
    plVar3 = (long *)(param_1[3] + uVar1 * 8);
    while ((lVar4 = *plVar3, lVar4 != -1 &&
           (uVar2 = recovered_10007694((undefined8 *)(*param_1 + lVar4 * 0x40),param_2),
           (uVar2 & 1) == 0))) {
      plVar3 = (long *)(param_1[6] + lVar4 * 8);
    }
  }
  return lVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008128
 */

ulong recovered_10008128(long param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007644(param_1 + 0x48,in_x1);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


#undef PTR_DAT_1001c010
#define PTR_DAT_1001c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008158
 */

void recovered_10008158(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  ulong uVar2;

  uVar2 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar2 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = recovered_100081c0(uVar2);
  puVar1 = PTR_DAT_1001c010;
  recovered_10007810((long *)(param_1 + 0x18),uVar2,(undefined8 *)PTR_DAT_1001c010);
  recovered_10007810((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar1);
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar2 * 8) = 0xffffffffffffffff;
  }
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 8); uVar2 = uVar2 + 1) {
    recovered_10008078(param_1,uVar2);
  }
  return;
}

#undef PTR_DAT_1001c010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081c0
 */

ulong recovered_100081c0(ulong param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081dc
 */

void recovered_100081dc(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_10008078(param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008240
 */

void recovered_10008240(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_100082d4(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_100082e4((undefined8 *)(uVar1 + lVar2),*param_1 + lVar2);
      recovered_10006844(*param_1 + lVar2);
      lVar2 = lVar2 + 0x40;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d4
 */

ulonglong recovered_100082d4(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x40;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e4
 */

undefined8 * recovered_100082e4(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007ad4(param_1,(undefined8 *)param_2);
  recovered_10007c2c((undefined1 *)(uVar1 + 0x18),(undefined1 *)(param_2 + 0x18));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000832c
 */

undefined8 * recovered_1000832c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10006dc0(param_1,param_2);
  recovered_10007c2c((undefined1 *)(puVar1 + 3),param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008374
 */

long * recovered_10008374(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 != param_2) {
    recovered_1000689c(param_1[3],param_1);
    lVar1 = param_2[3];
    param_1[3] = lVar1;
    recovered_100083c0(lVar1,param_1,param_2);
  }
  return param_1;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083c0
 */

void recovered_100083c0(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == 0) {
    return;
  }
  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(char *)param_2 = (char)*param_3;
    return;
  }
  if (param_1 == 4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_100064fc(param_2,(long)puVar1,param_3[1]);
    return;
  }
  if (param_1 == 5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}

#undef DAT_10017864

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083cc
 */

void recovered_100083cc(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(char *)param_2 = (char)*param_3;
    return;
  }
  if (param_1 == 4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_100064fc(param_2,(long)puVar1,param_3[1]);
    return;
  }
  if (param_1 == 5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}

#undef DAT_10017864

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083e4
 */

void recovered_100083e4(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(char *)param_2 = (char)*param_3;
    return;
  }
  if (param_1 == 4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_100064fc(param_2,(long)puVar1,param_3[1]);
    return;
  }
  if (param_1 == 5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}

#undef DAT_10017864

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083fc
 */

void recovered_100083fc(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == 3) {
    *(char *)param_2 = (char)*param_3;
    return;
  }
  if (param_1 == 4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_100064fc(param_2,(long)puVar1,param_3[1]);
    return;
  }
  if (param_1 == 5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}

#undef DAT_10017864

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008414
 */

void recovered_10008414(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == 4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_100064fc(param_2,(long)puVar1,param_3[1]);
    return;
  }
  if (param_1 == 5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000842c
 */

void recovered_1000842c(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 5) {
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008444
 */

void recovered_10008444(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 6) {
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000845c
 */

void recovered_1000845c(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000847c
 */

void recovered_1000847c(long param_1,long *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 != 7) {
    return;
  }
  lVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008494
 */

void recovered_10008494(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084b4
 */

void recovered_100084b4(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d4
 */

undefined8 recovered_100084d4(long param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined8 uVar2;

  lVar1 = recovered_10008550((long *)(param_1 + 0x50),in_x1);
  if (lVar1 == *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x58) * 0x20) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008514
 */

long recovered_10008514(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  if (((param_2 < *(ulong *)(param_1 + 0xa8)) && (param_2 < *(ulong *)(param_1 + 0xc0))) &&
     (*(char *)(*(long *)(param_1 + 0xb8) + param_2) != '\0')) {
    return *(long *)(param_1 + 0xa0) + param_2 * 0x28;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008550
 */

long recovered_10008550(long *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_100075a4(param_1,in_x1);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008584
 */

long * recovered_10008584(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10006754((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085e0
 */

ulonglong recovered_100085e0(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = *(long *)(param_1 + 0x38);
  lVar2 = lVar1 * 0x120;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x120;
    recovered_10008ab8(*(long *)(param_1 + 0x30) + lVar2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  recovered_10002e70(*(void **)(param_1 + 0x30));
  recovered_10010238((long *)(param_1 + 0x18));
  recovered_10002e70(*(void **)param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008648
 */

void recovered_10008648(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  recovered_100085e0(param_1 + 0x38);
  recovered_10006754((undefined8 *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10006754((undefined8 *)(*(long *)param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008674
 */

void recovered_10008674(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006754((undefined8 *)(param_1 + 0x18));
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008698
 */

void recovered_10008698(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;

  uVar4 = param_1[1];
  if (uVar4 == param_1[2]) {
    uVar1 = 4;
    if (uVar4 != 0) {
      uVar1 = uVar4 << 1;
    }
    if (uVar4 < uVar1) {
      pvVar2 = recovered_10002e3c(uVar1 * 0x28);
      lVar3 = 0;
      for (uVar4 = 0; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
        recovered_100088c0((undefined1 *)((long)pvVar2 + lVar3),(undefined1 *)(*param_1 + lVar3));
        recovered_10006754((undefined8 *)(*param_1 + lVar3 + 8));
        lVar3 = lVar3 + 0x28;
      }
      recovered_10002e70((void *)*param_1);
      *param_1 = (long)pvVar2;
      param_1[2] = uVar1;
      uVar4 = param_1[1];
    }
  }
  recovered_100088c0((undefined1 *)(*param_1 + uVar4 * 0x28),param_2);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000874c
 */

void recovered_1000874c(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,
                       undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000001;
  *param_1 = param_2;
  recovered_100088f0((undefined8 *)(param_1 + 8),param_3);
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008790
 */

void recovered_10008790(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)recovered_10002efc(0x20);
  recovered_1000893c(puVar1,in_x0);
  recovered_10002fb4((long)puVar1,&LAB_1001c050,recovered_10004120);
  recovered_10002f44((long)puVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10003190();
}

#undef LAB_1001c050

#define uStack_40 (*(undefined8 *)(frame + 24))
#define pvStack_48 (*(void * *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087cc
 */

void recovered_100087cc(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,
                       undefined8 *param_5)

{
  unsigned char frame[120] = {0};

  long *plVar1;

  uStack_40 = 0;
  uStack_38 = 0;
  pvStack_48 = (void *)0x0;
  recovered_10003fd8((long *)&pvStack_48,param_2);
  recovered_10006ee4((long *)&pvStack_48,((uintptr_t)pf_module_state+0x187aU));
  plVar1 = recovered_10008974((long *)&pvStack_48,param_3 & 0xffffffff);
  recovered_10006ee4(plVar1,((uintptr_t)pf_module_state+0x187aU));
  plVar1 = recovered_10008974(plVar1,param_4 & 0xffffffff);
  recovered_10006ee4(plVar1,((uintptr_t)pf_module_state+0x176bU));
  recovered_10003fd8(plVar1,param_5);
  recovered_10006dc0(param_1,&pvStack_48);
  recovered_10002e70(pvStack_48);
  return;
}

#undef uStack_40
#undef pvStack_48
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008874
 */

void recovered_10008874(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  recovered_10006dc0(param_1,param_2);
  recovered_10006c48(param_1,(undefined1)param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088c0
 */

undefined1 * recovered_100088c0(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10007ad4((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088f0
 */

undefined8 * recovered_100088f0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_10002e70((void *)*param_1);
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


#undef PTR_recovered_10004120_1001c078
#define PTR_recovered_10004120_1001c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000893c
 */

undefined8 * recovered_1000893c(undefined8 *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_10004120_1001c078;
  recovered_10006dc0(param_1 + 1,in_x1);
  return param_1;
}

#undef PTR_recovered_10004120_1001c078

#undef PTR_recovered_10004120_1001c078
#define PTR_recovered_10004120_1001c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008940
 */

undefined8 * recovered_10008940(undefined8 *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_10004120_1001c078;
  recovered_10006dc0(param_1 + 1,in_x1);
  return param_1;
}

#undef PTR_recovered_10004120_1001c078

#define local_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008974
 */

long * recovered_10008974(long *param_1,ulong param_2)

{
  unsigned char frame[104] = {0};


  recovered_10006cac(local_38,param_2);
  recovered_10003fd8(param_1,local_38);
  recovered_10002e70(local_38[0]);
  return param_1;
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089d0
 */

long * recovered_100089d0(long *param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_100089fc(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089fc
 */

void recovered_100089fc(long *param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10008a78(param_2);
    recovered_1000668c(param_1,uVar1);
  }
  recovered_10006654(param_1);
  for (uVar1 = param_1[1]; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = param_3;
  }
  param_1[1] = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a78
 */

ulong recovered_10008a78(ulong param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = 0x10;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a94
 */

undefined8 * recovered_10008a94(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ab8
 */

void recovered_10008ab8(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006754((undefined8 *)(param_1 + 0x108));
  recovered_10008eb8((long *)(param_1 + 0xe8));
  recovered_1000679c((undefined8 *)(param_1 + 200));
  recovered_10008ddc((undefined8 *)(param_1 + 0xb0));
  recovered_10008e08(param_1 + 0x60);
  recovered_10008e38((long *)(param_1 + 0x48));
  recovered_10008a94((undefined8 *)(param_1 + 0x30));
  recovered_10008e38((long *)(param_1 + 0x18));
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b14
 */

long * recovered_10008b14(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_100065e4(param_2);
  recovered_100064fc(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b50
 */

void recovered_10008b50(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002e3c(param_2 * 0x120);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10008be0((long)pvVar1 + lVar2,*param_1 + lVar2);
      recovered_10008ab8(*param_1 + lVar2);
      lVar2 = lVar2 + 0x120;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008be0
 */

long recovered_10008be0(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007ad4((undefined8 *)param_1,(undefined8 *)param_2);
  recovered_10008c90((undefined8 *)(uVar1 + 0x18),(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  recovered_10008c90((undefined8 *)(param_1 + 0x48),(undefined8 *)(param_2 + 0x48));
  recovered_10008cac((undefined8 *)(param_1 + 0x60),(undefined8 *)(param_2 + 0x60));
  recovered_10008d08((undefined8 *)(param_1 + 0xb0),(undefined8 *)(param_2 + 0xb0));
  recovered_10008d24((undefined8 *)(param_1 + 200),(undefined8 *)(param_2 + 200));
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  recovered_10007ad4((undefined8 *)(param_1 + 0x108),(undefined8 *)(param_2 + 0x108));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c90
 */

void recovered_10008c90(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x10008cac
 */

undefined8 * recovered_10008cac(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10008cec(param_1,param_2);
  recovered_10008d24((undefined8 *)(uVar1 + 0x18),param_2 + 3);
  recovered_10008d24(param_1 + 6,param_2 + 6);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cec
 */

ulonglong recovered_10008cec(undefined8 *param_1,undefined8 *param_2)

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
  return (ulonglong)param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d08
 */

void recovered_10008d08(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x10008d24
 */

void recovered_10008d24(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x10008d40
 */

void recovered_10008d40(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d60
 */

long * recovered_10008d60(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008d8c(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d8c
 */

void recovered_10008d8c(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10006754((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ddc
 */

undefined8 * recovered_10008ddc(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e08
 */

void recovered_10008e08(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000679c((undefined8 *)(param_1 + 0x30));
  recovered_1000679c((undefined8 *)(param_1 + 0x18));
  recovered_10008d8c((long *)param_1);
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e38
 */

long * recovered_10008e38(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008e64(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e64
 */

void recovered_10008e64(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10006754((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eb8
 */

long * recovered_10008eb8(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008ed8(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ed8
 */

void recovered_10008ed8(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x28;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10008ddc((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f24
 */

void recovered_10008f24(long *param_1,undefined1 *param_2,long param_3)

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
      recovered_10007d80(param_1,uVar5);
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


#define uStack_14 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f3c
 */

void recovered_10008f3c(long *param_1,undefined4 param_2)

{
  unsigned char frame[68] = {0};


  uStack_14 = param_2;
  recovered_10008f24(param_1,(undefined1 *)&uStack_14,4);
  return;
}

#undef uStack_14

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f54
 */

void recovered_10008f54(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;

  recovered_10008f3c(param_1,*(undefined4 *)(param_2 + 1));
  puVar7 = &DAT_10017864;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)*param_2;
  }
  puVar1 = puVar7 + param_2[1];
  if (*param_1 == 0) {
    uVar8 = param_1[1];
  }
  else {
    uVar8 = (*param_1 + param_1[1]) - *param_1;
  }
  lVar4 = (long)puVar1 - (long)puVar7;
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
      recovered_10007d80(param_1,uVar5);
      uVar6 = param_1[1];
    }
    for (; uVar8 < uVar6; uVar6 = uVar6 - 1) {
      puVar2 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar2[lVar4] = *puVar2;
    }
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      *(undefined1 *)(*param_1 + uVar8) = *puVar7;
      uVar8 = uVar8 + 1;
    }
    param_1[1] = param_1[1] + lVar4;
  }
  return;
}

#undef DAT_10017864

#define local_11 (*(undefined1 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f90
 */

void recovered_10008f90(long *param_1,undefined1 param_2)

{
  unsigned char frame[65] = {0};


  local_11 = param_2;
  recovered_100090c0(param_1,&local_11);
  return;
}

#undef local_11

#define uStack_14 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fb0
 */

void recovered_10008fb0(long *param_1,undefined4 param_2)

{
  unsigned char frame[68] = {0};


  uStack_14 = param_2;
  recovered_10008f24(param_1,(undefined1 *)&uStack_14,4);
  return;
}

#undef uStack_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fc8
 */

long recovered_10008fc8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10007d80(param_1,uVar5);
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
 * Address: 0x100090c0
 */

long recovered_100090c0(long *param_1,undefined1 *param_2)

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
    recovered_10007d80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009128
 */

undefined8 * recovered_10009128(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009154
 */

void recovered_10009154(long *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  do {
    do {
      bVar1 = recovered_10009c34(param_1,10);
    } while (bVar1);
    bVar1 = recovered_10009c34(param_1,9);
  } while (bVar1);
  return;
}


#define pvStack_1e8 (*(void * *)(frame + 16))
#define pvStack_1c0 (*(void * *)(frame + 56))
#define alStack_1e0 (*(long (*)[4])(frame + 24))
#define lStack_1a8 (*(long *)(frame + 80))
#define apvStack_1b8 (*(void * (*)[2])(frame + 64))
#define alStack_a0 (*(long (*)[3])(frame + 344))
#define uStack_1a0 (*(undefined8 *)(frame + 88))
#define pvStack_80 (*(void * *)(frame + 376))
#define pvStack_88 (*(void * *)(frame + 368))
#define uStack_78 (*(undefined8 *)(frame + 384))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009188
 */

void recovered_10009188(long *param_1,undefined8 param_2)

{
  unsigned char frame[536] = {0};

  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;

  bVar5 = recovered_10009c34(param_1,0x1a);
  iVar11 = (int)param_2;
  if (bVar5) {
    lVar13 = *param_1 + param_1[6] * 0x28;
    recovered_10009ca8(param_1,param_2);
    recovered_10009d90(param_1);
    pvStack_80 = (void *)0x0;
    uStack_78 = 0;
    pvStack_88 = (void *)0x0;
    lVar7 = recovered_10009dc4((long)param_1,iVar11,0x14,*(undefined4 *)(lVar13 + -8));
    pvStack_1c0 = (void *)CONCAT53(PF_PART5(pvStack_1c0, 3),0x1d1c1b);
    recovered_10009dfc(param_1,param_2,(char *)&pvStack_1c0,3);
    pvStack_1c0 = (void *)recovered_10009dc4((long)param_1,iVar11,0x13,*(undefined4 *)(lVar13 + -8))
    ;
    recovered_10009f10((long *)&pvStack_88,&pvStack_1c0);
    lVar13 = param_1[0xd] + (long)iVar11 * 0x120;
    *(int *)(*(long *)(lVar13 + 0x30) + lVar7 * 0x10 + 4) = (int)*(undefined8 *)(lVar13 + 0x38);
    while (bVar5 = recovered_10009c34(param_1,0x1b), bVar5) {
      recovered_10009e80((undefined1 *)&pvStack_1c0,
                         (undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
      recovered_10009ca8(param_1,param_2);
      recovered_10009d90(param_1);
      lVar7 = recovered_10009dc4((long)param_1,iVar11,0x14,(undefined4)uStack_1a0);
      pvStack_1e8 = (void *)CONCAT53(PF_PART5(pvStack_1e8, 3),0x1d1c1b);
      recovered_10009dfc(param_1,param_2,(char *)&pvStack_1e8,3);
      pvStack_1e8 = (void *)recovered_10009dc4((long)param_1,iVar11,0x13,(undefined4)uStack_1a0);
      recovered_10009f10((long *)&pvStack_88,&pvStack_1e8);
      lVar13 = param_1[0xd] + (long)iVar11 * 0x120;
      *(int *)(*(long *)(lVar13 + 0x30) + lVar7 * 0x10 + 4) = (int)*(undefined8 *)(lVar13 + 0x38);
      recovered_10002e70(apvStack_1b8[0]);
    }
    bVar5 = recovered_10009c34(param_1,0x1c);
    if (bVar5) {
      recovered_10009d90(param_1);
      pvStack_1c0 = (void *)CONCAT71(PF_PART7(pvStack_1c0, 1),0x1d);
      recovered_10009dfc(param_1,param_2,(char *)&pvStack_1c0,1);
    }
    recovered_100064b8((long *)&pvStack_1c0,((uintptr_t)pf_module_state+0x192cU));
    recovered_10009eb0(param_1,0x1d,&pvStack_1c0);
    recovered_10002e70(pvStack_1c0);
    for (lVar7 = 0; (long)pvStack_80 * 8 != lVar7; lVar7 = lVar7 + 8) {
      lVar13 = param_1[0xd] + (long)iVar11 * 0x120;
      *(int *)(*(long *)(lVar13 + 0x30) + *(long *)((long)pvStack_88 + lVar7) * 0x10 + 4) =
           (int)*(undefined8 *)(lVar13 + 0x38);
    }
    pvStack_80 = (void *)0x0;
    apvStack_1b8[0] = pvStack_88;
  }
  else {
    bVar5 = recovered_10009c34(param_1,0x1e);
    if (bVar5) {
      lVar13 = *param_1 + param_1[6] * 0x28;
      uVar3 = *(undefined4 *)(param_1[0xd] + (long)iVar11 * 0x120 + 0x38);
      recovered_10009ca8(param_1,param_2);
      recovered_10009d90(param_1);
      lVar7 = recovered_10009dc4((long)param_1,iVar11,0x14,*(undefined4 *)(lVar13 + -8));
      pvStack_1c0 = (void *)CONCAT71(PF_PART7(pvStack_1c0, 1),0x1d);
      recovered_10009dfc(param_1,param_2,(char *)&pvStack_1c0,1);
      recovered_10009d1c((long)param_1,iVar11,0x13,uVar3,0,*(undefined4 *)(lVar13 + -8));
      recovered_100064b8((long *)&pvStack_1c0,((uintptr_t)pf_module_state+0x194aU));
      recovered_10009eb0(param_1,0x1d,&pvStack_1c0);
      recovered_10002e70(pvStack_1c0);
      lVar13 = param_1[0xd] + (long)iVar11 * 0x120;
      *(int *)(*(long *)(lVar13 + 0x30) + lVar7 * 0x10 + 4) = (int)*(undefined8 *)(lVar13 + 0x38);
      return;
    }
    bVar5 = recovered_10009c34(param_1,0x1f);
    if (bVar5) {
      lVar7 = param_1[6];
      lVar13 = *param_1;
      recovered_100064b8((long *)&pvStack_1c0,((uintptr_t)pf_module_state+0x196bU));
      puVar8 = (undefined1 *)recovered_10009eb0(param_1,0,&pvStack_1c0);
      recovered_10009e80((undefined1 *)&pvStack_88,puVar8);
      recovered_10002e70(pvStack_1c0);
      alStack_a0[1] = 0;
      alStack_a0[2] = 0;
      alStack_a0[0] = 0;
      bVar5 = recovered_10009c34(param_1,4);
      if (bVar5) {
        if (*(char *)(*param_1 + param_1[6] * 0x28) != '\x05') {
          do {
            recovered_100064b8((long *)&pvStack_1c0,((uintptr_t)pf_module_state+0x198eU));
            uVar9 = recovered_10009eb0(param_1,0,&pvStack_1c0);
            recovered_1000a0c8(alStack_a0,(undefined8 *)(uVar9 + 8));
            recovered_10002e70(pvStack_1c0);
            bVar5 = recovered_10009c34(param_1,8);
          } while (bVar5);
        }
        recovered_100064b8((long *)&pvStack_1c0,((uintptr_t)pf_module_state+0x19a6U));
        recovered_10009eb0(param_1,5,&pvStack_1c0);
        recovered_10002e70(pvStack_1c0);
      }
      recovered_10009f78(&pvStack_1c0);
      recovered_10007268(&pvStack_1c0,&pvStack_80);
      recovered_1000a040(&lStack_1a8,alStack_a0);
      lVar2 = param_1[0xe];
      lVar10 = lVar2;
      if (lVar2 == param_1[0xf]) {
        uVar1 = 4;
        if (lVar2 != 0) {
          uVar1 = lVar2 << 1;
        }
        recovered_10008b50(param_1 + 0xd,uVar1);
        lVar10 = param_1[0xe];
      }
      recovered_1000a258(param_1[0xd] + lVar10 * 0x120,(long)&pvStack_1c0);
      param_1[0xe] = param_1[0xe] + 1;
      recovered_10009d90(param_1);
      pvStack_1e8 = (void *)CONCAT71(PF_PART7(pvStack_1e8, 1),0x1d);
      recovered_10009dfc(param_1,lVar2,(char *)&pvStack_1e8,1);
      recovered_100064b8((long *)&pvStack_1e8,((uintptr_t)pf_module_state+0x19c8U));
      recovered_10009eb0(param_1,0x1d,&pvStack_1e8);
      recovered_10002e70(pvStack_1e8);
      recovered_10003930((undefined1 *)&pvStack_1e8,&pvStack_80);
      iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&pvStack_1e8);
      recovered_10009d1c((long)param_1,iVar11,0x16,iVar6,(int)lVar2,
                         *(undefined4 *)(lVar13 + lVar7 * 0x28 + -8));
      recovered_1000686c(alStack_1e0);
      recovered_10008ab8((long)&pvStack_1c0);
      recovered_10008e38(alStack_a0);
      apvStack_1b8[0] = pvStack_80;
    }
    else {
      bVar5 = recovered_10009c34(param_1,0x20);
      pbVar12 = (byte *)(*param_1 + param_1[6] * 0x28);
      bVar4 = *pbVar12;
      if (bVar5) {
        if (bVar4 < 0x2b && (1L << ((ulong)bVar4 & 0x3f) & 0x40038000600U) != 0) {
          pvStack_1c0 = (void *)((ulong)pvStack_1c0 & 0xffffffffffffff00);
          uStack_1a0 = 0;
          iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&pvStack_1c0);
          recovered_10009d1c((long)param_1,iVar11,0,iVar6,0,*(undefined4 *)(pbVar12 + -8));
          recovered_1000686c((long *)apvStack_1b8);
        }
        else {
          recovered_10009ca8(param_1,param_2);
        }
        recovered_10009d1c((long)param_1,iVar11,0x17,0,0,*(undefined4 *)(pbVar12 + -8));
        return;
      }
      if (((bVar4 != 0) || (uVar1 = param_1[6] + 1, (ulong)param_1[1] <= uVar1)) ||
         (*(char *)(*param_1 + uVar1 * 0x28) != '\x11')) {
        uVar3 = *(undefined4 *)(pbVar12 + 0x20);
        recovered_10009ca8(param_1,param_2);
        lVar13 = param_1[0xd] + (long)iVar11 * 0x120;
        lVar7 = *(long *)(lVar13 + 0x38);
        if (lVar7 == *(long *)(lVar13 + 0x40)) {
          uVar1 = 4;
          if (lVar7 != 0) {
            uVar1 = lVar7 << 1;
          }
          recovered_1000a428((long *)(lVar13 + 0x30),uVar1);
          lVar7 = *(long *)(lVar13 + 0x38);
        }
        puVar8 = (undefined1 *)(*(long *)(lVar13 + 0x30) + lVar7 * 0x10);
        *puVar8 = 3;
        *(undefined4 *)(puVar8 + 4) = 0;
        *(undefined4 *)(puVar8 + 8) = 0;
        *(undefined4 *)(puVar8 + 0xc) = uVar3;
        *(long *)(lVar13 + 0x38) = *(long *)(lVar13 + 0x38) + 1;
        return;
      }
      recovered_100064b8((long *)&pvStack_88,((uintptr_t)pf_module_state+0x19ebU));
      puVar8 = (undefined1 *)recovered_10009eb0(param_1,0,&pvStack_88);
      recovered_10009e80((undefined1 *)&pvStack_1c0,puVar8);
      recovered_10002e70(pvStack_88);
      recovered_100064b8((long *)&pvStack_88,((uintptr_t)pf_module_state+0x1a02U));
      recovered_10009eb0(param_1,0x11,&pvStack_88);
      recovered_10002e70(pvStack_88);
      recovered_10009ca8(param_1,param_2);
      recovered_10003930((undefined1 *)&pvStack_88,apvStack_1b8);
      iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&pvStack_88);
      recovered_10009d1c((long)param_1,iVar11,2,iVar6,0,(undefined4)uStack_1a0);
      recovered_1000686c((long *)&pvStack_80);
      recovered_10009d1c((long)param_1,iVar11,3,0,0,(undefined4)uStack_1a0);
    }
  }
  recovered_10002e70(apvStack_1b8[0]);
  return;
}

#undef pvStack_1e8
#undef pvStack_1c0
#undef alStack_1e0
#undef lStack_1a8
#undef apvStack_1b8
#undef alStack_a0
#undef uStack_1a0
#undef pvStack_80
#undef pvStack_88
#undef uStack_78

#undef DAT_1001655c
#define DAT_1001655c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef str_10017a0c
#define str_10017a0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1724U)))
#define uStack_90 (*(undefined8 *)(frame + 24))
#define pvStack_98 (*(void * *)(frame + 16))
#define uStack_80 (*(undefined4 *)(frame + 40))
#define uStack_88 (*(undefined8 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 44))
#define uStack_68 (*(undefined8 *)(frame + 64))
#define uStack_70 (*(undefined8 *)(frame + 56))
#define local_78 (*(long *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000983c
 */

void recovered_1000983c(long param_1)

{
  unsigned char frame[200] = {0};

  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;

  uVar19 = 0;
  do {
    if (*(ulong *)(param_1 + 0x38) <= uVar19) {
      return;
    }
    lVar14 = *(long *)(param_1 + 0x30) + uVar19 * 0x120;
    recovered_10008e64((long *)(lVar14 + 0x48));
    recovered_1000b420(lVar14 + 0x60);
    recovered_1000b448((long *)(lVar14 + 0xb0),*(ulong *)(lVar14 + 0x38),(undefined4 *)&DAT_1001655c
                      );
    local_78 = -1;
    recovered_10007810((long *)(lVar14 + 200),*(ulong *)(lVar14 + 0x38),&local_78);
    if (uVar19 != 0) {
      recovered_1000a13c((long *)(lVar14 + 0x48),*(ulong *)(lVar14 + 0x20));
      puVar2 = *(undefined8 **)(lVar14 + 0x18);
      for (lVar16 = *(long *)(lVar14 + 0x20) * 0x18; lVar16 != 0; lVar16 = lVar16 + -0x18) {
        recovered_1000b450(lVar14,puVar2);
        puVar2 = puVar2 + 3;
      }
      puVar1 = (uint *)(*(long *)(lVar14 + 0x30) + 4);
      for (lVar16 = *(long *)(lVar14 + 0x38) << 4; lVar16 != 0; lVar16 = lVar16 + -0x10) {
        if ((char)puVar1[-1] == '\x02') {
          uVar7 = *puVar1;
          if (((-1 < (int)uVar7) && ((ulong)uVar7 < *(ulong *)(param_1 + 0x20))) &&
             (pcVar12 = (char *)(*(long *)(param_1 + 0x18) + (ulong)uVar7 * 0x28),
             *pcVar12 == '\x04')) {
            if (*(long *)(pcVar12 + 0x20) != 4) goto LAB_10009c14;
            recovered_1000b450(lVar14,(undefined8 *)(pcVar12 + 8));
          }
        }
        puVar1 = puVar1 + 4;
      }
      lVar16 = 0;
      for (uVar15 = 0; uVar15 < *(ulong *)(lVar14 + 0x38); uVar15 = uVar15 + 1) {
        if (*(byte *)(*(long *)(lVar14 + 0x30) + lVar16) - 1 < 2) {
          uVar7 = *(uint *)(*(long *)(lVar14 + 0x30) + lVar16 + 4);
          if (((-1 < (int)uVar7) && ((ulong)uVar7 < *(ulong *)(param_1 + 0x20))) &&
             (pcVar12 = (char *)(*(long *)(param_1 + 0x18) + (ulong)uVar7 * 0x28),
             *pcVar12 == '\x04')) {
            if (*(long *)(pcVar12 + 0x20) != 4) {
LAB_10009c14:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10009c18);
              (*pcVar6)();
            }
            lVar8 = recovered_1000b4a8((long *)(lVar14 + 0x60),(undefined8 *)(pcVar12 + 8));
            if (lVar8 != *(long *)(lVar14 + 0x60) + *(long *)(lVar14 + 0x68) * 0x20) {
              *(undefined4 *)(*(long *)(lVar14 + 0xb0) + uVar15 * 4) = *(undefined4 *)(lVar8 + 0x18)
              ;
            }
          }
        }
        lVar16 = lVar16 + 0x10;
      }
    }
    *(undefined1 *)(lVar14 + 0xe0) = 0;
    recovered_10008ed8((long *)(lVar14 + 0xe8));
    *(undefined8 *)(lVar14 + 0x100) = 0xffffffffffffffff;
    *(undefined8 *)(lVar14 + 0x110) = 0;
    if (*(undefined1 **)(lVar14 + 0x108) != (undefined1 *)0x0) {
      **(undefined1 **)(lVar14 + 0x108) = 0;
    }
    if (((uVar19 != 0) && (*(long *)(lVar14 + 0x38) != 0)) &&
       (uVar15 = *(long *)(lVar14 + 0x38) - 1,
       *(char *)(*(long *)(lVar14 + 0x30) + uVar15 * 0x10) == '\x17')) {
      uStack_70 = 0;
      uStack_68 = 0;
      local_78 = 0;
      uStack_7c = 0xffffffff;
      uVar9 = recovered_1000b5c0(lVar14,0,uVar15,&local_78,&uStack_7c);
      if ((int)uVar9 == 0) {
        pcVar11 = *(char **)(lVar14 + 0x30);
        uVar10 = *(ulong *)(lVar14 + 0x38);
        pcVar12 = pcVar11;
        uVar17 = uVar10;
        uVar18 = uVar10;
        for (uVar13 = 0; uVar15 != uVar13; uVar13 = uVar13 + 1) {
          uVar4 = uVar13;
          uVar5 = uVar18;
          uVar3 = uVar17;
          if (((*pcVar12 == '\x13') ||
              (uVar4 = uVar17, uVar5 = uVar13, uVar3 = uVar18, *pcVar12 == '\x14')) &&
             (uVar18 = uVar5, uVar17 = uVar4, uVar3 != uVar10)) goto LAB_10009ac8;
          pcVar12 = pcVar12 + 0x10;
        }
        if ((uVar18 != uVar10 && uVar17 != uVar10) && uVar18 < uVar17) {
          uVar7 = *(uint *)(pcVar11 + uVar18 * 0x10 + 4);
          uVar13 = (ulong)uVar7;
          if (((-1 < (int)uVar7) && (-1 < (int)*(uint *)(pcVar11 + uVar17 * 0x10 + 4))) &&
             ((uVar17 + 1 == uVar13 && uVar13 < uVar15) &&
              uVar7 == *(uint *)(pcVar11 + uVar17 * 0x10 + 4))) {
            recovered_10008ed8(&local_78);
            uStack_80 = 0xffffffff;
            uVar10 = recovered_1000b5c0(lVar14,0,uVar18,&local_78,&uStack_80);
            if ((uVar10 & 1) != 0) {
              uStack_90 = 0;
              uStack_88 = 0;
              pvStack_98 = (void *)0x0;
              if ((uVar17 - (uVar18 + 1) == 4) &&
                 (pcVar12 = (char *)(*(long *)(lVar14 + 0x30) + (uVar18 + 1) * 0x10),
                 (((*pcVar12 == '\x01' && pcVar12[0x10] == '\0') && pcVar12[0x20] == '\x15') &&
                 *(int *)(pcVar12 + 0x24) == 1) && pcVar12[0x30] == '\x03')) {
                pcVar11 = recovered_1000b990(param_1,*(uint *)(pcVar12 + 4));
                pcVar12 = recovered_1000b990(param_1,*(uint *)(pcVar12 + 0x14));
                if ((pcVar11 != (char *)0x0) &&
                   ((pcVar12 != (char *)0x0 &&
                    (uVar7 = recovered_1000b9d0((undefined8 *)pcVar11,str_10017a0c),
                    (uVar7 & 1) == 0)))) {
                  recovered_10007268(&pvStack_98,(undefined8 *)pcVar12);
                  uVar9 = recovered_1000b5c0(lVar14,uVar13,uVar15,&local_78,&uStack_7c);
                  if ((int)uVar9 != 0) {
                    *(undefined1 *)(lVar14 + 0xe0) = 2;
                    recovered_1000b894((undefined8 *)(lVar14 + 0xe8),&local_78);
                    *(undefined4 *)(lVar14 + 0x104) = uStack_80;
                    *(undefined4 *)(lVar14 + 0x100) = uStack_7c;
                    recovered_100088f0((undefined8 *)(lVar14 + 0x108),&pvStack_98);
                  }
                }
              }
              recovered_10002e70(pvStack_98);
            }
          }
        }
      }
      else {
        *(undefined1 *)(lVar14 + 0xe0) = 1;
        recovered_1000b894((undefined8 *)(lVar14 + 0xe8),&local_78);
        *(undefined4 *)(lVar14 + 0x100) = uStack_7c;
      }
LAB_10009ac8:
      recovered_10008eb8(&local_78);
    }
    uVar19 = uVar19 + 1;
  } while( true );
}

#undef DAT_1001655c
#undef str_10017a0c
#undef uStack_90
#undef pvStack_98
#undef uStack_80
#undef uStack_88
#undef uStack_7c
#undef uStack_68
#undef uStack_70
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c34
 */

bool recovered_10009c34(long *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = (uint)*(byte *)(*param_1 + param_1[6] * 0x28);
  if (uVar1 == param_2) {
    recovered_10009c74(param_1);
  }
  return uVar1 == param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c74
 */

long recovered_10009c74(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = param_1[6];
  if (*(char *)(*param_1 + lVar1 * 0x28) != '*') {
    lVar1 = lVar1 + 1;
    param_1[6] = lVar1;
  }
  return *param_1 + lVar1 * 0x28 + -0x28;
}


#define pvStack_50 (*(void * *)(frame + 24))
#define auStack_58 (*(undefined1 (*)[8])(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ca8
 */

void recovered_10009ca8(long *param_1,undefined8 param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;

  recovered_1000a940(param_1,param_2);
  while ((bVar1 = recovered_10009c34(param_1,0x27), bVar1 ||
         (bVar1 = recovered_10009c34(param_1,0x19), bVar1))) {
    recovered_10009e80(auStack_58,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
    recovered_1000a940(param_1,param_2);
    recovered_10009d1c((long)param_1,(int)param_2,0x12,0,0,uStack_38);
    recovered_10002e70(pvStack_50);
  }
  return;
}

#undef pvStack_50
#undef auStack_58
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d1c
 */

void recovered_10009d1c(long param_1,int param_2,undefined1 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  lVar4 = *(long *)(param_1 + 0x68) + (long)param_2 * 0x120;
  lVar3 = *(long *)(lVar4 + 0x38);
  if (lVar3 == *(long *)(lVar4 + 0x40)) {
    uVar2 = 4;
    if (lVar3 != 0) {
      uVar2 = lVar3 << 1;
    }
    recovered_1000a428((long *)(lVar4 + 0x30),uVar2);
    lVar3 = *(long *)(lVar4 + 0x38);
  }
  puVar1 = (undefined1 *)(*(long *)(lVar4 + 0x30) + lVar3 * 0x10);
  *puVar1 = param_3;
  *(undefined4 *)(puVar1 + 4) = param_4;
  *(undefined4 *)(puVar1 + 8) = param_5;
  *(undefined4 *)(puVar1 + 0xc) = param_6;
  *(long *)(lVar4 + 0x38) = *(long *)(lVar4 + 0x38) + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d90
 */

void recovered_10009d90(long *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_10009c34(param_1,0x24);
  if (!bVar1) {
    recovered_10009c34(param_1,0x25);
  }
  do {
    do {
      bVar1 = recovered_10009c34(param_1,10);
    } while (bVar1);
    bVar1 = recovered_10009c34(param_1,9);
  } while (bVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dc4
 */

long recovered_10009dc4(long param_1,int param_2,undefined1 in_w2,undefined4 in_w3)

{
  unsigned char frame[64] = {0};

  recovered_10009d1c(param_1,param_2,in_w2,0xffffffff,0,in_w3);
  return *(long *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x120 + 0x38) + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dfc
 */

void recovered_10009dfc(long *param_1,undefined8 param_2,char *param_3,long param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_10009154(param_1);
  do {
    cVar2 = *(char *)(*param_1 + param_1[6] * 0x28);
    if (cVar2 == '*') {
      return;
    }
    lVar3 = param_4;
    pcVar4 = param_3;
    while (lVar3 != 0) {
      cVar1 = *pcVar4;
      lVar3 = lVar3 + -1;
      pcVar4 = pcVar4 + 1;
      if (cVar2 == cVar1) {
        return;
      }
    }
    recovered_10009188(param_1,param_2);
    recovered_10009154(param_1);
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e80
 */

undefined1 * recovered_10009e80(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10006dc0((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


#define auStack_38 (*(undefined8 (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009eb0
 */

ulonglong recovered_10009eb0(long *param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[104] = {0};

  code *pcVar1;
  long lVar2;
  byte *pbVar3;

  pbVar3 = (byte *)(*param_1 + param_1[6] * 0x28);
  if (*pbVar3 != param_2) {
    recovered_100087cc(auStack_38,param_1 + 3,(ulong)*(uint *)(pbVar3 + 0x20),
                       (ulong)*(uint *)(pbVar3 + 0x24),param_3);
    recovered_10008790(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f08);
    (*pcVar1)();
  }
  lVar2 = param_1[6];
  if (*(char *)(*param_1 + lVar2 * 0x28) != '*') {
    lVar2 = lVar2 + 1;
    param_1[6] = lVar2;
  }
  return (*param_1 + lVar2 * 0x28) - 0x28;
}

#undef auStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f10
 */

long recovered_10009f10(long *param_1,undefined8 *param_2)

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
    recovered_10007984(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f78
 */

undefined8 * recovered_10009f78(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  recovered_10008d40(param_1 + 0xc);
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0xffffffffffffffff;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  return param_1;
}


#define lStack_28 (*(long *)(frame + 32))
#define local_38 (*(long *)(frame + 16))
#define local_30 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a040
 */

long * recovered_1000a040(long *param_1,long *param_2)

{
  unsigned char frame[104] = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  if (param_1 != param_2) {
    recovered_1000a1e4(&local_38,param_2);
    lVar1 = *param_1;
    *param_1 = local_38;
    lVar3 = param_1[2];
    lVar2 = param_1[1];
    param_1[2] = lStack_28;
    param_1[1] = local_30;
    local_38 = lVar1;
    local_30 = lVar2;
    lStack_28 = lVar3;
    recovered_10008e38(&local_38);
  }
  return param_1;
}

#undef lStack_28
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0a0
 */

int recovered_1000a0a0(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_1000a86c((long *)(param_1 + 0x50),param_2);
  return *(int *)(param_1 + 0x58) + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0c8
 */

long recovered_1000a0c8(long *param_1,undefined8 *param_2)

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
    recovered_1000a13c(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10006dc0((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a13c
 */

void recovered_1000a13c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000a1d0(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10007ad4((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_10006754((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1d0
 */

ulonglong recovered_1000a1d0(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x18;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1e4
 */

long * recovered_1000a1e4(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000a13c(param_1,param_2[1]);
  lVar1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)param_2[1]; uVar2 = uVar2 + 1) {
    recovered_10006dc0((undefined8 *)(*param_1 + lVar1),(undefined8 *)(*param_2 + lVar1));
    lVar1 = lVar1 + 0x18;
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a258
 */

long recovered_1000a258(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;

  puVar3 = recovered_10006dc0((undefined8 *)param_1,(undefined8 *)param_2);
  recovered_1000a1e4(puVar3 + 3,(long *)(param_2 + 0x18));
  plVar7 = (long *)(param_1 + 0x30);
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  recovered_1000a428(plVar7,*(ulong *)(param_2 + 0x38));
  lVar4 = 0;
  for (uVar5 = 0; uVar5 < *(ulong *)(param_2 + 0x38); uVar5 = uVar5 + 1) {
    lVar6 = *plVar7;
    puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar4);
    uVar8 = *puVar3;
    ((undefined8 *)(lVar6 + lVar4))[1] = puVar3[1];
    *(undefined8 *)(lVar6 + lVar4) = uVar8;
    lVar4 = lVar4 + 0x10;
  }
  *(ulong *)(param_1 + 0x38) = *(ulong *)(param_2 + 0x38);
  recovered_1000a1e4((long *)(param_1 + 0x48),(long *)(param_2 + 0x48));
  recovered_1000a49c((long *)(param_1 + 0x60),(long *)(param_2 + 0x60));
  recovered_1000a668((long *)(param_1 + 0xb0),(long *)(param_2 + 0xb0));
  recovered_1000a748((long *)(param_1 + 200),(long *)(param_2 + 200));
  uVar2 = *(undefined1 *)(param_2 + 0xe0);
  plVar7 = (long *)(param_1 + 0xe8);
  *plVar7 = 0;
  *(undefined1 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  recovered_1000a7a8(plVar7,*(ulong *)(param_2 + 0xf0));
  lVar4 = 0;
  for (uVar5 = 0; uVar5 < *(ulong *)(param_2 + 0xf0); uVar5 = uVar5 + 1) {
    puVar3 = (undefined8 *)(*plVar7 + lVar4);
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0xe8) + lVar4);
    uVar8 = *puVar1;
    puVar3[1] = puVar1[1];
    *puVar3 = uVar8;
    recovered_1000a668(puVar3 + 2,puVar1 + 2);
    uVar8 = puVar1[5];
    puVar3[6] = puVar1[6];
    puVar3[5] = uVar8;
    lVar4 = lVar4 + 0x38;
  }
  *(ulong *)(param_1 + 0xf0) = *(ulong *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  recovered_10006dc0((undefined8 *)(param_1 + 0x108),(undefined8 *)(param_2 + 0x108));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a428
 */

void recovered_1000a428(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002e3c(param_2 << 4);
    lVar2 = 0;
    uVar4 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar5 = *(undefined8 *)(*param_1 + lVar2);
      ((undefined8 *)((long)pvVar1 + lVar2))[1] = ((undefined8 *)(*param_1 + lVar2))[1];
      *(undefined8 *)((long)pvVar1 + lVar2) = uVar5;
      lVar2 = lVar2 + 0x10;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a49c
 */

long * recovered_1000a49c(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;

  plVar1 = recovered_1000a500(param_1,param_2);
  recovered_1000a748(plVar1 + 3,param_2 + 3);
  recovered_1000a748(param_1 + 6,param_2 + 6);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a500
 */

long * recovered_1000a500(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000a574(param_1,param_2[1]);
  lVar1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)param_2[1]; uVar2 = uVar2 + 1) {
    recovered_1000a640((undefined8 *)(*param_1 + lVar1),*param_2 + lVar1);
    lVar1 = lVar1 + 0x20;
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a574
 */

void recovered_1000a574(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000a608(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000a618((undefined8 *)(uVar1 + lVar2),*param_1 + lVar2);
      recovered_10006754((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x20;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a608
 */

ulonglong recovered_1000a608(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x20;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a618
 */

void recovered_1000a618(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007ad4(param_1,(undefined8 *)param_2);
  *(undefined4 *)(uVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a640
 */

void recovered_1000a640(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10006dc0(param_1,(undefined8 *)param_2);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a668
 */

long * recovered_1000a668(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000a6c4(param_1,param_2[1]);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  for (lVar3 = 0; lVar2 != lVar3; lVar3 = lVar3 + 1) {
    *(undefined4 *)(*param_1 + lVar3 * 4) = *(undefined4 *)(lVar1 + lVar3 * 4);
  }
  param_1[1] = lVar2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6c4
 */

void recovered_1000a6c4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000a738(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined4 *)(uVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a738
 */

ulonglong recovered_1000a738(long param_1)

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
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a748
 */

long * recovered_1000a748(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007984(param_1,param_2[1]);
  lVar2 = *param_2;
  for (uVar1 = 0; uVar1 < (ulong)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined8 *)(*param_1 + uVar1 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7a8
 */

void recovered_1000a7a8(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002e3c(param_2 * 0x38);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000a83c((undefined8 *)((long)pvVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_10008ddc((undefined8 *)(*param_1 + lVar2 + 0x10));
      lVar2 = lVar2 + 0x38;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a83c
 */

undefined8 * recovered_1000a83c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  recovered_10008d08(param_1 + 2,param_2 + 2);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a86c
 */

long recovered_1000a86c(long *param_1,undefined1 *param_2)

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
    recovered_10007b80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000a8e0((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8e0
 */

undefined1 * recovered_1000a8e0(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_1000a90c((long)(param_1 + 8),(long)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a90c
 */

long recovered_1000a90c(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  recovered_100083c0(lVar1,(long *)param_1,(long *)param_2);
  return param_1;
}


#define pvStack_50 (*(void * *)(frame + 24))
#define auStack_58 (*(undefined1 (*)[8])(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a940
 */

void recovered_1000a940(long *param_1,undefined8 param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;

  recovered_1000a9b4(param_1,param_2);
  while ((bVar1 = recovered_10009c34(param_1,0x26), bVar1 ||
         (bVar1 = recovered_10009c34(param_1,0x18), bVar1))) {
    recovered_10009e80(auStack_58,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
    recovered_1000a9b4(param_1,param_2);
    recovered_10009d1c((long)param_1,(int)param_2,0x11,0,0,uStack_38);
    recovered_10002e70(pvStack_50);
  }
  return;
}

#undef pvStack_50
#undef auStack_58
#undef uStack_38

#define pvStack_50 (*(void * *)(frame + 24))
#define acStack_58 (*(char (*)[8])(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9b4
 */

void recovered_1000a9b4(long *param_1,undefined8 param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;
  undefined1 uVar2;

  recovered_1000aa34(param_1,param_2);
  while ((bVar1 = recovered_10009c34(param_1,0x12), bVar1 ||
         (bVar1 = recovered_10009c34(param_1,0x13), bVar1))) {
    recovered_10009e80(acStack_58,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
    recovered_1000aa34(param_1,param_2);
    uVar2 = 0xb;
    if (acStack_58[0] != '\x12') {
      uVar2 = 0xc;
    }
    recovered_10009d1c((long)param_1,(int)param_2,uVar2,0,0,uStack_38);
    recovered_10002e70(pvStack_50);
  }
  return;
}

#undef pvStack_50
#undef acStack_58
#undef uStack_38

#define pvStack_50 (*(void * *)(frame + 24))
#define abStack_58 (*(byte (*)[8])(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa34
 */

void recovered_1000aa34(long *param_1,undefined8 param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;

  recovered_1000aadc(param_1,param_2);
  while ((((bVar1 = recovered_10009c34(param_1,0x14), bVar1 ||
           (bVar1 = recovered_10009c34(param_1,0x15), bVar1)) ||
          (bVar1 = recovered_10009c34(param_1,0x16), bVar1)) ||
         (bVar1 = recovered_10009c34(param_1,0x17), bVar1))) {
    recovered_10009e80(abStack_58,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
    recovered_1000aadc(param_1,param_2);
    if ((abStack_58[0] & 0xfc) == 0x14) {
      recovered_10009d1c((long)param_1,(int)param_2,abStack_58[0] - 7,0,0,uStack_38);
    }
    recovered_10002e70(pvStack_50);
  }
  return;
}

#undef pvStack_50
#undef abStack_58
#undef uStack_38

#define pvStack_50 (*(void * *)(frame + 24))
#define acStack_58 (*(char (*)[8])(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aadc
 */

void recovered_1000aadc(long *param_1,undefined8 param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;
  undefined1 uVar2;

  recovered_1000ab5c(param_1,param_2);
  while ((bVar1 = recovered_10009c34(param_1,0xb), bVar1 ||
         (bVar1 = recovered_10009c34(param_1,0xc), bVar1))) {
    recovered_10009e80(acStack_58,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
    recovered_1000ab5c(param_1,param_2);
    uVar2 = 4;
    if (acStack_58[0] != '\v') {
      uVar2 = 5;
    }
    recovered_10009d1c((long)param_1,(int)param_2,uVar2,0,0,uStack_38);
    recovered_10002e70(pvStack_50);
  }
  return;
}

#undef pvStack_50
#undef acStack_58
#undef uStack_38

#define pvStack_50 (*(void * *)(frame + 24))
#define abStack_58 (*(byte (*)[8])(frame + 16))
#define uStack_38 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab5c
 */

void recovered_1000ab5c(long *param_1,undefined8 param_2)

{
  unsigned char frame[136] = {0};

  bool bVar1;

  recovered_1000abf4(param_1,param_2);
  while (((bVar1 = recovered_10009c34(param_1,0xd), bVar1 ||
          (bVar1 = recovered_10009c34(param_1,0xe), bVar1)) ||
         (bVar1 = recovered_10009c34(param_1,0xf), bVar1))) {
    recovered_10009e80(abStack_58,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
    recovered_1000abf4(param_1,param_2);
    if (abStack_58[0] - 0xd < 3) {
      recovered_10009d1c((long)param_1,(int)param_2,abStack_58[0] - 7,0,0,uStack_38);
    }
    recovered_10002e70(pvStack_50);
  }
  return;
}

#undef pvStack_50
#undef abStack_58
#undef uStack_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define alStack_98 (*(long (*)[3])(frame + 16))
#define lStack_68 (*(long *)(frame + 64))
#define apvStack_80 (*(void * (*)[3])(frame + 40))
#define uStack_48 (*(ulong *)(frame + 96))
#define apvStack_60 (*(void * (*)[3])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abf4
 */

void recovered_1000abf4(long *param_1,undefined8 param_2)

{
  unsigned char frame[200] = {0};

  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *data;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;

  bVar5 = recovered_10009c34(param_1,0xc);
  iVar8 = (int)param_2;
  if (bVar5) {
    recovered_10009e80((undefined1 *)&lStack_68,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28)
                      );
    recovered_1000abf4(param_1,param_2);
    recovered_10009d1c((long)param_1,iVar8,9,0,0,(undefined4)uStack_48);
LAB_1000ac84:
    recovered_10002e70(apvStack_60[0]);
    return;
  }
  bVar5 = recovered_10009c34(param_1,0x10);
  if ((bVar5) || (bVar5 = recovered_10009c34(param_1,0x28), bVar5)) {
    recovered_10009e80((undefined1 *)&lStack_68,(undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28)
                      );
    recovered_1000abf4(param_1,param_2);
    recovered_10009d1c((long)param_1,iVar8,10,0,0,(undefined4)uStack_48);
    goto LAB_1000ac84;
  }
  bVar5 = recovered_10009c34(param_1,1);
  if (bVar5) {
    lVar9 = *param_1 + param_1[6] * 0x28;
    pcVar2 = *(char **)(lVar9 + -0x20);
    pcVar1 = &DAT_10017864;
    if (pcVar2 != (char *)0x0) {
      pcVar1 = pcVar2;
    }
    apvStack_60[0] = (void *)recovered_1000b064(pcVar1,*(long *)(lVar9 + -0x18),(long *)0x0,10);
    PF_PART1(lStack_68, 0) = 1;
    uStack_48 = 1;
    iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
    recovered_10009d1c((long)param_1,iVar8,0,iVar6,0,
                       *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
  }
  else {
    bVar5 = recovered_10009c34(param_1,2);
    if (bVar5) {
      lVar9 = *param_1 + param_1[6] * 0x28;
      puVar3 = *(undefined1 **)(lVar9 + -0x20);
      puVar7 = &DAT_10017864;
      if (puVar3 != (undefined1 *)0x0) {
        puVar7 = puVar3;
      }
      apvStack_60[0] = (void *)(uintptr_t)pf_double_bits((double)recovered_1000b0b4(puVar7,*(ulong *)(lVar9 + -0x18),(ulong *)0x0));
      PF_PART1(lStack_68, 0) = 2;
      uStack_48 = 2;
      iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
      recovered_10009d1c((long)param_1,iVar8,0,iVar6,0,
                         *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
    }
    else {
      bVar5 = recovered_10009c34(param_1,3);
      if (bVar5) {
        recovered_10003930((undefined1 *)&lStack_68,
                           (undefined8 *)(*param_1 + param_1[6] * 0x28 + -0x20));
        iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
        recovered_10009d1c((long)param_1,iVar8,0,iVar6,0,
                           *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
      }
      else {
        bVar5 = recovered_10009c34(param_1,0x21);
        if (bVar5) {
          PF_PART1(lStack_68, 0) = 3;
          uStack_48 = 3;
          apvStack_60[0] = (void *)CONCAT71(PF_PART7(apvStack_60[0], 1),1);
          iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
          recovered_10009d1c((long)param_1,iVar8,0,iVar6,0,
                             *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
        }
        else {
          bVar5 = recovered_10009c34(param_1,0x22);
          if (bVar5) {
            PF_PART1(lStack_68, 0) = 3;
            uStack_48 = 3;
            apvStack_60[0] = (void *)((ulong)apvStack_60[0] & 0xffffffffffffff00);
            iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
            recovered_10009d1c((long)param_1,iVar8,0,iVar6,0,
                               *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
          }
          else {
            bVar5 = recovered_10009c34(param_1,0x23);
            if (bVar5) {
              PF_PART1(lStack_68, 0) = 0;
              uStack_48 = 0;
              iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
              recovered_10009d1c((long)param_1,iVar8,0,iVar6,0,
                                 *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
            }
            else {
              bVar5 = recovered_10009c34(param_1,0);
              if (!bVar5) {
                bVar5 = recovered_10009c34(param_1,4);
                if (bVar5) {
                  recovered_10009ca8(param_1,param_2);
                  recovered_100064b8(&lStack_68,((uintptr_t)pf_module_state+0x1a64U));
                  recovered_10009eb0(param_1,5,&lStack_68);
                  data = (void *)CONCAT71(PF_PART7(lStack_68, 1),(undefined1)lStack_68);
                }
                else {
                  bVar5 = recovered_10009c34(param_1,6);
                  if (!bVar5) {
                    recovered_10009e80((undefined1 *)&lStack_68,
                                       (undefined1 *)(*param_1 + param_1[6] * 0x28));
                    recovered_100064b8(alStack_98,((uintptr_t)pf_module_state+0x1aa3U));
                    recovered_100087cc(apvStack_80,param_1 + 3,uStack_48 & 0xffffffff,
                                       uStack_48 >> 0x20,alStack_98);
                    recovered_10008790(apvStack_80);
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000afcc);
                    (*pcVar4)();
                  }
                  recovered_10009e80((undefined1 *)&lStack_68,
                                     (undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
                  if (*(char *)(*param_1 + param_1[6] * 0x28) == '\a') {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = 0;
                    do {
                      recovered_10009ca8(param_1,param_2);
                      bVar5 = recovered_10009c34(param_1,8);
                      iVar6 = iVar6 + 1;
                    } while (bVar5);
                  }
                  recovered_100064b8((long *)apvStack_80,((uintptr_t)pf_module_state+0x1a82U));
                  recovered_10009eb0(param_1,7,apvStack_80);
                  recovered_10002e70(apvStack_80[0]);
                  recovered_10009d1c((long)param_1,iVar8,0x18,iVar6,0,(undefined4)uStack_48);
                  data = apvStack_60[0];
                }
                recovered_10002e70(data);
                goto LAB_1000ad4c;
              }
              recovered_10003930((undefined1 *)&lStack_68,
                                 (undefined8 *)(*param_1 + param_1[6] * 0x28 + -0x20));
              iVar6 = recovered_1000a0a0((long)param_1,(undefined1 *)&lStack_68);
              recovered_10009d1c((long)param_1,iVar8,1,iVar6,0,
                                 *(undefined4 *)(*param_1 + param_1[6] * 0x28 + -8));
            }
          }
        }
      }
    }
  }
  recovered_1000686c((long *)apvStack_60);
LAB_1000ad4c:
  do {
    bVar5 = recovered_10009c34(param_1,4);
    if (bVar5) {
      if (*(char *)(*param_1 + param_1[6] * 0x28) == '\x05') {
        iVar6 = 0;
      }
      else {
        iVar6 = 0;
        do {
          recovered_10009ca8(param_1,param_2);
          iVar6 = iVar6 + 1;
          bVar5 = recovered_10009c34(param_1,8);
        } while (bVar5);
      }
      recovered_100064b8((long *)apvStack_80,((uintptr_t)pf_module_state+0x1a23U));
      puVar7 = (undefined1 *)recovered_10009eb0(param_1,5,apvStack_80);
      recovered_10009e80((undefined1 *)&lStack_68,puVar7);
      recovered_10002e70(apvStack_80[0]);
      recovered_10009d1c((long)param_1,iVar8,0x15,iVar6,0,(undefined4)uStack_48);
    }
    else {
      bVar5 = recovered_10009c34(param_1,6);
      if (!bVar5) {
        return;
      }
      recovered_10009e80((undefined1 *)&lStack_68,
                         (undefined1 *)(*param_1 + param_1[6] * 0x28 + -0x28));
      recovered_10009ca8(param_1,param_2);
      recovered_100064b8((long *)apvStack_80,((uintptr_t)pf_module_state+0x1a40U));
      recovered_10009eb0(param_1,7,apvStack_80);
      recovered_10002e70(apvStack_80[0]);
      recovered_10009d1c((long)param_1,iVar8,0x19,0,0,(undefined4)uStack_48);
    }
    recovered_10002e70(apvStack_60[0]);
  } while( true );
}

#undef DAT_10017864
#undef alStack_98
#undef lStack_68
#undef apvStack_80
#undef uStack_48
#undef apvStack_60

#define local_28 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b064
 */

ulong recovered_1000b064(char *param_1,long param_2,long *param_3,uint param_4)

{
  unsigned char frame[88] = {0};

  code *pcVar1;
  uint128 auVar2;

  local_28 = 0;
  auVar2 = recovered_1000b29c(param_1,param_1 + param_2,&local_28,param_4);
  if (PF_PART4(auVar2, 8) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b0b4);
    (*pcVar1)();
  }
  if (param_3 != (long *)0x0) {
    *param_3 = PF_PART8(auVar2, 0) - (long)param_1;
  }
  return local_28;
}

#undef local_28

#undef DAT_10017848
#define DAT_10017848 (*(double *)(((uintptr_t)pf_module_state + 0x1560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0b4
 */

double recovered_1000b0b4(void *text,ulong size,ulong *used)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;

  pbVar6 = (byte *)((long)text + size);
  pbVar7 = text;
  for (; size != 0; size = size - 1) {
    bVar1 = *pbVar7;
    if (0x2d < bVar1) {
LAB_1000b120:
      bVar4 = false;
      goto LAB_1000b124;
    }
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x280000000000U) == 0) goto LAB_1000b120;
      bVar4 = bVar1 == 0x2d;
      pbVar7 = pbVar7 + 1;
      goto LAB_1000b124;
    }
    pbVar7 = pbVar7 + 1;
  }
  bVar4 = false;
  pbVar7 = pbVar6;
LAB_1000b124:
  bVar5 = false;
  dVar11 = 0.0;
  for (; pbVar7 != pbVar6; pbVar7 = pbVar7 + 1) {
    uVar9 = *pbVar7 - 0x30;
    if (9 < uVar9) {
      if (*pbVar7 != 0x2e) goto LAB_1000b1b0;
      dVar12 = DAT_10017848;
      goto LAB_1000b178;
    }
    dVar11 = (double)(uVar9 & 0xff) + dVar11 * 10.0;
    bVar5 = true;
  }
LAB_1000b1ac:
  pbVar7 = pbVar6;
LAB_1000b1b0:
  if (!bVar5) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000b29c);
    (*pcVar3)();
  }
  pbVar2 = pbVar6;
  if ((pbVar7 != pbVar6) && (pbVar2 = pbVar7, (*pbVar7 | 0x20) == 0x65)) {
    pbVar8 = pbVar7 + 1;
    if ((pbVar8 == pbVar6) || ((bVar1 = *pbVar8, bVar1 != 0x2d && (bVar1 != 0x2b)))) {
      bVar5 = false;
    }
    else {
      bVar5 = bVar1 == 0x2d;
      pbVar8 = pbVar7 + 2;
    }
    uVar9 = 0;
    bVar10 = false;
    for (; pbVar8 != pbVar6; pbVar8 = pbVar8 + 1) {
      if (9 < *pbVar8 - 0x30) {
        pbVar6 = pbVar8;
        break;
      }
      uVar9 = uVar9 * 10 + (*pbVar8 - 0x30 & 0xff);
      bVar10 = true;
    }
    if (bVar10) {
      dVar12 = 1.0;
      for (uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU); uVar9 != 0; uVar9 = uVar9 - 1) {
        dVar12 = dVar12 * 10.0;
      }
      pbVar2 = pbVar6;
      if (bVar5) {
        dVar11 = dVar11 / dVar12;
      }
      else {
        dVar11 = dVar11 * dVar12;
      }
    }
  }
  if (used != (ulong *)0x0) {
    *used = (long)pbVar2 - (long)text;
  }
  dVar12 = -dVar11;
  if (!bVar4) {
    dVar12 = dVar11;
  }
  return dVar12;
LAB_1000b178:
  pbVar7 = pbVar7 + 1;
  if (pbVar7 == pbVar6) goto LAB_1000b1ac;
  if (9 < *pbVar7 - 0x30) goto LAB_1000b1b0;
  dVar11 = dVar11 + dVar12 * (double)(*pbVar7 - 0x30 & 0xff);
  dVar12 = dVar12 * DAT_10017848;
  bVar5 = true;
  goto LAB_1000b178;
}

#undef DAT_10017848

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b29c
 */

uint128 recovered_1000b29c(char *param_1,char *param_2,ulong *param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  long lVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  uint128 auVar11;

  uVar6 = 1;
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (uVar6 = 1, param_2 < param_1)) ||
     (param_4 - 0x25 < 0xffffffdd)) goto LAB_1000b3a0;
  if (param_1 == param_2) {
LAB_1000b318:
    bVar4 = false;
    pcVar7 = param_1;
  }
  else {
    cVar2 = *param_1;
    if ((cVar2 != '-') && (cVar2 != '+')) goto LAB_1000b318;
    bVar4 = cVar2 == '-';
    pcVar7 = param_1 + 1;
  }
  if (pcVar7 != param_2) {
    uVar8 = 0;
    lVar1 = -0x8000000000000000;
    if (!bVar4) {
      lVar1 = 0x7fffffffffffffff;
    }
    uVar9 = (ulong)param_4;
    for (pcVar10 = pcVar7; pcVar10 != param_2; pcVar10 = pcVar10 + 1) {
      uVar5 = recovered_1000b3f0((int)*pcVar10);
      if (param_4 <= uVar5) {
        param_2 = pcVar10;
        break;
      }
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = (lVar1 - (ulong)uVar5) / uVar9;
      }
      if (uVar3 < uVar8) {
        uVar6 = 2;
        param_1 = pcVar10;
        goto LAB_1000b3cc;
      }
      uVar8 = (ulong)uVar5 + uVar8 * uVar9;
    }
    if (param_2 != pcVar7) {
      uVar6 = 0;
      uVar9 = -uVar8;
      if (!bVar4) {
        uVar9 = uVar8;
      }
      *param_3 = uVar9;
LAB_1000b394:
      param_1 = param_2;
      goto LAB_1000b3a0;
    }
  }
  uVar6 = 1;
LAB_1000b3a0:
  PF_PART8(auVar11, 8) = uVar6;
  PF_PART8(auVar11, 0) = param_1;
  return auVar11;
  while (uVar5 = recovered_1000b3f0((int)*param_1), uVar5 < param_4) {
LAB_1000b3cc:
    param_1 = param_1 + 1;
    param_2 = param_2;
    if (param_1 == param_2) goto LAB_1000b394;
  }
  uVar6 = 2;
  goto LAB_1000b3a0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3f0
 */

uint recovered_1000b3f0(int param_1)

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
 * Address: 0x1000b420
 */

void recovered_1000b420(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008d8c((long *)param_1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b448
 */

void recovered_1000b448(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_1000a6c4(param_1,param_2);
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
    recovered_1000a6c4(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#define uStack_24 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b450
 */

long recovered_1000b450(long param_1,undefined8 *param_2)

{
  unsigned char frame[84] = {0};

  long lVar1;
  uint128 auVar2;

  lVar1 = recovered_1000b4a8((long *)(param_1 + 0x60),param_2);
  if (lVar1 == *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x68) * 0x20) {
    uStack_24 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    recovered_1000a0c8((long *)(param_1 + 0x48),param_2);
    auVar2 = recovered_1000b9e8((long *)(param_1 + 0x60),param_2,&uStack_24);
    lVar1 = PF_PART8(auVar2, 0);
  }
  return lVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4a8
 */

long recovered_1000b4a8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_1000bca4(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4dc
 */

void recovered_1000b4dc(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_1000a6c4(param_1,param_2);
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
    recovered_1000a6c4(param_1,param_2);
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
 * Address: 0x1000b55c
 */

void recovered_1000b55c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000a6c4(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#define iStack_c4 (*(int *)(frame + 16))
#define auStack_c0 (*(ushort (*)[2])(frame + 20))
#define uStack_b4 (*(undefined4 *)(frame + 32))
#define uStack_b8 (*(undefined4 *)(frame + 28))
#define uStack_a8 (*(undefined8 *)(frame + 44))
#define pvStack_b0 (*(void * *)(frame + 36))
#define uStack_98 (*(undefined4 *)(frame + 60))
#define local_bc (*(int *)(frame + 24))
#define uStack_a0 (*(undefined8 *)(frame + 52))
#define local_88 (*(undefined4 * *)(frame + 76))
#define local_80 (*(ulong *)(frame + 84))
#define uStack_90 (*(undefined8 *)(frame + 68))
#define uStack_78 (*(undefined8 *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5c0
 */

undefined8
recovered_1000b5c0(long param_1,ulong param_2,ulong param_3,long *param_4,undefined4 *param_5)

{
  unsigned char frame[244] = {0};

  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;

  local_80 = 0;
  uStack_78 = 0;
  local_88 = (undefined4 *)0x0;
  do {
    if (param_3 <= param_2) {
      if (local_80 == 1) {
        *param_5 = *local_88;
        uVar7 = 1;
      }
      else {
LAB_1000b830:
        uVar7 = 0;
      }
switchD_1000b64c_caseD_2:
      local_80 = 0;
      recovered_10002e70(local_88);
      return uVar7;
    }
    uVar7 = 0;
    pbVar1 = (byte *)(*(long *)(param_1 + 0x30) + param_2 * 0x10);
    bVar2 = *pbVar1;
    if (0x18 < bVar2) goto switchD_1000b64c_caseD_2;
    switch((uintptr_t)(bVar2)) {
    case 0:
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      pvStack_b0 = (void *)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_90 = 0xffffffffffffffff;
      auStack_c0[0] = 0;
      local_bc = *(int *)(pbVar1 + 4);
      uStack_98 = *(undefined4 *)(pbVar1 + 0xc);
      recovered_1000b8dc(param_4,(undefined8 *)auStack_c0);
      iStack_c4 = (int)param_4[1] + -1;
      recovered_1000b92c((long *)&local_88,&iStack_c4);
      break;
    case 1:
      local_bc = 0;
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      uStack_a8 = 0;
      uStack_a0 = 0;
      pvStack_b0 = (void *)0x0;
      uStack_98 = 1;
      uStack_90 = 0xffffffffffffffff;
      auStack_c0[0] = 0;
      if ((param_2 < *(ulong *)(param_1 + 0xb8)) &&
         (iVar4 = *(int *)(*(long *)(param_1 + 0xb0) + param_2 * 4), iVar4 != -1)) {
        if (*(ulong *)(param_1 + 0x20) <= (ulong)(long)iVar4) {
          recovered_10002e70((void *)0x0);
          goto LAB_1000b830;
        }
        auStack_c0[0] = 0x100;
      }
      else {
        auStack_c0[0] = 0x200;
        iVar4 = *(int *)(pbVar1 + 4);
      }
      uStack_98 = *(undefined4 *)(pbVar1 + 0xc);
      local_bc = iVar4;
      recovered_1000b8dc(param_4,(undefined8 *)auStack_c0);
      iStack_c4 = (int)param_4[1] + -1;
      recovered_1000b92c((long *)&local_88,&iStack_c4);
      break;
    case 2:
    case 3:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      goto switchD_1000b64c_caseD_2;
    default:
      if (local_80 < 2) goto LAB_1000b830;
      bVar5 = 0;
      local_bc = 0;
      pvStack_b0 = (void *)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_90 = 0xffffffffffffffff;
      uVar3 = bVar2 - 4;
      if (uVar3 < 0xd) {
        bVar5 = *(byte *)(((ulong)uVar3 & 0xff) + ((uintptr_t)pf_module_state+0x1547U));
      }
      auStack_c0[0] = (ushort)bVar5;
      uStack_b8 = (undefined4)*(undefined8 *)(local_88 + (local_80 - 2));
      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(local_88 + (local_80 - 2)) >> 0x20);
      uStack_98 = *(undefined4 *)(pbVar1 + 0xc);
      local_80 = local_80 - 2;
      recovered_1000b8dc(param_4,(undefined8 *)auStack_c0);
      iStack_c4 = (int)param_4[1] + -1;
      recovered_1000b92c((long *)&local_88,&iStack_c4);
      break;
    case 9:
    case 10:
      if (local_80 == 0) goto LAB_1000b830;
      local_bc = 0;
      uStack_b4 = 0xffffffff;
      uStack_a8 = 0;
      uStack_a0 = 0;
      pvStack_b0 = (void *)0x0;
      uStack_90 = 0xffffffffffffffff;
      bVar5 = 6;
      if (bVar2 != 9) {
        bVar5 = 7;
      }
      auStack_c0[0] = (ushort)bVar5;
      uStack_b8 = local_88[local_80 - 1];
      uStack_98 = *(undefined4 *)(pbVar1 + 0xc);
      local_88[local_80 - 1] = (int)param_4[1];
      recovered_1000b8dc(param_4,(undefined8 *)auStack_c0);
      break;
    case 0x18:
      uVar8 = (ulong)*(uint *)(pbVar1 + 4);
      if (((int)*(uint *)(pbVar1 + 4) < 0) || (local_80 < uVar8)) goto LAB_1000b830;
      local_bc = 0;
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      pvStack_b0 = (void *)0x0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_90 = 0xffffffffffffffff;
      auStack_c0[0] = 0xe;
      uStack_98 = *(undefined4 *)(pbVar1 + 0xc);
      recovered_1000b55c((long *)&pvStack_b0,uVar8);
      uVar6 = uVar8 << 2;
      while (uVar8 != 0) {
        local_80 = local_80 - 1;
        *(undefined4 *)((long)pvStack_b0 + (uVar6 - 4)) = local_88[local_80];
        uVar6 = uVar6 - 4;
        uVar8 = uVar6;
      }
      recovered_1000b8dc(param_4,(undefined8 *)auStack_c0);
      iStack_c4 = (int)param_4[1] + -1;
      recovered_1000b92c((long *)&local_88,&iStack_c4);
    }
    uStack_a8 = 0;
    recovered_10002e70(pvStack_b0);
    param_2 = param_2 + 1;
  } while( true );
}

#undef iStack_c4
#undef auStack_c0
#undef uStack_b4
#undef uStack_b8
#undef uStack_a8
#undef pvStack_b0
#undef uStack_98
#undef local_bc
#undef uStack_a0
#undef local_88
#undef local_80
#undef uStack_90
#undef uStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b894
 */

undefined8 * recovered_1000b894(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_10008ed8(param_1);
    recovered_10002e70((void *)*param_1);
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
 * Address: 0x1000b8dc
 */

void recovered_1000b8dc(long *param_1,undefined8 *param_2)

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
    recovered_1000a7a8(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000a83c((undefined8 *)(*param_1 + lVar2 * 0x38),param_2);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b92c
 */

long recovered_1000b92c(long *param_1,undefined4 *param_2)

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
    recovered_1000a6c4(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b990
 */

char * recovered_1000b990(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  char *pcVar2;

  if ((((int)param_2 < 0) || (*(ulong *)(param_1 + 0x20) <= (ulong)param_2)) ||
     (pcVar2 = (char *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x28), *pcVar2 != '\x04')) {
    return (char *)0x0;
  }
  if (*(long *)(pcVar2 + 0x20) != 4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b9d0);
    (*pcVar1)();
  }
  return pcVar2 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9d0
 */

uint recovered_1000b9d0(undefined8 *in_x0,char *in_x1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_100071cc(in_x0,in_x1);
  return bVar1 ^ 1;
}


#undef PTR_DAT_1001c018
#define PTR_DAT_1001c018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9e8
 */

uint128 recovered_1000b9e8(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;
  uint128 auVar3;

  lVar2 = recovered_1000b4a8(param_1,param_2);
  bVar1 = lVar2 == *param_1 + param_1[1] * 0x20;
  if (bVar1) {
    recovered_1000ba78((long)param_1);
    recovered_1000baa8(param_1,param_2,param_3);
    recovered_10007b18(param_1 + 6,(undefined8 *)PTR_DAT_1001c018);
    recovered_1000bb24((long)param_1,param_1[1] + -1);
    lVar2 = *param_1 + param_1[1] * 0x20 + -0x20;
  }
  PF_PART1(auVar3,8) = bVar1;
  PF_PART8(auVar3, 0) = lVar2;
  PF_PART7(auVar3, 9) = 0;
  return auVar3;
}

#undef PTR_DAT_1001c018

#undef PTR_DAT_1001c018
#define PTR_DAT_1001c018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba78
 */

void recovered_1000ba78(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;

  if (*(long *)(param_1 + 0x20) != 0 &&
      *(long *)(param_1 + 8) * 4 + 4U <= (ulong)(*(long *)(param_1 + 0x20) * 3)) {
    return;
  }
  uVar3 = *(long *)(param_1 + 8) * 2 + 2;
  uVar1 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar3 = recovered_1000bbcc(uVar1);
  puVar2 = PTR_DAT_1001c018;
  recovered_10007810((long *)(param_1 + 0x18),uVar3,(undefined8 *)PTR_DAT_1001c018);
  recovered_10007810((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar2);
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x20); uVar3 = uVar3 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar3 * 8) = 0xffffffffffffffff;
  }
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
    recovered_1000bb24(param_1,uVar3);
  }
  return;
}

#undef PTR_DAT_1001c018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000baa8
 */

long recovered_1000baa8(long *param_1,undefined8 *param_2,undefined4 *param_3)

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
    recovered_1000a574(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000bc4c((undefined8 *)(*param_1 + lVar2 * 0x20),param_2,param_3);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + (lVar2 + 1) * 0x20 + -0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb24
 */

void recovered_1000bb24(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_1000bc74(param_1,(undefined8 *)(*(long *)param_1 + param_2 * 0x20));
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x30) + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


#undef PTR_DAT_1001c018
#define PTR_DAT_1001c018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb64
 */

void recovered_1000bb64(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  ulong uVar2;

  uVar2 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar2 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = recovered_1000bbcc(uVar2);
  puVar1 = PTR_DAT_1001c018;
  recovered_10007810((long *)(param_1 + 0x18),uVar2,(undefined8 *)PTR_DAT_1001c018);
  recovered_10007810((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar1);
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar2 * 8) = 0xffffffffffffffff;
  }
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 8); uVar2 = uVar2 + 1) {
    recovered_1000bb24(param_1,uVar2);
  }
  return;
}

#undef PTR_DAT_1001c018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbcc
 */

ulong recovered_1000bbcc(ulong param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbe8
 */

void recovered_1000bbe8(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_1000bb24(param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc4c
 */

void recovered_1000bc4c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10006dc0(param_1,param_2);
  *(undefined4 *)(puVar1 + 3) = *param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc74
 */

ulong recovered_1000bc74(long param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007644(param_1 + 0x48,in_x1);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bca4
 */

long recovered_1000bca4(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  long *plVar3;
  long lVar4;

  if (param_1[4] == 0) {
    lVar4 = -1;
  }
  else {
    uVar1 = recovered_1000bc74((long)param_1,param_2);
    plVar3 = (long *)(param_1[3] + uVar1 * 8);
    while ((lVar4 = *plVar3, lVar4 != -1 &&
           (uVar2 = recovered_10007694((undefined8 *)(*param_1 + lVar4 * 0x20),param_2),
           (uVar2 & 1) == 0))) {
      plVar3 = (long *)(param_1[6] + lVar4 * 8);
    }
  }
  return lVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd14
 */

long * recovered_1000bd14(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007b80(param_1,param_2[1]);
  lVar1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)param_2[1]; uVar2 = uVar2 + 1) {
    recovered_1000a8e0((undefined1 *)(*param_1 + lVar1),(undefined1 *)(*param_2 + lVar1));
    lVar1 = lVar1 + 0x28;
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd88
 */

long recovered_1000bd88(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000be34((long *)(param_1 + 0x10));
  return param_1;
}


#undef PTR_recovered_1000bd88_1001c0f0
#define PTR_recovered_1000bd88_1001c0f0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5e08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdb0
 */

undefined8 * recovered_1000bdb0(undefined8 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_recovered_1000bd88_1001c0f0;
  param_1[1] = 0;
  recovered_1000be04((long)param_1,param_2,param_3);
  return param_1;
}

#undef PTR_recovered_1000bd88_1001c0f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be04
 */

void recovered_1000be04(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000be84((long *)(param_1 + 0x10),param_2,param_3 | 2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be34
 */

long * recovered_1000be34(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000bedc(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be5c
 */

void recovered_1000be5c(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000be34((long *)((long)param_1 + 0x10));
  recovered_10000c54(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be84
 */

void recovered_1000be84(long *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined4 *puVar2;

  recovered_1000bedc(param_1);
  puVar1 = recovered_1000bf10(param_3);
  puVar2 = recovered_1000219c(param_2,(long)puVar1);
  *param_1 = (long)puVar2;
  *(bool *)(param_1 + 1) = puVar2 != (undefined4 *)0x0;
  param_1[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bedc
 */

void recovered_1000bedc(long *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*param_1 != (int *)0x0) {
    recovered_100024e4((int *)*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}


#undef DAT_10017dc5
#define DAT_10017dc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1addU)))
#undef DAT_10017dc9
#define DAT_10017dc9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae1U)))
#undef DAT_10017dcc
#define DAT_10017dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae4U)))
#undef DAT_10017dda
#define DAT_10017dda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf10
 */

undefined * recovered_1000bf10(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;

  bVar4 = (param_1 & 4) != 0;
  puVar1 = (undefined *)((uintptr_t)pf_module_state+0x1affU);
  if (bVar4) {
    puVar1 = (undefined *)((uintptr_t)pf_module_state+0x1afcU);
  }
  puVar2 = (undefined *)((uintptr_t)pf_module_state+0x1afaU);
  if (bVar4) {
    puVar2 = (undefined *)((uintptr_t)pf_module_state+0x1af7U);
  }
  puVar3 = (undefined *)((uintptr_t)pf_module_state+0x1af5U);
  if ((param_1 & 4) != 0) {
    puVar3 = &DAT_10017dda;
  }
  if ((param_1 & 8) != 0) {
    puVar2 = puVar3;
  }
  if ((param_1 & 2) != 0) {
    puVar1 = puVar2;
  }
  bVar4 = (param_1 & 4) != 0;
  puVar2 = (undefined *)((uintptr_t)pf_module_state+0x1aefU);
  if (bVar4) {
    puVar2 = (undefined *)((uintptr_t)pf_module_state+0x1aebU);
  }
  puVar3 = (undefined *)((uintptr_t)pf_module_state+0x1ae8U);
  if (bVar4) {
    puVar3 = &DAT_10017dcc;
  }
  if ((param_1 & 0x10) != 0) {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_10017dc9;
  if ((param_1 & 4) != 0) {
    puVar3 = &DAT_10017dc5;
  }
  if ((param_1 & 8) != 0) {
    puVar2 = puVar3;
  }
  if (((param_1 ^ 0xffffffff) & 3) == 0) {
    puVar1 = puVar2;
  }
  return puVar1;
}

#undef DAT_10017dc5
#undef DAT_10017dc9
#undef DAT_10017dcc
#undef DAT_10017dda

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfc8
 */

void recovered_1000bfc8(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if ((uint *)*param_1 != (uint *)0x0) {
    if ((-1 < param_3) && (param_2 != 0 || param_3 == 0)) {
      lVar1 = recovered_100026bc((void *)param_2,1,param_3,(uint *)*param_1);
      *(bool *)(param_1 + 1) = lVar1 == param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c028
 */

long * recovered_1000c028(long *param_1,long param_2)

{
  unsigned char frame[608] = {0};

  ulong uVar1;

  if (param_2 != 0) {
    do {
      uVar1 = recovered_10002528(auStack_230,1,0x200,(int *)param_2);
      if (uVar1 == 0) {
        return param_1;
      }
      recovered_10006e00(param_1,(long)auStack_230,uVar1);
    } while (0x1ff < uVar1);
  }
  return param_1;
}

#undef auStack_230

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c094
 */

long recovered_1000c094(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000be34((long *)(param_1 + 0x10));
  return param_1;
}


#undef PTR_recovered_1000c094_1001c168
#define PTR_recovered_1000c094_1001c168 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5e80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0bc
 */

undefined8 * recovered_1000c0bc(undefined8 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_recovered_1000c094_1001c168;
  param_1[1] = 0;
  recovered_1000c110((long)param_1,param_2,param_3);
  return param_1;
}

#undef PTR_recovered_1000c094_1001c168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c110
 */

void recovered_1000c110(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000be84((long *)(param_1 + 0x10),param_2,param_3 | 1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c140
 */

void recovered_1000c140(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000be34((long *)((long)param_1 + 0x10));
  recovered_10000c54(param_1);
  return;
}


#undef PTR_recovered_1000d470_1001c1d0
#define PTR_recovered_1000d470_1001c1d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5ee8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c168
 */

void recovered_1000c168(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;

  puVar1 = recovered_10002e3c(0x48);
  uVar2 = recovered_10007ad4(puVar1,(undefined8 *)param_2);
  recovered_1000d454((undefined8 *)(uVar2 + 0x18),(undefined8 *)(param_2 + 0x18));
  puVar1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar1[8] = *(undefined8 *)(param_2 + 0x40);
  puVar1[7] = uVar4;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  puVar3 = recovered_10002e3c(0x20);
  puVar3[2] = 1;
  puVar3[1] = 1;
  *puVar3 = &PTR_recovered_1000d470_1001c1d0;
  puVar3[3] = puVar1;
  *param_1 = puVar3;
  param_1[1] = puVar1;
  return;
}

#undef PTR_recovered_1000d470_1001c1d0

#undef DAT_10016558
#define DAT_10016558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#define pvStack_88 (*(void * *)(frame + 16))
#define apvStack_78 (*(void * (*)[3])(frame + 32))
#define local_80 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1e8
 */

void recovered_1000c1e8(long param_1,long *param_2)

{
  unsigned char frame[184] = {0};

  undefined1 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;

  if ((ulong)param_2[1] < 8) {
    recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1b1eU));
    recovered_10008790(apvStack_78);
  }
  else {
    iVar6 = recovered_10000d98((void *)*param_2,&DAT_10016558,4);
    if (iVar6 == 0) {
      local_80 = 4;
      iVar6 = recovered_1000d4a0(param_2,(long *)&local_80);
      if (iVar6 == 1) {
        recovered_100064b8((long *)param_1,((uintptr_t)pf_module_state+0x18e9U));
        plVar14 = (long *)(param_1 + 0x18);
        *plVar14 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        plVar11 = (long *)(param_1 + 0x30);
        *plVar11 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        recovered_1000d4e4(apvStack_78,param_2,(long *)&local_80);
        recovered_100088f0((undefined8 *)param_1,apvStack_78);
        recovered_10002e70(apvStack_78[0]);
        uVar9 = recovered_1000d4a0(param_2,(long *)&local_80);
        uVar15 = (ulong)uVar9;
        recovered_10007b80(plVar14,uVar15);
        while (uVar9 != 0) {
          uVar4 = recovered_1000d56c(param_2,(long *)&local_80);
          switch((uintptr_t)(uVar4)) {
          case 0:
            recovered_10007544(plVar14);
            break;
          case 1:
            uVar12 = local_80 + 8;
            if ((ulong)param_2[1] < uVar12) {
              recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1bbaU));
              recovered_10008790(apvStack_78);
              goto LAB_1000c5b8;
            }
            apvStack_78[0] = (void *)0x0;
            recovered_10000ce4(apvStack_78,(void *)(*param_2 + local_80),8);
            pvStack_88 = apvStack_78[0];
            local_80 = uVar12;
            recovered_1000d5e0(plVar14,&pvStack_88);
            break;
          case 2:
            uVar12 = local_80 + 8;
            if ((ulong)param_2[1] < uVar12) {
              recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1bbaU));
              recovered_10008790(apvStack_78);
              goto LAB_1000c5b8;
            }
            apvStack_78[0] = (void *)0x0;
            recovered_10000ce4(apvStack_78,(void *)(*param_2 + local_80),8);
            pvStack_88 = apvStack_78[0];
            local_80 = uVar12;
            recovered_1000d650(plVar14,&pvStack_88);
            break;
          case 3:
            cVar5 = recovered_1000d56c(param_2,(long *)&local_80);
            apvStack_78[0] = (void *)CONCAT71(PF_PART7(apvStack_78[0], 1),cVar5 != '\0');
            recovered_1000d6c0(plVar14,(undefined1 *)apvStack_78);
            break;
          case 4:
            recovered_1000d4e4(apvStack_78,param_2,(long *)&local_80);
            recovered_1000d730(plVar14,apvStack_78);
            recovered_10002e70(apvStack_78[0]);
            break;
          default:
            recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1b6eU));
            recovered_10008790(apvStack_78);
            goto LAB_1000c5b8;
          }
          uVar9 = (int)uVar15 - 1;
          uVar15 = (ulong)uVar9;
        }
        uVar9 = recovered_1000d4a0(param_2,(long *)&local_80);
        uVar15 = (ulong)uVar9;
        if (uVar9 != 0) {
          uVar12 = *(ulong *)(param_1 + 0x38);
          if (uVar15 < uVar12) {
            lVar13 = uVar12 * 0x120;
            for (; lVar13 = lVar13 + -0x120, uVar15 < uVar12; uVar12 = uVar12 - 1) {
              recovered_10008ab8(*plVar11 + lVar13);
            }
            *(ulong *)(param_1 + 0x38) = uVar15;
          }
          else if (uVar12 < uVar15) {
            recovered_10008b50(plVar11,uVar15);
            uVar12 = *(ulong *)(param_1 + 0x38);
            while (uVar12 < uVar15) {
              puVar16 = (undefined8 *)(*plVar11 + uVar12 * 0x120);
              recovered_10000d70((undefined1 *)puVar16,0x120);
              recovered_10009f78(puVar16);
              uVar12 = *(long *)(param_1 + 0x38) + 1;
              *(ulong *)(param_1 + 0x38) = uVar12;
            }
          }
          for (uVar12 = 0; uVar12 != uVar15; uVar12 = uVar12 + 1) {
            lVar13 = *plVar11;
            recovered_1000d4e4(apvStack_78,param_2,(long *)&local_80);
            puVar16 = (undefined8 *)(lVar13 + uVar12 * 0x120);
            recovered_100088f0(puVar16,apvStack_78);
            recovered_10002e70(apvStack_78[0]);
            uVar9 = recovered_1000d4a0(param_2,(long *)&local_80);
            uVar17 = (ulong)uVar9;
            recovered_1000a13c(puVar16 + 3,uVar17);
            while (uVar9 != 0) {
              recovered_1000d4e4(apvStack_78,param_2,(long *)&local_80);
              recovered_1000d7e8(puVar16 + 3,apvStack_78);
              recovered_10002e70(apvStack_78[0]);
              uVar9 = (int)uVar17 - 1;
              uVar17 = (ulong)uVar9;
            }
            uVar9 = recovered_1000d4a0(param_2,(long *)&local_80);
            uVar17 = (ulong)uVar9;
            recovered_1000a428(puVar16 + 6,uVar17);
            while (uVar9 != 0) {
              uVar4 = recovered_1000d56c(param_2,(long *)&local_80);
              uVar7 = recovered_1000d7a4(param_2,(long *)&local_80);
              uVar8 = recovered_1000d7a4(param_2,(long *)&local_80);
              uVar10 = recovered_1000d4a0(param_2,(long *)&local_80);
              lVar13 = puVar16[7];
              if (lVar13 == puVar16[8]) {
                uVar2 = 4;
                if (lVar13 != 0) {
                  uVar2 = lVar13 << 1;
                }
                recovered_1000a428(puVar16 + 6,uVar2);
                lVar13 = puVar16[7];
              }
              puVar1 = (undefined1 *)(puVar16[6] + lVar13 * 0x10);
              *puVar1 = uVar4;
              *(undefined4 *)(puVar1 + 4) = uVar7;
              *(undefined4 *)(puVar1 + 8) = uVar8;
              *(undefined4 *)(puVar1 + 0xc) = uVar10;
              puVar16[7] = puVar16[7] + 1;
              uVar9 = (int)uVar17 - 1;
              uVar17 = (ulong)uVar9;
            }
          }
          recovered_1000983c(param_1);
          return;
        }
        recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1b96U));
        recovered_10008790(apvStack_78);
      }
      else {
        recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1b51U));
        recovered_10008790(apvStack_78);
      }
    }
    else {
      recovered_100064b8((long *)apvStack_78,((uintptr_t)pf_module_state+0x1b39U));
      recovered_10008790(apvStack_78);
    }
  }
LAB_1000c5b8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c5bc);
  (*pcVar3)();
}

#undef DAT_10016558
#undef pvStack_88
#undef apvStack_78
#undef local_80

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define local_420 (*(long * *)(frame + 16))
#define local_380 (*(undefined1 (*)[8])(frame + 176))
#define local_360 (*(undefined8 *)(frame + 208))
#define local_358 (*(long *)(frame + 216))
#define local_350 (*(ulong *)(frame + 224))
#define local_340 (*(undefined8 * *)(frame + 240))
#define local_338 (*(undefined8 *)(frame + 248))
#define local_328 (*(long * *)(frame + 264))
#define local_320 (*(undefined8 *)(frame + 272))
#define auStack_3f8 (*(undefined1 (*)[8])(frame + 56))
#define bStack_3d0 (*(byte *)(frame + 96))
#define uStack_3cf (*(undefined7 *)(frame + 97))
#define abStack_3f0 (*(byte (*)[24])(frame + 64))
#define uStack_3d8 (*(undefined8 *)(frame + 88))
#define bStack_3a0 (*(byte *)(frame + 144))
#define iStack_39f (*(int7 *)(frame + 145))
#define alStack_3c8 (*(long (*)[4])(frame + 104))
#define abStack_3a8 (*(byte (*)[8])(frame + 136))
#define alStack_378 (*(long (*)[3])(frame + 184))
#define lStack_388 (*(long *)(frame + 168))
#define uStack_348 (*(undefined8 *)(frame + 232))
#define uStack_330 (*(undefined8 *)(frame + 256))
#define uStack_308 (*(undefined8 *)(frame + 296))
#define alStack_300 (*(long (*)[80])(frame + 304))
#define uStack_318 (*(undefined8 *)(frame + 280))
#define uStack_310 (*(undefined8 *)(frame + 288))
#define apvStack_80 (*(void * (*)[4])(frame + 944))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c644
 */

void recovered_1000c644(undefined1 *param_1,char *param_2,long *param_3,uint param_4,long param_5,
                       long param_6)

{
  unsigned char frame[1104] = {0};

  byte *pbVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  undefined1 *puVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  long *unaff_x19;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong unaff_x24;
  ulong in_x1;
  undefined8 *puVar18;

  puVar16 = (undefined8 *)param_3[1];
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar16,((uintptr_t)pf_module_state+0x1bf2U));
    recovered_10002fb4((long)puVar16,&LAB_1001c050,recovered_10004120);
    puVar16 = (undefined8 *)0x0;
  }
  else {
    if (((int)param_4 < 0) || ((ulong)puVar16[7] <= (ulong)param_4)) {
      recovered_100064b8(alStack_300,((uintptr_t)pf_module_state+0x1c15U));
      recovered_1000d85c(puVar16,0,alStack_300);
      goto LAB_1000d1a4;
    }
    puVar16 = (undefined8 *)(puVar16[6] + (ulong)param_4 * 0x120);
    unaff_x19 = param_3;
    unaff_x24 = param_6;
    if (puVar16[4] == param_6) {
      in_x1 = puVar16[10];
      recovered_1000eb58((long)alStack_300);
      local_328 = (long *)0x0;
      uStack_318 = 0;
      local_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      local_340 = (undefined8 *)0x0;
      uStack_330 = 0;
      local_338 = 0;
      if (in_x1 == 0) {
        puVar17 = (undefined8 *)0x0;
        local_420 = (long *)0x0;
      }
      else {
        if (in_x1 < 0x11) {
          for (uVar15 = 0; in_x1 != uVar15; uVar15 = uVar15 + 1) {
            *(undefined1 *)((long)alStack_300 + (uVar15 - 0x10)) = 0;
          }
          local_420 = alStack_300;
          puVar17 = &uStack_310;
        }
        else {
          recovered_10007e00((long *)&local_328,in_x1);
          local_380[0] = 0;
          recovered_1000d8f8((long)&local_340,in_x1,local_380);
          puVar17 = local_340;
          local_420 = local_328;
        }
        plVar10 = local_420;
        for (uVar15 = 0; uVar15 < (ulong)puVar16[4]; uVar15 = uVar15 + 1) {
          recovered_1000715c((undefined1 *)plVar10,(undefined1 *)param_5);
          *(undefined1 *)((long)puVar17 + uVar15) = 1;
          param_5 = param_5 + 0x28;
          plVar10 = plVar10 + 5;
        }
      }
      local_350 = 0;
      uStack_348 = 0;
      local_358 = 0;
      uVar15 = puVar16[7];
      if (uVar15 < 9) {
        uVar15 = 8;
      }
      recovered_10007b80(&local_358,uVar15);
      local_380[0] = 0;
      local_360 = 0;
      uVar15 = 0;
switchD_1000c788_default:
      uVar8 = uVar15;
      if ((ulong)puVar16[7] <= uVar8) {
        recovered_10007c2c(param_1,local_380);
        goto LAB_1000ce90;
      }
      uVar15 = uVar8 + 1;
      pbVar1 = (byte *)(puVar16[6] + uVar8 * 0x10);
      switch((uintptr_t)(*pbVar1)) {
      case 0:
        uVar13 = *(uint *)(pbVar1 + 4);
        puVar18 = (undefined8 *)param_3[1];
        if (((int)uVar13 < 0) || ((ulong)puVar18[4] <= (ulong)uVar13)) {
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1c64U));
          recovered_1000d85c(puVar18,uVar13,(undefined8 *)abStack_3a8);
          goto LAB_1000d1a4;
        }
        recovered_1000a86c(&local_358,(undefined1 *)(puVar18[3] + (ulong)uVar13 * 0x28));
        goto switchD_1000c788_default;
      case 1:
        if ((uVar8 < (ulong)puVar16[0x17]) && (in_x1 != 0)) {
          iVar3 = *(int *)(puVar16[0x16] + uVar8 * 4);
          uVar11 = (ulong)iVar3;
          if (((iVar3 != -1 && uVar11 <= in_x1) && (iVar3 == -1 || in_x1 != uVar11)) &&
             (*(char *)((long)puVar17 + uVar11) != '\0')) {
            recovered_1000a86c(&local_358,(undefined1 *)(local_420 + (long)iVar3 * 5));
            goto switchD_1000c788_default;
          }
        }
        pcVar9 = recovered_1000d900(param_3[1],*(uint *)(pbVar1 + 4),(ulong)*(uint *)(pbVar1 + 0xc))
        ;
        if (uVar8 < (ulong)puVar16[0x1a]) {
          uVar11 = *(ulong *)(puVar16[0x19] + uVar8 * 8);
        }
        else {
          uVar11 = 0xffffffffffffffff;
        }
        puVar7 = (undefined1 *)recovered_10008514((long)param_2,uVar11);
        if (puVar7 == (undefined1 *)0x0) {
          uVar11 = recovered_100084d4((long)param_2,(undefined8 *)pcVar9);
          puVar7 = (undefined1 *)recovered_10008514((long)param_2,uVar11);
          if (puVar7 == (undefined1 *)0x0) {
            puVar16 = (undefined8 *)param_3[1];
            uVar13 = *(uint *)(pbVar1 + 0xc);
            recovered_1000403c((long *)&bStack_3d0,((uintptr_t)pf_module_state+0x1c83U),(undefined8 *)pcVar9);
            recovered_10003ff0((undefined8 *)abStack_3a8,(undefined8 *)&bStack_3d0,((uintptr_t)pf_module_state+0x1878U));
            recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          if (uVar8 < (ulong)puVar16[0x1a]) {
            *(ulong *)(puVar16[0x19] + uVar8 * 8) = uVar11;
          }
        }
        recovered_1000a86c(&local_358,puVar7);
        goto switchD_1000c788_default;
      case 2:
        if (local_350 == 0) {
          puVar16 = (undefined8 *)param_3[1];
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1ca4U));
          recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
          goto LAB_1000d1a4;
        }
        if (((uVar8 < (ulong)puVar16[0x17]) && (param_4 != 0)) &&
           (iVar3 = *(int *)(puVar16[0x16] + uVar8 * 4), iVar3 != -1)) {
          if (in_x1 <= (ulong)(long)iVar3) {
            puVar16 = (undefined8 *)param_3[1];
            uVar13 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1cc0U));
            recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          recovered_1000715c((undefined1 *)(local_420 + (long)iVar3 * 5),
                             (undefined1 *)(local_358 + local_350 * 0x28 + -0x28));
          *(undefined1 *)((long)puVar17 + (long)iVar3) = 1;
        }
        else {
          pcVar9 = recovered_1000d900(param_3[1],*(uint *)(pbVar1 + 4),
                                      (ulong)*(uint *)(pbVar1 + 0xc));
          if ((((ulong)puVar16[0x1a] <= uVar8) ||
              (uVar11 = *(ulong *)(puVar16[0x19] + uVar8 * 8), uVar11 == 0xffffffffffffffff)) &&
             (uVar11 = recovered_10006fac((long)param_2,(undefined8 *)pcVar9),
             uVar8 < (ulong)puVar16[0x1a])) {
            *(ulong *)(puVar16[0x19] + uVar8 * 8) = uVar11;
          }
          recovered_10007028((long)param_2,uVar11,
                             (undefined1 *)(local_358 + local_350 * 0x28 + -0x28));
          uVar8 = local_350;
          lVar14 = local_358;
          puVar7 = (undefined1 *)recovered_100070a8((long *)param_2,(undefined8 *)pcVar9);
          recovered_1000715c(puVar7,(undefined1 *)(lVar14 + uVar8 * 0x28 + -0x28));
        }
        goto switchD_1000c788_default;
      case 3:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d9e4(local_380,abStack_3a8);
        goto LAB_1000cd08;
      case 4:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000da10(auStack_3f8,&bStack_3d0,abStack_3a8,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 5:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000db94(auStack_3f8,&bStack_3d0,abStack_3a8,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 6:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000dc38(auStack_3f8,&bStack_3d0,abStack_3a8,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 7:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000dcdc(auStack_3f8,&bStack_3d0,abStack_3a8,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 8:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000dd94(auStack_3f8,&bStack_3d0,abStack_3a8,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 9:
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000de98(abStack_3a8,&bStack_3d0,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,abStack_3a8);
        goto LAB_1000caa8;
      case 10:
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        bStack_3a0 = recovered_10003c34((char *)&bStack_3d0);
        abStack_3a8[0] = 3;
        bStack_3a0 = bStack_3a0 ^ 1;
        lStack_388 = 3;
        recovered_1000ec00(&local_358,abStack_3a8);
LAB_1000caa8:
        recovered_1000686c((long *)&bStack_3a0);
        recovered_1000686c(alStack_3c8);
        goto switchD_1000c788_default;
      case 0xb:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        uVar8 = recovered_1000df10(&bStack_3d0,abStack_3a8);
        auStack_3f8[0] = 3;
        uStack_3d8 = 3;
        abStack_3f0[0] = (byte)uVar8;
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 0xc:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        uVar8 = recovered_1000df10(&bStack_3d0,abStack_3a8);
        abStack_3f0[0] = (byte)uVar8 ^ 1;
        auStack_3f8[0] = 3;
        uStack_3d8 = 3;
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000e16c(auStack_3f8,&bStack_3d0,abStack_3a8,(uint)*pbVar1,
                           (undefined8 *)param_3[1],(ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 0x11:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        bVar5 = recovered_10003c34((char *)&bStack_3d0);
        bVar6 = 0;
        if (bVar5 != 0) {
          bVar6 = recovered_10003c34((char *)abStack_3a8);
        }
        auStack_3f8[0] = 3;
        uStack_3d8 = 3;
        abStack_3f0[0] = bVar6;
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 0x12:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        bVar6 = recovered_10003c34((char *)&bStack_3d0);
        if ((bVar6 & 1) == 0) {
          abStack_3f0[0] = recovered_10003c34((char *)abStack_3a8);
        }
        else {
          abStack_3f0[0] = 1;
        }
        auStack_3f8[0] = 3;
        uStack_3d8 = 3;
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      case 0x13:
        uVar13 = *(uint *)(pbVar1 + 4);
        if (((int)uVar13 < 0) || (uVar15 = (ulong)uVar13, (ulong)puVar16[7] < (ulong)uVar13)) {
          puVar16 = (undefined8 *)param_3[1];
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1cdbU));
          recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
          goto LAB_1000d1a4;
        }
        goto switchD_1000c788_default;
      case 0x14:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        bVar6 = recovered_10003c34((char *)abStack_3a8);
        if (((bVar6 & 1) != 0) ||
           ((uVar15 = (ulong)*(uint *)(pbVar1 + 4), -1 < (int)*(uint *)(pbVar1 + 4) &&
            (uVar15 <= (ulong)puVar16[7])))) goto LAB_1000cd08;
        puVar16 = (undefined8 *)param_3[1];
        uVar13 = *(uint *)(pbVar1 + 0xc);
        recovered_100064b8((long *)&bStack_3d0,((uintptr_t)pf_module_state+0x1cf7U));
        recovered_1000d85c(puVar16,uVar13,(undefined8 *)&bStack_3d0);
        goto LAB_1000d1a4;
      case 0x15:
        uVar13 = *(uint *)(pbVar1 + 4);
        uVar8 = (ulong)uVar13;
        if ((int)uVar13 < 0) {
          puVar16 = (undefined8 *)param_3[1];
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d1fU));
          recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
        }
        else {
          if (uVar8 < local_350) {
            uVar11 = local_350 + ~uVar8;
            pcVar12 = (char *)(local_358 + uVar11 * 0x28);
            pcVar9 = (char *)0x0;
            if (uVar13 != 0) {
              pcVar9 = pcVar12 + 0x28;
            }
            recovered_1000e2d4(abStack_3a8,param_2,(long)param_3,pcVar12,pcVar9,uVar8,
                               (ulong)*(uint *)(pbVar1 + 0xc));
            recovered_10007e00(&local_358,uVar11);
            recovered_1000ec00(&local_358,abStack_3a8);
            goto LAB_1000cd08;
          }
          puVar16 = (undefined8 *)param_3[1];
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d39U));
          recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
        }
        goto LAB_1000d1a4;
      case 0x16:
        pcVar9 = recovered_1000d900(param_3[1],*(uint *)(pbVar1 + 4),(ulong)*(uint *)(pbVar1 + 0xc))
        ;
        recovered_1000ea48((long)&bStack_3d0,(undefined8 *)pcVar9,*(undefined4 *)(pbVar1 + 8),
                           param_3);
        recovered_1000ea08(abStack_3a8,(long *)&bStack_3d0);
        recovered_10006928((long *)&bStack_3d0);
        if ((((ulong)puVar16[0x1a] <= uVar8) ||
            (uVar11 = *(ulong *)(puVar16[0x19] + uVar8 * 8), uVar11 == 0xffffffffffffffff)) &&
           (uVar11 = recovered_10006fac((long)param_2,(undefined8 *)pcVar9),
           uVar8 < (ulong)puVar16[0x1a])) {
          *(ulong *)(puVar16[0x19] + uVar8 * 8) = uVar11;
        }
        recovered_10007028((long)param_2,uVar11,abStack_3a8);
        puVar7 = (undefined1 *)recovered_100070a8((long *)param_2,(undefined8 *)pcVar9);
        recovered_1000715c(puVar7,abStack_3a8);
        goto LAB_1000cd08;
      case 0x17:
        goto switchD_1000c788_caseD_17;
      case 0x18:
        uVar13 = *(uint *)(pbVar1 + 4);
        if ((int)uVar13 < 0) {
          puVar16 = (undefined8 *)param_3[1];
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d52U));
          recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
          goto LAB_1000d1a4;
        }
        if (local_350 < uVar13) {
          puVar16 = (undefined8 *)param_3[1];
          uVar13 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d71U));
          recovered_1000d85c(puVar16,uVar13,(undefined8 *)abStack_3a8);
          goto LAB_1000d1a4;
        }
        recovered_1000fd64((undefined8 *)&bStack_3d0,(ulong)uVar13);
        lVar14 = (ulong)uVar13 * 0x28;
        while (lVar14 = lVar14 + -0x28, lVar14 != -0x28) {
          recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d9e4((undefined1 *)(CONCAT71(uStack_3cf,bStack_3d0) + lVar14),abStack_3a8);
          recovered_1000686c((long *)&bStack_3a0);
        }
        recovered_10003a14(abStack_3a8,(undefined8 *)&bStack_3d0);
        recovered_1000ec00(&local_358,abStack_3a8);
        recovered_1000686c((long *)&bStack_3a0);
        recovered_10010238((long *)&bStack_3d0);
        goto switchD_1000c788_default;
      case 0x19:
        recovered_1000d97c(abStack_3a8,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        recovered_1000d97c(&bStack_3d0,&local_358,(undefined8 *)param_3[1],
                           (ulong)*(uint *)(pbVar1 + 0xc));
        uVar13 = (uint)abStack_3a8[0];
        if (bStack_3d0 == 5 && uVar13 == 1) {
          plVar10 = (long *)recovered_100042ec((char *)&bStack_3d0);
          if (lStack_388 == 1) {
            if (-1 < iStack_39f) {
              if ((ulong)plVar10[1] <= CONCAT71(iStack_39f,bStack_3a0)) {
                auStack_3f8[0] = 0;
                uStack_3d8 = 0;
                recovered_1000ec00(&local_358,auStack_3f8);
                break;
              }
              recovered_1000a86c(&local_358,
                                 (undefined1 *)(*plVar10 + CONCAT71(iStack_39f,bStack_3a0) * 0x28));
              goto LAB_1000cd00;
            }
            puVar16 = (undefined8 *)param_3[1];
            uVar13 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)auStack_3f8,((uintptr_t)pf_module_state+0x1d91U));
            recovered_1000d85c(puVar16,uVar13,(undefined8 *)auStack_3f8);
          }
          goto LAB_1000d1a4;
        }
        if (bStack_3d0 == 6 && uVar13 == 4) {
          plVar10 = (long *)recovered_100043ac((char *)&bStack_3d0);
          puVar7 = (undefined1 *)recovered_1000eadc(plVar10,(char *)abStack_3a8);
          if (puVar7 == (undefined1 *)0x0) {
            auStack_3f8[0] = 0;
            uStack_3d8 = 0;
          }
          else {
            recovered_1000a8e0(auStack_3f8,puVar7);
          }
          recovered_1000a86c(&local_358,auStack_3f8);
          break;
        }
        if (bStack_3d0 == 6) {
          plVar10 = (long *)recovered_100043ac((char *)&bStack_3d0);
          puVar7 = (undefined1 *)recovered_1000eadc(plVar10,(char *)abStack_3a8);
          if (puVar7 == (undefined1 *)0x0) goto LAB_1000ce74;
LAB_1000ce00:
          recovered_1000a8e0(auStack_3f8,puVar7);
        }
        else {
          puVar18 = (undefined8 *)param_3[1];
          uVar2 = *(uint *)(pbVar1 + 0xc);
          if (2 < uVar13 - 1) {
            recovered_100064b8((long *)apvStack_80,((uintptr_t)pf_module_state+0x20d4U));
            recovered_1000d85c(puVar18,uVar2,apvStack_80);
            goto LAB_1000d1a4;
          }
          uVar8 = recovered_10004088((char *)abStack_3a8);
          if ((long)uVar8 < 0) {
            recovered_100064b8((long *)apvStack_80,((uintptr_t)pf_module_state+0x1d91U));
            recovered_1000d85c(puVar18,uVar2,apvStack_80);
            goto LAB_1000d1a4;
          }
          if (bStack_3d0 == 4) {
            pcVar9 = recovered_1000422c((char *)&bStack_3d0);
            if (uVar8 < *(ulong *)(pcVar9 + 8)) {
              puVar7 = &DAT_10017864;
              if (*(undefined1 **)pcVar9 != (undefined1 *)0x0) {
                puVar7 = *(undefined1 **)pcVar9;
              }
              recovered_100089d0((long *)apvStack_80,1,puVar7[uVar8]);
              recovered_1000395c(auStack_3f8,apvStack_80);
              recovered_10002e70(apvStack_80[0]);
              goto LAB_1000ce7c;
            }
          }
          else {
            if (bStack_3d0 != 5) {
              recovered_100064b8((long *)apvStack_80,((uintptr_t)pf_module_state+0x20f0U));
              recovered_1000d85c(puVar18,uVar2,apvStack_80);
              goto LAB_1000d1a4;
            }
            plVar10 = (long *)recovered_100042ec((char *)&bStack_3d0);
            if (uVar8 < (ulong)plVar10[1]) {
              puVar7 = (undefined1 *)(*plVar10 + uVar8 * 0x28);
              goto LAB_1000ce00;
            }
          }
LAB_1000ce74:
          auStack_3f8[0] = 0;
          uStack_3d8 = 0;
        }
LAB_1000ce7c:
        recovered_1000ec00(&local_358,auStack_3f8);
        break;
      default:
        goto switchD_1000c788_default;
      }
      recovered_1000686c((long *)abStack_3f0);
LAB_1000cd00:
      recovered_1000686c(alStack_3c8);
LAB_1000cd08:
      recovered_1000686c((long *)&bStack_3a0);
      goto switchD_1000c788_default;
    }
  }
  alStack_300[1] = 0;
  alStack_300[2] = 0;
  alStack_300[0] = 0;
  recovered_10006ee4(alStack_300,((uintptr_t)pf_module_state+0x1c34U));
  recovered_10003fd8(alStack_300,puVar16);
  recovered_10006ee4(alStack_300,((uintptr_t)pf_module_state+0x1c3fU));
  plVar10 = recovered_10008974(alStack_300,puVar16[4]);
  recovered_10006ee4(plVar10,((uintptr_t)pf_module_state+0x1c4bU));
  recovered_10008974(plVar10,unaff_x24);
  puVar16 = (undefined8 *)unaff_x19[1];
  recovered_10006dc0((undefined8 *)local_380,alStack_300);
  recovered_1000d85c(puVar16,0,(undefined8 *)local_380);
LAB_1000d1a4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d1a8);
  (*pcVar4)();
switchD_1000c788_caseD_17:
  if (local_350 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    recovered_1000d97c(param_1,&local_358,(undefined8 *)param_3[1],(ulong)*(uint *)(pbVar1 + 0xc));
  }
LAB_1000ce90:
  recovered_1000686c(alStack_378);
  recovered_10010238(&local_358);
  local_338 = 0;
  recovered_10002e70(local_340);
  recovered_10010238((long *)&local_328);
  recovered_1000fd90((long)alStack_300);
  return;
}

#undef DAT_10017864
#undef LAB_1001c050
#undef local_420
#undef local_380
#undef local_360
#undef local_358
#undef local_350
#undef local_340
#undef local_338
#undef local_328
#undef local_320
#undef auStack_3f8
#undef bStack_3d0
#undef uStack_3cf
#undef abStack_3f0
#undef uStack_3d8
#undef bStack_3a0
#undef iStack_39f
#undef alStack_3c8
#undef abStack_3a8
#undef alStack_378
#undef lStack_388
#undef uStack_348
#undef uStack_330
#undef uStack_308
#undef alStack_300
#undef uStack_318
#undef uStack_310
#undef apvStack_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d454
 */

void recovered_1000d454(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x1000d470
 */

void recovered_1000d470(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d474
 */

void recovered_1000d474(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d478
 */

void recovered_1000d478(long param_1)

{
  unsigned char frame[64] = {0};

  void *data;

  data = (void *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    data = (void *)recovered_100085e0(*(long *)(param_1 + 0x18));
  }
  recovered_10002e70(data);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


#define alStack_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4a0
 */

undefined4 recovered_1000d4a0(long *param_1,long *param_2)

{
  unsigned char frame[104] = {0};

  code *pcVar1;

  if ((ulong)param_1[1] < *param_2 + 4U) {
    recovered_100064b8(alStack_38,((uintptr_t)pf_module_state+0x1bbaU));
    recovered_10008790(alStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d4dc);
    (*pcVar1)();
  }
  PF_PART4(alStack_38[0], 0) = 0;
  recovered_10000ce4(alStack_38,(void *)(*param_1 + *param_2),4);
  *param_2 = *param_2 + 4;
  return (undefined4)alStack_38[0];
}

#undef alStack_38

#define alStack_48 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4e4
 */

void recovered_1000d4e4(undefined8 *param_1,long *param_2,long *param_3)

{
  unsigned char frame[120] = {0};

  code *pcVar1;
  uint uVar2;

  uVar2 = recovered_1000d4a0(param_2,param_3);
  if ((ulong)param_2[1] < *param_3 + (ulong)uVar2) {
    recovered_100064b8(alStack_48,((uintptr_t)pf_module_state+0x1bd0U));
    recovered_10008790(alStack_48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d564);
    (*pcVar1)();
  }
  recovered_10006704(param_1,*param_2 + *param_3,(ulong)uVar2);
  *param_3 = *param_3 + (ulong)uVar2;
  return;
}

#undef alStack_48

#define local_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d56c
 */

undefined1 recovered_1000d56c(long *param_1,long *param_2)

{
  unsigned char frame[104] = {0};

  code *pcVar1;

  if ((ulong)param_1[1] < *param_2 + 1U) {
    recovered_100064b8(local_38,((uintptr_t)pf_module_state+0x1bbaU));
    recovered_10008790(local_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d5d8);
    (*pcVar1)();
  }
  PF_PART1(local_38[0], 0) = 0;
  recovered_10000ce4(local_38,(void *)(*param_1 + *param_2),1);
  *param_2 = *param_2 + 1;
  return (undefined1)local_38[0];
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5e0
 */

void recovered_1000d5e0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_10007b80(param_1,uVar1);
    lVar3 = param_1[1];
  }
  uVar4 = *param_2;
  puVar2 = (undefined1 *)(*param_1 + lVar3 * 0x28);
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 0x20) = 1;
  *(undefined8 *)(puVar2 + 8) = uVar4;
  param_1[1] = lVar3 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d650
 */

void recovered_1000d650(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_10007b80(param_1,uVar1);
    lVar3 = param_1[1];
  }
  uVar4 = *param_2;
  puVar2 = (undefined1 *)(*param_1 + lVar3 * 0x28);
  *puVar2 = 2;
  *(undefined8 *)(puVar2 + 0x20) = 2;
  *(undefined8 *)(puVar2 + 8) = uVar4;
  param_1[1] = lVar3 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d6c0
 */

void recovered_1000d6c0(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;

  lVar4 = param_1[1];
  if (lVar4 == param_1[2]) {
    uVar1 = 4;
    if (lVar4 != 0) {
      uVar1 = lVar4 << 1;
    }
    recovered_10007b80(param_1,uVar1);
    lVar4 = param_1[1];
  }
  uVar2 = *param_2;
  puVar3 = (undefined1 *)(*param_1 + lVar4 * 0x28);
  *puVar3 = 3;
  *(undefined8 *)(puVar3 + 0x20) = 3;
  puVar3[8] = uVar2;
  param_1[1] = lVar4 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d730
 */

long recovered_1000d730(long *param_1,undefined8 *param_2)

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
    recovered_10007b80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000395c((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


#define alStack_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7a4
 */

undefined4 recovered_1000d7a4(long *param_1,long *param_2)

{
  unsigned char frame[104] = {0};

  code *pcVar1;

  if ((ulong)param_1[1] < *param_2 + 4U) {
    recovered_100064b8(alStack_38,((uintptr_t)pf_module_state+0x1bbaU));
    recovered_10008790(alStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d7e0);
    (*pcVar1)();
  }
  PF_PART4(alStack_38[0], 0) = 0;
  recovered_10000ce4(alStack_38,(void *)(*param_1 + *param_2),4);
  *param_2 = *param_2 + 4;
  return (undefined4)alStack_38[0];
}

#undef alStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7e8
 */

long recovered_1000d7e8(long *param_1,undefined8 *param_2)

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
    recovered_1000a13c(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10007ad4((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


#define local_38 (*(void * *)(frame + 40))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define auStack_50 (*(undefined8 (*)[3])(frame + 16))
#define local_30 (*(undefined8 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d85c
 */

void recovered_1000d85c(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[128] = {0};

  code *pcVar1;
  long *plVar2;

  local_30 = 0;
  uStack_28 = 0;
  local_38 = (void *)0x0;
  recovered_10003fd8((long *)&local_38,param_1);
  recovered_10006ee4((long *)&local_38,((uintptr_t)pf_module_state+0x187aU));
  plVar2 = recovered_10008974((long *)&local_38,(ulong)param_2);
  recovered_10006ee4(plVar2,((uintptr_t)pf_module_state+0x176bU));
  recovered_10003fd8(plVar2,param_3);
  recovered_10006dc0(auStack_50,&local_38);
  recovered_10002e70(local_38);
  recovered_10008790(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d8dc);
  (*pcVar1)();
}

#undef local_38
#undef uStack_28
#undef auStack_50
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8f8
 */

void recovered_1000d8f8(long param_1,ulong in_x1,undefined1 *in_x2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  *(undefined8 *)(param_1 + 8) = 0;
  if (*(ulong *)(param_1 + 8) <= in_x1) {
    recovered_10007d80((long *)param_1,in_x1);
    uVar1 = *(ulong *)(param_1 + 8);
    while (uVar1 < in_x1) {
      *(undefined1 *)(*(long *)param_1 + uVar1) = *in_x2;
      uVar1 = *(long *)(param_1 + 8) + 1;
      *(ulong *)(param_1 + 8) = uVar1;
    }
    return;
  }
  if (in_x1 < *(ulong *)(param_1 + 8)) {
    *(ulong *)(param_1 + 8) = in_x1;
  }
  else if (*(ulong *)(param_1 + 8) < in_x1) {
    recovered_10007d80((long *)param_1,in_x1);
    uVar1 = *(ulong *)(param_1 + 8);
    while (uVar1 < in_x1) {
      *(undefined1 *)(*(long *)param_1 + uVar1) = 0;
      uVar1 = *(long *)(param_1 + 8) + 1;
      *(ulong *)(param_1 + 8) = uVar1;
    }
  }
  return;
}


#define alStack_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d900
 */

char * recovered_1000d900(long param_1,uint param_2,undefined8 param_3)

{
  unsigned char frame[104] = {0};

  code *pcVar1;
  char *pcVar2;

  if (((int)param_2 < 0) || (*(ulong *)(param_1 + 0x20) <= (ulong)param_2)) {
    recovered_100064b8(alStack_38,((uintptr_t)pf_module_state+0x1c64U));
    recovered_1000d85c((undefined8 *)param_1,(uint)param_3,alStack_38);
  }
  else {
    pcVar2 = (char *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x28);
    if (*pcVar2 == '\x04') {
      if (*(long *)(pcVar2 + 0x20) == 4) {
        return pcVar2 + 8;
      }
    }
    else {
      recovered_100064b8(alStack_38,((uintptr_t)pf_module_state+0x1db2U));
      recovered_1000d85c((undefined8 *)param_1,(uint)param_3,alStack_38);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d970);
  (*pcVar1)();
}

#undef alStack_38

#define alStack_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d97c
 */

void recovered_1000d97c(undefined1 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  unsigned char frame[104] = {0};

  code *pcVar1;

  if (param_2[1] == 0) {
    recovered_100064b8(alStack_38,((uintptr_t)pf_module_state+0x1dcbU));
    recovered_1000d85c(param_3,(uint)param_4,alStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d9dc);
    (*pcVar1)();
  }
  recovered_10007c2c(param_1,(undefined1 *)(*param_2 + param_2[1] * 0x28 + -0x28));
  recovered_1000686c((long *)(*param_2 + param_2[1] * 0x28 + -0x20));
  param_2[1] = param_2[1] + -1;
  return;
}

#undef alStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d9e4
 */

undefined1 * recovered_1000d9e4(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_1000ebb4((long)(param_1 + 8),(long)(param_2 + 8));
  return param_1;
}


#define lStack_40 (*(long *)(frame + 72))
#define apvStack_60 (*(void * (*)[3])(frame + 40))
#define pvStack_48 (*(void * *)(frame + 64))
#define apvStack_78 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da10
 */

void recovered_1000da10(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  unsigned char frame[168] = {0};

  byte bVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;

  bVar2 = *param_2;
  if ((bVar2 == 4) || (bVar1 = *param_3, bVar1 == 4)) {
    recovered_10003c6c((long *)apvStack_60,param_2);
    recovered_10003c6c((long *)apvStack_78,param_3);
    recovered_1000ec74((long *)&pvStack_48,apvStack_60,apvStack_78);
    recovered_1000395c(param_1,&pvStack_48);
    recovered_10002e70(pvStack_48);
    recovered_10002e70(apvStack_78[0]);
    recovered_10002e70(apvStack_60[0]);
  }
  else if (bVar2 == 5 && bVar1 == 5) {
    plVar4 = (long *)recovered_100042ec((char *)param_2);
    recovered_1000bd14((long *)&pvStack_48,plVar4);
    plVar4 = (long *)recovered_100042ec((char *)param_3);
    recovered_1000ecc0((long *)&pvStack_48,(long)((long)pvStack_48 + lStack_40 * 0x28),*plVar4,
                       *plVar4 + plVar4[1] * 0x28);
    recovered_10003a14(param_1,&pvStack_48);
    recovered_10010238((long *)&pvStack_48);
  }
  else {
    if (2 < bVar2 - 1 || 2 < bVar1 - 1) {
      recovered_100064b8((long *)&pvStack_48,((uintptr_t)pf_module_state+0x1ddbU));
      recovered_1000d85c(param_4,(uint)param_5,&pvStack_48);
LAB_1000db5c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000db60);
      (*pcVar3)();
    }
    if (bVar2 == 1 && bVar1 == 1) {
      if ((*(long *)(param_2 + 0x20) != 1) || (*(long *)(param_3 + 0x20) != 1)) goto LAB_1000db5c;
      lVar5 = *(long *)(param_2 + 8);
      lVar6 = *(long *)(param_3 + 8);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar6 + lVar5;
    }
    else {
      dVar7 = recovered_10004124(param_2);
      dVar8 = recovered_10004124(param_3);
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x20) = 2;
      *(double *)(param_1 + 8) = dVar7 + dVar8;
    }
  }
  return;
}

#undef lStack_40
#undef apvStack_60
#undef pvStack_48
#undef apvStack_78

#define alStack_48 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db94
 */

void recovered_1000db94(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  unsigned char frame[120] = {0};

  code *pcVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;

  if ((2 < *param_2 - 1) || (2 < *param_3 - 1)) {
    recovered_100064b8(alStack_48,((uintptr_t)pf_module_state+0x1e0cU));
    recovered_1000d85c(param_4,(uint)param_5,alStack_48);
LAB_1000dc2c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dc30);
    (*pcVar1)();
  }
  if (*param_2 == 1 && *param_3 == 1) {
    if ((*(long *)(param_2 + 0x20) != 1) || (*(long *)(param_3 + 0x20) != 1)) goto LAB_1000dc2c;
    lVar2 = *(long *)(param_2 + 8);
    lVar3 = *(long *)(param_3 + 8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(long *)(param_1 + 8) = lVar2 - lVar3;
  }
  else {
    dVar4 = recovered_10004124(param_2);
    dVar5 = recovered_10004124(param_3);
    *param_1 = 2;
    *(undefined8 *)(param_1 + 0x20) = 2;
    *(double *)(param_1 + 8) = dVar4 - dVar5;
  }
  return;
}

#undef alStack_48

#define alStack_48 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc38
 */

void recovered_1000dc38(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  unsigned char frame[120] = {0};

  code *pcVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;

  if ((2 < *param_2 - 1) || (2 < *param_3 - 1)) {
    recovered_100064b8(alStack_48,((uintptr_t)pf_module_state+0x1e30U));
    recovered_1000d85c(param_4,(uint)param_5,alStack_48);
LAB_1000dcd0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dcd4);
    (*pcVar1)();
  }
  if (*param_2 == 1 && *param_3 == 1) {
    if ((*(long *)(param_2 + 0x20) != 1) || (*(long *)(param_3 + 0x20) != 1)) goto LAB_1000dcd0;
    lVar2 = *(long *)(param_2 + 8);
    lVar3 = *(long *)(param_3 + 8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(long *)(param_1 + 8) = lVar3 * lVar2;
  }
  else {
    dVar4 = recovered_10004124(param_2);
    dVar5 = recovered_10004124(param_3);
    *param_1 = 2;
    *(undefined8 *)(param_1 + 0x20) = 2;
    *(double *)(param_1 + 8) = dVar4 * dVar5;
  }
  return;
}

#undef alStack_48

#define alStack_68 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcdc
 */

void recovered_1000dcdc(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  unsigned char frame[152] = {0};

  code *pcVar1;
  double dVar2;
  double dVar3;

  if ((*param_2 - 1 < 3) && (*param_3 - 1 < 3)) {
    dVar2 = recovered_10004124(param_3);
    dVar2 = recovered_10001370(dVar2);
    if (2.220446049250313e-16 < dVar2) {
      dVar2 = recovered_10004124(param_2);
      dVar3 = recovered_10004124(param_3);
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x20) = 2;
      *(double *)(param_1 + 8) = dVar2 / dVar3;
      return;
    }
    recovered_100064b8(alStack_68,((uintptr_t)pf_module_state+0x1e78U));
    recovered_1000d85c(param_4,(uint)param_5,alStack_68);
  }
  else {
    recovered_100064b8(alStack_68,((uintptr_t)pf_module_state+0x1e54U));
    recovered_1000d85c(param_4,(uint)param_5,alStack_68);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dd88);
  (*pcVar1)();
}

#undef alStack_68

#define alStack_68 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd94
 */

void recovered_1000dd94(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  unsigned char frame[152] = {0};

  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double right;

  if ((*param_2 - 1 < 3) && (*param_3 - 1 < 3)) {
    dVar5 = recovered_10004124(param_3);
    dVar5 = recovered_10001370(dVar5);
    if (2.220446049250313e-16 < dVar5) {
      if (*param_2 == 1 && *param_3 == 1) {
        if ((*(long *)(param_2 + 0x20) != 1) || (*(long *)(param_3 + 0x20) != 1)) goto LAB_1000de88;
        lVar3 = *(long *)(param_2 + 8);
        lVar4 = *(long *)(param_3 + 8);
        lVar1 = 0;
        if (lVar4 != 0) {
          lVar1 = lVar3 / lVar4;
        }
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x20) = 1;
        *(long *)(param_1 + 8) = lVar3 - lVar1 * lVar4;
      }
      else {
        dVar5 = recovered_10004124(param_2);
        right = recovered_10004124(param_3);
        dVar5 = recovered_100010c4(dVar5,right);
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0x20) = 2;
        *(double *)(param_1 + 8) = dVar5;
      }
      return;
    }
    recovered_100064b8(alStack_68,((uintptr_t)pf_module_state+0x1eadU));
    recovered_1000d85c(param_4,(uint)param_5,alStack_68);
  }
  else {
    recovered_100064b8(alStack_68,((uintptr_t)pf_module_state+0x1e89U));
    recovered_1000d85c(param_4,(uint)param_5,alStack_68);
  }
LAB_1000de88:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000de8c);
  (*pcVar2)();
}

#undef alStack_68

#define alStack_38 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de98
 */

void recovered_1000de98(undefined1 *param_1,byte *param_2,undefined8 *param_3,undefined8 param_4)

{
  unsigned char frame[104] = {0};

  code *pcVar1;
  long lVar2;
  double dVar3;

  if (2 < *param_2 - 1) {
    recovered_100064b8(alStack_38,((uintptr_t)pf_module_state+0x1ebcU));
    recovered_1000d85c(param_3,(uint)param_4,alStack_38);
LAB_1000df04:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000df08);
    (*pcVar1)();
  }
  if (*param_2 == 1) {
    if (*(long *)(param_2 + 0x20) != 1) goto LAB_1000df04;
    lVar2 = *(long *)(param_2 + 8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(long *)(param_1 + 8) = -lVar2;
  }
  else {
    dVar3 = recovered_10004124(param_2);
    *param_1 = 2;
    *(undefined8 *)(param_1 + 0x20) = 2;
    *(double *)(param_1 + 8) = -dVar3;
  }
  return;
}

#undef alStack_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df10
 */

ulong recovered_1000df10(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *in_x1;
  double dVar14;
  double dVar15;

  bVar3 = *param_1;
  if ((uint)bVar3 != (uint)*param_2) {
    if (bVar3 - 1 < 3 && *param_2 - 1 < 3) {
      dVar14 = recovered_10004124(param_1);
      dVar15 = recovered_10004124(param_2);
      dVar14 = recovered_10001370(dVar14 - dVar15);
      return (ulong)(dVar14 <= 2.220446049250313e-16);
    }
    goto switchD_1000df5c_default;
  }
  uVar12 = 1;
  switch((uintptr_t)(bVar3)) {
  case 0:
    goto switchD_1000df5c_caseD_0;
  case 1:
    if ((*(long *)(param_1 + 0x20) != 1) || (*(long *)(param_2 + 0x20) != 1)) goto LAB_1000e168;
    lVar9 = *(long *)(param_1 + 8);
    lVar10 = *(long *)(param_2 + 8);
    goto LAB_1000e05c;
  case 2:
    if ((*(long *)(param_1 + 0x20) != 2) || (*(long *)(param_2 + 0x20) != 2)) goto LAB_1000e168;
    bVar5 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
    break;
  case 3:
    if ((*(long *)(param_1 + 0x20) != 3) || (*(long *)(param_2 + 0x20) != 3)) goto LAB_1000e168;
    bVar5 = param_1[8] == param_2[8];
    break;
  case 4:
    if ((*(long *)(param_1 + 0x20) == 4) && (*(long *)(param_2 + 0x20) == 4)) {
      lVar9 = *(long *)(param_1 + 0x10);
      pcVar6 = &DAT_10017864;
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar6 = *(char **)(param_1 + 8);
      }
      pcVar8 = &DAT_10017864;
      if (*(char **)(param_2 + 8) != (char *)0x0) {
        pcVar8 = *(char **)(param_2 + 8);
      }
      if (lVar9 == *(long *)(param_2 + 0x10)) {
        do {
          uVar12 = (ulong)(lVar9 == 0);
          if (lVar9 == 0) {
            return 1;
          }
          cVar1 = *pcVar6;
          cVar2 = *pcVar8;
          lVar9 = lVar9 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 == cVar2);
      }
      else {
        uVar12 = 0;
      }
      return uVar12;
    }
LAB_1000e168:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000e16c);
    (*pcVar4)();
  case 5:
    if ((*(long *)(param_1 + 0x20) != 5) || (*(long *)(param_2 + 0x20) != 5)) goto LAB_1000e168;
    plVar13 = *(long **)(param_1 + 0x10);
    plVar11 = *(long **)(param_2 + 0x10);
    if (plVar13[1] == plVar11[1]) {
      uVar12 = 0xffffffffffffffff;
      lVar9 = 0;
      do {
        uVar12 = uVar12 + 1;
        if ((ulong)plVar13[1] <= uVar12) {
          return 1;
        }
        uVar7 = recovered_1000df10((byte *)(*plVar13 + lVar9),(byte *)(*plVar11 + lVar9));
        lVar9 = lVar9 + 0x28;
      } while ((uVar7 & 1) != 0);
      return 0;
    }
  default:
switchD_1000df5c_default:
    uVar12 = 0;
    goto switchD_1000df5c_caseD_0;
  case 6:
    if ((*(long *)(param_1 + 0x20) != 6) || (*(long *)(param_2 + 0x20) != 6)) goto LAB_1000e168;
    plVar11 = *(long **)(param_2 + 0x10);
    lVar9 = (*(undefined8 **)(param_1 + 0x10))[1];
    if (lVar9 == plVar11[1]) {
      in_x1 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
      lVar9 = lVar9 << 6;
      while( true ) {
        bVar5 = lVar9 == 0;
        if (lVar9 == 0) {
          return 1;
        }
        lVar10 = recovered_1000ee04(plVar11,in_x1);
        if (lVar10 == *plVar11 + plVar11[1] * 0x40) break;
        uVar12 = recovered_1000df10((byte *)(in_x1 + 3),(byte *)(lVar10 + 0x18));
        in_x1 = in_x1 + 8;
        lVar9 = lVar9 + -0x40;
        if ((uVar12 & 1) == 0) {
          return (ulong)bVar5;
        }
      }
      return (ulong)bVar5;
    }
    goto switchD_1000df5c_default;
  case 7:
    if ((*(long *)(param_1 + 0x20) != 7) || (*(long *)(param_2 + 0x20) != 7)) goto LAB_1000e168;
    lVar9 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(param_2 + 0x10);
LAB_1000e05c:
    bVar5 = lVar9 == lVar10;
  }
  uVar12 = (ulong)bVar5;
switchD_1000df5c_caseD_0:
  return uVar12;
}

#undef DAT_10017864

#define alStack_68 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e16c
 */

void recovered_1000e16c(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 param_4,
                       undefined8 *param_5,undefined8 param_6)

{
  unsigned char frame[152] = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;

  bVar2 = *param_2;
  bVar1 = *param_3;
  if (bVar2 - 1 < 3) {
    if (bVar1 - 1 < 3) {
      dVar7 = recovered_10004124(param_2);
      dVar8 = recovered_10004124(param_3);
      switch((uintptr_t)(param_4)) {
      case 0xd:
        uVar5 = dVar7 < dVar8;
        break;
      case 0xe:
        uVar5 = dVar7 <= dVar8;
        break;
      case 0xf:
        uVar5 = dVar8 < dVar7;
        break;
      case 0x10:
        uVar5 = dVar8 <= dVar7;
        break;
      default:
        bVar2 = *param_2;
        bVar1 = *param_3;
        goto LAB_1000e220;
      }
      goto LAB_1000e2a0;
    }
LAB_100471a0:
    recovered_100064b8(alStack_68,((uintptr_t)pf_module_state+0x1edeU));
    recovered_1000d85c(param_5,(uint)param_6,alStack_68);
LAB_1000e2c8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000e2cc);
    (*pcVar4)();
  }
LAB_1000e220:
  if (bVar2 != 4 || bVar1 != 4) goto LAB_100471a0;
  if ((*(long *)(param_2 + 0x20) != 4) || (*(long *)(param_3 + 0x20) != 4)) goto LAB_1000e2c8;
  switch((uintptr_t)(param_4)) {
  case 0xd:
    pbVar3 = param_2;
    param_2 = param_3;
    break;
  case 0xe:
    uVar6 = recovered_1000ee64((undefined8 *)(param_2 + 8),(undefined8 *)(param_3 + 8));
    uVar5 = (undefined1)uVar6;
    goto LAB_1000e2a0;
  case 0xf:
    pbVar3 = param_3;
    break;
  case 0x10:
    uVar6 = recovered_1000ee88((undefined8 *)(param_2 + 8),(undefined8 *)(param_3 + 8));
    uVar5 = (undefined1)uVar6;
    goto LAB_1000e2a0;
  default:
    goto LAB_100471a0;
  }
  uVar6 = recovered_1000ee38((undefined8 *)(pbVar3 + 8),(undefined8 *)(param_2 + 8));
  uVar5 = (undefined1)uVar6;
LAB_1000e2a0:
  *param_1 = 3;
  *(undefined8 *)(param_1 + 0x20) = 3;
  param_1[8] = uVar5;
  return;
}

#undef alStack_68

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10020338
#define DAT_10020338 (*(byte *)(((uintptr_t)pf_module_state + 0xa050U)))
#undef DAT_10020340
#define DAT_10020340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa058U)))
#undef DAT_10020348
#define DAT_10020348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa060U)))
#undef DAT_10020350
#define DAT_10020350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa068U)))
#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#undef str_10018301
#define str_10018301 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2019U)))
#undef str_1001831a
#define str_1001831a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2032U)))
#define plStack_420 (*(long * *)(frame + 16))
#define uStack_3d8 (*(undefined8 *)(frame + 88))
#define bStack_3d0 (*(byte *)(frame + 96))
#define auStack_3f8 (*(undefined1 (*)[8])(frame + 56))
#define abStack_3f0 (*(byte (*)[24])(frame + 64))
#define abStack_3a8 (*(byte (*)[8])(frame + 136))
#define bStack_3a0 (*(byte *)(frame + 144))
#define uStack_3cf (*(undefined7 *)(frame + 97))
#define alStack_3c8 (*(long (*)[4])(frame + 104))
#define auStack_380 (*(undefined1 (*)[8])(frame + 176))
#define alStack_378 (*(long (*)[3])(frame + 184))
#define iStack_39f (*(int7 *)(frame + 145))
#define lStack_388 (*(long *)(frame + 168))
#define uStack_350 (*(ulong *)(frame + 224))
#define uStack_348 (*(undefined8 *)(frame + 232))
#define uStack_360 (*(undefined8 *)(frame + 208))
#define lStack_358 (*(long *)(frame + 216))
#define uStack_330 (*(undefined8 *)(frame + 256))
#define plStack_328 (*(long * *)(frame + 264))
#define puStack_340 (*(undefined8 * *)(frame + 240))
#define uStack_338 (*(undefined8 *)(frame + 248))
#define uStack_310 (*(undefined8 *)(frame + 288))
#define uStack_308 (*(undefined8 *)(frame + 296))
#define uStack_320 (*(undefined8 *)(frame + 272))
#define uStack_318 (*(undefined8 *)(frame + 280))
#define pvStack_e8 (*(void * *)(frame + 840))
#define lStack_e0 (*(long *)(frame + 848))
#define alStack_300 (*(long (*)[66])(frame + 304))
#define auStack_f0 (*(undefined1 (*)[8])(frame + 832))
#define apvStack_c8 (*(void * (*)[3])(frame + 872))
#define uStack_b0 (*(ulong *)(frame + 896))
#define uStack_d8 (*(undefined8 *)(frame + 856))
#define auStack_d0 (*(undefined1 (*)[8])(frame + 864))
#define uStack_98 (*(undefined8 *)(frame + 920))
#define pvStack_a8 (*(void * *)(frame + 904))
#define uStack_a0 (*(undefined8 *)(frame + 912))
#define uStack_78 (*(undefined8 *)(frame + 952))
#define pvStack_68 (*(void * *)(frame + 968))
#define pvStack_80 (*(void * *)(frame + 944))
#define local_90 (*(void * *)(frame + 928))
#define local_88 (*(long *)(frame + 936))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e2d4
 */

undefined8
recovered_1000e2d4(undefined1 *param_1,char *param_2,long param_3,char *param_4,char *param_5,
                  ulong param_6,undefined8 param_7)

{
  unsigned char frame[1104] = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 *puVar13;
  void **ppvVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulong uVar18;
  char *pcVar19;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  long *unaff_x19;
  ulong uVar24;
  undefined8 *puVar25;
  ulong unaff_x24;
  undefined8 *puVar26;
  undefined8 unaff_x30;

  uVar20 = (uint)param_7;
  if (*param_4 != '\a') {
    puVar16 = *(undefined8 **)(param_3 + 8);
    recovered_100064b8((long *)&local_90,((uintptr_t)pf_module_state+0x1f1cU));
    recovered_1000d85c(puVar16,uVar20,&local_90);
LAB_1000e8a4:
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1000e8a8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (*(long *)(param_4 + 0x20) != 7) goto LAB_1000e8a4;
  pcVar21 = *(char **)(param_4 + 0x10);
  if (pcVar21 == (char *)0x0) {
    puVar16 = *(undefined8 **)(param_3 + 8);
    recovered_100064b8((long *)&local_90,((uintptr_t)pf_module_state+0x1f43U));
    recovered_1000d85c(puVar16,uVar20,&local_90);
    goto LAB_1000e8a4;
  }
  if (*pcVar21 != '\x01') {
    lVar23 = *(long *)(pcVar21 + 0x10);
    if (lVar23 == 0) {
      puVar16 = *(undefined8 **)(param_3 + 8);
      recovered_100064b8((long *)&local_90,((uintptr_t)pf_module_state+0x1bf2U));
      recovered_1000d85c(puVar16,uVar20,&local_90);
      goto LAB_1000e8a4;
    }
    uVar3 = *(uint *)(pcVar21 + 4);
    if (((int)uVar3 < 0) || (*(ulong *)(lVar23 + 0x38) <= (ulong)uVar3)) {
      puVar16 = *(undefined8 **)(param_3 + 8);
      recovered_100064b8((long *)&local_90,((uintptr_t)pf_module_state+0x1c15U));
      recovered_1000d85c(puVar16,uVar20,&local_90);
      goto LAB_1000e8a4;
    }
    puVar16 = (undefined8 *)(*(long *)(lVar23 + 0x30) + (ulong)uVar3 * 0x120);
    if (*(char *)(puVar16 + 0x1c) != '\0') {
      pcVar22 = pcVar21 + 8;
      if (puVar16[4] != param_6) {
        pvStack_80 = (void *)0x0;
        uStack_78 = 0;
        local_88 = 0;
        recovered_10006ee4(&local_88,((uintptr_t)pf_module_state+0x1c34U));
        recovered_10003fd8(&local_88,puVar16);
        recovered_10006ee4(&local_88,((uintptr_t)pf_module_state+0x1c3fU));
        plVar12 = recovered_10008974(&local_88,puVar16[4]);
        recovered_10006ee4(plVar12,((uintptr_t)pf_module_state+0x1c4bU));
        recovered_10008974(plVar12,param_6);
        puVar16 = *(undefined8 **)(pcVar21 + 0x10);
        recovered_10006dc0(&uStack_b0,&local_88);
        recovered_1000d85c(puVar16,0,&uStack_b0);
LAB_1000f24c:
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1000f250);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (*(char *)(puVar16 + 0x1c) == '\x02') {
        recovered_1000f538((undefined1 *)&local_88,(long)param_2,(long)pcVar22,(long)puVar16,
                           *(uint *)((long)puVar16 + 0x104),(long)param_5,param_6);
        bVar6 = recovered_10003c34((char *)&local_88);
        recovered_1000686c((long *)&pvStack_80);
        if (bVar6 != 0) {
          recovered_10003930((undefined1 *)&local_88,puVar16 + 0x21);
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          local_90 = (void *)0x0;
          recovered_100064b8((long *)apvStack_c8,((uintptr_t)pf_module_state+0x1724U));
          bVar7 = recovered_10004758((long)param_2,apvStack_c8,(undefined1 *)&uStack_b0);
          recovered_10002e70(apvStack_c8[0]);
          if (!bVar7) {
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            recovered_100064b8((long *)apvStack_c8,((uintptr_t)pf_module_state+0x20adU));
            recovered_1000d85c(puVar16,0,apvStack_c8);
            goto LAB_1000f24c;
          }
          recovered_1000e2d4(auStack_f0,param_2,(long)pcVar22,(char *)&uStack_b0,(char *)&local_88,1
                             ,0);
          recovered_1000686c((long *)&pvStack_e8);
          recovered_1000686c((long *)&pvStack_a8);
          recovered_1000686c((long *)&pvStack_80);
        }
      }
      uVar17 = recovered_1000f538(param_1,(long)param_2,(long)pcVar22,(long)puVar16,
                                  *(uint *)(puVar16 + 0x20),(long)param_5,param_6);
      return uVar17;
    }
    plVar12 = (long *)(pcVar21 + 8);
    puVar16 = *(undefined8 **)(pcVar21 + 0x10);
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar16,((uintptr_t)pf_module_state+0x1bf2U));
      recovered_10002fb4((long)puVar16,&LAB_1001c050,recovered_10004120);
      puVar16 = (undefined8 *)0x0;
    }
    else {
      if (((int)uVar3 < 0) || ((ulong)puVar16[7] <= (ulong)uVar3)) {
        recovered_100064b8(alStack_300,((uintptr_t)pf_module_state+0x1c15U));
        recovered_1000d85c(puVar16,0,alStack_300);
        goto LAB_1000d1a4;
      }
      puVar16 = (undefined8 *)(puVar16[6] + (ulong)uVar3 * 0x120);
      unaff_x19 = plVar12;
      unaff_x24 = param_6;
      if (puVar16[4] == param_6) {
        uVar11 = puVar16[10];
        recovered_1000eb58((long)alStack_300);
        plStack_328 = (long *)0x0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        puStack_340 = (undefined8 *)0x0;
        uStack_330 = 0;
        uStack_338 = 0;
        if (uVar11 == 0) {
          puVar25 = (undefined8 *)0x0;
          plStack_420 = (long *)0x0;
        }
        else {
          if (uVar11 < 0x11) {
            for (uVar24 = 0; uVar11 != uVar24; uVar24 = uVar24 + 1) {
              *(undefined1 *)((long)alStack_300 + (uVar24 - 0x10)) = 0;
            }
            plStack_420 = alStack_300;
            puVar25 = &uStack_310;
          }
          else {
            recovered_10007e00((long *)&plStack_328,uVar11);
            auStack_380[0] = 0;
            recovered_1000d8f8((long)&puStack_340,uVar11,auStack_380);
            puVar25 = puStack_340;
            plStack_420 = plStack_328;
          }
          plVar9 = plStack_420;
          for (uVar24 = 0; uVar24 < (ulong)puVar16[4]; uVar24 = uVar24 + 1) {
            recovered_1000715c((undefined1 *)plVar9,param_5);
            *(undefined1 *)((long)puVar25 + uVar24) = 1;
            param_5 = param_5 + 0x28;
            plVar9 = plVar9 + 5;
          }
        }
        uStack_350 = 0;
        uStack_348 = 0;
        lStack_358 = 0;
        uVar24 = puVar16[7];
        if (uVar24 < 9) {
          uVar24 = 8;
        }
        recovered_10007b80(&lStack_358,uVar24);
        auStack_380[0] = 0;
        uStack_360 = 0;
        uVar24 = 0;
switchD_1000c788_default:
        uVar10 = uVar24;
        if ((ulong)puVar16[7] <= uVar10) {
          recovered_10007c2c(param_1,auStack_380);
          goto LAB_1000ce90;
        }
        uVar24 = uVar10 + 1;
        pbVar1 = (byte *)(puVar16[6] + uVar10 * 0x10);
        switch((uintptr_t)(*pbVar1)) {
        case 0:
          uVar20 = *(uint *)(pbVar1 + 4);
          puVar26 = *(undefined8 **)(pcVar21 + 0x10);
          if (((int)uVar20 < 0) || ((ulong)puVar26[4] <= (ulong)uVar20)) {
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1c64U));
            recovered_1000d85c(puVar26,uVar20,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          recovered_1000a86c(&lStack_358,(undefined1 *)(puVar26[3] + (ulong)uVar20 * 0x28));
          goto switchD_1000c788_default;
        case 1:
          if ((uVar10 < (ulong)puVar16[0x17]) && (uVar11 != 0)) {
            iVar4 = *(int *)(puVar16[0x16] + uVar10 * 4);
            uVar18 = (ulong)iVar4;
            if (((iVar4 != -1 && uVar18 <= uVar11) && (iVar4 == -1 || uVar11 != uVar18)) &&
               (*(char *)((long)puVar25 + uVar18) != '\0')) {
              recovered_1000a86c(&lStack_358,(undefined1 *)(plStack_420 + (long)iVar4 * 5));
              goto switchD_1000c788_default;
            }
          }
          pcVar22 = recovered_1000d900(*(long *)(pcVar21 + 0x10),*(uint *)(pbVar1 + 4),
                                       (ulong)*(uint *)(pbVar1 + 0xc));
          if (uVar10 < (ulong)puVar16[0x1a]) {
            uVar18 = *(ulong *)(puVar16[0x19] + uVar10 * 8);
          }
          else {
            uVar18 = 0xffffffffffffffff;
          }
          puVar13 = (undefined1 *)recovered_10008514((long)param_2,uVar18);
          if (puVar13 == (undefined1 *)0x0) {
            uVar18 = recovered_100084d4((long)param_2,(undefined8 *)pcVar22);
            puVar13 = (undefined1 *)recovered_10008514((long)param_2,uVar18);
            if (puVar13 == (undefined1 *)0x0) {
              puVar16 = *(undefined8 **)(pcVar21 + 0x10);
              uVar20 = *(uint *)(pbVar1 + 0xc);
              recovered_1000403c((long *)&bStack_3d0,((uintptr_t)pf_module_state+0x1c83U),(undefined8 *)pcVar22);
              recovered_10003ff0((undefined8 *)abStack_3a8,(undefined8 *)&bStack_3d0,((uintptr_t)pf_module_state+0x1878U));
              recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
              goto LAB_1000d1a4;
            }
            if (uVar10 < (ulong)puVar16[0x1a]) {
              *(ulong *)(puVar16[0x19] + uVar10 * 8) = uVar18;
            }
          }
          recovered_1000a86c(&lStack_358,puVar13);
          goto switchD_1000c788_default;
        case 2:
          if (uStack_350 == 0) {
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1ca4U));
            recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          if (((uVar10 < (ulong)puVar16[0x17]) && (uVar3 != 0)) &&
             (iVar4 = *(int *)(puVar16[0x16] + uVar10 * 4), iVar4 != -1)) {
            if (uVar11 <= (ulong)(long)iVar4) {
              puVar16 = *(undefined8 **)(pcVar21 + 0x10);
              uVar20 = *(uint *)(pbVar1 + 0xc);
              recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1cc0U));
              recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
              goto LAB_1000d1a4;
            }
            recovered_1000715c((undefined1 *)(plStack_420 + (long)iVar4 * 5),
                               (undefined1 *)(lStack_358 + uStack_350 * 0x28 + -0x28));
            *(undefined1 *)((long)puVar25 + (long)iVar4) = 1;
          }
          else {
            pcVar22 = recovered_1000d900(*(long *)(pcVar21 + 0x10),*(uint *)(pbVar1 + 4),
                                         (ulong)*(uint *)(pbVar1 + 0xc));
            if ((((ulong)puVar16[0x1a] <= uVar10) ||
                (uVar18 = *(ulong *)(puVar16[0x19] + uVar10 * 8), uVar18 == 0xffffffffffffffff)) &&
               (uVar18 = recovered_10006fac((long)param_2,(undefined8 *)pcVar22),
               uVar10 < (ulong)puVar16[0x1a])) {
              *(ulong *)(puVar16[0x19] + uVar10 * 8) = uVar18;
            }
            recovered_10007028((long)param_2,uVar18,
                               (undefined1 *)(lStack_358 + uStack_350 * 0x28 + -0x28));
            uVar10 = uStack_350;
            lVar23 = lStack_358;
            puVar13 = (undefined1 *)recovered_100070a8((long *)param_2,(undefined8 *)pcVar22);
            recovered_1000715c(puVar13,(undefined1 *)(lVar23 + uVar10 * 0x28 + -0x28));
          }
          goto switchD_1000c788_default;
        case 3:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d9e4(auStack_380,abStack_3a8);
          goto LAB_1000cd08;
        case 4:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000da10(auStack_3f8,&bStack_3d0,abStack_3a8,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 5:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000db94(auStack_3f8,&bStack_3d0,abStack_3a8,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 6:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000dc38(auStack_3f8,&bStack_3d0,abStack_3a8,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 7:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000dcdc(auStack_3f8,&bStack_3d0,abStack_3a8,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 8:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000dd94(auStack_3f8,&bStack_3d0,abStack_3a8,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 9:
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000de98(abStack_3a8,&bStack_3d0,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,abStack_3a8);
          goto LAB_1000caa8;
        case 10:
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          bStack_3a0 = recovered_10003c34((char *)&bStack_3d0);
          abStack_3a8[0] = 3;
          bStack_3a0 = bStack_3a0 ^ 1;
          lStack_388 = 3;
          recovered_1000ec00(&lStack_358,abStack_3a8);
LAB_1000caa8:
          recovered_1000686c((long *)&bStack_3a0);
          recovered_1000686c(alStack_3c8);
          goto switchD_1000c788_default;
        case 0xb:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          uVar10 = recovered_1000df10(&bStack_3d0,abStack_3a8);
          auStack_3f8[0] = 3;
          uStack_3d8 = 3;
          abStack_3f0[0] = (byte)uVar10;
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 0xc:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          uVar10 = recovered_1000df10(&bStack_3d0,abStack_3a8);
          abStack_3f0[0] = (byte)uVar10 ^ 1;
          auStack_3f8[0] = 3;
          uStack_3d8 = 3;
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000e16c(auStack_3f8,&bStack_3d0,abStack_3a8,(uint)*pbVar1,
                             *(undefined8 **)(pcVar21 + 0x10),(ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 0x11:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          bVar8 = recovered_10003c34((char *)&bStack_3d0);
          bVar6 = 0;
          if (bVar8 != 0) {
            bVar6 = recovered_10003c34((char *)abStack_3a8);
          }
          auStack_3f8[0] = 3;
          uStack_3d8 = 3;
          abStack_3f0[0] = bVar6;
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 0x12:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          bVar6 = recovered_10003c34((char *)&bStack_3d0);
          if ((bVar6 & 1) == 0) {
            abStack_3f0[0] = recovered_10003c34((char *)abStack_3a8);
          }
          else {
            abStack_3f0[0] = 1;
          }
          auStack_3f8[0] = 3;
          uStack_3d8 = 3;
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        case 0x13:
          uVar20 = *(uint *)(pbVar1 + 4);
          if (((int)uVar20 < 0) || (uVar24 = (ulong)uVar20, (ulong)puVar16[7] < (ulong)uVar20)) {
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1cdbU));
            recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          goto switchD_1000c788_default;
        case 0x14:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          bVar6 = recovered_10003c34((char *)abStack_3a8);
          if (((bVar6 & 1) != 0) ||
             ((uVar24 = (ulong)*(uint *)(pbVar1 + 4), -1 < (int)*(uint *)(pbVar1 + 4) &&
              (uVar24 <= (ulong)puVar16[7])))) goto LAB_1000cd08;
          puVar16 = *(undefined8 **)(pcVar21 + 0x10);
          uVar20 = *(uint *)(pbVar1 + 0xc);
          recovered_100064b8((long *)&bStack_3d0,((uintptr_t)pf_module_state+0x1cf7U));
          recovered_1000d85c(puVar16,uVar20,(undefined8 *)&bStack_3d0);
          goto LAB_1000d1a4;
        case 0x15:
          uVar20 = *(uint *)(pbVar1 + 4);
          uVar10 = (ulong)uVar20;
          if ((int)uVar20 < 0) {
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d1fU));
            recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
          }
          else {
            if (uVar10 < uStack_350) {
              uVar18 = uStack_350 + ~uVar10;
              pcVar19 = (char *)(lStack_358 + uVar18 * 0x28);
              pcVar22 = (char *)0x0;
              if (uVar20 != 0) {
                pcVar22 = pcVar19 + 0x28;
              }
              recovered_1000e2d4(abStack_3a8,param_2,(long)plVar12,pcVar19,pcVar22,uVar10,
                                 (ulong)*(uint *)(pbVar1 + 0xc));
              recovered_10007e00(&lStack_358,uVar18);
              recovered_1000ec00(&lStack_358,abStack_3a8);
              goto LAB_1000cd08;
            }
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d39U));
            recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
          }
          goto LAB_1000d1a4;
        case 0x16:
          pcVar22 = recovered_1000d900(*(long *)(pcVar21 + 0x10),*(uint *)(pbVar1 + 4),
                                       (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000ea48((long)&bStack_3d0,(undefined8 *)pcVar22,*(undefined4 *)(pbVar1 + 8),
                             plVar12);
          recovered_1000ea08(abStack_3a8,(long *)&bStack_3d0);
          recovered_10006928((long *)&bStack_3d0);
          if ((((ulong)puVar16[0x1a] <= uVar10) ||
              (uVar18 = *(ulong *)(puVar16[0x19] + uVar10 * 8), uVar18 == 0xffffffffffffffff)) &&
             (uVar18 = recovered_10006fac((long)param_2,(undefined8 *)pcVar22),
             uVar10 < (ulong)puVar16[0x1a])) {
            *(ulong *)(puVar16[0x19] + uVar10 * 8) = uVar18;
          }
          recovered_10007028((long)param_2,uVar18,abStack_3a8);
          puVar13 = (undefined1 *)recovered_100070a8((long *)param_2,(undefined8 *)pcVar22);
          recovered_1000715c(puVar13,abStack_3a8);
          goto LAB_1000cd08;
        case 0x17:
          goto switchD_1000c788_caseD_17;
        case 0x18:
          uVar20 = *(uint *)(pbVar1 + 4);
          if ((int)uVar20 < 0) {
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d52U));
            recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          if (uStack_350 < uVar20) {
            puVar16 = *(undefined8 **)(pcVar21 + 0x10);
            uVar20 = *(uint *)(pbVar1 + 0xc);
            recovered_100064b8((long *)abStack_3a8,((uintptr_t)pf_module_state+0x1d71U));
            recovered_1000d85c(puVar16,uVar20,(undefined8 *)abStack_3a8);
            goto LAB_1000d1a4;
          }
          recovered_1000fd64((undefined8 *)&bStack_3d0,(ulong)uVar20);
          lVar23 = (ulong)uVar20 * 0x28;
          while (lVar23 = lVar23 + -0x28, lVar23 != -0x28) {
            recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                               (ulong)*(uint *)(pbVar1 + 0xc));
            recovered_1000d9e4((undefined1 *)(CONCAT71(uStack_3cf,bStack_3d0) + lVar23),abStack_3a8)
            ;
            recovered_1000686c((long *)&bStack_3a0);
          }
          recovered_10003a14(abStack_3a8,(undefined8 *)&bStack_3d0);
          recovered_1000ec00(&lStack_358,abStack_3a8);
          recovered_1000686c((long *)&bStack_3a0);
          recovered_10010238((long *)&bStack_3d0);
          goto switchD_1000c788_default;
        case 0x19:
          recovered_1000d97c(abStack_3a8,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          recovered_1000d97c(&bStack_3d0,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                             (ulong)*(uint *)(pbVar1 + 0xc));
          uVar20 = (uint)abStack_3a8[0];
          if (bStack_3d0 == 5 && uVar20 == 1) {
            plVar9 = (long *)recovered_100042ec((char *)&bStack_3d0);
            if (lStack_388 == 1) {
              if (-1 < iStack_39f) {
                if ((ulong)plVar9[1] <= CONCAT71(iStack_39f,bStack_3a0)) {
                  auStack_3f8[0] = 0;
                  uStack_3d8 = 0;
                  recovered_1000ec00(&lStack_358,auStack_3f8);
                  break;
                }
                recovered_1000a86c(&lStack_358,
                                   (undefined1 *)(*plVar9 + CONCAT71(iStack_39f,bStack_3a0) * 0x28))
                ;
                goto LAB_1000cd00;
              }
              puVar16 = *(undefined8 **)(pcVar21 + 0x10);
              uVar20 = *(uint *)(pbVar1 + 0xc);
              recovered_100064b8((long *)auStack_3f8,((uintptr_t)pf_module_state+0x1d91U));
              recovered_1000d85c(puVar16,uVar20,(undefined8 *)auStack_3f8);
            }
            goto LAB_1000d1a4;
          }
          if (bStack_3d0 == 6 && uVar20 == 4) {
            plVar9 = (long *)recovered_100043ac((char *)&bStack_3d0);
            puVar13 = (undefined1 *)recovered_1000eadc(plVar9,(char *)abStack_3a8);
            if (puVar13 == (undefined1 *)0x0) {
              auStack_3f8[0] = 0;
              uStack_3d8 = 0;
            }
            else {
              recovered_1000a8e0(auStack_3f8,puVar13);
            }
            recovered_1000a86c(&lStack_358,auStack_3f8);
            break;
          }
          if (bStack_3d0 == 6) {
            plVar9 = (long *)recovered_100043ac((char *)&bStack_3d0);
            puVar13 = (undefined1 *)recovered_1000eadc(plVar9,(char *)abStack_3a8);
            if (puVar13 == (undefined1 *)0x0) goto LAB_1000ce74;
LAB_1000ce00:
            recovered_1000a8e0(auStack_3f8,puVar13);
          }
          else {
            puVar26 = *(undefined8 **)(pcVar21 + 0x10);
            uVar2 = *(uint *)(pbVar1 + 0xc);
            if (2 < uVar20 - 1) {
              recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x20d4U));
              recovered_1000d85c(puVar26,uVar2,&pvStack_80);
              goto LAB_1000d1a4;
            }
            uVar10 = recovered_10004088((char *)abStack_3a8);
            if ((long)uVar10 < 0) {
              recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x1d91U));
              recovered_1000d85c(puVar26,uVar2,&pvStack_80);
              goto LAB_1000d1a4;
            }
            if (bStack_3d0 == 4) {
              pcVar22 = recovered_1000422c((char *)&bStack_3d0);
              if (uVar10 < *(ulong *)(pcVar22 + 8)) {
                puVar13 = &DAT_10017864;
                if (*(undefined1 **)pcVar22 != (undefined1 *)0x0) {
                  puVar13 = *(undefined1 **)pcVar22;
                }
                recovered_100089d0((long *)&pvStack_80,1,puVar13[uVar10]);
                recovered_1000395c(auStack_3f8,&pvStack_80);
                recovered_10002e70(pvStack_80);
                goto LAB_1000ce7c;
              }
            }
            else {
              if (bStack_3d0 != 5) {
                recovered_100064b8((long *)&pvStack_80,((uintptr_t)pf_module_state+0x20f0U));
                recovered_1000d85c(puVar26,uVar2,&pvStack_80);
                goto LAB_1000d1a4;
              }
              plVar9 = (long *)recovered_100042ec((char *)&bStack_3d0);
              if (uVar10 < (ulong)plVar9[1]) {
                puVar13 = (undefined1 *)(*plVar9 + uVar10 * 0x28);
                goto LAB_1000ce00;
              }
            }
LAB_1000ce74:
            auStack_3f8[0] = 0;
            uStack_3d8 = 0;
          }
LAB_1000ce7c:
          recovered_1000ec00(&lStack_358,auStack_3f8);
          break;
        default:
          goto switchD_1000c788_default;
        }
        recovered_1000686c((long *)abStack_3f0);
LAB_1000cd00:
        recovered_1000686c(alStack_3c8);
LAB_1000cd08:
        recovered_1000686c((long *)&bStack_3a0);
        goto switchD_1000c788_default;
      }
    }
    alStack_300[1] = 0;
    alStack_300[2] = 0;
    alStack_300[0] = 0;
    recovered_10006ee4(alStack_300,((uintptr_t)pf_module_state+0x1c34U));
    recovered_10003fd8(alStack_300,puVar16);
    recovered_10006ee4(alStack_300,((uintptr_t)pf_module_state+0x1c3fU));
    plVar12 = recovered_10008974(alStack_300,puVar16[4]);
    recovered_10006ee4(plVar12,((uintptr_t)pf_module_state+0x1c4bU));
    recovered_10008974(plVar12,unaff_x24);
    puVar16 = (undefined8 *)unaff_x19[1];
    recovered_10006dc0((undefined8 *)auStack_380,alStack_300);
    recovered_1000d85c(puVar16,0,(undefined8 *)auStack_380);
LAB_1000d1a4:
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1000d1a8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  cVar5 = pcVar21[1];
  if (cVar5 != '\x02') {
    if (cVar5 == '\x03') {
      recovered_1000eefc(((uintptr_t)pf_module_state+0x17f7U),param_6,3,3);
      param_2 = param_5 + 0x50;
      if (*param_5 == '\x06') {
        plVar12 = (long *)recovered_1000434c(param_5);
        puVar13 = (undefined1 *)recovered_1000f030(plVar12,param_5 + 0x28);
code_r0x1000a8e0:
        recovered_1000715c(puVar13,param_2);
        *param_1 = *param_2;
        recovered_1000a90c((long)(param_1 + 8),(long)(param_5 + 0x58));
        return param_1;
      }
      if (*param_5 == '\x05') {
        if ((byte)param_5[0x28] - 1 < 3) {
          uVar11 = recovered_10004088(param_5 + 0x28);
          if (-1 < (long)uVar11) {
            plVar12 = (long *)recovered_1000428c(param_5);
            if ((ulong)plVar12[1] <= uVar11) {
              recovered_10007e00(plVar12,uVar11 + 1);
            }
            puVar13 = (undefined1 *)(*plVar12 + uVar11 * 0x28);
            goto code_r0x1000a8e0;
          }
          puVar16 = (undefined8 *)recovered_10002efc(0x20);
          recovered_1000411c(puVar16,((uintptr_t)pf_module_state+0x1f82U));
        }
        else {
          puVar16 = (undefined8 *)recovered_10002efc(0x20);
          recovered_1000411c(puVar16,((uintptr_t)pf_module_state+0x1f5cU));
        }
      }
      else {
        puVar16 = (undefined8 *)recovered_10002efc(0x20);
        recovered_1000411c(puVar16,((uintptr_t)pf_module_state+0x1fadU));
      }
LAB_1000e8ec:
      recovered_10002fb4((long)puVar16,&LAB_1001c050,recovered_10004120);
      recovered_1000686c((long *)(param_2 + 8));
      recovered_10002e70(pvStack_e8);
      recovered_1000686c((long *)apvStack_c8);
      recovered_10010238((long *)&pvStack_a8);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    if (cVar5 == '\x01') {
      recovered_1000eefc(((uintptr_t)pf_module_state+0x1724U),param_6,0,1);
      puVar16 = (undefined8 *)recovered_10002efc(0x20);
      if (param_6 != 0) {
        recovered_10003c6c((long *)&local_90,param_5);
        recovered_10008940(puVar16,&local_90);
        recovered_10002fb4((long)puVar16,&LAB_1001c050,recovered_10004120);
        goto LAB_1000e8a4;
      }
      recovered_1000411c(puVar16,((uintptr_t)pf_module_state+0x1724U));
      goto LAB_1000e8ec;
    }
    if ((DAT_10020338 & 1) == 0) {
      DAT_10020340 = 0;
      DAT_10020348 = 0;
      DAT_10020350 = 0;
      recovered_10002ed0();
      DAT_10020338 = 1;
    }
    if (param_6 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(*(long *)(param_4 + 0x10) + 0x18) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x1000e86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*UNRECOVERED_JUMPTABLE)
                         (param_1,*(long **)(*(long *)(param_4 + 0x10) + 0x18),
                          *(undefined8 *)(param_2 + 0xd0),&DAT_10020340,UNRECOVERED_JUMPTABLE,
                          unaff_x30);
      return uVar15;
    }
    local_88 = 0;
    pvStack_80 = (void *)0x0;
    local_90 = (void *)0x0;
    recovered_10007b80((long *)&local_90,param_6);
    for (; param_6 != 0; param_6 = param_6 - 1) {
      recovered_1000a86c((long *)&local_90,param_5);
      param_5 = param_5 + 0x28;
    }
    (**(code **)(**(long **)(*(long *)(param_4 + 0x10) + 0x18) + 0x10))
              (param_1,*(long **)(*(long *)(param_4 + 0x10) + 0x18),*(undefined8 *)(param_2 + 0xd0),
               &local_90);
    ppvVar14 = &local_90;
    goto LAB_1000e6a8;
  }
  recovered_1000eefc(((uintptr_t)pf_module_state+0x17f1U),param_6,1,0xffffffffffffffff);
  uStack_a0 = 0;
  uStack_98 = 0;
  pvStack_a8 = (void *)0x0;
  recovered_10007b80((long *)&pvStack_a8,2);
  uVar11 = param_6 - 1;
  auStack_d0[0] = 0;
  uStack_b0 = 0;
  pcVar21 = (char *)0x0;
  if (uVar11 != 0) {
    pcVar21 = param_5 + 0x28;
  }
  lStack_e0 = 0;
  uStack_d8 = 0;
  pvStack_e8 = (void *)0x0;
  if (*param_5 == '\a') {
    if (*(long *)(param_5 + 0x20) != 7) goto LAB_1000e8a4;
    pcVar22 = *(char **)(param_5 + 0x10);
    if (pcVar22 == (char *)0x0) {
      pcVar21 = str_1001831a;
      goto LAB_1000e650;
    }
    if ((*pcVar22 == '\x01') && (pcVar22[1] == '\x01')) {
      recovered_1000eefc(((uintptr_t)pf_module_state+0x1724U),uVar11,0,1);
      if (uVar11 == 0) {
        recovered_100064b8((long *)&local_90,((uintptr_t)pf_module_state+0x1724U));
      }
      else {
        recovered_10003c6c((long *)&local_90,param_5 + 0x28);
      }
      recovered_100088f0(&pvStack_e8,&local_90);
LAB_1000e6d8:
      recovered_10002e70(local_90);
      goto LAB_1000e658;
    }
    lVar23 = *(long *)(pcVar22 + 0x10);
    if (lVar23 != 0) {
      uVar20 = *(uint *)(pcVar22 + 4);
      if (((-1 < (int)uVar20) && ((ulong)uVar20 < *(ulong *)(lVar23 + 0x38))) &&
         (puVar16 = (undefined8 *)(*(long *)(lVar23 + 0x30) + (ulong)uVar20 * 0x120),
         *(char *)(puVar16 + 0x1c) == '\x02')) {
        if (puVar16[4] != uVar11) {
          local_88 = 0;
          pvStack_80 = (void *)0x0;
          local_90 = (void *)0x0;
          recovered_10006ee4((long *)&local_90,((uintptr_t)pf_module_state+0x1c34U));
          recovered_10003fd8((long *)&local_90,puVar16);
          recovered_10006ee4((long *)&local_90,((uintptr_t)pf_module_state+0x1c3fU));
          plVar12 = recovered_10008974((long *)&local_90,puVar16[4]);
          recovered_10006ee4(plVar12,((uintptr_t)pf_module_state+0x1c4bU));
          recovered_10008974(plVar12,uVar11);
          recovered_10006dc0(&pvStack_68,&local_90);
          recovered_100088f0(&pvStack_e8,&pvStack_68);
          recovered_10002e70(pvStack_68);
          goto LAB_1000e6d8;
        }
        recovered_1000f538((undefined1 *)&local_90,(long)param_2,(long)(pcVar22 + 8),(long)puVar16,
                           *(uint *)((long)puVar16 + 0x104),(long)pcVar21,uVar11);
        bVar6 = recovered_10003c34((char *)&local_90);
        recovered_1000686c(&local_88);
        if (bVar6 == 0) {
          recovered_1000f538((undefined1 *)&local_90,(long)param_2,*(long *)(param_5 + 0x10) + 8,
                             (long)puVar16,*(uint *)(puVar16 + 0x20),(long)pcVar21,uVar11);
          recovered_1000d9e4(auStack_d0,(undefined1 *)&local_90);
          recovered_1000686c(&local_88);
        }
        else {
          recovered_10007268(&pvStack_e8,puVar16 + 0x21);
        }
        goto LAB_1000e658;
      }
    }
    local_90 = (void *)CONCAT71(PF_PART7(local_90, 1),1);
    recovered_1000d6c0((long *)&pvStack_a8,(undefined1 *)&local_90);
    recovered_1000e2d4((undefined1 *)&local_90,param_2,param_3,param_5,pcVar21,uVar11,param_7);
    recovered_1000ec00((long *)&pvStack_a8,(undefined1 *)&local_90);
    recovered_1000686c(&local_88);
  }
  else {
    pcVar21 = str_10018301;
LAB_1000e650:
    recovered_10008b14((long *)&pvStack_e8,(long)pcVar21);
LAB_1000e658:
    if (lStack_e0 == 0) {
      local_90 = (void *)CONCAT71(PF_PART7(local_90, 1),1);
      recovered_1000d6c0((long *)&pvStack_a8,(undefined1 *)&local_90);
      recovered_1000ec00((long *)&pvStack_a8,auStack_d0);
    }
    else {
      local_90 = (void *)((ulong)PF_PART7(local_90, 1) << 8);
      recovered_1000d6c0((long *)&pvStack_a8,(undefined1 *)&local_90);
      recovered_1000d730((long *)&pvStack_a8,&pvStack_e8);
    }
  }
  recovered_10003a14(param_1,&pvStack_a8);
  recovered_10002e70(pvStack_e8);
  recovered_1000686c((long *)apvStack_c8);
  ppvVar14 = &pvStack_a8;
LAB_1000e6a8:
  recovered_10010238((long *)ppvVar14);
  return unaff_x30;
switchD_1000c788_caseD_17:
  if (uStack_350 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    recovered_1000d97c(param_1,&lStack_358,*(undefined8 **)(pcVar21 + 0x10),
                       (ulong)*(uint *)(pbVar1 + 0xc));
  }
LAB_1000ce90:
  recovered_1000686c(alStack_378);
  recovered_10010238(&lStack_358);
  uStack_338 = 0;
  recovered_10002e70(puStack_340);
  recovered_10010238((long *)&plStack_328);
  lVar23 = recovered_1000fd90((long)alStack_300);
  return lVar23;
}

#undef DAT_10017864
#undef DAT_10020338
#undef DAT_10020340
#undef DAT_10020348
#undef DAT_10020350
#undef LAB_1001c050
#undef str_10018301
#undef str_1001831a
#undef plStack_420
#undef uStack_3d8
#undef bStack_3d0
#undef auStack_3f8
#undef abStack_3f0
#undef abStack_3a8
#undef bStack_3a0
#undef uStack_3cf
#undef alStack_3c8
#undef auStack_380
#undef alStack_378
#undef iStack_39f
#undef lStack_388
#undef uStack_350
#undef uStack_348
#undef uStack_360
#undef lStack_358
#undef uStack_330
#undef plStack_328
#undef puStack_340
#undef uStack_338
#undef uStack_310
#undef uStack_308
#undef uStack_320
#undef uStack_318
#undef pvStack_e8
#undef lStack_e0
#undef alStack_300
#undef auStack_f0
#undef apvStack_c8
#undef uStack_b0
#undef uStack_d8
#undef auStack_d0
#undef uStack_98
#undef pvStack_a8
#undef uStack_a0
#undef uStack_78
#undef pvStack_68
#undef pvStack_80
#undef local_90
#undef local_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea08
 */

void recovered_1000ea08(undefined1 *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = 7;
  recovered_1000fd24((long)(param_1 + 8),param_2);
  return;
}


#define local_40 (*(long *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea48
 */

void recovered_1000ea48(long param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  unsigned char frame[112] = {0};

  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;

  recovered_10007188((undefined8 *)param_1);
  puVar2 = *(undefined1 **)(param_1 + 8);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = param_3;
  plVar1 = (long *)(puVar2 + 8);
  if (plVar1 != param_4) {
    lVar4 = param_4[1];
    lVar3 = *param_4;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    uStack_38 = *(undefined8 *)(puVar2 + 0x10);
    local_40 = *plVar1;
    *(long *)(puVar2 + 0x10) = lVar4;
    *plVar1 = lVar3;
    recovered_100073a4(&local_40);
    puVar2 = *(undefined1 **)(param_1 + 8);
  }
  recovered_10007268((undefined8 *)(puVar2 + 0x20),param_2);
  return;
}

#undef local_40
#undef uStack_38

#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eadc
 */

long recovered_1000eadc(long *param_1,char *param_2)

{
  unsigned char frame[104] = {0};

  long lVar1;
  code *pcVar2;
  long lVar3;

  if (*param_2 == '\x04') {
    if (*(long *)(param_2 + 0x20) != 4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000eb50);
      (*pcVar2)();
    }
    lVar3 = recovered_1000ee04(param_1,(undefined8 *)(param_2 + 8));
  }
  else {
    recovered_1000fb5c((long *)apvStack_38,param_2);
    lVar3 = recovered_1000ee04(param_1,apvStack_38);
    recovered_10002e70(apvStack_38[0]);
  }
  lVar1 = 0;
  if (lVar3 != *param_1 + param_1[1] * 0x40) {
    lVar1 = lVar3 + 0x18;
  }
  return lVar1;
}

#undef apvStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb58
 */

void recovered_1000eb58(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    *(undefined8 *)((undefined1 *)(param_1 + lVar1) + 0x20) = 0;
    lVar1 = lVar1 + 0x28;
  } while (lVar1 != 0x280);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb78
 */

void recovered_1000eb78(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000686c((long *)(*param_1 + param_1[1] * 0x28 + -0x20));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ebb4
 */

long recovered_1000ebb4(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 != param_2) {
    recovered_1000689c(*(long *)(param_1 + 0x18),(long *)param_1);
    lVar1 = *(long *)(param_2 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    recovered_10007c8c(lVar1,(undefined8 *)param_1,(undefined8 *)param_2);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec00
 */

long recovered_1000ec00(long *param_1,undefined1 *param_2)

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
    recovered_10007b80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10007c2c((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec74
 */

void recovered_1000ec74(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  recovered_10006dc0(param_1,param_2);
  recovered_10003fd8(param_1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ecc0
 */

long recovered_1000ecc0(long *param_1,long param_2,long param_3,long param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = (param_2 - lVar4) / 0x28;
  }
  if (0x27 < (ulong)(param_4 - param_3)) {
    uVar3 = (ulong)(param_4 - param_3) / 0x28;
    uVar7 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar7 + uVar3) {
      uVar1 = 4;
      if (uVar5 != 0) {
        uVar1 = uVar5;
      }
      do {
        uVar5 = uVar1;
        uVar1 = uVar5 << 1;
      } while (uVar5 < uVar7 + uVar3);
      recovered_10007b80(param_1,uVar5);
      uVar7 = param_1[1];
    }
    lVar4 = uVar7 * 0x28;
    for (; lVar4 = lVar4 + -0x28, uVar6 < uVar7; uVar7 = uVar7 - 1) {
      recovered_10007c2c((undefined1 *)(*param_1 + lVar4) + uVar3 * 0x28,
                         (undefined1 *)(*param_1 + lVar4));
      recovered_1000686c((long *)(*param_1 + lVar4 + 8));
    }
    lVar4 = uVar6 * 0x28;
    for (; param_3 != param_4; param_3 = param_3 + 0x28) {
      recovered_1000a8e0((undefined1 *)(*param_1 + lVar4),(undefined1 *)param_3);
      lVar4 = lVar4 + 0x28;
    }
    lVar4 = *param_1;
    param_1[1] = param_1[1] + uVar3;
  }
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = lVar4 + uVar6 * 0x28;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee04
 */

long recovered_1000ee04(long *param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_100080b8(param_1,in_x1);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x40;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee38
 */

uint recovered_1000ee38(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  uint uVar2;

  puVar1 = &DAT_10017864;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  uVar2 = recovered_1000eea0(param_1,(long)puVar1,param_2[1]);
  return uVar2 >> 0x1f;
}

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee64
 */

uint recovered_1000ee64(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ee38(param_2,param_1);
  return uVar1 ^ 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee88
 */

uint recovered_1000ee88(undefined8 *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ee38(in_x0,in_x1);
  return uVar1 ^ 1;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eea0
 */

int recovered_1000eea0(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;

  uVar7 = 0;
  uVar8 = param_1[1];
  uVar4 = uVar8;
  if (param_3 <= uVar8) {
    uVar4 = param_3;
  }
  do {
    if (uVar4 == uVar7) {
      iVar6 = 1;
      if (uVar8 < param_3) {
        iVar6 = -1;
      }
      iVar3 = 0;
      if (uVar8 != param_3) {
        iVar3 = iVar6;
      }
      return iVar3;
    }
    puVar5 = &DAT_10017864;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*param_1;
    }
    pbVar1 = puVar5 + uVar7;
    pbVar2 = (byte *)(param_2 + uVar7);
    uVar7 = uVar7 + 1;
    iVar6 = (uint)*pbVar1 - (uint)*pbVar2;
  } while (iVar6 == 0);
  return iVar6;
}

#undef DAT_10017864

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_90 (*(long (*)[3])(frame + 16))
#define alStack_78 (*(long (*)[3])(frame + 40))
#define auStack_60 (*(undefined8 (*)[3])(frame + 64))
#define alStack_48 (*(long (*)[3])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eefc
 */

void recovered_1000eefc(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[192] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (param_2 < param_3 || param_4 < param_2) {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_100064b8(alStack_78,param_1);
    recovered_10003ff0(auStack_60,alStack_78,((uintptr_t)pf_module_state+0x1fcfU));
    recovered_1000f2a0(alStack_90,param_3,param_4);
    recovered_1000ec74(alStack_48,auStack_60,alStack_90);
    recovered_10008940(puVar2,alStack_48);
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ef7c);
    (*pcVar1)();
  }
  return;
}

#undef LAB_1001c050
#undef alStack_90
#undef alStack_78
#undef auStack_60
#undef alStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efbc
 */

long recovered_1000efbc(long *param_1,undefined8 *param_2)

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
    recovered_10007b80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_100038dc((undefined1 *)(*param_1 + lVar2 * 0x28),(undefined1 *)*param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


#undef PTR_DAT_1001c010
#define PTR_DAT_1001c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d28U)))
#define auStack_58 (*(undefined1 (*)[8])(frame + 16))
#define alStack_50 (*(long (*)[3])(frame + 24))
#define pvStack_38 (*(void * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f030
 */

long recovered_1000f030(long *param_1,char *param_2)

{
  unsigned char frame[136] = {0};

  code *pcVar1;
  long lVar2;

  if (*param_2 != '\x04') {
    recovered_1000fb5c((long *)&pvStack_38,param_2);
    lVar2 = recovered_1000faa8(param_1,&pvStack_38);
    recovered_10002e70(pvStack_38);
    return lVar2;
  }
  if (*(long *)(param_2 + 0x20) != 4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f094);
    (*pcVar1)();
  }
  lVar2 = recovered_10007f98(param_1,(undefined8 *)(param_2 + 8));
  if (lVar2 == *param_1 + param_1[1] * 0x40) {
    recovered_10007fcc((long)param_1);
    auStack_58[0] = 0;
    pvStack_38 = (void *)0x0;
    recovered_10007ffc(param_1,(undefined8 *)(param_2 + 8),auStack_58);
    recovered_1000686c(alStack_50);
    recovered_10007b18(param_1 + 6,(undefined8 *)PTR_DAT_1001c010);
    recovered_10008078((long)param_1,param_1[1] + -1);
    lVar2 = *param_1 + param_1[1] * 0x40 + -0x40;
  }
  return lVar2 + 0x18;
}

#undef PTR_DAT_1001c010
#undef auStack_58
#undef alStack_50
#undef pvStack_38

#define alStack_88 (*(long (*)[5])(frame + 120))
#define alStack_a8 (*(long (*)[3])(frame + 88))
#define uStack_90 (*(undefined8 *)(frame + 112))
#define apvStack_c8 (*(void * (*)[3])(frame + 56))
#define acStack_b0 (*(char (*)[8])(frame + 80))
#define auStack_f0 (*(undefined1 (*)[8])(frame + 16))
#define alStack_e8 (*(long (*)[4])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f09c
 */

void recovered_1000f09c(undefined1 *param_1,char *param_2,long param_3,long param_4,long param_5,
                       ulong param_6)

{
  unsigned char frame[288] = {0};

  code *pcVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;

  if (*(ulong *)(param_4 + 0x20) != param_6) {
    alStack_88[1] = 0;
    alStack_88[2] = 0;
    alStack_88[0] = 0;
    recovered_10006ee4(alStack_88,((uintptr_t)pf_module_state+0x1c34U));
    recovered_10003fd8(alStack_88,(undefined8 *)param_4);
    recovered_10006ee4(alStack_88,((uintptr_t)pf_module_state+0x1c3fU));
    plVar4 = recovered_10008974(alStack_88,*(ulong *)(param_4 + 0x20));
    recovered_10006ee4(plVar4,((uintptr_t)pf_module_state+0x1c4bU));
    recovered_10008974(plVar4,param_6);
    puVar5 = *(undefined8 **)(param_3 + 8);
    recovered_10006dc0((undefined8 *)acStack_b0,alStack_88);
    recovered_1000d85c(puVar5,0,(undefined8 *)acStack_b0);
LAB_1000f24c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f250);
    (*pcVar1)();
  }
  if (*(char *)(param_4 + 0xe0) == '\x02') {
    recovered_1000f538((undefined1 *)alStack_88,(long)param_2,param_3,param_4,
                       *(uint *)(param_4 + 0x104),param_5,param_6);
    bVar2 = recovered_10003c34((char *)alStack_88);
    recovered_1000686c(alStack_88 + 1);
    if (bVar2 != 0) {
      recovered_10003930((undefined1 *)alStack_88,(undefined8 *)(param_4 + 0x108));
      acStack_b0[0] = '\0';
      uStack_90 = 0;
      recovered_100064b8((long *)apvStack_c8,((uintptr_t)pf_module_state+0x1724U));
      bVar3 = recovered_10004758((long)param_2,apvStack_c8,acStack_b0);
      recovered_10002e70(apvStack_c8[0]);
      if (!bVar3) {
        puVar5 = *(undefined8 **)(param_3 + 8);
        recovered_100064b8((long *)apvStack_c8,((uintptr_t)pf_module_state+0x20adU));
        recovered_1000d85c(puVar5,0,apvStack_c8);
        goto LAB_1000f24c;
      }
      recovered_1000e2d4(auStack_f0,param_2,param_3,acStack_b0,(char *)alStack_88,1,0);
      recovered_1000686c(alStack_e8);
      recovered_1000686c(alStack_a8);
      recovered_1000686c(alStack_88 + 1);
    }
  }
  recovered_1000f538(param_1,(long)param_2,param_3,param_4,*(uint *)(param_4 + 0x100),param_5,
                     param_6);
  return;
}

#undef alStack_88
#undef alStack_a8
#undef uStack_90
#undef apvStack_c8
#undef acStack_b0
#undef auStack_f0
#undef alStack_e8

#define apvStack_38 (*(void * (*)[3])(frame + 112))
#define apvStack_68 (*(void * (*)[3])(frame + 64))
#define apvStack_50 (*(void * (*)[3])(frame + 88))
#define apvStack_98 (*(void * (*)[3])(frame + 16))
#define apvStack_80 (*(void * (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2a0
 */

void recovered_1000f2a0(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[200] = {0};

  ulong uVar1;

  if (param_2 == param_3) {
    if (param_2 == 1) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uVar1 = recovered_100065e4(((uintptr_t)pf_module_state+0x1fd9U));
      recovered_100064fc(param_1,((uintptr_t)pf_module_state+0x1fd9U),uVar1);
      return;
    }
    recovered_1000f424(apvStack_50,param_2);
    recovered_1000403c((long *)apvStack_38,((uintptr_t)pf_module_state+0x1fecU),apvStack_50);
    recovered_10003ff0(param_1,apvStack_38,((uintptr_t)pf_module_state+0x1ff5U));
  }
  else {
    if (param_3 != 0xffffffffffffffff) {
      recovered_1000f424(apvStack_80,param_2);
      recovered_1000403c((long *)apvStack_68,((uintptr_t)pf_module_state+0x200aU),apvStack_80);
      recovered_10003ff0(apvStack_50,apvStack_68,((uintptr_t)pf_module_state+0x2013U));
      recovered_1000f424(apvStack_98,param_3);
      recovered_1000ec74((long *)apvStack_38,apvStack_50,apvStack_98);
      recovered_10003ff0(param_1,apvStack_38,((uintptr_t)pf_module_state+0x1ff5U));
      recovered_10002e70(apvStack_38[0]);
      recovered_10002e70(apvStack_98[0]);
      recovered_10002e70(apvStack_50[0]);
      recovered_10002e70(apvStack_68[0]);
      apvStack_50[0] = apvStack_80[0];
      goto LAB_1000f3ac;
    }
    recovered_1000f424(apvStack_50,param_2);
    recovered_1000403c((long *)apvStack_38,((uintptr_t)pf_module_state+0x2000U),apvStack_50);
    recovered_10003ff0(param_1,apvStack_38,((uintptr_t)pf_module_state+0x1ff5U));
  }
  recovered_10002e70(apvStack_38[0]);
LAB_1000f3ac:
  recovered_10002e70(apvStack_50[0]);
  return;
}

#undef apvStack_38
#undef apvStack_68
#undef apvStack_50
#undef apvStack_98
#undef apvStack_80

#define auStack_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f424
 */

void recovered_1000f424(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] = {0};

  uint128 auVar1;

  auVar1 = recovered_1000f480((ulong)auStack_40,(ulong)(auStack_40 + 0x20),param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10006704(param_1,(long)auStack_40,PF_PART8(auVar1, 0) - (long)auStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef auStack_40

#define local_41 (*(byte (*)[65])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f480
 */

uint128 recovered_1000f480(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char frame[113] = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint128 auVar10;

  uVar5 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar5 = 1, param_1 <= param_2)) &&
     (0xffffffdc < param_4 - 0x25)) {
    uVar6 = (ulong)param_4;
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = param_3 / uVar6;
      }
      uVar7 = param_3 - uVar2 * uVar6;
      bVar3 = (byte)uVar7;
      bVar1 = bVar3 | 0x30;
      if (9 < uVar7) {
        bVar1 = bVar3 + 0x57;
      }
      uVar7 = uVar8 + 1;
      local_41[uVar8] = bVar1;
      bVar4 = uVar6 <= param_3;
      param_3 = uVar2;
    } while (bVar4);
    if (param_2 - param_1 < uVar7) {
      uVar5 = 2;
      param_1 = param_2;
    }
    else {
      pbVar9 = local_41 + uVar8 + 1;
      for (uVar6 = 0; pbVar9 = pbVar9 + -1, uVar7 != uVar6; uVar6 = uVar6 + 1) {
        *(byte *)(param_1 + uVar6) = *pbVar9;
      }
      uVar5 = 0;
      param_1 = param_1 + uVar7;
    }
  }
  PF_PART8(auVar10, 8) = uVar5;
  PF_PART8(auVar10, 0) = param_1;
  return auVar10;
}

#undef local_41

#define local_b0 (*(long *)(frame + 16))
#define local_a8 (*(long *)(frame + 24))
#define uStack_a0 (*(undefined8 *)(frame + 32))
#define abStack_88 (*(byte (*)[8])(frame + 56))
#define alStack_80 (*(long (*)[4])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f538
 */

ulonglong recovered_1000f538(undefined1 *param_1,long param_2,long param_3,long param_4,uint param_5
                            ,long param_6,ulong param_7)

{
  unsigned char frame[224] = {0};

  uint *puVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  char *in_x1;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;

  if (((int)param_5 < 0) || (*(ulong *)(param_4 + 0xf0) <= (ulong)param_5)) {
    puVar9 = *(undefined8 **)(param_3 + 8);
    recovered_100064b8((long *)abStack_88,((uintptr_t)pf_module_state+0x2051U));
    recovered_1000d85c(puVar9,0,(undefined8 *)abStack_88);
    goto LAB_1000f9d4;
  }
  puVar10 = (undefined1 *)(*(long *)(param_4 + 0xe8) + (ulong)param_5 * 0x38);
  switch((uintptr_t)(*puVar10)) {
  case 0:
    cVar3 = puVar10[1];
    if (cVar3 == '\x02') {
      puVar8 = (undefined1 *)recovered_10008514(param_2,*(ulong *)(puVar10 + 0x30));
      if (puVar8 != (undefined1 *)0x0) {
LAB_1000f918:
        *param_1 = *puVar8;
        recovered_1000a90c((long)(param_1 + 8),(long)(puVar8 + 8));
        return (ulonglong)param_1;
      }
      puVar9 = *(undefined8 **)(param_3 + 8);
      in_x1 = recovered_1000b990((long)puVar9,*(uint *)(puVar10 + 4));
      if (in_x1 == (char *)0x0) {
        uVar2 = *(uint *)(puVar10 + 0x28);
        recovered_100064b8((long *)abStack_88,((uintptr_t)pf_module_state+0x2074U));
        recovered_1000d85c(puVar9,uVar2,(undefined8 *)abStack_88);
      }
      else {
        uVar7 = recovered_100084d4(param_2,(undefined8 *)in_x1);
        puVar8 = (undefined1 *)recovered_10008514(param_2,uVar7);
        if (puVar8 != (undefined1 *)0x0) {
          *(ulong *)(puVar10 + 0x30) = uVar7;
          goto LAB_1000f918;
        }
        puVar9 = *(undefined8 **)(param_3 + 8);
        uVar2 = *(uint *)(puVar10 + 0x28);
        recovered_1000403c(&local_b0,((uintptr_t)pf_module_state+0x1c83U),(undefined8 *)in_x1);
        recovered_10003ff0((undefined8 *)abStack_88,&local_b0,((uintptr_t)pf_module_state+0x1878U));
        recovered_1000d85c(puVar9,uVar2,(undefined8 *)abStack_88);
      }
LAB_1000f9d4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f9d8);
      (*pcVar4)();
    }
    if (cVar3 == '\x01') {
      uVar2 = *(uint *)(puVar10 + 4);
      if ((-1 < (int)uVar2) && (uVar2 < param_7)) {
        puVar8 = (undefined1 *)(param_6 + (ulong)uVar2 * 0x28);
        goto LAB_1000f918;
      }
    }
    else if (cVar3 == '\0') {
      uVar2 = *(uint *)(puVar10 + 4);
      if ((int)uVar2 < 0) {
        puVar9 = *(undefined8 **)(param_3 + 8);
      }
      else {
        puVar9 = *(undefined8 **)(param_3 + 8);
        if ((ulong)uVar2 < (ulong)puVar9[4]) {
          puVar8 = (undefined1 *)(puVar9[3] + (ulong)uVar2 * 0x28);
          goto LAB_1000f918;
        }
      }
      uVar2 = *(uint *)(puVar10 + 0x28);
      recovered_100064b8((long *)abStack_88,((uintptr_t)pf_module_state+0x1c64U));
      recovered_1000d85c(puVar9,uVar2,(undefined8 *)abStack_88);
      goto LAB_1000f9d4;
    }
  default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return param_2;
  case 1:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000da10(param_1,abStack_88,(byte *)&local_b0,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 2:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000db94(param_1,abStack_88,(byte *)&local_b0,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 3:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000dc38(param_1,abStack_88,(byte *)&local_b0,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 4:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000dcdc(param_1,abStack_88,(byte *)&local_b0,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 5:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000dd94(param_1,abStack_88,(byte *)&local_b0,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 6:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000de98(param_1,abStack_88,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    goto LAB_1000f874;
  case 7:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    bVar5 = recovered_10003c34((char *)abStack_88);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 0x20) = 3;
    param_1[8] = bVar5 ^ 1;
    goto LAB_1000f874;
  case 8:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    uVar7 = recovered_1000df10(abStack_88,(byte *)&local_b0);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 0x20) = 3;
    param_1[8] = (char)uVar7;
    break;
  case 9:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    uVar7 = recovered_1000df10(abStack_88,(byte *)&local_b0);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 0x20) = 3;
    param_1[8] = (byte)uVar7 ^ 1;
    break;
  case 10:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000e16c(param_1,abStack_88,(byte *)&local_b0,0xd,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 0xb:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000e16c(param_1,abStack_88,(byte *)&local_b0,0xe,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 0xc:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000e16c(param_1,abStack_88,(byte *)&local_b0,0xf,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 0xd:
    recovered_1000f538(abStack_88,param_2,param_3,param_4,*(uint *)(puVar10 + 8),param_6,param_7);
    recovered_1000f538((undefined1 *)&local_b0,param_2,param_3,param_4,*(uint *)(puVar10 + 0xc),
                       param_6,param_7);
    recovered_1000e16c(param_1,abStack_88,(byte *)&local_b0,0x10,*(undefined8 **)(param_3 + 8),
                       (ulong)*(uint *)(puVar10 + 0x28));
    break;
  case 0xe:
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
    recovered_10007b80(&local_b0,*(ulong *)(puVar10 + 0x18));
    puVar1 = *(uint **)(puVar10 + 0x10);
    for (lVar11 = *(long *)(puVar10 + 0x18) << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      recovered_1000f538(abStack_88,param_2,param_3,param_4,*puVar1,param_6,param_7);
      recovered_1000ec00(&local_b0,abStack_88);
      recovered_1000686c(alStack_80);
      puVar1 = puVar1 + 1;
    }
    recovered_10003a14(param_1,&local_b0);
    plVar6 = recovered_10010238(&local_b0);
    return (ulonglong)plVar6;
  }
  recovered_1000686c(&local_a8);
LAB_1000f874:
  plVar6 = recovered_1000686c(alStack_80);
  return (ulonglong)plVar6;
}

#undef local_b0
#undef local_a8
#undef uStack_a0
#undef abStack_88
#undef alStack_80

#undef PTR_DAT_1001c010
#define PTR_DAT_1001c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d28U)))
#define local_58 (*(undefined1 (*)[8])(frame + 16))
#define local_38 (*(undefined8 *)(frame + 48))
#define alStack_50 (*(long (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000faa8
 */

long recovered_1000faa8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[136] = {0};

  long lVar1;

  lVar1 = recovered_10007f98(param_1,param_2);
  if (lVar1 == *param_1 + param_1[1] * 0x40) {
    recovered_10007fcc((long)param_1);
    local_58[0] = 0;
    local_38 = 0;
    recovered_1000fc60(param_1,param_2,local_58);
    recovered_1000686c(alStack_50);
    recovered_10007b18(param_1 + 6,(undefined8 *)PTR_DAT_1001c010);
    recovered_10008078((long)param_1,param_1[1] + -1);
    lVar1 = *param_1 + param_1[1] * 0x40 + -0x40;
  }
  return lVar1 + 0x18;
}

#undef PTR_DAT_1001c010
#undef local_58
#undef local_38
#undef alStack_50

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10017a3b
#define DAT_10017a3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1753U)))
#undef DAT_10017a3f
#define DAT_10017a3f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1757U)))
#undef str_10017a44
#define str_10017a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175cU)))
#define uStack_30 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 40))
#define abStack_40 (*(byte (*)[8])(frame + 16))
#define pvStack_38 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb5c
 */

void recovered_1000fb5c(long *param_1,undefined1 *param_2)

{
  unsigned char frame[112] = {0};

  undefined1 *puVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  uint128 auVar5;

  switch((uintptr_t)(*param_2)) {
  case 0:
    pcVar4 = &DAT_10017a3b;
    goto LAB_1000fc0c;
  case 1:
    if (*(long *)(param_2 + 0x20) == 1) {
      auVar5 = recovered_100069c0(abStack_40,abStack_40 + 0x20,*(ulong *)(param_2 + 8),10);
      if (PF_PART4(auVar5, 8) == 0) {
        recovered_10006704(param_1,(long)abStack_40,PF_PART8(auVar5, 0) - (long)abStack_40);
      }
      else {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      return;
    }
    break;
  case 2:
    uStack_30 = 0;
    uStack_28 = 0;
    pvStack_38 = (void *)0x0;
    if (*(long *)(param_2 + 0x20) == 2) {
      recovered_10003f80(*(double *)(param_2 + 8),(long *)&pvStack_38);
      recovered_10006dc0(param_1,&pvStack_38);
      recovered_10002e70(pvStack_38);
      return;
    }
    break;
  case 3:
    if (*(long *)(param_2 + 0x20) != 3) break;
    pcVar4 = &DAT_10017a3f;
    if (param_2[8] == '\0') {
      pcVar4 = str_10017a44;
    }
LAB_1000fc0c:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar3 = recovered_100065e4((long)pcVar4);
    recovered_100064fc(param_1,(long)pcVar4,uVar3);
    return;
  case 4:
    if (*(long *)(param_2 + 0x20) == 4) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      puVar1 = &DAT_10017864;
      if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(param_2 + 8);
      }
      recovered_100064fc(param_1,(long)puVar1,*(ulong *)(param_2 + 0x10));
      return;
    }
    break;
  default:
    recovered_100064b8((long *)&pvStack_38,((uintptr_t)pf_module_state+0x2094U));
    recovered_10008790(&pvStack_38);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000fc54);
  (*pcVar2)();
}

#undef DAT_10017864
#undef DAT_10017a3b
#undef DAT_10017a3f
#undef str_10017a44
#undef uStack_30
#undef uStack_28
#undef abStack_40
#undef pvStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fc60
 */

long recovered_1000fc60(long *param_1,undefined8 *param_2,undefined1 *param_3)

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
    recovered_10008240(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000fcdc((undefined8 *)(*param_1 + lVar2 * 0x40),param_2,param_3);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + (lVar2 + 1) * 0x40 + -0x40;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fcdc
 */

undefined8 * recovered_1000fcdc(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007ad4(param_1,param_2);
  recovered_10007c2c((undefined1 *)(uVar1 + 0x18),param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd24
 */

void recovered_1000fd24(long param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  recovered_1000689c(*(long *)(param_1 + 0x18),(long *)param_1);
  recovered_100084b4((long *)param_1,param_2);
  *(undefined8 *)(param_1 + 0x18) = 7;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd64
 */

undefined8 * recovered_1000fd64(undefined8 *param_1,ulong in_x1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007e00(param_1,in_x1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd90
 */

long recovered_1000fd90(long param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0x260;
  do {
    recovered_1000686c((long *)(param_1 + lVar2));
    bVar1 = lVar2 != 8;
    lVar2 = lVar2 + -0x28;
  } while (bVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdc8
 */

void recovered_1000fdc8(long *param_1,ulong param_2,int param_3)

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
    uVar3 = recovered_100027cc((int *)*param_1,param_2,iVar1);
    bVar2 = (int)uVar3 == 0;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fe18
 */

long recovered_1000fe18(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if ((*param_1 == 0) || (lVar1 = recovered_10002860(*param_1), lVar1 < 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    lVar1 = -1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fe58
 */

void recovered_1000fe58(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  bVar1 = false;
  if (((-1 < param_3) && (param_2 != 0)) && ((int *)*param_1 != (int *)0x0)) {
    lVar2 = recovered_10002528((undefined1 *)param_2,1,param_3,(int *)*param_1);
    bVar1 = lVar2 == param_3;
  }
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = lVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000feac
 */

void recovered_1000feac(long param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *(undefined8 *)(param_1 + 0x18) = 4;
  *(undefined8 *)param_1 = *in_x1;
  uVar1 = in_x1[1];
  *(undefined8 *)(param_1 + 0x10) = in_x1[2];
  *(undefined8 *)(param_1 + 8) = uVar1;
  in_x1[1] = 0;
  in_x1[2] = 0;
  *in_x1 = 0;
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000feb8
 */

void recovered_1000feb8(long param_1,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *(undefined8 *)(param_1 + 0x18) = 4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  puVar1 = &DAT_10017864;
  if ((undefined1 *)*in_x1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*in_x1;
  }
  recovered_100064fc((long *)param_1,(long)puVar1,in_x1[1]);
  return;
}

#undef DAT_10017864

#undef PTR_recovered_1000ff20_1001c210
#define PTR_recovered_1000ff20_1001c210 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5f28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fec4
 */

undefined8 * recovered_1000fec4(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  if (param_2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = recovered_10002e3c(0x20);
    puVar1[2] = 1;
    puVar1[1] = 1;
    *puVar1 = &PTR_recovered_1000ff20_1001c210;
    puVar1[3] = param_2;
  }
  *param_1 = puVar1;
  param_1[1] = param_2;
  return param_1;
}

#undef PTR_recovered_1000ff20_1001c210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff20
 */

void recovered_1000ff20(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff24
 */

void recovered_1000ff24(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff28
 */

void recovered_1000ff28(long param_1)

{
  unsigned char frame[64] = {0};

  long *data;

  data = (long *)0x0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    data = recovered_10010238(*(long **)(param_1 + 0x18));
  }
  recovered_10002e70(data);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff58
 */

void recovered_1000ff58(long *param_1)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ffc0
 */

long * recovered_1000ffc0(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;

  plVar1 = recovered_10010024(param_1,param_2);
  recovered_1000a748(plVar1 + 3,param_2 + 3);
  recovered_1000a748(param_1 + 6,param_2 + 6);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010024
 */

long * recovered_10010024(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008240(param_1,param_2[1]);
  lVar1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)param_2[1]; uVar2 = uVar2 + 1) {
    recovered_10010098((undefined8 *)(*param_1 + lVar1),*param_2 + lVar1);
    lVar1 = lVar1 + 0x40;
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010098
 */

undefined8 * recovered_10010098(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10006dc0(param_1,(undefined8 *)param_2);
  recovered_1000a8e0((undefined1 *)(puVar1 + 3),(undefined1 *)(param_2 + 0x18));
  return param_1;
}


#undef PTR_recovered_1001013c_1001c250
#define PTR_recovered_1001013c_1001c250 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5f68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100100e0
 */

undefined8 * recovered_100100e0(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  if (param_2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = recovered_10002e3c(0x20);
    puVar1[2] = 1;
    puVar1[1] = 1;
    *puVar1 = &PTR_recovered_1001013c_1001c250;
    puVar1[3] = param_2;
  }
  *param_1 = puVar1;
  param_1[1] = param_2;
  return param_1;
}

#undef PTR_recovered_1001013c_1001c250

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001013c
 */

void recovered_1001013c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010140
 */

void recovered_10010140(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010144
 */

void recovered_10010144(long param_1)

{
  unsigned char frame[64] = {0};

  void *data;

  data = (void *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    data = (void *)recovered_10006990(*(long *)(param_1 + 0x18));
  }
  recovered_10002e70(data);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010174
 */

void recovered_10010174(long *param_1)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100101dc
 */

undefined8 * recovered_100101dc(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_1001021c(param_1,param_2);
  recovered_10008d24((undefined8 *)(uVar1 + 0x18),param_2 + 3);
  recovered_10008d24(param_1 + 6,param_2 + 6);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001021c
 */

ulonglong recovered_1001021c(undefined8 *param_1,undefined8 *param_2)

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
  return (ulonglong)param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010238
 */

long * recovered_10010238(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10010264(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010264
 */

void recovered_10010264(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_1000686c((long *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100102b8
 */

undefined8 * recovered_100102b8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_1000677c(param_1);
  *(undefined8 *)(uVar1 + 0x58) = 0;
  *(undefined8 *)(uVar1 + 0x50) = 0;
  *(undefined8 *)(uVar1 + 0x88) = 0;
  *(undefined8 *)(uVar1 + 0x80) = 0;
  *(undefined8 *)(uVar1 + 0x98) = 0;
  *(undefined8 *)(uVar1 + 0x90) = 0;
  *(undefined8 *)(uVar1 + 0x68) = 0;
  *(undefined8 *)(uVar1 + 0x60) = 0;
  *(undefined8 *)(uVar1 + 0x78) = 0;
  *(undefined8 *)(uVar1 + 0x70) = 0;
  recovered_100110c8((undefined8 *)(uVar1 + 0x50));
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  recovered_10010374(param_1);
  return param_1;
}


#undef DAT_1001844c
#define DAT_1001844c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2164U)))
#undef str_1001842a
#define str_1001842a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2142U)))
#define local_190 (*(long * *)(frame + 16))
#define local_188 (*(long * *)(frame + 24))
#define local_180 (*(long * *)(frame + 32))
#define local_178 (*(long * *)(frame + 40))
#define local_170 (*(long * *)(frame + 48))
#define local_168 (*(long * *)(frame + 56))
#define local_160 (*(long * *)(frame + 64))
#define local_158 (*(long * *)(frame + 72))
#define local_150 (*(long * *)(frame + 80))
#define local_148 (*(long * *)(frame + 88))
#define local_140 (*(long * *)(frame + 96))
#define local_138 (*(long * *)(frame + 104))
#define local_130 (*(long * *)(frame + 112))
#define local_128 (*(long * *)(frame + 120))
#define local_120 (*(long * *)(frame + 128))
#define local_118 (*(long * *)(frame + 136))
#define local_110 (*(long * *)(frame + 144))
#define local_108 (*(long * *)(frame + 152))
#define local_100 (*(long * *)(frame + 160))
#define local_f8 (*(long * *)(frame + 168))
#define local_f0 (*(long * *)(frame + 176))
#define local_e8 (*(long * *)(frame + 184))
#define local_e0 (*(long * *)(frame + 192))
#define alStack_68 (*(long (*)[4])(frame + 312))
#define local_d8 (*(long * *)(frame + 200))
#define local_d0 (*(long * *)(frame + 208))
#define local_c8 (*(long * *)(frame + 216))
#define local_c0 (*(long * *)(frame + 224))
#define local_b8 (*(long * *)(frame + 232))
#define local_b0 (*(long * *)(frame + 240))
#define local_a8 (*(long * *)(frame + 248))
#define local_a0 (*(long * *)(frame + 256))
#define local_98 (*(long * *)(frame + 264))
#define local_90 (*(long * *)(frame + 272))
#define local_88 (*(long * *)(frame + 280))
#define local_80 (*(long * *)(frame + 288))
#define local_78 (*(long * *)(frame + 296))
#define local_70 (*(void * *)(frame + 304))
#define local_48 (*(void * (*)[3])(frame + 344))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010374
 */

void recovered_10010374(long *param_1)

{
  unsigned char frame[448] = {0};


  recovered_100064b8((long *)local_48,((uintptr_t)pf_module_state+0x2139U));
  recovered_100038dc((undefined1 *)&local_70,str_1001842a);
  recovered_10004700(param_1,local_48,(undefined1 *)&local_70);
  recovered_1000686c(alStack_68);
  recovered_10002e70(local_48[0]);
  recovered_100064b8((long *)local_48,((uintptr_t)pf_module_state+0x2151U));
  recovered_100038dc((undefined1 *)&local_70,&DAT_1001844c);
  recovered_10004700(param_1,local_48,(undefined1 *)&local_70);
  recovered_1000686c(alStack_68);
  recovered_10002e70(local_48[0]);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2168U));
  recovered_10011164(&local_78);
  recovered_10004578(param_1,&local_70,&local_78);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x216dU));
  recovered_10011290(&local_80);
  recovered_10004578(param_1,&local_70,&local_80);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2173U));
  recovered_10011388(&local_88);
  recovered_10004578(param_1,&local_70,&local_88);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2177U));
  recovered_10011584(&local_90);
  recovered_10004578(param_1,&local_70,&local_90);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x217fU));
  recovered_10011668(&local_98);
  recovered_10004578(param_1,&local_70,&local_98);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2184U));
  recovered_1001173c(&local_a0);
  recovered_10004578(param_1,&local_70,&local_a0);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x218eU));
  recovered_10011c90(&local_a8);
  recovered_10004578(param_1,&local_70,&local_a8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x1724U));
  recovered_10011d40(&local_b0);
  recovered_10004578(param_1,&local_70,&local_b0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x17f1U));
  recovered_10011e88(&local_b8,param_1);
  recovered_10004578(param_1,&local_70,&local_b8);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x219eU));
  recovered_1001236c(&local_c0);
  recovered_10004578(param_1,&local_70,&local_c0);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21a3U));
  recovered_10012638(&local_c8);
  recovered_10004578(param_1,&local_70,&local_c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21abU));
  recovered_100126e4(&local_d0);
  recovered_10004578(param_1,&local_70,&local_d0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x17f7U));
  recovered_10012a40(&local_d8);
  recovered_10004578(param_1,&local_70,&local_d8);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21b0U));
  recovered_10012c08(&local_e0);
  recovered_10004578(param_1,&local_70,&local_e0);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21bdU));
  recovered_10012e80(&local_e8);
  recovered_10004578(param_1,&local_70,&local_e8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21caU));
  recovered_10013120(&local_f0);
  recovered_10004578(param_1,&local_70,&local_f0);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21d5U));
  recovered_100133cc(&local_f8);
  recovered_10004578(param_1,&local_70,&local_f8);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21e2U));
  recovered_100135cc(&local_100);
  recovered_10004578(param_1,&local_70,&local_100);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21edU));
  recovered_10013738(&local_108);
  recovered_10004578(param_1,&local_70,&local_108);
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x21f7U));
  recovered_10013808(&local_110);
  recovered_10004578(param_1,&local_70,&local_110);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2200U));
  recovered_100138d8(&local_118);
  recovered_10004578(param_1,&local_70,&local_118);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2209U));
  recovered_100139e4(&local_120);
  recovered_10004578(param_1,&local_70,&local_120);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2212U));
  recovered_10013af0(&local_128);
  recovered_10004578(param_1,&local_70,&local_128);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x221bU));
  recovered_10013bcc(&local_130);
  recovered_10004578(param_1,&local_70,&local_130);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2224U));
  recovered_10013ca8(&local_138);
  recovered_10004578(param_1,&local_70,&local_138);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x222dU));
  recovered_10013d8c(&local_140);
  recovered_10004578(param_1,&local_70,&local_140);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2236U));
  recovered_10013e68(&local_148);
  recovered_10004578(param_1,&local_70,&local_148);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2240U));
  recovered_10013f44(&local_150);
  recovered_10004578(param_1,&local_70,&local_150);
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x224dU));
  recovered_100140e4(&local_158);
  recovered_10004578(param_1,&local_70,&local_158);
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2258U));
  recovered_100142a0(&local_160);
  recovered_10004578(param_1,&local_70,&local_160);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2264U));
  recovered_10014840(&local_168);
  recovered_10004578(param_1,&local_70,&local_168);
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2271U));
  recovered_10014c00(&local_170);
  recovered_10004578(param_1,&local_70,&local_170);
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x227fU));
  recovered_10014e1c(&local_178);
  recovered_10004578(param_1,&local_70,&local_178);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x228bU));
  recovered_10014fe8(&local_180);
  recovered_10004578(param_1,&local_70,&local_180);
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x2299U));
  recovered_10015320(&local_188);
  recovered_10004578(param_1,&local_70,&local_188);
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 8))();
  }
  recovered_10002e70(local_70);
  recovered_100064b8((long *)&local_70,((uintptr_t)pf_module_state+0x22a5U));
  recovered_100156e8(&local_190);
  recovered_10004578(param_1,&local_70,&local_190);
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 8))();
  }
  recovered_10002e70(local_70);
  return;
}

#undef DAT_1001844c
#undef str_1001842a
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0
#undef alStack_68
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100110c8
 */

void recovered_100110c8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100110e8
 */

long * recovered_100110e8(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10011114(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011114
 */

void recovered_10011114(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10006754((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


#undef PTR_recovered_100111a0_1001c290
#define PTR_recovered_100111a0_1001c290 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5fa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011164
 */

undefined8 * recovered_10011164(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100111a0_1001c290;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100111a0_1001c290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100111a0
 */

void recovered_100111a0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100111a4
 */

void recovered_100111a4(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define apvStack_58 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100111a8
 */

void recovered_100111a8(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[136] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)param_4[1]; uVar2 = uVar2 + 1) {
    if (uVar2 != 0) {
      recovered_1000388c(((uintptr_t)pf_module_state+0x22aeU));
    }
    recovered_10003c6c((long *)apvStack_58,(undefined1 *)(*param_4 + lVar1));
    recovered_10003874(apvStack_58);
    recovered_10002e70(apvStack_58[0]);
    lVar1 = lVar1 + 0x28;
  }
  recovered_1000388c(((uintptr_t)pf_module_state+0x1801U));
  recovered_10002004();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef apvStack_58

#undef PTR_recovered_100111a0_1001c290
#define PTR_recovered_100111a0_1001c290 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5fa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100111b0
 */

void recovered_100111b0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100111a0_1001c290;
  return;
}

#undef PTR_recovered_100111a0_1001c290

#define local_58 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100111d8
 */

void recovered_100111d8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[136] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = 0;
  for (uVar2 = 0; uVar2 < (ulong)param_4[1]; uVar2 = uVar2 + 1) {
    if (uVar2 != 0) {
      recovered_1000388c(((uintptr_t)pf_module_state+0x22aeU));
    }
    recovered_10003c6c((long *)local_58,(undefined1 *)(*param_4 + lVar1));
    recovered_10003874(local_58);
    recovered_10002e70(local_58[0]);
    lVar1 = lVar1 + 0x28;
  }
  recovered_1000388c(((uintptr_t)pf_module_state+0x1801U));
  recovered_10002004();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef local_58

#undef PTR_recovered_100112cc_1001c2e8
#define PTR_recovered_100112cc_1001c2e8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6000U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011290
 */

undefined8 * recovered_10011290(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100112cc_1001c2e8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100112cc_1001c2e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112cc
 */

void recovered_100112cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112d0
 */

void recovered_100112d0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define apvStack_48 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112d4
 */

void recovered_100112d4(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[120] = {0};

  undefined1 *puVar1;
  long lVar2;

  puVar1 = (undefined1 *)*param_4;
  for (lVar2 = param_4[1] * 0x28; lVar2 != 0; lVar2 = lVar2 + -0x28) {
    recovered_10003c6c((long *)apvStack_48,puVar1);
    recovered_10003874(apvStack_48);
    recovered_10002e70(apvStack_48[0]);
    puVar1 = puVar1 + 0x28;
  }
  recovered_10002004();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef apvStack_48

#undef PTR_recovered_100112cc_1001c2e8
#define PTR_recovered_100112cc_1001c2e8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6000U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112dc
 */

void recovered_100112dc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100112cc_1001c2e8;
  return;
}

#undef PTR_recovered_100112cc_1001c2e8

#define local_48 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011304
 */

void recovered_10011304(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[120] = {0};

  undefined1 *puVar1;
  long lVar2;

  puVar1 = (undefined1 *)*param_4;
  for (lVar2 = param_4[1] * 0x28; lVar2 != 0; lVar2 = lVar2 + -0x28) {
    recovered_10003c6c((long *)local_48,puVar1);
    recovered_10003874(local_48);
    recovered_10002e70(local_48[0]);
    puVar1 = puVar1 + 0x28;
  }
  recovered_10002004();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef local_48

#undef PTR_recovered_100113c4_1001c330
#define PTR_recovered_100113c4_1001c330 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6048U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011388
 */

undefined8 * recovered_10011388(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100113c4_1001c330;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100113c4_1001c330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113c4
 */

void recovered_100113c4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113c8
 */

void recovered_100113c8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113cc
 */

void recovered_100113cc(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2173U),(long)param_4,1,1);
  pcVar2 = (char *)*param_4;
  cVar1 = *pcVar2;
  if (cVar1 == '\x06') {
    pcVar2 = (char *)recovered_100043ac(pcVar2);
  }
  else if (cVar1 == '\x05') {
    pcVar2 = (char *)recovered_100042ec(pcVar2);
  }
  else {
    if (cVar1 != '\x04') {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x22b0U));
      recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
      recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    pcVar2 = recovered_1000422c(pcVar2);
  }
  uVar4 = *(undefined8 *)(pcVar2 + 8);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 8) = uVar4;
  return;
}

#undef LAB_1001c050

#undef PTR_recovered_100113c4_1001c330
#define PTR_recovered_100113c4_1001c330 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6048U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113d4
 */

void recovered_100113d4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100113c4_1001c330;
  return;
}

#undef PTR_recovered_100113c4_1001c330

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113fc
 */

void recovered_100113fc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2173U),(long)param_4,1,1);
  pcVar2 = (char *)*param_4;
  cVar1 = *pcVar2;
  if (cVar1 == '\x06') {
    pcVar2 = (char *)recovered_100043ac(pcVar2);
  }
  else if (cVar1 == '\x05') {
    pcVar2 = (char *)recovered_100042ec(pcVar2);
  }
  else {
    if (cVar1 != '\x04') {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x22b0U));
      recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
      recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    pcVar2 = recovered_1000422c(pcVar2);
  }
  uVar4 = *(undefined8 *)(pcVar2 + 8);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 8) = uVar4;
  return;
}

#undef LAB_1001c050

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_90 (*(long (*)[3])(frame + 16))
#define alStack_78 (*(long (*)[3])(frame + 40))
#define auStack_60 (*(undefined8 (*)[3])(frame + 64))
#define alStack_48 (*(long (*)[3])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100114c0
 */

void recovered_100114c0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[192] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if (*(ulong *)(param_2 + 8) < param_3 || param_4 < *(ulong *)(param_2 + 8)) {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_100064b8(alStack_78,param_1);
    recovered_10003ff0(auStack_60,alStack_78,((uintptr_t)pf_module_state+0x1fcfU));
    recovered_1000f2a0(alStack_90,param_3,param_4);
    recovered_1000ec74(alStack_48,auStack_60,alStack_90);
    recovered_10008940(puVar2,alStack_48);
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10011544);
    (*pcVar1)();
  }
  return;
}

#undef LAB_1001c050
#undef alStack_90
#undef alStack_78
#undef auStack_60
#undef alStack_48

#undef PTR_recovered_100115c0_1001c378
#define PTR_recovered_100115c0_1001c378 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6090U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011584
 */

undefined8 * recovered_10011584(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100115c0_1001c378;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100115c0_1001c378

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115c0
 */

void recovered_100115c0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115c4
 */

void recovered_100115c4(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017850
#define DAT_10017850 (*(double *)(((uintptr_t)pf_module_state + 0x1568U)))
#undef PTR_DAT_1001c030
#define PTR_DAT_1001c030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115c8
 */

void recovered_100115c8(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  long lVar1;
  double dVar2;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2177U),param_4,0,0);
  lVar1 = *(long *)PTR_DAT_1001c030;
  *(long *)PTR_DAT_1001c030 = lVar1 + 1;
  dVar2 = ((double)lVar1 * DAT_10017850) / DAT_10017850;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 8) = (long)dVar2;
  return;
}

#undef DAT_10017850
#undef PTR_DAT_1001c030

#undef PTR_recovered_100115c0_1001c378
#define PTR_recovered_100115c0_1001c378 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6090U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115d0
 */

void recovered_100115d0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100115c0_1001c378;
  return;
}

#undef PTR_recovered_100115c0_1001c378

#undef DAT_10017850
#define DAT_10017850 (*(double *)(((uintptr_t)pf_module_state + 0x1568U)))
#undef PTR_DAT_1001c030
#define PTR_DAT_1001c030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115f8
 */

void recovered_100115f8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  long lVar1;
  double dVar2;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2177U),param_4,0,0);
  lVar1 = *(long *)PTR_DAT_1001c030;
  *(long *)PTR_DAT_1001c030 = lVar1 + 1;
  dVar2 = ((double)lVar1 * DAT_10017850) / DAT_10017850;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 8) = (long)dVar2;
  return;
}

#undef DAT_10017850
#undef PTR_DAT_1001c030

#undef PTR_recovered_100116a4_1001c3c0
#define PTR_recovered_100116a4_1001c3c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x60d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011668
 */

undefined8 * recovered_10011668(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100116a4_1001c3c0;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100116a4_1001c3c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100116a4
 */

void recovered_100116a4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100116a8
 */

void recovered_100116a8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define apvStack_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100116ac
 */

void recovered_100116ac(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[104] = {0};


  recovered_100114c0(((uintptr_t)pf_module_state+0x217fU),(long)param_4,1,1);
  recovered_10003c6c((long *)apvStack_38,(undefined1 *)*param_4);
  recovered_1000395c(param_1,apvStack_38);
  recovered_10002e70(apvStack_38[0]);
  return;
}

#undef apvStack_38

#undef PTR_recovered_100116a4_1001c3c0
#define PTR_recovered_100116a4_1001c3c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x60d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100116b4
 */

void recovered_100116b4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100116a4_1001c3c0;
  return;
}

#undef PTR_recovered_100116a4_1001c3c0

#define local_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100116dc
 */

void recovered_100116dc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[104] = {0};


  recovered_100114c0(((uintptr_t)pf_module_state+0x217fU),(long)param_4,1,1);
  recovered_10003c6c((long *)local_38,(undefined1 *)*param_4);
  recovered_1000395c(param_1,local_38);
  recovered_10002e70(local_38[0]);
  return;
}

#undef local_38

#undef PTR_recovered_10011778_1001c408
#define PTR_recovered_10011778_1001c408 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001173c
 */

undefined8 * recovered_1001173c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011778_1001c408;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10011778_1001c408

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011778
 */

void recovered_10011778(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001177c
 */

void recovered_1001177c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_100185e4
#define DAT_100185e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22fcU)))
#undef DAT_10020080
#define DAT_10020080 (*(int *)(((uintptr_t)pf_module_state + 0x9d98U)))
#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define pcStack_38 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011780
 */

void recovered_10011780(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[104] = {0};

  char *text;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *object;
  char *pcVar5;
  ulonglong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2184U),(long)param_4,1,2);
  object = (byte *)*param_4;
  if (*object - 1 < 3) {
    dVar11 = recovered_10004124(object);
    bVar4 = recovered_10011b98((ulong)dVar11);
    if (bVar4) {
      dVar12 = recovered_10003338(dVar11);
      dVar12 = recovered_10001370(dVar11 - dVar12);
      bVar4 = true;
      bVar3 = false;
      if (dVar11 <= 9.223372036854776e+18) {
        bVar4 = false;
        bVar3 = true;
        if (!NAN(dVar11)) {
          bVar4 = dVar11 < -9.223372036854776e+18;
          bVar3 = false;
        }
      }
      bVar1 = false;
      bVar2 = true;
      if (bVar4 == bVar3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar12)) {
          bVar1 = dVar12 == 2.220446049250313e-16;
          bVar2 = 2.220446049250313e-16 <= dVar12;
        }
      }
      if (!bVar2 || bVar1) {
        lVar10 = recovered_10001278(dVar11);
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x20) = 1;
        *(long *)(param_1 + 8) = lVar10;
        return;
      }
    }
    *param_1 = 2;
    *(undefined8 *)(param_1 + 0x20) = 2;
    *(double *)(param_1 + 8) = dVar11;
    return;
  }
  if (*object == 4) {
    pcVar5 = recovered_1000422c((char *)object);
    if (param_4[1] == 2) {
      uVar6 = recovered_10011a10(((uintptr_t)pf_module_state+0x2184U),param_4,1);
      if ((int)uVar6 - 0x25U < 0xffffffdd) {
        puVar9 = (undefined8 *)recovered_10002efc(0x20);
        recovered_1000411c(puVar9,((uintptr_t)pf_module_state+0x22d4U));
        recovered_10002fb4((long)puVar9,&LAB_1001c050,recovered_10004120);
        recovered_10002f44((long)puVar9);
                    /* WARNING: Subroutine does not return */
        recovered_10003190();
      }
    }
    else {
      lVar10 = recovered_100065e4(((uintptr_t)pf_module_state+0x22fcU));
      uVar7 = recovered_10011b40((undefined8 *)pcVar5,&DAT_100185e4,lVar10,0);
      if (uVar7 != 0xffffffffffffffff) {
        pcStack_38 = (char *)0x0;
        DAT_10020080 = 0;
        text = &DAT_10017864;
        if (*(char **)pcVar5 != (char *)0x0) {
          text = *(char **)pcVar5;
        }
        dVar11 = recovered_10001758(text,&pcStack_38);
        if (((DAT_10020080 == 0) && (pcStack_38 != (char *)0x0)) && (*pcStack_38 == '\0')) {
          recovered_10011980(param_1,dVar11);
          return;
        }
        goto LAB_100118d4;
      }
      uVar6 = 10;
    }
    pcStack_38 = (char *)0x0;
    uVar8 = recovered_10011aac((undefined8 *)pcVar5,uVar6,&pcStack_38);
    bVar4 = (int)uVar8 != 0;
    if (bVar4) {
      *(char **)(param_1 + 8) = pcStack_38;
    }
    *param_1 = bVar4;
    *(ulong *)(param_1 + 0x20) = (ulong)bVar4;
  }
  else {
LAB_100118d4:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

#undef DAT_10017864
#undef DAT_100185e4
#undef DAT_10020080
#undef LAB_1001c050
#undef pcStack_38

#undef PTR_recovered_10011778_1001c408
#define PTR_recovered_10011778_1001c408 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011788
 */

void recovered_10011788(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011778_1001c408;
  return;
}

#undef PTR_recovered_10011778_1001c408

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_100185e4
#define DAT_100185e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22fcU)))
#undef DAT_10020080
#define DAT_10020080 (*(int *)(((uintptr_t)pf_module_state + 0x9d98U)))
#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define local_38 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100117b0
 */

void recovered_100117b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[104] = {0};

  char *text;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *object;
  char *pcVar5;
  ulonglong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2184U),(long)param_4,1,2);
  object = (byte *)*param_4;
  if (*object - 1 < 3) {
    dVar11 = recovered_10004124(object);
    bVar4 = recovered_10011b98((ulong)dVar11);
    if (bVar4) {
      dVar12 = recovered_10003338(dVar11);
      dVar12 = recovered_10001370(dVar11 - dVar12);
      bVar4 = true;
      bVar3 = false;
      if (dVar11 <= 9.223372036854776e+18) {
        bVar4 = false;
        bVar3 = true;
        if (!NAN(dVar11)) {
          bVar4 = dVar11 < -9.223372036854776e+18;
          bVar3 = false;
        }
      }
      bVar1 = false;
      bVar2 = true;
      if (bVar4 == bVar3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar12)) {
          bVar1 = dVar12 == 2.220446049250313e-16;
          bVar2 = 2.220446049250313e-16 <= dVar12;
        }
      }
      if (!bVar2 || bVar1) {
        lVar10 = recovered_10001278(dVar11);
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x20) = 1;
        *(long *)(param_1 + 8) = lVar10;
        return;
      }
    }
    *param_1 = 2;
    *(undefined8 *)(param_1 + 0x20) = 2;
    *(double *)(param_1 + 8) = dVar11;
    return;
  }
  if (*object == 4) {
    pcVar5 = recovered_1000422c((char *)object);
    if (param_4[1] == 2) {
      uVar6 = recovered_10011a10(((uintptr_t)pf_module_state+0x2184U),param_4,1);
      if ((int)uVar6 - 0x25U < 0xffffffdd) {
        puVar9 = (undefined8 *)recovered_10002efc(0x20);
        recovered_1000411c(puVar9,((uintptr_t)pf_module_state+0x22d4U));
        recovered_10002fb4((long)puVar9,&LAB_1001c050,recovered_10004120);
        recovered_10002f44((long)puVar9);
                    /* WARNING: Subroutine does not return */
        recovered_10003190();
      }
    }
    else {
      lVar10 = recovered_100065e4(((uintptr_t)pf_module_state+0x22fcU));
      uVar7 = recovered_10011b40((undefined8 *)pcVar5,&DAT_100185e4,lVar10,0);
      if (uVar7 != 0xffffffffffffffff) {
        local_38 = (char *)0x0;
        DAT_10020080 = 0;
        text = &DAT_10017864;
        if (*(char **)pcVar5 != (char *)0x0) {
          text = *(char **)pcVar5;
        }
        dVar11 = recovered_10001758(text,&local_38);
        if (((DAT_10020080 == 0) && (local_38 != (char *)0x0)) && (*local_38 == '\0')) {
          recovered_10011980(param_1,dVar11);
          return;
        }
        goto LAB_100118d4;
      }
      uVar6 = 10;
    }
    local_38 = (char *)0x0;
    uVar8 = recovered_10011aac((undefined8 *)pcVar5,uVar6,&local_38);
    bVar4 = (int)uVar8 != 0;
    if (bVar4) {
      *(char **)(param_1 + 8) = local_38;
    }
    *param_1 = bVar4;
    *(ulong *)(param_1 + 0x20) = (ulong)bVar4;
  }
  else {
LAB_100118d4:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

#undef DAT_10017864
#undef DAT_100185e4
#undef DAT_10020080
#undef LAB_1001c050
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011980
 */

void recovered_10011980(undefined1 *param_1,double param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;

  bVar4 = recovered_10011b98((ulong)param_2);
  if (bVar4) {
    dVar6 = recovered_10003338(param_2);
    dVar6 = recovered_10001370(param_2 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (param_2 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(param_2)) {
        bVar4 = param_2 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(param_2);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = param_2;
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_60 (*(long (*)[3])(frame + 16))
#define auStack_48 (*(undefined8 (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011a10
 */

ulonglong recovered_10011a10(long param_1,long *param_2,ulong param_3)

{
  unsigned char frame[144] = {0};

  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;

  pbVar5 = (byte *)recovered_10011bb4(param_1,param_2,param_3);
  if (2 < *pbVar5 - 1) {
    puVar4 = (undefined8 *)recovered_10002efc(0x20);
    recovered_100064b8(alStack_60,param_1);
    recovered_10003ff0(auStack_48,alStack_60,((uintptr_t)pf_module_state+0x2300U));
    recovered_10008940(puVar4,auStack_48);
    recovered_10002fb4((long)puVar4,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10011a84);
    (*pcVar2)();
  }
  bVar1 = *pbVar5;
  if (bVar1 == 3) {
    if (*(long *)(pbVar5 + 0x20) != 3) goto LAB_100040e8;
    uVar3 = (ulonglong)pbVar5[8];
  }
  else if (bVar1 == 2) {
    if (*(long *)(pbVar5 + 0x20) != 2) goto LAB_100040e8;
    uVar3 = (ulonglong)*(double *)(pbVar5 + 8);
  }
  else {
    if (bVar1 != 1) {
      puVar4 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x177bU));
      recovered_10002fb4((long)puVar4,&LAB_1001c050,recovered_10004120);
      recovered_10002f44((long)puVar4);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    if (*(long *)(pbVar5 + 0x20) != 1) {
LAB_100040e8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100040ec);
      (*pcVar2)();
    }
    uVar3 = *(ulonglong *)(pbVar5 + 8);
  }
  return uVar3;
}

#undef LAB_1001c050
#undef alStack_60
#undef auStack_48

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_10020080
#define DAT_10020080 (*(int *)(((uintptr_t)pf_module_state + 0x9d98U)))
#define local_28 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011aac
 */

undefined8 recovered_10011aac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[88] = {0};

  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;

  if (param_1[1] == 0) {
    return 0;
  }
  local_28 = (char *)0x0;
  DAT_10020080 = 0;
  pbVar1 = &DAT_10017864;
  if ((byte *)*param_1 != (byte *)0x0) {
    pbVar1 = (byte *)*param_1;
  }
  lVar2 = recovered_100034c8(pbVar1,&local_28,(uint)param_2);
  uVar3 = 0;
  if ((DAT_10020080 == 0) && (local_28 != (char *)0x0)) {
    if (*local_28 == '\0') {
      *param_3 = lVar2;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef DAT_10017864
#undef DAT_10020080
#undef local_28

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b40
 */

ulong recovered_10011b40(undefined8 *param_1,char *param_2,long param_3,ulong param_4)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;

  do {
    if ((ulong)param_1[1] <= param_4) {
      return 0xffffffffffffffff;
    }
    pcVar3 = param_2;
    lVar4 = param_3;
    while (lVar4 != 0) {
      puVar1 = &DAT_10017864;
      if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
        puVar1 = (undefined1 *)*param_1;
      }
      cVar2 = *pcVar3;
      lVar4 = lVar4 + -1;
      pcVar3 = pcVar3 + 1;
      if (puVar1[param_4] == cVar2) {
        return param_4;
      }
    }
    param_4 = param_4 + 1;
  } while( true );
}

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b98
 */

bool recovered_10011b98(ulong in_d0)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_100032d8(in_d0);
  return bVar1;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define auStack_90 (*(undefined8 (*)[3])(frame + 16))
#define alStack_78 (*(long (*)[3])(frame + 40))
#define auStack_60 (*(undefined8 (*)[3])(frame + 64))
#define alStack_48 (*(long (*)[3])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011bb4
 */

long recovered_10011bb4(long param_1,long *param_2,ulong param_3)

{
  unsigned char frame[192] = {0};

  code *pcVar1;
  undefined8 *puVar2;

  if ((ulong)param_2[1] <= param_3) {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_100064b8(alStack_78,param_1);
    recovered_10003ff0(auStack_60,alStack_78,((uintptr_t)pf_module_state+0x231cU));
    recovered_1000f424(auStack_90,param_3 + 1);
    recovered_1000ec74(alStack_48,auStack_60,auStack_90);
    recovered_10008940(puVar2,alStack_48);
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10011c54);
    (*pcVar1)();
  }
  return *param_2 + param_3 * 0x28;
}

#undef LAB_1001c050
#undef auStack_90
#undef alStack_78
#undef auStack_60
#undef alStack_48

#undef PTR_recovered_10011ccc_1001c450
#define PTR_recovered_10011ccc_1001c450 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6168U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011c90
 */

undefined8 * recovered_10011c90(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011ccc_1001c450;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10011ccc_1001c450

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ccc
 */

void recovered_10011ccc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011cd0
 */

void recovered_10011cd0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011cd4
 */

void recovered_10011cd4(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  recovered_100114c0(((uintptr_t)pf_module_state+0x218eU),param_4,0,0);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


#undef PTR_recovered_10011ccc_1001c450
#define PTR_recovered_10011ccc_1001c450 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6168U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011cdc
 */

void recovered_10011cdc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011ccc_1001c450;
  return;
}

#undef PTR_recovered_10011ccc_1001c450

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d04
 */

void recovered_10011d04(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  recovered_100114c0(((uintptr_t)pf_module_state+0x218eU),param_4,0,0);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


#undef PTR_recovered_10011d7c_1001c498
#define PTR_recovered_10011d7c_1001c498 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x61b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d40
 */

undefined8 * recovered_10011d40(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011d7c_1001c498;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10011d7c_1001c498

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d7c
 */

void recovered_10011d7c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d80
 */

void recovered_10011d80(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_48 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d84
 */

void recovered_10011d84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[120] = {0};

  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;

  recovered_100114c0(((uintptr_t)pf_module_state+0x1724U),(long)param_3,0,1);
  lVar3 = param_3[1];
  puVar2 = (undefined8 *)recovered_10002efc(0x20);
  if (lVar3 == 0) {
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x1724U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
  recovered_10003c6c(alStack_48,(undefined1 *)*param_3);
  recovered_10008940(puVar2,alStack_48);
  recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011e5c);
  (*pcVar1)();
}

#undef LAB_1001c050
#undef alStack_48

#undef PTR_recovered_10011d7c_1001c498
#define PTR_recovered_10011d7c_1001c498 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x61b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d8c
 */

void recovered_10011d8c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011d7c_1001c498;
  return;
}

#undef PTR_recovered_10011d7c_1001c498

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_48 (*(long (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011db4
 */

void recovered_10011db4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[120] = {0};

  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;

  recovered_100114c0(((uintptr_t)pf_module_state+0x1724U),(long)param_3,0,1);
  lVar3 = param_3[1];
  puVar2 = (undefined8 *)recovered_10002efc(0x20);
  if (lVar3 == 0) {
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x1724U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
  recovered_10003c6c(alStack_48,(undefined1 *)*param_3);
  recovered_10008940(puVar2,alStack_48);
  recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011e5c);
  (*pcVar1)();
}

#undef LAB_1001c050
#undef alStack_48

#undef PTR_recovered_10011ec8_1001c4e0
#define PTR_recovered_10011ec8_1001c4e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x61f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011e88
 */

undefined8 * recovered_10011e88(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10011ec8_1001c4e0;
  puVar1[1] = param_2;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10011ec8_1001c4e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ec8
 */

void recovered_10011ec8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ecc
 */

void recovered_10011ecc(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#undef PTR_DAT_1001c008
#define PTR_DAT_1001c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d20U)))
#undef PTR_DAT_1001c038
#define PTR_DAT_1001c038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d50U)))
#define uStack_b8 (*(undefined8 *)(frame + 24))
#define uStack_b0 (*(undefined8 *)(frame + 32))
#define lStack_c0 (*(long *)(frame + 16))
#define auStack_80 (*(undefined1 (*)[8])(frame + 80))
#define alStack_78 (*(long (*)[3])(frame + 88))
#define auStack_a8 (*(undefined1 (*)[8])(frame + 40))
#define alStack_a0 (*(long (*)[4])(frame + 48))
#define uStack_50 (*(undefined8 *)(frame + 128))
#define uStack_48 (*(undefined8 *)(frame + 136))
#define uStack_60 (*(undefined8 *)(frame + 112))
#define lStack_58 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ed0
 */

void recovered_10011ed0(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[240] = {0};

  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;

  pcVar11 = *(char **)(param_2 + 8);
  recovered_100114c0(((uintptr_t)pf_module_state+0x17f1U),(long)param_4,1,0xffffffffffffffff);
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  recovered_10007b80(&lStack_58,2);
  puVar4 = PTR_DAT_1001c038;
  puVar3 = PTR_DAT_1001c008;
  pcVar12 = (char *)*param_4;
  if (*pcVar12 != '\a') {
    puVar6 = (undefined8 *)recovered_10002efc(0x20);
    recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2019U));
    recovered_10002fb4((long)puVar6,&LAB_1001c050,recovered_10004120);
    goto LAB_1001220c;
  }
  if (*(long *)(pcVar12 + 0x20) != 7) goto LAB_1001220c;
  pcVar9 = *(char **)(pcVar12 + 0x10);
  if (pcVar9 == (char *)0x0) {
    puVar6 = (undefined8 *)recovered_10002efc(0x20);
    recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2032U));
    recovered_10002fb4((long)puVar6,&LAB_1001c050,recovered_10004120);
    goto LAB_1001220c;
  }
  uVar7 = param_4[1];
  uVar10 = 0;
  if (1 < uVar7) {
    uVar10 = uVar7 - 1;
  }
  pcVar1 = (char *)0x0;
  if (1 < uVar7) {
    pcVar1 = pcVar12 + 0x28;
  }
  auStack_80[0] = 0;
  uStack_60 = 0;
  if (*pcVar9 != '\x01') {
    lVar8 = *(long *)(pcVar9 + 0x10);
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)recovered_10002efc(0x20);
      recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2332U));
    }
    else {
      uVar2 = *(uint *)(pcVar9 + 4);
      if ((-1 < (int)uVar2) && ((ulong)uVar2 < *(ulong *)(lVar8 + 0x38))) {
        lVar8 = *(long *)(lVar8 + 0x30) + (ulong)uVar2 * 0x120;
        if (*(char *)(lVar8 + 0xe0) == '\0') {
          recovered_1000c644(auStack_a8,pcVar11,(long *)(pcVar9 + 8),uVar2,(long)pcVar1,uVar10);
          recovered_1000d9e4(auStack_80,auStack_a8);
        }
        else {
          recovered_1000f09c(auStack_a8,pcVar11,(long)(pcVar9 + 8),lVar8,(long)pcVar1,uVar10);
          recovered_1000d9e4(auStack_80,auStack_a8);
        }
        goto LAB_100120f8;
      }
      puVar6 = (undefined8 *)recovered_10002efc(0x20);
      recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2354U));
    }
    recovered_10002fb4((long)puVar6,&LAB_1001c050,recovered_10004120);
LAB_1001220c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10012210);
    (*pcVar5)();
  }
  if (1 < uVar7) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    lStack_c0 = 0;
    recovered_10007b80(&lStack_c0,uVar7 - 1);
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      recovered_1000a86c(&lStack_c0,pcVar1);
      pcVar1 = pcVar1 + 0x28;
    }
    (**(code **)(**(long **)(*(long *)(pcVar12 + 0x10) + 0x18) + 0x10))
              (auStack_a8,*(long **)(*(long *)(pcVar12 + 0x10) + 0x18),param_3,&lStack_c0);
    recovered_1000d9e4(auStack_80,auStack_a8);
    recovered_1000686c(alStack_a0);
    recovered_10010238(&lStack_c0);
    goto LAB_10012100;
  }
  if ((*PTR_DAT_1001c008 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_1001c038 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)puVar4 = 0;
    recovered_10002ed0();
    *puVar3 = 1;
    pcVar9 = *(char **)(pcVar12 + 0x10);
  }
  (**(code **)(**(long **)(pcVar9 + 0x18) + 0x10))
            (auStack_a8,*(long **)(pcVar9 + 0x18),param_3,PTR_DAT_1001c038);
  recovered_1000d9e4(auStack_80,auStack_a8);
LAB_100120f8:
  recovered_1000686c(alStack_a0);
LAB_10012100:
  auStack_a8[0] = 1;
  recovered_1000d6c0(&lStack_58,auStack_a8);
  recovered_1000a86c(&lStack_58,auStack_80);
  recovered_1000686c(alStack_78);
  recovered_10003a14(param_1,&lStack_58);
  recovered_10010238(&lStack_58);
  return;
}

#undef LAB_1001c050
#undef PTR_DAT_1001c008
#undef PTR_DAT_1001c038
#undef uStack_b8
#undef uStack_b0
#undef lStack_c0
#undef auStack_80
#undef alStack_78
#undef auStack_a8
#undef alStack_a0
#undef uStack_50
#undef uStack_48
#undef uStack_60
#undef lStack_58

#undef PTR_recovered_10011ec8_1001c4e0
#define PTR_recovered_10011ec8_1001c4e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x61f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ed8
 */

void recovered_10011ed8(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 uVar2;

  puVar1 = recovered_10002e3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_recovered_10011ec8_1001c4e0;
  puVar1[1] = uVar2;
  return;
}

#undef PTR_recovered_10011ec8_1001c4e0

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#undef PTR_DAT_1001c008
#define PTR_DAT_1001c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d20U)))
#undef PTR_DAT_1001c038
#define PTR_DAT_1001c038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5d50U)))
#define local_50 (*(undefined8 *)(frame + 128))
#define uStack_b0 (*(undefined8 *)(frame + 32))
#define alStack_78 (*(long (*)[3])(frame + 88))
#define alStack_a0 (*(long (*)[4])(frame + 48))
#define uStack_48 (*(undefined8 *)(frame + 136))
#define local_c0 (*(long *)(frame + 16))
#define local_b8 (*(undefined8 *)(frame + 24))
#define local_a8 (*(undefined1 (*)[8])(frame + 40))
#define local_80 (*(undefined1 (*)[8])(frame + 80))
#define local_60 (*(undefined8 *)(frame + 112))
#define local_58 (*(long *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011f10
 */

void recovered_10011f10(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[240] = {0};

  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;

  pcVar11 = (char *)*param_2;
  recovered_100114c0(((uintptr_t)pf_module_state+0x17f1U),(long)param_4,1,0xffffffffffffffff);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  recovered_10007b80(&local_58,2);
  puVar4 = PTR_DAT_1001c038;
  puVar3 = PTR_DAT_1001c008;
  pcVar12 = (char *)*param_4;
  if (*pcVar12 != '\a') {
    puVar6 = (undefined8 *)recovered_10002efc(0x20);
    recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2019U));
    recovered_10002fb4((long)puVar6,&LAB_1001c050,recovered_10004120);
    goto LAB_1001220c;
  }
  if (*(long *)(pcVar12 + 0x20) != 7) goto LAB_1001220c;
  pcVar9 = *(char **)(pcVar12 + 0x10);
  if (pcVar9 == (char *)0x0) {
    puVar6 = (undefined8 *)recovered_10002efc(0x20);
    recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2032U));
    recovered_10002fb4((long)puVar6,&LAB_1001c050,recovered_10004120);
    goto LAB_1001220c;
  }
  uVar7 = param_4[1];
  uVar10 = 0;
  if (1 < uVar7) {
    uVar10 = uVar7 - 1;
  }
  pcVar1 = (char *)0x0;
  if (1 < uVar7) {
    pcVar1 = pcVar12 + 0x28;
  }
  local_80[0] = 0;
  local_60 = 0;
  if (*pcVar9 != '\x01') {
    lVar8 = *(long *)(pcVar9 + 0x10);
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)recovered_10002efc(0x20);
      recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2332U));
    }
    else {
      uVar2 = *(uint *)(pcVar9 + 4);
      if ((-1 < (int)uVar2) && ((ulong)uVar2 < *(ulong *)(lVar8 + 0x38))) {
        lVar8 = *(long *)(lVar8 + 0x30) + (ulong)uVar2 * 0x120;
        if (*(char *)(lVar8 + 0xe0) == '\0') {
          recovered_1000c644(local_a8,pcVar11,(long *)(pcVar9 + 8),uVar2,(long)pcVar1,uVar10);
          recovered_1000d9e4(local_80,local_a8);
        }
        else {
          recovered_1000f09c(local_a8,pcVar11,(long)(pcVar9 + 8),lVar8,(long)pcVar1,uVar10);
          recovered_1000d9e4(local_80,local_a8);
        }
        goto LAB_100120f8;
      }
      puVar6 = (undefined8 *)recovered_10002efc(0x20);
      recovered_10006f18(puVar6,((uintptr_t)pf_module_state+0x2354U));
    }
    recovered_10002fb4((long)puVar6,&LAB_1001c050,recovered_10004120);
LAB_1001220c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10012210);
    (*pcVar5)();
  }
  if (1 < uVar7) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = 0;
    recovered_10007b80(&local_c0,uVar7 - 1);
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      recovered_1000a86c(&local_c0,pcVar1);
      pcVar1 = pcVar1 + 0x28;
    }
    (**(code **)(**(long **)(*(long *)(pcVar12 + 0x10) + 0x18) + 0x10))
              (local_a8,*(long **)(*(long *)(pcVar12 + 0x10) + 0x18),param_3,&local_c0);
    recovered_1000d9e4(local_80,local_a8);
    recovered_1000686c(alStack_a0);
    recovered_10010238(&local_c0);
    goto LAB_10012100;
  }
  if ((*PTR_DAT_1001c008 & 1) == 0) {
    *(undefined8 *)(PTR_DAT_1001c038 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)puVar4 = 0;
    recovered_10002ed0();
    *puVar3 = 1;
    pcVar9 = *(char **)(pcVar12 + 0x10);
  }
  (**(code **)(**(long **)(pcVar9 + 0x18) + 0x10))
            (local_a8,*(long **)(pcVar9 + 0x18),param_3,PTR_DAT_1001c038);
  recovered_1000d9e4(local_80,local_a8);
LAB_100120f8:
  recovered_1000686c(alStack_a0);
LAB_10012100:
  local_a8[0] = 1;
  recovered_1000d6c0(&local_58,local_a8);
  recovered_1000a86c(&local_58,local_80);
  recovered_1000686c(alStack_78);
  recovered_10003a14(param_1,&local_58);
  recovered_10010238(&local_58);
  return;
}

#undef LAB_1001c050
#undef PTR_DAT_1001c008
#undef PTR_DAT_1001c038
#undef local_50
#undef uStack_b0
#undef alStack_78
#undef alStack_a0
#undef uStack_48
#undef local_c0
#undef local_b8
#undef local_a8
#undef local_80
#undef local_60
#undef local_58

#undef PTR_recovered_100123a8_1001c528
#define PTR_recovered_100123a8_1001c528 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001236c
 */

undefined8 * recovered_1001236c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100123a8_1001c528;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100123a8_1001c528

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100123a8
 */

void recovered_100123a8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100123ac
 */

void recovered_100123ac(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define apvStack_d0 (*(void * (*)[9])(frame + 32))
#define alStack_88 (*(long (*)[2])(frame + 104))
#define alStack_e0 (*(long (*)[2])(frame + 16))
#define apvStack_60 (*(void * (*)[3])(frame + 144))
#define apvStack_48 (*(void * (*)[3])(frame + 168))
#define pvStack_78 (*(void * *)(frame + 120))
#define uStack_70 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100123b0
 */

void recovered_100123b0(undefined1 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  unsigned char frame[272] = {0};

  undefined8 *puVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x219eU),param_4,1,2);
  puVar1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x219eU),(long *)param_4,0);
  recovered_10006dc0(apvStack_48,puVar1);
  if (*(long *)(param_4 + 8) == 2) {
    puVar1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x219eU),(long *)param_4,1);
    recovered_10006dc0(apvStack_60,puVar1);
  }
  else {
    recovered_100064b8((long *)apvStack_60,((uintptr_t)pf_module_state+0x2379U));
  }
  recovered_100047a4((long *)&pvStack_78,param_3,apvStack_48,apvStack_60);
  recovered_1000c1e8((long)apvStack_d0,(long *)&pvStack_78);
  recovered_1000c168(alStack_88,(long)apvStack_d0);
  recovered_100085e0((long)apvStack_d0);
  recovered_100064b8((long *)apvStack_d0,((uintptr_t)pf_module_state+0x2379U));
  recovered_1000ea48((long)alStack_e0,apvStack_d0,0,alStack_88);
  recovered_1000ea08(param_1,alStack_e0);
  recovered_10006928(alStack_e0);
  recovered_10002e70(apvStack_d0[0]);
  recovered_100073a4(alStack_88);
  uStack_70 = 0;
  recovered_10002e70(pvStack_78);
  recovered_10002e70(apvStack_60[0]);
  recovered_10002e70(apvStack_48[0]);
  return;
}

#undef apvStack_d0
#undef alStack_88
#undef alStack_e0
#undef apvStack_60
#undef apvStack_48
#undef pvStack_78
#undef uStack_70

#undef PTR_recovered_100123a8_1001c528
#define PTR_recovered_100123a8_1001c528 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100123b8
 */

void recovered_100123b8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100123a8_1001c528;
  return;
}

#undef PTR_recovered_100123a8_1001c528

#define local_d0 (*(void * (*)[9])(frame + 32))
#define alStack_88 (*(long (*)[2])(frame + 104))
#define local_78 (*(void * *)(frame + 120))
#define local_70 (*(undefined8 *)(frame + 128))
#define alStack_e0 (*(long (*)[2])(frame + 16))
#define local_60 (*(void * (*)[3])(frame + 144))
#define local_48 (*(void * (*)[3])(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100123e0
 */

void recovered_100123e0(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  unsigned char frame[272] = {0};

  undefined8 *puVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x219eU),param_4,1,2);
  puVar1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x219eU),(long *)param_4,0);
  recovered_10006dc0(local_48,puVar1);
  if (*(long *)(param_4 + 8) == 2) {
    puVar1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x219eU),(long *)param_4,1);
    recovered_10006dc0(local_60,puVar1);
  }
  else {
    recovered_100064b8((long *)local_60,((uintptr_t)pf_module_state+0x2379U));
  }
  recovered_100047a4((long *)&local_78,param_3,local_48,local_60);
  recovered_1000c1e8((long)local_d0,(long *)&local_78);
  recovered_1000c168(alStack_88,(long)local_d0);
  recovered_100085e0((long)local_d0);
  recovered_100064b8((long *)local_d0,((uintptr_t)pf_module_state+0x2379U));
  recovered_1000ea48((long)alStack_e0,local_d0,0,alStack_88);
  recovered_1000ea08(param_1,alStack_e0);
  recovered_10006928(alStack_e0);
  recovered_10002e70(local_d0[0]);
  recovered_100073a4(alStack_88);
  local_70 = 0;
  recovered_10002e70(local_78);
  recovered_10002e70(local_60[0]);
  recovered_10002e70(local_48[0]);
  return;
}

#undef local_d0
#undef alStack_88
#undef local_78
#undef local_70
#undef alStack_e0
#undef local_60
#undef local_48

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_60 (*(long (*)[3])(frame + 16))
#define auStack_48 (*(undefined8 (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001259c
 */

ulonglong recovered_1001259c(long param_1,long *in_x1,ulong in_x2)

{
  unsigned char frame[144] = {0};

  code *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;

  pcVar3 = (char *)recovered_10011bb4(param_1,in_x1,in_x2);
  if (*pcVar3 != '\x04') {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_100064b8(alStack_60,param_1);
    recovered_10003ff0(auStack_48,alStack_60,((uintptr_t)pf_module_state+0x2380U));
    recovered_10008940(puVar2,auStack_48);
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10012610);
    (*pcVar1)();
  }
  if (*pcVar3 == '\x04') {
    if (*(long *)(pcVar3 + 0x20) == 4) {
      return (ulonglong)(pcVar3 + 8);
    }
  }
  else {
    puVar2 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar2,((uintptr_t)pf_module_state+0x17a5U));
    recovered_10002fb4((long)puVar2,&LAB_1001c050,recovered_10004120);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004284);
  (*pcVar1)();
}

#undef LAB_1001c050
#undef alStack_60
#undef auStack_48

#undef PTR_recovered_10012674_1001c570
#define PTR_recovered_10012674_1001c570 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012638
 */

undefined8 * recovered_10012638(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012674_1001c570;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10012674_1001c570

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012674
 */

void recovered_10012674(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012678
 */

void recovered_10012678(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define uStack_70 (*(undefined8 *)(frame + 16))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 48))
#define uStack_48 (*(undefined8 *)(frame + 56))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define uStack_58 (*(undefined8 *)(frame + 40))
#define uStack_30 (*(undefined8 *)(frame + 80))
#define uStack_28 (*(undefined8 *)(frame + 88))
#define uStack_40 (*(undefined8 *)(frame + 64))
#define uStack_38 (*(undefined8 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001267c
 */

void recovered_1001267c(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[160] = {0};


  recovered_100114c0(((uintptr_t)pf_module_state+0x21a3U),param_4,0,0);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  recovered_10003b20(param_1,&uStack_70);
  recovered_10006990((long)&uStack_70);
  return;
}

#undef uStack_70
#undef uStack_68
#undef uStack_50
#undef uStack_48
#undef uStack_60
#undef uStack_58
#undef uStack_30
#undef uStack_28
#undef uStack_40
#undef uStack_38

#undef PTR_recovered_10012674_1001c570
#define PTR_recovered_10012674_1001c570 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012684
 */

void recovered_10012684(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012674_1001c570;
  return;
}

#undef PTR_recovered_10012674_1001c570

#define uStack_70 (*(undefined8 *)(frame + 16))
#define uStack_68 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 48))
#define uStack_48 (*(undefined8 *)(frame + 56))
#define uStack_60 (*(undefined8 *)(frame + 32))
#define uStack_58 (*(undefined8 *)(frame + 40))
#define uStack_30 (*(undefined8 *)(frame + 80))
#define uStack_28 (*(undefined8 *)(frame + 88))
#define uStack_40 (*(undefined8 *)(frame + 64))
#define uStack_38 (*(undefined8 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100126ac
 */

void recovered_100126ac(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[160] = {0};


  recovered_100114c0(((uintptr_t)pf_module_state+0x21a3U),param_4,0,0);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  recovered_10003b20(param_1,&uStack_70);
  recovered_10006990((long)&uStack_70);
  return;
}

#undef uStack_70
#undef uStack_68
#undef uStack_50
#undef uStack_48
#undef uStack_60
#undef uStack_58
#undef uStack_30
#undef uStack_28
#undef uStack_40
#undef uStack_38

#undef PTR_recovered_10012720_1001c5b8
#define PTR_recovered_10012720_1001c5b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x62d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100126e4
 */

undefined8 * recovered_100126e4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012720_1001c5b8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10012720_1001c5b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012720
 */

void recovered_10012720(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012724
 */

void recovered_10012724(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define lStack_40 (*(long *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define uStack_50 (*(ulong *)(frame + 16))
#define uStack_48 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012728
 */

void recovered_10012728(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[128] = {0};

  code *pcVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21abU),(long)param_4,1,1);
  pcVar2 = (char *)*param_4;
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (*pcVar2 == '\x05') {
    lVar4 = recovered_100042ec(pcVar2);
    recovered_10007b80((long *)&uStack_48,*(ulong *)(lVar4 + 8));
    for (uVar7 = 0; uVar7 < *(ulong *)(lVar4 + 8); uVar7 = uVar7 + 1) {
      uStack_50 = uVar7;
      recovered_1000d5e0((long *)&uStack_48,&uStack_50);
    }
    recovered_10003a14(param_1,&uStack_48);
  }
  else {
    if (*pcVar2 != '\x06') {
      puVar5 = (undefined8 *)recovered_10002efc(0x20);
      recovered_10006f18(puVar5,((uintptr_t)pf_module_state+0x239bU));
      recovered_10002fb4((long)puVar5,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001288c);
      (*pcVar1)();
    }
    plVar3 = (long *)recovered_100043ac(pcVar2);
    lVar4 = *plVar3;
    for (lVar6 = plVar3[1] << 6; lVar6 != 0; lVar6 = lVar6 + -0x40) {
      recovered_100128c0((long *)&uStack_48,lVar4);
      lVar4 = lVar4 + 0x40;
    }
    recovered_10012934(uStack_48,uStack_48 + lStack_40 * 0x28);
    recovered_10003a14(param_1,&uStack_48);
  }
  recovered_10010238((long *)&uStack_48);
  return;
}

#undef LAB_1001c050
#undef lStack_40
#undef uStack_38
#undef uStack_50
#undef uStack_48

#undef PTR_recovered_10012720_1001c5b8
#define PTR_recovered_10012720_1001c5b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x62d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012730
 */

void recovered_10012730(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012720_1001c5b8;
  return;
}

#undef PTR_recovered_10012720_1001c5b8

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define local_50 (*(ulong *)(frame + 16))
#define local_48 (*(ulong *)(frame + 24))
#define local_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012758
 */

void recovered_10012758(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[128] = {0};

  code *pcVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21abU),(long)param_4,1,1);
  pcVar2 = (char *)*param_4;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (*pcVar2 == '\x05') {
    lVar4 = recovered_100042ec(pcVar2);
    recovered_10007b80((long *)&local_48,*(ulong *)(lVar4 + 8));
    for (uVar7 = 0; uVar7 < *(ulong *)(lVar4 + 8); uVar7 = uVar7 + 1) {
      local_50 = uVar7;
      recovered_1000d5e0((long *)&local_48,&local_50);
    }
    recovered_10003a14(param_1,&local_48);
  }
  else {
    if (*pcVar2 != '\x06') {
      puVar5 = (undefined8 *)recovered_10002efc(0x20);
      recovered_10006f18(puVar5,((uintptr_t)pf_module_state+0x239bU));
      recovered_10002fb4((long)puVar5,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001288c);
      (*pcVar1)();
    }
    plVar3 = (long *)recovered_100043ac(pcVar2);
    lVar4 = *plVar3;
    for (lVar6 = plVar3[1] << 6; lVar6 != 0; lVar6 = lVar6 + -0x40) {
      recovered_100128c0((long *)&local_48,lVar4);
      lVar4 = lVar4 + 0x40;
    }
    recovered_10012934(local_48,local_48 + local_40 * 0x28);
    recovered_10003a14(param_1,&local_48);
  }
  recovered_10010238((long *)&local_48);
  return;
}

#undef LAB_1001c050
#undef uStack_38
#undef local_50
#undef local_48
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100128c0
 */

long recovered_100128c0(long *param_1,undefined8 *param_2)

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
    recovered_10007b80(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10003930((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


#define uStack_51 (*(undefined1 *)(frame + 63))
#define acStack_80 (*(char (*)[8])(frame + 16))
#define alStack_78 (*(long (*)[4])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012934
 */

void recovered_10012934(ulong param_1,ulong param_2)

{
  unsigned char frame[176] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;

  if (param_1 != param_2) {
    pcVar4 = (char *)param_1;
    while (pcVar1 = pcVar4 + 0x28, pcVar1 < param_2) {
      recovered_10007c2c(acStack_80,pcVar1);
      while ((pcVar2 = pcVar4 + 0x28, param_1 < pcVar2 &&
             (uVar3 = recovered_10012a08(&uStack_51,acStack_80,pcVar4), uVar3 != 0))) {
        recovered_1000d9e4(pcVar2,pcVar4);
        pcVar4 = pcVar4 + -0x28;
      }
      recovered_1000d9e4(pcVar2,acStack_80);
      recovered_1000686c(alStack_78);
      pcVar4 = pcVar1;
    }
  }
  return;
}

#undef uStack_51
#undef acStack_80
#undef alStack_78

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a08
 */

uint recovered_10012a08(undefined8 param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = recovered_1000422c(param_2);
  pcVar4 = recovered_1000422c(param_3);
  puVar1 = &DAT_10017864;
  if (*(undefined1 **)pcVar4 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)pcVar4;
  }
  uVar2 = recovered_1000eea0((undefined8 *)pcVar3,(long)puVar1,*(ulong *)(pcVar4 + 8));
  return uVar2 >> 0x1f;
}

#undef DAT_10017864

#undef PTR_recovered_10012a7c_1001c600
#define PTR_recovered_10012a7c_1001c600 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6318U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a40
 */

undefined8 * recovered_10012a40(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012a7c_1001c600;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10012a7c_1001c600

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a7c
 */

void recovered_10012a7c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a80
 */

void recovered_10012a80(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a84
 */

void recovered_10012a84(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x17f7U),(long)param_4,3,3);
  pcVar5 = (char *)*param_4;
  pbVar6 = (byte *)(pcVar5 + 0x28);
  if (*pcVar5 == '\x06') {
    plVar2 = (long *)recovered_1000434c(pcVar5);
    puVar3 = (undefined1 *)recovered_1000f030(plVar2,(char *)pbVar6);
LAB_10012b64:
    recovered_1000715c(puVar3,pcVar5 + 0x50);
    *param_1 = pcVar5[0x50];
    recovered_1000a90c((long)(param_1 + 8),(long)(pcVar5 + 0x58));
    return;
  }
  if (*pcVar5 == '\x05') {
    if (*pbVar6 - 1 < 3) {
      uVar1 = recovered_10004088((char *)pbVar6);
      if (-1 < (long)uVar1) {
        plVar2 = (long *)recovered_1000428c(pcVar5);
        if ((ulong)plVar2[1] <= uVar1) {
          recovered_10007e00(plVar2,uVar1 + 1);
        }
        puVar3 = (undefined1 *)(*plVar2 + uVar1 * 0x28);
        goto LAB_10012b64;
      }
      puVar4 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x1f82U));
    }
    else {
      puVar4 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x1f5cU));
    }
  }
  else {
    puVar4 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x1fadU));
  }
  recovered_10002fb4((long)puVar4,&LAB_1001c050,recovered_10004120);
  recovered_10002f44((long)puVar4);
                    /* WARNING: Subroutine does not return */
  recovered_10003190();
}

#undef LAB_1001c050

#undef PTR_recovered_10012a7c_1001c600
#define PTR_recovered_10012a7c_1001c600 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6318U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a8c
 */

void recovered_10012a8c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012a7c_1001c600;
  return;
}

#undef PTR_recovered_10012a7c_1001c600

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ab4
 */

void recovered_10012ab4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x17f7U),(long)param_4,3,3);
  pcVar5 = (char *)*param_4;
  pbVar6 = (byte *)(pcVar5 + 0x28);
  if (*pcVar5 == '\x06') {
    plVar2 = (long *)recovered_1000434c(pcVar5);
    puVar3 = (undefined1 *)recovered_1000f030(plVar2,(char *)pbVar6);
LAB_10012b64:
    recovered_1000715c(puVar3,pcVar5 + 0x50);
    *param_1 = pcVar5[0x50];
    recovered_1000a90c((long)(param_1 + 8),(long)(pcVar5 + 0x58));
    return;
  }
  if (*pcVar5 == '\x05') {
    if (*pbVar6 - 1 < 3) {
      uVar1 = recovered_10004088((char *)pbVar6);
      if (-1 < (long)uVar1) {
        plVar2 = (long *)recovered_1000428c(pcVar5);
        if ((ulong)plVar2[1] <= uVar1) {
          recovered_10007e00(plVar2,uVar1 + 1);
        }
        puVar3 = (undefined1 *)(*plVar2 + uVar1 * 0x28);
        goto LAB_10012b64;
      }
      puVar4 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x1f82U));
    }
    else {
      puVar4 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x1f5cU));
    }
  }
  else {
    puVar4 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar4,((uintptr_t)pf_module_state+0x1fadU));
  }
  recovered_10002fb4((long)puVar4,&LAB_1001c050,recovered_10004120);
  recovered_10002f44((long)puVar4);
                    /* WARNING: Subroutine does not return */
  recovered_10003190();
}

#undef LAB_1001c050

#undef PTR_recovered_10012c44_1001c648
#define PTR_recovered_10012c44_1001c648 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6360U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c08
 */

undefined8 * recovered_10012c08(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012c44_1001c648;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10012c44_1001c648

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c44
 */

void recovered_10012c44(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c48
 */

void recovered_10012c48(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c4c
 */

void recovered_10012c4c(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21b0U),(long)param_4,2,3);
  if (*(char *)*param_4 != '\x05') {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x23b8U));
LAB_10012d70:
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  plVar1 = (long *)recovered_1000428c((char *)*param_4);
  if (param_4[1] == 2) {
    recovered_1000a86c(plVar1,(undefined1 *)(*param_4 + 0x28));
  }
  else {
    uVar2 = recovered_10011a10(((uintptr_t)pf_module_state+0x21b0U),param_4,1);
    if (((long)uVar2 < 0) || (plVar1[1] < (long)uVar2)) {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x23d6U));
      goto LAB_10012d70;
    }
    recovered_10012da0(plVar1,*plVar1 + uVar2 * 0x28,(undefined1 *)(*param_4 + 0x50));
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef LAB_1001c050

#undef PTR_recovered_10012c44_1001c648
#define PTR_recovered_10012c44_1001c648 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6360U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c54
 */

void recovered_10012c54(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012c44_1001c648;
  return;
}

#undef PTR_recovered_10012c44_1001c648

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c7c
 */

void recovered_10012c7c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21b0U),(long)param_4,2,3);
  if (*(char *)*param_4 != '\x05') {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x23b8U));
LAB_10012d70:
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  plVar1 = (long *)recovered_1000428c((char *)*param_4);
  if (param_4[1] == 2) {
    recovered_1000a86c(plVar1,(undefined1 *)(*param_4 + 0x28));
  }
  else {
    uVar2 = recovered_10011a10(((uintptr_t)pf_module_state+0x21b0U),param_4,1);
    if (((long)uVar2 < 0) || (plVar1[1] < (long)uVar2)) {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x23d6U));
      goto LAB_10012d70;
    }
    recovered_10012da0(plVar1,*plVar1 + uVar2 * 0x28,(undefined1 *)(*param_4 + 0x50));
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef LAB_1001c050

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012da0
 */

long recovered_10012da0(long *param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if (*param_1 == 0) {
    uVar3 = param_1[1];
    uVar4 = uVar3;
  }
  else {
    uVar3 = param_1[1];
    uVar4 = (param_2 - *param_1) / 0x28;
  }
  if (uVar3 == param_1[2]) {
    uVar2 = 4;
    if (uVar3 != 0) {
      uVar2 = uVar3 << 1;
    }
    recovered_10007b80(param_1,uVar2);
  }
  uVar3 = param_1[1];
  lVar5 = uVar3 * 0x28;
  for (; uVar4 < uVar3; uVar3 = uVar3 - 1) {
    puVar1 = (undefined1 *)(*param_1 + lVar5);
    recovered_10007c2c(puVar1,puVar1 + -0x28);
    recovered_1000686c((long *)(*param_1 + lVar5 + -0x20));
    lVar5 = lVar5 + -0x28;
  }
  recovered_1000a8e0((undefined1 *)(*param_1 + uVar4 * 0x28),param_3);
  param_1[1] = param_1[1] + 1;
  lVar5 = 0;
  if (*param_1 != 0) {
    lVar5 = *param_1 + uVar4 * 0x28;
  }
  return lVar5;
}


#undef PTR_recovered_10012ebc_1001c690
#define PTR_recovered_10012ebc_1001c690 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x63a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e80
 */

undefined8 * recovered_10012e80(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012ebc_1001c690;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10012ebc_1001c690

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ebc
 */

void recovered_10012ebc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ec0
 */

void recovered_10012ec0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ec4
 */

void recovered_10012ec4(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  long lVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21bdU),(long)param_4,1,2);
  if (*(char *)*param_4 != '\x05') {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x23f9U));
LAB_10012ff0:
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  plVar1 = (long *)recovered_1000428c((char *)*param_4);
  lVar4 = plVar1[1];
  if (lVar4 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_4[1] == 2) {
      uVar2 = recovered_10011a10(((uintptr_t)pf_module_state+0x21bdU),param_4,1);
      lVar4 = plVar1[1];
    }
    else {
      uVar2 = lVar4 - 1;
    }
    if (((long)uVar2 < 0) || (lVar4 <= (long)uVar2)) {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x2417U));
      goto LAB_10012ff0;
    }
    recovered_1000a8e0(param_1,(undefined1 *)(*plVar1 + uVar2 * 0x28));
    recovered_10013030(plVar1,*plVar1 + uVar2 * 0x28);
  }
  return;
}

#undef LAB_1001c050

#undef PTR_recovered_10012ebc_1001c690
#define PTR_recovered_10012ebc_1001c690 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x63a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ecc
 */

void recovered_10012ecc(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10012ebc_1001c690;
  return;
}

#undef PTR_recovered_10012ebc_1001c690

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ef4
 */

void recovered_10012ef4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  long lVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21bdU),(long)param_4,1,2);
  if (*(char *)*param_4 != '\x05') {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x23f9U));
LAB_10012ff0:
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  plVar1 = (long *)recovered_1000428c((char *)*param_4);
  lVar4 = plVar1[1];
  if (lVar4 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_4[1] == 2) {
      uVar2 = recovered_10011a10(((uintptr_t)pf_module_state+0x21bdU),param_4,1);
      lVar4 = plVar1[1];
    }
    else {
      uVar2 = lVar4 - 1;
    }
    if (((long)uVar2 < 0) || (lVar4 <= (long)uVar2)) {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x2417U));
      goto LAB_10012ff0;
    }
    recovered_1000a8e0(param_1,(undefined1 *)(*plVar1 + uVar2 * 0x28));
    recovered_10013030(plVar1,*plVar1 + uVar2 * 0x28);
  }
  return;
}

#undef LAB_1001c050

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013030
 */

void recovered_10013030(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;

  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = (param_2 - lVar1) / 0x28;
    uVar4 = ((param_2 + 0x28) - lVar1) / 0x28;
    lVar1 = uVar4 - uVar2;
    if (uVar2 <= uVar4 && lVar1 != 0) {
      lVar3 = uVar2 * 0x28;
      lVar5 = uVar4 * 0x28;
      for (; uVar2 = param_1[1], uVar4 < uVar2; uVar4 = uVar4 + 1) {
        recovered_1000d9e4((undefined1 *)(*param_1 + lVar3),(undefined1 *)(*param_1 + lVar5));
        lVar3 = lVar3 + 0x28;
        lVar5 = lVar5 + 0x28;
      }
      lVar3 = uVar2 * 0x28 + -0x20;
      uVar4 = uVar2;
      while (uVar2 = uVar2 - lVar1, uVar2 < uVar4) {
        recovered_1000686c((long *)(*param_1 + lVar3));
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + -0x28;
        uVar2 = param_1[1];
      }
      param_1[1] = uVar2;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013038
 */

long recovered_10013038(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;

  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = param_2 - lVar2;
    uVar3 = lVar4 / 0x28;
    uVar5 = (param_3 - lVar2) / 0x28;
    lVar1 = uVar5 - uVar3;
    if (uVar3 <= uVar5 && lVar1 != 0) {
      lVar2 = uVar3 * 0x28;
      lVar6 = uVar5 * 0x28;
      for (; uVar3 = param_1[1], uVar5 < uVar3; uVar5 = uVar5 + 1) {
        recovered_1000d9e4((undefined1 *)(*param_1 + lVar2),(undefined1 *)(*param_1 + lVar6));
        lVar2 = lVar2 + 0x28;
        lVar6 = lVar6 + 0x28;
      }
      lVar2 = uVar3 * 0x28 + -0x20;
      uVar5 = uVar3;
      while (uVar3 = uVar3 - lVar1, uVar3 < uVar5) {
        recovered_1000686c((long *)(*param_1 + lVar2));
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + -0x28;
        uVar3 = param_1[1];
      }
      param_1[1] = uVar3;
      lVar2 = *param_1;
      lVar4 = lVar2 + lVar4;
      goto LAB_10013104;
    }
  }
  lVar4 = lVar2 + uVar3 * 0x28;
LAB_10013104:
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar4;
  }
  return lVar1;
}


#undef PTR_recovered_1001315c_1001c6d8
#define PTR_recovered_1001315c_1001c6d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x63f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013120
 */

undefined8 * recovered_10013120(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_1001315c_1001c6d8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_1001315c_1001c6d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001315c
 */

void recovered_1001315c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013160
 */

void recovered_10013160(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013164
 */

void recovered_10013164(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21caU),(long)param_4,1,1);
  if (*(char *)*param_4 != '\x05') {
    puVar1 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar1,((uintptr_t)pf_module_state+0x243aU));
    recovered_10002fb4((long)puVar1,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar1);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  puVar1 = (undefined8 *)recovered_1000428c((char *)*param_4);
  recovered_10013240((byte *)*puVar1,(byte *)*puVar1 + puVar1[1] * 0x28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef LAB_1001c050

#undef PTR_recovered_1001315c_1001c6d8
#define PTR_recovered_1001315c_1001c6d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x63f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001316c
 */

void recovered_1001316c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_1001315c_1001c6d8;
  return;
}

#undef PTR_recovered_1001315c_1001c6d8

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013194
 */

void recovered_10013194(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21caU),(long)param_4,1,1);
  if (*(char *)*param_4 != '\x05') {
    puVar1 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar1,((uintptr_t)pf_module_state+0x243aU));
    recovered_10002fb4((long)puVar1,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar1);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  puVar1 = (undefined8 *)recovered_1000428c((char *)*param_4);
  recovered_10013240((byte *)*puVar1,(byte *)*puVar1 + puVar1[1] * 0x28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

#undef LAB_1001c050

#define uStack_51 (*(undefined1 *)(frame + 63))
#define abStack_80 (*(byte (*)[8])(frame + 16))
#define alStack_78 (*(long (*)[4])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013240
 */

void recovered_10013240(byte *param_1,byte *param_2)

{
  unsigned char frame[176] = {0};

  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;

  if (param_1 != param_2) {
    pbVar4 = param_1;
    while (pbVar1 = pbVar4 + 0x28, pbVar1 < param_2) {
      recovered_10007c2c(abStack_80,pbVar1);
      while ((pbVar2 = pbVar4 + 0x28, param_1 < pbVar2 &&
             (uVar3 = recovered_10013314(&uStack_51,abStack_80,pbVar4), (int)uVar3 != 0))) {
        recovered_1000d9e4(pbVar2,pbVar4);
        pbVar4 = pbVar4 + -0x28;
      }
      recovered_1000d9e4(pbVar2,abStack_80);
      recovered_1000686c(alStack_78);
      pbVar4 = pbVar1;
    }
  }
  return;
}

#undef uStack_51
#undef abStack_80
#undef alStack_78

#define local_60 (*(void * (*)[3])(frame + 16))
#define local_48 (*(void * (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013314
 */

ulong recovered_10013314(undefined8 param_1,byte *param_2,byte *param_3)

{
  unsigned char frame[144] = {0};

  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;

  if ((*param_2 - 1 < 3) && (*param_3 - 1 < 3)) {
    dVar3 = recovered_10004124(param_2);
    dVar4 = recovered_10004124(param_3);
    uVar2 = (ulong)(dVar3 < dVar4);
  }
  else {
    recovered_10003c6c((long *)local_48,param_2);
    recovered_10003c6c((long *)local_60,param_3);
    uVar1 = recovered_1000ee38(local_48,local_60);
    uVar2 = (ulong)uVar1;
    recovered_10002e70(local_60[0]);
    recovered_10002e70(local_48[0]);
  }
  return uVar2;
}

#undef local_60
#undef local_48

#undef PTR_recovered_10013408_1001c720
#define PTR_recovered_10013408_1001c720 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100133cc
 */

undefined8 * recovered_100133cc(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013408_1001c720;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013408_1001c720

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013408
 */

void recovered_10013408(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001340c
 */

void recovered_1001340c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define apvStack_78 (*(void * (*)[3])(frame + 16))
#define pvStack_60 (*(void * *)(frame + 40))
#define pvStack_48 (*(void * *)(frame + 64))
#define uStack_40 (*(undefined8 *)(frame + 72))
#define uStack_58 (*(undefined8 *)(frame + 48))
#define uStack_50 (*(undefined8 *)(frame + 56))
#define uStack_38 (*(undefined8 *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013410
 */

void recovered_10013410(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  unsigned char frame[168] = {0};

  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21d5U),(long)param_4,1,2);
  pcVar3 = (char *)*param_4;
  if (*pcVar3 != '\x05') {
    puVar1 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar1,((uintptr_t)pf_module_state+0x2456U));
    recovered_10002fb4((long)puVar1,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar1);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  if (param_4[1] == 2) {
    puVar1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x21d5U),param_4,1);
    recovered_10006dc0(&pvStack_48,puVar1);
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    pvStack_48 = (void *)0x0;
  }
  plVar2 = (long *)recovered_100042ec(pcVar3);
  lVar4 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  pvStack_60 = (void *)0x0;
  for (uVar5 = 0; uVar5 < (ulong)plVar2[1]; uVar5 = uVar5 + 1) {
    if (uVar5 != 0) {
      recovered_10003fd8((long *)&pvStack_60,&pvStack_48);
    }
    recovered_10003c6c((long *)apvStack_78,(undefined1 *)(*plVar2 + lVar4));
    recovered_10003fd8((long *)&pvStack_60,apvStack_78);
    recovered_10002e70(apvStack_78[0]);
    lVar4 = lVar4 + 0x28;
  }
  recovered_1000395c(param_1,&pvStack_60);
  recovered_10002e70(pvStack_60);
  recovered_10002e70(pvStack_48);
  return;
}

#undef LAB_1001c050
#undef apvStack_78
#undef pvStack_60
#undef pvStack_48
#undef uStack_40
#undef uStack_58
#undef uStack_50
#undef uStack_38

#undef PTR_recovered_10013408_1001c720
#define PTR_recovered_10013408_1001c720 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013418
 */

void recovered_10013418(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013408_1001c720;
  return;
}

#undef PTR_recovered_10013408_1001c720

#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define local_78 (*(void * (*)[3])(frame + 16))
#define local_60 (*(void * *)(frame + 40))
#define local_58 (*(undefined8 *)(frame + 48))
#define local_48 (*(void * *)(frame + 64))
#define local_40 (*(undefined8 *)(frame + 72))
#define uStack_50 (*(undefined8 *)(frame + 56))
#define uStack_38 (*(undefined8 *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013440
 */

void recovered_10013440(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4)

{
  unsigned char frame[168] = {0};

  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21d5U),(long)param_4,1,2);
  pcVar3 = (char *)*param_4;
  if (*pcVar3 != '\x05') {
    puVar1 = (undefined8 *)recovered_10002efc(0x20);
    recovered_1000411c(puVar1,((uintptr_t)pf_module_state+0x2456U));
    recovered_10002fb4((long)puVar1,&LAB_1001c050,recovered_10004120);
    recovered_10002f44((long)puVar1);
                    /* WARNING: Subroutine does not return */
    recovered_10003190();
  }
  if (param_4[1] == 2) {
    puVar1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x21d5U),param_4,1);
    recovered_10006dc0(&local_48,puVar1);
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = (void *)0x0;
  }
  plVar2 = (long *)recovered_100042ec(pcVar3);
  lVar4 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = (void *)0x0;
  for (uVar5 = 0; uVar5 < (ulong)plVar2[1]; uVar5 = uVar5 + 1) {
    if (uVar5 != 0) {
      recovered_10003fd8((long *)&local_60,&local_48);
    }
    recovered_10003c6c((long *)local_78,(undefined1 *)(*plVar2 + lVar4));
    recovered_10003fd8((long *)&local_60,local_78);
    recovered_10002e70(local_78[0]);
    lVar4 = lVar4 + 0x28;
  }
  recovered_1000395c(param_1,&local_60);
  recovered_10002e70(local_60);
  recovered_10002e70(local_48);
  return;
}

#undef LAB_1001c050
#undef local_78
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef uStack_50
#undef uStack_38

#undef PTR_recovered_10013608_1001c768
#define PTR_recovered_10013608_1001c768 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6480U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100135cc
 */

undefined8 * recovered_100135cc(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013608_1001c768;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013608_1001c768

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013608
 */

void recovered_10013608(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001360c
 */

void recovered_1001360c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013610
 */

void recovered_10013610(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21e2U),param_4,1,1);
  dVar7 = recovered_1001369c(((uintptr_t)pf_module_state+0x21e2U),(long *)param_4,0);
  dVar7 = recovered_10001148(dVar7);
  bVar4 = recovered_10011b98((ulong)dVar7);
  if (bVar4) {
    dVar6 = recovered_10003338(dVar7);
    dVar6 = recovered_10001370(dVar7 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (dVar7 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar4 = dVar7 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(dVar7);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar7;
  return;
}


#undef PTR_recovered_10013608_1001c768
#define PTR_recovered_10013608_1001c768 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6480U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013618
 */

void recovered_10013618(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013608_1001c768;
  return;
}

#undef PTR_recovered_10013608_1001c768

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013640
 */

void recovered_10013640(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21e2U),param_4,1,1);
  dVar7 = recovered_1001369c(((uintptr_t)pf_module_state+0x21e2U),(long *)param_4,0);
  dVar7 = recovered_10001148(dVar7);
  bVar4 = recovered_10011b98((ulong)dVar7);
  if (bVar4) {
    dVar6 = recovered_10003338(dVar7);
    dVar6 = recovered_10001370(dVar7 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (dVar7 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar4 = dVar7 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(dVar7);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar7;
  return;
}


#undef LAB_1001c050
#define LAB_1001c050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d68U)))
#define alStack_60 (*(long (*)[3])(frame + 16))
#define auStack_48 (*(undefined8 (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001369c
 */

double recovered_1001369c(long param_1,long *in_x1,ulong in_x2)

{
  unsigned char frame[144] = {0};

  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  double dVar5;

  pbVar4 = (byte *)recovered_10011bb4(param_1,in_x1,in_x2);
  if (2 < *pbVar4 - 1) {
    puVar3 = (undefined8 *)recovered_10002efc(0x20);
    recovered_100064b8(alStack_60,param_1);
    recovered_10003ff0(auStack_48,alStack_60,((uintptr_t)pf_module_state+0x2300U));
    recovered_10008940(puVar3,auStack_48);
    recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10013710);
    (*pcVar2)();
  }
  bVar1 = *pbVar4;
  if (bVar1 == 3) {
    if (*(long *)(pbVar4 + 0x20) != 3) goto LAB_10004198;
    dVar5 = 1.0;
    if (pbVar4[8] == 0) {
      dVar5 = 0.0;
    }
  }
  else if (bVar1 == 2) {
    if (*(long *)(pbVar4 + 0x20) != 2) goto LAB_10004198;
    dVar5 = *(double *)(pbVar4 + 8);
  }
  else {
    if (bVar1 != 1) {
      puVar3 = (undefined8 *)recovered_10002efc(0x20);
      recovered_1000411c(puVar3,((uintptr_t)pf_module_state+0x177bU));
      recovered_10002fb4((long)puVar3,&LAB_1001c050,recovered_10004120);
      recovered_10002f44((long)puVar3);
                    /* WARNING: Subroutine does not return */
      recovered_10003190();
    }
    if (*(long *)(pbVar4 + 0x20) != 1) {
LAB_10004198:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000419c);
      (*pcVar2)();
    }
    dVar5 = (double)*(long *)(pbVar4 + 8);
  }
  return dVar5;
}

#undef LAB_1001c050
#undef alStack_60
#undef auStack_48

#undef PTR_recovered_10013774_1001c7b0
#define PTR_recovered_10013774_1001c7b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013738
 */

undefined8 * recovered_10013738(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013774_1001c7b0;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013774_1001c7b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013774
 */

void recovered_10013774(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013778
 */

void recovered_10013778(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001377c
 */

void recovered_1001377c(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21edU),param_4,1,1);
  dVar7 = recovered_1001369c(((uintptr_t)pf_module_state+0x21edU),(long *)param_4,0);
  dVar7 = recovered_10001164(dVar7);
  bVar4 = recovered_10011b98((ulong)dVar7);
  if (bVar4) {
    dVar6 = recovered_10003338(dVar7);
    dVar6 = recovered_10001370(dVar7 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (dVar7 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar4 = dVar7 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(dVar7);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar7;
  return;
}


#undef PTR_recovered_10013774_1001c7b0
#define PTR_recovered_10013774_1001c7b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x64c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013784
 */

void recovered_10013784(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013774_1001c7b0;
  return;
}

#undef PTR_recovered_10013774_1001c7b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100137ac
 */

void recovered_100137ac(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21edU),param_4,1,1);
  dVar7 = recovered_1001369c(((uintptr_t)pf_module_state+0x21edU),(long *)param_4,0);
  dVar7 = recovered_10001164(dVar7);
  bVar4 = recovered_10011b98((ulong)dVar7);
  if (bVar4) {
    dVar6 = recovered_10003338(dVar7);
    dVar6 = recovered_10001370(dVar7 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (dVar7 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar4 = dVar7 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(dVar7);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar7;
  return;
}


#undef PTR_recovered_10013844_1001c7f8
#define PTR_recovered_10013844_1001c7f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013808
 */

undefined8 * recovered_10013808(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013844_1001c7f8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013844_1001c7f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013844
 */

void recovered_10013844(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013848
 */

void recovered_10013848(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001384c
 */

void recovered_1001384c(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21f7U),param_4,1,1);
  dVar7 = recovered_1001369c(((uintptr_t)pf_module_state+0x21f7U),(long *)param_4,0);
  dVar7 = recovered_10001370(dVar7);
  bVar4 = recovered_10011b98((ulong)dVar7);
  if (bVar4) {
    dVar6 = recovered_10003338(dVar7);
    dVar6 = recovered_10001370(dVar7 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (dVar7 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar4 = dVar7 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(dVar7);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar7;
  return;
}


#undef PTR_recovered_10013844_1001c7f8
#define PTR_recovered_10013844_1001c7f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013854
 */

void recovered_10013854(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013844_1001c7f8;
  return;
}

#undef PTR_recovered_10013844_1001c7f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001387c
 */

void recovered_1001387c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  double dVar7;

  recovered_100114c0(((uintptr_t)pf_module_state+0x21f7U),param_4,1,1);
  dVar7 = recovered_1001369c(((uintptr_t)pf_module_state+0x21f7U),(long *)param_4,0);
  dVar7 = recovered_10001370(dVar7);
  bVar4 = recovered_10011b98((ulong)dVar7);
  if (bVar4) {
    dVar6 = recovered_10003338(dVar7);
    dVar6 = recovered_10001370(dVar7 - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (dVar7 <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(dVar7)) {
        bVar4 = dVar7 < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(dVar7);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar7;
  return;
}


#undef PTR_recovered_10013914_1001c840
#define PTR_recovered_10013914_1001c840 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100138d8
 */

undefined8 * recovered_100138d8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013914_1001c840;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013914_1001c840

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013914
 */

void recovered_10013914(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013918
 */

void recovered_10013918(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001391c
 */

void recovered_1001391c(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong in_x2;
  double value;
  double dVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2200U),param_4,1,0xffffffffffffffff);
  value = recovered_1001369c(((uintptr_t)pf_module_state+0x2200U),(long *)param_4,0);
  for (in_x2 = 1; in_x2 < *(ulong *)(param_4 + 8); in_x2 = in_x2 + 1) {
    dVar6 = recovered_1001369c(((uintptr_t)pf_module_state+0x2200U),(long *)param_4,in_x2);
    if (value <= dVar6) {
      dVar6 = value;
    }
    value = dVar6;
  }
  bVar4 = recovered_10011b98((ulong)value);
  if (bVar4) {
    dVar6 = recovered_10003338(value);
    dVar6 = recovered_10001370(value - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (value <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(value)) {
        bVar4 = value < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(value);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = value;
  return;
}


#undef PTR_recovered_10013914_1001c840
#define PTR_recovered_10013914_1001c840 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013924
 */

void recovered_10013924(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013914_1001c840;
  return;
}

#undef PTR_recovered_10013914_1001c840

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001394c
 */

void recovered_1001394c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong in_x2;
  double value;
  double dVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2200U),param_4,1,0xffffffffffffffff);
  value = recovered_1001369c(((uintptr_t)pf_module_state+0x2200U),(long *)param_4,0);
  for (in_x2 = 1; in_x2 < *(ulong *)(param_4 + 8); in_x2 = in_x2 + 1) {
    dVar6 = recovered_1001369c(((uintptr_t)pf_module_state+0x2200U),(long *)param_4,in_x2);
    if (value <= dVar6) {
      dVar6 = value;
    }
    value = dVar6;
  }
  bVar4 = recovered_10011b98((ulong)value);
  if (bVar4) {
    dVar6 = recovered_10003338(value);
    dVar6 = recovered_10001370(value - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (value <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(value)) {
        bVar4 = value < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(value);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = value;
  return;
}


#undef PTR_recovered_10013a20_1001c888
#define PTR_recovered_10013a20_1001c888 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x65a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100139e4
 */

undefined8 * recovered_100139e4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013a20_1001c888;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013a20_1001c888

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013a20
 */

void recovered_10013a20(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013a24
 */

void recovered_10013a24(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013a28
 */

void recovered_10013a28(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong in_x2;
  double value;
  double dVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2209U),param_4,1,0xffffffffffffffff);
  value = recovered_1001369c(((uintptr_t)pf_module_state+0x2209U),(long *)param_4,0);
  for (in_x2 = 1; in_x2 < *(ulong *)(param_4 + 8); in_x2 = in_x2 + 1) {
    dVar6 = recovered_1001369c(((uintptr_t)pf_module_state+0x2209U),(long *)param_4,in_x2);
    if (dVar6 <= value) {
      dVar6 = value;
    }
    value = dVar6;
  }
  bVar4 = recovered_10011b98((ulong)value);
  if (bVar4) {
    dVar6 = recovered_10003338(value);
    dVar6 = recovered_10001370(value - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (value <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(value)) {
        bVar4 = value < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(value);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = value;
  return;
}


#undef PTR_recovered_10013a20_1001c888
#define PTR_recovered_10013a20_1001c888 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x65a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013a30
 */

void recovered_10013a30(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013a20_1001c888;
  return;
}

#undef PTR_recovered_10013a20_1001c888

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013a58
 */

void recovered_10013a58(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong in_x2;
  double value;
  double dVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2209U),param_4,1,0xffffffffffffffff);
  value = recovered_1001369c(((uintptr_t)pf_module_state+0x2209U),(long *)param_4,0);
  for (in_x2 = 1; in_x2 < *(ulong *)(param_4 + 8); in_x2 = in_x2 + 1) {
    dVar6 = recovered_1001369c(((uintptr_t)pf_module_state+0x2209U),(long *)param_4,in_x2);
    if (dVar6 <= value) {
      dVar6 = value;
    }
    value = dVar6;
  }
  bVar4 = recovered_10011b98((ulong)value);
  if (bVar4) {
    dVar6 = recovered_10003338(value);
    dVar6 = recovered_10001370(value - dVar6);
    bVar4 = true;
    bVar3 = false;
    if (value <= 9.223372036854776e+18) {
      bVar4 = false;
      bVar3 = true;
      if (!NAN(value)) {
        bVar4 = value < -9.223372036854776e+18;
        bVar3 = false;
      }
    }
    bVar1 = false;
    bVar2 = true;
    if (bVar4 == bVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar6;
      }
    }
    if (!bVar2 || bVar1) {
      lVar5 = recovered_10001278(value);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 8) = lVar5;
      return;
    }
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = value;
  return;
}


#undef PTR_recovered_10013b2c_1001c8d0
#define PTR_recovered_10013b2c_1001c8d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x65e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013af0
 */

undefined8 * recovered_10013af0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013b2c_1001c8d0;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013b2c_1001c8d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013b2c
 */

void recovered_10013b2c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013b30
 */

void recovered_10013b30(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013b34
 */

void recovered_10013b34(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2212U),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x2212U),(long *)param_4,0);
  dVar1 = recovered_1000128c(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013b2c_1001c8d0
#define PTR_recovered_10013b2c_1001c8d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x65e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013b3c
 */

void recovered_10013b3c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013b2c_1001c8d0;
  return;
}

#undef PTR_recovered_10013b2c_1001c8d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013b64
 */

void recovered_10013b64(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2212U),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x2212U),(long *)param_4,0);
  dVar1 = recovered_1000128c(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013c08_1001c918
#define PTR_recovered_10013c08_1001c918 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6630U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013bcc
 */

undefined8 * recovered_10013bcc(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013c08_1001c918;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013c08_1001c918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c08
 */

void recovered_10013c08(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c0c
 */

void recovered_10013c0c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c10
 */

void recovered_10013c10(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x221bU),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x221bU),(long *)param_4,0);
  dVar1 = recovered_10001324(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013c08_1001c918
#define PTR_recovered_10013c08_1001c918 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6630U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c18
 */

void recovered_10013c18(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013c08_1001c918;
  return;
}

#undef PTR_recovered_10013c08_1001c918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c40
 */

void recovered_10013c40(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x221bU),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x221bU),(long *)param_4,0);
  dVar1 = recovered_10001324(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013ce4_1001c960
#define PTR_recovered_10013ce4_1001c960 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6678U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ca8
 */

undefined8 * recovered_10013ca8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013ce4_1001c960;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013ce4_1001c960

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ce4
 */

void recovered_10013ce4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ce8
 */

void recovered_10013ce8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017858
#define DAT_10017858 (*(double *)(((uintptr_t)pf_module_state + 0x1570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013cec
 */

void recovered_10013cec(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2224U),param_4,1,1);
  dVar2 = recovered_1001369c(((uintptr_t)pf_module_state+0x2224U),(long *)param_4,0);
  dVar1 = DAT_10017858;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar2 * dVar1;
  return;
}

#undef DAT_10017858

#undef PTR_recovered_10013ce4_1001c960
#define PTR_recovered_10013ce4_1001c960 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6678U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013cf4
 */

void recovered_10013cf4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013ce4_1001c960;
  return;
}

#undef PTR_recovered_10013ce4_1001c960

#undef DAT_10017858
#define DAT_10017858 (*(double *)(((uintptr_t)pf_module_state + 0x1570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013d1c
 */

void recovered_10013d1c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2224U),param_4,1,1);
  dVar2 = recovered_1001369c(((uintptr_t)pf_module_state+0x2224U),(long *)param_4,0);
  dVar1 = DAT_10017858;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar2 * dVar1;
  return;
}

#undef DAT_10017858

#undef PTR_recovered_10013dc8_1001c9a8
#define PTR_recovered_10013dc8_1001c9a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x66c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013d8c
 */

undefined8 * recovered_10013d8c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013dc8_1001c9a8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013dc8_1001c9a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013dc8
 */

void recovered_10013dc8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013dcc
 */

void recovered_10013dcc(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013dd0
 */

void recovered_10013dd0(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x222dU),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x222dU),(long *)param_4,0);
  dVar1 = recovered_100011cc(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013dc8_1001c9a8
#define PTR_recovered_10013dc8_1001c9a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x66c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013dd8
 */

void recovered_10013dd8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013dc8_1001c9a8;
  return;
}

#undef PTR_recovered_10013dc8_1001c9a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013e00
 */

void recovered_10013e00(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x222dU),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x222dU),(long *)param_4,0);
  dVar1 = recovered_100011cc(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013ea4_1001c9f0
#define PTR_recovered_10013ea4_1001c9f0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6708U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013e68
 */

undefined8 * recovered_10013e68(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013ea4_1001c9f0;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013ea4_1001c9f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ea4
 */

void recovered_10013ea4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ea8
 */

void recovered_10013ea8(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013eac
 */

void recovered_10013eac(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2236U),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x2236U),(long *)param_4,0);
  dVar1 = recovered_10001190(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013ea4_1001c9f0
#define PTR_recovered_10013ea4_1001c9f0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6708U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013eb4
 */

void recovered_10013eb4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013ea4_1001c9f0;
  return;
}

#undef PTR_recovered_10013ea4_1001c9f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013edc
 */

void recovered_10013edc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2236U),param_4,1,1);
  dVar1 = recovered_1001369c(((uintptr_t)pf_module_state+0x2236U),(long *)param_4,0);
  dVar1 = recovered_10001190(dVar1);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = 2;
  *(double *)(param_1 + 8) = dVar1;
  return;
}


#undef PTR_recovered_10013f80_1001ca38
#define PTR_recovered_10013f80_1001ca38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f44
 */

undefined8 * recovered_10013f44(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013f80_1001ca38;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10013f80_1001ca38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f80
 */

void recovered_10013f80(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f84
 */

void recovered_10013f84(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define pvStack_48 (*(void * *)(frame + 40))
#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_58 (*(undefined8 *)(frame + 24))
#define pvStack_60 (*(void * *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 56))
#define uStack_40 (*(undefined8 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f88
 */

void recovered_10013f88(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[144] = {0};

  int iVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2240U),param_4,1,1);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2240U),(long *)param_4,0);
  recovered_10006dc0(&pvStack_60,puVar2);
  pbVar3 = (byte *)recovered_100140c0(&pvStack_60);
  pbVar4 = (byte *)recovered_10014098(&pvStack_60);
  for (; pvStack_48 = pvStack_60, pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
    iVar1 = recovered_10000e44((uint)*pbVar3);
    *pbVar3 = (byte)iVar1;
  }
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  pvStack_60 = (void *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  recovered_1000395c(param_1,&pvStack_48);
  recovered_10002e70(pvStack_48);
  recovered_10002e70(pvStack_60);
  return;
}

#undef pvStack_48
#undef uStack_50
#undef uStack_58
#undef pvStack_60
#undef uStack_38
#undef uStack_40

#undef PTR_recovered_10013f80_1001ca38
#define PTR_recovered_10013f80_1001ca38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f90
 */

void recovered_10013f90(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10013f80_1001ca38;
  return;
}

#undef PTR_recovered_10013f80_1001ca38

#define uStack_50 (*(undefined8 *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 56))
#define local_60 (*(void * *)(frame + 16))
#define local_58 (*(undefined8 *)(frame + 24))
#define local_48 (*(void * *)(frame + 40))
#define local_40 (*(undefined8 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013fb8
 */

void recovered_10013fb8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[144] = {0};

  int iVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2240U),param_4,1,1);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2240U),(long *)param_4,0);
  recovered_10006dc0(&local_60,puVar2);
  pbVar3 = (byte *)recovered_100140c0(&local_60);
  pbVar4 = (byte *)recovered_10014098(&local_60);
  for (; local_48 = local_60, pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
    iVar1 = recovered_10000e44((uint)*pbVar3);
    *pbVar3 = (byte)iVar1;
  }
  uStack_38 = uStack_50;
  local_40 = local_58;
  local_60 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  recovered_1000395c(param_1,&local_48);
  recovered_10002e70(local_48);
  recovered_10002e70(local_60);
  return;
}

#undef uStack_50
#undef uStack_38
#undef local_60
#undef local_58
#undef local_48
#undef local_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014098
 */

long recovered_10014098(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_100140c0(param_1);
  return lVar1 + param_1[1];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100140c0
 */

undefined8 recovered_100140c0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006654(param_1);
  return *param_1;
}


#undef PTR_recovered_10014120_1001ca80
#define PTR_recovered_10014120_1001ca80 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6798U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100140e4
 */

undefined8 * recovered_100140e4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10014120_1001ca80;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10014120_1001ca80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014120
 */

void recovered_10014120(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014124
 */

void recovered_10014124(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#define uStack_40 (*(undefined8 *)(frame + 24))
#define pvStack_48 (*(void * *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014128
 */

void recovered_10014128(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[120] = {0};

  long lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  recovered_100114c0(((uintptr_t)pf_module_state+0x224dU),param_4,2,3);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x224dU),(long *)param_4,0);
  uVar3 = recovered_10011a10(((uintptr_t)pf_module_state+0x224dU),(long *)param_4,1);
  if (*(long *)(param_4 + 8) == 3) {
    uVar4 = recovered_10011a10(((uintptr_t)pf_module_state+0x224dU),(long *)param_4,2);
    uVar5 = puVar2[1];
  }
  else {
    uVar4 = puVar2[1];
    uVar5 = uVar4;
  }
  if (0 < (long)uVar5) {
    lVar1 = (uVar5 + 1 & (long)uVar3 >> 0x3f) + uVar3;
    if (lVar1 < 2) {
      lVar1 = 1;
    }
    uVar4 = (uVar5 + 1 & (long)uVar4 >> 0x3f) + uVar4;
    if ((long)uVar5 <= (long)uVar4) {
      uVar4 = uVar5;
    }
    if (lVar1 <= (long)uVar4) {
      recovered_10014264(&pvStack_48,puVar2,lVar1 - 1,(uVar4 - lVar1) + 1);
      goto LAB_1001423c;
    }
  }
  uStack_40 = 0;
  uStack_38 = 0;
  pvStack_48 = (void *)0x0;
LAB_1001423c:
  recovered_1000395c(param_1,&pvStack_48);
  recovered_10002e70(pvStack_48);
  return;
}

#undef uStack_40
#undef pvStack_48
#undef uStack_38

#undef PTR_recovered_10014120_1001ca80
#define PTR_recovered_10014120_1001ca80 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6798U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014130
 */

void recovered_10014130(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10014120_1001ca80;
  return;
}

#undef PTR_recovered_10014120_1001ca80

#define local_48 (*(void * *)(frame + 16))
#define local_40 (*(undefined8 *)(frame + 24))
#define uStack_38 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014158
 */

void recovered_10014158(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[120] = {0};

  long lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  recovered_100114c0(((uintptr_t)pf_module_state+0x224dU),param_4,2,3);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x224dU),(long *)param_4,0);
  uVar3 = recovered_10011a10(((uintptr_t)pf_module_state+0x224dU),(long *)param_4,1);
  if (*(long *)(param_4 + 8) == 3) {
    uVar4 = recovered_10011a10(((uintptr_t)pf_module_state+0x224dU),(long *)param_4,2);
    uVar5 = puVar2[1];
  }
  else {
    uVar4 = puVar2[1];
    uVar5 = uVar4;
  }
  if (0 < (long)uVar5) {
    lVar1 = (uVar5 + 1 & (long)uVar3 >> 0x3f) + uVar3;
    if (lVar1 < 2) {
      lVar1 = 1;
    }
    uVar4 = (uVar5 + 1 & (long)uVar4 >> 0x3f) + uVar4;
    if ((long)uVar5 <= (long)uVar4) {
      uVar4 = uVar5;
    }
    if (lVar1 <= (long)uVar4) {
      recovered_10014264(&local_48,puVar2,lVar1 - 1,(uVar4 - lVar1) + 1);
      goto LAB_1001423c;
    }
  }
  local_40 = 0;
  uStack_38 = 0;
  local_48 = (void *)0x0;
LAB_1001423c:
  recovered_1000395c(param_1,&local_48);
  recovered_10002e70(local_48);
  return;
}

#undef local_48
#undef local_40
#undef uStack_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014264
 */

void recovered_10014264(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

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
  puVar3 = &DAT_10017864;
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
  recovered_100064fc(param_1,(long)(puVar3 + uVar2),uVar1);
  return;
}

#undef DAT_10017864

#undef PTR_recovered_100142dc_1001cac8
#define PTR_recovered_100142dc_1001cac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x67e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142a0
 */

undefined8 * recovered_100142a0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100142dc_1001cac8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_100142dc_1001cac8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142dc
 */

void recovered_100142dc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142e0
 */

void recovered_100142e0(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#define lStack_40 (*(long *)(frame + 128))
#define uStack_88 (*(undefined1 *)(frame + 56))
#define uStack_90 (*(undefined8 *)(frame + 48))
#define alStack_b0 (*(long (*)[4])(frame + 16))
#define plStack_48 (*(long * *)(frame + 120))
#define alStack_60 (*(long (*)[3])(frame + 96))
#define uStack_68 (*(undefined8 *)(frame + 88))
#define lStack_80 (*(long *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142e4
 */

void recovered_100142e4(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[224] = {0};

  char *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  long lVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2258U),param_4,2,2);
  puVar3 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2258U),(long *)param_4,0);
  puVar4 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2258U),(long *)param_4,1);
  bVar2 = recovered_100071cc(puVar4,&DAT_1001875c);
  if (bVar2) {
    recovered_10014548((long *)&plStack_48,puVar3);
    if (lStack_40 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      alStack_b0[1] = *plStack_48 + 1;
      PF_PART1(alStack_b0[0], 0) = 1;
      uStack_90 = 1;
      lStack_80 = plStack_48[1];
      uStack_88 = 1;
      uStack_68 = 1;
      recovered_1001474c(alStack_60,(long)alStack_b0,2);
      recovered_10003a14(param_1,alStack_60);
      recovered_10010238(alStack_60);
      lVar6 = 0x30;
      do {
        recovered_1000686c((long *)((long)alStack_b0 + lVar6));
        bVar2 = lVar6 != 8;
        lVar6 = lVar6 + -0x28;
      } while (bVar2);
    }
    lStack_40 = 0;
    recovered_10002e70(plStack_48);
  }
  else {
    pcVar1 = &DAT_10017864;
    if ((char *)*puVar4 != (char *)0x0) {
      pcVar1 = (char *)*puVar4;
    }
    uVar5 = recovered_1001460c(puVar3,pcVar1,puVar4[1],0);
    if (uVar5 == 0xffffffffffffffff) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      alStack_b0[1] = uVar5 + 1;
      PF_PART1(alStack_b0[0], 0) = 1;
      uStack_90 = 1;
      lStack_80 = puVar4[1] + uVar5;
      uStack_88 = 1;
      uStack_68 = 1;
      recovered_1001474c(&plStack_48,(long)alStack_b0,2);
      recovered_10003a14(param_1,&plStack_48);
      recovered_10010238((long *)&plStack_48);
      lVar6 = 0x30;
      do {
        recovered_1000686c((long *)((long)alStack_b0 + lVar6));
        bVar2 = lVar6 != 8;
        lVar6 = lVar6 + -0x28;
      } while (bVar2);
    }
  }
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef lStack_40
#undef uStack_88
#undef uStack_90
#undef alStack_b0
#undef plStack_48
#undef alStack_60
#undef uStack_68
#undef lStack_80

#undef PTR_recovered_100142dc_1001cac8
#define PTR_recovered_100142dc_1001cac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x67e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142ec
 */

void recovered_100142ec(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_100142dc_1001cac8;
  return;
}

#undef PTR_recovered_100142dc_1001cac8

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#define local_b0 (*(long (*)[4])(frame + 16))
#define local_90 (*(undefined8 *)(frame + 48))
#define local_88 (*(undefined1 *)(frame + 56))
#define local_80 (*(long *)(frame + 64))
#define local_68 (*(undefined8 *)(frame + 88))
#define local_48 (*(long * *)(frame + 120))
#define local_40 (*(long *)(frame + 128))
#define alStack_60 (*(long (*)[3])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014314
 */

void recovered_10014314(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[224] = {0};

  char *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  long lVar6;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2258U),param_4,2,2);
  puVar3 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2258U),(long *)param_4,0);
  puVar4 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2258U),(long *)param_4,1);
  bVar2 = recovered_100071cc(puVar4,&DAT_1001875c);
  if (bVar2) {
    recovered_10014548((long *)&local_48,puVar3);
    if (local_40 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      local_b0[1] = *local_48 + 1;
      PF_PART1(local_b0[0], 0) = 1;
      local_90 = 1;
      local_80 = local_48[1];
      local_88 = 1;
      local_68 = 1;
      recovered_1001474c(alStack_60,(long)local_b0,2);
      recovered_10003a14(param_1,alStack_60);
      recovered_10010238(alStack_60);
      lVar6 = 0x30;
      do {
        recovered_1000686c((long *)((long)local_b0 + lVar6));
        bVar2 = lVar6 != 8;
        lVar6 = lVar6 + -0x28;
      } while (bVar2);
    }
    local_40 = 0;
    recovered_10002e70(local_48);
  }
  else {
    pcVar1 = &DAT_10017864;
    if ((char *)*puVar4 != (char *)0x0) {
      pcVar1 = (char *)*puVar4;
    }
    uVar5 = recovered_1001460c(puVar3,pcVar1,puVar4[1],0);
    if (uVar5 == 0xffffffffffffffff) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      local_b0[1] = uVar5 + 1;
      PF_PART1(local_b0[0], 0) = 1;
      local_90 = 1;
      local_80 = puVar4[1] + uVar5;
      local_88 = 1;
      local_68 = 1;
      recovered_1001474c(&local_48,(long)local_b0,2);
      recovered_10003a14(param_1,&local_48);
      recovered_10010238((long *)&local_48);
      lVar6 = 0x30;
      do {
        recovered_1000686c((long *)((long)local_b0 + lVar6));
        bVar2 = lVar6 != 8;
        lVar6 = lVar6 + -0x28;
      } while (bVar2);
    }
  }
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef local_b0
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_48
#undef local_40
#undef alStack_60

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define uStack_40 (*(ulong *)(frame + 16))
#define local_38 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014548
 */

void recovered_10014548(long *param_1,undefined8 *param_2)

{
  unsigned char frame[112] = {0};

  undefined1 *puVar1;
  bool bVar2;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  local_38 = 0;
  do {
    while( true ) {
      if ((ulong)param_2[1] <= local_38) {
        return;
      }
      puVar1 = &DAT_10017864;
      if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
        puVar1 = (undefined1 *)*param_2;
      }
      bVar2 = recovered_10003274((uint)(byte)puVar1[local_38]);
      if (bVar2) break;
      local_38 = local_38 + 1;
    }
    uStack_40 = local_38;
    for (; local_38 < (ulong)param_2[1]; local_38 = local_38 + 1) {
      puVar1 = &DAT_10017864;
      if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
        puVar1 = (undefined1 *)*param_2;
      }
      bVar2 = recovered_10003274((uint)(byte)puVar1[local_38]);
      if (!bVar2) break;
    }
    recovered_10014644(param_1,&uStack_40,&local_38);
  } while( true );
}

#undef DAT_10017864
#undef uStack_40
#undef local_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define local_20 (*(undefined1 * *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001460c
 */

ulonglong recovered_1001460c(undefined8 *param_1,char *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[80] = {0};

  ulong uVar1;

  uStack_18 = param_1[1];
  local_20 = &DAT_10017864;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  uVar1 = recovered_100147dc((long *)&local_20,param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_10017864
#undef local_20
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014644
 */

long recovered_10014644(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar2 = 4;
    if (lVar3 != 0) {
      uVar2 = lVar3 << 1;
    }
    recovered_100146c0(param_1,uVar2);
    lVar3 = param_1[1];
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar3 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = *param_3;
  param_1[1] = lVar3 + 1;
  return lVar4 + (lVar3 + 1) * 0x10 + -0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100146c0
 */

void recovered_100146c0(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1001473c(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      uVar4 = *(undefined8 *)(*param_1 + lVar2);
      ((undefined8 *)(uVar1 + lVar2))[1] = ((undefined8 *)(*param_1 + lVar2))[1];
      *(undefined8 *)(uVar1 + lVar2) = uVar4;
      lVar2 = lVar2 + 0x10;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001473c
 */

ulonglong recovered_1001473c(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x10;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001474c
 */

undefined8 * recovered_1001474c(undefined8 *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007b80(param_1,param_3);
  for (lVar1 = param_3 * 0x28; lVar1 != 0; lVar1 = lVar1 + -0x28) {
    recovered_1000a86c(param_1,(undefined1 *)param_2);
    param_2 = param_2 + 0x28;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100147b0
 */

undefined8 * recovered_100147b0(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100147dc
 */

ulong recovered_100147dc(long *param_1,char *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;

  uVar3 = param_1[1];
  if (param_3 == 0) {
    if (uVar3 < param_4) {
      param_4 = 0xffffffffffffffff;
    }
  }
  else {
    if (param_3 <= uVar3 && param_4 <= uVar3 - param_3) {
      for (; param_4 <= uVar3 - param_3; param_4 = param_4 + 1) {
        lVar4 = *param_1;
        pcVar5 = param_2;
        uVar6 = param_3;
        do {
          if (uVar6 == 0) {
            return param_4;
          }
          pcVar1 = (char *)(lVar4 + param_4);
          cVar2 = *pcVar5;
          uVar6 = uVar6 - 1;
          lVar4 = lVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 == cVar2);
      }
    }
    param_4 = 0xffffffffffffffff;
  }
  return param_4;
}


#undef PTR_recovered_1001487c_1001cb10
#define PTR_recovered_1001487c_1001cb10 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6828U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014840
 */

undefined8 * recovered_10014840(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_1001487c_1001cb10;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_1001487c_1001cb10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001487c
 */

void recovered_1001487c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014880
 */

void recovered_10014880(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#undef str_10018760
#define str_10018760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2478U)))
#define apvStack_e8 (*(void * (*)[3])(frame + 16))
#define auStack_90 (*(undefined1 (*)[40])(frame + 104))
#define lStack_b0 (*(long *)(frame + 72))
#define puStack_b8 (*(ulong * *)(frame + 64))
#define apuStack_d0 (*(ulong * (*)[3])(frame + 40))
#define apvStack_68 (*(void * (*)[3])(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014884
 */

void recovered_10014884(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[280] = {0};

  ulong uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *in_x1;
  ulonglong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2264U),param_4,2,2);
  puVar5 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2264U),(long *)param_4,0);
  in_x1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2264U),(long *)param_4,1);
  bVar4 = recovered_100071cc(in_x1,str_10018760);
  if (bVar4) {
    uVar1 = 0;
    do {
      do {
        do {
          while( true ) {
            uVar11 = uVar1;
            if ((ulong)puVar5[1] <= uVar11) goto LAB_10014b40;
            puVar2 = &DAT_10017864;
            if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
              puVar2 = (undefined1 *)*puVar5;
            }
            bVar4 = recovered_10000de0((uint)(byte)puVar2[uVar11]);
            if (bVar4) break;
            uVar1 = uVar11 + 1;
          }
          uVar9 = 0;
          while( true ) {
            uVar7 = puVar5[1];
            uVar1 = uVar11 + uVar9;
            if (uVar7 <= uVar1) break;
            puVar2 = &DAT_10017864;
            if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
              puVar2 = (undefined1 *)*puVar5;
            }
            bVar4 = recovered_10000de0((uint)(byte)puVar2[uVar9 + uVar11]);
            if (!bVar4) {
              uVar7 = puVar5[1];
              break;
            }
            uVar9 = uVar9 + 1;
          }
        } while (uVar7 <= uVar1);
        puVar2 = &DAT_10017864;
        if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
          puVar2 = (undefined1 *)*puVar5;
        }
      } while (puVar2[uVar9 + uVar11] != '-');
      lVar8 = uVar11 + 1 + uVar9;
      for (uVar10 = 0; lVar8 + uVar10 < uVar7; uVar10 = uVar10 + 1) {
        puVar2 = &DAT_10017864;
        if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
          puVar2 = (undefined1 *)*puVar5;
        }
        bVar4 = recovered_10003274((uint)(byte)puVar2[uVar10 + lVar8]);
        if (!bVar4) break;
        uVar7 = puVar5[1];
      }
    } while (uVar10 == 0);
    recovered_10014264(apuStack_d0,puVar5,uVar11,uVar9);
    recovered_1000395c((undefined1 *)&puStack_b8,apuStack_d0);
    recovered_10014264(apvStack_e8,puVar5,uVar11 + uVar9 + 1,uVar10);
    recovered_1000395c(auStack_90,apvStack_e8);
    recovered_1001474c(apvStack_68,(long)&puStack_b8,2);
    recovered_10003a14(param_1,apvStack_68);
    recovered_10010238((long *)apvStack_68);
    lVar8 = 0x30;
    do {
      recovered_1000686c((long *)((long)apuStack_d0 + lVar8 + 0x18));
      bVar4 = lVar8 != 8;
      lVar8 = lVar8 + -0x28;
    } while (bVar4);
    recovered_10002e70(apvStack_e8[0]);
  }
  else {
    bVar4 = recovered_100071cc(in_x1,&DAT_1001875c);
    if (!bVar4) {
      pcVar3 = &DAT_10017864;
      if ((char *)*in_x1 != (char *)0x0) {
        pcVar3 = (char *)*in_x1;
      }
      uVar6 = recovered_1001460c(puVar5,pcVar3,in_x1[1],0);
      if (uVar6 != 0xffffffffffffffff) {
        *param_1 = 4;
        recovered_1000feb8((long)(param_1 + 8),in_x1);
        return;
      }
LAB_10014b40:
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    recovered_10014548((long *)&puStack_b8,puVar5);
    if (lStack_b0 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      recovered_10014264(apvStack_68,puVar5,*puStack_b8,puStack_b8[1] - *puStack_b8);
      recovered_1000395c(param_1,apvStack_68);
      recovered_10002e70(apvStack_68[0]);
    }
    lStack_b0 = 0;
    apuStack_d0[0] = puStack_b8;
  }
  recovered_10002e70(apuStack_d0[0]);
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef str_10018760
#undef apvStack_e8
#undef auStack_90
#undef lStack_b0
#undef puStack_b8
#undef apuStack_d0
#undef apvStack_68

#undef PTR_recovered_1001487c_1001cb10
#define PTR_recovered_1001487c_1001cb10 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6828U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001488c
 */

void recovered_1001488c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_1001487c_1001cb10;
  return;
}

#undef PTR_recovered_1001487c_1001cb10

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#undef str_10018760
#define str_10018760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2478U)))
#define local_e8 (*(void * (*)[3])(frame + 16))
#define auStack_90 (*(undefined1 (*)[40])(frame + 104))
#define local_d0 (*(ulong * (*)[3])(frame + 40))
#define local_b8 (*(ulong * *)(frame + 64))
#define local_b0 (*(long *)(frame + 72))
#define local_68 (*(void * (*)[3])(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100148b4
 */

void recovered_100148b4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[280] = {0};

  ulong uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *in_x1;
  ulonglong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2264U),param_4,2,2);
  puVar5 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2264U),(long *)param_4,0);
  in_x1 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2264U),(long *)param_4,1);
  bVar4 = recovered_100071cc(in_x1,str_10018760);
  if (bVar4) {
    uVar1 = 0;
    do {
      do {
        do {
          while( true ) {
            uVar11 = uVar1;
            if ((ulong)puVar5[1] <= uVar11) goto LAB_10014b40;
            puVar2 = &DAT_10017864;
            if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
              puVar2 = (undefined1 *)*puVar5;
            }
            bVar4 = recovered_10000de0((uint)(byte)puVar2[uVar11]);
            if (bVar4) break;
            uVar1 = uVar11 + 1;
          }
          uVar9 = 0;
          while( true ) {
            uVar7 = puVar5[1];
            uVar1 = uVar11 + uVar9;
            if (uVar7 <= uVar1) break;
            puVar2 = &DAT_10017864;
            if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
              puVar2 = (undefined1 *)*puVar5;
            }
            bVar4 = recovered_10000de0((uint)(byte)puVar2[uVar9 + uVar11]);
            if (!bVar4) {
              uVar7 = puVar5[1];
              break;
            }
            uVar9 = uVar9 + 1;
          }
        } while (uVar7 <= uVar1);
        puVar2 = &DAT_10017864;
        if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
          puVar2 = (undefined1 *)*puVar5;
        }
      } while (puVar2[uVar9 + uVar11] != '-');
      lVar8 = uVar11 + 1 + uVar9;
      for (uVar10 = 0; lVar8 + uVar10 < uVar7; uVar10 = uVar10 + 1) {
        puVar2 = &DAT_10017864;
        if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
          puVar2 = (undefined1 *)*puVar5;
        }
        bVar4 = recovered_10003274((uint)(byte)puVar2[uVar10 + lVar8]);
        if (!bVar4) break;
        uVar7 = puVar5[1];
      }
    } while (uVar10 == 0);
    recovered_10014264(local_d0,puVar5,uVar11,uVar9);
    recovered_1000395c((undefined1 *)&local_b8,local_d0);
    recovered_10014264(local_e8,puVar5,uVar11 + uVar9 + 1,uVar10);
    recovered_1000395c(auStack_90,local_e8);
    recovered_1001474c(local_68,(long)&local_b8,2);
    recovered_10003a14(param_1,local_68);
    recovered_10010238((long *)local_68);
    lVar8 = 0x30;
    do {
      recovered_1000686c((long *)((long)local_d0 + lVar8 + 0x18));
      bVar4 = lVar8 != 8;
      lVar8 = lVar8 + -0x28;
    } while (bVar4);
    recovered_10002e70(local_e8[0]);
  }
  else {
    bVar4 = recovered_100071cc(in_x1,&DAT_1001875c);
    if (!bVar4) {
      pcVar3 = &DAT_10017864;
      if ((char *)*in_x1 != (char *)0x0) {
        pcVar3 = (char *)*in_x1;
      }
      uVar6 = recovered_1001460c(puVar5,pcVar3,in_x1[1],0);
      if (uVar6 != 0xffffffffffffffff) {
        *param_1 = 4;
        recovered_1000feb8((long)(param_1 + 8),in_x1);
        return;
      }
LAB_10014b40:
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
    recovered_10014548((long *)&local_b8,puVar5);
    if (local_b0 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      recovered_10014264(local_68,puVar5,*local_b8,local_b8[1] - *local_b8);
      recovered_1000395c(param_1,local_68);
      recovered_10002e70(local_68[0]);
    }
    local_b0 = 0;
    local_d0[0] = local_b8;
  }
  recovered_10002e70(local_d0[0]);
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef str_10018760
#undef local_e8
#undef auStack_90
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_68

#undef PTR_recovered_10014c3c_1001cb58
#define PTR_recovered_10014c3c_1001cb58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6870U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014c00
 */

undefined8 * recovered_10014c00(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10014c3c_1001cb58;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10014c3c_1001cb58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014c3c
 */

void recovered_10014c3c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014c40
 */

void recovered_10014c40(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#define uStack_68 (*(ulong *)(frame + 48))
#define puStack_70 (*(ulong * *)(frame + 40))
#define apvStack_88 (*(void * (*)[3])(frame + 16))
#define uStack_48 (*(undefined8 *)(frame + 80))
#define uStack_50 (*(undefined8 *)(frame + 72))
#define lStack_58 (*(long *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014c44
 */

void recovered_10014c44(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[184] = {0};

  char *pcVar1;
  ulong *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2271U),param_4,2,2);
  puVar4 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2271U),(long *)param_4,0);
  puVar5 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2271U),(long *)param_4,1);
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  bVar3 = recovered_100071cc(puVar5,&DAT_1001875c);
  if (bVar3) {
    recovered_10014548((long *)&puStack_70,puVar4);
    recovered_10007b80(&lStack_58,uStack_68);
    puVar2 = puStack_70;
    for (lVar9 = uStack_68 << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
      recovered_10014264(apvStack_88,puVar4,*puVar2,puVar2[1] - *puVar2);
      recovered_1000d730(&lStack_58,apvStack_88);
      recovered_10002e70(apvStack_88[0]);
      puVar2 = puVar2 + 2;
    }
    recovered_10003a14(param_1,&lStack_58);
    uStack_68 = 0;
    recovered_10002e70(puStack_70);
  }
  else {
    uVar8 = 0;
    uVar7 = puVar5[1];
    while( true ) {
      pcVar1 = &DAT_10017864;
      if ((char *)*puVar5 != (char *)0x0) {
        pcVar1 = (char *)*puVar5;
      }
      uVar6 = recovered_1001460c(puVar4,pcVar1,uVar7,uVar8);
      if (uVar6 == 0xffffffffffffffff) break;
      recovered_100128c0(&lStack_58,puVar5);
      uVar7 = puVar5[1];
      uVar8 = uVar7 + uVar6;
    }
    recovered_10003a14(param_1,&lStack_58);
  }
  recovered_10010238(&lStack_58);
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef uStack_68
#undef puStack_70
#undef apvStack_88
#undef uStack_48
#undef uStack_50
#undef lStack_58

#undef PTR_recovered_10014c3c_1001cb58
#define PTR_recovered_10014c3c_1001cb58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6870U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014c4c
 */

void recovered_10014c4c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10014c3c_1001cb58;
  return;
}

#undef PTR_recovered_10014c3c_1001cb58

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#define local_88 (*(void * (*)[3])(frame + 16))
#define local_70 (*(ulong * *)(frame + 40))
#define local_68 (*(ulong *)(frame + 48))
#define local_58 (*(long *)(frame + 64))
#define local_50 (*(undefined8 *)(frame + 72))
#define uStack_48 (*(undefined8 *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014c74
 */

void recovered_10014c74(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[184] = {0};

  char *pcVar1;
  ulong *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2271U),param_4,2,2);
  puVar4 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2271U),(long *)param_4,0);
  puVar5 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2271U),(long *)param_4,1);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  bVar3 = recovered_100071cc(puVar5,&DAT_1001875c);
  if (bVar3) {
    recovered_10014548((long *)&local_70,puVar4);
    recovered_10007b80(&local_58,local_68);
    puVar2 = local_70;
    for (lVar9 = local_68 << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
      recovered_10014264(local_88,puVar4,*puVar2,puVar2[1] - *puVar2);
      recovered_1000d730(&local_58,local_88);
      recovered_10002e70(local_88[0]);
      puVar2 = puVar2 + 2;
    }
    recovered_10003a14(param_1,&local_58);
    local_68 = 0;
    recovered_10002e70(local_70);
  }
  else {
    uVar8 = 0;
    uVar7 = puVar5[1];
    while( true ) {
      pcVar1 = &DAT_10017864;
      if ((char *)*puVar5 != (char *)0x0) {
        pcVar1 = (char *)*puVar5;
      }
      uVar6 = recovered_1001460c(puVar4,pcVar1,uVar7,uVar8);
      if (uVar6 == 0xffffffffffffffff) break;
      recovered_100128c0(&local_58,puVar5);
      uVar7 = puVar5[1];
      uVar8 = uVar7 + uVar6;
    }
    recovered_10003a14(param_1,&local_58);
  }
  recovered_10010238(&local_58);
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef local_88
#undef local_70
#undef local_68
#undef local_58
#undef local_50
#undef uStack_48

#undef PTR_recovered_10014e58_1001cba0
#define PTR_recovered_10014e58_1001cba0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x68b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e1c
 */

undefined8 * recovered_10014e1c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10014e58_1001cba0;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10014e58_1001cba0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e58
 */

void recovered_10014e58(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e5c
 */

void recovered_10014e5c(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define auStack_60 (*(ulong (*)[4])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e60
 */

void recovered_10014e60(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[144] = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulong uVar4;
  ulong uVar5;

  recovered_100114c0(((uintptr_t)pf_module_state+0x227fU),param_4,1,3);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x227fU),(long *)param_4,0);
  if (*(ulong *)(param_4 + 8) < 2) {
    uVar5 = puVar2[1];
    uVar3 = 1;
    uVar4 = 1;
  }
  else {
    uVar3 = recovered_10011a10(((uintptr_t)pf_module_state+0x227fU),(long *)param_4,1);
    uVar4 = uVar3;
    if (*(long *)(param_4 + 8) == 3) {
      uVar4 = recovered_10011a10(((uintptr_t)pf_module_state+0x227fU),(long *)param_4,2);
    }
    uVar5 = puVar2[1];
    if ((long)uVar3 < 0) {
      uVar3 = uVar3 + uVar5 + 1;
    }
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar4 = uVar4 + uVar5 + 1;
    }
  }
  if ((long)uVar3 < 2) {
    uVar3 = 1;
  }
  if ((long)uVar5 <= (long)uVar4) {
    uVar4 = uVar5;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  for (; (long)uVar3 <= (long)uVar4; uVar3 = uVar3 + 1) {
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*puVar2;
    }
    auStack_60[0] = (ulong)(byte)puVar1[uVar3 - 1];
    recovered_1000d5e0((long *)(auStack_60 + 1),auStack_60);
  }
  recovered_10003a14(param_1,auStack_60 + 1);
  recovered_10010238((long *)(auStack_60 + 1));
  return;
}

#undef DAT_10017864
#undef auStack_60

#undef PTR_recovered_10014e58_1001cba0
#define PTR_recovered_10014e58_1001cba0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x68b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e68
 */

void recovered_10014e68(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10014e58_1001cba0;
  return;
}

#undef PTR_recovered_10014e58_1001cba0

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define local_60 (*(ulong (*)[4])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e90
 */

void recovered_10014e90(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[144] = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulong uVar4;
  ulong uVar5;

  recovered_100114c0(((uintptr_t)pf_module_state+0x227fU),param_4,1,3);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x227fU),(long *)param_4,0);
  if (*(ulong *)(param_4 + 8) < 2) {
    uVar5 = puVar2[1];
    uVar3 = 1;
    uVar4 = 1;
  }
  else {
    uVar3 = recovered_10011a10(((uintptr_t)pf_module_state+0x227fU),(long *)param_4,1);
    uVar4 = uVar3;
    if (*(long *)(param_4 + 8) == 3) {
      uVar4 = recovered_10011a10(((uintptr_t)pf_module_state+0x227fU),(long *)param_4,2);
    }
    uVar5 = puVar2[1];
    if ((long)uVar3 < 0) {
      uVar3 = uVar3 + uVar5 + 1;
    }
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar4 = uVar4 + uVar5 + 1;
    }
  }
  if ((long)uVar3 < 2) {
    uVar3 = 1;
  }
  if ((long)uVar5 <= (long)uVar4) {
    uVar4 = uVar5;
  }
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[1] = 0;
  for (; (long)uVar3 <= (long)uVar4; uVar3 = uVar3 + 1) {
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*puVar2;
    }
    local_60[0] = (ulong)(byte)puVar1[uVar3 - 1];
    recovered_1000d5e0((long *)(local_60 + 1),local_60);
  }
  recovered_10003a14(param_1,local_60 + 1);
  recovered_10010238((long *)(local_60 + 1));
  return;
}

#undef DAT_10017864
#undef local_60

#undef PTR_recovered_10015024_1001cbe8
#define PTR_recovered_10015024_1001cbe8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6900U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014fe8
 */

undefined8 * recovered_10014fe8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10015024_1001cbe8;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10015024_1001cbe8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015024
 */

void recovered_10015024(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015028
 */

void recovered_10015028(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define alStack_a8 (*(long (*)[3])(frame + 16))
#define uStack_68 (*(undefined8 *)(frame + 80))
#define uStack_70 (*(undefined8 *)(frame + 72))
#define pvStack_78 (*(void * *)(frame + 64))
#define apvStack_90 (*(void * (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001502c
 */

void recovered_1001502c(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[216] = {0};

  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *object;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;

  uVar7 = 1;
  recovered_100114c0(((uintptr_t)pf_module_state+0x228bU),(long)param_4,1,0xffffffffffffffff);
  puVar4 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x228bU),param_4,0);
  uVar6 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  pvStack_78 = (void *)0x0;
  do {
    if ((ulong)puVar4[1] <= uVar6) {
      recovered_10006dc0(apvStack_90,&pvStack_78);
      recovered_10002e70(pvStack_78);
      recovered_1000395c(param_1,apvStack_90);
      recovered_10002e70(apvStack_90[0]);
      return;
    }
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*puVar4;
    }
    if (puVar1[uVar6] == '%') {
      uVar6 = uVar6 + 1;
      if ((ulong)puVar4[1] <= uVar6) {
        recovered_100064b8((long *)apvStack_90,((uintptr_t)pf_module_state+0x2485U));
        recovered_10008790(apvStack_90);
LAB_1001525c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10015260);
        (*pcVar3)();
      }
      cVar2 = puVar1[uVar6];
      if (cVar2 == '%') {
        recovered_10006c48((long *)&pvStack_78,0x25);
      }
      else {
        if ((ulong)param_4[1] <= uVar7) {
          recovered_100064b8((long *)apvStack_90,((uintptr_t)pf_module_state+0x249fU));
          recovered_10008790(apvStack_90);
          goto LAB_1001525c;
        }
        uVar5 = uVar7 + 1;
        object = (char *)(*param_4 + uVar7 * 0x28);
        uVar7 = uVar5;
        if (cVar2 == 'd') {
LAB_10015164:
          uVar5 = recovered_10004088(object);
          recovered_100152c4((long *)&pvStack_78,uVar5);
        }
        else if (cVar2 == 'f') {
          dVar8 = recovered_10004124(object);
          recovered_10003f80(dVar8,(long *)&pvStack_78);
        }
        else {
          if (cVar2 != 's') {
            if (cVar2 != 'i') {
              recovered_100064b8(alStack_a8,((uintptr_t)pf_module_state+0x24c2U));
              recovered_10008874((long *)apvStack_90,alStack_a8,(ulong)(uint)(int)cVar2);
              recovered_10008790(apvStack_90);
              goto LAB_1001525c;
            }
            goto LAB_10015164;
          }
          recovered_10003c6c((long *)apvStack_90,object);
          recovered_10003fd8((long *)&pvStack_78,apvStack_90);
          recovered_10002e70(apvStack_90[0]);
        }
      }
    }
    else {
      recovered_10006c48((long *)&pvStack_78,puVar1[uVar6]);
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

#undef DAT_10017864
#undef alStack_a8
#undef uStack_68
#undef uStack_70
#undef pvStack_78
#undef apvStack_90

#undef PTR_recovered_10015024_1001cbe8
#define PTR_recovered_10015024_1001cbe8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6900U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015034
 */

void recovered_10015034(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10015024_1001cbe8;
  return;
}

#undef PTR_recovered_10015024_1001cbe8

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define alStack_a8 (*(long (*)[3])(frame + 16))
#define uStack_68 (*(undefined8 *)(frame + 80))
#define local_90 (*(void * (*)[3])(frame + 40))
#define local_78 (*(void * *)(frame + 64))
#define local_70 (*(undefined8 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001505c
 */

void recovered_1001505c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  unsigned char frame[216] = {0};

  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *object;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;

  uVar7 = 1;
  recovered_100114c0(((uintptr_t)pf_module_state+0x228bU),(long)param_4,1,0xffffffffffffffff);
  puVar4 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x228bU),param_4,0);
  uVar6 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = (void *)0x0;
  do {
    if ((ulong)puVar4[1] <= uVar6) {
      recovered_10006dc0(local_90,&local_78);
      recovered_10002e70(local_78);
      recovered_1000395c(param_1,local_90);
      recovered_10002e70(local_90[0]);
      return;
    }
    puVar1 = &DAT_10017864;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*puVar4;
    }
    if (puVar1[uVar6] == '%') {
      uVar6 = uVar6 + 1;
      if ((ulong)puVar4[1] <= uVar6) {
        recovered_100064b8((long *)local_90,((uintptr_t)pf_module_state+0x2485U));
        recovered_10008790(local_90);
LAB_1001525c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10015260);
        (*pcVar3)();
      }
      cVar2 = puVar1[uVar6];
      if (cVar2 == '%') {
        recovered_10006c48((long *)&local_78,0x25);
      }
      else {
        if ((ulong)param_4[1] <= uVar7) {
          recovered_100064b8((long *)local_90,((uintptr_t)pf_module_state+0x249fU));
          recovered_10008790(local_90);
          goto LAB_1001525c;
        }
        uVar5 = uVar7 + 1;
        object = (char *)(*param_4 + uVar7 * 0x28);
        uVar7 = uVar5;
        if (cVar2 == 'd') {
LAB_10015164:
          uVar5 = recovered_10004088(object);
          recovered_100152c4((long *)&local_78,uVar5);
        }
        else if (cVar2 == 'f') {
          dVar8 = recovered_10004124(object);
          recovered_10003f80(dVar8,(long *)&local_78);
        }
        else {
          if (cVar2 != 's') {
            if (cVar2 != 'i') {
              recovered_100064b8(alStack_a8,((uintptr_t)pf_module_state+0x24c2U));
              recovered_10008874((long *)local_90,alStack_a8,(ulong)(uint)(int)cVar2);
              recovered_10008790(local_90);
              goto LAB_1001525c;
            }
            goto LAB_10015164;
          }
          recovered_10003c6c((long *)local_90,object);
          recovered_10003fd8((long *)&local_78,local_90);
          recovered_10002e70(local_90[0]);
        }
      }
    }
    else {
      recovered_10006c48((long *)&local_78,puVar1[uVar6]);
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

#undef DAT_10017864
#undef alStack_a8
#undef uStack_68
#undef local_90
#undef local_78
#undef local_70

#define local_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100152c4
 */

long * recovered_100152c4(long *param_1,ulong param_2)

{
  unsigned char frame[104] = {0};


  recovered_10003f24(local_38,param_2);
  recovered_10003fd8(param_1,local_38);
  recovered_10002e70(local_38[0]);
  return param_1;
}

#undef local_38

#undef PTR_recovered_1001535c_1001cc30
#define PTR_recovered_1001535c_1001cc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6948U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015320
 */

undefined8 * recovered_10015320(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_1001535c_1001cc30;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_1001535c_1001cc30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001535c
 */

void recovered_1001535c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015360
 */

void recovered_10015360(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#undef DAT_100187c5
#define DAT_100187c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24ddU)))
#define pvStack_98 (*(void * *)(frame + 16))
#define lStack_78 (*(long *)(frame + 48))
#define plStack_80 (*(long * *)(frame + 40))
#define uStack_88 (*(undefined8 *)(frame + 32))
#define uStack_90 (*(undefined8 *)(frame + 24))
#define uStack_58 (*(undefined8 *)(frame + 80))
#define uStack_60 (*(undefined8 *)(frame + 72))
#define pvStack_68 (*(void * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015364
 */

void recovered_10015364(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[200] = {0};

  char *pcVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2299U),param_4,3,3);
  puVar6 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2299U),(long *)param_4,0);
  puVar7 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2299U),(long *)param_4,1);
  puVar8 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2299U),(long *)param_4,2);
  uStack_60 = 0;
  uStack_58 = 0;
  pvStack_68 = (void *)0x0;
  bVar5 = recovered_100071cc(puVar7,&DAT_1001875c);
  if (bVar5) {
    recovered_10014548((long *)&plStack_80,puVar6);
    if (lStack_78 == 0) {
      recovered_10006dc0(&pvStack_98,puVar6);
    }
    else {
      uVar10 = 0;
      plVar3 = plStack_80;
      for (lVar11 = lStack_78 << 4; lVar11 != 0; lVar11 = lVar11 + -0x10) {
        recovered_10015668((long *)&pvStack_68,puVar6,uVar10,*plVar3 - uVar10);
        recovered_10003fd8((long *)&pvStack_68,puVar8);
        uVar10 = plVar3[1];
        plVar3 = plVar3 + 2;
      }
      recovered_10015668((long *)&pvStack_68,puVar6,uVar10,puVar6[1] - uVar10);
      pvStack_98 = pvStack_68;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      pvStack_68 = (void *)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    lStack_78 = 0;
    recovered_10002e70(plStack_80);
  }
  else {
    bVar5 = recovered_100071cc(puVar7,&DAT_100187c5);
    if (bVar5) {
      recovered_1000668c((long *)&pvStack_68,puVar6[1]);
      lVar11 = puVar6[1];
      pbVar4 = &DAT_10017864;
      if ((byte *)*puVar6 != (byte *)0x0) {
        pbVar4 = (byte *)*puVar6;
      }
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        bVar2 = *pbVar4;
        bVar5 = recovered_10003274((uint)bVar2);
        if (bVar5) {
          recovered_10003fd8((long *)&pvStack_68,puVar8);
        }
        else {
          recovered_10006c48((long *)&pvStack_68,bVar2);
        }
        pbVar4 = pbVar4 + 1;
      }
    }
    else {
      uVar10 = puVar7[1];
      if (uVar10 == 0) {
        recovered_10006dc0(&pvStack_98,puVar6);
        goto LAB_100155f0;
      }
      uVar12 = 0;
      while (uVar12 < (ulong)puVar6[1]) {
        pcVar1 = &DAT_10017864;
        if ((char *)*puVar7 != (char *)0x0) {
          pcVar1 = (char *)*puVar7;
        }
        uVar9 = recovered_1001460c(puVar6,pcVar1,uVar10,uVar12);
        if (uVar9 == 0xffffffffffffffff) {
          recovered_10015668((long *)&pvStack_68,puVar6,uVar12,puVar6[1] - uVar12);
          break;
        }
        recovered_10015668((long *)&pvStack_68,puVar6,uVar12,uVar9 - uVar12);
        recovered_10003fd8((long *)&pvStack_68,puVar8);
        uVar10 = puVar7[1];
        uVar12 = uVar10 + uVar9;
      }
    }
    pvStack_98 = pvStack_68;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    pvStack_68 = (void *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
LAB_100155f0:
  recovered_10002e70(pvStack_68);
  recovered_1000395c(param_1,&pvStack_98);
  recovered_10002e70(pvStack_98);
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef DAT_100187c5
#undef pvStack_98
#undef lStack_78
#undef plStack_80
#undef uStack_88
#undef uStack_90
#undef uStack_58
#undef uStack_60
#undef pvStack_68

#undef PTR_recovered_1001535c_1001cc30
#define PTR_recovered_1001535c_1001cc30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6948U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001536c
 */

void recovered_1001536c(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_1001535c_1001cc30;
  return;
}

#undef PTR_recovered_1001535c_1001cc30

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#undef DAT_1001875c
#define DAT_1001875c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2474U)))
#undef DAT_100187c5
#define DAT_100187c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24ddU)))
#define local_98 (*(void * *)(frame + 16))
#define local_90 (*(undefined8 *)(frame + 24))
#define local_80 (*(long * *)(frame + 40))
#define local_78 (*(long *)(frame + 48))
#define local_68 (*(void * *)(frame + 64))
#define uStack_88 (*(undefined8 *)(frame + 32))
#define local_60 (*(undefined8 *)(frame + 72))
#define uStack_58 (*(undefined8 *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015394
 */

void recovered_10015394(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[200] = {0};

  char *pcVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;

  recovered_100114c0(((uintptr_t)pf_module_state+0x2299U),param_4,3,3);
  puVar6 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2299U),(long *)param_4,0);
  puVar7 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2299U),(long *)param_4,1);
  puVar8 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x2299U),(long *)param_4,2);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  bVar5 = recovered_100071cc(puVar7,&DAT_1001875c);
  if (bVar5) {
    recovered_10014548((long *)&local_80,puVar6);
    if (local_78 == 0) {
      recovered_10006dc0(&local_98,puVar6);
    }
    else {
      uVar10 = 0;
      plVar3 = local_80;
      for (lVar11 = local_78 << 4; lVar11 != 0; lVar11 = lVar11 + -0x10) {
        recovered_10015668((long *)&local_68,puVar6,uVar10,*plVar3 - uVar10);
        recovered_10003fd8((long *)&local_68,puVar8);
        uVar10 = plVar3[1];
        plVar3 = plVar3 + 2;
      }
      recovered_10015668((long *)&local_68,puVar6,uVar10,puVar6[1] - uVar10);
      local_98 = local_68;
      uStack_88 = uStack_58;
      local_90 = local_60;
      local_68 = (void *)0x0;
      local_60 = 0;
      uStack_58 = 0;
    }
    local_78 = 0;
    recovered_10002e70(local_80);
  }
  else {
    bVar5 = recovered_100071cc(puVar7,&DAT_100187c5);
    if (bVar5) {
      recovered_1000668c((long *)&local_68,puVar6[1]);
      lVar11 = puVar6[1];
      pbVar4 = &DAT_10017864;
      if ((byte *)*puVar6 != (byte *)0x0) {
        pbVar4 = (byte *)*puVar6;
      }
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        bVar2 = *pbVar4;
        bVar5 = recovered_10003274((uint)bVar2);
        if (bVar5) {
          recovered_10003fd8((long *)&local_68,puVar8);
        }
        else {
          recovered_10006c48((long *)&local_68,bVar2);
        }
        pbVar4 = pbVar4 + 1;
      }
    }
    else {
      uVar10 = puVar7[1];
      if (uVar10 == 0) {
        recovered_10006dc0(&local_98,puVar6);
        goto LAB_100155f0;
      }
      uVar12 = 0;
      while (uVar12 < (ulong)puVar6[1]) {
        pcVar1 = &DAT_10017864;
        if ((char *)*puVar7 != (char *)0x0) {
          pcVar1 = (char *)*puVar7;
        }
        uVar9 = recovered_1001460c(puVar6,pcVar1,uVar10,uVar12);
        if (uVar9 == 0xffffffffffffffff) {
          recovered_10015668((long *)&local_68,puVar6,uVar12,puVar6[1] - uVar12);
          break;
        }
        recovered_10015668((long *)&local_68,puVar6,uVar12,uVar9 - uVar12);
        recovered_10003fd8((long *)&local_68,puVar8);
        uVar10 = puVar7[1];
        uVar12 = uVar10 + uVar9;
      }
    }
    local_98 = local_68;
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_68 = (void *)0x0;
    local_60 = 0;
    uStack_58 = 0;
  }
LAB_100155f0:
  recovered_10002e70(local_68);
  recovered_1000395c(param_1,&local_98);
  recovered_10002e70(local_98);
  return;
}

#undef DAT_10017864
#undef DAT_1001875c
#undef DAT_100187c5
#undef local_98
#undef local_90
#undef local_80
#undef local_78
#undef local_68
#undef uStack_88
#undef local_60
#undef uStack_58

#define local_38 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015668
 */

ulonglong recovered_10015668(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[104] = {0};

  ulonglong uVar1;

  recovered_10014264(local_38,param_2,param_3,param_4);
  uVar1 = recovered_100156d0(param_1,local_38);
  recovered_10002e70(local_38[0]);
  return uVar1;
}

#undef local_38

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100156d0
 */

ulonglong recovered_100156d0(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_10017864;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10006608(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_1000668c(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_1000668c(param_1,uVar4 + lVar7);
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
  return (ulonglong)param_1;
}

#undef DAT_10017864
#undef lStack_38

#undef PTR_recovered_10015724_1001cc78
#define PTR_recovered_10015724_1001cc78 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6990U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100156e8
 */

undefined8 * recovered_100156e8(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10015724_1001cc78;
  *param_1 = puVar1;
  return param_1;
}

#undef PTR_recovered_10015724_1001cc78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015724
 */

void recovered_10015724(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015728
 */

void recovered_10015728(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(data);
  return;
}


#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001572c
 */

void recovered_1001572c(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x22a5U),param_4,1,1);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x22a5U),(long *)param_4,0);
  lVar3 = 0;
  lVar4 = puVar2[1];
  pbVar1 = &DAT_10017864;
  if ((byte *)*puVar2 != (byte *)0x0) {
    pbVar1 = (byte *)*puVar2;
  }
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if ((*pbVar1 & 0xc0) != 0x80) {
      lVar3 = lVar3 + 1;
    }
    pbVar1 = pbVar1 + 1;
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 8) = lVar3;
  return;
}

#undef DAT_10017864

#undef PTR_recovered_10015724_1001cc78
#define PTR_recovered_10015724_1001cc78 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6990U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015734
 */

void recovered_10015734(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e3c(0x10);
  *puVar1 = &PTR_recovered_10015724_1001cc78;
  return;
}

#undef PTR_recovered_10015724_1001cc78

#undef DAT_10017864
#define DAT_10017864 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001575c
 */

void recovered_1001575c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;

  recovered_100114c0(((uintptr_t)pf_module_state+0x22a5U),param_4,1,1);
  puVar2 = (undefined8 *)recovered_1001259c(((uintptr_t)pf_module_state+0x22a5U),(long *)param_4,0);
  lVar3 = 0;
  lVar4 = puVar2[1];
  pbVar1 = &DAT_10017864;
  if ((byte *)*puVar2 != (byte *)0x0) {
    pbVar1 = (byte *)*puVar2;
  }
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if ((*pbVar1 & 0xc0) != 0x80) {
      lVar3 = lVar3 + 1;
    }
    pbVar1 = pbVar1 + 1;
  }
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 8) = lVar3;
  return;
}

#undef DAT_10017864

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100157f4
 */

void recovered_100157f4(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000679c((undefined8 *)(param_1 + 0x30));
  recovered_1000679c((undefined8 *)(param_1 + 0x18));
  recovered_10011114((long *)param_1);
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015824
 */

long * recovered_10015824(long *param_1)

{
  unsigned char frame[64] = {0};

  void *data;

  data = (void *)0x0;
  if (*param_1 != 0) {
    data = (void *)recovered_10015854(*param_1);
  }
  recovered_10002e70(data);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015854
 */

ulonglong recovered_10015854(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10009128((undefined8 *)(param_1 + 0xb8));
  recovered_10010238((long *)(param_1 + 0xa0));
  recovered_100157f4(param_1 + 0x50);
  recovered_1000679c((undefined8 *)(param_1 + 0x30));
  recovered_1000679c((undefined8 *)(param_1 + 0x18));
  recovered_100067f4((long *)param_1);
  recovered_10002e70(*(void **)param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001588c
 */

void recovered_1001588c(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  void *buffer;

  lVar1 = *param_1;
  *param_1 = param_2;
  buffer = (void *)0x0;
  if (lVar1 != 0) {
    buffer = (void *)recovered_10015854(lVar1);
  }
  recovered_10000c54(buffer);
  return;
}
