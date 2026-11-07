/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6244U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x82010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x8201008cU))
#undef DAT_40010238
#define DAT_40010238 (*(uint8_t *)(0x82010238U))
#undef DAT_4001023c
#define DAT_4001023c (*(uint8_t *)(0x8201023cU))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x82010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x8201008cU))
#undef _DAT_40010238
#define _DAT_40010238 (*(int *)(0x82010238U))
#undef _DAT_4001023c
#define _DAT_4001023c (*(uint *)(0x8201023cU))
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

  DAT_100100e0 = 0;
  uStack_48 = 0;
  DAT_100100e8 = 0;
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
    recovered_10001d28(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_100100e8 == 0) {
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
  DAT_100100e0 = 1;
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
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

#undef DAT_100100e0
#define DAT_100100e0 (*(byte *)(((uintptr_t)pf_module_state + 0x6244U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x82010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x8201008cU))
#undef DAT_40010238
#define DAT_40010238 (*(uint8_t *)(0x82010238U))
#undef DAT_4001023c
#define DAT_4001023c (*(uint8_t *)(0x8201023cU))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x82010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x8201008cU))
#undef _DAT_40010238
#define _DAT_40010238 (*(int *)(0x82010238U))
#undef _DAT_4001023c
#define _DAT_4001023c (*(uint *)(0x8201023cU))
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
  if ((DAT_100100e0 & 1) == 0) {
    DAT_100100e8 = 0;
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
      recovered_10001d28(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_100100e8 == 0) {
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
    DAT_100100e0 = 1;
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
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

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_100100e8

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_100100e8

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_100100e8

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_100100e8

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
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
    for (puVar2 = &DAT_100100e8; puVar2 = (ulong *)*puVar2, puVar2 != (ulong *)0x0;
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

#undef DAT_100100e8

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
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000c54(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000c98(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800;
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


#undef DAT_1000a030
#define DAT_1000a030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

undefined * recovered_10000fe8(void)

{
  unsigned char frame[64] = {0};

  return &DAT_1000a030;
}

#undef DAT_1000a030

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6164U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ff4
 */

undefined ** recovered_10000ff4(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

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


#undef DAT_10009ea0
#define DAT_10009ea0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
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
    return (double)iVar1 * DAT_10009ea0 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_10009ea0

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


#undef DAT_10009ea8
#define DAT_10009ea8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_10009ea8);
}

#undef DAT_10009ea8

#undef DAT_10009eb0
#define DAT_10009eb0 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10009eb8
#define DAT_10009eb8 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10009ec0
#define DAT_10009ec0 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10009ec8
#define DAT_10009ec8 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012e0
 */

double recovered_100012e0(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_10009eb0 < param_1; param_1 = param_1 + DAT_10009ec8) {
  }
  for (; param_1 < DAT_10009eb8; param_1 = param_1 + DAT_10009ec0) {
  }
  return param_1;
}

#undef DAT_10009eb0
#undef DAT_10009eb8
#undef DAT_10009ec0
#undef DAT_10009ec8

#undef DAT_10009ed0
#define DAT_10009ed0 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001324
 */

double recovered_10001324(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012e0(value);
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10009ed0;
}

#undef DAT_10009ed0

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
LAB_1001c258:
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
        recovered_10001c10((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x1c2U));
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
        if (uVar5 != 0x58) goto LAB_1001c258;
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


#undef str_1000a035
#define str_1000a035 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x199U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

void recovered_10001c10(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_1000a035;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001bd4(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1000a035

#undef str_1000a03c
#define str_1000a03c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_1000a04d
#define str_1000a04d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
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

  pcVar1 = str_1000a03c;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_1000a04d;
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

#undef str_1000a03c
#undef str_1000a04d
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

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x624cU)))
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
      puVar3 = (ulong *)&DAT_100100e8;
      if (DAT_100100e8 != 0) {
        puVar3 = (ulong *)(*param_3 + 8);
      }
      *puVar3 = (ulong)plVar1;
      *param_3 = (ulong)plVar1;
    }
  }
  return;
}

#undef DAT_100100e8

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x82010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x82010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x82010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x82010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x82010808U))
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

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
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
        if (DAT_100100f8 != 0) {
          DAT_100100f8 = DAT_100100f8 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_100100f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100100f8 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_10010100 + DAT_100100f8;
          DAT_100100f8 = DAT_100100f8 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x82010840U))
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

  if ((DAT_100100f8 != 0) || (param_1 != 0)) {
    if (DAT_100100f8 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000ce4(local_230,&DAT_10010100,DAT_100100f8);
      uVar2 = DAT_100100f8;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002cb0(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(local_230);
    }
    DAT_100100f8 = 0;
  }
  return;
}

#undef DAT_100100f8
#undef DAT_10010100
#undef DAT_40010840
#undef _DAT_40010840
#undef local_230

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x82010840U))
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

  if (DAT_100100f8 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000ce4(auStack_230,&DAT_10010100,DAT_100100f8);
    uVar2 = DAT_100100f8;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002cb0(0x40);
  if ((bVar1) && (_DAT_40010840 != 0)) {
    (*(code *)(ulong)_DAT_40010840)(auStack_230);
  }
  DAT_100100f8 = 0;
  return;
}

#undef DAT_100100f8
#undef DAT_10010100
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x82010840U))
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

  if (DAT_100100f8 != 0) {
    if (DAT_100100f8 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000ce4(auStack_230,&DAT_10010100,DAT_100100f8);
      uVar2 = DAT_100100f8;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002cb0(0x40);
    if ((bVar1) && (_DAT_40010840 != 0)) {
      (*(code *)(ulong)_DAT_40010840)(auStack_230);
    }
    DAT_100100f8 = 0;
  }
  return;
}

#undef DAT_100100f8
#undef DAT_10010100
#undef DAT_40010840
#undef _DAT_40010840
#undef auStack_230

#undef DAT_1000a061
#define DAT_1000a061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000200c
 */

void recovered_1000200c(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_1000a061;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001d00(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001eb8(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000a061
#undef acStack_160

#undef DAT_1000a14b
#define DAT_1000a14b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
#undef str_1000a064
#define str_1000a064 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_1000a087
#define str_1000a087 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebU)))
#undef str_1000a0c0
#define str_1000a0c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1000a0f5
#define str_1000a0f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000a11b
#define str_1000a11b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
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

  recovered_100020c4(str_1000a064);
  recovered_100020c4(str_1000a087);
  recovered_100020c4(str_1000a0c0);
  recovered_100020c4(str_1000a0f5);
  recovered_100020c4(str_1000a11b);
  pcVar4 = &DAT_1000a14b;
  for (uVar3 = recovered_10000e58(&DAT_1000a14b); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_100100f8 != 0) {
        DAT_100100f8 = DAT_100100f8 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f70(1);
      }
      else {
        if (DAT_100100f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100100f8 == -2) {
          recovered_10001f70(0);
        }
        pcVar1 = &DAT_10010100 + DAT_100100f8;
        DAT_100100f8 = DAT_100100f8 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000a14b
#undef DAT_100100f8
#undef DAT_10010100
#undef str_1000a064
#undef str_1000a087
#undef str_1000a0c0
#undef str_1000a0f5
#undef str_1000a11b

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
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
        if (DAT_100100f8 != 0) {
          DAT_100100f8 = DAT_100100f8 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f70(1);
        }
        else {
          if (DAT_100100f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100100f8 == -2) {
            recovered_10001f70(0);
          }
          pcVar1 = &DAT_10010100 + DAT_100100f8;
          DAT_100100f8 = DAT_100100f8 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_1000a14b
#define DAT_1000a14b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x625cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6264U)))
#undef str_1000a14e
#define str_1000a14e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
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

  recovered_100020c4(str_1000a14e);
  pcVar4 = &DAT_1000a14b;
  for (uVar3 = recovered_10000e58(&DAT_1000a14b); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_100100f8 != 0) {
        DAT_100100f8 = DAT_100100f8 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f70(1);
      }
      else {
        if (DAT_100100f8 - 0x1ffU < 0xfffffffffffffdff || DAT_100100f8 == -2) {
          recovered_10001f70(0);
        }
        pcVar1 = &DAT_10010100 + DAT_100100f8;
        DAT_100100f8 = DAT_100100f8 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000a14b
#undef DAT_100100f8
#undef DAT_10010100
#undef str_1000a14e

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x82010844U))
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


#undef DAT_1000a061
#define DAT_1000a061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
#undef str_1000a1e2
#define str_1000a1e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#undef str_1000a1ef
#define str_1000a1ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x353U)))
#undef str_1000a1fd
#define str_1000a1fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
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
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000e7c(param_1,str_1000a1e2);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c(param_1,str_1000a1ef);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c(param_1,str_1000a1fd);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
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
        recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_1000a061);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100023d8(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
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
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d54(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_1000a061);
  return puVar4;
}

#undef DAT_1000a061
#undef DAT_10010058
#undef str_1000a1e2
#undef str_1000a1ef
#undef str_1000a1fd
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x82010834U))
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

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
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
        DAT_10010058 = 0xc;
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

#undef DAT_10010058

#undef DAT_1000a061
#define DAT_1000a061 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c5U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
#undef str_1000a1e2
#define str_1000a1e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#undef str_1000a1ef
#define str_1000a1ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x353U)))
#undef str_1000a1fd
#define str_1000a1fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
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
    DAT_10010058 = 0x16;
    return;
  }
  iVar2 = recovered_10000e7c(param_1,str_1000a1e2);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c(param_1,str_1000a1ef);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c(param_1,str_1000a1fd);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c10(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
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
        recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_1000a061);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100023d8(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
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
    DAT_10010058 = 0xc;
    return;
  }
  recovered_10000d54(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d00((char *)(puVar4 + 1),0xf1,&DAT_1000a061);
  return;
}

#undef DAT_1000a061
#undef DAT_10010058
#undef str_1000a1e2
#undef str_1000a1ef
#undef str_1000a1fd
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


#undef DAT_1000a034
#define DAT_1000a034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x198U)))
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
      bVar2 = recovered_10002114((long)text,0x1fe,&DAT_1000a034,0);
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

#undef DAT_1000a034

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


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027cc
 */

undefined8 recovered_100027cc(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10010058 = 0x16;
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
  DAT_10010058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

undefined8 recovered_10002860(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
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
        DAT_10010058 = 5;
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

#undef DAT_10010058

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


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002948
 */

undefined8 recovered_10002948(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
  }
  else {
    uVar1 = recovered_10002980(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10010058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_4001083c
#define _DAT_4001083c (*(uint *)(0x8201083cU))
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

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x61bcU)))
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
    DAT_10010058 = 0x16;
  }
  else {
    recovered_10000d54(&uStack_2c,0,0xc);
    uVar1 = recovered_100023d8(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010058 = 2;
    }
    else {
      uVar1 = recovered_10002a60(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002980(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_10010058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_10010058
#undef uStack_28
#undef uStack_2c

#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_40010838
#define _DAT_40010838 (*(uint *)(0x82010838U))
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


#undef DAT_1000a171
#define DAT_1000a171 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d5U)))
#undef str_1000a174
#define str_1000a174 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d8U)))
#undef str_1000a181
#define str_1000a181 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_1000a18b
#define str_1000a18b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2efU)))
#undef str_1000a19f
#define str_1000a19f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_1000a1ad
#define str_1000a1ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x311U)))
#undef str_1000a1bf
#define str_1000a1bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x323U)))
#undef str_1000a1cb
#define str_1000a1cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32fU)))
#undef str_1000a1dc
#define str_1000a1dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf4
 */

char * recovered_10002bf4(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000a171;
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
    return str_1000a174;
  case 5:
    return str_1000a181;
  case 9:
    return str_1000a18b;
  case 0xc:
    return str_1000a19f;
  case 0xd:
    return str_1000a1ad;
  default:
    if (param_1 == 0x11) {
      return str_1000a1bf;
    }
    if (param_1 == 0x16) {
      return str_1000a1cb;
    }
switchD_10002c20_caseD_1:
    return str_1000a1dc;
  }
}

#undef DAT_1000a171
#undef str_1000a174
#undef str_1000a181
#undef str_1000a18b
#undef str_1000a19f
#undef str_1000a1ad
#undef str_1000a1bf
#undef str_1000a1cb
#undef str_1000a1dc

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


#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6254U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9c
 */

void recovered_10002c9c(void)

{
  unsigned char frame[64] = {0};

  DAT_100100f0 = DAT_100100f0 + 1;
  return;
}

#undef DAT_100100f0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x82010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x82010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x82010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x82010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x82010808U))
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


#undef DAT_10010300
#define DAT_10010300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6464U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e1c
 */

void recovered_10002e1c(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = DAT_10010300;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10010300 = param_1;
  return;
}

#undef DAT_10010300

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
#define DAT_40010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x82010850U))
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


#undef DAT_10010300
#define DAT_10010300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6464U)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x82010850U))
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

  lVar2 = DAT_10010300;
  if (DAT_10010300 != 0) {
    puVar1 = (undefined8 *)(DAT_10010300 + 0x10);
    DAT_10010300 = *(long *)(DAT_10010300 + 0x10);
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

#undef DAT_10010300
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


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x646cU)))
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

  puVar2 = &DAT_10010308;
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

#undef DAT_10010308
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010300
#define DAT_10010300 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6464U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003038
 */

void recovered_10003038(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010300;
  if (DAT_10010300 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002df0();
  }
  *(undefined1 *)(DAT_10010300 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002fd4(puVar1);
}

#undef DAT_10010300

#undef DAT_10010308
#define DAT_10010308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x646cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003068
 */

void recovered_10003068(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_10010308;
  DAT_10010308 = param_1;
  return;
}

#undef DAT_10010308

#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x646cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

void recovered_1000307c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010308;
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

#undef DAT_10010308

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


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x646cU)))
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

  if (DAT_10010308 != (long *)0x0) {
    DAT_10010308 = (long *)*DAT_10010308;
  }
  puVar2 = (undefined8 *)recovered_100030e0(param_1);
  plVar3 = DAT_10010308;
  while( true ) {
    DAT_10010308 = plVar3;
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

#undef DAT_10010308
#undef uStack_50
#undef uStack_48

#undef DAT_10010308
#define DAT_10010308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x646cU)))
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

  plVar3 = DAT_10010308;
  while( true ) {
    DAT_10010308 = plVar3;
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

#undef DAT_10010308
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


#undef DAT_100100b0
#define DAT_100100b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6214U)))
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
      if ((undefined *)*puVar4 == &DAT_100100b0) {
        param_1 = (undefined8 *)puVar4[2];
      }
    }
  }
  return bVar3;
}

#undef DAT_100100b0

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

#undef DAT_10009f10
#define DAT_10009f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
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
                local_68 = pbVar7 + *(long *)(&DAT_10009f10 + uVar4 * 8) * (uVar5 & 0x7fffffff);
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

#undef DAT_10009f10
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


#undef DAT_10009f80
#define DAT_10009f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef LAB_1000c028
#define LAB_1000c028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x218cU)))
#undef LAB_1000c0a8
#define LAB_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220cU)))
#undef UNK_10009f88
#define UNK_10009f88 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef _DAT_10009f80
#define _DAT_10009f80 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef lRam0000000010009f88
#define lRam0000000010009f88 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#define pcStack_58 (*(char * *)(frame + 16))
#define local_50 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10003874(void *data,ulong size,float pixels)

{
  unsigned char frame[136] = {0};

  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;

  if (data == (void *)0x0) {
    return (void *)0x0;
  }
  if (size == 0) {
    return (void *)0x0;
  }
  recovered_10009a2c(&pcStack_58,data,(undefined1 *)((long)data + size));
  if (local_50 < 4) {
LAB_1000396c:
    if (local_50 != 0) {
LAB_10003970:
      if ((*pcStack_58 == -0x80) || (*pcStack_58 == '%')) {
        plVar2 = recovered_10002e3c(0x1890);
        recovered_10000d70((undefined1 *)(plVar2 + 4),0x1870);
        *plVar2 = (long)&LAB_1000c0a8;
        lVar5 = _DAT_10009f80;
        plVar2[2] = lRam0000000010009f88;
        plVar2[1] = lVar5;
        plVar2[3] = 0x4069000000000000;
        *(undefined4 *)(plVar2 + 4) = 4;
        lVar5 = -0x1800;
        do {
          *(undefined8 *)((long)plVar2 + lVar5 + 0x1828) = 0;
          *(undefined8 *)((long)plVar2 + lVar5 + 0x1838) = 0;
          *(undefined8 *)((long)plVar2 + lVar5 + 0x1830) = 0;
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != 0);
        plVar2[0x305] = 0;
        plVar2[0x307] = 0;
        plVar2[0x306] = 0;
        recovered_10007fb4(plVar2 + 0x308);
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_58);
        if ((uVar4 & 1) != 0) goto LAB_10003a10;
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = recovered_10004734((long *)&pcStack_58,0);
    if ((uVar1 != 0x74727565) && (uVar1 != 0x10000)) goto LAB_10003970;
    plVar2 = recovered_10002e3c(0x150);
    recovered_10000d70((undefined1 *)(plVar2 + 0xc),0xf0);
    *plVar2 = (long)&LAB_1000c028;
    plVar2[1] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[4] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[7] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    *(undefined4 *)(plVar2 + 0xf) = 0;
    *(undefined4 *)(plVar2 + 0x11) = 0;
    *(undefined4 *)(plVar2 + 0x13) = 0;
    *(undefined2 *)(plVar2 + 0x15) = 0;
    *(undefined2 *)(plVar2 + 0x16) = 0;
    plVar2[0x18] = 0;
    *(undefined2 *)((long)plVar2 + 0xd6) = 0;
    *(undefined2 *)((long)plVar2 + 0xde) = 0;
    plVar2[0x1e] = 0;
    recovered_100052c4(plVar2 + 0x20);
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_58);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      goto LAB_1000396c;
    }
LAB_10003a10:
    puVar3 = recovered_10002e3c(0x60);
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    *puVar3 = plVar2;
    *(float *)(puVar3 + 1) = pixels;
  }
  local_50 = 0;
  recovered_10002e70(pcStack_58);
  return puVar3;
}

#undef DAT_10009f80
#undef LAB_1000c028
#undef LAB_1000c0a8
#undef UNK_10009f88
#undef _DAT_10009f80
#undef lRam0000000010009f88
#undef pcStack_58
#undef local_50

#define local_48 (*(undefined1 * *)(frame + 16))
#define local_40 (*(ulong *)(frame + 24))
#define uStack_38 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003adc
 */

void * recovered_10003adc(char *path,float pixels)

{
  unsigned char frame[120] = {0};

  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvVar4;

  local_40 = 0;
  uStack_38 = 0;
  local_48 = (undefined1 *)0x0;
  if (path != (char *)0x0) {
    piVar1 = recovered_1000219c(path,((uintptr_t)pf_module_state+0x3beU));
    pvVar4 = (void *)0x0;
    if (piVar1 == (int *)0x0) goto LAB_10003b34;
    uVar2 = recovered_100027cc(piVar1,0,2);
    if ((((int)uVar2 == 0) && (uVar3 = recovered_10002860((long)piVar1), -1 < (long)uVar3)) &&
       (uVar2 = recovered_100027cc(piVar1,0,0), (int)uVar2 == 0)) {
      recovered_100071fc((long *)&local_48,uVar3);
      if ((local_40 == 0) ||
         (uVar3 = recovered_10002528(local_48,1,local_40,piVar1), uVar3 == local_40)) {
        recovered_100024e4(piVar1);
        pvVar4 = recovered_10003874(local_48,local_40,pixels);
        goto LAB_10003b34;
      }
    }
    recovered_100024e4(piVar1);
  }
  pvVar4 = (void *)0x0;
LAB_10003b34:
  local_40 = 0;
  recovered_10002e70(local_48);
  return pvVar4;
}

#undef local_48
#undef local_40
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bcc
 */

void recovered_10003bcc(void *font,float pixels)

{
  unsigned char frame[64] = {0};

  if ((font != (void *)0x0) && (*(long *)font != 0)) {
    if (pixels <= 1.0) {
      pixels = 1.0;
    }
    *(float *)((long)font + 8) = pixels;
    recovered_1000963c((long *)((long)font + 0x10));
    *(undefined8 *)((long)font + 0x48) = 0;
    *(undefined8 *)((long)font + 0x30) = 0;
  }
  return;
}


/* Shared LP64 text composition recovered and checked against both CPUs.
 * Pooka's Free Software License. */
static const unsigned char pf_renderer_constant_1000b4f8[]={0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x43,0x00,0x2e,0x00,0x00,0x28,0x6e,0x75,0x6c,0x6c,0x29,0x00,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46,0x00,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x61,0x62,0x63,0x64,0x65,0x66,0x00,0x30,0x78,0x00,0x25,0x73,0x00,0x57,0x69,0x6e,0x74,0x65,0x72,0x4c,0x75,0x61,0x20,0x44,0x65,0x73,0x6b,0x74,0x6f,0x70,0x20,0x46,0x6f,0x72,0x20,0x57,0x69,0x6e,0x74,0x65,0x72,0x42,0x6f,0x6f,0x74,0x0d,0x0a,0x00,0x74,0x79,0x70,0x65,0x20,0x4c,0x75,0x61,0x20,0x63,0x6f,0x64,0x65,0x20,0x61,0x74,0x20,0x74,0x68,0x65,0x20,0x57,0x69,0x6e,0x74,0x65,0x72,0x42,0x6f,0x6f,0x74,0x20,0x70};
static const unsigned char pf_renderer_constant_1000b7ac[]={0xff,0xff,0x03,0x44,0x00,0x00,0x01,0x00,0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,0x10,0x00,0x11,0x00,0x12,0x00,0x13,0x00,0x14,0x00,0x15,0x00,0x16,0x00,0x17,0x00,0x18,0x00,0x19,0x00,0x1a,0x00,0x1b,0x00,0x1c,0x00,0x1d,0x00,0x1e,0x00,0x1f,0x00,0x20,0x00,0x21,0x00,0xff,0xff,0x03,0x08,0x00,0x00,0x01,0x00,0x02,0x00,0x03,0x00,0xff,0xff,0x03,0x22,0x00,0x00,0x01,0x00,0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,0x10,0x00,0x00,0x00,0xff,0xff,0x03,0x0a};

#undef DAT_1000b4f8
#define DAT_1000b4f8 (*(uint8_t *)(((uintptr_t)pf_renderer_constant_1000b4f8)))
#undef DAT_1000b7ac
#define DAT_1000b7ac (*(uint8_t *)(((uintptr_t)pf_renderer_constant_1000b7ac)))
#undef LAB_10004eb3
#define LAB_10004eb3 (*(uint8_t *)(0x10004eb3U))
#define uStack_1e0 (*(ulong *)(frame + 16))
#define lStack_168 (*(long *)(frame + 136))
#define puStack_158 (*(uchar * *)(frame + 152))
#define uStack_138 (*(ulong *)(frame + 184))
#define lStack_f0 (*(long *)(frame + 256))
#define local_1d8 (*(uint * *)(frame + 24))
#define local_1d0 (*(undefined8 * *)(frame + 32))
#define local_1c8 (*(double *)(frame + 40))
#define local_1c0 (*(void * *)(frame + 48))
#define local_1b8 (*(undefined8 ** *)(frame + 56))
#define local_1b0 (*(undefined8 * *)(frame + 64))
#define local_1a8 (*(uint *)(frame + 72))
#define local_1a4 (*(uint *)(frame + 76))
#define local_1a0 (*(uint *)(frame + 80))
#define local_19c (*(uint *)(frame + 84))
#define local_198 (*(uint *)(frame + 88))
#define local_194 (*(uint *)(frame + 92))
#define local_190 (*(ulonglong * *)(frame + 96))
#define local_188 (*(void * *)(frame + 104))
#define local_180 (*(ulong *)(frame + 112))
#define local_178 (*(void * *)(frame + 120))
#define local_170 (*(undefined1 (*)[8])(frame + 128))
#define local_160 (*(double *)(frame + 144))
#define local_150 (*(ulong *)(frame + 160))
#define local_140 (*(undefined8 * *)(frame + 176))
#define local_130 (*(undefined8 *)(frame + 192))
#define local_128 (*(undefined8 * *)(frame + 200))
#define local_120 (*(uint * *)(frame + 208))
#define local_118 (*(long * *)(frame + 216))
#define local_110 (*(undefined8 * *)(frame + 224))
#define local_108 (*(long *)(frame + 232))
#define local_f8 (*(undefined8 *)(frame + 248))
#define local_e8 (*(long *)(frame + 264))
#define local_e0 (*(long *)(frame + 272))
#define local_d8 (*(ulong *)(frame + 280))
#define local_d0 (*(undefined4 *)(frame + 288))
#define local_b8 (*(code * *)(frame + 312))
#define local_b0 (*(undefined * *)(frame + 320))
#define local_a8 (*(undefined1 * *)(frame + 328))
#define local_a0 (*(undefined1 * *)(frame + 336))
#define local_98 (*(undefined1 * *)(frame + 344))
#define local_7c (*(float *)(frame + 372))
#define local_78 (*(ulong *)(frame + 376))
#define local_70 (*(void * *)(frame + 384))
#define local_68 (*(uint *)(frame + 392))
#define local_64 (*(int *)(frame + 396))
#define local_60 (*(void * *)(frame + 400))
#define local_58 (*(undefined8 * *)(frame + 408))
#define local_50 (*(float *)(frame + 416))
#define local_4c (*(int *)(frame + 420))
#define local_48 (*(void * *)(frame + 424))
#define local_40 (*(byte * *)(frame + 432))
#define local_38 (*(undefined8 *)(frame + 440))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040fb
 */

void * recovered_10003c0c(void *font,char *text,int a,int b,int c,double spacing)

{
  unsigned char frame[528] = {0};

  byte bVar1;
  double dVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *pvVar10;
  ulonglong *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  long lVar28;
  bool bVar29;

  local_a8 = (undefined1 *)((long)(uintptr_t)(frame + 496) + -8);
  local_98 = (undefined1 *)&local_1d8;
  local_b8 = recovered_10003188;
  local_b0 = &DAT_1000b7ac;
  local_a0 = &LAB_10004eb3;
  local_1c8 = spacing;
  local_19c = c;
  local_198 = b;
  local_194 = a;
  recovered_10003068(&local_d8);
  puVar11 = (ulonglong *)0x0;
  if ((font != (void *)0x0) && (text != (char *)0x0)) {
    local_128 = font;
    if (*(long *)font != 0) {
      if (*text == '\0') {
        local_d0 = 0xffffffff;
        local_190 = recovered_10002e3c(0x20);
        local_d0 = 1;
        local_38 = local_190;
        recovered_1000454c(local_190);
        puVar11 = local_38;
      }
      else {
        local_140 = (undefined8 *)0x0;
        uStack_138 = 0;
        local_130 = 0;
        local_d0 = 2;
        local_38 = (ulonglong *)text;
        recovered_10004584((long *)&local_140);
        (*(uint64_t *)(void *)local_170) = (uint64_t)0x0;
        lStack_168 = 0;
        local_160 = 0.0;
        pbVar13 = (byte *)local_38;
LAB_100041d4:
        bVar1 = *pbVar13;
        if (bVar1 != 0) {
          local_38 = (ulonglong *)(pbVar13 + 1);
          uVar15 = (uint)bVar1;
          if (-1 < (char)bVar1) {
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15);
            local_d0 = 3;
            recovered_10009688((long *)local_170,(uint *)&local_f8);
            pbVar13 = (byte *)local_38;
            goto LAB_100041d4;
          }
          local_f8 = CONCAT44(PF_PART4(local_f8, 4),0xfffd);
          if ((uVar15 & 0xffffffe0) == 0xc0) {
            uVar5 = uVar15 & 0x1f;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15) & 0xffffffff0000001f;
            uStack_1e0 = 1;
          }
          else if ((uVar15 & 0xfffffff0) == 0xe0) {
            uVar5 = uVar15 & 0xf;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15) & 0xffffffff0000000f;
            uStack_1e0 = 2;
          }
          else {
            if ((uVar15 & 0xfffffff8) != 0xf0) {
              local_110 = (undefined8 *)CONCAT44(PF_PART4(local_110, 4),0xfffd);
              local_d0 = 4;
              recovered_10009688((long *)local_170,(uint *)&local_110);
              pbVar13 = (byte *)local_38;
              goto LAB_100041d4;
            }
            uVar5 = uVar15 & 7;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15) & 0xffffffff00000007;
            uStack_1e0 = 3;
          }
          for (uVar12 = 0; uStack_1e0 != uVar12; uVar12 = uVar12 + 1) {
            if ((*(byte *)((long)local_38 + uVar12) & 0xffffffc0) != 0x80) {
              local_110 = (undefined8 *)CONCAT44(PF_PART4(local_110, 4),0xfffd);
              local_d0 = 5;
              recovered_10009688((long *)local_170,(uint *)&local_110);
              pbVar13 = (byte *)local_38;
              goto LAB_100041d4;
            }
            uVar5 = uVar5 << 6 | *(byte *)((long)local_38 + uVar12) & 0x3f;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar5);
          }
          local_40 = (byte *)uStack_1e0;
          local_d0 = 6;
          recovered_100099c8((long *)local_170,(uint *)&local_f8);
          pbVar13 = (byte *)((long)local_38 + (long)local_40);
          goto LAB_100041d4;
        }
        local_48 = *(void **)local_170;
        local_40 = (byte *)(lStack_168 << 2);
        for (pbVar13 = (byte *)0x0; local_40 != pbVar13; pbVar13 = pbVar13 + 4) {
          iVar25 = *(int *)((long)local_48 + (long)pbVar13);
          local_f8 = CONCAT44(PF_PART4(local_f8, 4),iVar25);
          if (iVar25 != 0xd) {
            local_38 = (ulonglong *)pbVar13;
            if (iVar25 == 10) {
              local_d0 = 7;
              recovered_10004584((long *)&local_140);
              pbVar13 = (byte *)local_38;
            }
            else {
              local_d0 = 8;
              recovered_100099c8(local_140 + uStack_138 * 3 + -3,(uint *)&local_f8);
              pbVar13 = (byte *)local_38;
            }
          }
        }
        PF_PART4(lStack_168, 0) = 0;
        PF_PART4(lStack_168, 4) = 0;
        recovered_10002e70(*(void **)local_170);
        if (uStack_138 == 0) {
          local_d0 = 9;
          recovered_10004584((long *)&local_140);
        }
        local_38 = (ulonglong *)local_128[3];
        puVar6 = local_140;
        for (lVar14 = uStack_138 * 0x18; lVar14 != 0; lVar14 = lVar14 + -0x18) {
          local_38 = (ulonglong *)((long)local_38 + puVar6[1]);
          puVar6 = puVar6 + 3;
        }
        local_40 = (byte *)(local_128 + 2);
        local_d0 = 10;
        recovered_100098ac((long *)local_40,(ulong)local_38);
        local_d0 = 0xb;
        recovered_100056c0(local_128 + 8,(ulong)local_38);
        puVar11 = local_38;
        puVar7 = (ulonglong *)recovered_10009890(local_128[6]);
        if (puVar7 < puVar11) {
          local_d0 = 0xc;
          recovered_100097f0((long)local_40,((long *)local_40)[1]*2+2);
        }
        local_f8 = 0;
        lStack_f0 = 0;
        local_e8 = 0;
        local_d0 = 0xd;
        recovered_100045e4(&local_f8,uStack_138);
        local_1d0 = local_140 + uStack_138 * 3;
        uVar15 = 1;
        uVar5 = 0;
        puVar6 = local_140;
        while( true ) {
          local_38 = (ulonglong *)CONCAT44(PF_PART4(local_38, 4),uVar15);
          if (puVar6 == local_1d0) break;
          local_110 = local_128;
          plVar22 = (long *)*local_128;
          local_1b0 = puVar6;
          local_1a4 = uVar5;
          if (plVar22 == (long *)0x0) {
            local_78 = 0x100000001;
            local_1c0 = (void *)0x0;
            local_70 = (void *)0x0;
            local_178 = (void *)0x0;
          }
          else {
            local_40 = (byte *)CONCAT44(PF_PART4(local_40, 4),*(undefined4 *)(local_128 + 1));
            local_d0 = 0xf;
            local_48 = (void *)(uintptr_t)pf_double_bits((*(double (**)(void *))(*plVar22 + 0x20))(plVar22));
            local_1b8 = &local_110;
            local_d0 = 0x10;
            dVar2 = (*(double (**)(void *))(*(long *)*local_110 + 0x28))((long *)*local_110);
            local_40 = (byte *)(uintptr_t)pf_double_bits(((double)pf_bits_float((uint32_t)PF_PART4(local_40, 0)) / pf_bits_double((uintptr_t)local_48)));
            local_d0 = 0x11;
            local_1a8 = recovered_100096ec(dVar2 * pf_bits_double((uintptr_t)local_40),(ulonglong *)&local_1b8);
            if ((int)local_1a8 < 2) {
              local_1a8 = 1;
            }
            local_d0 = 0x12;
            local_48 = (void *)(uintptr_t)pf_double_bits((*(double (**)(void *))(*(long *)*local_110 + 0x28))((long *)*local_110));
            local_d0 = 0x13;
            local_70 = (void *)(uintptr_t)pf_double_bits((*(double (**)(void *))(*(long *)*local_110 + 0x30))((long *)*local_110));
            local_d0 = 0x14;
            dVar2 = (*(double (**)(void *))(*(long *)*local_110 + 0x38))((long *)*local_110);
            local_d0 = 0x15;
            local_1a0 = recovered_100096ec(pf_bits_double((uintptr_t)local_40) *
                                           (pf_bits_double((uintptr_t)local_48) + pf_bits_double((uintptr_t)local_70) + dVar2),
                                           (ulonglong *)&local_1b8);
            if ((int)local_1a0 < 2) {
              local_1a0 = 1;
            }
            puVar21 = (uint *)*local_1b0;
            local_1d8 = puVar21 + local_1b0[1];
            local_40 = (byte *)0x0;
            local_e0 = 0;
            local_60 = (void *)0x0;
            local_70 = (void *)0x0;
            local_178 = (void *)0x0;
            pvVar10 = (void *)0x0;
            pvVar9 = (void *)0x0;
            local_78 = (ulong)local_1a0;
            local_64 = 0;
            local_4c = 0;
            local_50 = 0.0;
            local_180 = 0;
            while (puVar6 = local_110, puVar21 != local_1d8) {
              local_68 = *puVar21;
              plVar22 = local_110 + 2;
              puVar18 = &local_68;
              local_188 = pvVar9;
              local_120 = puVar21;
              local_48 = pvVar10;
              uVar8 = recovered_1000973c(plVar22,(int *)puVar18);
              if (uVar8 == puVar6[3] * 0x38 + puVar6[2]) {
                local_7c = *(float *)(puVar6 + 1);
                local_d0 = 0x17;
                local_58 = puVar6;
                local_118 = plVar22;
                dVar2 = (*(double (**)(void *))(*(long *)*puVar6 + 0x20))((long *)*puVar6);
                local_d0 = 0x18;
                (*(pf_glyph *(**)(pf_glyph *,void *,uint,double))(*(long *)*local_58 + 0x18))
                          ((pf_glyph *)local_170,(long *)*local_58,local_68,(double)local_7c / dVar2
                          );
                plVar22 = local_118;
                puVar18 = &local_68;
                uVar8 = recovered_1000973c(local_118,(int *)puVar18);
                lVar14 = local_58[3];
                if (uVar8 == lVar14 * 0x38 + local_58[2]) {
                  if ((local_58[6] == 0) || ((ulong)(local_58[6] * 3) < lVar14 * 4 + 4U)) {
                    local_d0 = 0x19;
                    recovered_100097f0((long)plVar22,plVar22[1]*2+2);
                    lVar14 = local_58[3];
                    plVar22 = local_118;
                  }
                  if (lVar14 == local_58[4]) {
                    uVar12 = lVar14 * 2;
                    if (lVar14 == 0) {
                      uVar12 = 4;
                    }
                    local_d0 = 0x1a;
                    recovered_100098ac(plVar22,uVar12);
                    lVar14 = local_58[3];
                  }
                  puVar6 = local_58;
                  puVar21 = (uint *)(local_58[2] + lVar14 * 0x38);
                  *puVar21 = local_68;
                  recovered_10005924(puVar21 + 2,local_170);
                  plVar22 = puVar6 + 3;
                  *plVar22 = *plVar22 + 1;
                  local_d0 = 0x1b;
                  recovered_10005744(puVar6 + 8,(ulonglong *)&DAT_1000b4f8);
                  puVar6 = local_58;
                  puVar18 = (uint *)(local_58[3] + -1);
                  recovered_100097c4(local_118,(long)puVar18);
                  uVar8 = (puVar6[2] + puVar6[3] * 0x38) - 0x38;
                }
                local_150 = 0;
                recovered_10002e70(puStack_158);
              }
              local_d0 = 0x1c;
              local_58 = (undefined8 *)uVar8;
              dVar2 = recovered_10001148(pf_bits_double((uintptr_t)local_40));
              fVar27 = (float)((int)dVar2 + *(int *)((long)local_58 + 8));
              iVar25 = local_1a8 - *(int *)((long)local_58 + 0xc);
              pvVar10 = local_48;
              if (local_70 == local_48) {
                pvVar10 = (void *)((long)local_70 * 2);
                if (local_70 == (void *)0x0) {
                  pvVar10 = (void *)0x4;
                }
                if (pvVar10 <= local_70) {
                  pvVar10 = local_70;
                  goto LAB_1000491b;
                }
                local_118 = (long *)CONCAT44(PF_PART4(local_118, 4),iVar25);
                local_d0 = 0x1d;
                local_7c = fVar27;
                local_48 = pvVar10;
                pvVar9 = recovered_10002e3c((long)pvVar10 << 4);
                pvVar4 = local_70;
                fVar27 = local_7c;
                lVar14 = 0;
                iVar25 = (int)local_118;
                pvVar10 = local_70;
                while (bVar29 = pvVar10 != (void *)0x0, pvVar10 = (void *)((long)pvVar10 + -1),
                      bVar29) {
                  uVar3 = ((undefined8 *)((long)local_188 + lVar14))[1];
                  *(undefined8 *)((long)pvVar9 + lVar14) = *(undefined8 *)((long)local_188 + lVar14)
                  ;
                  ((undefined8 *)((long)pvVar9 + lVar14))[1] = uVar3;
                  lVar14 = lVar14 + 0x10;
                }
                recovered_10002e70(local_188);
                local_178 = local_48;
                local_60 = pvVar9;
                pvVar10 = local_48;
                local_70 = pvVar4;
              }
              else {
LAB_1000491b:
                pvVar9 = local_188;
              }
              lVar14 = (long)local_70 * 0x10;
              *(ulonglong *)((long)pvVar9 + lVar14) = (long)local_58 + 8;
              *(int *)((long)pvVar9 + lVar14 + 8) = (int)fVar27;
              *(int *)((long)pvVar9 + lVar14 + 0xc) = iVar25;
              iVar19 = *(int *)((long)local_58 + 0x10);
              if ((0 < iVar19) && (iVar20 = *(int *)((long)local_58 + 0x14), 0 < iVar20)) {
                if ((local_180 & 1) == 0) {
                  local_64 = iVar19 + (int)fVar27;
                  local_78 = (ulong)(uint)(iVar20 + iVar25);
                  local_180 = CONCAT71((int7)((ulong)puVar18 >> 8),1);
                  local_50 = fVar27;
                  local_4c = iVar25;
                }
                else {
                  if ((int)fVar27 < (int)local_50) {
                    local_50 = fVar27;
                  }
                  if (iVar25 < local_4c) {
                    local_4c = iVar25;
                  }
                  if (local_64 <= iVar19 + (int)fVar27) {
                    local_64 = iVar19 + (int)fVar27;
                  }
                  iVar19 = (int)local_78;
                  local_78 = local_78 & 0xffffffff;
                  if (iVar19 <= iVar20 + iVar25) {
                    local_78 = (ulong)(uint)(iVar20 + iVar25);
                  }
                  local_180 = CONCAT71((int7)(local_78 >> 8),1);
                }
              }
              local_70 = (void *)((long)local_70 + 1);
              local_40 = (byte *)(uintptr_t)pf_double_bits((pf_bits_double((uintptr_t)local_40) + *(double *)((long)local_58 + 0x18)));
              puVar21 = local_120 + 1;
              local_e0 = local_e0 + 0x10;
            }
            local_d0 = 0x16;
            dVar2 = recovered_10001164(pf_bits_double((uintptr_t)local_40));
            iVar25 = (int)dVar2;
            if ((int)dVar2 < 2) {
              iVar25 = 1;
            }
            iVar19 = -(int)local_50;
            if (iVar19 < 1) {
              iVar19 = 0;
            }
            iVar20 = -local_4c;
            if (iVar20 < 1) {
              iVar20 = 0;
            }
            iVar17 = local_64 + iVar19;
            if (local_64 + iVar19 < iVar25 + iVar19) {
              iVar17 = iVar25 + iVar19;
            }
            iVar25 = (int)local_78 + iVar20;
            if (iVar25 < (int)(local_1a0 + iVar20)) {
              iVar25 = local_1a0 + iVar20;
            }
            pvVar10 = local_60;
            for (lVar14 = local_e0; lVar14 != 0; lVar14 = lVar14 + -0x10) {
              *(int *)((long)pvVar10 + 8) = *(int *)((long)pvVar10 + 8) + iVar19;
              *(int *)((long)pvVar10 + 0xc) = *(int *)((long)pvVar10 + 0xc) + iVar20;
              pvVar10 = (void *)((long)pvVar10 + 0x10);
            }
            local_78 = CONCAT44(iVar25 + (uint)(iVar25 == 0),iVar17);
            local_1c0 = local_60;
            uVar15 = (uint)local_38;
          }
          if (lStack_f0 == local_e8) {
            uVar12 = lStack_f0 * 2;
            if (lStack_f0 == 0) {
              uVar12 = 4;
            }
            local_d0 = 0x1e;
            recovered_100045e4(&local_f8,uVar12);
            uVar15 = (uint)local_38;
          }
          uVar12 = local_f8;
          lVar14 = lStack_f0 * 0x20;
          *(ulong *)(local_f8 + lVar14) = local_78;
          *(void **)(local_f8 + 8 + lVar14) = local_1c0;
          *(void **)(local_f8 + 0x10 + lVar14) = local_70;
          *(void **)(local_f8 + 0x18 + lVar14) = local_178;
          lVar14 = lStack_f0 + 1;
          lStack_f0 = lVar14;
          recovered_10002e70((void *)0x0);
          lVar14 = lVar14 * 0x20;
          uVar5 = *(uint *)((uVar12 - 0x20) + lVar14);
          if ((int)uVar15 <= (int)uVar5) {
            uVar15 = uVar5;
          }
          uVar5 = local_1a4 + *(int *)((uVar12 - 0x1c) + lVar14);
          puVar6 = local_1b0 + 3;
        }
        local_40 = (byte *)0x1;
        if (1 < (int)uVar5) {
          local_40 = (byte *)(ulong)uVar5;
        }
        local_48 = (void *)(ulong)uVar15;
        local_70 = (void *)((long)local_40 * (long)local_48);
        (*(uint64_t *)(void *)local_170) = (uint64_t)((*(uint64_t *)(void *)local_170) & 0xffffffffffffff00);
        local_d0 = 0xe;
        recovered_10009970(&local_110,(ulong)local_70,local_170);
        iVar25 = 0;
        for (uVar12 = local_f8; uVar12 != lStack_f0 * 0x20 + local_f8; uVar12 = uVar12 + 0x20) {
          plVar22 = *(long **)(uVar12 + 8);
          plVar23 = plVar22 + *(long *)(uVar12 + 0x10) * 2;
          for (; plVar22 != plVar23; plVar22 = plVar22 + 2) {
            lVar14 = *plVar22;
            if (((lVar14 != 0) && (0 < *(int *)(lVar14 + 8))) &&
               (iVar19 = *(int *)(lVar14 + 0xc), 0 < iVar19)) {
              for (lVar24 = 0; lVar24 < iVar19; lVar24 = lVar24 + 1) {
                uVar15 = iVar25 + (int)lVar24 + *(int *)((long)plVar22 + 0xc);
                if (uVar15 < (uint)PF_PART4(local_40, 0)) {
                  lVar16 = (ulong)uVar15 * (long)local_48;
                  for (lVar28 = 0; lVar28 < *(int *)(lVar14 + 8); lVar28 = lVar28 + 1) {
                    iVar19 = (int)((ulong)*(uint *)(plVar22 + 1) + lVar28);
                    if (((-1 < iVar19) && (iVar19 < (int)(uint)local_38)) &&
                       (bVar1 = *(byte *)(lVar28 + *(int *)(lVar14 + 8) * lVar24 +
                                                   *(long *)(lVar14 + 0x18)), bVar1 != 0)) {
                      uVar26 = (ulong)*(uint *)(plVar22 + 1) + lVar28 & 0xffffffff;
                      *(byte *)((long)local_110 + uVar26 + lVar16) =
                           (char)(((uint)(byte)~bVar1 *
                                  (uint)*(byte *)((long)local_110 + uVar26 + lVar16)) / 0xff) +
                           bVar1;
                      lVar14 = *plVar22;
                    }
                  }
                  iVar19 = *(int *)(lVar14 + 0xc);
                }
              }
            }
          }
          iVar25 = iVar25 + *(int *)(uVar12 + 4);
        }
        uVar15 = 0xff;
        if (local_194 < 0xff) {
          uVar15 = local_194;
        }
        if ((int)local_194 < 0) {
          uVar15 = 0;
        }
        local_58 = (undefined8 *)CONCAT44(PF_PART4(local_58, 4),uVar15);
        uVar15 = 0xff;
        if (local_198 < 0xff) {
          uVar15 = local_198;
        }
        if ((int)local_198 < 0) {
          uVar15 = 0;
        }
        local_e0 = CONCAT44(PF_PART4(local_e0, 4),uVar15);
        uVar15 = 0xff;
        if (local_19c < 0xff) {
          uVar15 = local_19c;
        }
        if ((int)local_19c < 0) {
          uVar15 = 0;
        }
        local_48 = (void *)CONCAT44(PF_PART4(local_48, 4),uVar15);
        local_d0 = 0x1f;
        local_120 = (uint *)recovered_100014ac(local_1c8);
        local_d0 = 0x20;
        pvVar10 = recovered_10002e6c((long)local_70 << 2);
        iVar25 = 0xff;
        if ((int)local_120 < 0xff) {
          iVar25 = (int)local_120;
        }
        if (iVar25 < 1) {
          iVar25 = 0;
        }
        for (lVar14 = 0; local_108 != lVar14; lVar14 = lVar14 + 1) {
          bVar1 = *(byte *)((long)local_110 + lVar14);
          *(char *)((long)pvVar10 + lVar14 * 4) = (char)local_58;
          *(char *)((long)pvVar10 + lVar14 * 4 + 1) = (char)local_e0;
          *(char *)((long)pvVar10 + lVar14 * 4 + 2) = (char)local_48;
          *(char *)((long)pvVar10 + lVar14 * 4 + 3) = (char)(((uint)bVar1 * iVar25 & 0xffff) / 0xff)
          ;
        }
        local_d0 = 0x21;
        local_48 = pvVar10;
        recovered_1000454c((ulonglong *)local_170);
        (*(uint64_t *)(void *)local_170) = (uint64_t)CONCAT44((int)local_40,(int)local_38);
        lStack_168 = (long)local_48;
        local_d0 = 0x22;
        puVar11 = recovered_10002e3c(0x20);
        puVar11[2] = pf_double_bits(local_160);
        puVar11[3] = (ulonglong)puStack_158;
        *puVar11 = (*(uint64_t *)(void *)local_170);
        puVar11[1] = lStack_168;
        local_108 = 0;
        recovered_10002e70(local_110);
        recovered_10004690(&local_f8);
        recovered_10009a64(&local_140);
      }
    }
  }
  recovered_1000307c(&local_d8);
  return puVar11;
}

#undef DAT_1000b4f8
#undef DAT_1000b7ac
#undef LAB_10004eb3
#undef uStack_1e0
#undef lStack_168
#undef puStack_158
#undef uStack_138
#undef lStack_f0
#undef local_1d8
#undef local_1d0
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_160
#undef local_150
#undef local_140
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_f8
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_7c
#undef local_78
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000454c
 */

void recovered_1000454c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  *param_1 = 0;
  puVar1 = recovered_10002e6c(4);
  *puVar1 = 0;
  param_1[1] = puVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004584
 */

void recovered_10004584(long *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_10009ae4(param_1,uVar1);
    lVar3 = param_1[1];
  }
  puVar2 = (undefined8 *)(*param_1 + lVar3 * 0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  param_1[1] = lVar3 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045e4
 */

void recovered_100045e4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002e3c(param_2 << 5);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10009ba8((undefined8 *)((long)pvVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_1000466c(*param_1 + lVar2);
      lVar2 = lVar2 + 0x20;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000466c
 */

long recovered_1000466c(long param_1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 0x10) = 0;
  recovered_10002e70(*(void **)(param_1 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004690
 */

long * recovered_10004690(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_1000466c(*param_1 + lVar1);
  }
  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046e0
 */

void recovered_100046e0(long *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (long *)0x0) {
    recovered_10005298(param_1 + 8);
    recovered_10005298(param_1 + 5);
    recovered_1000963c(param_1 + 2);
    recovered_10002e70((void *)param_1[2]);
    if ((long *)*param_1 != (long *)0x0) {
      ((uintptr_t (*)(void *))(*(uintptr_t *)(*(uintptr_t *)(uintptr_t)*param_1 + 8)))((void *)(uintptr_t)*param_1);
    }
  }
  recovered_10000c54(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004734
 */

uint recovered_10004734(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = (*(uint *)(*param_1 + param_2) & 0xff00ff00) >> 8 |
          (*(uint *)(*param_1 + param_2) & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004744
 */

undefined8 * recovered_10004744(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004768
 */

undefined8 * recovered_10004768(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005298(param_1 + 6);
  recovered_10005298(param_1 + 3);
  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


#undef LAB_1000c028
#define LAB_1000c028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x218cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004798
 */

undefined8 * recovered_10004798(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = &LAB_1000c028;
  recovered_10005310((long)(param_1 + 0x20));
  recovered_10004744(param_1 + 0x1d);
  recovered_1000999c(param_1 + 0x17);
  recovered_10004768(param_1 + 4);
  recovered_10009944(param_1 + 1);
  return param_1;
}

#undef LAB_1000c028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e8
 */

void recovered_100047e8(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

  undefined8 *buffer;

  buffer = recovered_10004798(in_x0);
  recovered_10000c54(buffer);
  return;
}


#define uStack_64 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047fc
 */

ulong recovered_100047fc(long param_1,long *param_2)

{
  unsigned char frame[148] = {0};

  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;

  recovered_10005340((long *)(param_1 + 8),param_2);
  uVar19 = *(ulong *)(param_1 + 0x10);
  if ((0xb < uVar19) &&
     (((uVar14 = recovered_10004734((long *)(param_1 + 8),0), uVar14 == 0x74727565 ||
       (uVar14 == 0x10000)) &&
      (uVar10 = *(ushort *)(*(long *)(param_1 + 8) + 4),
      uVar26 = (ulong)((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8), uVar26 << 4 <= uVar19 - 0xc)
      ))) {
    for (uVar19 = 0; uVar19 != uVar26; uVar19 = uVar19 + 1) {
      uStack_64 = recovered_10004734((long *)(param_1 + 8),(uVar19 & 0x7ffffffffffffff) << 4 | 0xc);
      uVar14 = recovered_10004734((long *)(param_1 + 8),uVar19 * 0x10 + 0x14);
      uVar15 = recovered_10004734((long *)(param_1 + 8),uVar19 * 0x10 + 0x18);
      if (*(ulong *)(param_1 + 0x10) < (ulong)uVar14 ||
          *(ulong *)(param_1 + 0x10) - (ulong)uVar14 < (ulong)uVar15) {
        return 0;
      }
      uVar17 = recovered_10005514((long *)(param_1 + 0x20),(byte *)&uStack_64);
      uVar20 = *(ulong *)(param_1 + 0x28);
      if ((uVar17 == 0xffffffffffffffff) || (uVar17 == uVar20)) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           ((ulong)(*(long *)(param_1 + 0x40) * 3) < uVar20 * 4 + 4)) {
          uVar17 = uVar20 * 2 + 2;
          uVar25 = 8;
          if (3 < uVar20) {
            uVar25 = uVar20 * 2;
          }
          if (uVar25 <= uVar17) {
            uVar25 = uVar17;
          }
          uVar17 = 8;
          do {
            uVar20 = uVar17;
            uVar17 = uVar20 << 1;
          } while (uVar20 < uVar25);
          recovered_100055cc((long *)(param_1 + 0x38),uVar20,(undefined8 *)((uintptr_t)pf_module_state+0x154U));
          recovered_100055cc((long *)(param_1 + 0x50),*(ulong *)(param_1 + 0x28),
                             (undefined8 *)((uintptr_t)pf_module_state+0x154U));
          for (uVar17 = 0; uVar17 < *(ulong *)(param_1 + 0x40); uVar17 = uVar17 + 1) {
            *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar17 * 8) = 0xffffffffffffffff;
          }
          for (uVar17 = 0; uVar20 = *(ulong *)(param_1 + 0x28), uVar17 < uVar20; uVar17 = uVar17 + 1
              ) {
            recovered_100054e8((long *)(param_1 + 0x20),uVar17);
          }
        }
        if (uVar20 == *(ulong *)(param_1 + 0x30)) {
          uVar17 = 4;
          if (uVar20 != 0) {
            uVar17 = uVar20 << 1;
          }
          if (uVar20 < uVar17) {
            pvVar18 = recovered_10002e3c(uVar17 * 0xc);
            lVar21 = 0;
            for (lVar23 = *(long *)(param_1 + 0x28); lVar23 != 0; lVar23 = lVar23 + -1) {
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar21);
              uVar7 = *(undefined4 *)(puVar3 + 1);
              *(undefined8 *)((long)pvVar18 + lVar21) = *puVar3;
              *(undefined4 *)((undefined8 *)((long)pvVar18 + lVar21) + 1) = uVar7;
              lVar21 = lVar21 + 0xc;
            }
            recovered_10002e70(*(void **)(param_1 + 0x20));
            *(void **)(param_1 + 0x20) = pvVar18;
            *(ulong *)(param_1 + 0x30) = uVar17;
            uVar20 = *(ulong *)(param_1 + 0x28);
          }
        }
        puVar22 = (uint *)(*(long *)(param_1 + 0x20) + uVar20 * 0xc);
        *puVar22 = uStack_64;
        puVar22[1] = 0;
        puVar22[2] = 0;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        recovered_10005744((long *)(param_1 + 0x50),(undefined8 *)((uintptr_t)pf_module_state+0x154U));
        recovered_100054e8((long *)(param_1 + 0x20),*(long *)(param_1 + 0x28) + -1);
        lVar21 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * 0xc + -0xc;
      }
      else {
        lVar21 = *(long *)(param_1 + 0x20) + uVar17 * 0xc;
      }
      *(uint *)(lVar21 + 4) = uVar14;
      *(uint *)(lVar21 + 8) = uVar15;
    }
    uVar19 = recovered_1000539c(param_1,0x636d6170,(undefined8 *)(param_1 + 0x70));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_1000539c(param_1,0x676c7966,(undefined8 *)(param_1 + 0x78));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_1000539c(param_1,0x6c6f6361,(undefined8 *)(param_1 + 0x80));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_1000539c(param_1,0x68656164,(undefined8 *)(param_1 + 0x88));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_1000539c(param_1,0x68686561,(undefined8 *)(param_1 + 0x90));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_1000539c(param_1,0x686d7478,(undefined8 *)(param_1 + 0x98));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar19 = recovered_1000539c(param_1,0x6d617870,(undefined8 *)(param_1 + 0xa0));
    if ((int)uVar19 == 0) {
      return uVar19;
    }
    uVar14 = *(uint *)(param_1 + 0x88);
    uVar19 = *(ulong *)(param_1 + 0x10);
    if (uVar19 < uVar14) {
      return 0;
    }
    if (uVar19 - uVar14 < 0x36) {
      return 0;
    }
    uVar15 = *(uint *)(param_1 + 0x90);
    if (uVar19 < uVar15) {
      return 0;
    }
    if (uVar19 - uVar15 < 0x24) {
      return 0;
    }
    uVar16 = *(uint *)(param_1 + 0xa0);
    if (uVar16 <= uVar19 && 5 < uVar19 - uVar16) {
      lVar21 = *(long *)(param_1 + 8);
      uVar10 = *(ushort *)(lVar21 + (ulong)(uVar14 + 0x12));
      uVar10 = uVar10 >> 8 | uVar10 << 8;
      *(ushort *)(param_1 + 0xa8) = uVar10;
      if (uVar10 != 0) {
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar14 + 0x32));
        uVar11 = uVar10 >> 8 | uVar10 << 8;
        *(ushort *)(param_1 + 0xb0) = uVar11;
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar15 + 4));
        *(ushort *)(param_1 + 0xaa) = uVar10 >> 8 | uVar10 << 8;
        pbVar4 = (byte *)(lVar21 + (ulong)(uVar15 + 6));
        *(ushort *)(param_1 + 0xac) = (ushort)*pbVar4 * -0x100 - (ushort)pbVar4[1];
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar15 + 8));
        *(ushort *)(param_1 + 0xae) = uVar10 >> 8 | uVar10 << 8;
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar15 + 0x22));
        uVar12 = uVar10 >> 8 | uVar10 << 8;
        *(ushort *)(param_1 + 0xb4) = uVar12;
        uVar10 = *(ushort *)(lVar21 + (ulong)(uVar16 + 4));
        uVar14 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8;
        uVar26 = (ulong)uVar14;
        *(short *)(param_1 + 0xb2) = (short)uVar14;
        if (uVar14 == 0) {
          return 0;
        }
        if (uVar12 == 0) {
          return 0;
        }
        uVar17 = (ulong)*(uint *)(param_1 + 0x80);
        if (uVar11 == 0) {
          if (uVar19 < uVar17 || uVar19 - uVar17 < uVar26 * 2 + 2) {
            return 0;
          }
          recovered_100057ac((long *)(param_1 + 0xb8),uVar26 + 1);
          lVar23 = 0;
          lVar24 = *(long *)(param_1 + 0xc0);
          for (lVar21 = 0; lVar24 != lVar21; lVar21 = lVar21 + 1) {
            pbVar4 = (byte *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x80) + lVar23);
            *(uint *)(*(long *)(param_1 + 0xb8) + lVar21 * 4) =
                 (uint)*pbVar4 << 9 | (uint)pbVar4[1] << 1;
            lVar23 = lVar23 + 2;
          }
        }
        else {
          if (uVar19 < uVar17 || uVar19 - uVar17 < uVar26 * 4 + 4) {
            return 0;
          }
          recovered_100057ac((long *)(param_1 + 0xb8),uVar26 + 1);
          lVar21 = 0;
          lVar24 = *(long *)(param_1 + 0xc0);
          for (lVar23 = lVar24; lVar23 != 0; lVar23 = lVar23 + -1) {
            uVar14 = recovered_10004734((long *)(param_1 + 8),
                                        lVar21 + (ulong)*(uint *)(param_1 + 0x80));
            *(uint *)(*(long *)(param_1 + 0xb8) + lVar21) = uVar14;
            lVar21 = lVar21 + 4;
          }
        }
        lVar24 = lVar24 << 2;
        puVar22 = *(uint **)(param_1 + 0xb8);
        while (lVar24 != 0) {
          uVar14 = *puVar22;
          lVar24 = lVar24 + -4;
          puVar22 = puVar22 + 1;
          if (*(uint *)(param_1 + 0x7c) < uVar14) {
            return 0;
          }
        }
        uVar14 = *(uint *)(param_1 + 0x70);
        uVar19 = *(ulong *)(param_1 + 0x10);
        if ((uVar14 <= uVar19 && 3 < uVar19 - uVar14) &&
           (uVar10 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar14 + 2)),
           uVar26 = (ulong)((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8),
           uVar14 + 4 <= uVar19 && uVar26 << 3 <= uVar19 - (uVar14 + 4))) {
          for (uVar19 = 0; uVar19 != uVar26; uVar19 = uVar19 + 1) {
            iVar8 = *(int *)(param_1 + 0x70);
            lVar21 = (ulong)(iVar8 + 4) + uVar19 * 8;
            lVar23 = *(long *)(param_1 + 8);
            puVar5 = (ushort *)(lVar23 + lVar21);
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            uVar14 = recovered_10004734((long *)(param_1 + 8),lVar21 + 4);
            if (uVar14 < *(uint *)(param_1 + 0x74)) {
              uVar25 = *(ulong *)(param_1 + 0x10);
              uVar14 = uVar14 + iVar8;
              uVar20 = (ulong)uVar14;
              uVar17 = uVar25 - uVar20;
              if (uVar20 <= uVar25 && 1 < uVar17) {
                uVar10 = uVar10 >> 8 | uVar10 << 8;
                uVar11 = uVar11 >> 8 | uVar11 << 8;
                uVar12 = *(ushort *)(lVar23 + uVar20) >> 8 | *(ushort *)(lVar23 + uVar20) << 8;
                if (uVar12 == 0xc) {
                  if (((uVar10 == 3 || uVar10 == 0) && 0xf < uVar17) &&
                     (uVar15 = recovered_10004734((long *)(param_1 + 8),(ulong)(uVar14 + 4)),
                     0xf < uVar15 && uVar15 <= uVar17)) {
                    uVar15 = recovered_10004734((long *)(param_1 + 8),(ulong)(uVar14 + 0xc));
                    uVar20 = (ulong)uVar15;
                    uVar17 = (ulong)(uVar14 + 0x10);
                    if ((uVar17 <= uVar25 && uVar20 * 0xc <= uVar25 - uVar17) &&
                       ((*(long *)(param_1 + 0xf0) == 0 || (uVar11 == 10 || uVar11 == 4)))) {
                      *(undefined8 *)(param_1 + 0xf0) = 0;
                      recovered_10005894((long *)(param_1 + 0xe8),uVar20);
                      for (; uVar20 != 0; uVar20 = uVar20 - 1) {
                        uVar14 = recovered_10004734((long *)(param_1 + 8),uVar17);
                        uVar15 = recovered_10004734((long *)(param_1 + 8),uVar17 + 4);
                        uVar16 = recovered_10004734((long *)(param_1 + 8),uVar17 + 8);
                        lVar21 = *(long *)(param_1 + 0xf0);
                        if (lVar21 == *(long *)(param_1 + 0xf8)) {
                          uVar25 = 4;
                          if (lVar21 != 0) {
                            uVar25 = lVar21 << 1;
                          }
                          recovered_10005894((long *)(param_1 + 0xe8),uVar25);
                          lVar21 = *(long *)(param_1 + 0xf0);
                        }
                        puVar22 = (uint *)(*(long *)(param_1 + 0xe8) + lVar21 * 0xc);
                        *puVar22 = uVar14;
                        puVar22[1] = uVar15;
                        puVar22[2] = uVar16;
                        *(long *)(param_1 + 0xf0) = lVar21 + 1;
                        uVar17 = uVar17 + 0xc;
                      }
                    }
                  }
                }
                else if (((uVar12 == 4) && ((uVar10 == 3 || uVar10 == 0) && 7 < uVar17)) &&
                        (uVar10 = *(ushort *)(lVar23 + (ulong)(uVar14 + 2)),
                        uVar15 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8,
                        0xf < uVar15 && uVar15 <= uVar17)) {
                  puVar6 = (undefined1 *)(lVar23 + (ulong)(uVar14 + 6));
                  bVar9 = puVar6[1];
                  uVar10 = CONCAT11(*puVar6,bVar9);
                  uVar16 = (uint)uVar10;
                  if (uVar16 != 0) {
                    iVar8 = uVar14 + uVar16 + 0x10;
                    iVar1 = iVar8 + uVar16;
                    iVar2 = iVar1 + uVar16;
                    uVar16 = iVar2 + uVar16;
                    if ((((bVar9 & 1) == 0 && uVar16 <= uVar14 + uVar15) && uVar16 <= uVar25) &&
                       (((uVar11 == 1 || ((*(byte *)(param_1 + 0xe2) & 1) == 0)) ||
                        ((uVar11 == 3 && (*(short *)(param_1 + 0xe0) == 0)))))) {
                      *(uint *)(param_1 + 0xd0) = uVar14;
                      *(ushort *)(param_1 + 0xd4) = uVar10 >> 1;
                      *(undefined2 *)(param_1 + 0xd6) = 0xe;
                      sVar13 = (short)uVar14;
                      *(short *)(param_1 + 0xd8) = (short)iVar8 - sVar13;
                      *(short *)(param_1 + 0xda) = (short)iVar1 - sVar13;
                      *(short *)(param_1 + 0xdc) = (short)iVar2 - sVar13;
                      *(short *)(param_1 + 0xde) = (short)uVar16 - sVar13;
                      *(short *)(param_1 + 0xe0) = (short)uVar15;
                      *(undefined1 *)(param_1 + 0xe2) = 1;
                    }
                  }
                }
              }
            }
          }
          if ((*(byte *)(param_1 + 0xe2) & 1) == 0) {
            return (ulong)(*(long *)(param_1 + 0xf0) != 0);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

#undef uStack_64

#define adStack_100 (*(double (*)[4])(frame + 16))
#define uStack_e0 (*(undefined8 *)(frame + 48))
#define uStack_d8 (*(undefined8 *)(frame + 56))
#define pvStack_d0 (*(void * *)(frame + 64))
#define uStack_c8 (*(undefined8 *)(frame + 72))
#define uStack_c0 (*(undefined8 *)(frame + 80))
#define uStack_b8 (*(undefined2 *)(frame + 88))
#define uStack_b0 (*(undefined8 *)(frame + 96))
#define uStack_a8 (*(undefined8 *)(frame + 104))
#define uStack_a0 (*(undefined8 *)(frame + 112))
#define uStack_98 (*(undefined8 *)(frame + 120))
#define uStack_90 (*(undefined8 *)(frame + 128))
#define uStack_88 (*(undefined8 *)(frame + 136))
#define uStack_80 (*(undefined8 *)(frame + 144))
#define uStack_78 (*(undefined8 *)(frame + 152))
#define uStack_70 (*(undefined8 *)(frame + 160))
#define uStack_68 (*(undefined8 *)(frame + 168))
#define dStack_60 (*(double *)(frame + 176))
#define pvStack_58 (*(void * *)(frame + 184))
#define uStack_50 (*(undefined8 *)(frame + 192))
#define uStack_48 (*(undefined8 *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f70
 */

void recovered_10004f70(pf_glyph *__return_storage_ptr__,void *backend,uint glyph,double scale)

{
  unsigned char frame[304] = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  undefined2 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;

  uStack_70 = 0;
  uStack_68 = 0;
  dStack_60 = 0.0;
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  pvStack_d0 = (void *)CONCAT44(PF_PART4(pvStack_d0, 4),glyph);
  lVar9 = recovered_10006460((long *)((long)backend + 0x100),(int *)&pvStack_d0);
  if (lVar9 == *(long *)((long)backend + 0x100) + *(long *)((long)backend + 0x108) * 8) {
    if (((uint)pvStack_d0 >> 0x10 == 0) && (*(char *)((long)backend + 0xe2) == '\x01')) {
      iVar4 = *(int *)((long)backend + 0xd0);
      iVar13 = 0;
      do {
        iVar1 = iVar13 + 2;
        if ((uint)*(ushort *)((long)backend + 0xd4) * 2 + 2 == iVar1) goto LAB_100050c0;
        lVar9 = *(long *)((long)backend + 8);
        uVar6 = *(ushort *)
                 (lVar9 + (ulong)(iVar4 + iVar13 + (uint)*(ushort *)((long)backend + 0xd6)));
        iVar13 = iVar1;
      } while (((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) < ((uint)pvStack_d0 & 0xffff));
      uVar6 = *(ushort *)
               (lVar9 + (ulong)((iVar4 + iVar1 + (uint)*(ushort *)((long)backend + 0xd8)) - 2));
      uVar3 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      if (((uint)pvStack_d0 & 0xffff) < uVar3) goto LAB_100050c0;
      iVar13 = iVar4 + -2 + iVar1;
      uVar6 = *(ushort *)(lVar9 + (ulong)((uint)*(ushort *)((long)backend + 0xda) + iVar13));
      uVar5 = *(ushort *)(lVar9 + (ulong)((uint)*(ushort *)((long)backend + 0xdc) + iVar13));
      uVar7 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      uVar15 = (uint)pvStack_d0;
      if (((uVar7 != 0) &&
          ((uVar11 = (ulong)((iVar4 + (uint)pvStack_d0 * 2 + iVar1 +
                             *(ushort *)((long)backend + 0xdc) + uVar7 + uVar3 * -2) - 2),
           *(ulong *)((long)backend + 0x10) < uVar11 ||
           *(ulong *)((long)backend + 0x10) - uVar11 < 2 ||
           (uVar15 = (uint)(*(ushort *)(lVar9 + uVar11) >> 8) |
                     (*(ushort *)(lVar9 + uVar11) & 0xff00ff) << 8, uVar15 == 0)))) ||
         (uVar15 = ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) + uVar15, (uVar15 & 0xffff) == 0))
      goto LAB_100050c0;
    }
    else {
LAB_100050c0:
      if (*(ulong *)((long)backend + 0xf0) != 0) {
        uVar11 = 0;
        uVar12 = *(ulong *)((long)backend + 0xf0);
        while (uVar11 <= uVar12 && uVar12 - uVar11 != 0) {
          uVar2 = uVar11 + (uVar12 - uVar11 >> 1);
          puVar14 = (uint *)(*(long *)((long)backend + 0xe8) + uVar2 * 0xc);
          if ((uint)pvStack_d0 < *puVar14) {
            uVar12 = uVar2;
          }
          else {
            if ((uint)pvStack_d0 <= puVar14[1]) {
              uVar15 = ((uint)pvStack_d0 - *puVar14) + puVar14[2];
              goto LAB_1000511c;
            }
            uVar11 = uVar2 + 1;
          }
        }
      }
      uVar15 = 0;
    }
LAB_1000511c:
    puVar10 = (undefined2 *)
              recovered_10006494((long *)((long)backend + 0x100),(undefined4 *)&pvStack_d0);
    *puVar10 = (short)uVar15;
  }
  else {
    uVar15 = (uint)*(ushort *)(lVar9 + 4);
  }
  uVar3 = uVar15;
  if ((uint)*(ushort *)((long)backend + 0xb2) <= (uVar15 & 0xffff)) {
    uVar3 = 0;
  }
  uVar5 = *(ushort *)((long)backend + 0xb4);
  uVar6 = (ushort)uVar3;
  if ((uint)uVar5 < (uVar3 & 0xffff) || (uint)uVar5 == (uVar3 & 0xffff)) {
    uVar6 = uVar5 - 1;
  }
  uVar11 = (ulong)*(uint *)((long)backend + 0x98) + (ulong)uVar6 * 4;
  uVar12 = *(ulong *)((long)backend + 0x10);
  if (uVar11 <= uVar12 && 3 < uVar12 - uVar11) {
    uVar6 = *(ushort *)(*(long *)((long)backend + 8) + uVar11);
    if (((uint)((ulong)uVar3 & 0xffff) < (uint)uVar5) ||
       (uVar11 = (ulong)*(uint *)((long)backend + 0x98) + (ulong)uVar5 * 2 +
                 ((ulong)uVar3 & 0xffff) * 2,
       uVar11 <= uVar12 && (uVar12 != uVar11 && uVar12 - uVar11 != 1))) {
      dStack_60 = (double)(ushort)(uVar6 >> 8 | uVar6 << 8) * scale;
      uStack_c8 = 0;
      uStack_c0 = 0;
      pvStack_d0 = (void *)0x0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      adStack_100[2] = 0.0;
      adStack_100[1] = 0.0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      adStack_100[0] = scale;
      adStack_100[3] = scale;
      bVar8 = recovered_10005954(backend,(ushort)uVar15,adStack_100,&pvStack_d0,0);
      if ((bVar8 & 1) == 0) {
        recovered_10005924((undefined8 *)__return_storage_ptr__,&uStack_70);
      }
      else {
        recovered_10006210(&__return_storage_ptr__->left,dStack_60,(long *)&pvStack_d0);
        __return_storage_ptr__->advance = dStack_60;
      }
      uStack_c8 = 0;
      recovered_10002e70(pvStack_d0);
      goto LAB_10005220;
    }
  }
  dStack_60 = pf_bits_double(NEON_ucvtf((ulong)*(ushort *)((long)backend + 0xa8)));
  dStack_60 = dStack_60 * scale;
  recovered_10005924((undefined8 *)__return_storage_ptr__,&uStack_70);
LAB_10005220:
  uStack_50 = 0;
  recovered_10002e70(pvStack_58);
  return;
}

#undef adStack_100
#undef uStack_e0
#undef uStack_d8
#undef pvStack_d0
#undef uStack_c8
#undef uStack_c0
#undef uStack_b8
#undef uStack_b0
#undef uStack_a8
#undef uStack_a0
#undef uStack_98
#undef uStack_90
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef uStack_70
#undef uStack_68
#undef dStack_60
#undef pvStack_58
#undef uStack_50
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005268
 */

double recovered_10005268(void *backend)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = pf_bits_double(NEON_ucvtf((ulong)*(ushort *)((long)backend + 0xa8)));
  return dVar1;
}


/* Pooka's Free Software License. */
double recovered_10005274(long backend){return (double)*(short *)(backend+0xaa);}


/* Pooka's Free Software License. */
double recovered_10005280(long backend){int value=*(short *)(backend+0xac);return (double)(value>0?value:0);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005288
 */

double recovered_10005288(void *backend)

{
  unsigned char frame[64] = {0};

  return (double)((int)*(short *)((long)backend + 0xae) &
                 ((int)*(short *)((long)backend + 0xae) >> 0x1f ^ 0xffffffffU));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005290
 */

undefined8 recovered_10005290(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005298
 */

undefined8 * recovered_10005298(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c4
 */

void recovered_100052c4(undefined8 *param_1)

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
 * Address: 0x100052e4
 */

undefined8 * recovered_100052e4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005310
 */

void recovered_10005310(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005298((undefined8 *)(param_1 + 0x30));
  recovered_10005298((undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 8) = 0;
  recovered_10002e70(*(void **)param_1);
  return;
}


#define lStack_28 (*(long *)(frame + 32))
#define local_38 (*(void * *)(frame + 16))
#define local_30 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

long * recovered_10005340(long *param_1,long *param_2)

{
  unsigned char frame[104] = {0};

  void *data;
  long lVar1;

  if (param_1 != param_2) {
    recovered_10005408((long *)&local_38,param_2);
    data = (void *)*param_1;
    *param_1 = (long)local_38;
    lVar1 = param_1[2];
    param_1[2] = lStack_28;
    param_1[1] = local_30;
    local_30 = 0;
    local_38 = data;
    lStack_28 = lVar1;
    recovered_10002e70(data);
  }
  return param_1;
}

#undef lStack_28
#undef local_38
#undef local_30

#define local_24 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000539c
 */

undefined8 recovered_1000539c(long param_1,undefined4 param_2,undefined8 *param_3)

{
  unsigned char frame[84] = {0};

  long lVar1;
  undefined8 uVar2;

  local_24 = param_2;
  lVar1 = recovered_10005514((long *)(param_1 + 0x20),(byte *)&local_24);
  if ((lVar1 == -1) || (lVar1 == *(long *)(param_1 + 0x28))) {
    uVar2 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1 * 0xc + 4);
    uVar2 = 1;
  }
  return uVar2;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005408
 */

long * recovered_10005408(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10005468(param_1,param_2[1]);
  for (uVar1 = 0; uVar1 < (ulong)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = *(undefined1 *)(*param_2 + uVar1);
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005468
 */

void recovered_10005468(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_100054dc(param_2);
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
 * Address: 0x100054dc
 */

ulonglong recovered_100054dc(ulong param_1)

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
 * Address: 0x100054e8
 */

void recovered_100054e8(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_1000557c((long)param_1,(byte *)(*param_1 + param_2 * 0xc));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005514
 */

long recovered_10005514(long *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  long *plVar3;

  if (param_1[4] == 0) {
    return -1;
  }
  uVar1 = recovered_1000557c((long)param_1,param_2);
  plVar3 = (long *)(param_1[3] + uVar1 * 8);
  while ((lVar2 = *plVar3, lVar2 != -1 && (*(int *)(*param_1 + lVar2 * 0xc) != *(int *)param_2))) {
    plVar3 = (long *)(param_1[6] + lVar2 * 8);
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000557c
 */

ulong recovered_1000557c(long param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10005594(param_2,4);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005594
 */

ulong recovered_10005594(byte *param_1,long param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055cc
 */

void recovered_100055cc(long *param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_100056c0(param_1,param_2);
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
    recovered_100056c0(param_1,param_2);
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
 * Address: 0x100055d4
 */

void recovered_100055d4(long *param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_100056c0(param_1,param_2);
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
    recovered_100056c0(param_1,param_2);
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
 * Address: 0x10005658
 */

void recovered_10005658(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100056c0(param_1,param_2);
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
 * Address: 0x100056c0
 */

void recovered_100056c0(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10005734(param_2);
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
 * Address: 0x10005734
 */

ulonglong recovered_10005734(long param_1)

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
 * Address: 0x10005744
 */

long recovered_10005744(long *param_1,undefined8 *param_2)

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
    recovered_100056c0(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057ac
 */

void recovered_100057ac(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10005810(param_1,param_2);
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
 * Address: 0x10005810
 */

void recovered_10005810(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10005884(param_2);
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
 * Address: 0x10005884
 */

ulonglong recovered_10005884(long param_1)

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
 * Address: 0x10005894
 */

void recovered_10005894(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar2 = recovered_10002e3c(param_2 * 0xc);
    lVar3 = 0;
    uVar5 = param_1[1];
    for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
      uVar1 = *(undefined4 *)((undefined8 *)(*param_1 + lVar3) + 1);
      *(undefined8 *)((long)pvVar2 + lVar3) = *(undefined8 *)(*param_1 + lVar3);
      *(undefined4 *)((undefined8 *)((long)pvVar2 + lVar3) + 1) = uVar1;
      lVar3 = lVar3 + 0xc;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = (long)pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005914
 */

void recovered_10005914(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005924
 */

undefined8 * recovered_10005924(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  recovered_10006814(param_1 + 3,param_2 + 3);
  return param_1;
}


#define pStack_160 (*(pf_point *)(frame + 16))
#define pStack_150 (*(pf_point *)(frame + 32))
#define pStack_140 (*(pf_point *)(frame + 48))
#define pcStack_130 (*(char * *)(frame + 64))
#define lStack_128 (*(long *)(frame + 72))
#define uStack_120 (*(undefined8 *)(frame + 80))
#define ppStack_118 (*(pf_point * *)(frame + 88))
#define uStack_110 (*(ulong *)(frame + 96))
#define uStack_108 (*(ulong *)(frame + 104))
#define psStack_100 (*(short * *)(frame + 112))
#define uStack_f8 (*(undefined8 *)(frame + 120))
#define bStack_e8 (*(byte *)(frame + 136))
#define uStack_e7 (*(undefined7 *)(frame + 137))
#define uStack_e0 (*(undefined8 *)(frame + 144))
#define pbStack_d0 (*(byte * *)(frame + 160))
#define uStack_c8 (*(ulong *)(frame + 168))
#define uStack_c0 (*(undefined8 *)(frame + 176))
#define pvStack_b8 (*(void * *)(frame + 184))
#define dStack_b0 (*(double *)(frame + 192))
#define dStack_a8 (*(double *)(frame + 200))
#define dStack_a0 (*(double *)(frame + 208))
#define dStack_98 (*(double *)(frame + 216))
#define dStack_90 (*(double *)(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005954
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_10005954(void *backend,ushort glyph,double *transform,void *outline,int depth)

{
  unsigned char frame[400] = {0};

  byte *pbVar1;
  ulong uVar2;
  uint *puVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  bool bVar14;
  uchar uVar15;
  short sVar16;
  uint uVar17;
  byte *pbVar18;
  pf_point *ppVar19;
  ulong uVar20;
  short *psVar21;
  uint uVar22;
  ushort uVar23;
  long lVar24;
  pf_point *data;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  pf_point pVar39;

  if ((*(ushort *)((long)backend + 0xb2) <= glyph) ||
     (*(ulong *)((long)backend + 0xc0) <= (ulong)*(ushort *)((long)backend + 0xb2))) {
    return '\x01';
  }
  puVar3 = (uint *)(*(long *)((long)backend + 0xb8) + (ulong)glyph * 4);
  uVar17 = *puVar3;
  uVar6 = puVar3[1];
  if (uVar6 < uVar17) {
    return '\x01';
  }
  if (*(uint *)((long)backend + 0x7c) < uVar6) {
    return '\x01';
  }
  uVar6 = uVar6 - uVar17;
  if (uVar6 == 0) {
    return '\x01';
  }
  uVar20 = *(ulong *)((long)backend + 0x10);
  uVar27 = (ulong)(*(int *)((long)backend + 0x78) + uVar17);
  if (uVar20 < uVar27 || uVar20 - uVar27 < 10) {
    return '\0';
  }
  pcVar4 = (char *)(*(long *)((long)backend + 8) + uVar27);
  cVar7 = *pcVar4;
  if (cVar7 < '\0') {
    if (0xb < depth) {
      return '\0';
    }
    uVar28 = uVar27 + 10;
    while( true ) {
      if ((uVar27 + uVar6 < uVar28 || uVar20 < uVar28) || uVar20 - uVar28 < 4) {
        return '\0';
      }
      lVar24 = *(long *)((long)backend + 8);
      pbVar18 = (byte *)(lVar24 + uVar28);
      bVar9 = *pbVar18;
      bVar8 = pbVar18[1];
      uVar25 = uVar28 + 4;
      if ((bVar8 & 1) == 0) {
        if (uVar20 < uVar25 || uVar20 - uVar25 < 2) {
          return '\0';
        }
        if ((bVar8 >> 1 & 1) == 0) {
          return '\0';
        }
        uVar17 = (uint)*(char *)(lVar24 + uVar25);
        uVar28 = uVar28 + 6;
        uVar22 = (uint)(char)pbVar18[5];
      }
      else {
        if (uVar20 < uVar25 || uVar20 - uVar25 < 4) {
          return '\0';
        }
        if ((bVar8 >> 1 & 1) == 0) {
          return '\0';
        }
        uVar17 = (int)(short)((ushort)*(byte *)(lVar24 + uVar25) << 8) |
                 (uint)((byte *)(lVar24 + uVar25))[1];
        uVar22 = (int)(short)((ushort)pbVar18[6] << 8) | (uint)pbVar18[7];
        uVar28 = uVar28 + 8;
      }
      if ((bVar8 >> 3 & 1) == 0) {
        if ((bVar8 >> 6 & 1) == 0) {
          if ((char)bVar8 < '\0') {
            if (uVar20 < uVar28 || uVar20 - uVar28 < 8) {
              return '\0';
            }
            puVar5 = (ushort *)(lVar24 + uVar28);
            dVar29 = (double)(int)(short)(*puVar5 >> 8 | *puVar5 << 8) / 16384.0;
            dVar30 = (double)(int)(short)(puVar5[1] >> 8 | puVar5[1] << 8) / 16384.0;
            dVar31 = (double)(int)(short)(puVar5[2] >> 8 | puVar5[2] << 8) / 16384.0;
            uVar28 = uVar28 + 8;
            dVar36 = (double)(int)(short)(puVar5[3] >> 8 | puVar5[3] << 8) / 16384.0;
          }
          else {
            dVar30 = 0.0;
            dVar29 = 1.0;
            dVar31 = 0.0;
            dVar36 = 1.0;
          }
        }
        else {
          if (uVar20 < uVar28 || uVar20 - uVar28 < 4) {
            return '\0';
          }
          uVar10 = *(ushort *)(lVar24 + uVar28);
          dVar29 = (double)(int)(short)(uVar10 >> 8 | uVar10 << 8) / 16384.0;
          uVar10 = ((ushort *)(lVar24 + uVar28))[1];
          uVar28 = uVar28 + 4;
          dVar30 = 0.0;
          dVar31 = 0.0;
          dVar36 = (double)(int)(short)(uVar10 >> 8 | uVar10 << 8) / 16384.0;
        }
      }
      else {
        if (uVar20 < uVar28 || uVar20 - uVar28 < 2) {
          return '\0';
        }
        dVar29 = (double)(int)(short)(*(ushort *)(lVar24 + uVar28) >> 8 |
                                     *(ushort *)(lVar24 + uVar28) << 8) / 16384.0;
        uVar28 = uVar28 + 2;
        dVar30 = 0.0;
        dVar31 = 0.0;
        dVar36 = dVar29;
      }
      dVar32 = (double)(int)uVar17;
      dVar34 = (double)(int)uVar22;
      dVar33 = dVar32;
      if ((bVar9 & 8) != 0) {
        dVar33 = dVar30 * dVar34 + dVar32 * dVar29;
        dVar34 = dVar36 * dVar34 + dVar32 * dVar31;
      }
      dVar32 = *transform;
      dVar35 = transform[1];
      pvStack_b8 = (void *)(uintptr_t)pf_double_bits((dVar31 * dVar35 + dVar29 * dVar32));
      dStack_b0 = dVar36 * dVar35 + dVar30 * dVar32;
      dVar37 = transform[2];
      dVar38 = transform[3];
      dStack_a8 = dVar31 * dVar38 + dVar29 * dVar37;
      dStack_a0 = dVar36 * dVar38 + dVar30 * dVar37;
      dStack_98 = dVar34 * dVar35 + dVar33 * dVar32 + transform[4];
      dStack_90 = dVar34 * dVar38 + dVar33 * dVar37 + transform[5];
      uVar15 = recovered_10005954(backend,*(ushort *)(pbVar18 + 2) >> 8 |
                                          *(ushort *)(pbVar18 + 2) << 8,(double *)&pvStack_b8,
                                  outline,depth + 1);
      if (uVar15 == '\0') break;
      if ((bVar9 & 1) != 0) {
        uVar20 = *(ulong *)((long)backend + 0x10);
        if (uVar20 < uVar28 || uVar20 - uVar28 < 2) {
          return '\0';
        }
        uVar10 = *(ushort *)(*(long *)((long)backend + 8) + uVar28);
        uVar25 = (ulong)((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8);
        uVar28 = uVar28 + 2;
        if (uVar20 < uVar28 || uVar20 - uVar28 < uVar25) {
          return '\0';
        }
        uVar28 = uVar25 + uVar28;
      }
      if ((bVar8 >> 5 & 1) == 0) {
        return '\x01';
      }
      uVar20 = *(ulong *)((long)backend + 0x10);
    }
    return '\0';
  }
  uVar17 = (uint)CONCAT11(cVar7,pcVar4[1]);
  if (uVar17 == 0 || uVar20 - uVar27 < (ulong)uVar6) {
    return '\x01';
  }
  uVar28 = uVar27 + 10;
  if (uVar20 < uVar28 || uVar20 - uVar28 < (ulong)uVar17 << 1) {
    return '\0';
  }
  recovered_10006a5c((long *)&pvStack_b8,(ulong)uVar17);
  for (uVar20 = 0; (double)pf_double_bits(dStack_b0) != (double)uVar20; uVar20 = uVar20 + 1) {
    uVar10 = *(ushort *)(*(long *)((long)backend + 8) + uVar27 + 10);
    *(ushort *)((long)pvStack_b8 + uVar20 * 2) = uVar10 >> 8 | uVar10 << 8;
    uVar27 = uVar27 + 2;
  }
  uVar28 = uVar28 + (long)pf_double_bits(dStack_b0) * 2;
  uVar27 = *(ulong *)((long)backend + 0x10);
  if (uVar28 <= uVar27 && (uVar27 != uVar28 && uVar27 - uVar28 != 1)) {
    uVar10 = *(ushort *)(*(long *)((long)backend + 8) + uVar28);
    uVar20 = (ulong)((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8);
    uVar28 = uVar28 + 2;
    if (uVar28 <= uVar27 && uVar20 <= uVar27 - uVar28) {
      sVar13 = *(short *)((long)pvStack_b8 + (long)pf_double_bits(dStack_b0) * 2 + -2);
      uStack_c8 = 0;
      uStack_c0 = 0;
      pbStack_d0 = (byte *)0x0;
      uVar25 = (ulong)(ushort)(sVar13 + 1);
      recovered_10005468((long *)&pbStack_d0,uVar25);
      uVar27 = uVar20 + uVar28;
      while (uStack_c8 < uVar25) {
        if (*(ulong *)((long)backend + 0x10) <= uVar27) {
LAB_10005d7c:
          bVar14 = false;
          goto LAB_10006190;
        }
        bStack_e8 = *(byte *)(*(long *)((long)backend + 8) + uVar27);
        recovered_10006b70((long *)&pbStack_d0,&bStack_e8);
        uVar20 = uVar27 + 1;
        uVar28 = uVar20;
        if ((bStack_e8 >> 3 & 1) != 0) {
          if (*(ulong *)((long)backend + 0x10) <= uVar20) goto LAB_10005d7c;
          uVar28 = uVar27 + 2;
          bVar9 = *(byte *)(*(long *)((long)backend + 8) + uVar20);
          for (uVar17 = 0; uVar17 < bVar9; uVar17 = uVar17 + 1) {
            recovered_10006b70((long *)&pbStack_d0,&bStack_e8);
          }
        }
        uVar27 = uVar28;
      }
      recovered_10006bd8((long *)&bStack_e8,uVar25);
      recovered_10006bd8((long *)&psStack_100,uVar25);
      sVar16 = 0;
      pbVar18 = pbStack_d0;
      psVar21 = (short *)CONCAT71(uStack_e7,bStack_e8);
      uVar20 = uVar25;
      if (sVar13 != -1) {
        do {
          bVar9 = *pbVar18;
          if ((bVar9 >> 1 & 1) == 0) {
            if ((bVar9 >> 4 & 1) == 0) {
              if (*(ulong *)((long)backend + 0x10) < uVar27 ||
                  *(ulong *)((long)backend + 0x10) - uVar27 < 2) goto LAB_10006184;
              uVar10 = *(ushort *)(*(long *)((long)backend + 8) + uVar27);
              sVar16 = sVar16 + (uVar10 >> 8 | uVar10 << 8);
              uVar27 = uVar27 + 2;
            }
          }
          else {
            if (*(ulong *)((long)backend + 0x10) <= uVar27) goto LAB_10006184;
            pbVar1 = (byte *)(*(long *)((long)backend + 8) + uVar27);
            uVar27 = uVar27 + 1;
            uVar23 = (ushort)*pbVar1;
            uVar10 = -uVar23;
            if ((bVar9 & 0x10) != 0) {
              uVar10 = uVar23;
            }
            sVar16 = sVar16 + uVar10;
          }
          *psVar21 = sVar16;
          pbVar18 = pbVar18 + 1;
          uVar20 = uVar20 - 1;
          psVar21 = psVar21 + 1;
        } while (uVar20 != 0);
      }
      sVar16 = 0;
      pbVar18 = pbStack_d0;
      psVar21 = psStack_100;
      uVar20 = uVar25;
      if (sVar13 != -1) {
        do {
          bVar9 = *pbVar18;
          if ((bVar9 >> 2 & 1) == 0) {
            if ((bVar9 >> 5 & 1) == 0) {
              if (*(ulong *)((long)backend + 0x10) < uVar27 ||
                  *(ulong *)((long)backend + 0x10) - uVar27 < 2) goto LAB_10006184;
              uVar10 = *(ushort *)(*(long *)((long)backend + 8) + uVar27);
              sVar16 = sVar16 + (uVar10 >> 8 | uVar10 << 8);
              uVar27 = uVar27 + 2;
            }
          }
          else {
            if (*(ulong *)((long)backend + 0x10) <= uVar27) goto LAB_10006184;
            pbVar1 = (byte *)(*(long *)((long)backend + 8) + uVar27);
            uVar27 = uVar27 + 1;
            uVar23 = (ushort)*pbVar1;
            uVar10 = -uVar23;
            if ((bVar9 & 0x20) != 0) {
              uVar10 = uVar23;
            }
            sVar16 = sVar16 + uVar10;
          }
          *psVar21 = sVar16;
          pbVar18 = pbVar18 + 1;
          uVar25 = uVar25 - 1;
          uVar20 = 0;
          psVar21 = psVar21 + 1;
        } while (uVar25 != 0);
      }
      for (uVar27 = 0; bVar14 = (ulong)pf_double_bits(dStack_b0) <= uVar27, !bVar14; uVar27 = uVar27 + 1) {
        uVar10 = *(ushort *)((long)pvStack_b8 + uVar27 * 2);
        uVar28 = (ulong)uVar10;
        if ((uVar28 < uVar20) || ((ushort)(sVar13 + 1U) <= uVar10)) break;
        ppStack_118 = (pf_point *)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        pcStack_130 = (char *)0x0;
        uStack_120 = 0;
        lStack_128 = 0;
        uVar25 = uVar20;
        while( true ) {
          uVar26 = uStack_110;
          data = ppStack_118;
          if (uVar28 < uVar25) break;
          dVar36 = (double)(int)*(short *)(CONCAT71(uStack_e7,bStack_e8) + uVar25 * 2);
          sVar16 = psStack_100[uVar25];
          pStack_140.y = (double)(int)sVar16;
          pStack_140.x = dVar36;
          PF_PART1(pStack_150.x, 0) = pbStack_d0[uVar25] & 1;
          recovered_10006830((long *)&ppStack_118,&pStack_140.x);
          recovered_10006d58((long *)&pcStack_130,(undefined1 *)&pStack_150);
          uVar26 = uVar20;
          if (uVar28 != uVar25) {
            uVar26 = uVar25 + 1;
          }
          if (((PF_PART1(pStack_150.x, 0) & 1) == 0) && ((pbStack_d0[uVar26] & 1) == 0)) {
            sVar11 = *(short *)(CONCAT71(uStack_e7,bStack_e8) + uVar26 * 2);
            sVar12 = psStack_100[uVar26];
            if (uStack_110 == uStack_108) {
              uVar26 = 4;
              if (uStack_110 != 0) {
                uVar26 = uStack_110 << 1;
              }
              recovered_10006cec((long *)&ppStack_118,uVar26);
            }
            ppStack_118[uStack_110].x = (dVar36 + (double)(int)sVar11) * 0.5;
            ppStack_118[uStack_110].y = ((double)(int)sVar16 + (double)(int)sVar12) * 0.5;
            uStack_110 = uStack_110 + 1;
            PF_PART1(pStack_160.x, 0) = 1;
            recovered_10006e3c((long *)&pcStack_130,(undefined1 *)&pStack_160);
          }
          uVar25 = uVar25 + 1;
        }
        if (uStack_110 != 0) {
          if (*pcStack_130 == '\x01') {
          }
          else {
            if (pcStack_130[lStack_128 + -1] == '\x01') {
              pVar39 = ppStack_118[uStack_110 - 1];
            }
            else {
              pVar39 = recovered_10006888(ppStack_118 + (uStack_110 - 1),ppStack_118);
            }
            uVar20 = uVar26;
            if (data != (pf_point *)0x0) {
              uVar20 = 0;
            }
            if (uVar26 == uStack_108) {
              recovered_10006cec((long *)&ppStack_118,uVar26 << 1);
              data = ppStack_118;
              uVar26 = uStack_110;
            }
            ppVar19 = data + uVar26;
            for (uVar25 = uVar26; uVar20 < uVar25; uVar25 = uVar25 - 1) {
              dVar36 = ppVar19[-1].x;
              ppVar19->y = ppVar19[-1].y;
              ppVar19->x = dVar36;
              ppVar19 = ppVar19 + -1;
            }
            data[uVar20] = pVar39;
            PF_PART1(pStack_140.x, 0) = 1;
            uStack_110 = uVar26 + 1;
            recovered_10006ea0((long *)&pcStack_130,(long)pcStack_130,(undefined1 *)&pStack_140);
            if (uVar26 + 1 == 0) goto LAB_1000616c;
          }
          recovered_10006830((long *)&ppStack_118,&data->x);
          PF_PART1(pStack_140.x, 0) = 1;
          recovered_10006e3c((long *)&pcStack_130,(undefined1 *)&pStack_140);
          data = ppStack_118;
          pStack_140 = recovered_10006918(transform,ppStack_118);
          recovered_100068a4(outline,&pStack_140.x);
          uVar20 = uStack_110;
          uVar25 = 0;
          while (uVar26 = uVar25 + 1, uVar26 < uVar20) {
            if (pcStack_130[uVar26] == '\x01') {
              pStack_140 = recovered_10006918(transform,data + uVar26);
              recovered_10006944(outline,&pStack_140.x);
              uVar25 = uVar26;
            }
            else {
              uVar2 = uVar25 + 2;
              if (uVar20 <= uVar2) break;
              pStack_140 = recovered_10006918(transform,data + uVar25);
              pStack_150 = recovered_10006918(transform,data + uVar26);
              pStack_160 = recovered_10006918(transform,data + uVar2);
              recovered_10007058(outline,&pStack_140,&pStack_150,&pStack_160,0);
              uVar25 = uVar2;
            }
          }
          recovered_100069e0(outline);
        }
LAB_1000616c:
        uVar20 = uVar28 + 1;
        lStack_128 = 0;
        recovered_10002e70(pcStack_130);
        recovered_10002e70(data);
      }
      goto LAB_10006188;
    }
  }
  bVar14 = false;
LAB_10006198:
  dStack_b0 = 0.0;
  recovered_10002e70(pvStack_b8);
  return bVar14;
LAB_10006184:
  bVar14 = false;
LAB_10006188:
  uStack_f8 = 0;
  recovered_10002e70(psStack_100);
  uStack_e0 = 0;
  recovered_10002e70((void *)CONCAT71(uStack_e7,bStack_e8));
LAB_10006190:
  uStack_c8 = 0;
  recovered_10002e70(pbStack_d0);
  goto LAB_10006198;
}

#undef pStack_160
#undef pStack_150
#undef pStack_140
#undef pcStack_130
#undef lStack_128
#undef uStack_120
#undef ppStack_118
#undef uStack_110
#undef uStack_108
#undef psStack_100
#undef uStack_f8
#undef bStack_e8
#undef uStack_e7
#undef uStack_e0
#undef pbStack_d0
#undef uStack_c8
#undef uStack_c0
#undef pvStack_b8
#undef dStack_b0
#undef dStack_a8
#undef dStack_a0
#undef dStack_98
#undef dStack_90

/* Recover the four-by-four nonzero-winding coverage rasterizer.
 * Pooka's Free Software License. */
void recovered_10006210(int *result,double advance,long *outline){
 recovered_10005914((undefined8 *)result);
 *(double *)(result+4)=advance;
 if(!outline[1]||*((byte *)outline+25)!=1)return;
 double *bounds=(double *)(outline+8);
 int x0=(int)recovered_10001148(bounds[0]),x1=(int)recovered_10001164(bounds[1]);
 int y0=(int)recovered_10001148(bounds[2]),y1=(int)recovered_10001164(bounds[3]);
 int width=x1-x0+2,height=y1-y0+2;
 if(width<=0||height<=0)return;
 result[0]=x0-1;result[1]=y1+1;result[2]=width;result[3]=height;
 byte zero=0;recovered_10007170((long *)(result+6),(ulong)width*(ulong)height,&zero);
 byte *pixels=(byte *)(uintptr_t)*(ulong *)(result+6);
 double *edges=(double *)(uintptr_t)outline[0];
 for(int row=0;row<height;row++)for(int column=0;column<width;column++){
  int covered=0;
  for(int sy=0;sy<4;sy++)for(int sx=0;sx<4;sx++){
   double y=(double)result[1]-row-0.125-sy*0.25;
   double x=(double)result[0]+column+0.125+sx*0.25;
   int winding=0;
   for(ulong i=0;i<(ulong)outline[1];i++){
    double *edge=edges+i*4;double ay=edge[1],by=edge[3];int direction=0;
    if(ay<=y&&y<by)direction=1;else if(y<ay&&by<=y)direction=-1;
    if(direction&&edge[0]+((y-ay)*(edge[2]-edge[0]))/(by-ay)>x)winding+=direction;
   }
   if(winding)covered++;
  }
  pixels[(ulong)row*width+column]=(byte)(covered*255/16);
 }
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006460
 */

long recovered_10006460(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_1000651c(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 8;
}


#undef PTR_DAT_1000c010
#define PTR_DAT_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2174U)))
#define local_22 (*(undefined2 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006494
 */

long recovered_10006494(long *param_1,undefined4 *param_2)

{
  unsigned char frame[82] = {0};

  long lVar1;

  lVar1 = recovered_10006460(param_1,param_2);
  if (lVar1 == *param_1 + param_1[1] * 8) {
    recovered_100065bc((long)param_1);
    local_22 = 0;
    recovered_100065ec(param_1,param_2,&local_22);
    recovered_10005744(param_1 + 6,(undefined8 *)PTR_DAT_1000c010);
    recovered_10006668(param_1,param_1[1] + -1);
    lVar1 = *param_1 + param_1[1] * 8 + -8;
  }
  return lVar1 + 4;
}

#undef PTR_DAT_1000c010
#undef local_22

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000651c
 */

long recovered_1000651c(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  long *plVar3;

  if (param_1[4] == 0) {
    return -1;
  }
  uVar1 = recovered_10006588((long)param_1,(byte *)param_2);
  plVar3 = (long *)(param_1[3] + uVar1 * 8);
  while ((lVar2 = *plVar3, lVar2 != -1 && (*(int *)(*param_1 + lVar2 * 8) != *param_2))) {
    plVar3 = (long *)(param_1[6] + lVar2 * 8);
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006588
 */

ulong recovered_10006588(long param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10005594(param_2,4);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


#undef PTR_DAT_1000c010
#define PTR_DAT_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2174U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065bc
 */

void recovered_100065bc(long param_1)

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
  uVar3 = recovered_10006710(uVar1);
  puVar2 = PTR_DAT_1000c010;
  recovered_100055cc((long *)(param_1 + 0x18),uVar3,(undefined8 *)PTR_DAT_1000c010);
  recovered_100055cc((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar2);
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x20); uVar3 = uVar3 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar3 * 8) = 0xffffffffffffffff;
  }
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
    recovered_10006668((long *)param_1,uVar3);
  }
  return;
}

#undef PTR_DAT_1000c010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065ec
 */

long recovered_100065ec(long *param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar2 = 4;
    if (lVar3 != 0) {
      uVar2 = lVar3 << 1;
    }
    recovered_10006790(param_1,uVar2);
    lVar3 = param_1[1];
  }
  lVar4 = *param_1;
  puVar1 = (undefined4 *)(lVar4 + lVar3 * 8);
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *param_3;
  param_1[1] = lVar3 + 1;
  return lVar4 + (lVar3 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006668
 */

void recovered_10006668(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_10006588((long)param_1,(byte *)(*param_1 + param_2 * 8));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


#undef PTR_DAT_1000c010
#define PTR_DAT_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2174U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066a8
 */

void recovered_100066a8(long param_1,ulong param_2)

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
  uVar2 = recovered_10006710(uVar2);
  puVar1 = PTR_DAT_1000c010;
  recovered_100055cc((long *)(param_1 + 0x18),uVar2,(undefined8 *)PTR_DAT_1000c010);
  recovered_100055cc((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar1);
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar2 * 8) = 0xffffffffffffffff;
  }
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 8); uVar2 = uVar2 + 1) {
    recovered_10006668((long *)param_1,uVar2);
  }
  return;
}

#undef PTR_DAT_1000c010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

ulong recovered_10006710(ulong param_1)

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
 * Address: 0x1000672c
 */

void recovered_1000672c(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_10006668((long *)param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006790
 */

void recovered_10006790(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10006804(param_2);
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
 * Address: 0x10006804
 */

ulonglong recovered_10006804(long param_1)

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
 * Address: 0x10006814
 */

void recovered_10006814(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x10006830
 */

void recovered_10006830(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

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
    recovered_10006cec(param_1,uVar1);
    lVar3 = param_1[1];
  }
  uVar4 = *param_2;
  puVar2 = (undefined8 *)(*param_1 + lVar3 * 0x10);
  puVar2[1] = param_2[1];
  *puVar2 = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recover the native two-double midpoint return. Pooka's Free Software License. */
pf_point recovered_10006888(pf_point *a,pf_point *b){pf_point p={(a->x+b->x)*0.5,(a->y+b->y)*0.5};return p;}


/* Preserve double representations in the outline state.
 * Pooka's Free Software License. */
static void pf_outline_bounds(long *outline,double *point);
void recovered_100068a4(long *outline,double *point){
 if(*(byte *)(outline+3)==1&&(pf_bits_double(outline[6])!=pf_bits_double(outline[4])||pf_bits_double(outline[7])!=pf_bits_double(outline[5])))recovered_10006944(outline,(double *)(outline+4));
 outline[4]=pf_double_bits(point[0]);outline[5]=pf_double_bits(point[1]);outline[6]=outline[4];outline[7]=outline[5];*(byte *)(outline+3)=1;pf_outline_bounds(outline,point);
}
static void pf_outline_bounds(long *outline,double *point){
 double *b=(double *)(outline+8);byte *present=(byte *)outline+25;double x=point[0],y=point[1];
 if(!(*present&1)){b[0]=b[1]=x;b[2]=b[3]=y;*present=1;return;}
 b[0]=b[0]<=x?b[0]:x;b[1]=x<=b[1]?b[1]:x;b[2]=b[2]<=y?b[2]:y;b[3]=y<=b[3]?b[3]:y;
}


/* Restore both floating-point lanes of the affine point result.
 * Pooka's Free Software License. */
pf_point recovered_10006918(double *m,pf_point *p){pf_point v={m[0]*p->x+m[1]*p->y+m[4],m[2]*p->x+m[3]*p->y+m[5]};return v;}


/* Preserve double representations in the outline state.
 * Pooka's Free Software License. */
void recovered_10006944(long *outline,double *point){
 if(!(*(byte *)(outline+3)&1)){recovered_100068a4(outline,point);return;}
 if(pf_bits_double(outline[6])!=point[0]||pf_bits_double(outline[7])!=point[1]){
  uint64_t edge[4]={(uint64_t)outline[6],(uint64_t)outline[7],pf_double_bits(point[0]),pf_double_bits(point[1])};recovered_10006fb8(outline,edge);outline[6]=edge[2];outline[7]=edge[3];
 }pf_outline_bounds(outline,point);
}


/* Preserve double representations in the outline state.
 * Pooka's Free Software License. */
void recovered_100069e0(long *outline){
 if(*(byte *)(outline+3)==1&&(pf_bits_double(outline[6])!=pf_bits_double(outline[4])||pf_bits_double(outline[7])!=pf_bits_double(outline[5]))){uint64_t edge[4]={(uint64_t)outline[6],(uint64_t)outline[7],(uint64_t)outline[4],(uint64_t)outline[5]};recovered_10006fb8(outline,edge);}
 *(byte *)(outline+3)=0;outline[6]=outline[4];outline[7]=outline[5];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a5c
 */

long * recovered_10006a5c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10006a88(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a88
 */

void recovered_10006a88(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006aec(param_1,param_2);
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
 * Address: 0x10006aec
 */

void recovered_10006aec(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10006b60(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)(uVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b60
 */

ulonglong recovered_10006b60(long param_1)

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
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

long recovered_10006b70(long *param_1,undefined1 *param_2)

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
    recovered_10005468(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bd8
 */

long * recovered_10006bd8(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10006c04(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c04
 */

void recovered_10006c04(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006c68(param_1,param_2);
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
 * Address: 0x10006c68
 */

void recovered_10006c68(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10006cdc(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)(uVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cdc
 */

ulonglong recovered_10006cdc(long param_1)

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
  pvVar1 = recovered_10000c10(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cec
 */

void recovered_10006cec(long *param_1,ulong param_2)

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
 * Address: 0x10006d58
 */

long recovered_10006d58(long *param_1,undefined1 *param_2)

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
    recovered_10006dbc(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dbc
 */

void recovered_10006dbc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10006e30(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e30
 */

ulonglong recovered_10006e30(ulong param_1)

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
 * Address: 0x10006e3c
 */

long recovered_10006e3c(long *param_1,undefined1 *param_2)

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
    recovered_10006dbc(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

long recovered_10006ea0(long *param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;

  if (*param_1 == 0) {
    uVar2 = param_1[1];
    uVar5 = uVar2;
  }
  else {
    uVar2 = param_1[1];
    uVar5 = param_2 - *param_1;
  }
  if (uVar2 == param_1[2]) {
    uVar3 = 4;
    if (uVar2 != 0) {
      uVar3 = uVar2 << 1;
    }
    recovered_10006dbc(param_1,uVar3);
  }
  lVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = (undefined1 *)(lVar1 + uVar2);
  for (uVar3 = uVar2; uVar5 < uVar3; uVar3 = uVar3 - 1) {
    *puVar4 = puVar4[-1];
    puVar4 = puVar4 + -1;
  }
  *(undefined1 *)(lVar1 + uVar5) = *param_3;
  param_1[1] = uVar2 + 1;
  return lVar1 + uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f48
 */

void recovered_10006f48(long param_1,double *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    dVar2 = param_2[1];
    dVar1 = *param_2;
    *(double *)(param_1 + 0x40) = dVar1;
    *(double *)(param_1 + 0x48) = dVar1;
    *(double *)(param_1 + 0x50) = dVar2;
    *(double *)(param_1 + 0x58) = dVar2;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return;
  }
  dVar1 = *param_2;
  if (*(double *)(param_1 + 0x40) <= *param_2) {
    dVar1 = *(double *)(param_1 + 0x40);
  }
  *(double *)(param_1 + 0x40) = dVar1;
  dVar1 = *param_2;
  if (*param_2 <= *(double *)(param_1 + 0x48)) {
    dVar1 = *(double *)(param_1 + 0x48);
  }
  *(double *)(param_1 + 0x48) = dVar1;
  dVar1 = param_2[1];
  if (*(double *)(param_1 + 0x50) <= param_2[1]) {
    dVar1 = *(double *)(param_1 + 0x50);
  }
  *(double *)(param_1 + 0x50) = dVar1;
  dVar1 = param_2[1];
  if (param_2[1] <= *(double *)(param_1 + 0x58)) {
    dVar1 = *(double *)(param_1 + 0x58);
  }
  *(double *)(param_1 + 0x58) = dVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fb8
 */

void recovered_10006fb8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar3 = 4;
    if (uVar5 != 0) {
      uVar3 = uVar5 << 1;
    }
    if (uVar5 < uVar3) {
      pvVar4 = recovered_10002e3c(uVar3 << 5);
      lVar6 = 0;
      for (lVar7 = param_1[1]; lVar7 != 0; lVar7 = lVar7 + -1) {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        puVar2 = (undefined8 *)(*param_1 + lVar6);
        uVar10 = *puVar2;
        uVar9 = puVar2[3];
        uVar8 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar10;
        puVar1[3] = uVar9;
        puVar1[2] = uVar8;
        lVar6 = lVar6 + 0x20;
      }
      recovered_10002e70((void *)*param_1);
      *param_1 = (long)pvVar4;
      param_1[2] = uVar3;
      uVar5 = param_1[1];
    }
  }
  puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x20);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recover the native De Casteljau subdivision and its five real arguments.
 * Pooka's Free Software License. */
void recovered_10007058(void *outline,pf_point *start,pf_point *control,pf_point *end,int depth){
 pf_point center={(start->x+end->x)*0.5,(start->y+end->y)*0.5};
 double dx=control->x-center.x,dy=control->y-center.y;
 double tolerance=*(double *)(pf_module_state+0xf4);
 if(depth<10&&dx*dx+dy*dy>tolerance){
  pf_point a={(start->x+control->x)*0.5,(start->y+control->y)*0.5};
  pf_point b={(control->x+end->x)*0.5,(control->y+end->y)*0.5};
  pf_point middle={(a.x+b.x)*0.5,(a.y+b.y)*0.5};
  recovered_10007058(outline,start,&a,&middle,depth+1);
  recovered_10007058(outline,&middle,&b,end,depth+1);
 }else recovered_10006944(outline,(double *)end);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007170
 */

void recovered_10007170(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_10005468(param_1,param_2);
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
    recovered_10005468(param_1,param_2);
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
 * Address: 0x10007178
 */

void recovered_10007178(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10005468(param_1,param_2);
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
    recovered_10005468(param_1,param_2);
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
 * Address: 0x100071fc
 */

void recovered_100071fc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10005468(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef LAB_1000c0a8
#define LAB_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007264
 */

undefined8 * recovered_10007264(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = &LAB_1000c0a8;
  recovered_10008164((long)(param_1 + 0x308));
  recovered_100080a8(param_1 + 0x305);
  recovered_10008128((long)(param_1 + 5));
  return param_1;
}

#undef LAB_1000c0a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072ac
 */

void recovered_100072ac(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

  undefined8 *buffer;

  buffer = recovered_10007264(in_x0);
  recovered_10000c54(buffer);
  return;
}


#undef DAT_1000a233
#define DAT_1000a233 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x397U)))
#undef str_1000a20b
#define str_1000a20b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36fU)))
#undef str_1000a21d
#define str_1000a21d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x381U)))
#undef str_1000a229
#define str_1000a229 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38dU)))
#undef str_1000a23e
#define str_1000a23e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a2U)))
#undef str_1000a245
#define str_1000a245 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#define pvStack_100 (*(void * *)(frame + 24))
#define pvStack_108 (*(void * *)(frame + 16))
#define pbStack_f0 (*(byte * *)(frame + 40))
#define uStack_f8 (*(undefined8 *)(frame + 32))
#define uStack_e0 (*(undefined8 *)(frame + 56))
#define uStack_e8 (*(ulong *)(frame + 48))
#define pvStack_d0 (*(void * *)(frame + 72))
#define pbStack_d8 (*(byte * *)(frame + 64))
#define pvStack_c0 (*(void * *)(frame + 88))
#define uStack_c8 (*(undefined8 *)(frame + 80))
#define pvStack_a8 (*(void * *)(frame + 112))
#define uStack_b8 (*(undefined8 *)(frame + 96))
#define uStack_98 (*(undefined8 *)(frame + 128))
#define pvStack_a0 (*(void * *)(frame + 120))
#define pvStack_80 (*(void * *)(frame + 152))
#define pvStack_88 (*(void * *)(frame + 144))
#define auStack_6c (*(uint (*)[3])(frame + 172))
#define uStack_78 (*(undefined8 *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c0
 */

bool recovered_100072c0(long param_1,long *param_2)

{
  unsigned char frame[312] = {0};

  byte *pbVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  bool bVar7;
  byte **ppbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  void *pvVar17;
  int iVar18;
  ulong uVar19;
  void *pvVar20;
  void *pvVar21;

  pbStack_d8 = (byte *)0x0;
  uStack_c8 = 0;
  pvStack_d0 = (void *)0x0;
  pbStack_f0 = (byte *)0x0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uVar15 = param_2[1];
  if ((1 < uVar15) && (*(char *)*param_2 == -0x80)) {
    bVar5 = 0;
    uVar19 = 0;
    do {
      lVar16 = *param_2;
      do {
        uVar9 = uVar19 + 6;
        if ((uVar15 < uVar9) || (pcVar2 = (char *)(lVar16 + uVar19), *pcVar2 != -0x80)) {
LAB_100073e0:
          if (!((bool)(pvStack_d0 != (void *)0x0 & bVar5) && uStack_e8 != 0)) goto LAB_10007708;
          goto LAB_10007560;
        }
        uVar19 = uVar9 + *(uint *)(pcVar2 + 2);
        if (uVar15 < uVar19) goto LAB_10007708;
        cVar4 = pcVar2[1];
        if (cVar4 == '\x03') goto LAB_100073e0;
        if (cVar4 == '\x02') {
          bVar5 = 1;
          ppbVar8 = &pbStack_f0;
          goto LAB_10007378;
        }
      } while (cVar4 != '\x01');
      ppbVar8 = &pbStack_d8;
LAB_10007378:
      recovered_10008194((long *)ppbVar8,(long)(*ppbVar8 + (long)ppbVar8[1]),
                         (undefined1 *)(lVar16 + uVar9),(undefined1 *)(lVar16 + uVar19));
      uVar15 = param_2[1];
    } while( true );
  }
  uVar15 = recovered_1000828c(param_2,str_1000a20b,0);
  if (uVar15 != 0xffffffffffffffff) {
    puVar3 = (undefined1 *)*param_2;
    uVar9 = param_2[1];
    uVar19 = uVar15;
    if (uVar15 <= uVar9) {
      uVar19 = uVar9;
    }
    for (; uVar15 < uVar9; uVar15 = uVar15 + 1) {
      if (puVar3[uVar15] == '\n' || puVar3[uVar15] == '\r') goto LAB_10007408;
    }
    uVar15 = uVar19;
LAB_10007408:
    uVar19 = uVar15;
    if (uVar15 <= uVar9) {
      uVar19 = uVar9;
    }
    for (; uVar15 < uVar9; uVar15 = uVar15 + 1) {
      if (puVar3[uVar15] != '\r' && puVar3[uVar15] != '\n') goto LAB_10007434;
    }
    uVar15 = uVar19;
LAB_10007434:
    recovered_10008318(&pbStack_d8,puVar3,puVar3 + uVar15);
    uVar9 = recovered_1000828c(param_2,str_1000a21d,uVar15);
    uVar19 = param_2[1];
    if (uVar9 != 0xffffffffffffffff) {
      uVar19 = uVar9;
    }
    pvStack_80 = (void *)0x0;
    uStack_78 = 0;
    pvStack_88 = (void *)0x0;
    recovered_1000832c((long *)&pvStack_88,uVar19 - uVar15);
    for (; uVar15 < uVar19; uVar15 = uVar15 + 1) {
      bVar5 = *(byte *)(*param_2 + uVar15);
      if (((byte)(bVar5 - 0x30) < 10) ||
         (bVar5 - 0x41 < 0x26 && (1L << ((ulong)(bVar5 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)) {
        recovered_100083a4((long *)&pvStack_88,bVar5);
      }
    }
    if (((ulong)pvStack_80 & 1) != 0) {
      pvStack_80 = (void *)((long)pvStack_80 - 1);
      *(undefined1 *)((long)pvStack_88 + (long)pvStack_80) = 0;
    }
    if (pvStack_80 != (void *)0x0) {
      recovered_10005468((long *)&pbStack_f0,(ulong)pvStack_80 >> 1);
      for (lVar16 = 0; uVar15 = uStack_e8, lVar16 + 1U < pvStack_80; lVar16 = lVar16 + 2) {
        PF_PART3(pvStack_a0, 0) = (uint3)*(ushort *)((long)pvStack_88 + lVar16);
        lVar10 = recovered_10001634((byte *)&pvStack_a0,(undefined8 *)0x0,0x10);
        pvStack_c0 = (void *)CONCAT71(PF_PART7(pvStack_c0, 1),(char)lVar10);
        recovered_1000845c((long *)&pbStack_f0,(undefined1 *)&pvStack_c0);
      }
      if (pvStack_d0 != (void *)0x0) {
        recovered_10002e70(pvStack_88);
        if (uVar15 == 0) goto LAB_10007708;
LAB_10007560:
        uVar15 = recovered_1000828c((long *)&pbStack_d8,str_1000a229,0);
        if (uVar15 != 0xffffffffffffffff) {
          pvVar21 = (void *)(uVar15 + 9);
          do {
            if (pvStack_d0 <= pvVar21) goto LAB_10007608;
            pbVar1 = pbStack_d8 + (long)pvVar21;
            pvVar21 = (void *)((long)pvVar21 + 1);
          } while ((*pbVar1 | 0x20) != 0x7b);
          pvStack_c0 = (void *)0x0;
          pvStack_a8 = (void *)0x0;
          pvStack_88 = pvVar21;
          bVar7 = recovered_100084c4((long *)&pbStack_d8,(ulong *)&pvStack_88,(double *)&pvStack_a0)
          ;
          if ((((bVar7) &&
               (bVar7 = recovered_100084c4((long *)&pbStack_d8,(ulong *)&pvStack_88,
                                           (double *)&pvStack_c0), bVar7)) &&
              (bVar7 = recovered_100084c4((long *)&pbStack_d8,(ulong *)&pvStack_88,
                                          (double *)&pvStack_108), bVar7)) &&
             (bVar7 = recovered_100084c4((long *)&pbStack_d8,(ulong *)&pvStack_88,
                                         (double *)&pvStack_a8), bVar7)) {
            pvVar21 = pvStack_a8;
            if (pf_bits_double((uintptr_t)pvStack_a8) <= 0.0) {
              pvVar21 = (void *)0x0;
            }
            *(void **)(param_1 + 0x10) = pvVar21;
            *(double *)(param_1 + 0x18) = -pf_bits_double((uintptr_t)pvStack_c0);
          }
        }
LAB_10007608:
        pvVar21 = (void *)0x0;
        while ((pvVar21 < pvStack_d0 &&
               (uVar15 = recovered_1000828c((long *)&pbStack_d8,&DAT_1000a233,(ulong)pvVar21),
               uVar15 != 0xffffffffffffffff))) {
          pvVar21 = (void *)(uVar15 + 3);
          pvStack_c0 = (void *)((ulong)pvStack_c0 & 0xffffffff00000000);
          pvStack_a0 = pvVar21;
          uVar11 = recovered_1000854c((long *)&pbStack_d8,(ulong *)&pvStack_a0,(int *)&pvStack_c0);
          pvVar17 = pvStack_c0;
          if ((int)uVar11 != 0) {
            if ((uint)pvStack_c0 < 0x100) {
              recovered_10008618((long *)&pbStack_d8,(ulong *)&pvStack_a0);
              if ((pvStack_a0 < pvStack_d0) && (pbStack_d8[(long)pvStack_a0] == 0x2f)) {
                pvVar20 = (void *)((long)pvStack_a0 + 1);
                for (pvVar13 = pvVar20; pvVar13 < pvStack_d0; pvVar13 = (void *)((long)pvVar13 + 1))
                {
                  if (pbStack_d8[(long)pvVar13] < 0x21 &&
                      (1L << ((ulong)pbStack_d8[(long)pvVar13] & 0x3f) & 0x100003e00U) != 0)
                  goto LAB_100076d8;
                }
                pvVar13 = pvStack_d0;
LAB_100076d8:
                if ((long)pvVar13 - (long)pvVar20 != 0) {
                  recovered_100086ac((long *)&pvStack_88,(long)(pbStack_d8 + (long)pvVar20),
                                     (long)pvVar13 - (long)pvVar20);
                  recovered_10008660((undefined8 *)
                                     (param_1 + 0x28 + ((ulong)pvVar17 & 0xffffffff) * 0x18),
                                     &pvStack_88);
                  recovered_10002e70(pvStack_88);
                  pvVar21 = pvVar13;
                }
              }
            }
          }
        }
        if (uStack_e8 == 0) {
          pvVar21 = (void *)0x0;
          bVar7 = false;
          uStack_f8 = 0;
          pvStack_108 = (void *)0x0;
        }
        else {
          pvStack_80 = (void *)0x0;
          uStack_78 = 0;
          pvStack_88 = (void *)0x0;
          recovered_10005468((long *)&pvStack_88,uStack_e8);
          iVar18 = 0xd971;
          pbVar1 = pbStack_f0;
          for (uVar15 = uStack_e8; uVar15 != 0; uVar15 = uVar15 - 1) {
            bVar5 = *pbVar1;
            uVar19 = (ulong)pvStack_a0 >> 8;
            pvStack_a0 = (void *)CONCAT71((int7)uVar19,bVar5 ^ (byte)((uint)iVar18 >> 8));
            recovered_10006b70((long *)&pvStack_88,(undefined1 *)&pvStack_a0);
            iVar18 = (iVar18 + (uint)bVar5) * 0xce6d + 0x58bf;
            pbVar1 = pbVar1 + 1;
          }
          if (pvStack_80 < (void *)0x5) {
            pvVar17 = (void *)0x0;
            uStack_f8 = 0;
            pvVar20 = (void *)0x0;
          }
          else {
            recovered_10008814((long *)&pvStack_88,(long)pvStack_88,(long)pvStack_88 + 4);
            uStack_f8 = uStack_78;
            pvVar17 = pvStack_88;
            pvStack_88 = (void *)0x0;
            uStack_78 = 0;
            pvVar20 = pvStack_80;
          }
          pvStack_80 = (void *)0x0;
          pvStack_108 = pvVar17;
          pvStack_100 = pvVar20;
          recovered_10002e70(pvStack_88);
          pvVar21 = pvVar17;
          if (pvVar20 != (void *)0x0) {
            uVar15 = recovered_1000828c((long *)&pvStack_108,(char *)((uintptr_t)pf_module_state+0x39bU),0);
            if (uVar15 != 0xffffffffffffffff) {
              pvStack_88 = (void *)(uVar15 + 6);
              pvStack_a0 = (void *)((ulong)pvStack_a0 & 0xffffffff00000000);
              uVar11 = recovered_1000854c((long *)&pvStack_108,(ulong *)&pvStack_88,
                                          (int *)&pvStack_a0);
              if ((int)uVar11 != 0) {
                *(undefined4 *)(param_1 + 0x20) = PF_PART4(pvStack_a0, 0);
              }
            }
            pvVar13 = (void *)recovered_1000828c((long *)&pvStack_108,str_1000a23e,0);
            pvVar14 = (void *)recovered_1000828c((long *)&pvStack_108,str_1000a245,0);
            if (((pvVar13 != (void *)0xffffffffffffffff && pvVar14 != (void *)0xffffffffffffffff) &&
                pvVar13 <= pvVar14) &&
                ((pvVar13 == (void *)0xffffffffffffffff || pvVar14 == (void *)0xffffffffffffffff) ||
                pvVar14 != pvVar13)) {
              while( true ) {
                pvVar13 = (void *)recovered_1000828c((long *)&pvStack_108,&DAT_1000a233,
                                                     (ulong)pvVar13);
                pvVar6 = pvStack_100;
                pvVar21 = pvStack_108;
                if (!(pvVar13 != (void *)0xffffffffffffffff && pvVar13 < pvVar14)) break;
                pvVar13 = (void *)((long)pvVar13 + 3);
                pvStack_a8 = (void *)((ulong)pvStack_a8 & 0xffffffff00000000);
                auStack_6c[0] = 0;
                pvStack_c0 = pvVar13;
                uVar11 = recovered_1000854c((long *)&pvStack_108,(ulong *)&pvStack_c0,
                                            (int *)&pvStack_a8);
                if ((((int)uVar11 != 0) &&
                    (uVar11 = recovered_1000854c((long *)&pvStack_108,(ulong *)&pvStack_c0,
                                                 (int *)auStack_6c), (int)uVar11 != 0)) &&
                   (uVar15 = (ulong)auStack_6c[0], -1 < (int)auStack_6c[0])) {
                  recovered_10008618((long *)&pvStack_108,(ulong *)&pvStack_c0);
                  pvVar6 = pvStack_a8;
                  pvVar21 = (void *)((long)pvStack_c0 + 2);
                  if (((pvVar21 <= pvVar20) && (*(char *)((long)pvVar17 + (long)pvStack_c0) == 'R'))
                     && (((char *)((long)pvVar17 + (long)pvStack_c0))[1] == 'D')) {
                    if ((pvVar21 < pvVar20) && (*(char *)((long)pvVar17 + (long)pvVar21) == ' ')) {
                      pvVar21 = (void *)((long)pvStack_c0 + 3);
                    }
                    pvStack_c0 = pvVar21;
                    pvVar13 = pvStack_c0;
                    if (pvVar20 < pvStack_c0 || (ulong)((long)pvVar20 - (long)pvStack_c0) < uVar15)
                    {
                      bVar7 = false;
                      pvVar21 = pvStack_108;
                      goto LAB_10007ac8;
                    }
                    if (-1 < (int)pvStack_a8) {
                      if (*(ulong *)(param_1 + 0x1830) <= ((ulong)pvStack_a8 & 0xffffffff)) {
                        recovered_10008880((long *)(param_1 + 0x1828),
                                           ((ulong)pvStack_a8 & 0xffffffff) + 1);
                      }
                      puVar3 = (undefined1 *)((long)pvVar17 + (long)pvVar13);
                      puVar12 = recovered_10009a2c(&pvStack_88,puVar3,puVar3 + uVar15);
                      recovered_1000892c((long *)&pvStack_a0,puVar12,*(uint *)(param_1 + 0x20));
                      recovered_10008a24((undefined8 *)
                                         (*(long *)(param_1 + 0x1828) +
                                         ((ulong)pvVar6 & 0xffffffff) * 0x18),&pvStack_a0);
                      uStack_98 = 0;
                      recovered_10002e70(pvStack_a0);
                      pvStack_80 = (void *)0x0;
                      recovered_10002e70(pvStack_88);
                    }
                    pvVar13 = (void *)((long)pvVar13 + uVar15);
                  }
                }
              }
              while (pvVar14 < pvVar6) {
                pcVar2 = (char *)((long)pvVar21 + (long)pvVar14);
                pvVar14 = (void *)((long)pvVar14 + 1);
                if (*pcVar2 == '/') {
                  for (pvStack_a8 = pvVar14; pvStack_a8 < pvVar6;
                      pvStack_a8 = (void *)((long)pvStack_a8 + 1)) {
                    if (*(byte *)((long)pvVar21 + (long)pvStack_a8) < 0x30 &&
                        (1L << ((ulong)*(byte *)((long)pvVar21 + (long)pvStack_a8) & 0x3f) &
                        0x800100003e00U) != 0) goto LAB_100079d8;
                  }
                  pvStack_a8 = pvVar6;
LAB_100079d8:
                  if ((long)pvStack_a8 - (long)pvVar14 != 0) {
                    recovered_100086ac((long *)&pvStack_88,(long)pvVar21 + (long)pvVar14,
                                       (long)pvStack_a8 - (long)pvVar14);
                    auStack_6c[0] = 0;
                    uVar11 = recovered_1000854c((long *)&pvStack_108,(ulong *)&pvStack_a8,
                                                (int *)auStack_6c);
                    if (((int)uVar11 == 0) ||
                       (uVar15 = (ulong)auStack_6c[0], (int)auStack_6c[0] < 0)) {
                      pvVar14 = pvStack_a8;
                    }
                    else {
                      recovered_10008618((long *)&pvStack_108,(ulong *)&pvStack_a8);
                      pvVar17 = (void *)((long)pvStack_a8 + 2);
                      pvVar14 = pvStack_a8;
                      if (((pvVar17 <= pvVar6) &&
                          (*(char *)((long)pvVar21 + (long)pvStack_a8) == 'R')) &&
                         (((char *)((long)pvVar21 + (long)pvStack_a8))[1] == 'D')) {
                        pvVar20 = pvVar17;
                        if ((pvVar17 < pvVar6) &&
                           (pvVar20 = (void *)((long)pvStack_a8 + 3),
                           *(char *)((long)pvVar21 + (long)pvVar17) != ' ')) {
                          pvVar20 = pvVar17;
                        }
                        if (pvVar6 < pvVar20 || (ulong)((long)pvVar6 - (long)pvVar20) < uVar15) {
                          recovered_10002e70(pvStack_88);
                          goto LAB_10007844;
                        }
                        recovered_10009a2c(&pvStack_a0,(undefined1 *)((long)pvVar21 + (long)pvVar20)
                                           ,(undefined1 *)((long)pvVar21 + (long)pvVar20) + uVar15);
                        recovered_1000892c((long *)&pvStack_c0,&pvStack_a0,*(uint *)(param_1 + 0x20)
                                          );
                        puVar12 = (undefined8 *)
                                  recovered_10008a74((long *)(param_1 + 0x1840),&pvStack_88);
                        recovered_10008a24(puVar12,&pvStack_c0);
                        uStack_b8 = 0;
                        recovered_10002e70(pvStack_c0);
                        uStack_98 = 0;
                        recovered_10002e70(pvStack_a0);
                        pvVar14 = (void *)((long)pvVar20 + uVar15);
                      }
                    }
                    recovered_10002e70(pvStack_88);
                  }
                }
              }
              bVar7 = *(long *)(param_1 + 0x1848) != 0;
              goto LAB_10007ac8;
            }
          }
LAB_10007844:
          bVar7 = false;
        }
LAB_10007ac8:
        pvStack_100 = (void *)0x0;
        recovered_10002e70(pvVar21);
        goto LAB_10007ad4;
      }
    }
    recovered_10002e70(pvStack_88);
  }
LAB_10007708:
  bVar7 = false;
LAB_10007ad4:
  uStack_e8 = 0;
  recovered_10002e70(pbStack_f0);
  pvStack_d0 = (void *)0x0;
  recovered_10002e70(pbStack_d8);
  return bVar7;
}

#undef DAT_1000a233
#undef str_1000a20b
#undef str_1000a21d
#undef str_1000a229
#undef str_1000a23e
#undef str_1000a245
#undef pvStack_100
#undef pvStack_108
#undef pbStack_f0
#undef uStack_f8
#undef uStack_e0
#undef uStack_e8
#undef pvStack_d0
#undef pbStack_d8
#undef pvStack_c0
#undef uStack_c8
#undef pvStack_a8
#undef uStack_b8
#undef uStack_98
#undef pvStack_a0
#undef pvStack_80
#undef pvStack_88
#undef auStack_6c
#undef uStack_78

#undef DAT_10010310
#define DAT_10010310 (*(byte *)(((uintptr_t)pf_module_state + 0x6474U)))
#undef DAT_10010318
#define DAT_10010318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x647cU)))
#define dStack_140 (*(double *)(frame + 24))
#define pvStack_148 (*(void * *)(frame + 16))
#define uStack_130 (*(undefined8 *)(frame + 40))
#define uStack_138 (*(undefined8 *)(frame + 32))
#define lStack_120 (*(long *)(frame + 56))
#define uStack_128 (*(undefined8 *)(frame + 48))
#define uStack_110 (*(undefined8 *)(frame + 72))
#define uStack_118 (*(undefined8 *)(frame + 64))
#define uStack_100 (*(undefined8 *)(frame + 88))
#define uStack_108 (*(undefined2 *)(frame + 80))
#define uStack_f0 (*(undefined8 *)(frame + 104))
#define uStack_f8 (*(undefined8 *)(frame + 96))
#define uStack_e0 (*(undefined8 *)(frame + 120))
#define uStack_e8 (*(undefined8 *)(frame + 112))
#define uStack_d0 (*(undefined8 *)(frame + 136))
#define uStack_d8 (*(undefined8 *)(frame + 128))
#define uStack_c0 (*(undefined8 *)(frame + 152))
#define uStack_c8 (*(undefined8 *)(frame + 144))
#define uStack_b0 (*(undefined8 *)(frame + 168))
#define uStack_b8 (*(undefined8 *)(frame + 160))
#define dStack_a0 (*(double *)(frame + 184))
#define uStack_a8 (*(undefined8 *)(frame + 176))
#define uStack_96 (*(undefined1 *)(frame + 194))
#define uStack_98 (*(undefined2 *)(frame + 192))
#define pvStack_88 (*(void * *)(frame + 208))
#define uStack_89 (*(undefined1 *)(frame + 207))
#define uStack_80 (*(undefined8 *)(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b9c
 */

void recovered_10007b9c(pf_glyph *__return_storage_ptr__,void *backend,uint glyph,double scale)

{
  unsigned char frame[376] = {0};

  uint uVar1;
  uint uVar2;
  uchar uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  ulong uVar13;
  uchar *puVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;

  if ((glyph < 0x100) && (*(long *)((long)backend + (ulong)glyph * 0x18 + 0x30) != 0)) {
    puVar16 = (undefined8 *)((long)backend + (ulong)glyph * 0x18 + 0x28);
  }
  else {
    puVar16 = (undefined8 *)&DAT_10010318;
    if ((DAT_10010310 & 1) == 0) {
      recovered_10009410((undefined8 *)&DAT_10010318,((uintptr_t)pf_module_state+0x3b6U));
      recovered_10002ed0();
      DAT_10010310 = 1;
    }
  }
  lVar5 = recovered_10008bd4((long *)((long)backend + 0x1840),puVar16);
  recovered_10009410(&pvStack_148,((uintptr_t)pf_module_state+0x3b6U));
  lVar6 = recovered_10008bd4((long *)((long)backend + 0x1840),&pvStack_148);
  recovered_10002e70(pvStack_148);
  lVar8 = *(long *)((long)backend + 0x1840) + *(long *)((long)backend + 0x1848) * 0x30;
  if (lVar5 == lVar8 && lVar6 == lVar8) {
    __return_storage_ptr__->pixels = (uchar *)0x0;
    __return_storage_ptr__->advance = 0.0;
    __return_storage_ptr__->capacity = 0;
    __return_storage_ptr__->count = 0;
    __return_storage_ptr__->width = 0;
    __return_storage_ptr__->height = 0;
    __return_storage_ptr__->left = 0;
    __return_storage_ptr__->top = 0;
    recovered_10005914((undefined8 *)__return_storage_ptr__);
    return;
  }
  if (lVar5 != lVar8) {
    lVar6 = lVar5;
  }
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_120 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  dStack_a0 = 0.0;
  uStack_98 = 0;
  uStack_96 = 0;
  pvStack_148 = backend;
  dStack_140 = scale;
  uVar7 = recovered_1000906c((long *)&pvStack_148,(long *)(lVar6 + 0x18),0);
  if ((uVar7 & 1) == 0) {
    recovered_10005914((undefined8 *)__return_storage_ptr__);
    goto LAB_10007d58;
  }
  recovered_10006210(&__return_storage_ptr__->left,dStack_a0,&lStack_120);
  uVar1 = __return_storage_ptr__->width;
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 1) goto LAB_10007d58;
  uVar2 = __return_storage_ptr__->height;
  uVar9 = (ulong)uVar2;
  if (((int)uVar2 < 1) || (__return_storage_ptr__->count == 0)) goto LAB_10007d58;
  puVar12 = __return_storage_ptr__->pixels;
  puVar10 = puVar12 + (uVar7 - 1);
  lVar6 = -1;
  puVar11 = puVar12;
  uVar18 = uVar9;
  for (uVar17 = 0; uVar17 != uVar9; uVar17 = uVar17 + 1) {
    uVar13 = 0;
    while (uVar7 != uVar13) {
      puVar14 = puVar11 + uVar13;
      uVar13 = uVar13 + 1;
      if (*puVar14 != '\0') {
        iVar15 = (int)uVar17;
        uVar4 = uVar2 - iVar15;
        if (uVar4 == 0) goto LAB_10007e88;
        uVar13 = 0;
        uVar20 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
        puVar12 = puVar12 + (uVar9 - 1) * uVar7;
        goto LAB_10007da8;
      }
    }
    uVar18 = (ulong)((int)uVar18 - 1);
    lVar6 = lVar6 + 1;
    puVar10 = puVar10 + uVar7;
    puVar11 = puVar11 + uVar7;
  }
  goto LAB_10007e88;
LAB_10007da8:
  if (uVar13 == uVar20) goto LAB_10007ddc;
  uVar9 = uVar7;
  puVar14 = puVar12;
  while (uVar9 != 0) {
    uVar3 = *puVar14;
    uVar9 = uVar9 - 1;
    puVar14 = puVar14 + 1;
    if (uVar3 != '\0') {
      uVar20 = uVar13;
      goto LAB_10007ddc;
    }
  }
  uVar13 = uVar13 + 1;
  puVar12 = puVar12 + -uVar7;
  goto LAB_10007da8;
LAB_10007ddc:
  iVar19 = (int)uVar20;
  for (uVar9 = 0; uVar9 != uVar7; uVar9 = uVar9 + 1) {
    puVar12 = puVar11;
    lVar5 = lVar6;
    while (lVar5 = lVar5 + 1, lVar5 < (int)(uVar2 - iVar19)) {
      uVar3 = *puVar12;
      puVar12 = puVar12 + uVar7;
      if (uVar3 != '\0') goto LAB_10007e24;
    }
    puVar11 = puVar11 + 1;
  }
  uVar9 = uVar7;
LAB_10007e24:
  iVar21 = (int)uVar9;
  uVar20 = (ulong)(uVar1 - iVar21 & ((int)(uVar1 - iVar21) >> 0x1f ^ 0xffffffffU));
  for (uVar13 = 0; uVar13 != uVar20; uVar13 = uVar13 + 1) {
    puVar11 = puVar10;
    lVar5 = lVar6;
    while (lVar5 = lVar5 + 1, lVar5 < (int)(uVar2 - iVar19)) {
      uVar3 = *puVar11;
      puVar11 = puVar11 + uVar7;
      if (uVar3 != '\0') {
        uVar20 = uVar13;
        goto LAB_10007e6c;
      }
    }
    puVar10 = puVar10 + -1;
  }
LAB_10007e6c:
  uVar1 = uVar1 - (iVar21 + (int)uVar20);
  uVar7 = (ulong)uVar1;
  uVar2 = uVar2 - (iVar19 + iVar15);
  if (((int)uVar1 >= 1 && uVar2 != 0) && ((int)uVar1 < 1 || -1 < (int)uVar2)) {
    uStack_89 = 0;
    recovered_10009970(&pvStack_88,uVar7 * uVar2,&uStack_89);
    lVar6 = 0;
    for (uVar18 = (ulong)(uint)((int)uVar18 - iVar19); uVar18 != 0; uVar18 = uVar18 - 1) {
      recovered_10000ce4((void *)((long)pvStack_88 + lVar6),
                         __return_storage_ptr__->pixels +
                         (uVar9 & 0xffffffff) + uVar17 * (long)__return_storage_ptr__->width,uVar7);
      lVar6 = lVar6 + uVar7;
      uVar17 = uVar17 + 1;
    }
    __return_storage_ptr__->left = __return_storage_ptr__->left + iVar21;
    __return_storage_ptr__->top = __return_storage_ptr__->top - iVar15;
    __return_storage_ptr__->width = uVar1;
    __return_storage_ptr__->height = uVar2;
    recovered_10008a24(&__return_storage_ptr__->pixels,&pvStack_88);
    uStack_80 = 0;
    recovered_10002e70(pvStack_88);
    goto LAB_10007d58;
  }
LAB_10007e88:
  __return_storage_ptr__->left = 0;
  __return_storage_ptr__->top = 0;
  __return_storage_ptr__->width = 0;
  __return_storage_ptr__->height = 0;
  __return_storage_ptr__->count = 0;
LAB_10007d58:
  __return_storage_ptr__->advance = dStack_a0;
  recovered_100093e4((long)&pvStack_148);
  return;
}

#undef DAT_10010310
#undef DAT_10010318
#undef dStack_140
#undef pvStack_148
#undef uStack_130
#undef uStack_138
#undef lStack_120
#undef uStack_128
#undef uStack_110
#undef uStack_118
#undef uStack_100
#undef uStack_108
#undef uStack_f0
#undef uStack_f8
#undef uStack_e0
#undef uStack_e8
#undef uStack_d0
#undef uStack_d8
#undef uStack_c0
#undef uStack_c8
#undef uStack_b0
#undef uStack_b8
#undef dStack_a0
#undef uStack_a8
#undef uStack_96
#undef uStack_98
#undef pvStack_88
#undef uStack_89
#undef uStack_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f8c
 */

double recovered_10007f8c(void *backend)

{
  unsigned char frame[64] = {0};

  return *(double *)((long)backend + 8);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f94
 */

uint128 recovered_10007f94(long param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = *(ulong *)(param_1 + 0x10);
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f9c
 */

uint128 recovered_10007f9c(long param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = *(ulong *)(param_1 + 0x18);
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fa4
 */

double recovered_10007fa4(void *backend)

{
  unsigned char frame[64] = {0};

  return 0.0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fac
 */

undefined8 recovered_10007fac(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fb4
 */

void recovered_10007fb4(undefined8 *param_1)

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
 * Address: 0x10007fd4
 */

long * recovered_10007fd4(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008000(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008000
 */

void recovered_10008000(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x30;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x30;
    recovered_10008054((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008054
 */

void recovered_10008054(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10009944(param_1 + 3);
  recovered_10002e70((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000807c
 */

undefined8 * recovered_1000807c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008080
 */

undefined8 * recovered_10008080(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080a8
 */

long * recovered_100080a8(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100080d4(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080d4
 */

void recovered_100080d4(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10009944((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008128
 */

long recovered_10008128(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;

  puVar1 = (undefined8 *)(param_1 + 0x17e8);
  lVar2 = -0x1800;
  do {
    puVar1 = recovered_10008080(puVar1);
    puVar1 = puVar1 + -3;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008164
 */

void recovered_10008164(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005298((undefined8 *)(param_1 + 0x30));
  recovered_10005298((undefined8 *)(param_1 + 0x18));
  recovered_10008000((long *)param_1);
  recovered_10002e70(*(void **)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008194
 */

long recovered_10008194(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005468(param_1,uVar5);
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
 * Address: 0x1000828c
 */

ulong recovered_1000828c(long *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  ulong size;
  ulong uVar2;

  if ((((param_2 != (char *)0x0) && (param_3 < (ulong)param_1[1])) &&
      (size = recovered_10000e58(param_2), size != 0)) &&
     (uVar2 = param_1[1], size <= uVar2 - param_3)) {
    for (; size + param_3 <= uVar2; param_3 = param_3 + 1) {
      iVar1 = recovered_10000d98((void *)(*param_1 + param_3),param_2,size);
      if (iVar1 == 0) {
        return param_3;
      }
      uVar2 = param_1[1];
    }
  }
  return 0xffffffffffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008318
 */

void recovered_10008318(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

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
      recovered_10005468(param_1,uVar4);
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
 * Address: 0x1000832c
 */

void recovered_1000832c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10008408(param_2);
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
 * Address: 0x100083a4
 */

void recovered_100083a4(long *param_1,undefined1 param_2)

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
    recovered_1000832c(param_1,uVar1);
  }
  recovered_10008424(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008408
 */

ulonglong recovered_10008408(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002e3c(param_1 + 1);
  *puVar1 = 0;
  return (ulonglong)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008424
 */

void recovered_10008424(long *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_10008408(0);
    *param_1 = uVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000845c
 */

long recovered_1000845c(long *param_1,undefined1 *param_2)

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
    recovered_10005468(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define local_38 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084c4
 */

bool recovered_100084c4(long *param_1,ulong *param_2,double *param_3)

{
  unsigned char frame[104] = {0};

  char *text;
  long lVar1;
  bool bVar2;
  double dVar3;

  recovered_10008618(param_1,param_2);
  if (*param_2 < (ulong)param_1[1]) {
    local_38 = (char *)0x0;
    text = (char *)(*param_1 + *param_2);
    dVar3 = recovered_10001758(text,&local_38);
    *param_3 = dVar3;
    lVar1 = (long)local_38 - (long)text;
    bVar2 = lVar1 != 0;
    if (bVar2) {
      *param_2 = lVar1 + *param_2;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000854c
 */

undefined8 recovered_1000854c(long *param_1,ulong *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;

  recovered_10008618(param_1,param_2);
  uVar3 = *param_2;
  uVar5 = param_1[1];
  if (uVar3 < uVar5) {
    lVar4 = *param_1;
    cVar2 = *(char *)(lVar4 + uVar3);
    if ((cVar2 == '-') || (cVar2 == '+')) {
      uVar3 = uVar3 + 1;
      *param_2 = uVar3;
      uVar5 = param_1[1];
    }
    if ((uVar3 < uVar5) && (0xfffffff5 < *(byte *)(lVar4 + uVar3) - 0x3a)) {
      iVar6 = 0;
      while ((uVar3 < uVar5 && (*(byte *)(lVar4 + uVar3) - 0x30 < 10))) {
        iVar6 = (uint)*(byte *)(lVar4 + uVar3) + iVar6 * 10 + -0x30;
        uVar3 = uVar3 + 1;
        *param_2 = uVar3;
        uVar5 = param_1[1];
      }
      iVar1 = -iVar6;
      if (cVar2 != '-') {
        iVar1 = iVar6;
      }
      *param_3 = iVar1;
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008618
 */

void recovered_10008618(long *param_1,ulong *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = *param_1;
  uVar2 = *param_2;
  while ((uVar2 < (ulong)param_1[1] &&
         (*(byte *)(lVar1 + uVar2) < 0x21 &&
          (1L << ((ulong)*(byte *)(lVar1 + uVar2) & 0x3f) & 0x100003e00U) != 0))) {
    uVar2 = uVar2 + 1;
    *param_2 = uVar2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

undefined8 * recovered_10008660(undefined8 *param_1,undefined8 *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086ac
 */

long * recovered_100086ac(long *param_1,long param_2,ulong param_3)

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
  recovered_100086e0(param_1,param_2,uVar1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086e0
 */

void recovered_100086e0(long *param_1,long param_2,ulong param_3)

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
  uVar2 = recovered_100087c8(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10008424(param_1);
    }
    else {
      recovered_1000832c(param_1,uVar1);
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
    recovered_100086ac((long *)&local_50,*param_1 + local_38,uVar1);
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
 * Address: 0x100087c8
 */

undefined8 recovered_100087c8(long *param_1,long param_2,long *param_3)

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
 * Address: 0x10008814
 */

long recovered_10008814(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  lVar5 = *param_1;
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 - lVar5;
    uVar4 = param_3 - lVar5;
    lVar3 = uVar4 - uVar2;
    if (uVar2 <= uVar4 && lVar3 != 0) {
      uVar6 = uVar2;
      for (; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(*param_1 + uVar4);
        uVar6 = uVar6 + 1;
      }
      param_1[1] = param_1[1] - lVar3;
      lVar5 = *param_1;
      lVar3 = lVar5 + uVar2;
      goto LAB_10008878;
    }
  }
  lVar3 = lVar5 + uVar2;
LAB_10008878:
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008880
 */

void recovered_10008880(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    lVar3 = uVar2 * 0x18;
    for (; lVar3 = lVar3 + -0x18, param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_10009944((undefined8 *)(*param_1 + lVar3));
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_10008b2c(param_1,param_2);
    uVar2 = param_1[1];
    lVar3 = uVar2 * 0x18;
    while (uVar2 < param_2) {
      puVar1 = (undefined8 *)(*param_1 + lVar3);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = uVar2 + 1;
      param_1[1] = uVar2;
      lVar3 = lVar3 + 0x18;
    }
  }
  return;
}


#define lStack_58 (*(long *)(frame + 33))
#define local_69 (*(byte *)(frame + 16))
#define local_68 (*(void * *)(frame + 17))
#define local_60 (*(ulong *)(frame + 25))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000892c
 */

void recovered_1000892c(long *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[153] = {0};

  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;

  local_60 = 0;
  lStack_58 = 0;
  local_68 = (void *)0x0;
  recovered_10005468((long *)&local_68,param_2[1]);
  pbVar1 = (byte *)*param_2;
  iVar6 = 0x10ea;
  for (lVar5 = param_2[1]; lVar5 != 0; lVar5 = lVar5 + -1) {
    bVar2 = *pbVar1;
    local_69 = bVar2 ^ (byte)((uint)iVar6 >> 8);
    recovered_10006b70((long *)&local_68,&local_69);
    iVar6 = (iVar6 + (uint)bVar2) * 0xce6d + 0x58bf;
    pbVar1 = pbVar1 + 1;
  }
  uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  if (uVar3 < local_60) {
    recovered_10008814((long *)&local_68,(long)local_68,(long)local_68 + uVar3);
    lVar5 = lStack_58;
    pvVar4 = local_68;
    local_68 = (void *)0x0;
    lStack_58 = 0;
  }
  else {
    pvVar4 = (void *)0x0;
    local_60 = 0;
    lVar5 = 0;
  }
  *param_1 = (long)pvVar4;
  param_1[2] = lVar5;
  param_1[1] = local_60;
  local_60 = 0;
  recovered_10002e70(local_68);
  return;
}

#undef lStack_58
#undef local_69
#undef local_68
#undef local_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a24
 */

undefined8 * recovered_10008a24(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
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


#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x216cU)))
#define local_38 (*(void * *)(frame + 16))
#define local_30 (*(undefined8 *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a74
 */

long recovered_10008a74(long *param_1,undefined8 *param_2)

{
  unsigned char frame[104] = {0};

  long lVar1;

  lVar1 = recovered_10008bd4(param_1,param_2);
  if (lVar1 == *param_1 + param_1[1] * 0x30) {
    recovered_10008c0c((long)param_1);
    local_30 = 0;
    uStack_28 = 0;
    local_38 = (void *)0x0;
    recovered_10008c3c(param_1,param_2,&local_38);
    local_30 = 0;
    recovered_10002e70(local_38);
    recovered_10005744(param_1 + 6,(undefined8 *)PTR_DAT_1000c008);
    recovered_10008cb8(param_1,param_1[1] + -1);
    lVar1 = *param_1 + param_1[1] * 0x30 + -0x30;
  }
  return lVar1 + 0x18;
}

#undef PTR_DAT_1000c008
#undef local_38
#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b2c
 */

void recovered_10008b2c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10008bc0(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10006814((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_10009944((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bc0
 */

ulonglong recovered_10008bc0(long param_1)

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
 * Address: 0x10008bd4
 */

long recovered_10008bd4(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = recovered_10008cfc(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 0x30;
}


#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x216cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c0c
 */

void recovered_10008c0c(long param_1)

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
  uVar3 = recovered_10008e80(uVar1);
  puVar2 = PTR_DAT_1000c008;
  recovered_100055cc((long *)(param_1 + 0x18),uVar3,(undefined8 *)PTR_DAT_1000c008);
  recovered_100055cc((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar2);
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 0x20); uVar3 = uVar3 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar3 * 8) = 0xffffffffffffffff;
  }
  for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
    recovered_10008cb8((long *)param_1,uVar3);
  }
  return;
}

#undef PTR_DAT_1000c008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c3c
 */

long recovered_10008c3c(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
    recovered_10008f00(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10008ff8((undefined8 *)(*param_1 + lVar2 * 0x30),param_2,param_3);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cb8
 */

void recovered_10008cb8(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_10008d70((long)param_1,(undefined8 *)(*param_1 + param_2 * 0x30));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cfc
 */

long recovered_10008cfc(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;

  if (param_1[4] == 0) {
    lVar4 = -1;
  }
  else {
    uVar2 = recovered_10008d70((long)param_1,param_2);
    plVar3 = (long *)(param_1[3] + uVar2 * 8);
    while ((lVar4 = *plVar3, lVar4 != -1 &&
           (bVar1 = recovered_10008db8((undefined8 *)(*param_1 + lVar4 * 0x30),param_2), !bVar1))) {
      plVar3 = (long *)(param_1[6] + lVar4 * 8);
    }
  }
  return lVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d70
 */

ulong recovered_10008d70(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10008da0(param_1 + 0x48,param_2);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


#undef DAT_1000a034
#define DAT_1000a034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x198U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008da0
 */

ulonglong recovered_10008da0(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  long lVar2;
  ulong uVar3;

  lVar2 = param_2[1];
  pbVar1 = &DAT_1000a034;
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

#undef DAT_1000a034

#undef DAT_1000a034
#define DAT_1000a034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x198U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008db8
 */

bool recovered_10008db8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;

  lVar5 = param_1[1];
  pcVar4 = &DAT_1000a034;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  pcVar6 = &DAT_1000a034;
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

#undef DAT_1000a034

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008de0
 */

bool recovered_10008de0(char *param_1,long param_2,char *param_3,long param_4)

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


#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x216cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e18
 */

void recovered_10008e18(long param_1,ulong param_2)

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
  uVar2 = recovered_10008e80(uVar2);
  puVar1 = PTR_DAT_1000c008;
  recovered_100055cc((long *)(param_1 + 0x18),uVar2,(undefined8 *)PTR_DAT_1000c008);
  recovered_100055cc((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)puVar1);
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x20); uVar2 = uVar2 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar2 * 8) = 0xffffffffffffffff;
  }
  for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 8); uVar2 = uVar2 + 1) {
    recovered_10008cb8((long *)param_1,uVar2);
  }
  return;
}

#undef PTR_DAT_1000c008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e80
 */

ulong recovered_10008e80(ulong param_1)

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
 * Address: 0x10008e9c
 */

void recovered_10008e9c(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_10008cb8((long *)param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f00
 */

void recovered_10008f00(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10008f94(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10008fa8((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_10008054((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x30;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f94
 */

ulonglong recovered_10008f94(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return 0;
  }
  size = param_1 * 0x30;
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
 * Address: 0x10008fa8
 */

undefined8 * recovered_10008fa8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10008fdc(param_1,param_2);
  recovered_10006814((undefined8 *)(uVar1 + 0x18),param_2 + 3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fdc
 */

ulonglong recovered_10008fdc(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x10008ff8
 */

undefined8 * recovered_10008ff8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000902c(param_1,param_2);
  recovered_10006814(puVar1 + 3,param_3);
  return param_1;
}


#undef DAT_1000a034
#define DAT_1000a034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x198U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000902c
 */

undefined8 * recovered_1000902c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_1000a034;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  recovered_100086e0(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_1000a034

#define dStack_68 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000906c
 */

undefined8 recovered_1000906c(long *param_1,long *param_2,int param_3)

{
  unsigned char frame[152] = {0};

  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  long lVar13;

  if (param_3 < 0x11) {
    uVar5 = 0;
    while (uVar7 = param_2[1], uVar5 < uVar7) {
      uVar9 = uVar5 + 1;
      lVar8 = *param_2;
      bVar2 = *(byte *)(lVar8 + uVar5);
      if (bVar2 == 0xc) {
        if (uVar7 <= uVar9) goto LAB_10009094;
        bVar2 = *(byte *)(lVar8 + uVar9);
        if ((1 < bVar2 - 0x10) && (bVar2 != 0x21)) {
          if ((bVar2 != 7) || ((ulong)param_1[3] < 4)) goto LAB_10009094;
          lVar8 = param_1[2] + param_1[3] * 8;
          lVar11 = *(long *)(lVar8 + -0x20);
          param_1[0x11] = lVar11;
          lVar13 = *(long *)(lVar8 + -0x18);
          param_1[0x12] = lVar13;
          param_1[0x13] = lVar11;
          param_1[0x14] = lVar13;
          *(undefined1 *)(param_1 + 0x16) = 0;
          param_1[0x15] = (long)(*(double *)(lVar8 + -0x10) * (double)param_1[1]);
        }
        param_1[3] = 0;
        uVar5 = uVar5 + 2;
      }
      else {
        uVar3 = (uint)bVar2;
        if (bVar2 < 0x20) {
          uVar4 = 0;
          switch((uintptr_t)((uint)bVar2)) {
          case 1:
          case 3:
            break;
          default:
            goto switchD_10009174_caseD_2;
          case 4:
            if (param_1[3] != 0) {
              dVar12 = *(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x12];
              goto LAB_100092a8;
            }
            goto LAB_10009094;
          case 5:
            if (1 < (ulong)param_1[3]) {
              lVar8 = param_1[2] + param_1[3] * 8;
              dVar12 = *(double *)(lVar8 + -0x10);
              param_1[0x12] = (long)(*(double *)(lVar8 + -8) + (double)param_1[0x12]);
              param_1[0x11] = (long)(dVar12 + (double)param_1[0x11]);
              goto LAB_100092d4;
            }
            goto LAB_10009094;
          case 6:
            if (param_1[3] != 0) {
              param_1[0x11] =
                   (long)(*(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x11]);
              goto LAB_100092d4;
            }
            goto LAB_10009094;
          case 7:
            if (param_1[3] == 0) goto LAB_10009094;
            param_1[0x12] =
                 (long)(*(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x12]);
LAB_100092d4:
            recovered_10009508((long)param_1);
            break;
          case 9:
            recovered_100094a4((long)param_1);
            break;
          case 10:
            if (param_1[3] != 0) {
              uVar5 = recovered_100014ac(*(double *)(param_1[2] + param_1[3] * 8 + -8));
              param_1[3] = 0;
              if (-1 < (int)uVar5) {
                if ((uVar5 & 0x7fffffff) < *(ulong *)(*param_1 + 0x1830)) {
                  uVar4 = recovered_1000906c(param_1,(long *)(*(long *)(*param_1 + 0x1828) +
                                                             (uVar5 & 0x7fffffff) * 0x18),
                                             param_3 + 1);
                  if ((int)uVar4 == 0) {
                    return uVar4;
                  }
                  if (*(char *)((long)param_1 + 0xb1) == '\x01') {
                    *(undefined1 *)((long)param_1 + 0xb1) = 0;
                  }
                  goto LAB_100093a8;
                }
              }
            }
            goto LAB_10009094;
          case 0xb:
            *(undefined1 *)((long)param_1 + 0xb1) = 1;
            break;
          case 0xd:
            if ((ulong)param_1[3] < 2) goto LAB_10009094;
            lVar8 = param_1[2] + param_1[3] * 8;
            lVar11 = *(long *)(lVar8 + -0x10);
            dVar12 = *(double *)(lVar8 + -8);
            param_1[0x11] = lVar11;
            param_1[0x12] = 0;
            param_1[0x13] = lVar11;
            param_1[0x14] = 0;
            *(undefined1 *)(param_1 + 0x16) = 0;
            param_1[0x15] = (long)(dVar12 * (double)param_1[1]);
            break;
          case 0xe:
            recovered_100094a4((long)param_1);
            *(undefined1 *)((long)param_1 + 0xb2) = 1;
            break;
          case 0x15:
            if ((ulong)param_1[3] < 2) goto LAB_10009094;
            lVar8 = param_1[2] + param_1[3] * 8;
            param_1[0x11] = (long)(*(double *)(lVar8 + -0x10) + (double)param_1[0x11]);
            dVar12 = *(double *)(lVar8 + -8) + (double)param_1[0x12];
LAB_100092a8:
            param_1[0x12] = (long)dVar12;
LAB_10009334:
            recovered_100094c8((long)param_1);
            break;
          case 0x16:
            if (param_1[3] != 0) {
              param_1[0x11] =
                   (long)(*(double *)(param_1[2] + param_1[3] * 8 + -8) + (double)param_1[0x11]);
              goto LAB_10009334;
            }
            goto LAB_10009094;
          }
          param_1[3] = 0;
LAB_100093a8:
          if (((*(byte *)((long)param_1 + 0xb2) & 1) != 0) ||
             (uVar5 = uVar9, (*(byte *)((long)param_1 + 0xb1) & 1) != 0)) break;
        }
        else {
          if (uVar3 - 0x20 < 0xd7) {
            iVar6 = bVar2 - 0x8b;
LAB_100091a0:
            dStack_68 = (double)iVar6;
            uVar10 = uVar9;
          }
          else {
            uVar10 = uVar9;
            if (uVar3 - 0xf7 < 4) {
              dStack_68 = 0.0;
              if (uVar9 < uVar7) {
                dStack_68 = (double)(CONCAT11(bVar2,*(undefined1 *)(lVar8 + uVar9)) - 0xf694);
                uVar10 = uVar5 + 2;
              }
            }
            else if (uVar3 - 0xfb < 4) {
              dStack_68 = 0.0;
              if (uVar9 < uVar7) {
                puVar1 = (undefined1 *)(lVar8 + uVar9);
                uVar9 = uVar5 + 2;
                iVar6 = 0xfa94 - (uint)CONCAT11(bVar2,*puVar1);
                goto LAB_100091a0;
              }
            }
            else {
              uVar10 = uVar5 + 5;
              if (uVar7 < uVar10) {
                dStack_68 = 0.0;
                uVar10 = uVar7;
              }
              else {
                uVar3 = recovered_10004734(param_2,uVar9);
                dStack_68 = (double)(int)uVar3 / 65536.0;
              }
            }
          }
          recovered_10009554(param_1 + 2,&dStack_68);
          uVar5 = uVar10;
        }
      }
    }
    uVar4 = 1;
  }
  else {
LAB_10009094:
    uVar4 = 0;
  }
switchD_10009174_caseD_2:
  return uVar4;
}

#undef dStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100093e4
 */

long recovered_100093e4(long param_1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 0x30) = 0;
  recovered_10002e70(*(void **)(param_1 + 0x28));
  recovered_10009478((undefined8 *)(param_1 + 0x10));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009410
 */

undefined8 * recovered_10009410(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10009454(param_2);
  recovered_100086e0(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009454
 */

long recovered_10009454(long param_1)

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
 * Address: 0x10009478
 */

undefined8 * recovered_10009478(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094a4
 */

void recovered_100094a4(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_100069e0((long *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}


#define dStack_28 (*(double *)(frame + 24))
#define dStack_30 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094c8
 */

void recovered_100094c8(long param_1)

{
  unsigned char frame[96] = {0};


  recovered_100094a4(param_1);
  dStack_30 = *(double *)(param_1 + 0x88) * *(double *)(param_1 + 8);
  dStack_28 = *(double *)(param_1 + 0x90) * *(double *)(param_1 + 8);
  recovered_100068a4((long *)(param_1 + 0x28),&dStack_30);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}

#undef dStack_28
#undef dStack_30

#define dStack_28 (*(double *)(frame + 24))
#define dStack_30 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009508
 */

void recovered_10009508(long param_1)

{
  unsigned char frame[96] = {0};


  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    dStack_30 = *(double *)(param_1 + 0x98) * *(double *)(param_1 + 8);
    dStack_28 = *(double *)(param_1 + 0xa0) * *(double *)(param_1 + 8);
    recovered_100068a4((long *)(param_1 + 0x28),&dStack_30);
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  dStack_30 = *(double *)(param_1 + 0x88) * *(double *)(param_1 + 8);
  dStack_28 = *(double *)(param_1 + 0x90) * *(double *)(param_1 + 8);
  recovered_10006944((long *)(param_1 + 0x28),&dStack_30);
  return;
}

#undef dStack_28
#undef dStack_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009554
 */

long recovered_10009554(long *param_1,undefined8 *param_2)

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
    recovered_100095b8(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095b8
 */

void recovered_100095b8(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000962c(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined8 *)(uVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000962c
 */

ulonglong recovered_1000962c(long param_1)

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
 * Address: 0x1000963c
 */

void recovered_1000963c(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10009944((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009688
 */

long recovered_10009688(long *param_1,undefined4 *param_2)

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
    recovered_10005810(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096ec
 */

ulong recovered_100096ec(double param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  ulong uVar2;
  double dVar3;

  iVar1 = ((uintptr_t (*)(void *))(*(uintptr_t *)(*(long *)**(undefined8 **)*param_2 + 0x40)))((void *)(uintptr_t)((long *)**(undefined8 **)*param_2));
  if (iVar1 == 1) {
    uVar2 = recovered_100014ac(param_1);
  }
  else {
    dVar3 = recovered_10001164(param_1);
    uVar2 = (ulong)(uint)(int)dVar3;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000973c
 */

int * recovered_1000973c(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  int *piVar2;
  long *plVar4;
  long lVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_100097ac((long)param_1,(byte *)param_2);
    plVar4 = (long *)(param_1[3] + uVar1 * 8);
    while (lVar3 = *plVar4, lVar3 != -1) {
      piVar2 = (int *)(*param_1 + lVar3 * 0x38);
      if (*piVar2 == *param_2) {
        return piVar2;
      }
      plVar4 = (long *)(param_1[6] + lVar3 * 8);
    }
  }
  return (int *)(*param_1 + param_1[1] * 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097ac
 */

ulong recovered_100097ac(long param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10005594(param_2,4);
  return *(long *)(param_1 + 0x20) - 1U & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097c4
 */

void recovered_100097c4(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = recovered_100097ac((long)param_1,(byte *)(*param_1 + param_2 * 0x38));
  lVar2 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar2 + uVar1 * 8);
  *(long *)(lVar2 + uVar1 * 8) = param_2;
  return;
}


#undef DAT_1000a028
#define DAT_1000a028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097f0
 */

void recovered_100097f0(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 8) << 1;
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  uVar1 = recovered_10009890(uVar1);
  recovered_100055cc((long *)(param_1 + 0x18),uVar1,(undefined8 *)&DAT_1000a028);
  recovered_100055cc((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(undefined8 *)&DAT_1000a028);
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_100097c4((long *)param_1,uVar1);
  }
  return;
}

#undef DAT_1000a028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009890
 */

ulong recovered_10009890(ulong param_1)

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
 * Address: 0x100098ac
 */

void recovered_100098ac(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002e3c(param_2 * 0x38);
    lVar3 = 0;
    for (uVar4 = 0; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
      lVar2 = *param_1;
      *(undefined4 *)((long)pvVar1 + lVar3) = *(undefined4 *)(lVar2 + lVar3);
      recovered_10005924((undefined8 *)((undefined4 *)((long)pvVar1 + lVar3) + 2),
                         (undefined8 *)((undefined4 *)(lVar2 + lVar3) + 2));
      recovered_10009944((undefined8 *)(*param_1 + lVar3 + 0x20));
      lVar3 = lVar3 + 0x38;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009944
 */

undefined8 * recovered_10009944(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009970
 */

undefined8 * recovered_10009970(undefined8 *param_1,ulong in_x1,undefined1 *in_x2)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10007178(param_1,in_x1,in_x2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000999c
 */

undefined8 * recovered_1000999c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099c8
 */

long recovered_100099c8(long *param_1,undefined4 *param_2)

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
    recovered_10005810(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a2c
 */

undefined8 * recovered_10009a2c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008194(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a64
 */

long * recovered_10009a64(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10009a90(param_1);
  recovered_10002e70((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a90
 */

void recovered_10009a90(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_1000999c((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ae4
 */

void recovered_10009ae4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10009b78(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10009b8c((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_1000999c((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10002e70((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b78
 */

ulonglong recovered_10009b78(long param_1)

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
 * Address: 0x10009b8c
 */

void recovered_10009b8c(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x10009ba8
 */

void recovered_10009ba8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  return;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double pf_release_exp(double value) {
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
float pf_release_expf(float value){return (float)pf_release_exp((double)value);}
long double pf_release_expl(long double value){return (long double)pf_release_exp((double)value);}
double pf_release_difftime(long end,long start){return (double)end-(double)start;}
