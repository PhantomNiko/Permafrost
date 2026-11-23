/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7758U)))
#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#undef _DAT_100100e0
#define _DAT_100100e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000608
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000608(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000634();
  _DAT_100100e0 = 0;
  recovered_1000066c();
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e0
#undef DAT_100100e4
#undef _DAT_100100e0

#undef DAT_100100e4
#define DAT_100100e4 (*(int *)(((uintptr_t)pf_module_state + 0x775cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000634
 */

void recovered_10000634(void)

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
#define DAT_100100e0 (*(byte *)(((uintptr_t)pf_module_state + 0x7758U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7768U)))
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
 * Address: 0x1000066c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000066c(void)

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
      recovered_10002c34(puVar8[-1],*puVar8,&local_48);
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
      recovered_10002c34(0x300000,(ulong)uVar2 - 0x300000,&local_48);
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f0
 */

bool recovered_100008f0(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10000634();
  bVar1 = recovered_1000092c(param_1,param_2,param_3);
  DAT_100100e4 = 0;
  return bVar1;
}

#undef DAT_100100e4

#undef DAT_100100e1
#define DAT_100100e1 (*(byte *)(((uintptr_t)pf_module_state + 0x7759U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7768U)))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
#define local_61 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000092c
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_1000092c(ulong *param_1,ulong *param_2,long param_3)

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
      recovered_1000066c();
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
             (recovered_10002d38((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            DAT_100100e1 = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x10000a2c;
        }
        else {
          recovered_10002d38((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            DAT_100100e1 = 0;
            return false;
          }
joined_r0x10000a2c:
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
        recovered_10002c34(*param_1,*param_2,&uStack_70);
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b28
 */

bool recovered_10000b28(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = param_2;
  uStack_18 = param_1;
  recovered_10000634();
  bVar1 = recovered_1000092c(&uStack_18,&local_20,1);
  DAT_100100e4 = 0;
  return bVar1;
}

#undef DAT_100100e4
#undef local_20
#undef uStack_18

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b64
 */

ulong recovered_10000b64(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc4
 */

long recovered_10000bc4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c18
 */

ulong recovered_10000c18(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c68
 */

long recovered_10000c68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cac
 */

void recovered_10000cac(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000634();
  recovered_10000cd8(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e4

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7760U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd8
 */

ulong * recovered_10000cd8(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_1000066c();
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
                if (uVar9 < uVar7) goto LAB_10000d88;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000d88:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000dc4;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000dc4:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000e6c;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e20;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000e20:
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
LAB_10000e6c:
                        recovered_10002d88(puVar11,uVar5);
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
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e94
 */

void recovered_10000e94(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000634();
  recovered_10000cd8(param_1,(ulong *)0x0,param_2);
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ecc
 */

ulong * recovered_10000ecc(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000634();
  if (param_3 < param_2) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000cd8(param_1,param_2,param_3);
  }
  DAT_100100e4 = 0;
  return puVar1;
}

#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f10
 */

void recovered_10000f10(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000634();
  recovered_10000f38(param_1);
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e4

#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f38
 */

void recovered_10000f38(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_1000066c();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002ddc(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002ddc(puVar2);
      puVar1 = puVar2;
    }
    DAT_100100f0 = puVar1;
  }
  return;
}

#undef DAT_100100f0

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x775cU)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fac
 */

ulong * recovered_10000fac(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;

  recovered_10000634();
  if (param_1 == (ulong *)0x0) {
    puVar2 = recovered_10000cd8(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_100100e4 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000f38((long)param_1);
    DAT_100100e4 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_100100e4 = 0;
    return (ulong *)0x0;
  }
  recovered_1000066c();
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
    uVar1 = recovered_10002d88(puVar2,uVar7);
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
      if (uVar7 <= uVar3) goto LAB_100010d8;
      uVar3 = recovered_10002dfc(puVar2);
    } while ((uVar3 & 1) != 0);
    uVar3 = *puVar2;
LAB_100010d8:
    if (uVar7 <= uVar3) {
      uVar1 = recovered_10002d88(puVar2,uVar7);
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
    puVar2 = recovered_10000cd8(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_1000142c(puVar2,param_1,uVar3);
      recovered_10000f38((long)param_1);
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
 * Address: 0x10001154
 */

ulong recovered_10001154(ulong param_1,uint param_2)

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
 * Address: 0x10001198
 */

ulong recovered_10001198(ulong param_1,uint param_2)

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
 * Address: 0x100011e4
 */

long recovered_100011e4(long param_1,uint param_2)

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
 * Address: 0x10001234
 */

/* WARNING: Removing unreachable block (ram,0x10001284) */

ulong recovered_10001234(ulong param_1,ulong param_2)

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
 * Address: 0x1000123c
 */

ulong recovered_1000123c(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x1000129c
 */

undefined8 recovered_1000129c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_1000123c(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012bc
 */

long recovered_100012bc(ulong param_1,ulong param_2)

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
  lVar4 = recovered_1000123c(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012fc
 */

long recovered_100012fc(long param_1,long param_2)

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
  recovered_1000123c(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001348
 */

void recovered_10001348(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

int recovered_10001350(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_1000135c(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_100013a0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100013e0(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000142c
 */

void * recovered_1000142c(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001504
 */

void * recovered_10001504(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      destination = recovered_1000142c(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001618
 */

void * recovered_10001618(void *destination,int value,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100016b0
 */

void recovered_100016b0(ulong *param_1,ulong param_2)

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
 * Address: 0x100016b4
 */

void recovered_100016b4(ulong *param_1,ulong param_2)

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
 * Address: 0x100016b8
 */

char * recovered_100016b8(long param_1,char param_2,long param_3)

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
 * Address: 0x100016dc
 */

int recovered_100016dc(void *left,void *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
        goto recovered_10001844;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_10001844;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_10001844;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_10001844;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_10001844:
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
 * Address: 0x10001844
 */

int recovered_10001844(long param_1,long param_2)

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
 * Address: 0x10001870
 */

bool recovered_10001870(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001880
 */

bool recovered_10001880(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

bool recovered_10001890(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a4
 */

bool recovered_100018a4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018c0
 */

bool recovered_100018c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d0
 */

bool recovered_100018d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e0
 */

int recovered_100018e0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f4
 */

int recovered_100018f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001908
 */

ulong recovered_10001908(char *text)

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
 * Address: 0x1000192c
 */

int recovered_1000192c(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001954
 */

int recovered_10001954(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001958
 */

void recovered_10001958(long param_1,long param_2)

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
 * Address: 0x10001970
 */

void recovered_10001970(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10001908(param_1);
    destination = recovered_1000135c(uVar1 + 1);
    if (destination != (void *)0x0) {
      recovered_1000142c(destination,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019ac
 */

char * recovered_100019ac(char *param_1,char param_2)

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
 * Address: 0x100019d4
 */

long recovered_100019d4(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100019ac(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a14
 */

long recovered_10001a14(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100019ac(param_2,*(char *)(param_1 + lVar2)), pcVar1 == (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a54
 */

char * recovered_10001a54(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100019ac(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a94
 */

char * recovered_10001a94(char *param_1,char *param_2)

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


#undef DAT_10008ad7
#define DAT_10008ad7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad0
 */

undefined * recovered_10001ad0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008ad7;
}

#undef DAT_10008ad7

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7678U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001adc
 */

undefined ** recovered_10001adc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ae8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10001618(auStack_38,0,0x18);
  bVar1 = recovered_10002e84(0x168);
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
 * Address: 0x10001b60
 */

double recovered_10001b60(double param_1,uint param_2)

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
 * Address: 0x10001b94
 */

uint128 recovered_10001b94(double param_1,int *param_2)

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
 * Address: 0x10001c08
 */

uint128 recovered_10001c08(double param_1,double param_2)

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
 * Address: 0x10001c2c
 */

uint128 recovered_10001c2c(double param_1,double param_2)

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
 * Address: 0x10001c8c
 */

uint128 recovered_10001c8c(double param_1)

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
 * Address: 0x10001ca8
 */

uint128 recovered_10001ca8(double param_1)

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
 * Address: 0x10001cd4
 */

uint128 recovered_10001cd4(double param_1)

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


#undef DAT_10008990
#define DAT_10008990 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d10
 */

uint128 recovered_10001d10(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10008990 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10008990

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dbc
 */

long recovered_10001dbc(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10008998
#define DAT_10008998 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd0
 */

uint128 recovered_10001dd0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001e24(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10008998);
  return auVar1;
}

#undef DAT_10008998

#undef DAT_100089a0
#define DAT_100089a0 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_100089a8
#define DAT_100089a8 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_100089b0
#define DAT_100089b0 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_100089b8
#define DAT_100089b8 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e24
 */

void recovered_10001e24(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_100089a0 < param_1; param_1 = param_1 + DAT_100089b8) {
  }
  for (; param_1 < DAT_100089a8; param_1 = param_1 + DAT_100089b0) {
  }
  return;
}

#undef DAT_100089a0
#undef DAT_100089a8
#undef DAT_100089b0
#undef DAT_100089b8

#undef DAT_100089c0
#define DAT_100089c0 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e68
 */

uint128 recovered_10001e68(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001e24(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100089c0;
  return auVar1;
}

#undef DAT_100089c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb4
 */

uint128 recovered_10001eb4(double param_1)

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


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10001ec4(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10001f24(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10001f74(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10001f9c(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fc0
 */

float recovered_10001fc0(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff4
 */

void recovered_10001ff4(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b94((double)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000200c
 */

float recovered_1000200c(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001b60((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002024
 */

void recovered_10002024(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c2c((double)param_1,(double)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002040
 */

float recovered_10002040(float param_1)

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
 * Address: 0x10002064
 */

void recovered_10002064(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001ca8((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000207c
 */

uint128 recovered_1000207c(double param_1)

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
 * Address: 0x100020a4
 */

void recovered_100020a4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000207c((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020bc
 */

void recovered_100020bc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001cd4((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d4
 */

void recovered_100020d4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001d10((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020ec
 */

long recovered_100020ec(double param_1)

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
 * Address: 0x10002100
 */

void recovered_10002100(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001dd0((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002118
 */

void recovered_10002118(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001e68((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002130
 */

float recovered_10002130(float param_1)

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
 * Address: 0x10002140
 */

long recovered_10002140(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_100021d8;
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
      goto LAB_10002204;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10002204;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10002204;
    }
LAB_100021d8:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10002204:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10002244((uint)*pbVar4);
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
 * Address: 0x10002244
 */

uint recovered_10002244(int param_1)

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
 * Address: 0x10002274
 */

long recovered_10002274(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10002358;
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
      goto LAB_10002358;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10002358;
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
LAB_10002358:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10002244((uint)*pbVar6);
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
 * Address: 0x10002398
 */

uint128 recovered_10002398(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_10001b60(dVar12,iVar9 * iVar6);
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
 * Address: 0x10002528
 */

void recovered_10002528(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002398(param_1,param_2);
  return;
}


#undef str_10008ad9
#define str_10008ad9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002540
 */

int recovered_10002540(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_100025b0:
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
      goto LAB_100025dc;
    }
    goto LAB_100025e0;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x10002670;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002658;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_10002658;
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
  goto LAB_10002938;
LAB_10002658:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_10002680:
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
LAB_1000276c:
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
      goto LAB_1000276c;
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
      goto LAB_100025dc;
    }
    break;
  case 100:
  case 0x69:
code_r0x1000288c:
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
LAB_10002928:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x10002930:
    uVar6 = 0;
LAB_10002934:
    recovered_10002b20((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_10002938;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002bc0((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x158U));
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
      recovered_10002b20((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
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
    goto LAB_10002938;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002bc0((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x186U));
      uVar7 = 0x10;
      goto code_r0x10002930;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_10008ad9;
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
      goto LAB_10002938;
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
      goto LAB_10002928;
    case 0x78:
code_r0x10002848:
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
      goto LAB_10002934;
    default:
      if (bVar9 == 0x49) goto code_r0x1000288c;
      if (bVar9 == 0x58) goto code_r0x10002848;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_100025dc:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_100025e0:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002938:
  param_3 = pbVar8 + 1;
  goto LAB_100025b0;
code_r0x10002670:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_10002680;
}

#undef str_10008ad9
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ae4
 */

void recovered_10002ae4(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10008aec
#define str_10008aec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x164U)))
#undef str_10008afd
#define str_10008afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b20
 */

void recovered_10002b20(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10008aec;
  if (param_6 == 0) {
    pcVar1 = str_10008afd;
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
    recovered_10002ae4(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_10008aec
#undef str_10008afd
#undef acStack_80

#undef str_10008ad9
#define str_10008ad9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc0
 */

void recovered_10002bc0(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10008ad9;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002ae4(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10008ad9

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10002c0c(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002540(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7758U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c34
 */

void recovered_10002c34(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_10002cb8(param_1,0x84000000 - param_1,param_3);
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
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7758U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7760U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb8
 */

void recovered_10002cb8(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;

  if (((!CARRY8(param_1,param_2)) && (param_1 < 0xfffffffffffffff1)) && (param_3 != (ulong *)0x0)) {
    plVar2 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar3 = param_2 - ((long)plVar2 - param_1);
    if (((long)plVar2 - param_1 <= param_2 && uVar3 != 0) &&
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
 * Address: 0x10002d38
 */

void recovered_10002d38(ulong param_1,ulong param_2,undefined1 *param_3)

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
 * Address: 0x10002d88
 */

undefined8 recovered_10002d88(ulong *param_1,long param_2)

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
 * Address: 0x10002ddc
 */

void recovered_10002ddc(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002dfc(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7768U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dfc
 */

undefined8 recovered_10002dfc(ulong *param_1)

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
 * Address: 0x10002e84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002e84(int param_1)

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
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000301c
 */

void recovered_1000301c(char *param_1,long param_2)

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
          recovered_100030d4(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_100030d4(0);
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
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100030d4(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010100 != 0) || (param_1 != 0)) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000142c(local_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003e44(0x40);
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
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003160(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_1000142c(auStack_230,&DAT_10010108,DAT_10010100);
    uVar2 = DAT_10010100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003e44(0x40);
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
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003168
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003168(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010100 != 0) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000142c(auStack_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003e44(0x40);
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

#undef DAT_10008b11
#define DAT_10008b11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x189U)))
#define acStack_160 (*(char (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003170
 */

void recovered_10003170(char *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10008b11;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002c0c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_1000301c(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10008b11
#undef acStack_160

#undef DAT_10008b2f
#define DAT_10008b2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
#undef str_10008b14
#define str_10008b14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

/* WARNING: Removing unreachable block (ram,0x10003220) */

void recovered_100031d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100031f8(str_10008b14);
  pcVar4 = &DAT_10008b2f;
  for (uVar3 = recovered_10001908(&DAT_10008b2f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100030d4(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_100030d4(0);
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

#undef DAT_10008b2f
#undef DAT_10010100
#undef DAT_10010108
#undef str_10008b14

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

void recovered_100031f8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10001908(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100030d4(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_100030d4(0);
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

#undef DAT_10008b2f
#define DAT_10008b2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7778U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7780U)))
#undef str_10008b32
#define str_10008b32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003224
 */

/* WARNING: Removing unreachable block (ram,0x10003220) */

void recovered_10003224(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100031f8(str_10008b32);
  pcVar4 = &DAT_10008b2f;
  for (uVar3 = recovered_10001908(&DAT_10008b2f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100030d4(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_100030d4(0);
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

#undef DAT_10008b2f
#undef DAT_10010100
#undef DAT_10010108
#undef str_10008b32

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003248
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003248(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10003168();
    bVar2 = recovered_10003e44(0x44);
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
 * Address: 0x100032c0
 */

undefined8 recovered_100032c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c4
 */

void recovered_100032c4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c8
 */

undefined8 recovered_100032c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10008b11
#define DAT_10008b11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x189U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
#undef str_10008bb3
#define str_10008bb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22bU)))
#undef str_10008bc0
#define str_10008bc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10008bce
#define str_10008bce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x246U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d0
 */

undefined4 * recovered_100032d0(byte *param_1,char *param_2)

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

  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_1000192c((char *)param_1,str_10008bb3);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_1000192c((char *)param_1,str_10008bc0);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_1000192c((char *)param_1,str_10008bce);
      if (iVar3 != 0) {
        puVar4 = recovered_1000135c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001618(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100019ac(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019ac(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019ac(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100019ac(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019ac(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019ac(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100019ac(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002c0c((char *)(puVar4 + 1),0xf1,&DAT_10008b11);
        recovered_10001618(&uStack_4c,0,0xc);
        uVar6 = recovered_1000350c(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_100034b4:
            recovered_100013a0(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019ac(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000355c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100034b4;
              recovered_1000142c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000135c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001618(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002c0c((char *)(puVar4 + 1),0xf1,&DAT_10008b11);
  return puVar4;
}

#undef DAT_10008b11
#undef DAT_10010058
#undef str_10008bb3
#undef str_10008bc0
#undef str_10008bce
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000350c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000350c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e44(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000355c
 */

undefined8 recovered_1000355c(long param_1,ulong param_2)

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
      pvVar2 = recovered_100013e0(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_10008b11
#define DAT_10008b11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x189U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
#undef str_10008bb3
#define str_10008bb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22bU)))
#undef str_10008bc0
#define str_10008bc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10008bce
#define str_10008bce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x246U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e4
 */

undefined4 * recovered_100035e4(byte *param_1,char *param_2,int *param_3)

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
    recovered_10003618(param_3);
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_1000192c((char *)param_1,str_10008bb3);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_1000192c((char *)param_1,str_10008bc0);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_1000192c((char *)param_1,str_10008bce);
      if (iVar3 != 0) {
        puVar4 = recovered_1000135c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001618(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100019ac(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019ac(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019ac(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100019ac(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019ac(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019ac(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100019ac(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002c0c((char *)(puVar4 + 1),0xf1,&DAT_10008b11);
        recovered_10001618(&uStack_4c,0,0xc);
        uVar6 = recovered_1000350c(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_100034b4:
            recovered_100013a0(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019ac(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000355c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100034b4;
              recovered_1000142c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000135c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001618(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002c0c((char *)(puVar4 + 1),0xf1,&DAT_10008b11);
  return puVar4;
}

#undef DAT_10008b11
#undef DAT_10010058
#undef str_10008bb3
#undef str_10008bc0
#undef str_10008bce
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003618
 */

undefined8 recovered_10003618(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003a3c(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_100013a0(*(void **)(param_1 + 0x40));
    }
    recovered_100013a0(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000365c
 */

ulong recovered_1000365c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
          recovered_1000142c(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
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
            uVar4 = recovered_10003790(param_4);
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


#undef DAT_10008aeb
#define DAT_10008aeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x163U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003790
 */

uint recovered_10003790(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
LAB_10003828:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10003248((long)text,0x1fe,&DAT_10008aeb,0);
      if (bVar2) {
        uVar3 = recovered_10001908(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10003828;
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

#undef DAT_10008aeb

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

long recovered_10003874(char *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_1000301c(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10003974;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_1000355c((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10001618((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_1000142c((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10003974;
    }
  }
  param_3 = 0;
LAB_10003974:
  return param_3;
}


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003984
 */

undefined8 recovered_10003984(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10003990;
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
LAB_10003990:
  DAT_10010058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a18
 */

undefined8 recovered_10003a18(long param_1)

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
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a3c
 */

undefined8 recovered_10003a3c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003c18(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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
 * Address: 0x10003ab0
 */

undefined1 recovered_10003ab0(long param_1)

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
 * Address: 0x10003abc
 */

undefined1 recovered_10003abc(long param_1)

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
 * Address: 0x10003ac8
 */

void recovered_10003ac8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003adc
 */

uint recovered_10003adc(uint param_1,long param_2)

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
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b00
 */

undefined8 recovered_10003b00(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
  }
  else {
    uVar1 = recovered_10003b38(param_1);
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
 * Address: 0x10003b38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003b38(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e44(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76d0U)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b7c
 */

undefined8 recovered_10003b7c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
  }
  else {
    recovered_10001618(&uStack_2c,0,0xc);
    uVar1 = recovered_1000350c(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010058 = 2;
    }
    else {
      uVar1 = recovered_10003c18(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003b38(param_1), (int)uVar1 != 0)) {
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
 * Address: 0x10003c18
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e44(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003c68. Too many branches */
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
 * Address: 0x10003c78
 */

undefined8 recovered_10003c78(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *destination;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10001618(&uStack_3c,0,0xc);
    uVar2 = recovered_1000350c(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      destination = recovered_1000135c((ulong)uVar1);
      uVar2 = 0;
      if (destination != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_1000142c(destination,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10003d18
 */

bool recovered_10003d18(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003c18(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d44
 */

undefined8 recovered_10003d44(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d48
 */

void recovered_10003d48(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d4c
 */

undefined8 recovered_10003d4c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d50
 */

undefined8 recovered_10003d50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d54
 */

undefined8 recovered_10003d54(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d58
 */

int recovered_10003d58(char *left,char *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10008b42
#define DAT_10008b42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1baU)))
#undef str_10008b45
#define str_10008b45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_10008b52
#define str_10008b52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1caU)))
#undef str_10008b5c
#define str_10008b5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_10008b70
#define str_10008b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10008b7e
#define str_10008b7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f6U)))
#undef str_10008b90
#define str_10008b90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_10008b9c
#define str_10008b9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x214U)))
#undef str_10008bad
#define str_10008bad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d88
 */

char * recovered_10003d88(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10008b42;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003db4_caseD_1;
  case 2:
    return str_10008b45;
  case 5:
    return str_10008b52;
  case 9:
    return str_10008b5c;
  case 0xc:
    return str_10008b70;
  case 0xd:
    return str_10008b7e;
  default:
    if (param_1 == 0x11) {
      return str_10008b90;
    }
    if (param_1 == 0x16) {
      return str_10008b9c;
    }
switchD_10003db4_caseD_1:
    return str_10008bad;
  }
}

#undef DAT_10008b42
#undef str_10008b45
#undef str_10008b52
#undef str_10008b5c
#undef str_10008b70
#undef str_10008b7e
#undef str_10008b90
#undef str_10008b9c
#undef str_10008bad

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e28
 */

undefined8 recovered_10003e28(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e2c
 */

undefined8 recovered_10003e2c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7770U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e30
 */

void recovered_10003e30(void)

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
 * Address: 0x10003e44
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003e44(int param_1)

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

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003f10(void *context){__asm__ volatile("ldr x16,[x0,#80]\nmov sp,x16\nldr x29,[x0,#64]\nldr x16,[x0,#72]\nbr x16");}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003f24(void *context){
 __asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) int recovered_10003f80(long context,int value){
 __asm__ volatile("cbnz w1,1f\nmov w1, #1\n1:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fe4
 */

void recovered_10003fe4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10001348();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003ff4);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ff8
 */

undefined8 recovered_10003ff8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004000
 */

void recovered_10004000(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004010(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003fe4();
}


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004010
 */

long recovered_10004010(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10004214(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fe4();
  }
  *(long *)(lVar1 + 0x10) = DAT_10010308;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_10010308 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_10010308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000403c
 */

void * recovered_1000403c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000135c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001348();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000406c
 */

void * recovered_1000406c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000135c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001348();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004070
 */

void recovered_10004070(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004088
 */

void recovered_10004088(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a0
 */

void recovered_100040a0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040b8
 */

void recovered_100040b8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040d0
 */

undefined8 recovered_100040d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040d8
 */

uint recovered_100040d8(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e8
 */

void recovered_100040e8(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040f8
 */

void recovered_100040f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010318
#define DAT_10010318 (*(int *)(((uintptr_t)pf_module_state + 0x7990U)))
#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7998U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040fc
 */

long recovered_100040fc(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000135c(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fe4();
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
        return (long)pvVar1 + 0x38;
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
 * Address: 0x100041a4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041a4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  recovered_100041d4(param_1 + -0x38);
  bVar1 = recovered_10002e84(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x38);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7998U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041d4
 */

void recovered_100041d4(long param_1)

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
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7998U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004214
 */

long recovered_10004214(long param_1)

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
 * Address: 0x10004244
 */

long recovered_10004244(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7980U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000424c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000424c(void)

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
      recovered_100041d4(lVar2);
      bVar3 = recovered_10002e84(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013d4. Too many branches */
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
 * Address: 0x100042ac
 */

void recovered_100042ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100042cc((undefined8 *)(param_1 + -0x38));
}


#undef DAT_10010310
#define DAT_10010310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7988U)))
#define local_30 (*(undefined2 *)(pf_stack_frame + 16))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define cStack_2e (*(char *)(pf_stack_frame + 18))
#define uStack_2d (*(undefined1 *)(pf_stack_frame + 19))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042cc
 */

void recovered_100042cc(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10010310;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1000432c;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100048c0((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[4] = puVar2;
  param_1[5] = CONCAT44(local_28,uStack_2c);
  recovered_100043e4(param_1);
LAB_1000432c:
                    /* WARNING: Subroutine does not return */
  recovered_10003fe4();
}

#undef DAT_10010310
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010308
#define DAT_10010308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004330
 */

void recovered_10004330(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010308;
  if (DAT_10010308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fe4();
  }
  *(undefined1 *)((long)DAT_10010308 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100042cc(puVar1);
}

#undef DAT_10010308

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7988U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004360
 */

void recovered_10004360(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010310;
  DAT_10010310 = param_1;
  return;
}

#undef DAT_10010310

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7988U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004374
 */

void recovered_10004374(undefined8 *param_1)

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
 * Address: 0x100043a0
 */

void recovered_100043a0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100042cc(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043ac
 */

void recovered_100043ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003fe4();
}


#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7988U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b8
 */

undefined8 recovered_100043b8(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long extraout_x0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_10004214(param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fe4();
  }
  if (DAT_10010310 != (long *)0x0) {
    DAT_10010310 = (long *)*DAT_10010310;
  }
  puVar2 = (undefined8 *)recovered_100043e4(puVar2);
  plVar3 = DAT_10010310;
  while( true ) {
    DAT_10010310 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003fe4();
    }
    if (plVar3 == (long *)puVar2[4]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_100048c0((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10004478;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10004478:
  recovered_10003f10((long)plVar3);
  recovered_100043b8(extraout_x0);
  return 0;
}

#undef DAT_10010310
#undef uStack_50
#undef uStack_48

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7988U)))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043e4
 */

undefined8 recovered_100043e4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long extraout_x0;
  long *plVar2;

  plVar2 = DAT_10010310;
  while( true ) {
    DAT_10010310 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003fe4();
    }
    if (plVar2 == (long *)param_1[4]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_100048c0((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10004478;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x2c);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10004478:
  recovered_10003f10((long)plVar2);
  recovered_100043b8(extraout_x0);
  return 0;
}

#undef DAT_10010310
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004480
 */

undefined8 recovered_10004480(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100043b8(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000448c
 */

undefined8 recovered_1000448c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004494
 */

void recovered_10004494(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003fe4();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044a0
 */

long recovered_100044a0(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_100044e0(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e0
 */

bool recovered_100044e0(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10004564:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10004564;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10004564;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x7728U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000456c
 */

void recovered_1000456c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

undefined8 recovered_10004570(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004578
 */

bool recovered_10004578(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004588
 */

bool recovered_10004588(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

bool recovered_100045c0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045dc
 */

bool recovered_100045dc(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045f4
 */

bool recovered_100045f4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000460c
 */

bool recovered_1000460c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004624
 */

bool recovered_10004624(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_1000463c(double value) {
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
float recovered_100046fc(float value){return (float)recovered_1000463c((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10004718(long double value){return (long double)recovered_1000463c((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_1000471c(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000472c
 */

uint128 recovered_1000472c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001c8c(param_1);
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
 * Address: 0x10004778
 */

long recovered_10004778(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100047b8;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100047b8:
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
      goto LAB_1000483c;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_1000483c;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_1000483c;
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
LAB_1000483c:
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
 * Address: 0x100048bc
 */

long recovered_100048bc(byte *param_1,undefined8 *param_2,uint param_3)

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100047b8;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100047b8:
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
      goto LAB_1000483c;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_1000483c;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_1000483c;
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
LAB_1000483c:
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

#undef DAT_10008a28
#define DAT_10008a28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c0
 */

undefined8 recovered_100048c0(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_10004a98((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004b8c(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004b8c(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004b8c(&local_68);
        uVar5 = recovered_10004b8c(&local_68);
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
            uVar5 = recovered_10004be8(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004be8(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10008a28 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004a98((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_100044e0(param_2,(long *)puVar6);
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

#undef DAT_10008a28
#undef pbStack_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a98
 */

ulong * recovered_10004a98(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10004bc0(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10004b50;
  case 1:
    puVar1 = (ulong *)recovered_10004b8c(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004bc0(pbVar5,2);
    goto LAB_10004b4c;
  case 3:
    puVar1 = (ulong *)recovered_10004bc0(pbVar5,4);
    goto LAB_10004b14;
  default:
    goto switchD_10004ae0_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004be8(param_2);
    break;
  case 10:
    uVar3 = recovered_10004bc0(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004b4c:
    pbVar4 = pbVar5 + 2;
LAB_10004b50:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004bc0(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004b14:
    pbVar4 = pbVar5 + 4;
    goto LAB_10004b50;
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
switchD_10004ae0_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b8c
 */

ulong recovered_10004b8c(undefined8 *param_1)

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
 * Address: 0x10004bc0
 */

ulong recovered_10004bc0(byte *param_1,long param_2)

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
 * Address: 0x10004be8
 */

ulong recovered_10004be8(undefined8 *param_1)

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


#undef DAT_1000c010
#define DAT_1000c010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3688U)))
#undef DAT_10010328
#define DAT_10010328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79a0U)))
#define local_58 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 48))
#define local_50 (*(undefined4 *)(pf_stack_frame + 32))
#define local_48 (*(undefined8 *)(pf_stack_frame + 40))
#define local_38 (*(undefined4 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c68
 */

void recovered_10004c68(void)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;

  puVar3 = &DAT_1000c010;
  for (lVar4 = 4; lVar4 != 0x128; lVar4 = lVar4 + 4) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uVar1 = *puVar3;
    uVar2 = recovered_10004d00(*(undefined8 *)(puVar3 + -2),&local_58);
    if (((int)uVar2 == 0 || PF_PART4(local_58, 4) >> 0x18 != 0) || (int)local_58 != 1) {
      PF_PART4(local_58, 4) = uVar1;
    }
    *(uint *)(&DAT_10010328 + lVar4) = PF_PART4(local_58, 4);
    puVar3 = puVar3 + 4;
  }
  DAT_10010328 = 1;
  return;
}

#undef DAT_1000c010
#undef DAT_10010328
#undef local_58
#undef uStack_40
#undef local_50
#undef local_48
#undef local_38

#undef UNK_82010a04
#define UNK_82010a04 (*(uint *)(0x82010a04U))
#undef uRam0000000082010a04
#define uRam0000000082010a04 (*(uint32_t *)(0x82010a04U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d00
 */

undefined8 recovered_10004d00(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0x204);
  if ((bVar1) && (uRam0000000082010a04 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uRam0000000082010a04)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef UNK_82010a04
#undef uRam0000000082010a04

#undef DAT_1000c010
#define DAT_1000c010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3688U)))
#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1001032c
#define DAT_1001032c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d48
 */

undefined4 recovered_10004d48(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (0x48 < param_1) {
    return 0;
  }
  puVar1 = &DAT_1001032c + param_1;
  if (DAT_10010328 == '\0') {
    puVar1 = &DAT_1000c010 + (ulong)param_1 * 4;
  }
  return *puVar1;
}

#undef DAT_1000c010
#undef DAT_10010328
#undef DAT_1001032c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d88
 */

undefined8 recovered_10004d88(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if (param_1 == (long *)0x0) {
    return 0;
  }
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x30) == 0) {
      return 0;
    }
    if ((param_3 & 0x8000000080000000) != 0) {
      return 0;
    }
    uVar6 = param_4 >> 0x20;
    bVar1 = true;
    bVar2 = false;
    if (0 < (int)param_4) {
      iVar5 = (int)(param_4 >> 0x20);
      bVar2 = SBORROW4(iVar5,1);
      bVar1 = iVar5 + -1 < 0;
    }
    if (bVar1 != bVar2) {
      return 0;
    }
    uVar8 = param_4 & 0x7fffffff;
    if (((((param_3 & 0x7fffffff) + uVar8 <= (ulong)*(uint *)(param_2 + 4)) &&
         (uVar7 = param_3 >> 0x20, uVar7 + uVar6 <= (ulong)*(uint *)(param_2 + 8))) &&
        (uVar8 * uVar6 >> 0x1e == 0)) &&
       ((ulong)*(uint *)(param_2 + 4) << 2 <= (ulong)*(uint *)(param_2 + 0xc))) {
      lVar4 = uVar8 * (uintptr_t)(uintptr_t)uVar6 * 4;
      if (lVar4 != param_1[1]) {
        lVar3 = recovered_10004ec4(*param_1,lVar4);
        if (lVar3 == 0) {
          return 0;
        }
        *param_1 = lVar3;
        param_1[1] = lVar4;
      }
      lVar4 = 0;
      param_1[2] = param_3;
      param_1[3] = param_4;
      param_1[4] = *(long *)(param_2 + 4);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0xc);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        recovered_1000142c((void *)(*param_1 + lVar4),
                           (void *)(*(long *)(param_2 + 0x30) + uVar7 * *(uint *)(param_2 + 0xc) +
                                   (param_3 & 0x7fffffff) * 4),uVar8 * 4);
        lVar4 = lVar4 + uVar8 * 4;
        uVar7 = uVar7 + 1;
      }
      *(undefined1 *)((long)param_1 + 0x2c) = 1;
      return 1;
    }
  }
  return 0;
}


#undef DAT_82010854
#define DAT_82010854 (*(uint8_t *)(0x82010854U))
#undef _DAT_82010854
#define _DAT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004ec4(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0x54);
  if ((bVar1) && (_DAT_82010854 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010854)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010854
#undef _DAT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f10
 */

undefined8 recovered_10004f10(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong count;
  long lVar4;
  ulong uVar5;

  uVar3 = 0;
  if (((param_1 != (long *)0x0) && (uVar3 = 0, param_2 != 0)) &&
     ((*(byte *)((long)param_1 + 0x2c) & 1) != 0)) {
    if (((*(long *)(param_2 + 0x30) == 0) || (*(int *)(param_2 + 4) != (int)param_1[4])) ||
       ((*(int *)(param_2 + 8) != *(int *)((long)param_1 + 0x24) ||
        (*(int *)(param_2 + 0xc) != (int)param_1[5])))) {
      uVar3 = 0;
    }
    else {
      lVar4 = 0;
      lVar2 = param_1[2];
      lVar1 = (long)*(int *)((long)param_1 + 0x14);
      count = (long)(int)param_1[3] * 4;
      for (uVar5 = (ulong)(*(uint *)((long)param_1 + 0x1c) &
                          ((int)*(uint *)((long)param_1 + 0x1c) >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
          uVar5 = uVar5 - 1) {
        recovered_1000142c((void *)(*(long *)(param_2 + 0x30) +
                                    lVar1 * (ulong)*(uint *)(param_2 + 0xc) + (long)(int)lVar2 * 4),
                           (void *)(*param_1 + lVar4),count);
        lVar4 = lVar4 + count;
        lVar1 = lVar1 + 1;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe4
 */

/* WARNING: Removing unreachable block (ram,0x10001640) */

void recovered_10004fe4(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (param_1 == (ulong *)0x0) {
    return;
  }
  recovered_1000501c(*param_1);
  uVar3 = 0;
  for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
    uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
  }
  uVar1 = 0x30;
  puVar2 = param_1;
  for (; (uVar1 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = (ulong *)((long)param_1 + 1)) {
    *(undefined1 *)puVar2 = 0;
    uVar1 = uVar1 - 1;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  for (; 0x1f < uVar1; uVar1 = uVar1 - 0x20) {
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  }
  while (7 < uVar1) {
    *puVar2 = uVar3;
    uVar1 = uVar1 - 8;
    puVar2 = puVar2 + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return;
}


#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000501c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000501c(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10007d8c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

int recovered_10005060(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == (int *)0x0) {
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar3 = 0;
    if (iVar1 <= iVar2) {
      iVar3 = iVar1;
    }
    iVar4 = 0;
    if (iVar1 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_2 <= iVar4) {
    iVar4 = param_2;
  }
  if (iVar3 <= param_2) {
    iVar3 = iVar4;
  }
  return iVar3;
}


#define lStack_68 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005094
 */

/* WARNING: Removing unreachable block (ram,0x100051f0) */
/* WARNING: Removing unreachable block (ram,0x100051e8) */
/* WARNING: Removing unreachable block (ram,0x100052ac) */

void recovered_10005094(undefined8 param_1,ulong param_2,int *param_3,int *param_4,int *param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int *destination;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;

  if (param_5 != (int *)0x0) {
    recovered_10001618(param_5,0,0xbc);
    uVar13 = (uint)param_2;
    *(bool *)(param_5 + 4) = param_3 != (int *)0x0;
    iVar14 = (int)param_1;
    iVar7 = iVar14 + 2;
    uVar9 = uVar13 - 2;
    if (param_3 == (int *)0x0) {
      iVar7 = iVar14;
      uVar9 = uVar13;
    }
    uVar16 = (uint)(param_2 >> 0x20);
    *(bool *)((long)param_5 + 0x11) = param_4 != (int *)0x0;
    uVar10 = uVar16 - 2;
    if (param_4 == (int *)0x0) {
      uVar10 = uVar16;
    }
    iVar6 = (int)((ulong)param_1 >> 0x20);
    *param_5 = iVar7;
    param_5[1] = iVar6;
    param_5[2] = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    param_5[3] = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
    if (param_3 != (int *)0x0) {
      lVar3 = 0xfffffff4;
      if (param_4 == (int *)0x0) {
        lVar3 = 0;
      }
      lVar3 = lVar3 + (param_2 >> 0x20);
      uVar8 = lVar3 << 0x20 | 0xc;
      if ((int)lVar3 < 0) {
        uVar8 = 0xc;
      }
      recovered_100051b8(param_1,uVar8,0,param_3,param_5 + 5);
    }
    if (param_4 != (int *)0x0) {
      iVar7 = 0xc;
      if (param_3 == (int *)0x0) {
        iVar7 = 0;
      }
      uVar8 = 0xc00000000;
      if (iVar7 <= (int)uVar13) {
        uVar8 = (ulong)(uVar13 - iVar7) | 0xc00000000;
      }
      lVar3 = CONCAT44(iVar6 + uVar16,iVar7 + iVar14) + -0xc00000000;
      destination = param_5 + 0x1a;
      iVar14 = (int)lVar3;
      iVar7 = (int)uVar8;
      if (param_4 == (int *)0x0) {
        lStack_68 = 0;
        lVar12 = 0;
      }
      else {
        iVar15 = *param_4;
        iVar4 = param_4[1];
        iVar6 = 0;
        if (iVar15 <= iVar4) {
          iVar6 = iVar15;
        }
        iVar2 = 0;
        if (iVar15 <= iVar4) {
          iVar2 = iVar4;
        }
        lVar12 = (long)iVar2;
        lStack_68 = (long)iVar6;
      }
      iVar6 = recovered_10005060(param_4,param_4[2]);
      uVar9 = param_4[3];
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      if (destination != (int *)0x0) {
        iVar15 = iVar14 + 0x10;
        uVar10 = iVar7 - 0x20;
        lVar12 = lVar12 - lStack_68;
        recovered_10001618(destination,0,0x54);
        *destination = 1;
        *(long *)(param_5 + 0x1b) = lVar3;
        *(ulong *)(param_5 + 0x1d) = uVar8;
        *(long *)(param_5 + 0x23) = lVar3;
        *(long *)(param_5 + 0x27) = lVar3;
        *(ulong *)(param_5 + 0x25) = uVar8;
        *(ulong *)(param_5 + 0x29) = uVar8;
        plVar11 = (long *)(param_5 + 0x1f);
        *plVar11 = lVar3;
        *(ulong *)(param_5 + 0x21) = uVar8;
        uVar13 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
        param_5[0x23] = iVar14;
        param_5[0x25] = 0xe;
        param_5[0x27] = iVar7 + iVar14 + -0xe;
        param_5[0x29] = 0xe;
        *(int *)plVar11 = iVar15;
        param_5[0x21] = uVar13;
        *(undefined8 *)(param_5 + 0x2d) = *(undefined8 *)(param_5 + 0x21);
        *(long *)(param_5 + 0x2b) = *plVar11;
        if ((0 < lVar12) && (0x20 < iVar7)) {
          uVar8 = lVar12 + (ulong)uVar9;
          uVar5 = 0;
          if (uVar8 != 0) {
            uVar5 = ((ulong)uVar9 * (ulong)uVar13) / uVar8;
          }
          if (0x7ffffffe < uVar5) {
            uVar5 = 0x7fffffff;
          }
          uVar9 = (uint)uVar5;
          if (uVar9 < 0x13) {
            uVar9 = 0x12;
          }
          uVar16 = uVar13;
          if (uVar9 <= uVar10) {
            uVar16 = uVar9;
          }
          bVar1 = uVar16 < uVar10;
          uVar10 = uVar16;
          if (bVar1) {
            iVar7 = 0;
            if (lVar12 != 0) {
              iVar7 = (int)(((iVar6 - lStack_68) * (long)(int)(uVar13 - uVar16)) / lVar12);
            }
            iVar15 = iVar15 + iVar7;
          }
        }
        param_5[0x2b] = iVar15;
        param_5[0x2d] = uVar10;
      }
      return;
    }
  }
  return;
}

#undef lStack_68

#define lStack_68 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b8
 */

void recovered_100051b8(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,int *param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  int iVar19;

  iVar11 = (int)param_1;
  iVar12 = (int)param_2;
  if (param_3 != 1) {
    iVar11 = (int)((ulong)param_1 >> 0x20);
    iVar12 = (int)((ulong)param_2 >> 0x20);
  }
  if (param_4 == (int *)0x0) {
    lStack_68 = 0;
    lVar18 = 0;
  }
  else {
    iVar19 = *param_4;
    iVar7 = param_4[1];
    iVar10 = 0;
    if (iVar19 <= iVar7) {
      iVar10 = iVar19;
    }
    iVar4 = 0;
    if (iVar19 <= iVar7) {
      iVar4 = iVar7;
    }
    lVar18 = (long)iVar4;
    lStack_68 = (long)iVar10;
  }
  iVar10 = recovered_10005060(param_4,param_4[2]);
  uVar13 = param_4[3];
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  if (param_5 != (int *)0x0) {
    iVar19 = iVar11 + 0x10;
    uVar14 = iVar12 - 0x20;
    lVar18 = lVar18 - lStack_68;
    recovered_10001618(param_5,0,0x54);
    bVar9 = param_3 != 1;
    *param_5 = param_3;
    *(undefined8 *)(param_5 + 1) = param_1;
    *(undefined8 *)(param_5 + 3) = param_2;
    piVar15 = param_5 + 9;
    *(undefined8 *)piVar15 = param_1;
    piVar16 = param_5 + 0xd;
    *(undefined8 *)piVar16 = param_1;
    *(undefined8 *)(param_5 + 0xb) = param_2;
    *(undefined8 *)(param_5 + 0xf) = param_2;
    piVar17 = param_5 + 5;
    *(undefined8 *)piVar17 = param_1;
    *(undefined8 *)(param_5 + 7) = param_2;
    uVar3 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
    piVar15[bVar9] = iVar11;
    lVar6 = 8;
    if (bVar9) {
      lVar6 = 0xc;
    }
    *(undefined4 *)((long)piVar15 + lVar6) = 0xe;
    piVar16[bVar9] = iVar12 + iVar11 + -0xe;
    *(undefined4 *)((long)piVar16 + lVar6) = 0xe;
    piVar17[bVar9] = iVar19;
    *(uint *)((long)piVar17 + lVar6) = uVar3;
    *(undefined8 *)(param_5 + 0x13) = *(undefined8 *)(param_5 + 7);
    *(undefined8 *)(param_5 + 0x11) = *(undefined8 *)piVar17;
    if ((0 < lVar18) && (0x20 < iVar12)) {
      uVar2 = lVar18 + (ulong)uVar13;
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = ((ulong)uVar13 * (ulong)uVar3) / uVar2;
      }
      if (0x7ffffffe < uVar8) {
        uVar8 = 0x7fffffff;
      }
      uVar13 = (uint)uVar8;
      if (uVar13 < 0x13) {
        uVar13 = 0x12;
      }
      uVar5 = uVar3;
      if (uVar13 <= uVar14) {
        uVar5 = uVar13;
      }
      bVar1 = uVar5 < uVar14;
      uVar14 = uVar5;
      if (bVar1) {
        iVar12 = 0;
        if (lVar18 != 0) {
          iVar12 = (int)(((iVar10 - lStack_68) * (long)(int)(uVar3 - uVar5)) / lVar18);
        }
        iVar19 = iVar19 + iVar12;
      }
    }
    param_5[(ulong)bVar9 + 0x11] = iVar19;
    *(uint *)((long)param_5 + lVar6 + 0x44) = uVar14;
  }
  return;
}

#undef lStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005358
 */

int recovered_10005358(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;

  if (param_2 == (int *)0x0) {
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar7 = 0;
    if (iVar2 <= iVar3) {
      iVar7 = iVar2;
    }
    iVar8 = 0;
    if (iVar2 <= iVar3) {
      iVar8 = iVar3;
    }
  }
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (iVar7 < iVar8)) {
    iVar2 = *param_1;
    piVar5 = param_1 + 7;
    if (iVar2 != 1) {
      piVar5 = param_1 + 8;
    }
    piVar6 = param_1 + 0x13;
    if (iVar2 != 1) {
      piVar6 = param_1 + 0x14;
    }
    uVar10 = (ulong)(uint)(*piVar5 - *piVar6);
    if (0 < *piVar5 - *piVar6) {
      uVar1 = *(ulong *)(param_1 + 5);
      if (iVar2 != 1) {
        uVar1 = *(ulong *)(param_1 + 5) >> 0x20;
      }
      uVar9 = (long)param_3 - ((long)(int)uVar1 + (long)param_4);
      uVar1 = uVar10;
      if ((long)uVar9 <= (long)uVar10) {
        uVar1 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
      }
      lVar4 = 0;
      if (uVar10 != 0) {
        lVar4 = (long)(uVar1 * ((long)iVar8 - (long)iVar7)) / (long)uVar10;
      }
      lVar4 = lVar4 + iVar7;
      if (lVar4 < -0x80000000LL) {
        return -0x80000000LL;
      }
      iVar7 = 0x7fffffff;
      if (lVar4 < 0x80000000) {
        iVar8 = *param_2;
        iVar2 = param_2[1];
        iVar7 = 0;
        if (iVar8 <= iVar2) {
          iVar7 = iVar8;
        }
        iVar3 = 0;
        if (iVar8 <= iVar2) {
          iVar3 = iVar2;
        }
        iVar8 = (int)lVar4;
        if (iVar8 <= iVar3) {
          iVar3 = iVar8;
        }
        if (iVar7 <= iVar8) {
          iVar7 = iVar3;
        }
        return iVar7;
      }
    }
  }
  return iVar7;
}


#undef DAT_10008a90
#define DAT_10008a90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef DAT_10010328
#define DAT_10010328 (*(byte *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1001032c
#define DAT_1001032c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a4U)))
#undef DAT_820108c0
#define DAT_820108c0 (*(uint8_t *)(0x820108c0U))
#undef PTR_str_10008bdc_1000c008
#define PTR_str_10008bdc_1000c008 (*(char * *)(((uintptr_t)pf_module_state + 0x3680U)))
#undef UNK_10008a98
#define UNK_10008a98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef UNK_820108bc
#define UNK_820108bc (*(uint *)(0x820108bcU))
#undef _DAT_10008a90
#define _DAT_10008a90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef _DAT_820108c0
#define _DAT_820108c0 (*(uint *)(0x820108c0U))
#undef uRam0000000010008a98
#define uRam0000000010008a98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef uRam00000000820108bc
#define uRam00000000820108bc (*(uint32_t *)(0x820108bcU))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 16176))
#define uStack_3f7c (*(uint *)(pf_stack_frame + 20))
#define auStack_3f78 (*(undefined1 (*)[16248])(pf_stack_frame + 24))
#define local_78 (*(undefined8 *)(pf_stack_frame + 16152))
#define auStack_3d88 (*(uint (*)[3938])(pf_stack_frame + 520))
#define local_70 (*(undefined4 *)(pf_stack_frame + 16160))
#define local_68 (*(undefined8 *)(pf_stack_frame + 16168))
#define local_58 (*(undefined4 *)(pf_stack_frame + 16184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005440(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[16304] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;

  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 0;
  if ((DAT_10010328 & 1) == 0) {
    lVar6 = 0;
    do {
      if (lVar6 + 0x10 == 0x4a0) {
        bVar2 = recovered_10007d8c(0xbc);
        if ((bVar2) && (uRam00000000820108bc != 0)) {
          uVar4 = (*(code *)(ulong)uRam00000000820108bc)();
          if ((-1 < (int)uVar4) && (uVar5 = recovered_10007dd4(uVar4), (int)uVar5 != 0)) break;
        }
        else {
          uVar4 = 0xffffffff;
        }
        uStack_3f7c = 0;
        bVar2 = recovered_10007d8c(0xc0);
        if ((bVar2) &&
           ((_DAT_820108c0 != 0 &&
            (iVar3 = (*(code *)(ulong)_DAT_820108c0)(auStack_3f78,0x20,&uStack_3f7c), iVar3 != 0))))
        {
          uVar7 = (ulong)uStack_3f7c;
          if (0x20 < uStack_3f7c) {
            uVar7 = 0x20;
            uStack_3f7c = 0x20;
          }
          uVar8 = 0;
          puVar9 = auStack_3d88;
          goto LAB_1000554c;
        }
        break;
      }
      uVar4 = recovered_10004d00(*(undefined8 *)((long)&PTR_str_10008bdc_1000c008 + lVar6),&local_78
                                );
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar4 == 0);
LAB_10005578:
    recovered_10004c68();
  }
  recovered_10001618(param_1,0,0x48);
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  uVar1 = DAT_1001032c;
  if (DAT_10010328 == 0) {
    uVar1 = 0xf6f6f6;
  }
  *(int *)(param_1 + 2) = param_3 << 2;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  uVar4 = _DAT_10008a90;
  param_1[4] = uRam0000000010008a98;
  param_1[3] = uVar4;
  return;
LAB_1000554c:
  if (uVar7 <= uVar8) goto LAB_10005578;
  if (*puVar9 != (uint)uVar4) {
    uVar5 = recovered_10007dd4((ulong)*puVar9);
    if ((int)uVar5 != 0) goto LAB_10005578;
    uVar7 = (ulong)uStack_3f7c;
  }
  uVar8 = uVar8 + 1;
  puVar9 = puVar9 + 0x7e;
  goto LAB_1000554c;
}

#undef DAT_10008a90
#undef DAT_10010328
#undef DAT_1001032c
#undef DAT_820108c0
#undef PTR_str_10008bdc_1000c008
#undef UNK_10008a98
#undef UNK_820108bc
#undef _DAT_10008a90
#undef _DAT_820108c0
#undef uRam0000000010008a98
#undef uRam00000000820108bc
#undef uStack_60
#undef uStack_3f7c
#undef auStack_3f78
#undef local_78
#undef auStack_3d88
#undef local_70
#undef local_68
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055d8
 */

void recovered_100055d8(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (99 < param_3) {
    param_3 = 100;
  }
  *(uint *)(param_2 + 0x18) = param_3;
  uVar3 = 0x48;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f4
 */

void recovered_100055f4(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (99 < param_3) {
    param_3 = 100;
  }
  *(uint *)(param_2 + 0x1c) = param_3;
  uVar3 = 0x48;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005610
 */

void recovered_10005610(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (4 < param_3 + 1U) {
    param_3 = -1;
  }
  if (99 < param_4) {
    param_4 = 100;
  }
  *(int *)(param_2 + 0x20) = param_3;
  *(uint *)(param_2 + 0x24) = param_4;
  uVar3 = 0x48;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005638
 */

void recovered_10005638(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[4] = 0;
  return;
}


#undef DAT_10008aa0
#define DAT_10008aa0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x118U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000564c
 */

void recovered_1000564c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[4] = DAT_10008aa0;
  return;
}

#undef DAT_10008aa0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005668
 */

void recovered_10005668(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  if (99 < param_3) {
    param_3 = 100;
  }
  *(undefined4 *)(param_1 + 4) = 2;
  *(uint *)((long)param_1 + 0x24) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000568c
 */

void recovered_1000568c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  if (99 < param_3) {
    param_3 = 100;
  }
  *(undefined4 *)(param_1 + 4) = 3;
  *(uint *)((long)param_1 + 0x24) = param_3;
  return;
}


#undef DAT_10008aa8
#define DAT_10008aa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef DAT_820108a0
#define DAT_820108a0 (*(uint8_t *)(0x820108a0U))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
#undef _DAT_820108a0
#define _DAT_820108a0 (*(uint *)(0x820108a0U))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_7c (*(uint *)(pf_stack_frame + 36))
#define uStack_74 (*(undefined4 *)(pf_stack_frame + 44))
#define iStack_70 (*(int *)(pf_stack_frame + 48))
#define iStack_6c (*(int *)(pf_stack_frame + 52))
#define iStack_68 (*(int *)(pf_stack_frame + 56))
#define uStack_64 (*(uint *)(pf_stack_frame + 60))
#define puStack_60 (*(undefined * *)(pf_stack_frame + 64))
#define puStack_58 (*(undefined * *)(pf_stack_frame + 72))
#define puStack_50 (*(undefined * *)(pf_stack_frame + 80))
#define bStack_48 (*(byte *)(pf_stack_frame + 88))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_80 (*(uint *)(pf_stack_frame + 32))
#define local_78 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100056b0(int *param_1,void *param_2)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;

  local_8c = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)((long)param_2 + 8);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_2 + 0xc);
  if (uVar2 != 0) {
    recovered_1000142c(&uStack_88,param_2,0x48);
    uVar6 = recovered_100058a4(local_80,uStack_7c,&local_80,&uStack_7c);
    if ((int)uVar6 != 0) {
      if ((local_80 != uVar1 || uStack_7c != uVar2) || (local_78 == 0)) {
        local_78 = local_80 << 2;
      }
      uVar6 = recovered_10005984((ulong)local_80,uStack_7c,local_78,&local_8c);
      if ((int)uVar6 != 0) {
        recovered_10001618(param_1,0,0x350);
        uVar2 = uStack_7c;
        uVar1 = local_80;
        uVar6 = uStack_88;
        bVar5 = recovered_10007d8c(0xa0);
        if ((bVar5) && (_DAT_820108a0 != 0)) {
          uVar6 = (*(code *)(ulong)_DAT_820108a0)(uVar6,uVar1,uVar2);
          iVar4 = local_8c;
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          *(ulong *)(param_1 + 3) = CONCAT44(uStack_74,local_78);
          *(ulong *)(param_1 + 1) = CONCAT44(uStack_7c,local_80);
          uVar3 = DAT_10008aa8;
          uVar8 = NEON_umin(CONCAT44(iStack_6c,iStack_70),0x6400000064,4);
          if (4 < iStack_68 + 1U) {
            iStack_68 = -1;
          }
          if (99 < uStack_64) {
            uStack_64 = 100;
          }
          *param_1 = (int)uVar6;
          *(ulong *)(param_1 + 5) =
               uVar8 ^ (uVar8 ^ uVar3) & CONCAT44(-(uint)(iStack_6c == -1),-(uint)(iStack_70 == -1))
          ;
          param_1[7] = iStack_68;
          param_1[8] = uStack_64;
          *(undefined8 *)(param_1 + 0xe) = uStack_88;
          if ((bStack_48 & 1) == 0) {
LAB_100057e0:
            if (((puStack_60 != (undefined *)0x0) || (puStack_58 != (undefined *)0x0)) ||
               (puStack_50 != (undefined *)0x0)) {
              recovered_10005a24(param_1,puStack_60,puStack_58,puStack_50);
            }
            if (iStack_70 != -1 || iStack_6c != -1) {
              recovered_10005aa8(param_1,param_1[5],param_1[6]);
            }
            if (param_1[7] == -1) {
              return uVar6;
            }
            recovered_10005b48(param_1,param_1[7],param_1[8]);
            return uVar6;
          }
          bVar5 = recovered_10007d8c(0x4c);
          if ((bVar5) && (_DAT_8201084c != 0)) {
            lVar7 = (*(code *)(ulong)_DAT_8201084c)(iVar4);
            *(long *)(param_1 + 0xc) = lVar7;
            if (lVar7 != 0) {
              param_1[9] = param_1[9] | 1;
              param_1[10] = local_8c;
              goto LAB_100057e0;
            }
          }
          else {
            param_1[0xc] = 0;
            param_1[0xd] = 0;
          }
          recovered_100059dc(uVar6);
          recovered_10001618(param_1,0,0x350);
        }
      }
    }
  }
  return 0;
}

#undef DAT_10008aa8
#undef DAT_8201084c
#undef DAT_820108a0
#undef _DAT_8201084c
#undef _DAT_820108a0
#undef uStack_88
#undef uStack_7c
#undef uStack_74
#undef iStack_70
#undef iStack_6c
#undef iStack_68
#undef uStack_64
#undef puStack_60
#undef puStack_58
#undef puStack_50
#undef bStack_48
#undef local_8c
#undef local_80
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058a4
 */

undefined8 recovered_100058a4(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;

  uVar2 = 0;
  if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != (uint *)0x0)) && (param_4 != (uint *)0x0))
  {
    if ((ulong)param_2 * (ulong)param_1 >> 0x1e != 0) {
      uVar3 = (ulong)param_1;
      uVar4 = (ulong)param_2;
      if (param_1 < param_2) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = (uVar4 * 0x3fffffff) / uVar3;
        }
        uVar1 = recovered_10007e1c(uVar1);
        param_2 = (uint)uVar1;
        if (param_2 < 2) {
          param_2 = 1;
        }
        param_1 = 0;
        if (uVar4 != 0) {
          param_1 = (uint)((uVar3 * param_2) / uVar4);
        }
        if (param_1 < 2) {
          param_1 = 1;
        }
      }
      else {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = (uVar3 * 0x3fffffff) / uVar4;
        }
        uVar1 = recovered_10007e1c(uVar1);
        param_1 = (uint)uVar1;
        if (param_1 < 2) {
          param_1 = 1;
        }
        param_2 = 0;
        if (uVar3 != 0) {
          param_2 = (uint)((uVar4 * param_1) / uVar3);
        }
        if (param_2 < 2) {
          param_2 = 1;
        }
      }
      if ((ulong)param_1 * (ulong)param_2 >> 0x1e != 0) {
        if (param_1 < param_2) {
          param_2 = 0;
          if (param_1 != 0) {
            param_2 = 0x3fffffff / param_1;
          }
        }
        else {
          param_1 = 0;
          if (param_2 != 0) {
            param_1 = 0x3fffffff / param_2;
          }
        }
      }
    }
    *param_3 = param_1;
    *param_4 = param_2;
    uVar2 = 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005984
 */

undefined8 recovered_10005984(ulong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  int iVar3;

  uVar2 = 0;
  if (((((param_1 >> 0x1e & 3) == 0) && (param_2 != 0)) && (iVar3 = (int)param_1, iVar3 != 0)) &&
     ((param_4 != (undefined4 *)0x0 && ((ulong)param_2 * (param_1 & 0xffffffff) >> 0x1e == 0)))) {
    uVar1 = iVar3 << 2;
    if (param_3 != 0) {
      uVar1 = param_3;
    }
    if ((uVar1 < (uint)(iVar3 << 2)) || (((ulong)uVar1 * (ulong)param_2 & 0xffffffff00000000) != 0))
    {
      return 0;
    }
    *param_4 = (int)((ulong)uVar1 * (ulong)param_2);
    uVar2 = 1;
  }
  return uVar2;
}


#undef DAT_820108a8
#define DAT_820108a8 (*(uint8_t *)(0x820108a8U))
#undef _DAT_820108a8
#define _DAT_820108a8 (*(uint *)(0x820108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100059dc(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xa8);
  if ((bVar1) && (_DAT_820108a8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108a8)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108a8
#undef _DAT_820108a8

#undef DAT_10008aeb
#define DAT_10008aeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x163U)))
#undef DAT_820108ec
#define DAT_820108ec (*(uint8_t *)(0x820108ecU))
#undef _DAT_820108ec
#define _DAT_820108ec (*(uint *)(0x820108ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a24
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005a24(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;

  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, iVar4 != 0)) {
    puVar1 = &DAT_10008aeb;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    puVar2 = &DAT_10008aeb;
    if (param_3 != (undefined *)0x0) {
      puVar2 = param_3;
    }
    puVar3 = &DAT_10008aeb;
    if (param_4 != (undefined *)0x0) {
      puVar3 = param_4;
    }
    bVar5 = recovered_10007d8c(0xec);
    if ((bVar5) && (_DAT_820108ec != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)(ulong)_DAT_820108ec)(iVar4,puVar1,puVar2,puVar3);
      return uVar6;
    }
  }
  return 0;
}

#undef DAT_10008aeb
#undef DAT_820108ec
#undef _DAT_820108ec

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005aa8
 */

ulong recovered_10005aa8(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    bVar2 = recovered_10007d8c(0x160);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010960 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010960)
                        (iVar1,(param_2 * 0xff + 0x32) / 100,(param_3 * 0xff + 0x32) / 100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[5] = param_2;
      param_1[6] = param_3;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b48
 */

ulong recovered_10005b48(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (4 < param_2 + 1U) {
      param_2 = -1;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    if (param_2 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_1[1];
      if ((uint)param_1[2] <= (uint)param_1[1]) {
        uVar4 = param_1[2];
      }
      uVar4 = (uVar4 * param_3 + 0x32) / 100;
    }
    bVar2 = recovered_10007d8c(0x164);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010964 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010964)(iVar1,param_2,uVar4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[7] = param_2;
      param_1[8] = param_3;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bfc
 */

ulong recovered_10005bfc(int *param_1,byte *param_2,byte *param_3,ulong param_4,ulong param_5,
                        uint param_6,undefined8 param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong extraout_x0_02;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    param_1[0x12] = 0;
    if ((int)param_4 == 0) {
      param_4 = (ulong)(uint)param_1[1];
    }
    if ((int)param_5 == 0) {
      param_5 = (ulong)(uint)param_1[2];
    }
    iVar8 = (int)param_4;
    uVar1 = iVar8 << 2;
    if (param_6 != 0) {
      uVar1 = param_6;
    }
    uVar9 = (ulong)uVar1;
    if ((param_5 & 0xffffffff) * (param_4 & 0xffffffff) >> 0x1e == 0) {
      if (iVar8 + 0xc0000000U < 0xc0000001) {
        return 0;
      }
      iVar7 = (int)param_5;
      if (iVar7 == 0) {
        return 0;
      }
      uVar5 = (param_4 & 0xffffffff) * 4;
      if (uVar5 <= uVar9) {
        if (param_2 == (byte *)0x0) {
          param_2 = *(byte **)(param_1 + 0xe);
        }
        recovered_10005d98(0x811c9dc5,iVar8);
        recovered_10005d98(extraout_x0,iVar7);
        recovered_10005d98(extraout_x0_00,uVar1);
        recovered_10005d98(extraout_x0_01,(int)param_7);
        uVar4 = extraout_x0_02;
        if (param_2 != (byte *)0x0) {
          for (pbVar6 = param_2; *pbVar6 != 0; pbVar6 = pbVar6 + 1) {
            uVar4 = (ulong)(((uint)uVar4 ^ (uint)*pbVar6) * 0x1000193);
          }
        }
        uVar5 = recovered_10005dc0(uVar4,param_3,uVar5 + uVar9 * (iVar7 - 1));
        if ((param_1[0x11] == 0) || ((int)uVar5 != param_1[0x10])) {
          bVar3 = recovered_10007d8c(0xa4);
          if (!bVar3) {
            return (ulong)bVar3;
          }
          if (uRam00000000820108a4 == 0) {
            return 0;
          }
          uVar9 = (*(code *)(ulong)uRam00000000820108a4)
                            (iVar2,param_2,param_3,param_4,param_5,uVar9,param_7);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          param_1[0x10] = (int)uVar5;
          param_1[0x11] = 1;
        }
        *(byte **)(param_1 + 0xe) = param_2;
        param_1[1] = iVar8;
        param_1[2] = iVar7;
        param_1[3] = uVar1;
        param_1[4] = (int)param_7;
        return 1;
      }
    }
  }
  return 0;
}

#undef UNK_820108a4
#undef uRam00000000820108a4

#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d98
 */

void recovered_10005d98(ulong param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_14 = param_2;
  recovered_10005dc0(param_1,(byte *)&local_14,4);
  return;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dc0
 */

ulong recovered_10005dc0(ulong param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (byte *)0x0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      param_1 = (ulong)(((uint)param_1 ^ (uint)*param_2) * 0x1000193);
      param_2 = param_2 + 1;
    }
  }
  return param_1;
}


#undef UNK_82010a14
#define UNK_82010a14 (*(uint *)(0x82010a14U))
#undef uRam0000000082010a14
#define uRam0000000082010a14 (*(uint32_t *)(0x82010a14U))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
#define local_4c (*(uint *)(pf_stack_frame + 20))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define uStack_40 (*(ulong *)(pf_stack_frame + 32))
#define uStack_38 (*(ulong *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de8
 */

ulong recovered_10005de8(int *param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;

  uVar3 = 0;
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    lVar4 = *(long *)(param_1 + 0xc);
    if (((lVar4 != 0) && ((param_2 & 0x8000000080000000) == 0)) &&
       (0 < (int)param_3 && 0 < (int)(param_3 >> 0x20))) {
      local_4c = param_1[1];
      if (((ulong)local_4c < (param_2 & 0x7fffffff) + (param_3 & 0x7fffffff)) ||
         (uStack_48 = param_1[2], (ulong)uStack_48 < (param_2 >> 0x20) + (param_3 >> 0x20))) {
        uVar3 = 0;
      }
      else {
        param_1[0x12] = 0;
        local_44 = param_1[3];
        iVar2 = *param_1;
        uStack_40 = param_2;
        uStack_38 = param_3;
        bVar1 = recovered_10007d8c(0x214);
        if (((bVar1) && (uRam0000000082010a14 != 0)) &&
           (iVar2 = (*(code *)(ulong)uRam0000000082010a14)(iVar2,lVar4,&local_4c), iVar2 != 0)) {
          param_1[0x11] = 0;
          uVar3 = 1;
        }
        else {
          uVar3 = recovered_10005ecc(param_1);
        }
      }
    }
  }
  return uVar3;
}

#undef UNK_82010a14
#undef uRam0000000082010a14
#undef uStack_48
#undef local_4c
#undef local_44
#undef uStack_40
#undef uStack_38

#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ecc
 */

ulong recovered_10005ecc(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong extraout_x0_02;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  pbVar5 = *(byte **)(param_1 + 0xc);
  pbVar11 = *(byte **)(param_1 + 0xe);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  iVar4 = param_1[4];
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar6 = *param_1;
  if (iVar6 != 0) {
    param_1[0x12] = 0;
    if (uVar2 == 0) {
      uVar2 = param_1[1];
    }
    uVar9 = (ulong)uVar2;
    if (uVar3 == 0) {
      uVar3 = param_1[2];
    }
    uVar1 = uVar2 << 2;
    if (param_1[3] != 0) {
      uVar1 = param_1[3];
    }
    uVar12 = (ulong)uVar1;
    if (uVar3 * uVar9 >> 0x1e == 0) {
      if (uVar2 + 0xc0000000 < 0xc0000001) {
        return 0;
      }
      if (uVar3 == 0) {
        return 0;
      }
      if ((uintptr_t)uVar9 * 4 <= uVar12) {
        if (pbVar11 == (byte *)0x0) {
          pbVar11 = *(byte **)(param_1 + 0xe);
        }
        recovered_10005d98(0x811c9dc5,uVar2);
        recovered_10005d98(extraout_x0,uVar3);
        recovered_10005d98(extraout_x0_00,uVar1);
        recovered_10005d98(extraout_x0_01,iVar4);
        uVar8 = extraout_x0_02;
        if (pbVar11 != (byte *)0x0) {
          for (pbVar10 = pbVar11; *pbVar10 != 0; pbVar10 = pbVar10 + 1) {
            uVar8 = (ulong)(((uint)uVar8 ^ (uint)*pbVar10) * 0x1000193);
          }
        }
        uVar8 = recovered_10005dc0(uVar8,pbVar5,(uintptr_t)uVar9 * 4 + uVar12 * (uVar3 - 1));
        if ((param_1[0x11] == 0) || ((int)uVar8 != param_1[0x10])) {
          bVar7 = recovered_10007d8c(0xa4);
          if (!bVar7) {
            return (ulong)bVar7;
          }
          if (uRam00000000820108a4 == 0) {
            return 0;
          }
          uVar9 = (*(code *)(ulong)uRam00000000820108a4)
                            (iVar6,pbVar11,pbVar5,uVar9,(ulong)uVar3,uVar12,iVar4);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          param_1[0x10] = (int)uVar8;
          param_1[0x11] = 1;
        }
        *(byte **)(param_1 + 0xe) = pbVar11;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar1;
        param_1[4] = iVar4;
        return 1;
      }
    }
  }
  return 0;
}

#undef UNK_820108a4
#undef uRam00000000820108a4

#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1001032c
#define DAT_1001032c (*(int *)(((uintptr_t)pf_module_state + 0x79a4U)))
#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee4
 */

ulong recovered_10005ee4(int *param_1,byte *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong extraout_x0_02;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;

  if (param_3 == (uint *)0x0) {
    return 0;
  }
  pbVar10 = *(byte **)(param_3 + 4);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  if (param_1 == (int *)0x0) {
    iVar6 = DAT_1001032c;
    if (DAT_10010328 == '\0') {
      iVar6 = 0xf6f6f6;
    }
  }
  else {
    iVar6 = param_1[4];
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = *param_1;
  if (iVar4 != 0) {
    param_1[0x12] = 0;
    if (uVar2 == 0) {
      uVar2 = param_1[1];
    }
    uVar9 = (ulong)uVar2;
    if (uVar3 == 0) {
      uVar3 = param_1[2];
    }
    uVar1 = uVar2 << 2;
    if (uVar5 != 0) {
      uVar1 = uVar5;
    }
    uVar12 = (ulong)uVar1;
    if (uVar3 * uVar9 >> 0x1e == 0) {
      if (uVar2 + 0xc0000000 < 0xc0000001) {
        return 0;
      }
      if (uVar3 == 0) {
        return 0;
      }
      if ((uintptr_t)uVar9 * 4 <= uVar12) {
        if (param_2 == (byte *)0x0) {
          param_2 = *(byte **)(param_1 + 0xe);
        }
        recovered_10005d98(0x811c9dc5,uVar2);
        recovered_10005d98(extraout_x0,uVar3);
        recovered_10005d98(extraout_x0_00,uVar1);
        recovered_10005d98(extraout_x0_01,iVar6);
        uVar8 = extraout_x0_02;
        if (param_2 != (byte *)0x0) {
          for (pbVar11 = param_2; *pbVar11 != 0; pbVar11 = pbVar11 + 1) {
            uVar8 = (ulong)(((uint)uVar8 ^ (uint)*pbVar11) * 0x1000193);
          }
        }
        uVar8 = recovered_10005dc0(uVar8,pbVar10,(uintptr_t)uVar9 * 4 + uVar12 * (uVar3 - 1));
        if ((param_1[0x11] == 0) || ((int)uVar8 != param_1[0x10])) {
          bVar7 = recovered_10007d8c(0xa4);
          if (!bVar7) {
            return (ulong)bVar7;
          }
          if (uRam00000000820108a4 == 0) {
            return 0;
          }
          uVar9 = (*(code *)(ulong)uRam00000000820108a4)
                            (iVar4,param_2,pbVar10,uVar9,(ulong)uVar3,uVar12,iVar6);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          param_1[0x10] = (int)uVar8;
          param_1[0x11] = 1;
        }
        *(byte **)(param_1 + 0xe) = param_2;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar1;
        param_1[4] = iVar6;
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_10010328
#undef DAT_1001032c
#undef UNK_820108a4
#undef uRam00000000820108a4

#define local_4c (*(uint *)(pf_stack_frame + 20))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f2c
 */

undefined8 recovered_10005f2c(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  local_4c = 0;
  uVar3 = 0;
  if ((((param_1 != (int *)0x0) && (uVar3 = 0, param_3 != 0)) && (param_2 != 0)) &&
     ((*param_1 != 0 &&
      (local_48 = param_3, uStack_44 = param_2,
      uVar3 = recovered_100058a4(param_2,param_3,&uStack_44,&local_48), uVar5 = uStack_44,
      uVar6 = local_48, (int)uVar3 != 0)))) {
    uVar7 = uStack_44 * 4;
    uVar3 = recovered_10005984((ulong)uStack_44,local_48,uVar7,&local_4c);
    if ((int)uVar3 != 0) {
      uVar1 = param_1[10];
      if ((param_1[1] == uVar5) && (param_1[2] == uVar6)) {
        bVar2 = param_1[3] != uVar7;
      }
      else {
        bVar2 = true;
      }
      if ((uVar1 < local_4c) || (*(long *)(param_1 + 0xc) == 0)) {
        lVar4 = recovered_10004ec4(*(long *)(param_1 + 0xc),(ulong)local_4c);
        if (lVar4 == 0) {
          return 0;
        }
        *(long *)(param_1 + 0xc) = lVar4;
        param_1[9] = param_1[9] | 1;
        param_1[10] = local_4c;
        if (uVar1 < local_4c) {
          recovered_10001618((void *)(lVar4 + (ulong)uVar1),0,(ulong)(local_4c - uVar1));
        }
        param_1[0x11] = 0;
        uVar7 = uStack_44 << 2;
        uVar6 = local_48;
        uVar5 = uStack_44;
      }
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      if (bVar2) {
        param_1[0x11] = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef local_4c
#undef local_48
#undef uStack_44

#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006054
 */

undefined8 recovered_10006054(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_44 = *(uint *)(param_2 + 0x50);
    if (uStack_44 == 0) {
      uStack_44 = *(uint *)(param_2 + 0x18);
    }
    uStack_48 = *(uint *)(param_2 + 0x54);
    if (uStack_48 == 0) {
      uStack_48 = *(uint *)(param_2 + 0x1c);
    }
    if (uStack_44 != 0) goto joined_r0x1000608c;
  }
  uStack_44 = param_1[1];
joined_r0x1000608c:
  if (uStack_48 == 0) {
    uStack_48 = param_1[2];
  }
  uStack_4c = 0;
  uVar3 = 0;
  if ((((param_1 != (int *)0x0) && (uVar3 = 0, uStack_48 != 0)) && (uStack_44 != 0)) &&
     ((*param_1 != 0 &&
      (uVar3 = recovered_100058a4(uStack_44,uStack_48,&uStack_44,&uStack_48), uVar5 = uStack_44,
      uVar6 = uStack_48, (int)uVar3 != 0)))) {
    uVar7 = uStack_44 * 4;
    uVar3 = recovered_10005984((ulong)uStack_44,uStack_48,uVar7,&uStack_4c);
    if ((int)uVar3 != 0) {
      uVar1 = param_1[10];
      if ((param_1[1] == uVar5) && (param_1[2] == uVar6)) {
        bVar2 = param_1[3] != uVar7;
      }
      else {
        bVar2 = true;
      }
      if ((uVar1 < uStack_4c) || (*(long *)(param_1 + 0xc) == 0)) {
        lVar4 = recovered_10004ec4(*(long *)(param_1 + 0xc),(ulong)uStack_4c);
        if (lVar4 == 0) {
          return 0;
        }
        *(long *)(param_1 + 0xc) = lVar4;
        param_1[9] = param_1[9] | 1;
        param_1[10] = uStack_4c;
        if (uVar1 < uStack_4c) {
          recovered_10001618((void *)(lVar4 + (ulong)uVar1),0,(ulong)(uStack_4c - uVar1));
        }
        param_1[0x11] = 0;
        uVar7 = uStack_44 << 2;
        uVar6 = uStack_48;
        uVar5 = uStack_44;
      }
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      if (bVar2) {
        param_1[0x11] = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef uStack_4c
#undef uStack_48
#undef uStack_44

#undef UNK_820108b4
#define UNK_820108b4 (*(uint *)(0x820108b4U))
#undef uRam00000000820108b4
#define uRam00000000820108b4 (*(uint32_t *)(0x820108b4U))
#define uStack_290 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_288 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_268 (*(uint *)(pf_stack_frame + 88))
#define uStack_264 (*(uint *)(pf_stack_frame + 92))
#define iStack_260 (*(int *)(pf_stack_frame + 96))
#define uStack_25c (*(uint *)(pf_stack_frame + 100))
#define auStack_2a8 (*(undefined1 (*)[680])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060a4
 */

ulong recovered_100060a4(int *param_1,void *param_2)

{
  unsigned char pf_stack_frame[736] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
LAB_100061c8:
    uVar4 = 0;
  }
  else {
    if (param_1[0x12] == 0) {
      recovered_10001618(auStack_2a8,0,0x278);
      iVar2 = *param_1;
      bVar3 = recovered_10007d8c(0xb4);
      if (!bVar3) {
        return (ulong)bVar3;
      }
      if (uRam00000000820108b4 == 0) goto LAB_100061c8;
      uVar4 = (*(code *)(ulong)uRam00000000820108b4)(iVar2,auStack_2a8);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      recovered_1000142c(param_1 + 0x13,auStack_2a8,0x278);
      param_1[0x12] = 1;
      *(undefined8 *)(param_1 + 3) = uStack_288;
      *(undefined8 *)(param_1 + 1) = uStack_290;
      uVar6 = uStack_268;
      if (0xfe < uStack_268) {
        uVar6 = 0xff;
      }
      uVar5 = 0xf;
      if (uStack_268 != 0xffffffff) {
        uVar5 = (uVar6 * 100 + 0x7f) / 0xff;
      }
      uVar6 = uStack_264;
      if (0xfe < uStack_264) {
        uVar6 = 0xff;
      }
      uVar1 = 0;
      if (uStack_264 != 0xffffffff) {
        uVar1 = (uVar6 * 100 + 0x7f) / 0xff;
      }
      param_1[5] = uVar5;
      param_1[6] = uVar1;
      if (4 < iStack_260 + 1U) {
        iStack_260 = -1;
      }
      param_1[7] = iStack_260;
      uVar5 = (uint)((ulong)uStack_290 >> 0x20);
      uVar6 = (uint)uStack_290;
      if (uVar5 <= (uint)uStack_290) {
        uVar6 = uVar5;
      }
      uVar6 = uVar6 * 100 + 0x32;
      if (uVar6 < 100) {
        uVar5 = 0;
      }
      else {
        uVar6 = uVar6 / 100;
        uVar5 = 0;
        if ((ulong)uVar6 != 0) {
          uVar5 = (uint)(((ulong)(uVar6 >> 1) + (ulong)uStack_25c * 100) / (ulong)uVar6);
        }
        if (99 < uVar5) {
          uVar5 = 100;
        }
      }
      param_1[8] = uVar5;
      if (param_2 != (void *)0x0) {
        recovered_1000142c(param_2,auStack_2a8,0x278);
      }
    }
    else if (param_2 != (void *)0x0) {
      recovered_1000142c(param_2,param_1 + 0x13,0x278);
    }
    uVar4 = 1;
  }
  return uVar4;
}

#undef UNK_820108b4
#undef uRam00000000820108b4
#undef uStack_290
#undef uStack_288
#undef uStack_268
#undef uStack_264
#undef iStack_260
#undef uStack_25c
#undef auStack_2a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006218
 */

void recovered_10006218(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006224
 */

bool recovered_10006224(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return true;
  }
  return (*(byte *)(param_1 + 0x28) & 0x11) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006244
 */

/* WARNING: Removing unreachable block (ram,0x10001640) */

void recovered_10006244(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar3 = 0;
  for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
    uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
  }
  uVar1 = 0x18;
  puVar2 = param_1;
  for (; (uVar1 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = (ulong *)((long)param_1 + 1)) {
    *(undefined1 *)puVar2 = 0;
    uVar1 = uVar1 - 1;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  for (; 0x1f < uVar1; uVar1 = uVar1 - 0x20) {
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  }
  while (7 < uVar1) {
    *puVar2 = uVar3;
    uVar1 = uVar1 - 8;
    puVar2 = puVar2 + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006258
 */

undefined4 recovered_10006258(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;

  uVar3 = 0;
  if (param_1 != (ulong *)0x0) {
    recovered_10006244(param_1);
switchD_10006398_caseD_49:
    uVar4 = recovered_10006404();
    uVar2 = (uint)uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2 & 0xff;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
      if (uVar1 - 0x20 < 0x5f) {
        *(uint *)(param_1 + 2) = uVar1;
      }
      switch((uintptr_t)(uVar1)) {
      case 0x51:
switchD_1000633c_caseD_71:
        *(undefined1 *)((long)param_1 + 9) = 1;
        break;
      case 0x52:
switchD_1000633c_caseD_72:
        *(undefined1 *)((long)param_1 + 10) = 1;
        break;
      case 0x53:
switchD_1000633c_caseD_73:
        *(undefined1 *)((long)param_1 + 0xb) = 1;
        break;
      case 0x54:
      case 0x55:
      case 0x56:
        break;
      case 0x57:
switchD_1000633c_caseD_77:
        *(undefined1 *)((long)param_1 + 0xc) = 1;
        break;
      default:
        switch((uintptr_t)(uVar1)) {
        case 0x71:
          goto switchD_1000633c_caseD_71;
        case 0x72:
          goto switchD_1000633c_caseD_72;
        case 0x73:
          goto switchD_1000633c_caseD_73;
        case 0x74:
        case 0x75:
        case 0x76:
          break;
        case 0x77:
          goto switchD_1000633c_caseD_77;
        default:
          if (uVar1 == 8) {
LAB_10006368:
            *(undefined1 *)((long)param_1 + 4) = 1;
          }
          else if (uVar1 == 10 || uVar1 == 0xd) {
            *(undefined1 *)((long)param_1 + 5) = 1;
          }
          else if (uVar1 == 0x1b) {
            *(undefined1 *)((long)param_1 + 6) = 1;
          }
          else if (uVar1 == 0x41) {
LAB_10006318:
            *(undefined1 *)((long)param_1 + 7) = 1;
          }
          else {
            if (uVar1 != 0x44) {
              if (uVar1 == 0x7f) goto LAB_10006368;
              if (uVar1 != 100) {
                if (uVar1 != 0x61) break;
                goto LAB_10006318;
              }
            }
            *(undefined1 *)(param_1 + 1) = 1;
          }
        }
      }
      uVar2 = uVar2 >> 8 & 0xff;
      switch((uintptr_t)(uVar2)) {
      case 0x48:
        *(undefined1 *)param_1 = 1;
        break;
      case 0x49:
      case 0x4a:
      case 0x4c:
      case 0x4e:
      case 0x4f:
        break;
      case 0x4b:
        *(undefined1 *)((long)param_1 + 2) = 1;
        break;
      case 0x4d:
        *(undefined1 *)((long)param_1 + 3) = 1;
        break;
      case 0x50:
        *(undefined1 *)((long)param_1 + 1) = 1;
        break;
      default:
        if (uVar2 == 0x1c) {
          *(undefined1 *)((long)param_1 + 5) = 1;
        }
        else if (uVar2 == 0xe) {
          *(undefined1 *)((long)param_1 + 4) = 1;
        }
        else if (uVar2 == 1) {
          *(undefined1 *)((long)param_1 + 6) = 1;
        }
      }
      goto switchD_10006398_caseD_49;
    }
    uVar3 = *(undefined4 *)((long)param_1 + 0x14);
  }
  return uVar3;
}


#undef DAT_8201082c
#define DAT_8201082c (*(uint8_t *)(0x8201082cU))
#undef _DAT_8201082c
#define _DAT_8201082c (*(uint *)(0x8201082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006404
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006404(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0x2c);
  if ((bVar1) && (_DAT_8201082c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201082c)();
    return uVar2;
  }
  return 0;
}

#undef DAT_8201082c
#undef _DAT_8201082c

#define auStack_298 (*(undefined1 (*)[664])(pf_stack_frame + 24))
#define local_270 (*(uint *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000643c
 */

bool recovered_1000643c(int *param_1)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100060a4(param_1,auStack_298);
  return (local_270 & 0x11) != 0 || (int)uVar1 == 0;
}

#undef auStack_298
#undef local_270

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006478
 */

undefined8 recovered_10006478(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = recovered_100059dc((ulong)*param_1);
    }
    if (((param_1[9] & 1) != 0) && (*(long *)(param_1 + 0xc) != 0)) {
      recovered_1000501c(*(long *)(param_1 + 0xc));
    }
    recovered_10001618(param_1,0,0x350);
  }
  return uVar1;
}


#undef DAT_10008aeb
#define DAT_10008aeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x163U)))
#undef UNK_82010a08
#define UNK_82010a08 (*(uint *)(0x82010a08U))
#undef uRam0000000082010a08
#define uRam0000000082010a08 (*(uint32_t *)(0x82010a08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064d4
 */

undefined8 recovered_100064d4(int *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;

  if ((param_1 != (int *)0x0) && (iVar2 = *param_1, iVar2 != 0)) {
    puVar1 = &DAT_10008aeb;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    bVar3 = recovered_10007d8c(0x208);
    if ((bVar3) && (uRam0000000082010a08 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001ca24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(ulong)uRam0000000082010a08)(iVar2,puVar1);
      return uVar4;
    }
  }
  return 0;
}

#undef DAT_10008aeb
#undef UNK_82010a08
#undef uRam0000000082010a08

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006530
 */

ulong recovered_10006530(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[6];
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    if (99 < uVar4) {
      uVar4 = 100;
    }
    bVar2 = recovered_10007d8c(0x160);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010960 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010960)
                        (iVar1,(param_2 * 0xff + 0x32) / 100,(uVar4 * 0xff + 0x32) / 100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[5] = param_2;
      param_1[6] = uVar4;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006544
 */

ulong recovered_10006544(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[5];
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (99 < uVar4) {
      uVar4 = 100;
    }
    if (99 < param_2) {
      param_2 = 100;
    }
    bVar2 = recovered_10007d8c(0x160);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010960 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010960)
                        (iVar1,(uVar4 * 0xff + 0x32) / 100,(param_2 * 0xff + 0x32) / 100);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[5] = uVar4;
      param_1[6] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000655c
 */

/* WARNING: Removing unreachable block (ram,0x10005b74) */
/* WARNING: Removing unreachable block (ram,0x10005b80) */
/* WARNING: Removing unreachable block (ram,0x10005ba8) */

ulong recovered_1000655c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    bVar2 = recovered_10007d8c(0x164);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010964 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010964)(iVar1,0,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[7] = 0;
      param_1[8] = 0;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006568
 */

/* WARNING: Removing unreachable block (ram,0x10005b74) */
/* WARNING: Removing unreachable block (ram,0x10005b80) */
/* WARNING: Removing unreachable block (ram,0x10005ba8) */

ulong recovered_10006568(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  ulong uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    bVar2 = recovered_10007d8c(0x164);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    if (uRam0000000082010964 != 0) {
      uVar3 = (*(code *)(ulong)uRam0000000082010964)(iVar1,1,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_1[7] = 1;
      param_1[8] = 0;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006574
 */

/* WARNING: Removing unreachable block (ram,0x10005b74) */
/* WARNING: Removing unreachable block (ram,0x10005ba8) */

ulong recovered_10006574(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar1 = param_1[1];
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      uVar1 = param_1[2];
    }
    bVar3 = recovered_10007d8c(0x164);
    if (!bVar3) {
      return (ulong)bVar3;
    }
    if (uRam0000000082010964 != 0) {
      uVar4 = (*(code *)(ulong)uRam0000000082010964)(iVar2,2,(uVar1 * param_2 + 0x32) / 100);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_1[7] = 2;
      param_1[8] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010964
#define UNK_82010964 (*(uint *)(0x82010964U))
#undef uRam0000000082010964
#define uRam0000000082010964 (*(uint32_t *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006580
 */

/* WARNING: Removing unreachable block (ram,0x10005b74) */
/* WARNING: Removing unreachable block (ram,0x10005ba8) */

ulong recovered_10006580(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar1 = param_1[1];
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      uVar1 = param_1[2];
    }
    bVar3 = recovered_10007d8c(0x164);
    if (!bVar3) {
      return (ulong)bVar3;
    }
    if (uRam0000000082010964 != 0) {
      uVar4 = (*(code *)(ulong)uRam0000000082010964)(iVar2,3,(uVar1 * param_2 + 0x32) / 100);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_1[7] = 3;
      param_1[8] = param_2;
      return 1;
    }
  }
  return 0;
}

#undef UNK_82010964
#undef uRam0000000082010964

#undef UNK_82010900
#define UNK_82010900 (*(uint *)(0x82010900U))
#undef uRam0000000082010900
#define uRam0000000082010900 (*(uint32_t *)(0x82010900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000658c
 */

undefined8 recovered_1000658c(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;

  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (iVar1 = *param_1, iVar1 != 0)) &&
     ((bVar2 = recovered_10007d8c(0x100), bVar2 && (uRam0000000082010900 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x1001ca40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uRam0000000082010900)(iVar1,param_2);
    return uVar3;
  }
  return 0;
}

#undef UNK_82010900
#undef uRam0000000082010900

#undef UNK_82010a30
#define UNK_82010a30 (*(uint *)(0x82010a30U))
#undef uRam0000000082010a30
#define uRam0000000082010a30 (*(uint32_t *)(0x82010a30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065e0
 */

undefined8 recovered_100065e0(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;

  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (iVar1 = *param_1, iVar1 != 0)) &&
     ((bVar2 = recovered_10007d8c(0x230), bVar2 && (uRam0000000082010a30 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x1001ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uRam0000000082010a30)(iVar1,param_2);
    return uVar3;
  }
  return 0;
}

#undef UNK_82010a30
#undef uRam0000000082010a30

#undef UNK_82010a34
#define UNK_82010a34 (*(uint *)(0x82010a34U))
#undef uRam0000000082010a34
#define uRam0000000082010a34 (*(uint32_t *)(0x82010a34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006634
 */

undefined8 recovered_10006634(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;

  if ((((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) &&
      (bVar2 = recovered_10007d8c(0x234), bVar2)) && (uRam0000000082010a34 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10006678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uRam0000000082010a34)(iVar1,param_2);
    return uVar3;
  }
  return 0;
}

#undef UNK_82010a34
#undef uRam0000000082010a34

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006688
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10006688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xb0);
  if ((bVar1) && (_DAT_820108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001cabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108b0
#undef _DAT_820108b0

#undef DAT_8201097c
#define DAT_8201097c (*(uint8_t *)(0x8201097cU))
#undef _DAT_8201097c
#define _DAT_8201097c (*(uint *)(0x8201097cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100066d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0x17c);
  if ((bVar1) && (_DAT_8201097c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001cae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201097c)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201097c
#undef _DAT_8201097c

#undef DAT_820108ac
#define DAT_820108ac (*(uint8_t *)(0x820108acU))
#undef _DAT_820108ac
#define _DAT_820108ac (*(uint *)(0x820108acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006720
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xac);
  if ((bVar1) && (_DAT_820108ac != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10006770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108ac)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108ac
#undef _DAT_820108ac

#undef DAT_820108f0
#define DAT_820108f0 (*(uint8_t *)(0x820108f0U))
#undef _DAT_820108f0
#define _DAT_820108f0 (*(uint *)(0x820108f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xf0);
  if ((bVar1) && (_DAT_820108f0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001cb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108f0)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108f0
#undef _DAT_820108f0

#undef DAT_820108fc
#define DAT_820108fc (*(uint8_t *)(0x820108fcU))
#undef _DAT_820108fc
#define _DAT_820108fc (*(uint *)(0x820108fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_100067d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xfc);
  if ((bVar1) && (_DAT_820108fc != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001cb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108fc)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108fc
#undef _DAT_820108fc

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006818
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xb0);
  if ((bVar1) && (_DAT_820108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001cabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,0xe,10);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108b0
#undef _DAT_820108b0

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006824
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0xb0);
  if ((bVar1) && (_DAT_820108b0 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001cabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,1,1);
    return uVar2;
  }
  return 0;
}

#undef DAT_820108b0
#undef _DAT_820108b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006830
 */

bool recovered_10006830(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  do {
    uVar2 = recovered_10006404();
    uVar1 = (uint)uVar2;
    if ((uVar1 == 0) || ((uVar1 & 0xff00) == 0x100)) break;
  } while ((uVar1 & 0xdf) != 0x51 && (uVar1 & 0xff) != 0x1b);
  return uVar1 != 0;
}


#undef DAT_8201089c
#define DAT_8201089c (*(uint8_t *)(0x8201089cU))
#undef DAT_82010974
#define DAT_82010974 (*(uint8_t *)(0x82010974U))
#undef _DAT_8201089c
#define _DAT_8201089c (*(uint *)(0x8201089cU))
#undef _DAT_82010974
#define _DAT_82010974 (*(uint *)(0x82010974U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006878
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006878(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;

  do {
    if (param_1 == 0) {
      return;
    }
    uVar1 = param_1;
    if (0x20c49a < param_1) {
      uVar1 = 0x20c49b;
    }
    bVar2 = recovered_10007d8c(0x174);
    if ((!bVar2) || (_DAT_82010974 == 0)) break;
    iVar3 = (*(code *)(ulong)_DAT_82010974)(uVar1 * 2000);
    param_1 = param_1 - uVar1;
  } while (iVar3 != 0);
  bVar2 = recovered_10007d8c(0x9c);
  if ((bVar2) && (_DAT_8201089c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100068f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_8201089c)();
    return;
  }
  return;
}

#undef DAT_8201089c
#undef DAT_82010974
#undef _DAT_8201089c
#undef _DAT_82010974

#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_10010340
#define DAT_10010340 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79b8U)))
#undef UNK_10010344
#define UNK_10010344 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef UNK_1001034c
#define UNK_1001034c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79c4U)))
#undef UNK_10010350
#define UNK_10010350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79c8U)))
#undef uRam0000000010010344
#define uRam0000000010010344 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79bcU)))
#undef uRam000000001001034c
#define uRam000000001001034c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79c4U)))
#undef uRam0000000010010350
#define uRam0000000010010350 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79c8U)))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 48))
#define iStack_64 (*(int *)(pf_stack_frame + 60))
#define local_90 (*(long *)(pf_stack_frame + 16))
#define local_88 (*(uint *)(pf_stack_frame + 24))
#define local_80 (*(uint *)(pf_stack_frame + 32))
#define local_78 (*(undefined8 *)(pf_stack_frame + 40))
#define local_68 (*(uint *)(pf_stack_frame + 56))
#define iStack_84 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006904
 */

void recovered_10006904(long param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;

  if (((((param_1 != 0) && (param_2 != (uint *)0x0)) &&
       (local_90 = *(long *)(param_1 + 0x30), local_90 != 0)) &&
      ((0 < (int)param_2[3] && (0 < (int)param_2[4])))) && (uVar2 = *param_2, uVar2 < 2)) {
    local_88 = *(uint *)(param_1 + 4);
    if (((-1 < (int)local_88) && (iStack_84 = *(int *)(param_1 + 8), -1 < iStack_84)) &&
       (local_80 = *(uint *)(param_1 + 0xc), (ulong)local_88 << 2 <= (ulong)local_80)) {
      uStack_70 = 0;
      local_78 = 0;
      local_68 = local_88;
      iStack_64 = iStack_84;
      auVar7 = recovered_10006aec(*(ulong *)(param_2 + 1),*(ulong *)(param_2 + 3),uVar2,param_3);
      auVar8 = recovered_10006aec(*(ulong *)(param_2 + 5),*(ulong *)(param_2 + 7),uVar2,param_3);
      auVar9 = recovered_10006aec(*(ulong *)(param_2 + 0x11),*(ulong *)(param_2 + 0x13),uVar2,
                                  param_3);
      auVar10 = recovered_10006aec(*(ulong *)(param_2 + 9),*(ulong *)(param_2 + 0xb),uVar2,param_3);
      auVar11 = recovered_10006aec(*(ulong *)(param_2 + 0xd),*(ulong *)(param_2 + 0xf),uVar2,param_3
                                  );
      cVar3 = DAT_10010328;
      uVar1 = DAT_10010340;
      if (DAT_10010328 == '\0') {
        uVar1 = 0xe4e4e4;
      }
      recovered_10006b60(&local_90,PF_PART8(auVar8, 0),PF_PART8(auVar8, 8),uVar1);
      uVar1 = uRam000000001001034c;
      if (cVar3 == '\0') {
        uVar1 = 0xacacac;
      }
      recovered_10006c30(&local_90,PF_PART8(auVar8, 0),PF_PART8(auVar8, 8),uVar1);
      uVar1 = uRam0000000010010344;
      if (cVar3 == '\0') {
        uVar1 = 0xbebebe;
      }
      iVar4 = PF_PART4(auVar7, 12);
      if (uVar2 != 1) {
        iVar4 = PF_PART4(auVar7, 8);
      }
      iVar6 = PF_PART4(auVar9, 0);
      if (2 < iVar4) {
        iVar6 = iVar6 + 1;
      }
      iVar5 = PF_PART4(auVar9, 4);
      if (2 < iVar4) {
        iVar5 = iVar5 + 1;
      }
      recovered_10006b60(&local_90,CONCAT44(iVar5,iVar6),
                         CONCAT44(PF_PART4(auVar9, 12) + (uint)(2 < iVar4) * -2,
                                  PF_PART4(auVar9, 8) + (uint)(2 < iVar4) * -2),uVar1);
      uVar1 = uRam0000000010010350;
      if (DAT_10010328 == '\0') {
        uVar1 = 0x747474;
      }
      recovered_10006c30(&local_90,PF_PART8(auVar9, 0),PF_PART8(auVar9, 8),uVar1);
      recovered_10006cec(&local_90,PF_PART8(auVar10, 0),PF_PART8(auVar10, 8),*param_2,1);
      recovered_10006cec(&local_90,PF_PART8(auVar11, 0),PF_PART8(auVar11, 8),*param_2,0);
    }
  }
  return;
}

#undef DAT_10010328
#undef DAT_10010340
#undef UNK_10010344
#undef UNK_1001034c
#undef UNK_10010350
#undef uRam0000000010010344
#undef uRam000000001001034c
#undef uRam0000000010010350
#undef uStack_70
#undef iStack_64
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_68
#undef iStack_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aec
 */

uint128 recovered_10006aec(ulong param_1,ulong param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar2;
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  uint128 auVar5;

  uVar4 = param_1 >> 0x20;
  if (param_3 == 1) {
    iVar2 = (int)(param_2 >> 0x20);
    uVar1 = recovered_10007e60(iVar2,param_4);
    uVar4 = (ulong)(((int)(param_1 >> 0x20) + iVar2) - uVar1);
    uVar3 = param_2 & 0xffffffff | (ulong)uVar1 << 0x20;
  }
  else {
    uVar1 = recovered_10007e60((int)param_2,param_4);
    uVar3 = param_2 & 0xffffffff00000000 | (ulong)uVar1;
  }
  PF_PART8(auVar5, 8) = uVar3;
  PF_PART8(auVar5, 0) = param_1 & 0xffffffff | uVar4 << 0x20;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b60
 */

void recovered_10006b60(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;

  iVar10 = (int)((ulong)param_3 >> 0x20);
  uVar8 = (uint)param_2;
  iVar9 = (int)((ulong)param_2 >> 0x20);
  if (param_1 != (long *)0x0) {
    uVar6 = *(uint *)(param_1 + 4);
    iVar7 = *(int *)((long)param_1 + 0x24);
    uVar4 = uVar8;
    if ((int)uVar8 <= (int)uVar6) {
      uVar4 = uVar6;
    }
    iVar5 = iVar9;
    if (iVar9 <= iVar7) {
      iVar5 = iVar7;
    }
    iVar1 = uVar8 + (int)param_3;
    iVar2 = (int)param_1[5] + uVar6;
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    iVar2 = iVar9 + iVar10;
    iVar3 = *(int *)((long)param_1 + 0x2c) + iVar7;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    if ((((iVar5 < iVar2 && (int)uVar4 < iVar1) && *param_1 != 0) && 0 < (int)param_3) && 0 < iVar10
       ) {
      lVar11 = (long)iVar7;
      if ((long)iVar7 <= (long)iVar9) {
        lVar11 = (long)iVar9;
      }
      for (; lVar11 < iVar2; lVar11 = lVar11 + 1) {
        puVar12 = (undefined1 *)
                  (*param_1 + lVar11 * (ulong)*(uint *)(param_1 + 2) +
                  (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
        for (uVar13 = (ulong)uVar4; (int)uVar13 < iVar1; uVar13 = (ulong)((int)uVar13 + 1)) {
          *puVar12 = (char)((uint)param_4 >> 0x10);
          puVar12[1] = (char)((uint)param_4 >> 8);
          puVar12[2] = (char)param_4;
          puVar12[3] = 0xff;
          puVar12 = puVar12 + 4;
        }
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c30
 */

void recovered_10006c30(long *param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;

  iVar9 = (int)(param_3 >> 0x20);
  if ((int)param_3 < 1 || iVar9 < 1) {
    return;
  }
  uVar14 = param_3 & 0x7fffffff | 0x100000000;
  recovered_10006b60(param_1,param_2,uVar14,param_4);
  recovered_10006b60(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar14,param_4);
  recovered_10006b60(param_1,param_2,param_3 & 0xffffffff00000000 | 1,param_4);
  iVar2 = (int)param_3 + (int)param_2;
  uVar8 = iVar2 - 1;
  if (param_1 != (long *)0x0) {
    uVar6 = *(uint *)(param_1 + 4);
    iVar7 = *(int *)((long)param_1 + 0x24);
    uVar3 = uVar8;
    if ((int)uVar8 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    iVar11 = (int)(param_2 >> 0x20);
    iVar4 = iVar11;
    if (iVar11 <= iVar7) {
      iVar4 = iVar7;
    }
    iVar1 = (int)param_1[5] + uVar6;
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    iVar1 = *(int *)((long)param_1 + 0x2c) + iVar7;
    iVar5 = iVar11 + iVar9;
    if (iVar1 <= iVar11 + iVar9) {
      iVar5 = iVar1;
    }
    if (((iVar4 < iVar5 && (int)uVar3 < iVar2) && *param_1 != 0) && 0 < iVar9) {
      lVar12 = (long)((ulong)uVar8 | param_2 & 0xffffffff00000000) >> 0x20;
      lVar10 = (long)iVar7;
      if (iVar7 <= lVar12) {
        lVar10 = lVar12;
      }
      for (; lVar10 < iVar5; lVar10 = lVar10 + 1) {
        puVar13 = (undefined1 *)
                  (*param_1 + lVar10 * (ulong)*(uint *)(param_1 + 2) +
                  (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
        for (uVar14 = (ulong)uVar3; (int)uVar14 < iVar2; uVar14 = (ulong)((int)uVar14 + 1)) {
          *puVar13 = (char)((uint)param_4 >> 0x10);
          puVar13[1] = (char)((uint)param_4 >> 8);
          puVar13[2] = (char)param_4;
          puVar13[3] = 0xff;
          puVar13 = puVar13 + 4;
        }
      }
    }
  }
  return;
}


#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_10010348
#define DAT_10010348 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79c0U)))
#undef DAT_10010354
#define DAT_10010354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79ccU)))
#undef DAT_10010358
#define DAT_10010358 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cec
 */

void recovered_10006cec(long *param_1,ulong param_2,ulong param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;

  cVar5 = DAT_10010328;
  uVar10 = (uint)param_3;
  uVar12 = (uint)(param_3 >> 0x20);
  if (0 < (int)uVar10 && 0 < (int)uVar12) {
    uVar8 = DAT_10010348;
    if (DAT_10010328 == '\0') {
      uVar8 = 0xeeeeee;
    }
    recovered_10006b60(param_1,param_2,param_3,uVar8);
    iVar1 = (int)param_2 + (uVar10 >> 1);
    iVar2 = (int)(param_2 >> 0x20) + (uVar12 >> 1);
    uVar8 = DAT_10010354;
    if (cVar5 == '\0') {
      uVar8 = 0x969696;
    }
    if (param_4 != 1) {
      uVar12 = uVar10;
    }
    uVar12 = uVar12 + 1 >> 1;
    if (3 < uVar12) {
      uVar12 = 4;
    }
    recovered_10006c30(param_1,param_2,param_3,uVar8);
    uVar10 = 0;
    iVar9 = -4;
    if (param_5 == 0) {
      iVar9 = -2;
    }
    iVar3 = iVar2 + iVar9;
    iVar9 = iVar1 + iVar9;
    for (lVar11 = -(ulong)uVar12; lVar11 != 0; lVar11 = lVar11 + 1) {
      uVar12 = uVar12 - 1;
      uVar4 = uVar10;
      if (param_5 == 0) {
        uVar4 = uVar12;
      }
      uVar8 = DAT_10010358;
      if (param_4 == 1) {
        if (DAT_10010328 == '\0') {
          uVar8 = 0x464646;
        }
        uVar6 = CONCAT44(iVar2 - uVar4,iVar9);
        uVar7 = (ulong)(uVar4 << 1 | 1) << 0x20 | 1;
      }
      else {
        if (DAT_10010328 == '\0') {
          uVar8 = 0x464646;
        }
        uVar6 = CONCAT44(iVar3,iVar1 - uVar4);
        uVar7 = (ulong)(uVar4 << 1) | 0x100000001;
      }
      recovered_10006b60(param_1,uVar6,uVar7,uVar8);
      iVar3 = iVar3 + 1;
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + 1;
    }
  }
  return;
}

#undef DAT_10010328
#undef DAT_10010348
#undef DAT_10010354
#undef DAT_10010358

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e6c
 */

void recovered_10006e6c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e7c
 */

uint128 recovered_10006e7c(ulong param_1,long param_2,uint param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 0) = param_1 & 0xffffffff | param_2 << 0x20;
  PF_PART8(auVar1, 8) = (ulong)param_3 | param_4 << 0x20;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e90
 */

void recovered_10006e90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_1001032c
#define DAT_1001032c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a4U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

void recovered_10006ea0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;

  recovered_10001618(param_1,0,0x60);
  uVar2 = DAT_1001032c;
  bVar3 = DAT_10010328 == '\0';
  uVar1 = DAT_10010330;
  if (bVar3) {
    uVar1 = 0x202020;
  }
  *(undefined4 *)((long)param_1 + 0x28) = 1;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  if (bVar3) {
    uVar2 = 0xf6f6f6;
  }
  *(undefined4 *)((long)param_1 + 0x30) = uVar2;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  return;
}

#undef DAT_10010328
#undef DAT_1001032c
#undef DAT_10010330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f00
 */

void recovered_10006f00(undefined4 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f2c
 */

void recovered_10006f2c(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  param_1[0xc] = param_2;
  *param_1 = 2;
  param_1[1] = param_1[1] | 2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f60
 */

void recovered_10006f60(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f84
 */

void recovered_10006f84(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 0x14) = param_3;
  *(undefined8 *)(param_1 + 0x16) = param_4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fb8
 */

void recovered_10006fb8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                       undefined8 param_5,undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 8;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0x14) = param_5;
  *(undefined8 *)(param_1 + 0x16) = param_6;
  if (param_4 != 0) {
    param_1[1] = param_1[1] | 0x10;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007014
 */

void recovered_10007014(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007038
 */

void recovered_10007038(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000705c
 */

void recovered_1000705c(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ea0(param_1);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 6) = param_2;
  param_1[8] = param_3;
  param_1[10] = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000709c
 */

void recovered_1000709c(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,
                       undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  uVar3 = 0x60;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070ac
 */

void recovered_100070ac(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  *(undefined4 *)(param_2 + 0x2c) = param_3;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
  uVar3 = 0x60;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070c8
 */

void recovered_100070c8(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  *(undefined4 *)(param_2 + 0x30) = param_3;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 2;
  uVar3 = 0x60;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e4
 */

void recovered_100070e4(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (-1 < param_3) {
    *(int *)(param_2 + 0x38) = param_3;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 4;
  }
  if (-1 < param_4) {
    *(int *)(param_2 + 0x3c) = param_4;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 8;
  }
  uVar3 = 0x60;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007118
 */

void recovered_10007118(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)(param_2 + 0x34) = param_3;
  uVar3 = 0x60;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

void recovered_10007130(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if (3 < param_3) {
    param_3 = 1;
  }
  *(uint *)(param_2 + 0x28) = param_3;
  uVar3 = 0x60;
  if ((((uint)param_2 ^ (uint)param_1) & 7) == 0) {
    for (; (uVar3 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < uVar3 + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_2 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    uVar3 = uVar3 + lVar4;
    while (7 < uVar3) {
      *(undefined8 *)(param_1 + lVar5 + lVar6) = *(undefined8 *)(param_2 + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 - 8;
    }
    param_1 = param_1 + (lVar6 - lVar4);
    param_2 = param_2 + (lVar6 - lVar4);
  }
  else {
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007148
 */

undefined8 recovered_10007148(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar14 = 0;
  if (7 < *param_1 - 1U) {
LAB_10007238:
    uVar15 = (uint)uVar14;
    goto switchD_100071cc_caseD_4;
  }
  uVar8 = (int)param_2 -
          ((param_1[0x11] & (param_1[0x11] >> 0x1f ^ 0xffffffffU)) +
          (param_1[0x13] & (param_1[0x13] >> 0x1f ^ 0xffffffffU)));
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  uVar10 = (int)((ulong)param_2 >> 0x20) -
           ((param_1[0x10] & (param_1[0x10] >> 0x1f ^ 0xffffffffU)) +
           (param_1[0x12] & (param_1[0x12] >> 0x1f ^ 0xffffffffU)));
  uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  uVar12 = CONCAT44(uVar10,uVar8);
  uVar15 = 0;
  switch((uintptr_t)(*param_1)) {
  case 1:
    uVar15 = param_1[0xd];
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    uVar14 = recovered_10007eb8(*(undefined **)(param_1 + 2),(ulong)uVar15);
    uVar15 = (uint)(uVar14 >> 0x20);
    break;
  case 2:
    uVar14 = 0x10;
    goto LAB_10007238;
  case 3:
    uVar15 = param_1[0xd];
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    uVar12 = recovered_10007eb8(*(undefined **)(param_1 + 2),(ulong)uVar15);
    iVar9 = (int)((ulong)uVar12 >> 0x20);
    iVar5 = (int)uVar12;
    iVar11 = 0xc;
    bVar3 = SBORROW4(iVar9,0xc);
    iVar1 = iVar9 + -0xc;
    bVar4 = iVar9 == 0xc;
    goto LAB_10007290;
  case 5:
    uVar10 = param_1[8];
    if (uVar10 < 2) {
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[9] * (uVar10 - 1);
    }
    lVar16 = 0;
    iVar5 = 0;
    uVar15 = 0;
    for (uVar14 = 0; uVar14 < uVar10; uVar14 = uVar14 + 1) {
      piVar2 = (int *)0x0;
      if (*(long *)(param_1 + 6) != 0) {
        piVar2 = (int *)(*(long *)(param_1 + 6) + lVar16);
      }
      if ((piVar2 == (int *)0x0) || (*piVar2 != 4)) {
        uVar7 = recovered_10007148(piVar2,uVar12);
        uVar13 = uVar13 + (int)uVar7;
        uVar10 = (uint)((ulong)uVar7 >> 0x20);
        if ((int)uVar15 <= (int)uVar10) {
          uVar15 = uVar10;
        }
        uVar10 = param_1[8];
      }
      else {
        iVar5 = iVar5 + 1;
      }
      lVar16 = lVar16 + 0x60;
    }
    uVar10 = uVar13;
    if ((int)uVar13 <= (int)uVar8) {
      uVar10 = uVar8;
    }
    if (iVar5 != 0) {
      uVar13 = uVar10;
    }
    uVar14 = (ulong)uVar13;
    break;
  case 6:
    uVar8 = param_1[8];
    if (uVar8 < 2) {
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[9] * (uVar8 - 1);
    }
    lVar16 = 0;
    iVar5 = 0;
    uVar14 = 0;
    for (uVar17 = 0; uVar17 < uVar8; uVar17 = uVar17 + 1) {
      piVar2 = (int *)0x0;
      if (*(long *)(param_1 + 6) != 0) {
        piVar2 = (int *)(*(long *)(param_1 + 6) + lVar16);
      }
      if ((piVar2 == (int *)0x0) || (*piVar2 != 4)) {
        uVar7 = recovered_10007148(piVar2,uVar12);
        uVar8 = (uint)uVar14;
        if ((int)(uint)uVar14 <= (int)(uint)uVar7) {
          uVar8 = (uint)uVar7;
        }
        uVar14 = (ulong)uVar8;
        uVar15 = uVar15 + (int)((ulong)uVar7 >> 0x20);
        uVar8 = param_1[8];
      }
      else {
        iVar5 = iVar5 + 1;
      }
      lVar16 = lVar16 + 0x60;
    }
    uVar8 = uVar15;
    if ((int)uVar15 <= (int)uVar10) {
      uVar8 = uVar10;
    }
    if (iVar5 != 0) {
      uVar15 = uVar8;
    }
    break;
  case 7:
    lVar16 = 0;
    uVar14 = 0;
    uVar15 = 0;
    for (uVar17 = 0; uVar17 < (uint)param_1[8]; uVar17 = uVar17 + 1) {
      piVar2 = (int *)0x0;
      if (*(long *)(param_1 + 6) != 0) {
        piVar2 = (int *)(*(long *)(param_1 + 6) + lVar16);
      }
      uVar7 = recovered_10007148(piVar2,uVar12);
      uVar8 = (uint)uVar14;
      if ((int)(uint)uVar14 <= (int)(uint)uVar7) {
        uVar8 = (uint)uVar7;
      }
      uVar14 = (ulong)uVar8;
      uVar8 = (uint)((ulong)uVar7 >> 0x20);
      if ((int)uVar15 <= (int)uVar8) {
        uVar15 = uVar8;
      }
      lVar16 = lVar16 + 0x60;
    }
    break;
  case 8:
    pcVar6 = *(char **)(param_1 + 2);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      pcVar6 = *(char **)(param_1 + 4);
    }
    uVar15 = param_1[0xd];
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    uVar12 = recovered_10007eb8(pcVar6,(ulong)uVar15);
    iVar9 = (int)((ulong)uVar12 >> 0x20);
    iVar5 = (int)uVar12;
    if (iVar5 < 0x65) {
      iVar5 = 100;
    }
    iVar11 = 0x10;
    bVar3 = SBORROW4(iVar9,0x10);
    iVar1 = iVar9 + -0x10;
    bVar4 = iVar9 == 0x10;
LAB_10007290:
    uVar14 = (ulong)(iVar5 + 0x14);
    if (bVar4 || iVar1 < 0 != bVar3) {
      iVar9 = iVar11;
    }
    uVar15 = iVar9 + 0xc;
  }
switchD_100071cc_caseD_4:
  uVar8 = (uint)uVar14;
  if (((uint)param_1[1] >> 2 & 1) != 0) {
    uVar8 = param_1[0xe] & (param_1[0xe] >> 0x1f ^ 0xffffffffU);
  }
  if (((uint)param_1[1] >> 3 & 1) != 0) {
    uVar15 = param_1[0xf] & (param_1[0xf] >> 0x1f ^ 0xffffffffU);
  }
  return CONCAT44((param_1[0x10] & (param_1[0x10] >> 0x1f ^ 0xffffffffU)) + uVar15 +
                  (param_1[0x12] & (param_1[0x12] >> 0x1f ^ 0xffffffffU)),
                  (param_1[0x11] & (param_1[0x11] >> 0x1f ^ 0xffffffffU)) + uVar8 +
                  (param_1[0x13] & (param_1[0x13] >> 0x1f ^ 0xffffffffU)));
}


#define auStack_3c (*(undefined1 (*)[60])(pf_stack_frame + 20))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007410
 */

int recovered_10007410(int *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  recovered_10001618(param_2,0,0x2c);
  recovered_10001618(auStack_3c,0,0x1c);
  if (param_1 == (int *)0x0) {
    uVar3 = *param_2;
    iVar4 = 0;
  }
  else {
    uVar2 = recovered_1000658c(param_1,(long)auStack_3c);
    uVar3 = *param_2;
    if ((int)uVar2 == 0) {
      iVar4 = 0;
    }
    else {
      uVar3 = uVar3 | 1;
      *(undefined8 *)(param_2 + 3) = uStack_38;
      *(undefined8 *)(param_2 + 1) = uStack_28;
      iVar4 = 1;
    }
  }
  *param_2 = uVar3 | 2;
  iVar1 = recovered_10006258((ulong *)(param_2 + 5));
  return iVar1 + iVar4;
}

#undef auStack_3c
#undef uStack_28
#undef uStack_38

#define iStack_78 (*(int *)(pf_stack_frame + 40))
#define lStack_80 (*(long *)(pf_stack_frame + 32))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_74 (*(undefined8 *)(pf_stack_frame + 44))
#define uStack_5c (*(uint *)(pf_stack_frame + 68))
#define uStack_60 (*(uint *)(pf_stack_frame + 64))
#define iStack_54 (*(int *)(pf_stack_frame + 76))
#define iStack_58 (*(int *)(pf_stack_frame + 72))
#define local_84 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b0
 */

undefined8
recovered_100074b0(long param_1,int *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  local_84 = 0;
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*(long *)(param_1 + 0x30) != 0)) &&
     ((uVar2 = *(uint *)(param_1 + 4), -1 < (int)uVar2 && (-1 < (int)*(uint *)(param_1 + 8))))) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar1 = recovered_10005984((ulong)uVar2,*(uint *)(param_1 + 8),uVar3,&local_84);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    iVar4 = (int)(param_4 >> 0x20);
    if (((((ulong)uVar2 << 2 <= (ulong)uVar3 && 0 < (int)param_4) && 0 < iVar4) &&
        (uVar2 = (uint)param_3, (long)((param_4 & 0x7fffffff) + (long)(int)uVar2) < 0x80000000)) &&
       ((long)((param_4 >> 0x20) + (param_3 >> 0x20)) < 0x80000000)) {
      recovered_10001618(&lStack_80,0,0x30);
      lStack_80 = *(long *)(param_1 + 0x30);
      iStack_78 = *(int *)(param_1 + 4);
      uStack_74 = *(undefined8 *)(param_1 + 8);
      uStack_60 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      uVar3 = (uint)((ulong)param_3 >> 0x20);
      uStack_5c = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      iStack_58 = uVar2 + (int)param_4;
      if (iStack_78 <= iStack_58) {
        iStack_58 = iStack_78;
      }
      iStack_58 = iStack_58 - uStack_60;
      iVar4 = uVar3 + iVar4;
      if ((int)uStack_74 <= iVar4) {
        iVar4 = (int)uStack_74;
      }
      iStack_54 = iVar4 - uStack_5c;
      if (0 < iStack_58 && 0 < iStack_54) {
        uStack_68 = param_5;
        recovered_100075fc(&lStack_80,param_2,param_3,param_4);
        return 1;
      }
    }
  }
  return 0;
}

#undef iStack_78
#undef lStack_80
#undef uStack_68
#undef uStack_74
#undef uStack_5c
#undef uStack_60
#undef iStack_54
#undef iStack_58
#undef local_84

#undef DAT_10008aeb
#define DAT_10008aeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x163U)))
#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_10010334
#define DAT_10010334 (*(uint *)(((uintptr_t)pf_module_state + 0x79acU)))
#undef DAT_10010338
#define DAT_10010338 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79b0U)))
#undef DAT_1001033c
#define DAT_1001033c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79b4U)))
#undef DAT_1001035c
#define DAT_1001035c (*(uint *)(((uintptr_t)pf_module_state + 0x79d4U)))
#undef DAT_10010360
#define DAT_10010360 (*(uint *)(((uintptr_t)pf_module_state + 0x79d8U)))
#undef DAT_100103a8
#define DAT_100103a8 (*(uint *)(((uintptr_t)pf_module_state + 0x7a20U)))
#undef DAT_100103f0
#define DAT_100103f0 (*(int *)(((uintptr_t)pf_module_state + 0x7a68U)))
#define uStack_84 (*(uint *)(pf_stack_frame + 28))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 48))
#define plStack_78 (*(long * *)(pf_stack_frame + 40))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075fc
 */

/* WARNING: Removing unreachable block (ram,0x10008414) */
/* WARNING: Removing unreachable block (ram,0x10008470) */

void recovered_100075fc(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  undefined *puVar27;
  int iVar28;
  ulong uVar29;
  byte bVar30;
  long lVar31;
  undefined4 uVar32;
  ulong uVar33;
  long *plVar34;
  undefined4 *puVar35;
  int iVar36;
  uint128 auVar37;
  uint128 auVar38;

  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  bVar5 = true;
  bVar6 = false;
  if (0 < (int)param_4) {
    iVar8 = (int)((ulong)param_4 >> 0x20);
    bVar6 = SBORROW4(iVar8,1);
    bVar5 = iVar8 + -1 < 0;
  }
  if (bVar5 != bVar6) {
    return;
  }
  iVar8 = *param_2;
  if (((*(byte *)(param_2 + 1) >> 1 & 1) != 0) && (iVar8 != 3 && iVar8 != 8)) {
    recovered_10006b60(param_1,param_3,param_4,param_2[0xc]);
    iVar8 = *param_2;
  }
  auVar37 = recovered_1000800c(param_3,param_4,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_2 + 0x12));
  uVar29 = PF_PART8(auVar37, 8);
  uVar24 = PF_PART8(auVar37, 0);
  switch((uintptr_t)(iVar8)) {
  case 1:
    uVar9 = param_2[0xd];
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    uVar12 = recovered_10007eb8(*(undefined **)(param_2 + 2),(ulong)uVar9);
    iVar10 = param_2[10];
    auVar37 = recovered_10008058(uVar24,uVar29,uVar12,iVar10);
    puVar27 = &DAT_10008aeb;
    if (*(undefined **)(param_2 + 2) != (undefined *)0x0) {
      puVar27 = *(undefined **)(param_2 + 2);
    }
    iVar8 = recovered_100080e4((long)param_2);
    uVar9 = param_2[0xd];
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    goto LAB_10007b88;
  case 2:
    uVar9 = DAT_10010334;
    if (DAT_10010328 == '\0') {
      uVar9 = 0xf4f4f4;
    }
    if ((*(byte *)(param_2 + 1) >> 1 & 1) != 0) {
      uVar9 = param_2[0xc];
    }
    goto code_r0x10006b60;
  case 3:
    pbVar18 = (byte *)param_1[3];
    if ((pbVar18 == (byte *)0x0) || ((*pbVar18 & 1) == 0)) {
LAB_100079d8:
      bVar5 = false;
      bVar15 = 0;
      bVar30 = 0;
    }
    else {
      iVar8 = *(int *)(pbVar18 + 4);
      iVar10 = *(int *)(pbVar18 + 8);
      bVar5 = recovered_10008630(iVar8,iVar10,uVar24,uVar29);
      if ((!bVar5) || (bVar5 = recovered_10008630(iVar8,iVar10,param_1[4],param_1[5]), !bVar5))
      goto LAB_100079d8;
      bVar15 = pbVar18[0xc] & 1;
      bVar30 = pbVar18[0x10] & 1;
      bVar5 = true;
    }
    cVar4 = DAT_10010328;
    uVar9 = DAT_10010334;
    if (DAT_10010328 == '\0') {
      uVar9 = 0xf4f4f4;
    }
    if ((*(byte *)(param_2 + 1) >> 1 & 1) != 0) {
      uVar9 = param_2[0xc];
    }
    if (bVar15 == 0) {
      if (!bVar5) {
        recovered_10006b60(param_1,uVar24,uVar29,uVar9);
        goto LAB_10007b1c;
      }
      uVar32 = 0x286dc4;
      puVar35 = &DAT_1001033c;
      uVar16 = DAT_10010360;
      if (DAT_10010328 == '\0') {
        uVar16 = 0xffffff;
      }
      uVar9 = recovered_1000865c(uVar9,uVar16,0x12);
      recovered_10006b60(param_1,uVar24,uVar29,uVar9);
    }
    else {
      puVar35 = &DAT_1001033c;
      uVar16 = DAT_1001035c;
      if (DAT_10010328 == '\0') {
        uVar16 = 0;
      }
      uVar9 = recovered_1000865c(uVar9,uVar16,0xc);
      recovered_10006b60(param_1,uVar24,uVar29,uVar9);
      if (bVar5) {
        uVar32 = 0x286dc4;
      }
      else {
LAB_10007b1c:
        puVar35 = &DAT_10010338;
        uVar32 = 0x9a9a9a;
      }
    }
    uVar1 = *puVar35;
    if (cVar4 == '\0') {
      uVar1 = uVar32;
    }
    recovered_10006c30(param_1,uVar24,uVar29,uVar1);
    if ((bVar30 != 0) && (*(code **)(param_2 + 0x14) != (code *)0x0)) {
      (**(code **)(param_2 + 0x14))(*(undefined8 *)(param_2 + 0x16));
    }
    auVar37 = recovered_1000800c(uVar24,uVar29,0xa00000006,0xa00000006);
    puVar27 = &DAT_10008aeb;
    if (*(undefined **)(param_2 + 2) != (undefined *)0x0) {
      puVar27 = *(undefined **)(param_2 + 2);
    }
    iVar8 = recovered_100080e4((long)param_2);
    uVar9 = param_2[0xd];
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    iVar10 = 1;
LAB_10007b88:
    recovered_10001618(&plStack_78,0,0x18);
    if (param_1 == (long *)0x0) {
      return;
    }
    if (puVar27 == (undefined *)0x0) {
      return;
    }
    if (*param_1 == 0) {
      return;
    }
    iVar28 = PF_PART4(auVar37, 8);
    iVar36 = PF_PART4(auVar37, 12);
    if (iVar28 < 1 || iVar36 < 1) {
      return;
    }
    uVar12 = recovered_10007fa0(puVar27,(ulong)uVar9,(ulong)(iVar8 << 8 | 0xff),&plStack_78);
    if ((int)uVar12 == 0) {
      return;
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    iVar8 = PF_PART4(auVar37, 4);
    uVar9 = PF_PART4(auVar37, 0);
    uStack_84 = uVar9;
    if (iVar10 == 2) {
      if (iVar28 <= ((int32_t)PF_PART4(uStack_70, 4))) goto LAB_1000847c;
      uStack_84 = (uVar9 + iVar28) - PF_PART4(uStack_70, 4);
    }
    else {
      if ((iVar10 != 1) || (iVar28 - PF_PART4(uStack_70, 4) == 0 || iVar28 < ((int32_t)PF_PART4(uStack_70, 4))))
      goto LAB_1000847c;
      uStack_84 = (iVar28 - PF_PART4(uStack_70, 4)) / 2 + uVar9;
    }
LAB_1000847c:
    iVar10 = iVar8;
    if (iVar36 - (uint)uStack_68 != 0 && (int)(uint)uStack_68 <= iVar36) {
      iVar10 = (int)(iVar36 - (uint)uStack_68) / 2 + iVar8;
    }
    uVar16 = (uint)uStack_68;
    for (uVar24 = 0; uVar24 < uVar16; uVar24 = uVar24 + 1) {
      uVar7 = iVar10 + (int)uVar24;
      if (((iVar8 <= (int)uVar7 && (int)uVar7 < iVar8 + iVar36) && (-1 < (int)uVar7)) &&
         ((int)uVar7 < *(int *)((long)param_1 + 0xc))) {
        plVar34 = plStack_78;
        uVar16 = uStack_84;
        for (uVar29 = 0; uVar29 < uStack_70 >> 0x20; uVar29 = uVar29 + 1) {
          if ((((int)uVar9 <= (int)uVar16 && (int)uVar16 < (int)(uVar9 + iVar28)) &&
              (-1 < (int)uVar16)) &&
             (((int)uVar16 < (int)param_1[1] &&
              ((lVar31 = *param_1, lVar31 != 0 && ((int)uVar7 < *(int *)((long)param_1 + 0xc)))))))
          {
            uVar33 = uStack_68 >> 0x20;
            bVar5 = recovered_10008630(uVar16,uVar7,param_1[4],param_1[5]);
            if (bVar5) {
              lVar22 = uVar24 * uVar33;
              bVar15 = *(byte *)((long)plVar34 + lVar22 + 3);
              if (bVar15 != 0) {
                lVar21 = uVar24 * uVar33;
                pbVar18 = (byte *)(lVar31 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar7 +
                                  (ulong)uVar16 * 4);
                if (bVar15 == 0xff) {
                  *pbVar18 = *(byte *)((long)plVar34 + lVar21);
                  pbVar18[1] = *(byte *)((long)plVar34 + lVar22 + 1);
                  pbVar18[2] = *(byte *)((long)plVar34 + lVar22 + 2);
                }
                else {
                  uVar20 = (uint)bVar15;
                  uVar14 = uVar20 ^ 0xff;
                  *pbVar18 = (byte)((uVar14 * *pbVar18 + *(byte *)((long)plVar34 + lVar21) * uVar20
                                    + 0x7f) / 0xff);
                  pbVar18[1] = (byte)((uVar14 * pbVar18[1] +
                                       *(byte *)((long)plVar34 + lVar22 + 1) * uVar20 + 0x7f) / 0xff
                                     );
                  pbVar18[2] = (byte)((uVar14 * pbVar18[2] +
                                       *(byte *)((long)plVar34 + lVar22 + 2) * uVar20 + 0x7f) / 0xff
                                     );
                }
                pbVar18[3] = 0xff;
              }
            }
          }
          uVar16 = uVar16 + 1;
          plVar34 = (long *)((long)plVar34 + 4);
        }
        uVar16 = (uint)uStack_68;
      }
    }
    recovered_1000501c(plStack_78);
    return;
  case 5:
    iVar8 = 1;
    goto LAB_10007820;
  case 6:
    iVar8 = 0;
LAB_10007820:
    plStack_78 = param_1;
    auVar37 = recovered_1000800c(param_3,param_4,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(param_2 + 0x12));
    iVar10 = recovered_10007f7c((long)param_2);
    uStack_70 = CONCAT44(iVar8,(undefined4)uStack_70);
    iVar26 = PF_PART4(auVar37, 0);
    iVar36 = PF_PART4(auVar37, 4);
    iVar28 = iVar26;
    if (iVar8 == 0) {
      iVar28 = iVar36;
    }
    if ((*(long *)(param_2 + 6) != 0) && (uVar24 = (ulong)(uint)param_2[8], param_2[8] != 0)) {
      lVar31 = 0;
      iVar25 = 0;
      uVar9 = PF_PART4(auVar37, 8);
      uVar16 = PF_PART4(auVar37, 12);
      uStack_68 = CONCAT44(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU),
                           uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU));
      for (uVar29 = 0; uVar29 < uVar24; uVar29 = uVar29 + 1) {
        if (*(int *)(*(long *)(param_2 + 6) + lVar31) == 4) {
          iVar25 = iVar25 + 1;
        }
        else {
          uVar12 = recovered_10007148((int *)(*(long *)(param_2 + 6) + lVar31),uStack_68);
          iVar11 = (int)uVar12;
          if (iVar8 == 0) {
            iVar11 = (int)((ulong)uVar12 >> 0x20);
          }
          iVar10 = iVar10 + iVar11;
          uVar24 = (ulong)(uint)param_2[8];
        }
        lVar31 = lVar31 + 0x60;
      }
      if (iVar25 == 0) {
        uVar7 = 0;
      }
      else {
        uVar14 = uVar9;
        if (iVar8 == 0) {
          uVar14 = uVar16;
        }
        uVar7 = 0;
        if (iVar25 != 0) {
          uVar7 = (int)(uVar14 - iVar10 & ((int)(uVar14 - iVar10) >> 0x1f ^ 0xffffffffU)) / iVar25;
        }
      }
      lVar31 = 0;
      uVar29 = 0;
      uVar14 = uVar7;
      uVar20 = uVar16;
      if (iVar8 == 0) {
        uVar14 = uVar9;
        uVar20 = uVar7;
      }
      for (; uVar29 < uVar24; uVar29 = uVar29 + 1) {
        lVar22 = *(long *)(param_2 + 6);
        uVar12 = recovered_10007148((int *)(lVar22 + lVar31),uStack_68);
        iVar8 = *(int *)(lVar22 + lVar31);
        uVar19 = (uint)((ulong)uVar12 >> 0x20);
        uVar2 = uVar14;
        uVar3 = uVar20;
        if (iVar8 != 4) {
          uVar2 = (uint)uVar12;
          uVar3 = uVar19;
        }
        uVar17 = uVar7;
        if (PF_PART4(uStack_70, 4) == 0) {
          iVar10 = param_2[10];
          uVar3 = uVar9;
          if (iVar10 != 3) {
            uVar3 = uVar2;
          }
          if (iVar8 != 4) {
            uVar17 = uVar19;
          }
          uVar12 = CONCAT44(uVar17,uVar3);
          iVar8 = (iVar26 + uVar9) - uVar2;
          if ((int)uVar9 <= (int)uVar3 || iVar10 != 2) {
            iVar8 = iVar26;
          }
          if (iVar10 == 1 && (int)uVar3 < (int)uVar9) {
            iVar8 = (int)(uVar9 - uVar2) / 2 + iVar26;
          }
          iVar10 = iVar28;
        }
        else {
          if (iVar8 != 4) {
            uVar17 = (uint)uVar12;
          }
          iVar8 = param_2[10];
          uVar2 = uVar16;
          if (iVar8 != 3) {
            uVar2 = uVar3;
          }
          uVar12 = CONCAT44(uVar2,uVar17);
          iVar10 = (iVar36 + uVar16) - uVar3;
          if ((int)uVar16 <= (int)uVar2 || iVar8 != 2) {
            iVar10 = iVar36;
          }
          if (iVar8 == 1 && (int)uVar2 < (int)uVar16) {
            iVar10 = (int)(uVar16 - uVar3) / 2 + iVar36;
          }
          iVar8 = iVar28;
        }
        iVar28 = param_2[9] + iVar28 + uVar17;
        recovered_100075fc(plStack_78,(int *)(lVar22 + lVar31),CONCAT44(iVar10,iVar8),uVar12);
        uVar24 = (ulong)(uint)param_2[8];
        lVar31 = lVar31 + 0x60;
      }
    }
    return;
  case 7:
    if (*(long *)(param_2 + 6) != 0) {
      lVar31 = 0;
      for (uVar33 = 0; uVar33 < (uint)param_2[8]; uVar33 = uVar33 + 1) {
        lVar22 = *(long *)(param_2 + 6);
        uVar12 = recovered_10007148((int *)(lVar22 + lVar31),
                                    CONCAT44(PF_PART4(auVar37, 12) &
                                             ((int)PF_PART4(auVar37, 12) >> 0x1f ^ 0xffffffffU),
                                             PF_PART4(auVar37, 8) &
                                             ((int)PF_PART4(auVar37, 8) >> 0x1f ^ 0xffffffffU)));
        auVar38 = recovered_10008058(uVar24,uVar29,uVar12,param_2[10]);
        recovered_100075fc(param_1,(int *)(lVar22 + lVar31),PF_PART8(auVar38, 0),PF_PART8(auVar38, 8));
        lVar31 = lVar31 + 0x60;
      }
    }
    break;
  case 8:
    pbVar18 = (byte *)param_1[3];
    if ((pbVar18 == (byte *)0x0) || ((*pbVar18 & 1) == 0)) {
LAB_10007834:
      bVar5 = false;
    }
    else {
      iVar8 = *(int *)(pbVar18 + 4);
      iVar10 = *(int *)(pbVar18 + 8);
      bVar5 = recovered_10008630(iVar8,iVar10,uVar24,uVar29);
      if (!bVar5) goto LAB_10007834;
      bVar5 = recovered_10008630(iVar8,iVar10,param_1[4],param_1[5]);
    }
    uVar9 = param_2[1];
    if (*(char **)(param_2 + 2) == (char *)0x0) {
      uStack_68 = (ulong)PF_PART4(uStack_68, 4) << 0x20;
    }
    else {
      uStack_68 = CONCAT44(PF_PART4(uStack_68, 4),(uint)(**(char **)(param_2 + 2) != '\0'));
    }
    uVar16 = param_2[0xd];
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    auVar37 = recovered_1000800c(uVar24,uVar29,0xa00000006,0xa00000006);
    cVar4 = DAT_10010328;
    uStack_70 = PF_PART8(auVar37, 0);
    uVar7 = DAT_100103a8;
    if (DAT_10010328 == '\0') {
      uVar7 = 0xffffff;
    }
    uStack_68 = CONCAT44(uVar16,(uint)uStack_68);
    if ((uVar9 >> 1 & 1) != 0) {
      uVar7 = param_2[0xc];
    }
    if ((bVar5 != false) && ((uVar9 & 0x10) == 0)) {
      uVar16 = DAT_10010360;
      if (DAT_10010328 == '\0') {
        uVar16 = 0xffffff;
      }
      uVar7 = recovered_1000865c(uVar7,uVar16,10);
    }
    recovered_10006b60(param_1,uVar24,uVar29,uVar7);
    uVar16 = DAT_1001033c;
    if (cVar4 == '\0') {
      uVar16 = 0x286dc4;
    }
    uVar7 = DAT_10010338;
    if (cVar4 == '\0') {
      uVar7 = 0x9a9a9a;
    }
    if (bVar5 == false && (uVar9 & 0x10) == 0) {
      uVar16 = uVar7;
    }
    recovered_10006c30(param_1,uVar24,uVar29,uVar16);
    if (((bVar5 != false) && ((*(byte *)(param_1[3] + 0x10) & 1) != 0)) &&
       (*(code **)(param_2 + 0x14) != (code *)0x0)) {
      (**(code **)(param_2 + 0x14))(*(undefined8 *)(param_2 + 0x16));
    }
    uVar12 = uStack_70;
    uVar16 = (uint)uStack_68;
    uVar24 = uStack_68 >> 0x20;
    if ((uint)uStack_68 == 0) {
      puVar27 = &DAT_10008aeb;
      if (*(undefined **)(param_2 + 4) != (undefined *)0x0) {
        puVar27 = *(undefined **)(param_2 + 4);
      }
      iVar8 = DAT_100103f0;
      if (DAT_10010328 == '\0') {
        iVar8 = 0x5c5c5c;
      }
    }
    else {
      puVar27 = *(undefined **)(param_2 + 2);
      iVar8 = recovered_100080e4((long)param_2);
    }
    recovered_10008380(param_1,uVar12,PF_PART8(auVar37, 8),(long)puVar27,iVar8,uVar24,0,
                       uVar16 & (uVar9 & 0x10) >> 4);
    if ((uVar9 >> 4 & 1) != 0) {
      uVar9 = PF_PART4(auVar37, 8);
      uVar7 = PF_PART4(auVar37, 12);
      if (0 < (int)uVar9 && 0 < (int)uVar7) {
        if (uVar16 == 0) {
          puVar27 = &DAT_10008aeb;
        }
        else {
          puVar27 = *(undefined **)(param_2 + 2);
        }
        uVar13 = recovered_10007eb8(puVar27,uVar24);
        uVar16 = (uint)((ulong)uVar13 >> 0x20);
        if ((int)uVar16 < 9) {
          uVar16 = 8;
        }
        uVar14 = uVar7;
        if (uVar16 <= uVar7) {
          uVar14 = uVar16;
        }
        if (uVar9 < 3) {
          uVar9 = 2;
        }
        iVar8 = (int)uVar13;
        if ((int)(uVar9 - 2) <= (int)uVar13) {
          iVar8 = uVar9 - 2;
        }
        uVar9 = DAT_1001033c;
        if (DAT_10010328 == '\0') {
          uVar9 = 0x286dc4;
        }
        PF_PART4(auVar37, 4) = (int)(uVar7 - uVar14) / 2 + (int)((ulong)uVar12 >> 0x20);
        PF_PART4(auVar37, 0) = iVar8 + (int)uVar12;
        PF_PART8(auVar37, 8) = (ulong)uVar14 << 0x20 | 1;
code_r0x10006b60:
        if (param_1 != (long *)0x0) {
          uVar7 = *(uint *)(param_1 + 4);
          iVar8 = *(int *)((long)param_1 + 0x24);
          uVar14 = PF_PART4(auVar37, 0);
          uVar16 = uVar14;
          if ((int)uVar14 <= (int)uVar7) {
            uVar16 = uVar7;
          }
          iVar10 = PF_PART4(auVar37, 4);
          iVar28 = iVar10;
          if (iVar10 <= iVar8) {
            iVar28 = iVar8;
          }
          iVar36 = uVar14 + PF_PART4(auVar37, 8);
          iVar26 = (int)param_1[5] + uVar7;
          if (iVar26 <= iVar36) {
            iVar36 = iVar26;
          }
          iVar10 = iVar10 + PF_PART4(auVar37, 12);
          iVar26 = *(int *)((long)param_1 + 0x2c) + iVar8;
          if (iVar26 <= iVar10) {
            iVar10 = iVar26;
          }
          if ((((iVar28 < iVar10 && (int)uVar16 < iVar36) && *param_1 != 0) && 0 < PF_PART4(auVar37, 8)) &&
              0 < PF_PART4(auVar37, 12)) {
            lVar22 = PF_PART8(auVar37, 0) >> 0x20;
            lVar31 = (long)iVar8;
            if (iVar8 <= lVar22) {
              lVar31 = lVar22;
            }
            for (; lVar31 < iVar10; lVar31 = lVar31 + 1) {
              puVar23 = (undefined1 *)
                        (*param_1 + lVar31 * (ulong)*(uint *)(param_1 + 2) +
                        (-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2));
              for (uVar24 = (ulong)uVar16; (int)uVar24 < iVar36; uVar24 = (ulong)((int)uVar24 + 1))
              {
                *puVar23 = (char)(uVar9 >> 0x10);
                puVar23[1] = (char)(uVar9 >> 8);
                puVar23[2] = (char)uVar9;
                puVar23[3] = 0xff;
                puVar23 = puVar23 + 4;
              }
            }
          }
        }
        return;
      }
    }
  }
  return;
}

#undef DAT_10008aeb
#undef DAT_10010328
#undef DAT_10010334
#undef DAT_10010338
#undef DAT_1001033c
#undef DAT_1001035c
#undef DAT_10010360
#undef DAT_100103a8
#undef DAT_100103f0
#undef uStack_84
#undef uStack_70
#undef plStack_78
#undef uStack_68

#define uStack_2d0 (*(uint *)(pf_stack_frame + 32))
#define lStack_2d8 (*(long *)(pf_stack_frame + 24))
#define uStack_2c0 (*(undefined8 *)(pf_stack_frame + 48))
#define lStack_2cc (*(long *)(pf_stack_frame + 36))
#define uStack_2b0 (*(uint *)(pf_stack_frame + 64))
#define uStack_2b8 (*(undefined8 *)(pf_stack_frame + 56))
#define auStack_2a8 (*(undefined1 (*)[680])(pf_stack_frame + 72))
#define uStack_2ac (*(undefined4 *)(pf_stack_frame + 68))
#define bStack_280 (*(byte *)(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b9c
 */

ulong recovered_10007b9c(int *param_1,int *param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    recovered_10001618(auStack_2a8,0,0x278);
    uVar1 = recovered_100060a4(param_1,auStack_2a8);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if ((bStack_280 & 0x11) == 0) {
      uVar1 = recovered_10006054(param_1,(long)auStack_2a8);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if (*(long *)(param_1 + 0xc) != 0) {
        recovered_10001618(&lStack_2d8,0,0x30);
        lStack_2d8 = *(long *)(param_1 + 0xc);
        uStack_2d0 = param_1[1];
        lStack_2cc = *(long *)(param_1 + 2);
        uStack_2b8 = 0;
        uStack_2ac = (undefined4)lStack_2cc;
        uStack_2c0 = param_3;
        uStack_2b0 = uStack_2d0;
        recovered_10006b60(&lStack_2d8,0,(ulong)uStack_2d0 | lStack_2cc << 0x20,param_1[4]);
        recovered_100075fc(&lStack_2d8,param_2,0,*(undefined8 *)(param_1 + 1));
        uVar1 = recovered_10005ecc(param_1);
        return uVar1;
      }
    }
  }
  return 0;
}

#undef uStack_2d0
#undef lStack_2d8
#undef uStack_2c0
#undef lStack_2cc
#undef uStack_2b0
#undef uStack_2b8
#undef auStack_2a8
#undef uStack_2ac
#undef bStack_280

#define auStack_608 (*(undefined1 (*)[1544])(pf_stack_frame + 24))
#define auStack_390 (*(uint (*)[228])(pf_stack_frame + 656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c80
 */

undefined8 recovered_10007c80(undefined8 *param_1)

{
  unsigned char pf_stack_frame[1600] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;

  uVar6 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[10] == 0) {
      uVar6 = 0;
    }
    else {
      recovered_10001618(auStack_390,0,0x350);
      puVar8 = (uint *)*param_1;
      puVar1 = auStack_390;
      if (puVar8 != (uint *)0x0) {
        puVar1 = puVar8;
      }
      if ((*puVar1 != 0) || (uVar6 = recovered_100056b0((int *)puVar1,param_1 + 1), (int)uVar6 != 0)
         ) {
        puVar2 = auStack_390;
        if (puVar8 != (uint *)0x0) {
          puVar2 = puVar8;
        }
        uVar7 = 1;
        while( true ) {
          puVar2[0x12] = 0;
          bVar4 = recovered_1000643c((int *)puVar1);
          if (bVar4) break;
          recovered_10001618(auStack_608,0,0x278);
          recovered_100060a4((int *)puVar1,auStack_608);
          if (((((code *)param_1[0xb] != (code *)0x0) &&
               (iVar5 = (*(code *)param_1[0xb])(puVar1,auStack_608,param_1[0xc]), iVar5 == 0)) ||
              (iVar5 = (*(code *)param_1[10])(puVar1,param_1[0xc]), iVar5 == 0)) ||
             (*(int *)(param_1 + 0xd) - 1U < uVar7)) break;
          uVar3 = *(uint *)((long)param_1 + 0x6c);
          if (uVar3 < 2) {
            uVar3 = 1;
          }
          recovered_10006878(uVar3);
          uVar7 = uVar7 + 1;
        }
        recovered_10006478(puVar1);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

#undef auStack_608
#undef auStack_390

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
 * Address: 0x10007d8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10007d8c(int param_1)

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

#undef UNK_82010a00
#define UNK_82010a00 (*(uint *)(0x82010a00U))
#undef str_10009479
#define str_10009479 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf1U)))
#undef uRam0000000082010a00
#define uRam0000000082010a00 (*(uint32_t *)(0x82010a00U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dd4
 */

undefined8 recovered_10007dd4(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0x200);
  if ((bVar1) && (uRam0000000082010a00 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001d0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uRam0000000082010a00)(param_1,str_10009479);
    return uVar2;
  }
  return 0;
}

#undef UNK_82010a00
#undef str_10009479
#undef uRam0000000082010a00

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e1c
 */

ulong recovered_10007e1c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  uVar4 = 0x4000000000000000;
  do {
    uVar5 = uVar4;
    uVar4 = uVar5 >> 2;
  } while (param_1 < uVar5);
  uVar4 = 0;
  for (; uVar5 != 0; uVar5 = uVar5 >> 2) {
    uVar1 = uVar5 + uVar4;
    uVar2 = 0;
    if (uVar1 <= param_1) {
      uVar2 = uVar1;
    }
    uVar3 = 0;
    if (uVar1 <= param_1) {
      uVar3 = uVar5;
    }
    param_1 = param_1 - uVar2;
    uVar4 = uVar3 + (uVar4 >> 1);
  }
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e60
 */

int recovered_10007e60(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (uint)(0 < param_1);
  if (2 < param_1) {
    uVar1 = (param_1 + 2U) / 5;
  }
  if (0x1f < param_2) {
    param_2 = 0x20;
  }
  return uVar1 + ((param_1 - uVar1) *
                  (param_2 * 0x20 * param_2 * 0x20 * (param_2 * -0x40 + 0xc00) + 0x80000 >> 0x14) +
                  0x200 >> 10);
}


#undef DAT_10008aeb
#define DAT_10008aeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x163U)))
#undef UNK_82010a10
#define UNK_82010a10 (*(uint *)(0x82010a10U))
#undef uRam0000000082010a10
#define uRam0000000082010a10 (*(uint32_t *)(0x82010a10U))
#define uStack_40 (*(uint *)(pf_stack_frame + 48))
#define uStack_48 (*(uint *)(pf_stack_frame + 40))
#define uStack_3c (*(uint *)(pf_stack_frame + 52))
#define uStack_4c (*(uint *)(pf_stack_frame + 36))
#define lStack_58 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007eb8
 */

undefined8 recovered_10007eb8(undefined *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;

  recovered_10001618(&uStack_40,0,0x20);
  recovered_10001618(&lStack_58,0,0x18);
  puVar1 = &DAT_10008aeb;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  bVar2 = recovered_10007d8c(0x210);
  if (((!bVar2) || (uRam0000000082010a10 == 0)) ||
     (iVar3 = (*(code *)(ulong)uRam0000000082010a10)(0,puVar1,param_2,&uStack_40), iVar3 == 0)) {
    uVar4 = recovered_10007fa0(puVar1,param_2,0,&lStack_58);
    if ((int)uVar4 == 0) {
      return 0;
    }
    if (lStack_58 != 0) {
      recovered_1000501c(lStack_58);
    }
    uStack_40 = uStack_4c;
    uStack_3c = uStack_48;
  }
  return CONCAT44(uStack_3c & ((int)uStack_3c >> 0x1f ^ 0xffffffffU),
                  uStack_40 & ((int)uStack_40 >> 0x1f ^ 0xffffffffU));
}

#undef DAT_10008aeb
#undef UNK_82010a10
#undef uRam0000000082010a10
#undef uStack_40
#undef uStack_48
#undef uStack_3c
#undef uStack_4c
#undef lStack_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f7c
 */

int recovered_10007f7c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 0;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x20) < 2) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x24) * (*(uint *)(param_1 + 0x20) - 1);
  }
  return iVar1;
}


#undef DAT_82010978
#define DAT_82010978 (*(uint8_t *)(0x82010978U))
#undef _DAT_82010978
#define _DAT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10007fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10007d8c(0x178);
  if ((bVar1) && (_DAT_82010978 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10007ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010978)(param_1,0xffffffff,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010978
#undef _DAT_82010978

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000800c
 */

uint128 recovered_1000800c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint128 auVar5;

  uVar4 = (uint)((ulong)param_4 >> 0x20);
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  uVar1 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
  uVar4 = (int)param_2 - ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + uVar3);
  uVar2 = (int)((ulong)param_2 >> 0x20) -
          (((uint)param_4 & ((int)(uint)param_4 >> 0x1f ^ 0xffffffffU)) + uVar1);
  PF_PART4(auVar5, 12) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  PF_PART4(auVar5, 8) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  PF_PART4(auVar5, 4) = uVar1 + (int)((ulong)param_1 >> 0x20);
  PF_PART4(auVar5, 0) = uVar3 + (int)param_1;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008058
 */

uint128 recovered_10008058(ulong param_1,ulong param_2,undefined8 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint128 auVar11;

  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = param_1 >> 0x20;
  uVar10 = param_2 >> 0x20;
  uVar3 = (uint)param_2;
  uVar1 = uVar3;
  if ((int)(uint)param_3 <= (int)uVar3) {
    uVar1 = (uint)param_3;
  }
  uVar7 = (ulong)uVar1;
  uVar9 = (uint)(param_2 >> 0x20);
  uVar2 = uVar9;
  if ((int)uVar4 <= (int)uVar9) {
    uVar2 = uVar4;
  }
  uVar8 = (ulong)uVar2;
  if (param_4 != 3) {
    iVar5 = (int)(param_1 >> 0x20);
    param_2 = uVar7;
    uVar10 = uVar8;
    if (param_4 == 2) {
      param_1 = (ulong)(((int)param_1 + uVar3) - uVar1);
      uVar6 = (ulong)((iVar5 + uVar9) - uVar2);
    }
    else if (param_4 == 1) {
      param_1 = (ulong)(uint)((int)(uVar3 - uVar1) / 2 + (int)param_1);
      uVar6 = (ulong)(uint)((int)(uVar9 - uVar2) / 2 + iVar5);
    }
  }
  PF_PART8(auVar11, 0) = param_1 & 0xffffffff | uVar6 << 0x20;
  PF_PART8(auVar11, 8) = param_2 & 0xffffffff | uVar10 << 0x20;
  return auVar11;
}


#define lStack_78 (*(long *)(pf_stack_frame + 40))
#define uStack_84 (*(uint *)(pf_stack_frame + 28))
#define uStack_68 (*(uint *)(pf_stack_frame + 56))
#define uStack_6c (*(uint *)(pf_stack_frame + 52))
#define uStack_64 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080dc
 */

/* WARNING: Removing unreachable block (ram,0x10008414) */
/* WARNING: Removing unreachable block (ram,0x10008470) */

void recovered_100080dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                       ,undefined8 param_6,int param_7)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;

  recovered_10001618(&lStack_78,0,0x18);
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  iVar15 = (int)param_3;
  iVar19 = (int)((ulong)param_3 >> 0x20);
  if (iVar15 < 1 || iVar19 < 1) {
    return;
  }
  uVar6 = recovered_10007fa0(param_4,param_6,(ulong)(param_5 << 8 | 0xff),&lStack_78);
  if ((int)uVar6 == 0) {
    return;
  }
  if (lStack_78 == 0) {
    return;
  }
  iVar11 = (int)((ulong)param_2 >> 0x20);
  uVar13 = (uint)param_2;
  uStack_84 = uVar13;
  if (param_7 == 2) {
    if (iVar15 <= (int)uStack_6c) goto LAB_1000847c;
    uStack_84 = (uVar13 + iVar15) - uStack_6c;
  }
  else {
    if ((param_7 != 1) || (iVar15 - uStack_6c == 0 || iVar15 < (int)uStack_6c)) goto LAB_1000847c;
    uStack_84 = (int)(iVar15 - uStack_6c) / 2 + uVar13;
  }
LAB_1000847c:
  iVar9 = iVar11;
  if (iVar19 - uStack_68 != 0 && (int)uStack_68 <= iVar19) {
    iVar9 = (int)(iVar19 - uStack_68) / 2 + iVar11;
  }
  uVar7 = uStack_68;
  for (uVar18 = 0; uVar18 < uVar7; uVar18 = uVar18 + 1) {
    uVar2 = iVar9 + (int)uVar18;
    if (((iVar11 <= (int)uVar2 && (int)uVar2 < iVar11 + iVar19) && (-1 < (int)uVar2)) &&
       ((int)uVar2 < *(int *)((long)param_1 + 0xc))) {
      lVar16 = lStack_78;
      uVar7 = uStack_84;
      for (uVar14 = 0; uVar14 < uStack_6c; uVar14 = uVar14 + 1) {
        if ((((int)uVar13 <= (int)uVar7 && (int)uVar7 < (int)(uVar13 + iVar15)) && (-1 < (int)uVar7)
            ) && (((int)uVar7 < (int)param_1[1] &&
                  ((lVar17 = *param_1, lVar17 != 0 && ((int)uVar2 < *(int *)((long)param_1 + 0xc))))
                  ))) {
          uVar20 = (ulong)uStack_64;
          bVar5 = recovered_10008630(uVar7,uVar2,param_1[4],param_1[5]);
          if (bVar5) {
            lVar8 = lVar16 + uVar18 * uVar20;
            bVar4 = *(byte *)(lVar8 + 3);
            if (bVar4 != 0) {
              lVar12 = uVar18 * uVar20;
              pbVar1 = (byte *)(lVar17 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar2 +
                               (ulong)uVar7 * 4);
              if (bVar4 == 0xff) {
                *pbVar1 = *(byte *)(lVar16 + lVar12);
                pbVar1[1] = *(byte *)(lVar8 + 1);
                pbVar1[2] = *(byte *)(lVar8 + 2);
              }
              else {
                uVar10 = (uint)bVar4;
                uVar3 = uVar10 ^ 0xff;
                *pbVar1 = (byte)((uVar3 * *pbVar1 + *(byte *)(lVar16 + lVar12) * uVar10 + 0x7f) /
                                0xff);
                pbVar1[1] = (byte)((uVar3 * pbVar1[1] + *(byte *)(lVar8 + 1) * uVar10 + 0x7f) / 0xff
                                  );
                pbVar1[2] = (byte)((uVar3 * pbVar1[2] + *(byte *)(lVar8 + 2) * uVar10 + 0x7f) / 0xff
                                  );
              }
              pbVar1[3] = 0xff;
            }
          }
        }
        uVar7 = uVar7 + 1;
        lVar16 = lVar16 + 4;
      }
      uVar7 = uStack_68;
    }
  }
  recovered_1000501c(lStack_78);
  return;
}

#undef lStack_78
#undef uStack_84
#undef uStack_68
#undef uStack_6c
#undef uStack_64

#undef DAT_10010328
#define DAT_10010328 (*(char *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x79a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080e4
 */

undefined4 recovered_100080e4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    return *(undefined4 *)(param_1 + 0x2c);
  }
  uVar1 = DAT_10010330;
  if (DAT_10010328 == '\0') {
    uVar1 = 0x202020;
  }
  return uVar1;
}

#undef DAT_10010328
#undef DAT_10010330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000811c
 */

void recovered_1000811c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint128 auVar22;

  auVar22 = recovered_1000800c(param_3,param_4,*(undefined8 *)(param_2 + 0x40),
                               *(undefined8 *)(param_2 + 0x48));
  iVar5 = recovered_10007f7c(param_2);
  iVar14 = PF_PART4(auVar22, 0);
  iVar8 = PF_PART4(auVar22, 4);
  iVar20 = iVar14;
  if (param_5 == 0) {
    iVar20 = iVar8;
  }
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (uVar10 = (ulong)*(uint *)(param_2 + 0x20), *(uint *)(param_2 + 0x20) != 0)) {
    lVar15 = 0;
    iVar11 = 0;
    uVar17 = PF_PART4(auVar22, 8);
    uVar21 = PF_PART4(auVar22, 12);
    uVar12 = CONCAT44(uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU),
                      uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
    for (uVar16 = 0; uVar16 < uVar10; uVar16 = uVar16 + 1) {
      if (*(int *)(*(long *)(param_2 + 0x18) + lVar15) == 4) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar7 = recovered_10007148((int *)(*(long *)(param_2 + 0x18) + lVar15),uVar12);
        iVar6 = (int)uVar7;
        if (param_5 == 0) {
          iVar6 = (int)((ulong)uVar7 >> 0x20);
        }
        iVar5 = iVar5 + iVar6;
        uVar10 = (ulong)*(uint *)(param_2 + 0x20);
      }
      lVar15 = lVar15 + 0x60;
    }
    if (iVar11 == 0) {
      uVar19 = 0;
    }
    else {
      uVar1 = uVar17;
      if (param_5 == 0) {
        uVar1 = uVar21;
      }
      uVar19 = 0;
      if (iVar11 != 0) {
        uVar19 = (int)(uVar1 - iVar5 & ((int)(uVar1 - iVar5) >> 0x1f ^ 0xffffffffU)) / iVar11;
      }
    }
    lVar15 = 0;
    uVar16 = 0;
    uVar1 = uVar19;
    uVar4 = uVar21;
    if (param_5 == 0) {
      uVar1 = uVar17;
      uVar4 = uVar19;
    }
    for (; uVar16 < uVar10; uVar16 = uVar16 + 1) {
      lVar18 = *(long *)(param_2 + 0x18);
      uVar7 = recovered_10007148((int *)(lVar18 + lVar15),uVar12);
      iVar5 = *(int *)(lVar18 + lVar15);
      uVar13 = (uint)((ulong)uVar7 >> 0x20);
      uVar2 = uVar1;
      uVar3 = uVar4;
      if (iVar5 != 4) {
        uVar2 = (uint)uVar7;
        uVar3 = uVar13;
      }
      uVar9 = uVar19;
      if (param_5 == 0) {
        iVar11 = *(int *)(param_2 + 0x28);
        uVar3 = uVar17;
        if (iVar11 != 3) {
          uVar3 = uVar2;
        }
        if (iVar5 != 4) {
          uVar9 = uVar13;
        }
        uVar7 = CONCAT44(uVar9,uVar3);
        iVar5 = (iVar14 + uVar17) - uVar2;
        if ((int)uVar17 <= (int)uVar3 || iVar11 != 2) {
          iVar5 = iVar14;
        }
        if (iVar11 == 1 && (int)uVar3 < (int)uVar17) {
          iVar5 = (int)(uVar17 - uVar2) / 2 + iVar14;
        }
        iVar11 = iVar20;
      }
      else {
        if (iVar5 != 4) {
          uVar9 = (uint)uVar7;
        }
        iVar5 = *(int *)(param_2 + 0x28);
        uVar2 = uVar21;
        if (iVar5 != 3) {
          uVar2 = uVar3;
        }
        uVar7 = CONCAT44(uVar2,uVar9);
        iVar11 = (iVar8 + uVar21) - uVar3;
        if ((int)uVar21 <= (int)uVar2 || iVar5 != 2) {
          iVar11 = iVar8;
        }
        if (iVar5 == 1 && (int)uVar2 < (int)uVar21) {
          iVar11 = (int)(uVar21 - uVar3) / 2 + iVar8;
        }
        iVar5 = iVar20;
      }
      iVar20 = *(int *)(param_2 + 0x24) + iVar20 + uVar9;
      recovered_100075fc(param_1,(int *)(lVar18 + lVar15),CONCAT44(iVar11,iVar5),uVar7);
      uVar10 = (ulong)*(uint *)(param_2 + 0x20);
      lVar15 = lVar15 + 0x60;
    }
  }
  return;
}


#define lStack_78 (*(long *)(pf_stack_frame + 40))
#define uStack_84 (*(uint *)(pf_stack_frame + 28))
#define uStack_68 (*(uint *)(pf_stack_frame + 56))
#define uStack_6c (*(uint *)(pf_stack_frame + 52))
#define uStack_64 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008380
 */

void recovered_10008380(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                       ,undefined8 param_6,int param_7,int param_8)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;

  recovered_10001618(&lStack_78,0,0x18);
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  iVar15 = (int)param_3;
  iVar19 = (int)((ulong)param_3 >> 0x20);
  if (iVar15 < 1 || iVar19 < 1) {
    return;
  }
  uVar6 = recovered_10007fa0(param_4,param_6,(ulong)(param_5 << 8 | 0xff),&lStack_78);
  if ((int)uVar6 == 0) {
    return;
  }
  if (lStack_78 == 0) {
    return;
  }
  iVar11 = (int)((ulong)param_2 >> 0x20);
  uVar13 = (uint)param_2;
  if ((param_8 == 0) || (iVar9 = iVar15 + -2, (int)uStack_6c < iVar9)) {
    uStack_84 = uVar13;
    if (param_7 == 2) {
      iVar9 = iVar15;
      if (iVar15 <= (int)uStack_6c) goto LAB_1000847c;
      goto LAB_10008474;
    }
    if ((param_7 != 1) || (iVar15 - uStack_6c == 0 || iVar15 < (int)uStack_6c)) goto LAB_1000847c;
    uStack_84 = (int)(iVar15 - uStack_6c) / 2 + uVar13;
  }
  else {
LAB_10008474:
    uStack_84 = (uVar13 + iVar9) - uStack_6c;
  }
LAB_1000847c:
  iVar9 = iVar11;
  if (iVar19 - uStack_68 != 0 && (int)uStack_68 <= iVar19) {
    iVar9 = (int)(iVar19 - uStack_68) / 2 + iVar11;
  }
  uVar7 = uStack_68;
  for (uVar18 = 0; uVar18 < uVar7; uVar18 = uVar18 + 1) {
    uVar2 = iVar9 + (int)uVar18;
    if (((iVar11 <= (int)uVar2 && (int)uVar2 < iVar11 + iVar19) && (-1 < (int)uVar2)) &&
       ((int)uVar2 < *(int *)((long)param_1 + 0xc))) {
      lVar16 = lStack_78;
      uVar7 = uStack_84;
      for (uVar14 = 0; uVar14 < uStack_6c; uVar14 = uVar14 + 1) {
        if ((((int)uVar13 <= (int)uVar7 && (int)uVar7 < (int)(uVar13 + iVar15)) && (-1 < (int)uVar7)
            ) && (((int)uVar7 < (int)param_1[1] &&
                  ((lVar17 = *param_1, lVar17 != 0 && ((int)uVar2 < *(int *)((long)param_1 + 0xc))))
                  ))) {
          uVar20 = (ulong)uStack_64;
          bVar5 = recovered_10008630(uVar7,uVar2,param_1[4],param_1[5]);
          if (bVar5) {
            lVar8 = lVar16 + uVar18 * uVar20;
            bVar4 = *(byte *)(lVar8 + 3);
            if (bVar4 != 0) {
              lVar12 = uVar18 * uVar20;
              pbVar1 = (byte *)(lVar17 + (ulong)*(uint *)(param_1 + 2) * (ulong)uVar2 +
                               (ulong)uVar7 * 4);
              if (bVar4 == 0xff) {
                *pbVar1 = *(byte *)(lVar16 + lVar12);
                pbVar1[1] = *(byte *)(lVar8 + 1);
                pbVar1[2] = *(byte *)(lVar8 + 2);
              }
              else {
                uVar10 = (uint)bVar4;
                uVar3 = uVar10 ^ 0xff;
                *pbVar1 = (byte)((uVar3 * *pbVar1 + *(byte *)(lVar16 + lVar12) * uVar10 + 0x7f) /
                                0xff);
                pbVar1[1] = (byte)((uVar3 * pbVar1[1] + *(byte *)(lVar8 + 1) * uVar10 + 0x7f) / 0xff
                                  );
                pbVar1[2] = (byte)((uVar3 * pbVar1[2] + *(byte *)(lVar8 + 2) * uVar10 + 0x7f) / 0xff
                                  );
              }
              pbVar1[3] = 0xff;
            }
          }
        }
        uVar7 = uVar7 + 1;
        lVar16 = lVar16 + 4;
      }
      uVar7 = uStack_68;
    }
  }
  recovered_1000501c(lStack_78);
  return;
}

#undef lStack_78
#undef uStack_84
#undef uStack_68
#undef uStack_6c
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

bool recovered_10008630(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)param_3;
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar1 = iVar2 + (int)param_4;
  return (((iVar2 <= param_1 && iVar3 <= param_2) && iVar1 != param_1) &&
         ((param_1 < iVar2 || param_2 < iVar3) || param_1 <= iVar1)) &&
         param_2 < iVar3 + (int)((ulong)param_4 >> 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000865c
 */

uint recovered_1000865c(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 100 - param_3;
  if (99 < param_3) {
    param_3 = 100;
  }
  return (param_3 * (param_2 & 0xff) + iVar1 * (param_1 & 0xff) + 0x32 & 0xffff) / 100 |
         (param_3 * (param_2 >> 8 & 0xff) + iVar1 * (param_1 >> 8 & 0xff) + 0x32 & 0xffff) / 100 <<
         8 | (param_3 * (param_2 >> 0x10 & 0xff) + iVar1 * (param_1 >> 0x10 & 0xff) + 0x32 & 0xffff)
             / 100 << 0x10;
}


/* Release 1.1 aggregate exports. */
PFUIInsets pf_ui_insets(int32_t all){return (PFUIInsets){all,all,all,all};}
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y){return (PFUIInsets){y,x,y,x};}
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l){return (PFUIInsets){t,r,b,l};}
PFUIView pf_ui_view_empty(void){PFUIView v;recovered_10006ea0(&v);return v;}
PFUIView pf_ui_text(uintptr_t text){PFUIView v=pf_ui_view_empty();v.type=1;v.text=text;return v;}
PFUIView pf_ui_rectangle(uint32_t color){PFUIView v=pf_ui_view_empty();v.type=2;v.background=color;v.flags=2;return v;}
PFUIView pf_ui_spacer(void){PFUIView v=pf_ui_view_empty();v.type=4;return v;}
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_text(text);v.type=3;v.callback=callback;v.userdata=userdata;return v;}
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_view_empty();v.type=5;v.children=children;v.count=count;v.spacing=spacing;return v;}
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_hstack(children,count,spacing);v.type=6;return v;}
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count){PFUIView v=pf_ui_hstack(children,count,0);v.type=7;return v;}
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding){v.padding=padding;return v;}
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color){v.foreground=color;v.flags|=1;return v;}
PFUIView pf_ui_view_background(PFUIView v,uint32_t color){v.background=color;v.flags|=2;return v;}
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height){if(width>=0){v.flags|=4;v.width=width;}if(height>=0){v.flags|=8;v.height=height;}return v;}
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale){v.scale=scale?scale:1;return v;}
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment){v.alignment=alignment<4?alignment:1;return v;}
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height){PFUIWindowSpec value;recovered_10005440(&value,title,width,height);return value;}
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value){s.transparency=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value){s.shadow=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount){s.mode=(uint32_t)mode+1<5?mode:-1;s.amount=amount<100?amount:100;return s;}
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s){s.mode=0;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s){s.mode=1;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value){s.mode=2;s.amount=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value){s.mode=3;s.amount=value<100?value:100;return s;}

PFUIView pf_ui_text_field(uintptr_t text,uintptr_t capacity,int password,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_view_empty();v.type=8;v.text=text;v.text_capacity=capacity;v.alignment=0;v.callback=callback;v.userdata=userdata;if(password)v.flags|=16;return v;}

/* Release 1.1 service forwards. */
/* Explicit service wrappers preserve arguments across native tail calls. */
static uintptr_t pf_ui_service(uint32_t offset){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x280800U;
#endif
 if(api[0]!=0x50414d57U||!api[1]||api[2]<offset+4)return 0;
 return api[offset/4];
}
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b){uintptr_t fn=pf_ui_service(0xb0);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,a,b):0;}
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count){uintptr_t fn=pf_ui_service(0xac);return fn?((uint32_t(*)(void*,uint32_t,void*))fn)(records,capacity,count):0;}
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command){uintptr_t fn=pf_ui_service(0xf0);return fn?((uint32_t(*)(uint32_t,uint32_t,uint32_t))fn)(id,menu,command):0;}
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons,uint32_t flags){uintptr_t fn=pf_ui_service(0xfc);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,buttons,flags):0;}
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state){uintptr_t fn=pf_ui_service(0x100);return window&&*window&&state&&fn?((uint32_t(*)(uint32_t,void*))fn)(*window,state):0;}
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,14,10);}
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,1,1);}
