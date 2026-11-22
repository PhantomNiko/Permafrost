/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10050558
#define DAT_10050558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7508U)))
#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
#undef DAT_10050568
#define DAT_10050568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7518U)))
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
#define uStack_48 (*(ulong *)(frame + 1064))
#define auStack_458 (*(ulong (*)[130])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f678
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003f678(void)

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

  DAT_10050558 = 0;
  uStack_48 = 0;
  DAT_10050560 = 0;
  DAT_10050568 = 0;
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
    recovered_100414f4(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_10050560 == 0) {
    uVar4 = _DAT_82010088 & 0xfffffff0;
    if (_DAT_82010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300030 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_100414f4(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  if (DAT_10050568 == 0) {
    DAT_10050568 = DAT_10050560;
  }
  DAT_10050558 = 1;
  return;
}

#undef DAT_10050558
#undef DAT_10050560
#undef DAT_10050568
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef uStack_48
#undef auStack_458

#undef DAT_10050558
#define DAT_10050558 (*(byte *)(((uintptr_t)pf_module_state + 0x7508U)))
#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
#undef DAT_10050568
#define DAT_10050568 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7518U)))
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
 * Address: 0x1003f684
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003f684(void)

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
  if ((DAT_10050558 & 1) == 0) {
    DAT_10050560 = 0;
    DAT_10050568 = 0;
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
      recovered_100414f4(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_10050560 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_100414f4(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_10050568 == 0) {
      DAT_10050568 = DAT_10050560;
    }
    DAT_10050558 = 1;
  }
  return;
}

#undef DAT_10050558
#undef DAT_10050560
#undef DAT_10050568
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

#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f908
 */

ulong recovered_1003f908(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1003f684();
  uVar1 = 0;
  for (plVar2 = &DAT_10050560; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_10050560

#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f954
 */

long recovered_1003f954(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1003f684();
  lVar1 = 0;
  for (plVar2 = &DAT_10050560; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_10050560

#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f994
 */

ulong recovered_1003f994(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1003f684();
  uVar1 = 0;
  for (plVar2 = &DAT_10050560; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_10050560

#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9d0
 */

long recovered_1003f9d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1003f684();
  lVar1 = 0;
  for (plVar2 = &DAT_10050560; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_10050560

#undef DAT_10050560
#define DAT_10050560 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7510U)))
#undef DAT_10050568
#define DAT_10050568 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7518U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fa00
 */

ulong * recovered_1003fa00(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 != 0) {
    recovered_1003f684();
    puVar4 = DAT_10050560;
    if (DAT_10050568 != (ulong *)0x0) {
      puVar4 = DAT_10050568;
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
            DAT_10050568 = DAT_10050560;
            *(undefined1 *)(puVar2 + 3) = 0;
            if (puVar4 != (ulong *)0x0) {
              DAT_10050568 = puVar4;
            }
            return puVar2 + 4;
          }
        }
        puVar1 = puVar2 + 1;
        puVar2 = DAT_10050560;
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          puVar2 = (ulong *)*puVar1;
        }
      } while (puVar2 != (ulong *)0x0 && puVar2 != puVar4);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_10050560
#undef DAT_10050568

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fad8
 */

ulong recovered_1003fad8(ulong param_1,uint param_2)

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
 * Address: 0x1003fb1c
 */

ulong recovered_1003fb1c(ulong param_1,uint param_2)

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
 * Address: 0x1003fb68
 */

long recovered_1003fb68(long param_1,uint param_2)

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
 * Address: 0x1003fbb8
 */

/* WARNING: Removing unreachable block (ram,0x1003fc08) */

ulong recovered_1003fbb8(ulong param_1,ulong param_2)

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
 * Address: 0x1003fbc0
 */

ulong recovered_1003fbc0(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x1003fc20
 */

undefined8 recovered_1003fc20(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_1003fbc0(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fc40
 */

long recovered_1003fc40(ulong param_1,ulong param_2)

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
  lVar4 = recovered_1003fbc0(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fc80
 */

long recovered_1003fc80(long param_1,long param_2)

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
  recovered_1003fbc0(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fccc
 */

void recovered_1003fccc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fcd4
 */

int recovered_1003fcd4(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -value;
  if (-1 < value) {
    iVar1 = value;
  }
  return iVar1;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_1003fce0(ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x82010800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x50U && api[0x4c/4]) {return ((void * (*)(ulong))(uintptr_t)api[0x4c/4])(size);}
 return 0;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void recovered_1003fd24(void *pointer){
 volatile uint32_t *api=(volatile uint32_t *)0x82010800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x54U && api[0x50/4]) {((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);return;}
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_1003fd68(void *pointer,ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x82010800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x58U && api[0x54/4]) {return ((void * (*)(void *,ulong))(uintptr_t)api[0x54/4])(pointer,size);}
 return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fdb4
 */

void * recovered_1003fdb4(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((count < 0x10) || ((((uint)source ^ (uint)destination) & 7) != 0)) {
    puVar3 = destination;
  }
  else {
    for (puVar3 = destination; (count != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)source;
      source = (undefined1 *)((long)source + 1);
      count = count - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < count + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)source + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    count = count + lVar4;
    while (7 < count) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)source + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      count = count - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    source = (void *)((long)source + (lVar6 - lVar4));
  }
  for (; count != 0; count = count - 1) {
    *puVar3 = *(undefined1 *)source;
    source = (undefined1 *)((long)source + 1);
    puVar3 = puVar3 + 1;
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fe8c
 */

void * recovered_1003fe8c(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((destination != source) && (count != 0)) {
    puVar2 = (undefined1 *)((long)source + count);
    if ((destination >= source && destination <= puVar2) &&
        (destination < source || puVar2 != destination)) {
      puVar3 = (undefined1 *)((long)destination + count);
      uVar1 = count;
      if ((0xf < count) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (count != 0 && (((int)destination + (int)count & 7U) != 0)); count = count - 1) {
          *(undefined1 *)((long)destination + (count - 1)) =
               *(undefined1 *)((long)source + (count - 1));
        }
        for (; 0x1f < count; count = count - 0x20) {
          *(undefined8 *)((long)destination + (count - 8)) =
               *(undefined8 *)((long)source + (count - 8));
          *(undefined8 *)((long)destination + (count - 0x10)) =
               *(undefined8 *)((long)source + (count - 0x10));
          *(undefined8 *)((long)destination + (count - 0x18)) =
               *(undefined8 *)((long)source + (count - 0x18));
          *(undefined8 *)((long)destination + (count - 0x20)) =
               *(undefined8 *)((long)source + (count - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = count; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)destination + count + lVar4 + -8) =
               *(undefined8 *)((long)source + count + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)destination + lVar4 + count);
        puVar2 = (undefined1 *)((long)source + lVar4 + count);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      destination = recovered_1003fdb4(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ffa0
 */

void * recovered_1003ffa0(void *destination,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = destination;
  if (0xf < count) {
    uVar3 = (ulong)(value & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = destination; (count != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)value;
      count = count - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < count; count = count - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < count; count = count - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; count != 0; count = count - 1) {
    *(char *)puVar2 = (char)value;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040038
 */

void recovered_10040038(ulong *param_1,ulong param_2)

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
 * Address: 0x1004003c
 */

void recovered_1004003c(ulong *param_1,ulong param_2)

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
 * Address: 0x10040040
 */

int recovered_10040040(void *left,void *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < count) && ((((uint)right ^ (uint)left) & 7) == 0)) {
    for (lVar6 = 0; (uVar5 = count - lVar6, uVar5 != 0 && (((uint)left + (int)lVar6 & 7) != 0));
        lVar6 = lVar6 + 1) {
      iVar3 = (uint)*(byte *)((long)left + lVar6) - (uint)*(byte *)((long)right + lVar6);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)((long)left + lVar6) != *(long *)((long)right + lVar6)) {
        lVar4 = (long)left + lVar6;
        lVar6 = (long)right + lVar6;
        goto recovered_100401ac;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_100401ac;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_100401ac;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_100401ac;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_100401ac:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = (byte *)(lVar4 + lVar7);
          pbVar2 = (byte *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
          iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
        } while (iVar3 == 0);
        return iVar3;
      }
      lVar7 = lVar7 + 8;
    }
    left = (void *)((long)left + lVar7 + lVar6);
    right = (void *)((long)right + lVar7 + lVar6);
  }
  while( true ) {
    if (count == 0) {
      return 0;
    }
    if ((uint)*(byte *)left - (uint)*(byte *)right != 0) break;
    left = (void *)((long)left + 1);
    right = (void *)((long)right + 1);
    count = count - 1;
  }
  return (uint)*(byte *)left - (uint)*(byte *)right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100401ac
 */

int recovered_100401ac(long param_1,long param_2)

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
 * Address: 0x100401dc
 */

int recovered_100401dc(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x61U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100401ec
 */

int recovered_100401ec(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x41U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100401fc
 */

int recovered_100401fc(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040210
 */

int recovered_10040210(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004022c
 */

int recovered_1004022c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value == 0x20 || value == 9);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004023c
 */

int recovered_1004023c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x20U < 0x5f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004024c
 */

int recovered_1004024c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < value - 0x5bU) {
    value = value + 0x20;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040260
 */

int recovered_10040260(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < value - 0x7bU) {
    value = value + -0x20;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040274
 */

ulong recovered_10040274(char *text)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040298
 */

int recovered_10040298(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100402c0
 */

int recovered_100402c0(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100402c4
 */

char * recovered_100402c4(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  do {
    cVar1 = source[lVar2];
    destination[lVar2] = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100402dc
 */

char * recovered_100402dc(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;
  char *pcVar2;

  pcVar2 = (char *)0x0;
  if (text != (char *)0x0) {
    uVar1 = recovered_10040274(text);
    destination = recovered_1003fce0(uVar1 + 1);
    pcVar2 = (char *)0x0;
    if (destination != (void *)0x0) {
      pcVar2 = recovered_1003fdb4(destination,text,uVar1 + 1);
    }
  }
  return pcVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040318
 */

char * recovered_10040318(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (*text == '\0') {
      if ((value & 0xffU) != 0) {
        text = (char *)0x0;
      }
      return text;
    }
    if ((char)value == *text) break;
    text = text + 1;
  }
  return text;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040340
 */

ulong recovered_10040340(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  while ((text[uVar2] != 0 &&
         (pcVar1 = recovered_10040318(accept,(int)text[uVar2]), pcVar1 != (char *)0x0))) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040388
 */

char * recovered_10040388(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*text == 0) {
      return (char *)0x0;
    }
    pcVar1 = recovered_10040318(accept,(int)*text);
    if (pcVar1 != (char *)0x0) break;
    text = text + 1;
  }
  return text;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100403c8
 */

char * recovered_100403c8(char *haystack,char *needle)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;

  if (*needle != '\0') {
    for (; *haystack != '\0'; haystack = haystack + 1) {
      lVar3 = 0;
      do {
        pcVar1 = needle + lVar3;
        if (*pcVar1 == '\0') {
          return haystack;
        }
        pcVar2 = haystack + lVar3;
        lVar3 = lVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    haystack = (char *)0x0;
  }
  return haystack;
}


#undef DAT_1004acc0
#define DAT_1004acc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040404
 */

undefined * recovered_10040404(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1004acc0;
}

#undef DAT_1004acc0

#undef PTR_DAT_10050000
#define PTR_DAT_10050000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6fb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040410
 */

undefined ** recovered_10040410(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10050000;
}

#undef PTR_DAT_10050000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[8])(frame + 24))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004041c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1004041c(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_1003ffa0(auStack_38,0,0x18);
  bVar1 = recovered_100415ec(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040494
 */

double recovered_10040494(double param_1,uint param_2)

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
 * Address: 0x100404c8
 */

uint128 recovered_100404c8(double param_1,int *param_2)

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
 * Address: 0x1004053c
 */

double recovered_1004053c(double x,double y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (y == 0.0) {
    return 0.0;
  }
  return x - y * (double)(int)(x / y);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040560
 */

double recovered_10040560(double base,double exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;

  uVar2 = (uint)exponent;
  dVar4 = 0.0;
  if ((double)(int)uVar2 == exponent) {
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
          dVar3 = base * dVar3;
        }
        base = base * base;
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
 * Address: 0x100405c0
 */

double recovered_100405c0(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100405dc
 */

double recovered_100405dc(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040608
 */

double recovered_10040608(double value)

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


#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040644
 */

double recovered_10040644(double value)

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
    return (double)iVar1 * DAT_1004b168 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_1004b168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100406f0
 */

longlong recovered_100406f0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (value < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + value);
}


#undef DAT_1004b170
#define DAT_1004b170 (*(double *)(((uintptr_t)pf_module_state + 0x2120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040704
 */

double recovered_10040704(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10040758(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_1004b170);
}

#undef DAT_1004b170

#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b188
#define DAT_1004b188 (*(double *)(((uintptr_t)pf_module_state + 0x2138U)))
#undef DAT_1004b190
#define DAT_1004b190 (*(double *)(((uintptr_t)pf_module_state + 0x2140U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040758
 */

void recovered_10040758(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_1004b178 < param_1; param_1 = param_1 + DAT_1004b190) {
  }
  for (; param_1 < DAT_1004b180; param_1 = param_1 + DAT_1004b188) {
  }
  return;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b188
#undef DAT_1004b190

#undef DAT_1004b198
#define DAT_1004b198 (*(double *)(((uintptr_t)pf_module_state + 0x2148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004079c
 */

double recovered_1004079c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10040758(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_1004b198;
}

#undef DAT_1004b198

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100407e8
 */

double recovered_100407e8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (0.0 <= value) {
    dVar1 = value;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100407f8
 */

longlong recovered_100407f8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (value == 0.0) {
    return 0;
  }
  uVar4 = 0;
  dVar6 = -value;
  if (0.0 <= value) {
    dVar6 = value;
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
  if (0.0 <= value) {
    uVar5 = uVar4;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040858
 */

ulonglong recovered_10040858(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulong uVar5;
  double dVar6;

  uVar4 = 0;
  if (0.0 < value) {
    uVar5 = 0x3f;
    dVar6 = 9.223372036854776e+18;
    do {
      bVar3 = dVar6 <= value;
      if (bVar3) {
        value = value - dVar6;
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
 * Address: 0x100408a8
 */

double recovered_100408a8(ulonglong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = 1.0;
  dVar1 = 0.0;
  for (; value != 0; value = value >> 1) {
    if ((value & 1) != 0) {
      dVar1 = dVar1 + dVar2;
    }
    dVar2 = dVar2 + dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100408d0
 */

double recovered_100408d0(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if (value < 0) {
    dVar2 = recovered_100408a8(-value);
    return -dVar2;
  }
  dVar2 = 1.0;
  dVar1 = 0.0;
  for (; value != 0; value = (ulong)value >> 1) {
    if ((value & 1U) != 0) {
      dVar1 = dVar1 + dVar2;
    }
    dVar2 = dVar2 + dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100408f4
 */

float recovered_100408f4(float x,float y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (y == 0.0) {
    return 0.0;
  }
  return x - y * (float)(int)(x / y);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040928
 */

float recovered_10040928(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100404c8((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040940
 */

float recovered_10040940(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040494((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040958
 */

float recovered_10040958(float base,float exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040560((double)base,(double)exponent);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040974
 */

float recovered_10040974(float value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040998
 */

float recovered_10040998(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100405dc((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100409b0
 */

double recovered_100409b0(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100409d8
 */

float recovered_100409d8(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100409b0((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100409f0
 */

float recovered_100409f0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040608((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a08
 */

float recovered_10040a08(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040644((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a20
 */

long recovered_10040a20(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (value < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + value);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a34
 */

float recovered_10040a34(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040704((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a4c
 */

float recovered_10040a4c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1004079c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a64
 */

float recovered_10040a64(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a74
 */

longlong recovered_10040a74(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;

  for (pbVar5 = (byte *)text; bVar2 = *pbVar5,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar5 = pbVar5 + 1) {
  }
  uVar6 = (ulong)(bVar2 == 0x2d || bVar2 == 0x2b);
  pbVar4 = pbVar5;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar4 = pbVar5 + 1;
  }
  if (base == 0x10) {
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10040b0c;
  }
  else {
    if (base != 0) {
      if (base - 0x25U < 0xffffffdd) {
        if (endptr == (char **)0x0) {
          return 0;
        }
        *endptr = text;
        return 0;
      }
      goto LAB_10040b38;
    }
    if (*pbVar4 != 0x30) {
      base = 10;
      goto LAB_10040b38;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      base = 8;
      goto LAB_10040b38;
    }
LAB_10040b0c:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  base = 0x10;
LAB_10040b38:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10040b78((uint)*pbVar4);
    if ((uint)base <= uVar3) break;
    lVar7 = lVar7 * (ulong)(uint)base + (ulong)uVar3;
    text = (char *)(pbVar4 + 1);
    pbVar4 = pbVar4 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  lVar1 = -lVar7;
  if (bVar2 != 0x2d) {
    lVar1 = lVar7;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040b78
 */

uint recovered_10040b78(int param_1)

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
 * Address: 0x10040ba8
 */

ulonglong recovered_10040ba8(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;

  pbVar6 = (byte *)text;
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
  if (base == 0x10) {
    if (*pbVar6 != 0x30) {
      base = 0x10;
      goto LAB_10040c8c;
    }
    bVar3 = pbVar6[1];
    uVar5 = 0x10;
  }
  else {
    if (base != 0) {
      if (base - 0x25U < 0xffffffdd) {
        if (endptr == (char **)0x0) {
          return 0;
        }
        *endptr = text;
        return 0;
      }
      goto LAB_10040c8c;
    }
    if (*pbVar6 != 0x30) {
      base = 10;
      goto LAB_10040c8c;
    }
    bVar3 = pbVar6[1];
    uVar5 = 8;
  }
  pbVar2 = pbVar6 + 2;
  base = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    base = uVar5;
  }
  pbVar6 = pbVar2;
LAB_10040c8c:
  uVar7 = 0;
  while( true ) {
    uVar5 = recovered_10040b78((uint)*pbVar6);
    if ((uint)base <= uVar5) break;
    uVar7 = uVar7 * (uint)base + (ulong)uVar5;
    text = (char *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  uVar1 = -uVar7;
  if (!bVar4) {
    uVar1 = uVar7;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040ccc
 */

double recovered_10040ccc(char *text,char **endptr)

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
        dVar11 = recovered_10040494(dVar11,iVar8 * iVar5);
        pbVar6 = pbVar10;
      }
    }
    if (endptr != (char **)0x0) {
      *endptr = (char *)pbVar6;
    }
    dVar12 = -dVar11;
    if (bVar2 != 0x2d) {
      dVar12 = dVar11;
    }
  }
  else {
    dVar12 = 0.0;
    if (endptr != (char **)0x0) {
      *endptr = text;
    }
  }
  return dVar12;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e5c
 */

float recovered_10040e5c(char *text,char **endptr)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040ccc(text,endptr);
  return (float)dVar1;
}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10040e74(char *buffer,unsigned long size,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,size,format,args);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004139c
 */

void recovered_1004139c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_1004accb
#define str_1004accb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100413d8
 */

void recovered_100413d8(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_1004accb;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_1004139c(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1004accb

#undef str_1004acd2
#define str_1004acd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c82U)))
#undef str_1004ace3
#define str_1004ace3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c93U)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041428
 */

void recovered_10041428(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_1004acd2;
  if (param_6 == 0) {
    pcVar1 = str_1004ace3;
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
    recovered_1004139c(param_1,param_2,param_3,local_80[lVar6]);
  }
  return;
}

#undef str_1004acd2
#undef str_1004ace3
#undef local_80

/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_100414cc(char *buffer,unsigned long size,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,size,format,args);__builtin_va_end(args);return result;}


#undef DAT_10050558
#define DAT_10050558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7508U)))
#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
#undef DAT_10050568
#define DAT_10050568 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7518U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100414f4
 */

void recovered_100414f4(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_1004157c(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_10050558;
      if (DAT_10050560 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_10050568 == (long *)0x0) {
        DAT_10050568 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_10050558
#undef DAT_10050560
#undef DAT_10050568

#undef DAT_10050558
#define DAT_10050558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7508U)))
#undef DAT_10050560
#define DAT_10050560 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7510U)))
#undef DAT_10050568
#define DAT_10050568 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7518U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004157c
 */

void recovered_1004157c(long param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_10050558;
      if (DAT_10050560 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10050568 == (long *)0x0) {
        DAT_10050568 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_10050558
#undef DAT_10050560
#undef DAT_10050568

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
 * Address: 0x100415ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100415ec(int param_1)

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
 * Address: 0x10041734
 */

/* WARNING: This is an inlined function */

void recovered_10041734(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041738
 */

void recovered_10041738(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((param_1 != (int *)0x0) && (param_1 < param_2)) && (*param_1 == 0)) {
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      *param_1 = 1;
    }
  }
  return;
}


#undef DAT_10051444
#define DAT_10051444 (*(int *)(((uintptr_t)pf_module_state + 0x83f4U)))
#undef DAT_10051448
#define DAT_10051448 (*(uint *)(((uintptr_t)pf_module_state + 0x83f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041764
 */

void recovered_10041764(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return;
  }
  if (DAT_10051444 != 0) {
    return;
  }
  if (DAT_10051448 + 1 >> 0x10 == 0) {
    DAT_10051448 = DAT_10051448 + 1;
    return;
  }
  DAT_10051448 = 0;
  DAT_10051444 = 1;
  recovered_10045858();
  DAT_10051444 = 0;
  return;
}

#undef DAT_10051444
#undef DAT_10051448

#undef DAT_10051444
#define DAT_10051444 (*(int *)(((uintptr_t)pf_module_state + 0x83f4U)))
#undef DAT_10051448
#define DAT_10051448 (*(uint *)(((uintptr_t)pf_module_state + 0x83f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041778
 */

void recovered_10041778(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10051444 != 0) {
    return;
  }
  if (DAT_10051448 + 1 >> 0x10 == 0) {
    DAT_10051448 = DAT_10051448 + 1;
    return;
  }
  DAT_10051448 = 0;
  DAT_10051444 = 1;
  recovered_10045858();
  DAT_10051444 = 0;
  return;
}

#undef DAT_10051444
#undef DAT_10051448

#undef DAT_10051444
#define DAT_10051444 (*(int *)(((uintptr_t)pf_module_state + 0x83f4U)))
#undef DAT_10051448
#define DAT_10051448 (*(uint *)(((uintptr_t)pf_module_state + 0x83f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100417d4
 */

void recovered_100417d4(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10051444 != 0) {
    return;
  }
  if (DAT_10051448 + 1 >> 0x10 == 0) {
    DAT_10051448 = DAT_10051448 + 1;
    return;
  }
  DAT_10051448 = 0;
  DAT_10051444 = 1;
  recovered_10045858();
  DAT_10051444 = 0;
  return;
}

#undef DAT_10051444
#undef DAT_10051448

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100417d8
 */

void recovered_100417d8(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100417dc
 */

ulong recovered_100417dc(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  dVar6 = (double)param_1;
  uVar4 = 0;
  if (0.0 < dVar6) {
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
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100417e4
 */

ulong recovered_100417e4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;

  dVar6 = (double)param_1;
  if (dVar6 == 0.0) {
    return 0;
  }
  uVar4 = 0;
  dVar7 = -dVar6;
  if (0.0 <= dVar6) {
    dVar7 = dVar6;
  }
  uVar5 = 0x3f;
  dVar8 = 9.223372036854776e+18;
  do {
    bVar3 = dVar8 <= dVar7;
    if (bVar3) {
      dVar7 = dVar7 - dVar8;
    }
    uVar1 = 0;
    if (bVar3) {
      uVar1 = 1L << (uVar5 & 0x3f);
    }
    uVar4 = uVar1 | uVar4;
    dVar8 = dVar8 * 0.5;
    uVar2 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar2;
  } while (-1 < (int)uVar2);
  uVar5 = -uVar4;
  if (0.0 <= dVar6) {
    uVar5 = uVar4;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100417ec
 */

float recovered_100417ec(ulong in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100408a8(in_x0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041804
 */

float recovered_10041804(ulong in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100408d0(in_x0);
  return (float)dVar1;
}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1004181c(uint8_t *pointer,...){pf_snow_atomic_enter();uint8_t old=*pointer;pf_snow_atomic_leave();return old;}


void recovered_10041840(void){pf_snow_atomic_enter();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10041858(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1004187c(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_100418a4(uint8_t *pointer,uint8_t *expected,uint8_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_100418f8(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10041924(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10041950(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1004197c(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_100419a8(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_100419d4(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041a04(uint16_t *pointer,...){pf_snow_atomic_enter();uint16_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10041a28(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041a4c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041a74(uint16_t *pointer,uint16_t *expected,uint16_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041ac8(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041af4(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041b20(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041b4c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041b78(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10041ba4(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041bd4(uint32_t *pointer,...){pf_snow_atomic_enter();uint32_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10041bf8(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041c1c(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041c44(uint32_t *pointer,uint32_t *expected,uint32_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041c98(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041cc4(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041cf0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041d1c(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041d48(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10041d74(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041da4(uint64_t *pointer,...){pf_snow_atomic_enter();uint64_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10041dc8(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041dec(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041e14(uint64_t *pointer,uint64_t *expected,uint64_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041e78(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041ea4(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041ed0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041efc(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041f28(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10041f54(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
bool recovered_10041f84(uint8_t *pointer,...){pf_snow_atomic_enter();bool old=*pointer!=0;*pointer=1;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10041fa4(uint8_t *pointer,...){pf_snow_atomic_enter();*pointer=0;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10041fc8(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)value[i]=pointer[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10042014(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)pointer[i]=value[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10042058(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++){uint8_t old=pointer[i];pointer[i]=value[i];out[i]=old;}pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_100420ac(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...){pf_snow_atomic_enter();uint64_t result=value!=0;if(value){for(size_t i=0;i<size;i++)if(pointer[i]!=value[i])result=0;for(size_t i=0;i<size;i++){if(result)pointer[i]=desired[i];else value[i]=pointer[i];}}pf_snow_atomic_leave();return result;}


#undef DAT_10050570
#define DAT_10050570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7520U)))
#undef DAT_1005098e
#define DAT_1005098e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x793eU)))
#undef DAT_10051430
#define DAT_10051430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83e0U)))
#undef DAT_10051a08
#define DAT_10051a08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
#undef DAT_10051c10
#define DAT_10051c10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004212c
 */

void recovered_1004212c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong count;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  char *source;

  if (param_1 == 0) {
    return;
  }
  recovered_1003fdb4(&DAT_10050570,(void *)param_1,0xb20);
  DAT_10051430 = 1;
  source = &DAT_1005098e;
  recovered_1003ffa0(&DAT_10051c10,0,0x800);
  recovered_1003ffa0(&DAT_10051a08,0,0x208);
  uVar4 = 0;
  uVar2 = 0;
  while ((cVar5 = *source, cVar5 != '\0' && (uVar2 < 0x40))) {
    count = 0;
    while ((cVar5 != '\0' && (cVar5 != '\n'))) {
      cVar5 = source[count + 1];
      count = count + 1;
    }
    uVar3 = uVar2;
    if ((count != 0) && (uVar1 = uVar4 + count + 1, uVar1 < 0x800)) {
      uVar3 = uVar2 + 1;
      (&DAT_10051a08)[uVar2] = &DAT_10051c10 + uVar4;
      recovered_1003fdb4(&DAT_10051c10 + uVar4,source,count);
      cVar5 = source[count];
      uVar4 = uVar1;
    }
    if (cVar5 == '\n') {
      source = source + 1;
    }
    source = source + count;
    uVar2 = uVar3;
  }
  (&DAT_10051a08)[uVar2] = 0;
  return;
}

#undef DAT_10050570
#undef DAT_1005098e
#undef DAT_10051430
#undef DAT_10051a08
#undef DAT_10051c10

#undef DAT_10051a08
#define DAT_10051a08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
#undef DAT_10051c10
#define DAT_10051c10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042174
 */

void recovered_10042174(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong count;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;

  recovered_1003ffa0(&DAT_10051c10,0,0x800);
  recovered_1003ffa0(&DAT_10051a08,0,0x208);
  if (param_1 != (char *)0x0) {
    uVar4 = 0;
    uVar2 = 0;
    while ((cVar5 = *param_1, cVar5 != '\0' && (uVar2 < 0x40))) {
      count = 0;
      while ((cVar5 != '\0' && (cVar5 != '\n'))) {
        cVar5 = param_1[count + 1];
        count = count + 1;
      }
      uVar3 = uVar2;
      if ((count != 0) && (uVar1 = uVar4 + count + 1, uVar1 < 0x800)) {
        uVar3 = uVar2 + 1;
        (&DAT_10051a08)[uVar2] = &DAT_10051c10 + uVar4;
        recovered_1003fdb4(&DAT_10051c10 + uVar4,param_1,count);
        cVar5 = param_1[count];
        uVar4 = uVar1;
      }
      if (cVar5 == '\n') {
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + count;
      uVar2 = uVar3;
    }
    (&DAT_10051a08)[uVar2] = 0;
  }
  return;
}

#undef DAT_10051a08
#undef DAT_10051c10

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1004b1d0
#define DAT_1004b1d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_141 (*(char (*)[241])(frame + 287))
#define pvStack_250 (*(void * *)(frame + 16))
#define uStack_248 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004225c
 */

void * recovered_1004225c(char *path,char *mode)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *destination;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;

  puVar8 = recovered_10042468();
  bVar2 = recovered_100425e4(mode,'w');
  bVar4 = recovered_100425e4(mode,'a');
  bVar3 = recovered_100425e4(mode,'+');
  if (((mode == (char *)0x0) || (path == (char *)0x0)) || (puVar8 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
    return (void *)0x0;
  }
  uVar5 = recovered_10042610((long)puVar8,path,acStack_141);
  if ((uVar5 & 1) == 0) {
    DAT_10050554 = 0x3f;
    return (void *)0x0;
  }
  destination = recovered_1003fce0(0x140);
  if (destination == (undefined8 *)0x0) {
    DAT_10050554 = 0xc;
    return (void *)0x0;
  }
  recovered_1003ffa0(destination,0,0x140);
  *destination = DAT_1004b1d0;
  uVar9 = 3;
  if (!bVar2 && (!bVar4 && !bVar3)) {
    uVar9 = 1;
  }
  uVar1 = uVar9 | 4;
  if (!bVar4) {
    uVar1 = uVar9;
  }
  *(uint *)(destination + 1) = uVar1;
  *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
  *(undefined4 *)((long)destination + 0x14) = 0xffffffff;
  pf_varargs_100414cc_1((char *)(destination + 3),0xf1,&DAT_10049050,(ulonglong)acStack_141);
  if ((bVar4 || bVar3) || !bVar2) {
    uVar6 = recovered_10042880((long)puVar8,acStack_141,(ulong *)&pvStack_250);
    if ((int)uVar6 == 0) {
      if ((!bVar2 && !bVar4) && !bVar3) {
        uVar10 = 2;
        goto LAB_10042450;
      }
    }
    else {
      destination[0x22] = pvStack_250;
      destination[0x23] = (ulong)uStack_248;
      if (bVar4) {
        if (uStack_248 == 0) goto LAB_10042404;
      }
      else {
        bVar2 = false;
        if (uStack_248 != 0) {
          bVar2 = bVar3;
        }
        if (bVar2 == false) goto LAB_10042404;
      }
      uVar6 = recovered_10042944((long)destination,(ulong)uStack_248);
      if ((int)uVar6 == 0) {
        uVar10 = 0xc;
LAB_10042450:
        recovered_1003fd24(destination);
        DAT_10050554 = uVar10;
        return (void *)0x0;
      }
      recovered_1003fdb4((void *)destination[0x24],pvStack_250,(ulong)uStack_248);
      uVar5 = (ulong)uStack_248;
      destination[0x25] = uVar5;
      if (!bVar4) {
        uVar5 = 0;
      }
      destination[0x27] = uVar5;
    }
  }
LAB_10042404:
  lVar7 = recovered_100429b0((undefined *)destination);
  if ((int)lVar7 < 0) {
    recovered_1003fd24((void *)destination[0x24]);
    recovered_1003fd24(destination);
    DAT_10050554 = 0x18;
    return (void *)0x0;
  }
  return destination;
}

#undef DAT_10049050
#undef DAT_1004b1d0
#undef DAT_10050554
#undef acStack_141
#undef pvStack_250
#undef uStack_248

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10049053
#define DAT_10049053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_10050570
#define DAT_10050570 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7520U)))
#undef DAT_1005098e
#define DAT_1005098e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x793eU)))
#undef DAT_10050d98
#define DAT_10050d98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d48U)))
#undef DAT_10051430
#define DAT_10051430 (*(byte *)(((uintptr_t)pf_module_state + 0x83e0U)))
#undef UNK_1005067d
#define UNK_1005067d (*(char *)(((uintptr_t)pf_module_state + 0x762dU)))
#undef UNK_10050b90
#define UNK_10050b90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7b40U)))
#undef cRam000000001005067d
#define cRam000000001005067d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x762dU)))
#undef uRam0000000010050b90
#define uRam0000000010050b90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7b40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042468
 */

undefined * recovered_10042468(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *vararg0;
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;

  if ((DAT_10051430 & 1) == 0) {
    puVar6 = &DAT_10050570;
    recovered_1003ffa0(&DAT_10050570,0,0xb20);
    recovered_1003ffa0(&DAT_10050570,0,0xb20);
    uVar2 = recovered_10045988(&DAT_10050570);
    if ((int)uVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      pbVar7 = &DAT_10050d98;
      pf_varargs_100414cc_1(&DAT_10050d98,0x200,&DAT_10049050,((uintptr_t)pf_module_state + 0x773eU));
      uVar4 = 0;
      while ((bVar1 = *pbVar7, bVar1 != 0 && (uVar4 < 0x40))) {
        while( true ) {
          pbVar8 = pbVar7 + 1;
          uVar3 = (uint)bVar1;
          if (0x27 < uVar3) break;
          uVar5 = (ulong)uVar3;
          if ((1L << (uVar5 & 0x3f) & 0x100002600U) == 0) {
            if ((1L << (uVar5 & 0x3f) & 0x8400000000U) != 0) goto LAB_10042540;
            if (uVar5 == 0) goto LAB_10042590;
            break;
          }
          bVar1 = *pbVar8;
          pbVar7 = pbVar8;
        }
        uVar3 = 0;
        pbVar8 = pbVar7;
LAB_10042540:
        *(byte **)(uVar4 * 8 + ((uintptr_t)pf_module_state + 0x7b48U)) = pbVar8;
        for (; bVar1 = *pbVar8, pbVar7 = pbVar8, bVar1 != 0; pbVar8 = pbVar8 + 1) {
          if (uVar3 == 0) {
            if (bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0)
            goto LAB_10042584;
          }
          else if (uVar3 == (int)(char)bVar1) {
LAB_10042584:
            pbVar7 = pbVar8 + 1;
            *pbVar8 = 0;
            break;
          }
        }
        uVar4 = uVar4 + 1;
      }
LAB_10042590:
      uRam0000000010050b90 = (undefined4)uVar4;
      vararg0 = &DAT_10049053;
      if (cRam000000001005067d != '\0') {
        vararg0 = (undefined *)((uintptr_t)pf_module_state + 0x762dU);
      }
      pf_varargs_100414cc_1((char *)((uintptr_t)pf_module_state + 0x7f48U),0xf1,&DAT_10049050,(ulonglong)vararg0);
      DAT_10051430 = 1;
      recovered_10042174(&DAT_1005098e);
    }
  }
  else {
    puVar6 = &DAT_10050570;
  }
  return puVar6;
}

#undef DAT_10049050
#undef DAT_10049053
#undef DAT_10050570
#undef DAT_1005098e
#undef DAT_10050d98
#undef DAT_10051430
#undef UNK_1005067d
#undef UNK_10050b90
#undef cRam000000001005067d
#undef uRam0000000010050b90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100425e4
 */

bool recovered_100425e4(char *param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;

  if (param_1 == (char *)0x0) {
    bVar2 = false;
  }
  else {
    do {
      cVar1 = *param_1;
      bVar2 = cVar1 != '\0';
      param_1 = param_1 + 1;
    } while (cVar1 != param_2 && cVar1 != '\0');
  }
  return bVar2;
}


#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10049053
#define DAT_10049053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1004993a
#define DAT_1004993a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eaU)))
#undef DAT_1004ab15
#define DAT_1004ab15 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ac5U)))
#undef DAT_1004ab1f
#define DAT_1004ab1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acfU)))
#undef str_1004ab19
#define str_1004ab19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ac9U)))
#define in_stack_fffffffffffffba8 (*(char * *)(frame + 24))
#define auStack_448 (*(undefined8 (*)[64])(frame + 40))
#define acStack_241 (*(char (*)[240])(frame + 559))
#define cStack_242 (*(char *)(frame + 558))
#define acStack_151 (*(char (*)[241])(frame + 799))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042610
 */

/* WARNING: Removing unreachable block (ram,0x100427ac) */
/* WARNING: Removing unreachable block (ram,0x100427b8) */

undefined8 recovered_10042610(long param_1,char *param_2,undefined1 *param_3)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;

  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
    param_2 = &DAT_1004993a;
LAB_1004267c:
    pcVar10 = &DAT_10049053;
    if (*(char *)(param_1 + 0xa28) != '\0') {
      pcVar10 = (char *)(param_1 + 0xa28);
    }
    iVar5 = recovered_10040298(pcVar10,&DAT_10049053);
    if (iVar5 == 0) {
      pcVar8 = &DAT_1004ab15;
      pcVar10 = param_2;
    }
    else {
      pcVar8 = str_1004ab19;
      in_stack_fffffffffffffba8 = param_2;
    }
  }
  else {
    if ((cVar1 != '\\') && (cVar1 != '/')) goto LAB_1004267c;
    pcVar8 = &DAT_10049050;
    pcVar10 = param_2;
  }
  pf_varargs_100414cc_2
            (acStack_151,0xf1,pcVar8,(ulonglong)pcVar10,(ulonglong)in_stack_fffffffffffffba8);
  pcVar10 = &cStack_242;
  pf_varargs_100414cc_1(&cStack_242,0xf1,&DAT_10049050,(ulonglong)acStack_151);
  uVar11 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        cVar1 = *pcVar10;
        if ((cVar1 == '\0') || (pcVar8 = pcVar10, 0x3f < uVar11)) goto LAB_100427c0;
        while ((cVar1 == '/' || (cVar1 == '\\'))) {
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar8;
        }
        pcVar10 = pcVar8;
        if (cVar1 == '\0') goto LAB_100427c0;
        while (((cVar1 != '\0' && (cVar1 != '/')) && (cVar1 != '\\'))) {
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
        }
        *pcVar10 = '\0';
        iVar5 = recovered_10040298(pcVar8,&DAT_1004993a);
        if (iVar5 != 0) break;
        if (cVar1 == '\0') goto LAB_100427c0;
        pcVar10 = pcVar10 + 1;
      }
      iVar5 = recovered_10040298(pcVar8,&DAT_1004ab1f);
      if (iVar5 != 0) break;
      bVar4 = uVar11 != 0;
      uVar2 = uVar11 - 1;
      uVar11 = 0;
      if (bVar4) {
        uVar11 = uVar2;
      }
      if (cVar1 == '\0') goto LAB_100427c0;
      pcVar10 = pcVar10 + 1;
    }
    auStack_448[uVar11] = pcVar8;
    if (cVar1 == '\0') break;
    pcVar10 = pcVar10 + 1;
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 + 1;
LAB_100427c0:
  if (uVar11 == 0) {
    uVar9 = 1;
LAB_10042860:
    pf_varargs_100414cc_0(param_3,0xf1,&DAT_10049053);
  }
  else {
    if (uVar11 == 0x40) {
      for (; (cVar1 = *pcVar10, cVar1 == '/' || (cVar1 == '\\')); pcVar10 = pcVar10 + 1) {
      }
      if (cVar1 != '\0') {
LAB_10042854:
        uVar9 = 0;
        goto LAB_10042860;
      }
    }
    *param_3 = 0;
    puVar3 = auStack_448;
    for (uVar12 = (ulong)uVar11; uVar12 != 0; uVar12 = uVar12 - 1) {
      uVar6 = recovered_10040274(param_3);
      pcVar10 = (char *)*puVar3;
      uVar7 = recovered_10040274(pcVar10);
      if (0xf1 < uVar6 + uVar7 + 2) goto LAB_10042854;
      param_3[uVar6] = 0x2f;
      pf_varargs_100414cc_1(param_3 + uVar6 + 1,0xf0 - uVar6,&DAT_10049050,(ulonglong)pcVar10);
      puVar3 = puVar3 + 1;
    }
    uVar9 = 1;
  }
  return uVar9;
}

#undef DAT_10049050
#undef DAT_10049053
#undef DAT_1004993a
#undef DAT_1004ab15
#undef DAT_1004ab1f
#undef str_1004ab19
#undef in_stack_fffffffffffffba8
#undef auStack_448
#undef acStack_241
#undef cStack_242
#undef acStack_151

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#define acStack_12d (*(char (*)[241])(frame + 19))
#define uStack_38 (*(undefined4 *)(frame + 264))
#define uStack_3c (*(uint *)(frame + 260))
#define uStack_34 (*(undefined4 *)(frame + 268))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042880
 */

undefined8 recovered_10042880(long param_1,char *param_2,ulong *param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;

  uVar1 = 0;
  if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
    recovered_1003ffa0(param_3,0,0x108);
    uVar2 = recovered_10042610(param_1,param_2,acStack_12d);
    uVar1 = 0;
    if ((int)uVar2 != 0) {
      recovered_1003ffa0(&uStack_3c,0,0xc);
      uVar3 = recovered_10044558(param_1,acStack_12d,(long)&uStack_3c);
      uVar1 = 0;
      if (((int)uVar3 != 0) && (uStack_3c != 0)) {
        *param_3 = (ulong)uStack_3c;
        *(undefined4 *)(param_3 + 1) = uStack_38;
        *(undefined4 *)(param_3 + 2) = uStack_34;
        pf_varargs_100414cc_1
                  ((char *)((long)param_3 + 0x14),0xf1,&DAT_10049050,(ulonglong)acStack_12d);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_10049050
#undef acStack_12d
#undef uStack_38
#undef uStack_3c
#undef uStack_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042944
 */

undefined8 recovered_10042944(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x130);
    if (uVar4 < param_2) {
      uVar1 = 0x100;
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 << 1;
      } while (uVar4 < param_2);
      pvVar2 = recovered_1003fd68(*(void **)(param_1 + 0x120),uVar4);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x11) = 1;
        return 0;
      }
      *(void **)(param_1 + 0x120) = pvVar2;
      *(ulong *)(param_1 + 0x130) = uVar4;
    }
    uVar3 = 1;
  }
  return uVar3;
}


#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100429b0
 */

long recovered_100429b0(undefined *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 3;
  while( true ) {
    if (lVar1 == 0x20) {
      return 0xffffffff;
    }
    if ((&PTR_DAT_10050450)[lVar1] == (undefined *)0x0) break;
    lVar1 = lVar1 + 1;
  }
  (&PTR_DAT_10050450)[lVar1] = param_1;
  *(int *)(param_1 + 0xc) = (int)lVar1;
  return lVar1;
}

#undef PTR_DAT_10050450

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1004b1d0
#define DAT_1004b1d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_141 (*(char (*)[241])(frame + 287))
#define pvStack_250 (*(void * *)(frame + 16))
#define uStack_248 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100429ec
 */

void * recovered_100429ec(char *path,char *mode,void *stream)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *destination;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;

  if (stream != (void *)0x0) {
    recovered_10042a18(stream);
  }
  puVar8 = recovered_10042468();
  bVar2 = recovered_100425e4(mode,'w');
  bVar4 = recovered_100425e4(mode,'a');
  bVar3 = recovered_100425e4(mode,'+');
  if (((mode == (char *)0x0) || (path == (char *)0x0)) || (puVar8 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
    return (void *)0x0;
  }
  uVar5 = recovered_10042610((long)puVar8,path,acStack_141);
  if ((uVar5 & 1) == 0) {
    DAT_10050554 = 0x3f;
    return (void *)0x0;
  }
  destination = recovered_1003fce0(0x140);
  if (destination == (undefined8 *)0x0) {
    DAT_10050554 = 0xc;
    return (void *)0x0;
  }
  recovered_1003ffa0(destination,0,0x140);
  *destination = DAT_1004b1d0;
  uVar9 = 3;
  if (!bVar2 && (!bVar4 && !bVar3)) {
    uVar9 = 1;
  }
  uVar1 = uVar9 | 4;
  if (!bVar4) {
    uVar1 = uVar9;
  }
  *(uint *)(destination + 1) = uVar1;
  *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
  *(undefined4 *)((long)destination + 0x14) = 0xffffffff;
  pf_varargs_100414cc_1((char *)(destination + 3),0xf1,&DAT_10049050,(ulonglong)acStack_141);
  if ((bVar4 || bVar3) || !bVar2) {
    uVar6 = recovered_10042880((long)puVar8,acStack_141,(ulong *)&pvStack_250);
    if ((int)uVar6 == 0) {
      if ((!bVar2 && !bVar4) && !bVar3) {
        uVar10 = 2;
        goto LAB_10042450;
      }
    }
    else {
      destination[0x22] = pvStack_250;
      destination[0x23] = (ulong)uStack_248;
      if (bVar4) {
        if (uStack_248 == 0) goto LAB_10042404;
      }
      else {
        bVar2 = false;
        if (uStack_248 != 0) {
          bVar2 = bVar3;
        }
        if (bVar2 == false) goto LAB_10042404;
      }
      uVar6 = recovered_10042944((long)destination,(ulong)uStack_248);
      if ((int)uVar6 == 0) {
        uVar10 = 0xc;
LAB_10042450:
        recovered_1003fd24(destination);
        DAT_10050554 = uVar10;
        return (void *)0x0;
      }
      recovered_1003fdb4((void *)destination[0x24],pvStack_250,(ulong)uStack_248);
      uVar5 = (ulong)uStack_248;
      destination[0x25] = uVar5;
      if (!bVar4) {
        uVar5 = 0;
      }
      destination[0x27] = uVar5;
    }
  }
LAB_10042404:
  lVar7 = recovered_100429b0((undefined *)destination);
  if ((int)lVar7 < 0) {
    recovered_1003fd24((void *)destination[0x24]);
    recovered_1003fd24(destination);
    DAT_10050554 = 0x18;
    return (void *)0x0;
  }
  return destination;
}

#undef DAT_10049050
#undef DAT_1004b1d0
#undef DAT_10050554
#undef acStack_141
#undef pvStack_250
#undef uStack_248

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050198
#define PTR_DAT_10050198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7148U)))
#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042a18
 */

int recovered_10042a18(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = recovered_10042ba8(stream);
    if (*(uint *)((long)stream + 0xc) < 0x20) {
      (&PTR_DAT_10050450)[*(uint *)((long)stream + 0xc)] = (undefined *)0x0;
    }
    if ((PTR_DAT_10050198 != stream && PTR_DAT_100502e0 != stream) && PTR_DAT_10050428 != stream) {
      recovered_1003fd24(*(void **)((long)stream + 0x120));
      recovered_1003ffa0(stream,0,0x140);
      recovered_1003fd24(stream);
    }
  }
  return iVar1;
}

#undef DAT_10050554
#undef PTR_DAT_10050198
#undef PTR_DAT_100502e0
#undef PTR_DAT_10050428
#undef PTR_DAT_10050450

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1004b1d0
#define DAT_1004b1d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_141 (*(char (*)[241])(frame + 287))
#define uStack_248 (*(uint *)(frame + 24))
#define pvStack_250 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042ab8
 */

void * recovered_10042ab8(char *path,char *mode)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *destination;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;

  puVar8 = recovered_10042468();
  bVar2 = recovered_100425e4(mode,'w');
  bVar4 = recovered_100425e4(mode,'a');
  bVar3 = recovered_100425e4(mode,'+');
  if (((mode == (char *)0x0) || (path == (char *)0x0)) || (puVar8 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
    return (void *)0x0;
  }
  uVar5 = recovered_10042610((long)puVar8,path,acStack_141);
  if ((uVar5 & 1) == 0) {
    DAT_10050554 = 0x3f;
    return (void *)0x0;
  }
  destination = recovered_1003fce0(0x140);
  if (destination == (undefined8 *)0x0) {
    DAT_10050554 = 0xc;
    return (void *)0x0;
  }
  recovered_1003ffa0(destination,0,0x140);
  *destination = DAT_1004b1d0;
  uVar9 = 3;
  if (!bVar2 && (!bVar4 && !bVar3)) {
    uVar9 = 1;
  }
  uVar1 = uVar9 | 4;
  if (!bVar4) {
    uVar1 = uVar9;
  }
  *(uint *)(destination + 1) = uVar1;
  *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
  *(undefined4 *)((long)destination + 0x14) = 0xffffffff;
  pf_varargs_100414cc_1((char *)(destination + 3),0xf1,&DAT_10049050,(ulonglong)acStack_141);
  if ((bVar4 || bVar3) || !bVar2) {
    uVar6 = recovered_10042880((long)puVar8,acStack_141,(ulong *)&pvStack_250);
    if ((int)uVar6 == 0) {
      if ((!bVar2 && !bVar4) && !bVar3) {
        uVar10 = 2;
        goto LAB_10042450;
      }
    }
    else {
      destination[0x22] = pvStack_250;
      destination[0x23] = (ulong)uStack_248;
      if (bVar4) {
        if (uStack_248 == 0) goto LAB_10042404;
      }
      else {
        bVar2 = false;
        if (uStack_248 != 0) {
          bVar2 = bVar3;
        }
        if (bVar2 == false) goto LAB_10042404;
      }
      uVar6 = recovered_10042944((long)destination,(ulong)uStack_248);
      if ((int)uVar6 == 0) {
        uVar10 = 0xc;
LAB_10042450:
        recovered_1003fd24(destination);
        DAT_10050554 = uVar10;
        return (void *)0x0;
      }
      recovered_1003fdb4((void *)destination[0x24],pvStack_250,(ulong)uStack_248);
      uVar5 = (ulong)uStack_248;
      destination[0x25] = uVar5;
      if (!bVar4) {
        uVar5 = 0;
      }
      destination[0x27] = uVar5;
    }
  }
LAB_10042404:
  lVar7 = recovered_100429b0((undefined *)destination);
  if ((int)lVar7 < 0) {
    recovered_1003fd24((void *)destination[0x24]);
    recovered_1003fd24(destination);
    DAT_10050554 = 0x18;
    return (void *)0x0;
  }
  return destination;
}

#undef DAT_10049050
#undef DAT_1004b1d0
#undef DAT_10050554
#undef acStack_141
#undef uStack_248
#undef pvStack_250

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1004b1d0
#define DAT_1004b1d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_141 (*(char (*)[241])(frame + 287))
#define uStack_248 (*(uint *)(frame + 24))
#define pvStack_250 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042abc
 */

void * recovered_10042abc(char *path,char *mode,void *stream)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *destination;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;

  if (stream != (void *)0x0) {
    recovered_10042a18(stream);
  }
  puVar8 = recovered_10042468();
  bVar2 = recovered_100425e4(mode,'w');
  bVar4 = recovered_100425e4(mode,'a');
  bVar3 = recovered_100425e4(mode,'+');
  if (((mode == (char *)0x0) || (path == (char *)0x0)) || (puVar8 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
    return (void *)0x0;
  }
  uVar5 = recovered_10042610((long)puVar8,path,acStack_141);
  if ((uVar5 & 1) == 0) {
    DAT_10050554 = 0x3f;
    return (void *)0x0;
  }
  destination = recovered_1003fce0(0x140);
  if (destination == (undefined8 *)0x0) {
    DAT_10050554 = 0xc;
    return (void *)0x0;
  }
  recovered_1003ffa0(destination,0,0x140);
  *destination = DAT_1004b1d0;
  uVar9 = 3;
  if (!bVar2 && (!bVar4 && !bVar3)) {
    uVar9 = 1;
  }
  uVar1 = uVar9 | 4;
  if (!bVar4) {
    uVar1 = uVar9;
  }
  *(uint *)(destination + 1) = uVar1;
  *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
  *(undefined4 *)((long)destination + 0x14) = 0xffffffff;
  pf_varargs_100414cc_1((char *)(destination + 3),0xf1,&DAT_10049050,(ulonglong)acStack_141);
  if ((bVar4 || bVar3) || !bVar2) {
    uVar6 = recovered_10042880((long)puVar8,acStack_141,(ulong *)&pvStack_250);
    if ((int)uVar6 == 0) {
      if ((!bVar2 && !bVar4) && !bVar3) {
        uVar10 = 2;
        goto LAB_10042450;
      }
    }
    else {
      destination[0x22] = pvStack_250;
      destination[0x23] = (ulong)uStack_248;
      if (bVar4) {
        if (uStack_248 == 0) goto LAB_10042404;
      }
      else {
        bVar2 = false;
        if (uStack_248 != 0) {
          bVar2 = bVar3;
        }
        if (bVar2 == false) goto LAB_10042404;
      }
      uVar6 = recovered_10042944((long)destination,(ulong)uStack_248);
      if ((int)uVar6 == 0) {
        uVar10 = 0xc;
LAB_10042450:
        recovered_1003fd24(destination);
        DAT_10050554 = uVar10;
        return (void *)0x0;
      }
      recovered_1003fdb4((void *)destination[0x24],pvStack_250,(ulong)uStack_248);
      uVar5 = (ulong)uStack_248;
      destination[0x25] = uVar5;
      if (!bVar4) {
        uVar5 = 0;
      }
      destination[0x27] = uVar5;
    }
  }
LAB_10042404:
  lVar7 = recovered_100429b0((undefined *)destination);
  if ((int)lVar7 < 0) {
    recovered_1003fd24((void *)destination[0x24]);
    recovered_1003fd24(destination);
    DAT_10050554 = 0x18;
    return (void *)0x0;
  }
  return destination;
}

#undef DAT_10049050
#undef DAT_1004b1d0
#undef DAT_10050554
#undef acStack_141
#undef uStack_248
#undef pvStack_250

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042ac0
 */

void * recovered_10042ac0(int fd,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  int *piVar3;

  if (((((uint)fd < 0x20) && (piVar3 = (int *)(&PTR_DAT_10050450)[(uint)fd], piVar3 != (int *)0x0))
      && (mode != (char *)0x0)) && (*piVar3 == 0x54474c46)) {
    bVar2 = recovered_100425e4(mode,'w');
    if (((bVar2) || (bVar2 = recovered_100425e4(mode,'a'), bVar2)) ||
       (bVar2 = recovered_100425e4(mode,'+'), bVar2)) {
      piVar3[2] = piVar3[2] | 2;
    }
    bVar2 = recovered_100425e4(mode,'a');
    if (bVar2) {
      piVar3[2] = piVar3[2] | 4;
      uVar1 = *(ulong *)(piVar3 + 0x4a);
      if (*(ulong *)(piVar3 + 0x4a) <= *(ulong *)(piVar3 + 0x46)) {
        uVar1 = *(ulong *)(piVar3 + 0x46);
      }
      *(ulong *)(piVar3 + 0x4e) = uVar1;
    }
  }
  else {
    piVar3 = (int *)0x0;
    DAT_10050554 = 9;
  }
  return piVar3;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042b80
 */

void * recovered_10042b80(char *command,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return (void *)0x0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042b94
 */

int recovered_10042b94(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return -1;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042ba8
 */

int recovered_10042ba8(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;

  puVar2 = recovered_10042468();
  if (stream == (void *)0x0) {
    for (lVar4 = 0; lVar4 != 0x100; lVar4 = lVar4 + 8) {
      if (*(void **)((long)&PTR_DAT_10050450 + lVar4) != (void *)0x0) {
        recovered_10042ba8(*(void **)((long)&PTR_DAT_10050450 + lVar4));
      }
    }
LAB_10042c2c:
    iVar1 = 0;
  }
  else {
    if (*(int *)stream == 0x54474c46) {
      if ((*(int *)((long)stream + 4) - 1U < 3) || (*(char *)((long)stream + 0x12) != '\x01'))
      goto LAB_10042c2c;
      if ((puVar2 != (undefined *)0x0) &&
         (uVar3 = recovered_10042c64((long)puVar2,(char *)((long)stream + 0x18),
                                     *(long *)((long)stream + 0x120),
                                     (ulong)*(uint *)((long)stream + 0x128)), (int)uVar3 != 0)) {
        *(undefined1 *)((long)stream + 0x12) = 0;
        return 0;
      }
      *(undefined1 *)((long)stream + 0x11) = 1;
      DAT_10050554 = 5;
    }
    else {
      DAT_10050554 = 9;
    }
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_820108d0
#define DAT_820108d0 (*(uint8_t *)(0x820108d0U))
#undef UNK_82010838
#define UNK_82010838 (*(uint *)(0x82010838U))
#undef _DAT_820108d0
#define _DAT_820108d0 (*(uint *)(0x820108d0U))
#undef uRam0000000082010838
#define uRam0000000082010838 (*(uint32_t *)(0x82010838U))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042c64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10042c64(long param_1,char *param_2,long param_3,undefined8 param_4)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return 0;
  }
  if ((-1 < *(int *)(param_1 + 0x14)) && ((param_3 != 0 || ((int)param_4 == 0)))) {
    uVar3 = recovered_10048a4c(param_1,param_2,acStack_129);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    bVar2 = recovered_10048acc(0xd0);
    if (bVar2) {
      if (_DAT_820108d0 != 0) {
        uVar3 = (*(code *)(ulong)_DAT_820108d0)(uVar1,acStack_129,param_3,param_4);
        return uVar3;
      }
    }
    else {
      bVar2 = recovered_10048acc(0x38);
      if (!bVar2) {
        return (ulong)bVar2;
      }
      if (uRam0000000082010838 != 0) {
        uVar3 = (*(code *)(ulong)uRam0000000082010838)(acStack_129,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}

#undef DAT_820108d0
#undef UNK_82010838
#undef _DAT_820108d0
#undef uRam0000000082010838
#undef acStack_129

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042d24
 */

int recovered_10042d24(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;

  puVar2 = recovered_10042468();
  if (stream == (void *)0x0) {
    for (lVar4 = 0; lVar4 != 0x100; lVar4 = lVar4 + 8) {
      if (*(void **)((long)&PTR_DAT_10050450 + lVar4) != (void *)0x0) {
        recovered_10042ba8(*(void **)((long)&PTR_DAT_10050450 + lVar4));
      }
    }
LAB_10042c2c:
    iVar1 = 0;
  }
  else {
    if (*(int *)stream == 0x54474c46) {
      if ((*(int *)((long)stream + 4) - 1U < 3) || (*(char *)((long)stream + 0x12) != '\x01'))
      goto LAB_10042c2c;
      if ((puVar2 != (undefined *)0x0) &&
         (uVar3 = recovered_10042c64((long)puVar2,(char *)((long)stream + 0x18),
                                     *(long *)((long)stream + 0x120),
                                     (ulong)*(uint *)((long)stream + 0x128)), (int)uVar3 != 0)) {
        *(undefined1 *)((long)stream + 0x12) = 0;
        return 0;
      }
      *(undefined1 *)((long)stream + 0x11) = 1;
      DAT_10050554 = 5;
    }
    else {
      DAT_10050554 = 9;
    }
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050198
#define PTR_DAT_10050198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7148U)))
#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042d28
 */

int recovered_10042d28(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = recovered_10042ba8(stream);
    if (*(uint *)((long)stream + 0xc) < 0x20) {
      (&PTR_DAT_10050450)[*(uint *)((long)stream + 0xc)] = (undefined *)0x0;
    }
    if ((PTR_DAT_10050198 != stream && PTR_DAT_100502e0 != stream) && PTR_DAT_10050428 != stream) {
      recovered_1003fd24(*(void **)((long)stream + 0x120));
      recovered_1003ffa0(stream,0,0x140);
      recovered_1003fd24(stream);
    }
  }
  return iVar1;
}

#undef DAT_10050554
#undef PTR_DAT_10050198
#undef PTR_DAT_100502e0
#undef PTR_DAT_10050428
#undef PTR_DAT_10050450

#undef DAT_1004b137
#define DAT_1004b137 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20e7U)))
#undef DAT_10051450
#define DAT_10051450 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8400U)))
#undef DAT_10051458
#define DAT_10051458 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8408U)))
#undef DAT_10051808
#define DAT_10051808 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87b8U)))
#define auStack_24f (*(undefined1 (*)[511])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042d2c
 */

ulong recovered_10042d2c(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  ulong count_00;
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;

  if (ptr == (void *)0x0) {
    return 0;
  }
  if (stream == (void *)0x0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)stream != 0x54474c46;
  }
  if (count == 0) {
    return 0;
  }
  if (size == 0) {
    return 0;
  }
  if (bVar2) {
    return 0;
  }
  uVar5 = count * size;
  if (*(int *)((long)stream + 4) == 1) {
    if (uVar5 != 0) {
      if (DAT_10051458 <= DAT_10051450) {
        auStack_24f[0] = 0;
        uVar3 = recovered_10043354(auStack_24f,0x1ff);
        if ((int)uVar3 == 0) {
          return 0;
        }
        pf_varargs_100414cc_1(&DAT_10051808,0x200,&DAT_1004b137,(ulonglong)auStack_24f);
        DAT_10051450 = 0;
        DAT_10051458 = recovered_10040274(&DAT_10051808);
      }
      uVar1 = DAT_10051458 - DAT_10051450;
      if (uVar5 <= DAT_10051458 - DAT_10051450) {
        uVar1 = uVar5;
      }
      recovered_1003fdb4(ptr,&DAT_10051808 + DAT_10051450,uVar1);
      DAT_10051450 = DAT_10051450 + uVar1;
      if (0 < (long)uVar1) {
        if (size == 0) {
          return 0;
        }
        return uVar1 / size;
      }
    }
    return 0;
  }
  if ((uVar5 != 0) && (*(int *)((long)stream + 0x14) != -1)) {
    *(char *)ptr = (char)*(int *)((long)stream + 0x14);
    *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    uVar5 = recovered_10042d2c((void *)((long)ptr + 1),1,uVar5 - 1,stream);
    if (size == 0) {
      return 0;
    }
    return (uVar5 + 1) / size;
  }
  uVar4 = *(ulong *)((long)stream + 0x138);
  uVar1 = *(ulong *)((long)stream + 0x118) - uVar4;
  if (*(ulong *)((long)stream + 0x118) < uVar4 || uVar1 == 0) {
    *(undefined1 *)((long)stream + 0x10) = 1;
    return 0;
  }
  count_00 = uVar1;
  if (uVar5 <= uVar1) {
    count_00 = uVar5;
  }
  recovered_1003fdb4(ptr,(void *)(*(long *)((long)stream + 0x110) + uVar4),count_00);
  *(ulong *)((long)stream + 0x138) = *(long *)((long)stream + 0x138) + count_00;
  if (uVar1 < uVar5) {
    *(undefined1 *)((long)stream + 0x10) = 1;
  }
  if (size == 0) {
    return 0;
  }
  return count_00 / size;
}

#undef DAT_1004b137
#undef DAT_10051450
#undef DAT_10051458
#undef DAT_10051808
#undef auStack_24f

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef UNK_82010948
#define UNK_82010948 (*(uint *)(0x82010948U))
#undef uRam0000000082010948
#define uRam0000000082010948 (*(uint32_t *)(0x82010948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042ed4
 */

ulong recovered_10042ed4(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;

  uVar2 = 0;
  if (ptr != (void *)0x0) {
    if (stream == (void *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)stream != 0x54474c46;
    }
    uVar2 = 0;
    if (((count != 0) && (size != 0)) && (!bVar1)) {
      uVar2 = count * size;
      if ((*(uint *)((long)stream + 4) & 0xfffffffe) == 2) {
        uVar5 = 1;
        if (*(uint *)((long)stream + 4) == 3) {
          uVar5 = 2;
        }
        bVar1 = recovered_10048acc(0x148);
        if ((bVar1) && (uRam0000000082010948 != 0)) {
          uVar3 = (*(code *)(ulong)uRam0000000082010948)(uVar5,ptr,uVar2);
          uVar3 = uVar3 & 0xffffffff;
        }
        else {
          uVar3 = 0;
        }
        uVar2 = 0;
        if (size != 0) {
          uVar2 = uVar3 / size;
        }
      }
      else if ((*(byte *)((long)stream + 8) >> 1 & 1) == 0) {
        *(undefined1 *)((long)stream + 0x11) = 1;
        uVar2 = 0;
      }
      else {
        uVar3 = *(long *)((long)stream + 0x138) + uVar2;
        uVar4 = recovered_10042944((long)stream,uVar3);
        if ((uVar4 & 1) == 0) {
          uVar2 = 0;
          DAT_10050554 = 0xc;
        }
        else {
          recovered_1003fdb4((void *)(*(long *)((long)stream + 0x120) +
                                     *(long *)((long)stream + 0x138)),ptr,uVar2);
          *(ulong *)((long)stream + 0x138) = uVar3;
          if (*(ulong *)((long)stream + 0x128) < uVar3) {
            *(ulong *)((long)stream + 0x128) = uVar3;
          }
          *(undefined1 *)((long)stream + 0x12) = 1;
          uVar2 = count;
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef UNK_82010948
#undef uRam0000000082010948

#undef DAT_1004b137
#define DAT_1004b137 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20e7U)))
#undef DAT_10051450
#define DAT_10051450 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8400U)))
#undef DAT_10051458
#define DAT_10051458 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8408U)))
#undef DAT_10051808
#define DAT_10051808 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87b8U)))
#define auStack_24f (*(undefined1 (*)[511])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043004
 */

ulong recovered_10043004(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  ulong count_00;
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;

  if (ptr == (void *)0x0) {
    return 0;
  }
  if (stream == (void *)0x0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)stream != 0x54474c46;
  }
  if (count == 0) {
    return 0;
  }
  if (size == 0) {
    return 0;
  }
  if (bVar2) {
    return 0;
  }
  uVar5 = count * size;
  if (*(int *)((long)stream + 4) == 1) {
    if (uVar5 != 0) {
      if (DAT_10051458 <= DAT_10051450) {
        auStack_24f[0] = 0;
        uVar3 = recovered_10043354(auStack_24f,0x1ff);
        if ((int)uVar3 == 0) {
          return 0;
        }
        pf_varargs_100414cc_1(&DAT_10051808,0x200,&DAT_1004b137,(ulonglong)auStack_24f);
        DAT_10051450 = 0;
        DAT_10051458 = recovered_10040274(&DAT_10051808);
      }
      uVar1 = DAT_10051458 - DAT_10051450;
      if (uVar5 <= DAT_10051458 - DAT_10051450) {
        uVar1 = uVar5;
      }
      recovered_1003fdb4(ptr,&DAT_10051808 + DAT_10051450,uVar1);
      DAT_10051450 = DAT_10051450 + uVar1;
      if (0 < (long)uVar1) {
        if (size == 0) {
          return 0;
        }
        return uVar1 / size;
      }
    }
    return 0;
  }
  if ((uVar5 != 0) && (*(int *)((long)stream + 0x14) != -1)) {
    *(char *)ptr = (char)*(int *)((long)stream + 0x14);
    *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    uVar5 = recovered_10042d2c((void *)((long)ptr + 1),1,uVar5 - 1,stream);
    if (size == 0) {
      return 0;
    }
    return (uVar5 + 1) / size;
  }
  uVar4 = *(ulong *)((long)stream + 0x138);
  uVar1 = *(ulong *)((long)stream + 0x118) - uVar4;
  if (*(ulong *)((long)stream + 0x118) < uVar4 || uVar1 == 0) {
    *(undefined1 *)((long)stream + 0x10) = 1;
    return 0;
  }
  count_00 = uVar1;
  if (uVar5 <= uVar1) {
    count_00 = uVar5;
  }
  recovered_1003fdb4(ptr,(void *)(*(long *)((long)stream + 0x110) + uVar4),count_00);
  *(ulong *)((long)stream + 0x138) = *(long *)((long)stream + 0x138) + count_00;
  if (uVar1 < uVar5) {
    *(undefined1 *)((long)stream + 0x10) = 1;
  }
  if (size == 0) {
    return 0;
  }
  return count_00 / size;
}

#undef DAT_1004b137
#undef DAT_10051450
#undef DAT_10051458
#undef DAT_10051808
#undef auStack_24f

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef UNK_82010948
#define UNK_82010948 (*(uint *)(0x82010948U))
#undef uRam0000000082010948
#define uRam0000000082010948 (*(uint32_t *)(0x82010948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043008
 */

ulong recovered_10043008(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;

  uVar2 = 0;
  if (ptr != (void *)0x0) {
    if (stream == (void *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)stream != 0x54474c46;
    }
    uVar2 = 0;
    if (((count != 0) && (size != 0)) && (!bVar1)) {
      uVar2 = count * size;
      if ((*(uint *)((long)stream + 4) & 0xfffffffe) == 2) {
        uVar5 = 1;
        if (*(uint *)((long)stream + 4) == 3) {
          uVar5 = 2;
        }
        bVar1 = recovered_10048acc(0x148);
        if ((bVar1) && (uRam0000000082010948 != 0)) {
          uVar3 = (*(code *)(ulong)uRam0000000082010948)(uVar5,ptr,uVar2);
          uVar3 = uVar3 & 0xffffffff;
        }
        else {
          uVar3 = 0;
        }
        uVar2 = 0;
        if (size != 0) {
          uVar2 = uVar3 / size;
        }
      }
      else if ((*(byte *)((long)stream + 8) >> 1 & 1) == 0) {
        *(undefined1 *)((long)stream + 0x11) = 1;
        uVar2 = 0;
      }
      else {
        uVar3 = *(long *)((long)stream + 0x138) + uVar2;
        uVar4 = recovered_10042944((long)stream,uVar3);
        if ((uVar4 & 1) == 0) {
          uVar2 = 0;
          DAT_10050554 = 0xc;
        }
        else {
          recovered_1003fdb4((void *)(*(long *)((long)stream + 0x120) +
                                     *(long *)((long)stream + 0x138)),ptr,uVar2);
          *(ulong *)((long)stream + 0x138) = uVar3;
          if (*(ulong *)((long)stream + 0x128) < uVar3) {
            *(ulong *)((long)stream + 0x128) = uVar3;
          }
          *(undefined1 *)((long)stream + 0x12) = 1;
          uVar2 = count;
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef UNK_82010948
#undef uRam0000000082010948

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004300c
 */

int recovered_1004300c(void *stream,longlong offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  if (origin == 0) {
    uVar1 = 0;
  }
  else if (origin == 2) {
    uVar1 = *(ulong *)((long)stream + 0x128);
    if (*(ulong *)((long)stream + 0x128) <= *(ulong *)((long)stream + 0x118)) {
      uVar1 = *(ulong *)((long)stream + 0x118);
    }
  }
  else {
    if (origin != 1) {
      DAT_10050554 = 0x16;
      return -1;
    }
    uVar1 = *(ulong *)((long)stream + 0x138);
  }
  if ((offset < 0) && (uVar1 < (ulong)-offset)) {
    DAT_10050554 = 0x16;
    return -1;
  }
  *(ulong *)((long)stream + 0x138) = uVar1 + offset;
  *(undefined1 *)((long)stream + 0x10) = 0;
  *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100430b0
 */

int recovered_100430b0(void *stream,longlong offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  if (origin == 0) {
    uVar1 = 0;
  }
  else if (origin == 2) {
    uVar1 = *(ulong *)((long)stream + 0x128);
    if (*(ulong *)((long)stream + 0x128) <= *(ulong *)((long)stream + 0x118)) {
      uVar1 = *(ulong *)((long)stream + 0x118);
    }
  }
  else {
    if (origin != 1) {
      DAT_10050554 = 0x16;
      return -1;
    }
    uVar1 = *(ulong *)((long)stream + 0x138);
  }
  if ((offset < 0) && (uVar1 < (ulong)-offset)) {
    DAT_10050554 = 0x16;
    return -1;
  }
  *(ulong *)((long)stream + 0x138) = uVar1 + offset;
  *(undefined1 *)((long)stream + 0x10) = 0;
  *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100430b4
 */

long recovered_100430b4(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  return *(long *)((long)stream + 0x138);
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100430e0
 */

undefined8 recovered_100430e0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x4e);
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004310c
 */

int recovered_1004310c(void *stream,longlong offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  if (origin == 0) {
    uVar1 = 0;
  }
  else if (origin == 2) {
    uVar1 = *(ulong *)((long)stream + 0x128);
    if (*(ulong *)((long)stream + 0x128) <= *(ulong *)((long)stream + 0x118)) {
      uVar1 = *(ulong *)((long)stream + 0x118);
    }
  }
  else {
    if (origin != 1) {
      DAT_10050554 = 0x16;
      return -1;
    }
    uVar1 = *(ulong *)((long)stream + 0x138);
  }
  if ((offset < 0) && (uVar1 < (ulong)-offset)) {
    DAT_10050554 = 0x16;
    return -1;
  }
  *(ulong *)((long)stream + 0x138) = uVar1 + offset;
  *(undefined1 *)((long)stream + 0x10) = 0;
  *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043110
 */

longlong recovered_10043110(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  return *(longlong *)((long)stream + 0x138);
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004313c
 */

int recovered_1004313c(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (pos == (long *)0x0) {
    DAT_10050554 = 0x16;
    return -1;
  }
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)((long)stream + 0x138);
  }
  *pos = lVar1;
  return (int)(lVar1 >> 0x3f);
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043194
 */

/* WARNING: Removing unreachable block (ram,0x10043034) */
/* WARNING: Removing unreachable block (ram,0x1004303c) */
/* WARNING: Removing unreachable block (ram,0x10043024) */
/* WARNING: Removing unreachable block (ram,0x1004302c) */
/* WARNING: Removing unreachable block (ram,0x10043050) */
/* WARNING: Removing unreachable block (ram,0x1004305c) */
/* WARNING: Removing unreachable block (ram,0x10043064) */

int recovered_10043194(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (pos == (long *)0x0) {
    DAT_10050554 = 0x16;
    return -1;
  }
  lVar1 = *pos;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
  }
  else {
    if ((-1 < lVar1) || (lVar1 == 0)) {
      *(long *)((long)stream + 0x138) = lVar1;
      *(undefined1 *)((long)stream + 0x10) = 0;
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
      return 0;
    }
    DAT_10050554 = 0x16;
  }
  return -1;
}

#undef DAT_10050554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431b8
 */

int recovered_100431b8(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (stream != (void *)0x0) {
    if (*(int *)stream != 0x54474c46) {
      return 0;
    }
    uVar1 = (uint)*(byte *)((long)stream + 0x10);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431d8
 */

undefined1 recovered_100431d8(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x54474c46) {
      return 0;
    }
    uVar1 = (undefined1)param_1[4];
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431f8
 */

int recovered_100431f8(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (stream != (void *)0x0) {
    if (*(int *)stream != 0x54474c46) {
      return 0;
    }
    uVar1 = (uint)*(byte *)((long)stream + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043218
 */

undefined1 recovered_10043218(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x54474c46) {
      return 0;
    }
    uVar1 = *(undefined1 *)((long)param_1 + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043238
 */

void recovered_10043238(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    *(undefined2 *)((long)stream + 0x10) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043254
 */

void recovered_10043254(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043270
 */

int recovered_10043270(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  return *(int *)((long)stream + 0xc);
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100432a0
 */

int recovered_100432a0(void *stream)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_11 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)((long)stream + 0x14);
    if (uVar2 == 0xffffffff) {
      uVar1 = recovered_10042d2c(&local_11,1,1,stream);
      uVar2 = (uint)local_11;
      if (uVar1 != 1) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef local_11

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define bStack_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043314
 */

int recovered_10043314(void *stream)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  bStack_11 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)((long)stream + 0x14);
    if (uVar2 == 0xffffffff) {
      uVar1 = recovered_10042d2c(&bStack_11,1,1,stream);
      uVar2 = (uint)bStack_11;
      if (uVar1 != 1) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef bStack_11

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define bStack_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043318
 */

int recovered_10043318(void *stream)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  bStack_11 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)((long)stream + 0x14);
    if (uVar2 == 0xffffffff) {
      uVar1 = recovered_10042d2c(&bStack_11,1,1,stream);
      uVar2 = (uint)bStack_11;
      if (uVar1 != 1) {
        uVar2 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)((long)stream + 0x14) = 0xffffffff;
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef bStack_11

#define local_12 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004331c
 */

int recovered_1004331c(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  uVar2 = recovered_10043354(local_12,2);
  uVar1 = 10;
  if (local_12[0] != 0) {
    uVar1 = (uint)local_12[0];
  }
  if ((int)uVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef local_12

#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_8201094c
#define DAT_8201094c (*(uint8_t *)(0x8201094cU))
#undef _DAT_8201094c
#define _DAT_8201094c (*(uint *)(0x8201094cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043354
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10043354(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10048acc(0x14c);
  if ((bVar1) && (_DAT_8201094c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100433a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201094c)(0,param_1,param_2,&DAT_1004938a,0);
    return uVar2;
  }
  return 0;
}

#undef DAT_1004938a
#undef DAT_8201094c
#undef _DAT_8201094c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100433b4
 */

int recovered_100433b4(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (ch == -1 || *(int *)stream != 0x54474c46)) {
    return -1;
  }
  *(uint *)((long)stream + 0x14) = ch & 0xff;
  *(undefined1 *)((long)stream + 0x10) = 0;
  return ch;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100433e4
 */

int recovered_100433e4(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (ch == -1 || *(int *)stream != 0x54474c46)) {
    return -1;
  }
  *(uint *)((long)stream + 0x14) = ch & 0xff;
  *(undefined1 *)((long)stream + 0x10) = 0;
  return ch;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100433e8
 */

char * recovered_100433e8(char *text,int count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;

  pcVar2 = (char *)0x0;
  if (text != (char *)0x0) {
    uVar3 = count - 1;
    if ((0 < count) && (stream != (void *)0x0)) {
      if (*(int *)stream == 0x54474c46) {
        uVar4 = 0;
        do {
          if (uVar3 == uVar4) goto LAB_1004344c;
          iVar1 = recovered_100432a0(stream);
          if (iVar1 == -1) break;
          text[uVar4] = (char)iVar1;
          uVar4 = uVar4 + 1;
        } while (iVar1 != 10);
        uVar3 = (uint)uVar4;
LAB_1004344c:
        text[(int)uVar3] = '\0';
        pcVar2 = (char *)0x0;
        if (uVar3 != 0) {
          pcVar2 = text;
        }
      }
      else {
        pcVar2 = (char *)0x0;
      }
    }
  }
  return pcVar2;
}


#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043468
 */

int recovered_10043468(int ch,void *stream)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_11 = (byte)ch;
  uVar1 = recovered_10042ed4(&local_11,1,1,stream);
  uVar2 = (uint)local_11;
  if (uVar1 != 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef local_11

#define bStack_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434a0
 */

int recovered_100434a0(int ch,void *stream)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  bStack_11 = (byte)ch;
  uVar1 = recovered_10042ed4(&bStack_11,1,1,stream);
  uVar2 = (uint)bStack_11;
  if (uVar1 != 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef bStack_11

#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#define bStack_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434a4
 */

int recovered_100434a4(int ch)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  bStack_11 = (byte)ch;
  uVar1 = recovered_10042ed4(&bStack_11,1,1,PTR_DAT_100502e0);
  uVar2 = (uint)bStack_11;
  if (uVar1 != 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef PTR_DAT_100502e0
#undef bStack_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434b0
 */

int recovered_100434b0(char *text,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong count;

  if (text == (char *)0x0) {
    count = 0;
  }
  else {
    count = recovered_10040274(text);
  }
  uVar1 = recovered_10042ed4(text,1,count,stream);
  return -(uint)(uVar1 != count);
}


#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434fc
 */

int recovered_100434fc(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100434b0(text,PTR_DAT_100502e0);
  if (iVar1 != -1) {
    iVar1 = recovered_10043468(10,PTR_DAT_100502e0);
    iVar1 = -(uint)(iVar1 == -1);
  }
  return iVar1;
}

#undef PTR_DAT_100502e0

#define acStack_1030 (*(char (*)[4096])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043534
 */

int recovered_10043534(void *stream,char *format,void *args)

{
  unsigned char frame[4192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10040e74(acStack_1030,0x1000,format,args);
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
    if (0xffe < uVar1) {
      uVar2 = 0xfff;
    }
    recovered_10042ed4(acStack_1030,1,(ulong)uVar2,stream);
  }
  return uVar1;
}

#undef acStack_1030

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_10043594(void *stream,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_10043534(stream,format,(void *)args);__builtin_va_end(args);return result;}


#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#define acStack_1030 (*(char (*)[4096])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100435b0
 */

int recovered_100435b0(char *format,void *args)

{
  unsigned char frame[4192] __attribute__((aligned(16))) = {0};

  undefined *stream;
  uint uVar1;
  uint uVar2;

  stream = PTR_DAT_100502e0;
  uVar1 = recovered_10040e74(acStack_1030,0x1000,format,args);
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
    if (0xffe < uVar1) {
      uVar2 = 0xfff;
    }
    recovered_10042ed4(acStack_1030,1,(ulong)uVar2,stream);
  }
  return uVar1;
}

#undef PTR_DAT_100502e0
#undef acStack_1030

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_100435c4(char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_100435b0(format,(void *)args);__builtin_va_end(args);return result;}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_100435e0(char *buffer,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_100435f0(char *buffer,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);__builtin_va_end(args);return result;}


#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#define local_70 (*(long * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004360c
 */

int recovered_1004360c(char *buffer,char *format,void *args)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte *pbVar11;
  byte *extraout_x0 = 0;
  long extraout_x0_00;
  byte *extraout_x0_01 = 0;
  int iVar13;
  uint uVar12;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  long lVar19;
  int iVar20;
  byte *pbVar21;

  pbVar11 = &DAT_1004938a;
  if (buffer != (char *)0x0) {
    pbVar11 = (byte *)buffer;
  }
  pbVar21 = &DAT_1004938a;
  if (format != (char *)0x0) {
    pbVar21 = (byte *)format;
  }
  local_70 = args;
  iVar2 = 0;
LAB_10043668:
  while( true ) {
    while( true ) {
      while( true ) {
        iVar13 = iVar2;
        bVar3 = *pbVar21;
        uVar12 = (uint)bVar3;
        iVar2 = iVar13;
        if ((4 < bVar3 - 9) && (bVar3 != 0x20)) break;
        while ((uVar12 < 0x21 && ((1L << ((ulong)uVar12 & 0x3f) & 0x100003e00U) != 0))) {
          pbVar21 = pbVar21 + 1;
          uVar12 = (uint)*pbVar21;
        }
        recovered_10043ae8(pbVar11);
        pbVar11 = extraout_x0;
      }
      if (uVar12 == 0x25) break;
      if (uVar12 == 0) {
        return iVar13;
      }
      if (*pbVar11 != uVar12) {
        return iVar13;
      }
      pbVar11 = pbVar11 + 1;
      pbVar21 = pbVar21 + 1;
    }
    bVar3 = pbVar21[1];
    if (bVar3 != 0x25) break;
    if (*pbVar11 != 0x25) {
      return iVar13;
    }
    pbVar11 = pbVar11 + 1;
    pbVar21 = pbVar21 + 2;
  }
  uVar15 = 0;
  lVar19 = 1;
  if (bVar3 == 0x2a) {
    lVar19 = 2;
  }
  pbVar14 = pbVar21 + lVar19;
  while( true ) {
    pbVar1 = pbVar14 + 1;
    bVar5 = *pbVar14;
    uVar12 = bVar5 - 0x30U;
    if (9 < uVar12) break;
    uVar15 = uVar15 * 10 + (ulong)(byte)uVar12;
    pbVar14 = pbVar1;
  }
  if (uVar15 == 0) {
    uVar15 = 0xffffffffffffffff;
  }
  if (bVar5 == 0x68) {
    bVar10 = *pbVar1 == 0x68;
    uVar18 = 1;
    if (bVar10) {
      uVar18 = 2;
    }
LAB_10043778:
    pbVar21 = pbVar14 + 2;
    if (!bVar10) {
      pbVar21 = pbVar1;
    }
  }
  else {
    if (bVar5 == 0x6c) {
      bVar10 = *pbVar1 == 0x6c;
      uVar18 = 3;
      if (bVar10) {
        uVar18 = 4;
      }
      goto LAB_10043778;
    }
    uVar18 = 5;
    pbVar21 = pbVar1;
    if (bVar5 != 0x7a) {
      uVar18 = 0;
      pbVar21 = pbVar14;
    }
  }
  bVar5 = *pbVar21;
  if (bVar5 != 0) {
    pbVar21 = pbVar21 + 1;
  }
  switch((uintptr_t)(bVar5)) {
  case 0x6f:
  case 0x75:
  case 0x78:
switchD_100437ac_caseD_6f:
    recovered_10043ae8(pbVar11);
    bVar4 = *extraout_x0_01;
    if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
      bVar10 = bVar4 != 0x2d;
      pbVar14 = extraout_x0_01 + 1;
      uVar15 = uVar15 - 1;
    }
    else {
      bVar10 = true;
      pbVar14 = extraout_x0_01;
    }
    if ((bVar5 == 0x58) || (bVar5 == 0x78)) {
LAB_1004385c:
      if (((uVar15 < 2) || (*pbVar14 != 0x30)) || ((pbVar14[1] | 0x20) != 0x78)) {
        uVar12 = 0x10;
      }
      else {
        pbVar14 = pbVar14 + 2;
        uVar12 = 0x10;
        uVar15 = uVar15 - 2;
      }
    }
    else if (bVar5 == 0x6f) {
LAB_10043898:
      uVar12 = 8;
    }
    else {
      if (bVar5 == 0x69) {
        if (uVar15 < 2) {
          if (uVar15 != 0) {
            uVar12 = 8;
            if (*pbVar14 != 0x30) {
              uVar12 = 10;
            }
            uVar15 = 1;
            goto LAB_100438c0;
          }
        }
        else if (*pbVar14 == 0x30) {
          if ((pbVar14[1] | 0x20) == 0x78) {
            pbVar14 = pbVar14 + 2;
            uVar15 = uVar15 - 2;
            goto LAB_1004385c;
          }
          goto LAB_10043898;
        }
      }
      uVar12 = 10;
    }
LAB_100438c0:
    lVar19 = 0;
    pbVar11 = pbVar14 + uVar15;
    bVar9 = true;
    bVar8 = true;
    while( true ) {
      if (uVar15 == 0) break;
      bVar4 = *pbVar14;
      if ((char)bVar4 == 0) {
LAB_1004392c:
        pbVar11 = pbVar14;
        bVar8 = bVar9;
        break;
      }
      uVar6 = (int)(char)bVar4 - 0x30U;
      iVar20 = (int)(char)bVar4;
      uVar7 = iVar20 - 0x37;
      if (5 < iVar20 - 0x41U) {
        uVar7 = 0xffffffff;
      }
      if (iVar20 - 0x61U < 6) {
        uVar7 = iVar20 - 0x57;
      }
      if (uVar6 < 10) {
        uVar7 = uVar6;
      }
      if (uVar12 <= uVar7) goto LAB_1004392c;
      bVar9 = false;
      bVar8 = false;
      lVar19 = lVar19 * (ulong)uVar12 + (ulong)uVar7;
      pbVar14 = pbVar14 + 1;
      uVar15 = uVar15 - 1;
    }
    if ((bool)(bVar3 == 0x2a | bVar8)) {
      if (bVar8) {
        return iVar13;
      }
      goto LAB_10043668;
    }
    if ((bVar5 == 0x69) || (bVar5 == 100)) {
      lVar17 = -lVar19;
      if (bVar10) {
        lVar17 = lVar19;
      }
      switch((uintptr_t)(uVar18)) {
      case 1:
        *(short *)*local_70 = (short)lVar17;
        break;
      case 2:
        *(char *)*local_70 = (char)lVar17;
        break;
      case 3:
      case 4:
      case 5:
        *(long *)*local_70 = lVar17;
        break;
      default:
        *(int *)*local_70 = (int)lVar17;
      }
    }
    else {
      switch((uintptr_t)(uVar18)) {
      case 1:
        *(short *)*local_70 = (short)lVar19;
        break;
      case 2:
        *(char *)*local_70 = (char)lVar19;
        break;
      case 3:
      case 4:
      case 5:
        *(long *)*local_70 = lVar19;
        break;
      default:
        *(int *)*local_70 = (int)lVar19;
      }
    }
    break;
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x76:
  case 0x77:
    goto switchD_100437ac_caseD_70;
  case 0x73:
    recovered_10043ae8(pbVar11);
    if (bVar3 == 0x2a) {
      lVar19 = 0;
    }
    else {
      lVar19 = *local_70;
      local_70 = local_70 + 1;
    }
    for (uVar16 = 0; uVar15 != uVar16; uVar16 = uVar16 + 1) {
      bVar3 = *(byte *)(extraout_x0_00 + uVar16);
      if (bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100003e01U) != 0) {
        uVar15 = uVar16;
        if (uVar16 == 0) {
          return iVar13;
        }
        break;
      }
      if (lVar19 != 0) {
        *(byte *)(lVar19 + uVar16) = bVar3;
      }
    }
    pbVar11 = (byte *)(extraout_x0_00 + uVar16);
    if (lVar19 == 0) goto LAB_10043668;
    *(undefined1 *)(lVar19 + uVar15) = 0;
    break;
  default:
    if (((bVar5 == 0x58) || (bVar5 == 100)) || (bVar5 == 0x69)) goto switchD_100437ac_caseD_6f;
    if (bVar5 == 99) goto code_r0x100439f0;
    goto switchD_100437ac_caseD_70;
  }
  iVar2 = iVar13 + 1;
  goto LAB_10043668;
code_r0x100439f0:
  if (bVar3 == 0x2a) {
    lVar19 = 0;
  }
  else {
    lVar19 = *local_70;
    local_70 = local_70 + 1;
  }
  lVar17 = 0;
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    if (*pbVar11 == 0) goto LAB_10043a8c;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + lVar17) = *pbVar11;
    }
    lVar17 = lVar17 + 1;
    pbVar11 = pbVar11 + 1;
  }
  lVar17 = 1;
LAB_10043a8c:
  if (lVar19 != 0) {
    iVar2 = iVar13 + 1;
  }
  if (lVar17 == 0) {
switchD_100437ac_caseD_70:
    return iVar13;
  }
  goto LAB_10043668;
}

#undef DAT_1004938a
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043ae8
 */

void recovered_10043ae8(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; *param_1 < 0x21 && (1L << ((ulong)*param_1 & 0x3f) & 0x100003e00U) != 0;
      param_1 = param_1 + 1) {
  }
  return;
}


#define uStack0000000000000000 (*(undefined1 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b18
 */

int recovered_10043b18(char *buffer,char *format,...)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1004360c(buffer,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b34
 */

int recovered_10043b34(void *stream,char *buffer,int mode,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return -1;
  }
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b60
 */

void recovered_10043b60(void *stream,char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    DAT_10050554 = 9;
  }
  return;
}

#undef DAT_10050554

#undef DAT_1004acf7
#define DAT_1004acf7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca7U)))
#undef DAT_10050554
#define DAT_10050554 (*(int *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#define auStack_a0 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b88
 */

void recovered_10043b88(char *prefix)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  char *text;

  if ((prefix != (char *)0x0) && (*prefix != '\0')) {
    recovered_100434b0(prefix,PTR_DAT_10050428);
    recovered_100434b0(&DAT_1004acf7,PTR_DAT_10050428);
  }
  text = recovered_10043be8(DAT_10050554);
  recovered_100434b0(text,PTR_DAT_10050428);
  recovered_10042ed4(auStack_a0 + 0x8f,1,1,PTR_DAT_10050428);
  return;
}

#undef DAT_1004acf7
#undef DAT_10050554
#undef PTR_DAT_10050428
#undef auStack_a0

#undef str_1004ae12
#define str_1004ae12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dc2U)))
#undef str_1004ae1b
#define str_1004ae1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dcbU)))
#undef str_1004ae33
#define str_1004ae33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1de3U)))
#undef str_1004ae4d
#define str_1004ae4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dfdU)))
#undef str_1004ae5d
#define str_1004ae5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0dU)))
#undef str_1004ae75
#define str_1004ae75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e25U)))
#undef str_1004ae88
#define str_1004ae88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e38U)))
#undef str_1004ae9c
#define str_1004ae9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4cU)))
#undef str_1004aebd
#define str_1004aebd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e6dU)))
#undef str_1004aed4
#define str_1004aed4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e84U)))
#undef str_1004aee6
#define str_1004aee6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e96U)))
#undef str_1004aef2
#define str_1004aef2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ea2U)))
#undef str_1004af02
#define str_1004af02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eb2U)))
#undef str_1004af11
#define str_1004af11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ec1U)))
#undef str_1004af22
#define str_1004af22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ed2U)))
#undef str_1004af36
#define str_1004af36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ee6U)))
#undef str_1004af4e
#define str_1004af4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1efeU)))
#undef str_1004af5a
#define str_1004af5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0aU)))
#undef str_1004af6b
#define str_1004af6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f1bU)))
#undef str_1004af7e
#define str_1004af7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f2eU)))
#undef str_1004af97
#define str_1004af97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f47U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043be8
 */

char * recovered_10043be8(int error_number)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(error_number)) {
  case 0:
    return str_1004ae12;
  case 1:
    return str_1004ae1b;
  case 2:
    return str_1004ae33;
  case 3:
    return str_1004ae4d;
  case 4:
    return str_1004ae5d;
  case 5:
    return str_1004ae75;
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
    goto switchD_10043c14_caseD_6;
  case 9:
    return str_1004ae88;
  case 0xb:
    return str_1004ae9c;
  case 0xc:
    return str_1004aebd;
  case 0xd:
    return str_1004aed4;
  case 0x11:
    return str_1004aee6;
  case 0x14:
    return str_1004aef2;
  case 0x15:
    return str_1004af02;
  case 0x16:
    return str_1004af11;
  case 0x18:
    return str_1004af22;
  case 0x1c:
    return str_1004af36;
  case 0x20:
    return str_1004af4e;
  case 0x22:
    return str_1004af5a;
  default:
    if (error_number == 0x3f) {
      return str_1004af6b;
    }
    if (error_number == 0x4e) {
      return str_1004af7e;
    }
switchD_10043c14_caseD_6:
    return str_1004af97;
  }
}

#undef str_1004ae12
#undef str_1004ae1b
#undef str_1004ae33
#undef str_1004ae4d
#undef str_1004ae5d
#undef str_1004ae75
#undef str_1004ae88
#undef str_1004ae9c
#undef str_1004aebd
#undef str_1004aed4
#undef str_1004aee6
#undef str_1004aef2
#undef str_1004af02
#undef str_1004af11
#undef str_1004af22
#undef str_1004af36
#undef str_1004af4e
#undef str_1004af5a
#undef str_1004af6b
#undef str_1004af7e
#undef str_1004af97

#undef DAT_10051434
#define DAT_10051434 (*(uint *)(((uintptr_t)pf_module_state + 0x83e4U)))
#undef str_1004acfa
#define str_1004acfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1caaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043d18
 */

char * recovered_10043d18(char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *buffer_00;

  DAT_10051434 = DAT_10051434 + 1;
  buffer_00 = (char *)((uintptr_t)pf_module_state + 0x8420U);
  if (buffer != (char *)0x0) {
    buffer_00 = buffer;
  }
  pf_varargs_100414cc_1(buffer_00,0x20,str_1004acfa,(ulong)DAT_10051434);
  return buffer_00;
}

#undef DAT_10051434
#undef str_1004acfa

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108d4
#define DAT_820108d4 (*(uint8_t *)(0x820108d4U))
#undef UNK_8201083c
#define UNK_8201083c (*(uint *)(0x8201083cU))
#undef _DAT_820108d4
#define _DAT_820108d4 (*(uint *)(0x820108d4U))
#undef uRam000000008201083c
#define uRam000000008201083c (*(uint32_t *)(0x8201083cU))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043d68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043d68(char *path)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if (((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
     (uVar5 = recovered_10048a4c((long)puVar4,path,acStack_129), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xd4);
    if (bVar2) {
      if (_DAT_820108d4 == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108d4)(uVar1,acStack_129);
    }
    else {
      bVar2 = recovered_10048acc(0x3c);
      if (!bVar2) {
        DAT_10050554 = 2;
        return -1;
      }
      if (uRam000000008201083c == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)uRam000000008201083c)(acStack_129);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 2;
  return -1;
}

#undef DAT_10050554
#undef DAT_820108d4
#undef UNK_8201083c
#undef _DAT_820108d4
#undef uRam000000008201083c
#undef acStack_129

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108d4
#define DAT_820108d4 (*(uint8_t *)(0x820108d4U))
#undef UNK_8201083c
#define UNK_8201083c (*(uint *)(0x8201083cU))
#undef _DAT_820108d4
#define _DAT_820108d4 (*(uint *)(0x820108d4U))
#undef uRam000000008201083c
#define uRam000000008201083c (*(uint32_t *)(0x8201083cU))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043d6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043d6c(char *path)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if (((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
     (uVar5 = recovered_10048a4c((long)puVar4,path,acStack_129), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xd4);
    if (bVar2) {
      if (_DAT_820108d4 == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108d4)(uVar1,acStack_129);
    }
    else {
      bVar2 = recovered_10048acc(0x3c);
      if (!bVar2) {
        DAT_10050554 = 2;
        return -1;
      }
      if (uRam000000008201083c == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)uRam000000008201083c)(acStack_129);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 2;
  return -1;
}

#undef DAT_10050554
#undef DAT_820108d4
#undef UNK_8201083c
#undef _DAT_820108d4
#undef uRam000000008201083c
#undef acStack_129

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108d4
#define DAT_820108d4 (*(uint8_t *)(0x820108d4U))
#undef UNK_8201083c
#define UNK_8201083c (*(uint *)(0x8201083cU))
#undef _DAT_820108d4
#define _DAT_820108d4 (*(uint *)(0x820108d4U))
#undef uRam000000008201083c
#define uRam000000008201083c (*(uint32_t *)(0x8201083cU))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043e10(char *path)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if (((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
     (uVar5 = recovered_10048a4c((long)puVar4,path,acStack_129), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xd4);
    if (bVar2) {
      if (_DAT_820108d4 == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108d4)(uVar1,acStack_129);
    }
    else {
      bVar2 = recovered_10048acc(0x3c);
      if (!bVar2) {
        DAT_10050554 = 2;
        return -1;
      }
      if (uRam000000008201083c == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)uRam000000008201083c)(acStack_129);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 2;
  return -1;
}

#undef DAT_10050554
#undef DAT_820108d4
#undef UNK_8201083c
#undef _DAT_820108d4
#undef uRam000000008201083c
#undef acStack_129

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108d8
#define DAT_820108d8 (*(uint8_t *)(0x820108d8U))
#undef UNK_82010888
#define UNK_82010888 (*(uint *)(0x82010888U))
#undef _DAT_820108d8
#define _DAT_820108d8 (*(uint *)(0x820108d8U))
#undef uRam0000000082010888
#define uRam0000000082010888 (*(uint32_t *)(0x82010888U))
#define acStack_129 (*(char (*)[249])(frame + 279))
#define acStack_222 (*(char (*)[249])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043e14
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043e14(char *oldPath,char *newPath)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if ((((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
      (uVar5 = recovered_10048a4c((long)puVar4,oldPath,acStack_129), (int)uVar5 != 0)) &&
     (uVar5 = recovered_10048a4c((long)puVar4,newPath,acStack_222), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xd8);
    if (bVar2) {
      if (_DAT_820108d8 == 0) {
        DAT_10050554 = 5;
        return -1;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108d8)(uVar1,acStack_129,acStack_222);
    }
    else {
      bVar2 = recovered_10048acc(0x88);
      if (!bVar2) {
        DAT_10050554 = 5;
        return -1;
      }
      if (uRam0000000082010888 == 0) {
        DAT_10050554 = 5;
        return -1;
      }
      iVar3 = (*(code *)(ulong)uRam0000000082010888)(acStack_129,acStack_222);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 5;
  return -1;
}

#undef DAT_10050554
#undef DAT_820108d8
#undef UNK_82010888
#undef _DAT_820108d8
#undef uRam0000000082010888
#undef acStack_129
#undef acStack_222

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108d8
#define DAT_820108d8 (*(uint8_t *)(0x820108d8U))
#undef UNK_82010888
#define UNK_82010888 (*(uint *)(0x82010888U))
#undef _DAT_820108d8
#define _DAT_820108d8 (*(uint *)(0x820108d8U))
#undef uRam0000000082010888
#define uRam0000000082010888 (*(uint32_t *)(0x82010888U))
#define acStack_129 (*(char (*)[249])(frame + 279))
#define acStack_222 (*(char (*)[249])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043ee8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043ee8(char *oldPath,char *newPath)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if ((((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
      (uVar5 = recovered_10048a4c((long)puVar4,oldPath,acStack_129), (int)uVar5 != 0)) &&
     (uVar5 = recovered_10048a4c((long)puVar4,newPath,acStack_222), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xd8);
    if (bVar2) {
      if (_DAT_820108d8 == 0) {
        DAT_10050554 = 5;
        return -1;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108d8)(uVar1,acStack_129,acStack_222);
    }
    else {
      bVar2 = recovered_10048acc(0x88);
      if (!bVar2) {
        DAT_10050554 = 5;
        return -1;
      }
      if (uRam0000000082010888 == 0) {
        DAT_10050554 = 5;
        return -1;
      }
      iVar3 = (*(code *)(ulong)uRam0000000082010888)(acStack_129,acStack_222);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 5;
  return -1;
}

#undef DAT_10050554
#undef DAT_820108d8
#undef UNK_82010888
#undef _DAT_820108d8
#undef uRam0000000082010888
#undef acStack_129
#undef acStack_222

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10049d8f
#define DAT_10049d8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3fU)))
#undef DAT_1004ad0c
#define DAT_1004ad0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbcU)))
#undef DAT_1004ad0f
#define DAT_1004ad0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbfU)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_24 (*(char (*)[4])(frame + 204))
#define auStack_d8 (*(undefined1 (*)[180])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043eec
 */

undefined4 recovered_10043eec(long param_1,uint param_2)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined *vararg0;
  undefined8 uVar2;
  void *pvVar3;

  if ((((param_2 ^ 0xffffffff) & 0xa00) == 0) &&
     (uVar2 = recovered_10043fcc(param_1,(long)auStack_d8), (int)uVar2 == 0)) {
    DAT_10050554 = 0x11;
  }
  else {
    puVar1 = (undefined *)((uintptr_t)pf_module_state + 0x1cc5U);
    if ((param_2 & 8) != 0) {
      puVar1 = &DAT_10049d8f;
    }
    vararg0 = (undefined *)((uintptr_t)pf_module_state + 0x1cc7U);
    if ((param_2 & 1) != 0) {
      vararg0 = puVar1;
    }
    puVar1 = (undefined *)((uintptr_t)pf_module_state + 0x1cc2U);
    if ((param_2 & 0x400) != 0) {
      puVar1 = &DAT_1004ad0f;
    }
    if ((param_2 & 8) != 0) {
      puVar1 = &DAT_1004ad0c;
    }
    if ((param_2 & 2) != 0) {
      vararg0 = puVar1;
    }
    pf_varargs_100414cc_1(acStack_24,4,&DAT_10049050,(ulonglong)vararg0);
    pvVar3 = recovered_1004225c((char *)param_1,acStack_24);
    if (pvVar3 != (void *)0x0) {
      return *(undefined4 *)((long)pvVar3 + 0xc);
    }
  }
  return 0xffffffff;
}

#undef DAT_10049050
#undef DAT_10049d8f
#undef DAT_1004ad0c
#undef DAT_1004ad0f
#undef DAT_10050554
#undef acStack_24
#undef auStack_d8

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define auStack_3c (*(undefined1 (*)[4])(frame + 20))
#define uStack_38 (*(uint *)(frame + 24))
#define uStack_40 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043fcc
 */

undefined8 recovered_10043fcc(long param_1,long param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;

  puVar1 = recovered_10042468();
  uStack_40 = 0;
  if (((param_2 == 0) || (param_1 == 0)) || (puVar1 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
LAB_10044030:
    uVar3 = 0xffffffff;
  }
  else {
    recovered_1003ffa0(auStack_3c,0,0xc);
    uVar2 = recovered_10044558((long)puVar1,(char *)param_1,(long)auStack_3c);
    if ((int)uVar2 == 0) {
      uVar2 = recovered_1004469c((long)puVar1,(char *)param_1,0,0,&uStack_40);
      if ((int)uVar2 == 0) {
        DAT_10050554 = 2;
        goto LAB_10044030;
      }
      uStack_38 = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    recovered_100445fc(param_2,uStack_38,iVar4);
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_10050554
#undef auStack_3c
#undef uStack_38
#undef uStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044084
 */

void recovered_10044084(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10043eec(param_1,0x601);
  return;
}


#undef DAT_1004b137
#define DAT_1004b137 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20e7U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051450
#define DAT_10051450 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8400U)))
#undef DAT_10051458
#define DAT_10051458 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8408U)))
#undef DAT_10051808
#define DAT_10051808 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87b8U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
#define auStack_24f (*(undefined1 (*)[511])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100440a4
 */

ulong recovered_100440a4(uint param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  ulong count;
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *stream;
  ulong uVar4;

  if (((0x1f < param_1) || (stream = (int *)(&PTR_DAT_10050450)[param_1], stream == (int *)0x0)) ||
     (*stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffffffffffff;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  if (stream == (int *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *stream != 0x54474c46;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (bVar1) {
    return 0;
  }
  if (stream[1] != 1) {
    if ((param_3 != 0) && (stream[5] != -1)) {
      *param_2 = (char)stream[5];
      stream[5] = -1;
      uVar3 = recovered_10042d2c(param_2 + 1,1,param_3 - 1,stream);
      return (uVar3 + 1) / 1;
    }
    uVar4 = *(ulong *)(stream + 0x4e);
    uVar3 = *(ulong *)(stream + 0x46) - uVar4;
    if (*(ulong *)(stream + 0x46) < uVar4 || uVar3 == 0) {
      *(undefined1 *)(stream + 4) = 1;
      return 0;
    }
    count = uVar3;
    if (param_3 <= uVar3) {
      count = param_3;
    }
    recovered_1003fdb4(param_2,(void *)(*(long *)(stream + 0x44) + uVar4),count);
    *(ulong *)(stream + 0x4e) = *(long *)(stream + 0x4e) + count;
    if (uVar3 < param_3) {
      *(undefined1 *)(stream + 4) = 1;
    }
    return count / 1;
  }
  if (param_3 != 0) {
    if (DAT_10051458 <= DAT_10051450) {
      auStack_24f[0] = 0;
      uVar2 = recovered_10043354(auStack_24f,0x1ff);
      if ((int)uVar2 == 0) {
        return 0;
      }
      pf_varargs_100414cc_1(&DAT_10051808,0x200,&DAT_1004b137,(ulonglong)auStack_24f);
      DAT_10051450 = 0;
      DAT_10051458 = recovered_10040274(&DAT_10051808);
    }
    uVar3 = DAT_10051458 - DAT_10051450;
    if (param_3 <= DAT_10051458 - DAT_10051450) {
      uVar3 = param_3;
    }
    recovered_1003fdb4(param_2,&DAT_10051808 + DAT_10051450,uVar3);
    DAT_10051450 = DAT_10051450 + uVar3;
    if (0 < (long)uVar3) {
      return uVar3 / 1;
    }
  }
  return 0;
}

#undef DAT_1004b137
#undef DAT_10050554
#undef DAT_10051450
#undef DAT_10051458
#undef DAT_10051808
#undef PTR_DAT_10050450
#undef auStack_24f

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
#undef UNK_82010948
#define UNK_82010948 (*(uint *)(0x82010948U))
#undef uRam0000000082010948
#define uRam0000000082010948 (*(uint32_t *)(0x82010948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100440f0
 */

ulong recovered_100440f0(uint param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 uVar5;

  if (((0x1f < param_1) || (piVar4 = (int *)(&PTR_DAT_10050450)[param_1], piVar4 == (int *)0x0)) ||
     (*piVar4 != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffffffffffff;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    if (piVar4 == (int *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = *piVar4 != 0x54474c46;
    }
    uVar2 = 0;
    if ((param_3 != 0) && (!bVar1)) {
      if ((piVar4[1] & 0xfffffffeU) == 2) {
        uVar5 = 1;
        if (piVar4[1] == 3) {
          uVar5 = 2;
        }
        bVar1 = recovered_10048acc(0x148);
        if ((bVar1) && (uRam0000000082010948 != 0)) {
          uVar2 = (*(code *)(ulong)uRam0000000082010948)(uVar5,param_2,param_3);
          uVar2 = uVar2 & 0xffffffff;
        }
        else {
          uVar2 = 0;
        }
        uVar2 = uVar2 / 1;
      }
      else if ((*(byte *)(piVar4 + 2) >> 1 & 1) == 0) {
        *(undefined1 *)((long)piVar4 + 0x11) = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = *(long *)(piVar4 + 0x4e) + param_3;
        uVar3 = recovered_10042944((long)piVar4,uVar2);
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
          DAT_10050554 = 0xc;
        }
        else {
          recovered_1003fdb4((void *)(*(long *)(piVar4 + 0x48) + *(long *)(piVar4 + 0x4e)),
                             (void *)param_2,param_3);
          *(ulong *)(piVar4 + 0x4e) = uVar2;
          if (*(ulong *)(piVar4 + 0x4a) < uVar2) {
            *(ulong *)(piVar4 + 0x4a) = uVar2;
          }
          *(undefined1 *)((long)piVar4 + 0x12) = 1;
          uVar2 = param_3;
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef PTR_DAT_10050450
#undef UNK_82010948
#undef uRam0000000082010948

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050198
#define PTR_DAT_10050198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7148U)))
#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004413c
 */

ulong recovered_1004413c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *stream;
  ulong uVar2;

  if (((0x1f < param_1) || (stream = (int *)(&PTR_DAT_10050450)[param_1], stream == (int *)0x0)) ||
     (*stream != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffff;
  }
  if ((stream == (int *)0x0) || (*stream != 0x54474c46)) {
    DAT_10050554 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = recovered_10042ba8(stream);
    uVar2 = (ulong)uVar1;
    if ((uint)stream[3] < 0x20) {
      (&PTR_DAT_10050450)[(uint)stream[3]] = (undefined *)0x0;
    }
    if (((int *)PTR_DAT_10050198 != stream && (int *)PTR_DAT_100502e0 != stream) &&
        (int *)PTR_DAT_10050428 != stream) {
      recovered_1003fd24(*(void **)(stream + 0x48));
      recovered_1003ffa0(stream,0,0x140);
      recovered_1003fd24(stream);
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef PTR_DAT_10050198
#undef PTR_DAT_100502e0
#undef PTR_DAT_10050428
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004417c
 */

undefined8 recovered_1004417c(uint param_1,long in_x1,int in_w2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *stream;

  if (0x1f < param_1) {
    return 0xffffffffffffffff;
  }
  stream = (int *)(&PTR_DAT_10050450)[param_1];
  if (((stream != (int *)0x0) && (*stream == 0x54474c46)) &&
     (iVar1 = recovered_1004300c(stream,in_x1,in_w2), iVar1 == 0)) {
    if (*stream == 0x54474c46) {
      return *(undefined8 *)(stream + 0x4e);
    }
    DAT_10050554 = 9;
  }
  return 0xffffffffffffffff;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100441f4
 */

undefined4 recovered_100441f4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined *pointer;
  long lVar2;

  if (((param_1 < 0x20) && (piVar1 = (int *)(&PTR_DAT_10050450)[param_1], piVar1 != (int *)0x0)) &&
     (*piVar1 == 0x54474c46)) {
    pointer = (undefined *)recovered_1004427c(piVar1);
    if (pointer == (undefined *)0x0) {
      DAT_10050554 = 0xc;
    }
    else {
      lVar2 = recovered_100429b0(pointer);
      if (-1 < (int)lVar2) {
        return *(undefined4 *)(pointer + 0xc);
      }
      recovered_1003fd24(*(void **)(pointer + 0x120));
      recovered_1003fd24(pointer);
      DAT_10050554 = 0x18;
    }
  }
  else {
    DAT_10050554 = 9;
  }
  return 0xffffffff;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004427c
 */

long recovered_1004427c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  void *destination_00;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    destination = recovered_1003fce0(0x140);
    if (destination == (void *)0x0) {
      return 0;
    }
    recovered_1003fdb4(destination,param_1,0x140);
    *(undefined4 *)((long)destination + 0xc) = 0xffffffff;
    if (*(long *)(param_1 + 0x48) == 0) {
      return (long)destination;
    }
    if (*(ulong *)(param_1 + 0x4c) == 0) {
      return (long)destination;
    }
    destination_00 = recovered_1003fce0(*(ulong *)(param_1 + 0x4c));
    *(void **)((long)destination + 0x120) = destination_00;
    if (destination_00 != (void *)0x0) {
      recovered_1003fdb4(destination_00,*(void **)(param_1 + 0x48),*(ulong *)(param_1 + 0x4c));
      return (long)destination;
    }
    recovered_1003fd24(destination);
  }
  return 0;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044300
 */

ulong recovered_10044300(ulong param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  uint uVar2;
  int *piVar3;

  uVar2 = (uint)param_2;
  if ((((uint)param_1 < 0x20) &&
      (piVar3 = (int *)(&PTR_DAT_10050450)[param_1 & 0xffffffff], piVar3 != (int *)0x0)) &&
     (uVar2 < 0x20 && *piVar3 == 0x54474c46)) {
    if ((uint)param_1 == uVar2) {
      return param_1;
    }
    if (uVar2 < 3) {
      (&PTR_DAT_10050450)[param_2 & 0xffffffff] = (undefined *)piVar3;
      goto LAB_10044354;
    }
    if ((&PTR_DAT_10050450)[param_2 & 0xffffffff] != (undefined *)0x0) {
      recovered_1004413c(uVar2);
    }
    puVar1 = (undefined *)recovered_1004427c(piVar3);
    if (puVar1 != (undefined *)0x0) {
      *(uint *)(puVar1 + 0xc) = uVar2;
      (&PTR_DAT_10050450)[param_2 & 0xffffffff] = puVar1;
      goto LAB_10044354;
    }
    DAT_10050554 = 0xc;
  }
  else {
    DAT_10050554 = 9;
  }
  param_2 = 0xffffffff;
LAB_10044354:
  return param_2;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100443b0
 */

undefined8 recovered_100443b0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0xffffffffffffffff;
  }
  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100443d0
 */

undefined8 recovered_100443d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x2f;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100443e4
 */

undefined8 recovered_100443e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100443f8
 */

undefined8 recovered_100443f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004440c
 */

undefined8 recovered_1004440c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044420
 */

undefined8 recovered_10044420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044434
 */

undefined8 recovered_10044434(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044448
 */

undefined8 recovered_10044448(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004445c
 */

undefined8 recovered_1004445c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044470
 */

undefined8 recovered_10044470(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044484
 */

ulong recovered_10044484(ulong param_1,undefined4 param_2,long in_stack_00000000)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int *piVar3;

  if (((0x1f < (uint)param_1) ||
      (piVar3 = (int *)(&PTR_DAT_10050450)[param_1 & 0xffffffff], piVar3 == (int *)0x0)) ||
     (*piVar3 != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffff;
  }
  uVar2 = 0;
  switch((uintptr_t)(param_2)) {
  case 0:
    uVar1 = recovered_100441f4((uint)param_1);
    uVar2 = (ulong)uVar1;
    break;
  case 1:
  case 2:
  case 4:
  case 8:
  case 9:
    break;
  case 3:
    uVar2 = (ulong)(piVar3[2] & 2);
    break;
  case 7:
    if (in_stack_00000000 != 0) {
      *(undefined2 *)(in_stack_00000000 + 0x14) = 2;
      *(undefined4 *)(in_stack_00000000 + 0x10) = 0;
      return 0;
    }
  default:
    DAT_10050554 = 0x16;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_820108c8
#define DAT_820108c8 (*(uint8_t *)(0x820108c8U))
#undef UNK_82010834
#define UNK_82010834 (*(uint *)(0x82010834U))
#undef _DAT_820108c8
#define _DAT_820108c8 (*(uint *)(0x820108c8U))
#undef uRam0000000082010834
#define uRam0000000082010834 (*(uint32_t *)(0x82010834U))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044558
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10044558(long param_1,char *param_2,long param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;

  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) < 0) {
    return 0;
  }
  uVar3 = recovered_10048a4c(param_1,param_2,acStack_129);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  bVar2 = recovered_10048acc(200);
  if (bVar2) {
    if (_DAT_820108c8 != 0) {
      uVar3 = (*(code *)(ulong)_DAT_820108c8)(uVar1,acStack_129,param_3);
      return uVar3;
    }
  }
  else {
    bVar2 = recovered_10048acc(0x34);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010834 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010834)(acStack_129,param_3);
      return uVar3;
    }
  }
  return 0;
}

#undef DAT_820108c8
#undef UNK_82010834
#undef _DAT_820108c8
#undef uRam0000000082010834
#undef acStack_129

#undef DAT_1004b1d8
#define DAT_1004b1d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2188U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100445fc
 */

void recovered_100445fc(long param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  recovered_1003ffa0((void *)param_1,0,0xb0);
  uVar1 = 0x41ed;
  if (param_3 == 0) {
    uVar1 = 0x81a4;
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = DAT_1004b1d8;
  *(undefined4 *)(param_1 + 0x14) = 1000;
  *(ulong *)(param_1 + 0x20) = (ulong)param_2;
  *(undefined4 *)(param_1 + 0x28) = 0x1000;
  *(ulong *)(param_1 + 0x30) = (ulong)(param_2 + 0x1ff >> 9);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x70);
  return;
}

#undef DAT_1004b1d8

#undef DAT_820108cc
#define DAT_820108cc (*(uint8_t *)(0x820108ccU))
#undef UNK_82010884
#define UNK_82010884 (*(uint *)(0x82010884U))
#undef _DAT_820108cc
#define _DAT_820108cc (*(uint *)(0x820108ccU))
#undef uRam0000000082010884
#define uRam0000000082010884 (*(uint32_t *)(0x82010884U))
#define acStack_161 (*(char (*)[257])(frame + 31))
#define local_168 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004469c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1004469c(long param_1,char *param_2,long param_3,undefined8 param_4,uint *param_5)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong count;
  uint uVar8;
  void *source;
  char *left;
  char *text;
  ulong uVar9;

  local_168 = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
LAB_10044860:
    uVar7 = 0;
  }
  else {
    uVar7 = recovered_10048a4c(param_1,param_2,acStack_161);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    puVar2 = &local_168;
    if (param_5 != (uint *)0x0) {
      puVar2 = param_5;
    }
    bVar5 = recovered_10048acc(0xcc);
    if (bVar5) {
      if (_DAT_820108cc == 0) goto LAB_10044860;
      uVar7 = (*(code *)(ulong)_DAT_820108cc)(uVar3,acStack_161,param_3,param_4,puVar2);
      iVar6 = (int)uVar7;
    }
    else {
      bVar5 = recovered_10048acc(0x84);
      if (!bVar5) {
        return (ulong)bVar5;
      }
      if (uRam0000000082010884 == 0) goto LAB_10044860;
      uVar7 = (*(code *)(ulong)uRam0000000082010884)(acStack_161,param_3,param_4,puVar2);
      iVar6 = (int)uVar7;
    }
    if (((iVar6 != 0) && (uVar7 = 1, param_3 != 0)) && (uVar8 = (uint)param_4, uVar8 != 0)) {
      uVar7 = 0;
      uVar9 = 0;
      uVar1 = *puVar2;
      if (uVar8 <= *puVar2) {
        uVar1 = uVar8;
      }
      for (; uVar7 != uVar1; uVar7 = uVar7 + 1) {
        source = (void *)(param_3 + uVar7 * 0x1f8);
        left = (char *)((long)source + 0xf1);
        cVar4 = *left;
        if (cVar4 != '\0') {
          for (text = acStack_161; (*text == '/' || (*text == '\\')); text = text + 1) {
          }
          while ((cVar4 == '\\' || (cVar4 == '/'))) {
            left = left + 1;
            cVar4 = *left;
          }
          count = recovered_10040274(text);
          if (count != 0) {
            iVar6 = recovered_10046dcc(left,text,count);
            if ((iVar6 != 0) || ((left[count] != '\\' && (left[count] != '/')))) goto LAB_10044858;
            left = left + count + 1;
          }
          cVar4 = *left;
          if (cVar4 != '\0') {
            while (cVar4 != '\0') {
              left = left + 1;
              if ((cVar4 == '/') || (cVar4 == '\\')) goto LAB_10044858;
              cVar4 = *left;
            }
            if (uVar7 != uVar9) {
              recovered_1003fdb4((void *)(param_3 + uVar9 * 0x1f8),source,0x1f8);
            }
            uVar9 = (ulong)((uint)uVar9 + 1);
          }
        }
LAB_10044858:
      }
      *puVar2 = (uint)uVar9;
      uVar7 = 1;
    }
  }
  return uVar7;
}

#undef DAT_820108cc
#undef UNK_82010884
#undef _DAT_820108cc
#undef uRam0000000082010884
#undef acStack_161
#undef local_168

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define auStack_3c (*(undefined1 (*)[4])(frame + 20))
#define uStack_38 (*(uint *)(frame + 24))
#define uStack_40 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044890
 */

undefined8 recovered_10044890(long param_1,long param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;

  puVar1 = recovered_10042468();
  uStack_40 = 0;
  if (((param_2 == 0) || (param_1 == 0)) || (puVar1 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
LAB_10044030:
    uVar3 = 0xffffffff;
  }
  else {
    recovered_1003ffa0(auStack_3c,0,0xc);
    uVar2 = recovered_10044558((long)puVar1,(char *)param_1,(long)auStack_3c);
    if ((int)uVar2 == 0) {
      uVar2 = recovered_1004469c((long)puVar1,(char *)param_1,0,0,&uStack_40);
      if ((int)uVar2 == 0) {
        DAT_10050554 = 2;
        goto LAB_10044030;
      }
      uStack_38 = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    recovered_100445fc(param_2,uStack_38,iVar4);
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_10050554
#undef auStack_3c
#undef uStack_38
#undef uStack_40

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044894
 */

undefined8 recovered_10044894(uint param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if ((((0x1f < param_1) || (piVar2 = (int *)(&PTR_DAT_10050450)[param_1], piVar2 == (int *)0x0)) ||
      (param_2 == 0)) || (*piVar2 != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffff;
  }
  uVar1 = *(ulong *)(piVar2 + 0x4a);
  if (*(ulong *)(piVar2 + 0x4a) <= *(ulong *)(piVar2 + 0x46)) {
    uVar1 = *(ulong *)(piVar2 + 0x46);
  }
  recovered_100445fc(param_2,(uint)uVar1,0);
  return 0;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004490c
 */

undefined8 recovered_1004490c(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  recovered_1004493c(param_2);
  return 0;
}

#undef DAT_10050554

#undef DAT_10049053
#define DAT_10049053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_1004b2e0
#define DAT_1004b2e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2290U)))
#undef DAT_1004b2f0
#define DAT_1004b2f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22a0U)))
#undef UNK_1004b2e8
#define UNK_1004b2e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2298U)))
#undef UNK_1004b2f8
#define UNK_1004b2f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22a8U)))
#undef _DAT_1004b2e0
#define _DAT_1004b2e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2290U)))
#undef _DAT_1004b2f0
#define _DAT_1004b2f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22a0U)))
#undef str_100494e8
#define str_100494e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_100494ee
#define str_100494ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49eU)))
#undef uRam000000001004b2e8
#define uRam000000001004b2e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2298U)))
#undef uRam000000001004b2f8
#define uRam000000001004b2f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x22a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004493c
 */

/* WARNING: Removing unreachable block (ram,0x1003fdbc) */
/* WARNING: Removing unreachable block (ram,0x1003fdd0) */
/* WARNING: Removing unreachable block (ram,0x1003fdd4) */
/* WARNING: Removing unreachable block (ram,0x1003fddc) */
/* WARNING: Removing unreachable block (ram,0x1003fde4) */
/* WARNING: Removing unreachable block (ram,0x1003fdf4) */
/* WARNING: Removing unreachable block (ram,0x1003fdfc) */
/* WARNING: Removing unreachable block (ram,0x1003fe08) */
/* WARNING: Removing unreachable block (ram,0x1003fe3c) */
/* WARNING: Removing unreachable block (ram,0x1003fe40) */
/* WARNING: Removing unreachable block (ram,0x1003fe4c) */
/* WARNING: Removing unreachable block (ram,0x1003fe64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1004493c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;

  recovered_1003ffa0(param_1,0,0x850);
  *param_1 = 0x100000001000;
  uVar1 = _DAT_1004b2e0;
  param_1[2] = uRam000000001004b2e8;
  param_1[1] = uVar1;
  uVar1 = _DAT_1004b2f0;
  param_1[4] = uRam000000001004b2f8;
  param_1[3] = uVar1;
  param_1[5] = 0x8000;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x1000;
  recovered_1003fdb4(param_1 + 8,str_100494e8,6);
  recovered_1003fdb4(param_1 + 10,&DAT_10049053,2);
  pcVar2 = str_100494ee;
  pcVar4 = (char *)(param_1 + 0x8a);
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10049053
#undef DAT_1004b2e0
#undef DAT_1004b2f0
#undef UNK_1004b2e8
#undef UNK_1004b2f8
#undef _DAT_1004b2e0
#undef _DAT_1004b2f0
#undef str_100494e8
#undef str_100494ee
#undef uRam000000001004b2e8
#undef uRam000000001004b2f8

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100449c8
 */

undefined8 recovered_100449c8(uint param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 < 0x20) && ((int *)(&PTR_DAT_10050450)[param_1] != (int *)0x0)) && (param_2 != 0))
     && (*(int *)(&PTR_DAT_10050450)[param_1] == 0x54474c46)) {
    recovered_1004493c((undefined8 *)param_2);
    return 0;
  }
  DAT_10050554 = 9;
  return 0xffffffff;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108dc
#define DAT_820108dc (*(uint8_t *)(0x820108dcU))
#undef UNK_8201088c
#define UNK_8201088c (*(uint *)(0x8201088cU))
#undef _DAT_820108dc
#define _DAT_820108dc (*(uint *)(0x820108dcU))
#undef uRam000000008201088c
#define uRam000000008201088c (*(uint32_t *)(0x8201088cU))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10044a20(char *param_1)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if (((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
     (uVar5 = recovered_10048a4c((long)puVar4,param_1,acStack_129), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xdc);
    if (bVar2) {
      if (_DAT_820108dc == 0) {
        DAT_10050554 = 5;
        return 0xffffffff;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108dc)(uVar1,acStack_129);
    }
    else {
      bVar2 = recovered_10048acc(0x8c);
      if (!bVar2) {
        DAT_10050554 = 5;
        return 0xffffffff;
      }
      if (uRam000000008201088c == 0) {
        DAT_10050554 = 5;
        return 0xffffffff;
      }
      iVar3 = (*(code *)(ulong)uRam000000008201088c)(acStack_129);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 5;
  return 0xffffffff;
}

#undef DAT_10050554
#undef DAT_820108dc
#undef UNK_8201088c
#undef _DAT_820108dc
#undef uRam000000008201088c
#undef acStack_129

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_820108d4
#define DAT_820108d4 (*(uint8_t *)(0x820108d4U))
#undef UNK_8201083c
#define UNK_8201083c (*(uint *)(0x8201083cU))
#undef _DAT_820108d4
#define _DAT_820108d4 (*(uint *)(0x820108d4U))
#undef uRam000000008201083c
#define uRam000000008201083c (*(uint32_t *)(0x8201083cU))
#define acStack_129 (*(char (*)[249])(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ac4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10044ac4(char *path)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;

  puVar4 = recovered_10042468();
  if (((puVar4 != (undefined *)0x0) && (-1 < *(int *)(puVar4 + 0x14))) &&
     (uVar5 = recovered_10048a4c((long)puVar4,path,acStack_129), (int)uVar5 != 0)) {
    uVar1 = *(undefined4 *)(puVar4 + 0x14);
    bVar2 = recovered_10048acc(0xd4);
    if (bVar2) {
      if (_DAT_820108d4 == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)_DAT_820108d4)(uVar1,acStack_129);
    }
    else {
      bVar2 = recovered_10048acc(0x3c);
      if (!bVar2) {
        DAT_10050554 = 2;
        return -1;
      }
      if (uRam000000008201083c == 0) {
        DAT_10050554 = 2;
        return -1;
      }
      iVar3 = (*(code *)(ulong)uRam000000008201083c)(acStack_129);
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  DAT_10050554 = 2;
  return -1;
}

#undef DAT_10050554
#undef DAT_820108d4
#undef UNK_8201083c
#undef _DAT_820108d4
#undef uRam000000008201083c
#undef acStack_129

#define auStack_c0 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ac8
 */

void recovered_10044ac8(long param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_10043fcc(param_1,(long)auStack_c0);
  return;
}

#undef auStack_c0

#define auStack_c0 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044adc
 */

void recovered_10044adc(undefined8 param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_10044894((uint)param_1,(long)auStack_c0);
  return;
}

#undef auStack_c0

#define auStack_c0 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044af0
 */

void recovered_10044af0(long param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_10043fcc(param_1,(long)auStack_c0);
  return;
}

#undef auStack_c0

#define auStack_c0 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b04
 */

void recovered_10044b04(undefined8 param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_10044894((uint)param_1,(long)auStack_c0);
  return;
}

#undef auStack_c0

#define auStack_c0 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b18
 */

void recovered_10044b18(long param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_10043fcc(param_1,(long)auStack_c0);
  return;
}

#undef auStack_c0

#undef DAT_10050438
#define DAT_10050438 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x73e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b2c
 */

undefined4 recovered_10044b2c(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = DAT_10050438;
  DAT_10050438 = param_1;
  return uVar1;
}

#undef DAT_10050438

#define auStack_c0 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b3c
 */

void recovered_10044b3c(long param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};


  recovered_10043fcc(param_1,(long)auStack_c0);
  return;
}

#undef auStack_c0

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_319 (*(char (*)[241])(frame + 23))
#define uStack_320 (*(uint *)(frame + 16))
#define auStack_228 (*(undefined1 (*)[504])(frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b50
 */

undefined8 recovered_10044b50(char *param_1)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;

  puVar3 = recovered_10042468();
  if (puVar3 != (undefined *)0x0) {
    uStack_320 = 0;
    uVar1 = recovered_10042610((long)puVar3,param_1,acStack_319);
    if ((int)uVar1 != 0) {
      uVar2 = recovered_1004469c((long)puVar3,acStack_319,(long)auStack_228,1,&uStack_320);
      if ((int)uVar2 != 0) {
        pf_varargs_100414cc_1(puVar3 + 0xa28,0xf1,&DAT_10049050,(ulonglong)acStack_319);
        pf_varargs_100414cc_1(puVar3 + 0x10d,0xf1,&DAT_10049050,(ulonglong)acStack_319);
        return 0;
      }
    }
  }
  DAT_10050554 = 2;
  return 0xffffffff;
}

#undef DAT_10049050
#undef DAT_10050554
#undef acStack_319
#undef uStack_320
#undef auStack_228

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10049053
#define DAT_10049053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044bf4
 */

long recovered_10044bf4(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  char *text;

  puVar1 = recovered_10042468();
  text = &DAT_10049053;
  if (puVar1 != (undefined *)0x0) {
    text = &DAT_10049053;
    if (puVar1[0xa28] != '\0') {
      text = puVar1 + 0xa28;
    }
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10050554 = 0x16;
  }
  else {
    uVar2 = recovered_10040274(text);
    if (uVar2 + 1 <= param_2) {
      pf_varargs_100414cc_1((char *)param_1,param_2,&DAT_10049050,(ulonglong)text);
      return param_1;
    }
    DAT_10050554 = 0x22;
  }
  return 0;
}

#undef DAT_10049050
#undef DAT_10049053
#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044c94
 */

undefined8 recovered_10044c94(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x16;
  return 0xffffffffffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ca8
 */

undefined8 recovered_10044ca8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044cbc
 */

undefined8 recovered_10044cbc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define pvStack_148 (*(void * *)(frame + 24))
#define uStack_140 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044cd0
 */

undefined8 recovered_10044cd0(long param_1,ulong param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  void *destination;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;

  puVar1 = recovered_10042468();
  uVar4 = 0x16;
  if (((-1 < (long)param_2) && (param_1 != 0)) && (puVar1 != (undefined *)0x0)) {
    uVar3 = param_2;
    if (param_2 < 2) {
      uVar3 = 1;
    }
    destination = recovered_1003fce0(uVar3);
    if (destination == (void *)0x0) {
      uVar4 = 0xc;
    }
    else {
      recovered_1003ffa0(destination,0,param_2);
      uVar2 = recovered_10042880((long)puVar1,(char *)param_1,(ulong *)&pvStack_148);
      if ((int)uVar2 != 0) {
        if ((uint)param_2 <= uStack_140) {
          uStack_140 = (uint)param_2;
        }
        if (uStack_140 != 0) {
          recovered_1003fdb4(destination,pvStack_148,(ulong)uStack_140);
        }
      }
      uVar3 = recovered_10042c64((long)puVar1,(char *)param_1,(long)destination,param_2);
      recovered_1003fd24(destination);
      if ((int)uVar3 != 0) {
        return 0;
      }
      uVar4 = 5;
    }
  }
  DAT_10050554 = uVar4;
  return 0xffffffff;
}

#undef DAT_10050554
#undef pvStack_148
#undef uStack_140

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044d9c
 */

undefined8 recovered_10044d9c(uint param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;

  if ((((0x1f < param_1) || (piVar5 = (int *)(&PTR_DAT_10050450)[param_1], piVar5 == (int *)0x0)) ||
      ((long)param_2 < 0)) || (*piVar5 != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffff;
  }
  if ((*(byte *)(piVar5 + 2) >> 1 & 1) == 0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  uVar2 = recovered_10042944((long)piVar5,param_2);
  if ((uVar2 & 1) == 0) {
    DAT_10050554 = 0xc;
    return 0xffffffff;
  }
  uVar2 = *(ulong *)(piVar5 + 0x4a);
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    recovered_1003ffa0((void *)(*(long *)(piVar5 + 0x48) + uVar2),0,param_2 - uVar2);
  }
  *(ulong *)(piVar5 + 0x4a) = param_2;
  if (param_2 < *(ulong *)(piVar5 + 0x4e)) {
    *(ulong *)(piVar5 + 0x4e) = param_2;
  }
  *(undefined1 *)((long)piVar5 + 0x12) = 1;
  puVar1 = recovered_10042468();
  if (piVar5 == (int *)0x0) {
    for (lVar4 = 0; lVar4 != 0x100; lVar4 = lVar4 + 8) {
      if (*(void **)((long)&PTR_DAT_10050450 + lVar4) != (void *)0x0) {
        recovered_10042ba8(*(void **)((long)&PTR_DAT_10050450 + lVar4));
      }
    }
LAB_10042c2c:
    uVar3 = 0;
  }
  else {
    if (*piVar5 == 0x54474c46) {
      if ((piVar5[1] - 1U < 3) || (*(char *)((long)piVar5 + 0x12) != '\x01')) goto LAB_10042c2c;
      if ((puVar1 != (undefined *)0x0) &&
         (uVar2 = recovered_10042c64((long)puVar1,(char *)(piVar5 + 6),*(long *)(piVar5 + 0x48),
                                     (ulong)(uint)piVar5[0x4a]), (int)uVar2 != 0)) {
        *(undefined1 *)((long)piVar5 + 0x12) = 0;
        return 0;
      }
      *(undefined1 *)((long)piVar5 + 0x11) = 1;
      DAT_10050554 = 5;
    }
    else {
      DAT_10050554 = 9;
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044e6c
 */

undefined8 recovered_10044e6c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;

  if (((0x1f < param_1) || (piVar3 = (int *)(&PTR_DAT_10050450)[param_1], piVar3 == (int *)0x0)) ||
     (*piVar3 != 0x54474c46)) {
    DAT_10050554 = 9;
    return 0xffffffff;
  }
  puVar1 = recovered_10042468();
  if (piVar3 == (int *)0x0) {
    for (lVar5 = 0; lVar5 != 0x100; lVar5 = lVar5 + 8) {
      if (*(void **)((long)&PTR_DAT_10050450 + lVar5) != (void *)0x0) {
        recovered_10042ba8(*(void **)((long)&PTR_DAT_10050450 + lVar5));
      }
    }
LAB_10042c2c:
    uVar4 = 0;
  }
  else {
    if (*piVar3 == 0x54474c46) {
      if ((piVar3[1] - 1U < 3) || (*(char *)((long)piVar3 + 0x12) != '\x01')) goto LAB_10042c2c;
      if ((puVar1 != (undefined *)0x0) &&
         (uVar2 = recovered_10042c64((long)puVar1,(char *)(piVar3 + 6),*(long *)(piVar3 + 0x48),
                                     (ulong)(uint)piVar3[0x4a]), (int)uVar2 != 0)) {
        *(undefined1 *)((long)piVar3 + 0x12) = 0;
        return 0;
      }
      *(undefined1 *)((long)piVar3 + 0x11) = 1;
      DAT_10050554 = 5;
    }
    else {
      DAT_10050554 = 9;
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define auStack_bd50 (*(undefined1 (*)[48384])(frame + 32))
#define uStack_bd54 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044eac
 */

uint * recovered_10044eac(char *param_1)

{
  unsigned char frame[48528] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint *destination;
  undefined *puVar2;
  char cVar3;
  char *buffer;
  undefined1 *vararg0;

  puVar2 = recovered_10042468();
  uStack_bd54 = 0;
  if (puVar2 == (undefined *)0x0) {
    DAT_10050554 = 0x16;
  }
  else {
    uVar1 = recovered_1004469c((long)puVar2,param_1,(long)auStack_bd50,0x60,&uStack_bd54);
    if ((int)uVar1 == 0) {
      DAT_10050554 = 2;
    }
    else {
      destination = recovered_1003fce0(0x6308);
      if (destination != (uint *)0x0) {
        recovered_1003ffa0(destination,0,0x6308);
        if (0x60 < uStack_bd54) {
          uStack_bd54 = 0x60;
        }
        buffer = (char *)((long)destination + 0xd);
        *destination = uStack_bd54;
        vararg0 = auStack_bd50;
        for (uVar1 = 0; uVar1 < uStack_bd54; uVar1 = uVar1 + 1) {
          *(int *)(buffer + -5) = (int)uVar1 + 1;
          if (*(int *)(vararg0 + 0x1ec) == 2) {
            cVar3 = '\x04';
          }
          else {
            cVar3 = '\b';
            if ((vararg0[0x1e8] & 2) != 0) {
              cVar3 = '\x04';
            }
          }
          buffer[-1] = cVar3;
          pf_varargs_100414cc_1(buffer,0x100,&DAT_10049050,(ulonglong)vararg0);
          buffer = buffer + 0x108;
          vararg0 = vararg0 + 0x1f8;
        }
        return destination;
      }
      DAT_10050554 = 0xc;
    }
  }
  return (uint *)0x0;
}

#undef DAT_10049050
#undef DAT_10050554
#undef auStack_bd50
#undef uStack_bd54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044fd4
 */

uint * recovered_10044fd4(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;

  puVar2 = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    uVar1 = param_1[1];
    if (*param_1 <= uVar1) {
      return (uint *)0x0;
    }
    param_1[1] = uVar1 + 1;
    puVar2 = param_1 + (ulong)uVar1 * 0x42 + 2;
  }
  return puVar2;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045000
 */

undefined8 recovered_10045000(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10050554 = 9;
    return 0xffffffff;
  }
  recovered_1003fd24((void *)param_1);
  return 0;
}

#undef DAT_10050554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045030
 */

void recovered_10045030(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004503c
 */

long recovered_1004503c(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4,
                       undefined8 param_5,long param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *destination;
  long in_x1;
  long lVar1;
  ulong uVar2;

  uVar2 = param_2;
  if (param_2 < 2) {
    uVar2 = 1;
  }
  destination = recovered_1003fce0(uVar2);
  if (destination == (undefined1 *)0x0) {
    DAT_10050554 = 0xc;
    destination = (undefined1 *)0xffffffffffffffff;
  }
  else if (((param_4 >> 0xc & 1) == 0) && (-1 < (int)(uint)param_5)) {
    in_x1 = recovered_1004417c((uint)param_5,0,1);
    if ((-1 < in_x1) && (lVar1 = recovered_1004417c((uint)param_5,param_6,0), -1 < lVar1)) {
      uVar2 = recovered_100440a4((uint)param_5,destination,param_2);
      if ((-1 < (long)uVar2) && (uVar2 <= param_2 && param_2 - uVar2 != 0)) {
        recovered_1003ffa0(destination + uVar2,0,param_2 - uVar2);
      }
      recovered_1004417c((uint)param_5,in_x1,0);
    }
  }
  else {
    recovered_1003ffa0(destination,0,param_2);
  }
  return (long)destination;
}

#undef DAT_10050554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045120
 */

undefined8 recovered_10045120(void *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003fd24(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045138
 */

undefined8 recovered_10045138(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004513c
 */

undefined8 recovered_1004513c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045140
 */

undefined8 recovered_10045140(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10051a08
#define DAT_10051a08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045144
 */

long recovered_10045144(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;

  recovered_10042468();
  uVar3 = recovered_100451bc((char *)param_1);
  if ((int)uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar5 = recovered_10040274((char *)param_1);
    uVar1 = 0;
    do {
      uVar6 = uVar1;
      if ((byte *)(&DAT_10051a08)[uVar6] == (byte *)0x0) {
        return 0;
      }
      bVar2 = recovered_100451ec((byte *)(&DAT_10051a08)[uVar6],param_1,uVar5);
      uVar1 = (ulong)((int)uVar6 + 1);
    } while (!bVar2);
    lVar4 = (&DAT_10051a08)[uVar6] + uVar5 + 1;
  }
  return lVar4;
}

#undef DAT_10051a08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100451bc
 */

undefined8 recovered_100451bc(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    while( true ) {
      if (cVar1 == '\0') {
        return 1;
      }
      param_1 = param_1 + 1;
      if (cVar1 == '=') break;
      cVar1 = *param_1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100451ec
 */

bool recovered_100451ec(byte *param_1,byte *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong uVar3;

  uVar3 = recovered_10040274((char *)param_1);
  if ((param_3 < uVar3) && (param_1[param_3] == 0x3d)) {
    iVar2 = recovered_10040040(param_1,param_2,param_3);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045240
 */

undefined8 recovered_10045240(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 2;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_1004ad19
#define DAT_1004ad19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc9U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045254
 */

void recovered_10045254(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 == 0) {
    DAT_10050554 = 0x16;
    return;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = &DAT_1004ad19;
  }
  for (uVar1 = 0; (param_2[uVar1] != '\0' && (uVar1 < 0xf0)); uVar1 = uVar1 + 1) {
    *(char *)(param_1 + uVar1) = param_2[uVar1];
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}

#undef DAT_1004ad19
#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef str_1004ad24
#define str_1004ad24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cd4U)))
#define acStack_140 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100452a8
 */

undefined8 recovered_100452a8(long param_1,long param_2,int param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;

  lVar1 = recovered_10045144((byte *)param_1);
  uVar2 = recovered_100451bc((char *)param_1);
  if ((param_2 == 0) || ((uVar2 & 1) == 0)) {
    DAT_10050554 = 0x16;
  }
  else {
    if ((param_3 == 0) && (lVar1 != 0)) {
      return 0;
    }
    uVar2 = recovered_10040274((char *)param_1);
    uVar4 = recovered_10040274((char *)param_2);
    if (0xfffffffffffffefd < (uVar2 + uVar4) - 0xff && uVar2 + uVar4 != -3) {
      pf_varargs_100414cc_2(acStack_140,0x100,str_1004ad24,param_1,param_2);
      uVar3 = recovered_1004535c(param_1,acStack_140);
      return uVar3;
    }
    DAT_10050554 = 0xc;
  }
  return 0xffffffff;
}

#undef DAT_10050554
#undef str_1004ad24
#undef acStack_140

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051a08
#define DAT_10051a08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
#define acStack_868 (*(char (*)[2056])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004535c
 */

undefined8 recovered_1004535c(long param_1,char *param_2)

{
  unsigned char frame[2208] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  ulong count;
  ulong uVar3;
  byte *text;
  long lVar4;
  ulong uVar5;

  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = recovered_10040274((char *)param_1);
  }
  lVar4 = 0;
  acStack_868[0] = '\0';
  for (uVar5 = 0; text = (byte *)(&DAT_10051a08)[uVar5], text != (byte *)0x0;
      uVar5 = (ulong)((int)uVar5 + 1)) {
    count = recovered_10040274((char *)text);
    bVar2 = recovered_100451ec(text,(byte *)param_1,uVar3);
    if (!bVar2) {
      lVar1 = count + lVar4;
      if (lVar1 - 0x7feU < 0xfffffffffffff800) {
        DAT_10050554 = 0xc;
        return 0xffffffff;
      }
      recovered_1003fdb4(acStack_868 + lVar4,text,count);
      lVar4 = lVar1 + 1;
      (acStack_868 + lVar1)[0] = '\n';
      (acStack_868 + lVar1)[1] = '\0';
    }
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar3 = recovered_10040274(param_2);
    if (0x7ff < uVar3 + lVar4 + 2) {
      DAT_10050554 = 0xc;
      return 0xffffffff;
    }
    recovered_1003fdb4(acStack_868 + lVar4,param_2,uVar3);
    (acStack_868 + uVar3 + lVar4)[0] = '\n';
    (acStack_868 + uVar3 + lVar4)[1] = '\0';
  }
  recovered_10042174(acStack_868);
  return 0;
}

#undef DAT_10050554
#undef DAT_10051a08
#undef acStack_868

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051a08
#define DAT_10051a08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
#define acStack_868 (*(char (*)[2056])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045480
 */

/* WARNING: Removing unreachable block (ram,0x10045418) */
/* WARNING: Removing unreachable block (ram,0x10045420) */
/* WARNING: Removing unreachable block (ram,0x10045434) */

undefined8 recovered_10045480(long param_1)

{
  unsigned char frame[2208] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  ulong count;
  ulong uVar3;
  byte *text;
  long lVar4;
  ulong uVar5;

  uVar3 = recovered_100451bc((char *)param_1);
  if ((uVar3 & 1) == 0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = recovered_10040274((char *)param_1);
  }
  uVar5 = 0;
  lVar4 = 0;
  acStack_868[0] = '\0';
  do {
    text = (byte *)(&DAT_10051a08)[uVar5];
    if (text == (byte *)0x0) {
      recovered_10042174(acStack_868);
      return 0;
    }
    count = recovered_10040274((char *)text);
    bVar2 = recovered_100451ec(text,(byte *)param_1,uVar3);
    if (!bVar2) {
      lVar1 = count + lVar4;
      if (lVar1 - 0x7feU < 0xfffffffffffff800) {
        DAT_10050554 = 0xc;
        return 0xffffffff;
      }
      recovered_1003fdb4(acStack_868 + lVar4,text,count);
      lVar4 = lVar1 + 1;
      (acStack_868 + lVar1)[0] = '\n';
      (acStack_868 + lVar1)[1] = '\0';
    }
    uVar5 = (ulong)((int)uVar5 + 1);
  } while( true );
}

#undef DAT_10050554
#undef DAT_10051a08
#undef acStack_868

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define auStack_b0 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100454c4
 */

undefined8 recovered_100454c4(long param_1)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  ulong count;
  char *pcVar1;
  undefined8 uVar2;

  if (((param_1 == 0) || (pcVar1 = recovered_10040318((char *)param_1,0x3d), pcVar1 == (char *)0x0))
     || (count = (long)pcVar1 - param_1, count == 0)) {
    DAT_10050554 = 0x16;
  }
  else {
    if (count < 0x80) {
      recovered_1003fdb4(auStack_b0,(void *)param_1,count);
      auStack_b0[count] = 0;
      uVar2 = recovered_1004535c((long)auStack_b0,(char *)param_1);
      return uVar2;
    }
    DAT_10050554 = 0xc;
  }
  return 0xffffffff;
}

#undef DAT_10050554
#undef auStack_b0

#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(void * *)(((uintptr_t)pf_module_state + 0x7290U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(void * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#define local_230 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045550
 */

int recovered_10045550(long param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  undefined **ppuVar1;
  undefined8 uVar2;
  int iVar3;

  if (param_1 == 0) {
    iVar3 = 1;
  }
  else {
    local_230[0] = '\0';
    uVar2 = recovered_100455c8(param_1,local_230);
    iVar3 = -(uint)((int)uVar2 == 0);
    if (local_230[0] != '\0') {
      ppuVar1 = &PTR_DAT_10050428;
      if ((int)uVar2 != 0) {
        ppuVar1 = &PTR_DAT_100502e0;
      }
      recovered_100434b0(local_230,*ppuVar1);
      recovered_10043468(10,*ppuVar1);
    }
  }
  return iVar3;
}

#undef PTR_DAT_100502e0
#undef PTR_DAT_10050428
#undef local_230

#undef DAT_82010954
#define DAT_82010954 (*(uint8_t *)(0x82010954U))
#undef _DAT_82010954
#define _DAT_82010954 (*(uint *)(0x82010954U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100455c8(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10048acc(0x154);
  if ((bVar1) && (_DAT_82010954 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10045604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010954)(param_1,param_2,0x200);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010954
#undef _DAT_82010954

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_121 (*(char (*)[241])(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045614
 */

long recovered_10045614(long param_1,long param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;

  puVar1 = recovered_10042468();
  if ((param_1 == 0) || (puVar1 == (undefined *)0x0)) {
    DAT_10050554 = 0x16;
  }
  else {
    uVar2 = recovered_10042610((long)puVar1,(char *)param_1,acStack_121);
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0) {
        uVar2 = recovered_10040274(acStack_121);
        param_2 = (long)recovered_1003fce0(uVar2 + 1);
        if ((char *)param_2 == (char *)0x0) {
          DAT_10050554 = 0xc;
          return 0;
        }
      }
      recovered_100402c4((char *)param_2,acStack_121);
      return (long)(char *)param_2;
    }
    DAT_10050554 = 0x3f;
  }
  return 0;
}

#undef DAT_10050554
#undef acStack_121

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051434
#define DAT_10051434 (*(uint *)(((uintptr_t)pf_module_state + 0x83e4U)))
#undef str_1004ad2a
#define str_1004ad2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdaU)))
#undef str_1004ad69
#define str_1004ad69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d19U)))
#define auStack_100 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100456c4
 */

undefined8 recovered_100456c4(long param_1,uint param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;

  if ((param_1 != 0) && (-1 < (int)param_2)) {
    uVar3 = recovered_10040274((char *)param_1);
    if ((ulong)param_2 + 6 <= uVar3) {
      lVar6 = (param_1 + uVar3) - (ulong)param_2;
      iVar1 = recovered_10040040((void *)(lVar6 + -6),str_1004ad69,6);
      if (iVar1 == 0) {
        iVar1 = 0;
        while( true ) {
          if (iVar1 == 0x80) {
            DAT_10050554 = 0x11;
            return 0xffffffff;
          }
          DAT_10051434 = DAT_10051434 + 1;
          lVar5 = -6;
          uVar2 = DAT_10051434;
          do {
            *(char *)(lVar6 + lVar5) = str_1004ad2a[uVar2 % 0x3e];
            lVar5 = lVar5 + 1;
            uVar2 = uVar2 / 0x3e;
          } while (lVar5 != 0);
          uVar4 = recovered_10043fcc(param_1,(long)auStack_100);
          if ((int)uVar4 != 0) break;
          iVar1 = iVar1 + 1;
        }
        uVar2 = recovered_10043eec(param_1,0xa02);
        return (ulong)uVar2;
      }
    }
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10050554
#undef DAT_10051434
#undef str_1004ad2a
#undef str_1004ad69
#undef auStack_100

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051434
#define DAT_10051434 (*(uint *)(((uintptr_t)pf_module_state + 0x83e4U)))
#undef str_1004ad2a
#define str_1004ad2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdaU)))
#undef str_1004ad69
#define str_1004ad69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d19U)))
#define auStack_100 (*(undefined1 (*)[176])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100457dc
 */

undefined8 recovered_100457dc(long param_1)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;

  if ((param_1 != 0) && (uVar3 = recovered_10040274((char *)param_1), 5 < uVar3)) {
    iVar1 = recovered_10040040((void *)(param_1 + uVar3 + -6),str_1004ad69,6);
    if (iVar1 == 0) {
      iVar1 = 0;
      while( true ) {
        if (iVar1 == 0x80) {
          DAT_10050554 = 0x11;
          return 0xffffffff;
        }
        DAT_10051434 = DAT_10051434 + 1;
        lVar5 = -6;
        uVar2 = DAT_10051434;
        do {
          *(char *)(param_1 + uVar3 + lVar5) = str_1004ad2a[uVar2 % 0x3e];
          lVar5 = lVar5 + 1;
          uVar2 = uVar2 / 0x3e;
        } while (lVar5 != 0);
        uVar4 = recovered_10043fcc(param_1,(long)auStack_100);
        if ((int)uVar4 != 0) break;
        iVar1 = iVar1 + 1;
      }
      uVar2 = recovered_10043eec(param_1,0xa02);
      return (ulong)uVar2;
    }
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10050554
#undef DAT_10051434
#undef str_1004ad2a
#undef str_1004ad69
#undef auStack_100

#undef DAT_10051438
#define DAT_10051438 (*(uint *)(((uintptr_t)pf_module_state + 0x83e8U)))
#undef DAT_10051608
#define DAT_10051608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100457e4
 */

undefined8 recovered_100457e4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = (ulong)DAT_10051438;
    if (DAT_10051438 < 0x20) {
      uVar1 = 0;
      DAT_10051438 = DAT_10051438 + 1;
      *(long *)(&DAT_10051608 + uVar2 * 8) = param_1;
    }
  }
  return uVar1;
}

#undef DAT_10051438
#undef DAT_10051608

#undef DAT_10051438
#define DAT_10051438 (*(uint *)(((uintptr_t)pf_module_state + 0x83e8U)))
#undef DAT_10051608
#define DAT_10051608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045820
 */

undefined8 recovered_10045820(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = (ulong)DAT_10051438;
    if (DAT_10051438 < 0x20) {
      uVar1 = 0;
      DAT_10051438 = DAT_10051438 + 1;
      *(long *)(&DAT_10051608 + uVar2 * 8) = param_1;
    }
  }
  return uVar1;
}

#undef DAT_10051438
#undef DAT_10051608

#undef DAT_82010830
#define DAT_82010830 (*(uint8_t *)(0x82010830U))
#undef _DAT_82010830
#define _DAT_82010830 (*(uint *)(0x82010830U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045824
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10045824(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10048acc(0x30);
  if ((bVar1) && (_DAT_82010830 != 0)) {
    (*(code *)(ulong)_DAT_82010830)(0x10045834);
  }
  do {
    recovered_10045858();
  } while( true );
}

#undef DAT_82010830
#undef _DAT_82010830

#undef DAT_8201089c
#define DAT_8201089c (*(uint8_t *)(0x8201089cU))
#undef _DAT_8201089c
#define _DAT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045858
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10045858(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10048acc(0x9c);
  if ((bVar1) && (_DAT_8201089c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10045880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_8201089c)();
    return;
  }
  return;
}

#undef DAT_8201089c
#undef _DAT_8201089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004588c
 */

void recovered_1004588c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10045824();
}


#undef DAT_10051438
#define DAT_10051438 (*(uint *)(((uintptr_t)pf_module_state + 0x83e8U)))
#undef DAT_10051608
#define DAT_10051608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045898
 */

void recovered_10045898(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while (DAT_10051438 != 0) {
    DAT_10051438 = DAT_10051438 - 1;
    if (*(code **)(&DAT_10051608 + (ulong)DAT_10051438 * 8) != (code *)0x0) {
      (**(code **)(&DAT_10051608 + (ulong)DAT_10051438 * 8))();
    }
  }
                    /* WARNING: Subroutine does not return */
  recovered_10045824();
}

#undef DAT_10051438
#undef DAT_10051608

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458dc
 */

void recovered_100458dc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10045824();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458e8
 */

bool recovered_100458e8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 < 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458f4
 */

undefined8 recovered_100458f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458f8
 */

undefined8 recovered_100458f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458fc
 */

undefined8 recovered_100458fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045900
 */

undefined8 recovered_10045900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045904
 */

undefined8 recovered_10045904(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 1000) {
    return 0;
  }
  DAT_10050554 = 1;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045924
 */

undefined8 recovered_10045924(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 1000) {
    return 0;
  }
  DAT_10050554 = 1;
  return 0xffffffff;
}

#undef DAT_10050554

#define local_634 (*(undefined4 *)(frame + 28))
#define auStack_640 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045944
 */

undefined4 recovered_10045944(void)

{
  unsigned char frame[1648] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_1003ffa0(auStack_640,0,0x620);
  uVar1 = recovered_10045988(auStack_640);
  if ((int)uVar1 == 0) {
    local_634 = 1;
  }
  return local_634;
}

#undef local_634
#undef auStack_640

#undef DAT_82010944
#define DAT_82010944 (*(uint8_t *)(0x82010944U))
#undef _DAT_82010944
#define _DAT_82010944 (*(uint *)(0x82010944U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045988
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10045988(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10048acc(0x144);
  if ((bVar1) && (_DAT_82010944 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100459bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010944)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010944
#undef _DAT_82010944

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459cc
 */

undefined8 recovered_100459cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define auStack_640 (*(undefined1 (*)[12])(frame + 16))
#define uStack_634 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459d0
 */

undefined4 recovered_100459d0(int param_1)

{
  unsigned char frame[1648] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  if (param_1 != 0) {
    iVar1 = recovered_10045944();
    if (iVar1 != param_1) {
      DAT_10050554 = 3;
      return 0xffffffff;
    }
  }
  recovered_1003ffa0(auStack_640,0,0x620);
  uVar2 = recovered_10045988(auStack_640);
  if ((int)uVar2 == 0) {
    uStack_634 = 1;
  }
  return uStack_634;
}

#undef DAT_10050554
#undef auStack_640
#undef uStack_634

#define uStack_634 (*(undefined4 *)(frame + 28))
#define auStack_640 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a08
 */

undefined4 recovered_10045a08(void)

{
  unsigned char frame[1648] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  recovered_1003ffa0(auStack_640,0,0x620);
  uVar1 = recovered_10045988(auStack_640);
  if ((int)uVar1 == 0) {
    uStack_634 = 1;
  }
  return uStack_634;
}

#undef uStack_634
#undef auStack_640

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a0c
 */

undefined8 recovered_10045a0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050554 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_250 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a20
 */

undefined8 recovered_10045a20(long param_1,long *param_2)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *text;
  long lVar3;
  uint uVar4;

  if (param_1 != 0) {
    acStack_250[0] = '\0';
    if ((param_2 == (long *)0x0) || (text = (char *)*param_2, text == (char *)0x0)) {
      pf_varargs_100414cc_1(acStack_250,0x200,&DAT_10049050,param_1);
    }
    else {
      lVar3 = 0;
      uVar4 = 1;
      while (text != (char *)0x0) {
        uVar2 = recovered_10040274(text);
        if (0x1ff < lVar3 + uVar2 + 2) {
          DAT_10050554 = 7;
          return 0xffffffff;
        }
        if (uVar4 != 1) {
          acStack_250[lVar3] = ' ';
          lVar3 = lVar3 + 1;
        }
        recovered_1003fdb4(acStack_250 + lVar3,text,uVar2);
        lVar3 = lVar3 + uVar2;
        acStack_250[lVar3] = '\0';
        uVar2 = (ulong)uVar4;
        uVar4 = uVar4 + 1;
        text = (char *)param_2[uVar2];
      }
    }
    iVar1 = recovered_10045550((long)acStack_250);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    recovered_10045898();
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10049050
#undef DAT_10050554
#undef acStack_250

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define local_250 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a24
 */

undefined8 recovered_10045a24(long param_1,long *param_2)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *text;
  long lVar3;
  uint uVar4;

  if (param_1 != 0) {
    local_250[0] = '\0';
    if ((param_2 == (long *)0x0) || (text = (char *)*param_2, text == (char *)0x0)) {
      pf_varargs_100414cc_1(local_250,0x200,&DAT_10049050,param_1);
    }
    else {
      lVar3 = 0;
      uVar4 = 1;
      while (text != (char *)0x0) {
        uVar2 = recovered_10040274(text);
        if (0x1ff < lVar3 + uVar2 + 2) {
          DAT_10050554 = 7;
          return 0xffffffff;
        }
        if (uVar4 != 1) {
          local_250[lVar3] = ' ';
          lVar3 = lVar3 + 1;
        }
        recovered_1003fdb4(local_250 + lVar3,text,uVar2);
        lVar3 = lVar3 + uVar2;
        local_250[lVar3] = '\0';
        uVar2 = (ulong)uVar4;
        uVar4 = uVar4 + 1;
        text = (char *)param_2[uVar2];
      }
    }
    iVar1 = recovered_10045550((long)local_250);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    recovered_10045898();
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10049050
#undef DAT_10050554
#undef local_250

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_250 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b04
 */

undefined8 recovered_10045b04(long param_1,long *param_2)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *text;
  long lVar3;
  uint uVar4;

  if (param_1 != 0) {
    acStack_250[0] = '\0';
    if ((param_2 == (long *)0x0) || (text = (char *)*param_2, text == (char *)0x0)) {
      pf_varargs_100414cc_1(acStack_250,0x200,&DAT_10049050,param_1);
    }
    else {
      lVar3 = 0;
      uVar4 = 1;
      while (text != (char *)0x0) {
        uVar2 = recovered_10040274(text);
        if (0x1ff < lVar3 + uVar2 + 2) {
          DAT_10050554 = 7;
          return 0xffffffff;
        }
        if (uVar4 != 1) {
          acStack_250[lVar3] = ' ';
          lVar3 = lVar3 + 1;
        }
        recovered_1003fdb4(acStack_250 + lVar3,text,uVar2);
        lVar3 = lVar3 + uVar2;
        acStack_250[lVar3] = '\0';
        uVar2 = (ulong)uVar4;
        uVar4 = uVar4 + 1;
        text = (char *)param_2[uVar2];
      }
    }
    iVar1 = recovered_10045550((long)acStack_250);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    recovered_10045898();
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10049050
#undef DAT_10050554
#undef acStack_250

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#define acStack_250 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b08
 */

undefined8 recovered_10045b08(long param_1,long *param_2)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *text;
  long lVar3;
  uint uVar4;

  if (param_1 != 0) {
    acStack_250[0] = '\0';
    if ((param_2 == (long *)0x0) || (text = (char *)*param_2, text == (char *)0x0)) {
      pf_varargs_100414cc_1(acStack_250,0x200,&DAT_10049050,param_1);
    }
    else {
      lVar3 = 0;
      uVar4 = 1;
      while (text != (char *)0x0) {
        uVar2 = recovered_10040274(text);
        if (0x1ff < lVar3 + uVar2 + 2) {
          DAT_10050554 = 7;
          return 0xffffffff;
        }
        if (uVar4 != 1) {
          acStack_250[lVar3] = ' ';
          lVar3 = lVar3 + 1;
        }
        recovered_1003fdb4(acStack_250 + lVar3,text,uVar2);
        lVar3 = lVar3 + uVar2;
        acStack_250[lVar3] = '\0';
        uVar2 = (ulong)uVar4;
        uVar4 = uVar4 + 1;
        text = (char *)param_2[uVar2];
      }
    }
    iVar1 = recovered_10045550((long)acStack_250);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    recovered_10045898();
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10049050
#undef DAT_10050554
#undef acStack_250

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b0c
 */

undefined8 recovered_10045b0c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 1:
    return 0x1000;
  case 2:
  case 5:
    return 0x20;
  case 3:
    return 1000;
  case 4:
    goto switchD_10045b64_caseD_1;
  default:
    if (param_1 - 0x39U < 2) {
      return 1;
    }
    if (param_1 - 200U < 2) {
      return 0x8000;
    }
    if (param_1 == 0x1d) {
      return 0x1000;
    }
    if (param_1 == 0x46) {
      return 0x400;
    }
switchD_10045b64_caseD_1:
    DAT_10050554 = 0x16;
    return 0xffffffffffffffff;
  }
}

#undef DAT_10050554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045ba0
 */

undefined8 recovered_10045ba0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0x1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045ba8
 */

undefined8 recovered_10045ba8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045bac
 */

undefined8 recovered_10045bac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10045858();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045bc0
 */

undefined8 recovered_10045bc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10045858();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045bd4
 */

undefined8 recovered_10045bd4(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  recovered_10045858();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045bf0
 */

undefined8 recovered_10045bf0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  recovered_1004041c((undefined8 *)0x0);
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = extraout_x0;
    param_1[1] = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c20
 */

undefined8 recovered_10045c20(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  if (param_2 == (undefined8 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  recovered_1004041c((undefined8 *)0x0);
  *param_2 = extraout_x0;
  param_2[1] = 0;
  return 0;
}

#undef DAT_10050554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c64
 */

undefined8 recovered_10045c64(undefined8 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c70
 */

undefined8 recovered_10045c70(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c7c
 */

undefined8
recovered_10045c7c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_4 != 0) {
    recovered_1003ffa0((void *)param_4,0,0x90);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045cac
 */

undefined8 recovered_10045cac(uint param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if ((param_2 == (undefined8 *)0x0) || (9 < param_1)) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  uVar1 = 1 << (ulong)(param_1 & 0x1f);
  if ((uVar1 & 0x13) == 0) {
    if ((uVar1 & 0x20c) == 0) {
      if (param_1 != 8) {
        DAT_10050554 = 0x16;
        return 0xffffffff;
      }
      uVar2 = 0x20;
    }
    else {
      uVar2 = 0x8000000;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  param_2[1] = uVar2;
  *param_2 = uVar2;
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d20
 */

undefined8 recovered_10045d20(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 10) && ((799U >> (ulong)(param_1 & 0x1f) & 1) != 0)) {
    return 0;
  }
  DAT_10050554 = 0x16;
  return 0xffffffff;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d4c
 */

undefined8 recovered_10045d4c(undefined8 param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  recovered_1003ffa0((void *)param_2,0,0x90);
  return 0;
}

#undef DAT_10050554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d80
 */

undefined8 recovered_10045d80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10045858();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d94
 */

undefined8 recovered_10045d94(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d98
 */

undefined8 recovered_10045d98(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d9c
 */

undefined8 recovered_10045d9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045da0
 */

undefined8 recovered_10045da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045da4
 */

undefined8 recovered_10045da4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045da8
 */

undefined8 recovered_10045da8(undefined8 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == (undefined4 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_2 = 0;
  return 0;
}

#undef DAT_10050554

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045dcc
 */

undefined8 recovered_10045dcc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  recovered_1003ffa0((void *)param_1,0,0xc0);
  pf_varargs_100414cc_1((char *)param_1,0x20,&DAT_10049050,((uintptr_t)pf_module_state + 0x1d20U));
  pf_varargs_100414cc_1((char *)(param_1 + 0x20),0x20,&DAT_10049050,((uintptr_t)pf_module_state + 0x49eU));
  pf_varargs_100414cc_1((char *)(param_1 + 0x40),0x20,&DAT_10049050,((uintptr_t)pf_module_state + 0x1d26U));
  pf_varargs_100414cc_1((char *)(param_1 + 0x60),0x40,&DAT_10049050,((uintptr_t)pf_module_state + 0x1d2aU));
  pf_varargs_100414cc_1((char *)(param_1 + 0xa0),0x20,&DAT_10049050,((uintptr_t)pf_module_state + 0x39cU));
  return 0;
}

#undef DAT_10049050
#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef str_100494ee
#define str_100494ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045e7c
 */

undefined8 recovered_10045e7c(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10040274(str_100494ee);
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10050554 = 0x16;
  }
  else {
    if (uVar1 < param_2) {
      recovered_1003fdb4((void *)param_1,str_100494ee,uVar1 + 1);
      return 0;
    }
    recovered_1003fdb4((void *)param_1,str_100494ee,param_2);
    DAT_10050554 = 0x3f;
  }
  return 0xffffffff;
}

#undef DAT_10050554
#undef str_100494ee

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051090
#define DAT_10051090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8040U)))
#undef DAT_10051098
#define DAT_10051098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8048U)))
#undef DAT_100510a0
#define DAT_100510a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8050U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045ef4
 */

undefined8 recovered_10045ef4(uint param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;

  if (param_1 - 0x20 < 0xffffffe1) {
    DAT_10050554 = 0x16;
    return 0xffffffffffffffff;
  }
  lVar1 = (ulong)param_1 * 0x18;
  uVar2 = *(undefined8 *)(&DAT_10051090 + lVar1);
  *(undefined8 *)(&DAT_10051090 + lVar1) = param_2;
  *(undefined8 *)(&DAT_100510a0 + lVar1) = 0;
  *(undefined8 *)(&DAT_10051098 + lVar1) = 0;
  return uVar2;
}

#undef DAT_10050554
#undef DAT_10051090
#undef DAT_10051098
#undef DAT_100510a0

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051090
#define DAT_10051090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8040U)))
#undef DAT_10051098
#define DAT_10051098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8048U)))
#undef DAT_100510a0
#define DAT_100510a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8050U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045f3c
 */

undefined8 recovered_10045f3c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  if (param_1 - 0x20 < 0xffffffe1) {
    DAT_10050554 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      lVar1 = (ulong)param_1 * 0x18;
      uVar3 = *(undefined8 *)(&DAT_10051098 + lVar1);
      uVar2 = *(undefined8 *)(&DAT_10051090 + lVar1);
      param_3[2] = *(undefined8 *)(&DAT_100510a0 + lVar1);
      param_3[1] = uVar3;
      *param_3 = uVar2;
    }
    uVar2 = 0;
    if (param_2 != (undefined8 *)0x0) {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      lVar1 = (ulong)param_1 * 0x18;
      *(undefined8 *)(&DAT_100510a0 + lVar1) = param_2[2];
      *(undefined8 *)(&DAT_10051098 + lVar1) = uVar4;
      *(undefined8 *)(&DAT_10051090 + lVar1) = uVar3;
    }
  }
  return uVar2;
}

#undef DAT_10050554
#undef DAT_10051090
#undef DAT_10051098
#undef DAT_100510a0

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051390
#define DAT_10051390 (*(uint *)(((uintptr_t)pf_module_state + 0x8340U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045fa8
 */

undefined8 recovered_10045fa8(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != (uint *)0x0) {
    *param_3 = DAT_10051390;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (param_1 == 3) {
    DAT_10051390 = *param_2;
  }
  else if (param_1 == 2) {
    DAT_10051390 = DAT_10051390 & (*param_2 ^ 0xffffffff);
  }
  else {
    if (param_1 != 1) {
      DAT_10050554 = 0x16;
      return 0xffffffff;
    }
    DAT_10051390 = DAT_10051390 | *param_2;
  }
  return 0;
}

#undef DAT_10050554
#undef DAT_10051390

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051390
#define DAT_10051390 (*(uint *)(((uintptr_t)pf_module_state + 0x8340U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046024
 */

undefined8 recovered_10046024(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != (uint *)0x0) {
    *param_3 = DAT_10051390;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (param_1 == 3) {
    DAT_10051390 = *param_2;
  }
  else if (param_1 == 2) {
    DAT_10051390 = DAT_10051390 & (*param_2 ^ 0xffffffff);
  }
  else {
    if (param_1 != 1) {
      DAT_10050554 = 0x16;
      return 0xffffffff;
    }
    DAT_10051390 = DAT_10051390 | *param_2;
  }
  return 0;
}

#undef DAT_10050554
#undef DAT_10051390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046028
 */

undefined8 recovered_10046028(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004602c
 */

undefined8 recovered_1004602c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  iVar1 = recovered_10045944();
  uVar2 = 0;
  if ((param_1 != 0) && (iVar1 != param_1)) {
    DAT_10050554 = 3;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046068
 */

undefined8 recovered_10046068(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0;
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046084
 */

undefined8 recovered_10046084(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0xffffffff;
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100460ac
 */

undefined8 recovered_100460ac(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (uint *)0x0) || (param_2 - 0x20 < 0xffffffe1)) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = *param_1 | 1 << (ulong)(param_2 & 0x1f);
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100460ec
 */

undefined8 recovered_100460ec(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (uint *)0x0) || (param_2 - 0x20 < 0xffffffe1)) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = *param_1 & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  return 0;
}

#undef DAT_10050554

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004612c
 */

uint recovered_1004612c(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (uint *)0x0) || (param_2 - 0x20 < 0xffffffe1)) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  return *param_1 >> (ulong)(param_2 & 0x1f) & 1;
}

#undef DAT_10050554

#undef DAT_1004b1e0
#define DAT_1004b1e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2190U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051394
#define DAT_10051394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8344U)))
#undef DAT_10051398
#define DAT_10051398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8348U)))
#undef DAT_100513a0
#define DAT_100513a0 (*(int *)(((uintptr_t)pf_module_state + 0x8350U)))
#undef DAT_100513a4
#define DAT_100513a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8354U)))
#undef DAT_100513b0
#define DAT_100513b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8360U)))
#undef UNK_100513ac
#define UNK_100513ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x835cU)))
#undef UNK_100513b4
#define UNK_100513b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8364U)))
#undef UNK_100513b8
#define UNK_100513b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8368U)))
#undef _DAT_10051394
#define _DAT_10051394 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8344U)))
#undef _DAT_100513a4
#define _DAT_100513a4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8354U)))
#undef _DAT_100513b0
#define _DAT_100513b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8360U)))
#undef uRam00000000100513ac
#define uRam00000000100513ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x835cU)))
#undef uRam00000000100513b4
#define uRam00000000100513b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8364U)))
#undef uRam00000000100513b8
#define uRam00000000100513b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8368U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10046160(uint param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;

  if ((param_1 < 3) && (param_2 != (undefined8 *)0x0)) {
    if (PF_PART4(DAT_10051398, 4) == 0 && DAT_100513a0 == 0) {
      recovered_1003ffa0(&DAT_10051394,0,0x2c);
      DAT_100513a0 = 0x588;
      PF_PART4(DAT_10051398, 0) = (undefined4)DAT_1004b1e0;
      PF_PART4(DAT_10051398, 4) = (int)((ulong)DAT_1004b1e0 >> 0x20);
    }
    uVar5 = _DAT_100513a4;
    uVar6 = 0;
    uVar2 = CONCAT44(DAT_100513a0,PF_PART4(DAT_10051398, 4));
    uVar1 = CONCAT44((undefined4)DAT_10051398,_DAT_10051394);
    uVar3 = CONCAT44(_DAT_100513b0,uRam00000000100513ac);
    uVar4 = CONCAT44(uRam00000000100513b4,_DAT_100513b0);
    *(undefined8 *)((long)param_2 + 0x24) = uRam00000000100513b8;
    *(undefined8 *)((long)param_2 + 0x1c) = uVar4;
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar3;
    param_2[2] = uVar5;
  }
  else {
    DAT_10050554 = 0x19;
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

#undef DAT_1004b1e0
#undef DAT_10050554
#undef DAT_10051394
#undef DAT_10051398
#undef DAT_100513a0
#undef DAT_100513a4
#undef DAT_100513b0
#undef UNK_100513ac
#undef UNK_100513b4
#undef UNK_100513b8
#undef _DAT_10051394
#undef _DAT_100513a4
#undef _DAT_100513b0
#undef uRam00000000100513ac
#undef uRam00000000100513b4
#undef uRam00000000100513b8

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_10051394
#define DAT_10051394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8344U)))
#undef DAT_10051398
#define DAT_10051398 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8348U)))
#undef DAT_100513a4
#define DAT_100513a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8354U)))
#undef DAT_100513b0
#define DAT_100513b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8360U)))
#undef UNK_100513ac
#define UNK_100513ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x835cU)))
#undef UNK_100513b4
#define UNK_100513b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8364U)))
#undef UNK_100513b8
#define UNK_100513b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8368U)))
#undef _DAT_10051394
#define _DAT_10051394 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8344U)))
#undef _DAT_100513a4
#define _DAT_100513a4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8354U)))
#undef _DAT_100513b0
#define _DAT_100513b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8360U)))
#undef ram0x1005139c
#define ram0x1005139c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x834cU)))
#undef uRam00000000100513ac
#define uRam00000000100513ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x835cU)))
#undef uRam00000000100513b4
#define uRam00000000100513b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8364U)))
#undef uRam00000000100513b8
#define uRam00000000100513b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8368U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100461f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100461f0(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 3) && (param_3 != (undefined8 *)0x0)) {
    uRam00000000100513b8 = *(undefined8 *)((long)param_3 + 0x24);
    uRam00000000100513b4 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x1c) >> 0x20);
    ram0x1005139c = param_3[1];
    _DAT_10051394 = *param_3;
    uRam00000000100513ac = (undefined4)param_3[3];
    _DAT_100513b0 = (undefined4)((ulong)param_3[3] >> 0x20);
    _DAT_100513a4 = param_3[2];
    return 0;
  }
  DAT_10050554 = 0x19;
  return 0xffffffff;
}

#undef DAT_10050554
#undef DAT_10051394
#undef DAT_10051398
#undef DAT_100513a4
#undef DAT_100513b0
#undef UNK_100513ac
#undef UNK_100513b4
#undef UNK_100513b8
#undef _DAT_10051394
#undef _DAT_100513a4
#undef _DAT_100513b0
#undef ram0x1005139c
#undef uRam00000000100513ac
#undef uRam00000000100513b4
#undef uRam00000000100513b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046230
 */

ulong recovered_10046230(ulong param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[3] = param_2[3] & 0xfffffa77;
    param_1 = *(ulong *)(param_2 + 1) | 0xb0000000b00;
    *(ulong *)(param_2 + 1) =
         CONCAT44((int)(param_1 >> 0x20),(int)*(ulong *)(param_2 + 1)) & 0xfffffffffffffffe;
  }
  return param_1;
}


#undef DAT_1004b1e8
#define DAT_1004b1e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2198U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046264
 */

undefined8 recovered_10046264(uint param_1,long param_2,undefined8 *in_stack_00000000)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (2 < param_1) {
    DAT_10050554 = 0x19;
    return 0xffffffff;
  }
  if (param_2 == 0x8004667e) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0x40087468) {
      if (in_stack_00000000 != (undefined8 *)0x0) {
        *in_stack_00000000 = DAT_1004b1e8;
        return 0;
      }
      DAT_10050554 = 0x16;
    }
    else {
      DAT_10050554 = 0x19;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_1004b1e8
#undef DAT_10050554

#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046304
 */

int recovered_10046304(int param_1,long param_2,long param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  iVar3 = 0;
  for (uVar5 = 0; ((long)uVar5 < (long)param_1 && (uVar5 < 0x100)); uVar5 = uVar5 + 1) {
    uVar6 = uVar5 >> 5;
    uVar4 = (uint)uVar5;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + uVar6 * 4);
      uVar2 = 1 << (ulong)(uVar4 & 0x1f);
      if ((uVar1 & uVar2) != 0) {
        if (uVar5 == 0) {
          iVar3 = iVar3 + 1;
        }
        else {
          *(uint *)(param_2 + uVar6 * 4) = uVar1 & (uVar2 ^ 0xffffffff);
        }
      }
    }
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_3 + uVar6 * 4);
      uVar2 = 1 << (ulong)(uVar4 & 0x1f);
      if ((uVar1 & uVar2) != 0) {
        if (((uVar5 < 0x20) && ((int *)(&PTR_DAT_10050450)[uVar5] != (int *)0x0)) &&
           (*(int *)(&PTR_DAT_10050450)[uVar5] == 0x54474c46)) {
          iVar3 = iVar3 + 1;
        }
        else {
          *(uint *)(param_3 + uVar6 * 4) = uVar1 & (uVar2 ^ 0xffffffff);
        }
      }
    }
    if (param_4 != 0) {
      uVar1 = *(uint *)(param_4 + uVar6 * 4);
      uVar4 = 1 << (ulong)(uVar4 & 0x1f);
      if ((uVar1 & uVar4) != 0) {
        *(uint *)(param_4 + uVar6 * 4) = uVar1 & (uVar4 ^ 0xffffffff);
      }
    }
  }
  return iVar3;
}

#undef PTR_DAT_10050450

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef PTR_DAT_10050450
#define PTR_DAT_10050450 (*(void * *)(((uintptr_t)pf_module_state + 0x7400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100463d0
 */

int recovered_100463d0(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;

  if ((param_1 == 0) && (param_2 != 0)) {
    DAT_10050554 = 0xe;
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    puVar1 = (undefined2 *)(param_1 + 6);
    for (uVar3 = (ulong)param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      if (((*(uint *)(puVar1 + -3) < 0x20) &&
          ((int *)(&PTR_DAT_10050450)[*(uint *)(puVar1 + -3)] != (int *)0x0)) &&
         (*(int *)(&PTR_DAT_10050450)[*(uint *)(puVar1 + -3)] == 0x54474c46)) {
        uVar4 = (ushort)puVar1[-1] & 5;
        if ((puVar1[-1] & 5) != 0) goto LAB_10046450;
      }
      else {
        uVar4 = 0x20;
LAB_10046450:
        *puVar1 = (short)uVar4;
        uVar4 = 1;
      }
      iVar2 = iVar2 + uVar4;
      puVar1 = puVar1 + 4;
    }
  }
  return iVar2;
}

#undef DAT_10050554
#undef PTR_DAT_10050450

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004646c
 */

undefined8 recovered_1004646c(int *param_1,undefined *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0x16;
  if ((param_1 != (int *)0x0) && (param_2 != (undefined *)0x0)) {
    if (*param_1 != 0) {
      return 0;
    }
    *param_1 = 1;
    (*(code *)param_2)();
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_10050440
#define DAT_10050440 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x73f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100464a8
 */

undefined8
recovered_100464a8(long *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == (undefined *)0x0) {
    return 0x16;
  }
  if (param_1 != (long *)0x0) {
    lVar1 = DAT_10050440 + 1;
    *param_1 = DAT_10050440;
    DAT_10050440 = lVar1;
  }
  (*(code *)param_3)(param_4);
  return 0;
}

#undef DAT_10050440

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100464e4
 */

undefined8 recovered_100464e4(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100464f0
 */

undefined8 recovered_100464f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100464f4
 */

undefined8 recovered_100464f4(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046500
 */

undefined8 recovered_10046500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046504
 */

undefined8 recovered_10046504(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046510
 */

undefined8 recovered_10046510(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046514
 */

undefined8 recovered_10046514(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046518
 */

undefined8 recovered_10046518(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004651c
 */

undefined8 recovered_1004651c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046520
 */

undefined8 recovered_10046520(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004652c
 */

undefined8 recovered_1004652c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046530
 */

undefined8 recovered_10046530(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004653c
 */

undefined8 recovered_1004653c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046548
 */

undefined8 recovered_10046548(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004654c
 */

undefined8 recovered_1004654c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046550
 */

undefined8 recovered_10046550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046554
 */

undefined8 recovered_10046554(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046558
 */

undefined8 recovered_10046558(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10051491
#define DAT_10051491 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8441U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004655c
 */

undefined8 recovered_1004655c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;

  if (param_1 == (int *)0x0) {
    uVar1 = 0x16;
  }
  else {
    for (lVar2 = 0; lVar2 != 0x1f; lVar2 = lVar2 + 1) {
      if (((&DAT_10051491)[lVar2] & 1) == 0) {
        (&DAT_10051491)[lVar2] = 1;
        *(undefined8 *)(lVar2 * 8 + ((uintptr_t)pf_module_state + 0x86c0U)) = 0;
        *param_1 = (int)lVar2 + 1;
        return 0;
      }
    }
    uVar1 = 0xb;
  }
  return uVar1;
}

#undef DAT_10051491

#undef DAT_10051490
#define DAT_10051490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8440U)))
#undef DAT_10051708
#define DAT_10051708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x86b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100465c4
 */

undefined8 recovered_100465c4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x20) {
    (&DAT_10051490)[param_1] = 0;
    *(undefined8 *)(&DAT_10051708 + (ulong)param_1 * 8) = 0;
    return 0;
  }
  return 0x16;
}

#undef DAT_10051490
#undef DAT_10051708

#undef DAT_10051490
#define DAT_10051490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8440U)))
#undef DAT_10051708
#define DAT_10051708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x86b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100465f4
 */

undefined8 recovered_100465f4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x20) && ((&DAT_10051490)[param_1] == '\x01')) {
    return *(undefined8 *)(&DAT_10051708 + (ulong)param_1 * 8);
  }
  return 0;
}

#undef DAT_10051490
#undef DAT_10051708

#undef DAT_10051490
#define DAT_10051490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8440U)))
#undef DAT_10051708
#define DAT_10051708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x86b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046628
 */

undefined8 recovered_10046628(uint param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x20) && ((&DAT_10051490)[param_1] == '\x01')) {
    *(undefined8 *)(&DAT_10051708 + (ulong)param_1 * 8) = param_2;
    return 0;
  }
  return 0x16;
}

#undef DAT_10051490
#undef DAT_10051708

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046664
 */

undefined8 recovered_10046664(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046670
 */

undefined8 recovered_10046670(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046674
 */

undefined8 recovered_10046674(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046678
 */

undefined8 recovered_10046678(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004667c
 */

undefined8 recovered_1004667c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046680
 */

long recovered_10046680(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10045944();
  return (long)iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046698
 */

bool recovered_10046698(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466a4
 */

undefined8 recovered_100466a4(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  *param_1 = 0;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466b0
 */

undefined8 recovered_100466b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466b4
 */

undefined8 recovered_100466b4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466b8
 */

undefined8 recovered_100466b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466bc
 */

undefined8 recovered_100466bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050550
#define DAT_10050550 (*(int *)(((uintptr_t)pf_module_state + 0x7500U)))
#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#define local_250 (*(char (*)[512])(frame + 528))
#define acStack_450 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466c0
 */

undefined8
recovered_100466c0(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  unsigned char frame[1152] __attribute__((aligned(16))) = {0};

  char *text;
  ulong count;
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;

  if (param_2 == 0) {
    return 0x16;
  }
  local_250[0] = '\0';
  if ((param_5 == (long *)0x0) || (text = (char *)*param_5, text == (char *)0x0)) {
    pf_varargs_100414cc_1(local_250,0x200,&DAT_10049050,param_2);
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    while (text != (char *)0x0) {
      count = recovered_10040274(text);
      if (0x1ff < lVar2 + count + 2) {
        return 7;
      }
      if ((int)uVar3 != 0) {
        local_250[lVar2] = ' ';
        lVar2 = lVar2 + 1;
      }
      recovered_1003fdb4(local_250 + lVar2,(void *)param_5[uVar3],count);
      lVar2 = lVar2 + count;
      local_250[lVar2] = '\0';
      uVar3 = (ulong)((int)uVar3 + 1);
      text = (char *)param_5[uVar3];
    }
  }
  acStack_450[0] = '\0';
  uVar1 = recovered_100455c8(local_250,acStack_450);
  if ((int)uVar1 == 0) {
    if (acStack_450[0] != '\0') {
      recovered_100434b0(acStack_450,PTR_DAT_10050428);
      recovered_10043468(10,PTR_DAT_10050428);
    }
    uVar1 = 2;
  }
  else {
    if (acStack_450[0] != '\0') {
      recovered_100434b0(acStack_450,PTR_DAT_100502e0);
      recovered_10043468(10,PTR_DAT_100502e0);
    }
    uVar1 = 0;
    if (param_1 != (int *)0x0) {
      DAT_10050550 = DAT_10050550 + 1;
      *param_1 = DAT_10050550;
    }
  }
  return uVar1;
}

#undef DAT_10049050
#undef DAT_10050550
#undef PTR_DAT_100502e0
#undef PTR_DAT_10050428
#undef local_250
#undef acStack_450

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050550
#define DAT_10050550 (*(int *)(((uintptr_t)pf_module_state + 0x7500U)))
#undef PTR_DAT_100502e0
#define PTR_DAT_100502e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7290U)))
#undef PTR_DAT_10050428
#define PTR_DAT_10050428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x73d8U)))
#define acStack_250 (*(char (*)[512])(frame + 528))
#define acStack_450 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100467f8
 */

undefined8
recovered_100467f8(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  unsigned char frame[1152] __attribute__((aligned(16))) = {0};

  char *text;
  ulong count;
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;

  if (param_2 == 0) {
    return 0x16;
  }
  acStack_250[0] = '\0';
  if ((param_5 == (long *)0x0) || (text = (char *)*param_5, text == (char *)0x0)) {
    pf_varargs_100414cc_1(acStack_250,0x200,&DAT_10049050,param_2);
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    while (text != (char *)0x0) {
      count = recovered_10040274(text);
      if (0x1ff < lVar2 + count + 2) {
        return 7;
      }
      if ((int)uVar3 != 0) {
        acStack_250[lVar2] = ' ';
        lVar2 = lVar2 + 1;
      }
      recovered_1003fdb4(acStack_250 + lVar2,(void *)param_5[uVar3],count);
      lVar2 = lVar2 + count;
      acStack_250[lVar2] = '\0';
      uVar3 = (ulong)((int)uVar3 + 1);
      text = (char *)param_5[uVar3];
    }
  }
  acStack_450[0] = '\0';
  uVar1 = recovered_100455c8(acStack_250,acStack_450);
  if ((int)uVar1 == 0) {
    if (acStack_450[0] != '\0') {
      recovered_100434b0(acStack_450,PTR_DAT_10050428);
      recovered_10043468(10,PTR_DAT_10050428);
    }
    uVar1 = 2;
  }
  else {
    if (acStack_450[0] != '\0') {
      recovered_100434b0(acStack_450,PTR_DAT_100502e0);
      recovered_10043468(10,PTR_DAT_100502e0);
    }
    uVar1 = 0;
    if (param_1 != (int *)0x0) {
      DAT_10050550 = DAT_10050550 + 1;
      *param_1 = DAT_10050550;
    }
  }
  return uVar1;
}

#undef DAT_10049050
#undef DAT_10050550
#undef PTR_DAT_100502e0
#undef PTR_DAT_10050428
#undef acStack_250
#undef acStack_450

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_1004ad19
#define DAT_1004ad19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc9U)))
#undef DAT_1004ad8a
#define DAT_1004ad8a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3aU)))
#undef DAT_1004ad95
#define DAT_1004ad95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d45U)))
#undef DAT_1004ad9a
#define DAT_1004ad9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4aU)))
#undef DAT_10051518
#define DAT_10051518 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84c8U)))
#undef DAT_10051520
#define DAT_10051520 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x84d0U)))
#undef DAT_10051528
#define DAT_10051528 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84d8U)))
#undef DAT_10051530
#define DAT_10051530 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x84e0U)))
#undef DAT_10051538
#define DAT_10051538 (*(char * *)(((uintptr_t)pf_module_state + 0x84e8U)))
#undef DAT_10051540
#define DAT_10051540 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x84f0U)))
#undef DAT_10051548
#define DAT_10051548 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84f8U)))
#undef DAT_10051588
#define DAT_10051588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8538U)))
#undef str_1004ad8f
#define str_1004ad8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3fU)))
#undef str_1004ad9f
#define str_1004ad9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100467fc
 */

undefined8 * recovered_100467fc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  char *pcVar2;
  char *vararg0;

  if (param_1 == 0) {
    DAT_10051518 = &DAT_1004ad8a;
    DAT_10051520 = &DAT_1004938a;
    DAT_10051528 = 0;
    DAT_10051530 = &DAT_1004ad8a;
    DAT_10051538 = str_1004ad8f;
    DAT_10051540 = &DAT_1004ad19;
    return &DAT_10051518;
  }
  pcVar2 = (char *)recovered_10045144(&DAT_1004ad95);
  vararg0 = &DAT_1004ad9a;
  if ((pcVar2 != (char *)0x0) && (vararg0 = &DAT_1004ad9a, *pcVar2 != '\0')) {
    vararg0 = pcVar2;
  }
  pf_varargs_100414cc_1(&DAT_10051548,0x40,&DAT_10049050,(ulonglong)vararg0);
  pf_varargs_100414cc_1(&DAT_10051588,0x80,str_1004ad9f,((uintptr_t)pf_module_state + 0x84f8U));
  DAT_10051518 = &DAT_10051548;
  DAT_10051520 = &DAT_1004938a;
  DAT_10051528 = 0x3e8000003e8;
  DAT_10051530 = &DAT_10051548;
  DAT_10051538 = &DAT_10051588;
  DAT_10051540 = &DAT_1004ad19;
  puVar1 = &DAT_10051518;
  if (param_1 != 1000) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

#undef DAT_10049050
#undef DAT_1004938a
#undef DAT_1004ad19
#undef DAT_1004ad8a
#undef DAT_1004ad95
#undef DAT_1004ad9a
#undef DAT_10051518
#undef DAT_10051520
#undef DAT_10051528
#undef DAT_10051530
#undef DAT_10051538
#undef DAT_10051540
#undef DAT_10051548
#undef DAT_10051588
#undef str_1004ad8f
#undef str_1004ad9f

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_1004ad19
#define DAT_1004ad19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc9U)))
#undef DAT_1004ad8a
#define DAT_1004ad8a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3aU)))
#undef DAT_1004ad95
#define DAT_1004ad95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d45U)))
#undef DAT_1004ad9a
#define DAT_1004ad9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4aU)))
#undef DAT_10051518
#define DAT_10051518 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84c8U)))
#undef DAT_10051520
#define DAT_10051520 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x84d0U)))
#undef DAT_10051528
#define DAT_10051528 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84d8U)))
#undef DAT_10051530
#define DAT_10051530 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x84e0U)))
#undef DAT_10051538
#define DAT_10051538 (*(char * *)(((uintptr_t)pf_module_state + 0x84e8U)))
#undef DAT_10051540
#define DAT_10051540 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x84f0U)))
#undef DAT_10051548
#define DAT_10051548 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84f8U)))
#undef DAT_10051588
#define DAT_10051588 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8538U)))
#undef str_1004ad8f
#define str_1004ad8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3fU)))
#undef str_1004ad9f
#define str_1004ad9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100468ec
 */

/* WARNING: Removing unreachable block (ram,0x100468a8) */
/* WARNING: Removing unreachable block (ram,0x100468b4) */

undefined8 * recovered_100468ec(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;

  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    iVar1 = recovered_10040298((char *)param_1,&DAT_1004ad8a);
    if (iVar1 == 0) {
      puVar3 = &DAT_10051518;
      DAT_10051518 = &DAT_1004ad8a;
      DAT_10051520 = &DAT_1004938a;
      DAT_10051528 = 0;
      DAT_10051530 = &DAT_1004ad8a;
      DAT_10051538 = str_1004ad8f;
      DAT_10051540 = &DAT_1004ad19;
    }
    else {
      pcVar2 = (char *)recovered_10045144(&DAT_1004ad95);
      pcVar4 = &DAT_1004ad9a;
      if ((pcVar2 != (char *)0x0) && (pcVar4 = &DAT_1004ad9a, *pcVar2 != '\0')) {
        pcVar4 = pcVar2;
      }
      iVar1 = recovered_10040298((char *)param_1,pcVar4);
      if (iVar1 == 0) {
        pcVar2 = (char *)recovered_10045144(&DAT_1004ad95);
        pcVar4 = &DAT_1004ad9a;
        if ((pcVar2 != (char *)0x0) && (pcVar4 = &DAT_1004ad9a, *pcVar2 != '\0')) {
          pcVar4 = pcVar2;
        }
        pf_varargs_100414cc_1(&DAT_10051548,0x40,&DAT_10049050,(ulonglong)pcVar4);
        pf_varargs_100414cc_1(&DAT_10051588,0x80,str_1004ad9f,((uintptr_t)pf_module_state + 0x84f8U));
        DAT_10051518 = &DAT_10051548;
        DAT_10051520 = &DAT_1004938a;
        DAT_10051528 = 0x3e8000003e8;
        DAT_10051530 = &DAT_10051548;
        DAT_10051538 = &DAT_10051588;
        DAT_10051540 = &DAT_1004ad19;
        return &DAT_10051518;
      }
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

#undef DAT_10049050
#undef DAT_1004938a
#undef DAT_1004ad19
#undef DAT_1004ad8a
#undef DAT_1004ad95
#undef DAT_1004ad9a
#undef DAT_10051518
#undef DAT_10051520
#undef DAT_10051528
#undef DAT_10051530
#undef DAT_10051538
#undef DAT_10051540
#undef DAT_10051548
#undef DAT_10051588
#undef str_1004ad8f
#undef str_1004ad9f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046990
 */

void recovered_10046990(undefined8 param_1,long *param_2,long param_3,ulong param_4,
                       undefined8 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int extraout_w0 = 0;
  undefined8 *puVar1;

  if (((param_2 != (long *)0x0) && (param_3 != 0)) && (param_5 != (undefined8 *)0x0)) {
    puVar1 = recovered_100467fc((int)param_1);
    if (puVar1 == (undefined8 *)0x0) {
      param_2 = (long *)0x0;
    }
    else {
      recovered_100469f8(puVar1,param_2,param_3,param_4);
      if (extraout_w0 != 0) {
        param_2 = (long *)0x0;
      }
    }
    *param_5 = param_2;
  }
  return;
}


#define lStack_28 (*(long *)(frame + 24))
#define uStack_30 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100469f8
 */

void recovered_100469f8(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uStack_30 = param_4;
  lStack_28 = param_3;
  recovered_1003ffa0(param_2,0,0x30);
  param_2[2] = param_1[2];
  uVar1 = recovered_10048b14((undefined1 *)*param_1,param_2,&lStack_28,&uStack_30);
  if (((((int)uVar1 == 0) &&
       (uVar1 = recovered_10048b14((undefined1 *)param_1[1],param_2 + 1,&lStack_28,&uStack_30),
       (int)uVar1 == 0)) &&
      (uVar1 = recovered_10048b14((undefined1 *)param_1[3],param_2 + 3,&lStack_28,&uStack_30),
      (int)uVar1 == 0)) &&
     (uVar1 = recovered_10048b14((undefined1 *)param_1[4],param_2 + 4,&lStack_28,&uStack_30),
     (int)uVar1 == 0)) {
    recovered_10048b14((undefined1 *)param_1[5],param_2 + 5,&lStack_28,&uStack_30);
  }
  return;
}

#undef lStack_28
#undef uStack_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046a84
 */

undefined8 recovered_10046a84(long param_1,long param_2,long param_3,ulong param_4,long *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x0 = 0;

  uVar1 = 0x16;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_5 != (long *)0x0)) {
    puVar2 = recovered_100468ec(param_1);
    if (puVar2 == (undefined8 *)0x0) {
      param_2 = 0;
      uVar1 = 0;
    }
    else {
      recovered_100469f8(puVar2,(long *)param_2,param_3,param_4);
      if ((int)extraout_x0 != 0) {
        param_2 = 0;
      }
      uVar1 = extraout_x0;
    }
    *param_5 = param_2;
  }
  return uVar1;
}


#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_10051460
#define DAT_10051460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8410U)))
#undef DAT_10051468
#define DAT_10051468 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8418U)))
#undef DAT_100514b0
#define DAT_100514b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8460U)))
#undef DAT_100514b8
#define DAT_100514b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8468U)))
#undef DAT_100514c0
#define DAT_100514c0 (*(int *)(((uintptr_t)pf_module_state + 0x8470U)))
#undef DAT_100514c8
#define DAT_100514c8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8478U)))
#undef str_1004ada8
#define str_1004ada8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d58U)))
#undef str_1004adae
#define str_1004adae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046af0
 */

undefined8 * recovered_10046af0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;

  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = 1000;
  }
  pcVar1 = str_1004ada8;
  if (param_1 != 0) {
    pcVar1 = str_1004adae;
  }
  puVar2 = recovered_100467fc(iVar3);
  DAT_10051460 = *puVar2;
  DAT_10051468 = 0;
  DAT_100514b8 = &DAT_1004938a;
  DAT_100514c0 = param_1;
  DAT_100514c8 = &DAT_10051460;
  DAT_100514b0 = pcVar1;
  puVar2 = &DAT_100514b0;
  if (param_1 != 1000 && param_1 != 0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

#undef DAT_1004938a
#undef DAT_10051460
#undef DAT_10051468
#undef DAT_100514b0
#undef DAT_100514b8
#undef DAT_100514c0
#undef DAT_100514c8
#undef str_1004ada8
#undef str_1004adae

#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_10051460
#define DAT_10051460 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8410U)))
#undef DAT_10051468
#define DAT_10051468 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8418U)))
#undef DAT_100514b0
#define DAT_100514b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8460U)))
#undef DAT_100514b8
#define DAT_100514b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8468U)))
#undef DAT_100514c0
#define DAT_100514c0 (*(int *)(((uintptr_t)pf_module_state + 0x8470U)))
#undef DAT_100514c8
#define DAT_100514c8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8478U)))
#undef str_1004ada8
#define str_1004ada8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d58U)))
#undef str_1004adae
#define str_1004adae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046b60
 */

undefined8 * recovered_10046b60(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;

  if (param_1 == 0) {
    return (undefined8 *)0x0;
  }
  iVar2 = recovered_10040298((char *)param_1,str_1004ada8);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = recovered_10040298((char *)param_1,str_1004adae);
    if (iVar3 != 0) {
      return (undefined8 *)0x0;
    }
    iVar3 = 1000;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = 1000;
  }
  pcVar1 = str_1004ada8;
  if (iVar3 != 0) {
    pcVar1 = str_1004adae;
  }
  puVar4 = recovered_100467fc(iVar2);
  DAT_10051460 = *puVar4;
  DAT_10051468 = 0;
  DAT_100514b8 = &DAT_1004938a;
  DAT_100514c0 = iVar3;
  DAT_100514c8 = &DAT_10051460;
  DAT_100514b0 = pcVar1;
  puVar4 = &DAT_100514b0;
  if (iVar3 != 1000 && iVar3 != 0) {
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}

#undef DAT_1004938a
#undef DAT_10051460
#undef DAT_10051468
#undef DAT_100514b0
#undef DAT_100514b8
#undef DAT_100514c0
#undef DAT_100514c8
#undef str_1004ada8
#undef str_1004adae

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_100513c0
#define DAT_100513c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046bb4
 */

undefined8 recovered_10046bb4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_100414cc_1(&DAT_100513c0,0x60,&DAT_10049050,((uintptr_t)pf_module_state + 0x1d64U));
  DAT_10050554 = 0x4e;
  return 0;
}

#undef DAT_10049050
#undef DAT_10050554
#undef DAT_100513c0

#undef DAT_10049050
#define DAT_10049050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_100513c0
#define DAT_100513c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c04
 */

undefined8 recovered_10046c04(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_100414cc_1(&DAT_100513c0,0x60,&DAT_10049050,((uintptr_t)pf_module_state + 0x1d94U));
  DAT_10050554 = 0x4e;
  return 0;
}

#undef DAT_10049050
#undef DAT_10050554
#undef DAT_100513c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c54
 */

undefined8 recovered_10046c54(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_100513c0
#define DAT_100513c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c58
 */

undefined1 * recovered_10046c58(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)0x0;
  if (DAT_100513c0 != '\0') {
    puVar1 = &DAT_100513c0;
  }
  return puVar1;
}

#undef DAT_100513c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c70
 */

ulong recovered_10046c70(char *text,ulong max_length)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (text == (char *)0x0) {
    max_length = 0;
  }
  else {
    for (uVar1 = 0; max_length != uVar1; uVar1 = uVar1 + 1) {
      if (text[uVar1] == '\0') {
        return uVar1;
      }
    }
  }
  return max_length;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ca4
 */

long recovered_10046ca4(undefined1 *param_1,long in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  void *destination;

  count = recovered_10046c70(param_1,in_x1);
  destination = recovered_1003fce0(count + 1);
  if (destination != (void *)0x0) {
    recovered_1003fdb4(destination,param_1,count);
    *(undefined1 *)((long)destination + count) = 0;
  }
  return (long)destination;
}


#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ce4
 */

int recovered_10046ce4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;

  pbVar4 = &DAT_1004938a;
  if (param_1 != (byte *)0x0) {
    pbVar4 = param_1;
  }
  pbVar5 = &DAT_1004938a;
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
  }
  while( true ) {
    bVar3 = *pbVar4;
    if (bVar3 == 0 && *pbVar5 == 0) {
      return 0;
    }
    uVar6 = (uint)bVar3;
    uVar1 = uVar6 | 0x20;
    if (0x19 < bVar3 - 0x41U) {
      uVar1 = uVar6;
    }
    uVar7 = (uint)*pbVar5;
    uVar2 = uVar7 | 0x20;
    if (0x19 < uVar7 - 0x41) {
      uVar2 = uVar7;
    }
    if (uVar1 - uVar2 != 0) break;
    if (uVar6 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    if (uVar7 != 0) {
      pbVar5 = pbVar5 + 1;
    }
  }
  return uVar1 - uVar2;
}

#undef DAT_1004938a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d54
 */

int recovered_10046d54(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;

  pbVar2 = param_2;
  pbVar3 = param_1;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (param_1 == (byte *)0x0) {
      uVar4 = 0;
    }
    else {
      bVar1 = *pbVar3;
      uVar4 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar4 = (uint)bVar1;
      }
    }
    if (param_2 == (byte *)0x0) break;
    bVar1 = *pbVar2;
    uVar5 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41U) {
      uVar5 = (uint)bVar1;
    }
    if ((uVar5 == 0) || (uVar4 == 0)) goto LAB_10046dc0;
    param_3 = param_3 + -1;
    pbVar3 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
    if (uVar4 != uVar5) goto LAB_10046dc0;
  }
  uVar5 = 0;
LAB_10046dc0:
  return uVar4 - uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046dcc
 */

int recovered_10046dcc(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;

  pbVar1 = (byte *)right;
  pbVar2 = (byte *)left;
  while( true ) {
    if (count == 0) {
      return 0;
    }
    if (left == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*pbVar2;
    }
    if (right == (char *)0x0) break;
    uVar4 = (uint)*pbVar1;
    if ((*pbVar1 == 0) || (uVar3 == 0)) goto LAB_10046e18;
    count = count - 1;
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    if (uVar3 != uVar4) goto LAB_10046e18;
  }
  uVar4 = 0;
LAB_10046e18:
  return uVar3 - uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e24
 */

void recovered_10046e24(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((param_2 != param_1) && (param_3 != 0)) {
    puVar2 = param_1 + param_3;
    if ((param_2 >= param_1 && param_2 <= puVar2) && (param_2 < param_1 || puVar2 != param_2)) {
      puVar3 = param_2 + param_3;
      uVar1 = param_3;
      if ((0xf < param_3) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (param_3 != 0 && (((int)param_2 + (int)param_3 & 7U) != 0)); param_3 = param_3 - 1) {
          param_2[param_3 - 1] = param_1[param_3 - 1];
        }
        for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
          *(undefined8 *)(param_2 + (param_3 - 8)) = *(undefined8 *)(param_1 + (param_3 - 8));
          *(undefined8 *)(param_2 + (param_3 - 0x10)) = *(undefined8 *)(param_1 + (param_3 - 0x10));
          *(undefined8 *)(param_2 + (param_3 - 0x18)) = *(undefined8 *)(param_1 + (param_3 - 0x18));
          *(undefined8 *)(param_2 + (param_3 - 0x20)) = *(undefined8 *)(param_1 + (param_3 - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = param_3; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)(param_2 + param_3 + lVar4 + -8) =
               *(undefined8 *)(param_1 + param_3 + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = param_2 + lVar4 + param_3;
        puVar2 = param_1 + lVar4 + param_3;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      recovered_1003fdb4(param_2,param_1,param_3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e34
 */

int recovered_10046e34(void *left,void *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < count) && ((((uint)right ^ (uint)left) & 7) == 0)) {
    for (lVar6 = 0; (uVar5 = count - lVar6, uVar5 != 0 && (((uint)left + (int)lVar6 & 7) != 0));
        lVar6 = lVar6 + 1) {
      iVar3 = (uint)*(byte *)((long)left + lVar6) - (uint)*(byte *)((long)right + lVar6);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)((long)left + lVar6) != *(long *)((long)right + lVar6)) {
        lVar4 = (long)left + lVar6;
        lVar6 = (long)right + lVar6;
        goto recovered_100401ac;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_100401ac;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_100401ac;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_100401ac;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_100401ac:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = (byte *)(lVar4 + lVar7);
          pbVar2 = (byte *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
          iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
        } while (iVar3 == 0);
        return iVar3;
      }
      lVar7 = lVar7 + 8;
    }
    left = (void *)((long)left + lVar7 + lVar6);
    right = (void *)((long)right + lVar7 + lVar6);
  }
  while( true ) {
    if (count == 0) {
      return 0;
    }
    if ((uint)*(byte *)left - (uint)*(byte *)right != 0) break;
    left = (void *)((long)left + 1);
    right = (void *)((long)right + 1);
    count = count - 1;
  }
  return (uint)*(byte *)left - (uint)*(byte *)right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e38
 */

char * recovered_10046e38(long param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  if (param_1 == 0) {
    if (param_3 == (long *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *param_3;
    }
  }
  pcVar4 = (char *)0x0;
  if (((param_3 != (long *)0x0) && (param_2 != 0)) && ((char *)param_1 != (char *)0x0)) {
    uVar1 = recovered_10040340((char *)param_1,(char *)param_2);
    pcVar3 = (char *)(param_1 + uVar1);
    if (*pcVar3 == '\0') {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar2 = recovered_10040388(pcVar3,(char *)param_2);
      pcVar4 = pcVar3;
      if (pcVar2 == (char *)0x0) {
        uVar1 = recovered_10040274(pcVar3);
        pcVar3 = pcVar3 + uVar1;
      }
      else {
        *pcVar2 = '\0';
        pcVar3 = pcVar2 + 1;
      }
    }
    *param_3 = (long)pcVar3;
  }
  return pcVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ec4
 */

void * recovered_10046ec4(void *memory,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;

  pbVar1 = (byte *)((long)memory + -1);
  do {
    if (count == 0) {
      return (void *)0x0;
    }
    pbVar1 = pbVar1 + 1;
    count = count - 1;
  } while ((uint)*pbVar1 != (value & 0xffU));
  return pbVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ee8
 */

char * recovered_10046ee8(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  if (text != (char *)0x0) {
    pcVar2 = (char *)0x0;
    pcVar3 = text;
    do {
      cVar1 = *pcVar3;
      text = pcVar3;
      if ((char)value != cVar1) {
        text = pcVar2;
      }
      pcVar2 = text;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return text;
}


#undef PTR_str_1004afa5_1004c3b0
#define PTR_str_1004afa5_1004c3b0 (*(char * *)(((uintptr_t)pf_module_state + 0x3360U)))
#undef str_1004b02c
#define str_1004b02c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f14
 */

char * recovered_10046f14(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 1U < 0x14) {
    return (&PTR_str_1004afa5_1004c3b0)[param_1 - 1U];
  }
  return str_1004b02c;
}

#undef PTR_str_1004afa5_1004c3b0
#undef str_1004b02c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f3c
 */

ulong recovered_10046f3c(char *text,char *reject)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  if ((text != (char *)0x0) && (reject != (char *)0x0)) {
    uVar2 = 0;
    while ((text[uVar2] != 0 &&
           (pcVar1 = recovered_10040318(reject,(int)text[uVar2]), pcVar1 == (char *)0x0))) {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f8c
 */

char * recovered_10046f8c(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = 0; count != uVar1; uVar1 = uVar1 + 1) {
    if (source[uVar1] == '\0') goto LAB_10046fbc;
    destination[uVar1] = source[uVar1];
  }
  uVar1 = count;
LAB_10046fbc:
  for (; uVar1 < count; uVar1 = uVar1 + 1) {
    destination[uVar1] = '\0';
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046fc8
 */

char * recovered_10046fc8(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10040274(destination);
  recovered_100402c4(destination + uVar1,source);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ff0
 */

char * recovered_10046ff0(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = recovered_10040274(destination);
  uVar2 = 0;
  do {
    if (count == uVar2) {
LAB_10047038:
      destination[count + uVar1] = '\0';
      return destination;
    }
    if (source[uVar2] == '\0') {
      count = uVar2;
      goto LAB_10047038;
    }
    destination[uVar2 + uVar1] = source[uVar2];
    uVar2 = uVar2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047048
 */

ulong recovered_10047048(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count_00;
  ulong uVar1;

  if (source == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10040274(source);
  }
  if ((destination != (char *)0x0) && (count != 0)) {
    count_00 = uVar1;
    if (count - 1 <= uVar1) {
      count_00 = count - 1;
    }
    if (count_00 != 0) {
      recovered_1003fdb4(destination,source,count_00);
    }
    destination[count_00] = '\0';
  }
  return uVar1;
}


#undef DAT_10051420
#define DAT_10051420 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83d0U)))
#undef _DAT_10051420
#define _DAT_10051420 (*(char * *)(((uintptr_t)pf_module_state + 0x83d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100470ac
 */

/* WARNING: Removing unreachable block (ram,0x10046e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_100470ac(char *text,char *delimiters)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text_00;
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  if (text == (char *)0x0) {
    text = _DAT_10051420;
  }
  pcVar3 = (char *)0x0;
  if ((delimiters != (char *)0x0) && (text != (char *)0x0)) {
    uVar1 = recovered_10040340(text,delimiters);
    text_00 = text + uVar1;
    if (*text_00 == '\0') {
      pcVar3 = (char *)0x0;
      _DAT_10051420 = text_00;
    }
    else {
      pcVar2 = recovered_10040388(text_00,delimiters);
      pcVar3 = text_00;
      if (pcVar2 == (char *)0x0) {
        uVar1 = recovered_10040274(text_00);
        _DAT_10051420 = text_00 + uVar1;
      }
      else {
        *pcVar2 = '\0';
        _DAT_10051420 = pcVar2 + 1;
      }
    }
  }
  return pcVar3;
}

#undef DAT_10051420
#undef _DAT_10051420

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100470b8
 */

void * recovered_100470b8(ulong count,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size_00;
  uint128 auVar1;
  uint128 auVar2;
  void *destination;
  ulong count_00;

  if ((size == 0) ||
     (PF_PART8(auVar1, 8) = 0, PF_PART8(auVar1, 0) = size, PF_PART8(auVar2, 8) = 0, PF_PART8(auVar2, 0) = count,
     SUB168(auVar1 * auVar2,8) == 0)) {
    count_00 = size * count;
    size_00 = count_00;
    if (count_00 < 2) {
      size_00 = 1;
    }
    destination = recovered_1003fce0(size_00);
    if (destination != (void *)0x0) {
      recovered_1003ffa0(destination,0,count_00);
    }
  }
  else {
    destination = (void *)0x0;
  }
  return destination;
}


#undef DAT_10050448
#define DAT_10050448 (*(uint *)(((uintptr_t)pf_module_state + 0x73f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004710c
 */

void recovered_1004710c(uint seed)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (seed < 2) {
    seed = 1;
  }
  DAT_10050448 = seed;
  return;
}

#undef DAT_10050448

#undef DAT_10050448
#define DAT_10050448 (*(uint *)(((uintptr_t)pf_module_state + 0x73f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047120
 */

int recovered_10047120(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10050448 = DAT_10050448 * 0x41c64e6d + 0x3039;
  return DAT_10050448 >> 0x10 & 0x7fff;
}

#undef DAT_10050448

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047144
 */

long recovered_10047144(long value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = -value;
  if (-1 < value) {
    lVar1 = value;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047150
 */

longlong recovered_10047150(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = -value;
  if (-1 < value) {
    lVar1 = value;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004715c
 */

undefined8 recovered_1004715c(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 / param_2;
  }
  return CONCAT44(param_1 - iVar1 * param_2,iVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047174
 */

uint128 recovered_10047174(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint128 auVar2;

  if (param_2 == 0) {
    return ZEXT816(0);
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1 / param_2;
  }
  PF_PART8(auVar2, 8) = param_1 - lVar1 * param_2;
  PF_PART8(auVar2, 0) = lVar1;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047184
 */

uint128 recovered_10047184(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint128 auVar2;

  if (param_2 == 0) {
    return ZEXT816(0);
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1 / param_2;
  }
  PF_PART8(auVar2, 8) = param_1 - lVar1 * param_2;
  PF_PART8(auVar2, 0) = lVar1;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047194
 */

longlong recovered_10047194(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;

  uVar4 = (ulong)(uint)base;
  for (pbVar6 = (byte *)text; bVar2 = *pbVar6,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar6 = pbVar6 + 1) {
  }
  uVar7 = (ulong)(bVar2 == 0x2d || bVar2 == 0x2b);
  pbVar5 = pbVar6;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar5 = pbVar6 + 1;
  }
  if (base == 0x10) {
    if ((*pbVar5 == 0x30) && ((pbVar6[uVar7 + 1] | 0x20) == 0x78)) goto LAB_10040b0c;
  }
  else {
    if (base != 0) {
      if (base - 0x25U < 0xffffffdd) {
        if (endptr == (char **)0x0) {
          return 0;
        }
        *endptr = text;
        return 0;
      }
      goto LAB_10040b38;
    }
    if (*pbVar5 != 0x30) {
      uVar4 = 10;
      goto LAB_10040b38;
    }
    if ((pbVar6[uVar7 + 1] | 0x20) != 0x78) {
      uVar4 = 8;
      goto LAB_10040b38;
    }
LAB_10040b0c:
    pbVar5 = pbVar6 + uVar7 + 2;
  }
  uVar4 = 0x10;
LAB_10040b38:
  lVar8 = 0;
  while( true ) {
    uVar3 = recovered_10040b78((uint)*pbVar5);
    if ((uint)uVar4 <= uVar3) break;
    lVar8 = lVar8 * uVar4 + (ulong)uVar3;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  lVar1 = -lVar8;
  if (bVar2 != 0x2d) {
    lVar1 = lVar8;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047198
 */

ulonglong recovered_10047198(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;

  pbVar6 = (byte *)text;
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
  if (base == 0x10) {
    if (*pbVar6 != 0x30) {
      base = 0x10;
      goto LAB_10040c8c;
    }
    bVar3 = pbVar6[1];
    uVar5 = 0x10;
  }
  else {
    if (base != 0) {
      if (base - 0x25U < 0xffffffdd) {
        if (endptr == (char **)0x0) {
          return 0;
        }
        *endptr = text;
        return 0;
      }
      goto LAB_10040c8c;
    }
    if (*pbVar6 != 0x30) {
      base = 10;
      goto LAB_10040c8c;
    }
    bVar3 = pbVar6[1];
    uVar5 = 8;
  }
  pbVar2 = pbVar6 + 2;
  base = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    base = uVar5;
  }
  pbVar6 = pbVar2;
LAB_10040c8c:
  uVar7 = 0;
  while( true ) {
    uVar5 = recovered_10040b78((uint)*pbVar6);
    if ((uint)base <= uVar5) break;
    uVar7 = uVar7 * (uint)base + (ulong)uVar5;
    text = (char *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  uVar1 = -uVar7;
  if (!bVar4) {
    uVar1 = uVar7;
  }
  return uVar1;
}


#undef DAT_1005143c
#define DAT_1005143c (*(uint *)(((uintptr_t)pf_module_state + 0x83ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004719c
 */

undefined8 recovered_1004719c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1005143c = DAT_1005143c & (param_1 ^ 0xffffffff | 0xffffff60);
  return 0;
}

#undef DAT_1005143c

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_1005143c
#define DAT_1005143c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100471b8
 */

undefined8 recovered_100471b8(ushort *param_1,ushort param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = param_2 & 0x9f & (ushort)DAT_1005143c;
  return 0;
}

#undef DAT_10050554
#undef DAT_1005143c

#undef DAT_1005143c
#define DAT_1005143c (*(uint *)(((uintptr_t)pf_module_state + 0x83ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100471f4
 */

undefined8 recovered_100471f4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1005143c = DAT_1005143c | param_1 & 0x9f;
  return 0;
}

#undef DAT_1005143c

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_1005143c
#define DAT_1005143c (*(uint *)(((uintptr_t)pf_module_state + 0x83ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047210
 */

undefined8 recovered_10047210(ushort *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  DAT_1005143c = param_2 & 0x9f & (uint)*param_1 | DAT_1005143c & (param_2 & 0x9f ^ 0xffffffff);
  return 0;
}

#undef DAT_10050554
#undef DAT_1005143c

#undef DAT_1005143c
#define DAT_1005143c (*(uint *)(((uintptr_t)pf_module_state + 0x83ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047258
 */

uint recovered_10047258(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 & 0x9f & DAT_1005143c;
}

#undef DAT_1005143c

#undef DAT_10051440
#define DAT_10051440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047270
 */

undefined4 recovered_10047270(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return DAT_10051440;
}

#undef DAT_10051440

#undef DAT_10051440
#define DAT_10051440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004727c
 */

undefined8 recovered_1004727c(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10051440 = param_1;
  return 0;
}

#undef DAT_10051440

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_1005143c
#define DAT_1005143c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83ecU)))
#undef DAT_10051440
#define DAT_10051440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047288
 */

undefined8 recovered_10047288(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = DAT_1005143c;
  param_1[1] = DAT_10051440;
  return 0;
}

#undef DAT_10050554
#undef DAT_1005143c
#undef DAT_10051440

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_1005143c
#define DAT_1005143c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83ecU)))
#undef DAT_10051440
#define DAT_10051440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100472c4
 */

undefined8 recovered_100472c4(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  *param_1 = DAT_1005143c;
  param_1[1] = DAT_10051440;
  DAT_1005143c = 0;
  return 0;
}

#undef DAT_10050554
#undef DAT_1005143c
#undef DAT_10051440

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_1005143c
#define DAT_1005143c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83ecU)))
#undef DAT_10051440
#define DAT_10051440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047304
 */

undefined8 recovered_10047304(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  DAT_1005143c = *param_1;
  DAT_10051440 = param_1[1];
  return 0;
}

#undef DAT_10050554
#undef DAT_1005143c
#undef DAT_10051440

#undef DAT_10050554
#define DAT_10050554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7504U)))
#undef DAT_1005143c
#define DAT_1005143c (*(uint *)(((uintptr_t)pf_module_state + 0x83ecU)))
#undef DAT_10051440
#define DAT_10051440 (*(uint *)(((uintptr_t)pf_module_state + 0x83f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047340
 */

undefined8 recovered_10047340(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (uint *)0x0) {
    DAT_10050554 = 0x16;
    return 0xffffffff;
  }
  DAT_1005143c = *param_1 | DAT_1005143c;
  DAT_10051440 = param_1[1];
  return 0;
}

#undef DAT_10050554
#undef DAT_1005143c
#undef DAT_10051440

/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_1004737c(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100473a8(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100473e4
 */

bool recovered_100473e4(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100473fc
 */

bool recovered_100473fc(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047414
 */

bool recovered_10047414(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004742c
 */

bool recovered_1004742c(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ABS(param_1) == INFINITY;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047444
 */

bool recovered_10047444(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ABS(param_1) == INFINITY;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004745c
 */

bool recovered_1004745c(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ABS(param_1) == INFINITY;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047474
 */

bool recovered_10047474(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xfffffffffffff) != 0 &&
         ((param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047490
 */

bool recovered_10047490(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffff) != 0 && ((param_1 ^ 0xffffffff) & 0x7f800000) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100474ac
 */

bool recovered_100474ac(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return NAN(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100474b8
 */

bool recovered_100474b8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7ff0000000000000) != 0x7ff0000000000000 && (param_1 & 0x7ff0000000000000) != 0
  ;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100474d4
 */

bool recovered_100474d4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7f800000) != 0x7f800000 && (param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100474f0
 */

bool recovered_100474f0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) - 1 < 0xfffffffffffff ||
         (param_1 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047520
 */

ulong recovered_10047520(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 >> 0x3f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004752c
 */

uint recovered_1004752c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 >> 0x1f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047538
 */

bool recovered_10047538(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    return true;
  }
  if (param_1 == 0.0) {
    return 1.0 / param_1 < 0.0;
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047560
 */

undefined4 recovered_10047560(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;

  uVar3 = (ulong)param_1 & 0x7ff0000000000000;
  if ((uVar3 == 0x7ff0000000000000) && (((ulong)param_1 & 0xfffffffffffff) != 0)) {
    return 1;
  }
  uVar2 = 4;
  if (uVar3 == 0x7ff0000000000000 || uVar3 == 0) {
    uVar2 = 5;
  }
  uVar1 = 3;
  if (param_1 != 0.0) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (ABS(param_1) != INFINITY) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100475b4
 */

undefined4 recovered_100475b4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = (uint)param_1 & 0x7f800000;
  if ((uVar1 == 0x7f800000) && (((uint)param_1 & 0x7fffff) != 0)) {
    return 1;
  }
  uVar3 = 4;
  if (uVar1 == 0x7f800000 || uVar1 == 0) {
    uVar3 = 5;
  }
  uVar2 = 3;
  if (param_1 != 0.0) {
    uVar2 = uVar3;
  }
  uVar3 = 2;
  if (ABS(param_1) != INFINITY) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047608
 */

undefined4 recovered_10047608(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = 3;
  if (param_1 != 0.0) {
    uVar2 = 4;
  }
  uVar1 = 2;
  if (ABS(param_1) != INFINITY) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (!NAN(param_1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047640
 */

int recovered_10047640(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)((ulong)ABS(value) < 0x7ff0000000000000);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047658
 */

double recovered_10047658(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (value < 0.0) {
    dVar3 = value + -0.5;
    dVar4 = (double)(int)dVar3;
    dVar2 = (double)((int)dVar3 + -1);
    if (dVar4 <= dVar3) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2 + 1.0;
    if (dVar3 <= dVar2) {
      dVar4 = dVar2;
    }
    return dVar4;
  }
  iVar1 = (int)(value + 0.5);
  dVar3 = (double)iVar1;
  dVar2 = (double)(iVar1 + -1);
  if (dVar3 <= value + 0.5) {
    dVar2 = dVar3;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047668
 */

float recovered_10047668(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0((double)value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc((double)value + -0.5);
  }
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004768c
 */

double recovered_1004768c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (value < 0.0) {
    dVar3 = value + -0.5;
    dVar4 = (double)(int)dVar3;
    dVar2 = (double)((int)dVar3 + -1);
    if (dVar4 <= dVar3) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2 + 1.0;
    if (dVar3 <= dVar2) {
      dVar4 = dVar2;
    }
    return dVar4;
  }
  iVar1 = (int)(value + 0.5);
  dVar3 = (double)iVar1;
  dVar2 = (double)(iVar1 + -1);
  if (dVar3 <= value + 0.5) {
    dVar2 = dVar3;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004769c
 */

double recovered_1004769c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (value < 0.0) {
    dVar3 = value + -0.5;
    dVar4 = (double)(int)dVar3;
    dVar2 = (double)((int)dVar3 + -1);
    if (dVar4 <= dVar3) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2 + 1.0;
    if (dVar3 <= dVar2) {
      dVar4 = dVar2;
    }
    return dVar4;
  }
  iVar1 = (int)(value + 0.5);
  dVar3 = (double)iVar1;
  dVar2 = (double)(iVar1 + -1);
  if (dVar3 <= value + 0.5) {
    dVar2 = dVar3;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100476ac
 */

float recovered_100476ac(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0((double)value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc((double)value + -0.5);
  }
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100476d0
 */

double recovered_100476d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (value < 0.0) {
    dVar3 = value + -0.5;
    dVar4 = (double)(int)dVar3;
    dVar2 = (double)((int)dVar3 + -1);
    if (dVar4 <= dVar3) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2 + 1.0;
    if (dVar3 <= dVar2) {
      dVar4 = dVar2;
    }
    return dVar4;
  }
  iVar1 = (int)(value + 0.5);
  dVar3 = (double)iVar1;
  dVar2 = (double)(iVar1 + -1);
  if (dVar3 <= value + 0.5) {
    dVar2 = dVar3;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100476e0
 */

double recovered_100476e0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (value < 0.0) {
    dVar3 = value + -0.5;
    dVar4 = (double)(int)dVar3;
    dVar2 = (double)((int)dVar3 + -1);
    if (dVar4 <= dVar3) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2 + 1.0;
    if (dVar3 <= dVar2) {
      dVar4 = dVar2;
    }
    return dVar4;
  }
  iVar1 = (int)(value + 0.5);
  dVar3 = (double)iVar1;
  dVar2 = (double)(iVar1 + -1);
  if (dVar3 <= value + 0.5) {
    dVar2 = dVar3;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100476f0
 */

float recovered_100476f0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0((double)value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc((double)value + -0.5);
  }
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047714
 */

double recovered_10047714(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (value < 0.0) {
    dVar3 = value + -0.5;
    dVar4 = (double)(int)dVar3;
    dVar2 = (double)((int)dVar3 + -1);
    if (dVar4 <= dVar3) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2 + 1.0;
    if (dVar3 <= dVar2) {
      dVar4 = dVar2;
    }
    return dVar4;
  }
  iVar1 = (int)(value + 0.5);
  dVar3 = (double)iVar1;
  dVar2 = (double)(iVar1 + -1);
  if (dVar3 <= value + 0.5) {
    dVar2 = dVar3;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047724
 */

long recovered_10047724(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0(value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc(value + -0.5);
  }
  return (long)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047748
 */

long recovered_10047748(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0((double)value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc((double)value + -0.5);
  }
  return (long)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004776c
 */

long recovered_1004776c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0(value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc(value + -0.5);
  }
  return (long)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047790
 */

longlong recovered_10047790(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0(value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc(value + -0.5);
  }
  return (long)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100477b4
 */

longlong recovered_100477b4(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0((double)value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc((double)value + -0.5);
  }
  return (long)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100477d8
 */

longlong recovered_100477d8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_100405c0(value + 0.5);
  }
  else {
    dVar1 = recovered_100405dc(value + -0.5);
  }
  return (long)dVar1;
}


#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100477fc
 */

double recovered_100477fc(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;
  double dVar4;

  if (value <= 1.0) {
    if (-1.0 <= value) {
      dVar3 = value * value;
      dVar1 = value;
      for (dVar4 = 3.0; dVar4 <= 19.0; dVar4 = dVar4 + 2.0) {
        dVar1 = -dVar3 * dVar1;
        value = value + dVar1 / dVar4;
      }
      return value;
    }
    auVar2 = recovered_10047858(1.0 / value);
    dVar1 = (*(double *)((uint8_t *)&(auVar2)+0));
    dVar3 = DAT_1004b1f0;
  }
  else {
    auVar2 = recovered_10047858(1.0 / value);
    dVar1 = (*(double *)((uint8_t *)&(auVar2)+0));
    dVar3 = DAT_1004b1f8;
  }
  return dVar3 - dVar1;
}

#undef DAT_1004b1f0
#undef DAT_1004b1f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047858
 */

uint128 recovered_10047858(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;
  double dVar4;

  dVar1 = param_1 * param_1;
  dVar3 = param_1;
  for (dVar4 = 3.0; dVar4 <= 19.0; dVar4 = dVar4 + 2.0) {
    param_1 = -dVar1 * param_1;
    dVar3 = dVar3 + param_1 / dVar4;
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047890
 */

float recovered_10047890(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100477fc((double)value);
  return (float)dVar1;
}


#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100478a8
 */

double recovered_100478a8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;
  double dVar4;

  if (value <= 1.0) {
    if (-1.0 <= value) {
      dVar3 = value * value;
      dVar1 = value;
      for (dVar4 = 3.0; dVar4 <= 19.0; dVar4 = dVar4 + 2.0) {
        dVar1 = -dVar3 * dVar1;
        value = value + dVar1 / dVar4;
      }
      return value;
    }
    auVar2 = recovered_10047858(1.0 / value);
    dVar1 = (*(double *)((uint8_t *)&(auVar2)+0));
    dVar3 = DAT_1004b1f0;
  }
  else {
    auVar2 = recovered_10047858(1.0 / value);
    dVar1 = (*(double *)((uint8_t *)&(auVar2)+0));
    dVar3 = DAT_1004b1f8;
  }
  return dVar3 - dVar1;
}

#undef DAT_1004b1f0
#undef DAT_1004b1f8

#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100478ac
 */

double recovered_100478ac(double y,double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint128 auVar5;
  double dVar6;

  if (0.0 < x) {
    dVar3 = y / x;
    if (dVar3 <= 1.0) {
      if (-1.0 <= dVar3) {
        dVar4 = dVar3 * dVar3;
        dVar2 = dVar3;
        for (dVar6 = 3.0; dVar6 <= 19.0; dVar6 = dVar6 + 2.0) {
          dVar2 = -dVar4 * dVar2;
          dVar3 = dVar3 + dVar2 / dVar6;
        }
        return dVar3;
      }
      auVar5 = recovered_10047858(1.0 / dVar3);
      dVar4 = (*(double *)((uint8_t *)&(auVar5)+0));
      dVar3 = DAT_1004b1f0;
    }
    else {
      auVar5 = recovered_10047858(1.0 / dVar3);
      dVar4 = (*(double *)((uint8_t *)&(auVar5)+0));
      dVar3 = DAT_1004b1f8;
    }
    return dVar3 - dVar4;
  }
  if ((y < 0.0) || (0.0 <= x)) {
    if ((0.0 <= y) || (0.0 <= x)) {
      if ((0.0 < y) && (x == 0.0)) {
        return DAT_1004b1f8;
      }
      bVar1 = false;
      if ((x == 0.0) && (bVar1 = false, !NAN(y))) {
        bVar1 = y < 0.0;
      }
      dVar3 = DAT_1004b1f0;
      if (!bVar1) {
        dVar3 = 0.0;
      }
      return dVar3;
    }
    dVar4 = recovered_100477fc(y / x);
    dVar3 = DAT_1004b180;
  }
  else {
    dVar4 = recovered_100477fc(y / x);
    dVar3 = DAT_1004b178;
  }
  return dVar4 + dVar3;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b1f0
#undef DAT_1004b1f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047948
 */

float recovered_10047948(float y,float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100478ac((double)y,(double)x);
  return (float)dVar1;
}


#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047964
 */

double recovered_10047964(double y,double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint128 auVar5;
  double dVar6;

  if (0.0 < x) {
    dVar3 = y / x;
    if (dVar3 <= 1.0) {
      if (-1.0 <= dVar3) {
        dVar4 = dVar3 * dVar3;
        dVar2 = dVar3;
        for (dVar6 = 3.0; dVar6 <= 19.0; dVar6 = dVar6 + 2.0) {
          dVar2 = -dVar4 * dVar2;
          dVar3 = dVar3 + dVar2 / dVar6;
        }
        return dVar3;
      }
      auVar5 = recovered_10047858(1.0 / dVar3);
      dVar4 = (*(double *)((uint8_t *)&(auVar5)+0));
      dVar3 = DAT_1004b1f0;
    }
    else {
      auVar5 = recovered_10047858(1.0 / dVar3);
      dVar4 = (*(double *)((uint8_t *)&(auVar5)+0));
      dVar3 = DAT_1004b1f8;
    }
    return dVar3 - dVar4;
  }
  if ((y < 0.0) || (0.0 <= x)) {
    if ((0.0 <= y) || (0.0 <= x)) {
      if ((0.0 < y) && (x == 0.0)) {
        return DAT_1004b1f8;
      }
      bVar1 = false;
      if ((x == 0.0) && (bVar1 = false, !NAN(y))) {
        bVar1 = y < 0.0;
      }
      dVar3 = DAT_1004b1f0;
      if (!bVar1) {
        dVar3 = 0.0;
      }
      return dVar3;
    }
    dVar4 = recovered_100477fc(y / x);
    dVar3 = DAT_1004b180;
  }
  else {
    dVar4 = recovered_100477fc(y / x);
    dVar3 = DAT_1004b178;
  }
  return dVar4 + dVar3;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b1f0
#undef DAT_1004b1f8

#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047968
 */

double recovered_10047968(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint128 auVar5;
  double dVar6;

  if (1.0 < ABS(value)) {
    return __builtin_nanf("");
  }
  dVar4 = recovered_10040608(1.0 - value * value);
  if (dVar4 <= 0.0) {
    if ((value < 0.0) || (0.0 <= dVar4)) {
      if ((0.0 <= value) || (0.0 <= dVar4)) {
        if ((0.0 < value) && (dVar4 == 0.0)) {
          return DAT_1004b1f8;
        }
        bVar1 = false;
        if ((dVar4 == 0.0) && (bVar1 = false, !NAN(value))) {
          bVar1 = value < 0.0;
        }
        dVar4 = DAT_1004b1f0;
        if (!bVar1) {
          dVar4 = 0.0;
        }
        return dVar4;
      }
      dVar3 = recovered_100477fc(value / dVar4);
      dVar4 = DAT_1004b180;
    }
    else {
      dVar3 = recovered_100477fc(value / dVar4);
      dVar4 = DAT_1004b178;
    }
    return dVar3 + dVar4;
  }
  dVar4 = value / dVar4;
  if (dVar4 <= 1.0) {
    if (-1.0 <= dVar4) {
      dVar3 = dVar4 * dVar4;
      dVar2 = dVar4;
      for (dVar6 = 3.0; dVar6 <= 19.0; dVar6 = dVar6 + 2.0) {
        dVar2 = -dVar3 * dVar2;
        dVar4 = dVar4 + dVar2 / dVar6;
      }
      return dVar4;
    }
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f0;
  }
  else {
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f8;
  }
  return dVar4 - dVar3;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b1f0
#undef DAT_1004b1f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100479b0
 */

float recovered_100479b0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047968((double)value);
  return (float)dVar1;
}


#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100479c8
 */

double recovered_100479c8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint128 auVar5;
  double dVar6;

  if (1.0 < ABS(value)) {
    return __builtin_nanf("");
  }
  dVar4 = recovered_10040608(1.0 - value * value);
  if (dVar4 <= 0.0) {
    if ((value < 0.0) || (0.0 <= dVar4)) {
      if ((0.0 <= value) || (0.0 <= dVar4)) {
        if ((0.0 < value) && (dVar4 == 0.0)) {
          return DAT_1004b1f8;
        }
        bVar1 = false;
        if ((dVar4 == 0.0) && (bVar1 = false, !NAN(value))) {
          bVar1 = value < 0.0;
        }
        dVar4 = DAT_1004b1f0;
        if (!bVar1) {
          dVar4 = 0.0;
        }
        return dVar4;
      }
      dVar3 = recovered_100477fc(value / dVar4);
      dVar4 = DAT_1004b180;
    }
    else {
      dVar3 = recovered_100477fc(value / dVar4);
      dVar4 = DAT_1004b178;
    }
    return dVar3 + dVar4;
  }
  dVar4 = value / dVar4;
  if (dVar4 <= 1.0) {
    if (-1.0 <= dVar4) {
      dVar3 = dVar4 * dVar4;
      dVar2 = dVar4;
      for (dVar6 = 3.0; dVar6 <= 19.0; dVar6 = dVar6 + 2.0) {
        dVar2 = -dVar3 * dVar2;
        dVar4 = dVar4 + dVar2 / dVar6;
      }
      return dVar4;
    }
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f0;
  }
  else {
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f8;
  }
  return dVar4 - dVar3;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b1f0
#undef DAT_1004b1f8

#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100479cc
 */

double recovered_100479cc(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint128 auVar5;
  double dVar6;

  if (1.0 < ABS(value)) {
    return __builtin_nanf("");
  }
  dVar4 = recovered_10040608(1.0 - value * value);
  if (value <= 0.0) {
    if ((dVar4 < 0.0) || (0.0 <= value)) {
      if ((0.0 <= dVar4) || (0.0 <= value)) {
        if ((0.0 < dVar4) && (value == 0.0)) {
          return DAT_1004b1f8;
        }
        bVar1 = false;
        if ((value == 0.0) && (bVar1 = false, !NAN(dVar4))) {
          bVar1 = dVar4 < 0.0;
        }
        dVar4 = DAT_1004b1f0;
        if (!bVar1) {
          dVar4 = 0.0;
        }
        return dVar4;
      }
      dVar3 = recovered_100477fc(dVar4 / value);
      dVar4 = DAT_1004b180;
    }
    else {
      dVar3 = recovered_100477fc(dVar4 / value);
      dVar4 = DAT_1004b178;
    }
    return dVar3 + dVar4;
  }
  dVar4 = dVar4 / value;
  if (dVar4 <= 1.0) {
    if (-1.0 <= dVar4) {
      dVar3 = dVar4 * dVar4;
      dVar2 = dVar4;
      for (dVar6 = 3.0; dVar6 <= 19.0; dVar6 = dVar6 + 2.0) {
        dVar2 = -dVar3 * dVar2;
        dVar4 = dVar4 + dVar2 / dVar6;
      }
      return dVar4;
    }
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f0;
  }
  else {
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f8;
  }
  return dVar4 - dVar3;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b1f0
#undef DAT_1004b1f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047a10
 */

float recovered_10047a10(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100479cc((double)value);
  return (float)dVar1;
}


#undef DAT_1004b178
#define DAT_1004b178 (*(double *)(((uintptr_t)pf_module_state + 0x2128U)))
#undef DAT_1004b180
#define DAT_1004b180 (*(double *)(((uintptr_t)pf_module_state + 0x2130U)))
#undef DAT_1004b1f0
#define DAT_1004b1f0 (*(double *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_1004b1f8
#define DAT_1004b1f8 (*(double *)(((uintptr_t)pf_module_state + 0x21a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047a28
 */

double recovered_10047a28(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint128 auVar5;
  double dVar6;

  if (1.0 < ABS(value)) {
    return __builtin_nanf("");
  }
  dVar4 = recovered_10040608(1.0 - value * value);
  if (value <= 0.0) {
    if ((dVar4 < 0.0) || (0.0 <= value)) {
      if ((0.0 <= dVar4) || (0.0 <= value)) {
        if ((0.0 < dVar4) && (value == 0.0)) {
          return DAT_1004b1f8;
        }
        bVar1 = false;
        if ((value == 0.0) && (bVar1 = false, !NAN(dVar4))) {
          bVar1 = dVar4 < 0.0;
        }
        dVar4 = DAT_1004b1f0;
        if (!bVar1) {
          dVar4 = 0.0;
        }
        return dVar4;
      }
      dVar3 = recovered_100477fc(dVar4 / value);
      dVar4 = DAT_1004b180;
    }
    else {
      dVar3 = recovered_100477fc(dVar4 / value);
      dVar4 = DAT_1004b178;
    }
    return dVar3 + dVar4;
  }
  dVar4 = dVar4 / value;
  if (dVar4 <= 1.0) {
    if (-1.0 <= dVar4) {
      dVar3 = dVar4 * dVar4;
      dVar2 = dVar4;
      for (dVar6 = 3.0; dVar6 <= 19.0; dVar6 = dVar6 + 2.0) {
        dVar2 = -dVar3 * dVar2;
        dVar4 = dVar4 + dVar2 / dVar6;
      }
      return dVar4;
    }
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f0;
  }
  else {
    auVar5 = recovered_10047858(1.0 / dVar4);
    dVar3 = (*(double *)((uint8_t *)&(auVar5)+0));
    dVar4 = DAT_1004b1f8;
  }
  return dVar4 - dVar3;
}

#undef DAT_1004b178
#undef DAT_1004b180
#undef DAT_1004b1f0
#undef DAT_1004b1f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047a2c
 */

double recovered_10047a2c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar1 = recovered_1004079c(value);
  dVar3 = recovered_10040704(value);
  dVar2 = INFINITY;
  if (dVar3 < 0.0) {
    dVar2 = -INFINITY;
  }
  dVar3 = dVar3 / dVar1;
  if (dVar1 == 0.0) {
    dVar3 = dVar2;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047a64
 */

float recovered_10047a64(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar1 = recovered_1004079c((double)value);
  dVar3 = recovered_10040704((double)value);
  dVar2 = INFINITY;
  if (dVar3 < 0.0) {
    dVar2 = -INFINITY;
  }
  dVar3 = dVar3 / dVar1;
  if (dVar1 == 0.0) {
    dVar3 = dVar2;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047aac
 */

double recovered_10047aac(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar1 = recovered_1004079c(value);
  dVar3 = recovered_10040704(value);
  dVar2 = INFINITY;
  if (dVar3 < 0.0) {
    dVar2 = -INFINITY;
  }
  dVar3 = dVar3 / dVar1;
  if (dVar1 == 0.0) {
    dVar3 = dVar2;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047ae4
 */

double recovered_10047ae4(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  iVar1 = 0;
  for (; 0.5 < value; value = value * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; value < -0.5; value = value * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar4 = 1.0;
  dVar3 = 1.0;
  dVar5 = 1.0;
  do {
    dVar4 = dVar4 * (value / dVar5);
    dVar3 = dVar3 + dVar4;
    dVar5 = dVar5 + 1.0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar3 = dVar3 * dVar3;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047b64
 */

float recovered_10047b64(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047b7c
 */

double recovered_10047b7c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  iVar1 = 0;
  for (; 0.5 < value; value = value * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; value < -0.5; value = value * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar4 = 1.0;
  dVar3 = 1.0;
  dVar5 = 1.0;
  do {
    dVar4 = dVar4 * (value / dVar5);
    dVar3 = dVar3 + dVar4;
    dVar5 = dVar5 + 1.0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar3 = dVar3 * dVar3;
  }
  return dVar3;
}


#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047b80
 */

double recovered_10047b80(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = value * DAT_1004b168; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    dVar5 = dVar5 * (dVar3 / dVar6);
    dVar4 = dVar4 + dVar5;
    dVar6 = dVar6 + 1.0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return dVar4;
}

#undef DAT_1004b168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047b90
 */

float recovered_10047b90(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047b80((double)value);
  return (float)dVar1;
}


#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047ba8
 */

double recovered_10047ba8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = value * DAT_1004b168; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    dVar5 = dVar5 * (dVar3 / dVar6);
    dVar4 = dVar4 + dVar5;
    dVar6 = dVar6 + 1.0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return dVar4;
}

#undef DAT_1004b168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047bac
 */

uint128 recovered_10047bac(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = recovered_10047ae4(in_d0);
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 + -1.0;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047bc4
 */

void recovered_10047bc4(float in_s0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10047bac((double)in_s0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047bdc
 */

uint128 recovered_10047bdc(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = recovered_10047ae4(in_d0);
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 + -1.0;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047be0
 */

double recovered_10047be0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4(value);
  return (dVar1 + -1.0 / dVar1) * 0.5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047bf8
 */

float recovered_10047bf8(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047be0((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c10
 */

double recovered_10047c10(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4(value);
  return (dVar1 + -1.0 / dVar1) * 0.5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c14
 */

double recovered_10047c14(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4(value);
  return (dVar1 + 1.0 / dVar1) * 0.5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c2c
 */

float recovered_10047c2c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047c14((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c44
 */

double recovered_10047c44(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4(value);
  return (dVar1 + 1.0 / dVar1) * 0.5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c48
 */

double recovered_10047c48(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4(value + value);
  return (dVar1 + -1.0) / (dVar1 + 1.0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c74
 */

float recovered_10047c74(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047c48((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c8c
 */

double recovered_10047c8c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ae4(value + value);
  return (dVar1 + -1.0) / (dVar1 + 1.0);
}


#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c90
 */

double recovered_10047c90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040644(value);
  return dVar1 / DAT_1004b168;
}

#undef DAT_1004b168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047cb0
 */

float recovered_10047cb0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047c90((double)value);
  return (float)dVar1;
}


#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047cc8
 */

double recovered_10047cc8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040644(value);
  return dVar1 / DAT_1004b168;
}

#undef DAT_1004b168

#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047ccc
 */

double recovered_10047ccc(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = value + 1.0;
  if (0.0 < dVar3) {
    iVar1 = 0;
    for (; 1.5 < dVar3; dVar3 = dVar3 * 0.5) {
      iVar1 = iVar1 + 1;
    }
    for (; dVar3 < 0.75; dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = 1.0;
    dVar5 = (dVar3 + -1.0) / (dVar3 + 1.0);
    dVar6 = dVar5 * dVar5;
    dVar3 = 0.0;
    for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
      dVar3 = dVar3 + dVar5 / dVar4;
      dVar5 = dVar6 * dVar5;
      dVar4 = dVar4 + 2.0;
    }
    return (double)iVar1 * DAT_1004b168 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_1004b168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047cd8
 */

float recovered_10047cd8(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ccc((double)value);
  return (float)dVar1;
}


#undef DAT_1004b168
#define DAT_1004b168 (*(double *)(((uintptr_t)pf_module_state + 0x2118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047cf0
 */

double recovered_10047cf0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = value + 1.0;
  if (0.0 < dVar3) {
    iVar1 = 0;
    for (; 1.5 < dVar3; dVar3 = dVar3 * 0.5) {
      iVar1 = iVar1 + 1;
    }
    for (; dVar3 < 0.75; dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    dVar4 = 1.0;
    dVar5 = (dVar3 + -1.0) / (dVar3 + 1.0);
    dVar6 = dVar5 * dVar5;
    dVar3 = 0.0;
    for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
      dVar3 = dVar3 + dVar5 / dVar4;
      dVar5 = dVar6 * dVar5;
      dVar4 = dVar4 + 2.0;
    }
    return (double)iVar1 * DAT_1004b168 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_1004b168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047cf4
 */

double recovered_10047cf4(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  if (value == 0.0) {
    return -INFINITY;
  }
  if (0x7fefffffffffffff < (ulong)ABS(value)) {
    return value * value;
  }
  dVar1 = recovered_100407e8(value);
  dVar2 = recovered_10047c90(dVar1);
  dVar3 = (double)(int)dVar2;
  dVar1 = (double)((int)dVar2 + -1);
  if (dVar3 <= dVar2) {
    dVar1 = dVar3;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047d3c
 */

float recovered_10047d3c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047cf4((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047d54
 */

double recovered_10047d54(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  if (value == 0.0) {
    return -INFINITY;
  }
  if (0x7fefffffffffffff < (ulong)ABS(value)) {
    return value * value;
  }
  dVar1 = recovered_100407e8(value);
  dVar2 = recovered_10047c90(dVar1);
  dVar3 = (double)(int)dVar2;
  dVar1 = (double)((int)dVar2 + -1);
  if (dVar3 <= dVar2) {
    dVar1 = dVar3;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047d58
 */

double recovered_10047d58(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100409b0(value);
  if (integer_part != (double *)0x0) {
    *integer_part = dVar1;
  }
  return value - dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047d84
 */

float recovered_10047d84(float value,float *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100409b0((double)value);
  if (integer_part != (float *)0x0) {
    *integer_part = (float)dVar1;
  }
  return (float)((double)value - dVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047dc4
 */

double recovered_10047dc4(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100409b0(value);
  if (integer_part != (double *)0x0) {
    *integer_part = dVar1;
  }
  return value - dVar1;
}


#undef DAT_1004b200
#define DAT_1004b200 (*(double *)(((uintptr_t)pf_module_state + 0x21b0U)))
#undef DAT_1004b208
#define DAT_1004b208 (*(double *)(((uintptr_t)pf_module_state + 0x21b8U)))
#undef DAT_1004b210
#define DAT_1004b210 (*(double *)(((uintptr_t)pf_module_state + 0x21c0U)))
#undef DAT_1004b218
#define DAT_1004b218 (*(double *)(((uintptr_t)pf_module_state + 0x21c8U)))
#undef DAT_1004b220
#define DAT_1004b220 (*(double *)(((uintptr_t)pf_module_state + 0x21d0U)))
#undef DAT_1004b228
#define DAT_1004b228 (*(double *)(((uintptr_t)pf_module_state + 0x21d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047df0
 */

double recovered_10047df0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar2 = -value;
  if (0.0 <= value) {
    dVar2 = value;
  }
  dVar1 = recovered_10047ae4(-(dVar2 * dVar2));
  dVar2 = 1.0 / (DAT_1004b200 * dVar2 + 1.0);
  dVar3 = -((DAT_1004b228 +
            dVar2 * (DAT_1004b220 +
                    dVar2 * (DAT_1004b218 + dVar2 * (DAT_1004b208 + DAT_1004b210 * dVar2)))) * dVar2
           );
  dVar2 = -(dVar3 * dVar1) - 1.0;
  if (0.0 <= value) {
    dVar2 = dVar1 * dVar3 + 1.0;
  }
  return dVar2;
}

#undef DAT_1004b200
#undef DAT_1004b208
#undef DAT_1004b210
#undef DAT_1004b218
#undef DAT_1004b220
#undef DAT_1004b228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047e78
 */

float recovered_10047e78(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047df0((double)value);
  return (float)dVar1;
}


#undef DAT_1004b200
#define DAT_1004b200 (*(double *)(((uintptr_t)pf_module_state + 0x21b0U)))
#undef DAT_1004b208
#define DAT_1004b208 (*(double *)(((uintptr_t)pf_module_state + 0x21b8U)))
#undef DAT_1004b210
#define DAT_1004b210 (*(double *)(((uintptr_t)pf_module_state + 0x21c0U)))
#undef DAT_1004b218
#define DAT_1004b218 (*(double *)(((uintptr_t)pf_module_state + 0x21c8U)))
#undef DAT_1004b220
#define DAT_1004b220 (*(double *)(((uintptr_t)pf_module_state + 0x21d0U)))
#undef DAT_1004b228
#define DAT_1004b228 (*(double *)(((uintptr_t)pf_module_state + 0x21d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047e90
 */

double recovered_10047e90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar2 = -value;
  if (0.0 <= value) {
    dVar2 = value;
  }
  dVar1 = recovered_10047ae4(-(dVar2 * dVar2));
  dVar2 = 1.0 / (DAT_1004b200 * dVar2 + 1.0);
  dVar3 = -((DAT_1004b228 +
            dVar2 * (DAT_1004b220 +
                    dVar2 * (DAT_1004b218 + dVar2 * (DAT_1004b208 + DAT_1004b210 * dVar2)))) * dVar2
           );
  dVar2 = -(dVar3 * dVar1) - 1.0;
  if (0.0 <= value) {
    dVar2 = dVar1 * dVar3 + 1.0;
  }
  return dVar2;
}

#undef DAT_1004b200
#undef DAT_1004b208
#undef DAT_1004b210
#undef DAT_1004b218
#undef DAT_1004b220
#undef DAT_1004b228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047e94
 */

uint128 recovered_10047e94(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = recovered_10047df0(in_d0);
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = 1.0 - dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047eb0
 */

void recovered_10047eb0(float in_s0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10047e94((double)in_s0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047ec8
 */

uint128 recovered_10047ec8(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = recovered_10047df0(in_d0);
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = 1.0 - dVar2;
  return auVar1;
}


#undef DAT_1004b230
#define DAT_1004b230 (*(double *)(((uintptr_t)pf_module_state + 0x21e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047ecc
 */

double recovered_10047ecc(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10040644(value);
  return dVar1 / DAT_1004b230;
}

#undef DAT_1004b230

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047eec
 */

float recovered_10047eec(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10047ecc((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f04
 */

int recovered_10047f04(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10040a74(text,(char **)0x0,10);
  return (int)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f20
 */

/* WARNING: Removing unreachable block (ram,0x10040af8) */
/* WARNING: Removing unreachable block (ram,0x10040b04) */
/* WARNING: Removing unreachable block (ram,0x10040adc) */
/* WARNING: Removing unreachable block (ram,0x10040b34) */
/* WARNING: Removing unreachable block (ram,0x10040ae8) */
/* WARNING: Removing unreachable block (ram,0x10040b0c) */
/* WARNING: Removing unreachable block (ram,0x10040b10) */
/* WARNING: Removing unreachable block (ram,0x10040af0) */
/* WARNING: Removing unreachable block (ram,0x10040b24) */
/* WARNING: Removing unreachable block (ram,0x10040b2c) */
/* WARNING: Removing unreachable block (ram,0x10040b64) */

long recovered_10047f20(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;

  for (; bVar2 = *text, bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0;
      text = text + 1) {
  }
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    text = text + 1;
  }
  lVar4 = 0;
  while( true ) {
    uVar3 = recovered_10040b78((uint)(byte)*text);
    if (9 < uVar3) break;
    lVar4 = lVar4 * 10 + (ulong)uVar3;
    text = text + 1;
  }
  lVar1 = -lVar4;
  if (bVar2 != 0x2d) {
    lVar1 = lVar4;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f24
 */

/* WARNING: Removing unreachable block (ram,0x10040af8) */
/* WARNING: Removing unreachable block (ram,0x10040b04) */
/* WARNING: Removing unreachable block (ram,0x10040adc) */
/* WARNING: Removing unreachable block (ram,0x10040b34) */
/* WARNING: Removing unreachable block (ram,0x10040ae8) */
/* WARNING: Removing unreachable block (ram,0x10040b0c) */
/* WARNING: Removing unreachable block (ram,0x10040b10) */
/* WARNING: Removing unreachable block (ram,0x10040af0) */
/* WARNING: Removing unreachable block (ram,0x10040b24) */
/* WARNING: Removing unreachable block (ram,0x10040b2c) */
/* WARNING: Removing unreachable block (ram,0x10040b64) */

longlong recovered_10047f24(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;

  for (; bVar2 = *text, bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0;
      text = text + 1) {
  }
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    text = text + 1;
  }
  lVar4 = 0;
  while( true ) {
    uVar3 = recovered_10040b78((uint)(byte)*text);
    if (9 < uVar3) break;
    lVar4 = lVar4 * 10 + (ulong)uVar3;
    text = text + 1;
  }
  lVar1 = -lVar4;
  if (bVar2 != 0x2d) {
    lVar1 = lVar4;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f28
 */

double recovered_10047f28(char *text,char **endptr)

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
        dVar11 = recovered_10040494(dVar11,iVar8 * iVar5);
        pbVar6 = pbVar10;
      }
    }
    if (endptr != (char **)0x0) {
      *endptr = (char *)pbVar6;
    }
    dVar12 = -dVar11;
    if (bVar2 != 0x2d) {
      dVar12 = dVar11;
    }
  }
  else {
    dVar12 = 0.0;
    if (endptr != (char **)0x0) {
      *endptr = text;
    }
  }
  return dVar12;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f2c
 */

/* WARNING: Removing unreachable block (ram,0x10040e3c) */
/* WARNING: Removing unreachable block (ram,0x10040e18) */

uint128 recovered_10047f2c(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint128 auVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  double dVar11;
  double dVar12;
  double dVar13;

  for (; bVar2 = *param_1, bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0;
      param_1 = param_1 + 1) {
  }
  bVar7 = false;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    param_1 = param_1 + 1;
  }
  dVar11 = 0.0;
  while( true ) {
    bVar3 = *param_1;
    uVar4 = bVar3 - 0x30U;
    if (9 < uVar4) break;
    dVar11 = (double)uVar4 + dVar11 * 10.0;
    param_1 = param_1 + 1;
    bVar7 = true;
  }
  if (bVar3 == 0x2e) {
    dVar12 = 1.0;
    dVar13 = 0.0;
    while( true ) {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
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
      bVar3 = param_1[1];
      iVar9 = 1;
      pbVar1 = param_1 + 1;
      if (bVar3 == 0x2d) {
        iVar9 = -1;
        pbVar1 = param_1 + 2;
      }
      pbVar10 = param_1 + 2;
      iVar6 = 1;
      if (bVar3 != 0x2b) {
        pbVar10 = pbVar1;
        iVar6 = iVar9;
      }
      for (; *pbVar10 - 0x30U < 10; pbVar10 = pbVar10 + 1) {
        iVar8 = (uint)*pbVar10 + iVar8 * 10 + -0x30;
        bVar7 = true;
      }
      if (bVar7) {
        dVar11 = recovered_10040494(dVar11,iVar8 * iVar6);
      }
    }
    dVar12 = -dVar11;
    if (bVar2 != 0x2d) {
      dVar12 = dVar11;
    }
  }
  else {
    dVar12 = 0.0;
  }
  PF_PART8(auVar5, 8) = 0;
  (*(double *)((uint8_t *)&(auVar5)+0)) = dVar12;
  return auVar5;
}


#define auStack_168 (*(undefined1 (*)[264])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f34
 */

void recovered_10047f34(void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  void *source;
  void *source_00;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;

  if (((base != (void *)0x0) && (size != 0)) && (compare != (pf_compare *)0x0)) {
    uVar3 = 0;
    puVar7 = base;
    puVar9 = base;
    while (puVar9 = puVar9 + size, uVar3 != count) {
      source = (void *)((long)base + uVar3 * size);
      uVar3 = uVar3 + 1;
      puVar10 = puVar9;
      for (uVar8 = uVar3; uVar8 < count; uVar8 = uVar8 + 1) {
        source_00 = (void *)((long)base + uVar8 * size);
        iVar2 = (*compare)(source,source_00);
        if (0 < iVar2) {
          puVar4 = puVar10;
          puVar5 = puVar7;
          uVar6 = size;
          if (size < 0x101) {
            recovered_1003fdb4(auStack_168,source,size);
            recovered_1003fdb4(source,source_00,size);
            recovered_1003fdb4(source_00,auStack_168,size);
          }
          else {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              uVar1 = *puVar5;
              *puVar5 = *puVar4;
              *puVar4 = uVar1;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
        }
        puVar10 = puVar10 + size;
      }
      puVar7 = puVar7 + size;
    }
  }
  return;
}

#undef auStack_168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048048
 */

void * recovered_10048048(void *key,void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;

  pvVar3 = (void *)0x0;
  if ((((key != (void *)0x0) && (base != (void *)0x0)) && (size != 0)) &&
     (compare != (pf_compare *)0x0)) {
    uVar4 = 0;
    do {
      if (count < uVar4 || count - uVar4 == 0) {
        return (void *)0x0;
      }
      uVar1 = uVar4 + (count - uVar4 >> 1);
      pvVar3 = (void *)((long)base + uVar1 * size);
      iVar2 = (*compare)(key,pvVar3);
      if (-1 < iVar2) {
        uVar4 = uVar1 + 1;
        uVar1 = count;
      }
      count = uVar1;
    } while (iVar2 != 0);
  }
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100480cc
 */

int recovered_100480cc(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (((uint)value < 0x21) && ((1L << ((ulong)(uint)value & 0x3f) & 0x100003600U) != 0)) {
    return 1;
  }
  return (int)(value == 0xb);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048100
 */

int recovered_10048100(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048110
 */

int recovered_10048110(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004812c
 */

int recovered_1004812c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if (((uint)value < 0x21) && ((1L << ((ulong)(uint)value & 0x3f) & 0x100003600U) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(value != 0xb);
  }
  uVar1 = 0;
  if ((9 < value - 0x30U && 0x19 < value - 0x61U) && 0x19 < value - 0x41U) {
    uVar1 = uVar2;
  }
  if (0x5d < value - 0x21U) {
    uVar1 = 0;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004819c
 */

int recovered_1004819c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)((uint)value < 0x20 || value == 0x7f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100481b0
 */

int recovered_100481b0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (int)(value - 0x21U < 0x5e);
}


#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define uStack_18 (*(uint *)(frame + 40))
#define auStack_28 (*(undefined1 (*)[16])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100481c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_100481c0(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  long lVar3;

  recovered_1003ffa0(auStack_28,0,0x18);
  bVar1 = recovered_10048acc(0x168);
  if (((bVar1) && (_DAT_82010968 != 0)) &&
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_28), iVar2 != 0)) {
    lVar3 = (ulong)uStack_18 * 0x37;
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef uStack_18
#undef auStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048220
 */

double recovered_10048220(long end,long start)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)(end - start);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004822c
 */

long recovered_1004822c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;

  if (param_1 == (uint *)0x0) {
    return -1;
  }
  if ((0x45 < (int)param_1[5]) && (uVar4 = param_1[4], uVar4 < 0xc)) {
    uVar8 = param_1[3];
    if (0 < (int)uVar8) {
      uVar1 = param_1[5] + 0x76c;
      iVar10 = recovered_10048390(uVar1,uVar4);
      if (((((int)uVar8 <= iVar10) && (uVar5 = param_1[2], uVar5 < 0x18)) &&
          (uVar6 = param_1[1], uVar6 < 0x3c)) && (uVar7 = *param_1, uVar7 < 0x3d)) {
        lVar13 = 0;
        for (uVar12 = 0x7b2; (int)uVar12 < (int)uVar1; uVar12 = uVar12 + 1) {
          bVar9 = recovered_100483dc(uVar12);
          lVar3 = 0x16d;
          if (bVar9) {
            lVar3 = 0x16e;
          }
          lVar13 = lVar3 + lVar13;
        }
        for (uVar12 = 0; uVar4 != uVar12; uVar12 = uVar12 + 1) {
          iVar10 = recovered_10048390(uVar1,uVar12);
          lVar13 = lVar13 + iVar10;
        }
        iVar10 = 0;
        for (uVar12 = 0; uVar4 != uVar12; uVar12 = uVar12 + 1) {
          iVar11 = recovered_10048390(uVar1,uVar12);
          iVar10 = iVar11 + iVar10;
        }
        lVar13 = lVar13 + (long)(int)uVar8 + -1;
        uVar2 = lVar13 + 4;
        param_1[6] = (int)uVar2 + (int)(uVar2 / 7) * -7;
        param_1[7] = iVar10 + (int)((long)(int)uVar8 + -1);
        uVar4 = 0x3b;
        if (uVar7 != 0x3c) {
          uVar4 = uVar7;
        }
        return (ulong)(uVar5 * 0xe10 + uVar6 * 0x3c + uVar4) + lVar13 * 0x15180;
      }
    }
  }
  return -1;
}


#undef DAT_1004b2a4
#define DAT_1004b2a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2254U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048390
 */

undefined4 recovered_10048390(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_2 == 1) {
    bVar1 = recovered_100483dc(param_1);
    if (bVar1) {
      return 0x1d;
    }
  }
  else if (0xb < param_2) {
    return 0;
  }
  return *(undefined4 *)(&DAT_1004b2a4 + (ulong)param_2 * 4);
}

#undef DAT_1004b2a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100483dc
 */

bool recovered_100483dc(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 & 3) != 0) {
    return false;
  }
  if ((int)param_1 % 100 == 0) {
    return (int)param_1 % 400 == 0;
  }
  return true;
}


#undef DAT_100514f0
#define DAT_100514f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84a0U)))
#undef DAT_10051504
#define DAT_10051504 (*(int *)(((uintptr_t)pf_module_state + 0x84b4U)))
#undef DAT_10051508
#define DAT_10051508 (*(int *)(((uintptr_t)pf_module_state + 0x84b8U)))
#undef DAT_1005150c
#define DAT_1005150c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84bcU)))
#undef UNK_100514f4
#define UNK_100514f4 (*(uint *)(((uintptr_t)pf_module_state + 0x84a4U)))
#undef UNK_100514f8
#define UNK_100514f8 (*(uint *)(((uintptr_t)pf_module_state + 0x84a8U)))
#undef UNK_100514fc
#define UNK_100514fc (*(int *)(((uintptr_t)pf_module_state + 0x84acU)))
#undef UNK_10051500
#define UNK_10051500 (*(uint *)(((uintptr_t)pf_module_state + 0x84b0U)))
#undef UNK_10051510
#define UNK_10051510 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84c0U)))
#undef _DAT_100514f0
#define _DAT_100514f0 (*(uint *)(((uintptr_t)pf_module_state + 0x84a0U)))
#undef iRam00000000100514fc
#define iRam00000000100514fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84acU)))
#undef uRam00000000100514f4
#define uRam00000000100514f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84a4U)))
#undef uRam00000000100514f8
#define uRam00000000100514f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84a8U)))
#undef uRam0000000010051500
#define uRam0000000010051500 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84b0U)))
#undef uRam0000000010051510
#define uRam0000000010051510 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x84c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048414
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * recovered_10048414(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;

  recovered_1003ffa0(&DAT_100514f0,0,0x24);
  if (param_1 == (ulong *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *param_1 & ((long)*param_1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar3 = uVar9 / 0x15180;
  DAT_10051508 = (int)(uVar3 + 4) + (int)((uVar3 + 4) / 7) * -7;
  uVar10 = uVar3;
  uVar1 = 0x7b1;
  do {
    uVar8 = uVar1;
    uVar7 = uVar10;
    uVar1 = uVar8 + 1;
    bVar4 = recovered_100483dc(uVar1);
    uVar2 = 0x16d;
    if (bVar4) {
      uVar2 = 0x16e;
    }
    uVar10 = uVar7 - uVar2;
  } while (uVar2 <= uVar7);
  DAT_10051504 = uVar8 - 0x76b;
  DAT_1005150c = (undefined4)uVar7;
  uVar8 = 0;
  do {
    uVar6 = uVar8;
    uVar10 = uVar7;
    if (uVar6 == 0xc) break;
    uVar5 = recovered_10048390(uVar1,uVar6);
    uVar7 = uVar10 - uVar5;
    uVar8 = uVar6 + 1;
  } while (uVar5 <= uVar10);
  uVar1 = (int)uVar9 + (int)uVar3 * -0x15180;
  iRam00000000100514fc = (int)uVar10 + 1;
  uRam0000000010051500 = uVar6;
  uRam00000000100514f8 = uVar1 / 0xe10;
  _DAT_100514f0 = uVar1 % 0x3c;
  uRam00000000100514f4 = (uVar1 / 0x3c & 0xffff) % 0x3c;
  uRam0000000010051510 = 0;
  return &DAT_100514f0;
}

#undef DAT_100514f0
#undef DAT_10051504
#undef DAT_10051508
#undef DAT_1005150c
#undef UNK_100514f4
#undef UNK_100514f8
#undef UNK_100514fc
#undef UNK_10051500
#undef UNK_10051510
#undef _DAT_100514f0
#undef iRam00000000100514fc
#undef uRam00000000100514f4
#undef uRam00000000100514f8
#undef uRam0000000010051500
#undef uRam0000000010051510

#undef DAT_100514f0
#define DAT_100514f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048530
 */

undefined * recovered_10048530(ulong *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10048414(in_x0);
  return &DAT_100514f0;
}

#undef DAT_100514f0

#undef DAT_100514d0
#define DAT_100514d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8480U)))
#undef PTR_DAT_1004c280
#define PTR_DAT_1004c280 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3230U)))
#undef PTR_DAT_1004c2f0
#define PTR_DAT_1004c2f0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x32a0U)))
#undef str_1004b087
#define str_1004b087 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2037U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004854c
 */

undefined * recovered_1004854c(uint *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong vararg3;
  ulong vararg2;
  ulong vararg4;
  ulong vararg5;
  ulonglong vararg6;

  if (in_x0 == (uint *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = in_x0[6];
    if (6 < uVar1) {
      uVar1 = 0;
    }
    uVar2 = (ulong)uVar1;
    uVar1 = in_x0[4];
    if (0xb < uVar1) {
      uVar1 = 0;
    }
    uVar3 = (ulong)uVar1;
  }
  if (in_x0 == (uint *)0x0) {
    vararg5 = 0;
    vararg3 = 0;
    vararg4 = 0;
    vararg6 = 0x7b2;
    vararg2 = 1;
  }
  else {
    vararg3 = (ulong)in_x0[2];
    vararg2 = (ulong)in_x0[3];
    vararg5 = (ulong)*in_x0;
    vararg4 = (ulong)in_x0[1];
    vararg6 = (ulonglong)(in_x0[5] + 0x76c);
  }
  pf_varargs_100414cc_7
            (&DAT_100514d0,0x20,str_1004b087,(ulonglong)(&PTR_DAT_1004c280)[uVar2],
             (ulonglong)(&PTR_DAT_1004c2f0)[uVar3],vararg2,vararg3,vararg4,vararg5,vararg6);
  return &DAT_100514d0;
}

#undef DAT_100514d0
#undef PTR_DAT_1004c280
#undef PTR_DAT_1004c2f0
#undef str_1004b087

#undef DAT_100514d0
#define DAT_100514d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8480U)))
#undef DAT_100514f0
#define DAT_100514f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048600
 */

undefined * recovered_10048600(ulong *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10048414(in_x0);
  recovered_1004854c((uint *)&DAT_100514f0);
  return &DAT_100514d0;
}

#undef DAT_100514d0
#undef DAT_100514f0

#undef DAT_100498e4
#define DAT_100498e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x894U)))
#undef DAT_1004990a
#define DAT_1004990a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8baU)))
#undef DAT_1004990e
#define DAT_1004990e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8beU)))
#undef PTR_DAT_1004c280
#define PTR_DAT_1004c280 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3230U)))
#undef PTR_DAT_1004c2f0
#define PTR_DAT_1004c2f0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x32a0U)))
#undef PTR_str_1004b0a6_1004c2b8
#define PTR_str_1004b0a6_1004c2b8 (*(char * *)(((uintptr_t)pf_module_state + 0x3268U)))
#undef PTR_str_1004b0df_1004c350
#define PTR_str_1004b0df_1004c350 (*(char * *)(((uintptr_t)pf_module_state + 0x3300U)))
#define local_6a (*(byte *)(frame + 22))
#define local_69 (*(undefined1 *)(frame + 23))
#define local_68 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004862c
 */

long recovered_1004862c(long param_1,undefined1 *param_2,ulong param_3,long param_4,uint *param_5)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  undefined8 uVar3;
  ulong extraout_x0;
  ulong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar9;
  long lVar10;

  local_68 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_5 == (uint *)0x0) {
    return 0;
  }
  lVar10 = 0;
  *param_2 = 0;
LAB_10048698:
  bVar1 = *(byte *)(param_4 + lVar10);
  if (bVar1 == 0) {
LAB_100488d8:
    if (bVar1 != 0) {
      local_68 = param_1;
    }
    return local_68;
  }
  if (bVar1 != 0x25) {
    local_6a = bVar1;
LAB_100486e8:
    local_69 = 0;
    pbVar6 = &local_6a;
    goto LAB_100488c4;
  }
  lVar10 = lVar10 + 1;
  bVar2 = *(byte *)(param_4 + lVar10);
  switch((uintptr_t)(bVar2)) {
  case 0x41:
    uVar8 = param_5[6];
    if (6 < uVar8) {
      uVar8 = 0;
    }
    ppuVar9 = &PTR_str_1004b0a6_1004c2b8;
    goto LAB_100488b8;
  case 0x42:
    uVar8 = param_5[4];
    if (0xb < uVar8) {
      uVar8 = 0;
    }
    ppuVar9 = &PTR_str_1004b0df_1004c350;
    goto LAB_100488b8;
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
switchD_100486c8_caseD_43:
    local_6a = bVar2;
    goto LAB_100486e8;
  case 0x46:
    recovered_1004899c((long)param_2,param_3,&local_68,(ulong)(param_5[5] + 0x76c),4);
    if (((extraout_w0 != 0) &&
        (uVar3 = recovered_1004890c((long)param_2,param_3,&local_68,&DAT_1004990a), (int)uVar3 != 0)
        ) && ((recovered_1004899c((long)param_2,param_3,&local_68,(ulong)(param_5[4] + 1),2),
              extraout_w0_02 != 0 &&
              (uVar3 = recovered_1004890c((long)param_2,param_3,&local_68,&DAT_1004990a),
              (int)uVar3 != 0)))) {
LAB_100487d8:
      uVar5 = (ulonglong)param_5[3];
      break;
    }
    goto LAB_100488d4;
  case 0x48:
    uVar5 = (ulonglong)param_5[2];
    break;
  case 0x49:
    uVar8 = 0xc;
    if ((int)param_5[2] % 0xc != 0) {
      uVar8 = (int)param_5[2] % 0xc;
    }
    uVar5 = (ulonglong)uVar8;
    break;
  case 0x4d:
    uVar5 = (ulonglong)param_5[1];
    break;
  case 0x53:
    goto switchD_100486c8_caseD_53;
  case 0x54:
    recovered_1004899c((long)param_2,param_3,&local_68,(ulong)param_5[2],2);
    if ((((extraout_w0_00 == 0) ||
         (uVar3 = recovered_1004890c((long)param_2,param_3,&local_68,&DAT_100498e4), (int)uVar3 == 0
         )) || (recovered_1004899c((long)param_2,param_3,&local_68,(ulong)param_5[1],2),
               extraout_w0_01 == 0)) ||
       (uVar3 = recovered_1004890c((long)param_2,param_3,&local_68,&DAT_100498e4), (int)uVar3 == 0))
    goto LAB_100488d4;
    goto switchD_100486c8_caseD_53;
  default:
    if (bVar2 == 0x25) {
      pbVar6 = &DAT_1004990e;
      goto LAB_100488c4;
    }
    if (bVar2 == 0x59) {
      uVar5 = (ulonglong)(param_5[5] + 0x76c);
      iVar7 = 4;
      goto LAB_10048828;
    }
    if (bVar2 != 0x61) {
      if (bVar2 == 0x62) {
        uVar8 = param_5[4];
        if (0xb < uVar8) {
          uVar8 = 0;
        }
        ppuVar9 = &PTR_DAT_1004c2f0;
        goto LAB_100488b8;
      }
      if (bVar2 == 100) goto LAB_100487d8;
      if (bVar2 == 0x6d) {
        uVar5 = (ulonglong)(param_5[4] + 1);
        break;
      }
      if (bVar2 == 0x70) {
        pbVar6 = (byte *)((uintptr_t)pf_module_state + 0x20e1U);
        if (0xb < (int)param_5[2]) {
          pbVar6 = (byte *)((uintptr_t)pf_module_state + 0x20e4U);
        }
        goto LAB_100488c4;
      }
      if (bVar2 != 0) goto switchD_100486c8_caseD_43;
      param_1 = local_68;
      goto LAB_100488d8;
    }
    uVar8 = param_5[6];
    if (6 < uVar8) {
      uVar8 = 0;
    }
    ppuVar9 = &PTR_DAT_1004c280;
LAB_100488b8:
    pbVar6 = ppuVar9[uVar8];
LAB_100488c4:
    uVar4 = recovered_1004890c((long)param_2,param_3,&local_68,pbVar6);
    param_1 = extraout_x8_00;
    goto joined_r0x1004882c;
  }
LAB_10048820:
  iVar7 = 2;
LAB_10048828:
  recovered_1004899c((long)param_2,param_3,&local_68,uVar5,iVar7);
  param_1 = extraout_x8;
  uVar4 = extraout_x0;
joined_r0x1004882c:
  if ((uVar4 & 1) == 0) {
LAB_100488d4:
    param_1 = 0;
    goto LAB_100488d8;
  }
  lVar10 = lVar10 + 1;
  goto LAB_10048698;
switchD_100486c8_caseD_53:
  uVar5 = (ulonglong)*param_5;
  goto LAB_10048820;
}

#undef DAT_100498e4
#undef DAT_1004990a
#undef DAT_1004990e
#undef PTR_DAT_1004c280
#undef PTR_DAT_1004c2f0
#undef PTR_str_1004b0a6_1004c2b8
#undef PTR_str_1004b0df_1004c350
#undef local_6a
#undef local_69
#undef local_68

#undef DAT_1004938a
#define DAT_1004938a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004890c
 */

undefined8 recovered_1004890c(long param_1,ulong param_2,long *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *source;
  undefined8 uVar1;
  ulong count;
  long lVar2;

  if (param_4 == (undefined1 *)0x0) {
    count = 0;
  }
  else {
    count = recovered_10040274(param_4);
  }
  uVar1 = 0;
  if ((param_1 != 0) && (param_3 != (long *)0x0)) {
    if (*param_3 + count < param_2) {
      source = &DAT_1004938a;
      if (param_4 != (undefined1 *)0x0) {
        source = param_4;
      }
      recovered_1003fdb4((void *)(param_1 + *param_3),source,count);
      lVar2 = *param_3;
      *param_3 = lVar2 + count;
      *(undefined1 *)(param_1 + lVar2 + count) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_1004938a

#undef DAT_10049aeb
#define DAT_10049aeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9bU)))
#undef DAT_1004b13b
#define DAT_1004b13b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20ebU)))
#undef DAT_1004b140
#define DAT_1004b140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20f0U)))
#define acStack_40 (*(char (*)[16])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004899c
 */

void recovered_1004899c(long param_1,ulong param_2,long *param_3,ulonglong param_4,int param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *format;

  pcVar1 = &DAT_1004b140;
  if (param_5 != 4) {
    pcVar1 = &DAT_10049aeb;
  }
  format = &DAT_1004b13b;
  if (param_5 != 2) {
    format = pcVar1;
  }
  pf_varargs_100414cc_1(acStack_40,0x10,format,param_4);
  recovered_1004890c(param_1,param_2,param_3,acStack_40);
  return;
}

#undef DAT_10049aeb
#undef DAT_1004b13b
#undef DAT_1004b140
#undef acStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048a18
 */

bool recovered_10048a18(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 == 1)) {
    uVar2 = recovered_10045c20(0,(undefined8 *)param_1);
    bVar1 = (int)uVar2 == 0;
  }
  return bVar1;
}


#undef DAT_10049053
#define DAT_10049053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3U)))
#undef str_1004ab05
#define str_1004ab05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ab5U)))
#undef str_1004ab0c
#define str_1004ab0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abcU)))
#define in_stack_fffffffffffffed0 (*(char * *)(frame + 16))
#define acStack_121 (*(char (*)[241])(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048a4c
 */

ulong recovered_10048a4c(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *format;

  if (param_3 == (char *)0x0) {
    return 0;
  }
  *param_3 = '\0';
  uVar2 = recovered_10042610(param_1,param_2,acStack_121);
  if ((int)uVar2 != 0) {
    iVar1 = recovered_10040298(acStack_121,&DAT_10049053);
    if (iVar1 == 0) {
      format = str_1004ab05;
    }
    else {
      format = str_1004ab0c;
      in_stack_fffffffffffffed0 = acStack_121;
    }
    pf_varargs_100414cc_1(param_3,0xf9,format,(ulonglong)in_stack_fffffffffffffed0);
    uVar2 = (ulong)(*param_3 != '\0');
  }
  return uVar2;
}

#undef DAT_10049053
#undef str_1004ab05
#undef str_1004ab0c
#undef in_stack_fffffffffffffed0
#undef acStack_121

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
 * Address: 0x10048acc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10048acc(int param_1)

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
 * Address: 0x10048b14
 */

undefined8 recovered_10048b14(undefined1 *param_1,long *param_2,long *param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  long lVar3;

  uVar1 = recovered_10040274(param_1);
  uVar1 = uVar1 + 1;
  if (*param_4 < uVar1) {
    uVar2 = 0x22;
  }
  else {
    recovered_1003fdb4((void *)*param_3,param_1,uVar1);
    uVar2 = 0;
    lVar3 = *param_3;
    *param_2 = lVar3;
    *param_3 = lVar3 + uVar1;
    *param_4 = *param_4 - uVar1;
  }
  return uVar2;
}


__asm__(".globl ___chkstk_darwin\n.set ___chkstk_darwin, ____chkstk_darwin\n");
