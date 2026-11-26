/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6d34U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005b8
 */

void recovered_100005b8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  DAT_1000c0e0 = 0;
  recovered_1000061c();
  DAT_1000c0e4 = 0;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e4

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(int *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005e4
 */

void recovered_100005e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_1000c0e4;
      cVar1 = '\x01';
      { __typeof__(DAT_1000c0e4) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_1000c0e4),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_1000c0e4 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d34U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d44U)))
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
#define auStack_458 (*(ulong (*)[139])(pf_stack_frame + 24))
#define local_48 (*(ulong *)(pf_stack_frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000061c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000061c(void)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

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
  if (((byte)DAT_1000c0e0 & 1) == 0) {
    DAT_1000c0e8 = 0;
    DAT_1000c0f0 = 0;
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
      recovered_10002be4(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c0e8 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002be4(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_1000c0f0 == 0) {
      DAT_1000c0f0 = DAT_1000c0e8;
    }
    PF_PART1(DAT_1000c0e0, 0) = 1;
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0
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

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008a0
 */

bool recovered_100008a0(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_100005e4();
  bVar1 = recovered_100008dc(param_1,param_2,param_3);
  DAT_1000c0e4 = 0;
  return bVar1;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d34U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d44U)))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
#define local_61 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008dc
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100008dc(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long *plVar1;
  bool bVar2;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;

  bVar2 = false;
  if (((param_1 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != 0)) {
    if ((PF_PART1(DAT_1000c0e0, 1) & 1) == 0) {
      PF_PART1(DAT_1000c0e0, 1) = 1;
      recovered_1000061c();
      for (lVar10 = 0; lVar10 != param_3; lVar10 = lVar10 + 1) {
        plVar9 = (long *)param_1[lVar10];
        uVar3 = param_2[lVar10];
        plVar1 = (long *)((long)plVar9 + uVar3);
        if (CARRY8((ulong)plVar9,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)plVar9 < uVar3 || plVar1 <= plVar9) {
          PF_PART1(DAT_1000c0e0, 1) = 0;
          return false;
        }
        if ((ulong)plVar9 >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)plVar9 >> 0x1a < 0x21) &&
             (recovered_10002ce8((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x100009dc;
        }
        else {
          recovered_10002ce8((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
joined_r0x100009dc:
          if ((local_61 & 1) == 0) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
        }
        lVar4 = 0;
        while (lVar10 != lVar4) {
          plVar7 = (long *)param_1[lVar4];
          plVar8 = (long *)((long)plVar7 + param_2[lVar4]);
          if (CARRY8((ulong)plVar7,param_2[lVar4])) {
            plVar8 = (long *)0xffffffffffffffff;
          }
          lVar4 = lVar4 + 1;
          if (plVar7 < plVar1 && plVar9 < plVar8) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_1000c0e8;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && plVar9 < plVar7) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_1000c0e8;
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = *puVar5;
        puVar5 = (ulong *)(uVar3 + 8);
        uStack_70 = uVar6;
      } while (uVar3 != 0);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        recovered_10002be4(*param_1,*param_2,&uStack_70);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_1000c0f0 == 0) {
        DAT_1000c0f0 = DAT_1000c0e8;
      }
      PF_PART1(DAT_1000c0e0, 1) = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0
#undef uStack_70
#undef local_61

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad8
 */

bool recovered_10000ad8(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = param_2;
  uStack_18 = param_1;
  recovered_100005e4();
  bVar1 = recovered_100008dc(&uStack_18,&local_20,1);
  DAT_1000c0e4 = 0;
  return bVar1;
}

#undef DAT_1000c0e4
#undef local_20
#undef uStack_18

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b14
 */

ulong recovered_10000b14(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_1000c0e4 = 0;
  return uVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b74
 */

long recovered_10000b74(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  DAT_1000c0e4 = 0;
  return lVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc8
 */

ulong recovered_10000bc8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_1000c0e4 = 0;
  return uVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c18
 */

long recovered_10000c18(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  DAT_1000c0e4 = 0;
  return lVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c5c
 */

void recovered_10000c5c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  recovered_10000c88(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_1000c0e4 = 0;
  return;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6d3cU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c88
 */

ulong * recovered_10000c88(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;

  uVar1 = param_1 + 0xf;
  if (0xf < uVar1) {
    recovered_1000061c();
    puVar4 = DAT_1000c0e8;
    puVar3 = DAT_1000c0e8;
    if (DAT_1000c0f0 != (ulong *)0x0) {
      puVar3 = DAT_1000c0f0;
    }
    if (puVar3 != (ulong *)0x0) {
      uVar5 = uVar1 & 0xfffffffffffffff0;
      puVar6 = (ulong *)((long)param_2 + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar3;
      do {
        if ((char)puVar10[3] == '\x01') {
          uVar7 = *puVar10;
          if (uVar5 <= uVar7) {
            puVar2 = puVar10 + 4;
            if (puVar2 < param_2) {
              if ((param_2 < (ulong *)0xfffffffffffffff1) &&
                 (puVar2 < (ulong *)0xffffffffffffffcf || puVar10 == (ulong *)0xffffffffffffffaf)) {
                puVar8 = puVar6;
                if (puVar6 <= puVar10 + 10) {
                  puVar8 = puVar10 + 10;
                }
                uVar9 = (long)puVar8 - (long)puVar2;
                if (uVar9 < uVar7) goto LAB_10000d38;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000d38:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000d74;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000d74:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000e1c;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000dd0;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000dd0:
                        if (((ulong)puVar8 & 0xf) != 0) {
                          return (ulong *)0x0;
                        }
                        uVar1 = (long)puVar8 - (long)puVar2;
                        if (puVar8 < puVar2 || uVar1 == 0) {
                          return (ulong *)0x0;
                        }
                        if (uVar1 < 0x30 || uVar7 < uVar1) {
                          return (ulong *)0x0;
                        }
                        puVar11 = puVar8 + -4;
                        *puVar11 = uVar7 - uVar1;
                        uVar7 = puVar10[1];
                        puVar8[-3] = uVar7;
                        puVar8[-2] = (ulong)puVar10;
                        *(undefined1 *)(puVar8 + -1) = 1;
                        if (uVar7 != 0) {
                          *(ulong **)(uVar7 + 0x10) = puVar11;
                        }
                        *puVar10 = uVar1 - 0x20;
                        puVar10[1] = (ulong)puVar11;
LAB_10000e1c:
                        recovered_10002d38(puVar11,uVar5);
                        *(undefined1 *)(puVar11 + 3) = 0;
                        DAT_1000c0f0 = DAT_1000c0e8;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_1000c0f0 = (ulong *)puVar11[1];
                        }
                        return puVar11 + 4;
                      }
                    }
                  }
                }
                *(undefined1 *)(puVar10 + 3) = 0;
              }
            }
          }
        }
        puVar2 = puVar10 + 1;
        puVar10 = puVar4;
        if ((ulong *)*puVar2 != (ulong *)0x0) {
          puVar10 = (ulong *)*puVar2;
        }
      } while (puVar10 != (ulong *)0x0 && puVar10 != puVar3);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_1000c0e8
#undef DAT_1000c0f0

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e44
 */

void recovered_10000e44(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  recovered_10000c88(param_1,(ulong *)0x0,param_2);
  DAT_1000c0e4 = 0;
  return;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e7c
 */

ulong * recovered_10000e7c(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_100005e4();
  if (param_3 < param_2) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000c88(param_1,param_2,param_3);
  }
  DAT_1000c0e4 = 0;
  return puVar1;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec0
 */

void recovered_10000ec0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  recovered_10000ee8(param_1);
  DAT_1000c0e4 = 0;
  return;
}

#undef DAT_1000c0e4

#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee8
 */

void recovered_10000ee8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_1000061c();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002d8c(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002d8c(puVar2);
      puVar1 = puVar2;
    }
    DAT_1000c0f0 = puVar1;
  }
  return;
}

#undef DAT_1000c0f0

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d38U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f5c
 */

ulong * recovered_10000f5c(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;

  recovered_100005e4();
  if (param_1 == (ulong *)0x0) {
    puVar2 = recovered_10000c88(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000c0e4 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000ee8((long)param_1);
    DAT_1000c0e4 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1000c0e4 = 0;
    return (ulong *)0x0;
  }
  recovered_1000061c();
  uVar7 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar2 = param_1 + -4;
  uVar3 = *puVar2;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7 - 1) {
      DAT_1000c0e4 = 0;
      return (ulong *)0x0;
    }
    if (uVar3 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar3) {
        DAT_1000c0e4 = 0;
        return (ulong *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < param_2) {
      DAT_1000c0e4 = 0;
      return (ulong *)0x0;
    }
    uVar1 = recovered_10002d38(puVar2,uVar7);
    if ((int)uVar1 == 0) {
      DAT_1000c0e4 = 0;
      return param_1;
    }
    DAT_1000c0e4 = 0;
    DAT_1000c0f0 = param_1[-3];
    return param_1;
  }
  puVar6 = puVar2;
  for (uVar4 = uVar3;
      (((uVar4 < uVar7 && (puVar5 = (ulong *)puVar6[1], puVar5 != (ulong *)0x0)) &&
       ((char)puVar5[3] == '\x01')) &&
      ((uVar4 < 0xffffffffffffffe0 && (ulong *)((long)puVar6 + uVar3 + 0x20) == puVar5 &&
       (uVar3 = *puVar5, uVar3 <= -uVar4 - 0x21)))); uVar4 = uVar4 + uVar3 + 0x20) {
    puVar6 = puVar5;
  }
  if (uVar7 - 1 < uVar4) {
    if (uVar4 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar4) goto LAB_10014124;
    }
    else if (0xffffffffffffffb0 < param_2) goto LAB_10014124;
    do {
      uVar3 = *puVar2;
      if (uVar7 <= uVar3) goto LAB_10001088;
      uVar3 = recovered_10002dac(puVar2);
    } while ((uVar3 & 1) != 0);
    uVar3 = *puVar2;
LAB_10001088:
    if (uVar7 <= uVar3) {
      uVar1 = recovered_10002d38(puVar2,uVar7);
      if ((int)uVar1 != 0) {
        DAT_1000c0f0 = param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000c0e4 = 0;
      return param_1;
    }
  }
  else {
LAB_10014124:
    puVar2 = recovered_10000c88(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_100013dc((undefined1 *)puVar2,(undefined1 *)param_1,uVar3);
      recovered_10000ee8((long)param_1);
      DAT_1000c0e4 = 0;
      return puVar2;
    }
  }
  DAT_1000c0e4 = 0;
  return (ulong *)0x0;
}

#undef DAT_1000c0e4
#undef DAT_1000c0f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001104
 */

ulong recovered_10001104(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001148
 */

ulong recovered_10001148(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001194
 */

long recovered_10001194(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100011e4
 */

/* WARNING: Removing unreachable block (ram,0x10001234) */

ulong recovered_100011e4(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100011ec
 */

ulong recovered_100011ec(ulong param_1,ulong param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000124c
 */

undefined8 recovered_1000124c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_100011ec(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000126c
 */

long recovered_1000126c(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  lVar4 = recovered_100011ec(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ac
 */

long recovered_100012ac(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

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
  recovered_100011ec(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f8
 */

void recovered_100012f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

int recovered_10001300(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000130c
 */

undefined8 recovered_1000130c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002e34(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return 0;
}

#undef UINT_8201084c

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

void recovered_10001350(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10002e34(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

#undef UINT_82010854
#define UINT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

undefined8 recovered_10001390(void *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002e34(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return pvVar3;
  }
  return 0;
}

#undef UINT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013dc
 */

void recovered_100013dc(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;

  if ((param_3 < 0x10) || ((((uint)param_2 ^ (uint)param_1) & 7) != 0)) {
  }
  else {
    for (; (param_3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    lVar4 = 0;
    for (lVar3 = 0; 0x1f < param_3 + lVar3; lVar3 = lVar3 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar4);
      puVar2 = (undefined8 *)(param_2 + lVar4);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar4 = lVar4 + 0x20;
    }
    lVar5 = 0;
    param_3 = param_3 + lVar3;
    while (7 < param_3) {
      *(undefined8 *)(param_1 + lVar4 + lVar5) = *(undefined8 *)(param_2 + lVar4 + lVar5);
      lVar5 = lVar5 + 8;
      param_3 = param_3 - 8;
    }
    param_1 = param_1 + (lVar5 - lVar3);
    param_2 = param_2 + (lVar5 - lVar3);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b4
 */

void recovered_100014b4(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((param_1 != param_2) && (param_3 != 0)) {
    puVar2 = param_2 + param_3;
    if ((param_1 >= param_2 && param_1 <= puVar2) && (param_1 < param_2 || puVar2 != param_1)) {
      puVar3 = param_1 + param_3;
      uVar1 = param_3;
      if ((0xf < param_3) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (param_3 != 0 && (((int)param_1 + (int)param_3 & 7U) != 0)); param_3 = param_3 - 1) {
          param_1[param_3 - 1] = param_2[param_3 - 1];
        }
        for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
          *(undefined8 *)(param_1 + (param_3 - 8)) = *(undefined8 *)(param_2 + (param_3 - 8));
          *(undefined8 *)(param_1 + (param_3 - 0x10)) = *(undefined8 *)(param_2 + (param_3 - 0x10));
          *(undefined8 *)(param_1 + (param_3 - 0x18)) = *(undefined8 *)(param_2 + (param_3 - 0x18));
          *(undefined8 *)(param_1 + (param_3 - 0x20)) = *(undefined8 *)(param_2 + (param_3 - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = param_3; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)(param_1 + param_3 + lVar4 + -8) =
               *(undefined8 *)(param_2 + param_3 + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = param_1 + lVar4 + param_3;
        puVar2 = param_2 + lVar4 + param_3;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      recovered_100013dc(param_1,param_2,param_3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c8
 */

void recovered_100015c8(ulong *param_1,byte param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;

  if (0xf < param_3) {
    uVar2 = (ulong)param_2;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_3 != 0 && (((ulong)puVar3 & 7) != 0));
        puVar3 = (ulong *)((long)puVar3 + 1)) {
      *(byte *)param_1 = param_2;
      param_3 = param_3 - 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(byte *)param_1 = param_2;
    param_1 = (ulong *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001660
 */

void recovered_10001660(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001664
 */

void recovered_10001664(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001668
 */

char * recovered_10001668(long param_1,char param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x1000168c
 */

int recovered_1000168c(byte *param_1,byte *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
    for (lVar7 = 0; (uVar5 = param_3 - lVar7, uVar5 != 0 && (((uint)param_1 + (int)lVar7 & 7) != 0))
        ; lVar7 = lVar7 + 1) {
      if ((uint)param_1[lVar7] - (uint)param_2[lVar7] != 0) {
        return (uint)param_1[lVar7] - (uint)param_2[lVar7];
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)(param_1 + lVar7) != *(long *)(param_2 + lVar7)) {
        pbVar3 = param_1 + lVar7;
        pbVar4 = param_2 + lVar7;
        goto recovered_100017f4;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_100017f4;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_100017f4;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_100017f4;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_100017f4:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = pbVar3 + lVar7;
          pbVar2 = pbVar4 + lVar7;
          lVar7 = lVar7 + 1;
        } while ((uint)*pbVar1 - (uint)*pbVar2 == 0);
        return (uint)*pbVar1 - (uint)*pbVar2;
      }
      lVar6 = lVar6 + 8;
    }
    param_1 = param_1 + lVar6 + lVar7;
    param_2 = param_2 + lVar6 + lVar7;
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)*param_1 - (uint)*param_2 != 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f4
 */

int recovered_100017f4(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001820
 */

bool recovered_10001820(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001830
 */

bool recovered_10001830(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001840
 */

bool recovered_10001840(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001854
 */

bool recovered_10001854(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

bool recovered_10001870(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001880
 */

bool recovered_10001880(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

int recovered_10001890(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a4
 */

int recovered_100018a4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018b8
 */

long recovered_100018b8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100018dc
 */

int recovered_100018dc(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001904
 */

int recovered_10001904(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001908
 */

void recovered_10001908(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001920
 */

void recovered_10001920(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;

  if (param_1 != (undefined1 *)0x0) {
    lVar1 = recovered_100018b8((long)param_1);
    puVar2 = (undefined1 *)recovered_1000130c(lVar1 + 1);
    if (puVar2 != (undefined1 *)0x0) {
      recovered_100013dc(puVar2,param_1,lVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000195c
 */

char * recovered_1000195c(char *param_1,char param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001984
 */

long recovered_10001984(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_1000195c(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c4
 */

long recovered_100019c4(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_1000195c(param_2,*(char *)(param_1 + lVar2)), pcVar1 == (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a04
 */

char * recovered_10001a04(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_1000195c(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a44
 */

char * recovered_10001a44(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_100054b0
#define DAT_100054b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a80
 */

undefined * recovered_10001a80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100054b0;
}

#undef DAT_100054b0

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a8c
 */

undefined ** recovered_10001a8c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

#undef UINT_82010968
#define UINT_82010968 (*(uint *)(0x82010968U))
#define uStack_38 (*(ulong *)(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a98
 */

void recovered_10001a98(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  recovered_100015c8(&uStack_38,0,0x18);
  bVar1 = recovered_10002e34(0x168);
  if (bVar1) {
    uVar2 = UINT_82010968;
    if ((uVar2 != 0) && (uVar2 = (*(code *)(ulong)uVar2)(&uStack_38), uVar2 != 0))
    goto joined_r0x10001af8;
  }
  local_30 = 0x574d4236;
joined_r0x10001af8:
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return;
}

#undef UINT_82010968
#undef uStack_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

double recovered_10001b10(double param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001b44
 */

uint128 recovered_10001b44(double param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001bb8
 */

uint128 recovered_10001bb8(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  if (param_2 == 0.0) {
    return ZEXT816(0);
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = param_1 - param_2 * (double)(int)(param_1 / param_2);
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bdc
 */

uint128 recovered_10001bdc(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001c3c
 */

uint128 recovered_10001c3c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001c58
 */

uint128 recovered_10001c58(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001c84
 */

uint128 recovered_10001c84(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_100053b0
#define DAT_100053b0 (*(double *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

uint128 recovered_10001cc0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_100053b0 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_100053b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d6c
 */

long recovered_10001d6c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_100053b8
#define DAT_100053b8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d80
 */

uint128 recovered_10001d80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001dd4(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100053b8);
  return auVar1;
}

#undef DAT_100053b8

#undef DAT_100053c0
#define DAT_100053c0 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100053c8
#define DAT_100053c8 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100053d0
#define DAT_100053d0 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100053d8
#define DAT_100053d8 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

void recovered_10001dd4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_100053c0 < param_1; param_1 = param_1 + DAT_100053d8) {
  }
  for (; param_1 < DAT_100053c8; param_1 = param_1 + DAT_100053d0) {
  }
  return;
}

#undef DAT_100053c0
#undef DAT_100053c8
#undef DAT_100053d0
#undef DAT_100053d8

#undef DAT_100053e0
#define DAT_100053e0 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e18
 */

uint128 recovered_10001e18(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001dd4(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100053e0;
  return auVar1;
}

#undef DAT_100053e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e64
 */

uint128 recovered_10001e64(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e74
 */

ulong recovered_10001e74(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001ed4
 */

ulong recovered_10001ed4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001f24
 */

void recovered_10001f24(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f4c
 */

uint128 recovered_10001f4c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if ((long)param_1 < 0) {
    recovered_10001f24(-param_1);
    PF_PART8(auVar2, 8) = 0;
    (*(double *)((uint8_t *)&(auVar2)+0)) = -extraout_d0;
    return auVar2;
  }
  dVar4 = 1.0;
  dVar3 = 0.0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      dVar3 = dVar3 + dVar4;
    }
    dVar4 = dVar4 + dVar4;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar3;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f70
 */

float recovered_10001f70(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa4
 */

void recovered_10001fa4(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b44((double)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fbc
 */

float recovered_10001fbc(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001b10((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd4
 */

void recovered_10001fd4(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001bdc((double)param_1,(double)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff0
 */

float recovered_10001ff0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002014
 */

void recovered_10002014(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c58((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000202c
 */

uint128 recovered_1000202c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002054
 */

void recovered_10002054(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000202c((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206c
 */

void recovered_1000206c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c84((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002084
 */

void recovered_10002084(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001cc0((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

long recovered_1000209c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b0
 */

void recovered_100020b0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001d80((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c8
 */

void recovered_100020c8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001e18((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020e0
 */

float recovered_100020e0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

long recovered_100020f0(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10002188;
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
      goto LAB_100021b4;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_100021b4;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_100021b4;
    }
LAB_10002188:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_100021b4:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_100021f4((uint)*pbVar4);
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
 * Address: 0x100021f4
 */

uint recovered_100021f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002224
 */

long recovered_10002224(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      goto LAB_10002308;
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
      goto LAB_10002308;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10002308;
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
LAB_10002308:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_100021f4((uint)*pbVar6);
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
 * Address: 0x10002348
 */

uint128 recovered_10002348(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
        dVar12 = recovered_10001b10(dVar12,iVar9 * iVar6);
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
 * Address: 0x100024d8
 */

void recovered_100024d8(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002348(param_1,param_2);
  return;
}


#undef str_100054b2
#define str_100054b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f0
 */

int recovered_100024f0(byte *param_1,ulong param_2,byte *param_3,double *param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  double *pdVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;

  local_8c = 0;
  local_88 = param_2;
  local_80 = param_1;
  pdStack_78 = param_4;
  if (param_2 != 0) {
    *param_1 = 0;
  }
LAB_10002560:
  bVar9 = *param_3;
  if (bVar9 != 0x25) {
    if (bVar9 == 0) {
      if (param_2 != 0) {
        *local_80 = 0;
      }
      return local_8c;
    }
    pbVar8 = param_3;
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = bVar9;
      goto LAB_1000258c;
    }
    goto LAB_10002590;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x10002620;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002608;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_10002608;
      case 0x2b:
      case 0x2d:
      case 0x30:
        bVar9 = *pbVar8;
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
  goto LAB_100028e8;
LAB_10002608:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_10002630:
  if (bVar9 == 0x2e) {
    pbVar13 = pbVar8 + 1;
    bVar9 = *pbVar13;
    if (bVar9 == 0x2a) {
      uVar7 = *(uint *)pdStack_78;
      bVar9 = pbVar8[2];
      pbVar8 = pbVar8 + 2;
      pdStack_78 = pdStack_78 + 1;
    }
    else {
      uVar7 = 0;
      while( true ) {
        bVar2 = bVar9 - 0x30U;
        pbVar8 = pbVar13;
        if (9 < bVar2) break;
        iVar12 = uVar7 * 10;
        bVar1 = (int)uVar7 <= (int)((bVar2 ^ 0x7ffffffe) / 10);
        uVar7 = 0x7fffffff;
        if (bVar1) {
          uVar7 = iVar12 + (uint)bVar2;
        }
        pbVar13 = pbVar13 + 1;
        bVar9 = *pbVar13;
      }
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (bVar9 == 0x4c) {
    pbVar8 = pbVar8 + 1;
    uVar10 = 8;
    bVar1 = true;
  }
  else if (bVar9 == 0x7a) {
    bVar1 = false;
    pbVar8 = pbVar8 + 1;
    uVar10 = 5;
  }
  else if (bVar9 == 0x6a) {
    bVar1 = false;
    pbVar8 = pbVar8 + 1;
    uVar10 = 7;
  }
  else if (bVar9 == 0x6c) {
    bVar4 = pbVar8[1] == 0x6c;
    uVar10 = 3;
    if (bVar4) {
      uVar10 = 4;
    }
LAB_1000271c:
    bVar1 = false;
    pbVar13 = pbVar8 + 1;
    if (bVar4) {
      pbVar13 = pbVar8 + 2;
    }
    pbVar8 = pbVar13;
  }
  else if (bVar9 == 0x74) {
    bVar1 = false;
    pbVar8 = pbVar8 + 1;
    uVar10 = 6;
  }
  else {
    if (bVar9 == 0x68) {
      bVar4 = pbVar8[1] == 0x68;
      uVar10 = 1;
      if (!bVar4) {
        uVar10 = 2;
      }
      goto LAB_1000271c;
    }
    bVar1 = false;
    uVar10 = 0;
  }
  bVar9 = *pbVar8;
  switch((uintptr_t)(bVar9)) {
  case 99:
    pdVar3 = pdStack_78 + 1;
    if (1 < local_88) {
      *local_80 = (byte)*(uint *)pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      goto LAB_1000258c;
    }
    break;
  case 100:
  case 0x69:
code_r0x1000283c:
    switch((uintptr_t)(uVar10)) {
    case 1:
      dVar5 = (double)(long)*(char *)pdStack_78;
      break;
    case 2:
      dVar5 = (double)(long)*(short *)pdStack_78;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      dVar5 = *pdStack_78;
      break;
    default:
      dVar5 = (double)(long)(int)*(uint *)pdStack_78;
    }
    if ((long)dVar5 < 0) {
      if (1 < local_88) {
        *local_80 = 0x2d;
        local_88 = local_88 - 1;
        local_80 = local_80 + 1;
      }
      local_8c = local_8c + 1;
      dVar5 = (double)-(long)dVar5;
    }
LAB_100028d8:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x100028e0:
    uVar6 = 0;
LAB_100028e4:
    recovered_10002ad0((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_100028e8;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x10dU));
    }
    else {
      dVar5 = *pdStack_78;
      if (dVar5 < 0.0) {
        if (1 < local_88) {
          *local_80 = 0x2d;
          local_88 = local_88 - 1;
          local_80 = local_80 + 1;
        }
        local_8c = local_8c + 1;
        dVar5 = -dVar5;
      }
      pdStack_78 = pdStack_78 + 1;
      recovered_10002ad0((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
      pbVar13 = local_80;
      if (1 < local_88) {
        pbVar13 = local_80 + 1;
        *local_80 = 0x2e;
        local_88 = local_88 - 1;
      }
      dVar5 = dVar5 - (double)(int)dVar5;
      iVar12 = 6;
      do {
        iVar16 = (int)(dVar5 * 10.0);
        local_80 = pbVar13;
        if (1 < local_88) {
          local_80 = pbVar13 + 1;
          *pbVar13 = (char)iVar16 + 0x30;
          local_88 = local_88 - 1;
        }
        dVar5 = dVar5 * 10.0 - (double)iVar16;
        iVar12 = iVar12 + -1;
        pbVar13 = local_80;
      } while (iVar12 != 0);
      local_8c = local_8c + 7;
    }
    goto LAB_100028e8;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x13bU));
      uVar7 = 0x10;
      goto code_r0x100028e0;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_100054b2;
      if ((byte *)(uintptr_t)pf_double_bits(*pdStack_78) != (byte *)0x0) {
        pbVar13 = (byte *)(uintptr_t)pf_double_bits(*pdStack_78);
      }
      uVar11 = local_88;
      pbVar14 = local_80;
      while( true ) {
        pdStack_78 = pdVar3;
        if ((uVar7 == 0) || (*pbVar13 == 0)) break;
        pbVar15 = pbVar14;
        if (1 < uVar11) {
          pbVar15 = pbVar14 + 1;
          *pbVar14 = *pbVar13;
          uVar11 = uVar11 - 1;
          local_88 = uVar11;
          local_80 = pbVar15;
        }
        uVar7 = uVar7 - (0 < (int)uVar7);
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar15;
        local_8c = local_8c + 1;
      }
      goto LAB_100028e8;
    case 0x75:
      switch((uintptr_t)(uVar10)) {
      case 1:
        dVar5 = (double)(ulong)*(byte *)pdStack_78;
        break;
      case 2:
        dVar5 = (double)(ulong)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        dVar5 = *pdStack_78;
        break;
      default:
        dVar5 = (double)(ulong)*(uint *)pdStack_78;
      }
      goto LAB_100028d8;
    case 0x78:
code_r0x100027f8:
      switch((uintptr_t)(uVar10)) {
      case 1:
        dVar5 = (double)(ulong)*(byte *)pdStack_78;
        break;
      case 2:
        dVar5 = (double)(ulong)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        dVar5 = *pdStack_78;
        break;
      default:
        dVar5 = (double)(ulong)*(uint *)pdStack_78;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar6 = (uint)(*pbVar8 == 0x58);
      uVar7 = 0x10;
      goto LAB_100028e4;
    default:
      if (bVar9 == 0x49) goto code_r0x1000283c;
      if (bVar9 == 0x58) goto code_r0x100027f8;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_1000258c:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10002590:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_100028e8:
  param_3 = pbVar8 + 1;
  goto LAB_10002560;
code_r0x10002620:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_10002630;
}

#undef str_100054b2
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a94
 */

void recovered_10002a94(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef str_100054c5
#define str_100054c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119U)))
#undef str_100054d6
#define str_100054d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

void recovered_10002ad0(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_100054c5;
  if (param_6 == 0) {
    pcVar1 = str_100054d6;
  }
  uVar5 = (ulong)param_5;
  lVar3 = 0;
  do {
    lVar6 = lVar3;
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = param_4 / uVar5;
    }
    acStack_80[lVar6] = pcVar1[param_4 - uVar2 * uVar5];
    bVar4 = uVar5 <= param_4;
    param_4 = uVar2;
    lVar3 = lVar6 + 1;
  } while (bVar4);
  for (; lVar6 != -1; lVar6 = lVar6 + -1) {
    recovered_10002a94(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_100054c5
#undef str_100054d6
#undef acStack_80

#undef str_100054b2
#define str_100054b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x106U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

void recovered_10002b70(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_100054b2;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002a94(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100054b2

#define uStack0000000000000000 (*(undefined1 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

int recovered_10002bbc(byte *param_1,ulong param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100024f0(param_1,param_2,param_3,(double *)&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6d34U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be4
 */

void recovered_10002be4(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined2 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined2 *puVar5;

  uVar4 = param_1 + param_2;
  if (CARRY8(param_1,param_2)) {
    uVar4 = 0xffffffffffffffff;
  }
  bVar1 = 0x44 < param_1 >> 0x19;
  if (((!bVar1 && param_1 < uVar4) && 0x83ffffff < uVar4) &&
      ((bVar1 || uVar4 <= param_1) || uVar4 != 0x84000000)) {
    if (param_1 >> 0x1a < 0x21) {
      recovered_10002c68(param_1,0x84000000 - param_1,param_3);
    }
    if (uVar4 < 0x8a000001) {
      return;
    }
    param_2 = uVar4 - 0x8a000000;
    param_1 = 0x8a000000;
  }
  if (((!CARRY8(param_1,param_2)) && (param_1 < 0xfffffffffffffff1)) && (param_3 != (ulong *)0x0)) {
    plVar3 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar4 = param_2 - ((long)plVar3 - param_1);
    if (((long)plVar3 - param_1 <= param_2 && uVar4 != 0) &&
       (uVar4 = uVar4 & 0xfffffffffffffff0, 0x30 < uVar4)) {
      *plVar3 = uVar4 - 0x20;
      plVar3[1] = 0;
      puVar5 = (undefined2 *)*param_3;
      plVar3[2] = (long)puVar5;
      *(undefined1 *)(plVar3 + 3) = 1;
      puVar2 = &DAT_1000c0e0;
      if (DAT_1000c0e8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 4) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_1000c0f0 == (long *)0x0) {
        DAT_1000c0f0 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x6d34U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d3cU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c68
 */

void recovered_10002c68(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined2 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined2 *puVar4;

  if (((!CARRY8(param_1,param_2)) && (param_1 < 0xfffffffffffffff1)) && (param_3 != (ulong *)0x0)) {
    plVar2 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar3 = param_2 - ((long)plVar2 - param_1);
    if (((long)plVar2 - param_1 <= param_2 && uVar3 != 0) &&
       (uVar3 = uVar3 & 0xfffffffffffffff0, 0x30 < uVar3)) {
      *plVar2 = uVar3 - 0x20;
      plVar2[1] = 0;
      puVar4 = (undefined2 *)*param_3;
      plVar2[2] = (long)puVar4;
      *(undefined1 *)(plVar2 + 3) = 1;
      puVar1 = &DAT_1000c0e0;
      if (DAT_1000c0e8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 4) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000c0f0 == (long *)0x0) {
        DAT_1000c0f0 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c0f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce8
 */

void recovered_10002ce8(ulong param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((param_1 < 0xfffffffffffffff1 && param_3 != (undefined1 *)0x0) && param_2 <= ~param_1) {
    *param_3 = 0;
    uVar2 = (param_1 + 0xf & 0xfffffffffffffff0) - param_1;
    uVar1 = param_2 - uVar2;
    if ((uVar2 <= param_2 && uVar1 != 0) && (0x30 < (uVar1 & 0xfffffffffffffff0))) {
      *param_3 = 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d38
 */

undefined8 recovered_10002d38(ulong *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;

  uVar1 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
    uVar4 = *param_1 - uVar3;
    if ((uVar3 <= *param_1) && (0x2f < uVar4)) {
      plVar2 = (long *)((long)param_1 + uVar3 + 0x20);
      *plVar2 = uVar4 - 0x20;
      uVar4 = param_1[1];
      *(ulong *)((long)param_1 + uVar3 + 0x28) = uVar4;
      *(ulong **)((long)param_1 + uVar3 + 0x30) = param_1;
      *(undefined1 *)((long)param_1 + uVar3 + 0x38) = 1;
      if (uVar4 != 0) {
        *(long **)(uVar4 + 0x10) = plVar2;
      }
      *param_1 = uVar3;
      param_1[1] = (ulong)plVar2;
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d8c
 */

void recovered_10002d8c(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002dac(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dac
 */

undefined8 recovered_10002dac(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (((param_1 != (ulong *)0x0) && (puVar2 = (ulong *)param_1[1], puVar2 != (ulong *)0x0)) &&
     ((char)puVar2[3] == '\x01')) {
    uVar3 = *param_1;
    if ((ulong *)((long)param_1 + uVar3 + 0x20) != puVar2) {
      return 0;
    }
    if (0xffffffffffffffdf < uVar3) {
      return 0;
    }
    if (*puVar2 <= -uVar3 - 0x21) {
      if (DAT_1000c0f0 == puVar2) {
        DAT_1000c0f0 = param_1;
      }
      uVar1 = puVar2[1];
      *param_1 = uVar3 + *puVar2 + 0x20;
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        *(ulong **)(uVar1 + 0x10) = param_1;
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_1000c0f0

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e34
 */

bool recovered_10002e34(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fcc
 */

void recovered_10002fcc(char *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c100 != 0) {
          DAT_1000c100 = DAT_1000c100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003084(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_10003084(0);
          }
          pcVar1 = &DAT_1000c108 + DAT_1000c100;
          DAT_1000c100 = DAT_1000c100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
#undef UINT_82010840
#define UINT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003084
 */

void recovered_10003084(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if ((DAT_1000c100 != 0) || (param_1 != 0)) {
    if (DAT_1000c100 == 0) {
      uVar3 = 0;
    }
    else {
      recovered_100013dc(local_230,&DAT_1000c108,DAT_1000c100);
      uVar3 = DAT_1000c100;
    }
    local_230[uVar3] = 0;
    bVar2 = recovered_10003df4(0x40);
    if ((bVar2) && (uVar1 = UINT_82010840, uVar1 != 0)) {
      (*(code *)(ulong)uVar1)(local_230);
    }
    DAT_1000c100 = 0;
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef UINT_82010840
#undef local_230

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
#undef UINT_82010840
#define UINT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

void recovered_10003110(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if (DAT_1000c100 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_100013dc(auStack_230,&DAT_1000c108,DAT_1000c100);
    uVar3 = DAT_1000c100;
  }
  auStack_230[uVar3] = 0;
  bVar2 = recovered_10003df4(0x40);
  if (bVar2) {
    uVar1 = UINT_82010840;
    if (uVar1 != 0) {
      (*(code *)(ulong)uVar1)(auStack_230);
    }
  }
  DAT_1000c100 = 0;
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef UINT_82010840
#undef auStack_230

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
#undef UINT_82010840
#define UINT_82010840 (*(uint *)(0x82010840U))
#define acStack_230 (*(char (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003118
 */

void recovered_10003118(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  if (DAT_1000c100 != 0) {
    if (DAT_1000c100 == 0) {
      uVar3 = 0;
    }
    else {
      recovered_100013dc(acStack_230,&DAT_1000c108,DAT_1000c100);
      uVar3 = DAT_1000c100;
    }
    acStack_230[uVar3] = '\0';
    bVar2 = recovered_10003df4(0x40);
    if (bVar2) {
      uVar1 = UINT_82010840;
      if (uVar1 != 0) {
        (*(code *)(ulong)uVar1)(acStack_230);
      }
    }
    DAT_1000c100 = 0;
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef UINT_82010840
#undef acStack_230

#undef DAT_100054ea
#define DAT_100054ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#define abStack_160 (*(byte (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

void recovered_10003120(byte *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;

  pbVar1 = &DAT_100054ea;
  if (param_1 != (byte *)0x0) {
    pbVar1 = param_1;
  }
  uVar2 = recovered_10002bbc(abStack_160,0x140,pbVar1);
  if (0 < (int)uVar2) {
    recovered_10002fcc((char *)abStack_160,(ulong)uVar2);
  }
  return;
}

#undef DAT_100054ea
#undef abStack_160

#undef DAT_10005508
#define DAT_10005508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
#undef str_100054ed
#define str_100054ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003184
 */

/* WARNING: Removing unreachable block (ram,0x100031d0) */

void recovered_10003184(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_100031a8(str_100054ed);
  pcVar4 = &DAT_10005508;
  for (lVar3 = recovered_100018b8(((uintptr_t)pf_module_state+0x15cU)); lVar3 != 0; lVar3 = lVar3 + -1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003084(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_10003084(0);
        }
        pcVar1 = &DAT_1000c108 + DAT_1000c100;
        DAT_1000c100 = DAT_1000c100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10005508
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_100054ed

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a8
 */

void recovered_100031a8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  lVar3 = recovered_100018b8((long)param_1);
  if (param_1 != (char *)0x0) {
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c100 != 0) {
          DAT_1000c100 = DAT_1000c100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003084(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_10003084(0);
          }
          pcVar1 = &DAT_1000c108 + DAT_1000c100;
          DAT_1000c100 = DAT_1000c100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108

#undef DAT_10005508
#define DAT_10005508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d54U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d5cU)))
#undef str_1000550b
#define str_1000550b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

/* WARNING: Removing unreachable block (ram,0x100031d0) */

void recovered_100031d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_100031a8(str_1000550b);
  pcVar4 = &DAT_10005508;
  for (lVar3 = recovered_100018b8(((uintptr_t)pf_module_state+0x15cU)); lVar3 != 0; lVar3 = lVar3 + -1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003084(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_10003084(0);
        }
        pcVar1 = &DAT_1000c108 + DAT_1000c100;
        DAT_1000c100 = DAT_1000c100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10005508
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_1000550b

#undef UINT_82010844
#define UINT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

bool recovered_100031f8(long param_1,long param_2,char *param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10003118();
    bVar2 = recovered_10003df4(0x44);
    bVar1 = false;
    if (bVar2) {
      uVar3 = UINT_82010844;
      if (uVar3 == 0) {
        bVar1 = false;
      }
      else {
        uVar3 = (*(code *)(ulong)uVar3)((char *)param_1,(uint)param_2,param_3,(uint)param_4);
        bVar1 = uVar3 != 0;
      }
    }
  }
  return bVar1;
}

#undef UINT_82010844

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

undefined8 recovered_10003270(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003274
 */

void recovered_10003274(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003278
 */

undefined8 recovered_10003278(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_100054ea
#define DAT_100054ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
#undef str_1000558c
#define str_1000558c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#undef str_10005599
#define str_10005599 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1edU)))
#undef str_100055a7
#define str_100055a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#define uStack_4c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

/* WARNING: Type propagation algorithm not settling */

ulong * recovered_10003280(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_1000c058 = 0x16;
    return (ulong *)0x0;
  }
  iVar2 = recovered_100018dc(param_1,(byte *)str_1000558c);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100018dc(param_1,(byte *)str_10005599);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100018dc(param_1,(byte *)str_100055a7);
      if (iVar3 != 0) {
        puVar4 = (ulong *)recovered_1000130c(0x340);
        if (puVar4 == (ulong *)0x0) {
          DAT_1000c058 = 0xc;
          return (ulong *)0x0;
        }
        recovered_100015c8(puVar4,0,0x340);
        *(undefined4 *)puVar4 = 0;
        pcVar5 = recovered_1000195c(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x124) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
        recovered_10002bbc((byte *)((long)puVar4 + 4),0xf1,&DAT_100054ea);
        recovered_100015c8(&uStack_4c,0,0xc);
        uVar6 = recovered_100034bc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10003464:
            recovered_10001350(puVar4);
            return (ulong *)0x0;
          }
        }
        else {
          pcVar5 = recovered_1000195c(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)PF_PART4(uStack_4c, 4), PF_PART4(uStack_4c, 4) != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000350c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003464;
              recovered_100013dc((undefined1 *)puVar4[0x20],(undefined1 *)(ulong)(uint)uStack_4c,
                                 (ulong)PF_PART4(uStack_4c, 4));
              uVar7 = (ulong)PF_PART4(uStack_4c, 4);
            }
            else {
              puVar4[0x1f] = (ulong)(uint)uStack_4c;
            }
            puVar4[0x21] = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          puVar4[0x23] = puVar4[0x21];
          return puVar4;
        }
        return puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = (ulong *)recovered_1000130c(0x340);
  if (puVar4 == (ulong *)0x0) {
    DAT_1000c058 = 0xc;
    return (ulong *)0x0;
  }
  recovered_100015c8(puVar4,0,0x340);
  *(undefined4 *)puVar4 = uVar8;
  *(bool *)((long)puVar4 + 0x124) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  recovered_10002bbc((byte *)((long)puVar4 + 4),0xf1,&DAT_100054ea);
  return puVar4;
}

#undef DAT_100054ea
#undef DAT_1000c058
#undef str_1000558c
#undef str_10005599
#undef str_100055a7
#undef uStack_4c

#undef UINT_82010834
#define UINT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034bc
 */

undefined8 recovered_100034bc(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003df4(0x34);
  if ((bVar1) && (uVar2 = UINT_82010834, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100034fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000350c
 */

undefined8 recovered_1000350c(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
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
      lVar2 = recovered_10001390(*(undefined8 *)(param_1 + 0x100),uVar4);
      if (lVar2 == 0) {
        DAT_1000c058 = 0xc;
        *(undefined1 *)(param_1 + 0x129) = 1;
        uVar3 = 0;
      }
      else {
        *(ulong *)(param_1 + 0x110) = uVar4;
        uVar3 = 1;
        *(long *)(param_1 + 0xf8) = lVar2;
        *(long *)(param_1 + 0x100) = lVar2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_1000c058

#undef DAT_100054ea
#define DAT_100054ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
#undef str_1000558c
#define str_1000558c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
#undef str_10005599
#define str_10005599 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1edU)))
#undef str_100055a7
#define str_100055a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#define uStack_4c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003594
 */

/* WARNING: Type propagation algorithm not settling */

ulong * recovered_10003594(byte *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_100035c8(param_3);
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_1000c058 = 0x16;
    return (ulong *)0x0;
  }
  iVar2 = recovered_100018dc(param_1,(byte *)str_1000558c);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100018dc(param_1,(byte *)str_10005599);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100018dc(param_1,(byte *)str_100055a7);
      if (iVar3 != 0) {
        puVar4 = (ulong *)recovered_1000130c(0x340);
        if (puVar4 == (ulong *)0x0) {
          DAT_1000c058 = 0xc;
          return (ulong *)0x0;
        }
        recovered_100015c8(puVar4,0,0x340);
        *(undefined4 *)puVar4 = 0;
        pcVar5 = recovered_1000195c(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x124) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
        recovered_10002bbc((byte *)((long)puVar4 + 4),0xf1,&DAT_100054ea);
        recovered_100015c8(&uStack_4c,0,0xc);
        uVar6 = recovered_100034bc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_10003464:
            recovered_10001350(puVar4);
            return (ulong *)0x0;
          }
        }
        else {
          pcVar5 = recovered_1000195c(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)PF_PART4(uStack_4c, 4), PF_PART4(uStack_4c, 4) != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000350c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003464;
              recovered_100013dc((undefined1 *)puVar4[0x20],(undefined1 *)(ulong)(uint)uStack_4c,
                                 (ulong)PF_PART4(uStack_4c, 4));
              uVar7 = (ulong)PF_PART4(uStack_4c, 4);
            }
            else {
              puVar4[0x1f] = (ulong)(uint)uStack_4c;
            }
            puVar4[0x21] = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          puVar4[0x23] = puVar4[0x21];
          return puVar4;
        }
        return puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = (ulong *)recovered_1000130c(0x340);
  if (puVar4 == (ulong *)0x0) {
    DAT_1000c058 = 0xc;
    return (ulong *)0x0;
  }
  recovered_100015c8(puVar4,0,0x340);
  *(undefined4 *)puVar4 = uVar8;
  *(bool *)((long)puVar4 + 0x124) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  recovered_10002bbc((byte *)((long)puVar4 + 4),0xf1,&DAT_100054ea);
  return puVar4;
}

#undef DAT_100054ea
#undef DAT_1000c058
#undef str_1000558c
#undef str_10005599
#undef str_100055a7
#undef uStack_4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c8
 */

undefined8 recovered_100035c8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100039ec(param_1);
    if (*(long *)(param_1 + 0x40) != 0) {
      recovered_10001350(*(long *)(param_1 + 0x40));
    }
    recovered_10001350(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000360c
 */

ulong recovered_1000360c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint128 auVar2;
  uint128 auVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  uVar8 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      if ((*param_4 == 0) && (param_4[0x48] == -1)) {
        uVar6 = *(ulong *)(param_4 + 0x46);
        uVar8 = *(ulong *)(param_4 + 0x42) - uVar6;
        if (*(ulong *)(param_4 + 0x42) < uVar6 || uVar8 == 0) {
          uVar8 = 0;
          *(undefined1 *)(param_4 + 0x4a) = 1;
        }
        else {
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_2;
          PF_PART8(auVar3, 8) = 0;
          PF_PART8(auVar3, 0) = param_3;
          uVar7 = param_3 * param_2;
          if (SUB168(auVar2 * auVar3,8) != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          uVar1 = uVar8;
          if (uVar7 <= uVar8) {
            uVar1 = uVar7;
          }
          recovered_100013dc(param_1,(undefined1 *)(*(long *)(param_4 + 0x3e) + uVar6),uVar1);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar1;
          if (uVar8 < uVar7) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar1 / param_2;
          }
        }
      }
      else {
        uVar8 = 0;
        while( true ) {
          uVar6 = param_2;
          puVar4 = param_1;
          if (uVar8 == param_3) break;
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar5 = recovered_10003740(param_4);
            if (uVar5 == 0xffffffff) {
              return uVar8;
            }
            *puVar4 = (char)uVar5;
            puVar4 = puVar4 + 1;
          }
          param_1 = param_1 + param_2;
          uVar8 = uVar8 + 1;
        }
        uVar8 = param_3;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}


#undef DAT_100054c4
#define DAT_100054c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

uint recovered_10003740(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] == '\x01') {
    uVar2 = param_1[0x48];
    if (uVar2 != 0xffffffff) {
      param_1[0x48] = -1;
      return uVar2;
    }
    if (*param_1 == 1) {
      uVar5 = *(ulong *)(param_1 + 0xce);
      if (uVar5 < *(ulong *)(param_1 + 0xcc)) {
LAB_100037d8:
        *(ulong *)(param_1 + 0xce) = uVar5 + 1;
        return (uint)*(byte *)((long)param_1 + uVar5 + 0x12a);
      }
      lVar1 = (long)param_1 + 0x12a;
      bVar3 = recovered_100031f8(lVar1,0x1fe,&DAT_100054c4,0);
      if (bVar3) {
        lVar4 = recovered_100018b8(lVar1);
        uVar5 = 0;
        *(long *)(param_1 + 0xcc) = lVar4 + 1;
        *(undefined1 *)(lVar1 + lVar4) = 10;
        *(undefined1 *)(lVar1 + *(long *)(param_1 + 0xcc)) = 0;
        goto LAB_100037d8;
      }
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x46);
      if (uVar5 < *(ulong *)(param_1 + 0x42)) {
        *(ulong *)(param_1 + 0x46) = uVar5 + 1;
        return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return 0xffffffff;
}

#undef DAT_100054c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003824
 */

long recovered_10003824(char *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10002fcc(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10003924;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_1000350c((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_100015c8((ulong *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_100013dc((undefined1 *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10003924;
    }
  }
  param_3 = 0;
LAB_10003924:
  return param_3;
}


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003934
 */

undefined8 recovered_10003934(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
        if (param_3 != 2) goto LAB_10003940;
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
LAB_10003940:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c8
 */

undefined8 recovered_100039c8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039ec
 */

undefined8 recovered_100039ec(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003bc8(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x10003a60
 */

undefined1 recovered_10003a60(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x128);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a6c
 */

undefined1 recovered_10003a6c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x129);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a78
 */

void recovered_10003a78(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a8c
 */

uint recovered_10003a8c(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

undefined8 recovered_10003ab0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10003ae8(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c058

#undef UINT_8201083c
#define UINT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae8
 */

undefined8 recovered_10003ae8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003df4(0x3c);
  if ((bVar1) && (uVar2 = UINT_8201083c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_8201083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6cacU)))
#define uStack_2c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b2c
 */

undefined8 recovered_10003b2c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_100015c8(&uStack_2c,0,0xc);
    uVar1 = recovered_100034bc(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10003bc8(param_2,(ulong)(uint)uStack_2c,(ulong)PF_PART4(uStack_2c, 4));
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003ae8(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c058
#undef uStack_2c

#undef UINT_82010838
#define UINT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bc8
 */

undefined8 recovered_10003bc8(char *param_1,void *param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10003df4(0x38);
  if ((bVar1) && (uVar2 = UINT_82010838, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,(uint)param_3);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010838

#define uStack_3c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c28
 */

undefined8 recovered_10003c28(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_100015c8(&uStack_3c,0,0xc);
    uVar2 = recovered_100034bc(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = PF_PART4(uStack_3c, 4);
      if (PF_PART4(uStack_3c, 4) < 2) {
        uVar1 = 1;
      }
      puVar3 = (undefined1 *)recovered_1000130c((ulong)uVar1);
      uVar2 = 0;
      if (puVar3 != (undefined1 *)0x0) {
        if (PF_PART4(uStack_3c, 4) == 0) {
          uVar4 = 0;
        }
        else {
          recovered_100013dc(puVar3,(undefined1 *)(ulong)(uint)uStack_3c,(ulong)PF_PART4(uStack_3c, 4));
          uVar4 = (ulong)PF_PART4(uStack_3c, 4);
        }
        *param_2 = puVar3;
        *param_3 = uVar4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cc8
 */

bool recovered_10003cc8(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003bc8(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf4
 */

undefined8 recovered_10003cf4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf8
 */

void recovered_10003cf8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cfc
 */

undefined8 recovered_10003cfc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d00
 */

undefined8 recovered_10003d00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d04
 */

undefined8 recovered_10003d04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d08
 */

int recovered_10003d08(byte *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_1000551b
#define DAT_1000551b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16fU)))
#undef str_1000551e
#define str_1000551e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x172U)))
#undef str_1000552b
#define str_1000552b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17fU)))
#undef str_10005535
#define str_10005535 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x189U)))
#undef str_10005549
#define str_10005549 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19dU)))
#undef str_10005557
#define str_10005557 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abU)))
#undef str_10005569
#define str_10005569 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_10005575
#define str_10005575 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_10005586
#define str_10005586 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d38
 */

char * recovered_10003d38(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000551b;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003d64_caseD_1;
  case 2:
    return str_1000551e;
  case 5:
    return str_1000552b;
  case 9:
    return str_10005535;
  case 0xc:
    return str_10005549;
  case 0xd:
    return str_10005557;
  default:
    if (param_1 == 0x11) {
      return str_10005569;
    }
    if (param_1 == 0x16) {
      return str_10005575;
    }
switchD_10003d64_caseD_1:
    return str_10005586;
  }
}

#undef DAT_1000551b
#undef str_1000551e
#undef str_1000552b
#undef str_10005535
#undef str_10005549
#undef str_10005557
#undef str_10005569
#undef str_10005575
#undef str_10005586

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd8
 */

undefined8 recovered_10003dd8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ddc
 */

undefined8 recovered_10003ddc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6d4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

void recovered_10003de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0f8 = DAT_1000c0f8 + 1;
  return;
}

#undef DAT_1000c0f8

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df4
 */

bool recovered_10003df4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003ec0(void *context,...){
 __asm__ volatile("ldr x16, [x0, #0x50]\nmov sp, x16\nldr x29, [x0, #0x40]\nldr x16, [x0, #0x48]\nbr x16");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003ed4(void *context){__asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret \nbrk #1");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003f30(void *context,int value){__asm__ volatile("cbnz w1, Lpf_context_10003f38\nmov w1, #1\nLpf_context_10003f38:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret \nbrk #1");}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f94
 */

void recovered_10003f94(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_100012f8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003fa4);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fa8
 */

undefined8 recovered_10003fa8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb0
 */

void recovered_10003fb0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003fc0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6f5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fc0
 */

long recovered_10003fc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100041c4(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  *(long *)(lVar1 + 0x10) = DAT_1000c308;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_1000c308 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_1000c308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fec
 */

long recovered_10003fec(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  lVar1 = recovered_1000130c(param_1);
  if (lVar1 == 0) {
    recovered_100012f8();
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000401c
 */

long recovered_1000401c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  lVar1 = recovered_1000130c(param_1);
  if (lVar1 == 0) {
    recovered_100012f8();
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

void recovered_10004020(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004038
 */

void recovered_10004038(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004050
 */

void recovered_10004050(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004068
 */

void recovered_10004068(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

undefined8 recovered_10004080(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004088
 */

uint recovered_10004088(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004098
 */

void recovered_10004098(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a8
 */

void recovered_100040a8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000c318
#define DAT_1000c318 (*(int *)(((uintptr_t)pf_module_state + 0x6f6cU)))
#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6f74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040ac
 */

long recovered_100040ac(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;

  if (param_1 < 2) {
    param_1 = 1;
  }
  lVar1 = recovered_1000130c(param_1 + 0x38);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  for (lVar3 = 0; param_1 + 0x38 != lVar3; lVar3 = lVar3 + 1) {
    *(undefined1 *)(lVar1 + lVar3) = 0;
  }
  iVar2 = DAT_1000c318;
  do {
    DAT_1000c318 = 1;
    if (1 < iVar2 + 1U) {
      DAT_1000c318 = iVar2 + 1;
    }
    plVar4 = &DAT_1000c320;
    do {
      lVar3 = *plVar4;
      if (lVar3 == 0) {
        *(int *)(lVar1 + 0x30) = DAT_1000c318;
        *(long *)(lVar1 + 0x18) = DAT_1000c320;
        DAT_1000c320 = lVar1;
        return lVar1 + 0x38;
      }
      plVar4 = (long *)(lVar3 + 0x18);
      iVar2 = DAT_1000c318;
    } while (*(int *)(lVar3 + 0x30) != DAT_1000c318);
  } while( true );
}

#undef DAT_1000c318
#undef DAT_1000c320

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004154
 */

void recovered_10004154(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  if (param_1 == 0) {
    return;
  }
  recovered_10004184(param_1 + -0x38);
  bVar2 = recovered_10002e34(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1 + -0x38);
    return;
  }
  return;
}

#undef UINT_82010850

#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6f74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004184
 */

void recovered_10004184(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  long lVar3;

  if (param_1 != 0) {
    puVar2 = &DAT_1000c320;
    lVar1 = DAT_1000c320;
    if (DAT_1000c320 != param_1) {
      do {
        lVar3 = lVar1;
        if (lVar3 == 0) {
          return;
        }
        lVar1 = *(long *)(lVar3 + 0x18);
      } while (*(long *)(lVar3 + 0x18) != param_1);
      puVar2 = (undefined8 *)(lVar3 + 0x18);
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

#undef DAT_1000c320

#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6f74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c4
 */

long recovered_100041c4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = &DAT_1000c320;
  while ((lVar2 = *plVar1, lVar2 != 0 && lVar2 != param_1 &&
         (*(int *)(lVar2 + 0x30) != (int)param_1))) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  return lVar2;
}

#undef DAT_1000c320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f4
 */

long recovered_100041f4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_1000c308
#define DAT_1000c308 (*(void * *)(((uintptr_t)pf_module_state + 0x6f5cU)))
#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041fc
 */

void recovered_100041fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  void *ptr;
  bool bVar3;

  ptr = DAT_1000c308;
  if (DAT_1000c308 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000c308 + 0x10);
    DAT_1000c308 = *(void **)((long)DAT_1000c308 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)((long)ptr + 0x34) & 1) == 0) {
      if (*(code **)((long)ptr + 8) != (code *)0x0) {
        (**(code **)((long)ptr + 8))((long)ptr + 0x38);
      }
      recovered_10004184((long)ptr);
      bVar3 = recovered_10002e34(0x50);
      if ((bVar3) && (uVar2 = UINT_82010850, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)uVar2)(ptr);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c308
#undef UINT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000425c
 */

void recovered_1000425c(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000427c((undefined8 *)(param_1 + -0x38));
}


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6f64U)))
#define local_30 (*(undefined2 *)(pf_stack_frame + 16))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define cStack_2e (*(char *)(pf_stack_frame + 18))
#define uStack_2d (*(undefined1 *)(pf_stack_frame + 19))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000427c
 */

void recovered_1000427c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c310;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_100042dc;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10004870((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[4] = puVar2;
  param_1[5] = CONCAT44(local_28,uStack_2c);
  recovered_10004394(param_1);
LAB_100042dc:
                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}

#undef DAT_1000c310
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6f5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

void recovered_100042e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c308;
  if (DAT_1000c308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  *(undefined1 *)((long)DAT_1000c308 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000427c(puVar1);
}

#undef DAT_1000c308

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6f64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004310
 */

void recovered_10004310(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c310;
  DAT_1000c310 = param_1;
  return;
}

#undef DAT_1000c310

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6f64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004324
 */

void recovered_10004324(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c310;
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

#undef DAT_1000c310

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004350
 */

void recovered_10004350(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000427c(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000435c
 */

void recovered_1000435c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6f64U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004368
 */

undefined8 recovered_10004368(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long extraout_x0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_100041c4(param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  if (DAT_1000c310 != (long *)0x0) {
    DAT_1000c310 = (long *)*DAT_1000c310;
  }
  puVar2 = (undefined8 *)recovered_10004394(puVar2);
  plVar3 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003f94();
    }
    if (plVar3 == (long *)puVar2[4]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10004870((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10004428;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10004428:
  recovered_10003ec0((long)plVar3);
  recovered_10004368(extraout_x0);
  return 0;
}

#undef DAT_1000c310
#undef uStack_50
#undef uStack_48

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x6f64U)))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004394
 */

undefined8 recovered_10004394(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long extraout_x0;
  long *plVar2;

  plVar2 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003f94();
    }
    if (plVar2 == (long *)param_1[4]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10004870((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10004428;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x2c);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10004428:
  recovered_10003ec0((long)plVar2);
  recovered_10004368(extraout_x0);
  return 0;
}

#undef DAT_1000c310
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004430
 */

undefined8 recovered_10004430(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004368(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000443c
 */

undefined8 recovered_1000443c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004444
 */

void recovered_10004444(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004450
 */

long recovered_10004450(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10004490(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

bool recovered_10004490(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10004514:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10004514;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10004514;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x6d04U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000451c
 */

void recovered_1000451c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004520
 */

undefined8 recovered_10004520(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004528
 */

bool recovered_10004528(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004538
 */

bool recovered_10004538(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

bool recovered_10004570(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000458c
 */

bool recovered_1000458c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a4
 */

bool recovered_100045a4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045bc
 */

bool recovered_100045bc(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d4
 */

bool recovered_100045d4(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10005428
#define DAT_10005428 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10005430
#define DAT_10005430 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045ec
 */

uint128 recovered_100045ec(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (NAN(param_1)) {
    dVar4 = param_1;
  }
  else if (param_1 <= DAT_10005428) {
    dVar4 = 0.0;
    if (DAT_10005430 <= param_1) {
      iVar2 = 0;
      for (; 0.5 < param_1; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      for (; param_1 < -0.5; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        dVar5 = dVar5 * (param_1 / dVar6);
        dVar4 = dVar4 + dVar5;
        dVar6 = dVar6 + 1.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = INFINITY;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
  return auVar1;
}

#undef DAT_10005428
#undef DAT_10005430

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046ac
 */

void recovered_100046ac(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100045ec((double)param_1);
  return;
}


#undef DAT_10005428
#define DAT_10005428 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10005430
#define DAT_10005430 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046c8
 */

uint128 recovered_100046c8(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (NAN(param_1)) {
    dVar4 = param_1;
  }
  else if (param_1 <= DAT_10005428) {
    dVar4 = 0.0;
    if (DAT_10005430 <= param_1) {
      iVar2 = 0;
      for (; 0.5 < param_1; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      for (; param_1 < -0.5; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        dVar5 = dVar5 * (param_1 / dVar6);
        dVar4 = dVar4 + dVar5;
        dVar6 = dVar6 + 1.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = INFINITY;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
  return auVar1;
}

#undef DAT_10005428
#undef DAT_10005430

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046cc
 */

uint128 recovered_100046cc(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = (double)param_1 - (double)param_2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046dc
 */

uint128 recovered_100046dc(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001c3c(param_1);
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
 * Address: 0x10004728
 */

long recovered_10004728(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10004768;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10004768:
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
      goto LAB_100047ec;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100047ec;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100047ec;
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
LAB_100047ec:
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
 * Address: 0x1000486c
 */

long recovered_1000486c(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10004768;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10004768:
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
      goto LAB_100047ec;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100047ec;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100047ec;
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
LAB_100047ec:
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

#undef DAT_10005448
#define DAT_10005448 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

undefined8 recovered_10004870(long param_1,long *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

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
      recovered_10004a48((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004b3c(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004b3c(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004b3c(&local_68);
        uVar5 = recovered_10004b3c(&local_68);
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
            uVar5 = recovered_10004b98(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004b98(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10005448 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004a48((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10004490(param_2,(long *)puVar6);
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

#undef DAT_10005448
#undef local_68
#undef pbStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a48
 */

ulong * recovered_10004a48(uint param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    puVar1 = (ulong *)recovered_10004b70(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10004b00;
  case 1:
    puVar1 = (ulong *)recovered_10004b3c(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004b70(pbVar5,2);
    goto LAB_10004afc;
  case 3:
    puVar1 = (ulong *)recovered_10004b70(pbVar5,4);
    goto LAB_10004ac4;
  default:
    goto switchD_10004a90_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004b98(param_2);
    break;
  case 10:
    uVar3 = recovered_10004b70(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004afc:
    pbVar4 = pbVar5 + 2;
LAB_10004b00:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004b70(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004ac4:
    pbVar4 = pbVar5 + 4;
    goto LAB_10004b00;
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
switchD_10004a90_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b3c
 */

ulong recovered_10004b3c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10004b70
 */

ulong recovered_10004b70(byte *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10004b98
 */

ulong recovered_10004b98(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_100055b5
#define DAT_100055b5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef UINT_82010828
#define UINT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c18
 */

undefined8 recovered_10004c18(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  if (param_1 == 0) {
    return 0;
  }
  recovered_10004c3c(param_1);
  bVar2 = recovered_10005350(0x28);
  if ((bVar2) && (uVar1 = UINT_82010828, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(&DAT_100055b5);
    return uVar3;
  }
  return 0;
}

#undef DAT_100055b5
#undef UINT_82010828

#undef UINT_82010828
#define UINT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c3c
 */

undefined8 recovered_10004c3c(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10005350(0x28);
  if ((bVar1) && (uVar2 = UINT_82010828, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010828

#undef UINT_82010898
#define UINT_82010898 (*(uint *)(0x82010898U))
#define local_160 (*(byte (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c88
 */

/* WARNING: Type propagation algorithm not settling */

ulong recovered_10004c88(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar9;
  byte *pbVar8;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  bVar3 = *param_1;
  if ((0x19 < bVar3 - 0x41U) &&
     (uVar6 = bVar3 - 0x61U, (bVar3 != 0x5f && 0x18 < uVar6) && (bVar3 == 0x5f || uVar6 != 0x19))) {
    return 0;
  }
  pbVar9 = param_1 + 1;
  while( true ) {
    pbVar8 = pbVar9 + 1;
    bVar2 = *pbVar9;
    if (bVar2 == 0) break;
    pbVar9 = pbVar8;
    if ((0x19 < (bVar2 & 0xffffffdf) - 0x41) && (bVar2 != 0x5f && 9 < bVar2 - 0x30U)) {
      return 0;
    }
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  lVar10 = 0;
  while (bVar3 != 0) {
    if (lVar10 == 0x13b) {
      return 0;
    }
    local_160[lVar10] = bVar3;
    lVar4 = lVar10 + 1;
    lVar10 = lVar10 + 1;
    bVar3 = param_1[lVar4];
  }
  (local_160 + lVar10)[0] = 0x20;
  (local_160 + lVar10)[1] = 0x3d;
  iVar7 = (int)lVar10;
  uVar13 = (ulong)(iVar7 + 3);
  local_160[lVar10 + 2] = 0x20;
  uVar6 = iVar7 + 4;
  uVar11 = 0x22;
  while( true ) {
    local_160[uVar13] = (byte)uVar11;
    bVar3 = *param_2;
    uVar11 = (ulong)bVar3;
    uVar13 = (ulong)uVar6;
    if (bVar3 == 0) break;
    if (0x13f < uVar6 + 3) {
      return 0;
    }
    if (bVar3 < 0x30 && (1L << (uVar11 & 0x3f) & 0x800400002600U) != 0) {
      local_160[uVar13] = 0x2f;
      uVar12 = 0x74;
      if (bVar3 != 9) {
        uVar12 = (uint)bVar3;
      }
      if (bVar3 == 0xd) {
        uVar12 = 0x72;
      }
      uVar1 = 0x6e;
      if (bVar3 != 10) {
        uVar1 = uVar12;
      }
      uVar11 = (ulong)uVar1;
      uVar13 = (ulong)(uVar6 + 1);
    }
    param_2 = param_2 + 1;
    uVar6 = (int)uVar13 + 1;
  }
  if ((uVar6 - iVar7) - 3 < 0xff) {
    local_160[uVar13] = 0x22;
    local_160[uVar6 + 1] = 0;
    bVar5 = recovered_10005350(0x98);
    if (!bVar5) {
      return (ulong)bVar5;
    }
    uVar6 = UINT_82010898;
    if (uVar6 != 0) {
      uVar6 = (*(code *)(ulong)uVar6)((char *)local_160,(char *)0x0,0);
      return (ulong)uVar6;
    }
  }
  return 0;
}

#undef UINT_82010898
#undef local_160

#undef UINT_82010a04
#define UINT_82010a04 (*(uint *)(0x82010a04U))
#define local_58 (*(undefined8 *)(pf_stack_frame + 24))
#define local_50 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 48))
#define local_48 (*(long *)(pf_stack_frame + 40))
#define local_38 (*(undefined4 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e2c
 */

bool recovered_10004e2c(long param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;

  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  *param_2 = 0;
  if (param_1 != 0) {
    bVar1 = recovered_10005350(0x204);
    if (!bVar1) {
      return bVar1;
    }
    uVar2 = UINT_82010a04;
    if (uVar2 != 0) {
      uVar2 = (*(code *)(ulong)uVar2)((char *)param_1,&local_58);
      if (uVar2 == 0) {
        return false;
      }
      if ((int)local_58 != 3) {
        return false;
      }
      if (local_48 == 0) {
        return false;
      }
      uVar3 = 0;
      do {
        if (*(char *)(local_48 + uVar3) == '\0') {
          for (lVar4 = 0; uVar3 + 1 != lVar4; lVar4 = lVar4 + 1) {
            param_2[lVar4] = *(undefined1 *)(local_48 + lVar4);
          }
          return true;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
      return false;
    }
  }
  return false;
}

#undef UINT_82010a04
#undef local_58
#undef local_50
#undef uStack_40
#undef local_48
#undef local_38

#define uStack_5f (*(undefined7 *)(pf_stack_frame + 113))
#define local_b4 (*(uint *)(pf_stack_frame + 28))
#define local_b0 (*(byte * *)(pf_stack_frame + 32))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_90 (*(byte * *)(pf_stack_frame + 64))
#define local_80 (*(undefined8 *)(pf_stack_frame + 80))
#define local_58 (*(char * *)(pf_stack_frame + 120))
#define pbStack_a8 (*(byte * *)(pf_stack_frame + 40))
#define pbStack_88 (*(byte * *)(pf_stack_frame + 72))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 96))
#define pbStack_68 (*(byte * *)(pf_stack_frame + 104))
#define bStack_60 (*(byte *)(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f1c
 */

ulong recovered_10004f1c(char *param_1,byte *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  byte **ppbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;

  local_90 = (byte *)0x0;
  pbStack_88 = (byte *)0x0;
  local_80 = 0;
  local_b0 = (byte *)0x0;
  pbStack_a8 = (byte *)0x0;
  local_a0 = 0;
  local_b4 = 0;
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  *param_3 = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (*param_2 != 0) {
    bVar6 = false;
    uVar13 = 0;
    pbVar9 = param_2;
    do {
      uVar12 = (uint)*pbVar9;
      uVar5 = uVar12 - 0x30;
      if (9 < uVar5) {
        uVar15 = uVar13 - 1;
        if (uVar12 != 0) {
          uVar15 = 0xffffffffffffffff;
        }
        uVar14 = 0xffffffffffffffff;
        if (bVar6) {
          uVar14 = uVar15;
        }
        bVar6 = bVar6 && (uVar12 == 0 && uVar13 != 0);
        goto LAB_10005000;
      }
      pbVar9 = pbVar9 + 1;
      bVar6 = true;
      bVar1 = uVar13 <= ~((ulong)uVar5 & 0xff) / 10;
      uVar13 = uVar13 * 10 + (ulong)(byte)uVar5;
    } while (bVar1);
    bVar6 = false;
    uVar14 = 0xffffffffffffffff;
LAB_10005000:
    uVar13 = 0;
    uVar15 = 0xffffffffffffffff;
    local_58 = param_1;
    do {
      uVar8 = recovered_1000518c((long *)&local_58,(long *)&pbStack_70,&local_b4);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (uVar15 == 0xffffffffffffffff) {
        if ((pbStack_70 != (byte *)0x0) && (pbStack_68 != (byte *)0x0)) {
          pbVar9 = param_2;
          pbVar10 = pbStack_70;
          do {
            if (pbStack_68 <= pbVar10) {
              uVar15 = uVar13;
              if (*pbVar9 != 0) {
                uVar15 = 0xffffffffffffffff;
              }
              goto LAB_10005090;
            }
            pbVar11 = pbVar10 + 1;
            bVar3 = *pbVar10;
            if (((bStack_60 & 1) != 0) && (bVar3 == 0x22 && pbVar11 < pbStack_68)) {
              pbVar2 = pbVar10 + 2;
              if (pbVar10[1] != 0x22) {
                pbVar2 = pbVar11;
              }
              pbVar11 = pbVar2;
            }
            pbVar10 = pbVar11;
            bVar4 = *pbVar9;
            if (bVar4 != 0) {
              pbVar9 = pbVar9 + 1;
            }
          } while (bVar4 != 0 && bVar3 == bVar4);
        }
        uVar15 = 0xffffffffffffffff;
      }
LAB_10005090:
      bVar1 = false;
      if (uVar13 == uVar14) {
        bVar1 = bVar6;
      }
      if (bVar1) {
        pbStack_88 = pbStack_68;
        local_90 = pbStack_70;
        local_80 = CONCAT71(uStack_5f,bStack_60);
      }
      uVar13 = uVar13 + 1;
    } while (local_b4 == 1);
    if (local_b4 == 0) {
      bVar1 = false;
      if (uVar14 < uVar13) {
        bVar1 = bVar6;
      }
      if (bVar1) {
        ppbVar7 = &local_90;
LAB_1000515c:
        bVar6 = recovered_100052c0(ppbVar7,param_3,param_4);
        return (ulong)bVar6;
      }
    }
    else if (uVar15 != 0xffffffffffffffff) {
      do {
        uVar14 = recovered_1000518c((long *)&local_58,(long *)&pbStack_70,&local_b4);
        if ((int)uVar14 == 0) {
          return uVar14;
        }
        if (uVar15 == 0) {
          pbStack_a8 = pbStack_68;
          local_b0 = pbStack_70;
          local_a0 = CONCAT71(uStack_5f,bStack_60);
        }
        uVar13 = uVar13 - 1;
        uVar15 = uVar15 - 1;
      } while (local_b4 == 1);
      if (uVar13 != 0) {
        return 0;
      }
      if (local_b0 == (byte *)0x0) {
        return 0;
      }
      if ((local_b4 != 2) || (*local_58 == '\0')) {
        ppbVar7 = &local_b0;
        goto LAB_1000515c;
      }
    }
  }
  return 0;
}

#undef uStack_5f
#undef local_b4
#undef local_b0
#undef local_a0
#undef local_90
#undef local_80
#undef local_58
#undef pbStack_a8
#undef pbStack_88
#undef pbStack_70
#undef pbStack_68
#undef bStack_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000518c
 */

undefined8 recovered_1000518c(long *param_1,long *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;

  if (param_1 == (long *)0x0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)*param_1;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  *param_2 = (long)pbVar2;
  param_2[1] = (long)pbVar2;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_3 = 0;
  bVar1 = *pbVar2;
  if (bVar1 != 0x22) {
    do {
      uVar5 = (uint)bVar1;
      if (uVar5 < 0x2d) {
        if ((1L << ((ulong)uVar5 & 0x3f) & 0x100000002401U) != 0) {
          param_2[1] = (long)pbVar2;
          bVar1 = *pbVar2;
          goto LAB_10005268;
        }
        if ((ulong)uVar5 == 0x22) {
          return 0;
        }
      }
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
    } while( true );
  }
  *(undefined1 *)(param_2 + 2) = 1;
  pbVar3 = pbVar2 + 1;
  do {
    if (*pbVar3 == 0x22) {
      if (pbVar3[1] != 0x22) {
        *param_2 = (long)(pbVar2 + 1);
        param_2[1] = (long)pbVar3;
        pbVar2 = pbVar3 + 1;
        bVar1 = *pbVar2;
        if (0x2c < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100000002401U) == 0) {
          return 0;
        }
LAB_10005268:
        if (bVar1 == 10) {
          pbVar2 = pbVar2 + 1;
        }
        else {
          if (bVar1 != 0xd) {
            uVar5 = (uint)(bVar1 == 0x2c);
            if (bVar1 == 0x2c) {
              pbVar2 = pbVar2 + 1;
            }
            goto LAB_100052ac;
          }
          pbVar3 = pbVar2 + 1;
          if (*pbVar3 == 10) {
            pbVar3 = pbVar2 + 2;
          }
          pbVar2 = pbVar3;
        }
        uVar5 = 2;
LAB_100052ac:
        *param_1 = (long)pbVar2;
        *param_3 = uVar5;
        return 1;
      }
      lVar4 = 2;
    }
    else {
      if (*pbVar3 == 0) {
        return 0;
      }
      lVar4 = 1;
    }
    pbVar3 = pbVar3 + lVar4;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c0
 */

bool recovered_100052c0(undefined8 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;

  if (((param_1 == (undefined8 *)0x0) || (pcVar4 = (char *)*param_1, pcVar4 == (char *)0x0)) ||
     (pcVar5 = (char *)param_1[1], pcVar5 == (char *)0x0)) {
    bVar2 = false;
  }
  else {
    uVar3 = 0;
    while (bVar2 = pcVar5 <= pcVar4, !bVar2) {
      pcVar6 = pcVar4 + 1;
      cVar1 = *pcVar4;
      if ((*(char *)(param_1 + 2) == '\x01') && (cVar1 == '\"' && pcVar6 < pcVar5)) {
        pcVar5 = pcVar4 + 2;
        if (pcVar4[1] != '\"') {
          pcVar5 = pcVar6;
        }
        pcVar6 = pcVar5;
      }
      pcVar4 = pcVar6;
      if ((ulong)param_3 <= uVar3 + 1) goto LAB_10005344;
      param_2[uVar3] = cVar1;
      uVar3 = uVar3 + 1;
      pcVar5 = (char *)param_1[1];
    }
    param_2 = param_2 + uVar3;
LAB_10005344:
    *param_2 = 0;
  }
  return bVar2;
}


#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005350
 */

bool recovered_10005350(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808
