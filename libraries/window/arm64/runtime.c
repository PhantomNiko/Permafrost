#include "scope_jump.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x672cU)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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
    recovered_10001e24(puVar8[-1],*puVar8,&uStack_48);
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
    recovered_10001e24(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
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
#define DAT_1000c110 (*(byte *)(((uintptr_t)pf_module_state + 0x672cU)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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
#define local_48 (*(ulong *)(frame + 1056))
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
      recovered_10001e24(puVar8[-1],*puVar8,&local_48);
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
      recovered_10001e24(0x300000,(ulong)uVar2 - 0x300000,&local_48);
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
#undef auStack_458
#undef local_48

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
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

ulong recovered_10000ae8(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

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

void * recovered_10000ce4(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)dst + uVar1) = *(undefined1 *)((long)src + uVar1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

void * recovered_10000d04(void *dst,void *src,ulong bytes)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000d54
 */

void * recovered_10000d54(void *dst,int byte,ulong bytes)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)dst + uVar1) = (char)byte;
  }
  return dst;
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

int recovered_10000d98(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] = {0};

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

int recovered_10000e7c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000ea4
 */

int recovered_10000ea4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

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

long recovered_10000ec0(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_10000e58((char *)param_1);
    dst = recovered_10000c10(uVar1 + 1);
    pvVar2 = (void *)0x0;
    if (dst != (void *)0x0) {
      pvVar2 = recovered_10000ce4(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return (long)pvVar2;
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


#undef DAT_10005b0f
#define DAT_10005b0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

undefined * recovered_10000fe8(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10005b0f;
}

#undef DAT_10005b0f

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x661cU)))
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

uint128 recovered_100010c4(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  if (param_2 == 0.0) {
    return ZEXT816(0);
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = param_1 - param_2 * (double)(int)(param_1 / param_2);
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e8
 */

uint128 recovered_100010e8(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

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
  PF_PART8(auVar2, 0) = dVar5;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001148
 */

uint128 recovered_10001148(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(int)param_1;
  dVar2 = (double)((int)param_1 + -1);
  if (dVar3 <= param_1) {
    dVar2 = dVar3;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001164
 */

uint128 recovered_10001164(double param_1)

{
  unsigned char frame[64] = {0};

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
  PF_PART8(auVar1, 0) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001190
 */

uint128 recovered_10001190(double param_1)

{
  unsigned char frame[64] = {0};

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
  PF_PART8(auVar1, 0) = dVar3;
  return auVar1;
}


#undef DAT_100059f0
#define DAT_100059f0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cc
 */

uint128 recovered_100011cc(double param_1)

{
  unsigned char frame[64] = {0};

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
    PF_PART8(auVar1, 0) = (double)iVar2 * DAT_100059f0 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_100059f0

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


#undef DAT_100059f8
#define DAT_100059f8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000128c
 */

uint128 recovered_1000128c(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_100012e0(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100059f8);
  return auVar1;
}

#undef DAT_100059f8

#undef DAT_10005a00
#define DAT_10005a00 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10005a08
#define DAT_10005a08 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10005a10
#define DAT_10005a10 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10005a18
#define DAT_10005a18 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012e0
 */

void recovered_100012e0(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_10005a00 < param_1; param_1 = param_1 + DAT_10005a18) {
  }
  for (; param_1 < DAT_10005a08; param_1 = param_1 + DAT_10005a10) {
  }
  return;
}

#undef DAT_10005a00
#undef DAT_10005a08
#undef DAT_10005a10
#undef DAT_10005a18

#undef DAT_10005a20
#define DAT_10005a20 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001324
 */

uint128 recovered_10001324(double in_d0)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_100012e0(in_d0);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10005a20;
  return auVar1;
}

#undef DAT_10005a20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001370
 */

uint128 recovered_10001370(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = -param_1;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001380
 */

ulong recovered_10001380(double param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100013e0
 */

ulong recovered_100013e0(double param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001430
 */

void recovered_10001430(ulong param_1)

{
  unsigned char frame[64] = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001458
 */

uint128 recovered_10001458(long param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if (param_1 < 0) {
    recovered_10001430(-param_1);
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
 * Address: 0x1000147c
 */

float recovered_1000147c(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

float recovered_100014b0(int *in_x0,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001050((double)param_2,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014c8
 */

float recovered_100014c8(uint in_w0,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000101c((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

float recovered_100014e0(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_100010e8((double)param_1,(double)param_2);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014fc
 */

float recovered_100014fc(float param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001520
 */

float recovered_10001520(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001164((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001538
 */

uint128 recovered_10001538(double param_1)

{
  unsigned char frame[64] = {0};

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
    PF_PART8(auVar1, 0) = dVar4;
    return auVar1;
  }
  dVar4 = (double)(int)param_1;
  dVar3 = (double)((int)param_1 + -1);
  if (dVar4 <= param_1) {
    dVar3 = dVar4;
  }
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar3;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001560
 */

float recovered_10001560(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001538((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001578
 */

float recovered_10001578(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001190((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001590
 */

float recovered_10001590(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_100011cc((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015a8
 */

long recovered_100015a8(double param_1)

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
 * Address: 0x100015bc
 */

float recovered_100015bc(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_1000128c((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d4
 */

float recovered_100015d4(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001324((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015ec
 */

float recovered_100015ec(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015fc
 */

long recovered_100015fc(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001694;
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
      goto LAB_100016c0;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_100016c0;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_100016c0;
    }
LAB_10001694:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_100016c0:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001700((uint)*pbVar4);
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
 * Address: 0x10001700
 */

uint recovered_10001700(int param_1)

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
 * Address: 0x10001730
 */

long recovered_10001730(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001814;
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
      goto LAB_10001814;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001814;
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
LAB_10001814:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001700((uint)*pbVar6);
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
 * Address: 0x10001854
 */

uint128 recovered_10001854(byte *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

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
        dVar12 = recovered_1000101c(dVar12,iVar9 * iVar6);
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
  PF_PART8(auVar5, 0) = dVar13;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e4
 */

float recovered_100019e4(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001854(in_x0,in_x1);
  return (float)PF_PART8(auVar1, 0);
}


#define local_8c (*(int *)(frame + 16))
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
#define pdStack_78 (*(double * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019fc
 */

int recovered_100019fc(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
  local_88 = param_2;
  local_80 = param_1;
  pdStack_78 = param_4;
  if (param_2 != 0) {
    *param_1 = 0;
  }
LAB_10001a60:
  bVar1 = *param_3;
  pdVar2 = pdStack_78;
  if (bVar1 == 0x25) {
    param_3 = param_3 + 1;
    bVar1 = *param_3;
    if (bVar1 != 0x25) {
      while (uVar5 = (uint)bVar1, uVar5 - 0x30 < 10) {
        param_3 = param_3 + 1;
        bVar1 = *param_3;
      }
      if (uVar5 == 0x2e) {
        do {
          param_3 = param_3 + 1;
          uVar5 = (uint)*param_3;
        } while (uVar5 - 0x30 < 10);
      }
LAB_10001aec:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001b84;
      case 100:
      case 0x69:
LAB_10001b3c:
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
LAB_10018260:
        if (local_88 < 2) goto LAB_10001ab8;
        *local_80 = 0x3f;
        goto LAB_10001ab4;
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
        recovered_10001d5c((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
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
        goto LAB_10001abc;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x10001b08;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001d0c((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x159U));
        goto code_r0x10001c78;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001d0c((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_10001abc;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001c78:
        uVar4 = 0x10;
        goto code_r0x10001c90;
      default:
        if (uVar5 == 0x49) goto LAB_10001b3c;
        if (uVar5 != 0x58) goto LAB_10018260;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001c94;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001c90:
      iVar7 = 0;
LAB_10001c94:
      recovered_10001d5c((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_10001abc;
    }
    if (local_88 < 2) goto LAB_10001ab8;
    *local_80 = 0x25;
    goto LAB_10001ab4;
  }
  if (bVar1 == 0) {
    if (param_2 != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_10001ab4;
  }
  goto LAB_10001ab8;
code_r0x10001b08:
  param_3 = param_3 + 1;
  uVar5 = (uint)*param_3;
  goto LAB_10001aec;
code_r0x10001b84:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_10001ab4:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_10001ab8:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_10001abc:
  param_3 = param_3 + 1;
  goto LAB_10001a60;
}

#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd0
 */

void recovered_10001cd0(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10005b14
#define str_10005b14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d0c
 */

void recovered_10001d0c(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10005b14;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001cd0(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10005b14

#undef str_10005b1b
#define str_10005b1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
#undef str_10005b2c
#define str_10005b2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148U)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d5c
 */

void recovered_10001d5c(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_10005b1b;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_10005b2c;
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
    recovered_10001cd0(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_10005b1b
#undef str_10005b2c
#undef local_60

#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dfc
 */

void recovered_10001dfc(byte *in_x0,ulong in_x1,byte *in_x2)

{
  unsigned char frame[64] = {0};


  recovered_100019fc(in_x0,in_x1,in_x2,(double *)&uStack0000000000000000);
  return;
}

#undef uStack0000000000000000

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6734U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e24
 */

void recovered_10001e24(long param_1,ulong param_2,ulong *param_3)

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
#define DAT_40010800 (*(uint8_t *)(0x82010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x82010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000040010800
#define Ram0000000040010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000040010804
#define Ram0000000040010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000040010808
#define Ram0000000040010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e7c
 */

bool recovered_10001e7c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000040010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000040010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000040010808, 0xb < uVar2)) {
    uVar2 = Ram0000000040010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram0000000040010800
#undef Ram0000000040010804
#undef Ram0000000040010808

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fb4
 */

void recovered_10001fb4(char *param_1,long param_2)

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
          recovered_1000206c(1);
        }
        else {
          if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
            recovered_1000206c(0);
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
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206c
 */

void recovered_1000206c(int param_1)

{
  unsigned char frame[608] = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if ((DAT_1000c128 != 0) || (param_1 != 0)) {
    if (DAT_1000c128 == 0) {
      uVar3 = 0;
    }
    else {
      recovered_10000ce4(local_230,&DAT_1000c130,DAT_1000c128);
      uVar3 = DAT_1000c128;
    }
    local_230[uVar3] = 0;
    bVar2 = recovered_10002dac(0x40);
    if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010840), uVar1 != 0)) {
      (*(code *)(ulong)uVar1)(local_230);
    }
    DAT_1000c128 = 0;
  }
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130
#undef UINT_40010840
#undef local_230

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f8
 */

void recovered_100020f8(void)

{
  unsigned char frame[608] = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if (DAT_1000c128 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10000ce4(auStack_230,&DAT_1000c130,DAT_1000c128);
    uVar3 = DAT_1000c128;
  }
  auStack_230[uVar3] = 0;
  bVar2 = recovered_10002dac(0x40);
  if (bVar2) {
    uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010840);
    if (uVar1 != 0) {
      (*(code *)(ulong)uVar1)(auStack_230);
    }
  }
  DAT_1000c128 = 0;
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130
#undef UINT_40010840
#undef auStack_230

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x82010840U))
#define acStack_230 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

void recovered_10002100(void)

{
  unsigned char frame[608] = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if (DAT_1000c128 != 0) {
    if (DAT_1000c128 == 0) {
      uVar3 = 0;
    }
    else {
      recovered_10000ce4(acStack_230,&DAT_1000c130,DAT_1000c128);
      uVar3 = DAT_1000c128;
    }
    acStack_230[uVar3] = '\0';
    bVar2 = recovered_10002dac(0x40);
    if (bVar2) {
      uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010840);
      if (uVar1 != 0) {
        (*(code *)(ulong)uVar1)(acStack_230);
      }
    }
    DAT_1000c128 = 0;
  }
  return;
}

#undef DAT_1000c128
#undef DAT_1000c130
#undef UINT_40010840
#undef acStack_230

#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#define abStack_160 (*(byte (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002108
 */

void recovered_10002108(undefined *param_1)

{
  unsigned char frame[400] = {0};

  byte *in_x2;
  uint extraout_w0 = 0;

  in_x2 = &DAT_10005b40;
  if (param_1 != (undefined *)0x0) {
    in_x2 = param_1;
  }
  recovered_10001dfc(abStack_160,0x140,in_x2);
  if (0 < (int)extraout_w0) {
    recovered_10001fb4((char *)abStack_160,(ulong)extraout_w0);
  }
  return;
}

#undef DAT_10005b40
#undef abStack_160

#undef DAT_10005c2a
#define DAT_10005c2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000216c
 */

/* WARNING: Removing unreachable block (ram,0x100021e8) */

void recovered_1000216c(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100021c0(((uintptr_t)pf_module_state+0x15fU));
  recovered_100021c0(((uintptr_t)pf_module_state+0x182U));
  recovered_100021c0(((uintptr_t)pf_module_state+0x1bbU));
  recovered_100021c0(((uintptr_t)pf_module_state+0x1f0U));
  recovered_100021c0(((uintptr_t)pf_module_state+0x216U));
  pcVar4 = &DAT_10005c2a;
  for (uVar3 = recovered_10000e58(&DAT_10005c2a); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c128 != 0) {
        DAT_1000c128 = DAT_1000c128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000206c(1);
      }
      else {
        if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
          recovered_1000206c(0);
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

#undef DAT_10005c2a
#undef DAT_1000c128
#undef DAT_1000c130

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

void recovered_100021c0(long param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar3 = recovered_10000e58((char *)param_1);
  if (param_1 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c128 != 0) {
          DAT_1000c128 = DAT_1000c128 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_1000206c(1);
        }
        else {
          if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
            recovered_1000206c(0);
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

#undef DAT_10005c2a
#define DAT_10005c2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6744U)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x674cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ec
 */

/* WARNING: Removing unreachable block (ram,0x100021e8) */

void recovered_100021ec(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100021c0(((uintptr_t)pf_module_state+0x249U));
  pcVar4 = &DAT_10005c2a;
  for (uVar3 = recovered_10000e58(&DAT_10005c2a); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c128 != 0) {
        DAT_1000c128 = DAT_1000c128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_1000206c(1);
      }
      else {
        if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
          recovered_1000206c(0);
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

#undef DAT_10005c2a
#undef DAT_1000c128
#undef DAT_1000c130

#undef UINT_40010844
#define UINT_40010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002210
 */

bool recovered_10002210(long param_1,long param_2,char *param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;

  bVar2 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10002100();
    bVar3 = recovered_10002dac(0x44);
    bVar2 = false;
    if (bVar3) {
      uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010844);
      if (uVar1 == 0) {
        bVar2 = false;
      }
      else {
        iVar4 = (*(code *)(ulong)uVar1)((char *)param_1,(uint)param_2,param_3,(int)param_4);
        bVar2 = iVar4 != 0;
      }
    }
  }
  return bVar2;
}

#undef UINT_40010844

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002288
 */

undefined8 recovered_10002288(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000228c
 */

void recovered_1000228c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002290
 */

undefined8 recovered_10002290(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
#undef str_10005cc1
#define str_10005cc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_10005cce
#define str_10005cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eaU)))
#undef str_10005cdc
#define str_10005cdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f8U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002298
 */

undefined4 * recovered_10002298(long param_1,long param_2)

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

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000e7c((byte *)param_1,(byte *)str_10005cc1);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c((byte *)param_1,(byte *)str_10005cce);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c((byte *)param_1,(byte *)str_10005cdc);
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
        recovered_10001dfc((byte *)(puVar4 + 1),0xf1,&DAT_10005b40);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100024d4(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_1000247c:
            recovered_10000c54(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000efc((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002524((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_1000247c;
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
  recovered_10001dfc((byte *)(puVar4 + 1),0xf1,&DAT_10005b40);
  return puVar4;
}

#undef DAT_10005b40
#undef DAT_1000c058
#undef str_10005cc1
#undef str_10005cce
#undef str_10005cdc
#undef uStack_4c
#undef uStack_48

#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d4
 */

undefined8 recovered_100024d4(char *param_1,void *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10002dac(0x34);
  if ((bVar1) && (uVar2 = (*(volatile uint32_t *)(uintptr_t)0x82010834), uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_40010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002524
 */

undefined8 recovered_10002524(long param_1,ulong param_2)

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

#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
#undef str_10005cc1
#define str_10005cc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_10005cce
#define str_10005cce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eaU)))
#undef str_10005cdc
#define str_10005cdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f8U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ac
 */

undefined4 * recovered_100025ac(long param_1,long param_2,int *param_3)

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
    recovered_100025e0(param_3);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10000e7c((byte *)param_1,(byte *)str_10005cc1);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e7c((byte *)param_1,(byte *)str_10005cce);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e7c((byte *)param_1,(byte *)str_10005cdc);
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
        recovered_10001dfc((byte *)(puVar4 + 1),0xf1,&DAT_10005b40);
        recovered_10000d54(&uStack_4c,0,0xc);
        uVar6 = recovered_100024d4(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_1000247c:
            recovered_10000c54(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000efc((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002524((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_1000247c;
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
  recovered_10001dfc((byte *)(puVar4 + 1),0xf1,&DAT_10005b40);
  return puVar4;
}

#undef DAT_10005b40
#undef DAT_1000c058
#undef str_10005cc1
#undef str_10005cce
#undef str_10005cdc
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e0
 */

undefined8 recovered_100025e0(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002980(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000c54(*(void **)(param_1 + 0x40));
    }
    recovered_10000c54(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002624
 */

long recovered_10002624(undefined1 *param_1,long param_2,long param_3,int *param_4)

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
          uVar3 = recovered_100026d4(param_4);
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


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026d4
 */

uint recovered_100026d4(int *param_1)

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
LAB_1000276c:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10002210((long)text,0x1fe,&DAT_10005b13,0);
      if (bVar2) {
        uVar3 = recovered_10000e58(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_1000276c;
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

#undef DAT_10005b13

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b8
 */

long recovered_100027b8(long param_1,long param_2,long param_3,uint *param_4)

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
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10001fb4((char *)param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_100028b8;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002524((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000d54((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000ce4((void *)(*(long *)(param_4 + 0x40) + uVar3),(void *)param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_100028b8;
    }
  }
  param_3 = 0;
LAB_100028b8:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c8
 */

undefined8 recovered_100028c8(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_100028d4;
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
LAB_100028d4:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000295c
 */

undefined8 recovered_1000295c(long param_1)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

undefined8 recovered_10002980(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002b5c(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x100029f4
 */

undefined1 recovered_100029f4(long param_1)

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
 * Address: 0x10002a00
 */

undefined1 recovered_10002a00(long param_1)

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
 * Address: 0x10002a0c
 */

void recovered_10002a0c(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a20
 */

uint recovered_10002a20(uint param_1,long param_2)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a44
 */

undefined8 recovered_10002a44(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10002a7c(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c058

#undef UINT_4001083c
#define UINT_4001083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a7c
 */

undefined8 recovered_10002a7c(char *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10002dac(0x3c);
  if ((bVar1) && (uVar2 = (*(volatile uint32_t *)(uintptr_t)0x8201083c), uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_4001083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6674U)))
#define uStack_28 (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac0
 */

undefined8 recovered_10002ac0(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000d54(&uStack_2c,0,0xc);
    uVar1 = recovered_100024d4(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10002b5c(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002a7c(param_1), (int)uVar1 != 0)) {
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

#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b5c
 */

undefined8 recovered_10002b5c(char *param_1,void *param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10002dac(0x38);
  if ((bVar1) && (uVar2 = (*(volatile uint32_t *)(uintptr_t)0x82010838), uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,(uint)param_3);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_40010838

#define uStack_3c (*(uint *)(frame + 16))
#define uStack_38 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

undefined8 recovered_10002bbc(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *dst;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000d54(&uStack_3c,0,0xc);
    uVar2 = recovered_100024d4(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      dst = recovered_10000c10((ulong)uVar1);
      uVar2 = 0;
      if (dst != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000ce4(dst,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10002c5c
 */

bool recovered_10002c5c(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002b5c(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c88
 */

undefined8 recovered_10002c88(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c8c
 */

void recovered_10002c8c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c90
 */

undefined8 recovered_10002c90(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


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

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9c
 */

char * recovered_10002c9c(long param_1,char param_2,long param_3)

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
 * Address: 0x10002cc0
 */

int recovered_10002cc0(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] = {0};

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


#undef DAT_10005c50
#define DAT_10005c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef str_10005c53
#define str_10005c53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26fU)))
#undef str_10005c60
#define str_10005c60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27cU)))
#undef str_10005c6a
#define str_10005c6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x286U)))
#undef str_10005c7e
#define str_10005c7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29aU)))
#undef str_10005c8c
#define str_10005c8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a8U)))
#undef str_10005c9e
#define str_10005c9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_10005caa
#define str_10005caa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c6U)))
#undef str_10005cbb
#define str_10005cbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

char * recovered_10002cf0(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10005c50;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002d1c_caseD_1;
  case 2:
    return str_10005c53;
  case 5:
    return str_10005c60;
  case 9:
    return str_10005c6a;
  case 0xc:
    return str_10005c7e;
  case 0xd:
    return str_10005c8c;
  default:
    if (param_1 == 0x11) {
      return str_10005c9e;
    }
    if (param_1 == 0x16) {
      return str_10005caa;
    }
switchD_10002d1c_caseD_1:
    return str_10005cbb;
  }
}

#undef DAT_10005c50
#undef str_10005c53
#undef str_10005c60
#undef str_10005c6a
#undef str_10005c7e
#undef str_10005c8c
#undef str_10005c9e
#undef str_10005caa
#undef str_10005cbb

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d90
 */

undefined8 recovered_10002d90(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d94
 */

undefined8 recovered_10002d94(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x673cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d98
 */

void recovered_10002d98(void)

{
  unsigned char frame[64] = {0};

  DAT_1000c120 = DAT_1000c120 + 1;
  return;
}

#undef DAT_1000c120

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x82010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x82010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000040010800
#define Ram0000000040010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000040010804
#define Ram0000000040010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000040010808
#define Ram0000000040010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dac
 */

bool recovered_10002dac(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000040010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000040010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000040010808, 0xb < uVar2)) {
    uVar2 = Ram0000000040010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram0000000040010800
#undef Ram0000000040010804
#undef Ram0000000040010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e78
 */
__attribute__((naked,noreturn)) void recovered_10002e78(long param_1){__asm__ volatile(PF_SCOPE_JUMP_ASM);}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10002e8c(void *context){__asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret");}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002eb8(void *context,int value){__asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret");}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eec
 */

void recovered_10002eec(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10000bfc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002efc);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f00
 */

undefined8 recovered_10002f00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f08
 */

void recovered_10002f08(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002f18(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002eec();
}


#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x694cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f18
 */

long recovered_10002f18(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000c330;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000c330 = param_1;
  return param_1 + 0x30;
}

#undef DAT_1000c330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f38
 */

void * recovered_10002f38(ulong size)

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
 * Address: 0x10002f68
 */

void * recovered_10002f68(ulong size)

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
 * Address: 0x10002f6c
 */

void recovered_10002f6c(void *pointer)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f84
 */

void recovered_10002f84(void *pointer)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f9c
 */

void recovered_10002f9c(void *pointer,ulong size)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fb4
 */

void recovered_10002fb4(void *pointer,ulong size)

{
  unsigned char frame[64] = {0};

  recovered_10000c54(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fcc
 */

undefined8 recovered_10002fcc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd4
 */

uint recovered_10002fd4(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe4
 */

void recovered_10002fe4(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

void recovered_10002ff4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff8
 */

undefined1 * recovered_10002ff8(ulong param_1)

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
    recovered_10002eec();
  }
  for (; size != 0; size = size - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return puVar2 + 0x30;
}


#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003040
 */

void recovered_10003040(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  if (param_1 == 0) {
    return;
  }
  bVar2 = recovered_10001e7c(0x50);
  if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010850), uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1 + -0x30);
    return;
  }
  return;
}

#undef UINT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003050
 */

long recovered_10003050(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c330
#define DAT_1000c330 (*(void * *)(((uintptr_t)pf_module_state + 0x694cU)))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003058
 */

void recovered_10003058(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  bool bVar4;

  pvVar3 = DAT_1000c330;
  if (DAT_1000c330 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000c330 + 0x10);
    DAT_1000c330 = *(void **)((long)DAT_1000c330 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)((long)pvVar3 + 0x28) & 1) == 0) {
      if (*(code **)((long)pvVar3 + 8) != (code *)0x0) {
        (**(code **)((long)pvVar3 + 8))((long)pvVar3 + 0x30);
      }
      bVar4 = recovered_10001e7c(0x50);
      if ((bVar4) && (uVar2 = (*(volatile uint32_t *)(uintptr_t)0x82010850), uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar2)(pvVar3);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c330
#undef UINT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b0
 */

void recovered_100030b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100030d0((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6954U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

void recovered_100030d0(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c338;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003130;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100035c8((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_100031dc(param_1);
LAB_10003130:
                    /* WARNING: Subroutine does not return */
  recovered_10002eec();
}

#undef DAT_1000c338
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x694cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003134
 */

void recovered_10003134(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c330;
  if (DAT_1000c330 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002eec();
  }
  *(undefined1 *)(DAT_1000c330 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100030d0(puVar1);
}

#undef DAT_1000c330

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6954U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003164
 */

void recovered_10003164(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000c338;
  DAT_1000c338 = param_1;
  return;
}

#undef DAT_1000c338

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6954U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003178
 */

void recovered_10003178(undefined8 *param_1)

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
 * Address: 0x100031a4
 */

void recovered_100031a4(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100030d0(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

void recovered_100031b0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002eec();
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6954U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031bc
 */

undefined8 recovered_100031bc(undefined8 *param_1)

{
  unsigned char frame[128] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c338 != (long *)0x0) {
    DAT_1000c338 = (long *)*DAT_1000c338;
  }
  puVar2 = (undefined8 *)recovered_100031dc(param_1);
  plVar3 = DAT_1000c338;
  while( true ) {
    DAT_1000c338 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002eec();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_100035c8((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003270;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003270:
  recovered_10002e78((long)plVar3);
  recovered_100031bc(extraout_x0);
  return 0;
}

#undef DAT_1000c338
#undef uStack_50
#undef uStack_48

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6954U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031dc
 */

undefined8 recovered_100031dc(undefined8 *param_1)

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
      recovered_10002eec();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_100035c8((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003270;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10003270:
  recovered_10002e78((long)plVar2);
  recovered_100031bc(extraout_x0);
  return 0;
}

#undef DAT_1000c338
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003278
 */

undefined8 recovered_10003278(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

  recovered_100031bc(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003284
 */

undefined8 recovered_10003284(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000328c
 */

void recovered_1000328c(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002eec();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003298
 */

long recovered_10003298(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_100032d8(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d8
 */

bool recovered_100032d8(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_1000335c:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_1000335c;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_1000335c;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x66ccU)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003364
 */

void recovered_10003364(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003368
 */

undefined8 recovered_10003368(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

bool recovered_10003370(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003380
 */

bool recovered_10003380(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b8
 */

bool recovered_100033b8(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d4
 */

bool recovered_100033d4(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ec
 */

bool recovered_100033ec(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003404
 */

bool recovered_10003404(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000341c
 */

bool recovered_1000341c(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003434
 */

uint128 recovered_10003434(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001148(param_1);
  dVar1 = PF_PART8(auVar2, 0);
  dVar3 = dVar1;
  if (param_1 - dVar1 <= -0.5) {
    dVar3 = dVar1 + -1.0;
  }
  if (0.5 <= param_1 - dVar1) {
    dVar3 = dVar1 + 1.0;
  }
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar3;
  return auVar2;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003480
 */

long recovered_10003480(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100034c0;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100034c0:
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
      goto LAB_10003544;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003544;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003544;
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
LAB_10003544:
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
 * Address: 0x100035c4
 */

long recovered_100035c4(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100034c0;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100034c0:
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
      goto LAB_10003544;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003544;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003544;
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
LAB_10003544:
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

#undef DAT_10005a60
#define DAT_10005a60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c8
 */

undefined8 recovered_100035c8(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_100037a0((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10003894(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10003894(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10003894(&local_68);
        uVar5 = recovered_10003894(&local_68);
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
            uVar5 = recovered_100038f8(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_100038f8(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10005a60 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_100037a0((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_100032d8(param_2,(long *)puVar6);
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

#undef DAT_10005a60
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

ulong * recovered_100037a0(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_100038cc(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10003858;
  case 1:
    puVar1 = (ulong *)recovered_10003894(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_100038cc(pbVar5,2);
    goto LAB_10003854;
  case 3:
    puVar1 = (ulong *)recovered_100038cc(pbVar5,4);
    goto LAB_1000381c;
  default:
    goto switchD_100037e8_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_100038f8(param_2);
    break;
  case 10:
    uVar3 = recovered_100038cc(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10003854:
    pbVar4 = pbVar5 + 2;
LAB_10003858:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_100038cc(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_1000381c:
    pbVar4 = pbVar5 + 4;
    goto LAB_10003858;
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
switchD_100037e8_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003894
 */

ulong recovered_10003894(undefined8 *param_1)

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
 * Address: 0x100038cc
 */

ulong recovered_100038cc(byte *param_1,long param_2)

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
 * Address: 0x100038f8
 */

ulong recovered_100038f8(undefined8 *param_1)

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


#undef DAT_10005ac8
#define DAT_10005ac8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6964U)))
#undef str_10005cea
#define str_10005cea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x306U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003970
 */

long * recovered_10003970(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  void *pointer;

  plVar4 = recovered_10002f38(0x2c0);
  *plVar4 = 0;
  plVar4[2] = 0;
  plVar4[1] = 0;
  plVar4[4] = 0;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 5) = 0;
  *(int *)((long)plVar4 + 0x2c) = (int)DAT_10005ac8;
  *(undefined1 *)(plVar4 + 6) = 0xf6;
  *(undefined4 *)((long)plVar4 + 0x34) = 0;
  *(undefined4 *)(plVar4 + 7) = 0;
  *(undefined2 *)((long)plVar4 + 0x3c) = 0;
  *(undefined1 *)((long)plVar4 + 0x3e) = 0;
  plVar4[8] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  pcVar1 = str_10005cea;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  *(undefined4 *)(plVar4 + 0x13) = 0;
  recovered_10000d70((undefined1 *)((long)plVar4 + 0x9c),0x220);
  recovered_10003ab8(plVar4,(long)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)((long)plVar4 + 0x1c) = param_2;
  *(uint *)(plVar4 + 4) = param_3;
  *(uint *)((long)plVar4 + 0x34) = param_2 >> 1;
  *(uint *)(plVar4 + 7) = param_3 >> 1;
  pcVar1 = &DAT_10005b13;
  if ((char *)*plVar4 != (char *)0x0) {
    pcVar1 = (char *)*plVar4;
  }
  bVar2 = recovered_100051c0(0xa0);
  if (bVar2) {
    uVar3 = (*(volatile uint32_t *)(uintptr_t)0x820108a0);
    if (uVar3 != 0) {
      uVar3 = (*(code *)(ulong)uVar3)(pcVar1,param_2,param_3);
      *(uint *)(plVar4 + 3) = uVar3;
      if (uVar3 != 0) {
        DAT_1000c348 = plVar4;
        recovered_10003b1c(plVar4);
        recovered_10003df4((long)plVar4);
        return plVar4;
      }
      goto LAB_10003a94;
    }
  }
  *(undefined4 *)(plVar4 + 3) = 0;
LAB_10003a94:
  recovered_10003af4(plVar4);
  recovered_10002f6c(pointer);
  return (long *)0x0;
}

#undef DAT_10005ac8
#undef DAT_10005b13
#undef DAT_1000c348
#undef str_10005cea

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab8
 */

long * recovered_10003ab8(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10005050(param_2);
  recovered_10004f68(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af4
 */

void recovered_10003af4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005208(param_1 + 8);
  recovered_10002f6c((void *)*param_1);
  return;
}


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define local_78 (*(void * *)(frame + 16))
#define local_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b1c
 */

void recovered_10003b1c(undefined8 *param_1)

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
      recovered_10005234((long *)&local_78,uVar26);
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
    puVar5 = &DAT_10005b13;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*param_1;
    }
    bVar12 = *(byte *)((long)param_1 + 0x2e);
    bVar13 = *(byte *)((long)param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 6);
    bVar18 = recovered_100051c0(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      uVar19 = (*(volatile uint32_t *)(uintptr_t)0x820108a4);
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uVar19)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)((long)param_1 + 0x2d) = uVar19 != 0;
    local_70 = 0;
    recovered_10002f6c(local_78);
  }
  return;
}

#undef DAT_10005b13
#undef local_78
#undef local_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df4
 */

ulong recovered_10003df4(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;

  uVar4 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      bVar2 = recovered_100051c0(0xb4);
      uVar4 = (ulong)bVar2;
      if (bVar2) {
        uVar1 = (*(volatile uint32_t *)(uintptr_t)0x820108b4);
        if (uVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar3 = (*(code *)(ulong)uVar1)(uVar3,(void *)(param_1 + 0x60));
          uVar4 = (ulong)uVar3;
          if (uVar3 != 0) {
            *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x88);
            uVar4 = 1;
            if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
              return 1;
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
  }
  return uVar4;
}


#undef UINT_400108b0
#define UINT_400108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e70
 */

void recovered_10003e70(long param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x24);
      iVar2 = *(int *)(param_1 + 0x28);
      bVar5 = recovered_100051c0(0xb0);
      if ((bVar5) && (uVar4 = (*(volatile uint32_t *)(uintptr_t)0x820108b0), uVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar4)(uVar3,iVar1,iVar2,1,1);
        return;
      }
    }
  }
  return;
}

#undef UINT_400108b0

#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6964U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ee8
 */

void recovered_10003ee8(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  void *pointer;

  if (param_1 == 0) {
    return;
  }
  if (DAT_1000c348 == param_1) {
    DAT_1000c348 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (((uVar1 != 0) && (bVar3 = recovered_100051c0(0xa8), bVar3)) &&
     (uVar2 = (*(volatile uint32_t *)(uintptr_t)0x820108a8), uVar2 != 0)) {
    (*(code *)(ulong)uVar2)(uVar1);
  }
  recovered_10003af4((undefined8 *)param_1);
  recovered_10000c54(pointer);
  return;
}

#undef DAT_1000c348

#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define local_38 (*(undefined1 * *)(frame + 16))
#define local_30 (*(long *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f50
 */

long recovered_10003f50(undefined8 *param_1)

{
  unsigned char frame[104] = {0};

  undefined1 *src;
  ulong size;
  void *dst;

  if (param_1 == (undefined8 *)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    size = 1;
    local_38 = (undefined1 *)0x0;
  }
  else {
    recovered_1000531c(&local_38,param_1);
    size = local_30 + 1;
  }
  dst = recovered_10002f68(size);
  src = &DAT_10005b13;
  if (local_38 != (undefined1 *)0x0) {
    src = local_38;
  }
  recovered_10000ce4(dst,src,local_30 + 1);
  recovered_10002f6c(local_38);
  return (long)dst;
}

#undef DAT_10005b13
#undef local_38
#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd0
 */

void recovered_10003fd0(long param_1,undefined4 *param_2,undefined4 *param_3)

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


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004004
 */

void recovered_10004004(long param_1,int param_2,int param_3)

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
  recovered_10004040(param_1);
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
      recovered_10005234((long *)&pvStack_78,uVar26);
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
    puVar5 = &DAT_10005b13;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)param_1;
    }
    bVar12 = *(byte *)(param_1 + 0x2e);
    bVar13 = *(byte *)(param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 0x30);
    bVar18 = recovered_100051c0(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      uVar19 = (*(volatile uint32_t *)(uintptr_t)0x820108a4);
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uVar19)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar19 != 0;
    uStack_70 = 0;
    recovered_10002f6c(pvStack_78);
  }
  return;
}

#undef DAT_10005b13
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004040
 */

void recovered_10004040(long param_1)

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


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000406c
 */

void recovered_1000406c(long param_1,undefined1 *param_2)

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
  puVar5 = &DAT_10005b13;
  if (param_2 != (undefined1 *)0x0) {
    puVar5 = param_2;
  }
  recovered_10003ab8((long *)param_1,(long)puVar5);
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
      recovered_10005234((long *)&pvStack_78,uVar26);
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
    puVar5 = &DAT_10005b13;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)param_1;
    }
    bVar12 = *(byte *)(param_1 + 0x2e);
    bVar13 = *(byte *)(param_1 + 0x2f);
    bVar14 = *(byte *)(param_1 + 0x30);
    bVar18 = recovered_100051c0(0xa4);
    uVar19 = (uint)bVar18;
    if (bVar18) {
      uVar19 = (*(volatile uint32_t *)(uintptr_t)0x820108a4);
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = (*(code *)(ulong)uVar19)
                           (iVar25,puVar5,pvVar17,iVar6,iVar7,iVar6 << 2,
                            (uint)bVar12 << 0x10 | (uint)bVar13 << 8 | (uint)bVar14);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar19 != 0;
    uStack_70 = 0;
    recovered_10002f6c(pvStack_78);
  }
  return;
}

#undef DAT_10005b13
#undef pvStack_78
#undef uStack_70
#undef uStack_68

#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a4
 */

void recovered_100040a4(long param_1,uint *param_2)

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
  recovered_1000410c((long *)(param_1 + 0x40),puVar19,
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
      recovered_10005234((long *)&pvStack_78,uVar26);
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
    puVar19 = &DAT_10005b13;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)param_1;
    }
    bVar11 = *(byte *)(param_1 + 0x2e);
    bVar12 = *(byte *)(param_1 + 0x2f);
    bVar13 = *(byte *)(param_1 + 0x30);
    bVar17 = recovered_100051c0(0xa4);
    uVar18 = (uint)bVar17;
    if (bVar17) {
      uVar18 = (*(volatile uint32_t *)(uintptr_t)0x820108a4);
      if (uVar18 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (*(code *)(ulong)uVar18)
                           (iVar25,puVar19,pvVar16,iVar5,iVar6,iVar5 << 2,
                            (uint)bVar11 << 0x10 | (uint)bVar12 << 8 | (uint)bVar13);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar18 != 0;
    uStack_70 = 0;
    recovered_10002f6c(pvStack_78);
  }
  return;
}

#undef DAT_10005b13
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000410c
 */

void recovered_1000410c(long *param_1,undefined1 *param_2,undefined1 *param_3)

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
      recovered_1000529c(param_1,uVar4);
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


#undef DAT_10005ad0
#define DAT_10005ad0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_10005ae0
#define DAT_10005ae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef UINT_4001087c
#define UINT_4001087c (*(uint *)(0x8201087cU))
#undef UINT_40010880
#define UINT_40010880 (*(uint *)(0x82010880U))
#undef UINT_4001089c
#define UINT_4001089c (*(uint *)(0x8201089cU))
#undef UNK_10005ae8
#define UNK_10005ae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef _DAT_10005ae0
#define _DAT_10005ae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef uRam0000000010005ae8
#define uRam0000000010005ae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#define local_50 (*(undefined4 *)(frame + 96))
#define uStack_98 (*(undefined8 *)(frame + 24))
#define iStack_5c (*(int *)(frame + 84))
#define uStack_58 (*(undefined8 *)(frame + 88))
#define uStack_60 (*(undefined8 *)(frame + 80))
#define local_a0 (*(undefined8 *)(frame + 16))
#define local_90 (*(undefined8 *)(frame + 32))
#define local_88 (*(undefined8 *)(frame + 40))
#define local_80 (*(long (*)[4])(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004120(long param_1)

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
  recovered_10003df4(param_1);
  bVar3 = recovered_100051c0(0x80);
  if (!bVar3) goto LAB_100042f8;
  uVar7 = (*(volatile uint32_t *)(uintptr_t)0x82010880);
  if ((uVar7 == 0) || (iVar4 = (*(code *)(ulong)uVar7)(&local_a0), iVar4 == 0)) goto LAB_100042f8;
  local_50 = 0;
  local_80[3] = 0;
  local_80[2] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  bVar3 = recovered_100051c0(0x7c);
  if (bVar3) {
    uVar7 = (*(volatile uint32_t *)(uintptr_t)0x8201087c);
    if ((uVar7 == 0) || (iVar4 = (*(code *)(ulong)uVar7)(local_80), iVar4 == 0)) goto LAB_10004240;
    iVar4 = 0;
    bVar3 = true;
    if (local_80[0] == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = (uint)((ulong)local_80[1] >> 0x20);
      uVar9 = (uint)local_80[2];
      iVar10 = (int)((ulong)local_80[2] >> 0x20);
      uVar5 = CONCAT17(-((char)((PF_PART4(uStack_58, 4) == (int)((ulong)uRam0000000010005ae8 >> 0x20)) *
                               -0x80) < '\0'),
                       CONCAT16(-((char)((iStack_5c == (int)uRam0000000010005ae8) * -0x80) < '\0'),
                                CONCAT15(-((char)(((int)((ulong)local_80[3] >> 0x20) ==
                                                  (int)((ulong)_DAT_10005ae0 >> 0x20)) * -0x80) <
                                          '\0'),CONCAT14(-((char)(~-((int)local_80[3] ==
                                                                    (int)_DAT_10005ae0) << 7) < '\0'
                                                          ),CONCAT13(-((char)((iVar10 == 0) * -0x80)
                                                                      < '\0'),CONCAT12(-((char)((
                                                  uVar9 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((uVar8 == 0) * -0x80) < '\0'),
                                                           -((char)(((int)local_80[1] == 0) * -0x80)
                                                            < '\0')))))))) & DAT_10005ad0;
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
LAB_10004240:
    iVar4 = 0;
    uVar7 = 0;
    bVar3 = true;
  }
  iVar10 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28);
  if (((uint)local_a0 >> 1 & 1) == 0) {
LAB_10004278:
    if ((local_a0 & 1) == 0) {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar5 = recovered_1000535c((uint)uStack_98,(uint)local_88,uVar7);
      uVar6 = recovered_1000535c(PF_PART4(uStack_98, 4),PF_PART4(local_88, 4),iVar4);
      *(int *)(param_1 + 0x34) = ((int)uVar5 - iVar10) + -0xe;
      iVar4 = ((int)uVar6 - iVar2) + -0x26;
      goto LAB_100042b8;
    }
  }
  else {
    if ((int)local_90 == 0 && PF_PART4(local_90, 4) == 0) goto LAB_10004278;
    *(int *)(param_1 + 0x34) = (int)local_90 + *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38) + PF_PART4(local_90, 4);
LAB_100042b8:
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
  recovered_10004040(param_1);
LAB_100042f8:
  recovered_10004344();
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    recovered_10003b1c((undefined8 *)param_1);
  }
  bVar3 = recovered_100051c0(0x9c);
  if (bVar3) {
    uVar7 = (*(volatile uint32_t *)(uintptr_t)0x8201089c);
    if (uVar7 != 0) {
      (*(code *)(ulong)uVar7)();
    }
  }
  return;
}

#undef DAT_10005ad0
#undef DAT_10005ae0
#undef UINT_4001087c
#undef UINT_40010880
#undef UINT_4001089c
#undef UNK_10005ae8
#undef _DAT_10005ae0
#undef uRam0000000010005ae8
#undef local_50
#undef uStack_98
#undef iStack_5c
#undef uStack_58
#undef uStack_60
#undef local_a0
#undef local_90
#undef local_88
#undef local_80

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fcU)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fdU)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66feU)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66ffU)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6700U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6725U)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6726U)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6727U)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6728U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6729U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(byte *)(((uintptr_t)pf_module_state + 0x672aU)))
#undef DAT_1000c340
#define DAT_1000c340 (*(int *)(((uintptr_t)pf_module_state + 0x695cU)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6964U)))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2624U)))
#undef UINT_4001082c
#define UINT_4001082c (*(uint *)(0x8201082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004344
 */

void recovered_10004344(void)

{
  unsigned char frame[64] = {0};

  ushort uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;

  recovered_100047e0();
  lVar3 = DAT_1000c348;
  if (((DAT_1000c348 == 0) || (uVar7 = recovered_10003df4(DAT_1000c348), (int)uVar7 == 0)) ||
     ((*(uint *)(lVar3 + 0x84) & 6) != 2)) {
    return;
  }
switchD_100045c4_caseD_49:
  do {
    do {
      bVar4 = recovered_100051c0(0x2c);
      if (!bVar4) {
        return;
      }
      uVar6 = (*(volatile uint32_t *)(uintptr_t)0x8201082c);
      if (uVar6 == 0) {
        return;
      }
      uVar5 = (*(code *)(ulong)uVar6)();
      if (uVar5 == 0) {
        return;
      }
      uVar1 = uVar5 >> 8;
      if ((uVar5 & 0xff) == 0) goto LAB_10004418;
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
    else {
      uVar6 = (uint)uVar5;
      if (DAT_1000c340 == 1) {
        DAT_1000c340 = (uint)((uVar6 & 0xff) == 0x5b) << 1;
      }
      else if ((uVar5 & 0xff) == 0x1b) {
        DAT_1000c340 = 1;
      }
      else if ((uVar5 - 0x20 & 0xff) < 0x5f) {
        DAT_1000c10e = (byte)uVar5;
        bVar2 = DAT_1000c10e;
        if (0x19 < (uVar6 - 0x61 & 0xff)) {
          if (0x19 < (uVar6 - 0x41 & 0xff)) {
            if ((uVar6 - 0x30 & 0xff) < 10) {
              *(&PTR_DAT_10008008)[(ulong)(uVar6 - 0x30) & 0xff] = 1;
              goto switchD_10004540_caseD_5;
            }
            goto LAB_1000451c;
          }
          bVar2 = DAT_1000c10e | 0x20;
        }
        recovered_100053a8((int)(char)bVar2);
      }
      else {
LAB_1000451c:
        uVar6 = uVar6 & 0xff;
        switch((uintptr_t)(uVar6)) {
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
switchD_10004540_caseD_8:
          DAT_1000c10b = 1;
          break;
        case 10:
        case 0xd:
          DAT_1000c0e0 = 1;
          break;
        default:
          if (uVar6 == 0x20) {
            DAT_1000c10d = 1;
          }
          else if (uVar6 == 0x2d) {
            DAT_1000c109 = 1;
          }
          else if (uVar6 == 0x2e) {
            DAT_1000c10a = 1;
          }
          else if (uVar6 == 0x7f) goto switchD_10004540_caseD_8;
        }
      }
    }
switchD_10004540_caseD_5:
  } while (DAT_1000c348 == 0);
  goto LAB_100045ac;
LAB_10004418:
  if (DAT_1000c348 == 0) goto switchD_100045c4_caseD_49;
  switch((uintptr_t)(uVar1)) {
  case 1:
switchD_100045c4_caseD_48:
    DAT_1000c0e1 = 1;
    goto switchD_100045c4_caseD_49;
  case 2:
switchD_100045c4_caseD_50:
    DAT_1000c0e2 = 1;
    goto switchD_100045c4_caseD_49;
  case 3:
switchD_100045c4_caseD_4d:
    DAT_1000c0e4 = 1;
    goto switchD_100045c4_caseD_49;
  case 4:
switchD_100045c4_caseD_4b:
    DAT_1000c0e3 = 1;
    goto switchD_100045c4_caseD_49;
  }
  if (uVar1 != 0x17) {
LAB_100045ac:
    switch((uintptr_t)(uVar1)) {
    case 0x48:
      goto switchD_100045c4_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_100045c4_caseD_49;
    case 0x4b:
      goto switchD_100045c4_caseD_4b;
    case 0x4d:
      goto switchD_100045c4_caseD_4d;
    case 0x50:
      goto switchD_100045c4_caseD_50;
    case 0x53:
      DAT_1000c10c = 1;
      goto switchD_100045c4_caseD_49;
    default:
      if (uVar1 != 1) {
        if (uVar1 == 0xe) {
          DAT_1000c10b = 1;
        }
        else if (uVar1 == 0x1c) {
          DAT_1000c0e0 = 1;
        }
        goto switchD_100045c4_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_1000c348 + 0x2c) = 1;
  goto switchD_100045c4_caseD_49;
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
#undef PTR_DAT_10008008
#undef UINT_4001082c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004650
 */

byte recovered_10004650(long param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    recovered_10003df4(param_1);
    bVar1 = *(byte *)(param_1 + 0x2c);
  }
  return bVar1 & 1;
}


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define pvStack_78 (*(void * *)(frame + 16))
#define uStack_70 (*(undefined8 *)(frame + 24))
#define uStack_68 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004684
 */

void recovered_10004684(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[168] = {0};

  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  bool bVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2e) = param_2;
  *(undefined1 *)(param_1 + 0x2f) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  if ((param_1 != 0) && (uVar25 = *(uint *)(param_1 + 0x18), uVar25 != 0)) {
    uVar18 = *(uint *)(param_1 + 0x1c);
    uVar8 = *(uint *)(param_1 + 0x20);
    uVar6 = uVar18;
    if ((int)uVar18 < 2) {
      uVar6 = 1;
    }
    uVar7 = uVar8;
    if ((int)uVar8 < 2) {
      uVar7 = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pvStack_78 = (void *)0x0;
    if (((*(long *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x58))) &&
       (0 < *(int *)(param_1 + 0x5c))) {
      uVar26 = (long)(int)uVar18 * (long)(int)uVar8 * 4;
      recovered_10005234((long *)&pvStack_78,uVar26);
      for (uVar20 = 0; uVar20 < uVar26; uVar20 = uVar20 + 4) {
        *(undefined1 *)((long)pvStack_78 + uVar20) = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)((long)pvStack_78 + uVar20 + 1) = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)((long)pvStack_78 + uVar20 + 2) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((long)pvStack_78 + uVar20 + 3) = 0xff;
      }
      iVar24 = *(int *)(param_1 + 0x58);
      iVar9 = *(int *)(param_1 + 0x5c);
      uVar18 = *(uint *)(param_1 + 0x1c);
      uVar8 = *(uint *)(param_1 + 0x20);
      uVar25 = 0;
      if ((long)iVar24 != 0) {
        uVar25 = (uint)(((long)iVar9 * (long)(int)uVar18) / (long)iVar24);
      }
      if ((int)uVar25 < 2) {
        uVar25 = 1;
      }
      uVar21 = uVar18;
      if ((int)uVar8 < (int)uVar25) {
        uVar21 = 0;
        if ((long)iVar9 != 0) {
          uVar21 = (uint)(((long)(int)uVar8 * (long)iVar24) / (long)iVar9);
        }
        if ((int)uVar21 < 2) {
          uVar21 = 1;
        }
        uVar25 = uVar8;
      }
      lVar22 = (long)((int)(uVar18 - uVar21) / 2);
      uVar26 = (ulong)(uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
      lVar23 = (long)((int)(uVar8 - uVar25) / 2);
      for (uVar20 = 0; uVar20 != (uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU)); uVar20 = uVar20 + 1
          ) {
        iVar24 = 0;
        iVar9 = 0;
        if (uVar25 != 0) {
          iVar9 = (*(int *)(param_1 + 0x5c) * (int)uVar20) / (int)uVar25;
        }
        iVar13 = *(int *)(param_1 + 0x5c) + -1;
        if (iVar9 <= iVar13) {
          iVar13 = iVar9;
        }
        lVar14 = lVar22;
        uVar15 = uVar26;
        iVar2 = 0;
        if (-1 < iVar9) {
          iVar2 = iVar13;
        }
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          iVar9 = *(int *)(param_1 + 0x58);
          iVar13 = 0;
          if (uVar21 != 0) {
            iVar13 = (iVar9 * iVar24) / (int)uVar21;
          }
          iVar3 = iVar9 + -1;
          if (iVar13 <= iVar9 + -1) {
            iVar3 = iVar13;
          }
          iVar4 = 0;
          if (-1 < iVar13) {
            iVar4 = iVar3;
          }
          lVar1 = (long)iVar9 * (long)iVar2 + (long)iVar4;
          lVar19 = lVar14 + lVar23 * *(int *)(param_1 + 0x1c);
          *(undefined1 *)((long)pvStack_78 + lVar19 * 4) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4);
          *(undefined1 *)((long)pvStack_78 + lVar19 * 4 + 1) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 1);
          *(undefined1 *)((long)pvStack_78 + lVar19 * 4 + 2) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 2);
          *(undefined1 *)((long)pvStack_78 + lVar19 * 4 + 3) =
               *(undefined1 *)(*(long *)(param_1 + 0x40) + lVar1 * 4 + 3);
          iVar24 = iVar24 + 1;
          lVar14 = lVar14 + 1;
        }
        lVar23 = lVar23 + 1;
      }
      uVar25 = *(uint *)(param_1 + 0x18);
    }
    pvVar16 = pvStack_78;
    pcVar5 = &DAT_10005b13;
    if (*(char **)param_1 != (char *)0x0) {
      pcVar5 = *(char **)param_1;
    }
    bVar10 = *(byte *)(param_1 + 0x2e);
    bVar11 = *(byte *)(param_1 + 0x2f);
    bVar12 = *(byte *)(param_1 + 0x30);
    bVar17 = recovered_100051c0(0xa4);
    uVar18 = (uint)bVar17;
    if (bVar17) {
      uVar18 = (*(volatile uint32_t *)(uintptr_t)0x820108a4);
      if (uVar18 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (*(code *)(ulong)uVar18)
                           (uVar25,pcVar5,pvVar16,uVar6,uVar7,uVar6 << 2,
                            (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12);
      }
    }
    *(bool *)(param_1 + 0x2d) = uVar18 != 0;
    uStack_70 = 0;
    recovered_10002f6c(pvStack_78);
  }
  return;
}

#undef DAT_10005b13
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000469c
 */

int * recovered_1000469c(long param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  void *dst;
  ulong uVar2;
  undefined1 *puVar3;
  ulong size;
  int iVar4;
  int iVar5;

  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_10002f38(0x20);
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
    dst = recovered_10002f68(size);
    *(void **)(piVar1 + 2) = dst;
    if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x58) != iVar4)) ||
       (*(int *)(param_1 + 0x5c) != iVar5)) {
      puVar3 = (undefined1 *)((long)dst + 3);
      for (uVar2 = 0; uVar2 < size; uVar2 = uVar2 + 4) {
        puVar3[-3] = *(undefined1 *)(param_1 + 0x2e);
        *(undefined2 *)(puVar3 + -2) = *(undefined2 *)(param_1 + 0x2f);
        *puVar3 = 0xff;
        puVar3 = puVar3 + 4;
      }
    }
    else {
      recovered_10000ce4(dst,*(void **)(param_1 + 0x40),size);
    }
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  return piVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004788
 */

void recovered_10004788(long param_1,undefined4 *param_2,undefined4 *param_3)

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
 * Address: 0x100047c0
 */

byte recovered_100047c0(long param_1,uint param_2)

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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fcU)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fdU)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66feU)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66ffU)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6700U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6701U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6702U)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6703U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6704U)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6705U)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6706U)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6707U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6708U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6709U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670aU)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670bU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670cU)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670dU)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670eU)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670fU)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6710U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6711U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6712U)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6713U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6714U)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6715U)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6716U)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6717U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6718U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6719U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671aU)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671bU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671cU)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671dU)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671eU)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671fU)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6720U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6721U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6722U)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6723U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6724U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6725U)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6726U)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6727U)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6728U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6729U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x672aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e0
 */

void recovered_100047e0(void)

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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fcU)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66fdU)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66feU)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66ffU)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6700U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6701U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6702U)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6703U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6704U)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6705U)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6706U)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6707U)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6708U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6709U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670aU)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670bU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670cU)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670dU)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670eU)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x670fU)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6710U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6711U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6712U)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6713U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6714U)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6715U)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6716U)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6717U)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6718U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6719U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671aU)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671bU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671cU)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671dU)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671eU)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x671fU)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6720U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6721U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6722U)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6723U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6724U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6725U)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6726U)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6727U)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6728U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6729U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x672aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000495c
 */

void recovered_1000495c(void)

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
 * Address: 0x10004960
 */

void recovered_10004960(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004964
 */

void recovered_10004964(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004968
 */

undefined8 recovered_10004968(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000496c
 */

void recovered_1000496c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004970
 */

undefined8 recovered_10004970(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10005b11
#define DAT_10005b11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_10005cf7
#define DAT_10005cf7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x313U)))
#undef DAT_10005cfa
#define DAT_10005cfa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x316U)))
#define apuStack_c0 (*(undefined1 * (*)[3])(frame + 40))
#define uStack_a0 (*(undefined8 *)(frame + 72))
#define local_d8 (*(char * *)(frame + 16))
#define pvStack_90 (*(void * *)(frame + 88))
#define local_d0 (*(ulong *)(frame + 24))
#define local_a8 (*(void * *)(frame + 64))
#define local_98 (*(undefined8 *)(frame + 80))
#define local_88 (*(long *)(frame + 96))
#define uStack_68 (*(undefined8 *)(frame + 128))
#define local_78 (*(long *)(frame + 112))
#define local_70 (*(ulong *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004974
 */

long recovered_10004974(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[264] = {0};

  char *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  void *src;
  bool bVar5;
  bool bVar6;
  ulong extraout_x0;
  undefined8 uVar7;
  void *dst;
  long lVar8;
  ulong uVar9;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  dst = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    recovered_10005854(&local_d8,(long)param_1);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    if (local_d0 == 0) {
      bVar5 = false;
    }
    else {
      pcVar1 = &DAT_10005b13;
      if (local_d8 != (char *)0x0) {
        pcVar1 = local_d8;
      }
      bVar5 = *pcVar1 == '/';
    }
    uVar9 = 0;
    do {
      if (local_d0 <= uVar9) break;
      recovered_100053d0(&local_d8,'/',uVar9);
      uVar2 = local_d0;
      if (extraout_x0 != 0xffffffffffffffff) {
        uVar2 = extraout_x0;
      }
      recovered_10005408(&pvStack_90,&local_d8,uVar9,uVar2 - uVar9);
      if ((local_88 != 0) && (bVar6 = recovered_10004cc0(&pvStack_90,&DAT_10005b11), bVar6)) {
        bVar6 = recovered_10005444(&pvStack_90,&DAT_10005cf7);
        if (bVar6) {
          if ((local_70 == 0) ||
             (bVar6 = recovered_10004cc0((undefined8 *)(local_78 + local_70 * 0x18 + -0x18),
                                         &DAT_10005cf7), !bVar6)) {
            if (!bVar5) goto LAB_10004ab0;
          }
          else {
            recovered_10005494(&local_78);
          }
        }
        else {
LAB_10004ab0:
          recovered_100055b8(&local_78,&pvStack_90);
        }
      }
      uVar9 = extraout_x0 + 1;
      recovered_10002f6c(pvStack_90);
    } while (extraout_x0 != 0xffffffffffffffff);
    puVar3 = &DAT_10005cfa;
    if (!bVar5) {
      puVar3 = &DAT_10005b13;
    }
    recovered_10005854(&pvStack_90,(long)puVar3);
    lVar8 = 0;
    for (uVar9 = 0; uVar9 < local_70; uVar9 = uVar9 + 1) {
      if (uVar9 != 0 || bVar5) {
        recovered_100054d0((long *)&pvStack_90,0x2f);
      }
      recovered_10005534((long *)&pvStack_90,(undefined8 *)(local_78 + lVar8));
      lVar8 = lVar8 + 0x18;
    }
    if (local_88 == 0) {
      puVar4 = &DAT_10005cfa;
      if (!bVar5) {
        puVar4 = &DAT_10005b11;
      }
      recovered_10005854(apuStack_c0,(long)puVar4);
    }
    else {
      recovered_1000531c(apuStack_c0,&pvStack_90);
    }
    recovered_10002f6c(pvStack_90);
    recovered_100057d4(&local_78);
    recovered_10002f6c(local_d8);
    puVar3 = &DAT_10005b13;
    if (apuStack_c0[0] != (undefined1 *)0x0) {
      puVar3 = apuStack_c0[0];
    }
    uVar7 = recovered_10004c6c(puVar3,&local_a8);
    if (((int)uVar7 != 0) ||
       ((bVar5 = recovered_10004cc0(apuStack_c0,param_1), bVar5 &&
        (uVar7 = recovered_10004c6c(param_1,&local_a8), (int)uVar7 != 0)))) {
      src = local_a8;
      dst = (void *)0x0;
      if ((((local_a8 != (void *)0x0) && ((int)uStack_a0 != 0)) && (PF_PART4(uStack_a0, 4) != 0)) &&
         ((int)local_98 != 0)) {
        dst = recovered_10002f68(uStack_a0 & 0xffffffff);
        recovered_10000ce4(dst,src,uStack_a0 & 0xffffffff);
        recovered_10004cd8(src);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = PF_PART4(uStack_a0, 4);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)local_98;
        }
      }
    }
    else {
      dst = (void *)0x0;
    }
    recovered_10002f6c(apuStack_c0[0]);
  }
  return (long)dst;
}

#undef DAT_10005b11
#undef DAT_10005b13
#undef DAT_10005cf7
#undef DAT_10005cfa
#undef apuStack_c0
#undef uStack_a0
#undef local_d8
#undef pvStack_90
#undef local_d0
#undef local_a8
#undef local_98
#undef local_88
#undef uStack_68
#undef local_78
#undef local_70

#undef UINT_40010858
#define UINT_40010858 (*(uint *)(0x82010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c6c
 */

undefined8 recovered_10004c6c(char *param_1,void *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100051c0(0x58);
  if ((bVar1) && (uVar2 = (*(volatile uint32_t *)(uintptr_t)0x82010858), uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_40010858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cc0
 */

bool recovered_10004cc0(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_10005444(param_1,param_2);
  return !bVar1;
}


#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cd8
 */

void recovered_10004cd8(void *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_100051c0(0x50);
  if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010850), uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d18
 */

undefined8 recovered_10004d18(float param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_100051c0(0x68);
  if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010868), uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100186d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_2,param_1);
    return pvVar3;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d6c
 */

void recovered_10004d6c(float param_1,void *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_100051c0(0x70);
  if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010870), uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100186f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_2,param_1);
    return;
  }
  return;
}


#undef DAT_10005ad8
#define DAT_10005ad8 (*(double *)(((uintptr_t)pf_module_state + 0xf4U)))
#define uStack_54 (*(undefined4 *)(frame + 36))
#define local_68 (*(void * *)(frame + 16))
#define local_58 (*(uint *)(frame + 32))
#define uStack_60 (*(uint *)(frame + 24))
#define uStack_5c (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dbc
 */

undefined8 *
recovered_10004dbc(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  unsigned char frame[152] = {0};

  ulong size;
  uint uVar1;
  void *src;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *dst;
  double dVar5;
  double dVar6;

  local_68 = (void *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    dVar5 = 1.0;
    if (param_1 <= 1.0) {
      dVar5 = param_1;
    }
    dVar6 = 0.0;
    if (0.0 <= param_1) {
      dVar6 = dVar5 * DAT_10005ad8;
    }
    bVar2 = recovered_100051c0(0x74);
    if (bVar2) {
      uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010874);
      if ((uVar1 != 0) &&
         (iVar3 = (*(code *)(ulong)uVar1)
                            ((void *)param_2,(char *)param_3,(uint)param_4,(uint)param_5,
                             (uint)param_6,(int)dVar6,&local_68), src = local_68, iVar3 != 0)) {
        if ((local_68 != (void *)0x0) && ((uStack_5c != 0 && (local_58 != 0)))) {
          size = (ulong)uStack_5c * (ulong)local_58 * 4;
          if (uStack_60 != 0) {
            size = (ulong)uStack_60;
          }
          puVar4 = recovered_10002f38(0x20);
          *puVar4 = CONCAT44(local_58,uStack_5c);
          dst = recovered_10002f68(size);
          puVar4[1] = dst;
          recovered_10000ce4(dst,src,size);
          puVar4[3] = 0;
          puVar4[2] = 0;
          recovered_10004cd8(src);
          return puVar4;
        }
        if (local_68 != (void *)0x0) {
          recovered_10004cd8(local_68);
        }
      }
    }
  }
  return (undefined8 *)0x0;
}

#undef DAT_10005ad8
#undef uStack_54
#undef local_68
#undef local_58
#undef uStack_60
#undef uStack_5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f00
 */

void recovered_10004f00(void *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_100051c0(0x78);
  if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x82010878), uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f40
 */

undefined8 * recovered_10004f40(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002f6c((void *)*param_1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f68
 */

void recovered_10004f68(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pointer;
  ulong uVar3;
  long lVar4;
  long lVar5;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10005074(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_100050c0(param_1);
    }
    else {
      recovered_100050f8(param_1,uVar1);
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
    recovered_10005170(&local_50,*param_1 + local_38,uVar1);
    pointer = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pointer;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_10002f6c(pointer);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005050
 */

long recovered_10005050(long param_1)

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
 * Address: 0x10005074
 */

undefined8 recovered_10005074(long *param_1,long param_2,long *param_3)

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
 * Address: 0x100050c0
 */

void recovered_100050c0(long *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  if (*param_1 == 0) {
    pcVar1 = recovered_100051a4(0);
    *param_1 = (long)pcVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050f8
 */

void recovered_100050f8(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pcVar1 = recovered_100051a4(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      pcVar1[uVar2] = *(char *)(*param_1 + uVar2);
    }
    pcVar1[param_1[1]] = '\0';
    recovered_10002f6c((void *)*param_1);
    *param_1 = (long)pcVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005170
 */

undefined8 * recovered_10005170(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10004f68(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051a4
 */

char * recovered_100051a4(ulong size)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = recovered_10002f38(size + 1);
  *pcVar1 = '\0';
  return pcVar1;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x82010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x82010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000040010800
#define Ram0000000040010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000040010804
#define Ram0000000040010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000040010808
#define Ram0000000040010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051c0
 */

bool recovered_100051c0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000040010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000040010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000040010808, 0xb < uVar2)) {
    uVar2 = Ram0000000040010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram0000000040010800
#undef Ram0000000040010804
#undef Ram0000000040010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005208
 */

undefined8 * recovered_10005208(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002f6c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005234
 */

void recovered_10005234(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000529c(param_1,param_2);
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
 * Address: 0x1000529c
 */

void recovered_1000529c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005310(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10002f6c((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005310
 */

void recovered_10005310(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if ((ulong)param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c10(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000bfc();
  }
  return;
}


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000531c
 */

undefined8 * recovered_1000531c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10005b13;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10004f68(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10005b13

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000535c
 */

ulong recovered_1000535c(uint param_1,uint param_2,int param_3)

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
#define PTR_DAT_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053a8
 */

void recovered_100053a8(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 - 0x61U < 0x1a) {
    *(&PTR_DAT_10008058)[(ulong)(param_1 - 0x61U) & 0xff] = 1;
  }
  return;
}

#undef PTR_DAT_10008058

#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define local_20 (*(undefined1 * *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

void recovered_100053d0(undefined8 *param_1,char param_2,ulong param_3)

{
  unsigned char frame[80] = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_10005b13;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_1000554c((long *)&local_20,param_2,param_3);
  return;
}

#undef DAT_10005b13
#undef local_20
#undef uStack_18

#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005408
 */

void recovered_10005408(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

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
  puVar3 = &DAT_10005b13;
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
  recovered_10004f68(param_1,(long)(puVar3 + uVar2),uVar1);
  return;
}

#undef DAT_10005b13

#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005444
 */

bool recovered_10005444(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10005b13;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10005050((long)param_2);
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

#undef DAT_10005b13

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005494
 */

void recovered_10005494(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004f40((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054d0
 */

void recovered_100054d0(long *param_1,undefined1 param_2)

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
    recovered_100050f8(param_1,uVar1);
  }
  recovered_100050c0(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10005b13
#define DAT_10005b13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005534
 */

void recovered_10005534(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_10005b13;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10005074(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_100050f8(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_100050f8(param_1,uVar4 + lVar7);
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

#undef DAT_10005b13
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000554c
 */

ulong recovered_1000554c(long *param_1,char param_2,ulong param_3)

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
 * Address: 0x10005580
 */

bool recovered_10005580(char *param_1,long param_2,char *param_3,long param_4)

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
 * Address: 0x100055b8
 */

long recovered_100055b8(long *param_1,undefined8 *param_2)

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
    recovered_1000562c(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000531c((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000562c
 */

void recovered_1000562c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_100056c0(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_100056d4((undefined8 *)(extraout_x0 + lVar1),(undefined8 *)(*param_1 + lVar1));
      recovered_10004f40((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x18;
    }
    recovered_10002f6c((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056c0
 */

void recovered_100056c0(long param_1)

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
 * Address: 0x100056d4
 */

void recovered_100056d4(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x100056f0
 */

long * recovered_100056f0(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10005074(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_100050f8(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_100050f8(param_1,uVar3 + lVar5);
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
 * Address: 0x100057d4
 */

long * recovered_100057d4(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005800(param_1);
  recovered_10002f6c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005800
 */

void recovered_10005800(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10004f40((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005854
 */

undefined8 * recovered_10005854(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10005050(param_2);
  recovered_10004f68(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005898
 */

long recovered_10005898(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_1000529c(param_1,uVar5);
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
