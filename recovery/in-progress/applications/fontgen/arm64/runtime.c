/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008060
#define DAT_10008060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4550U)))
#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000520
 */

void recovered_10000520(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000054c();
  DAT_10008060 = 0;
  recovered_10000584();
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008060
#undef DAT_10008064

#undef DAT_10008064
#define DAT_10008064 (*(int *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000054c
 */

void recovered_1000054c(void)

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
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4550U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4560U)))
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
 * Address: 0x10000584
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000584(void)

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
      recovered_10002b4c(puVar8[-1],*puVar8,&local_48);
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
      recovered_10002b4c(0x300000,(ulong)uVar2 - 0x300000,&local_48);
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
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000808
 */

bool recovered_10000808(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_1000054c();
  bVar1 = recovered_10000844(param_1,param_2,param_3);
  DAT_10008064 = 0;
  return bVar1;
}

#undef DAT_10008064

#undef DAT_10008060
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4550U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4560U)))
#define local_61 (*(byte *)(pf_stack_frame + 31))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000844
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_10000844(ulong *param_1,ulong *param_2,long param_3)

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
      recovered_10000584();
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
             (recovered_10002c50((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            PF_PART1(DAT_10008060, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x10000944;
        }
        else {
          recovered_10002c50((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            PF_PART1(DAT_10008060, 1) = 0;
            return false;
          }
joined_r0x10000944:
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
        recovered_10002b4c(*param_1,*param_2,&uStack_70);
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
#undef local_61
#undef uStack_70

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a40
 */

bool recovered_10000a40(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = param_2;
  uStack_18 = param_1;
  recovered_1000054c();
  bVar1 = recovered_10000844(&uStack_18,&local_20,1);
  DAT_10008064 = 0;
  return bVar1;
}

#undef DAT_10008064
#undef local_20
#undef uStack_18

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a7c
 */

ulong recovered_10000a7c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000054c();
  recovered_10000584();
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
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000adc
 */

long recovered_10000adc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1000054c();
  recovered_10000584();
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
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b30
 */

ulong recovered_10000b30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000054c();
  recovered_10000584();
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
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b80
 */

long recovered_10000b80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1000054c();
  recovered_10000584();
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
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc4
 */

void recovered_10000bc4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000054c();
  recovered_10000bf0(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008064

#undef DAT_10008068
#define DAT_10008068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4558U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bf0
 */

ulong * recovered_10000bf0(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_10000584();
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
                if (uVar9 < uVar7) goto LAB_10000ca0;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000ca0:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000cdc;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000cdc:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000d84;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000d38;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000d38:
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
LAB_10000d84:
                        recovered_10002ca0(puVar11,uVar5);
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
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dac
 */

void recovered_10000dac(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000054c();
  recovered_10000bf0(param_1,(ulong *)0x0,param_2);
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008064

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de4
 */

ulong * recovered_10000de4(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_1000054c();
  if (param_3 < param_2) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000bf0(param_1,param_2,param_3);
  }
  DAT_10008064 = 0;
  return puVar1;
}

#undef DAT_10008064

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e28
 */

void recovered_10000e28(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000054c();
  recovered_10000e50(param_1);
  DAT_10008064 = 0;
  return;
}

#undef DAT_10008064

#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e50
 */

void recovered_10000e50(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_10000584();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002cf4(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002cf4(puVar2);
      puVar1 = puVar2;
    }
    DAT_10008070 = puVar1;
  }
  return;
}

#undef DAT_10008070

#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4554U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec4
 */

ulong * recovered_10000ec4(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;

  recovered_1000054c();
  if (param_1 == (ulong *)0x0) {
    puVar2 = recovered_10000bf0(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10008064 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000e50((long)param_1);
    DAT_10008064 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10008064 = 0;
    return (ulong *)0x0;
  }
  recovered_10000584();
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
    uVar1 = recovered_10002ca0(puVar2,uVar7);
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
      if (uVar7 <= uVar3) goto LAB_10000ff0;
      uVar3 = recovered_10002d14(puVar2);
    } while ((uVar3 & 1) != 0);
    uVar3 = *puVar2;
LAB_10000ff0:
    if (uVar7 <= uVar3) {
      uVar1 = recovered_10002ca0(puVar2,uVar7);
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
    puVar2 = recovered_10000bf0(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_10001344((undefined1 *)puVar2,(undefined1 *)param_1,uVar3);
      recovered_10000e50((long)param_1);
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
 * Address: 0x1000106c
 */

ulong recovered_1000106c(ulong param_1,uint param_2)

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
 * Address: 0x100010b0
 */

ulong recovered_100010b0(ulong param_1,uint param_2)

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
 * Address: 0x100010fc
 */

long recovered_100010fc(long param_1,uint param_2)

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
 * Address: 0x1000114c
 */

/* WARNING: Removing unreachable block (ram,0x1000119c) */

ulong recovered_1000114c(ulong param_1,ulong param_2)

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
 * Address: 0x10001154
 */

ulong recovered_10001154(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x100011b4
 */

undefined8 recovered_100011b4(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_10001154(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d4
 */

long recovered_100011d4(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10001154(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001214
 */

long recovered_10001214(long param_1,long param_2)

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
  recovered_10001154(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001260
 */

void recovered_10001260(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001268
 */

int recovered_10001268(int param_1)

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
 * Address: 0x10001274
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001274(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d9c(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100012a8. Too many branches */
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
 * Address: 0x100012b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100012b8(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10002d9c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100012ec. Too many branches */
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
 * Address: 0x100012f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100012f8(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10002d9c(0x54);
  if ((bVar1) && (_DAT_82010854 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010854)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010854
#undef _DAT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001344
 */

void recovered_10001344(undefined1 *param_1,undefined1 *param_2,ulong param_3)

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
 * Address: 0x1000141c
 */

void recovered_1000141c(undefined1 *param_1,undefined1 *param_2,ulong param_3)

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
      recovered_10001344(param_1,param_2,param_3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001530
 */

void recovered_10001530(ulong *param_1,byte param_2,ulong param_3)

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
 * Address: 0x100015c8
 */

void recovered_100015c8(ulong *param_1,ulong param_2)

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
 * Address: 0x100015cc
 */

void recovered_100015cc(ulong *param_1,ulong param_2)

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
 * Address: 0x100015d0
 */

char * recovered_100015d0(long param_1,char param_2,long param_3)

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
 * Address: 0x100015f4
 */

int recovered_100015f4(byte *param_1,byte *param_2,ulong param_3)

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
        goto recovered_1000175c;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_1000175c;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_1000175c;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_1000175c;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_1000175c:
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
 * Address: 0x1000175c
 */

int recovered_1000175c(long param_1,long param_2)

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
 * Address: 0x10001788
 */

bool recovered_10001788(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001798
 */

bool recovered_10001798(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a8
 */

bool recovered_100017a8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017bc
 */

bool recovered_100017bc(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d8
 */

bool recovered_100017d8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e8
 */

bool recovered_100017e8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f8
 */

int recovered_100017f8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000180c
 */

int recovered_1000180c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001820
 */

long recovered_10001820(long param_1)

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
 * Address: 0x10001844
 */

int recovered_10001844(byte *param_1,byte *param_2)

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
 * Address: 0x1000186c
 */

int recovered_1000186c(byte *param_1,byte *param_2)

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
 * Address: 0x10001870
 */

void recovered_10001870(long param_1,long param_2)

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
 * Address: 0x10001888
 */

void recovered_10001888(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;

  if (param_1 != (undefined1 *)0x0) {
    lVar1 = recovered_10001820((long)param_1);
    puVar2 = (undefined1 *)recovered_10001274(lVar1 + 1);
    if (puVar2 != (undefined1 *)0x0) {
      recovered_10001344(puVar2,param_1,lVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018c4
 */

char * recovered_100018c4(char *param_1,char param_2)

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
 * Address: 0x100018ec
 */

long recovered_100018ec(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100018c4(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000192c
 */

long recovered_1000192c(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100018c4(param_2,*(char *)(param_1 + lVar2)), pcVar1 == (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000196c
 */

char * recovered_1000196c(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100018c4(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019ac
 */

char * recovered_100019ac(char *param_1,char *param_2)

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


#undef DAT_10003b91
#define DAT_10003b91 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e8
 */

undefined * recovered_100019e8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003b91;
}

#undef DAT_10003b91

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x44f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f4
 */

undefined ** recovered_100019f4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10008000;
}

#undef PTR_DAT_10008000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define uStack_38 (*(ulong *)(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a00(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10001530(&uStack_38,0,0x18);
  bVar1 = recovered_10002d9c(0x168);
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
#undef uStack_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a78
 */

double recovered_10001a78(double param_1,uint param_2)

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
 * Address: 0x10001aac
 */

uint128 recovered_10001aac(double param_1,int *param_2)

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
 * Address: 0x10001b20
 */

uint128 recovered_10001b20(double param_1,double param_2)

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
 * Address: 0x10001b44
 */

uint128 recovered_10001b44(double param_1,double param_2)

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
 * Address: 0x10001ba4
 */

uint128 recovered_10001ba4(double param_1)

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
 * Address: 0x10001bc0
 */

uint128 recovered_10001bc0(double param_1)

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
 * Address: 0x10001bec
 */

uint128 recovered_10001bec(double param_1)

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


#undef DAT_10003b10
#define DAT_10003b10 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c28
 */

uint128 recovered_10001c28(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10003b10 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10003b10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd4
 */

long recovered_10001cd4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10003b18
#define DAT_10003b18 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce8
 */

uint128 recovered_10001ce8(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001d3c(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10003b18);
  return auVar1;
}

#undef DAT_10003b18

#undef DAT_10003b20
#define DAT_10003b20 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10003b28
#define DAT_10003b28 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10003b30
#define DAT_10003b30 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10003b38
#define DAT_10003b38 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d3c
 */

void recovered_10001d3c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10003b20 < param_1; param_1 = param_1 + DAT_10003b38) {
  }
  for (; param_1 < DAT_10003b28; param_1 = param_1 + DAT_10003b30) {
  }
  return;
}

#undef DAT_10003b20
#undef DAT_10003b28
#undef DAT_10003b30
#undef DAT_10003b38

#undef DAT_10003b40
#define DAT_10003b40 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d80
 */

uint128 recovered_10001d80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001d3c(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10003b40;
  return auVar1;
}

#undef DAT_10003b40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dcc
 */

uint128 recovered_10001dcc(double param_1)

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
 * Address: 0x10001ddc
 */

ulong recovered_10001ddc(double param_1)

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
 * Address: 0x10001e3c
 */

ulong recovered_10001e3c(double param_1)

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
 * Address: 0x10001e8c
 */

void recovered_10001e8c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb4
 */

uint128 recovered_10001eb4(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if ((long)param_1 < 0) {
    recovered_10001e8c(-param_1);
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
 * Address: 0x10001ed8
 */

float recovered_10001ed8(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f0c
 */

void recovered_10001f0c(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001aac((double)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f24
 */

float recovered_10001f24(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001a78((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f3c
 */

void recovered_10001f3c(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b44((double)param_1,(double)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f58
 */

float recovered_10001f58(float param_1)

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
 * Address: 0x10001f7c
 */

void recovered_10001f7c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001bc0((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f94
 */

uint128 recovered_10001f94(double param_1)

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
 * Address: 0x10001fbc
 */

void recovered_10001fbc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001f94((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd4
 */

void recovered_10001fd4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001bec((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fec
 */

void recovered_10001fec(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c28((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002004
 */

long recovered_10002004(double param_1)

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
 * Address: 0x10002018
 */

void recovered_10002018(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001ce8((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002030
 */

void recovered_10002030(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001d80((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002048
 */

float recovered_10002048(float param_1)

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
 * Address: 0x10002058
 */

long recovered_10002058(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_100020f0;
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
      goto LAB_1000211c;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_1000211c;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_1000211c;
    }
LAB_100020f0:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_1000211c:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_1000215c((uint)*pbVar4);
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
 * Address: 0x1000215c
 */

uint recovered_1000215c(int param_1)

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
 * Address: 0x1000218c
 */

long recovered_1000218c(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10002270;
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
      goto LAB_10002270;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10002270;
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
LAB_10002270:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_1000215c((uint)*pbVar6);
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
 * Address: 0x100022b0
 */

uint128 recovered_100022b0(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_10001a78(dVar12,iVar9 * iVar6);
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
 * Address: 0x10002440
 */

void recovered_10002440(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100022b0(param_1,param_2);
  return;
}


#undef str_10003b93
#define str_10003b93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83U)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002458
 */

int recovered_10002458(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_100024c8:
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
      goto LAB_100024f4;
    }
    goto LAB_100024f8;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x10002588;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002570;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_10002570;
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
  goto LAB_10002850;
LAB_10002570:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_10002598:
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
LAB_10002684:
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
      goto LAB_10002684;
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
      goto LAB_100024f4;
    }
    break;
  case 100:
  case 0x69:
code_r0x100027a4:
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
LAB_10002840:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x10002848:
    uVar6 = 0;
LAB_1000284c:
    recovered_10002a38((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_10002850;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002ad8((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0x8aU));
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
      recovered_10002a38((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
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
    goto LAB_10002850;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002ad8((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0xb8U));
      uVar7 = 0x10;
      goto code_r0x10002848;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_10003b93;
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
      goto LAB_10002850;
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
      goto LAB_10002840;
    case 0x78:
code_r0x10002760:
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
      goto LAB_1000284c;
    default:
      if (bVar9 == 0x49) goto code_r0x100027a4;
      if (bVar9 == 0x58) goto code_r0x10002760;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_100024f4:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_100024f8:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002850:
  param_3 = pbVar8 + 1;
  goto LAB_100024c8;
code_r0x10002588:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_10002598;
}

#undef str_10003b93
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029fc
 */

void recovered_100029fc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10003ba6
#define str_10003ba6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96U)))
#undef str_10003bb7
#define str_10003bb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7U)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a38
 */

void recovered_10002a38(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10003ba6;
  if (param_6 == 0) {
    pcVar1 = str_10003bb7;
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
    recovered_100029fc(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_10003ba6
#undef str_10003bb7
#undef acStack_80

#undef str_10003b93
#define str_10003b93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad8
 */

void recovered_10002ad8(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10003b93;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100029fc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10003b93

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_10002b24(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10002458(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10008060
#define DAT_10008060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4550U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b4c
 */

void recovered_10002b4c(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_10002bd0(param_1,0x84000000 - param_1,param_3);
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
#define DAT_10008060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4550U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4558U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd0
 */

void recovered_10002bd0(ulong param_1,ulong param_2,ulong *param_3)

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
 * Address: 0x10002c50
 */

void recovered_10002c50(ulong param_1,ulong param_2,undefined1 *param_3)

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
 * Address: 0x10002ca0
 */

undefined8 recovered_10002ca0(ulong *param_1,long param_2)

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
 * Address: 0x10002cf4
 */

void recovered_10002cf4(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002d14(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_10008070
#define DAT_10008070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d14
 */

undefined8 recovered_10002d14(ulong *param_1)

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
 * Address: 0x10002d9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002d9c(int param_1)

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
 * Address: 0x10002f34
 */

undefined8 recovered_10002f34(uint param_1,uint param_2,uint *param_3,uint *param_4,ulong *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;

  uVar5 = 1;
  if (((param_3 != (uint *)0x0) && (param_4 != (uint *)0x0)) && (param_5 != (ulong *)0x0)) {
    uVar2 = *param_3;
    if ((uVar2 - 0x21 < 0xffffffe0) || (uVar3 = param_3[1], uVar3 - 0x21 < 0xffffffe0)) {
      return 2;
    }
    if (param_1 == 0) {
      return 3;
    }
    if (param_2 == 0) {
      return 3;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_1 / uVar2;
    }
    if (param_1 != uVar4 * uVar2) {
      return 3;
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_2 / uVar3;
    }
    if (param_2 != uVar6 * uVar3) {
      return 3;
    }
    uVar1 = uVar4;
    if (param_3[3] != 0) {
      uVar1 = param_3[3];
    }
    if (uVar4 <= uVar1 - 1) {
      return 4;
    }
    uVar4 = param_3[2];
    uVar8 = (ulong)uVar6 * (ulong)uVar1;
    uVar7 = (ulong)param_3[4];
    if (param_3[4] == 0) {
      if (0x100 < uVar8) {
        return 5;
      }
      uVar7 = uVar8;
    }
    uVar6 = (uint)uVar7;
    if (uVar6 - 0x101 < 0xffffff00 || uVar8 < (uVar7 & 0xffffffff)) {
      return 5;
    }
    uVar5 = 6;
    if ((uVar4 < 0x100) && (uVar6 + uVar4 < 0x101)) {
      *param_4 = uVar2;
      param_4[1] = uVar3;
      param_4[2] = uVar4;
      param_4[3] = uVar1;
      param_4[4] = uVar6;
      *param_5 = (ulong)(uVar3 * (uVar2 + 7 >> 3) * uVar6 + 0xc);
      return 0;
    }
  }
  return uVar5;
}


#undef DAT_10003b78
#define DAT_10003b78 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x68U)))
#define local_70 (*(ulong *)(pf_stack_frame + 16))
#define local_64 (*(uint *)(pf_stack_frame + 28))
#define local_5c (*(undefined1 *)(pf_stack_frame + 36))
#define local_54 (*(uint *)(pf_stack_frame + 44))
#define uStack_60 (*(uint *)(pf_stack_frame + 32))
#define uStack_58 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003034
 */

undefined8
recovered_10003034(long param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,uint *param_6,
                  ulong *param_7,ulong param_8,ulong *param_9)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;

  local_70 = 0;
  uVar5 = recovered_10002f34(param_3,param_4,param_6,&local_64,&local_70);
  if (param_9 != (ulong *)0x0) {
    *param_9 = local_70;
  }
  if (((((int)uVar5 == 0) && (uVar5 = 1, param_1 != 0)) && (param_7 != (ulong *)0x0)) &&
     (param_9 != (ulong *)0x0)) {
    if ((param_5 & 0xffffffff) < (ulong)param_3 << 2 ||
        param_2 < (param_5 & 0xffffffff) * (ulong)param_4) {
      uVar5 = 7;
    }
    else if (param_8 < local_70) {
      uVar5 = 8;
    }
    else {
      recovered_10001530(param_7,0,local_70);
      *(int *)param_7 = (int)DAT_10003b78;
      *(char *)((long)param_7 + 4) = (char)local_64;
      *(char *)((long)param_7 + 5) = (char)uStack_60;
      *(undefined1 *)((long)param_7 + 6) = local_5c;
      uVar2 = local_64 + 7 >> 3;
      *(char *)((long)param_7 + 7) = (char)local_54;
      *(char *)(param_7 + 1) = (char)uVar2;
      for (uVar8 = 0; uVar8 != local_54; uVar8 = uVar8 + 1) {
        uVar6 = 0;
        uVar3 = 0;
        if (uStack_58 != 0) {
          uVar3 = (uint)uVar8 / uStack_58;
        }
        for (; uVar6 != uStack_60; uVar6 = uVar6 + 1) {
          lVar4 = uVar6 * uVar2 + (ulong)uStack_60 * (ulong)uVar2 * uVar8 + 0xc;
          for (uVar7 = 0; local_64 != uVar7; uVar7 = uVar7 + 1) {
            pbVar1 = (byte *)(param_1 + (param_5 & 0xffffffff) *
                                        (ulong)(uVar3 * uStack_60 + (int)uVar6) +
                             (ulong)(((uint)uVar8 - uVar3 * uStack_58) * local_64 + (uint)uVar7) * 4
                             );
            if (((char)pbVar1[3] < '\0') &&
               ((uint)*pbVar1 * 299 + (uint)pbVar1[1] * 0x24b + (uint)pbVar1[2] * 0x72 >> 10 < 0x7d)
               ) {
              uVar9 = uVar7 >> 3 & 0x1fffffff;
              *(byte *)((long)param_7 + uVar9 + lVar4) =
                   *(byte *)((long)param_7 + uVar9 + lVar4) |
                   (byte)(0x80 >> (ulong)((uint)uVar7 & 7));
            }
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

#undef DAT_10003b78
#undef local_70
#undef local_64
#undef local_5c
#undef local_54
#undef uStack_60
#undef uStack_58

#undef DAT_10003bcb
#define DAT_10003bcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef str_10003b80
#define str_10003b80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003200
 */

undefined8 recovered_10003200(char *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;

  if ((((param_1 == (char *)0x0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) ||
     (cVar1 = *param_1, pcVar6 = param_1, cVar1 == '\0')) {
    return 9;
  }
  do {
    pcVar6 = pcVar6 + 1;
    if ((cVar1 == '/') || (cVar1 == '\\')) {
      param_1 = pcVar6;
    }
    else if (cVar1 == '\0') break;
    cVar1 = *pcVar6;
  } while( true );
  if (*param_1 != '\0') {
    uVar4 = recovered_10001820((long)param_1);
    uVar5 = uVar4;
    do {
      uVar7 = uVar4;
      if (uVar5 == 0) break;
      lVar2 = uVar5 - 1;
      uVar7 = uVar5 - 1;
      bVar3 = uVar5 == 1;
      uVar5 = uVar7;
    } while (param_1[lVar2] != '.' || bVar3);
    if (uVar7 != 0 && uVar7 + 0x15 <= param_3) {
      recovered_10001344(param_2,str_10003b80,0x10);
      recovered_10001344(param_2 + 0x10,param_1,uVar7);
      recovered_10001344(param_2 + 0x10 + uVar7,&DAT_10003bcb,5);
      return 0;
    }
  }
  return 9;
}

#undef DAT_10003bcb
#undef str_10003b80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f4
 */

undefined8 recovered_100032f4(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;

  uVar4 = 0;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    for (; (bVar2 = *param_1, bVar2 == 9 || (bVar2 == 0x20)); param_1 = param_1 + 1) {
    }
    if (bVar2 == 0x30) {
      uVar7 = 0x10;
      pbVar1 = param_1 + 2;
      if ((param_1[1] | 0x20) != 0x78) {
        uVar7 = 10;
        pbVar1 = param_1;
      }
      param_1 = pbVar1;
    }
    else {
      uVar7 = 10;
    }
    uVar6 = 0;
    iVar8 = 0;
    while( true ) {
      bVar2 = *param_1;
      uVar11 = (ulong)bVar2;
      if (bVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100000201U) != 0) break;
      uVar9 = (uint)bVar2;
      if (uVar9 - 0x30 < 10) {
        uVar9 = uVar9 - 0x30 & 0xff;
      }
      else if (uVar9 - 0x61 < 6) {
        uVar9 = bVar2 - 0x57;
      }
      else {
        if (5 < uVar9 - 0x41) {
          return 0;
        }
        uVar9 = uVar9 - 0x37;
      }
      if (uVar7 <= uVar9) {
        return 0;
      }
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = ~uVar9 / uVar7;
      }
      if (uVar3 < uVar6) {
        return 0;
      }
      uVar6 = uVar9 + uVar6 * uVar7;
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 1;
    }
    lVar5 = 1;
    while (iVar10 = (int)uVar11, iVar10 == 0x20 || iVar10 == 9) {
      pbVar1 = param_1 + lVar5;
      lVar5 = lVar5 + 1;
      uVar11 = (ulong)*pbVar1;
    }
    uVar4 = 0;
    if ((iVar8 != 0) && (iVar10 == 0)) {
      *param_2 = uVar6;
      uVar4 = 1;
    }
  }
  return uVar4;
}


#undef PTR_DAT_10004000
#define PTR_DAT_10004000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef str_10003d50
#define str_10003d50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003420
 */

char * recovered_10003420(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 10) {
    return (&PTR_DAT_10004000)[param_1];
  }
  return str_10003d50;
}

#undef PTR_DAT_10004000
#undef str_10003d50

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef DAT_82010858
#define DAT_82010858 (*(uint8_t *)(0x82010858U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
#undef _DAT_82010858
#define _DAT_82010858 (*(uint *)(0x82010858U))
#undef str_10003d6e
#define str_10003d6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25eU)))
#undef str_10003d98
#define str_10003d98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x288U)))
#undef str_10003da9
#define str_10003da9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_10003dbc
#define str_10003dbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2acU)))
#undef str_10003dd1
#define str_10003dd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c1U)))
#undef str_10003de7
#define str_10003de7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d7U)))
#undef str_10003e02
#define str_10003e02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_10003e1e
#define str_10003e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
#undef str_10003e38
#define str_10003e38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x328U)))
#undef str_10003e51
#define str_10003e51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x341U)))
#undef str_10003e6e
#define str_10003e6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35eU)))
#undef str_10003ea9
#define str_10003ea9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#undef str_10003ebf
#define str_10003ebf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3afU)))
#undef str_10003edf
#define str_10003edf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cfU)))
#undef str_10003eed
#define str_10003eed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ddU)))
#undef str_10003f0d
#define str_10003f0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fdU)))
#undef str_10003f2e
#define str_10003f2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41eU)))
#undef str_10003f34
#define str_10003f34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_10003f44
#define str_10003f44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x434U)))
#undef str_10003f61
#define str_10003f61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#define acStack_1031 (*(char (*)[4145])(pf_stack_frame + 8383))
#define local_30e0 (*(ulong *)(pf_stack_frame + 16))
#define uStack_30d4 (*(ulong *)(pf_stack_frame + 28))
#define uStack_30cc (*(uint *)(pf_stack_frame + 36))
#define uStack_30c8 (*(uint *)(pf_stack_frame + 40))
#define uStack_30c4 (*(uint *)(pf_stack_frame + 44))
#define uStack_30c0 (*(uint *)(pf_stack_frame + 48))
#define auStack_30bc (*(ulong (*)[1559])(pf_stack_frame + 52))
#define uStack_30ac (*(uint *)(pf_stack_frame + 68))
#define uStack_30a8 (*(undefined8 *)(pf_stack_frame + 72))
#define uStack_30a0 (*(uint *)(pf_stack_frame + 80))
#define uStack_309c (*(uint *)(pf_stack_frame + 84))
#define uStack_3098 (*(uint *)(pf_stack_frame + 88))
#define acStack_3093 (*(char (*)[12435])(pf_stack_frame + 93))
#define auStack_2032 (*(undefined1 (*)[8242])(pf_stack_frame + 4286))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003444
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003444(void)

{
  unsigned char pf_stack_frame[12560] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong *puVar6;
  ulong uVar7;

  local_30e0 = 0;
  recovered_10001530(&uStack_30a8,0,0x14);
  recovered_10001530(auStack_30bc,0,0x14);
  recovered_10001530(&uStack_30d4,0,0x18);
  recovered_10003744(str_10003d6e);
  acStack_1031[0] = '\0';
  uVar3 = recovered_1000376c(acStack_1031,0x1001,str_10003d98);
  if (((((int)uVar3 == 0) || (acStack_1031[0] == '\0')) ||
      (bVar1 = recovered_100037d0(str_10003dbc,(uint *)&uStack_30a8), !bVar1)) ||
     (((bVar1 = recovered_100037d0(str_10003dd1,(uint *)((long)&uStack_30a8 + 4)), !bVar1 ||
       (bVar1 = recovered_10003854(str_10003de7,0xff,&uStack_30a0), !bVar1)) ||
      ((bVar1 = recovered_10003854(str_10003e02,0xffffffff,&uStack_309c), !bVar1 ||
       (bVar1 = recovered_10003854(str_10003e1e,0x100,&uStack_3098), !bVar1)))))) {
    recovered_10003744(str_10003da9);
    return 1;
  }
  bVar1 = recovered_10003a64(0x58);
  if (((!bVar1) || (_DAT_82010858 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010858)(acStack_1031,&uStack_30d4), iVar2 == 0)) {
    acStack_3093[0] = '\0';
    recovered_100038e4(acStack_3093);
    pcVar5 = str_10003e38;
    pcVar4 = acStack_3093;
LAB_100035cc:
    recovered_10003930(pcVar5,pcVar4);
    return 1;
  }
  if (uStack_30d4 == 0) {
    pcVar5 = str_10003e51;
    pcVar4 = str_10003e6e;
    goto LAB_100035cc;
  }
  uVar3 = recovered_10002f34(uStack_30c8,uStack_30c4,(uint *)&uStack_30a8,(uint *)auStack_30bc,
                             &local_30e0);
  uVar7 = local_30e0;
  if ((uint)uVar3 == 0) {
    bVar1 = recovered_10003a64(0x4c);
    if (((bVar1) && (_DAT_8201084c != 0)) &&
       (puVar6 = (ulong *)(*(code *)(ulong)_DAT_8201084c)(uVar7), puVar6 != (ulong *)0x0)) {
      uVar3 = recovered_10003034(uStack_30d4,(ulong)uStack_30cc,uStack_30c8,uStack_30c4,
                                 (ulong)uStack_30c0,(uint *)&uStack_30a8,puVar6,local_30e0,
                                 &local_30e0);
      if ((uint)uVar3 == 0) {
        uVar3 = recovered_10003200(acStack_1031,auStack_2032,0x1001);
        if ((uint)uVar3 != 0) {
          pcVar4 = recovered_10003420((uint)uVar3);
          pcVar5 = str_10003f0d;
          goto LAB_10003730;
        }
        recovered_100039b0(str_10003f2e);
        recovered_100039b0(str_10003f34);
        uVar7 = local_30e0 & 0xffffffff;
        bVar1 = recovered_10003a64(0x38);
        if ((!bVar1) || (_DAT_82010838 == 0)) {
LAB_10003720:
          acStack_3093[0] = '\0';
          recovered_100038e4(acStack_3093);
          pcVar5 = str_10003f44;
          pcVar4 = acStack_3093;
          goto LAB_10003730;
        }
        iVar2 = (*(code *)(ulong)_DAT_82010838)(auStack_2032,puVar6,uVar7);
        if (iVar2 == 0) goto LAB_10003720;
        recovered_10002b24(acStack_3093,0x1061,str_10003f61,uStack_30ac,auStack_2032);
        recovered_10003744(acStack_3093);
        uVar3 = 0;
      }
      else {
        pcVar4 = recovered_10003420((uint)uVar3);
        pcVar5 = str_10003eed;
LAB_10003730:
        recovered_10003930(pcVar5,pcVar4);
        uVar3 = 1;
      }
      recovered_100039ec(puVar6);
      goto LAB_10003668;
    }
    pcVar5 = str_10003ebf;
    pcVar4 = str_10003edf;
  }
  else {
    pcVar4 = recovered_10003420((uint)uVar3);
    pcVar5 = str_10003ea9;
  }
  recovered_10003930(pcVar5,pcVar4);
  uVar3 = 1;
LAB_10003668:
  recovered_100039ec(uStack_30d4);
  return uVar3;
}

#undef DAT_82010838
#undef DAT_8201084c
#undef DAT_82010858
#undef _DAT_82010838
#undef _DAT_8201084c
#undef _DAT_82010858
#undef str_10003d6e
#undef str_10003d98
#undef str_10003da9
#undef str_10003dbc
#undef str_10003dd1
#undef str_10003de7
#undef str_10003e02
#undef str_10003e1e
#undef str_10003e38
#undef str_10003e51
#undef str_10003e6e
#undef str_10003ea9
#undef str_10003ebf
#undef str_10003edf
#undef str_10003eed
#undef str_10003f0d
#undef str_10003f2e
#undef str_10003f34
#undef str_10003f44
#undef str_10003f61
#undef acStack_1031
#undef local_30e0
#undef uStack_30d4
#undef uStack_30cc
#undef uStack_30c8
#undef uStack_30c4
#undef uStack_30c0
#undef auStack_30bc
#undef uStack_30ac
#undef uStack_30a8
#undef uStack_30a0
#undef uStack_309c
#undef uStack_3098
#undef acStack_3093
#undef auStack_2032

#undef DAT_10003f77
#define DAT_10003f77 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x467U)))
#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef _DAT_82010828
#define _DAT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003744
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003744(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    recovered_10003a28(param_1);
  }
  bVar1 = recovered_10003a64(0x28);
  if ((bVar1) && (_DAT_82010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100106a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010828)(&DAT_10003f77);
    return;
  }
  return;
}

#undef DAT_10003f77
#undef DAT_82010828
#undef _DAT_82010828

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000376c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000376c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003a64(0x44);
  if ((bVar1) && (_DAT_82010844 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100037c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010844)(param_1,param_2,param_3,1);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010844
#undef _DAT_82010844

#undef str_10003f7a
#define str_10003f7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46aU)))
#undef str_10003f88
#define str_10003f88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
#define local_80 (*(byte (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037d0
 */

bool recovered_100037d0(undefined8 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  while( true ) {
    local_80[0] = 0;
    uVar1 = recovered_1000376c(local_80,0x40,param_1);
    if (((int)uVar1 == 0) ||
       ((uVar2 = recovered_100032f4(local_80,param_2), (int)uVar2 != 0 && (*param_2 - 1 < 0x20))))
    break;
    recovered_10003930(str_10003f7a,str_10003f88);
  }
  return (int)uVar1 != 0;
}

#undef str_10003f7a
#undef str_10003f88
#undef local_80

#undef str_10003f7a
#define str_10003f7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46aU)))
#undef str_10003fb0
#define str_10003fb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a0U)))
#define local_80 (*(byte (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003854
 */

bool recovered_10003854(undefined8 param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  do {
    local_80[0] = 0;
    uVar1 = recovered_1000376c(local_80,0x40,param_1);
    if ((int)uVar1 == 0) {
LAB_100038d4:
      return (int)uVar1 != 0;
    }
    if (local_80[0] == 0) {
      *param_3 = 0;
      goto LAB_100038d4;
    }
    uVar2 = recovered_100032f4(local_80,param_3);
    if (((int)uVar2 != 0) && (*param_3 <= param_2)) goto LAB_100038d4;
    recovered_10003930(str_10003f7a,str_10003fb0);
  } while( true );
}

#undef str_10003f7a
#undef str_10003fb0
#undef local_80

#undef DAT_82010958
#define DAT_82010958 (*(uint8_t *)(0x82010958U))
#undef _DAT_82010958
#define _DAT_82010958 (*(uint *)(0x82010958U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100038e4(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10003a64(0x158);
  if (bVar1) {
    if (_DAT_82010958 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000391c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_82010958)(param_1,0xa0);
      return;
    }
  }
  else if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return;
}

#undef DAT_82010958
#undef _DAT_82010958

#undef DAT_10003ba5
#define DAT_10003ba5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x95U)))
#undef DAT_10003ff1
#define DAT_10003ff1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e1U)))
#undef str_10003fda
#define str_10003fda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4caU)))
#undef str_10003fea
#define str_10003fea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4daU)))
#define acStack_120 (*(char (*)[288])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003930
 */

void recovered_10003930(char *message,char *detail)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char *arg3;
  undefined *arg4;
  char *arg5;

  arg4 = &DAT_10003ba5;
  if (detail == (char *)0x0) {
    arg5 = &DAT_10003ba5;
  }
  else {
    arg5 = &DAT_10003ba5;
    if (*detail != '\0') {
      arg5 = detail;
    }
    arg4 = &DAT_10003ba5;
    if (*detail != '\0') {
      arg4 = &DAT_10003ff1;
    }
  }
  arg3 = str_10003fea;
  if (message != (char *)0x0) {
    arg3 = message;
  }
  recovered_10002b24(acStack_120,0x100,str_10003fda,arg3,arg4,arg5);
  recovered_10003744(acStack_120);
  return;
}

#undef DAT_10003ba5
#undef DAT_10003ff1
#undef str_10003fda
#undef str_10003fea
#undef acStack_120

#undef DAT_8201088c
#define DAT_8201088c (*(uint8_t *)(0x8201088cU))
#undef _DAT_8201088c
#define _DAT_8201088c (*(uint *)(0x8201088cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100039b0(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10003a64(0x8c);
  if ((bVar1) && (_DAT_8201088c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001066c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_8201088c)(param_1);
    return;
  }
  return;
}

#undef DAT_8201088c
#undef _DAT_8201088c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100039ec(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10003a64(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef _DAT_82010828
#define _DAT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003a28(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10003a64(0x28);
  if ((bVar1) && (_DAT_82010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100106a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010828)(param_1);
    return;
  }
  return;
}

#undef DAT_82010828
#undef _DAT_82010828

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
 * Address: 0x10003a64
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003a64(int param_1)

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
