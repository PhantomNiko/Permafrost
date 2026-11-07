/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80f4U)))
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
 * Address: 0x10000658
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000658(void)

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

  DAT_10010108 = 0;
  uStack_48 = 0;
  DAT_10010110 = 0;
  DAT_10010118 = 0;
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
    recovered_100024d4(puVar8[-1],*puVar8,&uStack_48);
    puVar8 = puVar8 + 2;
  }
  if (DAT_10010110 == 0) {
    uVar4 = _DAT_82010088 & 0xfffffff0;
    if (_DAT_82010088 < 0x300001) {
      uVar4 = 0x4000000;
    }
    uVar2 = 0x4000000;
    if (0x300030 < uVar4) {
      uVar2 = uVar4;
    }
    recovered_100024d4(0x300000,(ulong)uVar2 - 0x300000,&uStack_48);
  }
  if (DAT_10010118 == 0) {
    DAT_10010118 = DAT_10010110;
  }
  DAT_10010108 = 1;
  return;
}

#undef DAT_10010108
#undef DAT_10010110
#undef DAT_10010118
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

#undef DAT_10010108
#define DAT_10010108 (*(byte *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80f4U)))
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
#define local_48 (*(ulong *)(frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000664
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000664(void)

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
  if ((DAT_10010108 & 1) == 0) {
    DAT_10010110 = 0;
    DAT_10010118 = 0;
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
      recovered_100024d4(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_10010110 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_100024d4(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_10010118 == 0) {
      DAT_10010118 = DAT_10010110;
    }
    DAT_10010108 = 1;
  }
  return;
}

#undef DAT_10010108
#undef DAT_10010110
#undef DAT_10010118
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef auStack_458
#undef local_48

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008e8
 */

ulong recovered_100008e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000664();
  uVar1 = 0;
  for (plVar2 = &DAT_10010110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
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

#undef DAT_10010110

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000934
 */

long recovered_10000934(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000664();
  lVar1 = 0;
  for (plVar2 = &DAT_10010110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  return lVar1;
}

#undef DAT_10010110

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000974
 */

ulong recovered_10000974(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000664();
  uVar1 = 0;
  for (plVar2 = &DAT_10010110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_10010110

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009b0
 */

long recovered_100009b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000664();
  lVar1 = 0;
  for (plVar2 = &DAT_10010110; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  return lVar1;
}

#undef DAT_10010110

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x80f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e0
 */

ulong * recovered_100009e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;

  if (param_1 != 0) {
    recovered_10000664();
    puVar4 = DAT_10010110;
    if (DAT_10010118 != (ulong *)0x0) {
      puVar4 = DAT_10010118;
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
            DAT_10010118 = DAT_10010110;
            *(undefined1 *)(puVar2 + 3) = 0;
            if (puVar4 != (ulong *)0x0) {
              DAT_10010118 = puVar4;
            }
            return puVar2 + 4;
          }
        }
        puVar1 = puVar2 + 1;
        puVar2 = DAT_10010110;
        if ((ulong *)*puVar1 != (ulong *)0x0) {
          puVar2 = (ulong *)*puVar1;
        }
      } while (puVar2 != (ulong *)0x0 && puVar2 != puVar4);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_10010110
#undef DAT_10010118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ab8
 */

ulong recovered_10000ab8(ulong param_1,uint param_2)

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
 * Address: 0x10000afc
 */

ulong recovered_10000afc(ulong param_1,uint param_2)

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
 * Address: 0x10000b48
 */

long recovered_10000b48(long param_1,uint param_2)

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
 * Address: 0x10000b98
 */

/* WARNING: Removing unreachable block (ram,0x10000be8) */

ulong recovered_10000b98(ulong param_1,ulong param_2)

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
 * Address: 0x10000ba0
 */

ulong recovered_10000ba0(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x10000c00
 */

undefined8 recovered_10000c00(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10000ba0(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c20
 */

long recovered_10000c20(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10000ba0(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c60
 */

long recovered_10000c60(long param_1,long param_2)

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
  recovered_10000ba0(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cac
 */

void recovered_10000cac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb4
 */

int recovered_10000cb4(int param_1)

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
void * recovered_10000cc0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000d04(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000d48(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d94
 */

void * recovered_10000d94(void *destination,void *source,ulong count)

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
 * Address: 0x10000e6c
 */

void * recovered_10000e6c(void *destination,void *source,ulong count)

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
      destination = recovered_10000d94(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f80
 */

void * recovered_10000f80(void *destination,int value,ulong count)

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
 * Address: 0x10001018
 */

void recovered_10001018(ulong *param_1,ulong param_2)

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
 * Address: 0x1000101c
 */

void recovered_1000101c(ulong *param_1,ulong param_2)

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
 * Address: 0x10001020
 */

int recovered_10001020(void *left,void *right,ulong count)

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
        goto recovered_1000118c;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_1000118c;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_1000118c;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_1000118c;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_1000118c:
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
 * Address: 0x1000118c
 */

int recovered_1000118c(long param_1,long param_2)

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
 * Address: 0x100011bc
 */

bool recovered_100011bc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cc
 */

bool recovered_100011cc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011dc
 */

bool recovered_100011dc(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

bool recovered_100011f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000120c
 */

bool recovered_1000120c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000121c
 */

bool recovered_1000121c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000122c
 */

int recovered_1000122c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001240
 */

int recovered_10001240(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001254
 */

ulong recovered_10001254(char *text)

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
 * Address: 0x10001278
 */

int recovered_10001278(char *left,char *right)

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
 * Address: 0x100012a0
 */

int recovered_100012a0(char *left,char *right)

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
 * Address: 0x100012a4
 */

void recovered_100012a4(long param_1,long param_2)

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
 * Address: 0x100012bc
 */

void recovered_100012bc(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10001254(param_1);
    destination = recovered_10000cc0(uVar1 + 1);
    if (destination != (void *)0x0) {
      recovered_10000d94(destination,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f8
 */

char * recovered_100012f8(char *param_1,char param_2)

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
 * Address: 0x10001320
 */

long recovered_10001320(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100012f8(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001368
 */

char * recovered_10001368(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100012f8(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a8
 */

char * recovered_100013a8(char *param_1,char *param_2)

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


#undef DAT_10008b3e
#define DAT_10008b3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e4
 */

undefined * recovered_100013e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008b3e;
}

#undef DAT_10008b3e

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7fdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

undefined ** recovered_100013f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[8])(frame + 24))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100013fc(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10000f80(auStack_38,0,0x18);
  bVar1 = recovered_100025cc(0x168);
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
 * Address: 0x10001474
 */

double recovered_10001474(double param_1,uint param_2)

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
 * Address: 0x100014a8
 */

uint128 recovered_100014a8(double param_1,int *param_2)

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
 * Address: 0x1000151c
 */

uint128 recovered_1000151c(double param_1,double param_2)

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
 * Address: 0x10001540
 */

uint128 recovered_10001540(double param_1,double param_2)

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
 * Address: 0x100015a0
 */

uint128 recovered_100015a0(double param_1)

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
 * Address: 0x100015bc
 */

uint128 recovered_100015bc(double param_1)

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
 * Address: 0x100015e8
 */

uint128 recovered_100015e8(double param_1)

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


#undef DAT_10008028
#define DAT_10008028 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001624
 */

uint128 recovered_10001624(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10008028 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10008028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d0
 */

long recovered_100016d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10008030
#define DAT_10008030 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e4
 */

uint128 recovered_100016e4(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001738(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10008030);
  return auVar1;
}

#undef DAT_10008030

#undef DAT_10008038
#define DAT_10008038 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10008040
#define DAT_10008040 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10008048
#define DAT_10008048 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10008050
#define DAT_10008050 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001738
 */

void recovered_10001738(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10008038 < param_1; param_1 = param_1 + DAT_10008050) {
  }
  for (; param_1 < DAT_10008040; param_1 = param_1 + DAT_10008048) {
  }
  return;
}

#undef DAT_10008038
#undef DAT_10008040
#undef DAT_10008048
#undef DAT_10008050

#undef DAT_10008058
#define DAT_10008058 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000177c
 */

uint128 recovered_1000177c(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001738(in_d0);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10008058;
  return auVar1;
}

#undef DAT_10008058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017c8
 */

uint128 recovered_100017c8(double param_1)

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
long long recovered_100017d8(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10001838(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10001888(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_100018b0(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d4
 */

float recovered_100018d4(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001908
 */

float recovered_10001908(int *in_x0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100014a8((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001920
 */

float recovered_10001920(uint in_w0,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001474((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001938
 */

float recovered_10001938(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001540((double)param_1,(double)param_2);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001954
 */

float recovered_10001954(float param_1)

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
 * Address: 0x10001978
 */

float recovered_10001978(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100015bc((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001990
 */

uint128 recovered_10001990(double param_1)

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
 * Address: 0x100019b8
 */

float recovered_100019b8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001990((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d0
 */

float recovered_100019d0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100015e8((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e8
 */

float recovered_100019e8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001624((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a00
 */

long recovered_10001a00(double param_1)

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
 * Address: 0x10001a14
 */

float recovered_10001a14(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_100016e4((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a2c
 */

float recovered_10001a2c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000177c((double)param_1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a44
 */

float recovered_10001a44(float param_1)

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
 * Address: 0x10001a54
 */

long recovered_10001a54(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001aec;
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
      goto LAB_10001b18;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10001b18;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10001b18;
    }
LAB_10001aec:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10001b18:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10001b58((uint)*pbVar4);
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
 * Address: 0x10001b58
 */

uint recovered_10001b58(int param_1)

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
 * Address: 0x10001b88
 */

long recovered_10001b88(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10001c6c;
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
      goto LAB_10001c6c;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001c6c;
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
LAB_10001c6c:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10001b58((uint)*pbVar6);
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
 * Address: 0x10001cac
 */

uint128 recovered_10001cac(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_10001474(dVar12,iVar9 * iVar6);
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
 * Address: 0x10001e3c
 */

float recovered_10001e3c(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001cac(in_x0,in_x1);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


#define pdStack_78 (*(double * *)(frame + 40))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(ulong *)(frame + 24))
#define local_80 (*(byte * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e54
 */

int recovered_10001e54(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_10001ec4:
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
      goto LAB_10001ef0;
    }
    goto LAB_10001ef4;
  }
  pbVar8 = param_3 + 1;
  bVar1 = *pbVar8;
  if (bVar1 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar1)) {
      case 0x2a:
        goto code_r0x10001f90;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10001f78;
      default:
        if ((bVar1 != 0x20) && (bVar1 != 0x23)) goto LAB_10001f78;
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
  goto LAB_10002220;
LAB_10001f78:
  do {
    pbVar8 = param_3 + 1;
    bVar1 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar1 - 0x30U < 10);
LAB_10001fa0:
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
LAB_10002054:
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
      goto LAB_10002054;
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
      goto LAB_10001ef0;
    }
    break;
  case 100:
  case 0x69:
code_r0x10002170:
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
LAB_10002210:
    pdStack_78 = pdStack_78 + 1;
    uVar9 = 10;
code_r0x10002218:
    uVar7 = 0;
LAB_1000221c:
    recovered_10002408((long *)&local_80,&local_88,&local_8c,(ulong)dVar6,uVar9,uVar7);
    goto LAB_10002220;
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
      recovered_10002408((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar6,10,0);
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
      goto LAB_10002220;
    }
    pcVar5 = (char *)((uintptr_t)pf_module_state + 0xb1cU);
code_r0x10002234:
    pdStack_78 = pdStack_78 + 1;
    recovered_100023b8((long *)&local_80,&local_88,&local_8c,pcVar5);
    goto LAB_10002220;
  default:
    switch((uintptr_t)(bVar1)) {
    case 0x70:
      dVar6 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_100023b8((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0xb51U));
      uVar9 = 0x10;
      goto code_r0x10002218;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pcVar5 = (char *)(uintptr_t)pf_double_bits(*pdStack_78);
      goto code_r0x10002234;
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
      goto LAB_10002210;
    case 0x78:
code_r0x1000212c:
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
      goto LAB_1000221c;
    default:
      if (bVar1 == 0x49) goto code_r0x10002170;
      if (bVar1 == 0x58) goto code_r0x1000212c;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_10001ef0:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10001ef4:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002220:
  param_3 = pbVar8 + 1;
  goto LAB_10001ec4;
code_r0x10001f90:
  pdStack_78 = pdStack_78 + 1;
  bVar1 = *pbVar8;
  goto LAB_10001fa0;
}

#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000237c
 */

void recovered_1000237c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10008b4c
#define str_10008b4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b8
 */

void recovered_100023b8(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10008b4c;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_1000237c(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10008b4c

#undef str_10008b53
#define str_10008b53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2fU)))
#undef str_10008b64
#define str_10008b64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb40U)))
#define local_80 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002408
 */

void recovered_10002408(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10008b53;
  if (param_6 == 0) {
    pcVar1 = str_10008b64;
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
    recovered_1000237c(param_1,param_2,param_3,local_80[lVar6]);
  }
  return;
}

#undef str_10008b53
#undef str_10008b64
#undef local_80

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_100024ac(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001e54(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x80f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d4
 */

void recovered_100024d4(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_1000255c(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_10010108;
      if (DAT_10010110 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_10010118 == (long *)0x0) {
        DAT_10010118 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_10010108
#undef DAT_10010110
#undef DAT_10010118

#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x80f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000255c
 */

void recovered_1000255c(long param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_10010108;
      if (DAT_10010110 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10010118 == (long *)0x0) {
        DAT_10010118 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_10010108
#undef DAT_10010110
#undef DAT_10010118

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
 * Address: 0x100025cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100025cc(int param_1)

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

#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002714
 */

void recovered_10002714(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010128 != 0) {
          DAT_10010128 = DAT_10010128 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100027cc(1);
        }
        else {
          if (DAT_10010128 - 0x1ffU < 0xfffffffffffffdff || DAT_10010128 == -2) {
            recovered_100027cc(0);
          }
          pcVar1 = &DAT_10010130 + DAT_10010128;
          DAT_10010128 = DAT_10010128 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010128
#undef DAT_10010130

#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100027cc(int param_1)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010128 != 0) || (param_1 != 0)) {
    if (DAT_10010128 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d94(local_230,&DAT_10010130,DAT_10010128);
      uVar2 = DAT_10010128;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003560(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_10010128 = 0;
  }
  return;
}

#undef DAT_10010128
#undef DAT_10010130
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002858
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002858(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010128 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10000d94(auStack_230,&DAT_10010130,DAT_10010128);
    uVar2 = DAT_10010128;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003560(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_10010128 = 0;
  return;
}

#undef DAT_10010128
#undef DAT_10010130
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002860(void)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010128 != 0) {
    if (DAT_10010128 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000d94(auStack_230,&DAT_10010130,DAT_10010128);
      uVar2 = DAT_10010128;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003560(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_10010128 = 0;
  }
  return;
}

#undef DAT_10010128
#undef DAT_10010130
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10008b78
#define DAT_10008b78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb54U)))
#define acStack_160 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002868
 */

void recovered_10002868(char *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10008b78;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_100024ac(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002714(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10008b78
#undef acStack_160

#undef DAT_10008b96
#define DAT_10008b96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb72U)))
#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
#undef str_10008b7b
#define str_10008b7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb57U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028cc
 */

/* WARNING: Removing unreachable block (ram,0x10002918) */

void recovered_100028cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100028f0(str_10008b7b);
  pcVar4 = &DAT_10008b96;
  for (uVar3 = recovered_10001254(&DAT_10008b96); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010128 != 0) {
        DAT_10010128 = DAT_10010128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100027cc(1);
      }
      else {
        if (DAT_10010128 - 0x1ffU < 0xfffffffffffffdff || DAT_10010128 == -2) {
          recovered_100027cc(0);
        }
        pcVar1 = &DAT_10010130 + DAT_10010128;
        DAT_10010128 = DAT_10010128 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10008b96
#undef DAT_10010128
#undef DAT_10010130
#undef str_10008b7b

#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

void recovered_100028f0(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10001254(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010128 != 0) {
          DAT_10010128 = DAT_10010128 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100027cc(1);
        }
        else {
          if (DAT_10010128 - 0x1ffU < 0xfffffffffffffdff || DAT_10010128 == -2) {
            recovered_100027cc(0);
          }
          pcVar1 = &DAT_10010130 + DAT_10010128;
          DAT_10010128 = DAT_10010128 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010128
#undef DAT_10010130

#undef DAT_10008b96
#define DAT_10008b96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb72U)))
#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8104U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810cU)))
#undef str_10008b99
#define str_10008b99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb75U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000291c
 */

/* WARNING: Removing unreachable block (ram,0x10002918) */

void recovered_1000291c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100028f0(str_10008b99);
  pcVar4 = &DAT_10008b96;
  for (uVar3 = recovered_10001254(&DAT_10008b96); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010128 != 0) {
        DAT_10010128 = DAT_10010128 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100027cc(1);
      }
      else {
        if (DAT_10010128 - 0x1ffU < 0xfffffffffffffdff || DAT_10010128 == -2) {
          recovered_100027cc(0);
        }
        pcVar1 = &DAT_10010130 + DAT_10010128;
        DAT_10010128 = DAT_10010128 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10008b96
#undef DAT_10010128
#undef DAT_10010130
#undef str_10008b99

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002940(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10002860();
    bVar2 = recovered_10003560(0x44);
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
 * Address: 0x100029b8
 */

undefined8 recovered_100029b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029bc
 */

void recovered_100029bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

undefined8 recovered_100029c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10008b78
#define DAT_10008b78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb54U)))
#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
#undef str_10008c2d
#define str_10008c2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc09U)))
#undef str_10008c3a
#define str_10008c3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc16U)))
#undef str_10008c48
#define str_10008c48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc24U)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c8
 */

undefined4 * recovered_100029c8(char *param_1,long param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_10010080 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001278(param_1,str_10008c2d);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001278(param_1,str_10008c3a);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001278(param_1,str_10008c48);
      if (iVar3 != 0) {
        puVar4 = recovered_10000cc0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010080 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000f80(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100012f8((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012f8((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012f8((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100012f8((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012f8((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012f8((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100012f8((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_100024ac_1((char *)(puVar4 + 1),0xf1,&DAT_10008b78,(ulonglong)param_1);
        recovered_10000f80(&uStack_4c,0,0xc);
        uVar6 = recovered_10002c04(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010080 = 2;
LAB_10002bac:
            recovered_10000d04(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100012f8((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002c54((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002bac;
              recovered_10000d94(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000cc0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010080 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000f80(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_100024ac_1((char *)(puVar4 + 1),0xf1,&DAT_10008b78,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_10008b78
#undef DAT_10010080
#undef str_10008c2d
#undef str_10008c3a
#undef str_10008c48
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002c04(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003560(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c54
 */

undefined8 recovered_10002c54(long param_1,ulong param_2)

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
      pvVar2 = recovered_10000d48(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_10010080 = 0xc;
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

#undef DAT_10010080

#undef DAT_10008b78
#define DAT_10008b78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb54U)))
#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
#undef str_10008c2d
#define str_10008c2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc09U)))
#undef str_10008c3a
#define str_10008c3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc16U)))
#undef str_10008c48
#define str_10008c48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc24U)))
#define uStack_4c (*(uint *)(frame + 20))
#define uStack_48 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cdc
 */

undefined4 * recovered_10002cdc(char *param_1,long param_2,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_10002d10(param_3);
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    DAT_10010080 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001278(param_1,str_10008c2d);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001278(param_1,str_10008c3a);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001278(param_1,str_10008c48);
      if (iVar3 != 0) {
        puVar4 = recovered_10000cc0(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010080 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000f80(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100012f8((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012f8((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012f8((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100012f8((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100012f8((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100012f8((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100012f8((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        pf_varargs_100024ac_1((char *)(puVar4 + 1),0xf1,&DAT_10008b78,(ulonglong)param_1);
        recovered_10000f80(&uStack_4c,0,0xc);
        uVar6 = recovered_10002c04(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010080 = 2;
LAB_10002bac:
            recovered_10000d04(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100012f8((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10002c54((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10002bac;
              recovered_10000d94(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10000cc0(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010080 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000f80(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  pf_varargs_100024ac_1((char *)(puVar4 + 1),0xf1,&DAT_10008b78,(ulonglong)param_1);
  return puVar4;
}

#undef DAT_10008b78
#undef DAT_10010080
#undef str_10008c2d
#undef str_10008c3a
#undef str_10008c48
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

undefined8 recovered_10002d10(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003134(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10000d04(*(void **)(param_1 + 0x40));
    }
    recovered_10000d04(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d54
 */

ulong recovered_10002d54(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  uint128 auVar1;
  uint128 auVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  uVar7 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      if ((*param_4 == 0) && (param_4[0x48] == -1)) {
        uVar5 = *(ulong *)(param_4 + 0x46);
        uVar7 = *(ulong *)(param_4 + 0x42) - uVar5;
        if (*(ulong *)(param_4 + 0x42) < uVar5 || uVar7 == 0) {
          uVar7 = 0;
          *(undefined1 *)(param_4 + 0x4a) = 1;
        }
        else {
          PF_PART8(auVar1, 8) = 0;
          PF_PART8(auVar1, 0) = param_2;
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_3;
          uVar6 = param_3 * param_2;
          if (SUB168(auVar1 * auVar2,8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          count = uVar7;
          if (uVar6 <= uVar7) {
            count = uVar6;
          }
          recovered_10000d94(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + count;
          if (uVar7 < uVar6) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = count / param_2;
          }
        }
      }
      else {
        uVar7 = 0;
        while( true ) {
          uVar5 = param_2;
          puVar3 = param_1;
          if (uVar7 == param_3) break;
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar4 = recovered_10002e88(param_4);
            if (uVar4 == 0xffffffff) {
              return uVar7;
            }
            *puVar3 = (char)uVar4;
            puVar3 = puVar3 + 1;
          }
          param_1 = param_1 + param_2;
          uVar7 = uVar7 + 1;
        }
        uVar7 = param_3;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e88
 */

uint recovered_10002e88(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
LAB_10002f20:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10002940((long)text,0x1fe,&DAT_10008b4b,0);
      if (bVar2) {
        uVar3 = recovered_10001254(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10002f20;
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

#undef DAT_10008b4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f6c
 */

long recovered_10002f6c(void *param_1,long param_2,long param_3,uint *param_4)

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
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10002714(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_1000306c;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_10002c54((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10000f80((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000d94((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_1000306c;
    }
  }
  param_3 = 0;
LAB_1000306c:
  return param_3;
}


#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

undefined8 recovered_1000307c(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10010080 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10003088;
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
LAB_10003088:
  DAT_10010080 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

undefined8 recovered_10003110(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10010080 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003134
 */

undefined8 recovered_10003134(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003310(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_10010080 = 5;
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

#undef DAT_10010080

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a8
 */

undefined1 recovered_100031a8(long param_1)

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
 * Address: 0x100031b4
 */

undefined1 recovered_100031b4(long param_1)

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
 * Address: 0x100031c0
 */

void recovered_100031c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

uint recovered_100031d4(uint param_1,long param_2)

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


#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

undefined8 recovered_100031f8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010080 = 0x16;
  }
  else {
    uVar1 = recovered_10003230(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10010080 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10010080

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003230(undefined8 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003560(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x805cU)))
#define uStack_28 (*(uint *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003274
 */

undefined8 recovered_10003274(long param_1,long param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010080 = 0x16;
  }
  else {
    recovered_10000f80(&uStack_2c,0,0xc);
    uVar1 = recovered_10002c04(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010080 = 2;
    }
    else {
      uVar1 = recovered_10003310(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003230(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_10010080 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_10010080
#undef uStack_28
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003560(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010838
#undef _DAT_82010838

#define uStack_3c (*(uint *)(frame + 20))
#define uStack_38 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

undefined8 recovered_10003370(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *destination;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10000f80(&uStack_3c,0,0xc);
    uVar2 = recovered_10002c04(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      destination = recovered_10000cc0((ulong)uVar1);
      uVar2 = 0;
      if (destination != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10000d94(destination,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = destination;
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
 * Address: 0x10003410
 */

bool recovered_10003410(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003310(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000343c
 */

undefined8 recovered_1000343c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003440
 */

void recovered_10003440(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003444
 */

undefined8 recovered_10003444(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003448
 */

undefined8 recovered_10003448(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000344c
 */

undefined8 recovered_1000344c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003450
 */

char * recovered_10003450(long param_1,char param_2,long param_3)

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
 * Address: 0x10003474
 */

int recovered_10003474(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;

  while( true ) {
    if (count == 0) {
      return 0;
    }
    bVar1 = *left;
    iVar2 = (uint)bVar1 - (uint)(byte)*right;
    if (iVar2 != 0) break;
    count = count - 1;
    left = left + 1;
    right = right + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


#undef DAT_10008bbc
#define DAT_10008bbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb98U)))
#undef str_10008bbf
#define str_10008bbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9bU)))
#undef str_10008bcc
#define str_10008bcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba8U)))
#undef str_10008bd6
#define str_10008bd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb2U)))
#undef str_10008bea
#define str_10008bea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc6U)))
#undef str_10008bf8
#define str_10008bf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd4U)))
#undef str_10008c0a
#define str_10008c0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe6U)))
#undef str_10008c16
#define str_10008c16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_10008c27
#define str_10008c27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a4
 */

char * recovered_100034a4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10008bbc;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_100034d0_caseD_1;
  case 2:
    return str_10008bbf;
  case 5:
    return str_10008bcc;
  case 9:
    return str_10008bd6;
  case 0xc:
    return str_10008bea;
  case 0xd:
    return str_10008bf8;
  default:
    if (param_1 == 0x11) {
      return str_10008c0a;
    }
    if (param_1 == 0x16) {
      return str_10008c16;
    }
switchD_100034d0_caseD_1:
    return str_10008c27;
  }
}

#undef DAT_10008bbc
#undef str_10008bbf
#undef str_10008bcc
#undef str_10008bd6
#undef str_10008bea
#undef str_10008bf8
#undef str_10008c0a
#undef str_10008c16
#undef str_10008c27

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003544
 */

undefined8 recovered_10003544(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003548
 */

undefined8 recovered_10003548(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10010120
#define DAT_10010120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000354c
 */

void recovered_1000354c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010120 = DAT_10010120 + 1;
  return;
}

#undef DAT_10010120

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
 * Address: 0x10003560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003560(int param_1)

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
__attribute__((naked,noreturn)) void recovered_1000362c(void *context){__asm__ volatile("ldr x16,[x0,#80]\nmov sp,x16\nldr x29,[x0,#64]\nldr x16,[x0,#72]\nbr x16");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003640(void *context) { __asm__ volatile("stp x19,x20,[x0,#0]\nstp x21,x22,[x0,#16]\nstp x23,x24,[x0,#32]\nstp x25,x26,[x0,#48]\nstp x27,x28,[x0,#64]\nstp x29,x30,[x0,#80]\nmov x8,sp\nstr x8,[x0,#96]\nstp d8,d9,[x0,#104]\nstp d10,d11,[x0,#120]\nstp d12,d13,[x0,#136]\nstp d14,d15,[x0,#152]\nmov w0,#0\nret"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1000367c(void *context,int value) { __asm__ volatile("cbnz w1,1f\nmov w1,#1\n1:\nldp x19,x20,[x0,#0]\nldp x21,x22,[x0,#16]\nldp x23,x24,[x0,#32]\nldp x25,x26,[x0,#48]\nldp x27,x28,[x0,#64]\nldp x29,x30,[x0,#80]\nldr x8,[x0,#96]\nmov sp,x8\nldp d8,d9,[x0,#104]\nldp d10,d11,[x0,#120]\nldp d12,d13,[x0,#136]\nldp d14,d15,[x0,#152]\nmov w0,w1\nret"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c0
 */

void recovered_100036c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10000cac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100036d0);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036d4
 */

undefined8 recovered_100036d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036dc
 */

void recovered_100036dc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100036ec(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100036c0();
}


#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x830cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036ec
 */

long recovered_100036ec(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_10010330;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10010330 = param_1;
  return param_1 + 0x30;
}

#undef DAT_10010330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000370c
 */

void * recovered_1000370c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000cc0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000373c
 */

void * recovered_1000373c(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000cc0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

void recovered_10003740(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003758
 */

void recovered_10003758(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

void recovered_10003770(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003788
 */

void recovered_10003788(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

undefined8 recovered_100037a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a8
 */

uint recovered_100037a8(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037b8
 */

void recovered_100037b8(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c8
 */

void recovered_100037c8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037cc
 */

undefined1 * recovered_100037cc(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_10000cc0(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100036c0();
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
 * Address: 0x10003814
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003814(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  bVar1 = recovered_100025cc(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x30);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003824
 */

long recovered_10003824(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x30;
}


#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x830cU)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000382c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000382c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10010330;
  if (DAT_10010330 != 0) {
    puVar1 = (undefined8 *)(DAT_10010330 + 0x10);
    DAT_10010330 = *(long *)(DAT_10010330 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x30);
      }
      bVar3 = recovered_100025cc(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010330
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003884
 */

void recovered_10003884(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100038a4((undefined8 *)(param_1 + -0x30));
}


#undef DAT_10010338
#define DAT_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8314U)))
#define local_30 (*(undefined2 *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 24))
#define cStack_2e (*(char *)(frame + 18))
#define uStack_2d (*(undefined1 *)(frame + 19))
#define uStack_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038a4
 */

void recovered_100038a4(undefined8 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10010338;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10003904;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10003e8c((long)puVar2,(undefined8 *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[3] = puVar2;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_100039b0(param_1);
LAB_10003904:
                    /* WARNING: Subroutine does not return */
  recovered_100036c0();
}

#undef DAT_10010338
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x830cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003908
 */

void recovered_10003908(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010330;
  if (DAT_10010330 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100036c0();
  }
  *(undefined1 *)(DAT_10010330 + 5) = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100038a4(puVar1);
}

#undef DAT_10010330

#undef DAT_10010338
#define DAT_10010338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8314U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003938
 */

void recovered_10003938(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010338;
  DAT_10010338 = param_1;
  return;
}

#undef DAT_10010338

#undef DAT_10010338
#define DAT_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8314U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000394c
 */

void recovered_1000394c(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010338;
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

#undef DAT_10010338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003978
 */

void recovered_10003978(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100038a4(in_x0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003984
 */

void recovered_10003984(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100036c0();
}


#undef DAT_10010338
#define DAT_10010338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8314U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define uStack_48 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003990
 */

undefined8 recovered_10003990(undefined8 *param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  if (DAT_10010338 != (long *)0x0) {
    DAT_10010338 = (long *)*DAT_10010338;
  }
  puVar2 = (undefined8 *)recovered_100039b0(param_1);
  plVar3 = DAT_10010338;
  while( true ) {
    DAT_10010338 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100036c0();
    }
    if (plVar3 == (long *)puVar2[3]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10003e8c((long)plVar3,(undefined8 *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10003a44;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x24);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10003a44:
  recovered_1000362c((long)plVar3);
  recovered_10003990(extraout_x0);
  return 0;
}

#undef DAT_10010338
#undef uStack_50
#undef uStack_48

#undef DAT_10010338
#define DAT_10010338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8314U)))
#define local_40 (*(undefined8 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

undefined8 recovered_100039b0(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_10010338;
  while( true ) {
    DAT_10010338 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100036c0();
    }
    if (plVar2 == (long *)param_1[3]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10003e8c((long)plVar2,(undefined8 *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10003a44;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x24);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10003a44:
  recovered_1000362c((long)plVar2);
  recovered_10003990(extraout_x0);
  return 0;
}

#undef DAT_10010338
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a4c
 */

undefined8 recovered_10003a4c(undefined8 *in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003990(in_x0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a58
 */

undefined8 recovered_10003a58(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a60
 */

void recovered_10003a60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100036c0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a6c
 */

long recovered_10003a6c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10003aac(*(undefined8 **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


#undef DAT_100100d8
#define DAT_100100d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aac
 */

bool recovered_10003aac(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (undefined8 *)0x0) {
LAB_10003b30:
    bVar3 = true;
  }
  else {
    while ((puVar4 = param_1, bVar3 = puVar4 != (undefined8 *)0x0, puVar4 != param_2 &&
           (puVar4 != (undefined8 *)0x0))) {
      pcVar5 = (char *)puVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10003b30;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10003b30;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (undefined8 *)0x0;
      if ((undefined *)*puVar4 == &DAT_100100d8) {
        param_1 = (undefined8 *)puVar4[2];
      }
    }
  }
  return bVar3;
}

#undef DAT_100100d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b38
 */

void recovered_10003b38(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b3c
 */

undefined8 recovered_10003b3c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b44
 */

bool recovered_10003b44(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b54
 */

bool recovered_10003b54(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b8c
 */

bool recovered_10003b8c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba8
 */

bool recovered_10003ba8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bc0
 */

bool recovered_10003bc0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bd8
 */

bool recovered_10003bd8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf0
 */

bool recovered_10003bf0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10003c08(double value) {
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
float recovered_10003cc8(float value){return (float)recovered_10003c08((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10003ce4(long double value){return (long double)recovered_10003c08((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10003ce8(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf8
 */

uint128 recovered_10003cf8(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_100015a0(param_1);
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
 * Address: 0x10003d44
 */

longlong recovered_10003d44(char *text,char **end,int base)

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

  for (pbVar6 = (byte *)text; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003d84;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003d84:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar5 = bVar3 == 0x2d;
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = false;
  }
  if (base == 0x10) {
    if (*pbVar6 != 0x30) {
      base = 0x10;
      goto LAB_10003e08;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (base != 0) goto LAB_10003e08;
    if (*pbVar6 != 0x30) {
      base = 10;
      goto LAB_10003e08;
    }
    bVar3 = pbVar6[1];
    uVar8 = 8;
  }
  pbVar2 = pbVar6 + 2;
  base = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    base = uVar8;
  }
  pbVar6 = pbVar2;
LAB_10003e08:
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
          (lVar1 = lVar10 * (ulong)(uint)base + (ulong)uVar4, (int)uVar4 < base));
  if (end != (char **)0x0) {
    if (lVar7 != 0) {
      text = (char *)pbVar6;
    }
    *end = text;
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
 * Address: 0x10003e88
 */

longlong recovered_10003e88(char *text,char **end,int base)

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

  for (pbVar6 = (byte *)text; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10003d84;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10003d84:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar5 = bVar3 == 0x2d;
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = false;
  }
  if (base == 0x10) {
    if (*pbVar6 != 0x30) {
      base = 0x10;
      goto LAB_10003e08;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (base != 0) goto LAB_10003e08;
    if (*pbVar6 != 0x30) {
      base = 10;
      goto LAB_10003e08;
    }
    bVar3 = pbVar6[1];
    uVar8 = 8;
  }
  pbVar2 = pbVar6 + 2;
  base = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    base = uVar8;
  }
  pbVar6 = pbVar2;
LAB_10003e08:
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
          (lVar1 = lVar10 * (ulong)(uint)base + (ulong)uVar4, (int)uVar4 < base));
  if (end != (char **)0x0) {
    if (lVar7 != 0) {
      text = (char *)pbVar6;
    }
    *end = text;
  }
  lVar1 = -lVar10;
  if (!bVar5) {
    lVar1 = lVar10;
  }
  return lVar1;
}

#undef EXT_00000000

#undef DAT_100080c0
#define DAT_100080c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#define local_68 (*(byte * *)(frame + 24))
#define pbStack_70 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e8c
 */

undefined8 recovered_10003e8c(long param_1,undefined8 *param_2,undefined2 *param_3)

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
      recovered_10004064((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004158(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004158(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004158(&local_68);
        uVar5 = recovered_10004158(&local_68);
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
            uVar5 = recovered_100041bc(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_100041bc(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_100080c0 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004064((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10003aac(param_2,puVar6);
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

#undef DAT_100080c0
#undef local_68
#undef pbStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004064
 */

ulong * recovered_10004064(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10004190(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_1000411c;
  case 1:
    puVar1 = (ulong *)recovered_10004158(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004190(pbVar5,2);
    goto LAB_10004118;
  case 3:
    puVar1 = (ulong *)recovered_10004190(pbVar5,4);
    goto LAB_100040e0;
  default:
    goto switchD_100040ac_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_100041bc(param_2);
    break;
  case 10:
    uVar3 = recovered_10004190(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004118:
    pbVar4 = pbVar5 + 2;
LAB_1000411c:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004190(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_100040e0:
    pbVar4 = pbVar5 + 4;
    goto LAB_1000411c;
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
switchD_100040ac_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004158
 */

ulong recovered_10004158(undefined8 *param_1)

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
 * Address: 0x10004190
 */

ulong recovered_10004190(byte *param_1,long param_2)

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
 * Address: 0x100041bc
 */

ulong recovered_100041bc(undefined8 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004234
 */

void recovered_10004234(undefined1 *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  recovered_10005e2c((long *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004288
 */

void recovered_10004288(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0;
  recovered_10006054((undefined8 *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c4
 */

void recovered_100042c4(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e4
 */

void recovered_100042e4(undefined1 *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 2;
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(ulong *)(param_1 + 0x28) = param_2;
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000430c
 */

void recovered_1000430c(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004328
 */

void recovered_10004328(undefined1 *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  recovered_10005e2c((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004350
 */

void recovered_10004350(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  recovered_10006054((undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004378
 */

void recovered_10004378(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  return;
}


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#define lStack_38 (*(long *)(frame + 24))
#define lStack_30 (*(long *)(frame + 32))
#define lStack_28 (*(long *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004398
 */

long * recovered_10004398(long *param_1,long *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *extraout_x0;

  if ((char)*param_2 == '\x02') {
    recovered_100060e0(&lStack_38,param_2[4]);
    *param_1 = lStack_38;
    param_1[2] = lStack_28;
    param_1[1] = lStack_30;
    lStack_38 = 0;
    lStack_30 = 0;
    lStack_28 = 0;
    recovered_10003740((void *)0x0);
    return extraout_x0;
  }
  if ((char)*param_2 != '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10008b4b;
  if ((undefined1 *)param_2[1] != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_2[1];
  }
  recovered_10005e70(param_1,(long)puVar1,param_2[2]);
  return param_1;
}

#undef DAT_10008b4b
#undef lStack_38
#undef lStack_30
#undef lStack_28

#define uStack_28 (*(undefined8 *)(frame + 40))
#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043cc
 */

void recovered_100043cc(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};


  recovered_100060e0(&local_38,param_2);
  *param_1 = local_38;
  param_1[2] = uStack_28;
  param_1[1] = local_30;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  recovered_10003740((void *)0x0);
  return;
}

#undef uStack_28
#undef local_38
#undef local_30

#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x805cU)))
#define local_38 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004418
 */

longlong recovered_10004418(void *variable)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;

  if (*(char *)variable == '\x01') {
    if (*(long *)((long)variable + 0x10) != 0) {
      local_38 = (char *)0x0;
      DAT_10010080 = 0;
      pcVar1 = &DAT_10008b4b;
      if (*(char **)((long)variable + 8) != (char *)0x0) {
        pcVar1 = *(char **)((long)variable + 8);
      }
      lVar3 = recovered_10003e88(pcVar1,&local_38,10);
      pcVar1 = &DAT_10008b4b;
      if (*(char **)((long)variable + 8) != (char *)0x0) {
        pcVar1 = *(char **)((long)variable + 8);
      }
      if ((((local_38 != (char *)0x0) && (local_38 != pcVar1)) && (*local_38 == '\0')) &&
         (DAT_10010080 != 0x22)) {
        return lVar3;
      }
      if (((2 < *(ulong *)((long)variable + 0x10)) && (*pcVar1 == '0')) &&
         ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
        local_38 = (char *)0x0;
        DAT_10010080 = 0;
        lVar3 = recovered_10003e88(pcVar1 + 2,&local_38,0x10);
        puVar2 = &DAT_10008b4b;
        if (*(undefined1 **)((long)variable + 8) != (undefined1 *)0x0) {
          puVar2 = *(undefined1 **)((long)variable + 8);
        }
        if (((local_38 != (char *)0x0) && (local_38 != puVar2 + 2)) &&
           ((*local_38 == '\0' && (DAT_10010080 != 0x22)))) {
          return lVar3;
        }
      }
    }
  }
  else if (*(char *)variable == '\x02') {
    return *(longlong *)((long)variable + 0x20);
  }
  return 0;
}

#undef DAT_10008b4b
#undef DAT_10010080
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004540
 */

undefined8 * recovered_10004540(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
  recovered_100045c0((long)param_1);
  recovered_10004fd0(param_1);
  return param_1;
}


#undef PTR_recovered_100068a4_1000c020
#define PTR_recovered_100068a4_1000c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3ffcU)))
#undef PTR_recovered_10006a68_1000c078
#define PTR_recovered_10006a68_1000c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4054U)))
#undef PTR_recovered_10006e14_1000c0c0
#define PTR_recovered_10006e14_1000c0c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x409cU)))
#undef PTR_recovered_10006e70_1000c108
#define PTR_recovered_10006e70_1000c108 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x40e4U)))
#undef PTR_recovered_10006ed4_1000c150
#define PTR_recovered_10006ed4_1000c150 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x412cU)))
#undef PTR_recovered_10006f44_1000c198
#define PTR_recovered_10006f44_1000c198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4174U)))
#undef PTR_recovered_10006fcc_1000c1e0
#define PTR_recovered_10006fcc_1000c1e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x41bcU)))
#undef PTR_recovered_100070d0_1000c228
#define PTR_recovered_100070d0_1000c228 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4204U)))
#undef PTR_recovered_100071dc_1000c270
#define PTR_recovered_100071dc_1000c270 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x424cU)))
#undef PTR_recovered_10007448_1000c2b8
#define PTR_recovered_10007448_1000c2b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4294U)))
#undef PTR_recovered_100074a0_1000c300
#define PTR_recovered_100074a0_1000c300 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
#undef PTR_recovered_100074e0_1000c348
#define PTR_recovered_100074e0_1000c348 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4324U)))
#undef PTR_recovered_1000770c_1000c390
#define PTR_recovered_1000770c_1000c390 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x436cU)))
#undef PTR_recovered_100077b8_1000c3d8
#define PTR_recovered_100077b8_1000c3d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x43b4U)))
#undef PTR_recovered_10007814_1000c420
#define PTR_recovered_10007814_1000c420 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x43fcU)))
#undef PTR_recovered_10007874_1000c468
#define PTR_recovered_10007874_1000c468 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4444U)))
#undef PTR_recovered_100078d0_1000c4b0
#define PTR_recovered_100078d0_1000c4b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x448cU)))
#undef PTR_recovered_10007930_1000c4f8
#define PTR_recovered_10007930_1000c4f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x44d4U)))
#undef PTR_recovered_1000798c_1000c540
#define PTR_recovered_1000798c_1000c540 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x451cU)))
#undef PTR_recovered_100079ec_1000c588
#define PTR_recovered_100079ec_1000c588 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4564U)))
#undef PTR_recovered_10007a80_1000c5d0
#define PTR_recovered_10007a80_1000c5d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x45acU)))
#undef PTR_recovered_10007b08_1000c618
#define PTR_recovered_10007b08_1000c618 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x45f4U)))
#define plStack_158 (*(long * *)(frame + 440))
#define pvStack_150 (*(void * *)(frame + 448))
#define uStack_148 (*(undefined8 *)(frame + 456))
#define plStack_138 (*(long * *)(frame + 472))
#define uStack_129 (*(undefined1 *)(frame + 487))
#define pvStack_128 (*(void * *)(frame + 488))
#define uStack_120 (*(undefined8 *)(frame + 496))
#define plStack_110 (*(long * *)(frame + 512))
#define pvStack_108 (*(void * *)(frame + 520))
#define uStack_100 (*(undefined8 *)(frame + 528))
#define plStack_f0 (*(long * *)(frame + 544))
#define pvStack_e8 (*(void * *)(frame + 552))
#define uStack_e0 (*(undefined8 *)(frame + 560))
#define plStack_d0 (*(long * *)(frame + 576))
#define pvStack_c8 (*(void * *)(frame + 584))
#define uStack_c0 (*(undefined8 *)(frame + 592))
#define plStack_b0 (*(long * *)(frame + 608))
#define pvStack_a8 (*(void * *)(frame + 616))
#define uStack_a0 (*(undefined8 *)(frame + 624))
#define plStack_90 (*(long * *)(frame + 640))
#define pvStack_88 (*(void * *)(frame + 648))
#define uStack_80 (*(undefined8 *)(frame + 656))
#define plStack_70 (*(long * *)(frame + 672))
#define pvStack_68 (*(void * *)(frame + 680))
#define uStack_60 (*(undefined8 *)(frame + 688))
#define plStack_50 (*(long * *)(frame + 704))
#define pvStack_48 (*(void * *)(frame + 712))
#define uStack_40 (*(undefined8 *)(frame + 720))
#define local_12b (*(undefined2 *)(frame + 485))
#define plStack_2f8 (*(long * *)(frame + 24))
#define pvStack_2f0 (*(void * *)(frame + 32))
#define uStack_2e8 (*(undefined8 *)(frame + 40))
#define plStack_2d8 (*(long * *)(frame + 56))
#define pvStack_2d0 (*(void * *)(frame + 64))
#define uStack_2c8 (*(undefined8 *)(frame + 72))
#define plStack_2b8 (*(long * *)(frame + 88))
#define pvStack_2b0 (*(void * *)(frame + 96))
#define uStack_2a8 (*(undefined8 *)(frame + 104))
#define plStack_298 (*(long * *)(frame + 120))
#define pvStack_290 (*(void * *)(frame + 128))
#define uStack_288 (*(undefined8 *)(frame + 136))
#define plStack_278 (*(long * *)(frame + 152))
#define pvStack_270 (*(void * *)(frame + 160))
#define uStack_268 (*(undefined8 *)(frame + 168))
#define plStack_258 (*(long * *)(frame + 184))
#define pvStack_250 (*(void * *)(frame + 192))
#define uStack_248 (*(undefined8 *)(frame + 200))
#define plStack_238 (*(long * *)(frame + 216))
#define pvStack_230 (*(void * *)(frame + 224))
#define uStack_228 (*(undefined8 *)(frame + 232))
#define plStack_218 (*(long * *)(frame + 248))
#define pvStack_210 (*(void * *)(frame + 256))
#define uStack_208 (*(undefined8 *)(frame + 264))
#define plStack_1f8 (*(long * *)(frame + 280))
#define pvStack_1f0 (*(void * *)(frame + 288))
#define uStack_1e8 (*(undefined8 *)(frame + 296))
#define plStack_1d8 (*(long * *)(frame + 312))
#define pvStack_1d0 (*(void * *)(frame + 320))
#define uStack_1c8 (*(undefined8 *)(frame + 328))
#define plStack_1b8 (*(long * *)(frame + 344))
#define pvStack_1b0 (*(void * *)(frame + 352))
#define uStack_1a8 (*(undefined8 *)(frame + 360))
#define plStack_198 (*(long * *)(frame + 376))
#define pvStack_190 (*(void * *)(frame + 384))
#define uStack_188 (*(undefined8 *)(frame + 392))
#define plStack_178 (*(long * *)(frame + 408))
#define pvStack_170 (*(void * *)(frame + 416))
#define uStack_168 (*(undefined8 *)(frame + 424))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

void recovered_100045c0(long param_1)

{
  unsigned char frame[816] __attribute__((aligned(16))) = {0};


  recovered_10005aa4((long *)(param_1 + 0x20));
  local_12b = (ushort)PF_PART1(local_12b, 1) << 8;
  recovered_100067e4((long *)&pvStack_48,(undefined1 *)&local_12b,1);
  plStack_50 = recovered_1000370c(0x10);
  *plStack_50 = (long)&PTR_recovered_100068a4_1000c020;
  recovered_10005920(param_1,1,&pvStack_48,(long *)&plStack_50);
  if (plStack_50 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_50 + 8))((void *)(plStack_50));
  }
  uStack_40 = 0;
  recovered_10003740(pvStack_48);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_100067e4((long *)&pvStack_68,(undefined1 *)&local_12b,1);
  plStack_70 = recovered_1000370c(0x10);
  *plStack_70 = (long)&PTR_recovered_10006a68_1000c078;
  recovered_10005920(param_1,2,&pvStack_68,(long *)&plStack_70);
  if (plStack_70 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_70 + 8))((void *)(plStack_70));
  }
  uStack_60 = 0;
  recovered_10003740(pvStack_68);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_100067e4((long *)&pvStack_88,(undefined1 *)&local_12b,1);
  plStack_90 = recovered_1000370c(0x10);
  *plStack_90 = (long)&PTR_recovered_10006e14_1000c0c0;
  recovered_10005920(param_1,3,&pvStack_88,(long *)&plStack_90);
  if (plStack_90 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_90 + 8))((void *)(plStack_90));
  }
  uStack_80 = 0;
  recovered_10003740(pvStack_88);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_100067e4((long *)&pvStack_a8,(undefined1 *)&local_12b,1);
  plStack_b0 = recovered_1000370c(0x10);
  *plStack_b0 = (long)&PTR_recovered_10006e70_1000c108;
  recovered_10005920(param_1,4,&pvStack_a8,(long *)&plStack_b0);
  if (plStack_b0 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_b0 + 8))((void *)(plStack_b0));
  }
  uStack_a0 = 0;
  recovered_10003740(pvStack_a8);
  local_12b = local_12b & 0xff00;
  recovered_100067e4((long *)&pvStack_c8,(undefined1 *)&local_12b,1);
  plStack_d0 = recovered_1000370c(0x10);
  *plStack_d0 = (long)&PTR_recovered_10006ed4_1000c150;
  recovered_10005920(param_1,5,&pvStack_c8,(long *)&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_d0 + 8))((void *)(plStack_d0));
  }
  uStack_c0 = 0;
  recovered_10003740(pvStack_c8);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_100067e4((long *)&pvStack_e8,(undefined1 *)&local_12b,1);
  plStack_f0 = recovered_1000370c(0x10);
  *plStack_f0 = (long)&PTR_recovered_10006f44_1000c198;
  recovered_10005920(param_1,6,&pvStack_e8,(long *)&plStack_f0);
  if (plStack_f0 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_f0 + 8))((void *)(plStack_f0));
  }
  uStack_e0 = 0;
  recovered_10003740(pvStack_e8);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_100067e4((long *)&pvStack_108,(undefined1 *)&local_12b,1);
  plStack_110 = recovered_1000370c(0x10);
  *plStack_110 = (long)&PTR_recovered_10006fcc_1000c1e0;
  recovered_10005920(param_1,7,&pvStack_108,(long *)&plStack_110);
  if (plStack_110 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_110 + 8))((void *)(plStack_110));
  }
  uStack_100 = 0;
  recovered_10003740(pvStack_108);
  local_12b = 0x101;
  uStack_129 = 1;
  recovered_100067e4((long *)&pvStack_128,(undefined1 *)&local_12b,3);
  plStack_138 = recovered_1000370c(0x10);
  *plStack_138 = (long)&PTR_recovered_100070d0_1000c228;
  recovered_10005920(param_1,8,&pvStack_128,(long *)&plStack_138);
  if (plStack_138 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_138 + 8))((void *)(plStack_138));
  }
  uStack_120 = 0;
  recovered_10003740(pvStack_128);
  local_12b = 0x101;
  uStack_129 = 0;
  recovered_100067e4((long *)&pvStack_150,(undefined1 *)&local_12b,3);
  plStack_158 = recovered_1000370c(0x10);
  *plStack_158 = (long)&PTR_recovered_100071dc_1000c270;
  recovered_10005920(param_1,9,&pvStack_150,(long *)&plStack_158);
  if (plStack_158 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_158 + 8))((void *)(plStack_158));
  }
  uStack_148 = 0;
  recovered_10003740(pvStack_150);
  local_12b = 0x101;
  recovered_100067e4((long *)&pvStack_170,(undefined1 *)&local_12b,2);
  plStack_178 = recovered_1000370c(0x10);
  *plStack_178 = (long)&PTR_recovered_10007448_1000c2b8;
  recovered_10005920(param_1,10,&pvStack_170,(long *)&plStack_178);
  if (plStack_178 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_178 + 8))((void *)(plStack_178));
  }
  uStack_168 = 0;
  recovered_10003740(pvStack_170);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_100067e4((long *)&pvStack_190,(undefined1 *)&local_12b,1);
  plStack_198 = recovered_1000370c(0x10);
  *plStack_198 = (long)&PTR_recovered_100074a0_1000c300;
  recovered_10005920(param_1,0xb,&pvStack_190,(long *)&plStack_198);
  if (plStack_198 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_198 + 8))((void *)(plStack_198));
  }
  uStack_188 = 0;
  recovered_10003740(pvStack_190);
  local_12b = 0x202;
  recovered_100067e4((long *)&pvStack_1b0,(undefined1 *)&local_12b,2);
  plStack_1b8 = recovered_1000370c(0x10);
  *plStack_1b8 = (long)&PTR_recovered_100074e0_1000c348;
  recovered_10005920(param_1,0xc,&pvStack_1b0,(long *)&plStack_1b8);
  if (plStack_1b8 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_1b8 + 8))((void *)(plStack_1b8));
  }
  uStack_1a8 = 0;
  recovered_10003740(pvStack_1b0);
  local_12b = 2;
  recovered_100067e4((long *)&pvStack_1d0,(undefined1 *)&local_12b,2);
  plStack_1d8 = recovered_1000370c(0x10);
  *plStack_1d8 = (long)&PTR_recovered_1000770c_1000c390;
  recovered_10005920(param_1,0xd,&pvStack_1d0,(long *)&plStack_1d8);
  if (plStack_1d8 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_1d8 + 8))((void *)(plStack_1d8));
  }
  uStack_1c8 = 0;
  recovered_10003740(pvStack_1d0);
  local_12b = 0x102;
  recovered_100067e4((long *)&pvStack_1f0,(undefined1 *)&local_12b,2);
  plStack_1f8 = recovered_1000370c(0x10);
  *plStack_1f8 = (long)&PTR_recovered_100077b8_1000c3d8;
  recovered_10005920(param_1,0xe,&pvStack_1f0,(long *)&plStack_1f8);
  if (plStack_1f8 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_1f8 + 8))((void *)(plStack_1f8));
  }
  uStack_1e8 = 0;
  recovered_10003740(pvStack_1f0);
  local_12b = 0x202;
  recovered_100067e4((long *)&pvStack_210,(undefined1 *)&local_12b,2);
  plStack_218 = recovered_1000370c(0x10);
  *plStack_218 = (long)&PTR_recovered_10007814_1000c420;
  recovered_10005920(param_1,0xf,&pvStack_210,(long *)&plStack_218);
  if (plStack_218 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_218 + 8))((void *)(plStack_218));
  }
  uStack_208 = 0;
  recovered_10003740(pvStack_210);
  local_12b = 0x102;
  recovered_100067e4((long *)&pvStack_230,(undefined1 *)&local_12b,2);
  plStack_238 = recovered_1000370c(0x10);
  *plStack_238 = (long)&PTR_recovered_10007874_1000c468;
  recovered_10005920(param_1,0x10,&pvStack_230,(long *)&plStack_238);
  if (plStack_238 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_238 + 8))((void *)(plStack_238));
  }
  uStack_228 = 0;
  recovered_10003740(pvStack_230);
  local_12b = 0x202;
  recovered_100067e4((long *)&pvStack_250,(undefined1 *)&local_12b,2);
  plStack_258 = recovered_1000370c(0x10);
  *plStack_258 = (long)&PTR_recovered_100078d0_1000c4b0;
  recovered_10005920(param_1,0x11,&pvStack_250,(long *)&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_258 + 8))((void *)(plStack_258));
  }
  uStack_248 = 0;
  recovered_10003740(pvStack_250);
  local_12b = 0x102;
  recovered_100067e4((long *)&pvStack_270,(undefined1 *)&local_12b,2);
  plStack_278 = recovered_1000370c(0x10);
  *plStack_278 = (long)&PTR_recovered_10007930_1000c4f8;
  recovered_10005920(param_1,0x12,&pvStack_270,(long *)&plStack_278);
  if (plStack_278 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_278 + 8))((void *)(plStack_278));
  }
  uStack_268 = 0;
  recovered_10003740(pvStack_270);
  local_12b = 0x202;
  recovered_100067e4((long *)&pvStack_290,(undefined1 *)&local_12b,2);
  plStack_298 = recovered_1000370c(0x10);
  *plStack_298 = (long)&PTR_recovered_1000798c_1000c540;
  recovered_10005920(param_1,0x13,&pvStack_290,(long *)&plStack_298);
  if (plStack_298 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_298 + 8))((void *)(plStack_298));
  }
  uStack_288 = 0;
  recovered_10003740(pvStack_290);
  local_12b = 0x102;
  recovered_100067e4((long *)&pvStack_2b0,(undefined1 *)&local_12b,2);
  plStack_2b8 = recovered_1000370c(0x10);
  *plStack_2b8 = (long)&PTR_recovered_100079ec_1000c588;
  recovered_10005920(param_1,0x14,&pvStack_2b0,(long *)&plStack_2b8);
  if (plStack_2b8 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_2b8 + 8))((void *)(plStack_2b8));
  }
  uStack_2a8 = 0;
  recovered_10003740(pvStack_2b0);
  local_12b = 0x202;
  recovered_100067e4((long *)&pvStack_2d0,(undefined1 *)&local_12b,2);
  plStack_2d8 = recovered_1000370c(0x10);
  *plStack_2d8 = (long)&PTR_recovered_10007a80_1000c5d0;
  recovered_10005920(param_1,0x15,&pvStack_2d0,(long *)&plStack_2d8);
  if (plStack_2d8 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_2d8 + 8))((void *)(plStack_2d8));
  }
  uStack_2c8 = 0;
  recovered_10003740(pvStack_2d0);
  local_12b = 0x202;
  recovered_100067e4((long *)&pvStack_2f0,(undefined1 *)&local_12b,2);
  plStack_2f8 = recovered_1000370c(0x10);
  *plStack_2f8 = (long)&PTR_recovered_10007b08_1000c618;
  recovered_10005920(param_1,0x16,&pvStack_2f0,(long *)&plStack_2f8);
  if (plStack_2f8 != (long *)0x0) {
    (*(void (**)(void *))(*plStack_2f8 + 8))((void *)(plStack_2f8));
  }
  uStack_2e8 = 0;
  recovered_10003740(pvStack_2f0);
  return;
}

#undef PTR_recovered_100068a4_1000c020
#undef PTR_recovered_10006a68_1000c078
#undef PTR_recovered_10006e14_1000c0c0
#undef PTR_recovered_10006e70_1000c108
#undef PTR_recovered_10006ed4_1000c150
#undef PTR_recovered_10006f44_1000c198
#undef PTR_recovered_10006fcc_1000c1e0
#undef PTR_recovered_100070d0_1000c228
#undef PTR_recovered_100071dc_1000c270
#undef PTR_recovered_10007448_1000c2b8
#undef PTR_recovered_100074a0_1000c300
#undef PTR_recovered_100074e0_1000c348
#undef PTR_recovered_1000770c_1000c390
#undef PTR_recovered_100077b8_1000c3d8
#undef PTR_recovered_10007814_1000c420
#undef PTR_recovered_10007874_1000c468
#undef PTR_recovered_100078d0_1000c4b0
#undef PTR_recovered_10007930_1000c4f8
#undef PTR_recovered_1000798c_1000c540
#undef PTR_recovered_100079ec_1000c588
#undef PTR_recovered_10007a80_1000c5d0
#undef PTR_recovered_10007b08_1000c618
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
#undef local_12b
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
 * Address: 0x10004fd0
 */

void recovered_10004fd0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = recovered_10005018((int *)*param_1);
  *(bool *)(param_1 + 9) = !bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005004
 */

undefined8 * recovered_10005004(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
  recovered_100045c0((long)param_1);
  recovered_10004fd0(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005008
 */

void recovered_10005008(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = recovered_10005018((int *)*param_1);
  *(bool *)(param_1 + 9) = !bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005010
 */

undefined8 recovered_10005010(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005018
 */

bool recovered_10005018(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#define pvStack_110 (*(void * *)(frame + 32))
#define uStack_108 (*(undefined8 *)(frame + 40))
#define uStack_100 (*(undefined8 *)(frame + 48))
#define uStack_f8 (*(ulong *)(frame + 56))
#define uStack_f0 (*(ulong *)(frame + 64))
#define uStack_e8 (*(undefined1 *)(frame + 72))
#define local_118 (*(int (*)[2])(frame + 24))
#define local_e0 (*(void * *)(frame + 80))
#define local_d8 (*(undefined8 *)(frame + 88))
#define uStack_d0 (*(undefined8 *)(frame + 96))
#define local_c8 (*(undefined1 * *)(frame + 104))
#define local_c0 (*(ulong *)(frame + 112))
#define local_b0 (*(undefined8 *)(frame + 128))
#define uStack_b8 (*(undefined8 *)(frame + 120))
#define local_a8 (*(byte *)(frame + 136))
#define local_a0 (*(long *)(frame + 144))
#define local_98 (*(undefined8 *)(frame + 152))
#define local_84 (*(int *)(frame + 172))
#define local_7c (*(char *)(frame + 180))
#define uStack_90 (*(undefined8 *)(frame + 160))
#define local_7b (*(char (*)[11])(frame + 181))
#define iStack_80 (*(int *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005048
 */

byte recovered_10005048(undefined8 *param_1)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

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
  void *pvVar11;
  long *plVar12;
  byte bVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  char *pcVar20;

  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    piVar15 = (int *)*param_1;
    iVar14 = *(int *)(param_1 + 7);
    iVar16 = *(int *)((long)param_1 + 0x3c);
    bVar6 = recovered_100054b8(piVar15,iVar14,iVar16);
    if (bVar6) {
      uVar9 = recovered_10005518(piVar15,iVar14,iVar16);
      uVar8 = (uint)uVar9;
      if (uVar8 == 0) {
        recovered_100055bc((long)param_1);
        local_118[0] = *(int *)(param_1 + 7);
        local_c8 = (undefined1 *)CONCAT44(PF_PART4(local_c8, 4),*(undefined4 *)((long)param_1 + 0x3c));
      }
      else {
        if (uVar8 == 0xffffff) {
          *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
        }
        else {
          bVar13 = *(byte *)((long)param_1 + 0x49);
          uVar4 = *(uint *)((long)param_1 + 0x44);
          uVar3 = uVar4 - uVar8;
          if (uVar4 <= uVar8) {
            uVar3 = uVar8 - uVar4;
          }
          *(uint *)((long)param_1 + 0x44) = uVar8;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
          if (((bVar13 & 1) != 0) || (uVar8 != uVar4)) {
            local_84 = iVar16;
            iStack_80 = iVar14;
            recovered_10005574(&iStack_80,&local_84,(uint)*(byte *)(param_1 + 8));
            local_98 = 0;
            uStack_90 = 0;
            local_a0 = 0;
            if (((ulong)uVar3 < (ulong)param_1[5]) && (param_1[4] != 0)) {
              plVar12 = (long *)(param_1[4] + (ulong)uVar3 * 0x20);
              recovered_100055e0(&local_a0,plVar12[1]);
              pcVar20 = (char *)*plVar12;
              pcVar2 = pcVar20 + plVar12[1];
              iVar14 = local_84;
              iVar16 = iStack_80;
              do {
                if (pcVar20 == pcVar2) {
                  *(int *)(param_1 + 7) = iVar16;
                  *(int *)((long)param_1 + 0x3c) = iVar14;
                  plVar12 = (long *)plVar12[3];
                  if (plVar12 != (long *)0x0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12,param_1,&local_a0);
                    iVar14 = *(int *)((long)param_1 + 0x3c);
                    iVar16 = *(int *)(param_1 + 7);
                  }
                  goto LAB_10005408;
                }
                bVar6 = false;
                cVar5 = *pcVar20;
                piVar15 = (int *)*param_1;
                bVar13 = *(byte *)(param_1 + 8);
                local_c0 = 0;
                uStack_b8 = 0;
                local_c8 = (undefined1 *)0x0;
                local_b0 = 0x100000001;
                local_a8 = 0;
                local_e0 = (void *)CONCAT44(PF_PART4(local_e0, 4),iVar14);
                iVar19 = iVar14;
                local_118[0] = iVar16;
LAB_10005210:
                iVar17 = local_118[0];
                bVar7 = recovered_100054b8(piVar15,local_118[0],iVar19);
                if (bVar7) {
                  uVar9 = recovered_10005518(piVar15,iVar17,iVar19);
                  if ((int)uVar9 != 0xffffff) goto code_r0x1000523c;
                  recovered_10005574(local_118,(int *)&local_e0,(uint)bVar13);
                  local_b0 = CONCAT44((int)local_e0,local_118[0]);
                  iVar19 = (int)local_e0;
                  iVar17 = local_118[0];
                  if ((local_a8 & 1) != 0) goto LAB_100052dc;
                  if (cVar5 == '\x02') {
                    uVar10 = recovered_10005754(&local_c8);
                    uVar9 = uVar10 + 1;
                    if (uVar10 == 0xffffffffffffffff) {
                      uVar9 = 0xffffffffffffffff;
                    }
                    uStack_f8 = 0;
                    uStack_100 = 0;
                    uStack_108 = 0;
                    pvStack_110 = (void *)0x0;
                    local_118[0] = CONCAT31(PF_PART3(local_118[0], 1),2);
                    uStack_e8 = local_c0 == 0;
                    uStack_f0 = uVar9;
                    recovered_10006658(&local_a0,(undefined1 *)local_118);
                    recovered_10005788((long)param_1,uVar9);
LAB_100053dc:
                    pvVar11 = pvStack_110;
                  }
                  else {
                    if (cVar5 == '\x01') {
                      uStack_f8 = recovered_10005754(&local_c8);
                      if (0x7ffffffffffffffe < uStack_f8) {
                        uStack_f8 = 0x7fffffffffffffff;
                      }
                      uStack_100 = 0;
                      uStack_f0 = 0;
                      uStack_108 = 0;
                      pvStack_110 = (void *)0x0;
                      local_118[0] = CONCAT31(PF_PART3(local_118[0], 1),1);
                      uStack_e8 = local_c0 == 0;
                      recovered_10006658(&local_a0,(undefined1 *)local_118);
                      goto LAB_100053dc;
                    }
                    if (cVar5 != '\0') goto LAB_100053e4;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_e0 = (void *)0x0;
                    recovered_10005678((long *)&local_e0,local_c0);
                    puVar1 = local_c8;
                    for (uVar9 = local_c0; uVar9 != 0; uVar9 = uVar9 - 1) {
                      recovered_100056f0((long *)&local_e0,*puVar1);
                      puVar1 = puVar1 + 1;
                    }
                    recovered_10004288((undefined1 *)local_118,&local_e0);
                    uStack_e8 = local_c0 == 0;
                    recovered_10006658(&local_a0,(undefined1 *)local_118);
                    recovered_10003740(pvStack_110);
                    pvVar11 = local_e0;
                  }
                  recovered_10003740(pvVar11);
LAB_100053e4:
                  bVar6 = false;
                  iVar14 = PF_PART4(local_b0, 4);
                  iVar16 = (int)local_b0;
                  goto LAB_100053ec;
                }
                local_b0 = CONCAT44(iVar19,iVar17);
                local_a8 = 1;
LAB_100052dc:
                *(int *)(param_1 + 7) = iVar17;
                *(int *)((long)param_1 + 0x3c) = iVar19;
                bVar6 = true;
                *(undefined1 *)(param_1 + 9) = 1;
LAB_100053ec:
                local_c0 = 0;
                recovered_10003740(local_c8);
                pcVar20 = pcVar20 + 1;
              } while (!bVar6);
              bVar13 = 0;
            }
            else {
              *(int *)(param_1 + 7) = iStack_80;
              *(int *)((long)param_1 + 0x3c) = local_84;
              iVar14 = local_84;
              iVar16 = iStack_80;
LAB_10005408:
              bVar6 = recovered_100054b8((int *)*param_1,iVar16,iVar14);
              if (bVar6) {
                bVar13 = *(byte *)(param_1 + 9) ^ 1;
              }
              else {
                bVar13 = 0;
                *(undefined1 *)(param_1 + 9) = 1;
              }
            }
            recovered_10006584(&local_a0);
            goto LAB_10005150;
          }
        }
        local_c8 = (undefined1 *)CONCAT44(PF_PART4(local_c8, 4),iVar16);
        local_118[0] = iVar14;
      }
      recovered_10005574(local_118,(int *)&local_c8,(uint)*(byte *)(param_1 + 8));
      *(int *)(param_1 + 7) = local_118[0];
      *(int *)((long)param_1 + 0x3c) = (int)local_c8;
      bVar6 = recovered_100054b8((int *)*param_1,local_118[0],(int)local_c8);
      if (bVar6) {
        bVar13 = *(byte *)(param_1 + 9) ^ 1;
        goto LAB_10005150;
      }
    }
    bVar13 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    bVar13 = 0;
  }
LAB_10005150:
  return bVar13 & 1;
code_r0x1000523c:
  if (bVar6) {
    bVar6 = true;
  }
  else {
    local_7b[0] = (char)(uVar9 >> 0x10);
    local_7b[1] = (char)(uVar9 >> 8);
    local_7b[2] = (char)uVar9;
    for (lVar18 = 0; (bVar6 = lVar18 != 3, bVar6 && (local_7c = local_7b[lVar18], local_7c != -1));
        lVar18 = lVar18 + 1) {
      recovered_10006224((long *)&local_c8,&local_7c);
    }
  }
  recovered_10005574(local_118,(int *)&local_e0,(uint)bVar13);
  iVar19 = (int)local_e0;
  goto LAB_10005210;
}

#undef pvStack_110
#undef uStack_108
#undef uStack_100
#undef uStack_f8
#undef uStack_f0
#undef uStack_e8
#undef local_118
#undef local_e0
#undef local_d8
#undef uStack_d0
#undef local_c8
#undef local_c0
#undef local_b0
#undef uStack_b8
#undef local_a8
#undef local_a0
#undef local_98
#undef local_84
#undef local_7c
#undef uStack_90
#undef local_7b
#undef iStack_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b8
 */

bool recovered_100054b8(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;

  bVar1 = recovered_10005018(param_1);
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
 * Address: 0x10005518
 */

ulong recovered_10005518(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  ulong uVar3;

  bVar2 = recovered_100054b8(param_1,param_2,param_3);
  uVar3 = (ulong)bVar2;
  if (bVar2) {
    pbVar1 = (byte *)(*(long *)(param_1 + 2) + (long)(param_2 + *param_1 * (param_3 + -1) + -1) * 4)
    ;
    uVar3 = (ulong)((uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2]);
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005574
 */

void recovered_10005574(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    goto switchD_10005598_default;
  }
  *param_1 = *param_1 + iVar2;
switchD_10005598_default:
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055bc
 */

void recovered_100055bc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x40) < 4) {
    *(char *)(param_1 + 0x40) = (char)(0x30201 >> (ulong)((*(byte *)(param_1 + 0x40) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

void recovered_100055e0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006604(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10006618((undefined1 *)((long)pvVar1 + lVar2),(undefined1 *)(*param_1 + lVar2));
      recovered_10006010((undefined8 *)(*param_1 + lVar2 + 8));
      lVar2 = lVar2 + 0x38;
    }
    recovered_10003740((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005678
 */

void recovered_10005678(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006038(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)((long)pvVar1 + param_1[1]) = 0;
    recovered_10003740((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f0
 */

void recovered_100056f0(long *param_1,undefined1 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10005678(param_1,uVar1);
  }
  recovered_10005fa4(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005754
 */

ulong recovered_10005754(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10005788
 */

long recovered_10005788(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    recovered_10005b04((long *)(param_1 + 8),param_2);
  }
  return *(long *)(param_1 + 8) + param_2 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057d0
 */

void recovered_100057d0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_10005048(param_1);
  } while ((bVar1 & 1) != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057f4
 */

undefined1 recovered_100057f4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x48);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057fc
 */

long * recovered_100057fc(long param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    recovered_1000584c((long *)(param_1 + 0x20),param_2 + 1);
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + param_2 * 0x20);
  recovered_1000630c(plVar1,param_3);
  recovered_10006368(plVar1 + 3,param_3 + 3);
  return plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000584c
 */

void recovered_1000584c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    lVar2 = uVar3 * 0x20;
    for (; lVar2 = lVar2 + -0x20, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_100064a4((undefined8 *)(*param_1 + lVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_100066cc(param_1,param_2);
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
 * Address: 0x100058ec
 */

long * recovered_100058ec(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000630c(param_1,param_2);
  recovered_10006368(param_1 + 3,param_2 + 3);
  return param_1;
}


#define local_50 (*(long (*)[4])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005920
 */

void recovered_10005920(long param_1,ulong param_2,undefined8 *param_3,long *param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};


  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  recovered_10005994(local_50,param_3);
  recovered_100059e4(local_50 + 3,param_4);
  recovered_100057fc(param_1,param_2,local_50);
  recovered_100064a4(local_50);
  return;
}

#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005994
 */

undefined8 * recovered_10005994(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003740((void *)*param_1);
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
 * Address: 0x100059e4
 */

long * recovered_100059e4(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != param_2) {
    if ((long *)*param_1 != (long *)0x0) {
      (*(void (**)(void *))(*(long *)*param_1 + 8))((void *)((long *)*param_1));
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#define uStack_28 (*(undefined8 *)(frame + 24))
#define uStack_18 (*(undefined8 *)(frame + 40))
#define local_30 (*(undefined8 *)(frame + 16))
#define local_20 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a30
 */

void recovered_10005a30(long param_1,ulong param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};


  if (param_2 < *(ulong *)(param_1 + 0x28)) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    recovered_10005a70(*(long *)(param_1 + 0x20) + param_2 * 0x20,(long)&local_30);
    recovered_100064a4(&local_30);
  }
  return;
}

#undef uStack_28
#undef uStack_18
#undef local_30
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a70
 */

long recovered_10005a70(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005994((undefined8 *)param_1,(undefined8 *)param_2);
  recovered_100059e4((long *)(param_1 + 0x18),(long *)(param_2 + 0x18));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005aa4
 */

void recovered_10005aa4(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_100064a4((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005af4
 */

long recovered_10005af4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005afc
 */

long recovered_10005afc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b04
 */

void recovered_10005b04(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    lVar3 = uVar2 * 0x28 + -0x20;
    for (; param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_10006010((undefined8 *)(*param_1 + lVar3));
      lVar3 = lVar3 + -0x28;
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_10007c24(param_1,param_2);
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
 * Address: 0x10005bb0
 */

long recovered_10005bb0(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    return 0;
  }
  return *(long *)(param_1 + 8) + param_2 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd0
 */

void recovered_10005bd0(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007d08((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bf8
 */

void recovered_10005bf8(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007d7c((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


#define uStack_38 (*(undefined8 *)(frame + 40))
#define uStack_30 (*(undefined8 *)(frame + 48))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define auStack_48 (*(undefined1 (*)[8])(frame + 24))
#define pvStack_40 (*(void * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

undefined8 recovered_10005c20(long param_1,long *in_x1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  auStack_48[0] = 0;
  uStack_38 = 0;
  pvStack_40 = (void *)0x0;
  uStack_28 = 0;
  uStack_30 = 0;
  recovered_10004328(auStack_48,in_x1);
  recovered_10005bf8(param_1,auStack_48);
  recovered_10003740(pvStack_40);
  return extraout_x0;
}

#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef auStack_48
#undef pvStack_40

#define uStack_38 (*(undefined8 *)(frame + 40))
#define uStack_30 (*(undefined8 *)(frame + 48))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define auStack_48 (*(undefined1 (*)[8])(frame + 24))
#define pvStack_40 (*(void * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c5c
 */

undefined8 recovered_10005c5c(long param_1,undefined8 *in_x1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  auStack_48[0] = 0;
  uStack_38 = 0;
  pvStack_40 = (void *)0x0;
  uStack_28 = 0;
  uStack_30 = 0;
  recovered_10004350(auStack_48,in_x1);
  recovered_10005bf8(param_1,auStack_48);
  recovered_10003740(pvStack_40);
  return extraout_x0;
}

#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef auStack_48
#undef pvStack_40

#define local_40 (*(void * *)(frame + 32))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define local_30 (*(undefined8 *)(frame + 48))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define local_48 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c98
 */

undefined8 recovered_10005c98(long param_1,undefined8 param_2)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_48[0] = 2;
  local_30 = 0;
  uStack_28 = param_2;
  recovered_10005bf8(param_1,local_48);
  recovered_10003740(local_40);
  return extraout_x0;
}

#undef local_40
#undef uStack_38
#undef local_30
#undef uStack_28
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cd8
 */

void recovered_10005cd8(long param_1,ulong in_x1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_10005788(param_1,in_x1);
  recovered_10007d08((long *)(param_1 + 8),puVar1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d00
 */

void recovered_10005d00(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  recovered_10005d44(param_1,param_2);
  puVar1 = (undefined1 *)recovered_10005788(param_1,param_2);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d44
 */

void recovered_10005d44(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
      recovered_10006010((undefined8 *)(*plVar1 + lVar4));
      lVar4 = lVar4 + -0x28;
    }
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_10007c24(plVar1,param_2);
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


#define uStack_38 (*(undefined8 *)(frame + 40))
#define uStack_30 (*(undefined8 *)(frame + 48))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define auStack_48 (*(undefined1 (*)[8])(frame + 24))
#define pvStack_40 (*(void * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d68
 */

long recovered_10005d68(long param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong extraout_x0;
  long lVar1;
  ulong uVar2;

  uVar2 = *(ulong *)(param_1 + 0x50);
  if (uVar2 == 0) {
    auStack_48[0] = 0;
    uStack_38 = 0;
    pvStack_40 = (void *)0x0;
    uStack_28 = 0;
    uStack_30 = 0;
    recovered_10005bf8(param_1,auStack_48);
    lVar1 = recovered_10005788(param_1,extraout_x0);
    recovered_10003740(pvStack_40);
    return lVar1;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    recovered_10005b04((long *)(param_1 + 8),uVar2);
  }
  return *(long *)(param_1 + 8) + uVar2 * 0x28 + -0x28;
}

#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef auStack_48
#undef pvStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dc0
 */

long recovered_10005dc0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = *(ulong *)(param_1 + 0x50);
  if ((uVar1 == 0) || (*(ulong *)(param_1 + 0x10) < uVar1)) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de0
 */

long recovered_10005de0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de8
 */

long recovered_10005de8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005df0
 */

undefined8 recovered_10005df0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined8 *)(param_1 + 0x50);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005df8
 */

undefined4 recovered_10005df8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e00
 */

undefined4 recovered_10005e00(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x3c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e08
 */

undefined1 recovered_10005e08(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x40);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

void recovered_10005e10(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e18
 */

undefined4 recovered_10005e18(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x44);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e20
 */

void recovered_10005e20(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x44) = param_2 & 0xffffff;
  return;
}


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e2c
 */

long * recovered_10005e2c(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_10008b4b;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_10005e70(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_10008b4b

#define local_50 (*(void * *)(frame + 16))
#define local_48 (*(long *)(frame + 24))
#define local_38 (*(long *)(frame + 40))
#define lStack_40 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e70
 */

void recovered_10005e70(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10005f58(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10005fa4(param_1);
    }
    else {
      recovered_10005678(param_1,uVar1);
      for (uVar4 = 0; uVar1 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_10005fdc(&local_50,*param_1 + local_38,uVar1);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar6 = param_1[2];
    lVar5 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pvVar3;
    local_48 = lVar5;
    lStack_40 = lVar6;
    recovered_10003740(pvVar3);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f58
 */

undefined8 recovered_10005f58(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10005fa4
 */

void recovered_10005fa4(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (*param_1 == 0) {
    pvVar1 = recovered_10006038(0);
    *param_1 = (long)pvVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fdc
 */

undefined8 * recovered_10005fdc(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_10005e70(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006010
 */

undefined8 * recovered_10006010(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003740((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006038
 */

void * recovered_10006038(ulong capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = recovered_1000370c(capacity + 1);
  *puVar1 = 0;
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006054
 */

undefined8 * recovered_10006054(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_10003740((void *)*param_1);
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


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060a0
 */

undefined8 * recovered_100060a0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10008b4b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10005e70(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10008b4b

#define abStack_40 (*(byte (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060e0
 */

void recovered_100060e0(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_1000613c(abStack_40,abStack_40 + 0x20,param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10005fdc(param_1,(long)abStack_40,PF_PART8(auVar1, 0) - (long)abStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef abStack_40

#define abStack_42 (*(byte (*)[66])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000613c
 */

uint128 recovered_1000613c(byte *param_1,byte *param_2,ulong param_3,uint param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

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

  uVar6 = 0x16;
  if ((((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (uVar6 = 0x16, param_1 <= param_2))
     && (0xffffffdc < param_4 - 0x25)) {
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
      uVar6 = 0x22;
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
 * Address: 0x10006208
 */

void recovered_10006208(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10006224
 */

long recovered_10006224(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_1000628c(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000628c
 */

void recovered_1000628c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006300(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10003740((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006300
 */

void * recovered_10006300(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000cc0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


#define lStack_28 (*(long *)(frame + 40))
#define local_38 (*(void * *)(frame + 24))
#define local_30 (*(long *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000630c
 */

long * recovered_1000630c(long *param_1,long *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;

  if (param_1 != param_2) {
    recovered_100063c8((long *)&local_38,param_2);
    pvVar1 = (void *)*param_1;
    *param_1 = (long)local_38;
    lVar2 = param_1[2];
    param_1[2] = lStack_28;
    param_1[1] = local_30;
    local_30 = 0;
    local_38 = pvVar1;
    lStack_28 = lVar2;
    recovered_10003740(pvVar1);
  }
  return param_1;
}

#undef lStack_28
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006368
 */

long * recovered_10006368(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  if (param_1 != param_2) {
    if ((long *)*param_2 == (long *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (*(uintptr_t (**)(void *))(*(long *)*param_2 + 0x18))((void *)((long *)*param_2));
    }
    plVar2 = (long *)*param_1;
    *param_1 = lVar1;
    if (plVar2 != (long *)0x0) {
      (*(void (**)(void *))(*plVar2 + 8))((void *)(plVar2));
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c8
 */

long * recovered_100063c8(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10006424(param_1,param_2[1]);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  for (lVar3 = 0; lVar2 != lVar3; lVar3 = lVar3 + 1) {
    *(undefined1 *)(*param_1 + lVar3) = *(undefined1 *)(lVar1 + lVar3);
  }
  param_1[1] = lVar2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006424
 */

void recovered_10006424(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006498(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10003740((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006498
 */

void * recovered_10006498(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10000cc0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a4
 */

undefined8 * recovered_100064a4(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((long *)param_1[3] != (long *)0x0) {
    (*(void (**)(void *))(*(long *)param_1[3] + 8))((void *)((long *)param_1[3]));
  }
  param_1[1] = 0;
  recovered_10003740((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064d8
 */

long * recovered_100064d8(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006504(param_1);
  recovered_10003740((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006504
 */

void recovered_10006504(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10006010((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006558
 */

undefined8 * recovered_10006558(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005aa4(param_1);
  recovered_10003740((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006584
 */

long * recovered_10006584(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100065b0(param_1);
  recovered_10003740((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065b0
 */

void recovered_100065b0(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x30;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10006010((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006604
 */

void * recovered_10006604(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x38;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006618
 */

undefined1 * recovered_10006618(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  *param_1 = *param_2;
  recovered_10006208((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006658
 */

long recovered_10006658(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_100055e0(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10006618((undefined1 *)(*param_1 + lVar2 * 0x38),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x38;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066cc
 */

void recovered_100066cc(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006760(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10006770((undefined8 *)((long)pvVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_100064a4((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x20;
    }
    recovered_10003740((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006760
 */

void * recovered_10006760(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x20;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006770
 */

void recovered_10006770(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_1000679c(param_1,param_2);
  *(undefined8 *)((long)pvVar1 + 0x18) = param_2[3];
  param_2[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000679c
 */

void * recovered_1000679c(void *destination,void *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *(undefined8 *)destination = *(undefined8 *)source;
  uVar1 = *(undefined8 *)((long)source + 8);
  *(undefined8 *)((long)destination + 0x10) = *(undefined8 *)((long)source + 0x10);
  *(undefined8 *)((long)destination + 8) = uVar1;
  *(undefined8 *)((long)source + 8) = 0;
  *(undefined8 *)((long)source + 0x10) = 0;
  *(undefined8 *)source = 0;
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b8
 */

undefined8 * recovered_100067b8(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10003740((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e4
 */

long * recovered_100067e4(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10006424(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    recovered_10006840(param_1,param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006840
 */

long recovered_10006840(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10006424(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a4
 */

void recovered_100068a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a8
 */

void recovered_100068a8(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fe4U)))
#define pvStack_38 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068ac
 */

undefined * recovered_100068ac(undefined *param_1,long param_2,long *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *extraout_x0 = 0;
  long lVar7;
  ulong uVar8;

  puVar5 = PTR_DAT_1000c008;
  if (param_3[1] != 0) {
    lVar7 = *param_3;
    if (*(char *)(lVar7 + 0x30) != '\x01') {
      uVar3 = *(ulong *)(lVar7 + 0x10);
      puVar1 = &DAT_10008b4b;
      if (*(undefined1 **)(lVar7 + 8) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(lVar7 + 8);
      }
      uVar4 = *(uint *)(PTR_DAT_1000c008 + 0x1c);
      uVar8 = (ulong)uVar4;
      if (((int)uVar4 >= 1 && uVar3 <= uVar8) && ((int)uVar4 < 1 || uVar8 != uVar3)) {
        for (lVar7 = uVar8 - uVar3; lVar7 != 0; lVar7 = lVar7 + -1) {
          recovered_100069d0((long *)puVar5,puVar5[0x20]);
        }
      }
      *(undefined4 *)(puVar5 + 0x1c) = 0;
      puVar2 = (undefined8 *)puVar5;
      if (*(undefined8 **)(puVar5 + 8) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(puVar5 + 8);
      }
      if (((uVar3 != 0) && (puVar1 != (undefined1 *)0x0)) && ((uint *)*puVar2 != (uint *)0x0)) {
        recovered_10002f6c(puVar1,1,uVar3,(uint *)*puVar2);
      }
      return puVar5;
    }
    plVar6 = (long *)recovered_10005dc0(param_2);
    param_1 = (undefined *)0x0;
    if (plVar6 != (long *)0x0) {
      recovered_10004398((long *)&pvStack_38,plVar6);
      recovered_1000694c((long *)PTR_DAT_1000c008,&pvStack_38);
      recovered_10003740(pvStack_38);
      param_1 = extraout_x0;
    }
  }
  return param_1;
}

#undef DAT_10008b4b
#undef PTR_DAT_1000c008
#undef pvStack_38

#undef PTR_recovered_100068a4_1000c020
#define PTR_recovered_100068a4_1000c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3ffcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000692c
 */

void recovered_1000692c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100068a4_1000c020;
  return;
}

#undef PTR_recovered_100068a4_1000c020

#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000694c
 */

long * recovered_1000694c(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;

  uVar3 = param_2[1];
  puVar1 = &DAT_10008b4b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  uVar4 = *(uint *)((long)param_1 + 0x1c);
  uVar5 = (ulong)uVar4;
  if (((int)uVar4 >= 1 && uVar3 <= uVar5) && ((int)uVar4 < 1 || uVar5 != uVar3)) {
    for (lVar6 = uVar5 - uVar3; lVar6 != 0; lVar6 = lVar6 + -1) {
      recovered_100069d0(param_1,(char)param_1[4]);
    }
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  plVar2 = param_1;
  if ((long *)param_1[1] != (long *)0x0) {
    plVar2 = (long *)param_1[1];
  }
  if (((uVar3 != 0) && (puVar1 != (undefined1 *)0x0)) && ((uint *)*plVar2 != (uint *)0x0)) {
    recovered_10002f6c(puVar1,1,uVar3,(uint *)*plVar2);
  }
  return param_1;
}

#undef DAT_10008b4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006964
 */

long * recovered_10006964(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;

  uVar2 = *(uint *)((long)param_1 + 0x1c);
  uVar3 = (ulong)uVar2;
  if (((int)uVar2 >= 1 && param_3 <= uVar3) && ((int)uVar2 < 1 || uVar3 != param_3)) {
    for (lVar4 = uVar3 - param_3; lVar4 != 0; lVar4 = lVar4 + -1) {
      recovered_100069d0(param_1,(char)param_1[4]);
    }
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  plVar1 = param_1;
  if ((long *)param_1[1] != (long *)0x0) {
    plVar1 = (long *)param_1[1];
  }
  if (((param_3 != 0) && (param_2 != 0)) && ((uint *)*plVar1 != (uint *)0x0)) {
    recovered_10002f6c((void *)param_2,1,param_3,(uint *)*plVar1);
  }
  return param_1;
}


#define local_21 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069d0
 */

long * recovered_100069d0(long *param_1,undefined1 param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  long *plVar1;

  plVar1 = param_1;
  if ((long *)param_1[1] != (long *)0x0) {
    plVar1 = (long *)param_1[1];
  }
  if ((uint *)*plVar1 != (uint *)0x0) {
    local_21 = param_2;
    recovered_10002f6c(&local_21,1,1,(uint *)*plVar1);
  }
  return param_1;
}

#undef local_21

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a20
 */

long * recovered_10006a20(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;

  plVar1 = param_1;
  if ((long *)param_1[1] != (long *)0x0) {
    plVar1 = (long *)param_1[1];
  }
  if (((param_3 != 0) && (param_2 != 0)) && ((uint *)*plVar1 != (uint *)0x0)) {
    recovered_10002f6c((void *)param_2,1,param_3,(uint *)*plVar1);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a68
 */

void recovered_10006a68(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a6c
 */

void recovered_10006a6c(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fe4U)))
#undef str_10008b53
#define str_10008b53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2fU)))
#undef str_10008b64
#define str_10008b64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb40U)))
#define apvStack_88 (*(void * (*)[8])(frame + 24))
#define uStack_40 (*(ulong *)(frame + 96))
#define pvStack_48 (*(void * *)(frame + 88))
#define pvStack_38 (*(void * *)(frame + 104))
#define in_stack_ffffffffffffffd0 (*(ulong *)(frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

long * recovered_10006a70(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  void *variable;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;

  if (param_3[1] == 0) {
    return param_1;
  }
  if (*(char *)(*param_3 + 0x30) == '\x01') {
    variable = (void *)recovered_10005dc0(param_2);
    if (variable == (void *)0x0) {
      return (long *)0x0;
    }
    uVar6 = recovered_10004418(variable);
  }
  else {
    uVar6 = *(ulong *)(*param_3 + 0x20);
  }
  puVar4 = PTR_DAT_1000c008;
  if (*(int *)(PTR_DAT_1000c008 + 0x14) == 10) {
    recovered_100043cc(&pvStack_38,uVar6);
    lVar7 = recovered_10006b70(&pvStack_38);
    plVar8 = recovered_10006964((long *)puVar4,lVar7,in_stack_ffffffffffffffd0);
    recovered_10003740(pvStack_38);
    return plVar8;
  }
  uStack_40 = 0;
  pvStack_38 = (void *)0x0;
  pvStack_48 = (void *)0x0;
  iVar3 = *(int *)(PTR_DAT_1000c008 + 0x14);
  if (iVar3 == 10) {
    recovered_10006cb4(apvStack_88,uVar6);
    recovered_10006054(&pvStack_48,apvStack_88);
    recovered_10003740(apvStack_88[0]);
  }
  else {
    pcVar1 = str_10008b53;
    if (PTR_DAT_1000c008[0x18] == '\0') {
      pcVar1 = str_10008b64;
    }
    uVar2 = 7;
    if (iVar3 != 8) {
      uVar2 = 0xf;
    }
    lVar7 = 3;
    lVar5 = 0;
    if (iVar3 != 8) {
      lVar7 = 4;
    }
    do {
      lVar9 = lVar5;
      *(char *)((long)apvStack_88 + lVar9) = pcVar1[uVar6 & uVar2];
      uVar6 = uVar6 >> lVar7;
      lVar5 = lVar9 + 1;
    } while (uVar6 != 0);
    for (; lVar9 != -1; lVar9 = lVar9 + -1) {
      recovered_100056f0((long *)&pvStack_48,*(undefined1 *)((long)apvStack_88 + lVar9));
    }
  }
  lVar7 = recovered_10006b70(&pvStack_48);
  plVar8 = recovered_10006964((long *)puVar4,lVar7,uStack_40);
  recovered_10003740(pvStack_48);
  return plVar8;
}

#undef PTR_DAT_1000c008
#undef str_10008b53
#undef str_10008b64
#undef apvStack_88
#undef uStack_40
#undef pvStack_48
#undef pvStack_38
#undef in_stack_ffffffffffffffd0

#undef PTR_recovered_10006a68_1000c078
#define PTR_recovered_10006a68_1000c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4054U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac4
 */

void recovered_10006ac4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10006a68_1000c078;
  return;
}

#undef PTR_recovered_10006a68_1000c078

#undef str_10008b53
#define str_10008b53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2fU)))
#undef str_10008b64
#define str_10008b64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb40U)))
#define apvStack_88 (*(void * (*)[8])(frame + 24))
#define uStack_40 (*(ulong *)(frame + 96))
#define pvStack_48 (*(void * *)(frame + 88))
#define in_stack_ffffffffffffffd0 (*(ulong *)(frame + 112))
#define local_38 (*(void * *)(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ae4
 */

long * recovered_10006ae4(long param_1,ulong param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;

  if (*(int *)(param_1 + 0x14) == 10) {
    recovered_100043cc(&local_38,param_2);
    lVar5 = recovered_10006b70(&local_38);
    plVar6 = recovered_10006964((long *)param_1,lVar5,in_stack_ffffffffffffffd0);
    recovered_10003740(local_38);
    return plVar6;
  }
  uStack_40 = 0;
  local_38 = (void *)0x0;
  pvStack_48 = (void *)0x0;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 10) {
    recovered_10006cb4(apvStack_88,param_2);
    recovered_10006054(&pvStack_48,apvStack_88);
    recovered_10003740(apvStack_88[0]);
  }
  else {
    pcVar1 = str_10008b53;
    if (*(char *)(param_1 + 0x18) == '\0') {
      pcVar1 = str_10008b64;
    }
    uVar2 = 7;
    if (iVar3 != 8) {
      uVar2 = 0xf;
    }
    lVar5 = 3;
    lVar4 = 0;
    if (iVar3 != 8) {
      lVar5 = 4;
    }
    do {
      lVar7 = lVar4;
      *(char *)((long)apvStack_88 + lVar7) = pcVar1[param_2 & uVar2];
      param_2 = param_2 >> lVar5;
      lVar4 = lVar7 + 1;
    } while (param_2 != 0);
    for (; lVar7 != -1; lVar7 = lVar7 + -1) {
      recovered_100056f0((long *)&pvStack_48,*(undefined1 *)((long)apvStack_88 + lVar7));
    }
  }
  lVar5 = recovered_10006b70(&pvStack_48);
  plVar6 = recovered_10006964((long *)param_1,lVar5,uStack_40);
  recovered_10003740(pvStack_48);
  return plVar6;
}

#undef str_10008b53
#undef str_10008b64
#undef apvStack_88
#undef uStack_40
#undef pvStack_48
#undef in_stack_ffffffffffffffd0
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

undefined8 recovered_10006b70(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005fa4(param_1);
  return *param_1;
}


#undef str_10008b53
#define str_10008b53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2fU)))
#undef str_10008b64
#define str_10008b64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb40U)))
#define uStack_38 (*(undefined8 *)(frame + 104))
#define local_88 (*(void * (*)[8])(frame + 24))
#define local_48 (*(void * *)(frame + 88))
#define local_40 (*(ulong *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b94
 */

long * recovered_10006b94(long param_1,ulong param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;

  local_40 = 0;
  uStack_38 = 0;
  local_48 = (void *)0x0;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 10) {
    recovered_10006cb4(local_88,param_2);
    recovered_10006054(&local_48,local_88);
    recovered_10003740(local_88[0]);
  }
  else {
    pcVar1 = str_10008b53;
    if (*(char *)(param_1 + 0x18) == '\0') {
      pcVar1 = str_10008b64;
    }
    uVar2 = 7;
    if (iVar3 != 8) {
      uVar2 = 0xf;
    }
    lVar5 = 3;
    lVar4 = 0;
    if (iVar3 != 8) {
      lVar5 = 4;
    }
    do {
      lVar7 = lVar4;
      *(char *)((long)local_88 + lVar7) = pcVar1[param_2 & uVar2];
      param_2 = param_2 >> lVar5;
      lVar4 = lVar7 + 1;
    } while (param_2 != 0);
    for (; lVar7 != -1; lVar7 = lVar7 + -1) {
      recovered_100056f0((long *)&local_48,*(undefined1 *)((long)local_88 + lVar7));
    }
  }
  lVar5 = recovered_10006b70(&local_48);
  plVar6 = recovered_10006964((long *)param_1,lVar5,local_40);
  recovered_10003740(local_48);
  return plVar6;
}

#undef str_10008b53
#undef str_10008b64
#undef uStack_38
#undef local_88
#undef local_48
#undef local_40

#define local_38 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cb4
 */

void recovered_10006cb4(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};


  recovered_10006d00(&local_38,param_2);
  *param_1 = local_38;
  param_1[2] = uStack_28;
  param_1[1] = local_30;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  recovered_10003740((void *)0x0);
  return;
}

#undef local_38
#undef local_30
#undef uStack_28

#define auStack_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d00
 */

void recovered_10006d00(undefined8 *param_1,ulong param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10006d5c((ulong)auStack_40,(ulong)(auStack_40 + 0x20),param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10005fdc(param_1,(long)auStack_40,PF_PART8(auVar1, 0) - (long)auStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef auStack_40

#define local_41 (*(byte (*)[65])(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d5c
 */

uint128 recovered_10006d5c(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

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

  uVar5 = 0x16;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar5 = 0x16, param_1 <= param_2)) &&
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
      uVar5 = 0x22;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e14
 */

void recovered_10006e14(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e18
 */

void recovered_10006e18(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#define apvStack_38 (*(void * (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e1c
 */

void recovered_10006e1c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  plVar1 = (long *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  recovered_10004398((long *)apvStack_38,plVar1);
  recovered_10004350((undefined1 *)plVar1,apvStack_38);
  recovered_10003740(apvStack_38[0]);
  return;
}

#undef apvStack_38

#undef PTR_recovered_10006e14_1000c0c0
#define PTR_recovered_10006e14_1000c0c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x409cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e50
 */

void recovered_10006e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10006e14_1000c0c0;
  return;
}

#undef PTR_recovered_10006e14_1000c0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e70
 */

void recovered_10006e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e74
 */

void recovered_10006e74(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e78
 */

void recovered_10006e78(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  lVar1 = recovered_10004418(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10006e70_1000c108
#define PTR_recovered_10006e70_1000c108 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x40e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb4
 */

void recovered_10006eb4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10006e70_1000c108;
  return;
}

#undef PTR_recovered_10006e70_1000c108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed4
 */

void recovered_10006ed4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed8
 */

void recovered_10006ed8(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#define uStack_30 (*(undefined8 *)(frame + 48))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define pvStack_40 (*(void * *)(frame + 32))
#define auStack_48 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006edc
 */

long * recovered_10006edc(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined1 *puVar2;
  long *extraout_x0;
  long lVar3;

  if (*(long *)(param_2 + 0x50) == 0) {
    auStack_48[0] = 0;
    uStack_38 = 0;
    pvStack_40 = (void *)0x0;
    uStack_28 = 0;
    uStack_30 = 0;
    recovered_10004328(auStack_48,(long *)(*param_3 + 8));
    recovered_10005bf8(param_2,auStack_48);
    recovered_10003740(pvStack_40);
    return extraout_x0;
  }
  puVar2 = (undefined1 *)recovered_10005d68(param_2);
  lVar3 = *param_3;
  *puVar2 = 1;
  plVar1 = recovered_10005e2c((long *)(puVar2 + 8),(long *)(lVar3 + 8));
  *(undefined8 *)(puVar2 + 0x20) = 0;
  return plVar1;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_10006ed4_1000c150
#define PTR_recovered_10006ed4_1000c150 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x412cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f24
 */

void recovered_10006f24(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10006ed4_1000c150;
  return;
}

#undef PTR_recovered_10006ed4_1000c150

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f44
 */

void recovered_10006f44(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f48
 */

void recovered_10006f48(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#define uStack_30 (*(undefined8 *)(frame + 48))
#define uStack_38 (*(undefined8 *)(frame + 40))
#define uStack_28 (*(undefined8 *)(frame + 56))
#define pvStack_40 (*(void * *)(frame + 32))
#define auStack_48 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f4c
 */

undefined1 * recovered_10006f4c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *extraout_x0 = 0;
  undefined1 *puVar1;
  undefined8 uVar2;

  if (*(long *)(param_2 + 0x50) == 0) {
    uStack_28 = *(undefined8 *)(*param_3 + 0x20);
    pvStack_40 = (void *)0x0;
    uStack_38 = 0;
    auStack_48[0] = 2;
    uStack_30 = 0;
    recovered_10005bf8(param_2,auStack_48);
    recovered_10003740(pvStack_40);
    return extraout_x0;
  }
  puVar1 = (undefined1 *)recovered_10005d68(param_2);
  uVar2 = *(undefined8 *)(*param_3 + 0x20);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return puVar1;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_10006f44_1000c198
#define PTR_recovered_10006f44_1000c198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4174U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fac
 */

void recovered_10006fac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10006f44_1000c198;
  return;
}

#undef PTR_recovered_10006f44_1000c198

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fcc
 */

void recovered_10006fcc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fd0
 */

void recovered_10006fd0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#define pvStack_40 (*(void * *)(frame + 32))
#define auStack_48 (*(undefined1 (*)[8])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fd4
 */

void recovered_10006fd4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  recovered_10007098(auStack_48,puVar1);
  if (*(long *)(param_2 + 0x50) == 0) {
    recovered_10005bd0(param_2,auStack_48);
  }
  else {
    puVar1 = (undefined1 *)recovered_10005d68(param_2);
    recovered_10007060(puVar1,auStack_48);
  }
  recovered_10003740(pvStack_40);
  return;
}

#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_10006fcc_1000c1e0
#define PTR_recovered_10006fcc_1000c1e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x41bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

void recovered_10007040(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10006fcc_1000c1e0;
  return;
}

#undef PTR_recovered_10006fcc_1000c1e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007060
 */

undefined1 * recovered_10007060(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10005e2c((long *)(param_1 + 8),(long *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007098
 */

undefined1 * recovered_10007098(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_100060a0((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d0
 */

void recovered_100070d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d4
 */

void recovered_100070d4(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d8
 */

void recovered_100070d8(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
  bVar6 = recovered_100054b8(piVar7,(int)lVar10,(int)lVar2);
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


#undef PTR_recovered_100070d0_1000c228
#define PTR_recovered_100070d0_1000c228 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4204U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000710c
 */

void recovered_1000710c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100070d0_1000c228;
  return;
}

#undef PTR_recovered_100070d0_1000c228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000712c
 */

void recovered_1000712c(int *param_1,int param_2,int param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 uVar7;

  uVar7 = (undefined1)param_4;
  bVar5 = recovered_100054b8(param_1,param_2,param_3);
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
 * Address: 0x100071dc
 */

void recovered_100071dc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071e0
 */

void recovered_100071e0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define local_58 (*(char * *)(frame + 24))
#define local_50 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071e4
 */

void recovered_100071e4(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

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
  recovered_10005678((long *)&local_58,*(ulong *)(lVar6 + 0x80));
  lVar7 = *(long *)(lVar6 + 0x80);
  pbVar3 = &DAT_10008b4b;
  if (*(byte **)(lVar6 + 0x78) != (byte *)0x0) {
    pbVar3 = *(byte **)(lVar6 + 0x78);
  }
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    bVar1 = *pbVar3;
    if (0x23 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x900002600U) == 0) {
      recovered_100056f0((long *)&local_58,bVar1);
    }
    pbVar3 = pbVar3 + 1;
  }
  if (1 < local_50) {
    if ((*local_58 == '0') && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      recovered_100073c0((long *)&local_58,0,2);
    }
    if (local_50 == 8 || local_50 == 6) {
      pbVar3 = (byte *)recovered_10006b70(&local_58);
      pbVar4 = (byte *)recovered_10007420((long)&local_58);
      uVar8 = 0;
      for (; bVar2 = pbVar3 == pbVar4, !bVar2; pbVar3 = pbVar3 + 1) {
        bVar1 = *pbVar3;
        uVar5 = bVar1 - 0x30U;
        if (9 < uVar5) {
          uVar5 = (uint)bVar1;
          if (bVar1 - 0x61U < 6) {
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
      goto LAB_10007334;
    }
  }
  uVar8 = 0;
  bVar2 = false;
LAB_10007334:
  recovered_10003740(local_58);
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
    recovered_1000712c((int *)*param_2,(int)lVar7,(int)lVar6,uVar8);
  }
  return;
}

#undef DAT_10008b4b
#undef uStack_48
#undef local_58
#undef local_50

#undef PTR_recovered_100071dc_1000c270
#define PTR_recovered_100071dc_1000c270 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x424cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073a0
 */

void recovered_100073a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100071dc_1000c270;
  return;
}

#undef PTR_recovered_100071dc_1000c270

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073c0
 */

void recovered_100073c0(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007420
 */

long recovered_10007420(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10006b70((undefined8 *)param_1);
  return lVar1 + *(long *)(param_1 + 8);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007448
 */

void recovered_10007448(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000744c
 */

void recovered_1000744c(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007450
 */

void recovered_10007450(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#undef PTR_recovered_10007448_1000c2b8
#define PTR_recovered_10007448_1000c2b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4294U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

void recovered_10007480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10007448_1000c2b8;
  return;
}

#undef PTR_recovered_10007448_1000c2b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a0
 */

void recovered_100074a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a4
 */

void recovered_100074a4(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a8
 */

void recovered_100074a8(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;

  uVar2 = *(ulong *)(*param_3 + 0x20);
  if ((long)uVar2 < 2) {
    uVar2 = 1;
  }
  recovered_10005d44(param_2,uVar2);
  puVar1 = (undefined1 *)recovered_10005788(param_2,uVar2);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


#undef PTR_recovered_100074a0_1000c300
#define PTR_recovered_100074a0_1000c300 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x42dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074c0
 */

void recovered_100074c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100074a0_1000c300;
  return;
}

#undef PTR_recovered_100074a0_1000c300

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e0
 */

void recovered_100074e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e4
 */

void recovered_100074e4(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#define apvStack_60 (*(void * (*)[3])(frame + 48))
#define apvStack_78 (*(void * (*)[3])(frame + 24))
#define apvStack_48 (*(void * (*)[3])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e8
 */

void recovered_100074e8(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  plVar1 = (long *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  plVar2 = (long *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x60));
  recovered_10004398((long *)apvStack_48,plVar2);
  recovered_10004398((long *)apvStack_78,plVar1);
  recovered_100075a4((long *)apvStack_60,apvStack_78,apvStack_48);
  recovered_10004350((undefined1 *)plVar1,apvStack_60);
  recovered_10003740(apvStack_60[0]);
  recovered_10003740(apvStack_78[0]);
  recovered_10003740(apvStack_48[0]);
  return;
}

#undef apvStack_60
#undef apvStack_78
#undef apvStack_48

#undef PTR_recovered_100074e0_1000c348
#define PTR_recovered_100074e0_1000c348 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4324U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007584
 */

void recovered_10007584(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100074e0_1000c348;
  return;
}

#undef PTR_recovered_100074e0_1000c348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a4
 */

void recovered_100075a4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006208(param_1,param_2);
  recovered_100075f0(param_1,param_3);
  return;
}


#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

long * recovered_100075f0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10008b4b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10007628(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10008b4b

#define local_38 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007628
 */

long * recovered_10007628(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10005f58(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10005678(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10005678(param_1,uVar3 + lVar5);
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
 * Address: 0x1000770c
 */

void recovered_1000770c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

void recovered_10007710(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


#define apvStack_38 (*(void * (*)[3])(frame + 40))
#define apvStack_50 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007714
 */

void recovered_10007714(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long *plVar1;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  plVar1 = (long *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  recovered_10004398((long *)apvStack_50,plVar1);
  recovered_100075a4((long *)apvStack_38,apvStack_50,(undefined8 *)(*param_3 + 0x40));
  recovered_10004350((undefined1 *)plVar1,apvStack_38);
  recovered_10003740(apvStack_38[0]);
  recovered_10003740(apvStack_50[0]);
  return;
}

#undef apvStack_38
#undef apvStack_50

#undef PTR_recovered_1000770c_1000c390
#define PTR_recovered_1000770c_1000c390 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x436cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007798
 */

void recovered_10007798(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_1000770c_1000c390;
  return;
}

#undef PTR_recovered_1000770c_1000c390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b8
 */

void recovered_100077b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077bc
 */

void recovered_100077bc(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077c0
 */

void recovered_100077c0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  lVar1 = recovered_10004418(variable);
  lVar2 = *(long *)(*param_3 + 0x58);
  *variable = 2;
  *(long *)(variable + 0x20) = lVar2 + lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_100077b8_1000c3d8
#define PTR_recovered_100077b8_1000c3d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x43b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f4
 */

void recovered_100077f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100077b8_1000c3d8;
  return;
}

#undef PTR_recovered_100077b8_1000c3d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007814
 */

void recovered_10007814(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007818
 */

void recovered_10007818(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000781c
 */

void recovered_1000781c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;
  void *variable_00;
  longlong lVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  variable_00 = (void *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10004418(variable_00);
  lVar2 = recovered_10004418(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar2 + lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007814_1000c420
#define PTR_recovered_10007814_1000c420 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x43fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007854
 */

void recovered_10007854(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10007814_1000c420;
  return;
}

#undef PTR_recovered_10007814_1000c420

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007874
 */

void recovered_10007874(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007878
 */

void recovered_10007878(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000787c
 */

void recovered_1000787c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  lVar1 = recovered_10004418(variable);
  lVar2 = *(long *)(*param_3 + 0x58);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar1 - lVar2;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007874_1000c468
#define PTR_recovered_10007874_1000c468 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4444U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b0
 */

void recovered_100078b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10007874_1000c468;
  return;
}

#undef PTR_recovered_10007874_1000c468

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078d0
 */

void recovered_100078d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078d4
 */

void recovered_100078d4(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078d8
 */

void recovered_100078d8(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;
  void *variable_00;
  longlong lVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  variable_00 = (void *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10004418(variable_00);
  lVar2 = recovered_10004418(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar2 - lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_100078d0_1000c4b0
#define PTR_recovered_100078d0_1000c4b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x448cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

void recovered_10007910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100078d0_1000c4b0;
  return;
}

#undef PTR_recovered_100078d0_1000c4b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007930
 */

void recovered_10007930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007934
 */

void recovered_10007934(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007938
 */

void recovered_10007938(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  lVar1 = recovered_10004418(variable);
  lVar2 = *(long *)(*param_3 + 0x58);
  *variable = 2;
  *(long *)(variable + 0x20) = lVar2 * lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007930_1000c4f8
#define PTR_recovered_10007930_1000c4f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x44d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000796c
 */

void recovered_1000796c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10007930_1000c4f8;
  return;
}

#undef PTR_recovered_10007930_1000c4f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000798c
 */

void recovered_1000798c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007990
 */

void recovered_10007990(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007994
 */

void recovered_10007994(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;
  void *variable_00;
  longlong lVar2;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  variable_00 = (void *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10004418(variable_00);
  lVar2 = recovered_10004418(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar2 * lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_1000798c_1000c540
#define PTR_recovered_1000798c_1000c540 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x451cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079cc
 */

void recovered_100079cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_1000798c_1000c540;
  return;
}

#undef PTR_recovered_1000798c_1000c540

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079ec
 */

void recovered_100079ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f0
 */

void recovered_100079f0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f4
 */

void recovered_100079f4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;
  long lVar3;

  lVar3 = *(long *)(*param_3 + 0x58);
  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = recovered_10004418(variable);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar1 / lVar3;
    }
  }
  *variable = 2;
  *(long *)(variable + 0x20) = lVar2;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_100079ec_1000c588
#define PTR_recovered_100079ec_1000c588 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a60
 */

void recovered_10007a60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_100079ec_1000c588;
  return;
}

#undef PTR_recovered_100079ec_1000c588

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a80
 */

void recovered_10007a80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a84
 */

void recovered_10007a84(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a88
 */

void recovered_10007a88(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  undefined1 *variable;
  void *variable_00;
  long lVar3;

  recovered_10005d44(param_2,*(ulong *)(*param_3 + 0x28));
  variable = (undefined1 *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  variable_00 = (void *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x60));
  lVar1 = recovered_10004418(variable_00);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = recovered_10004418(variable);
    lVar3 = 0;
    if (lVar1 != 0) {
      lVar3 = lVar2 / lVar1;
    }
  }
  *variable = 2;
  *(long *)(variable + 0x20) = lVar3;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007a80_1000c5d0
#define PTR_recovered_10007a80_1000c5d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x45acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ae8
 */

void recovered_10007ae8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10007a80_1000c5d0;
  return;
}

#undef PTR_recovered_10007a80_1000c5d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b08
 */

void recovered_10007b08(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b0c
 */

void recovered_10007b0c(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d04(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b10
 */

void recovered_10007b10(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x28));
  pcVar4 = (char *)recovered_10005788(param_2,*(ulong *)(*param_3 + 0x60));
  cVar1 = *pcVar3;
  if (cVar1 != *pcVar4) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      bVar2 = recovered_10007bc4((undefined8 *)(pcVar3 + 8),(undefined8 *)(pcVar4 + 8));
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


#undef PTR_recovered_10007b08_1000c618
#define PTR_recovered_10007b08_1000c618 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x45f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ba4
 */

void recovered_10007ba4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000370c(0x10);
  *puVar1 = &PTR_recovered_10007b08_1000c618;
  return;
}

#undef PTR_recovered_10007b08_1000c618

#undef DAT_10008b4b
#define DAT_10008b4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bc4
 */

bool recovered_10007bc4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;

  lVar5 = param_1[1];
  pcVar4 = &DAT_10008b4b;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  pcVar6 = &DAT_10008b4b;
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

#undef DAT_10008b4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bec
 */

bool recovered_10007bec(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007c24
 */

void recovered_10007c24(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10007cbc(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10007cd0((undefined1 *)((long)pvVar1 + lVar2),(undefined1 *)(*param_1 + lVar2));
      recovered_10006010((undefined8 *)(*param_1 + lVar2 + 8));
      lVar2 = lVar2 + 0x28;
    }
    recovered_10003740((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cbc
 */

void * recovered_10007cbc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x28;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10000cc0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10000cac();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cd0
 */

undefined1 * recovered_10007cd0(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10006208((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d08
 */

long recovered_10007d08(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10007c24(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10007098((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d7c
 */

long recovered_10007d7c(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10007c24(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10007cd0((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}
