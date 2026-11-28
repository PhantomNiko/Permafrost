/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008060
#define DAT_10008060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2cfcU)))
#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000488
 */

void recovered_10000488(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  DAT_10008060 = 0;
  recovered_100004ec();
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008060
#undef DAT_10008064

#undef DAT_10008064
#define DAT_10008064 (*(int *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004b4
 */

void recovered_100004b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10008064;
      cVar1 = '\x01';
      { __typeof__(DAT_10008064) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10008064),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_10008064 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_10008064

#undef DAT_10008060
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cfcU)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d0cU)))
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
#define local_48 (*(ulong *)(pf_stack_frame + 1064))
#define auStack_458 (*(ulong (*)[139])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100004ec(void)

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
  if (((byte)DAT_10008060 & 1) == 0) {
    DAT_10008068 = 0;
    DAT_10008070 = 0;
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
      recovered_10002ab4(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_10008068 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002ab4(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_10008070 == 0) {
      DAT_10008070 = DAT_10008068;
    }
    PF_PART1(DAT_10008060, 0) = 1;
  }
  return;
}

#undef DAT_10008060
#undef DAT_10008068
#undef DAT_10008070
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

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000770
 */

bool recovered_10000770(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_100004b4();
  bVar1 = recovered_100007ac(param_1,param_2,param_3);
  DAT_10008064 = 0;
  return bVar1;
}

#undef DAT_10008064

#undef DAT_10008060
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cfcU)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d0cU)))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
#define local_61 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007ac
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100007ac(ulong *param_1,ulong *param_2,long param_3)

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
    if ((PF_PART1(DAT_10008060, 1) & 1) == 0) {
      PF_PART1(DAT_10008060, 1) = 1;
      recovered_100004ec();
      for (lVar10 = 0; lVar10 != param_3; lVar10 = lVar10 + 1) {
        plVar9 = (long *)param_1[lVar10];
        uVar3 = param_2[lVar10];
        plVar1 = (long *)((long)plVar9 + uVar3);
        if (CARRY8((ulong)plVar9,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)plVar9 < uVar3 || plVar1 <= plVar9) {
          PF_PART1(DAT_10008060, 1) = 0;
          return false;
        }
        if ((ulong)plVar9 >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)plVar9 >> 0x1a < 0x21) &&
             (recovered_10002bb8((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            PF_PART1(DAT_10008060, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x100008ac;
        }
        else {
          recovered_10002bb8((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            PF_PART1(DAT_10008060, 1) = 0;
            return false;
          }
joined_r0x100008ac:
          if ((local_61 & 1) == 0) {
            PF_PART1(DAT_10008060, 1) = 0;
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
            PF_PART1(DAT_10008060, 1) = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_10008068;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && plVar9 < plVar7) {
            PF_PART1(DAT_10008060, 1) = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_10008068;
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = *puVar5;
        puVar5 = (ulong *)(uVar3 + 8);
        uStack_70 = uVar6;
      } while (uVar3 != 0);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        recovered_10002ab4(*param_1,*param_2,&uStack_70);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_10008070 == 0) {
        DAT_10008070 = DAT_10008068;
      }
      PF_PART1(DAT_10008060, 1) = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_10008060
#undef DAT_10008068
#undef DAT_10008070
#undef uStack_70
#undef local_61

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009a8
 */

bool recovered_100009a8(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = param_2;
  uStack_18 = param_1;
  recovered_100004b4();
  bVar1 = recovered_100007ac(&uStack_18,&local_20,1);
  DAT_10008064 = 0;
  return bVar1;
}

#undef DAT_10008064
#undef local_20
#undef uStack_18

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e4
 */

ulong recovered_100009e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100004b4();
  recovered_100004ec();
  uVar1 = 0;
  for (plVar2 = &DAT_10008068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_10008064 = 0;
  return uVar1;
}

#undef DAT_10008064
#undef DAT_10008068

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a44
 */

long recovered_10000a44(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100004b4();
  recovered_100004ec();
  lVar1 = 0;
  for (plVar2 = &DAT_10008068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  DAT_10008064 = 0;
  return lVar1;
}

#undef DAT_10008064
#undef DAT_10008068

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a98
 */

ulong recovered_10000a98(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100004b4();
  recovered_100004ec();
  uVar1 = 0;
  for (plVar2 = &DAT_10008068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_10008064 = 0;
  return uVar1;
}

#undef DAT_10008064
#undef DAT_10008068

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae8
 */

long recovered_10000ae8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_100004b4();
  recovered_100004ec();
  lVar1 = 0;
  for (plVar2 = &DAT_10008068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  DAT_10008064 = 0;
  return lVar1;
}

#undef DAT_10008064
#undef DAT_10008068

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b2c
 */

void recovered_10000b2c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  recovered_10000b58(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008064

#undef DAT_10008068
#define DAT_10008068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d04U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b58
 */

ulong * recovered_10000b58(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_100004ec();
    puVar4 = DAT_10008068;
    puVar3 = DAT_10008068;
    if (DAT_10008070 != (ulong *)0x0) {
      puVar3 = DAT_10008070;
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
                if (uVar9 < uVar7) goto LAB_10000c08;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000c08:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000c44;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000c44:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000cec;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000ca0;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000ca0:
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
LAB_10000cec:
                        recovered_10002c08(puVar11,uVar5);
                        *(undefined1 *)(puVar11 + 3) = 0;
                        DAT_10008070 = DAT_10008068;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_10008070 = (ulong *)puVar11[1];
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

#undef DAT_10008068
#undef DAT_10008070

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d14
 */

void recovered_10000d14(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  recovered_10000b58(param_1,(ulong *)0x0,param_2);
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008064

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d4c
 */

ulong * recovered_10000d4c(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_100004b4();
  if (param_3 < param_2) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000b58(param_1,param_2,param_3);
  }
  DAT_10008064 = 0;
  return puVar1;
}

#undef DAT_10008064

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

void recovered_10000d90(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  recovered_10000db8(param_1);
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008064

#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db8
 */

void recovered_10000db8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_100004ec();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002c5c(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002c5c(puVar2);
      puVar1 = puVar2;
    }
    DAT_10008070 = puVar1;
  }
  return;
}

#undef DAT_10008070

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d00U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e2c
 */

ulong * recovered_10000e2c(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;

  recovered_100004b4();
  if (param_1 == (ulong *)0x0) {
    puVar2 = recovered_10000b58(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10008064 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000db8((long)param_1);
    DAT_10008064 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10008064 = 0;
    return (ulong *)0x0;
  }
  recovered_100004ec();
  uVar7 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar2 = param_1 + -4;
  uVar3 = *puVar2;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7 - 1) {
      DAT_10008064 = 0;
      return (ulong *)0x0;
    }
    if (uVar3 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar3) {
        DAT_10008064 = 0;
        return (ulong *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < param_2) {
      DAT_10008064 = 0;
      return (ulong *)0x0;
    }
    uVar1 = recovered_10002c08(puVar2,uVar7);
    if ((int)uVar1 == 0) {
      DAT_10008064 = 0;
      return param_1;
    }
    DAT_10008064 = 0;
    DAT_10008070 = param_1[-3];
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
      if (0xffffffffffffffdf < uVar4) goto LAB_10010124;
    }
    else if (0xffffffffffffffb0 < param_2) goto LAB_10010124;
    do {
      uVar3 = *puVar2;
      if (uVar7 <= uVar3) goto LAB_10000f58;
      uVar3 = recovered_10002c7c(puVar2);
    } while ((uVar3 & 1) != 0);
    uVar3 = *puVar2;
LAB_10000f58:
    if (uVar7 <= uVar3) {
      uVar1 = recovered_10002c08(puVar2,uVar7);
      if ((int)uVar1 != 0) {
        DAT_10008070 = param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10008064 = 0;
      return param_1;
    }
  }
  else {
LAB_10010124:
    puVar2 = recovered_10000b58(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_100012ac((undefined1 *)puVar2,(undefined1 *)param_1,uVar3);
      recovered_10000db8((long)param_1);
      DAT_10008064 = 0;
      return puVar2;
    }
  }
  DAT_10008064 = 0;
  return (ulong *)0x0;
}

#undef DAT_10008064
#undef DAT_10008070

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd4
 */

ulong recovered_10000fd4(ulong param_1,uint param_2)

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
 * Address: 0x10001018
 */

ulong recovered_10001018(ulong param_1,uint param_2)

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
 * Address: 0x10001064
 */

long recovered_10001064(long param_1,uint param_2)

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
 * Address: 0x100010b4
 */

/* WARNING: Removing unreachable block (ram,0x10001104) */

ulong recovered_100010b4(ulong param_1,ulong param_2)

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
 * Address: 0x100010bc
 */

ulong recovered_100010bc(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x1000111c
 */

undefined8 recovered_1000111c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_100010bc(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000113c
 */

long recovered_1000113c(ulong param_1,ulong param_2)

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
  lVar4 = recovered_100010bc(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000117c
 */

long recovered_1000117c(long param_1,long param_2)

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
  recovered_100010bc(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011c8
 */

void recovered_100011c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d0
 */

int recovered_100011d0(int param_1)

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
 * Address: 0x100011dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100011dc(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d04(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201084c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001220(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10002d04(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
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
 * Address: 0x10001260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001260(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d04(0x54);
  if ((bVar1) && (_DAT_82010854 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010854)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010854
#undef _DAT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ac
 */

void recovered_100012ac(undefined1 *param_1,undefined1 *param_2,ulong param_3)

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
 * Address: 0x10001384
 */

void recovered_10001384(undefined1 *param_1,undefined1 *param_2,ulong param_3)

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
      recovered_100012ac(param_1,param_2,param_3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001498
 */

void recovered_10001498(ulong *param_1,byte param_2,ulong param_3)

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
 * Address: 0x10001530
 */

void recovered_10001530(ulong *param_1,ulong param_2)

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
 * Address: 0x10001534
 */

void recovered_10001534(ulong *param_1,ulong param_2)

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
 * Address: 0x10001538
 */

char * recovered_10001538(long param_1,char param_2,long param_3)

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
 * Address: 0x1000155c
 */

int recovered_1000155c(byte *param_1,byte *param_2,ulong param_3)

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
        goto recovered_100016c4;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_100016c4;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_100016c4;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_100016c4;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_100016c4:
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
 * Address: 0x100016c4
 */

int recovered_100016c4(long param_1,long param_2)

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
 * Address: 0x100016f0
 */

bool recovered_100016f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001700
 */

bool recovered_10001700(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001710
 */

bool recovered_10001710(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001724
 */

bool recovered_10001724(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001740
 */

bool recovered_10001740(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001750
 */

bool recovered_10001750(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001760
 */

int recovered_10001760(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001774
 */

int recovered_10001774(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001788
 */

long recovered_10001788(long param_1)

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
 * Address: 0x100017ac
 */

int recovered_100017ac(byte *param_1,byte *param_2)

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
 * Address: 0x100017d4
 */

int recovered_100017d4(byte *param_1,byte *param_2)

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
 * Address: 0x100017d8
 */

void recovered_100017d8(long param_1,long param_2)

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
 * Address: 0x100017f0
 */

void recovered_100017f0(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;

  if (param_1 != (undefined1 *)0x0) {
    lVar1 = recovered_10001788((long)param_1);
    puVar2 = (undefined1 *)recovered_100011dc(lVar1 + 1);
    if (puVar2 != (undefined1 *)0x0) {
      recovered_100012ac(puVar2,param_1,lVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000182c
 */

char * recovered_1000182c(char *param_1,char param_2)

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
 * Address: 0x10001854
 */

long recovered_10001854(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_1000182c(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001894
 */

long recovered_10001894(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_1000182c(param_2,*(char *)(param_1 + lVar2)), pcVar1 == (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d4
 */

char * recovered_100018d4(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_1000182c(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001914
 */

char * recovered_10001914(char *param_1,char *param_2)

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


#undef DAT_100053f0
#define DAT_100053f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001950
 */

undefined * recovered_10001950(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100053f0;
}

#undef DAT_100053f0

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2c9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000195c
 */

undefined ** recovered_1000195c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10008000;
}

#undef PTR_DAT_10008000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001968
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001968(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10001498(&uStack_38,0,0x18);
  bVar1 = recovered_10002d04(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(&uStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef local_30
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e0
 */

double recovered_100019e0(double param_1,uint param_2)

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
 * Address: 0x10001a14
 */

uint128 recovered_10001a14(double param_1,int *param_2)

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
 * Address: 0x10001a88
 */

uint128 recovered_10001a88(double param_1,double param_2)

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
 * Address: 0x10001aac
 */

uint128 recovered_10001aac(double param_1,double param_2)

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
 * Address: 0x10001b0c
 */

uint128 recovered_10001b0c(double param_1)

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
 * Address: 0x10001b28
 */

uint128 recovered_10001b28(double param_1)

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
 * Address: 0x10001b54
 */

uint128 recovered_10001b54(double param_1)

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


#undef DAT_10005370
#define DAT_10005370 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b90
 */

uint128 recovered_10001b90(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10005370 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10005370

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c3c
 */

long recovered_10001c3c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10005378
#define DAT_10005378 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c50
 */

uint128 recovered_10001c50(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001ca4(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10005378);
  return auVar1;
}

#undef DAT_10005378

#undef DAT_10005380
#define DAT_10005380 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10005388
#define DAT_10005388 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10005390
#define DAT_10005390 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10005398
#define DAT_10005398 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca4
 */

void recovered_10001ca4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10005380 < param_1; param_1 = param_1 + DAT_10005398) {
  }
  for (; param_1 < DAT_10005388; param_1 = param_1 + DAT_10005390) {
  }
  return;
}

#undef DAT_10005380
#undef DAT_10005388
#undef DAT_10005390
#undef DAT_10005398

#undef DAT_100053a0
#define DAT_100053a0 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce8
 */

uint128 recovered_10001ce8(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001ca4(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100053a0;
  return auVar1;
}

#undef DAT_100053a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d34
 */

uint128 recovered_10001d34(double param_1)

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
 * Address: 0x10001d44
 */

ulong recovered_10001d44(double param_1)

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
 * Address: 0x10001da4
 */

ulong recovered_10001da4(double param_1)

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
 * Address: 0x10001df4
 */

void recovered_10001df4(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e1c
 */

uint128 recovered_10001e1c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if ((long)param_1 < 0) {
    recovered_10001df4(-param_1);
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
 * Address: 0x10001e40
 */

float recovered_10001e40(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e74
 */

void recovered_10001e74(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001a14((double)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e8c
 */

float recovered_10001e8c(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100019e0((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ea4
 */

void recovered_10001ea4(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001aac((double)param_1,(double)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

float recovered_10001ec0(float param_1)

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
 * Address: 0x10001ee4
 */

void recovered_10001ee4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b28((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001efc
 */

uint128 recovered_10001efc(double param_1)

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
 * Address: 0x10001f24
 */

void recovered_10001f24(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001efc((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f3c
 */

void recovered_10001f3c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b54((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f54
 */

void recovered_10001f54(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b90((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f6c
 */

long recovered_10001f6c(double param_1)

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
 * Address: 0x10001f80
 */

void recovered_10001f80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c50((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f98
 */

void recovered_10001f98(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001ce8((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fb0
 */

float recovered_10001fb0(float param_1)

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
 * Address: 0x10001fc0
 */

long recovered_10001fc0(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10002058;
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
      goto LAB_10002084;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10002084;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10002084;
    }
LAB_10002058:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10002084:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_100020c4((uint)*pbVar4);
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
 * Address: 0x100020c4
 */

uint recovered_100020c4(int param_1)

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
 * Address: 0x100020f4
 */

long recovered_100020f4(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_100021d8;
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
      goto LAB_100021d8;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100021d8;
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
LAB_100021d8:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_100020c4((uint)*pbVar6);
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
 * Address: 0x10002218
 */

uint128 recovered_10002218(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_100019e0(dVar12,iVar9 * iVar6);
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
 * Address: 0x100023a8
 */

void recovered_100023a8(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002218(param_1,param_2);
  return;
}


#undef str_100053f2
#define str_100053f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c0
 */

int recovered_100023c0(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_10002430:
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
      goto LAB_1000245c;
    }
    goto LAB_10002460;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x100024f0;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_100024d8;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_100024d8;
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
  goto LAB_100027b8;
LAB_100024d8:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_10002500:
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
LAB_100025ec:
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
      goto LAB_100025ec;
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
      goto LAB_1000245c;
    }
    break;
  case 100:
  case 0x69:
code_r0x1000270c:
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
LAB_100027a8:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x100027b0:
    uVar6 = 0;
LAB_100027b4:
    recovered_100029a0((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_100027b8;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002a40((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x95U));
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
      recovered_100029a0((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
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
    goto LAB_100027b8;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002a40((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0xc3U));
      uVar7 = 0x10;
      goto code_r0x100027b0;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_100053f2;
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
      goto LAB_100027b8;
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
      goto LAB_100027a8;
    case 0x78:
code_r0x100026c8:
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
      goto LAB_100027b4;
    default:
      if (bVar9 == 0x49) goto code_r0x1000270c;
      if (bVar9 == 0x58) goto code_r0x100026c8;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_1000245c:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10002460:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_100027b8:
  param_3 = pbVar8 + 1;
  goto LAB_10002430;
code_r0x100024f0:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_10002500;
}

#undef str_100053f2
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002964
 */

void recovered_10002964(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10005405
#define str_10005405 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1U)))
#undef str_10005416
#define str_10005416 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2U)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a0
 */

void recovered_100029a0(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10005405;
  if (param_6 == 0) {
    pcVar1 = str_10005416;
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
    recovered_10002964(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_10005405
#undef str_10005416
#undef acStack_80

#undef str_100053f2
#define str_100053f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

void recovered_10002a40(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_100053f2;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002964(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100053f2

#define uStack0000000000000000 (*(undefined1 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a8c
 */

int recovered_10002a8c(byte *param_1,ulong param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100023c0(param_1,param_2,param_3,(double *)&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_10008060
#define DAT_10008060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2cfcU)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab4
 */

void recovered_10002ab4(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_10002b38(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_10008060;
      if (DAT_10008068 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 4) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_10008070 == (long *)0x0) {
        DAT_10008070 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_10008060
#undef DAT_10008068
#undef DAT_10008070

#undef DAT_10008060
#define DAT_10008060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2cfcU)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d04U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b38
 */

void recovered_10002b38(ulong param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_10008060;
      if (DAT_10008068 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 4) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10008070 == (long *)0x0) {
        DAT_10008070 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_10008060
#undef DAT_10008068
#undef DAT_10008070

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb8
 */

void recovered_10002bb8(ulong param_1,ulong param_2,undefined1 *param_3)

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
 * Address: 0x10002c08
 */

undefined8 recovered_10002c08(ulong *param_1,long param_2)

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
 * Address: 0x10002c5c
 */

void recovered_10002c5c(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002c7c(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2d0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c7c
 */

undefined8 recovered_10002c7c(ulong *param_1)

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
      if (DAT_10008070 == puVar2) {
        DAT_10008070 = param_1;
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

#undef DAT_10008070

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
 * Address: 0x10002d04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002d04(int param_1)

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

#undef DAT_100053e0
#define DAT_100053e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1000554a
#define DAT_1000554a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e6U)))
#undef DAT_1000575b
#define DAT_1000575b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
#undef DAT_100059ad
#define DAT_100059ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x649U)))
#undef UNK_100053e8
#define UNK_100053e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef _DAT_100053e0
#define _DAT_100053e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000542a
#define str_1000542a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_1000543b
#define str_1000543b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd7U)))
#undef str_10005442
#define str_10005442 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_1000544a
#define str_1000544a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6U)))
#undef str_10005455
#define str_10005455 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1U)))
#undef str_10005473
#define str_10005473 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#undef str_1000547c
#define str_1000547c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x118U)))
#undef str_10005484
#define str_10005484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_100054c3
#define str_100054c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_100054ca
#define str_100054ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_10005526
#define str_10005526 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_1000554d
#define str_1000554d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_1000556c
#define str_1000556c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_10005597
#define str_10005597 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x233U)))
#undef str_100055c9
#define str_100055c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x265U)))
#undef str_100055f8
#define str_100055f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
#undef str_10005618
#define str_10005618 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b4U)))
#undef str_1000564f
#define str_1000564f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#undef str_10005693
#define str_10005693 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32fU)))
#undef str_100056b8
#define str_100056b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x354U)))
#undef str_100056dc
#define str_100056dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x378U)))
#undef str_100056f8
#define str_100056f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x394U)))
#undef str_10005721
#define str_10005721 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bdU)))
#undef str_10005752
#define str_10005752 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eeU)))
#undef str_10005760
#define str_10005760 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fcU)))
#undef str_10005773
#define str_10005773 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_10005797
#define str_10005797 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x433U)))
#undef str_100057b9
#define str_100057b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x455U)))
#undef str_100057d7
#define str_100057d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x473U)))
#undef str_1000580b
#define str_1000580b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a7U)))
#undef str_10005828
#define str_10005828 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_10005847
#define str_10005847 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e3U)))
#undef str_10005873
#define str_10005873 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50fU)))
#undef str_10005892
#define str_10005892 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52eU)))
#undef str_100058bd
#define str_100058bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x559U)))
#undef str_100058e9
#define str_100058e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x585U)))
#undef str_10005915
#define str_10005915 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b1U)))
#undef str_10005935
#define str_10005935 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d1U)))
#undef str_1000596a
#define str_1000596a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x606U)))
#undef str_10005983
#define str_10005983 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61fU)))
#undef str_100059b2
#define str_100059b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64eU)))
#undef str_100059e2
#define str_100059e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67eU)))
#undef str_100059fe
#define str_100059fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69aU)))
#undef str_10005a28
#define str_10005a28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c4U)))
#undef str_10005a54
#define str_10005a54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f0U)))
#undef str_10005a6d
#define str_10005a6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x709U)))
#undef str_10005a8c
#define str_10005a8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x728U)))
#undef str_10005aa4
#define str_10005aa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x740U)))
#undef str_10005ada
#define str_10005ada (*(char (*)[1])(((uintptr_t)pf_module_state + 0x776U)))
#undef str_10005aff
#define str_10005aff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79bU)))
#undef str_10005b4c
#define str_10005b4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e8U)))
#undef str_10005b84
#define str_10005b84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x820U)))
#undef str_10005ba6
#define str_10005ba6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x842U)))
#undef str_10005bdb
#define str_10005bdb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x877U)))
#undef str_10005c18
#define str_10005c18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b4U)))
#undef uRam00000000100053e8
#define uRam00000000100053e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#define local_108 (*(byte * *)(pf_stack_frame + 104))
#define pcStack_158 (*(char * *)(pf_stack_frame + 24))
#define uStack_150 (*(ulong *)(pf_stack_frame + 32))
#define uStack_138 (*(ulong *)(pf_stack_frame + 56))
#define lStack_130 (*(long *)(pf_stack_frame + 64))
#define plStack_110 (*(long * *)(pf_stack_frame + 96))
#define uStack_100 (*(uint *)(pf_stack_frame + 112))
#define uStack_fc (*(uint *)(pf_stack_frame + 116))
#define pbStack_f8 (*(byte * *)(pf_stack_frame + 120))
#define pbStack_f0 (*(byte * *)(pf_stack_frame + 128))
#define auStack_e8 (*(ulong (*)[29])(pf_stack_frame + 136))
#define pcStack_d8 (*(char * *)(pf_stack_frame + 152))
#define uStack_d0 (*(ulong *)(pf_stack_frame + 160))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 168))
#define pbStack_c0 (*(byte * *)(pf_stack_frame + 176))
#define uStack_b8 (*(ulong *)(pf_stack_frame + 184))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 192))
#define uStack_a7 (*(undefined2 *)(pf_stack_frame + 201))
#define bStack_a5 (*(byte *)(pf_stack_frame + 203))
#define uStack_a4 (*(undefined8 *)(pf_stack_frame + 204))
#define uStack_9c (*(undefined8 *)(pf_stack_frame + 212))
#define uStack_94 (*(uint *)(pf_stack_frame + 220))
#define uStack_90 (*(uint *)(pf_stack_frame + 224))
#define abStack_8c (*(byte (*)[140])(pf_stack_frame + 228))
#define uStack_88 (*(ulong *)(pf_stack_frame + 232))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 240))
#define uStack_78 (*(ulong *)(pf_stack_frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e9c
 */

/* WARNING: Removing unreachable block (ram,0x10003720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002e9c(int param_1,long param_2)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  long *plVar7;
  ushort uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  char *path;
  long *plVar19;
  ulong *puVar20;
  ulong *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined1 *puVar24;
  ulong uVar25;
  short sVar26;
  long lVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  byte *pbVar35;
  byte *pbVar36;
  ulong uVar37;
  char *pcVar38;
  ulong uVar39;
  long lVar40;
  byte *pbVar41;
  undefined1 *puVar42;

  pbVar35 = (byte *)0x0;
  local_108 = (byte *)0x0;
  pbVar36 = (byte *)0x0;
  pcVar38 = str_10005455;
  for (lVar40 = 1; (param_2 != 0 && (lVar40 < param_1)); lVar40 = lVar40 + 1) {
    pbVar41 = *(byte **)(param_2 + lVar40 * 8);
    if (pbVar41 == (byte *)0x0) {
      pcVar38 = str_1000542a;
      goto LAB_1000303c;
    }
    uVar15 = recovered_10001788((long)pbVar41);
    if (uVar15 < 6) goto LAB_1000303c;
    iVar11 = recovered_1000155c(pbVar41,(byte *)str_1000543b,6);
    if ((iVar11 == 0) && (pbVar36 == (byte *)0x0)) {
      pbVar36 = pbVar41 + 6;
    }
    else {
      if (uVar15 == 6) goto LAB_1000303c;
      iVar11 = recovered_1000155c(pbVar41,(byte *)str_10005442,7);
      if ((iVar11 == 0) && (pbVar35 == (byte *)0x0)) {
        pbVar35 = pbVar41 + 7;
      }
      else {
        if (((uVar15 < 10) ||
            (iVar11 = recovered_1000155c(pbVar41,(byte *)str_1000544a,10), iVar11 != 0)) ||
           (local_108 != (byte *)0x0)) goto LAB_1000303c;
        local_108 = pbVar41 + 10;
      }
    }
  }
  if (pbVar36 == (byte *)0x0) {
    pcVar38 = str_10005484;
LAB_1000303c:
    recovered_10004144(str_100054c3);
    recovered_10004144(pcVar38);
    recovered_10004144(str_100054ca);
    return 1;
  }
  pcVar38 = str_10005484;
  if ((((*pbVar36 == 0) || (pbVar35 == (byte *)0x0)) ||
      ((*pbVar35 == 0 || (local_108 == (byte *)0x0)))) ||
     ((iVar11 = recovered_100017ac(local_108,(byte *)str_10005473), iVar11 != 0 &&
      (iVar11 = recovered_100017ac(local_108,(byte *)str_1000547c), iVar11 != 0))))
  goto LAB_1000303c;
  pbStack_f8 = pbVar35;
  pbStack_f0 = pbVar36;
  uVar16 = recovered_10004184();
  uStack_100 = (uint)uVar16;
  uStack_fc = uStack_100;
  recovered_100041bc((char *)pbVar36,(int *)&uStack_fc,(long *)&pbStack_f0);
  recovered_100041bc((char *)pbVar35,(int *)&uStack_100,(long *)&pbStack_f8);
  pbVar35 = pbStack_f0;
  pbVar36 = pbStack_f8;
  uVar12 = uStack_fc;
  uVar13 = uStack_100;
  uVar15 = (ulong)uStack_100;
  uVar17 = (ulong)uStack_fc;
  if (uStack_fc == 0x7fffffff || uStack_100 == 0x7fffffff) {
    pcVar38 = str_10005526;
  }
  else {
    iVar11 = recovered_100017ac(local_108,(byte *)str_1000547c);
    if ((int)uVar12 < 0) {
      uVar17 = recovered_10004184();
    }
    if ((int)uVar13 < 0) {
      uVar15 = recovered_10004184();
    }
    uStack_a7 = 0;
    uVar18 = recovered_10004418(uVar17,(long)&uStack_a7 + 1);
    if (((int)uVar18 != 0) && (uVar18 = recovered_10004418(uVar15,&uStack_a7), (int)uVar18 != 0)) {
      bVar2 = PF_PART1(uStack_a7, 1);
      pcVar23 = recovered_1000449c((char *)pbVar35,(uint)PF_PART1(uStack_a7, 1));
      uVar8 = uStack_a7;
      uVar13 = (uint)(byte)uStack_a7;
      path = recovered_1000449c((char *)pbVar36,uVar13);
      pbStack_c0 = (byte *)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      pcStack_d8 = (char *)0x0;
      uStack_d0 = 0;
      pcVar38 = str_100055c9;
      uStack_c8 = 0;
      pbVar36 = (byte *)0x0;
      if ((pcVar23 != (char *)0x0) && (path != (char *)0x0)) {
        if (iVar11 == 0) {
          uVar16 = recovered_10004730(uVar17,pcVar23,&uStack_94);
          if ((int)uVar16 == 0) {
            pbVar36 = (byte *)0x0;
            pcVar38 = str_100056b8;
          }
          else {
            pcVar38 = (char *)(ulong)uStack_94;
            uVar17 = (ulong)uStack_90;
            auStack_e8[0] = 0;
            pcStack_d8 = pcVar38;
            uStack_d0 = uVar17;
            if (((abStack_8c[0] >> 1 & 1) == 0) &&
               (uVar16 = recovered_100047f8(pcVar38,uVar17,0xffffffffffffffff,auStack_e8),
               (int)uVar16 != 0)) {
              pbVar36 = (byte *)recovered_1000487c(auStack_e8[0]);
              pbStack_c0 = pbVar36;
              if (pbVar36 == (byte *)0x0) {
                pcVar38 = str_100056f8;
              }
              else {
                uVar16 = recovered_100047f8(pcVar38,uVar17,auStack_e8[0],&uStack_80);
                uVar18 = uStack_80;
                if ((int)uVar16 != 0) {
                  uVar12 = 0xffffffff;
                  uVar37 = 0x10;
                  uVar30 = 0;
                  do {
                    if (uVar18 <= uVar30) {
                      if (uVar37 == uVar17) {
                        if ((*(uint *)(pcVar38 + 0xc) ^ uVar12) != 0xffffffff) {
                          pcVar38 = str_10005721;
                          goto LAB_10003b6c;
                        }
                        if ((uVar30 < 8) ||
                           (iVar11 = recovered_1000155c(pbVar36,&DAT_100059ad,4), iVar11 != 0)) {
                          pcVar38 = str_100059b2;
                          goto LAB_10003b6c;
                        }
                        uVar17 = (ulong)*(uint *)(pbVar36 + 4);
                        if ((*(uint *)(pbVar36 + 4) == 0) || ((uVar30 - 8) / 0xd < uVar17)) {
                          pcVar38 = str_100059e2;
                          goto LAB_10003b6c;
                        }
                        puVar20 = (ulong *)recovered_1000487c(uVar17 * 0x28);
                        if (puVar20 != (ulong *)0x0) {
                          recovered_10001498(puVar20,0,uVar17 * 0x28);
                          uVar18 = 2;
                          goto LAB_10003c98;
                        }
                        pcVar38 = str_100059fe;
                        goto LAB_10003b6c;
                      }
                      break;
                    }
                    if (uVar17 <= uVar37) break;
                    bVar2 = pcVar38[uVar37];
                    uVar37 = uVar37 + 1;
                    for (uVar14 = 0; uVar14 != 8; uVar14 = uVar14 + 1) {
                      bVar3 = bVar2 >> (ulong)(uVar14 & 0x1f);
                      if (uVar18 == uVar30) {
                        uVar30 = uVar18;
                        if (bVar3 != 0) goto LAB_10003870;
                        break;
                      }
                      if ((bVar3 & 1) == 0) {
                        if (uVar17 - uVar37 < 2) goto LAB_10003870;
                        uVar6 = *(ushort *)(pcVar38 + uVar37);
                        uVar39 = (ulong)(byte)*(ushort *)(pcVar38 + uVar37) & 0xf;
                        uVar25 = uVar39 + 3;
                        if (uVar30 < (uVar6 >> 4) + 1 || uVar18 - uVar30 < uVar25)
                        goto LAB_10003870;
                        uVar28 = uVar37 + 2;
                        pbVar35 = pbVar36 + uVar30;
                        for (; uVar25 != 0; uVar25 = uVar25 - 1) {
                          bVar3 = pbVar35[(ulong)(uVar6 >> 4) ^ 0xffffffffffffffff];
                          *pbVar35 = bVar3;
                          uVar12 = recovered_10005018(uVar12,(uint)bVar3);
                          pbVar35 = pbVar35 + 1;
                        }
                        uVar30 = uVar30 + uVar39 + 3;
                      }
                      else {
                        if (uVar17 <= uVar37) goto LAB_10003870;
                        uVar28 = uVar37 + 1;
                        bVar3 = pcVar38[uVar37];
                        pbVar36[uVar30] = bVar3;
                        uVar12 = recovered_10005018(uVar12,(uint)bVar3);
                        uVar30 = uVar30 + 1;
                      }
                      uVar37 = uVar28;
                    }
                  } while( true );
                }
LAB_10003870:
                pcVar38 = str_10005721;
              }
            }
            else {
              pbVar36 = (byte *)0x0;
              pcVar38 = str_100056dc;
            }
          }
        }
        else {
          uVar18 = recovered_10001788((long)path);
          if (7 < uVar18) {
            lVar40 = 0;
            do {
              if (lVar40 == 8) goto LAB_1000335c;
              bVar3 = path[lVar40 + (uVar18 - 8)];
              uVar13 = bVar3 | 0x20;
              if (0x19 < bVar3 - 0x41U) {
                uVar13 = (uint)bVar3;
              }
              pbVar36 = (byte *)(str_10005752 + lVar40);
              lVar40 = lVar40 + 1;
            } while (uVar13 == *pbVar36);
          }
          lVar40 = recovered_10001788((long)path);
          if (0xffffffffffffcffd < lVar40 - 0x2ff9U) {
            recovered_100012ac(path + lVar40,str_10005752,9);
LAB_1000335c:
            iVar11 = recovered_10004638(uVar15,path,(uint *)auStack_e8);
            if (iVar11 == 0) {
              pcVar22 = pcVar23;
              pcVar38 = pcVar23;
              do {
                if (*pcVar38 == '\\') {
                  pcVar22 = pcVar38 + 1;
                }
                else if (*pcVar38 == '\0') goto LAB_100033a8;
                pcVar38 = pcVar38 + 1;
              } while( true );
            }
            pcVar38 = str_10005618;
            goto LAB_10003b64;
          }
          pcVar38 = str_100055f8;
          pbVar36 = (byte *)0x0;
        }
      }
      goto LAB_10003b6c;
    }
    pcVar38 = str_10005597;
  }
  goto LAB_100031a0;
LAB_10003c98:
  if (uVar17 <= uVar18 >> 1) goto LAB_10003cb8;
  if ((long)uVar18 < 0) goto LAB_10010734;
  uVar18 = uVar18 << 1;
  goto LAB_10003c98;
LAB_10003cb8:
  if (uVar18 >> 0x3d == 0) {
    puVar21 = (ulong *)recovered_1000487c(uVar18 << 3);
    if (puVar21 == (ulong *)0x0) {
      recovered_100048c0(puVar20);
      pcVar38 = str_10005a28;
    }
    else {
      recovered_10001498(puVar21,0,uVar18 << 3);
      pcStack_158 = recovered_10005044(uVar15,(long)path,0);
      uStack_150 = 0;
      uStack_138 = 8;
      do {
        if ((pcStack_158 != (char *)0x0) || (uVar17 <= uStack_150)) goto LAB_10003ffc;
        if (uVar30 < uStack_138 || uVar30 - uStack_138 < 0xc) {
          pcStack_158 = str_10005a54;
          goto LAB_10003ffc;
        }
        puVar29 = puVar20 + uStack_150 * 5;
        pbVar35 = pbVar36 + uStack_138;
        iVar11 = *(int *)pbVar35;
        *(int *)(puVar29 + 3) = iVar11;
        uVar37 = (ulong)*(uint *)(pbVar35 + 4);
        *(uint *)(puVar29 + 2) = *(uint *)(pbVar35 + 4);
        uVar12 = *(uint *)(pbVar35 + 8);
        *(uint *)((long)puVar29 + 0x14) = uVar12;
        uStack_138 = uStack_138 + 0xc;
        if (((1 < iVar11 - 1U) ||
            (((iVar11 == 2 && (uVar12 != 0)) || (uVar30 - uStack_138 < uVar37)))) ||
           ((uVar30 - uStack_138) - uVar37 < (ulong)uVar12)) {
LAB_10003ff0:
          pcStack_158 = str_10005a6d;
          goto LAB_10003ffc;
        }
        pbVar35 = pbVar36 + uStack_138;
        cVar10 = recovered_10004ab4((long)pbVar35,uVar37);
        if (cVar10 == '\0') goto LAB_10003ff0;
        *puVar29 = (ulong)pbVar35;
        puVar29[1] = (ulong)(pbVar35 + uVar37);
        uStack_138 = uStack_138 + uVar37 + (ulong)uVar12;
        uVar25 = recovered_10005114((long)pbVar35,uVar37,(long)puVar20,(long)puVar21,uVar18,
                                    uVar13 ^ 1);
        if (puVar21[uVar25] != 0) {
          pcStack_158 = str_10005a8c;
          goto LAB_10003ffc;
        }
        uVar39 = uVar37;
        do {
          if (uVar39 == 0) {
            if (uStack_150 == 0) goto LAB_10003e4c;
            pcStack_158 = str_10005ada;
            goto LAB_10003ffc;
          }
          lVar40 = uVar39 - 1;
          uVar39 = uVar39 - 1;
        } while (pbVar35[lVar40] != 0x5c);
        uVar39 = recovered_10005114((long)pbVar35,uVar39,(long)puVar20,(long)puVar21,uVar18,
                                    uVar13 ^ 1);
        if ((puVar21[uVar39] == 0) || ((int)puVar20[puVar21[uVar39] * 5 + -2] != 2)) {
          pcStack_158 = str_10005aa4;
          goto LAB_10003ffc;
        }
LAB_10003e4c:
        uStack_150 = uStack_150 + 1;
        puVar21[uVar25] = uStack_150;
        pcVar38 = (char *)recovered_1000487c(uVar37 + 1);
        if (pcVar38 == (char *)0x0) {
LAB_10003fcc:
          puVar29[4] = 0;
LAB_10003fd4:
          pcStack_158 = str_10005aff;
          goto LAB_10003ffc;
        }
        uVar39 = 0;
        for (uVar25 = 0; uVar25 < uVar37; uVar25 = uVar25 + 1) {
          bVar2 = pbVar35[uVar25];
          uVar12 = (uint)bVar2;
          if (((uVar8 & 1) == 0) && (bVar2 == 0x25)) {
            uVar14 = recovered_10004c9c((uint)(pbVar35 + uVar25)[1]);
            uVar25 = uVar25 + 2;
            bVar2 = pbVar35[uVar25];
            uVar12 = recovered_10004c9c((uint)bVar2);
            uVar12 = uVar12 | uVar14 << 4;
            uVar14 = (uint)bVar2;
          }
          else {
            uVar14 = uVar12;
          }
          if ((uVar8 & 1) == 0) {
            uVar1 = uVar12 & 0xff;
            if (0x1f < uVar1) {
              uVar4 = uVar1 - 0x22;
              if (uVar4 < 0x3b) {
                if ((ulong)uVar4 == 0x3a) {
                  if (uVar14 == 0x5c) goto LAB_10003f24;
                }
                else if ((1L << ((ulong)uVar4 & 0x3f) & 0x35002101U) == 0) goto LAB_10003f1c;
              }
              else {
LAB_10003f1c:
                if (uVar1 != 0x7c) goto LAB_10003f24;
              }
            }
            pcVar22 = pcVar38;
            goto LAB_10003fc8;
          }
LAB_10003f24:
          pcVar38[uVar39] = (char)uVar12;
          uVar39 = uVar39 + 1;
        }
        pcVar38[uVar39] = '\0';
        pcVar22 = recovered_10004f54(path,pcVar38,uVar39);
        recovered_100048c0(pcVar38);
        if ((pcVar22 == (char *)0x0) || (uVar13 == 0)) {
          puVar29[4] = (ulong)pcVar22;
          if (pcVar22 == (char *)0x0) goto LAB_10003fd4;
        }
        else {
          lVar40 = recovered_10001788((long)pcVar22);
          cVar10 = recovered_10004ab4((long)(pcVar22 + 1),lVar40 - 1);
          if (cVar10 == '\0') {
LAB_10003fc8:
            recovered_100048c0(pcVar22);
            goto LAB_10003fcc;
          }
          puVar29[4] = (ulong)pcVar22;
        }
        iVar11 = recovered_10004638(uVar15,pcVar22,(uint *)&uStack_80);
      } while ((iVar11 == 0) || (((int)puVar29[3] == 2 && (((byte)uStack_78 >> 1 & 1) != 0))));
      pcStack_158 = str_10005b4c;
LAB_10003ffc:
      pcVar38 = (char *)0x0;
      if (uStack_138 != uVar30) {
        pcVar38 = str_10005b84;
      }
      if (pcStack_158 == (char *)0x0) {
        if (uStack_138 == uVar30) {
          pcVar38 = recovered_10005044(uVar15,(long)path,1);
        }
      }
      else {
        pcVar38 = pcStack_158;
      }
      puVar29 = puVar20 + 4;
      for (uVar18 = 0; (pcVar38 == (char *)0x0 && (uVar18 < uVar17)); uVar18 = uVar18 + 1) {
        iVar11 = recovered_10004638(uVar15,(char *)*puVar29,(uint *)&uStack_80);
        if (iVar11 == 0) {
          if ((int)puVar29[-1] == 2) {
            uVar16 = recovered_100051f8(uVar15,*puVar29);
            pcVar38 = str_10005bdb;
            if ((int)uVar16 != 0) {
              pcVar38 = (char *)0x0;
            }
          }
          else {
            uVar16 = recovered_10004690(uVar15,*puVar29,puVar29[-3],
                                        (ulong)*(uint *)((long)puVar29 + -0xc));
            pcVar38 = str_10005c18;
            if ((int)uVar16 != 0) {
              pcVar38 = (char *)0x0;
            }
          }
        }
        else if (((int)puVar29[-1] == 2) && (((byte)uStack_78 >> 1 & 1) != 0)) {
          pcVar38 = (char *)0x0;
        }
        else {
          pcVar38 = str_10005ba6;
        }
        puVar29 = puVar29 + 5;
      }
      lVar40 = 0x20;
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        recovered_100048c0(*(undefined8 *)((long)puVar20 + lVar40));
        lVar40 = lVar40 + 0x28;
      }
      recovered_100048c0(puVar21);
      recovered_100048c0(puVar20);
    }
  }
  else {
LAB_10010734:
    recovered_100048c0(puVar20);
    pcVar38 = str_1000596a;
  }
  goto LAB_10003b6c;
LAB_100033a8:
  pcVar38 = &DAT_1000575b;
  if (*pcVar22 != '\0') {
    pcVar38 = pcVar22;
  }
  uVar18 = recovered_10001788((long)pcVar38);
  lVar40 = recovered_10004900((long)pcVar38,uVar18,(uint)bVar2);
  puVar24 = recovered_1000449c(pcVar23,(uint)bVar2);
  if ((lVar40 == 0) || (puVar24 == (undefined1 *)0x0)) {
    recovered_100048c0(lVar40);
    recovered_100048c0(puVar24);
    pcVar38 = str_10005760;
  }
  else {
    plVar19 = recovered_10004d48((int)uVar17,puVar24,lVar40);
    if (plVar19 == (long *)0x0) {
      pcVar38 = str_10005773;
    }
    else {
      uStack_88 = 0x31415a50;
      bVar9 = recovered_10004da4((long *)&pbStack_c0,(undefined1 *)&uStack_88,8);
      if (bVar9) {
        uVar13 = 0;
        plStack_110 = plVar19;
        for (plVar34 = plVar19; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
          recovered_10001498(&uStack_80,0,0xc);
          iVar11 = recovered_10004638((ulong)*(uint *)(plVar34 + 1),(char *)plVar34[2],
                                      (uint *)&uStack_80);
          uVar17 = uStack_78;
          if (iVar11 == 0) {
            pcVar38 = str_100057b9;
            goto LAB_100038b4;
          }
          uVar12 = (uint)uStack_78;
          uVar18 = recovered_10001788(plVar34[3]);
          cVar10 = recovered_10004ab4(plVar34[3],uVar18);
          if (cVar10 == '\0') {
            pcVar38 = str_100057d7;
            goto LAB_100038b4;
          }
          uVar14 = 1;
          if ((uVar17 & 2) != 0) {
            uVar14 = 2;
          }
          recovered_10004e8c((undefined1 *)&uStack_94,uVar14);
          recovered_10004e8c((undefined1 *)&uStack_90,(uint)uVar18);
          uVar14 = PF_PART4(uStack_80, 4);
          if ((uVar17 & 2) != 0) {
            uVar14 = 0;
          }
          recovered_10004e8c(abStack_8c,uVar14);
          if ((uVar12 >> 1 & 1) == 0) {
            uVar16 = recovered_10004730((ulong)*(uint *)(plVar34 + 1),plVar34[2],(uint *)&uStack_80)
            ;
            if ((int)uVar16 == 0) {
              pcVar38 = str_1000580b;
              goto LAB_100038b4;
            }
            puVar24 = (undefined1 *)(uStack_80 & 0xffffffff);
            if ((((byte)uStack_78 >> 1 & 1) != 0) ||
               ((PF_PART4(uStack_80, 4) != 0 && ((uint)uStack_80 == 0)))) {
              recovered_100048c0(puVar24);
              pcVar38 = str_10005828;
              goto LAB_100038b4;
            }
            recovered_10004e8c(abStack_8c,PF_PART4(uStack_80, 4));
            bVar9 = recovered_10004da4((long *)&pbStack_c0,(undefined1 *)&uStack_94,0xc);
            if ((!bVar9) ||
               (bVar9 = recovered_10004da4((long *)&pbStack_c0,(undefined1 *)plVar34[3],uVar18),
               !bVar9)) {
              recovered_100048c0(puVar24);
LAB_10003834:
              pcVar38 = str_10005847;
              goto LAB_100038b4;
            }
            bVar9 = recovered_10004da4((long *)&pbStack_c0,puVar24,uStack_80 >> 0x20);
            recovered_100048c0(puVar24);
            if (!bVar9) goto LAB_10003834;
          }
          else {
            bVar9 = recovered_10004da4((long *)&pbStack_c0,(undefined1 *)&uStack_94,0xc);
            if ((!bVar9) ||
               (bVar9 = recovered_10004da4((long *)&pbStack_c0,(undefined1 *)plVar34[3],uVar18),
               !bVar9)) goto LAB_10003834;
            uStack_9c = 0;
            uStack_a4 = 0;
            uVar16 = recovered_10004eac((ulong)*(uint *)(plVar34 + 1),plVar34[2],0,0,0,0,
                                        (long)&uStack_9c + 4,&uStack_9c);
            if ((int)uVar16 == 0) {
              pcVar38 = str_10005873;
              goto LAB_100038b4;
            }
            if (PF_PART4(uStack_9c, 4) == 0) {
              lVar40 = 0;
            }
            else {
              lVar40 = recovered_1000487c((ulong)PF_PART4(uStack_9c, 4) * 0x28);
            }
            if ((uint)uStack_9c == 0) {
              lStack_130 = 0;
            }
            else {
              lStack_130 = recovered_1000487c(uStack_9c & 0xffffffff);
            }
            if ((PF_PART4(uStack_9c, 4) == 0) || (lVar40 != 0)) {
              if (((uint)uStack_9c != 0) && (lStack_130 == 0)) goto LAB_100035ac;
              uVar16 = recovered_10004eac((ulong)*(uint *)(plVar34 + 1),plVar34[2],lVar40,
                                          (ulong)PF_PART4(uStack_9c, 4),lStack_130,uStack_9c & 0xffffffff,
                                          (long)&uStack_a4 + 4,&uStack_a4);
              if ((int)uVar16 == 0) {
LAB_100035f4:
                bVar9 = false;
                pcVar38 = str_100058bd;
              }
              else {
                if (PF_PART4(uStack_a4, 4) != PF_PART4(uStack_9c, 4)) goto LAB_100035f4;
                if ((uint)uStack_9c < (uint)uStack_a4) goto LAB_100035f4;
                pcVar38 = (char *)0x0;
                bVar9 = true;
              }
            }
            else {
LAB_100035ac:
              bVar9 = false;
              pcVar38 = str_10005892;
            }
            uVar12 = 0;
            if (bVar9) {
              for (; uVar12 < PF_PART4(uStack_a4, 4); uVar12 = uVar12 + 1) {
                bStack_a5 = 0;
                plVar33 = (long *)(lVar40 + (ulong)uVar12 * 0x28);
                if ((((*plVar33 == 0) || (plVar33[1] == 0)) || (1 < (int)plVar33[3] - 1U)) ||
                   (uVar17 = recovered_10004418((ulong)*(uint *)((long)plVar33 + 0x1c),&bStack_a5),
                   (int)uVar17 == 0)) {
                  pcVar38 = str_100058e9;
                  break;
                }
                lVar27 = *plVar33;
                uVar17 = recovered_10001788(lVar27);
                bVar2 = bStack_a5;
                puVar24 = (undefined1 *)recovered_10004900(lVar27,uVar17,(uint)bStack_a5);
                pbVar36 = recovered_1000449c((char *)plVar33[1],(uint)bVar2);
                if (puVar24 == (undefined1 *)0x0) {
                  puVar42 = (undefined1 *)0x0;
                }
                else {
                  puVar42 = (undefined1 *)plVar34[3];
                  uVar17 = recovered_10001788((long)puVar24);
                  puVar42 = recovered_10004f54(puVar42,puVar24,uVar17);
                }
                recovered_100048c0(puVar24);
                if ((pbVar36 == (byte *)0x0) || (puVar42 == (undefined1 *)0x0)) {
                  recovered_100048c0(pbVar36);
                  recovered_100048c0(puVar42);
                  pcVar38 = str_10005915;
                  break;
                }
                plVar7 = plVar19;
                if ((int)plVar33[3] == 2) {
                  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
                    if ((*(int *)(plVar7 + 1) == *(int *)((long)plVar33 + 0x1c)) &&
                       (iVar11 = recovered_100017ac((byte *)plVar7[2],pbVar36), iVar11 == 0)) {
                      recovered_100048c0(pbVar36);
                      recovered_100048c0(puVar42);
                      pcVar38 = str_10005935;
                      goto LAB_10003744;
                    }
                  }
                }
                plVar33 = recovered_10004d48(*(undefined4 *)((long)plVar33 + 0x1c),pbVar36,puVar42);
                if (plVar33 == (long *)0x0) {
                  pcVar38 = str_10005773;
                  break;
                }
                pcVar38 = (char *)0x0;
                *plStack_110 = (long)plVar33;
                plStack_110 = plVar33;
              }
            }
LAB_10003744:
            recovered_100048c0(lVar40);
            recovered_100048c0(lStack_130);
            if (pcVar38 != (char *)0x0) goto LAB_100038b4;
          }
          bVar9 = 0xfffffffe < uVar13;
          uVar13 = uVar13 + 1;
          if (bVar9) {
            pcVar38 = str_1000596a;
            goto LAB_100038b4;
          }
        }
        recovered_10004e8c(pbStack_c0 + 4,uVar13);
        pcVar38 = (char *)0x0;
      }
      else {
        pcVar38 = str_10005797;
      }
LAB_100038b4:
      while( true ) {
        uVar17 = uStack_b8;
        pbVar36 = pbStack_c0;
        if (plVar19 == (long *)0x0) break;
        plVar34 = (long *)*plVar19;
        recovered_100048c0(plVar19[2]);
        recovered_100048c0(plVar19[3]);
        recovered_100048c0(plVar19);
        plVar19 = plVar34;
      }
      if (pcVar38 == (char *)0x0) {
        lVar40 = recovered_1000487c(0x10000);
        if (lVar40 == 0) {
          pcVar38 = str_10005983;
        }
        else {
          for (lVar27 = 0; lVar27 != 0x10000; lVar27 = lVar27 + 8) {
            *(undefined8 *)(lVar40 + lVar27) = 0xffffffffffffffff;
          }
          uStack_78 = uRam00000000100053e8;
          uStack_80 = _DAT_100053e0;
          bVar9 = recovered_10004da4((long *)&pcStack_d8,(undefined1 *)&uStack_80,0x10);
          if (bVar9) {
            uVar18 = 0;
            uVar13 = 0xffffffff;
            while( true ) {
              uVar30 = uStack_d0;
              pcVar38 = pcStack_d8;
              if (uVar17 <= uVar18) break;
              uStack_88 = uStack_88 & 0xffffffffffffff00;
              bVar9 = recovered_10004da4((long *)&pcStack_d8,(undefined1 *)&uStack_88,1);
              if (!bVar9) {
LAB_10003b38:
                bVar9 = false;
                pcVar38 = str_10005847;
                goto LAB_10003b44;
              }
              for (uVar12 = 0; uVar12 < 8 && uVar18 < uVar17; uVar12 = uVar12 + 1) {
                uVar37 = uVar17 - uVar18;
                if (uVar37 < 3) {
                  bVar2 = pbVar36[uVar18];
LAB_10003a58:
                  uStack_88 = CONCAT71(PF_PART7(uStack_88, 1),
                                       (byte)uStack_88 | (byte)(1 << (ulong)(uVar12 & 0x1f)));
                  uStack_94 = CONCAT31(PF_PART3(uStack_94, 1),bVar2);
                  uVar39 = 1;
                  uVar25 = 1;
                }
                else {
                  uVar39 = 0;
                  uVar28 = 0;
                  uVar14 = 0;
                  pbVar35 = pbVar36 + uVar18;
                  bVar2 = *pbVar35;
                  uVar31 = *(ulong *)(lVar40 + ((ulong)((uint)pbVar35[1] * 0x11 + (uint)bVar2 * 0xfb
                                                       + (uint)pbVar35[2]) & 0xfff) * 8);
                  uVar25 = uVar37;
                  if (0x11 < uVar37) {
                    uVar25 = 0x12;
                  }
                  do {
                    sVar26 = (short)uVar28;
                    if (((((long)uVar31 < 0) ||
                         (uVar5 = uVar18 - uVar31, uVar18 < uVar31 || uVar5 == 0)) ||
                        (0x1000 < uVar5)) || (0x3f < uVar14)) break;
                    for (uVar32 = 0; uVar25 != uVar32; uVar32 = uVar32 + 1) {
                      if (pbVar36[uVar32 + uVar31] != pbVar35[uVar32]) goto LAB_100039f8;
                    }
                    uVar32 = uVar25;
LAB_100039f8:
                    if (uVar32 <= uVar39) {
                      uVar5 = uVar28;
                      uVar32 = uVar39;
                    }
                    uVar39 = uVar32;
                    sVar26 = (short)uVar5;
                    if (uVar39 == 0x12) goto LAB_10003a34;
                    uVar32 = *(ulong *)(lVar40 + (uVar31 & 0xfff) * 8 + 0x8000);
                    uVar14 = uVar14 + 1;
                    bVar9 = (long)uVar32 < (long)uVar31;
                    uVar28 = uVar5;
                    uVar31 = uVar32;
                  } while (bVar9);
                  if (uVar39 < 3) goto LAB_10003a58;
LAB_10003a34:
                  uStack_94 = CONCAT22(PF_PART2(uStack_94, 2),sVar26 * 0x10 - 0x10U | (short)uVar39 - 3U);
                  uVar25 = 2;
                }
                bVar9 = recovered_10004da4((long *)&pcStack_d8,(undefined1 *)&uStack_94,uVar25);
                uVar28 = uVar39;
                uVar25 = uVar18;
                if (!bVar9) goto LAB_10003b38;
                for (; uVar28 != 0; uVar28 = uVar28 - 1) {
                  bVar2 = pbVar36[uVar25];
                  uVar13 = recovered_10005018(uVar13,(uint)bVar2);
                  if (2 < uVar37) {
                    uVar31 = (ulong)((uint)pbVar36[uVar25 + 1] * 0x11 + (uint)bVar2 * 0xfb +
                                    (uint)pbVar36[uVar25 + 2]) & 0xfff;
                    *(undefined8 *)(lVar40 + (uVar25 & 0xfff) * 8 + 0x8000) =
                         *(undefined8 *)(lVar40 + uVar31 * 8);
                    *(ulong *)(lVar40 + uVar31 * 8) = uVar25;
                  }
                  uVar25 = uVar25 + 1;
                  uVar37 = uVar37 - 1;
                }
                uVar18 = uVar39 + uVar18;
              }
              pcStack_d8[uVar30] = (byte)uStack_88;
            }
            recovered_10004e8c(pcStack_d8 + 4,(uint)uVar17);
            recovered_10004e8c(pcVar38 + 8,(int)uStack_d0 - 0x10);
            recovered_10004e8c(pcVar38 + 0xc,~uVar13);
            pcVar38 = (char *)0x0;
            bVar9 = true;
          }
          else {
            bVar9 = false;
            pcVar38 = str_10005797;
          }
LAB_10003b44:
          recovered_100048c0(lVar40);
          if (bVar9) {
            iVar11 = recovered_10004638(uVar15,path,(uint *)auStack_e8);
            if (iVar11 == 0) {
              uVar16 = recovered_10004690(uVar15,path,pcStack_d8,uStack_d0 & 0xffffffff);
              pcVar38 = str_10005693;
              if ((int)uVar16 != 0) {
                pcVar38 = (char *)0x0;
              }
            }
            else {
              pcVar38 = str_1000564f;
            }
          }
        }
      }
    }
  }
LAB_10003b64:
  pbVar36 = pbStack_c0;
LAB_10003b6c:
  recovered_100048c0(pcVar23);
  recovered_100048c0(path);
  recovered_100048c0(pbVar36);
  recovered_100048c0(pcStack_d8);
  if (pcVar38 == (char *)0x0) {
    iVar11 = recovered_100017ac(local_108,(byte *)str_1000547c);
    uVar16 = 0;
    pcVar38 = str_1000554d;
    if (iVar11 != 0) {
      pcVar38 = str_1000556c;
    }
  }
  else {
LAB_100031a0:
    recovered_10004144(str_100054c3);
    recovered_10004144(pcVar38);
    uVar16 = 1;
    pcVar38 = &DAT_1000554a;
  }
  recovered_10004144(pcVar38);
  return uVar16;
}

#undef DAT_100053e0
#undef DAT_1000554a
#undef DAT_1000575b
#undef DAT_100059ad
#undef UNK_100053e8
#undef _DAT_100053e0
#undef str_1000542a
#undef str_1000543b
#undef str_10005442
#undef str_1000544a
#undef str_10005455
#undef str_10005473
#undef str_1000547c
#undef str_10005484
#undef str_100054c3
#undef str_100054ca
#undef str_10005526
#undef str_1000554d
#undef str_1000556c
#undef str_10005597
#undef str_100055c9
#undef str_100055f8
#undef str_10005618
#undef str_1000564f
#undef str_10005693
#undef str_100056b8
#undef str_100056dc
#undef str_100056f8
#undef str_10005721
#undef str_10005752
#undef str_10005760
#undef str_10005773
#undef str_10005797
#undef str_100057b9
#undef str_100057d7
#undef str_1000580b
#undef str_10005828
#undef str_10005847
#undef str_10005873
#undef str_10005892
#undef str_100058bd
#undef str_100058e9
#undef str_10005915
#undef str_10005935
#undef str_1000596a
#undef str_10005983
#undef str_100059b2
#undef str_100059e2
#undef str_100059fe
#undef str_10005a28
#undef str_10005a54
#undef str_10005a6d
#undef str_10005a8c
#undef str_10005aa4
#undef str_10005ada
#undef str_10005aff
#undef str_10005b4c
#undef str_10005b84
#undef str_10005ba6
#undef str_10005bdb
#undef str_10005c18
#undef uRam00000000100053e8
#undef local_108
#undef pcStack_158
#undef uStack_150
#undef uStack_138
#undef lStack_130
#undef plStack_110
#undef uStack_100
#undef uStack_fc
#undef pbStack_f8
#undef pbStack_f0
#undef auStack_e8
#undef pcStack_d8
#undef uStack_d0
#undef uStack_c8
#undef pbStack_c0
#undef uStack_b8
#undef uStack_b0
#undef uStack_a7
#undef bStack_a5
#undef uStack_a4
#undef uStack_9c
#undef uStack_94
#undef uStack_90
#undef abStack_8c
#undef uStack_88
#undef uStack_80
#undef uStack_78

#undef UNK_82010828
#define UNK_82010828 (*(uint *)(0x82010828U))
#undef uRam0000000082010828
#define uRam0000000082010828 (*(uint32_t *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004144
 */

void recovered_10004144(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_100043cc(0x28);
  if ((bVar1) && (uRam0000000082010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100107d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uRam0000000082010828)(param_1);
    return;
  }
  return;
}

#undef UNK_82010828
#undef uRam0000000082010828

#undef DAT_820108bc
#define DAT_820108bc (*(uint8_t *)(0x820108bcU))
#undef _DAT_820108bc
#define _DAT_820108bc (*(uint *)(0x820108bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004184
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004184(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100043cc(0xbc);
  if ((bVar1) && (_DAT_820108bc != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100041ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820108bc)();
    return uVar2;
  }
  return 0xffffffff;
}

#undef DAT_820108bc
#undef _DAT_820108bc

#undef DAT_82010a20
#define DAT_82010a20 (*(uint8_t *)(0x82010a20U))
#undef _DAT_82010a20
#define _DAT_82010a20 (*(uint *)(0x82010a20U))
#define local_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041bc(char *param_1,int *param_2,long *param_3)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;

  if (param_1 == (char *)0x0) {
    return;
  }
  pcVar4 = local_150;
  if (*param_1 != '[') {
    return;
  }
  uVar7 = 0;
  for (lVar10 = 1; (cVar1 = param_1[lVar10], cVar1 != '\0' && (cVar1 != ']')); lVar10 = lVar10 + 1)
  {
    if (uVar7 + 1 < 0x80) {
      local_150[uVar7] = cVar1;
      uVar7 = uVar7 + 1;
    }
  }
  local_150[uVar7] = '\0';
  iVar6 = 0x7fffffff;
  if ((cVar1 != ']') || (0x81 < lVar10 + 1U)) goto LAB_100042c0;
  lVar8 = 0;
  if (local_150[0] == '[') {
    pcVar4 = local_150 + 1;
  }
  for (; ((cVar2 = pcVar4[lVar8], cVar2 != '\0' && (cVar2 != ']')) && (lVar8 != 0x7f));
      lVar8 = lVar8 + 1) {
    local_150[lVar8 + 0x80] = cVar2;
  }
  local_150[lVar8 + 0x80] = '\0';
  if (local_150[0] == '[') {
    if (cVar2 == ']') {
      cVar2 = local_150[lVar8 + 2];
      goto joined_r0x100042b8;
    }
  }
  else {
joined_r0x100042b8:
    if (cVar2 == '\0') {
      lVar8 = 0;
      uVar7 = 1;
      iVar6 = 0x7fffffff;
      do {
        lVar9 = 0;
        while( true ) {
          bVar3 = local_150[lVar8 + 0x80];
          if (bVar3 == 0) {
            iVar6 = 0x7fffffff;
            if (((lVar9 != 0) && (1 < uVar7)) &&
               ((bVar5 = recovered_100043cc(0x220), bVar5 &&
                ((_DAT_82010a20 != 0 &&
                 (iVar6 = (*(code *)(ulong)_DAT_82010a20)(0xfffffffe,local_150 + 0x80,0x80),
                 iVar6 < 0)))))) {
              iVar6 = 0x7fffffff;
            }
            goto LAB_100042c0;
          }
          if (lVar8 == 0x7f) goto LAB_100042bc;
          if (bVar3 == 0x5c) break;
          if (((9 < (byte)(bVar3 - 0x30U) && 0x19 < (byte)((bVar3 & 0xdf) + 0xbf)) && (bVar3 != 0x5f)
              ) && (bVar3 != 0x2d)) goto LAB_100042bc;
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 1;
        }
        if (lVar9 == 0) break;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar7 < 7);
      goto LAB_100042c0;
    }
  }
LAB_100042bc:
  iVar6 = 0x7fffffff;
LAB_100042c0:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = (long)(param_1 + lVar10 + (ulong)(cVar1 == ']'));
  }
  return;
}

#undef DAT_82010a20
#undef _DAT_82010a20
#undef local_150

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
 * Address: 0x100043cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100043cc(int param_1)

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

#undef DAT_82010910
#define DAT_82010910 (*(uint8_t *)(0x82010910U))
#undef _DAT_82010910
#define _DAT_82010910 (*(uint *)(0x82010910U))
#define local_a4 (*(int *)(pf_stack_frame + 28))
#define uStack_ac (*(ulong *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004418
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004418(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  recovered_10001498(&uStack_ac,0,0x8c);
  bVar1 = recovered_100043cc(0x110);
  uVar2 = (ulong)bVar1;
  if (bVar1) {
    if (_DAT_82010910 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)(ulong)_DAT_82010910)(param_1,&uStack_ac);
      if ((int)uVar2 != 0) {
        *(bool *)param_2 = local_a4 == 0xd;
        uVar2 = (ulong)(local_a4 != 0);
      }
    }
  }
  return uVar2;
}

#undef DAT_82010910
#undef _DAT_82010910
#undef local_a4
#undef uStack_ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000449c
 */

undefined1 * recovered_1000449c(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;

  if (((param_1 != (char *)0x0) && (uVar6 = recovered_10001788((long)param_1), uVar6 < 0x3001)) &&
     (*param_1 != '[')) {
    puVar7 = (undefined1 *)recovered_1000487c(0x3001);
    if (puVar7 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    *puVar7 = 0x5c;
    uVar6 = 1;
    for (lVar10 = 0; param_1[lVar10] != '\0'; lVar10 = ~uVar12 + lVar10) {
      do {
        lVar11 = lVar10;
        cVar3 = param_1[lVar11];
        iVar2 = param_2;
        if (cVar3 != '/') {
          iVar2 = 1;
        }
        lVar10 = lVar11 + 1;
      } while (cVar3 == '\\' || iVar2 == 0);
      uVar12 = 0;
      pcVar8 = param_1;
      while (((cVar3 != '\0' && (cVar3 != '\\')) && ((cVar3 != '/' || (param_2 != 0))))) {
        cVar3 = pcVar8[lVar10];
        uVar12 = uVar12 - 1;
        pcVar8 = pcVar8 + 1;
      }
      if (uVar12 == 0) break;
      uVar9 = -uVar12;
      pcVar8 = (char *)recovered_10004900((long)(param_1 + lVar11),uVar9,param_2);
      if (pcVar8 == (char *)0x0) goto LAB_100107dc;
      if (param_2 == 0) {
        pcVar4 = param_1 + lVar11;
      }
      else {
        uVar9 = recovered_10001788((long)pcVar8);
        pcVar4 = pcVar8;
      }
      uVar1 = uVar9;
      if (1 < uVar6) {
        uVar1 = uVar9 + 1;
      }
      if (0x3001 - uVar6 <= uVar1) {
        recovered_100048c0(pcVar8);
        goto LAB_100107dc;
      }
      if (1 < uVar6) {
        puVar7[uVar6] = 0x5c;
        uVar6 = uVar6 + 1;
      }
      recovered_100012ac(puVar7 + uVar6,pcVar4,uVar9);
      uVar6 = uVar6 + uVar9;
      recovered_100048c0(pcVar8);
    }
    puVar7[uVar6] = 0;
    if (uVar6 < 2) {
      return puVar7;
    }
    if (param_2 == 0) {
      return puVar7;
    }
    bVar5 = recovered_10004ab4((long)(puVar7 + 1),uVar6 - 1);
    if ((bVar5 & 1) != 0) {
      return puVar7;
    }
LAB_100107dc:
    recovered_100048c0(puVar7);
  }
  return (undefined1 *)0x0;
}


#undef DAT_82010a18
#define DAT_82010a18 (*(uint8_t *)(0x82010a18U))
#undef _DAT_82010a18
#define _DAT_82010a18 (*(uint *)(0x82010a18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004638
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10004638(ulong device,char *path,uint *record)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined8 uVar3;

  bVar1 = recovered_100043cc(0x218);
  if ((bVar1) && (_DAT_82010a18 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)(ulong)_DAT_82010a18)((int)device,path,record);
    return iVar2;
  }
  uVar3 = recovered_10004ccc(device,path,record);
  if (record != (uint *)0x0) {
    *record = 0;
  }
  return (int)uVar3;
}

#undef DAT_82010a18
#undef _DAT_82010a18

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef DAT_820108d0
#define DAT_820108d0 (*(uint8_t *)(0x820108d0U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
#undef _DAT_820108d0
#define _DAT_820108d0 (*(uint *)(0x820108d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10004690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100043cc(0xd0);
  if (bVar1) {
    if (_DAT_820108d0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100046e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)_DAT_820108d0)(param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  else {
    bVar1 = recovered_100043cc(0x38);
    if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)_DAT_82010838)(param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_82010838
#undef DAT_820108d0
#undef _DAT_82010838
#undef _DAT_820108d0

#undef DAT_82010a1c
#define DAT_82010a1c (*(uint8_t *)(0x82010a1cU))
#undef _DAT_82010a1c
#define _DAT_82010a1c (*(uint *)(0x82010a1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004730(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_3 != (uint *)0x0) {
    bVar2 = recovered_100043cc(0x21c);
    if ((bVar2) && (_DAT_82010a1c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(ulong)_DAT_82010a1c)(param_1,param_2,param_3);
      return uVar4;
    }
    uVar4 = recovered_10004ccc(param_1,param_2,param_3);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar1 = *param_3;
    *param_3 = 0;
    if (param_3[1] == 0) {
      return 1;
    }
    if (uVar1 != 0) {
      uVar3 = recovered_1000487c((ulong)param_3[1]);
      if (uVar3 == 0) {
        return 0;
      }
      uVar5 = (ulong)param_3[1];
      if ((param_3[1] == 0) || ((uVar3 >> 0x20 == 0 && (uVar5 - 1 <= 0xffffffff - uVar3)))) {
        for (uVar6 = 0; uVar6 < uVar5; uVar6 = uVar6 + 1) {
          *(undefined1 *)(uVar3 + uVar6) = *(undefined1 *)(uVar1 + uVar6);
          uVar5 = (ulong)param_3[1];
        }
        *param_3 = (uint)uVar3;
        return 1;
      }
      recovered_100048c0(uVar3);
    }
  }
  return 0;
}

#undef DAT_82010a1c
#undef _DAT_82010a1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047f8
 */

undefined8 recovered_100047f8(char *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_4 != (ulong *)0x0) {
    if (param_1 == (char *)0x0) {
      return 0;
    }
    if (param_2 < 4) {
      return 0;
    }
    if (((*param_1 == 'P') && (param_1[1] == 'F')) && (param_1[2] == 'Z')) {
      if (param_2 < 0x10) {
        return 0;
      }
      if (param_1[3] != '1') {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 4);
      if (uVar1 == 0) {
        return 0;
      }
      if ((uVar1 <= param_3) && (param_2 - 0x10 == (ulong)*(uint *)(param_1 + 8))) {
        *param_4 = (ulong)uVar1;
        return 1;
      }
    }
  }
  return 0;
}


#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000487c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000487c(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100043cc(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201084c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100048c0(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_100043cc(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100108a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef str_10005741
#define str_10005741 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004900
 */

long recovered_10004900(long param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;

  if (0xfffffffffffffd02 < param_2 - 0x2fe) {
    lVar7 = recovered_1000487c(param_2 * 3 + 1);
    if (lVar7 == 0) {
      return 0;
    }
    lVar12 = 0;
    lVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    for (uVar13 = 0; uVar13 < param_2; uVar13 = uVar13 + 1) {
      bVar3 = *(byte *)(param_1 + uVar13);
      uVar8 = (ulong)bVar3;
      if ((param_3 != 0) && (bVar3 == 0x25 && 2 < param_2 - uVar13)) {
        uVar5 = recovered_10004c9c((uint)((byte *)(param_1 + uVar13))[1]);
        if ((int)uVar5 < 0) {
          uVar8 = 0x25;
        }
        else {
          uVar6 = recovered_10004c9c((uint)*(byte *)(param_1 + uVar13 + 2));
          bVar4 = (uVar6 & 0x80000000) == 0;
          if (bVar4) {
            uVar13 = uVar13 + 2;
          }
          uVar2 = 0x25;
          if (bVar4) {
            uVar2 = uVar6 | uVar5 << 4;
          }
          uVar8 = (ulong)uVar2;
        }
      }
      uVar6 = (uint)uVar8;
      uVar5 = uVar6;
      if (lVar11 != 0) {
        uVar5 = uVar10;
      }
      uVar2 = uVar6;
      if (lVar11 != 1) {
        uVar2 = uVar9;
      }
      if (lVar11 == 0xff) goto LAB_100108ac;
      if ((((uVar6 - 0x20 & 0xff) < 0x5f) && ((uVar6 & 0xff) != 0x25)) && ((uVar6 & 0xff) != 0x5c))
      {
        *(char *)(lVar7 + lVar12) = (char)uVar8;
        lVar12 = lVar12 + 1;
      }
      else {
        puVar1 = (undefined1 *)(lVar7 + lVar12);
        *puVar1 = 0x25;
        puVar1[1] = str_10005741[uVar8 >> 4 & 0xf];
        lVar12 = lVar12 + 3;
        puVar1[2] = str_10005741[uVar8 & 0xf];
      }
      lVar11 = lVar11 + 1;
      uVar10 = uVar5;
      uVar9 = uVar2;
    }
    *(undefined1 *)(lVar7 + lVar12) = 0;
    if ((lVar11 != 1) || ((uVar10 & 0xff) != 0x2e)) {
      if (lVar11 != 2) {
        return lVar7;
      }
      if ((uVar10 & 0xff) != 0x2e) {
        return lVar7;
      }
      if ((uVar9 & 0xff) != 0x2e) {
        return lVar7;
      }
    }
LAB_100108ac:
    recovered_100048c0(lVar7);
  }
  return 0;
}

#undef str_10005741

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab4
 */

undefined1 recovered_10004ab4(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar3;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong uVar11;
  uint uVar12;

  if (param_2 - 0x3001 < 0xffffffffffffd000) {
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar12 = 0;
    while( true ) {
      uVar10 = 1;
      if (param_2 < uVar6) break;
      uVar7 = uVar6;
      if (param_2 == uVar6) {
LAB_10004b54:
        if (uVar8 == 0) {
          return 0;
        }
        if ((uVar8 == 1) && ((uVar12 & 0xff) == 0x2e)) {
          return 0;
        }
        if (((uVar8 == 2) && ((uVar12 & 0xff) == 0x2e)) && ((uVar5 & 0xff) == 0x2e)) {
          return 0;
        }
        if (param_2 == uVar6) {
          uVar9 = 0;
          uVar7 = param_2;
          uVar4 = uVar12;
        }
        else {
          uVar11 = uVar11 + 1;
          if (0x1000 < uVar11) {
            return 0;
          }
          uVar9 = 0;
          uVar4 = uVar12;
        }
      }
      else {
        bVar1 = *(byte *)(param_1 + uVar6);
        uVar4 = (uint)bVar1;
        if (bVar1 == 0x25) {
          if (param_2 - uVar6 < 3) {
            return 0;
          }
          uVar3 = (uint)((byte *)(param_1 + uVar6))[1];
          uVar2 = recovered_10004c9c(uVar3);
          uVar7 = uVar6 + 2;
          bVar1 = *(byte *)(param_1 + uVar7);
          uVar4 = recovered_10004c9c((uint)bVar1);
          if (bVar1 - 0x61U < 6 || (uVar3 - 0x61 & 0xff) < 6) {
            return 0;
          }
          if ((int)uVar2 < 0) {
            return 0;
          }
          if ((int)uVar4 < 0) {
            return 0;
          }
          uVar4 = uVar4 | uVar2 << 4;
          if (0xa0 < (uVar4 - 0x7f & 0xff)) {
            if (uVar4 != 0x5c && uVar4 != 0x25) {
              uVar7 = uVar6;
            }
            if ((uVar4 != 0x25) && (uVar4 != 0x5c)) {
              return 0;
            }
          }
        }
        else {
          if (bVar1 == 0x5c) goto LAB_10004b54;
          if (uVar4 == 0x5c) {
            return 0;
          }
          if (0x5e < (uVar4 - 0x20 & 0xff)) {
            return 0;
          }
        }
        uVar9 = uVar8 + 1;
        if (0xff < uVar9) {
          return 0;
        }
        uVar2 = uVar4;
        if (uVar8 != 1) {
          uVar2 = uVar5;
        }
        if (uVar8 != 0) {
          uVar4 = uVar12;
        }
        uVar11 = uVar11 + 1;
        if (0x1000 < uVar11) {
          return 0;
        }
        uVar5 = uVar2;
      }
      uVar6 = uVar7 + 1;
      uVar8 = uVar9;
      uVar12 = uVar4;
    }
  }
  return uVar10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c9c
 */

uint recovered_10004c9c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 - 0x57;
  if (5 < param_1 - 0x61U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x41U < 6) {
    uVar1 = param_1 - 0x37;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}


#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef DAT_820108c8
#define DAT_820108c8 (*(uint8_t *)(0x820108c8U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
#undef _DAT_820108c8
#define _DAT_820108c8 (*(uint *)(0x820108c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ccc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100043cc(200);
  if (bVar1) {
    if (_DAT_820108c8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100108e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)_DAT_820108c8)(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    bVar1 = recovered_100043cc(0x34);
    if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)_DAT_82010834)(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_82010834
#undef DAT_820108c8
#undef _DAT_82010834
#undef _DAT_820108c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d48
 */

undefined8 * recovered_10004d48(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)recovered_1000487c(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    recovered_100048c0(param_2);
    recovered_100048c0(param_3);
  }
  else {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
  }
  return puVar1;
}


#undef DAT_82010854
#define DAT_82010854 (*(uint8_t *)(0x82010854U))
#undef _DAT_82010854
#define _DAT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004da4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004da4(long *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if (0xffffffffU - param_1[1] < param_3) {
    return false;
  }
  uVar3 = param_1[2];
  uVar1 = param_1[1] + param_3;
  if (uVar3 < uVar1) {
    uVar4 = 0x100;
    if (uVar3 != 0) {
      uVar4 = uVar3;
    }
    for (; uVar4 < uVar1; uVar4 = uVar4 << 1) {
      if (uVar4 >> 0x1f != 0) {
        uVar4 = uVar1;
        break;
      }
    }
    lVar5 = *param_1;
    bVar2 = recovered_100043cc(0x54);
    if (!bVar2) {
      return bVar2;
    }
    if (_DAT_82010854 == 0) {
      return false;
    }
    lVar5 = (*(code *)(ulong)_DAT_82010854)(lVar5,uVar4);
    if (lVar5 == 0) {
      return false;
    }
    *param_1 = lVar5;
    param_1[2] = uVar4;
  }
  if (param_3 != 0) {
    recovered_100012ac((undefined1 *)(*param_1 + param_1[1]),param_2,param_3);
  }
  param_1[1] = uVar1;
  return true;
}

#undef DAT_82010854
#undef _DAT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e8c
 */

void recovered_10004e8c(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; lVar1 != 0x20; lVar1 = lVar1 + 8) {
    *param_1 = (char)(param_2 >> (ulong)((uint)lVar1 & 0x1f));
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_820109d4
#define DAT_820109d4 (*(uint8_t *)(0x820109d4U))
#undef _DAT_820109d4
#define _DAT_820109d4 (*(uint *)(0x820109d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_10004eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100043cc(0x1d4);
  if ((bVar1) && (_DAT_820109d4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_820109d4)
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

#undef DAT_820109d4
#undef _DAT_820109d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f54
 */

undefined1 * recovered_10004f54(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;

  for (uVar2 = recovered_10001788((long)param_1); (uVar2 != 0 && (param_1[uVar2 - 1] == '\\'));
      uVar2 = uVar2 - 1) {
  }
  if (uVar2 >> 0xc < 3 && param_3 <= 0x2fff - uVar2) {
    puVar3 = (undefined1 *)recovered_1000487c(param_3 + uVar2 + 2);
    if (puVar3 != (undefined1 *)0x0) {
      recovered_100012ac(puVar3,param_1,uVar2);
      puVar1 = puVar3 + uVar2;
      *puVar1 = 0x5c;
      recovered_100012ac(puVar1 + 1,param_2,param_3);
      puVar1[param_3 + 1] = 0;
    }
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005018
 */

uint recovered_10005018(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = param_2 ^ param_1;
  iVar2 = 8;
  do {
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}


#undef str_10005c52
#define str_10005c52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8eeU)))
#undef str_10005c80
#define str_10005c80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91cU)))
#define auStack_5c (*(uint (*)[23])(pf_stack_frame + 20))
#define local_54 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005044
 */

char * recovered_10005044(ulong param_1,long param_2,int param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;

  lVar7 = 1;
  do {
    cVar1 = *(char *)(param_2 + lVar7);
    if (cVar1 == '\\' || cVar1 == '\0') {
      *(undefined1 *)(param_2 + lVar7) = 0;
      iVar3 = recovered_10004638(param_1,(char *)param_2,auStack_5c);
      if (iVar3 == 0) {
        if (param_3 == 0) {
          pcVar5 = (char *)0x0;
          uVar6 = 1;
        }
        else {
          uVar4 = recovered_100051f8(param_1,param_2);
          bVar2 = (int)uVar4 != 0;
          uVar6 = (uint)bVar2;
          pcVar5 = (char *)0x0;
          if (!bVar2) {
            pcVar5 = str_10005c80;
          }
        }
      }
      else {
        uVar6 = (local_54 & 2) >> 1;
        pcVar5 = (char *)0x0;
        if ((local_54 & 2) == 0) {
          pcVar5 = str_10005c52;
        }
      }
      *(char *)(param_2 + lVar7) = cVar1;
      if ((cVar1 == '\0') || (uVar6 == 0)) {
        return pcVar5;
      }
    }
    lVar7 = lVar7 + 1;
  } while( true );
}

#undef str_10005c52
#undef str_10005c80
#undef auStack_5c
#undef local_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005114
 */

ulong recovered_10005114(long param_1,ulong param_2,long param_3,long param_4,long param_5,
                        uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;

  uVar7 = 0x811c9dc5;
  for (uVar4 = 0; param_2 != uVar4; uVar4 = uVar4 + 1) {
    bVar2 = *(byte *)(param_1 + uVar4);
    uVar8 = bVar2 | 0x20;
    if ((param_6 & (bVar2 - 0x41U & 0xff) < 0x1a) == 0) {
      uVar8 = (uint)bVar2;
    }
    uVar7 = (uVar7 ^ uVar8) * 0x1000193;
  }
  uVar4 = (ulong)uVar7;
  do {
    uVar4 = param_5 - 1U & uVar4;
    lVar5 = *(long *)(param_4 + uVar4 * 8);
    if (lVar5 == 0) {
      return uVar4;
    }
    lVar5 = param_3 + lVar5 * 0x28;
    if (*(uint *)(lVar5 + -0x18) == param_2) {
      uVar6 = 0;
      while( true ) {
        if (param_2 == uVar6) {
          return uVar4;
        }
        bVar2 = *(byte *)(param_1 + uVar6);
        uVar7 = (uint)bVar2;
        if (param_6 == 0) {
          uVar8 = (uint)*(byte *)(*(long *)(lVar5 + -0x28) + uVar6);
        }
        else {
          bVar3 = *(byte *)(*(long *)(lVar5 + -0x28) + uVar6);
          uVar1 = bVar2 | 0x20;
          if (0x19 < bVar2 - 0x41U) {
            uVar1 = uVar7;
          }
          uVar8 = bVar3 | 0x20;
          if (0x19 < bVar3 - 0x41U) {
            uVar8 = (uint)bVar3;
          }
          uVar7 = uVar1;
        }
        if (uVar7 != uVar8) break;
        uVar6 = uVar6 + 1;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


#undef DAT_820108dc
#define DAT_820108dc (*(uint8_t *)(0x820108dcU))
#undef UNK_8201088c
#define UNK_8201088c (*(uint *)(0x8201088cU))
#undef _DAT_820108dc
#define _DAT_820108dc (*(uint *)(0x820108dcU))
#undef uRam000000008201088c
#define uRam000000008201088c (*(uint32_t *)(0x8201088cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100051f8(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100043cc(0xdc);
  if (bVar1) {
    if (_DAT_820108dc != 0) {
                    /* WARNING: Could not recover jumptable at 0x10005238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)_DAT_820108dc)(param_1,param_2);
      return uVar2;
    }
  }
  else {
    bVar1 = recovered_100043cc(0x8c);
    if ((bVar1) && (uRam000000008201088c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001090c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uRam000000008201088c)(param_2);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_820108dc
#undef UNK_8201088c
#undef _DAT_820108dc
#undef uRam000000008201088c
