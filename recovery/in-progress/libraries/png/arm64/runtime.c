/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4da8U)))
#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
#undef _DAT_100100e0
#define _DAT_100100e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4da8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005b8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  _DAT_100100e0 = 0;
  recovered_1000061c();
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e0
#undef DAT_100100e4
#undef _DAT_100100e0

#undef DAT_100100e4
#define DAT_100100e4 (*(int *)(((uintptr_t)pf_module_state + 0x4dacU)))
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
      iVar3 = DAT_100100e4;
      cVar1 = '\x01';
      { __typeof__(DAT_100100e4) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_100100e4),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_100100e4 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_100100e4

#undef DAT_100100e0
#define DAT_100100e0 (*(byte *)(((uintptr_t)pf_module_state + 0x4da8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
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
#define auStack_458 (*(ulong (*)[130])(pf_stack_frame + 24))
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
  if ((DAT_100100e0 & 1) == 0) {
    DAT_100100e8 = 0;
    DAT_100100f0 = 0;
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
    if (DAT_100100e8 == 0) {
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
    if (DAT_100100f0 == 0) {
      DAT_100100f0 = DAT_100100e8;
    }
    DAT_100100e0 = 1;
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0
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

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008a0
 */

bool recovered_100008a0(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_100005e4();
  bVar1 = recovered_100008dc(param_1,param_2,param_3);
  DAT_100100e4 = 0;
  return bVar1;
}

#undef DAT_100100e4

#undef DAT_100100e1
#define DAT_100100e1 (*(byte *)(((uintptr_t)pf_module_state + 0x4da9U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
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
    if ((DAT_100100e1 & 1) == 0) {
      DAT_100100e1 = 1;
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
          DAT_100100e1 = 0;
          return false;
        }
        if ((ulong)plVar9 >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)plVar9 >> 0x1a < 0x21) &&
             (recovered_10002ce8((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            DAT_100100e1 = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x100009dc;
        }
        else {
          recovered_10002ce8((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            DAT_100100e1 = 0;
            return false;
          }
joined_r0x100009dc:
          if ((local_61 & 1) == 0) {
            DAT_100100e1 = 0;
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
            DAT_100100e1 = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_100100e8;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && plVar9 < plVar7) {
            DAT_100100e1 = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_100100e8;
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
      if (DAT_100100f0 == 0) {
        DAT_100100f0 = DAT_100100e8;
      }
      DAT_100100e1 = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_100100e1
#undef DAT_100100e8
#undef DAT_100100f0
#undef uStack_70
#undef local_61

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
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
  DAT_100100e4 = 0;
  return bVar1;
}

#undef DAT_100100e4
#undef local_20
#undef uStack_18

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_100100e4 = 0;
  return uVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  DAT_100100e4 = 0;
  return lVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_100100e4 = 0;
  return uVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
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
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  DAT_100100e4 = 0;
  return lVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c5c
 */

ulong * recovered_10000c5c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_100005e4();
  puVar1 = recovered_10000c88(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_100100e4 = 0;
  return puVar1;
}

#undef DAT_100100e4

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4db8U)))
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
    puVar4 = DAT_100100e8;
    puVar3 = DAT_100100e8;
    if (DAT_100100f0 != (ulong *)0x0) {
      puVar3 = DAT_100100f0;
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
                        DAT_100100f0 = DAT_100100e8;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_100100f0 = (ulong *)puVar11[1];
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

#undef DAT_100100e8
#undef DAT_100100f0

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e44
 */

void recovered_10000e44(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  recovered_10000c88(param_1,(ulong *)0x0,param_2);
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
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
  DAT_100100e4 = 0;
  return puVar1;
}

#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec0
 */

void recovered_10000ec0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  recovered_10000ee8(param_1);
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e4

#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4db8U)))
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
    DAT_100100f0 = puVar1;
  }
  return;
}

#undef DAT_100100f0

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dacU)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
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
    DAT_100100e4 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000ee8((long)param_1);
    DAT_100100e4 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_100100e4 = 0;
    return (ulong *)0x0;
  }
  recovered_1000061c();
  uVar7 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar2 = param_1 + -4;
  uVar3 = *puVar2;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7 - 1) {
      DAT_100100e4 = 0;
      return (ulong *)0x0;
    }
    if (uVar3 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar3) {
        DAT_100100e4 = 0;
        return (ulong *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < param_2) {
      DAT_100100e4 = 0;
      return (ulong *)0x0;
    }
    uVar1 = recovered_10002d38(puVar2,uVar7);
    if ((int)uVar1 == 0) {
      DAT_100100e4 = 0;
      return param_1;
    }
    DAT_100100e4 = 0;
    DAT_100100f0 = param_1[-3];
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
      if (0xffffffffffffffdf < uVar4) goto LAB_1001c124;
    }
    else if (0xffffffffffffffb0 < param_2) goto LAB_1001c124;
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
        DAT_100100f0 = param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_100100e4 = 0;
      return param_1;
    }
  }
  else {
LAB_1001c124:
    puVar2 = recovered_10000c88(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_100013dc(puVar2,param_1,uVar3);
      recovered_10000ee8((long)param_1);
      DAT_100100e4 = 0;
      return puVar2;
    }
  }
  DAT_100100e4 = 0;
  return (ulong *)0x0;
}

#undef DAT_100100e4
#undef DAT_100100f0

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

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return param_1 >> 0x3f;
    }
    iVar3 = (int)((ulong)param_1 >> 0x20);
    uVar1 = iVar3 >> (param_2 & 0x1f);
    uVar2 = (iVar3 << 1) << (ulong)(~param_2 & 0x1f) | (uint)param_1 >> (ulong)(param_2 & 0x1f);
    uVar4 = uVar1;
    if (0x1f < param_2) {
      uVar4 = iVar3 >> 0x1f;
      uVar2 = uVar1;
    }
    param_1 = CONCAT44(uVar4,uVar2);
  }
  return param_1;
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


#define lStack_18 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000124c
 */

long recovered_1000124c(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  lStack_18 = 0;
  recovered_100011ec(param_1,param_2,&lStack_18);
  return lStack_18;
}

#undef lStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000126c
 */

long recovered_1000126c(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

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
  uVar2 = recovered_100011ec(uVar1,uVar2,(long *)0x0);
  uVar1 = -uVar2;
  if (-1 < (long)(param_2 ^ param_1)) {
    uVar1 = uVar2;
  }
  return uVar1;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ac
 */

long recovered_100012ac(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

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
  recovered_100011ec(uVar1,uVar2,&lStack_28);
  lVar3 = -lStack_28;
  if (-1 < param_1) {
    lVar3 = lStack_28;
  }
  return lVar3;
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


#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000130c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1000130c(ulonglong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *pvVar2;

  bVar1 = recovered_10002e34(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)(ulong)_DAT_8201084c)(size);
    return pvVar2;
  }
  return (void *)0x0;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001350(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10002e34(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(pointer);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_82010854
#define DAT_82010854 (*(uint8_t *)(0x82010854U))
#undef _DAT_82010854
#define _DAT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10001390(void *pointer,ulonglong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *pvVar2;

  bVar1 = recovered_10002e34(0x54);
  if ((bVar1) && (_DAT_82010854 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*(code *)(ulong)_DAT_82010854)(pointer,size);
    return pvVar2;
  }
  return (void *)0x0;
}

#undef DAT_82010854
#undef _DAT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013dc
 */

void * recovered_100013dc(void *dst,void *src,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((bytes < 0x10) || ((((uint)src ^ (uint)dst) & 7) != 0)) {
    puVar3 = dst;
  }
  else {
    for (puVar3 = dst; (bytes != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)src;
      src = (undefined1 *)((long)src + 1);
      bytes = bytes - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < bytes + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)src + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    bytes = bytes + lVar4;
    while (7 < bytes) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)src + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      bytes = bytes - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    src = (void *)((long)src + (lVar6 - lVar4));
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *puVar3 = *(undefined1 *)src;
    src = (undefined1 *)((long)src + 1);
    puVar3 = puVar3 + 1;
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b4
 */

void * recovered_100014b4(void *dst,void *src,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((dst != src) && (bytes != 0)) {
    puVar2 = (undefined1 *)((long)src + bytes);
    if ((dst >= src && dst <= puVar2) && (dst < src || puVar2 != dst)) {
      puVar3 = (undefined1 *)((long)dst + bytes);
      uVar1 = bytes;
      if ((0xf < bytes) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (bytes != 0 && (((int)dst + (int)bytes & 7U) != 0)); bytes = bytes - 1) {
          *(undefined1 *)((long)dst + (bytes - 1)) = *(undefined1 *)((long)src + (bytes - 1));
        }
        for (; 0x1f < bytes; bytes = bytes - 0x20) {
          *(undefined8 *)((long)dst + (bytes - 8)) = *(undefined8 *)((long)src + (bytes - 8));
          *(undefined8 *)((long)dst + (bytes - 0x10)) = *(undefined8 *)((long)src + (bytes - 0x10));
          *(undefined8 *)((long)dst + (bytes - 0x18)) = *(undefined8 *)((long)src + (bytes - 0x18));
          *(undefined8 *)((long)dst + (bytes - 0x20)) = *(undefined8 *)((long)src + (bytes - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = bytes; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)dst + bytes + lVar4 + -8) =
               *(undefined8 *)((long)src + bytes + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)dst + lVar4 + bytes);
        puVar2 = (undefined1 *)((long)src + lVar4 + bytes);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      dst = recovered_100013dc(dst,src,bytes);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c8
 */

void * recovered_100015c8(void *dst,int byte,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = dst;
  if (0xf < bytes) {
    uVar3 = (ulong)(byte & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = dst; (bytes != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)byte;
      bytes = bytes - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < bytes; bytes = bytes - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < bytes; bytes = bytes - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *(char *)puVar2 = (char)byte;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001660
 */

void recovered_10001660(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (0xf < (ulong)param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (undefined1 *)((long)param_1 + 1);
    }
    for (; 0x1f < (ulong)param_2; param_2 = param_2 - 0x20) {
      *(ulong *)param_1 = uVar2;
      *(ulong *)((long)param_1 + 8) = uVar2;
      *(ulong *)((long)param_1 + 0x10) = uVar2;
      *(ulong *)((long)param_1 + 0x18) = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 0x20);
    }
    for (; 7 < (ulong)param_2; param_2 = param_2 - 8) {
      *(ulong *)param_1 = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 8);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001664
 */

void recovered_10001664(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (0xf < (ulong)param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (undefined1 *)((long)param_1 + 1);
    }
    for (; 0x1f < (ulong)param_2; param_2 = param_2 - 0x20) {
      *(ulong *)param_1 = uVar2;
      *(ulong *)((long)param_1 + 8) = uVar2;
      *(ulong *)((long)param_1 + 0x10) = uVar2;
      *(ulong *)((long)param_1 + 0x18) = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 0x20);
    }
    for (; 7 < (ulong)param_2; param_2 = param_2 - 8) {
      *(ulong *)param_1 = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 8);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((long)param_1 + 1);
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

int recovered_1000168c(byte *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < (ulong)param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
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
    for (param_3 = uVar5; 7 < (ulong)param_3; param_3 = param_3 - 8) {
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

uchar recovered_10001820(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001830
 */

uchar recovered_10001830(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001840
 */

uchar recovered_10001840(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001854
 */

uchar recovered_10001854(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

uchar recovered_10001870(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001880
 */

uchar recovered_10001880(int param_1)

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

ulong recovered_100018b8(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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

long recovered_10001920(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_100018b8((char *)param_1);
    dst = recovered_1000130c(uVar1 + 1);
    pvVar2 = (void *)0x0;
    if (dst != (void *)0x0) {
      pvVar2 = recovered_100013dc(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return (long)pvVar2;
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


#undef DAT_1000b774
#define DAT_1000b774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a80
 */

undefined * recovered_10001a80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b774;
}

#undef DAT_1000b774

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a8c
 */

undefined ** recovered_10001a8c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[8])(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a98
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001a98(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_100015c8(auStack_38,0,0x18);
  bVar1 = recovered_10002e34(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return local_30;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
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

double recovered_10001bb8(double left,double right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (double)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bdc
 */

double recovered_10001bdc(double left,double right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001c3c
 */

double recovered_10001c3c(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001c58
 */

double recovered_10001c58(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001c84
 */

double recovered_10001c84(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_1000b338
#define DAT_1000b338 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

double recovered_10001cc0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    return (double)iVar1 * DAT_1000b338 + dVar3 * 2.0;
  }
  return -INFINITY;
}

#undef DAT_1000b338

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


#undef DAT_1000b340
#define DAT_1000b340 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d80
 */

double recovered_10001d80(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001dd4(value);
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / 120.0 + (dVar1 * dVar1 * dVar1) / DAT_1000b340);
}

#undef DAT_1000b340

#undef DAT_1000b348
#define DAT_1000b348 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000b350
#define DAT_1000b350 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000b358
#define DAT_1000b358 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000b360
#define DAT_1000b360 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

void recovered_10001dd4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_1000b348 < param_1; param_1 = param_1 + DAT_1000b360) {
  }
  for (; param_1 < DAT_1000b350; param_1 = param_1 + DAT_1000b358) {
  }
  return;
}

#undef DAT_1000b348
#undef DAT_1000b350
#undef DAT_1000b358
#undef DAT_1000b360

#undef DAT_1000b368
#define DAT_1000b368 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e18
 */

double recovered_10001e18(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_10001dd4(value);
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_1000b368;
}

#undef DAT_1000b368

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e64
 */

double recovered_10001e64(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (0.0 <= value) {
    dVar1 = value;
  }
  return dVar1;
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

float recovered_10001f70(float left,float right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (right == 0.0) {
    return 0.0;
  }
  return left - right * (float)(int)(left / right);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa4
 */

float recovered_10001fa4(int *in_x0,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001b44((double)param_2,in_x0);
  return (float)(*(double *)((uint8_t *)&(auVar1)+0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fbc
 */

float recovered_10001fbc(uint in_w0,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001b10((double)param_2,in_w0);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd4
 */

float recovered_10001fd4(float left,float right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001bdc((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff0
 */

float recovered_10001ff0(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002014
 */

float recovered_10002014(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001c58((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000202c
 */

double recovered_1000202c(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002054
 */

float recovered_10002054(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000202c((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206c
 */

float recovered_1000206c(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001c84((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002084
 */

float recovered_10002084(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001cc0((double)param_1);
  return (float)dVar1;
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

float recovered_100020b0(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001d80((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c8
 */

float recovered_100020c8(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001e18((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020e0
 */

float recovered_100020e0(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
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

double recovered_10002348(char *text,char **end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
        dVar11 = recovered_10001b10(dVar11,iVar8 * iVar5);
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
 * Address: 0x100024d8
 */

float recovered_100024d8(char *text,char **end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10002348(text,end);
  return (float)dVar1;
}


#undef str_1000b776
#define str_1000b776 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43eU)))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f0
 */

int recovered_100024f0(char *out,ulong capacity,char *format,void *args)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  double *pdVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;

  local_8c = 0;
  local_88 = capacity;
  local_80 = (byte *)out;
  pdStack_78 = args;
  if (capacity != 0) {
    *out = '\0';
  }
LAB_10002560:
  bVar10 = *format;
  if (bVar10 != 0x25) {
    if (bVar10 == 0) {
      if (capacity != 0) {
        *local_80 = 0;
      }
      return local_8c;
    }
    pbVar9 = (byte *)format;
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = bVar10;
      goto LAB_1000258c;
    }
    goto LAB_10002590;
  }
  pbVar9 = (byte *)(format + 1);
  bVar10 = *pbVar9;
  if (bVar10 != 0x25) {
    pbVar9 = (byte *)(format + 2);
    do {
      switch((uintptr_t)(bVar10)) {
      case 0x2a:
        goto code_r0x10002620;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002608;
      default:
        if ((bVar10 != 0x20) && (bVar10 != 0x23)) goto LAB_10002608;
      case 0x2b:
      case 0x2d:
      case 0x30:
        bVar10 = *pbVar9;
        format = format + 1;
        pbVar9 = pbVar9 + 1;
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
    pbVar9 = (byte *)(format + 1);
    bVar10 = *pbVar9;
    format = (char *)pbVar9;
  } while (bVar10 - 0x30U < 10);
LAB_10002630:
  if (bVar10 == 0x2e) {
    pbVar14 = pbVar9 + 1;
    bVar10 = *pbVar14;
    if (bVar10 == 0x2a) {
      uVar8 = *(uint *)pdStack_78;
      bVar10 = pbVar9[2];
      pbVar9 = pbVar9 + 2;
      pdStack_78 = pdStack_78 + 1;
    }
    else {
      uVar8 = 0;
      while( true ) {
        bVar2 = bVar10 - 0x30U;
        pbVar9 = pbVar14;
        if (9 < bVar2) break;
        iVar13 = uVar8 * 10;
        bVar1 = (int)uVar8 <= (int)((bVar2 ^ 0x7ffffffe) / 10);
        uVar8 = 0x7fffffff;
        if (bVar1) {
          uVar8 = iVar13 + (uint)bVar2;
        }
        pbVar14 = pbVar14 + 1;
        bVar10 = *pbVar14;
      }
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (bVar10 == 0x4c) {
    pbVar9 = pbVar9 + 1;
    uVar11 = 8;
    bVar1 = true;
  }
  else if (bVar10 == 0x7a) {
    bVar1 = false;
    pbVar9 = pbVar9 + 1;
    uVar11 = 5;
  }
  else if (bVar10 == 0x6a) {
    bVar1 = false;
    pbVar9 = pbVar9 + 1;
    uVar11 = 7;
  }
  else if (bVar10 == 0x6c) {
    bVar4 = pbVar9[1] == 0x6c;
    uVar11 = 3;
    if (bVar4) {
      uVar11 = 4;
    }
LAB_1000271c:
    bVar1 = false;
    pbVar14 = pbVar9 + 1;
    if (bVar4) {
      pbVar14 = pbVar9 + 2;
    }
    pbVar9 = pbVar14;
  }
  else if (bVar10 == 0x74) {
    bVar1 = false;
    pbVar9 = pbVar9 + 1;
    uVar11 = 6;
  }
  else {
    if (bVar10 == 0x68) {
      bVar4 = pbVar9[1] == 0x68;
      uVar11 = 1;
      if (!bVar4) {
        uVar11 = 2;
      }
      goto LAB_1000271c;
    }
    bVar1 = false;
    uVar11 = 0;
  }
  bVar10 = *pbVar9;
  switch((uintptr_t)(bVar10)) {
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
    switch((uintptr_t)(uVar11)) {
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
    uVar8 = SUB84(dVar5,0);
    uVar6 = 10;
code_r0x100028e0:
    uVar7 = 0;
LAB_100028e4:
    recovered_10002ad0((long *)&local_80,&local_88,&local_8c,uVar8,uVar6,uVar7);
    goto LAB_100028e8;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x445U));
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
      recovered_10002ad0((long *)&local_80,&local_88,&local_8c,(int)dVar5,10,0);
      pbVar14 = local_80;
      if (1 < local_88) {
        pbVar14 = local_80 + 1;
        *local_80 = 0x2e;
        local_88 = local_88 - 1;
      }
      dVar5 = dVar5 - (double)(int)dVar5;
      iVar13 = 6;
      do {
        iVar17 = (int)(dVar5 * 10.0);
        local_80 = pbVar14;
        if (1 < local_88) {
          local_80 = pbVar14 + 1;
          *pbVar14 = (char)iVar17 + 0x30;
          local_88 = local_88 - 1;
        }
        dVar5 = dVar5 * 10.0 - (double)iVar17;
        iVar13 = iVar13 + -1;
        pbVar14 = local_80;
      } while (iVar13 != 0);
      local_8c = local_8c + 7;
    }
    goto LAB_100028e8;
  default:
    switch((uintptr_t)(bVar10)) {
    case 0x70:
      uVar8 = SUB84(*pdStack_78,0);
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x473U));
      uVar6 = 0x10;
      goto code_r0x100028e0;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar14 = (byte *)str_1000b776;
      if ((byte *)(uintptr_t)pf_double_bits(*pdStack_78) != (byte *)0x0) {
        pbVar14 = (byte *)(uintptr_t)pf_double_bits(*pdStack_78);
      }
      uVar12 = local_88;
      pbVar15 = local_80;
      while( true ) {
        pdStack_78 = pdVar3;
        if ((uVar8 == 0) || (*pbVar14 == 0)) break;
        pbVar16 = pbVar15;
        if (1 < uVar12) {
          pbVar16 = pbVar15 + 1;
          *pbVar15 = *pbVar14;
          uVar12 = uVar12 - 1;
          local_88 = uVar12;
          local_80 = pbVar16;
        }
        uVar8 = uVar8 - (0 < (int)uVar8);
        pbVar14 = pbVar14 + 1;
        pbVar15 = pbVar16;
        local_8c = local_8c + 1;
      }
      goto LAB_100028e8;
    case 0x75:
      switch((uintptr_t)(uVar11)) {
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
      switch((uintptr_t)(uVar11)) {
      case 1:
        uVar8 = (uint)*(byte *)pdStack_78;
        break;
      case 2:
        uVar8 = (uint)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        uVar8 = SUB84(*pdStack_78,0);
        break;
      default:
        uVar8 = *(uint *)pdStack_78;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar7 = (uint)(*pbVar9 == 0x58);
      uVar6 = 0x10;
      goto LAB_100028e4;
    default:
      if (bVar10 == 0x49) goto code_r0x1000283c;
      if (bVar10 == 0x58) goto code_r0x100027f8;
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
  format = (char *)(pbVar9 + 1);
  goto LAB_10002560;
code_r0x10002620:
  pdStack_78 = pdStack_78 + 1;
  bVar10 = *pbVar9;
  goto LAB_10002630;
}

#undef str_1000b776
#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

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


#undef str_1000b789
#define str_1000b789 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_1000b79a
#define str_1000b79a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x462U)))
#define acStack_80 (*(char (*)[64])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

void recovered_10002ad0(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  pcVar1 = str_1000b789;
  if (param_6 == 0) {
    pcVar1 = str_1000b79a;
  }
  uVar6 = (ulong)param_5;
  uVar5 = (ulong)param_4;
  lVar3 = 0;
  do {
    lVar7 = lVar3;
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar5 / uVar6;
    }
    acStack_80[lVar7] = pcVar1[uVar5 - uVar2 * uVar6];
    bVar4 = uVar6 <= uVar5;
    uVar5 = uVar2;
    lVar3 = lVar7 + 1;
  } while (bVar4);
  for (; lVar7 != -1; lVar7 = lVar7 + -1) {
    recovered_10002a94(param_1,param_2,param_3,acStack_80[lVar7]);
  }
  return;
}

#undef str_1000b789
#undef str_1000b79a
#undef acStack_80

#undef str_1000b776
#define str_1000b776 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

void recovered_10002b70(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_1000b776;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002a94(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1000b776

#define uStack0000000000000000 (*(undefined1 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

int recovered_10002bbc(char *out,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100024f0(out,capacity,format,&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4da8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4db8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be4
 */

void recovered_10002be4(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      puVar5 = (undefined1 *)*param_3;
      plVar3[2] = (long)puVar5;
      *(undefined1 *)(plVar3 + 3) = 1;
      puVar2 = &DAT_100100e0;
      if (DAT_100100e8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_100100f0 == (long *)0x0) {
        DAT_100100f0 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4da8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4db8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c68
 */

void recovered_10002c68(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;

  if (((!CARRY8(param_1,param_2)) && ((ulong)param_1 < 0xfffffffffffffff1)) &&
     (param_3 != (ulong *)0x0)) {
    plVar2 = (long *)(param_1 + 0xfU & 0xfffffffffffffff0);
    uVar3 = param_2 - ((long)plVar2 - param_1);
    if (((ulong)((long)plVar2 - param_1) <= param_2 && uVar3 != 0) &&
       (uVar3 = uVar3 & 0xfffffffffffffff0, 0x30 < uVar3)) {
      *plVar2 = uVar3 - 0x20;
      plVar2[1] = 0;
      puVar4 = (undefined1 *)*param_3;
      plVar2[2] = (long)puVar4;
      *(undefined1 *)(plVar2 + 3) = 1;
      puVar1 = &DAT_100100e0;
      if (DAT_100100e8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_100100f0 == (long *)0x0) {
        DAT_100100f0 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0

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


#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4db8U)))
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
      if (DAT_100100f0 == puVar2) {
        DAT_100100f0 = param_1;
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

#undef DAT_100100f0

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
 * Address: 0x10002e34
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002e34(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
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
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003084(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_10003084(0);
          }
          pcVar1 = &DAT_10010108 + DAT_10010100;
          DAT_10010100 = DAT_10010100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[512])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003084
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003084(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010100 != 0) || (param_1 != 0)) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_100013dc(local_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003df4(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_10010100 = 0;
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003110(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_100013dc(auStack_230,&DAT_10010108,DAT_10010100);
    uVar2 = DAT_10010100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003df4(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_10010100 = 0;
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[512])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003118
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003118(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010100 != 0) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_100013dc(auStack_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003df4(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_10010100 = 0;
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_1000b7ae
#define DAT_1000b7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#define acStack_160 (*(char (*)[320])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

void recovered_10003120(undefined *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_1000b7ae;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002bbc(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002fcc(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_1000b7ae
#undef acStack_160

#undef DAT_1000b7cc
#define DAT_1000b7cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x494U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003184
 */

/* WARNING: Removing unreachable block (ram,0x100031d0) */

void recovered_10003184(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100031a8(((uintptr_t)pf_module_state+0x479U));
  pcVar4 = &DAT_1000b7cc;
  for (uVar3 = recovered_100018b8(&DAT_1000b7cc); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003084(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_10003084(0);
        }
        pcVar1 = &DAT_10010108 + DAT_10010100;
        DAT_10010100 = DAT_10010100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000b7cc
#undef DAT_10010100
#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a8
 */

void recovered_100031a8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar3 = recovered_100018b8((char *)param_1);
  if (param_1 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003084(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_10003084(0);
          }
          pcVar1 = &DAT_10010108 + DAT_10010100;
          DAT_10010100 = DAT_10010100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108

#undef DAT_1000b7cc
#define DAT_1000b7cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x494U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

/* WARNING: Removing unreachable block (ram,0x100031d0) */

void recovered_100031d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100031a8(((uintptr_t)pf_module_state+0x497U));
  pcVar4 = &DAT_1000b7cc;
  for (uVar3 = recovered_100018b8(&DAT_1000b7cc); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003084(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_10003084(0);
        }
        pcVar1 = &DAT_10010108 + DAT_10010100;
        DAT_10010100 = DAT_10010100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_1000b7cc
#undef DAT_10010100
#undef DAT_10010108

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_100031f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10003118();
    bVar2 = recovered_10003df4(0x44);
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


#undef DAT_1000b7ae
#define DAT_1000b7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
#undef str_1000b850
#define str_1000b850 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#undef str_1000b85d
#define str_1000b85d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
#undef str_1000b86b
#define str_1000b86b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x533U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

undefined4 * recovered_10003280(long param_1,long param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100018dc((byte *)param_1,(byte *)str_1000b850);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100018dc((byte *)param_1,(byte *)str_1000b85d);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100018dc((byte *)param_1,(byte *)str_1000b86b);
      if (iVar3 != 0) {
        puVar4 = recovered_1000130c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_100015c8(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_1000195c((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_1000195c((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_1000195c((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_1000b7ae);
        recovered_100015c8(&uStack_4c,0,0xc);
        uVar6 = recovered_100034bc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_10003464:
            recovered_10001350(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_1000195c((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000350c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003464;
              recovered_100013dc(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000130c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100015c8(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_1000b7ae);
  return puVar4;
}

#undef DAT_1000b7ae
#undef DAT_10010058
#undef str_1000b850
#undef str_1000b85d
#undef str_1000b86b
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100034bc(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003df4(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100034fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000350c
 */

undefined8 recovered_1000350c(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      pvVar2 = recovered_10001390(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_1000b7ae
#define DAT_1000b7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x476U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
#undef str_1000b850
#define str_1000b850 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#undef str_1000b85d
#define str_1000b85d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
#undef str_1000b86b
#define str_1000b86b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x533U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003594
 */

undefined4 * recovered_10003594(long param_1,long param_2,int *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_100035c8(param_3);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100018dc((byte *)param_1,(byte *)str_1000b850);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100018dc((byte *)param_1,(byte *)str_1000b85d);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100018dc((byte *)param_1,(byte *)str_1000b86b);
      if (iVar3 != 0) {
        puVar4 = recovered_1000130c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_100015c8(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_1000195c((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_1000195c((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_1000195c((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_1000b7ae);
        recovered_100015c8(&uStack_4c,0,0xc);
        uVar6 = recovered_100034bc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_10003464:
            recovered_10001350(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_1000195c((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000350c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003464;
              recovered_100013dc(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000130c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100015c8(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_1000b7ae);
  return puVar4;
}

#undef DAT_1000b7ae
#undef DAT_10010058
#undef str_1000b850
#undef str_1000b85d
#undef str_1000b86b
#undef uStack_4c
#undef uStack_48

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
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10001350(*(void **)(param_1 + 0x40));
    }
    recovered_10001350(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000360c
 */

long recovered_1000360c(undefined1 *param_1,long param_2,long param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong bytes;
  uint128 auVar1;
  uint128 auVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;

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
          PF_PART8(auVar1, 8) = 0;
          PF_PART8(auVar1, 0) = param_2;
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_3;
          uVar7 = param_3 * param_2;
          if (SUB168(auVar1 * auVar2,8) != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          bytes = uVar8;
          if (uVar7 <= uVar8) {
            bytes = uVar7;
          }
          recovered_100013dc(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar6),bytes);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + bytes;
          if (uVar8 < uVar7) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = bytes / (ulong)param_2;
          }
        }
      }
      else {
        lVar9 = 0;
        while( true ) {
          lVar3 = param_2;
          puVar4 = param_1;
          if (lVar9 == param_3) break;
          for (; lVar3 != 0; lVar3 = lVar3 + -1) {
            uVar5 = recovered_10003740(param_4);
            if (uVar5 == 0xffffffff) {
              return lVar9;
            }
            *puVar4 = (char)uVar5;
            puVar4 = puVar4 + 1;
          }
          param_1 = param_1 + param_2;
          lVar9 = lVar9 + 1;
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


#undef DAT_1000b788
#define DAT_1000b788 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x450U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

uint recovered_10003740(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  byte bVar2;
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
LAB_100037d8:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100031f8((long)text,0x1fe,&DAT_1000b788,0);
      if ((bVar2 & 1) != 0) {
        uVar3 = recovered_100018b8(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_100037d8;
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

#undef DAT_1000b788

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003824
 */

long recovered_10003824(long param_1,long param_2,long param_3,uint *param_4)

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
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10002fcc((char *)param_1,uVar5);
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
        recovered_100015c8((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_100013dc((void *)(*(long *)(param_4 + 0x40) + uVar3),(void *)param_1,uVar5);
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


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003934
 */

undefined8 recovered_10003934(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  DAT_10010058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c8
 */

undefined8 recovered_100039c8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
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


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

undefined8 recovered_10003ab0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
  }
  else {
    uVar1 = recovered_10003ae8(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10010058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003ae8(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003df4(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b2c
 */

undefined8 recovered_10003b2c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
  }
  else {
    recovered_100015c8(&uStack_2c,0,0xc);
    uVar1 = recovered_100034bc(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010058 = 2;
    }
    else {
      uVar1 = recovered_10003bc8(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003ae8(param_1), (int)uVar1 != 0)) {
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

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bc8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003df4(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010838
#undef _DAT_82010838

#define uStack_3c (*(uint *)(pf_stack_frame + 20))
#define uStack_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c28
 */

undefined8 recovered_10003c28(long param_1,long *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *dst;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_100015c8(&uStack_3c,0,0xc);
    uVar2 = recovered_100034bc(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      dst = recovered_1000130c((ulong)uVar1);
      uVar2 = 0;
      if (dst != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_100013dc(dst,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10003cc8
 */

uchar recovered_10003cc8(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return '\0';
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


#undef DAT_1000b7df
#define DAT_1000b7df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a7U)))
#undef str_1000b7e2
#define str_1000b7e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aaU)))
#undef str_1000b7ef
#define str_1000b7ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b7U)))
#undef str_1000b7f9
#define str_1000b7f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c1U)))
#undef str_1000b80d
#define str_1000b80d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d5U)))
#undef str_1000b81b
#define str_1000b81b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e3U)))
#undef str_1000b82d
#define str_1000b82d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_1000b839
#define str_1000b839 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x501U)))
#undef str_1000b84a
#define str_1000b84a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d38
 */

char * recovered_10003d38(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000b7df;
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
    return str_1000b7e2;
  case 5:
    return str_1000b7ef;
  case 9:
    return str_1000b7f9;
  case 0xc:
    return str_1000b80d;
  case 0xd:
    return str_1000b81b;
  default:
    if (param_1 == 0x11) {
      return str_1000b82d;
    }
    if (param_1 == 0x16) {
      return str_1000b839;
    }
switchD_10003d64_caseD_1:
    return str_1000b84a;
  }
}

#undef DAT_1000b7df
#undef str_1000b7e2
#undef str_1000b7ef
#undef str_1000b7f9
#undef str_1000b80d
#undef str_1000b81b
#undef str_1000b82d
#undef str_1000b839
#undef str_1000b84a

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


#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4dc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

void recovered_10003de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100100f8 = DAT_100100f8 + 1;
  return;
}

#undef DAT_100100f8

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
 * Address: 0x10003df4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003df4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003ec0
 */

void recovered_10003ec0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10003ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003ed4(void *context){__asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003f30(void *context,int value){__asm__ volatile("cbnz w1,1f\nmov w1, #1\n1:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret ");}


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


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd0U)))
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
  *(long *)(lVar1 + 0x10) = DAT_10010308;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_10010308 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_10010308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fec
 */

void * recovered_10003fec(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000130c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000401c
 */

void * recovered_1000401c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000130c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

void recovered_10004020(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004038
 */

void recovered_10004038(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004050
 */

void recovered_10004050(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(pointer);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004068
 */

void recovered_10004068(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(pointer);
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


#undef DAT_10010318
#define DAT_10010318 (*(int *)(((uintptr_t)pf_module_state + 0x4fe0U)))
#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040ac
 */

undefined1 * recovered_100040ac(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  long *plVar4;
  long lVar5;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000130c(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  for (uVar3 = 0; param_1 + 0x38 != uVar3; uVar3 = uVar3 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar3) = 0;
  }
  iVar2 = DAT_10010318;
  do {
    DAT_10010318 = 1;
    if (1 < iVar2 + 1U) {
      DAT_10010318 = iVar2 + 1;
    }
    plVar4 = (long *)&DAT_10010320;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        *(int *)((long)pvVar1 + 0x30) = DAT_10010318;
        *(void **)((long)pvVar1 + 0x18) = DAT_10010320;
        DAT_10010320 = pvVar1;
        return (undefined1 *)((long)pvVar1 + 0x38);
      }
      plVar4 = (long *)(lVar5 + 0x18);
      iVar2 = DAT_10010318;
    } while (*(int *)(lVar5 + 0x30) != DAT_10010318);
  } while( true );
}

#undef DAT_10010318
#undef DAT_10010320

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004154
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004154(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  recovered_10004184(param_1 + -0x38);
  bVar1 = recovered_10002e34(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x38);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fe8U)))
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
    puVar2 = &DAT_10010320;
    lVar1 = DAT_10010320;
    if (DAT_10010320 != param_1) {
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

#undef DAT_10010320

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c4
 */

long recovered_100041c4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = &DAT_10010320;
  while ((lVar2 = *plVar1, lVar2 != 0 && lVar2 != param_1 &&
         (*(int *)(lVar2 + 0x30) != (int)param_1))) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  return lVar2;
}

#undef DAT_10010320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f4
 */

long recovered_100041f4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd0U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10010308;
  if (DAT_10010308 != 0) {
    puVar1 = (undefined8 *)(DAT_10010308 + 0x10);
    DAT_10010308 = *(long *)(DAT_10010308 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x38);
      }
      recovered_10004184(lVar2);
      bVar3 = recovered_10002e34(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010308
#undef DAT_82010850
#undef _DAT_82010850

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


#undef DAT_10010310
#define DAT_10010310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
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

  puVar2 = &DAT_10010310;
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

#undef DAT_10010310
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010308
#define DAT_10010308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

void recovered_100042e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010308;
  if (DAT_10010308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  *(undefined1 *)((long)DAT_10010308 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000427c(puVar1);
}

#undef DAT_10010308

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004310
 */

void recovered_10004310(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010310;
  DAT_10010310 = param_1;
  return;
}

#undef DAT_10010310

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004324
 */

void recovered_10004324(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010310;
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

#undef DAT_10010310

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004350
 */

void recovered_10004350(undefined8 *in_x0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000427c(in_x0);
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


#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004368
 */

undefined8 recovered_10004368(undefined8 *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_100041c4((long)param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  if (DAT_10010310 != (long *)0x0) {
    DAT_10010310 = (long *)*DAT_10010310;
  }
  puVar2 = (undefined8 *)recovered_10004394(puVar2);
  plVar3 = DAT_10010310;
  while( true ) {
    DAT_10010310 = plVar3;
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

#undef DAT_10010310
#undef uStack_50
#undef uStack_48

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004394
 */

undefined8 recovered_10004394(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_10010310;
  while( true ) {
    DAT_10010310 = plVar2;
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

#undef DAT_10010310
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004430
 */

undefined8 recovered_10004430(undefined8 *in_x0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004368(in_x0);
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

  uchar uVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    uVar1 = recovered_10004490(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (uVar1 == '\0') {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

uchar recovered_10004490(long *param_1,long *param_2)

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
      if (*plVar4 == ((uintptr_t)pf_module_state+0x4d78U)) {
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

uchar recovered_10004528(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004538
 */

uchar recovered_10004538(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return '\x01';
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

uchar recovered_10004570(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000458c
 */

uchar recovered_1000458c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_d0;

  return (in_d0 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a4
 */

uchar recovered_100045a4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_s0;

  return (in_s0 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045bc
 */

uchar recovered_100045bc(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_d0;

  return (in_d0 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d4
 */

uchar recovered_100045d4(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_d0;

  return (in_d0 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_1000b3b0
#define DAT_1000b3b0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_1000b3b8
#define DAT_1000b3b8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
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
  else if (param_1 <= DAT_1000b3b0) {
    dVar4 = 0.0;
    if (DAT_1000b3b8 <= param_1) {
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

#undef DAT_1000b3b0
#undef DAT_1000b3b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046ac
 */

void recovered_100046ac(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100045ec((double)param_1);
  return;
}


#undef DAT_1000b3b0
#define DAT_1000b3b0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_1000b3b8
#define DAT_1000b3b8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
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
  else if (param_1 <= DAT_1000b3b0) {
    dVar4 = 0.0;
    if (DAT_1000b3b8 <= param_1) {
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

#undef DAT_1000b3b0
#undef DAT_1000b3b8

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

double recovered_100046dc(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = recovered_10001c3c(value);
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

#undef DAT_1000b3d0
#define DAT_1000b3d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

undefined8 recovered_10004870(long param_1,long *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uchar uVar2;
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
                local_68 = pbVar7 + *(long *)(&DAT_1000b3d0 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004a48((uint)bVar1,(long *)&local_68);
              }
              uVar2 = recovered_10004490(param_2,(long *)puVar6);
              if (uVar2 != '\0') {
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

#undef DAT_1000b3d0
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


#undef DAT_1000b487
#define DAT_1000b487 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef str_1000b879
#define str_1000b879 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x541U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c18
 */

undefined4 recovered_10004c18(byte *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_10004c9c;
  }
  else {
    iVar2 = recovered_1000168c(param_1,&DAT_1000b487,8);
    if (iVar2 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 0x42) && (param_1[1] == 0x4d)) {
    return 2;
  }
  if ((0xd < param_2) && (iVar2 = recovered_1000168c(param_1,(byte *)str_1000b879,9), iVar2 == 0)) {
    return 4;
  }
LAB_10004c9c:
  uVar1 = recovered_10004ccc(param_1,param_2);
  uVar3 = 3;
  if (uVar1 == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_1000b487
#undef str_1000b879

#undef str_1000b890
#define str_1000b890 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ccc
 */

uchar recovered_10004ccc(byte *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;

  if (param_2 < 0x12) {
    return '\0';
  }
  if (((0x19 < param_2) &&
      (iVar5 = recovered_1000168c(param_1 + (param_2 - 0x12),(byte *)str_1000b890,0x11), iVar5 == 0)
      ) && (param_1[param_2 - 1] == 0)) {
    return '\x01';
  }
  bVar1 = param_1[1];
  if (bVar1 < 2) {
    uVar7 = (uint)param_1[2];
    if ((((uVar7 == 0xb || 0xfffffffd < uVar7 - 0xb) || 0xfffffffc < uVar7 - 4) &&
        *(short *)(param_1 + 0xc) != 0) && *(short *)(param_1 + 0xe) != 0) {
      uVar4 = *(ushort *)(param_1 + 5);
      bVar2 = param_1[7];
      bVar3 = param_1[0x10];
      if ((bVar1 != 0) || (uVar4 == 0)) {
        if (bVar1 == 1) {
          if (uVar4 == 0) {
            return '\0';
          }
          if (0x20 < bVar2) {
            return '\0';
          }
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x101018000U) == 0) {
            return '\0';
          }
        }
        uVar8 = (uint)param_1[2];
        uVar7 = uVar8 - 8;
        if (uVar8 < 8) {
          uVar7 = uVar8;
        }
        if (uVar7 == 3) {
          if (bVar3 != 0x10 && bVar3 != 8) {
            return '\0';
          }
        }
        else if (uVar7 == 2) {
          if (0x20 < bVar3) {
            return '\0';
          }
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x101018000U) == 0) {
            return '\0';
          }
        }
        else if ((uVar7 == 1 && bVar3 != 8) && bVar3 != 0x10) {
          return '\0';
        }
        lVar6 = ((ulong)bVar2 + 7 >> 3) * (ulong)uVar4;
        if (bVar1 != 1) {
          lVar6 = 0;
        }
        return (ulong)*param_1 + lVar6 + 0x12 < param_2;
      }
    }
  }
  return '\0';
}

#undef str_1000b890

#undef DAT_1000b438
#define DAT_1000b438 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_1000b487
#define DAT_1000b487 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef DAT_1000b740
#define DAT_1000b740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x408U)))
#undef DAT_1000b886
#define DAT_1000b886 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54eU)))
#undef DAT_1000b88b
#define DAT_1000b88b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x553U)))
#undef DAT_1000b8a2
#define DAT_1000b8a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56aU)))
#undef DAT_1000b8ac
#define DAT_1000b8ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x574U)))
#undef DAT_1000b8b1
#define DAT_1000b8b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x579U)))
#undef DAT_1000b8b6
#define DAT_1000b8b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57eU)))
#undef DAT_1000b8bb
#define DAT_1000b8bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583U)))
#undef DAT_1000b8c0
#define DAT_1000b8c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x588U)))
#undef str_1000b879
#define str_1000b879 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x541U)))
#define lStack_2b0 (*(long *)(pf_stack_frame + 144))
#define uStack_2a0 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_298 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_290 (*(undefined8 *)(pf_stack_frame + 176))
#define uStack_288 (*(undefined8 *)(pf_stack_frame + 184))
#define uStack_280 (*(undefined8 *)(pf_stack_frame + 192))
#define uStack_278 (*(undefined2 *)(pf_stack_frame + 200))
#define uStack_270 (*(undefined8 *)(pf_stack_frame + 208))
#define uStack_268 (*(uint *)(pf_stack_frame + 216))
#define uStack_264 (*(uint *)(pf_stack_frame + 220))
#define uStack_260 (*(uint *)(pf_stack_frame + 224))
#define uStack_25c (*(uint *)(pf_stack_frame + 228))
#define uStack_258 (*(uint *)(pf_stack_frame + 232))
#define bStack_254 (*(byte *)(pf_stack_frame + 236))
#define cStack_253 (*(char *)(pf_stack_frame + 237))
#define bStack_252 (*(byte *)(pf_stack_frame + 238))
#define uStack_251 (*(undefined1 *)(pf_stack_frame + 239))
#define ppvStack_250 (*(void ** *)(pf_stack_frame + 240))
#define lStack_248 (*(long *)(pf_stack_frame + 248))
#define lStack_240 (*(long *)(pf_stack_frame + 256))
#define uStack_238 (*(ulong *)(pf_stack_frame + 264))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 272))
#define puStack_228 (*(ushort * *)(pf_stack_frame + 280))
#define uStack_220 (*(ulong *)(pf_stack_frame + 288))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 296))
#define pvStack_210 (*(void * *)(pf_stack_frame + 304))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 312))
#define uStack_200 (*(undefined8 *)(pf_stack_frame + 320))
#define puStack_1f8 (*(uint * *)(pf_stack_frame + 328))
#define uStack_1f0 (*(ulong *)(pf_stack_frame + 336))
#define uStack_1e8 (*(ulong *)(pf_stack_frame + 344))
#define pvStack_1e0 (*(void * *)(pf_stack_frame + 352))
#define uStack_1d8 (*(undefined8 *)(pf_stack_frame + 360))
#define uStack_1d0 (*(undefined8 *)(pf_stack_frame + 368))
#define uStack_1c8 (*(uint *)(pf_stack_frame + 376))
#define uStack_1c4 (*(undefined4 *)(pf_stack_frame + 380))
#define uStack_1c0 (*(undefined8 *)(pf_stack_frame + 384))
#define pvStack_1b0 (*(void * *)(pf_stack_frame + 400))
#define lStack_1a8 (*(long *)(pf_stack_frame + 408))
#define uStack_1a0 (*(undefined8 *)(pf_stack_frame + 416))
#define uStack_198 (*(ulonglong *)(pf_stack_frame + 424))
#define pppppppuStack_190 (*(uint ******* *)(pf_stack_frame + 432))
#define uStack_188 (*(ulong *)(pf_stack_frame + 440))
#define uStack_180 (*(undefined8 *)(pf_stack_frame + 448))
#define uStack_178 (*(ulong *)(pf_stack_frame + 456))
#define uStack_170 (*(undefined8 *)(pf_stack_frame + 464))
#define uStack_168 (*(ulong *)(pf_stack_frame + 472))
#define uStack_160 (*(ulong *)(pf_stack_frame + 480))
#define uStack_154 (*(uint *)(pf_stack_frame + 492))
#define uStack_150 (*(undefined8 *)(pf_stack_frame + 496))
#define ppvStack_148 (*(void ** *)(pf_stack_frame + 504))
#define uStack_140 (*(undefined8 *)(pf_stack_frame + 512))
#define uStack_138 (*(undefined8 *)(pf_stack_frame + 520))
#define uStack_130 (*(undefined8 *)(pf_stack_frame + 528))
#define uStack_128 (*(uint *)(pf_stack_frame + 536))
#define uStack_124 (*(undefined2 *)(pf_stack_frame + 540))
#define uStack_122 (*(undefined1 *)(pf_stack_frame + 542))
#define uStack_121 (*(undefined1 *)(pf_stack_frame + 543))
#define ppvStack_120 (*(void ** *)(pf_stack_frame + 544))
#define puStack_118 (*(uint * *)(pf_stack_frame + 552))
#define puStack_110 (*(undefined8 * *)(pf_stack_frame + 560))
#define puStack_108 (*(ulong * *)(pf_stack_frame + 568))
#define ppvStack_100 (*(void ** *)(pf_stack_frame + 576))
#define pppvStack_f8 (*(void *** *)(pf_stack_frame + 584))
#define puStack_f0 (*(undefined8 * *)(pf_stack_frame + 592))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 600))
#define pvStack_e0 (*(void * *)(pf_stack_frame + 608))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 616))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 624))
#define puStack_c8 (*(uint * *)(pf_stack_frame + 632))
#define uStack_c0 (*(ulong *)(pf_stack_frame + 640))
#define uStack_b8 (*(ulong *)(pf_stack_frame + 648))
#define pppppppuStack_a8 (*(uint ******* *)(pf_stack_frame + 664))
#define uStack_a0 (*(ulong *)(pf_stack_frame + 672))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 680))
#define uStack_330 (*(ulong *)(pf_stack_frame + 16))
#define uStack_318 (*(ulong *)(pf_stack_frame + 40))
#define uStack_310 (*(ulong *)(pf_stack_frame + 48))
#define uStack_2dc (*(uint *)(pf_stack_frame + 100))
#define lStack_2d0 (*(long *)(pf_stack_frame + 112))
#define uStack_2c8 (*(ulong *)(pf_stack_frame + 120))
#define lStack_2c0 (*(long *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e34
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_10004e34(void *data,ulong length,void *image)

{
  unsigned char pf_stack_frame[864] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint *******pppppppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *dst;
  long lVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;
  float fVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  byte bVar20;
  bool bVar21;
  uchar uVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  uint *puVar30;
  undefined8 *puVar31;
  void *pvVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  undefined1 *puVar37;
  ulong uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  uint *******pppppppuVar47;
  uint *puVar48;
  ulong uVar49;
  ulong uVar50;
  uint ******ppppppuVar51;
  ulong uVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;

  PF_PART4(uStack_138, 0) = 0;
  PF_PART4(uStack_138, 4) = 0;
  uStack_140 = (uint *******)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  PF_PART4(uStack_130, 0) = 0;
  PF_PART4(uStack_130, 4) = 0;
  recovered_10006fe4(image,&uStack_140);
  PF_PART4(uStack_130, 0) = 0;
  PF_PART4(uStack_130, 4) = 0;
  recovered_10004020((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
  if (data == (void *)0x0) {
    return '\0';
  }
  if (length == 0) {
    return '\0';
  }
  uVar23 = recovered_10004c18(data,length);
  switch((uintptr_t)(uVar23)) {
  case 1:
    recovered_1000af00((long *)&pppppppuStack_190,data,(undefined1 *)((long)data + length));
    lStack_240 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    puStack_228 = (ushort *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    pvStack_210 = (void *)0x0;
    puStack_1f8 = (uint *)0x0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    ppvStack_120 = (void **)((ulong)ppvStack_120 & 0xffffffff00000000);
    puStack_110 = (undefined8 *)0x0;
    puStack_118 = (uint *)0x0;
    ppvStack_100 = (void **)0x0;
    puStack_108 = (ulong *)0x0;
    pppvStack_f8 = (void ***)0x0;
    uStack_e8 = 0;
    puStack_f0 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    pvStack_e0 = (void *)0x0;
    puStack_c8 = (uint *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_258 = 0;
    bStack_254 = 0;
    cStack_253 = '\0';
    bStack_252 = 0;
    uStack_251 = uStack_121;
    uStack_260 = 0;
    uStack_25c = 0;
    lStack_248 = 0;
    ppvStack_250 = ppvStack_120;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_270 = (uint *******)0x0;
    recovered_10007c24(&lStack_240,&puStack_110);
    recovered_10007c24(&puStack_228,&pppvStack_f8);
    uStack_208 = 0;
    recovered_10004020(pvStack_210);
    pvStack_210 = pvStack_e0;
    uStack_200 = uStack_d0;
    uStack_208 = uStack_d8;
    pvStack_e0 = (void *)0x0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    recovered_1000a78c((long *)&puStack_1f8);
    recovered_10004020(puStack_1f8);
    puStack_1f8 = puStack_c8;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    puStack_c8 = (uint *)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    recovered_10007c74((long)&uStack_140);
    if ((7 < uStack_188) &&
       (iVar25 = recovered_1000168c((byte *)pppppppuStack_190,&DAT_1000b487,8), iVar25 == 0)) {
      bVar16 = false;
      lVar53 = 8;
LAB_10005230:
      do {
        uVar52 = uStack_188;
        pppppppuVar47 = pppppppuStack_190;
        if (uStack_188 < lVar53 + 0xcU) {
LAB_10005d84:
          if (((bStack_254 != 1) || (!(cStack_253 == '\x01' && lStack_248 != 0))) ||
             (!(uStack_264 != 3 || uStack_238 != 0))) break;
          if (bStack_252 != 1) goto LAB_10005e04;
          if (((int)ppvStack_250 == 0) || (((ulong)ppvStack_250 & 0xffffffff) <= uStack_1f0 - 1))
          break;
          lVar53 = uStack_1f0 * 0x38;
          bVar18 = false;
          puVar30 = puStack_1f8;
          goto LAB_10005dec;
        }
        puVar30 = (uint *)((long)pppppppuStack_190 + lVar53);
        uVar28 = recovered_10009148(puVar30);
        uVar49 = (ulong)uVar28;
        lVar53 = lVar53 + 8;
        if (uVar52 - lVar53 < uVar49 + 4) break;
        pppppppuVar2 = (uint *******)((long)pppppppuVar47 + lVar53);
        uVar26 = recovered_10009148((uint *)((long)pppppppuVar47 + lVar53 + uVar49));
        uVar27 = recovered_1000a69c(0,(byte *)(puVar30 + 1),4);
        if (uVar28 != 0) {
          uVar27 = recovered_1000a69c(uVar27,(byte *)pppppppuVar2,uVar49);
        }
        if (uVar27 != uVar26) break;
        lVar53 = lVar53 + uVar49 + 4;
        if ((bStack_254 & 1) != 0) {
          iVar25 = recovered_1000168c((byte *)(puVar30 + 1),(byte *)((uintptr_t)pf_module_state+0x56fU),4);
          if (iVar25 != 0) {
            iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b8ac,4);
            if (iVar25 != 0) {
              iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b8b1,4);
              if (iVar25 == 0) {
                if (uVar28 == 0) break;
                bVar18 = false;
                if ((0x300 < uVar28) || (uVar28 % 3 != 0)) goto LAB_10004fe4;
                recovered_10009268(&lStack_240,(undefined1 *)pppppppuVar2,
                                   (undefined1 *)((long)pppppppuVar2 + uVar49));
              }
              else {
                iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b8b6,4);
                if (iVar25 == 0) {
                  if (((uVar28 != 2) && (uStack_264 == 0)) || (uVar28 != 6 && uStack_264 == 2))
                  break;
                  if (uStack_264 == 3) {
                    if (uStack_238 / 3 < uVar49) break;
                  }
                  else if (uStack_264 == 4 || uStack_264 == 6) break;
                  recovered_10009268((long *)&puStack_228,(undefined1 *)pppppppuVar2,
                                     (undefined1 *)((long)pppppppuVar2 + uVar49));
                }
                else {
                  iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b8bb,4);
                  if (iVar25 == 0) {
                    bVar16 = true;
                    if (uVar28 != 0) {
                      PF_PART4(uStack_138, 4) = 0;
                      uStack_140 = pppppppuVar2;
                      PF_PART4(uStack_138, 0) = uVar28;
                      recovered_1000a72c((long *)&pvStack_210,&uStack_140);
                      if ((uStack_1f0 != 0) && ((char)puStack_1f8[uStack_1f0 * 0xe + -8] == '\x01'))
                      {
                        recovered_1000a72c((long *)(puStack_1f8 + uStack_1f0 * 0xe + -6),&uStack_140
                                          );
                      }
                      lStack_248 = lStack_248 + uVar49;
                      bVar16 = true;
                    }
                  }
                  else {
                    iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b8c0,4);
                    uVar52 = uStack_1f0;
                    puVar46 = puStack_1f8;
                    if (iVar25 == 0) {
                      if (bStack_252 != 1) break;
                      bVar18 = false;
                      if ((uVar28 < 5) || (uStack_1f0 == 0)) goto LAB_10004fe4;
                      lVar39 = *(long *)(puStack_1f8 + uStack_1f0 * 0xe + -4);
                      if (lVar39 == *(long *)(puStack_1f8 + uStack_1f0 * 0xe + -2)) {
                        uVar49 = 4;
                        if (lVar39 != 0) {
                          uVar49 = lVar39 << 1;
                        }
                        recovered_1000a7e0((long *)(puStack_1f8 + uStack_1f0 * 0xe + -6),uVar49);
                        lVar39 = *(long *)(puVar46 + (uintptr_t)(uintptr_t)uVar52 * 0xe + -4);
                      }
                      plVar1 = (long *)(*(long *)(puVar46 + (uintptr_t)(uintptr_t)uVar52 * 0xe + -6) + lVar39 * 0x10);
                      *plVar1 = (long)((long)pppppppuVar2 + 4);
                      plVar1[1] = (ulong)(uVar28 - 4);
                      *(long *)(puVar46 + (uintptr_t)(uintptr_t)uVar52 * 0xe + -4) =
                           *(long *)(puVar46 + (uintptr_t)(uintptr_t)uVar52 * 0xe + -4) + 1;
                    }
                    else {
                      iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b88b,4);
                      if (iVar25 == 0) {
                        if (uVar28 == 0) {
                          cStack_253 = '\x01';
                          goto LAB_10005d84;
                        }
                        break;
                      }
                      if (((byte)puVar30[1] >> 5 & 1) == 0) break;
                    }
                  }
                }
              }
              goto LAB_10005230;
            }
            if ((uVar28 != 0x1a) || (bStack_252 != 1)) break;
            uVar28 = recovered_10009148((uint *)((long)pppppppuVar2 + 4));
            uVar26 = recovered_10009148((uint *)(pppppppuVar2 + 1));
            uVar27 = recovered_10009148((uint *)((long)pppppppuVar2 + 0xc));
            uVar45 = recovered_10009148((uint *)(pppppppuVar2 + 2));
            bVar18 = uStack_1f0 == 0;
            if ((uVar28 != 0) && (uVar26 != 0)) {
              if ((uVar27 <= (uint)uStack_270) &&
                 (uVar28 <= (uint)uStack_270 - uVar27 && uVar45 <= PF_PART4(uStack_270, 4))) {
                bVar20 = *(byte *)(pppppppuVar2 + 3);
                bVar6 = *(byte *)((long)pppppppuVar2 + 0x19);
                if ((uVar26 <= PF_PART4(uStack_270, 4) - uVar45 && bVar20 < 3) && bVar6 < 2) {
                  if (uStack_1f0 == uStack_1e8) {
                    uVar52 = 4;
                    if (uStack_1f0 != 0) {
                      uVar52 = uStack_1f0 << 1;
                    }
                    if (uStack_1f0 < uVar52) {
                      puVar30 = recovered_10003fec((uintptr_t)(uintptr_t)uVar52 * 0x38);
                      lVar39 = 0;
                      for (uVar49 = 0; uVar49 < uStack_1f0; uVar49 = uVar49 + 1) {
                        puVar3 = (undefined8 *)((long)puVar30 + lVar39);
                        puVar4 = (undefined8 *)((long)puStack_1f8 + lVar39);
                        uVar59 = *(undefined8 *)((long)puVar4 + 0x11);
                        uVar58 = *(undefined8 *)((long)puVar4 + 9);
                        uVar60 = *puVar4;
                        puVar3[1] = puVar4[1];
                        *puVar3 = uVar60;
                        *(undefined8 *)((long)puVar3 + 0x11) = uVar59;
                        *(undefined8 *)((long)puVar3 + 9) = uVar58;
                        puVar31 = puVar4 + 4;
                        puVar3[4] = *puVar31;
                        uVar58 = puVar4[5];
                        puVar3[6] = puVar4[6];
                        puVar3[5] = uVar58;
                        puVar4[5] = 0;
                        puVar4[6] = 0;
                        *puVar31 = 0;
                        recovered_1000a678(puVar31);
                        lVar39 = lVar39 + 0x38;
                      }
                      recovered_10004020(puStack_1f8);
                      puStack_1f8 = puVar30;
                      uStack_1e8 = uVar52;
                    }
                  }
                  puVar46 = puStack_1f8 + uStack_1f0 * 0xe;
                  *puVar46 = uVar28;
                  puVar46[1] = uVar26;
                  puVar46[2] = uVar27;
                  puVar46[3] = uVar45;
                  puVar46[4] = (uint)bVar20;
                  puVar46[5] = (uint)bVar6;
                  *(byte *)(puVar46 + 6) = bVar18 & (bVar16 ^ 0xffU);
                  puVar30 = puVar46 + 8;
                  puVar30[0] = 0;
                  puVar30[1] = 0;
                  puVar46[10] = 0;
                  puVar46[0xb] = 0;
                  puVar46[0xc] = 0;
                  puVar46[0xd] = 0;
                  recovered_1000a7e0((long *)puVar30,0);
                  puVar46[10] = 0;
                  puVar46[0xb] = 0;
                  uStack_1f0 = uStack_1f0 + 1;
                  recovered_10004020((void *)0x0);
                  goto LAB_10005230;
                }
              }
            }
            recovered_10004020((void *)0x0);
            break;
          }
          if ((uVar28 != 8 || bVar16) || ((bStack_252 & 1) != 0)) break;
          bStack_252 = 1;
          uVar28 = recovered_10009148((uint *)pppppppuVar2);
          bVar16 = false;
          ppvStack_250 = (void **)CONCAT44(PF_PART4(ppvStack_250, 4),uVar28);
          goto LAB_10005230;
        }
        iVar25 = recovered_1000168c((byte *)(puVar30 + 1),&DAT_1000b886,4);
        bVar18 = false;
        if ((uVar28 != 0xd) || (iVar25 != 0)) goto LAB_10004fe4;
        uVar28 = recovered_10009148((uint *)pppppppuVar2);
        uStack_270 = (uint *******)CONCAT44(PF_PART4(uStack_270, 4),uVar28);
        uVar26 = recovered_10009148((uint *)((long)pppppppuVar2 + 4));
        bVar18 = false;
        uStack_270 = (uint *******)CONCAT44(uVar26,(uint)uStack_270);
        bVar20 = *(byte *)(pppppppuVar2 + 1);
        uStack_268 = (uint)bVar20;
        bVar6 = *(byte *)((long)pppppppuVar2 + 9);
        uStack_264 = (uint)bVar6;
        uStack_260 = (uint)*(byte *)((long)pppppppuVar2 + 10);
        uStack_25c = (uint)*(byte *)((long)pppppppuVar2 + 0xb);
        uStack_258 = (uint)*(byte *)((long)pppppppuVar2 + 0xc);
        bStack_254 = 1;
        if ((uVar28 == 0) || (uVar26 == 0)) goto LAB_10004fe4;
        bVar21 = false;
        if (uStack_264 < 7) {
          if ((1 << (ulong)(bVar6 & 0x1f) & 0x55U) == 0) {
            if (bVar6 == 3) {
              bVar21 = uStack_268 == 8;
            }
          }
          else {
            bVar21 = true;
            if (bVar20 != 8) {
              bVar21 = bVar20 == 0x10;
            }
          }
        }
        bVar18 = false;
        if ((((!bVar21) || (uStack_260 != 0)) || (uStack_25c != 0)) || (1 < uStack_258))
        goto LAB_10004fe4;
      } while( true );
    }
    bVar18 = false;
    goto LAB_10004fe4;
  case 2:
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_10006fe4(image,&uStack_140);
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_10004020((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
    if (length < 0x1a) {
      return '\0';
    }
    if (*(char *)data != 'B') {
      return '\0';
    }
    if (*(char *)((long)data + 1) != 'M') {
      return '\0';
    }
    uVar52 = (ulong)*(uint *)((long)data + 10);
    uVar28 = *(uint *)((long)data + 0xe);
    if ((uVar28 != 0xc) && (uVar28 < 0x28)) {
      return '\0';
    }
    uVar49 = (ulong)uVar28 + 0xe;
    if (uVar28 == 0xc) {
      uVar24 = 0;
      iVar25 = 0;
      uVar27 = 0;
      uVar26 = (uint)*(ushort *)((long)data + 0x12);
      uVar45 = (uint)*(ushort *)((long)data + 0x14);
      sVar7 = *(short *)((long)data + 0x16);
      uVar8 = *(ushort *)((long)data + 0x18);
    }
    else {
      if (length < uVar28 + 0xe) {
        return '\0';
      }
      uVar26 = *(uint *)((long)data + 0x12);
      if ((int)uVar26 < 1) {
        return '\0';
      }
      uVar27 = *(uint *)((long)data + 0x16);
      if (uVar27 == 0) {
        return '\0';
      }
      uVar45 = -uVar27;
      if (-1 < (int)uVar27) {
        uVar45 = uVar27;
      }
      sVar7 = *(short *)((long)data + 0x1a);
      uVar8 = *(ushort *)((long)data + 0x1c);
      iVar25 = *(int *)((long)data + 0x1e);
      uVar24 = *(uint *)((long)data + 0x2e);
      if ((uVar28 == 0x28) && (iVar25 == 6 || iVar25 == 3)) {
        lVar53 = 0x10;
        if (iVar25 != 6) {
          lVar53 = 0xc;
        }
        uVar49 = lVar53 + 0x36;
      }
      uVar27 = uVar27 >> 0x1f;
    }
    if (sVar7 != 1) {
      return '\0';
    }
    if (uVar26 == 0) {
      return '\0';
    }
    if (uVar45 == 0) {
      return '\0';
    }
    if (length <= uVar52) {
      return '\0';
    }
    if (iVar25 == 0) {
      uVar41 = 0;
      uVar33 = 0;
      uVar40 = 0;
      uVar36 = 0;
    }
    else {
      if (iVar25 != 6 && iVar25 != 3) {
        return '\0';
      }
      if (uVar28 < 0x34) {
        uVar57 = 0x46;
        if (iVar25 != 6) {
          uVar57 = 0x42;
        }
        if (length < uVar57) {
          return '\0';
        }
        uVar33 = *(uint *)((long)data + 0x36);
        uVar40 = *(uint *)((long)data + 0x3a);
        uVar36 = *(uint *)((long)data + 0x3e);
        if (iVar25 != 6) goto LAB_10005bb8;
      }
      else {
        uVar33 = *(uint *)((long)data + 0x36);
        uVar40 = *(uint *)((long)data + 0x3a);
        uVar36 = *(uint *)((long)data + 0x3e);
        if (uVar28 < 0x38) {
LAB_10005bb8:
          uVar41 = 0;
          goto LAB_10005bbc;
        }
      }
      uVar41 = *(uint *)((long)data + 0x42);
    }
LAB_10005bbc:
    bVar18 = uVar8 != 0x10;
    bVar16 = uVar33 != 0;
    bVar21 = uVar40 != 0;
    bVar17 = uVar36 != 0;
    uVar43 = 0x1f;
    if (((bVar18 || bVar16) || bVar21) || bVar17) {
      uVar43 = uVar36;
    }
    uVar36 = 0x3e0;
    if (((bVar18 || bVar16) || bVar21) || bVar17) {
      uVar36 = uVar40;
    }
    uVar40 = 0x7c00;
    if (((bVar18 || bVar16) || bVar21) || bVar17) {
      uVar40 = uVar33;
    }
    if ((((uVar8 == 0x20) && (uVar40 == 0)) && (uVar36 == 0)) && (uVar43 == 0)) {
      uVar40 = 0xff0000;
      uVar36 = 0xff00;
      uVar41 = 0xff000000;
      uVar43 = 0xff;
    }
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    uStack_140 = (uint *******)0x0;
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uVar33 = (uint)uVar8;
    if (uVar8 < 9) {
      uVar9 = 1 << (ulong)(uVar33 & 0x1f);
      if (uVar24 != 0) {
        uVar9 = uVar24;
      }
      lVar53 = 3;
      if (uVar28 != 0xc) {
        lVar53 = 4;
      }
      if (uVar49 <= length && lVar53 * (ulong)uVar9 <= length - uVar49) {
        uVar57 = (ulong)uVar9 * 4;
        uStack_270 = (uint *******)CONCAT71(PF_PART7(uStack_270, 1),0xff);
        recovered_10008b58(&uStack_140,uVar57,(undefined1 *)&uStack_270);
        puVar37 = (undefined1 *)((long)data + uVar49 + 2);
        for (uVar49 = 0; uVar57 != uVar49; uVar49 = uVar49 + 4) {
          *(undefined1 *)((long)uStack_140 + uVar49) = *puVar37;
          *(undefined1 *)((long)uStack_140 + uVar49 + 1) = puVar37[-1];
          *(undefined1 *)((long)uStack_140 + uVar49 + 2) = puVar37[-2];
          puVar37 = puVar37 + lVar53;
        }
        goto LAB_10005cdc;
      }
LAB_10005d6c:
      bVar18 = false;
    }
    else {
LAB_10005cdc:
      bVar18 = false;
      if ((uVar33 < 0x21) && ((1L << ((ulong)(uint)uVar8 & 0x3f) & 0x101010112U) != 0)) {
        uVar49 = (ulong)uVar26 * (ulong)uVar33 + 0x1f >> 3 & 0x3ffffffffffc;
        if ((uVar49 != 0) &&
           ((uVar57 = CONCAT44(0,uVar45), PF_PART8(auVar11, 8) = 0, PF_PART8(auVar11, 0) = uVar49,
            PF_PART8(auVar13, 8) = 0, PF_PART8(auVar13, 0) = uVar57, SUB168(auVar11 * auVar13,8) == 0 &&
            (uVar49 * uVar57 <= length - uVar52)))) {
          uVar34 = uVar26 * uVar57;
          if (uVar34 >> 0x3e == 0) {
            recovered_10008cc4(&uStack_270,uVar34 * 4);
            bVar16 = false;
            lStack_2c0 = 0;
            lVar53 = (ulong)uVar26 * 4;
            for (uVar34 = 0; bVar18 = uVar34 == uVar57, !bVar18; uVar34 = uVar34 + 1) {
              lVar39 = 0;
              uVar38 = 0;
              uVar28 = (uint)uVar34;
              if (uVar27 == 0) {
                uVar28 = uVar45 + ~(uint)uVar34;
              }
              puVar46 = (uint *)((long)data + uVar49 * uVar28 + uVar52);
              puVar37 = (undefined1 *)((long)data + uVar49 * uVar28 + uVar52 + 2);
              puVar30 = puVar46;
              puVar48 = puVar46;
              for (; pppppppuVar47 = uStack_270, lVar53 != lVar39; lVar39 = lVar39 + 4) {
                lVar5 = lStack_2c0 + lVar39;
                if (uVar33 == 1) {
                  uVar50 = (ulong)(*(byte *)((long)puVar46 + (uVar38 >> 3 & 0x1fffffff)) >>
                                   (ulong)(((uint)uVar38 ^ 0xffffffff) & 7) & 1);
LAB_10006298:
                  if (CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138) <= (uVar50 << 2 | 3))
                  goto LAB_100064b0;
                  recovered_100013dc((void *)((long)uStack_270 + lVar5),
                                     (uint *)((long)uStack_140 + (uintptr_t)uVar50 * 4),4);
                }
                else {
                  if (uVar33 == 4) {
                    bVar20 = *(byte *)((long)puVar46 + (uVar38 >> 1 & 0x7fffffff));
                    uVar28 = (uint)(bVar20 >> 4);
                    if ((uVar38 & 1) != 0) {
                      uVar28 = bVar20 & 0xf;
                    }
                    uVar50 = (ulong)uVar28;
                    goto LAB_10006298;
                  }
                  if (uVar33 == 0x18) {
                    *(undefined1 *)((long)uStack_270 + lVar5) = *puVar37;
                    lVar5 = lVar39 + lStack_2c0;
                    *(undefined1 *)((long)uStack_270 + lVar5 + 1) = puVar37[-1];
                    *(undefined1 *)((long)uStack_270 + lVar5 + 2) = puVar37[-2];
                    *(undefined1 *)((long)uStack_270 + lVar5 + 3) = 0xff;
                  }
                  else {
                    if (uVar33 == 8) {
                      uVar50 = (ulong)(byte)*puVar30;
                      goto LAB_10006298;
                    }
                    if (uVar33 == 0x10) {
                      uVar28 = (uint)(ushort)*puVar48;
                    }
                    else {
                      uVar28 = *puVar48;
                    }
                    uVar24 = recovered_10008b60(uVar28,uVar40);
                    *(char *)((long)pppppppuVar47 + lVar5) = (char)uVar24;
                    uVar24 = recovered_10008b60(uVar28,uVar36);
                    lVar5 = lVar39 + lStack_2c0;
                    *(char *)((long)pppppppuVar47 + lVar5 + 1) = (char)uVar24;
                    uVar24 = recovered_10008b60(uVar28,uVar43);
                    *(char *)((long)pppppppuVar47 + lVar5 + 2) = (char)uVar24;
                    if (uVar41 == 0) {
                      uVar28 = 0xff;
                    }
                    else {
                      uVar28 = recovered_10008b60(uVar28,uVar41);
                      uVar28 = uVar28 & 0xff;
                    }
                    *(char *)((long)pppppppuVar47 + lVar5 + 3) = (char)uVar28;
                    bVar16 = (bool)(bVar16 | uVar28 != 0);
                  }
                }
                uVar38 = uVar38 + 1;
                puVar48 = (uint *)((long)puVar48 + (ulong)(uVar8 >> 3));
                puVar30 = (uint *)((long)puVar30 + 1);
                puVar37 = puVar37 + 3;
              }
              lStack_2c0 = lStack_2c0 + lVar53;
            }
            if ((uVar33 == 0x20 && uVar41 != 0) && !bVar16) {
              for (uVar52 = 3; uVar52 < CONCAT44(uStack_264,uStack_268); uVar52 = uVar52 + 4) {
                *(undefined1 *)((long)uStack_270 + uVar52) = 0xff;
              }
            }
            *(uint *)image = uVar26;
            *(uint *)((long)image + 4) = uVar45;
            recovered_10007c24((undefined8 *)((long)image + 8),&uStack_270);
LAB_100064b0:
            uStack_268 = 0;
            uStack_264 = 0;
            recovered_10004020(uStack_270);
            goto LAB_10005d70;
          }
        }
        goto LAB_10005d6c;
      }
    }
LAB_10005d70:
    uStack_138 = (uint *******)0x0;
    pppppppuVar47 = uStack_140;
    goto LAB_100058e8;
  case 3:
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_10006fe4(image,&uStack_140);
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_10004020((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
    uVar22 = recovered_10004ccc(data,length);
    if (uVar22 == '\0') {
      return '\0';
    }
    bVar20 = *(byte *)((long)data + 2);
    pvStack_1b0 = (void *)CONCAT44(PF_PART4(pvStack_1b0, 4),(uint)*(ushort *)((long)data + 3));
    uStack_1c8 = (uint)*(ushort *)((long)data + 5);
    bVar6 = *(byte *)((long)data + 7);
    pvStack_1e0 = (void *)CONCAT44(PF_PART4(pvStack_1e0, 4),(uint)*(ushort *)((long)data + 0xc));
    ppvStack_148 = (void **)CONCAT44(PF_PART4(ppvStack_148, 4),(uint)*(ushort *)((long)data + 0xe));
    uStack_160 = CONCAT44(PF_PART4(uStack_160, 4),(uint)*(byte *)((long)data + 0x10));
    uStack_168 = CONCAT44(PF_PART4(uStack_168, 4),(uint)*(byte *)((long)data + 0x11));
    uVar28 = bVar20 - 8;
    if (bVar20 < 8) {
      uVar28 = (uint)bVar20;
    }
    uStack_178 = CONCAT44(PF_PART4(uStack_178, 4),uVar28);
    uVar52 = (ulong)*(byte *)data + 0x12;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_270 = (uint *******)0x0;
    uVar28 = (uint)*(ushort *)((long)data + 0xc);
    uVar26 = (uint)*(ushort *)((long)data + 0xe);
    if (*(char *)((long)data + 1) == '\x01') {
      uVar57 = (ulong)bVar6 + 7 >> 3;
      uVar49 = uVar57 * uStack_1c8;
      if (uVar52 <= length && uVar49 <= length - uVar52) {
        uStack_140 = (uint *******)CONCAT71(PF_PART7(uStack_140, 1),0xff);
        recovered_10008b58(&uStack_270,(ulong)*(ushort *)((long)data + 5) << 2,
                           (undefined1 *)&uStack_140);
        uVar34 = 0xffffffffffffffff;
        pbVar29 = (byte *)((long)data + uVar52);
        lVar53 = 0;
        do {
          uVar34 = uVar34 + 1;
          if (uStack_1c8 <= uVar34) {
            uVar52 = uVar49 + uVar52;
            uVar28 = (uint)pvStack_1e0;
            uVar26 = (uint)ppvStack_148;
            goto LAB_1000574c;
          }
          uVar38 = recovered_10008d58(pbVar29,(uint)bVar6,(uint)(bVar6 == 0x20) << 3,
                                      (byte *)((long)uStack_270 + lVar53));
          pbVar29 = pbVar29 + uVar57;
          lVar53 = lVar53 + 4;
        } while ((uVar38 & 1) != 0);
      }
LAB_1000575c:
      bVar18 = false;
    }
    else {
LAB_1000574c:
      pppppppuStack_a8 = (uint *******)((ulong)uVar28 * (ulong)uVar26);
      if ((ulong)pppppppuStack_a8 >> 0x3e != 0) goto LAB_1000575c;
      recovered_10008cc4(&uStack_2a0,(long)pppppppuStack_a8 * 4);
      uVar49 = (uStack_160 & 0xffffffff) + 7 >> 3;
      pppppppuStack_190 = (uint *******)0x0;
      uStack_140 = (uint *******)&pppppppuStack_190;
      uStack_138 = (uint *******)&pppppppuStack_a8;
      uStack_130 = &uStack_178;
      uStack_128 = (uint)&uStack_160;
      uStack_124 = (undefined2)((ulong)&uStack_160 >> 0x20);
      uStack_122 = (undefined1)((ulong)&uStack_160 >> 0x30);
      uStack_121 = (undefined1)((ulong)&uStack_160 >> 0x38);
      ppvStack_120 = &pvStack_1b0;
      puStack_118 = &uStack_1c8;
      puStack_110 = &uStack_270;
      puStack_108 = &uStack_168;
      ppvStack_100 = &pvStack_1e0;
      pppvStack_f8 = &ppvStack_148;
      puStack_f0 = &uStack_2a0;
      if (bVar20 < 8) {
        if (((pppppppuStack_a8 == (uint *******)0x0) ||
            (PF_PART8(auVar10, 8) = 0, PF_PART8(auVar10, 0) = pppppppuStack_a8, PF_PART8(auVar12, 8) = 0,
            PF_PART8(auVar12, 0) = uVar49, SUB168(auVar10 * auVar12,8) == 0)) &&
           (uVar52 <= length && (long)pppppppuStack_a8 * uVar49 <= length - uVar52)) {
          pbVar29 = (byte *)((long)data + uVar52);
          pppppppuVar47 = (uint *******)0xffffffffffffffff;
          do {
            pppppppuVar47 = (uint *******)((long)pppppppuVar47 + 1);
            if (pppppppuStack_a8 <= pppppppuVar47) goto LAB_10005b50;
            uVar52 = recovered_10008e30(&uStack_140,pbVar29);
            pbVar29 = pbVar29 + uVar49;
          } while ((uVar52 & 1) != 0);
        }
LAB_100058d8:
        bVar18 = false;
      }
      else {
        while (pppppppuStack_190 < pppppppuStack_a8) {
          if (length <= uVar52) goto LAB_100058d8;
          uVar57 = uVar52 + 1;
          bVar20 = *(byte *)((long)data + uVar52);
          if ((char)bVar20 < '\0') {
            if (length - uVar57 < uVar49) goto LAB_100058d8;
            uVar52 = uVar57 + uVar49;
            iVar25 = ((int)(char)bVar20 & 0x7fU) + 2;
            while (iVar25 = iVar25 + -1, iVar25 != 0) {
              uVar34 = recovered_10008e30(&uStack_140,(byte *)((long)data + uVar57));
              if ((uVar34 & 1) == 0) goto LAB_100058d8;
            }
          }
          else {
            uVar34 = (length - 1) - uVar52;
            uVar52 = uVar57;
            for (iVar25 = (bVar20 & 0x7f) + 1; iVar25 != 0; iVar25 = iVar25 + -1) {
              if (length < uVar52 || uVar34 < uVar49) goto LAB_100058d8;
              uVar57 = recovered_10008e30(&uStack_140,(byte *)((long)data + uVar52));
              if ((uVar57 & 1) == 0) goto LAB_100058d8;
              uVar52 = uVar52 + uVar49;
              uVar34 = uVar34 - uVar49;
            }
          }
        }
LAB_10005b50:
        *(uint *)image = (uint)pvStack_1e0;
        *(uint *)((long)image + 4) = (uint)ppvStack_148;
        recovered_10007c24((undefined8 *)((long)image + 8),&uStack_2a0);
        bVar18 = true;
      }
      uStack_298 = 0;
      recovered_10004020(uStack_2a0);
    }
    uStack_268 = 0;
    uStack_264 = 0;
    pppppppuVar47 = uStack_270;
    goto LAB_100058e8;
  case 4:
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_10006fe4(image,&uStack_140);
    PF_PART4(uStack_130, 0) = 0;
    PF_PART4(uStack_130, 4) = 0;
    recovered_10004020((void *)CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138));
    if (length < 0x1e) {
      return '\0';
    }
    iVar25 = recovered_1000168c(data,(byte *)str_1000b879,9);
    if (iVar25 != 0) {
      return '\0';
    }
    if (*(char *)((long)data + 0xd) != '\0') {
      return '\0';
    }
    PF_PART4(uStack_138, 0) = 0;
    PF_PART4(uStack_138, 4) = 0;
    uStack_140 = (uint *******)0x0;
    PF_PART4(uStack_130, 0) = (uint)DAT_1000b438;
    PF_PART4(uStack_130, 4) = (uint)((ulong)DAT_1000b438 >> 0x20);
    puStack_118 = (uint *)0x0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    uStack_121 = 0;
    ppvStack_120 = (void **)0x0;
    iVar25 = recovered_1000168c((byte *)((long)data + 9),&DAT_1000b8a2,4);
    if (iVar25 == 0) {
      PF_PART4(uStack_138, 4) = 0;
      PF_PART4(uStack_130, 0) = 4;
LAB_10005a04:
      uStack_198 = 0xe;
      iVar25 = recovered_10008fac(data,length,&uStack_198,(uint *)&uStack_140);
      if (iVar25 == 0) goto LAB_10006150;
      iVar25 = recovered_10008fac(data,length,&uStack_198,(uint *)((ulong)&uStack_140 | 4));
      if (iVar25 == 0) goto LAB_10006150;
      iVar25 = recovered_10008fac(data,length,&uStack_198,(uint *)((ulong)&uStack_140 | 8));
      bVar18 = false;
      if (((iVar25 != 0) && ((uint)uStack_140 != 0)) &&
         ((PF_PART4(uStack_140, 4) != 0 && ((uint)uStack_138 < 3)))) {
        if (3 < PF_PART4(uStack_138, 4)) {
          uStack_270 = (uint *******)((ulong)uStack_270 & 0xffffffff00000000);
          iVar25 = recovered_10008fac(data,length,&uStack_198,(uint *)&uStack_270);
          if ((iVar25 == 0) ||
             ((((uint)uStack_270 != 0 && ((uint)uStack_270 != 0x96)) && ((uint)uStack_270 != 100))))
          goto LAB_10006150;
        }
        while( true ) {
          uStack_270 = (uint *******)((ulong)uStack_270 & 0xffffffff00000000);
          uStack_2a0 = (void *)((ulong)uStack_2a0 & 0xffffffff00000000);
          iVar25 = recovered_10008fac(data,length,&uStack_198,(uint *)&uStack_270);
          if (iVar25 == 0) break;
          iVar25 = recovered_10008fac(data,length,&uStack_198,(uint *)&uStack_2a0);
          uVar15 = uStack_198;
          if (iVar25 == 0) break;
          uVar28 = (uint)uStack_2a0;
          if ((uint)uStack_270 == 0) {
            if ((uint)uStack_2a0 == 0) {
              lStack_1a8 = 0;
              uStack_1a0 = 0;
              pvStack_1b0 = (void *)0x0;
              goto LAB_1000639c;
            }
            break;
          }
          if ((length < uStack_198) ||
             (uVar52 = (ulong)uStack_2a0 & 0xffffffff, length - uStack_198 < uVar52)) break;
          puVar30 = (uint *)((long)data + uStack_198);
          if ((uint)uStack_270 == 1 && 3 < (uint)uStack_2a0) {
            uVar26 = recovered_10009148(puVar30);
            if (uVar26 < 0x101 && uVar26 * 3 + 4 <= uVar28) {
              pppppppuStack_a8 = (uint *******)((ulong)pppppppuStack_a8 & 0xffffffffffffff00);
              recovered_10008b58((long *)&uStack_128,(ulong)(uVar26 * 3),
                                 (undefined1 *)&pppppppuStack_a8);
              recovered_100013dc((void *)CONCAT17(uStack_121,
                                                  CONCAT16(uStack_122,
                                                           CONCAT24(uStack_124,uStack_128))),
                                 puVar30 + 1,(ulong)ppvStack_120);
            }
          }
          else if (((uint)uStack_270 == 0x11) && ((uint)uStack_2a0 != 0)) {
            PF_PART4(uStack_130, 4) = (uint)(byte)*puVar30;
          }
          uStack_198 = uVar15 + uVar52;
        }
        goto LAB_10006150;
      }
    }
    else {
      if ((((*(char *)((long)data + 9) == 'v') && (*(byte *)((long)data + 10) - 0x30U < 10)) &&
          (*(byte *)((long)data + 0xb) - 0x30U < 10)) && (*(byte *)((long)data + 0xc) - 0x30U < 10)) {
        PF_PART4(uStack_138, 4) =
             ((uint)*(byte *)((long)data + 0xb) * 10 + (uint)*(byte *)((long)data + 10) * 100 +
             (uint)*(byte *)((long)data + 0xc)) - 0x14d0;
        PF_PART4(uStack_130, 0) = 8;
        if (PF_PART4(uStack_138, 4) < 0xb) {
          PF_PART4(uStack_130, 0) = 4;
        }
        goto LAB_10005a04;
      }
LAB_10006150:
      bVar18 = false;
    }
    break;
  default:
    return '\0';
  }
  goto LAB_10006154;
LAB_1000639c:
  uStack_270 = (uint *******)0x0;
  bVar20 = recovered_10008fdc((long)data,length,&uStack_198,(uint)uStack_130,&uStack_270);
  if ((bVar20 & 1) == 0) goto LAB_10006468;
  if (uStack_270 == (uint *******)0x0) {
    if ((lStack_1a8 != 0) &&
       (uVar52 = ((ulong)uStack_140 >> 0x20) * ((ulong)uStack_140 & 0xffffffff), uVar52 >> 0x3e == 0
       )) {
      uStack_270 = (uint *******)0x0;
      recovered_1000923c((long *)&uStack_1c8,(uintptr_t)(uintptr_t)uVar52 * 4,(undefined1 *)&uStack_270);
      lStack_2b0 = lStack_1a8;
      goto LAB_100064ec;
    }
    goto LAB_10006468;
  }
  if (length <= uStack_270) goto LAB_10006468;
  recovered_10009154((long *)&pvStack_1b0,&uStack_270);
  goto LAB_1000639c;
LAB_100064ec:
  bVar18 = lStack_2b0 == 0;
  if (lStack_2b0 != 0) {
    uStack_270 = (uint *******)0x0;
    uStack_268 = 0;
    uStack_264 = CONCAT31(PF_PART3(uStack_264, 1),1);
    uStack_260 = 0xff;
    uStack_25c = 0;
    uStack_258 = 0;
    ppvStack_250 = (void **)0x0;
    lStack_2b0 = lStack_2b0 + -1;
    uStack_2a0 = *(void **)((long)pvStack_1b0 + lStack_2b0 * 8);
    iVar25 = recovered_10008fac(data,length,&uStack_2a0,(uint *)&uStack_270);
    if (iVar25 == 0) goto LAB_10006eb0;
    iVar25 = recovered_10008fac(data,length,&uStack_2a0,(uint *)((ulong)&uStack_270 | 4));
    if (iVar25 == 0) goto LAB_10006eb0;
    iVar25 = recovered_10008fac(data,length,&uStack_2a0,&uStack_268);
    if (iVar25 == 0) goto LAB_10006eb0;
    pppppppuStack_a8 = (uint *******)((ulong)pppppppuStack_a8 & 0xffffffff00000000);
    iVar25 = recovered_10008fac(data,length,&uStack_2a0,(uint *)&pppppppuStack_a8);
    if (iVar25 == 0) goto LAB_10006eb0;
    if ((int)pppppppuStack_a8 != 0) {
      if (length < uStack_2a0) goto LAB_10006eb0;
      if (length - (long)uStack_2a0 < ((ulong)pppppppuStack_a8 & 0xffffffff)) goto LAB_10006eb0;
      uStack_2a0 = (void *)((long)uStack_2a0 + ((ulong)pppppppuStack_a8 & 0xffffffff));
    }
    uVar52 = (ulong)uStack_260;
    uVar26 = uStack_258;
    uVar19 = (char)uStack_264;
    uVar28 = uStack_25c;
    while( true ) {
      pvStack_1e0 = (void *)((ulong)pvStack_1e0 & 0xffffffff00000000);
      ppvStack_148 = (void **)((ulong)ppvStack_148 & 0xffffffff00000000);
      iVar25 = recovered_10008fac(data,length,&uStack_2a0,(uint *)&pvStack_1e0);
      if (iVar25 == 0) goto LAB_10006eb0;
      iVar25 = recovered_10008fac(data,length,&uStack_2a0,(uint *)&ppvStack_148);
      uVar27 = (uint)uStack_130;
      pvVar32 = uStack_2a0;
      if (iVar25 == 0) goto LAB_10006eb0;
      if ((uint)pvStack_1e0 == 0) break;
      if (length < uStack_2a0) goto LAB_10006eb0;
      uVar49 = (ulong)ppvStack_148 & 0xffffffff;
      if (length - (long)uStack_2a0 < uVar49) goto LAB_10006eb0;
      puVar30 = (uint *)((long)data + (long)uStack_2a0);
      if ((uint)pvStack_1e0 == 6 && 3 < (uint)ppvStack_148) {
        uVar27 = recovered_10009148(puVar30);
        if (0xfe < uVar27) {
          uVar27 = 0xff;
        }
        uVar52 = (ulong)uVar27;
      }
      else if ((uint)pvStack_1e0 == 8 && 3 < (uint)ppvStack_148) {
        uVar27 = recovered_10009148(puVar30);
        uVar19 = uVar27 != 0;
      }
      else if ((uint)pvStack_1e0 == 0xf && 7 < (uint)ppvStack_148) {
        uVar28 = recovered_10009148(puVar30);
        uVar26 = recovered_10009148(puVar30 + 1);
      }
      else if ((uint)pvStack_1e0 == 0x21 && 3 < (uint)ppvStack_148) {
        uVar27 = recovered_10009148(puVar30);
        pppppppuStack_a8 = (uint *******)CONCAT44(PF_PART4(pppppppuStack_a8, 4),uVar27);
        pppppppuStack_190 = (uint *******)((ulong)pppppppuStack_190 & 0xffffffff00000000);
        recovered_100013dc(&pppppppuStack_190,&pppppppuStack_a8,4);
        if ((*(float *)((uint8_t *)&(pppppppuStack_190)+0)) <= 0.0) {
          uVar52 = 0;
        }
        else if (1.0 <= (*(float *)((uint8_t *)&(pppppppuStack_190)+0))) {
          uVar52 = 0xff;
        }
        else {
          fVar14 = 0.5;
          if ((*(float *)((uint8_t *)&(pppppppuStack_190)+0)) * 255.0 < 0.0) {
            fVar14 = -0.5;
          }
          uVar52 = (ulong)(fVar14 + (*(float *)((uint8_t *)&(pppppppuStack_190)+0)) * 255.0);
        }
      }
      uStack_2a0 = (void *)((long)pvVar32 + uVar49);
    }
    uStack_260 = (uint)uVar52;
    uStack_264 = CONCAT31(PF_PART3(uStack_264, 1),uVar19);
    uStack_25c = uVar28;
    uStack_258 = uVar26;
    if (((uint)ppvStack_148 != 0) ||
       (uVar22 = recovered_10008fdc((long)data,length,&uStack_2a0,(uint)uStack_130,
                                    (ulong *)&ppvStack_250), uVar22 == '\0')) goto LAB_10006eb0;
    uVar22 = recovered_10008fdc((long)data,length,&uStack_2a0,uVar27,(ulong *)&pppppppuStack_a8);
    uVar28 = uStack_260;
    pppppppuVar47 = uStack_270;
    if (uVar22 == '\0') goto LAB_10006eb0;
    uVar26 = (uint)uStack_270;
    uVar52 = (ulong)uStack_270 & 0xffffffff;
    if ((uint)uStack_270 == 0) goto LAB_10006eb0;
    uVar45 = PF_PART4(uStack_270, 4);
    uVar49 = (ulong)PF_PART4(uStack_270, 4);
    if ((PF_PART4(uStack_270, 4) == 0) || (ppvStack_250 == (void **)0x0)) goto LAB_10006eb0;
    if (((char)uStack_264 == '\x01') && (uStack_260 != 0)) {
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      pvStack_1e0 = (void *)0x0;
      uStack_150 = 0;
      ppvStack_148 = ppvStack_250;
      uStack_154 = 0;
      uStack_160 = 0;
      iVar25 = recovered_10008fac(data,length,(ulonglong *)&ppvStack_148,
                                  (uint *)((long)&uStack_150 + 4));
      if (((iVar25 != 0) &&
          (iVar25 = recovered_10008fac(data,length,(ulonglong *)&ppvStack_148,(uint *)&uStack_150),
          iVar25 != 0)) &&
         (iVar25 = recovered_10008fac(data,length,(ulonglong *)&ppvStack_148,&uStack_154),
         iVar25 != 0)) {
        uVar22 = recovered_10008fdc((long)data,length,(ulong *)&ppvStack_148,uVar27,&uStack_160);
        uVar27 = uStack_268;
        if ((((uVar22 != '\0') && (PF_PART4(uStack_150, 4) == uVar26)) && ((uint)uStack_150 == uVar45)) &&
           ((uStack_160 != 0 && (uStack_268 < 6)))) {
          uVar24 = *(uint *)(&DAT_1000b740 + (ulong)uStack_268 * 4);
          uVar57 = (ulong)uVar24;
          if (uStack_154 == uVar24) {
            uStack_170 = 0;
            uStack_168 = uStack_160;
            iVar25 = recovered_10008fac(data,length,&uStack_168,(uint *)((long)&uStack_170 + 4));
            if ((iVar25 != 0) &&
               (iVar25 = recovered_10008fac(data,length,&uStack_168,(uint *)&uStack_170),
               iVar25 != 0)) {
              if (PF_PART4(uStack_170, 4) == uVar26 && (uint)uStack_170 == uVar45) {
                uVar38 = (ulong)(uVar26 + 0x3f >> 6);
                uVar34 = (ulong)(uVar45 + 0x3f >> 6);
                uVar50 = uVar34 * uVar38;
                recovered_1000927c((long *)&pppppppuStack_a8,uVar50);
                lVar53 = 0;
LAB_10006864:
                if (uVar50 == 0) {
                  uStack_178 = 0;
                  uVar22 = recovered_10008fdc((long)data,length,&uStack_168,(uint)uStack_130,
                                              &uStack_178);
                  bVar16 = false;
                  if ((uVar22 == '\0') || (uStack_178 != 0)) goto LAB_10006db8;
                  if (uVar49 * uVar52 >> 0x3e == 0) {
                    uStack_2a0 = (void *)((ulong)uStack_2a0 & 0xffffffffffffff00);
                    recovered_10008b58((long *)&pvStack_1e0,uVar49 * (uintptr_t)(uintptr_t)uVar52 * 4,
                                       (undefined1 *)&uStack_2a0);
                    uStack_330 = 0;
                    uVar50 = uVar49;
                    while( true ) {
                      uVar33 = (uint)uVar50;
                      uVar40 = uVar33 - 0x40;
                      if (0x3f < uVar33) {
                        uVar33 = 0x40;
                      }
                      if (uStack_330 == uVar34) break;
                      uStack_2dc = 0;
                      uStack_310 = 0;
                      uVar36 = uVar45 + (int)uStack_330 * -0x40;
                      if (0x3f < uVar36) {
                        uVar36 = 0x40;
                      }
                      uStack_318 = (ulong)pppppppuVar47 & 0xffffffff;
                      while( true ) {
                        uVar50 = uStack_318;
                        if (0x3f < uStack_318) {
                          uVar50 = 0x40;
                        }
                        if (uStack_310 == uVar38) break;
                        lVar53 = uStack_310 + uStack_330 * uVar38;
                        ppppppuVar51 = pppppppuStack_a8[lVar53];
                        uVar56 = length - (long)ppppppuVar51;
                        if (length < ppppppuVar51 || uVar56 == 0) goto LAB_10006db4;
                        uVar41 = uVar26 + (int)uStack_310 * -0x40;
                        if (0x3f < uVar41) {
                          uVar41 = 0x40;
                        }
                        uVar35 = lVar53 + 1;
                        uVar54 = uVar56;
                        if ((uVar35 < uStack_a0) &&
                           (uVar54 = (long)pppppppuStack_a8[uVar35] - (long)ppppppuVar51,
                           pppppppuStack_a8[uVar35] < ppppppuVar51 || uVar54 == 0)) {
                          uVar54 = uVar56;
                        }
                        uVar41 = uVar41 * uVar36;
                        uVar55 = (ulong)(uVar41 * uVar24);
                        uStack_188 = 0;
                        uStack_180 = 0;
                        pppppppuStack_190 = (uint *******)0x0;
                        if (PF_PART4(uStack_130, 4) == 2) {
                          if ((uVar35 < uStack_a0) && (uVar54 != 0)) {
                            recovered_1000af00(&uStack_2a0,
                                               (undefined1 *)((long)data + (long)ppppppuVar51),
                                               (undefined1 *)((long)data + (long)ppppppuVar51) +
                                               uVar54);
                            bVar21 = recovered_10009404(&uStack_2a0,(long *)&pppppppuStack_190,
                                                        0xffffffffffffffff);
                            uStack_298 = 0;
                            recovered_10004020(uStack_2a0);
                            bVar16 = false;
                            if (uStack_188 == uVar55) {
                              bVar16 = bVar21;
                            }
                            if (bVar16 == true) goto LAB_10006a5c;
                          }
LAB_10006db0:
                          uStack_188 = 0;
                          recovered_10004020(pppppppuStack_190);
                          goto LAB_10006db4;
                        }
                        if (PF_PART4(uStack_130, 4) == 1) {
                          uStack_2a0 = (void *)((ulong)uStack_2a0 & 0xffffffffffffff00);
                          recovered_10008b58((long *)&pppppppuStack_190,uVar55,
                                             (undefined1 *)&uStack_2a0);
                          uVar35 = 0;
                          uVar56 = 0;
                          while (uVar35 != uVar57) {
                            for (uVar43 = 0; uVar9 = uVar41 - uVar43,
                                uVar43 < uVar41 && uVar56 < uVar54; uVar43 = (int)uVar42 + uVar43) {
                              uVar55 = uVar56 + 1;
                              pbVar29 = (byte *)((long)data + uVar56 + (long)ppppppuVar51);
                              bVar20 = *pbVar29;
                              uVar44 = (uint)bVar20;
                              if (bVar20 < 0x7f) {
                                if ((uVar54 <= uVar55) || (uVar9 <= uVar44)) goto LAB_10006db0;
                                uVar56 = uVar56 + 2;
                                uVar19 = *(undefined1 *)((long)data + uVar55 + (long)ppppppuVar51);
                                uVar42 = (ulong)bVar20 + 1;
                                uVar9 = uVar43;
                                for (uVar55 = uVar42; uVar55 != 0; uVar55 = uVar55 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_190 + uVar35 + (ulong)uVar24 * (ulong)uVar9)
                                       = uVar19;
                                  uVar9 = uVar9 + 1;
                                }
                              }
                              else if (uVar44 == 0x80) {
                                if (uVar54 - uVar55 < 2) goto LAB_10006db0;
                                uVar44 = (uint)CONCAT11(*(undefined1 *)
                                                         ((long)data + uVar55 + (long)ppppppuVar51),
                                                        pbVar29[2]);
                                uVar42 = (ulong)uVar44;
                                if ((uVar9 <= uVar44 - 1) ||
                                   (lVar53 = uVar56 + 3, uVar54 - lVar53 < (ulong)uVar44))
                                goto LAB_10006db0;
                                puVar37 = (undefined1 *)((long)data + lVar53 + (long)ppppppuVar51);
                                uVar9 = uVar43;
                                for (uVar56 = uVar42; uVar56 != 0; uVar56 = uVar56 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_190 + uVar35 + (ulong)uVar24 * (ulong)uVar9)
                                       = *puVar37;
                                  uVar9 = uVar9 + 1;
                                  puVar37 = puVar37 + 1;
                                }
                                uVar56 = lVar53 + uVar42;
                              }
                              else if (uVar44 == 0x7f) {
                                if ((uVar54 - uVar55 < 3) ||
                                   (uVar44 = (uint)CONCAT11(*(undefined1 *)
                                                             ((long)data +
                                                             uVar55 + (long)ppppppuVar51),pbVar29[2]
                                                           ), uVar42 = (ulong)uVar44,
                                   uVar9 <= uVar44 - 1)) goto LAB_10006db0;
                                uVar56 = uVar56 + 4;
                                bVar20 = pbVar29[3];
                                uVar9 = uVar43;
                                for (uVar55 = uVar42; uVar55 != 0; uVar55 = uVar55 - 1) {
                                  *(byte *)((long)pppppppuStack_190 +
                                           uVar35 + (ulong)uVar24 * (ulong)uVar9) = bVar20;
                                  uVar9 = uVar9 + 1;
                                }
                              }
                              else {
                                uVar42 = 0x100 - (ulong)bVar20;
                                if ((uVar9 < (uint)uVar42) || (uVar54 - uVar55 < uVar42))
                                goto LAB_10006db0;
                                puVar37 = (undefined1 *)((long)data + uVar55 + (long)ppppppuVar51);
                                uVar9 = uVar43;
                                for (uVar56 = uVar42; uVar56 != 0; uVar56 = uVar56 - 1) {
                                  *(undefined1 *)
                                   ((long)pppppppuStack_190 + uVar35 + (ulong)uVar24 * (ulong)uVar9)
                                       = *puVar37;
                                  uVar9 = uVar9 + 1;
                                  puVar37 = puVar37 + 1;
                                }
                                uVar56 = uVar55 + uVar42;
                              }
                            }
                            uVar35 = uVar35 + 1;
                            if (uVar43 < uVar41) goto LAB_10006db0;
                          }
                        }
                        else {
                          if ((PF_PART4(uStack_130, 4) != 0) || (uVar56 < uVar55)) goto LAB_10006db0;
                          recovered_10009268((long *)&pppppppuStack_190,
                                             (undefined1 *)((long)data + (long)ppppppuVar51),
                                             (undefined1 *)((long)data + (long)ppppppuVar51) +
                                             uVar55);
                        }
LAB_10006a5c:
                        lStack_2d0 = 0;
                        for (uStack_2c8 = 0; uStack_2c8 != uVar33; uStack_2c8 = uStack_2c8 + 1) {
                          uVar41 = uStack_2dc;
                          lVar53 = lStack_2d0;
                          for (uVar56 = uVar50; uVar56 != 0; uVar56 = uVar56 - 1) {
                            PF_PART4(uStack_2a0, 4) = (undefined4)((ulong)uStack_2a0 >> 0x20);
                            uStack_2a0 = (void *)CONCAT44(PF_PART4(uStack_2a0, 4),0xff000000);
                            if (uVar27 < 6) {
                              uVar43 = 1 << (ulong)(uVar27 & 0x1f);
                              if ((uVar43 & 3) == 0) {
                                if ((uVar43 & 0xc) == 0) {
                                  lVar39 = (ulong)*(byte *)((long)pppppppuStack_190 + lVar53) * 3;
                                  uVar35 = lVar39 + 2;
                                  if (uVar35 < ppvStack_120) {
                                    lVar5 = CONCAT17(uStack_121,
                                                     CONCAT16(uStack_122,
                                                              CONCAT24(uStack_124,uStack_128)));
                                    PF_PART3(uStack_2a0, 0) =
                                         CONCAT12(*(undefined1 *)(lVar5 + uVar35),
                                                  *(undefined2 *)(lVar5 + lVar39));
                                  }
                                  if (uVar27 == 5) goto LAB_10006b50;
                                }
                                else {
                                  PF_PART3(uStack_2a0, 0) =
                                       CONCAT12(*(undefined1 *)((long)pppppppuStack_190 + lVar53),
                                                CONCAT11(*(undefined1 *)
                                                          ((long)pppppppuStack_190 + lVar53),
                                                         *(undefined1 *)
                                                          ((long)pppppppuStack_190 + lVar53)));
                                  if (uVar27 == 3) {
LAB_10006b50:
                                    lVar39 = 1;
                                    goto LAB_10006b54;
                                  }
                                }
                                goto LAB_10006b60;
                              }
                              uStack_2a0 = (void *)CONCAT53(PF_PART5(uStack_2a0, 3),
                                                            *(undefined3 *)
                                                             ((long)pppppppuStack_190 + lVar53));
                              if (uVar27 != 1) goto LAB_10006b60;
                              lVar39 = 3;
LAB_10006b54:
                              uVar43 = (uint)*(byte *)((long)pppppppuStack_190 + lVar53 + lVar39);
                            }
                            else {
LAB_10006b60:
                              uVar43 = 0xff;
                            }
                            PF_PART4(uStack_2a0, 0) =
                                 CONCAT13((char)((uVar43 * uVar28 + 0x7f) / 0xff),
                                          (undefined3)uStack_2a0);
                            recovered_100013dc((void *)((long)pvStack_1e0 +
                                                       (uVar52 * (uint)((int)uStack_330 * 0x40 +
                                                                       (int)uStack_2c8) +
                                                       (ulong)uVar41) * 4),&uStack_2a0,4);
                            uVar41 = uVar41 + 1;
                            lVar53 = lVar53 + uVar57;
                          }
                          lStack_2d0 = lStack_2d0 + uVar57 * uVar50;
                        }
                        uStack_188 = 0;
                        recovered_10004020(pppppppuStack_190);
                        uStack_310 = uStack_310 + 1;
                        uStack_318 = (ulong)((int)uStack_318 - 0x40);
                        uStack_2dc = uStack_2dc + 0x40;
                      }
                      uStack_330 = uStack_330 + 1;
                      uVar50 = (ulong)uVar40;
                    }
                    bVar16 = true;
                    goto LAB_10006db8;
                  }
                }
                else {
                  uVar22 = recovered_10008fdc((long)data,length,&uStack_168,(uint)uStack_130,
                                              (ulong *)((long)pppppppuStack_a8 + lVar53));
                  if (uVar22 != '\0') goto code_r0x10006884;
                }
                goto LAB_10006db4;
              }
            }
          }
        }
      }
      pvVar32 = (void *)0x0;
      goto LAB_10006ea8;
    }
    goto LAB_100064ec;
  }
  *(uint ********)image = uStack_140;
  recovered_10007c24((undefined8 *)((long)image + 8),(undefined8 *)&uStack_1c8);
LAB_10006eb0:
  uStack_1c0 = 0;
  recovered_10004020((void *)CONCAT44(uStack_1c4,uStack_1c8));
LAB_1000646c:
  lStack_1a8 = 0;
  recovered_10004020(pvStack_1b0);
LAB_10006154:
  ppvStack_120 = (void **)0x0;
  pppppppuVar47 =
       (uint *******)CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
  goto LAB_100058e8;
code_r0x10006884:
  plVar1 = (long *)((long)pppppppuStack_a8 + lVar53);
  lVar53 = lVar53 + 8;
  uVar50 = uVar50 - 1;
  if (*plVar1 == 0) goto LAB_10006db4;
  goto LAB_10006864;
LAB_10006db4:
  bVar16 = false;
LAB_10006db8:
  uStack_a0 = 0;
  recovered_10004020(pppppppuStack_a8);
  uVar26 = uStack_258;
  uVar28 = uStack_25c;
  if (!bVar16) {
    pvVar32 = pvStack_1e0;
LAB_10006ea8:
    uStack_1d8 = 0;
    recovered_10004020(pvVar32);
    goto LAB_10006eb0;
  }
  lVar53 = 0;
  for (uVar57 = 0; uVar57 != uVar49; uVar57 = uVar57 + 1) {
    uVar27 = uVar26 + (int)uVar57;
    if (-1 < (int)uVar27) {
      uVar34 = uVar52;
      lVar39 = lVar53;
      uVar45 = uVar28;
      if ((int)uVar27 < ((int32_t)PF_PART4(uStack_140, 4))) {
        for (; uVar34 != 0; uVar34 = uVar34 - 1) {
          if ((-1 < (int)uVar45) && ((int)uVar45 < (int)(uint)uStack_140)) {
            recovered_10009080(CONCAT44(uStack_1c4,uStack_1c8) +
                               (((ulong)uStack_140 & 0xffffffff) * (ulong)uVar27 + (ulong)uVar45) *
                               4,(long)pvStack_1e0 + lVar39);
          }
          lVar39 = lVar39 + 4;
          uVar45 = uVar45 + 1;
        }
      }
    }
    lVar53 = lVar53 + (uintptr_t)(uintptr_t)uVar52 * 4;
  }
  uStack_1d8 = 0;
  recovered_10004020(pvStack_1e0);
  goto LAB_100064ec;
LAB_10006468:
  bVar18 = false;
  goto LAB_1000646c;
LAB_10005e04:
  uStack_2a0 = (void *)0x0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = (void **)0x0;
  uStack_288 = 0;
  uStack_278 = 0;
  uStack_140 = (uint *******)0x0;
  PF_PART4(uStack_130, 0) = 0;
  PF_PART4(uStack_130, 4) = 0;
  PF_PART4(uStack_138, 0) = 0;
  PF_PART4(uStack_138, 4) = 0;
  ppvStack_120 = (void **)0x0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  puStack_118 = (uint *)((ulong)puStack_118 & 0xffffffffffff0000);
  recovered_10007c24(&uStack_2a0,&uStack_140);
  uStack_288 = CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
  uStack_280 = ppvStack_120;
  uStack_278 = PF_PART2(puStack_118, 0);
  PF_PART4(uStack_138, 0) = 0;
  PF_PART4(uStack_138, 4) = 0;
  recovered_10004020(uStack_140);
  if (uStack_264 == 0) {
    if (uStack_220 != 0) {
      if (uStack_220 != 2) goto LAB_10005fa8;
      uStack_288 = CONCAT44(PF_PART4(uStack_288, 4),
                            (uint)(*puStack_228 >> 8) | (*puStack_228 & 0xff00ff) << 8);
      uStack_278 = CONCAT11(PF_PART1(uStack_278, 1),1);
    }
LAB_10005fb0:
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    pvStack_1b0 = (void *)0x0;
    if (bStack_252 == 1 && uStack_1f0 != 0) {
      uVar52 = ((ulong)uStack_270 >> 0x20) * ((ulong)uStack_270 & 0xffffffff);
      if (uVar52 >> 0x3e == 0) {
        uStack_140 = (uint *******)((ulong)uStack_140 & 0xffffffffffffff00);
        recovered_10008b58((long *)&pvStack_1b0,(uintptr_t)(uintptr_t)uVar52 * 4,(undefined1 *)&uStack_140);
        bVar20 = 0;
        puVar30 = puStack_1f8 + 6;
        for (lVar53 = uStack_1f0 * 0x38; lVar53 != 0; lVar53 = lVar53 + -0x38) {
          if ((bVar20 & 1) == 0) {
            bVar20 = (byte)*puVar30;
          }
          else {
            bVar20 = 1;
          }
          puVar30 = puVar30 + 0xe;
        }
        if ((bVar20 & 1) == 0) {
          PF_PART4(uStack_130, 0) = 0;
          PF_PART4(uStack_130, 4) = 0;
          uStack_140 = (uint *******)0x0;
          PF_PART4(uStack_138, 0) = 0;
          PF_PART4(uStack_138, 4) = 0;
          bVar18 = recovered_10007010((uint *)&uStack_270,(long *)&pvStack_210,&uStack_2a0,
                                      &uStack_140);
          if ((!bVar18) || (CONCAT44(PF_PART4(uStack_138, 4),(uint)uStack_138) != lStack_1a8)) {
            PF_PART4(uStack_138, 0) = 0;
            PF_PART4(uStack_138, 4) = 0;
            pppppppuVar47 = uStack_140;
LAB_10006438:
            recovered_10004020(pppppppuVar47);
            goto LAB_1000643c;
          }
          recovered_10007c24(&pvStack_1b0,&uStack_140);
          PF_PART4(uStack_138, 0) = 0;
          PF_PART4(uStack_138, 4) = 0;
          recovered_10004020(uStack_140);
        }
        puVar46 = puStack_1f8 + uStack_1f0 * 0xe;
        for (puVar30 = puStack_1f8; puVar30 != puVar46; puVar30 = puVar30 + 0xe) {
          PF_PART4(uStack_138, 0) = uStack_268;
          PF_PART4(uStack_130, 4) = uStack_25c;
          uStack_128 = uStack_258;
          PF_PART4(uStack_138, 4) = uStack_264;
          PF_PART4(uStack_130, 0) = uStack_260;
          uVar28 = *puVar30;
          uVar26 = puVar30[1];
          uStack_140 = *(uint ********)puVar30;
          uStack_a0 = 0;
          uStack_98 = 0;
          pppppppuStack_a8 = (uint *******)0x0;
          bVar18 = recovered_10007010((uint *)&uStack_140,(long *)(puVar30 + 8),&uStack_2a0,
                                      (long *)&pppppppuStack_a8);
          if (!bVar18) {
            uStack_a0 = 0;
            pppppppuVar47 = pppppppuStack_a8;
            goto LAB_10006438;
          }
          lVar53 = 0;
          uVar49 = (ulong)uStack_270 & 0xffffffff;
          for (uVar52 = 0; uVar52 != uVar26; uVar52 = uVar52 + 1) {
            pvVar32 = (void *)((long)pppppppuStack_a8 + lVar53);
            dst = (void *)((long)pvStack_1b0 +
                          (uintptr_t)uVar49 * 4 * (ulong)(puVar30[3] + (int)uVar52) + (ulong)puVar30[2] * 4);
            for (uVar57 = (ulong)uVar28; uVar57 != 0; uVar57 = uVar57 - 1) {
              if (puVar30[5] == 0) {
                recovered_100013dc(dst,pvVar32,4);
              }
              else {
                recovered_10009080((long)dst,(long)pvVar32);
              }
              pvVar32 = (void *)((long)pvVar32 + 4);
              dst = (void *)((long)dst + 4);
            }
            lVar53 = lVar53 + (ulong)(uintptr_t)(uintptr_t)(uintptr_t)uVar28 * 4;
          }
          uStack_a0 = 0;
          recovered_10004020(pppppppuStack_a8);
        }
        goto LAB_10005fe4;
      }
LAB_1000643c:
      bVar18 = false;
    }
    else {
      bVar18 = recovered_10007010((uint *)&uStack_270,(long *)&pvStack_210,&uStack_2a0,
                                  (long *)&pvStack_1b0);
      if (!bVar18) goto LAB_1000643c;
LAB_10005fe4:
      *(uint ********)image = uStack_270;
      recovered_10007c24((undefined8 *)((long)image + 8),&pvStack_1b0);
      bVar18 = true;
    }
    lStack_1a8 = 0;
    recovered_10004020(pvStack_1b0);
  }
  else {
    if (uStack_264 != 2) {
      if (uStack_264 == 3) {
        bVar18 = false;
        if ((uStack_238 == 0) || (uVar52 = uStack_238 / 3, uStack_238 != (uintptr_t)(uintptr_t)uVar52 * 3))
        goto LAB_10006444;
        uStack_140 = (uint *******)CONCAT71(PF_PART7(uStack_140, 1),0xff);
        recovered_10008b58(&uStack_2a0,uVar52 << 2,(undefined1 *)&uStack_140);
        lVar39 = 0;
        lVar53 = 0;
        for (; uVar52 != 0; uVar52 = uVar52 - 1) {
          *(undefined1 *)((long)uStack_2a0 + lVar53) = *(undefined1 *)(lStack_240 + lVar39);
          *(undefined1 *)((long)uStack_2a0 + lVar53 + 1) = *(undefined1 *)(lStack_240 + lVar39 + 1);
          *(undefined1 *)((long)uStack_2a0 + lVar53 + 2) = *(undefined1 *)(lStack_240 + lVar39 + 2);
          lVar53 = lVar53 + 4;
          lVar39 = lVar39 + 3;
        }
        lVar53 = 3;
        for (uVar52 = 0; uVar52 < uStack_220; uVar52 = uVar52 + 1) {
          *(undefined1 *)((long)uStack_2a0 + lVar53) = *(undefined1 *)((long)puStack_228 + uVar52);
          lVar53 = lVar53 + 4;
        }
      }
      else if (uStack_220 != 0) goto LAB_10005fa8;
      goto LAB_10005fb0;
    }
    if (uStack_220 == 0) goto LAB_10005fb0;
    if (uStack_220 == 6) {
      uStack_288 = CONCAT44((uint)(*puStack_228 >> 8) | (*puStack_228 & 0xff00ff) << 8,
                            (undefined4)uStack_288);
      uStack_280 = (void **)CONCAT44((uint)(puStack_228[2] >> 8) | (puStack_228[2] & 0xff00ff) << 8,
                                     (uint)(puStack_228[1] >> 8) | (puStack_228[1] & 0xff00ff) << 8)
      ;
      uStack_278 = CONCAT11(1,(undefined1)uStack_278);
      goto LAB_10005fb0;
    }
LAB_10005fa8:
    bVar18 = false;
  }
LAB_10006444:
  uStack_298 = 0;
  recovered_10004020(uStack_2a0);
  goto LAB_10004fe4;
  while( true ) {
    puVar46 = puVar30 + 10;
    puVar30 = puVar30 + 0xe;
    lVar53 = lVar53 + -0x38;
    if (*(long *)puVar46 == 0) break;
LAB_10005dec:
    if (lVar53 == 0) goto LAB_10005e04;
  }
LAB_10004fe4:
  recovered_10007c74((long)&uStack_270);
  uStack_188 = 0;
  pppppppuVar47 = pppppppuStack_190;
LAB_100058e8:
  recovered_10004020(pppppppuVar47);
  return bVar18;
}

#undef DAT_1000b438
#undef DAT_1000b487
#undef DAT_1000b740
#undef DAT_1000b886
#undef DAT_1000b88b
#undef DAT_1000b8a2
#undef DAT_1000b8ac
#undef DAT_1000b8b1
#undef DAT_1000b8b6
#undef DAT_1000b8bb
#undef DAT_1000b8c0
#undef str_1000b879
#undef lStack_2b0
#undef uStack_2a0
#undef uStack_298
#undef uStack_290
#undef uStack_288
#undef uStack_280
#undef uStack_278
#undef uStack_270
#undef uStack_268
#undef uStack_264
#undef uStack_260
#undef uStack_25c
#undef uStack_258
#undef bStack_254
#undef cStack_253
#undef bStack_252
#undef uStack_251
#undef ppvStack_250
#undef lStack_248
#undef lStack_240
#undef uStack_238
#undef uStack_230
#undef puStack_228
#undef uStack_220
#undef uStack_218
#undef pvStack_210
#undef uStack_208
#undef uStack_200
#undef puStack_1f8
#undef uStack_1f0
#undef uStack_1e8
#undef pvStack_1e0
#undef uStack_1d8
#undef uStack_1d0
#undef uStack_1c8
#undef uStack_1c4
#undef uStack_1c0
#undef pvStack_1b0
#undef lStack_1a8
#undef uStack_1a0
#undef uStack_198
#undef pppppppuStack_190
#undef uStack_188
#undef uStack_180
#undef uStack_178
#undef uStack_170
#undef uStack_168
#undef uStack_160
#undef uStack_154
#undef uStack_150
#undef ppvStack_148
#undef uStack_140
#undef uStack_138
#undef uStack_130
#undef uStack_128
#undef uStack_124
#undef uStack_122
#undef uStack_121
#undef ppvStack_120
#undef puStack_118
#undef puStack_110
#undef puStack_108
#undef ppvStack_100
#undef pppvStack_f8
#undef puStack_f0
#undef uStack_e8
#undef pvStack_e0
#undef uStack_d8
#undef uStack_d0
#undef puStack_c8
#undef uStack_c0
#undef uStack_b8
#undef pppppppuStack_a8
#undef uStack_a0
#undef uStack_98
#undef uStack_330
#undef uStack_318
#undef uStack_310
#undef uStack_2dc
#undef lStack_2d0
#undef uStack_2c8
#undef lStack_2c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe4
 */

undefined8 * recovered_10006fe4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10007c24(param_1 + 1,param_2 + 1);
  return param_1;
}


#undef DAT_1000b6b4
#define DAT_1000b6b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37cU)))
#undef DAT_1000b6d0
#define DAT_1000b6d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x398U)))
#undef DAT_1000b6ec
#define DAT_1000b6ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3b4U)))
#undef DAT_1000b708
#define DAT_1000b708 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3d0U)))
#define local_b8 (*(long *)(pf_stack_frame + 72))
#define local_a0 (*(long *)(pf_stack_frame + 96))
#define local_98 (*(undefined8 *)(pf_stack_frame + 104))
#define local_88 (*(undefined8 *)(pf_stack_frame + 120))
#define local_80 (*(long *)(pf_stack_frame + 128))
#define local_70 (*(long *)(pf_stack_frame + 144))
#define pbStack_e8 (*(byte * *)(pf_stack_frame + 24))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 40))
#define pbStack_d0 (*(byte * *)(pf_stack_frame + 48))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_b0 (*(ulong *)(pf_stack_frame + 80))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 112))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007010
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_10007010(uint *param_1,long *param_2,long *param_3,long *param_4)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  uint uVar18;
  uint128 auVar19;
  uint128 auVar20;
  uint128 auVar21;
  uint128 auVar22;
  char *pcVar23;
  undefined8 uVar24;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  char cVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  void *dst;
  ulong uVar38;

  uVar7 = *param_1;
  if (param_1[6] == 0) {
    uVar28 = recovered_1000a858((long)param_1);
    uVar35 = CONCAT44(0,param_1[1]);
    if (uVar35 * uVar7 >> 0x3e != 0) {
      return false;
    }
    uVar31 = (ulong)uVar7 * (ulong)uVar28 + 7 >> 3;
    uVar38 = uVar31 + 1;
    PF_PART8(auVar20, 8) = 0;
    PF_PART8(auVar20, 0) = uVar38;
    PF_PART8(auVar22, 8) = 0;
    PF_PART8(auVar22, 0) = uVar35;
    if (SUB168(auVar20 * auVar22,8) != 0) {
      return false;
    }
    local_a0 = 0;
    uStack_90 = 0;
    local_98 = 0;
    local_88 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_70 = 0;
    bVar25 = recovered_1000a88c(&local_a0,param_2,uVar38 * uVar35);
    if (bVar25) {
      recovered_10008cf0(param_4,uVar35 * (uintptr_t)(uintptr_t)uVar7 * 4);
      uVar28 = recovered_1000a858((long)param_1);
      uVar7 = uVar28 + 7 >> 3;
      if (uVar28 < 8) {
        uVar7 = 1;
      }
      recovered_10008cc4(&local_b8,uVar38);
      if (param_1[3] == 6 && param_1[2] == 8) {
        lVar36 = 0;
        uVar35 = 0;
        do {
          if (param_1[1] <= uVar35) {
            bVar25 = local_70 == local_80;
            goto LAB_10007b84;
          }
          bVar26 = recovered_1000a948((long)&local_a0,CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8),
                                      uStack_b0);
          if ((bVar26 & 1) == 0) break;
          pbVar5 = (byte *)0x0;
          if (uVar35 != 0) {
            pbVar5 = (byte *)((char *)(*param_4 + lVar36) + -uVar31);
          }
          uVar38 = recovered_1000a9a4((uint)*(byte *)CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8),
                                      (char *)(*param_4 + lVar36),
                                      (char *)((byte *)CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8)
                                              + 1),pbVar5,uVar31,4);
          uVar35 = uVar35 + 1;
          lVar36 = lVar36 + uVar31;
        } while ((uVar38 & 1) != 0);
        bVar25 = false;
      }
      else {
        recovered_10008cc4((long *)&pbStack_d0,uVar31);
        recovered_10008cc4((long *)&pbStack_e8,uVar31);
        lVar36 = 0;
        bVar25 = false;
        for (uVar35 = 0; uVar35 < param_1[1]; uVar35 = uVar35 + 1) {
          bVar26 = recovered_1000a948((long)&local_a0,CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8),
                                      uStack_b0);
          if ((bVar26 & 1) == 0) {
LAB_10007b6c:
            bVar25 = false;
            goto switchD_100077e4_caseD_1;
          }
          pbVar5 = pbStack_d0;
          if (!bVar25) {
            pbVar5 = (byte *)0x0;
          }
          uVar30 = recovered_1000a9a4((uint)*(byte *)CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8),
                                      (char *)pbStack_e8,
                                      (char *)((byte *)CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8)
                                              + 1),pbVar5,uVar31,(ulong)uVar7);
          if ((int)uVar30 == 0) goto LAB_10007b6c;
          bVar25 = false;
          if (6 < param_1[3]) goto switchD_100077e4_caseD_1;
          uVar38 = (ulong)*param_1;
          dst = (void *)(*param_4 + lVar36 * uVar38);
          switch((uintptr_t)(param_1[3])) {
          case 0:
            if (param_1[2] == 8) {
              pcVar23 = (char *)((long)dst + 3);
              pbVar5 = pbStack_e8;
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                bVar26 = *pbVar5;
                bVar11 = *(byte *)(param_3 + 5);
                uVar28 = *(uint *)(param_3 + 3);
                pcVar23[-3] = bVar26;
                pcVar23[-2] = bVar26;
                pcVar23[-1] = bVar26;
                *pcVar23 = -(uVar28 != bVar26 | (bVar11 ^ 0xff) & 1);
                pcVar23 = pcVar23 + 4;
                pbVar5 = pbVar5 + 1;
              }
            }
            else {
              pbVar5 = pbStack_e8 + 1;
              pcVar23 = (char *)((long)dst + 3);
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                uVar37 = (uint)(*(ushort *)(pbVar5 + -1) >> 8) |
                         (*(ushort *)(pbVar5 + -1) & 0xff00ff) << 8;
                bVar26 = *(byte *)(param_3 + 5);
                uVar28 = *(uint *)(param_3 + 3);
                cVar34 = (char)((uVar37 * 0xff + 0x7fff) / 0xffff);
                pcVar23[-3] = cVar34;
                pcVar23[-2] = cVar34;
                pcVar23[-1] = cVar34;
                *pcVar23 = -(uVar37 != uVar28 | (bVar26 ^ 0xff) & 1);
                pbVar5 = pbVar5 + 2;
                pcVar23 = pcVar23 + 4;
              }
            }
            break;
          default:
            goto switchD_100077e4_caseD_1;
          case 2:
            if (param_1[2] == 8) {
              pbVar5 = pbStack_e8 + 2;
              pcVar23 = (char *)((long)dst + 3);
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                if ((*(char *)((long)param_3 + 0x29) == '\x01' &&
                     *(uint *)((long)param_3 + 0x1c) == (uint)pbVar5[-2]) &&
                   (*(uint *)(param_3 + 4) == (uint)pbVar5[-1])) {
                  cVar34 = -(*(uint *)((long)param_3 + 0x24) != (uint)*pbVar5);
                }
                else {
                  cVar34 = -1;
                }
                pcVar23[-3] = pbVar5[-2];
                pcVar23[-2] = pbVar5[-1];
                pcVar23[-1] = *pbVar5;
                *pcVar23 = cVar34;
                pbVar5 = pbVar5 + 3;
                pcVar23 = pcVar23 + 4;
              }
            }
            else {
              puVar3 = (ushort *)(pbStack_e8 + 2);
              pcVar23 = (char *)((long)dst + 3);
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                uVar9 = (uint)(puVar3[-1] >> 8) | (puVar3[-1] & 0xff00ff) << 8;
                uVar10 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
                uVar18 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
                bVar26 = *(byte *)((long)param_3 + 0x29);
                uVar28 = *(uint *)((long)param_3 + 0x1c);
                uVar37 = *(uint *)(param_3 + 4);
                uVar27 = *(uint *)((long)param_3 + 0x24);
                pcVar23[-3] = (char)((uVar9 * 0xff + 0x7fff) / 0xffff);
                pcVar23[-2] = (char)((uVar10 * 0xff + 0x7fff) / 0xffff);
                pcVar23[-1] = (char)((uVar18 * 0xff + 0x7fff) / 0xffff);
                *pcVar23 = -(uVar9 != uVar28 | (bVar26 ^ 0xff) & 1 |
                            (uVar10 != uVar37 || uVar18 != uVar27));
                puVar3 = puVar3 + 3;
                pcVar23 = pcVar23 + 4;
              }
            }
            break;
          case 3:
            uVar33 = param_3[1];
            pbVar5 = pbStack_e8;
            for (; uVar38 != 0; uVar38 = uVar38 - 1) {
              if (uVar33 >> 2 <= (ulong)*pbVar5) goto LAB_10007b6c;
              recovered_100013dc(dst,(void *)(*param_3 + (ulong)*pbVar5 * 4),4);
              dst = (void *)((long)dst + 4);
              pbVar5 = pbVar5 + 1;
            }
            break;
          case 4:
            if (param_1[2] == 8) {
              pbVar1 = (byte *)((long)dst + 3);
              pbVar5 = pbStack_e8;
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                bVar26 = *pbVar5;
                pbVar1[-3] = bVar26;
                pbVar1[-2] = bVar26;
                pbVar1[-1] = *pbVar5;
                *pbVar1 = pbVar5[1];
                pbVar5 = pbVar5 + 2;
                pbVar1 = pbVar1 + 4;
              }
            }
            else {
              pbVar5 = pbStack_e8 + 3;
              puVar2 = (undefined1 *)((long)dst + 3);
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                uVar13 = *(ushort *)(pbVar5 + -3);
                uVar12 = *(ushort *)(pbVar5 + -1);
                uVar17 = (undefined1)
                         (((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                           ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) / 0xffff);
                puVar2[-3] = uVar17;
                puVar2[-2] = uVar17;
                puVar2[-1] = uVar17;
                *puVar2 = (char)(((((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8) * 0x100 -
                                  ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8)) + 0x7fff) /
                                0xffff);
                pbVar5 = pbVar5 + 4;
                puVar2 = puVar2 + 4;
              }
            }
            break;
          case 6:
            if (param_1[2] == 8) {
              recovered_100013dc((void *)(*param_4 + uVar35 * (uintptr_t)(uintptr_t)(uintptr_t)uVar38 * 4),pbStack_e8,uVar38 << 2);
            }
            else {
              pbVar5 = pbStack_e8 + 3;
              puVar2 = (undefined1 *)((long)dst + 3);
              for (; uVar38 != 0; uVar38 = uVar38 - 1) {
                uVar13 = *(ushort *)(pbVar5 + -3);
                puVar2[-3] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                     ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                   0xffff);
                uVar13 = *(ushort *)(pbVar5 + -1);
                puVar2[-2] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                     ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                   0xffff);
                uVar13 = *(ushort *)(pbVar5 + 1);
                puVar2[-1] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                     ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                   0xffff);
                uVar13 = *(ushort *)(pbVar5 + 3);
                *puVar2 = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                  ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                0xffff);
                pbVar5 = pbVar5 + 8;
                puVar2 = puVar2 + 4;
              }
            }
          }
          uVar24 = uStack_c0;
          uVar30 = uStack_c8;
          pbVar5 = pbStack_d0;
          pbStack_d0 = pbStack_e8;
          pbStack_e8 = pbVar5;
          uStack_c0 = uStack_d8;
          uStack_c8 = uStack_e0;
          uStack_d8 = uVar24;
          uStack_e0 = uVar30;
          lVar36 = lVar36 + 4;
          bVar25 = true;
        }
        bVar25 = local_70 == local_80;
switchD_100077e4_caseD_1:
        uStack_e0 = 0;
        recovered_10004020(pbStack_e8);
        uStack_c8 = 0;
        recovered_10004020(pbStack_d0);
      }
LAB_10007b84:
      uStack_b0 = 0;
      recovered_10004020((void *)CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8));
      goto LAB_10007b88;
    }
  }
  else {
    uVar28 = param_1[1];
    if ((ulong)uVar28 * (ulong)uVar7 >> 0x3e != 0) {
      return false;
    }
    uVar35 = 0;
    for (lVar36 = 0; lVar36 != 0x1c; lVar36 = lVar36 + 4) {
      if (*(uint *)((long)&DAT_1000b6b4 + lVar36) < uVar7) {
        uVar37 = 0;
        if (*(uint *)((long)&DAT_1000b6d0 + lVar36) != 0) {
          uVar37 = (uVar7 + ~*(uint *)((long)&DAT_1000b6b4 + lVar36)) /
                   *(uint *)((long)&DAT_1000b6d0 + lVar36);
        }
        uVar37 = uVar37 + 1;
      }
      else {
        uVar37 = 0;
      }
      if (*(uint *)((long)&DAT_1000b6ec + lVar36) < uVar28) {
        uVar27 = 0;
        if (*(uint *)((long)&DAT_1000b708 + lVar36) != 0) {
          uVar27 = (uVar28 + ~*(uint *)((long)&DAT_1000b6ec + lVar36)) /
                   *(uint *)((long)&DAT_1000b708 + lVar36);
        }
        uVar38 = CONCAT44(0,uVar27 + 1);
        if ((uVar37 != 0) && (uVar27 != 0xffffffff)) {
          uVar27 = recovered_1000a858((long)param_1);
          uVar31 = ((ulong)uVar27 * (ulong)uVar37 + 7 >> 3) + 1;
          PF_PART8(auVar19, 8) = 0;
          PF_PART8(auVar19, 0) = uVar31;
          PF_PART8(auVar21, 8) = 0;
          PF_PART8(auVar21, 0) = uVar38;
          if (SUB168(auVar19 * auVar21,8) != 0) {
            return false;
          }
          uVar31 = uVar31 * uVar38;
          if (CARRY8(uVar31,uVar35)) {
            return false;
          }
          uVar35 = uVar31 + uVar35;
        }
      }
    }
    local_a0 = 0;
    uStack_90 = 0;
    local_98 = 0;
    local_88 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_70 = 0;
    bVar25 = recovered_1000a88c(&local_a0,param_2,uVar35);
    if (bVar25) {
      PF_PART1(local_b8, 0) = 0;
      recovered_10008b58(param_4,(ulong)uVar28 * (ulong)(uintptr_t)(uintptr_t)uVar7 * 4,(undefined1 *)&local_b8);
      uVar28 = recovered_1000a858((long)param_1);
      lVar36 = 0;
      uVar7 = uVar28 + 7 >> 3;
      if (uVar28 < 8) {
        uVar7 = 1;
      }
      for (; lVar36 != 7; lVar36 = lVar36 + 1) {
        uVar28 = (&DAT_1000b6b4)[lVar36];
        uVar37 = (&DAT_1000b6d0)[lVar36];
        if (uVar28 < *param_1) {
          uVar27 = 0;
          if (uVar37 != 0) {
            uVar27 = (*param_1 + ~uVar28) / uVar37;
          }
          uVar27 = uVar27 + 1;
        }
        else {
          uVar27 = 0;
        }
        uVar9 = (&DAT_1000b6ec)[lVar36];
        if (uVar9 < param_1[1]) {
          uVar10 = (&DAT_1000b708)[lVar36];
          uVar18 = 0;
          if (uVar10 != 0) {
            uVar18 = (param_1[1] + ~uVar9) / uVar10;
          }
          if ((uVar27 != 0) && (uVar18 != 0xffffffff)) {
            uVar29 = recovered_1000a858((long)param_1);
            uVar31 = (ulong)uVar29 * (ulong)uVar27 + 7 >> 3;
            recovered_10008cc4(&local_b8,uVar31 + 1);
            recovered_10008cc4((long *)&pbStack_d0,uVar31);
            recovered_10008cc4((long *)&pbStack_e8,uVar31);
            uVar35 = 0;
            bVar25 = false;
            uVar38 = (ulong)uVar27;
            while ((uVar35 < uVar18 + 1 &&
                   (bVar26 = recovered_1000a948((long)&local_a0,
                                                CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8),
                                                uStack_b0), (bVar26 & 1) != 0))) {
              pbVar5 = pbStack_d0;
              if (!bVar25) {
                pbVar5 = (byte *)0x0;
              }
              uVar30 = recovered_1000a9a4((uint)*(byte *)CONCAT71(PF_PART7(local_b8, 1),
                                                                  (undefined1)local_b8),
                                          (char *)pbStack_e8,
                                          (char *)((byte *)CONCAT71(PF_PART7(local_b8, 1),
                                                                    (undefined1)local_b8) + 1),
                                          pbVar5,uVar31,(ulong)uVar7);
              if (((int)uVar30 == 0) || (6 < param_1[3])) break;
              lVar4 = *param_4 + (ulong)*param_1 * (ulong)(uVar9 + uVar10 * (int)uVar35) * 4;
              switch((uintptr_t)(param_1[3])) {
              case 0:
                uVar27 = uVar28;
                uVar33 = uVar38;
                pbVar5 = pbStack_e8;
                if (param_1[2] == 8) {
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    bVar26 = *pbVar5;
                    bVar11 = *(byte *)(param_3 + 5);
                    uVar29 = *(uint *)(param_3 + 3);
                    pbVar1 = (byte *)(lVar4 + (ulong)uVar27 * 4);
                    *pbVar1 = bVar26;
                    pbVar1[1] = bVar26;
                    pbVar1[2] = bVar26;
                    pbVar1[3] = -(uVar29 != bVar26 | (bVar11 ^ 0xff) & 1);
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 1;
                  }
                }
                else {
                  pbVar5 = pbStack_e8 + 1;
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    uVar6 = (uint)(*(ushort *)(pbVar5 + -1) >> 8) |
                            (*(ushort *)(pbVar5 + -1) & 0xff00ff) << 8;
                    bVar26 = *(byte *)(param_3 + 5);
                    uVar29 = *(uint *)(param_3 + 3);
                    uVar17 = (undefined1)((uVar6 * 0xff + 0x7fff) / 0xffff);
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar27 * 4);
                    *puVar2 = uVar17;
                    puVar2[1] = uVar17;
                    puVar2[2] = uVar17;
                    puVar2[3] = -(uVar6 != uVar29 | (bVar26 ^ 0xff) & 1);
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 2;
                  }
                }
                break;
              default:
                goto switchD_10007338_caseD_1;
              case 2:
                if (param_1[2] == 8) {
                  uVar27 = uVar28;
                  pbVar5 = pbStack_e8 + 2;
                  for (uVar33 = uVar38; uVar33 != 0; uVar33 = uVar33 - 1) {
                    if ((*(char *)((long)param_3 + 0x29) == '\x01' &&
                         *(uint *)((long)param_3 + 0x1c) == (uint)pbVar5[-2]) &&
                       (*(uint *)(param_3 + 4) == (uint)pbVar5[-1])) {
                      bVar26 = -(*(uint *)((long)param_3 + 0x24) != (uint)*pbVar5);
                    }
                    else {
                      bVar26 = 0xff;
                    }
                    pbVar1 = (byte *)(lVar4 + (ulong)uVar27 * 4);
                    *pbVar1 = pbVar5[-2];
                    pbVar1[1] = pbVar5[-1];
                    pbVar1[2] = *pbVar5;
                    pbVar1[3] = bVar26;
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 3;
                  }
                }
                else {
                  puVar3 = (ushort *)(pbStack_e8 + 2);
                  uVar27 = uVar28;
                  for (uVar33 = uVar38; uVar33 != 0; uVar33 = uVar33 - 1) {
                    uVar14 = (uint)(puVar3[-1] >> 8) | (puVar3[-1] & 0xff00ff) << 8;
                    uVar15 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
                    uVar16 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
                    bVar26 = *(byte *)((long)param_3 + 0x29);
                    uVar29 = *(uint *)((long)param_3 + 0x1c);
                    uVar6 = *(uint *)(param_3 + 4);
                    uVar8 = *(uint *)((long)param_3 + 0x24);
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar27 * 4);
                    *puVar2 = (char)((uVar14 * 0xff + 0x7fff) / 0xffff);
                    puVar2[1] = (char)((uVar15 * 0xff + 0x7fff) / 0xffff);
                    puVar2[2] = (char)((uVar16 * 0xff + 0x7fff) / 0xffff);
                    puVar2[3] = -(uVar14 != uVar29 | (bVar26 ^ 0xff) & 1 |
                                 (uVar15 != uVar6 || uVar16 != uVar8));
                    uVar27 = uVar27 + uVar37;
                    puVar3 = puVar3 + 3;
                  }
                }
                break;
              case 3:
                uVar32 = param_3[1];
                uVar27 = uVar28;
                pbVar5 = pbStack_e8;
                for (uVar33 = uVar38; uVar33 != 0; uVar33 = uVar33 - 1) {
                  if (uVar32 >> 2 <= (ulong)*pbVar5) goto switchD_10007338_caseD_1;
                  recovered_100013dc((void *)(lVar4 + (ulong)uVar27 * 4),
                                     (void *)(*param_3 + (ulong)*pbVar5 * 4),4);
                  uVar27 = uVar27 + uVar37;
                  pbVar5 = pbVar5 + 1;
                }
                break;
              case 4:
                uVar27 = uVar28;
                uVar33 = uVar38;
                pbVar5 = pbStack_e8;
                if (param_1[2] == 8) {
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    pbVar1 = (byte *)(lVar4 + (ulong)uVar27 * 4);
                    bVar26 = *pbVar5;
                    *pbVar1 = bVar26;
                    pbVar1[1] = bVar26;
                    pbVar1[2] = *pbVar5;
                    pbVar1[3] = pbVar5[1];
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 2;
                  }
                }
                else {
                  pbVar5 = pbStack_e8 + 3;
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    uVar13 = *(ushort *)(pbVar5 + -3);
                    uVar12 = *(ushort *)(pbVar5 + -1);
                    uVar17 = (undefined1)
                             (((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                               ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) / 0xffff)
                    ;
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar27 * 4);
                    *puVar2 = uVar17;
                    puVar2[1] = uVar17;
                    puVar2[2] = uVar17;
                    puVar2[3] = (char)(((((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 4;
                  }
                }
                break;
              case 6:
                uVar27 = uVar28;
                uVar33 = uVar38;
                pbVar5 = pbStack_e8;
                if (param_1[2] == 8) {
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    recovered_100013dc((void *)(lVar4 + (ulong)uVar27 * 4),pbVar5,4);
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 4;
                  }
                }
                else {
                  pbVar5 = pbStack_e8 + 3;
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    puVar2 = (undefined1 *)(lVar4 + (ulong)uVar27 * 4);
                    uVar13 = *(ushort *)(pbVar5 + -3);
                    *puVar2 = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                      ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff) /
                                    0xffff);
                    uVar13 = *(ushort *)(pbVar5 + -1);
                    puVar2[1] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar13 = *(ushort *)(pbVar5 + 1);
                    puVar2[2] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar13 = *(ushort *)(pbVar5 + 3);
                    puVar2[3] = (char)(((((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8) * 0x100 -
                                        ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8)) + 0x7fff)
                                      / 0xffff);
                    uVar27 = uVar27 + uVar37;
                    pbVar5 = pbVar5 + 8;
                  }
                }
              }
              uVar24 = uStack_c0;
              uVar30 = uStack_c8;
              pbVar5 = pbStack_d0;
              pbStack_d0 = pbStack_e8;
              pbStack_e8 = pbVar5;
              uStack_c0 = uStack_d8;
              uStack_c8 = uStack_e0;
              uStack_d8 = uVar24;
              uStack_e0 = uVar30;
              uVar35 = uVar35 + 1;
              bVar25 = true;
            }
switchD_10007338_caseD_1:
            uStack_e0 = 0;
            recovered_10004020(pbStack_e8);
            uStack_c8 = 0;
            recovered_10004020(pbStack_d0);
            uStack_b0 = 0;
            recovered_10004020((void *)CONCAT71(PF_PART7(local_b8, 1),(undefined1)local_b8));
            if (uVar35 < uVar18 + 1) goto LAB_10007af4;
          }
        }
      }
      bVar25 = local_70 == local_80;
      goto LAB_10007b88;
    }
  }
LAB_10007af4:
  bVar25 = false;
LAB_10007b88:
  recovered_1000ab74(&local_a0);
  return bVar25;
}

#undef DAT_1000b6b4
#undef DAT_1000b6d0
#undef DAT_1000b6ec
#undef DAT_1000b708
#undef local_b8
#undef local_a0
#undef local_98
#undef local_88
#undef local_80
#undef local_70
#undef pbStack_e8
#undef uStack_e0
#undef uStack_d8
#undef pbStack_d0
#undef uStack_c8
#undef uStack_c0
#undef uStack_b0
#undef uStack_90
#undef uStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c24
 */

undefined8 * recovered_10007c24(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10004020((void *)*param_1);
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
 * Address: 0x10007c74
 */

long recovered_10007c74(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a78c((long *)(param_1 + 0x78));
  recovered_10004020(*(void **)(param_1 + 0x78));
  recovered_1000a678((undefined8 *)(param_1 + 0x60));
  recovered_1000af38((undefined8 *)(param_1 + 0x48));
  recovered_1000af38((undefined8 *)(param_1 + 0x30));
  return param_1;
}


#define puStack_50 (*(undefined1 * *)(pf_stack_frame + 16))
#define pvStack_48 (*(void * *)(pf_stack_frame + 24))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cb4
 */

ulong recovered_10007cb4(long param_1,uint *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;

  pvStack_48 = (void *)0x0;
  puStack_50 = (undefined1 *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  recovered_10006fe4((undefined8 *)param_2,&puStack_50);
  uStack_40 = 0;
  recovered_10004020(pvStack_48);
  puStack_50 = (undefined1 *)0x0;
  uStack_40 = 0;
  pvStack_48 = (void *)0x0;
  if ((param_1 != 0) && (piVar4 = recovered_10003280(param_1,((uintptr_t)pf_module_state+0x58dU)), piVar4 != (int *)0x0)) {
    uVar5 = recovered_10003934(piVar4,0,2);
    if (((int)uVar5 == 0) &&
       ((uVar6 = recovered_100039c8((long)piVar4), -1 < (long)uVar6 &&
        (uVar5 = recovered_10003934(piVar4,0,0), (int)uVar5 == 0)))) {
      recovered_10008cf0((long *)&puStack_50,uVar6);
      if (pvStack_48 == (void *)0x0) {
        bVar2 = true;
      }
      else {
        uVar6 = recovered_1000360c(puStack_50,1,(long)pvStack_48,piVar4);
        bVar2 = (void *)uVar6 == pvStack_48;
      }
    }
    else {
      bVar2 = false;
    }
    uVar5 = recovered_100035c8(piVar4);
    bVar1 = false;
    if ((int)uVar5 == 0) {
      bVar1 = bVar2;
    }
    if (bVar1) {
      bVar3 = recovered_10004e34(puStack_50,(ulong)pvStack_48,param_2);
      uVar6 = (ulong)bVar3;
      goto LAB_10007d58;
    }
  }
  uVar6 = 0;
LAB_10007d58:
  pvStack_48 = (void *)0x0;
  recovered_10004020(puStack_50);
  return uVar6;
}

#undef puStack_50
#undef pvStack_48
#undef uStack_40
#undef uStack_38

#undef DAT_1000b440
#define DAT_1000b440 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef DAT_1000b886
#define DAT_1000b886 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54eU)))
#undef DAT_1000b88b
#define DAT_1000b88b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x553U)))
#undef DAT_1000b8bb
#define DAT_1000b8bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583U)))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 64))
#define local_98 (*(void * *)(pf_stack_frame + 24))
#define local_90 (*(ulong *)(pf_stack_frame + 32))
#define local_80 (*(undefined8 *)(pf_stack_frame + 48))
#define local_78 (*(ulong *)(pf_stack_frame + 56))
#define local_61 (*(undefined1 *)(pf_stack_frame + 79))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

undefined4 recovered_10007de0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uchar uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *src;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;

  uVar10 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar11 = recovered_10003280(param_1,((uintptr_t)pf_module_state+0x54bU));
    uVar10 = 0;
    if (puVar11 != (uint *)0x0) {
      uVar8 = recovered_100081f4(puVar11,((uintptr_t)pf_module_state+0x14fU),8);
      if (uVar8 != '\0') {
        local_80 = (void *)CONCAT17((char)param_4,
                                    CONCAT16((char)(param_4 >> 8),
                                             CONCAT15((char)(param_4 >> 0x10),
                                                      CONCAT14((char)(param_4 >> 0x18),
                                                               CONCAT13((char)param_3,
                                                                        CONCAT12((char)(param_3 >> 8
                                                                                       ),CONCAT11((
                                                  char)(param_3 >> 0x10),(char)(param_3 >> 0x18)))))
                                                  )));
        PF_PART5(local_78, 0) = (uint5)(uint)DAT_1000b440;
        uVar12 = recovered_1000822c(puVar11,&DAT_1000b886,(byte *)&local_80,0xd);
        if ((int)uVar12 != 0) {
          local_78 = 0;
          uStack_70 = 0;
          local_80 = (void *)0x0;
          uVar1 = (param_3 & 0xffffffff) << 2 | 1;
          recovered_10008cf0(&local_80,uVar1 * (param_4 & 0xffffffff));
          uVar14 = (param_3 & 0xffffffff) * 4;
          lVar23 = 1;
          lVar22 = param_2;
          for (uVar12 = 0; uVar12 != (param_4 & 0xffffffff); uVar12 = uVar12 + 1) {
            uVar16 = 0;
            uVar18 = 0;
            uVar17 = 0;
            src = (void *)(param_2 + uVar12 * uVar14);
            pvVar3 = (void *)0x0;
            if (uVar12 != 0) {
              pvVar3 = (void *)((long)src + (param_3 & 0xffffffff) * -4);
            }
            uVar19 = -(ulong)(pvVar3 == (void *)0x0);
            for (; uVar14 != uVar18; uVar18 = uVar18 + 1) {
              bVar4 = *(byte *)(lVar22 + uVar18);
              iVar6 = (int)(char)bVar4;
              uVar9 = 0x100 - bVar4;
              if (-1 < iVar6) {
                uVar9 = (uint)bVar4;
              }
              if (uVar18 < 4) {
                uVar20 = 0;
              }
              else {
                uVar20 = (uint)*(byte *)(lVar22 + uVar18 + -4);
              }
              uVar20 = iVar6 - uVar20;
              uVar2 = 0x100 - (uVar20 & 0xff);
              if (-1 < (char)uVar20) {
                uVar2 = uVar20 & 0xff;
              }
              if (pvVar3 != (void *)0x0) {
                uVar5 = iVar6 - (uint)*(byte *)((long)pvVar3 + uVar18);
                uVar20 = 0x100 - (uVar5 & 0xff);
                if (-1 < (char)uVar5) {
                  uVar20 = uVar5 & 0xff;
                }
                uVar19 = uVar19 + uVar20;
              }
              uVar17 = uVar17 + uVar9;
              uVar16 = uVar16 + uVar2;
            }
            cVar7 = uVar16 < uVar17;
            if (!(bool)cVar7) {
              uVar16 = uVar17;
            }
            if (uVar19 < uVar16 && pvVar3 != (void *)0x0) {
              cVar7 = '\x02';
            }
            pcVar13 = (char *)((long)local_80 + uVar12 * uVar1);
            *pcVar13 = cVar7;
            if (cVar7 == '\x02') {
              if (pvVar3 == (void *)0x0) goto LAB_10008044;
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                *(char *)((long)local_80 + uVar18 + lVar23) =
                     *(char *)(lVar22 + uVar18) - *(char *)((long)pvVar3 + uVar18);
              }
            }
            else if (cVar7 == '\x01') {
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                if (uVar18 < 4) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = *(char *)(lVar22 + uVar18 + -4);
                }
                *(char *)((long)local_80 + uVar18 + lVar23) = *(char *)(lVar22 + uVar18) - cVar7;
              }
            }
            else {
LAB_10008044:
              recovered_100013dc(pcVar13 + 1,src,uVar14);
            }
            lVar22 = lVar22 + uVar14;
            lVar23 = lVar23 + uVar1;
          }
          local_90 = 0;
          uStack_88 = 0;
          local_98 = (void *)0x0;
          local_61 = 0x78;
          recovered_10009e6c((long *)&local_98,&local_61);
          local_61 = 1;
          recovered_10009e6c((long *)&local_98,&local_61);
          uVar12 = 0;
          while (uVar1 = local_78 - uVar12, uVar12 <= local_78 && uVar1 != 0) {
            if (0xfffe < uVar1) {
              uVar1 = 0xffff;
            }
            uVar14 = uVar1 + uVar12;
            local_61 = uVar14 == local_78;
            recovered_10009e6c((long *)&local_98,&local_61);
            local_61 = (undefined1)uVar1;
            recovered_10009e6c((long *)&local_98,&local_61);
            local_61 = (undefined1)(uVar1 >> 8);
            recovered_10009e6c((long *)&local_98,&local_61);
            uVar9 = (uint)uVar1 ^ 0xffff;
            local_61 = (undefined1)uVar9;
            recovered_10009e6c((long *)&local_98,&local_61);
            local_61 = (undefined1)(uVar9 >> 8);
            recovered_10009e6c((long *)&local_98,&local_61);
            recovered_1000930c((long *)&local_98,(long)local_98 + local_90,
                               (undefined1 *)((long)local_80 + uVar12),
                               (undefined1 *)((long)local_80 + uVar14));
            uVar12 = uVar14;
          }
          uVar9 = recovered_10009e08((long)local_80,local_78);
          uVar1 = local_90;
          recovered_10008cf0((long *)&local_98,local_90 + 4);
          uVar12 = 0;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          *(uint *)((long)local_98 + uVar1) = uVar9 >> 0x10 | uVar9 << 0x10;
          do {
            uVar1 = local_90 - uVar12;
            if (local_90 < uVar12 || uVar1 == 0) {
              local_90 = 0;
              recovered_10004020(local_98);
              local_78 = 0;
              recovered_10004020(local_80);
              uVar12 = recovered_1000822c(puVar11,&DAT_1000b88b,(byte *)0x0,0);
              uVar21 = (undefined4)uVar12;
              goto LAB_10008178;
            }
            if (0x3ffff < uVar1) {
              uVar1 = 0x40000;
            }
            uVar14 = recovered_1000822c(puVar11,&DAT_1000b8bb,(byte *)((long)local_98 + uVar12),
                                        uVar1);
            uVar12 = uVar1 + uVar12;
          } while ((uVar14 & 1) != 0);
          local_90 = 0;
          recovered_10004020(local_98);
          local_78 = 0;
          recovered_10004020(local_80);
        }
      }
      uVar21 = 0;
LAB_10008178:
      uVar15 = recovered_100035c8((int *)puVar11);
      uVar10 = 0;
      if ((int)uVar15 == 0) {
        uVar10 = uVar21;
      }
    }
  }
  return uVar10;
}

#undef DAT_1000b440
#undef DAT_1000b886
#undef DAT_1000b88b
#undef DAT_1000b8bb
#undef uStack_88
#undef uStack_70
#undef local_98
#undef local_90
#undef local_80
#undef local_78
#undef local_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081f4
 */

uchar recovered_100081f4(uint *param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == 0) {
    return '\x01';
  }
  lVar1 = recovered_10003824(param_2,1,param_3,param_1);
  return lVar1 == param_3;
}


#define local_34 (*(uint *)(pf_stack_frame + 28))
#define uStack_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000822c
 */

ulong recovered_1000822c(uint *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;

  uVar3 = 0;
  if ((param_4 >> 0x20 == 0) && (param_3 != (byte *)0x0 || param_4 == 0)) {
    uVar2 = ((uint)param_4 & 0xff00ff00) >> 8 | ((uint)param_4 & 0xff00ff) << 8;
    local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = recovered_1000a69c(0,param_2,4);
    if (param_4 != 0) {
      uVar2 = recovered_1000a69c(uVar2,param_3,param_4);
    }
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uStack_38 = uVar2 >> 0x10 | uVar2 << 0x10;
    bVar1 = recovered_100081f4(param_1,(long)&local_34,4);
    uVar3 = (ulong)bVar1;
    if (bVar1 != 0) {
      bVar1 = recovered_100081f4(param_1,(long)param_2,4);
      uVar3 = (ulong)bVar1;
      if (bVar1 != 0) {
        bVar1 = recovered_100081f4(param_1,(long)param_3,param_4);
        uVar3 = (ulong)bVar1;
        if (bVar1 != 0) {
          bVar1 = recovered_100081f4(param_1,(long)&uStack_38,4);
          uVar3 = (ulong)bVar1;
        }
      }
    }
  }
  return uVar3;
}

#undef local_34
#undef uStack_38

#undef DAT_1000b440
#define DAT_1000b440 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef DAT_1000b886
#define DAT_1000b886 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54eU)))
#undef DAT_1000b88b
#define DAT_1000b88b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x553U)))
#undef DAT_1000b8bb
#define DAT_1000b8bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583U)))
#define pvStack_98 (*(void * *)(pf_stack_frame + 24))
#define uStack_90 (*(ulong *)(pf_stack_frame + 32))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_78 (*(ulong *)(pf_stack_frame + 56))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_61 (*(undefined1 *)(pf_stack_frame + 79))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e4
 */

undefined4 recovered_100082e4(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uchar uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *src;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;

  uVar10 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar11 = recovered_10003280(param_1,((uintptr_t)pf_module_state+0x54bU));
    uVar10 = 0;
    if (puVar11 != (uint *)0x0) {
      uVar8 = recovered_100081f4(puVar11,((uintptr_t)pf_module_state+0x14fU),8);
      if (uVar8 != '\0') {
        uStack_80 = (void *)CONCAT17((char)param_4,
                                     CONCAT16((char)(param_4 >> 8),
                                              CONCAT15((char)(param_4 >> 0x10),
                                                       CONCAT14((char)(param_4 >> 0x18),
                                                                CONCAT13((char)param_3,
                                                                         CONCAT12((char)(param_3 >>
                                                                                        8),CONCAT11(
                                                  (char)(param_3 >> 0x10),(char)(param_3 >> 0x18))))
                                                  ))));
        PF_PART5(uStack_78, 0) = (uint5)(uint)DAT_1000b440;
        uVar12 = recovered_1000822c(puVar11,&DAT_1000b886,(byte *)&uStack_80,0xd);
        if ((int)uVar12 != 0) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_80 = (void *)0x0;
          uVar1 = (param_3 & 0xffffffff) << 2 | 1;
          recovered_10008cf0(&uStack_80,uVar1 * (param_4 & 0xffffffff));
          uVar14 = (param_3 & 0xffffffff) * 4;
          lVar23 = 1;
          lVar22 = param_2;
          for (uVar12 = 0; uVar12 != (param_4 & 0xffffffff); uVar12 = uVar12 + 1) {
            uVar16 = 0;
            uVar18 = 0;
            uVar17 = 0;
            src = (void *)(param_2 + uVar12 * uVar14);
            pvVar3 = (void *)0x0;
            if (uVar12 != 0) {
              pvVar3 = (void *)((long)src + (param_3 & 0xffffffff) * -4);
            }
            uVar19 = -(ulong)(pvVar3 == (void *)0x0);
            for (; uVar14 != uVar18; uVar18 = uVar18 + 1) {
              bVar4 = *(byte *)(lVar22 + uVar18);
              iVar6 = (int)(char)bVar4;
              uVar9 = 0x100 - bVar4;
              if (-1 < iVar6) {
                uVar9 = (uint)bVar4;
              }
              if (uVar18 < 4) {
                uVar20 = 0;
              }
              else {
                uVar20 = (uint)*(byte *)(lVar22 + uVar18 + -4);
              }
              uVar20 = iVar6 - uVar20;
              uVar2 = 0x100 - (uVar20 & 0xff);
              if (-1 < (char)uVar20) {
                uVar2 = uVar20 & 0xff;
              }
              if (pvVar3 != (void *)0x0) {
                uVar5 = iVar6 - (uint)*(byte *)((long)pvVar3 + uVar18);
                uVar20 = 0x100 - (uVar5 & 0xff);
                if (-1 < (char)uVar5) {
                  uVar20 = uVar5 & 0xff;
                }
                uVar19 = uVar19 + uVar20;
              }
              uVar17 = uVar17 + uVar9;
              uVar16 = uVar16 + uVar2;
            }
            cVar7 = uVar16 < uVar17;
            if (!(bool)cVar7) {
              uVar16 = uVar17;
            }
            if (uVar19 < uVar16 && pvVar3 != (void *)0x0) {
              cVar7 = '\x02';
            }
            pcVar13 = (char *)((long)uStack_80 + uVar12 * uVar1);
            *pcVar13 = cVar7;
            if (cVar7 == '\x02') {
              if (pvVar3 == (void *)0x0) goto LAB_10008044;
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                *(char *)((long)uStack_80 + uVar18 + lVar23) =
                     *(char *)(lVar22 + uVar18) - *(char *)((long)pvVar3 + uVar18);
              }
            }
            else if (cVar7 == '\x01') {
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                if (uVar18 < 4) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = *(char *)(lVar22 + uVar18 + -4);
                }
                *(char *)((long)uStack_80 + uVar18 + lVar23) = *(char *)(lVar22 + uVar18) - cVar7;
              }
            }
            else {
LAB_10008044:
              recovered_100013dc(pcVar13 + 1,src,uVar14);
            }
            lVar22 = lVar22 + uVar14;
            lVar23 = lVar23 + uVar1;
          }
          uStack_90 = 0;
          uStack_88 = 0;
          pvStack_98 = (void *)0x0;
          uStack_61 = 0x78;
          recovered_10009e6c((long *)&pvStack_98,&uStack_61);
          uStack_61 = 1;
          recovered_10009e6c((long *)&pvStack_98,&uStack_61);
          uVar12 = 0;
          while (uVar1 = uStack_78 - uVar12, uVar12 <= uStack_78 && uVar1 != 0) {
            if (0xfffe < uVar1) {
              uVar1 = 0xffff;
            }
            uVar14 = uVar1 + uVar12;
            uStack_61 = uVar14 == uStack_78;
            recovered_10009e6c((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)uVar1;
            recovered_10009e6c((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar1 >> 8);
            recovered_10009e6c((long *)&pvStack_98,&uStack_61);
            uVar9 = (uint)uVar1 ^ 0xffff;
            uStack_61 = (undefined1)uVar9;
            recovered_10009e6c((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar9 >> 8);
            recovered_10009e6c((long *)&pvStack_98,&uStack_61);
            recovered_1000930c((long *)&pvStack_98,(long)pvStack_98 + uStack_90,
                               (undefined1 *)((long)uStack_80 + uVar12),
                               (undefined1 *)((long)uStack_80 + uVar14));
            uVar12 = uVar14;
          }
          uVar9 = recovered_10009e08((long)uStack_80,uStack_78);
          uVar1 = uStack_90;
          recovered_10008cf0((long *)&pvStack_98,uStack_90 + 4);
          uVar12 = 0;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          *(uint *)((long)pvStack_98 + uVar1) = uVar9 >> 0x10 | uVar9 << 0x10;
          do {
            uVar1 = uStack_90 - uVar12;
            if (uStack_90 < uVar12 || uVar1 == 0) {
              uStack_90 = 0;
              recovered_10004020(pvStack_98);
              uStack_78 = 0;
              recovered_10004020(uStack_80);
              uVar12 = recovered_1000822c(puVar11,&DAT_1000b88b,(byte *)0x0,0);
              uVar21 = (undefined4)uVar12;
              goto LAB_10008178;
            }
            if (0x3ffff < uVar1) {
              uVar1 = 0x40000;
            }
            uVar14 = recovered_1000822c(puVar11,&DAT_1000b8bb,(byte *)((long)pvStack_98 + uVar12),
                                        uVar1);
            uVar12 = uVar1 + uVar12;
          } while ((uVar14 & 1) != 0);
          uStack_90 = 0;
          recovered_10004020(pvStack_98);
          uStack_78 = 0;
          recovered_10004020(uStack_80);
        }
      }
      uVar21 = 0;
LAB_10008178:
      uVar15 = recovered_100035c8((int *)puVar11);
      uVar10 = 0;
      if ((int)uVar15 == 0) {
        uVar10 = uVar21;
      }
    }
  }
  return uVar10;
}

#undef DAT_1000b440
#undef DAT_1000b886
#undef DAT_1000b88b
#undef DAT_1000b8bb
#undef pvStack_98
#undef uStack_90
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef uStack_70
#undef uStack_61

#undef DAT_1000b448
#define DAT_1000b448 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef DAT_1000b450
#define DAT_1000b450 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x118U)))
#undef DAT_1000b458
#define DAT_1000b458 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x120U)))
#define local_e8 (*(void * *)(pf_stack_frame + 24))
#define local_cc (*(undefined4 *)(pf_stack_frame + 52))
#define local_c8 (*(undefined1 *)(pf_stack_frame + 56))
#define local_c7 (*(undefined1 *)(pf_stack_frame + 57))
#define local_c6 (*(undefined1 *)(pf_stack_frame + 58))
#define local_c5 (*(undefined1 *)(pf_stack_frame + 59))
#define local_c4 (*(undefined1 *)(pf_stack_frame + 60))
#define local_c3 (*(undefined1 *)(pf_stack_frame + 61))
#define local_c2 (*(undefined1 *)(pf_stack_frame + 62))
#define local_c1 (*(undefined1 *)(pf_stack_frame + 63))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_b8 (*(undefined1 *)(pf_stack_frame + 72))
#define local_b7 (*(undefined1 *)(pf_stack_frame + 73))
#define local_b6 (*(undefined1 *)(pf_stack_frame + 74))
#define local_b5 (*(undefined1 *)(pf_stack_frame + 75))
#define local_b4 (*(undefined8 *)(pf_stack_frame + 76))
#define local_ac (*(undefined8 *)(pf_stack_frame + 84))
#define local_9c (*(undefined4 *)(pf_stack_frame + 100))
#define local_8c (*(undefined8 *)(pf_stack_frame + 116))
#define local_70 (*(undefined4 *)(pf_stack_frame + 144))
#define local_5e (*(undefined2 *)(pf_stack_frame + 162))
#define local_5c (*(undefined1 *)(pf_stack_frame + 164))
#define local_5b (*(undefined1 *)(pf_stack_frame + 165))
#define local_5a (*(undefined1 *)(pf_stack_frame + 166))
#define local_59 (*(undefined1 *)(pf_stack_frame + 167))
#define local_58 (*(undefined4 *)(pf_stack_frame + 168))
#define local_54 (*(undefined4 *)(pf_stack_frame + 172))
#define lStack_e0 (*(long *)(pf_stack_frame + 32))
#define uStack_a4 (*(undefined8 *)(pf_stack_frame + 92))
#define uStack_98 (*(undefined1 *)(pf_stack_frame + 104))
#define uStack_97 (*(undefined2 *)(pf_stack_frame + 105))
#define uStack_95 (*(undefined4 *)(pf_stack_frame + 107))
#define uStack_91 (*(undefined1 *)(pf_stack_frame + 111))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 112))
#define uStack_84 (*(undefined8 *)(pf_stack_frame + 124))
#define uStack_7c (*(undefined8 *)(pf_stack_frame + 132))
#define uStack_74 (*(undefined4 *)(pf_stack_frame + 140))
#define uStack_6c (*(undefined4 *)(pf_stack_frame + 148))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e8
 */

byte recovered_100082e8(long param_1,long param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uchar uVar4;
  byte bVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;

  bVar5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    uVar3 = (param_3 & 0xffffffff) * 4;
    uVar9 = uVar3 * param_4;
    if ((uVar9 < 0xffffff86) &&
       (puVar6 = recovered_10003280(param_1,((uintptr_t)pf_module_state+0x54bU)), puVar6 != (uint *)0x0)) {
      local_58 = 0;
      local_5e = 0x4d42;
      iVar1 = (int)uVar9 + 0x7a;
      local_5c = (undefined1)iVar1;
      local_5b = (undefined1)((uint)iVar1 >> 8);
      local_5a = (undefined1)((uint)iVar1 >> 0x10);
      local_59 = (undefined1)((uint)iVar1 >> 0x18);
      local_54 = 0x7a;
      local_ac = 0;
      uStack_90 = 0;
      uStack_97 = 0;
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_74 = 0;
      local_70 = 0;
      uStack_7c = 0;
      uStack_84 = 0;
      local_8c = 0;
      local_cc = 0x6c;
      local_c8 = (undefined1)param_3;
      local_c7 = (undefined1)(param_3 >> 8);
      local_c6 = (undefined1)(param_3 >> 0x10);
      local_c5 = (undefined1)(param_3 >> 0x18);
      iVar1 = -param_4;
      local_c4 = (undefined1)iVar1;
      local_c3 = (undefined1)((uint)iVar1 >> 8);
      local_c2 = (undefined1)((uint)iVar1 >> 0x10);
      local_c1 = (undefined1)((uint)iVar1 >> 0x18);
      local_c0 = DAT_1000b448;
      local_b8 = (undefined1)uVar9;
      local_b7 = (undefined1)(uVar9 >> 8);
      local_b6 = (undefined1)(uVar9 >> 0x10);
      local_b5 = (undefined1)(uVar9 >> 0x18);
      local_b4 = DAT_1000b450;
      uStack_a4 = 0xff0000ff0000;
      local_9c = 0xff;
      uStack_98 = 0;
      uStack_95 = (undefined4)DAT_1000b458;
      uStack_91 = 0x73;
      uVar4 = recovered_100081f4(puVar6,(long)&local_5e,0xe);
      bVar5 = 0;
      if (uVar4 != '\0') {
        bVar5 = recovered_100081f4(puVar6,(long)&local_cc,0x6c);
      }
      recovered_10008cc4((long *)&local_e8,uVar3);
      for (uVar9 = 0; ((bVar5 & 1) != 0 && (uVar9 < param_4)); uVar9 = uVar9 + 1) {
        for (uVar8 = 0; uVar3 != uVar8; uVar8 = uVar8 + 4) {
          puVar2 = (undefined1 *)(param_2 + uVar8);
          *(undefined1 *)((long)local_e8 + uVar8) = puVar2[2];
          *(undefined1 *)((long)local_e8 + uVar8 + 1) = puVar2[1];
          *(undefined1 *)((long)local_e8 + uVar8 + 2) = *puVar2;
          *(undefined1 *)((long)local_e8 + uVar8 + 3) = puVar2[3];
        }
        bVar5 = recovered_100081f4(puVar6,(long)local_e8,lStack_e0);
        param_2 = param_2 + uVar3;
      }
      uVar7 = recovered_100035c8((int *)puVar6);
      bVar5 = bVar5 & (int)uVar7 == 0;
      lStack_e0 = 0;
      recovered_10004020(local_e8);
    }
    else {
      bVar5 = 0;
    }
  }
  return bVar5;
}

#undef DAT_1000b448
#undef DAT_1000b450
#undef DAT_1000b458
#undef local_e8
#undef local_cc
#undef local_c8
#undef local_c7
#undef local_c6
#undef local_c5
#undef local_c4
#undef local_c3
#undef local_c2
#undef local_c1
#undef local_c0
#undef local_b8
#undef local_b7
#undef local_b6
#undef local_b5
#undef local_b4
#undef local_ac
#undef local_9c
#undef local_8c
#undef local_70
#undef local_5e
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_54
#undef lStack_e0
#undef uStack_a4
#undef uStack_98
#undef uStack_97
#undef uStack_95
#undef uStack_91
#undef uStack_90
#undef uStack_84
#undef uStack_7c
#undef uStack_74
#undef uStack_6c
#undef uStack_68

#define lStack_68 (*(long *)(pf_stack_frame + 24))
#define local_70 (*(void * *)(pf_stack_frame + 16))
#define local_58 (*(undefined8 *)(pf_stack_frame + 40))
#define local_50 (*(undefined4 *)(pf_stack_frame + 48))
#define local_4c (*(undefined1 *)(pf_stack_frame + 52))
#define local_4b (*(undefined1 *)(pf_stack_frame + 53))
#define local_4a (*(undefined1 *)(pf_stack_frame + 54))
#define local_49 (*(undefined1 *)(pf_stack_frame + 55))
#define local_48 (*(undefined2 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008548
 */

uint recovered_10008548(long param_1,long param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;

  uVar8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar5 = recovered_10003280(param_1,((uintptr_t)pf_module_state+0x54bU));
    uVar8 = 0;
    if (puVar5 != (uint *)0x0) {
      local_50 = 0;
      local_58 = 0x20000;
      local_4c = (undefined1)param_3;
      local_4b = (undefined1)(param_3 >> 8);
      local_4a = (undefined1)param_4;
      local_49 = (undefined1)(param_4 >> 8);
      local_48 = 0x2820;
      bVar3 = recovered_100081f4(puVar5,(long)&local_58,0x12);
      uVar2 = (ulong)param_3 * 4;
      recovered_10008cc4((long *)&local_70,uVar2);
      for (uVar9 = 0; ((bVar3 & 1) != 0 && (uVar9 < param_4)); uVar9 = uVar9 + 1) {
        for (uVar7 = 0; uVar2 != uVar7; uVar7 = uVar7 + 4) {
          puVar1 = (undefined1 *)(param_2 + uVar7);
          *(undefined1 *)((long)local_70 + uVar7) = puVar1[2];
          *(undefined1 *)((long)local_70 + uVar7 + 1) = puVar1[1];
          *(undefined1 *)((long)local_70 + uVar7 + 2) = *puVar1;
          *(undefined1 *)((long)local_70 + uVar7 + 3) = puVar1[3];
        }
        bVar3 = recovered_100081f4(puVar5,(long)local_70,lStack_68);
        param_2 = param_2 + uVar2;
      }
      if ((bVar3 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        bVar3 = recovered_100081f4(puVar5,((uintptr_t)pf_module_state+0x3ecU),0x1a);
        uVar4 = (uint)bVar3;
      }
      uVar6 = recovered_100035c8((int *)puVar5);
      uVar8 = 0;
      if ((int)uVar6 == 0) {
        uVar8 = uVar4;
      }
      lStack_68 = 0;
      recovered_10004020(local_70);
    }
  }
  return uVar8;
}

#undef lStack_68
#undef local_70
#undef local_58
#undef local_50
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48

#undef DAT_1000b460
#define DAT_1000b460 (*(void * *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_1000b468
#define DAT_1000b468 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x130U)))
#undef str_1000b8c8
#define str_1000b8c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x590U)))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 56))
#define local_90 (*(void * *)(pf_stack_frame + 16))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_78 (*(void * *)(pf_stack_frame + 40))
#define local_70 (*(long *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086d8
 */

uint recovered_100086d8(long param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;

  uVar8 = (ulong)param_3;
  uVar11 = 0;
  if (((param_1 != 0) && (param_2 != (undefined1 *)0x0)) && (0 < (int)param_3 && 0 < (int)param_4))
  {
    uVar10 = (ulong)(param_3 + 0x3f >> 6);
    uVar9 = (ulong)(param_4 + 0x3f >> 6);
    uVar14 = uVar9 * uVar10;
    if (uVar14 >> 0x1e == 0) {
      local_70 = 0;
      uStack_68 = 0;
      local_78 = (void *)0x0;
      local_90 = DAT_1000b460;
      PF_PART6(local_88, 0) = CONCAT24(0x33,(int)DAT_1000b468);
      recovered_1000ab98((long *)&local_78,0,(undefined1 *)&local_90,0xe);
      recovered_1000aba0((long *)&local_78,param_3);
      recovered_1000aba0((long *)&local_78,param_4);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0x11);
      recovered_1000aba0((long *)&local_78,1);
      local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
      recovered_10009e6c((long *)&local_78,(undefined1 *)&local_90);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      lVar3 = local_70;
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000abd8((long *)&local_78,lVar3,(uint)local_70);
      recovered_1000aba0((long *)&local_78,param_3);
      recovered_1000aba0((long *)&local_78,param_4);
      recovered_1000aba0((long *)&local_78,1);
      uVar5 = recovered_100018b8(str_1000b8c8);
      recovered_1000aba0((long *)&local_78,(int)uVar5 + 1);
      recovered_1000acf0((long *)&local_78,(long)local_78 + local_70,str_1000b8c8,
                         str_1000b8c8 + uVar5);
      local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
      recovered_10009e6c((long *)&local_78,(undefined1 *)&local_90);
      recovered_1000aba0((long *)&local_78,6);
      recovered_1000aba0((long *)&local_78,4);
      recovered_1000aba0((long *)&local_78,0xff);
      recovered_1000aba0((long *)&local_78,7);
      recovered_1000aba0((long *)&local_78,4);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,8);
      recovered_1000aba0((long *)&local_78,4);
      recovered_1000aba0((long *)&local_78,1);
      recovered_1000aba0((long *)&local_78,0xf);
      recovered_1000aba0((long *)&local_78,8);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      lVar3 = local_70;
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000abd8((long *)&local_78,lVar3,(uint)local_70);
      recovered_1000aba0((long *)&local_78,param_3);
      recovered_1000aba0((long *)&local_78,param_4);
      recovered_1000aba0((long *)&local_78,4);
      lVar3 = local_70;
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000aba0((long *)&local_78,0);
      recovered_1000abd8((long *)&local_78,lVar3,(uint)local_70);
      recovered_1000aba0((long *)&local_78,param_3);
      recovered_1000aba0((long *)&local_78,param_4);
      recovered_1000ade8((long *)&local_90,uVar14);
      for (uVar5 = 0; uVar14 != uVar5; uVar5 = uVar5 + 1) {
        *(long *)((long)local_90 + uVar5 * 8) = local_70;
        recovered_1000aba0((long *)&local_78,0);
      }
      recovered_1000aba0((long *)&local_78,0);
      uVar14 = 0;
      while( true ) {
        uVar5 = (ulong)param_4;
        if (0x3f < uVar5) {
          uVar5 = 0x40;
        }
        if (uVar14 == uVar9) break;
        uVar13 = 0;
        uVar12 = uVar8;
        puVar16 = param_2;
        while( true ) {
          uVar2 = uVar12;
          if (0x3f < uVar12) {
            uVar2 = 0x40;
          }
          if (uVar13 == uVar10) break;
          recovered_1000abd8((long *)&local_78,
                             *(long *)((long)local_90 + uVar13 * 8 + uVar14 * (uintptr_t)(uintptr_t)uVar10 * 8),
                             (uint)local_70);
          puVar1 = puVar16;
          for (uVar15 = uVar5; uVar15 != 0; uVar15 = uVar15 - 1) {
            recovered_1000930c((long *)&local_78,(long)local_78 + local_70,puVar1,puVar1 + uVar2 * 4
                              );
            puVar1 = puVar1 + uVar8 * 4;
          }
          uVar13 = uVar13 + 1;
          puVar16 = puVar16 + 0x100;
          uVar12 = (ulong)((int)uVar12 - 0x40);
        }
        uVar14 = uVar14 + 1;
        param_4 = param_4 - 0x40;
        param_2 = param_2 + uVar8 * 0x100;
      }
      puVar6 = recovered_10003280(param_1,((uintptr_t)pf_module_state+0x54bU));
      if (puVar6 == (uint *)0x0) {
        uVar11 = 0;
      }
      else {
        bVar4 = recovered_100081f4(puVar6,(long)local_78,local_70);
        uVar7 = recovered_100035c8((int *)puVar6);
        uVar11 = 0;
        if ((int)uVar7 == 0) {
          uVar11 = (uint)bVar4;
        }
      }
      local_88 = 0;
      recovered_10004020(local_90);
      local_70 = 0;
      recovered_10004020(local_78);
    }
    else {
      uVar11 = 0;
    }
  }
  return uVar11;
}

#undef DAT_1000b460
#undef DAT_1000b468
#undef str_1000b8c8
#undef uStack_68
#undef local_90
#undef local_88
#undef local_78
#undef local_70

#define local_40 (*(long *)(pf_stack_frame + 16))
#define local_30 (*(ulong *)(pf_stack_frame + 32))
#define pvStack_38 (*(void * *)(pf_stack_frame + 24))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a70
 */

long * recovered_10008a70(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *dst;
  long *plVar2;

  pvStack_38 = (void *)0x0;
  local_40 = 0;
  local_30 = 0;
  uStack_28 = 0;
  if ((param_1 == 0) || (uVar1 = recovered_10007cb4(param_1,(uint *)&local_40), (int)uVar1 == 0)) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)0x0;
    if (((local_30 != 0) && (-1 < (int)(uint)local_40)) && (-1 < local_40)) {
      plVar2 = recovered_10003fec(0x20);
      plVar2[1] = 0;
      *plVar2 = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      *plVar2 = local_40;
      dst = recovered_1000401c(local_30);
      plVar2[1] = (long)dst;
      recovered_100013dc(dst,pvStack_38,local_30);
    }
  }
  local_30 = 0;
  recovered_10004020(pvStack_38);
  return plVar2;
}

#undef local_40
#undef local_30
#undef pvStack_38
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b1c
 */

void recovered_10008b1c(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)param_1 + 8) != (void *)0x0) {
    recovered_10004038(*(void **)((long)param_1 + 8));
  }
  if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
    recovered_10004038(*(void **)((long)param_1 + 0x18));
  }
  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b58
 */

void recovered_10008b58(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_10008c44(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b60
 */

uint recovered_10008b60(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 != 0) {
    uVar1 = 0xffffffff;
    do {
      uVar1 = uVar1 + 1;
      if (0x1f < uVar1) break;
    } while ((1 << (ulong)(uVar1 & 0x1f) & param_2) == 0);
    uVar2 = 0;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 >> 1) {
      uVar2 = uVar2 + (uVar3 & 1);
    }
    uVar3 = 0xffffffff;
    if (uVar2 < 0x1f) {
      uVar3 = ~(-1 << (ulong)(uVar2 & 0x1f));
    }
    if (uVar3 != 0) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (((param_2 & param_1) >> (ulong)(uVar1 & 0x1f)) * 0xff + (uVar3 >> 1)) / uVar3;
      }
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bd4
 */

void recovered_10008bd4(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_10008c44(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c44
 */

void recovered_10008c44(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10008cb8(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10004020((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cb8
 */

void * recovered_10008cb8(ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  if (count < 2) {
    count = 1;
  }
  pvVar1 = recovered_1000130c(count);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cc4
 */

long * recovered_10008cc4(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008cf0(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cf0
 */

void recovered_10008cf0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10008c44(param_1,param_2);
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
 * Address: 0x10008d58
 */

undefined8 recovered_10008d58(byte *param_1,int param_2,uint param_3,byte *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  byte bVar3;

  if (param_2 == 8) {
    bVar3 = *param_1;
    *param_4 = bVar3;
  }
  else {
    if (param_2 - 0xfU < 2) {
      bVar1 = *param_1;
      bVar3 = param_1[1];
      sVar2 = *(short *)param_1;
      *param_4 = (byte)((((uint)(int)(char)bVar3 >> 2 & 0x1f) * 0xff) / 0x1f);
      param_4[1] = (byte)((((uint)(int)sVar2 >> 5 & 0x1f) * 0xff) / 0x1f);
      param_4[2] = (byte)(((bVar1 & 0x1f) * 0xff) / 0x1f);
      bVar3 = (char)bVar3 >> 7;
      if ((param_3 & 0xf) == 0 || param_2 != 0x10) {
        bVar3 = 0xff;
      }
      goto LAB_10008e24;
    }
    if (param_2 == 0x20) {
      *param_4 = param_1[2];
      param_4[1] = param_1[1];
      param_4[2] = *param_1;
      bVar3 = param_1[3];
      goto LAB_10008e24;
    }
    if (param_2 != 0x18) {
      return 0;
    }
    *param_4 = param_1[2];
    bVar3 = param_1[1];
  }
  param_4[1] = bVar3;
  param_4[2] = *param_1;
  bVar3 = 0xff;
LAB_10008e24:
  param_4[3] = bVar3;
  return 1;
}


#define local_24 (*(byte (*)[4])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e30
 */

undefined8 recovered_10008e30(undefined8 *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar6 = *(ulong *)*param_1;
  if (uVar6 < *(ulong *)param_1[1]) {
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0xff;
    iVar1 = *(int *)param_1[2];
    if (iVar1 == 3) {
      local_24[1] = *param_2;
      local_24[0] = local_24[1];
      local_24[2] = local_24[1];
      if (*(int *)param_1[3] == 0x10) {
        local_24[3] = param_2[1];
      }
      else {
        local_24[3] = 0xff;
      }
LAB_10008f38:
      uVar3 = *(uint *)param_1[8];
      uVar4 = (ulong)uVar3;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar6 / uVar4;
      }
      uVar2 = (int)uVar6 - (uint)uVar5 * uVar3;
      if ((*(uint *)param_1[7] & 0x10) != 0) {
        uVar2 = uVar3 + ~uVar2;
      }
      if ((*(uint *)param_1[7] >> 5 & 1) == 0) {
        uVar5 = (ulong)(*(int *)param_1[9] + ~(uint)uVar5);
      }
      recovered_100013dc((void *)(*(long *)param_1[10] +
                                 ((ulong)uVar2 + uVar4 * (uVar5 & 0xffffffff)) * 4),local_24,4);
      *(long *)*param_1 = *(long *)*param_1 + 1;
      return 1;
    }
    if (iVar1 == 2) {
      uVar5 = recovered_10008d58(param_2,*(int *)param_1[3],*(uint *)param_1[7],local_24);
      if ((uVar5 & 1) != 0) goto LAB_10008f38;
    }
    else if (iVar1 == 1) {
      uVar3 = (uint)*param_2;
      if (*(int *)param_1[3] != 8) {
        uVar3 = (uint)CONCAT11(param_2[1],*param_2);
      }
      uVar2 = uVar3 - *(uint *)param_1[4];
      if ((*(uint *)param_1[4] <= uVar3) && (uVar2 < *(uint *)param_1[5])) {
        recovered_100013dc(local_24,(void *)(*(long *)param_1[6] + (ulong)uVar2 * 4),4);
        uVar6 = *(ulong *)*param_1;
        goto LAB_10008f38;
      }
    }
  }
  return 0;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fac
 */

int recovered_10008fac(uchar *data,ulong size,ulonglong *position,uint *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = recovered_1000910c((long)data,size,*position,out);
  if (bVar1 != 0) {
    *position = *position + 4;
  }
  return (uint)bVar1;
}


#define local_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fdc
 */

uchar recovered_10008fdc(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  uVar4 = *param_3;
  if (param_4 == 4) {
    local_44 = 0;
    uVar1 = recovered_1000910c(param_1,param_2,uVar4,&local_44);
    if (uVar1 == '\0') {
      return '\0';
    }
    uVar4 = (ulong)local_44;
  }
  else {
    if (param_2 < uVar4 || param_2 - uVar4 < 8) {
      return '\0';
    }
    uVar3 = recovered_10009148((uint *)(param_1 + uVar4));
    uVar2 = recovered_10009148((uint *)(param_1 + uVar4) + 1);
    uVar4 = CONCAT44(uVar3,uVar2);
  }
  *param_5 = uVar4;
  *param_3 = *param_3 + (ulong)param_4;
  return '\x01';
}

#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009080
 */

/* WARNING: Removing unreachable block (ram,0x100013e4) */
/* WARNING: Removing unreachable block (ram,0x100013f8) */
/* WARNING: Removing unreachable block (ram,0x100013fc) */
/* WARNING: Removing unreachable block (ram,0x10001404) */
/* WARNING: Removing unreachable block (ram,0x1000140c) */
/* WARNING: Removing unreachable block (ram,0x1000141c) */
/* WARNING: Removing unreachable block (ram,0x10001424) */
/* WARNING: Removing unreachable block (ram,0x10001430) */
/* WARNING: Removing unreachable block (ram,0x10001464) */
/* WARNING: Removing unreachable block (ram,0x10001468) */
/* WARNING: Removing unreachable block (ram,0x10001474) */
/* WARNING: Removing unreachable block (ram,0x1000148c) */

void recovered_10009080(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;

  bVar2 = *(byte *)(param_2 + 3);
  if (bVar2 != 0xff) {
    if (bVar2 == 0) {
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
    }
    else if (*(byte *)(param_1 + 3) != 0) {
      uVar6 = (uint)bVar2;
      iVar3 = (uVar6 ^ 0xff) * (uint)*(byte *)(param_1 + 3);
      uVar1 = (iVar3 + 0x7fU & 0xffff) / 0xff + uVar6;
      for (lVar5 = 0; lVar5 != 3; lVar5 = lVar5 + 1) {
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (undefined1)
                  (((uVar1 >> 1) + *(byte *)(param_2 + lVar5) * uVar6 +
                   (iVar3 * (uint)*(byte *)(param_1 + lVar5) + 0x7f) / 0xff) / uVar1);
        }
        *(undefined1 *)(param_1 + lVar5) = uVar4;
      }
      *(char *)(param_1 + 3) = (char)uVar1;
      return;
    }
  }
  for (lVar5 = 4; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_2 = (long)(param_2 + 1);
    param_1 = (long)(param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000910c
 */

uchar recovered_1000910c(long param_1,ulong param_2,ulong param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;

  uVar1 = param_2 - param_3;
  bVar2 = param_2 >= param_3;
  if (bVar2 && 3 < uVar1) {
    uVar3 = recovered_10009148((uint *)(param_1 + param_3));
    *param_4 = uVar3;
  }
  return (bVar2 && 2 < uVar1) && (param_2 < param_3 || uVar1 != 3);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009148
 */

uint recovered_10009148(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009154
 */

long recovered_10009154(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_100091b8(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar2 * 8) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091b8
 */

void recovered_100091b8(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000922c(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined8 *)((long)pvVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10004020((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000922c
 */

void * recovered_1000922c(ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulonglong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 8;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000130c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000923c
 */

long * recovered_1000923c(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10008bd4(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009268
 */

long recovered_10009268(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  param_1[1] = 0;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = *param_1 - lVar4;
  }
  lVar3 = (long)param_3 - (long)param_2;
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
      recovered_10008c44(param_1,uVar5);
      uVar6 = param_1[1];
    }
    while (uVar7 < uVar6) {
      puVar1 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar1[lVar3] = *puVar1;
      uVar6 = uVar6 - 1;
    }
    uVar6 = uVar7;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)(*param_1 + uVar6) = *param_2;
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
 * Address: 0x1000927c
 */

long * recovered_1000927c(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_100092a8(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092a8
 */

void recovered_100092a8(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100091b8(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000930c
 */

long recovered_1000930c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      recovered_10008c44(param_1,uVar5);
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


#undef DAT_10010328
#define DAT_10010328 (*(byte *)(((uintptr_t)pf_module_state + 0x4ff0U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff8U)))
#undef DAT_10010390
#define DAT_10010390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5058U)))
#undef DAT_100103a0
#define DAT_100103a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5068U)))
#undef DAT_100103b0
#define DAT_100103b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5078U)))
#undef DAT_100103c0
#define DAT_100103c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5088U)))
#undef DAT_100103d0
#define DAT_100103d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5098U)))
#undef DAT_100103dd
#define DAT_100103dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50a5U)))
#undef UNK_10010329
#define UNK_10010329 (*(byte *)(((uintptr_t)pf_module_state + 0x4ff1U)))
#undef UNK_10010338
#define UNK_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5000U)))
#undef UNK_10010340
#define UNK_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5008U)))
#undef UNK_10010348
#define UNK_10010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5010U)))
#undef UNK_10010350
#define UNK_10010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5018U)))
#undef UNK_10010358
#define UNK_10010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5020U)))
#undef UNK_10010360
#define UNK_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5028U)))
#undef UNK_10010368
#define UNK_10010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5030U)))
#undef UNK_10010370
#define UNK_10010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5038U)))
#undef UNK_10010378
#define UNK_10010378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5040U)))
#undef UNK_1001037d
#define UNK_1001037d (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5045U)))
#undef UNK_10010380
#define UNK_10010380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5048U)))
#undef UNK_10010385
#define UNK_10010385 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x504dU)))
#undef UNK_10010398
#define UNK_10010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5060U)))
#undef UNK_100103a8
#define UNK_100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5070U)))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5080U)))
#undef UNK_100103c8
#define UNK_100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5090U)))
#undef UNK_100103d8
#define UNK_100103d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a0U)))
#undef UNK_100103e0
#define UNK_100103e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a8U)))
#undef UNK_100103e5
#define UNK_100103e5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50adU)))
#undef _DAT_10010330
#define _DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4ff8U)))
#undef _DAT_10010390
#define _DAT_10010390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5058U)))
#undef _DAT_100103a0
#define _DAT_100103a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5068U)))
#undef _DAT_100103b0
#define _DAT_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5078U)))
#undef _DAT_100103c0
#define _DAT_100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5088U)))
#undef _DAT_100103d0
#define _DAT_100103d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5098U)))
#undef _DAT_100103dd
#define _DAT_100103dd (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a5U)))
#undef bRam0000000010010329
#define bRam0000000010010329 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff1U)))
#undef uRam0000000010010338
#define uRam0000000010010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5000U)))
#undef uRam0000000010010340
#define uRam0000000010010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5008U)))
#undef uRam0000000010010348
#define uRam0000000010010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5010U)))
#undef uRam0000000010010350
#define uRam0000000010010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5018U)))
#undef uRam0000000010010358
#define uRam0000000010010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5020U)))
#undef uRam0000000010010360
#define uRam0000000010010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5028U)))
#undef uRam0000000010010368
#define uRam0000000010010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5030U)))
#undef uRam0000000010010370
#define uRam0000000010010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5038U)))
#undef uRam0000000010010378
#define uRam0000000010010378 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5040U)))->pf_payload_bits
#undef uRam000000001001037d
#define uRam000000001001037d ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x5045U)))->pf_payload_bits
#undef uRam0000000010010380
#define uRam0000000010010380 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5048U)))->pf_payload_bits
#undef uRam0000000010010385
#define uRam0000000010010385 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x504dU)))
#undef uRam0000000010010398
#define uRam0000000010010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5060U)))
#undef uRam00000000100103a8
#define uRam00000000100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5070U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5080U)))
#undef uRam00000000100103c8
#define uRam00000000100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5090U)))
#undef uRam00000000100103d8
#define uRam00000000100103d8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x50a0U)))->pf_payload_bits
#undef uRam00000000100103e0
#define uRam00000000100103e0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x50a8U)))->pf_payload_bits
#undef uRam00000000100103e5
#define uRam00000000100103e5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50adU)))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 568))
#define uStack_298 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_288 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_290 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_278 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_280 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_268 (*(undefined8 *)(pf_stack_frame + 72))
#define uStack_270 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_258 (*(undefined5 *)(pf_stack_frame + 88))
#define pvStack_260 (*(void * *)(pf_stack_frame + 80))
#define uStack_250 (*(undefined5 *)(pf_stack_frame + 96))
#define uStack_253 (*(undefined3 *)(pf_stack_frame + 93))
#define uStack_24b (*(undefined8 *)(pf_stack_frame + 101))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_238 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_220 (*(undefined8 *)(pf_stack_frame + 144))
#define uStack_228 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_210 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 152))
#define pvStack_200 (*(void * *)(pf_stack_frame + 176))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_1f3 (*(undefined3 *)(pf_stack_frame + 189))
#define uStack_1f8 (*(undefined5 *)(pf_stack_frame + 184))
#define uStack_1eb (*(undefined8 *)(pf_stack_frame + 197))
#define uStack_1f0 (*(undefined5 *)(pf_stack_frame + 192))
#define lStack_1d0 (*(long *)(pf_stack_frame + 224))
#define uStack_1a8 (*(undefined8 *)(pf_stack_frame + 264))
#define uStack_198 (*(undefined8 *)(pf_stack_frame + 280))
#define uStack_1a0 (*(undefined8 *)(pf_stack_frame + 272))
#define uStack_188 (*(undefined8 *)(pf_stack_frame + 296))
#define local_2a0 (*(ulong *)(pf_stack_frame + 16))
#define uStack_190 (*(undefined8 *)(pf_stack_frame + 288))
#define local_240 (*(ulong *)(pf_stack_frame + 112))
#define uStack_178 (*(undefined8 *)(pf_stack_frame + 312))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 208))
#define uStack_180 (*(undefined8 *)(pf_stack_frame + 304))
#define local_1d8 (*(byte * *)(pf_stack_frame + 216))
#define uStack_168 (*(undefined5 *)(pf_stack_frame + 328))
#define local_1c8 (*(long *)(pf_stack_frame + 232))
#define pvStack_170 (*(void * *)(pf_stack_frame + 320))
#define local_1c0 (*(ulong *)(pf_stack_frame + 240))
#define uStack_160 (*(undefined5 *)(pf_stack_frame + 336))
#define local_1b8 (*(uint *)(pf_stack_frame + 248))
#define uStack_163 (*(undefined3 *)(pf_stack_frame + 333))
#define local_1b0 (*(undefined8 *)(pf_stack_frame + 256))
#define uStack_148 (*(undefined8 *)(pf_stack_frame + 360))
#define local_100 (*(void * *)(pf_stack_frame + 432))
#define uStack_15b (*(undefined8 *)(pf_stack_frame + 341))
#define uStack_130 (*(uint *)(pf_stack_frame + 384))
#define lStack_140 (*(long *)(pf_stack_frame + 368))
#define uStack_128 (*(undefined8 *)(pf_stack_frame + 392))
#define uStack_12c (*(undefined4 *)(pf_stack_frame + 388))
#define uStack_110 (*(ulong *)(pf_stack_frame + 416))
#define puStack_118 (*(undefined4 * *)(pf_stack_frame + 408))
#define uStack_108 (*(undefined8 *)(pf_stack_frame + 424))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 448))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 440))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 464))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 456))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 480))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 472))
#define pvStack_c0 (*(void * *)(pf_stack_frame + 496))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 488))
#define uStack_b3 (*(undefined3 *)(pf_stack_frame + 509))
#define uStack_b8 (*(undefined5 *)(pf_stack_frame + 504))
#define uStack_ab (*(undefined8 *)(pf_stack_frame + 517))
#define uStack_b0 (*(undefined5 *)(pf_stack_frame + 512))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 540))
#define uStack_98 (*(uint *)(pf_stack_frame + 536))
#define uStack_7c (*(uint *)(pf_stack_frame + 564))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009404
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10009404(long *param_1,long *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *pointer;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;

  param_2[1] = 0;
  lStack_1d0 = param_1[1] - 6;
  if (5 < (ulong)param_1[1]) {
    local_1d8 = (byte *)*param_1;
    if (((*local_1d8 & 0xf) == 8) &&
       ((local_1d8[1] & 0x20) == 0 && (uint)CONCAT11(*local_1d8,local_1d8[1]) % 0x1f == 0)) {
      local_1d8 = local_1d8 + 2;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      do {
        local_1e0 = 0;
        uVar7 = recovered_10009bdc((long *)&local_1d8,1,(uint *)((long)&local_1e0 + 4));
        if ((int)uVar7 == 0) {
          return false;
        }
        uVar7 = recovered_10009bdc((long *)&local_1d8,2,(uint *)&local_1e0);
        if ((int)uVar7 == 0) {
          return false;
        }
        iVar4 = PF_PART4(local_1e0, 4);
        if ((uint)local_1e0 == 2) {
          uStack_1eb = 0;
          uStack_1f0 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          pvStack_200 = (void *)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          local_240 = 0;
          uStack_24b = 0;
          uStack_250 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_253 = 0;
          pvStack_260 = (void *)0x0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_298 = 0;
          local_2a0 = 0;
          uStack_78 = 0;
          uStack_7c = 0;
          uVar7 = recovered_10009bdc((long *)&local_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar7 == 0) ||
              (uVar7 = recovered_10009bdc((long *)&local_1d8,5,(uint *)&uStack_78), (int)uVar7 == 0)
              ) || (uVar7 = recovered_10009bdc((long *)&local_1d8,4,&uStack_7c), (int)uVar7 == 0)) {
LAB_10009998:
            iVar10 = 1;
          }
          else {
            uVar9 = uStack_78 & 0xffffffff;
            uVar12 = uStack_78 >> 0x20;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            recovered_1000a19c((long *)&uStack_98,0x13,(undefined4 *)&local_100);
            lVar11 = uVar12 + 0x101;
            pointer = (void *)CONCAT44(uStack_94,uStack_98);
            puVar2 = (uint *)((uintptr_t)pf_module_state+0x330U);
            for (uVar12 = (ulong)(uStack_7c + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
              local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
              uVar7 = recovered_10009bdc((long *)&local_1d8,3,(uint *)&local_100);
              if ((int)uVar7 == 0) {
                uStack_90 = 0;
                recovered_10004020(pointer);
                iVar10 = 1;
                goto LAB_1000999c;
              }
              *(uint *)((long)pointer + (ulong)*puVar2 * 4) = (uint)local_100;
              puVar2 = puVar2 + 1;
            }
            uStack_ab = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_b3 = 0;
            pvStack_c0 = (void *)0x0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            local_100 = (void *)0x0;
            uVar12 = recovered_1000a038((long *)&uStack_98,(uint *)&local_100,0);
            if ((uVar12 & 1) == 0) {
              uVar9 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar9 = uVar9 + 1 + lVar11;
              puStack_118 = (undefined4 *)0x0;
              recovered_1000a234((long *)&puStack_118,uVar9);
              do {
                uVar12 = uStack_110;
                if (uVar9 <= uStack_110) {
                  recovered_1000a50c((long *)&uStack_130,puStack_118,puStack_118 + lVar11);
                  recovered_1000a50c(&uStack_148,puStack_118 + lVar11,puStack_118 + uStack_110);
                  uVar9 = recovered_1000a038((long *)&uStack_130,(uint *)&local_240,0);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = 0;
                  }
                  else {
                    bVar1 = false;
                    piVar3 = (int *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148);
                    for (lVar11 = lStack_140 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
                      bVar1 = (bool)(bVar1 | *piVar3 != 0);
                      piVar3 = piVar3 + 1;
                    }
                    if (bVar1) {
                      uVar9 = recovered_1000a038(&uStack_148,(uint *)&local_2a0,1);
                    }
                    else {
                      uStack_15b = 0;
                      uStack_160 = 0;
                      uStack_178 = 0;
                      uStack_180 = 0;
                      uStack_168 = 0;
                      uStack_163 = 0;
                      pvStack_170 = (void *)0x0;
                      uStack_198 = 0;
                      uStack_1a0 = 0;
                      uStack_188 = 0;
                      uStack_190 = 0;
                      uStack_1a8 = 0;
                      local_1b0 = 0;
                      recovered_1000a2b8(&local_2a0,&local_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_10004020(pvStack_170);
                      uVar9 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_10004020((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_10004020((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_10009960;
                }
                local_1b0 = local_1b0 & 0xffffffff00000000;
                uVar5 = recovered_10009ed4((long *)&local_1d8,(long)&local_100,(uint *)&local_1b0);
                if ((uVar5 & 1) == 0) break;
                if (0xf < (uint)local_1b0) {
                  if ((uint)local_1b0 == 0x12) {
                    uStack_130 = 0;
                    uVar7 = recovered_10009bdc((long *)&local_1d8,7,&uStack_130);
                    if ((int)uVar7 == 0) goto LAB_10009828;
                    uVar5 = uStack_130 + 0xb;
                    for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar9; uVar6 = uVar6 + 1) {
                      PF_PART4(uStack_148, 0) = 0;
                      recovered_1000a4a8((long *)&puStack_118,(undefined4 *)&uStack_148);
                      uVar12 = uStack_110;
                    }
                    goto LAB_1000973c;
                  }
                  if ((uint)local_1b0 == 0x11) {
                    uStack_130 = 0;
                    uVar7 = recovered_10009bdc((long *)&local_1d8,3,&uStack_130);
                    if ((int)uVar7 != 0) {
                      uVar5 = uStack_130 + 3;
                      for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar9; uVar6 = uVar6 + 1) {
                        PF_PART4(uStack_148, 0) = 0;
                        recovered_1000a4a8((long *)&puStack_118,(undefined4 *)&uStack_148);
                        uVar12 = uStack_110;
                      }
                      goto LAB_1000973c;
                    }
                  }
                  else {
                    if (((uint)local_1b0 != 0x10) || (uVar12 == 0)) break;
                    uStack_130 = 0;
                    uVar7 = recovered_10009bdc((long *)&local_1d8,2,&uStack_130);
                    if ((int)uVar7 != 0) {
                      uVar5 = uStack_130 + 3;
                      PF_PART4(uStack_148, 0) = puStack_118[uVar12 - 1];
                      for (uVar6 = 0; uVar6 < uVar5 && uVar12 < uVar9; uVar6 = uVar6 + 1) {
                        recovered_1000a444((long *)&puStack_118,(undefined4 *)&uStack_148);
                        uVar12 = uStack_110;
                      }
                      goto LAB_1000973c;
                    }
                  }
LAB_10009828:
                  iVar10 = 1;
                  goto LAB_1000982c;
                }
                recovered_1000a444((long *)&puStack_118,(undefined4 *)&local_1b0);
LAB_1000973c:
                iVar10 = 5;
LAB_1000982c:
              } while (iVar10 == 5);
              uVar9 = 0;
LAB_10009960:
              uStack_110 = 0;
              recovered_10004020(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_10004020(pvStack_c0);
            uStack_90 = 0;
            recovered_10004020((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar9 & 1) == 0) goto LAB_10009998;
            uVar7 = recovered_10009c58((long *)&local_1d8,(long)&local_240,(long)&local_2a0,param_2,
                                       param_3);
            iVar10 = 3;
            if ((int)uVar7 == 0) {
              iVar10 = 1;
            }
          }
LAB_1000999c:
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_10004020(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_10004020(pvStack_200);
LAB_100099ac:
          if (iVar10 != 3) {
            return false;
          }
        }
        else {
          if ((uint)local_1e0 != 1) {
            if ((uint)local_1e0 != 0) {
              return false;
            }
            local_1c0 = local_1c0 >> (local_1b8 & 7);
            local_1b8 = local_1b8 & 0xfffffff8;
            local_100 = (void *)((ulong)local_100 & 0xffffffff00000000);
            local_1b0 = (ulong)PF_PART4(local_1b0, 4) << 0x20;
            local_240 = local_240 & 0xffffffff00000000;
            local_2a0 = local_2a0 & 0xffffffff00000000;
            uVar7 = recovered_10009bdc((long *)&local_1d8,8,(uint *)&local_100);
            if ((((int)uVar7 == 0) ||
                (uVar7 = recovered_10009bdc((long *)&local_1d8,8,(uint *)&local_1b0),
                (int)uVar7 == 0)) ||
               ((uVar7 = recovered_10009bdc((long *)&local_1d8,8,(uint *)&local_240),
                (int)uVar7 == 0 ||
                (uVar7 = recovered_10009bdc((long *)&local_1d8,8,(uint *)&local_2a0),
                (int)uVar7 == 0)))) {
LAB_1000984c:
              iVar10 = 1;
            }
            else {
              uVar5 = (uint)local_100 | (uint)local_1b0 << 8;
              if ((((uint)local_240 | (int)local_2a0 << 8) ^ uVar5) != 0xffff) goto LAB_1000984c;
              for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                uStack_98 = 0;
                uVar7 = recovered_10009bdc((long *)&local_1d8,8,&uStack_98);
                if (((int)uVar7 == 0) || (param_3 <= (ulong)param_2[1])) goto LAB_1000984c;
                puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                recovered_10009e6c(param_2,(undefined1 *)&puStack_118);
              }
              iVar10 = 3;
            }
            goto LAB_100099ac;
          }
          if ((DAT_10010328 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),8);
            recovered_1000a19c((long *)&local_100,0x120,(undefined4 *)&local_1b0);
            for (lVar11 = 0; lVar11 != 0x1c0; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x240) = 9;
            }
            for (lVar11 = 0; lVar11 != 0x60; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x400) = 7;
            }
            for (lVar11 = 0; lVar11 != 0x20; lVar11 = lVar11 + 4) {
              *(undefined4 *)((long)local_100 + lVar11 + 0x460) = 8;
            }
            uRam0000000010010385 = 0;
            uRam0000000010010380 = 0;
            uRam0000000010010368 = 0;
            uRam0000000010010360 = 0;
            uRam0000000010010378 = 0;
            uRam000000001001037d = 0;
            uRam0000000010010370 = 0;
            uRam0000000010010348 = 0;
            uRam0000000010010340 = 0;
            uRam0000000010010358 = 0;
            uRam0000000010010350 = 0;
            uRam0000000010010338 = 0;
            _DAT_10010330 = 0;
            recovered_1000a038((long *)&local_100,(uint *)&DAT_10010330,0);
            uStack_f8 = 0;
            recovered_10004020(local_100);
            recovered_10004080();
            DAT_10010328 = 1;
          }
          if ((bRam0000000010010329 & 1) == 0) {
            local_1b0 = CONCAT44(PF_PART4(local_1b0, 4),5);
            plVar8 = recovered_1000a19c((long *)&local_100,0x20,(undefined4 *)&local_1b0);
            uRam0000000010010398 = 0;
            _DAT_10010390 = 0;
            uRam00000000100103a8 = 0;
            _DAT_100103a0 = 0;
            uRam00000000100103b8 = 0;
            _DAT_100103b0 = 0;
            uRam00000000100103c8 = 0;
            _DAT_100103c0 = 0;
            uRam00000000100103d8 = 0;
            _DAT_100103d0 = 0;
            uRam00000000100103e5 = 0;
            _DAT_100103dd = 0;
            uRam00000000100103e0 = 0;
            recovered_1000a038(plVar8,(uint *)&DAT_10010390,0);
            uStack_f8 = 0;
            recovered_10004020(local_100);
            recovered_10004080();
            bRam0000000010010329 = 1;
          }
          uVar9 = recovered_10009c58((long *)&local_1d8,((uintptr_t)pf_module_state+0x4ff8U),((uintptr_t)pf_module_state+0x5058U),param_2,param_3);
          if ((uVar9 & 1) == 0) {
            return false;
          }
        }
      } while (iVar4 == 0);
      if (local_1c8 == lStack_1d0 && local_1b8 < 8) {
        uVar5 = recovered_10009148((uint *)(*param_1 + param_1[1] + -4));
        uVar6 = recovered_10009e08(*param_2,param_2[1]);
        return uVar6 == uVar5;
      }
    }
  }
  return false;
}

#undef DAT_10010328
#undef DAT_10010330
#undef DAT_10010390
#undef DAT_100103a0
#undef DAT_100103b0
#undef DAT_100103c0
#undef DAT_100103d0
#undef DAT_100103dd
#undef UNK_10010329
#undef UNK_10010338
#undef UNK_10010340
#undef UNK_10010348
#undef UNK_10010350
#undef UNK_10010358
#undef UNK_10010360
#undef UNK_10010368
#undef UNK_10010370
#undef UNK_10010378
#undef UNK_1001037d
#undef UNK_10010380
#undef UNK_10010385
#undef UNK_10010398
#undef UNK_100103a8
#undef UNK_100103b8
#undef UNK_100103c8
#undef UNK_100103d8
#undef UNK_100103e0
#undef UNK_100103e5
#undef _DAT_10010330
#undef _DAT_10010390
#undef _DAT_100103a0
#undef _DAT_100103b0
#undef _DAT_100103c0
#undef _DAT_100103d0
#undef _DAT_100103dd
#undef bRam0000000010010329
#undef uRam0000000010010338
#undef uRam0000000010010340
#undef uRam0000000010010348
#undef uRam0000000010010350
#undef uRam0000000010010358
#undef uRam0000000010010360
#undef uRam0000000010010368
#undef uRam0000000010010370
#undef uRam0000000010010378
#undef uRam000000001001037d
#undef uRam0000000010010380
#undef uRam0000000010010385
#undef uRam0000000010010398
#undef uRam00000000100103a8
#undef uRam00000000100103b8
#undef uRam00000000100103c8
#undef uRam00000000100103d8
#undef uRam00000000100103e0
#undef uRam00000000100103e5
#undef uStack_78
#undef uStack_298
#undef uStack_288
#undef uStack_290
#undef uStack_278
#undef uStack_280
#undef uStack_268
#undef uStack_270
#undef uStack_258
#undef pvStack_260
#undef uStack_250
#undef uStack_253
#undef uStack_24b
#undef uStack_230
#undef uStack_238
#undef uStack_220
#undef uStack_228
#undef uStack_210
#undef uStack_218
#undef pvStack_200
#undef uStack_208
#undef uStack_1f3
#undef uStack_1f8
#undef uStack_1eb
#undef uStack_1f0
#undef lStack_1d0
#undef uStack_1a8
#undef uStack_198
#undef uStack_1a0
#undef uStack_188
#undef local_2a0
#undef uStack_190
#undef local_240
#undef uStack_178
#undef local_1e0
#undef uStack_180
#undef local_1d8
#undef uStack_168
#undef local_1c8
#undef pvStack_170
#undef local_1c0
#undef uStack_160
#undef local_1b8
#undef uStack_163
#undef local_1b0
#undef uStack_148
#undef local_100
#undef uStack_15b
#undef uStack_130
#undef lStack_140
#undef uStack_128
#undef uStack_12c
#undef uStack_110
#undef puStack_118
#undef uStack_108
#undef uStack_f0
#undef uStack_f8
#undef uStack_e0
#undef uStack_e8
#undef uStack_d0
#undef uStack_d8
#undef pvStack_c0
#undef uStack_c8
#undef uStack_b3
#undef uStack_b8
#undef uStack_ab
#undef uStack_b0
#undef uStack_94
#undef uStack_98
#undef uStack_7c
#undef uStack_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bdc
 */

undefined8 recovered_10009bdc(long *param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  if (param_2 < 0x19) {
    uVar1 = *(uint *)(param_1 + 4);
    while( true ) {
      if (param_2 <= uVar1) {
        uVar2 = param_1[3];
        *param_3 = (uint)uVar2 & ((uint)(-1L << ((ulong)param_2 & 0x3f)) ^ 0xffffffff);
        param_1[3] = uVar2 >> ((ulong)param_2 & 0x3f);
        *(uint *)(param_1 + 4) = (int)param_1[4] - param_2;
        return 1;
      }
      uVar2 = param_1[2];
      if ((ulong)param_1[1] <= uVar2) break;
      param_1[2] = uVar2 + 1;
      param_1[3] = (ulong)*(byte *)(*param_1 + uVar2) << ((ulong)uVar1 & 0x3f) | param_1[3];
      uVar1 = uVar1 + 8;
      *(uint *)(param_1 + 4) = uVar1;
    }
  }
  return 0;
}


#undef DAT_1000b490
#define DAT_1000b490 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x158U)))
#undef DAT_1000b504
#define DAT_1000b504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef DAT_1000b578
#define DAT_1000b578 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x240U)))
#undef DAT_1000b5f0
#define DAT_1000b5f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#define local_6c (*(uint *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c58
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_10009c58(long *param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;

  while( true ) {
    while( true ) {
      local_64 = 0;
      uVar1 = recovered_10009ed4(param_1,param_2,&local_64);
      if (uVar1 == 0) {
        return 0;
      }
      if (0xff < local_64) break;
      if (param_5 <= (ulong)param_4[1]) {
        return 0;
      }
      local_68 = CONCAT31(PF_PART3(local_68, 1),(char)local_64);
      recovered_10009e6c(param_4,(undefined1 *)&local_68);
    }
    if (local_64 == 0x100) {
      return 1;
    }
    if (0x11d < local_64) {
      return 0;
    }
    uVar1 = *(uint *)(&DAT_1000b490 + (ulong)(local_64 - 0x101) * 4);
    if (*(uint *)(&DAT_1000b504 + (ulong)(local_64 - 0x101) * 4) != 0) {
      local_68 = 0;
      uVar3 = recovered_10009bdc(param_1,*(uint *)(&DAT_1000b504 + (ulong)(local_64 - 0x101) * 4),
                                 &local_68);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar1 = local_68 + uVar1;
    }
    local_68 = 0;
    uVar2 = recovered_10009ed4(param_1,param_3,&local_68);
    if (uVar2 == 0) {
      return 0;
    }
    if (0x1d < local_68) {
      return 0;
    }
    uVar2 = *(uint *)(&DAT_1000b578 + (ulong)local_68 * 4);
    if (*(uint *)(&DAT_1000b5f0 + (ulong)local_68 * 4) != 0) {
      local_6c = 0;
      uVar3 = recovered_10009bdc(param_1,*(uint *)(&DAT_1000b5f0 + (ulong)local_68 * 4),&local_6c);
      if ((int)uVar3 == 0) {
        return 0;
      }
      uVar2 = local_6c + uVar2;
    }
    if (uVar2 == 0) break;
    if ((ulong)param_4[1] < (ulong)uVar2 || param_5 - param_4[1] < (ulong)uVar1) {
      return 0;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      recovered_10009fd0(param_4,(undefined1 *)(*param_4 + (param_4[1] - (ulong)uVar2)));
    }
  }
  return 0;
}

#undef DAT_1000b490
#undef DAT_1000b504
#undef DAT_1000b578
#undef DAT_1000b5f0
#undef local_6c
#undef local_68
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009de8
 */

long recovered_10009de8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a64c((undefined8 *)(param_1 + 0x40));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e08
 */

uint recovered_10009e08(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar3 = 0;
  uVar4 = 1;
  for (uVar5 = 0; uVar1 = param_2 - uVar5, uVar5 <= param_2 && uVar1 != 0; uVar5 = uVar1 + uVar5) {
    if (0x15af < uVar1) {
      uVar1 = 0x15b0;
    }
    pbVar2 = (byte *)(param_1 + uVar5);
    for (uVar6 = uVar1; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar4 = uVar4 + *pbVar2;
      uVar3 = uVar4 + uVar3;
      pbVar2 = pbVar2 + 1;
    }
    uVar4 = uVar4 % 0xfff1;
    uVar3 = uVar3 % 0xfff1;
  }
  return uVar4 | uVar3 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e6c
 */

long recovered_10009e6c(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10008c44(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define local_54 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ed4
 */

uint recovered_10009ed4(long *param_1,long param_2,uint *param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;

  if (*(char *)(param_2 + 0x5c) != '\x01') {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 0x58);
  if (uVar5 == 0) {
    local_54 = 0;
  }
  else {
    iVar7 = 0;
    lVar6 = 0;
    uVar8 = 0;
    local_54 = 1;
    for (uVar4 = 1; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
      local_54 = 0;
      uVar3 = recovered_10009bdc(param_1,1,&local_54);
      if ((int)uVar3 == 0) {
LAB_10009fa4:
        local_54 = 0;
        break;
      }
      local_54 = local_54 | uVar8;
      uVar2 = *(uint *)(param_2 + (ulong)uVar4 * 4);
      uVar8 = uVar2 + iVar7;
      if (local_54 < uVar8) {
        uVar1 = lVar6 + (ulong)(local_54 - iVar7);
        if (*(ulong *)(param_2 + 0x48) <= uVar1) goto LAB_10009fa4;
        *param_3 = (uint)*(ushort *)(*(long *)(param_2 + 0x40) + uVar1 * 2);
        local_54 = 1;
        break;
      }
      lVar6 = lVar6 + (ulong)uVar2;
      iVar7 = uVar8 * 2;
      uVar8 = local_54 << 1;
      uVar5 = *(uint *)(param_2 + 0x58);
    }
    local_54 = uVar4 <= uVar5 & local_54;
  }
  return local_54;
}

#undef local_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fd0
 */

long recovered_10009fd0(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10008c44(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


#define auStack_90 (*(ulong (*)[8])(pf_stack_frame + 80))
#define auStack_d0 (*(uint (*)[16])(pf_stack_frame + 16))
#define uStack_48 (*(undefined5 *)(pf_stack_frame + 152))
#define pvStack_50 (*(void * *)(pf_stack_frame + 144))
#define uStack_40 (*(undefined5 *)(pf_stack_frame + 160))
#define uStack_43 (*(undefined3 *)(pf_stack_frame + 157))
#define uStack_3b (*(undefined8 *)(pf_stack_frame + 165))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a038
 */

undefined8 recovered_1000a038(long *param_1,uint *param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;

  uStack_3b = 0;
  uStack_40 = 0;
  auStack_90[7] = 0;
  auStack_90[6] = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  pvStack_50 = (void *)0x0;
  auStack_90[3] = 0;
  auStack_90[2] = 0;
  auStack_90[5] = 0;
  auStack_90[4] = 0;
  auStack_90[1] = 0;
  auStack_90[0] = 0;
  recovered_1000a2b8((undefined8 *)param_2,auStack_90);
  uStack_48 = 0;
  uStack_43 = 0;
  recovered_10004020(pvStack_50);
  puVar2 = (uint *)*param_1;
  uVar3 = param_1[1];
  for (lVar7 = uVar3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    uVar5 = *puVar2;
    if (0xf < uVar5) goto LAB_1000a0f0;
    param_2[uVar5] = param_2[uVar5] + 1;
    uVar4 = param_2[0x16];
    if (param_2[0x16] <= uVar5) {
      uVar4 = uVar5;
    }
    param_2[0x16] = uVar4;
    puVar2 = puVar2 + 1;
  }
  if (uVar3 == *param_2) {
LAB_1000a180:
    *(char *)(param_2 + 0x17) = (char)param_3;
  }
  else {
    iVar6 = 1;
    lVar7 = 4;
    do {
      if (lVar7 == 0x40) {
        uVar5 = 0;
        auStack_d0[10] = 0;
        auStack_d0[0xb] = 0;
        auStack_d0[8] = 0;
        auStack_d0[9] = 0;
        auStack_d0[0xe] = 0;
        auStack_d0[0xf] = 0;
        auStack_d0[0xc] = 0;
        auStack_d0[0xd] = 0;
        auStack_d0[2] = 0;
        auStack_d0[3] = 0;
        auStack_d0[0] = 0;
        auStack_d0[1] = 0;
        auStack_d0[6] = 0;
        auStack_d0[7] = 0;
        auStack_d0[4] = 0;
        auStack_d0[5] = 0;
        for (lVar7 = 4; lVar7 != 0x40; lVar7 = lVar7 + 4) {
          *(uint *)((long)auStack_d0 + lVar7) = uVar5;
          uVar5 = *(int *)((long)param_2 + lVar7) + uVar5;
        }
        auStack_90[0] = auStack_90[0] & 0xffffffffffff0000;
        recovered_1000a2fc((long *)(param_2 + 0x10),(ulong)uVar5,(undefined2 *)auStack_90);
        lVar7 = *param_1;
        uVar3 = param_1[1];
        lVar8 = *(long *)(param_2 + 0x10);
        for (uVar9 = 0; uVar9 < uVar3; uVar9 = (ulong)((int)uVar9 + 1)) {
          uVar5 = *(uint *)(lVar7 + uVar9 * 4);
          if (uVar5 != 0) {
            uVar4 = auStack_d0[uVar5];
            auStack_d0[uVar5] = uVar4 + 1;
            *(short *)(lVar8 + (ulong)uVar4 * 2) = (short)uVar9;
          }
        }
        param_3 = 1;
        goto LAB_1000a180;
      }
      piVar1 = (int *)((long)param_2 + lVar7);
      lVar7 = lVar7 + 4;
      iVar6 = iVar6 * 2 - *piVar1;
    } while (-1 < iVar6);
LAB_1000a0f0:
    param_3 = 0;
  }
  return param_3;
}

#undef auStack_90
#undef auStack_d0
#undef uStack_48
#undef pvStack_50
#undef uStack_40
#undef uStack_43
#undef uStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a19c
 */

long * recovered_1000a19c(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000a1c8(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1c8
 */

void recovered_1000a1c8(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_1000a234(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a234
 */

void recovered_1000a234(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000a2a8(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined4 *)((long)pvVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_10004020((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2a8
 */

void * recovered_1000a2a8(ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulonglong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 4;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000130c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2b8
 */

undefined8 * recovered_1000a2b8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;

  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar6 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  recovered_1000a304(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined1 *)((long)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2fc
 */

void recovered_1000a2fc(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_1000a3c0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a304
 */

undefined8 * recovered_1000a304(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10004020((void *)*param_1);
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
 * Address: 0x1000a354
 */

void recovered_1000a354(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    recovered_1000a3c0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3c0
 */

void recovered_1000a3c0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000a434(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined2 *)((long)pvVar1 + uVar2 * 2) = *(undefined2 *)(*param_1 + uVar2 * 2);
    }
    recovered_10004020((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a434
 */

void * recovered_1000a434(ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulonglong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 2;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000130c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a444
 */

long recovered_1000a444(long *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_1000a234(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4a8
 */

long recovered_1000a4a8(long *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_1000a234(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a50c
 */

long * recovered_1000a50c(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000a544(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a544
 */

long recovered_1000a544(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
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
    uVar7 = param_2 - lVar3 >> 2;
  }
  if (3 < (ulong)((long)param_4 - (long)param_3)) {
    uVar8 = (ulong)((long)param_4 - (long)param_3) >> 2;
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
      recovered_1000a234(param_1,uVar4);
      uVar5 = param_1[1];
      uVar6 = uVar5;
    }
    while (uVar7 < uVar5) {
      puVar1 = (undefined4 *)(*param_1 + (uVar5 - 1) * 4);
      puVar1[uVar8] = *puVar1;
      uVar5 = uVar5 - 1;
    }
    lVar3 = uVar7 << 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined4 *)(*param_1 + lVar3) = *param_3;
      lVar3 = lVar3 + 4;
    }
    param_1[1] = uVar6 + uVar8;
    lVar3 = *param_1;
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + uVar7 * 4;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a64c
 */

undefined8 * recovered_1000a64c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10004020((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a678
 */

undefined8 * recovered_1000a678(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10004020((void *)*param_1);
  return param_1;
}


#undef DAT_1001032a
#define DAT_1001032a (*(byte *)(((uintptr_t)pf_module_state + 0x4ff2U)))
#undef DAT_100103f0
#define DAT_100103f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a69c
 */

uint recovered_1000a69c(uint param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;

  if ((DAT_1001032a & 1) == 0) {
    for (uVar2 = 0; uVar2 != 0x100; uVar2 = uVar2 + 1) {
      iVar3 = 8;
      uVar4 = uVar2;
      do {
        uVar1 = (uint)(uVar4 >> 1) & 0x7fffffff;
        if ((uVar4 & 1) != 0) {
          uVar1 = (uint)uVar4 >> 1 ^ 0xedb88320;
        }
        uVar4 = (ulong)uVar1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      (&DAT_100103f0)[uVar2] = uVar1;
    }
    DAT_1001032a = 1;
  }
  uVar1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = (&DAT_100103f0)[(byte)(*param_2 ^ (byte)uVar1)] ^ uVar1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~uVar1;
}

#undef DAT_1001032a
#undef DAT_100103f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a72c
 */

void recovered_1000a72c(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    recovered_1000a7e0(param_1,uVar1);
    lVar3 = param_1[1];
  }
  uVar4 = *param_2;
  puVar2 = (undefined8 *)(*param_1 + lVar3 * 0x10);
  puVar2[1] = param_2[1];
  *puVar2 = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a78c
 */

void recovered_1000a78c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_1000a678((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7e0
 */

void recovered_1000a7e0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10003fec(param_2 << 4);
    lVar2 = 0;
    uVar4 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar5 = *(undefined8 *)(*param_1 + lVar2);
      ((undefined8 *)((long)pvVar1 + lVar2))[1] = ((undefined8 *)(*param_1 + lVar2))[1];
      *(undefined8 *)((long)pvVar1 + lVar2) = uVar5;
      lVar2 = lVar2 + 0x10;
    }
    recovered_10004020((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


#undef DAT_1000b758
#define DAT_1000b758 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x420U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a858
 */

int recovered_1000a858(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 < 7) && ((0x5dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(int *)(param_1 + 8) * *(int *)(&DAT_1000b758 + (ulong)uVar1 * 4);
  }
  return 0;
}

#undef DAT_1000b758

#undef DAT_10010328
#define DAT_10010328 (*(byte *)(((uintptr_t)pf_module_state + 0x4ff0U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff8U)))
#undef DAT_10010390
#define DAT_10010390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5058U)))
#undef DAT_100103a0
#define DAT_100103a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5068U)))
#undef DAT_100103b0
#define DAT_100103b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5078U)))
#undef DAT_100103c0
#define DAT_100103c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5088U)))
#undef DAT_100103d0
#define DAT_100103d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5098U)))
#undef DAT_100103dd
#define DAT_100103dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50a5U)))
#undef UNK_10010329
#define UNK_10010329 (*(byte *)(((uintptr_t)pf_module_state + 0x4ff1U)))
#undef UNK_10010338
#define UNK_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5000U)))
#undef UNK_10010340
#define UNK_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5008U)))
#undef UNK_10010348
#define UNK_10010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5010U)))
#undef UNK_10010350
#define UNK_10010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5018U)))
#undef UNK_10010358
#define UNK_10010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5020U)))
#undef UNK_10010360
#define UNK_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5028U)))
#undef UNK_10010368
#define UNK_10010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5030U)))
#undef UNK_10010370
#define UNK_10010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5038U)))
#undef UNK_10010378
#define UNK_10010378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5040U)))
#undef UNK_1001037d
#define UNK_1001037d (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5045U)))
#undef UNK_10010380
#define UNK_10010380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5048U)))
#undef UNK_10010385
#define UNK_10010385 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x504dU)))
#undef UNK_10010398
#define UNK_10010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5060U)))
#undef UNK_100103a8
#define UNK_100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5070U)))
#undef UNK_100103b8
#define UNK_100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5080U)))
#undef UNK_100103c8
#define UNK_100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5090U)))
#undef UNK_100103d8
#define UNK_100103d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a0U)))
#undef UNK_100103e0
#define UNK_100103e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a8U)))
#undef UNK_100103e5
#define UNK_100103e5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50adU)))
#undef _DAT_10010330
#define _DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4ff8U)))
#undef _DAT_10010390
#define _DAT_10010390 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5058U)))
#undef _DAT_100103a0
#define _DAT_100103a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5068U)))
#undef _DAT_100103b0
#define _DAT_100103b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5078U)))
#undef _DAT_100103c0
#define _DAT_100103c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5088U)))
#undef _DAT_100103d0
#define _DAT_100103d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5098U)))
#undef _DAT_100103dd
#define _DAT_100103dd (*(uint32_t *)(((uintptr_t)pf_module_state + 0x50a5U)))
#undef bRam0000000010010329
#define bRam0000000010010329 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff1U)))
#undef uRam0000000010010338
#define uRam0000000010010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5000U)))
#undef uRam0000000010010340
#define uRam0000000010010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5008U)))
#undef uRam0000000010010348
#define uRam0000000010010348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5010U)))
#undef uRam0000000010010350
#define uRam0000000010010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5018U)))
#undef uRam0000000010010358
#define uRam0000000010010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5020U)))
#undef uRam0000000010010360
#define uRam0000000010010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5028U)))
#undef uRam0000000010010368
#define uRam0000000010010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5030U)))
#undef uRam0000000010010370
#define uRam0000000010010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5038U)))
#undef uRam0000000010010378
#define uRam0000000010010378 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5040U)))->pf_payload_bits
#undef uRam000000001001037d
#define uRam000000001001037d ((struct pf_uint24 *)(((uintptr_t)pf_module_state + 0x5045U)))->pf_payload_bits
#undef uRam0000000010010380
#define uRam0000000010010380 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x5048U)))->pf_payload_bits
#undef uRam0000000010010385
#define uRam0000000010010385 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x504dU)))
#undef uRam0000000010010398
#define uRam0000000010010398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5060U)))
#undef uRam00000000100103a8
#define uRam00000000100103a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5070U)))
#undef uRam00000000100103b8
#define uRam00000000100103b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5080U)))
#undef uRam00000000100103c8
#define uRam00000000100103c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5090U)))
#undef uRam00000000100103d8
#define uRam00000000100103d8 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x50a0U)))->pf_payload_bits
#undef uRam00000000100103e0
#define uRam00000000100103e0 ((struct pf_uint40 *)(((uintptr_t)pf_module_state + 0x50a8U)))->pf_payload_bits
#undef uRam00000000100103e5
#define uRam00000000100103e5 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x50adU)))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 568))
#define uStack_298 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_2a0 (*(ulong *)(pf_stack_frame + 16))
#define uStack_288 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_290 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_278 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_280 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_268 (*(undefined8 *)(pf_stack_frame + 72))
#define uStack_270 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_258 (*(undefined5 *)(pf_stack_frame + 88))
#define pvStack_260 (*(void * *)(pf_stack_frame + 80))
#define uStack_250 (*(undefined5 *)(pf_stack_frame + 96))
#define uStack_253 (*(undefined3 *)(pf_stack_frame + 93))
#define uStack_240 (*(ulong *)(pf_stack_frame + 112))
#define uStack_24b (*(undefined8 *)(pf_stack_frame + 101))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_238 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_220 (*(undefined8 *)(pf_stack_frame + 144))
#define uStack_228 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_210 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 152))
#define pvStack_200 (*(void * *)(pf_stack_frame + 176))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_1f3 (*(undefined3 *)(pf_stack_frame + 189))
#define uStack_1f8 (*(undefined5 *)(pf_stack_frame + 184))
#define uStack_1eb (*(undefined8 *)(pf_stack_frame + 197))
#define uStack_1f0 (*(undefined5 *)(pf_stack_frame + 192))
#define pbStack_1d8 (*(byte * *)(pf_stack_frame + 216))
#define uStack_1e0 (*(undefined8 *)(pf_stack_frame + 208))
#define lStack_1c8 (*(long *)(pf_stack_frame + 232))
#define lStack_1d0 (*(long *)(pf_stack_frame + 224))
#define uStack_1b8 (*(uint *)(pf_stack_frame + 248))
#define uStack_1c0 (*(ulong *)(pf_stack_frame + 240))
#define uStack_1a8 (*(undefined8 *)(pf_stack_frame + 264))
#define uStack_1b0 (*(undefined8 *)(pf_stack_frame + 256))
#define uStack_198 (*(undefined8 *)(pf_stack_frame + 280))
#define uStack_1a0 (*(undefined8 *)(pf_stack_frame + 272))
#define uStack_188 (*(undefined8 *)(pf_stack_frame + 296))
#define uStack_190 (*(undefined8 *)(pf_stack_frame + 288))
#define uStack_178 (*(undefined8 *)(pf_stack_frame + 312))
#define uStack_180 (*(undefined8 *)(pf_stack_frame + 304))
#define uStack_168 (*(undefined5 *)(pf_stack_frame + 328))
#define pvStack_170 (*(void * *)(pf_stack_frame + 320))
#define uStack_160 (*(undefined5 *)(pf_stack_frame + 336))
#define uStack_163 (*(undefined3 *)(pf_stack_frame + 333))
#define uStack_148 (*(undefined8 *)(pf_stack_frame + 360))
#define uStack_15b (*(undefined8 *)(pf_stack_frame + 341))
#define uStack_130 (*(uint *)(pf_stack_frame + 384))
#define lStack_140 (*(long *)(pf_stack_frame + 368))
#define uStack_128 (*(undefined8 *)(pf_stack_frame + 392))
#define uStack_12c (*(undefined4 *)(pf_stack_frame + 388))
#define uStack_110 (*(ulong *)(pf_stack_frame + 416))
#define puStack_118 (*(undefined4 * *)(pf_stack_frame + 408))
#define pvStack_100 (*(void * *)(pf_stack_frame + 432))
#define uStack_108 (*(undefined8 *)(pf_stack_frame + 424))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 448))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 440))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 464))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 456))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 480))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 472))
#define pvStack_c0 (*(void * *)(pf_stack_frame + 496))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 488))
#define uStack_b3 (*(undefined3 *)(pf_stack_frame + 509))
#define uStack_b8 (*(undefined5 *)(pf_stack_frame + 504))
#define uStack_ab (*(undefined8 *)(pf_stack_frame + 517))
#define uStack_b0 (*(undefined5 *)(pf_stack_frame + 512))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 540))
#define uStack_98 (*(uint *)(pf_stack_frame + 536))
#define uStack_7c (*(uint *)(pf_stack_frame + 564))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a88c
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000a88c(long *param_1,long *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  long *plVar1;
  bool bVar2;
  void *pointer;
  undefined8 *puVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;

  uVar11 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar14 = *param_2;
  for (lVar13 = param_2[1] << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
    if (CARRY8(*(ulong *)(lVar14 + 8),uVar11)) {
      return false;
    }
    uVar11 = *(ulong *)(lVar14 + 8) + uVar11;
    lVar14 = lVar14 + 0x10;
  }
  recovered_10008c44(param_1,uVar11);
  puVar3 = (undefined8 *)*param_2;
  for (lVar14 = param_2[1] << 4; lVar14 != 0; lVar14 = lVar14 + -0x10) {
    recovered_1000930c(param_1,*param_1 + param_1[1],(undefined1 *)*puVar3,
                       (undefined1 *)*puVar3 + puVar3[1]);
    puVar3 = puVar3 + 2;
  }
  recovered_10008c44(param_1 + 3,param_3);
  plVar1 = param_1 + 3;
  param_1[4] = 0;
  lStack_1d0 = param_1[1] - 6;
  if (5 < (ulong)param_1[1]) {
    pbStack_1d8 = (byte *)*param_1;
    if (((*pbStack_1d8 & 0xf) == 8) &&
       ((pbStack_1d8[1] & 0x20) == 0 && (uint)CONCAT11(*pbStack_1d8,pbStack_1d8[1]) % 0x1f == 0)) {
      pbStack_1d8 = pbStack_1d8 + 2;
      lStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      do {
        uStack_1e0 = 0;
        uVar9 = recovered_10009bdc((long *)&pbStack_1d8,1,(uint *)((long)&uStack_1e0 + 4));
        if ((int)uVar9 == 0) {
          return false;
        }
        uVar9 = recovered_10009bdc((long *)&pbStack_1d8,2,(uint *)&uStack_1e0);
        if ((int)uVar9 == 0) {
          return false;
        }
        iVar6 = PF_PART4(uStack_1e0, 4);
        if ((uint)uStack_1e0 == 2) {
          uStack_1eb = 0;
          uStack_1f0 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          pvStack_200 = (void *)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          uStack_24b = 0;
          uStack_250 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_253 = 0;
          pvStack_260 = (void *)0x0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_78 = 0;
          uStack_7c = 0;
          uVar9 = recovered_10009bdc((long *)&pbStack_1d8,5,(uint *)((long)&uStack_78 + 4));
          if ((((int)uVar9 == 0) ||
              (uVar9 = recovered_10009bdc((long *)&pbStack_1d8,5,(uint *)&uStack_78),
              (int)uVar9 == 0)) ||
             (uVar9 = recovered_10009bdc((long *)&pbStack_1d8,4,&uStack_7c), (int)uVar9 == 0)) {
LAB_10009998:
            iVar12 = 1;
          }
          else {
            uVar11 = uStack_78 & 0xffffffff;
            uVar15 = uStack_78 >> 0x20;
            pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
            recovered_1000a19c((long *)&uStack_98,0x13,(undefined4 *)&pvStack_100);
            lVar14 = uVar15 + 0x101;
            pointer = (void *)CONCAT44(uStack_94,uStack_98);
            puVar4 = (uint *)((uintptr_t)pf_module_state+0x330U);
            for (uVar15 = (ulong)(uStack_7c + 4); uVar15 != 0; uVar15 = uVar15 - 1) {
              pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
              uVar9 = recovered_10009bdc((long *)&pbStack_1d8,3,(uint *)&pvStack_100);
              if ((int)uVar9 == 0) {
                uStack_90 = 0;
                recovered_10004020(pointer);
                iVar12 = 1;
                goto LAB_1000999c;
              }
              *(uint *)((long)pointer + (ulong)*puVar4 * 4) = (uint)pvStack_100;
              puVar4 = puVar4 + 1;
            }
            uStack_ab = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_b3 = 0;
            pvStack_c0 = (void *)0x0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            pvStack_100 = (void *)0x0;
            uVar15 = recovered_1000a038((long *)&uStack_98,(uint *)&pvStack_100,0);
            if ((uVar15 & 1) == 0) {
              uVar11 = 0;
            }
            else {
              uStack_110 = 0;
              uStack_108 = 0;
              uVar11 = uVar11 + 1 + lVar14;
              puStack_118 = (undefined4 *)0x0;
              recovered_1000a234((long *)&puStack_118,uVar11);
              do {
                uVar15 = uStack_110;
                if (uVar11 <= uStack_110) {
                  recovered_1000a50c((long *)&uStack_130,puStack_118,puStack_118 + lVar14);
                  recovered_1000a50c(&uStack_148,puStack_118 + lVar14,puStack_118 + uStack_110);
                  uVar11 = recovered_1000a038((long *)&uStack_130,(uint *)&uStack_240,0);
                  if ((uVar11 & 1) == 0) {
                    uVar11 = 0;
                  }
                  else {
                    bVar2 = false;
                    piVar5 = (int *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148);
                    for (lVar14 = lStack_140 << 2; lVar14 != 0; lVar14 = lVar14 + -4) {
                      bVar2 = (bool)(bVar2 | *piVar5 != 0);
                      piVar5 = piVar5 + 1;
                    }
                    if (bVar2) {
                      uVar11 = recovered_1000a038(&uStack_148,(uint *)&uStack_2a0,1);
                    }
                    else {
                      uStack_15b = 0;
                      uStack_160 = 0;
                      uStack_178 = 0;
                      uStack_180 = 0;
                      uStack_168 = 0;
                      uStack_163 = 0;
                      pvStack_170 = (void *)0x0;
                      uStack_198 = 0;
                      uStack_1a0 = 0;
                      uStack_188 = 0;
                      uStack_190 = 0;
                      uStack_1a8 = 0;
                      uStack_1b0 = 0;
                      recovered_1000a2b8(&uStack_2a0,&uStack_1b0);
                      uStack_168 = 0;
                      uStack_163 = 0;
                      recovered_10004020(pvStack_170);
                      uVar11 = 1;
                      uStack_24b = CONCAT17(1,(undefined7)uStack_24b);
                    }
                  }
                  lStack_140 = 0;
                  recovered_10004020((void *)CONCAT44(PF_PART4(uStack_148, 4),(undefined4)uStack_148));
                  uStack_128 = 0;
                  recovered_10004020((void *)CONCAT44(uStack_12c,uStack_130));
                  goto LAB_10009960;
                }
                uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
                uVar7 = recovered_10009ed4((long *)&pbStack_1d8,(long)&pvStack_100,
                                           (uint *)&uStack_1b0);
                if ((uVar7 & 1) == 0) break;
                if (0xf < (uint)uStack_1b0) {
                  if ((uint)uStack_1b0 == 0x12) {
                    uStack_130 = 0;
                    uVar9 = recovered_10009bdc((long *)&pbStack_1d8,7,&uStack_130);
                    if ((int)uVar9 == 0) goto LAB_10009828;
                    uVar7 = uStack_130 + 0xb;
                    for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                      PF_PART4(uStack_148, 0) = 0;
                      recovered_1000a4a8((long *)&puStack_118,(undefined4 *)&uStack_148);
                      uVar15 = uStack_110;
                    }
                    goto LAB_1000973c;
                  }
                  if ((uint)uStack_1b0 == 0x11) {
                    uStack_130 = 0;
                    uVar9 = recovered_10009bdc((long *)&pbStack_1d8,3,&uStack_130);
                    if ((int)uVar9 != 0) {
                      uVar7 = uStack_130 + 3;
                      for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                        PF_PART4(uStack_148, 0) = 0;
                        recovered_1000a4a8((long *)&puStack_118,(undefined4 *)&uStack_148);
                        uVar15 = uStack_110;
                      }
                      goto LAB_1000973c;
                    }
                  }
                  else {
                    if (((uint)uStack_1b0 != 0x10) || (uVar15 == 0)) break;
                    uStack_130 = 0;
                    uVar9 = recovered_10009bdc((long *)&pbStack_1d8,2,&uStack_130);
                    if ((int)uVar9 != 0) {
                      uVar7 = uStack_130 + 3;
                      PF_PART4(uStack_148, 0) = puStack_118[uVar15 - 1];
                      for (uVar8 = 0; uVar8 < uVar7 && uVar15 < uVar11; uVar8 = uVar8 + 1) {
                        recovered_1000a444((long *)&puStack_118,(undefined4 *)&uStack_148);
                        uVar15 = uStack_110;
                      }
                      goto LAB_1000973c;
                    }
                  }
LAB_10009828:
                  iVar12 = 1;
                  goto LAB_1000982c;
                }
                recovered_1000a444((long *)&puStack_118,(undefined4 *)&uStack_1b0);
LAB_1000973c:
                iVar12 = 5;
LAB_1000982c:
              } while (iVar12 == 5);
              uVar11 = 0;
LAB_10009960:
              uStack_110 = 0;
              recovered_10004020(puStack_118);
            }
            uStack_b8 = 0;
            uStack_b3 = 0;
            recovered_10004020(pvStack_c0);
            uStack_90 = 0;
            recovered_10004020((void *)CONCAT44(uStack_94,uStack_98));
            if ((uVar11 & 1) == 0) goto LAB_10009998;
            uVar9 = recovered_10009c58((long *)&pbStack_1d8,(long)&uStack_240,(long)&uStack_2a0,
                                       plVar1,param_3);
            iVar12 = 3;
            if ((int)uVar9 == 0) {
              iVar12 = 1;
            }
          }
LAB_1000999c:
          uStack_258 = 0;
          uStack_253 = 0;
          recovered_10004020(pvStack_260);
          uStack_1f8 = 0;
          uStack_1f3 = 0;
          recovered_10004020(pvStack_200);
LAB_100099ac:
          if (iVar12 != 3) {
            return false;
          }
        }
        else {
          if ((uint)uStack_1e0 != 1) {
            if ((uint)uStack_1e0 != 0) {
              return false;
            }
            uStack_1c0 = uStack_1c0 >> (uStack_1b8 & 7);
            uStack_1b8 = uStack_1b8 & 0xfffffff8;
            pvStack_100 = (void *)((ulong)pvStack_100 & 0xffffffff00000000);
            uStack_1b0 = (ulong)PF_PART4(uStack_1b0, 4) << 0x20;
            uStack_240 = uStack_240 & 0xffffffff00000000;
            uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
            uVar9 = recovered_10009bdc((long *)&pbStack_1d8,8,(uint *)&pvStack_100);
            if ((((int)uVar9 == 0) ||
                (uVar9 = recovered_10009bdc((long *)&pbStack_1d8,8,(uint *)&uStack_1b0),
                (int)uVar9 == 0)) ||
               ((uVar9 = recovered_10009bdc((long *)&pbStack_1d8,8,(uint *)&uStack_240),
                (int)uVar9 == 0 ||
                (uVar9 = recovered_10009bdc((long *)&pbStack_1d8,8,(uint *)&uStack_2a0),
                (int)uVar9 == 0)))) {
LAB_1000984c:
              iVar12 = 1;
            }
            else {
              uVar7 = (uint)pvStack_100 | (uint)uStack_1b0 << 8;
              if ((((uint)uStack_240 | (int)uStack_2a0 << 8) ^ uVar7) != 0xffff) goto LAB_1000984c;
              for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                uStack_98 = 0;
                uVar9 = recovered_10009bdc((long *)&pbStack_1d8,8,&uStack_98);
                if (((int)uVar9 == 0) || (param_3 <= (ulong)param_1[4])) goto LAB_1000984c;
                puStack_118 = (undefined4 *)CONCAT71(PF_PART7(puStack_118, 1),(char)uStack_98);
                recovered_10009e6c(plVar1,(undefined1 *)&puStack_118);
              }
              iVar12 = 3;
            }
            goto LAB_100099ac;
          }
          if ((DAT_10010328 & 1) == 0) {
            uStack_1b0 = CONCAT44(PF_PART4(uStack_1b0, 4),8);
            recovered_1000a19c((long *)&pvStack_100,0x120,(undefined4 *)&uStack_1b0);
            for (lVar14 = 0; lVar14 != 0x1c0; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x240) = 9;
            }
            for (lVar14 = 0; lVar14 != 0x60; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x400) = 7;
            }
            for (lVar14 = 0; lVar14 != 0x20; lVar14 = lVar14 + 4) {
              *(undefined4 *)((long)pvStack_100 + lVar14 + 0x460) = 8;
            }
            uRam0000000010010385 = 0;
            uRam0000000010010380 = 0;
            uRam0000000010010368 = 0;
            uRam0000000010010360 = 0;
            uRam0000000010010378 = 0;
            uRam000000001001037d = 0;
            uRam0000000010010370 = 0;
            uRam0000000010010348 = 0;
            uRam0000000010010340 = 0;
            uRam0000000010010358 = 0;
            uRam0000000010010350 = 0;
            uRam0000000010010338 = 0;
            _DAT_10010330 = 0;
            recovered_1000a038((long *)&pvStack_100,(uint *)&DAT_10010330,0);
            uStack_f8 = 0;
            recovered_10004020(pvStack_100);
            recovered_10004080();
            DAT_10010328 = 1;
          }
          if ((bRam0000000010010329 & 1) == 0) {
            uStack_1b0 = CONCAT44(PF_PART4(uStack_1b0, 4),5);
            plVar10 = recovered_1000a19c((long *)&pvStack_100,0x20,(undefined4 *)&uStack_1b0);
            uRam0000000010010398 = 0;
            _DAT_10010390 = 0;
            uRam00000000100103a8 = 0;
            _DAT_100103a0 = 0;
            uRam00000000100103b8 = 0;
            _DAT_100103b0 = 0;
            uRam00000000100103c8 = 0;
            _DAT_100103c0 = 0;
            uRam00000000100103d8 = 0;
            _DAT_100103d0 = 0;
            uRam00000000100103e5 = 0;
            _DAT_100103dd = 0;
            uRam00000000100103e0 = 0;
            recovered_1000a038(plVar10,(uint *)&DAT_10010390,0);
            uStack_f8 = 0;
            recovered_10004020(pvStack_100);
            recovered_10004080();
            bRam0000000010010329 = 1;
          }
          uVar11 = recovered_10009c58((long *)&pbStack_1d8,((uintptr_t)pf_module_state+0x4ff8U),((uintptr_t)pf_module_state+0x5058U),plVar1,param_3);
          if ((uVar11 & 1) == 0) {
            return false;
          }
        }
      } while (iVar6 == 0);
      if (lStack_1c8 == lStack_1d0 && uStack_1b8 < 8) {
        uVar7 = recovered_10009148((uint *)(*param_1 + param_1[1] + -4));
        uVar8 = recovered_10009e08(*plVar1,param_1[4]);
        return uVar8 == uVar7;
      }
    }
  }
  return false;
}

#undef DAT_10010328
#undef DAT_10010330
#undef DAT_10010390
#undef DAT_100103a0
#undef DAT_100103b0
#undef DAT_100103c0
#undef DAT_100103d0
#undef DAT_100103dd
#undef UNK_10010329
#undef UNK_10010338
#undef UNK_10010340
#undef UNK_10010348
#undef UNK_10010350
#undef UNK_10010358
#undef UNK_10010360
#undef UNK_10010368
#undef UNK_10010370
#undef UNK_10010378
#undef UNK_1001037d
#undef UNK_10010380
#undef UNK_10010385
#undef UNK_10010398
#undef UNK_100103a8
#undef UNK_100103b8
#undef UNK_100103c8
#undef UNK_100103d8
#undef UNK_100103e0
#undef UNK_100103e5
#undef _DAT_10010330
#undef _DAT_10010390
#undef _DAT_100103a0
#undef _DAT_100103b0
#undef _DAT_100103c0
#undef _DAT_100103d0
#undef _DAT_100103dd
#undef bRam0000000010010329
#undef uRam0000000010010338
#undef uRam0000000010010340
#undef uRam0000000010010348
#undef uRam0000000010010350
#undef uRam0000000010010358
#undef uRam0000000010010360
#undef uRam0000000010010368
#undef uRam0000000010010370
#undef uRam0000000010010378
#undef uRam000000001001037d
#undef uRam0000000010010380
#undef uRam0000000010010385
#undef uRam0000000010010398
#undef uRam00000000100103a8
#undef uRam00000000100103b8
#undef uRam00000000100103c8
#undef uRam00000000100103d8
#undef uRam00000000100103e0
#undef uRam00000000100103e5
#undef uStack_78
#undef uStack_298
#undef uStack_2a0
#undef uStack_288
#undef uStack_290
#undef uStack_278
#undef uStack_280
#undef uStack_268
#undef uStack_270
#undef uStack_258
#undef pvStack_260
#undef uStack_250
#undef uStack_253
#undef uStack_240
#undef uStack_24b
#undef uStack_230
#undef uStack_238
#undef uStack_220
#undef uStack_228
#undef uStack_210
#undef uStack_218
#undef pvStack_200
#undef uStack_208
#undef uStack_1f3
#undef uStack_1f8
#undef uStack_1eb
#undef uStack_1f0
#undef pbStack_1d8
#undef uStack_1e0
#undef lStack_1c8
#undef lStack_1d0
#undef uStack_1b8
#undef uStack_1c0
#undef uStack_1a8
#undef uStack_1b0
#undef uStack_198
#undef uStack_1a0
#undef uStack_188
#undef uStack_190
#undef uStack_178
#undef uStack_180
#undef uStack_168
#undef pvStack_170
#undef uStack_160
#undef uStack_163
#undef uStack_148
#undef uStack_15b
#undef uStack_130
#undef lStack_140
#undef uStack_128
#undef uStack_12c
#undef uStack_110
#undef puStack_118
#undef pvStack_100
#undef uStack_108
#undef uStack_f0
#undef uStack_f8
#undef uStack_e0
#undef uStack_e8
#undef uStack_d0
#undef uStack_d8
#undef pvStack_c0
#undef uStack_c8
#undef uStack_b3
#undef uStack_b8
#undef uStack_ab
#undef uStack_b0
#undef uStack_94
#undef uStack_98
#undef uStack_7c
#undef uStack_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a948
 */

uchar recovered_1000a948(long param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;

  uVar3 = *(ulong *)(param_1 + 0x30);
  if (CARRY8(param_3,uVar3)) {
    return '\0';
  }
  uVar2 = uVar3 + param_3;
  bVar1 = uVar2 <= *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    recovered_100013dc((void *)param_2,(void *)(*(long *)(param_1 + 0x18) + uVar3),param_3);
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9a4
 */

undefined8
recovered_1000a9a4(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;

  switch((uintptr_t)(param_1)) {
  case 1:
    uVar8 = param_6;
    if (param_5 <= param_6) {
      uVar8 = param_5;
    }
    lVar9 = param_5 - uVar8;
    pcVar6 = param_2;
    pcVar7 = param_3;
    for (uVar12 = uVar8; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar6 = *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcVar6 = param_3 + uVar8;
    pcVar7 = param_2 + uVar8;
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pcVar7 = pcVar7[-param_6] + *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    break;
  case 2:
    if (param_4 != (byte *)0x0) {
      for (; param_5 != 0; param_5 = param_5 - 1) {
        *param_2 = *param_4 + *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      }
      return 1;
    }
  case 0:
    recovered_100013dc(param_2,param_3,param_5);
    break;
  case 3:
    if (param_4 == (byte *)0x0) {
      if (param_5 != 0) {
        uVar8 = param_6;
        if (param_5 <= param_6) {
          uVar8 = param_5;
        }
        lVar9 = param_5 - uVar8;
        pcVar6 = param_2;
        pcVar7 = param_3;
        for (uVar12 = uVar8; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar6 = *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        pcVar6 = param_3 + uVar8;
        pcVar7 = param_2 + uVar8;
        for (; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pcVar7 = *pcVar6 + ((byte)pcVar7[-param_6] >> 1);
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    else {
      for (uVar8 = 0; param_5 != uVar8; uVar8 = uVar8 + 1) {
        if (uVar8 < param_6) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)(byte)param_2[uVar8 - param_6];
        }
        param_2[uVar8] = param_3[uVar8] + (char)(uVar11 + param_4[uVar8] >> 1);
      }
    }
    break;
  case 4:
    if (param_4 == (byte *)0x0) {
      uVar8 = param_6;
      if (param_5 <= param_6) {
        uVar8 = param_5;
      }
      lVar9 = param_5 - uVar8;
      pcVar6 = param_2;
      pcVar7 = param_3;
      for (uVar12 = uVar8; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar6 = *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar6 = param_3 + uVar8;
      pcVar7 = param_2 + uVar8;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pcVar7 = pcVar7[-param_6] + *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      uVar8 = 0;
      for (; param_5 != 0; param_5 = param_5 - 1) {
        if (uVar8 < param_6) {
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          uVar10 = (uint)(byte)param_2[-param_6];
          uVar11 = (uint)param_4[-param_6];
        }
        bVar2 = *param_4;
        uVar3 = uVar10 - uVar11;
        uVar4 = bVar2 - uVar11;
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar4 = -uVar3;
        if (-1 < (int)uVar3) {
          uVar4 = uVar3;
        }
        uVar5 = (uVar3 + bVar2) - uVar11;
        uVar3 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar3 = uVar5;
        }
        if (uVar4 <= uVar3) {
          uVar11 = (uint)bVar2;
        }
        if (uVar1 <= uVar3 && uVar1 <= uVar4) {
          uVar11 = uVar10;
        }
        *param_2 = param_3[uVar8] + (char)uVar11;
        uVar8 = uVar8 + 1;
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
      }
    }
    break;
  default:
    return 0;
  }
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab74
 */

void recovered_1000ab74(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000af38(param_1 + 3);
  param_1[1] = 0;
  recovered_10004020((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab98
 */

long recovered_1000ab98(long *param_1,long param_2,undefined1 *param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  puVar2 = param_3 + param_4;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    uVar8 = param_1[1];
  }
  else {
    uVar8 = param_2 - lVar5;
  }
  lVar4 = (long)puVar2 - (long)param_3;
  if (lVar4 != 0) {
    uVar7 = param_1[1];
    uVar6 = param_1[2];
    if (uVar6 < uVar7 + lVar4) {
      uVar3 = 4;
      if (uVar6 != 0) {
        uVar3 = uVar6;
      }
      do {
        uVar6 = uVar3;
        uVar3 = uVar6 << 1;
      } while (uVar6 < uVar7 + lVar4);
      recovered_10008c44(param_1,uVar6);
      uVar7 = param_1[1];
    }
    while (uVar8 < uVar7) {
      puVar1 = (undefined1 *)(*param_1 + (uVar7 - 1));
      puVar1[lVar4] = *puVar1;
      uVar7 = uVar7 - 1;
    }
    uVar7 = uVar8;
    for (; param_3 != puVar2; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar7) = *param_3;
      uVar7 = uVar7 + 1;
    }
    lVar5 = *param_1;
    param_1[1] = param_1[1] + lVar4;
  }
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = lVar5 + uVar8;
  }
  return lVar4;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aba0
 */

void recovered_1000aba0(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_1000abf8(param_1,*param_1 + param_1[1],(undefined1 *)&local_14,
                     (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 48) + -0x10));
  return;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abd8
 */

void recovered_1000abd8(long *param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 + 4U <= (ulong)param_1[1]) {
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    *(uint *)(*param_1 + param_2) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abf8
 */

long recovered_1000abf8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      recovered_10008c44(param_1,uVar5);
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
 * Address: 0x1000acf0
 */

long recovered_1000acf0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      recovered_10008c44(param_1,uVar5);
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
 * Address: 0x1000ade8
 */

long * recovered_1000ade8(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000ae14(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae14
 */

void recovered_1000ae14(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000ae7c(param_1,param_2);
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
 * Address: 0x1000ae7c
 */

void recovered_1000ae7c(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000aef0(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)((long)pvVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10004020((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aef0
 */

void * recovered_1000aef0(ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulonglong size;

  if (count == 0) {
    return (void *)0x0;
  }
  size = count * 8;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000130c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af00
 */

long * recovered_1000af00(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_1000930c(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af38
 */

undefined8 * recovered_1000af38(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10004020((void *)*param_1);
  return param_1;
}

