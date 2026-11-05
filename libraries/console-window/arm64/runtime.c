/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6874U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
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
 * Address: 0x10000610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000610(void)

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
    recovered_10001d30(puVar8[-1],*puVar8,&uStack_48);
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
    recovered_10001d30(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
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
#define DAT_1000c110 (*(byte *)(((uintptr_t)pf_module_state + 0x6874U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
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
 * Address: 0x1000061c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000061c(void)

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
      recovered_10001d30(puVar8[-1],*puVar8,&local_48);
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
      recovered_10001d30(0x300000,(ulong)uVar2 - 0x300000,&local_48);
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000884
 */

ulong recovered_10000884(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000061c();
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d0
 */

long recovered_100008d0(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_1000061c();
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000910
 */

ulong recovered_10000910(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000061c();
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
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000094c
 */

long recovered_1000094c(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_1000061c();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_1000c118

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000097c
 */

ulong * recovered_1000097c(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;

  if (param_1 != 0) {
    recovered_1000061c();
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
 * Address: 0x10000a10
 */

ulong recovered_10000a10(ulong param_1,uint param_2)

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
 * Address: 0x10000a54
 */

ulong recovered_10000a54(ulong param_1,uint param_2)

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
 * Address: 0x10000aa0
 */

long recovered_10000aa0(long param_1,uint param_2)

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
 * Address: 0x10000af0
 */

/* WARNING: Removing unreachable block (ram,0x10000b40) */

void recovered_10000af0(ulong param_1,ulong param_2)

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
 * Address: 0x10000af8
 */

ulong recovered_10000af8(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000b58
 */

undefined8 recovered_10000b58(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_10000af8(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b78
 */

long recovered_10000b78(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000af8(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb8
 */

long recovered_10000bb8(long param_1,long param_2)

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
  recovered_10000af8(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c04
 */

void recovered_10000c04(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c0c
 */

int recovered_10000c0c(int param_1)

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
void * recovered_10000c18(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000c5c(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000ca0(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cec
 */

void * recovered_10000cec(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d0c
 */

void * recovered_10000d0c(void *out,void *data,ulong size)

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
 * Address: 0x10000d5c
 */

void * recovered_10000d5c(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d78
 */

void recovered_10000d78(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d8c
 */

void recovered_10000d8c(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da0
 */

int recovered_10000da0(void *left,void *right,ulong size)

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
 * Address: 0x10000dc8
 */

bool recovered_10000dc8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd8
 */

bool recovered_10000dd8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de8
 */

bool recovered_10000de8(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dfc
 */

bool recovered_10000dfc(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e18
 */

bool recovered_10000e18(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e28
 */

bool recovered_10000e28(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e38
 */

int recovered_10000e38(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e4c
 */

int recovered_10000e4c(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e60
 */

ulong recovered_10000e60(char *text)

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
 * Address: 0x10000e84
 */

int recovered_10000e84(char *left,char *right)

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
 * Address: 0x10000eac
 */

int recovered_10000eac(char *left,char *right)

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
 * Address: 0x10000eb0
 */

void recovered_10000eb0(long param_1,long param_2)

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
 * Address: 0x10000ec8
 */

void recovered_10000ec8(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000e60(param_1);
    out = recovered_10000c18(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000cec(out,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f04
 */

char * recovered_10000f04(char *param_1,char param_2)

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
 * Address: 0x10000f2c
 */

long recovered_10000f2c(long param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10000f04(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f74
 */

char * recovered_10000f74(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000f04(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fb4
 */

char * recovered_10000fb4(char *param_1,char *param_2)

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


#undef DAT_100059b7
#define DAT_100059b7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ff0
 */

undefined * recovered_10000ff0(void)

{
  unsigned char frame[64] = {0};

  return &DAT_100059b7;
}

#undef DAT_100059b7

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6764U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ffc
 */

undefined ** recovered_10000ffc(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001008
 */

undefined8 recovered_10001008(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001024
 */

double recovered_10001024(double param_1,uint param_2)

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
 * Address: 0x10001058
 */

uint128 recovered_10001058(double param_1,int *param_2)

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
 * Address: 0x100010cc
 */

double recovered_100010cc(double left,double right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f0
 */

double recovered_100010f0(double left,double right)

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
 * Address: 0x10001150
 */

double recovered_10001150(double value)

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
 * Address: 0x1000116c
 */

double recovered_1000116c(double value)

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
 * Address: 0x10001198
 */

double recovered_10001198(double value)

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


#undef DAT_100058a0
#define DAT_100058a0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d4
 */

double recovered_100011d4(double value)

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
    return (double)iVar1 * DAT_100058a0 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_100058a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

long recovered_10001280(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_100058a8
#define DAT_100058a8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001294
 */

double recovered_10001294(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_100012e8(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_100058a8);
}

#undef DAT_100058a8

#undef DAT_100058b0
#define DAT_100058b0 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100058b8
#define DAT_100058b8 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100058c0
#define DAT_100058c0 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100058c8
#define DAT_100058c8 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012e8
 */

void recovered_100012e8(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_100058b0 < param_1; param_1 = param_1 + DAT_100058c8) {
  }
  for (; param_1 < DAT_100058b8; param_1 = param_1 + DAT_100058c0) {
  }
  return;
}

#undef DAT_100058b0
#undef DAT_100058b8
#undef DAT_100058c0
#undef DAT_100058c8

#undef DAT_100058d0
#define DAT_100058d0 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000132c
 */

double recovered_1000132c(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_100012e8(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_100058d0;
}

#undef DAT_100058d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001378
 */

double recovered_10001378(double value)

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
 * Address: 0x10001388
 */

float recovered_10001388(float left,float right)

{
  unsigned char frame[64] = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013bc
 */

float recovered_100013bc(float param_1)

{
  unsigned char frame[64] = {0};

  int *in_x0;
  uint128 auVar1;

  auVar1 = recovered_10001058((double)param_1,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d4
 */

float recovered_100013d4(float param_1)

{
  unsigned char frame[64] = {0};

  uint in_w0;
  double dVar1;

  dVar1 = recovered_10001024((double)param_1,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ec
 */

float recovered_100013ec(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010f0((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001408
 */

float recovered_10001408(float value)

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
 * Address: 0x1000142c
 */

float recovered_1000142c(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000116c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001444
 */

double recovered_10001444(double value)

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
 * Address: 0x1000146c
 */

float recovered_1000146c(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001444((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001484
 */

float recovered_10001484(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001198((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000149c
 */

float recovered_1000149c(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100011d4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b4
 */

long recovered_100014b4(double param_1)

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
 * Address: 0x100014c8
 */

float recovered_100014c8(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001294((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

float recovered_100014e0(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000132c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014f8
 */

float recovered_100014f8(float value)

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
 * Address: 0x10001508
 */

long recovered_10001508(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_100015a0;
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
      goto LAB_100015cc;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_100015cc;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_100015cc;
    }
LAB_100015a0:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_100015cc:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_1000160c((uint)*pbVar4);
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
 * Address: 0x1000160c
 */

uint recovered_1000160c(int param_1)

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
 * Address: 0x1000163c
 */

long recovered_1000163c(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001720;
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
      goto LAB_10001720;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001720;
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
LAB_10001720:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_1000160c((uint)*pbVar6);
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
 * Address: 0x10001760
 */

double recovered_10001760(char *text,char **end)

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
        dVar11 = recovered_10001024(dVar11,iVar8 * iVar5);
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
 * Address: 0x100018f0
 */

float recovered_100018f0(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001760(text,end);
  return (float)dVar1;
}


#define pdStack_78 (*(double * *)(frame + 36))
#define local_8c (*(int *)(frame + 16))
#define local_88 (*(ulong *)(frame + 20))
#define local_80 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001908
 */

int recovered_10001908(char *out,ulong capacity,char *format,void *arguments)

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
LAB_1000196c:
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
LAB_100019f8:
      switch((uintptr_t)(uVar5)) {
      case 99:
        goto code_r0x10001a90;
      case 100:
      case 0x69:
LAB_10001a48:
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
        if (local_88 < 2) goto LAB_100019c4;
        *local_80 = 0x3f;
        goto LAB_100019c0;
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
        recovered_10001c68((long *)&local_80,&local_88,&local_8c,(int)dVar9,10,0);
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
        goto LAB_100019c8;
      case 0x68:
      case 0x6c:
      case 0x74:
      case 0x7a:
        goto code_r0x10001a14;
      case 0x70:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
        recovered_10001c18((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x149U));
        goto code_r0x10001b84;
      case 0x73:
        pcVar3 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
        pdStack_78 = pdStack_78 + 1;
        recovered_10001c18((long *)&local_80,&local_88,&local_8c,pcVar3);
        goto LAB_100019c8;
      case 0x75:
        uVar5 = *(uint *)pdStack_78;
        break;
      case 0x78:
        uVar5 = *(uint *)pdStack_78;
        pdStack_78 = pdStack_78 + 1;
code_r0x10001b84:
        uVar4 = 0x10;
        goto code_r0x10001b9c;
      default:
        if (uVar5 == 0x49) goto LAB_10001a48;
        if (uVar5 != 0x58) goto LAB_10018258;
        uVar5 = *(uint *)pdStack_78;
        uVar4 = 0x10;
        iVar7 = 1;
        pdStack_78 = pdStack_78 + 1;
        goto LAB_10001ba0;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar4 = 10;
code_r0x10001b9c:
      iVar7 = 0;
LAB_10001ba0:
      recovered_10001c68((long *)&local_80,&local_88,&local_8c,uVar5,uVar4,iVar7);
      goto LAB_100019c8;
    }
    if (local_88 < 2) goto LAB_100019c4;
    *local_80 = 0x25;
    goto LAB_100019c0;
  }
  if (bVar1 == 0) {
    if (capacity != 0) {
      *local_80 = 0;
    }
    return local_8c;
  }
  if (1 < local_88) {
    *local_80 = bVar1;
    goto LAB_100019c0;
  }
  goto LAB_100019c4;
code_r0x10001a14:
  format = format + 1;
  uVar5 = (uint)(byte)*format;
  goto LAB_100019f8;
code_r0x10001a90:
  pdVar2 = pdStack_78 + 1;
  if (1 < local_88) {
    *local_80 = (byte)*(uint *)pdStack_78;
    pdStack_78 = pdStack_78 + 1;
LAB_100019c0:
    local_80 = local_80 + 1;
    local_88 = local_88 - 1;
    pdVar2 = pdStack_78;
  }
LAB_100019c4:
  pdStack_78 = pdVar2;
  local_8c = local_8c + 1;
LAB_100019c8:
  format = format + 1;
  goto LAB_1000196c;
}

#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bdc
 */

void recovered_10001bdc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_100059bc
#define str_100059bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c18
 */

void recovered_10001c18(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_100059bc;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001bdc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100059bc

#undef str_100059c3
#define str_100059c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x127U)))
#undef str_100059d4
#define str_100059d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138U)))
#define local_60 (*(char (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c68
 */

void recovered_10001c68(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[144] = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;

  pcVar1 = str_100059c3;
  lVar3 = 0;
  if (param_6 == 0) {
    pcVar1 = str_100059d4;
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
    recovered_10001bdc(param_1,param_2,param_3,local_60[lVar5]);
  }
  return;
}

#undef str_100059c3
#undef str_100059d4
#undef local_60

#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d08
 */

int recovered_10001d08(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10001908(out,capacity,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x687cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d30
 */

void recovered_10001d30(long param_1,ulong param_2,ulong *param_3)

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
 * Address: 0x10001d88
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10001d88(int param_1)

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
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

void recovered_10001ec0(char *param_1,long param_2)

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
          recovered_10001f78(1);
        }
        else {
          if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
            recovered_10001f78(0);
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
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f78(int param_1)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c128 != 0) || (param_1 != 0)) {
    if (DAT_1000c128 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000cec(local_230,&DAT_1000c130,DAT_1000c128);
      uVar2 = DAT_1000c128;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10002cb8(0x40);
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
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
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

  if (DAT_1000c128 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000cec(auStack_230,&DAT_1000c130,DAT_1000c128);
    uVar2 = DAT_1000c128;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10002cb8(0x40);
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
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010840
#define _DAT_40010840 (*(uint *)(0x40010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000200c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000200c(void)

{
  unsigned char frame[608] = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c128 != 0) {
    if (DAT_1000c128 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000cec(auStack_230,&DAT_1000c130,DAT_1000c128);
      uVar2 = DAT_1000c128;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10002cb8(0x40);
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

#undef DAT_100059e8
#define DAT_100059e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002014
 */

void recovered_10002014(char *param_1)

{
  unsigned char frame[400] = {0};

  char *format;
  uint uVar1;

  format = &DAT_100059e8;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10001d08(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10001ec0(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_100059e8
#undef acStack_160

#undef DAT_10005ad2
#define DAT_10005ad2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x236U)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
#undef str_100059eb
#define str_100059eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14fU)))
#undef str_10005a0e
#define str_10005a0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef str_10005a47
#define str_10005a47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abU)))
#undef str_10005a7c
#define str_10005a7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#undef str_10005aa2
#define str_10005aa2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002078
 */

/* WARNING: Removing unreachable block (ram,0x100020f4) */

void recovered_10002078(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100020cc(str_100059eb);
  recovered_100020cc(str_10005a0e);
  recovered_100020cc(str_10005a47);
  recovered_100020cc(str_10005a7c);
  recovered_100020cc(str_10005aa2);
  pcVar4 = &DAT_10005ad2;
  for (uVar3 = recovered_10000e60(&DAT_10005ad2); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c128 != 0) {
        DAT_1000c128 = DAT_1000c128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f78(1);
      }
      else {
        if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
          recovered_10001f78(0);
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

#undef DAT_10005ad2
#undef DAT_1000c128
#undef DAT_1000c130
#undef str_100059eb
#undef str_10005a0e
#undef str_10005a47
#undef str_10005a7c
#undef str_10005aa2

#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020cc
 */

void recovered_100020cc(char *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10000e60(param_1);
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
          recovered_10001f78(1);
        }
        else {
          if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
            recovered_10001f78(0);
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

#undef DAT_10005ad2
#define DAT_10005ad2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x236U)))
#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x688cU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6894U)))
#undef str_10005ad5
#define str_10005ad5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x239U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f8
 */

/* WARNING: Removing unreachable block (ram,0x100020f4) */

void recovered_100020f8(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100020cc(str_10005ad5);
  pcVar4 = &DAT_10005ad2;
  for (uVar3 = recovered_10000e60(&DAT_10005ad2); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c128 != 0) {
        DAT_1000c128 = DAT_1000c128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10001f78(1);
      }
      else {
        if (DAT_1000c128 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c128 == -2) {
          recovered_10001f78(0);
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

#undef DAT_10005ad2
#undef DAT_1000c128
#undef DAT_1000c130
#undef str_10005ad5

#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010844
#define _DAT_40010844 (*(uint *)(0x40010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000211c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000211c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_1000200c();
    bVar2 = recovered_10002cb8(0x44);
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
 * Address: 0x10002194
 */

undefined8 recovered_10002194(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002198
 */

void recovered_10002198(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000219c
 */

undefined8 recovered_1000219c(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_100059e8
#define DAT_100059e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
#undef str_10005b69
#define str_10005b69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_10005b76
#define str_10005b76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_10005b84
#define str_10005b84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021a4
 */

undefined4 * recovered_100021a4(char *param_1,long param_2)

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
  iVar2 = recovered_10000e84(param_1,str_10005b69);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e84(param_1,str_10005b76);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e84(param_1,str_10005b84);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c18(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000d5c(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000f04((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f04((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f04((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000f04((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f04((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f04((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000f04((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001d08((char *)(puVar4 + 1),0xf1,&DAT_100059e8);
        recovered_10000d5c(&uStack_4c,0,0xc);
        uVar6 = recovered_100023e0(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002388:
            recovered_10000c5c(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10000f04((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002430((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002388;
              recovered_10000cec(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c18(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000d5c(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d08((char *)(puVar4 + 1),0xf1,&DAT_100059e8);
  return puVar4;
}

#undef DAT_100059e8
#undef DAT_1000c058
#undef str_10005b69
#undef str_10005b76
#undef str_10005b84
#undef uStack_4c
#undef uStack_48

#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010834
#define _DAT_40010834 (*(uint *)(0x40010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100023e0(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002cb8(0x34);
  if ((bVar1) && (_DAT_40010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010834
#undef _DAT_40010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002430
 */

undefined8 recovered_10002430(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000ca0(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_100059e8
#define DAT_100059e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
#undef str_10005b69
#define str_10005b69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2cdU)))
#undef str_10005b76
#define str_10005b76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_10005b84
#define str_10005b84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e8U)))
#define uStack_4c (*(uint *)(frame + 16))
#define uStack_48 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b8
 */

void recovered_100024b8(char *param_1,long param_2,int *param_3)

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
    recovered_100024ec(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
    return;
  }
  iVar2 = recovered_10000e84(param_1,str_10005b69);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10000e84(param_1,str_10005b76);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10000e84(param_1,str_10005b84);
      if (iVar3 != 0) {
        puVar4 = recovered_10000c18(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return;
        }
        recovered_10000d5c(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10000f04((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f04((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f04((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10000f04((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10000f04((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10000f04((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10000f04((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10001d08((char *)(puVar4 + 1),0xf1,&DAT_100059e8);
        recovered_10000d5c(&uStack_4c,0,0xc);
        uVar6 = recovered_100023e0(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10002388:
            recovered_10000c5c(puVar4);
            return;
          }
        }
        else {
          pcVar5 = recovered_10000f04((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002430((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002388;
              recovered_10000cec(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000c18(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return;
  }
  recovered_10000d5c(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10001d08((char *)(puVar4 + 1),0xf1,&DAT_100059e8);
  return;
}

#undef DAT_100059e8
#undef DAT_1000c058
#undef str_10005b69
#undef str_10005b76
#undef str_10005b84
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ec
 */

undefined8 recovered_100024ec(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000288c(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000c5c(*(void **)(param_1 + 0x40));
    }
    recovered_10000c5c(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002530
 */

long recovered_10002530(undefined1 *param_1,long param_2,long param_3,int *param_4)

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
          uVar3 = recovered_100025e0(param_4);
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


#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e0
 */

uint recovered_100025e0(int *param_1)

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
LAB_10002678:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_1000211c((long)text,0x1fe,&DAT_100059bb,0);
      if (bVar2) {
        uVar3 = recovered_10000e60(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002678;
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

#undef DAT_100059bb

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c4
 */

long recovered_100026c4(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10001ec0(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_100027c4;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002430((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000d5c((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000cec((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_100027c4;
    }
  }
  param_3 = 0;
LAB_100027c4:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027d4
 */

undefined8 recovered_100027d4(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_100027e0;
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
LAB_100027e0:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002868
 */

undefined8 recovered_10002868(long param_1)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000288c
 */

undefined8 recovered_1000288c(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10002a68(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x10002900
 */

undefined1 recovered_10002900(long param_1)

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
 * Address: 0x1000290c
 */

undefined1 recovered_1000290c(long param_1)

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
 * Address: 0x10002918
 */

void recovered_10002918(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000292c
 */

uint recovered_1000292c(uint param_1,long param_2)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002950
 */

undefined8 recovered_10002950(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10002988(param_1);
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
 * Address: 0x10002988
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002988(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002cb8(0x3c);
  if ((bVar1) && (_DAT_4001083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100029bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_4001083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_4001083c
#undef _DAT_4001083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67bcU)))
#define uStack_28 (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029cc
 */

undefined8 recovered_100029cc(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10000d5c(&uStack_2c,0,0xc);
    uVar1 = recovered_100023e0(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10002a68(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10002988(param_1), (int)uVar1 != 0)) {
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
 * Address: 0x10002a68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002cb8(0x38);
  if ((bVar1) && (_DAT_40010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002ab8. Too many branches */
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
 * Address: 0x10002ac8
 */

undefined8 recovered_10002ac8(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *out;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000d5c(&uStack_3c,0,0xc);
    uVar2 = recovered_100023e0(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      out = recovered_10000c18((ulong)uVar1);
      uVar2 = 0;
      if (out != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000cec(out,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10002b68
 */

bool recovered_10002b68(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10002a68(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
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

void recovered_10002b98(void)

{
  unsigned char frame[64] = {0};

  return;
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

undefined8 recovered_10002ba0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba4
 */

undefined8 recovered_10002ba4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba8
 */

char * recovered_10002ba8(long param_1,char param_2,long param_3)

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
 * Address: 0x10002bcc
 */

int recovered_10002bcc(char *left,char *right,ulong size)

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


#undef DAT_10005af8
#define DAT_10005af8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25cU)))
#undef str_10005afb
#define str_10005afb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25fU)))
#undef str_10005b08
#define str_10005b08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26cU)))
#undef str_10005b12
#define str_10005b12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x276U)))
#undef str_10005b26
#define str_10005b26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_10005b34
#define str_10005b34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x298U)))
#undef str_10005b46
#define str_10005b46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_10005b52
#define str_10005b52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b6U)))
#undef str_10005b63
#define str_10005b63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bfc
 */

char * recovered_10002bfc(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10005af8;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10002c28_caseD_1;
  case 2:
    return str_10005afb;
  case 5:
    return str_10005b08;
  case 9:
    return str_10005b12;
  case 0xc:
    return str_10005b26;
  case 0xd:
    return str_10005b34;
  default:
    if (param_1 == 0x11) {
      return str_10005b46;
    }
    if (param_1 == 0x16) {
      return str_10005b52;
    }
switchD_10002c28_caseD_1:
    return str_10005b63;
  }
}

#undef DAT_10005af8
#undef str_10005afb
#undef str_10005b08
#undef str_10005b12
#undef str_10005b26
#undef str_10005b34
#undef str_10005b46
#undef str_10005b52
#undef str_10005b63

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9c
 */

undefined8 recovered_10002c9c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca0
 */

undefined8 recovered_10002ca0(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca4
 */

void recovered_10002ca4(void)

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
 * Address: 0x10002cb8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002cb8(int param_1)

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
 * Address: 0x10002d84
 */

void recovered_10002d84(long param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked, returns_twice)) unsigned long recovered_10002d98(unsigned long *context)
{
 __asm__ volatile("stp x19,x20,[x0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nmov w0,#0\nret");
}


/* Permafrost architecture recovery; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002dc4(unsigned long *context,int value)
{
 __asm__ volatile("cmp w1,#0\ncsinc w1,w1,wzr,ne\nldp x19,x20,[x0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nmov w0,w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df8
 */

void recovered_10002df8(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10000c04();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002e08);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e0c
 */

undefined8 recovered_10002e0c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e14
 */

void recovered_10002e14(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e24(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002df8();
}


#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e24
 */

void recovered_10002e24(long param_1)

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
 * Address: 0x10002e44
 */

void * recovered_10002e44(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c18(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c04();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e74
 */

void * recovered_10002e74(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000c18(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c04();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e78
 */

void recovered_10002e78(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c5c(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

void recovered_10002e90(void *data)

{
  unsigned char frame[64] = {0};

  recovered_10000c5c(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea8
 */

void recovered_10002ea8(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000c5c(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

void recovered_10002ec0(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000c5c(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed8
 */

undefined8 recovered_10002ed8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee0
 */

uint recovered_10002ee0(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

void recovered_10002ef0(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f00
 */

void recovered_10002f00(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f04
 */

undefined1 * recovered_10002f04(ulong param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000c18(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002df8();
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
 * Address: 0x10002f4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002f4c(long param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_10001d88(0x50);
  if ((bVar1) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_40010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_40010850
#undef _DAT_40010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f5c
 */

long recovered_10002f5c(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a94U)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002f64(void)

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
      bVar3 = recovered_10001d88(0x50);
      if ((bVar3) && (_DAT_40010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000c90. Too many branches */
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
 * Address: 0x10002fbc
 */

void recovered_10002fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002fdc((undefined8 *)(param_1 + -0x30));
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a9cU)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fdc
 */

void recovered_10002fdc(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c338;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1000303c;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100034d4((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_100030e8(param_1);
LAB_1000303c:
                    /* WARNING: Subroutine does not return */
  recovered_10002df8();
}

#undef DAT_1000c338
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c330
#define DAT_1000c330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003040
 */

void recovered_10003040(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c330;
  if (DAT_1000c330 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002df8();
  }
  *(undefined1 *)(DAT_1000c330 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10002fdc(puVar1);
}

#undef DAT_1000c330

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

void recovered_10003070(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000c338;
  DAT_1000c338 = param_1;
  return;
}

#undef DAT_1000c338

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6a9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003084
 */

void recovered_10003084(undefined8 *param_1)

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
 * Address: 0x100030b0
 */

void recovered_100030b0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

                    /* WARNING: Subroutine does not return */
  recovered_10002fdc(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030bc
 */

void recovered_100030bc(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002df8();
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a9cU)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c8
 */

undefined8 recovered_100030c8(undefined8 *param_1)

{
  unsigned char frame[128] = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_1000c338 != (long *)0x0) {
    DAT_1000c338 = (long *)*DAT_1000c338;
  }
  puVar2 = (undefined8 *)recovered_100030e8(param_1);
  plVar3 = DAT_1000c338;
  while( true ) {
    DAT_1000c338 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002df8();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_100034d4((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_1000317c;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_1000317c:
  recovered_10002d84((long)plVar3);
  recovered_100030c8(extraout_x0);
  return 0;
}

#undef DAT_1000c338
#undef uStack_50
#undef uStack_48

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6a9cU)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e8
 */

undefined8 recovered_100030e8(undefined8 *param_1)

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
      recovered_10002df8();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_100034d4((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_1000317c;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_1000317c:
  recovered_10002d84((long)plVar2);
  recovered_100030c8(extraout_x0);
  return 0;
}

#undef DAT_1000c338
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003184
 */

undefined8 recovered_10003184(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_x0;

  recovered_100030c8(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003190
 */

undefined8 recovered_10003190(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003198
 */

void recovered_10003198(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002df8();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a4
 */

long recovered_100031a4(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_100031e4(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e4
 */

bool recovered_100031e4(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10003268:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003268;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003268;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x6814U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

void recovered_10003270(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003274
 */

undefined8 recovered_10003274(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000327c
 */

bool recovered_1000327c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000328c
 */

bool recovered_1000328c(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c4
 */

bool recovered_100032c4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e0
 */

bool recovered_100032e0(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f8
 */

bool recovered_100032f8(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003310
 */

bool recovered_10003310(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
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

double recovered_10003340(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10001150(value);
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
 * Address: 0x1000338c
 */

long recovered_1000338c(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100033cc;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100033cc:
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
      goto LAB_10003450;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003450;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003450;
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
LAB_10003450:
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
 * Address: 0x100034d0
 */

long recovered_100034d0(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100033cc;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100033cc:
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
      goto LAB_10003450;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003450;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003450;
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
LAB_10003450:
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

#undef DAT_10005910
#define DAT_10005910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#define pbStack_70 (*(byte * *)(frame + 16))
#define local_68 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034d4
 */

undefined8 recovered_100034d4(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_100036ac((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_100037a0(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_100037a0(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_100037a0(&local_68);
        uVar5 = recovered_100037a0(&local_68);
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
            uVar5 = recovered_10003804(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10003804(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10005910 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_100036ac((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_100031e4(param_2,(long *)puVar6);
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

#undef DAT_10005910
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036ac
 */

ulong * recovered_100036ac(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_100037d8(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10003764;
  case 1:
    puVar1 = (ulong *)recovered_100037a0(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_100037d8(pbVar5,2);
    goto LAB_10003760;
  case 3:
    puVar1 = (ulong *)recovered_100037d8(pbVar5,4);
    goto LAB_10003728;
  default:
    goto switchD_100036f4_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10003804(param_2);
    break;
  case 10:
    uVar3 = recovered_100037d8(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10003760:
    pbVar4 = pbVar5 + 2;
LAB_10003764:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_100037d8(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10003728:
    pbVar4 = pbVar5 + 4;
    goto LAB_10003764;
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
switchD_100036f4_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

ulong recovered_100037a0(undefined8 *param_1)

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
 * Address: 0x100037d8
 */

ulong recovered_100037d8(byte *param_1,long param_2)

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
 * Address: 0x10003804
 */

ulong recovered_10003804(undefined8 *param_1)

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


#undef DAT_1000c380
#define DAT_1000c380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6ae4U)))
#undef DAT_40010814
#define DAT_40010814 (*(uint8_t *)(0x40010814U))
#undef _DAT_40010814
#define _DAT_40010814 (*(uint *)(0x40010814U))
#undef str_10005b92
#define str_10005b92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#define local_31 (*(undefined1 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000387c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_1000387c(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[97] = {0};

  char *pcVar1;
  bool bVar2;
  long *plVar3;

  bVar2 = recovered_10004d00(0x14);
  if ((bVar2) && (_DAT_40010814 != 0)) {
    (*(code *)(ulong)_DAT_40010814)();
  }
  plVar3 = recovered_10002e44(0x70);
  *plVar3 = 0;
  plVar3[2] = 0;
  plVar3[1] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[5] = 0;
  *(undefined2 *)((long)plVar3 + 0x34) = 0;
  *(undefined1 *)((long)plVar3 + 0x36) = 0;
  plVar3[7] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  pcVar1 = str_10005b92;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  recovered_1000397c(plVar3,(long)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)(plVar3 + 3) = param_2;
  *(uint *)((long)plVar3 + 0x1c) = param_3;
  *(uint *)(plVar3 + 4) = param_2;
  *(uint *)((long)plVar3 + 0x24) = param_3;
  *(uint *)((long)plVar3 + 0x2c) = param_2 >> 1;
  *(uint *)(plVar3 + 6) = param_3 >> 1;
  local_31 = 0;
  recovered_100039b8(plVar3 + 0xb,(ulong)param_2 * (ulong)param_3 * 4,&local_31);
  DAT_1000c380 = plVar3;
  recovered_100039c0((long)plVar3);
  recovered_10003bf0((long)plVar3);
  return plVar3;
}

#undef DAT_1000c380
#undef DAT_40010814
#undef _DAT_40010814
#undef str_10005b92
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000397c
 */

long * recovered_1000397c(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10004e58(param_2);
  recovered_10004d70(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b8
 */

void recovered_100039b8(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_100056cc(param_1,param_2);
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
    recovered_100056cc(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#define local_65 (*(undefined1 *)(frame + 16))
#define local_64 (*(undefined2 *)(frame + 17))
#define local_62 (*(undefined1 *)(frame + 19))
#define local_61 (*(undefined1 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

undefined8 recovered_100039c0(long param_1)

{
  unsigned char frame[149] = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 unaff_x30;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;

  uVar9 = 0;
  if (param_1 != 0) {
    if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
      local_61 = 0;
      recovered_100039b8((long *)(param_1 + 0x58),
                         (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                         &local_61);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
        iVar12 = 0;
        iVar13 = 0;
        bVar8 = false;
        iVar11 = 0;
        iVar10 = 0;
      }
      else {
        fVar18 = (float)*(uint *)(param_1 + 0x50);
        fVar17 = (float)*(int *)(param_1 + 0x18) / fVar18;
        fVar20 = (float)*(uint *)(param_1 + 0x54);
        fVar19 = (float)*(int *)(param_1 + 0x1c) / fVar20;
        if (fVar17 <= fVar19) {
          fVar19 = fVar17;
        }
        iVar10 = (int)(fVar19 * fVar18);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar11 = (int)(fVar19 * fVar20);
        if (iVar11 < 2) {
          iVar11 = 1;
        }
        iVar12 = (*(int *)(param_1 + 0x18) - iVar10) / 2;
        iVar13 = (*(int *)(param_1 + 0x1c) - iVar11) / 2;
        bVar8 = true;
      }
      for (lVar16 = 0; lVar16 < *(int *)(param_1 + 0x1c); lVar16 = lVar16 + 1) {
        iVar15 = -iVar12;
        for (lVar14 = 0; lVar14 < *(int *)(param_1 + 0x18); lVar14 = lVar14 + 1) {
          local_65 = *(undefined1 *)(param_1 + 0x29);
          local_64 = *(undefined2 *)(param_1 + 0x2a);
          bVar7 = false;
          if (iVar12 <= lVar14) {
            bVar7 = bVar8;
          }
          if (((bVar7 && lVar14 < iVar10 + iVar12) && iVar13 <= lVar16) && lVar16 < iVar11 + iVar13)
          {
            iVar4 = *(int *)(param_1 + 0x50);
            iVar5 = 0;
            if (iVar10 != 0) {
              iVar5 = (iVar4 * iVar15) / iVar10;
            }
            iVar6 = iVar4 + -1;
            if (iVar5 <= iVar4 + -1) {
              iVar6 = iVar5;
            }
            iVar2 = 0;
            if (-1 < iVar5) {
              iVar2 = iVar6;
            }
            iVar5 = 0;
            if (iVar11 != 0) {
              iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar16 - iVar13)) / iVar11;
            }
            iVar6 = *(int *)(param_1 + 0x54) + -1;
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
            iVar3 = 0;
            if (-1 < iVar5) {
              iVar3 = iVar6;
            }
            puVar1 = (undefined1 *)
                     (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4);
            local_65 = *puVar1;
            local_64 = *(undefined2 *)(puVar1 + 1);
          }
          local_62 = 0xff;
          recovered_10000cec((void *)(*(long *)(param_1 + 0x58) +
                                     (lVar14 + lVar16 * *(int *)(param_1 + 0x18)) * 4),&local_65,4);
          iVar15 = iVar15 + 1;
        }
      }
    }
    uVar9 = unaff_x30;
  }
  return uVar9;
}

#undef local_65
#undef local_64
#undef local_62
#undef local_61

#undef DAT_10005980
#define DAT_10005980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef DAT_10005990
#define DAT_10005990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6aa4U)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aacU)))
#undef DAT_1000c358
#define DAT_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6abcU)))
#undef DAT_1000c360
#define DAT_1000c360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ac4U)))
#undef DAT_1000c364
#define DAT_1000c364 (*(int *)(((uintptr_t)pf_module_state + 0x6ac8U)))
#undef DAT_1000c368
#define DAT_1000c368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6accU)))
#undef DAT_1000c36c
#define DAT_1000c36c (*(int *)(((uintptr_t)pf_module_state + 0x6ad0U)))
#undef DAT_1000c370
#define DAT_1000c370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ad4U)))
#undef DAT_4001087c
#define DAT_4001087c (*(uint8_t *)(0x4001087cU))
#undef UNK_10005988
#define UNK_10005988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef UNK_1000c350
#define UNK_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ab4U)))
#undef _DAT_10005980
#define _DAT_10005980 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_1000c348
#define _DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6aacU)))
#undef _DAT_4001087c
#define _DAT_4001087c (*(uint *)(0x4001087cU))
#undef uRam0000000010005988
#define uRam0000000010005988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef uRam000000001000c350
#define uRam000000001000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ab4U)))
#define uStack_80 (*(uint *)(frame + 32))
#define iStack_70 (*(int *)(frame + 48))
#define uStack_68 (*(undefined4 *)(frame + 56))
#define local_90 (*(ulong *)(frame + 16))
#define local_88 (*(int *)(frame + 24))
#define local_84 (*(uint *)(frame + 28))
#define local_7c (*(undefined8 *)(frame + 36))
#define local_74 (*(int *)(frame + 44))
#define local_6c (*(undefined4 *)(frame + 52))
#define local_64 (*(undefined4 *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003bf0(long param_1)

{
  unsigned char frame[192] = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;

  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  recovered_10000d5c(&DAT_1000c340,0,0x34);
  bVar9 = recovered_10004d00(0x7c);
  if (!bVar9) {
    return;
  }
  if (_DAT_4001087c == 0) {
    return;
  }
  iVar10 = (*(code *)(ulong)_DAT_4001087c)(&DAT_1000c340);
  uVar23 = _DAT_1000c348;
  uVar22 = DAT_1000c340;
  if (iVar10 == 0) {
    return;
  }
  if (DAT_1000c340 == 0) {
    return;
  }
  iVar10 = (int)((ulong)DAT_1000c358 >> 0x20);
  local_88 = (int)_DAT_1000c348;
  local_84 = (uint)(_DAT_1000c348 >> 0x20);
  uVar26 = (uint)uRam000000001000c350;
  uVar27 = (uint)(uRam000000001000c350 >> 0x20);
  uVar19 = CONCAT17(-((char)((DAT_1000c36c == (int)((ulong)uRam0000000010005988 >> 0x20)) * -0x80) <
                     '\0'),CONCAT16(-((char)((DAT_1000c364 == (int)uRam0000000010005988) * -0x80) <
                                     '\0'),CONCAT15(-((char)((iVar10 ==
                                                             (int)((ulong)_DAT_10005980 >> 0x20)) *
                                                            -0x80) < '\0'),
                                                    CONCAT14(-((char)(~-((int)DAT_1000c358 ==
                                                                        (int)_DAT_10005980) << 7) <
                                                              '\0'),CONCAT13(-((char)((uVar27 == 0)
                                                                                     * -0x80) < '\0'
                                                                              ),CONCAT12(-((char)((
                                                  uVar26 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((local_84 == 0) * -0x80) < '\0')
                                                           ,-((char)((local_88 == 0) * -0x80) < '\0'
                                                             )))))))) & DAT_10005990;
  uVar20 = (ulong)local_84;
  uVar24 = uRam000000001000c350 & 0xffffffff;
  if ((char)((char)uVar19 + (char)(uVar19 >> 8) + (char)(uVar19 >> 0x10) + (char)(uVar19 >> 0x18) +
             (char)(uVar19 >> 0x20) + (char)(uVar19 >> 0x28) + (char)(uVar19 >> 0x30) +
            (char)(uVar19 >> 0x38)) != '\0' || local_84 >> 2 < uVar26) {
    return;
  }
  local_90 = DAT_1000c340;
  uVar25 = (ulong)uVar27;
  local_7c = CONCAT44(iVar10,uVar27);
  local_74 = DAT_1000c364;
  iStack_70 = DAT_1000c36c;
  local_6c = DAT_1000c360;
  uStack_68 = DAT_1000c368;
  local_64 = DAT_1000c370;
  uStack_80 = uVar26;
  uVar11 = recovered_10004fc8((long)&local_90,(uint)*(byte *)(param_1 + 0x29),
                              (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b));
  for (uVar19 = 0; uVar19 != uVar25; uVar19 = uVar19 + 1) {
    puVar8 = (uint *)(uVar22 + uVar19 * uVar20);
    for (uVar21 = uVar24; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    }
  }
  uVar19 = 0;
  uVar21 = (ulong)*(uint *)(param_1 + 0x18);
  uVar5 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar11 = 0;
  if (uVar21 != 0) {
    uVar11 = (uint)((uVar5 * uVar24) / uVar21);
  }
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar13 = (uint)((uVar21 * uVar25) / uVar5);
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  uVar21 = (ulong)uVar13;
  uVar14 = uVar27;
  if (uVar11 <= uVar27) {
    uVar13 = uVar26;
    uVar21 = uVar24;
    uVar25 = (ulong)uVar11;
    uVar14 = uVar11;
  }
  uVar11 = uVar26 - uVar13 >> 1;
  uVar6 = uVar27 - uVar14 >> 1;
  for (; uVar19 < uVar25; uVar19 = uVar19 + 1) {
    uVar24 = 0;
    uVar5 = 0;
    if (uVar25 != 0) {
      uVar5 = (uVar19 * *(uint *)(param_1 + 0x1c)) / uVar25;
    }
    for (; uVar21 != uVar24; uVar24 = uVar24 + 1) {
      uVar7 = 0;
      if (uVar21 != 0) {
        uVar7 = (uVar24 * *(uint *)(param_1 + 0x18)) / uVar21;
      }
      pbVar2 = (byte *)(*(long *)(param_1 + 0x58) +
                       ((uVar5 & 0xffffffff) * (long)(int)*(uint *)(param_1 + 0x18) +
                       (uVar7 & 0xffffffff)) * 4);
      uVar12 = recovered_10004fc8((long)&local_90,(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2]);
      *(uint *)(uVar22 + (ulong)uVar11 * 4 + uVar20 * (uVar6 + (int)uVar19) + uVar24 * 4) = uVar12;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if ((((int)uVar12 < 1) || (uVar14 == 0)) || (uVar13 == 0)) goto LAB_10003ff4;
  uVar13 = *(uint *)(param_1 + 0x24);
  if ((int)uVar13 < 1) goto LAB_10003ff4;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x30);
  iVar10 = uVar12 - 1;
  if (iVar4 <= (int)(uVar12 - 1)) {
    iVar10 = iVar4;
  }
  iVar18 = 0;
  if (-1 < iVar4) {
    iVar18 = iVar10;
  }
  iVar10 = 0;
  if ((ulong)uVar12 != 0) {
    iVar10 = (int)((uVar21 * (long)iVar18) / (ulong)uVar12);
  }
  iVar4 = uVar13 - 1;
  if (iVar17 <= (int)(uVar13 - 1)) {
    iVar4 = iVar17;
  }
  iVar18 = 0;
  if (-1 < iVar17) {
    iVar18 = iVar4;
  }
  iVar4 = 0;
  if ((ulong)uVar13 != 0) {
    iVar4 = (int)((uVar25 * (long)iVar18) / (ulong)uVar13);
  }
  uVar13 = recovered_10004fc8((long)&local_90,0,0,0);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar17 = 0xff;
    iVar18 = 0x3c;
LAB_10003f24:
    iVar15 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x35) == '\x01') {
      iVar17 = 0x3c;
      iVar18 = 0xff;
      goto LAB_10003f24;
    }
    if (*(char *)(param_1 + 0x36) == '\x01') {
      iVar17 = 0x50;
      iVar18 = 0x82;
    }
    else {
      iVar17 = 0xff;
      iVar18 = 0xff;
    }
    iVar15 = 0xff;
  }
  uVar14 = recovered_10004fc8((long)&local_90,iVar17,iVar18,iVar15);
  for (iVar17 = -7; iVar17 != 8; iVar17 = iVar17 + 1) {
    uVar12 = uVar6 + iVar4 + iVar17;
    for (iVar18 = -7; iVar18 != 8; iVar18 = iVar18 + 1) {
      iVar15 = recovered_10000c0c(iVar18);
      iVar16 = recovered_10000c0c(iVar17);
      if (((iVar16 + iVar15 < 8) && (uVar1 = uVar11 + iVar10 + iVar18, -1 < (int)uVar1)) &&
         ((-1 < (int)uVar12 && (uVar1 < uVar26 && uVar12 < uVar27)))) {
        uVar3 = uVar13;
        if (iVar16 + iVar15 < 6) {
          uVar3 = uVar14;
        }
        *(uint *)(uVar22 + (ulong)uVar1 * 4 + uVar20 * uVar12) = uVar3;
      }
    }
  }
LAB_10003ff4:
  uVar19 = ctr_el0;
  uVar20 = 4L << (uVar19 >> 0x10 & 0xf);
  uVar19 = uVar22 + (uVar23 & 0xffffffff);
  if (CARRY8(uVar22,uVar23 & 0xffffffff)) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar22 = uVar22 & -uVar20;
  uVar23 = ~uVar22 + uVar20;
  do {
    if (uVar19 <= uVar22) break;
    DC_CVAC(uVar22);
    uVar22 = uVar22 + uVar20;
    uVar23 = uVar23 - uVar20;
  } while (uVar20 <= uVar23);
  DataSynchronizationBarrier(3,3,0);
  InstructionSynchronizationBarrier();
  return;
}

#undef DAT_10005980
#undef DAT_10005990
#undef DAT_1000c340
#undef DAT_1000c348
#undef DAT_1000c358
#undef DAT_1000c360
#undef DAT_1000c364
#undef DAT_1000c368
#undef DAT_1000c36c
#undef DAT_1000c370
#undef DAT_4001087c
#undef UNK_10005988
#undef UNK_1000c350
#undef _DAT_10005980
#undef _DAT_1000c348
#undef _DAT_4001087c
#undef uRam0000000010005988
#undef uRam000000001000c350
#undef uStack_80
#undef iStack_70
#undef uStack_68
#undef local_90
#undef local_88
#undef local_84
#undef local_7c
#undef local_74
#undef local_6c
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004068
 */

void recovered_10004068(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


#undef DAT_1000c380
#define DAT_1000c380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6ae4U)))
#undef DAT_40010818
#define DAT_40010818 (*(uint8_t *)(0x40010818U))
#undef _DAT_40010818
#define _DAT_40010818 (*(uint *)(0x40010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004078
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004078(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 *data;

  if (param_1 != (undefined8 *)0x0) {
    if (DAT_1000c380 == param_1) {
      DAT_1000c380 = (undefined8 *)0x0;
    }
    recovered_1000574c(param_1 + 0xb);
    recovered_1000574c(param_1 + 7);
    data = recovered_10004d48(param_1);
    recovered_10002e78(data);
    bVar1 = recovered_10004d00(0x18);
    if ((bVar1) && (_DAT_40010818 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100040e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_40010818)();
      return;
    }
  }
  return;
}

#undef DAT_1000c380
#undef DAT_40010818
#undef _DAT_40010818

#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
#define local_38 (*(undefined1 * *)(frame + 16))
#define local_30 (*(long *)(frame + 24))
#define uStack_28 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040f0
 */

void * recovered_100040f0(undefined8 *param_1)

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
    recovered_10005064(&local_38,param_1);
    size = local_30 + 1;
  }
  out = recovered_10002e74(size);
  data = &DAT_100059bb;
  if (local_38 != (undefined1 *)0x0) {
    data = local_38;
  }
  recovered_10000cec(out,data,local_30 + 1);
  recovered_10002e78(local_38);
  return out;
}

#undef DAT_100059bb
#undef local_38
#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004174
 */

void recovered_10004174(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_3 = uVar1;
  }
  return;
}


#define uStack_65 (*(undefined1 *)(frame + 16))
#define uStack_64 (*(undefined2 *)(frame + 17))
#define uStack_62 (*(undefined1 *)(frame + 19))
#define uStack_61 (*(undefined1 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a8
 */

void recovered_100041a8(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[149] = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  uint128 auVar17;
  uint128 auVar18;
  float fVar19;
  float fVar20;
  float fVar21;

  if (param_1 == 0) {
    return;
  }
  PF_PART4(auVar17, 4) = param_3;
  PF_PART4(auVar17, 0) = param_2;
  PF_PART4(auVar17, 8) = param_2;
  PF_PART4(auVar17, 12) = param_3;
  PF_PART4(auVar18, 8) = 1;
  PF_PART8(auVar18, 0) = 0x100000001;
  PF_PART4(auVar18, 12) = 1;
  auVar18 = NEON_smax(auVar17,auVar18,4);
  *(long *)(param_1 + 0x20) = PF_PART8(auVar18, 8);
  *(long *)(param_1 + 0x18) = PF_PART8(auVar18, 0);
  recovered_100041f0(param_1);
  if (((param_1 != 0) && (0 < (int)*(uint *)(param_1 + 0x18))) &&
     (0 < (int)*(uint *)(param_1 + 0x1c))) {
    uStack_61 = 0;
    recovered_100039b8((long *)(param_1 + 0x58),
                       (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                       &uStack_61);
    if (((*(long *)(param_1 + 0x40) == 0) || ((int)*(uint *)(param_1 + 0x50) < 1)) ||
       ((int)*(uint *)(param_1 + 0x54) < 1)) {
      iVar11 = 0;
      iVar12 = 0;
      bVar8 = false;
      iVar10 = 0;
      iVar9 = 0;
    }
    else {
      fVar19 = (float)*(uint *)(param_1 + 0x50);
      fVar16 = (float)*(int *)(param_1 + 0x18) / fVar19;
      fVar21 = (float)*(uint *)(param_1 + 0x54);
      fVar20 = (float)*(int *)(param_1 + 0x1c) / fVar21;
      if (fVar16 <= fVar20) {
        fVar20 = fVar16;
      }
      iVar9 = (int)(fVar20 * fVar19);
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      iVar10 = (int)(fVar20 * fVar21);
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
      iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
      bVar8 = true;
    }
    for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
      iVar14 = -iVar11;
      for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
        uStack_65 = *(undefined1 *)(param_1 + 0x29);
        uStack_64 = *(undefined2 *)(param_1 + 0x2a);
        bVar7 = false;
        if (iVar11 <= lVar13) {
          bVar7 = bVar8;
        }
        if (((bVar7 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) && lVar15 < iVar10 + iVar12) {
          iVar4 = *(int *)(param_1 + 0x50);
          iVar5 = 0;
          if (iVar9 != 0) {
            iVar5 = (iVar4 * iVar14) / iVar9;
          }
          iVar6 = iVar4 + -1;
          if (iVar5 <= iVar4 + -1) {
            iVar6 = iVar5;
          }
          iVar2 = 0;
          if (-1 < iVar5) {
            iVar2 = iVar6;
          }
          iVar5 = 0;
          if (iVar10 != 0) {
            iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
          }
          iVar6 = *(int *)(param_1 + 0x54) + -1;
          if (iVar5 <= iVar6) {
            iVar6 = iVar5;
          }
          iVar3 = 0;
          if (-1 < iVar5) {
            iVar3 = iVar6;
          }
          puVar1 = (undefined1 *)
                   (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4);
          uStack_65 = *puVar1;
          uStack_64 = *(undefined2 *)(puVar1 + 1);
        }
        uStack_62 = 0xff;
        recovered_10000cec((void *)(*(long *)(param_1 + 0x58) +
                                   (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,4);
        iVar14 = iVar14 + 1;
      }
    }
  }
  return;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f0
 */

void recovered_100041f0(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;

  if (param_1 != 0) {
    uVar1 = NEON_smax(*(undefined8 *)(param_1 + 0x20),0x100000001,4);
    lVar3 = *(long *)(param_1 + 0x2c);
    uVar2 = NEON_smin(CONCAT44((int)((ulong)uVar1 >> 0x20) + -1,(int)uVar1 + -1),lVar3,4);
    *(ulong *)(param_1 + 0x2c) = CONCAT44(-(uint)(-1 < lVar3),-(uint)(-1 < (int)lVar3)) & uVar2;
  }
  return;
}


#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004220
 */

void recovered_10004220(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulong uVar2;

  if (param_1 == 0) {
    return;
  }
  puVar1 = &DAT_100059bb;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  uVar2 = recovered_10004e58((long)puVar1);
  recovered_10004d70((long *)param_1,(long)puVar1,uVar2);
  return;
}

#undef DAT_100059bb

#define uStack_65 (*(undefined1 *)(frame + 16))
#define uStack_64 (*(undefined2 *)(frame + 17))
#define uStack_62 (*(undefined1 *)(frame + 19))
#define uStack_61 (*(undefined1 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000423c
 */

void recovered_1000423c(long param_1,uint *param_2)

{
  unsigned char frame[149] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) ||
      (puVar8 = *(undefined1 **)(param_2 + 2), puVar8 == (undefined1 *)0x0)) ||
     (((int)*param_2 < 1 || ((int)param_2[1] < 1)))) {
    return;
  }
  recovered_100042ac((long *)(param_1 + 0x38),puVar8,
                     puVar8 + (ulong)*param_2 * (ulong)param_2[1] * 4);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
  if ((param_1 != 0) &&
     ((0 < (int)*(uint *)(param_1 + 0x18) && (0 < (int)*(uint *)(param_1 + 0x1c))))) {
    uStack_61 = 0;
    recovered_100039b8((long *)(param_1 + 0x58),
                       (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                       &uStack_61);
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
      iVar11 = 0;
      iVar12 = 0;
      bVar7 = false;
      iVar10 = 0;
      iVar9 = 0;
    }
    else {
      fVar17 = (float)*(uint *)(param_1 + 0x50);
      fVar16 = (float)*(int *)(param_1 + 0x18) / fVar17;
      fVar19 = (float)*(uint *)(param_1 + 0x54);
      fVar18 = (float)*(int *)(param_1 + 0x1c) / fVar19;
      if (fVar16 <= fVar18) {
        fVar18 = fVar16;
      }
      iVar9 = (int)(fVar18 * fVar17);
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      iVar10 = (int)(fVar18 * fVar19);
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
      iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
      bVar7 = true;
    }
    for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
      iVar14 = -iVar11;
      for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
        uStack_65 = *(undefined1 *)(param_1 + 0x29);
        uStack_64 = *(undefined2 *)(param_1 + 0x2a);
        bVar6 = false;
        if (iVar11 <= lVar13) {
          bVar6 = bVar7;
        }
        if (((bVar6 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) && lVar15 < iVar10 + iVar12) {
          iVar3 = *(int *)(param_1 + 0x50);
          iVar4 = 0;
          if (iVar9 != 0) {
            iVar4 = (iVar3 * iVar14) / iVar9;
          }
          iVar5 = iVar3 + -1;
          if (iVar4 <= iVar3 + -1) {
            iVar5 = iVar4;
          }
          iVar1 = 0;
          if (-1 < iVar4) {
            iVar1 = iVar5;
          }
          iVar4 = 0;
          if (iVar10 != 0) {
            iVar4 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
          }
          iVar5 = *(int *)(param_1 + 0x54) + -1;
          if (iVar4 <= iVar5) {
            iVar5 = iVar4;
          }
          iVar2 = 0;
          if (-1 < iVar4) {
            iVar2 = iVar5;
          }
          puVar8 = (undefined1 *)
                   (*(long *)(param_1 + 0x38) + ((long)iVar1 + (long)iVar3 * (long)iVar2) * 4);
          uStack_65 = *puVar8;
          uStack_64 = *(undefined2 *)(puVar8 + 1);
        }
        uStack_62 = 0xff;
        recovered_10000cec((void *)(*(long *)(param_1 + 0x58) +
                                   (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,4);
        iVar14 = iVar14 + 1;
      }
    }
  }
  return;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042ac
 */

void recovered_100042ac(long *param_1,undefined1 *param_2,undefined1 *param_3)

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
      recovered_100056cc(param_1,uVar4);
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


#undef DAT_10005980
#define DAT_10005980 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef DAT_10005990
#define DAT_10005990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6aa4U)))
#undef DAT_1000c348
#define DAT_1000c348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aacU)))
#undef DAT_1000c358
#define DAT_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6abcU)))
#undef DAT_1000c360
#define DAT_1000c360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ac4U)))
#undef DAT_1000c364
#define DAT_1000c364 (*(int *)(((uintptr_t)pf_module_state + 0x6ac8U)))
#undef DAT_1000c368
#define DAT_1000c368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6accU)))
#undef DAT_1000c36c
#define DAT_1000c36c (*(int *)(((uintptr_t)pf_module_state + 0x6ad0U)))
#undef DAT_1000c370
#define DAT_1000c370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ad4U)))
#undef DAT_4001087c
#define DAT_4001087c (*(uint8_t *)(0x4001087cU))
#undef UNK_10005988
#define UNK_10005988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef UNK_1000c350
#define UNK_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ab4U)))
#undef _DAT_10005980
#define _DAT_10005980 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef _DAT_1000c348
#define _DAT_1000c348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6aacU)))
#undef _DAT_4001087c
#define _DAT_4001087c (*(uint *)(0x4001087cU))
#undef uRam0000000010005988
#define uRam0000000010005988 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef uRam000000001000c350
#define uRam000000001000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ab4U)))
#define iStack_88 (*(int *)(frame + 24))
#define uStack_84 (*(uint *)(frame + 28))
#define uStack_80 (*(uint *)(frame + 32))
#define uStack_7c (*(undefined8 *)(frame + 36))
#define iStack_74 (*(int *)(frame + 44))
#define iStack_70 (*(int *)(frame + 48))
#define uStack_6c (*(undefined4 *)(frame + 52))
#define uStack_68 (*(undefined4 *)(frame + 56))
#define uStack_64 (*(undefined4 *)(frame + 60))
#define uStack_90 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100042c0(long param_1)

{
  unsigned char frame[192] = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;

  if (param_1 == 0) {
    return;
  }
  recovered_100042f4();
  recovered_100039c0(param_1);
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  recovered_10000d5c(&DAT_1000c340,0,0x34);
  bVar9 = recovered_10004d00(0x7c);
  if (!bVar9) {
    return;
  }
  if (_DAT_4001087c == 0) {
    return;
  }
  iVar10 = (*(code *)(ulong)_DAT_4001087c)(&DAT_1000c340);
  uVar23 = _DAT_1000c348;
  uVar22 = DAT_1000c340;
  if (iVar10 == 0) {
    return;
  }
  if (DAT_1000c340 == 0) {
    return;
  }
  iVar10 = (int)((ulong)DAT_1000c358 >> 0x20);
  iStack_88 = (int)_DAT_1000c348;
  uStack_84 = (uint)(_DAT_1000c348 >> 0x20);
  uVar26 = (uint)uRam000000001000c350;
  uVar27 = (uint)(uRam000000001000c350 >> 0x20);
  uVar19 = CONCAT17(-((char)((DAT_1000c36c == (int)((ulong)uRam0000000010005988 >> 0x20)) * -0x80) <
                     '\0'),CONCAT16(-((char)((DAT_1000c364 == (int)uRam0000000010005988) * -0x80) <
                                     '\0'),CONCAT15(-((char)((iVar10 ==
                                                             (int)((ulong)_DAT_10005980 >> 0x20)) *
                                                            -0x80) < '\0'),
                                                    CONCAT14(-((char)(~-((int)DAT_1000c358 ==
                                                                        (int)_DAT_10005980) << 7) <
                                                              '\0'),CONCAT13(-((char)((uVar27 == 0)
                                                                                     * -0x80) < '\0'
                                                                              ),CONCAT12(-((char)((
                                                  uVar26 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((uStack_84 == 0) * -0x80) < '\0'
                                                            ),-((char)((iStack_88 == 0) * -0x80) <
                                                               '\0')))))))) & DAT_10005990;
  uVar20 = (ulong)uStack_84;
  uVar24 = uRam000000001000c350 & 0xffffffff;
  if ((char)((char)uVar19 + (char)(uVar19 >> 8) + (char)(uVar19 >> 0x10) + (char)(uVar19 >> 0x18) +
             (char)(uVar19 >> 0x20) + (char)(uVar19 >> 0x28) + (char)(uVar19 >> 0x30) +
            (char)(uVar19 >> 0x38)) != '\0' || uStack_84 >> 2 < uVar26) {
    return;
  }
  uStack_90 = DAT_1000c340;
  uVar25 = (ulong)uVar27;
  uStack_7c = CONCAT44(iVar10,uVar27);
  iStack_74 = DAT_1000c364;
  iStack_70 = DAT_1000c36c;
  uStack_6c = DAT_1000c360;
  uStack_68 = DAT_1000c368;
  uStack_64 = DAT_1000c370;
  uStack_80 = uVar26;
  uVar11 = recovered_10004fc8((long)&uStack_90,(uint)*(byte *)(param_1 + 0x29),
                              (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b));
  for (uVar19 = 0; uVar19 != uVar25; uVar19 = uVar19 + 1) {
    puVar8 = (uint *)(uVar22 + uVar19 * uVar20);
    for (uVar21 = uVar24; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    }
  }
  uVar19 = 0;
  uVar21 = (ulong)*(uint *)(param_1 + 0x18);
  uVar5 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar11 = 0;
  if (uVar21 != 0) {
    uVar11 = (uint)((uVar5 * uVar24) / uVar21);
  }
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar13 = (uint)((uVar21 * uVar25) / uVar5);
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  uVar21 = (ulong)uVar13;
  uVar14 = uVar27;
  if (uVar11 <= uVar27) {
    uVar13 = uVar26;
    uVar21 = uVar24;
    uVar25 = (ulong)uVar11;
    uVar14 = uVar11;
  }
  uVar11 = uVar26 - uVar13 >> 1;
  uVar6 = uVar27 - uVar14 >> 1;
  for (; uVar19 < uVar25; uVar19 = uVar19 + 1) {
    uVar24 = 0;
    uVar5 = 0;
    if (uVar25 != 0) {
      uVar5 = (uVar19 * *(uint *)(param_1 + 0x1c)) / uVar25;
    }
    for (; uVar21 != uVar24; uVar24 = uVar24 + 1) {
      uVar7 = 0;
      if (uVar21 != 0) {
        uVar7 = (uVar24 * *(uint *)(param_1 + 0x18)) / uVar21;
      }
      pbVar2 = (byte *)(*(long *)(param_1 + 0x58) +
                       ((uVar5 & 0xffffffff) * (long)(int)*(uint *)(param_1 + 0x18) +
                       (uVar7 & 0xffffffff)) * 4);
      uVar12 = recovered_10004fc8((long)&uStack_90,(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2]);
      *(uint *)(uVar22 + (ulong)uVar11 * 4 + uVar20 * (uVar6 + (int)uVar19) + uVar24 * 4) = uVar12;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if ((((int)uVar12 < 1) || (uVar14 == 0)) || (uVar13 == 0)) goto LAB_10003ff4;
  uVar13 = *(uint *)(param_1 + 0x24);
  if ((int)uVar13 < 1) goto LAB_10003ff4;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x30);
  iVar10 = uVar12 - 1;
  if (iVar4 <= (int)(uVar12 - 1)) {
    iVar10 = iVar4;
  }
  iVar18 = 0;
  if (-1 < iVar4) {
    iVar18 = iVar10;
  }
  iVar10 = 0;
  if ((ulong)uVar12 != 0) {
    iVar10 = (int)((uVar21 * (long)iVar18) / (ulong)uVar12);
  }
  iVar4 = uVar13 - 1;
  if (iVar17 <= (int)(uVar13 - 1)) {
    iVar4 = iVar17;
  }
  iVar18 = 0;
  if (-1 < iVar17) {
    iVar18 = iVar4;
  }
  iVar4 = 0;
  if ((ulong)uVar13 != 0) {
    iVar4 = (int)((uVar25 * (long)iVar18) / (ulong)uVar13);
  }
  uVar13 = recovered_10004fc8((long)&uStack_90,0,0,0);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar17 = 0xff;
    iVar18 = 0x3c;
LAB_10003f24:
    iVar15 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x35) == '\x01') {
      iVar17 = 0x3c;
      iVar18 = 0xff;
      goto LAB_10003f24;
    }
    if (*(char *)(param_1 + 0x36) == '\x01') {
      iVar17 = 0x50;
      iVar18 = 0x82;
    }
    else {
      iVar17 = 0xff;
      iVar18 = 0xff;
    }
    iVar15 = 0xff;
  }
  uVar14 = recovered_10004fc8((long)&uStack_90,iVar17,iVar18,iVar15);
  for (iVar17 = -7; iVar17 != 8; iVar17 = iVar17 + 1) {
    uVar12 = uVar6 + iVar4 + iVar17;
    for (iVar18 = -7; iVar18 != 8; iVar18 = iVar18 + 1) {
      iVar15 = recovered_10000c0c(iVar18);
      iVar16 = recovered_10000c0c(iVar17);
      if (((iVar16 + iVar15 < 8) && (uVar1 = uVar11 + iVar10 + iVar18, -1 < (int)uVar1)) &&
         ((-1 < (int)uVar12 && (uVar1 < uVar26 && uVar12 < uVar27)))) {
        uVar3 = uVar13;
        if (iVar16 + iVar15 < 6) {
          uVar3 = uVar14;
        }
        *(uint *)(uVar22 + (ulong)uVar1 * 4 + uVar20 * uVar12) = uVar3;
      }
    }
  }
LAB_10003ff4:
  uVar19 = ctr_el0;
  uVar20 = 4L << (uVar19 >> 0x10 & 0xf);
  uVar19 = uVar22 + (uVar23 & 0xffffffff);
  if (CARRY8(uVar22,uVar23 & 0xffffffff)) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar22 = uVar22 & -uVar20;
  uVar23 = ~uVar22 + uVar20;
  do {
    if (uVar19 <= uVar22) break;
    DC_CVAC(uVar22);
    uVar22 = uVar22 + uVar20;
    uVar23 = uVar23 - uVar20;
  } while (uVar20 <= uVar23);
  DataSynchronizationBarrier(3,3,0);
  InstructionSynchronizationBarrier();
  return;
}

#undef DAT_10005980
#undef DAT_10005990
#undef DAT_1000c340
#undef DAT_1000c348
#undef DAT_1000c358
#undef DAT_1000c360
#undef DAT_1000c364
#undef DAT_1000c368
#undef DAT_1000c36c
#undef DAT_1000c370
#undef DAT_4001087c
#undef UNK_10005988
#undef UNK_1000c350
#undef _DAT_10005980
#undef _DAT_1000c348
#undef _DAT_4001087c
#undef uRam0000000010005988
#undef uRam000000001000c350
#undef iStack_88
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef iStack_74
#undef iStack_70
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_90

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6844U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6845U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6846U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6847U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6848U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6849U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684aU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684bU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684dU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684eU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684fU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6850U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6851U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6852U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6853U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6855U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6856U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6857U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6858U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6859U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685aU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685bU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685cU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685dU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685eU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685fU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6860U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6861U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6862U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6863U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6864U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6865U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6866U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6867U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6868U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6869U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686aU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686bU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686cU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686dU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686eU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686fU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6870U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6871U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(byte *)(((uintptr_t)pf_module_state + 0x6872U)))
#undef DAT_1000c378
#define DAT_1000c378 (*(int *)(((uintptr_t)pf_module_state + 0x6adcU)))
#undef DAT_1000c380
#define DAT_1000c380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ae4U)))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_40010880
#define DAT_40010880 (*(uint8_t *)(0x40010880U))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x276cU)))
#undef _DAT_4001082c
#define _DAT_4001082c (*(uint *)(0x4001082cU))
#undef _DAT_40010880
#define _DAT_40010880 (*(uint *)(0x40010880U))
#define uStack_78 (*(undefined8 *)(frame + 24))
#define local_80 (*(undefined8 *)(frame + 16))
#define local_70 (*(undefined8 *)(frame + 32))
#define local_68 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100042f4(void)

{
  unsigned char frame[176] = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 unaff_x30;

  if (DAT_1000c380 == 0) {
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
    return unaff_x30;
  }
switchD_10004568_caseD_49:
  while (((bVar5 = recovered_10004d00(0x2c), bVar5 && (_DAT_4001082c != 0)) &&
         (uVar6 = (*(code *)(ulong)_DAT_4001082c)(), uVar6 != 0))) {
    uVar2 = uVar6 >> 8 & 0xff;
    if ((uVar6 & 0xff) == 0) goto LAB_100043ac;
    if (DAT_1000c380 != 0) {
      if (DAT_1000c378 == 2) {
        DAT_1000c378 = 0;
        switch((uintptr_t)(uVar6 & 0xff)) {
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
      else if (DAT_1000c378 == 1) {
        DAT_1000c378 = (uint)((uVar6 & 0xff) == 0x5b) << 1;
      }
      else if ((uVar6 & 0xff) == 0x1b) {
        DAT_1000c378 = 1;
      }
      else if ((uVar6 - 0x20 & 0xff) < 0x5f) {
        DAT_1000c10e = (byte)uVar6;
        bVar3 = DAT_1000c10e;
        if (0x19 < (uVar6 - 0x61 & 0xff)) {
          if (0x19 < (uVar6 - 0x41 & 0xff)) {
            if ((uVar6 - 0x30 & 0xff) < 10) {
              *(&PTR_DAT_10008008)[(ulong)(uVar6 - 0x30) & 0xff] = 1;
              goto switchD_100044d8_caseD_5;
            }
            goto LAB_100044b4;
          }
          bVar3 = DAT_1000c10e | 0x20;
        }
        recovered_100050a4((int)(char)bVar3);
      }
      else {
LAB_100044b4:
        uVar1 = uVar6 & 0xff;
        switch((uintptr_t)(uVar1)) {
        case 3:
        case 4:
          *(undefined1 *)(DAT_1000c380 + 0x28) = 1;
          break;
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xb:
        case 0xc:
          break;
        case 8:
switchD_100044d8_caseD_8:
          DAT_1000c10b = 1;
          break;
        case 10:
        case 0xd:
          DAT_1000c0e0 = 1;
          break;
        default:
          if (uVar1 == 0x20) {
            DAT_1000c10d = 1;
          }
          else if (uVar1 == 0x2d) {
            DAT_1000c109 = 1;
          }
          else if (uVar1 == 0x2e) {
            DAT_1000c10a = 1;
          }
          else if (uVar1 == 0x7f) goto switchD_100044d8_caseD_8;
        }
      }
    }
switchD_100044d8_caseD_5:
    if (((uVar6 & 0xffff) != 0x11b) && (DAT_1000c380 != 0)) goto LAB_10004550;
  }
  lVar4 = DAT_1000c380;
  recovered_100041f0(DAT_1000c380);
  if (lVar4 == 0) {
    return unaff_x30;
  }
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  bVar5 = recovered_10004d00(0x80);
  if (!bVar5) {
    return unaff_x30;
  }
  if (_DAT_40010880 == 0) {
    return unaff_x30;
  }
  iVar7 = (*(code *)(ulong)_DAT_40010880)(&local_80);
  if (iVar7 == 0) {
    return unaff_x30;
  }
  if (((uint)local_80 >> 1 & 1) != 0) {
    iVar7 = (int)((ulong)local_70 >> 0x20);
    if ((int)local_70 != 0 || iVar7 != 0) {
      *(ulong *)(lVar4 + 0x2c) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20) + iVar7,
                    (int)*(undefined8 *)(lVar4 + 0x2c) + (int)local_70);
      goto LAB_10004684;
    }
  }
  if ((local_80 & 1) != 0) {
    uVar8 = recovered_100050cc((uint)uStack_78,(uint)local_68,*(int *)(lVar4 + 0x20));
    *(int *)(lVar4 + 0x2c) = (int)uVar8;
    uVar8 = recovered_100050cc(PF_PART4(uStack_78, 4),PF_PART4(local_68, 4),*(int *)(lVar4 + 0x24));
    *(int *)(lVar4 + 0x30) = (int)uVar8;
  }
LAB_10004684:
  *(byte *)(lVar4 + 0x34) = PF_PART1(local_80, 4) & 1;
  *(byte *)(lVar4 + 0x35) = PF_PART1(local_80, 4) >> 1 & 1;
  *(byte *)(lVar4 + 0x36) = PF_PART1(local_80, 4) >> 2 & 1;
  recovered_100041f0(lVar4);
  return unaff_x30;
LAB_100043ac:
  if (DAT_1000c380 == 0) goto switchD_10004568_caseD_49;
  switch((uintptr_t)(uVar2)) {
  case 1:
switchD_10004568_caseD_48:
    DAT_1000c0e1 = 1;
    goto switchD_10004568_caseD_49;
  case 2:
switchD_10004568_caseD_50:
    DAT_1000c0e2 = 1;
    goto switchD_10004568_caseD_49;
  case 3:
switchD_10004568_caseD_4d:
    DAT_1000c0e4 = 1;
    goto switchD_10004568_caseD_49;
  case 4:
switchD_10004568_caseD_4b:
    DAT_1000c0e3 = 1;
    goto switchD_10004568_caseD_49;
  }
  if (uVar2 != 0x17) {
LAB_10004550:
    switch((uintptr_t)(uVar2)) {
    case 0x48:
      goto switchD_10004568_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_10004568_caseD_49;
    case 0x4b:
      goto switchD_10004568_caseD_4b;
    case 0x4d:
      goto switchD_10004568_caseD_4d;
    case 0x50:
      goto switchD_10004568_caseD_50;
    case 0x53:
      DAT_1000c10c = 1;
      goto switchD_10004568_caseD_49;
    default:
      if (uVar2 != 1) {
        if (uVar2 == 0xe) {
          DAT_1000c10b = 1;
        }
        else if (uVar2 == 0x1c) {
          DAT_1000c0e0 = 1;
        }
        goto switchD_10004568_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_1000c380 + 0x28) = 1;
  goto switchD_10004568_caseD_49;
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
#undef DAT_1000c378
#undef DAT_1000c380
#undef DAT_4001082c
#undef DAT_40010880
#undef PTR_DAT_10008008
#undef _DAT_4001082c
#undef _DAT_40010880
#undef uStack_78
#undef local_80
#undef local_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046bc
 */

byte recovered_100046bc(long param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  return bVar1 & 1;
}


#define uStack_65 (*(undefined1 *)(frame + 16))
#define uStack_64 (*(undefined2 *)(frame + 17))
#define uStack_62 (*(undefined1 *)(frame + 19))
#define uStack_61 (*(undefined1 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d4
 */

void recovered_100046d4(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[149] = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x29) = param_2;
    *(undefined1 *)(param_1 + 0x2a) = param_3;
    *(undefined1 *)(param_1 + 0x2b) = param_4;
    if (*(long *)(param_1 + 0x40) == 0) {
      if (((param_1 != 0) && (0 < (int)*(uint *)(param_1 + 0x18))) &&
         (0 < (int)*(uint *)(param_1 + 0x1c))) {
        uStack_61 = 0;
        recovered_100039b8((long *)(param_1 + 0x58),
                           (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                           &uStack_61);
        if (((*(long *)(param_1 + 0x40) == 0) || ((int)*(uint *)(param_1 + 0x50) < 1)) ||
           ((int)*(uint *)(param_1 + 0x54) < 1)) {
          iVar11 = 0;
          iVar12 = 0;
          bVar8 = false;
          iVar10 = 0;
          iVar9 = 0;
        }
        else {
          fVar17 = (float)*(uint *)(param_1 + 0x50);
          fVar16 = (float)*(int *)(param_1 + 0x18) / fVar17;
          fVar19 = (float)*(uint *)(param_1 + 0x54);
          fVar18 = (float)*(int *)(param_1 + 0x1c) / fVar19;
          if (fVar16 <= fVar18) {
            fVar18 = fVar16;
          }
          iVar9 = (int)(fVar18 * fVar17);
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          iVar10 = (int)(fVar18 * fVar19);
          if (iVar10 < 2) {
            iVar10 = 1;
          }
          iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
          iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
          bVar8 = true;
        }
        for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
          iVar14 = -iVar11;
          for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
            uStack_65 = *(undefined1 *)(param_1 + 0x29);
            uStack_64 = *(undefined2 *)(param_1 + 0x2a);
            bVar7 = false;
            if (iVar11 <= lVar13) {
              bVar7 = bVar8;
            }
            if (((bVar7 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) && lVar15 < iVar10 + iVar12
               ) {
              iVar4 = *(int *)(param_1 + 0x50);
              iVar5 = 0;
              if (iVar9 != 0) {
                iVar5 = (iVar4 * iVar14) / iVar9;
              }
              iVar6 = iVar4 + -1;
              if (iVar5 <= iVar4 + -1) {
                iVar6 = iVar5;
              }
              iVar2 = 0;
              if (-1 < iVar5) {
                iVar2 = iVar6;
              }
              iVar5 = 0;
              if (iVar10 != 0) {
                iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
              }
              iVar6 = *(int *)(param_1 + 0x54) + -1;
              if (iVar5 <= iVar6) {
                iVar6 = iVar5;
              }
              iVar3 = 0;
              if (-1 < iVar5) {
                iVar3 = iVar6;
              }
              puVar1 = (undefined1 *)
                       (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4);
              uStack_65 = *puVar1;
              uStack_64 = *(undefined2 *)(puVar1 + 1);
            }
            uStack_62 = 0xff;
            recovered_10000cec((void *)(*(long *)(param_1 + 0x58) +
                                       (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,
                               4);
            iVar14 = iVar14 + 1;
          }
        }
      }
      return;
    }
  }
  return;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f4
 */

int * recovered_100046f4(long param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  void *out;
  ulong size;

  if ((param_1 == 0) || (recovered_100039c0(param_1), *(long *)(param_1 + 0x60) == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = recovered_10002e44(0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x1c);
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    size = (long)iVar1 * (long)iVar2 * 4;
    out = recovered_10002e74(size);
    *(void **)(piVar3 + 2) = out;
    recovered_10000cec(out,*(void **)(param_1 + 0x58),size);
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004774
 */

void recovered_10004774(long param_1,undefined4 *param_2,undefined4 *param_3)

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
      *param_2 = *(undefined4 *)(param_1 + 0x2c);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047ac
 */

byte recovered_100047ac(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x34);
  }
  return bVar1 & 1;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6844U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6845U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6846U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6847U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6848U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6849U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684aU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684bU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684dU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684eU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684fU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6850U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6851U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6852U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6853U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6855U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6856U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6857U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6858U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6859U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685aU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685bU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685cU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685dU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685eU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685fU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6860U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6861U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6862U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6863U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6864U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6865U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6866U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6867U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6868U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6869U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686aU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686bU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686cU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686dU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686eU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686fU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6870U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6871U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6872U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047cc
 */

void recovered_100047cc(void)

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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6844U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6845U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6846U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6847U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6848U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6849U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684aU)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684bU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684cU)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684dU)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684eU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x684fU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6850U)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6851U)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6852U)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6853U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6854U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6855U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6856U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6857U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6858U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6859U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685aU)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685bU)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685cU)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685dU)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685eU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x685fU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6860U)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6861U)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6862U)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6863U)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6864U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6865U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6866U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6867U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6868U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6869U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686aU)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686bU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686cU)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686dU)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686eU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x686fU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6870U)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6871U)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6872U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004948
 */

void recovered_10004948(void)

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
 * Address: 0x1000494c
 */

void recovered_1000494c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004950
 */

void recovered_10004950(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004954
 */

undefined8 recovered_10004954(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004958
 */

void recovered_10004958(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000495c
 */

undefined8 recovered_1000495c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_100059b9
#define DAT_100059b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11dU)))
#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
#undef DAT_10005b9d
#define DAT_10005b9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x301U)))
#undef DAT_10005ba0
#define DAT_10005ba0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x304U)))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010850
#define _DAT_40010850 (*(uint *)(0x40010850U))
#define local_d8 (*(char * *)(frame + 16))
#define local_d0 (*(ulong *)(frame + 24))
#define local_c0 (*(undefined1 * *)(frame + 40))
#define local_b0 (*(undefined8 *)(frame + 56))
#define local_a8 (*(void * *)(frame + 64))
#define local_98 (*(undefined8 *)(frame + 80))
#define local_90 (*(undefined1 * *)(frame + 88))
#define local_88 (*(long *)(frame + 96))
#define local_80 (*(undefined8 *)(frame + 104))
#define local_78 (*(long *)(frame + 112))
#define local_70 (*(ulong *)(frame + 120))
#define lStack_b8 (*(long *)(frame + 48))
#define uStack_a0 (*(undefined8 *)(frame + 72))
#define uStack_68 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10004960(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    recovered_1000559c(&local_d8,(long)param_1);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    if (local_d0 == 0) {
      bVar5 = false;
    }
    else {
      pcVar1 = &DAT_100059bb;
      if (local_d8 != (char *)0x0) {
        pcVar1 = local_d8;
      }
      bVar5 = *pcVar1 == '/';
    }
    uVar9 = 0;
    do {
      if (local_d0 <= uVar9) break;
      recovered_10005118(&local_d8,'/',uVar9);
      uVar2 = local_d0;
      if (extraout_x0 != 0xffffffffffffffff) {
        uVar2 = extraout_x0;
      }
      recovered_10005150(&local_90,&local_d8,uVar9,uVar2 - uVar9);
      if ((local_88 != 0) && (bVar6 = recovered_10004ce8(&local_90,&DAT_100059b9), bVar6)) {
        bVar6 = recovered_1000518c(&local_90,&DAT_10005b9d);
        if (bVar6) {
          if ((local_70 == 0) ||
             (bVar6 = recovered_10004ce8((undefined8 *)(local_78 + local_70 * 0x18 + -0x18),
                                         &DAT_10005b9d), !bVar6)) {
            if (!bVar5) goto LAB_10004a9c;
          }
          else {
            recovered_100051dc(&local_78);
          }
        }
        else {
LAB_10004a9c:
          recovered_10005300(&local_78,&local_90);
        }
      }
      uVar9 = extraout_x0 + 1;
      recovered_10002e78(local_90);
    } while (extraout_x0 != 0xffffffffffffffff);
    puVar3 = &DAT_10005ba0;
    if (!bVar5) {
      puVar3 = &DAT_100059bb;
    }
    recovered_1000559c(&local_90,(long)puVar3);
    lVar8 = 0;
    for (uVar9 = 0; uVar9 < local_70; uVar9 = uVar9 + 1) {
      if (uVar9 != 0 || bVar5) {
        recovered_10005218((long *)&local_90,0x2f);
      }
      recovered_1000527c((long *)&local_90,(undefined8 *)(local_78 + lVar8));
      lVar8 = lVar8 + 0x18;
    }
    if (local_88 == 0) {
      puVar4 = &DAT_10005ba0;
      if (!bVar5) {
        puVar4 = &DAT_100059b9;
      }
      recovered_1000559c(&local_c0,(long)puVar4);
    }
    else {
      local_c0 = local_90;
      lStack_b8 = local_88;
      local_b0 = local_80;
      local_88 = 0;
      local_80 = 0;
      local_90 = (undefined1 *)0x0;
    }
    recovered_10002e78(local_90);
    recovered_1000551c(&local_78);
    recovered_10002e78(local_d8);
    puVar3 = &DAT_100059bb;
    if (local_c0 != (undefined1 *)0x0) {
      puVar3 = local_c0;
    }
    uVar7 = recovered_10004c94(puVar3,&local_a8);
    if (((int)uVar7 != 0) ||
       ((bVar5 = recovered_10004ce8(&local_c0,param_1), bVar5 &&
        (uVar7 = recovered_10004c94(param_1,&local_a8), (int)uVar7 != 0)))) {
      data = local_a8;
      out = (void *)0x0;
      if ((((local_a8 != (void *)0x0) && ((int)uStack_a0 != 0)) && (PF_PART4(uStack_a0, 4) != 0)) &&
         ((int)local_98 != 0)) {
        out = recovered_10002e74(uStack_a0 & 0xffffffff);
        recovered_10000cec(out,data,uStack_a0 & 0xffffffff);
        bVar5 = recovered_10004d00(0x50);
        if ((bVar5) && (_DAT_40010850 != 0)) {
          (*(code *)(ulong)_DAT_40010850)(data);
        }
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
    recovered_10002e78(local_c0);
  }
  return out;
}

#undef DAT_100059b9
#undef DAT_100059bb
#undef DAT_10005b9d
#undef DAT_10005ba0
#undef DAT_40010850
#undef _DAT_40010850
#undef local_d8
#undef local_d0
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef lStack_b8
#undef uStack_a0
#undef uStack_68

#undef DAT_40010858
#define DAT_40010858 (*(uint8_t *)(0x40010858U))
#undef _DAT_40010858
#define _DAT_40010858 (*(uint *)(0x40010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004c94(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10004d00(0x58);
  if ((bVar1) && (_DAT_40010858 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_40010858)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010858
#undef _DAT_40010858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ce8
 */

bool recovered_10004ce8(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000518c(param_1,param_2);
  return !bVar1;
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
 * Address: 0x10004d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004d00(int param_1)

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
 * Address: 0x10004d48
 */

undefined8 * recovered_10004d48(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e78((void *)*param_1);
  return param_1;
}


#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d70
 */

void recovered_10004d70(long *param_1,long param_2,ulong param_3)

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
  uVar2 = recovered_10004e7c(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10004ec8(param_1);
    }
    else {
      recovered_10004f00(param_1,uVar1);
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
    recovered_10004f78(&local_50,*param_1 + local_38,uVar1);
    data = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = data;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_10002e78(data);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e58
 */

long recovered_10004e58(long param_1)

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
 * Address: 0x10004e7c
 */

undefined8 recovered_10004e7c(long *param_1,long param_2,long *param_3)

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
 * Address: 0x10004ec8
 */

void recovered_10004ec8(long *param_1)

{
  unsigned char frame[64] = {0};

  long extraout_x0;

  if (*param_1 == 0) {
    recovered_10004fac(0);
    *param_1 = extraout_x0;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f00
 */

void recovered_10004f00(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10004fac(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_x0 + param_1[1]) = 0;
    recovered_10002e78((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f78
 */

undefined8 * recovered_10004f78(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10004d70(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fac
 */

void recovered_10004fac(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002e44(param_1 + 1);
  *puVar1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc8
 */

uint recovered_10004fc8(long param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_10005034(param_2,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x24));
  uVar2 = recovered_10005034(param_3,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x28));
  uVar3 = recovered_10005034(param_4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x2c));
  return uVar2 | uVar1 | uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005034
 */

int recovered_10005034(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = ~(-1 << (ulong)(param_2 & 0x1f));
  }
  return (uVar1 * param_1 + 0x7f) / 0xff << (ulong)(param_3 & 0x1f);
}


#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005064
 */

undefined8 * recovered_10005064(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_100059bb;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10004d70(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_100059bb

#undef PTR_DAT_10008058
#define PTR_DAT_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x27bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050a4
 */

void recovered_100050a4(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 - 0x61U < 0x1a) {
    *(&PTR_DAT_10008058)[(ulong)(param_1 - 0x61U) & 0xff] = 1;
  }
  return;
}

#undef PTR_DAT_10008058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050cc
 */

ulong recovered_100050cc(uint param_1,uint param_2,int param_3)

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


#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
#define local_20 (*(undefined1 * *)(frame + 16))
#define uStack_18 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005118
 */

void recovered_10005118(undefined8 *param_1,char param_2,ulong param_3)

{
  unsigned char frame[80] = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_100059bb;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_10005294((long *)&local_20,param_2,param_3);
  return;
}

#undef DAT_100059bb
#undef local_20
#undef uStack_18

#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005150
 */

void recovered_10005150(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

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
  puVar3 = &DAT_100059bb;
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
  recovered_10004d70(param_1,(long)(puVar3 + uVar2),uVar1);
  return;
}

#undef DAT_100059bb

#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000518c
 */

bool recovered_1000518c(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_100059bb;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10004e58((long)param_2);
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

#undef DAT_100059bb

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051dc
 */

void recovered_100051dc(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004d48((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005218
 */

void recovered_10005218(long *param_1,undefined1 param_2)

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
    recovered_10004f00(param_1,uVar1);
  }
  recovered_10004ec8(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_100059bb
#define DAT_100059bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11fU)))
#define lStack_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000527c
 */

void recovered_1000527c(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_100059bb;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10004e7c(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10004f00(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10004f00(param_1,uVar4 + lVar7);
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

#undef DAT_100059bb
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005294
 */

ulong recovered_10005294(long *param_1,char param_2,ulong param_3)

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
 * Address: 0x100052c8
 */

bool recovered_100052c8(char *param_1,long param_2,char *param_3,long param_4)

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
 * Address: 0x10005300
 */

long recovered_10005300(long *param_1,undefined8 *param_2)

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
    recovered_10005374(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10005064((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005374
 */

void recovered_10005374(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005408(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10005500((undefined8 *)(extraout_x0 + lVar1),(undefined8 *)(*param_1 + lVar1));
      recovered_10004d48((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x18;
    }
    recovered_10002e78((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005408
 */

void recovered_10005408(long param_1)

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
  pvVar1 = recovered_10000c18(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c04();
  }
  return;
}


#define local_38 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000541c
 */

long * recovered_1000541c(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10004e7c(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10004f00(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10004f00(param_1,uVar3 + lVar5);
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
 * Address: 0x10005500
 */

void recovered_10005500(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x1000551c
 */

long * recovered_1000551c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005548(param_1);
  recovered_10002e78((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005548
 */

void recovered_10005548(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10004d48((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000559c
 */

undefined8 * recovered_1000559c(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10004e58(param_2);
  recovered_10004d70(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

void recovered_100055e0(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_100056cc(param_1,param_2);
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
    recovered_100056cc(param_1,param_2);
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
 * Address: 0x10005664
 */

void recovered_10005664(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100056cc(param_1,param_2);
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
 * Address: 0x100056cc
 */

void recovered_100056cc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10005740(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10002e78((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005740
 */

void recovered_10005740(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000c18(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000c04();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000574c
 */

undefined8 * recovered_1000574c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e78((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005778
 */

long recovered_10005778(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_100056cc(param_1,uVar5);
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

